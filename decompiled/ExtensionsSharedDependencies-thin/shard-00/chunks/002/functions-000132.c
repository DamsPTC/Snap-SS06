/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0034dd94; end: 0034de57;  */

uint * FUN_0034dd94(undefined8 *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint **ppuVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_108;
  uint *apuStack_48 [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar12 = *param_1;
  FUN_0034b930(apuStack_48,param_1 + 1,param_1[5]);
  ppuVar7 = apuStack_48;
  FUN_0034de58(uVar12);
  puVar4 = apuStack_48[0];
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
      puVar4 = apuStack_48[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 != 0) {
    func_0x0040cf10();
    FUN_0034b418(apuStack_48);
  }
  __Unwind_Resume();
  lVar8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = *puVar4;
  *puVar4 = uVar1 | 0x800000;
  if ((uVar1 >> 0x17 & 1) == 0) {
    puVar13 = ppuVar7[1];
    puVar11 = *ppuVar7;
    puVar10 = ppuVar7[3];
    puVar5 = ppuVar7[2];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    *(uint **)(puVar4 + 0x12) = puVar13;
    *(uint **)(puVar4 + 0x10) = puVar11;
    *(uint **)(puVar4 + 0x16) = puVar10;
    *(uint **)(puVar4 + 0x14) = puVar5;
    puVar5 = puVar4;
  }
  else {
    puVar10 = *ppuVar7;
    puVar11 = ppuVar7[3];
    puVar14 = ppuVar7[2];
    puVar13 = ppuVar7[1];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    puVar5 = *(uint **)(puVar4 + 0x10);
    *(uint **)(puVar4 + 0x10) = puVar10;
    *(uint **)(puVar4 + 0x14) = puVar14;
    *(uint **)(puVar4 + 0x12) = puVar13;
    *(uint **)(puVar4 + 0x16) = puVar11;
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar5) {
      do {
        lVar9 = *(long *)puVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar3) {
          *(long *)puVar5 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(puVar5 + 2))();
      }
    }
  }
  iVar6 = (int)ppuVar7;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar8) {
    return puVar4 + 0x10;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x0040cf10();
  lStack_108 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_128 = *(undefined8 *)(puVar5 + 4);
  puStack_130 = *(uint **)(puVar5 + 2);
  uStack_118 = *(undefined8 *)(puVar5 + 8);
  uStack_120 = *(undefined8 *)(puVar5 + 6);
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  FUN_003fe220(*(long *)puVar5 + 0x1f0);
  puVar4 = puStack_130;
  if ((uint *)((long)&MACH_HEADER.magic + 1) < puStack_130) {
    do {
      lVar8 = *(long *)puStack_130;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puStack_130,0x10);
      if (bVar3) {
        *(long *)puStack_130 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(puStack_130 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_108) {
    return puVar4;
  }
  ___stack_chk_fail();
  if (iVar6 != 0) {
    func_0x0040cf10(puVar4);
    FUN_0034b418(&puStack_130);
  }
  __Unwind_Resume(puVar4);
  FUN_0034e02c();
  return puVar4;
}



/* Entry: 0034de58; end: 0034df3f;  */

uint * FUN_0034de58(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_b8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = *param_1;
  *param_1 = uVar1 | 0x800000;
  if ((uVar1 >> 0x17 & 1) == 0) {
    uVar11 = param_2[1];
    uVar10 = *param_2;
    uVar9 = param_2[3];
    uVar8 = param_2[2];
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    *(undefined8 *)(param_1 + 0x12) = uVar11;
    *(undefined8 *)(param_1 + 0x10) = uVar10;
    *(undefined8 *)(param_1 + 0x16) = uVar9;
    *(undefined8 *)(param_1 + 0x14) = uVar8;
    puVar4 = param_1;
  }
  else {
    uVar8 = *param_2;
    uVar9 = param_2[3];
    uVar11 = param_2[2];
    uVar10 = param_2[1];
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    puVar4 = *(uint **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar8;
    *(undefined8 *)(param_1 + 0x14) = uVar11;
    *(undefined8 *)(param_1 + 0x12) = uVar10;
    *(undefined8 *)(param_1 + 0x16) = uVar9;
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar4) {
      do {
        lVar6 = *(long *)puVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar3) {
          *(long *)puVar4 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)(puVar4 + 2))();
      }
    }
  }
  iVar5 = (int)param_2;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar7) {
    return param_1 + 0x10;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x0040cf10();
  lStack_b8 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_d8 = *(undefined8 *)(puVar4 + 4);
  puStack_e0 = *(uint **)(puVar4 + 2);
  uStack_c8 = *(undefined8 *)(puVar4 + 8);
  uStack_d0 = *(undefined8 *)(puVar4 + 6);
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  FUN_003fe220(*(long *)puVar4 + 0x1f0);
  puVar4 = puStack_e0;
  if ((uint *)((long)&MACH_HEADER.magic + 1) < puStack_e0) {
    do {
      lVar7 = *(long *)puStack_e0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puStack_e0,0x10);
      if (bVar3) {
        *(long *)puStack_e0 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(puStack_e0 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_b8) {
    return puVar4;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    func_0x0040cf10(puVar4);
    FUN_0034b418(&puStack_e0);
  }
  __Unwind_Resume(puVar4);
  FUN_0034e02c();
  return puVar4;
}



/* Entry: 0034df40; end: 0034e003;  */

void FUN_0034df40(long *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  long *plStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  lStack_48 = param_1[2];
  plStack_50 = (long *)param_1[1];
  lStack_38 = param_1[4];
  lStack_40 = param_1[3];
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  FUN_003fe220(*param_1 + 0x1f0,param_2,param_3,&plStack_50);
  iVar4 = (int)param_2;
  plVar3 = plStack_50;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_50) {
    do {
      lVar5 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar4 != 0) {
    func_0x0040cf10(plVar3);
    FUN_0034b418(&plStack_50);
  }
  __Unwind_Resume(plVar3);
  FUN_0034e02c();
  return;
}



/* Entry: 0034e004; end: 0034e02b;  */

void FUN_0034e004(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  FUN_0034e02c(param_1,&uStack_20,param_4);
  return;
}



/* Entry: 0034e02c; end: 0034e13f;  */

void FUN_0034e02c(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  char *apcStack_98 [2];
  char cStack_81;
  undefined8 uStack_80;
  undefined8 uStack_78;
  char *pcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  char *pcStack_50;
  undefined8 uStack_48;
  long lStack_40;
  ulong uStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_38 = param_3[1] & 0xff;
  lStack_40 = (long)param_3 + 9;
  if (*param_3 != 0) {
    uStack_38 = param_3[1];
    lStack_40 = param_3[2];
  }
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  pcStack_70 = " key:";
  uStack_68 = 5;
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  pcStack_50 = " value:";
  uStack_48 = 7;
  FUN_00575fc4(apcStack_98,&uStack_80,5);
  pcVar1 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
  ;
  uVar2 = 0x9b1;
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
               ,0x9b1,2,"%s");
  if (cStack_81 < '\0') {
    pcVar1 = apcStack_98[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_81 < '\0') {
    __ZdlPv(apcStack_98[0]);
  }
  __Unwind_Resume();
  FUN_0034e3a8();
  plVar3 = *(long **)(pcVar1 + 0x1f8);
  if ((plVar3 != (long *)0x0) && (plVar3[1] == 0)) {
    plVar3 = (long *)0x0;
  }
  lVar4 = 0;
LAB_0034e178:
  do {
    while (plVar3 == (long *)0x0) {
      if (lVar4 == 0) {
        return;
      }
      FUN_0034e1e8(uVar2,lVar4 << 6 | 0x10,lVar4 << 6 | 0x30);
      lVar4 = lVar4 + 1;
      plVar3 = (long *)0x0;
    }
    FUN_0034e1e8(uVar2,plVar3 + lVar4 * 8 + 2,plVar3 + lVar4 * 8 + 6);
    lVar4 = lVar4 + 1;
    do {
      if (lVar4 != plVar3[1]) goto LAB_0034e178;
      lVar4 = 0;
      plVar3 = (long *)*plVar3;
    } while (plVar3 != (long *)0x0);
    lVar4 = 0;
  } while( true );
}



/* Entry: 0034e140; end: 0034e1e7;  */

void FUN_0034e140(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  
  FUN_0034e3a8();
  plVar1 = *(long **)(param_1 + 0x1f8);
  if ((plVar1 != (long *)0x0) && (plVar1[1] == 0)) {
    plVar1 = (long *)0x0;
  }
  lVar2 = 0;
LAB_0034e178:
  do {
    while (plVar1 == (long *)0x0) {
      if (lVar2 == 0) {
        return;
      }
      FUN_0034e1e8(param_2,lVar2 << 6 | 0x10,lVar2 << 6 | 0x30);
      lVar2 = lVar2 + 1;
      plVar1 = (long *)0x0;
    }
    FUN_0034e1e8(param_2,plVar1 + lVar2 * 8 + 2,plVar1 + lVar2 * 8 + 6);
    lVar2 = lVar2 + 1;
    do {
      if (lVar2 != plVar1[1]) goto LAB_0034e178;
      lVar2 = 0;
      plVar1 = (long *)*plVar1;
    } while (plVar1 != (long *)0x0);
    lVar2 = 0;
  } while( true );
}



/* Entry: 0034e1e8; end: 0034e3a7;  */

void FUN_0034e1e8(undefined8 param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 ***pppuVar3;
  undefined1 **ppuVar4;
  undefined1 **ppuVar5;
  ulong uVar6;
  long lVar7;
  undefined1 *puStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 **ppuStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  
  ppuVar4 = &puStack_80;
  ppuVar5 = &puStack_80;
  if (*param_2 == 0) {
    lVar7 = (long)param_2 + 9;
    uVar6 = (ulong)*(byte *)(param_2 + 1);
  }
  else {
    uVar6 = param_2[1];
    if (0x7ffffffffffffff7 < uVar6) {
      func_0x0033b318(&ppuStack_68);
      goto LAB_0034e368;
    }
    lVar7 = param_2[2];
  }
  if (uVar6 < 0x17) {
    uStack_58 = CONCAT17((char)uVar6,(undefined7)uStack_58);
    pppuVar3 = &ppuStack_68;
    if (uVar6 != 0) goto LAB_0034e280;
  }
  else {
    uVar1 = (uVar6 & 0x7ffffffffffffff8) + 8;
    if ((uVar6 | 7) != 0x17) {
      uVar1 = uVar6 | 7;
    }
    pppuVar3 = (undefined8 ***)(uVar1 + 1);
    __Znwm();
    uStack_58 = uVar1 + 1 | 0x8000000000000000;
    ppuStack_68 = pppuVar3;
    uStack_60 = uVar6;
LAB_0034e280:
    _memmove(pppuVar3,lVar7,uVar6);
  }
  *(undefined1 *)((long)pppuVar3 + uVar6) = 0;
  if (*param_3 == 0) {
    lVar7 = (long)param_3 + 9;
    uVar6 = (ulong)*(byte *)(param_3 + 1);
  }
  else {
    uVar6 = param_3[1];
    if (0x7ffffffffffffff7 < uVar6) {
LAB_0034e368:
      func_0x0033b318(&puStack_80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x34e374);
      (*pcVar2)();
    }
    lVar7 = param_3[2];
  }
  if (uVar6 < 0x17) {
    uStack_70 = CONCAT17((char)uVar6,(undefined7)uStack_70);
    if (uVar6 == 0) goto LAB_0034e310;
  }
  else {
    uVar1 = (uVar6 & 0x7ffffffffffffff8) + 8;
    if ((uVar6 | 7) != 0x17) {
      uVar1 = uVar6 | 7;
    }
    ppuVar4 = (undefined1 **)(uVar1 + 1);
    __Znwm();
    uStack_70 = (ulong)(uVar1 + 1) | 0x8000000000000000;
    puStack_80 = (undefined1 *)ppuVar4;
    uStack_78 = uVar6;
  }
  _memmove(ppuVar4,lVar7,uVar6);
  ppuVar5 = ppuVar4;
LAB_0034e310:
  *(undefined1 *)((long)ppuVar5 + uVar6) = 0;
  FUN_0034e794(param_1,&ppuStack_68,&puStack_80);
  if ((long)uStack_70 < 0) {
    __ZdlPv(puStack_80);
  }
  if ((long)uStack_58 < 0) {
    __ZdlPv(ppuStack_68);
  }
  return;
}



/* Entry: 0034e3a8; end: 0034e5af;  */

void FUN_0034e3a8(uint *param_1,undefined8 param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 **ppuVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 **ppuVar11;
  undefined1 *puStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  char cStack_71;
  long *plStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  uVar6 = *param_1;
  if ((uVar6 >> 1 & 1) == 0) {
    if ((uVar6 >> 3 & 1) != 0) goto LAB_0034e444;
LAB_0034e3c8:
    if ((uVar6 >> 4 & 1) != 0) goto LAB_0034e458;
LAB_0034e3cc:
    if ((uVar6 >> 5 & 1) != 0) goto LAB_0034e46c;
LAB_0034e3d0:
    if ((uVar6 >> 6 & 1) != 0) goto LAB_0034e480;
LAB_0034e3d4:
    if ((uVar6 >> 7 & 1) != 0) goto LAB_0034e494;
LAB_0034e3d8:
    if ((uVar6 >> 8 & 1) != 0) goto LAB_0034e4a8;
LAB_0034e3dc:
    if ((uVar6 >> 9 & 1) != 0) goto LAB_0034e4bc;
LAB_0034e3e0:
    if ((uVar6 >> 10 & 1) != 0) goto LAB_0034e4d0;
LAB_0034e3e4:
    if ((uVar6 >> 0xc & 1) != 0) goto LAB_0034e4e4;
LAB_0034e3e8:
    if ((uVar6 >> 0xd & 1) != 0) goto LAB_0034e4f8;
LAB_0034e3ec:
    if ((uVar6 >> 0xe & 1) != 0) goto LAB_0034e50c;
LAB_0034e3f0:
    if ((uVar6 >> 0xf & 1) != 0) goto LAB_0034e520;
LAB_0034e3f4:
    if ((uVar6 >> 0x10 & 1) != 0) goto LAB_0034e534;
LAB_0034e3f8:
    if ((uVar6 >> 0x11 & 1) != 0) goto LAB_0034e548;
LAB_0034e3fc:
    if ((uVar6 >> 0x12 & 1) != 0) goto LAB_0034e55c;
LAB_0034e400:
    if ((uVar6 >> 0x13 & 1) != 0) goto LAB_0034e570;
LAB_0034e404:
    if ((uVar6 >> 0x14 & 1) != 0) goto LAB_0034e584;
LAB_0034e408:
    if ((uVar6 >> 0x15 & 1) != 0) goto LAB_0034e598;
LAB_0034e40c:
    if ((uVar6 >> 0x16 & 1) != 0) {
      FUN_00350968(param_1 + 0x18,param_2);
      uVar6 = *param_1;
    }
    if ((uVar6 >> 0x17 & 1) == 0) {
      return;
    }
  }
  else {
    FUN_0034e5b0(param_2,param_1 + 0x6c);
    uVar6 = *param_1;
    if ((uVar6 >> 3 & 1) == 0) goto LAB_0034e3c8;
LAB_0034e444:
    FUN_0034e9a0(param_2,param_1 + 0x69);
    uVar6 = *param_1;
    if ((uVar6 >> 4 & 1) == 0) goto LAB_0034e3cc;
LAB_0034e458:
    FUN_0034ebec(param_2,param_1 + 0x68);
    uVar6 = *param_1;
    if ((uVar6 >> 5 & 1) == 0) goto LAB_0034e3d0;
LAB_0034e46c:
    FUN_0034ed7c(param_2,param_1 + 0x67);
    uVar6 = *param_1;
    if ((uVar6 >> 6 & 1) == 0) goto LAB_0034e3d4;
LAB_0034e480:
    FUN_0034ef10(param_2,param_1 + 0x66);
    uVar6 = *param_1;
    if ((uVar6 >> 7 & 1) == 0) goto LAB_0034e3d8;
LAB_0034e494:
    FUN_0034f0c0(param_2,param_1 + 0x65);
    uVar6 = *param_1;
    if ((uVar6 >> 8 & 1) == 0) goto LAB_0034e3dc;
LAB_0034e4a8:
    FUN_0034f2d0(param_2,param_1 + 100);
    uVar6 = *param_1;
    if ((uVar6 >> 9 & 1) == 0) goto LAB_0034e3e0;
LAB_0034e4bc:
    FUN_0034f4b8(param_2,param_1 + 99);
    uVar6 = *param_1;
    if ((uVar6 >> 10 & 1) == 0) goto LAB_0034e3e4;
LAB_0034e4d0:
    FUN_0034f694(param_2,param_1 + 0x62);
    uVar6 = *param_1;
    if ((uVar6 >> 0xc & 1) == 0) goto LAB_0034e3e8;
LAB_0034e4e4:
    FUN_0034f868(param_2,param_1 + 0x5e);
    uVar6 = *param_1;
    if ((uVar6 >> 0xd & 1) == 0) goto LAB_0034e3ec;
LAB_0034e4f8:
    FUN_0034fa50(param_2,param_1 + 0x5c);
    uVar6 = *param_1;
    if ((uVar6 >> 0xe & 1) == 0) goto LAB_0034e3f0;
LAB_0034e50c:
    FUN_0034fc1c(param_2,param_1 + 0x54);
    uVar6 = *param_1;
    if ((uVar6 >> 0xf & 1) == 0) goto LAB_0034e3f4;
LAB_0034e520:
    FUN_0034fe00(param_2,param_1 + 0x4c);
    uVar6 = *param_1;
    if ((uVar6 >> 0x10 & 1) == 0) goto LAB_0034e3f8;
LAB_0034e534:
    FUN_0034ffe8(param_2,param_1 + 0x44);
    uVar6 = *param_1;
    if ((uVar6 >> 0x11 & 1) == 0) goto LAB_0034e3fc;
LAB_0034e548:
    FUN_003501c0(param_2,param_1 + 0x3c);
    uVar6 = *param_1;
    if ((uVar6 >> 0x12 & 1) == 0) goto LAB_0034e400;
LAB_0034e55c:
    FUN_003503bc(param_2,param_1 + 0x34);
    uVar6 = *param_1;
    if ((uVar6 >> 0x13 & 1) == 0) goto LAB_0034e404;
LAB_0034e570:
    FUN_003505a0(param_2,param_1 + 0x2c);
    uVar6 = *param_1;
    if ((uVar6 >> 0x14 & 1) == 0) goto LAB_0034e408;
LAB_0034e584:
    FUN_00350784(param_2,param_1 + 0x24);
    uVar6 = *param_1;
    if ((uVar6 >> 0x15 & 1) == 0) goto LAB_0034e40c;
LAB_0034e598:
    _abort();
  }
  ppuVar5 = &puStack_a0;
  ppuVar11 = &puStack_a0;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar7 = *(long **)(param_1 + 0x10);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar7) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_68 = *(ulong *)(param_1 + 0x12);
  plStack_70 = *(long **)(param_1 + 0x10);
  uStack_58 = *(undefined8 *)(param_1 + 0x16);
  uStack_60 = *(ulong *)(param_1 + 0x14);
  cStack_71 = '\b';
  uStack_88 = 0x6e656b6f742d626c;
  uStack_80 = 0;
  if (plStack_70 == (long *)0x0) {
    uVar9 = uStack_68 & 0xff;
    uVar10 = (ulong)&plStack_70 | 9;
  }
  else {
    uVar9 = uStack_68;
    uVar10 = uStack_60;
    if (0x7ffffffffffffff7 < uStack_68) goto LAB_00350d20;
  }
  if (uVar9 < 0x17) {
    uStack_90 = CONCAT17((char)uVar9,(undefined7)uStack_90);
    if (uVar9 != 0) goto LAB_00350c80;
  }
  else {
    uVar1 = (uVar9 & 0x7ffffffffffffff8) + 8;
    if ((uVar9 | 7) != 0x17) {
      uVar1 = uVar9 | 7;
    }
    ppuVar5 = (undefined1 **)(uVar1 + 1);
    __Znwm();
    uStack_90 = (ulong)(uVar1 + 1) | 0x8000000000000000;
    puStack_a0 = (undefined1 *)ppuVar5;
    uStack_98 = uVar9;
LAB_00350c80:
    _memmove(ppuVar5,uVar10,uVar9);
    ppuVar11 = ppuVar5;
  }
  *(undefined1 *)((long)ppuVar11 + uVar9) = 0;
  FUN_0034e794(param_2,&uStack_88,&puStack_a0);
  if ((long)uStack_90 < 0) {
    __ZdlPv(puStack_a0);
  }
  if (cStack_71 < '\0') {
    __ZdlPv(uStack_88);
  }
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_70) {
    do {
      lVar8 = *plStack_70;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
      if (bVar3) {
        *plStack_70 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_70[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_00350d20:
  func_0x0033b318(&puStack_a0);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x350d2c);
  (*pcVar4)();
}



/* Entry: 0034e5b0; end: 0034e793;  */

void FUN_0034e5b0(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 **ppuVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 **ppuVar10;
  undefined1 *puStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  char acStack_88 [23];
  char cStack_71;
  long *plStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  ppuVar5 = &puStack_a0;
  ppuVar10 = &puStack_a0;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar6 = (long *)*param_2;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar6) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_68 = param_2[1];
  plStack_70 = (long *)*param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  cStack_71 = '\n';
  builtin_strncpy(acStack_88,":authority",0xb);
  if (plStack_70 == (long *)0x0) {
    uVar8 = uStack_68 & 0xff;
    uVar9 = (ulong)&plStack_70 | 9;
  }
  else {
    uVar8 = uStack_68;
    uVar9 = uStack_60;
    if (0x7ffffffffffffff7 < uStack_68) goto LAB_0034e73c;
  }
  if (uVar8 < 0x17) {
    uStack_90 = CONCAT17((char)uVar8,(undefined7)uStack_90);
    if (uVar8 != 0) goto LAB_0034e69c;
  }
  else {
    uVar1 = (uVar8 & 0x7ffffffffffffff8) + 8;
    if ((uVar8 | 7) != 0x17) {
      uVar1 = uVar8 | 7;
    }
    ppuVar5 = (undefined1 **)(uVar1 + 1);
    __Znwm();
    uStack_90 = (ulong)(uVar1 + 1) | 0x8000000000000000;
    puStack_a0 = (undefined1 *)ppuVar5;
    uStack_98 = uVar8;
LAB_0034e69c:
    _memmove(ppuVar5,uVar9,uVar8);
    ppuVar10 = ppuVar5;
  }
  *(undefined1 *)((long)ppuVar10 + uVar8) = 0;
  FUN_0034e794(param_1,acStack_88,&puStack_a0);
  if ((long)uStack_90 < 0) {
    __ZdlPv(puStack_a0);
  }
  if (cStack_71 < '\0') {
    __ZdlPv(acStack_88._0_8_);
  }
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_70) {
    do {
      lVar7 = *plStack_70;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
      if (bVar3) {
        *plStack_70 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_70[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_0034e73c:
  func_0x0033b318(&puStack_a0);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x34e748);
  (*pcVar4)();
}



/* Entry: 0034e794; end: 0034e903;  */

undefined1  [16] FUN_0034e794(long *param_1,ulong **param_2,ulong *param_3)

{
  char *pcVar1;
  ulong *puVar2;
  ulong **ppuVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  ulong *puStack_58;
  ulong *puStack_50;
  ulong *puStack_48;
  ulong *puStack_40;
  ulong *puStack_38;
  
  puVar2 = (ulong *)(param_1 + 2);
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 < (undefined8 *)*puVar2) {
    puVar9 = param_2[1];
    puVar2 = *param_2;
    puVar4[2] = param_2[2];
    puVar4[1] = puVar9;
    *puVar4 = puVar2;
    param_2[1] = (ulong *)0x0;
    param_2[2] = (ulong *)0x0;
    *param_2 = (ulong *)0x0;
    uVar7 = param_3[1];
    uVar8 = *param_3;
    puVar4[5] = param_3[2];
    puVar4[4] = uVar7;
    puVar4[3] = uVar8;
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
    puVar4 = puVar4 + 6;
    param_1[1] = (long)puVar4;
  }
  else {
    lVar5 = (long)puVar4 - *param_1 >> 4;
    uVar8 = lVar5 * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar8) {
      FUN_0034e904();
      func_0x00483fc8(&puStack_58);
      __Unwind_Resume(param_1);
      pcVar1 = "vector";
      FUN_0033b32c("vector");
      if (param_2 < (ulong **)0x555555555555556) {
        lVar5 = (long)param_2 * 0x30;
        __Znwm(lVar5);
        auVar11._8_8_ = param_2;
        auVar11._0_8_ = lVar5;
        return auVar11;
      }
      FUN_00349558();
      ppuVar3 = param_2;
      if (*(char *)((long)param_2 + 0x2f) < '\0') {
        pcVar1 = (char *)param_2[3];
        __ZdlPv(pcVar1);
      }
      if (-1 < *(char *)((long)param_2 + 0x17)) {
        auVar12._8_8_ = ppuVar3;
        auVar12._0_8_ = pcVar1;
        return auVar12;
      }
      puVar2 = *param_2;
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_0099c620)(puVar2);
      auVar13._8_8_ = ppuVar3;
      auVar13._0_8_ = puVar2;
      return auVar13;
    }
    lVar6 = (long)*puVar2 - *param_1 >> 4;
    uVar7 = lVar6 * 0x5555555555555556;
    if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
      uVar7 = uVar8;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar6 * -0x5555555555555555)) {
      uVar7 = 0x555555555555555;
    }
    puStack_38 = puVar2;
    if (uVar7 == 0) {
      puStack_58 = (ulong *)0x0;
    }
    else {
      FUN_0034e918();
      puStack_58 = puVar2;
    }
    puStack_50 = puStack_58 + lVar5 * 2;
    puStack_40 = puStack_58 + uVar7 * 6;
    puVar9 = param_2[1];
    puVar2 = *param_2;
    puStack_50[2] = (ulong)param_2[2];
    puStack_50[1] = (ulong)puVar9;
    *puStack_50 = (ulong)puVar2;
    param_2[1] = (ulong *)0x0;
    param_2[2] = (ulong *)0x0;
    *param_2 = (ulong *)0x0;
    uVar7 = param_3[1];
    uVar8 = *param_3;
    puStack_50[5] = param_3[2];
    puStack_50[4] = uVar7;
    puStack_50[3] = uVar8;
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
    puStack_48 = puStack_50 + 6;
    param_2 = &puStack_58;
    FUN_00483f38(param_1,param_2);
    puVar4 = (undefined8 *)param_1[1];
    func_0x00483fc8(&puStack_58);
  }
  param_1[1] = (long)puVar4;
  auVar10._0_8_ = puVar4 + -6;
  auVar10._8_8_ = param_2;
  return auVar10;
}



/* Entry: 0034e904; end: 0034e917;  */

void FUN_0034e904(undefined8 param_1,undefined8 *param_2)

{
  FUN_0033b32c("vector");
  if (param_2 < (undefined8 *)0x555555555555556) {
    __Znwm((long)param_2 * 0x30);
    return;
  }
  FUN_00349558();
  if (*(char *)((long)param_2 + 0x2f) < '\0') {
    __ZdlPv(param_2[3]);
  }
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(*param_2);
  return;
}



/* Entry: 0034e918; end: 0034e99f;  */

void FUN_0034e918(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 < (undefined8 *)0x555555555555556) {
    __Znwm((long)param_2 * 0x30);
    return;
  }
  FUN_00349558();
  if (*(char *)((long)param_2 + 0x2f) < '\0') {
    __ZdlPv(param_2[3]);
  }
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(*param_2);
  return;
}



/* Entry: 0034e9a0; end: 0034eb6f;  */

void FUN_0034e9a0(undefined8 param_1,undefined4 *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 ***pppuVar5;
  long lVar6;
  ulong uVar7;
  undefined7 *puVar8;
  undefined8 **ppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  char cStack_69;
  long *plStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034eb70(&plStack_68,*param_2);
  cStack_69 = '\a';
  uStack_80 = 0x6174733a;
  uStack_7c = 0x737574;
  if (plStack_68 == (long *)0x0) {
    uVar7 = (ulong)bStack_60;
    puVar8 = &uStack_5f;
  }
  else {
    uVar7 = CONCAT71(uStack_5f,bStack_60);
    puVar8 = puStack_58;
    if (0x7ffffffffffffff7 < uVar7) goto LAB_0034eb10;
  }
  if (uVar7 < 0x17) {
    uStack_88 = CONCAT17((char)uVar7,(undefined7)uStack_88);
    pppuVar5 = &ppuStack_98;
    if (uVar7 != 0) goto LAB_0034ea70;
  }
  else {
    uVar1 = (uVar7 & 0x7ffffffffffffff8) + 8;
    if ((uVar7 | 7) != 0x17) {
      uVar1 = uVar7 | 7;
    }
    pppuVar5 = (undefined8 ***)(uVar1 + 1);
    __Znwm();
    uStack_88 = uVar1 + 1 | 0x8000000000000000;
    ppuStack_98 = pppuVar5;
    uStack_90 = uVar7;
LAB_0034ea70:
    _memmove(pppuVar5,puVar8,uVar7);
  }
  *(undefined1 *)((long)pppuVar5 + uVar7) = 0;
  FUN_0034e794(param_1,&uStack_80,&ppuStack_98);
  if ((long)uStack_88 < 0) {
    __ZdlPv(ppuStack_98);
  }
  if (cStack_69 < '\0') {
    __ZdlPv(CONCAT44(uStack_7c,uStack_80));
  }
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_68) {
    do {
      lVar6 = *plStack_68;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
      if (bVar3) {
        *plStack_68 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)plStack_68[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_0034eb10:
  func_0x0033b318(&ppuStack_98);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x34eb1c);
  (*pcVar4)();
}



/* Entry: 0034eb70; end: 0034ebeb;  */

void FUN_0034eb70(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 ***pppuVar5;
  ulong uVar6;
  undefined7 *puVar7;
  undefined8 **ppuStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  char cStack_c9;
  long lStack_c8;
  byte bStack_c0;
  undefined7 uStack_bf;
  undefined7 *puStack_b8;
  long lStack_a8;
  undefined4 auStack_60 [6];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = auStack_60;
  puVar4 = auStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  func_0x00339924(param_2,auStack_60);
  _strlen();
  func_0x003ec288(&uStack_48,auStack_60);
  param_1[1] = uStack_40;
  *param_1 = uStack_48;
  param_1[3] = uStack_30;
  param_1[2] = uStack_38;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  lStack_a8 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_003febf4(&lStack_c8,*puVar3);
  cStack_c9 = '\a';
  uStack_e0 = 0x6863733a;
  uStack_dc = 0x656d65;
  if (lStack_c8 == 0) {
    uVar6 = (ulong)bStack_c0;
    puVar7 = &uStack_bf;
  }
  else {
    uVar6 = CONCAT71(uStack_bf,bStack_c0);
    puVar7 = puStack_b8;
    if (0x7ffffffffffffff7 < uVar6) goto LAB_0034ed34;
  }
  if (uVar6 < 0x17) {
    uStack_e8 = CONCAT17((char)uVar6,(undefined7)uStack_e8);
    pppuVar5 = &ppuStack_f8;
    if (uVar6 != 0) goto LAB_0034ecbc;
  }
  else {
    uVar1 = (uVar6 & 0x7ffffffffffffff8) + 8;
    if ((uVar6 | 7) != 0x17) {
      uVar1 = uVar6 | 7;
    }
    pppuVar5 = (undefined8 ***)(uVar1 + 1);
    __Znwm();
    uStack_e8 = uVar1 + 1 | 0x8000000000000000;
    ppuStack_f8 = pppuVar5;
    uStack_f0 = uVar6;
LAB_0034ecbc:
    _memmove(pppuVar5,puVar7,uVar6);
  }
  *(undefined1 *)((long)pppuVar5 + uVar6) = 0;
  FUN_0034e794(puVar4,&uStack_e0,&ppuStack_f8);
  if ((long)uStack_e8 < 0) {
    __ZdlPv(ppuStack_f8);
  }
  if (cStack_c9 < '\0') {
    __ZdlPv(CONCAT44(uStack_dc,uStack_e0));
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
LAB_0034ed34:
  func_0x0033b318(&ppuStack_f8);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x34ed40);
  (*pcVar2)();
}



/* Entry: 0034ebec; end: 0034ed7b;  */

void FUN_0034ebec(undefined8 param_1,undefined4 *param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 ***pppuVar3;
  ulong uVar4;
  undefined7 *puVar5;
  undefined8 **ppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  char cStack_69;
  long lStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_003febf4(&lStack_68,*param_2);
  cStack_69 = '\a';
  uStack_80 = 0x6863733a;
  uStack_7c = 0x656d65;
  if (lStack_68 == 0) {
    uVar4 = (ulong)bStack_60;
    puVar5 = &uStack_5f;
  }
  else {
    uVar4 = CONCAT71(uStack_5f,bStack_60);
    puVar5 = puStack_58;
    if (0x7ffffffffffffff7 < uVar4) goto LAB_0034ed34;
  }
  if (uVar4 < 0x17) {
    uStack_88 = CONCAT17((char)uVar4,(undefined7)uStack_88);
    pppuVar3 = &ppuStack_98;
    if (uVar4 != 0) goto LAB_0034ecbc;
  }
  else {
    uVar1 = (uVar4 & 0x7ffffffffffffff8) + 8;
    if ((uVar4 | 7) != 0x17) {
      uVar1 = uVar4 | 7;
    }
    pppuVar3 = (undefined8 ***)(uVar1 + 1);
    __Znwm();
    uStack_88 = uVar1 + 1 | 0x8000000000000000;
    ppuStack_98 = pppuVar3;
    uStack_90 = uVar4;
LAB_0034ecbc:
    _memmove(pppuVar3,puVar5,uVar4);
  }
  *(undefined1 *)((long)pppuVar3 + uVar4) = 0;
  FUN_0034e794(param_1,&uStack_80,&ppuStack_98);
  if ((long)uStack_88 < 0) {
    __ZdlPv(ppuStack_98);
  }
  if (cStack_69 < '\0') {
    __ZdlPv(CONCAT44(uStack_7c,uStack_80));
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_0034ed34:
  func_0x0033b318(&ppuStack_98);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x34ed40);
  (*pcVar2)();
}



/* Entry: 0034ed7c; end: 0034ef0f;  */

void FUN_0034ed7c(undefined8 param_1,undefined4 *param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 ***pppuVar3;
  ulong uVar4;
  undefined7 *puVar5;
  undefined8 **ppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  char acStack_80 [23];
  char cStack_69;
  long lStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  func_0x003fe828(&lStack_68,*param_2);
  cStack_69 = '\f';
  builtin_strncpy(acStack_80 + 8,"type",5);
  builtin_strncpy(acStack_80,"content-",8);
  if (lStack_68 == 0) {
    uVar4 = (ulong)bStack_60;
    puVar5 = &uStack_5f;
  }
  else {
    uVar4 = CONCAT71(uStack_5f,bStack_60);
    puVar5 = puStack_58;
    if (0x7ffffffffffffff7 < uVar4) goto LAB_0034eec8;
  }
  if (uVar4 < 0x17) {
    uStack_88 = CONCAT17((char)uVar4,(undefined7)uStack_88);
    pppuVar3 = &ppuStack_98;
    if (uVar4 != 0) goto LAB_0034ee50;
  }
  else {
    uVar1 = (uVar4 & 0x7ffffffffffffff8) + 8;
    if ((uVar4 | 7) != 0x17) {
      uVar1 = uVar4 | 7;
    }
    pppuVar3 = (undefined8 ***)(uVar1 + 1);
    __Znwm();
    uStack_88 = uVar1 + 1 | 0x8000000000000000;
    ppuStack_98 = pppuVar3;
    uStack_90 = uVar4;
LAB_0034ee50:
    _memmove(pppuVar3,puVar5,uVar4);
  }
  *(undefined1 *)((long)pppuVar3 + uVar4) = 0;
  FUN_0034e794(param_1,acStack_80,&ppuStack_98);
  if ((long)uStack_88 < 0) {
    __ZdlPv(ppuStack_98);
  }
  if (cStack_69 < '\0') {
    __ZdlPv(acStack_80._0_8_);
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_0034eec8:
  func_0x0033b318(&ppuStack_98);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x34eed4);
  (*pcVar2)();
}



/* Entry: 0034ef10; end: 0034f08f;  */

void FUN_0034ef10(undefined8 param_1,undefined1 *param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 ***pppuVar3;
  ulong uVar4;
  undefined7 *puVar5;
  undefined8 **ppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined2 uStack_80;
  undefined1 uStack_7e;
  undefined5 uStack_7d;
  char cStack_69;
  long lStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034f090(&lStack_68,*param_2);
  cStack_69 = '\x02';
  uStack_80 = 0x6574;
  uStack_7e = 0;
  if (lStack_68 == 0) {
    uVar4 = (ulong)bStack_60;
    puVar5 = &uStack_5f;
  }
  else {
    uVar4 = CONCAT71(uStack_5f,bStack_60);
    puVar5 = puStack_58;
    if (0x7ffffffffffffff7 < uVar4) goto LAB_0034f048;
  }
  if (uVar4 < 0x17) {
    uStack_88 = CONCAT17((char)uVar4,(undefined7)uStack_88);
    pppuVar3 = &ppuStack_98;
    if (uVar4 != 0) goto LAB_0034efd0;
  }
  else {
    uVar1 = (uVar4 & 0x7ffffffffffffff8) + 8;
    if ((uVar4 | 7) != 0x17) {
      uVar1 = uVar4 | 7;
    }
    pppuVar3 = (undefined8 ***)(uVar1 + 1);
    __Znwm();
    uStack_88 = uVar1 + 1 | 0x8000000000000000;
    ppuStack_98 = pppuVar3;
    uStack_90 = uVar4;
LAB_0034efd0:
    _memmove(pppuVar3,puVar5,uVar4);
  }
  *(undefined1 *)((long)pppuVar3 + uVar4) = 0;
  FUN_0034e794(param_1,&uStack_80,&ppuStack_98);
  if ((long)uStack_88 < 0) {
    __ZdlPv(ppuStack_98);
  }
  if (cStack_69 < '\0') {
    __ZdlPv(CONCAT53(uStack_7d,CONCAT12(uStack_7e,uStack_80)));
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_0034f048:
  func_0x0033b318(&ppuStack_98);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x34f054);
  (*pcVar2)();
}



/* Entry: 0034f090; end: 0034f0bf;  */

void FUN_0034f090(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 ***pppuVar5;
  long lVar6;
  ulong uVar7;
  undefined7 *puVar8;
  undefined8 **ppuStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 uStack_88;
  undefined1 uStack_83;
  char cStack_79;
  long *plStack_78;
  byte bStack_70;
  undefined7 uStack_6f;
  undefined7 *puStack_68;
  long lStack_58;
  
  if ((int)param_2 == 0) {
    *param_1 = 1;
    param_1[1] = 8;
    param_1[2] = "trailers";
    return;
  }
  func_0x00771810();
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034f290(&plStack_78,*param_3);
  cStack_79 = '\r';
  uStack_90 = 0x2d63707267;
  uStack_8b = 0x636e65;
  uStack_88 = 0x676e69646f;
  uStack_83 = 0;
  if (plStack_78 == (long *)0x0) {
    uVar7 = (ulong)bStack_70;
    puVar8 = &uStack_6f;
  }
  else {
    uVar7 = CONCAT71(uStack_6f,bStack_70);
    puVar8 = puStack_68;
    if (0x7ffffffffffffff7 < uVar7) goto LAB_0034f230;
  }
  if (uVar7 < 0x17) {
    uStack_98 = CONCAT17((char)uVar7,(undefined7)uStack_98);
    pppuVar5 = &ppuStack_a8;
    if (uVar7 != 0) goto LAB_0034f190;
  }
  else {
    uVar1 = (uVar7 & 0x7ffffffffffffff8) + 8;
    if ((uVar7 | 7) != 0x17) {
      uVar1 = uVar7 | 7;
    }
    pppuVar5 = (undefined8 ***)(uVar1 + 1);
    __Znwm();
    uStack_98 = uVar1 + 1 | 0x8000000000000000;
    ppuStack_a8 = pppuVar5;
    uStack_a0 = uVar7;
LAB_0034f190:
    _memmove(pppuVar5,puVar8,uVar7);
  }
  *(undefined1 *)((long)pppuVar5 + uVar7) = 0;
  FUN_0034e794(param_2,&uStack_90,&ppuStack_a8);
  if ((long)uStack_98 < 0) {
    __ZdlPv(ppuStack_a8);
  }
  if (cStack_79 < '\0') {
    __ZdlPv(CONCAT35(uStack_8b,uStack_90));
  }
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_78) {
    do {
      lVar6 = *plStack_78;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_78,0x10);
      if (bVar3) {
        *plStack_78 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)plStack_78[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
LAB_0034f230:
  func_0x0033b318(&ppuStack_a8);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x34f23c);
  (*pcVar4)();
}



/* Entry: 0034f0c0; end: 0034f28f;  */

void FUN_0034f0c0(undefined8 param_1,undefined4 *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 ***pppuVar5;
  long lVar6;
  ulong uVar7;
  undefined7 *puVar8;
  undefined8 **ppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined5 uStack_80;
  undefined3 uStack_7b;
  undefined5 uStack_78;
  undefined1 uStack_73;
  char cStack_69;
  long *plStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034f290(&plStack_68,*param_2);
  cStack_69 = '\r';
  uStack_80 = 0x2d63707267;
  uStack_7b = 0x636e65;
  uStack_78 = 0x676e69646f;
  uStack_73 = 0;
  if (plStack_68 == (long *)0x0) {
    uVar7 = (ulong)bStack_60;
    puVar8 = &uStack_5f;
  }
  else {
    uVar7 = CONCAT71(uStack_5f,bStack_60);
    puVar8 = puStack_58;
    if (0x7ffffffffffffff7 < uVar7) goto LAB_0034f230;
  }
  if (uVar7 < 0x17) {
    uStack_88 = CONCAT17((char)uVar7,(undefined7)uStack_88);
    pppuVar5 = &ppuStack_98;
    if (uVar7 != 0) goto LAB_0034f190;
  }
  else {
    uVar1 = (uVar7 & 0x7ffffffffffffff8) + 8;
    if ((uVar7 | 7) != 0x17) {
      uVar1 = uVar7 | 7;
    }
    pppuVar5 = (undefined8 ***)(uVar1 + 1);
    __Znwm();
    uStack_88 = uVar1 + 1 | 0x8000000000000000;
    ppuStack_98 = pppuVar5;
    uStack_90 = uVar7;
LAB_0034f190:
    _memmove(pppuVar5,puVar8,uVar7);
  }
  *(undefined1 *)((long)pppuVar5 + uVar7) = 0;
  FUN_0034e794(param_1,&uStack_80,&ppuStack_98);
  if ((long)uStack_88 < 0) {
    __ZdlPv(ppuStack_98);
  }
  if (cStack_69 < '\0') {
    __ZdlPv(CONCAT35(uStack_7b,uStack_80));
  }
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_68) {
    do {
      lVar6 = *plStack_68;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
      if (bVar3) {
        *plStack_68 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)plStack_68[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_0034f230:
  func_0x0033b318(&ppuStack_98);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x34f23c);
  (*pcVar4)();
}



/* Entry: 0034f290; end: 0034f2cf;  */

void FUN_0034f290(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  segment_command *psVar6;
  undefined8 *****pppppuVar7;
  long lVar8;
  ulong uVar9;
  undefined7 *puVar10;
  undefined8 ****ppppuStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  segment_command *psStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long *plStack_88;
  byte bStack_80;
  undefined7 uStack_7f;
  undefined7 *puStack_78;
  long lStack_68;
  
  if ((int)param_2 != 3) {
    func_0x003b0630();
    uVar5 = param_2;
    _strlen();
    *param_1 = 1;
    param_1[1] = uVar5;
    param_1[2] = param_2;
    return;
  }
  func_0x00771844();
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034f290(&plStack_88,*param_3);
  psVar6 = &segment_command_00000020;
  __Znwm();
  lStack_90 = -0x7fffffffffffffe0;
  uStack_98 = 0x1e;
  psVar6->segname[0] = 'e';
  psVar6->segname[1] = 'r';
  psVar6->segname[2] = 'n';
  psVar6->segname[3] = 'a';
  psVar6->segname[4] = 'l';
  psVar6->segname[5] = '-';
  psVar6->segname[6] = 'e';
  psVar6->segname[7] = 'n';
  *(undefined8 *)psVar6 = 0x746e692d63707267;
  *(undefined8 *)(psVar6->segname + 0xe) = 0x747365757165722d;
  psVar6->segname[6] = 'e';
  psVar6->segname[7] = 'n';
  psVar6->segname[8] = 'c';
  psVar6->segname[9] = 'o';
  psVar6->segname[10] = 'd';
  psVar6->segname[0xb] = 'i';
  psVar6->segname[0xc] = 'n';
  psVar6->segname[0xd] = 'g';
  *(undefined1 *)((long)&psVar6->vmaddr + 6) = 0;
  psStack_a0 = psVar6;
  if (plStack_88 == (long *)0x0) {
    uVar9 = (ulong)bStack_80;
    puVar10 = &uStack_7f;
  }
  else {
    uVar9 = CONCAT71(uStack_7f,bStack_80);
    puVar10 = puStack_78;
    if (0x7ffffffffffffff7 < uVar9) goto LAB_0034f450;
  }
  if (uVar9 < 0x17) {
    uStack_a8 = CONCAT17((char)uVar9,(undefined7)uStack_a8);
    pppppuVar7 = &ppppuStack_b8;
    if (uVar9 != 0) goto LAB_0034f3b0;
  }
  else {
    uVar1 = (uVar9 & 0x7ffffffffffffff8) + 8;
    if ((uVar9 | 7) != 0x17) {
      uVar1 = uVar9 | 7;
    }
    pppppuVar7 = (undefined8 *****)(uVar1 + 1);
    __Znwm();
    uStack_a8 = uVar1 + 1 | 0x8000000000000000;
    ppppuStack_b8 = pppppuVar7;
    uStack_b0 = uVar9;
LAB_0034f3b0:
    _memmove(pppppuVar7,puVar10,uVar9);
  }
  *(undefined1 *)((long)pppppuVar7 + uVar9) = 0;
  FUN_0034e794(param_2,&psStack_a0,&ppppuStack_b8);
  if ((long)uStack_a8 < 0) {
    __ZdlPv(ppppuStack_b8);
  }
  if (lStack_90 < 0) {
    __ZdlPv(psStack_a0);
  }
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_88) {
    do {
      lVar8 = *plStack_88;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_88,0x10);
      if (bVar3) {
        *plStack_88 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_88[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
LAB_0034f450:
  func_0x0033b318(&ppppuStack_b8);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x34f45c);
  (*pcVar4)();
}



/* Entry: 0034f2d0; end: 0034f4b7;  */

void FUN_0034f2d0(undefined8 param_1,undefined4 *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  segment_command *psVar5;
  undefined8 *****pppppuVar6;
  long lVar7;
  ulong uVar8;
  undefined7 *puVar9;
  undefined8 ****ppppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  segment_command *psStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long *plStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034f290(&plStack_68,*param_2);
  psVar5 = &segment_command_00000020;
  __Znwm();
  lStack_70 = -0x7fffffffffffffe0;
  uStack_78 = 0x1e;
  psVar5->segname[0] = 'e';
  psVar5->segname[1] = 'r';
  psVar5->segname[2] = 'n';
  psVar5->segname[3] = 'a';
  psVar5->segname[4] = 'l';
  psVar5->segname[5] = '-';
  psVar5->segname[6] = 'e';
  psVar5->segname[7] = 'n';
  *(undefined8 *)psVar5 = 0x746e692d63707267;
  *(undefined8 *)(psVar5->segname + 0xe) = 0x747365757165722d;
  psVar5->segname[6] = 'e';
  psVar5->segname[7] = 'n';
  psVar5->segname[8] = 'c';
  psVar5->segname[9] = 'o';
  psVar5->segname[10] = 'd';
  psVar5->segname[0xb] = 'i';
  psVar5->segname[0xc] = 'n';
  psVar5->segname[0xd] = 'g';
  *(undefined1 *)((long)&psVar5->vmaddr + 6) = 0;
  psStack_80 = psVar5;
  if (plStack_68 == (long *)0x0) {
    uVar8 = (ulong)bStack_60;
    puVar9 = &uStack_5f;
  }
  else {
    uVar8 = CONCAT71(uStack_5f,bStack_60);
    puVar9 = puStack_58;
    if (0x7ffffffffffffff7 < uVar8) goto LAB_0034f450;
  }
  if (uVar8 < 0x17) {
    uStack_88 = CONCAT17((char)uVar8,(undefined7)uStack_88);
    pppppuVar6 = &ppppuStack_98;
    if (uVar8 != 0) goto LAB_0034f3b0;
  }
  else {
    uVar1 = (uVar8 & 0x7ffffffffffffff8) + 8;
    if ((uVar8 | 7) != 0x17) {
      uVar1 = uVar8 | 7;
    }
    pppppuVar6 = (undefined8 *****)(uVar1 + 1);
    __Znwm();
    uStack_88 = uVar1 + 1 | 0x8000000000000000;
    ppppuStack_98 = pppppuVar6;
    uStack_90 = uVar8;
LAB_0034f3b0:
    _memmove(pppppuVar6,puVar9,uVar8);
  }
  *(undefined1 *)((long)pppppuVar6 + uVar8) = 0;
  FUN_0034e794(param_1,&psStack_80,&ppppuStack_98);
  if ((long)uStack_88 < 0) {
    __ZdlPv(ppppuStack_98);
  }
  if (lStack_70 < 0) {
    __ZdlPv(psStack_80);
  }
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_68) {
    do {
      lVar7 = *plStack_68;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
      if (bVar3) {
        *plStack_68 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_68[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_0034f450:
  func_0x0033b318(&ppppuStack_98);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x34f45c);
  (*pcVar4)();
}



/* Entry: 0034f4b8; end: 0034f693;  */

void FUN_0034f4b8(undefined8 param_1,undefined1 *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 ***pppuVar5;
  long lVar6;
  ulong uVar7;
  undefined7 *puVar8;
  undefined8 **ppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  char acStack_80 [23];
  char cStack_69;
  long *plStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  acStack_80[0] = *param_2;
  func_0x003b095c(&plStack_68,acStack_80);
  cStack_69 = '\x14';
  builtin_strncpy(acStack_80 + 0x10,"ding",5);
  builtin_strncpy(acStack_80,"grpc-accept-enco",0x10);
  if (plStack_68 == (long *)0x0) {
    uVar7 = (ulong)bStack_60;
    puVar8 = &uStack_5f;
  }
  else {
    uVar7 = CONCAT71(uStack_5f,bStack_60);
    puVar8 = puStack_58;
    if (0x7ffffffffffffff7 < uVar7) goto LAB_0034f634;
  }
  if (uVar7 < 0x17) {
    uStack_88 = CONCAT17((char)uVar7,(undefined7)uStack_88);
    pppuVar5 = &ppuStack_98;
    if (uVar7 != 0) goto LAB_0034f594;
  }
  else {
    uVar1 = (uVar7 & 0x7ffffffffffffff8) + 8;
    if ((uVar7 | 7) != 0x17) {
      uVar1 = uVar7 | 7;
    }
    pppuVar5 = (undefined8 ***)(uVar1 + 1);
    __Znwm();
    uStack_88 = uVar1 + 1 | 0x8000000000000000;
    ppuStack_98 = pppuVar5;
    uStack_90 = uVar7;
LAB_0034f594:
    _memmove(pppuVar5,puVar8,uVar7);
  }
  *(undefined1 *)((long)pppuVar5 + uVar7) = 0;
  FUN_0034e794(param_1,acStack_80,&ppuStack_98);
  if ((long)uStack_88 < 0) {
    __ZdlPv(ppuStack_98);
  }
  if (cStack_69 < '\0') {
    __ZdlPv(acStack_80._0_8_);
  }
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_68) {
    do {
      lVar6 = *plStack_68;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
      if (bVar3) {
        *plStack_68 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)plStack_68[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_0034f634:
  func_0x0033b318(&ppuStack_98);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x34f640);
  (*pcVar4)();
}



/* Entry: 0034f694; end: 0034f867;  */

void FUN_0034f694(undefined8 param_1,int *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 ***pppuVar5;
  long lVar6;
  ulong uVar7;
  undefined7 *puVar8;
  undefined8 **ppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined7 uStack_80;
  undefined4 uStack_79;
  undefined1 uStack_75;
  char cStack_69;
  long *plStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034eb70(&plStack_68,(long)*param_2);
  cStack_69 = '\v';
  uStack_80 = 0x74732d63707267;
  uStack_79 = 0x73757461;
  uStack_75 = 0;
  if (plStack_68 == (long *)0x0) {
    uVar7 = (ulong)bStack_60;
    puVar8 = &uStack_5f;
  }
  else {
    uVar7 = CONCAT71(uStack_5f,bStack_60);
    puVar8 = puStack_58;
    if (0x7ffffffffffffff7 < uVar7) goto LAB_0034f808;
  }
  if (uVar7 < 0x17) {
    uStack_88 = CONCAT17((char)uVar7,(undefined7)uStack_88);
    pppuVar5 = &ppuStack_98;
    if (uVar7 != 0) goto LAB_0034f768;
  }
  else {
    uVar1 = (uVar7 & 0x7ffffffffffffff8) + 8;
    if ((uVar7 | 7) != 0x17) {
      uVar1 = uVar7 | 7;
    }
    pppuVar5 = (undefined8 ***)(uVar1 + 1);
    __Znwm();
    uStack_88 = uVar1 + 1 | 0x8000000000000000;
    ppuStack_98 = pppuVar5;
    uStack_90 = uVar7;
LAB_0034f768:
    _memmove(pppuVar5,puVar8,uVar7);
  }
  *(undefined1 *)((long)pppuVar5 + uVar7) = 0;
  FUN_0034e794(param_1,&uStack_80,&ppuStack_98);
  if ((long)uStack_88 < 0) {
    __ZdlPv(ppuStack_98);
  }
  if (cStack_69 < '\0') {
    __ZdlPv(CONCAT17((undefined1)uStack_79,uStack_80));
  }
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_68) {
    do {
      lVar6 = *plStack_68;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
      if (bVar3) {
        *plStack_68 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)plStack_68[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_0034f808:
  func_0x0033b318(&ppuStack_98);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x34f814);
  (*pcVar4)();
}



/* Entry: 0034f868; end: 0034fa4f;  */

void FUN_0034f868(undefined8 param_1,undefined4 *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  segment_command *psVar5;
  undefined8 *****pppppuVar6;
  long lVar7;
  ulong uVar8;
  undefined7 *puVar9;
  undefined8 ****ppppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  segment_command *psStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long *plStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034eb70(&plStack_68,*param_2);
  psVar5 = &segment_command_00000020;
  __Znwm();
  lStack_70 = -0x7fffffffffffffe0;
  uStack_78 = 0x1a;
  psVar5->segname[0] = 'v';
  psVar5->segname[1] = 'i';
  psVar5->segname[2] = 'o';
  psVar5->segname[3] = 'u';
  psVar5->segname[4] = 's';
  psVar5->segname[5] = '-';
  psVar5->segname[6] = 'r';
  psVar5->segname[7] = 'p';
  *(undefined8 *)psVar5 = 0x6572702d63707267;
  *(undefined8 *)(psVar5->segname + 10) = 0x7374706d65747461;
  psVar5->segname[2] = 'o';
  psVar5->segname[3] = 'u';
  psVar5->segname[4] = 's';
  psVar5->segname[5] = '-';
  psVar5->segname[6] = 'r';
  psVar5->segname[7] = 'p';
  psVar5->segname[8] = 'c';
  psVar5->segname[9] = '-';
  *(undefined1 *)((long)&psVar5->vmaddr + 2) = 0;
  psStack_80 = psVar5;
  if (plStack_68 == (long *)0x0) {
    uVar8 = (ulong)bStack_60;
    puVar9 = &uStack_5f;
  }
  else {
    uVar8 = CONCAT71(uStack_5f,bStack_60);
    puVar9 = puStack_58;
    if (0x7ffffffffffffff7 < uVar8) goto LAB_0034f9e8;
  }
  if (uVar8 < 0x17) {
    uStack_88 = CONCAT17((char)uVar8,(undefined7)uStack_88);
    pppppuVar6 = &ppppuStack_98;
    if (uVar8 != 0) goto LAB_0034f948;
  }
  else {
    uVar1 = (uVar8 & 0x7ffffffffffffff8) + 8;
    if ((uVar8 | 7) != 0x17) {
      uVar1 = uVar8 | 7;
    }
    pppppuVar6 = (undefined8 *****)(uVar1 + 1);
    __Znwm();
    uStack_88 = uVar1 + 1 | 0x8000000000000000;
    ppppuStack_98 = pppppuVar6;
    uStack_90 = uVar8;
LAB_0034f948:
    _memmove(pppppuVar6,puVar9,uVar8);
  }
  *(undefined1 *)((long)pppppuVar6 + uVar8) = 0;
  FUN_0034e794(param_1,&psStack_80,&ppppuStack_98);
  if ((long)uStack_88 < 0) {
    __ZdlPv(ppppuStack_98);
  }
  if (lStack_70 < 0) {
    __ZdlPv(psStack_80);
  }
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_68) {
    do {
      lVar7 = *plStack_68;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
      if (bVar3) {
        *plStack_68 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_68[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_0034f9e8:
  func_0x0033b318(&ppppuStack_98);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x34f9f4);
  (*pcVar4)();
}



/* Entry: 0034fa50; end: 0034fc1b;  */

void FUN_0034fa50(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 ***pppuVar5;
  long lVar6;
  ulong uVar7;
  undefined7 *puVar8;
  undefined8 **ppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  char acStack_80 [22];
  short sStack_6a;
  long *plStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034eb70(&plStack_68,*param_2);
  builtin_strncpy(acStack_80,"grpc-retry-pushback-ms",0x16);
  sStack_6a = 0x1600;
  if (plStack_68 == (long *)0x0) {
    uVar7 = (ulong)bStack_60;
    puVar8 = &uStack_5f;
  }
  else {
    uVar7 = CONCAT71(uStack_5f,bStack_60);
    puVar8 = puStack_58;
    if (0x7ffffffffffffff7 < uVar7) goto LAB_0034fbbc;
  }
  if (uVar7 < 0x17) {
    uStack_88 = CONCAT17((char)uVar7,(undefined7)uStack_88);
    pppuVar5 = &ppuStack_98;
    if (uVar7 != 0) goto LAB_0034fb1c;
  }
  else {
    uVar1 = (uVar7 & 0x7ffffffffffffff8) + 8;
    if ((uVar7 | 7) != 0x17) {
      uVar1 = uVar7 | 7;
    }
    pppuVar5 = (undefined8 ***)(uVar1 + 1);
    __Znwm();
    uStack_88 = uVar1 + 1 | 0x8000000000000000;
    ppuStack_98 = pppuVar5;
    uStack_90 = uVar7;
LAB_0034fb1c:
    _memmove(pppuVar5,puVar8,uVar7);
  }
  *(undefined1 *)((long)pppuVar5 + uVar7) = 0;
  FUN_0034e794(param_1,acStack_80,&ppuStack_98);
  if ((long)uStack_88 < 0) {
    __ZdlPv(ppuStack_98);
  }
  if (sStack_6a < 0) {
    __ZdlPv(acStack_80._0_8_);
  }
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_68) {
    do {
      lVar6 = *plStack_68;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
      if (bVar3) {
        *plStack_68 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)plStack_68[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_0034fbbc:
  func_0x0033b318(&ppuStack_98);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x34fbc8);
  (*pcVar4)();
}



/* Entry: 0034fc1c; end: 0034fdff;  */

void FUN_0034fc1c(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 **ppuVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 **ppuVar10;
  undefined1 *puStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  char acStack_88 [23];
  char cStack_71;
  long *plStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  ppuVar5 = &puStack_a0;
  ppuVar10 = &puStack_a0;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar6 = (long *)*param_2;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar6) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_68 = param_2[1];
  plStack_70 = (long *)*param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  cStack_71 = '\n';
  builtin_strncpy(acStack_88,"user-agent",0xb);
  if (plStack_70 == (long *)0x0) {
    uVar8 = uStack_68 & 0xff;
    uVar9 = (ulong)&plStack_70 | 9;
  }
  else {
    uVar8 = uStack_68;
    uVar9 = uStack_60;
    if (0x7ffffffffffffff7 < uStack_68) goto LAB_0034fda8;
  }
  if (uVar8 < 0x17) {
    uStack_90 = CONCAT17((char)uVar8,(undefined7)uStack_90);
    if (uVar8 != 0) goto LAB_0034fd08;
  }
  else {
    uVar1 = (uVar8 & 0x7ffffffffffffff8) + 8;
    if ((uVar8 | 7) != 0x17) {
      uVar1 = uVar8 | 7;
    }
    ppuVar5 = (undefined1 **)(uVar1 + 1);
    __Znwm();
    uStack_90 = (ulong)(uVar1 + 1) | 0x8000000000000000;
    puStack_a0 = (undefined1 *)ppuVar5;
    uStack_98 = uVar8;
LAB_0034fd08:
    _memmove(ppuVar5,uVar9,uVar8);
    ppuVar10 = ppuVar5;
  }
  *(undefined1 *)((long)ppuVar10 + uVar8) = 0;
  FUN_0034e794(param_1,acStack_88,&puStack_a0);
  if ((long)uStack_90 < 0) {
    __ZdlPv(puStack_a0);
  }
  if (cStack_71 < '\0') {
    __ZdlPv(acStack_88._0_8_);
  }
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_70) {
    do {
      lVar7 = *plStack_70;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
      if (bVar3) {
        *plStack_70 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_70[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_0034fda8:
  func_0x0033b318(&puStack_a0);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x34fdb4);
  (*pcVar4)();
}



/* Entry: 0034fe00; end: 0034ffe7;  */

void FUN_0034fe00(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 **ppuVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 **ppuVar10;
  undefined1 *puStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  char acStack_88 [23];
  char cStack_71;
  long *plStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  ppuVar5 = &puStack_a0;
  ppuVar10 = &puStack_a0;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar6 = (long *)*param_2;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar6) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_68 = param_2[1];
  plStack_70 = (long *)*param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  cStack_71 = '\f';
  builtin_strncpy(acStack_88 + 8,"sage",5);
  builtin_strncpy(acStack_88,"grpc-mes",8);
  if (plStack_70 == (long *)0x0) {
    uVar8 = uStack_68 & 0xff;
    uVar9 = (ulong)&plStack_70 | 9;
  }
  else {
    uVar8 = uStack_68;
    uVar9 = uStack_60;
    if (0x7ffffffffffffff7 < uStack_68) goto LAB_0034ff90;
  }
  if (uVar8 < 0x17) {
    uStack_90 = CONCAT17((char)uVar8,(undefined7)uStack_90);
    if (uVar8 != 0) goto LAB_0034fef0;
  }
  else {
    uVar1 = (uVar8 & 0x7ffffffffffffff8) + 8;
    if ((uVar8 | 7) != 0x17) {
      uVar1 = uVar8 | 7;
    }
    ppuVar5 = (undefined1 **)(uVar1 + 1);
    __Znwm();
    uStack_90 = (ulong)(uVar1 + 1) | 0x8000000000000000;
    puStack_a0 = (undefined1 *)ppuVar5;
    uStack_98 = uVar8;
LAB_0034fef0:
    _memmove(ppuVar5,uVar9,uVar8);
    ppuVar10 = ppuVar5;
  }
  *(undefined1 *)((long)ppuVar10 + uVar8) = 0;
  FUN_0034e794(param_1,acStack_88,&puStack_a0);
  if ((long)uStack_90 < 0) {
    __ZdlPv(puStack_a0);
  }
  if (cStack_71 < '\0') {
    __ZdlPv(acStack_88._0_8_);
  }
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_70) {
    do {
      lVar7 = *plStack_70;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
      if (bVar3) {
        *plStack_70 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_70[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_0034ff90:
  func_0x0033b318(&puStack_a0);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x34ff9c);
  (*pcVar4)();
}



/* Entry: 0034ffe8; end: 003501bf;  */

void FUN_0034ffe8(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 **ppuVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 **ppuVar10;
  undefined1 *puStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  uint uStack_84;
  char cStack_71;
  long *plStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  ppuVar5 = &puStack_a0;
  ppuVar10 = &puStack_a0;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar6 = (long *)*param_2;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar6) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_68 = param_2[1];
  plStack_70 = (long *)*param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  cStack_71 = '\x04';
  uStack_88 = 0x74736f68;
  uStack_84 = uStack_84 & 0xffffff00;
  if (plStack_70 == (long *)0x0) {
    uVar8 = uStack_68 & 0xff;
    uVar9 = (ulong)&plStack_70 | 9;
  }
  else {
    uVar8 = uStack_68;
    uVar9 = uStack_60;
    if (0x7ffffffffffffff7 < uStack_68) goto LAB_00350168;
  }
  if (uVar8 < 0x17) {
    uStack_90 = CONCAT17((char)uVar8,(undefined7)uStack_90);
    if (uVar8 != 0) goto LAB_003500c8;
  }
  else {
    uVar1 = (uVar8 & 0x7ffffffffffffff8) + 8;
    if ((uVar8 | 7) != 0x17) {
      uVar1 = uVar8 | 7;
    }
    ppuVar5 = (undefined1 **)(uVar1 + 1);
    __Znwm();
    uStack_90 = (ulong)(uVar1 + 1) | 0x8000000000000000;
    puStack_a0 = (undefined1 *)ppuVar5;
    uStack_98 = uVar8;
LAB_003500c8:
    _memmove(ppuVar5,uVar9,uVar8);
    ppuVar10 = ppuVar5;
  }
  *(undefined1 *)((long)ppuVar10 + uVar8) = 0;
  FUN_0034e794(param_1,&uStack_88,&puStack_a0);
  if ((long)uStack_90 < 0) {
    __ZdlPv(puStack_a0);
  }
  if (cStack_71 < '\0') {
    __ZdlPv(CONCAT44(uStack_84,uStack_88));
  }
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_70) {
    do {
      lVar7 = *plStack_70;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
      if (bVar3) {
        *plStack_70 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_70[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_00350168:
  func_0x0033b318(&puStack_a0);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x350174);
  (*pcVar4)();
}



/* Entry: 003501c0; end: 003503bb;  */

void FUN_003501c0(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  segment_command *psVar5;
  undefined1 **ppuVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 **ppuVar11;
  undefined1 *puStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  segment_command *psStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long *plStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  ppuVar6 = &puStack_a0;
  ppuVar11 = &puStack_a0;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar7 = (long *)*param_2;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar7) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_68 = param_2[1];
  plStack_70 = (long *)*param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  psVar5 = &segment_command_00000020;
  __Znwm();
  lStack_78 = -0x7fffffffffffffe0;
  uStack_80 = 0x19;
  psVar5->segname[0] = '-';
  psVar5->segname[1] = 'l';
  psVar5->segname[2] = 'o';
  psVar5->segname[3] = 'a';
  psVar5->segname[4] = 'd';
  psVar5->segname[5] = '-';
  psVar5->segname[6] = 'm';
  psVar5->segname[7] = 'e';
  *(undefined8 *)psVar5 = 0x746e696f70646e65;
  *(undefined8 *)(psVar5->segname + 9) = 0x6e69622d73636972;
  psVar5->segname[1] = 'l';
  psVar5->segname[2] = 'o';
  psVar5->segname[3] = 'a';
  psVar5->segname[4] = 'd';
  psVar5->segname[5] = '-';
  psVar5->segname[6] = 'm';
  psVar5->segname[7] = 'e';
  psVar5->segname[8] = 't';
  *(undefined1 *)((long)&psVar5->vmaddr + 1) = 0;
  psStack_88 = psVar5;
  if (plStack_70 == (long *)0x0) {
    uVar9 = uStack_68 & 0xff;
    uVar10 = (ulong)&plStack_70 | 9;
  }
  else {
    uVar9 = uStack_68;
    uVar10 = uStack_60;
    if (0x7ffffffffffffff7 < uStack_68) goto LAB_0035035c;
  }
  if (uVar9 < 0x17) {
    uStack_90 = CONCAT17((char)uVar9,(undefined7)uStack_90);
    if (uVar9 != 0) goto LAB_003502bc;
  }
  else {
    uVar1 = (uVar9 & 0x7ffffffffffffff8) + 8;
    if ((uVar9 | 7) != 0x17) {
      uVar1 = uVar9 | 7;
    }
    ppuVar6 = (undefined1 **)(uVar1 + 1);
    __Znwm();
    uStack_90 = (ulong)(uVar1 + 1) | 0x8000000000000000;
    puStack_a0 = (undefined1 *)ppuVar6;
    uStack_98 = uVar9;
LAB_003502bc:
    _memmove(ppuVar6,uVar10,uVar9);
    ppuVar11 = ppuVar6;
  }
  *(undefined1 *)((long)ppuVar11 + uVar9) = 0;
  FUN_0034e794(param_1,&psStack_88,&puStack_a0);
  if ((long)uStack_90 < 0) {
    __ZdlPv(puStack_a0);
  }
  if (lStack_78 < 0) {
    __ZdlPv(psStack_88);
  }
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_70) {
    do {
      lVar8 = *plStack_70;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
      if (bVar3) {
        *plStack_70 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_70[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_0035035c:
  func_0x0033b318(&puStack_a0);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x350368);
  (*pcVar4)();
}



/* Entry: 003503bc; end: 0035059f;  */

void FUN_003503bc(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 ***pppuVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **ppuStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  char acStack_90 [23];
  char cStack_79;
  long *plStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar6 = (long *)*param_2;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar6) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_68 = param_2[1];
  plStack_70 = (long *)*param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  cStack_79 = '\x15';
  builtin_strncpy(acStack_90,"grpc-server-stats-bin",0x16);
  if (plStack_70 == (long *)0x0) {
    uVar8 = uStack_68 & 0xff;
    uVar9 = (ulong)&plStack_70 | 9;
  }
  else {
    uVar8 = uStack_68;
    uVar9 = uStack_60;
    if (0x7ffffffffffffff7 < uStack_68) goto LAB_00350548;
  }
  if (uVar8 < 0x17) {
    uStack_98 = CONCAT17((char)uVar8,(undefined7)uStack_98);
    pppuVar5 = &ppuStack_a8;
    if (uVar8 != 0) goto LAB_003504a8;
  }
  else {
    uVar1 = (uVar8 & 0x7ffffffffffffff8) + 8;
    if ((uVar8 | 7) != 0x17) {
      uVar1 = uVar8 | 7;
    }
    pppuVar5 = (undefined8 ***)(uVar1 + 1);
    __Znwm();
    uStack_98 = uVar1 + 1 | 0x8000000000000000;
    ppuStack_a8 = pppuVar5;
    uStack_a0 = uVar8;
LAB_003504a8:
    _memmove(pppuVar5,uVar9,uVar8);
  }
  *(undefined1 *)((long)pppuVar5 + uVar8) = 0;
  FUN_0034e794(param_1,acStack_90,&ppuStack_a8);
  if ((long)uStack_98 < 0) {
    __ZdlPv(ppuStack_a8);
  }
  if (cStack_79 < '\0') {
    __ZdlPv(acStack_90._0_8_);
  }
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_70) {
    do {
      lVar7 = *plStack_70;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
      if (bVar3) {
        *plStack_70 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_70[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_00350548:
  func_0x0033b318(&ppuStack_a8);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x350554);
  (*pcVar4)();
}



/* Entry: 003505a0; end: 00350783;  */

void FUN_003505a0(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 **ppuVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 **ppuVar10;
  undefined1 *puStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined6 uStack_88;
  undefined2 uStack_82;
  undefined6 uStack_80;
  undefined1 uStack_7a;
  char cStack_71;
  long *plStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  ppuVar5 = &puStack_a0;
  ppuVar10 = &puStack_a0;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar6 = (long *)*param_2;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar6) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_68 = param_2[1];
  plStack_70 = (long *)*param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  cStack_71 = '\x0e';
  uStack_88 = 0x742d63707267;
  uStack_82 = 0x6172;
  uStack_80 = 0x6e69622d6563;
  uStack_7a = 0;
  if (plStack_70 == (long *)0x0) {
    uVar8 = uStack_68 & 0xff;
    uVar9 = (ulong)&plStack_70 | 9;
  }
  else {
    uVar8 = uStack_68;
    uVar9 = uStack_60;
    if (0x7ffffffffffffff7 < uStack_68) goto LAB_0035072c;
  }
  if (uVar8 < 0x17) {
    uStack_90 = CONCAT17((char)uVar8,(undefined7)uStack_90);
    if (uVar8 != 0) goto LAB_0035068c;
  }
  else {
    uVar1 = (uVar8 & 0x7ffffffffffffff8) + 8;
    if ((uVar8 | 7) != 0x17) {
      uVar1 = uVar8 | 7;
    }
    ppuVar5 = (undefined1 **)(uVar1 + 1);
    __Znwm();
    uStack_90 = (ulong)(uVar1 + 1) | 0x8000000000000000;
    puStack_a0 = (undefined1 *)ppuVar5;
    uStack_98 = uVar8;
LAB_0035068c:
    _memmove(ppuVar5,uVar9,uVar8);
    ppuVar10 = ppuVar5;
  }
  *(undefined1 *)((long)ppuVar10 + uVar8) = 0;
  FUN_0034e794(param_1,&uStack_88,&puStack_a0);
  if ((long)uStack_90 < 0) {
    __ZdlPv(puStack_a0);
  }
  if (cStack_71 < '\0') {
    __ZdlPv(CONCAT26(uStack_82,uStack_88));
  }
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_70) {
    do {
      lVar7 = *plStack_70;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
      if (bVar3) {
        *plStack_70 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_70[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_0035072c:
  func_0x0033b318(&puStack_a0);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x350738);
  (*pcVar4)();
}



/* Entry: 00350784; end: 00350967;  */

void FUN_00350784(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 **ppuVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 **ppuVar10;
  undefined1 *puStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined5 uStack_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  undefined1 uStack_7b;
  char cStack_71;
  long *plStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  ppuVar5 = &puStack_a0;
  ppuVar10 = &puStack_a0;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar6 = (long *)*param_2;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar6) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_68 = param_2[1];
  plStack_70 = (long *)*param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  cStack_71 = '\r';
  uStack_88 = 0x2d63707267;
  uStack_83 = 0x676174;
  uStack_80 = 0x6e69622d73;
  uStack_7b = 0;
  if (plStack_70 == (long *)0x0) {
    uVar8 = uStack_68 & 0xff;
    uVar9 = (ulong)&plStack_70 | 9;
  }
  else {
    uVar8 = uStack_68;
    uVar9 = uStack_60;
    if (0x7ffffffffffffff7 < uStack_68) goto LAB_00350910;
  }
  if (uVar8 < 0x17) {
    uStack_90 = CONCAT17((char)uVar8,(undefined7)uStack_90);
    if (uVar8 != 0) goto LAB_00350870;
  }
  else {
    uVar1 = (uVar8 & 0x7ffffffffffffff8) + 8;
    if ((uVar8 | 7) != 0x17) {
      uVar1 = uVar8 | 7;
    }
    ppuVar5 = (undefined1 **)(uVar1 + 1);
    __Znwm();
    uStack_90 = (ulong)(uVar1 + 1) | 0x8000000000000000;
    puStack_a0 = (undefined1 *)ppuVar5;
    uStack_98 = uVar8;
LAB_00350870:
    _memmove(ppuVar5,uVar9,uVar8);
    ppuVar10 = ppuVar5;
  }
  *(undefined1 *)((long)ppuVar10 + uVar8) = 0;
  FUN_0034e794(param_1,&uStack_88,&puStack_a0);
  if ((long)uStack_90 < 0) {
    __ZdlPv(puStack_a0);
  }
  if (cStack_71 < '\0') {
    __ZdlPv(CONCAT35(uStack_83,uStack_88));
  }
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_70) {
    do {
      lVar7 = *plStack_70;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
      if (bVar3) {
        *plStack_70 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_70[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_00350910:
  func_0x0033b318(&puStack_a0);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x35091c);
  (*pcVar4)();
}



/* Entry: 00350968; end: 003509c3;  */

void FUN_00350968(ulong *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong *puVar2;
  long lVar3;
  
  puVar2 = param_1 + 1;
  uVar1 = *param_1;
  if ((uVar1 & 1) != 0) {
    puVar2 = (ulong *)*puVar2;
  }
  if (1 < uVar1) {
    lVar3 = (uVar1 >> 1) << 5;
    do {
      FUN_003509c4(param_2,puVar2);
      puVar2 = puVar2 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  return;
}



/* Entry: 003509c4; end: 00350b97;  */

void FUN_003509c4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 ***pppuVar5;
  long lVar6;
  ulong uVar7;
  undefined7 *puVar8;
  undefined8 **ppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined7 uStack_80;
  undefined4 uStack_79;
  undefined1 uStack_75;
  char cStack_69;
  long *plStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_003fee84(&plStack_68,param_2);
  cStack_69 = '\v';
  uStack_80 = 0x74736f632d626c;
  uStack_79 = 0x6e69622d;
  uStack_75 = 0;
  if (plStack_68 == (long *)0x0) {
    uVar7 = (ulong)bStack_60;
    puVar8 = &uStack_5f;
  }
  else {
    uVar7 = CONCAT71(uStack_5f,bStack_60);
    puVar8 = puStack_58;
    if (0x7ffffffffffffff7 < uVar7) goto LAB_00350b38;
  }
  if (uVar7 < 0x17) {
    uStack_88 = CONCAT17((char)uVar7,(undefined7)uStack_88);
    pppuVar5 = &ppuStack_98;
    if (uVar7 != 0) goto LAB_00350a98;
  }
  else {
    uVar1 = (uVar7 & 0x7ffffffffffffff8) + 8;
    if ((uVar7 | 7) != 0x17) {
      uVar1 = uVar7 | 7;
    }
    pppuVar5 = (undefined8 ***)(uVar1 + 1);
    __Znwm();
    uStack_88 = uVar1 + 1 | 0x8000000000000000;
    ppuStack_98 = pppuVar5;
    uStack_90 = uVar7;
LAB_00350a98:
    _memmove(pppuVar5,puVar8,uVar7);
  }
  *(undefined1 *)((long)pppuVar5 + uVar7) = 0;
  FUN_0034e794(param_1,&uStack_80,&ppuStack_98);
  if ((long)uStack_88 < 0) {
    __ZdlPv(ppuStack_98);
  }
  if (cStack_69 < '\0') {
    __ZdlPv(CONCAT17((undefined1)uStack_79,uStack_80));
  }
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_68) {
    do {
      lVar6 = *plStack_68;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
      if (bVar3) {
        *plStack_68 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)plStack_68[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_00350b38:
  func_0x0033b318(&ppuStack_98);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x350b44);
  (*pcVar4)();
}



/* Entry: 00350b98; end: 00350d77;  */

void FUN_00350b98(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 **ppuVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 **ppuVar10;
  undefined1 *puStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  char cStack_71;
  long *plStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  ppuVar5 = &puStack_a0;
  ppuVar10 = &puStack_a0;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar6 = (long *)*param_2;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar6) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_68 = param_2[1];
  plStack_70 = (long *)*param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  cStack_71 = '\b';
  uStack_88 = 0x6e656b6f742d626c;
  uStack_80 = 0;
  if (plStack_70 == (long *)0x0) {
    uVar8 = uStack_68 & 0xff;
    uVar9 = (ulong)&plStack_70 | 9;
  }
  else {
    uVar8 = uStack_68;
    uVar9 = uStack_60;
    if (0x7ffffffffffffff7 < uStack_68) goto LAB_00350d20;
  }
  if (uVar8 < 0x17) {
    uStack_90 = CONCAT17((char)uVar8,(undefined7)uStack_90);
    if (uVar8 != 0) goto LAB_00350c80;
  }
  else {
    uVar1 = (uVar8 & 0x7ffffffffffffff8) + 8;
    if ((uVar8 | 7) != 0x17) {
      uVar1 = uVar8 | 7;
    }
    ppuVar5 = (undefined1 **)(uVar1 + 1);
    __Znwm();
    uStack_90 = (ulong)(uVar1 + 1) | 0x8000000000000000;
    puStack_a0 = (undefined1 *)ppuVar5;
    uStack_98 = uVar8;
LAB_00350c80:
    _memmove(ppuVar5,uVar9,uVar8);
    ppuVar10 = ppuVar5;
  }
  *(undefined1 *)((long)ppuVar10 + uVar8) = 0;
  FUN_0034e794(param_1,&uStack_88,&puStack_a0);
  if ((long)uStack_90 < 0) {
    __ZdlPv(puStack_a0);
  }
  if (cStack_71 < '\0') {
    __ZdlPv(uStack_88);
  }
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_70) {
    do {
      lVar7 = *plStack_70;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
      if (bVar3) {
        *plStack_70 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_70[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_00350d20:
  func_0x0033b318(&puStack_a0);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x350d2c);
  (*pcVar4)();
}



/* Entry: 00350d78; end: 00350dfb;  */

void FUN_00350d78(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x30;
        func_0x0034e95c(plVar3 + 2,lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(lVar1);
    return;
  }
  return;
}



/* Entry: 00350dfc; end: 00350f23;  */

/* WARNING: Type propagation algorithm not settling */

code * FUN_00350dfc(long *param_1,code *param_2,code *param_3,code *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code **ppcVar4;
  undefined8 *******pppppppuVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  long *extraout_x8;
  long *extraout_x8_00;
  code *pcVar9;
  ulong uVar10;
  undefined1 uVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  byte *pbVar14;
  ulong uVar15;
  code *unaff_x19;
  code *unaff_x20;
  undefined8 *unaff_x21;
  ulong *puVar16;
  undefined8 *unaff_x22;
  undefined7 *puVar17;
  code *unaff_x23;
  code **ppcVar18;
  long *plVar19;
  undefined8 unaff_x24;
  long lVar20;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long *plVar21;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar22;
  undefined8 *******pppppppuStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  if ((param_3 == (code *)((long)&MACH_HEADER.cputype + 1)) &&
     (*(int *)param_2 == 0x7461703a && param_2[4] == (code)0x68)) {
    pbVar14 = *(byte **)param_4;
    if ((*pbVar14 & 1) == 0) {
      uVar11 = 0;
      *(undefined1 *)param_1 = 0;
    }
    else {
      if (*(long *)(pbVar14 + 0x1d0) == 0) {
        pbVar12 = pbVar14 + 0x1d9;
        uVar15 = (ulong)pbVar14[0x1d8];
      }
      else {
        uVar15 = *(ulong *)(pbVar14 + 0x1d8);
        pbVar12 = *(byte **)(pbVar14 + 0x1e0);
      }
      *param_1 = (long)pbVar12;
      param_1[1] = uVar15;
      uVar11 = 1;
    }
    *(undefined1 *)(param_1 + 2) = uVar11;
    return param_4;
  }
  if ((param_3 == (code *)((long)&MACH_HEADER.cpusubtype + 2)) &&
     (*(long *)param_2 == 0x69726f687475613a && *(short *)(param_2 + 8) == 0x7974)) {
    pbVar14 = *(byte **)param_4;
    if ((*pbVar14 >> 1 & 1) == 0) {
      uVar11 = 0;
      *(undefined1 *)param_1 = 0;
    }
    else {
      if (*(long *)(pbVar14 + 0x1b0) == 0) {
        pbVar12 = pbVar14 + 0x1b9;
        uVar15 = (ulong)pbVar14[0x1b8];
      }
      else {
        uVar15 = *(ulong *)(pbVar14 + 0x1b8);
        pbVar12 = *(byte **)(pbVar14 + 0x1c0);
      }
      *param_1 = (long)pbVar12;
      param_1[1] = uVar15;
      uVar11 = 1;
    }
    *(undefined1 *)(param_1 + 2) = uVar11;
    return param_4;
  }
  if ((param_3 != (code *)((long)&MACH_HEADER.cputype + 3)) ||
     (*(int *)param_2 != 0x74656d3a || *(int *)(param_2 + 3) != 0x646f6874)) {
    if ((param_3 != (code *)((long)&MACH_HEADER.cputype + 3)) ||
       (*(int *)param_2 != 0x6174733a || *(int *)(param_2 + 3) != 0x73757461)) {
      if ((param_3 != (code *)((long)&MACH_HEADER.cputype + 3)) ||
         (*(int *)param_2 != 0x6863733a || *(int *)(param_2 + 3) != 0x656d6568)) {
        if ((param_3 != (code *)&MACH_HEADER.filetype) ||
           (*(long *)param_2 != 0x2d746e65746e6f63 || *(int *)(param_2 + 8) != 0x65707974)) {
          if ((param_3 != (code *)((long)&MACH_HEADER.magic + 2)) || (*(short *)param_2 != 0x6574))
          {
            if ((param_3 != (code *)((long)&MACH_HEADER.filetype + 1)) ||
               (*(long *)param_2 != 0x636e652d63707267 ||
                *(long *)(param_2 + 5) != 0x676e69646f636e65)) {
              if ((param_3 != (code *)((long)&MACH_HEADER.reserved + 2)) ||
                 (((*(long *)param_2 != 0x746e692d63707267 ||
                   *(long *)(param_2 + 8) != 0x6e652d6c616e7265) ||
                  *(long *)(param_2 + 0x10) != 0x722d676e69646f63) ||
                  *(long *)(param_2 + 0x16) != 0x747365757165722d)) {
                if ((param_3 != (code *)&MACH_HEADER.sizeofcmds) ||
                   ((*(long *)param_2 != 0x6363612d63707267 ||
                    *(long *)(param_2 + 8) != 0x6f636e652d747065) ||
                    *(int *)(param_2 + 0x10) != 0x676e6964)) {
                  if ((param_3 != (code *)((long)&MACH_HEADER.cpusubtype + 3)) ||
                     (*(long *)param_2 != 0x6174732d63707267 ||
                      *(long *)(param_2 + 3) != 0x7375746174732d63)) {
                    if ((param_3 != (code *)&MACH_HEADER.filetype) ||
                       (*(long *)param_2 != 0x6d69742d63707267 ||
                        *(int *)(param_2 + 8) != 0x74756f65)) {
                      if ((param_3 != (code *)((long)&MACH_HEADER.flags + 2)) ||
                         (((*(long *)param_2 != 0x6572702d63707267 ||
                           *(long *)(param_2 + 8) != 0x70722d73756f6976) ||
                          *(long *)(param_2 + 0x10) != 0x706d657474612d63) ||
                          *(short *)(param_2 + 0x18) != 0x7374)) {
                        if ((param_3 != (code *)((long)&MACH_HEADER.sizeofcmds + 2)) ||
                           ((*(long *)param_2 != 0x7465722d63707267 ||
                            *(long *)(param_2 + 8) != 0x62687375702d7972) ||
                            *(long *)(param_2 + 0xe) != 0x736d2d6b63616268)) {
                          if ((param_3 == (code *)((long)&MACH_HEADER.cpusubtype + 2)) &&
                             (*(long *)param_2 == 0x6567612d72657375 &&
                              *(short *)(param_2 + 8) == 0x746e)) {
                            lVar20 = *(long *)param_4;
                            if ((*(byte *)(lVar20 + 1) >> 6 & 1) == 0) {
                              uVar11 = 0;
                              *(undefined1 *)param_1 = 0;
                            }
                            else {
                              if (*(long *)(lVar20 + 0x150) == 0) {
                                lVar22 = lVar20 + 0x159;
                                uVar15 = (ulong)*(byte *)(lVar20 + 0x158);
                              }
                              else {
                                uVar15 = *(ulong *)(lVar20 + 0x158);
                                lVar22 = *(long *)(lVar20 + 0x160);
                              }
                              *param_1 = lVar22;
                              param_1[1] = uVar15;
                              uVar11 = 1;
                            }
                            *(undefined1 *)(param_1 + 2) = uVar11;
                            return param_4;
                          }
                          if ((param_3 == (code *)&MACH_HEADER.filetype) &&
                             (*(long *)param_2 == 0x73656d2d63707267 &&
                              *(int *)(param_2 + 8) == 0x65676173)) {
                            lVar20 = *(long *)param_4;
                            if (*(char *)(lVar20 + 1) < '\0') {
                              if (*(long *)(lVar20 + 0x130) == 0) {
                                lVar22 = lVar20 + 0x139;
                                uVar15 = (ulong)*(byte *)(lVar20 + 0x138);
                              }
                              else {
                                uVar15 = *(ulong *)(lVar20 + 0x138);
                                lVar22 = *(long *)(lVar20 + 0x140);
                              }
                              *param_1 = lVar22;
                              param_1[1] = uVar15;
                              uVar11 = 1;
                            }
                            else {
                              uVar11 = 0;
                              *(undefined1 *)param_1 = 0;
                            }
                            *(undefined1 *)(param_1 + 2) = uVar11;
                            return param_4;
                          }
                          if ((param_3 == (code *)&MACH_HEADER.cputype) &&
                             (*(int *)param_2 == 0x74736f68)) {
                            lVar20 = *(long *)param_4;
                            if ((*(byte *)(lVar20 + 2) & 1) == 0) {
                              uVar11 = 0;
                              *(undefined1 *)param_1 = 0;
                            }
                            else {
                              if (*(long *)(lVar20 + 0x110) == 0) {
                                lVar22 = lVar20 + 0x119;
                                uVar15 = (ulong)*(byte *)(lVar20 + 0x118);
                              }
                              else {
                                uVar15 = *(ulong *)(lVar20 + 0x118);
                                lVar22 = *(long *)(lVar20 + 0x120);
                              }
                              *param_1 = lVar22;
                              param_1[1] = uVar15;
                              uVar11 = 1;
                            }
                            *(undefined1 *)(param_1 + 2) = uVar11;
                            return param_4;
                          }
                          if ((param_3 == (code *)((long)&MACH_HEADER.flags + 1)) &&
                             (((*(long *)param_2 == 0x746e696f70646e65 &&
                               *(long *)(param_2 + 8) == 0x656d2d64616f6c2d) &&
                              *(long *)(param_2 + 0x10) == 0x69622d7363697274) &&
                              param_2[0x18] == (code)0x6e)) {
                            lVar20 = *(long *)param_4;
                            if ((*(byte *)(lVar20 + 2) >> 1 & 1) == 0) {
                              uVar11 = 0;
                              *(undefined1 *)param_1 = 0;
                            }
                            else {
                              if (*(long *)(lVar20 + 0xf0) == 0) {
                                lVar22 = lVar20 + 0xf9;
                                uVar15 = (ulong)*(byte *)(lVar20 + 0xf8);
                              }
                              else {
                                uVar15 = *(ulong *)(lVar20 + 0xf8);
                                lVar22 = *(long *)(lVar20 + 0x100);
                              }
                              *param_1 = lVar22;
                              param_1[1] = uVar15;
                              uVar11 = 1;
                            }
                            *(undefined1 *)(param_1 + 2) = uVar11;
                            return param_4;
                          }
                          if ((param_3 == (code *)((long)&MACH_HEADER.sizeofcmds + 1)) &&
                             ((*(long *)param_2 == 0x7265732d63707267 &&
                              *(long *)(param_2 + 8) == 0x746174732d726576) &&
                              *(long *)(param_2 + 0xd) == 0x6e69622d73746174)) {
                            lVar20 = *(long *)param_4;
                            if ((*(byte *)(lVar20 + 2) >> 2 & 1) == 0) {
                              uVar11 = 0;
                              *(undefined1 *)param_1 = 0;
                            }
                            else {
                              if (*(long *)(lVar20 + 0xd0) == 0) {
                                lVar22 = lVar20 + 0xd9;
                                uVar15 = (ulong)*(byte *)(lVar20 + 0xd8);
                              }
                              else {
                                uVar15 = *(ulong *)(lVar20 + 0xd8);
                                lVar22 = *(long *)(lVar20 + 0xe0);
                              }
                              *param_1 = lVar22;
                              param_1[1] = uVar15;
                              uVar11 = 1;
                            }
                            *(undefined1 *)(param_1 + 2) = uVar11;
                            return param_4;
                          }
                          if ((param_3 == (code *)((long)&MACH_HEADER.filetype + 2)) &&
                             (*(long *)param_2 == 0x6172742d63707267 &&
                              *(long *)(param_2 + 6) == 0x6e69622d65636172)) {
                            lVar20 = *(long *)param_4;
                            if ((*(byte *)(lVar20 + 2) >> 3 & 1) == 0) {
                              uVar11 = 0;
                              *(undefined1 *)param_1 = 0;
                            }
                            else {
                              if (*(long *)(lVar20 + 0xb0) == 0) {
                                lVar22 = lVar20 + 0xb9;
                                uVar15 = (ulong)*(byte *)(lVar20 + 0xb8);
                              }
                              else {
                                uVar15 = *(ulong *)(lVar20 + 0xb8);
                                lVar22 = *(long *)(lVar20 + 0xc0);
                              }
                              *param_1 = lVar22;
                              param_1[1] = uVar15;
                              uVar11 = 1;
                            }
                            *(undefined1 *)(param_1 + 2) = uVar11;
                            return param_4;
                          }
                          if ((param_3 == (code *)((long)&MACH_HEADER.filetype + 1)) &&
                             (*(long *)param_2 == 0x6761742d63707267 &&
                              *(long *)(param_2 + 5) == 0x6e69622d73676174)) {
                            lVar20 = *(long *)param_4;
                            if ((*(byte *)(lVar20 + 2) >> 4 & 1) == 0) {
                              uVar11 = 0;
                              *(undefined1 *)param_1 = 0;
                            }
                            else {
                              if (*(long *)(lVar20 + 0x90) == 0) {
                                lVar22 = lVar20 + 0x99;
                                uVar15 = (ulong)*(byte *)(lVar20 + 0x98);
                              }
                              else {
                                uVar15 = *(ulong *)(lVar20 + 0x98);
                                lVar22 = *(long *)(lVar20 + 0xa0);
                              }
                              *param_1 = lVar22;
                              param_1[1] = uVar15;
                              uVar11 = 1;
                            }
                            *(undefined1 *)(param_1 + 2) = uVar11;
                            return param_4;
                          }
                          if ((param_3 == (code *)((long)&MACH_HEADER.ncmds + 3)) &&
                             ((*(long *)param_2 == 0x635f626c63707267 &&
                              *(long *)(param_2 + 8) == 0x74735f746e65696c) &&
                              *(long *)(param_2 + 0xb) == 0x73746174735f746e)) {
                            unaff_x29 = &stack0xfffffffffffffff0;
                            if ((*(byte *)(*(long *)param_4 + 2) >> 5 & 1) == 0) {
                              *(undefined1 *)param_1 = 0;
                              *(undefined1 *)(param_1 + 2) = 0;
                              return param_4;
                            }
                            unaff_x30 = FUN_00352a68;
                            pcVar6 = param_4;
                            _abort();
                            register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
                            param_2 = param_4;
                            param_4 = pcVar6;
                            param_1 = extraout_x8;
                          }
                          if ((param_3 == (code *)((long)&MACH_HEADER.cpusubtype + 3)) &&
                             (*(long *)param_2 == 0x2d74736f632d626c &&
                              *(long *)(param_2 + 3) == 0x6e69622d74736f63)) {
                            *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
                            *(code **)((long)register0x00000008 + -0x38) = unaff_x23;
                            *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
                            *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
                            *(code **)((long)register0x00000008 + -0x20) = unaff_x20;
                            *(code **)((long)register0x00000008 + -0x18) = unaff_x19;
                            *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
                            *(code **)((long)register0x00000008 + -8) = unaff_x30;
                            unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
                            *(undefined8 *)((long)register0x00000008 + -0x48) =
                                 *(undefined8 *)PTR____stack_chk_guard_00999f88;
                            lVar20 = *(long *)param_4;
                            unaff_x19 = param_4;
                            pcVar6 = param_4;
                            if ((*(byte *)(lVar20 + 2) >> 6 & 1) == 0) {
                              uVar11 = 0;
                              *(undefined1 *)param_1 = 0;
                            }
                            else {
                              puVar13 = *(undefined8 **)(param_4 + 8);
                              if (*(char *)((long)puVar13 + 0x17) < '\0') {
                                *(undefined1 *)*puVar13 = 0;
                                puVar13[1] = 0;
                              }
                              else {
                                *(undefined1 *)puVar13 = 0;
                                *(undefined1 *)((long)puVar13 + 0x17) = 0;
                              }
                              uVar15 = *(ulong *)(lVar20 + 0x60);
                              unaff_x21 = (undefined8 *)(lVar20 + 0x68);
                              if ((uVar15 & 1) != 0) {
                                unaff_x21 = (undefined8 *)*unaff_x21;
                              }
                              if (1 < uVar15) {
                                unaff_x22 = unaff_x21 + (uVar15 >> 1) * 4;
                                unaff_x23 = (code *)((long)register0x00000008 + -0x5f);
                                do {
                                  lVar20 = *(long *)(param_4 + 8);
                                  if (*(char *)(lVar20 + 0x17) < '\0') {
                                    if (*(long *)(lVar20 + 8) != 0) goto LAB_00352b64;
                                  }
                                  else if (*(char *)(lVar20 + 0x17) != '\0') {
LAB_00352b64:
                                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                                              (lVar20,0x2c);
                                  }
                                  FUN_003fee84((undefined1 *)((long)register0x00000008 + -0x68),
                                               unaff_x21);
                                  uVar15 = *(ulong *)((long)register0x00000008 + -0x60) & 0xff;
                                  param_3 = unaff_x23;
                                  if (*(long *)((long)register0x00000008 + -0x68) != 0) {
                                    uVar15 = *(ulong *)((long)register0x00000008 + -0x60);
                                    param_3 = *(code **)((long)register0x00000008 + -0x58);
                                  }
                                  pcVar6 = param_3 + uVar15;
                                  FUN_00352c98(*(long *)(param_4 + 8));
                                  unaff_x19 = *(code **)((long)register0x00000008 + -0x68);
                                  if ((code *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
                                    do {
                                      lVar20 = *(long *)unaff_x19;
                                      cVar2 = '\x01';
                                      bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
                                      if (bVar3) {
                                        *(long *)unaff_x19 = lVar20 + -1;
                                        cVar2 = ExclusiveMonitorsStatus();
                                      }
                                    } while (cVar2 != '\0');
                                    if (lVar20 + -1 == 0) {
                                      (**(code **)(unaff_x19 + 8))();
                                    }
                                  }
                                  unaff_x21 = unaff_x21 + 4;
                                } while (unaff_x21 != unaff_x22);
                              }
                              plVar19 = *(long **)(param_4 + 8);
                              uVar15 = plVar19[1];
                              plVar1 = (long *)*plVar19;
                              if (-1 < (char)*(byte *)((long)plVar19 + 0x17)) {
                                uVar15 = (ulong)*(byte *)((long)plVar19 + 0x17);
                                plVar1 = plVar19;
                              }
                              *param_1 = (long)plVar1;
                              param_1[1] = uVar15;
                              uVar11 = 1;
                              unaff_x20 = param_4;
                            }
                            *(undefined1 *)(param_1 + 2) = uVar11;
                            if (*(long *)PTR____stack_chk_guard_00999f88 ==
                                *(long *)((long)register0x00000008 + -0x48)) {
                              return unaff_x19;
                            }
                            ___stack_chk_fail();
                            param_4 = pcVar6;
                            if ((int)param_3 != 0) {
                              func_0x0040cf10();
                              FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x68));
                              param_4 = pcVar6;
                            }
                            unaff_x30 = FUN_00352c58;
                            param_2 = unaff_x19;
                            __Unwind_Resume();
                            register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
                            param_1 = extraout_x8_00;
                          }
                          if ((param_3 == (code *)&MACH_HEADER.cpusubtype) &&
                             (*(long *)param_2 == 0x6e656b6f742d626c)) {
                            lVar20 = *(long *)param_4;
                            if (*(char *)(lVar20 + 2) < '\0') {
                              if (*(long *)(lVar20 + 0x40) == 0) {
                                lVar22 = lVar20 + 0x49;
                                uVar15 = (ulong)*(byte *)(lVar20 + 0x48);
                              }
                              else {
                                uVar15 = *(ulong *)(lVar20 + 0x48);
                                lVar22 = *(long *)(lVar20 + 0x50);
                              }
                              *param_1 = lVar22;
                              param_1[1] = uVar15;
                              uVar11 = 1;
                            }
                            else {
                              uVar11 = 0;
                              *(undefined1 *)param_1 = 0;
                            }
                            *(undefined1 *)(param_1 + 2) = uVar11;
                            return param_4;
                          }
                          lVar20 = *(long *)param_4;
                          plVar1 = *(long **)(param_4 + 8);
                          pcVar6 = (code *)(lVar20 + 0x1f0);
                          *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
                          *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
                          *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
                          *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
                          *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
                          *(code **)((long)register0x00000008 + -0x38) = unaff_x23;
                          *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
                          *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
                          *(code **)((long)register0x00000008 + -0x20) = unaff_x20;
                          *(code **)((long)register0x00000008 + -0x18) = unaff_x19;
                          *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
                          *(code **)((long)register0x00000008 + -8) = unaff_x30;
                          *(undefined8 *)((long)register0x00000008 + -0x70) =
                               *(undefined8 *)PTR____stack_chk_guard_00999f88;
                          *(undefined1 *)param_1 = 0;
                          *(undefined1 *)(param_1 + 2) = 0;
                          plVar19 = *(long **)(lVar20 + 0x1f8);
                          pcVar7 = param_2;
                          pcVar8 = param_3;
                          if ((plVar19 != (long *)0x0) && (plVar19[1] != 0)) {
                            lVar20 = 0;
                            bVar3 = false;
                            plVar21 = (long *)*param_1;
                            uVar15 = param_1[1];
                            do {
                              if (plVar19[lVar20 * 8 + 2] == 0) {
                                pcVar6 = (code *)((long)plVar19 + lVar20 * 0x40 + 0x19);
                                pcVar9 = (code *)(ulong)*(byte *)(plVar19 + lVar20 * 8 + 3);
                              }
                              else {
                                pcVar9 = (code *)plVar19[lVar20 * 8 + 3];
                                pcVar6 = (code *)plVar19[lVar20 * 8 + 4];
                              }
                              if ((pcVar9 == param_3) &&
                                 (pcVar7 = param_2, pcVar8 = param_3, _memcmp(pcVar6,param_2),
                                 (int)pcVar6 == 0)) {
                                if (bVar3) {
                                  *(long **)((long)register0x00000008 + -0xa0) = plVar21;
                                  *(ulong *)((long)register0x00000008 + -0x98) = uVar15;
                                  *(char **)((long)register0x00000008 + -0xd0) = ",";
                                  *(undefined8 *)((long)register0x00000008 + -200) = 1;
                                  if (plVar19[lVar20 * 8 + 6] == 0) {
                                    lVar22 = (long)plVar19 + lVar20 * 0x40 + 0x39;
                                    uVar15 = (ulong)*(byte *)(plVar19 + lVar20 * 8 + 7);
                                  }
                                  else {
                                    uVar15 = plVar19[lVar20 * 8 + 7];
                                    lVar22 = plVar19[lVar20 * 8 + 8];
                                  }
                                  *(long *)((long)register0x00000008 + -0x100) = lVar22;
                                  *(ulong *)((long)register0x00000008 + -0xf8) = uVar15;
                                  pcVar6 = (code *)((long)register0x00000008 + -0xa0);
                                  pcVar7 = (code *)((long)register0x00000008 + -0xd0);
                                  pcVar8 = (code *)((long)register0x00000008 + -0x100);
                                  FUN_00575ddc((undefined1 *)((long)register0x00000008 + -0x118),
                                               pcVar6,pcVar7);
                                  if (*(char *)((long)plVar1 + 0x17) < '\0') {
                                    pcVar6 = (code *)*plVar1;
                                    __ZdlPv();
                                  }
                                  uVar10 = *(ulong *)((long)register0x00000008 + -0x108);
                                  plVar1[2] = uVar10;
                                  lVar22 = *(long *)((long)register0x00000008 + -0x118);
                                  plVar1[1] = *(long *)((long)register0x00000008 + -0x110);
                                  *plVar1 = lVar22;
                                  uVar15 = plVar1[1];
                                  plVar21 = (long *)*plVar1;
                                  if (-1 < (long)uVar10) {
                                    uVar15 = uVar10 >> 0x38;
                                    plVar21 = plVar1;
                                  }
                                  *param_1 = (long)plVar21;
                                  param_1[1] = uVar15;
                                }
                                else {
                                  if (plVar19[lVar20 * 8 + 6] == 0) {
                                    plVar21 = (long *)((long)plVar19 + lVar20 * 0x40 + 0x39);
                                    uVar15 = (ulong)*(byte *)(plVar19 + lVar20 * 8 + 7);
                                  }
                                  else {
                                    uVar15 = plVar19[lVar20 * 8 + 7];
                                    plVar21 = (long *)plVar19[lVar20 * 8 + 8];
                                  }
                                  *param_1 = (long)plVar21;
                                  param_1[1] = uVar15;
                                  bVar3 = true;
                                  *(undefined1 *)(param_1 + 2) = 1;
                                }
                              }
                              lVar20 = lVar20 + 1;
                              do {
                                if (lVar20 != plVar19[1]) goto LAB_003fe6e4;
                                lVar20 = 0;
                                plVar19 = (long *)*plVar19;
                              } while (plVar19 != (long *)0x0);
                              lVar20 = 0;
LAB_003fe6e4:
                            } while ((plVar19 != (long *)0x0) || (lVar20 != 0));
                          }
                          if (*(long *)PTR____stack_chk_guard_00999f88 ==
                              *(long *)((long)register0x00000008 + -0x70)) {
                            return pcVar6;
                          }
                          ___stack_chk_fail();
                          __Unwind_Resume();
                          *(undefined1 **)((long)register0x00000008 + -0x130) =
                               (undefined1 *)((long)register0x00000008 + -0x10);
                          *(undefined8 *)((long)register0x00000008 + -0x128) = 0x3fe72c;
                          if (*(long *)pcVar6 == 0) {
                            pcVar9 = pcVar6 + 9;
                            uVar15 = (ulong)(byte)pcVar6[8];
                          }
                          else {
                            uVar15 = *(ulong *)(pcVar6 + 8);
                            pcVar9 = *(code **)(pcVar6 + 0x10);
                          }
                          if (uVar15 == 0x10) {
                            if (*(long *)pcVar9 == 0x746163696c707061 &&
                                *(long *)(pcVar9 + 8) == 0x637072672f6e6f69) {
                              return (code *)0x0;
                            }
                          }
                          else if (uVar15 < 0x11) {
                            if (uVar15 == 0) {
                              return (code *)((long)&MACH_HEADER.magic + 1);
                            }
                          }
                          else {
                            if ((*(long *)pcVar9 == 0x746163696c707061 &&
                                *(long *)(pcVar9 + 8) == 0x637072672f6e6f69) &&
                                pcVar9[0x10] == (code)0x3b) {
                              return (code *)0x0;
                            }
                            if ((*(long *)pcVar9 == 0x746163696c707061 &&
                                *(long *)(pcVar9 + 8) == 0x637072672f6e6f69) &&
                                pcVar9[0x10] == (code)0x2b) {
                              return (code *)0x0;
                            }
                          }
                          (*pcVar8)(pcVar7,"invalid value",0xd);
                          return (code *)((long)&MACH_HEADER.magic + 2);
                        }
                        ppcVar4 = &pcStack_80;
                        ppcVar18 = &pcStack_80;
                        lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
                        if ((*(byte *)(*(long *)param_4 + 1) >> 5 & 1) == 0) {
                          uVar11 = 0;
                          *(undefined1 *)param_1 = 0;
                        }
                        else {
                          FUN_0034eb70(&pcStack_68,*(undefined8 *)(*(long *)param_4 + 0x170));
                          if (pcStack_68 == (code *)0x0) {
                            uVar15 = (ulong)bStack_60;
                            puVar17 = &uStack_5f;
                          }
                          else {
                            uVar15 = CONCAT71(uStack_5f,bStack_60);
                            puVar17 = puStack_58;
                            if (0x7ffffffffffffff7 < uVar15) goto LAB_003525f4;
                          }
                          if (uVar15 < 0x17) {
                            uStack_70 = CONCAT17((char)uVar15,(undefined7)uStack_70);
                            if (uVar15 != 0) goto LAB_00352530;
                          }
                          else {
                            uVar10 = (uVar15 & 0x7ffffffffffffff8) + 8;
                            if ((uVar15 | 7) != 0x17) {
                              uVar10 = uVar15 | 7;
                            }
                            ppcVar4 = (code **)(uVar10 + 1);
                            __Znwm();
                            uStack_70 = (ulong)(uVar10 + 1) | 0x8000000000000000;
                            pcStack_80 = (code *)ppcVar4;
                            uStack_78 = uVar15;
LAB_00352530:
                            _memmove(ppcVar4,puVar17,uVar15);
                            ppcVar18 = ppcVar4;
                          }
                          *(code *)((long)ppcVar18 + uVar15) = (code)0x0;
                          puVar13 = *(undefined8 **)(param_4 + 8);
                          if (*(char *)((long)puVar13 + 0x17) < '\0') {
                            __ZdlPv(*puVar13);
                          }
                          puVar13[2] = uStack_70;
                          puVar13[1] = uStack_78;
                          *puVar13 = pcStack_80;
                          uStack_70 = uStack_70 & 0xffffffffffffff;
                          pcStack_80 = (code *)((ulong)pcStack_80 & 0xffffffffffffff00);
                          if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
                            do {
                              lVar20 = *(long *)pcStack_68;
                              cVar2 = '\x01';
                              bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
                              if (bVar3) {
                                *(long *)pcStack_68 = lVar20 + -1;
                                cVar2 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar2 != '\0');
                            if (lVar20 + -1 == 0) {
                              (**(code **)(pcStack_68 + 8))();
                            }
                          }
                          plVar19 = *(long **)(param_4 + 8);
                          uVar15 = plVar19[1];
                          plVar1 = (long *)*plVar19;
                          if (-1 < (char)*(byte *)((long)plVar19 + 0x17)) {
                            uVar15 = (ulong)*(byte *)((long)plVar19 + 0x17);
                            plVar1 = plVar19;
                          }
                          *param_1 = (long)plVar1;
                          param_1[1] = uVar15;
                          uVar11 = 1;
                          param_4 = pcStack_68;
                        }
                        *(undefined1 *)(param_1 + 2) = uVar11;
                        if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
                          return param_4;
                        }
                        ___stack_chk_fail();
LAB_003525f4:
                        func_0x0033b318(&pcStack_80);
                    /* WARNING: Does not return */
                        pcVar6 = (code *)SoftwareBreakpoint(1,0x352600);
                        (*pcVar6)();
                      }
                      ppcVar4 = &pcStack_80;
                      ppcVar18 = &pcStack_80;
                      lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
                      if ((*(byte *)(*(long *)param_4 + 1) >> 4 & 1) == 0) {
                        uVar11 = 0;
                        *(undefined1 *)param_1 = 0;
                      }
                      else {
                        FUN_0034eb70(&pcStack_68,*(undefined4 *)(*(long *)param_4 + 0x178));
                        if (pcStack_68 == (code *)0x0) {
                          uVar15 = (ulong)bStack_60;
                          puVar17 = &uStack_5f;
                        }
                        else {
                          uVar15 = CONCAT71(uStack_5f,bStack_60);
                          puVar17 = puStack_58;
                          if (0x7ffffffffffffff7 < uVar15) goto LAB_003523d4;
                        }
                        if (uVar15 < 0x17) {
                          uStack_70 = CONCAT17((char)uVar15,(undefined7)uStack_70);
                          if (uVar15 != 0) goto LAB_00352310;
                        }
                        else {
                          uVar10 = (uVar15 & 0x7ffffffffffffff8) + 8;
                          if ((uVar15 | 7) != 0x17) {
                            uVar10 = uVar15 | 7;
                          }
                          ppcVar4 = (code **)(uVar10 + 1);
                          __Znwm();
                          uStack_70 = (ulong)(uVar10 + 1) | 0x8000000000000000;
                          pcStack_80 = (code *)ppcVar4;
                          uStack_78 = uVar15;
LAB_00352310:
                          _memmove(ppcVar4,puVar17,uVar15);
                          ppcVar18 = ppcVar4;
                        }
                        *(code *)((long)ppcVar18 + uVar15) = (code)0x0;
                        puVar13 = *(undefined8 **)(param_4 + 8);
                        if (*(char *)((long)puVar13 + 0x17) < '\0') {
                          __ZdlPv(*puVar13);
                        }
                        puVar13[2] = uStack_70;
                        puVar13[1] = uStack_78;
                        *puVar13 = pcStack_80;
                        uStack_70 = uStack_70 & 0xffffffffffffff;
                        pcStack_80 = (code *)((ulong)pcStack_80 & 0xffffffffffffff00);
                        if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
                          do {
                            lVar20 = *(long *)pcStack_68;
                            cVar2 = '\x01';
                            bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
                            if (bVar3) {
                              *(long *)pcStack_68 = lVar20 + -1;
                              cVar2 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar2 != '\0');
                          if (lVar20 + -1 == 0) {
                            (**(code **)(pcStack_68 + 8))();
                          }
                        }
                        plVar19 = *(long **)(param_4 + 8);
                        uVar15 = plVar19[1];
                        plVar1 = (long *)*plVar19;
                        if (-1 < (char)*(byte *)((long)plVar19 + 0x17)) {
                          uVar15 = (ulong)*(byte *)((long)plVar19 + 0x17);
                          plVar1 = plVar19;
                        }
                        *param_1 = (long)plVar1;
                        param_1[1] = uVar15;
                        uVar11 = 1;
                        param_4 = pcStack_68;
                      }
                      *(undefined1 *)(param_1 + 2) = uVar11;
                      if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
                        return param_4;
                      }
                      ___stack_chk_fail();
LAB_003523d4:
                      func_0x0033b318(&pcStack_80);
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x3523e0);
                      (*pcVar6)();
                    }
                    ppcVar4 = &pcStack_80;
                    ppcVar18 = &pcStack_80;
                    lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
                    if ((*(byte *)(*(long *)param_4 + 1) >> 3 & 1) == 0) {
                      uVar11 = 0;
                      *(undefined1 *)param_1 = 0;
                    }
                    else {
                      func_0x003fe980(&pcStack_68,*(undefined8 *)(*(long *)param_4 + 0x180));
                      if (pcStack_68 == (code *)0x0) {
                        uVar15 = (ulong)bStack_60;
                        puVar17 = &uStack_5f;
                      }
                      else {
                        uVar15 = CONCAT71(uStack_5f,bStack_60);
                        puVar17 = puStack_58;
                        if (0x7ffffffffffffff7 < uVar15) goto LAB_003521a8;
                      }
                      if (uVar15 < 0x17) {
                        uStack_70 = CONCAT17((char)uVar15,(undefined7)uStack_70);
                        if (uVar15 != 0) goto LAB_003520e4;
                      }
                      else {
                        uVar10 = (uVar15 & 0x7ffffffffffffff8) + 8;
                        if ((uVar15 | 7) != 0x17) {
                          uVar10 = uVar15 | 7;
                        }
                        ppcVar4 = (code **)(uVar10 + 1);
                        __Znwm();
                        uStack_70 = (ulong)(uVar10 + 1) | 0x8000000000000000;
                        pcStack_80 = (code *)ppcVar4;
                        uStack_78 = uVar15;
LAB_003520e4:
                        _memmove(ppcVar4,puVar17,uVar15);
                        ppcVar18 = ppcVar4;
                      }
                      *(code *)((long)ppcVar18 + uVar15) = (code)0x0;
                      puVar13 = *(undefined8 **)(param_4 + 8);
                      if (*(char *)((long)puVar13 + 0x17) < '\0') {
                        __ZdlPv(*puVar13);
                      }
                      puVar13[2] = uStack_70;
                      puVar13[1] = uStack_78;
                      *puVar13 = pcStack_80;
                      uStack_70 = uStack_70 & 0xffffffffffffff;
                      pcStack_80 = (code *)((ulong)pcStack_80 & 0xffffffffffffff00);
                      if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
                        do {
                          lVar20 = *(long *)pcStack_68;
                          cVar2 = '\x01';
                          bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
                          if (bVar3) {
                            *(long *)pcStack_68 = lVar20 + -1;
                            cVar2 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar2 != '\0');
                        if (lVar20 + -1 == 0) {
                          (**(code **)(pcStack_68 + 8))();
                        }
                      }
                      plVar19 = *(long **)(param_4 + 8);
                      uVar15 = plVar19[1];
                      plVar1 = (long *)*plVar19;
                      if (-1 < (char)*(byte *)((long)plVar19 + 0x17)) {
                        uVar15 = (ulong)*(byte *)((long)plVar19 + 0x17);
                        plVar1 = plVar19;
                      }
                      *param_1 = (long)plVar1;
                      param_1[1] = uVar15;
                      uVar11 = 1;
                      param_4 = pcStack_68;
                    }
                    *(undefined1 *)(param_1 + 2) = uVar11;
                    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
                      return param_4;
                    }
                    ___stack_chk_fail();
LAB_003521a8:
                    func_0x0033b318(&pcStack_80);
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x3521b4);
                    (*pcVar6)();
                  }
                  ppcVar4 = &pcStack_80;
                  ppcVar18 = &pcStack_80;
                  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
                  if ((*(byte *)(*(long *)param_4 + 1) >> 2 & 1) == 0) {
                    uVar11 = 0;
                    *(undefined1 *)param_1 = 0;
                  }
                  else {
                    FUN_0034eb70(&pcStack_68,(long)*(int *)(*(long *)param_4 + 0x188));
                    if (pcStack_68 == (code *)0x0) {
                      uVar15 = (ulong)bStack_60;
                      puVar17 = &uStack_5f;
                    }
                    else {
                      uVar15 = CONCAT71(uStack_5f,bStack_60);
                      puVar17 = puStack_58;
                      if (0x7ffffffffffffff7 < uVar15) goto LAB_00351fa4;
                    }
                    if (uVar15 < 0x17) {
                      uStack_70 = CONCAT17((char)uVar15,(undefined7)uStack_70);
                      if (uVar15 != 0) goto LAB_00351ee0;
                    }
                    else {
                      uVar10 = (uVar15 & 0x7ffffffffffffff8) + 8;
                      if ((uVar15 | 7) != 0x17) {
                        uVar10 = uVar15 | 7;
                      }
                      ppcVar4 = (code **)(uVar10 + 1);
                      __Znwm();
                      uStack_70 = (ulong)(uVar10 + 1) | 0x8000000000000000;
                      pcStack_80 = (code *)ppcVar4;
                      uStack_78 = uVar15;
LAB_00351ee0:
                      _memmove(ppcVar4,puVar17,uVar15);
                      ppcVar18 = ppcVar4;
                    }
                    *(code *)((long)ppcVar18 + uVar15) = (code)0x0;
                    puVar13 = *(undefined8 **)(param_4 + 8);
                    if (*(char *)((long)puVar13 + 0x17) < '\0') {
                      __ZdlPv(*puVar13);
                    }
                    puVar13[2] = uStack_70;
                    puVar13[1] = uStack_78;
                    *puVar13 = pcStack_80;
                    uStack_70 = uStack_70 & 0xffffffffffffff;
                    pcStack_80 = (code *)((ulong)pcStack_80 & 0xffffffffffffff00);
                    if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
                      do {
                        lVar20 = *(long *)pcStack_68;
                        cVar2 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
                        if (bVar3) {
                          *(long *)pcStack_68 = lVar20 + -1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                      if (lVar20 + -1 == 0) {
                        (**(code **)(pcStack_68 + 8))();
                      }
                    }
                    plVar19 = *(long **)(param_4 + 8);
                    uVar15 = plVar19[1];
                    plVar1 = (long *)*plVar19;
                    if (-1 < (char)*(byte *)((long)plVar19 + 0x17)) {
                      uVar15 = (ulong)*(byte *)((long)plVar19 + 0x17);
                      plVar1 = plVar19;
                    }
                    *param_1 = (long)plVar1;
                    param_1[1] = uVar15;
                    uVar11 = 1;
                    param_4 = pcStack_68;
                  }
                  *(undefined1 *)(param_1 + 2) = uVar11;
                  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
                    return param_4;
                  }
                  ___stack_chk_fail();
LAB_00351fa4:
                  func_0x0033b318(&pcStack_80);
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x351fb0);
                  (*pcVar6)();
                }
                lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
                if ((*(byte *)(*(long *)param_4 + 1) >> 1 & 1) == 0) {
                  uVar11 = 0;
                  *(undefined1 *)param_1 = 0;
                }
                else {
                  uStack_70 = CONCAT17(*(undefined1 *)(*(long *)param_4 + 0x18c),
                                       (undefined7)uStack_70);
                  func_0x003b095c(&pcStack_68,(long)&uStack_70 + 7);
                  if (pcStack_68 == (code *)0x0) {
                    pcVar6 = (code *)(ulong)bStack_60;
                    puVar17 = &uStack_5f;
                  }
                  else {
                    pcVar6 = (code *)CONCAT71(uStack_5f,bStack_60);
                    puVar17 = puStack_58;
                    if ((code *)0x7ffffffffffffff7 < pcVar6) goto LAB_00351d98;
                  }
                  if ((code *)((long)&MACH_HEADER.sizeofcmds + 2) < pcVar6) {
                    uVar15 = ((ulong)pcVar6 & 0x7ffffffffffffff8) + 8;
                    if (((ulong)pcVar6 | 7) != 0x17) {
                      uVar15 = (ulong)pcVar6 | 7;
                    }
                    pppppppuVar5 = (undefined8 *******)(uVar15 + 1);
                    __Znwm();
                    uStack_78 = uVar15 + 1 | 0x8000000000000000;
                    pppppppuStack_88 = pppppppuVar5;
                    pcStack_80 = pcVar6;
LAB_00351cd4:
                    _memmove(pppppppuVar5,puVar17,pcVar6);
                  }
                  else {
                    uStack_78 = CONCAT17((char)pcVar6,(undefined7)uStack_78);
                    pppppppuVar5 = &pppppppuStack_88;
                    if (pcVar6 != (code *)0x0) goto LAB_00351cd4;
                  }
                  *(code *)((long)pppppppuVar5 + (long)pcVar6) = (code)0x0;
                  puVar13 = *(undefined8 **)(param_4 + 8);
                  if (*(char *)((long)puVar13 + 0x17) < '\0') {
                    __ZdlPv(*puVar13);
                  }
                  puVar13[2] = uStack_78;
                  puVar13[1] = pcStack_80;
                  *puVar13 = pppppppuStack_88;
                  uStack_78 = uStack_78 & 0xffffffffffffff;
                  pppppppuStack_88 =
                       (undefined8 *******)((ulong)pppppppuStack_88 & 0xffffffffffffff00);
                  if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
                    do {
                      lVar20 = *(long *)pcStack_68;
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
                      if (bVar3) {
                        *(long *)pcStack_68 = lVar20 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                    if (lVar20 + -1 == 0) {
                      (**(code **)(pcStack_68 + 8))();
                    }
                  }
                  plVar19 = *(long **)(param_4 + 8);
                  uVar15 = plVar19[1];
                  plVar1 = (long *)*plVar19;
                  if (-1 < (char)*(byte *)((long)plVar19 + 0x17)) {
                    uVar15 = (ulong)*(byte *)((long)plVar19 + 0x17);
                    plVar1 = plVar19;
                  }
                  *param_1 = (long)plVar1;
                  param_1[1] = uVar15;
                  uVar11 = 1;
                  param_4 = pcStack_68;
                }
                *(undefined1 *)(param_1 + 2) = uVar11;
                if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
                  return param_4;
                }
                ___stack_chk_fail();
LAB_00351d98:
                func_0x0033b318(&pppppppuStack_88);
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x351da4);
                (*pcVar6)();
              }
              ppcVar4 = &pcStack_80;
              ppcVar18 = &pcStack_80;
              lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
              if ((*(byte *)(*(long *)param_4 + 1) & 1) == 0) {
                uVar11 = 0;
                *(undefined1 *)param_1 = 0;
              }
              else {
                FUN_0034f290(&pcStack_68,*(undefined4 *)(*(long *)param_4 + 400));
                if (pcStack_68 == (code *)0x0) {
                  uVar15 = (ulong)bStack_60;
                  puVar17 = &uStack_5f;
                }
                else {
                  uVar15 = CONCAT71(uStack_5f,bStack_60);
                  puVar17 = puStack_58;
                  if (0x7ffffffffffffff7 < uVar15) goto LAB_00351b78;
                }
                if (uVar15 < 0x17) {
                  uStack_70 = CONCAT17((char)uVar15,(undefined7)uStack_70);
                  if (uVar15 != 0) goto LAB_00351ab4;
                }
                else {
                  uVar10 = (uVar15 & 0x7ffffffffffffff8) + 8;
                  if ((uVar15 | 7) != 0x17) {
                    uVar10 = uVar15 | 7;
                  }
                  ppcVar4 = (code **)(uVar10 + 1);
                  __Znwm();
                  uStack_70 = (ulong)(uVar10 + 1) | 0x8000000000000000;
                  pcStack_80 = (code *)ppcVar4;
                  uStack_78 = uVar15;
LAB_00351ab4:
                  _memmove(ppcVar4,puVar17,uVar15);
                  ppcVar18 = ppcVar4;
                }
                *(code *)((long)ppcVar18 + uVar15) = (code)0x0;
                puVar13 = *(undefined8 **)(param_4 + 8);
                if (*(char *)((long)puVar13 + 0x17) < '\0') {
                  __ZdlPv(*puVar13);
                }
                puVar13[2] = uStack_70;
                puVar13[1] = uStack_78;
                *puVar13 = pcStack_80;
                uStack_70 = uStack_70 & 0xffffffffffffff;
                pcStack_80 = (code *)((ulong)pcStack_80 & 0xffffffffffffff00);
                if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
                  do {
                    lVar20 = *(long *)pcStack_68;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
                    if (bVar3) {
                      *(long *)pcStack_68 = lVar20 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (lVar20 + -1 == 0) {
                    (**(code **)(pcStack_68 + 8))();
                  }
                }
                plVar19 = *(long **)(param_4 + 8);
                uVar15 = plVar19[1];
                plVar1 = (long *)*plVar19;
                if (-1 < (char)*(byte *)((long)plVar19 + 0x17)) {
                  uVar15 = (ulong)*(byte *)((long)plVar19 + 0x17);
                  plVar1 = plVar19;
                }
                *param_1 = (long)plVar1;
                param_1[1] = uVar15;
                uVar11 = 1;
                param_4 = pcStack_68;
              }
              *(undefined1 *)(param_1 + 2) = uVar11;
              if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
                return param_4;
              }
              ___stack_chk_fail();
LAB_00351b78:
              func_0x0033b318(&pcStack_80);
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x351b84);
              (*pcVar6)();
            }
            ppcVar4 = &pcStack_80;
            ppcVar18 = &pcStack_80;
            lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
            if (**(char **)param_4 < '\0') {
              FUN_0034f290(&pcStack_68,*(undefined4 *)(*(char **)param_4 + 0x194));
              if (pcStack_68 == (code *)0x0) {
                uVar15 = (ulong)bStack_60;
                puVar17 = &uStack_5f;
              }
              else {
                uVar15 = CONCAT71(uStack_5f,bStack_60);
                puVar17 = puStack_58;
                if (0x7ffffffffffffff7 < uVar15) goto LAB_00351940;
              }
              if (uVar15 < 0x17) {
                uStack_70 = CONCAT17((char)uVar15,(undefined7)uStack_70);
                if (uVar15 != 0) goto LAB_0035187c;
              }
              else {
                uVar10 = (uVar15 & 0x7ffffffffffffff8) + 8;
                if ((uVar15 | 7) != 0x17) {
                  uVar10 = uVar15 | 7;
                }
                ppcVar4 = (code **)(uVar10 + 1);
                __Znwm();
                uStack_70 = (ulong)(uVar10 + 1) | 0x8000000000000000;
                pcStack_80 = (code *)ppcVar4;
                uStack_78 = uVar15;
LAB_0035187c:
                _memmove(ppcVar4,puVar17,uVar15);
                ppcVar18 = ppcVar4;
              }
              *(code *)((long)ppcVar18 + uVar15) = (code)0x0;
              puVar13 = *(undefined8 **)(param_4 + 8);
              if (*(char *)((long)puVar13 + 0x17) < '\0') {
                __ZdlPv(*puVar13);
              }
              puVar13[2] = uStack_70;
              puVar13[1] = uStack_78;
              *puVar13 = pcStack_80;
              uStack_70 = uStack_70 & 0xffffffffffffff;
              pcStack_80 = (code *)((ulong)pcStack_80 & 0xffffffffffffff00);
              if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
                do {
                  lVar20 = *(long *)pcStack_68;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
                  if (bVar3) {
                    *(long *)pcStack_68 = lVar20 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (lVar20 + -1 == 0) {
                  (**(code **)(pcStack_68 + 8))();
                }
              }
              plVar19 = *(long **)(param_4 + 8);
              uVar15 = plVar19[1];
              plVar1 = (long *)*plVar19;
              if (-1 < (char)*(byte *)((long)plVar19 + 0x17)) {
                uVar15 = (ulong)*(byte *)((long)plVar19 + 0x17);
                plVar1 = plVar19;
              }
              *param_1 = (long)plVar1;
              param_1[1] = uVar15;
              uVar11 = 1;
              param_4 = pcStack_68;
            }
            else {
              uVar11 = 0;
              *(undefined1 *)param_1 = 0;
            }
            *(undefined1 *)(param_1 + 2) = uVar11;
            if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
              return param_4;
            }
            ___stack_chk_fail();
LAB_00351940:
            func_0x0033b318(&pcStack_80);
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x35194c);
            (*pcVar6)();
          }
          ppcVar4 = &pcStack_80;
          ppcVar18 = &pcStack_80;
          lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
          if ((**(byte **)param_4 >> 6 & 1) == 0) {
            uVar11 = 0;
            *(undefined1 *)param_1 = 0;
            pcVar6 = param_4;
          }
          else {
            pcVar6 = (code *)(ulong)(*(byte **)param_4)[0x198];
            FUN_0034f090(&pcStack_68,pcVar6);
            if (pcStack_68 == (code *)0x0) {
              uVar15 = (ulong)bStack_60;
              puVar17 = &uStack_5f;
            }
            else {
              uVar15 = CONCAT71(uStack_5f,bStack_60);
              puVar17 = puStack_58;
              if (0x7ffffffffffffff7 < uVar15) goto LAB_0035175c;
            }
            if (uVar15 < 0x17) {
              uStack_70 = CONCAT17((char)uVar15,(undefined7)uStack_70);
              if (uVar15 != 0) goto LAB_003516c8;
            }
            else {
              uVar10 = (uVar15 & 0x7ffffffffffffff8) + 8;
              if ((uVar15 | 7) != 0x17) {
                uVar10 = uVar15 | 7;
              }
              ppcVar4 = (code **)(uVar10 + 1);
              __Znwm();
              uStack_70 = (ulong)(uVar10 + 1) | 0x8000000000000000;
              pcStack_80 = (code *)ppcVar4;
              uStack_78 = uVar15;
LAB_003516c8:
              pcVar6 = (code *)ppcVar4;
              _memmove(ppcVar4,puVar17,uVar15);
              ppcVar18 = ppcVar4;
            }
            *(code *)((long)ppcVar18 + uVar15) = (code)0x0;
            puVar13 = *(undefined8 **)(param_4 + 8);
            if (*(char *)((long)puVar13 + 0x17) < '\0') {
              pcVar6 = (code *)*puVar13;
              __ZdlPv(pcVar6);
            }
            puVar13[2] = uStack_70;
            puVar13[1] = uStack_78;
            *puVar13 = pcStack_80;
            plVar19 = *(long **)(param_4 + 8);
            uVar15 = plVar19[1];
            plVar1 = (long *)*plVar19;
            if (-1 < (char)*(byte *)((long)plVar19 + 0x17)) {
              uVar15 = (ulong)*(byte *)((long)plVar19 + 0x17);
              plVar1 = plVar19;
            }
            *param_1 = (long)plVar1;
            param_1[1] = uVar15;
            uVar11 = 1;
          }
          *(undefined1 *)(param_1 + 2) = uVar11;
          if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
            return pcVar6;
          }
          ___stack_chk_fail();
LAB_0035175c:
          func_0x0033b318(&pcStack_80);
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x351768);
          (*pcVar6)();
        }
        ppcVar4 = &pcStack_80;
        ppcVar18 = &pcStack_80;
        lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
        if ((**(byte **)param_4 >> 5 & 1) == 0) {
          uVar11 = 0;
          *(undefined1 *)param_1 = 0;
          pcVar6 = param_4;
        }
        else {
          pcVar6 = (code *)(ulong)*(uint *)(*(byte **)param_4 + 0x19c);
          func_0x003fe828(&pcStack_68,pcVar6);
          if (pcStack_68 == (code *)0x0) {
            uVar15 = (ulong)bStack_60;
            puVar17 = &uStack_5f;
          }
          else {
            uVar15 = CONCAT71(uStack_5f,bStack_60);
            puVar17 = puStack_58;
            if (0x7ffffffffffffff7 < uVar15) goto LAB_003515cc;
          }
          if (uVar15 < 0x17) {
            uStack_70 = CONCAT17((char)uVar15,(undefined7)uStack_70);
            if (uVar15 != 0) goto LAB_00351538;
          }
          else {
            uVar10 = (uVar15 & 0x7ffffffffffffff8) + 8;
            if ((uVar15 | 7) != 0x17) {
              uVar10 = uVar15 | 7;
            }
            ppcVar4 = (code **)(uVar10 + 1);
            __Znwm();
            uStack_70 = (ulong)(uVar10 + 1) | 0x8000000000000000;
            pcStack_80 = (code *)ppcVar4;
            uStack_78 = uVar15;
LAB_00351538:
            pcVar6 = (code *)ppcVar4;
            _memmove(ppcVar4,puVar17,uVar15);
            ppcVar18 = ppcVar4;
          }
          *(code *)((long)ppcVar18 + uVar15) = (code)0x0;
          puVar13 = *(undefined8 **)(param_4 + 8);
          if (*(char *)((long)puVar13 + 0x17) < '\0') {
            pcVar6 = (code *)*puVar13;
            __ZdlPv(pcVar6);
          }
          puVar13[2] = uStack_70;
          puVar13[1] = uStack_78;
          *puVar13 = pcStack_80;
          plVar19 = *(long **)(param_4 + 8);
          uVar15 = plVar19[1];
          plVar1 = (long *)*plVar19;
          if (-1 < (char)*(byte *)((long)plVar19 + 0x17)) {
            uVar15 = (ulong)*(byte *)((long)plVar19 + 0x17);
            plVar1 = plVar19;
          }
          *param_1 = (long)plVar1;
          param_1[1] = uVar15;
          uVar11 = 1;
        }
        *(undefined1 *)(param_1 + 2) = uVar11;
        if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
          return pcVar6;
        }
        ___stack_chk_fail();
LAB_003515cc:
        func_0x0033b318(&pcStack_80);
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x3515d8);
        (*pcVar6)();
      }
      ppcVar4 = &pcStack_80;
      ppcVar18 = &pcStack_80;
      lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
      if ((**(byte **)param_4 >> 4 & 1) == 0) {
        uVar11 = 0;
        *(undefined1 *)param_1 = 0;
        pcVar6 = param_4;
      }
      else {
        pcVar6 = (code *)(ulong)*(uint *)(*(byte **)param_4 + 0x1a0);
        FUN_003febf4(&pcStack_68,pcVar6);
        if (pcStack_68 == (code *)0x0) {
          uVar15 = (ulong)bStack_60;
          puVar17 = &uStack_5f;
        }
        else {
          uVar15 = CONCAT71(uStack_5f,bStack_60);
          puVar17 = puStack_58;
          if (0x7ffffffffffffff7 < uVar15) goto LAB_00351420;
        }
        if (uVar15 < 0x17) {
          uStack_70 = CONCAT17((char)uVar15,(undefined7)uStack_70);
          if (uVar15 != 0) goto LAB_0035138c;
        }
        else {
          uVar10 = (uVar15 & 0x7ffffffffffffff8) + 8;
          if ((uVar15 | 7) != 0x17) {
            uVar10 = uVar15 | 7;
          }
          ppcVar4 = (code **)(uVar10 + 1);
          __Znwm();
          uStack_70 = (ulong)(uVar10 + 1) | 0x8000000000000000;
          pcStack_80 = (code *)ppcVar4;
          uStack_78 = uVar15;
LAB_0035138c:
          pcVar6 = (code *)ppcVar4;
          _memmove(ppcVar4,puVar17,uVar15);
          ppcVar18 = ppcVar4;
        }
        *(code *)((long)ppcVar18 + uVar15) = (code)0x0;
        puVar16 = *(ulong **)(param_4 + 8);
        if (*(char *)((long)puVar16 + 0x17) < '\0') {
          pcVar6 = (code *)*puVar16;
          __ZdlPv(pcVar6);
        }
        puVar16[2] = uStack_70;
        puVar16[1] = uStack_78;
        *puVar16 = (ulong)pcStack_80;
        plVar19 = *(long **)(param_4 + 8);
        uVar15 = plVar19[1];
        plVar1 = (long *)*plVar19;
        if (-1 < (char)*(byte *)((long)plVar19 + 0x17)) {
          uVar15 = (ulong)*(byte *)((long)plVar19 + 0x17);
          plVar1 = plVar19;
        }
        *param_1 = (long)plVar1;
        param_1[1] = uVar15;
        uVar11 = 1;
      }
      *(undefined1 *)(param_1 + 2) = uVar11;
      if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
        return pcVar6;
      }
      ___stack_chk_fail();
LAB_00351420:
      func_0x0033b318(&pcStack_80);
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x35142c);
      (*pcVar6)();
    }
    ppcVar4 = &pcStack_80;
    ppcVar18 = &pcStack_80;
    lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
    if ((**(byte **)param_4 >> 3 & 1) == 0) {
      uVar11 = 0;
      *(undefined1 *)param_1 = 0;
    }
    else {
      FUN_0034eb70(&pcStack_68,*(undefined4 *)(*(byte **)param_4 + 0x1a4));
      if (pcStack_68 == (code *)0x0) {
        uVar15 = (ulong)bStack_60;
        puVar17 = &uStack_5f;
      }
      else {
        uVar15 = CONCAT71(uStack_5f,bStack_60);
        puVar17 = puStack_58;
        if (0x7ffffffffffffff7 < uVar15) goto LAB_00351254;
      }
      if (uVar15 < 0x17) {
        uStack_70 = CONCAT17((char)uVar15,(undefined7)uStack_70);
        if (uVar15 != 0) goto LAB_00351190;
      }
      else {
        uVar10 = (uVar15 & 0x7ffffffffffffff8) + 8;
        if ((uVar15 | 7) != 0x17) {
          uVar10 = uVar15 | 7;
        }
        ppcVar4 = (code **)(uVar10 + 1);
        __Znwm();
        uStack_70 = (ulong)(uVar10 + 1) | 0x8000000000000000;
        pcStack_80 = (code *)ppcVar4;
        uStack_78 = uVar15;
LAB_00351190:
        _memmove(ppcVar4,puVar17,uVar15);
        ppcVar18 = ppcVar4;
      }
      *(code *)((long)ppcVar18 + uVar15) = (code)0x0;
      puVar13 = *(undefined8 **)(param_4 + 8);
      if (*(char *)((long)puVar13 + 0x17) < '\0') {
        __ZdlPv(*puVar13);
      }
      puVar13[2] = uStack_70;
      puVar13[1] = uStack_78;
      *puVar13 = pcStack_80;
      uStack_70 = uStack_70 & 0xffffffffffffff;
      pcStack_80 = (code *)((ulong)pcStack_80 & 0xffffffffffffff00);
      if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
        do {
          lVar20 = *(long *)pcStack_68;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
          if (bVar3) {
            *(long *)pcStack_68 = lVar20 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar20 + -1 == 0) {
          (**(code **)(pcStack_68 + 8))();
        }
      }
      plVar19 = *(long **)(param_4 + 8);
      uVar15 = plVar19[1];
      plVar1 = (long *)*plVar19;
      if (-1 < (char)*(byte *)((long)plVar19 + 0x17)) {
        uVar15 = (ulong)*(byte *)((long)plVar19 + 0x17);
        plVar1 = plVar19;
      }
      *param_1 = (long)plVar1;
      param_1[1] = uVar15;
      uVar11 = 1;
      param_4 = pcStack_68;
    }
    *(undefined1 *)(param_1 + 2) = uVar11;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
      return param_4;
    }
    ___stack_chk_fail();
LAB_00351254:
    func_0x0033b318(&pcStack_80);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x351260);
    (*pcVar6)();
  }
  ppcVar4 = &pcStack_80;
  ppcVar18 = &pcStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  if ((**(byte **)param_4 >> 2 & 1) == 0) {
    uVar11 = 0;
    *(undefined1 *)param_1 = 0;
    pcVar6 = param_4;
  }
  else {
    pcVar6 = (code *)(ulong)*(uint *)(*(byte **)param_4 + 0x1a8);
    FUN_003fed34(&pcStack_68,pcVar6);
    if (pcStack_68 == (code *)0x0) {
      uVar15 = (ulong)bStack_60;
      puVar17 = &uStack_5f;
    }
    else {
      uVar15 = CONCAT71(uStack_5f,bStack_60);
      puVar17 = puStack_58;
      if (0x7ffffffffffffff7 < uVar15) goto LAB_00351080;
    }
    if (uVar15 < 0x17) {
      uStack_70 = CONCAT17((char)uVar15,(undefined7)uStack_70);
      if (uVar15 != 0) goto LAB_00350fec;
    }
    else {
      uVar10 = (uVar15 & 0x7ffffffffffffff8) + 8;
      if ((uVar15 | 7) != 0x17) {
        uVar10 = uVar15 | 7;
      }
      ppcVar4 = (code **)(uVar10 + 1);
      __Znwm();
      uStack_70 = (ulong)(uVar10 + 1) | 0x8000000000000000;
      pcStack_80 = (code *)ppcVar4;
      uStack_78 = uVar15;
LAB_00350fec:
      pcVar6 = (code *)ppcVar4;
      _memmove(ppcVar4,puVar17,uVar15);
      ppcVar18 = ppcVar4;
    }
    *(code *)((long)ppcVar18 + uVar15) = (code)0x0;
    puVar16 = *(ulong **)(param_4 + 8);
    if (*(char *)((long)puVar16 + 0x17) < '\0') {
      pcVar6 = (code *)*puVar16;
      __ZdlPv(pcVar6);
    }
    puVar16[2] = uStack_70;
    puVar16[1] = uStack_78;
    *puVar16 = (ulong)pcStack_80;
    plVar19 = *(long **)(param_4 + 8);
    uVar15 = plVar19[1];
    plVar1 = (long *)*plVar19;
    if (-1 < (char)*(byte *)((long)plVar19 + 0x17)) {
      uVar15 = (ulong)*(byte *)((long)plVar19 + 0x17);
      plVar1 = plVar19;
    }
    *param_1 = (long)plVar1;
    param_1[1] = uVar15;
    uVar11 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar11;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return pcVar6;
  }
  ___stack_chk_fail();
LAB_00351080:
  func_0x0033b318(&pcStack_80);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x35108c);
  (*pcVar6)();
}



/* Entry: 00350f24; end: 0035108f;  */

void FUN_00350f24(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 **ppuVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined7 *puVar8;
  undefined1 **ppuVar9;
  undefined1 *puStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  ppuVar3 = &puStack_80;
  ppuVar9 = &puStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  if ((*(byte *)*param_2 >> 2 & 1) == 0) {
    uVar4 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    FUN_003fed34(&lStack_68,*(undefined4 *)((byte *)*param_2 + 0x1a8));
    if (lStack_68 == 0) {
      uVar6 = (ulong)bStack_60;
      puVar8 = &uStack_5f;
    }
    else {
      uVar6 = CONCAT71(uStack_5f,bStack_60);
      puVar8 = puStack_58;
      if (0x7ffffffffffffff7 < uVar6) goto LAB_00351080;
    }
    if (uVar6 < 0x17) {
      uStack_70 = CONCAT17((char)uVar6,(undefined7)uStack_70);
      if (uVar6 != 0) goto LAB_00350fec;
    }
    else {
      uVar1 = (uVar6 & 0x7ffffffffffffff8) + 8;
      if ((uVar6 | 7) != 0x17) {
        uVar1 = uVar6 | 7;
      }
      ppuVar3 = (undefined1 **)(uVar1 + 1);
      __Znwm();
      uStack_70 = (ulong)(uVar1 + 1) | 0x8000000000000000;
      puStack_80 = (undefined1 *)ppuVar3;
      uStack_78 = uVar6;
LAB_00350fec:
      _memmove(ppuVar3,puVar8,uVar6);
      ppuVar9 = ppuVar3;
    }
    *(undefined1 *)((long)ppuVar9 + uVar6) = 0;
    puVar7 = (undefined8 *)param_2[1];
    if (*(char *)((long)puVar7 + 0x17) < '\0') {
      __ZdlPv(*puVar7);
    }
    puVar7[2] = uStack_70;
    puVar7[1] = uStack_78;
    *puVar7 = puStack_80;
    puVar5 = (undefined8 *)param_2[1];
    uVar6 = puVar5[1];
    puVar7 = (undefined8 *)*puVar5;
    if (-1 < (char)*(byte *)((long)puVar5 + 0x17)) {
      uVar6 = (ulong)*(byte *)((long)puVar5 + 0x17);
      puVar7 = puVar5;
    }
    *param_1 = puVar7;
    param_1[1] = uVar6;
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar4;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_00351080:
  func_0x0033b318(&puStack_80);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x35108c);
  (*pcVar2)();
}



/* Entry: 00351090; end: 003510c7;  */

/* WARNING: Type propagation algorithm not settling */

code * FUN_00351090(long *param_1,code *param_2,code *param_3,code *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code **ppcVar4;
  undefined8 *******pppppppuVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  undefined1 uVar9;
  long *extraout_x8;
  long *extraout_x8_00;
  code *pcVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  code *unaff_x19;
  code *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined7 *puVar14;
  code *unaff_x23;
  code **ppcVar15;
  long *plVar16;
  undefined8 unaff_x24;
  long lVar17;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long *plVar18;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar19;
  undefined8 *******pppppppuStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  if ((param_3 != (code *)((long)&MACH_HEADER.cputype + 3)) ||
     (*(int *)param_2 != 0x6174733a || *(int *)(param_2 + 3) != 0x73757461)) {
    if ((param_3 != (code *)((long)&MACH_HEADER.cputype + 3)) ||
       (*(int *)param_2 != 0x6863733a || *(int *)(param_2 + 3) != 0x656d6568)) {
      if ((param_3 != (code *)&MACH_HEADER.filetype) ||
         (*(long *)param_2 != 0x2d746e65746e6f63 || *(int *)(param_2 + 8) != 0x65707974)) {
        if ((param_3 != (code *)((long)&MACH_HEADER.magic + 2)) || (*(short *)param_2 != 0x6574)) {
          if ((param_3 != (code *)((long)&MACH_HEADER.filetype + 1)) ||
             (*(long *)param_2 != 0x636e652d63707267 || *(long *)(param_2 + 5) != 0x676e69646f636e65
             )) {
            if ((param_3 != (code *)((long)&MACH_HEADER.reserved + 2)) ||
               (((*(long *)param_2 != 0x746e692d63707267 ||
                 *(long *)(param_2 + 8) != 0x6e652d6c616e7265) ||
                *(long *)(param_2 + 0x10) != 0x722d676e69646f63) ||
                *(long *)(param_2 + 0x16) != 0x747365757165722d)) {
              if ((param_3 != (code *)&MACH_HEADER.sizeofcmds) ||
                 ((*(long *)param_2 != 0x6363612d63707267 ||
                  *(long *)(param_2 + 8) != 0x6f636e652d747065) ||
                  *(int *)(param_2 + 0x10) != 0x676e6964)) {
                if ((param_3 != (code *)((long)&MACH_HEADER.cpusubtype + 3)) ||
                   (*(long *)param_2 != 0x6174732d63707267 ||
                    *(long *)(param_2 + 3) != 0x7375746174732d63)) {
                  if ((param_3 != (code *)&MACH_HEADER.filetype) ||
                     (*(long *)param_2 != 0x6d69742d63707267 || *(int *)(param_2 + 8) != 0x74756f65)
                     ) {
                    if ((param_3 != (code *)((long)&MACH_HEADER.flags + 2)) ||
                       (((*(long *)param_2 != 0x6572702d63707267 ||
                         *(long *)(param_2 + 8) != 0x70722d73756f6976) ||
                        *(long *)(param_2 + 0x10) != 0x706d657474612d63) ||
                        *(short *)(param_2 + 0x18) != 0x7374)) {
                      if ((param_3 != (code *)((long)&MACH_HEADER.sizeofcmds + 2)) ||
                         ((*(long *)param_2 != 0x7465722d63707267 ||
                          *(long *)(param_2 + 8) != 0x62687375702d7972) ||
                          *(long *)(param_2 + 0xe) != 0x736d2d6b63616268)) {
                        if ((param_3 == (code *)((long)&MACH_HEADER.cpusubtype + 2)) &&
                           (*(long *)param_2 == 0x6567612d72657375 &&
                            *(short *)(param_2 + 8) == 0x746e)) {
                          lVar17 = *(long *)param_4;
                          if ((*(byte *)(lVar17 + 1) >> 6 & 1) == 0) {
                            uVar9 = 0;
                            *(undefined1 *)param_1 = 0;
                          }
                          else {
                            if (*(long *)(lVar17 + 0x150) == 0) {
                              lVar19 = lVar17 + 0x159;
                              uVar13 = (ulong)*(byte *)(lVar17 + 0x158);
                            }
                            else {
                              uVar13 = *(ulong *)(lVar17 + 0x158);
                              lVar19 = *(long *)(lVar17 + 0x160);
                            }
                            *param_1 = lVar19;
                            param_1[1] = uVar13;
                            uVar9 = 1;
                          }
                          *(undefined1 *)(param_1 + 2) = uVar9;
                          return param_4;
                        }
                        if ((param_3 == (code *)&MACH_HEADER.filetype) &&
                           (*(long *)param_2 == 0x73656d2d63707267 &&
                            *(int *)(param_2 + 8) == 0x65676173)) {
                          lVar17 = *(long *)param_4;
                          if (*(char *)(lVar17 + 1) < '\0') {
                            if (*(long *)(lVar17 + 0x130) == 0) {
                              lVar19 = lVar17 + 0x139;
                              uVar13 = (ulong)*(byte *)(lVar17 + 0x138);
                            }
                            else {
                              uVar13 = *(ulong *)(lVar17 + 0x138);
                              lVar19 = *(long *)(lVar17 + 0x140);
                            }
                            *param_1 = lVar19;
                            param_1[1] = uVar13;
                            uVar9 = 1;
                          }
                          else {
                            uVar9 = 0;
                            *(undefined1 *)param_1 = 0;
                          }
                          *(undefined1 *)(param_1 + 2) = uVar9;
                          return param_4;
                        }
                        if ((param_3 == (code *)&MACH_HEADER.cputype) &&
                           (*(int *)param_2 == 0x74736f68)) {
                          lVar17 = *(long *)param_4;
                          if ((*(byte *)(lVar17 + 2) & 1) == 0) {
                            uVar9 = 0;
                            *(undefined1 *)param_1 = 0;
                          }
                          else {
                            if (*(long *)(lVar17 + 0x110) == 0) {
                              lVar19 = lVar17 + 0x119;
                              uVar13 = (ulong)*(byte *)(lVar17 + 0x118);
                            }
                            else {
                              uVar13 = *(ulong *)(lVar17 + 0x118);
                              lVar19 = *(long *)(lVar17 + 0x120);
                            }
                            *param_1 = lVar19;
                            param_1[1] = uVar13;
                            uVar9 = 1;
                          }
                          *(undefined1 *)(param_1 + 2) = uVar9;
                          return param_4;
                        }
                        if ((param_3 == (code *)((long)&MACH_HEADER.flags + 1)) &&
                           (((*(long *)param_2 == 0x746e696f70646e65 &&
                             *(long *)(param_2 + 8) == 0x656d2d64616f6c2d) &&
                            *(long *)(param_2 + 0x10) == 0x69622d7363697274) &&
                            param_2[0x18] == (code)0x6e)) {
                          lVar17 = *(long *)param_4;
                          if ((*(byte *)(lVar17 + 2) >> 1 & 1) == 0) {
                            uVar9 = 0;
                            *(undefined1 *)param_1 = 0;
                          }
                          else {
                            if (*(long *)(lVar17 + 0xf0) == 0) {
                              lVar19 = lVar17 + 0xf9;
                              uVar13 = (ulong)*(byte *)(lVar17 + 0xf8);
                            }
                            else {
                              uVar13 = *(ulong *)(lVar17 + 0xf8);
                              lVar19 = *(long *)(lVar17 + 0x100);
                            }
                            *param_1 = lVar19;
                            param_1[1] = uVar13;
                            uVar9 = 1;
                          }
                          *(undefined1 *)(param_1 + 2) = uVar9;
                          return param_4;
                        }
                        if ((param_3 == (code *)((long)&MACH_HEADER.sizeofcmds + 1)) &&
                           ((*(long *)param_2 == 0x7265732d63707267 &&
                            *(long *)(param_2 + 8) == 0x746174732d726576) &&
                            *(long *)(param_2 + 0xd) == 0x6e69622d73746174)) {
                          lVar17 = *(long *)param_4;
                          if ((*(byte *)(lVar17 + 2) >> 2 & 1) == 0) {
                            uVar9 = 0;
                            *(undefined1 *)param_1 = 0;
                          }
                          else {
                            if (*(long *)(lVar17 + 0xd0) == 0) {
                              lVar19 = lVar17 + 0xd9;
                              uVar13 = (ulong)*(byte *)(lVar17 + 0xd8);
                            }
                            else {
                              uVar13 = *(ulong *)(lVar17 + 0xd8);
                              lVar19 = *(long *)(lVar17 + 0xe0);
                            }
                            *param_1 = lVar19;
                            param_1[1] = uVar13;
                            uVar9 = 1;
                          }
                          *(undefined1 *)(param_1 + 2) = uVar9;
                          return param_4;
                        }
                        if ((param_3 == (code *)((long)&MACH_HEADER.filetype + 2)) &&
                           (*(long *)param_2 == 0x6172742d63707267 &&
                            *(long *)(param_2 + 6) == 0x6e69622d65636172)) {
                          lVar17 = *(long *)param_4;
                          if ((*(byte *)(lVar17 + 2) >> 3 & 1) == 0) {
                            uVar9 = 0;
                            *(undefined1 *)param_1 = 0;
                          }
                          else {
                            if (*(long *)(lVar17 + 0xb0) == 0) {
                              lVar19 = lVar17 + 0xb9;
                              uVar13 = (ulong)*(byte *)(lVar17 + 0xb8);
                            }
                            else {
                              uVar13 = *(ulong *)(lVar17 + 0xb8);
                              lVar19 = *(long *)(lVar17 + 0xc0);
                            }
                            *param_1 = lVar19;
                            param_1[1] = uVar13;
                            uVar9 = 1;
                          }
                          *(undefined1 *)(param_1 + 2) = uVar9;
                          return param_4;
                        }
                        if ((param_3 == (code *)((long)&MACH_HEADER.filetype + 1)) &&
                           (*(long *)param_2 == 0x6761742d63707267 &&
                            *(long *)(param_2 + 5) == 0x6e69622d73676174)) {
                          lVar17 = *(long *)param_4;
                          if ((*(byte *)(lVar17 + 2) >> 4 & 1) == 0) {
                            uVar9 = 0;
                            *(undefined1 *)param_1 = 0;
                          }
                          else {
                            if (*(long *)(lVar17 + 0x90) == 0) {
                              lVar19 = lVar17 + 0x99;
                              uVar13 = (ulong)*(byte *)(lVar17 + 0x98);
                            }
                            else {
                              uVar13 = *(ulong *)(lVar17 + 0x98);
                              lVar19 = *(long *)(lVar17 + 0xa0);
                            }
                            *param_1 = lVar19;
                            param_1[1] = uVar13;
                            uVar9 = 1;
                          }
                          *(undefined1 *)(param_1 + 2) = uVar9;
                          return param_4;
                        }
                        if ((param_3 == (code *)((long)&MACH_HEADER.ncmds + 3)) &&
                           ((*(long *)param_2 == 0x635f626c63707267 &&
                            *(long *)(param_2 + 8) == 0x74735f746e65696c) &&
                            *(long *)(param_2 + 0xb) == 0x73746174735f746e)) {
                          unaff_x29 = &stack0xfffffffffffffff0;
                          if ((*(byte *)(*(long *)param_4 + 2) >> 5 & 1) == 0) {
                            *(undefined1 *)param_1 = 0;
                            *(undefined1 *)(param_1 + 2) = 0;
                            return param_4;
                          }
                          unaff_x30 = FUN_00352a68;
                          pcVar6 = param_4;
                          _abort();
                          register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
                          param_2 = param_4;
                          param_4 = pcVar6;
                          param_1 = extraout_x8;
                        }
                        if ((param_3 == (code *)((long)&MACH_HEADER.cpusubtype + 3)) &&
                           (*(long *)param_2 == 0x2d74736f632d626c &&
                            *(long *)(param_2 + 3) == 0x6e69622d74736f63)) {
                          *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
                          *(code **)((long)register0x00000008 + -0x38) = unaff_x23;
                          *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
                          *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
                          *(code **)((long)register0x00000008 + -0x20) = unaff_x20;
                          *(code **)((long)register0x00000008 + -0x18) = unaff_x19;
                          *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
                          *(code **)((long)register0x00000008 + -8) = unaff_x30;
                          unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
                          *(undefined8 *)((long)register0x00000008 + -0x48) =
                               *(undefined8 *)PTR____stack_chk_guard_00999f88;
                          lVar17 = *(long *)param_4;
                          unaff_x19 = param_4;
                          pcVar6 = param_4;
                          if ((*(byte *)(lVar17 + 2) >> 6 & 1) == 0) {
                            uVar9 = 0;
                            *(undefined1 *)param_1 = 0;
                          }
                          else {
                            puVar12 = *(undefined8 **)(param_4 + 8);
                            if (*(char *)((long)puVar12 + 0x17) < '\0') {
                              *(undefined1 *)*puVar12 = 0;
                              puVar12[1] = 0;
                            }
                            else {
                              *(undefined1 *)puVar12 = 0;
                              *(undefined1 *)((long)puVar12 + 0x17) = 0;
                            }
                            uVar13 = *(ulong *)(lVar17 + 0x60);
                            unaff_x21 = (undefined8 *)(lVar17 + 0x68);
                            if ((uVar13 & 1) != 0) {
                              unaff_x21 = (undefined8 *)*unaff_x21;
                            }
                            if (1 < uVar13) {
                              unaff_x22 = unaff_x21 + (uVar13 >> 1) * 4;
                              unaff_x23 = (code *)((long)register0x00000008 + -0x5f);
                              do {
                                lVar17 = *(long *)(param_4 + 8);
                                if (*(char *)(lVar17 + 0x17) < '\0') {
                                  if (*(long *)(lVar17 + 8) != 0) goto LAB_00352b64;
                                }
                                else if (*(char *)(lVar17 + 0x17) != '\0') {
LAB_00352b64:
                                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                                            (lVar17,0x2c);
                                }
                                FUN_003fee84((undefined1 *)((long)register0x00000008 + -0x68),
                                             unaff_x21);
                                uVar13 = *(ulong *)((long)register0x00000008 + -0x60) & 0xff;
                                param_3 = unaff_x23;
                                if (*(long *)((long)register0x00000008 + -0x68) != 0) {
                                  uVar13 = *(ulong *)((long)register0x00000008 + -0x60);
                                  param_3 = *(code **)((long)register0x00000008 + -0x58);
                                }
                                pcVar6 = param_3 + uVar13;
                                FUN_00352c98(*(long *)(param_4 + 8));
                                unaff_x19 = *(code **)((long)register0x00000008 + -0x68);
                                if ((code *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
                                  do {
                                    lVar17 = *(long *)unaff_x19;
                                    cVar2 = '\x01';
                                    bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
                                    if (bVar3) {
                                      *(long *)unaff_x19 = lVar17 + -1;
                                      cVar2 = ExclusiveMonitorsStatus();
                                    }
                                  } while (cVar2 != '\0');
                                  if (lVar17 + -1 == 0) {
                                    (**(code **)(unaff_x19 + 8))();
                                  }
                                }
                                unaff_x21 = unaff_x21 + 4;
                              } while (unaff_x21 != unaff_x22);
                            }
                            plVar16 = *(long **)(param_4 + 8);
                            uVar13 = plVar16[1];
                            plVar1 = (long *)*plVar16;
                            if (-1 < (char)*(byte *)((long)plVar16 + 0x17)) {
                              uVar13 = (ulong)*(byte *)((long)plVar16 + 0x17);
                              plVar1 = plVar16;
                            }
                            *param_1 = (long)plVar1;
                            param_1[1] = uVar13;
                            uVar9 = 1;
                            unaff_x20 = param_4;
                          }
                          *(undefined1 *)(param_1 + 2) = uVar9;
                          if (*(long *)PTR____stack_chk_guard_00999f88 ==
                              *(long *)((long)register0x00000008 + -0x48)) {
                            return unaff_x19;
                          }
                          ___stack_chk_fail();
                          param_4 = pcVar6;
                          if ((int)param_3 != 0) {
                            func_0x0040cf10();
                            FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x68));
                            param_4 = pcVar6;
                          }
                          unaff_x30 = FUN_00352c58;
                          param_2 = unaff_x19;
                          __Unwind_Resume();
                          register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
                          param_1 = extraout_x8_00;
                        }
                        if ((param_3 == (code *)&MACH_HEADER.cpusubtype) &&
                           (*(long *)param_2 == 0x6e656b6f742d626c)) {
                          lVar17 = *(long *)param_4;
                          if (*(char *)(lVar17 + 2) < '\0') {
                            if (*(long *)(lVar17 + 0x40) == 0) {
                              lVar19 = lVar17 + 0x49;
                              uVar13 = (ulong)*(byte *)(lVar17 + 0x48);
                            }
                            else {
                              uVar13 = *(ulong *)(lVar17 + 0x48);
                              lVar19 = *(long *)(lVar17 + 0x50);
                            }
                            *param_1 = lVar19;
                            param_1[1] = uVar13;
                            uVar9 = 1;
                          }
                          else {
                            uVar9 = 0;
                            *(undefined1 *)param_1 = 0;
                          }
                          *(undefined1 *)(param_1 + 2) = uVar9;
                          return param_4;
                        }
                        lVar17 = *(long *)param_4;
                        plVar1 = *(long **)(param_4 + 8);
                        pcVar6 = (code *)(lVar17 + 0x1f0);
                        *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
                        *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
                        *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
                        *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
                        *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
                        *(code **)((long)register0x00000008 + -0x38) = unaff_x23;
                        *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
                        *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
                        *(code **)((long)register0x00000008 + -0x20) = unaff_x20;
                        *(code **)((long)register0x00000008 + -0x18) = unaff_x19;
                        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
                        *(code **)((long)register0x00000008 + -8) = unaff_x30;
                        *(undefined8 *)((long)register0x00000008 + -0x70) =
                             *(undefined8 *)PTR____stack_chk_guard_00999f88;
                        *(undefined1 *)param_1 = 0;
                        *(undefined1 *)(param_1 + 2) = 0;
                        plVar16 = *(long **)(lVar17 + 0x1f8);
                        pcVar7 = param_2;
                        pcVar8 = param_3;
                        if ((plVar16 != (long *)0x0) && (plVar16[1] != 0)) {
                          lVar17 = 0;
                          bVar3 = false;
                          plVar18 = (long *)*param_1;
                          uVar13 = param_1[1];
                          do {
                            if (plVar16[lVar17 * 8 + 2] == 0) {
                              pcVar6 = (code *)((long)plVar16 + lVar17 * 0x40 + 0x19);
                              pcVar10 = (code *)(ulong)*(byte *)(plVar16 + lVar17 * 8 + 3);
                            }
                            else {
                              pcVar10 = (code *)plVar16[lVar17 * 8 + 3];
                              pcVar6 = (code *)plVar16[lVar17 * 8 + 4];
                            }
                            if ((pcVar10 == param_3) &&
                               (pcVar7 = param_2, pcVar8 = param_3, _memcmp(pcVar6,param_2),
                               (int)pcVar6 == 0)) {
                              if (bVar3) {
                                *(long **)((long)register0x00000008 + -0xa0) = plVar18;
                                *(ulong *)((long)register0x00000008 + -0x98) = uVar13;
                                *(char **)((long)register0x00000008 + -0xd0) = ",";
                                *(undefined8 *)((long)register0x00000008 + -200) = 1;
                                if (plVar16[lVar17 * 8 + 6] == 0) {
                                  lVar19 = (long)plVar16 + lVar17 * 0x40 + 0x39;
                                  uVar13 = (ulong)*(byte *)(plVar16 + lVar17 * 8 + 7);
                                }
                                else {
                                  uVar13 = plVar16[lVar17 * 8 + 7];
                                  lVar19 = plVar16[lVar17 * 8 + 8];
                                }
                                *(long *)((long)register0x00000008 + -0x100) = lVar19;
                                *(ulong *)((long)register0x00000008 + -0xf8) = uVar13;
                                pcVar6 = (code *)((long)register0x00000008 + -0xa0);
                                pcVar7 = (code *)((long)register0x00000008 + -0xd0);
                                pcVar8 = (code *)((long)register0x00000008 + -0x100);
                                FUN_00575ddc((undefined1 *)((long)register0x00000008 + -0x118),
                                             pcVar6,pcVar7);
                                if (*(char *)((long)plVar1 + 0x17) < '\0') {
                                  pcVar6 = (code *)*plVar1;
                                  __ZdlPv();
                                }
                                uVar11 = *(ulong *)((long)register0x00000008 + -0x108);
                                plVar1[2] = uVar11;
                                lVar19 = *(long *)((long)register0x00000008 + -0x118);
                                plVar1[1] = *(long *)((long)register0x00000008 + -0x110);
                                *plVar1 = lVar19;
                                uVar13 = plVar1[1];
                                plVar18 = (long *)*plVar1;
                                if (-1 < (long)uVar11) {
                                  uVar13 = uVar11 >> 0x38;
                                  plVar18 = plVar1;
                                }
                                *param_1 = (long)plVar18;
                                param_1[1] = uVar13;
                              }
                              else {
                                if (plVar16[lVar17 * 8 + 6] == 0) {
                                  plVar18 = (long *)((long)plVar16 + lVar17 * 0x40 + 0x39);
                                  uVar13 = (ulong)*(byte *)(plVar16 + lVar17 * 8 + 7);
                                }
                                else {
                                  uVar13 = plVar16[lVar17 * 8 + 7];
                                  plVar18 = (long *)plVar16[lVar17 * 8 + 8];
                                }
                                *param_1 = (long)plVar18;
                                param_1[1] = uVar13;
                                bVar3 = true;
                                *(undefined1 *)(param_1 + 2) = 1;
                              }
                            }
                            lVar17 = lVar17 + 1;
                            do {
                              if (lVar17 != plVar16[1]) goto LAB_003fe6e4;
                              lVar17 = 0;
                              plVar16 = (long *)*plVar16;
                            } while (plVar16 != (long *)0x0);
                            lVar17 = 0;
LAB_003fe6e4:
                          } while ((plVar16 != (long *)0x0) || (lVar17 != 0));
                        }
                        if (*(long *)PTR____stack_chk_guard_00999f88 ==
                            *(long *)((long)register0x00000008 + -0x70)) {
                          return pcVar6;
                        }
                        ___stack_chk_fail();
                        __Unwind_Resume();
                        *(undefined1 **)((long)register0x00000008 + -0x130) =
                             (undefined1 *)((long)register0x00000008 + -0x10);
                        *(undefined8 *)((long)register0x00000008 + -0x128) = 0x3fe72c;
                        if (*(long *)pcVar6 == 0) {
                          pcVar10 = pcVar6 + 9;
                          uVar13 = (ulong)(byte)pcVar6[8];
                        }
                        else {
                          uVar13 = *(ulong *)(pcVar6 + 8);
                          pcVar10 = *(code **)(pcVar6 + 0x10);
                        }
                        if (uVar13 == 0x10) {
                          if (*(long *)pcVar10 == 0x746163696c707061 &&
                              *(long *)(pcVar10 + 8) == 0x637072672f6e6f69) {
                            return (code *)0x0;
                          }
                        }
                        else if (uVar13 < 0x11) {
                          if (uVar13 == 0) {
                            return (code *)((long)&MACH_HEADER.magic + 1);
                          }
                        }
                        else {
                          if ((*(long *)pcVar10 == 0x746163696c707061 &&
                              *(long *)(pcVar10 + 8) == 0x637072672f6e6f69) &&
                              pcVar10[0x10] == (code)0x3b) {
                            return (code *)0x0;
                          }
                          if ((*(long *)pcVar10 == 0x746163696c707061 &&
                              *(long *)(pcVar10 + 8) == 0x637072672f6e6f69) &&
                              pcVar10[0x10] == (code)0x2b) {
                            return (code *)0x0;
                          }
                        }
                        (*pcVar8)(pcVar7,"invalid value",0xd);
                        return (code *)((long)&MACH_HEADER.magic + 2);
                      }
                      ppcVar4 = &pcStack_80;
                      ppcVar15 = &pcStack_80;
                      lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
                      if ((*(byte *)(*(long *)param_4 + 1) >> 5 & 1) == 0) {
                        uVar9 = 0;
                        *(undefined1 *)param_1 = 0;
                      }
                      else {
                        FUN_0034eb70(&pcStack_68,*(undefined8 *)(*(long *)param_4 + 0x170));
                        if (pcStack_68 == (code *)0x0) {
                          uVar13 = (ulong)bStack_60;
                          puVar14 = &uStack_5f;
                        }
                        else {
                          uVar13 = CONCAT71(uStack_5f,bStack_60);
                          puVar14 = puStack_58;
                          if (0x7ffffffffffffff7 < uVar13) goto LAB_003525f4;
                        }
                        if (uVar13 < 0x17) {
                          uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
                          if (uVar13 != 0) goto LAB_00352530;
                        }
                        else {
                          uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
                          if ((uVar13 | 7) != 0x17) {
                            uVar11 = uVar13 | 7;
                          }
                          ppcVar4 = (code **)(uVar11 + 1);
                          __Znwm();
                          uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
                          pcStack_80 = (code *)ppcVar4;
                          uStack_78 = uVar13;
LAB_00352530:
                          _memmove(ppcVar4,puVar14,uVar13);
                          ppcVar15 = ppcVar4;
                        }
                        *(code *)((long)ppcVar15 + uVar13) = (code)0x0;
                        puVar12 = *(undefined8 **)(param_4 + 8);
                        if (*(char *)((long)puVar12 + 0x17) < '\0') {
                          __ZdlPv(*puVar12);
                        }
                        puVar12[2] = uStack_70;
                        puVar12[1] = uStack_78;
                        *puVar12 = pcStack_80;
                        uStack_70 = uStack_70 & 0xffffffffffffff;
                        pcStack_80 = (code *)((ulong)pcStack_80 & 0xffffffffffffff00);
                        if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
                          do {
                            lVar17 = *(long *)pcStack_68;
                            cVar2 = '\x01';
                            bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
                            if (bVar3) {
                              *(long *)pcStack_68 = lVar17 + -1;
                              cVar2 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar2 != '\0');
                          if (lVar17 + -1 == 0) {
                            (**(code **)(pcStack_68 + 8))();
                          }
                        }
                        plVar16 = *(long **)(param_4 + 8);
                        uVar13 = plVar16[1];
                        plVar1 = (long *)*plVar16;
                        if (-1 < (char)*(byte *)((long)plVar16 + 0x17)) {
                          uVar13 = (ulong)*(byte *)((long)plVar16 + 0x17);
                          plVar1 = plVar16;
                        }
                        *param_1 = (long)plVar1;
                        param_1[1] = uVar13;
                        uVar9 = 1;
                        param_4 = pcStack_68;
                      }
                      *(undefined1 *)(param_1 + 2) = uVar9;
                      if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
                        return param_4;
                      }
                      ___stack_chk_fail();
LAB_003525f4:
                      func_0x0033b318(&pcStack_80);
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x352600);
                      (*pcVar6)();
                    }
                    ppcVar4 = &pcStack_80;
                    ppcVar15 = &pcStack_80;
                    lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
                    if ((*(byte *)(*(long *)param_4 + 1) >> 4 & 1) == 0) {
                      uVar9 = 0;
                      *(undefined1 *)param_1 = 0;
                    }
                    else {
                      FUN_0034eb70(&pcStack_68,*(undefined4 *)(*(long *)param_4 + 0x178));
                      if (pcStack_68 == (code *)0x0) {
                        uVar13 = (ulong)bStack_60;
                        puVar14 = &uStack_5f;
                      }
                      else {
                        uVar13 = CONCAT71(uStack_5f,bStack_60);
                        puVar14 = puStack_58;
                        if (0x7ffffffffffffff7 < uVar13) goto LAB_003523d4;
                      }
                      if (uVar13 < 0x17) {
                        uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
                        if (uVar13 != 0) goto LAB_00352310;
                      }
                      else {
                        uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
                        if ((uVar13 | 7) != 0x17) {
                          uVar11 = uVar13 | 7;
                        }
                        ppcVar4 = (code **)(uVar11 + 1);
                        __Znwm();
                        uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
                        pcStack_80 = (code *)ppcVar4;
                        uStack_78 = uVar13;
LAB_00352310:
                        _memmove(ppcVar4,puVar14,uVar13);
                        ppcVar15 = ppcVar4;
                      }
                      *(code *)((long)ppcVar15 + uVar13) = (code)0x0;
                      puVar12 = *(undefined8 **)(param_4 + 8);
                      if (*(char *)((long)puVar12 + 0x17) < '\0') {
                        __ZdlPv(*puVar12);
                      }
                      puVar12[2] = uStack_70;
                      puVar12[1] = uStack_78;
                      *puVar12 = pcStack_80;
                      uStack_70 = uStack_70 & 0xffffffffffffff;
                      pcStack_80 = (code *)((ulong)pcStack_80 & 0xffffffffffffff00);
                      if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
                        do {
                          lVar17 = *(long *)pcStack_68;
                          cVar2 = '\x01';
                          bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
                          if (bVar3) {
                            *(long *)pcStack_68 = lVar17 + -1;
                            cVar2 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar2 != '\0');
                        if (lVar17 + -1 == 0) {
                          (**(code **)(pcStack_68 + 8))();
                        }
                      }
                      plVar16 = *(long **)(param_4 + 8);
                      uVar13 = plVar16[1];
                      plVar1 = (long *)*plVar16;
                      if (-1 < (char)*(byte *)((long)plVar16 + 0x17)) {
                        uVar13 = (ulong)*(byte *)((long)plVar16 + 0x17);
                        plVar1 = plVar16;
                      }
                      *param_1 = (long)plVar1;
                      param_1[1] = uVar13;
                      uVar9 = 1;
                      param_4 = pcStack_68;
                    }
                    *(undefined1 *)(param_1 + 2) = uVar9;
                    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
                      return param_4;
                    }
                    ___stack_chk_fail();
LAB_003523d4:
                    func_0x0033b318(&pcStack_80);
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x3523e0);
                    (*pcVar6)();
                  }
                  ppcVar4 = &pcStack_80;
                  ppcVar15 = &pcStack_80;
                  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
                  if ((*(byte *)(*(long *)param_4 + 1) >> 3 & 1) == 0) {
                    uVar9 = 0;
                    *(undefined1 *)param_1 = 0;
                  }
                  else {
                    func_0x003fe980(&pcStack_68,*(undefined8 *)(*(long *)param_4 + 0x180));
                    if (pcStack_68 == (code *)0x0) {
                      uVar13 = (ulong)bStack_60;
                      puVar14 = &uStack_5f;
                    }
                    else {
                      uVar13 = CONCAT71(uStack_5f,bStack_60);
                      puVar14 = puStack_58;
                      if (0x7ffffffffffffff7 < uVar13) goto LAB_003521a8;
                    }
                    if (uVar13 < 0x17) {
                      uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
                      if (uVar13 != 0) goto LAB_003520e4;
                    }
                    else {
                      uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
                      if ((uVar13 | 7) != 0x17) {
                        uVar11 = uVar13 | 7;
                      }
                      ppcVar4 = (code **)(uVar11 + 1);
                      __Znwm();
                      uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
                      pcStack_80 = (code *)ppcVar4;
                      uStack_78 = uVar13;
LAB_003520e4:
                      _memmove(ppcVar4,puVar14,uVar13);
                      ppcVar15 = ppcVar4;
                    }
                    *(code *)((long)ppcVar15 + uVar13) = (code)0x0;
                    puVar12 = *(undefined8 **)(param_4 + 8);
                    if (*(char *)((long)puVar12 + 0x17) < '\0') {
                      __ZdlPv(*puVar12);
                    }
                    puVar12[2] = uStack_70;
                    puVar12[1] = uStack_78;
                    *puVar12 = pcStack_80;
                    uStack_70 = uStack_70 & 0xffffffffffffff;
                    pcStack_80 = (code *)((ulong)pcStack_80 & 0xffffffffffffff00);
                    if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
                      do {
                        lVar17 = *(long *)pcStack_68;
                        cVar2 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
                        if (bVar3) {
                          *(long *)pcStack_68 = lVar17 + -1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                      if (lVar17 + -1 == 0) {
                        (**(code **)(pcStack_68 + 8))();
                      }
                    }
                    plVar16 = *(long **)(param_4 + 8);
                    uVar13 = plVar16[1];
                    plVar1 = (long *)*plVar16;
                    if (-1 < (char)*(byte *)((long)plVar16 + 0x17)) {
                      uVar13 = (ulong)*(byte *)((long)plVar16 + 0x17);
                      plVar1 = plVar16;
                    }
                    *param_1 = (long)plVar1;
                    param_1[1] = uVar13;
                    uVar9 = 1;
                    param_4 = pcStack_68;
                  }
                  *(undefined1 *)(param_1 + 2) = uVar9;
                  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
                    return param_4;
                  }
                  ___stack_chk_fail();
LAB_003521a8:
                  func_0x0033b318(&pcStack_80);
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x3521b4);
                  (*pcVar6)();
                }
                ppcVar4 = &pcStack_80;
                ppcVar15 = &pcStack_80;
                lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
                if ((*(byte *)(*(long *)param_4 + 1) >> 2 & 1) == 0) {
                  uVar9 = 0;
                  *(undefined1 *)param_1 = 0;
                }
                else {
                  FUN_0034eb70(&pcStack_68,(long)*(int *)(*(long *)param_4 + 0x188));
                  if (pcStack_68 == (code *)0x0) {
                    uVar13 = (ulong)bStack_60;
                    puVar14 = &uStack_5f;
                  }
                  else {
                    uVar13 = CONCAT71(uStack_5f,bStack_60);
                    puVar14 = puStack_58;
                    if (0x7ffffffffffffff7 < uVar13) goto LAB_00351fa4;
                  }
                  if (uVar13 < 0x17) {
                    uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
                    if (uVar13 != 0) goto LAB_00351ee0;
                  }
                  else {
                    uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
                    if ((uVar13 | 7) != 0x17) {
                      uVar11 = uVar13 | 7;
                    }
                    ppcVar4 = (code **)(uVar11 + 1);
                    __Znwm();
                    uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
                    pcStack_80 = (code *)ppcVar4;
                    uStack_78 = uVar13;
LAB_00351ee0:
                    _memmove(ppcVar4,puVar14,uVar13);
                    ppcVar15 = ppcVar4;
                  }
                  *(code *)((long)ppcVar15 + uVar13) = (code)0x0;
                  puVar12 = *(undefined8 **)(param_4 + 8);
                  if (*(char *)((long)puVar12 + 0x17) < '\0') {
                    __ZdlPv(*puVar12);
                  }
                  puVar12[2] = uStack_70;
                  puVar12[1] = uStack_78;
                  *puVar12 = pcStack_80;
                  uStack_70 = uStack_70 & 0xffffffffffffff;
                  pcStack_80 = (code *)((ulong)pcStack_80 & 0xffffffffffffff00);
                  if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
                    do {
                      lVar17 = *(long *)pcStack_68;
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
                      if (bVar3) {
                        *(long *)pcStack_68 = lVar17 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                    if (lVar17 + -1 == 0) {
                      (**(code **)(pcStack_68 + 8))();
                    }
                  }
                  plVar16 = *(long **)(param_4 + 8);
                  uVar13 = plVar16[1];
                  plVar1 = (long *)*plVar16;
                  if (-1 < (char)*(byte *)((long)plVar16 + 0x17)) {
                    uVar13 = (ulong)*(byte *)((long)plVar16 + 0x17);
                    plVar1 = plVar16;
                  }
                  *param_1 = (long)plVar1;
                  param_1[1] = uVar13;
                  uVar9 = 1;
                  param_4 = pcStack_68;
                }
                *(undefined1 *)(param_1 + 2) = uVar9;
                if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
                  return param_4;
                }
                ___stack_chk_fail();
LAB_00351fa4:
                func_0x0033b318(&pcStack_80);
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x351fb0);
                (*pcVar6)();
              }
              lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
              if ((*(byte *)(*(long *)param_4 + 1) >> 1 & 1) == 0) {
                uVar9 = 0;
                *(undefined1 *)param_1 = 0;
              }
              else {
                uStack_70 = CONCAT17(*(undefined1 *)(*(long *)param_4 + 0x18c),(undefined7)uStack_70
                                    );
                func_0x003b095c(&pcStack_68,(long)&uStack_70 + 7);
                if (pcStack_68 == (code *)0x0) {
                  pcVar6 = (code *)(ulong)bStack_60;
                  puVar14 = &uStack_5f;
                }
                else {
                  pcVar6 = (code *)CONCAT71(uStack_5f,bStack_60);
                  puVar14 = puStack_58;
                  if ((code *)0x7ffffffffffffff7 < pcVar6) goto LAB_00351d98;
                }
                if ((code *)((long)&MACH_HEADER.sizeofcmds + 2) < pcVar6) {
                  uVar13 = ((ulong)pcVar6 & 0x7ffffffffffffff8) + 8;
                  if (((ulong)pcVar6 | 7) != 0x17) {
                    uVar13 = (ulong)pcVar6 | 7;
                  }
                  pppppppuVar5 = (undefined8 *******)(uVar13 + 1);
                  __Znwm();
                  uStack_78 = uVar13 + 1 | 0x8000000000000000;
                  pppppppuStack_88 = pppppppuVar5;
                  pcStack_80 = pcVar6;
LAB_00351cd4:
                  _memmove(pppppppuVar5,puVar14,pcVar6);
                }
                else {
                  uStack_78 = CONCAT17((char)pcVar6,(undefined7)uStack_78);
                  pppppppuVar5 = &pppppppuStack_88;
                  if (pcVar6 != (code *)0x0) goto LAB_00351cd4;
                }
                *(code *)((long)pppppppuVar5 + (long)pcVar6) = (code)0x0;
                puVar12 = *(undefined8 **)(param_4 + 8);
                if (*(char *)((long)puVar12 + 0x17) < '\0') {
                  __ZdlPv(*puVar12);
                }
                puVar12[2] = uStack_78;
                puVar12[1] = pcStack_80;
                *puVar12 = pppppppuStack_88;
                uStack_78 = uStack_78 & 0xffffffffffffff;
                pppppppuStack_88 =
                     (undefined8 *******)((ulong)pppppppuStack_88 & 0xffffffffffffff00);
                if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
                  do {
                    lVar17 = *(long *)pcStack_68;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
                    if (bVar3) {
                      *(long *)pcStack_68 = lVar17 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (lVar17 + -1 == 0) {
                    (**(code **)(pcStack_68 + 8))();
                  }
                }
                plVar16 = *(long **)(param_4 + 8);
                uVar13 = plVar16[1];
                plVar1 = (long *)*plVar16;
                if (-1 < (char)*(byte *)((long)plVar16 + 0x17)) {
                  uVar13 = (ulong)*(byte *)((long)plVar16 + 0x17);
                  plVar1 = plVar16;
                }
                *param_1 = (long)plVar1;
                param_1[1] = uVar13;
                uVar9 = 1;
                param_4 = pcStack_68;
              }
              *(undefined1 *)(param_1 + 2) = uVar9;
              if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
                return param_4;
              }
              ___stack_chk_fail();
LAB_00351d98:
              func_0x0033b318(&pppppppuStack_88);
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x351da4);
              (*pcVar6)();
            }
            ppcVar4 = &pcStack_80;
            ppcVar15 = &pcStack_80;
            lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
            if ((*(byte *)(*(long *)param_4 + 1) & 1) == 0) {
              uVar9 = 0;
              *(undefined1 *)param_1 = 0;
            }
            else {
              FUN_0034f290(&pcStack_68,*(undefined4 *)(*(long *)param_4 + 400));
              if (pcStack_68 == (code *)0x0) {
                uVar13 = (ulong)bStack_60;
                puVar14 = &uStack_5f;
              }
              else {
                uVar13 = CONCAT71(uStack_5f,bStack_60);
                puVar14 = puStack_58;
                if (0x7ffffffffffffff7 < uVar13) goto LAB_00351b78;
              }
              if (uVar13 < 0x17) {
                uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
                if (uVar13 != 0) goto LAB_00351ab4;
              }
              else {
                uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
                if ((uVar13 | 7) != 0x17) {
                  uVar11 = uVar13 | 7;
                }
                ppcVar4 = (code **)(uVar11 + 1);
                __Znwm();
                uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
                pcStack_80 = (code *)ppcVar4;
                uStack_78 = uVar13;
LAB_00351ab4:
                _memmove(ppcVar4,puVar14,uVar13);
                ppcVar15 = ppcVar4;
              }
              *(code *)((long)ppcVar15 + uVar13) = (code)0x0;
              puVar12 = *(undefined8 **)(param_4 + 8);
              if (*(char *)((long)puVar12 + 0x17) < '\0') {
                __ZdlPv(*puVar12);
              }
              puVar12[2] = uStack_70;
              puVar12[1] = uStack_78;
              *puVar12 = pcStack_80;
              uStack_70 = uStack_70 & 0xffffffffffffff;
              pcStack_80 = (code *)((ulong)pcStack_80 & 0xffffffffffffff00);
              if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
                do {
                  lVar17 = *(long *)pcStack_68;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
                  if (bVar3) {
                    *(long *)pcStack_68 = lVar17 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (lVar17 + -1 == 0) {
                  (**(code **)(pcStack_68 + 8))();
                }
              }
              plVar16 = *(long **)(param_4 + 8);
              uVar13 = plVar16[1];
              plVar1 = (long *)*plVar16;
              if (-1 < (char)*(byte *)((long)plVar16 + 0x17)) {
                uVar13 = (ulong)*(byte *)((long)plVar16 + 0x17);
                plVar1 = plVar16;
              }
              *param_1 = (long)plVar1;
              param_1[1] = uVar13;
              uVar9 = 1;
              param_4 = pcStack_68;
            }
            *(undefined1 *)(param_1 + 2) = uVar9;
            if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
              return param_4;
            }
            ___stack_chk_fail();
LAB_00351b78:
            func_0x0033b318(&pcStack_80);
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x351b84);
            (*pcVar6)();
          }
          ppcVar4 = &pcStack_80;
          ppcVar15 = &pcStack_80;
          lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
          if (**(char **)param_4 < '\0') {
            FUN_0034f290(&pcStack_68,*(undefined4 *)(*(char **)param_4 + 0x194));
            if (pcStack_68 == (code *)0x0) {
              uVar13 = (ulong)bStack_60;
              puVar14 = &uStack_5f;
            }
            else {
              uVar13 = CONCAT71(uStack_5f,bStack_60);
              puVar14 = puStack_58;
              if (0x7ffffffffffffff7 < uVar13) goto LAB_00351940;
            }
            if (uVar13 < 0x17) {
              uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
              if (uVar13 != 0) goto LAB_0035187c;
            }
            else {
              uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
              if ((uVar13 | 7) != 0x17) {
                uVar11 = uVar13 | 7;
              }
              ppcVar4 = (code **)(uVar11 + 1);
              __Znwm();
              uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
              pcStack_80 = (code *)ppcVar4;
              uStack_78 = uVar13;
LAB_0035187c:
              _memmove(ppcVar4,puVar14,uVar13);
              ppcVar15 = ppcVar4;
            }
            *(code *)((long)ppcVar15 + uVar13) = (code)0x0;
            puVar12 = *(undefined8 **)(param_4 + 8);
            if (*(char *)((long)puVar12 + 0x17) < '\0') {
              __ZdlPv(*puVar12);
            }
            puVar12[2] = uStack_70;
            puVar12[1] = uStack_78;
            *puVar12 = pcStack_80;
            uStack_70 = uStack_70 & 0xffffffffffffff;
            pcStack_80 = (code *)((ulong)pcStack_80 & 0xffffffffffffff00);
            if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
              do {
                lVar17 = *(long *)pcStack_68;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
                if (bVar3) {
                  *(long *)pcStack_68 = lVar17 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar17 + -1 == 0) {
                (**(code **)(pcStack_68 + 8))();
              }
            }
            plVar16 = *(long **)(param_4 + 8);
            uVar13 = plVar16[1];
            plVar1 = (long *)*plVar16;
            if (-1 < (char)*(byte *)((long)plVar16 + 0x17)) {
              uVar13 = (ulong)*(byte *)((long)plVar16 + 0x17);
              plVar1 = plVar16;
            }
            *param_1 = (long)plVar1;
            param_1[1] = uVar13;
            uVar9 = 1;
            param_4 = pcStack_68;
          }
          else {
            uVar9 = 0;
            *(undefined1 *)param_1 = 0;
          }
          *(undefined1 *)(param_1 + 2) = uVar9;
          if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
            return param_4;
          }
          ___stack_chk_fail();
LAB_00351940:
          func_0x0033b318(&pcStack_80);
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x35194c);
          (*pcVar6)();
        }
        ppcVar4 = &pcStack_80;
        ppcVar15 = &pcStack_80;
        lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
        if ((**(byte **)param_4 >> 6 & 1) == 0) {
          uVar9 = 0;
          *(undefined1 *)param_1 = 0;
          pcVar6 = param_4;
        }
        else {
          pcVar6 = (code *)(ulong)(*(byte **)param_4)[0x198];
          FUN_0034f090(&pcStack_68,pcVar6);
          if (pcStack_68 == (code *)0x0) {
            uVar13 = (ulong)bStack_60;
            puVar14 = &uStack_5f;
          }
          else {
            uVar13 = CONCAT71(uStack_5f,bStack_60);
            puVar14 = puStack_58;
            if (0x7ffffffffffffff7 < uVar13) goto LAB_0035175c;
          }
          if (uVar13 < 0x17) {
            uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
            if (uVar13 != 0) goto LAB_003516c8;
          }
          else {
            uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
            if ((uVar13 | 7) != 0x17) {
              uVar11 = uVar13 | 7;
            }
            ppcVar4 = (code **)(uVar11 + 1);
            __Znwm();
            uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
            pcStack_80 = (code *)ppcVar4;
            uStack_78 = uVar13;
LAB_003516c8:
            pcVar6 = (code *)ppcVar4;
            _memmove(ppcVar4,puVar14,uVar13);
            ppcVar15 = ppcVar4;
          }
          *(code *)((long)ppcVar15 + uVar13) = (code)0x0;
          puVar12 = *(undefined8 **)(param_4 + 8);
          if (*(char *)((long)puVar12 + 0x17) < '\0') {
            pcVar6 = (code *)*puVar12;
            __ZdlPv(pcVar6);
          }
          puVar12[2] = uStack_70;
          puVar12[1] = uStack_78;
          *puVar12 = pcStack_80;
          plVar16 = *(long **)(param_4 + 8);
          uVar13 = plVar16[1];
          plVar1 = (long *)*plVar16;
          if (-1 < (char)*(byte *)((long)plVar16 + 0x17)) {
            uVar13 = (ulong)*(byte *)((long)plVar16 + 0x17);
            plVar1 = plVar16;
          }
          *param_1 = (long)plVar1;
          param_1[1] = uVar13;
          uVar9 = 1;
        }
        *(undefined1 *)(param_1 + 2) = uVar9;
        if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
          return pcVar6;
        }
        ___stack_chk_fail();
LAB_0035175c:
        func_0x0033b318(&pcStack_80);
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x351768);
        (*pcVar6)();
      }
      ppcVar4 = &pcStack_80;
      ppcVar15 = &pcStack_80;
      lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
      if ((**(byte **)param_4 >> 5 & 1) == 0) {
        uVar9 = 0;
        *(undefined1 *)param_1 = 0;
        pcVar6 = param_4;
      }
      else {
        pcVar6 = (code *)(ulong)*(uint *)(*(byte **)param_4 + 0x19c);
        func_0x003fe828(&pcStack_68,pcVar6);
        if (pcStack_68 == (code *)0x0) {
          uVar13 = (ulong)bStack_60;
          puVar14 = &uStack_5f;
        }
        else {
          uVar13 = CONCAT71(uStack_5f,bStack_60);
          puVar14 = puStack_58;
          if (0x7ffffffffffffff7 < uVar13) goto LAB_003515cc;
        }
        if (uVar13 < 0x17) {
          uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
          if (uVar13 != 0) goto LAB_00351538;
        }
        else {
          uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
          if ((uVar13 | 7) != 0x17) {
            uVar11 = uVar13 | 7;
          }
          ppcVar4 = (code **)(uVar11 + 1);
          __Znwm();
          uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
          pcStack_80 = (code *)ppcVar4;
          uStack_78 = uVar13;
LAB_00351538:
          pcVar6 = (code *)ppcVar4;
          _memmove(ppcVar4,puVar14,uVar13);
          ppcVar15 = ppcVar4;
        }
        *(code *)((long)ppcVar15 + uVar13) = (code)0x0;
        puVar12 = *(undefined8 **)(param_4 + 8);
        if (*(char *)((long)puVar12 + 0x17) < '\0') {
          pcVar6 = (code *)*puVar12;
          __ZdlPv(pcVar6);
        }
        puVar12[2] = uStack_70;
        puVar12[1] = uStack_78;
        *puVar12 = pcStack_80;
        plVar16 = *(long **)(param_4 + 8);
        uVar13 = plVar16[1];
        plVar1 = (long *)*plVar16;
        if (-1 < (char)*(byte *)((long)plVar16 + 0x17)) {
          uVar13 = (ulong)*(byte *)((long)plVar16 + 0x17);
          plVar1 = plVar16;
        }
        *param_1 = (long)plVar1;
        param_1[1] = uVar13;
        uVar9 = 1;
      }
      *(undefined1 *)(param_1 + 2) = uVar9;
      if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
        return pcVar6;
      }
      ___stack_chk_fail();
LAB_003515cc:
      func_0x0033b318(&pcStack_80);
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x3515d8);
      (*pcVar6)();
    }
    ppcVar4 = &pcStack_80;
    ppcVar15 = &pcStack_80;
    lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
    if ((**(byte **)param_4 >> 4 & 1) == 0) {
      uVar9 = 0;
      *(undefined1 *)param_1 = 0;
      pcVar6 = param_4;
    }
    else {
      pcVar6 = (code *)(ulong)*(uint *)(*(byte **)param_4 + 0x1a0);
      FUN_003febf4(&pcStack_68,pcVar6);
      if (pcStack_68 == (code *)0x0) {
        uVar13 = (ulong)bStack_60;
        puVar14 = &uStack_5f;
      }
      else {
        uVar13 = CONCAT71(uStack_5f,bStack_60);
        puVar14 = puStack_58;
        if (0x7ffffffffffffff7 < uVar13) goto LAB_00351420;
      }
      if (uVar13 < 0x17) {
        uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
        if (uVar13 != 0) goto LAB_0035138c;
      }
      else {
        uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
        if ((uVar13 | 7) != 0x17) {
          uVar11 = uVar13 | 7;
        }
        ppcVar4 = (code **)(uVar11 + 1);
        __Znwm();
        uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
        pcStack_80 = (code *)ppcVar4;
        uStack_78 = uVar13;
LAB_0035138c:
        pcVar6 = (code *)ppcVar4;
        _memmove(ppcVar4,puVar14,uVar13);
        ppcVar15 = ppcVar4;
      }
      *(code *)((long)ppcVar15 + uVar13) = (code)0x0;
      puVar12 = *(undefined8 **)(param_4 + 8);
      if (*(char *)((long)puVar12 + 0x17) < '\0') {
        pcVar6 = (code *)*puVar12;
        __ZdlPv(pcVar6);
      }
      puVar12[2] = uStack_70;
      puVar12[1] = uStack_78;
      *puVar12 = pcStack_80;
      plVar16 = *(long **)(param_4 + 8);
      uVar13 = plVar16[1];
      plVar1 = (long *)*plVar16;
      if (-1 < (char)*(byte *)((long)plVar16 + 0x17)) {
        uVar13 = (ulong)*(byte *)((long)plVar16 + 0x17);
        plVar1 = plVar16;
      }
      *param_1 = (long)plVar1;
      param_1[1] = uVar13;
      uVar9 = 1;
    }
    *(undefined1 *)(param_1 + 2) = uVar9;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
      return pcVar6;
    }
    ___stack_chk_fail();
LAB_00351420:
    func_0x0033b318(&pcStack_80);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x35142c);
    (*pcVar6)();
  }
  ppcVar4 = &pcStack_80;
  ppcVar15 = &pcStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  if ((**(byte **)param_4 >> 3 & 1) == 0) {
    uVar9 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    FUN_0034eb70(&pcStack_68,*(undefined4 *)(*(byte **)param_4 + 0x1a4));
    if (pcStack_68 == (code *)0x0) {
      uVar13 = (ulong)bStack_60;
      puVar14 = &uStack_5f;
    }
    else {
      uVar13 = CONCAT71(uStack_5f,bStack_60);
      puVar14 = puStack_58;
      if (0x7ffffffffffffff7 < uVar13) goto LAB_00351254;
    }
    if (uVar13 < 0x17) {
      uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
      if (uVar13 != 0) goto LAB_00351190;
    }
    else {
      uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
      if ((uVar13 | 7) != 0x17) {
        uVar11 = uVar13 | 7;
      }
      ppcVar4 = (code **)(uVar11 + 1);
      __Znwm();
      uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
      pcStack_80 = (code *)ppcVar4;
      uStack_78 = uVar13;
LAB_00351190:
      _memmove(ppcVar4,puVar14,uVar13);
      ppcVar15 = ppcVar4;
    }
    *(code *)((long)ppcVar15 + uVar13) = (code)0x0;
    puVar12 = *(undefined8 **)(param_4 + 8);
    if (*(char *)((long)puVar12 + 0x17) < '\0') {
      __ZdlPv(*puVar12);
    }
    puVar12[2] = uStack_70;
    puVar12[1] = uStack_78;
    *puVar12 = pcStack_80;
    uStack_70 = uStack_70 & 0xffffffffffffff;
    pcStack_80 = (code *)((ulong)pcStack_80 & 0xffffffffffffff00);
    if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
      do {
        lVar17 = *(long *)pcStack_68;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
        if (bVar3) {
          *(long *)pcStack_68 = lVar17 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar17 + -1 == 0) {
        (**(code **)(pcStack_68 + 8))();
      }
    }
    plVar16 = *(long **)(param_4 + 8);
    uVar13 = plVar16[1];
    plVar1 = (long *)*plVar16;
    if (-1 < (char)*(byte *)((long)plVar16 + 0x17)) {
      uVar13 = (ulong)*(byte *)((long)plVar16 + 0x17);
      plVar1 = plVar16;
    }
    *param_1 = (long)plVar1;
    param_1[1] = uVar13;
    uVar9 = 1;
    param_4 = pcStack_68;
  }
  *(undefined1 *)(param_1 + 2) = uVar9;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return param_4;
  }
  ___stack_chk_fail();
LAB_00351254:
  func_0x0033b318(&pcStack_80);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x351260);
  (*pcVar6)();
}



/* Entry: 003510c8; end: 0035128b;  */

void FUN_003510c8(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 **ppuVar5;
  undefined1 uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined7 *puVar11;
  undefined1 **ppuVar12;
  undefined1 *puStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  ppuVar5 = &puStack_80;
  ppuVar12 = &puStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  if ((*(byte *)*param_2 >> 3 & 1) == 0) {
    uVar6 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    FUN_0034eb70(&plStack_68,*(undefined4 *)((byte *)*param_2 + 0x1a4));
    if (plStack_68 == (long *)0x0) {
      uVar9 = (ulong)bStack_60;
      puVar11 = &uStack_5f;
    }
    else {
      uVar9 = CONCAT71(uStack_5f,bStack_60);
      puVar11 = puStack_58;
      if (0x7ffffffffffffff7 < uVar9) goto LAB_00351254;
    }
    if (uVar9 < 0x17) {
      uStack_70 = CONCAT17((char)uVar9,(undefined7)uStack_70);
      if (uVar9 != 0) goto LAB_00351190;
    }
    else {
      uVar1 = (uVar9 & 0x7ffffffffffffff8) + 8;
      if ((uVar9 | 7) != 0x17) {
        uVar1 = uVar9 | 7;
      }
      ppuVar5 = (undefined1 **)(uVar1 + 1);
      __Znwm();
      uStack_70 = (ulong)(uVar1 + 1) | 0x8000000000000000;
      puStack_80 = (undefined1 *)ppuVar5;
      uStack_78 = uVar9;
LAB_00351190:
      _memmove(ppuVar5,puVar11,uVar9);
      ppuVar12 = ppuVar5;
    }
    *(undefined1 *)((long)ppuVar12 + uVar9) = 0;
    puVar10 = (undefined8 *)param_2[1];
    if (*(char *)((long)puVar10 + 0x17) < '\0') {
      __ZdlPv(*puVar10);
    }
    puVar10[2] = uStack_70;
    puVar10[1] = uStack_78;
    *puVar10 = puStack_80;
    uStack_70 = uStack_70 & 0xffffffffffffff;
    puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_68) {
      do {
        lVar7 = *plStack_68;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
        if (bVar3) {
          *plStack_68 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_68[1])();
      }
    }
    puVar8 = (undefined8 *)param_2[1];
    uVar9 = puVar8[1];
    puVar10 = (undefined8 *)*puVar8;
    if (-1 < (char)*(byte *)((long)puVar8 + 0x17)) {
      uVar9 = (ulong)*(byte *)((long)puVar8 + 0x17);
      puVar10 = puVar8;
    }
    *param_1 = puVar10;
    param_1[1] = uVar9;
    uVar6 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar6;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_00351254:
  func_0x0033b318(&puStack_80);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x351260);
  (*pcVar4)();
}



/* Entry: 0035128c; end: 003512c3;  */

/* WARNING: Type propagation algorithm not settling */

code * FUN_0035128c(long *param_1,code *param_2,code *param_3,code *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code **ppcVar4;
  undefined8 *******pppppppuVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  undefined1 uVar9;
  long *extraout_x8;
  long *extraout_x8_00;
  code *pcVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  code *unaff_x19;
  code *unaff_x20;
  undefined8 *unaff_x21;
  ulong *puVar14;
  undefined8 *unaff_x22;
  undefined7 *puVar15;
  code *unaff_x23;
  code **ppcVar16;
  long *plVar17;
  undefined8 unaff_x24;
  long lVar18;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long *plVar19;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar20;
  undefined8 *******pppppppuStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  if ((param_3 != (code *)((long)&MACH_HEADER.cputype + 3)) ||
     (*(int *)param_2 != 0x6863733a || *(int *)(param_2 + 3) != 0x656d6568)) {
    if ((param_3 != (code *)&MACH_HEADER.filetype) ||
       (*(long *)param_2 != 0x2d746e65746e6f63 || *(int *)(param_2 + 8) != 0x65707974)) {
      if ((param_3 != (code *)((long)&MACH_HEADER.magic + 2)) || (*(short *)param_2 != 0x6574)) {
        if ((param_3 != (code *)((long)&MACH_HEADER.filetype + 1)) ||
           (*(long *)param_2 != 0x636e652d63707267 || *(long *)(param_2 + 5) != 0x676e69646f636e65))
        {
          if ((param_3 != (code *)((long)&MACH_HEADER.reserved + 2)) ||
             (((*(long *)param_2 != 0x746e692d63707267 ||
               *(long *)(param_2 + 8) != 0x6e652d6c616e7265) ||
              *(long *)(param_2 + 0x10) != 0x722d676e69646f63) ||
              *(long *)(param_2 + 0x16) != 0x747365757165722d)) {
            if ((param_3 != (code *)&MACH_HEADER.sizeofcmds) ||
               ((*(long *)param_2 != 0x6363612d63707267 ||
                *(long *)(param_2 + 8) != 0x6f636e652d747065) ||
                *(int *)(param_2 + 0x10) != 0x676e6964)) {
              if ((param_3 != (code *)((long)&MACH_HEADER.cpusubtype + 3)) ||
                 (*(long *)param_2 != 0x6174732d63707267 ||
                  *(long *)(param_2 + 3) != 0x7375746174732d63)) {
                if ((param_3 != (code *)&MACH_HEADER.filetype) ||
                   (*(long *)param_2 != 0x6d69742d63707267 || *(int *)(param_2 + 8) != 0x74756f65))
                {
                  if ((param_3 != (code *)((long)&MACH_HEADER.flags + 2)) ||
                     (((*(long *)param_2 != 0x6572702d63707267 ||
                       *(long *)(param_2 + 8) != 0x70722d73756f6976) ||
                      *(long *)(param_2 + 0x10) != 0x706d657474612d63) ||
                      *(short *)(param_2 + 0x18) != 0x7374)) {
                    if ((param_3 != (code *)((long)&MACH_HEADER.sizeofcmds + 2)) ||
                       ((*(long *)param_2 != 0x7465722d63707267 ||
                        *(long *)(param_2 + 8) != 0x62687375702d7972) ||
                        *(long *)(param_2 + 0xe) != 0x736d2d6b63616268)) {
                      if ((param_3 == (code *)((long)&MACH_HEADER.cpusubtype + 2)) &&
                         (*(long *)param_2 == 0x6567612d72657375 &&
                          *(short *)(param_2 + 8) == 0x746e)) {
                        lVar18 = *(long *)param_4;
                        if ((*(byte *)(lVar18 + 1) >> 6 & 1) == 0) {
                          uVar9 = 0;
                          *(undefined1 *)param_1 = 0;
                        }
                        else {
                          if (*(long *)(lVar18 + 0x150) == 0) {
                            lVar20 = lVar18 + 0x159;
                            uVar13 = (ulong)*(byte *)(lVar18 + 0x158);
                          }
                          else {
                            uVar13 = *(ulong *)(lVar18 + 0x158);
                            lVar20 = *(long *)(lVar18 + 0x160);
                          }
                          *param_1 = lVar20;
                          param_1[1] = uVar13;
                          uVar9 = 1;
                        }
                        *(undefined1 *)(param_1 + 2) = uVar9;
                        return param_4;
                      }
                      if ((param_3 == (code *)&MACH_HEADER.filetype) &&
                         (*(long *)param_2 == 0x73656d2d63707267 &&
                          *(int *)(param_2 + 8) == 0x65676173)) {
                        lVar18 = *(long *)param_4;
                        if (*(char *)(lVar18 + 1) < '\0') {
                          if (*(long *)(lVar18 + 0x130) == 0) {
                            lVar20 = lVar18 + 0x139;
                            uVar13 = (ulong)*(byte *)(lVar18 + 0x138);
                          }
                          else {
                            uVar13 = *(ulong *)(lVar18 + 0x138);
                            lVar20 = *(long *)(lVar18 + 0x140);
                          }
                          *param_1 = lVar20;
                          param_1[1] = uVar13;
                          uVar9 = 1;
                        }
                        else {
                          uVar9 = 0;
                          *(undefined1 *)param_1 = 0;
                        }
                        *(undefined1 *)(param_1 + 2) = uVar9;
                        return param_4;
                      }
                      if ((param_3 == (code *)&MACH_HEADER.cputype) &&
                         (*(int *)param_2 == 0x74736f68)) {
                        lVar18 = *(long *)param_4;
                        if ((*(byte *)(lVar18 + 2) & 1) == 0) {
                          uVar9 = 0;
                          *(undefined1 *)param_1 = 0;
                        }
                        else {
                          if (*(long *)(lVar18 + 0x110) == 0) {
                            lVar20 = lVar18 + 0x119;
                            uVar13 = (ulong)*(byte *)(lVar18 + 0x118);
                          }
                          else {
                            uVar13 = *(ulong *)(lVar18 + 0x118);
                            lVar20 = *(long *)(lVar18 + 0x120);
                          }
                          *param_1 = lVar20;
                          param_1[1] = uVar13;
                          uVar9 = 1;
                        }
                        *(undefined1 *)(param_1 + 2) = uVar9;
                        return param_4;
                      }
                      if ((param_3 == (code *)((long)&MACH_HEADER.flags + 1)) &&
                         (((*(long *)param_2 == 0x746e696f70646e65 &&
                           *(long *)(param_2 + 8) == 0x656d2d64616f6c2d) &&
                          *(long *)(param_2 + 0x10) == 0x69622d7363697274) &&
                          param_2[0x18] == (code)0x6e)) {
                        lVar18 = *(long *)param_4;
                        if ((*(byte *)(lVar18 + 2) >> 1 & 1) == 0) {
                          uVar9 = 0;
                          *(undefined1 *)param_1 = 0;
                        }
                        else {
                          if (*(long *)(lVar18 + 0xf0) == 0) {
                            lVar20 = lVar18 + 0xf9;
                            uVar13 = (ulong)*(byte *)(lVar18 + 0xf8);
                          }
                          else {
                            uVar13 = *(ulong *)(lVar18 + 0xf8);
                            lVar20 = *(long *)(lVar18 + 0x100);
                          }
                          *param_1 = lVar20;
                          param_1[1] = uVar13;
                          uVar9 = 1;
                        }
                        *(undefined1 *)(param_1 + 2) = uVar9;
                        return param_4;
                      }
                      if ((param_3 == (code *)((long)&MACH_HEADER.sizeofcmds + 1)) &&
                         ((*(long *)param_2 == 0x7265732d63707267 &&
                          *(long *)(param_2 + 8) == 0x746174732d726576) &&
                          *(long *)(param_2 + 0xd) == 0x6e69622d73746174)) {
                        lVar18 = *(long *)param_4;
                        if ((*(byte *)(lVar18 + 2) >> 2 & 1) == 0) {
                          uVar9 = 0;
                          *(undefined1 *)param_1 = 0;
                        }
                        else {
                          if (*(long *)(lVar18 + 0xd0) == 0) {
                            lVar20 = lVar18 + 0xd9;
                            uVar13 = (ulong)*(byte *)(lVar18 + 0xd8);
                          }
                          else {
                            uVar13 = *(ulong *)(lVar18 + 0xd8);
                            lVar20 = *(long *)(lVar18 + 0xe0);
                          }
                          *param_1 = lVar20;
                          param_1[1] = uVar13;
                          uVar9 = 1;
                        }
                        *(undefined1 *)(param_1 + 2) = uVar9;
                        return param_4;
                      }
                      if ((param_3 == (code *)((long)&MACH_HEADER.filetype + 2)) &&
                         (*(long *)param_2 == 0x6172742d63707267 &&
                          *(long *)(param_2 + 6) == 0x6e69622d65636172)) {
                        lVar18 = *(long *)param_4;
                        if ((*(byte *)(lVar18 + 2) >> 3 & 1) == 0) {
                          uVar9 = 0;
                          *(undefined1 *)param_1 = 0;
                        }
                        else {
                          if (*(long *)(lVar18 + 0xb0) == 0) {
                            lVar20 = lVar18 + 0xb9;
                            uVar13 = (ulong)*(byte *)(lVar18 + 0xb8);
                          }
                          else {
                            uVar13 = *(ulong *)(lVar18 + 0xb8);
                            lVar20 = *(long *)(lVar18 + 0xc0);
                          }
                          *param_1 = lVar20;
                          param_1[1] = uVar13;
                          uVar9 = 1;
                        }
                        *(undefined1 *)(param_1 + 2) = uVar9;
                        return param_4;
                      }
                      if ((param_3 == (code *)((long)&MACH_HEADER.filetype + 1)) &&
                         (*(long *)param_2 == 0x6761742d63707267 &&
                          *(long *)(param_2 + 5) == 0x6e69622d73676174)) {
                        lVar18 = *(long *)param_4;
                        if ((*(byte *)(lVar18 + 2) >> 4 & 1) == 0) {
                          uVar9 = 0;
                          *(undefined1 *)param_1 = 0;
                        }
                        else {
                          if (*(long *)(lVar18 + 0x90) == 0) {
                            lVar20 = lVar18 + 0x99;
                            uVar13 = (ulong)*(byte *)(lVar18 + 0x98);
                          }
                          else {
                            uVar13 = *(ulong *)(lVar18 + 0x98);
                            lVar20 = *(long *)(lVar18 + 0xa0);
                          }
                          *param_1 = lVar20;
                          param_1[1] = uVar13;
                          uVar9 = 1;
                        }
                        *(undefined1 *)(param_1 + 2) = uVar9;
                        return param_4;
                      }
                      if ((param_3 == (code *)((long)&MACH_HEADER.ncmds + 3)) &&
                         ((*(long *)param_2 == 0x635f626c63707267 &&
                          *(long *)(param_2 + 8) == 0x74735f746e65696c) &&
                          *(long *)(param_2 + 0xb) == 0x73746174735f746e)) {
                        unaff_x29 = &stack0xfffffffffffffff0;
                        if ((*(byte *)(*(long *)param_4 + 2) >> 5 & 1) == 0) {
                          *(undefined1 *)param_1 = 0;
                          *(undefined1 *)(param_1 + 2) = 0;
                          return param_4;
                        }
                        unaff_x30 = FUN_00352a68;
                        pcVar6 = param_4;
                        _abort();
                        register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
                        param_2 = param_4;
                        param_4 = pcVar6;
                        param_1 = extraout_x8;
                      }
                      if ((param_3 == (code *)((long)&MACH_HEADER.cpusubtype + 3)) &&
                         (*(long *)param_2 == 0x2d74736f632d626c &&
                          *(long *)(param_2 + 3) == 0x6e69622d74736f63)) {
                        *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
                        *(code **)((long)register0x00000008 + -0x38) = unaff_x23;
                        *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
                        *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
                        *(code **)((long)register0x00000008 + -0x20) = unaff_x20;
                        *(code **)((long)register0x00000008 + -0x18) = unaff_x19;
                        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
                        *(code **)((long)register0x00000008 + -8) = unaff_x30;
                        unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
                        *(undefined8 *)((long)register0x00000008 + -0x48) =
                             *(undefined8 *)PTR____stack_chk_guard_00999f88;
                        lVar18 = *(long *)param_4;
                        unaff_x19 = param_4;
                        pcVar6 = param_4;
                        if ((*(byte *)(lVar18 + 2) >> 6 & 1) == 0) {
                          uVar9 = 0;
                          *(undefined1 *)param_1 = 0;
                        }
                        else {
                          puVar12 = *(undefined8 **)(param_4 + 8);
                          if (*(char *)((long)puVar12 + 0x17) < '\0') {
                            *(undefined1 *)*puVar12 = 0;
                            puVar12[1] = 0;
                          }
                          else {
                            *(undefined1 *)puVar12 = 0;
                            *(undefined1 *)((long)puVar12 + 0x17) = 0;
                          }
                          uVar13 = *(ulong *)(lVar18 + 0x60);
                          unaff_x21 = (undefined8 *)(lVar18 + 0x68);
                          if ((uVar13 & 1) != 0) {
                            unaff_x21 = (undefined8 *)*unaff_x21;
                          }
                          if (1 < uVar13) {
                            unaff_x22 = unaff_x21 + (uVar13 >> 1) * 4;
                            unaff_x23 = (code *)((long)register0x00000008 + -0x5f);
                            do {
                              lVar18 = *(long *)(param_4 + 8);
                              if (*(char *)(lVar18 + 0x17) < '\0') {
                                if (*(long *)(lVar18 + 8) != 0) goto LAB_00352b64;
                              }
                              else if (*(char *)(lVar18 + 0x17) != '\0') {
LAB_00352b64:
                                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                                          (lVar18,0x2c);
                              }
                              FUN_003fee84((undefined1 *)((long)register0x00000008 + -0x68),
                                           unaff_x21);
                              uVar13 = *(ulong *)((long)register0x00000008 + -0x60) & 0xff;
                              param_3 = unaff_x23;
                              if (*(long *)((long)register0x00000008 + -0x68) != 0) {
                                uVar13 = *(ulong *)((long)register0x00000008 + -0x60);
                                param_3 = *(code **)((long)register0x00000008 + -0x58);
                              }
                              pcVar6 = param_3 + uVar13;
                              FUN_00352c98(*(long *)(param_4 + 8));
                              unaff_x19 = *(code **)((long)register0x00000008 + -0x68);
                              if ((code *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
                                do {
                                  lVar18 = *(long *)unaff_x19;
                                  cVar2 = '\x01';
                                  bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
                                  if (bVar3) {
                                    *(long *)unaff_x19 = lVar18 + -1;
                                    cVar2 = ExclusiveMonitorsStatus();
                                  }
                                } while (cVar2 != '\0');
                                if (lVar18 + -1 == 0) {
                                  (**(code **)(unaff_x19 + 8))();
                                }
                              }
                              unaff_x21 = unaff_x21 + 4;
                            } while (unaff_x21 != unaff_x22);
                          }
                          plVar17 = *(long **)(param_4 + 8);
                          uVar13 = plVar17[1];
                          plVar1 = (long *)*plVar17;
                          if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
                            uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
                            plVar1 = plVar17;
                          }
                          *param_1 = (long)plVar1;
                          param_1[1] = uVar13;
                          uVar9 = 1;
                          unaff_x20 = param_4;
                        }
                        *(undefined1 *)(param_1 + 2) = uVar9;
                        if (*(long *)PTR____stack_chk_guard_00999f88 ==
                            *(long *)((long)register0x00000008 + -0x48)) {
                          return unaff_x19;
                        }
                        ___stack_chk_fail();
                        param_4 = pcVar6;
                        if ((int)param_3 != 0) {
                          func_0x0040cf10();
                          FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x68));
                          param_4 = pcVar6;
                        }
                        unaff_x30 = FUN_00352c58;
                        param_2 = unaff_x19;
                        __Unwind_Resume();
                        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
                        param_1 = extraout_x8_00;
                      }
                      if ((param_3 == (code *)&MACH_HEADER.cpusubtype) &&
                         (*(long *)param_2 == 0x6e656b6f742d626c)) {
                        lVar18 = *(long *)param_4;
                        if (*(char *)(lVar18 + 2) < '\0') {
                          if (*(long *)(lVar18 + 0x40) == 0) {
                            lVar20 = lVar18 + 0x49;
                            uVar13 = (ulong)*(byte *)(lVar18 + 0x48);
                          }
                          else {
                            uVar13 = *(ulong *)(lVar18 + 0x48);
                            lVar20 = *(long *)(lVar18 + 0x50);
                          }
                          *param_1 = lVar20;
                          param_1[1] = uVar13;
                          uVar9 = 1;
                        }
                        else {
                          uVar9 = 0;
                          *(undefined1 *)param_1 = 0;
                        }
                        *(undefined1 *)(param_1 + 2) = uVar9;
                        return param_4;
                      }
                      lVar18 = *(long *)param_4;
                      plVar1 = *(long **)(param_4 + 8);
                      pcVar6 = (code *)(lVar18 + 0x1f0);
                      *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
                      *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
                      *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
                      *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
                      *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
                      *(code **)((long)register0x00000008 + -0x38) = unaff_x23;
                      *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
                      *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
                      *(code **)((long)register0x00000008 + -0x20) = unaff_x20;
                      *(code **)((long)register0x00000008 + -0x18) = unaff_x19;
                      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
                      *(code **)((long)register0x00000008 + -8) = unaff_x30;
                      *(undefined8 *)((long)register0x00000008 + -0x70) =
                           *(undefined8 *)PTR____stack_chk_guard_00999f88;
                      *(undefined1 *)param_1 = 0;
                      *(undefined1 *)(param_1 + 2) = 0;
                      plVar17 = *(long **)(lVar18 + 0x1f8);
                      pcVar7 = param_2;
                      pcVar8 = param_3;
                      if ((plVar17 != (long *)0x0) && (plVar17[1] != 0)) {
                        lVar18 = 0;
                        bVar3 = false;
                        plVar19 = (long *)*param_1;
                        uVar13 = param_1[1];
                        do {
                          if (plVar17[lVar18 * 8 + 2] == 0) {
                            pcVar6 = (code *)((long)plVar17 + lVar18 * 0x40 + 0x19);
                            pcVar10 = (code *)(ulong)*(byte *)(plVar17 + lVar18 * 8 + 3);
                          }
                          else {
                            pcVar10 = (code *)plVar17[lVar18 * 8 + 3];
                            pcVar6 = (code *)plVar17[lVar18 * 8 + 4];
                          }
                          if ((pcVar10 == param_3) &&
                             (pcVar7 = param_2, pcVar8 = param_3, _memcmp(pcVar6,param_2),
                             (int)pcVar6 == 0)) {
                            if (bVar3) {
                              *(long **)((long)register0x00000008 + -0xa0) = plVar19;
                              *(ulong *)((long)register0x00000008 + -0x98) = uVar13;
                              *(char **)((long)register0x00000008 + -0xd0) = ",";
                              *(undefined8 *)((long)register0x00000008 + -200) = 1;
                              if (plVar17[lVar18 * 8 + 6] == 0) {
                                lVar20 = (long)plVar17 + lVar18 * 0x40 + 0x39;
                                uVar13 = (ulong)*(byte *)(plVar17 + lVar18 * 8 + 7);
                              }
                              else {
                                uVar13 = plVar17[lVar18 * 8 + 7];
                                lVar20 = plVar17[lVar18 * 8 + 8];
                              }
                              *(long *)((long)register0x00000008 + -0x100) = lVar20;
                              *(ulong *)((long)register0x00000008 + -0xf8) = uVar13;
                              pcVar6 = (code *)((long)register0x00000008 + -0xa0);
                              pcVar7 = (code *)((long)register0x00000008 + -0xd0);
                              pcVar8 = (code *)((long)register0x00000008 + -0x100);
                              FUN_00575ddc((undefined1 *)((long)register0x00000008 + -0x118),pcVar6,
                                           pcVar7);
                              if (*(char *)((long)plVar1 + 0x17) < '\0') {
                                pcVar6 = (code *)*plVar1;
                                __ZdlPv();
                              }
                              uVar11 = *(ulong *)((long)register0x00000008 + -0x108);
                              plVar1[2] = uVar11;
                              lVar20 = *(long *)((long)register0x00000008 + -0x118);
                              plVar1[1] = *(long *)((long)register0x00000008 + -0x110);
                              *plVar1 = lVar20;
                              uVar13 = plVar1[1];
                              plVar19 = (long *)*plVar1;
                              if (-1 < (long)uVar11) {
                                uVar13 = uVar11 >> 0x38;
                                plVar19 = plVar1;
                              }
                              *param_1 = (long)plVar19;
                              param_1[1] = uVar13;
                            }
                            else {
                              if (plVar17[lVar18 * 8 + 6] == 0) {
                                plVar19 = (long *)((long)plVar17 + lVar18 * 0x40 + 0x39);
                                uVar13 = (ulong)*(byte *)(plVar17 + lVar18 * 8 + 7);
                              }
                              else {
                                uVar13 = plVar17[lVar18 * 8 + 7];
                                plVar19 = (long *)plVar17[lVar18 * 8 + 8];
                              }
                              *param_1 = (long)plVar19;
                              param_1[1] = uVar13;
                              bVar3 = true;
                              *(undefined1 *)(param_1 + 2) = 1;
                            }
                          }
                          lVar18 = lVar18 + 1;
                          do {
                            if (lVar18 != plVar17[1]) goto LAB_003fe6e4;
                            lVar18 = 0;
                            plVar17 = (long *)*plVar17;
                          } while (plVar17 != (long *)0x0);
                          lVar18 = 0;
LAB_003fe6e4:
                        } while ((plVar17 != (long *)0x0) || (lVar18 != 0));
                      }
                      if (*(long *)PTR____stack_chk_guard_00999f88 ==
                          *(long *)((long)register0x00000008 + -0x70)) {
                        return pcVar6;
                      }
                      ___stack_chk_fail();
                      __Unwind_Resume();
                      *(undefined1 **)((long)register0x00000008 + -0x130) =
                           (undefined1 *)((long)register0x00000008 + -0x10);
                      *(undefined8 *)((long)register0x00000008 + -0x128) = 0x3fe72c;
                      if (*(long *)pcVar6 == 0) {
                        pcVar10 = pcVar6 + 9;
                        uVar13 = (ulong)(byte)pcVar6[8];
                      }
                      else {
                        uVar13 = *(ulong *)(pcVar6 + 8);
                        pcVar10 = *(code **)(pcVar6 + 0x10);
                      }
                      if (uVar13 == 0x10) {
                        if (*(long *)pcVar10 == 0x746163696c707061 &&
                            *(long *)(pcVar10 + 8) == 0x637072672f6e6f69) {
                          return (code *)0x0;
                        }
                      }
                      else if (uVar13 < 0x11) {
                        if (uVar13 == 0) {
                          return (code *)((long)&MACH_HEADER.magic + 1);
                        }
                      }
                      else {
                        if ((*(long *)pcVar10 == 0x746163696c707061 &&
                            *(long *)(pcVar10 + 8) == 0x637072672f6e6f69) &&
                            pcVar10[0x10] == (code)0x3b) {
                          return (code *)0x0;
                        }
                        if ((*(long *)pcVar10 == 0x746163696c707061 &&
                            *(long *)(pcVar10 + 8) == 0x637072672f6e6f69) &&
                            pcVar10[0x10] == (code)0x2b) {
                          return (code *)0x0;
                        }
                      }
                      (*pcVar8)(pcVar7,"invalid value",0xd);
                      return (code *)((long)&MACH_HEADER.magic + 2);
                    }
                    ppcVar4 = &pcStack_80;
                    ppcVar16 = &pcStack_80;
                    lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
                    if ((*(byte *)(*(long *)param_4 + 1) >> 5 & 1) == 0) {
                      uVar9 = 0;
                      *(undefined1 *)param_1 = 0;
                    }
                    else {
                      FUN_0034eb70(&pcStack_68,*(undefined8 *)(*(long *)param_4 + 0x170));
                      if (pcStack_68 == (code *)0x0) {
                        uVar13 = (ulong)bStack_60;
                        puVar15 = &uStack_5f;
                      }
                      else {
                        uVar13 = CONCAT71(uStack_5f,bStack_60);
                        puVar15 = puStack_58;
                        if (0x7ffffffffffffff7 < uVar13) goto LAB_003525f4;
                      }
                      if (uVar13 < 0x17) {
                        uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
                        if (uVar13 != 0) goto LAB_00352530;
                      }
                      else {
                        uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
                        if ((uVar13 | 7) != 0x17) {
                          uVar11 = uVar13 | 7;
                        }
                        ppcVar4 = (code **)(uVar11 + 1);
                        __Znwm();
                        uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
                        pcStack_80 = (code *)ppcVar4;
                        uStack_78 = uVar13;
LAB_00352530:
                        _memmove(ppcVar4,puVar15,uVar13);
                        ppcVar16 = ppcVar4;
                      }
                      *(code *)((long)ppcVar16 + uVar13) = (code)0x0;
                      puVar12 = *(undefined8 **)(param_4 + 8);
                      if (*(char *)((long)puVar12 + 0x17) < '\0') {
                        __ZdlPv(*puVar12);
                      }
                      puVar12[2] = uStack_70;
                      puVar12[1] = uStack_78;
                      *puVar12 = pcStack_80;
                      uStack_70 = uStack_70 & 0xffffffffffffff;
                      pcStack_80 = (code *)((ulong)pcStack_80 & 0xffffffffffffff00);
                      if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
                        do {
                          lVar18 = *(long *)pcStack_68;
                          cVar2 = '\x01';
                          bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
                          if (bVar3) {
                            *(long *)pcStack_68 = lVar18 + -1;
                            cVar2 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar2 != '\0');
                        if (lVar18 + -1 == 0) {
                          (**(code **)(pcStack_68 + 8))();
                        }
                      }
                      plVar17 = *(long **)(param_4 + 8);
                      uVar13 = plVar17[1];
                      plVar1 = (long *)*plVar17;
                      if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
                        uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
                        plVar1 = plVar17;
                      }
                      *param_1 = (long)plVar1;
                      param_1[1] = uVar13;
                      uVar9 = 1;
                      param_4 = pcStack_68;
                    }
                    *(undefined1 *)(param_1 + 2) = uVar9;
                    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
                      return param_4;
                    }
                    ___stack_chk_fail();
LAB_003525f4:
                    func_0x0033b318(&pcStack_80);
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x352600);
                    (*pcVar6)();
                  }
                  ppcVar4 = &pcStack_80;
                  ppcVar16 = &pcStack_80;
                  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
                  if ((*(byte *)(*(long *)param_4 + 1) >> 4 & 1) == 0) {
                    uVar9 = 0;
                    *(undefined1 *)param_1 = 0;
                  }
                  else {
                    FUN_0034eb70(&pcStack_68,*(undefined4 *)(*(long *)param_4 + 0x178));
                    if (pcStack_68 == (code *)0x0) {
                      uVar13 = (ulong)bStack_60;
                      puVar15 = &uStack_5f;
                    }
                    else {
                      uVar13 = CONCAT71(uStack_5f,bStack_60);
                      puVar15 = puStack_58;
                      if (0x7ffffffffffffff7 < uVar13) goto LAB_003523d4;
                    }
                    if (uVar13 < 0x17) {
                      uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
                      if (uVar13 != 0) goto LAB_00352310;
                    }
                    else {
                      uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
                      if ((uVar13 | 7) != 0x17) {
                        uVar11 = uVar13 | 7;
                      }
                      ppcVar4 = (code **)(uVar11 + 1);
                      __Znwm();
                      uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
                      pcStack_80 = (code *)ppcVar4;
                      uStack_78 = uVar13;
LAB_00352310:
                      _memmove(ppcVar4,puVar15,uVar13);
                      ppcVar16 = ppcVar4;
                    }
                    *(code *)((long)ppcVar16 + uVar13) = (code)0x0;
                    puVar12 = *(undefined8 **)(param_4 + 8);
                    if (*(char *)((long)puVar12 + 0x17) < '\0') {
                      __ZdlPv(*puVar12);
                    }
                    puVar12[2] = uStack_70;
                    puVar12[1] = uStack_78;
                    *puVar12 = pcStack_80;
                    uStack_70 = uStack_70 & 0xffffffffffffff;
                    pcStack_80 = (code *)((ulong)pcStack_80 & 0xffffffffffffff00);
                    if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
                      do {
                        lVar18 = *(long *)pcStack_68;
                        cVar2 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
                        if (bVar3) {
                          *(long *)pcStack_68 = lVar18 + -1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                      if (lVar18 + -1 == 0) {
                        (**(code **)(pcStack_68 + 8))();
                      }
                    }
                    plVar17 = *(long **)(param_4 + 8);
                    uVar13 = plVar17[1];
                    plVar1 = (long *)*plVar17;
                    if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
                      uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
                      plVar1 = plVar17;
                    }
                    *param_1 = (long)plVar1;
                    param_1[1] = uVar13;
                    uVar9 = 1;
                    param_4 = pcStack_68;
                  }
                  *(undefined1 *)(param_1 + 2) = uVar9;
                  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
                    return param_4;
                  }
                  ___stack_chk_fail();
LAB_003523d4:
                  func_0x0033b318(&pcStack_80);
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x3523e0);
                  (*pcVar6)();
                }
                ppcVar4 = &pcStack_80;
                ppcVar16 = &pcStack_80;
                lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
                if ((*(byte *)(*(long *)param_4 + 1) >> 3 & 1) == 0) {
                  uVar9 = 0;
                  *(undefined1 *)param_1 = 0;
                }
                else {
                  func_0x003fe980(&pcStack_68,*(undefined8 *)(*(long *)param_4 + 0x180));
                  if (pcStack_68 == (code *)0x0) {
                    uVar13 = (ulong)bStack_60;
                    puVar15 = &uStack_5f;
                  }
                  else {
                    uVar13 = CONCAT71(uStack_5f,bStack_60);
                    puVar15 = puStack_58;
                    if (0x7ffffffffffffff7 < uVar13) goto LAB_003521a8;
                  }
                  if (uVar13 < 0x17) {
                    uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
                    if (uVar13 != 0) goto LAB_003520e4;
                  }
                  else {
                    uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
                    if ((uVar13 | 7) != 0x17) {
                      uVar11 = uVar13 | 7;
                    }
                    ppcVar4 = (code **)(uVar11 + 1);
                    __Znwm();
                    uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
                    pcStack_80 = (code *)ppcVar4;
                    uStack_78 = uVar13;
LAB_003520e4:
                    _memmove(ppcVar4,puVar15,uVar13);
                    ppcVar16 = ppcVar4;
                  }
                  *(code *)((long)ppcVar16 + uVar13) = (code)0x0;
                  puVar12 = *(undefined8 **)(param_4 + 8);
                  if (*(char *)((long)puVar12 + 0x17) < '\0') {
                    __ZdlPv(*puVar12);
                  }
                  puVar12[2] = uStack_70;
                  puVar12[1] = uStack_78;
                  *puVar12 = pcStack_80;
                  uStack_70 = uStack_70 & 0xffffffffffffff;
                  pcStack_80 = (code *)((ulong)pcStack_80 & 0xffffffffffffff00);
                  if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
                    do {
                      lVar18 = *(long *)pcStack_68;
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
                      if (bVar3) {
                        *(long *)pcStack_68 = lVar18 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                    if (lVar18 + -1 == 0) {
                      (**(code **)(pcStack_68 + 8))();
                    }
                  }
                  plVar17 = *(long **)(param_4 + 8);
                  uVar13 = plVar17[1];
                  plVar1 = (long *)*plVar17;
                  if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
                    uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
                    plVar1 = plVar17;
                  }
                  *param_1 = (long)plVar1;
                  param_1[1] = uVar13;
                  uVar9 = 1;
                  param_4 = pcStack_68;
                }
                *(undefined1 *)(param_1 + 2) = uVar9;
                if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
                  return param_4;
                }
                ___stack_chk_fail();
LAB_003521a8:
                func_0x0033b318(&pcStack_80);
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x3521b4);
                (*pcVar6)();
              }
              ppcVar4 = &pcStack_80;
              ppcVar16 = &pcStack_80;
              lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
              if ((*(byte *)(*(long *)param_4 + 1) >> 2 & 1) == 0) {
                uVar9 = 0;
                *(undefined1 *)param_1 = 0;
              }
              else {
                FUN_0034eb70(&pcStack_68,(long)*(int *)(*(long *)param_4 + 0x188));
                if (pcStack_68 == (code *)0x0) {
                  uVar13 = (ulong)bStack_60;
                  puVar15 = &uStack_5f;
                }
                else {
                  uVar13 = CONCAT71(uStack_5f,bStack_60);
                  puVar15 = puStack_58;
                  if (0x7ffffffffffffff7 < uVar13) goto LAB_00351fa4;
                }
                if (uVar13 < 0x17) {
                  uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
                  if (uVar13 != 0) goto LAB_00351ee0;
                }
                else {
                  uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
                  if ((uVar13 | 7) != 0x17) {
                    uVar11 = uVar13 | 7;
                  }
                  ppcVar4 = (code **)(uVar11 + 1);
                  __Znwm();
                  uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
                  pcStack_80 = (code *)ppcVar4;
                  uStack_78 = uVar13;
LAB_00351ee0:
                  _memmove(ppcVar4,puVar15,uVar13);
                  ppcVar16 = ppcVar4;
                }
                *(code *)((long)ppcVar16 + uVar13) = (code)0x0;
                puVar12 = *(undefined8 **)(param_4 + 8);
                if (*(char *)((long)puVar12 + 0x17) < '\0') {
                  __ZdlPv(*puVar12);
                }
                puVar12[2] = uStack_70;
                puVar12[1] = uStack_78;
                *puVar12 = pcStack_80;
                uStack_70 = uStack_70 & 0xffffffffffffff;
                pcStack_80 = (code *)((ulong)pcStack_80 & 0xffffffffffffff00);
                if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
                  do {
                    lVar18 = *(long *)pcStack_68;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
                    if (bVar3) {
                      *(long *)pcStack_68 = lVar18 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (lVar18 + -1 == 0) {
                    (**(code **)(pcStack_68 + 8))();
                  }
                }
                plVar17 = *(long **)(param_4 + 8);
                uVar13 = plVar17[1];
                plVar1 = (long *)*plVar17;
                if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
                  uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
                  plVar1 = plVar17;
                }
                *param_1 = (long)plVar1;
                param_1[1] = uVar13;
                uVar9 = 1;
                param_4 = pcStack_68;
              }
              *(undefined1 *)(param_1 + 2) = uVar9;
              if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
                return param_4;
              }
              ___stack_chk_fail();
LAB_00351fa4:
              func_0x0033b318(&pcStack_80);
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x351fb0);
              (*pcVar6)();
            }
            lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
            if ((*(byte *)(*(long *)param_4 + 1) >> 1 & 1) == 0) {
              uVar9 = 0;
              *(undefined1 *)param_1 = 0;
            }
            else {
              uStack_70 = CONCAT17(*(undefined1 *)(*(long *)param_4 + 0x18c),(undefined7)uStack_70);
              func_0x003b095c(&pcStack_68,(long)&uStack_70 + 7);
              if (pcStack_68 == (code *)0x0) {
                pcVar6 = (code *)(ulong)bStack_60;
                puVar15 = &uStack_5f;
              }
              else {
                pcVar6 = (code *)CONCAT71(uStack_5f,bStack_60);
                puVar15 = puStack_58;
                if ((code *)0x7ffffffffffffff7 < pcVar6) goto LAB_00351d98;
              }
              if ((code *)((long)&MACH_HEADER.sizeofcmds + 2) < pcVar6) {
                uVar13 = ((ulong)pcVar6 & 0x7ffffffffffffff8) + 8;
                if (((ulong)pcVar6 | 7) != 0x17) {
                  uVar13 = (ulong)pcVar6 | 7;
                }
                pppppppuVar5 = (undefined8 *******)(uVar13 + 1);
                __Znwm();
                uStack_78 = uVar13 + 1 | 0x8000000000000000;
                pppppppuStack_88 = pppppppuVar5;
                pcStack_80 = pcVar6;
LAB_00351cd4:
                _memmove(pppppppuVar5,puVar15,pcVar6);
              }
              else {
                uStack_78 = CONCAT17((char)pcVar6,(undefined7)uStack_78);
                pppppppuVar5 = &pppppppuStack_88;
                if (pcVar6 != (code *)0x0) goto LAB_00351cd4;
              }
              *(code *)((long)pppppppuVar5 + (long)pcVar6) = (code)0x0;
              puVar12 = *(undefined8 **)(param_4 + 8);
              if (*(char *)((long)puVar12 + 0x17) < '\0') {
                __ZdlPv(*puVar12);
              }
              puVar12[2] = uStack_78;
              puVar12[1] = pcStack_80;
              *puVar12 = pppppppuStack_88;
              uStack_78 = uStack_78 & 0xffffffffffffff;
              pppppppuStack_88 = (undefined8 *******)((ulong)pppppppuStack_88 & 0xffffffffffffff00);
              if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
                do {
                  lVar18 = *(long *)pcStack_68;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
                  if (bVar3) {
                    *(long *)pcStack_68 = lVar18 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (lVar18 + -1 == 0) {
                  (**(code **)(pcStack_68 + 8))();
                }
              }
              plVar17 = *(long **)(param_4 + 8);
              uVar13 = plVar17[1];
              plVar1 = (long *)*plVar17;
              if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
                uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
                plVar1 = plVar17;
              }
              *param_1 = (long)plVar1;
              param_1[1] = uVar13;
              uVar9 = 1;
              param_4 = pcStack_68;
            }
            *(undefined1 *)(param_1 + 2) = uVar9;
            if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
              return param_4;
            }
            ___stack_chk_fail();
LAB_00351d98:
            func_0x0033b318(&pppppppuStack_88);
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x351da4);
            (*pcVar6)();
          }
          ppcVar4 = &pcStack_80;
          ppcVar16 = &pcStack_80;
          lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
          if ((*(byte *)(*(long *)param_4 + 1) & 1) == 0) {
            uVar9 = 0;
            *(undefined1 *)param_1 = 0;
          }
          else {
            FUN_0034f290(&pcStack_68,*(undefined4 *)(*(long *)param_4 + 400));
            if (pcStack_68 == (code *)0x0) {
              uVar13 = (ulong)bStack_60;
              puVar15 = &uStack_5f;
            }
            else {
              uVar13 = CONCAT71(uStack_5f,bStack_60);
              puVar15 = puStack_58;
              if (0x7ffffffffffffff7 < uVar13) goto LAB_00351b78;
            }
            if (uVar13 < 0x17) {
              uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
              if (uVar13 != 0) goto LAB_00351ab4;
            }
            else {
              uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
              if ((uVar13 | 7) != 0x17) {
                uVar11 = uVar13 | 7;
              }
              ppcVar4 = (code **)(uVar11 + 1);
              __Znwm();
              uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
              pcStack_80 = (code *)ppcVar4;
              uStack_78 = uVar13;
LAB_00351ab4:
              _memmove(ppcVar4,puVar15,uVar13);
              ppcVar16 = ppcVar4;
            }
            *(code *)((long)ppcVar16 + uVar13) = (code)0x0;
            puVar12 = *(undefined8 **)(param_4 + 8);
            if (*(char *)((long)puVar12 + 0x17) < '\0') {
              __ZdlPv(*puVar12);
            }
            puVar12[2] = uStack_70;
            puVar12[1] = uStack_78;
            *puVar12 = pcStack_80;
            uStack_70 = uStack_70 & 0xffffffffffffff;
            pcStack_80 = (code *)((ulong)pcStack_80 & 0xffffffffffffff00);
            if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
              do {
                lVar18 = *(long *)pcStack_68;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
                if (bVar3) {
                  *(long *)pcStack_68 = lVar18 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar18 + -1 == 0) {
                (**(code **)(pcStack_68 + 8))();
              }
            }
            plVar17 = *(long **)(param_4 + 8);
            uVar13 = plVar17[1];
            plVar1 = (long *)*plVar17;
            if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
              uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
              plVar1 = plVar17;
            }
            *param_1 = (long)plVar1;
            param_1[1] = uVar13;
            uVar9 = 1;
            param_4 = pcStack_68;
          }
          *(undefined1 *)(param_1 + 2) = uVar9;
          if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
            return param_4;
          }
          ___stack_chk_fail();
LAB_00351b78:
          func_0x0033b318(&pcStack_80);
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x351b84);
          (*pcVar6)();
        }
        ppcVar4 = &pcStack_80;
        ppcVar16 = &pcStack_80;
        lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
        if (**(char **)param_4 < '\0') {
          FUN_0034f290(&pcStack_68,*(undefined4 *)(*(char **)param_4 + 0x194));
          if (pcStack_68 == (code *)0x0) {
            uVar13 = (ulong)bStack_60;
            puVar15 = &uStack_5f;
          }
          else {
            uVar13 = CONCAT71(uStack_5f,bStack_60);
            puVar15 = puStack_58;
            if (0x7ffffffffffffff7 < uVar13) goto LAB_00351940;
          }
          if (uVar13 < 0x17) {
            uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
            if (uVar13 != 0) goto LAB_0035187c;
          }
          else {
            uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
            if ((uVar13 | 7) != 0x17) {
              uVar11 = uVar13 | 7;
            }
            ppcVar4 = (code **)(uVar11 + 1);
            __Znwm();
            uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
            pcStack_80 = (code *)ppcVar4;
            uStack_78 = uVar13;
LAB_0035187c:
            _memmove(ppcVar4,puVar15,uVar13);
            ppcVar16 = ppcVar4;
          }
          *(code *)((long)ppcVar16 + uVar13) = (code)0x0;
          puVar12 = *(undefined8 **)(param_4 + 8);
          if (*(char *)((long)puVar12 + 0x17) < '\0') {
            __ZdlPv(*puVar12);
          }
          puVar12[2] = uStack_70;
          puVar12[1] = uStack_78;
          *puVar12 = pcStack_80;
          uStack_70 = uStack_70 & 0xffffffffffffff;
          pcStack_80 = (code *)((ulong)pcStack_80 & 0xffffffffffffff00);
          if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
            do {
              lVar18 = *(long *)pcStack_68;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
              if (bVar3) {
                *(long *)pcStack_68 = lVar18 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar18 + -1 == 0) {
              (**(code **)(pcStack_68 + 8))();
            }
          }
          plVar17 = *(long **)(param_4 + 8);
          uVar13 = plVar17[1];
          plVar1 = (long *)*plVar17;
          if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
            uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
            plVar1 = plVar17;
          }
          *param_1 = (long)plVar1;
          param_1[1] = uVar13;
          uVar9 = 1;
          param_4 = pcStack_68;
        }
        else {
          uVar9 = 0;
          *(undefined1 *)param_1 = 0;
        }
        *(undefined1 *)(param_1 + 2) = uVar9;
        if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
          return param_4;
        }
        ___stack_chk_fail();
LAB_00351940:
        func_0x0033b318(&pcStack_80);
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x35194c);
        (*pcVar6)();
      }
      ppcVar4 = &pcStack_80;
      ppcVar16 = &pcStack_80;
      lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
      if ((**(byte **)param_4 >> 6 & 1) == 0) {
        uVar9 = 0;
        *(undefined1 *)param_1 = 0;
        pcVar6 = param_4;
      }
      else {
        pcVar6 = (code *)(ulong)(*(byte **)param_4)[0x198];
        FUN_0034f090(&pcStack_68,pcVar6);
        if (pcStack_68 == (code *)0x0) {
          uVar13 = (ulong)bStack_60;
          puVar15 = &uStack_5f;
        }
        else {
          uVar13 = CONCAT71(uStack_5f,bStack_60);
          puVar15 = puStack_58;
          if (0x7ffffffffffffff7 < uVar13) goto LAB_0035175c;
        }
        if (uVar13 < 0x17) {
          uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
          if (uVar13 != 0) goto LAB_003516c8;
        }
        else {
          uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
          if ((uVar13 | 7) != 0x17) {
            uVar11 = uVar13 | 7;
          }
          ppcVar4 = (code **)(uVar11 + 1);
          __Znwm();
          uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
          pcStack_80 = (code *)ppcVar4;
          uStack_78 = uVar13;
LAB_003516c8:
          pcVar6 = (code *)ppcVar4;
          _memmove(ppcVar4,puVar15,uVar13);
          ppcVar16 = ppcVar4;
        }
        *(code *)((long)ppcVar16 + uVar13) = (code)0x0;
        puVar12 = *(undefined8 **)(param_4 + 8);
        if (*(char *)((long)puVar12 + 0x17) < '\0') {
          pcVar6 = (code *)*puVar12;
          __ZdlPv(pcVar6);
        }
        puVar12[2] = uStack_70;
        puVar12[1] = uStack_78;
        *puVar12 = pcStack_80;
        plVar17 = *(long **)(param_4 + 8);
        uVar13 = plVar17[1];
        plVar1 = (long *)*plVar17;
        if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
          uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
          plVar1 = plVar17;
        }
        *param_1 = (long)plVar1;
        param_1[1] = uVar13;
        uVar9 = 1;
      }
      *(undefined1 *)(param_1 + 2) = uVar9;
      if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
        return pcVar6;
      }
      ___stack_chk_fail();
LAB_0035175c:
      func_0x0033b318(&pcStack_80);
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x351768);
      (*pcVar6)();
    }
    ppcVar4 = &pcStack_80;
    ppcVar16 = &pcStack_80;
    lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
    if ((**(byte **)param_4 >> 5 & 1) == 0) {
      uVar9 = 0;
      *(undefined1 *)param_1 = 0;
      pcVar6 = param_4;
    }
    else {
      pcVar6 = (code *)(ulong)*(uint *)(*(byte **)param_4 + 0x19c);
      func_0x003fe828(&pcStack_68,pcVar6);
      if (pcStack_68 == (code *)0x0) {
        uVar13 = (ulong)bStack_60;
        puVar15 = &uStack_5f;
      }
      else {
        uVar13 = CONCAT71(uStack_5f,bStack_60);
        puVar15 = puStack_58;
        if (0x7ffffffffffffff7 < uVar13) goto LAB_003515cc;
      }
      if (uVar13 < 0x17) {
        uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
        if (uVar13 != 0) goto LAB_00351538;
      }
      else {
        uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
        if ((uVar13 | 7) != 0x17) {
          uVar11 = uVar13 | 7;
        }
        ppcVar4 = (code **)(uVar11 + 1);
        __Znwm();
        uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
        pcStack_80 = (code *)ppcVar4;
        uStack_78 = uVar13;
LAB_00351538:
        pcVar6 = (code *)ppcVar4;
        _memmove(ppcVar4,puVar15,uVar13);
        ppcVar16 = ppcVar4;
      }
      *(code *)((long)ppcVar16 + uVar13) = (code)0x0;
      puVar14 = *(ulong **)(param_4 + 8);
      if (*(char *)((long)puVar14 + 0x17) < '\0') {
        pcVar6 = (code *)*puVar14;
        __ZdlPv(pcVar6);
      }
      puVar14[2] = uStack_70;
      puVar14[1] = uStack_78;
      *puVar14 = (ulong)pcStack_80;
      plVar17 = *(long **)(param_4 + 8);
      uVar13 = plVar17[1];
      plVar1 = (long *)*plVar17;
      if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
        uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
        plVar1 = plVar17;
      }
      *param_1 = (long)plVar1;
      param_1[1] = uVar13;
      uVar9 = 1;
    }
    *(undefined1 *)(param_1 + 2) = uVar9;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
      return pcVar6;
    }
    ___stack_chk_fail();
LAB_003515cc:
    func_0x0033b318(&pcStack_80);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x3515d8);
    (*pcVar6)();
  }
  ppcVar4 = &pcStack_80;
  ppcVar16 = &pcStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  if ((**(byte **)param_4 >> 4 & 1) == 0) {
    uVar9 = 0;
    *(undefined1 *)param_1 = 0;
    pcVar6 = param_4;
  }
  else {
    pcVar6 = (code *)(ulong)*(uint *)(*(byte **)param_4 + 0x1a0);
    FUN_003febf4(&pcStack_68,pcVar6);
    if (pcStack_68 == (code *)0x0) {
      uVar13 = (ulong)bStack_60;
      puVar15 = &uStack_5f;
    }
    else {
      uVar13 = CONCAT71(uStack_5f,bStack_60);
      puVar15 = puStack_58;
      if (0x7ffffffffffffff7 < uVar13) goto LAB_00351420;
    }
    if (uVar13 < 0x17) {
      uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
      if (uVar13 != 0) goto LAB_0035138c;
    }
    else {
      uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
      if ((uVar13 | 7) != 0x17) {
        uVar11 = uVar13 | 7;
      }
      ppcVar4 = (code **)(uVar11 + 1);
      __Znwm();
      uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
      pcStack_80 = (code *)ppcVar4;
      uStack_78 = uVar13;
LAB_0035138c:
      pcVar6 = (code *)ppcVar4;
      _memmove(ppcVar4,puVar15,uVar13);
      ppcVar16 = ppcVar4;
    }
    *(code *)((long)ppcVar16 + uVar13) = (code)0x0;
    puVar14 = *(ulong **)(param_4 + 8);
    if (*(char *)((long)puVar14 + 0x17) < '\0') {
      pcVar6 = (code *)*puVar14;
      __ZdlPv(pcVar6);
    }
    puVar14[2] = uStack_70;
    puVar14[1] = uStack_78;
    *puVar14 = (ulong)pcStack_80;
    plVar17 = *(long **)(param_4 + 8);
    uVar13 = plVar17[1];
    plVar1 = (long *)*plVar17;
    if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
      uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
      plVar1 = plVar17;
    }
    *param_1 = (long)plVar1;
    param_1[1] = uVar13;
    uVar9 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar9;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return pcVar6;
  }
  ___stack_chk_fail();
LAB_00351420:
  func_0x0033b318(&pcStack_80);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x35142c);
  (*pcVar6)();
}



/* Entry: 003512c4; end: 0035142f;  */

void FUN_003512c4(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 **ppuVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined7 *puVar8;
  undefined1 **ppuVar9;
  undefined1 *puStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  ppuVar3 = &puStack_80;
  ppuVar9 = &puStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  if ((*(byte *)*param_2 >> 4 & 1) == 0) {
    uVar4 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    FUN_003febf4(&lStack_68,*(undefined4 *)((byte *)*param_2 + 0x1a0));
    if (lStack_68 == 0) {
      uVar6 = (ulong)bStack_60;
      puVar8 = &uStack_5f;
    }
    else {
      uVar6 = CONCAT71(uStack_5f,bStack_60);
      puVar8 = puStack_58;
      if (0x7ffffffffffffff7 < uVar6) goto LAB_00351420;
    }
    if (uVar6 < 0x17) {
      uStack_70 = CONCAT17((char)uVar6,(undefined7)uStack_70);
      if (uVar6 != 0) goto LAB_0035138c;
    }
    else {
      uVar1 = (uVar6 & 0x7ffffffffffffff8) + 8;
      if ((uVar6 | 7) != 0x17) {
        uVar1 = uVar6 | 7;
      }
      ppuVar3 = (undefined1 **)(uVar1 + 1);
      __Znwm();
      uStack_70 = (ulong)(uVar1 + 1) | 0x8000000000000000;
      puStack_80 = (undefined1 *)ppuVar3;
      uStack_78 = uVar6;
LAB_0035138c:
      _memmove(ppuVar3,puVar8,uVar6);
      ppuVar9 = ppuVar3;
    }
    *(undefined1 *)((long)ppuVar9 + uVar6) = 0;
    puVar7 = (undefined8 *)param_2[1];
    if (*(char *)((long)puVar7 + 0x17) < '\0') {
      __ZdlPv(*puVar7);
    }
    puVar7[2] = uStack_70;
    puVar7[1] = uStack_78;
    *puVar7 = puStack_80;
    puVar5 = (undefined8 *)param_2[1];
    uVar6 = puVar5[1];
    puVar7 = (undefined8 *)*puVar5;
    if (-1 < (char)*(byte *)((long)puVar5 + 0x17)) {
      uVar6 = (ulong)*(byte *)((long)puVar5 + 0x17);
      puVar7 = puVar5;
    }
    *param_1 = puVar7;
    param_1[1] = uVar6;
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar4;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_00351420:
  func_0x0033b318(&puStack_80);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x35142c);
  (*pcVar2)();
}



/* Entry: 00351430; end: 0035146f;  */

/* WARNING: Type propagation algorithm not settling */

code * FUN_00351430(long *param_1,code *param_2,code *param_3,code *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code **ppcVar4;
  undefined8 *******pppppppuVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  undefined1 uVar9;
  long *extraout_x8;
  long *extraout_x8_00;
  code *pcVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  code *unaff_x19;
  code *unaff_x20;
  undefined8 *unaff_x21;
  ulong *puVar14;
  undefined8 *unaff_x22;
  undefined7 *puVar15;
  code *unaff_x23;
  code **ppcVar16;
  long *plVar17;
  undefined8 unaff_x24;
  long lVar18;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long *plVar19;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar20;
  undefined8 *******pppppppuStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  if ((param_3 != (code *)&MACH_HEADER.filetype) ||
     (*(long *)param_2 != 0x2d746e65746e6f63 || *(int *)(param_2 + 8) != 0x65707974)) {
    if ((param_3 != (code *)((long)&MACH_HEADER.magic + 2)) || (*(short *)param_2 != 0x6574)) {
      if ((param_3 != (code *)((long)&MACH_HEADER.filetype + 1)) ||
         (*(long *)param_2 != 0x636e652d63707267 || *(long *)(param_2 + 5) != 0x676e69646f636e65)) {
        if ((param_3 != (code *)((long)&MACH_HEADER.reserved + 2)) ||
           (((*(long *)param_2 != 0x746e692d63707267 || *(long *)(param_2 + 8) != 0x6e652d6c616e7265
             ) || *(long *)(param_2 + 0x10) != 0x722d676e69646f63) ||
            *(long *)(param_2 + 0x16) != 0x747365757165722d)) {
          if ((param_3 != (code *)&MACH_HEADER.sizeofcmds) ||
             ((*(long *)param_2 != 0x6363612d63707267 ||
              *(long *)(param_2 + 8) != 0x6f636e652d747065) ||
              *(int *)(param_2 + 0x10) != 0x676e6964)) {
            if ((param_3 != (code *)((long)&MACH_HEADER.cpusubtype + 3)) ||
               (*(long *)param_2 != 0x6174732d63707267 ||
                *(long *)(param_2 + 3) != 0x7375746174732d63)) {
              if ((param_3 != (code *)&MACH_HEADER.filetype) ||
                 (*(long *)param_2 != 0x6d69742d63707267 || *(int *)(param_2 + 8) != 0x74756f65)) {
                if ((param_3 != (code *)((long)&MACH_HEADER.flags + 2)) ||
                   (((*(long *)param_2 != 0x6572702d63707267 ||
                     *(long *)(param_2 + 8) != 0x70722d73756f6976) ||
                    *(long *)(param_2 + 0x10) != 0x706d657474612d63) ||
                    *(short *)(param_2 + 0x18) != 0x7374)) {
                  if ((param_3 != (code *)((long)&MACH_HEADER.sizeofcmds + 2)) ||
                     ((*(long *)param_2 != 0x7465722d63707267 ||
                      *(long *)(param_2 + 8) != 0x62687375702d7972) ||
                      *(long *)(param_2 + 0xe) != 0x736d2d6b63616268)) {
                    if ((param_3 == (code *)((long)&MACH_HEADER.cpusubtype + 2)) &&
                       (*(long *)param_2 == 0x6567612d72657375 && *(short *)(param_2 + 8) == 0x746e)
                       ) {
                      lVar18 = *(long *)param_4;
                      if ((*(byte *)(lVar18 + 1) >> 6 & 1) == 0) {
                        uVar9 = 0;
                        *(undefined1 *)param_1 = 0;
                      }
                      else {
                        if (*(long *)(lVar18 + 0x150) == 0) {
                          lVar20 = lVar18 + 0x159;
                          uVar13 = (ulong)*(byte *)(lVar18 + 0x158);
                        }
                        else {
                          uVar13 = *(ulong *)(lVar18 + 0x158);
                          lVar20 = *(long *)(lVar18 + 0x160);
                        }
                        *param_1 = lVar20;
                        param_1[1] = uVar13;
                        uVar9 = 1;
                      }
                      *(undefined1 *)(param_1 + 2) = uVar9;
                      return param_4;
                    }
                    if ((param_3 == (code *)&MACH_HEADER.filetype) &&
                       (*(long *)param_2 == 0x73656d2d63707267 &&
                        *(int *)(param_2 + 8) == 0x65676173)) {
                      lVar18 = *(long *)param_4;
                      if (*(char *)(lVar18 + 1) < '\0') {
                        if (*(long *)(lVar18 + 0x130) == 0) {
                          lVar20 = lVar18 + 0x139;
                          uVar13 = (ulong)*(byte *)(lVar18 + 0x138);
                        }
                        else {
                          uVar13 = *(ulong *)(lVar18 + 0x138);
                          lVar20 = *(long *)(lVar18 + 0x140);
                        }
                        *param_1 = lVar20;
                        param_1[1] = uVar13;
                        uVar9 = 1;
                      }
                      else {
                        uVar9 = 0;
                        *(undefined1 *)param_1 = 0;
                      }
                      *(undefined1 *)(param_1 + 2) = uVar9;
                      return param_4;
                    }
                    if ((param_3 == (code *)&MACH_HEADER.cputype) && (*(int *)param_2 == 0x74736f68)
                       ) {
                      lVar18 = *(long *)param_4;
                      if ((*(byte *)(lVar18 + 2) & 1) == 0) {
                        uVar9 = 0;
                        *(undefined1 *)param_1 = 0;
                      }
                      else {
                        if (*(long *)(lVar18 + 0x110) == 0) {
                          lVar20 = lVar18 + 0x119;
                          uVar13 = (ulong)*(byte *)(lVar18 + 0x118);
                        }
                        else {
                          uVar13 = *(ulong *)(lVar18 + 0x118);
                          lVar20 = *(long *)(lVar18 + 0x120);
                        }
                        *param_1 = lVar20;
                        param_1[1] = uVar13;
                        uVar9 = 1;
                      }
                      *(undefined1 *)(param_1 + 2) = uVar9;
                      return param_4;
                    }
                    if ((param_3 == (code *)((long)&MACH_HEADER.flags + 1)) &&
                       (((*(long *)param_2 == 0x746e696f70646e65 &&
                         *(long *)(param_2 + 8) == 0x656d2d64616f6c2d) &&
                        *(long *)(param_2 + 0x10) == 0x69622d7363697274) &&
                        param_2[0x18] == (code)0x6e)) {
                      lVar18 = *(long *)param_4;
                      if ((*(byte *)(lVar18 + 2) >> 1 & 1) == 0) {
                        uVar9 = 0;
                        *(undefined1 *)param_1 = 0;
                      }
                      else {
                        if (*(long *)(lVar18 + 0xf0) == 0) {
                          lVar20 = lVar18 + 0xf9;
                          uVar13 = (ulong)*(byte *)(lVar18 + 0xf8);
                        }
                        else {
                          uVar13 = *(ulong *)(lVar18 + 0xf8);
                          lVar20 = *(long *)(lVar18 + 0x100);
                        }
                        *param_1 = lVar20;
                        param_1[1] = uVar13;
                        uVar9 = 1;
                      }
                      *(undefined1 *)(param_1 + 2) = uVar9;
                      return param_4;
                    }
                    if ((param_3 == (code *)((long)&MACH_HEADER.sizeofcmds + 1)) &&
                       ((*(long *)param_2 == 0x7265732d63707267 &&
                        *(long *)(param_2 + 8) == 0x746174732d726576) &&
                        *(long *)(param_2 + 0xd) == 0x6e69622d73746174)) {
                      lVar18 = *(long *)param_4;
                      if ((*(byte *)(lVar18 + 2) >> 2 & 1) == 0) {
                        uVar9 = 0;
                        *(undefined1 *)param_1 = 0;
                      }
                      else {
                        if (*(long *)(lVar18 + 0xd0) == 0) {
                          lVar20 = lVar18 + 0xd9;
                          uVar13 = (ulong)*(byte *)(lVar18 + 0xd8);
                        }
                        else {
                          uVar13 = *(ulong *)(lVar18 + 0xd8);
                          lVar20 = *(long *)(lVar18 + 0xe0);
                        }
                        *param_1 = lVar20;
                        param_1[1] = uVar13;
                        uVar9 = 1;
                      }
                      *(undefined1 *)(param_1 + 2) = uVar9;
                      return param_4;
                    }
                    if ((param_3 == (code *)((long)&MACH_HEADER.filetype + 2)) &&
                       (*(long *)param_2 == 0x6172742d63707267 &&
                        *(long *)(param_2 + 6) == 0x6e69622d65636172)) {
                      lVar18 = *(long *)param_4;
                      if ((*(byte *)(lVar18 + 2) >> 3 & 1) == 0) {
                        uVar9 = 0;
                        *(undefined1 *)param_1 = 0;
                      }
                      else {
                        if (*(long *)(lVar18 + 0xb0) == 0) {
                          lVar20 = lVar18 + 0xb9;
                          uVar13 = (ulong)*(byte *)(lVar18 + 0xb8);
                        }
                        else {
                          uVar13 = *(ulong *)(lVar18 + 0xb8);
                          lVar20 = *(long *)(lVar18 + 0xc0);
                        }
                        *param_1 = lVar20;
                        param_1[1] = uVar13;
                        uVar9 = 1;
                      }
                      *(undefined1 *)(param_1 + 2) = uVar9;
                      return param_4;
                    }
                    if ((param_3 == (code *)((long)&MACH_HEADER.filetype + 1)) &&
                       (*(long *)param_2 == 0x6761742d63707267 &&
                        *(long *)(param_2 + 5) == 0x6e69622d73676174)) {
                      lVar18 = *(long *)param_4;
                      if ((*(byte *)(lVar18 + 2) >> 4 & 1) == 0) {
                        uVar9 = 0;
                        *(undefined1 *)param_1 = 0;
                      }
                      else {
                        if (*(long *)(lVar18 + 0x90) == 0) {
                          lVar20 = lVar18 + 0x99;
                          uVar13 = (ulong)*(byte *)(lVar18 + 0x98);
                        }
                        else {
                          uVar13 = *(ulong *)(lVar18 + 0x98);
                          lVar20 = *(long *)(lVar18 + 0xa0);
                        }
                        *param_1 = lVar20;
                        param_1[1] = uVar13;
                        uVar9 = 1;
                      }
                      *(undefined1 *)(param_1 + 2) = uVar9;
                      return param_4;
                    }
                    if ((param_3 == (code *)((long)&MACH_HEADER.ncmds + 3)) &&
                       ((*(long *)param_2 == 0x635f626c63707267 &&
                        *(long *)(param_2 + 8) == 0x74735f746e65696c) &&
                        *(long *)(param_2 + 0xb) == 0x73746174735f746e)) {
                      unaff_x29 = &stack0xfffffffffffffff0;
                      if ((*(byte *)(*(long *)param_4 + 2) >> 5 & 1) == 0) {
                        *(undefined1 *)param_1 = 0;
                        *(undefined1 *)(param_1 + 2) = 0;
                        return param_4;
                      }
                      unaff_x30 = FUN_00352a68;
                      pcVar6 = param_4;
                      _abort();
                      register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
                      param_2 = param_4;
                      param_4 = pcVar6;
                      param_1 = extraout_x8;
                    }
                    if ((param_3 == (code *)((long)&MACH_HEADER.cpusubtype + 3)) &&
                       (*(long *)param_2 == 0x2d74736f632d626c &&
                        *(long *)(param_2 + 3) == 0x6e69622d74736f63)) {
                      *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
                      *(code **)((long)register0x00000008 + -0x38) = unaff_x23;
                      *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
                      *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
                      *(code **)((long)register0x00000008 + -0x20) = unaff_x20;
                      *(code **)((long)register0x00000008 + -0x18) = unaff_x19;
                      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
                      *(code **)((long)register0x00000008 + -8) = unaff_x30;
                      unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
                      *(undefined8 *)((long)register0x00000008 + -0x48) =
                           *(undefined8 *)PTR____stack_chk_guard_00999f88;
                      lVar18 = *(long *)param_4;
                      unaff_x19 = param_4;
                      pcVar6 = param_4;
                      if ((*(byte *)(lVar18 + 2) >> 6 & 1) == 0) {
                        uVar9 = 0;
                        *(undefined1 *)param_1 = 0;
                      }
                      else {
                        puVar12 = *(undefined8 **)(param_4 + 8);
                        if (*(char *)((long)puVar12 + 0x17) < '\0') {
                          *(undefined1 *)*puVar12 = 0;
                          puVar12[1] = 0;
                        }
                        else {
                          *(undefined1 *)puVar12 = 0;
                          *(undefined1 *)((long)puVar12 + 0x17) = 0;
                        }
                        uVar13 = *(ulong *)(lVar18 + 0x60);
                        unaff_x21 = (undefined8 *)(lVar18 + 0x68);
                        if ((uVar13 & 1) != 0) {
                          unaff_x21 = (undefined8 *)*unaff_x21;
                        }
                        if (1 < uVar13) {
                          unaff_x22 = unaff_x21 + (uVar13 >> 1) * 4;
                          unaff_x23 = (code *)((long)register0x00000008 + -0x5f);
                          do {
                            lVar18 = *(long *)(param_4 + 8);
                            if (*(char *)(lVar18 + 0x17) < '\0') {
                              if (*(long *)(lVar18 + 8) != 0) goto LAB_00352b64;
                            }
                            else if (*(char *)(lVar18 + 0x17) != '\0') {
LAB_00352b64:
                              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                                        (lVar18,0x2c);
                            }
                            FUN_003fee84((undefined1 *)((long)register0x00000008 + -0x68),unaff_x21)
                            ;
                            uVar13 = *(ulong *)((long)register0x00000008 + -0x60) & 0xff;
                            param_3 = unaff_x23;
                            if (*(long *)((long)register0x00000008 + -0x68) != 0) {
                              uVar13 = *(ulong *)((long)register0x00000008 + -0x60);
                              param_3 = *(code **)((long)register0x00000008 + -0x58);
                            }
                            pcVar6 = param_3 + uVar13;
                            FUN_00352c98(*(long *)(param_4 + 8));
                            unaff_x19 = *(code **)((long)register0x00000008 + -0x68);
                            if ((code *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
                              do {
                                lVar18 = *(long *)unaff_x19;
                                cVar2 = '\x01';
                                bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
                                if (bVar3) {
                                  *(long *)unaff_x19 = lVar18 + -1;
                                  cVar2 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar2 != '\0');
                              if (lVar18 + -1 == 0) {
                                (**(code **)(unaff_x19 + 8))();
                              }
                            }
                            unaff_x21 = unaff_x21 + 4;
                          } while (unaff_x21 != unaff_x22);
                        }
                        plVar17 = *(long **)(param_4 + 8);
                        uVar13 = plVar17[1];
                        plVar1 = (long *)*plVar17;
                        if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
                          uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
                          plVar1 = plVar17;
                        }
                        *param_1 = (long)plVar1;
                        param_1[1] = uVar13;
                        uVar9 = 1;
                        unaff_x20 = param_4;
                      }
                      *(undefined1 *)(param_1 + 2) = uVar9;
                      if (*(long *)PTR____stack_chk_guard_00999f88 ==
                          *(long *)((long)register0x00000008 + -0x48)) {
                        return unaff_x19;
                      }
                      ___stack_chk_fail();
                      param_4 = pcVar6;
                      if ((int)param_3 != 0) {
                        func_0x0040cf10();
                        FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x68));
                        param_4 = pcVar6;
                      }
                      unaff_x30 = FUN_00352c58;
                      param_2 = unaff_x19;
                      __Unwind_Resume();
                      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
                      param_1 = extraout_x8_00;
                    }
                    if ((param_3 == (code *)&MACH_HEADER.cpusubtype) &&
                       (*(long *)param_2 == 0x6e656b6f742d626c)) {
                      lVar18 = *(long *)param_4;
                      if (*(char *)(lVar18 + 2) < '\0') {
                        if (*(long *)(lVar18 + 0x40) == 0) {
                          lVar20 = lVar18 + 0x49;
                          uVar13 = (ulong)*(byte *)(lVar18 + 0x48);
                        }
                        else {
                          uVar13 = *(ulong *)(lVar18 + 0x48);
                          lVar20 = *(long *)(lVar18 + 0x50);
                        }
                        *param_1 = lVar20;
                        param_1[1] = uVar13;
                        uVar9 = 1;
                      }
                      else {
                        uVar9 = 0;
                        *(undefined1 *)param_1 = 0;
                      }
                      *(undefined1 *)(param_1 + 2) = uVar9;
                      return param_4;
                    }
                    lVar18 = *(long *)param_4;
                    plVar1 = *(long **)(param_4 + 8);
                    pcVar6 = (code *)(lVar18 + 0x1f0);
                    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
                    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
                    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
                    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
                    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
                    *(code **)((long)register0x00000008 + -0x38) = unaff_x23;
                    *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
                    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
                    *(code **)((long)register0x00000008 + -0x20) = unaff_x20;
                    *(code **)((long)register0x00000008 + -0x18) = unaff_x19;
                    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
                    *(code **)((long)register0x00000008 + -8) = unaff_x30;
                    *(undefined8 *)((long)register0x00000008 + -0x70) =
                         *(undefined8 *)PTR____stack_chk_guard_00999f88;
                    *(undefined1 *)param_1 = 0;
                    *(undefined1 *)(param_1 + 2) = 0;
                    plVar17 = *(long **)(lVar18 + 0x1f8);
                    pcVar7 = param_2;
                    pcVar8 = param_3;
                    if ((plVar17 != (long *)0x0) && (plVar17[1] != 0)) {
                      lVar18 = 0;
                      bVar3 = false;
                      plVar19 = (long *)*param_1;
                      uVar13 = param_1[1];
                      do {
                        if (plVar17[lVar18 * 8 + 2] == 0) {
                          pcVar6 = (code *)((long)plVar17 + lVar18 * 0x40 + 0x19);
                          pcVar10 = (code *)(ulong)*(byte *)(plVar17 + lVar18 * 8 + 3);
                        }
                        else {
                          pcVar10 = (code *)plVar17[lVar18 * 8 + 3];
                          pcVar6 = (code *)plVar17[lVar18 * 8 + 4];
                        }
                        if ((pcVar10 == param_3) &&
                           (pcVar7 = param_2, pcVar8 = param_3, _memcmp(pcVar6,param_2),
                           (int)pcVar6 == 0)) {
                          if (bVar3) {
                            *(long **)((long)register0x00000008 + -0xa0) = plVar19;
                            *(ulong *)((long)register0x00000008 + -0x98) = uVar13;
                            *(char **)((long)register0x00000008 + -0xd0) = ",";
                            *(undefined8 *)((long)register0x00000008 + -200) = 1;
                            if (plVar17[lVar18 * 8 + 6] == 0) {
                              lVar20 = (long)plVar17 + lVar18 * 0x40 + 0x39;
                              uVar13 = (ulong)*(byte *)(plVar17 + lVar18 * 8 + 7);
                            }
                            else {
                              uVar13 = plVar17[lVar18 * 8 + 7];
                              lVar20 = plVar17[lVar18 * 8 + 8];
                            }
                            *(long *)((long)register0x00000008 + -0x100) = lVar20;
                            *(ulong *)((long)register0x00000008 + -0xf8) = uVar13;
                            pcVar6 = (code *)((long)register0x00000008 + -0xa0);
                            pcVar7 = (code *)((long)register0x00000008 + -0xd0);
                            pcVar8 = (code *)((long)register0x00000008 + -0x100);
                            FUN_00575ddc((undefined1 *)((long)register0x00000008 + -0x118),pcVar6,
                                         pcVar7);
                            if (*(char *)((long)plVar1 + 0x17) < '\0') {
                              pcVar6 = (code *)*plVar1;
                              __ZdlPv();
                            }
                            uVar11 = *(ulong *)((long)register0x00000008 + -0x108);
                            plVar1[2] = uVar11;
                            lVar20 = *(long *)((long)register0x00000008 + -0x118);
                            plVar1[1] = *(long *)((long)register0x00000008 + -0x110);
                            *plVar1 = lVar20;
                            uVar13 = plVar1[1];
                            plVar19 = (long *)*plVar1;
                            if (-1 < (long)uVar11) {
                              uVar13 = uVar11 >> 0x38;
                              plVar19 = plVar1;
                            }
                            *param_1 = (long)plVar19;
                            param_1[1] = uVar13;
                          }
                          else {
                            if (plVar17[lVar18 * 8 + 6] == 0) {
                              plVar19 = (long *)((long)plVar17 + lVar18 * 0x40 + 0x39);
                              uVar13 = (ulong)*(byte *)(plVar17 + lVar18 * 8 + 7);
                            }
                            else {
                              uVar13 = plVar17[lVar18 * 8 + 7];
                              plVar19 = (long *)plVar17[lVar18 * 8 + 8];
                            }
                            *param_1 = (long)plVar19;
                            param_1[1] = uVar13;
                            bVar3 = true;
                            *(undefined1 *)(param_1 + 2) = 1;
                          }
                        }
                        lVar18 = lVar18 + 1;
                        do {
                          if (lVar18 != plVar17[1]) goto LAB_003fe6e4;
                          lVar18 = 0;
                          plVar17 = (long *)*plVar17;
                        } while (plVar17 != (long *)0x0);
                        lVar18 = 0;
LAB_003fe6e4:
                      } while ((plVar17 != (long *)0x0) || (lVar18 != 0));
                    }
                    if (*(long *)PTR____stack_chk_guard_00999f88 ==
                        *(long *)((long)register0x00000008 + -0x70)) {
                      return pcVar6;
                    }
                    ___stack_chk_fail();
                    __Unwind_Resume();
                    *(undefined1 **)((long)register0x00000008 + -0x130) =
                         (undefined1 *)((long)register0x00000008 + -0x10);
                    *(undefined8 *)((long)register0x00000008 + -0x128) = 0x3fe72c;
                    if (*(long *)pcVar6 == 0) {
                      pcVar10 = pcVar6 + 9;
                      uVar13 = (ulong)(byte)pcVar6[8];
                    }
                    else {
                      uVar13 = *(ulong *)(pcVar6 + 8);
                      pcVar10 = *(code **)(pcVar6 + 0x10);
                    }
                    if (uVar13 == 0x10) {
                      if (*(long *)pcVar10 == 0x746163696c707061 &&
                          *(long *)(pcVar10 + 8) == 0x637072672f6e6f69) {
                        return (code *)0x0;
                      }
                    }
                    else if (uVar13 < 0x11) {
                      if (uVar13 == 0) {
                        return (code *)((long)&MACH_HEADER.magic + 1);
                      }
                    }
                    else {
                      if ((*(long *)pcVar10 == 0x746163696c707061 &&
                          *(long *)(pcVar10 + 8) == 0x637072672f6e6f69) &&
                          pcVar10[0x10] == (code)0x3b) {
                        return (code *)0x0;
                      }
                      if ((*(long *)pcVar10 == 0x746163696c707061 &&
                          *(long *)(pcVar10 + 8) == 0x637072672f6e6f69) &&
                          pcVar10[0x10] == (code)0x2b) {
                        return (code *)0x0;
                      }
                    }
                    (*pcVar8)(pcVar7,"invalid value",0xd);
                    return (code *)((long)&MACH_HEADER.magic + 2);
                  }
                  ppcVar4 = &pcStack_80;
                  ppcVar16 = &pcStack_80;
                  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
                  if ((*(byte *)(*(long *)param_4 + 1) >> 5 & 1) == 0) {
                    uVar9 = 0;
                    *(undefined1 *)param_1 = 0;
                  }
                  else {
                    FUN_0034eb70(&pcStack_68,*(undefined8 *)(*(long *)param_4 + 0x170));
                    if (pcStack_68 == (code *)0x0) {
                      uVar13 = (ulong)bStack_60;
                      puVar15 = &uStack_5f;
                    }
                    else {
                      uVar13 = CONCAT71(uStack_5f,bStack_60);
                      puVar15 = puStack_58;
                      if (0x7ffffffffffffff7 < uVar13) goto LAB_003525f4;
                    }
                    if (uVar13 < 0x17) {
                      uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
                      if (uVar13 != 0) goto LAB_00352530;
                    }
                    else {
                      uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
                      if ((uVar13 | 7) != 0x17) {
                        uVar11 = uVar13 | 7;
                      }
                      ppcVar4 = (code **)(uVar11 + 1);
                      __Znwm();
                      uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
                      pcStack_80 = (code *)ppcVar4;
                      uStack_78 = uVar13;
LAB_00352530:
                      _memmove(ppcVar4,puVar15,uVar13);
                      ppcVar16 = ppcVar4;
                    }
                    *(code *)((long)ppcVar16 + uVar13) = (code)0x0;
                    puVar12 = *(undefined8 **)(param_4 + 8);
                    if (*(char *)((long)puVar12 + 0x17) < '\0') {
                      __ZdlPv(*puVar12);
                    }
                    puVar12[2] = uStack_70;
                    puVar12[1] = uStack_78;
                    *puVar12 = pcStack_80;
                    uStack_70 = uStack_70 & 0xffffffffffffff;
                    pcStack_80 = (code *)((ulong)pcStack_80 & 0xffffffffffffff00);
                    if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
                      do {
                        lVar18 = *(long *)pcStack_68;
                        cVar2 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
                        if (bVar3) {
                          *(long *)pcStack_68 = lVar18 + -1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                      if (lVar18 + -1 == 0) {
                        (**(code **)(pcStack_68 + 8))();
                      }
                    }
                    plVar17 = *(long **)(param_4 + 8);
                    uVar13 = plVar17[1];
                    plVar1 = (long *)*plVar17;
                    if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
                      uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
                      plVar1 = plVar17;
                    }
                    *param_1 = (long)plVar1;
                    param_1[1] = uVar13;
                    uVar9 = 1;
                    param_4 = pcStack_68;
                  }
                  *(undefined1 *)(param_1 + 2) = uVar9;
                  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
                    return param_4;
                  }
                  ___stack_chk_fail();
LAB_003525f4:
                  func_0x0033b318(&pcStack_80);
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x352600);
                  (*pcVar6)();
                }
                ppcVar4 = &pcStack_80;
                ppcVar16 = &pcStack_80;
                lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
                if ((*(byte *)(*(long *)param_4 + 1) >> 4 & 1) == 0) {
                  uVar9 = 0;
                  *(undefined1 *)param_1 = 0;
                }
                else {
                  FUN_0034eb70(&pcStack_68,*(undefined4 *)(*(long *)param_4 + 0x178));
                  if (pcStack_68 == (code *)0x0) {
                    uVar13 = (ulong)bStack_60;
                    puVar15 = &uStack_5f;
                  }
                  else {
                    uVar13 = CONCAT71(uStack_5f,bStack_60);
                    puVar15 = puStack_58;
                    if (0x7ffffffffffffff7 < uVar13) goto LAB_003523d4;
                  }
                  if (uVar13 < 0x17) {
                    uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
                    if (uVar13 != 0) goto LAB_00352310;
                  }
                  else {
                    uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
                    if ((uVar13 | 7) != 0x17) {
                      uVar11 = uVar13 | 7;
                    }
                    ppcVar4 = (code **)(uVar11 + 1);
                    __Znwm();
                    uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
                    pcStack_80 = (code *)ppcVar4;
                    uStack_78 = uVar13;
LAB_00352310:
                    _memmove(ppcVar4,puVar15,uVar13);
                    ppcVar16 = ppcVar4;
                  }
                  *(code *)((long)ppcVar16 + uVar13) = (code)0x0;
                  puVar12 = *(undefined8 **)(param_4 + 8);
                  if (*(char *)((long)puVar12 + 0x17) < '\0') {
                    __ZdlPv(*puVar12);
                  }
                  puVar12[2] = uStack_70;
                  puVar12[1] = uStack_78;
                  *puVar12 = pcStack_80;
                  uStack_70 = uStack_70 & 0xffffffffffffff;
                  pcStack_80 = (code *)((ulong)pcStack_80 & 0xffffffffffffff00);
                  if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
                    do {
                      lVar18 = *(long *)pcStack_68;
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
                      if (bVar3) {
                        *(long *)pcStack_68 = lVar18 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                    if (lVar18 + -1 == 0) {
                      (**(code **)(pcStack_68 + 8))();
                    }
                  }
                  plVar17 = *(long **)(param_4 + 8);
                  uVar13 = plVar17[1];
                  plVar1 = (long *)*plVar17;
                  if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
                    uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
                    plVar1 = plVar17;
                  }
                  *param_1 = (long)plVar1;
                  param_1[1] = uVar13;
                  uVar9 = 1;
                  param_4 = pcStack_68;
                }
                *(undefined1 *)(param_1 + 2) = uVar9;
                if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
                  return param_4;
                }
                ___stack_chk_fail();
LAB_003523d4:
                func_0x0033b318(&pcStack_80);
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x3523e0);
                (*pcVar6)();
              }
              ppcVar4 = &pcStack_80;
              ppcVar16 = &pcStack_80;
              lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
              if ((*(byte *)(*(long *)param_4 + 1) >> 3 & 1) == 0) {
                uVar9 = 0;
                *(undefined1 *)param_1 = 0;
              }
              else {
                func_0x003fe980(&pcStack_68,*(undefined8 *)(*(long *)param_4 + 0x180));
                if (pcStack_68 == (code *)0x0) {
                  uVar13 = (ulong)bStack_60;
                  puVar15 = &uStack_5f;
                }
                else {
                  uVar13 = CONCAT71(uStack_5f,bStack_60);
                  puVar15 = puStack_58;
                  if (0x7ffffffffffffff7 < uVar13) goto LAB_003521a8;
                }
                if (uVar13 < 0x17) {
                  uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
                  if (uVar13 != 0) goto LAB_003520e4;
                }
                else {
                  uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
                  if ((uVar13 | 7) != 0x17) {
                    uVar11 = uVar13 | 7;
                  }
                  ppcVar4 = (code **)(uVar11 + 1);
                  __Znwm();
                  uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
                  pcStack_80 = (code *)ppcVar4;
                  uStack_78 = uVar13;
LAB_003520e4:
                  _memmove(ppcVar4,puVar15,uVar13);
                  ppcVar16 = ppcVar4;
                }
                *(code *)((long)ppcVar16 + uVar13) = (code)0x0;
                puVar12 = *(undefined8 **)(param_4 + 8);
                if (*(char *)((long)puVar12 + 0x17) < '\0') {
                  __ZdlPv(*puVar12);
                }
                puVar12[2] = uStack_70;
                puVar12[1] = uStack_78;
                *puVar12 = pcStack_80;
                uStack_70 = uStack_70 & 0xffffffffffffff;
                pcStack_80 = (code *)((ulong)pcStack_80 & 0xffffffffffffff00);
                if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
                  do {
                    lVar18 = *(long *)pcStack_68;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
                    if (bVar3) {
                      *(long *)pcStack_68 = lVar18 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (lVar18 + -1 == 0) {
                    (**(code **)(pcStack_68 + 8))();
                  }
                }
                plVar17 = *(long **)(param_4 + 8);
                uVar13 = plVar17[1];
                plVar1 = (long *)*plVar17;
                if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
                  uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
                  plVar1 = plVar17;
                }
                *param_1 = (long)plVar1;
                param_1[1] = uVar13;
                uVar9 = 1;
                param_4 = pcStack_68;
              }
              *(undefined1 *)(param_1 + 2) = uVar9;
              if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
                return param_4;
              }
              ___stack_chk_fail();
LAB_003521a8:
              func_0x0033b318(&pcStack_80);
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x3521b4);
              (*pcVar6)();
            }
            ppcVar4 = &pcStack_80;
            ppcVar16 = &pcStack_80;
            lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
            if ((*(byte *)(*(long *)param_4 + 1) >> 2 & 1) == 0) {
              uVar9 = 0;
              *(undefined1 *)param_1 = 0;
            }
            else {
              FUN_0034eb70(&pcStack_68,(long)*(int *)(*(long *)param_4 + 0x188));
              if (pcStack_68 == (code *)0x0) {
                uVar13 = (ulong)bStack_60;
                puVar15 = &uStack_5f;
              }
              else {
                uVar13 = CONCAT71(uStack_5f,bStack_60);
                puVar15 = puStack_58;
                if (0x7ffffffffffffff7 < uVar13) goto LAB_00351fa4;
              }
              if (uVar13 < 0x17) {
                uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
                if (uVar13 != 0) goto LAB_00351ee0;
              }
              else {
                uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
                if ((uVar13 | 7) != 0x17) {
                  uVar11 = uVar13 | 7;
                }
                ppcVar4 = (code **)(uVar11 + 1);
                __Znwm();
                uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
                pcStack_80 = (code *)ppcVar4;
                uStack_78 = uVar13;
LAB_00351ee0:
                _memmove(ppcVar4,puVar15,uVar13);
                ppcVar16 = ppcVar4;
              }
              *(code *)((long)ppcVar16 + uVar13) = (code)0x0;
              puVar12 = *(undefined8 **)(param_4 + 8);
              if (*(char *)((long)puVar12 + 0x17) < '\0') {
                __ZdlPv(*puVar12);
              }
              puVar12[2] = uStack_70;
              puVar12[1] = uStack_78;
              *puVar12 = pcStack_80;
              uStack_70 = uStack_70 & 0xffffffffffffff;
              pcStack_80 = (code *)((ulong)pcStack_80 & 0xffffffffffffff00);
              if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
                do {
                  lVar18 = *(long *)pcStack_68;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
                  if (bVar3) {
                    *(long *)pcStack_68 = lVar18 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (lVar18 + -1 == 0) {
                  (**(code **)(pcStack_68 + 8))();
                }
              }
              plVar17 = *(long **)(param_4 + 8);
              uVar13 = plVar17[1];
              plVar1 = (long *)*plVar17;
              if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
                uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
                plVar1 = plVar17;
              }
              *param_1 = (long)plVar1;
              param_1[1] = uVar13;
              uVar9 = 1;
              param_4 = pcStack_68;
            }
            *(undefined1 *)(param_1 + 2) = uVar9;
            if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
              return param_4;
            }
            ___stack_chk_fail();
LAB_00351fa4:
            func_0x0033b318(&pcStack_80);
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x351fb0);
            (*pcVar6)();
          }
          lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
          if ((*(byte *)(*(long *)param_4 + 1) >> 1 & 1) == 0) {
            uVar9 = 0;
            *(undefined1 *)param_1 = 0;
          }
          else {
            uStack_70 = CONCAT17(*(undefined1 *)(*(long *)param_4 + 0x18c),(undefined7)uStack_70);
            func_0x003b095c(&pcStack_68,(long)&uStack_70 + 7);
            if (pcStack_68 == (code *)0x0) {
              pcVar6 = (code *)(ulong)bStack_60;
              puVar15 = &uStack_5f;
            }
            else {
              pcVar6 = (code *)CONCAT71(uStack_5f,bStack_60);
              puVar15 = puStack_58;
              if ((code *)0x7ffffffffffffff7 < pcVar6) goto LAB_00351d98;
            }
            if ((code *)((long)&MACH_HEADER.sizeofcmds + 2) < pcVar6) {
              uVar13 = ((ulong)pcVar6 & 0x7ffffffffffffff8) + 8;
              if (((ulong)pcVar6 | 7) != 0x17) {
                uVar13 = (ulong)pcVar6 | 7;
              }
              pppppppuVar5 = (undefined8 *******)(uVar13 + 1);
              __Znwm();
              uStack_78 = uVar13 + 1 | 0x8000000000000000;
              pppppppuStack_88 = pppppppuVar5;
              pcStack_80 = pcVar6;
LAB_00351cd4:
              _memmove(pppppppuVar5,puVar15,pcVar6);
            }
            else {
              uStack_78 = CONCAT17((char)pcVar6,(undefined7)uStack_78);
              pppppppuVar5 = &pppppppuStack_88;
              if (pcVar6 != (code *)0x0) goto LAB_00351cd4;
            }
            *(code *)((long)pppppppuVar5 + (long)pcVar6) = (code)0x0;
            puVar12 = *(undefined8 **)(param_4 + 8);
            if (*(char *)((long)puVar12 + 0x17) < '\0') {
              __ZdlPv(*puVar12);
            }
            puVar12[2] = uStack_78;
            puVar12[1] = pcStack_80;
            *puVar12 = pppppppuStack_88;
            uStack_78 = uStack_78 & 0xffffffffffffff;
            pppppppuStack_88 = (undefined8 *******)((ulong)pppppppuStack_88 & 0xffffffffffffff00);
            if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
              do {
                lVar18 = *(long *)pcStack_68;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
                if (bVar3) {
                  *(long *)pcStack_68 = lVar18 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar18 + -1 == 0) {
                (**(code **)(pcStack_68 + 8))();
              }
            }
            plVar17 = *(long **)(param_4 + 8);
            uVar13 = plVar17[1];
            plVar1 = (long *)*plVar17;
            if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
              uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
              plVar1 = plVar17;
            }
            *param_1 = (long)plVar1;
            param_1[1] = uVar13;
            uVar9 = 1;
            param_4 = pcStack_68;
          }
          *(undefined1 *)(param_1 + 2) = uVar9;
          if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
            return param_4;
          }
          ___stack_chk_fail();
LAB_00351d98:
          func_0x0033b318(&pppppppuStack_88);
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x351da4);
          (*pcVar6)();
        }
        ppcVar4 = &pcStack_80;
        ppcVar16 = &pcStack_80;
        lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
        if ((*(byte *)(*(long *)param_4 + 1) & 1) == 0) {
          uVar9 = 0;
          *(undefined1 *)param_1 = 0;
        }
        else {
          FUN_0034f290(&pcStack_68,*(undefined4 *)(*(long *)param_4 + 400));
          if (pcStack_68 == (code *)0x0) {
            uVar13 = (ulong)bStack_60;
            puVar15 = &uStack_5f;
          }
          else {
            uVar13 = CONCAT71(uStack_5f,bStack_60);
            puVar15 = puStack_58;
            if (0x7ffffffffffffff7 < uVar13) goto LAB_00351b78;
          }
          if (uVar13 < 0x17) {
            uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
            if (uVar13 != 0) goto LAB_00351ab4;
          }
          else {
            uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
            if ((uVar13 | 7) != 0x17) {
              uVar11 = uVar13 | 7;
            }
            ppcVar4 = (code **)(uVar11 + 1);
            __Znwm();
            uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
            pcStack_80 = (code *)ppcVar4;
            uStack_78 = uVar13;
LAB_00351ab4:
            _memmove(ppcVar4,puVar15,uVar13);
            ppcVar16 = ppcVar4;
          }
          *(code *)((long)ppcVar16 + uVar13) = (code)0x0;
          puVar12 = *(undefined8 **)(param_4 + 8);
          if (*(char *)((long)puVar12 + 0x17) < '\0') {
            __ZdlPv(*puVar12);
          }
          puVar12[2] = uStack_70;
          puVar12[1] = uStack_78;
          *puVar12 = pcStack_80;
          uStack_70 = uStack_70 & 0xffffffffffffff;
          pcStack_80 = (code *)((ulong)pcStack_80 & 0xffffffffffffff00);
          if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
            do {
              lVar18 = *(long *)pcStack_68;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
              if (bVar3) {
                *(long *)pcStack_68 = lVar18 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar18 + -1 == 0) {
              (**(code **)(pcStack_68 + 8))();
            }
          }
          plVar17 = *(long **)(param_4 + 8);
          uVar13 = plVar17[1];
          plVar1 = (long *)*plVar17;
          if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
            uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
            plVar1 = plVar17;
          }
          *param_1 = (long)plVar1;
          param_1[1] = uVar13;
          uVar9 = 1;
          param_4 = pcStack_68;
        }
        *(undefined1 *)(param_1 + 2) = uVar9;
        if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
          return param_4;
        }
        ___stack_chk_fail();
LAB_00351b78:
        func_0x0033b318(&pcStack_80);
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x351b84);
        (*pcVar6)();
      }
      ppcVar4 = &pcStack_80;
      ppcVar16 = &pcStack_80;
      lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
      if (**(char **)param_4 < '\0') {
        FUN_0034f290(&pcStack_68,*(undefined4 *)(*(char **)param_4 + 0x194));
        if (pcStack_68 == (code *)0x0) {
          uVar13 = (ulong)bStack_60;
          puVar15 = &uStack_5f;
        }
        else {
          uVar13 = CONCAT71(uStack_5f,bStack_60);
          puVar15 = puStack_58;
          if (0x7ffffffffffffff7 < uVar13) goto LAB_00351940;
        }
        if (uVar13 < 0x17) {
          uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
          if (uVar13 != 0) goto LAB_0035187c;
        }
        else {
          uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
          if ((uVar13 | 7) != 0x17) {
            uVar11 = uVar13 | 7;
          }
          ppcVar4 = (code **)(uVar11 + 1);
          __Znwm();
          uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
          pcStack_80 = (code *)ppcVar4;
          uStack_78 = uVar13;
LAB_0035187c:
          _memmove(ppcVar4,puVar15,uVar13);
          ppcVar16 = ppcVar4;
        }
        *(code *)((long)ppcVar16 + uVar13) = (code)0x0;
        puVar12 = *(undefined8 **)(param_4 + 8);
        if (*(char *)((long)puVar12 + 0x17) < '\0') {
          __ZdlPv(*puVar12);
        }
        puVar12[2] = uStack_70;
        puVar12[1] = uStack_78;
        *puVar12 = pcStack_80;
        uStack_70 = uStack_70 & 0xffffffffffffff;
        pcStack_80 = (code *)((ulong)pcStack_80 & 0xffffffffffffff00);
        if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
          do {
            lVar18 = *(long *)pcStack_68;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
            if (bVar3) {
              *(long *)pcStack_68 = lVar18 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar18 + -1 == 0) {
            (**(code **)(pcStack_68 + 8))();
          }
        }
        plVar17 = *(long **)(param_4 + 8);
        uVar13 = plVar17[1];
        plVar1 = (long *)*plVar17;
        if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
          uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
          plVar1 = plVar17;
        }
        *param_1 = (long)plVar1;
        param_1[1] = uVar13;
        uVar9 = 1;
        param_4 = pcStack_68;
      }
      else {
        uVar9 = 0;
        *(undefined1 *)param_1 = 0;
      }
      *(undefined1 *)(param_1 + 2) = uVar9;
      if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
        return param_4;
      }
      ___stack_chk_fail();
LAB_00351940:
      func_0x0033b318(&pcStack_80);
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x35194c);
      (*pcVar6)();
    }
    ppcVar4 = &pcStack_80;
    ppcVar16 = &pcStack_80;
    lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
    if ((**(byte **)param_4 >> 6 & 1) == 0) {
      uVar9 = 0;
      *(undefined1 *)param_1 = 0;
      pcVar6 = param_4;
    }
    else {
      pcVar6 = (code *)(ulong)(*(byte **)param_4)[0x198];
      FUN_0034f090(&pcStack_68,pcVar6);
      if (pcStack_68 == (code *)0x0) {
        uVar13 = (ulong)bStack_60;
        puVar15 = &uStack_5f;
      }
      else {
        uVar13 = CONCAT71(uStack_5f,bStack_60);
        puVar15 = puStack_58;
        if (0x7ffffffffffffff7 < uVar13) goto LAB_0035175c;
      }
      if (uVar13 < 0x17) {
        uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
        if (uVar13 != 0) goto LAB_003516c8;
      }
      else {
        uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
        if ((uVar13 | 7) != 0x17) {
          uVar11 = uVar13 | 7;
        }
        ppcVar4 = (code **)(uVar11 + 1);
        __Znwm();
        uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
        pcStack_80 = (code *)ppcVar4;
        uStack_78 = uVar13;
LAB_003516c8:
        pcVar6 = (code *)ppcVar4;
        _memmove(ppcVar4,puVar15,uVar13);
        ppcVar16 = ppcVar4;
      }
      *(code *)((long)ppcVar16 + uVar13) = (code)0x0;
      puVar14 = *(ulong **)(param_4 + 8);
      if (*(char *)((long)puVar14 + 0x17) < '\0') {
        pcVar6 = (code *)*puVar14;
        __ZdlPv(pcVar6);
      }
      puVar14[2] = uStack_70;
      puVar14[1] = uStack_78;
      *puVar14 = (ulong)pcStack_80;
      plVar17 = *(long **)(param_4 + 8);
      uVar13 = plVar17[1];
      plVar1 = (long *)*plVar17;
      if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
        uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
        plVar1 = plVar17;
      }
      *param_1 = (long)plVar1;
      param_1[1] = uVar13;
      uVar9 = 1;
    }
    *(undefined1 *)(param_1 + 2) = uVar9;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
      return pcVar6;
    }
    ___stack_chk_fail();
LAB_0035175c:
    func_0x0033b318(&pcStack_80);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x351768);
    (*pcVar6)();
  }
  ppcVar4 = &pcStack_80;
  ppcVar16 = &pcStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  if ((**(byte **)param_4 >> 5 & 1) == 0) {
    uVar9 = 0;
    *(undefined1 *)param_1 = 0;
    pcVar6 = param_4;
  }
  else {
    pcVar6 = (code *)(ulong)*(uint *)(*(byte **)param_4 + 0x19c);
    func_0x003fe828(&pcStack_68,pcVar6);
    if (pcStack_68 == (code *)0x0) {
      uVar13 = (ulong)bStack_60;
      puVar15 = &uStack_5f;
    }
    else {
      uVar13 = CONCAT71(uStack_5f,bStack_60);
      puVar15 = puStack_58;
      if (0x7ffffffffffffff7 < uVar13) goto LAB_003515cc;
    }
    if (uVar13 < 0x17) {
      uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
      if (uVar13 != 0) goto LAB_00351538;
    }
    else {
      uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
      if ((uVar13 | 7) != 0x17) {
        uVar11 = uVar13 | 7;
      }
      ppcVar4 = (code **)(uVar11 + 1);
      __Znwm();
      uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
      pcStack_80 = (code *)ppcVar4;
      uStack_78 = uVar13;
LAB_00351538:
      pcVar6 = (code *)ppcVar4;
      _memmove(ppcVar4,puVar15,uVar13);
      ppcVar16 = ppcVar4;
    }
    *(code *)((long)ppcVar16 + uVar13) = (code)0x0;
    puVar14 = *(ulong **)(param_4 + 8);
    if (*(char *)((long)puVar14 + 0x17) < '\0') {
      pcVar6 = (code *)*puVar14;
      __ZdlPv(pcVar6);
    }
    puVar14[2] = uStack_70;
    puVar14[1] = uStack_78;
    *puVar14 = (ulong)pcStack_80;
    plVar17 = *(long **)(param_4 + 8);
    uVar13 = plVar17[1];
    plVar1 = (long *)*plVar17;
    if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
      uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
      plVar1 = plVar17;
    }
    *param_1 = (long)plVar1;
    param_1[1] = uVar13;
    uVar9 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar9;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return pcVar6;
  }
  ___stack_chk_fail();
LAB_003515cc:
  func_0x0033b318(&pcStack_80);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x3515d8);
  (*pcVar6)();
}



/* Entry: 00351470; end: 003515db;  */

void FUN_00351470(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 **ppuVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined7 *puVar8;
  undefined1 **ppuVar9;
  undefined1 *puStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  ppuVar3 = &puStack_80;
  ppuVar9 = &puStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  if ((*(byte *)*param_2 >> 5 & 1) == 0) {
    uVar4 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    func_0x003fe828(&lStack_68,*(undefined4 *)((byte *)*param_2 + 0x19c));
    if (lStack_68 == 0) {
      uVar6 = (ulong)bStack_60;
      puVar8 = &uStack_5f;
    }
    else {
      uVar6 = CONCAT71(uStack_5f,bStack_60);
      puVar8 = puStack_58;
      if (0x7ffffffffffffff7 < uVar6) goto LAB_003515cc;
    }
    if (uVar6 < 0x17) {
      uStack_70 = CONCAT17((char)uVar6,(undefined7)uStack_70);
      if (uVar6 != 0) goto LAB_00351538;
    }
    else {
      uVar1 = (uVar6 & 0x7ffffffffffffff8) + 8;
      if ((uVar6 | 7) != 0x17) {
        uVar1 = uVar6 | 7;
      }
      ppuVar3 = (undefined1 **)(uVar1 + 1);
      __Znwm();
      uStack_70 = (ulong)(uVar1 + 1) | 0x8000000000000000;
      puStack_80 = (undefined1 *)ppuVar3;
      uStack_78 = uVar6;
LAB_00351538:
      _memmove(ppuVar3,puVar8,uVar6);
      ppuVar9 = ppuVar3;
    }
    *(undefined1 *)((long)ppuVar9 + uVar6) = 0;
    puVar7 = (undefined8 *)param_2[1];
    if (*(char *)((long)puVar7 + 0x17) < '\0') {
      __ZdlPv(*puVar7);
    }
    puVar7[2] = uStack_70;
    puVar7[1] = uStack_78;
    *puVar7 = puStack_80;
    puVar5 = (undefined8 *)param_2[1];
    uVar6 = puVar5[1];
    puVar7 = (undefined8 *)*puVar5;
    if (-1 < (char)*(byte *)((long)puVar5 + 0x17)) {
      uVar6 = (ulong)*(byte *)((long)puVar5 + 0x17);
      puVar7 = puVar5;
    }
    *param_1 = puVar7;
    param_1[1] = uVar6;
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar4;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_003515cc:
  func_0x0033b318(&puStack_80);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x3515d8);
  (*pcVar2)();
}



/* Entry: 003515dc; end: 003515ff;  */

/* WARNING: Type propagation algorithm not settling */

code * FUN_003515dc(long *param_1,code *param_2,code *param_3,code *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code **ppcVar4;
  undefined8 *******pppppppuVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  undefined1 uVar9;
  long *extraout_x8;
  long *extraout_x8_00;
  code *pcVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  code *unaff_x19;
  code *unaff_x20;
  undefined8 *unaff_x21;
  ulong *puVar14;
  undefined8 *unaff_x22;
  undefined7 *puVar15;
  code *unaff_x23;
  code **ppcVar16;
  long *plVar17;
  undefined8 unaff_x24;
  long lVar18;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long *plVar19;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar20;
  undefined8 *******pppppppuStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  if ((param_3 != (code *)((long)&MACH_HEADER.magic + 2)) || (*(short *)param_2 != 0x6574)) {
    if ((param_3 != (code *)((long)&MACH_HEADER.filetype + 1)) ||
       (*(long *)param_2 != 0x636e652d63707267 || *(long *)(param_2 + 5) != 0x676e69646f636e65)) {
      if ((param_3 != (code *)((long)&MACH_HEADER.reserved + 2)) ||
         (((*(long *)param_2 != 0x746e692d63707267 || *(long *)(param_2 + 8) != 0x6e652d6c616e7265)
          || *(long *)(param_2 + 0x10) != 0x722d676e69646f63) ||
          *(long *)(param_2 + 0x16) != 0x747365757165722d)) {
        if ((param_3 != (code *)&MACH_HEADER.sizeofcmds) ||
           ((*(long *)param_2 != 0x6363612d63707267 || *(long *)(param_2 + 8) != 0x6f636e652d747065)
            || *(int *)(param_2 + 0x10) != 0x676e6964)) {
          if ((param_3 != (code *)((long)&MACH_HEADER.cpusubtype + 3)) ||
             (*(long *)param_2 != 0x6174732d63707267 || *(long *)(param_2 + 3) != 0x7375746174732d63
             )) {
            if ((param_3 != (code *)&MACH_HEADER.filetype) ||
               (*(long *)param_2 != 0x6d69742d63707267 || *(int *)(param_2 + 8) != 0x74756f65)) {
              if ((param_3 != (code *)((long)&MACH_HEADER.flags + 2)) ||
                 (((*(long *)param_2 != 0x6572702d63707267 ||
                   *(long *)(param_2 + 8) != 0x70722d73756f6976) ||
                  *(long *)(param_2 + 0x10) != 0x706d657474612d63) ||
                  *(short *)(param_2 + 0x18) != 0x7374)) {
                if ((param_3 != (code *)((long)&MACH_HEADER.sizeofcmds + 2)) ||
                   ((*(long *)param_2 != 0x7465722d63707267 ||
                    *(long *)(param_2 + 8) != 0x62687375702d7972) ||
                    *(long *)(param_2 + 0xe) != 0x736d2d6b63616268)) {
                  if ((param_3 == (code *)((long)&MACH_HEADER.cpusubtype + 2)) &&
                     (*(long *)param_2 == 0x6567612d72657375 && *(short *)(param_2 + 8) == 0x746e))
                  {
                    lVar18 = *(long *)param_4;
                    if ((*(byte *)(lVar18 + 1) >> 6 & 1) == 0) {
                      uVar9 = 0;
                      *(undefined1 *)param_1 = 0;
                    }
                    else {
                      if (*(long *)(lVar18 + 0x150) == 0) {
                        lVar20 = lVar18 + 0x159;
                        uVar13 = (ulong)*(byte *)(lVar18 + 0x158);
                      }
                      else {
                        uVar13 = *(ulong *)(lVar18 + 0x158);
                        lVar20 = *(long *)(lVar18 + 0x160);
                      }
                      *param_1 = lVar20;
                      param_1[1] = uVar13;
                      uVar9 = 1;
                    }
                    *(undefined1 *)(param_1 + 2) = uVar9;
                    return param_4;
                  }
                  if ((param_3 == (code *)&MACH_HEADER.filetype) &&
                     (*(long *)param_2 == 0x73656d2d63707267 && *(int *)(param_2 + 8) == 0x65676173)
                     ) {
                    lVar18 = *(long *)param_4;
                    if (*(char *)(lVar18 + 1) < '\0') {
                      if (*(long *)(lVar18 + 0x130) == 0) {
                        lVar20 = lVar18 + 0x139;
                        uVar13 = (ulong)*(byte *)(lVar18 + 0x138);
                      }
                      else {
                        uVar13 = *(ulong *)(lVar18 + 0x138);
                        lVar20 = *(long *)(lVar18 + 0x140);
                      }
                      *param_1 = lVar20;
                      param_1[1] = uVar13;
                      uVar9 = 1;
                    }
                    else {
                      uVar9 = 0;
                      *(undefined1 *)param_1 = 0;
                    }
                    *(undefined1 *)(param_1 + 2) = uVar9;
                    return param_4;
                  }
                  if ((param_3 == (code *)&MACH_HEADER.cputype) && (*(int *)param_2 == 0x74736f68))
                  {
                    lVar18 = *(long *)param_4;
                    if ((*(byte *)(lVar18 + 2) & 1) == 0) {
                      uVar9 = 0;
                      *(undefined1 *)param_1 = 0;
                    }
                    else {
                      if (*(long *)(lVar18 + 0x110) == 0) {
                        lVar20 = lVar18 + 0x119;
                        uVar13 = (ulong)*(byte *)(lVar18 + 0x118);
                      }
                      else {
                        uVar13 = *(ulong *)(lVar18 + 0x118);
                        lVar20 = *(long *)(lVar18 + 0x120);
                      }
                      *param_1 = lVar20;
                      param_1[1] = uVar13;
                      uVar9 = 1;
                    }
                    *(undefined1 *)(param_1 + 2) = uVar9;
                    return param_4;
                  }
                  if ((param_3 == (code *)((long)&MACH_HEADER.flags + 1)) &&
                     (((*(long *)param_2 == 0x746e696f70646e65 &&
                       *(long *)(param_2 + 8) == 0x656d2d64616f6c2d) &&
                      *(long *)(param_2 + 0x10) == 0x69622d7363697274) &&
                      param_2[0x18] == (code)0x6e)) {
                    lVar18 = *(long *)param_4;
                    if ((*(byte *)(lVar18 + 2) >> 1 & 1) == 0) {
                      uVar9 = 0;
                      *(undefined1 *)param_1 = 0;
                    }
                    else {
                      if (*(long *)(lVar18 + 0xf0) == 0) {
                        lVar20 = lVar18 + 0xf9;
                        uVar13 = (ulong)*(byte *)(lVar18 + 0xf8);
                      }
                      else {
                        uVar13 = *(ulong *)(lVar18 + 0xf8);
                        lVar20 = *(long *)(lVar18 + 0x100);
                      }
                      *param_1 = lVar20;
                      param_1[1] = uVar13;
                      uVar9 = 1;
                    }
                    *(undefined1 *)(param_1 + 2) = uVar9;
                    return param_4;
                  }
                  if ((param_3 == (code *)((long)&MACH_HEADER.sizeofcmds + 1)) &&
                     ((*(long *)param_2 == 0x7265732d63707267 &&
                      *(long *)(param_2 + 8) == 0x746174732d726576) &&
                      *(long *)(param_2 + 0xd) == 0x6e69622d73746174)) {
                    lVar18 = *(long *)param_4;
                    if ((*(byte *)(lVar18 + 2) >> 2 & 1) == 0) {
                      uVar9 = 0;
                      *(undefined1 *)param_1 = 0;
                    }
                    else {
                      if (*(long *)(lVar18 + 0xd0) == 0) {
                        lVar20 = lVar18 + 0xd9;
                        uVar13 = (ulong)*(byte *)(lVar18 + 0xd8);
                      }
                      else {
                        uVar13 = *(ulong *)(lVar18 + 0xd8);
                        lVar20 = *(long *)(lVar18 + 0xe0);
                      }
                      *param_1 = lVar20;
                      param_1[1] = uVar13;
                      uVar9 = 1;
                    }
                    *(undefined1 *)(param_1 + 2) = uVar9;
                    return param_4;
                  }
                  if ((param_3 == (code *)((long)&MACH_HEADER.filetype + 2)) &&
                     (*(long *)param_2 == 0x6172742d63707267 &&
                      *(long *)(param_2 + 6) == 0x6e69622d65636172)) {
                    lVar18 = *(long *)param_4;
                    if ((*(byte *)(lVar18 + 2) >> 3 & 1) == 0) {
                      uVar9 = 0;
                      *(undefined1 *)param_1 = 0;
                    }
                    else {
                      if (*(long *)(lVar18 + 0xb0) == 0) {
                        lVar20 = lVar18 + 0xb9;
                        uVar13 = (ulong)*(byte *)(lVar18 + 0xb8);
                      }
                      else {
                        uVar13 = *(ulong *)(lVar18 + 0xb8);
                        lVar20 = *(long *)(lVar18 + 0xc0);
                      }
                      *param_1 = lVar20;
                      param_1[1] = uVar13;
                      uVar9 = 1;
                    }
                    *(undefined1 *)(param_1 + 2) = uVar9;
                    return param_4;
                  }
                  if ((param_3 == (code *)((long)&MACH_HEADER.filetype + 1)) &&
                     (*(long *)param_2 == 0x6761742d63707267 &&
                      *(long *)(param_2 + 5) == 0x6e69622d73676174)) {
                    lVar18 = *(long *)param_4;
                    if ((*(byte *)(lVar18 + 2) >> 4 & 1) == 0) {
                      uVar9 = 0;
                      *(undefined1 *)param_1 = 0;
                    }
                    else {
                      if (*(long *)(lVar18 + 0x90) == 0) {
                        lVar20 = lVar18 + 0x99;
                        uVar13 = (ulong)*(byte *)(lVar18 + 0x98);
                      }
                      else {
                        uVar13 = *(ulong *)(lVar18 + 0x98);
                        lVar20 = *(long *)(lVar18 + 0xa0);
                      }
                      *param_1 = lVar20;
                      param_1[1] = uVar13;
                      uVar9 = 1;
                    }
                    *(undefined1 *)(param_1 + 2) = uVar9;
                    return param_4;
                  }
                  if ((param_3 == (code *)((long)&MACH_HEADER.ncmds + 3)) &&
                     ((*(long *)param_2 == 0x635f626c63707267 &&
                      *(long *)(param_2 + 8) == 0x74735f746e65696c) &&
                      *(long *)(param_2 + 0xb) == 0x73746174735f746e)) {
                    unaff_x29 = &stack0xfffffffffffffff0;
                    if ((*(byte *)(*(long *)param_4 + 2) >> 5 & 1) == 0) {
                      *(undefined1 *)param_1 = 0;
                      *(undefined1 *)(param_1 + 2) = 0;
                      return param_4;
                    }
                    unaff_x30 = FUN_00352a68;
                    pcVar6 = param_4;
                    _abort();
                    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
                    param_2 = param_4;
                    param_4 = pcVar6;
                    param_1 = extraout_x8;
                  }
                  if ((param_3 == (code *)((long)&MACH_HEADER.cpusubtype + 3)) &&
                     (*(long *)param_2 == 0x2d74736f632d626c &&
                      *(long *)(param_2 + 3) == 0x6e69622d74736f63)) {
                    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
                    *(code **)((long)register0x00000008 + -0x38) = unaff_x23;
                    *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
                    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
                    *(code **)((long)register0x00000008 + -0x20) = unaff_x20;
                    *(code **)((long)register0x00000008 + -0x18) = unaff_x19;
                    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
                    *(code **)((long)register0x00000008 + -8) = unaff_x30;
                    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
                    *(undefined8 *)((long)register0x00000008 + -0x48) =
                         *(undefined8 *)PTR____stack_chk_guard_00999f88;
                    lVar18 = *(long *)param_4;
                    unaff_x19 = param_4;
                    pcVar6 = param_4;
                    if ((*(byte *)(lVar18 + 2) >> 6 & 1) == 0) {
                      uVar9 = 0;
                      *(undefined1 *)param_1 = 0;
                    }
                    else {
                      puVar12 = *(undefined8 **)(param_4 + 8);
                      if (*(char *)((long)puVar12 + 0x17) < '\0') {
                        *(undefined1 *)*puVar12 = 0;
                        puVar12[1] = 0;
                      }
                      else {
                        *(undefined1 *)puVar12 = 0;
                        *(undefined1 *)((long)puVar12 + 0x17) = 0;
                      }
                      uVar13 = *(ulong *)(lVar18 + 0x60);
                      unaff_x21 = (undefined8 *)(lVar18 + 0x68);
                      if ((uVar13 & 1) != 0) {
                        unaff_x21 = (undefined8 *)*unaff_x21;
                      }
                      if (1 < uVar13) {
                        unaff_x22 = unaff_x21 + (uVar13 >> 1) * 4;
                        unaff_x23 = (code *)((long)register0x00000008 + -0x5f);
                        do {
                          lVar18 = *(long *)(param_4 + 8);
                          if (*(char *)(lVar18 + 0x17) < '\0') {
                            if (*(long *)(lVar18 + 8) != 0) goto LAB_00352b64;
                          }
                          else if (*(char *)(lVar18 + 0x17) != '\0') {
LAB_00352b64:
                            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                                      (lVar18,0x2c);
                          }
                          FUN_003fee84((undefined1 *)((long)register0x00000008 + -0x68),unaff_x21);
                          uVar13 = *(ulong *)((long)register0x00000008 + -0x60) & 0xff;
                          param_3 = unaff_x23;
                          if (*(long *)((long)register0x00000008 + -0x68) != 0) {
                            uVar13 = *(ulong *)((long)register0x00000008 + -0x60);
                            param_3 = *(code **)((long)register0x00000008 + -0x58);
                          }
                          pcVar6 = param_3 + uVar13;
                          FUN_00352c98(*(long *)(param_4 + 8));
                          unaff_x19 = *(code **)((long)register0x00000008 + -0x68);
                          if ((code *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
                            do {
                              lVar18 = *(long *)unaff_x19;
                              cVar2 = '\x01';
                              bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
                              if (bVar3) {
                                *(long *)unaff_x19 = lVar18 + -1;
                                cVar2 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar2 != '\0');
                            if (lVar18 + -1 == 0) {
                              (**(code **)(unaff_x19 + 8))();
                            }
                          }
                          unaff_x21 = unaff_x21 + 4;
                        } while (unaff_x21 != unaff_x22);
                      }
                      plVar17 = *(long **)(param_4 + 8);
                      uVar13 = plVar17[1];
                      plVar1 = (long *)*plVar17;
                      if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
                        uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
                        plVar1 = plVar17;
                      }
                      *param_1 = (long)plVar1;
                      param_1[1] = uVar13;
                      uVar9 = 1;
                      unaff_x20 = param_4;
                    }
                    *(undefined1 *)(param_1 + 2) = uVar9;
                    if (*(long *)PTR____stack_chk_guard_00999f88 ==
                        *(long *)((long)register0x00000008 + -0x48)) {
                      return unaff_x19;
                    }
                    ___stack_chk_fail();
                    param_4 = pcVar6;
                    if ((int)param_3 != 0) {
                      func_0x0040cf10();
                      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x68));
                      param_4 = pcVar6;
                    }
                    unaff_x30 = FUN_00352c58;
                    param_2 = unaff_x19;
                    __Unwind_Resume();
                    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
                    param_1 = extraout_x8_00;
                  }
                  if ((param_3 == (code *)&MACH_HEADER.cpusubtype) &&
                     (*(long *)param_2 == 0x6e656b6f742d626c)) {
                    lVar18 = *(long *)param_4;
                    if (*(char *)(lVar18 + 2) < '\0') {
                      if (*(long *)(lVar18 + 0x40) == 0) {
                        lVar20 = lVar18 + 0x49;
                        uVar13 = (ulong)*(byte *)(lVar18 + 0x48);
                      }
                      else {
                        uVar13 = *(ulong *)(lVar18 + 0x48);
                        lVar20 = *(long *)(lVar18 + 0x50);
                      }
                      *param_1 = lVar20;
                      param_1[1] = uVar13;
                      uVar9 = 1;
                    }
                    else {
                      uVar9 = 0;
                      *(undefined1 *)param_1 = 0;
                    }
                    *(undefined1 *)(param_1 + 2) = uVar9;
                    return param_4;
                  }
                  lVar18 = *(long *)param_4;
                  plVar1 = *(long **)(param_4 + 8);
                  pcVar6 = (code *)(lVar18 + 0x1f0);
                  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
                  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
                  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
                  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
                  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
                  *(code **)((long)register0x00000008 + -0x38) = unaff_x23;
                  *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
                  *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
                  *(code **)((long)register0x00000008 + -0x20) = unaff_x20;
                  *(code **)((long)register0x00000008 + -0x18) = unaff_x19;
                  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
                  *(code **)((long)register0x00000008 + -8) = unaff_x30;
                  *(undefined8 *)((long)register0x00000008 + -0x70) =
                       *(undefined8 *)PTR____stack_chk_guard_00999f88;
                  *(undefined1 *)param_1 = 0;
                  *(undefined1 *)(param_1 + 2) = 0;
                  plVar17 = *(long **)(lVar18 + 0x1f8);
                  pcVar7 = param_2;
                  pcVar8 = param_3;
                  if ((plVar17 != (long *)0x0) && (plVar17[1] != 0)) {
                    lVar18 = 0;
                    bVar3 = false;
                    plVar19 = (long *)*param_1;
                    uVar13 = param_1[1];
                    do {
                      if (plVar17[lVar18 * 8 + 2] == 0) {
                        pcVar6 = (code *)((long)plVar17 + lVar18 * 0x40 + 0x19);
                        pcVar10 = (code *)(ulong)*(byte *)(plVar17 + lVar18 * 8 + 3);
                      }
                      else {
                        pcVar10 = (code *)plVar17[lVar18 * 8 + 3];
                        pcVar6 = (code *)plVar17[lVar18 * 8 + 4];
                      }
                      if ((pcVar10 == param_3) &&
                         (pcVar7 = param_2, pcVar8 = param_3, _memcmp(pcVar6,param_2),
                         (int)pcVar6 == 0)) {
                        if (bVar3) {
                          *(long **)((long)register0x00000008 + -0xa0) = plVar19;
                          *(ulong *)((long)register0x00000008 + -0x98) = uVar13;
                          *(char **)((long)register0x00000008 + -0xd0) = ",";
                          *(undefined8 *)((long)register0x00000008 + -200) = 1;
                          if (plVar17[lVar18 * 8 + 6] == 0) {
                            lVar20 = (long)plVar17 + lVar18 * 0x40 + 0x39;
                            uVar13 = (ulong)*(byte *)(plVar17 + lVar18 * 8 + 7);
                          }
                          else {
                            uVar13 = plVar17[lVar18 * 8 + 7];
                            lVar20 = plVar17[lVar18 * 8 + 8];
                          }
                          *(long *)((long)register0x00000008 + -0x100) = lVar20;
                          *(ulong *)((long)register0x00000008 + -0xf8) = uVar13;
                          pcVar6 = (code *)((long)register0x00000008 + -0xa0);
                          pcVar7 = (code *)((long)register0x00000008 + -0xd0);
                          pcVar8 = (code *)((long)register0x00000008 + -0x100);
                          FUN_00575ddc((undefined1 *)((long)register0x00000008 + -0x118),pcVar6,
                                       pcVar7);
                          if (*(char *)((long)plVar1 + 0x17) < '\0') {
                            pcVar6 = (code *)*plVar1;
                            __ZdlPv();
                          }
                          uVar11 = *(ulong *)((long)register0x00000008 + -0x108);
                          plVar1[2] = uVar11;
                          lVar20 = *(long *)((long)register0x00000008 + -0x118);
                          plVar1[1] = *(long *)((long)register0x00000008 + -0x110);
                          *plVar1 = lVar20;
                          uVar13 = plVar1[1];
                          plVar19 = (long *)*plVar1;
                          if (-1 < (long)uVar11) {
                            uVar13 = uVar11 >> 0x38;
                            plVar19 = plVar1;
                          }
                          *param_1 = (long)plVar19;
                          param_1[1] = uVar13;
                        }
                        else {
                          if (plVar17[lVar18 * 8 + 6] == 0) {
                            plVar19 = (long *)((long)plVar17 + lVar18 * 0x40 + 0x39);
                            uVar13 = (ulong)*(byte *)(plVar17 + lVar18 * 8 + 7);
                          }
                          else {
                            uVar13 = plVar17[lVar18 * 8 + 7];
                            plVar19 = (long *)plVar17[lVar18 * 8 + 8];
                          }
                          *param_1 = (long)plVar19;
                          param_1[1] = uVar13;
                          bVar3 = true;
                          *(undefined1 *)(param_1 + 2) = 1;
                        }
                      }
                      lVar18 = lVar18 + 1;
                      do {
                        if (lVar18 != plVar17[1]) goto LAB_003fe6e4;
                        lVar18 = 0;
                        plVar17 = (long *)*plVar17;
                      } while (plVar17 != (long *)0x0);
                      lVar18 = 0;
LAB_003fe6e4:
                    } while ((plVar17 != (long *)0x0) || (lVar18 != 0));
                  }
                  if (*(long *)PTR____stack_chk_guard_00999f88 ==
                      *(long *)((long)register0x00000008 + -0x70)) {
                    return pcVar6;
                  }
                  ___stack_chk_fail();
                  __Unwind_Resume();
                  *(undefined1 **)((long)register0x00000008 + -0x130) =
                       (undefined1 *)((long)register0x00000008 + -0x10);
                  *(code **)((long)register0x00000008 + -0x128) = FUN_003fe72c;
                  if (*(long *)pcVar6 == 0) {
                    pcVar10 = pcVar6 + 9;
                    uVar13 = (ulong)(byte)pcVar6[8];
                  }
                  else {
                    uVar13 = *(ulong *)(pcVar6 + 8);
                    pcVar10 = *(code **)(pcVar6 + 0x10);
                  }
                  if (uVar13 == 0x10) {
                    if (*(long *)pcVar10 == 0x746163696c707061 &&
                        *(long *)(pcVar10 + 8) == 0x637072672f6e6f69) {
                      return (code *)0x0;
                    }
                  }
                  else if (uVar13 < 0x11) {
                    if (uVar13 == 0) {
                      return (code *)((long)&MACH_HEADER.magic + 1);
                    }
                  }
                  else {
                    if ((*(long *)pcVar10 == 0x746163696c707061 &&
                        *(long *)(pcVar10 + 8) == 0x637072672f6e6f69) && pcVar10[0x10] == (code)0x3b
                       ) {
                      return (code *)0x0;
                    }
                    if ((*(long *)pcVar10 == 0x746163696c707061 &&
                        *(long *)(pcVar10 + 8) == 0x637072672f6e6f69) && pcVar10[0x10] == (code)0x2b
                       ) {
                      return (code *)0x0;
                    }
                  }
                  (*pcVar8)(pcVar7,"invalid value",0xd);
                  return (code *)((long)&MACH_HEADER.magic + 2);
                }
                ppcVar4 = &pcStack_80;
                ppcVar16 = &pcStack_80;
                lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
                if ((*(byte *)(*(long *)param_4 + 1) >> 5 & 1) == 0) {
                  uVar9 = 0;
                  *(undefined1 *)param_1 = 0;
                }
                else {
                  FUN_0034eb70(&pcStack_68,*(undefined8 *)(*(long *)param_4 + 0x170));
                  if (pcStack_68 == (code *)0x0) {
                    uVar13 = (ulong)bStack_60;
                    puVar15 = &uStack_5f;
                  }
                  else {
                    uVar13 = CONCAT71(uStack_5f,bStack_60);
                    puVar15 = puStack_58;
                    if (0x7ffffffffffffff7 < uVar13) goto LAB_003525f4;
                  }
                  if (uVar13 < 0x17) {
                    uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
                    if (uVar13 != 0) goto LAB_00352530;
                  }
                  else {
                    uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
                    if ((uVar13 | 7) != 0x17) {
                      uVar11 = uVar13 | 7;
                    }
                    ppcVar4 = (code **)(uVar11 + 1);
                    __Znwm();
                    uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
                    pcStack_80 = (code *)ppcVar4;
                    uStack_78 = uVar13;
LAB_00352530:
                    _memmove(ppcVar4,puVar15,uVar13);
                    ppcVar16 = ppcVar4;
                  }
                  *(code *)((long)ppcVar16 + uVar13) = (code)0x0;
                  puVar12 = *(undefined8 **)(param_4 + 8);
                  if (*(char *)((long)puVar12 + 0x17) < '\0') {
                    __ZdlPv(*puVar12);
                  }
                  puVar12[2] = uStack_70;
                  puVar12[1] = uStack_78;
                  *puVar12 = pcStack_80;
                  uStack_70 = uStack_70 & 0xffffffffffffff;
                  pcStack_80 = (code *)((ulong)pcStack_80 & 0xffffffffffffff00);
                  if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
                    do {
                      lVar18 = *(long *)pcStack_68;
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
                      if (bVar3) {
                        *(long *)pcStack_68 = lVar18 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                    if (lVar18 + -1 == 0) {
                      (**(code **)(pcStack_68 + 8))();
                    }
                  }
                  plVar17 = *(long **)(param_4 + 8);
                  uVar13 = plVar17[1];
                  plVar1 = (long *)*plVar17;
                  if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
                    uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
                    plVar1 = plVar17;
                  }
                  *param_1 = (long)plVar1;
                  param_1[1] = uVar13;
                  uVar9 = 1;
                  param_4 = pcStack_68;
                }
                *(undefined1 *)(param_1 + 2) = uVar9;
                if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
                  return param_4;
                }
                ___stack_chk_fail();
LAB_003525f4:
                func_0x0033b318(&pcStack_80);
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x352600);
                (*pcVar6)();
              }
              ppcVar4 = &pcStack_80;
              ppcVar16 = &pcStack_80;
              lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
              if ((*(byte *)(*(long *)param_4 + 1) >> 4 & 1) == 0) {
                uVar9 = 0;
                *(undefined1 *)param_1 = 0;
              }
              else {
                FUN_0034eb70(&pcStack_68,*(undefined4 *)(*(long *)param_4 + 0x178));
                if (pcStack_68 == (code *)0x0) {
                  uVar13 = (ulong)bStack_60;
                  puVar15 = &uStack_5f;
                }
                else {
                  uVar13 = CONCAT71(uStack_5f,bStack_60);
                  puVar15 = puStack_58;
                  if (0x7ffffffffffffff7 < uVar13) goto LAB_003523d4;
                }
                if (uVar13 < 0x17) {
                  uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
                  if (uVar13 != 0) goto LAB_00352310;
                }
                else {
                  uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
                  if ((uVar13 | 7) != 0x17) {
                    uVar11 = uVar13 | 7;
                  }
                  ppcVar4 = (code **)(uVar11 + 1);
                  __Znwm();
                  uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
                  pcStack_80 = (code *)ppcVar4;
                  uStack_78 = uVar13;
LAB_00352310:
                  _memmove(ppcVar4,puVar15,uVar13);
                  ppcVar16 = ppcVar4;
                }
                *(code *)((long)ppcVar16 + uVar13) = (code)0x0;
                puVar12 = *(undefined8 **)(param_4 + 8);
                if (*(char *)((long)puVar12 + 0x17) < '\0') {
                  __ZdlPv(*puVar12);
                }
                puVar12[2] = uStack_70;
                puVar12[1] = uStack_78;
                *puVar12 = pcStack_80;
                uStack_70 = uStack_70 & 0xffffffffffffff;
                pcStack_80 = (code *)((ulong)pcStack_80 & 0xffffffffffffff00);
                if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
                  do {
                    lVar18 = *(long *)pcStack_68;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
                    if (bVar3) {
                      *(long *)pcStack_68 = lVar18 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (lVar18 + -1 == 0) {
                    (**(code **)(pcStack_68 + 8))();
                  }
                }
                plVar17 = *(long **)(param_4 + 8);
                uVar13 = plVar17[1];
                plVar1 = (long *)*plVar17;
                if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
                  uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
                  plVar1 = plVar17;
                }
                *param_1 = (long)plVar1;
                param_1[1] = uVar13;
                uVar9 = 1;
                param_4 = pcStack_68;
              }
              *(undefined1 *)(param_1 + 2) = uVar9;
              if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
                return param_4;
              }
              ___stack_chk_fail();
LAB_003523d4:
              func_0x0033b318(&pcStack_80);
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x3523e0);
              (*pcVar6)();
            }
            ppcVar4 = &pcStack_80;
            ppcVar16 = &pcStack_80;
            lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
            if ((*(byte *)(*(long *)param_4 + 1) >> 3 & 1) == 0) {
              uVar9 = 0;
              *(undefined1 *)param_1 = 0;
            }
            else {
              func_0x003fe980(&pcStack_68,*(undefined8 *)(*(long *)param_4 + 0x180));
              if (pcStack_68 == (code *)0x0) {
                uVar13 = (ulong)bStack_60;
                puVar15 = &uStack_5f;
              }
              else {
                uVar13 = CONCAT71(uStack_5f,bStack_60);
                puVar15 = puStack_58;
                if (0x7ffffffffffffff7 < uVar13) goto LAB_003521a8;
              }
              if (uVar13 < 0x17) {
                uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
                if (uVar13 != 0) goto LAB_003520e4;
              }
              else {
                uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
                if ((uVar13 | 7) != 0x17) {
                  uVar11 = uVar13 | 7;
                }
                ppcVar4 = (code **)(uVar11 + 1);
                __Znwm();
                uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
                pcStack_80 = (code *)ppcVar4;
                uStack_78 = uVar13;
LAB_003520e4:
                _memmove(ppcVar4,puVar15,uVar13);
                ppcVar16 = ppcVar4;
              }
              *(code *)((long)ppcVar16 + uVar13) = (code)0x0;
              puVar12 = *(undefined8 **)(param_4 + 8);
              if (*(char *)((long)puVar12 + 0x17) < '\0') {
                __ZdlPv(*puVar12);
              }
              puVar12[2] = uStack_70;
              puVar12[1] = uStack_78;
              *puVar12 = pcStack_80;
              uStack_70 = uStack_70 & 0xffffffffffffff;
              pcStack_80 = (code *)((ulong)pcStack_80 & 0xffffffffffffff00);
              if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
                do {
                  lVar18 = *(long *)pcStack_68;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
                  if (bVar3) {
                    *(long *)pcStack_68 = lVar18 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (lVar18 + -1 == 0) {
                  (**(code **)(pcStack_68 + 8))();
                }
              }
              plVar17 = *(long **)(param_4 + 8);
              uVar13 = plVar17[1];
              plVar1 = (long *)*plVar17;
              if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
                uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
                plVar1 = plVar17;
              }
              *param_1 = (long)plVar1;
              param_1[1] = uVar13;
              uVar9 = 1;
              param_4 = pcStack_68;
            }
            *(undefined1 *)(param_1 + 2) = uVar9;
            if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
              return param_4;
            }
            ___stack_chk_fail();
LAB_003521a8:
            func_0x0033b318(&pcStack_80);
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x3521b4);
            (*pcVar6)();
          }
          ppcVar4 = &pcStack_80;
          ppcVar16 = &pcStack_80;
          lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
          if ((*(byte *)(*(long *)param_4 + 1) >> 2 & 1) == 0) {
            uVar9 = 0;
            *(undefined1 *)param_1 = 0;
          }
          else {
            FUN_0034eb70(&pcStack_68,(long)*(int *)(*(long *)param_4 + 0x188));
            if (pcStack_68 == (code *)0x0) {
              uVar13 = (ulong)bStack_60;
              puVar15 = &uStack_5f;
            }
            else {
              uVar13 = CONCAT71(uStack_5f,bStack_60);
              puVar15 = puStack_58;
              if (0x7ffffffffffffff7 < uVar13) goto LAB_00351fa4;
            }
            if (uVar13 < 0x17) {
              uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
              if (uVar13 != 0) goto LAB_00351ee0;
            }
            else {
              uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
              if ((uVar13 | 7) != 0x17) {
                uVar11 = uVar13 | 7;
              }
              ppcVar4 = (code **)(uVar11 + 1);
              __Znwm();
              uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
              pcStack_80 = (code *)ppcVar4;
              uStack_78 = uVar13;
LAB_00351ee0:
              _memmove(ppcVar4,puVar15,uVar13);
              ppcVar16 = ppcVar4;
            }
            *(code *)((long)ppcVar16 + uVar13) = (code)0x0;
            puVar12 = *(undefined8 **)(param_4 + 8);
            if (*(char *)((long)puVar12 + 0x17) < '\0') {
              __ZdlPv(*puVar12);
            }
            puVar12[2] = uStack_70;
            puVar12[1] = uStack_78;
            *puVar12 = pcStack_80;
            uStack_70 = uStack_70 & 0xffffffffffffff;
            pcStack_80 = (code *)((ulong)pcStack_80 & 0xffffffffffffff00);
            if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
              do {
                lVar18 = *(long *)pcStack_68;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
                if (bVar3) {
                  *(long *)pcStack_68 = lVar18 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar18 + -1 == 0) {
                (**(code **)(pcStack_68 + 8))();
              }
            }
            plVar17 = *(long **)(param_4 + 8);
            uVar13 = plVar17[1];
            plVar1 = (long *)*plVar17;
            if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
              uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
              plVar1 = plVar17;
            }
            *param_1 = (long)plVar1;
            param_1[1] = uVar13;
            uVar9 = 1;
            param_4 = pcStack_68;
          }
          *(undefined1 *)(param_1 + 2) = uVar9;
          if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
            return param_4;
          }
          ___stack_chk_fail();
LAB_00351fa4:
          func_0x0033b318(&pcStack_80);
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x351fb0);
          (*pcVar6)();
        }
        lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
        if ((*(byte *)(*(long *)param_4 + 1) >> 1 & 1) == 0) {
          uVar9 = 0;
          *(undefined1 *)param_1 = 0;
        }
        else {
          uStack_70 = CONCAT17(*(undefined1 *)(*(long *)param_4 + 0x18c),(undefined7)uStack_70);
          func_0x003b095c(&pcStack_68,(long)&uStack_70 + 7);
          if (pcStack_68 == (code *)0x0) {
            pcVar6 = (code *)(ulong)bStack_60;
            puVar15 = &uStack_5f;
          }
          else {
            pcVar6 = (code *)CONCAT71(uStack_5f,bStack_60);
            puVar15 = puStack_58;
            if ((code *)0x7ffffffffffffff7 < pcVar6) goto LAB_00351d98;
          }
          if ((code *)((long)&MACH_HEADER.sizeofcmds + 2) < pcVar6) {
            uVar13 = ((ulong)pcVar6 & 0x7ffffffffffffff8) + 8;
            if (((ulong)pcVar6 | 7) != 0x17) {
              uVar13 = (ulong)pcVar6 | 7;
            }
            pppppppuVar5 = (undefined8 *******)(uVar13 + 1);
            __Znwm();
            uStack_78 = uVar13 + 1 | 0x8000000000000000;
            pppppppuStack_88 = pppppppuVar5;
            pcStack_80 = pcVar6;
LAB_00351cd4:
            _memmove(pppppppuVar5,puVar15,pcVar6);
          }
          else {
            uStack_78 = CONCAT17((char)pcVar6,(undefined7)uStack_78);
            pppppppuVar5 = &pppppppuStack_88;
            if (pcVar6 != (code *)0x0) goto LAB_00351cd4;
          }
          *(code *)((long)pppppppuVar5 + (long)pcVar6) = (code)0x0;
          puVar12 = *(undefined8 **)(param_4 + 8);
          if (*(char *)((long)puVar12 + 0x17) < '\0') {
            __ZdlPv(*puVar12);
          }
          puVar12[2] = uStack_78;
          puVar12[1] = pcStack_80;
          *puVar12 = pppppppuStack_88;
          uStack_78 = uStack_78 & 0xffffffffffffff;
          pppppppuStack_88 = (undefined8 *******)((ulong)pppppppuStack_88 & 0xffffffffffffff00);
          if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
            do {
              lVar18 = *(long *)pcStack_68;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
              if (bVar3) {
                *(long *)pcStack_68 = lVar18 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar18 + -1 == 0) {
              (**(code **)(pcStack_68 + 8))();
            }
          }
          plVar17 = *(long **)(param_4 + 8);
          uVar13 = plVar17[1];
          plVar1 = (long *)*plVar17;
          if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
            uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
            plVar1 = plVar17;
          }
          *param_1 = (long)plVar1;
          param_1[1] = uVar13;
          uVar9 = 1;
          param_4 = pcStack_68;
        }
        *(undefined1 *)(param_1 + 2) = uVar9;
        if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
          return param_4;
        }
        ___stack_chk_fail();
LAB_00351d98:
        func_0x0033b318(&pppppppuStack_88);
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x351da4);
        (*pcVar6)();
      }
      ppcVar4 = &pcStack_80;
      ppcVar16 = &pcStack_80;
      lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
      if ((*(byte *)(*(long *)param_4 + 1) & 1) == 0) {
        uVar9 = 0;
        *(undefined1 *)param_1 = 0;
      }
      else {
        FUN_0034f290(&pcStack_68,*(undefined4 *)(*(long *)param_4 + 400));
        if (pcStack_68 == (code *)0x0) {
          uVar13 = (ulong)bStack_60;
          puVar15 = &uStack_5f;
        }
        else {
          uVar13 = CONCAT71(uStack_5f,bStack_60);
          puVar15 = puStack_58;
          if (0x7ffffffffffffff7 < uVar13) goto LAB_00351b78;
        }
        if (uVar13 < 0x17) {
          uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
          if (uVar13 != 0) goto LAB_00351ab4;
        }
        else {
          uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
          if ((uVar13 | 7) != 0x17) {
            uVar11 = uVar13 | 7;
          }
          ppcVar4 = (code **)(uVar11 + 1);
          __Znwm();
          uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
          pcStack_80 = (code *)ppcVar4;
          uStack_78 = uVar13;
LAB_00351ab4:
          _memmove(ppcVar4,puVar15,uVar13);
          ppcVar16 = ppcVar4;
        }
        *(code *)((long)ppcVar16 + uVar13) = (code)0x0;
        puVar12 = *(undefined8 **)(param_4 + 8);
        if (*(char *)((long)puVar12 + 0x17) < '\0') {
          __ZdlPv(*puVar12);
        }
        puVar12[2] = uStack_70;
        puVar12[1] = uStack_78;
        *puVar12 = pcStack_80;
        uStack_70 = uStack_70 & 0xffffffffffffff;
        pcStack_80 = (code *)((ulong)pcStack_80 & 0xffffffffffffff00);
        if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
          do {
            lVar18 = *(long *)pcStack_68;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
            if (bVar3) {
              *(long *)pcStack_68 = lVar18 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar18 + -1 == 0) {
            (**(code **)(pcStack_68 + 8))();
          }
        }
        plVar17 = *(long **)(param_4 + 8);
        uVar13 = plVar17[1];
        plVar1 = (long *)*plVar17;
        if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
          uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
          plVar1 = plVar17;
        }
        *param_1 = (long)plVar1;
        param_1[1] = uVar13;
        uVar9 = 1;
        param_4 = pcStack_68;
      }
      *(undefined1 *)(param_1 + 2) = uVar9;
      if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
        return param_4;
      }
      ___stack_chk_fail();
LAB_00351b78:
      func_0x0033b318(&pcStack_80);
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x351b84);
      (*pcVar6)();
    }
    ppcVar4 = &pcStack_80;
    ppcVar16 = &pcStack_80;
    lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
    if (**(char **)param_4 < '\0') {
      FUN_0034f290(&pcStack_68,*(undefined4 *)(*(char **)param_4 + 0x194));
      if (pcStack_68 == (code *)0x0) {
        uVar13 = (ulong)bStack_60;
        puVar15 = &uStack_5f;
      }
      else {
        uVar13 = CONCAT71(uStack_5f,bStack_60);
        puVar15 = puStack_58;
        if (0x7ffffffffffffff7 < uVar13) goto LAB_00351940;
      }
      if (uVar13 < 0x17) {
        uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
        if (uVar13 != 0) goto LAB_0035187c;
      }
      else {
        uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
        if ((uVar13 | 7) != 0x17) {
          uVar11 = uVar13 | 7;
        }
        ppcVar4 = (code **)(uVar11 + 1);
        __Znwm();
        uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
        pcStack_80 = (code *)ppcVar4;
        uStack_78 = uVar13;
LAB_0035187c:
        _memmove(ppcVar4,puVar15,uVar13);
        ppcVar16 = ppcVar4;
      }
      *(code *)((long)ppcVar16 + uVar13) = (code)0x0;
      puVar12 = *(undefined8 **)(param_4 + 8);
      if (*(char *)((long)puVar12 + 0x17) < '\0') {
        __ZdlPv(*puVar12);
      }
      puVar12[2] = uStack_70;
      puVar12[1] = uStack_78;
      *puVar12 = pcStack_80;
      uStack_70 = uStack_70 & 0xffffffffffffff;
      pcStack_80 = (code *)((ulong)pcStack_80 & 0xffffffffffffff00);
      if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
        do {
          lVar18 = *(long *)pcStack_68;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
          if (bVar3) {
            *(long *)pcStack_68 = lVar18 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar18 + -1 == 0) {
          (**(code **)(pcStack_68 + 8))();
        }
      }
      plVar17 = *(long **)(param_4 + 8);
      uVar13 = plVar17[1];
      plVar1 = (long *)*plVar17;
      if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
        uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
        plVar1 = plVar17;
      }
      *param_1 = (long)plVar1;
      param_1[1] = uVar13;
      uVar9 = 1;
      param_4 = pcStack_68;
    }
    else {
      uVar9 = 0;
      *(undefined1 *)param_1 = 0;
    }
    *(undefined1 *)(param_1 + 2) = uVar9;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
      return param_4;
    }
    ___stack_chk_fail();
LAB_00351940:
    func_0x0033b318(&pcStack_80);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x35194c);
    (*pcVar6)();
  }
  ppcVar4 = &pcStack_80;
  ppcVar16 = &pcStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  if ((**(byte **)param_4 >> 6 & 1) == 0) {
    uVar9 = 0;
    *(undefined1 *)param_1 = 0;
    pcVar6 = param_4;
  }
  else {
    pcVar6 = (code *)(ulong)(*(byte **)param_4)[0x198];
    FUN_0034f090(&pcStack_68,pcVar6);
    if (pcStack_68 == (code *)0x0) {
      uVar13 = (ulong)bStack_60;
      puVar15 = &uStack_5f;
    }
    else {
      uVar13 = CONCAT71(uStack_5f,bStack_60);
      puVar15 = puStack_58;
      if (0x7ffffffffffffff7 < uVar13) goto LAB_0035175c;
    }
    if (uVar13 < 0x17) {
      uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
      if (uVar13 != 0) goto LAB_003516c8;
    }
    else {
      uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
      if ((uVar13 | 7) != 0x17) {
        uVar11 = uVar13 | 7;
      }
      ppcVar4 = (code **)(uVar11 + 1);
      __Znwm();
      uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
      pcStack_80 = (code *)ppcVar4;
      uStack_78 = uVar13;
LAB_003516c8:
      pcVar6 = (code *)ppcVar4;
      _memmove(ppcVar4,puVar15,uVar13);
      ppcVar16 = ppcVar4;
    }
    *(code *)((long)ppcVar16 + uVar13) = (code)0x0;
    puVar14 = *(ulong **)(param_4 + 8);
    if (*(char *)((long)puVar14 + 0x17) < '\0') {
      pcVar6 = (code *)*puVar14;
      __ZdlPv(pcVar6);
    }
    puVar14[2] = uStack_70;
    puVar14[1] = uStack_78;
    *puVar14 = (ulong)pcStack_80;
    plVar17 = *(long **)(param_4 + 8);
    uVar13 = plVar17[1];
    plVar1 = (long *)*plVar17;
    if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
      uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
      plVar1 = plVar17;
    }
    *param_1 = (long)plVar1;
    param_1[1] = uVar13;
    uVar9 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar9;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return pcVar6;
  }
  ___stack_chk_fail();
LAB_0035175c:
  func_0x0033b318(&pcStack_80);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x351768);
  (*pcVar6)();
}



/* Entry: 00351600; end: 0035176b;  */

void FUN_00351600(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 **ppuVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined7 *puVar8;
  undefined1 **ppuVar9;
  undefined1 *puStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  ppuVar3 = &puStack_80;
  ppuVar9 = &puStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  if ((*(byte *)*param_2 >> 6 & 1) == 0) {
    uVar4 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    FUN_0034f090(&lStack_68,((byte *)*param_2)[0x198]);
    if (lStack_68 == 0) {
      uVar6 = (ulong)bStack_60;
      puVar8 = &uStack_5f;
    }
    else {
      uVar6 = CONCAT71(uStack_5f,bStack_60);
      puVar8 = puStack_58;
      if (0x7ffffffffffffff7 < uVar6) goto LAB_0035175c;
    }
    if (uVar6 < 0x17) {
      uStack_70 = CONCAT17((char)uVar6,(undefined7)uStack_70);
      if (uVar6 != 0) goto LAB_003516c8;
    }
    else {
      uVar1 = (uVar6 & 0x7ffffffffffffff8) + 8;
      if ((uVar6 | 7) != 0x17) {
        uVar1 = uVar6 | 7;
      }
      ppuVar3 = (undefined1 **)(uVar1 + 1);
      __Znwm();
      uStack_70 = (ulong)(uVar1 + 1) | 0x8000000000000000;
      puStack_80 = (undefined1 *)ppuVar3;
      uStack_78 = uVar6;
LAB_003516c8:
      _memmove(ppuVar3,puVar8,uVar6);
      ppuVar9 = ppuVar3;
    }
    *(undefined1 *)((long)ppuVar9 + uVar6) = 0;
    puVar7 = (undefined8 *)param_2[1];
    if (*(char *)((long)puVar7 + 0x17) < '\0') {
      __ZdlPv(*puVar7);
    }
    puVar7[2] = uStack_70;
    puVar7[1] = uStack_78;
    *puVar7 = puStack_80;
    puVar5 = (undefined8 *)param_2[1];
    uVar6 = puVar5[1];
    puVar7 = (undefined8 *)*puVar5;
    if (-1 < (char)*(byte *)((long)puVar5 + 0x17)) {
      uVar6 = (ulong)*(byte *)((long)puVar5 + 0x17);
      puVar7 = puVar5;
    }
    *param_1 = puVar7;
    param_1[1] = uVar6;
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar4;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_0035175c:
  func_0x0033b318(&puStack_80);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x351768);
  (*pcVar2)();
}



/* Entry: 0035176c; end: 003517b3;  */

/* WARNING: Type propagation algorithm not settling */

code * FUN_0035176c(long *param_1,code *param_2,code *param_3,code *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 **ppuVar4;
  undefined8 *******pppppppuVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  undefined1 uVar9;
  long *extraout_x8;
  long *extraout_x8_00;
  code *pcVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  code *unaff_x19;
  code *unaff_x20;
  undefined8 *unaff_x21;
  undefined1 *puVar14;
  undefined8 *unaff_x22;
  undefined7 *puVar15;
  code *unaff_x23;
  undefined1 **ppuVar16;
  long *plVar17;
  undefined8 unaff_x24;
  long lVar18;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long *plVar19;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar20;
  undefined8 *******pppppppuStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  if ((param_3 != (code *)((long)&MACH_HEADER.filetype + 1)) ||
     (*(long *)param_2 != 0x636e652d63707267 || *(long *)(param_2 + 5) != 0x676e69646f636e65)) {
    if ((param_3 != (code *)((long)&MACH_HEADER.reserved + 2)) ||
       (((*(long *)param_2 != 0x746e692d63707267 || *(long *)(param_2 + 8) != 0x6e652d6c616e7265) ||
        *(long *)(param_2 + 0x10) != 0x722d676e69646f63) ||
        *(long *)(param_2 + 0x16) != 0x747365757165722d)) {
      if ((param_3 != (code *)&MACH_HEADER.sizeofcmds) ||
         ((*(long *)param_2 != 0x6363612d63707267 || *(long *)(param_2 + 8) != 0x6f636e652d747065)
          || *(int *)(param_2 + 0x10) != 0x676e6964)) {
        if ((param_3 != (code *)((long)&MACH_HEADER.cpusubtype + 3)) ||
           (*(long *)param_2 != 0x6174732d63707267 || *(long *)(param_2 + 3) != 0x7375746174732d63))
        {
          if ((param_3 != (code *)&MACH_HEADER.filetype) ||
             (*(long *)param_2 != 0x6d69742d63707267 || *(int *)(param_2 + 8) != 0x74756f65)) {
            if ((param_3 != (code *)((long)&MACH_HEADER.flags + 2)) ||
               (((*(long *)param_2 != 0x6572702d63707267 ||
                 *(long *)(param_2 + 8) != 0x70722d73756f6976) ||
                *(long *)(param_2 + 0x10) != 0x706d657474612d63) ||
                *(short *)(param_2 + 0x18) != 0x7374)) {
              if ((param_3 != (code *)((long)&MACH_HEADER.sizeofcmds + 2)) ||
                 ((*(long *)param_2 != 0x7465722d63707267 ||
                  *(long *)(param_2 + 8) != 0x62687375702d7972) ||
                  *(long *)(param_2 + 0xe) != 0x736d2d6b63616268)) {
                if ((param_3 == (code *)((long)&MACH_HEADER.cpusubtype + 2)) &&
                   (*(long *)param_2 == 0x6567612d72657375 && *(short *)(param_2 + 8) == 0x746e)) {
                  lVar18 = *(long *)param_4;
                  if ((*(byte *)(lVar18 + 1) >> 6 & 1) == 0) {
                    uVar9 = 0;
                    *(undefined1 *)param_1 = 0;
                  }
                  else {
                    if (*(long *)(lVar18 + 0x150) == 0) {
                      lVar20 = lVar18 + 0x159;
                      uVar13 = (ulong)*(byte *)(lVar18 + 0x158);
                    }
                    else {
                      uVar13 = *(ulong *)(lVar18 + 0x158);
                      lVar20 = *(long *)(lVar18 + 0x160);
                    }
                    *param_1 = lVar20;
                    param_1[1] = uVar13;
                    uVar9 = 1;
                  }
                  *(undefined1 *)(param_1 + 2) = uVar9;
                  return param_4;
                }
                if ((param_3 == (code *)&MACH_HEADER.filetype) &&
                   (*(long *)param_2 == 0x73656d2d63707267 && *(int *)(param_2 + 8) == 0x65676173))
                {
                  lVar18 = *(long *)param_4;
                  if (*(char *)(lVar18 + 1) < '\0') {
                    if (*(long *)(lVar18 + 0x130) == 0) {
                      lVar20 = lVar18 + 0x139;
                      uVar13 = (ulong)*(byte *)(lVar18 + 0x138);
                    }
                    else {
                      uVar13 = *(ulong *)(lVar18 + 0x138);
                      lVar20 = *(long *)(lVar18 + 0x140);
                    }
                    *param_1 = lVar20;
                    param_1[1] = uVar13;
                    uVar9 = 1;
                  }
                  else {
                    uVar9 = 0;
                    *(undefined1 *)param_1 = 0;
                  }
                  *(undefined1 *)(param_1 + 2) = uVar9;
                  return param_4;
                }
                if ((param_3 == (code *)&MACH_HEADER.cputype) && (*(int *)param_2 == 0x74736f68)) {
                  lVar18 = *(long *)param_4;
                  if ((*(byte *)(lVar18 + 2) & 1) == 0) {
                    uVar9 = 0;
                    *(undefined1 *)param_1 = 0;
                  }
                  else {
                    if (*(long *)(lVar18 + 0x110) == 0) {
                      lVar20 = lVar18 + 0x119;
                      uVar13 = (ulong)*(byte *)(lVar18 + 0x118);
                    }
                    else {
                      uVar13 = *(ulong *)(lVar18 + 0x118);
                      lVar20 = *(long *)(lVar18 + 0x120);
                    }
                    *param_1 = lVar20;
                    param_1[1] = uVar13;
                    uVar9 = 1;
                  }
                  *(undefined1 *)(param_1 + 2) = uVar9;
                  return param_4;
                }
                if ((param_3 == (code *)((long)&MACH_HEADER.flags + 1)) &&
                   (((*(long *)param_2 == 0x746e696f70646e65 &&
                     *(long *)(param_2 + 8) == 0x656d2d64616f6c2d) &&
                    *(long *)(param_2 + 0x10) == 0x69622d7363697274) && param_2[0x18] == (code)0x6e)
                   ) {
                  lVar18 = *(long *)param_4;
                  if ((*(byte *)(lVar18 + 2) >> 1 & 1) == 0) {
                    uVar9 = 0;
                    *(undefined1 *)param_1 = 0;
                  }
                  else {
                    if (*(long *)(lVar18 + 0xf0) == 0) {
                      lVar20 = lVar18 + 0xf9;
                      uVar13 = (ulong)*(byte *)(lVar18 + 0xf8);
                    }
                    else {
                      uVar13 = *(ulong *)(lVar18 + 0xf8);
                      lVar20 = *(long *)(lVar18 + 0x100);
                    }
                    *param_1 = lVar20;
                    param_1[1] = uVar13;
                    uVar9 = 1;
                  }
                  *(undefined1 *)(param_1 + 2) = uVar9;
                  return param_4;
                }
                if ((param_3 == (code *)((long)&MACH_HEADER.sizeofcmds + 1)) &&
                   ((*(long *)param_2 == 0x7265732d63707267 &&
                    *(long *)(param_2 + 8) == 0x746174732d726576) &&
                    *(long *)(param_2 + 0xd) == 0x6e69622d73746174)) {
                  lVar18 = *(long *)param_4;
                  if ((*(byte *)(lVar18 + 2) >> 2 & 1) == 0) {
                    uVar9 = 0;
                    *(undefined1 *)param_1 = 0;
                  }
                  else {
                    if (*(long *)(lVar18 + 0xd0) == 0) {
                      lVar20 = lVar18 + 0xd9;
                      uVar13 = (ulong)*(byte *)(lVar18 + 0xd8);
                    }
                    else {
                      uVar13 = *(ulong *)(lVar18 + 0xd8);
                      lVar20 = *(long *)(lVar18 + 0xe0);
                    }
                    *param_1 = lVar20;
                    param_1[1] = uVar13;
                    uVar9 = 1;
                  }
                  *(undefined1 *)(param_1 + 2) = uVar9;
                  return param_4;
                }
                if ((param_3 == (code *)((long)&MACH_HEADER.filetype + 2)) &&
                   (*(long *)param_2 == 0x6172742d63707267 &&
                    *(long *)(param_2 + 6) == 0x6e69622d65636172)) {
                  lVar18 = *(long *)param_4;
                  if ((*(byte *)(lVar18 + 2) >> 3 & 1) == 0) {
                    uVar9 = 0;
                    *(undefined1 *)param_1 = 0;
                  }
                  else {
                    if (*(long *)(lVar18 + 0xb0) == 0) {
                      lVar20 = lVar18 + 0xb9;
                      uVar13 = (ulong)*(byte *)(lVar18 + 0xb8);
                    }
                    else {
                      uVar13 = *(ulong *)(lVar18 + 0xb8);
                      lVar20 = *(long *)(lVar18 + 0xc0);
                    }
                    *param_1 = lVar20;
                    param_1[1] = uVar13;
                    uVar9 = 1;
                  }
                  *(undefined1 *)(param_1 + 2) = uVar9;
                  return param_4;
                }
                if ((param_3 == (code *)((long)&MACH_HEADER.filetype + 1)) &&
                   (*(long *)param_2 == 0x6761742d63707267 &&
                    *(long *)(param_2 + 5) == 0x6e69622d73676174)) {
                  lVar18 = *(long *)param_4;
                  if ((*(byte *)(lVar18 + 2) >> 4 & 1) == 0) {
                    uVar9 = 0;
                    *(undefined1 *)param_1 = 0;
                  }
                  else {
                    if (*(long *)(lVar18 + 0x90) == 0) {
                      lVar20 = lVar18 + 0x99;
                      uVar13 = (ulong)*(byte *)(lVar18 + 0x98);
                    }
                    else {
                      uVar13 = *(ulong *)(lVar18 + 0x98);
                      lVar20 = *(long *)(lVar18 + 0xa0);
                    }
                    *param_1 = lVar20;
                    param_1[1] = uVar13;
                    uVar9 = 1;
                  }
                  *(undefined1 *)(param_1 + 2) = uVar9;
                  return param_4;
                }
                if ((param_3 == (code *)((long)&MACH_HEADER.ncmds + 3)) &&
                   ((*(long *)param_2 == 0x635f626c63707267 &&
                    *(long *)(param_2 + 8) == 0x74735f746e65696c) &&
                    *(long *)(param_2 + 0xb) == 0x73746174735f746e)) {
                  unaff_x29 = &stack0xfffffffffffffff0;
                  if ((*(byte *)(*(long *)param_4 + 2) >> 5 & 1) == 0) {
                    *(undefined1 *)param_1 = 0;
                    *(undefined1 *)(param_1 + 2) = 0;
                    return param_4;
                  }
                  unaff_x30 = FUN_00352a68;
                  pcVar6 = param_4;
                  _abort();
                  register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
                  param_2 = param_4;
                  param_4 = pcVar6;
                  param_1 = extraout_x8;
                }
                if ((param_3 == (code *)((long)&MACH_HEADER.cpusubtype + 3)) &&
                   (*(long *)param_2 == 0x2d74736f632d626c &&
                    *(long *)(param_2 + 3) == 0x6e69622d74736f63)) {
                  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
                  *(code **)((long)register0x00000008 + -0x38) = unaff_x23;
                  *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
                  *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
                  *(code **)((long)register0x00000008 + -0x20) = unaff_x20;
                  *(code **)((long)register0x00000008 + -0x18) = unaff_x19;
                  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
                  *(code **)((long)register0x00000008 + -8) = unaff_x30;
                  unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
                  *(undefined8 *)((long)register0x00000008 + -0x48) =
                       *(undefined8 *)PTR____stack_chk_guard_00999f88;
                  lVar18 = *(long *)param_4;
                  unaff_x19 = param_4;
                  pcVar6 = param_4;
                  if ((*(byte *)(lVar18 + 2) >> 6 & 1) == 0) {
                    uVar9 = 0;
                    *(undefined1 *)param_1 = 0;
                  }
                  else {
                    puVar12 = *(undefined8 **)(param_4 + 8);
                    if (*(char *)((long)puVar12 + 0x17) < '\0') {
                      *(undefined1 *)*puVar12 = 0;
                      puVar12[1] = 0;
                    }
                    else {
                      *(undefined1 *)puVar12 = 0;
                      *(undefined1 *)((long)puVar12 + 0x17) = 0;
                    }
                    uVar13 = *(ulong *)(lVar18 + 0x60);
                    unaff_x21 = (undefined8 *)(lVar18 + 0x68);
                    if ((uVar13 & 1) != 0) {
                      unaff_x21 = (undefined8 *)*unaff_x21;
                    }
                    if (1 < uVar13) {
                      unaff_x22 = unaff_x21 + (uVar13 >> 1) * 4;
                      unaff_x23 = (code *)((long)register0x00000008 + -0x5f);
                      do {
                        lVar18 = *(long *)(param_4 + 8);
                        if (*(char *)(lVar18 + 0x17) < '\0') {
                          if (*(long *)(lVar18 + 8) != 0) goto LAB_00352b64;
                        }
                        else if (*(char *)(lVar18 + 0x17) != '\0') {
LAB_00352b64:
                          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                                    (lVar18,0x2c);
                        }
                        FUN_003fee84((undefined1 *)((long)register0x00000008 + -0x68),unaff_x21);
                        uVar13 = *(ulong *)((long)register0x00000008 + -0x60) & 0xff;
                        param_3 = unaff_x23;
                        if (*(long *)((long)register0x00000008 + -0x68) != 0) {
                          uVar13 = *(ulong *)((long)register0x00000008 + -0x60);
                          param_3 = *(code **)((long)register0x00000008 + -0x58);
                        }
                        pcVar6 = param_3 + uVar13;
                        FUN_00352c98(*(long *)(param_4 + 8));
                        unaff_x19 = *(code **)((long)register0x00000008 + -0x68);
                        if ((code *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
                          do {
                            lVar18 = *(long *)unaff_x19;
                            cVar2 = '\x01';
                            bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
                            if (bVar3) {
                              *(long *)unaff_x19 = lVar18 + -1;
                              cVar2 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar2 != '\0');
                          if (lVar18 + -1 == 0) {
                            (**(code **)(unaff_x19 + 8))();
                          }
                        }
                        unaff_x21 = unaff_x21 + 4;
                      } while (unaff_x21 != unaff_x22);
                    }
                    plVar17 = *(long **)(param_4 + 8);
                    uVar13 = plVar17[1];
                    plVar1 = (long *)*plVar17;
                    if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
                      uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
                      plVar1 = plVar17;
                    }
                    *param_1 = (long)plVar1;
                    param_1[1] = uVar13;
                    uVar9 = 1;
                    unaff_x20 = param_4;
                  }
                  *(undefined1 *)(param_1 + 2) = uVar9;
                  if (*(long *)PTR____stack_chk_guard_00999f88 ==
                      *(long *)((long)register0x00000008 + -0x48)) {
                    return unaff_x19;
                  }
                  ___stack_chk_fail();
                  param_4 = pcVar6;
                  if ((int)param_3 != 0) {
                    func_0x0040cf10();
                    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x68));
                    param_4 = pcVar6;
                  }
                  unaff_x30 = FUN_00352c58;
                  param_2 = unaff_x19;
                  __Unwind_Resume();
                  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
                  param_1 = extraout_x8_00;
                }
                if ((param_3 == (code *)&MACH_HEADER.cpusubtype) &&
                   (*(long *)param_2 == 0x6e656b6f742d626c)) {
                  lVar18 = *(long *)param_4;
                  if (*(char *)(lVar18 + 2) < '\0') {
                    if (*(long *)(lVar18 + 0x40) == 0) {
                      lVar20 = lVar18 + 0x49;
                      uVar13 = (ulong)*(byte *)(lVar18 + 0x48);
                    }
                    else {
                      uVar13 = *(ulong *)(lVar18 + 0x48);
                      lVar20 = *(long *)(lVar18 + 0x50);
                    }
                    *param_1 = lVar20;
                    param_1[1] = uVar13;
                    uVar9 = 1;
                  }
                  else {
                    uVar9 = 0;
                    *(undefined1 *)param_1 = 0;
                  }
                  *(undefined1 *)(param_1 + 2) = uVar9;
                  return param_4;
                }
                lVar18 = *(long *)param_4;
                plVar1 = *(long **)(param_4 + 8);
                pcVar6 = (code *)(lVar18 + 0x1f0);
                *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
                *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
                *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
                *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
                *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
                *(code **)((long)register0x00000008 + -0x38) = unaff_x23;
                *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
                *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
                *(code **)((long)register0x00000008 + -0x20) = unaff_x20;
                *(code **)((long)register0x00000008 + -0x18) = unaff_x19;
                *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
                *(code **)((long)register0x00000008 + -8) = unaff_x30;
                *(undefined8 *)((long)register0x00000008 + -0x70) =
                     *(undefined8 *)PTR____stack_chk_guard_00999f88;
                *(undefined1 *)param_1 = 0;
                *(undefined1 *)(param_1 + 2) = 0;
                plVar17 = *(long **)(lVar18 + 0x1f8);
                pcVar7 = param_2;
                pcVar8 = param_3;
                if ((plVar17 != (long *)0x0) && (plVar17[1] != 0)) {
                  lVar18 = 0;
                  bVar3 = false;
                  plVar19 = (long *)*param_1;
                  uVar13 = param_1[1];
                  do {
                    if (plVar17[lVar18 * 8 + 2] == 0) {
                      pcVar6 = (code *)((long)plVar17 + lVar18 * 0x40 + 0x19);
                      pcVar10 = (code *)(ulong)*(byte *)(plVar17 + lVar18 * 8 + 3);
                    }
                    else {
                      pcVar10 = (code *)plVar17[lVar18 * 8 + 3];
                      pcVar6 = (code *)plVar17[lVar18 * 8 + 4];
                    }
                    if ((pcVar10 == param_3) &&
                       (pcVar7 = param_2, pcVar8 = param_3, _memcmp(pcVar6,param_2),
                       (int)pcVar6 == 0)) {
                      if (bVar3) {
                        *(long **)((long)register0x00000008 + -0xa0) = plVar19;
                        *(ulong *)((long)register0x00000008 + -0x98) = uVar13;
                        *(char **)((long)register0x00000008 + -0xd0) = ",";
                        *(undefined8 *)((long)register0x00000008 + -200) = 1;
                        if (plVar17[lVar18 * 8 + 6] == 0) {
                          lVar20 = (long)plVar17 + lVar18 * 0x40 + 0x39;
                          uVar13 = (ulong)*(byte *)(plVar17 + lVar18 * 8 + 7);
                        }
                        else {
                          uVar13 = plVar17[lVar18 * 8 + 7];
                          lVar20 = plVar17[lVar18 * 8 + 8];
                        }
                        *(long *)((long)register0x00000008 + -0x100) = lVar20;
                        *(ulong *)((long)register0x00000008 + -0xf8) = uVar13;
                        pcVar6 = (code *)((long)register0x00000008 + -0xa0);
                        pcVar7 = (code *)((long)register0x00000008 + -0xd0);
                        pcVar8 = (code *)((long)register0x00000008 + -0x100);
                        FUN_00575ddc((undefined1 *)((long)register0x00000008 + -0x118),pcVar6,pcVar7
                                    );
                        if (*(char *)((long)plVar1 + 0x17) < '\0') {
                          pcVar6 = (code *)*plVar1;
                          __ZdlPv();
                        }
                        uVar11 = *(ulong *)((long)register0x00000008 + -0x108);
                        plVar1[2] = uVar11;
                        lVar20 = *(long *)((long)register0x00000008 + -0x118);
                        plVar1[1] = *(long *)((long)register0x00000008 + -0x110);
                        *plVar1 = lVar20;
                        uVar13 = plVar1[1];
                        plVar19 = (long *)*plVar1;
                        if (-1 < (long)uVar11) {
                          uVar13 = uVar11 >> 0x38;
                          plVar19 = plVar1;
                        }
                        *param_1 = (long)plVar19;
                        param_1[1] = uVar13;
                      }
                      else {
                        if (plVar17[lVar18 * 8 + 6] == 0) {
                          plVar19 = (long *)((long)plVar17 + lVar18 * 0x40 + 0x39);
                          uVar13 = (ulong)*(byte *)(plVar17 + lVar18 * 8 + 7);
                        }
                        else {
                          uVar13 = plVar17[lVar18 * 8 + 7];
                          plVar19 = (long *)plVar17[lVar18 * 8 + 8];
                        }
                        *param_1 = (long)plVar19;
                        param_1[1] = uVar13;
                        bVar3 = true;
                        *(undefined1 *)(param_1 + 2) = 1;
                      }
                    }
                    lVar18 = lVar18 + 1;
                    do {
                      if (lVar18 != plVar17[1]) goto LAB_003fe6e4;
                      lVar18 = 0;
                      plVar17 = (long *)*plVar17;
                    } while (plVar17 != (long *)0x0);
                    lVar18 = 0;
LAB_003fe6e4:
                  } while ((plVar17 != (long *)0x0) || (lVar18 != 0));
                }
                if (*(long *)PTR____stack_chk_guard_00999f88 ==
                    *(long *)((long)register0x00000008 + -0x70)) {
                  return pcVar6;
                }
                ___stack_chk_fail();
                __Unwind_Resume();
                *(undefined1 **)((long)register0x00000008 + -0x130) =
                     (undefined1 *)((long)register0x00000008 + -0x10);
                *(code **)((long)register0x00000008 + -0x128) = FUN_003fe72c;
                if (*(long *)pcVar6 == 0) {
                  pcVar10 = pcVar6 + 9;
                  uVar13 = (ulong)(byte)pcVar6[8];
                }
                else {
                  uVar13 = *(ulong *)(pcVar6 + 8);
                  pcVar10 = *(code **)(pcVar6 + 0x10);
                }
                if (uVar13 == 0x10) {
                  if (*(long *)pcVar10 == 0x746163696c707061 &&
                      *(long *)(pcVar10 + 8) == 0x637072672f6e6f69) {
                    return (code *)0x0;
                  }
                }
                else if (uVar13 < 0x11) {
                  if (uVar13 == 0) {
                    return (code *)((long)&MACH_HEADER.magic + 1);
                  }
                }
                else {
                  if ((*(long *)pcVar10 == 0x746163696c707061 &&
                      *(long *)(pcVar10 + 8) == 0x637072672f6e6f69) && pcVar10[0x10] == (code)0x3b)
                  {
                    return (code *)0x0;
                  }
                  if ((*(long *)pcVar10 == 0x746163696c707061 &&
                      *(long *)(pcVar10 + 8) == 0x637072672f6e6f69) && pcVar10[0x10] == (code)0x2b)
                  {
                    return (code *)0x0;
                  }
                }
                (*pcVar8)(pcVar7,"invalid value",0xd);
                return (code *)((long)&MACH_HEADER.magic + 2);
              }
              ppuVar4 = &puStack_80;
              ppuVar16 = &puStack_80;
              lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
              if ((*(byte *)(*(long *)param_4 + 1) >> 5 & 1) == 0) {
                uVar9 = 0;
                *(undefined1 *)param_1 = 0;
              }
              else {
                FUN_0034eb70(&pcStack_68,*(undefined8 *)(*(long *)param_4 + 0x170));
                if (pcStack_68 == (code *)0x0) {
                  uVar13 = (ulong)bStack_60;
                  puVar15 = &uStack_5f;
                }
                else {
                  uVar13 = CONCAT71(uStack_5f,bStack_60);
                  puVar15 = puStack_58;
                  if (0x7ffffffffffffff7 < uVar13) goto LAB_003525f4;
                }
                if (uVar13 < 0x17) {
                  uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
                  if (uVar13 != 0) goto LAB_00352530;
                }
                else {
                  uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
                  if ((uVar13 | 7) != 0x17) {
                    uVar11 = uVar13 | 7;
                  }
                  ppuVar4 = (undefined1 **)(uVar11 + 1);
                  __Znwm();
                  uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
                  puStack_80 = (undefined1 *)ppuVar4;
                  uStack_78 = uVar13;
LAB_00352530:
                  _memmove(ppuVar4,puVar15,uVar13);
                  ppuVar16 = ppuVar4;
                }
                *(undefined1 *)((long)ppuVar16 + uVar13) = 0;
                puVar12 = *(undefined8 **)(param_4 + 8);
                if (*(char *)((long)puVar12 + 0x17) < '\0') {
                  __ZdlPv(*puVar12);
                }
                puVar12[2] = uStack_70;
                puVar12[1] = uStack_78;
                *puVar12 = puStack_80;
                uStack_70 = uStack_70 & 0xffffffffffffff;
                puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
                if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
                  do {
                    lVar18 = *(long *)pcStack_68;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
                    if (bVar3) {
                      *(long *)pcStack_68 = lVar18 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (lVar18 + -1 == 0) {
                    (**(code **)(pcStack_68 + 8))();
                  }
                }
                plVar17 = *(long **)(param_4 + 8);
                uVar13 = plVar17[1];
                plVar1 = (long *)*plVar17;
                if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
                  uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
                  plVar1 = plVar17;
                }
                *param_1 = (long)plVar1;
                param_1[1] = uVar13;
                uVar9 = 1;
                param_4 = pcStack_68;
              }
              *(undefined1 *)(param_1 + 2) = uVar9;
              if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
                return param_4;
              }
              ___stack_chk_fail();
LAB_003525f4:
              func_0x0033b318(&puStack_80);
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x352600);
              (*pcVar6)();
            }
            ppuVar4 = &puStack_80;
            ppuVar16 = &puStack_80;
            lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
            if ((*(byte *)(*(long *)param_4 + 1) >> 4 & 1) == 0) {
              uVar9 = 0;
              *(undefined1 *)param_1 = 0;
            }
            else {
              FUN_0034eb70(&pcStack_68,*(undefined4 *)(*(long *)param_4 + 0x178));
              if (pcStack_68 == (code *)0x0) {
                uVar13 = (ulong)bStack_60;
                puVar15 = &uStack_5f;
              }
              else {
                uVar13 = CONCAT71(uStack_5f,bStack_60);
                puVar15 = puStack_58;
                if (0x7ffffffffffffff7 < uVar13) goto LAB_003523d4;
              }
              if (uVar13 < 0x17) {
                uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
                if (uVar13 != 0) goto LAB_00352310;
              }
              else {
                uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
                if ((uVar13 | 7) != 0x17) {
                  uVar11 = uVar13 | 7;
                }
                ppuVar4 = (undefined1 **)(uVar11 + 1);
                __Znwm();
                uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
                puStack_80 = (undefined1 *)ppuVar4;
                uStack_78 = uVar13;
LAB_00352310:
                _memmove(ppuVar4,puVar15,uVar13);
                ppuVar16 = ppuVar4;
              }
              *(undefined1 *)((long)ppuVar16 + uVar13) = 0;
              puVar12 = *(undefined8 **)(param_4 + 8);
              if (*(char *)((long)puVar12 + 0x17) < '\0') {
                __ZdlPv(*puVar12);
              }
              puVar12[2] = uStack_70;
              puVar12[1] = uStack_78;
              *puVar12 = puStack_80;
              uStack_70 = uStack_70 & 0xffffffffffffff;
              puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
              if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
                do {
                  lVar18 = *(long *)pcStack_68;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
                  if (bVar3) {
                    *(long *)pcStack_68 = lVar18 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (lVar18 + -1 == 0) {
                  (**(code **)(pcStack_68 + 8))();
                }
              }
              plVar17 = *(long **)(param_4 + 8);
              uVar13 = plVar17[1];
              plVar1 = (long *)*plVar17;
              if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
                uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
                plVar1 = plVar17;
              }
              *param_1 = (long)plVar1;
              param_1[1] = uVar13;
              uVar9 = 1;
              param_4 = pcStack_68;
            }
            *(undefined1 *)(param_1 + 2) = uVar9;
            if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
              return param_4;
            }
            ___stack_chk_fail();
LAB_003523d4:
            func_0x0033b318(&puStack_80);
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x3523e0);
            (*pcVar6)();
          }
          ppuVar4 = &puStack_80;
          ppuVar16 = &puStack_80;
          lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
          if ((*(byte *)(*(long *)param_4 + 1) >> 3 & 1) == 0) {
            uVar9 = 0;
            *(undefined1 *)param_1 = 0;
          }
          else {
            func_0x003fe980(&pcStack_68,*(undefined8 *)(*(long *)param_4 + 0x180));
            if (pcStack_68 == (code *)0x0) {
              uVar13 = (ulong)bStack_60;
              puVar15 = &uStack_5f;
            }
            else {
              uVar13 = CONCAT71(uStack_5f,bStack_60);
              puVar15 = puStack_58;
              if (0x7ffffffffffffff7 < uVar13) goto LAB_003521a8;
            }
            if (uVar13 < 0x17) {
              uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
              if (uVar13 != 0) goto LAB_003520e4;
            }
            else {
              uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
              if ((uVar13 | 7) != 0x17) {
                uVar11 = uVar13 | 7;
              }
              ppuVar4 = (undefined1 **)(uVar11 + 1);
              __Znwm();
              uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
              puStack_80 = (undefined1 *)ppuVar4;
              uStack_78 = uVar13;
LAB_003520e4:
              _memmove(ppuVar4,puVar15,uVar13);
              ppuVar16 = ppuVar4;
            }
            *(undefined1 *)((long)ppuVar16 + uVar13) = 0;
            puVar12 = *(undefined8 **)(param_4 + 8);
            if (*(char *)((long)puVar12 + 0x17) < '\0') {
              __ZdlPv(*puVar12);
            }
            puVar12[2] = uStack_70;
            puVar12[1] = uStack_78;
            *puVar12 = puStack_80;
            uStack_70 = uStack_70 & 0xffffffffffffff;
            puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
            if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
              do {
                lVar18 = *(long *)pcStack_68;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
                if (bVar3) {
                  *(long *)pcStack_68 = lVar18 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar18 + -1 == 0) {
                (**(code **)(pcStack_68 + 8))();
              }
            }
            plVar17 = *(long **)(param_4 + 8);
            uVar13 = plVar17[1];
            plVar1 = (long *)*plVar17;
            if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
              uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
              plVar1 = plVar17;
            }
            *param_1 = (long)plVar1;
            param_1[1] = uVar13;
            uVar9 = 1;
            param_4 = pcStack_68;
          }
          *(undefined1 *)(param_1 + 2) = uVar9;
          if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
            return param_4;
          }
          ___stack_chk_fail();
LAB_003521a8:
          func_0x0033b318(&puStack_80);
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x3521b4);
          (*pcVar6)();
        }
        ppuVar4 = &puStack_80;
        ppuVar16 = &puStack_80;
        lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
        if ((*(byte *)(*(long *)param_4 + 1) >> 2 & 1) == 0) {
          uVar9 = 0;
          *(undefined1 *)param_1 = 0;
        }
        else {
          FUN_0034eb70(&pcStack_68,(long)*(int *)(*(long *)param_4 + 0x188));
          if (pcStack_68 == (code *)0x0) {
            uVar13 = (ulong)bStack_60;
            puVar15 = &uStack_5f;
          }
          else {
            uVar13 = CONCAT71(uStack_5f,bStack_60);
            puVar15 = puStack_58;
            if (0x7ffffffffffffff7 < uVar13) goto LAB_00351fa4;
          }
          if (uVar13 < 0x17) {
            uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
            if (uVar13 != 0) goto LAB_00351ee0;
          }
          else {
            uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
            if ((uVar13 | 7) != 0x17) {
              uVar11 = uVar13 | 7;
            }
            ppuVar4 = (undefined1 **)(uVar11 + 1);
            __Znwm();
            uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
            puStack_80 = (undefined1 *)ppuVar4;
            uStack_78 = uVar13;
LAB_00351ee0:
            _memmove(ppuVar4,puVar15,uVar13);
            ppuVar16 = ppuVar4;
          }
          *(undefined1 *)((long)ppuVar16 + uVar13) = 0;
          puVar12 = *(undefined8 **)(param_4 + 8);
          if (*(char *)((long)puVar12 + 0x17) < '\0') {
            __ZdlPv(*puVar12);
          }
          puVar12[2] = uStack_70;
          puVar12[1] = uStack_78;
          *puVar12 = puStack_80;
          uStack_70 = uStack_70 & 0xffffffffffffff;
          puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
          if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
            do {
              lVar18 = *(long *)pcStack_68;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
              if (bVar3) {
                *(long *)pcStack_68 = lVar18 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar18 + -1 == 0) {
              (**(code **)(pcStack_68 + 8))();
            }
          }
          plVar17 = *(long **)(param_4 + 8);
          uVar13 = plVar17[1];
          plVar1 = (long *)*plVar17;
          if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
            uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
            plVar1 = plVar17;
          }
          *param_1 = (long)plVar1;
          param_1[1] = uVar13;
          uVar9 = 1;
          param_4 = pcStack_68;
        }
        *(undefined1 *)(param_1 + 2) = uVar9;
        if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
          return param_4;
        }
        ___stack_chk_fail();
LAB_00351fa4:
        func_0x0033b318(&puStack_80);
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x351fb0);
        (*pcVar6)();
      }
      lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
      if ((*(byte *)(*(long *)param_4 + 1) >> 1 & 1) == 0) {
        uVar9 = 0;
        *(undefined1 *)param_1 = 0;
      }
      else {
        uStack_70 = CONCAT17(*(undefined1 *)(*(long *)param_4 + 0x18c),(undefined7)uStack_70);
        func_0x003b095c(&pcStack_68,(long)&uStack_70 + 7);
        if (pcStack_68 == (code *)0x0) {
          puVar14 = (undefined1 *)(ulong)bStack_60;
          puVar15 = &uStack_5f;
        }
        else {
          puVar14 = (undefined1 *)CONCAT71(uStack_5f,bStack_60);
          puVar15 = puStack_58;
          if ((undefined1 *)0x7ffffffffffffff7 < puVar14) goto LAB_00351d98;
        }
        if ((undefined1 *)((long)&MACH_HEADER.sizeofcmds + 2) < puVar14) {
          uVar13 = ((ulong)puVar14 & 0x7ffffffffffffff8) + 8;
          if (((ulong)puVar14 | 7) != 0x17) {
            uVar13 = (ulong)puVar14 | 7;
          }
          pppppppuVar5 = (undefined8 *******)(uVar13 + 1);
          __Znwm();
          uStack_78 = uVar13 + 1 | 0x8000000000000000;
          pppppppuStack_88 = pppppppuVar5;
          puStack_80 = puVar14;
LAB_00351cd4:
          _memmove(pppppppuVar5,puVar15,puVar14);
        }
        else {
          uStack_78 = CONCAT17((char)puVar14,(undefined7)uStack_78);
          pppppppuVar5 = &pppppppuStack_88;
          if (puVar14 != (undefined1 *)0x0) goto LAB_00351cd4;
        }
        *(undefined1 *)((long)pppppppuVar5 + (long)puVar14) = 0;
        puVar12 = *(undefined8 **)(param_4 + 8);
        if (*(char *)((long)puVar12 + 0x17) < '\0') {
          __ZdlPv(*puVar12);
        }
        puVar12[2] = uStack_78;
        puVar12[1] = puStack_80;
        *puVar12 = pppppppuStack_88;
        uStack_78 = uStack_78 & 0xffffffffffffff;
        pppppppuStack_88 = (undefined8 *******)((ulong)pppppppuStack_88 & 0xffffffffffffff00);
        if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
          do {
            lVar18 = *(long *)pcStack_68;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
            if (bVar3) {
              *(long *)pcStack_68 = lVar18 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar18 + -1 == 0) {
            (**(code **)(pcStack_68 + 8))();
          }
        }
        plVar17 = *(long **)(param_4 + 8);
        uVar13 = plVar17[1];
        plVar1 = (long *)*plVar17;
        if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
          uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
          plVar1 = plVar17;
        }
        *param_1 = (long)plVar1;
        param_1[1] = uVar13;
        uVar9 = 1;
        param_4 = pcStack_68;
      }
      *(undefined1 *)(param_1 + 2) = uVar9;
      if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
        return param_4;
      }
      ___stack_chk_fail();
LAB_00351d98:
      func_0x0033b318(&pppppppuStack_88);
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x351da4);
      (*pcVar6)();
    }
    ppuVar4 = &puStack_80;
    ppuVar16 = &puStack_80;
    lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
    if ((*(byte *)(*(long *)param_4 + 1) & 1) == 0) {
      uVar9 = 0;
      *(undefined1 *)param_1 = 0;
    }
    else {
      FUN_0034f290(&pcStack_68,*(undefined4 *)(*(long *)param_4 + 400));
      if (pcStack_68 == (code *)0x0) {
        uVar13 = (ulong)bStack_60;
        puVar15 = &uStack_5f;
      }
      else {
        uVar13 = CONCAT71(uStack_5f,bStack_60);
        puVar15 = puStack_58;
        if (0x7ffffffffffffff7 < uVar13) goto LAB_00351b78;
      }
      if (uVar13 < 0x17) {
        uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
        if (uVar13 != 0) goto LAB_00351ab4;
      }
      else {
        uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
        if ((uVar13 | 7) != 0x17) {
          uVar11 = uVar13 | 7;
        }
        ppuVar4 = (undefined1 **)(uVar11 + 1);
        __Znwm();
        uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
        puStack_80 = (undefined1 *)ppuVar4;
        uStack_78 = uVar13;
LAB_00351ab4:
        _memmove(ppuVar4,puVar15,uVar13);
        ppuVar16 = ppuVar4;
      }
      *(undefined1 *)((long)ppuVar16 + uVar13) = 0;
      puVar12 = *(undefined8 **)(param_4 + 8);
      if (*(char *)((long)puVar12 + 0x17) < '\0') {
        __ZdlPv(*puVar12);
      }
      puVar12[2] = uStack_70;
      puVar12[1] = uStack_78;
      *puVar12 = puStack_80;
      uStack_70 = uStack_70 & 0xffffffffffffff;
      puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
      if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
        do {
          lVar18 = *(long *)pcStack_68;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
          if (bVar3) {
            *(long *)pcStack_68 = lVar18 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar18 + -1 == 0) {
          (**(code **)(pcStack_68 + 8))();
        }
      }
      plVar17 = *(long **)(param_4 + 8);
      uVar13 = plVar17[1];
      plVar1 = (long *)*plVar17;
      if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
        uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
        plVar1 = plVar17;
      }
      *param_1 = (long)plVar1;
      param_1[1] = uVar13;
      uVar9 = 1;
      param_4 = pcStack_68;
    }
    *(undefined1 *)(param_1 + 2) = uVar9;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
      return param_4;
    }
    ___stack_chk_fail();
LAB_00351b78:
    func_0x0033b318(&puStack_80);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x351b84);
    (*pcVar6)();
  }
  ppuVar4 = &puStack_80;
  ppuVar16 = &puStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  if (**(char **)param_4 < '\0') {
    FUN_0034f290(&pcStack_68,*(undefined4 *)(*(char **)param_4 + 0x194));
    if (pcStack_68 == (code *)0x0) {
      uVar13 = (ulong)bStack_60;
      puVar15 = &uStack_5f;
    }
    else {
      uVar13 = CONCAT71(uStack_5f,bStack_60);
      puVar15 = puStack_58;
      if (0x7ffffffffffffff7 < uVar13) goto LAB_00351940;
    }
    if (uVar13 < 0x17) {
      uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
      if (uVar13 != 0) goto LAB_0035187c;
    }
    else {
      uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
      if ((uVar13 | 7) != 0x17) {
        uVar11 = uVar13 | 7;
      }
      ppuVar4 = (undefined1 **)(uVar11 + 1);
      __Znwm();
      uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
      puStack_80 = (undefined1 *)ppuVar4;
      uStack_78 = uVar13;
LAB_0035187c:
      _memmove(ppuVar4,puVar15,uVar13);
      ppuVar16 = ppuVar4;
    }
    *(undefined1 *)((long)ppuVar16 + uVar13) = 0;
    puVar12 = *(undefined8 **)(param_4 + 8);
    if (*(char *)((long)puVar12 + 0x17) < '\0') {
      __ZdlPv(*puVar12);
    }
    puVar12[2] = uStack_70;
    puVar12[1] = uStack_78;
    *puVar12 = puStack_80;
    uStack_70 = uStack_70 & 0xffffffffffffff;
    puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
    if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
      do {
        lVar18 = *(long *)pcStack_68;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
        if (bVar3) {
          *(long *)pcStack_68 = lVar18 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar18 + -1 == 0) {
        (**(code **)(pcStack_68 + 8))();
      }
    }
    plVar17 = *(long **)(param_4 + 8);
    uVar13 = plVar17[1];
    plVar1 = (long *)*plVar17;
    if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
      uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
      plVar1 = plVar17;
    }
    *param_1 = (long)plVar1;
    param_1[1] = uVar13;
    uVar9 = 1;
    param_4 = pcStack_68;
  }
  else {
    uVar9 = 0;
    *(undefined1 *)param_1 = 0;
  }
  *(undefined1 *)(param_1 + 2) = uVar9;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return param_4;
  }
  ___stack_chk_fail();
LAB_00351940:
  func_0x0033b318(&puStack_80);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x35194c);
  (*pcVar6)();
}



/* Entry: 003517b4; end: 00351977;  */

void FUN_003517b4(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 **ppuVar5;
  undefined1 uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined7 *puVar11;
  undefined1 **ppuVar12;
  undefined1 *puStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  ppuVar5 = &puStack_80;
  ppuVar12 = &puStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  if (*(char *)*param_2 < '\0') {
    FUN_0034f290(&plStack_68,*(undefined4 *)((char *)*param_2 + 0x194));
    if (plStack_68 == (long *)0x0) {
      uVar9 = (ulong)bStack_60;
      puVar11 = &uStack_5f;
    }
    else {
      uVar9 = CONCAT71(uStack_5f,bStack_60);
      puVar11 = puStack_58;
      if (0x7ffffffffffffff7 < uVar9) goto LAB_00351940;
    }
    if (uVar9 < 0x17) {
      uStack_70 = CONCAT17((char)uVar9,(undefined7)uStack_70);
      if (uVar9 != 0) goto LAB_0035187c;
    }
    else {
      uVar1 = (uVar9 & 0x7ffffffffffffff8) + 8;
      if ((uVar9 | 7) != 0x17) {
        uVar1 = uVar9 | 7;
      }
      ppuVar5 = (undefined1 **)(uVar1 + 1);
      __Znwm();
      uStack_70 = (ulong)(uVar1 + 1) | 0x8000000000000000;
      puStack_80 = (undefined1 *)ppuVar5;
      uStack_78 = uVar9;
LAB_0035187c:
      _memmove(ppuVar5,puVar11,uVar9);
      ppuVar12 = ppuVar5;
    }
    *(undefined1 *)((long)ppuVar12 + uVar9) = 0;
    puVar10 = (undefined8 *)param_2[1];
    if (*(char *)((long)puVar10 + 0x17) < '\0') {
      __ZdlPv(*puVar10);
    }
    puVar10[2] = uStack_70;
    puVar10[1] = uStack_78;
    *puVar10 = puStack_80;
    uStack_70 = uStack_70 & 0xffffffffffffff;
    puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_68) {
      do {
        lVar7 = *plStack_68;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
        if (bVar3) {
          *plStack_68 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_68[1])();
      }
    }
    puVar8 = (undefined8 *)param_2[1];
    uVar9 = puVar8[1];
    puVar10 = (undefined8 *)*puVar8;
    if (-1 < (char)*(byte *)((long)puVar8 + 0x17)) {
      uVar9 = (ulong)*(byte *)((long)puVar8 + 0x17);
      puVar10 = puVar8;
    }
    *param_1 = puVar10;
    param_1[1] = uVar9;
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
    *(undefined1 *)param_1 = 0;
  }
  *(undefined1 *)(param_1 + 2) = uVar6;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_00351940:
  func_0x0033b318(&puStack_80);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x35194c);
  (*pcVar4)();
}



/* Entry: 00351978; end: 003519eb;  */

/* WARNING: Type propagation algorithm not settling */

code * FUN_00351978(long *param_1,code *param_2,code *param_3,code *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 **ppuVar4;
  undefined8 *******pppppppuVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  undefined1 uVar9;
  long *extraout_x8;
  long *extraout_x8_00;
  code *pcVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  code *unaff_x19;
  code *unaff_x20;
  undefined8 *unaff_x21;
  undefined1 *puVar14;
  undefined8 *unaff_x22;
  undefined7 *puVar15;
  code *unaff_x23;
  undefined1 **ppuVar16;
  long *plVar17;
  undefined8 unaff_x24;
  long lVar18;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long *plVar19;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar20;
  undefined8 *******pppppppuStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  if ((param_3 != (code *)((long)&MACH_HEADER.reserved + 2)) ||
     (((*(long *)param_2 != 0x746e692d63707267 || *(long *)(param_2 + 8) != 0x6e652d6c616e7265) ||
      *(long *)(param_2 + 0x10) != 0x722d676e69646f63) ||
      *(long *)(param_2 + 0x16) != 0x747365757165722d)) {
    if ((param_3 != (code *)&MACH_HEADER.sizeofcmds) ||
       ((*(long *)param_2 != 0x6363612d63707267 || *(long *)(param_2 + 8) != 0x6f636e652d747065) ||
        *(int *)(param_2 + 0x10) != 0x676e6964)) {
      if ((param_3 != (code *)((long)&MACH_HEADER.cpusubtype + 3)) ||
         (*(long *)param_2 != 0x6174732d63707267 || *(long *)(param_2 + 3) != 0x7375746174732d63)) {
        if ((param_3 != (code *)&MACH_HEADER.filetype) ||
           (*(long *)param_2 != 0x6d69742d63707267 || *(int *)(param_2 + 8) != 0x74756f65)) {
          if ((param_3 != (code *)((long)&MACH_HEADER.flags + 2)) ||
             (((*(long *)param_2 != 0x6572702d63707267 ||
               *(long *)(param_2 + 8) != 0x70722d73756f6976) ||
              *(long *)(param_2 + 0x10) != 0x706d657474612d63) ||
              *(short *)(param_2 + 0x18) != 0x7374)) {
            if ((param_3 != (code *)((long)&MACH_HEADER.sizeofcmds + 2)) ||
               ((*(long *)param_2 != 0x7465722d63707267 ||
                *(long *)(param_2 + 8) != 0x62687375702d7972) ||
                *(long *)(param_2 + 0xe) != 0x736d2d6b63616268)) {
              if ((param_3 == (code *)((long)&MACH_HEADER.cpusubtype + 2)) &&
                 (*(long *)param_2 == 0x6567612d72657375 && *(short *)(param_2 + 8) == 0x746e)) {
                lVar18 = *(long *)param_4;
                if ((*(byte *)(lVar18 + 1) >> 6 & 1) == 0) {
                  uVar9 = 0;
                  *(undefined1 *)param_1 = 0;
                }
                else {
                  if (*(long *)(lVar18 + 0x150) == 0) {
                    lVar20 = lVar18 + 0x159;
                    uVar13 = (ulong)*(byte *)(lVar18 + 0x158);
                  }
                  else {
                    uVar13 = *(ulong *)(lVar18 + 0x158);
                    lVar20 = *(long *)(lVar18 + 0x160);
                  }
                  *param_1 = lVar20;
                  param_1[1] = uVar13;
                  uVar9 = 1;
                }
                *(undefined1 *)(param_1 + 2) = uVar9;
                return param_4;
              }
              if ((param_3 == (code *)&MACH_HEADER.filetype) &&
                 (*(long *)param_2 == 0x73656d2d63707267 && *(int *)(param_2 + 8) == 0x65676173)) {
                lVar18 = *(long *)param_4;
                if (*(char *)(lVar18 + 1) < '\0') {
                  if (*(long *)(lVar18 + 0x130) == 0) {
                    lVar20 = lVar18 + 0x139;
                    uVar13 = (ulong)*(byte *)(lVar18 + 0x138);
                  }
                  else {
                    uVar13 = *(ulong *)(lVar18 + 0x138);
                    lVar20 = *(long *)(lVar18 + 0x140);
                  }
                  *param_1 = lVar20;
                  param_1[1] = uVar13;
                  uVar9 = 1;
                }
                else {
                  uVar9 = 0;
                  *(undefined1 *)param_1 = 0;
                }
                *(undefined1 *)(param_1 + 2) = uVar9;
                return param_4;
              }
              if ((param_3 == (code *)&MACH_HEADER.cputype) && (*(int *)param_2 == 0x74736f68)) {
                lVar18 = *(long *)param_4;
                if ((*(byte *)(lVar18 + 2) & 1) == 0) {
                  uVar9 = 0;
                  *(undefined1 *)param_1 = 0;
                }
                else {
                  if (*(long *)(lVar18 + 0x110) == 0) {
                    lVar20 = lVar18 + 0x119;
                    uVar13 = (ulong)*(byte *)(lVar18 + 0x118);
                  }
                  else {
                    uVar13 = *(ulong *)(lVar18 + 0x118);
                    lVar20 = *(long *)(lVar18 + 0x120);
                  }
                  *param_1 = lVar20;
                  param_1[1] = uVar13;
                  uVar9 = 1;
                }
                *(undefined1 *)(param_1 + 2) = uVar9;
                return param_4;
              }
              if ((param_3 == (code *)((long)&MACH_HEADER.flags + 1)) &&
                 (((*(long *)param_2 == 0x746e696f70646e65 &&
                   *(long *)(param_2 + 8) == 0x656d2d64616f6c2d) &&
                  *(long *)(param_2 + 0x10) == 0x69622d7363697274) && param_2[0x18] == (code)0x6e))
              {
                lVar18 = *(long *)param_4;
                if ((*(byte *)(lVar18 + 2) >> 1 & 1) == 0) {
                  uVar9 = 0;
                  *(undefined1 *)param_1 = 0;
                }
                else {
                  if (*(long *)(lVar18 + 0xf0) == 0) {
                    lVar20 = lVar18 + 0xf9;
                    uVar13 = (ulong)*(byte *)(lVar18 + 0xf8);
                  }
                  else {
                    uVar13 = *(ulong *)(lVar18 + 0xf8);
                    lVar20 = *(long *)(lVar18 + 0x100);
                  }
                  *param_1 = lVar20;
                  param_1[1] = uVar13;
                  uVar9 = 1;
                }
                *(undefined1 *)(param_1 + 2) = uVar9;
                return param_4;
              }
              if ((param_3 == (code *)((long)&MACH_HEADER.sizeofcmds + 1)) &&
                 ((*(long *)param_2 == 0x7265732d63707267 &&
                  *(long *)(param_2 + 8) == 0x746174732d726576) &&
                  *(long *)(param_2 + 0xd) == 0x6e69622d73746174)) {
                lVar18 = *(long *)param_4;
                if ((*(byte *)(lVar18 + 2) >> 2 & 1) == 0) {
                  uVar9 = 0;
                  *(undefined1 *)param_1 = 0;
                }
                else {
                  if (*(long *)(lVar18 + 0xd0) == 0) {
                    lVar20 = lVar18 + 0xd9;
                    uVar13 = (ulong)*(byte *)(lVar18 + 0xd8);
                  }
                  else {
                    uVar13 = *(ulong *)(lVar18 + 0xd8);
                    lVar20 = *(long *)(lVar18 + 0xe0);
                  }
                  *param_1 = lVar20;
                  param_1[1] = uVar13;
                  uVar9 = 1;
                }
                *(undefined1 *)(param_1 + 2) = uVar9;
                return param_4;
              }
              if ((param_3 == (code *)((long)&MACH_HEADER.filetype + 2)) &&
                 (*(long *)param_2 == 0x6172742d63707267 &&
                  *(long *)(param_2 + 6) == 0x6e69622d65636172)) {
                lVar18 = *(long *)param_4;
                if ((*(byte *)(lVar18 + 2) >> 3 & 1) == 0) {
                  uVar9 = 0;
                  *(undefined1 *)param_1 = 0;
                }
                else {
                  if (*(long *)(lVar18 + 0xb0) == 0) {
                    lVar20 = lVar18 + 0xb9;
                    uVar13 = (ulong)*(byte *)(lVar18 + 0xb8);
                  }
                  else {
                    uVar13 = *(ulong *)(lVar18 + 0xb8);
                    lVar20 = *(long *)(lVar18 + 0xc0);
                  }
                  *param_1 = lVar20;
                  param_1[1] = uVar13;
                  uVar9 = 1;
                }
                *(undefined1 *)(param_1 + 2) = uVar9;
                return param_4;
              }
              if ((param_3 == (code *)((long)&MACH_HEADER.filetype + 1)) &&
                 (*(long *)param_2 == 0x6761742d63707267 &&
                  *(long *)(param_2 + 5) == 0x6e69622d73676174)) {
                lVar18 = *(long *)param_4;
                if ((*(byte *)(lVar18 + 2) >> 4 & 1) == 0) {
                  uVar9 = 0;
                  *(undefined1 *)param_1 = 0;
                }
                else {
                  if (*(long *)(lVar18 + 0x90) == 0) {
                    lVar20 = lVar18 + 0x99;
                    uVar13 = (ulong)*(byte *)(lVar18 + 0x98);
                  }
                  else {
                    uVar13 = *(ulong *)(lVar18 + 0x98);
                    lVar20 = *(long *)(lVar18 + 0xa0);
                  }
                  *param_1 = lVar20;
                  param_1[1] = uVar13;
                  uVar9 = 1;
                }
                *(undefined1 *)(param_1 + 2) = uVar9;
                return param_4;
              }
              if ((param_3 == (code *)((long)&MACH_HEADER.ncmds + 3)) &&
                 ((*(long *)param_2 == 0x635f626c63707267 &&
                  *(long *)(param_2 + 8) == 0x74735f746e65696c) &&
                  *(long *)(param_2 + 0xb) == 0x73746174735f746e)) {
                unaff_x29 = &stack0xfffffffffffffff0;
                if ((*(byte *)(*(long *)param_4 + 2) >> 5 & 1) == 0) {
                  *(undefined1 *)param_1 = 0;
                  *(undefined1 *)(param_1 + 2) = 0;
                  return param_4;
                }
                unaff_x30 = FUN_00352a68;
                pcVar6 = param_4;
                _abort();
                register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
                param_2 = param_4;
                param_4 = pcVar6;
                param_1 = extraout_x8;
              }
              if ((param_3 == (code *)((long)&MACH_HEADER.cpusubtype + 3)) &&
                 (*(long *)param_2 == 0x2d74736f632d626c &&
                  *(long *)(param_2 + 3) == 0x6e69622d74736f63)) {
                *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
                *(code **)((long)register0x00000008 + -0x38) = unaff_x23;
                *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
                *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
                *(code **)((long)register0x00000008 + -0x20) = unaff_x20;
                *(code **)((long)register0x00000008 + -0x18) = unaff_x19;
                *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
                *(code **)((long)register0x00000008 + -8) = unaff_x30;
                unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
                *(undefined8 *)((long)register0x00000008 + -0x48) =
                     *(undefined8 *)PTR____stack_chk_guard_00999f88;
                lVar18 = *(long *)param_4;
                unaff_x19 = param_4;
                pcVar6 = param_4;
                if ((*(byte *)(lVar18 + 2) >> 6 & 1) == 0) {
                  uVar9 = 0;
                  *(undefined1 *)param_1 = 0;
                }
                else {
                  puVar12 = *(undefined8 **)(param_4 + 8);
                  if (*(char *)((long)puVar12 + 0x17) < '\0') {
                    *(undefined1 *)*puVar12 = 0;
                    puVar12[1] = 0;
                  }
                  else {
                    *(undefined1 *)puVar12 = 0;
                    *(undefined1 *)((long)puVar12 + 0x17) = 0;
                  }
                  uVar13 = *(ulong *)(lVar18 + 0x60);
                  unaff_x21 = (undefined8 *)(lVar18 + 0x68);
                  if ((uVar13 & 1) != 0) {
                    unaff_x21 = (undefined8 *)*unaff_x21;
                  }
                  if (1 < uVar13) {
                    unaff_x22 = unaff_x21 + (uVar13 >> 1) * 4;
                    unaff_x23 = (code *)((long)register0x00000008 + -0x5f);
                    do {
                      lVar18 = *(long *)(param_4 + 8);
                      if (*(char *)(lVar18 + 0x17) < '\0') {
                        if (*(long *)(lVar18 + 8) != 0) goto LAB_00352b64;
                      }
                      else if (*(char *)(lVar18 + 0x17) != '\0') {
LAB_00352b64:
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                                  (lVar18,0x2c);
                      }
                      FUN_003fee84((undefined1 *)((long)register0x00000008 + -0x68),unaff_x21);
                      uVar13 = *(ulong *)((long)register0x00000008 + -0x60) & 0xff;
                      param_3 = unaff_x23;
                      if (*(long *)((long)register0x00000008 + -0x68) != 0) {
                        uVar13 = *(ulong *)((long)register0x00000008 + -0x60);
                        param_3 = *(code **)((long)register0x00000008 + -0x58);
                      }
                      pcVar6 = param_3 + uVar13;
                      FUN_00352c98(*(long *)(param_4 + 8));
                      unaff_x19 = *(code **)((long)register0x00000008 + -0x68);
                      if ((code *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
                        do {
                          lVar18 = *(long *)unaff_x19;
                          cVar2 = '\x01';
                          bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
                          if (bVar3) {
                            *(long *)unaff_x19 = lVar18 + -1;
                            cVar2 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar2 != '\0');
                        if (lVar18 + -1 == 0) {
                          (**(code **)(unaff_x19 + 8))();
                        }
                      }
                      unaff_x21 = unaff_x21 + 4;
                    } while (unaff_x21 != unaff_x22);
                  }
                  plVar17 = *(long **)(param_4 + 8);
                  uVar13 = plVar17[1];
                  plVar1 = (long *)*plVar17;
                  if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
                    uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
                    plVar1 = plVar17;
                  }
                  *param_1 = (long)plVar1;
                  param_1[1] = uVar13;
                  uVar9 = 1;
                  unaff_x20 = param_4;
                }
                *(undefined1 *)(param_1 + 2) = uVar9;
                if (*(long *)PTR____stack_chk_guard_00999f88 ==
                    *(long *)((long)register0x00000008 + -0x48)) {
                  return unaff_x19;
                }
                ___stack_chk_fail();
                param_4 = pcVar6;
                if ((int)param_3 != 0) {
                  func_0x0040cf10();
                  FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x68));
                  param_4 = pcVar6;
                }
                unaff_x30 = FUN_00352c58;
                param_2 = unaff_x19;
                __Unwind_Resume();
                register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
                param_1 = extraout_x8_00;
              }
              if ((param_3 == (code *)&MACH_HEADER.cpusubtype) &&
                 (*(long *)param_2 == 0x6e656b6f742d626c)) {
                lVar18 = *(long *)param_4;
                if (*(char *)(lVar18 + 2) < '\0') {
                  if (*(long *)(lVar18 + 0x40) == 0) {
                    lVar20 = lVar18 + 0x49;
                    uVar13 = (ulong)*(byte *)(lVar18 + 0x48);
                  }
                  else {
                    uVar13 = *(ulong *)(lVar18 + 0x48);
                    lVar20 = *(long *)(lVar18 + 0x50);
                  }
                  *param_1 = lVar20;
                  param_1[1] = uVar13;
                  uVar9 = 1;
                }
                else {
                  uVar9 = 0;
                  *(undefined1 *)param_1 = 0;
                }
                *(undefined1 *)(param_1 + 2) = uVar9;
                return param_4;
              }
              lVar18 = *(long *)param_4;
              plVar1 = *(long **)(param_4 + 8);
              pcVar6 = (code *)(lVar18 + 0x1f0);
              *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
              *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
              *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
              *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
              *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
              *(code **)((long)register0x00000008 + -0x38) = unaff_x23;
              *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
              *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
              *(code **)((long)register0x00000008 + -0x20) = unaff_x20;
              *(code **)((long)register0x00000008 + -0x18) = unaff_x19;
              *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
              *(code **)((long)register0x00000008 + -8) = unaff_x30;
              *(undefined8 *)((long)register0x00000008 + -0x70) =
                   *(undefined8 *)PTR____stack_chk_guard_00999f88;
              *(undefined1 *)param_1 = 0;
              *(undefined1 *)(param_1 + 2) = 0;
              plVar17 = *(long **)(lVar18 + 0x1f8);
              pcVar7 = param_2;
              pcVar8 = param_3;
              if ((plVar17 != (long *)0x0) && (plVar17[1] != 0)) {
                lVar18 = 0;
                bVar3 = false;
                plVar19 = (long *)*param_1;
                uVar13 = param_1[1];
                do {
                  if (plVar17[lVar18 * 8 + 2] == 0) {
                    pcVar6 = (code *)((long)plVar17 + lVar18 * 0x40 + 0x19);
                    pcVar10 = (code *)(ulong)*(byte *)(plVar17 + lVar18 * 8 + 3);
                  }
                  else {
                    pcVar10 = (code *)plVar17[lVar18 * 8 + 3];
                    pcVar6 = (code *)plVar17[lVar18 * 8 + 4];
                  }
                  if ((pcVar10 == param_3) &&
                     (pcVar7 = param_2, pcVar8 = param_3, _memcmp(pcVar6,param_2), (int)pcVar6 == 0)
                     ) {
                    if (bVar3) {
                      *(long **)((long)register0x00000008 + -0xa0) = plVar19;
                      *(ulong *)((long)register0x00000008 + -0x98) = uVar13;
                      *(char **)((long)register0x00000008 + -0xd0) = ",";
                      *(undefined8 *)((long)register0x00000008 + -200) = 1;
                      if (plVar17[lVar18 * 8 + 6] == 0) {
                        lVar20 = (long)plVar17 + lVar18 * 0x40 + 0x39;
                        uVar13 = (ulong)*(byte *)(plVar17 + lVar18 * 8 + 7);
                      }
                      else {
                        uVar13 = plVar17[lVar18 * 8 + 7];
                        lVar20 = plVar17[lVar18 * 8 + 8];
                      }
                      *(long *)((long)register0x00000008 + -0x100) = lVar20;
                      *(ulong *)((long)register0x00000008 + -0xf8) = uVar13;
                      pcVar6 = (code *)((long)register0x00000008 + -0xa0);
                      pcVar7 = (code *)((long)register0x00000008 + -0xd0);
                      pcVar8 = (code *)((long)register0x00000008 + -0x100);
                      FUN_00575ddc((undefined1 *)((long)register0x00000008 + -0x118),pcVar6,pcVar7);
                      if (*(char *)((long)plVar1 + 0x17) < '\0') {
                        pcVar6 = (code *)*plVar1;
                        __ZdlPv();
                      }
                      uVar11 = *(ulong *)((long)register0x00000008 + -0x108);
                      plVar1[2] = uVar11;
                      lVar20 = *(long *)((long)register0x00000008 + -0x118);
                      plVar1[1] = *(long *)((long)register0x00000008 + -0x110);
                      *plVar1 = lVar20;
                      uVar13 = plVar1[1];
                      plVar19 = (long *)*plVar1;
                      if (-1 < (long)uVar11) {
                        uVar13 = uVar11 >> 0x38;
                        plVar19 = plVar1;
                      }
                      *param_1 = (long)plVar19;
                      param_1[1] = uVar13;
                    }
                    else {
                      if (plVar17[lVar18 * 8 + 6] == 0) {
                        plVar19 = (long *)((long)plVar17 + lVar18 * 0x40 + 0x39);
                        uVar13 = (ulong)*(byte *)(plVar17 + lVar18 * 8 + 7);
                      }
                      else {
                        uVar13 = plVar17[lVar18 * 8 + 7];
                        plVar19 = (long *)plVar17[lVar18 * 8 + 8];
                      }
                      *param_1 = (long)plVar19;
                      param_1[1] = uVar13;
                      bVar3 = true;
                      *(undefined1 *)(param_1 + 2) = 1;
                    }
                  }
                  lVar18 = lVar18 + 1;
                  do {
                    if (lVar18 != plVar17[1]) goto LAB_003fe6e4;
                    lVar18 = 0;
                    plVar17 = (long *)*plVar17;
                  } while (plVar17 != (long *)0x0);
                  lVar18 = 0;
LAB_003fe6e4:
                } while ((plVar17 != (long *)0x0) || (lVar18 != 0));
              }
              if (*(long *)PTR____stack_chk_guard_00999f88 ==
                  *(long *)((long)register0x00000008 + -0x70)) {
                return pcVar6;
              }
              ___stack_chk_fail();
              __Unwind_Resume();
              *(undefined1 **)((long)register0x00000008 + -0x130) =
                   (undefined1 *)((long)register0x00000008 + -0x10);
              *(code **)((long)register0x00000008 + -0x128) = FUN_003fe72c;
              if (*(long *)pcVar6 == 0) {
                pcVar10 = pcVar6 + 9;
                uVar13 = (ulong)(byte)pcVar6[8];
              }
              else {
                uVar13 = *(ulong *)(pcVar6 + 8);
                pcVar10 = *(code **)(pcVar6 + 0x10);
              }
              if (uVar13 == 0x10) {
                if (*(long *)pcVar10 == 0x746163696c707061 &&
                    *(long *)(pcVar10 + 8) == 0x637072672f6e6f69) {
                  return (code *)0x0;
                }
              }
              else if (uVar13 < 0x11) {
                if (uVar13 == 0) {
                  return (code *)((long)&MACH_HEADER.magic + 1);
                }
              }
              else {
                if ((*(long *)pcVar10 == 0x746163696c707061 &&
                    *(long *)(pcVar10 + 8) == 0x637072672f6e6f69) && pcVar10[0x10] == (code)0x3b) {
                  return (code *)0x0;
                }
                if ((*(long *)pcVar10 == 0x746163696c707061 &&
                    *(long *)(pcVar10 + 8) == 0x637072672f6e6f69) && pcVar10[0x10] == (code)0x2b) {
                  return (code *)0x0;
                }
              }
              (*pcVar8)(pcVar7,"invalid value",0xd);
              return (code *)((long)&MACH_HEADER.magic + 2);
            }
            ppuVar4 = &puStack_80;
            ppuVar16 = &puStack_80;
            lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
            if ((*(byte *)(*(long *)param_4 + 1) >> 5 & 1) == 0) {
              uVar9 = 0;
              *(undefined1 *)param_1 = 0;
            }
            else {
              FUN_0034eb70(&pcStack_68,*(undefined8 *)(*(long *)param_4 + 0x170));
              if (pcStack_68 == (code *)0x0) {
                uVar13 = (ulong)bStack_60;
                puVar15 = &uStack_5f;
              }
              else {
                uVar13 = CONCAT71(uStack_5f,bStack_60);
                puVar15 = puStack_58;
                if (0x7ffffffffffffff7 < uVar13) goto LAB_003525f4;
              }
              if (uVar13 < 0x17) {
                uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
                if (uVar13 != 0) goto LAB_00352530;
              }
              else {
                uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
                if ((uVar13 | 7) != 0x17) {
                  uVar11 = uVar13 | 7;
                }
                ppuVar4 = (undefined1 **)(uVar11 + 1);
                __Znwm();
                uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
                puStack_80 = (undefined1 *)ppuVar4;
                uStack_78 = uVar13;
LAB_00352530:
                _memmove(ppuVar4,puVar15,uVar13);
                ppuVar16 = ppuVar4;
              }
              *(undefined1 *)((long)ppuVar16 + uVar13) = 0;
              puVar12 = *(undefined8 **)(param_4 + 8);
              if (*(char *)((long)puVar12 + 0x17) < '\0') {
                __ZdlPv(*puVar12);
              }
              puVar12[2] = uStack_70;
              puVar12[1] = uStack_78;
              *puVar12 = puStack_80;
              uStack_70 = uStack_70 & 0xffffffffffffff;
              puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
              if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
                do {
                  lVar18 = *(long *)pcStack_68;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
                  if (bVar3) {
                    *(long *)pcStack_68 = lVar18 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (lVar18 + -1 == 0) {
                  (**(code **)(pcStack_68 + 8))();
                }
              }
              plVar17 = *(long **)(param_4 + 8);
              uVar13 = plVar17[1];
              plVar1 = (long *)*plVar17;
              if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
                uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
                plVar1 = plVar17;
              }
              *param_1 = (long)plVar1;
              param_1[1] = uVar13;
              uVar9 = 1;
              param_4 = pcStack_68;
            }
            *(undefined1 *)(param_1 + 2) = uVar9;
            if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
              return param_4;
            }
            ___stack_chk_fail();
LAB_003525f4:
            func_0x0033b318(&puStack_80);
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x352600);
            (*pcVar6)();
          }
          ppuVar4 = &puStack_80;
          ppuVar16 = &puStack_80;
          lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
          if ((*(byte *)(*(long *)param_4 + 1) >> 4 & 1) == 0) {
            uVar9 = 0;
            *(undefined1 *)param_1 = 0;
          }
          else {
            FUN_0034eb70(&pcStack_68,*(undefined4 *)(*(long *)param_4 + 0x178));
            if (pcStack_68 == (code *)0x0) {
              uVar13 = (ulong)bStack_60;
              puVar15 = &uStack_5f;
            }
            else {
              uVar13 = CONCAT71(uStack_5f,bStack_60);
              puVar15 = puStack_58;
              if (0x7ffffffffffffff7 < uVar13) goto LAB_003523d4;
            }
            if (uVar13 < 0x17) {
              uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
              if (uVar13 != 0) goto LAB_00352310;
            }
            else {
              uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
              if ((uVar13 | 7) != 0x17) {
                uVar11 = uVar13 | 7;
              }
              ppuVar4 = (undefined1 **)(uVar11 + 1);
              __Znwm();
              uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
              puStack_80 = (undefined1 *)ppuVar4;
              uStack_78 = uVar13;
LAB_00352310:
              _memmove(ppuVar4,puVar15,uVar13);
              ppuVar16 = ppuVar4;
            }
            *(undefined1 *)((long)ppuVar16 + uVar13) = 0;
            puVar12 = *(undefined8 **)(param_4 + 8);
            if (*(char *)((long)puVar12 + 0x17) < '\0') {
              __ZdlPv(*puVar12);
            }
            puVar12[2] = uStack_70;
            puVar12[1] = uStack_78;
            *puVar12 = puStack_80;
            uStack_70 = uStack_70 & 0xffffffffffffff;
            puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
            if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
              do {
                lVar18 = *(long *)pcStack_68;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
                if (bVar3) {
                  *(long *)pcStack_68 = lVar18 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar18 + -1 == 0) {
                (**(code **)(pcStack_68 + 8))();
              }
            }
            plVar17 = *(long **)(param_4 + 8);
            uVar13 = plVar17[1];
            plVar1 = (long *)*plVar17;
            if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
              uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
              plVar1 = plVar17;
            }
            *param_1 = (long)plVar1;
            param_1[1] = uVar13;
            uVar9 = 1;
            param_4 = pcStack_68;
          }
          *(undefined1 *)(param_1 + 2) = uVar9;
          if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
            return param_4;
          }
          ___stack_chk_fail();
LAB_003523d4:
          func_0x0033b318(&puStack_80);
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x3523e0);
          (*pcVar6)();
        }
        ppuVar4 = &puStack_80;
        ppuVar16 = &puStack_80;
        lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
        if ((*(byte *)(*(long *)param_4 + 1) >> 3 & 1) == 0) {
          uVar9 = 0;
          *(undefined1 *)param_1 = 0;
        }
        else {
          func_0x003fe980(&pcStack_68,*(undefined8 *)(*(long *)param_4 + 0x180));
          if (pcStack_68 == (code *)0x0) {
            uVar13 = (ulong)bStack_60;
            puVar15 = &uStack_5f;
          }
          else {
            uVar13 = CONCAT71(uStack_5f,bStack_60);
            puVar15 = puStack_58;
            if (0x7ffffffffffffff7 < uVar13) goto LAB_003521a8;
          }
          if (uVar13 < 0x17) {
            uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
            if (uVar13 != 0) goto LAB_003520e4;
          }
          else {
            uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
            if ((uVar13 | 7) != 0x17) {
              uVar11 = uVar13 | 7;
            }
            ppuVar4 = (undefined1 **)(uVar11 + 1);
            __Znwm();
            uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
            puStack_80 = (undefined1 *)ppuVar4;
            uStack_78 = uVar13;
LAB_003520e4:
            _memmove(ppuVar4,puVar15,uVar13);
            ppuVar16 = ppuVar4;
          }
          *(undefined1 *)((long)ppuVar16 + uVar13) = 0;
          puVar12 = *(undefined8 **)(param_4 + 8);
          if (*(char *)((long)puVar12 + 0x17) < '\0') {
            __ZdlPv(*puVar12);
          }
          puVar12[2] = uStack_70;
          puVar12[1] = uStack_78;
          *puVar12 = puStack_80;
          uStack_70 = uStack_70 & 0xffffffffffffff;
          puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
          if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
            do {
              lVar18 = *(long *)pcStack_68;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
              if (bVar3) {
                *(long *)pcStack_68 = lVar18 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar18 + -1 == 0) {
              (**(code **)(pcStack_68 + 8))();
            }
          }
          plVar17 = *(long **)(param_4 + 8);
          uVar13 = plVar17[1];
          plVar1 = (long *)*plVar17;
          if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
            uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
            plVar1 = plVar17;
          }
          *param_1 = (long)plVar1;
          param_1[1] = uVar13;
          uVar9 = 1;
          param_4 = pcStack_68;
        }
        *(undefined1 *)(param_1 + 2) = uVar9;
        if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
          return param_4;
        }
        ___stack_chk_fail();
LAB_003521a8:
        func_0x0033b318(&puStack_80);
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x3521b4);
        (*pcVar6)();
      }
      ppuVar4 = &puStack_80;
      ppuVar16 = &puStack_80;
      lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
      if ((*(byte *)(*(long *)param_4 + 1) >> 2 & 1) == 0) {
        uVar9 = 0;
        *(undefined1 *)param_1 = 0;
      }
      else {
        FUN_0034eb70(&pcStack_68,(long)*(int *)(*(long *)param_4 + 0x188));
        if (pcStack_68 == (code *)0x0) {
          uVar13 = (ulong)bStack_60;
          puVar15 = &uStack_5f;
        }
        else {
          uVar13 = CONCAT71(uStack_5f,bStack_60);
          puVar15 = puStack_58;
          if (0x7ffffffffffffff7 < uVar13) goto LAB_00351fa4;
        }
        if (uVar13 < 0x17) {
          uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
          if (uVar13 != 0) goto LAB_00351ee0;
        }
        else {
          uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
          if ((uVar13 | 7) != 0x17) {
            uVar11 = uVar13 | 7;
          }
          ppuVar4 = (undefined1 **)(uVar11 + 1);
          __Znwm();
          uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
          puStack_80 = (undefined1 *)ppuVar4;
          uStack_78 = uVar13;
LAB_00351ee0:
          _memmove(ppuVar4,puVar15,uVar13);
          ppuVar16 = ppuVar4;
        }
        *(undefined1 *)((long)ppuVar16 + uVar13) = 0;
        puVar12 = *(undefined8 **)(param_4 + 8);
        if (*(char *)((long)puVar12 + 0x17) < '\0') {
          __ZdlPv(*puVar12);
        }
        puVar12[2] = uStack_70;
        puVar12[1] = uStack_78;
        *puVar12 = puStack_80;
        uStack_70 = uStack_70 & 0xffffffffffffff;
        puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
        if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
          do {
            lVar18 = *(long *)pcStack_68;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
            if (bVar3) {
              *(long *)pcStack_68 = lVar18 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar18 + -1 == 0) {
            (**(code **)(pcStack_68 + 8))();
          }
        }
        plVar17 = *(long **)(param_4 + 8);
        uVar13 = plVar17[1];
        plVar1 = (long *)*plVar17;
        if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
          uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
          plVar1 = plVar17;
        }
        *param_1 = (long)plVar1;
        param_1[1] = uVar13;
        uVar9 = 1;
        param_4 = pcStack_68;
      }
      *(undefined1 *)(param_1 + 2) = uVar9;
      if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
        return param_4;
      }
      ___stack_chk_fail();
LAB_00351fa4:
      func_0x0033b318(&puStack_80);
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x351fb0);
      (*pcVar6)();
    }
    lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
    if ((*(byte *)(*(long *)param_4 + 1) >> 1 & 1) == 0) {
      uVar9 = 0;
      *(undefined1 *)param_1 = 0;
    }
    else {
      uStack_70 = CONCAT17(*(undefined1 *)(*(long *)param_4 + 0x18c),(undefined7)uStack_70);
      func_0x003b095c(&pcStack_68,(long)&uStack_70 + 7);
      if (pcStack_68 == (code *)0x0) {
        puVar14 = (undefined1 *)(ulong)bStack_60;
        puVar15 = &uStack_5f;
      }
      else {
        puVar14 = (undefined1 *)CONCAT71(uStack_5f,bStack_60);
        puVar15 = puStack_58;
        if ((undefined1 *)0x7ffffffffffffff7 < puVar14) goto LAB_00351d98;
      }
      if ((undefined1 *)((long)&MACH_HEADER.sizeofcmds + 2) < puVar14) {
        uVar13 = ((ulong)puVar14 & 0x7ffffffffffffff8) + 8;
        if (((ulong)puVar14 | 7) != 0x17) {
          uVar13 = (ulong)puVar14 | 7;
        }
        pppppppuVar5 = (undefined8 *******)(uVar13 + 1);
        __Znwm();
        uStack_78 = uVar13 + 1 | 0x8000000000000000;
        pppppppuStack_88 = pppppppuVar5;
        puStack_80 = puVar14;
LAB_00351cd4:
        _memmove(pppppppuVar5,puVar15,puVar14);
      }
      else {
        uStack_78 = CONCAT17((char)puVar14,(undefined7)uStack_78);
        pppppppuVar5 = &pppppppuStack_88;
        if (puVar14 != (undefined1 *)0x0) goto LAB_00351cd4;
      }
      *(undefined1 *)((long)pppppppuVar5 + (long)puVar14) = 0;
      puVar12 = *(undefined8 **)(param_4 + 8);
      if (*(char *)((long)puVar12 + 0x17) < '\0') {
        __ZdlPv(*puVar12);
      }
      puVar12[2] = uStack_78;
      puVar12[1] = puStack_80;
      *puVar12 = pppppppuStack_88;
      uStack_78 = uStack_78 & 0xffffffffffffff;
      pppppppuStack_88 = (undefined8 *******)((ulong)pppppppuStack_88 & 0xffffffffffffff00);
      if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
        do {
          lVar18 = *(long *)pcStack_68;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
          if (bVar3) {
            *(long *)pcStack_68 = lVar18 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar18 + -1 == 0) {
          (**(code **)(pcStack_68 + 8))();
        }
      }
      plVar17 = *(long **)(param_4 + 8);
      uVar13 = plVar17[1];
      plVar1 = (long *)*plVar17;
      if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
        uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
        plVar1 = plVar17;
      }
      *param_1 = (long)plVar1;
      param_1[1] = uVar13;
      uVar9 = 1;
      param_4 = pcStack_68;
    }
    *(undefined1 *)(param_1 + 2) = uVar9;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
      return param_4;
    }
    ___stack_chk_fail();
LAB_00351d98:
    func_0x0033b318(&pppppppuStack_88);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x351da4);
    (*pcVar6)();
  }
  ppuVar4 = &puStack_80;
  ppuVar16 = &puStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  if ((*(byte *)(*(long *)param_4 + 1) & 1) == 0) {
    uVar9 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    FUN_0034f290(&pcStack_68,*(undefined4 *)(*(long *)param_4 + 400));
    if (pcStack_68 == (code *)0x0) {
      uVar13 = (ulong)bStack_60;
      puVar15 = &uStack_5f;
    }
    else {
      uVar13 = CONCAT71(uStack_5f,bStack_60);
      puVar15 = puStack_58;
      if (0x7ffffffffffffff7 < uVar13) goto LAB_00351b78;
    }
    if (uVar13 < 0x17) {
      uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
      if (uVar13 != 0) goto LAB_00351ab4;
    }
    else {
      uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
      if ((uVar13 | 7) != 0x17) {
        uVar11 = uVar13 | 7;
      }
      ppuVar4 = (undefined1 **)(uVar11 + 1);
      __Znwm();
      uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
      puStack_80 = (undefined1 *)ppuVar4;
      uStack_78 = uVar13;
LAB_00351ab4:
      _memmove(ppuVar4,puVar15,uVar13);
      ppuVar16 = ppuVar4;
    }
    *(undefined1 *)((long)ppuVar16 + uVar13) = 0;
    puVar12 = *(undefined8 **)(param_4 + 8);
    if (*(char *)((long)puVar12 + 0x17) < '\0') {
      __ZdlPv(*puVar12);
    }
    puVar12[2] = uStack_70;
    puVar12[1] = uStack_78;
    *puVar12 = puStack_80;
    uStack_70 = uStack_70 & 0xffffffffffffff;
    puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
    if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
      do {
        lVar18 = *(long *)pcStack_68;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
        if (bVar3) {
          *(long *)pcStack_68 = lVar18 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar18 + -1 == 0) {
        (**(code **)(pcStack_68 + 8))();
      }
    }
    plVar17 = *(long **)(param_4 + 8);
    uVar13 = plVar17[1];
    plVar1 = (long *)*plVar17;
    if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
      uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
      plVar1 = plVar17;
    }
    *param_1 = (long)plVar1;
    param_1[1] = uVar13;
    uVar9 = 1;
    param_4 = pcStack_68;
  }
  *(undefined1 *)(param_1 + 2) = uVar9;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return param_4;
  }
  ___stack_chk_fail();
LAB_00351b78:
  func_0x0033b318(&puStack_80);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x351b84);
  (*pcVar6)();
}



/* Entry: 003519ec; end: 00351baf;  */

void FUN_003519ec(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 **ppuVar5;
  undefined1 uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined7 *puVar11;
  undefined1 **ppuVar12;
  undefined1 *puStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  ppuVar5 = &puStack_80;
  ppuVar12 = &puStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  if ((*(byte *)(*param_2 + 1) & 1) == 0) {
    uVar6 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    FUN_0034f290(&plStack_68,*(undefined4 *)(*param_2 + 400));
    if (plStack_68 == (long *)0x0) {
      uVar9 = (ulong)bStack_60;
      puVar11 = &uStack_5f;
    }
    else {
      uVar9 = CONCAT71(uStack_5f,bStack_60);
      puVar11 = puStack_58;
      if (0x7ffffffffffffff7 < uVar9) goto LAB_00351b78;
    }
    if (uVar9 < 0x17) {
      uStack_70 = CONCAT17((char)uVar9,(undefined7)uStack_70);
      if (uVar9 != 0) goto LAB_00351ab4;
    }
    else {
      uVar1 = (uVar9 & 0x7ffffffffffffff8) + 8;
      if ((uVar9 | 7) != 0x17) {
        uVar1 = uVar9 | 7;
      }
      ppuVar5 = (undefined1 **)(uVar1 + 1);
      __Znwm();
      uStack_70 = (ulong)(uVar1 + 1) | 0x8000000000000000;
      puStack_80 = (undefined1 *)ppuVar5;
      uStack_78 = uVar9;
LAB_00351ab4:
      _memmove(ppuVar5,puVar11,uVar9);
      ppuVar12 = ppuVar5;
    }
    *(undefined1 *)((long)ppuVar12 + uVar9) = 0;
    puVar10 = (undefined8 *)param_2[1];
    if (*(char *)((long)puVar10 + 0x17) < '\0') {
      __ZdlPv(*puVar10);
    }
    puVar10[2] = uStack_70;
    puVar10[1] = uStack_78;
    *puVar10 = puStack_80;
    uStack_70 = uStack_70 & 0xffffffffffffff;
    puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_68) {
      do {
        lVar7 = *plStack_68;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
        if (bVar3) {
          *plStack_68 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_68[1])();
      }
    }
    puVar8 = (undefined8 *)param_2[1];
    uVar9 = puVar8[1];
    puVar10 = (undefined8 *)*puVar8;
    if (-1 < (char)*(byte *)((long)puVar8 + 0x17)) {
      uVar9 = (ulong)*(byte *)((long)puVar8 + 0x17);
      puVar10 = puVar8;
    }
    *param_1 = puVar10;
    param_1[1] = uVar9;
    uVar6 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar6;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_00351b78:
  func_0x0033b318(&puStack_80);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x351b84);
  (*pcVar4)();
}



/* Entry: 00351bb0; end: 00351c03;  */

/* WARNING: Type propagation algorithm not settling */

code * FUN_00351bb0(long *param_1,code *param_2,code *param_3,code *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *******pppppppuVar4;
  undefined1 **ppuVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  undefined1 uVar9;
  long *extraout_x8;
  long *extraout_x8_00;
  code *pcVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  code *unaff_x19;
  code *unaff_x20;
  undefined8 *unaff_x21;
  undefined1 *puVar14;
  undefined8 *unaff_x22;
  undefined7 *puVar15;
  code *unaff_x23;
  undefined1 **ppuVar16;
  long *plVar17;
  undefined8 unaff_x24;
  long lVar18;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long *plVar19;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar20;
  undefined8 *******pppppppuStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  if ((param_3 != (code *)&MACH_HEADER.sizeofcmds) ||
     ((*(long *)param_2 != 0x6363612d63707267 || *(long *)(param_2 + 8) != 0x6f636e652d747065) ||
      *(int *)(param_2 + 0x10) != 0x676e6964)) {
    if ((param_3 != (code *)((long)&MACH_HEADER.cpusubtype + 3)) ||
       (*(long *)param_2 != 0x6174732d63707267 || *(long *)(param_2 + 3) != 0x7375746174732d63)) {
      if ((param_3 != (code *)&MACH_HEADER.filetype) ||
         (*(long *)param_2 != 0x6d69742d63707267 || *(int *)(param_2 + 8) != 0x74756f65)) {
        if ((param_3 != (code *)((long)&MACH_HEADER.flags + 2)) ||
           (((*(long *)param_2 != 0x6572702d63707267 || *(long *)(param_2 + 8) != 0x70722d73756f6976
             ) || *(long *)(param_2 + 0x10) != 0x706d657474612d63) ||
            *(short *)(param_2 + 0x18) != 0x7374)) {
          if ((param_3 != (code *)((long)&MACH_HEADER.sizeofcmds + 2)) ||
             ((*(long *)param_2 != 0x7465722d63707267 ||
              *(long *)(param_2 + 8) != 0x62687375702d7972) ||
              *(long *)(param_2 + 0xe) != 0x736d2d6b63616268)) {
            if ((param_3 == (code *)((long)&MACH_HEADER.cpusubtype + 2)) &&
               (*(long *)param_2 == 0x6567612d72657375 && *(short *)(param_2 + 8) == 0x746e)) {
              lVar18 = *(long *)param_4;
              if ((*(byte *)(lVar18 + 1) >> 6 & 1) == 0) {
                uVar9 = 0;
                *(undefined1 *)param_1 = 0;
              }
              else {
                if (*(long *)(lVar18 + 0x150) == 0) {
                  lVar20 = lVar18 + 0x159;
                  uVar13 = (ulong)*(byte *)(lVar18 + 0x158);
                }
                else {
                  uVar13 = *(ulong *)(lVar18 + 0x158);
                  lVar20 = *(long *)(lVar18 + 0x160);
                }
                *param_1 = lVar20;
                param_1[1] = uVar13;
                uVar9 = 1;
              }
              *(undefined1 *)(param_1 + 2) = uVar9;
              return param_4;
            }
            if ((param_3 == (code *)&MACH_HEADER.filetype) &&
               (*(long *)param_2 == 0x73656d2d63707267 && *(int *)(param_2 + 8) == 0x65676173)) {
              lVar18 = *(long *)param_4;
              if (*(char *)(lVar18 + 1) < '\0') {
                if (*(long *)(lVar18 + 0x130) == 0) {
                  lVar20 = lVar18 + 0x139;
                  uVar13 = (ulong)*(byte *)(lVar18 + 0x138);
                }
                else {
                  uVar13 = *(ulong *)(lVar18 + 0x138);
                  lVar20 = *(long *)(lVar18 + 0x140);
                }
                *param_1 = lVar20;
                param_1[1] = uVar13;
                uVar9 = 1;
              }
              else {
                uVar9 = 0;
                *(undefined1 *)param_1 = 0;
              }
              *(undefined1 *)(param_1 + 2) = uVar9;
              return param_4;
            }
            if ((param_3 == (code *)&MACH_HEADER.cputype) && (*(int *)param_2 == 0x74736f68)) {
              lVar18 = *(long *)param_4;
              if ((*(byte *)(lVar18 + 2) & 1) == 0) {
                uVar9 = 0;
                *(undefined1 *)param_1 = 0;
              }
              else {
                if (*(long *)(lVar18 + 0x110) == 0) {
                  lVar20 = lVar18 + 0x119;
                  uVar13 = (ulong)*(byte *)(lVar18 + 0x118);
                }
                else {
                  uVar13 = *(ulong *)(lVar18 + 0x118);
                  lVar20 = *(long *)(lVar18 + 0x120);
                }
                *param_1 = lVar20;
                param_1[1] = uVar13;
                uVar9 = 1;
              }
              *(undefined1 *)(param_1 + 2) = uVar9;
              return param_4;
            }
            if ((param_3 == (code *)((long)&MACH_HEADER.flags + 1)) &&
               (((*(long *)param_2 == 0x746e696f70646e65 &&
                 *(long *)(param_2 + 8) == 0x656d2d64616f6c2d) &&
                *(long *)(param_2 + 0x10) == 0x69622d7363697274) && param_2[0x18] == (code)0x6e)) {
              lVar18 = *(long *)param_4;
              if ((*(byte *)(lVar18 + 2) >> 1 & 1) == 0) {
                uVar9 = 0;
                *(undefined1 *)param_1 = 0;
              }
              else {
                if (*(long *)(lVar18 + 0xf0) == 0) {
                  lVar20 = lVar18 + 0xf9;
                  uVar13 = (ulong)*(byte *)(lVar18 + 0xf8);
                }
                else {
                  uVar13 = *(ulong *)(lVar18 + 0xf8);
                  lVar20 = *(long *)(lVar18 + 0x100);
                }
                *param_1 = lVar20;
                param_1[1] = uVar13;
                uVar9 = 1;
              }
              *(undefined1 *)(param_1 + 2) = uVar9;
              return param_4;
            }
            if ((param_3 == (code *)((long)&MACH_HEADER.sizeofcmds + 1)) &&
               ((*(long *)param_2 == 0x7265732d63707267 &&
                *(long *)(param_2 + 8) == 0x746174732d726576) &&
                *(long *)(param_2 + 0xd) == 0x6e69622d73746174)) {
              lVar18 = *(long *)param_4;
              if ((*(byte *)(lVar18 + 2) >> 2 & 1) == 0) {
                uVar9 = 0;
                *(undefined1 *)param_1 = 0;
              }
              else {
                if (*(long *)(lVar18 + 0xd0) == 0) {
                  lVar20 = lVar18 + 0xd9;
                  uVar13 = (ulong)*(byte *)(lVar18 + 0xd8);
                }
                else {
                  uVar13 = *(ulong *)(lVar18 + 0xd8);
                  lVar20 = *(long *)(lVar18 + 0xe0);
                }
                *param_1 = lVar20;
                param_1[1] = uVar13;
                uVar9 = 1;
              }
              *(undefined1 *)(param_1 + 2) = uVar9;
              return param_4;
            }
            if ((param_3 == (code *)((long)&MACH_HEADER.filetype + 2)) &&
               (*(long *)param_2 == 0x6172742d63707267 &&
                *(long *)(param_2 + 6) == 0x6e69622d65636172)) {
              lVar18 = *(long *)param_4;
              if ((*(byte *)(lVar18 + 2) >> 3 & 1) == 0) {
                uVar9 = 0;
                *(undefined1 *)param_1 = 0;
              }
              else {
                if (*(long *)(lVar18 + 0xb0) == 0) {
                  lVar20 = lVar18 + 0xb9;
                  uVar13 = (ulong)*(byte *)(lVar18 + 0xb8);
                }
                else {
                  uVar13 = *(ulong *)(lVar18 + 0xb8);
                  lVar20 = *(long *)(lVar18 + 0xc0);
                }
                *param_1 = lVar20;
                param_1[1] = uVar13;
                uVar9 = 1;
              }
              *(undefined1 *)(param_1 + 2) = uVar9;
              return param_4;
            }
            if ((param_3 == (code *)((long)&MACH_HEADER.filetype + 1)) &&
               (*(long *)param_2 == 0x6761742d63707267 &&
                *(long *)(param_2 + 5) == 0x6e69622d73676174)) {
              lVar18 = *(long *)param_4;
              if ((*(byte *)(lVar18 + 2) >> 4 & 1) == 0) {
                uVar9 = 0;
                *(undefined1 *)param_1 = 0;
              }
              else {
                if (*(long *)(lVar18 + 0x90) == 0) {
                  lVar20 = lVar18 + 0x99;
                  uVar13 = (ulong)*(byte *)(lVar18 + 0x98);
                }
                else {
                  uVar13 = *(ulong *)(lVar18 + 0x98);
                  lVar20 = *(long *)(lVar18 + 0xa0);
                }
                *param_1 = lVar20;
                param_1[1] = uVar13;
                uVar9 = 1;
              }
              *(undefined1 *)(param_1 + 2) = uVar9;
              return param_4;
            }
            if ((param_3 == (code *)((long)&MACH_HEADER.ncmds + 3)) &&
               ((*(long *)param_2 == 0x635f626c63707267 &&
                *(long *)(param_2 + 8) == 0x74735f746e65696c) &&
                *(long *)(param_2 + 0xb) == 0x73746174735f746e)) {
              unaff_x29 = &stack0xfffffffffffffff0;
              if ((*(byte *)(*(long *)param_4 + 2) >> 5 & 1) == 0) {
                *(undefined1 *)param_1 = 0;
                *(undefined1 *)(param_1 + 2) = 0;
                return param_4;
              }
              unaff_x30 = FUN_00352a68;
              pcVar6 = param_4;
              _abort();
              register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
              param_2 = param_4;
              param_4 = pcVar6;
              param_1 = extraout_x8;
            }
            if ((param_3 == (code *)((long)&MACH_HEADER.cpusubtype + 3)) &&
               (*(long *)param_2 == 0x2d74736f632d626c &&
                *(long *)(param_2 + 3) == 0x6e69622d74736f63)) {
              *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
              *(code **)((long)register0x00000008 + -0x38) = unaff_x23;
              *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
              *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
              *(code **)((long)register0x00000008 + -0x20) = unaff_x20;
              *(code **)((long)register0x00000008 + -0x18) = unaff_x19;
              *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
              *(code **)((long)register0x00000008 + -8) = unaff_x30;
              unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
              *(undefined8 *)((long)register0x00000008 + -0x48) =
                   *(undefined8 *)PTR____stack_chk_guard_00999f88;
              lVar18 = *(long *)param_4;
              unaff_x19 = param_4;
              pcVar6 = param_4;
              if ((*(byte *)(lVar18 + 2) >> 6 & 1) == 0) {
                uVar9 = 0;
                *(undefined1 *)param_1 = 0;
              }
              else {
                puVar12 = *(undefined8 **)(param_4 + 8);
                if (*(char *)((long)puVar12 + 0x17) < '\0') {
                  *(undefined1 *)*puVar12 = 0;
                  puVar12[1] = 0;
                }
                else {
                  *(undefined1 *)puVar12 = 0;
                  *(undefined1 *)((long)puVar12 + 0x17) = 0;
                }
                uVar13 = *(ulong *)(lVar18 + 0x60);
                unaff_x21 = (undefined8 *)(lVar18 + 0x68);
                if ((uVar13 & 1) != 0) {
                  unaff_x21 = (undefined8 *)*unaff_x21;
                }
                if (1 < uVar13) {
                  unaff_x22 = unaff_x21 + (uVar13 >> 1) * 4;
                  unaff_x23 = (code *)((long)register0x00000008 + -0x5f);
                  do {
                    lVar18 = *(long *)(param_4 + 8);
                    if (*(char *)(lVar18 + 0x17) < '\0') {
                      if (*(long *)(lVar18 + 8) != 0) goto LAB_00352b64;
                    }
                    else if (*(char *)(lVar18 + 0x17) != '\0') {
LAB_00352b64:
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                                (lVar18,0x2c);
                    }
                    FUN_003fee84((undefined1 *)((long)register0x00000008 + -0x68),unaff_x21);
                    uVar13 = *(ulong *)((long)register0x00000008 + -0x60) & 0xff;
                    param_3 = unaff_x23;
                    if (*(long *)((long)register0x00000008 + -0x68) != 0) {
                      uVar13 = *(ulong *)((long)register0x00000008 + -0x60);
                      param_3 = *(code **)((long)register0x00000008 + -0x58);
                    }
                    pcVar6 = param_3 + uVar13;
                    FUN_00352c98(*(long *)(param_4 + 8));
                    unaff_x19 = *(code **)((long)register0x00000008 + -0x68);
                    if ((code *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
                      do {
                        lVar18 = *(long *)unaff_x19;
                        cVar2 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
                        if (bVar3) {
                          *(long *)unaff_x19 = lVar18 + -1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                      if (lVar18 + -1 == 0) {
                        (**(code **)(unaff_x19 + 8))();
                      }
                    }
                    unaff_x21 = unaff_x21 + 4;
                  } while (unaff_x21 != unaff_x22);
                }
                plVar17 = *(long **)(param_4 + 8);
                uVar13 = plVar17[1];
                plVar1 = (long *)*plVar17;
                if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
                  uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
                  plVar1 = plVar17;
                }
                *param_1 = (long)plVar1;
                param_1[1] = uVar13;
                uVar9 = 1;
                unaff_x20 = param_4;
              }
              *(undefined1 *)(param_1 + 2) = uVar9;
              if (*(long *)PTR____stack_chk_guard_00999f88 ==
                  *(long *)((long)register0x00000008 + -0x48)) {
                return unaff_x19;
              }
              ___stack_chk_fail();
              param_4 = pcVar6;
              if ((int)param_3 != 0) {
                func_0x0040cf10();
                FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x68));
                param_4 = pcVar6;
              }
              unaff_x30 = FUN_00352c58;
              param_2 = unaff_x19;
              __Unwind_Resume();
              register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
              param_1 = extraout_x8_00;
            }
            if ((param_3 == (code *)&MACH_HEADER.cpusubtype) &&
               (*(long *)param_2 == 0x6e656b6f742d626c)) {
              lVar18 = *(long *)param_4;
              if (*(char *)(lVar18 + 2) < '\0') {
                if (*(long *)(lVar18 + 0x40) == 0) {
                  lVar20 = lVar18 + 0x49;
                  uVar13 = (ulong)*(byte *)(lVar18 + 0x48);
                }
                else {
                  uVar13 = *(ulong *)(lVar18 + 0x48);
                  lVar20 = *(long *)(lVar18 + 0x50);
                }
                *param_1 = lVar20;
                param_1[1] = uVar13;
                uVar9 = 1;
              }
              else {
                uVar9 = 0;
                *(undefined1 *)param_1 = 0;
              }
              *(undefined1 *)(param_1 + 2) = uVar9;
              return param_4;
            }
            lVar18 = *(long *)param_4;
            plVar1 = *(long **)(param_4 + 8);
            pcVar6 = (code *)(lVar18 + 0x1f0);
            *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
            *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
            *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
            *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
            *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
            *(code **)((long)register0x00000008 + -0x38) = unaff_x23;
            *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
            *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
            *(code **)((long)register0x00000008 + -0x20) = unaff_x20;
            *(code **)((long)register0x00000008 + -0x18) = unaff_x19;
            *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
            *(code **)((long)register0x00000008 + -8) = unaff_x30;
            *(undefined8 *)((long)register0x00000008 + -0x70) =
                 *(undefined8 *)PTR____stack_chk_guard_00999f88;
            *(undefined1 *)param_1 = 0;
            *(undefined1 *)(param_1 + 2) = 0;
            plVar17 = *(long **)(lVar18 + 0x1f8);
            pcVar7 = param_2;
            pcVar8 = param_3;
            if ((plVar17 != (long *)0x0) && (plVar17[1] != 0)) {
              lVar18 = 0;
              bVar3 = false;
              plVar19 = (long *)*param_1;
              uVar13 = param_1[1];
              do {
                if (plVar17[lVar18 * 8 + 2] == 0) {
                  pcVar6 = (code *)((long)plVar17 + lVar18 * 0x40 + 0x19);
                  pcVar10 = (code *)(ulong)*(byte *)(plVar17 + lVar18 * 8 + 3);
                }
                else {
                  pcVar10 = (code *)plVar17[lVar18 * 8 + 3];
                  pcVar6 = (code *)plVar17[lVar18 * 8 + 4];
                }
                if ((pcVar10 == param_3) &&
                   (pcVar7 = param_2, pcVar8 = param_3, _memcmp(pcVar6,param_2), (int)pcVar6 == 0))
                {
                  if (bVar3) {
                    *(long **)((long)register0x00000008 + -0xa0) = plVar19;
                    *(ulong *)((long)register0x00000008 + -0x98) = uVar13;
                    *(char **)((long)register0x00000008 + -0xd0) = ",";
                    *(undefined8 *)((long)register0x00000008 + -200) = 1;
                    if (plVar17[lVar18 * 8 + 6] == 0) {
                      lVar20 = (long)plVar17 + lVar18 * 0x40 + 0x39;
                      uVar13 = (ulong)*(byte *)(plVar17 + lVar18 * 8 + 7);
                    }
                    else {
                      uVar13 = plVar17[lVar18 * 8 + 7];
                      lVar20 = plVar17[lVar18 * 8 + 8];
                    }
                    *(long *)((long)register0x00000008 + -0x100) = lVar20;
                    *(ulong *)((long)register0x00000008 + -0xf8) = uVar13;
                    pcVar6 = (code *)((long)register0x00000008 + -0xa0);
                    pcVar7 = (code *)((long)register0x00000008 + -0xd0);
                    pcVar8 = (code *)((long)register0x00000008 + -0x100);
                    FUN_00575ddc((undefined1 *)((long)register0x00000008 + -0x118),pcVar6,pcVar7);
                    if (*(char *)((long)plVar1 + 0x17) < '\0') {
                      pcVar6 = (code *)*plVar1;
                      __ZdlPv();
                    }
                    uVar11 = *(ulong *)((long)register0x00000008 + -0x108);
                    plVar1[2] = uVar11;
                    lVar20 = *(long *)((long)register0x00000008 + -0x118);
                    plVar1[1] = *(long *)((long)register0x00000008 + -0x110);
                    *plVar1 = lVar20;
                    uVar13 = plVar1[1];
                    plVar19 = (long *)*plVar1;
                    if (-1 < (long)uVar11) {
                      uVar13 = uVar11 >> 0x38;
                      plVar19 = plVar1;
                    }
                    *param_1 = (long)plVar19;
                    param_1[1] = uVar13;
                  }
                  else {
                    if (plVar17[lVar18 * 8 + 6] == 0) {
                      plVar19 = (long *)((long)plVar17 + lVar18 * 0x40 + 0x39);
                      uVar13 = (ulong)*(byte *)(plVar17 + lVar18 * 8 + 7);
                    }
                    else {
                      uVar13 = plVar17[lVar18 * 8 + 7];
                      plVar19 = (long *)plVar17[lVar18 * 8 + 8];
                    }
                    *param_1 = (long)plVar19;
                    param_1[1] = uVar13;
                    bVar3 = true;
                    *(undefined1 *)(param_1 + 2) = 1;
                  }
                }
                lVar18 = lVar18 + 1;
                do {
                  if (lVar18 != plVar17[1]) goto LAB_003fe6e4;
                  lVar18 = 0;
                  plVar17 = (long *)*plVar17;
                } while (plVar17 != (long *)0x0);
                lVar18 = 0;
LAB_003fe6e4:
              } while ((plVar17 != (long *)0x0) || (lVar18 != 0));
            }
            if (*(long *)PTR____stack_chk_guard_00999f88 ==
                *(long *)((long)register0x00000008 + -0x70)) {
              return pcVar6;
            }
            ___stack_chk_fail();
            __Unwind_Resume();
            *(undefined1 **)((long)register0x00000008 + -0x130) =
                 (undefined1 *)((long)register0x00000008 + -0x10);
            *(code **)((long)register0x00000008 + -0x128) = FUN_003fe72c;
            if (*(long *)pcVar6 == 0) {
              pcVar10 = pcVar6 + 9;
              uVar13 = (ulong)(byte)pcVar6[8];
            }
            else {
              uVar13 = *(ulong *)(pcVar6 + 8);
              pcVar10 = *(code **)(pcVar6 + 0x10);
            }
            if (uVar13 == 0x10) {
              if (*(long *)pcVar10 == 0x746163696c707061 &&
                  *(long *)(pcVar10 + 8) == 0x637072672f6e6f69) {
                return (code *)0x0;
              }
            }
            else if (uVar13 < 0x11) {
              if (uVar13 == 0) {
                return (code *)((long)&MACH_HEADER.magic + 1);
              }
            }
            else {
              if ((*(long *)pcVar10 == 0x746163696c707061 &&
                  *(long *)(pcVar10 + 8) == 0x637072672f6e6f69) && pcVar10[0x10] == (code)0x3b) {
                return (code *)0x0;
              }
              if ((*(long *)pcVar10 == 0x746163696c707061 &&
                  *(long *)(pcVar10 + 8) == 0x637072672f6e6f69) && pcVar10[0x10] == (code)0x2b) {
                return (code *)0x0;
              }
            }
            (*pcVar8)(pcVar7,"invalid value",0xd);
            return (code *)((long)&MACH_HEADER.magic + 2);
          }
          ppuVar5 = &puStack_80;
          ppuVar16 = &puStack_80;
          lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
          if ((*(byte *)(*(long *)param_4 + 1) >> 5 & 1) == 0) {
            uVar9 = 0;
            *(undefined1 *)param_1 = 0;
          }
          else {
            FUN_0034eb70(&pcStack_68,*(undefined8 *)(*(long *)param_4 + 0x170));
            if (pcStack_68 == (code *)0x0) {
              uVar13 = (ulong)bStack_60;
              puVar15 = &uStack_5f;
            }
            else {
              uVar13 = CONCAT71(uStack_5f,bStack_60);
              puVar15 = puStack_58;
              if (0x7ffffffffffffff7 < uVar13) goto LAB_003525f4;
            }
            if (uVar13 < 0x17) {
              uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
              if (uVar13 != 0) goto LAB_00352530;
            }
            else {
              uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
              if ((uVar13 | 7) != 0x17) {
                uVar11 = uVar13 | 7;
              }
              ppuVar5 = (undefined1 **)(uVar11 + 1);
              __Znwm();
              uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
              puStack_80 = (undefined1 *)ppuVar5;
              uStack_78 = uVar13;
LAB_00352530:
              _memmove(ppuVar5,puVar15,uVar13);
              ppuVar16 = ppuVar5;
            }
            *(undefined1 *)((long)ppuVar16 + uVar13) = 0;
            puVar12 = *(undefined8 **)(param_4 + 8);
            if (*(char *)((long)puVar12 + 0x17) < '\0') {
              __ZdlPv(*puVar12);
            }
            puVar12[2] = uStack_70;
            puVar12[1] = uStack_78;
            *puVar12 = puStack_80;
            uStack_70 = uStack_70 & 0xffffffffffffff;
            puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
            if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
              do {
                lVar18 = *(long *)pcStack_68;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
                if (bVar3) {
                  *(long *)pcStack_68 = lVar18 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar18 + -1 == 0) {
                (**(code **)(pcStack_68 + 8))();
              }
            }
            plVar17 = *(long **)(param_4 + 8);
            uVar13 = plVar17[1];
            plVar1 = (long *)*plVar17;
            if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
              uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
              plVar1 = plVar17;
            }
            *param_1 = (long)plVar1;
            param_1[1] = uVar13;
            uVar9 = 1;
            param_4 = pcStack_68;
          }
          *(undefined1 *)(param_1 + 2) = uVar9;
          if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
            return param_4;
          }
          ___stack_chk_fail();
LAB_003525f4:
          func_0x0033b318(&puStack_80);
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x352600);
          (*pcVar6)();
        }
        ppuVar5 = &puStack_80;
        ppuVar16 = &puStack_80;
        lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
        if ((*(byte *)(*(long *)param_4 + 1) >> 4 & 1) == 0) {
          uVar9 = 0;
          *(undefined1 *)param_1 = 0;
        }
        else {
          FUN_0034eb70(&pcStack_68,*(undefined4 *)(*(long *)param_4 + 0x178));
          if (pcStack_68 == (code *)0x0) {
            uVar13 = (ulong)bStack_60;
            puVar15 = &uStack_5f;
          }
          else {
            uVar13 = CONCAT71(uStack_5f,bStack_60);
            puVar15 = puStack_58;
            if (0x7ffffffffffffff7 < uVar13) goto LAB_003523d4;
          }
          if (uVar13 < 0x17) {
            uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
            if (uVar13 != 0) goto LAB_00352310;
          }
          else {
            uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
            if ((uVar13 | 7) != 0x17) {
              uVar11 = uVar13 | 7;
            }
            ppuVar5 = (undefined1 **)(uVar11 + 1);
            __Znwm();
            uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
            puStack_80 = (undefined1 *)ppuVar5;
            uStack_78 = uVar13;
LAB_00352310:
            _memmove(ppuVar5,puVar15,uVar13);
            ppuVar16 = ppuVar5;
          }
          *(undefined1 *)((long)ppuVar16 + uVar13) = 0;
          puVar12 = *(undefined8 **)(param_4 + 8);
          if (*(char *)((long)puVar12 + 0x17) < '\0') {
            __ZdlPv(*puVar12);
          }
          puVar12[2] = uStack_70;
          puVar12[1] = uStack_78;
          *puVar12 = puStack_80;
          uStack_70 = uStack_70 & 0xffffffffffffff;
          puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
          if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
            do {
              lVar18 = *(long *)pcStack_68;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
              if (bVar3) {
                *(long *)pcStack_68 = lVar18 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar18 + -1 == 0) {
              (**(code **)(pcStack_68 + 8))();
            }
          }
          plVar17 = *(long **)(param_4 + 8);
          uVar13 = plVar17[1];
          plVar1 = (long *)*plVar17;
          if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
            uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
            plVar1 = plVar17;
          }
          *param_1 = (long)plVar1;
          param_1[1] = uVar13;
          uVar9 = 1;
          param_4 = pcStack_68;
        }
        *(undefined1 *)(param_1 + 2) = uVar9;
        if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
          return param_4;
        }
        ___stack_chk_fail();
LAB_003523d4:
        func_0x0033b318(&puStack_80);
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x3523e0);
        (*pcVar6)();
      }
      ppuVar5 = &puStack_80;
      ppuVar16 = &puStack_80;
      lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
      if ((*(byte *)(*(long *)param_4 + 1) >> 3 & 1) == 0) {
        uVar9 = 0;
        *(undefined1 *)param_1 = 0;
      }
      else {
        func_0x003fe980(&pcStack_68,*(undefined8 *)(*(long *)param_4 + 0x180));
        if (pcStack_68 == (code *)0x0) {
          uVar13 = (ulong)bStack_60;
          puVar15 = &uStack_5f;
        }
        else {
          uVar13 = CONCAT71(uStack_5f,bStack_60);
          puVar15 = puStack_58;
          if (0x7ffffffffffffff7 < uVar13) goto LAB_003521a8;
        }
        if (uVar13 < 0x17) {
          uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
          if (uVar13 != 0) goto LAB_003520e4;
        }
        else {
          uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
          if ((uVar13 | 7) != 0x17) {
            uVar11 = uVar13 | 7;
          }
          ppuVar5 = (undefined1 **)(uVar11 + 1);
          __Znwm();
          uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
          puStack_80 = (undefined1 *)ppuVar5;
          uStack_78 = uVar13;
LAB_003520e4:
          _memmove(ppuVar5,puVar15,uVar13);
          ppuVar16 = ppuVar5;
        }
        *(undefined1 *)((long)ppuVar16 + uVar13) = 0;
        puVar12 = *(undefined8 **)(param_4 + 8);
        if (*(char *)((long)puVar12 + 0x17) < '\0') {
          __ZdlPv(*puVar12);
        }
        puVar12[2] = uStack_70;
        puVar12[1] = uStack_78;
        *puVar12 = puStack_80;
        uStack_70 = uStack_70 & 0xffffffffffffff;
        puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
        if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
          do {
            lVar18 = *(long *)pcStack_68;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
            if (bVar3) {
              *(long *)pcStack_68 = lVar18 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar18 + -1 == 0) {
            (**(code **)(pcStack_68 + 8))();
          }
        }
        plVar17 = *(long **)(param_4 + 8);
        uVar13 = plVar17[1];
        plVar1 = (long *)*plVar17;
        if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
          uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
          plVar1 = plVar17;
        }
        *param_1 = (long)plVar1;
        param_1[1] = uVar13;
        uVar9 = 1;
        param_4 = pcStack_68;
      }
      *(undefined1 *)(param_1 + 2) = uVar9;
      if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
        return param_4;
      }
      ___stack_chk_fail();
LAB_003521a8:
      func_0x0033b318(&puStack_80);
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x3521b4);
      (*pcVar6)();
    }
    ppuVar5 = &puStack_80;
    ppuVar16 = &puStack_80;
    lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
    if ((*(byte *)(*(long *)param_4 + 1) >> 2 & 1) == 0) {
      uVar9 = 0;
      *(undefined1 *)param_1 = 0;
    }
    else {
      FUN_0034eb70(&pcStack_68,(long)*(int *)(*(long *)param_4 + 0x188));
      if (pcStack_68 == (code *)0x0) {
        uVar13 = (ulong)bStack_60;
        puVar15 = &uStack_5f;
      }
      else {
        uVar13 = CONCAT71(uStack_5f,bStack_60);
        puVar15 = puStack_58;
        if (0x7ffffffffffffff7 < uVar13) goto LAB_00351fa4;
      }
      if (uVar13 < 0x17) {
        uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
        if (uVar13 != 0) goto LAB_00351ee0;
      }
      else {
        uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
        if ((uVar13 | 7) != 0x17) {
          uVar11 = uVar13 | 7;
        }
        ppuVar5 = (undefined1 **)(uVar11 + 1);
        __Znwm();
        uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
        puStack_80 = (undefined1 *)ppuVar5;
        uStack_78 = uVar13;
LAB_00351ee0:
        _memmove(ppuVar5,puVar15,uVar13);
        ppuVar16 = ppuVar5;
      }
      *(undefined1 *)((long)ppuVar16 + uVar13) = 0;
      puVar12 = *(undefined8 **)(param_4 + 8);
      if (*(char *)((long)puVar12 + 0x17) < '\0') {
        __ZdlPv(*puVar12);
      }
      puVar12[2] = uStack_70;
      puVar12[1] = uStack_78;
      *puVar12 = puStack_80;
      uStack_70 = uStack_70 & 0xffffffffffffff;
      puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
      if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
        do {
          lVar18 = *(long *)pcStack_68;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
          if (bVar3) {
            *(long *)pcStack_68 = lVar18 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar18 + -1 == 0) {
          (**(code **)(pcStack_68 + 8))();
        }
      }
      plVar17 = *(long **)(param_4 + 8);
      uVar13 = plVar17[1];
      plVar1 = (long *)*plVar17;
      if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
        uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
        plVar1 = plVar17;
      }
      *param_1 = (long)plVar1;
      param_1[1] = uVar13;
      uVar9 = 1;
      param_4 = pcStack_68;
    }
    *(undefined1 *)(param_1 + 2) = uVar9;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
      return param_4;
    }
    ___stack_chk_fail();
LAB_00351fa4:
    func_0x0033b318(&puStack_80);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x351fb0);
    (*pcVar6)();
  }
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  if ((*(byte *)(*(long *)param_4 + 1) >> 1 & 1) == 0) {
    uVar9 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    uStack_70 = CONCAT17(*(undefined1 *)(*(long *)param_4 + 0x18c),(undefined7)uStack_70);
    func_0x003b095c(&pcStack_68,(long)&uStack_70 + 7);
    if (pcStack_68 == (code *)0x0) {
      puVar14 = (undefined1 *)(ulong)bStack_60;
      puVar15 = &uStack_5f;
    }
    else {
      puVar14 = (undefined1 *)CONCAT71(uStack_5f,bStack_60);
      puVar15 = puStack_58;
      if ((undefined1 *)0x7ffffffffffffff7 < puVar14) goto LAB_00351d98;
    }
    if ((undefined1 *)((long)&MACH_HEADER.sizeofcmds + 2) < puVar14) {
      uVar13 = ((ulong)puVar14 & 0x7ffffffffffffff8) + 8;
      if (((ulong)puVar14 | 7) != 0x17) {
        uVar13 = (ulong)puVar14 | 7;
      }
      pppppppuVar4 = (undefined8 *******)(uVar13 + 1);
      __Znwm();
      uStack_78 = uVar13 + 1 | 0x8000000000000000;
      pppppppuStack_88 = pppppppuVar4;
      puStack_80 = puVar14;
LAB_00351cd4:
      _memmove(pppppppuVar4,puVar15,puVar14);
    }
    else {
      uStack_78 = CONCAT17((char)puVar14,(undefined7)uStack_78);
      pppppppuVar4 = &pppppppuStack_88;
      if (puVar14 != (undefined1 *)0x0) goto LAB_00351cd4;
    }
    *(undefined1 *)((long)pppppppuVar4 + (long)puVar14) = 0;
    puVar12 = *(undefined8 **)(param_4 + 8);
    if (*(char *)((long)puVar12 + 0x17) < '\0') {
      __ZdlPv(*puVar12);
    }
    puVar12[2] = uStack_78;
    puVar12[1] = puStack_80;
    *puVar12 = pppppppuStack_88;
    uStack_78 = uStack_78 & 0xffffffffffffff;
    pppppppuStack_88 = (undefined8 *******)((ulong)pppppppuStack_88 & 0xffffffffffffff00);
    if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
      do {
        lVar18 = *(long *)pcStack_68;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
        if (bVar3) {
          *(long *)pcStack_68 = lVar18 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar18 + -1 == 0) {
        (**(code **)(pcStack_68 + 8))();
      }
    }
    plVar17 = *(long **)(param_4 + 8);
    uVar13 = plVar17[1];
    plVar1 = (long *)*plVar17;
    if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
      uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
      plVar1 = plVar17;
    }
    *param_1 = (long)plVar1;
    param_1[1] = uVar13;
    uVar9 = 1;
    param_4 = pcStack_68;
  }
  *(undefined1 *)(param_1 + 2) = uVar9;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return param_4;
  }
  ___stack_chk_fail();
LAB_00351d98:
  func_0x0033b318(&pppppppuStack_88);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x351da4);
  (*pcVar6)();
}



/* Entry: 00351c04; end: 00351dcf;  */

void FUN_00351c04(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 ***pppuVar5;
  undefined1 uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined7 *puVar11;
  undefined8 **ppuStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_69;
  long *plStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  if ((*(byte *)(*param_2 + 1) >> 1 & 1) == 0) {
    uVar6 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    uStack_69 = *(undefined1 *)(*param_2 + 0x18c);
    func_0x003b095c(&plStack_68,&uStack_69);
    if (plStack_68 == (long *)0x0) {
      uVar9 = (ulong)bStack_60;
      puVar11 = &uStack_5f;
    }
    else {
      uVar9 = CONCAT71(uStack_5f,bStack_60);
      puVar11 = puStack_58;
      if (0x7ffffffffffffff7 < uVar9) goto LAB_00351d98;
    }
    if (uVar9 < 0x17) {
      uStack_78 = CONCAT17((char)uVar9,(undefined7)uStack_78);
      pppuVar5 = &ppuStack_88;
      if (uVar9 != 0) goto LAB_00351cd4;
    }
    else {
      uVar1 = (uVar9 & 0x7ffffffffffffff8) + 8;
      if ((uVar9 | 7) != 0x17) {
        uVar1 = uVar9 | 7;
      }
      pppuVar5 = (undefined8 ***)(uVar1 + 1);
      __Znwm();
      uStack_78 = uVar1 + 1 | 0x8000000000000000;
      ppuStack_88 = pppuVar5;
      uStack_80 = uVar9;
LAB_00351cd4:
      _memmove(pppuVar5,puVar11,uVar9);
    }
    *(undefined1 *)((long)pppuVar5 + uVar9) = 0;
    puVar10 = (undefined8 *)param_2[1];
    if (*(char *)((long)puVar10 + 0x17) < '\0') {
      __ZdlPv(*puVar10);
    }
    puVar10[2] = uStack_78;
    puVar10[1] = uStack_80;
    *puVar10 = ppuStack_88;
    uStack_78 = uStack_78 & 0xffffffffffffff;
    ppuStack_88 = (undefined8 **)((ulong)ppuStack_88 & 0xffffffffffffff00);
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_68) {
      do {
        lVar7 = *plStack_68;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
        if (bVar3) {
          *plStack_68 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_68[1])();
      }
    }
    puVar8 = (undefined8 *)param_2[1];
    uVar9 = puVar8[1];
    puVar10 = (undefined8 *)*puVar8;
    if (-1 < (char)*(byte *)((long)puVar8 + 0x17)) {
      uVar9 = (ulong)*(byte *)((long)puVar8 + 0x17);
      puVar10 = puVar8;
    }
    *param_1 = puVar10;
    param_1[1] = uVar9;
    uVar6 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar6;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_00351d98:
  func_0x0033b318(&ppuStack_88);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x351da4);
  (*pcVar4)();
}



/* Entry: 00351dd0; end: 00351e17;  */

code * FUN_00351dd0(long *param_1,code *param_2,code *param_3,code *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 **ppuVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  undefined1 uVar8;
  long *extraout_x8;
  long *extraout_x8_00;
  code *pcVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  code *unaff_x19;
  code *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined7 *puVar13;
  code *unaff_x23;
  undefined1 **ppuVar14;
  long *plVar15;
  undefined8 unaff_x24;
  long lVar16;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long *plVar17;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar18;
  undefined1 *puStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  if ((param_3 != (code *)((long)&MACH_HEADER.cpusubtype + 3)) ||
     (*(long *)param_2 != 0x6174732d63707267 || *(long *)(param_2 + 3) != 0x7375746174732d63)) {
    if ((param_3 != (code *)&MACH_HEADER.filetype) ||
       (*(long *)param_2 != 0x6d69742d63707267 || *(int *)(param_2 + 8) != 0x74756f65)) {
      if ((param_3 != (code *)((long)&MACH_HEADER.flags + 2)) ||
         (((*(long *)param_2 != 0x6572702d63707267 || *(long *)(param_2 + 8) != 0x70722d73756f6976)
          || *(long *)(param_2 + 0x10) != 0x706d657474612d63) ||
          *(short *)(param_2 + 0x18) != 0x7374)) {
        if ((param_3 != (code *)((long)&MACH_HEADER.sizeofcmds + 2)) ||
           ((*(long *)param_2 != 0x7465722d63707267 || *(long *)(param_2 + 8) != 0x62687375702d7972)
            || *(long *)(param_2 + 0xe) != 0x736d2d6b63616268)) {
          if ((param_3 == (code *)((long)&MACH_HEADER.cpusubtype + 2)) &&
             (*(long *)param_2 == 0x6567612d72657375 && *(short *)(param_2 + 8) == 0x746e)) {
            lVar16 = *(long *)param_4;
            if ((*(byte *)(lVar16 + 1) >> 6 & 1) == 0) {
              uVar8 = 0;
              *(undefined1 *)param_1 = 0;
            }
            else {
              if (*(long *)(lVar16 + 0x150) == 0) {
                lVar18 = lVar16 + 0x159;
                uVar12 = (ulong)*(byte *)(lVar16 + 0x158);
              }
              else {
                uVar12 = *(ulong *)(lVar16 + 0x158);
                lVar18 = *(long *)(lVar16 + 0x160);
              }
              *param_1 = lVar18;
              param_1[1] = uVar12;
              uVar8 = 1;
            }
            *(undefined1 *)(param_1 + 2) = uVar8;
            return param_4;
          }
          if ((param_3 == (code *)&MACH_HEADER.filetype) &&
             (*(long *)param_2 == 0x73656d2d63707267 && *(int *)(param_2 + 8) == 0x65676173)) {
            lVar16 = *(long *)param_4;
            if (*(char *)(lVar16 + 1) < '\0') {
              if (*(long *)(lVar16 + 0x130) == 0) {
                lVar18 = lVar16 + 0x139;
                uVar12 = (ulong)*(byte *)(lVar16 + 0x138);
              }
              else {
                uVar12 = *(ulong *)(lVar16 + 0x138);
                lVar18 = *(long *)(lVar16 + 0x140);
              }
              *param_1 = lVar18;
              param_1[1] = uVar12;
              uVar8 = 1;
            }
            else {
              uVar8 = 0;
              *(undefined1 *)param_1 = 0;
            }
            *(undefined1 *)(param_1 + 2) = uVar8;
            return param_4;
          }
          if ((param_3 == (code *)&MACH_HEADER.cputype) && (*(int *)param_2 == 0x74736f68)) {
            lVar16 = *(long *)param_4;
            if ((*(byte *)(lVar16 + 2) & 1) == 0) {
              uVar8 = 0;
              *(undefined1 *)param_1 = 0;
            }
            else {
              if (*(long *)(lVar16 + 0x110) == 0) {
                lVar18 = lVar16 + 0x119;
                uVar12 = (ulong)*(byte *)(lVar16 + 0x118);
              }
              else {
                uVar12 = *(ulong *)(lVar16 + 0x118);
                lVar18 = *(long *)(lVar16 + 0x120);
              }
              *param_1 = lVar18;
              param_1[1] = uVar12;
              uVar8 = 1;
            }
            *(undefined1 *)(param_1 + 2) = uVar8;
            return param_4;
          }
          if ((param_3 == (code *)((long)&MACH_HEADER.flags + 1)) &&
             (((*(long *)param_2 == 0x746e696f70646e65 &&
               *(long *)(param_2 + 8) == 0x656d2d64616f6c2d) &&
              *(long *)(param_2 + 0x10) == 0x69622d7363697274) && param_2[0x18] == (code)0x6e)) {
            lVar16 = *(long *)param_4;
            if ((*(byte *)(lVar16 + 2) >> 1 & 1) == 0) {
              uVar8 = 0;
              *(undefined1 *)param_1 = 0;
            }
            else {
              if (*(long *)(lVar16 + 0xf0) == 0) {
                lVar18 = lVar16 + 0xf9;
                uVar12 = (ulong)*(byte *)(lVar16 + 0xf8);
              }
              else {
                uVar12 = *(ulong *)(lVar16 + 0xf8);
                lVar18 = *(long *)(lVar16 + 0x100);
              }
              *param_1 = lVar18;
              param_1[1] = uVar12;
              uVar8 = 1;
            }
            *(undefined1 *)(param_1 + 2) = uVar8;
            return param_4;
          }
          if ((param_3 == (code *)((long)&MACH_HEADER.sizeofcmds + 1)) &&
             ((*(long *)param_2 == 0x7265732d63707267 &&
              *(long *)(param_2 + 8) == 0x746174732d726576) &&
              *(long *)(param_2 + 0xd) == 0x6e69622d73746174)) {
            lVar16 = *(long *)param_4;
            if ((*(byte *)(lVar16 + 2) >> 2 & 1) == 0) {
              uVar8 = 0;
              *(undefined1 *)param_1 = 0;
            }
            else {
              if (*(long *)(lVar16 + 0xd0) == 0) {
                lVar18 = lVar16 + 0xd9;
                uVar12 = (ulong)*(byte *)(lVar16 + 0xd8);
              }
              else {
                uVar12 = *(ulong *)(lVar16 + 0xd8);
                lVar18 = *(long *)(lVar16 + 0xe0);
              }
              *param_1 = lVar18;
              param_1[1] = uVar12;
              uVar8 = 1;
            }
            *(undefined1 *)(param_1 + 2) = uVar8;
            return param_4;
          }
          if ((param_3 == (code *)((long)&MACH_HEADER.filetype + 2)) &&
             (*(long *)param_2 == 0x6172742d63707267 && *(long *)(param_2 + 6) == 0x6e69622d65636172
             )) {
            lVar16 = *(long *)param_4;
            if ((*(byte *)(lVar16 + 2) >> 3 & 1) == 0) {
              uVar8 = 0;
              *(undefined1 *)param_1 = 0;
            }
            else {
              if (*(long *)(lVar16 + 0xb0) == 0) {
                lVar18 = lVar16 + 0xb9;
                uVar12 = (ulong)*(byte *)(lVar16 + 0xb8);
              }
              else {
                uVar12 = *(ulong *)(lVar16 + 0xb8);
                lVar18 = *(long *)(lVar16 + 0xc0);
              }
              *param_1 = lVar18;
              param_1[1] = uVar12;
              uVar8 = 1;
            }
            *(undefined1 *)(param_1 + 2) = uVar8;
            return param_4;
          }
          if ((param_3 == (code *)((long)&MACH_HEADER.filetype + 1)) &&
             (*(long *)param_2 == 0x6761742d63707267 && *(long *)(param_2 + 5) == 0x6e69622d73676174
             )) {
            lVar16 = *(long *)param_4;
            if ((*(byte *)(lVar16 + 2) >> 4 & 1) == 0) {
              uVar8 = 0;
              *(undefined1 *)param_1 = 0;
            }
            else {
              if (*(long *)(lVar16 + 0x90) == 0) {
                lVar18 = lVar16 + 0x99;
                uVar12 = (ulong)*(byte *)(lVar16 + 0x98);
              }
              else {
                uVar12 = *(ulong *)(lVar16 + 0x98);
                lVar18 = *(long *)(lVar16 + 0xa0);
              }
              *param_1 = lVar18;
              param_1[1] = uVar12;
              uVar8 = 1;
            }
            *(undefined1 *)(param_1 + 2) = uVar8;
            return param_4;
          }
          if ((param_3 == (code *)((long)&MACH_HEADER.ncmds + 3)) &&
             ((*(long *)param_2 == 0x635f626c63707267 &&
              *(long *)(param_2 + 8) == 0x74735f746e65696c) &&
              *(long *)(param_2 + 0xb) == 0x73746174735f746e)) {
            unaff_x29 = &stack0xfffffffffffffff0;
            if ((*(byte *)(*(long *)param_4 + 2) >> 5 & 1) == 0) {
              *(undefined1 *)param_1 = 0;
              *(undefined1 *)(param_1 + 2) = 0;
              return param_4;
            }
            unaff_x30 = FUN_00352a68;
            pcVar5 = param_4;
            _abort();
            register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
            param_2 = param_4;
            param_4 = pcVar5;
            param_1 = extraout_x8;
          }
          if ((param_3 == (code *)((long)&MACH_HEADER.cpusubtype + 3)) &&
             (*(long *)param_2 == 0x2d74736f632d626c && *(long *)(param_2 + 3) == 0x6e69622d74736f63
             )) {
            *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
            *(code **)((long)register0x00000008 + -0x38) = unaff_x23;
            *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
            *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
            *(code **)((long)register0x00000008 + -0x20) = unaff_x20;
            *(code **)((long)register0x00000008 + -0x18) = unaff_x19;
            *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
            *(code **)((long)register0x00000008 + -8) = unaff_x30;
            unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
            *(undefined8 *)((long)register0x00000008 + -0x48) =
                 *(undefined8 *)PTR____stack_chk_guard_00999f88;
            lVar16 = *(long *)param_4;
            unaff_x19 = param_4;
            pcVar5 = param_4;
            if ((*(byte *)(lVar16 + 2) >> 6 & 1) == 0) {
              uVar8 = 0;
              *(undefined1 *)param_1 = 0;
            }
            else {
              puVar11 = *(undefined8 **)(param_4 + 8);
              if (*(char *)((long)puVar11 + 0x17) < '\0') {
                *(undefined1 *)*puVar11 = 0;
                puVar11[1] = 0;
              }
              else {
                *(undefined1 *)puVar11 = 0;
                *(undefined1 *)((long)puVar11 + 0x17) = 0;
              }
              uVar12 = *(ulong *)(lVar16 + 0x60);
              unaff_x21 = (undefined8 *)(lVar16 + 0x68);
              if ((uVar12 & 1) != 0) {
                unaff_x21 = (undefined8 *)*unaff_x21;
              }
              if (1 < uVar12) {
                unaff_x22 = unaff_x21 + (uVar12 >> 1) * 4;
                unaff_x23 = (code *)((long)register0x00000008 + -0x5f);
                do {
                  lVar16 = *(long *)(param_4 + 8);
                  if (*(char *)(lVar16 + 0x17) < '\0') {
                    if (*(long *)(lVar16 + 8) != 0) goto LAB_00352b64;
                  }
                  else if (*(char *)(lVar16 + 0x17) != '\0') {
LAB_00352b64:
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                              (lVar16,0x2c);
                  }
                  FUN_003fee84((undefined1 *)((long)register0x00000008 + -0x68),unaff_x21);
                  uVar12 = *(ulong *)((long)register0x00000008 + -0x60) & 0xff;
                  param_3 = unaff_x23;
                  if (*(long *)((long)register0x00000008 + -0x68) != 0) {
                    uVar12 = *(ulong *)((long)register0x00000008 + -0x60);
                    param_3 = *(code **)((long)register0x00000008 + -0x58);
                  }
                  pcVar5 = param_3 + uVar12;
                  FUN_00352c98(*(long *)(param_4 + 8));
                  unaff_x19 = *(code **)((long)register0x00000008 + -0x68);
                  if ((code *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
                    do {
                      lVar16 = *(long *)unaff_x19;
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
                      if (bVar3) {
                        *(long *)unaff_x19 = lVar16 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                    if (lVar16 + -1 == 0) {
                      (**(code **)(unaff_x19 + 8))();
                    }
                  }
                  unaff_x21 = unaff_x21 + 4;
                } while (unaff_x21 != unaff_x22);
              }
              plVar15 = *(long **)(param_4 + 8);
              uVar12 = plVar15[1];
              plVar1 = (long *)*plVar15;
              if (-1 < (char)*(byte *)((long)plVar15 + 0x17)) {
                uVar12 = (ulong)*(byte *)((long)plVar15 + 0x17);
                plVar1 = plVar15;
              }
              *param_1 = (long)plVar1;
              param_1[1] = uVar12;
              uVar8 = 1;
              unaff_x20 = param_4;
            }
            *(undefined1 *)(param_1 + 2) = uVar8;
            if (*(long *)PTR____stack_chk_guard_00999f88 ==
                *(long *)((long)register0x00000008 + -0x48)) {
              return unaff_x19;
            }
            ___stack_chk_fail();
            param_4 = pcVar5;
            if ((int)param_3 != 0) {
              func_0x0040cf10();
              FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x68));
              param_4 = pcVar5;
            }
            unaff_x30 = FUN_00352c58;
            param_2 = unaff_x19;
            __Unwind_Resume();
            register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
            param_1 = extraout_x8_00;
          }
          if ((param_3 == (code *)&MACH_HEADER.cpusubtype) &&
             (*(long *)param_2 == 0x6e656b6f742d626c)) {
            lVar16 = *(long *)param_4;
            if (*(char *)(lVar16 + 2) < '\0') {
              if (*(long *)(lVar16 + 0x40) == 0) {
                lVar18 = lVar16 + 0x49;
                uVar12 = (ulong)*(byte *)(lVar16 + 0x48);
              }
              else {
                uVar12 = *(ulong *)(lVar16 + 0x48);
                lVar18 = *(long *)(lVar16 + 0x50);
              }
              *param_1 = lVar18;
              param_1[1] = uVar12;
              uVar8 = 1;
            }
            else {
              uVar8 = 0;
              *(undefined1 *)param_1 = 0;
            }
            *(undefined1 *)(param_1 + 2) = uVar8;
            return param_4;
          }
          lVar16 = *(long *)param_4;
          plVar1 = *(long **)(param_4 + 8);
          pcVar5 = (code *)(lVar16 + 0x1f0);
          *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
          *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
          *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
          *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
          *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
          *(code **)((long)register0x00000008 + -0x38) = unaff_x23;
          *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
          *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
          *(code **)((long)register0x00000008 + -0x20) = unaff_x20;
          *(code **)((long)register0x00000008 + -0x18) = unaff_x19;
          *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
          *(code **)((long)register0x00000008 + -8) = unaff_x30;
          *(undefined8 *)((long)register0x00000008 + -0x70) =
               *(undefined8 *)PTR____stack_chk_guard_00999f88;
          *(undefined1 *)param_1 = 0;
          *(undefined1 *)(param_1 + 2) = 0;
          plVar15 = *(long **)(lVar16 + 0x1f8);
          pcVar6 = param_2;
          pcVar7 = param_3;
          if ((plVar15 != (long *)0x0) && (plVar15[1] != 0)) {
            lVar16 = 0;
            bVar3 = false;
            plVar17 = (long *)*param_1;
            uVar12 = param_1[1];
            do {
              if (plVar15[lVar16 * 8 + 2] == 0) {
                pcVar5 = (code *)((long)plVar15 + lVar16 * 0x40 + 0x19);
                pcVar9 = (code *)(ulong)*(byte *)(plVar15 + lVar16 * 8 + 3);
              }
              else {
                pcVar9 = (code *)plVar15[lVar16 * 8 + 3];
                pcVar5 = (code *)plVar15[lVar16 * 8 + 4];
              }
              if ((pcVar9 == param_3) &&
                 (pcVar6 = param_2, pcVar7 = param_3, _memcmp(pcVar5,param_2), (int)pcVar5 == 0)) {
                if (bVar3) {
                  *(long **)((long)register0x00000008 + -0xa0) = plVar17;
                  *(ulong *)((long)register0x00000008 + -0x98) = uVar12;
                  *(char **)((long)register0x00000008 + -0xd0) = ",";
                  *(undefined8 *)((long)register0x00000008 + -200) = 1;
                  if (plVar15[lVar16 * 8 + 6] == 0) {
                    lVar18 = (long)plVar15 + lVar16 * 0x40 + 0x39;
                    uVar12 = (ulong)*(byte *)(plVar15 + lVar16 * 8 + 7);
                  }
                  else {
                    uVar12 = plVar15[lVar16 * 8 + 7];
                    lVar18 = plVar15[lVar16 * 8 + 8];
                  }
                  *(long *)((long)register0x00000008 + -0x100) = lVar18;
                  *(ulong *)((long)register0x00000008 + -0xf8) = uVar12;
                  pcVar5 = (code *)((long)register0x00000008 + -0xa0);
                  pcVar6 = (code *)((long)register0x00000008 + -0xd0);
                  pcVar7 = (code *)((long)register0x00000008 + -0x100);
                  FUN_00575ddc((undefined1 *)((long)register0x00000008 + -0x118),pcVar5,pcVar6);
                  if (*(char *)((long)plVar1 + 0x17) < '\0') {
                    pcVar5 = (code *)*plVar1;
                    __ZdlPv();
                  }
                  uVar10 = *(ulong *)((long)register0x00000008 + -0x108);
                  plVar1[2] = uVar10;
                  lVar18 = *(long *)((long)register0x00000008 + -0x118);
                  plVar1[1] = *(long *)((long)register0x00000008 + -0x110);
                  *plVar1 = lVar18;
                  uVar12 = plVar1[1];
                  plVar17 = (long *)*plVar1;
                  if (-1 < (long)uVar10) {
                    uVar12 = uVar10 >> 0x38;
                    plVar17 = plVar1;
                  }
                  *param_1 = (long)plVar17;
                  param_1[1] = uVar12;
                }
                else {
                  if (plVar15[lVar16 * 8 + 6] == 0) {
                    plVar17 = (long *)((long)plVar15 + lVar16 * 0x40 + 0x39);
                    uVar12 = (ulong)*(byte *)(plVar15 + lVar16 * 8 + 7);
                  }
                  else {
                    uVar12 = plVar15[lVar16 * 8 + 7];
                    plVar17 = (long *)plVar15[lVar16 * 8 + 8];
                  }
                  *param_1 = (long)plVar17;
                  param_1[1] = uVar12;
                  bVar3 = true;
                  *(undefined1 *)(param_1 + 2) = 1;
                }
              }
              lVar16 = lVar16 + 1;
              do {
                if (lVar16 != plVar15[1]) goto LAB_003fe6e4;
                lVar16 = 0;
                plVar15 = (long *)*plVar15;
              } while (plVar15 != (long *)0x0);
              lVar16 = 0;
LAB_003fe6e4:
            } while ((plVar15 != (long *)0x0) || (lVar16 != 0));
          }
          if (*(long *)PTR____stack_chk_guard_00999f88 ==
              *(long *)((long)register0x00000008 + -0x70)) {
            return pcVar5;
          }
          ___stack_chk_fail();
          __Unwind_Resume();
          *(undefined1 **)((long)register0x00000008 + -0x130) =
               (undefined1 *)((long)register0x00000008 + -0x10);
          *(code **)((long)register0x00000008 + -0x128) = FUN_003fe72c;
          if (*(long *)pcVar5 == 0) {
            pcVar9 = pcVar5 + 9;
            uVar12 = (ulong)(byte)pcVar5[8];
          }
          else {
            uVar12 = *(ulong *)(pcVar5 + 8);
            pcVar9 = *(code **)(pcVar5 + 0x10);
          }
          if (uVar12 == 0x10) {
            if (*(long *)pcVar9 == 0x746163696c707061 && *(long *)(pcVar9 + 8) == 0x637072672f6e6f69
               ) {
              return (code *)0x0;
            }
          }
          else if (uVar12 < 0x11) {
            if (uVar12 == 0) {
              return (code *)((long)&MACH_HEADER.magic + 1);
            }
          }
          else {
            if ((*(long *)pcVar9 == 0x746163696c707061 &&
                *(long *)(pcVar9 + 8) == 0x637072672f6e6f69) && pcVar9[0x10] == (code)0x3b) {
              return (code *)0x0;
            }
            if ((*(long *)pcVar9 == 0x746163696c707061 &&
                *(long *)(pcVar9 + 8) == 0x637072672f6e6f69) && pcVar9[0x10] == (code)0x2b) {
              return (code *)0x0;
            }
          }
          (*pcVar7)(pcVar6,"invalid value",0xd);
          return (code *)((long)&MACH_HEADER.magic + 2);
        }
        ppuVar4 = &puStack_80;
        ppuVar14 = &puStack_80;
        lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
        if ((*(byte *)(*(long *)param_4 + 1) >> 5 & 1) == 0) {
          uVar8 = 0;
          *(undefined1 *)param_1 = 0;
        }
        else {
          FUN_0034eb70(&pcStack_68,*(undefined8 *)(*(long *)param_4 + 0x170));
          if (pcStack_68 == (code *)0x0) {
            uVar12 = (ulong)bStack_60;
            puVar13 = &uStack_5f;
          }
          else {
            uVar12 = CONCAT71(uStack_5f,bStack_60);
            puVar13 = puStack_58;
            if (0x7ffffffffffffff7 < uVar12) goto LAB_003525f4;
          }
          if (uVar12 < 0x17) {
            uStack_70 = CONCAT17((char)uVar12,(undefined7)uStack_70);
            if (uVar12 != 0) goto LAB_00352530;
          }
          else {
            uVar10 = (uVar12 & 0x7ffffffffffffff8) + 8;
            if ((uVar12 | 7) != 0x17) {
              uVar10 = uVar12 | 7;
            }
            ppuVar4 = (undefined1 **)(uVar10 + 1);
            __Znwm();
            uStack_70 = (ulong)(uVar10 + 1) | 0x8000000000000000;
            puStack_80 = (undefined1 *)ppuVar4;
            uStack_78 = uVar12;
LAB_00352530:
            _memmove(ppuVar4,puVar13,uVar12);
            ppuVar14 = ppuVar4;
          }
          *(undefined1 *)((long)ppuVar14 + uVar12) = 0;
          puVar11 = *(undefined8 **)(param_4 + 8);
          if (*(char *)((long)puVar11 + 0x17) < '\0') {
            __ZdlPv(*puVar11);
          }
          puVar11[2] = uStack_70;
          puVar11[1] = uStack_78;
          *puVar11 = puStack_80;
          uStack_70 = uStack_70 & 0xffffffffffffff;
          puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
          if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
            do {
              lVar16 = *(long *)pcStack_68;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
              if (bVar3) {
                *(long *)pcStack_68 = lVar16 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar16 + -1 == 0) {
              (**(code **)(pcStack_68 + 8))();
            }
          }
          plVar15 = *(long **)(param_4 + 8);
          uVar12 = plVar15[1];
          plVar1 = (long *)*plVar15;
          if (-1 < (char)*(byte *)((long)plVar15 + 0x17)) {
            uVar12 = (ulong)*(byte *)((long)plVar15 + 0x17);
            plVar1 = plVar15;
          }
          *param_1 = (long)plVar1;
          param_1[1] = uVar12;
          uVar8 = 1;
          param_4 = pcStack_68;
        }
        *(undefined1 *)(param_1 + 2) = uVar8;
        if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
          return param_4;
        }
        ___stack_chk_fail();
LAB_003525f4:
        func_0x0033b318(&puStack_80);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x352600);
        (*pcVar5)();
      }
      ppuVar4 = &puStack_80;
      ppuVar14 = &puStack_80;
      lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
      if ((*(byte *)(*(long *)param_4 + 1) >> 4 & 1) == 0) {
        uVar8 = 0;
        *(undefined1 *)param_1 = 0;
      }
      else {
        FUN_0034eb70(&pcStack_68,*(undefined4 *)(*(long *)param_4 + 0x178));
        if (pcStack_68 == (code *)0x0) {
          uVar12 = (ulong)bStack_60;
          puVar13 = &uStack_5f;
        }
        else {
          uVar12 = CONCAT71(uStack_5f,bStack_60);
          puVar13 = puStack_58;
          if (0x7ffffffffffffff7 < uVar12) goto LAB_003523d4;
        }
        if (uVar12 < 0x17) {
          uStack_70 = CONCAT17((char)uVar12,(undefined7)uStack_70);
          if (uVar12 != 0) goto LAB_00352310;
        }
        else {
          uVar10 = (uVar12 & 0x7ffffffffffffff8) + 8;
          if ((uVar12 | 7) != 0x17) {
            uVar10 = uVar12 | 7;
          }
          ppuVar4 = (undefined1 **)(uVar10 + 1);
          __Znwm();
          uStack_70 = (ulong)(uVar10 + 1) | 0x8000000000000000;
          puStack_80 = (undefined1 *)ppuVar4;
          uStack_78 = uVar12;
LAB_00352310:
          _memmove(ppuVar4,puVar13,uVar12);
          ppuVar14 = ppuVar4;
        }
        *(undefined1 *)((long)ppuVar14 + uVar12) = 0;
        puVar11 = *(undefined8 **)(param_4 + 8);
        if (*(char *)((long)puVar11 + 0x17) < '\0') {
          __ZdlPv(*puVar11);
        }
        puVar11[2] = uStack_70;
        puVar11[1] = uStack_78;
        *puVar11 = puStack_80;
        uStack_70 = uStack_70 & 0xffffffffffffff;
        puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
        if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
          do {
            lVar16 = *(long *)pcStack_68;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
            if (bVar3) {
              *(long *)pcStack_68 = lVar16 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar16 + -1 == 0) {
            (**(code **)(pcStack_68 + 8))();
          }
        }
        plVar15 = *(long **)(param_4 + 8);
        uVar12 = plVar15[1];
        plVar1 = (long *)*plVar15;
        if (-1 < (char)*(byte *)((long)plVar15 + 0x17)) {
          uVar12 = (ulong)*(byte *)((long)plVar15 + 0x17);
          plVar1 = plVar15;
        }
        *param_1 = (long)plVar1;
        param_1[1] = uVar12;
        uVar8 = 1;
        param_4 = pcStack_68;
      }
      *(undefined1 *)(param_1 + 2) = uVar8;
      if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
        return param_4;
      }
      ___stack_chk_fail();
LAB_003523d4:
      func_0x0033b318(&puStack_80);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x3523e0);
      (*pcVar5)();
    }
    ppuVar4 = &puStack_80;
    ppuVar14 = &puStack_80;
    lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
    if ((*(byte *)(*(long *)param_4 + 1) >> 3 & 1) == 0) {
      uVar8 = 0;
      *(undefined1 *)param_1 = 0;
    }
    else {
      func_0x003fe980(&pcStack_68,*(undefined8 *)(*(long *)param_4 + 0x180));
      if (pcStack_68 == (code *)0x0) {
        uVar12 = (ulong)bStack_60;
        puVar13 = &uStack_5f;
      }
      else {
        uVar12 = CONCAT71(uStack_5f,bStack_60);
        puVar13 = puStack_58;
        if (0x7ffffffffffffff7 < uVar12) goto LAB_003521a8;
      }
      if (uVar12 < 0x17) {
        uStack_70 = CONCAT17((char)uVar12,(undefined7)uStack_70);
        if (uVar12 != 0) goto LAB_003520e4;
      }
      else {
        uVar10 = (uVar12 & 0x7ffffffffffffff8) + 8;
        if ((uVar12 | 7) != 0x17) {
          uVar10 = uVar12 | 7;
        }
        ppuVar4 = (undefined1 **)(uVar10 + 1);
        __Znwm();
        uStack_70 = (ulong)(uVar10 + 1) | 0x8000000000000000;
        puStack_80 = (undefined1 *)ppuVar4;
        uStack_78 = uVar12;
LAB_003520e4:
        _memmove(ppuVar4,puVar13,uVar12);
        ppuVar14 = ppuVar4;
      }
      *(undefined1 *)((long)ppuVar14 + uVar12) = 0;
      puVar11 = *(undefined8 **)(param_4 + 8);
      if (*(char *)((long)puVar11 + 0x17) < '\0') {
        __ZdlPv(*puVar11);
      }
      puVar11[2] = uStack_70;
      puVar11[1] = uStack_78;
      *puVar11 = puStack_80;
      uStack_70 = uStack_70 & 0xffffffffffffff;
      puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
      if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
        do {
          lVar16 = *(long *)pcStack_68;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
          if (bVar3) {
            *(long *)pcStack_68 = lVar16 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar16 + -1 == 0) {
          (**(code **)(pcStack_68 + 8))();
        }
      }
      plVar15 = *(long **)(param_4 + 8);
      uVar12 = plVar15[1];
      plVar1 = (long *)*plVar15;
      if (-1 < (char)*(byte *)((long)plVar15 + 0x17)) {
        uVar12 = (ulong)*(byte *)((long)plVar15 + 0x17);
        plVar1 = plVar15;
      }
      *param_1 = (long)plVar1;
      param_1[1] = uVar12;
      uVar8 = 1;
      param_4 = pcStack_68;
    }
    *(undefined1 *)(param_1 + 2) = uVar8;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
      return param_4;
    }
    ___stack_chk_fail();
LAB_003521a8:
    func_0x0033b318(&puStack_80);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x3521b4);
    (*pcVar5)();
  }
  ppuVar4 = &puStack_80;
  ppuVar14 = &puStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  if ((*(byte *)(*(long *)param_4 + 1) >> 2 & 1) == 0) {
    uVar8 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    FUN_0034eb70(&pcStack_68,(long)*(int *)(*(long *)param_4 + 0x188));
    if (pcStack_68 == (code *)0x0) {
      uVar12 = (ulong)bStack_60;
      puVar13 = &uStack_5f;
    }
    else {
      uVar12 = CONCAT71(uStack_5f,bStack_60);
      puVar13 = puStack_58;
      if (0x7ffffffffffffff7 < uVar12) goto LAB_00351fa4;
    }
    if (uVar12 < 0x17) {
      uStack_70 = CONCAT17((char)uVar12,(undefined7)uStack_70);
      if (uVar12 != 0) goto LAB_00351ee0;
    }
    else {
      uVar10 = (uVar12 & 0x7ffffffffffffff8) + 8;
      if ((uVar12 | 7) != 0x17) {
        uVar10 = uVar12 | 7;
      }
      ppuVar4 = (undefined1 **)(uVar10 + 1);
      __Znwm();
      uStack_70 = (ulong)(uVar10 + 1) | 0x8000000000000000;
      puStack_80 = (undefined1 *)ppuVar4;
      uStack_78 = uVar12;
LAB_00351ee0:
      _memmove(ppuVar4,puVar13,uVar12);
      ppuVar14 = ppuVar4;
    }
    *(undefined1 *)((long)ppuVar14 + uVar12) = 0;
    puVar11 = *(undefined8 **)(param_4 + 8);
    if (*(char *)((long)puVar11 + 0x17) < '\0') {
      __ZdlPv(*puVar11);
    }
    puVar11[2] = uStack_70;
    puVar11[1] = uStack_78;
    *puVar11 = puStack_80;
    uStack_70 = uStack_70 & 0xffffffffffffff;
    puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
    if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
      do {
        lVar16 = *(long *)pcStack_68;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
        if (bVar3) {
          *(long *)pcStack_68 = lVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar16 + -1 == 0) {
        (**(code **)(pcStack_68 + 8))();
      }
    }
    plVar15 = *(long **)(param_4 + 8);
    uVar12 = plVar15[1];
    plVar1 = (long *)*plVar15;
    if (-1 < (char)*(byte *)((long)plVar15 + 0x17)) {
      uVar12 = (ulong)*(byte *)((long)plVar15 + 0x17);
      plVar1 = plVar15;
    }
    *param_1 = (long)plVar1;
    param_1[1] = uVar12;
    uVar8 = 1;
    param_4 = pcStack_68;
  }
  *(undefined1 *)(param_1 + 2) = uVar8;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return param_4;
  }
  ___stack_chk_fail();
LAB_00351fa4:
  func_0x0033b318(&puStack_80);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x351fb0);
  (*pcVar5)();
}



/* Entry: 00351e18; end: 00351fdb;  */

void FUN_00351e18(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 **ppuVar5;
  undefined1 uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined7 *puVar11;
  undefined1 **ppuVar12;
  undefined1 *puStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  ppuVar5 = &puStack_80;
  ppuVar12 = &puStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  if ((*(byte *)(*param_2 + 1) >> 2 & 1) == 0) {
    uVar6 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    FUN_0034eb70(&plStack_68,(long)*(int *)(*param_2 + 0x188));
    if (plStack_68 == (long *)0x0) {
      uVar9 = (ulong)bStack_60;
      puVar11 = &uStack_5f;
    }
    else {
      uVar9 = CONCAT71(uStack_5f,bStack_60);
      puVar11 = puStack_58;
      if (0x7ffffffffffffff7 < uVar9) goto LAB_00351fa4;
    }
    if (uVar9 < 0x17) {
      uStack_70 = CONCAT17((char)uVar9,(undefined7)uStack_70);
      if (uVar9 != 0) goto LAB_00351ee0;
    }
    else {
      uVar1 = (uVar9 & 0x7ffffffffffffff8) + 8;
      if ((uVar9 | 7) != 0x17) {
        uVar1 = uVar9 | 7;
      }
      ppuVar5 = (undefined1 **)(uVar1 + 1);
      __Znwm();
      uStack_70 = (ulong)(uVar1 + 1) | 0x8000000000000000;
      puStack_80 = (undefined1 *)ppuVar5;
      uStack_78 = uVar9;
LAB_00351ee0:
      _memmove(ppuVar5,puVar11,uVar9);
      ppuVar12 = ppuVar5;
    }
    *(undefined1 *)((long)ppuVar12 + uVar9) = 0;
    puVar10 = (undefined8 *)param_2[1];
    if (*(char *)((long)puVar10 + 0x17) < '\0') {
      __ZdlPv(*puVar10);
    }
    puVar10[2] = uStack_70;
    puVar10[1] = uStack_78;
    *puVar10 = puStack_80;
    uStack_70 = uStack_70 & 0xffffffffffffff;
    puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_68) {
      do {
        lVar7 = *plStack_68;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
        if (bVar3) {
          *plStack_68 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_68[1])();
      }
    }
    puVar8 = (undefined8 *)param_2[1];
    uVar9 = puVar8[1];
    puVar10 = (undefined8 *)*puVar8;
    if (-1 < (char)*(byte *)((long)puVar8 + 0x17)) {
      uVar9 = (ulong)*(byte *)((long)puVar8 + 0x17);
      puVar10 = puVar8;
    }
    *param_1 = puVar10;
    param_1[1] = uVar9;
    uVar6 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar6;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_00351fa4:
  func_0x0033b318(&puStack_80);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x351fb0);
  (*pcVar4)();
}



/* Entry: 00351fdc; end: 0035201b;  */

code * FUN_00351fdc(long *param_1,code *param_2,code *param_3,code *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 **ppuVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  undefined1 uVar8;
  long *extraout_x8;
  long *extraout_x8_00;
  code *pcVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  code *unaff_x19;
  code *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined7 *puVar13;
  code *unaff_x23;
  undefined1 **ppuVar14;
  long *plVar15;
  undefined8 unaff_x24;
  long lVar16;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long *plVar17;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar18;
  undefined1 *puStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  if ((param_3 != (code *)&MACH_HEADER.filetype) ||
     (*(long *)param_2 != 0x6d69742d63707267 || *(int *)(param_2 + 8) != 0x74756f65)) {
    if ((param_3 != (code *)((long)&MACH_HEADER.flags + 2)) ||
       (((*(long *)param_2 != 0x6572702d63707267 || *(long *)(param_2 + 8) != 0x70722d73756f6976) ||
        *(long *)(param_2 + 0x10) != 0x706d657474612d63) || *(short *)(param_2 + 0x18) != 0x7374)) {
      if ((param_3 != (code *)((long)&MACH_HEADER.sizeofcmds + 2)) ||
         ((*(long *)param_2 != 0x7465722d63707267 || *(long *)(param_2 + 8) != 0x62687375702d7972)
          || *(long *)(param_2 + 0xe) != 0x736d2d6b63616268)) {
        if ((param_3 == (code *)((long)&MACH_HEADER.cpusubtype + 2)) &&
           (*(long *)param_2 == 0x6567612d72657375 && *(short *)(param_2 + 8) == 0x746e)) {
          lVar16 = *(long *)param_4;
          if ((*(byte *)(lVar16 + 1) >> 6 & 1) == 0) {
            uVar8 = 0;
            *(undefined1 *)param_1 = 0;
          }
          else {
            if (*(long *)(lVar16 + 0x150) == 0) {
              lVar18 = lVar16 + 0x159;
              uVar12 = (ulong)*(byte *)(lVar16 + 0x158);
            }
            else {
              uVar12 = *(ulong *)(lVar16 + 0x158);
              lVar18 = *(long *)(lVar16 + 0x160);
            }
            *param_1 = lVar18;
            param_1[1] = uVar12;
            uVar8 = 1;
          }
          *(undefined1 *)(param_1 + 2) = uVar8;
          return param_4;
        }
        if ((param_3 == (code *)&MACH_HEADER.filetype) &&
           (*(long *)param_2 == 0x73656d2d63707267 && *(int *)(param_2 + 8) == 0x65676173)) {
          lVar16 = *(long *)param_4;
          if (*(char *)(lVar16 + 1) < '\0') {
            if (*(long *)(lVar16 + 0x130) == 0) {
              lVar18 = lVar16 + 0x139;
              uVar12 = (ulong)*(byte *)(lVar16 + 0x138);
            }
            else {
              uVar12 = *(ulong *)(lVar16 + 0x138);
              lVar18 = *(long *)(lVar16 + 0x140);
            }
            *param_1 = lVar18;
            param_1[1] = uVar12;
            uVar8 = 1;
          }
          else {
            uVar8 = 0;
            *(undefined1 *)param_1 = 0;
          }
          *(undefined1 *)(param_1 + 2) = uVar8;
          return param_4;
        }
        if ((param_3 == (code *)&MACH_HEADER.cputype) && (*(int *)param_2 == 0x74736f68)) {
          lVar16 = *(long *)param_4;
          if ((*(byte *)(lVar16 + 2) & 1) == 0) {
            uVar8 = 0;
            *(undefined1 *)param_1 = 0;
          }
          else {
            if (*(long *)(lVar16 + 0x110) == 0) {
              lVar18 = lVar16 + 0x119;
              uVar12 = (ulong)*(byte *)(lVar16 + 0x118);
            }
            else {
              uVar12 = *(ulong *)(lVar16 + 0x118);
              lVar18 = *(long *)(lVar16 + 0x120);
            }
            *param_1 = lVar18;
            param_1[1] = uVar12;
            uVar8 = 1;
          }
          *(undefined1 *)(param_1 + 2) = uVar8;
          return param_4;
        }
        if ((param_3 == (code *)((long)&MACH_HEADER.flags + 1)) &&
           (((*(long *)param_2 == 0x746e696f70646e65 && *(long *)(param_2 + 8) == 0x656d2d64616f6c2d
             ) && *(long *)(param_2 + 0x10) == 0x69622d7363697274) && param_2[0x18] == (code)0x6e))
        {
          lVar16 = *(long *)param_4;
          if ((*(byte *)(lVar16 + 2) >> 1 & 1) == 0) {
            uVar8 = 0;
            *(undefined1 *)param_1 = 0;
          }
          else {
            if (*(long *)(lVar16 + 0xf0) == 0) {
              lVar18 = lVar16 + 0xf9;
              uVar12 = (ulong)*(byte *)(lVar16 + 0xf8);
            }
            else {
              uVar12 = *(ulong *)(lVar16 + 0xf8);
              lVar18 = *(long *)(lVar16 + 0x100);
            }
            *param_1 = lVar18;
            param_1[1] = uVar12;
            uVar8 = 1;
          }
          *(undefined1 *)(param_1 + 2) = uVar8;
          return param_4;
        }
        if ((param_3 == (code *)((long)&MACH_HEADER.sizeofcmds + 1)) &&
           ((*(long *)param_2 == 0x7265732d63707267 && *(long *)(param_2 + 8) == 0x746174732d726576)
            && *(long *)(param_2 + 0xd) == 0x6e69622d73746174)) {
          lVar16 = *(long *)param_4;
          if ((*(byte *)(lVar16 + 2) >> 2 & 1) == 0) {
            uVar8 = 0;
            *(undefined1 *)param_1 = 0;
          }
          else {
            if (*(long *)(lVar16 + 0xd0) == 0) {
              lVar18 = lVar16 + 0xd9;
              uVar12 = (ulong)*(byte *)(lVar16 + 0xd8);
            }
            else {
              uVar12 = *(ulong *)(lVar16 + 0xd8);
              lVar18 = *(long *)(lVar16 + 0xe0);
            }
            *param_1 = lVar18;
            param_1[1] = uVar12;
            uVar8 = 1;
          }
          *(undefined1 *)(param_1 + 2) = uVar8;
          return param_4;
        }
        if ((param_3 == (code *)((long)&MACH_HEADER.filetype + 2)) &&
           (*(long *)param_2 == 0x6172742d63707267 && *(long *)(param_2 + 6) == 0x6e69622d65636172))
        {
          lVar16 = *(long *)param_4;
          if ((*(byte *)(lVar16 + 2) >> 3 & 1) == 0) {
            uVar8 = 0;
            *(undefined1 *)param_1 = 0;
          }
          else {
            if (*(long *)(lVar16 + 0xb0) == 0) {
              lVar18 = lVar16 + 0xb9;
              uVar12 = (ulong)*(byte *)(lVar16 + 0xb8);
            }
            else {
              uVar12 = *(ulong *)(lVar16 + 0xb8);
              lVar18 = *(long *)(lVar16 + 0xc0);
            }
            *param_1 = lVar18;
            param_1[1] = uVar12;
            uVar8 = 1;
          }
          *(undefined1 *)(param_1 + 2) = uVar8;
          return param_4;
        }
        if ((param_3 == (code *)((long)&MACH_HEADER.filetype + 1)) &&
           (*(long *)param_2 == 0x6761742d63707267 && *(long *)(param_2 + 5) == 0x6e69622d73676174))
        {
          lVar16 = *(long *)param_4;
          if ((*(byte *)(lVar16 + 2) >> 4 & 1) == 0) {
            uVar8 = 0;
            *(undefined1 *)param_1 = 0;
          }
          else {
            if (*(long *)(lVar16 + 0x90) == 0) {
              lVar18 = lVar16 + 0x99;
              uVar12 = (ulong)*(byte *)(lVar16 + 0x98);
            }
            else {
              uVar12 = *(ulong *)(lVar16 + 0x98);
              lVar18 = *(long *)(lVar16 + 0xa0);
            }
            *param_1 = lVar18;
            param_1[1] = uVar12;
            uVar8 = 1;
          }
          *(undefined1 *)(param_1 + 2) = uVar8;
          return param_4;
        }
        if ((param_3 == (code *)((long)&MACH_HEADER.ncmds + 3)) &&
           ((*(long *)param_2 == 0x635f626c63707267 && *(long *)(param_2 + 8) == 0x74735f746e65696c)
            && *(long *)(param_2 + 0xb) == 0x73746174735f746e)) {
          unaff_x29 = &stack0xfffffffffffffff0;
          if ((*(byte *)(*(long *)param_4 + 2) >> 5 & 1) == 0) {
            *(undefined1 *)param_1 = 0;
            *(undefined1 *)(param_1 + 2) = 0;
            return param_4;
          }
          unaff_x30 = FUN_00352a68;
          pcVar5 = param_4;
          _abort();
          register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
          param_2 = param_4;
          param_4 = pcVar5;
          param_1 = extraout_x8;
        }
        if ((param_3 == (code *)((long)&MACH_HEADER.cpusubtype + 3)) &&
           (*(long *)param_2 == 0x2d74736f632d626c && *(long *)(param_2 + 3) == 0x6e69622d74736f63))
        {
          *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
          *(code **)((long)register0x00000008 + -0x38) = unaff_x23;
          *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
          *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
          *(code **)((long)register0x00000008 + -0x20) = unaff_x20;
          *(code **)((long)register0x00000008 + -0x18) = unaff_x19;
          *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
          *(code **)((long)register0x00000008 + -8) = unaff_x30;
          unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
          *(undefined8 *)((long)register0x00000008 + -0x48) =
               *(undefined8 *)PTR____stack_chk_guard_00999f88;
          lVar16 = *(long *)param_4;
          unaff_x19 = param_4;
          pcVar5 = param_4;
          if ((*(byte *)(lVar16 + 2) >> 6 & 1) == 0) {
            uVar8 = 0;
            *(undefined1 *)param_1 = 0;
          }
          else {
            puVar11 = *(undefined8 **)(param_4 + 8);
            if (*(char *)((long)puVar11 + 0x17) < '\0') {
              *(undefined1 *)*puVar11 = 0;
              puVar11[1] = 0;
            }
            else {
              *(undefined1 *)puVar11 = 0;
              *(undefined1 *)((long)puVar11 + 0x17) = 0;
            }
            uVar12 = *(ulong *)(lVar16 + 0x60);
            unaff_x21 = (undefined8 *)(lVar16 + 0x68);
            if ((uVar12 & 1) != 0) {
              unaff_x21 = (undefined8 *)*unaff_x21;
            }
            if (1 < uVar12) {
              unaff_x22 = unaff_x21 + (uVar12 >> 1) * 4;
              unaff_x23 = (code *)((long)register0x00000008 + -0x5f);
              do {
                lVar16 = *(long *)(param_4 + 8);
                if (*(char *)(lVar16 + 0x17) < '\0') {
                  if (*(long *)(lVar16 + 8) != 0) goto LAB_00352b64;
                }
                else if (*(char *)(lVar16 + 0x17) != '\0') {
LAB_00352b64:
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                            (lVar16,0x2c);
                }
                FUN_003fee84((undefined1 *)((long)register0x00000008 + -0x68),unaff_x21);
                uVar12 = *(ulong *)((long)register0x00000008 + -0x60) & 0xff;
                param_3 = unaff_x23;
                if (*(long *)((long)register0x00000008 + -0x68) != 0) {
                  uVar12 = *(ulong *)((long)register0x00000008 + -0x60);
                  param_3 = *(code **)((long)register0x00000008 + -0x58);
                }
                pcVar5 = param_3 + uVar12;
                FUN_00352c98(*(long *)(param_4 + 8));
                unaff_x19 = *(code **)((long)register0x00000008 + -0x68);
                if ((code *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
                  do {
                    lVar16 = *(long *)unaff_x19;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
                    if (bVar3) {
                      *(long *)unaff_x19 = lVar16 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (lVar16 + -1 == 0) {
                    (**(code **)(unaff_x19 + 8))();
                  }
                }
                unaff_x21 = unaff_x21 + 4;
              } while (unaff_x21 != unaff_x22);
            }
            plVar15 = *(long **)(param_4 + 8);
            uVar12 = plVar15[1];
            plVar1 = (long *)*plVar15;
            if (-1 < (char)*(byte *)((long)plVar15 + 0x17)) {
              uVar12 = (ulong)*(byte *)((long)plVar15 + 0x17);
              plVar1 = plVar15;
            }
            *param_1 = (long)plVar1;
            param_1[1] = uVar12;
            uVar8 = 1;
            unaff_x20 = param_4;
          }
          *(undefined1 *)(param_1 + 2) = uVar8;
          if (*(long *)PTR____stack_chk_guard_00999f88 ==
              *(long *)((long)register0x00000008 + -0x48)) {
            return unaff_x19;
          }
          ___stack_chk_fail();
          param_4 = pcVar5;
          if ((int)param_3 != 0) {
            func_0x0040cf10();
            FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x68));
            param_4 = pcVar5;
          }
          unaff_x30 = FUN_00352c58;
          param_2 = unaff_x19;
          __Unwind_Resume();
          register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
          param_1 = extraout_x8_00;
        }
        if ((param_3 == (code *)&MACH_HEADER.cpusubtype) && (*(long *)param_2 == 0x6e656b6f742d626c)
           ) {
          lVar16 = *(long *)param_4;
          if (*(char *)(lVar16 + 2) < '\0') {
            if (*(long *)(lVar16 + 0x40) == 0) {
              lVar18 = lVar16 + 0x49;
              uVar12 = (ulong)*(byte *)(lVar16 + 0x48);
            }
            else {
              uVar12 = *(ulong *)(lVar16 + 0x48);
              lVar18 = *(long *)(lVar16 + 0x50);
            }
            *param_1 = lVar18;
            param_1[1] = uVar12;
            uVar8 = 1;
          }
          else {
            uVar8 = 0;
            *(undefined1 *)param_1 = 0;
          }
          *(undefined1 *)(param_1 + 2) = uVar8;
          return param_4;
        }
        lVar16 = *(long *)param_4;
        plVar1 = *(long **)(param_4 + 8);
        pcVar5 = (code *)(lVar16 + 0x1f0);
        *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
        *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
        *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
        *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
        *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
        *(code **)((long)register0x00000008 + -0x38) = unaff_x23;
        *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
        *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
        *(code **)((long)register0x00000008 + -0x20) = unaff_x20;
        *(code **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(code **)((long)register0x00000008 + -8) = unaff_x30;
        *(undefined8 *)((long)register0x00000008 + -0x70) =
             *(undefined8 *)PTR____stack_chk_guard_00999f88;
        *(undefined1 *)param_1 = 0;
        *(undefined1 *)(param_1 + 2) = 0;
        plVar15 = *(long **)(lVar16 + 0x1f8);
        pcVar6 = param_2;
        pcVar7 = param_3;
        if ((plVar15 != (long *)0x0) && (plVar15[1] != 0)) {
          lVar16 = 0;
          bVar3 = false;
          plVar17 = (long *)*param_1;
          uVar12 = param_1[1];
          do {
            if (plVar15[lVar16 * 8 + 2] == 0) {
              pcVar5 = (code *)((long)plVar15 + lVar16 * 0x40 + 0x19);
              pcVar9 = (code *)(ulong)*(byte *)(plVar15 + lVar16 * 8 + 3);
            }
            else {
              pcVar9 = (code *)plVar15[lVar16 * 8 + 3];
              pcVar5 = (code *)plVar15[lVar16 * 8 + 4];
            }
            if ((pcVar9 == param_3) &&
               (pcVar6 = param_2, pcVar7 = param_3, _memcmp(pcVar5,param_2), (int)pcVar5 == 0)) {
              if (bVar3) {
                *(long **)((long)register0x00000008 + -0xa0) = plVar17;
                *(ulong *)((long)register0x00000008 + -0x98) = uVar12;
                *(char **)((long)register0x00000008 + -0xd0) = ",";
                *(undefined8 *)((long)register0x00000008 + -200) = 1;
                if (plVar15[lVar16 * 8 + 6] == 0) {
                  lVar18 = (long)plVar15 + lVar16 * 0x40 + 0x39;
                  uVar12 = (ulong)*(byte *)(plVar15 + lVar16 * 8 + 7);
                }
                else {
                  uVar12 = plVar15[lVar16 * 8 + 7];
                  lVar18 = plVar15[lVar16 * 8 + 8];
                }
                *(long *)((long)register0x00000008 + -0x100) = lVar18;
                *(ulong *)((long)register0x00000008 + -0xf8) = uVar12;
                pcVar5 = (code *)((long)register0x00000008 + -0xa0);
                pcVar6 = (code *)((long)register0x00000008 + -0xd0);
                pcVar7 = (code *)((long)register0x00000008 + -0x100);
                FUN_00575ddc((undefined1 *)((long)register0x00000008 + -0x118),pcVar5,pcVar6);
                if (*(char *)((long)plVar1 + 0x17) < '\0') {
                  pcVar5 = (code *)*plVar1;
                  __ZdlPv();
                }
                uVar10 = *(ulong *)((long)register0x00000008 + -0x108);
                plVar1[2] = uVar10;
                lVar18 = *(long *)((long)register0x00000008 + -0x118);
                plVar1[1] = *(long *)((long)register0x00000008 + -0x110);
                *plVar1 = lVar18;
                uVar12 = plVar1[1];
                plVar17 = (long *)*plVar1;
                if (-1 < (long)uVar10) {
                  uVar12 = uVar10 >> 0x38;
                  plVar17 = plVar1;
                }
                *param_1 = (long)plVar17;
                param_1[1] = uVar12;
              }
              else {
                if (plVar15[lVar16 * 8 + 6] == 0) {
                  plVar17 = (long *)((long)plVar15 + lVar16 * 0x40 + 0x39);
                  uVar12 = (ulong)*(byte *)(plVar15 + lVar16 * 8 + 7);
                }
                else {
                  uVar12 = plVar15[lVar16 * 8 + 7];
                  plVar17 = (long *)plVar15[lVar16 * 8 + 8];
                }
                *param_1 = (long)plVar17;
                param_1[1] = uVar12;
                bVar3 = true;
                *(undefined1 *)(param_1 + 2) = 1;
              }
            }
            lVar16 = lVar16 + 1;
            do {
              if (lVar16 != plVar15[1]) goto LAB_003fe6e4;
              lVar16 = 0;
              plVar15 = (long *)*plVar15;
            } while (plVar15 != (long *)0x0);
            lVar16 = 0;
LAB_003fe6e4:
          } while ((plVar15 != (long *)0x0) || (lVar16 != 0));
        }
        if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x70))
        {
          return pcVar5;
        }
        ___stack_chk_fail();
        __Unwind_Resume();
        *(undefined1 **)((long)register0x00000008 + -0x130) =
             (undefined1 *)((long)register0x00000008 + -0x10);
        *(code **)((long)register0x00000008 + -0x128) = FUN_003fe72c;
        if (*(long *)pcVar5 == 0) {
          pcVar9 = pcVar5 + 9;
          uVar12 = (ulong)(byte)pcVar5[8];
        }
        else {
          uVar12 = *(ulong *)(pcVar5 + 8);
          pcVar9 = *(code **)(pcVar5 + 0x10);
        }
        if (uVar12 == 0x10) {
          if (*(long *)pcVar9 == 0x746163696c707061 && *(long *)(pcVar9 + 8) == 0x637072672f6e6f69)
          {
            return (code *)0x0;
          }
        }
        else if (uVar12 < 0x11) {
          if (uVar12 == 0) {
            return (code *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else {
          if ((*(long *)pcVar9 == 0x746163696c707061 && *(long *)(pcVar9 + 8) == 0x637072672f6e6f69)
              && pcVar9[0x10] == (code)0x3b) {
            return (code *)0x0;
          }
          if ((*(long *)pcVar9 == 0x746163696c707061 && *(long *)(pcVar9 + 8) == 0x637072672f6e6f69)
              && pcVar9[0x10] == (code)0x2b) {
            return (code *)0x0;
          }
        }
        (*pcVar7)(pcVar6,"invalid value",0xd);
        return (code *)((long)&MACH_HEADER.magic + 2);
      }
      ppuVar4 = &puStack_80;
      ppuVar14 = &puStack_80;
      lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
      if ((*(byte *)(*(long *)param_4 + 1) >> 5 & 1) == 0) {
        uVar8 = 0;
        *(undefined1 *)param_1 = 0;
      }
      else {
        FUN_0034eb70(&pcStack_68,*(undefined8 *)(*(long *)param_4 + 0x170));
        if (pcStack_68 == (code *)0x0) {
          uVar12 = (ulong)bStack_60;
          puVar13 = &uStack_5f;
        }
        else {
          uVar12 = CONCAT71(uStack_5f,bStack_60);
          puVar13 = puStack_58;
          if (0x7ffffffffffffff7 < uVar12) goto LAB_003525f4;
        }
        if (uVar12 < 0x17) {
          uStack_70 = CONCAT17((char)uVar12,(undefined7)uStack_70);
          if (uVar12 != 0) goto LAB_00352530;
        }
        else {
          uVar10 = (uVar12 & 0x7ffffffffffffff8) + 8;
          if ((uVar12 | 7) != 0x17) {
            uVar10 = uVar12 | 7;
          }
          ppuVar4 = (undefined1 **)(uVar10 + 1);
          __Znwm();
          uStack_70 = (ulong)(uVar10 + 1) | 0x8000000000000000;
          puStack_80 = (undefined1 *)ppuVar4;
          uStack_78 = uVar12;
LAB_00352530:
          _memmove(ppuVar4,puVar13,uVar12);
          ppuVar14 = ppuVar4;
        }
        *(undefined1 *)((long)ppuVar14 + uVar12) = 0;
        puVar11 = *(undefined8 **)(param_4 + 8);
        if (*(char *)((long)puVar11 + 0x17) < '\0') {
          __ZdlPv(*puVar11);
        }
        puVar11[2] = uStack_70;
        puVar11[1] = uStack_78;
        *puVar11 = puStack_80;
        uStack_70 = uStack_70 & 0xffffffffffffff;
        puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
        if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
          do {
            lVar16 = *(long *)pcStack_68;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
            if (bVar3) {
              *(long *)pcStack_68 = lVar16 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar16 + -1 == 0) {
            (**(code **)(pcStack_68 + 8))();
          }
        }
        plVar15 = *(long **)(param_4 + 8);
        uVar12 = plVar15[1];
        plVar1 = (long *)*plVar15;
        if (-1 < (char)*(byte *)((long)plVar15 + 0x17)) {
          uVar12 = (ulong)*(byte *)((long)plVar15 + 0x17);
          plVar1 = plVar15;
        }
        *param_1 = (long)plVar1;
        param_1[1] = uVar12;
        uVar8 = 1;
        param_4 = pcStack_68;
      }
      *(undefined1 *)(param_1 + 2) = uVar8;
      if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
        return param_4;
      }
      ___stack_chk_fail();
LAB_003525f4:
      func_0x0033b318(&puStack_80);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x352600);
      (*pcVar5)();
    }
    ppuVar4 = &puStack_80;
    ppuVar14 = &puStack_80;
    lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
    if ((*(byte *)(*(long *)param_4 + 1) >> 4 & 1) == 0) {
      uVar8 = 0;
      *(undefined1 *)param_1 = 0;
    }
    else {
      FUN_0034eb70(&pcStack_68,*(undefined4 *)(*(long *)param_4 + 0x178));
      if (pcStack_68 == (code *)0x0) {
        uVar12 = (ulong)bStack_60;
        puVar13 = &uStack_5f;
      }
      else {
        uVar12 = CONCAT71(uStack_5f,bStack_60);
        puVar13 = puStack_58;
        if (0x7ffffffffffffff7 < uVar12) goto LAB_003523d4;
      }
      if (uVar12 < 0x17) {
        uStack_70 = CONCAT17((char)uVar12,(undefined7)uStack_70);
        if (uVar12 != 0) goto LAB_00352310;
      }
      else {
        uVar10 = (uVar12 & 0x7ffffffffffffff8) + 8;
        if ((uVar12 | 7) != 0x17) {
          uVar10 = uVar12 | 7;
        }
        ppuVar4 = (undefined1 **)(uVar10 + 1);
        __Znwm();
        uStack_70 = (ulong)(uVar10 + 1) | 0x8000000000000000;
        puStack_80 = (undefined1 *)ppuVar4;
        uStack_78 = uVar12;
LAB_00352310:
        _memmove(ppuVar4,puVar13,uVar12);
        ppuVar14 = ppuVar4;
      }
      *(undefined1 *)((long)ppuVar14 + uVar12) = 0;
      puVar11 = *(undefined8 **)(param_4 + 8);
      if (*(char *)((long)puVar11 + 0x17) < '\0') {
        __ZdlPv(*puVar11);
      }
      puVar11[2] = uStack_70;
      puVar11[1] = uStack_78;
      *puVar11 = puStack_80;
      uStack_70 = uStack_70 & 0xffffffffffffff;
      puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
      if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
        do {
          lVar16 = *(long *)pcStack_68;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
          if (bVar3) {
            *(long *)pcStack_68 = lVar16 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar16 + -1 == 0) {
          (**(code **)(pcStack_68 + 8))();
        }
      }
      plVar15 = *(long **)(param_4 + 8);
      uVar12 = plVar15[1];
      plVar1 = (long *)*plVar15;
      if (-1 < (char)*(byte *)((long)plVar15 + 0x17)) {
        uVar12 = (ulong)*(byte *)((long)plVar15 + 0x17);
        plVar1 = plVar15;
      }
      *param_1 = (long)plVar1;
      param_1[1] = uVar12;
      uVar8 = 1;
      param_4 = pcStack_68;
    }
    *(undefined1 *)(param_1 + 2) = uVar8;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
      return param_4;
    }
    ___stack_chk_fail();
LAB_003523d4:
    func_0x0033b318(&puStack_80);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x3523e0);
    (*pcVar5)();
  }
  ppuVar4 = &puStack_80;
  ppuVar14 = &puStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  if ((*(byte *)(*(long *)param_4 + 1) >> 3 & 1) == 0) {
    uVar8 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    func_0x003fe980(&pcStack_68,*(undefined8 *)(*(long *)param_4 + 0x180));
    if (pcStack_68 == (code *)0x0) {
      uVar12 = (ulong)bStack_60;
      puVar13 = &uStack_5f;
    }
    else {
      uVar12 = CONCAT71(uStack_5f,bStack_60);
      puVar13 = puStack_58;
      if (0x7ffffffffffffff7 < uVar12) goto LAB_003521a8;
    }
    if (uVar12 < 0x17) {
      uStack_70 = CONCAT17((char)uVar12,(undefined7)uStack_70);
      if (uVar12 != 0) goto LAB_003520e4;
    }
    else {
      uVar10 = (uVar12 & 0x7ffffffffffffff8) + 8;
      if ((uVar12 | 7) != 0x17) {
        uVar10 = uVar12 | 7;
      }
      ppuVar4 = (undefined1 **)(uVar10 + 1);
      __Znwm();
      uStack_70 = (ulong)(uVar10 + 1) | 0x8000000000000000;
      puStack_80 = (undefined1 *)ppuVar4;
      uStack_78 = uVar12;
LAB_003520e4:
      _memmove(ppuVar4,puVar13,uVar12);
      ppuVar14 = ppuVar4;
    }
    *(undefined1 *)((long)ppuVar14 + uVar12) = 0;
    puVar11 = *(undefined8 **)(param_4 + 8);
    if (*(char *)((long)puVar11 + 0x17) < '\0') {
      __ZdlPv(*puVar11);
    }
    puVar11[2] = uStack_70;
    puVar11[1] = uStack_78;
    *puVar11 = puStack_80;
    uStack_70 = uStack_70 & 0xffffffffffffff;
    puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
    if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
      do {
        lVar16 = *(long *)pcStack_68;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
        if (bVar3) {
          *(long *)pcStack_68 = lVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar16 + -1 == 0) {
        (**(code **)(pcStack_68 + 8))();
      }
    }
    plVar15 = *(long **)(param_4 + 8);
    uVar12 = plVar15[1];
    plVar1 = (long *)*plVar15;
    if (-1 < (char)*(byte *)((long)plVar15 + 0x17)) {
      uVar12 = (ulong)*(byte *)((long)plVar15 + 0x17);
      plVar1 = plVar15;
    }
    *param_1 = (long)plVar1;
    param_1[1] = uVar12;
    uVar8 = 1;
    param_4 = pcStack_68;
  }
  *(undefined1 *)(param_1 + 2) = uVar8;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return param_4;
  }
  ___stack_chk_fail();
LAB_003521a8:
  func_0x0033b318(&puStack_80);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x3521b4);
  (*pcVar5)();
}



/* Entry: 0035201c; end: 003521df;  */

void FUN_0035201c(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 **ppuVar5;
  undefined1 uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined7 *puVar11;
  undefined1 **ppuVar12;
  undefined1 *puStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  ppuVar5 = &puStack_80;
  ppuVar12 = &puStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  if ((*(byte *)(*param_2 + 1) >> 3 & 1) == 0) {
    uVar6 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    func_0x003fe980(&plStack_68,*(undefined8 *)(*param_2 + 0x180));
    if (plStack_68 == (long *)0x0) {
      uVar9 = (ulong)bStack_60;
      puVar11 = &uStack_5f;
    }
    else {
      uVar9 = CONCAT71(uStack_5f,bStack_60);
      puVar11 = puStack_58;
      if (0x7ffffffffffffff7 < uVar9) goto LAB_003521a8;
    }
    if (uVar9 < 0x17) {
      uStack_70 = CONCAT17((char)uVar9,(undefined7)uStack_70);
      if (uVar9 != 0) goto LAB_003520e4;
    }
    else {
      uVar1 = (uVar9 & 0x7ffffffffffffff8) + 8;
      if ((uVar9 | 7) != 0x17) {
        uVar1 = uVar9 | 7;
      }
      ppuVar5 = (undefined1 **)(uVar1 + 1);
      __Znwm();
      uStack_70 = (ulong)(uVar1 + 1) | 0x8000000000000000;
      puStack_80 = (undefined1 *)ppuVar5;
      uStack_78 = uVar9;
LAB_003520e4:
      _memmove(ppuVar5,puVar11,uVar9);
      ppuVar12 = ppuVar5;
    }
    *(undefined1 *)((long)ppuVar12 + uVar9) = 0;
    puVar10 = (undefined8 *)param_2[1];
    if (*(char *)((long)puVar10 + 0x17) < '\0') {
      __ZdlPv(*puVar10);
    }
    puVar10[2] = uStack_70;
    puVar10[1] = uStack_78;
    *puVar10 = puStack_80;
    uStack_70 = uStack_70 & 0xffffffffffffff;
    puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_68) {
      do {
        lVar7 = *plStack_68;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
        if (bVar3) {
          *plStack_68 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_68[1])();
      }
    }
    puVar8 = (undefined8 *)param_2[1];
    uVar9 = puVar8[1];
    puVar10 = (undefined8 *)*puVar8;
    if (-1 < (char)*(byte *)((long)puVar8 + 0x17)) {
      uVar9 = (ulong)*(byte *)((long)puVar8 + 0x17);
      puVar10 = puVar8;
    }
    *param_1 = puVar10;
    param_1[1] = uVar9;
    uVar6 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar6;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_003521a8:
  func_0x0033b318(&puStack_80);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x3521b4);
  (*pcVar4)();
}



/* Entry: 003521e0; end: 00352247;  */

code * FUN_003521e0(long *param_1,code *param_2,code *param_3,code *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 **ppuVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  undefined1 uVar8;
  long *extraout_x8;
  long *extraout_x8_00;
  code *pcVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  code *unaff_x19;
  code *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined7 *puVar13;
  code *unaff_x23;
  undefined1 **ppuVar14;
  long *plVar15;
  undefined8 unaff_x24;
  long lVar16;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long *plVar17;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar18;
  undefined1 *puStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  if ((param_3 != (code *)((long)&MACH_HEADER.flags + 2)) ||
     (((*(long *)param_2 != 0x6572702d63707267 || *(long *)(param_2 + 8) != 0x70722d73756f6976) ||
      *(long *)(param_2 + 0x10) != 0x706d657474612d63) || *(short *)(param_2 + 0x18) != 0x7374)) {
    if ((param_3 != (code *)((long)&MACH_HEADER.sizeofcmds + 2)) ||
       ((*(long *)param_2 != 0x7465722d63707267 || *(long *)(param_2 + 8) != 0x62687375702d7972) ||
        *(long *)(param_2 + 0xe) != 0x736d2d6b63616268)) {
      if ((param_3 == (code *)((long)&MACH_HEADER.cpusubtype + 2)) &&
         (*(long *)param_2 == 0x6567612d72657375 && *(short *)(param_2 + 8) == 0x746e)) {
        lVar16 = *(long *)param_4;
        if ((*(byte *)(lVar16 + 1) >> 6 & 1) == 0) {
          uVar8 = 0;
          *(undefined1 *)param_1 = 0;
        }
        else {
          if (*(long *)(lVar16 + 0x150) == 0) {
            lVar18 = lVar16 + 0x159;
            uVar12 = (ulong)*(byte *)(lVar16 + 0x158);
          }
          else {
            uVar12 = *(ulong *)(lVar16 + 0x158);
            lVar18 = *(long *)(lVar16 + 0x160);
          }
          *param_1 = lVar18;
          param_1[1] = uVar12;
          uVar8 = 1;
        }
        *(undefined1 *)(param_1 + 2) = uVar8;
        return param_4;
      }
      if ((param_3 == (code *)&MACH_HEADER.filetype) &&
         (*(long *)param_2 == 0x73656d2d63707267 && *(int *)(param_2 + 8) == 0x65676173)) {
        lVar16 = *(long *)param_4;
        if (*(char *)(lVar16 + 1) < '\0') {
          if (*(long *)(lVar16 + 0x130) == 0) {
            lVar18 = lVar16 + 0x139;
            uVar12 = (ulong)*(byte *)(lVar16 + 0x138);
          }
          else {
            uVar12 = *(ulong *)(lVar16 + 0x138);
            lVar18 = *(long *)(lVar16 + 0x140);
          }
          *param_1 = lVar18;
          param_1[1] = uVar12;
          uVar8 = 1;
        }
        else {
          uVar8 = 0;
          *(undefined1 *)param_1 = 0;
        }
        *(undefined1 *)(param_1 + 2) = uVar8;
        return param_4;
      }
      if ((param_3 == (code *)&MACH_HEADER.cputype) && (*(int *)param_2 == 0x74736f68)) {
        lVar16 = *(long *)param_4;
        if ((*(byte *)(lVar16 + 2) & 1) == 0) {
          uVar8 = 0;
          *(undefined1 *)param_1 = 0;
        }
        else {
          if (*(long *)(lVar16 + 0x110) == 0) {
            lVar18 = lVar16 + 0x119;
            uVar12 = (ulong)*(byte *)(lVar16 + 0x118);
          }
          else {
            uVar12 = *(ulong *)(lVar16 + 0x118);
            lVar18 = *(long *)(lVar16 + 0x120);
          }
          *param_1 = lVar18;
          param_1[1] = uVar12;
          uVar8 = 1;
        }
        *(undefined1 *)(param_1 + 2) = uVar8;
        return param_4;
      }
      if ((param_3 == (code *)((long)&MACH_HEADER.flags + 1)) &&
         (((*(long *)param_2 == 0x746e696f70646e65 && *(long *)(param_2 + 8) == 0x656d2d64616f6c2d)
          && *(long *)(param_2 + 0x10) == 0x69622d7363697274) && param_2[0x18] == (code)0x6e)) {
        lVar16 = *(long *)param_4;
        if ((*(byte *)(lVar16 + 2) >> 1 & 1) == 0) {
          uVar8 = 0;
          *(undefined1 *)param_1 = 0;
        }
        else {
          if (*(long *)(lVar16 + 0xf0) == 0) {
            lVar18 = lVar16 + 0xf9;
            uVar12 = (ulong)*(byte *)(lVar16 + 0xf8);
          }
          else {
            uVar12 = *(ulong *)(lVar16 + 0xf8);
            lVar18 = *(long *)(lVar16 + 0x100);
          }
          *param_1 = lVar18;
          param_1[1] = uVar12;
          uVar8 = 1;
        }
        *(undefined1 *)(param_1 + 2) = uVar8;
        return param_4;
      }
      if ((param_3 == (code *)((long)&MACH_HEADER.sizeofcmds + 1)) &&
         ((*(long *)param_2 == 0x7265732d63707267 && *(long *)(param_2 + 8) == 0x746174732d726576)
          && *(long *)(param_2 + 0xd) == 0x6e69622d73746174)) {
        lVar16 = *(long *)param_4;
        if ((*(byte *)(lVar16 + 2) >> 2 & 1) == 0) {
          uVar8 = 0;
          *(undefined1 *)param_1 = 0;
        }
        else {
          if (*(long *)(lVar16 + 0xd0) == 0) {
            lVar18 = lVar16 + 0xd9;
            uVar12 = (ulong)*(byte *)(lVar16 + 0xd8);
          }
          else {
            uVar12 = *(ulong *)(lVar16 + 0xd8);
            lVar18 = *(long *)(lVar16 + 0xe0);
          }
          *param_1 = lVar18;
          param_1[1] = uVar12;
          uVar8 = 1;
        }
        *(undefined1 *)(param_1 + 2) = uVar8;
        return param_4;
      }
      if ((param_3 == (code *)((long)&MACH_HEADER.filetype + 2)) &&
         (*(long *)param_2 == 0x6172742d63707267 && *(long *)(param_2 + 6) == 0x6e69622d65636172)) {
        lVar16 = *(long *)param_4;
        if ((*(byte *)(lVar16 + 2) >> 3 & 1) == 0) {
          uVar8 = 0;
          *(undefined1 *)param_1 = 0;
        }
        else {
          if (*(long *)(lVar16 + 0xb0) == 0) {
            lVar18 = lVar16 + 0xb9;
            uVar12 = (ulong)*(byte *)(lVar16 + 0xb8);
          }
          else {
            uVar12 = *(ulong *)(lVar16 + 0xb8);
            lVar18 = *(long *)(lVar16 + 0xc0);
          }
          *param_1 = lVar18;
          param_1[1] = uVar12;
          uVar8 = 1;
        }
        *(undefined1 *)(param_1 + 2) = uVar8;
        return param_4;
      }
      if ((param_3 == (code *)((long)&MACH_HEADER.filetype + 1)) &&
         (*(long *)param_2 == 0x6761742d63707267 && *(long *)(param_2 + 5) == 0x6e69622d73676174)) {
        lVar16 = *(long *)param_4;
        if ((*(byte *)(lVar16 + 2) >> 4 & 1) == 0) {
          uVar8 = 0;
          *(undefined1 *)param_1 = 0;
        }
        else {
          if (*(long *)(lVar16 + 0x90) == 0) {
            lVar18 = lVar16 + 0x99;
            uVar12 = (ulong)*(byte *)(lVar16 + 0x98);
          }
          else {
            uVar12 = *(ulong *)(lVar16 + 0x98);
            lVar18 = *(long *)(lVar16 + 0xa0);
          }
          *param_1 = lVar18;
          param_1[1] = uVar12;
          uVar8 = 1;
        }
        *(undefined1 *)(param_1 + 2) = uVar8;
        return param_4;
      }
      if ((param_3 == (code *)((long)&MACH_HEADER.ncmds + 3)) &&
         ((*(long *)param_2 == 0x635f626c63707267 && *(long *)(param_2 + 8) == 0x74735f746e65696c)
          && *(long *)(param_2 + 0xb) == 0x73746174735f746e)) {
        unaff_x29 = &stack0xfffffffffffffff0;
        if ((*(byte *)(*(long *)param_4 + 2) >> 5 & 1) == 0) {
          *(undefined1 *)param_1 = 0;
          *(undefined1 *)(param_1 + 2) = 0;
          return param_4;
        }
        unaff_x30 = FUN_00352a68;
        pcVar5 = param_4;
        _abort();
        register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
        param_2 = param_4;
        param_4 = pcVar5;
        param_1 = extraout_x8;
      }
      if ((param_3 == (code *)((long)&MACH_HEADER.cpusubtype + 3)) &&
         (*(long *)param_2 == 0x2d74736f632d626c && *(long *)(param_2 + 3) == 0x6e69622d74736f63)) {
        *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
        *(code **)((long)register0x00000008 + -0x38) = unaff_x23;
        *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
        *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
        *(code **)((long)register0x00000008 + -0x20) = unaff_x20;
        *(code **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(code **)((long)register0x00000008 + -8) = unaff_x30;
        unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -0x48) =
             *(undefined8 *)PTR____stack_chk_guard_00999f88;
        lVar16 = *(long *)param_4;
        unaff_x19 = param_4;
        pcVar5 = param_4;
        if ((*(byte *)(lVar16 + 2) >> 6 & 1) == 0) {
          uVar8 = 0;
          *(undefined1 *)param_1 = 0;
        }
        else {
          puVar11 = *(undefined8 **)(param_4 + 8);
          if (*(char *)((long)puVar11 + 0x17) < '\0') {
            *(undefined1 *)*puVar11 = 0;
            puVar11[1] = 0;
          }
          else {
            *(undefined1 *)puVar11 = 0;
            *(undefined1 *)((long)puVar11 + 0x17) = 0;
          }
          uVar12 = *(ulong *)(lVar16 + 0x60);
          unaff_x21 = (undefined8 *)(lVar16 + 0x68);
          if ((uVar12 & 1) != 0) {
            unaff_x21 = (undefined8 *)*unaff_x21;
          }
          if (1 < uVar12) {
            unaff_x22 = unaff_x21 + (uVar12 >> 1) * 4;
            unaff_x23 = (code *)((long)register0x00000008 + -0x5f);
            do {
              lVar16 = *(long *)(param_4 + 8);
              if (*(char *)(lVar16 + 0x17) < '\0') {
                if (*(long *)(lVar16 + 8) != 0) goto LAB_00352b64;
              }
              else if (*(char *)(lVar16 + 0x17) != '\0') {
LAB_00352b64:
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                          (lVar16,0x2c);
              }
              FUN_003fee84((undefined1 *)((long)register0x00000008 + -0x68),unaff_x21);
              uVar12 = *(ulong *)((long)register0x00000008 + -0x60) & 0xff;
              param_3 = unaff_x23;
              if (*(long *)((long)register0x00000008 + -0x68) != 0) {
                uVar12 = *(ulong *)((long)register0x00000008 + -0x60);
                param_3 = *(code **)((long)register0x00000008 + -0x58);
              }
              pcVar5 = param_3 + uVar12;
              FUN_00352c98(*(long *)(param_4 + 8));
              unaff_x19 = *(code **)((long)register0x00000008 + -0x68);
              if ((code *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
                do {
                  lVar16 = *(long *)unaff_x19;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
                  if (bVar3) {
                    *(long *)unaff_x19 = lVar16 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (lVar16 + -1 == 0) {
                  (**(code **)(unaff_x19 + 8))();
                }
              }
              unaff_x21 = unaff_x21 + 4;
            } while (unaff_x21 != unaff_x22);
          }
          plVar15 = *(long **)(param_4 + 8);
          uVar12 = plVar15[1];
          plVar1 = (long *)*plVar15;
          if (-1 < (char)*(byte *)((long)plVar15 + 0x17)) {
            uVar12 = (ulong)*(byte *)((long)plVar15 + 0x17);
            plVar1 = plVar15;
          }
          *param_1 = (long)plVar1;
          param_1[1] = uVar12;
          uVar8 = 1;
          unaff_x20 = param_4;
        }
        *(undefined1 *)(param_1 + 2) = uVar8;
        if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x48))
        {
          return unaff_x19;
        }
        ___stack_chk_fail();
        param_4 = pcVar5;
        if ((int)param_3 != 0) {
          func_0x0040cf10();
          FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x68));
          param_4 = pcVar5;
        }
        unaff_x30 = FUN_00352c58;
        param_2 = unaff_x19;
        __Unwind_Resume();
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
        param_1 = extraout_x8_00;
      }
      if ((param_3 == (code *)&MACH_HEADER.cpusubtype) && (*(long *)param_2 == 0x6e656b6f742d626c))
      {
        lVar16 = *(long *)param_4;
        if (*(char *)(lVar16 + 2) < '\0') {
          if (*(long *)(lVar16 + 0x40) == 0) {
            lVar18 = lVar16 + 0x49;
            uVar12 = (ulong)*(byte *)(lVar16 + 0x48);
          }
          else {
            uVar12 = *(ulong *)(lVar16 + 0x48);
            lVar18 = *(long *)(lVar16 + 0x50);
          }
          *param_1 = lVar18;
          param_1[1] = uVar12;
          uVar8 = 1;
        }
        else {
          uVar8 = 0;
          *(undefined1 *)param_1 = 0;
        }
        *(undefined1 *)(param_1 + 2) = uVar8;
        return param_4;
      }
      lVar16 = *(long *)param_4;
      plVar1 = *(long **)(param_4 + 8);
      pcVar5 = (code *)(lVar16 + 0x1f0);
      *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
      *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
      *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
      *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
      *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(code **)((long)register0x00000008 + -0x38) = unaff_x23;
      *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
      *(code **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(code **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(code **)((long)register0x00000008 + -8) = unaff_x30;
      *(undefined8 *)((long)register0x00000008 + -0x70) =
           *(undefined8 *)PTR____stack_chk_guard_00999f88;
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 2) = 0;
      plVar15 = *(long **)(lVar16 + 0x1f8);
      pcVar6 = param_2;
      pcVar7 = param_3;
      if ((plVar15 != (long *)0x0) && (plVar15[1] != 0)) {
        lVar16 = 0;
        bVar3 = false;
        plVar17 = (long *)*param_1;
        uVar12 = param_1[1];
        do {
          if (plVar15[lVar16 * 8 + 2] == 0) {
            pcVar5 = (code *)((long)plVar15 + lVar16 * 0x40 + 0x19);
            pcVar9 = (code *)(ulong)*(byte *)(plVar15 + lVar16 * 8 + 3);
          }
          else {
            pcVar9 = (code *)plVar15[lVar16 * 8 + 3];
            pcVar5 = (code *)plVar15[lVar16 * 8 + 4];
          }
          if ((pcVar9 == param_3) &&
             (pcVar6 = param_2, pcVar7 = param_3, _memcmp(pcVar5,param_2), (int)pcVar5 == 0)) {
            if (bVar3) {
              *(long **)((long)register0x00000008 + -0xa0) = plVar17;
              *(ulong *)((long)register0x00000008 + -0x98) = uVar12;
              *(char **)((long)register0x00000008 + -0xd0) = ",";
              *(undefined8 *)((long)register0x00000008 + -200) = 1;
              if (plVar15[lVar16 * 8 + 6] == 0) {
                lVar18 = (long)plVar15 + lVar16 * 0x40 + 0x39;
                uVar12 = (ulong)*(byte *)(plVar15 + lVar16 * 8 + 7);
              }
              else {
                uVar12 = plVar15[lVar16 * 8 + 7];
                lVar18 = plVar15[lVar16 * 8 + 8];
              }
              *(long *)((long)register0x00000008 + -0x100) = lVar18;
              *(ulong *)((long)register0x00000008 + -0xf8) = uVar12;
              pcVar5 = (code *)((long)register0x00000008 + -0xa0);
              pcVar6 = (code *)((long)register0x00000008 + -0xd0);
              pcVar7 = (code *)((long)register0x00000008 + -0x100);
              FUN_00575ddc((undefined1 *)((long)register0x00000008 + -0x118),pcVar5,pcVar6);
              if (*(char *)((long)plVar1 + 0x17) < '\0') {
                pcVar5 = (code *)*plVar1;
                __ZdlPv();
              }
              uVar10 = *(ulong *)((long)register0x00000008 + -0x108);
              plVar1[2] = uVar10;
              lVar18 = *(long *)((long)register0x00000008 + -0x118);
              plVar1[1] = *(long *)((long)register0x00000008 + -0x110);
              *plVar1 = lVar18;
              uVar12 = plVar1[1];
              plVar17 = (long *)*plVar1;
              if (-1 < (long)uVar10) {
                uVar12 = uVar10 >> 0x38;
                plVar17 = plVar1;
              }
              *param_1 = (long)plVar17;
              param_1[1] = uVar12;
            }
            else {
              if (plVar15[lVar16 * 8 + 6] == 0) {
                plVar17 = (long *)((long)plVar15 + lVar16 * 0x40 + 0x39);
                uVar12 = (ulong)*(byte *)(plVar15 + lVar16 * 8 + 7);
              }
              else {
                uVar12 = plVar15[lVar16 * 8 + 7];
                plVar17 = (long *)plVar15[lVar16 * 8 + 8];
              }
              *param_1 = (long)plVar17;
              param_1[1] = uVar12;
              bVar3 = true;
              *(undefined1 *)(param_1 + 2) = 1;
            }
          }
          lVar16 = lVar16 + 1;
          do {
            if (lVar16 != plVar15[1]) goto LAB_003fe6e4;
            lVar16 = 0;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
          lVar16 = 0;
LAB_003fe6e4:
        } while ((plVar15 != (long *)0x0) || (lVar16 != 0));
      }
      if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x70)) {
        return pcVar5;
      }
      ___stack_chk_fail();
      __Unwind_Resume();
      *(undefined1 **)((long)register0x00000008 + -0x130) =
           (undefined1 *)((long)register0x00000008 + -0x10);
      *(code **)((long)register0x00000008 + -0x128) = FUN_003fe72c;
      if (*(long *)pcVar5 == 0) {
        pcVar9 = pcVar5 + 9;
        uVar12 = (ulong)(byte)pcVar5[8];
      }
      else {
        uVar12 = *(ulong *)(pcVar5 + 8);
        pcVar9 = *(code **)(pcVar5 + 0x10);
      }
      if (uVar12 == 0x10) {
        if (*(long *)pcVar9 == 0x746163696c707061 && *(long *)(pcVar9 + 8) == 0x637072672f6e6f69) {
          return (code *)0x0;
        }
      }
      else if (uVar12 < 0x11) {
        if (uVar12 == 0) {
          return (code *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else {
        if ((*(long *)pcVar9 == 0x746163696c707061 && *(long *)(pcVar9 + 8) == 0x637072672f6e6f69)
            && pcVar9[0x10] == (code)0x3b) {
          return (code *)0x0;
        }
        if ((*(long *)pcVar9 == 0x746163696c707061 && *(long *)(pcVar9 + 8) == 0x637072672f6e6f69)
            && pcVar9[0x10] == (code)0x2b) {
          return (code *)0x0;
        }
      }
      (*pcVar7)(pcVar6,"invalid value",0xd);
      return (code *)((long)&MACH_HEADER.magic + 2);
    }
    ppuVar4 = &puStack_80;
    ppuVar14 = &puStack_80;
    lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
    if ((*(byte *)(*(long *)param_4 + 1) >> 5 & 1) == 0) {
      uVar8 = 0;
      *(undefined1 *)param_1 = 0;
    }
    else {
      FUN_0034eb70(&pcStack_68,*(undefined8 *)(*(long *)param_4 + 0x170));
      if (pcStack_68 == (code *)0x0) {
        uVar12 = (ulong)bStack_60;
        puVar13 = &uStack_5f;
      }
      else {
        uVar12 = CONCAT71(uStack_5f,bStack_60);
        puVar13 = puStack_58;
        if (0x7ffffffffffffff7 < uVar12) goto LAB_003525f4;
      }
      if (uVar12 < 0x17) {
        uStack_70 = CONCAT17((char)uVar12,(undefined7)uStack_70);
        if (uVar12 != 0) goto LAB_00352530;
      }
      else {
        uVar10 = (uVar12 & 0x7ffffffffffffff8) + 8;
        if ((uVar12 | 7) != 0x17) {
          uVar10 = uVar12 | 7;
        }
        ppuVar4 = (undefined1 **)(uVar10 + 1);
        __Znwm();
        uStack_70 = (ulong)(uVar10 + 1) | 0x8000000000000000;
        puStack_80 = (undefined1 *)ppuVar4;
        uStack_78 = uVar12;
LAB_00352530:
        _memmove(ppuVar4,puVar13,uVar12);
        ppuVar14 = ppuVar4;
      }
      *(undefined1 *)((long)ppuVar14 + uVar12) = 0;
      puVar11 = *(undefined8 **)(param_4 + 8);
      if (*(char *)((long)puVar11 + 0x17) < '\0') {
        __ZdlPv(*puVar11);
      }
      puVar11[2] = uStack_70;
      puVar11[1] = uStack_78;
      *puVar11 = puStack_80;
      uStack_70 = uStack_70 & 0xffffffffffffff;
      puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
      if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
        do {
          lVar16 = *(long *)pcStack_68;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
          if (bVar3) {
            *(long *)pcStack_68 = lVar16 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar16 + -1 == 0) {
          (**(code **)(pcStack_68 + 8))();
        }
      }
      plVar15 = *(long **)(param_4 + 8);
      uVar12 = plVar15[1];
      plVar1 = (long *)*plVar15;
      if (-1 < (char)*(byte *)((long)plVar15 + 0x17)) {
        uVar12 = (ulong)*(byte *)((long)plVar15 + 0x17);
        plVar1 = plVar15;
      }
      *param_1 = (long)plVar1;
      param_1[1] = uVar12;
      uVar8 = 1;
      param_4 = pcStack_68;
    }
    *(undefined1 *)(param_1 + 2) = uVar8;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
      return param_4;
    }
    ___stack_chk_fail();
LAB_003525f4:
    func_0x0033b318(&puStack_80);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x352600);
    (*pcVar5)();
  }
  ppuVar4 = &puStack_80;
  ppuVar14 = &puStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  if ((*(byte *)(*(long *)param_4 + 1) >> 4 & 1) == 0) {
    uVar8 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    FUN_0034eb70(&pcStack_68,*(undefined4 *)(*(long *)param_4 + 0x178));
    if (pcStack_68 == (code *)0x0) {
      uVar12 = (ulong)bStack_60;
      puVar13 = &uStack_5f;
    }
    else {
      uVar12 = CONCAT71(uStack_5f,bStack_60);
      puVar13 = puStack_58;
      if (0x7ffffffffffffff7 < uVar12) goto LAB_003523d4;
    }
    if (uVar12 < 0x17) {
      uStack_70 = CONCAT17((char)uVar12,(undefined7)uStack_70);
      if (uVar12 != 0) goto LAB_00352310;
    }
    else {
      uVar10 = (uVar12 & 0x7ffffffffffffff8) + 8;
      if ((uVar12 | 7) != 0x17) {
        uVar10 = uVar12 | 7;
      }
      ppuVar4 = (undefined1 **)(uVar10 + 1);
      __Znwm();
      uStack_70 = (ulong)(uVar10 + 1) | 0x8000000000000000;
      puStack_80 = (undefined1 *)ppuVar4;
      uStack_78 = uVar12;
LAB_00352310:
      _memmove(ppuVar4,puVar13,uVar12);
      ppuVar14 = ppuVar4;
    }
    *(undefined1 *)((long)ppuVar14 + uVar12) = 0;
    puVar11 = *(undefined8 **)(param_4 + 8);
    if (*(char *)((long)puVar11 + 0x17) < '\0') {
      __ZdlPv(*puVar11);
    }
    puVar11[2] = uStack_70;
    puVar11[1] = uStack_78;
    *puVar11 = puStack_80;
    uStack_70 = uStack_70 & 0xffffffffffffff;
    puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
    if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
      do {
        lVar16 = *(long *)pcStack_68;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
        if (bVar3) {
          *(long *)pcStack_68 = lVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar16 + -1 == 0) {
        (**(code **)(pcStack_68 + 8))();
      }
    }
    plVar15 = *(long **)(param_4 + 8);
    uVar12 = plVar15[1];
    plVar1 = (long *)*plVar15;
    if (-1 < (char)*(byte *)((long)plVar15 + 0x17)) {
      uVar12 = (ulong)*(byte *)((long)plVar15 + 0x17);
      plVar1 = plVar15;
    }
    *param_1 = (long)plVar1;
    param_1[1] = uVar12;
    uVar8 = 1;
    param_4 = pcStack_68;
  }
  *(undefined1 *)(param_1 + 2) = uVar8;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return param_4;
  }
  ___stack_chk_fail();
LAB_003523d4:
  func_0x0033b318(&puStack_80);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x3523e0);
  (*pcVar5)();
}



/* Entry: 00352248; end: 0035240b;  */

void FUN_00352248(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 **ppuVar5;
  undefined1 uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined7 *puVar11;
  undefined1 **ppuVar12;
  undefined1 *puStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  ppuVar5 = &puStack_80;
  ppuVar12 = &puStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  if ((*(byte *)(*param_2 + 1) >> 4 & 1) == 0) {
    uVar6 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    FUN_0034eb70(&plStack_68,*(undefined4 *)(*param_2 + 0x178));
    if (plStack_68 == (long *)0x0) {
      uVar9 = (ulong)bStack_60;
      puVar11 = &uStack_5f;
    }
    else {
      uVar9 = CONCAT71(uStack_5f,bStack_60);
      puVar11 = puStack_58;
      if (0x7ffffffffffffff7 < uVar9) goto LAB_003523d4;
    }
    if (uVar9 < 0x17) {
      uStack_70 = CONCAT17((char)uVar9,(undefined7)uStack_70);
      if (uVar9 != 0) goto LAB_00352310;
    }
    else {
      uVar1 = (uVar9 & 0x7ffffffffffffff8) + 8;
      if ((uVar9 | 7) != 0x17) {
        uVar1 = uVar9 | 7;
      }
      ppuVar5 = (undefined1 **)(uVar1 + 1);
      __Znwm();
      uStack_70 = (ulong)(uVar1 + 1) | 0x8000000000000000;
      puStack_80 = (undefined1 *)ppuVar5;
      uStack_78 = uVar9;
LAB_00352310:
      _memmove(ppuVar5,puVar11,uVar9);
      ppuVar12 = ppuVar5;
    }
    *(undefined1 *)((long)ppuVar12 + uVar9) = 0;
    puVar10 = (undefined8 *)param_2[1];
    if (*(char *)((long)puVar10 + 0x17) < '\0') {
      __ZdlPv(*puVar10);
    }
    puVar10[2] = uStack_70;
    puVar10[1] = uStack_78;
    *puVar10 = puStack_80;
    uStack_70 = uStack_70 & 0xffffffffffffff;
    puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_68) {
      do {
        lVar7 = *plStack_68;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
        if (bVar3) {
          *plStack_68 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_68[1])();
      }
    }
    puVar8 = (undefined8 *)param_2[1];
    uVar9 = puVar8[1];
    puVar10 = (undefined8 *)*puVar8;
    if (-1 < (char)*(byte *)((long)puVar8 + 0x17)) {
      uVar9 = (ulong)*(byte *)((long)puVar8 + 0x17);
      puVar10 = puVar8;
    }
    *param_1 = puVar10;
    param_1[1] = uVar9;
    uVar6 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar6;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_003523d4:
  func_0x0033b318(&puStack_80);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x3523e0);
  (*pcVar4)();
}



/* Entry: 0035240c; end: 00352467;  */

code * FUN_0035240c(long *param_1,code *param_2,code *param_3,code *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 **ppuVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  undefined1 uVar8;
  long *extraout_x8;
  long *extraout_x8_00;
  code *pcVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  code *unaff_x19;
  code *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined7 *puVar13;
  code *unaff_x23;
  undefined1 **ppuVar14;
  long *plVar15;
  undefined8 unaff_x24;
  long lVar16;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long *plVar17;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar18;
  undefined1 *puStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  if ((param_3 != (code *)((long)&MACH_HEADER.sizeofcmds + 2)) ||
     ((*(long *)param_2 != 0x7465722d63707267 || *(long *)(param_2 + 8) != 0x62687375702d7972) ||
      *(long *)(param_2 + 0xe) != 0x736d2d6b63616268)) {
    if ((param_3 == (code *)((long)&MACH_HEADER.cpusubtype + 2)) &&
       (*(long *)param_2 == 0x6567612d72657375 && *(short *)(param_2 + 8) == 0x746e)) {
      lVar16 = *(long *)param_4;
      if ((*(byte *)(lVar16 + 1) >> 6 & 1) == 0) {
        uVar8 = 0;
        *(undefined1 *)param_1 = 0;
      }
      else {
        if (*(long *)(lVar16 + 0x150) == 0) {
          lVar18 = lVar16 + 0x159;
          uVar12 = (ulong)*(byte *)(lVar16 + 0x158);
        }
        else {
          uVar12 = *(ulong *)(lVar16 + 0x158);
          lVar18 = *(long *)(lVar16 + 0x160);
        }
        *param_1 = lVar18;
        param_1[1] = uVar12;
        uVar8 = 1;
      }
      *(undefined1 *)(param_1 + 2) = uVar8;
      return param_4;
    }
    if ((param_3 == (code *)&MACH_HEADER.filetype) &&
       (*(long *)param_2 == 0x73656d2d63707267 && *(int *)(param_2 + 8) == 0x65676173)) {
      lVar16 = *(long *)param_4;
      if (*(char *)(lVar16 + 1) < '\0') {
        if (*(long *)(lVar16 + 0x130) == 0) {
          lVar18 = lVar16 + 0x139;
          uVar12 = (ulong)*(byte *)(lVar16 + 0x138);
        }
        else {
          uVar12 = *(ulong *)(lVar16 + 0x138);
          lVar18 = *(long *)(lVar16 + 0x140);
        }
        *param_1 = lVar18;
        param_1[1] = uVar12;
        uVar8 = 1;
      }
      else {
        uVar8 = 0;
        *(undefined1 *)param_1 = 0;
      }
      *(undefined1 *)(param_1 + 2) = uVar8;
      return param_4;
    }
    if ((param_3 == (code *)&MACH_HEADER.cputype) && (*(int *)param_2 == 0x74736f68)) {
      lVar16 = *(long *)param_4;
      if ((*(byte *)(lVar16 + 2) & 1) == 0) {
        uVar8 = 0;
        *(undefined1 *)param_1 = 0;
      }
      else {
        if (*(long *)(lVar16 + 0x110) == 0) {
          lVar18 = lVar16 + 0x119;
          uVar12 = (ulong)*(byte *)(lVar16 + 0x118);
        }
        else {
          uVar12 = *(ulong *)(lVar16 + 0x118);
          lVar18 = *(long *)(lVar16 + 0x120);
        }
        *param_1 = lVar18;
        param_1[1] = uVar12;
        uVar8 = 1;
      }
      *(undefined1 *)(param_1 + 2) = uVar8;
      return param_4;
    }
    if ((param_3 == (code *)((long)&MACH_HEADER.flags + 1)) &&
       (((*(long *)param_2 == 0x746e696f70646e65 && *(long *)(param_2 + 8) == 0x656d2d64616f6c2d) &&
        *(long *)(param_2 + 0x10) == 0x69622d7363697274) && param_2[0x18] == (code)0x6e)) {
      lVar16 = *(long *)param_4;
      if ((*(byte *)(lVar16 + 2) >> 1 & 1) == 0) {
        uVar8 = 0;
        *(undefined1 *)param_1 = 0;
      }
      else {
        if (*(long *)(lVar16 + 0xf0) == 0) {
          lVar18 = lVar16 + 0xf9;
          uVar12 = (ulong)*(byte *)(lVar16 + 0xf8);
        }
        else {
          uVar12 = *(ulong *)(lVar16 + 0xf8);
          lVar18 = *(long *)(lVar16 + 0x100);
        }
        *param_1 = lVar18;
        param_1[1] = uVar12;
        uVar8 = 1;
      }
      *(undefined1 *)(param_1 + 2) = uVar8;
      return param_4;
    }
    if ((param_3 == (code *)((long)&MACH_HEADER.sizeofcmds + 1)) &&
       ((*(long *)param_2 == 0x7265732d63707267 && *(long *)(param_2 + 8) == 0x746174732d726576) &&
        *(long *)(param_2 + 0xd) == 0x6e69622d73746174)) {
      lVar16 = *(long *)param_4;
      if ((*(byte *)(lVar16 + 2) >> 2 & 1) == 0) {
        uVar8 = 0;
        *(undefined1 *)param_1 = 0;
      }
      else {
        if (*(long *)(lVar16 + 0xd0) == 0) {
          lVar18 = lVar16 + 0xd9;
          uVar12 = (ulong)*(byte *)(lVar16 + 0xd8);
        }
        else {
          uVar12 = *(ulong *)(lVar16 + 0xd8);
          lVar18 = *(long *)(lVar16 + 0xe0);
        }
        *param_1 = lVar18;
        param_1[1] = uVar12;
        uVar8 = 1;
      }
      *(undefined1 *)(param_1 + 2) = uVar8;
      return param_4;
    }
    if ((param_3 == (code *)((long)&MACH_HEADER.filetype + 2)) &&
       (*(long *)param_2 == 0x6172742d63707267 && *(long *)(param_2 + 6) == 0x6e69622d65636172)) {
      lVar16 = *(long *)param_4;
      if ((*(byte *)(lVar16 + 2) >> 3 & 1) == 0) {
        uVar8 = 0;
        *(undefined1 *)param_1 = 0;
      }
      else {
        if (*(long *)(lVar16 + 0xb0) == 0) {
          lVar18 = lVar16 + 0xb9;
          uVar12 = (ulong)*(byte *)(lVar16 + 0xb8);
        }
        else {
          uVar12 = *(ulong *)(lVar16 + 0xb8);
          lVar18 = *(long *)(lVar16 + 0xc0);
        }
        *param_1 = lVar18;
        param_1[1] = uVar12;
        uVar8 = 1;
      }
      *(undefined1 *)(param_1 + 2) = uVar8;
      return param_4;
    }
    if ((param_3 == (code *)((long)&MACH_HEADER.filetype + 1)) &&
       (*(long *)param_2 == 0x6761742d63707267 && *(long *)(param_2 + 5) == 0x6e69622d73676174)) {
      lVar16 = *(long *)param_4;
      if ((*(byte *)(lVar16 + 2) >> 4 & 1) == 0) {
        uVar8 = 0;
        *(undefined1 *)param_1 = 0;
      }
      else {
        if (*(long *)(lVar16 + 0x90) == 0) {
          lVar18 = lVar16 + 0x99;
          uVar12 = (ulong)*(byte *)(lVar16 + 0x98);
        }
        else {
          uVar12 = *(ulong *)(lVar16 + 0x98);
          lVar18 = *(long *)(lVar16 + 0xa0);
        }
        *param_1 = lVar18;
        param_1[1] = uVar12;
        uVar8 = 1;
      }
      *(undefined1 *)(param_1 + 2) = uVar8;
      return param_4;
    }
    if ((param_3 == (code *)((long)&MACH_HEADER.ncmds + 3)) &&
       ((*(long *)param_2 == 0x635f626c63707267 && *(long *)(param_2 + 8) == 0x74735f746e65696c) &&
        *(long *)(param_2 + 0xb) == 0x73746174735f746e)) {
      unaff_x29 = &stack0xfffffffffffffff0;
      if ((*(byte *)(*(long *)param_4 + 2) >> 5 & 1) == 0) {
        *(undefined1 *)param_1 = 0;
        *(undefined1 *)(param_1 + 2) = 0;
        return param_4;
      }
      unaff_x30 = FUN_00352a68;
      pcVar5 = param_4;
      _abort();
      register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
      param_2 = param_4;
      param_4 = pcVar5;
      param_1 = extraout_x8;
    }
    if ((param_3 == (code *)((long)&MACH_HEADER.cpusubtype + 3)) &&
       (*(long *)param_2 == 0x2d74736f632d626c && *(long *)(param_2 + 3) == 0x6e69622d74736f63)) {
      *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(code **)((long)register0x00000008 + -0x38) = unaff_x23;
      *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
      *(code **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(code **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(code **)((long)register0x00000008 + -8) = unaff_x30;
      unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -0x48) =
           *(undefined8 *)PTR____stack_chk_guard_00999f88;
      lVar16 = *(long *)param_4;
      unaff_x19 = param_4;
      pcVar5 = param_4;
      if ((*(byte *)(lVar16 + 2) >> 6 & 1) == 0) {
        uVar8 = 0;
        *(undefined1 *)param_1 = 0;
      }
      else {
        puVar11 = *(undefined8 **)(param_4 + 8);
        if (*(char *)((long)puVar11 + 0x17) < '\0') {
          *(undefined1 *)*puVar11 = 0;
          puVar11[1] = 0;
        }
        else {
          *(undefined1 *)puVar11 = 0;
          *(undefined1 *)((long)puVar11 + 0x17) = 0;
        }
        uVar12 = *(ulong *)(lVar16 + 0x60);
        unaff_x21 = (undefined8 *)(lVar16 + 0x68);
        if ((uVar12 & 1) != 0) {
          unaff_x21 = (undefined8 *)*unaff_x21;
        }
        if (1 < uVar12) {
          unaff_x22 = unaff_x21 + (uVar12 >> 1) * 4;
          unaff_x23 = (code *)((long)register0x00000008 + -0x5f);
          do {
            lVar16 = *(long *)(param_4 + 8);
            if (*(char *)(lVar16 + 0x17) < '\0') {
              if (*(long *)(lVar16 + 8) != 0) goto LAB_00352b64;
            }
            else if (*(char *)(lVar16 + 0x17) != '\0') {
LAB_00352b64:
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                        (lVar16,0x2c);
            }
            FUN_003fee84((undefined1 *)((long)register0x00000008 + -0x68),unaff_x21);
            uVar12 = *(ulong *)((long)register0x00000008 + -0x60) & 0xff;
            param_3 = unaff_x23;
            if (*(long *)((long)register0x00000008 + -0x68) != 0) {
              uVar12 = *(ulong *)((long)register0x00000008 + -0x60);
              param_3 = *(code **)((long)register0x00000008 + -0x58);
            }
            pcVar5 = param_3 + uVar12;
            FUN_00352c98(*(long *)(param_4 + 8));
            unaff_x19 = *(code **)((long)register0x00000008 + -0x68);
            if ((code *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
              do {
                lVar16 = *(long *)unaff_x19;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
                if (bVar3) {
                  *(long *)unaff_x19 = lVar16 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar16 + -1 == 0) {
                (**(code **)(unaff_x19 + 8))();
              }
            }
            unaff_x21 = unaff_x21 + 4;
          } while (unaff_x21 != unaff_x22);
        }
        plVar15 = *(long **)(param_4 + 8);
        uVar12 = plVar15[1];
        plVar1 = (long *)*plVar15;
        if (-1 < (char)*(byte *)((long)plVar15 + 0x17)) {
          uVar12 = (ulong)*(byte *)((long)plVar15 + 0x17);
          plVar1 = plVar15;
        }
        *param_1 = (long)plVar1;
        param_1[1] = uVar12;
        uVar8 = 1;
        unaff_x20 = param_4;
      }
      *(undefined1 *)(param_1 + 2) = uVar8;
      if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x48)) {
        return unaff_x19;
      }
      ___stack_chk_fail();
      param_4 = pcVar5;
      if ((int)param_3 != 0) {
        func_0x0040cf10();
        FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x68));
        param_4 = pcVar5;
      }
      unaff_x30 = FUN_00352c58;
      param_2 = unaff_x19;
      __Unwind_Resume();
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
      param_1 = extraout_x8_00;
    }
    if ((param_3 == (code *)&MACH_HEADER.cpusubtype) && (*(long *)param_2 == 0x6e656b6f742d626c)) {
      lVar16 = *(long *)param_4;
      if (*(char *)(lVar16 + 2) < '\0') {
        if (*(long *)(lVar16 + 0x40) == 0) {
          lVar18 = lVar16 + 0x49;
          uVar12 = (ulong)*(byte *)(lVar16 + 0x48);
        }
        else {
          uVar12 = *(ulong *)(lVar16 + 0x48);
          lVar18 = *(long *)(lVar16 + 0x50);
        }
        *param_1 = lVar18;
        param_1[1] = uVar12;
        uVar8 = 1;
      }
      else {
        uVar8 = 0;
        *(undefined1 *)param_1 = 0;
      }
      *(undefined1 *)(param_1 + 2) = uVar8;
      return param_4;
    }
    lVar16 = *(long *)param_4;
    plVar1 = *(long **)(param_4 + 8);
    pcVar5 = (code *)(lVar16 + 0x1f0);
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(code **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(code **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(code **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x70) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    plVar15 = *(long **)(lVar16 + 0x1f8);
    pcVar6 = param_2;
    pcVar7 = param_3;
    if ((plVar15 != (long *)0x0) && (plVar15[1] != 0)) {
      lVar16 = 0;
      bVar3 = false;
      plVar17 = (long *)*param_1;
      uVar12 = param_1[1];
      do {
        if (plVar15[lVar16 * 8 + 2] == 0) {
          pcVar5 = (code *)((long)plVar15 + lVar16 * 0x40 + 0x19);
          pcVar9 = (code *)(ulong)*(byte *)(plVar15 + lVar16 * 8 + 3);
        }
        else {
          pcVar9 = (code *)plVar15[lVar16 * 8 + 3];
          pcVar5 = (code *)plVar15[lVar16 * 8 + 4];
        }
        if ((pcVar9 == param_3) &&
           (pcVar6 = param_2, pcVar7 = param_3, _memcmp(pcVar5,param_2), (int)pcVar5 == 0)) {
          if (bVar3) {
            *(long **)((long)register0x00000008 + -0xa0) = plVar17;
            *(ulong *)((long)register0x00000008 + -0x98) = uVar12;
            *(char **)((long)register0x00000008 + -0xd0) = ",";
            *(undefined8 *)((long)register0x00000008 + -200) = 1;
            if (plVar15[lVar16 * 8 + 6] == 0) {
              lVar18 = (long)plVar15 + lVar16 * 0x40 + 0x39;
              uVar12 = (ulong)*(byte *)(plVar15 + lVar16 * 8 + 7);
            }
            else {
              uVar12 = plVar15[lVar16 * 8 + 7];
              lVar18 = plVar15[lVar16 * 8 + 8];
            }
            *(long *)((long)register0x00000008 + -0x100) = lVar18;
            *(ulong *)((long)register0x00000008 + -0xf8) = uVar12;
            pcVar5 = (code *)((long)register0x00000008 + -0xa0);
            pcVar6 = (code *)((long)register0x00000008 + -0xd0);
            pcVar7 = (code *)((long)register0x00000008 + -0x100);
            FUN_00575ddc((undefined1 *)((long)register0x00000008 + -0x118),pcVar5,pcVar6);
            if (*(char *)((long)plVar1 + 0x17) < '\0') {
              pcVar5 = (code *)*plVar1;
              __ZdlPv();
            }
            uVar10 = *(ulong *)((long)register0x00000008 + -0x108);
            plVar1[2] = uVar10;
            lVar18 = *(long *)((long)register0x00000008 + -0x118);
            plVar1[1] = *(long *)((long)register0x00000008 + -0x110);
            *plVar1 = lVar18;
            uVar12 = plVar1[1];
            plVar17 = (long *)*plVar1;
            if (-1 < (long)uVar10) {
              uVar12 = uVar10 >> 0x38;
              plVar17 = plVar1;
            }
            *param_1 = (long)plVar17;
            param_1[1] = uVar12;
          }
          else {
            if (plVar15[lVar16 * 8 + 6] == 0) {
              plVar17 = (long *)((long)plVar15 + lVar16 * 0x40 + 0x39);
              uVar12 = (ulong)*(byte *)(plVar15 + lVar16 * 8 + 7);
            }
            else {
              uVar12 = plVar15[lVar16 * 8 + 7];
              plVar17 = (long *)plVar15[lVar16 * 8 + 8];
            }
            *param_1 = (long)plVar17;
            param_1[1] = uVar12;
            bVar3 = true;
            *(undefined1 *)(param_1 + 2) = 1;
          }
        }
        lVar16 = lVar16 + 1;
        do {
          if (lVar16 != plVar15[1]) goto LAB_003fe6e4;
          lVar16 = 0;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
        lVar16 = 0;
LAB_003fe6e4:
      } while ((plVar15 != (long *)0x0) || (lVar16 != 0));
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x70)) {
      return pcVar5;
    }
    ___stack_chk_fail();
    __Unwind_Resume();
    *(undefined1 **)((long)register0x00000008 + -0x130) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x128) = FUN_003fe72c;
    if (*(long *)pcVar5 == 0) {
      pcVar9 = pcVar5 + 9;
      uVar12 = (ulong)(byte)pcVar5[8];
    }
    else {
      uVar12 = *(ulong *)(pcVar5 + 8);
      pcVar9 = *(code **)(pcVar5 + 0x10);
    }
    if (uVar12 == 0x10) {
      if (*(long *)pcVar9 == 0x746163696c707061 && *(long *)(pcVar9 + 8) == 0x637072672f6e6f69) {
        return (code *)0x0;
      }
    }
    else if (uVar12 < 0x11) {
      if (uVar12 == 0) {
        return (code *)((long)&MACH_HEADER.magic + 1);
      }
    }
    else {
      if ((*(long *)pcVar9 == 0x746163696c707061 && *(long *)(pcVar9 + 8) == 0x637072672f6e6f69) &&
          pcVar9[0x10] == (code)0x3b) {
        return (code *)0x0;
      }
      if ((*(long *)pcVar9 == 0x746163696c707061 && *(long *)(pcVar9 + 8) == 0x637072672f6e6f69) &&
          pcVar9[0x10] == (code)0x2b) {
        return (code *)0x0;
      }
    }
    (*pcVar7)(pcVar6,"invalid value",0xd);
    return (code *)((long)&MACH_HEADER.magic + 2);
  }
  ppuVar4 = &puStack_80;
  ppuVar14 = &puStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  if ((*(byte *)(*(long *)param_4 + 1) >> 5 & 1) == 0) {
    uVar8 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    FUN_0034eb70(&pcStack_68,*(undefined8 *)(*(long *)param_4 + 0x170));
    if (pcStack_68 == (code *)0x0) {
      uVar12 = (ulong)bStack_60;
      puVar13 = &uStack_5f;
    }
    else {
      uVar12 = CONCAT71(uStack_5f,bStack_60);
      puVar13 = puStack_58;
      if (0x7ffffffffffffff7 < uVar12) goto LAB_003525f4;
    }
    if (uVar12 < 0x17) {
      uStack_70 = CONCAT17((char)uVar12,(undefined7)uStack_70);
      if (uVar12 != 0) goto LAB_00352530;
    }
    else {
      uVar10 = (uVar12 & 0x7ffffffffffffff8) + 8;
      if ((uVar12 | 7) != 0x17) {
        uVar10 = uVar12 | 7;
      }
      ppuVar4 = (undefined1 **)(uVar10 + 1);
      __Znwm();
      uStack_70 = (ulong)(uVar10 + 1) | 0x8000000000000000;
      puStack_80 = (undefined1 *)ppuVar4;
      uStack_78 = uVar12;
LAB_00352530:
      _memmove(ppuVar4,puVar13,uVar12);
      ppuVar14 = ppuVar4;
    }
    *(undefined1 *)((long)ppuVar14 + uVar12) = 0;
    puVar11 = *(undefined8 **)(param_4 + 8);
    if (*(char *)((long)puVar11 + 0x17) < '\0') {
      __ZdlPv(*puVar11);
    }
    puVar11[2] = uStack_70;
    puVar11[1] = uStack_78;
    *puVar11 = puStack_80;
    uStack_70 = uStack_70 & 0xffffffffffffff;
    puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
    if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
      do {
        lVar16 = *(long *)pcStack_68;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
        if (bVar3) {
          *(long *)pcStack_68 = lVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar16 + -1 == 0) {
        (**(code **)(pcStack_68 + 8))();
      }
    }
    plVar15 = *(long **)(param_4 + 8);
    uVar12 = plVar15[1];
    plVar1 = (long *)*plVar15;
    if (-1 < (char)*(byte *)((long)plVar15 + 0x17)) {
      uVar12 = (ulong)*(byte *)((long)plVar15 + 0x17);
      plVar1 = plVar15;
    }
    *param_1 = (long)plVar1;
    param_1[1] = uVar12;
    uVar8 = 1;
    param_4 = pcStack_68;
  }
  *(undefined1 *)(param_1 + 2) = uVar8;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return param_4;
  }
  ___stack_chk_fail();
LAB_003525f4:
  func_0x0033b318(&puStack_80);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x352600);
  (*pcVar5)();
}



/* Entry: 00352468; end: 0035262b;  */

void FUN_00352468(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 **ppuVar5;
  undefined1 uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined7 *puVar11;
  undefined1 **ppuVar12;
  undefined1 *puStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  ppuVar5 = &puStack_80;
  ppuVar12 = &puStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  if ((*(byte *)(*param_2 + 1) >> 5 & 1) == 0) {
    uVar6 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    FUN_0034eb70(&plStack_68,*(undefined8 *)(*param_2 + 0x170));
    if (plStack_68 == (long *)0x0) {
      uVar9 = (ulong)bStack_60;
      puVar11 = &uStack_5f;
    }
    else {
      uVar9 = CONCAT71(uStack_5f,bStack_60);
      puVar11 = puStack_58;
      if (0x7ffffffffffffff7 < uVar9) goto LAB_003525f4;
    }
    if (uVar9 < 0x17) {
      uStack_70 = CONCAT17((char)uVar9,(undefined7)uStack_70);
      if (uVar9 != 0) goto LAB_00352530;
    }
    else {
      uVar1 = (uVar9 & 0x7ffffffffffffff8) + 8;
      if ((uVar9 | 7) != 0x17) {
        uVar1 = uVar9 | 7;
      }
      ppuVar5 = (undefined1 **)(uVar1 + 1);
      __Znwm();
      uStack_70 = (ulong)(uVar1 + 1) | 0x8000000000000000;
      puStack_80 = (undefined1 *)ppuVar5;
      uStack_78 = uVar9;
LAB_00352530:
      _memmove(ppuVar5,puVar11,uVar9);
      ppuVar12 = ppuVar5;
    }
    *(undefined1 *)((long)ppuVar12 + uVar9) = 0;
    puVar10 = (undefined8 *)param_2[1];
    if (*(char *)((long)puVar10 + 0x17) < '\0') {
      __ZdlPv(*puVar10);
    }
    puVar10[2] = uStack_70;
    puVar10[1] = uStack_78;
    *puVar10 = puStack_80;
    uStack_70 = uStack_70 & 0xffffffffffffff;
    puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_68) {
      do {
        lVar7 = *plStack_68;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
        if (bVar3) {
          *plStack_68 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_68[1])();
      }
    }
    puVar8 = (undefined8 *)param_2[1];
    uVar9 = puVar8[1];
    puVar10 = (undefined8 *)*puVar8;
    if (-1 < (char)*(byte *)((long)puVar8 + 0x17)) {
      uVar9 = (ulong)*(byte *)((long)puVar8 + 0x17);
      puVar10 = puVar8;
    }
    *param_1 = puVar10;
    param_1[1] = uVar9;
    uVar6 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar6;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_003525f4:
  func_0x0033b318(&puStack_80);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x352600);
  (*pcVar4)();
}



/* Entry: 0035262c; end: 00352a3f;  */

code * FUN_0035262c(long *param_1,code *param_2,code *param_3,code *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  long *extraout_x8;
  long *extraout_x8_00;
  code *pcVar7;
  ulong uVar8;
  undefined1 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  code *unaff_x19;
  code *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  code *unaff_x23;
  long *plVar12;
  undefined8 unaff_x24;
  long lVar13;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long *plVar14;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar15;
  
  if ((param_3 == (code *)((long)&MACH_HEADER.cpusubtype + 2)) &&
     (*(long *)param_2 == 0x6567612d72657375 && *(short *)(param_2 + 8) == 0x746e)) {
    lVar13 = *(long *)param_4;
    if ((*(byte *)(lVar13 + 1) >> 6 & 1) == 0) {
      uVar9 = 0;
      *(undefined1 *)param_1 = 0;
    }
    else {
      if (*(long *)(lVar13 + 0x150) == 0) {
        lVar15 = lVar13 + 0x159;
        uVar11 = (ulong)*(byte *)(lVar13 + 0x158);
      }
      else {
        uVar11 = *(ulong *)(lVar13 + 0x158);
        lVar15 = *(long *)(lVar13 + 0x160);
      }
      *param_1 = lVar15;
      param_1[1] = uVar11;
      uVar9 = 1;
    }
    *(undefined1 *)(param_1 + 2) = uVar9;
    return param_4;
  }
  if ((param_3 == (code *)&MACH_HEADER.filetype) &&
     (*(long *)param_2 == 0x73656d2d63707267 && *(int *)(param_2 + 8) == 0x65676173)) {
    lVar13 = *(long *)param_4;
    if (*(char *)(lVar13 + 1) < '\0') {
      if (*(long *)(lVar13 + 0x130) == 0) {
        lVar15 = lVar13 + 0x139;
        uVar11 = (ulong)*(byte *)(lVar13 + 0x138);
      }
      else {
        uVar11 = *(ulong *)(lVar13 + 0x138);
        lVar15 = *(long *)(lVar13 + 0x140);
      }
      *param_1 = lVar15;
      param_1[1] = uVar11;
      uVar9 = 1;
    }
    else {
      uVar9 = 0;
      *(undefined1 *)param_1 = 0;
    }
    *(undefined1 *)(param_1 + 2) = uVar9;
    return param_4;
  }
  if ((param_3 == (code *)&MACH_HEADER.cputype) && (*(int *)param_2 == 0x74736f68)) {
    lVar13 = *(long *)param_4;
    if ((*(byte *)(lVar13 + 2) & 1) == 0) {
      uVar9 = 0;
      *(undefined1 *)param_1 = 0;
    }
    else {
      if (*(long *)(lVar13 + 0x110) == 0) {
        lVar15 = lVar13 + 0x119;
        uVar11 = (ulong)*(byte *)(lVar13 + 0x118);
      }
      else {
        uVar11 = *(ulong *)(lVar13 + 0x118);
        lVar15 = *(long *)(lVar13 + 0x120);
      }
      *param_1 = lVar15;
      param_1[1] = uVar11;
      uVar9 = 1;
    }
    *(undefined1 *)(param_1 + 2) = uVar9;
    return param_4;
  }
  if ((param_3 == (code *)((long)&MACH_HEADER.flags + 1)) &&
     (((*(long *)param_2 == 0x746e696f70646e65 && *(long *)(param_2 + 8) == 0x656d2d64616f6c2d) &&
      *(long *)(param_2 + 0x10) == 0x69622d7363697274) && param_2[0x18] == (code)0x6e)) {
    lVar13 = *(long *)param_4;
    if ((*(byte *)(lVar13 + 2) >> 1 & 1) == 0) {
      uVar9 = 0;
      *(undefined1 *)param_1 = 0;
    }
    else {
      if (*(long *)(lVar13 + 0xf0) == 0) {
        lVar15 = lVar13 + 0xf9;
        uVar11 = (ulong)*(byte *)(lVar13 + 0xf8);
      }
      else {
        uVar11 = *(ulong *)(lVar13 + 0xf8);
        lVar15 = *(long *)(lVar13 + 0x100);
      }
      *param_1 = lVar15;
      param_1[1] = uVar11;
      uVar9 = 1;
    }
    *(undefined1 *)(param_1 + 2) = uVar9;
    return param_4;
  }
  if ((param_3 == (code *)((long)&MACH_HEADER.sizeofcmds + 1)) &&
     ((*(long *)param_2 == 0x7265732d63707267 && *(long *)(param_2 + 8) == 0x746174732d726576) &&
      *(long *)(param_2 + 0xd) == 0x6e69622d73746174)) {
    lVar13 = *(long *)param_4;
    if ((*(byte *)(lVar13 + 2) >> 2 & 1) == 0) {
      uVar9 = 0;
      *(undefined1 *)param_1 = 0;
    }
    else {
      if (*(long *)(lVar13 + 0xd0) == 0) {
        lVar15 = lVar13 + 0xd9;
        uVar11 = (ulong)*(byte *)(lVar13 + 0xd8);
      }
      else {
        uVar11 = *(ulong *)(lVar13 + 0xd8);
        lVar15 = *(long *)(lVar13 + 0xe0);
      }
      *param_1 = lVar15;
      param_1[1] = uVar11;
      uVar9 = 1;
    }
    *(undefined1 *)(param_1 + 2) = uVar9;
    return param_4;
  }
  if ((param_3 == (code *)((long)&MACH_HEADER.filetype + 2)) &&
     (*(long *)param_2 == 0x6172742d63707267 && *(long *)(param_2 + 6) == 0x6e69622d65636172)) {
    lVar13 = *(long *)param_4;
    if ((*(byte *)(lVar13 + 2) >> 3 & 1) == 0) {
      uVar9 = 0;
      *(undefined1 *)param_1 = 0;
    }
    else {
      if (*(long *)(lVar13 + 0xb0) == 0) {
        lVar15 = lVar13 + 0xb9;
        uVar11 = (ulong)*(byte *)(lVar13 + 0xb8);
      }
      else {
        uVar11 = *(ulong *)(lVar13 + 0xb8);
        lVar15 = *(long *)(lVar13 + 0xc0);
      }
      *param_1 = lVar15;
      param_1[1] = uVar11;
      uVar9 = 1;
    }
    *(undefined1 *)(param_1 + 2) = uVar9;
    return param_4;
  }
  if ((param_3 == (code *)((long)&MACH_HEADER.filetype + 1)) &&
     (*(long *)param_2 == 0x6761742d63707267 && *(long *)(param_2 + 5) == 0x6e69622d73676174)) {
    lVar13 = *(long *)param_4;
    if ((*(byte *)(lVar13 + 2) >> 4 & 1) == 0) {
      uVar9 = 0;
      *(undefined1 *)param_1 = 0;
    }
    else {
      if (*(long *)(lVar13 + 0x90) == 0) {
        lVar15 = lVar13 + 0x99;
        uVar11 = (ulong)*(byte *)(lVar13 + 0x98);
      }
      else {
        uVar11 = *(ulong *)(lVar13 + 0x98);
        lVar15 = *(long *)(lVar13 + 0xa0);
      }
      *param_1 = lVar15;
      param_1[1] = uVar11;
      uVar9 = 1;
    }
    *(undefined1 *)(param_1 + 2) = uVar9;
    return param_4;
  }
  if ((param_3 == (code *)((long)&MACH_HEADER.ncmds + 3)) &&
     ((*(long *)param_2 == 0x635f626c63707267 && *(long *)(param_2 + 8) == 0x74735f746e65696c) &&
      *(long *)(param_2 + 0xb) == 0x73746174735f746e)) {
    unaff_x29 = &stack0xfffffffffffffff0;
    if ((*(byte *)(*(long *)param_4 + 2) >> 5 & 1) == 0) {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 2) = 0;
      return param_4;
    }
    unaff_x30 = FUN_00352a68;
    pcVar4 = param_4;
    _abort();
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    param_2 = param_4;
    param_4 = pcVar4;
    param_1 = extraout_x8;
  }
  if ((param_3 == (code *)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)param_2 == 0x2d74736f632d626c && *(long *)(param_2 + 3) == 0x6e69622d74736f63)) {
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(code **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(code **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(code **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x48) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    lVar13 = *(long *)param_4;
    unaff_x19 = param_4;
    pcVar4 = param_4;
    if ((*(byte *)(lVar13 + 2) >> 6 & 1) == 0) {
      uVar9 = 0;
      *(undefined1 *)param_1 = 0;
    }
    else {
      puVar10 = *(undefined8 **)(param_4 + 8);
      if (*(char *)((long)puVar10 + 0x17) < '\0') {
        *(undefined1 *)*puVar10 = 0;
        puVar10[1] = 0;
      }
      else {
        *(undefined1 *)puVar10 = 0;
        *(undefined1 *)((long)puVar10 + 0x17) = 0;
      }
      uVar11 = *(ulong *)(lVar13 + 0x60);
      unaff_x21 = (undefined8 *)(lVar13 + 0x68);
      if ((uVar11 & 1) != 0) {
        unaff_x21 = (undefined8 *)*unaff_x21;
      }
      if (1 < uVar11) {
        unaff_x22 = unaff_x21 + (uVar11 >> 1) * 4;
        unaff_x23 = (code *)((long)register0x00000008 + -0x5f);
        do {
          lVar13 = *(long *)(param_4 + 8);
          if (*(char *)(lVar13 + 0x17) < '\0') {
            if (*(long *)(lVar13 + 8) != 0) goto LAB_00352b64;
          }
          else if (*(char *)(lVar13 + 0x17) != '\0') {
LAB_00352b64:
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                      (lVar13,0x2c);
          }
          FUN_003fee84((undefined1 *)((long)register0x00000008 + -0x68),unaff_x21);
          uVar11 = *(ulong *)((long)register0x00000008 + -0x60) & 0xff;
          param_3 = unaff_x23;
          if (*(long *)((long)register0x00000008 + -0x68) != 0) {
            uVar11 = *(ulong *)((long)register0x00000008 + -0x60);
            param_3 = *(code **)((long)register0x00000008 + -0x58);
          }
          pcVar4 = param_3 + uVar11;
          FUN_00352c98(*(long *)(param_4 + 8));
          unaff_x19 = *(code **)((long)register0x00000008 + -0x68);
          if ((code *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
            do {
              lVar13 = *(long *)unaff_x19;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
              if (bVar3) {
                *(long *)unaff_x19 = lVar13 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar13 + -1 == 0) {
              (**(code **)(unaff_x19 + 8))();
            }
          }
          unaff_x21 = unaff_x21 + 4;
        } while (unaff_x21 != unaff_x22);
      }
      plVar12 = *(long **)(param_4 + 8);
      uVar11 = plVar12[1];
      plVar1 = (long *)*plVar12;
      if (-1 < (char)*(byte *)((long)plVar12 + 0x17)) {
        uVar11 = (ulong)*(byte *)((long)plVar12 + 0x17);
        plVar1 = plVar12;
      }
      *param_1 = (long)plVar1;
      param_1[1] = uVar11;
      uVar9 = 1;
      unaff_x20 = param_4;
    }
    *(undefined1 *)(param_1 + 2) = uVar9;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x48)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    param_4 = pcVar4;
    if ((int)param_3 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x68));
      param_4 = pcVar4;
    }
    unaff_x30 = FUN_00352c58;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
    param_1 = extraout_x8_00;
  }
  if ((param_3 == (code *)&MACH_HEADER.cpusubtype) && (*(long *)param_2 == 0x6e656b6f742d626c)) {
    lVar13 = *(long *)param_4;
    if (*(char *)(lVar13 + 2) < '\0') {
      if (*(long *)(lVar13 + 0x40) == 0) {
        lVar15 = lVar13 + 0x49;
        uVar11 = (ulong)*(byte *)(lVar13 + 0x48);
      }
      else {
        uVar11 = *(ulong *)(lVar13 + 0x48);
        lVar15 = *(long *)(lVar13 + 0x50);
      }
      *param_1 = lVar15;
      param_1[1] = uVar11;
      uVar9 = 1;
    }
    else {
      uVar9 = 0;
      *(undefined1 *)param_1 = 0;
    }
    *(undefined1 *)(param_1 + 2) = uVar9;
    return param_4;
  }
  lVar13 = *(long *)param_4;
  plVar1 = *(long **)(param_4 + 8);
  pcVar4 = (code *)(lVar13 + 0x1f0);
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(code **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(code **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(code **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x70) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  plVar12 = *(long **)(lVar13 + 0x1f8);
  pcVar5 = param_2;
  pcVar6 = param_3;
  if ((plVar12 != (long *)0x0) && (plVar12[1] != 0)) {
    lVar13 = 0;
    bVar3 = false;
    plVar14 = (long *)*param_1;
    uVar11 = param_1[1];
    do {
      if (plVar12[lVar13 * 8 + 2] == 0) {
        pcVar4 = (code *)((long)plVar12 + lVar13 * 0x40 + 0x19);
        pcVar7 = (code *)(ulong)*(byte *)(plVar12 + lVar13 * 8 + 3);
      }
      else {
        pcVar7 = (code *)plVar12[lVar13 * 8 + 3];
        pcVar4 = (code *)plVar12[lVar13 * 8 + 4];
      }
      if ((pcVar7 == param_3) &&
         (pcVar5 = param_2, pcVar6 = param_3, _memcmp(pcVar4,param_2), (int)pcVar4 == 0)) {
        if (bVar3) {
          *(long **)((long)register0x00000008 + -0xa0) = plVar14;
          *(ulong *)((long)register0x00000008 + -0x98) = uVar11;
          *(char **)((long)register0x00000008 + -0xd0) = ",";
          *(undefined8 *)((long)register0x00000008 + -200) = 1;
          if (plVar12[lVar13 * 8 + 6] == 0) {
            lVar15 = (long)plVar12 + lVar13 * 0x40 + 0x39;
            uVar11 = (ulong)*(byte *)(plVar12 + lVar13 * 8 + 7);
          }
          else {
            uVar11 = plVar12[lVar13 * 8 + 7];
            lVar15 = plVar12[lVar13 * 8 + 8];
          }
          *(long *)((long)register0x00000008 + -0x100) = lVar15;
          *(ulong *)((long)register0x00000008 + -0xf8) = uVar11;
          pcVar4 = (code *)((long)register0x00000008 + -0xa0);
          pcVar5 = (code *)((long)register0x00000008 + -0xd0);
          pcVar6 = (code *)((long)register0x00000008 + -0x100);
          FUN_00575ddc((undefined1 *)((long)register0x00000008 + -0x118),pcVar4,pcVar5);
          if (*(char *)((long)plVar1 + 0x17) < '\0') {
            pcVar4 = (code *)*plVar1;
            __ZdlPv();
          }
          uVar8 = *(ulong *)((long)register0x00000008 + -0x108);
          plVar1[2] = uVar8;
          lVar15 = *(long *)((long)register0x00000008 + -0x118);
          plVar1[1] = *(long *)((long)register0x00000008 + -0x110);
          *plVar1 = lVar15;
          uVar11 = plVar1[1];
          plVar14 = (long *)*plVar1;
          if (-1 < (long)uVar8) {
            uVar11 = uVar8 >> 0x38;
            plVar14 = plVar1;
          }
          *param_1 = (long)plVar14;
          param_1[1] = uVar11;
        }
        else {
          if (plVar12[lVar13 * 8 + 6] == 0) {
            plVar14 = (long *)((long)plVar12 + lVar13 * 0x40 + 0x39);
            uVar11 = (ulong)*(byte *)(plVar12 + lVar13 * 8 + 7);
          }
          else {
            uVar11 = plVar12[lVar13 * 8 + 7];
            plVar14 = (long *)plVar12[lVar13 * 8 + 8];
          }
          *param_1 = (long)plVar14;
          param_1[1] = uVar11;
          bVar3 = true;
          *(undefined1 *)(param_1 + 2) = 1;
        }
      }
      lVar13 = lVar13 + 1;
      do {
        if (lVar13 != plVar12[1]) goto LAB_003fe6e4;
        lVar13 = 0;
        plVar12 = (long *)*plVar12;
      } while (plVar12 != (long *)0x0);
      lVar13 = 0;
LAB_003fe6e4:
    } while ((plVar12 != (long *)0x0) || (lVar13 != 0));
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x70)) {
    return pcVar4;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined1 **)((long)register0x00000008 + -0x130) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x128) = FUN_003fe72c;
  if (*(long *)pcVar4 == 0) {
    pcVar7 = pcVar4 + 9;
    uVar11 = (ulong)(byte)pcVar4[8];
  }
  else {
    uVar11 = *(ulong *)(pcVar4 + 8);
    pcVar7 = *(code **)(pcVar4 + 0x10);
  }
  if (uVar11 == 0x10) {
    if (*(long *)pcVar7 == 0x746163696c707061 && *(long *)(pcVar7 + 8) == 0x637072672f6e6f69) {
      return (code *)0x0;
    }
  }
  else if (uVar11 < 0x11) {
    if (uVar11 == 0) {
      return (code *)((long)&MACH_HEADER.magic + 1);
    }
  }
  else {
    if ((*(long *)pcVar7 == 0x746163696c707061 && *(long *)(pcVar7 + 8) == 0x637072672f6e6f69) &&
        pcVar7[0x10] == (code)0x3b) {
      return (code *)0x0;
    }
    if ((*(long *)pcVar7 == 0x746163696c707061 && *(long *)(pcVar7 + 8) == 0x637072672f6e6f69) &&
        pcVar7[0x10] == (code)0x2b) {
      return (code *)0x0;
    }
  }
  (*pcVar6)(pcVar5,"invalid value",0xd);
  return (code *)((long)&MACH_HEADER.magic + 2);
}



/* Entry: 00352a40; end: 00352a67;  */

code * FUN_00352a40(undefined1 *param_1,code *param_2,code *param_3,code *param_4)

{
  char cVar1;
  bool bVar2;
  undefined1 *puVar3;
  code *pcVar4;
  code *pcVar5;
  undefined1 uVar6;
  long *extraout_x8;
  long *plVar7;
  long *extraout_x8_00;
  long *plVar8;
  code *pcVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  code *unaff_x19;
  code *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  code *unaff_x23;
  long *plVar13;
  undefined8 unaff_x24;
  long lVar14;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long *plVar15;
  undefined1 **ppuVar16;
  code *pcVar17;
  long lVar18;
  undefined1 auStack_80 [8];
  code *pcStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  long lStack_58;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  if ((*(byte *)(*(long *)param_2 + 2) >> 5 & 1) == 0) {
    *param_1 = 0;
    param_1[0x10] = 0;
    return param_2;
  }
  pcVar17 = FUN_00352a68;
  _abort();
  puVar3 = &stack0xfffffffffffffff0;
  plVar8 = extraout_x8;
  ppuVar16 = (undefined1 **)&stack0xfffffffffffffff0;
  if ((param_3 == (code *)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (puVar3 = &stack0xfffffffffffffff0, ppuVar16 = (undefined1 **)&stack0xfffffffffffffff0,
     *(long *)param_2 == 0x2d74736f632d626c && *(long *)(param_2 + 3) == 0x6e69622d74736f63)) {
    pcStack_18 = FUN_00352a68;
    lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
    lVar14 = *(long *)param_4;
    unaff_x19 = param_4;
    pcVar17 = param_4;
    if ((*(byte *)(lVar14 + 2) >> 6 & 1) == 0) {
      uVar6 = 0;
      *(undefined1 *)extraout_x8 = 0;
      puStack_20 = &stack0xfffffffffffffff0;
    }
    else {
      puVar11 = *(undefined8 **)(param_4 + 8);
      if (*(char *)((long)puVar11 + 0x17) < '\0') {
        *(undefined1 *)*puVar11 = 0;
        puVar11[1] = 0;
      }
      else {
        *(undefined1 *)puVar11 = 0;
        *(undefined1 *)((long)puVar11 + 0x17) = 0;
      }
      uVar12 = *(ulong *)(lVar14 + 0x60);
      unaff_x21 = (undefined8 *)(lVar14 + 0x68);
      if ((uVar12 & 1) != 0) {
        unaff_x21 = (undefined8 *)*unaff_x21;
      }
      puStack_20 = &stack0xfffffffffffffff0;
      if (1 < uVar12) {
        unaff_x22 = unaff_x21 + (uVar12 >> 1) * 4;
        unaff_x23 = (code *)((long)&uStack_70 + 1);
        puStack_20 = &stack0xfffffffffffffff0;
        do {
          lVar14 = *(long *)(param_4 + 8);
          if (*(char *)(lVar14 + 0x17) < '\0') {
            if (*(long *)(lVar14 + 8) != 0) goto LAB_00352b64;
          }
          else if (*(char *)(lVar14 + 0x17) != '\0') {
LAB_00352b64:
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                      (lVar14,0x2c);
          }
          FUN_003fee84(&pcStack_78,unaff_x21);
          uVar12 = uStack_70 & 0xff;
          param_3 = unaff_x23;
          if (pcStack_78 != (code *)0x0) {
            uVar12 = uStack_70;
            param_3 = pcStack_68;
          }
          pcVar17 = param_3 + uVar12;
          FUN_00352c98(*(long *)(param_4 + 8));
          unaff_x19 = pcStack_78;
          if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_78) {
            do {
              lVar14 = *(long *)pcStack_78;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(pcStack_78,0x10);
              if (bVar2) {
                *(long *)pcStack_78 = lVar14 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar14 + -1 == 0) {
              (**(code **)(pcStack_78 + 8))();
            }
          }
          unaff_x21 = unaff_x21 + 4;
        } while (unaff_x21 != unaff_x22);
      }
      plVar7 = *(long **)(param_4 + 8);
      uVar12 = plVar7[1];
      plVar8 = (long *)*plVar7;
      if (-1 < (char)*(byte *)((long)plVar7 + 0x17)) {
        uVar12 = (ulong)*(byte *)((long)plVar7 + 0x17);
        plVar8 = plVar7;
      }
      *extraout_x8 = (long)plVar8;
      extraout_x8[1] = uVar12;
      uVar6 = 1;
      unaff_x20 = param_4;
    }
    *(undefined1 *)(extraout_x8 + 2) = uVar6;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    param_4 = pcVar17;
    if ((int)param_3 != 0) {
      func_0x0040cf10();
      FUN_0034b418(&pcStack_78);
      param_4 = pcVar17;
    }
    pcVar17 = FUN_00352c58;
    param_2 = unaff_x19;
    __Unwind_Resume();
    puVar3 = auStack_80;
    plVar8 = extraout_x8_00;
    ppuVar16 = &puStack_20;
  }
  if ((param_3 == (code *)&MACH_HEADER.cpusubtype) && (*(long *)param_2 == 0x6e656b6f742d626c)) {
    lVar14 = *(long *)param_4;
    if (*(char *)(lVar14 + 2) < '\0') {
      if (*(long *)(lVar14 + 0x40) == 0) {
        lVar18 = lVar14 + 0x49;
        uVar12 = (ulong)*(byte *)(lVar14 + 0x48);
      }
      else {
        uVar12 = *(ulong *)(lVar14 + 0x48);
        lVar18 = *(long *)(lVar14 + 0x50);
      }
      *plVar8 = lVar18;
      plVar8[1] = uVar12;
      uVar6 = 1;
    }
    else {
      uVar6 = 0;
      *(undefined1 *)plVar8 = 0;
    }
    *(undefined1 *)(plVar8 + 2) = uVar6;
    return param_4;
  }
  lVar14 = *(long *)param_4;
  plVar7 = *(long **)(param_4 + 8);
  pcVar4 = (code *)(lVar14 + 0x1f0);
  *(undefined8 *)(puVar3 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar3 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar3 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
  *(code **)(puVar3 + -0x38) = unaff_x23;
  *(undefined8 **)(puVar3 + -0x30) = unaff_x22;
  *(undefined8 **)(puVar3 + -0x28) = unaff_x21;
  *(code **)(puVar3 + -0x20) = unaff_x20;
  *(code **)(puVar3 + -0x18) = unaff_x19;
  *(undefined1 ***)(puVar3 + -0x10) = ppuVar16;
  *(code **)(puVar3 + -8) = pcVar17;
  *(undefined8 *)(puVar3 + -0x70) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  *(undefined1 *)plVar8 = 0;
  *(undefined1 *)(plVar8 + 2) = 0;
  plVar13 = *(long **)(lVar14 + 0x1f8);
  pcVar17 = param_2;
  pcVar5 = param_3;
  if ((plVar13 != (long *)0x0) && (plVar13[1] != 0)) {
    lVar14 = 0;
    bVar2 = false;
    plVar15 = (long *)*plVar8;
    uVar12 = plVar8[1];
    do {
      if (plVar13[lVar14 * 8 + 2] == 0) {
        pcVar4 = (code *)((long)plVar13 + lVar14 * 0x40 + 0x19);
        pcVar9 = (code *)(ulong)*(byte *)(plVar13 + lVar14 * 8 + 3);
      }
      else {
        pcVar9 = (code *)plVar13[lVar14 * 8 + 3];
        pcVar4 = (code *)plVar13[lVar14 * 8 + 4];
      }
      if ((pcVar9 == param_3) &&
         (pcVar17 = param_2, pcVar5 = param_3, _memcmp(pcVar4,param_2), (int)pcVar4 == 0)) {
        if (bVar2) {
          *(long **)(puVar3 + -0xa0) = plVar15;
          *(ulong *)(puVar3 + -0x98) = uVar12;
          *(char **)(puVar3 + -0xd0) = ",";
          *(undefined8 *)(puVar3 + -200) = 1;
          if (plVar13[lVar14 * 8 + 6] == 0) {
            lVar18 = (long)plVar13 + lVar14 * 0x40 + 0x39;
            uVar12 = (ulong)*(byte *)(plVar13 + lVar14 * 8 + 7);
          }
          else {
            uVar12 = plVar13[lVar14 * 8 + 7];
            lVar18 = plVar13[lVar14 * 8 + 8];
          }
          *(long *)(puVar3 + -0x100) = lVar18;
          *(ulong *)(puVar3 + -0xf8) = uVar12;
          pcVar4 = (code *)(puVar3 + -0xa0);
          pcVar17 = (code *)(puVar3 + -0xd0);
          pcVar5 = (code *)(puVar3 + -0x100);
          FUN_00575ddc(puVar3 + -0x118,pcVar4,pcVar17);
          if (*(char *)((long)plVar7 + 0x17) < '\0') {
            pcVar4 = (code *)*plVar7;
            __ZdlPv();
          }
          uVar10 = *(ulong *)(puVar3 + -0x108);
          plVar7[2] = uVar10;
          lVar18 = *(long *)(puVar3 + -0x118);
          plVar7[1] = *(long *)(puVar3 + -0x110);
          *plVar7 = lVar18;
          uVar12 = plVar7[1];
          plVar15 = (long *)*plVar7;
          if (-1 < (long)uVar10) {
            uVar12 = uVar10 >> 0x38;
            plVar15 = plVar7;
          }
          *plVar8 = (long)plVar15;
          plVar8[1] = uVar12;
        }
        else {
          if (plVar13[lVar14 * 8 + 6] == 0) {
            plVar15 = (long *)((long)plVar13 + lVar14 * 0x40 + 0x39);
            uVar12 = (ulong)*(byte *)(plVar13 + lVar14 * 8 + 7);
          }
          else {
            uVar12 = plVar13[lVar14 * 8 + 7];
            plVar15 = (long *)plVar13[lVar14 * 8 + 8];
          }
          *plVar8 = (long)plVar15;
          plVar8[1] = uVar12;
          bVar2 = true;
          *(undefined1 *)(plVar8 + 2) = 1;
        }
      }
      lVar14 = lVar14 + 1;
      do {
        if (lVar14 != plVar13[1]) goto LAB_003fe6e4;
        lVar14 = 0;
        plVar13 = (long *)*plVar13;
      } while (plVar13 != (long *)0x0);
      lVar14 = 0;
LAB_003fe6e4:
    } while ((plVar13 != (long *)0x0) || (lVar14 != 0));
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar3 + -0x70)) {
    return pcVar4;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined1 **)(puVar3 + -0x130) = puVar3 + -0x10;
  *(code **)(puVar3 + -0x128) = FUN_003fe72c;
  if (*(long *)pcVar4 == 0) {
    pcVar9 = pcVar4 + 9;
    uVar12 = (ulong)(byte)pcVar4[8];
  }
  else {
    uVar12 = *(ulong *)(pcVar4 + 8);
    pcVar9 = *(code **)(pcVar4 + 0x10);
  }
  if (uVar12 == 0x10) {
    if (*(long *)pcVar9 == 0x746163696c707061 && *(long *)(pcVar9 + 8) == 0x637072672f6e6f69) {
      return (code *)0x0;
    }
  }
  else if (uVar12 < 0x11) {
    if (uVar12 == 0) {
      return (code *)((long)&MACH_HEADER.magic + 1);
    }
  }
  else {
    if ((*(long *)pcVar9 == 0x746163696c707061 && *(long *)(pcVar9 + 8) == 0x637072672f6e6f69) &&
        pcVar9[0x10] == (code)0x3b) {
      return (code *)0x0;
    }
    if ((*(long *)pcVar9 == 0x746163696c707061 && *(long *)(pcVar9 + 8) == 0x637072672f6e6f69) &&
        pcVar9[0x10] == (code)0x2b) {
      return (code *)0x0;
    }
  }
  (*pcVar5)(pcVar17,"invalid value",0xd);
  return (code *)((long)&MACH_HEADER.magic + 2);
}



/* Entry: 00352a68; end: 00352aaf;  */

code * FUN_00352a68(long *param_1,code *param_2,code *param_3,code *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  undefined1 uVar7;
  long *extraout_x8;
  code *pcVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  code *unaff_x19;
  code *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  code *unaff_x23;
  long *plVar12;
  undefined8 unaff_x24;
  long lVar13;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long *plVar14;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar15;
  undefined1 auStack_70 [8];
  code *pcStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  long lStack_48;
  
  if ((param_3 == (code *)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)param_2 == 0x2d74736f632d626c && *(long *)(param_2 + 3) == 0x6e69622d74736f63)) {
    unaff_x29 = &stack0xfffffffffffffff0;
    lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
    lVar13 = *(long *)param_4;
    unaff_x19 = param_4;
    pcVar4 = param_4;
    if ((*(byte *)(lVar13 + 2) >> 6 & 1) == 0) {
      uVar7 = 0;
      *(undefined1 *)param_1 = 0;
    }
    else {
      puVar10 = *(undefined8 **)(param_4 + 8);
      if (*(char *)((long)puVar10 + 0x17) < '\0') {
        *(undefined1 *)*puVar10 = 0;
        puVar10[1] = 0;
      }
      else {
        *(undefined1 *)puVar10 = 0;
        *(undefined1 *)((long)puVar10 + 0x17) = 0;
      }
      uVar11 = *(ulong *)(lVar13 + 0x60);
      unaff_x21 = (undefined8 *)(lVar13 + 0x68);
      if ((uVar11 & 1) != 0) {
        unaff_x21 = (undefined8 *)*unaff_x21;
      }
      if (1 < uVar11) {
        unaff_x22 = unaff_x21 + (uVar11 >> 1) * 4;
        unaff_x23 = (code *)((long)&uStack_60 + 1);
        do {
          lVar13 = *(long *)(param_4 + 8);
          if (*(char *)(lVar13 + 0x17) < '\0') {
            if (*(long *)(lVar13 + 8) != 0) goto LAB_00352b64;
          }
          else if (*(char *)(lVar13 + 0x17) != '\0') {
LAB_00352b64:
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                      (lVar13,0x2c);
          }
          FUN_003fee84(&pcStack_68,unaff_x21);
          uVar11 = uStack_60 & 0xff;
          param_3 = unaff_x23;
          if (pcStack_68 != (code *)0x0) {
            uVar11 = uStack_60;
            param_3 = pcStack_58;
          }
          pcVar4 = param_3 + uVar11;
          FUN_00352c98(*(long *)(param_4 + 8));
          unaff_x19 = pcStack_68;
          if ((code *)((long)&MACH_HEADER.magic + 1) < pcStack_68) {
            do {
              lVar13 = *(long *)pcStack_68;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pcStack_68,0x10);
              if (bVar3) {
                *(long *)pcStack_68 = lVar13 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar13 + -1 == 0) {
              (**(code **)(pcStack_68 + 8))();
            }
          }
          unaff_x21 = unaff_x21 + 4;
        } while (unaff_x21 != unaff_x22);
      }
      plVar12 = *(long **)(param_4 + 8);
      uVar11 = plVar12[1];
      plVar1 = (long *)*plVar12;
      if (-1 < (char)*(byte *)((long)plVar12 + 0x17)) {
        uVar11 = (ulong)*(byte *)((long)plVar12 + 0x17);
        plVar1 = plVar12;
      }
      *param_1 = (long)plVar1;
      param_1[1] = uVar11;
      uVar7 = 1;
      unaff_x20 = param_4;
    }
    *(undefined1 *)(param_1 + 2) = uVar7;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    param_4 = pcVar4;
    if ((int)param_3 != 0) {
      func_0x0040cf10();
      FUN_0034b418(&pcStack_68);
      param_4 = pcVar4;
    }
    unaff_x30 = FUN_00352c58;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)auStack_70;
    param_1 = extraout_x8;
  }
  if ((param_3 == (code *)&MACH_HEADER.cpusubtype) && (*(long *)param_2 == 0x6e656b6f742d626c)) {
    lVar13 = *(long *)param_4;
    if (*(char *)(lVar13 + 2) < '\0') {
      if (*(long *)(lVar13 + 0x40) == 0) {
        lVar15 = lVar13 + 0x49;
        uVar11 = (ulong)*(byte *)(lVar13 + 0x48);
      }
      else {
        uVar11 = *(ulong *)(lVar13 + 0x48);
        lVar15 = *(long *)(lVar13 + 0x50);
      }
      *param_1 = lVar15;
      param_1[1] = uVar11;
      uVar7 = 1;
    }
    else {
      uVar7 = 0;
      *(undefined1 *)param_1 = 0;
    }
    *(undefined1 *)(param_1 + 2) = uVar7;
    return param_4;
  }
  lVar13 = *(long *)param_4;
  plVar1 = *(long **)(param_4 + 8);
  pcVar4 = (code *)(lVar13 + 0x1f0);
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(code **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(code **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(code **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x70) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  plVar12 = *(long **)(lVar13 + 0x1f8);
  pcVar5 = param_2;
  pcVar6 = param_3;
  if ((plVar12 != (long *)0x0) && (plVar12[1] != 0)) {
    lVar13 = 0;
    bVar3 = false;
    plVar14 = (long *)*param_1;
    uVar11 = param_1[1];
    do {
      if (plVar12[lVar13 * 8 + 2] == 0) {
        pcVar4 = (code *)((long)plVar12 + lVar13 * 0x40 + 0x19);
        pcVar8 = (code *)(ulong)*(byte *)(plVar12 + lVar13 * 8 + 3);
      }
      else {
        pcVar8 = (code *)plVar12[lVar13 * 8 + 3];
        pcVar4 = (code *)plVar12[lVar13 * 8 + 4];
      }
      if ((pcVar8 == param_3) &&
         (pcVar5 = param_2, pcVar6 = param_3, _memcmp(pcVar4,param_2), (int)pcVar4 == 0)) {
        if (bVar3) {
          *(long **)((long)register0x00000008 + -0xa0) = plVar14;
          *(ulong *)((long)register0x00000008 + -0x98) = uVar11;
          *(char **)((long)register0x00000008 + -0xd0) = ",";
          *(undefined8 *)((long)register0x00000008 + -200) = 1;
          if (plVar12[lVar13 * 8 + 6] == 0) {
            lVar15 = (long)plVar12 + lVar13 * 0x40 + 0x39;
            uVar11 = (ulong)*(byte *)(plVar12 + lVar13 * 8 + 7);
          }
          else {
            uVar11 = plVar12[lVar13 * 8 + 7];
            lVar15 = plVar12[lVar13 * 8 + 8];
          }
          *(long *)((long)register0x00000008 + -0x100) = lVar15;
          *(ulong *)((long)register0x00000008 + -0xf8) = uVar11;
          pcVar4 = (code *)((long)register0x00000008 + -0xa0);
          pcVar5 = (code *)((long)register0x00000008 + -0xd0);
          pcVar6 = (code *)((long)register0x00000008 + -0x100);
          FUN_00575ddc((undefined1 *)((long)register0x00000008 + -0x118),pcVar4,pcVar5);
          if (*(char *)((long)plVar1 + 0x17) < '\0') {
            pcVar4 = (code *)*plVar1;
            __ZdlPv();
          }
          uVar9 = *(ulong *)((long)register0x00000008 + -0x108);
          plVar1[2] = uVar9;
          lVar15 = *(long *)((long)register0x00000008 + -0x118);
          plVar1[1] = *(long *)((long)register0x00000008 + -0x110);
          *plVar1 = lVar15;
          uVar11 = plVar1[1];
          plVar14 = (long *)*plVar1;
          if (-1 < (long)uVar9) {
            uVar11 = uVar9 >> 0x38;
            plVar14 = plVar1;
          }
          *param_1 = (long)plVar14;
          param_1[1] = uVar11;
        }
        else {
          if (plVar12[lVar13 * 8 + 6] == 0) {
            plVar14 = (long *)((long)plVar12 + lVar13 * 0x40 + 0x39);
            uVar11 = (ulong)*(byte *)(plVar12 + lVar13 * 8 + 7);
          }
          else {
            uVar11 = plVar12[lVar13 * 8 + 7];
            plVar14 = (long *)plVar12[lVar13 * 8 + 8];
          }
          *param_1 = (long)plVar14;
          param_1[1] = uVar11;
          bVar3 = true;
          *(undefined1 *)(param_1 + 2) = 1;
        }
      }
      lVar13 = lVar13 + 1;
      do {
        if (lVar13 != plVar12[1]) goto LAB_003fe6e4;
        lVar13 = 0;
        plVar12 = (long *)*plVar12;
      } while (plVar12 != (long *)0x0);
      lVar13 = 0;
LAB_003fe6e4:
    } while ((plVar12 != (long *)0x0) || (lVar13 != 0));
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x70)) {
    return pcVar4;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined1 **)((long)register0x00000008 + -0x130) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x128) = FUN_003fe72c;
  if (*(long *)pcVar4 == 0) {
    pcVar8 = pcVar4 + 9;
    uVar11 = (ulong)(byte)pcVar4[8];
  }
  else {
    uVar11 = *(ulong *)(pcVar4 + 8);
    pcVar8 = *(code **)(pcVar4 + 0x10);
  }
  if (uVar11 == 0x10) {
    if (*(long *)pcVar8 == 0x746163696c707061 && *(long *)(pcVar8 + 8) == 0x637072672f6e6f69) {
      return (code *)0x0;
    }
  }
  else if (uVar11 < 0x11) {
    if (uVar11 == 0) {
      return (code *)((long)&MACH_HEADER.magic + 1);
    }
  }
  else {
    if ((*(long *)pcVar8 == 0x746163696c707061 && *(long *)(pcVar8 + 8) == 0x637072672f6e6f69) &&
        pcVar8[0x10] == (code)0x3b) {
      return (code *)0x0;
    }
    if ((*(long *)pcVar8 == 0x746163696c707061 && *(long *)(pcVar8 + 8) == 0x637072672f6e6f69) &&
        pcVar8[0x10] == (code)0x2b) {
      return (code *)0x0;
    }
  }
  (*pcVar6)(pcVar5,"invalid value",0xd);
  return (code *)((long)&MACH_HEADER.magic + 2);
}



/* Entry: 00352ab0; end: 00352c57;  */

long ** FUN_00352ab0(undefined8 *param_1,long **param_2,code *param_3,long **param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long **pplVar4;
  long **pplVar5;
  long **pplVar6;
  code *pcVar7;
  undefined1 uVar8;
  long *plVar9;
  long *extraout_x8;
  code *pcVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long lStack_188;
  long lStack_180;
  ulong uStack_178;
  long lStack_170;
  ulong uStack_168;
  long *plStack_140;
  undefined8 uStack_138;
  long *plStack_110;
  ulong uStack_108;
  long lStack_e0;
  long **pplStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar9 = *param_2;
  pplVar4 = param_2;
  if ((*(byte *)((long)plVar9 + 2) >> 6 & 1) == 0) {
    uVar8 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    plVar11 = param_2[1];
    if (*(char *)((long)plVar11 + 0x17) < '\0') {
      *(undefined1 *)*plVar11 = 0;
      plVar11[1] = 0;
    }
    else {
      *(undefined1 *)plVar11 = 0;
      *(undefined1 *)((long)plVar11 + 0x17) = 0;
    }
    uVar13 = plVar9[0xc];
    plVar9 = plVar9 + 0xd;
    if ((uVar13 & 1) != 0) {
      plVar9 = (long *)*plVar9;
    }
    if (1 < uVar13) {
      plVar11 = plVar9 + (uVar13 >> 1) * 4;
      do {
        plVar3 = param_2[1];
        if (*(char *)((long)plVar3 + 0x17) < '\0') {
          if (plVar3[1] != 0) goto LAB_00352b64;
        }
        else if (*(char *)((long)plVar3 + 0x17) != '\0') {
LAB_00352b64:
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(plVar3,0x2c);
        }
        FUN_003fee84(&pplStack_68,plVar9);
        uVar13 = uStack_60 & 0xff;
        param_3 = (code *)((long)&uStack_60 + 1);
        if (pplStack_68 != (long **)0x0) {
          uVar13 = uStack_60;
          param_3 = pcStack_58;
        }
        param_4 = (long **)(param_3 + uVar13);
        FUN_00352c98(param_2[1]);
        pplVar4 = pplStack_68;
        if ((long **)((long)&MACH_HEADER.magic + 1) < pplStack_68) {
          do {
            plVar3 = *pplStack_68;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(pplStack_68,0x10);
            if (bVar2) {
              *pplStack_68 = (long *)((long)plVar3 + -1);
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if ((long *)((long)plVar3 + -1) == (long *)0x0) {
            (*(code *)pplStack_68[1])();
          }
        }
        plVar9 = plVar9 + 4;
      } while (plVar9 != plVar11);
    }
    plVar11 = param_2[1];
    uVar13 = plVar11[1];
    plVar9 = (long *)*plVar11;
    if (-1 < (char)*(byte *)((long)plVar11 + 0x17)) {
      uVar13 = (ulong)*(byte *)((long)plVar11 + 0x17);
      plVar9 = plVar11;
    }
    *param_1 = plVar9;
    param_1[1] = uVar13;
    uVar8 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar8;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return pplVar4;
  }
  ___stack_chk_fail();
  if ((int)param_3 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&pplStack_68);
  }
  __Unwind_Resume();
  if ((param_3 == (code *)&MACH_HEADER.cpusubtype) && (*pplVar4 == (long *)0x6e656b6f742d626c)) {
    plVar9 = *param_4;
    if (*(char *)((long)plVar9 + 2) < '\0') {
      if (plVar9[8] == 0) {
        lVar12 = (long)plVar9 + 0x49;
        uVar13 = (ulong)*(byte *)(plVar9 + 9);
      }
      else {
        uVar13 = plVar9[9];
        lVar12 = plVar9[10];
      }
      *extraout_x8 = lVar12;
      extraout_x8[1] = uVar13;
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
      *(undefined1 *)extraout_x8 = 0;
    }
    *(undefined1 *)(extraout_x8 + 2) = uVar8;
    return param_4;
  }
  plVar9 = *param_4;
  plVar11 = param_4[1];
  pplVar5 = (long **)(plVar9 + 0x3e);
  lStack_e0 = *(long *)PTR____stack_chk_guard_00999f88;
  *(undefined1 *)extraout_x8 = 0;
  *(undefined1 *)(extraout_x8 + 2) = 0;
  plVar9 = (long *)plVar9[0x3f];
  pplVar6 = pplVar4;
  pcVar7 = param_3;
  if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
    lVar12 = 0;
    bVar2 = false;
    plVar3 = (long *)*extraout_x8;
    uVar13 = extraout_x8[1];
    do {
      if (plVar9[lVar12 * 8 + 2] == 0) {
        pplVar5 = (long **)((long)plVar9 + lVar12 * 0x40 + 0x19);
        pcVar10 = (code *)(ulong)*(byte *)(plVar9 + lVar12 * 8 + 3);
      }
      else {
        pcVar10 = (code *)plVar9[lVar12 * 8 + 3];
        pplVar5 = (long **)plVar9[lVar12 * 8 + 4];
      }
      if ((pcVar10 == param_3) &&
         (pplVar6 = pplVar4, pcVar7 = param_3, _memcmp(pplVar5,pplVar4), (int)pplVar5 == 0)) {
        if (bVar2) {
          plStack_140 = (long *)0x8b897a;
          uStack_138 = 1;
          if (plVar9[lVar12 * 8 + 6] == 0) {
            lStack_170 = (long)plVar9 + lVar12 * 0x40 + 0x39;
            uStack_168 = (ulong)*(byte *)(plVar9 + lVar12 * 8 + 7);
          }
          else {
            uStack_168 = plVar9[lVar12 * 8 + 7];
            lStack_170 = plVar9[lVar12 * 8 + 8];
          }
          pplVar5 = &plStack_110;
          pplVar6 = &plStack_140;
          pcVar7 = (code *)&lStack_170;
          plStack_110 = plVar3;
          uStack_108 = uVar13;
          FUN_00575ddc(&lStack_188,pplVar5,pplVar6);
          if (*(char *)((long)plVar11 + 0x17) < '\0') {
            pplVar5 = (long **)*plVar11;
            __ZdlPv();
          }
          plVar11[2] = uStack_178;
          plVar11[1] = lStack_180;
          *plVar11 = lStack_188;
          uVar13 = plVar11[1];
          plVar3 = (long *)*plVar11;
          if (-1 < (long)uStack_178) {
            uVar13 = uStack_178 >> 0x38;
            plVar3 = plVar11;
          }
          *extraout_x8 = (long)plVar3;
          extraout_x8[1] = uVar13;
        }
        else {
          if (plVar9[lVar12 * 8 + 6] == 0) {
            plVar3 = (long *)((long)plVar9 + lVar12 * 0x40 + 0x39);
            uVar13 = (ulong)*(byte *)(plVar9 + lVar12 * 8 + 7);
          }
          else {
            uVar13 = plVar9[lVar12 * 8 + 7];
            plVar3 = (long *)plVar9[lVar12 * 8 + 8];
          }
          *extraout_x8 = (long)plVar3;
          extraout_x8[1] = uVar13;
          bVar2 = true;
          *(undefined1 *)(extraout_x8 + 2) = 1;
        }
      }
      lVar12 = lVar12 + 1;
      do {
        if (lVar12 != plVar9[1]) goto LAB_003fe6e4;
        lVar12 = 0;
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
      lVar12 = 0;
LAB_003fe6e4:
    } while ((plVar9 != (long *)0x0) || (lVar12 != 0));
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_e0) {
    return pplVar5;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  if (*pplVar5 == (long *)0x0) {
    plVar9 = (long *)((long)pplVar5 + 9);
    plVar11 = (long *)(ulong)*(byte *)(pplVar5 + 1);
  }
  else {
    plVar11 = pplVar5[1];
    plVar9 = pplVar5[2];
  }
  if (plVar11 == (long *)0x10) {
    if (*plVar9 == 0x746163696c707061 && plVar9[1] == 0x637072672f6e6f69) {
      return (long **)0x0;
    }
  }
  else if (plVar11 < (long *)0x11) {
    if (plVar11 == (long *)0x0) {
      return (long **)((long)&MACH_HEADER.magic + 1);
    }
  }
  else {
    if ((*plVar9 == 0x746163696c707061 && plVar9[1] == 0x637072672f6e6f69) && (char)plVar9[2] == ';'
       ) {
      return (long **)0x0;
    }
    if ((*plVar9 == 0x746163696c707061 && plVar9[1] == 0x637072672f6e6f69) && (char)plVar9[2] == '+'
       ) {
      return (long **)0x0;
    }
  }
  (*pcVar7)(pplVar6,"invalid value",0xd);
  return (long **)((long)&MACH_HEADER.magic + 2);
}



/* Entry: 00352c58; end: 00352c97;  */

long ** FUN_00352c58(long *param_1,char **param_2,code *param_3,long **param_4)

{
  bool bVar1;
  long **pplVar2;
  char **ppcVar3;
  code *pcVar4;
  code *pcVar5;
  undefined1 uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lStack_118;
  long lStack_110;
  ulong uStack_108;
  long lStack_100;
  ulong uStack_f8;
  char *pcStack_d0;
  undefined8 uStack_c8;
  long *plStack_a0;
  ulong uStack_98;
  long lStack_70;
  
  if ((param_3 == (code *)&MACH_HEADER.cpusubtype) && (*param_2 == (char *)0x6e656b6f742d626c)) {
    plVar8 = *param_4;
    if (*(char *)((long)plVar8 + 2) < '\0') {
      if (plVar8[8] == 0) {
        lVar9 = (long)plVar8 + 0x49;
        uVar10 = (ulong)*(byte *)(plVar8 + 9);
      }
      else {
        uVar10 = plVar8[9];
        lVar9 = plVar8[10];
      }
      *param_1 = lVar9;
      param_1[1] = uVar10;
      uVar6 = 1;
    }
    else {
      uVar6 = 0;
      *(undefined1 *)param_1 = 0;
    }
    *(undefined1 *)(param_1 + 2) = uVar6;
    return param_4;
  }
  plVar8 = *param_4;
  plVar7 = param_4[1];
  pplVar2 = (long **)(plVar8 + 0x3e);
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  plVar8 = (long *)plVar8[0x3f];
  ppcVar3 = param_2;
  pcVar4 = param_3;
  if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
    lVar9 = 0;
    bVar1 = false;
    plVar11 = (long *)*param_1;
    uVar10 = param_1[1];
    do {
      if (plVar8[lVar9 * 8 + 2] == 0) {
        pplVar2 = (long **)((long)plVar8 + lVar9 * 0x40 + 0x19);
        pcVar5 = (code *)(ulong)*(byte *)(plVar8 + lVar9 * 8 + 3);
      }
      else {
        pcVar5 = (code *)plVar8[lVar9 * 8 + 3];
        pplVar2 = (long **)plVar8[lVar9 * 8 + 4];
      }
      if ((pcVar5 == param_3) &&
         (ppcVar3 = param_2, pcVar4 = param_3, _memcmp(pplVar2,param_2), (int)pplVar2 == 0)) {
        if (bVar1) {
          pcStack_d0 = ",";
          uStack_c8 = 1;
          if (plVar8[lVar9 * 8 + 6] == 0) {
            lStack_100 = (long)plVar8 + lVar9 * 0x40 + 0x39;
            uStack_f8 = (ulong)*(byte *)(plVar8 + lVar9 * 8 + 7);
          }
          else {
            uStack_f8 = plVar8[lVar9 * 8 + 7];
            lStack_100 = plVar8[lVar9 * 8 + 8];
          }
          pplVar2 = &plStack_a0;
          ppcVar3 = &pcStack_d0;
          pcVar4 = (code *)&lStack_100;
          plStack_a0 = plVar11;
          uStack_98 = uVar10;
          FUN_00575ddc(&lStack_118,pplVar2,ppcVar3);
          if (*(char *)((long)plVar7 + 0x17) < '\0') {
            pplVar2 = (long **)*plVar7;
            __ZdlPv();
          }
          plVar7[2] = uStack_108;
          plVar7[1] = lStack_110;
          *plVar7 = lStack_118;
          uVar10 = plVar7[1];
          plVar11 = (long *)*plVar7;
          if (-1 < (long)uStack_108) {
            uVar10 = uStack_108 >> 0x38;
            plVar11 = plVar7;
          }
          *param_1 = (long)plVar11;
          param_1[1] = uVar10;
        }
        else {
          if (plVar8[lVar9 * 8 + 6] == 0) {
            plVar11 = (long *)((long)plVar8 + lVar9 * 0x40 + 0x39);
            uVar10 = (ulong)*(byte *)(plVar8 + lVar9 * 8 + 7);
          }
          else {
            uVar10 = plVar8[lVar9 * 8 + 7];
            plVar11 = (long *)plVar8[lVar9 * 8 + 8];
          }
          *param_1 = (long)plVar11;
          param_1[1] = uVar10;
          bVar1 = true;
          *(undefined1 *)(param_1 + 2) = 1;
        }
      }
      lVar9 = lVar9 + 1;
      do {
        if (lVar9 != plVar8[1]) goto LAB_003fe6e4;
        lVar9 = 0;
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
      lVar9 = 0;
LAB_003fe6e4:
    } while ((plVar8 != (long *)0x0) || (lVar9 != 0));
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
    return pplVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  if (*pplVar2 == (long *)0x0) {
    plVar8 = (long *)((long)pplVar2 + 9);
    plVar7 = (long *)(ulong)*(byte *)(pplVar2 + 1);
  }
  else {
    plVar7 = pplVar2[1];
    plVar8 = pplVar2[2];
  }
  if (plVar7 == (long *)0x10) {
    if (*plVar8 == 0x746163696c707061 && plVar8[1] == 0x637072672f6e6f69) {
      return (long **)0x0;
    }
  }
  else if (plVar7 < (long *)0x11) {
    if (plVar7 == (long *)0x0) {
      return (long **)((long)&MACH_HEADER.magic + 1);
    }
  }
  else {
    if ((*plVar8 == 0x746163696c707061 && plVar8[1] == 0x637072672f6e6f69) && (char)plVar8[2] == ';'
       ) {
      return (long **)0x0;
    }
    if ((*plVar8 == 0x746163696c707061 && plVar8[1] == 0x637072672f6e6f69) && (char)plVar8[2] == '+'
       ) {
      return (long **)0x0;
    }
  }
  (*pcVar4)(ppcVar3,"invalid value",0xd);
  return (long **)((long)&MACH_HEADER.magic + 2);
}



/* Entry: 00352c98; end: 00352e0b;  */

undefined8 * FUN_00352c98(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined8 ****ppppuVar3;
  undefined1 *puVar4;
  long lVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 ***pppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  bVar1 = *(byte *)((long)param_1 + 0x17);
  uVar6 = (uint)(char)bVar1;
  uVar2 = (long)param_3 - (long)param_2;
  if ((char)bVar1 < '\0') {
    if (uVar2 == 0) {
      return param_1;
    }
    uVar8 = param_1[1];
    lVar5 = (param_1[2] & 0x7fffffffffffffff) - 1;
    puVar7 = (undefined8 *)*param_1;
    uVar6 = (uint)(byte)((ulong)param_1[2] >> 0x38);
  }
  else {
    if (uVar2 == 0) {
      return param_1;
    }
    uVar8 = (ulong)bVar1;
    lVar5 = 0x16;
    puVar7 = param_1;
  }
  if ((param_2 < puVar7) || ((undefined8 *)((long)puVar7 + uVar8 + 1) <= param_2)) {
    if (lVar5 - uVar8 < uVar2) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                (param_1,lVar5,(uVar8 - lVar5) + uVar2,uVar8,uVar8,0,0);
      param_1[1] = uVar8;
      uVar6 = (uint)*(byte *)((long)param_1 + 0x17);
    }
    puVar7 = param_1;
    if ((uVar6 >> 7 & 1) != 0) {
      puVar7 = (undefined8 *)*param_1;
    }
    puVar4 = (undefined1 *)((long)puVar7 + uVar8);
    for (; param_3 != param_2; param_2 = (undefined8 *)((long)param_2 + 1)) {
      *puVar4 = *(undefined1 *)param_2;
      puVar4 = puVar4 + 1;
    }
    *puVar4 = 0;
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      param_1[1] = uVar2 + uVar8;
    }
    else {
      *(byte *)((long)param_1 + 0x17) = (byte)(uVar2 + uVar8) & 0x7f;
    }
  }
  else {
    FUN_00352e0c(&pppuStack_58,param_2,param_3,uVar2);
    ppppuVar3 = (undefined8 ****)pppuStack_58;
    if (-1 < (char)bStack_41) {
      uStack_50 = (ulong)bStack_41;
      ppppuVar3 = &pppuStack_58;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,ppppuVar3,uStack_50);
    if ((char)bStack_41 < '\0') {
      __ZdlPv(pppuStack_58);
    }
  }
  return param_1;
}



/* Entry: 00352e0c; end: 00352eaf;  */

void FUN_00352e0c(long *param_1,undefined1 *param_2,undefined1 *param_3,ulong param_4)

{
  long *plVar1;
  long *extraout_x8;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  if (param_4 < 0x7ffffffffffffff8) {
    if (param_4 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)param_4;
      plVar1 = param_1;
    }
    else {
      uVar5 = (param_4 & 0xfffffffffffffff8) + 8;
      if ((param_4 | 7) != 0x17) {
        uVar5 = param_4 | 7;
      }
      plVar1 = (long *)(uVar5 + 1);
      __Znwm();
      param_1[1] = param_4;
      param_1[2] = uVar5 + 1 | 0x8000000000000000;
      *param_1 = (long)plVar1;
    }
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *(undefined1 *)plVar1 = *param_2;
      plVar1 = (long *)((long)plVar1 + 1);
    }
    *(undefined1 *)plVar1 = 0;
    return;
  }
  func_0x0033b318();
  lVar4 = *param_1;
  if (*(char *)(lVar4 + 2) < '\0') {
    if (*(long *)(lVar4 + 0x40) == 0) {
      lVar3 = lVar4 + 0x49;
      uVar5 = (ulong)*(byte *)(lVar4 + 0x48);
    }
    else {
      uVar5 = *(ulong *)(lVar4 + 0x48);
      lVar3 = *(long *)(lVar4 + 0x50);
    }
    *extraout_x8 = lVar3;
    extraout_x8[1] = uVar5;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    *(undefined1 *)extraout_x8 = 0;
  }
  *(undefined1 *)(extraout_x8 + 2) = uVar2;
  return;
}



/* Entry: 00352eb0; end: 00352eff;  */

void FUN_00352eb0(long *param_1,long *param_2)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *param_2;
  if (*(char *)(lVar3 + 2) < '\0') {
    if (*(long *)(lVar3 + 0x40) == 0) {
      lVar2 = lVar3 + 0x49;
      uVar4 = (ulong)*(byte *)(lVar3 + 0x48);
    }
    else {
      uVar4 = *(ulong *)(lVar3 + 0x48);
      lVar2 = *(long *)(lVar3 + 0x50);
    }
    *param_1 = lVar2;
    param_1[1] = uVar4;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
    *(undefined1 *)param_1 = 0;
  }
  *(undefined1 *)(param_1 + 2) = uVar1;
  return;
}



/* Entry: 00352f00; end: 00352f7f;  */

void FUN_00352f00(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  lVar3 = *(long *)(param_1 + 8);
  if (((*(long *)(lVar3 + 0xe0) == 0) && (lVar2 = *(long *)(lVar3 + 0x188), lVar2 != 0)) &&
     ((*(byte *)(lVar2 + 2) >> 1 & 1) != 0)) {
    uStack_28 = *(undefined8 *)(lVar3 + 0x40);
    ppuStack_30 = &PTR_FUN_009dbd70;
    if (*(long *)(lVar2 + 0xf0) == 0) {
      lVar3 = lVar2 + 0xf9;
      uVar1 = (ulong)*(byte *)(lVar2 + 0xf8);
    }
    else {
      uVar1 = *(ulong *)(lVar2 + 0xf8);
      lVar3 = *(long *)(lVar2 + 0x100);
    }
    FUN_00340364(lVar3,uVar1,&ppuStack_30);
    *(long *)(*(long *)(param_1 + 8) + 0xe0) = lVar3;
  }
  return;
}



/* Entry: 00352f80; end: 00352fc7;  */

void FUN_00352f80(void)

{
  return;
}



/* Entry: 00352fc8; end: 0035302b;  */

void FUN_00352fc8(ulong *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  do {
    uVar4 = *param_1;
    uVar1 = uVar4 + 0x40;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = uVar1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (param_1[2] < uVar1) {
    func_0x003d6048(param_1,0x40);
  }
  else {
    param_1 = (ulong *)((long)param_1 + uVar4 + 0x30);
  }
  auVar5 = NEON_fmov(0xbff0000000000000,8);
  param_1[1] = auVar5._8_8_;
  *param_1 = auVar5._0_8_;
  param_1[3] = 0;
  param_1[2] = (ulong)(param_1 + 3);
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[5] = (ulong)(param_1 + 6);
  return;
}



/* Entry: 0035302c; end: 003530ab;  */

long * FUN_0035302c(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  plVar3 = *(long **)(*param_1 + 0x48);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = *plVar3 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  param_1[2] = (long)FUN_003530ac;
  param_1[3] = (long)param_1;
  param_1[4] = 0;
  FUN_003bba54(*(undefined8 *)(*param_1 + 0x50),param_1 + 1);
  return param_1;
}



/* Entry: 003530ac; end: 00353203;  */

void FUN_003530ac(long *param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  ulong uVar8;
  ulong uStack_38;
  
  lVar7 = *param_1;
  lVar5 = *(long *)(lVar7 + 0x10) + 0xe0;
  func_0x00339d8c(lVar5);
  if ((*(long **)(lVar7 + 0xd0) == param_1) && (*param_2 != 0)) {
    (**(code **)(**(long **)(lVar7 + 0x70) + 0x18))();
    if (*(char *)(lVar7 + 200) != '\0') {
      FUN_00346820(*(undefined8 *)(lVar7 + 0x10),lVar7 + 0xb8,*(undefined8 *)(lVar7 + 0x60));
      *(undefined1 *)(lVar7 + 200) = 0;
      *(undefined8 *)(lVar7 + 0xd0) = 0;
    }
    uVar8 = *param_2;
    if ((uVar8 & 1) != 0) {
      piVar6 = (int *)(uVar8 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = *piVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_38 = uVar8;
    FUN_00347fc4(lVar7,&uStack_38,FUN_00353204);
    if ((uVar8 & 1) != 0) {
      FUN_0055293c(uVar8);
    }
  }
  func_0x00339da8(lVar5);
  plVar4 = *(long **)(lVar7 + 0x48);
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
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(param_1);
  return;
}



/* Entry: 00353204; end: 00353253;  */

bool FUN_00353204(ulong *param_1)

{
  return 1 < *param_1;
}



/* Entry: 00353254; end: 00353303;  */

ulong * FUN_00353254(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  
  uVar2 = param_2;
  _strlen();
  if (0x7ffffffffffffff7 < uVar2) {
    func_0x0033b318();
    if (*param_1 != 0) {
      func_0x003711f8();
    }
    return param_1;
  }
  if (uVar2 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar2;
    puVar3 = param_1;
    if (uVar2 == 0) goto LAB_003532e0;
  }
  else {
    uVar1 = (uVar2 & 0xfffffffffffffff8) + 8;
    if ((uVar2 | 7) != 0x17) {
      uVar1 = uVar2 | 7;
    }
    puVar3 = (ulong *)(uVar1 + 1);
    __Znwm();
    param_1[1] = uVar2;
    param_1[2] = uVar1 + 1 | 0x8000000000000000;
    *param_1 = (ulong)puVar3;
  }
  _memmove(puVar3,param_2,uVar2);
LAB_003532e0:
  *(undefined1 *)((long)puVar3 + uVar2) = 0;
  return param_1;
}



/* Entry: 00353304; end: 00353333;  */

long * FUN_00353304(long *param_1)

{
  if (*param_1 != 0) {
    func_0x003711f8();
  }
  return param_1;
}



/* Entry: 00353334; end: 003533ef;  */

undefined1  [16] FUN_00353334(long param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  qword *pqVar1;
  undefined8 uVar2;
  qword *pqVar3;
  qword *pqVar4;
  undefined1 auVar5 [16];
  
  pqVar3 = (qword *)(param_1 + 8);
  pqVar4 = pqVar3;
  if ((qword *)*pqVar3 != (qword *)0x0) {
    pqVar1 = (qword *)*pqVar3;
    do {
      while (pqVar3 = pqVar1, pqVar3[4] <= *param_2) {
        if (*param_2 <= pqVar3[4]) {
          uVar2 = 0;
          goto LAB_003533d8;
        }
        pqVar1 = (qword *)pqVar3[1];
        if ((qword *)pqVar3[1] == (qword *)0x0) {
          pqVar4 = pqVar3 + 1;
          goto LAB_0035339c;
        }
      }
      pqVar1 = (qword *)*pqVar3;
      pqVar4 = pqVar3;
    } while ((qword *)*pqVar3 != (qword *)0x0);
  }
LAB_0035339c:
  pqVar1 = (qword *)(segment_command_00000020.segname + 8);
  __Znwm();
  pqVar1[4] = *(qword *)*param_4;
  pqVar1[5] = 0;
  FUN_003533f0(param_1,pqVar3,pqVar4,pqVar1);
  uVar2 = 1;
  pqVar3 = pqVar1;
LAB_003533d8:
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = pqVar3;
  return auVar5;
}



/* Entry: 003533f0; end: 00353443;  */

void FUN_003533f0(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_00340874(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 00353444; end: 0035344b;  */

void FUN_00353444(void)

{
  return;
}



/* Entry: 0035344c; end: 0035347f;  */

void FUN_0035344c(long param_1)

{
  dword *pdVar1;
  undefined8 uVar2;
  
  pdVar1 = &MACH_HEADER.ncmds;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined ***)pdVar1 = &PTR_FUN_009dbe18;
  *(undefined8 *)(pdVar1 + 2) = uVar2;
  return;
}



/* Entry: 00353480; end: 003534a3;  */

void FUN_00353480(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_009dbe18;
  param_2[1] = uVar1;
  return;
}



/* Entry: 003534a4; end: 003534df;  */

long FUN_003534a4(long param_1,undefined8 param_2)

{
  FUN_0033ff44(param_2,&PTR_DAT_009dbe78);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 003534e0; end: 003534eb;  */

undefined ** FUN_003534e0(void)

{
  return &PTR_DAT_009dbe78;
}



/* Entry: 003534ec; end: 003535bb;  */

undefined8 FUN_003534ec(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  func_0x0035354c();
  plVar4 = *(long **)(param_2 + 0x28);
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  __ZdlPv(param_2);
  return param_1;
}



/* Entry: 003535bc; end: 00353947;  */

void FUN_003535bc(long *param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  
  plVar4 = (long *)*param_2;
  plVar6 = param_2;
  if (plVar4 == (long *)0x0) {
LAB_003535dc:
    plVar4 = (long *)plVar6[1];
    if (plVar4 == (long *)0x0) {
      bVar2 = true;
      goto LAB_003535fc;
    }
  }
  else {
    plVar3 = (long *)param_2[1];
    if ((long *)param_2[1] != (long *)0x0) {
      do {
        plVar6 = plVar3;
        plVar3 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
      goto LAB_003535dc;
    }
  }
  bVar2 = false;
  plVar4[2] = plVar6[2];
LAB_003535fc:
  puVar8 = (undefined8 *)plVar6[2];
  plVar3 = (long *)*puVar8;
  if (plVar3 == plVar6) {
    *puVar8 = plVar4;
    if (plVar6 == param_1) {
      plVar3 = (long *)0x0;
      param_1 = plVar4;
    }
    else {
      plVar3 = (long *)puVar8[1];
    }
  }
  else {
    puVar8[1] = plVar4;
  }
  lVar9 = plVar6[3];
  plVar7 = param_1;
  if (plVar6 != param_2) {
    lVar10 = param_2[2];
    plVar6[2] = lVar10;
    *(long **)(lVar10 + (ulong)(*(long **)param_2[2] != param_2) * 8) = plVar6;
    lVar10 = *param_2;
    lVar1 = param_2[1];
    *(long **)(lVar10 + 0x10) = plVar6;
    *plVar6 = lVar10;
    plVar6[1] = lVar1;
    if (lVar1 != 0) {
      *(long **)(lVar1 + 0x10) = plVar6;
    }
    *(char *)(plVar6 + 3) = (char)param_2[3];
    plVar7 = plVar6;
    if (param_1 != param_2) {
      plVar7 = param_1;
    }
  }
  if (((char)lVar9 != '\0') && (plVar7 != (long *)0x0)) {
    if (bVar2) {
      while( true ) {
        plVar4 = (long *)plVar3[2];
        plVar6 = plVar7;
        if ((long *)*plVar4 == plVar3) break;
        if ((char)plVar3[3] == '\0') {
          *(undefined1 *)(plVar3 + 3) = 1;
          *(undefined1 *)(plVar4 + 3) = 0;
          plVar6 = (long *)plVar4[1];
          lVar9 = *plVar6;
          plVar4[1] = lVar9;
          if (lVar9 != 0) {
            *(long **)(lVar9 + 0x10) = plVar4;
          }
          plVar6[2] = plVar4[2];
          ((undefined8 *)plVar4[2])[*(long **)plVar4[2] != plVar4] = plVar6;
          *plVar6 = (long)plVar4;
          plVar4[2] = (long)plVar6;
          plVar6 = plVar3;
          if (plVar7 != (long *)*plVar3) {
            plVar6 = plVar7;
          }
          plVar3 = (long *)((long *)*plVar3)[1];
        }
        plVar4 = (long *)*plVar3;
        if ((plVar4 != (long *)0x0) && ((char)plVar4[3] == '\0')) {
          plVar7 = (long *)plVar3[1];
          if (plVar7 != (long *)0x0) goto LAB_003537f0;
LAB_003537f8:
          *(undefined1 *)(plVar4 + 3) = 1;
          *(undefined1 *)(plVar3 + 3) = 0;
          lVar9 = plVar4[1];
          *plVar3 = lVar9;
          if (lVar9 != 0) {
            *(long **)(lVar9 + 0x10) = plVar3;
          }
          plVar4[2] = plVar3[2];
          ((undefined8 *)plVar3[2])[*(long **)plVar3[2] != plVar3] = plVar4;
          plVar4[1] = (long)plVar3;
          plVar3[2] = (long)plVar4;
          plVar5 = plVar4;
          plVar7 = plVar3;
LAB_00353844:
          plVar6 = (long *)plVar5[2];
          *(char *)(plVar5 + 3) = (char)plVar6[3];
          *(undefined1 *)(plVar6 + 3) = 1;
          *(undefined1 *)(plVar7 + 3) = 1;
          plVar4 = (long *)plVar6[1];
          lVar9 = *plVar4;
          plVar6[1] = lVar9;
          if (lVar9 != 0) {
            *(long **)(lVar9 + 0x10) = plVar6;
          }
          plVar4[2] = plVar6[2];
          ((undefined8 *)plVar6[2])[*(long **)plVar6[2] != plVar6] = plVar4;
          *plVar4 = (long)plVar6;
LAB_00353938:
          plVar6[2] = (long)plVar4;
          return;
        }
        plVar7 = (long *)plVar3[1];
        if ((plVar7 != (long *)0x0) && ((char)plVar7[3] == '\0')) {
LAB_003537f0:
          plVar5 = plVar3;
          if ((char)plVar7[3] != '\0') goto LAB_003537f8;
          goto LAB_00353844;
        }
        *(undefined1 *)(plVar3 + 3) = 0;
        plVar3 = (long *)plVar3[2];
        plVar4 = plVar6;
        if ((plVar3 == plVar6) || (plVar4 = plVar3, (char)plVar3[3] == '\0')) goto LAB_003537dc;
LAB_003537b4:
        plVar3 = (long *)((undefined8 *)plVar3[2])[*(long **)plVar3[2] == plVar3];
        plVar7 = plVar6;
      }
      if ((char)plVar3[3] == '\0') {
        *(undefined1 *)(plVar3 + 3) = 1;
        *(undefined1 *)(plVar4 + 3) = 0;
        lVar9 = plVar3[1];
        *plVar4 = lVar9;
        if (lVar9 != 0) {
          *(long **)(lVar9 + 0x10) = plVar4;
        }
        plVar3[2] = plVar4[2];
        ((undefined8 *)plVar4[2])[*(long **)plVar4[2] != plVar4] = plVar3;
        plVar3[1] = (long)plVar4;
        plVar4[2] = (long)plVar3;
        plVar6 = plVar3;
        if (plVar7 != plVar4) {
          plVar6 = plVar7;
        }
        plVar3 = (long *)*plVar4;
      }
      plVar7 = (long *)*plVar3;
      plVar4 = plVar3;
      if ((plVar7 == (long *)0x0) || ((char)plVar7[3] != '\0')) {
        plVar5 = (long *)plVar3[1];
        if ((plVar5 == (long *)0x0) || ((char)plVar5[3] != '\0')) {
          *(undefined1 *)(plVar3 + 3) = 0;
          plVar3 = (long *)plVar3[2];
          plVar4 = plVar3;
          if ((char)plVar3[3] != '\0' && plVar3 != plVar6) goto LAB_003537b4;
LAB_003537dc:
          *(undefined1 *)(plVar4 + 3) = 1;
          return;
        }
        if ((plVar7 == (long *)0x0) || ((char)plVar7[3] != '\0')) {
          *(undefined1 *)(plVar5 + 3) = 1;
          *(undefined1 *)(plVar3 + 3) = 0;
          lVar9 = *plVar5;
          plVar3[1] = lVar9;
          if (lVar9 != 0) {
            *(long **)(lVar9 + 0x10) = plVar3;
          }
          plVar5[2] = plVar3[2];
          ((undefined8 *)plVar3[2])[*(long **)plVar3[2] != plVar3] = plVar5;
          *plVar5 = (long)plVar3;
          plVar3[2] = (long)plVar5;
          plVar4 = plVar5;
          plVar7 = plVar3;
        }
      }
      plVar6 = (long *)plVar4[2];
      *(char *)(plVar4 + 3) = (char)plVar6[3];
      *(undefined1 *)(plVar6 + 3) = 1;
      *(undefined1 *)(plVar7 + 3) = 1;
      plVar4 = (long *)*plVar6;
      lVar9 = plVar4[1];
      *plVar6 = lVar9;
      if (lVar9 != 0) {
        *(long **)(lVar9 + 0x10) = plVar6;
      }
      plVar4[2] = plVar6[2];
      ((undefined8 *)plVar6[2])[*(long **)plVar6[2] != plVar6] = plVar4;
      plVar4[1] = (long)plVar6;
      goto LAB_00353938;
    }
    *(undefined1 *)(plVar4 + 3) = 1;
  }
  return;
}



/* Entry: 00353948; end: 0035397b;  */

void FUN_00353948(long param_1)

{
  dword *pdVar1;
  undefined8 uVar2;
  
  pdVar1 = &MACH_HEADER.ncmds;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined ***)pdVar1 = &PTR_DAT_009dbe98;
  *(undefined8 *)(pdVar1 + 2) = uVar2;
  return;
}



/* Entry: 0035397c; end: 003539a7;  */

void FUN_0035397c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_009dbe98;
  param_2[1] = uVar1;
  return;
}



/* Entry: 003539a8; end: 003539e3;  */

long FUN_003539a8(long param_1,undefined8 param_2)

{
  FUN_0033ff44(param_2,&PTR_DAT_009dbef8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 003539e4; end: 003539f7;  */

undefined ** FUN_003539e4(void)

{
  return &PTR_DAT_009dbef8;
}



/* Entry: 003539f8; end: 00353a2b;  */

void FUN_003539f8(long param_1)

{
  dword *pdVar1;
  undefined8 uVar2;
  
  pdVar1 = &MACH_HEADER.ncmds;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined ***)pdVar1 = &PTR_DAT_009dbf18;
  *(undefined8 *)(pdVar1 + 2) = uVar2;
  return;
}



/* Entry: 00353a2c; end: 00353a57;  */

void FUN_00353a2c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_009dbf18;
  param_2[1] = uVar1;
  return;
}



/* Entry: 00353a58; end: 00353a93;  */

long FUN_00353a58(long param_1,undefined8 param_2)

{
  FUN_0033ff44(param_2,&PTR_DAT_009dbf78);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 00353a94; end: 00353a9f;  */

undefined ** FUN_00353a94(void)

{
  return &PTR_DAT_009dbf78;
}



/* Entry: 00353aa0; end: 00353aeb;  */

undefined8 * FUN_00353aa0(undefined8 *param_1,long param_2,long param_3)

{
  *param_1 = 0;
  FUN_00353aec(param_1,param_2,param_3 - param_2 >> 5);
  return param_1;
}



/* Entry: 00353aec; end: 00353b6f;  */

void FUN_00353aec(ulong *param_1,ulong *param_2,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = param_3;
  if (param_3 < 3) {
    if (param_3 == 0) goto LAB_00353b54;
    puVar1 = param_1 + 1;
  }
  else {
    uVar3 = param_3;
    if (param_3 < 5) {
      uVar3 = 4;
    }
    puVar1 = param_1;
    FUN_00353b70();
    param_1[1] = (ulong)puVar1;
    param_1[2] = uVar3;
    *param_1 = *param_1 | 1;
  }
  do {
    uVar3 = *param_2;
    uVar5 = param_2[3];
    uVar4 = param_2[2];
    puVar1[1] = param_2[1];
    *puVar1 = uVar3;
    puVar1[3] = uVar5;
    puVar1[2] = uVar4;
    uVar2 = uVar2 - 1;
    puVar1 = puVar1 + 4;
    param_2 = param_2 + 4;
  } while (uVar2 != 0);
LAB_00353b54:
  *param_1 = *param_1 + param_3 * 2;
  return;
}



/* Entry: 00353b70; end: 00353ba3;  */

void FUN_00353b70(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long *extraout_x8;
  
  if (param_2 >> 0x3b == 0) {
    __Znwm(param_2 << 5);
    return;
  }
  FUN_00349558();
  lVar1 = 0x20;
  __Znwm();
  FUN_00353bec();
  *extraout_x8 = lVar1 + 0x18;
  extraout_x8[1] = lVar1;
  return;
}



/* Entry: 00353ba4; end: 00353beb;  */

void FUN_00353ba4(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x20;
  __Znwm();
  FUN_00353bec();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 00353bec; end: 00353c33;  */

undefined8 * FUN_00353bec(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_009dbf98;
  FUN_003d0d58(param_1 + 3);
  return param_1;
}



/* Entry: 00353c34; end: 00353c43;  */

void FUN_00353c34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009dbf98;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 00353c44; end: 00353c63;  */

void FUN_00353c44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009dbf98;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}


