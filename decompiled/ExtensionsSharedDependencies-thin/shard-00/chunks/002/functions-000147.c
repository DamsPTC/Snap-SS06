/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0039e318; end: 0039e377;  */

void FUN_0039e318(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [56];
  
  FUN_00391bec(auStack_58,param_2,param_1);
  FUN_0039e3e8(param_3,auStack_58);
  FUN_0038e75c(auStack_58,1);
  return;
}



/* Entry: 0039e378; end: 0039e3e7;  */

long FUN_0039e378(uint *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  
  uVar2 = *param_1;
  if (*(long **)(param_1 + 0x7e) == (long *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    plVar4 = *(long **)(param_1 + 0x7e);
    do {
      plVar1 = (long *)*plVar4;
      lVar3 = plVar4[1] + lVar3;
      plVar4 = plVar1;
    } while (plVar1 != (long *)0x0);
  }
  uVar2 = (uVar2 - (uVar2 >> 3 & 0x11111111)) -
          ((uVar2 >> 2 & 0x33333333) + (uVar2 >> 1 & 0x77777777));
  return lVar3 + (ulong)((uVar2 + (uVar2 >> 4) & 0xf0f0f0f) % 0xff);
}



/* Entry: 0039e3e8; end: 0039e48f;  */

void FUN_0039e3e8(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  
  FUN_0039e4bc();
  plVar1 = *(long **)(param_1 + 0x1f8);
  if ((plVar1 != (long *)0x0) && (plVar1[1] == 0)) {
    plVar1 = (long *)0x0;
  }
  lVar2 = 0;
LAB_0039e420:
  do {
    while (plVar1 == (long *)0x0) {
      if (lVar2 == 0) {
        return;
      }
      FUN_00390034(param_2,lVar2 << 6 | 0x10,lVar2 << 6 | 0x30);
      lVar2 = lVar2 + 1;
      plVar1 = (long *)0x0;
    }
    FUN_00390034(param_2,plVar1 + lVar2 * 8 + 2,plVar1 + lVar2 * 8 + 6);
    lVar2 = lVar2 + 1;
    do {
      if (lVar2 != plVar1[1]) goto LAB_0039e420;
      lVar2 = 0;
      plVar1 = (long *)*plVar1;
    } while (plVar1 != (long *)0x0);
    lVar2 = 0;
  } while( true );
}



/* Entry: 0039e490; end: 0039e4bb;  */

undefined8 FUN_0039e490(undefined8 param_1)

{
  FUN_0038e75c(param_1,1);
  return param_1;
}



/* Entry: 0039e4bc; end: 0039e70b;  */

uint * FUN_0039e4bc(uint *param_1,uint *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  uint **ppuVar9;
  uint uVar10;
  long *plVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  ulong uStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  ulong uStack_e8;
  uint *puStack_e0;
  uint *puStack_d8;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  uint *puStack_c0;
  undefined1 auStack_b8 [32];
  long lStack_98;
  uint *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  uint *puStack_48;
  undefined8 uStack_40;
  char *pcStack_38;
  long lStack_28;
  
  uVar10 = *param_1;
  if ((uVar10 & 1) == 0) {
    puVar5 = param_1;
    if ((uVar10 >> 1 & 1) == 0) goto LAB_0039e4dc;
LAB_0039e564:
    puVar5 = param_2;
    func_0x00390270(param_2,param_1 + 0x6c);
    uVar10 = *param_1;
    if ((uVar10 >> 2 & 1) != 0) goto LAB_0039e578;
LAB_0039e4e0:
    if ((uVar10 >> 3 & 1) == 0) goto LAB_0039e4e4;
LAB_0039e58c:
    puVar5 = param_2;
    FUN_003909d8(param_2,param_1[0x69]);
    uVar10 = *param_1;
    if ((uVar10 >> 4 & 1) != 0) goto LAB_0039e5a0;
LAB_0039e4e8:
    if ((uVar10 >> 5 & 1) == 0) goto LAB_0039e4ec;
LAB_0039e5b4:
    puVar5 = param_2;
    FUN_003904e8(param_2,param_1[0x67]);
    uVar10 = *param_1;
    if ((uVar10 >> 6 & 1) != 0) goto LAB_0039e5c8;
LAB_0039e4f0:
    if ((uVar10 >> 7 & 1) == 0) goto LAB_0039e4f4;
LAB_0039e5dc:
    puVar5 = param_2;
    FUN_003915c4(param_2,param_1[0x65]);
    uVar10 = *param_1;
    if ((uVar10 >> 8 & 1) != 0) goto LAB_0039e5f0;
LAB_0039e4f8:
    if ((uVar10 >> 9 & 1) == 0) goto LAB_0039e4fc;
LAB_0039e604:
    puVar5 = param_2;
    FUN_00391888(param_2,(char)param_1[99]);
    uVar10 = *param_1;
    if ((uVar10 >> 10 & 1) != 0) goto LAB_0039e618;
LAB_0039e500:
    if ((uVar10 >> 0xb & 1) == 0) goto LAB_0039e504;
LAB_0039e62c:
    puVar5 = param_2;
    FUN_00390cd4(param_2,*(undefined8 *)(param_1 + 0x60));
    uVar10 = *param_1;
    if ((uVar10 >> 0xc & 1) != 0) goto LAB_0039e640;
LAB_0039e508:
    if ((uVar10 >> 0xd & 1) == 0) goto LAB_0039e50c;
LAB_0039e654:
    puVar5 = param_2;
    FUN_0039e9dc(param_2,param_1 + 0x5c);
    uVar10 = *param_1;
    if ((uVar10 >> 0xe & 1) != 0) goto LAB_0039e668;
LAB_0039e510:
    if ((uVar10 >> 0xf & 1) == 0) goto LAB_0039e514;
LAB_0039e67c:
    puVar5 = param_2;
    FUN_0039eb44(param_2,param_1 + 0x4c);
    uVar10 = *param_1;
    if ((uVar10 >> 0x10 & 1) != 0) goto LAB_0039e690;
LAB_0039e518:
    if ((uVar10 >> 0x11 & 1) == 0) goto LAB_0039e51c;
LAB_0039e6a4:
    puVar5 = param_2;
    FUN_0039ed7c(param_2,param_1 + 0x3c);
    uVar10 = *param_1;
    if ((uVar10 >> 0x12 & 1) != 0) goto LAB_0039e6b8;
LAB_0039e520:
    if ((uVar10 >> 0x13 & 1) == 0) goto LAB_0039e524;
LAB_0039e6cc:
    puVar5 = param_2;
    FUN_00390664(param_2,param_1 + 0x2c);
    uVar10 = *param_1;
    if ((uVar10 >> 0x14 & 1) != 0) goto LAB_0039e6e0;
LAB_0039e528:
    if ((uVar10 >> 0x15 & 1) == 0) goto LAB_0039e52c;
LAB_0039e6f4:
    _abort();
  }
  else {
    puVar5 = param_2;
    func_0x00390250(param_2,param_1 + 0x74);
    uVar10 = *param_1;
    if ((uVar10 >> 1 & 1) != 0) goto LAB_0039e564;
LAB_0039e4dc:
    if ((uVar10 >> 2 & 1) == 0) goto LAB_0039e4e0;
LAB_0039e578:
    puVar5 = param_2;
    FUN_00390b60(param_2,param_1[0x6a]);
    uVar10 = *param_1;
    if ((uVar10 >> 3 & 1) != 0) goto LAB_0039e58c;
LAB_0039e4e4:
    if ((uVar10 >> 4 & 1) == 0) goto LAB_0039e4e8;
LAB_0039e5a0:
    puVar5 = param_2;
    FUN_003905fc(param_2,param_1[0x68]);
    uVar10 = *param_1;
    if ((uVar10 >> 5 & 1) != 0) goto LAB_0039e5b4;
LAB_0039e4ec:
    if ((uVar10 >> 6 & 1) == 0) goto LAB_0039e4f0;
LAB_0039e5c8:
    puVar5 = param_2;
    FUN_00390290(param_2,(char)param_1[0x66]);
    uVar10 = *param_1;
    if ((uVar10 >> 7 & 1) != 0) goto LAB_0039e5dc;
LAB_0039e4f4:
    if ((uVar10 >> 8 & 1) == 0) goto LAB_0039e4f8;
LAB_0039e5f0:
    puVar5 = param_2;
    FUN_0039e70c(param_2,param_1 + 100);
    uVar10 = *param_1;
    if ((uVar10 >> 9 & 1) != 0) goto LAB_0039e604;
LAB_0039e4fc:
    if ((uVar10 >> 10 & 1) == 0) goto LAB_0039e500;
LAB_0039e618:
    puVar5 = param_2;
    FUN_00391300(param_2,param_1[0x62]);
    uVar10 = *param_1;
    if ((uVar10 >> 0xb & 1) != 0) goto LAB_0039e62c;
LAB_0039e504:
    if ((uVar10 >> 0xc & 1) == 0) goto LAB_0039e508;
LAB_0039e640:
    puVar5 = param_2;
    FUN_0039e874(param_2,param_1 + 0x5e);
    uVar10 = *param_1;
    if ((uVar10 >> 0xd & 1) != 0) goto LAB_0039e654;
LAB_0039e50c:
    if ((uVar10 >> 0xe & 1) == 0) goto LAB_0039e510;
LAB_0039e668:
    puVar5 = param_2;
    FUN_00391074(param_2,param_1 + 0x54);
    uVar10 = *param_1;
    if ((uVar10 >> 0xf & 1) != 0) goto LAB_0039e67c;
LAB_0039e514:
    if ((uVar10 >> 0x10 & 1) == 0) goto LAB_0039e518;
LAB_0039e690:
    puVar5 = param_2;
    FUN_0039ec68(param_2,param_1 + 0x44);
    uVar10 = *param_1;
    if ((uVar10 >> 0x11 & 1) != 0) goto LAB_0039e6a4;
LAB_0039e51c:
    if ((uVar10 >> 0x12 & 1) == 0) goto LAB_0039e520;
LAB_0039e6b8:
    puVar5 = param_2;
    FUN_0039ee90(param_2,param_1 + 0x34);
    uVar10 = *param_1;
    if ((uVar10 >> 0x13 & 1) != 0) goto LAB_0039e6cc;
LAB_0039e524:
    if ((uVar10 >> 0x14 & 1) == 0) goto LAB_0039e528;
LAB_0039e6e0:
    puVar5 = param_2;
    FUN_003908fc(param_2,param_1 + 0x24);
    uVar10 = *param_1;
    if ((uVar10 >> 0x15 & 1) != 0) goto LAB_0039e6f4;
LAB_0039e52c:
    if ((uVar10 >> 0x16 & 1) != 0) {
      puVar5 = param_1 + 0x18;
      FUN_0039efa4(puVar5,param_2);
      uVar10 = *param_1;
    }
    if ((uVar10 >> 0x17 & 1) == 0) {
      return puVar5;
    }
  }
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_48 = (uint *)((long)&MACH_HEADER.magic + 1);
  uStack_40 = 8;
  pcStack_38 = "lb-token";
  plVar11 = *(long **)(param_1 + 0x10);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar11) {
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = *plVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_68 = *(undefined8 *)(param_1 + 0x12);
  plStack_70 = *(long **)(param_1 + 0x10);
  uStack_58 = *(undefined8 *)(param_1 + 0x16);
  uStack_60 = *(undefined8 *)(param_1 + 0x14);
  ppuVar9 = &puStack_48;
  FUN_0038f6a4(param_2,ppuVar9,&plStack_70);
  iVar8 = (int)ppuVar9;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_70) {
    do {
      lVar12 = *plStack_70;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
      if (bVar4) {
        *plStack_70 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)plStack_70[1])();
    }
  }
  puVar5 = puStack_48;
  if ((uint *)((long)&MACH_HEADER.magic + 1) < puStack_48) {
    do {
      lVar12 = *(long *)puStack_48;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puStack_48,0x10);
      if (bVar4) {
        *(long *)puStack_48 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 + -1 == 0) {
      (**(code **)(puStack_48 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  if (iVar8 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_70);
    FUN_0034b418(&puStack_48);
  }
  puVar6 = puVar5;
  __Unwind_Resume();
  pcStack_78 = FUN_0039f2e0;
  lStack_98 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar12 = *(long *)(puVar6 + 4);
  *(undefined8 *)(lVar12 + 0xb0) = 0;
  if (*(undefined1 **)(lVar12 + 0xb8) != (undefined1 *)0x0) {
    **(undefined1 **)(lVar12 + 0xb8) = 1;
    *(undefined8 *)(lVar12 + 0xb8) = 0;
  }
  *(undefined1 *)(lVar12 + 0x6f1) = 1;
  *(undefined1 *)(lVar12 + 0x16e) = 1;
  lVar14 = *(long *)(puVar6 + 2);
  puStack_88 = puVar5;
  puStack_80 = &stack0xfffffffffffffff0;
  if (*(char *)(lVar14 + 0x628) == '\0') {
    if (*(char *)(lVar12 + 0x169) == '\0') {
      FUN_0038d6e0(auStack_b8,*(undefined4 *)(lVar12 + 0x9c),0,lVar12 + 0x150);
      FUN_003ecb34(lVar14 + 0x310,auStack_b8);
      lVar14 = *(long *)(puVar6 + 2);
      lVar12 = *(long *)(puVar6 + 4);
      bVar4 = *(char *)(lVar14 + 0x628) == '\0';
    }
    else {
      bVar4 = true;
    }
  }
  else {
    bVar4 = false;
  }
  puStack_c0 = (uint *)0x0;
  FUN_003870a0(lVar14,lVar12,bVar4,1,&puStack_c0);
  puVar5 = puStack_c0;
  if (((ulong)puStack_c0 & 1) != 0) {
    FUN_0055293c();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_98) {
    return puVar5;
  }
  ___stack_chk_fail();
  puVar7 = puVar5;
  __Unwind_Resume();
  pcStack_c8 = FUN_0039f3f8;
  puStack_e0 = puVar6;
  puStack_d8 = puVar5;
  ppuStack_d0 = &puStack_80;
  if (*(char *)((long)puVar7 + 0x17) < '\0') {
    if ((*(long *)(puVar7 + 2) == 4) && (**(int **)puVar7 == 0x78696e75)) goto LAB_0039f48c;
  }
  else if (*(char *)((long)puVar7 + 0x17) == '\x04' && *puVar7 == 0x78696e75) {
LAB_0039f48c:
    uVar1 = *(ulong *)(puVar7 + 0xe);
    puVar5 = *(uint **)(puVar7 + 0xc);
    if (-1 < (char)*(byte *)((long)puVar7 + 0x47)) {
      uVar1 = (ulong)*(byte *)((long)puVar7 + 0x47);
      puVar5 = puVar7 + 0xc;
    }
    FUN_0039f584(&uStack_e8,puVar5,uVar1,lVar12);
    bVar4 = uStack_e8 == 0;
    if (uStack_e8 == 0) {
      return (uint *)0x1;
    }
    uStack_108 = uStack_e8;
    if ((uStack_e8 & 1) != 0) {
      piVar13 = (int *)(uStack_e8 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar3) {
          *piVar13 = *piVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_003be004(auStack_100,&uStack_108);
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                 ,0x38,2,"%s");
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
    }
    if ((uStack_108 & 1) != 0) {
      FUN_0055293c();
    }
    if ((uStack_e8 & 1) == 0) {
      return (uint *)(ulong)bVar4;
    }
    FUN_0055293c();
    return (uint *)(ulong)bVar4;
  }
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
               ,0x31,2,"Expected \'unix\' scheme, got \'%s\'");
  return (uint *)0x0;
}



/* Entry: 0039e70c; end: 0039e873;  */

void FUN_0039e70c(undefined8 param_1,undefined4 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  long **pplVar6;
  ulong **ppuVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong *puVar11;
  long *plStack_370;
  long *plStack_368;
  long *plStack_360;
  long *plStack_358;
  ulong *puStack_348;
  undefined8 uStack_340;
  char *pcStack_338;
  long lStack_328;
  long *plStack_300;
  long *plStack_2f8;
  long *plStack_2f0;
  long *plStack_2e8;
  long *plStack_2d8;
  undefined8 uStack_2d0;
  char *pcStack_2c8;
  long lStack_2b8;
  long *plStack_290;
  long *plStack_288;
  long *plStack_280;
  long *plStack_278;
  long *plStack_268;
  undefined8 uStack_260;
  char *pcStack_258;
  long lStack_248;
  long *plStack_220;
  long *plStack_218;
  long *plStack_210;
  long *plStack_208;
  long *plStack_1f8;
  undefined8 uStack_1f0;
  char *pcStack_1e8;
  long lStack_1d8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long *plStack_188;
  undefined8 uStack_180;
  char *pcStack_178;
  long *plStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_f8;
  undefined8 uStack_f0;
  char *pcStack_e8;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_68;
  undefined8 uStack_60;
  char *pcStack_58;
  long *plStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034f290(&plStack_48,*param_2);
  plStack_68 = (long *)((long)&MACH_HEADER.magic + 1);
  uStack_60 = 0x1e;
  pcStack_58 = "grpc-internal-encoding-request";
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_48) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_48,0x10);
      if (bVar4) {
        *plStack_48 = *plStack_48 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_88 = uStack_40;
  plStack_90 = plStack_48;
  uStack_78 = uStack_30;
  uStack_80 = uStack_38;
  pplVar6 = &plStack_68;
  FUN_0038f6a4(param_1,pplVar6,&plStack_90);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_90) {
    do {
      lVar8 = *plStack_90;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
      if (bVar4) {
        *plStack_90 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_90[1])();
    }
  }
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_68) {
    do {
      lVar8 = *plStack_68;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
      if (bVar4) {
        *plStack_68 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_68[1])();
    }
  }
  plVar9 = plStack_48;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_48) {
    do {
      lVar8 = *plStack_48;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_48,0x10);
      if (bVar4) {
        *plStack_48 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_48[1])();
      plVar9 = plStack_48;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar6 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_90);
    FUN_0034b418(&plStack_68);
    FUN_0034b418(&plStack_48);
  }
  __Unwind_Resume(plVar9);
  lStack_b8 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034eb70(&plStack_d8,*(undefined4 *)pplVar6);
  plStack_f8 = (long *)((long)&MACH_HEADER.magic + 1);
  uStack_f0 = 0x1a;
  pcStack_e8 = "grpc-previous-rpc-attempts";
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_d8) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_d8,0x10);
      if (bVar4) {
        *plStack_d8 = *plStack_d8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_118 = uStack_d0;
  plStack_120 = plStack_d8;
  uStack_108 = uStack_c0;
  uStack_110 = uStack_c8;
  pplVar6 = &plStack_f8;
  FUN_0038f6a4(plVar9,pplVar6,&plStack_120);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_120) {
    do {
      lVar8 = *plStack_120;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_120,0x10);
      if (bVar4) {
        *plStack_120 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_120[1])();
    }
  }
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_f8) {
    do {
      lVar8 = *plStack_f8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_f8,0x10);
      if (bVar4) {
        *plStack_f8 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_f8[1])();
    }
  }
  plVar9 = plStack_d8;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_d8) {
    do {
      lVar8 = *plStack_d8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_d8,0x10);
      if (bVar4) {
        *plStack_d8 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_d8[1])();
      plVar9 = plStack_d8;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar6 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_120);
    FUN_0034b418(&plStack_f8);
    FUN_0034b418(&plStack_d8);
  }
  __Unwind_Resume(plVar9);
  lStack_148 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034eb70(&plStack_168,*pplVar6);
  plStack_188 = (long *)((long)&MACH_HEADER.magic + 1);
  uStack_180 = 0x16;
  pcStack_178 = "grpc-retry-pushback-ms";
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_168) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_168,0x10);
      if (bVar4) {
        *plStack_168 = *plStack_168 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_1a8 = uStack_160;
  plStack_1b0 = plStack_168;
  uStack_198 = uStack_150;
  uStack_1a0 = uStack_158;
  pplVar6 = &plStack_188;
  FUN_0038f6a4(plVar9,pplVar6,&plStack_1b0);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_1b0) {
    do {
      lVar8 = *plStack_1b0;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_1b0,0x10);
      if (bVar4) {
        *plStack_1b0 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_1b0[1])();
    }
  }
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_188) {
    do {
      lVar8 = *plStack_188;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_188,0x10);
      if (bVar4) {
        *plStack_188 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_188[1])();
    }
  }
  plVar9 = plStack_168;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_168) {
    do {
      lVar8 = *plStack_168;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_168,0x10);
      if (bVar4) {
        *plStack_168 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_168[1])();
      plVar9 = plStack_168;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar6 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_1b0);
    FUN_0034b418(&plStack_188);
    FUN_0034b418(&plStack_168);
  }
  __Unwind_Resume();
  lStack_1d8 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar2 = *pplVar6;
  plVar1 = (long *)((ulong)pplVar6[1] & 0xff);
  if (plVar2 != (long *)0x0) {
    plVar1 = pplVar6[1];
  }
  if (plVar1 != (long *)0x0) {
    plStack_1f8 = (long *)((long)&MACH_HEADER.magic + 1);
    uStack_1f0 = 0xc;
    pcStack_1e8 = "grpc-message";
    if ((long *)((long)&MACH_HEADER.magic + 1) < plVar2) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plStack_218 = pplVar6[1];
    plStack_220 = *pplVar6;
    plStack_208 = pplVar6[3];
    plStack_210 = pplVar6[2];
    pplVar6 = &plStack_1f8;
    FUN_0038f6a4();
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_220) {
      do {
        lVar8 = *plStack_220;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plStack_220,0x10);
        if (bVar4) {
          *plStack_220 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plStack_220[1])();
      }
    }
    plVar9 = plStack_1f8;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_1f8) {
      do {
        lVar8 = *plStack_1f8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plStack_1f8,0x10);
        if (bVar4) {
          *plStack_1f8 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plStack_1f8[1])();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar6 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_220);
    FUN_0034b418(&plStack_1f8);
  }
  __Unwind_Resume(plVar9);
  lStack_248 = *(long *)PTR____stack_chk_guard_00999f88;
  plStack_268 = (long *)((long)&MACH_HEADER.magic + 1);
  uStack_260 = 4;
  pcStack_258 = "host";
  plVar9 = *pplVar6;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar9) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plStack_288 = pplVar6[1];
  plStack_290 = *pplVar6;
  plStack_278 = pplVar6[3];
  plStack_280 = pplVar6[2];
  pplVar6 = &plStack_268;
  FUN_0038f6a4();
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_290) {
    do {
      lVar8 = *plStack_290;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_290,0x10);
      if (bVar4) {
        *plStack_290 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_290[1])();
    }
  }
  plVar9 = plStack_268;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_268) {
    do {
      lVar8 = *plStack_268;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_268,0x10);
      if (bVar4) {
        *plStack_268 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_268[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar6 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_290);
    FUN_0034b418(&plStack_268);
  }
  __Unwind_Resume(plVar9);
  lStack_2b8 = *(long *)PTR____stack_chk_guard_00999f88;
  plStack_2d8 = (long *)((long)&MACH_HEADER.magic + 1);
  uStack_2d0 = 0x19;
  pcStack_2c8 = "endpoint-load-metrics-bin";
  plVar9 = *pplVar6;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar9) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plStack_2f8 = pplVar6[1];
  plStack_300 = *pplVar6;
  plStack_2e8 = pplVar6[3];
  plStack_2f0 = pplVar6[2];
  pplVar6 = &plStack_2d8;
  FUN_0038ee10();
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_300) {
    do {
      lVar8 = *plStack_300;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_300,0x10);
      if (bVar4) {
        *plStack_300 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_300[1])();
    }
  }
  plVar9 = plStack_2d8;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_2d8) {
    do {
      lVar8 = *plStack_2d8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_2d8,0x10);
      if (bVar4) {
        *plStack_2d8 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_2d8[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_2b8) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar6 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_300);
    FUN_0034b418(&plStack_2d8);
  }
  __Unwind_Resume(plVar9);
  lStack_328 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_348 = (ulong *)((long)&MACH_HEADER.magic + 1);
  uStack_340 = 0x15;
  pcStack_338 = "grpc-server-stats-bin";
  plVar9 = *pplVar6;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar9) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plStack_368 = pplVar6[1];
  plStack_370 = *pplVar6;
  plStack_358 = pplVar6[3];
  plStack_360 = pplVar6[2];
  ppuVar7 = &puStack_348;
  FUN_0038ee10();
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_370) {
    do {
      lVar8 = *plStack_370;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_370,0x10);
      if (bVar4) {
        *plStack_370 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_370[1])();
    }
  }
  puVar5 = puStack_348;
  if ((ulong *)((long)&MACH_HEADER.magic + 1) < puStack_348) {
    do {
      uVar10 = *puStack_348;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puStack_348,0x10);
      if (bVar4) {
        *puStack_348 = uVar10 - 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (uVar10 - 1 == 0) {
      (*(code *)puStack_348[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_328) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_370);
    FUN_0034b418(&puStack_348);
  }
  __Unwind_Resume();
  puVar11 = puVar5 + 1;
  uVar10 = *puVar5;
  if ((uVar10 & 1) != 0) {
    puVar11 = (ulong *)*puVar11;
  }
  if (1 < uVar10) {
    lVar8 = (uVar10 >> 1) << 5;
    do {
      FUN_0039f000(ppuVar7,puVar11);
      puVar11 = puVar11 + 4;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
  }
  return;
}



/* Entry: 0039e874; end: 0039e9db;  */

void FUN_0039e874(undefined8 param_1,undefined4 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  long **pplVar6;
  ulong **ppuVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong *puVar11;
  long *plStack_2e0;
  long *plStack_2d8;
  long *plStack_2d0;
  long *plStack_2c8;
  ulong *puStack_2b8;
  undefined8 uStack_2b0;
  char *pcStack_2a8;
  long lStack_298;
  long *plStack_270;
  long *plStack_268;
  long *plStack_260;
  long *plStack_258;
  long *plStack_248;
  undefined8 uStack_240;
  char *pcStack_238;
  long lStack_228;
  long *plStack_200;
  long *plStack_1f8;
  long *plStack_1f0;
  long *plStack_1e8;
  long *plStack_1d8;
  undefined8 uStack_1d0;
  char *pcStack_1c8;
  long lStack_1b8;
  long *plStack_190;
  long *plStack_188;
  long *plStack_180;
  long *plStack_178;
  long *plStack_168;
  undefined8 uStack_160;
  char *pcStack_158;
  long lStack_148;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_f8;
  undefined8 uStack_f0;
  char *pcStack_e8;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_68;
  undefined8 uStack_60;
  char *pcStack_58;
  long *plStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034eb70(&plStack_48,*param_2);
  plStack_68 = (long *)((long)&MACH_HEADER.magic + 1);
  uStack_60 = 0x1a;
  pcStack_58 = "grpc-previous-rpc-attempts";
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_48) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_48,0x10);
      if (bVar4) {
        *plStack_48 = *plStack_48 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_88 = uStack_40;
  plStack_90 = plStack_48;
  uStack_78 = uStack_30;
  uStack_80 = uStack_38;
  pplVar6 = &plStack_68;
  FUN_0038f6a4(param_1,pplVar6,&plStack_90);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_90) {
    do {
      lVar8 = *plStack_90;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
      if (bVar4) {
        *plStack_90 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_90[1])();
    }
  }
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_68) {
    do {
      lVar8 = *plStack_68;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
      if (bVar4) {
        *plStack_68 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_68[1])();
    }
  }
  plVar9 = plStack_48;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_48) {
    do {
      lVar8 = *plStack_48;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_48,0x10);
      if (bVar4) {
        *plStack_48 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_48[1])();
      plVar9 = plStack_48;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar6 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_90);
    FUN_0034b418(&plStack_68);
    FUN_0034b418(&plStack_48);
  }
  __Unwind_Resume(plVar9);
  lStack_b8 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034eb70(&plStack_d8,*pplVar6);
  plStack_f8 = (long *)((long)&MACH_HEADER.magic + 1);
  uStack_f0 = 0x16;
  pcStack_e8 = "grpc-retry-pushback-ms";
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_d8) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_d8,0x10);
      if (bVar4) {
        *plStack_d8 = *plStack_d8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_118 = uStack_d0;
  plStack_120 = plStack_d8;
  uStack_108 = uStack_c0;
  uStack_110 = uStack_c8;
  pplVar6 = &plStack_f8;
  FUN_0038f6a4(plVar9,pplVar6,&plStack_120);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_120) {
    do {
      lVar8 = *plStack_120;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_120,0x10);
      if (bVar4) {
        *plStack_120 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_120[1])();
    }
  }
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_f8) {
    do {
      lVar8 = *plStack_f8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_f8,0x10);
      if (bVar4) {
        *plStack_f8 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_f8[1])();
    }
  }
  plVar9 = plStack_d8;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_d8) {
    do {
      lVar8 = *plStack_d8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_d8,0x10);
      if (bVar4) {
        *plStack_d8 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_d8[1])();
      plVar9 = plStack_d8;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar6 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_120);
    FUN_0034b418(&plStack_f8);
    FUN_0034b418(&plStack_d8);
  }
  __Unwind_Resume();
  lStack_148 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar2 = *pplVar6;
  plVar1 = (long *)((ulong)pplVar6[1] & 0xff);
  if (plVar2 != (long *)0x0) {
    plVar1 = pplVar6[1];
  }
  if (plVar1 != (long *)0x0) {
    plStack_168 = (long *)((long)&MACH_HEADER.magic + 1);
    uStack_160 = 0xc;
    pcStack_158 = "grpc-message";
    if ((long *)((long)&MACH_HEADER.magic + 1) < plVar2) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plStack_188 = pplVar6[1];
    plStack_190 = *pplVar6;
    plStack_178 = pplVar6[3];
    plStack_180 = pplVar6[2];
    pplVar6 = &plStack_168;
    FUN_0038f6a4();
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_190) {
      do {
        lVar8 = *plStack_190;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plStack_190,0x10);
        if (bVar4) {
          *plStack_190 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plStack_190[1])();
      }
    }
    plVar9 = plStack_168;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_168) {
      do {
        lVar8 = *plStack_168;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plStack_168,0x10);
        if (bVar4) {
          *plStack_168 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plStack_168[1])();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar6 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_190);
    FUN_0034b418(&plStack_168);
  }
  __Unwind_Resume(plVar9);
  lStack_1b8 = *(long *)PTR____stack_chk_guard_00999f88;
  plStack_1d8 = (long *)((long)&MACH_HEADER.magic + 1);
  uStack_1d0 = 4;
  pcStack_1c8 = "host";
  plVar9 = *pplVar6;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar9) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plStack_1f8 = pplVar6[1];
  plStack_200 = *pplVar6;
  plStack_1e8 = pplVar6[3];
  plStack_1f0 = pplVar6[2];
  pplVar6 = &plStack_1d8;
  FUN_0038f6a4();
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_200) {
    do {
      lVar8 = *plStack_200;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_200,0x10);
      if (bVar4) {
        *plStack_200 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_200[1])();
    }
  }
  plVar9 = plStack_1d8;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_1d8) {
    do {
      lVar8 = *plStack_1d8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_1d8,0x10);
      if (bVar4) {
        *plStack_1d8 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_1d8[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1b8) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar6 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_200);
    FUN_0034b418(&plStack_1d8);
  }
  __Unwind_Resume(plVar9);
  lStack_228 = *(long *)PTR____stack_chk_guard_00999f88;
  plStack_248 = (long *)((long)&MACH_HEADER.magic + 1);
  uStack_240 = 0x19;
  pcStack_238 = "endpoint-load-metrics-bin";
  plVar9 = *pplVar6;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar9) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plStack_268 = pplVar6[1];
  plStack_270 = *pplVar6;
  plStack_258 = pplVar6[3];
  plStack_260 = pplVar6[2];
  pplVar6 = &plStack_248;
  FUN_0038ee10();
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_270) {
    do {
      lVar8 = *plStack_270;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_270,0x10);
      if (bVar4) {
        *plStack_270 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_270[1])();
    }
  }
  plVar9 = plStack_248;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_248) {
    do {
      lVar8 = *plStack_248;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_248,0x10);
      if (bVar4) {
        *plStack_248 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_248[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar6 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_270);
    FUN_0034b418(&plStack_248);
  }
  __Unwind_Resume(plVar9);
  lStack_298 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_2b8 = (ulong *)((long)&MACH_HEADER.magic + 1);
  uStack_2b0 = 0x15;
  pcStack_2a8 = "grpc-server-stats-bin";
  plVar9 = *pplVar6;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar9) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plStack_2d8 = pplVar6[1];
  plStack_2e0 = *pplVar6;
  plStack_2c8 = pplVar6[3];
  plStack_2d0 = pplVar6[2];
  ppuVar7 = &puStack_2b8;
  FUN_0038ee10();
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_2e0) {
    do {
      lVar8 = *plStack_2e0;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_2e0,0x10);
      if (bVar4) {
        *plStack_2e0 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_2e0[1])();
    }
  }
  puVar5 = puStack_2b8;
  if ((ulong *)((long)&MACH_HEADER.magic + 1) < puStack_2b8) {
    do {
      uVar10 = *puStack_2b8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puStack_2b8,0x10);
      if (bVar4) {
        *puStack_2b8 = uVar10 - 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (uVar10 - 1 == 0) {
      (*(code *)puStack_2b8[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_298) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_2e0);
    FUN_0034b418(&puStack_2b8);
  }
  __Unwind_Resume();
  puVar11 = puVar5 + 1;
  uVar10 = *puVar5;
  if ((uVar10 & 1) != 0) {
    puVar11 = (ulong *)*puVar11;
  }
  if (1 < uVar10) {
    lVar8 = (uVar10 >> 1) << 5;
    do {
      FUN_0039f000(ppuVar7,puVar11);
      puVar11 = puVar11 + 4;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
  }
  return;
}



/* Entry: 0039e9dc; end: 0039eb43;  */

void FUN_0039e9dc(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  long **pplVar6;
  ulong **ppuVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong *puVar11;
  long *plStack_250;
  long *plStack_248;
  long *plStack_240;
  long *plStack_238;
  ulong *puStack_228;
  undefined8 uStack_220;
  char *pcStack_218;
  long lStack_208;
  long *plStack_1e0;
  long *plStack_1d8;
  long *plStack_1d0;
  long *plStack_1c8;
  long *plStack_1b8;
  undefined8 uStack_1b0;
  char *pcStack_1a8;
  long lStack_198;
  long *plStack_170;
  long *plStack_168;
  long *plStack_160;
  long *plStack_158;
  long *plStack_148;
  undefined8 uStack_140;
  char *pcStack_138;
  long lStack_128;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_d8;
  undefined8 uStack_d0;
  char *pcStack_c8;
  long lStack_b8;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_68;
  undefined8 uStack_60;
  char *pcStack_58;
  long *plStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034eb70(&plStack_48,*param_2);
  plStack_68 = (long *)((long)&MACH_HEADER.magic + 1);
  uStack_60 = 0x16;
  pcStack_58 = "grpc-retry-pushback-ms";
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_48) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_48,0x10);
      if (bVar4) {
        *plStack_48 = *plStack_48 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_88 = uStack_40;
  plStack_90 = plStack_48;
  uStack_78 = uStack_30;
  uStack_80 = uStack_38;
  pplVar6 = &plStack_68;
  FUN_0038f6a4(param_1,pplVar6,&plStack_90);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_90) {
    do {
      lVar8 = *plStack_90;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
      if (bVar4) {
        *plStack_90 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_90[1])();
    }
  }
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_68) {
    do {
      lVar8 = *plStack_68;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
      if (bVar4) {
        *plStack_68 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_68[1])();
    }
  }
  plVar9 = plStack_48;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_48) {
    do {
      lVar8 = *plStack_48;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_48,0x10);
      if (bVar4) {
        *plStack_48 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_48[1])();
      plVar9 = plStack_48;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar6 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_90);
    FUN_0034b418(&plStack_68);
    FUN_0034b418(&plStack_48);
  }
  __Unwind_Resume();
  lStack_b8 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar2 = *pplVar6;
  plVar1 = (long *)((ulong)pplVar6[1] & 0xff);
  if (plVar2 != (long *)0x0) {
    plVar1 = pplVar6[1];
  }
  if (plVar1 != (long *)0x0) {
    plStack_d8 = (long *)((long)&MACH_HEADER.magic + 1);
    uStack_d0 = 0xc;
    pcStack_c8 = "grpc-message";
    if ((long *)((long)&MACH_HEADER.magic + 1) < plVar2) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plStack_f8 = pplVar6[1];
    plStack_100 = *pplVar6;
    plStack_e8 = pplVar6[3];
    plStack_f0 = pplVar6[2];
    pplVar6 = &plStack_d8;
    FUN_0038f6a4();
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_100) {
      do {
        lVar8 = *plStack_100;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plStack_100,0x10);
        if (bVar4) {
          *plStack_100 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plStack_100[1])();
      }
    }
    plVar9 = plStack_d8;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_d8) {
      do {
        lVar8 = *plStack_d8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plStack_d8,0x10);
        if (bVar4) {
          *plStack_d8 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plStack_d8[1])();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar6 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_100);
    FUN_0034b418(&plStack_d8);
  }
  __Unwind_Resume(plVar9);
  lStack_128 = *(long *)PTR____stack_chk_guard_00999f88;
  plStack_148 = (long *)((long)&MACH_HEADER.magic + 1);
  uStack_140 = 4;
  pcStack_138 = "host";
  plVar9 = *pplVar6;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar9) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plStack_168 = pplVar6[1];
  plStack_170 = *pplVar6;
  plStack_158 = pplVar6[3];
  plStack_160 = pplVar6[2];
  pplVar6 = &plStack_148;
  FUN_0038f6a4();
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_170) {
    do {
      lVar8 = *plStack_170;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_170,0x10);
      if (bVar4) {
        *plStack_170 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_170[1])();
    }
  }
  plVar9 = plStack_148;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_148) {
    do {
      lVar8 = *plStack_148;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_148,0x10);
      if (bVar4) {
        *plStack_148 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_148[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_128) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar6 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_170);
    FUN_0034b418(&plStack_148);
  }
  __Unwind_Resume(plVar9);
  lStack_198 = *(long *)PTR____stack_chk_guard_00999f88;
  plStack_1b8 = (long *)((long)&MACH_HEADER.magic + 1);
  uStack_1b0 = 0x19;
  pcStack_1a8 = "endpoint-load-metrics-bin";
  plVar9 = *pplVar6;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar9) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plStack_1d8 = pplVar6[1];
  plStack_1e0 = *pplVar6;
  plStack_1c8 = pplVar6[3];
  plStack_1d0 = pplVar6[2];
  pplVar6 = &plStack_1b8;
  FUN_0038ee10();
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_1e0) {
    do {
      lVar8 = *plStack_1e0;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_1e0,0x10);
      if (bVar4) {
        *plStack_1e0 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_1e0[1])();
    }
  }
  plVar9 = plStack_1b8;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_1b8) {
    do {
      lVar8 = *plStack_1b8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_1b8,0x10);
      if (bVar4) {
        *plStack_1b8 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_1b8[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar6 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_1e0);
    FUN_0034b418(&plStack_1b8);
  }
  __Unwind_Resume(plVar9);
  lStack_208 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_228 = (ulong *)((long)&MACH_HEADER.magic + 1);
  uStack_220 = 0x15;
  pcStack_218 = "grpc-server-stats-bin";
  plVar9 = *pplVar6;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar9) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plStack_248 = pplVar6[1];
  plStack_250 = *pplVar6;
  plStack_238 = pplVar6[3];
  plStack_240 = pplVar6[2];
  ppuVar7 = &puStack_228;
  FUN_0038ee10();
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_250) {
    do {
      lVar8 = *plStack_250;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_250,0x10);
      if (bVar4) {
        *plStack_250 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_250[1])();
    }
  }
  puVar5 = puStack_228;
  if ((ulong *)((long)&MACH_HEADER.magic + 1) < puStack_228) {
    do {
      uVar10 = *puStack_228;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puStack_228,0x10);
      if (bVar4) {
        *puStack_228 = uVar10 - 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (uVar10 - 1 == 0) {
      (*(code *)puStack_228[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_250);
    FUN_0034b418(&puStack_228);
  }
  __Unwind_Resume();
  puVar11 = puVar5 + 1;
  uVar10 = *puVar5;
  if ((uVar10 & 1) != 0) {
    puVar11 = (ulong *)*puVar11;
  }
  if (1 < uVar10) {
    lVar8 = (uVar10 >> 1) << 5;
    do {
      FUN_0039f000(ppuVar7,puVar11);
      puVar11 = puVar11 + 4;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
  }
  return;
}



/* Entry: 0039eb44; end: 0039ec67;  */

void FUN_0039eb44(long *param_1,long **param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  long **pplVar5;
  ulong **ppuVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong *puVar10;
  long *plStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  ulong *puStack_198;
  undefined8 uStack_190;
  char *pcStack_188;
  long lStack_178;
  long *plStack_150;
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  long *plStack_128;
  undefined8 uStack_120;
  char *pcStack_118;
  long lStack_108;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_b8;
  undefined8 uStack_b0;
  char *pcStack_a8;
  long lStack_98;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_48;
  undefined8 uStack_40;
  char *pcStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar1 = *param_2;
  plVar8 = (long *)((ulong)param_2[1] & 0xff);
  if (plVar1 != (long *)0x0) {
    plVar8 = param_2[1];
  }
  if (plVar8 != (long *)0x0) {
    plStack_48 = (long *)((long)&MACH_HEADER.magic + 1);
    uStack_40 = 0xc;
    pcStack_38 = "grpc-message";
    if ((long *)((long)&MACH_HEADER.magic + 1) < plVar1) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plStack_68 = param_2[1];
    plStack_70 = *param_2;
    plStack_58 = param_2[3];
    plStack_60 = param_2[2];
    param_2 = &plStack_48;
    FUN_0038f6a4(param_1,param_2,&plStack_70);
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
    param_1 = plStack_48;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_48) {
      do {
        lVar7 = *plStack_48;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_48,0x10);
        if (bVar3) {
          *plStack_48 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_48[1])();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)param_2 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_70);
    FUN_0034b418(&plStack_48);
  }
  __Unwind_Resume(param_1);
  lStack_98 = *(long *)PTR____stack_chk_guard_00999f88;
  plStack_b8 = (long *)((long)&MACH_HEADER.magic + 1);
  uStack_b0 = 4;
  pcStack_a8 = "host";
  plVar8 = *param_2;
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
  plStack_d8 = param_2[1];
  plStack_e0 = *param_2;
  plStack_c8 = param_2[3];
  plStack_d0 = param_2[2];
  pplVar5 = &plStack_b8;
  FUN_0038f6a4();
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_e0) {
    do {
      lVar7 = *plStack_e0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_e0,0x10);
      if (bVar3) {
        *plStack_e0 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_e0[1])();
    }
  }
  plVar8 = plStack_b8;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_b8) {
    do {
      lVar7 = *plStack_b8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_b8,0x10);
      if (bVar3) {
        *plStack_b8 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_b8[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar5 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_e0);
    FUN_0034b418(&plStack_b8);
  }
  __Unwind_Resume(plVar8);
  lStack_108 = *(long *)PTR____stack_chk_guard_00999f88;
  plStack_128 = (long *)((long)&MACH_HEADER.magic + 1);
  uStack_120 = 0x19;
  pcStack_118 = "endpoint-load-metrics-bin";
  plVar8 = *pplVar5;
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
  plStack_148 = pplVar5[1];
  plStack_150 = *pplVar5;
  plStack_138 = pplVar5[3];
  plStack_140 = pplVar5[2];
  pplVar5 = &plStack_128;
  FUN_0038ee10();
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_150) {
    do {
      lVar7 = *plStack_150;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_150,0x10);
      if (bVar3) {
        *plStack_150 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_150[1])();
    }
  }
  plVar8 = plStack_128;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_128) {
    do {
      lVar7 = *plStack_128;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_128,0x10);
      if (bVar3) {
        *plStack_128 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_128[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar5 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_150);
    FUN_0034b418(&plStack_128);
  }
  __Unwind_Resume(plVar8);
  lStack_178 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_198 = (ulong *)((long)&MACH_HEADER.magic + 1);
  uStack_190 = 0x15;
  pcStack_188 = "grpc-server-stats-bin";
  plVar8 = *pplVar5;
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
  plStack_1b8 = pplVar5[1];
  plStack_1c0 = *pplVar5;
  plStack_1a8 = pplVar5[3];
  plStack_1b0 = pplVar5[2];
  ppuVar6 = &puStack_198;
  FUN_0038ee10();
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_1c0) {
    do {
      lVar7 = *plStack_1c0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_1c0,0x10);
      if (bVar3) {
        *plStack_1c0 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_1c0[1])();
    }
  }
  puVar4 = puStack_198;
  if ((ulong *)((long)&MACH_HEADER.magic + 1) < puStack_198) {
    do {
      uVar9 = *puStack_198;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puStack_198,0x10);
      if (bVar3) {
        *puStack_198 = uVar9 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar9 - 1 == 0) {
      (*(code *)puStack_198[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppuVar6 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_1c0);
    FUN_0034b418(&puStack_198);
  }
  __Unwind_Resume();
  puVar10 = puVar4 + 1;
  uVar9 = *puVar4;
  if ((uVar9 & 1) != 0) {
    puVar10 = (ulong *)*puVar10;
  }
  if (1 < uVar9) {
    lVar7 = (uVar9 >> 1) << 5;
    do {
      FUN_0039f000(ppuVar6,puVar10);
      puVar10 = puVar10 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  return;
}



/* Entry: 0039ec68; end: 0039ed7b;  */

void FUN_0039ec68(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  long **pplVar4;
  ulong **ppuVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  long *plStack_150;
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  ulong *puStack_128;
  undefined8 uStack_120;
  char *pcStack_118;
  long lStack_108;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_b8;
  undefined8 uStack_b0;
  char *pcStack_a8;
  long lStack_98;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *plStack_48;
  undefined8 uStack_40;
  char *pcStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  plStack_48 = (long *)((long)&MACH_HEADER.magic + 1);
  uStack_40 = 4;
  pcStack_38 = "host";
  plVar6 = (long *)*param_2;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar6) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_68 = param_2[1];
  plStack_70 = (long *)*param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  pplVar4 = &plStack_48;
  FUN_0038f6a4(param_1,pplVar4,&plStack_70);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_70) {
    do {
      lVar7 = *plStack_70;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
      if (bVar2) {
        *plStack_70 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_70[1])();
    }
  }
  plVar6 = plStack_48;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_48) {
    do {
      lVar7 = *plStack_48;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_48,0x10);
      if (bVar2) {
        *plStack_48 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_48[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar4 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_70);
    FUN_0034b418(&plStack_48);
  }
  __Unwind_Resume(plVar6);
  lStack_98 = *(long *)PTR____stack_chk_guard_00999f88;
  plStack_b8 = (long *)((long)&MACH_HEADER.magic + 1);
  uStack_b0 = 0x19;
  pcStack_a8 = "endpoint-load-metrics-bin";
  plVar6 = *pplVar4;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar6) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plStack_d8 = pplVar4[1];
  plStack_e0 = *pplVar4;
  plStack_c8 = pplVar4[3];
  plStack_d0 = pplVar4[2];
  pplVar4 = &plStack_b8;
  FUN_0038ee10();
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_e0) {
    do {
      lVar7 = *plStack_e0;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_e0,0x10);
      if (bVar2) {
        *plStack_e0 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_e0[1])();
    }
  }
  plVar6 = plStack_b8;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_b8) {
    do {
      lVar7 = *plStack_b8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_b8,0x10);
      if (bVar2) {
        *plStack_b8 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_b8[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar4 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_e0);
    FUN_0034b418(&plStack_b8);
  }
  __Unwind_Resume(plVar6);
  lStack_108 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_128 = (ulong *)((long)&MACH_HEADER.magic + 1);
  uStack_120 = 0x15;
  pcStack_118 = "grpc-server-stats-bin";
  plVar6 = *pplVar4;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar6) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plStack_148 = pplVar4[1];
  plStack_150 = *pplVar4;
  plStack_138 = pplVar4[3];
  plStack_140 = pplVar4[2];
  ppuVar5 = &puStack_128;
  FUN_0038ee10();
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_150) {
    do {
      lVar7 = *plStack_150;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_150,0x10);
      if (bVar2) {
        *plStack_150 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_150[1])();
    }
  }
  puVar3 = puStack_128;
  if ((ulong *)((long)&MACH_HEADER.magic + 1) < puStack_128) {
    do {
      uVar8 = *puStack_128;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puStack_128,0x10);
      if (bVar2) {
        *puStack_128 = uVar8 - 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (uVar8 - 1 == 0) {
      (*(code *)puStack_128[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppuVar5 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_150);
    FUN_0034b418(&puStack_128);
  }
  __Unwind_Resume();
  puVar9 = puVar3 + 1;
  uVar8 = *puVar3;
  if ((uVar8 & 1) != 0) {
    puVar9 = (ulong *)*puVar9;
  }
  if (1 < uVar8) {
    lVar7 = (uVar8 >> 1) << 5;
    do {
      FUN_0039f000(ppuVar5,puVar9);
      puVar9 = puVar9 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  return;
}



/* Entry: 0039ed7c; end: 0039ee8f;  */

void FUN_0039ed7c(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  long **pplVar4;
  ulong **ppuVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  ulong *puStack_b8;
  undefined8 uStack_b0;
  char *pcStack_a8;
  long lStack_98;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *plStack_48;
  undefined8 uStack_40;
  char *pcStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  plStack_48 = (long *)((long)&MACH_HEADER.magic + 1);
  uStack_40 = 0x19;
  pcStack_38 = "endpoint-load-metrics-bin";
  plVar6 = (long *)*param_2;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar6) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_68 = param_2[1];
  plStack_70 = (long *)*param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  pplVar4 = &plStack_48;
  FUN_0038ee10(param_1,pplVar4,&plStack_70);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_70) {
    do {
      lVar7 = *plStack_70;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
      if (bVar2) {
        *plStack_70 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_70[1])();
    }
  }
  plVar6 = plStack_48;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_48) {
    do {
      lVar7 = *plStack_48;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_48,0x10);
      if (bVar2) {
        *plStack_48 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_48[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar4 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_70);
    FUN_0034b418(&plStack_48);
  }
  __Unwind_Resume(plVar6);
  lStack_98 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_b8 = (ulong *)((long)&MACH_HEADER.magic + 1);
  uStack_b0 = 0x15;
  pcStack_a8 = "grpc-server-stats-bin";
  plVar6 = *pplVar4;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar6) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plStack_d8 = pplVar4[1];
  plStack_e0 = *pplVar4;
  plStack_c8 = pplVar4[3];
  plStack_d0 = pplVar4[2];
  ppuVar5 = &puStack_b8;
  FUN_0038ee10();
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_e0) {
    do {
      lVar7 = *plStack_e0;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_e0,0x10);
      if (bVar2) {
        *plStack_e0 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_e0[1])();
    }
  }
  puVar3 = puStack_b8;
  if ((ulong *)((long)&MACH_HEADER.magic + 1) < puStack_b8) {
    do {
      uVar8 = *puStack_b8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puStack_b8,0x10);
      if (bVar2) {
        *puStack_b8 = uVar8 - 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (uVar8 - 1 == 0) {
      (*(code *)puStack_b8[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppuVar5 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_e0);
    FUN_0034b418(&puStack_b8);
  }
  __Unwind_Resume();
  puVar9 = puVar3 + 1;
  uVar8 = *puVar3;
  if ((uVar8 & 1) != 0) {
    puVar9 = (ulong *)*puVar9;
  }
  if (1 < uVar8) {
    lVar7 = (uVar8 >> 1) << 5;
    do {
      FUN_0039f000(ppuVar5,puVar9);
      puVar9 = puVar9 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  return;
}



/* Entry: 0039ee90; end: 0039efa3;  */

void FUN_0039ee90(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  ulong **ppuVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong *puStack_48;
  undefined8 uStack_40;
  char *pcStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_48 = (ulong *)((long)&MACH_HEADER.magic + 1);
  uStack_40 = 0x15;
  pcStack_38 = "grpc-server-stats-bin";
  plVar5 = (long *)*param_2;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar5) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_68 = param_2[1];
  plStack_70 = (long *)*param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  ppuVar4 = &puStack_48;
  FUN_0038ee10(param_1,ppuVar4,&plStack_70);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_70) {
    do {
      lVar6 = *plStack_70;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
      if (bVar2) {
        *plStack_70 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)plStack_70[1])();
    }
  }
  puVar3 = puStack_48;
  if ((ulong *)((long)&MACH_HEADER.magic + 1) < puStack_48) {
    do {
      uVar7 = *puStack_48;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puStack_48,0x10);
      if (bVar2) {
        *puStack_48 = uVar7 - 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (uVar7 - 1 == 0) {
      (*(code *)puStack_48[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppuVar4 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_70);
    FUN_0034b418(&puStack_48);
  }
  __Unwind_Resume();
  puVar8 = puVar3 + 1;
  uVar7 = *puVar3;
  if ((uVar7 & 1) != 0) {
    puVar8 = (ulong *)*puVar8;
  }
  if (1 < uVar7) {
    lVar6 = (uVar7 >> 1) << 5;
    do {
      FUN_0039f000(ppuVar4,puVar8);
      puVar8 = puVar8 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  return;
}



/* Entry: 0039efa4; end: 0039efff;  */

void FUN_0039efa4(ulong *param_1,undefined8 param_2)

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
      FUN_0039f000(param_2,puVar2);
      puVar2 = puVar2 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  return;
}



/* Entry: 0039f000; end: 0039f1cb;  */

long * FUN_0039f000(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  long **pplVar8;
  long lVar9;
  long *plVar10;
  int *piVar11;
  long lVar12;
  ulong uStack_1b8;
  undefined8 auStack_1b0 [2];
  char cStack_199;
  ulong uStack_198;
  long *plStack_190;
  long *plStack_188;
  undefined1 ***pppuStack_180;
  code *pcStack_178;
  long *plStack_170;
  undefined1 auStack_168 [32];
  long lStack_148;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  long *plStack_120;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  long *plStack_f8;
  undefined8 uStack_f0;
  char *pcStack_e8;
  long lStack_d8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_68;
  undefined8 uStack_60;
  char *pcStack_58;
  long *plStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_b0 = *param_2;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    FUN_002971d4(&uStack_a8,param_2[1],param_2[2]);
  }
  else {
    uStack_a0 = param_2[2];
    uStack_a8 = param_2[1];
    lStack_98 = param_2[3];
  }
  FUN_003fee84(&plStack_48,&uStack_b0);
  if (lStack_98 < 0) {
    __ZdlPv(uStack_a8);
  }
  plStack_68 = (long *)((long)&MACH_HEADER.magic + 1);
  uStack_60 = 0xb;
  pcStack_58 = "lb-cost-bin";
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_48) {
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_48,0x10);
      if (bVar4) {
        *plStack_48 = *plStack_48 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_88 = uStack_40;
  plStack_90 = plStack_48;
  uStack_78 = uStack_30;
  uStack_80 = uStack_38;
  pplVar8 = &plStack_68;
  FUN_0038ee10(param_1,pplVar8,&plStack_90);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_90) {
    do {
      lVar9 = *plStack_90;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
      if (bVar4) {
        *plStack_90 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      (*(code *)plStack_90[1])();
    }
  }
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_68) {
    do {
      lVar9 = *plStack_68;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
      if (bVar4) {
        *plStack_68 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      (*(code *)plStack_68[1])();
    }
  }
  plVar10 = plStack_48;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_48) {
    do {
      lVar9 = *plStack_48;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_48,0x10);
      if (bVar4) {
        *plStack_48 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      (*(code *)plStack_48[1])();
      plVar10 = plStack_48;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return plVar10;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume(plVar10);
  pcStack_b8 = FUN_0039f1cc;
  lStack_d8 = *(long *)PTR____stack_chk_guard_00999f88;
  plStack_f8 = (long *)((long)&MACH_HEADER.magic + 1);
  uStack_f0 = 8;
  pcStack_e8 = "lb-token";
  plVar10 = *pplVar8;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar10) {
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plStack_118 = pplVar8[1];
  plStack_120 = *pplVar8;
  plStack_108 = pplVar8[3];
  plStack_110 = pplVar8[2];
  iVar7 = (int)&plStack_f8;
  puStack_c0 = &stack0xfffffffffffffff0;
  FUN_0038f6a4();
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_120) {
    do {
      lVar9 = *plStack_120;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_120,0x10);
      if (bVar4) {
        *plStack_120 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      (*(code *)plStack_120[1])();
    }
  }
  plVar10 = plStack_f8;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_f8) {
    do {
      lVar9 = *plStack_f8;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_f8,0x10);
      if (bVar4) {
        *plStack_f8 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      (*(code *)plStack_f8[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_d8) {
    return plVar10;
  }
  ___stack_chk_fail();
  if (iVar7 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_120);
    FUN_0034b418(&plStack_f8);
  }
  __Unwind_Resume();
  pcStack_128 = FUN_0039f2e0;
  lStack_148 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar9 = plVar10[2];
  *(undefined8 *)(lVar9 + 0xb0) = 0;
  if (*(undefined1 **)(lVar9 + 0xb8) != (undefined1 *)0x0) {
    **(undefined1 **)(lVar9 + 0xb8) = 1;
    *(undefined8 *)(lVar9 + 0xb8) = 0;
  }
  *(undefined1 *)(lVar9 + 0x6f1) = 1;
  *(undefined1 *)(lVar9 + 0x16e) = 1;
  lVar12 = plVar10[1];
  ppuStack_130 = &puStack_c0;
  if (*(char *)(lVar12 + 0x628) == '\0') {
    if (*(char *)(lVar9 + 0x169) == '\0') {
      FUN_0038d6e0(auStack_168,*(undefined4 *)(lVar9 + 0x9c),0,lVar9 + 0x150);
      FUN_003ecb34(lVar12 + 0x310,auStack_168);
      lVar12 = plVar10[1];
      lVar9 = plVar10[2];
      bVar4 = *(char *)(lVar12 + 0x628) == '\0';
    }
    else {
      bVar4 = true;
    }
  }
  else {
    bVar4 = false;
  }
  plStack_170 = (long *)0x0;
  FUN_003870a0(lVar12,lVar9,bVar4,1,&plStack_170);
  plVar5 = plStack_170;
  if (((ulong)plStack_170 & 1) != 0) {
    FUN_0055293c();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_148) {
    return plVar5;
  }
  ___stack_chk_fail();
  plVar6 = plVar5;
  __Unwind_Resume();
  pcStack_178 = FUN_0039f3f8;
  plStack_190 = plVar10;
  plStack_188 = plVar5;
  pppuStack_180 = &ppuStack_130;
  if (*(char *)((long)plVar6 + 0x17) < '\0') {
    if ((plVar6[1] == 4) && (*(int *)*plVar6 == 0x78696e75)) goto LAB_0039f48c;
  }
  else if (*(char *)((long)plVar6 + 0x17) == '\x04' && (int)*plVar6 == 0x78696e75) {
LAB_0039f48c:
    uVar1 = plVar6[7];
    plVar10 = (long *)plVar6[6];
    if (-1 < (char)*(byte *)((long)plVar6 + 0x47)) {
      uVar1 = (ulong)*(byte *)((long)plVar6 + 0x47);
      plVar10 = plVar6 + 6;
    }
    FUN_0039f584(&uStack_198,plVar10,uVar1,lVar9);
    bVar4 = uStack_198 == 0;
    if (uStack_198 == 0) {
      return (long *)0x1;
    }
    uStack_1b8 = uStack_198;
    if ((uStack_198 & 1) != 0) {
      piVar11 = (int *)(uStack_198 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar3) {
          *piVar11 = *piVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_003be004(auStack_1b0,&uStack_1b8);
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                 ,0x38,2,"%s");
    if (cStack_199 < '\0') {
      __ZdlPv(auStack_1b0[0]);
    }
    if ((uStack_1b8 & 1) != 0) {
      FUN_0055293c();
    }
    if ((uStack_198 & 1) == 0) {
      return (long *)(ulong)bVar4;
    }
    FUN_0055293c();
    return (long *)(ulong)bVar4;
  }
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
               ,0x31,2,"Expected \'unix\' scheme, got \'%s\'");
  return (long *)0x0;
}



/* Entry: 0039f1cc; end: 0039f2df;  */

long * FUN_0039f1cc(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  long **pplVar8;
  long *plVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  ulong uStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  ulong uStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  long *plStack_c0;
  undefined1 auStack_b8 [32];
  long lStack_98;
  undefined1 *puStack_80;
  code *pcStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *plStack_48;
  undefined8 uStack_40;
  char *pcStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  plStack_48 = (long *)((long)&MACH_HEADER.magic + 1);
  uStack_40 = 8;
  pcStack_38 = "lb-token";
  plVar9 = (long *)*param_2;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar9) {
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_68 = param_2[1];
  plStack_70 = (long *)*param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  pplVar8 = &plStack_48;
  FUN_0038f6a4(param_1,pplVar8,&plStack_70);
  iVar7 = (int)pplVar8;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_70) {
    do {
      lVar10 = *plStack_70;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
      if (bVar4) {
        *plStack_70 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)plStack_70[1])();
    }
  }
  plVar9 = plStack_48;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_48) {
    do {
      lVar10 = *plStack_48;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_48,0x10);
      if (bVar4) {
        *plStack_48 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)plStack_48[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return plVar9;
  }
  ___stack_chk_fail();
  if (iVar7 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_70);
    FUN_0034b418(&plStack_48);
  }
  __Unwind_Resume();
  pcStack_78 = FUN_0039f2e0;
  lStack_98 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar10 = plVar9[2];
  *(undefined8 *)(lVar10 + 0xb0) = 0;
  if (*(undefined1 **)(lVar10 + 0xb8) != (undefined1 *)0x0) {
    **(undefined1 **)(lVar10 + 0xb8) = 1;
    *(undefined8 *)(lVar10 + 0xb8) = 0;
  }
  *(undefined1 *)(lVar10 + 0x6f1) = 1;
  *(undefined1 *)(lVar10 + 0x16e) = 1;
  lVar12 = plVar9[1];
  puStack_80 = &stack0xfffffffffffffff0;
  if (*(char *)(lVar12 + 0x628) == '\0') {
    if (*(char *)(lVar10 + 0x169) == '\0') {
      FUN_0038d6e0(auStack_b8,*(undefined4 *)(lVar10 + 0x9c),0,lVar10 + 0x150);
      FUN_003ecb34(lVar12 + 0x310,auStack_b8);
      lVar12 = plVar9[1];
      lVar10 = plVar9[2];
      bVar4 = *(char *)(lVar12 + 0x628) == '\0';
    }
    else {
      bVar4 = true;
    }
  }
  else {
    bVar4 = false;
  }
  plStack_c0 = (long *)0x0;
  FUN_003870a0(lVar12,lVar10,bVar4,1,&plStack_c0);
  plVar5 = plStack_c0;
  if (((ulong)plStack_c0 & 1) != 0) {
    FUN_0055293c();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_98) {
    return plVar5;
  }
  ___stack_chk_fail();
  plVar6 = plVar5;
  __Unwind_Resume();
  pcStack_c8 = FUN_0039f3f8;
  plStack_e0 = plVar9;
  plStack_d8 = plVar5;
  ppuStack_d0 = &puStack_80;
  if (*(char *)((long)plVar6 + 0x17) < '\0') {
    if ((plVar6[1] == 4) && (*(int *)*plVar6 == 0x78696e75)) goto LAB_0039f48c;
  }
  else if (*(char *)((long)plVar6 + 0x17) == '\x04' && (int)*plVar6 == 0x78696e75) {
LAB_0039f48c:
    uVar1 = plVar6[7];
    plVar9 = (long *)plVar6[6];
    if (-1 < (char)*(byte *)((long)plVar6 + 0x47)) {
      uVar1 = (ulong)*(byte *)((long)plVar6 + 0x47);
      plVar9 = plVar6 + 6;
    }
    FUN_0039f584(&uStack_e8,plVar9,uVar1,lVar10);
    bVar4 = uStack_e8 == 0;
    if (uStack_e8 == 0) {
      return (long *)0x1;
    }
    uStack_108 = uStack_e8;
    if ((uStack_e8 & 1) != 0) {
      piVar11 = (int *)(uStack_e8 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar3) {
          *piVar11 = *piVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_003be004(auStack_100,&uStack_108);
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                 ,0x38,2,"%s");
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
    }
    if ((uStack_108 & 1) != 0) {
      FUN_0055293c();
    }
    if ((uStack_e8 & 1) == 0) {
      return (long *)(ulong)bVar4;
    }
    FUN_0055293c();
    return (long *)(ulong)bVar4;
  }
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
               ,0x31,2,"Expected \'unix\' scheme, got \'%s\'");
  return (long *)0x0;
}



/* Entry: 0039f2e0; end: 0039f3f7;  */

int * FUN_0039f2e0(long param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int *piVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  ulong uStack_98;
  undefined8 auStack_90 [2];
  char cStack_79;
  ulong uStack_78;
  long lStack_70;
  int *piStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  int *piStack_50;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar6 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(lVar6 + 0xb0) = 0;
  if (*(undefined1 **)(lVar6 + 0xb8) != (undefined1 *)0x0) {
    **(undefined1 **)(lVar6 + 0xb8) = 1;
    *(undefined8 *)(lVar6 + 0xb8) = 0;
  }
  *(undefined1 *)(lVar6 + 0x6f1) = 1;
  *(undefined1 *)(lVar6 + 0x16e) = 1;
  lVar8 = *(long *)(param_1 + 8);
  if (*(char *)(lVar8 + 0x628) == '\0') {
    if (*(char *)(lVar6 + 0x169) == '\0') {
      FUN_0038d6e0(auStack_48,*(undefined4 *)(lVar6 + 0x9c),0,lVar6 + 0x150);
      FUN_003ecb34(lVar8 + 0x310,auStack_48);
      lVar8 = *(long *)(param_1 + 8);
      lVar6 = *(long *)(param_1 + 0x10);
      bVar4 = *(char *)(lVar8 + 0x628) == '\0';
    }
    else {
      bVar4 = true;
    }
  }
  else {
    bVar4 = false;
  }
  piStack_50 = (int *)0x0;
  FUN_003870a0(lVar8,lVar6,bVar4,1,&piStack_50);
  piVar7 = piStack_50;
  if (((ulong)piStack_50 & 1) != 0) {
    FUN_0055293c();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return piVar7;
  }
  ___stack_chk_fail();
  piVar5 = piVar7;
  __Unwind_Resume();
  pcStack_58 = FUN_0039f3f8;
  lStack_70 = param_1;
  piStack_68 = piVar7;
  puStack_60 = &stack0xfffffffffffffff0;
  if (*(char *)((long)piVar5 + 0x17) < '\0') {
    if ((*(long *)(piVar5 + 2) == 4) && (**(int **)piVar5 == 0x78696e75)) goto LAB_0039f48c;
  }
  else if (*(char *)((long)piVar5 + 0x17) == '\x04' && *piVar5 == 0x78696e75) {
LAB_0039f48c:
    uVar1 = *(ulong *)(piVar5 + 0xe);
    piVar7 = *(int **)(piVar5 + 0xc);
    if (-1 < (char)*(byte *)((long)piVar5 + 0x47)) {
      uVar1 = (ulong)*(byte *)((long)piVar5 + 0x47);
      piVar7 = piVar5 + 0xc;
    }
    FUN_0039f584(&uStack_78,piVar7,uVar1,lVar6);
    bVar4 = uStack_78 == 0;
    if (uStack_78 == 0) {
      return (int *)0x1;
    }
    uStack_98 = uStack_78;
    if ((uStack_78 & 1) != 0) {
      piVar7 = (int *)(uStack_78 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = *piVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_003be004(auStack_90,&uStack_98);
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                 ,0x38,2,"%s");
    if (cStack_79 < '\0') {
      __ZdlPv(auStack_90[0]);
    }
    if ((uStack_98 & 1) != 0) {
      FUN_0055293c();
    }
    if ((uStack_78 & 1) == 0) {
      return (int *)(ulong)bVar4;
    }
    FUN_0055293c();
    return (int *)(ulong)bVar4;
  }
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
               ,0x31,2,"Expected \'unix\' scheme, got \'%s\'");
  return (int *)0x0;
}



/* Entry: 0039f3f8; end: 0039f583;  */

bool FUN_0039f3f8(int *param_1,undefined8 param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int *piVar5;
  ulong uStack_48;
  undefined8 auStack_40 [2];
  char cStack_29;
  ulong uStack_28;
  
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    if ((*(long *)(param_1 + 2) == 4) && (**(int **)param_1 == 0x78696e75)) goto LAB_0039f48c;
  }
  else if (*(char *)((long)param_1 + 0x17) == '\x04' && *param_1 == 0x78696e75) {
LAB_0039f48c:
    uVar1 = *(ulong *)(param_1 + 0xe);
    piVar5 = *(int **)(param_1 + 0xc);
    if (-1 < (char)*(byte *)((long)param_1 + 0x47)) {
      uVar1 = (ulong)*(byte *)((long)param_1 + 0x47);
      piVar5 = param_1 + 0xc;
    }
    FUN_0039f584(&uStack_28,piVar5,uVar1,param_2);
    bVar4 = uStack_28 == 0;
    if (uStack_28 == 0) {
      return true;
    }
    uStack_48 = uStack_28;
    if ((uStack_28 & 1) != 0) {
      piVar5 = (int *)(uStack_28 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar3) {
          *piVar5 = *piVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_003be004(auStack_40,&uStack_48);
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                 ,0x38,2,"%s");
    if (cStack_29 < '\0') {
      __ZdlPv(auStack_40[0]);
    }
    if ((uStack_48 & 1) != 0) {
      FUN_0055293c();
    }
    if ((uStack_28 & 1) == 0) {
      return bVar4;
    }
    FUN_0055293c();
    return bVar4;
  }
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
               ,0x31,2,"Expected \'unix\' scheme, got \'%s\'");
  return false;
}



/* Entry: 0039f584; end: 0039f70f;  */

long ******* FUN_0039f584(undefined8 *param_1,long *******param_2,ulong param_3,long ******param_4)

{
  long ******pppppplVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  long *******ppppppplVar6;
  long *******ppppppplVar7;
  long *******ppppppplVar8;
  int *piVar9;
  ulong uStack_158;
  undefined8 auStack_150 [2];
  char cStack_139;
  ulong uStack_138;
  long *****ppppplStack_130;
  long ******pppppplStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  long ****pppplStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 uStack_e9;
  long ******pppppplStack_e8;
  ulong uStack_e0;
  byte bStack_d1;
  long *****ppppplStack_d0;
  char *pcStack_c8;
  undefined8 uStack_c0;
  undefined1 *puStack_98;
  long lStack_90;
  undefined1 auStack_88 [32];
  char *pcStack_68;
  undefined8 uStack_60;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  *(undefined4 *)(param_4 + 0x10) = 0;
  param_4[0xd] = (long *****)0x0;
  param_4[0xc] = (long *****)0x0;
  param_4[0xf] = (long *****)0x0;
  param_4[0xe] = (long *****)0x0;
  param_4[9] = (long *****)0x0;
  param_4[8] = (long *****)0x0;
  param_4[0xb] = (long *****)0x0;
  param_4[10] = (long *****)0x0;
  param_4[5] = (long *****)0x0;
  param_4[4] = (long *****)0x0;
  param_4[7] = (long *****)0x0;
  param_4[6] = (long *****)0x0;
  param_4[1] = (long *****)0x0;
  *param_4 = (long *****)0x0;
  param_4[3] = (long *****)0x0;
  param_4[2] = (long *****)0x0;
  if (param_3 < 0x68) {
    *(undefined1 *)((long)param_4 + 1) = 1;
    ppppppplVar6 = param_2;
    ppppppplVar8 = (long *******)0x0;
    if (param_3 != 0) {
      ppppppplVar6 = (long *******)((long)param_4 + 2);
      _memmove(ppppppplVar6,param_2,param_3);
      ppppppplVar8 = param_2;
    }
    *(undefined1 *)((long)param_4 + param_3 + 2) = 0;
    *(undefined4 *)(param_4 + 0x10) = 0x6a;
    *param_1 = 0;
  }
  else {
    pcStack_68 = "Path name should not have more than ";
    uStack_60 = 0x24;
    lVar5 = 0x67;
    func_0x00574ad8(0x67,auStack_88);
    lStack_90 = lVar5 - (long)auStack_88;
    pcStack_c8 = " characters";
    uStack_c0 = 0xb;
    puStack_98 = auStack_88;
    FUN_00575ddc(&pppppplStack_e8,&pcStack_68,&puStack_98,&pcStack_c8);
    ppppppplVar8 = (long *******)pppppplStack_e8;
    if (-1 < (char)bStack_d1) {
      uStack_e0 = (ulong)bStack_d1;
      ppppppplVar8 = &pppppplStack_e8;
    }
    uStack_100 = 0;
    uStack_f8 = 0;
    pppplStack_108 = (long ****)0x0;
    param_4 = (long ******)&pppplStack_108;
    FUN_003b646c(param_1,2,ppppppplVar8,uStack_e0,&uStack_e9,&pppplStack_108);
    ppppppplVar6 = (long *******)&ppppplStack_d0;
    ppppplStack_d0 = (long *****)param_4;
    FUN_0033d548();
    if ((char)bStack_d1 < '\0') {
      ppppppplVar6 = (long *******)pppppplStack_e8;
      __ZdlPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return ppppppplVar6;
  }
  ___stack_chk_fail();
  ppppplStack_d0 = (long *****)param_4;
  FUN_0033d548(&ppppplStack_d0);
  if ((char)bStack_d1 < '\0') {
    __ZdlPv(pppppplStack_e8);
  }
  ppppppplVar7 = ppppppplVar6;
  __Unwind_Resume();
  pcStack_118 = FUN_0039f710;
  ppppplStack_130 = (long *****)param_4;
  pppppplStack_128 = (long ******)ppppppplVar6;
  puStack_120 = &stack0xfffffffffffffff0;
  if (*(char *)((long)ppppppplVar7 + 0x17) < '\0') {
    if ((ppppppplVar7[1] == (long ******)0xd) &&
       (**ppppppplVar7 == (long *****)0x7362612d78696e75 &&
        *(long *)((long)*ppppppplVar7 + 5) == 0x7463617274736261)) goto LAB_0039f7e8;
  }
  else if ((*(char *)((long)ppppppplVar7 + 0x17) == '\r') &&
          (*ppppppplVar7 == (long ******)0x7362612d78696e75 &&
           *(long *)((long)ppppppplVar7 + 5) == 0x7463617274736261)) {
LAB_0039f7e8:
    pppppplVar1 = ppppppplVar7[7];
    ppppppplVar6 = (long *******)ppppppplVar7[6];
    if (-1 < (char)*(byte *)((long)ppppppplVar7 + 0x47)) {
      pppppplVar1 = (long ******)(ulong)*(byte *)((long)ppppppplVar7 + 0x47);
      ppppppplVar6 = ppppppplVar7 + 6;
    }
    FUN_0039f8e0(&uStack_138,ppppppplVar6,pppppplVar1,ppppppplVar8);
    bVar4 = uStack_138 == 0;
    if (uStack_138 == 0) {
      return (long *******)0x1;
    }
    uStack_158 = uStack_138;
    if ((uStack_138 & 1) != 0) {
      piVar9 = (int *)(uStack_138 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = *piVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_003be004(auStack_150,&uStack_158);
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                 ,0x49,2,"%s");
    if (cStack_139 < '\0') {
      __ZdlPv(auStack_150[0]);
    }
    if ((uStack_158 & 1) != 0) {
      FUN_0055293c();
    }
    if ((uStack_138 & 1) == 0) {
      return (long *******)(ulong)bVar4;
    }
    FUN_0055293c();
    return (long *******)(ulong)bVar4;
  }
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
               ,0x42,2,"Expected \'unix-abstract\' scheme, got \'%s\'");
  return (long *******)0x0;
}



/* Entry: 0039f710; end: 0039f8df;  */

bool FUN_0039f710(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  bool bVar5;
  int *piVar6;
  ulong uStack_48;
  undefined8 auStack_40 [2];
  char cStack_29;
  ulong uStack_28;
  
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    if ((param_1[1] == 0xd) &&
       (*(long *)*param_1 == 0x7362612d78696e75 && *(long *)(*param_1 + 5) == 0x7463617274736261))
    goto LAB_0039f7e8;
  }
  else if ((*(char *)((long)param_1 + 0x17) == '\r') &&
          (*param_1 == 0x7362612d78696e75 && *(long *)((long)param_1 + 5) == 0x7463617274736261)) {
LAB_0039f7e8:
    uVar1 = param_1[7];
    plVar4 = (long *)param_1[6];
    if (-1 < (char)*(byte *)((long)param_1 + 0x47)) {
      uVar1 = (ulong)*(byte *)((long)param_1 + 0x47);
      plVar4 = param_1 + 6;
    }
    FUN_0039f8e0(&uStack_28,plVar4,uVar1,param_2);
    bVar5 = uStack_28 == 0;
    if (uStack_28 == 0) {
      return true;
    }
    uStack_48 = uStack_28;
    if ((uStack_28 & 1) != 0) {
      piVar6 = (int *)(uStack_28 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = *piVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_003be004(auStack_40,&uStack_48);
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                 ,0x49,2,"%s");
    if (cStack_29 < '\0') {
      __ZdlPv(auStack_40[0]);
    }
    if ((uStack_48 & 1) != 0) {
      FUN_0055293c();
    }
    if ((uStack_28 & 1) == 0) {
      return bVar5;
    }
    FUN_0055293c();
    return bVar5;
  }
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
               ,0x42,2,"Expected \'unix-abstract\' scheme, got \'%s\'");
  return false;
}



/* Entry: 0039f8e0; end: 0039fa63;  */

/* WARNING: Removing unreachable block (ram,0x0039fca4) */

char * FUN_0039f8e0(undefined8 *param_1,char *param_2,section *param_3,section *param_4,int param_5)

{
  ulong uVar1;
  code *pcVar2;
  undefined2 uVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  undefined8 ******ppppppuVar7;
  char *pcVar8;
  undefined8 uVar9;
  section *psVar10;
  char *pcVar11;
  int iStack_18c;
  undefined8 *****pppppuStack_188;
  char *pcStack_180;
  undefined8 uStack_178;
  undefined8 *****pppppuStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_108 [56];
  section *psStack_d0;
  char *pcStack_c8;
  undefined8 uStack_c0;
  undefined1 *puStack_98;
  long lStack_90;
  undefined1 auStack_88 [32];
  char *pcStack_68;
  undefined8 uStack_60;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  param_4[1].offset = 0;
  param_4[1].segname[8] = '\0';
  param_4[1].segname[9] = '\0';
  param_4[1].segname[10] = '\0';
  param_4[1].segname[0xb] = '\0';
  param_4[1].segname[0xc] = '\0';
  param_4[1].segname[0xd] = '\0';
  param_4[1].segname[0xe] = '\0';
  param_4[1].segname[0xf] = '\0';
  param_4[1].segname[0] = '\0';
  param_4[1].segname[1] = '\0';
  param_4[1].segname[2] = '\0';
  param_4[1].segname[3] = '\0';
  param_4[1].segname[4] = '\0';
  param_4[1].segname[5] = '\0';
  param_4[1].segname[6] = '\0';
  param_4[1].segname[7] = '\0';
  param_4[1].size = 0;
  param_4[1].addr = 0;
  param_4->reserved2 = 0;
  param_4->reserved3 = 0;
  param_4->flags = 0;
  param_4->reserved1 = 0;
  param_4[1].sectname[8] = '\0';
  param_4[1].sectname[9] = '\0';
  param_4[1].sectname[10] = '\0';
  param_4[1].sectname[0xb] = '\0';
  param_4[1].sectname[0xc] = '\0';
  param_4[1].sectname[0xd] = '\0';
  param_4[1].sectname[0xe] = '\0';
  param_4[1].sectname[0xf] = '\0';
  param_4[1].sectname[0] = '\0';
  param_4[1].sectname[1] = '\0';
  param_4[1].sectname[2] = '\0';
  param_4[1].sectname[3] = '\0';
  param_4[1].sectname[4] = '\0';
  param_4[1].sectname[5] = '\0';
  param_4[1].sectname[6] = '\0';
  param_4[1].sectname[7] = '\0';
  param_4->size = 0;
  param_4->addr = 0;
  param_4->reloff = 0;
  param_4->nrelocs = 0;
  param_4->offset = 0;
  param_4->align = 0;
  param_4->sectname[8] = '\0';
  param_4->sectname[9] = '\0';
  param_4->sectname[10] = '\0';
  param_4->sectname[0xb] = '\0';
  param_4->sectname[0xc] = '\0';
  param_4->sectname[0xd] = '\0';
  param_4->sectname[0xe] = '\0';
  param_4->sectname[0xf] = '\0';
  param_4->sectname[0] = '\0';
  param_4->sectname[1] = '\0';
  param_4->sectname[2] = '\0';
  param_4->sectname[3] = '\0';
  param_4->sectname[4] = '\0';
  param_4->sectname[5] = '\0';
  param_4->sectname[6] = '\0';
  param_4->sectname[7] = '\0';
  param_4->segname[8] = '\0';
  param_4->segname[9] = '\0';
  param_4->segname[10] = '\0';
  param_4->segname[0xb] = '\0';
  param_4->segname[0xc] = '\0';
  param_4->segname[0xd] = '\0';
  param_4->segname[0xe] = '\0';
  param_4->segname[0xf] = '\0';
  param_4->segname[0] = '\0';
  param_4->segname[1] = '\0';
  param_4->segname[2] = '\0';
  param_4->segname[3] = '\0';
  param_4->segname[4] = '\0';
  param_4->segname[5] = '\0';
  param_4->segname[6] = '\0';
  param_4->segname[7] = '\0';
  if (param_3 < &section_00000068) {
    param_4->sectname[1] = '\x01';
    param_4->sectname[2] = '\0';
    pcVar11 = param_2;
    pcVar8 = (char *)0x0;
    psVar10 = param_4;
    if (param_3 != (section *)0x0) {
      pcVar11 = param_4->sectname + 3;
      psVar10 = param_3;
      _memmove();
      pcVar8 = param_2;
    }
    param_4[1].offset = (int)param_3 + 2;
    *param_1 = 0;
  }
  else {
    pcStack_68 = "Path name should not have more than ";
    uStack_60 = 0x24;
    lVar5 = 0x67;
    func_0x00574ad8(0x67,auStack_88);
    lStack_90 = lVar5 - (long)auStack_88;
    pcStack_c8 = " characters";
    uStack_c0._0_4_ = 0xb;
    uStack_c0._4_4_ = 0;
    puStack_98 = auStack_88;
    FUN_00575ddc(auStack_108 + 0x20,&pcStack_68,&puStack_98,&pcStack_c8);
    psVar10 = (section *)auStack_108._40_8_;
    pcVar8 = (char *)auStack_108._32_8_;
    if (-1 < (char)auStack_108[0x37]) {
      psVar10 = (section *)(ulong)auStack_108[0x37];
      pcVar8 = auStack_108 + 0x20;
    }
    auStack_108[8] = '\0';
    auStack_108[9] = '\0';
    auStack_108[10] = '\0';
    auStack_108[0xb] = '\0';
    auStack_108[0xc] = '\0';
    auStack_108[0xd] = '\0';
    auStack_108[0xe] = '\0';
    auStack_108[0xf] = '\0';
    auStack_108[0x10] = '\0';
    auStack_108[0x11] = '\0';
    auStack_108[0x12] = '\0';
    auStack_108[0x13] = '\0';
    auStack_108[0x14] = '\0';
    auStack_108[0x15] = '\0';
    auStack_108[0x16] = '\0';
    auStack_108[0x17] = '\0';
    auStack_108[0] = '\0';
    auStack_108[1] = '\0';
    auStack_108[2] = '\0';
    auStack_108[3] = '\0';
    auStack_108[4] = '\0';
    auStack_108[5] = '\0';
    auStack_108[6] = '\0';
    auStack_108[7] = '\0';
    param_4 = (section *)auStack_108;
    param_5 = (int)auStack_108 + 0x1f;
    FUN_003b646c(param_1,2);
    pcVar11 = (char *)&psStack_d0;
    psStack_d0 = param_4;
    FUN_0033d548();
    if ((char)auStack_108[0x37] < '\0') {
      pcVar11 = (char *)auStack_108._32_8_;
      __ZdlPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return pcVar11;
  }
  ___stack_chk_fail();
  psStack_d0 = param_4;
  FUN_0033d548(&psStack_d0);
  if ((char)auStack_108[0x37] < '\0') {
    __ZdlPv(auStack_108._32_8_);
  }
  __Unwind_Resume();
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  pppppuStack_170 = (undefined8 ******)0x0;
  lStack_168 = 0;
  uStack_160 = 0;
  pcVar6 = pcVar11;
  func_0x0033b110();
  if (((ulong)pcVar6 & 1) == 0) {
    if (param_5 != 0) {
      if ((char *)0x7ffffffffffffff7 < pcVar8) {
        func_0x0033b318(&pppppuStack_188);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x39fcd0);
        (*pcVar2)();
      }
      if ((undefined1 *)((long)&MACH_HEADER.sizeofcmds + 2) < pcVar8) {
        uVar1 = ((ulong)pcVar8 & 0xfffffffffffffff8) + 8;
        if (((ulong)pcVar8 | 7) != 0x17) {
          uVar1 = (ulong)pcVar8 | 7;
        }
        ppppppuVar7 = (undefined8 ******)(uVar1 + 1);
        __Znwm();
        uStack_178 = uVar1 + 1 | 0x8000000000000000;
        pppppuStack_188 = ppppppuVar7;
        pcStack_180 = pcVar8;
LAB_0039fb84:
        _memmove(ppppppuVar7,pcVar11,pcVar8);
      }
      else {
        uStack_178 = CONCAT17((char)pcVar8,(undefined7)uStack_178);
        ppppppuVar7 = &pppppuStack_188;
        if (pcVar8 != (char *)0x0) goto LAB_0039fb84;
      }
      *(char *)((long)ppppppuVar7 + (long)pcVar8) = '\0';
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                   ,0x9a,2,"Failed gpr_split_host_port(%s, ...)");
      if ((long)uStack_178 < 0) {
        __ZdlPv(pppppuStack_188);
      }
    }
  }
  else {
    psVar10[1].segname[8] = '\0';
    psVar10[1].segname[9] = '\0';
    psVar10[1].segname[10] = '\0';
    psVar10[1].segname[0xb] = '\0';
    psVar10[1].segname[0xc] = '\0';
    psVar10[1].segname[0xd] = '\0';
    psVar10[1].segname[0xe] = '\0';
    psVar10[1].segname[0xf] = '\0';
    psVar10[1].segname[0] = '\0';
    psVar10[1].segname[1] = '\0';
    psVar10[1].segname[2] = '\0';
    psVar10[1].segname[3] = '\0';
    psVar10[1].segname[4] = '\0';
    psVar10[1].segname[5] = '\0';
    psVar10[1].segname[6] = '\0';
    psVar10[1].segname[7] = '\0';
    psVar10[1].size = 0;
    psVar10[1].addr = 0;
    psVar10->reserved2 = 0;
    psVar10->reserved3 = 0;
    psVar10->flags = 0;
    psVar10->reserved1 = 0;
    psVar10[1].sectname[8] = '\0';
    psVar10[1].sectname[9] = '\0';
    psVar10[1].sectname[10] = '\0';
    psVar10[1].sectname[0xb] = '\0';
    psVar10[1].sectname[0xc] = '\0';
    psVar10[1].sectname[0xd] = '\0';
    psVar10[1].sectname[0xe] = '\0';
    psVar10[1].sectname[0xf] = '\0';
    psVar10[1].sectname[0] = '\0';
    psVar10[1].sectname[1] = '\0';
    psVar10[1].sectname[2] = '\0';
    psVar10[1].sectname[3] = '\0';
    psVar10[1].sectname[4] = '\0';
    psVar10[1].sectname[5] = '\0';
    psVar10[1].sectname[6] = '\0';
    psVar10[1].sectname[7] = '\0';
    psVar10->size = 0;
    psVar10->addr = 0;
    psVar10->reloff = 0;
    psVar10->nrelocs = 0;
    psVar10->offset = 0;
    psVar10->align = 0;
    psVar10->sectname[8] = '\0';
    psVar10->sectname[9] = '\0';
    psVar10->sectname[10] = '\0';
    psVar10->sectname[0xb] = '\0';
    psVar10->sectname[0xc] = '\0';
    psVar10->sectname[0xd] = '\0';
    psVar10->sectname[0xe] = '\0';
    psVar10->sectname[0xf] = '\0';
    psVar10->sectname[0] = '\0';
    psVar10->sectname[1] = '\0';
    psVar10->sectname[2] = '\0';
    psVar10->sectname[3] = '\0';
    psVar10->sectname[4] = '\0';
    psVar10->sectname[5] = '\0';
    psVar10->sectname[6] = '\0';
    psVar10->sectname[7] = '\0';
    psVar10->segname[8] = '\0';
    psVar10->segname[9] = '\0';
    psVar10->segname[10] = '\0';
    psVar10->segname[0xb] = '\0';
    psVar10->segname[0xc] = '\0';
    psVar10->segname[0xd] = '\0';
    psVar10->segname[0xe] = '\0';
    psVar10->segname[0xf] = '\0';
    psVar10->segname[0] = '\0';
    psVar10->segname[1] = '\0';
    psVar10->segname[2] = '\0';
    psVar10->segname[3] = '\0';
    psVar10->segname[4] = '\0';
    psVar10->segname[5] = '\0';
    psVar10->segname[6] = '\0';
    psVar10->segname[7] = '\0';
    psVar10[1].offset = 0x10;
    psVar10->sectname[1] = '\x02';
    iVar4 = 2;
    func_0x003c4da8(2,&uStack_158,psVar10->sectname + 4);
    if (iVar4 == 0) {
      if (param_5 == 0) goto LAB_0039fc88;
      pcVar11 = "invalid ipv4 address: \'%s\'";
      uVar9 = 0xa6;
    }
    else {
      if (uStack_160 < 0) {
        ppppppuVar7 = (undefined8 ******)pppppuStack_170;
        if (lStack_168 == 0) goto LAB_0039fc2c;
      }
      else {
        if (uStack_160._7_1_ == '\0') {
LAB_0039fc2c:
          if (param_5 != 0) {
            FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                         ,0xac,2,"no port given for ipv4 scheme");
          }
          goto LAB_0039fc88;
        }
        ppppppuVar7 = &pppppuStack_170;
      }
      _sscanf(ppppppuVar7,"%d");
      if ((((int)ppppppuVar7 == 1) && (-1 < iStack_18c)) && (iStack_18c < 0x10000)) {
        uVar3 = (undefined2)iStack_18c;
        func_0x003c4d98();
        *(undefined2 *)(psVar10->sectname + 2) = uVar3;
        pcVar11 = (char *)((long)&MACH_HEADER.magic + 1);
        goto LAB_0039fc8c;
      }
      if (param_5 == 0) goto LAB_0039fc88;
      pcVar11 = "invalid ipv4 port: \'%s\'";
      uVar9 = 0xb2;
    }
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                 ,uVar9,2,pcVar11);
  }
LAB_0039fc88:
  pcVar11 = (char *)0x0;
LAB_0039fc8c:
  if (uStack_160 < 0) {
    __ZdlPv(pppppuStack_170);
  }
  return pcVar11;
}



/* Entry: 0039fa64; end: 0039fd1b;  */

/* WARNING: Removing unreachable block (ram,0x0039fca4) */

undefined8 FUN_0039fa64(ulong param_1,ulong param_2,undefined8 *param_3,int param_4)

{
  code *pcVar1;
  undefined2 uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 ****ppppuVar5;
  char *pcVar6;
  undefined8 uVar7;
  int iStack_7c;
  undefined8 ***pppuStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 ***pppuStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  pppuStack_60 = (undefined8 ****)0x0;
  lStack_58 = 0;
  uStack_50 = 0;
  uVar4 = param_1;
  func_0x0033b110(param_1,param_2,&uStack_48,&pppuStack_60);
  if ((uVar4 & 1) == 0) {
    if (param_4 != 0) {
      if (0x7ffffffffffffff7 < param_2) {
        func_0x0033b318(&pppuStack_78);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x39fcd0);
        (*pcVar1)();
      }
      if (param_2 < 0x17) {
        uStack_68 = CONCAT17((char)param_2,(undefined7)uStack_68);
        ppppuVar5 = &pppuStack_78;
        if (param_2 != 0) goto LAB_0039fb84;
      }
      else {
        uVar4 = (param_2 & 0xfffffffffffffff8) + 8;
        if ((param_2 | 7) != 0x17) {
          uVar4 = param_2 | 7;
        }
        ppppuVar5 = (undefined8 ****)(uVar4 + 1);
        __Znwm();
        uStack_68 = uVar4 + 1 | 0x8000000000000000;
        pppuStack_78 = ppppuVar5;
        uStack_70 = param_2;
LAB_0039fb84:
        _memmove(ppppuVar5,param_1,param_2);
      }
      *(undefined1 *)((long)ppppuVar5 + param_2) = 0;
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                   ,0x9a,2,"Failed gpr_split_host_port(%s, ...)");
      if ((long)uStack_68 < 0) {
        __ZdlPv(pppuStack_78);
      }
    }
  }
  else {
    param_3[0xd] = 0;
    param_3[0xc] = 0;
    param_3[0xf] = 0;
    param_3[0xe] = 0;
    param_3[9] = 0;
    param_3[8] = 0;
    param_3[0xb] = 0;
    param_3[10] = 0;
    param_3[5] = 0;
    param_3[4] = 0;
    param_3[7] = 0;
    param_3[6] = 0;
    param_3[1] = 0;
    *param_3 = 0;
    param_3[3] = 0;
    param_3[2] = 0;
    *(undefined4 *)(param_3 + 0x10) = 0x10;
    *(undefined1 *)((long)param_3 + 1) = 2;
    iVar3 = 2;
    func_0x003c4da8(2,&uStack_48,(long)param_3 + 4);
    if (iVar3 == 0) {
      if (param_4 == 0) goto LAB_0039fc88;
      pcVar6 = "invalid ipv4 address: \'%s\'";
      uVar7 = 0xa6;
    }
    else {
      if (uStack_50 < 0) {
        ppppuVar5 = (undefined8 ****)pppuStack_60;
        if (lStack_58 == 0) goto LAB_0039fc2c;
      }
      else {
        if (uStack_50._7_1_ == '\0') {
LAB_0039fc2c:
          if (param_4 != 0) {
            FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                         ,0xac,2,"no port given for ipv4 scheme");
          }
          goto LAB_0039fc88;
        }
        ppppuVar5 = &pppuStack_60;
      }
      _sscanf(ppppuVar5,"%d");
      if ((((int)ppppuVar5 == 1) && (-1 < iStack_7c)) && (iStack_7c < 0x10000)) {
        uVar2 = (undefined2)iStack_7c;
        func_0x003c4d98();
        *(undefined2 *)((long)param_3 + 2) = uVar2;
        uVar7 = 1;
        goto LAB_0039fc8c;
      }
      if (param_4 == 0) goto LAB_0039fc88;
      pcVar6 = "invalid ipv4 port: \'%s\'";
      uVar7 = 0xb2;
    }
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                 ,uVar7,2,pcVar6);
  }
LAB_0039fc88:
  uVar7 = 0;
LAB_0039fc8c:
  if (uStack_50 < 0) {
    __ZdlPv(pppuStack_60);
  }
  return uVar7;
}



/* Entry: 0039fd1c; end: 0039fdef;  */

/* WARNING: Removing unreachable block (ram,0x0039fca4) */

undefined8 FUN_0039fd1c(int *param_1,undefined8 *param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined2 uVar3;
  int iVar4;
  int *piVar5;
  undefined8 *****pppppuVar6;
  int *piVar7;
  ulong uVar8;
  char *pcVar9;
  undefined8 uVar10;
  int iStack_7c;
  undefined8 ****ppppuStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 ****ppppuStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    if ((*(long *)(param_1 + 2) != 4) || (**(int **)param_1 != 0x34767069)) goto LAB_0039fd74;
  }
  else if (*(char *)((long)param_1 + 0x17) != '\x04' || *param_1 != 0x34767069) {
LAB_0039fd74:
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                 ,0xbe,2,"Expected \'ipv4\' scheme, got \'%s\'");
    return 0;
  }
  uVar8 = *(ulong *)(param_1 + 0xe);
  piVar7 = *(int **)(param_1 + 0xc);
  if (-1 < (char)*(byte *)((long)param_1 + 0x47)) {
    uVar8 = (ulong)*(byte *)((long)param_1 + 0x47);
    piVar7 = param_1 + 0xc;
  }
  if (uVar8 == 0) {
    uVar8 = 0;
  }
  else if ((char)*piVar7 == '/') {
    piVar7 = (int *)((long)piVar7 + 1);
    uVar8 = uVar8 - 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  ppppuStack_60 = (undefined8 *****)0x0;
  lStack_58 = 0;
  uStack_50 = 0;
  piVar5 = piVar7;
  func_0x0033b110(piVar7,uVar8,&uStack_48,&ppppuStack_60);
  if (((ulong)piVar5 & 1) == 0) {
    if (0x7ffffffffffffff7 < uVar8) {
      func_0x0033b318(&ppppuStack_78);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x39fcd0);
      (*pcVar2)();
    }
    if (uVar8 < 0x17) {
      uStack_68 = CONCAT17((char)uVar8,(undefined7)uStack_68);
      pppppuVar6 = &ppppuStack_78;
      if (uVar8 != 0) goto LAB_0039fb84;
    }
    else {
      uVar1 = (uVar8 & 0xfffffffffffffff8) + 8;
      if ((uVar8 | 7) != 0x17) {
        uVar1 = uVar8 | 7;
      }
      pppppuVar6 = (undefined8 *****)(uVar1 + 1);
      __Znwm();
      uStack_68 = uVar1 + 1 | 0x8000000000000000;
      ppppuStack_78 = pppppuVar6;
      uStack_70 = uVar8;
LAB_0039fb84:
      _memmove(pppppuVar6,piVar7,uVar8);
    }
    *(undefined1 *)((long)pppppuVar6 + uVar8) = 0;
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                 ,0x9a,2,"Failed gpr_split_host_port(%s, ...)");
    if ((long)uStack_68 < 0) {
      __ZdlPv(ppppuStack_78);
    }
  }
  else {
    param_2[0xd] = 0;
    param_2[0xc] = 0;
    param_2[0xf] = 0;
    param_2[0xe] = 0;
    param_2[9] = 0;
    param_2[8] = 0;
    param_2[0xb] = 0;
    param_2[10] = 0;
    param_2[5] = 0;
    param_2[4] = 0;
    param_2[7] = 0;
    param_2[6] = 0;
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    *(undefined4 *)(param_2 + 0x10) = 0x10;
    *(undefined1 *)((long)param_2 + 1) = 2;
    iVar4 = 2;
    func_0x003c4da8(2,&uStack_48,(long)param_2 + 4);
    if (iVar4 == 0) {
      pcVar9 = "invalid ipv4 address: \'%s\'";
      uVar10 = 0xa6;
    }
    else {
      if (-1 < uStack_50) {
        if (uStack_50._7_1_ != '\0') {
          pppppuVar6 = &ppppuStack_60;
          goto LAB_0039fbec;
        }
code_r0x0039fc30:
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                     ,0xac,2,"no port given for ipv4 scheme");
        goto LAB_0039fc88;
      }
      pppppuVar6 = (undefined8 *****)ppppuStack_60;
      if (lStack_58 == 0) goto code_r0x0039fc30;
LAB_0039fbec:
      _sscanf(pppppuVar6,"%d");
      if ((((int)pppppuVar6 == 1) && (-1 < iStack_7c)) && (iStack_7c < 0x10000)) {
        uVar3 = (undefined2)iStack_7c;
        func_0x003c4d98();
        *(undefined2 *)((long)param_2 + 2) = uVar3;
        uVar10 = 1;
        goto LAB_0039fc8c;
      }
      pcVar9 = "invalid ipv4 port: \'%s\'";
      uVar10 = 0xb2;
    }
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                 ,uVar10,2,pcVar9);
  }
LAB_0039fc88:
  uVar10 = 0;
LAB_0039fc8c:
  if (uStack_50 < 0) {
    __ZdlPv(ppppuStack_60);
  }
  return uVar10;
}



/* Entry: 0039fdf0; end: 003a024b;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0039fdf0(ulong param_1,ulong param_2,undefined8 *param_3,uint param_4)

{
  ulong uVar1;
  undefined8 *******pppppppuVar2;
  code *pcVar3;
  undefined2 uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *******pppppppuVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  undefined8 uVar11;
  int iStack_b0;
  int iStack_ac;
  undefined8 *******pppppppuStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 *******pppppppuStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 *******pppppppuStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pppppppuStack_90 = (undefined8 *******)0x0;
  uStack_88 = 0;
  uStack_80 = 0;
  pppppppuStack_a8 = (undefined8 *******)0x0;
  lStack_a0 = 0;
  uStack_98 = 0;
  uVar6 = param_1;
  func_0x0033b110(param_1,param_2,&pppppppuStack_90,&pppppppuStack_a8);
  if ((uVar6 & 1) == 0) {
    if (param_4 == 0) goto LAB_003a0164;
    if (param_2 < 0x7ffffffffffffff8) {
      if (param_2 < 0x17) {
        uStack_68 = CONCAT17((char)param_2,(undefined7)uStack_68);
        pppppppuVar7 = &pppppppuStack_78;
        if (param_2 != 0) goto LAB_0039ff84;
      }
      else {
        uVar6 = (param_2 & 0xfffffffffffffff8) + 8;
        if ((param_2 | 7) != 0x17) {
          uVar6 = param_2 | 7;
        }
        pppppppuVar7 = (undefined8 *******)(uVar6 + 1);
        __Znwm();
        uStack_68 = uVar6 + 1 | 0x8000000000000000;
        pppppppuStack_78 = pppppppuVar7;
        uStack_70 = param_2;
LAB_0039ff84:
        _memmove(pppppppuVar7,param_1,param_2);
      }
      *(undefined1 *)((long)pppppppuVar7 + param_2) = 0;
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                   ,0xce,2,"Failed gpr_split_host_port(%s, ...)");
      if ((long)uStack_68 < 0) {
        __ZdlPv(pppppppuStack_78);
      }
      goto LAB_003a0164;
    }
  }
  else {
    param_3[0xd] = 0;
    param_3[0xc] = 0;
    param_3[0xf] = 0;
    param_3[0xe] = 0;
    param_3[9] = 0;
    param_3[8] = 0;
    param_3[0xb] = 0;
    param_3[10] = 0;
    param_3[5] = 0;
    param_3[4] = 0;
    param_3[7] = 0;
    param_3[6] = 0;
    param_3[1] = 0;
    *param_3 = 0;
    param_3[3] = 0;
    param_3[2] = 0;
    *(undefined4 *)(param_3 + 0x10) = 0x1c;
    *(undefined1 *)((long)param_3 + 1) = 0x1e;
    uVar6 = uStack_88;
    pppppppuVar7 = pppppppuStack_90;
    if (-1 < (long)uStack_80) {
      uVar6 = uStack_80 >> 0x38;
      pppppppuVar7 = &pppppppuStack_90;
    }
    FUN_00339bcc(pppppppuVar7,0x25,uVar6);
    if (pppppppuVar7 == (undefined8 *******)0x0) {
      pppppppuVar7 = pppppppuStack_90;
      if (-1 < (long)uStack_80) {
        pppppppuVar7 = &pppppppuStack_90;
      }
      iVar5 = 0x1e;
      func_0x003c4da8(0x1e,pppppppuVar7,param_3 + 1);
      if (iVar5 == 0) {
        if (param_4 == 0) goto LAB_003a0164;
        pcVar10 = "invalid ipv6 address: \'%s\'";
        uVar11 = 0x104;
LAB_003a012c:
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                     ,uVar11,2,pcVar10);
        goto LAB_003a0164;
      }
LAB_003a0084:
      if (uStack_98 < 0) {
        pppppppuVar7 = pppppppuStack_a8;
        if (lStack_a0 == 0) goto LAB_003a00e4;
      }
      else {
        if (uStack_98._7_1_ == '\0') {
LAB_003a00e4:
          if (param_4 != 0) {
            FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                         ,0x10b,2,"no port given for ipv6 scheme");
          }
          goto LAB_003a0164;
        }
        pppppppuVar7 = &pppppppuStack_a8;
      }
      _sscanf(pppppppuVar7,"%d");
      if ((((int)pppppppuVar7 != 1) || (iStack_b0 < 0)) || (0xffff < iStack_b0)) {
        if (param_4 == 0) goto LAB_003a0164;
        pcVar10 = "invalid ipv6 port: \'%s\'";
        uVar11 = 0x111;
        goto LAB_003a012c;
      }
      uVar4 = (undefined2)iStack_b0;
      func_0x003c4d98();
      *(undefined2 *)((long)param_3 + 2) = uVar4;
      uVar11 = 1;
    }
    else {
      pppppppuVar2 = pppppppuStack_90;
      if (-1 < (long)uStack_80) {
        pppppppuVar2 = &pppppppuStack_90;
      }
      if (pppppppuVar7 < pppppppuVar2) {
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                     ,0xdc,2,"assertion failed: %s");
        _abort();
        goto LAB_003a01f8;
      }
      uVar6 = (long)pppppppuVar7 - (long)pppppppuVar2;
      if (uVar6 < 0x2f) {
        iStack_ac = 0;
        _strncpy(&pppppppuStack_78,pppppppuVar2,uVar6);
        *(undefined1 *)((long)&pppppppuStack_78 + uVar6) = 0;
        iVar5 = 0x1e;
        func_0x003c4da8(0x1e,&pppppppuStack_78,param_3 + 1);
        if (iVar5 != 0) {
          lVar9 = (long)pppppppuVar7 + 1;
          uVar1 = uStack_88;
          if (-1 < (long)uStack_80) {
            uVar1 = uStack_80 >> 0x38;
          }
          lVar8 = lVar9;
          FUN_003398d8(lVar9,uVar1 + ~uVar6,&iStack_ac);
          if ((int)lVar8 == 0) {
            FUN_003c2d04();
            iStack_ac = (int)lVar9;
            if (iStack_ac == 0) {
              pcVar10 = "Invalid interface name: \'%s\'. Non-numeric and failed if_nametoindex.";
              uVar11 = 0xf8;
              goto LAB_003a0150;
            }
          }
          *(int *)(param_3 + 3) = iStack_ac;
          goto LAB_003a0084;
        }
        if ((param_4 & 1) != 0) {
          pcVar10 = "invalid ipv6 address: \'%s\'";
          uVar11 = 0xf0;
LAB_003a0150:
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                       ,uVar11,2,pcVar10);
        }
      }
      else {
        iStack_ac = 0;
        if (param_4 != 0) {
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                       ,0xe4,2,
                       "invalid ipv6 address length %zu. Length cannot be greater than GRPC_INET6_ADDRSTRLEN i.e %d)"
                      );
        }
      }
LAB_003a0164:
      uVar11 = 0;
    }
    if (uStack_98 < 0) {
      __ZdlPv(pppppppuStack_a8);
    }
    if ((long)uStack_80 < 0) {
      __ZdlPv(pppppppuStack_90);
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
      return uVar11;
    }
    ___stack_chk_fail();
  }
  func_0x0033b318(&pppppppuStack_78);
LAB_003a01f8:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x3a01fc);
  (*pcVar3)();
}



/* Entry: 003a024c; end: 003a04bb;  */

undefined8 FUN_003a024c(int *param_1,undefined8 *param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined2 uVar3;
  int iVar4;
  int *piVar5;
  undefined8 *****pppppuVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  undefined8 *****pppppuVar10;
  ulong uVar11;
  char *pcVar12;
  undefined8 uVar13;
  int iStack_b0;
  int iStack_ac;
  undefined8 ****ppppuStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 ****ppppuStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 ****ppppuStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  long lStack_48;
  
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    if ((*(long *)(param_1 + 2) != 4) || (**(int **)param_1 != 0x36767069)) goto LAB_003a02a4;
  }
  else if (*(char *)((long)param_1 + 0x17) != '\x04' || *param_1 != 0x36767069) {
LAB_003a02a4:
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                 ,0x11d,2,"Expected \'ipv6\' scheme, got \'%s\'");
    return 0;
  }
  uVar11 = *(ulong *)(param_1 + 0xe);
  piVar9 = *(int **)(param_1 + 0xc);
  if (-1 < (char)*(byte *)((long)param_1 + 0x47)) {
    uVar11 = (ulong)*(byte *)((long)param_1 + 0x47);
    piVar9 = param_1 + 0xc;
  }
  if (uVar11 == 0) {
    uVar11 = 0;
  }
  else if ((char)*piVar9 == '/') {
    piVar9 = (int *)((long)piVar9 + 1);
    uVar11 = uVar11 - 1;
  }
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  ppppuStack_90 = (undefined8 *****)0x0;
  uStack_88 = 0;
  uStack_80 = 0;
  ppppuStack_a8 = (undefined8 *****)0x0;
  lStack_a0 = 0;
  uStack_98 = 0;
  piVar5 = piVar9;
  func_0x0033b110(piVar9,uVar11,&ppppuStack_90,&ppppuStack_a8);
  if (((ulong)piVar5 & 1) == 0) {
    if (uVar11 < 0x7ffffffffffffff8) {
      if (uVar11 < 0x17) {
        uStack_68 = CONCAT17((char)uVar11,(undefined7)uStack_68);
        pppppuVar6 = &ppppuStack_78;
        if (uVar11 != 0) goto LAB_0039ff84;
      }
      else {
        uVar1 = (uVar11 & 0xfffffffffffffff8) + 8;
        if ((uVar11 | 7) != 0x17) {
          uVar1 = uVar11 | 7;
        }
        pppppuVar6 = (undefined8 *****)(uVar1 + 1);
        __Znwm();
        uStack_68 = uVar1 + 1 | 0x8000000000000000;
        ppppuStack_78 = pppppuVar6;
        uStack_70 = uVar11;
LAB_0039ff84:
        _memmove(pppppuVar6,piVar9,uVar11);
      }
      *(undefined1 *)((long)pppppuVar6 + uVar11) = 0;
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                   ,0xce,2,"Failed gpr_split_host_port(%s, ...)");
      if ((long)uStack_68 < 0) {
        __ZdlPv(ppppuStack_78);
      }
      goto LAB_003a0164;
    }
  }
  else {
    param_2[0xd] = 0;
    param_2[0xc] = 0;
    param_2[0xf] = 0;
    param_2[0xe] = 0;
    param_2[9] = 0;
    param_2[8] = 0;
    param_2[0xb] = 0;
    param_2[10] = 0;
    param_2[5] = 0;
    param_2[4] = 0;
    param_2[7] = 0;
    param_2[6] = 0;
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    *(undefined4 *)(param_2 + 0x10) = 0x1c;
    *(undefined1 *)((long)param_2 + 1) = 0x1e;
    uVar11 = uStack_88;
    pppppuVar6 = (undefined8 *****)ppppuStack_90;
    if (-1 < (long)uStack_80) {
      uVar11 = uStack_80 >> 0x38;
      pppppuVar6 = &ppppuStack_90;
    }
    FUN_00339bcc(pppppuVar6,0x25,uVar11);
    if (pppppuVar6 == (undefined8 *****)0x0) {
      pppppuVar6 = (undefined8 *****)ppppuStack_90;
      if (-1 < (long)uStack_80) {
        pppppuVar6 = &ppppuStack_90;
      }
      iVar4 = 0x1e;
      func_0x003c4da8(0x1e,pppppuVar6,param_2 + 1);
      if (iVar4 == 0) {
        pcVar12 = "invalid ipv6 address: \'%s\'";
        uVar13 = 0x104;
LAB_003a012c:
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                     ,uVar13,2,pcVar12);
        goto LAB_003a0164;
      }
LAB_003a0084:
      if (uStack_98 < 0) {
        pppppuVar6 = (undefined8 *****)ppppuStack_a8;
        if (lStack_a0 == 0) goto code_r0x003a00e8;
      }
      else {
        if (uStack_98._7_1_ == '\0') {
code_r0x003a00e8:
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                       ,0x10b,2,"no port given for ipv6 scheme");
          goto LAB_003a0164;
        }
        pppppuVar6 = &ppppuStack_a8;
      }
      _sscanf(pppppuVar6,"%d");
      if ((((int)pppppuVar6 != 1) || (iStack_b0 < 0)) || (0xffff < iStack_b0)) {
        pcVar12 = "invalid ipv6 port: \'%s\'";
        uVar13 = 0x111;
        goto LAB_003a012c;
      }
      uVar3 = (undefined2)iStack_b0;
      func_0x003c4d98();
      *(undefined2 *)((long)param_2 + 2) = uVar3;
      uVar13 = 1;
    }
    else {
      if ((long)uStack_80 < 0) {
        uVar11 = (long)pppppuVar6 - (long)ppppuStack_90;
        if (pppppuVar6 < ppppuStack_90) goto LAB_003a01bc;
        pppppuVar10 = (undefined8 *****)ppppuStack_90;
        if (0x2e < uVar11) goto LAB_0039feb8;
LAB_0039fff8:
        iStack_ac = 0;
        _strncpy(&ppppuStack_78,pppppuVar10,uVar11);
        *(undefined1 *)((long)&ppppuStack_78 + uVar11) = 0;
        iVar4 = 0x1e;
        func_0x003c4da8(0x1e,&ppppuStack_78,param_2 + 1);
        if (iVar4 != 0) {
          lVar8 = (long)pppppuVar6 + 1;
          uVar1 = uStack_88;
          if (-1 < (long)uStack_80) {
            uVar1 = uStack_80 >> 0x38;
          }
          lVar7 = lVar8;
          FUN_003398d8(lVar8,uVar1 + ~uVar11,&iStack_ac);
          if ((int)lVar7 == 0) {
            FUN_003c2d04();
            iStack_ac = (int)lVar8;
            if (iStack_ac == 0) {
              pcVar12 = "Invalid interface name: \'%s\'. Non-numeric and failed if_nametoindex.";
              uVar13 = 0xf8;
              goto LAB_003a0150;
            }
          }
          *(int *)(param_2 + 3) = iStack_ac;
          goto LAB_003a0084;
        }
        pcVar12 = "invalid ipv6 address: \'%s\'";
        uVar13 = 0xf0;
LAB_003a0150:
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                     ,uVar13,2,pcVar12);
      }
      else {
        uVar11 = (long)pppppuVar6 - (long)&ppppuStack_90;
        if (pppppuVar6 < &ppppuStack_90) {
LAB_003a01bc:
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                       ,0xdc,2,"assertion failed: %s");
          _abort();
          goto LAB_003a01f8;
        }
        pppppuVar10 = &ppppuStack_90;
        if (uVar11 < 0x2f) goto LAB_0039fff8;
LAB_0039feb8:
        iStack_ac = 0;
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                     ,0xe4,2,
                     "invalid ipv6 address length %zu. Length cannot be greater than GRPC_INET6_ADDRSTRLEN i.e %d)"
                    );
      }
LAB_003a0164:
      uVar13 = 0;
    }
    if (uStack_98 < 0) {
      __ZdlPv(ppppuStack_a8);
    }
    if ((long)uStack_80 < 0) {
      __ZdlPv(ppppuStack_90);
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
      return uVar13;
    }
    ___stack_chk_fail();
  }
  func_0x0033b318(&ppppuStack_78);
LAB_003a01f8:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x3a01fc);
  (*pcVar2)();
}



/* Entry: 003a04bc; end: 003a065f;  */

/* WARNING: Removing unreachable block (ram,0x003a113c) */
/* WARNING: Type propagation algorithm not settling */

section * FUN_003a04bc(undefined8 *param_1,section *param_2,undefined8 *param_3,section *param_4)

{
  char *pcVar1;
  dword *pdVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  section *psVar9;
  section *psVar10;
  section *psVar11;
  section *psVar12;
  section *psVar13;
  ulong uVar14;
  undefined1 *puVar15;
  char *pcVar16;
  dword dVar17;
  long lVar18;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  ulong unaff_x24;
  undefined8 auStack_650 [2];
  char cStack_639;
  undefined1 auStack_638 [24];
  undefined8 *puStack_620;
  qword qStack_618;
  qword qStack_610;
  undefined8 auStack_608 [2];
  char cStack_5f1;
  undefined8 auStack_5f0 [2];
  char cStack_5d9;
  section *psStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 auStack_5c0 [2];
  char cStack_5a9;
  undefined1 auStack_5a8 [24];
  section *psStack_590;
  qword qStack_588;
  qword qStack_580;
  undefined8 auStack_578 [2];
  char cStack_561;
  undefined8 *puStack_560;
  char acStack_558 [8];
  long lStack_550;
  undefined1 auStack_540 [156];
  dword dStack_4a4;
  undefined1 auStack_4a0 [16];
  qword qStack_490;
  undefined1 auStack_408 [80];
  section *psStack_3b8;
  section *psStack_3b0;
  section *psStack_3a8;
  undefined1 ****ppppuStack_3a0;
  code *pcStack_398;
  undefined1 auStack_390 [24];
  section *psStack_378;
  undefined1 auStack_370 [23];
  byte bStack_359;
  undefined1 auStack_340 [96];
  char acStack_2e0 [20];
  section sStack_2cc;
  long lStack_248;
  undefined1 ***pppuStack_200;
  code *pcStack_1f8;
  section *psStack_1f0;
  section *psStack_1e8;
  undefined1 **ppuStack_1e0;
  undefined8 uStack_1d8;
  section sStack_1cc;
  long lStack_148;
  section *psStack_140;
  section *psStack_138;
  undefined8 *puStack_130;
  section *psStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined1 *puStack_110;
  undefined8 uStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_c9;
  undefined1 auStack_c8 [23];
  byte bStack_b1;
  undefined1 auStack_b0 [8];
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  char *pcStack_78;
  undefined8 uStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  param_2[1].offset = 0;
  param_2[1].segname[8] = '\0';
  param_2[1].segname[9] = '\0';
  param_2[1].segname[10] = '\0';
  param_2[1].segname[0xb] = '\0';
  param_2[1].segname[0xc] = '\0';
  param_2[1].segname[0xd] = '\0';
  param_2[1].segname[0xe] = '\0';
  param_2[1].segname[0xf] = '\0';
  param_2[1].segname[0] = '\0';
  param_2[1].segname[1] = '\0';
  param_2[1].segname[2] = '\0';
  param_2[1].segname[3] = '\0';
  param_2[1].segname[4] = '\0';
  param_2[1].segname[5] = '\0';
  param_2[1].segname[6] = '\0';
  param_2[1].segname[7] = '\0';
  param_2[1].size = 0;
  param_2[1].addr = 0;
  param_2->reserved2 = 0;
  param_2->reserved3 = 0;
  param_2->flags = 0;
  param_2->reserved1 = 0;
  param_2[1].sectname[8] = '\0';
  param_2[1].sectname[9] = '\0';
  param_2[1].sectname[10] = '\0';
  param_2[1].sectname[0xb] = '\0';
  param_2[1].sectname[0xc] = '\0';
  param_2[1].sectname[0xd] = '\0';
  param_2[1].sectname[0xe] = '\0';
  param_2[1].sectname[0xf] = '\0';
  param_2[1].sectname[0] = '\0';
  param_2[1].sectname[1] = '\0';
  param_2[1].sectname[2] = '\0';
  param_2[1].sectname[3] = '\0';
  param_2[1].sectname[4] = '\0';
  param_2[1].sectname[5] = '\0';
  param_2[1].sectname[6] = '\0';
  param_2[1].sectname[7] = '\0';
  param_2->size = 0;
  param_2->addr = 0;
  param_2->reloff = 0;
  param_2->nrelocs = 0;
  param_2->offset = 0;
  param_2->align = 0;
  param_2->sectname[8] = '\0';
  param_2->sectname[9] = '\0';
  param_2->sectname[10] = '\0';
  param_2->sectname[0xb] = '\0';
  param_2->sectname[0xc] = '\0';
  param_2->sectname[0xd] = '\0';
  param_2->sectname[0xe] = '\0';
  param_2->sectname[0xf] = '\0';
  param_2->sectname[0] = '\0';
  param_2->sectname[1] = '\0';
  param_2->sectname[2] = '\0';
  param_2->sectname[3] = '\0';
  param_2->sectname[4] = '\0';
  param_2->sectname[5] = '\0';
  param_2->sectname[6] = '\0';
  param_2->sectname[7] = '\0';
  param_2->segname[8] = '\0';
  param_2->segname[9] = '\0';
  param_2->segname[10] = '\0';
  param_2->segname[0xb] = '\0';
  param_2->segname[0xc] = '\0';
  param_2->segname[0xd] = '\0';
  param_2->segname[0xe] = '\0';
  param_2->segname[0xf] = '\0';
  param_2->segname[0] = '\0';
  param_2->segname[1] = '\0';
  param_2->segname[2] = '\0';
  param_2->segname[3] = '\0';
  param_2->segname[4] = '\0';
  param_2->segname[5] = '\0';
  param_2->segname[6] = '\0';
  param_2->segname[7] = '\0';
  psVar10 = (section *)(param_2->sectname + 8);
  iVar6 = 0x1e;
  func_0x003c4da8();
  if (iVar6 == 1) {
    param_2->sectname[1] = '\x1e';
    dVar17 = 0x1c;
LAB_003a0554:
    param_2[1].offset = dVar17;
    psVar12 = param_2;
    psVar13 = param_4;
    FUN_003a13ac();
    *param_1 = 0;
  }
  else {
    psVar10 = (section *)(param_2->sectname + 4);
    iVar6 = 2;
    func_0x003c4da8(2,param_3);
    if (iVar6 == 1) {
      param_2->sectname[1] = '\x02';
      dVar17 = 0x10;
      goto LAB_003a0554;
    }
    pcStack_78 = "Failed to parse address:";
    uStack_70._0_4_ = 0x18;
    uStack_70._4_4_ = 0;
    if (param_3 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      puVar8 = param_3;
      _strlen();
    }
    puStack_a8 = param_3;
    puStack_a0 = puVar8;
    FUN_00575d30(auStack_c8,&pcStack_78,&puStack_a8);
    psVar10 = (section *)auStack_c8._8_8_;
    psVar13 = (section *)auStack_c8._0_8_;
    if (-1 < (char)bStack_b1) {
      psVar10 = (section *)(ulong)bStack_b1;
      psVar13 = (section *)auStack_c8;
    }
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_e8 = 0;
    param_3 = &uStack_e8;
    FUN_003b646c(param_1,2,psVar13,psVar10,&uStack_c9,&uStack_e8);
    psVar12 = (section *)auStack_b0;
    auStack_b0 = (undefined1  [8])param_3;
    FUN_0033d548();
    if ((char)bStack_b1 < '\0') {
      psVar12 = (section *)auStack_c8._0_8_;
      __ZdlPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return psVar12;
  }
  ___stack_chk_fail();
  auStack_b0 = (undefined1  [8])param_3;
  FUN_0033d548(auStack_b0);
  if ((char)bStack_b1 < '\0') {
    __ZdlPv(auStack_c8._0_8_);
  }
  psVar9 = psVar12;
  __Unwind_Resume();
  puStack_100 = &stack0xfffffffffffffff0;
  pcStack_f8 = FUN_003a0660;
  if (psVar9 != psVar13) {
    if ((psVar9->sectname[1] == '\x1e') &&
       (*(long *)(psVar9->sectname + 8) == 0 && *(int *)psVar9->segname == -0x10000)) {
      if (psVar13 != (section *)0x0) {
        psVar13[1].offset = 0;
        psVar13[1].segname[8] = '\0';
        psVar13[1].segname[9] = '\0';
        psVar13[1].segname[10] = '\0';
        psVar13[1].segname[0xb] = '\0';
        psVar13[1].segname[0xc] = '\0';
        psVar13[1].segname[0xd] = '\0';
        psVar13[1].segname[0xe] = '\0';
        psVar13[1].segname[0xf] = '\0';
        psVar13[1].segname[0] = '\0';
        psVar13[1].segname[1] = '\0';
        psVar13[1].segname[2] = '\0';
        psVar13[1].segname[3] = '\0';
        psVar13[1].segname[4] = '\0';
        psVar13[1].segname[5] = '\0';
        psVar13[1].segname[6] = '\0';
        psVar13[1].segname[7] = '\0';
        psVar13[1].size = 0;
        psVar13[1].addr = 0;
        psVar13->reserved2 = 0;
        psVar13->reserved3 = 0;
        psVar13->flags = 0;
        psVar13->reserved1 = 0;
        psVar13[1].sectname[8] = '\0';
        psVar13[1].sectname[9] = '\0';
        psVar13[1].sectname[10] = '\0';
        psVar13[1].sectname[0xb] = '\0';
        psVar13[1].sectname[0xc] = '\0';
        psVar13[1].sectname[0xd] = '\0';
        psVar13[1].sectname[0xe] = '\0';
        psVar13[1].sectname[0xf] = '\0';
        psVar13[1].sectname[0] = '\0';
        psVar13[1].sectname[1] = '\0';
        psVar13[1].sectname[2] = '\0';
        psVar13[1].sectname[3] = '\0';
        psVar13[1].sectname[4] = '\0';
        psVar13[1].sectname[5] = '\0';
        psVar13[1].sectname[6] = '\0';
        psVar13[1].sectname[7] = '\0';
        psVar13->size = 0;
        psVar13->addr = 0;
        psVar13->reloff = 0;
        psVar13->nrelocs = 0;
        psVar13->offset = 0;
        psVar13->align = 0;
        psVar13->sectname[8] = '\0';
        psVar13->sectname[9] = '\0';
        psVar13->sectname[10] = '\0';
        psVar13->sectname[0xb] = '\0';
        psVar13->sectname[0xc] = '\0';
        psVar13->sectname[0xd] = '\0';
        psVar13->sectname[0xe] = '\0';
        psVar13->sectname[0xf] = '\0';
        psVar13->sectname[0] = '\0';
        psVar13->sectname[1] = '\0';
        psVar13->sectname[2] = '\0';
        psVar13->sectname[3] = '\0';
        psVar13->sectname[4] = '\0';
        psVar13->sectname[5] = '\0';
        psVar13->sectname[6] = '\0';
        psVar13->sectname[7] = '\0';
        psVar13->segname[8] = '\0';
        psVar13->segname[9] = '\0';
        psVar13->segname[10] = '\0';
        psVar13->segname[0xb] = '\0';
        psVar13->segname[0xc] = '\0';
        psVar13->segname[0xd] = '\0';
        psVar13->segname[0xe] = '\0';
        psVar13->segname[0xf] = '\0';
        psVar13->segname[0] = '\0';
        psVar13->segname[1] = '\0';
        psVar13->segname[2] = '\0';
        psVar13->segname[3] = '\0';
        psVar13->segname[4] = '\0';
        psVar13->segname[5] = '\0';
        psVar13->segname[6] = '\0';
        psVar13->segname[7] = '\0';
        psVar13->sectname[1] = '\x02';
        *(undefined4 *)(psVar13->sectname + 4) = *(undefined4 *)(psVar9->segname + 4);
        *(undefined2 *)(psVar13->sectname + 2) = *(undefined2 *)(psVar9->sectname + 2);
        psVar13[1].offset = 0x10;
      }
      psVar10 = (section *)((long)&MACH_HEADER.magic + 1);
    }
    else {
      psVar10 = (section *)0x0;
    }
    return psVar10;
  }
  func_0x00773318();
  puStack_110 = (undefined1 *)&puStack_100;
  uStack_108 = 0x3a06e4;
  if (psVar9 != psVar13) {
    bVar5 = psVar9->sectname[1] == '\x02';
    if (bVar5) {
      psVar13->sectname[8] = '\0';
      psVar13->sectname[9] = '\0';
      psVar13->sectname[10] = '\0';
      psVar13->sectname[0xb] = '\0';
      psVar13->sectname[0xc] = '\0';
      psVar13->sectname[0xd] = '\0';
      psVar13->sectname[0xe] = '\0';
      psVar13->sectname[0xf] = '\0';
      psVar13->sectname[0] = '\0';
      psVar13->sectname[1] = '\0';
      psVar13->sectname[2] = '\0';
      psVar13->sectname[3] = '\0';
      psVar13->sectname[4] = '\0';
      psVar13->sectname[5] = '\0';
      psVar13->sectname[6] = '\0';
      psVar13->sectname[7] = '\0';
      psVar13->segname[8] = '\0';
      psVar13->segname[9] = '\0';
      psVar13->segname[10] = '\0';
      psVar13->segname[0xb] = '\0';
      psVar13->segname[0xc] = '\0';
      psVar13->segname[0xd] = '\0';
      psVar13->segname[0xe] = '\0';
      psVar13->segname[0xf] = '\0';
      psVar13->segname[0] = '\0';
      psVar13->segname[1] = '\0';
      psVar13->segname[2] = '\0';
      psVar13->segname[3] = '\0';
      psVar13->segname[4] = '\0';
      psVar13->segname[5] = '\0';
      psVar13->segname[6] = '\0';
      psVar13->segname[7] = '\0';
      psVar13[1].offset = 0;
      psVar13[1].segname[8] = '\0';
      psVar13[1].segname[9] = '\0';
      psVar13[1].segname[10] = '\0';
      psVar13[1].segname[0xb] = '\0';
      psVar13[1].segname[0xc] = '\0';
      psVar13[1].segname[0xd] = '\0';
      psVar13[1].segname[0xe] = '\0';
      psVar13[1].segname[0xf] = '\0';
      psVar13[1].segname[0] = '\0';
      psVar13[1].segname[1] = '\0';
      psVar13[1].segname[2] = '\0';
      psVar13[1].segname[3] = '\0';
      psVar13[1].segname[4] = '\0';
      psVar13[1].segname[5] = '\0';
      psVar13[1].segname[6] = '\0';
      psVar13[1].segname[7] = '\0';
      psVar13[1].size = 0;
      psVar13[1].addr = 0;
      psVar13->reserved2 = 0;
      psVar13->reserved3 = 0;
      psVar13->flags = 0;
      psVar13->reserved1 = 0;
      psVar13[1].sectname[8] = '\0';
      psVar13[1].sectname[9] = '\0';
      psVar13[1].sectname[10] = '\0';
      psVar13[1].sectname[0xb] = '\0';
      psVar13[1].sectname[0xc] = '\0';
      psVar13[1].sectname[0xd] = '\0';
      psVar13[1].sectname[0xe] = '\0';
      psVar13[1].sectname[0xf] = '\0';
      psVar13[1].sectname[0] = '\0';
      psVar13[1].sectname[1] = '\0';
      psVar13[1].sectname[2] = '\0';
      psVar13[1].sectname[3] = '\0';
      psVar13[1].sectname[4] = '\0';
      psVar13[1].sectname[5] = '\0';
      psVar13[1].sectname[6] = '\0';
      psVar13[1].sectname[7] = '\0';
      psVar13->size = 0;
      psVar13->addr = 0;
      psVar13->reloff = 0;
      psVar13->nrelocs = 0;
      psVar13->offset = 0;
      psVar13->align = 0;
      psVar13->sectname[1] = '\x1e';
      psVar13->sectname[8] = '\0';
      psVar13->sectname[9] = '\0';
      psVar13->sectname[10] = '\0';
      psVar13->sectname[0xb] = '\0';
      psVar13->sectname[0xc] = '\0';
      psVar13->sectname[0xd] = '\0';
      psVar13->sectname[0xe] = '\0';
      psVar13->sectname[0xf] = '\0';
      psVar13->segname[0] = '\0';
      psVar13->segname[1] = '\0';
      psVar13->segname[2] = -1;
      psVar13->segname[3] = -1;
      *(undefined4 *)(psVar13->segname + 4) = *(undefined4 *)(psVar9->sectname + 4);
      *(undefined2 *)(psVar13->sectname + 2) = *(undefined2 *)(psVar9->sectname + 2);
      psVar13[1].offset = 0x1c;
    }
    return (section *)(ulong)bVar5;
  }
  func_0x0077334c();
  pcStack_118 = FUN_003a075c;
  lStack_148 = *(long *)PTR____stack_chk_guard_00999f88;
  psVar11 = psVar9;
  psStack_140 = param_2;
  psStack_138 = param_4;
  puStack_130 = param_3;
  psStack_128 = psVar12;
  puStack_120 = (undefined1 *)&puStack_110;
  FUN_003a0660();
  iVar6 = (int)psVar11;
  psVar12 = psVar9;
  if (iVar6 != 0) {
    psVar12 = &sStack_1cc;
  }
  if (psVar12->sectname[1] == '\x02') {
    psVar12 = psVar9;
    if (iVar6 != 0) {
      psVar12 = &sStack_1cc;
    }
    if (*(int *)(psVar12->sectname + 4) != 0) goto LAB_003a07f0;
LAB_003a07f8:
    pcVar16 = psVar9->sectname + 2;
    if (iVar6 != 0) {
      pcVar16 = (char *)((ulong)&sStack_1cc | 2);
    }
    uVar7 = (uint)*(ushort *)pcVar16;
    func_0x003c4da0();
    *(uint *)psVar13->sectname = uVar7;
    psVar12 = (section *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    if (psVar12->sectname[1] == '\x1e') {
      lVar18 = 0;
      pcVar16 = psVar9->sectname + 8;
      if (iVar6 != 0) {
        pcVar16 = sStack_1cc.sectname + 8;
      }
      do {
        if (pcVar16[lVar18] != '\0') goto LAB_003a07f0;
        lVar18 = lVar18 + 1;
      } while (lVar18 != 0x10);
      goto LAB_003a07f8;
    }
LAB_003a07f0:
    psVar12 = (section *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_148) {
    return psVar12;
  }
  ___stack_chk_fail();
  uStack_1d8 = 0x3a084c;
  psStack_1f0 = psVar9;
  psStack_1e8 = psVar13;
  ppuStack_1e0 = &puStack_120;
  func_0x003a0878();
  if ((uint)psVar12 < 0x10000) {
    psVar10[1].offset = 0;
    psVar10[1].segname[8] = '\0';
    psVar10[1].segname[9] = '\0';
    psVar10[1].segname[10] = '\0';
    psVar10[1].segname[0xb] = '\0';
    psVar10[1].segname[0xc] = '\0';
    psVar10[1].segname[0xd] = '\0';
    psVar10[1].segname[0xe] = '\0';
    psVar10[1].segname[0xf] = '\0';
    psVar10[1].segname[0] = '\0';
    psVar10[1].segname[1] = '\0';
    psVar10[1].segname[2] = '\0';
    psVar10[1].segname[3] = '\0';
    psVar10[1].segname[4] = '\0';
    psVar10[1].segname[5] = '\0';
    psVar10[1].segname[6] = '\0';
    psVar10[1].segname[7] = '\0';
    psVar10[1].size = 0;
    psVar10[1].addr = 0;
    psVar10->reserved2 = 0;
    psVar10->reserved3 = 0;
    psVar10->flags = 0;
    psVar10->reserved1 = 0;
    psVar10[1].sectname[8] = '\0';
    psVar10[1].sectname[9] = '\0';
    psVar10[1].sectname[10] = '\0';
    psVar10[1].sectname[0xb] = '\0';
    psVar10[1].sectname[0xc] = '\0';
    psVar10[1].sectname[0xd] = '\0';
    psVar10[1].sectname[0xe] = '\0';
    psVar10[1].sectname[0xf] = '\0';
    psVar10[1].sectname[0] = '\0';
    psVar10[1].sectname[1] = '\0';
    psVar10[1].sectname[2] = '\0';
    psVar10[1].sectname[3] = '\0';
    psVar10[1].sectname[4] = '\0';
    psVar10[1].sectname[5] = '\0';
    psVar10[1].sectname[6] = '\0';
    psVar10[1].sectname[7] = '\0';
    psVar10->size = 0;
    psVar10->addr = 0;
    psVar10->reloff = 0;
    psVar10->nrelocs = 0;
    psVar10->offset = 0;
    psVar10->align = 0;
    psVar10->sectname[8] = '\0';
    psVar10->sectname[9] = '\0';
    psVar10->sectname[10] = '\0';
    psVar10->sectname[0xb] = '\0';
    psVar10->sectname[0xc] = '\0';
    psVar10->sectname[0xd] = '\0';
    psVar10->sectname[0xe] = '\0';
    psVar10->sectname[0xf] = '\0';
    psVar10->sectname[0] = '\0';
    psVar10->sectname[1] = '\0';
    psVar10->sectname[2] = '\0';
    psVar10->sectname[3] = '\0';
    psVar10->sectname[4] = '\0';
    psVar10->sectname[5] = '\0';
    psVar10->sectname[6] = '\0';
    psVar10->sectname[7] = '\0';
    psVar10->segname[8] = '\0';
    psVar10->segname[9] = '\0';
    psVar10->segname[10] = '\0';
    psVar10->segname[0xb] = '\0';
    psVar10->segname[0xc] = '\0';
    psVar10->segname[0xd] = '\0';
    psVar10->segname[0xe] = '\0';
    psVar10->segname[0xf] = '\0';
    psVar10->segname[0] = '\0';
    psVar10->segname[1] = '\0';
    psVar10->segname[2] = '\0';
    psVar10->segname[3] = '\0';
    psVar10->segname[4] = '\0';
    psVar10->segname[5] = '\0';
    psVar10->segname[6] = '\0';
    psVar10->segname[7] = '\0';
    psVar10->sectname[1] = '\x1e';
    psVar13 = (section *)(ulong)((uint)psVar12 & 0xffff);
    func_0x003c4d98();
    *(short *)(psVar10->sectname + 2) = (short)psVar13;
    psVar10[1].offset = 0x1c;
    return psVar13;
  }
  func_0x007733b4();
  pcStack_1f8 = FUN_003a0930;
  lStack_248 = *(long *)PTR____stack_chk_guard_00999f88;
  psVar13 = psVar12;
  pppuStack_200 = &ppuStack_1e0;
  ___error();
  uVar7 = *(uint *)psVar13->sectname;
  if ((int)psVar10 != 0) {
    psVar10 = &sStack_2cc;
    psVar13 = psVar12;
    FUN_003a0660(psVar12,&sStack_2cc);
    if ((int)psVar13 != 0) {
      psVar12 = psVar10;
    }
  }
  acStack_2e0[8] = '\0';
  acStack_2e0[9] = '\0';
  acStack_2e0[10] = '\0';
  acStack_2e0[0xb] = '\0';
  acStack_2e0[0xc] = '\0';
  acStack_2e0[0xd] = '\0';
  acStack_2e0[0xe] = '\0';
  acStack_2e0[0] = '\0';
  acStack_2e0[1] = '\0';
  acStack_2e0[2] = '\0';
  acStack_2e0[3] = '\0';
  acStack_2e0[4] = '\0';
  acStack_2e0[5] = '\0';
  acStack_2e0[6] = '\0';
  acStack_2e0[7] = '\0';
  bVar3 = psVar12->sectname[1];
  if (bVar3 == 0x1e) {
    psVar10 = (section *)(ulong)*(ushort *)(psVar12->sectname + 2);
    func_0x003c4da0();
    pcVar16 = psVar12->sectname + 8;
    unaff_x24 = (ulong)*(uint *)(psVar12->segname + 8);
LAB_003a0a30:
    uVar14 = (ulong)(byte)psVar12->sectname[1];
    FUN_003c4dac(uVar14,pcVar16,auStack_340 + 0x32,0x2e);
    if (uVar14 == 0) {
      bVar3 = psVar12->sectname[1];
LAB_003a0ad8:
      uVar14 = (ulong)bVar3;
      auStack_340._0_8_ = "Unknown sockaddr family: ";
      auStack_340[8] = '\x19';
      auStack_340[9] = '\0';
      auStack_340[10] = '\0';
      auStack_340[0xb] = '\0';
      auStack_340[0xc] = '\0';
      auStack_340[0xd] = '\0';
      auStack_340[0xe] = '\0';
      auStack_340[0xf] = '\0';
      psVar13 = (section *)(auStack_370 + 0x10);
      func_0x00574ac0(uVar14,psVar13);
      auStack_370._8_8_ = uVar14 - (long)psVar13;
      auStack_370._0_8_ = psVar13;
      FUN_00575d30(auStack_390,auStack_340,auStack_370);
      psVar13 = (section *)auStack_390._0_8_;
      if (-1 < (char)auStack_390[0x17]) {
        auStack_390._8_8_ = (ulong)auStack_390[0x17];
        psVar13 = (section *)auStack_390;
      }
      func_0x005535e8(&psStack_378,psVar13,auStack_390._8_8_);
      iVar6 = (int)&psStack_378;
      FUN_003a1488(extraout_x8);
      psVar13 = psStack_378;
      if (((ulong)psStack_378 & 1) != 0) {
        FUN_0055293c();
        psVar13 = psStack_378;
      }
      psVar12 = (section *)auStack_390;
      if ((char)auStack_390[0x17] < '\0') {
        __ZdlPv();
        psVar13 = (section *)auStack_390._0_8_;
        psVar12 = (section *)auStack_390;
      }
    }
    else {
      if ((int)unaff_x24 == 0) {
        puVar15 = auStack_340 + 0x32;
        _strlen();
        psVar13 = (section *)(auStack_340 + 0x32);
        FUN_0033ae40(auStack_340,psVar13,puVar15,psVar10);
        iVar6 = (int)puVar15;
        acStack_2e0[0] = auStack_340[8];
        acStack_2e0[1] = auStack_340[9];
        acStack_2e0[2] = auStack_340[10];
        acStack_2e0[3] = auStack_340[0xb];
        acStack_2e0[4] = auStack_340[0xc];
        acStack_2e0[5] = auStack_340[0xd];
        acStack_2e0[6] = auStack_340[0xe];
        acStack_2e0[7] = auStack_340[0xf];
        acStack_2e0[8] = auStack_340[0x10];
        acStack_2e0[9] = auStack_340[0x11];
        acStack_2e0[10] = auStack_340[0x12];
        acStack_2e0[0xb] = auStack_340[0x13];
        acStack_2e0[0xc] = auStack_340[0x14];
        acStack_2e0[0xd] = auStack_340[0x15];
        acStack_2e0[0xe] = auStack_340[0x16];
        psVar10 = (section *)(ulong)auStack_340[0x17];
        psVar12 = (section *)auStack_340._0_8_;
      }
      else {
        auStack_340._0_8_ = auStack_340 + 0x32;
        auStack_340[8] = -0x68;
        auStack_340[9] = '\x0e';
        auStack_340[10] = 'V';
        auStack_340[0xb] = '\0';
        auStack_340[0xc] = '\0';
        auStack_340[0xd] = '\0';
        auStack_340[0xe] = '\0';
        auStack_340[0xf] = '\0';
        auStack_340._16_7_ = (undefined7)unaff_x24;
        auStack_340[0x17] = 0;
        auStack_340[0x18] = -0x14;
        auStack_340[0x19] = '\x06';
        auStack_340[0x1a] = 'V';
        auStack_340[0x1b] = '\0';
        auStack_340[0x1c] = '\0';
        auStack_340[0x1d] = '\0';
        auStack_340[0x1e] = '\0';
        auStack_340[0x1f] = '\0';
        FUN_0056189c(auStack_370,"%s%%%u",6,auStack_340,2);
        uVar14 = auStack_370._8_8_;
        psVar13 = (section *)auStack_370._0_8_;
        if (-1 < (char)bStack_359) {
          uVar14 = (ulong)bStack_359;
          psVar13 = (section *)auStack_370;
        }
        FUN_0033ae40(auStack_340,psVar13,uVar14,psVar10);
        psVar12 = (section *)auStack_340._0_8_;
        iVar6 = (int)uVar14;
        acStack_2e0[0] = auStack_340[8];
        acStack_2e0[1] = auStack_340[9];
        acStack_2e0[2] = auStack_340[10];
        acStack_2e0[3] = auStack_340[0xb];
        acStack_2e0[4] = auStack_340[0xc];
        acStack_2e0[5] = auStack_340[0xd];
        acStack_2e0[6] = auStack_340[0xe];
        acStack_2e0[7] = auStack_340[0xf];
        acStack_2e0[8] = auStack_340[0x10];
        acStack_2e0[9] = auStack_340[0x11];
        acStack_2e0[10] = auStack_340[0x12];
        acStack_2e0[0xb] = auStack_340[0x13];
        acStack_2e0[0xc] = auStack_340[0x14];
        acStack_2e0[0xd] = auStack_340[0x15];
        acStack_2e0[0xe] = auStack_340[0x16];
        psVar10 = (section *)(ulong)auStack_340[0x17];
        if ((char)bStack_359 < '\0') {
          psVar13 = (section *)auStack_370._0_8_;
          __ZdlPv();
        }
      }
      ___error();
      *(uint *)psVar13->sectname = uVar7;
      extraout_x8[1] = psVar12;
      extraout_x8[2] = CONCAT17(acStack_2e0[7],acStack_2e0._0_7_);
      *(ulong *)((long)extraout_x8 + 0x17) = CONCAT71(acStack_2e0._8_7_,acStack_2e0[7]);
      *(char *)((long)extraout_x8 + 0x1f) = (char)psVar10;
LAB_003a0c04:
      *extraout_x8 = 0;
    }
  }
  else {
    if (bVar3 == 2) {
      psVar10 = (section *)(ulong)*(ushort *)(psVar12->sectname + 2);
      func_0x003c4da0();
      unaff_x24 = 0;
      pcVar16 = psVar12->sectname + 4;
      goto LAB_003a0a30;
    }
    if (bVar3 != 1) goto LAB_003a0ad8;
    psVar10 = (section *)(psVar12->sectname + 2);
    if (psVar10->sectname[0] != '\0') {
      psVar13 = psVar10;
      _strnlen(psVar10,0x68);
      if (psVar13 == &section_00000068) {
        func_0x005535e8(auStack_340,"UDS path is not null-terminated",0x1f);
        iVar6 = (int)auStack_340;
        FUN_003a1488(extraout_x8);
        psVar13 = (section *)auStack_340._0_8_;
        if ((auStack_340._0_8_ & 1) != 0) {
          FUN_0055293c();
        }
        goto LAB_003a0c08;
      }
      psVar13 = (section *)auStack_340;
      psVar9 = psVar10;
      FUN_00353254();
      iVar6 = (int)psVar9;
LAB_003a0bdc:
      acStack_2e0[0] = auStack_340[8];
      acStack_2e0[1] = auStack_340[9];
      acStack_2e0[2] = auStack_340[10];
      acStack_2e0[3] = auStack_340[0xb];
      acStack_2e0[4] = auStack_340[0xc];
      acStack_2e0[5] = auStack_340[0xd];
      acStack_2e0[6] = auStack_340[0xe];
      acStack_2e0[7] = auStack_340[0xf];
      acStack_2e0[8] = auStack_340[0x10];
      acStack_2e0[9] = auStack_340[0x11];
      acStack_2e0[10] = auStack_340[0x12];
      acStack_2e0[0xb] = auStack_340[0x13];
      acStack_2e0[0xc] = auStack_340[0x14];
      acStack_2e0[0xd] = auStack_340[0x15];
      acStack_2e0[0xe] = auStack_340[0x16];
      extraout_x8[1] = auStack_340._0_8_;
      extraout_x8[2] = CONCAT17(auStack_340[0xf],auStack_340._8_7_);
      *(ulong *)((long)extraout_x8 + 0x17) = CONCAT71(auStack_340._16_7_,auStack_340[0xf]);
      *(byte *)((long)extraout_x8 + 0x1f) = auStack_340[0x17];
      goto LAB_003a0c04;
    }
    if (0 < (int)(psVar12[1].offset - 1)) {
      psVar13 = (section *)auStack_340;
      psVar9 = psVar10;
      FUN_0035d0e4();
      iVar6 = (int)psVar9;
      goto LAB_003a0bdc;
    }
    func_0x005535e8(auStack_340,"empty UDS abstract path",0x17);
    iVar6 = (int)auStack_340;
    FUN_003a1488(extraout_x8);
    psVar13 = (section *)auStack_340._0_8_;
    if ((auStack_340._0_8_ & 1) != 0) {
      FUN_0055293c();
    }
  }
LAB_003a0c08:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_248) {
    return psVar13;
  }
  ___stack_chk_fail();
  if ((iVar6 != 0) && (func_0x0040cf10(), ((uint)psVar10 >> 7 & 1) != 0)) {
    __ZdlPv(psVar12);
  }
  psVar9 = psVar13;
  __Unwind_Resume();
  auStack_408._56_8_ = unaff_x24;
  auStack_408._64_8_ = (ulong)uVar7;
  auStack_408._72_8_ = acStack_2e0;
  psStack_3b8 = psVar10;
  psStack_3b0 = psVar12;
  psStack_3a8 = psVar13;
  ppppuStack_3a0 = &pppuStack_200;
  pcStack_398 = FUN_003a0d08;
  auStack_408._48_8_ = *(long *)PTR____stack_chk_guard_00999f88;
  if (psVar9[1].offset == 0) {
    func_0x005535e8(auStack_4a0,"Empty address",0xd);
    FUN_003a1488(extraout_x8_00,auStack_4a0);
    psVar10 = (section *)auStack_4a0._0_8_;
    if ((auStack_4a0._0_8_ & 1) != 0) {
      FUN_0055293c();
    }
    goto LAB_003a117c;
  }
  psVar10 = psVar9;
  FUN_003a0660();
  iVar6 = (int)psVar10;
  psVar10 = psVar9;
  if (iVar6 != 0) {
    psVar10 = (section *)(auStack_540 + 0x1c);
  }
  bVar3 = psVar10->sectname[1];
  uVar14 = (ulong)bVar3;
  if (bVar3 == 1) {
    auStack_408._0_8_ = (undefined8 *)0x0;
    auStack_408[8] = '\0';
    auStack_408[9] = '\0';
    auStack_408[10] = '\0';
    auStack_408[0xb] = '\0';
    auStack_408[0xc] = '\0';
    auStack_408[0xd] = '\0';
    auStack_408[0xe] = '\0';
    auStack_408[0xf] = '\0';
    auStack_408._16_8_ = 0;
    auStack_540._0_8_ = (section *)0x0;
    auStack_540._8_8_ = 0;
    auStack_540._16_8_ = 0;
    psVar10 = (section *)(auStack_540 + 0x1c);
    pcVar16 = psVar9->sectname + 2;
    psVar13 = psVar9;
    if (iVar6 != 0) {
      pcVar16 = (char *)((ulong)psVar10 | 2);
      psVar13 = psVar10;
    }
    if (psVar13->sectname[2] == '\0') {
      pcVar1 = psVar9->sectname + 3;
      psVar13 = psVar9;
      if (iVar6 != 0) {
        pcVar1 = (char *)((ulong)psVar10 | 3);
        psVar13 = psVar10;
      }
      if (psVar13->sectname[3] == '\0') goto LAB_003a0de4;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                (auStack_408,"unix-abstract");
      pdVar2 = &psVar9[1].offset;
      if (iVar6 != 0) {
        pdVar2 = &dStack_4a4;
      }
      FUN_0035d0e4(auStack_4a0,pcVar1,(ulong)*pdVar2 - 2);
      if ((long)auStack_540._16_8_ < 0) {
        __ZdlPv(auStack_540._0_8_);
      }
      auStack_540._8_8_ = auStack_4a0._8_8_;
      auStack_540._0_8_ = auStack_4a0._0_8_;
      auStack_540._16_8_ = qStack_490;
    }
    else {
LAB_003a0de4:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                (auStack_408,"unix");
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                (auStack_540,pcVar16);
    }
    acStack_558[0] = auStack_408[8];
    acStack_558[1] = auStack_408[9];
    acStack_558[2] = auStack_408[10];
    acStack_558[3] = auStack_408[0xb];
    acStack_558[4] = auStack_408[0xc];
    acStack_558[5] = auStack_408[0xd];
    acStack_558[6] = auStack_408[0xe];
    acStack_558[7] = auStack_408[0xf];
    puStack_560 = (undefined8 *)auStack_408._0_8_;
    lStack_550 = auStack_408._16_8_;
    auStack_408._0_8_ = (char *)0x0;
    auStack_408._8_8_ = 0;
    auStack_408[0x10] = '\0';
    auStack_408[0x11] = '\0';
    auStack_408[0x12] = '\0';
    auStack_408[0x13] = '\0';
    auStack_408[0x14] = '\0';
    auStack_408[0x15] = '\0';
    auStack_408[0x16] = '\0';
    auStack_408[0x17] = '\0';
    FUN_00353254(auStack_578,"");
    qStack_588 = auStack_540._8_8_;
    psStack_590 = (section *)auStack_540._0_8_;
    qStack_580 = auStack_540._16_8_;
    auStack_540._8_8_ = 0;
    auStack_540._16_8_ = 0;
    auStack_540._0_8_ = (section *)0x0;
    auStack_5a8[8] = '\0';
    auStack_5a8[9] = '\0';
    auStack_5a8[10] = '\0';
    auStack_5a8[0xb] = '\0';
    auStack_5a8[0xc] = '\0';
    auStack_5a8[0xd] = '\0';
    auStack_5a8[0xe] = '\0';
    auStack_5a8[0xf] = '\0';
    auStack_5a8[0x10] = '\0';
    auStack_5a8[0x11] = '\0';
    auStack_5a8[0x12] = '\0';
    auStack_5a8[0x13] = '\0';
    auStack_5a8[0x14] = '\0';
    auStack_5a8[0x15] = '\0';
    auStack_5a8[0x16] = '\0';
    auStack_5a8[0x17] = '\0';
    auStack_5a8[0] = '\0';
    auStack_5a8[1] = '\0';
    auStack_5a8[2] = '\0';
    auStack_5a8[3] = '\0';
    auStack_5a8[4] = '\0';
    auStack_5a8[5] = '\0';
    auStack_5a8[6] = '\0';
    auStack_5a8[7] = '\0';
    FUN_00353254(auStack_5c0,"");
    FUN_00401f2c(auStack_4a0,&puStack_560,auStack_578,&psStack_590,auStack_5a8,auStack_5c0);
    if (cStack_5a9 < '\0') {
      __ZdlPv(auStack_5c0[0]);
    }
    psStack_5d8 = (section *)auStack_5a8;
    FUN_0035af5c(&psStack_5d8);
    if ((long)qStack_580 < 0) {
      __ZdlPv(psStack_590);
    }
    if (cStack_561 < '\0') {
      __ZdlPv(auStack_578[0]);
    }
    if (lStack_550 < 0) {
      __ZdlPv(puStack_560);
    }
    if ((section *)auStack_4a0._0_8_ == (section *)0x0) {
      FUN_00402368(&psStack_5d8,auStack_4a0 + 8);
      extraout_x8_00[2] = uStack_5d0;
      extraout_x8_00[1] = psStack_5d8;
      extraout_x8_00[3] = uStack_5c8;
      *extraout_x8_00 = 0;
    }
    else {
      FUN_003a14e0(extraout_x8_00,auStack_4a0);
    }
    psVar10 = (section *)auStack_4a0;
    FUN_0035afe0();
    if ((long)auStack_540._16_8_ < 0) {
      psVar10 = (section *)auStack_540._0_8_;
      __ZdlPv();
    }
    goto LAB_003a117c;
  }
  if (bVar3 == 2) {
    pcVar16 = "ipv4";
LAB_003a0e0c:
    if (*(int *)pcVar16 != 0x78696e75 || (char)*(int *)((long)pcVar16 + 4) != '\0') {
      FUN_003a0930(auStack_408,psVar10,0);
      if ((char *)auStack_408._0_8_ == (char *)0x0) {
        FUN_00353254(auStack_5f0,pcVar16);
        FUN_00353254(auStack_608,"");
        puVar8 = (undefined8 *)auStack_408;
        FUN_00375c3c();
        qStack_618 = puVar8[1];
        puStack_620 = (undefined8 *)*puVar8;
        qStack_610 = puVar8[2];
        puVar8[1] = 0;
        puVar8[2] = 0;
        *puVar8 = 0;
        auStack_638[0] = '\0';
        auStack_638[1] = '\0';
        auStack_638[2] = '\0';
        auStack_638[3] = '\0';
        auStack_638[4] = '\0';
        auStack_638[5] = '\0';
        auStack_638[6] = '\0';
        auStack_638[7] = '\0';
        auStack_638[8] = '\0';
        auStack_638[9] = '\0';
        auStack_638[10] = '\0';
        auStack_638[0xb] = '\0';
        auStack_638[0xc] = '\0';
        auStack_638[0xd] = '\0';
        auStack_638[0xe] = '\0';
        auStack_638[0xf] = '\0';
        auStack_638[0x10] = '\0';
        auStack_638[0x11] = '\0';
        auStack_638[0x12] = '\0';
        auStack_638[0x13] = '\0';
        auStack_638[0x14] = '\0';
        auStack_638[0x15] = '\0';
        auStack_638[0x16] = '\0';
        auStack_638[0x17] = '\0';
        FUN_00353254(auStack_650,"");
        FUN_00401f2c(auStack_4a0,auStack_5f0,auStack_608,&puStack_620,auStack_638,auStack_650);
        if (cStack_639 < '\0') {
          __ZdlPv(auStack_650[0]);
        }
        auStack_540._0_8_ = auStack_638;
        FUN_0035af5c(auStack_540);
        if ((long)qStack_610 < 0) {
          __ZdlPv(puStack_620);
        }
        if (cStack_5f1 < '\0') {
          __ZdlPv(auStack_608[0]);
        }
        if (cStack_5d9 < '\0') {
          __ZdlPv(auStack_5f0[0]);
        }
        if ((section *)auStack_4a0._0_8_ == (section *)0x0) {
          FUN_00402368(auStack_540,auStack_4a0 + 8);
          extraout_x8_00[2] = auStack_540._8_8_;
          extraout_x8_00[1] = auStack_540._0_8_;
          extraout_x8_00[3] = auStack_540._16_8_;
          *extraout_x8_00 = 0;
        }
        else {
          FUN_003a14e0(extraout_x8_00,auStack_4a0);
        }
        FUN_0035afe0(auStack_4a0);
      }
      else {
        *extraout_x8_00 = auStack_408._0_8_;
        auStack_408._0_8_ = segment_command_00000020.segname + 0xe;
      }
      psVar10 = (section *)auStack_408;
      FUN_0035d18c();
      goto LAB_003a117c;
    }
  }
  else if (bVar3 == 0x1e) {
    pcVar16 = "ipv6";
    goto LAB_003a0e0c;
  }
  auStack_4a0._0_8_ = "Socket family is not AF_UNIX: ";
  auStack_4a0._8_8_ = 0x1e;
  pcVar16 = auStack_408 + 0x10;
  func_0x00574ac0(uVar14,pcVar16);
  auStack_408._8_8_ = uVar14 - (long)pcVar16;
  auStack_408._0_8_ = pcVar16;
  FUN_00575d30(auStack_540,auStack_4a0,auStack_408);
  uVar14 = auStack_540._8_8_;
  psVar10 = (section *)auStack_540._0_8_;
  if (-1 < (long)auStack_540._16_8_) {
    uVar14 = (ulong)auStack_540._16_8_ >> 0x38;
    psVar10 = (section *)auStack_540;
  }
  func_0x005535e8(&psStack_5d8,psVar10,uVar14);
  FUN_003a1488(extraout_x8_00,&psStack_5d8);
  psVar10 = psStack_5d8;
  if (((ulong)psStack_5d8 & 1) != 0) {
    FUN_0055293c();
  }
  if ((long)auStack_540._16_8_ < 0) {
    psVar10 = (section *)auStack_540._0_8_;
    __ZdlPv();
  }
LAB_003a117c:
  if (*(long *)PTR____stack_chk_guard_00999f88 == auStack_408._48_8_) {
    return psVar10;
  }
  ___stack_chk_fail();
  FUN_0035afe0(auStack_4a0);
  FUN_0035d18c(auStack_408);
  __Unwind_Resume();
  cVar4 = psVar10->sectname[1];
  if (cVar4 == '\x01') {
    psVar10 = (section *)((long)&MACH_HEADER.magic + 1);
  }
  else if ((cVar4 == '\x1e') || (cVar4 == '\x02')) {
    psVar10 = (section *)(ulong)*(ushort *)(psVar10->sectname + 2);
    func_0x003c4da0(psVar10);
  }
  else {
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/sockaddr_utils.cc"
                 ,0x13e,2,"Unknown socket family %d in grpc_sockaddr_get_port");
    psVar10 = (section *)0x0;
  }
  return psVar10;
}



/* Entry: 003a0660; end: 003a075b;  */

/* WARNING: Removing unreachable block (ram,0x003a113c) */
/* WARNING: Type propagation algorithm not settling */

section * FUN_003a0660(uint *param_1,uint *param_2,section *param_3)

{
  ushort *puVar1;
  char *pcVar2;
  dword *pdVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  section *psVar9;
  uint *puVar10;
  section *psVar11;
  ulong uVar12;
  undefined1 *puVar13;
  section *psVar14;
  undefined8 *puVar15;
  char *pcVar16;
  long lVar17;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  ulong unaff_x24;
  undefined8 auStack_560 [2];
  char cStack_549;
  undefined1 auStack_548 [24];
  undefined8 *puStack_530;
  qword qStack_528;
  qword qStack_520;
  undefined8 auStack_518 [2];
  char cStack_501;
  undefined8 auStack_500 [2];
  char cStack_4e9;
  section *psStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 auStack_4d0 [2];
  char cStack_4b9;
  undefined1 auStack_4b8 [24];
  section *psStack_4a0;
  qword qStack_498;
  qword qStack_490;
  undefined8 auStack_488 [2];
  char cStack_471;
  undefined8 *puStack_470;
  char acStack_468 [8];
  long lStack_460;
  undefined1 auStack_450 [156];
  dword dStack_3b4;
  undefined1 auStack_3b0 [16];
  qword qStack_3a0;
  undefined1 auStack_318 [80];
  section *psStack_2c8;
  section *psStack_2c0;
  section *psStack_2b8;
  undefined1 ****ppppuStack_2b0;
  code *pcStack_2a8;
  undefined1 auStack_2a0 [24];
  section *psStack_288;
  undefined1 auStack_280 [23];
  byte bStack_269;
  undefined1 auStack_250 [96];
  char acStack_1f0 [20];
  section sStack_1dc;
  long lStack_158;
  undefined1 ***pppuStack_110;
  code *pcStack_108;
  uint *puStack_100;
  uint *puStack_f8;
  undefined1 **ppuStack_f0;
  undefined8 uStack_e8;
  uint auStack_dc [2];
  uint auStack_d4 [31];
  long lStack_58;
  undefined1 *puStack_30;
  code *pcStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  if (param_1 != param_2) {
    if ((*(char *)((long)param_1 + 1) == '\x1e') &&
       (*(long *)(param_1 + 2) == 0 && param_1[4] == 0xffff0000)) {
      if (param_2 != (uint *)0x0) {
        param_2[0x20] = 0;
        param_2[0x1a] = 0;
        param_2[0x1b] = 0;
        param_2[0x18] = 0;
        param_2[0x19] = 0;
        param_2[0x1e] = 0;
        param_2[0x1f] = 0;
        param_2[0x1c] = 0;
        param_2[0x1d] = 0;
        param_2[0x12] = 0;
        param_2[0x13] = 0;
        param_2[0x10] = 0;
        param_2[0x11] = 0;
        param_2[0x16] = 0;
        param_2[0x17] = 0;
        param_2[0x14] = 0;
        param_2[0x15] = 0;
        param_2[10] = 0;
        param_2[0xb] = 0;
        param_2[8] = 0;
        param_2[9] = 0;
        param_2[0xe] = 0;
        param_2[0xf] = 0;
        param_2[0xc] = 0;
        param_2[0xd] = 0;
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[0] = 0;
        param_2[1] = 0;
        param_2[6] = 0;
        param_2[7] = 0;
        param_2[4] = 0;
        param_2[5] = 0;
        *(undefined1 *)((long)param_2 + 1) = 2;
        param_2[1] = param_1[5];
        *(undefined2 *)((long)param_2 + 2) = *(undefined2 *)((long)param_1 + 2);
        param_2[0x20] = 0x10;
      }
      psVar9 = (section *)((long)&MACH_HEADER.magic + 1);
    }
    else {
      psVar9 = (section *)0x0;
    }
    return psVar9;
  }
  func_0x00773318();
  puStack_30 = (undefined1 *)&puStack_20;
  uStack_18 = 0x3a06e4;
  if (param_1 != param_2) {
    bVar6 = *(char *)((long)param_1 + 1) == '\x02';
    if (bVar6) {
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[0] = 0;
      param_2[1] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[0x20] = 0;
      param_2[0x1a] = 0;
      param_2[0x1b] = 0;
      param_2[0x18] = 0;
      param_2[0x19] = 0;
      param_2[0x1e] = 0;
      param_2[0x1f] = 0;
      param_2[0x1c] = 0;
      param_2[0x1d] = 0;
      param_2[0x12] = 0;
      param_2[0x13] = 0;
      param_2[0x10] = 0;
      param_2[0x11] = 0;
      param_2[0x16] = 0;
      param_2[0x17] = 0;
      param_2[0x14] = 0;
      param_2[0x15] = 0;
      param_2[10] = 0;
      param_2[0xb] = 0;
      param_2[8] = 0;
      param_2[9] = 0;
      param_2[0xe] = 0;
      param_2[0xf] = 0;
      param_2[0xc] = 0;
      param_2[0xd] = 0;
      *(undefined1 *)((long)param_2 + 1) = 0x1e;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0xffff0000;
      param_2[5] = param_1[1];
      *(undefined2 *)((long)param_2 + 2) = *(undefined2 *)((long)param_1 + 2);
      param_2[0x20] = 0x1c;
    }
    return (section *)(ulong)bVar6;
  }
  puStack_20 = &stack0xfffffffffffffff0;
  func_0x0077334c();
  pcStack_28 = FUN_003a075c;
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar10 = param_1;
  FUN_003a0660();
  iVar7 = (int)puVar10;
  puVar10 = param_1;
  if (iVar7 != 0) {
    puVar10 = auStack_dc;
  }
  if (*(char *)((long)puVar10 + 1) == '\x02') {
    puVar10 = param_1;
    if (iVar7 != 0) {
      puVar10 = auStack_dc;
    }
    if (puVar10[1] != 0) goto LAB_003a07f0;
LAB_003a07f8:
    puVar1 = (ushort *)((long)param_1 + 2);
    if (iVar7 != 0) {
      puVar1 = (ushort *)((ulong)auStack_dc | 2);
    }
    uVar8 = (uint)*puVar1;
    func_0x003c4da0();
    *param_2 = uVar8;
    psVar9 = (section *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    if (*(char *)((long)puVar10 + 1) == '\x1e') {
      lVar17 = 0;
      puVar10 = param_1 + 2;
      if (iVar7 != 0) {
        puVar10 = auStack_d4;
      }
      do {
        if (*(char *)((long)puVar10 + lVar17) != '\0') goto LAB_003a07f0;
        lVar17 = lVar17 + 1;
      } while (lVar17 != 0x10);
      goto LAB_003a07f8;
    }
LAB_003a07f0:
    psVar9 = (section *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return psVar9;
  }
  ___stack_chk_fail();
  uStack_e8 = 0x3a084c;
  puStack_100 = param_1;
  puStack_f8 = param_2;
  ppuStack_f0 = &puStack_30;
  func_0x003a0878();
  if ((uint)psVar9 < 0x10000) {
    param_3[1].offset = 0;
    param_3[1].segname[8] = '\0';
    param_3[1].segname[9] = '\0';
    param_3[1].segname[10] = '\0';
    param_3[1].segname[0xb] = '\0';
    param_3[1].segname[0xc] = '\0';
    param_3[1].segname[0xd] = '\0';
    param_3[1].segname[0xe] = '\0';
    param_3[1].segname[0xf] = '\0';
    param_3[1].segname[0] = '\0';
    param_3[1].segname[1] = '\0';
    param_3[1].segname[2] = '\0';
    param_3[1].segname[3] = '\0';
    param_3[1].segname[4] = '\0';
    param_3[1].segname[5] = '\0';
    param_3[1].segname[6] = '\0';
    param_3[1].segname[7] = '\0';
    param_3[1].size = 0;
    param_3[1].addr = 0;
    param_3->reserved2 = 0;
    param_3->reserved3 = 0;
    param_3->flags = 0;
    param_3->reserved1 = 0;
    param_3[1].sectname[8] = '\0';
    param_3[1].sectname[9] = '\0';
    param_3[1].sectname[10] = '\0';
    param_3[1].sectname[0xb] = '\0';
    param_3[1].sectname[0xc] = '\0';
    param_3[1].sectname[0xd] = '\0';
    param_3[1].sectname[0xe] = '\0';
    param_3[1].sectname[0xf] = '\0';
    param_3[1].sectname[0] = '\0';
    param_3[1].sectname[1] = '\0';
    param_3[1].sectname[2] = '\0';
    param_3[1].sectname[3] = '\0';
    param_3[1].sectname[4] = '\0';
    param_3[1].sectname[5] = '\0';
    param_3[1].sectname[6] = '\0';
    param_3[1].sectname[7] = '\0';
    param_3->size = 0;
    param_3->addr = 0;
    param_3->reloff = 0;
    param_3->nrelocs = 0;
    param_3->offset = 0;
    param_3->align = 0;
    param_3->sectname[8] = '\0';
    param_3->sectname[9] = '\0';
    param_3->sectname[10] = '\0';
    param_3->sectname[0xb] = '\0';
    param_3->sectname[0xc] = '\0';
    param_3->sectname[0xd] = '\0';
    param_3->sectname[0xe] = '\0';
    param_3->sectname[0xf] = '\0';
    param_3->sectname[0] = '\0';
    param_3->sectname[1] = '\0';
    param_3->sectname[2] = '\0';
    param_3->sectname[3] = '\0';
    param_3->sectname[4] = '\0';
    param_3->sectname[5] = '\0';
    param_3->sectname[6] = '\0';
    param_3->sectname[7] = '\0';
    param_3->segname[8] = '\0';
    param_3->segname[9] = '\0';
    param_3->segname[10] = '\0';
    param_3->segname[0xb] = '\0';
    param_3->segname[0xc] = '\0';
    param_3->segname[0xd] = '\0';
    param_3->segname[0xe] = '\0';
    param_3->segname[0xf] = '\0';
    param_3->segname[0] = '\0';
    param_3->segname[1] = '\0';
    param_3->segname[2] = '\0';
    param_3->segname[3] = '\0';
    param_3->segname[4] = '\0';
    param_3->segname[5] = '\0';
    param_3->segname[6] = '\0';
    param_3->segname[7] = '\0';
    param_3->sectname[1] = '\x1e';
    psVar9 = (section *)(ulong)((uint)psVar9 & 0xffff);
    func_0x003c4d98();
    *(short *)(param_3->sectname + 2) = (short)psVar9;
    param_3[1].offset = 0x1c;
    return psVar9;
  }
  func_0x007733b4();
  pcStack_108 = FUN_003a0930;
  lStack_158 = *(long *)PTR____stack_chk_guard_00999f88;
  psVar11 = psVar9;
  pppuStack_110 = &ppuStack_f0;
  ___error();
  uVar8 = *(uint *)psVar11->sectname;
  if ((int)param_3 != 0) {
    param_3 = &sStack_1dc;
    psVar11 = psVar9;
    FUN_003a0660(psVar9,&sStack_1dc);
    if ((int)psVar11 != 0) {
      psVar9 = param_3;
    }
  }
  acStack_1f0[8] = '\0';
  acStack_1f0[9] = '\0';
  acStack_1f0[10] = '\0';
  acStack_1f0[0xb] = '\0';
  acStack_1f0[0xc] = '\0';
  acStack_1f0[0xd] = '\0';
  acStack_1f0[0xe] = '\0';
  acStack_1f0[0] = '\0';
  acStack_1f0[1] = '\0';
  acStack_1f0[2] = '\0';
  acStack_1f0[3] = '\0';
  acStack_1f0[4] = '\0';
  acStack_1f0[5] = '\0';
  acStack_1f0[6] = '\0';
  acStack_1f0[7] = '\0';
  bVar4 = psVar9->sectname[1];
  if (bVar4 == 0x1e) {
    param_3 = (section *)(ulong)*(ushort *)(psVar9->sectname + 2);
    func_0x003c4da0();
    pcVar16 = psVar9->sectname + 8;
    unaff_x24 = (ulong)*(uint *)(psVar9->segname + 8);
LAB_003a0a30:
    uVar12 = (ulong)(byte)psVar9->sectname[1];
    FUN_003c4dac(uVar12,pcVar16,auStack_250 + 0x32,0x2e);
    if (uVar12 == 0) {
      bVar4 = psVar9->sectname[1];
LAB_003a0ad8:
      uVar12 = (ulong)bVar4;
      auStack_250._0_8_ = "Unknown sockaddr family: ";
      auStack_250[8] = '\x19';
      auStack_250[9] = '\0';
      auStack_250[10] = '\0';
      auStack_250[0xb] = '\0';
      auStack_250[0xc] = '\0';
      auStack_250[0xd] = '\0';
      auStack_250[0xe] = '\0';
      auStack_250[0xf] = '\0';
      psVar9 = (section *)(auStack_280 + 0x10);
      func_0x00574ac0(uVar12,psVar9);
      auStack_280._8_8_ = uVar12 - (long)psVar9;
      auStack_280._0_8_ = psVar9;
      FUN_00575d30(auStack_2a0,auStack_250,auStack_280);
      psVar9 = (section *)auStack_2a0._0_8_;
      if (-1 < (char)auStack_2a0[0x17]) {
        auStack_2a0._8_8_ = (ulong)auStack_2a0[0x17];
        psVar9 = (section *)auStack_2a0;
      }
      func_0x005535e8(&psStack_288,psVar9,auStack_2a0._8_8_);
      iVar7 = (int)&psStack_288;
      FUN_003a1488(extraout_x8);
      psVar11 = psStack_288;
      if (((ulong)psStack_288 & 1) != 0) {
        FUN_0055293c();
        psVar11 = psStack_288;
      }
      psVar9 = (section *)auStack_2a0;
      if ((char)auStack_2a0[0x17] < '\0') {
        __ZdlPv();
        psVar11 = (section *)auStack_2a0._0_8_;
        psVar9 = (section *)auStack_2a0;
      }
    }
    else {
      if ((int)unaff_x24 == 0) {
        puVar13 = auStack_250 + 0x32;
        _strlen();
        psVar11 = (section *)(auStack_250 + 0x32);
        FUN_0033ae40(auStack_250,psVar11,puVar13,param_3);
        iVar7 = (int)puVar13;
        acStack_1f0[0] = auStack_250[8];
        acStack_1f0[1] = auStack_250[9];
        acStack_1f0[2] = auStack_250[10];
        acStack_1f0[3] = auStack_250[0xb];
        acStack_1f0[4] = auStack_250[0xc];
        acStack_1f0[5] = auStack_250[0xd];
        acStack_1f0[6] = auStack_250[0xe];
        acStack_1f0[7] = auStack_250[0xf];
        acStack_1f0[8] = auStack_250[0x10];
        acStack_1f0[9] = auStack_250[0x11];
        acStack_1f0[10] = auStack_250[0x12];
        acStack_1f0[0xb] = auStack_250[0x13];
        acStack_1f0[0xc] = auStack_250[0x14];
        acStack_1f0[0xd] = auStack_250[0x15];
        acStack_1f0[0xe] = auStack_250[0x16];
        param_3 = (section *)(ulong)auStack_250[0x17];
        psVar9 = (section *)auStack_250._0_8_;
      }
      else {
        auStack_250._0_8_ = auStack_250 + 0x32;
        auStack_250[8] = -0x68;
        auStack_250[9] = '\x0e';
        auStack_250[10] = 'V';
        auStack_250[0xb] = '\0';
        auStack_250[0xc] = '\0';
        auStack_250[0xd] = '\0';
        auStack_250[0xe] = '\0';
        auStack_250[0xf] = '\0';
        auStack_250._16_7_ = (undefined7)unaff_x24;
        auStack_250[0x17] = 0;
        auStack_250[0x18] = -0x14;
        auStack_250[0x19] = '\x06';
        auStack_250[0x1a] = 'V';
        auStack_250[0x1b] = '\0';
        auStack_250[0x1c] = '\0';
        auStack_250[0x1d] = '\0';
        auStack_250[0x1e] = '\0';
        auStack_250[0x1f] = '\0';
        FUN_0056189c(auStack_280,"%s%%%u",6,auStack_250,2);
        uVar12 = auStack_280._8_8_;
        psVar11 = (section *)auStack_280._0_8_;
        if (-1 < (char)bStack_269) {
          uVar12 = (ulong)bStack_269;
          psVar11 = (section *)auStack_280;
        }
        FUN_0033ae40(auStack_250,psVar11,uVar12,param_3);
        psVar9 = (section *)auStack_250._0_8_;
        iVar7 = (int)uVar12;
        acStack_1f0[0] = auStack_250[8];
        acStack_1f0[1] = auStack_250[9];
        acStack_1f0[2] = auStack_250[10];
        acStack_1f0[3] = auStack_250[0xb];
        acStack_1f0[4] = auStack_250[0xc];
        acStack_1f0[5] = auStack_250[0xd];
        acStack_1f0[6] = auStack_250[0xe];
        acStack_1f0[7] = auStack_250[0xf];
        acStack_1f0[8] = auStack_250[0x10];
        acStack_1f0[9] = auStack_250[0x11];
        acStack_1f0[10] = auStack_250[0x12];
        acStack_1f0[0xb] = auStack_250[0x13];
        acStack_1f0[0xc] = auStack_250[0x14];
        acStack_1f0[0xd] = auStack_250[0x15];
        acStack_1f0[0xe] = auStack_250[0x16];
        param_3 = (section *)(ulong)auStack_250[0x17];
        if ((char)bStack_269 < '\0') {
          psVar11 = (section *)auStack_280._0_8_;
          __ZdlPv();
        }
      }
      ___error();
      *(uint *)psVar11->sectname = uVar8;
      extraout_x8[1] = psVar9;
      extraout_x8[2] = CONCAT17(acStack_1f0[7],acStack_1f0._0_7_);
      *(ulong *)((long)extraout_x8 + 0x17) = CONCAT71(acStack_1f0._8_7_,acStack_1f0[7]);
      *(char *)((long)extraout_x8 + 0x1f) = (char)param_3;
LAB_003a0c04:
      *extraout_x8 = 0;
    }
  }
  else {
    if (bVar4 == 2) {
      param_3 = (section *)(ulong)*(ushort *)(psVar9->sectname + 2);
      func_0x003c4da0();
      unaff_x24 = 0;
      pcVar16 = psVar9->sectname + 4;
      goto LAB_003a0a30;
    }
    if (bVar4 != 1) goto LAB_003a0ad8;
    param_3 = (section *)(psVar9->sectname + 2);
    if (param_3->sectname[0] != '\0') {
      psVar11 = param_3;
      _strnlen(param_3,0x68);
      if (psVar11 == &section_00000068) {
        func_0x005535e8(auStack_250,"UDS path is not null-terminated",0x1f);
        iVar7 = (int)auStack_250;
        FUN_003a1488(extraout_x8);
        psVar11 = (section *)auStack_250._0_8_;
        if ((auStack_250._0_8_ & 1) != 0) {
          FUN_0055293c();
        }
        goto LAB_003a0c08;
      }
      psVar11 = (section *)auStack_250;
      psVar14 = param_3;
      FUN_00353254();
      iVar7 = (int)psVar14;
LAB_003a0bdc:
      acStack_1f0[0] = auStack_250[8];
      acStack_1f0[1] = auStack_250[9];
      acStack_1f0[2] = auStack_250[10];
      acStack_1f0[3] = auStack_250[0xb];
      acStack_1f0[4] = auStack_250[0xc];
      acStack_1f0[5] = auStack_250[0xd];
      acStack_1f0[6] = auStack_250[0xe];
      acStack_1f0[7] = auStack_250[0xf];
      acStack_1f0[8] = auStack_250[0x10];
      acStack_1f0[9] = auStack_250[0x11];
      acStack_1f0[10] = auStack_250[0x12];
      acStack_1f0[0xb] = auStack_250[0x13];
      acStack_1f0[0xc] = auStack_250[0x14];
      acStack_1f0[0xd] = auStack_250[0x15];
      acStack_1f0[0xe] = auStack_250[0x16];
      extraout_x8[1] = auStack_250._0_8_;
      extraout_x8[2] = CONCAT17(auStack_250[0xf],auStack_250._8_7_);
      *(ulong *)((long)extraout_x8 + 0x17) = CONCAT71(auStack_250._16_7_,auStack_250[0xf]);
      *(byte *)((long)extraout_x8 + 0x1f) = auStack_250[0x17];
      goto LAB_003a0c04;
    }
    if (0 < (int)(psVar9[1].offset - 1)) {
      psVar11 = (section *)auStack_250;
      psVar14 = param_3;
      FUN_0035d0e4();
      iVar7 = (int)psVar14;
      goto LAB_003a0bdc;
    }
    func_0x005535e8(auStack_250,"empty UDS abstract path",0x17);
    iVar7 = (int)auStack_250;
    FUN_003a1488(extraout_x8);
    psVar11 = (section *)auStack_250._0_8_;
    if ((auStack_250._0_8_ & 1) != 0) {
      FUN_0055293c();
    }
  }
LAB_003a0c08:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_158) {
    return psVar11;
  }
  ___stack_chk_fail();
  if ((iVar7 != 0) && (func_0x0040cf10(), ((uint)param_3 >> 7 & 1) != 0)) {
    __ZdlPv(psVar9);
  }
  psVar14 = psVar11;
  __Unwind_Resume();
  auStack_318._56_8_ = unaff_x24;
  auStack_318._64_8_ = (ulong)uVar8;
  auStack_318._72_8_ = acStack_1f0;
  psStack_2c8 = param_3;
  psStack_2c0 = psVar9;
  psStack_2b8 = psVar11;
  ppppuStack_2b0 = &pppuStack_110;
  pcStack_2a8 = FUN_003a0d08;
  auStack_318._48_8_ = *(long *)PTR____stack_chk_guard_00999f88;
  if (psVar14[1].offset == 0) {
    func_0x005535e8(auStack_3b0,"Empty address",0xd);
    FUN_003a1488(extraout_x8_00,auStack_3b0);
    psVar9 = (section *)auStack_3b0._0_8_;
    if ((auStack_3b0._0_8_ & 1) != 0) {
      FUN_0055293c();
    }
    goto LAB_003a117c;
  }
  psVar9 = psVar14;
  FUN_003a0660();
  iVar7 = (int)psVar9;
  psVar9 = psVar14;
  if (iVar7 != 0) {
    psVar9 = (section *)(auStack_450 + 0x1c);
  }
  bVar4 = psVar9->sectname[1];
  uVar12 = (ulong)bVar4;
  if (bVar4 == 1) {
    auStack_318._0_8_ = (undefined8 *)0x0;
    auStack_318[8] = '\0';
    auStack_318[9] = '\0';
    auStack_318[10] = '\0';
    auStack_318[0xb] = '\0';
    auStack_318[0xc] = '\0';
    auStack_318[0xd] = '\0';
    auStack_318[0xe] = '\0';
    auStack_318[0xf] = '\0';
    auStack_318._16_8_ = 0;
    auStack_450._0_8_ = (section *)0x0;
    auStack_450._8_8_ = 0;
    auStack_450._16_8_ = 0;
    psVar9 = (section *)(auStack_450 + 0x1c);
    pcVar16 = psVar14->sectname + 2;
    psVar11 = psVar14;
    if (iVar7 != 0) {
      pcVar16 = (char *)((ulong)psVar9 | 2);
      psVar11 = psVar9;
    }
    if (psVar11->sectname[2] == '\0') {
      pcVar2 = psVar14->sectname + 3;
      psVar11 = psVar14;
      if (iVar7 != 0) {
        pcVar2 = (char *)((ulong)psVar9 | 3);
        psVar11 = psVar9;
      }
      if (psVar11->sectname[3] == '\0') goto LAB_003a0de4;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                (auStack_318,"unix-abstract");
      pdVar3 = &psVar14[1].offset;
      if (iVar7 != 0) {
        pdVar3 = &dStack_3b4;
      }
      FUN_0035d0e4(auStack_3b0,pcVar2,(ulong)*pdVar3 - 2);
      if ((long)auStack_450._16_8_ < 0) {
        __ZdlPv(auStack_450._0_8_);
      }
      auStack_450._8_8_ = auStack_3b0._8_8_;
      auStack_450._0_8_ = auStack_3b0._0_8_;
      auStack_450._16_8_ = qStack_3a0;
    }
    else {
LAB_003a0de4:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                (auStack_318,"unix");
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                (auStack_450,pcVar16);
    }
    acStack_468[0] = auStack_318[8];
    acStack_468[1] = auStack_318[9];
    acStack_468[2] = auStack_318[10];
    acStack_468[3] = auStack_318[0xb];
    acStack_468[4] = auStack_318[0xc];
    acStack_468[5] = auStack_318[0xd];
    acStack_468[6] = auStack_318[0xe];
    acStack_468[7] = auStack_318[0xf];
    puStack_470 = (undefined8 *)auStack_318._0_8_;
    lStack_460 = auStack_318._16_8_;
    auStack_318._0_8_ = (char *)0x0;
    auStack_318._8_8_ = 0;
    auStack_318[0x10] = '\0';
    auStack_318[0x11] = '\0';
    auStack_318[0x12] = '\0';
    auStack_318[0x13] = '\0';
    auStack_318[0x14] = '\0';
    auStack_318[0x15] = '\0';
    auStack_318[0x16] = '\0';
    auStack_318[0x17] = '\0';
    FUN_00353254(auStack_488,"");
    qStack_498 = auStack_450._8_8_;
    psStack_4a0 = (section *)auStack_450._0_8_;
    qStack_490 = auStack_450._16_8_;
    auStack_450._8_8_ = 0;
    auStack_450._16_8_ = 0;
    auStack_450._0_8_ = (section *)0x0;
    auStack_4b8[8] = '\0';
    auStack_4b8[9] = '\0';
    auStack_4b8[10] = '\0';
    auStack_4b8[0xb] = '\0';
    auStack_4b8[0xc] = '\0';
    auStack_4b8[0xd] = '\0';
    auStack_4b8[0xe] = '\0';
    auStack_4b8[0xf] = '\0';
    auStack_4b8[0x10] = '\0';
    auStack_4b8[0x11] = '\0';
    auStack_4b8[0x12] = '\0';
    auStack_4b8[0x13] = '\0';
    auStack_4b8[0x14] = '\0';
    auStack_4b8[0x15] = '\0';
    auStack_4b8[0x16] = '\0';
    auStack_4b8[0x17] = '\0';
    auStack_4b8[0] = '\0';
    auStack_4b8[1] = '\0';
    auStack_4b8[2] = '\0';
    auStack_4b8[3] = '\0';
    auStack_4b8[4] = '\0';
    auStack_4b8[5] = '\0';
    auStack_4b8[6] = '\0';
    auStack_4b8[7] = '\0';
    FUN_00353254(auStack_4d0,"");
    FUN_00401f2c(auStack_3b0,&puStack_470,auStack_488,&psStack_4a0,auStack_4b8,auStack_4d0);
    if (cStack_4b9 < '\0') {
      __ZdlPv(auStack_4d0[0]);
    }
    psStack_4e8 = (section *)auStack_4b8;
    FUN_0035af5c(&psStack_4e8);
    if ((long)qStack_490 < 0) {
      __ZdlPv(psStack_4a0);
    }
    if (cStack_471 < '\0') {
      __ZdlPv(auStack_488[0]);
    }
    if (lStack_460 < 0) {
      __ZdlPv(puStack_470);
    }
    if ((section *)auStack_3b0._0_8_ == (section *)0x0) {
      FUN_00402368(&psStack_4e8,auStack_3b0 + 8);
      extraout_x8_00[2] = uStack_4e0;
      extraout_x8_00[1] = psStack_4e8;
      extraout_x8_00[3] = uStack_4d8;
      *extraout_x8_00 = 0;
    }
    else {
      FUN_003a14e0(extraout_x8_00,auStack_3b0);
    }
    psVar9 = (section *)auStack_3b0;
    FUN_0035afe0();
    if ((long)auStack_450._16_8_ < 0) {
      psVar9 = (section *)auStack_450._0_8_;
      __ZdlPv();
    }
    goto LAB_003a117c;
  }
  if (bVar4 == 2) {
    pcVar16 = "ipv4";
LAB_003a0e0c:
    if (*(int *)pcVar16 != 0x78696e75 || (char)*(int *)((long)pcVar16 + 4) != '\0') {
      FUN_003a0930(auStack_318,psVar9,0);
      if ((char *)auStack_318._0_8_ == (char *)0x0) {
        FUN_00353254(auStack_500,pcVar16);
        FUN_00353254(auStack_518,"");
        puVar15 = (undefined8 *)auStack_318;
        FUN_00375c3c();
        qStack_528 = puVar15[1];
        puStack_530 = (undefined8 *)*puVar15;
        qStack_520 = puVar15[2];
        puVar15[1] = 0;
        puVar15[2] = 0;
        *puVar15 = 0;
        auStack_548[0] = '\0';
        auStack_548[1] = '\0';
        auStack_548[2] = '\0';
        auStack_548[3] = '\0';
        auStack_548[4] = '\0';
        auStack_548[5] = '\0';
        auStack_548[6] = '\0';
        auStack_548[7] = '\0';
        auStack_548[8] = '\0';
        auStack_548[9] = '\0';
        auStack_548[10] = '\0';
        auStack_548[0xb] = '\0';
        auStack_548[0xc] = '\0';
        auStack_548[0xd] = '\0';
        auStack_548[0xe] = '\0';
        auStack_548[0xf] = '\0';
        auStack_548[0x10] = '\0';
        auStack_548[0x11] = '\0';
        auStack_548[0x12] = '\0';
        auStack_548[0x13] = '\0';
        auStack_548[0x14] = '\0';
        auStack_548[0x15] = '\0';
        auStack_548[0x16] = '\0';
        auStack_548[0x17] = '\0';
        FUN_00353254(auStack_560,"");
        FUN_00401f2c(auStack_3b0,auStack_500,auStack_518,&puStack_530,auStack_548,auStack_560);
        if (cStack_549 < '\0') {
          __ZdlPv(auStack_560[0]);
        }
        auStack_450._0_8_ = auStack_548;
        FUN_0035af5c(auStack_450);
        if ((long)qStack_520 < 0) {
          __ZdlPv(puStack_530);
        }
        if (cStack_501 < '\0') {
          __ZdlPv(auStack_518[0]);
        }
        if (cStack_4e9 < '\0') {
          __ZdlPv(auStack_500[0]);
        }
        if ((section *)auStack_3b0._0_8_ == (section *)0x0) {
          FUN_00402368(auStack_450,auStack_3b0 + 8);
          extraout_x8_00[2] = auStack_450._8_8_;
          extraout_x8_00[1] = auStack_450._0_8_;
          extraout_x8_00[3] = auStack_450._16_8_;
          *extraout_x8_00 = 0;
        }
        else {
          FUN_003a14e0(extraout_x8_00,auStack_3b0);
        }
        FUN_0035afe0(auStack_3b0);
      }
      else {
        *extraout_x8_00 = auStack_318._0_8_;
        auStack_318._0_8_ = segment_command_00000020.segname + 0xe;
      }
      psVar9 = (section *)auStack_318;
      FUN_0035d18c();
      goto LAB_003a117c;
    }
  }
  else if (bVar4 == 0x1e) {
    pcVar16 = "ipv6";
    goto LAB_003a0e0c;
  }
  auStack_3b0._0_8_ = "Socket family is not AF_UNIX: ";
  auStack_3b0._8_8_ = 0x1e;
  pcVar16 = auStack_318 + 0x10;
  func_0x00574ac0(uVar12,pcVar16);
  auStack_318._8_8_ = uVar12 - (long)pcVar16;
  auStack_318._0_8_ = pcVar16;
  FUN_00575d30(auStack_450,auStack_3b0,auStack_318);
  uVar12 = auStack_450._8_8_;
  psVar9 = (section *)auStack_450._0_8_;
  if (-1 < (long)auStack_450._16_8_) {
    uVar12 = (ulong)auStack_450._16_8_ >> 0x38;
    psVar9 = (section *)auStack_450;
  }
  func_0x005535e8(&psStack_4e8,psVar9,uVar12);
  FUN_003a1488(extraout_x8_00,&psStack_4e8);
  psVar9 = psStack_4e8;
  if (((ulong)psStack_4e8 & 1) != 0) {
    FUN_0055293c();
  }
  if ((long)auStack_450._16_8_ < 0) {
    psVar9 = (section *)auStack_450._0_8_;
    __ZdlPv();
  }
LAB_003a117c:
  if (*(long *)PTR____stack_chk_guard_00999f88 == auStack_318._48_8_) {
    return psVar9;
  }
  ___stack_chk_fail();
  FUN_0035afe0(auStack_3b0);
  FUN_0035d18c(auStack_318);
  __Unwind_Resume();
  cVar5 = psVar9->sectname[1];
  if (cVar5 == '\x01') {
    psVar9 = (section *)((long)&MACH_HEADER.magic + 1);
  }
  else if ((cVar5 == '\x1e') || (cVar5 == '\x02')) {
    psVar9 = (section *)(ulong)*(ushort *)(psVar9->sectname + 2);
    func_0x003c4da0(psVar9);
  }
  else {
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/sockaddr_utils.cc"
                 ,0x13e,2,"Unknown socket family %d in grpc_sockaddr_get_port");
    psVar9 = (section *)0x0;
  }
  return psVar9;
}



/* Entry: 003a075c; end: 003a084b;  */

/* WARNING: Removing unreachable block (ram,0x003a113c) */

void FUN_003a075c(undefined1 *param_1,uint *param_2,section *param_3)

{
  ushort *puVar1;
  char *pcVar2;
  dword *pdVar3;
  byte bVar4;
  char cVar5;
  undefined2 uVar6;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  section *psVar10;
  section *psVar11;
  ulong uVar12;
  section *psVar13;
  char ******ppppppcVar14;
  char **ppcVar15;
  char *pcVar16;
  long lVar17;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  ulong unaff_x24;
  undefined8 auStack_540 [2];
  char cStack_529;
  char ****ppppcStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  char *pcStack_510;
  char *pcStack_508;
  char *pcStack_500;
  undefined8 auStack_4f8 [2];
  char cStack_4e1;
  undefined8 auStack_4e0 [2];
  char cStack_4c9;
  char *****pppppcStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 auStack_4b0 [2];
  char cStack_499;
  char ****ppppcStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  char *****pppppcStack_480;
  undefined8 uStack_478;
  long lStack_470;
  undefined8 auStack_468 [2];
  char cStack_451;
  char ****ppppcStack_450;
  undefined8 uStack_448;
  long lStack_440;
  char *****pppppcStack_430;
  ulong uStack_428;
  ulong uStack_420;
  section sStack_414;
  dword dStack_394;
  char *****pppppcStack_390;
  undefined8 uStack_388;
  long lStack_380;
  char *pcStack_2f8;
  long lStack_2f0;
  long alStack_2e8 [4];
  long lStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  char *pcStack_2b0;
  section *psStack_2a8;
  section *psStack_2a0;
  section *psStack_298;
  undefined1 ***pppuStack_290;
  code *pcStack_288;
  undefined1 auStack_280 [24];
  section *psStack_268;
  undefined1 auStack_260 [23];
  byte bStack_249;
  undefined1 auStack_230 [96];
  char acStack_1d0 [20];
  section sStack_1bc;
  long lStack_138;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  undefined1 *puStack_e0;
  uint *puStack_d8;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_bc [8];
  undefined1 auStack_b4 [124];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar9 = param_1;
  FUN_003a0660(param_1,auStack_bc);
  iVar7 = (int)puVar9;
  puVar9 = param_1;
  if (iVar7 != 0) {
    puVar9 = auStack_bc;
  }
  if (puVar9[1] == '\x02') {
    puVar9 = param_1;
    if (iVar7 != 0) {
      puVar9 = auStack_bc;
    }
    if (*(int *)(puVar9 + 4) != 0) goto LAB_003a07f0;
LAB_003a07f8:
    puVar1 = (ushort *)(param_1 + 2);
    if (iVar7 != 0) {
      puVar1 = (ushort *)((ulong)auStack_bc | 2);
    }
    uVar8 = (uint)*puVar1;
    func_0x003c4da0();
    *param_2 = uVar8;
    psVar10 = (section *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    if (puVar9[1] == '\x1e') {
      lVar17 = 0;
      puVar9 = param_1 + 8;
      if (iVar7 != 0) {
        puVar9 = auStack_b4;
      }
      do {
        if (puVar9[lVar17] != '\0') goto LAB_003a07f0;
        lVar17 = lVar17 + 1;
      } while (lVar17 != 0x10);
      goto LAB_003a07f8;
    }
LAB_003a07f0:
    psVar10 = (section *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  uStack_c8 = 0x3a084c;
  puStack_e0 = param_1;
  puStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x003a0878();
  if ((uint)psVar10 < 0x10000) {
    param_3[1].offset = 0;
    param_3[1].segname[8] = '\0';
    param_3[1].segname[9] = '\0';
    param_3[1].segname[10] = '\0';
    param_3[1].segname[0xb] = '\0';
    param_3[1].segname[0xc] = '\0';
    param_3[1].segname[0xd] = '\0';
    param_3[1].segname[0xe] = '\0';
    param_3[1].segname[0xf] = '\0';
    param_3[1].segname[0] = '\0';
    param_3[1].segname[1] = '\0';
    param_3[1].segname[2] = '\0';
    param_3[1].segname[3] = '\0';
    param_3[1].segname[4] = '\0';
    param_3[1].segname[5] = '\0';
    param_3[1].segname[6] = '\0';
    param_3[1].segname[7] = '\0';
    param_3[1].size = 0;
    param_3[1].addr = 0;
    param_3->reserved2 = 0;
    param_3->reserved3 = 0;
    param_3->flags = 0;
    param_3->reserved1 = 0;
    param_3[1].sectname[8] = '\0';
    param_3[1].sectname[9] = '\0';
    param_3[1].sectname[10] = '\0';
    param_3[1].sectname[0xb] = '\0';
    param_3[1].sectname[0xc] = '\0';
    param_3[1].sectname[0xd] = '\0';
    param_3[1].sectname[0xe] = '\0';
    param_3[1].sectname[0xf] = '\0';
    param_3[1].sectname[0] = '\0';
    param_3[1].sectname[1] = '\0';
    param_3[1].sectname[2] = '\0';
    param_3[1].sectname[3] = '\0';
    param_3[1].sectname[4] = '\0';
    param_3[1].sectname[5] = '\0';
    param_3[1].sectname[6] = '\0';
    param_3[1].sectname[7] = '\0';
    param_3->size = 0;
    param_3->addr = 0;
    param_3->reloff = 0;
    param_3->nrelocs = 0;
    param_3->offset = 0;
    param_3->align = 0;
    param_3->sectname[8] = '\0';
    param_3->sectname[9] = '\0';
    param_3->sectname[10] = '\0';
    param_3->sectname[0xb] = '\0';
    param_3->sectname[0xc] = '\0';
    param_3->sectname[0xd] = '\0';
    param_3->sectname[0xe] = '\0';
    param_3->sectname[0xf] = '\0';
    param_3->sectname[0] = '\0';
    param_3->sectname[1] = '\0';
    param_3->sectname[2] = '\0';
    param_3->sectname[3] = '\0';
    param_3->sectname[4] = '\0';
    param_3->sectname[5] = '\0';
    param_3->sectname[6] = '\0';
    param_3->sectname[7] = '\0';
    param_3->segname[8] = '\0';
    param_3->segname[9] = '\0';
    param_3->segname[10] = '\0';
    param_3->segname[0xb] = '\0';
    param_3->segname[0xc] = '\0';
    param_3->segname[0xd] = '\0';
    param_3->segname[0xe] = '\0';
    param_3->segname[0xf] = '\0';
    param_3->segname[0] = '\0';
    param_3->segname[1] = '\0';
    param_3->segname[2] = '\0';
    param_3->segname[3] = '\0';
    param_3->segname[4] = '\0';
    param_3->segname[5] = '\0';
    param_3->segname[6] = '\0';
    param_3->segname[7] = '\0';
    param_3->sectname[1] = '\x1e';
    uVar6 = SUB82(psVar10,0);
    func_0x003c4d98();
    *(undefined2 *)(param_3->sectname + 2) = uVar6;
    param_3[1].offset = 0x1c;
    return;
  }
  func_0x007733b4();
  pcStack_e8 = FUN_003a0930;
  lStack_138 = *(long *)PTR____stack_chk_guard_00999f88;
  psVar11 = psVar10;
  ppuStack_f0 = &puStack_d0;
  ___error();
  uVar8 = *(uint *)psVar11->sectname;
  if ((int)param_3 != 0) {
    param_3 = &sStack_1bc;
    psVar11 = psVar10;
    FUN_003a0660(psVar10,&sStack_1bc);
    if ((int)psVar11 != 0) {
      psVar10 = param_3;
    }
  }
  acStack_1d0[8] = '\0';
  acStack_1d0[9] = '\0';
  acStack_1d0[10] = '\0';
  acStack_1d0[0xb] = '\0';
  acStack_1d0[0xc] = '\0';
  acStack_1d0[0xd] = '\0';
  acStack_1d0[0xe] = '\0';
  acStack_1d0[0] = '\0';
  acStack_1d0[1] = '\0';
  acStack_1d0[2] = '\0';
  acStack_1d0[3] = '\0';
  acStack_1d0[4] = '\0';
  acStack_1d0[5] = '\0';
  acStack_1d0[6] = '\0';
  acStack_1d0[7] = '\0';
  bVar4 = psVar10->sectname[1];
  if (bVar4 == 0x1e) {
    param_3 = (section *)(ulong)*(ushort *)(psVar10->sectname + 2);
    func_0x003c4da0();
    pcVar16 = psVar10->sectname + 8;
    unaff_x24 = (ulong)*(uint *)(psVar10->segname + 8);
LAB_003a0a30:
    uVar12 = (ulong)(byte)psVar10->sectname[1];
    FUN_003c4dac(uVar12,pcVar16,auStack_230 + 0x32,0x2e);
    if (uVar12 == 0) {
      bVar4 = psVar10->sectname[1];
LAB_003a0ad8:
      uVar12 = (ulong)bVar4;
      auStack_230._0_8_ = "Unknown sockaddr family: ";
      auStack_230[8] = '\x19';
      auStack_230[9] = '\0';
      auStack_230[10] = '\0';
      auStack_230[0xb] = '\0';
      auStack_230[0xc] = '\0';
      auStack_230[0xd] = '\0';
      auStack_230[0xe] = '\0';
      auStack_230[0xf] = '\0';
      psVar10 = (section *)(auStack_260 + 0x10);
      func_0x00574ac0(uVar12,psVar10);
      auStack_260._8_8_ = uVar12 - (long)psVar10;
      auStack_260._0_8_ = psVar10;
      FUN_00575d30(auStack_280,auStack_230,auStack_260);
      psVar10 = (section *)auStack_280._0_8_;
      if (-1 < (char)auStack_280[0x17]) {
        auStack_280._8_8_ = (ulong)auStack_280[0x17];
        psVar10 = (section *)auStack_280;
      }
      func_0x005535e8(&psStack_268,psVar10,auStack_280._8_8_);
      iVar7 = (int)&psStack_268;
      FUN_003a1488(extraout_x8);
      psVar11 = psStack_268;
      if (((ulong)psStack_268 & 1) != 0) {
        FUN_0055293c();
        psVar11 = psStack_268;
      }
      psVar10 = (section *)auStack_280;
      if ((char)auStack_280[0x17] < '\0') {
        __ZdlPv();
        psVar11 = (section *)auStack_280._0_8_;
        psVar10 = (section *)auStack_280;
      }
    }
    else {
      if ((int)unaff_x24 == 0) {
        puVar9 = auStack_230 + 0x32;
        _strlen();
        psVar11 = (section *)(auStack_230 + 0x32);
        FUN_0033ae40(auStack_230,psVar11,puVar9,param_3);
        iVar7 = (int)puVar9;
        acStack_1d0[0] = auStack_230[8];
        acStack_1d0[1] = auStack_230[9];
        acStack_1d0[2] = auStack_230[10];
        acStack_1d0[3] = auStack_230[0xb];
        acStack_1d0[4] = auStack_230[0xc];
        acStack_1d0[5] = auStack_230[0xd];
        acStack_1d0[6] = auStack_230[0xe];
        acStack_1d0[7] = auStack_230[0xf];
        acStack_1d0[8] = auStack_230[0x10];
        acStack_1d0[9] = auStack_230[0x11];
        acStack_1d0[10] = auStack_230[0x12];
        acStack_1d0[0xb] = auStack_230[0x13];
        acStack_1d0[0xc] = auStack_230[0x14];
        acStack_1d0[0xd] = auStack_230[0x15];
        acStack_1d0[0xe] = auStack_230[0x16];
        param_3 = (section *)(ulong)auStack_230[0x17];
        psVar10 = (section *)auStack_230._0_8_;
      }
      else {
        auStack_230._0_8_ = auStack_230 + 0x32;
        auStack_230[8] = -0x68;
        auStack_230[9] = '\x0e';
        auStack_230[10] = 'V';
        auStack_230[0xb] = '\0';
        auStack_230[0xc] = '\0';
        auStack_230[0xd] = '\0';
        auStack_230[0xe] = '\0';
        auStack_230[0xf] = '\0';
        auStack_230._16_7_ = (undefined7)unaff_x24;
        auStack_230[0x17] = 0;
        auStack_230[0x18] = -0x14;
        auStack_230[0x19] = '\x06';
        auStack_230[0x1a] = 'V';
        auStack_230[0x1b] = '\0';
        auStack_230[0x1c] = '\0';
        auStack_230[0x1d] = '\0';
        auStack_230[0x1e] = '\0';
        auStack_230[0x1f] = '\0';
        FUN_0056189c(auStack_260,"%s%%%u",6,auStack_230,2);
        uVar12 = auStack_260._8_8_;
        psVar11 = (section *)auStack_260._0_8_;
        if (-1 < (char)bStack_249) {
          uVar12 = (ulong)bStack_249;
          psVar11 = (section *)auStack_260;
        }
        FUN_0033ae40(auStack_230,psVar11,uVar12,param_3);
        psVar10 = (section *)auStack_230._0_8_;
        iVar7 = (int)uVar12;
        acStack_1d0[0] = auStack_230[8];
        acStack_1d0[1] = auStack_230[9];
        acStack_1d0[2] = auStack_230[10];
        acStack_1d0[3] = auStack_230[0xb];
        acStack_1d0[4] = auStack_230[0xc];
        acStack_1d0[5] = auStack_230[0xd];
        acStack_1d0[6] = auStack_230[0xe];
        acStack_1d0[7] = auStack_230[0xf];
        acStack_1d0[8] = auStack_230[0x10];
        acStack_1d0[9] = auStack_230[0x11];
        acStack_1d0[10] = auStack_230[0x12];
        acStack_1d0[0xb] = auStack_230[0x13];
        acStack_1d0[0xc] = auStack_230[0x14];
        acStack_1d0[0xd] = auStack_230[0x15];
        acStack_1d0[0xe] = auStack_230[0x16];
        param_3 = (section *)(ulong)auStack_230[0x17];
        if ((char)bStack_249 < '\0') {
          psVar11 = (section *)auStack_260._0_8_;
          __ZdlPv();
        }
      }
      ___error();
      *(uint *)psVar11->sectname = uVar8;
      extraout_x8[1] = psVar10;
      extraout_x8[2] = CONCAT17(acStack_1d0[7],acStack_1d0._0_7_);
      *(ulong *)((long)extraout_x8 + 0x17) = CONCAT71(acStack_1d0._8_7_,acStack_1d0[7]);
      *(char *)((long)extraout_x8 + 0x1f) = (char)param_3;
LAB_003a0c04:
      *extraout_x8 = 0;
    }
  }
  else {
    if (bVar4 == 2) {
      param_3 = (section *)(ulong)*(ushort *)(psVar10->sectname + 2);
      func_0x003c4da0();
      unaff_x24 = 0;
      pcVar16 = psVar10->sectname + 4;
      goto LAB_003a0a30;
    }
    if (bVar4 != 1) goto LAB_003a0ad8;
    param_3 = (section *)(psVar10->sectname + 2);
    if (param_3->sectname[0] != '\0') {
      psVar11 = param_3;
      _strnlen(param_3,0x68);
      if (psVar11 == &section_00000068) {
        func_0x005535e8(auStack_230,"UDS path is not null-terminated",0x1f);
        iVar7 = (int)auStack_230;
        FUN_003a1488(extraout_x8);
        psVar11 = (section *)auStack_230._0_8_;
        if ((auStack_230._0_8_ & 1) != 0) {
          FUN_0055293c();
        }
        goto LAB_003a0c08;
      }
      psVar11 = (section *)auStack_230;
      psVar13 = param_3;
      FUN_00353254();
      iVar7 = (int)psVar13;
LAB_003a0bdc:
      acStack_1d0[0] = auStack_230[8];
      acStack_1d0[1] = auStack_230[9];
      acStack_1d0[2] = auStack_230[10];
      acStack_1d0[3] = auStack_230[0xb];
      acStack_1d0[4] = auStack_230[0xc];
      acStack_1d0[5] = auStack_230[0xd];
      acStack_1d0[6] = auStack_230[0xe];
      acStack_1d0[7] = auStack_230[0xf];
      acStack_1d0[8] = auStack_230[0x10];
      acStack_1d0[9] = auStack_230[0x11];
      acStack_1d0[10] = auStack_230[0x12];
      acStack_1d0[0xb] = auStack_230[0x13];
      acStack_1d0[0xc] = auStack_230[0x14];
      acStack_1d0[0xd] = auStack_230[0x15];
      acStack_1d0[0xe] = auStack_230[0x16];
      extraout_x8[1] = auStack_230._0_8_;
      extraout_x8[2] = CONCAT17(auStack_230[0xf],auStack_230._8_7_);
      *(ulong *)((long)extraout_x8 + 0x17) = CONCAT71(auStack_230._16_7_,auStack_230[0xf]);
      *(byte *)((long)extraout_x8 + 0x1f) = auStack_230[0x17];
      goto LAB_003a0c04;
    }
    if (0 < (int)(psVar10[1].offset - 1)) {
      psVar11 = (section *)auStack_230;
      psVar13 = param_3;
      FUN_0035d0e4();
      iVar7 = (int)psVar13;
      goto LAB_003a0bdc;
    }
    func_0x005535e8(auStack_230,"empty UDS abstract path",0x17);
    iVar7 = (int)auStack_230;
    FUN_003a1488(extraout_x8);
    psVar11 = (section *)auStack_230._0_8_;
    if ((auStack_230._0_8_ & 1) != 0) {
      FUN_0055293c();
    }
  }
LAB_003a0c08:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_138) {
    return;
  }
  ___stack_chk_fail();
  if ((iVar7 != 0) && (func_0x0040cf10(), ((uint)param_3 >> 7 & 1) != 0)) {
    __ZdlPv(psVar10);
  }
  psVar13 = psVar11;
  __Unwind_Resume();
  uStack_2c0 = unaff_x24;
  uStack_2b8 = (ulong)uVar8;
  pcStack_2b0 = acStack_1d0;
  psStack_2a8 = param_3;
  psStack_2a0 = psVar10;
  psStack_298 = psVar11;
  pppuStack_290 = &ppuStack_f0;
  pcStack_288 = FUN_003a0d08;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_00999f88;
  if (psVar13[1].offset == 0) {
    func_0x005535e8(&pppppcStack_390,"Empty address",0xd);
    FUN_003a1488(extraout_x8_00,&pppppcStack_390);
    ppppppcVar14 = (char ******)pppppcStack_390;
    if (((ulong)pppppcStack_390 & 1) != 0) {
      FUN_0055293c();
    }
    goto LAB_003a117c;
  }
  psVar10 = psVar13;
  FUN_003a0660();
  iVar7 = (int)psVar10;
  psVar10 = psVar13;
  if (iVar7 != 0) {
    psVar10 = &sStack_414;
  }
  bVar4 = psVar10->sectname[1];
  uVar12 = (ulong)bVar4;
  if (bVar4 == 1) {
    pcStack_2f8 = (char *)0x0;
    lStack_2f0 = 0;
    alStack_2e8[0] = 0;
    pppppcStack_430 = (char *****)0x0;
    uStack_428 = 0;
    uStack_420 = 0;
    pcVar16 = psVar13->sectname + 2;
    psVar10 = psVar13;
    if (iVar7 != 0) {
      pcVar16 = (char *)((ulong)&sStack_414 | 2);
      psVar10 = &sStack_414;
    }
    if (psVar10->sectname[2] == '\0') {
      pcVar2 = psVar13->sectname + 3;
      psVar10 = psVar13;
      if (iVar7 != 0) {
        pcVar2 = (char *)((ulong)&sStack_414 | 3);
        psVar10 = &sStack_414;
      }
      if (psVar10->sectname[3] == '\0') goto LAB_003a0de4;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                (&pcStack_2f8,"unix-abstract");
      pdVar3 = &psVar13[1].offset;
      if (iVar7 != 0) {
        pdVar3 = &dStack_394;
      }
      FUN_0035d0e4(&pppppcStack_390,pcVar2,(ulong)*pdVar3 - 2);
      if ((long)uStack_420 < 0) {
        __ZdlPv(pppppcStack_430);
      }
      uStack_428 = uStack_388;
      pppppcStack_430 = pppppcStack_390;
      uStack_420 = lStack_380;
    }
    else {
LAB_003a0de4:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                (&pcStack_2f8,"unix");
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                (&pppppcStack_430,pcVar16);
    }
    uStack_448 = lStack_2f0;
    ppppcStack_450 = (char ****)pcStack_2f8;
    lStack_440 = alStack_2e8[0];
    pcStack_2f8 = (char *)0x0;
    lStack_2f0 = 0;
    alStack_2e8[0] = 0;
    FUN_00353254(auStack_468,"");
    uStack_478 = uStack_428;
    pppppcStack_480 = pppppcStack_430;
    lStack_470 = uStack_420;
    uStack_428 = 0;
    uStack_420 = 0;
    pppppcStack_430 = (char *****)0x0;
    uStack_490 = 0;
    uStack_488 = 0;
    ppppcStack_498 = (char ****)0x0;
    FUN_00353254(auStack_4b0,"");
    FUN_00401f2c(&pppppcStack_390,&ppppcStack_450,auStack_468,&pppppcStack_480,&ppppcStack_498,
                 auStack_4b0);
    if (cStack_499 < '\0') {
      __ZdlPv(auStack_4b0[0]);
    }
    pppppcStack_4c8 = &ppppcStack_498;
    FUN_0035af5c(&pppppcStack_4c8);
    if (lStack_470 < 0) {
      __ZdlPv(pppppcStack_480);
    }
    if (cStack_451 < '\0') {
      __ZdlPv(auStack_468[0]);
    }
    if (lStack_440 < 0) {
      __ZdlPv(ppppcStack_450);
    }
    if ((char ******)pppppcStack_390 == (char ******)0x0) {
      FUN_00402368(&pppppcStack_4c8,&uStack_388);
      extraout_x8_00[2] = uStack_4c0;
      extraout_x8_00[1] = pppppcStack_4c8;
      extraout_x8_00[3] = uStack_4b8;
      *extraout_x8_00 = 0;
    }
    else {
      FUN_003a14e0(extraout_x8_00,&pppppcStack_390);
    }
    ppppppcVar14 = &pppppcStack_390;
    FUN_0035afe0();
    if ((long)uStack_420 < 0) {
      ppppppcVar14 = (char ******)pppppcStack_430;
      __ZdlPv();
    }
    goto LAB_003a117c;
  }
  if (bVar4 == 2) {
    pcVar16 = "ipv4";
LAB_003a0e0c:
    if (*(int *)pcVar16 != 0x78696e75 || (char)*(int *)((long)pcVar16 + 4) != '\0') {
      FUN_003a0930(&pcStack_2f8,psVar10,0);
      if (pcStack_2f8 == (char *)0x0) {
        FUN_00353254(auStack_4e0,pcVar16);
        FUN_00353254(auStack_4f8,"");
        ppcVar15 = &pcStack_2f8;
        FUN_00375c3c();
        pcStack_508 = ppcVar15[1];
        pcStack_510 = *ppcVar15;
        pcStack_500 = ppcVar15[2];
        ppcVar15[1] = (char *)0x0;
        ppcVar15[2] = (char *)0x0;
        *ppcVar15 = (char *)0x0;
        ppppcStack_528 = (char ****)0x0;
        uStack_520 = 0;
        uStack_518 = 0;
        FUN_00353254(auStack_540,"");
        FUN_00401f2c(&pppppcStack_390,auStack_4e0,auStack_4f8,&pcStack_510,&ppppcStack_528,
                     auStack_540);
        if (cStack_529 < '\0') {
          __ZdlPv(auStack_540[0]);
        }
        pppppcStack_430 = &ppppcStack_528;
        FUN_0035af5c(&pppppcStack_430);
        if ((long)pcStack_500 < 0) {
          __ZdlPv(pcStack_510);
        }
        if (cStack_4e1 < '\0') {
          __ZdlPv(auStack_4f8[0]);
        }
        if (cStack_4c9 < '\0') {
          __ZdlPv(auStack_4e0[0]);
        }
        if ((char ******)pppppcStack_390 == (char ******)0x0) {
          FUN_00402368(&pppppcStack_430,&uStack_388);
          extraout_x8_00[2] = uStack_428;
          extraout_x8_00[1] = pppppcStack_430;
          extraout_x8_00[3] = uStack_420;
          *extraout_x8_00 = 0;
        }
        else {
          FUN_003a14e0(extraout_x8_00,&pppppcStack_390);
        }
        FUN_0035afe0(&pppppcStack_390);
      }
      else {
        *extraout_x8_00 = pcStack_2f8;
        pcStack_2f8 = segment_command_00000020.segname + 0xe;
      }
      ppppppcVar14 = (char ******)&pcStack_2f8;
      FUN_0035d18c();
      goto LAB_003a117c;
    }
  }
  else if (bVar4 == 0x1e) {
    pcVar16 = "ipv6";
    goto LAB_003a0e0c;
  }
  pppppcStack_390 = (char *****)0x8c6b27;
  uStack_388 = 0x1e;
  func_0x00574ac0(uVar12,alStack_2e8);
  lStack_2f0 = uVar12 - (long)alStack_2e8;
  pcStack_2f8 = (char *)alStack_2e8;
  FUN_00575d30(&pppppcStack_430,&pppppcStack_390,&pcStack_2f8);
  uVar12 = uStack_428;
  ppppppcVar14 = (char ******)pppppcStack_430;
  if (-1 < (long)uStack_420) {
    uVar12 = uStack_420 >> 0x38;
    ppppppcVar14 = &pppppcStack_430;
  }
  func_0x005535e8(&pppppcStack_4c8,ppppppcVar14,uVar12);
  FUN_003a1488(extraout_x8_00,&pppppcStack_4c8);
  ppppppcVar14 = (char ******)pppppcStack_4c8;
  if (((ulong)pppppcStack_4c8 & 1) != 0) {
    FUN_0055293c();
  }
  if ((long)uStack_420 < 0) {
    ppppppcVar14 = (char ******)pppppcStack_430;
    __ZdlPv();
  }
LAB_003a117c:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  FUN_0035afe0(&pppppcStack_390);
  FUN_0035d18c(&pcStack_2f8);
  __Unwind_Resume();
  cVar5 = *(char *)((long)ppppppcVar14 + 1);
  if (cVar5 != '\x01') {
    if ((cVar5 == '\x1e') || (cVar5 == '\x02')) {
      func_0x003c4da0(*(undefined2 *)((long)ppppppcVar14 + 2));
    }
    else {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/sockaddr_utils.cc"
                   ,0x13e,2,"Unknown socket family %d in grpc_sockaddr_get_port");
    }
  }
  return;
}



/* Entry: 003a084c; end: 003a092f;  */

/* WARNING: Removing unreachable block (ram,0x003a113c) */

void FUN_003a084c(section *param_1,undefined8 param_2,section *param_3)

{
  char *pcVar1;
  dword *pdVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  undefined2 uVar6;
  int iVar7;
  section *psVar8;
  ulong uVar9;
  undefined1 *puVar10;
  section *psVar11;
  char ******ppppppcVar12;
  char **ppcVar13;
  char *pcVar14;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  ulong unaff_x24;
  undefined8 auStack_480 [2];
  char cStack_469;
  char ****ppppcStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  char *pcStack_450;
  char *pcStack_448;
  char *pcStack_440;
  undefined8 auStack_438 [2];
  char cStack_421;
  undefined8 auStack_420 [2];
  char cStack_409;
  char *****pppppcStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 auStack_3f0 [2];
  char cStack_3d9;
  char ****ppppcStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  char *****pppppcStack_3c0;
  undefined8 uStack_3b8;
  long lStack_3b0;
  undefined8 auStack_3a8 [2];
  char cStack_391;
  char ****ppppcStack_390;
  undefined8 uStack_388;
  long lStack_380;
  char *****pppppcStack_370;
  ulong uStack_368;
  ulong uStack_360;
  section sStack_354;
  dword dStack_2d4;
  char *****pppppcStack_2d0;
  undefined8 uStack_2c8;
  long lStack_2c0;
  char *pcStack_238;
  long lStack_230;
  long alStack_228 [4];
  long lStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  char *pcStack_1f0;
  section *psStack_1e8;
  section *psStack_1e0;
  section *psStack_1d8;
  undefined1 **ppuStack_1d0;
  code *pcStack_1c8;
  undefined1 auStack_1c0 [24];
  section *psStack_1a8;
  undefined1 auStack_1a0 [23];
  byte bStack_189;
  undefined1 auStack_170 [96];
  char acStack_110 [20];
  section sStack_fc;
  long lStack_78;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  func_0x003a0878();
  if ((uint)param_1 < 0x10000) {
    param_3[1].offset = 0;
    param_3[1].segname[8] = '\0';
    param_3[1].segname[9] = '\0';
    param_3[1].segname[10] = '\0';
    param_3[1].segname[0xb] = '\0';
    param_3[1].segname[0xc] = '\0';
    param_3[1].segname[0xd] = '\0';
    param_3[1].segname[0xe] = '\0';
    param_3[1].segname[0xf] = '\0';
    param_3[1].segname[0] = '\0';
    param_3[1].segname[1] = '\0';
    param_3[1].segname[2] = '\0';
    param_3[1].segname[3] = '\0';
    param_3[1].segname[4] = '\0';
    param_3[1].segname[5] = '\0';
    param_3[1].segname[6] = '\0';
    param_3[1].segname[7] = '\0';
    param_3[1].size = 0;
    param_3[1].addr = 0;
    param_3->reserved2 = 0;
    param_3->reserved3 = 0;
    param_3->flags = 0;
    param_3->reserved1 = 0;
    param_3[1].sectname[8] = '\0';
    param_3[1].sectname[9] = '\0';
    param_3[1].sectname[10] = '\0';
    param_3[1].sectname[0xb] = '\0';
    param_3[1].sectname[0xc] = '\0';
    param_3[1].sectname[0xd] = '\0';
    param_3[1].sectname[0xe] = '\0';
    param_3[1].sectname[0xf] = '\0';
    param_3[1].sectname[0] = '\0';
    param_3[1].sectname[1] = '\0';
    param_3[1].sectname[2] = '\0';
    param_3[1].sectname[3] = '\0';
    param_3[1].sectname[4] = '\0';
    param_3[1].sectname[5] = '\0';
    param_3[1].sectname[6] = '\0';
    param_3[1].sectname[7] = '\0';
    param_3->size = 0;
    param_3->addr = 0;
    param_3->reloff = 0;
    param_3->nrelocs = 0;
    param_3->offset = 0;
    param_3->align = 0;
    param_3->sectname[8] = '\0';
    param_3->sectname[9] = '\0';
    param_3->sectname[10] = '\0';
    param_3->sectname[0xb] = '\0';
    param_3->sectname[0xc] = '\0';
    param_3->sectname[0xd] = '\0';
    param_3->sectname[0xe] = '\0';
    param_3->sectname[0xf] = '\0';
    param_3->sectname[0] = '\0';
    param_3->sectname[1] = '\0';
    param_3->sectname[2] = '\0';
    param_3->sectname[3] = '\0';
    param_3->sectname[4] = '\0';
    param_3->sectname[5] = '\0';
    param_3->sectname[6] = '\0';
    param_3->sectname[7] = '\0';
    param_3->segname[8] = '\0';
    param_3->segname[9] = '\0';
    param_3->segname[10] = '\0';
    param_3->segname[0xb] = '\0';
    param_3->segname[0xc] = '\0';
    param_3->segname[0xd] = '\0';
    param_3->segname[0xe] = '\0';
    param_3->segname[0xf] = '\0';
    param_3->segname[0] = '\0';
    param_3->segname[1] = '\0';
    param_3->segname[2] = '\0';
    param_3->segname[3] = '\0';
    param_3->segname[4] = '\0';
    param_3->segname[5] = '\0';
    param_3->segname[6] = '\0';
    param_3->segname[7] = '\0';
    param_3->sectname[1] = '\x1e';
    uVar6 = SUB82(param_1,0);
    FUN_003c4d98();
    *(undefined2 *)(param_3->sectname + 2) = uVar6;
    param_3[1].offset = 0x1c;
    return;
  }
  func_0x007733b4();
  pcStack_28 = FUN_003a0930;
  lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
  psVar8 = param_1;
  puStack_30 = &stack0xfffffffffffffff0;
  ___error();
  uVar3 = *(uint *)psVar8->sectname;
  if ((int)param_3 != 0) {
    param_3 = &sStack_fc;
    psVar8 = param_1;
    FUN_003a0660(param_1,&sStack_fc);
    if ((int)psVar8 != 0) {
      param_1 = param_3;
    }
  }
  acStack_110[8] = '\0';
  acStack_110[9] = '\0';
  acStack_110[10] = '\0';
  acStack_110[0xb] = '\0';
  acStack_110[0xc] = '\0';
  acStack_110[0xd] = '\0';
  acStack_110[0xe] = '\0';
  acStack_110[0] = '\0';
  acStack_110[1] = '\0';
  acStack_110[2] = '\0';
  acStack_110[3] = '\0';
  acStack_110[4] = '\0';
  acStack_110[5] = '\0';
  acStack_110[6] = '\0';
  acStack_110[7] = '\0';
  bVar4 = param_1->sectname[1];
  if (bVar4 == 0x1e) {
    param_3 = (section *)(ulong)*(ushort *)(param_1->sectname + 2);
    func_0x003c4da0();
    pcVar14 = param_1->sectname + 8;
    unaff_x24 = (ulong)*(uint *)(param_1->segname + 8);
LAB_003a0a30:
    uVar9 = (ulong)(byte)param_1->sectname[1];
    FUN_003c4dac(uVar9,pcVar14,auStack_170 + 0x32,0x2e);
    if (uVar9 == 0) {
      bVar4 = param_1->sectname[1];
LAB_003a0ad8:
      uVar9 = (ulong)bVar4;
      auStack_170._0_8_ = "Unknown sockaddr family: ";
      auStack_170[8] = '\x19';
      auStack_170[9] = '\0';
      auStack_170[10] = '\0';
      auStack_170[0xb] = '\0';
      auStack_170[0xc] = '\0';
      auStack_170[0xd] = '\0';
      auStack_170[0xe] = '\0';
      auStack_170[0xf] = '\0';
      psVar8 = (section *)(auStack_1a0 + 0x10);
      func_0x00574ac0(uVar9,psVar8);
      auStack_1a0._8_8_ = uVar9 - (long)psVar8;
      auStack_1a0._0_8_ = psVar8;
      FUN_00575d30(auStack_1c0,auStack_170,auStack_1a0);
      psVar8 = (section *)auStack_1c0._0_8_;
      if (-1 < (char)auStack_1c0[0x17]) {
        auStack_1c0._8_8_ = (ulong)auStack_1c0[0x17];
        psVar8 = (section *)auStack_1c0;
      }
      func_0x005535e8(&psStack_1a8,psVar8,auStack_1c0._8_8_);
      iVar7 = (int)&psStack_1a8;
      FUN_003a1488(extraout_x8);
      psVar8 = psStack_1a8;
      if (((ulong)psStack_1a8 & 1) != 0) {
        FUN_0055293c();
        psVar8 = psStack_1a8;
      }
      param_1 = (section *)auStack_1c0;
      if ((char)auStack_1c0[0x17] < '\0') {
        __ZdlPv();
        psVar8 = (section *)auStack_1c0._0_8_;
        param_1 = (section *)auStack_1c0;
      }
    }
    else {
      if ((int)unaff_x24 == 0) {
        puVar10 = auStack_170 + 0x32;
        _strlen();
        psVar8 = (section *)(auStack_170 + 0x32);
        FUN_0033ae40(auStack_170,psVar8,puVar10,param_3);
        iVar7 = (int)puVar10;
        acStack_110[0] = auStack_170[8];
        acStack_110[1] = auStack_170[9];
        acStack_110[2] = auStack_170[10];
        acStack_110[3] = auStack_170[0xb];
        acStack_110[4] = auStack_170[0xc];
        acStack_110[5] = auStack_170[0xd];
        acStack_110[6] = auStack_170[0xe];
        acStack_110[7] = auStack_170[0xf];
        acStack_110[8] = auStack_170[0x10];
        acStack_110[9] = auStack_170[0x11];
        acStack_110[10] = auStack_170[0x12];
        acStack_110[0xb] = auStack_170[0x13];
        acStack_110[0xc] = auStack_170[0x14];
        acStack_110[0xd] = auStack_170[0x15];
        acStack_110[0xe] = auStack_170[0x16];
        param_3 = (section *)(ulong)auStack_170[0x17];
        param_1 = (section *)auStack_170._0_8_;
      }
      else {
        auStack_170._0_8_ = auStack_170 + 0x32;
        auStack_170[8] = -0x68;
        auStack_170[9] = '\x0e';
        auStack_170[10] = 'V';
        auStack_170[0xb] = '\0';
        auStack_170[0xc] = '\0';
        auStack_170[0xd] = '\0';
        auStack_170[0xe] = '\0';
        auStack_170[0xf] = '\0';
        auStack_170._16_7_ = (undefined7)unaff_x24;
        auStack_170[0x17] = 0;
        auStack_170[0x18] = -0x14;
        auStack_170[0x19] = '\x06';
        auStack_170[0x1a] = 'V';
        auStack_170[0x1b] = '\0';
        auStack_170[0x1c] = '\0';
        auStack_170[0x1d] = '\0';
        auStack_170[0x1e] = '\0';
        auStack_170[0x1f] = '\0';
        FUN_0056189c(auStack_1a0,"%s%%%u",6,auStack_170,2);
        uVar9 = auStack_1a0._8_8_;
        psVar8 = (section *)auStack_1a0._0_8_;
        if (-1 < (char)bStack_189) {
          uVar9 = (ulong)bStack_189;
          psVar8 = (section *)auStack_1a0;
        }
        FUN_0033ae40(auStack_170,psVar8,uVar9,param_3);
        param_1 = (section *)auStack_170._0_8_;
        iVar7 = (int)uVar9;
        acStack_110[0] = auStack_170[8];
        acStack_110[1] = auStack_170[9];
        acStack_110[2] = auStack_170[10];
        acStack_110[3] = auStack_170[0xb];
        acStack_110[4] = auStack_170[0xc];
        acStack_110[5] = auStack_170[0xd];
        acStack_110[6] = auStack_170[0xe];
        acStack_110[7] = auStack_170[0xf];
        acStack_110[8] = auStack_170[0x10];
        acStack_110[9] = auStack_170[0x11];
        acStack_110[10] = auStack_170[0x12];
        acStack_110[0xb] = auStack_170[0x13];
        acStack_110[0xc] = auStack_170[0x14];
        acStack_110[0xd] = auStack_170[0x15];
        acStack_110[0xe] = auStack_170[0x16];
        param_3 = (section *)(ulong)auStack_170[0x17];
        if ((char)bStack_189 < '\0') {
          psVar8 = (section *)auStack_1a0._0_8_;
          __ZdlPv();
        }
      }
      ___error();
      *(uint *)psVar8->sectname = uVar3;
      extraout_x8[1] = param_1;
      extraout_x8[2] = CONCAT17(acStack_110[7],acStack_110._0_7_);
      *(ulong *)((long)extraout_x8 + 0x17) = CONCAT71(acStack_110._8_7_,acStack_110[7]);
      *(char *)((long)extraout_x8 + 0x1f) = (char)param_3;
LAB_003a0c04:
      *extraout_x8 = 0;
    }
  }
  else {
    if (bVar4 == 2) {
      param_3 = (section *)(ulong)*(ushort *)(param_1->sectname + 2);
      func_0x003c4da0();
      unaff_x24 = 0;
      pcVar14 = param_1->sectname + 4;
      goto LAB_003a0a30;
    }
    if (bVar4 != 1) goto LAB_003a0ad8;
    param_3 = (section *)(param_1->sectname + 2);
    if (param_3->sectname[0] != '\0') {
      psVar8 = param_3;
      _strnlen(param_3,0x68);
      if (psVar8 == &section_00000068) {
        func_0x005535e8(auStack_170,"UDS path is not null-terminated",0x1f);
        iVar7 = (int)auStack_170;
        FUN_003a1488(extraout_x8);
        psVar8 = (section *)auStack_170._0_8_;
        if ((auStack_170._0_8_ & 1) != 0) {
          FUN_0055293c();
        }
        goto LAB_003a0c08;
      }
      psVar8 = (section *)auStack_170;
      psVar11 = param_3;
      FUN_00353254();
      iVar7 = (int)psVar11;
LAB_003a0bdc:
      acStack_110[0] = auStack_170[8];
      acStack_110[1] = auStack_170[9];
      acStack_110[2] = auStack_170[10];
      acStack_110[3] = auStack_170[0xb];
      acStack_110[4] = auStack_170[0xc];
      acStack_110[5] = auStack_170[0xd];
      acStack_110[6] = auStack_170[0xe];
      acStack_110[7] = auStack_170[0xf];
      acStack_110[8] = auStack_170[0x10];
      acStack_110[9] = auStack_170[0x11];
      acStack_110[10] = auStack_170[0x12];
      acStack_110[0xb] = auStack_170[0x13];
      acStack_110[0xc] = auStack_170[0x14];
      acStack_110[0xd] = auStack_170[0x15];
      acStack_110[0xe] = auStack_170[0x16];
      extraout_x8[1] = auStack_170._0_8_;
      extraout_x8[2] = CONCAT17(auStack_170[0xf],auStack_170._8_7_);
      *(ulong *)((long)extraout_x8 + 0x17) = CONCAT71(auStack_170._16_7_,auStack_170[0xf]);
      *(byte *)((long)extraout_x8 + 0x1f) = auStack_170[0x17];
      goto LAB_003a0c04;
    }
    if (0 < (int)(param_1[1].offset - 1)) {
      psVar8 = (section *)auStack_170;
      psVar11 = param_3;
      FUN_0035d0e4();
      iVar7 = (int)psVar11;
      goto LAB_003a0bdc;
    }
    func_0x005535e8(auStack_170,"empty UDS abstract path",0x17);
    iVar7 = (int)auStack_170;
    FUN_003a1488(extraout_x8);
    psVar8 = (section *)auStack_170._0_8_;
    if ((auStack_170._0_8_ & 1) != 0) {
      FUN_0055293c();
    }
  }
LAB_003a0c08:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if ((iVar7 != 0) && (func_0x0040cf10(), ((uint)param_3 >> 7 & 1) != 0)) {
    __ZdlPv(param_1);
  }
  psVar11 = psVar8;
  __Unwind_Resume();
  uStack_200 = unaff_x24;
  uStack_1f8 = (ulong)uVar3;
  pcStack_1f0 = acStack_110;
  psStack_1e8 = param_3;
  psStack_1e0 = param_1;
  psStack_1d8 = psVar8;
  ppuStack_1d0 = &puStack_30;
  pcStack_1c8 = FUN_003a0d08;
  lStack_208 = *(long *)PTR____stack_chk_guard_00999f88;
  if (psVar11[1].offset == 0) {
    func_0x005535e8(&pppppcStack_2d0,"Empty address",0xd);
    FUN_003a1488(extraout_x8_00,&pppppcStack_2d0);
    ppppppcVar12 = (char ******)pppppcStack_2d0;
    if (((ulong)pppppcStack_2d0 & 1) != 0) {
      FUN_0055293c();
    }
    goto LAB_003a117c;
  }
  psVar8 = psVar11;
  FUN_003a0660();
  iVar7 = (int)psVar8;
  psVar8 = psVar11;
  if (iVar7 != 0) {
    psVar8 = &sStack_354;
  }
  bVar4 = psVar8->sectname[1];
  uVar9 = (ulong)bVar4;
  if (bVar4 == 1) {
    pcStack_238 = (char *)0x0;
    lStack_230 = 0;
    alStack_228[0] = 0;
    pppppcStack_370 = (char *****)0x0;
    uStack_368 = 0;
    uStack_360 = 0;
    pcVar14 = psVar11->sectname + 2;
    psVar8 = psVar11;
    if (iVar7 != 0) {
      pcVar14 = (char *)((ulong)&sStack_354 | 2);
      psVar8 = &sStack_354;
    }
    if (psVar8->sectname[2] == '\0') {
      pcVar1 = psVar11->sectname + 3;
      psVar8 = psVar11;
      if (iVar7 != 0) {
        pcVar1 = (char *)((ulong)&sStack_354 | 3);
        psVar8 = &sStack_354;
      }
      if (psVar8->sectname[3] == '\0') goto LAB_003a0de4;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                (&pcStack_238,"unix-abstract");
      pdVar2 = &psVar11[1].offset;
      if (iVar7 != 0) {
        pdVar2 = &dStack_2d4;
      }
      FUN_0035d0e4(&pppppcStack_2d0,pcVar1,(ulong)*pdVar2 - 2);
      if ((long)uStack_360 < 0) {
        __ZdlPv(pppppcStack_370);
      }
      uStack_368 = uStack_2c8;
      pppppcStack_370 = pppppcStack_2d0;
      uStack_360 = lStack_2c0;
    }
    else {
LAB_003a0de4:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                (&pcStack_238,"unix");
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                (&pppppcStack_370,pcVar14);
    }
    uStack_388 = lStack_230;
    ppppcStack_390 = (char ****)pcStack_238;
    lStack_380 = alStack_228[0];
    pcStack_238 = (char *)0x0;
    lStack_230 = 0;
    alStack_228[0] = 0;
    FUN_00353254(auStack_3a8,"");
    uStack_3b8 = uStack_368;
    pppppcStack_3c0 = pppppcStack_370;
    lStack_3b0 = uStack_360;
    uStack_368 = 0;
    uStack_360 = 0;
    pppppcStack_370 = (char *****)0x0;
    uStack_3d0 = 0;
    uStack_3c8 = 0;
    ppppcStack_3d8 = (char ****)0x0;
    FUN_00353254(auStack_3f0,"");
    FUN_00401f2c(&pppppcStack_2d0,&ppppcStack_390,auStack_3a8,&pppppcStack_3c0,&ppppcStack_3d8,
                 auStack_3f0);
    if (cStack_3d9 < '\0') {
      __ZdlPv(auStack_3f0[0]);
    }
    pppppcStack_408 = &ppppcStack_3d8;
    FUN_0035af5c(&pppppcStack_408);
    if (lStack_3b0 < 0) {
      __ZdlPv(pppppcStack_3c0);
    }
    if (cStack_391 < '\0') {
      __ZdlPv(auStack_3a8[0]);
    }
    if (lStack_380 < 0) {
      __ZdlPv(ppppcStack_390);
    }
    if ((char ******)pppppcStack_2d0 == (char ******)0x0) {
      FUN_00402368(&pppppcStack_408,&uStack_2c8);
      extraout_x8_00[2] = uStack_400;
      extraout_x8_00[1] = pppppcStack_408;
      extraout_x8_00[3] = uStack_3f8;
      *extraout_x8_00 = 0;
    }
    else {
      FUN_003a14e0(extraout_x8_00,&pppppcStack_2d0);
    }
    ppppppcVar12 = &pppppcStack_2d0;
    FUN_0035afe0();
    if ((long)uStack_360 < 0) {
      ppppppcVar12 = (char ******)pppppcStack_370;
      __ZdlPv();
    }
    goto LAB_003a117c;
  }
  if (bVar4 == 2) {
    pcVar14 = "ipv4";
LAB_003a0e0c:
    if (*(int *)pcVar14 != 0x78696e75 || (char)*(int *)((long)pcVar14 + 4) != '\0') {
      FUN_003a0930(&pcStack_238,psVar8,0);
      if (pcStack_238 == (char *)0x0) {
        FUN_00353254(auStack_420,pcVar14);
        FUN_00353254(auStack_438,"");
        ppcVar13 = &pcStack_238;
        FUN_00375c3c();
        pcStack_448 = ppcVar13[1];
        pcStack_450 = *ppcVar13;
        pcStack_440 = ppcVar13[2];
        ppcVar13[1] = (char *)0x0;
        ppcVar13[2] = (char *)0x0;
        *ppcVar13 = (char *)0x0;
        ppppcStack_468 = (char ****)0x0;
        uStack_460 = 0;
        uStack_458 = 0;
        FUN_00353254(auStack_480,"");
        FUN_00401f2c(&pppppcStack_2d0,auStack_420,auStack_438,&pcStack_450,&ppppcStack_468,
                     auStack_480);
        if (cStack_469 < '\0') {
          __ZdlPv(auStack_480[0]);
        }
        pppppcStack_370 = &ppppcStack_468;
        FUN_0035af5c(&pppppcStack_370);
        if ((long)pcStack_440 < 0) {
          __ZdlPv(pcStack_450);
        }
        if (cStack_421 < '\0') {
          __ZdlPv(auStack_438[0]);
        }
        if (cStack_409 < '\0') {
          __ZdlPv(auStack_420[0]);
        }
        if ((char ******)pppppcStack_2d0 == (char ******)0x0) {
          FUN_00402368(&pppppcStack_370,&uStack_2c8);
          extraout_x8_00[2] = uStack_368;
          extraout_x8_00[1] = pppppcStack_370;
          extraout_x8_00[3] = uStack_360;
          *extraout_x8_00 = 0;
        }
        else {
          FUN_003a14e0(extraout_x8_00,&pppppcStack_2d0);
        }
        FUN_0035afe0(&pppppcStack_2d0);
      }
      else {
        *extraout_x8_00 = pcStack_238;
        pcStack_238 = segment_command_00000020.segname + 0xe;
      }
      ppppppcVar12 = (char ******)&pcStack_238;
      FUN_0035d18c();
      goto LAB_003a117c;
    }
  }
  else if (bVar4 == 0x1e) {
    pcVar14 = "ipv6";
    goto LAB_003a0e0c;
  }
  pppppcStack_2d0 = (char *****)0x8c6b27;
  uStack_2c8 = 0x1e;
  func_0x00574ac0(uVar9,alStack_228);
  lStack_230 = uVar9 - (long)alStack_228;
  pcStack_238 = (char *)alStack_228;
  FUN_00575d30(&pppppcStack_370,&pppppcStack_2d0,&pcStack_238);
  uVar9 = uStack_368;
  ppppppcVar12 = (char ******)pppppcStack_370;
  if (-1 < (long)uStack_360) {
    uVar9 = uStack_360 >> 0x38;
    ppppppcVar12 = &pppppcStack_370;
  }
  func_0x005535e8(&pppppcStack_408,ppppppcVar12,uVar9);
  FUN_003a1488(extraout_x8_00,&pppppcStack_408);
  ppppppcVar12 = (char ******)pppppcStack_408;
  if (((ulong)pppppcStack_408 & 1) != 0) {
    FUN_0055293c();
  }
  if ((long)uStack_360 < 0) {
    ppppppcVar12 = (char ******)pppppcStack_370;
    __ZdlPv();
  }
LAB_003a117c:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  FUN_0035afe0(&pppppcStack_2d0);
  FUN_0035d18c(&pcStack_238);
  __Unwind_Resume();
  cVar5 = *(char *)((long)ppppppcVar12 + 1);
  if (cVar5 != '\x01') {
    if ((cVar5 == '\x1e') || (cVar5 == '\x02')) {
      func_0x003c4da0(*(undefined2 *)((long)ppppppcVar12 + 2));
    }
    else {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/sockaddr_utils.cc"
                   ,0x13e,2,"Unknown socket family %d in grpc_sockaddr_get_port");
    }
  }
  return;
}



/* Entry: 003a0930; end: 003a0d07;  */

/* WARNING: Removing unreachable block (ram,0x003a113c) */

void FUN_003a0930(undefined8 *param_1,section *param_2,section *param_3)

{
  char *pcVar1;
  dword *pdVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  section *psVar7;
  ulong uVar8;
  undefined1 *puVar9;
  section *psVar10;
  char ******ppppppcVar11;
  char **ppcVar12;
  char *pcVar13;
  undefined8 *extraout_x8;
  ulong unaff_x24;
  undefined8 auStack_460 [2];
  char cStack_449;
  char ****ppppcStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  char *pcStack_430;
  char *pcStack_428;
  char *pcStack_420;
  undefined8 auStack_418 [2];
  char cStack_401;
  undefined8 auStack_400 [2];
  char cStack_3e9;
  char *****pppppcStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 auStack_3d0 [2];
  char cStack_3b9;
  char ****ppppcStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  char *****pppppcStack_3a0;
  undefined8 uStack_398;
  long lStack_390;
  undefined8 auStack_388 [2];
  char cStack_371;
  char ****ppppcStack_370;
  undefined8 uStack_368;
  long lStack_360;
  char *****pppppcStack_350;
  ulong uStack_348;
  ulong uStack_340;
  section sStack_334;
  dword dStack_2b4;
  char *****pppppcStack_2b0;
  undefined8 uStack_2a8;
  long lStack_2a0;
  char *pcStack_218;
  long lStack_210;
  long alStack_208 [4];
  long lStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  char *pcStack_1d0;
  section *psStack_1c8;
  section *psStack_1c0;
  section *psStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  undefined1 auStack_1a0 [24];
  section *psStack_188;
  undefined1 auStack_180 [23];
  byte bStack_169;
  undefined1 auStack_150 [96];
  char acStack_f0 [20];
  section sStack_dc;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  psVar7 = param_2;
  ___error();
  uVar3 = *(uint *)psVar7->sectname;
  if ((int)param_3 != 0) {
    param_3 = &sStack_dc;
    psVar7 = param_2;
    FUN_003a0660(param_2,&sStack_dc);
    if ((int)psVar7 != 0) {
      param_2 = param_3;
    }
  }
  acStack_f0[8] = '\0';
  acStack_f0[9] = '\0';
  acStack_f0[10] = '\0';
  acStack_f0[0xb] = '\0';
  acStack_f0[0xc] = '\0';
  acStack_f0[0xd] = '\0';
  acStack_f0[0xe] = '\0';
  acStack_f0[0] = '\0';
  acStack_f0[1] = '\0';
  acStack_f0[2] = '\0';
  acStack_f0[3] = '\0';
  acStack_f0[4] = '\0';
  acStack_f0[5] = '\0';
  acStack_f0[6] = '\0';
  acStack_f0[7] = '\0';
  bVar4 = param_2->sectname[1];
  if (bVar4 == 0x1e) {
    param_3 = (section *)(ulong)*(ushort *)(param_2->sectname + 2);
    func_0x003c4da0();
    pcVar13 = param_2->sectname + 8;
    unaff_x24 = (ulong)*(uint *)(param_2->segname + 8);
LAB_003a0a30:
    uVar8 = (ulong)(byte)param_2->sectname[1];
    FUN_003c4dac(uVar8,pcVar13,auStack_150 + 0x32,0x2e);
    if (uVar8 == 0) {
      bVar4 = param_2->sectname[1];
LAB_003a0ad8:
      uVar8 = (ulong)bVar4;
      auStack_150._0_8_ = "Unknown sockaddr family: ";
      auStack_150[8] = '\x19';
      auStack_150[9] = '\0';
      auStack_150[10] = '\0';
      auStack_150[0xb] = '\0';
      auStack_150[0xc] = '\0';
      auStack_150[0xd] = '\0';
      auStack_150[0xe] = '\0';
      auStack_150[0xf] = '\0';
      psVar7 = (section *)(auStack_180 + 0x10);
      func_0x00574ac0(uVar8,psVar7);
      auStack_180._8_8_ = uVar8 - (long)psVar7;
      auStack_180._0_8_ = psVar7;
      FUN_00575d30(auStack_1a0,auStack_150,auStack_180);
      psVar7 = (section *)auStack_1a0._0_8_;
      if (-1 < (char)auStack_1a0[0x17]) {
        auStack_1a0._8_8_ = (ulong)auStack_1a0[0x17];
        psVar7 = (section *)auStack_1a0;
      }
      func_0x005535e8(&psStack_188,psVar7,auStack_1a0._8_8_);
      iVar6 = (int)&psStack_188;
      FUN_003a1488(param_1);
      psVar7 = psStack_188;
      if (((ulong)psStack_188 & 1) != 0) {
        FUN_0055293c();
        psVar7 = psStack_188;
      }
      param_2 = (section *)auStack_1a0;
      if ((char)auStack_1a0[0x17] < '\0') {
        __ZdlPv();
        psVar7 = (section *)auStack_1a0._0_8_;
        param_2 = (section *)auStack_1a0;
      }
    }
    else {
      if ((int)unaff_x24 == 0) {
        puVar9 = auStack_150 + 0x32;
        _strlen();
        psVar7 = (section *)(auStack_150 + 0x32);
        FUN_0033ae40(auStack_150,psVar7,puVar9,param_3);
        iVar6 = (int)puVar9;
        acStack_f0[0] = auStack_150[8];
        acStack_f0[1] = auStack_150[9];
        acStack_f0[2] = auStack_150[10];
        acStack_f0[3] = auStack_150[0xb];
        acStack_f0[4] = auStack_150[0xc];
        acStack_f0[5] = auStack_150[0xd];
        acStack_f0[6] = auStack_150[0xe];
        acStack_f0[7] = auStack_150[0xf];
        acStack_f0[8] = auStack_150[0x10];
        acStack_f0[9] = auStack_150[0x11];
        acStack_f0[10] = auStack_150[0x12];
        acStack_f0[0xb] = auStack_150[0x13];
        acStack_f0[0xc] = auStack_150[0x14];
        acStack_f0[0xd] = auStack_150[0x15];
        acStack_f0[0xe] = auStack_150[0x16];
        param_3 = (section *)(ulong)auStack_150[0x17];
        param_2 = (section *)auStack_150._0_8_;
      }
      else {
        auStack_150._0_8_ = auStack_150 + 0x32;
        auStack_150[8] = -0x68;
        auStack_150[9] = '\x0e';
        auStack_150[10] = 'V';
        auStack_150[0xb] = '\0';
        auStack_150[0xc] = '\0';
        auStack_150[0xd] = '\0';
        auStack_150[0xe] = '\0';
        auStack_150[0xf] = '\0';
        auStack_150._16_7_ = (undefined7)unaff_x24;
        auStack_150[0x17] = 0;
        auStack_150[0x18] = -0x14;
        auStack_150[0x19] = '\x06';
        auStack_150[0x1a] = 'V';
        auStack_150[0x1b] = '\0';
        auStack_150[0x1c] = '\0';
        auStack_150[0x1d] = '\0';
        auStack_150[0x1e] = '\0';
        auStack_150[0x1f] = '\0';
        FUN_0056189c(auStack_180,"%s%%%u",6,auStack_150,2);
        uVar8 = auStack_180._8_8_;
        psVar7 = (section *)auStack_180._0_8_;
        if (-1 < (char)bStack_169) {
          uVar8 = (ulong)bStack_169;
          psVar7 = (section *)auStack_180;
        }
        FUN_0033ae40(auStack_150,psVar7,uVar8,param_3);
        param_2 = (section *)auStack_150._0_8_;
        iVar6 = (int)uVar8;
        acStack_f0[0] = auStack_150[8];
        acStack_f0[1] = auStack_150[9];
        acStack_f0[2] = auStack_150[10];
        acStack_f0[3] = auStack_150[0xb];
        acStack_f0[4] = auStack_150[0xc];
        acStack_f0[5] = auStack_150[0xd];
        acStack_f0[6] = auStack_150[0xe];
        acStack_f0[7] = auStack_150[0xf];
        acStack_f0[8] = auStack_150[0x10];
        acStack_f0[9] = auStack_150[0x11];
        acStack_f0[10] = auStack_150[0x12];
        acStack_f0[0xb] = auStack_150[0x13];
        acStack_f0[0xc] = auStack_150[0x14];
        acStack_f0[0xd] = auStack_150[0x15];
        acStack_f0[0xe] = auStack_150[0x16];
        param_3 = (section *)(ulong)auStack_150[0x17];
        if ((char)bStack_169 < '\0') {
          psVar7 = (section *)auStack_180._0_8_;
          __ZdlPv();
        }
      }
      ___error();
      *(uint *)psVar7->sectname = uVar3;
      param_1[1] = param_2;
      param_1[2] = CONCAT17(acStack_f0[7],acStack_f0._0_7_);
      *(ulong *)((long)param_1 + 0x17) = CONCAT71(acStack_f0._8_7_,acStack_f0[7]);
      *(char *)((long)param_1 + 0x1f) = (char)param_3;
LAB_003a0c04:
      *param_1 = 0;
    }
  }
  else {
    if (bVar4 == 2) {
      param_3 = (section *)(ulong)*(ushort *)(param_2->sectname + 2);
      func_0x003c4da0();
      unaff_x24 = 0;
      pcVar13 = param_2->sectname + 4;
      goto LAB_003a0a30;
    }
    if (bVar4 != 1) goto LAB_003a0ad8;
    param_3 = (section *)(param_2->sectname + 2);
    if (param_3->sectname[0] != '\0') {
      psVar7 = param_3;
      _strnlen(param_3,0x68);
      if (psVar7 == &section_00000068) {
        func_0x005535e8(auStack_150,"UDS path is not null-terminated",0x1f);
        iVar6 = (int)auStack_150;
        FUN_003a1488(param_1);
        psVar7 = (section *)auStack_150._0_8_;
        if ((auStack_150._0_8_ & 1) != 0) {
          FUN_0055293c();
        }
        goto LAB_003a0c08;
      }
      psVar7 = (section *)auStack_150;
      psVar10 = param_3;
      FUN_00353254();
      iVar6 = (int)psVar10;
LAB_003a0bdc:
      acStack_f0[0] = auStack_150[8];
      acStack_f0[1] = auStack_150[9];
      acStack_f0[2] = auStack_150[10];
      acStack_f0[3] = auStack_150[0xb];
      acStack_f0[4] = auStack_150[0xc];
      acStack_f0[5] = auStack_150[0xd];
      acStack_f0[6] = auStack_150[0xe];
      acStack_f0[7] = auStack_150[0xf];
      acStack_f0[8] = auStack_150[0x10];
      acStack_f0[9] = auStack_150[0x11];
      acStack_f0[10] = auStack_150[0x12];
      acStack_f0[0xb] = auStack_150[0x13];
      acStack_f0[0xc] = auStack_150[0x14];
      acStack_f0[0xd] = auStack_150[0x15];
      acStack_f0[0xe] = auStack_150[0x16];
      param_1[1] = auStack_150._0_8_;
      param_1[2] = CONCAT17(auStack_150[0xf],auStack_150._8_7_);
      *(ulong *)((long)param_1 + 0x17) = CONCAT71(auStack_150._16_7_,auStack_150[0xf]);
      *(byte *)((long)param_1 + 0x1f) = auStack_150[0x17];
      goto LAB_003a0c04;
    }
    if (0 < (int)(param_2[1].offset - 1)) {
      psVar7 = (section *)auStack_150;
      psVar10 = param_3;
      FUN_0035d0e4();
      iVar6 = (int)psVar10;
      goto LAB_003a0bdc;
    }
    func_0x005535e8(auStack_150,"empty UDS abstract path",0x17);
    iVar6 = (int)auStack_150;
    FUN_003a1488(param_1);
    psVar7 = (section *)auStack_150._0_8_;
    if ((auStack_150._0_8_ & 1) != 0) {
      FUN_0055293c();
    }
  }
LAB_003a0c08:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if ((iVar6 != 0) && (func_0x0040cf10(), ((uint)param_3 >> 7 & 1) != 0)) {
    __ZdlPv(param_2);
  }
  psVar10 = psVar7;
  __Unwind_Resume();
  uStack_1e0 = unaff_x24;
  uStack_1d8 = (ulong)uVar3;
  pcStack_1d0 = acStack_f0;
  psStack_1c8 = param_3;
  psStack_1c0 = param_2;
  psStack_1b8 = psVar7;
  puStack_1b0 = &stack0xfffffffffffffff0;
  pcStack_1a8 = FUN_003a0d08;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_00999f88;
  if (psVar10[1].offset == 0) {
    func_0x005535e8(&pppppcStack_2b0,"Empty address",0xd);
    FUN_003a1488(extraout_x8,&pppppcStack_2b0);
    ppppppcVar11 = (char ******)pppppcStack_2b0;
    if (((ulong)pppppcStack_2b0 & 1) != 0) {
      FUN_0055293c();
    }
    goto LAB_003a117c;
  }
  psVar7 = psVar10;
  FUN_003a0660();
  iVar6 = (int)psVar7;
  psVar7 = psVar10;
  if (iVar6 != 0) {
    psVar7 = &sStack_334;
  }
  bVar4 = psVar7->sectname[1];
  uVar8 = (ulong)bVar4;
  if (bVar4 == 1) {
    pcStack_218 = (char *)0x0;
    lStack_210 = 0;
    alStack_208[0] = 0;
    pppppcStack_350 = (char *****)0x0;
    uStack_348 = 0;
    uStack_340 = 0;
    pcVar13 = psVar10->sectname + 2;
    psVar7 = psVar10;
    if (iVar6 != 0) {
      pcVar13 = (char *)((ulong)&sStack_334 | 2);
      psVar7 = &sStack_334;
    }
    if (psVar7->sectname[2] == '\0') {
      pcVar1 = psVar10->sectname + 3;
      psVar7 = psVar10;
      if (iVar6 != 0) {
        pcVar1 = (char *)((ulong)&sStack_334 | 3);
        psVar7 = &sStack_334;
      }
      if (psVar7->sectname[3] == '\0') goto LAB_003a0de4;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                (&pcStack_218,"unix-abstract");
      pdVar2 = &psVar10[1].offset;
      if (iVar6 != 0) {
        pdVar2 = &dStack_2b4;
      }
      FUN_0035d0e4(&pppppcStack_2b0,pcVar1,(ulong)*pdVar2 - 2);
      if ((long)uStack_340 < 0) {
        __ZdlPv(pppppcStack_350);
      }
      uStack_348 = uStack_2a8;
      pppppcStack_350 = pppppcStack_2b0;
      uStack_340 = lStack_2a0;
    }
    else {
LAB_003a0de4:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                (&pcStack_218,"unix");
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                (&pppppcStack_350,pcVar13);
    }
    uStack_368 = lStack_210;
    ppppcStack_370 = (char ****)pcStack_218;
    lStack_360 = alStack_208[0];
    pcStack_218 = (char *)0x0;
    lStack_210 = 0;
    alStack_208[0] = 0;
    FUN_00353254(auStack_388,"");
    uStack_398 = uStack_348;
    pppppcStack_3a0 = pppppcStack_350;
    lStack_390 = uStack_340;
    uStack_348 = 0;
    uStack_340 = 0;
    pppppcStack_350 = (char *****)0x0;
    uStack_3b0 = 0;
    uStack_3a8 = 0;
    ppppcStack_3b8 = (char ****)0x0;
    FUN_00353254(auStack_3d0,"");
    FUN_00401f2c(&pppppcStack_2b0,&ppppcStack_370,auStack_388,&pppppcStack_3a0,&ppppcStack_3b8,
                 auStack_3d0);
    if (cStack_3b9 < '\0') {
      __ZdlPv(auStack_3d0[0]);
    }
    pppppcStack_3e8 = &ppppcStack_3b8;
    FUN_0035af5c(&pppppcStack_3e8);
    if (lStack_390 < 0) {
      __ZdlPv(pppppcStack_3a0);
    }
    if (cStack_371 < '\0') {
      __ZdlPv(auStack_388[0]);
    }
    if (lStack_360 < 0) {
      __ZdlPv(ppppcStack_370);
    }
    if ((char ******)pppppcStack_2b0 == (char ******)0x0) {
      FUN_00402368(&pppppcStack_3e8,&uStack_2a8);
      extraout_x8[2] = uStack_3e0;
      extraout_x8[1] = pppppcStack_3e8;
      extraout_x8[3] = uStack_3d8;
      *extraout_x8 = 0;
    }
    else {
      FUN_003a14e0(extraout_x8,&pppppcStack_2b0);
    }
    ppppppcVar11 = &pppppcStack_2b0;
    FUN_0035afe0();
    if ((long)uStack_340 < 0) {
      ppppppcVar11 = (char ******)pppppcStack_350;
      __ZdlPv();
    }
    goto LAB_003a117c;
  }
  if (bVar4 == 2) {
    pcVar13 = "ipv4";
LAB_003a0e0c:
    if (*(int *)pcVar13 != 0x78696e75 || (char)*(int *)((long)pcVar13 + 4) != '\0') {
      FUN_003a0930(&pcStack_218,psVar7,0);
      if (pcStack_218 == (char *)0x0) {
        FUN_00353254(auStack_400,pcVar13);
        FUN_00353254(auStack_418,"");
        ppcVar12 = &pcStack_218;
        FUN_00375c3c();
        pcStack_428 = ppcVar12[1];
        pcStack_430 = *ppcVar12;
        pcStack_420 = ppcVar12[2];
        ppcVar12[1] = (char *)0x0;
        ppcVar12[2] = (char *)0x0;
        *ppcVar12 = (char *)0x0;
        ppppcStack_448 = (char ****)0x0;
        uStack_440 = 0;
        uStack_438 = 0;
        FUN_00353254(auStack_460,"");
        FUN_00401f2c(&pppppcStack_2b0,auStack_400,auStack_418,&pcStack_430,&ppppcStack_448,
                     auStack_460);
        if (cStack_449 < '\0') {
          __ZdlPv(auStack_460[0]);
        }
        pppppcStack_350 = &ppppcStack_448;
        FUN_0035af5c(&pppppcStack_350);
        if ((long)pcStack_420 < 0) {
          __ZdlPv(pcStack_430);
        }
        if (cStack_401 < '\0') {
          __ZdlPv(auStack_418[0]);
        }
        if (cStack_3e9 < '\0') {
          __ZdlPv(auStack_400[0]);
        }
        if ((char ******)pppppcStack_2b0 == (char ******)0x0) {
          FUN_00402368(&pppppcStack_350,&uStack_2a8);
          extraout_x8[2] = uStack_348;
          extraout_x8[1] = pppppcStack_350;
          extraout_x8[3] = uStack_340;
          *extraout_x8 = 0;
        }
        else {
          FUN_003a14e0(extraout_x8,&pppppcStack_2b0);
        }
        FUN_0035afe0(&pppppcStack_2b0);
      }
      else {
        *extraout_x8 = pcStack_218;
        pcStack_218 = segment_command_00000020.segname + 0xe;
      }
      ppppppcVar11 = (char ******)&pcStack_218;
      FUN_0035d18c();
      goto LAB_003a117c;
    }
  }
  else if (bVar4 == 0x1e) {
    pcVar13 = "ipv6";
    goto LAB_003a0e0c;
  }
  pppppcStack_2b0 = (char *****)0x8c6b27;
  uStack_2a8 = 0x1e;
  func_0x00574ac0(uVar8,alStack_208);
  lStack_210 = uVar8 - (long)alStack_208;
  pcStack_218 = (char *)alStack_208;
  FUN_00575d30(&pppppcStack_350,&pppppcStack_2b0,&pcStack_218);
  uVar8 = uStack_348;
  ppppppcVar11 = (char ******)pppppcStack_350;
  if (-1 < (long)uStack_340) {
    uVar8 = uStack_340 >> 0x38;
    ppppppcVar11 = &pppppcStack_350;
  }
  func_0x005535e8(&pppppcStack_3e8,ppppppcVar11,uVar8);
  FUN_003a1488(extraout_x8,&pppppcStack_3e8);
  ppppppcVar11 = (char ******)pppppcStack_3e8;
  if (((ulong)pppppcStack_3e8 & 1) != 0) {
    FUN_0055293c();
  }
  if ((long)uStack_340 < 0) {
    ppppppcVar11 = (char ******)pppppcStack_350;
    __ZdlPv();
  }
LAB_003a117c:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  FUN_0035afe0(&pppppcStack_2b0);
  FUN_0035d18c(&pcStack_218);
  __Unwind_Resume();
  cVar5 = *(char *)((long)ppppppcVar11 + 1);
  if (cVar5 != '\x01') {
    if ((cVar5 == '\x1e') || (cVar5 == '\x02')) {
      func_0x003c4da0(*(undefined2 *)((long)ppppppcVar11 + 2));
    }
    else {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/sockaddr_utils.cc"
                   ,0x13e,2,"Unknown socket family %d in grpc_sockaddr_get_port");
    }
  }
  return;
}



/* Entry: 003a0d08; end: 003a133f;  */

/* WARNING: Removing unreachable block (ram,0x003a113c) */

void FUN_003a0d08(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  uint *puVar2;
  byte bVar3;
  char cVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  ulong uVar8;
  char ****ppppcVar9;
  char **ppcVar10;
  char *pcVar11;
  undefined8 auStack_2c0 [2];
  char cStack_2a9;
  char **ppcStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  char *pcStack_290;
  char *pcStack_288;
  char *pcStack_280;
  undefined8 auStack_278 [2];
  char cStack_261;
  undefined8 auStack_260 [2];
  char cStack_249;
  char ***pppcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 auStack_230 [2];
  char cStack_219;
  char **ppcStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  char ***pppcStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined8 auStack_1e8 [2];
  char cStack_1d1;
  char **ppcStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  char ***pppcStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  undefined1 auStack_194 [128];
  uint uStack_114;
  char ***pppcStack_110;
  undefined8 uStack_108;
  long lStack_100;
  char *pcStack_78;
  long lStack_70;
  long alStack_68 [4];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  if (*(uint *)(param_2 + 0x80) == 0) {
    func_0x005535e8(&pppcStack_110,"Empty address",0xd);
    FUN_003a1488(param_1,&pppcStack_110);
    ppppcVar9 = (char ****)pppcStack_110;
    if (((ulong)pppcStack_110 & 1) != 0) {
      FUN_0055293c();
    }
    goto LAB_003a117c;
  }
  puVar7 = param_2;
  FUN_003a0660(param_2,auStack_194);
  iVar6 = (int)puVar7;
  puVar7 = param_2;
  if (iVar6 != 0) {
    puVar7 = auStack_194;
  }
  bVar3 = puVar7[1];
  uVar8 = (ulong)bVar3;
  if (bVar3 == 1) {
    pcStack_78 = (char *)0x0;
    lStack_70 = 0;
    alStack_68[0] = 0;
    pppcStack_1b0 = (char ***)0x0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    puVar7 = param_2 + 2;
    puVar1 = param_2;
    if (iVar6 != 0) {
      puVar7 = (undefined1 *)((ulong)auStack_194 | 2);
      puVar1 = auStack_194;
    }
    if (puVar1[2] == '\0') {
      puVar1 = param_2 + 3;
      puVar5 = param_2;
      if (iVar6 != 0) {
        puVar1 = (undefined1 *)((ulong)auStack_194 | 3);
        puVar5 = auStack_194;
      }
      if (puVar5[3] == '\0') goto LAB_003a0de4;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                (&pcStack_78,"unix-abstract");
      puVar2 = (uint *)(param_2 + 0x80);
      if (iVar6 != 0) {
        puVar2 = &uStack_114;
      }
      FUN_0035d0e4(&pppcStack_110,puVar1,(ulong)*puVar2 - 2);
      if ((long)uStack_1a0 < 0) {
        __ZdlPv(pppcStack_1b0);
      }
      uStack_1a8 = uStack_108;
      pppcStack_1b0 = pppcStack_110;
      uStack_1a0 = lStack_100;
    }
    else {
LAB_003a0de4:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                (&pcStack_78,"unix");
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                (&pppcStack_1b0,puVar7);
    }
    uStack_1c8 = lStack_70;
    ppcStack_1d0 = (char **)pcStack_78;
    lStack_1c0 = alStack_68[0];
    pcStack_78 = (char *)0x0;
    lStack_70 = 0;
    alStack_68[0] = 0;
    FUN_00353254(auStack_1e8,"");
    uStack_1f8 = uStack_1a8;
    pppcStack_200 = pppcStack_1b0;
    lStack_1f0 = uStack_1a0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    pppcStack_1b0 = (char ***)0x0;
    uStack_210 = 0;
    uStack_208 = 0;
    ppcStack_218 = (char **)0x0;
    FUN_00353254(auStack_230,"");
    FUN_00401f2c(&pppcStack_110,&ppcStack_1d0,auStack_1e8,&pppcStack_200,&ppcStack_218,auStack_230);
    if (cStack_219 < '\0') {
      __ZdlPv(auStack_230[0]);
    }
    pppcStack_248 = &ppcStack_218;
    FUN_0035af5c(&pppcStack_248);
    if (lStack_1f0 < 0) {
      __ZdlPv(pppcStack_200);
    }
    if (cStack_1d1 < '\0') {
      __ZdlPv(auStack_1e8[0]);
    }
    if (lStack_1c0 < 0) {
      __ZdlPv(ppcStack_1d0);
    }
    if ((char ****)pppcStack_110 == (char ****)0x0) {
      FUN_00402368(&pppcStack_248,&uStack_108);
      param_1[2] = uStack_240;
      param_1[1] = pppcStack_248;
      param_1[3] = uStack_238;
      *param_1 = 0;
    }
    else {
      FUN_003a14e0(param_1,&pppcStack_110);
    }
    ppppcVar9 = &pppcStack_110;
    FUN_0035afe0();
    if ((long)uStack_1a0 < 0) {
      ppppcVar9 = (char ****)pppcStack_1b0;
      __ZdlPv();
    }
    goto LAB_003a117c;
  }
  if (bVar3 == 2) {
    pcVar11 = "ipv4";
LAB_003a0e0c:
    if (*(int *)pcVar11 != 0x78696e75 || (char)*(int *)((long)pcVar11 + 4) != '\0') {
      FUN_003a0930(&pcStack_78,puVar7,0);
      if (pcStack_78 == (char *)0x0) {
        FUN_00353254(auStack_260,pcVar11);
        FUN_00353254(auStack_278,"");
        ppcVar10 = &pcStack_78;
        FUN_00375c3c();
        pcStack_288 = ppcVar10[1];
        pcStack_290 = *ppcVar10;
        pcStack_280 = ppcVar10[2];
        ppcVar10[1] = (char *)0x0;
        ppcVar10[2] = (char *)0x0;
        *ppcVar10 = (char *)0x0;
        ppcStack_2a8 = (char **)0x0;
        uStack_2a0 = 0;
        uStack_298 = 0;
        FUN_00353254(auStack_2c0,"");
        FUN_00401f2c(&pppcStack_110,auStack_260,auStack_278,&pcStack_290,&ppcStack_2a8,auStack_2c0);
        if (cStack_2a9 < '\0') {
          __ZdlPv(auStack_2c0[0]);
        }
        pppcStack_1b0 = &ppcStack_2a8;
        FUN_0035af5c(&pppcStack_1b0);
        if ((long)pcStack_280 < 0) {
          __ZdlPv(pcStack_290);
        }
        if (cStack_261 < '\0') {
          __ZdlPv(auStack_278[0]);
        }
        if (cStack_249 < '\0') {
          __ZdlPv(auStack_260[0]);
        }
        if ((char ****)pppcStack_110 == (char ****)0x0) {
          FUN_00402368(&pppcStack_1b0,&uStack_108);
          param_1[2] = uStack_1a8;
          param_1[1] = pppcStack_1b0;
          param_1[3] = uStack_1a0;
          *param_1 = 0;
        }
        else {
          FUN_003a14e0(param_1,&pppcStack_110);
        }
        FUN_0035afe0(&pppcStack_110);
      }
      else {
        *param_1 = pcStack_78;
        pcStack_78 = segment_command_00000020.segname + 0xe;
      }
      ppppcVar9 = (char ****)&pcStack_78;
      FUN_0035d18c();
      goto LAB_003a117c;
    }
  }
  else if (bVar3 == 0x1e) {
    pcVar11 = "ipv6";
    goto LAB_003a0e0c;
  }
  pppcStack_110 = (char ***)0x8c6b27;
  uStack_108 = 0x1e;
  func_0x00574ac0(uVar8,alStack_68);
  lStack_70 = uVar8 - (long)alStack_68;
  pcStack_78 = (char *)alStack_68;
  FUN_00575d30(&pppcStack_1b0,&pppcStack_110,&pcStack_78);
  uVar8 = uStack_1a8;
  ppppcVar9 = (char ****)pppcStack_1b0;
  if (-1 < (long)uStack_1a0) {
    uVar8 = uStack_1a0 >> 0x38;
    ppppcVar9 = &pppcStack_1b0;
  }
  func_0x005535e8(&pppcStack_248,ppppcVar9,uVar8);
  FUN_003a1488(param_1,&pppcStack_248);
  ppppcVar9 = (char ****)pppcStack_248;
  if (((ulong)pppcStack_248 & 1) != 0) {
    FUN_0055293c();
  }
  if ((long)uStack_1a0 < 0) {
    ppppcVar9 = (char ****)pppcStack_1b0;
    __ZdlPv();
  }
LAB_003a117c:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  FUN_0035afe0(&pppcStack_110);
  FUN_0035d18c(&pcStack_78);
  __Unwind_Resume();
  cVar4 = *(char *)((long)ppppcVar9 + 1);
  if (cVar4 != '\x01') {
    if ((cVar4 == '\x1e') || (cVar4 == '\x02')) {
      func_0x003c4da0(*(undefined2 *)((long)ppppcVar9 + 2));
    }
    else {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/sockaddr_utils.cc"
                   ,0x13e,2,"Unknown socket family %d in grpc_sockaddr_get_port");
    }
  }
  return;
}



/* Entry: 003a1340; end: 003a13ab;  */

void FUN_003a1340(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 != '\x01') {
    if ((cVar1 == '\x1e') || (cVar1 == '\x02')) {
      func_0x003c4da0(*(undefined2 *)(param_1 + 2));
    }
    else {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/sockaddr_utils.cc"
                   ,0x13e,2,"Unknown socket family %d in grpc_sockaddr_get_port");
    }
  }
  return;
}



/* Entry: 003a13ac; end: 003a1433;  */

long * FUN_003a13ac(long *param_1,long *param_2)

{
  undefined2 uVar1;
  long *plVar2;
  long *extraout_x8;
  long lVar3;
  
  plVar2 = param_1;
  if (*(char *)((long)param_1 + 1) != '\x1e') {
    if (*(char *)((long)param_1 + 1) != '\x02') {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/sockaddr_utils.cc"
                   ,0x152,2,"Unknown socket family %d in grpc_sockaddr_set_port");
      return (long *)0x0;
    }
    if ((uint)param_2 < 0x10000) goto LAB_003a13e8;
    func_0x007733e8();
  }
  if (0xffff < (uint)param_2) {
    func_0x0077341c();
    if (*(char *)((long)plVar2 + 1) == '\x1e') {
      *(undefined1 *)((long)extraout_x8 + 0x17) = 0x10;
      lVar3 = plVar2[1];
      extraout_x8[1] = plVar2[2];
      *extraout_x8 = lVar3;
      *(undefined1 *)(extraout_x8 + 2) = 0;
    }
    else {
      if (*(char *)((long)plVar2 + 1) != '\x02') {
        func_0x00773450();
        *plVar2 = *param_2;
        *param_2 = 0x36;
        if (*plVar2 == 0) {
          FUN_0055142c(plVar2);
        }
        return plVar2;
      }
      *(undefined1 *)((long)extraout_x8 + 0x17) = 4;
      *(undefined4 *)extraout_x8 = *(undefined4 *)((long)plVar2 + 4);
      *(undefined1 *)((long)extraout_x8 + 4) = 0;
    }
    return plVar2;
  }
LAB_003a13e8:
  uVar1 = SUB82(param_2,0);
  FUN_003c4d98();
  *(undefined2 *)((long)param_1 + 2) = uVar1;
  return (long *)((long)&MACH_HEADER.magic + 1);
}



/* Entry: 003a1434; end: 003a1487;  */

long * FUN_003a1434(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*(char *)((long)param_2 + 1) == '\x1e') {
    *(undefined1 *)((long)param_1 + 0x17) = 0x10;
    lVar1 = param_2[1];
    param_1[1] = param_2[2];
    *param_1 = lVar1;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  else {
    if (*(char *)((long)param_2 + 1) != '\x02') {
      func_0x00773450();
      *param_2 = *param_3;
      *param_3 = 0x36;
      if (*param_2 == 0) {
        FUN_0055142c(param_2);
      }
      return param_2;
    }
    *(undefined1 *)((long)param_1 + 0x17) = 4;
    *(undefined4 *)param_1 = *(undefined4 *)((long)param_2 + 4);
    *(undefined1 *)((long)param_1 + 4) = 0;
  }
  return param_2;
}



/* Entry: 003a1488; end: 003a14df;  */

long * FUN_003a1488(long *param_1,long *param_2)

{
  *param_1 = *param_2;
  *param_2 = 0x36;
  if (*param_1 == 0) {
    FUN_0055142c(param_1);
  }
  return param_1;
}



/* Entry: 003a14e0; end: 003a1547;  */

ulong * FUN_003a14e0(ulong *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  int *piVar4;
  
  uVar3 = *param_2;
  *param_1 = uVar3;
  if ((uVar3 & 1) != 0) {
    piVar4 = (int *)(uVar3 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uVar3 = *param_1;
  }
  if (uVar3 == 0) {
    FUN_0055142c(param_1);
  }
  return param_1;
}



/* Entry: 003a1548; end: 003a154f;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_003a1548(undefined8 param_1,ulong param_2,undefined8 param_3,byte *param_4)

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



/* Entry: 003a1550; end: 003a15db;  */

undefined8 * FUN_003a1550(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uStack_21;
  
  uVar3 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  puVar1 = param_1 + 4;
  FUN_005d25fc(param_1 + 0x26);
  param_1[0x25] = 0x20;
  puVar2 = (undefined8 *)((long)puVar1 + ((ulong)puVar1 & 8));
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[9] = 0;
  puVar2[8] = 0;
  puVar2[0xb] = 0;
  puVar2[10] = 0;
  puVar2[0xd] = 0;
  puVar2[0xc] = 0;
  puVar2[0xf] = 0;
  puVar2[0xe] = 0;
  puVar2[0x11] = 0;
  puVar2[0x10] = 0;
  puVar2[0x13] = 0;
  puVar2[0x12] = 0;
  puVar2[0x15] = 0;
  puVar2[0x14] = 0;
  puVar2[0x17] = 0;
  puVar2[0x16] = 0;
  puVar2[0x19] = 0;
  puVar2[0x18] = 0;
  puVar2[0x1b] = 0;
  puVar2[0x1a] = 0;
  puVar2[0x1d] = 0;
  puVar2[0x1c] = 0;
  puVar2[0x1f] = 0;
  puVar2[0x1e] = 0;
  FUN_003a1864(puVar1,&uStack_21);
  param_1[0x28] = *param_1;
  *(undefined1 *)(param_1 + 0x27) = 1;
  return param_1;
}



/* Entry: 003a15dc; end: 003a15f3;  */

void FUN_003a15dc(undefined8 *param_1)

{
  param_1[0x28] = *param_1;
  *(undefined1 *)(param_1 + 0x27) = 1;
  return;
}



/* Entry: 003a15f4; end: 003a1863;  */

long FUN_003a15f4(ulong *param_1)

{
  ulong uVar1;
  double *pdVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  
  pdVar2 = &dStack_60;
  if ((char)param_1[0x27] == '\0') {
    uVar1 = param_1[0x28];
    uVar5 = 0x8000000000000000;
    if (uVar1 == 0x8000000000000000) {
      uVar1 = 0x7fffffffffffffff;
LAB_003a1698:
      if (0.0 <= (double)param_1[1]) {
        uVar1 = uVar5;
      }
    }
    else {
      uVar5 = 0x7fffffffffffffff;
      if (uVar1 == 0x7fffffffffffffff) {
        uVar1 = 0x8000000000000000;
        goto LAB_003a1698;
      }
      dVar7 = (((double)param_1[1] * (double)(long)uVar1) / 1000.0) * 1000.0;
      if (9.223372036854776e+18 <= dVar7) {
        uVar1 = 0x7fffffffffffffff;
      }
      else if (dVar7 <= -9.223372036854776e+18) {
        uVar1 = 0x8000000000000000;
      }
      else {
        uVar1 = (long)dVar7;
      }
    }
    uVar5 = param_1[3];
    if ((long)uVar1 <= (long)param_1[3]) {
      uVar5 = uVar1;
    }
    param_1[0x28] = uVar5;
    dVar7 = -((double)param_1[2] * ((double)(long)uVar5 / 1000.0));
    dVar8 = (double)param_1[2] * ((double)(long)uVar5 / 1000.0);
    puVar3 = param_1;
    if (dVar7 <= dVar8 && (ulong)ABS(dVar8 - dVar7) < 0x7ff0000000000000) {
      dStack_60 = dVar7;
      dStack_58 = dVar8;
      dStack_50 = dVar8 - dVar7;
      FUN_003a1964(&dStack_60,param_1 + 4,&dStack_60);
      puVar3 = (ulong *)pdVar2;
    }
    dVar7 = dVar7 * 1000.0;
    lVar6 = 0x7fffffffffffffff;
    if (dVar7 < 9.223372036854776e+18) {
      if (dVar7 <= -9.223372036854776e+18) {
        lVar6 = -0x8000000000000000;
      }
      else {
        lVar6 = (long)dVar7;
      }
    }
    func_0x003c1f6c();
    uVar1 = *puVar3;
    FUN_003c1e28();
    if (uVar1 == 0x7fffffffffffffff) {
      return 0x7fffffffffffffff;
    }
    uVar5 = param_1[0x28];
    if (uVar5 == 0x7fffffffffffffff) {
      return 0x7fffffffffffffff;
    }
    uVar4 = 0x8000000000000000;
    if ((uVar1 != 0x8000000000000000) && (uVar5 != 0x8000000000000000)) {
      if ((long)uVar1 < 1) {
        if ((long)uVar5 < (long)(-0x8000000000000000 - uVar1)) goto LAB_003a17fc;
      }
      else if ((long)(uVar1 ^ 0x7fffffffffffffff) < (long)uVar5) {
        return 0x7fffffffffffffff;
      }
      uVar4 = uVar5 + uVar1;
    }
LAB_003a17fc:
    if (lVar6 == 0x7fffffffffffffff) {
      return 0x7fffffffffffffff;
    }
    if (uVar4 == 0x7fffffffffffffff) {
      return 0x7fffffffffffffff;
    }
    if (lVar6 == -0x8000000000000000) {
      return -0x8000000000000000;
    }
    if (uVar4 == 0x8000000000000000) {
      return -0x8000000000000000;
    }
    if ((long)uVar4 < 1) {
      if (lVar6 < (long)(-0x8000000000000000 - uVar4)) {
        return -0x8000000000000000;
      }
    }
    else if ((long)(uVar4 ^ 0x7fffffffffffffff) < lVar6) goto LAB_003a1660;
    lVar6 = uVar4 + lVar6;
  }
  else {
    *(undefined1 *)(param_1 + 0x27) = 0;
    uVar5 = param_1[0x28];
    func_0x003c1f6c();
    uVar1 = *param_1;
    FUN_003c1e28();
    if (uVar5 == 0x7fffffffffffffff || uVar1 == 0x7fffffffffffffff) {
      return 0x7fffffffffffffff;
    }
    if (uVar5 == 0x8000000000000000 || uVar1 == 0x8000000000000000) {
      return -0x8000000000000000;
    }
    if ((long)uVar1 < 1) {
      if ((long)uVar5 < (long)(-0x8000000000000000 - uVar1)) {
        return -0x8000000000000000;
      }
LAB_003a16f4:
      return uVar1 + uVar5;
    }
    if ((long)uVar5 <= (long)(uVar1 ^ 0x7fffffffffffffff)) goto LAB_003a16f4;
LAB_003a1660:
    lVar6 = 0x7fffffffffffffff;
  }
  return lVar6;
}



/* Entry: 003a1864; end: 003a1963;  */

void FUN_003a1864(ulong param_1,undefined8 param_2,double *param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  undefined8 uStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined1 auStack_130 [32];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  FUN_005d2600(auStack_130,0x20);
  puVar4 = (undefined4 *)((long)&uStack_58 + 4);
  uVar5 = 0x3c;
  do {
    uVar1 = *puVar4;
    lVar3 = uVar5 * 2;
    *puVar4 = *(undefined4 *)((long)&uStack_140 + lVar3 + 4);
    *(undefined4 *)((long)&uStack_140 + lVar3 + 4) = uVar1;
    uVar1 = puVar4[-1];
    puVar4[-1] = *(undefined4 *)((long)&uStack_140 + lVar3);
    *(undefined4 *)((long)&uStack_140 + lVar3) = uVar1;
    uVar1 = puVar4[-2];
    puVar4[-2] = *(undefined4 *)((long)&uStack_148 + lVar3 + 4);
    *(undefined4 *)((long)&uStack_148 + lVar3 + 4) = uVar1;
    uVar5 = uVar5 - 8;
    uVar1 = puVar4[-3];
    puVar4[-3] = *(undefined4 *)((long)&uStack_148 + lVar3);
    *(undefined4 *)((long)&uStack_148 + lVar3) = uVar1;
    puVar4 = puVar4 + -8;
  } while (7 < uVar5);
  lVar3 = param_1 + (ulong)((param_1 & 0xf) != 0) * 8;
  FUN_005d2258(auStack_130);
  *(undefined8 *)(param_1 + 0x108) = 0x20;
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_38) {
    ___stack_chk_fail();
    pcStack_138 = FUN_003a1964;
    uStack_148 = param_1;
    uStack_140 = &stack0xfffffffffffffff0;
    do {
      lVar2 = lVar3;
      FUN_003a19f0();
      dVar6 = 0.0;
      if (lVar2 != 0) {
        dVar6 = (double)((((ulong)(lVar2 << (LZCOUNT(lVar2) & 0x3fU)) >> 0xb & 0xfffffffffffff) -
                         (LZCOUNT(lVar2) << 0x34)) + 0x3fe0000000000000);
      }
      dVar7 = param_3[2];
    } while ((param_3[1] <= *param_3 + dVar7 * dVar6) &&
            (0.0 < dVar7 && (ulong)ABS(dVar7) < 0x7ff0000000000000));
    return;
  }
  return;
}



/* Entry: 003a1964; end: 003a19ef;  */

void FUN_003a1964(undefined8 param_1,long param_2,double *param_3)

{
  long lVar1;
  double dVar2;
  double dVar3;
  
  do {
    lVar1 = param_2;
    FUN_003a19f0();
    dVar2 = 0.0;
    if (lVar1 != 0) {
      dVar2 = (double)((((ulong)(lVar1 << (LZCOUNT(lVar1) & 0x3fU)) >> 0xb & 0xfffffffffffff) -
                       (LZCOUNT(lVar1) << 0x34)) + 0x3fe0000000000000);
    }
    dVar3 = param_3[2];
  } while ((param_3[1] <= *param_3 + dVar3 * dVar2) &&
          (0.0 < dVar3 && (ulong)ABS(dVar3) < 0x7ff0000000000000));
  return;
}



/* Entry: 003a19f0; end: 003a1a47;  */

undefined8 FUN_003a19f0(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_1 + (ulong)((param_1 & 0xf) != 0) * 8;
  uVar2 = *(ulong *)(param_1 + 0x108);
  if (0x1f < uVar2) {
    *(undefined8 *)(param_1 + 0x108) = 2;
    FUN_005d2330(*(undefined8 *)(param_1 + 0x110),lVar1);
    uVar2 = *(ulong *)(param_1 + 0x108);
  }
  *(ulong *)(param_1 + 0x108) = uVar2 + 1;
  return *(undefined8 *)(lVar1 + uVar2 * 8);
}



/* Entry: 003a1a48; end: 003a1a4f;  */

void FUN_003a1a48(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 003a1a50; end: 003a1bc3;  */

void FUN_003a1a50(undefined8 param_1,undefined8 ****param_2,int *param_3,undefined8 param_4,
                 char *param_5)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  char *pcVar5;
  undefined8 ****ppppuVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 ****unaff_x19;
  undefined8 unaff_x20;
  int *unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 **unaff_x29;
  code *unaff_x30;
  char acStack_151 [89];
  undefined8 ***pppuStack_f8;
  char *pcStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined4 uStack_68;
  int aiStack_60 [6];
  undefined4 uStack_48;
  
  piVar4 = (int *)&uStack_80;
  iVar2 = *param_3;
  if (iVar2 == 0) {
    pcVar7 = *(char **)(param_3 + 2);
    param_5 = *(char **)(param_3 + 4);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    uVar3 = param_1;
    if (param_5 == (char *)0x0) {
      param_5 = "";
    }
code_r0x003a1ce8:
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(int **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *****)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    FUN_00353254((undefined1 *)((long)register0x00000008 + -0x48),param_5);
    FUN_003a1f88(uVar3,param_2,pcVar7,pcVar8,(undefined1 *)((long)register0x00000008 + -0x48));
    if (*(char *)((long)register0x00000008 + -0x31) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x48));
    }
    return;
  }
  if (iVar2 == 2) {
    uVar10 = *(undefined8 *)(param_3 + 2);
    uVar9 = uVar10;
    _strlen(uVar10);
    uVar3 = *(undefined8 *)(param_3 + 4);
    (*(code *)**(undefined8 **)(param_3 + 6))();
    ppuStack_78 = &PTR_DAT_009df3a8;
    if (*(undefined ***)(param_3 + 6) != (undefined **)0x0) {
      ppuStack_78 = *(undefined ***)(param_3 + 6);
    }
    uStack_68 = 2;
    uStack_80 = uVar3;
    FUN_003a1bc4(param_1,param_2,uVar10,uVar9,&uStack_80);
LAB_003a1b44:
    FUN_00382478(piVar4);
    return;
  }
  if (iVar2 == 1) {
    uVar9 = *(undefined8 *)(param_3 + 2);
    uVar3 = uVar9;
    _strlen(uVar9);
    aiStack_60[0] = param_3[4];
    uStack_48 = 0;
    FUN_003a1bc4(param_1,param_2,uVar9,uVar3,aiStack_60);
    piVar4 = aiStack_60;
    goto LAB_003a1b44;
  }
  pcVar5 = "return ChannelArgs()";
  pcVar7 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/channel_args.cc";
  pcVar8 = (char *)0x51;
  func_0x00338df0("return ChannelArgs()",
                  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/channel_args.cc"
                 );
  FUN_00382478(&uStack_80);
  __Unwind_Resume(pcVar5);
  pcStack_88 = FUN_003a1bc4;
  unaff_x29 = &puStack_90;
  puStack_90 = &stack0xfffffffffffffff0;
  if ((char *)0x7ffffffffffffff7 < pcVar8) {
    unaff_x19 = &pppuStack_f8;
    func_0x0033b318();
    FUN_00382478(acStack_151 + 0x39);
    if (uStack_e8._7_1_ < '\0') {
      __ZdlPv(pppuStack_f8);
    }
    unaff_x30 = FUN_003a1ce8;
    param_2 = unaff_x19;
    __Unwind_Resume(unaff_x19);
    register0x00000008 = (BADSPACEBASE *)(acStack_151 + 0x31);
    uVar3 = extraout_x8_00;
    unaff_x20 = param_1;
    unaff_x21 = param_3;
    goto code_r0x003a1ce8;
  }
  if (pcVar8 < "") {
    uStack_e8 = CONCAT17((char)pcVar8,(undefined7)uStack_e8);
    ppppuVar6 = &pppuStack_f8;
    if (pcVar8 == (char *)0x0) goto LAB_003a1c58;
  }
  else {
    uVar1 = ((ulong)pcVar8 & 0xfffffffffffffff8) + 8;
    if (((ulong)pcVar8 | 7) != 0x17) {
      uVar1 = (ulong)pcVar8 | 7;
    }
    ppppuVar6 = (undefined8 ****)(uVar1 + 1);
    __Znwm();
    uStack_e8 = uVar1 + 1 | 0x8000000000000000;
    pppuStack_f8 = ppppuVar6;
    pcStack_f0 = pcVar8;
  }
  _memmove(ppppuVar6,pcVar7,pcVar8);
LAB_003a1c58:
  *(char *)((long)ppppuVar6 + (long)pcVar8) = '\0';
  FUN_003a34e0(acStack_151 + 0x39,param_5);
  FUN_003a1ee0(&uStack_e0,pcVar5,&pppuStack_f8,acStack_151 + 0x39);
  extraout_x8[1] = uStack_d8;
  *extraout_x8 = uStack_e0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  FUN_00382478(acStack_151 + 0x39);
  if ((long)uStack_e8 < 0) {
    __ZdlPv(pppuStack_f8);
  }
  return;
}



/* Entry: 003a1bc4; end: 003a1ce7;  */

void FUN_003a1bc4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 extraout_x8;
  undefined8 auStack_e8 [2];
  char cStack_d1;
  undefined1 auStack_98 [32];
  undefined8 **ppuStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (0x7ffffffffffffff7 < param_4) {
    pppuVar2 = &ppuStack_78;
    func_0x0033b318();
    FUN_00382478(auStack_98);
    if (uStack_68._7_1_ < '\0') {
      __ZdlPv(ppuStack_78);
    }
    __Unwind_Resume(pppuVar2);
    FUN_00353254(auStack_e8,param_5);
    FUN_003a1f88(extraout_x8,pppuVar2,param_3,param_4,auStack_e8);
    if (cStack_d1 < '\0') {
      __ZdlPv(auStack_e8[0]);
    }
    return;
  }
  if (param_4 < 0x17) {
    uStack_68 = CONCAT17((char)param_4,(undefined7)uStack_68);
    pppuVar2 = &ppuStack_78;
    if (param_4 == 0) goto LAB_003a1c58;
  }
  else {
    uVar1 = (param_4 & 0xfffffffffffffff8) + 8;
    if ((param_4 | 7) != 0x17) {
      uVar1 = param_4 | 7;
    }
    pppuVar2 = (undefined8 ***)(uVar1 + 1);
    __Znwm();
    uStack_68 = uVar1 + 1 | 0x8000000000000000;
    ppuStack_78 = pppuVar2;
    uStack_70 = param_4;
  }
  _memmove(pppuVar2,param_3,param_4);
LAB_003a1c58:
  *(undefined1 *)((long)pppuVar2 + param_4) = 0;
  FUN_003a34e0(auStack_98,param_5);
  FUN_003a1ee0(&uStack_60,param_2,&ppuStack_78,auStack_98);
  param_1[1] = uStack_58;
  *param_1 = uStack_60;
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_00382478(auStack_98);
  if ((long)uStack_68 < 0) {
    __ZdlPv(ppuStack_78);
  }
  return;
}



/* Entry: 003a1ce8; end: 003a1d6f;  */

void FUN_003a1ce8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 auStack_48 [2];
  char cStack_31;
  
  FUN_00353254(auStack_48,param_5);
  FUN_003a1f88(param_1,param_2,param_3,param_4,auStack_48);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return;
}



/* Entry: 003a1d70; end: 003a1e3b;  */

void FUN_003a1d70(undefined8 *param_1,ulong *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((param_2 != (ulong *)0x0) && (*param_2 != 0)) {
    uVar7 = 0;
    do {
      puVar2 = (undefined8 *)(param_2[1] + uVar7 * 0x20);
      uStack_58 = puVar2[1];
      uStack_60 = *puVar2;
      uStack_48 = puVar2[3];
      uStack_50 = puVar2[2];
      FUN_003a1a50(auStack_40,param_1,&uStack_60);
      FUN_003a347c(param_1,auStack_40);
      plVar5 = plStack_38;
      if (plStack_38 != (long *)0x0) {
        plVar1 = plStack_38 + 1;
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
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *param_2);
  }
  return;
}



/* Entry: 003a1e3c; end: 003a1ecb;  */

undefined8 FUN_003a1e3c(undefined8 *param_1)

{
  undefined8 uVar1;
  long *plStack_40;
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  lStack_38 = 0;
  lStack_30 = 0;
  uStack_28 = 0;
  plStack_40 = &lStack_38;
  FUN_003a3740(*param_1,&plStack_40);
  uVar1 = 0;
  FUN_003a24dc(0,0,0,lStack_38,lStack_30 - lStack_38 >> 5);
  if (lStack_38 != 0) {
    lStack_30 = lStack_38;
    __ZdlPv();
  }
  return uVar1;
}



/* Entry: 003a1ecc; end: 003a1edf;  */

/* WARNING: Removing unreachable block (ram,0x003a252c) */
/* WARNING: Removing unreachable block (ram,0x003a2584) */
/* WARNING: Removing unreachable block (ram,0x003a2548) */
/* WARNING: Removing unreachable block (ram,0x003a254c) */
/* WARNING: Removing unreachable block (ram,0x003a2558) */
/* WARNING: Removing unreachable block (ram,0x003a256c) */
/* WARNING: Removing unreachable block (ram,0x003a2588) */
/* WARNING: Removing unreachable block (ram,0x003a25e8) */
/* WARNING: Removing unreachable block (ram,0x003a2660) */
/* WARNING: Removing unreachable block (ram,0x003a2604) */
/* WARNING: Removing unreachable block (ram,0x003a2608) */
/* WARNING: Removing unreachable block (ram,0x003a2614) */
/* WARNING: Removing unreachable block (ram,0x003a2628) */

dword * FUN_003a1ecc(ulong *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  dword *pdVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((param_1 == (ulong *)0x0) || (*param_1 == 0)) {
    lVar4 = 0;
  }
  else {
    uVar5 = 0;
    lVar4 = 0;
    do {
      lVar4 = lVar4 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 != *param_1);
  }
  pdVar2 = &MACH_HEADER.ncmds;
  FUN_00338c74();
  lVar4 = lVar4 + param_3;
  *(long *)pdVar2 = lVar4;
  if (lVar4 != 0) {
    lVar4 = lVar4 * 0x20;
    FUN_00338c74();
    *(long *)(pdVar2 + 2) = lVar4;
    if ((param_1 == (ulong *)0x0) || (*param_1 == 0)) {
      lVar4 = 0;
    }
    else {
      uVar5 = 0;
      lVar4 = 0;
      do {
        FUN_003a26fc(&uStack_80,param_1[1] + uVar5 * 0x20);
        puVar1 = (undefined8 *)(*(long *)(pdVar2 + 2) + lVar4 * 0x20);
        lVar4 = lVar4 + 1;
        puVar1[1] = uStack_78;
        *puVar1 = uStack_80;
        puVar1[3] = uStack_68;
        puVar1[2] = uStack_70;
        uVar5 = uVar5 + 1;
      } while (uVar5 < *param_1);
    }
    if (param_3 != 0) {
      lVar3 = lVar4 << 5;
      lVar4 = lVar4 + param_3;
      do {
        FUN_003a26fc(&uStack_80,param_2);
        puVar1 = (undefined8 *)(*(long *)(pdVar2 + 2) + lVar3);
        puVar1[1] = uStack_78;
        *puVar1 = uStack_80;
        puVar1[3] = uStack_68;
        puVar1[2] = uStack_70;
        param_2 = param_2 + 0x20;
        lVar3 = lVar3 + 0x20;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    if (lVar4 == *(long *)pdVar2) {
      return pdVar2;
    }
    func_0x00773484();
  }
  *(long *)(pdVar2 + 2) = 0;
  return pdVar2;
}



/* Entry: 003a1ee0; end: 003a1f87;  */

void FUN_003a1ee0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 auStack_70 [32];
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_48 = param_3[1];
  uStack_50 = *param_3;
  lStack_40 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  FUN_003a34e0(auStack_70,param_4);
  FUN_003a394c(&uStack_30,param_2,&uStack_50,auStack_70);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_00382478(auStack_70);
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  return;
}



/* Entry: 003a1f88; end: 003a1feb;  */

void FUN_003a1f88(void)

{
  undefined8 *in_x3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  uStack_38 = in_x3[1];
  uStack_40 = *in_x3;
  uStack_30 = in_x3[2];
  in_x3[1] = 0;
  in_x3[2] = 0;
  *in_x3 = 0;
  uStack_28 = 1;
  FUN_003a1bc4();
  FUN_00382478(&uStack_40);
  return;
}



/* Entry: 003a1fec; end: 003a2027;  */

void FUN_003a1fec(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_40 = param_3;
  uStack_38 = param_4;
  FUN_003a4ed0(&uStack_30,param_2,&uStack_40);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  return;
}



/* Entry: 003a2028; end: 003a20f3;  */

ulong FUN_003a2028(uint *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  FUN_003a35e0(param_1,&uStack_20);
  if ((param_1 == (uint *)0x0) || (param_1[6] != 0)) {
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    uVar2 = *param_1 & 0xffffff00;
    uVar1 = *param_1 & 0xff;
    uVar3 = 0x100000000;
  }
  return uVar3 | (uVar2 | uVar1);
}



/* Entry: 003a20f4; end: 003a2163;  */

void FUN_003a20f4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_3;
  uStack_28 = param_4;
  FUN_003a35e0(param_2,&uStack_30);
  if ((param_2 == (undefined8 *)0x0) || (*(int *)(param_2 + 3) != 1)) {
    uVar3 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    uVar1 = param_2[1];
    puVar2 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar2 = param_2;
    }
    *param_1 = puVar2;
    param_1[1] = uVar1;
    uVar3 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar3;
  return;
}



/* Entry: 003a2164; end: 003a21a3;  */

void FUN_003a2164(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  FUN_003a35e0(param_1,&uStack_20);
  return;
}



/* Entry: 003a21a4; end: 003a23ab;  */

/* WARNING: Type propagation algorithm not settling */

dword * FUN_003a21a4(uint *param_1,undefined8 *******param_2,ulong param_3,undefined8 param_4,
                    long param_5)

{
  undefined8 *******pppppppuVar1;
  undefined8 *******pppppppuVar2;
  dword *pdVar3;
  undefined8 uVar4;
  dword *pdVar5;
  char **ppcVar6;
  long lVar7;
  uint uVar8;
  undefined8 extraout_x8;
  ulong uVar9;
  undefined8 *puVar10;
  dword *pdVar11;
  int iVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *******pppppppuStack_158;
  ulong uStack_150;
  byte bStack_141;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  char *pcStack_128;
  undefined8 uStack_120;
  undefined8 *******pppppppuStack_f8;
  ulong uStack_f0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  long lStack_98;
  undefined8 *******pppppppuStack_90;
  undefined8 *******pppppppuStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 *******pppppppuStack_70;
  ulong uStack_68;
  undefined8 *******pppppppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  pppppppuStack_58 = param_2;
  uStack_50 = param_3;
  FUN_003a35e0(param_1,&pppppppuStack_58);
  if (param_1 != (uint *)0x0) {
    if (param_1[6] == 0) {
      uVar8 = *param_1;
      if ((uVar8 != 0) && (uVar8 != 1)) {
        if (0x7ffffffffffffff7 < param_3) goto LAB_003a2384;
        if (param_3 < 0x17) {
          uStack_48 = CONCAT17((char)param_3,(undefined7)uStack_48);
          pppppppuVar1 = &pppppppuStack_58;
          if (param_3 != 0) goto LAB_003a2304;
        }
        else {
          uVar9 = (param_3 & 0xfffffffffffffff8) + 8;
          if ((param_3 | 7) != 0x17) {
            uVar9 = param_3 | 7;
          }
          pppppppuVar1 = (undefined8 *******)(uVar9 + 1);
          __Znwm();
          uStack_48 = uVar9 + 1 | 0x8000000000000000;
          pppppppuStack_58 = pppppppuVar1;
          uStack_50 = param_3;
LAB_003a2304:
          _memmove(pppppppuVar1,param_2,param_3);
        }
        *(undefined1 *)((long)pppppppuVar1 + param_3) = 0;
        pppppppuStack_70 = pppppppuStack_58;
        if (-1 < (long)uStack_48) {
          pppppppuStack_70 = &pppppppuStack_58;
        }
        uStack_68 = (ulong)*param_1;
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/channel_args.cc"
                     ,0xb4,2,"%s treated as bool but set to %d (assuming true)");
        if ((long)uStack_48 < 0) {
          __ZdlPv(pppppppuStack_58);
        }
        uVar8 = 1;
      }
      iVar12 = 1;
      goto LAB_003a2368;
    }
    if (0x7ffffffffffffff7 < param_3) {
LAB_003a2384:
      pppppppuVar1 = &pppppppuStack_58;
      func_0x0033b318();
      if ((long)uStack_48 < 0) {
        __ZdlPv(pppppppuStack_58);
      }
      pppppppuVar2 = pppppppuVar1;
      __Unwind_Resume();
      pcStack_78 = FUN_003a23ac;
      lStack_98 = *(long *)PTR____stack_chk_guard_00999f88;
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_130 = 0;
      puStack_c8 = &uStack_140;
      pppppppuStack_90 = param_2;
      pppppppuStack_88 = pppppppuVar1;
      puStack_80 = &stack0xfffffffffffffff0;
      FUN_003a5a88(*pppppppuVar2,&puStack_c8);
      puStack_c8 = (undefined8 *)&UNK_00915024;
      uStack_c0 = 1;
      lVar7 = 2;
      FUN_0037b5c0(&pppppppuStack_158,uStack_140,uStack_138,", ",2);
      uStack_f0 = uStack_150;
      pppppppuStack_f8 = pppppppuStack_158;
      if (-1 < (char)bStack_141) {
        uStack_f0 = (ulong)bStack_141;
        pppppppuStack_f8 = &pppppppuStack_158;
      }
      pcStack_128 = "}";
      uStack_120 = 1;
      pppppppuVar1 = &pppppppuStack_f8;
      ppcVar6 = &pcStack_128;
      FUN_00575ddc(extraout_x8,&puStack_c8);
      if ((char)bStack_141 < '\0') {
        __ZdlPv(pppppppuStack_158);
      }
      puStack_c8 = &uStack_140;
      pdVar3 = (dword *)&puStack_c8;
      FUN_0037b728();
      if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_98) {
        return pdVar3;
      }
      ___stack_chk_fail();
      if ((char)bStack_141 < '\0') {
        __ZdlPv(pppppppuStack_158);
      }
      puStack_c8 = &uStack_140;
      FUN_0037b728(&puStack_c8);
      __Unwind_Resume();
      if ((pdVar3 == (dword *)0x0) ||
         (puVar14 = *(undefined8 **)pdVar3, puVar14 == (undefined8 *)0x0)) {
        lVar16 = 0;
      }
      else {
        puVar17 = (undefined8 *)0x0;
        lVar16 = 0;
        do {
          if (ppcVar6 == (char **)0x0) {
            uVar9 = 1;
          }
          else {
            uVar15 = (*(undefined8 **)(pdVar3 + 2))[(long)puVar17 * 4 + 1];
            uVar4 = uVar15;
            _strcmp(uVar15,*pppppppuVar1);
            if ((int)uVar4 == 0) {
              uVar8 = 1;
            }
            else {
              pdVar5 = &MACH_HEADER.magic;
              do {
                pdVar5 = (dword *)((long)pdVar5 + 1);
                if (ppcVar6 == (char **)pdVar5) break;
                uVar4 = uVar15;
                _strcmp(uVar15,pppppppuVar1[(long)pdVar5]);
              } while ((int)uVar4 != 0);
              uVar8 = (uint)(pdVar5 < ppcVar6);
            }
            uVar9 = (ulong)(uVar8 ^ 1);
          }
          lVar16 = lVar16 + uVar9;
          puVar17 = (undefined8 *)((long)puVar17 + 1);
        } while (puVar17 != puVar14);
      }
      pdVar5 = &MACH_HEADER.ncmds;
      FUN_00338c74();
      lVar16 = lVar16 + param_5;
      *(long *)pdVar5 = lVar16;
      if (lVar16 != 0) {
        lVar16 = lVar16 * 0x20;
        FUN_00338c74();
        *(long *)(pdVar5 + 2) = lVar16;
        if ((pdVar3 == (dword *)0x0) ||
           (puVar14 = *(undefined8 **)pdVar3, puVar14 == (undefined8 *)0x0)) {
          lVar16 = 0;
        }
        else {
          puVar17 = (undefined8 *)0x0;
          lVar16 = 0;
          do {
            puVar10 = *(undefined8 **)(pdVar3 + 2);
            if (ppcVar6 == (char **)0x0) {
LAB_003a2638:
              FUN_003a26fc(&uStack_1e0,puVar10 + (long)puVar17 * 4);
              puVar14 = (undefined8 *)(*(long *)(pdVar5 + 2) + lVar16 * 0x20);
              lVar16 = lVar16 + 1;
              puVar14[1] = uStack_1d8;
              *puVar14 = uStack_1e0;
              puVar14[3] = uStack_1c8;
              puVar14[2] = uStack_1d0;
              puVar14 = *(undefined8 **)pdVar3;
            }
            else {
              uVar15 = (puVar10 + (long)puVar17 * 4)[1];
              uVar4 = uVar15;
              _strcmp(uVar15,*pppppppuVar1);
              if ((int)uVar4 != 0) {
                pdVar11 = &MACH_HEADER.magic;
                do {
                  pdVar11 = (dword *)((long)pdVar11 + 1);
                  if (ppcVar6 == (char **)pdVar11) break;
                  uVar4 = uVar15;
                  _strcmp(uVar15,pppppppuVar1[(long)pdVar11]);
                } while ((int)uVar4 != 0);
                if (ppcVar6 <= pdVar11) goto LAB_003a2638;
              }
            }
            puVar17 = (undefined8 *)((long)puVar17 + 1);
          } while (puVar17 < puVar14);
        }
        if (param_5 != 0) {
          lVar13 = lVar16 << 5;
          lVar16 = lVar16 + param_5;
          do {
            FUN_003a26fc(&uStack_1e0,lVar7);
            puVar14 = (undefined8 *)(*(long *)(pdVar5 + 2) + lVar13);
            puVar14[1] = uStack_1d8;
            *puVar14 = uStack_1e0;
            puVar14[3] = uStack_1c8;
            puVar14[2] = uStack_1d0;
            lVar7 = lVar7 + 0x20;
            lVar13 = lVar13 + 0x20;
            param_5 = param_5 + -1;
          } while (param_5 != 0);
        }
        if (lVar16 == *(long *)pdVar5) {
          return pdVar5;
        }
        func_0x00773484();
      }
      *(long *)(pdVar5 + 2) = 0;
      return pdVar5;
    }
    if (param_3 < 0x17) {
      uStack_48 = CONCAT17((char)param_3,(undefined7)uStack_48);
      pppppppuVar1 = &pppppppuStack_58;
      if (param_3 != 0) goto LAB_003a2270;
    }
    else {
      uVar9 = (param_3 & 0xfffffffffffffff8) + 8;
      if ((param_3 | 7) != 0x17) {
        uVar9 = param_3 | 7;
      }
      pppppppuVar1 = (undefined8 *******)(uVar9 + 1);
      __Znwm();
      uStack_48 = uVar9 + 1 | 0x8000000000000000;
      pppppppuStack_58 = pppppppuVar1;
      uStack_50 = param_3;
LAB_003a2270:
      _memmove(pppppppuVar1,param_2,param_3);
    }
    *(undefined1 *)((long)pppppppuVar1 + param_3) = 0;
    pppppppuStack_70 = pppppppuStack_58;
    if (-1 < (long)uStack_48) {
      pppppppuStack_70 = &pppppppuStack_58;
    }
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/channel_args.cc"
                 ,0xaa,2,"%s ignored: it must be an integer");
    if ((long)uStack_48 < 0) {
      __ZdlPv(pppppppuStack_58);
    }
  }
  uVar8 = 0;
  iVar12 = 0;
LAB_003a2368:
  return (dword *)(ulong)(uVar8 | iVar12 << 8);
}



/* Entry: 003a23ac; end: 003a24db;  */

dword * FUN_003a23ac(undefined8 param_1,undefined8 *param_2)

{
  dword *pdVar1;
  undefined8 uVar2;
  dword *pdVar3;
  undefined8 *******pppppppuVar4;
  char **ppcVar5;
  long lVar6;
  long in_x4;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  dword *pdVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 ******ppppppuStack_e8;
  ulong uStack_e0;
  byte bStack_d1;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  char *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 ******ppppppuStack_88;
  ulong uStack_80;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  puStack_58 = &uStack_d0;
  FUN_003a5a88(*param_2,&puStack_58);
  puStack_58 = (undefined8 *)&UNK_00915024;
  uStack_50 = 1;
  lVar6 = 2;
  FUN_0037b5c0(&ppppppuStack_e8,uStack_d0,uStack_c8,", ",2);
  uStack_80 = uStack_e0;
  ppppppuStack_88 = ppppppuStack_e8;
  if (-1 < (char)bStack_d1) {
    uStack_80 = (ulong)bStack_d1;
    ppppppuStack_88 = &ppppppuStack_e8;
  }
  pcStack_b8 = "}";
  uStack_b0 = 1;
  pppppppuVar4 = &ppppppuStack_88;
  ppcVar5 = &pcStack_b8;
  FUN_00575ddc(param_1,&puStack_58);
  if ((char)bStack_d1 < '\0') {
    __ZdlPv(ppppppuStack_e8);
  }
  puStack_58 = &uStack_d0;
  pdVar1 = (dword *)&puStack_58;
  FUN_0037b728();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return pdVar1;
  }
  ___stack_chk_fail();
  if ((char)bStack_d1 < '\0') {
    __ZdlPv(ppppppuStack_e8);
  }
  puStack_58 = &uStack_d0;
  FUN_0037b728(&puStack_58);
  __Unwind_Resume();
  if ((pdVar1 == (dword *)0x0) || (puVar12 = *(undefined8 **)pdVar1, puVar12 == (undefined8 *)0x0))
  {
    lVar14 = 0;
  }
  else {
    puVar15 = (undefined8 *)0x0;
    lVar14 = 0;
    do {
      if (ppcVar5 == (char **)0x0) {
        uVar8 = 1;
      }
      else {
        uVar13 = (*(undefined8 **)(pdVar1 + 2))[(long)puVar15 * 4 + 1];
        uVar2 = uVar13;
        _strcmp(uVar13,*pppppppuVar4);
        if ((int)uVar2 == 0) {
          uVar7 = 1;
        }
        else {
          pdVar3 = &MACH_HEADER.magic;
          do {
            pdVar3 = (dword *)((long)pdVar3 + 1);
            if (ppcVar5 == (char **)pdVar3) break;
            uVar2 = uVar13;
            _strcmp(uVar13,pppppppuVar4[(long)pdVar3]);
          } while ((int)uVar2 != 0);
          uVar7 = (uint)(pdVar3 < ppcVar5);
        }
        uVar8 = (ulong)(uVar7 ^ 1);
      }
      lVar14 = lVar14 + uVar8;
      puVar15 = (undefined8 *)((long)puVar15 + 1);
    } while (puVar15 != puVar12);
  }
  pdVar3 = &MACH_HEADER.ncmds;
  FUN_00338c74();
  lVar14 = lVar14 + in_x4;
  *(long *)pdVar3 = lVar14;
  if (lVar14 != 0) {
    lVar14 = lVar14 * 0x20;
    FUN_00338c74();
    *(long *)(pdVar3 + 2) = lVar14;
    if ((pdVar1 == (dword *)0x0) || (puVar12 = *(undefined8 **)pdVar1, puVar12 == (undefined8 *)0x0)
       ) {
      lVar14 = 0;
    }
    else {
      puVar15 = (undefined8 *)0x0;
      lVar14 = 0;
      do {
        puVar9 = *(undefined8 **)(pdVar1 + 2);
        if (ppcVar5 == (char **)0x0) {
LAB_003a2638:
          FUN_003a26fc(&uStack_170,puVar9 + (long)puVar15 * 4);
          puVar12 = (undefined8 *)(*(long *)(pdVar3 + 2) + lVar14 * 0x20);
          lVar14 = lVar14 + 1;
          puVar12[1] = uStack_168;
          *puVar12 = uStack_170;
          puVar12[3] = uStack_158;
          puVar12[2] = uStack_160;
          puVar12 = *(undefined8 **)pdVar1;
        }
        else {
          uVar13 = (puVar9 + (long)puVar15 * 4)[1];
          uVar2 = uVar13;
          _strcmp(uVar13,*pppppppuVar4);
          if ((int)uVar2 != 0) {
            pdVar10 = &MACH_HEADER.magic;
            do {
              pdVar10 = (dword *)((long)pdVar10 + 1);
              if (ppcVar5 == (char **)pdVar10) break;
              uVar2 = uVar13;
              _strcmp(uVar13,pppppppuVar4[(long)pdVar10]);
            } while ((int)uVar2 != 0);
            if (ppcVar5 <= pdVar10) goto LAB_003a2638;
          }
        }
        puVar15 = (undefined8 *)((long)puVar15 + 1);
      } while (puVar15 < puVar12);
    }
    if (in_x4 != 0) {
      lVar11 = lVar14 << 5;
      lVar14 = lVar14 + in_x4;
      do {
        FUN_003a26fc(&uStack_170,lVar6);
        puVar12 = (undefined8 *)(*(long *)(pdVar3 + 2) + lVar11);
        puVar12[1] = uStack_168;
        *puVar12 = uStack_170;
        puVar12[3] = uStack_158;
        puVar12[2] = uStack_160;
        lVar6 = lVar6 + 0x20;
        lVar11 = lVar11 + 0x20;
        in_x4 = in_x4 + -1;
      } while (in_x4 != 0);
    }
    if (lVar14 == *(long *)pdVar3) {
      return pdVar3;
    }
    func_0x00773484();
  }
  *(long *)(pdVar3 + 2) = 0;
  return pdVar3;
}



/* Entry: 003a24dc; end: 003a26ef;  */

dword * FUN_003a24dc(ulong *param_1,undefined8 *param_2,ulong param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  dword *pdVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((param_1 == (ulong *)0x0) || (uVar8 = *param_1, uVar8 == 0)) {
    lVar10 = 0;
  }
  else {
    uVar11 = 0;
    lVar10 = 0;
    do {
      if (param_3 == 0) {
        uVar5 = 1;
      }
      else {
        uVar9 = *(undefined8 *)(param_1[1] + uVar11 * 0x20 + 8);
        uVar2 = uVar9;
        _strcmp(uVar9,*param_2);
        if ((int)uVar2 == 0) {
          uVar4 = 1;
        }
        else {
          uVar5 = 1;
          do {
            uVar6 = uVar5;
            if (param_3 == uVar6) break;
            uVar2 = uVar9;
            _strcmp(uVar9,param_2[uVar6]);
            uVar5 = uVar6 + 1;
          } while ((int)uVar2 != 0);
          uVar4 = (uint)(uVar6 < param_3);
        }
        uVar5 = (ulong)(uVar4 ^ 1);
      }
      lVar10 = lVar10 + uVar5;
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar8);
  }
  pdVar3 = &MACH_HEADER.ncmds;
  FUN_00338c74();
  lVar10 = lVar10 + param_5;
  *(long *)pdVar3 = lVar10;
  if (lVar10 != 0) {
    lVar10 = lVar10 * 0x20;
    FUN_00338c74();
    *(long *)(pdVar3 + 2) = lVar10;
    if ((param_1 == (ulong *)0x0) || (uVar8 = *param_1, uVar8 == 0)) {
      lVar10 = 0;
    }
    else {
      uVar11 = 0;
      lVar10 = 0;
      do {
        lVar7 = param_1[1] + uVar11 * 0x20;
        if (param_3 == 0) {
LAB_003a2638:
          FUN_003a26fc(&uStack_80,lVar7);
          puVar1 = (undefined8 *)(*(long *)(pdVar3 + 2) + lVar10 * 0x20);
          lVar10 = lVar10 + 1;
          puVar1[1] = uStack_78;
          *puVar1 = uStack_80;
          puVar1[3] = uStack_68;
          puVar1[2] = uStack_70;
          uVar8 = *param_1;
        }
        else {
          uVar9 = *(undefined8 *)(lVar7 + 8);
          uVar2 = uVar9;
          _strcmp(uVar9,*param_2);
          if ((int)uVar2 != 0) {
            uVar5 = 1;
            do {
              uVar6 = uVar5;
              if (param_3 == uVar6) break;
              uVar2 = uVar9;
              _strcmp(uVar9,param_2[uVar6]);
              uVar5 = uVar6 + 1;
            } while ((int)uVar2 != 0);
            if (param_3 <= uVar6) goto LAB_003a2638;
          }
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar8);
    }
    if (param_5 != 0) {
      lVar7 = lVar10 << 5;
      lVar10 = lVar10 + param_5;
      do {
        FUN_003a26fc(&uStack_80,param_4);
        puVar1 = (undefined8 *)(*(long *)(pdVar3 + 2) + lVar7);
        puVar1[1] = uStack_78;
        *puVar1 = uStack_80;
        puVar1[3] = uStack_68;
        puVar1[2] = uStack_70;
        param_4 = param_4 + 0x20;
        lVar7 = lVar7 + 0x20;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
    }
    if (lVar10 == *(long *)pdVar3) {
      return pdVar3;
    }
    func_0x00773484();
  }
  *(long *)(pdVar3 + 2) = 0;
  return pdVar3;
}



/* Entry: 003a26f0; end: 003a26fb;  */

/* WARNING: Removing unreachable block (ram,0x003a2684) */
/* WARNING: Removing unreachable block (ram,0x003a268c) */

dword * FUN_003a26f0(ulong *param_1,undefined8 *param_2,ulong param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  dword *pdVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((param_1 == (ulong *)0x0) || (uVar8 = *param_1, uVar8 == 0)) {
    lVar10 = 0;
  }
  else {
    uVar11 = 0;
    lVar10 = 0;
    do {
      if (param_3 == 0) {
        uVar6 = 1;
      }
      else {
        uVar9 = *(undefined8 *)(param_1[1] + uVar11 * 0x20 + 8);
        uVar3 = uVar9;
        _strcmp(uVar9,*param_2);
        if ((int)uVar3 == 0) {
          uVar5 = 1;
        }
        else {
          uVar6 = 1;
          do {
            uVar7 = uVar6;
            if (param_3 == uVar7) break;
            uVar3 = uVar9;
            _strcmp(uVar9,param_2[uVar7]);
            uVar6 = uVar7 + 1;
          } while ((int)uVar3 != 0);
          uVar5 = (uint)(uVar7 < param_3);
        }
        uVar6 = (ulong)(uVar5 ^ 1);
      }
      lVar10 = lVar10 + uVar6;
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar8);
  }
  pdVar4 = &MACH_HEADER.ncmds;
  FUN_00338c74();
  *(long *)pdVar4 = lVar10;
  if (lVar10 != 0) {
    lVar10 = lVar10 << 5;
    FUN_00338c74();
    *(long *)(pdVar4 + 2) = lVar10;
    if ((param_1 == (ulong *)0x0) || (uVar8 = *param_1, uVar8 == 0)) {
      lVar10 = 0;
    }
    else {
      uVar11 = 0;
      lVar10 = 0;
      do {
        lVar1 = param_1[1] + uVar11 * 0x20;
        if (param_3 == 0) {
LAB_003a2638:
          FUN_003a26fc(&uStack_80,lVar1);
          puVar2 = (undefined8 *)(*(long *)(pdVar4 + 2) + lVar10 * 0x20);
          lVar10 = lVar10 + 1;
          puVar2[1] = uStack_78;
          *puVar2 = uStack_80;
          puVar2[3] = uStack_68;
          puVar2[2] = uStack_70;
          uVar8 = *param_1;
        }
        else {
          uVar9 = *(undefined8 *)(lVar1 + 8);
          uVar3 = uVar9;
          _strcmp(uVar9,*param_2);
          if ((int)uVar3 != 0) {
            uVar6 = 1;
            do {
              uVar7 = uVar6;
              if (param_3 == uVar7) break;
              uVar3 = uVar9;
              _strcmp(uVar9,param_2[uVar7]);
              uVar6 = uVar7 + 1;
            } while ((int)uVar3 != 0);
            if (param_3 <= uVar7) goto LAB_003a2638;
          }
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar8);
    }
    if (lVar10 == *(long *)pdVar4) {
      return pdVar4;
    }
    func_0x00773484();
  }
  *(undefined8 *)(pdVar4 + 2) = 0;
  return pdVar4;
}



/* Entry: 003a26fc; end: 003a277b;  */

void FUN_003a26fc(int *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *param_2;
  *param_1 = iVar1;
  uVar2 = *(undefined8 *)(param_2 + 2);
  FUN_00339490();
  *(undefined8 *)(param_1 + 2) = uVar2;
  if (iVar1 == 2) {
    uVar2 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 4);
    (*(code *)**(undefined8 **)(param_2 + 6))();
  }
  else {
    if (iVar1 == 1) {
      param_1[4] = param_2[4];
      return;
    }
    if (iVar1 != 0) {
      return;
    }
    uVar2 = *(undefined8 *)(param_2 + 4);
    FUN_00339490();
  }
  *(undefined8 *)(param_1 + 4) = uVar2;
  return;
}



/* Entry: 003a277c; end: 003a278f;  */

/* WARNING: Removing unreachable block (ram,0x003a25e8) */
/* WARNING: Removing unreachable block (ram,0x003a2660) */
/* WARNING: Removing unreachable block (ram,0x003a2604) */
/* WARNING: Removing unreachable block (ram,0x003a2608) */
/* WARNING: Removing unreachable block (ram,0x003a2614) */
/* WARNING: Removing unreachable block (ram,0x003a2628) */
/* WARNING: Removing unreachable block (ram,0x003a252c) */
/* WARNING: Removing unreachable block (ram,0x003a2584) */
/* WARNING: Removing unreachable block (ram,0x003a2548) */
/* WARNING: Removing unreachable block (ram,0x003a254c) */
/* WARNING: Removing unreachable block (ram,0x003a2558) */
/* WARNING: Removing unreachable block (ram,0x003a256c) */
/* WARNING: Removing unreachable block (ram,0x003a2588) */
/* WARNING: Removing unreachable block (ram,0x003a2684) */
/* WARNING: Removing unreachable block (ram,0x003a268c) */

dword * FUN_003a277c(ulong *param_1)

{
  undefined8 *puVar1;
  dword *pdVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((param_1 == (ulong *)0x0) || (*param_1 == 0)) {
    lVar3 = 0;
  }
  else {
    uVar4 = 0;
    lVar3 = 0;
    do {
      lVar3 = lVar3 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != *param_1);
  }
  pdVar2 = &MACH_HEADER.ncmds;
  FUN_00338c74();
  *(long *)pdVar2 = lVar3;
  if (lVar3 != 0) {
    lVar3 = lVar3 << 5;
    FUN_00338c74();
    *(long *)(pdVar2 + 2) = lVar3;
    if ((param_1 == (ulong *)0x0) || (*param_1 == 0)) {
      lVar3 = 0;
    }
    else {
      uVar4 = 0;
      lVar3 = 0;
      do {
        FUN_003a26fc(&uStack_80,param_1[1] + uVar4 * 0x20);
        puVar1 = (undefined8 *)(*(long *)(pdVar2 + 2) + lVar3 * 0x20);
        lVar3 = lVar3 + 1;
        puVar1[1] = uStack_78;
        *puVar1 = uStack_80;
        puVar1[3] = uStack_68;
        puVar1[2] = uStack_70;
        uVar4 = uVar4 + 1;
      } while (uVar4 < *param_1);
    }
    if (lVar3 == *(long *)pdVar2) {
      return pdVar2;
    }
    func_0x00773484();
  }
  *(undefined8 *)(pdVar2 + 2) = 0;
  return pdVar2;
}



/* Entry: 003a2790; end: 003a28cf;  */

/* WARNING: Removing unreachable block (ram,0x003a25e8) */
/* WARNING: Removing unreachable block (ram,0x003a2660) */
/* WARNING: Removing unreachable block (ram,0x003a2604) */
/* WARNING: Removing unreachable block (ram,0x003a2608) */
/* WARNING: Removing unreachable block (ram,0x003a2614) */
/* WARNING: Removing unreachable block (ram,0x003a2628) */
/* WARNING: Removing unreachable block (ram,0x003a252c) */
/* WARNING: Removing unreachable block (ram,0x003a2584) */
/* WARNING: Removing unreachable block (ram,0x003a2548) */
/* WARNING: Removing unreachable block (ram,0x003a254c) */
/* WARNING: Removing unreachable block (ram,0x003a2558) */
/* WARNING: Removing unreachable block (ram,0x003a256c) */
/* WARNING: Removing unreachable block (ram,0x003a2588) */
/* WARNING: Removing unreachable block (ram,0x003a2684) */
/* WARNING: Removing unreachable block (ram,0x003a268c) */

dword * FUN_003a2790(ulong *param_1,ulong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong *puVar4;
  dword *pdVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar4 = param_2;
  if ((param_1 != (ulong *)0x0) && (puVar4 = param_1, param_2 != (ulong *)0x0)) {
    lVar3 = (*param_2 + *param_1) * 0x20;
    FUN_00338c74();
    if (*param_1 == 0) {
      uVar8 = 0;
    }
    else {
      lVar6 = 0;
      uVar7 = 0;
      do {
        puVar1 = (undefined8 *)(param_1[1] + lVar6);
        puVar2 = (undefined8 *)(lVar3 + lVar6);
        uVar10 = *puVar1;
        uVar12 = puVar1[3];
        uVar11 = puVar1[2];
        puVar2[1] = puVar1[1];
        *puVar2 = uVar10;
        puVar2[3] = uVar12;
        puVar2[2] = uVar11;
        uVar7 = uVar7 + 1;
        uVar8 = *param_1;
        lVar6 = lVar6 + 0x20;
      } while (uVar7 < uVar8);
    }
    uVar7 = *param_2;
    if (uVar7 != 0) {
      lVar6 = 0;
      uVar9 = 0;
      do {
        puVar1 = (undefined8 *)(param_2[1] + lVar6);
        puVar4 = param_1;
        FUN_003a28d0(param_1,puVar1[1]);
        if (puVar4 == (ulong *)0x0) {
          puVar2 = (undefined8 *)(lVar3 + uVar8 * 0x20);
          uVar8 = uVar8 + 1;
          uVar10 = *puVar1;
          uVar12 = puVar1[3];
          uVar11 = puVar1[2];
          puVar2[1] = puVar1[1];
          *puVar2 = uVar10;
          puVar2[3] = uVar12;
          puVar2[2] = uVar11;
          uVar7 = *param_2;
        }
        uVar9 = uVar9 + 1;
        lVar6 = lVar6 + 0x20;
      } while (uVar9 < uVar7);
    }
    pdVar5 = (dword *)0x0;
    FUN_003a24dc(0,0,0,lVar3,uVar8);
    FUN_00338cb8(lVar3);
    return pdVar5;
  }
  if ((puVar4 == (ulong *)0x0) || (*puVar4 == 0)) {
    lVar3 = 0;
  }
  else {
    uVar8 = 0;
    lVar3 = 0;
    do {
      lVar3 = lVar3 + 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 != *puVar4);
  }
  pdVar5 = &MACH_HEADER.ncmds;
  FUN_00338c74();
  *(long *)pdVar5 = lVar3;
  if (lVar3 != 0) {
    lVar3 = lVar3 << 5;
    FUN_00338c74();
    *(long *)(pdVar5 + 2) = lVar3;
    if ((puVar4 == (ulong *)0x0) || (*puVar4 == 0)) {
      lVar3 = 0;
    }
    else {
      uVar8 = 0;
      lVar3 = 0;
      do {
        FUN_003a26fc(&uStack_80,puVar4[1] + uVar8 * 0x20);
        puVar1 = (undefined8 *)(*(long *)(pdVar5 + 2) + lVar3 * 0x20);
        lVar3 = lVar3 + 1;
        puVar1[1] = uStack_78;
        *puVar1 = uStack_80;
        puVar1[3] = uStack_68;
        puVar1[2] = uStack_70;
        uVar8 = uVar8 + 1;
      } while (uVar8 < *puVar4);
    }
    if (lVar3 == *(long *)pdVar5) {
      return pdVar5;
    }
    func_0x00773484();
  }
  *(undefined8 *)(pdVar5 + 2) = 0;
  return pdVar5;
}



/* Entry: 003a28d0; end: 003a2927;  */

long FUN_003a28d0(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if ((param_1 != (long *)0x0) && (lVar3 = *param_1, lVar3 != 0)) {
    lVar2 = param_1[1];
    do {
      uVar1 = *(undefined8 *)(lVar2 + 8);
      _strcmp(uVar1,param_2);
      if ((int)uVar1 == 0) {
        return lVar2;
      }
      lVar2 = lVar2 + 0x20;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return 0;
}



/* Entry: 003a2928; end: 003a2a1f;  */

dword * FUN_003a2928(ulong *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  dword *pdVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar2 = *param_1 << 3;
  FUN_00338c74();
  uVar4 = *param_1;
  if (uVar4 != 0) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      *(ulong *)(lVar2 + uVar6 * 8) = param_1[1] + lVar5;
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x20;
    } while (uVar4 != uVar6);
    if (1 < uVar4) {
      _qsort(lVar2,uVar4,8,FUN_003a2a20);
    }
  }
  pdVar3 = &MACH_HEADER.ncmds;
  FUN_00338c74();
  uVar4 = *param_1;
  *(ulong *)pdVar3 = uVar4;
  lVar5 = uVar4 << 5;
  FUN_00338c74();
  *(long *)(pdVar3 + 2) = lVar5;
  if (*param_1 != 0) {
    lVar5 = 0;
    uVar4 = 0;
    do {
      FUN_003a26fc(&uStack_60,*(undefined8 *)(lVar2 + uVar4 * 8));
      puVar1 = (undefined8 *)(*(long *)(pdVar3 + 2) + lVar5);
      puVar1[1] = uStack_58;
      *puVar1 = uStack_60;
      puVar1[3] = uStack_48;
      puVar1[2] = uStack_50;
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x20;
    } while (uVar4 < *param_1);
  }
  FUN_00338cb8(lVar2);
  return pdVar3;
}



/* Entry: 003a2a20; end: 003a2a63;  */

uint FUN_003a2a20(ulong *param_1,ulong *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = *param_1;
  uVar1 = *(undefined8 *)(uVar3 + 8);
  uVar4 = *param_2;
  _strcmp(uVar1,*(undefined8 *)(uVar4 + 8));
  uVar2 = (uint)(uVar4 < uVar3);
  if (uVar3 < uVar4) {
    uVar2 = 0xffffffff;
  }
  if ((uint)uVar1 != 0) {
    uVar2 = (uint)uVar1;
  }
  return uVar2;
}



/* Entry: 003a2a64; end: 003a2b03;  */

void FUN_003a2a64(ulong *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_1 != (ulong *)0x0) {
    if (*param_1 != 0) {
      lVar2 = 0;
      uVar3 = 0;
      do {
        uVar1 = param_1[1];
        if (*(int *)(uVar1 + lVar2) == 2) {
          (**(code **)(*(long *)(uVar1 + lVar2 + 0x18) + 8))(*(undefined8 *)(uVar1 + lVar2 + 0x10));
        }
        else if (*(int *)(uVar1 + lVar2) == 0) {
          FUN_00338cb8(*(undefined8 *)(uVar1 + lVar2 + 0x10));
        }
        FUN_00338cb8(*(undefined8 *)(param_1[1] + lVar2 + 8));
        uVar3 = uVar3 + 1;
        lVar2 = lVar2 + 0x20;
      } while (uVar3 < *param_1);
    }
    FUN_00338cb8(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_0099a260)(param_1);
    return;
  }
  return;
}



/* Entry: 003a2b04; end: 003a2c93;  */

char * FUN_003a2b04(ulong *param_1,ulong *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  if (param_1 != (ulong *)0x0 || param_2 != (ulong *)0x0) {
    if ((param_1 == (ulong *)0x0) || (param_2 == (ulong *)0x0)) {
      uVar6 = 1;
      if (param_1 == (ulong *)0x0) {
        uVar6 = 0xffffffff;
      }
      return (char *)(ulong)uVar6;
    }
    uVar9 = *param_1;
    uVar6 = (uint)(*param_2 < uVar9);
    if (uVar9 < *param_2) {
      uVar6 = 0xffffffff;
    }
    if (uVar6 != 0) {
      return (char *)(ulong)uVar6;
    }
    if (uVar9 != 0) {
      lVar7 = 0;
      uVar8 = 0;
      do {
        uVar11 = param_1[1];
        uVar10 = param_2[1];
        iVar4 = *(int *)(uVar11 + lVar7);
        uVar6 = (uint)(*(int *)(uVar10 + lVar7) < iVar4);
        if (iVar4 < *(int *)(uVar10 + lVar7)) {
          uVar6 = 0xffffffff;
        }
        pcVar2 = (char *)(ulong)uVar6;
        if (uVar6 == 0) {
          pcVar2 = *(char **)(uVar11 + lVar7 + 8);
          _strcmp(pcVar2,*(undefined8 *)(uVar10 + lVar7 + 8));
          if ((int)pcVar2 != 0) {
            return pcVar2;
          }
          if (iVar4 != 2) {
            if (iVar4 == 1) {
              iVar4 = *(int *)(uVar11 + lVar7 + 0x10);
              iVar1 = *(int *)(uVar10 + lVar7 + 0x10);
              pcVar2 = (char *)(ulong)(iVar1 < iVar4);
              if (iVar4 < iVar1) {
                return (char *)0xffffffff;
              }
            }
            else {
              if (iVar4 != 0) {
                pcVar2 = "return 0";
                pcVar5 = 
                "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/channel_args.cc"
                ;
                iVar4 = 0x145;
                func_0x00338df0();
                if ((int *)pcVar2 != (int *)0x0) {
                  if (*(int *)pcVar2 == 1) {
                    uVar6 = *(uint *)((long)pcVar2 + 0x10);
                    if ((int)uVar6 < (int)((ulong)pcVar5 >> 0x20)) {
                      pcVar2 = "%s ignored: it must be >= %d";
                      uVar3 = 0x19d;
                    }
                    else {
                      if ((int)uVar6 <= iVar4) {
                        return (char *)(ulong)uVar6;
                      }
                      pcVar2 = "%s ignored: it must be <= %d";
                      uVar3 = 0x1a2;
                    }
                  }
                  else {
                    pcVar2 = "%s ignored: it must be an integer";
                    uVar3 = 0x199;
                  }
                  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/channel_args.cc"
                               ,uVar3,2,pcVar2);
                }
                return pcVar5;
              }
              pcVar2 = *(char **)(uVar11 + lVar7 + 0x10);
              _strcmp(pcVar2,*(undefined8 *)(uVar10 + lVar7 + 0x10));
            }
            goto LAB_003a2b88;
          }
          pcVar5 = *(char **)(uVar11 + lVar7 + 0x10);
          if (*(char **)(uVar10 + lVar7 + 0x10) != pcVar5) {
            uVar9 = *(ulong *)(uVar11 + lVar7 + 0x18);
            uVar10 = *(ulong *)(uVar10 + lVar7 + 0x18);
            uVar6 = (uint)(uVar10 < uVar9);
            if (uVar9 < uVar10) {
              uVar6 = 0xffffffff;
            }
            pcVar2 = (char *)(ulong)uVar6;
            if (uVar6 == 0) {
              (**(code **)(uVar9 + 0x10))();
              pcVar2 = pcVar5;
            }
            goto LAB_003a2b88;
          }
        }
        else {
LAB_003a2b88:
          if ((int)pcVar2 != 0) {
            return pcVar2;
          }
          uVar9 = *param_1;
        }
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0x20;
        if (uVar9 <= uVar8) {
          return (char *)0x0;
        }
      } while( true );
    }
  }
  return (char *)0x0;
}



/* Entry: 003a2c94; end: 003a2d77;  */

ulong FUN_003a2c94(int *param_1,ulong param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  if (param_1 != (int *)0x0) {
    if (*param_1 == 1) {
      uVar1 = param_1[4];
      if ((int)uVar1 < (int)(param_2 >> 0x20)) {
        pcVar3 = "%s ignored: it must be >= %d";
        uVar2 = 0x19d;
      }
      else {
        if ((int)uVar1 <= param_3) {
          return (ulong)uVar1;
        }
        pcVar3 = "%s ignored: it must be <= %d";
        uVar2 = 0x1a2;
      }
    }
    else {
      pcVar3 = "%s ignored: it must be an integer";
      uVar2 = 0x199;
    }
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/channel_args.cc"
                 ,uVar2,2,pcVar3);
  }
  return param_2;
}



/* Entry: 003a2d78; end: 003a2ddf;  */

undefined8 FUN_003a2d78(int *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    if (*param_1 == 0) {
      uVar1 = *(undefined8 *)(param_1 + 4);
    }
    else {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/channel_args.cc"
                   ,0x1b3,2,"%s ignored: it must be an string");
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* Entry: 003a2de0; end: 003a2ea3;  */

undefined8 FUN_003a2de0(int *param_1,undefined8 param_2)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 == 1) {
      if (param_1[4] == 0) {
        param_2 = 0;
      }
      else {
        if (param_1[4] != 1) {
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/channel_args.cc"
                       ,0x1cb,2,"%s treated as bool but set to %d (assuming true)");
        }
        param_2 = 1;
      }
    }
    else {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/channel_args.cc"
                   ,0x1c2,2,"%s ignored: it must be an integer");
    }
  }
  return param_2;
}



/* Entry: 003a2ea4; end: 003a2ec3;  */

undefined8 FUN_003a2ea4(int *param_1)

{
  undefined8 uVar1;
  
  FUN_003a28d0(param_1,"grpc.minimal_stack");
  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    if (*param_1 == 1) {
      if (param_1[4] == 0) {
        uVar1 = 0;
      }
      else {
        if (param_1[4] != 1) {
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/channel_args.cc"
                       ,0x1cb,2,"%s treated as bool but set to %d (assuming true)");
        }
        uVar1 = 1;
      }
    }
    else {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/channel_args.cc"
                   ,0x1c2,2,"%s ignored: it must be an integer");
    }
  }
  return uVar1;
}



/* Entry: 003a2ec4; end: 003a2ef7;  */

void FUN_003a2ec4(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = param_2;
  *(undefined8 *)(param_1 + 4) = param_3;
  return;
}



/* Entry: 003a2ef8; end: 003a2f7b;  */

void FUN_003a2ef8(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  FUN_003a1d70(auStack_30);
  FUN_003a23ac(param_1,auStack_30);
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
  return;
}



/* Entry: 003a2f7c; end: 003a3453;  */

void FUN_003a2f7c(undefined8 *param_1,ulong *param_2)

{
  undefined8 **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  long ***ppplVar5;
  code *pcVar6;
  bool bVar7;
  long ****pppplVar8;
  long ****pppplVar9;
  undefined8 **ppuVar10;
  undefined8 **ppuVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long ***ppplVar15;
  ulong uVar16;
  undefined8 **ppuVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  undefined8 **ppuVar21;
  long ****pppplVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 auStack_e8 [2];
  char cStack_d1;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long ***ppplStack_a8;
  long ***ppplStack_a0;
  ulong uStack_98;
  long ***ppplStack_90;
  long ***ppplStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_61;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != (ulong *)0x0) {
    uStack_78 = 0;
    uStack_70 = 0;
    puStack_80 = &uStack_78;
    if (*param_2 != 0) {
      uVar18 = 0;
      do {
        uVar19 = param_2[1];
        pppplVar22 = *(long *****)(uVar19 + uVar18 * 0x20 + 8);
        pppplVar8 = pppplVar22;
        ppplStack_90 = (long ***)pppplVar22;
        _strlen();
        ppplStack_88 = (long ***)pppplVar8;
        if (pppplVar8 == (long ****)((long)&MACH_HEADER.flags + 1)) {
          pppplVar9 = pppplVar22;
          _memcmp(pppplVar22,"grpc.secondary_user_agent",0x19);
          if ((int)pppplVar9 != 0) goto LAB_003a3128;
LAB_003a307c:
          if (*(int *)(uVar19 + uVar18 * 0x20) == 0) {
            ppplStack_a8 = (long ***)&ppplStack_90;
            ppuVar10 = &puStack_80;
            FUN_003a5db4(ppuVar10,&ppplStack_90,&UNK_008000a0,&ppplStack_a8,&uStack_61);
            puVar23 = *(undefined8 **)(param_2[1] + uVar18 * 0x20 + 0x10);
            puVar13 = puVar23;
            _strlen();
            puVar14 = ppuVar10[7];
            ppuVar11 = ppuVar10 + 8;
            if (puVar14 < *ppuVar11) {
              *puVar14 = puVar23;
              puVar14[1] = puVar13;
              ppuVar21 = (undefined8 **)(puVar14 + 2);
            }
            else {
              ppuVar1 = ppuVar10 + 6;
              lVar20 = (long)puVar14 - (long)*ppuVar1 >> 4;
              uVar19 = lVar20 + 1;
              if (uVar19 >> 0x3c != 0) {
                FUN_0035b540(ppuVar1);
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x3a33f4);
                (*pcVar6)();
              }
              uVar12 = (long)*ppuVar11 - (long)*ppuVar1;
              uVar16 = (long)uVar12 >> 3;
              if (uVar16 <= uVar19) {
                uVar16 = uVar19;
              }
              if (0x7fffffffffffffef < uVar12) {
                uVar16 = 0xfffffffffffffff;
              }
              if (uVar16 == 0) {
                ppuVar11 = (undefined8 **)0x0;
              }
              else {
                FUN_0035b554();
              }
              ppuVar21 = ppuVar11 + lVar20 * 2;
              *ppuVar21 = puVar23;
              ppuVar21[1] = puVar13;
              puVar13 = ppuVar10[6];
              puVar14 = ppuVar10[7];
              ppuVar17 = ppuVar21;
              if (puVar14 != puVar13) {
                do {
                  puVar23 = puVar14 + -1;
                  puVar24 = (undefined8 *)puVar14[-2];
                  puVar14 = puVar14 + -2;
                  ppuVar17[-1] = (undefined8 *)*puVar23;
                  ppuVar17[-2] = puVar24;
                  ppuVar17 = ppuVar17 + -2;
                } while (puVar14 != puVar13);
                puVar14 = *ppuVar1;
              }
              ppuVar21 = ppuVar21 + 2;
              ppuVar10[6] = ppuVar17;
              ppuVar10[7] = ppuVar21;
              ppuVar10[8] = ppuVar11 + uVar16 * 2;
              if (puVar14 != (undefined8 *)0x0) {
                __ZdlPv(puVar14);
              }
            }
            ppuVar10[7] = ppuVar21;
          }
          else {
            uVar19 = ((ulong)pppplVar8 & 0xfffffffffffffff8) + 8;
            if (((ulong)pppplVar8 | 7) != 0x17) {
              uVar19 = (ulong)pppplVar8 | 7;
            }
            pppplVar22 = (long ****)(uVar19 + 1);
            __Znwm();
            uStack_98 = uVar19 + 1 | 0x8000000000000000;
            ppplStack_a8 = (long ***)pppplVar22;
            ppplStack_a0 = (long ***)pppplVar8;
            _memmove();
            *(undefined1 *)((long)pppplVar22 + (long)pppplVar8) = 0;
            FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/channel_args.cc"
                         ,0x207,2,"Channel argument \'%s\' should be a string");
            if ((long)uStack_98 < 0) {
              __ZdlPv(ppplStack_a8);
            }
          }
        }
        else {
          if (pppplVar8 == (long ****)((long)&MACH_HEADER.sizeofcmds + 3)) {
            if ((*pppplVar22 == (long ***)0x6972702e63707267 &&
                pppplVar22[1] == (long ***)0x6573755f7972616d) &&
                *(long *)((long)pppplVar22 + 0xf) == 0x746e6567615f7265) goto LAB_003a307c;
LAB_003a3128:
            if (*pppplVar22 == (long ***)0x746e692e63707267 &&
                *(long *)((long)pppplVar22 + 6) == 0x2e6c616e7265746e) goto LAB_003a32dc;
          }
          else if ((long ****)((long)&MACH_HEADER.filetype + 1) < pppplVar8) goto LAB_003a3128;
          puVar13 = param_1;
          ppplStack_a8 = (long ***)pppplVar22;
          ppplStack_a0 = (long ***)pppplVar8;
          FUN_003a35e0(param_1,&ppplStack_a8);
          if (puVar13 == (undefined8 *)0x0) {
            puVar13 = (undefined8 *)(param_2[1] + uVar18 * 0x20);
            uStack_c8 = puVar13[1];
            uStack_d0 = *puVar13;
            uStack_b8 = puVar13[3];
            uStack_c0 = puVar13[2];
            FUN_003a1a50(&ppplStack_a8,param_1,&uStack_d0);
            FUN_003a347c(param_1,&ppplStack_a8);
            ppplVar5 = ppplStack_a0;
            if ((long ****)ppplStack_a0 != (long ****)0x0) {
              pppplVar8 = (long ****)(ppplStack_a0 + 1);
              do {
                ppplVar15 = *pppplVar8;
                cVar4 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(pppplVar8,0x10);
                if (bVar7) {
                  *pppplVar8 = (long ***)((long)ppplVar15 + -1);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (ppplVar15 == (long ***)0x0) {
                (*(code *)(*ppplStack_a0)[2])(ppplStack_a0);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppplVar5);
              }
            }
          }
        }
LAB_003a32dc:
        uVar18 = uVar18 + 1;
        puVar13 = puStack_80;
      } while (uVar18 < *param_2);
      while (puVar13 != &uStack_78) {
        uVar2 = puVar13[4];
        uVar3 = puVar13[5];
        FUN_003605f8(auStack_e8,puVar13[6],puVar13[7]," ",1);
        FUN_003a1f88(&ppplStack_a8,param_1,uVar2,uVar3,auStack_e8);
        FUN_003a347c(param_1,&ppplStack_a8);
        ppplVar5 = ppplStack_a0;
        if ((long ****)ppplStack_a0 != (long ****)0x0) {
          pppplVar8 = (long ****)(ppplStack_a0 + 1);
          do {
            ppplVar15 = *pppplVar8;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pppplVar8,0x10);
            if (bVar7) {
              *pppplVar8 = (long ***)((long)ppplVar15 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (ppplVar15 == (long ***)0x0) {
            (*(code *)(*ppplStack_a0)[2])(ppplStack_a0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppplVar5);
          }
        }
        if (cStack_d1 < '\0') {
          __ZdlPv(auStack_e8[0]);
        }
        puVar14 = (undefined8 *)puVar13[1];
        puVar23 = puVar13;
        if ((undefined8 *)puVar13[1] == (undefined8 *)0x0) {
          do {
            puVar13 = (undefined8 *)puVar23[2];
            bVar7 = (undefined8 *)*puVar13 != puVar23;
            puVar23 = puVar13;
          } while (bVar7);
        }
        else {
          do {
            puVar13 = puVar14;
            puVar14 = (undefined8 *)*puVar13;
          } while ((undefined8 *)*puVar13 != (undefined8 *)0x0);
        }
      }
    }
    FUN_003a5d64(&puStack_80,uStack_78);
  }
  return;
}



/* Entry: 003a3454; end: 003a347b;  */

undefined8 FUN_003a3454(void)

{
  return uRam0000000000b5e788;
}



/* Entry: 003a347c; end: 003a34df;  */

undefined8 * FUN_003a347c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 003a34e0; end: 003a3513;  */

undefined1 * FUN_003a34e0(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  FUN_003a3514();
  return param_1;
}



/* Entry: 003a3514; end: 003a359f;  */

void FUN_003a3514(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    (*(code *)(&PTR_FUN_009df390)[*(uint *)(param_1 + 0x18)])(&uStack_31,param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  uVar1 = *(uint *)(param_2 + 0x18);
  if (uVar1 != 0xffffffff) {
    (*(code *)(&PTR_FUN_009df3c0)[uVar1])(&uStack_32,param_1,param_2);
    *(uint *)(param_1 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 003a35a0; end: 003a35df;  */

void FUN_003a35a0(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = *param_3;
  return;
}



/* Entry: 003a35e0; end: 003a364b;  */

long FUN_003a35e0(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_30;
  long *plStack_28;
  
  FUN_003a364c(&lStack_30);
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
  lVar4 = 0;
  if (lStack_30 != 0) {
    lVar4 = lStack_30 + 0x28;
  }
  return lVar4;
}



/* Entry: 003a364c; end: 003a373f;  */

void FUN_003a364c(long *param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  
  lVar10 = *param_2;
  if (lVar10 != 0) {
    uVar3 = *param_3;
    uVar4 = param_3[1];
    do {
      lVar9 = lVar10 + 0x10;
      bVar5 = *(byte *)(lVar10 + 0x27);
      uVar11 = (ulong)bVar5;
      lVar8 = lVar9;
      uVar12 = uVar11;
      if ((char)bVar5 < '\0') {
        lVar8 = *(long *)(lVar10 + 0x10);
        uVar12 = *(ulong *)(lVar10 + 0x18);
      }
      uVar2 = uVar4;
      if (uVar12 <= uVar4) {
        uVar2 = uVar12;
      }
      _memcmp(lVar8,uVar3,uVar2);
      if ((int)lVar8 == 0) {
        if (uVar12 <= uVar4) goto LAB_003a36c4;
LAB_003a36b4:
        param_2 = (long *)(lVar10 + 0x48);
      }
      else {
        if (0 < (int)lVar8) goto LAB_003a36b4;
LAB_003a36c4:
        if ((char)bVar5 < '\0') {
          lVar9 = *(long *)(lVar10 + 0x10);
          uVar11 = *(ulong *)(lVar10 + 0x18);
        }
        uVar12 = uVar4;
        if (uVar11 <= uVar4) {
          uVar12 = uVar11;
        }
        _memcmp(lVar9,uVar3,uVar12);
        if ((int)lVar9 == 0) {
          if (uVar4 <= uVar11) goto LAB_003a371c;
        }
        else if (-1 < (int)lVar9) {
LAB_003a371c:
          lVar9 = param_2[1];
          *param_1 = lVar10;
          param_1[1] = lVar9;
          if (lVar9 == 0) {
            return;
          }
          plVar1 = (long *)(lVar9 + 8);
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar7) {
              *plVar1 = *plVar1 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          return;
        }
        param_2 = (long *)(lVar10 + 0x58);
      }
      lVar10 = *param_2;
    } while (lVar10 != 0);
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 003a3740; end: 003a389f;  */

void FUN_003a3740(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  ulong *puVar2;
  ulong *puVar3;
  char *pcVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined4 *extraout_x8;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  if (param_1 != 0) {
    puVar5 = param_2;
    FUN_003a3740(*(undefined8 *)(param_1 + 0x48));
    lStack_50 = *(long *)(param_1 + 0x10);
    if (-1 < *(char *)(param_1 + 0x27)) {
      lStack_50 = param_1 + 0x10;
    }
    plVar13 = (long *)*param_2;
    lStack_48 = lStack_50;
    lStack_40 = lStack_50;
    if (*(uint *)(param_1 + 0x40) == 0xffffffff) {
      FUN_0033e178();
LAB_003a3898:
      FUN_003a38a0(plVar13);
      pcVar4 = "vector";
      FUN_0033b32c();
      if ((ulong)puVar5 >> 0x3b == 0) {
        __Znwm((long)puVar5 << 5);
        return;
      }
      FUN_00349558();
      uVar1 = *(undefined4 *)puVar5;
      uVar10 = **(undefined8 **)pcVar4;
      *extraout_x8 = 1;
      *(undefined8 *)(extraout_x8 + 2) = uVar10;
      extraout_x8[4] = uVar1;
      return;
    }
    puVar5 = (undefined8 *)(param_1 + 0x28);
    plStack_38 = &lStack_50;
    (*(code *)(&PTR_FUN_009df3d8)[*(uint *)(param_1 + 0x40)])(&uStack_70,&plStack_38);
    puVar3 = (ulong *)(plVar13 + 2);
    puVar7 = (ulong *)plVar13[1];
    if (puVar7 < (ulong *)*puVar3) {
      puVar7[1] = uStack_68;
      *puVar7 = uStack_70;
      puVar7[3] = uStack_58;
      puVar7[2] = uStack_60;
      puVar7 = puVar7 + 4;
    }
    else {
      lVar14 = (long)puVar7 - *plVar13 >> 5;
      uVar15 = lVar14 + 1;
      if (uVar15 >> 0x3b != 0) goto LAB_003a3898;
      uVar6 = (long)*puVar3 - *plVar13;
      uVar11 = (long)uVar6 >> 4;
      if (uVar11 <= uVar15) {
        uVar11 = uVar15;
      }
      if (0x7fffffffffffffdf < uVar6) {
        uVar11 = 0x7ffffffffffffff;
      }
      if (uVar11 == 0) {
        puVar3 = (ulong *)0x0;
      }
      else {
        FUN_003a38b4();
      }
      puVar9 = puVar3 + lVar14 * 4;
      puVar9[1] = uStack_68;
      *puVar9 = uStack_70;
      puVar9[3] = uStack_58;
      puVar9[2] = uStack_60;
      puVar7 = puVar9 + 4;
      lVar14 = *plVar13;
      lVar12 = plVar13[1];
      puVar8 = puVar9;
      if (lVar12 != lVar14) {
        do {
          puVar2 = (ulong *)(lVar12 + -0x18);
          uVar15 = *(ulong *)(lVar12 + -0x20);
          uVar16 = *(ulong *)(lVar12 + -8);
          uVar6 = *(ulong *)(lVar12 + -0x10);
          lVar12 = lVar12 + -0x20;
          puVar9 = puVar8 + -4;
          puVar8[-3] = *puVar2;
          *puVar9 = uVar15;
          puVar8[-1] = uVar16;
          puVar8[-2] = uVar6;
          puVar8 = puVar9;
        } while (lVar12 != lVar14);
        lVar12 = *plVar13;
      }
      *plVar13 = (long)puVar9;
      plVar13[1] = (long)puVar7;
      plVar13[2] = (long)(puVar3 + uVar11 * 4);
      if (lVar12 != 0) {
        __ZdlPv();
      }
    }
    plVar13[1] = (long)puVar7;
    FUN_003a3740(*(undefined8 *)(param_1 + 0x58),param_2);
  }
  return;
}



/* Entry: 003a38a0; end: 003a38b3;  */

void FUN_003a38a0(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 *extraout_x8;
  undefined8 uVar3;
  
  pcVar2 = "vector";
  FUN_0033b32c();
  if ((ulong)param_2 >> 0x3b == 0) {
    __Znwm((long)param_2 << 5);
    return;
  }
  FUN_00349558();
  uVar1 = *param_2;
  uVar3 = **(undefined8 **)pcVar2;
  *extraout_x8 = 1;
  *(undefined8 *)(extraout_x8 + 2) = uVar3;
  extraout_x8[4] = uVar1;
  return;
}



/* Entry: 003a38b4; end: 003a38e7;  */

void FUN_003a38b4(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *extraout_x8;
  undefined8 uVar2;
  
  if ((ulong)param_2 >> 0x3b == 0) {
    __Znwm((long)param_2 << 5);
    return;
  }
  FUN_00349558();
  uVar1 = *param_2;
  uVar2 = *(undefined8 *)*param_1;
  *extraout_x8 = 1;
  *(undefined8 *)(extraout_x8 + 2) = uVar2;
  extraout_x8[4] = uVar1;
  return;
}



/* Entry: 003a38e8; end: 003a394b;  */

void FUN_003a38e8(undefined4 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_3;
  uVar2 = *(undefined8 *)*param_2;
  *param_1 = 1;
  *(undefined8 *)(param_1 + 2) = uVar2;
  param_1[4] = uVar1;
  return;
}



/* Entry: 003a394c; end: 003a3e5f;  */

/* WARNING: Removing unreachable block (ram,0x003a3c60) */
/* WARNING: Removing unreachable block (ram,0x003a3ad4) */

void FUN_003a394c(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined1 auStack_200 [32];
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined1 auStack_1c0 [32];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined1 auStack_180 [32];
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined1 auStack_140 [32];
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined1 auStack_100 [32];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  undefined1 auStack_a0 [32];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar13 = *param_2;
  if (lVar13 == 0) {
    uStack_78 = param_3[1];
    uStack_80 = *param_3;
    uStack_70 = param_3[2];
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
    FUN_003a34e0(auStack_a0,param_4);
    uStack_b0 = 0;
    plStack_a8 = (long *)0x0;
    uStack_c0 = 0;
    plStack_b8 = (long *)0x0;
    FUN_003a3e60(param_1,&uStack_80,auStack_a0,&uStack_b0,&uStack_c0);
    plVar2 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar1 = plStack_b8 + 1;
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
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    plVar2 = plStack_a8;
    if (plStack_a8 != (long *)0x0) {
      plVar1 = plStack_a8 + 1;
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
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    FUN_00382478(auStack_a0);
  }
  else {
    puVar15 = (undefined8 *)(lVar13 + 0x10);
    puVar12 = (undefined8 *)*puVar15;
    bVar4 = *(byte *)(lVar13 + 0x27);
    uVar14 = *(ulong *)(lVar13 + 0x18);
    puVar11 = puVar12;
    uVar8 = uVar14;
    if (-1 < (char)bVar4) {
      puVar11 = puVar15;
      uVar8 = (ulong)bVar4;
    }
    puVar10 = (undefined8 *)*param_3;
    uVar7 = param_3[1];
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      puVar10 = param_3;
      uVar7 = (ulong)*(byte *)((long)param_3 + 0x17);
    }
    uVar3 = uVar7;
    if (uVar8 <= uVar7) {
      uVar3 = uVar8;
    }
    puVar9 = puVar11;
    _memcmp(puVar11,puVar10,uVar3);
    bVar6 = uVar8 < uVar7;
    if ((int)puVar9 != 0) {
      bVar6 = (int)puVar9 < 0;
    }
    if (bVar6) {
      if ((char)bVar4 < '\0') {
        FUN_002971d4(&uStack_e0,puVar12,uVar14);
        lVar13 = *param_2;
      }
      else {
        uStack_d8 = *(undefined8 *)(lVar13 + 0x18);
        uStack_e0 = *puVar15;
        uStack_d0 = *(undefined8 *)(lVar13 + 0x20);
      }
      FUN_003a4d94(auStack_100,lVar13 + 0x28);
      lVar13 = *param_2;
      uStack_118 = param_3[1];
      uStack_120 = *param_3;
      lStack_110 = param_3[2];
      param_3[1] = 0;
      param_3[2] = 0;
      *param_3 = 0;
      FUN_003a34e0(auStack_140,param_4);
      FUN_003a394c(&uStack_b0,lVar13 + 0x58,&uStack_120,auStack_140);
      FUN_003a3ebc(param_1,&uStack_e0,auStack_100,lVar13 + 0x48,&uStack_b0);
      if (plStack_a8 != (long *)0x0) {
        plVar2 = plStack_a8 + 1;
        do {
          lVar13 = *plVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = lVar13 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
        }
      }
      FUN_00382478(auStack_140);
      if (lStack_110 < 0) {
        __ZdlPv(uStack_120);
      }
      FUN_00382478(auStack_100);
    }
    else {
      _memcmp(puVar10,puVar11,uVar3);
      bVar6 = uVar7 < uVar8;
      if ((int)puVar10 != 0) {
        bVar6 = (int)puVar10 < 0;
      }
      if (bVar6) {
        if ((char)bVar4 < '\0') {
          FUN_002971d4(&uStack_160,puVar12,uVar14);
          lVar13 = *param_2;
        }
        else {
          uStack_158 = *(undefined8 *)(lVar13 + 0x18);
          uStack_160 = *puVar15;
          lStack_150 = *(long *)(lVar13 + 0x20);
        }
        FUN_003a4d94(auStack_180,lVar13 + 0x28);
        lVar13 = *param_2;
        uStack_198 = param_3[1];
        uStack_1a0 = *param_3;
        lStack_190 = param_3[2];
        param_3[1] = 0;
        param_3[2] = 0;
        *param_3 = 0;
        FUN_003a34e0(auStack_1c0,param_4);
        FUN_003a394c(&uStack_b0,lVar13 + 0x48,&uStack_1a0,auStack_1c0);
        FUN_003a3ebc(param_1,&uStack_160,auStack_180,&uStack_b0,*param_2 + 0x58);
        if (plStack_a8 != (long *)0x0) {
          plVar2 = plStack_a8 + 1;
          do {
            lVar13 = *plVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *plVar2 = lVar13 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
          }
        }
        FUN_00382478(auStack_1c0);
        if (lStack_190 < 0) {
          __ZdlPv(uStack_1a0);
        }
        FUN_00382478(auStack_180);
        if (-1 < lStack_150) {
          return;
        }
        puVar11 = &uStack_160;
      }
      else {
        uStack_1d8 = param_3[1];
        uStack_1e0 = *param_3;
        lStack_1d0 = param_3[2];
        param_3[1] = 0;
        param_3[2] = 0;
        *param_3 = 0;
        FUN_003a34e0(auStack_200,param_4);
        FUN_003a3e60(param_1,&uStack_1e0,auStack_200,*param_2 + 0x48,*param_2 + 0x58);
        FUN_00382478(auStack_200);
        if (-1 < lStack_1d0) {
          return;
        }
        puVar11 = &uStack_1e0;
      }
      __ZdlPv(*puVar11);
    }
  }
  return;
}



/* Entry: 003a3e60; end: 003a3ebb;  */

void FUN_003a3e60(undefined8 param_1,undefined8 param_2,long *param_3,long *param_4)

{
  long lVar1;
  long lStack_20;
  undefined1 uStack_11;
  
  lStack_20 = 0;
  if (*param_3 != 0) {
    lStack_20 = *(long *)(*param_3 + 0x68);
  }
  lVar1 = 0;
  if (*param_4 != 0) {
    lVar1 = *(long *)(*param_4 + 0x68);
  }
  if (lStack_20 <= lVar1) {
    lStack_20 = lVar1;
  }
  lStack_20 = lStack_20 + 1;
  FUN_003a41d8(&uStack_11,param_1,param_2,param_3,param_4,&lStack_20);
  return;
}



/* Entry: 003a3ebc; end: 003a41d7;  */

/* WARNING: Removing unreachable block (ram,0x003a3f90) */
/* WARNING: Removing unreachable block (ram,0x003a40cc) */

void FUN_003a3ebc(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long *param_4,
                 long *param_5)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_180 [32];
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined1 auStack_140 [32];
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined1 auStack_100 [32];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined1 auStack_c0 [32];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_80 [32];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lVar1 = *param_4;
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(lVar1 + 0x68);
  }
  lVar3 = *param_5;
  if (lVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar3 + 0x68);
  }
  if (lVar4 - lVar5 == -2) {
    lVar1 = 0;
    if (*(long *)(lVar3 + 0x48) != 0) {
      lVar1 = *(long *)(*(long *)(lVar3 + 0x48) + 0x68);
    }
    lVar4 = 0;
    if (*(long *)(lVar3 + 0x58) != 0) {
      lVar4 = *(long *)(*(long *)(lVar3 + 0x58) + 0x68);
    }
    if (lVar1 - lVar4 == 1) {
      uStack_d8 = param_2[1];
      uStack_e0 = *param_2;
      lStack_d0 = param_2[2];
      param_2[1] = 0;
      param_2[2] = 0;
      *param_2 = 0;
      FUN_003a34e0(auStack_100,param_3);
      FUN_003a496c(param_1,&uStack_e0,auStack_100,param_4,param_5);
      FUN_00382478(auStack_100);
      if (-1 < lStack_d0) {
        return;
      }
      puVar2 = &uStack_e0;
    }
    else {
      uStack_118 = param_2[1];
      uStack_120 = *param_2;
      lStack_110 = param_2[2];
      param_2[1] = 0;
      param_2[2] = 0;
      *param_2 = 0;
      FUN_003a34e0(auStack_140,param_3);
      FUN_003a4bf8(param_1,&uStack_120,auStack_140,param_4,param_5);
      FUN_00382478(auStack_140);
      if (-1 < lStack_110) {
        return;
      }
      puVar2 = &uStack_120;
    }
  }
  else {
    if (lVar4 - lVar5 == 2) {
      lVar4 = 0;
      if (*(long *)(lVar1 + 0x48) != 0) {
        lVar4 = *(long *)(*(long *)(lVar1 + 0x48) + 0x68);
      }
      lVar3 = 0;
      if (*(long *)(lVar1 + 0x58) != 0) {
        lVar3 = *(long *)(*(long *)(lVar1 + 0x58) + 0x68);
      }
      if (lVar4 - lVar3 != -1) {
        uStack_98 = param_2[1];
        uStack_a0 = *param_2;
        uStack_90 = param_2[2];
        param_2[1] = 0;
        param_2[2] = 0;
        *param_2 = 0;
        FUN_003a34e0(auStack_c0,param_3);
        FUN_003a47d0(param_1,&uStack_a0,auStack_c0,param_4,param_5);
        FUN_00382478(auStack_c0);
        return;
      }
      uStack_58 = param_2[1];
      uStack_60 = *param_2;
      uStack_50 = param_2[2];
      param_2[1] = 0;
      param_2[2] = 0;
      *param_2 = 0;
      FUN_003a34e0(auStack_80,param_3);
      FUN_003a4544(param_1,&uStack_60,auStack_80,param_4,param_5);
      FUN_00382478(auStack_80);
      return;
    }
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      FUN_002971d4(&uStack_160,*param_2,param_2[1]);
    }
    else {
      uStack_158 = param_2[1];
      uStack_160 = *param_2;
      lStack_150 = param_2[2];
    }
    FUN_003a4d94(auStack_180,param_3);
    FUN_003a3e60(param_1,&uStack_160,auStack_180,param_4,param_5);
    FUN_00382478(auStack_180);
    if (-1 < lStack_150) {
      return;
    }
    puVar2 = &uStack_160;
  }
  __ZdlPv(*puVar2);
  return;
}



/* Entry: 003a41d8; end: 003a4267;  */

void FUN_003a41d8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  lVar4 = 0x88;
  __Znwm();
  FUN_003a4268();
  lVar6 = lVar4 + 0x18;
  *param_1 = lVar6;
  param_1[1] = lVar4;
  if ((lVar6 != 0) &&
     ((lVar5 = *(long *)(lVar4 + 0x20), lVar5 == 0 || (*(long *)(lVar5 + 8) == -1)))) {
    plVar7 = (long *)param_1[1];
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar7 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar5 = *(long *)(lVar4 + 0x20);
    }
    *(long *)lVar6 = lVar6;
    *(long **)(lVar4 + 0x20) = plVar7;
    if (lVar5 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
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
        (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Could not recover jumptable at 0x00779e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_00998b98)(plVar7);
        return;
      }
    }
  }
  return;
}



/* Entry: 003a4268; end: 003a42d3;  */

undefined8 *
FUN_003a4268(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  undefined1 uStack_21;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_009df400;
  FUN_003a432c(&uStack_21,param_1 + 3,param_2,param_3,param_4,param_5,param_6);
  return param_1;
}



/* Entry: 003a42d4; end: 003a42e3;  */

void FUN_003a42d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009df400;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 003a42e4; end: 003a4327;  */

void FUN_003a42e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009df400;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 003a4328; end: 003a432b;  */

void FUN_003a4328(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 003a432c; end: 003a443b;  */

void FUN_003a432c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  char cVar8;
  bool bVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined1 auStack_88 [32];
  undefined7 uStack_68;
  undefined1 uStack_61;
  undefined7 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = *param_3;
  uStack_68 = (undefined7)param_3[1];
  uStack_61 = (undefined1)*(undefined8 *)((long)param_3 + 0xf);
  uStack_60 = (undefined7)((ulong)*(undefined8 *)((long)param_3 + 0xf) >> 8);
  uVar7 = *(undefined1 *)((long)param_3 + 0x17);
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  FUN_003a34e0(auStack_88,param_4);
  uVar3 = *param_5;
  lVar5 = param_5[1];
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = *plVar1 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  uVar4 = *param_6;
  lVar6 = param_6[1];
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = *plVar1 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  uVar11 = *param_7;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = uVar2;
  param_2[3] = CONCAT17(uStack_61,uStack_68);
  *(ulong *)((long)param_2 + 0x1f) = CONCAT71(uStack_60,uStack_61);
  *(undefined1 *)((long)param_2 + 0x27) = uVar7;
  puVar10 = auStack_88;
  FUN_003a34e0(param_2 + 5);
  param_2[9] = uVar3;
  param_2[10] = lVar5;
  param_2[0xb] = uVar4;
  param_2[0xc] = lVar6;
  param_2[0xd] = uVar11;
  FUN_00382478(auStack_88);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  FUN_0033d180(puVar10 + 0x58);
  FUN_0033d180(puVar10 + 0x48);
  FUN_00382478(puVar10 + 0x28);
  if ((char)puVar10[0x27] < '\0') {
    __ZdlPv(*(undefined8 *)(puVar10 + 0x10));
  }
  if (*(long *)(puVar10 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00779e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_00998b98)();
    return;
  }
  return;
}



/* Entry: 003a443c; end: 003a4543;  */

void FUN_003a443c(undefined8 param_1,long param_2)

{
  FUN_0033d180(param_2 + 0x58);
  FUN_0033d180(param_2 + 0x48);
  FUN_00382478(param_2 + 0x28);
  if (*(char *)(param_2 + 0x27) < '\0') {
    __ZdlPv(*(undefined8 *)(param_2 + 0x10));
  }
  if (*(long *)(param_2 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00779e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_00998b98)();
    return;
  }
  return;
}



/* Entry: 003a4544; end: 003a47cf;  */

/* WARNING: Removing unreachable block (ram,0x003a4724) */

void FUN_003a4544(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long *param_4,
                 undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_120 [32];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined1 auStack_e0 [8];
  long *plStack_d8;
  undefined1 auStack_d0 [32];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined1 auStack_90 [8];
  long *plStack_88;
  undefined1 auStack_80 [32];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lVar4 = *(long *)(*param_4 + 0x58);
  if (*(char *)(lVar4 + 0x27) < '\0') {
    FUN_002971d4(&uStack_60,*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(lVar4 + 0x18));
    lVar4 = *(long *)(*param_4 + 0x58);
  }
  else {
    uStack_58 = *(undefined8 *)(lVar4 + 0x18);
    uStack_60 = *(undefined8 *)(lVar4 + 0x10);
    uStack_50 = *(undefined8 *)(lVar4 + 0x20);
  }
  FUN_003a4d94(auStack_80,lVar4 + 0x28);
  lVar4 = *param_4;
  if (*(char *)(lVar4 + 0x27) < '\0') {
    FUN_002971d4(&uStack_b0,*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(lVar4 + 0x18));
    lVar4 = *param_4;
  }
  else {
    uStack_a8 = *(undefined8 *)(lVar4 + 0x18);
    uStack_b0 = *(undefined8 *)(lVar4 + 0x10);
    lStack_a0 = *(long *)(lVar4 + 0x20);
  }
  FUN_003a4d94(auStack_d0,lVar4 + 0x28);
  FUN_003a3e60(auStack_90,&uStack_b0,auStack_d0,*param_4 + 0x48,*(long *)(*param_4 + 0x58) + 0x48);
  uStack_f8 = param_2[1];
  uStack_100 = *param_2;
  lStack_f0 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  FUN_003a34e0(auStack_120,param_3);
  FUN_003a3e60(auStack_e0,&uStack_100,auStack_120,*(long *)(*param_4 + 0x58) + 0x58,param_5);
  FUN_003a3e60(param_1,&uStack_60,auStack_80,auStack_90,auStack_e0);
  if (plStack_d8 != (long *)0x0) {
    plVar1 = plStack_d8 + 1;
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
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d8);
    }
  }
  FUN_00382478(auStack_120);
  if (lStack_f0 < 0) {
    __ZdlPv(uStack_100);
  }
  if (plStack_88 != (long *)0x0) {
    plVar1 = plStack_88 + 1;
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
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
    }
  }
  FUN_00382478(auStack_d0);
  if (lStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  FUN_00382478(auStack_80);
  return;
}



/* Entry: 003a47d0; end: 003a496b;  */

/* WARNING: Removing unreachable block (ram,0x003a48f8) */

void FUN_003a47d0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long *param_4,
                 undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_d0 [32];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined1 auStack_90 [8];
  long *plStack_88;
  undefined1 auStack_80 [32];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lVar4 = *param_4;
  if (*(char *)(lVar4 + 0x27) < '\0') {
    FUN_002971d4(&uStack_60,*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(lVar4 + 0x18));
    lVar4 = *param_4;
  }
  else {
    uStack_58 = *(undefined8 *)(lVar4 + 0x18);
    uStack_60 = *(undefined8 *)(lVar4 + 0x10);
    uStack_50 = *(undefined8 *)(lVar4 + 0x20);
  }
  FUN_003a4d94(auStack_80,lVar4 + 0x28);
  lVar4 = *param_4;
  uStack_a8 = param_2[1];
  uStack_b0 = *param_2;
  lStack_a0 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  FUN_003a34e0(auStack_d0,param_3);
  FUN_003a3e60(auStack_90,&uStack_b0,auStack_d0,*param_4 + 0x58,param_5);
  FUN_003a3e60(param_1,&uStack_60,auStack_80,lVar4 + 0x48,auStack_90);
  if (plStack_88 != (long *)0x0) {
    plVar1 = plStack_88 + 1;
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
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
    }
  }
  FUN_00382478(auStack_d0);
  if (lStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  FUN_00382478(auStack_80);
  return;
}



/* Entry: 003a496c; end: 003a4bf7;  */

/* WARNING: Removing unreachable block (ram,0x003a4b4c) */

void FUN_003a496c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 long *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_120 [32];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined1 auStack_e0 [8];
  long *plStack_d8;
  undefined1 auStack_d0 [32];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined1 auStack_90 [8];
  long *plStack_88;
  undefined1 auStack_80 [32];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lVar4 = *(long *)(*param_5 + 0x48);
  if (*(char *)(lVar4 + 0x27) < '\0') {
    FUN_002971d4(&uStack_60,*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(lVar4 + 0x18));
    lVar4 = *(long *)(*param_5 + 0x48);
  }
  else {
    uStack_58 = *(undefined8 *)(lVar4 + 0x18);
    uStack_60 = *(undefined8 *)(lVar4 + 0x10);
    uStack_50 = *(undefined8 *)(lVar4 + 0x20);
  }
  FUN_003a4d94(auStack_80,lVar4 + 0x28);
  uStack_a8 = param_2[1];
  uStack_b0 = *param_2;
  lStack_a0 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  FUN_003a34e0(auStack_d0,param_3);
  FUN_003a3e60(auStack_90,&uStack_b0,auStack_d0,param_4,*(long *)(*param_5 + 0x48) + 0x48);
  lVar4 = *param_5;
  if (*(char *)(lVar4 + 0x27) < '\0') {
    FUN_002971d4(&uStack_100,*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(lVar4 + 0x18));
    lVar4 = *param_5;
  }
  else {
    uStack_f8 = *(undefined8 *)(lVar4 + 0x18);
    uStack_100 = *(undefined8 *)(lVar4 + 0x10);
    lStack_f0 = *(long *)(lVar4 + 0x20);
  }
  FUN_003a4d94(auStack_120,lVar4 + 0x28);
  FUN_003a3e60(auStack_e0,&uStack_100,auStack_120,*(long *)(*param_5 + 0x48) + 0x58,*param_5 + 0x58)
  ;
  FUN_003a3e60(param_1,&uStack_60,auStack_80,auStack_90,auStack_e0);
  if (plStack_d8 != (long *)0x0) {
    plVar1 = plStack_d8 + 1;
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
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d8);
    }
  }
  FUN_00382478(auStack_120);
  if (lStack_f0 < 0) {
    __ZdlPv(uStack_100);
  }
  if (plStack_88 != (long *)0x0) {
    plVar1 = plStack_88 + 1;
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
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
    }
  }
  FUN_00382478(auStack_d0);
  if (lStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  FUN_00382478(auStack_80);
  return;
}



/* Entry: 003a4bf8; end: 003a4d93;  */

/* WARNING: Removing unreachable block (ram,0x003a4d20) */

void FUN_003a4bf8(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 long *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_d0 [32];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined1 auStack_90 [8];
  long *plStack_88;
  undefined1 auStack_80 [32];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lVar4 = *param_5;
  if (*(char *)(lVar4 + 0x27) < '\0') {
    FUN_002971d4(&uStack_60,*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(lVar4 + 0x18));
    lVar4 = *param_5;
  }
  else {
    uStack_58 = *(undefined8 *)(lVar4 + 0x18);
    uStack_60 = *(undefined8 *)(lVar4 + 0x10);
    uStack_50 = *(undefined8 *)(lVar4 + 0x20);
  }
  FUN_003a4d94(auStack_80,lVar4 + 0x28);
  uStack_a8 = param_2[1];
  uStack_b0 = *param_2;
  lStack_a0 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  FUN_003a34e0(auStack_d0,param_3);
  FUN_003a3e60(auStack_90,&uStack_b0,auStack_d0,param_4,*param_5 + 0x48);
  FUN_003a3e60(param_1,&uStack_60,auStack_80,auStack_90,*param_5 + 0x58);
  if (plStack_88 != (long *)0x0) {
    plVar1 = plStack_88 + 1;
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
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
    }
  }
  FUN_00382478(auStack_d0);
  if (lStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  FUN_00382478(auStack_80);
  return;
}



/* Entry: 003a4d94; end: 003a4dd7;  */

undefined1 * FUN_003a4d94(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  FUN_003a4dd8();
  return param_1;
}


