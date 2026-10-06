/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00389370; end: 00389503;  */

void FUN_00389370(long param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  ulong uStack_38;
  
  if ((*(int *)(param_1 + 0xcdc) != 1) || (*param_2 != 0)) goto LAB_003894a4;
  if (*(char *)(param_1 + 0xcd9) == '\0') {
    uVar6 = *(undefined8 *)(param_1 + 0x78);
    *(code **)(param_1 + 0xc20) = FUN_00389370;
    *(long *)(param_1 + 0xc28) = param_1;
    *(undefined8 *)(param_1 + 0xc30) = 0;
    uStack_38 = *param_2;
    if ((uStack_38 & 1) != 0) {
      piVar9 = (int *)(uStack_38 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = *piVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_003bca14(uVar6,param_1 + 0xc18,&uStack_38);
    if ((uStack_38 & 1) == 0) {
      return;
    }
    FUN_0055293c();
    return;
  }
  *(undefined1 *)(param_1 + 0xcd9) = 0;
  *(undefined4 *)(param_1 + 0xcdc) = 0;
  puVar4 = (ulong *)(param_1 + 0xc90);
  func_0x003cf020();
  plVar1 = (long *)(param_1 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *(code **)(param_1 + 0xbe0) = FUN_00388d70;
  *(long *)(param_1 + 0xbe8) = param_1;
  *(undefined8 *)(param_1 + 0xbf0) = 0;
  func_0x003c1f6c();
  uVar5 = *puVar4;
  FUN_003c1e28();
  lVar8 = *(long *)(param_1 + 0xcc8);
  lVar7 = 0x7fffffffffffffff;
  if ((uVar5 != 0x7fffffffffffffff && lVar8 != 0x7fffffffffffffff) &&
     (lVar7 = -0x8000000000000000, uVar5 != 0x8000000000000000 && lVar8 != -0x8000000000000000)) {
    if ((long)uVar5 < 1) {
      if ((long)(-0x8000000000000000 - uVar5) <= lVar8) goto LAB_00389494;
    }
    else if ((long)(uVar5 ^ 0x7fffffffffffffff) < lVar8) {
      lVar7 = 0x7fffffffffffffff;
    }
    else {
LAB_00389494:
      lVar7 = lVar8 + uVar5;
    }
  }
  func_0x003cf010(param_1 + 0xc58,lVar7,param_1 + 0xbd8);
LAB_003894a4:
  plVar1 = (long *)(param_1 + 8);
  do {
    lVar7 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar7 + -1 != 0) {
    return;
  }
  FUN_003827f4(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00389504; end: 00389593;  */

void FUN_00389504(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_28;
  
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  *(code **)(param_1 + 0xc20) = FUN_00389370;
  *(long *)(param_1 + 0xc28) = param_1;
  *(undefined8 *)(param_1 + 0xc30) = 0;
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
  FUN_003bca14(uVar3,param_1 + 0xc18,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 00389594; end: 00389623;  */

void FUN_00389594(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_28;
  
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  *(code **)(param_1 + 0xc00) = FUN_00389288;
  *(long *)(param_1 + 0xc08) = param_1;
  *(undefined8 *)(param_1 + 0xc10) = 0;
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
  FUN_003bca14(uVar3,param_1 + 0xbf8,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 00389624; end: 003896b3;  */

void FUN_00389624(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_28;
  
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  *(code **)(param_1 + 0xc40) = FUN_003896b4;
  *(long *)(param_1 + 0xc48) = param_1;
  *(undefined8 *)(param_1 + 0xc50) = 0;
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
  FUN_003bca14(uVar3,param_1 + 0xc38,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003896b4; end: 00389877;  */

void FUN_003896b4(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  dword adStack_58 [7];
  undefined1 uStack_39;
  ulong uStack_38;
  ulong uStack_30;
  dword *pdStack_28;
  
  if (*(int *)(param_1 + 0xcdc) == 1) {
    if (*param_2 == 0) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                   ,0xb49,1,"%s: Keepalive watchdog fired. Closing transport.");
      *(undefined4 *)(param_1 + 0xcdc) = 2;
      adStack_58[2] = 0;
      adStack_58[3] = 0;
      adStack_58[4] = 0;
      adStack_58[5] = 0;
      adStack_58[0] = 0;
      adStack_58[1] = 0;
      FUN_003b646c(&uStack_38,2,"keepalive watchdog timeout",0x1a,&uStack_39,adStack_58);
      FUN_003be104(&uStack_30,&uStack_38,3,0xe);
      FUN_00385754(param_1,&uStack_30);
      if ((uStack_30 & 1) != 0) {
        FUN_0055293c();
      }
      if ((uStack_38 & 1) != 0) {
        FUN_0055293c();
      }
      pdStack_28 = adStack_58;
      FUN_0033d548(&pdStack_28);
    }
  }
  else {
    pdStack_28 = &MACH_HEADER.cputype;
    if (*param_2 != 4) {
      FUN_00552b00(param_2,&pdStack_28);
      if (((ulong)pdStack_28 & 1) != 0) {
        FUN_0055293c();
      }
      if (((ulong)param_2 & 1) == 0) {
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                     ,0xb56,2,"keepalive_ping_end state error: %d (expect: %d)");
      }
    }
  }
  plVar1 = (long *)(param_1 + 8);
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 == 0) {
    FUN_003827f4(param_1);
    __ZdlPv();
  }
  return;
}



/* Entry: 00389878; end: 00389903;  */

void FUN_00389878(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_28;
  
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  *(code **)(param_1 + 0x168) = FUN_00389904;
  *(long *)(param_1 + 0x170) = param_1;
  *(undefined8 *)(param_1 + 0x178) = 0;
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
  FUN_003bca14(uVar3,param_1 + 0x160,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 00389904; end: 00389b47;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_00389904(long param_1,ulong *param_2)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  ulong uStack_78;
  ulong auStack_70 [4];
  undefined1 uStack_49;
  ulong uStack_48;
  ulong uStack_40;
  ulong *puStack_38;
  
  uVar6 = *param_2;
  bVar5 = uVar6 != 0;
  if (uVar6 != 0) {
    if ((uVar6 & 1) != 0) {
      piVar7 = (int *)(uVar6 - 1);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar4) {
          *piVar7 = *piVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_40 = uVar6;
    FUN_00385754(param_1,&uStack_40);
    if ((uStack_40 & 1) != 0) {
      FUN_0055293c();
    }
  }
  if (*(int *)(param_1 + 0x768) == 2) {
    *(undefined4 *)(param_1 + 0x768) = 3;
    lVar8 = param_1 + 0xf8;
    func_0x0039d43c();
    if (lVar8 == 0) {
      auStack_70[2] = 0;
      auStack_70[3] = 0;
      auStack_70[1] = 0;
      FUN_003b646c(&uStack_48,2,"goaway sent",0xb,&uStack_49,auStack_70 + 1);
      FUN_00385754(param_1,&uStack_48);
      if ((uStack_48 & 1) != 0) {
        FUN_0055293c();
      }
      puStack_38 = auStack_70 + 1;
      FUN_0033d548(&puStack_38);
    }
    bVar5 = true;
  }
  iVar2 = *(int *)(param_1 + 0x90);
  if (iVar2 != 1) {
    if (iVar2 == 2) {
      *(undefined4 *)(param_1 + 0x90) = 1;
      plVar1 = (long *)(param_1 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (!bVar5) {
        FUN_003c1f14(&puStack_38,param_1 + 0xb40);
      }
      *(code **)(param_1 + 0x128) = FUN_00384674;
      *(long *)(param_1 + 0x130) = param_1;
      *(undefined8 *)(param_1 + 0x138) = 0;
      auStack_70[0] = 0;
      FUN_003bcb64(*(undefined8 *)(param_1 + 0x78),param_1 + 0x120,auStack_70);
      if ((auStack_70[0] & 1) != 0) {
        FUN_0055293c();
      }
      goto LAB_00389a74;
    }
    if (iVar2 != 0) goto LAB_00389a74;
    func_0x00338df0("break",
                    "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                    ,0x411);
  }
  FUN_0038453c(param_1,0);
LAB_00389a74:
  uStack_78 = *param_2;
  if ((uStack_78 & 1) != 0) {
    piVar7 = (int *)(uStack_78 - 1);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar5) {
        *piVar7 = *piVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_0039e0ec(param_1,&uStack_78);
  if ((uStack_78 & 1) != 0) {
    FUN_0055293c();
  }
  plVar1 = (long *)(param_1 + 8);
  do {
    lVar8 = *plVar1;
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar8 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar8 + -1 == 0) {
    FUN_003827f4(param_1);
    __ZdlPv();
  }
  return;
}



/* Entry: 00389b48; end: 00389bd3;  */

void FUN_00389b48(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_28;
  
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  *(code **)(param_1 + 0x188) = FUN_00388080;
  *(long *)(param_1 + 400) = param_1;
  *(undefined8 *)(param_1 + 0x198) = 0;
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
  FUN_003bca14(uVar3,param_1 + 0x180,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 00389bd4; end: 00389c73;  */

void FUN_00389bd4(uint *param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  ulong uVar5;
  ulong uStack_28;
  
  if (*param_1 < *(uint *)(param_3 + 0x9c)) {
    *(uint *)(param_3 + 0x398) = *(uint *)(param_3 + 0x398) | 0x1000000;
    *(undefined1 *)(param_3 + 0x3d0) = 1;
    lVar3 = *(long *)(param_3 + 8);
    uVar5 = *(ulong *)(lVar3 + 0x760);
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
    FUN_003862d8(lVar3,param_3,&uStack_28);
    if ((uVar5 & 1) != 0) {
      FUN_0055293c(uVar5);
    }
  }
  return;
}



/* Entry: 00389c74; end: 00389ce3;  */

void FUN_00389c74(long param_1)

{
  undefined8 uVar1;
  ulong uStack_28;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x78);
  *(code **)(param_1 + 0x20) = FUN_00389dfc;
  *(long *)(param_1 + 0x28) = param_1;
  *(undefined8 *)(param_1 + 0x30) = 0;
  uStack_28 = 0;
  FUN_003bca14(uVar1,param_1 + 0x18,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 00389ce4; end: 00389d8f;  */

void FUN_00389ce4(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uStack_28;
  
  if (*param_2 == 0) {
    uVar4 = *(undefined8 *)(param_1[2] + 0x78);
    param_1[0xf] = 0x389f04;
    param_1[0x10] = (long)param_1;
    param_1[0x11] = 0;
    uStack_28 = 0;
    FUN_003bca14(uVar4,param_1 + 0xe,&uStack_28);
    if ((uStack_28 & 1) != 0) {
      FUN_0055293c();
    }
  }
  else {
    plVar1 = param_1 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0 && param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00389d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 00389d90; end: 00389de7;  */

undefined8 * FUN_00389d90(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_009dec10;
  lVar4 = param_1[2];
  plVar1 = (long *)(lVar4 + 8);
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((lVar4 != 0) && (lVar5 == 1)) {
    FUN_003827f4();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 00389de8; end: 00389dfb;  */

void FUN_00389de8(void)

{
  FUN_00389d90();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00389dfc; end: 00389f57;  */

void FUN_00389dfc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  func_0x003cf020(param_1 + 7);
  func_0x00389e5c(param_1);
  plVar1 = param_1 + 1;
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 != 0 || param_1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00389e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 00389f58; end: 00389fcf;  */

void FUN_00389f58(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  int *piVar4;
  ulong uVar5;
  ulong uStack_28;
  
  uVar3 = param_1[1];
  uVar5 = *param_1;
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
  FUN_003862d8(uVar3,param_3,&uStack_28);
  if ((uVar5 & 1) != 0) {
    FUN_0055293c(uVar5);
  }
  return;
}



/* Entry: 00389fd0; end: 00389fff;  */

ulong * FUN_00389fd0(ulong *param_1)

{
  if ((*param_1 & 1) != 0) {
    FUN_0055293c();
  }
  return param_1;
}



/* Entry: 0038a000; end: 0038a053;  */

void FUN_0038a000(long *param_1)

{
  code *pcVar1;
  
  if (*param_1 == 0) {
    return;
  }
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/flow_control.h"
               ,0xa5,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x38a050);
  (*pcVar1)();
}



/* Entry: 0038a054; end: 0038a117;  */

void FUN_0038a054(ulong *param_1,ulong *param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  int *piVar7;
  ulong *puVar8;
  
  uVar6 = *param_1;
  if (uVar6 != 0) {
    uVar5 = 0;
    if (*param_3 != 0) {
      uVar6 = 0;
      puVar8 = param_2;
      do {
        if (*param_1 == *puVar8) {
          return;
        }
        puVar3 = param_1;
        FUN_00552b00(param_1,puVar8);
        if (((ulong)puVar3 & 1) != 0) {
          return;
        }
        uVar6 = uVar6 + 1;
        uVar5 = *param_3;
        puVar8 = puVar8 + 1;
      } while (uVar6 < uVar5);
      uVar6 = *param_1;
    }
    uVar4 = param_2[uVar5];
    if (uVar6 != uVar4) {
      if ((uVar6 & 1) != 0) {
        piVar7 = (int *)(uVar6 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar2) {
            *piVar7 = *piVar7 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        uVar6 = *param_1;
      }
      param_2[uVar5] = uVar6;
      if ((uVar4 & 1) != 0) {
        FUN_0055293c();
      }
    }
    *param_3 = *param_3 + 1;
  }
  return;
}



/* Entry: 0038a118; end: 0038a3bb;  */

void FUN_0038a118(ulong param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_79;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  
  uVar7 = *(ulong *)(param_1 + 0x760);
  if (uVar7 == 0) {
    if (-1 < *(int *)(param_1 + 0x7e4)) {
      do {
        uVar7 = param_1 + 0xf8;
        func_0x0039d43c();
        if (*(uint *)(param_1 + 0x77c) <= uVar7) {
LAB_0038a278:
          if (*(uint *)(param_1 + 0x7e4) < 0x7fffffff) {
            return;
          }
          break;
        }
        plVar6 = &lStack_60;
        uVar7 = param_1;
        func_0x0039d190();
        if ((int)uVar7 == 0) goto LAB_0038a278;
        if (*(int *)(lStack_60 + 0x9c) != 0) {
          func_0x00772afc();
          func_0x0040cf10();
          func_0x0040cf10();
          FUN_0033c494(&uStack_68);
          __Unwind_Resume();
          if ((*plVar6 == 0) && (*(long *)(uVar7 + 0x98) == 0)) {
            if (*(int *)(uVar7 + 0xcdc) == 0) {
              func_0x003cf020(uVar7 + 0xc58);
            }
            func_0x0038a408(uVar7 + 0x9c0);
            *(undefined1 *)(uVar7 + 0xb99) = 1;
          }
          return;
        }
        iVar1 = *(int *)(param_1 + 0x7e4);
        *(int *)(lStack_60 + 0x9c) = iVar1;
        *(uint *)(param_1 + 0x7e4) = iVar1 + 2U;
        if (0x7ffffffe < iVar1 + 2U) {
          FUN_00552acc(&puStack_58,0xe,"Transport Stream IDs exhausted",0x1e);
          FUN_003fb114(param_1 + 0x2e0,3,&puStack_58,"no_more_stream_ids");
          if (((ulong)puStack_58 & 1) != 0) {
            FUN_0055293c();
          }
          iVar1 = *(int *)(lStack_60 + 0x9c);
        }
        FUN_0039d29c(param_1 + 0xf8,iVar1);
        FUN_00384070(param_1);
        lVar4 = lStack_60;
        if ((*(long *)(param_1 + 0x98) == 0) &&
           (uVar7 = param_1, FUN_0039cf7c(param_1,lStack_60), (int)uVar7 != 0)) {
          plVar6 = *(long **)(lVar4 + 0x10);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = *plVar6 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        FUN_00383c14(param_1,1);
      } while (-1 < *(int *)(param_1 + 0x7e4));
    }
    uVar7 = param_1;
    func_0x0039d190(param_1,&lStack_60);
    if ((int)uVar7 != 0) {
      do {
        lVar4 = lStack_60;
        *(uint *)(lStack_60 + 0x398) = *(uint *)(lStack_60 + 0x398) | 0x1000000;
        *(undefined1 *)(lStack_60 + 0x3d0) = 0;
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_98 = 0;
        FUN_003b646c(&uStack_78,2,"Stream IDs exhausted",0x14,&uStack_79,&uStack_98);
        FUN_003be104(&uStack_70,&uStack_78,3,0xe);
        FUN_003862d8(param_1,lVar4,&uStack_70);
        if ((uStack_70 & 1) != 0) {
          FUN_0055293c();
        }
        if ((uStack_78 & 1) != 0) {
          FUN_0055293c();
        }
        puStack_58 = &uStack_98;
        FUN_0033d548(&puStack_58);
        uVar7 = param_1;
        func_0x0039d190(param_1,&lStack_60);
      } while ((uVar7 & 1) != 0);
    }
  }
  else {
    if ((uVar7 & 1) != 0) {
      piVar5 = (int *)(uVar7 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar3) {
          *piVar5 = *piVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_68 = uVar7;
    FUN_00384cc8(param_1,&uStack_68);
    if ((uVar7 & 1) != 0) {
      FUN_0055293c(uVar7);
    }
  }
  return;
}



/* Entry: 0038a3bc; end: 0038a447;  */

void FUN_0038a3bc(long param_1,long *param_2)

{
  if ((*param_2 == 0) && (*(long *)(param_1 + 0x98) == 0)) {
    if (*(int *)(param_1 + 0xcdc) == 0) {
      func_0x003cf020(param_1 + 0xc58);
    }
    func_0x0038a408(param_1 + 0x9c0);
    *(undefined1 *)(param_1 + 0xb99) = 1;
  }
  return;
}



/* Entry: 0038a448; end: 0038a5af;  */

void FUN_0038a448(ulong *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  ulong **ppuVar4;
  ulong **ppuVar5;
  ulong *puVar6;
  undefined4 uVar7;
  ulong *puVar8;
  ulong uVar9;
  int *piVar10;
  ulong uStack_78;
  ulong *puStack_70;
  ulong **ppuStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  ulong *puStack_48;
  undefined4 uStack_40;
  ulong uStack_38;
  
  if ((*param_2 == 0) && (param_1[0x13] == 0)) {
    if (*(char *)((long)param_1 + 0xb99) != '\0') {
      *(undefined1 *)((long)param_1 + 0xb99) = 0;
      puVar6 = param_1 + 0x135;
      puVar3 = param_1 + 0x138;
      func_0x003facb8();
      uVar7 = SUB84(param_2,0);
      FUN_0038c15c();
      ppuVar4 = &puStack_48;
      puVar8 = param_1;
      puStack_48 = puVar6;
      uStack_40 = uVar7;
      func_0x00383b10(ppuVar4,param_1,0);
      if ((char)param_1[0x173] == '\0') {
        *(undefined1 *)(param_1 + 0x173) = 1;
        param_1[0x15c] = (ulong)FUN_0038a5b0;
        param_1[0x15d] = (ulong)param_1;
        param_1[0x15e] = 0;
                    /* WARNING: Could not recover jumptable at 0x003cf01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puRam0000000000b65d60)(param_1 + 0x174,puVar3,param_1 + 0x15b);
        return;
      }
      func_0x00772b64();
      func_0x0040cf10();
      FUN_0033c494(&uStack_38);
      ppuVar5 = ppuVar4;
      __Unwind_Resume();
      pcStack_58 = FUN_0038a5b0;
      puVar6 = ppuVar5[0xf];
      puStack_70 = puVar3;
      ppuStack_68 = ppuVar4;
      puStack_60 = &stack0xfffffffffffffff0;
      ppuVar5[0x15c] = (ulong *)FUN_0038a640;
      ppuVar5[0x15d] = (ulong *)ppuVar5;
      ppuVar5[0x15e] = (ulong *)0x0;
      uStack_78 = *puVar8;
      if ((uStack_78 & 1) != 0) {
        piVar10 = (int *)(uStack_78 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = *piVar10 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_003bca14(puVar6,ppuVar5 + 0x15b,&uStack_78);
      if ((uStack_78 & 1) != 0) {
        FUN_0055293c();
      }
      return;
    }
    uVar9 = param_1[0xf];
    param_1[0x164] = (ulong)FUN_0038a448;
    param_1[0x165] = (ulong)param_1;
    param_1[0x166] = 0;
    uStack_38 = *param_2;
    if ((uStack_38 & 1) != 0) {
      piVar10 = (int *)(uStack_38 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar2) {
          *piVar10 = *piVar10 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_003bca14(uVar9,param_1 + 0x163,&uStack_38);
    if ((uStack_38 & 1) != 0) {
      FUN_0055293c();
    }
  }
  else {
    puVar6 = param_1 + 1;
    do {
      uVar9 = *puVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puVar6,0x10);
      if (bVar2) {
        *puVar6 = uVar9 - 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((param_1 != (ulong *)0x0) && (uVar9 == 1)) {
      FUN_003827f4(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_0099c620)();
      return;
    }
  }
  return;
}



/* Entry: 0038a5b0; end: 0038a63f;  */

void FUN_0038a5b0(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_28;
  
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  *(code **)(param_1 + 0xae0) = FUN_0038a640;
  *(long *)(param_1 + 0xae8) = param_1;
  *(undefined8 *)(param_1 + 0xaf0) = 0;
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
  FUN_003bca14(uVar3,param_1 + 0xad8,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 0038a640; end: 0038a6bb;  */

/* WARNING: Removing unreachable block (ram,0x00383c88) */

void FUN_0038a640(undefined8 *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  char cStack_50;
  ulong uStack_48;
  
  if (*(char *)(param_1 + 0x173) != '\0') {
    *(undefined1 *)(param_1 + 0x173) = 0;
    if (*param_2 == 0) {
      if (param_1[0x139] != 0) {
        FUN_00387c74(param_1 + 0x138);
        param_1[0x160] = FUN_00387e28;
        param_1[0x161] = param_1;
        param_1[0x162] = 0;
        param_1[0x164] = FUN_00387eb8;
        param_1[0x165] = param_1;
        param_1[0x166] = 0;
        FUN_00387c9c(param_1,param_1 + 0x15f,param_1 + 0x163);
        if (*(int *)(param_1 + 0x12) == 1) {
          FUN_00384638(0x11);
          *(undefined4 *)(param_1 + 0x12) = 2;
        }
        else if (*(int *)(param_1 + 0x12) == 0) {
          FUN_00384638(0x11);
          *(undefined4 *)(param_1 + 0x12) = 1;
          plVar6 = param_1 + 1;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar2) {
              *plVar6 = *plVar6 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          param_1[0x25] = FUN_00384674;
          param_1[0x26] = param_1;
          param_1[0x27] = 0;
          FUN_003bcb64(param_1[0xf],param_1 + 0x24,&stack0xffffffffffffffd8);
        }
        return;
      }
      *(undefined1 *)(param_1 + 0x15a) = 1;
      plVar6 = param_1 + 1;
      do {
        lVar5 = *plVar6 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar5;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    else {
      plVar6 = param_1 + 1;
      do {
        lVar5 = *plVar6 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar5;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (lVar5 != 0) {
      return;
    }
    FUN_003827f4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  func_0x00772b98();
  if ((char)param_2[4] == '\0') {
    FUN_003d6390(param_1);
    uStack_70 = uStack_70 & 0xffffffffffffff00;
    cStack_50 = '\0';
    if ((char)param_2[4] == '\0') {
      lVar5 = param_1[3];
      plVar6 = (long *)(lVar5 + 8);
      do {
        lVar4 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((lVar5 != 0) && (lVar4 == 1)) {
        FUN_003827f4();
        __ZdlPv();
      }
      goto LAB_0038a784;
    }
  }
  plVar6 = param_1 + 3;
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_60 = param_2[2];
  uStack_58 = param_2[3];
  param_2[3] = 0;
  cStack_50 = '\x01';
  lVar5 = *plVar6;
  *(code **)(lVar5 + 0xb60) = FUN_0038a820;
  *(long *)(lVar5 + 0xb68) = lVar5;
  *(undefined8 *)(lVar5 + 0xb70) = 0;
  lVar5 = *plVar6;
  FUN_0038a9a4(lVar5 + 0x58,&uStack_70);
  uVar3 = *(undefined8 *)(lVar5 + 0x70);
  *(ulong *)(lVar5 + 0x68) = uStack_60;
  *(ulong *)(lVar5 + 0x70) = uStack_58;
  uStack_48 = 0;
  uStack_58 = uVar3;
  FUN_003bca14(*(undefined8 *)(*plVar6 + 0x78),*plVar6 + 0xb58,&uStack_48);
  if ((uStack_48 & 1) != 0) {
    FUN_0055293c();
  }
LAB_0038a784:
  if (cStack_50 != '\0') {
    FUN_003d61b4(&uStack_70);
  }
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = &PTR____cxa_pure_virtual_009deca0;
    func_0x0038aa08(param_1 + 1);
    __ZdlPv(param_1);
  }
  return;
}



/* Entry: 0038a6bc; end: 0038a81f;  */

void FUN_0038a6bc(undefined8 *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  char cStack_40;
  ulong uStack_38;
  
  if ((char)param_2[4] == '\0') {
    FUN_003d6390(param_1);
    uStack_60 = uStack_60 & 0xffffffffffffff00;
    cStack_40 = '\0';
    if ((char)param_2[4] == '\0') {
      lVar5 = param_1[3];
      plVar6 = (long *)(lVar5 + 8);
      do {
        lVar4 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((lVar5 != 0) && (lVar4 == 1)) {
        FUN_003827f4();
        __ZdlPv();
      }
      goto LAB_0038a784;
    }
  }
  plVar6 = param_1 + 3;
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_50 = param_2[2];
  uStack_48 = param_2[3];
  param_2[3] = 0;
  cStack_40 = '\x01';
  lVar5 = *plVar6;
  *(code **)(lVar5 + 0xb60) = FUN_0038a820;
  *(long *)(lVar5 + 0xb68) = lVar5;
  *(undefined8 *)(lVar5 + 0xb70) = 0;
  lVar5 = *plVar6;
  FUN_0038a9a4(lVar5 + 0x58,&uStack_60);
  uVar3 = *(undefined8 *)(lVar5 + 0x70);
  *(ulong *)(lVar5 + 0x68) = uStack_50;
  *(ulong *)(lVar5 + 0x70) = uStack_48;
  uStack_38 = 0;
  uStack_48 = uVar3;
  FUN_003bca14(*(undefined8 *)(*plVar6 + 0x78),*plVar6 + 0xb58,&uStack_38);
  if ((uStack_38 & 1) != 0) {
    FUN_0055293c();
  }
LAB_0038a784:
  if (cStack_40 != '\0') {
    FUN_003d61b4(&uStack_60);
  }
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = &PTR____cxa_pure_virtual_009deca0;
    func_0x0038aa08(param_1 + 1);
    __ZdlPv(param_1);
  }
  return;
}



/* Entry: 0038a820; end: 0038a9a3;  */

void FUN_0038a820(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_51;
  ulong uStack_50;
  ulong uStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar4 = *param_2;
  if (lVar4 == 0) {
    lVar4 = param_1 + 0xf8;
    func_0x0039d43c();
    if (lVar4 == 0) {
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_70 = 0;
      FUN_003b646c(&uStack_50,2,"Buffers full",0xc,&uStack_51,&uStack_70);
      FUN_003be104(&uStack_48,&uStack_50,7,0xb);
      FUN_003853fc(param_1,&uStack_48,1);
      if ((uStack_48 & 1) != 0) {
        FUN_0055293c();
      }
      if ((uStack_50 & 1) != 0) {
        FUN_0055293c();
      }
      puStack_40 = (undefined1 *)&uStack_70;
      FUN_0033d548(&puStack_40);
    }
    lVar4 = *param_2;
  }
  *(undefined1 *)(param_1 + 0xb50) = 0;
  puStack_40 = (undefined1 *)0x4;
  if (lVar4 != 4) {
    FUN_00552b00(param_2,&puStack_40);
    if (((ulong)puStack_40 & 1) != 0) {
      FUN_0055293c();
    }
    if (((ulong)param_2 & 1) == 0) {
      uStack_38 = *(undefined8 *)(param_1 + 0x60);
      puStack_40 = *(undefined1 **)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
      uStack_30 = *(undefined8 *)(param_1 + 0x68);
      uStack_28 = *(undefined8 *)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x70) = 0;
      FUN_003d61b4(&puStack_40);
    }
  }
  plVar1 = (long *)(param_1 + 8);
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 == 0) {
    FUN_003827f4(param_1);
    __ZdlPv();
  }
  return;
}



/* Entry: 0038a9a4; end: 0038aa5f;  */

undefined8 * FUN_0038a9a4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 0038aa60; end: 0038aa87;  */

void FUN_0038aa60(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_003d61b8();
  }
  return;
}



/* Entry: 0038aa88; end: 0038abeb;  */

void FUN_0038aa88(undefined8 *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  char cStack_40;
  ulong uStack_38;
  
  if ((char)param_2[4] == '\0') {
    FUN_003d6390(param_1);
    uStack_60 = uStack_60 & 0xffffffffffffff00;
    cStack_40 = '\0';
    if ((char)param_2[4] == '\0') {
      lVar5 = param_1[3];
      plVar6 = (long *)(lVar5 + 8);
      do {
        lVar4 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((lVar5 != 0) && (lVar4 == 1)) {
        FUN_003827f4();
        __ZdlPv();
      }
      goto LAB_0038ab50;
    }
  }
  plVar6 = param_1 + 3;
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_50 = param_2[2];
  uStack_48 = param_2[3];
  param_2[3] = 0;
  cStack_40 = '\x01';
  lVar5 = *plVar6;
  *(code **)(lVar5 + 0xb80) = FUN_0038abec;
  *(long *)(lVar5 + 0xb88) = lVar5;
  *(undefined8 *)(lVar5 + 0xb90) = 0;
  lVar5 = *plVar6;
  FUN_0038a9a4(lVar5 + 0x58,&uStack_60);
  uVar3 = *(undefined8 *)(lVar5 + 0x70);
  *(ulong *)(lVar5 + 0x68) = uStack_50;
  *(ulong *)(lVar5 + 0x70) = uStack_48;
  uStack_38 = 0;
  uStack_48 = uVar3;
  FUN_003bca14(*(undefined8 *)(*plVar6 + 0x78),*plVar6 + 0xb78,&uStack_38);
  if ((uStack_38 & 1) != 0) {
    FUN_0055293c();
  }
LAB_0038ab50:
  if (cStack_40 != '\0') {
    FUN_003d61b4(&uStack_60);
  }
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = &PTR____cxa_pure_virtual_009deca0;
    func_0x0038aa08(param_1 + 1);
    __ZdlPv(param_1);
  }
  return;
}



/* Entry: 0038abec; end: 0038ad9f;  */

void FUN_0038abec(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_61;
  ulong uStack_60;
  ulong uStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar5 = param_1 + 0xf8;
  uVar4 = uVar5;
  func_0x0039d43c();
  *(undefined1 *)(param_1 + 0xb51) = 0;
  lVar6 = *param_2;
  if (lVar6 == 0 && uVar4 != 0) {
    FUN_0039d448(uVar5);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    FUN_003b646c(&uStack_60,2,"Buffers full",0xc,&uStack_61,&uStack_80);
    FUN_003be104(&uStack_58,&uStack_60,7,0xb);
    FUN_003862d8(param_1,uVar5,&uStack_58);
    if ((uStack_58 & 1) != 0) {
      FUN_0055293c();
    }
    if ((uStack_60 & 1) != 0) {
      FUN_0055293c();
    }
    puStack_50 = (undefined1 *)&uStack_80;
    FUN_0033d548(&puStack_50);
    if (1 < uVar4) {
      FUN_00384070(param_1);
    }
    lVar6 = *param_2;
  }
  puStack_50 = (undefined1 *)0x4;
  if (lVar6 != 4) {
    FUN_00552b00(param_2,&puStack_50);
    if (((ulong)puStack_50 & 1) != 0) {
      FUN_0055293c();
    }
    if (((ulong)param_2 & 1) == 0) {
      uStack_48 = *(undefined8 *)(param_1 + 0x60);
      puStack_50 = *(undefined1 **)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
      uStack_40 = *(undefined8 *)(param_1 + 0x68);
      uStack_38 = *(undefined8 *)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x70) = 0;
      FUN_003d61b4(&puStack_50);
    }
  }
  plVar1 = (long *)(param_1 + 8);
  do {
    lVar6 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 + -1 == 0) {
    FUN_003827f4(param_1);
    __ZdlPv();
  }
  return;
}



/* Entry: 0038ada0; end: 0038adc3;  */

undefined8 FUN_0038ada0(undefined8 param_1,undefined8 param_2)

{
  FUN_00383ecc(param_2,param_1);
  return 0;
}



/* Entry: 0038adc4; end: 0038addb;  */

void FUN_0038adc4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x003bcec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))(*(long **)(param_1 + 0x10),param_3);
  return;
}



/* Entry: 0038addc; end: 0038ae97;  */

void FUN_0038addc(long param_1,long param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uStack_58;
  ulong uStack_28;
  
  if (*(char *)(param_1 + 0x628) == '\0') {
    if (((*(byte *)(param_3 + 0x10) & 1) == 0) ||
       ((*(byte *)(**(long **)(param_3 + 8) + 1) >> 3 & 1) == 0)) {
      if (((*(byte *)(param_3 + 0x10) >> 1 & 1) == 0) ||
         ((*(byte *)(*(long *)(*(long *)(param_3 + 8) + 0x18) + 1) >> 3 & 1) == 0))
      goto LAB_0038ae20;
    }
    else {
      func_0x00772c00();
    }
    func_0x00772bcc();
    func_0x0040cf10();
    FUN_0033c494(&uStack_28);
    __Unwind_Resume();
    *(long *)(param_2 + 0x88) = param_1;
    plVar4 = (long *)(param_1 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    *(code **)(param_2 + 0x98) = FUN_0038b804;
    *(long *)(param_2 + 0xa0) = param_2;
    *(undefined8 *)(param_2 + 0xa8) = 0;
    uStack_58 = 0;
    FUN_003bca14(uVar3,param_2 + 0x90,&uStack_58);
    if ((uStack_58 & 1) != 0) {
      FUN_0055293c();
    }
    return;
  }
LAB_0038ae20:
  plVar4 = *(long **)(param_2 + 0x10);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  *(long *)(param_3 + 0x18) = param_2;
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  *(code **)(param_3 + 0x28) = FUN_0038b014;
  *(long *)(param_3 + 0x30) = param_3;
  *(undefined8 *)(param_3 + 0x38) = 0;
  uStack_28 = 0;
  FUN_003bca14(uVar3,param_3 + 0x20,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 0038ae98; end: 0038af1b;  */

void FUN_0038ae98(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uStack_28;
  
  *(long *)(param_2 + 0x88) = param_1;
  plVar1 = (long *)(param_1 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  *(code **)(param_2 + 0x98) = FUN_0038b804;
  *(long *)(param_2 + 0xa0) = param_2;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  uStack_28 = 0;
  FUN_003bca14(uVar4,param_2 + 0x90,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 0038af1c; end: 0038af87;  */

void FUN_0038af1c(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(code **)(param_2 + 0x28) = FUN_0038ba40;
  *(long *)(param_2 + 0x30) = param_2;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = param_3;
  uStack_28 = 0;
  FUN_003bca14(uVar1,param_2 + 0x20,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 0038af88; end: 0038b00b;  */

void FUN_0038af88(qword param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  ulong uStack_28;
  
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  pcVar1 = segment_command_00000020.segname + 8;
  FUN_00338c74();
  *(code **)pcVar1 = FUN_0038ba44;
  *(qword *)(pcVar1 + 8) = param_1;
  *(code **)(pcVar1 + 0x18) = FUN_0033df34;
  *(char **)(pcVar1 + 0x20) = pcVar1;
  *(undefined8 *)(pcVar1 + 0x28) = 0;
  uStack_28 = 0;
  FUN_003bca14(uVar2,pcVar1 + 0x10,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 0038b00c; end: 0038b013;  */

undefined8 FUN_0038b00c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 0038b014; end: 0038b803;  */

void FUN_0038b014(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  byte *pbVar7;
  dword *pdVar8;
  long *plVar9;
  int *piVar10;
  long lVar11;
  uint uVar12;
  uint *puVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  long *unaff_x22;
  byte *unaff_x23;
  ulong *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  ulong uStack_160;
  undefined1 uStack_151;
  ulong uStack_150;
  ulong uStack_148;
  undefined8 *puStack_140;
  ulong uStack_138;
  long *plStack_130;
  undefined8 *puStack_128;
  long lStack_120;
  long *plStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_d9;
  ulong auStack_d8 [4];
  ulong uStack_b8;
  ulong uStack_b0;
  long *plStack_a8;
  ulong *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar17 = (undefined8 *)param_1[3];
  puVar21 = (undefined8 *)param_1[1];
  lVar18 = puVar17[1];
  *puVar17 = puVar21[0x14];
  *(byte *)(puVar17 + 0x10e) = *(byte *)(param_1 + 2) >> 7;
  puVar20 = (ulong *)*param_1;
  if (puVar20 != (ulong *)0x0) {
    *puVar20 = 0x10000;
    puVar20[3] = 0;
  }
  puStack_a0 = puVar20;
  if ((*(byte *)(param_1 + 2) >> 6 & 1) != 0) {
    unaff_x22 = (long *)puVar21[0x13];
    if (((ulong)unaff_x22 & 1) != 0) {
      piVar10 = (int *)((long)unaff_x22 + -1);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar5) {
          *piVar10 = *piVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar22 = puVar17;
    plStack_a8 = unaff_x22;
    FUN_003862d8(lVar18,puVar17,&plStack_a8);
    param_2 = (int)puVar22;
    if (((ulong)unaff_x22 & 1) != 0) {
      FUN_0055293c(unaff_x22);
    }
  }
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    if ((*(char *)(lVar18 + 0x628) != '\0') && (*(long *)(lVar18 + 0xce8) != 0)) {
      FUN_003a9ed8();
    }
    unaff_x22 = puVar17 + 0x15;
    if (*unaff_x22 != 0) {
      func_0x00772da0();
      goto LAB_0038b744;
    }
    *puVar20 = (*puVar20 | 1) + 0x10000;
    puVar17[0x15] = puVar20;
    puVar13 = (uint *)*puVar21;
    puVar17[0x14] = puVar13;
    cVar4 = *(char *)(lVar18 + 0x628);
    uVar2 = *puVar13;
    if (cVar4 != '\0') {
      if ((uVar2 >> 0xb & 1) == 0) {
        lVar16 = 0x7fffffffffffffff;
      }
      else {
        lVar16 = *(long *)(puVar13 + 0x60);
      }
      if ((long)puVar17[0xda] <= lVar16) {
        lVar16 = puVar17[0xda];
      }
      puVar17[0xda] = lVar16;
    }
    if (((uVar2 >> 10 & 1) != 0) && (puVar13[0x62] != 0)) {
      *(undefined1 *)((long)puVar17 + 0x16b) = 1;
    }
    if (*(char *)(puVar17 + 0x2d) == '\0') {
      if (cVar4 == '\0') {
        if (*(int *)((long)puVar17 + 0x9c) == 0) {
          func_0x00772d38();
          goto LAB_0038b744;
        }
        if (*(long *)(lVar18 + 0x98) == 0) {
          lVar16 = lVar18;
          puVar22 = puVar17;
          FUN_0039cf7c();
          param_2 = (int)puVar22;
          if ((int)lVar16 != 0) {
            plVar14 = (long *)puVar17[2];
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar5) {
                *plVar14 = *plVar14 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
        }
        if (((*(byte *)(param_1 + 2) >> 2 & 1) == 0) || ((*(byte *)(param_1[1] + 0x30) & 1) == 0)) {
          param_2 = 3;
          FUN_00383c14(lVar18);
        }
      }
      else if (*(long *)(lVar18 + 0x98) == 0) {
        if (*(int *)((long)puVar17 + 0x9c) != 0) {
          func_0x00772d6c();
          goto LAB_0038b744;
        }
        puVar22 = puVar17;
        func_0x0039d158(lVar18);
        param_2 = (int)puVar22;
        FUN_0038a118(lVar18);
      }
      else {
        *(uint *)(puVar17 + 0x73) = *(uint *)(puVar17 + 0x73) | 0x1000000;
        *(undefined1 *)(puVar17 + 0x7a) = 0;
        FUN_003bdf2c(&uStack_b8,2,"Transport closed",0x10,&puStack_98,1);
        FUN_003be104(&uStack_b0,&uStack_b8,3,0xe);
        puVar22 = puVar17;
        FUN_003862d8(lVar18,puVar17,&uStack_b0);
        param_2 = (int)puVar22;
        if ((uStack_b0 & 1) != 0) {
          FUN_0055293c();
        }
        if ((uStack_b8 & 1) != 0) {
          FUN_0055293c();
        }
      }
    }
    else {
      puVar17[0x14] = 0;
      param_2 = 0x8c519b;
      FUN_003bdf2c(auStack_d8 + 3,2,"Attempt to send initial metadata after stream was closed",0x38,
                   &puStack_98,1,puVar17 + 0x2f);
      FUN_00384d78(lVar18);
      if ((auStack_d8[3] & 1) != 0) {
        FUN_0055293c();
      }
    }
    if ((long *)puVar21[2] != (long *)0x0) {
      plVar14 = (long *)(lVar18 + 0x18);
      if (*(char *)(lVar18 + 0x2f) < '\0') {
        plVar14 = (long *)*plVar14;
      }
      *(long *)puVar21[2] = (long)plVar14;
    }
  }
  if ((*(byte *)(param_1 + 2) >> 2 & 1) != 0) {
    *(int *)(lVar18 + 0xcf0) = *(int *)(lVar18 + 0xcf0) + 1;
    *puVar20 = *puVar20 | 1;
    plVar14 = (long *)*param_1;
    *plVar14 = *plVar14 + 0x10000;
    unaff_x22 = puVar17 + 0x1c;
    *unaff_x22 = (long)plVar14;
    if (*(char *)(puVar17 + 0x2d) == '\0') {
      uVar2 = *(uint *)(puVar21 + 6);
      unaff_x23 = (byte *)(puVar17 + 0xe5);
      param_2 = 5;
      pbVar7 = unaff_x23;
      func_0x003ed000();
      *pbVar7 = (byte)(uVar2 >> 0x1f);
      lVar16 = *(long *)(puVar21[5] + 0x20);
      uVar12 = (uint)lVar16;
      uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
      *(uint *)(pbVar7 + 1) = uVar12 >> 0x10 | uVar12 << 0x10;
      lVar11 = puVar17[0x1a];
      lVar16 = lVar11 + puVar17[0xe9] + lVar16;
      puVar17[0x19] = lVar16;
      bVar5 = (uVar2 & 1) != 0;
      if (bVar5) {
        lVar16 = lVar16 - (ulong)*(uint *)(lVar18 + 0x758);
        puVar17[0x19] = lVar16;
      }
      *(bool *)((long)puVar17 + 0x16c) = bVar5;
      lVar15 = *(long *)(puVar21[5] + 0x10);
      if (lVar15 != 0) {
        puVar22 = *(undefined8 **)(puVar21[5] + 8);
        puVar1 = puVar22 + lVar15 * 4;
        do {
          plVar14 = (long *)*puVar22;
          if ((long *)((long)&MACH_HEADER.magic + 1) < plVar14) {
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar5) {
                *plVar14 = *plVar14 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          uStack_88 = puVar22[1];
          uStack_90 = *puVar22;
          uStack_78 = puVar22[3];
          uStack_80 = puVar22[2];
          param_2 = (int)&uStack_90;
          FUN_003ecb34(unaff_x23);
          puVar22 = puVar22 + 4;
        } while (puVar22 != puVar1);
        lVar16 = puVar17[0x19];
        lVar11 = puVar17[0x1a];
      }
      if (lVar11 < lVar16) {
        pdVar8 = *(dword **)(lVar18 + 0xac8);
        if (pdVar8 == (dword *)0x0) {
          pdVar8 = &MACH_HEADER.flags;
          FUN_00338c74();
        }
        else {
          *(undefined8 *)(lVar18 + 0xac8) = *(undefined8 *)(pdVar8 + 4);
        }
        *(long *)pdVar8 = lVar16;
        *(undefined8 *)(pdVar8 + 2) = puVar17[0x1c];
        puVar17[0x1c] = 0;
        lVar16 = 0x850;
        if ((uVar2 & 4) != 0) {
          lVar16 = 0x858;
        }
        *(undefined8 *)(pdVar8 + 4) = *(undefined8 *)((long)puVar17 + lVar16);
        *(dword **)((long)puVar17 + lVar16) = pdVar8;
      }
      else {
        auStack_d8[1] = 0;
        FUN_00384d78(lVar18);
      }
      if ((*(int *)((long)puVar17 + 0x9c) != 0) &&
         ((*(char *)((long)puVar17 + 0x16c) == '\0' ||
          ((ulong)*(uint *)(lVar18 + 0x758) < (ulong)puVar17[0xe9])))) {
        if ((*(long *)(lVar18 + 0x98) == 0) &&
           (lVar16 = lVar18, FUN_0039cf7c(lVar18,puVar17), (int)lVar16 != 0)) {
          plVar14 = (long *)puVar17[2];
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar5) {
              *plVar14 = *plVar14 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        param_2 = 2;
        FUN_00383c14(lVar18);
      }
    }
    else {
      *(undefined1 *)(param_1[1] + 0x34) = 1;
      auStack_d8[2] = 0;
      FUN_00384d78(lVar18);
    }
  }
  if ((*(byte *)(param_1 + 2) >> 1 & 1) != 0) {
    unaff_x22 = puVar17 + 0x18;
    if (*unaff_x22 != 0) {
      func_0x00772d04();
      goto LAB_0038b744;
    }
    *puVar20 = (*puVar20 | 1) + 0x10000;
    puVar17[0x18] = puVar20;
    lVar16 = puVar21[3];
    puVar17[0x17] = puVar21[4];
    puVar17[0x16] = lVar16;
    *(undefined1 *)((long)puVar17 + 0x16c) = 0;
    if (((*(byte *)(lVar16 + 1) >> 2 & 1) != 0) && (*(int *)(lVar16 + 0x188) != 0)) {
      *(undefined1 *)((long)puVar17 + 0x16b) = 1;
    }
    if (*(char *)(puVar17 + 0x2d) == '\0') {
      if (*(int *)((long)puVar17 + 0x9c) != 0) {
        if ((*(long *)(lVar18 + 0x98) == 0) &&
           (lVar16 = lVar18, FUN_0039cf7c(lVar18,puVar17), (int)lVar16 != 0)) {
          plVar14 = (long *)puVar17[2];
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar5) {
              *plVar14 = *plVar14 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        param_2 = 4;
        FUN_00383c14(lVar18);
      }
    }
    else {
      puVar17[0x16] = 0;
      puVar17[0x17] = 0;
      if ((**(int **)(param_1[1] + 0x18) == 0) &&
         ((lVar16 = *(long *)(*(int **)(param_1[1] + 0x18) + 0x7e), lVar16 == 0 ||
          (*(long *)(lVar16 + 8) == 0)))) {
        auStack_d8[0] = 0;
        unaff_x23 = (byte *)((long)&MACH_HEADER.magic + 1);
      }
      else {
        uStack_f8 = 0;
        uStack_f0 = 0;
        uStack_e8 = 0;
        param_2 = 0x8c5202;
        FUN_003b646c(auStack_d8,2,"Attempt to send trailing metadata after stream was closed",0x39,
                     &uStack_d9,&uStack_f8);
        unaff_x23 = (byte *)0x0;
      }
      FUN_00384d78(lVar18);
      if ((int)unaff_x23 == 0) {
        if ((auStack_d8[0] & 1) != 0) {
          FUN_0055293c();
        }
        puStack_98 = &uStack_f8;
        FUN_0033d548(&puStack_98);
      }
      else if ((auStack_d8[0] & 1) != 0) {
        FUN_0055293c();
      }
    }
  }
  bVar3 = *(byte *)(param_1 + 2);
  if ((bVar3 >> 3 & 1) != 0) {
    if (puVar17[0x1e] != 0) {
      func_0x00772cd0();
      goto LAB_0038b744;
    }
    puVar17[0x1d] = puVar21[7];
    uVar23 = puVar21[9];
    puVar17[0x1f] = puVar21[10];
    puVar17[0x1e] = uVar23;
    if ((long *)puVar21[0xb] != (long *)0x0) {
      plVar14 = (long *)(lVar18 + 0x18);
      if (*(char *)(lVar18 + 0x2f) < '\0') {
        plVar14 = (long *)*plVar14;
      }
      *(long *)puVar21[0xb] = (long)plVar14;
    }
    puVar22 = puVar17;
    FUN_00385ea8(lVar18);
    param_2 = (int)puVar22;
    bVar3 = *(byte *)(param_1 + 2);
  }
  if ((bVar3 >> 4 & 1) != 0) {
    if (puVar17[0x23] != 0) {
      func_0x00772c9c();
      goto LAB_0038b744;
    }
    puVar17[0x23] = puVar21[0xf];
    unaff_x22 = (long *)puVar21[0xc];
    puVar17[0x20] = unaff_x22;
    FUN_0036b714(unaff_x22);
    FUN_003ecf38(unaff_x22);
    *(undefined1 *)(unaff_x22 + 0x25) = 1;
    uVar23 = puVar21[0xd];
    puVar17[0x22] = puVar21[0xe];
    puVar17[0x21] = uVar23;
    puVar22 = puVar17;
    FUN_003861fc(lVar18);
    param_2 = (int)puVar22;
    bVar3 = *(byte *)(param_1 + 2);
  }
  if ((bVar3 >> 5 & 1) == 0) {
LAB_0038b698:
    if (puVar20 != (ulong *)0x0) {
      uStack_100 = 0;
      FUN_00384d78(lVar18);
    }
    plVar14 = (long *)puVar17[2];
    do {
      lVar16 = *plVar14;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *plVar14 = lVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar16 + -1 == 0) {
      FUN_004005ec();
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_70) {
      ___stack_chk_fail();
      if (param_2 != 0) {
        func_0x0040cf10();
        if (((ulong)unaff_x23 & 1) == 0) {
          FUN_0033c494(auStack_d8);
          puStack_98 = &uStack_f8;
          FUN_0033d548(&puStack_98);
        }
        else {
          FUN_0033c494(auStack_d8);
        }
      }
      plVar9 = plVar14;
      __Unwind_Resume();
      pcStack_108 = FUN_0038b804;
      lVar16 = plVar9[0x11];
      uVar19 = plVar9[5];
      plStack_130 = unaff_x22;
      puStack_128 = param_1;
      lStack_120 = lVar18;
      plStack_118 = plVar14;
      puStack_110 = &stack0xfffffffffffffff0;
      if (uVar19 != 0) {
        if ((uVar19 & 1) != 0) {
          piVar10 = (int *)(uVar19 - 1);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar5) {
              *piVar10 = *piVar10 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        uStack_138 = uVar19;
        FUN_003853fc(lVar16,&uStack_138,0);
        if ((uVar19 & 1) != 0) {
          FUN_0055293c(uVar19);
        }
      }
      if ((char)plVar9[6] != '\0') {
        lVar18 = plVar9[7];
        *(long *)(lVar16 + 0x2d8) = plVar9[8];
        *(long *)(lVar16 + 0x2d0) = lVar18;
      }
      if (plVar9[0xc] != 0) {
        func_0x003bcebc(*(undefined8 *)(lVar16 + 0x10));
      }
      if (plVar9[0xd] != 0) {
        func_0x003bcec8(*(undefined8 *)(lVar16 + 0x10));
      }
      if (plVar9[0xe] != 0 || plVar9[0xf] != 0) {
        FUN_00387c9c(lVar16);
        FUN_00383c14(lVar16,0x10);
      }
      puVar17 = (undefined8 *)plVar9[1];
      if (puVar17 != (undefined8 *)0x0) {
        plVar9[1] = 0;
        puStack_140 = puVar17;
        FUN_003fb030(lVar16 + 0x2e0,(int)plVar9[2],&puStack_140);
        puVar17 = puStack_140;
        puStack_140 = (undefined8 *)0x0;
        if (puVar17 != (undefined8 *)0x0) {
          (**(code **)*puVar17)();
        }
      }
      if (plVar9[3] != 0) {
        FUN_003fb0ec(lVar16 + 0x2e0);
      }
      uVar19 = plVar9[4];
      if (uVar19 != 0) {
        if ((uVar19 & 1) != 0) {
          piVar10 = (int *)(uVar19 - 1);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar5) {
              *piVar10 = *piVar10 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        uStack_148 = uVar19;
        FUN_003853fc(lVar16,&uStack_148,1);
        if ((uVar19 & 1) != 0) {
          FUN_0055293c(uVar19);
        }
        uStack_150 = plVar9[4];
        if ((uStack_150 & 1) != 0) {
          piVar10 = (int *)(uStack_150 - 1);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar5) {
              *piVar10 = *piVar10 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        FUN_00385754(lVar16,&uStack_150);
        if ((uStack_150 & 1) != 0) {
          FUN_0055293c();
        }
      }
      uStack_160 = 0;
      FUN_003c1e6c(&uStack_151,*plVar9,&uStack_160);
      if ((uStack_160 & 1) != 0) {
        FUN_0055293c();
      }
      plVar14 = (long *)(lVar16 + 8);
      do {
        lVar18 = *plVar14;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *plVar14 = lVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((lVar16 != 0) && (lVar18 == 1)) {
        FUN_003827f4(lVar16);
        __ZdlPv();
      }
      return;
    }
    return;
  }
  if (puVar17[0x26] == 0) {
    puVar17[0x26] = puVar21[0x11];
    if (puVar17[0x25] == 0) {
      puVar17[0x25] = puVar21[0x12];
      puVar17[0x24] = puVar21[0x10];
      *(undefined1 *)(puVar17 + 0x31) = 1;
      puVar21 = puVar17;
      FUN_003861fc(lVar18);
      param_2 = (int)puVar21;
      goto LAB_0038b698;
    }
    func_0x00772c34();
  }
  else {
    func_0x00772c68();
  }
LAB_0038b744:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x38b748);
  (*pcVar6)();
}



/* Entry: 0038b804; end: 0038ba3f;  */

void FUN_0038b804(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uStack_60;
  undefined1 uStack_51;
  ulong uStack_50;
  ulong uStack_48;
  undefined8 *puStack_40;
  ulong uStack_38;
  
  lVar7 = param_1[0x11];
  uVar8 = param_1[5];
  if (uVar8 != 0) {
    if ((uVar8 & 1) != 0) {
      piVar4 = (int *)(uVar8 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar3) {
          *piVar4 = *piVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_38 = uVar8;
    FUN_003853fc(lVar7,&uStack_38,0);
    if ((uVar8 & 1) != 0) {
      FUN_0055293c(uVar8);
    }
  }
  if (*(char *)(param_1 + 6) != '\0') {
    uVar9 = param_1[7];
    *(undefined8 *)(lVar7 + 0x2d8) = param_1[8];
    *(undefined8 *)(lVar7 + 0x2d0) = uVar9;
  }
  if (param_1[0xc] != 0) {
    func_0x003bcebc(*(undefined8 *)(lVar7 + 0x10));
  }
  if (param_1[0xd] != 0) {
    func_0x003bcec8(*(undefined8 *)(lVar7 + 0x10));
  }
  if (param_1[0xe] != 0 || param_1[0xf] != 0) {
    FUN_00387c9c(lVar7);
    FUN_00383c14(lVar7,0x10);
  }
  puVar5 = (undefined8 *)param_1[1];
  if (puVar5 != (undefined8 *)0x0) {
    param_1[1] = 0;
    puStack_40 = puVar5;
    FUN_003fb030(lVar7 + 0x2e0,*(undefined4 *)(param_1 + 2),&puStack_40);
    puVar5 = puStack_40;
    puStack_40 = (undefined8 *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)();
    }
  }
  if (param_1[3] != 0) {
    FUN_003fb0ec(lVar7 + 0x2e0);
  }
  uVar8 = param_1[4];
  if (uVar8 != 0) {
    if ((uVar8 & 1) != 0) {
      piVar4 = (int *)(uVar8 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar3) {
          *piVar4 = *piVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_48 = uVar8;
    FUN_003853fc(lVar7,&uStack_48,1);
    if ((uVar8 & 1) != 0) {
      FUN_0055293c(uVar8);
    }
    uStack_50 = param_1[4];
    if ((uStack_50 & 1) != 0) {
      piVar4 = (int *)(uStack_50 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar3) {
          *piVar4 = *piVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_00385754(lVar7,&uStack_50);
    if ((uStack_50 & 1) != 0) {
      FUN_0055293c();
    }
  }
  uStack_60 = 0;
  FUN_003c1e6c(&uStack_51,*param_1,&uStack_60);
  if ((uStack_60 & 1) != 0) {
    FUN_0055293c();
  }
  plVar1 = (long *)(lVar7 + 8);
  do {
    lVar6 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((lVar7 != 0) && (lVar6 == 1)) {
    FUN_003827f4(lVar7);
    __ZdlPv();
  }
  return;
}



/* Entry: 0038ba40; end: 0038ba43;  */

long FUN_0038ba40(long param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uStack_30;
  undefined1 uStack_21;
  
  func_0x0039d228(*(undefined8 *)(param_1 + 8),param_1);
  func_0x0039d1e0(*(undefined8 *)(param_1 + 8),param_1);
  lVar6 = *(long *)(*(long *)(param_1 + 8) + 0xce8);
  if (lVar6 != 0) {
    if (*(char *)(*(long *)(param_1 + 8) + 0x628) == '\0') {
      if (*(char *)(param_1 + 0x16e) == '\0') goto LAB_00384294;
LAB_00384284:
      plVar7 = (long *)(lVar6 + 0x40);
    }
    else {
      if (*(char *)(param_1 + 0x16d) != '\0') goto LAB_00384284;
LAB_00384294:
      plVar7 = (long *)(lVar6 + 0x48);
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if ((*(char *)(param_1 + 0x168) == '\0') || (*(char *)(param_1 + 0x169) == '\0')) {
    if (*(int *)(param_1 + 0x9c) != 0) {
      uVar5 = 0x2c8;
      goto LAB_003844a4;
    }
  }
  else if (*(int *)(param_1 + 0x9c) != 0) {
    lVar6 = *(long *)(param_1 + 8) + 0xf8;
    func_0x0039d3ec();
    if (lVar6 != 0) {
      uVar5 = 0x2ca;
      goto LAB_003844a4;
    }
  }
  FUN_003ecf54(param_1 + 0x5a0);
  uVar8 = 0;
  do {
    if ((*(byte *)(param_1 + 0x98 + (uVar8 >> 3)) >> (ulong)((uint)uVar8 & 0x1f) & 1) != 0) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                   ,0x2d1,2,"%s stream %d still included in list %d");
      goto LAB_00384440;
    }
    uVar1 = (uint)uVar8 + 1;
    uVar8 = (ulong)uVar1;
  } while (uVar1 != 5);
  if (*(long *)(param_1 + 0xa8) == 0) {
    if (*(long *)(param_1 + 0xc0) == 0) {
      if (*(long *)(param_1 + 0xf0) == 0) {
        if (*(long *)(param_1 + 0x118) == 0) {
          if (*(long *)(param_1 + 0x128) == 0) {
            FUN_003ecf54(param_1 + 0x728);
            lVar6 = *(long *)(param_1 + 8);
            plVar7 = (long *)(lVar6 + 8);
            do {
              lVar9 = *plVar7;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar3) {
                *plVar7 = lVar9 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((lVar6 != 0) && (lVar9 == 1)) {
              FUN_003827f4();
              __ZdlPv();
            }
            uStack_30 = 0;
            FUN_003c1e6c(&uStack_21,*(undefined8 *)(param_1 + 0x40),&uStack_30);
            if ((uStack_30 & 1) != 0) {
              FUN_0055293c();
            }
            if (0 < *(long *)(param_1 + 0x710)) {
              *(long *)(*(long *)(param_1 + 0x6f8) + 8) =
                   *(long *)(*(long *)(param_1 + 0x6f8) + 8) - *(long *)(param_1 + 0x710);
            }
            if ((*(ulong *)(param_1 + 0x6d8) & 1) != 0) {
              FUN_0055293c();
            }
            FUN_0036d7cc(param_1 + 0x398);
            FUN_0036d7cc(param_1 + 400);
            if ((*(ulong *)(param_1 + 0x178) & 1) != 0) {
              FUN_0055293c();
            }
            if ((*(ulong *)(param_1 + 0x170) & 1) != 0) {
              FUN_0055293c();
            }
            return param_1;
          }
          uVar5 = 0x2db;
        }
        else {
          uVar5 = 0x2da;
        }
      }
      else {
        uVar5 = 0x2d9;
      }
    }
    else {
      uVar5 = 0x2d8;
    }
  }
  else {
    uVar5 = 0x2d7;
  }
LAB_003844a4:
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
               ,uVar5,2,"assertion failed: %s");
LAB_00384440:
  _abort();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x384448);
  (*pcVar4)();
}



/* Entry: 0038ba44; end: 0038bb67;  */

void FUN_0038ba44(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_39;
  ulong uStack_38;
  ulong uStack_30;
  undefined8 *puStack_28;
  
  *(undefined1 *)(param_1 + 0x94) = 1;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_58 = 0;
  FUN_003b646c(&uStack_38,2,"Transport destroyed",0x13,&uStack_39,&uStack_58);
  FUN_003be104(&uStack_30,&uStack_38,0xc,*(undefined4 *)(param_1 + 0x90));
  FUN_00385754(param_1,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    FUN_0055293c();
  }
  if ((uStack_38 & 1) != 0) {
    FUN_0055293c();
  }
  puStack_28 = &uStack_58;
  FUN_0033d548(&puStack_28);
  plVar3 = *(long **)(param_1 + 0x30);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  FUN_0038bb68((long *)(param_1 + 0x30));
  plVar3 = (long *)(param_1 + 8);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    FUN_003827f4(param_1);
    __ZdlPv();
  }
  return;
}



/* Entry: 0038bb68; end: 0038bbc3;  */

void FUN_0038bb68(undefined8 *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00779e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_00998b98)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 0038bbc4; end: 0038bbef;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_0038bbc4(undefined8 param_1,ulong param_2,undefined8 param_3,byte *param_4)

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



/* Entry: 0038bbf0; end: 0038bc63;  */

void FUN_0038bbf0(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  dword *pdVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  pcVar1 = pcRam0000000000b5e760;
  if (pcRam0000000000b5e760 != (code *)0x0 && lRam0000000000b5e768 != 0) {
    pdVar2 = &MACH_HEADER.flags;
    __Znwm();
    *(undefined8 *)(pdVar2 + 2) = 0;
    *(undefined8 *)(pdVar2 + 4) = 0;
    *(undefined8 *)pdVar2 = 0;
    uVar3 = *param_2;
    (*pcVar1)();
    uVar5 = param_2[0x10f];
    uVar4 = *param_1;
    *(undefined8 *)pdVar2 = uVar3;
    *(undefined8 *)(pdVar2 + 2) = uVar4;
    *(undefined8 *)(pdVar2 + 4) = uVar5;
    *param_1 = pdVar2;
  }
  return;
}



/* Entry: 0038bc64; end: 0038bd23;  */

void FUN_0038bc64(undefined8 *param_1,long param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined8 *puVar6;
  ulong uStack_48;
  
  pcVar3 = pcRam0000000000b5e768;
  while (param_1 != (undefined8 *)0x0) {
    pcRam0000000000b5e768 = pcVar3;
    if (pcVar3 != (code *)0x0) {
      if (param_2 != 0) {
        *(int *)(param_2 + 0x3c0) = (int)param_1[2];
      }
      uVar4 = *param_1;
      uStack_48 = *param_3;
      if ((uStack_48 & 1) != 0) {
        piVar5 = (int *)(uStack_48 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar2) {
            *piVar5 = *piVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      (*pcVar3)(uVar4,param_2,&uStack_48);
      if ((uStack_48 & 1) != 0) {
        FUN_0055293c();
      }
    }
    puVar6 = (undefined8 *)param_1[1];
    __ZdlPv(param_1);
    param_1 = puVar6;
    pcVar3 = pcRam0000000000b5e768;
  }
  pcRam0000000000b5e768 = pcVar3;
  return;
}



/* Entry: 0038bd24; end: 0038bdbf;  */

undefined8 *
FUN_0038bd24(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *param_1 = param_4;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = param_3;
  FUN_003fac68(param_1 + 3);
  uVar2 = 0x4010000000000000;
  uStack_58 = 0x4020000000000000;
  uStack_60 = 0x4010000000000000;
  uStack_50 = 0;
  FUN_0038bdc0(param_1);
  puVar1 = param_1 + 0xc;
  uStack_38 = 0x4039000000000000;
  uStack_40 = 0xbff0000000000000;
  uStack_30 = 0x4024000000000000;
  uStack_48 = uVar2;
  func_0x003ff2e8(puVar1,&uStack_60);
  func_0x003c1f6c();
  uVar2 = *puVar1;
  FUN_003c1e28();
  param_1[0x17] = uVar2;
  param_1[0x19] = 0xffff;
  param_1[0x18] = 0xffff;
  param_1[0x1b] = 0xffff;
  param_1[0x1a] = 0x4000;
  *(undefined4 *)(param_1 + 0x1c) = 0xffff;
  return param_1;
}



/* Entry: 0038bdc0; end: 0038be87;  */

double FUN_0038bdc0(undefined8 *param_1)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if (*(long *)*param_1 == 0) {
    dVar2 = 0.0;
  }
  else {
    dVar2 = *(double *)(*(long *)*param_1 + 0x18);
    FUN_003d6c4c();
  }
  dVar3 = (double)(long)param_1[5];
  _log2();
  dVar3 = dVar3 + 1.0;
  bVar1 = false;
  if ((dVar2 < 0.1) && (bVar1 = false, !NAN(dVar3))) {
    bVar1 = dVar3 < 22.0;
  }
  if (bVar1) {
    dVar3 = (dVar2 * (dVar3 + -22.0)) / 0.1 + 22.0;
  }
  else if (0.8 < dVar2) {
    dVar2 = (dVar2 + -0.8) / 0.09999999999999998;
    dVar4 = 1.0 - dVar2;
    if (1.0 <= dVar2) {
      dVar4 = 0.0;
    }
    dVar3 = dVar4 * dVar3;
  }
  return dVar3;
}



/* Entry: 0038be88; end: 0038befb;  */

undefined8 *
FUN_0038be88(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *param_1 = param_4;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = param_3;
  FUN_003fac68(param_1 + 3);
  uVar2 = 0x4010000000000000;
  uStack_58 = 0x4020000000000000;
  uStack_60 = 0x4010000000000000;
  uStack_50 = 0;
  FUN_0038bdc0(param_1);
  puVar1 = param_1 + 0xc;
  uStack_38 = 0x4039000000000000;
  uStack_40 = 0xbff0000000000000;
  uStack_30 = 0x4024000000000000;
  uStack_48 = uVar2;
  func_0x003ff2e8(puVar1,&uStack_60);
  func_0x003c1f6c();
  uVar2 = *puVar1;
  FUN_003c1e28();
  param_1[0x17] = uVar2;
  param_1[0x19] = 0xffff;
  param_1[0x18] = 0xffff;
  param_1[0x1b] = 0xffff;
  param_1[0x1a] = 0x4000;
  *(undefined4 *)(param_1 + 0x1c) = 0xffff;
  return param_1;
}



/* Entry: 0038befc; end: 0038bf27;  */

void FUN_0038befc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_1;
  uStack_18 = param_2;
  FUN_0038bf28(param_1,param_2,&uStack_20,FUN_0038c530);
  return;
}



/* Entry: 0038bf28; end: 0038c047;  */

undefined1  [16]
FUN_0038bf28(ulong *param_1,long *param_2,ulong param_3,ulong **param_4,code *param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulong *puStack_70;
  ulong uStack_68;
  byte bStack_59;
  ulong uStack_58;
  code *pcStack_50;
  long lStack_48;
  code *pcStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  if (*(long *)(*param_2 + 0xd8) < (long)param_3) {
    pcStack_50 = FUN_00560cd0;
    pcStack_40 = FUN_00560cd0;
    puVar4 = &uStack_58;
    uStack_58 = param_3;
    lStack_48 = *(long *)(*param_2 + 0xd8);
    FUN_0056189c(&puStack_70,"frame of size %lld overflows local window of %lld",0x31,puVar4,2);
    uVar3 = uStack_68;
    param_4 = (ulong **)puStack_70;
    if (-1 < (char)bStack_59) {
      uVar3 = (ulong)bStack_59;
      param_4 = &puStack_70;
    }
    func_0x005535d4(param_1,param_4,uVar3);
    if ((char)bStack_59 < '\0') {
      param_4 = (ulong **)puStack_70;
      __ZdlPv();
    }
  }
  else {
    uVar3 = param_3;
    puVar4 = (ulong *)param_4;
    (*param_5)(&uStack_58);
    if (uStack_58 == 0) {
      *(ulong *)(*param_2 + 0xd8) = *(long *)(*param_2 + 0xd8) - param_3;
    }
    *param_1 = uStack_58;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_38) {
    ___stack_chk_fail();
    if ((char)bStack_59 < '\0') {
      __ZdlPv(puStack_70);
    }
    __Unwind_Resume();
    uVar1 = (long)param_4[0x19] + (long)param_4[1];
    if (0x7ffffffe < (long)uVar1) {
      uVar1 = 0x7fffffff;
    }
    uVar2 = 0x100;
    if ((long)(uVar1 >> 1 & 0x7fffffff) <= (long)param_4[0x1b]) {
      uVar2 = uVar3 & 0xff00;
    }
    auVar6._0_8_ = uVar2 | uVar3 & 0xffffffffffff00ff;
    auVar6._8_8_ = (ulong)puVar4 & 0xffffffff;
    return auVar6;
  }
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = param_4;
  return auVar5;
}



/* Entry: 0038c048; end: 0038c087;  */

undefined1  [16] FUN_0038c048(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  uVar1 = *(long *)(param_1 + 200) + *(long *)(param_1 + 8);
  if (0x7ffffffe < (long)uVar1) {
    uVar1 = 0x7fffffff;
  }
  uVar2 = 0x100;
  if ((long)(uVar1 >> 1 & 0x7fffffff) <= *(long *)(param_1 + 0xd8)) {
    uVar2 = param_2 & 0xff00;
  }
  auVar3._0_8_ = uVar2 | param_2 & 0xffffffffffff00ff;
  auVar3._8_8_ = param_3 & 0xffffffff;
  return auVar3;
}



/* Entry: 0038c088; end: 0038c15b;  */

double FUN_0038c088(double param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  puVar1 = param_2;
  func_0x003c1f6c();
  uVar2 = *puVar1;
  FUN_003c1e28();
  uVar3 = param_2[0x17];
  if (uVar2 == 0x7fffffffffffffff || uVar3 == 0x8000000000000001) {
LAB_0038c0c8:
    dVar4 = 9.223372036854776e+18;
    goto LAB_0038c0e8;
  }
  if (uVar2 == 0x8000000000000000 || uVar3 == 0x8000000000000000) {
LAB_0038c0e0:
    dVar4 = -9.223372036854776e+18;
  }
  else {
    if ((long)uVar2 < 1) {
      if ((long)-uVar3 < (long)(-0x8000000000000000 - uVar2)) goto LAB_0038c0e0;
    }
    else if ((long)(uVar2 ^ 0x7fffffffffffffff) < (long)-uVar3) goto LAB_0038c0c8;
    dVar4 = (double)(long)(uVar2 - uVar3);
  }
LAB_0038c0e8:
  param_1 = param_1 - (double)param_2[0xe];
  param_2[0x17] = uVar2;
  dVar5 = 0.1;
  if (dVar4 / 1000.0 <= 0.1) {
    dVar5 = dVar4 / 1000.0;
  }
  if (0.0 < dVar5) {
    dVar6 = (double)param_2[0xc];
    dVar7 = (double)param_2[0xd] + (dVar6 + param_1) * dVar5 * 0.5;
    dVar9 = (double)param_2[0x16];
    dVar4 = dVar9;
    if (dVar7 <= dVar9) {
      dVar4 = dVar7;
    }
    dVar8 = -dVar9;
    if (-dVar9 <= dVar7) {
      dVar8 = dVar4;
    }
    dVar6 = (double)param_2[0x11] * dVar8 + param_1 * (double)param_2[0x10] +
            ((param_1 - dVar6) / dVar5) * (double)param_2[0x12];
    dVar5 = (double)param_2[0xe] + ((double)param_2[0xf] + dVar6) * dVar5 * 0.5;
    dVar4 = (double)param_2[0x15];
    if (dVar5 <= (double)param_2[0x15]) {
      dVar4 = dVar5;
    }
    param_2[0xc] = (ulong)param_1;
    param_2[0xd] = (ulong)dVar8;
    dVar7 = (double)param_2[0x14];
    if ((double)param_2[0x14] <= dVar5) {
      dVar7 = dVar4;
    }
    param_2[0xe] = (ulong)dVar7;
    param_2[0xf] = (ulong)dVar6;
    return dVar7;
  }
  return (double)param_2[0xe];
}



/* Entry: 0038c15c; end: 0038c337;  */

undefined1  [16] FUN_0038c15c(double param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  
  if (*(char *)(param_2 + 0x10) == '\0') {
    uVar5 = 0;
    uVar3 = 0;
    uVar8 = 0;
    lVar7 = 0;
    lVar6 = *(long *)(param_2 + 200);
  }
  else {
    FUN_0038bdc0(param_2);
    FUN_0038c088(param_2);
    _exp2();
    if (plRam0000000000b65d10 != (long *)0x0) {
      param_1 = (double)*(long *)(param_2 + 200);
      (**(code **)(*plRam0000000000b65d10 + 0x10))();
    }
    dVar11 = 1073741824.0;
    if (param_1 <= 1073741824.0) {
      dVar11 = param_1;
    }
    dVar9 = 128.0;
    if (128.0 <= param_1) {
      dVar9 = dVar11;
    }
    uVar5 = (uint)dVar9;
    lVar4 = (long)(int)uVar5;
    lVar6 = *(long *)(param_2 + 200);
    if (lVar4 == lVar6) {
      uVar5 = 0;
      lVar7 = 0;
      lVar6 = lVar4;
    }
    else {
      lVar7 = SUB168(SEXT816(lVar6) * SEXT816(-0x6666666666666667),8);
      if ((lVar7 >> 1) - (lVar7 >> 0x3f) < lVar4 - lVar6 && lVar4 - lVar6 < lVar6 / 5) {
        uVar5 = 0;
        lVar7 = 0;
      }
      else {
        *(long *)(param_2 + 200) = lVar4;
        lVar7 = 2;
        lVar6 = lVar4;
      }
    }
    dVar9 = *(double *)(param_2 + 0x50);
    dVar11 = 2147483647.0;
    if (dVar9 <= 2147483647.0) {
      dVar11 = dVar9;
    }
    dVar10 = 0.0;
    if (0.0 <= dVar9) {
      dVar10 = dVar11;
    }
    uVar2 = (int)dVar10 / 1000;
    if ((int)dVar10 / 1000 <= (int)(uint)lVar6) {
      uVar2 = (uint)lVar6;
    }
    if (0xfffffe < (int)uVar2) {
      uVar2 = 0xffffff;
    }
    if ((int)uVar2 < 0x4001) {
      uVar2 = 0x4000;
    }
    uVar3 = (ulong)uVar2;
    uVar8 = *(ulong *)(param_2 + 0xd0);
    if (uVar3 == uVar8) {
      uVar3 = 0;
      uVar8 = 0;
    }
    else {
      lVar4 = SUB168(SEXT816((long)uVar8) * SEXT816(-0x6666666666666667),8);
      if ((lVar4 >> 1) - (lVar4 >> 0x3f) < (long)(uVar3 - uVar8) &&
          (long)(uVar3 - uVar8) < (long)uVar8 / 5) {
        uVar3 = 0;
        uVar8 = 0;
      }
      else {
        *(ulong *)(param_2 + 0xd0) = uVar3;
        uVar8 = 0x2000000;
      }
    }
  }
  uVar1 = lVar6 + *(long *)(param_2 + 8);
  if (0x7ffffffe < (long)uVar1) {
    uVar1 = 0x7fffffff;
  }
  auVar12._0_8_ =
       uVar8 | (ulong)uVar5 << 0x20 | lVar7 << 0x10 |
       (ulong)(*(long *)(param_2 + 0xd8) < (long)(uVar1 >> 1 & 0x7fffffff)) << 8;
  auVar12._8_8_ = uVar3;
  return auVar12;
}



/* Entry: 0038c338; end: 0038c41f;  */

long * FUN_0038c338(long *param_1)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_38;
  
  lVar4 = *param_1;
  plVar2 = param_1;
  lStack_38 = lVar4;
  FUN_0038c420();
  if ((char)param_1[5] != '\0') {
    *(undefined1 *)(param_1 + 5) = 0;
  }
  if ((int)plVar2 != 0) {
    lVar3 = param_1[3];
    if (0 < lVar3) {
      *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) - lVar3;
      lVar3 = param_1[3];
    }
    lVar3 = lVar3 + ((ulong)plVar2 & 0xffffffff);
    param_1[3] = lVar3;
    if (0 < lVar3) {
      *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + lVar3;
    }
  }
  FUN_0038c420();
  if ((int)param_1 == 0) {
    lStack_38 = 0;
    FUN_0038a000(&lStack_38);
    return plVar2;
  }
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/flow_control.cc"
               ,0x10f,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x38c40c);
  (*pcVar1)();
}



/* Entry: 0038c420; end: 0038c487;  */

uint FUN_0038c420(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 == 0) {
    if (*(char *)(param_1 + 0x28) == '\0') {
      lVar2 = *(long *)(param_1 + 0x18);
      lVar3 = lVar2;
    }
    else {
      lVar2 = *(long *)(param_1 + 0x18);
      lVar3 = lVar2;
      if (lVar2 < -*(long *)(param_1 + 0x20)) {
        lVar3 = -*(long *)(param_1 + 0x20);
      }
    }
  }
  else {
    plVar1 = (long *)&UNK_007f6370;
    if (lVar3 < 0x100001) {
      plVar1 = (long *)(param_1 + 8);
    }
    lVar2 = *(long *)(param_1 + 0x18);
    lVar3 = *plVar1;
  }
  lVar3 = lVar3 - lVar2;
  if (0x7ffffffe < lVar3) {
    lVar3 = 0x7fffffff;
  }
  return (uint)lVar3 & ((uint)(lVar3 >> 0x3f) ^ 0xffffffff);
}



/* Entry: 0038c488; end: 0038c507;  */

undefined1  [16] FUN_0038c488(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  uVar1 = param_1;
  FUN_0038c420();
  uVar2 = param_2;
  if ((uint)uVar1 != 0) {
    if (*(long *)(param_1 + 8) < 1) {
      if ((uint)uVar1 >> 0xd != 0) {
        uVar2 = 1;
        goto LAB_0038c4ec;
      }
    }
    else {
      uVar2 = 1;
      if (((uVar1 >> 0xd & 0x7ffff) != 0) || (*(long *)(param_1 + 0x18) < 0)) goto LAB_0038c4ec;
    }
    uVar2 = 2;
  }
LAB_0038c4ec:
  auVar3._8_8_ = param_3 & 0xffffffff;
  auVar3._0_8_ = param_2 & 0xffffffffffffff00 | uVar2 & 0xff;
  return auVar3;
}



/* Entry: 0038c508; end: 0038c52f;  */

void FUN_0038c508(long **param_1,char *param_2,char *param_3,undefined8 *param_4,long *param_5,
                 char *param_6)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  long **pplVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined4 uVar15;
  long lVar16;
  undefined8 *extraout_x8;
  long *plVar17;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  char *pcVar18;
  undefined8 *extraout_x8_02;
  long *plVar19;
  long lVar20;
  long lVar21;
  long **unaff_x20;
  char *pcVar22;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 uStack_281;
  char *pcStack_280;
  undefined1 *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_248;
  char *pcStack_240;
  char *pcStack_238;
  char *pcStack_230;
  char *pcStack_228;
  undefined1 *****pppppuStack_220;
  code *pcStack_218;
  char *pcStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 uStack_1e9;
  char *pcStack_1e8;
  ulong uStack_1e0;
  byte bStack_1d1;
  char *pcStack_1d0;
  byte bStack_1c5;
  uint uStack_1c4;
  char *pcStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  long *plStack_198;
  char *pcStack_190;
  char *pcStack_188;
  char *pcStack_180;
  long *plStack_178;
  undefined1 ****ppppuStack_170;
  code *pcStack_168;
  long lStack_158;
  undefined1 uStack_150;
  undefined1 uStack_14f;
  undefined1 uStack_14e;
  undefined1 uStack_14d;
  undefined1 uStack_14c;
  undefined1 uStack_14b;
  undefined1 uStack_14a;
  undefined1 uStack_149;
  undefined1 *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined1 uStack_130;
  undefined1 uStack_12f;
  undefined1 uStack_12e;
  byte bStack_12d;
  undefined1 uStack_12c;
  undefined1 uStack_12b;
  undefined1 uStack_12a;
  undefined1 uStack_129;
  undefined1 *puStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined1 ***pppuStack_e0;
  code *pcStack_d8;
  long *plStack_d0;
  char *pcStack_c8;
  byte bStack_b9;
  ulong uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  long *plStack_88;
  undefined1 **ppuStack_80;
  code *pcStack_78;
  long *plStack_70;
  char *pcStack_68;
  byte bStack_59;
  long lStack_58;
  code *pcStack_50;
  long lStack_48;
  code *pcStack_40;
  long lStack_38;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  if (-1 < (long)param_2) {
    lVar16 = (long)param_1[1];
    *(char **)(lVar16 + 0x20) = param_2;
    *(undefined1 *)(lVar16 + 0x28) = 1;
    return;
  }
  func_0x00772dd4();
  pcStack_18 = FUN_0038c530;
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar19 = *param_1;
  lVar20 = (long)param_1[1];
  plVar17 = (long *)plVar19[1];
  lVar21 = plVar17[3];
  lVar16 = lVar21 + (ulong)*(uint *)(*plVar17 + 0xe0);
  if (lVar16 < lVar20) {
    pcStack_50 = FUN_00560cd0;
    pcStack_40 = FUN_00560cd0;
    param_3 = (char *)&lStack_58;
    param_4 = (undefined8 *)((long)&MACH_HEADER.magic + 2);
    lStack_58 = lVar20;
    lStack_48 = lVar16;
    puStack_20 = &stack0xfffffffffffffff0;
    FUN_0056189c(&plStack_70,"frame of size %lld overflows local window of %lld",0x31);
    param_2 = pcStack_68;
    param_1 = (long **)plStack_70;
    if (-1 < (char)bStack_59) {
      param_2 = (char *)(ulong)bStack_59;
      param_1 = &plStack_70;
    }
    func_0x005535d4(extraout_x8);
    unaff_x20 = &plStack_70;
    if ((char)bStack_59 < '\0') {
      param_1 = (long **)plStack_70;
      __ZdlPv();
      unaff_x20 = &plStack_70;
    }
  }
  else {
    if (lVar20 != 0) {
      if (0 < lVar21) {
        *(long *)(*plVar19 + 8) = *(long *)(*plVar19 + 8) - lVar21;
        lVar21 = plVar17[3];
      }
      lVar21 = lVar21 - lVar20;
      plVar17[3] = lVar21;
      if (0 < lVar21) {
        *(long *)(*plVar19 + 8) = *(long *)(*plVar19 + 8) + lVar21;
      }
    }
    lVar20 = plVar17[1];
    lVar16 = (long)param_1[1];
    if (lVar20 <= (long)param_1[1]) {
      lVar16 = lVar20;
    }
    plVar17[1] = lVar20 - lVar16;
    *extraout_x8 = 0;
    puStack_20 = &stack0xfffffffffffffff0;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if ((char)bStack_59 < '\0') {
    __ZdlPv(plStack_70);
  }
  pplVar4 = param_1;
  __Unwind_Resume();
  pcStack_78 = FUN_0038c684;
  lStack_98 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar3 = (uint)pplVar4;
  puStack_90 = (undefined1 *)unaff_x20;
  plStack_88 = (long *)param_1;
  ppuStack_80 = &puStack_20;
  if (uVar3 < 2) {
    if (uVar3 != 0) {
      param_3[0x16d] = 1;
    }
    param_3[0x6c8] = uVar3 != 0;
    *extraout_x8_00 = 0;
  }
  else {
    uStack_b8 = (ulong)pplVar4 & 0xffffffff;
    uStack_b0 = 0x560664;
    uStack_a8 = (ulong)param_2 & 0xffffffff;
    uStack_a0 = 0x5606ec;
    param_3 = (char *)&uStack_b8;
    param_4 = (undefined8 *)((long)&MACH_HEADER.magic + 2);
    FUN_0056189c(&plStack_d0,"unsupported data flags: 0x%02x stream: %d",0x29);
    param_2 = pcStack_c8;
    pplVar4 = (long **)plStack_d0;
    if (-1 < (char)bStack_b9) {
      param_2 = (char *)(ulong)bStack_b9;
      pplVar4 = &plStack_d0;
    }
    func_0x005535d4(extraout_x8_00);
    if ((char)bStack_b9 < '\0') {
      pplVar4 = (long **)plStack_d0;
      __ZdlPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  if ((char)bStack_b9 < '\0') {
    __ZdlPv(plStack_d0);
  }
  __Unwind_Resume();
  pcStack_d8 = FUN_0038c790;
  lStack_118 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar5 = (char *)((long)&MACH_HEADER.cpusubtype + 1);
  pcVar9 = param_2;
  pcVar11 = param_3;
  puVar12 = param_4;
  plVar19 = param_5;
  pppuStack_e0 = &ppuStack_80;
  FUN_003ec0c8(&lStack_138);
  iVar14 = (int)plVar19;
  if (((ulong)param_3 & 0xff000000) == 0) {
    uStack_149 = (undefined1)((ulong)pplVar4 >> 0x10);
    uStack_14a = (undefined1)((ulong)pplVar4 >> 0x18);
    uStack_14e = (undefined1)((ulong)param_3 >> 8);
    uStack_14f = (undefined1)((ulong)param_3 >> 0x10);
    if (lStack_138 == 0) {
      uStack_12c = 0;
      uStack_12b = (int)param_4 != 0;
      puStack_128 = (undefined1 *)
                    ((ulong)puStack_128 & 0xffffffffffff0000 |
                    (ulong)((((uint)pplVar4 & 0xff00ff00) >> 8 | ((uint)pplVar4 & 0xff00ff) << 8) &
                           0xffff));
      pcVar5 = param_3;
    }
    else {
      *puStack_128 = uStack_14f;
      puStack_128[1] = uStack_14e;
      puStack_128[2] = (char)param_3;
      puStack_128[3] = 0;
      puStack_128[4] = (int)param_4 != 0;
      puStack_128[5] = uStack_14a;
      puStack_128[6] = uStack_149;
      puStack_128[7] = (char)((ulong)pplVar4 >> 8);
      puStack_128[8] = (char)pplVar4;
      pcVar5 = (char *)(ulong)bStack_12d;
      uStack_14f = uStack_12f;
      uStack_14e = uStack_12e;
      uStack_14a = uStack_12a;
      uStack_149 = uStack_129;
    }
    lStack_158 = lStack_138;
    uStack_150 = uStack_130;
    uStack_14d = SUB81(pcVar5,0);
    uStack_140 = uStack_120;
    uStack_14c = uStack_12c;
    uStack_14b = uStack_12b;
    puStack_148 = puStack_128;
    FUN_003ecb34(param_6,&lStack_158);
    pcVar9 = (char *)((ulong)param_3 & 0xffffffff);
    pcVar5 = param_2;
    pcVar11 = param_6;
    func_0x003ed5ac();
    *param_5 = *param_5 + 9;
    param_5[1] = param_5[1] + ((ulong)param_3 & 0xffffffff);
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_118) {
      return;
    }
  }
  else {
    func_0x00772e0c();
  }
  ___stack_chk_fail();
  pcStack_168 = FUN_0038c910;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_00999f88;
  pcStack_1c0 = (char *)0x0;
  puVar13 = puVar12;
  puStack_1a0 = param_4;
  plStack_198 = (long *)pplVar4;
  pcStack_190 = param_2;
  pcStack_188 = param_6;
  pcStack_180 = param_3;
  plStack_178 = param_5;
  ppppuStack_170 = &pppuStack_e0;
  if (*(ulong *)(pcVar5 + 0x5c0) < 5) {
    if (pcVar9 != (char *)0x0) {
      *(int *)pcVar9 = 5 - (int)*(ulong *)(pcVar5 + 0x5c0);
    }
    *(undefined4 *)(extraout_x8_01 + 1) = 0;
    pcVar6 = pcVar5;
    pcVar10 = pcVar9;
    pcVar18 = pcVar11;
    pcVar5 = param_3;
    pcVar11 = param_6;
    goto LAB_0038cb40;
  }
  pcVar7 = pcVar5 + 0x5a0;
  pcVar18 = (char *)&bStack_1c5;
  pcVar10 = (char *)((long)&MACH_HEADER.cputype + 1);
  pcVar6 = pcVar7;
  FUN_003ed97c();
  if (bStack_1c5 == 0) {
    if (puVar12 != (undefined8 *)0x0) {
      uVar15 = 0;
LAB_0038c9ac:
      *(undefined4 *)puVar12 = uVar15;
    }
LAB_0038c9b0:
    uVar3 = (uStack_1c4 & 0xff00ff00) >> 8 | (uStack_1c4 & 0xff00ff) << 8;
    pcVar22 = (char *)(ulong)(uVar3 >> 0x10 | uVar3 << 0x10);
    if (pcVar22 + 5 <= *(undefined1 **)(pcVar5 + 0x5c0)) {
      if (pcVar9 != (char *)0x0) {
        *(int *)pcVar9 = 0;
      }
      if (pcVar11 != (char *)0x0) {
        *(long *)(pcVar5 + 0x138) = *(long *)(pcVar5 + 0x138) + 5;
        *(char **)(pcVar5 + 0x140) = pcVar22 + *(long *)(pcVar5 + 0x140);
        FUN_003ed7cc(pcVar7,5,&bStack_1c5);
        pcVar18 = pcVar11;
        func_0x003ed3c8();
        pcVar6 = pcVar7;
        pcVar10 = pcVar22;
      }
      *extraout_x8_01 = 0;
      goto LAB_0038cb38;
    }
    uVar15 = 0;
    if (pcVar9 != (char *)0x0) {
      *(int *)pcVar9 = (int)(pcVar22 + 5) - (int)*(undefined1 **)(pcVar5 + 0x5c0);
    }
  }
  else {
    if (bStack_1c5 == 1) {
      if (puVar12 != (undefined8 *)0x0) {
        uVar15 = 0x80000000;
        goto LAB_0038c9ac;
      }
      goto LAB_0038c9b0;
    }
    uStack_1b0 = 0x560664;
    puStack_1b8 = (undefined8 *)(ulong)bStack_1c5;
    FUN_0056189c(&pcStack_1e8,"Bad GRPC frame type 0x%02x",0x1a,&puStack_1b8,1);
    pcVar11 = pcStack_1e8;
    if (-1 < (char)bStack_1d1) {
      uStack_1e0 = (ulong)bStack_1d1;
      pcVar11 = (char *)&pcStack_1e8;
    }
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_208 = 0;
    puVar13 = (undefined8 *)&uStack_1e9;
    iVar14 = (int)&uStack_208;
    FUN_003b646c(&pcStack_1d0,2,pcVar11,uStack_1e0);
    pcVar11 = pcStack_1d0;
    if (pcStack_1d0 != (char *)0x0) {
      pcStack_1c0 = pcStack_1d0;
      pcStack_1d0 = segment_command_00000020.segname + 0xe;
    }
    puStack_1b8 = &uStack_208;
    FUN_0033d548(&puStack_1b8);
    if ((char)bStack_1d1 < '\0') {
      __ZdlPv(pcStack_1e8);
    }
    pcStack_210 = pcVar11;
    if (((ulong)pcVar11 & 1) != 0) {
      pcVar18 = pcVar11 + -1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pcVar18,0x10);
        if (bVar2) {
          *(int *)pcVar18 = *(int *)pcVar18 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    pcVar18 = (char *)(ulong)*(uint *)(pcVar5 + 0x9c);
    pcVar10 = (char *)((long)&MACH_HEADER.magic + 2);
    FUN_003be104(&pcStack_1e8,&pcStack_210);
    pcVar5 = pcStack_1e8;
    pcVar6 = pcVar11;
    if (pcStack_1e8 == pcVar11) {
joined_r0x0038cb1c:
      pcVar5 = pcVar6;
      if (((ulong)pcVar11 & 1) != 0) {
        FUN_0055293c(pcVar11);
      }
    }
    else {
      pcStack_1c0 = pcStack_1e8;
      pcStack_1e8 = segment_command_00000020.segname + 0xe;
      if (((ulong)pcVar11 & 1) != 0) {
        FUN_0055293c(pcVar11);
        pcVar6 = pcVar5;
        pcVar11 = pcStack_1e8;
        goto joined_r0x0038cb1c;
      }
    }
    pcVar6 = pcStack_210;
    if (((ulong)pcStack_210 & 1) != 0) {
      FUN_0055293c();
    }
    *extraout_x8_01 = pcVar5;
LAB_0038cb38:
    uVar15 = 1;
  }
  *(undefined4 *)(extraout_x8_01 + 1) = uVar15;
LAB_0038cb40:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1a8) {
    return;
  }
  ___stack_chk_fail();
  FUN_0033c494(&pcStack_1e8);
  FUN_0033c494(&pcStack_210);
  FUN_0033c494(&pcStack_1c0);
  __Unwind_Resume(pcVar6);
  pcStack_218 = FUN_0038cbe8;
  lStack_248 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar19 = (long *)*puVar13;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar19) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar2) {
        *plVar19 = *plVar19 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_268 = puVar13[1];
  uStack_270 = *puVar13;
  uStack_258 = puVar13[3];
  uStack_260 = puVar13[2];
  pcStack_240 = pcVar9;
  pcStack_238 = pcVar11;
  pcStack_230 = pcVar5;
  pcStack_228 = pcVar6;
  pppppuStack_220 = &ppppuStack_170;
  FUN_003ecb34(pcVar18 + 0x5a0,&uStack_270);
  pcVar5 = pcVar10;
  pcVar11 = pcVar18;
  FUN_00385fc8();
  iVar8 = (int)pcVar11;
  if ((iVar14 != 0) && ((char)*(int *)(pcVar18 + 0x6c8) != '\0')) {
    iVar14 = *(int *)(pcVar10 + 0x628);
    if ((char)iVar14 == '\0') {
      pcStack_280 = (char *)0x0;
    }
    else {
      uStack_2a0 = 0;
      uStack_298 = 0;
      uStack_290 = 0;
      FUN_003b646c(&pcStack_280,2,"Data frame with END_STREAM flag received",0x28,&uStack_281,
                   &uStack_2a0);
    }
    FUN_003870a0(pcVar10,pcVar18,1,0,&pcStack_280);
    iVar8 = (int)pcVar18;
    if ((char)iVar14 == '\0') {
      pcVar5 = pcStack_280;
      if (((ulong)pcStack_280 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      if (((ulong)pcStack_280 & 1) != 0) {
        FUN_0055293c();
      }
      pcVar5 = (char *)&puStack_278;
      puStack_278 = (undefined1 *)&uStack_2a0;
      FUN_0033d548();
    }
  }
  *extraout_x8_02 = 0;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  if (iVar8 != 0) {
    func_0x0040cf10();
    puStack_278 = (undefined1 *)&uStack_2a0;
    FUN_0033d548(&puStack_278);
  }
  __Unwind_Resume();
  *(int *)((long)(pcVar5 + 0x10) + 0) = 0;
  *(int *)((long)(pcVar5 + 0x10) + 4) = 0;
  return;
}



/* Entry: 0038c530; end: 0038c683;  */

void FUN_0038c530(undefined8 *param_1,long **param_2,char *param_3,char *param_4,undefined8 *param_5
                 ,long *param_6,char *param_7)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long **pplVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined4 uVar16;
  long *plVar17;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  char *pcVar18;
  undefined8 *extraout_x8_01;
  long *plVar19;
  long lVar20;
  long lVar21;
  long **unaff_x20;
  char *pcVar22;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined1 uStack_271;
  char *pcStack_270;
  undefined1 *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_238;
  char *pcStack_230;
  char *pcStack_228;
  char *pcStack_220;
  char *pcStack_218;
  undefined1 ****ppppuStack_210;
  code *pcStack_208;
  char *pcStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 uStack_1d9;
  char *pcStack_1d8;
  ulong uStack_1d0;
  byte bStack_1c1;
  char *pcStack_1c0;
  byte bStack_1b5;
  uint uStack_1b4;
  char *pcStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 *puStack_190;
  long *plStack_188;
  char *pcStack_180;
  char *pcStack_178;
  char *pcStack_170;
  long *plStack_168;
  undefined1 ***pppuStack_160;
  code *pcStack_158;
  long lStack_148;
  undefined1 uStack_140;
  undefined1 uStack_13f;
  undefined1 uStack_13e;
  undefined1 uStack_13d;
  undefined1 uStack_13c;
  undefined1 uStack_13b;
  undefined1 uStack_13a;
  undefined1 uStack_139;
  undefined1 *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined1 uStack_120;
  undefined1 uStack_11f;
  undefined1 uStack_11e;
  byte bStack_11d;
  undefined1 uStack_11c;
  undefined1 uStack_11b;
  undefined1 uStack_11a;
  undefined1 uStack_119;
  undefined1 *puStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  long *plStack_c0;
  char *pcStack_b8;
  byte bStack_a9;
  ulong uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  long *plStack_60;
  char *pcStack_58;
  byte bStack_49;
  long lStack_48;
  code *pcStack_40;
  long lStack_38;
  code *pcStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar19 = *param_2;
  lVar20 = (long)param_2[1];
  plVar17 = (long *)plVar19[1];
  lVar21 = plVar17[3];
  lVar1 = lVar21 + (ulong)*(uint *)(*plVar17 + 0xe0);
  if (lVar1 < lVar20) {
    pcStack_40 = FUN_00560cd0;
    pcStack_30 = FUN_00560cd0;
    param_4 = (char *)&lStack_48;
    param_5 = (undefined8 *)((long)&MACH_HEADER.magic + 2);
    lStack_48 = lVar20;
    lStack_38 = lVar1;
    FUN_0056189c(&plStack_60,"frame of size %lld overflows local window of %lld",0x31);
    param_3 = pcStack_58;
    param_2 = (long **)plStack_60;
    if (-1 < (char)bStack_49) {
      param_3 = (char *)(ulong)bStack_49;
      param_2 = &plStack_60;
    }
    func_0x005535d4(param_1);
    unaff_x20 = &plStack_60;
    if ((char)bStack_49 < '\0') {
      param_2 = (long **)plStack_60;
      __ZdlPv();
      unaff_x20 = &plStack_60;
    }
  }
  else {
    if (lVar20 != 0) {
      if (0 < lVar21) {
        *(long *)(*plVar19 + 8) = *(long *)(*plVar19 + 8) - lVar21;
        lVar21 = plVar17[3];
      }
      lVar21 = lVar21 - lVar20;
      plVar17[3] = lVar21;
      if (0 < lVar21) {
        *(long *)(*plVar19 + 8) = *(long *)(*plVar19 + 8) + lVar21;
      }
    }
    lVar20 = plVar17[1];
    lVar1 = (long)param_2[1];
    if (lVar20 <= (long)param_2[1]) {
      lVar1 = lVar20;
    }
    plVar17[1] = lVar20 - lVar1;
    *param_1 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((char)bStack_49 < '\0') {
    __ZdlPv(plStack_60);
  }
  pplVar5 = param_2;
  __Unwind_Resume();
  pcStack_68 = FUN_0038c684;
  lStack_88 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar4 = (uint)pplVar5;
  puStack_80 = (undefined1 *)unaff_x20;
  plStack_78 = (long *)param_2;
  puStack_70 = &stack0xfffffffffffffff0;
  if (uVar4 < 2) {
    if (uVar4 != 0) {
      param_4[0x16d] = 1;
    }
    param_4[0x6c8] = uVar4 != 0;
    *extraout_x8 = 0;
  }
  else {
    uStack_a8 = (ulong)pplVar5 & 0xffffffff;
    uStack_a0 = 0x560664;
    uStack_98 = (ulong)param_3 & 0xffffffff;
    uStack_90 = 0x5606ec;
    param_4 = (char *)&uStack_a8;
    param_5 = (undefined8 *)((long)&MACH_HEADER.magic + 2);
    FUN_0056189c(&plStack_c0,"unsupported data flags: 0x%02x stream: %d",0x29);
    param_3 = pcStack_b8;
    pplVar5 = (long **)plStack_c0;
    if (-1 < (char)bStack_a9) {
      param_3 = (char *)(ulong)bStack_a9;
      pplVar5 = &plStack_c0;
    }
    func_0x005535d4(extraout_x8);
    if ((char)bStack_a9 < '\0') {
      pplVar5 = (long **)plStack_c0;
      __ZdlPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  if ((char)bStack_a9 < '\0') {
    __ZdlPv(plStack_c0);
  }
  __Unwind_Resume();
  pcStack_c8 = FUN_0038c790;
  lStack_108 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar6 = (char *)((long)&MACH_HEADER.cpusubtype + 1);
  pcVar10 = param_3;
  pcVar12 = param_4;
  puVar13 = param_5;
  plVar19 = param_6;
  ppuStack_d0 = &puStack_70;
  FUN_003ec0c8(&lStack_128);
  iVar15 = (int)plVar19;
  if (((ulong)param_4 & 0xff000000) == 0) {
    uStack_139 = (undefined1)((ulong)pplVar5 >> 0x10);
    uStack_13a = (undefined1)((ulong)pplVar5 >> 0x18);
    uStack_13e = (undefined1)((ulong)param_4 >> 8);
    uStack_13f = (undefined1)((ulong)param_4 >> 0x10);
    if (lStack_128 == 0) {
      uStack_11c = 0;
      uStack_11b = (int)param_5 != 0;
      puStack_118 = (undefined1 *)
                    ((ulong)puStack_118 & 0xffffffffffff0000 |
                    (ulong)((((uint)pplVar5 & 0xff00ff00) >> 8 | ((uint)pplVar5 & 0xff00ff) << 8) &
                           0xffff));
      pcVar6 = param_4;
    }
    else {
      *puStack_118 = uStack_13f;
      puStack_118[1] = uStack_13e;
      puStack_118[2] = (char)param_4;
      puStack_118[3] = 0;
      puStack_118[4] = (int)param_5 != 0;
      puStack_118[5] = uStack_13a;
      puStack_118[6] = uStack_139;
      puStack_118[7] = (char)((ulong)pplVar5 >> 8);
      puStack_118[8] = (char)pplVar5;
      pcVar6 = (char *)(ulong)bStack_11d;
      uStack_13f = uStack_11f;
      uStack_13e = uStack_11e;
      uStack_13a = uStack_11a;
      uStack_139 = uStack_119;
    }
    lStack_148 = lStack_128;
    uStack_140 = uStack_120;
    uStack_13d = SUB81(pcVar6,0);
    uStack_130 = uStack_110;
    uStack_13c = uStack_11c;
    uStack_13b = uStack_11b;
    puStack_138 = puStack_118;
    FUN_003ecb34(param_7,&lStack_148);
    pcVar10 = (char *)((ulong)param_4 & 0xffffffff);
    pcVar6 = param_3;
    pcVar12 = param_7;
    func_0x003ed5ac();
    *param_6 = *param_6 + 9;
    param_6[1] = param_6[1] + ((ulong)param_4 & 0xffffffff);
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_108) {
      return;
    }
  }
  else {
    func_0x00772e0c();
  }
  ___stack_chk_fail();
  pcStack_158 = FUN_0038c910;
  lStack_198 = *(long *)PTR____stack_chk_guard_00999f88;
  pcStack_1b0 = (char *)0x0;
  puVar14 = puVar13;
  puStack_190 = param_5;
  plStack_188 = (long *)pplVar5;
  pcStack_180 = param_3;
  pcStack_178 = param_7;
  pcStack_170 = param_4;
  plStack_168 = param_6;
  pppuStack_160 = &ppuStack_d0;
  if (*(ulong *)(pcVar6 + 0x5c0) < 5) {
    if (pcVar10 != (char *)0x0) {
      *(int *)pcVar10 = 5 - (int)*(ulong *)(pcVar6 + 0x5c0);
    }
    *(undefined4 *)(extraout_x8_00 + 1) = 0;
    pcVar7 = pcVar6;
    pcVar11 = pcVar10;
    pcVar18 = pcVar12;
    pcVar6 = param_4;
    pcVar12 = param_7;
    goto LAB_0038cb40;
  }
  pcVar8 = pcVar6 + 0x5a0;
  pcVar18 = (char *)&bStack_1b5;
  pcVar11 = (char *)((long)&MACH_HEADER.cputype + 1);
  pcVar7 = pcVar8;
  FUN_003ed97c();
  if (bStack_1b5 == 0) {
    if (puVar13 != (undefined8 *)0x0) {
      uVar16 = 0;
LAB_0038c9ac:
      *(undefined4 *)puVar13 = uVar16;
    }
LAB_0038c9b0:
    uVar4 = (uStack_1b4 & 0xff00ff00) >> 8 | (uStack_1b4 & 0xff00ff) << 8;
    pcVar22 = (char *)(ulong)(uVar4 >> 0x10 | uVar4 << 0x10);
    if (pcVar22 + 5 <= *(undefined1 **)(pcVar6 + 0x5c0)) {
      if (pcVar10 != (char *)0x0) {
        *(int *)pcVar10 = 0;
      }
      if (pcVar12 != (char *)0x0) {
        *(long *)(pcVar6 + 0x138) = *(long *)(pcVar6 + 0x138) + 5;
        *(char **)(pcVar6 + 0x140) = pcVar22 + *(long *)(pcVar6 + 0x140);
        FUN_003ed7cc(pcVar8,5,&bStack_1b5);
        pcVar18 = pcVar12;
        func_0x003ed3c8();
        pcVar7 = pcVar8;
        pcVar11 = pcVar22;
      }
      *extraout_x8_00 = 0;
      goto LAB_0038cb38;
    }
    uVar16 = 0;
    if (pcVar10 != (char *)0x0) {
      *(int *)pcVar10 = (int)(pcVar22 + 5) - (int)*(undefined1 **)(pcVar6 + 0x5c0);
    }
  }
  else {
    if (bStack_1b5 == 1) {
      if (puVar13 != (undefined8 *)0x0) {
        uVar16 = 0x80000000;
        goto LAB_0038c9ac;
      }
      goto LAB_0038c9b0;
    }
    uStack_1a0 = 0x560664;
    puStack_1a8 = (undefined8 *)(ulong)bStack_1b5;
    FUN_0056189c(&pcStack_1d8,"Bad GRPC frame type 0x%02x",0x1a,&puStack_1a8,1);
    pcVar12 = pcStack_1d8;
    if (-1 < (char)bStack_1c1) {
      uStack_1d0 = (ulong)bStack_1c1;
      pcVar12 = (char *)&pcStack_1d8;
    }
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    uStack_1f8 = 0;
    puVar14 = (undefined8 *)&uStack_1d9;
    iVar15 = (int)&uStack_1f8;
    FUN_003b646c(&pcStack_1c0,2,pcVar12,uStack_1d0);
    pcVar12 = pcStack_1c0;
    if (pcStack_1c0 != (char *)0x0) {
      pcStack_1b0 = pcStack_1c0;
      pcStack_1c0 = segment_command_00000020.segname + 0xe;
    }
    puStack_1a8 = &uStack_1f8;
    FUN_0033d548(&puStack_1a8);
    if ((char)bStack_1c1 < '\0') {
      __ZdlPv(pcStack_1d8);
    }
    pcStack_200 = pcVar12;
    if (((ulong)pcVar12 & 1) != 0) {
      pcVar18 = pcVar12 + -1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pcVar18,0x10);
        if (bVar3) {
          *(int *)pcVar18 = *(int *)pcVar18 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pcVar18 = (char *)(ulong)*(uint *)(pcVar6 + 0x9c);
    pcVar11 = (char *)((long)&MACH_HEADER.magic + 2);
    FUN_003be104(&pcStack_1d8,&pcStack_200);
    pcVar6 = pcStack_1d8;
    pcVar7 = pcVar12;
    if (pcStack_1d8 == pcVar12) {
joined_r0x0038cb1c:
      pcVar6 = pcVar7;
      if (((ulong)pcVar12 & 1) != 0) {
        FUN_0055293c(pcVar12);
      }
    }
    else {
      pcStack_1b0 = pcStack_1d8;
      pcStack_1d8 = segment_command_00000020.segname + 0xe;
      if (((ulong)pcVar12 & 1) != 0) {
        FUN_0055293c(pcVar12);
        pcVar7 = pcVar6;
        pcVar12 = pcStack_1d8;
        goto joined_r0x0038cb1c;
      }
    }
    pcVar7 = pcStack_200;
    if (((ulong)pcStack_200 & 1) != 0) {
      FUN_0055293c();
    }
    *extraout_x8_00 = pcVar6;
LAB_0038cb38:
    uVar16 = 1;
  }
  *(undefined4 *)(extraout_x8_00 + 1) = uVar16;
LAB_0038cb40:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  FUN_0033c494(&pcStack_1d8);
  FUN_0033c494(&pcStack_200);
  FUN_0033c494(&pcStack_1b0);
  __Unwind_Resume(pcVar7);
  pcStack_208 = FUN_0038cbe8;
  lStack_238 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar19 = (long *)*puVar14;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar19) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar3) {
        *plVar19 = *plVar19 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_258 = puVar14[1];
  uStack_260 = *puVar14;
  uStack_248 = puVar14[3];
  uStack_250 = puVar14[2];
  pcStack_230 = pcVar10;
  pcStack_228 = pcVar12;
  pcStack_220 = pcVar6;
  pcStack_218 = pcVar7;
  ppppuStack_210 = &pppuStack_160;
  FUN_003ecb34(pcVar18 + 0x5a0,&uStack_260);
  pcVar6 = pcVar11;
  pcVar12 = pcVar18;
  FUN_00385fc8();
  iVar9 = (int)pcVar12;
  if ((iVar15 != 0) && ((char)*(int *)(pcVar18 + 0x6c8) != '\0')) {
    iVar15 = *(int *)(pcVar11 + 0x628);
    if ((char)iVar15 == '\0') {
      pcStack_270 = (char *)0x0;
    }
    else {
      uStack_290 = 0;
      uStack_288 = 0;
      uStack_280 = 0;
      FUN_003b646c(&pcStack_270,2,"Data frame with END_STREAM flag received",0x28,&uStack_271,
                   &uStack_290);
    }
    FUN_003870a0(pcVar11,pcVar18,1,0,&pcStack_270);
    iVar9 = (int)pcVar18;
    if ((char)iVar15 == '\0') {
      pcVar6 = pcStack_270;
      if (((ulong)pcStack_270 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      if (((ulong)pcStack_270 & 1) != 0) {
        FUN_0055293c();
      }
      pcVar6 = (char *)&puStack_268;
      puStack_268 = (undefined1 *)&uStack_290;
      FUN_0033d548();
    }
  }
  *extraout_x8_01 = 0;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_238) {
    return;
  }
  ___stack_chk_fail();
  if (iVar9 != 0) {
    func_0x0040cf10();
    puStack_268 = (undefined1 *)&uStack_290;
    FUN_0033d548(&puStack_268);
  }
  __Unwind_Resume();
  *(int *)((long)(pcVar6 + 0x10) + 0) = 0;
  *(int *)((long)(pcVar6 + 0x10) + 4) = 0;
  return;
}



/* Entry: 0038c684; end: 0038c78f;  */

void FUN_0038c684(undefined8 *param_1,undefined1 **param_2,char *param_3,char *param_4,
                 undefined8 *param_5,long *param_6,char *param_7)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined4 uVar14;
  undefined8 *extraout_x8;
  char *pcVar15;
  undefined8 *extraout_x8_00;
  long *plVar16;
  char *pcVar17;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 uStack_211;
  char *pcStack_210;
  undefined1 *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1d8;
  char *pcStack_1d0;
  char *pcStack_1c8;
  char *pcStack_1c0;
  char *pcStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  char *pcStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 uStack_179;
  char *pcStack_178;
  ulong uStack_170;
  byte bStack_161;
  char *pcStack_160;
  byte bStack_155;
  uint uStack_154;
  char *pcStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 *puStack_130;
  undefined1 *puStack_128;
  char *pcStack_120;
  char *pcStack_118;
  char *pcStack_110;
  long *plStack_108;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  long lStack_e8;
  undefined1 uStack_e0;
  undefined1 uStack_df;
  undefined1 uStack_de;
  undefined1 uStack_dd;
  undefined1 uStack_dc;
  undefined1 uStack_db;
  undefined1 uStack_da;
  undefined1 uStack_d9;
  undefined1 *puStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 uStack_c0;
  undefined1 uStack_bf;
  undefined1 uStack_be;
  byte bStack_bd;
  undefined1 uStack_bc;
  undefined1 uStack_bb;
  undefined1 uStack_ba;
  undefined1 uStack_b9;
  undefined1 *puStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 *puStack_60;
  char *pcStack_58;
  byte bStack_49;
  ulong uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar3 = (uint)param_2;
  if (uVar3 < 2) {
    if (uVar3 != 0) {
      param_4[0x16d] = 1;
    }
    param_4[0x6c8] = uVar3 != 0;
    *param_1 = 0;
  }
  else {
    uStack_48 = (ulong)param_2 & 0xffffffff;
    uStack_40 = 0x560664;
    uStack_38 = (ulong)param_3 & 0xffffffff;
    uStack_30 = 0x5606ec;
    param_4 = (char *)&uStack_48;
    param_5 = (undefined8 *)((long)&MACH_HEADER.magic + 2);
    FUN_0056189c(&puStack_60,"unsupported data flags: 0x%02x stream: %d",0x29);
    param_3 = pcStack_58;
    param_2 = (undefined1 **)puStack_60;
    if (-1 < (char)bStack_49) {
      param_3 = (char *)(ulong)bStack_49;
      param_2 = &puStack_60;
    }
    func_0x005535d4(param_1);
    if ((char)bStack_49 < '\0') {
      param_2 = (undefined1 **)puStack_60;
      __ZdlPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((char)bStack_49 < '\0') {
    __ZdlPv(puStack_60);
  }
  __Unwind_Resume();
  pcStack_68 = FUN_0038c790;
  lStack_a8 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar4 = (char *)((long)&MACH_HEADER.cpusubtype + 1);
  pcVar8 = param_3;
  pcVar10 = param_4;
  puVar11 = param_5;
  plVar16 = param_6;
  puStack_70 = &stack0xfffffffffffffff0;
  FUN_003ec0c8(&lStack_c8);
  iVar13 = (int)plVar16;
  if (((ulong)param_4 & 0xff000000) == 0) {
    uStack_d9 = (undefined1)((ulong)param_2 >> 0x10);
    uStack_da = (undefined1)((ulong)param_2 >> 0x18);
    uStack_de = (undefined1)((ulong)param_4 >> 8);
    uStack_df = (undefined1)((ulong)param_4 >> 0x10);
    if (lStack_c8 == 0) {
      uStack_bc = 0;
      uStack_bb = (int)param_5 != 0;
      puStack_b8 = (undefined1 *)
                   ((ulong)puStack_b8 & 0xffffffffffff0000 |
                   (ulong)((((uint)param_2 & 0xff00ff00) >> 8 | ((uint)param_2 & 0xff00ff) << 8) &
                          0xffff));
      pcVar4 = param_4;
    }
    else {
      *puStack_b8 = uStack_df;
      puStack_b8[1] = uStack_de;
      puStack_b8[2] = (char)param_4;
      puStack_b8[3] = 0;
      puStack_b8[4] = (int)param_5 != 0;
      puStack_b8[5] = uStack_da;
      puStack_b8[6] = uStack_d9;
      puStack_b8[7] = (char)((ulong)param_2 >> 8);
      puStack_b8[8] = (char)param_2;
      pcVar4 = (char *)(ulong)bStack_bd;
      uStack_df = uStack_bf;
      uStack_de = uStack_be;
      uStack_da = uStack_ba;
      uStack_d9 = uStack_b9;
    }
    lStack_e8 = lStack_c8;
    uStack_e0 = uStack_c0;
    uStack_dd = SUB81(pcVar4,0);
    uStack_d0 = uStack_b0;
    uStack_dc = uStack_bc;
    uStack_db = uStack_bb;
    puStack_d8 = puStack_b8;
    FUN_003ecb34(param_7,&lStack_e8);
    pcVar8 = (char *)((ulong)param_4 & 0xffffffff);
    pcVar4 = param_3;
    pcVar10 = param_7;
    func_0x003ed5ac();
    *param_6 = *param_6 + 9;
    param_6[1] = param_6[1] + ((ulong)param_4 & 0xffffffff);
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_a8) {
      return;
    }
  }
  else {
    func_0x00772e0c();
  }
  ___stack_chk_fail();
  pcStack_f8 = FUN_0038c910;
  lStack_138 = *(long *)PTR____stack_chk_guard_00999f88;
  pcStack_150 = (char *)0x0;
  puVar12 = puVar11;
  puStack_130 = param_5;
  puStack_128 = (undefined1 *)param_2;
  pcStack_120 = param_3;
  pcStack_118 = param_7;
  pcStack_110 = param_4;
  plStack_108 = param_6;
  ppuStack_100 = &puStack_70;
  if (*(ulong *)(pcVar4 + 0x5c0) < 5) {
    if (pcVar8 != (char *)0x0) {
      *(int *)pcVar8 = 5 - (int)*(ulong *)(pcVar4 + 0x5c0);
    }
    *(undefined4 *)(extraout_x8 + 1) = 0;
    pcVar5 = pcVar4;
    pcVar9 = pcVar8;
    pcVar15 = pcVar10;
    pcVar4 = param_4;
    pcVar10 = param_7;
    goto LAB_0038cb40;
  }
  pcVar6 = pcVar4 + 0x5a0;
  pcVar15 = (char *)&bStack_155;
  pcVar9 = (char *)((long)&MACH_HEADER.cputype + 1);
  pcVar5 = pcVar6;
  FUN_003ed97c();
  if (bStack_155 == 0) {
    if (puVar11 != (undefined8 *)0x0) {
      uVar14 = 0;
LAB_0038c9ac:
      *(undefined4 *)puVar11 = uVar14;
    }
LAB_0038c9b0:
    uVar3 = (uStack_154 & 0xff00ff00) >> 8 | (uStack_154 & 0xff00ff) << 8;
    pcVar17 = (char *)(ulong)(uVar3 >> 0x10 | uVar3 << 0x10);
    if (pcVar17 + 5 <= *(undefined1 **)(pcVar4 + 0x5c0)) {
      if (pcVar8 != (char *)0x0) {
        *(int *)pcVar8 = 0;
      }
      if (pcVar10 != (char *)0x0) {
        *(long *)(pcVar4 + 0x138) = *(long *)(pcVar4 + 0x138) + 5;
        *(char **)(pcVar4 + 0x140) = pcVar17 + *(long *)(pcVar4 + 0x140);
        FUN_003ed7cc(pcVar6,5,&bStack_155);
        pcVar15 = pcVar10;
        func_0x003ed3c8();
        pcVar5 = pcVar6;
        pcVar9 = pcVar17;
      }
      *extraout_x8 = 0;
      goto LAB_0038cb38;
    }
    uVar14 = 0;
    if (pcVar8 != (char *)0x0) {
      *(int *)pcVar8 = (int)(pcVar17 + 5) - (int)*(undefined1 **)(pcVar4 + 0x5c0);
    }
  }
  else {
    if (bStack_155 == 1) {
      if (puVar11 != (undefined8 *)0x0) {
        uVar14 = 0x80000000;
        goto LAB_0038c9ac;
      }
      goto LAB_0038c9b0;
    }
    uStack_140 = 0x560664;
    puStack_148 = (undefined8 *)(ulong)bStack_155;
    FUN_0056189c(&pcStack_178,"Bad GRPC frame type 0x%02x",0x1a,&puStack_148,1);
    pcVar10 = pcStack_178;
    if (-1 < (char)bStack_161) {
      uStack_170 = (ulong)bStack_161;
      pcVar10 = (char *)&pcStack_178;
    }
    uStack_190 = 0;
    uStack_188 = 0;
    uStack_198 = 0;
    puVar12 = (undefined8 *)&uStack_179;
    iVar13 = (int)&uStack_198;
    FUN_003b646c(&pcStack_160,2,pcVar10,uStack_170);
    pcVar10 = pcStack_160;
    if (pcStack_160 != (char *)0x0) {
      pcStack_150 = pcStack_160;
      pcStack_160 = segment_command_00000020.segname + 0xe;
    }
    puStack_148 = &uStack_198;
    FUN_0033d548(&puStack_148);
    if ((char)bStack_161 < '\0') {
      __ZdlPv(pcStack_178);
    }
    pcStack_1a0 = pcVar10;
    if (((ulong)pcVar10 & 1) != 0) {
      pcVar15 = pcVar10 + -1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pcVar15,0x10);
        if (bVar2) {
          *(int *)pcVar15 = *(int *)pcVar15 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    pcVar15 = (char *)(ulong)*(uint *)(pcVar4 + 0x9c);
    pcVar9 = (char *)((long)&MACH_HEADER.magic + 2);
    FUN_003be104(&pcStack_178,&pcStack_1a0);
    pcVar4 = pcStack_178;
    pcVar5 = pcVar10;
    if (pcStack_178 == pcVar10) {
joined_r0x0038cb1c:
      pcVar4 = pcVar5;
      if (((ulong)pcVar10 & 1) != 0) {
        FUN_0055293c(pcVar10);
      }
    }
    else {
      pcStack_150 = pcStack_178;
      pcStack_178 = segment_command_00000020.segname + 0xe;
      if (((ulong)pcVar10 & 1) != 0) {
        FUN_0055293c(pcVar10);
        pcVar5 = pcVar4;
        pcVar10 = pcStack_178;
        goto joined_r0x0038cb1c;
      }
    }
    pcVar5 = pcStack_1a0;
    if (((ulong)pcStack_1a0 & 1) != 0) {
      FUN_0055293c();
    }
    *extraout_x8 = pcVar4;
LAB_0038cb38:
    uVar14 = 1;
  }
  *(undefined4 *)(extraout_x8 + 1) = uVar14;
LAB_0038cb40:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_138) {
    return;
  }
  ___stack_chk_fail();
  FUN_0033c494(&pcStack_178);
  FUN_0033c494(&pcStack_1a0);
  FUN_0033c494(&pcStack_150);
  __Unwind_Resume(pcVar5);
  pcStack_1a8 = FUN_0038cbe8;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar16 = (long *)*puVar12;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar16) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar2) {
        *plVar16 = *plVar16 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_1f8 = puVar12[1];
  uStack_200 = *puVar12;
  uStack_1e8 = puVar12[3];
  uStack_1f0 = puVar12[2];
  pcStack_1d0 = pcVar8;
  pcStack_1c8 = pcVar10;
  pcStack_1c0 = pcVar4;
  pcStack_1b8 = pcVar5;
  pppuStack_1b0 = &ppuStack_100;
  FUN_003ecb34(pcVar15 + 0x5a0,&uStack_200);
  pcVar4 = pcVar9;
  pcVar10 = pcVar15;
  FUN_00385fc8();
  iVar7 = (int)pcVar10;
  if ((iVar13 != 0) && ((char)*(int *)(pcVar15 + 0x6c8) != '\0')) {
    iVar13 = *(int *)(pcVar9 + 0x628);
    if ((char)iVar13 == '\0') {
      pcStack_210 = (char *)0x0;
    }
    else {
      uStack_230 = 0;
      uStack_228 = 0;
      uStack_220 = 0;
      FUN_003b646c(&pcStack_210,2,"Data frame with END_STREAM flag received",0x28,&uStack_211,
                   &uStack_230);
    }
    FUN_003870a0(pcVar9,pcVar15,1,0,&pcStack_210);
    iVar7 = (int)pcVar15;
    if ((char)iVar13 == '\0') {
      pcVar4 = pcStack_210;
      if (((ulong)pcStack_210 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      if (((ulong)pcStack_210 & 1) != 0) {
        FUN_0055293c();
      }
      pcVar4 = (char *)&puStack_208;
      puStack_208 = (undefined1 *)&uStack_230;
      FUN_0033d548();
    }
  }
  *extraout_x8_00 = 0;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  if (iVar7 != 0) {
    func_0x0040cf10();
    puStack_208 = (undefined1 *)&uStack_230;
    FUN_0033d548(&puStack_208);
  }
  __Unwind_Resume();
  *(int *)((long)(pcVar4 + 0x10) + 0) = 0;
  *(int *)((long)(pcVar4 + 0x10) + 4) = 0;
  return;
}



/* Entry: 0038c790; end: 0038c90f;  */

void FUN_0038c790(undefined8 param_1,char *param_2,char *param_3,undefined8 *param_4,long *param_5,
                 char *param_6)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined4 uVar14;
  undefined8 *extraout_x8;
  char *pcVar15;
  undefined8 *extraout_x8_00;
  long *plVar16;
  char *pcVar17;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 uStack_1b1;
  char *pcStack_1b0;
  undefined1 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_178;
  char *pcStack_170;
  char *pcStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char *pcStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 uStack_119;
  char *pcStack_118;
  ulong uStack_110;
  byte bStack_101;
  char *pcStack_100;
  byte bStack_f5;
  uint uStack_f4;
  char *pcStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  char *pcStack_b0;
  long *plStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  long lStack_88;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined1 uStack_7e;
  undefined1 uStack_7d;
  undefined1 uStack_7c;
  undefined1 uStack_7b;
  undefined1 uStack_7a;
  undefined1 uStack_79;
  undefined1 *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  byte bStack_5d;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  undefined1 *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar4 = (char *)((long)&MACH_HEADER.cpusubtype + 1);
  pcVar8 = param_2;
  pcVar10 = param_3;
  puVar11 = param_4;
  plVar16 = param_5;
  FUN_003ec0c8(&lStack_68);
  iVar13 = (int)plVar16;
  if (((ulong)param_3 & 0xff000000) == 0) {
    uStack_79 = (undefined1)((ulong)param_1 >> 0x10);
    uStack_7a = (undefined1)((ulong)param_1 >> 0x18);
    uStack_7e = (undefined1)((ulong)param_3 >> 8);
    uStack_7f = (undefined1)((ulong)param_3 >> 0x10);
    if (lStack_68 == 0) {
      uStack_5c = 0;
      uStack_5b = (int)param_4 != 0;
      puStack_58 = (undefined1 *)
                   ((ulong)puStack_58 & 0xffffffffffff0000 |
                   (ulong)((((uint)param_1 & 0xff00ff00) >> 8 | ((uint)param_1 & 0xff00ff) << 8) &
                          0xffff));
      pcVar4 = param_3;
    }
    else {
      *puStack_58 = uStack_7f;
      puStack_58[1] = uStack_7e;
      puStack_58[2] = (char)param_3;
      puStack_58[3] = 0;
      puStack_58[4] = (int)param_4 != 0;
      puStack_58[5] = uStack_7a;
      puStack_58[6] = uStack_79;
      puStack_58[7] = (char)((ulong)param_1 >> 8);
      puStack_58[8] = (char)param_1;
      pcVar4 = (char *)(ulong)bStack_5d;
      uStack_7f = uStack_5f;
      uStack_7e = uStack_5e;
      uStack_7a = uStack_5a;
      uStack_79 = uStack_59;
    }
    lStack_88 = lStack_68;
    uStack_80 = uStack_60;
    uStack_7d = SUB81(pcVar4,0);
    uStack_70 = uStack_50;
    uStack_7c = uStack_5c;
    uStack_7b = uStack_5b;
    puStack_78 = puStack_58;
    FUN_003ecb34(param_6,&lStack_88);
    pcVar8 = (char *)((ulong)param_3 & 0xffffffff);
    pcVar4 = param_2;
    pcVar10 = param_6;
    func_0x003ed5ac();
    *param_5 = *param_5 + 9;
    param_5[1] = param_5[1] + ((ulong)param_3 & 0xffffffff);
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
      return;
    }
  }
  else {
    func_0x00772e0c();
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_0038c910;
  lStack_d8 = *(long *)PTR____stack_chk_guard_00999f88;
  pcStack_f0 = (char *)0x0;
  puVar12 = puVar11;
  puStack_d0 = param_4;
  uStack_c8 = param_1;
  pcStack_c0 = param_2;
  pcStack_b8 = param_6;
  pcStack_b0 = param_3;
  plStack_a8 = param_5;
  puStack_a0 = &stack0xfffffffffffffff0;
  if (*(ulong *)(pcVar4 + 0x5c0) < 5) {
    if (pcVar8 != (char *)0x0) {
      *(int *)pcVar8 = 5 - (int)*(ulong *)(pcVar4 + 0x5c0);
    }
    *(undefined4 *)(extraout_x8 + 1) = 0;
    pcVar5 = pcVar4;
    pcVar9 = pcVar8;
    pcVar15 = pcVar10;
    pcVar4 = param_3;
    pcVar10 = param_6;
    goto LAB_0038cb40;
  }
  pcVar6 = pcVar4 + 0x5a0;
  pcVar15 = (char *)&bStack_f5;
  pcVar9 = (char *)((long)&MACH_HEADER.cputype + 1);
  pcVar5 = pcVar6;
  FUN_003ed97c();
  if (bStack_f5 == 0) {
    if (puVar11 != (undefined8 *)0x0) {
      uVar14 = 0;
LAB_0038c9ac:
      *(undefined4 *)puVar11 = uVar14;
    }
LAB_0038c9b0:
    uVar1 = (uStack_f4 & 0xff00ff00) >> 8 | (uStack_f4 & 0xff00ff) << 8;
    pcVar17 = (char *)(ulong)(uVar1 >> 0x10 | uVar1 << 0x10);
    if (pcVar17 + 5 <= *(undefined1 **)(pcVar4 + 0x5c0)) {
      if (pcVar8 != (char *)0x0) {
        *(int *)pcVar8 = 0;
      }
      if (pcVar10 != (char *)0x0) {
        *(long *)(pcVar4 + 0x138) = *(long *)(pcVar4 + 0x138) + 5;
        *(char **)(pcVar4 + 0x140) = pcVar17 + *(long *)(pcVar4 + 0x140);
        FUN_003ed7cc(pcVar6,5,&bStack_f5);
        pcVar15 = pcVar10;
        func_0x003ed3c8();
        pcVar5 = pcVar6;
        pcVar9 = pcVar17;
      }
      *extraout_x8 = 0;
      goto LAB_0038cb38;
    }
    uVar14 = 0;
    if (pcVar8 != (char *)0x0) {
      *(int *)pcVar8 = (int)(pcVar17 + 5) - (int)*(undefined1 **)(pcVar4 + 0x5c0);
    }
  }
  else {
    if (bStack_f5 == 1) {
      if (puVar11 != (undefined8 *)0x0) {
        uVar14 = 0x80000000;
        goto LAB_0038c9ac;
      }
      goto LAB_0038c9b0;
    }
    uStack_e0 = 0x560664;
    puStack_e8 = (undefined8 *)(ulong)bStack_f5;
    FUN_0056189c(&pcStack_118,"Bad GRPC frame type 0x%02x",0x1a,&puStack_e8,1);
    pcVar10 = pcStack_118;
    if (-1 < (char)bStack_101) {
      uStack_110 = (ulong)bStack_101;
      pcVar10 = (char *)&pcStack_118;
    }
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_138 = 0;
    puVar12 = (undefined8 *)&uStack_119;
    iVar13 = (int)&uStack_138;
    FUN_003b646c(&pcStack_100,2,pcVar10,uStack_110);
    pcVar10 = pcStack_100;
    if (pcStack_100 != (char *)0x0) {
      pcStack_f0 = pcStack_100;
      pcStack_100 = segment_command_00000020.segname + 0xe;
    }
    puStack_e8 = &uStack_138;
    FUN_0033d548(&puStack_e8);
    if ((char)bStack_101 < '\0') {
      __ZdlPv(pcStack_118);
    }
    pcStack_140 = pcVar10;
    if (((ulong)pcVar10 & 1) != 0) {
      pcVar15 = pcVar10 + -1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pcVar15,0x10);
        if (bVar3) {
          *(int *)pcVar15 = *(int *)pcVar15 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pcVar15 = (char *)(ulong)*(uint *)(pcVar4 + 0x9c);
    pcVar9 = (char *)((long)&MACH_HEADER.magic + 2);
    FUN_003be104(&pcStack_118,&pcStack_140);
    pcVar4 = pcStack_118;
    pcVar5 = pcVar10;
    if (pcStack_118 == pcVar10) {
joined_r0x0038cb1c:
      pcVar4 = pcVar5;
      if (((ulong)pcVar10 & 1) != 0) {
        FUN_0055293c(pcVar10);
      }
    }
    else {
      pcStack_f0 = pcStack_118;
      pcStack_118 = segment_command_00000020.segname + 0xe;
      if (((ulong)pcVar10 & 1) != 0) {
        FUN_0055293c(pcVar10);
        pcVar5 = pcVar4;
        pcVar10 = pcStack_118;
        goto joined_r0x0038cb1c;
      }
    }
    pcVar5 = pcStack_140;
    if (((ulong)pcStack_140 & 1) != 0) {
      FUN_0055293c();
    }
    *extraout_x8 = pcVar4;
LAB_0038cb38:
    uVar14 = 1;
  }
  *(undefined4 *)(extraout_x8 + 1) = uVar14;
LAB_0038cb40:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_d8) {
    return;
  }
  ___stack_chk_fail();
  FUN_0033c494(&pcStack_118);
  FUN_0033c494(&pcStack_140);
  FUN_0033c494(&pcStack_f0);
  __Unwind_Resume(pcVar5);
  pcStack_148 = FUN_0038cbe8;
  lStack_178 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar16 = (long *)*puVar12;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar16) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar3) {
        *plVar16 = *plVar16 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_198 = puVar12[1];
  uStack_1a0 = *puVar12;
  uStack_188 = puVar12[3];
  uStack_190 = puVar12[2];
  pcStack_170 = pcVar8;
  pcStack_168 = pcVar10;
  pcStack_160 = pcVar4;
  pcStack_158 = pcVar5;
  ppuStack_150 = &puStack_a0;
  FUN_003ecb34(pcVar15 + 0x5a0,&uStack_1a0);
  pcVar4 = pcVar9;
  pcVar10 = pcVar15;
  FUN_00385fc8();
  iVar7 = (int)pcVar10;
  if ((iVar13 != 0) && ((char)*(int *)(pcVar15 + 0x6c8) != '\0')) {
    iVar13 = *(int *)(pcVar9 + 0x628);
    if ((char)iVar13 == '\0') {
      pcStack_1b0 = (char *)0x0;
    }
    else {
      uStack_1d0 = 0;
      uStack_1c8 = 0;
      uStack_1c0 = 0;
      FUN_003b646c(&pcStack_1b0,2,"Data frame with END_STREAM flag received",0x28,&uStack_1b1,
                   &uStack_1d0);
    }
    FUN_003870a0(pcVar9,pcVar15,1,0,&pcStack_1b0);
    iVar7 = (int)pcVar15;
    if ((char)iVar13 == '\0') {
      pcVar4 = pcStack_1b0;
      if (((ulong)pcStack_1b0 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      if (((ulong)pcStack_1b0 & 1) != 0) {
        FUN_0055293c();
      }
      pcVar4 = (char *)&puStack_1a8;
      puStack_1a8 = (undefined1 *)&uStack_1d0;
      FUN_0033d548();
    }
  }
  *extraout_x8_00 = 0;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  if (iVar7 != 0) {
    func_0x0040cf10();
    puStack_1a8 = (undefined1 *)&uStack_1d0;
    FUN_0033d548(&puStack_1a8);
  }
  __Unwind_Resume();
  *(int *)((long)(pcVar4 + 0x10) + 0) = 0;
  *(int *)((long)(pcVar4 + 0x10) + 4) = 0;
  return;
}



/* Entry: 0038c910; end: 0038cbe7;  */

void FUN_0038c910(undefined8 *param_1,char *param_2,undefined1 **param_3,char *param_4,
                 undefined8 *param_5,int param_6)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  undefined1 **ppuVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  char *pcVar10;
  undefined8 *extraout_x8;
  long *plVar11;
  char *unaff_x20;
  char *unaff_x21;
  undefined1 **ppuVar12;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 uStack_121;
  undefined1 **ppuStack_120;
  undefined1 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_e8;
  undefined1 **ppuStack_e0;
  char *pcStack_d8;
  char *pcStack_d0;
  char *pcStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  char *pcStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_89;
  char *pcStack_88;
  ulong uStack_80;
  byte bStack_71;
  char *pcStack_70;
  byte bStack_65;
  uint uStack_64;
  char *pcStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pcStack_60 = (char *)0x0;
  puVar8 = param_5;
  if (*(ulong *)(param_2 + 0x5c0) < 5) {
    if (param_3 != (undefined1 **)0x0) {
      *(int *)param_3 = 5 - (int)*(ulong *)(param_2 + 0x5c0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    pcVar4 = param_2;
    ppuVar7 = param_3;
    pcVar10 = param_4;
    param_2 = unaff_x20;
    param_4 = unaff_x21;
    goto LAB_0038cb40;
  }
  pcVar5 = param_2 + 0x5a0;
  pcVar10 = (char *)&bStack_65;
  ppuVar7 = (undefined1 **)((long)&MACH_HEADER.cputype + 1);
  pcVar4 = pcVar5;
  FUN_003ed97c();
  if (bStack_65 == 0) {
    if (param_5 != (undefined8 *)0x0) {
      uVar9 = 0;
LAB_0038c9ac:
      *(undefined4 *)param_5 = uVar9;
    }
LAB_0038c9b0:
    uVar1 = (uStack_64 & 0xff00ff00) >> 8 | (uStack_64 & 0xff00ff) << 8;
    ppuVar12 = (undefined1 **)(ulong)(uVar1 >> 0x10 | uVar1 << 0x10);
    if ((long)ppuVar12 + 5U <= *(ulong *)(param_2 + 0x5c0)) {
      if (param_3 != (undefined1 **)0x0) {
        *(int *)param_3 = 0;
      }
      if (param_4 != (char *)0x0) {
        *(long *)(param_2 + 0x138) = *(long *)(param_2 + 0x138) + 5;
        *(long *)(param_2 + 0x140) = *(long *)(param_2 + 0x140) + (long)ppuVar12;
        FUN_003ed7cc(pcVar5,5,&bStack_65);
        pcVar10 = param_4;
        FUN_003ed3c8();
        pcVar4 = pcVar5;
        ppuVar7 = ppuVar12;
      }
      *param_1 = 0;
      goto LAB_0038cb38;
    }
    uVar9 = 0;
    if (param_3 != (undefined1 **)0x0) {
      *(int *)param_3 = (int)((long)ppuVar12 + 5U) - (int)*(ulong *)(param_2 + 0x5c0);
    }
  }
  else {
    if (bStack_65 == 1) {
      if (param_5 != (undefined8 *)0x0) {
        uVar9 = 0x80000000;
        goto LAB_0038c9ac;
      }
      goto LAB_0038c9b0;
    }
    uStack_50 = 0x560664;
    puStack_58 = (undefined8 *)(ulong)bStack_65;
    FUN_0056189c(&pcStack_88,"Bad GRPC frame type 0x%02x",0x1a,&puStack_58,1);
    pcVar10 = pcStack_88;
    if (-1 < (char)bStack_71) {
      uStack_80 = (ulong)bStack_71;
      pcVar10 = (char *)&pcStack_88;
    }
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_a8 = 0;
    puVar8 = (undefined8 *)&uStack_89;
    param_6 = (int)&uStack_a8;
    FUN_003b646c(&pcStack_70,2,pcVar10,uStack_80);
    param_4 = pcStack_70;
    if (pcStack_70 != (char *)0x0) {
      pcStack_60 = pcStack_70;
      pcStack_70 = segment_command_00000020.segname + 0xe;
    }
    puStack_58 = &uStack_a8;
    FUN_0033d548(&puStack_58);
    if ((char)bStack_71 < '\0') {
      __ZdlPv(pcStack_88);
    }
    pcStack_b0 = param_4;
    if (((ulong)param_4 & 1) != 0) {
      pcVar10 = param_4 + -1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pcVar10,0x10);
        if (bVar3) {
          *(int *)pcVar10 = *(int *)pcVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pcVar10 = (char *)(ulong)*(uint *)(param_2 + 0x9c);
    ppuVar7 = (undefined1 **)((long)&MACH_HEADER.magic + 2);
    FUN_003be104(&pcStack_88,&pcStack_b0);
    param_2 = pcStack_88;
    pcVar4 = param_4;
    if (pcStack_88 == param_4) {
joined_r0x0038cb1c:
      param_2 = pcVar4;
      if (((ulong)param_4 & 1) != 0) {
        FUN_0055293c(param_4);
      }
    }
    else {
      pcStack_60 = pcStack_88;
      pcStack_88 = segment_command_00000020.segname + 0xe;
      if (((ulong)param_4 & 1) != 0) {
        FUN_0055293c(param_4);
        pcVar4 = param_2;
        param_4 = pcStack_88;
        goto joined_r0x0038cb1c;
      }
    }
    pcVar4 = pcStack_b0;
    if (((ulong)pcStack_b0 & 1) != 0) {
      FUN_0055293c();
    }
    *param_1 = param_2;
LAB_0038cb38:
    uVar9 = 1;
  }
  *(undefined4 *)(param_1 + 1) = uVar9;
LAB_0038cb40:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  FUN_0033c494(&pcStack_88);
  FUN_0033c494(&pcStack_b0);
  FUN_0033c494(&pcStack_60);
  __Unwind_Resume(pcVar4);
  pcStack_b8 = FUN_0038cbe8;
  lStack_e8 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar11 = (long *)*puVar8;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar11) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = *plVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_108 = puVar8[1];
  uStack_110 = *puVar8;
  uStack_f8 = puVar8[3];
  uStack_100 = puVar8[2];
  ppuStack_e0 = param_3;
  pcStack_d8 = param_4;
  pcStack_d0 = param_2;
  pcStack_c8 = pcVar4;
  puStack_c0 = &stack0xfffffffffffffff0;
  FUN_003ecb34((long)pcVar10 + 0x5a0,&uStack_110);
  ppuVar12 = ppuVar7;
  pcVar4 = pcVar10;
  FUN_00385fc8();
  iVar6 = (int)pcVar4;
  if ((param_6 != 0) && (pcVar10[0x6c8] != '\0')) {
    cVar2 = *(char *)(ppuVar7 + 0xc5);
    if (cVar2 == '\0') {
      ppuStack_120 = (undefined1 **)0x0;
    }
    else {
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_130 = 0;
      FUN_003b646c(&ppuStack_120,2,"Data frame with END_STREAM flag received",0x28,&uStack_121,
                   &uStack_140);
    }
    FUN_003870a0(ppuVar7,pcVar10,1,0,&ppuStack_120);
    iVar6 = (int)pcVar10;
    if (cVar2 == '\0') {
      ppuVar12 = ppuStack_120;
      if (((ulong)ppuStack_120 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      if (((ulong)ppuStack_120 & 1) != 0) {
        FUN_0055293c();
      }
      ppuVar12 = &puStack_118;
      puStack_118 = (undefined1 *)&uStack_140;
      FUN_0033d548();
    }
  }
  *extraout_x8 = 0;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 != 0) {
    func_0x0040cf10();
    puStack_118 = (undefined1 *)&uStack_140;
    FUN_0033d548(&puStack_118);
  }
  __Unwind_Resume();
  ppuVar12[2] = (undefined1 *)0x0;
  return;
}



/* Entry: 0038cbe8; end: 0038cd5f;  */

void FUN_0038cbe8(undefined8 *param_1,undefined8 param_2,undefined1 **param_3,long param_4,
                 undefined8 *param_5,int param_6)

{
  char cVar1;
  bool bVar2;
  undefined1 **ppuVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_71;
  undefined1 **ppuStack_70;
  undefined1 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar6 = (long *)*param_5;
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
  uStack_58 = param_5[1];
  uStack_60 = *param_5;
  uStack_48 = param_5[3];
  uStack_50 = param_5[2];
  FUN_003ecb34(param_4 + 0x5a0,&uStack_60);
  ppuVar3 = param_3;
  lVar5 = param_4;
  FUN_00385fc8();
  iVar4 = (int)lVar5;
  if ((param_6 != 0) && (*(char *)(param_4 + 0x6c8) != '\0')) {
    cVar1 = *(char *)(param_3 + 0xc5);
    if (cVar1 == '\0') {
      ppuStack_70 = (undefined1 **)0x0;
    }
    else {
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      FUN_003b646c(&ppuStack_70,2,"Data frame with END_STREAM flag received",0x28,&uStack_71,
                   &uStack_90);
    }
    FUN_003870a0(param_3,param_4,1,0,&ppuStack_70);
    iVar4 = (int)param_4;
    if (cVar1 == '\0') {
      ppuVar3 = ppuStack_70;
      if (((ulong)ppuStack_70 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      if (((ulong)ppuStack_70 & 1) != 0) {
        FUN_0055293c();
      }
      ppuVar3 = &puStack_68;
      puStack_68 = (undefined1 *)&uStack_90;
      FUN_0033d548();
    }
  }
  *param_1 = 0;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if (iVar4 != 0) {
    func_0x0040cf10();
    puStack_68 = (undefined1 *)&uStack_90;
    FUN_0033d548(&puStack_68);
  }
  __Unwind_Resume();
  ppuVar3[2] = (undefined1 *)0x0;
  return;
}



/* Entry: 0038cd60; end: 0038cd6f;  */

void FUN_0038cd60(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 0038cd70; end: 0038ceb3;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

uint *****
FUN_0038cd70(undefined8 *param_1,uint ****param_2,uint *****param_3,undefined8 param_4,
            uint *****param_5,int param_6)

{
  uint ****ppppuVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  uint ****ppppuVar9;
  undefined8 *puVar10;
  undefined7 *puVar11;
  ulong uVar12;
  uint *****pppppuVar13;
  uint uVar14;
  uint ****ppppuVar15;
  char *pcVar16;
  char *pcVar17;
  long *plVar18;
  ulong *puVar19;
  dword *pdVar20;
  undefined8 *extraout_x8;
  uint uVar21;
  ulong uVar22;
  uint ****ppppuVar23;
  uint *****pppppuVar24;
  uint *****pppppuVar25;
  uint ****unaff_x24;
  uint ****appppuStack_348 [2];
  char cStack_331;
  undefined1 auStack_330 [56];
  undefined8 uStack_2f8;
  undefined7 uStack_2f0;
  undefined1 uStack_2e9;
  undefined7 uStack_2e8;
  undefined1 uStack_2e1;
  ulong auStack_2a8 [2];
  undefined7 *puStack_298;
  ulong uStack_290;
  ulong uStack_288;
  undefined8 uStack_280;
  ulong uStack_278;
  code *pcStack_270;
  uint ***pppuStack_268;
  undefined8 uStack_260;
  ulong uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  uint ***pppuStack_240;
  uint ****ppppuStack_238;
  uint ****ppppuStack_230;
  uint ****ppppuStack_228;
  char *pcStack_220;
  undefined8 uStack_218;
  undefined1 ****ppppuStack_210;
  code *pcStack_208;
  long *plStack_200;
  uint ***apppuStack_1f8 [8];
  long lStack_1b8;
  undefined1 ***pppuStack_180;
  code *pcStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  uint ***pppuStack_150;
  ulong uStack_148;
  undefined1 *puStack_140;
  undefined8 uStack_138;
  uint ***pppuStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined1 **ppuStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  uint **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_61;
  uint ****ppppuStack_60;
  ulong uStack_58;
  byte bStack_49;
  uint ***pppuStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar14 = (uint)param_3;
  if (uVar14 < 8) {
    pppuStack_48 = (uint ***)((ulong)param_3 & 0xffffffff);
    uStack_40 = 0x5606ec;
    FUN_0056189c(&ppppuStack_60,"goaway frame too short (%d bytes)",0x21,&pppuStack_48,1);
    param_3 = (uint *****)ppppuStack_60;
    if (-1 < (char)bStack_49) {
      uStack_58 = (ulong)bStack_49;
      param_3 = &ppppuStack_60;
    }
    uStack_78 = 0;
    uStack_70 = 0;
    ppuStack_80 = (uint **)0x0;
    param_5 = (uint *****)&uStack_61;
    param_6 = (int)&ppuStack_80;
    FUN_003b646c(param_1,2,param_3,uStack_58);
    pppppuVar24 = (uint *****)&pppuStack_48;
    pppuStack_48 = &ppuStack_80;
    FUN_0033d548();
    param_2 = (uint ****)&ppuStack_80;
    if ((char)bStack_49 < '\0') {
      pppppuVar24 = (uint *****)ppppuStack_60;
      __ZdlPv();
      param_2 = (uint ****)&ppuStack_80;
    }
  }
  else {
    FUN_00338cb8(param_2[2]);
    uVar14 = uVar14 - 8;
    pppppuVar24 = (uint *****)(ulong)uVar14;
    *(uint *)(param_2 + 3) = uVar14;
    FUN_00338c74();
    param_2[2] = (uint ***)pppppuVar24;
    *(undefined4 *)((long)param_2 + 0x1c) = 0;
    *(undefined4 *)param_2 = 0;
    *param_1 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return pppppuVar24;
  }
  ___stack_chk_fail();
  pppuStack_48 = (uint ***)param_2;
  FUN_0033d548(&pppuStack_48);
  if ((char)bStack_49 < '\0') {
    __ZdlPv(ppppuStack_60);
  }
  __Unwind_Resume();
  pcStack_88 = FUN_0038ceb4;
  ppppuVar23 = (uint ****)((long)param_5 + 9);
  if (*param_5 != (uint ****)0x0) {
    ppppuVar23 = param_5[2];
  }
  ppppuVar9 = (uint ****)((ulong)param_5[1] & 0xff);
  if (*param_5 != (uint ****)0x0) {
    ppppuVar9 = param_5[1];
  }
  puStack_90 = &stack0xfffffffffffffff0;
  if (*(uint *)pppppuVar24 < 9) {
    ppppuVar1 = (uint ****)((long)ppppuVar23 + (long)ppppuVar9);
    ppppuVar15 = ppppuVar23;
    pppppuVar25 = pppppuVar24;
    switch(*(uint *)pppppuVar24) {
    case 0:
      if (ppppuVar9 == (uint ****)0x0) {
        *(uint *)pppppuVar24 = 0;
        goto code_r0x0038d06c;
      }
      ppppuVar15 = (uint ****)((long)ppppuVar23 + 1);
      *(uint *)((long)pppppuVar24 + 4) = (uint)*(byte *)ppppuVar23 << 0x18;
      break;
    case 2:
      goto code_r0x0038cf44;
    case 3:
      goto code_r0x0038cf5c;
    case 4:
      goto code_r0x0038cf74;
    case 5:
      goto code_r0x0038cf88;
    case 6:
      goto code_r0x0038cfa0;
    case 7:
      goto code_r0x0038cfb8;
    case 8:
      goto code_r0x0038cfd0;
    }
    if (ppppuVar15 == ppppuVar1) {
      uVar14 = 1;
    }
    else {
      ppppuVar23 = (uint ****)((long)ppppuVar15 + 1);
      *(uint *)((long)pppppuVar24 + 4) =
           *(uint *)((long)pppppuVar24 + 4) | (uint)*(byte *)ppppuVar15 << 0x10;
code_r0x0038cf44:
      if (ppppuVar23 == ppppuVar1) {
        uVar14 = 2;
      }
      else {
        ppppuVar15 = (uint ****)((long)ppppuVar23 + 1);
        *(uint *)((long)pppppuVar24 + 4) =
             *(uint *)((long)pppppuVar24 + 4) | (uint)*(byte *)ppppuVar23 << 8;
code_r0x0038cf5c:
        if (ppppuVar15 == ppppuVar1) {
          uVar14 = 3;
        }
        else {
          ppppuVar23 = (uint ****)((long)ppppuVar15 + 1);
          *(uint *)((long)pppppuVar24 + 4) =
               *(uint *)((long)pppppuVar24 + 4) | (uint)*(byte *)ppppuVar15;
code_r0x0038cf74:
          if (ppppuVar23 == ppppuVar1) {
            uVar14 = 4;
          }
          else {
            ppppuVar15 = (uint ****)((long)ppppuVar23 + 1);
            *(uint *)(pppppuVar24 + 1) = (uint)*(byte *)ppppuVar23 << 0x18;
code_r0x0038cf88:
            if (ppppuVar15 == ppppuVar1) {
              uVar14 = 5;
            }
            else {
              ppppuVar23 = (uint ****)((long)ppppuVar15 + 1);
              *(uint *)(pppppuVar24 + 1) =
                   *(uint *)(pppppuVar24 + 1) | (uint)*(byte *)ppppuVar15 << 0x10;
code_r0x0038cfa0:
              if (ppppuVar23 == ppppuVar1) {
                uVar14 = 6;
              }
              else {
                ppppuVar15 = (uint ****)((long)ppppuVar23 + 1);
                *(uint *)(pppppuVar24 + 1) =
                     *(uint *)(pppppuVar24 + 1) | (uint)*(byte *)ppppuVar23 << 8;
code_r0x0038cfb8:
                if (ppppuVar15 != ppppuVar1) {
                  ppppuVar23 = (uint ****)((long)ppppuVar15 + 1);
                  *(uint *)(pppppuVar24 + 1) =
                       *(uint *)(pppppuVar24 + 1) | (uint)*(byte *)ppppuVar15;
code_r0x0038cfd0:
                  uVar22 = (long)ppppuVar1 - (long)ppppuVar23;
                  if (uVar22 != 0) {
                    pppppuVar25 = (uint *****)
                                  ((long)pppppuVar24[2] + (ulong)*(uint *)((long)pppppuVar24 + 0x1c)
                                  );
                    _memcpy(pppppuVar25,ppppuVar23,uVar22);
                  }
                  if (uVar22 < ~*(uint *)((long)pppppuVar24 + 0x1c)) {
                    *(uint *)((long)pppppuVar24 + 0x1c) =
                         *(uint *)((long)pppppuVar24 + 0x1c) + (int)uVar22;
                    *(uint *)pppppuVar24 = 8;
                    if (param_6 != 0) {
                      FUN_0038485c(param_3,*(uint *)(pppppuVar24 + 1),
                                   *(uint *)((long)pppppuVar24 + 4),pppppuVar24[2],
                                   *(uint *)(pppppuVar24 + 3));
                      pppppuVar25 = (uint *****)pppppuVar24[2];
                      FUN_00338cb8(pppppuVar25);
                      pppppuVar24[2] = (uint ****)0x0;
                    }
                    goto code_r0x0038d06c;
                  }
                  func_0x00772e44();
                  goto LAB_0038d090;
                }
                uVar14 = 7;
              }
            }
          }
        }
      }
    }
    *(uint *)pppppuVar24 = uVar14;
code_r0x0038d06c:
    *extraout_x8 = 0;
    return pppppuVar25;
  }
LAB_0038d090:
  uVar7 = 0;
  pcVar16 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/frame_goaway.cc"
  ;
  pdVar20 = &section_00000068.offset;
  func_0x00338df0();
  plVar18 = &lStack_170;
  uStack_c8 = 0x38d0a8;
  lStack_108 = *(long *)PTR____stack_chk_guard_00999f88;
  pppppuVar25 = (uint *****)&pppuStack_128;
  pppppuVar13 = (uint *****)((long)&MACH_HEADER.ncmds + 1);
  pcVar17 = pcVar16;
  pppppuVar24 = param_5;
  ppuStack_d0 = &puStack_90;
  FUN_003ec0c8(&pppuStack_128);
  puVar3 = uStack_118;
  if (*(long *)pdVar20 == 0 || *(ulong *)(pdVar20 + 2) < 0xfffffff7) {
    uVar14 = (uint)*(ulong *)(pdVar20 + 2);
    if (*(long *)pdVar20 == 0) {
      uVar14 = uVar14 & 0xff;
    }
    bVar6 = (uint ****)pppuStack_128 != (uint ****)0x0;
    puVar4 = (undefined1 *)((long)&uStack_120 + 2);
    puVar2 = (undefined1 *)((long)&uStack_120 + 1);
    if (bVar6) {
      puVar4 = uStack_118 + 1;
      puVar2 = uStack_118;
    }
    iVar5 = uVar14 + 8;
    *puVar2 = (char)((uint)iVar5 >> 0x10);
    puVar2 = (undefined1 *)((long)&uStack_120 + 3);
    if (bVar6) {
      puVar2 = puVar3 + 2;
    }
    *puVar4 = (char)((uint)iVar5 >> 8);
    puVar4 = (undefined1 *)((long)&uStack_120 + 4);
    if (bVar6) {
      puVar4 = puVar3 + 3;
    }
    *puVar2 = (char)iVar5;
    puVar2 = (undefined1 *)((long)&uStack_120 + 5);
    if (bVar6) {
      puVar2 = puVar3 + 4;
    }
    *puVar4 = 7;
    puVar4 = (undefined1 *)((long)&uStack_120 + 6);
    if (bVar6) {
      puVar4 = puVar3 + 5;
    }
    *puVar2 = 0;
    puVar2 = (undefined1 *)((long)&uStack_120 + 7);
    if (bVar6) {
      puVar2 = puVar3 + 6;
    }
    *puVar4 = 0;
    puVar10 = &uStack_118;
    if (bVar6) {
      puVar10 = (undefined8 *)(puVar3 + 7);
    }
    *puVar2 = 0;
    puVar4 = (undefined1 *)((long)&uStack_118 + 1);
    if (bVar6) {
      puVar4 = puVar3 + 8;
    }
    *(undefined1 *)puVar10 = 0;
    puVar2 = (undefined1 *)((long)&uStack_118 + 2);
    if (bVar6) {
      puVar2 = puVar3 + 9;
    }
    *puVar4 = 0;
    puVar4 = (undefined1 *)((long)&uStack_118 + 3);
    if (bVar6) {
      puVar4 = puVar3 + 10;
    }
    *puVar2 = (char)((uint)uVar7 >> 0x18);
    puVar2 = (undefined1 *)((long)&uStack_118 + 4);
    if (bVar6) {
      puVar2 = puVar3 + 0xb;
    }
    *puVar4 = (char)((uint)uVar7 >> 0x10);
    puVar4 = (undefined1 *)((long)&uStack_118 + 5);
    if (bVar6) {
      puVar4 = puVar3 + 0xc;
    }
    *puVar2 = (char)((uint)uVar7 >> 8);
    puVar2 = (undefined1 *)((long)&uStack_118 + 6);
    if (bVar6) {
      puVar2 = puVar3 + 0xd;
    }
    *puVar4 = (char)uVar7;
    puVar4 = (undefined1 *)((long)&uStack_118 + 7);
    if (bVar6) {
      puVar4 = puVar3 + 0xe;
    }
    *puVar2 = (char)((ulong)pcVar16 >> 0x18);
    puVar10 = &uStack_110;
    if (bVar6) {
      puVar10 = (undefined8 *)(puVar3 + 0xf);
    }
    *puVar4 = (char)((ulong)pcVar16 >> 0x10);
    puVar4 = (undefined1 *)((long)&uStack_110 + 1);
    if (bVar6) {
      puVar4 = puVar3 + 0x10;
    }
    *(char *)puVar10 = (char)((ulong)pcVar16 >> 8);
    puVar2 = (undefined1 *)((long)&uStack_110 + 2);
    if (bVar6) {
      puVar2 = puVar3 + 0x11;
    }
    *puVar4 = (char)pcVar16;
    puVar3 = (undefined1 *)((long)&uStack_120 + 1);
    if ((uint ****)pppuStack_128 != (uint ****)0x0) {
      puVar3 = uStack_118;
    }
    uVar22 = uStack_120 & 0xff;
    if ((uint ****)pppuStack_128 != (uint ****)0x0) {
      uVar22 = uStack_120;
    }
    if (puVar2 != puVar3 + uVar22) goto LAB_0038d2dc;
    uStack_148 = uStack_120;
    pppuStack_150 = pppuStack_128;
    uStack_138 = uStack_110;
    puStack_140 = uStack_118;
    FUN_003ecb34(param_5,&pppuStack_150);
    lStack_168 = *(long *)(pdVar20 + 2);
    lStack_170 = *(long *)pdVar20;
    lStack_158 = *(long *)(pdVar20 + 6);
    lStack_160 = *(long *)(pdVar20 + 4);
    FUN_003ecb34();
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_108) {
      return param_5;
    }
  }
  else {
    func_0x00772e78();
LAB_0038d2dc:
    plVar18 = (long *)pcVar17;
    param_5 = pppppuVar13;
    func_0x00772eac();
  }
  ___stack_chk_fail();
  pcStack_178 = FUN_0038d2e4;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_00999f88;
  pppppuVar13 = (uint *****)((long)&MACH_HEADER.magic + 2);
  pcVar16 = (char *)plVar18;
  pppuStack_180 = &ppuStack_d0;
  FUN_00338e58();
  if ((int)pppppuVar13 != 0) {
    plStack_200 = &lStack_170;
    ppppuVar23 = apppuStack_1f8;
    _vsnprintf(ppppuVar23,0x40,pppppuVar24,&lStack_170);
    if ((int)(uint)ppppuVar23 < 0) {
      pppppuVar25 = (uint *****)0x0;
      pppppuVar24 = (uint *****)0x0;
    }
    else {
      unaff_x24 = ppppuVar23;
      if ((uint)ppppuVar23 < 0x40) {
        pppppuVar24 = (uint *****)0x0;
        pppppuVar25 = (uint *****)apppuStack_1f8;
      }
      else {
        pppppuVar24 = (uint *****)(((ulong)ppppuVar23 & 0xffffffff) + 1);
        FUN_00338c74();
        plStack_200 = &lStack_170;
        _vsnprintf();
        pppppuVar25 = pppppuVar24;
      }
    }
    pcVar16 = (char *)plVar18;
    FUN_00338e80(param_5,plVar18,2,pppppuVar25);
    pppppuVar13 = pppppuVar24;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1b8) {
    return pppppuVar13;
  }
  ___stack_chk_fail();
  uStack_218 = 2;
  pcStack_208 = FUN_00339178;
  lStack_248 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar8 = 1;
  pppuStack_240 = (uint ***)unaff_x24;
  ppppuStack_238 = (uint ****)pppppuVar25;
  ppppuStack_230 = (uint ****)pppppuVar24;
  ppppuStack_228 = (uint ****)param_5;
  pcStack_220 = (char *)plVar18;
  ppppuStack_210 = &pppuStack_180;
  FUN_0033a598();
  ppppuVar23 = *pppppuVar13;
  ppppuVar9 = ppppuVar23;
  uStack_2f8 = uVar8;
  _strrchr(ppppuVar23,0x2f);
  if (ppppuVar9 != (uint ****)0x0) {
    ppppuVar23 = (uint ****)((long)ppppuVar9 + 1);
  }
  puVar10 = &uStack_2f8;
  _localtime_r(puVar10,auStack_330);
  if (puVar10 == (undefined8 *)0x0) {
    uStack_2e8 = 0x656d69746c6163;
    uStack_2e1 = 0;
    uStack_2f0 = 0x6c3a726f727265;
    uStack_2e9 = 0x6f;
  }
  else {
    puVar11 = &uStack_2f0;
    _strftime(puVar11,0x40,"%m%d %H:%M:%S",auStack_330);
    if (puVar11 == (undefined7 *)0x0) {
      uStack_2f0 = 0x733a726f727265;
      uStack_2e9 = 0x74;
      uStack_2e8 = 0x656d69746672;
    }
  }
  uVar12 = (ulong)*(uint *)((long)pppppuVar13 + 0xc);
  func_0x00338e1c();
  uVar22 = uVar12;
  _pthread_self();
  auStack_2a8[1] = 0x560e98;
  puStack_298 = &uStack_2f0;
  uStack_290 = 0x560e98;
  uStack_288 = (ulong)pcVar16 & 0xffffffff;
  uStack_280 = 0x5606ac;
  pcStack_270 = FUN_00560738;
  uStack_260 = 0x560e98;
  uStack_258 = (ulong)*(uint *)(pppppuVar13 + 1);
  uStack_250 = 0x5606ac;
  puVar19 = auStack_2a8;
  auStack_2a8[0] = uVar12;
  uStack_278 = uVar22;
  pppuStack_268 = (uint ***)ppppuVar23;
  FUN_0056189c(appppuStack_348,"%s%s.%09d %7ld %s:%d]",0x15,puVar19,6);
  uVar14 = *(uint *)((long)pppppuVar13 + 0xc);
  func_0x00338e6c();
  if (uVar14 == 0) {
    auStack_2a8[0] = auStack_2a8[0] & 0xffffffffffffff00;
    uStack_290 = uStack_290 & 0xffffffffffffff00;
LAB_00339300:
    pppppuVar24 = *(uint ******)PTR____stderrp_00999f90;
    pcVar16 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_2a8);
    if ((char)uStack_290 == '\0') goto LAB_00339300;
    pppppuVar24 = *(uint ******)PTR____stderrp_00999f90;
    pcVar16 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_331 < '\0') {
    pppppuVar24 = (uint *****)appppuStack_348[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_248) {
    return pppppuVar24;
  }
  ___stack_chk_fail();
  if (cStack_331 < '\0') {
    __ZdlPv(appppuStack_348[0]);
  }
  __Unwind_Resume();
  uVar14 = (uint)puVar19;
  if ((char *)0x3 < pcVar16) {
    uVar22 = (ulong)pcVar16 >> 2;
    pppppuVar25 = pppppuVar24;
    do {
      uVar14 = (*(int *)pppppuVar25 * 0x16a88000 | (uint)(*(int *)pppppuVar25 * -0x3361d2af) >> 0x11
               ) * 0x1b873593 ^ (uint)puVar19;
      uVar14 = (uVar14 >> 0x13 | uVar14 << 0xd) * 5 + 0xe6546b64;
      puVar19 = (ulong *)(ulong)uVar14;
      uVar22 = uVar22 - 1;
      pppppuVar25 = (uint *****)((long)pppppuVar25 + 4);
    } while (uVar22 != 0);
    pppppuVar24 = (uint *****)((long)pppppuVar24 + ((ulong)pcVar16 & 0xfffffffffffffffc));
  }
  uVar21 = 0;
  uVar22 = (ulong)pcVar16 & 3;
  if (uVar22 != 1) {
    if (uVar22 != 2) {
      if (uVar22 != 3) goto LAB_00339464;
      uVar21 = (uint)*(byte *)((long)pppppuVar24 + 2) << 0x10;
    }
    uVar21 = uVar21 | (uint)*(byte *)((long)pppppuVar24 + 1) << 8;
  }
  uVar14 = ((uVar21 ^ *(byte *)pppppuVar24) * 0x16a88000 |
           (uVar21 ^ *(byte *)pppppuVar24) * -0x3361d2af >> 0x11) * 0x1b873593 ^ uVar14;
LAB_00339464:
  uVar14 = uVar14 ^ (uint)pcVar16;
  uVar14 = (uVar14 ^ uVar14 >> 0x10) * -0x7a143595;
  uVar14 = (uVar14 ^ uVar14 >> 0xd) * -0x3d4d51cb;
  return (uint *****)(ulong)(uVar14 ^ uVar14 >> 0x10);
}



/* Entry: 0038ceb4; end: 0038d2e3;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

uint * FUN_0038ceb4(undefined8 *param_1,uint *param_2,undefined8 param_3,undefined8 param_4,
                   uint *param_5,int param_6)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined7 *puVar11;
  ulong uVar12;
  uint *puVar13;
  byte *pbVar14;
  byte *pbVar15;
  char *pcVar16;
  char *pcVar17;
  long *plVar18;
  ulong *puVar19;
  dword *pdVar20;
  uint uVar21;
  uint uVar22;
  ulong uVar23;
  long lVar24;
  uint *puVar25;
  uint *puVar26;
  uint *unaff_x24;
  uint *apuStack_2c8 [2];
  char cStack_2b1;
  undefined1 auStack_2b0 [56];
  undefined8 uStack_278;
  undefined7 uStack_270;
  undefined1 uStack_269;
  undefined7 uStack_268;
  undefined1 uStack_261;
  ulong auStack_228 [2];
  undefined7 *puStack_218;
  ulong uStack_210;
  ulong uStack_208;
  undefined8 uStack_200;
  ulong uStack_1f8;
  code *pcStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  uint *puStack_1c0;
  uint *puStack_1b8;
  uint *puStack_1b0;
  uint *puStack_1a8;
  char *pcStack_1a0;
  undefined8 uStack_198;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  long *plStack_180;
  uint auStack_178 [16];
  long lStack_138;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  undefined1 *puStack_c0;
  undefined8 uStack_b8;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  pbVar15 = (byte *)((long)param_5 + 9);
  if (*(long *)param_5 != 0) {
    pbVar15 = *(byte **)(param_5 + 4);
  }
  uVar23 = *(ulong *)(param_5 + 2) & 0xff;
  if (*(long *)param_5 != 0) {
    uVar23 = *(ulong *)(param_5 + 2);
  }
  if (*param_2 < 9) {
    pbVar1 = pbVar15 + uVar23;
    pbVar14 = pbVar15;
    puVar25 = param_2;
    switch(*param_2) {
    case 0:
      if (uVar23 == 0) {
        *param_2 = 0;
        goto code_r0x0038d06c;
      }
      pbVar14 = pbVar15 + 1;
      param_2[1] = (uint)*pbVar15 << 0x18;
      break;
    case 2:
      goto code_r0x0038cf44;
    case 3:
      goto code_r0x0038cf5c;
    case 4:
      goto code_r0x0038cf74;
    case 5:
      goto code_r0x0038cf88;
    case 6:
      goto code_r0x0038cfa0;
    case 7:
      goto code_r0x0038cfb8;
    case 8:
      goto code_r0x0038cfd0;
    }
    if (pbVar14 == pbVar1) {
      uVar21 = 1;
    }
    else {
      pbVar15 = pbVar14 + 1;
      param_2[1] = param_2[1] | (uint)*pbVar14 << 0x10;
code_r0x0038cf44:
      if (pbVar15 == pbVar1) {
        uVar21 = 2;
      }
      else {
        pbVar14 = pbVar15 + 1;
        param_2[1] = param_2[1] | (uint)*pbVar15 << 8;
code_r0x0038cf5c:
        if (pbVar14 == pbVar1) {
          uVar21 = 3;
        }
        else {
          pbVar15 = pbVar14 + 1;
          param_2[1] = param_2[1] | (uint)*pbVar14;
code_r0x0038cf74:
          if (pbVar15 == pbVar1) {
            uVar21 = 4;
          }
          else {
            pbVar14 = pbVar15 + 1;
            param_2[2] = (uint)*pbVar15 << 0x18;
code_r0x0038cf88:
            if (pbVar14 == pbVar1) {
              uVar21 = 5;
            }
            else {
              pbVar15 = pbVar14 + 1;
              param_2[2] = param_2[2] | (uint)*pbVar14 << 0x10;
code_r0x0038cfa0:
              if (pbVar15 == pbVar1) {
                uVar21 = 6;
              }
              else {
                pbVar14 = pbVar15 + 1;
                param_2[2] = param_2[2] | (uint)*pbVar15 << 8;
code_r0x0038cfb8:
                if (pbVar14 != pbVar1) {
                  pbVar15 = pbVar14 + 1;
                  param_2[2] = param_2[2] | (uint)*pbVar14;
code_r0x0038cfd0:
                  uVar23 = (long)pbVar1 - (long)pbVar15;
                  if (uVar23 != 0) {
                    puVar25 = (uint *)(*(long *)(param_2 + 4) + (ulong)param_2[7]);
                    _memcpy(puVar25,pbVar15,uVar23);
                  }
                  if (uVar23 < ~param_2[7]) {
                    param_2[7] = param_2[7] + (int)uVar23;
                    *param_2 = 8;
                    if (param_6 != 0) {
                      FUN_0038485c(param_3,param_2[2],param_2[1],*(undefined8 *)(param_2 + 4),
                                   param_2[6]);
                      puVar25 = *(uint **)(param_2 + 4);
                      FUN_00338cb8(puVar25);
                      param_2[4] = 0;
                      param_2[5] = 0;
                    }
                    goto code_r0x0038d06c;
                  }
                  func_0x00772e44();
                  goto LAB_0038d090;
                }
                uVar21 = 7;
              }
            }
          }
        }
      }
    }
    *param_2 = uVar21;
code_r0x0038d06c:
    *param_1 = 0;
    return puVar25;
  }
LAB_0038d090:
  uVar7 = 0;
  pcVar16 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/frame_goaway.cc"
  ;
  pdVar20 = &section_00000068.offset;
  func_0x00338df0();
  plVar18 = &lStack_f0;
  uStack_48 = 0x38d0a8;
  lStack_88 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar26 = (uint *)&lStack_a8;
  puVar13 = (uint *)((long)&MACH_HEADER.ncmds + 1);
  pcVar17 = pcVar16;
  puVar25 = param_5;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_003ec0c8(&lStack_a8);
  puVar3 = uStack_98;
  if (*(long *)pdVar20 == 0 || *(ulong *)(pdVar20 + 2) < 0xfffffff7) {
    uVar21 = (uint)*(ulong *)(pdVar20 + 2);
    if (*(long *)pdVar20 == 0) {
      uVar21 = uVar21 & 0xff;
    }
    bVar6 = lStack_a8 != 0;
    puVar4 = (undefined1 *)((long)&uStack_a0 + 2);
    puVar2 = (undefined1 *)((long)&uStack_a0 + 1);
    if (bVar6) {
      puVar4 = uStack_98 + 1;
      puVar2 = uStack_98;
    }
    iVar5 = uVar21 + 8;
    *puVar2 = (char)((uint)iVar5 >> 0x10);
    puVar2 = (undefined1 *)((long)&uStack_a0 + 3);
    if (bVar6) {
      puVar2 = puVar3 + 2;
    }
    *puVar4 = (char)((uint)iVar5 >> 8);
    puVar4 = (undefined1 *)((long)&uStack_a0 + 4);
    if (bVar6) {
      puVar4 = puVar3 + 3;
    }
    *puVar2 = (char)iVar5;
    puVar2 = (undefined1 *)((long)&uStack_a0 + 5);
    if (bVar6) {
      puVar2 = puVar3 + 4;
    }
    *puVar4 = 7;
    puVar4 = (undefined1 *)((long)&uStack_a0 + 6);
    if (bVar6) {
      puVar4 = puVar3 + 5;
    }
    *puVar2 = 0;
    puVar2 = (undefined1 *)((long)&uStack_a0 + 7);
    if (bVar6) {
      puVar2 = puVar3 + 6;
    }
    *puVar4 = 0;
    puVar10 = &uStack_98;
    if (bVar6) {
      puVar10 = (undefined8 *)(puVar3 + 7);
    }
    *puVar2 = 0;
    puVar4 = (undefined1 *)((long)&uStack_98 + 1);
    if (bVar6) {
      puVar4 = puVar3 + 8;
    }
    *(undefined1 *)puVar10 = 0;
    puVar2 = (undefined1 *)((long)&uStack_98 + 2);
    if (bVar6) {
      puVar2 = puVar3 + 9;
    }
    *puVar4 = 0;
    puVar4 = (undefined1 *)((long)&uStack_98 + 3);
    if (bVar6) {
      puVar4 = puVar3 + 10;
    }
    *puVar2 = (char)((uint)uVar7 >> 0x18);
    puVar2 = (undefined1 *)((long)&uStack_98 + 4);
    if (bVar6) {
      puVar2 = puVar3 + 0xb;
    }
    *puVar4 = (char)((uint)uVar7 >> 0x10);
    puVar4 = (undefined1 *)((long)&uStack_98 + 5);
    if (bVar6) {
      puVar4 = puVar3 + 0xc;
    }
    *puVar2 = (char)((uint)uVar7 >> 8);
    puVar2 = (undefined1 *)((long)&uStack_98 + 6);
    if (bVar6) {
      puVar2 = puVar3 + 0xd;
    }
    *puVar4 = (char)uVar7;
    puVar4 = (undefined1 *)((long)&uStack_98 + 7);
    if (bVar6) {
      puVar4 = puVar3 + 0xe;
    }
    *puVar2 = (char)((ulong)pcVar16 >> 0x18);
    puVar10 = &uStack_90;
    if (bVar6) {
      puVar10 = (undefined8 *)(puVar3 + 0xf);
    }
    *puVar4 = (char)((ulong)pcVar16 >> 0x10);
    puVar4 = (undefined1 *)((long)&uStack_90 + 1);
    if (bVar6) {
      puVar4 = puVar3 + 0x10;
    }
    *(char *)puVar10 = (char)((ulong)pcVar16 >> 8);
    puVar2 = (undefined1 *)((long)&uStack_90 + 2);
    if (bVar6) {
      puVar2 = puVar3 + 0x11;
    }
    *puVar4 = (char)pcVar16;
    puVar3 = (undefined1 *)((long)&uStack_a0 + 1);
    if (lStack_a8 != 0) {
      puVar3 = uStack_98;
    }
    uVar23 = uStack_a0 & 0xff;
    if (lStack_a8 != 0) {
      uVar23 = uStack_a0;
    }
    if (puVar2 != puVar3 + uVar23) goto LAB_0038d2dc;
    uStack_c8 = uStack_a0;
    lStack_d0 = lStack_a8;
    uStack_b8 = uStack_90;
    puStack_c0 = uStack_98;
    FUN_003ecb34(param_5,&lStack_d0);
    lStack_e8 = *(long *)(pdVar20 + 2);
    lStack_f0 = *(long *)pdVar20;
    lStack_d8 = *(long *)(pdVar20 + 6);
    lStack_e0 = *(long *)(pdVar20 + 4);
    FUN_003ecb34();
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_88) {
      return param_5;
    }
  }
  else {
    func_0x00772e78();
LAB_0038d2dc:
    plVar18 = (long *)pcVar17;
    param_5 = puVar13;
    func_0x00772eac();
  }
  ___stack_chk_fail();
  pcStack_f8 = FUN_0038d2e4;
  lStack_138 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar13 = (uint *)((long)&MACH_HEADER.magic + 2);
  pcVar16 = (char *)plVar18;
  ppuStack_100 = &puStack_50;
  FUN_00338e58();
  if ((int)puVar13 != 0) {
    plStack_180 = &lStack_f0;
    puVar26 = auStack_178;
    _vsnprintf(puVar26,0x40,puVar25,&lStack_f0);
    if ((int)(uint)puVar26 < 0) {
      puVar26 = (uint *)0x0;
      puVar25 = (uint *)0x0;
    }
    else {
      unaff_x24 = puVar26;
      if ((uint)puVar26 < 0x40) {
        puVar25 = (uint *)0x0;
        puVar26 = auStack_178;
      }
      else {
        puVar25 = (uint *)(((ulong)puVar26 & 0xffffffff) + 1);
        FUN_00338c74();
        plStack_180 = &lStack_f0;
        _vsnprintf();
        puVar26 = puVar25;
      }
    }
    pcVar16 = (char *)plVar18;
    FUN_00338e80(param_5,plVar18,2,puVar26);
    puVar13 = puVar25;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_138) {
    return puVar13;
  }
  ___stack_chk_fail();
  uStack_198 = 2;
  pcStack_188 = FUN_00339178;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar8 = 1;
  puStack_1c0 = unaff_x24;
  puStack_1b8 = puVar26;
  puStack_1b0 = puVar25;
  puStack_1a8 = param_5;
  pcStack_1a0 = (char *)plVar18;
  pppuStack_190 = &ppuStack_100;
  FUN_0033a598();
  lVar24 = *(long *)puVar13;
  lVar9 = lVar24;
  uStack_278 = uVar8;
  _strrchr(lVar24,0x2f);
  if (lVar9 != 0) {
    lVar24 = lVar9 + 1;
  }
  puVar10 = &uStack_278;
  _localtime_r(puVar10,auStack_2b0);
  if (puVar10 == (undefined8 *)0x0) {
    uStack_268 = 0x656d69746c6163;
    uStack_261 = 0;
    uStack_270 = 0x6c3a726f727265;
    uStack_269 = 0x6f;
  }
  else {
    puVar11 = &uStack_270;
    _strftime(puVar11,0x40,"%m%d %H:%M:%S",auStack_2b0);
    if (puVar11 == (undefined7 *)0x0) {
      uStack_270 = 0x733a726f727265;
      uStack_269 = 0x74;
      uStack_268 = 0x656d69746672;
    }
  }
  uVar12 = (ulong)puVar13[3];
  func_0x00338e1c();
  uVar23 = uVar12;
  _pthread_self();
  auStack_228[1] = 0x560e98;
  puStack_218 = &uStack_270;
  uStack_210 = 0x560e98;
  uStack_208 = (ulong)pcVar16 & 0xffffffff;
  uStack_200 = 0x5606ac;
  pcStack_1f0 = FUN_00560738;
  uStack_1e0 = 0x560e98;
  uStack_1d8 = (ulong)puVar13[2];
  uStack_1d0 = 0x5606ac;
  puVar19 = auStack_228;
  auStack_228[0] = uVar12;
  uStack_1f8 = uVar23;
  lStack_1e8 = lVar24;
  FUN_0056189c(apuStack_2c8,"%s%s.%09d %7ld %s:%d]",0x15,puVar19,6);
  uVar21 = puVar13[3];
  func_0x00338e6c();
  if (uVar21 == 0) {
    auStack_228[0] = auStack_228[0] & 0xffffffffffffff00;
    uStack_210 = uStack_210 & 0xffffffffffffff00;
LAB_00339300:
    puVar25 = *(uint **)PTR____stderrp_00999f90;
    pcVar16 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_228);
    if ((char)uStack_210 == '\0') goto LAB_00339300;
    puVar25 = *(uint **)PTR____stderrp_00999f90;
    pcVar16 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_2b1 < '\0') {
    puVar25 = apuStack_2c8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1c8) {
    return puVar25;
  }
  ___stack_chk_fail();
  if (cStack_2b1 < '\0') {
    __ZdlPv(apuStack_2c8[0]);
  }
  __Unwind_Resume();
  uVar21 = (uint)puVar19;
  if ((char *)0x3 < pcVar16) {
    uVar23 = (ulong)pcVar16 >> 2;
    puVar26 = puVar25;
    do {
      uVar21 = (*puVar26 * 0x16a88000 | *puVar26 * -0x3361d2af >> 0x11) * 0x1b873593 ^ (uint)puVar19
      ;
      uVar21 = (uVar21 >> 0x13 | uVar21 << 0xd) * 5 + 0xe6546b64;
      puVar19 = (ulong *)(ulong)uVar21;
      uVar23 = uVar23 - 1;
      puVar26 = puVar26 + 1;
    } while (uVar23 != 0);
    puVar25 = (uint *)((long)puVar25 + ((ulong)pcVar16 & 0xfffffffffffffffc));
  }
  uVar22 = 0;
  uVar23 = (ulong)pcVar16 & 3;
  if (uVar23 != 1) {
    if (uVar23 != 2) {
      if (uVar23 != 3) goto LAB_00339464;
      uVar22 = (uint)*(byte *)((long)puVar25 + 2) << 0x10;
    }
    uVar22 = uVar22 | (uint)*(byte *)((long)puVar25 + 1) << 8;
  }
  uVar22 = uVar22 ^ (byte)*puVar25;
  uVar21 = (uVar22 * 0x16a88000 | uVar22 * -0x3361d2af >> 0x11) * 0x1b873593 ^ uVar21;
LAB_00339464:
  uVar21 = uVar21 ^ (uint)pcVar16;
  uVar21 = (uVar21 ^ uVar21 >> 0x10) * -0x7a143595;
  uVar21 = (uVar21 ^ uVar21 >> 0xd) * -0x3d4d51cb;
  return (uint *)(ulong)(uVar21 ^ uVar21 >> 0x10);
}



/* Entry: 0038d2e4; end: 0038d2eb;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_0038d2e4(undefined8 param_1,ulong param_2,undefined8 param_3,byte *param_4)

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



/* Entry: 0038d2ec; end: 0038d38b;  */

void FUN_0038d2ec(long *param_1,int param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  
  FUN_003ec0c8(0x11);
  puVar1 = (undefined4 *)((long)param_1 + 9);
  if (*param_1 != 0) {
    puVar1 = (undefined4 *)param_1[2];
  }
  *puVar1 = 0x6080000;
  *(bool *)(puVar1 + 1) = param_2 != 0;
  *(undefined4 *)((long)puVar1 + 5) = 0;
  *(char *)((long)puVar1 + 9) = (char)((ulong)param_3 >> 0x38);
  *(char *)((long)puVar1 + 10) = (char)((ulong)param_3 >> 0x30);
  *(char *)((long)puVar1 + 0xb) = (char)((ulong)param_3 >> 0x28);
  *(char *)(puVar1 + 3) = (char)((ulong)param_3 >> 0x20);
  *(char *)((long)puVar1 + 0xd) = (char)((ulong)param_3 >> 0x18);
  *(char *)((long)puVar1 + 0xe) = (char)((ulong)param_3 >> 0x10);
  *(char *)((long)puVar1 + 0xf) = (char)((ulong)param_3 >> 8);
  *(char *)(puVar1 + 4) = (char)param_3;
  return;
}



/* Entry: 0038d38c; end: 0038d4c3;  */

void FUN_0038d38c(undefined8 *param_1,byte *****param_2,byte *****param_3,long *param_4,
                 long *param_5,int param_6)

{
  undefined4 *puVar1;
  byte *****pppppbVar2;
  byte ****ppppbVar3;
  uint uVar4;
  undefined8 *extraout_x8;
  byte ****ppppbVar5;
  long *extraout_x8_00;
  byte *pbVar6;
  byte ****ppppbVar7;
  byte ****ppppbVar8;
  ulong uVar9;
  byte ****unaff_x20;
  byte **ppbStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_61;
  byte ****ppppbStack_60;
  long *plStack_58;
  byte bStack_49;
  byte ***pppbStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  if (((int)param_3 == 8) && ((uint)param_4 < 2)) {
    *(byte *)param_2 = 0;
    *(byte *)((long)param_2 + 1) = (byte)param_4;
    param_2[1] = (byte ****)0x0;
    *param_1 = 0;
  }
  else {
    pppbStack_48 = (byte ***)((ulong)param_3 & 0xffffffff);
    uStack_40 = 0x5606ec;
    uStack_38 = (ulong)param_4 & 0xffffffff;
    uStack_30 = 0x560664;
    FUN_0056189c(&ppppbStack_60,"invalid ping: length=%d, flags=%02x",0x23,&pppbStack_48,2);
    param_4 = plStack_58;
    param_3 = (byte *****)ppppbStack_60;
    if (-1 < (char)bStack_49) {
      param_4 = (long *)(ulong)bStack_49;
      param_3 = &ppppbStack_60;
    }
    uStack_78 = 0;
    uStack_70 = 0;
    ppbStack_80 = (byte **)0x0;
    param_5 = (long *)&uStack_61;
    param_6 = (int)&ppbStack_80;
    FUN_003b646c(param_1,2);
    param_2 = (byte *****)&pppbStack_48;
    pppbStack_48 = &ppbStack_80;
    FUN_0033d548();
    unaff_x20 = (byte ****)&ppbStack_80;
    if ((char)bStack_49 < '\0') {
      param_2 = (byte *****)ppppbStack_60;
      __ZdlPv();
      unaff_x20 = (byte ****)&ppbStack_80;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  pppbStack_48 = (byte ***)unaff_x20;
  FUN_0033d548(&pppbStack_48);
  if ((char)bStack_49 < '\0') {
    __ZdlPv(ppppbStack_60);
  }
  __Unwind_Resume();
  pbVar6 = (byte *)((long)param_5 + 9);
  if (*param_5 != 0) {
    pbVar6 = (byte *)param_5[2];
  }
  uVar9 = param_5[1] & 0xff;
  if (*param_5 != 0) {
    uVar9 = param_5[1];
  }
  uVar4 = (uint)*(byte *)param_2;
  if (*(byte *)param_2 != 8 && uVar9 != 0) {
    ppppbVar8 = param_2[1];
    do {
      uVar9 = uVar9 - 1;
      ppppbVar8 = (byte ****)
                  ((ulong)*pbVar6 << ((ulong)((uVar4 & 0xff) * -8 + 0x38) & 0x3f) | (ulong)ppppbVar8
                  );
      param_2[1] = ppppbVar8;
      uVar4 = uVar4 + 1;
      *(byte *)param_2 = (byte)uVar4;
      if ((uVar4 & 0xff) == 8) break;
      pbVar6 = pbVar6 + 1;
    } while (uVar9 != 0);
  }
  if ((uVar4 & 0xff) != 8) goto LAB_0038d6c4;
  if (param_6 == 0) {
    func_0x00772ee0();
    FUN_003ec0c8(0xd);
    if (param_4 != (long *)0x0) {
      *param_4 = *param_4 + 0xd;
    }
    puVar1 = (undefined4 *)((long)extraout_x8_00 + 9);
    if (*extraout_x8_00 != 0) {
      puVar1 = (undefined4 *)extraout_x8_00[2];
    }
    *puVar1 = 0x3040000;
    *(undefined1 *)(puVar1 + 1) = 0;
    *(char *)((long)puVar1 + 5) = (char)((ulong)param_2 >> 0x18);
    *(char *)((long)puVar1 + 6) = (char)((ulong)param_2 >> 0x10);
    *(char *)((long)puVar1 + 7) = (char)((ulong)param_2 >> 8);
    *(char *)(puVar1 + 2) = (char)param_2;
    *(char *)((long)puVar1 + 9) = (char)((ulong)param_3 >> 0x18);
    *(char *)((long)puVar1 + 10) = (char)((ulong)param_3 >> 0x10);
    *(char *)((long)puVar1 + 0xb) = (char)((ulong)param_3 >> 8);
    *(char *)(puVar1 + 3) = (char)param_3;
    return;
  }
  if (*(byte *)((long)param_2 + 1) != 0) {
    func_0x003851dc(param_3,param_2[1]);
    goto LAB_0038d6c4;
  }
  if (*(byte *)(param_3 + 0xc5) == 0) {
    pppppbVar2 = param_2;
    func_0x003c1f6c();
    ppppbVar3 = *pppppbVar2;
    FUN_003c1e28();
    ppppbVar5 = param_3[0x119];
    ppppbVar8 = (byte ****)0x7fffffffffffffff;
    if ((((ppppbVar5 != (byte ****)0x7fffffffffffffff) &&
         (ppppbVar7 = param_3[0x106], ppppbVar7 != (byte ****)0x7fffffffffffffff)) &&
        (ppppbVar8 = (byte ****)0x8000000000000000, ppppbVar5 != (byte ****)0x8000000000000000)) &&
       (ppppbVar7 != (byte ****)0x8000000000000000)) {
      if ((long)ppppbVar5 < 1) {
        if (-0x8000000000000000 - (long)ppppbVar5 <= (long)ppppbVar7) goto LAB_0038d5e8;
      }
      else if ((long)((ulong)ppppbVar5 ^ 0x7fffffffffffffff) < (long)ppppbVar7) {
        ppppbVar8 = (byte ****)0x7fffffffffffffff;
      }
      else {
LAB_0038d5e8:
        ppppbVar8 = (byte ****)((long)ppppbVar7 + (long)ppppbVar5);
      }
    }
    if (*(byte *)(param_3 + 0x19b) == 0) {
      pppppbVar2 = param_3 + 0x1f;
      func_0x0039d43c();
      if (pppppbVar2 != (byte *****)0x0) goto LAB_0038d638;
      ppppbVar8 = param_3[0x119];
      if (ppppbVar8 != (byte ****)0x8000000000000000) {
        ppppbVar5 = (byte ****)0x7fffffffffffffff;
        if ((long)ppppbVar8 < 0x7fffffffff922300) {
          ppppbVar5 = ppppbVar8 + 900000;
        }
        if (ppppbVar8 != (byte ****)0x7fffffffffffffff) {
          ppppbVar8 = ppppbVar5;
        }
        goto LAB_0038d638;
      }
    }
    else {
LAB_0038d638:
      if ((long)ppppbVar3 < (long)ppppbVar8) {
        FUN_00385260(param_3);
      }
    }
    param_3[0x119] = ppppbVar3;
  }
  if (cRam0000000000b5e770 == '\0') {
    ppppbVar8 = param_3[0x116];
    if (ppppbVar8 == param_3[0x117]) {
      ppppbVar8 = (byte ****)((ulong)((long)ppppbVar8 * 3) >> 1);
      if (ppppbVar8 < (byte ****)0x4) {
        ppppbVar8 = (byte ****)0x3;
      }
      param_3[0x117] = ppppbVar8;
      ppppbVar3 = param_3[0x118];
      FUN_00338cbc(ppppbVar3,(long)ppppbVar8 << 3);
      param_3[0x118] = ppppbVar3;
      ppppbVar8 = param_3[0x116];
    }
    else {
      ppppbVar3 = param_3[0x118];
    }
    *(int *)((long)param_3 + 0xcf4) = *(int *)((long)param_3 + 0xcf4) + 1;
    ppppbVar5 = param_2[1];
    param_3[0x116] = (byte ****)((long)ppppbVar8 + 1);
    ppppbVar3[(long)ppppbVar8] = (byte ***)ppppbVar5;
    FUN_00383c14(param_3,0x14);
  }
LAB_0038d6c4:
  *extraout_x8 = 0;
  return;
}



/* Entry: 0038d4c4; end: 0038d6df;  */

void FUN_0038d4c4(undefined8 *param_1,byte *param_2,long param_3,long *param_4,long *param_5,
                 int param_6)

{
  undefined4 *puVar1;
  byte *pbVar2;
  long lVar3;
  uint uVar4;
  long *extraout_x8;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  pbVar2 = (byte *)((long)param_5 + 9);
  if (*param_5 != 0) {
    pbVar2 = (byte *)param_5[2];
  }
  uVar8 = param_5[1] & 0xff;
  if (*param_5 != 0) {
    uVar8 = param_5[1];
  }
  uVar4 = (uint)*param_2;
  if (*param_2 != 8 && uVar8 != 0) {
    uVar7 = *(ulong *)(param_2 + 8);
    do {
      uVar8 = uVar8 - 1;
      uVar7 = (ulong)*pbVar2 << ((ulong)((uVar4 & 0xff) * -8 + 0x38) & 0x3f) | uVar7;
      *(ulong *)(param_2 + 8) = uVar7;
      uVar4 = uVar4 + 1;
      *param_2 = (byte)uVar4;
      if ((uVar4 & 0xff) == 8) break;
      pbVar2 = pbVar2 + 1;
    } while (uVar8 != 0);
  }
  if ((uVar4 & 0xff) != 8) goto LAB_0038d6c4;
  if (param_6 == 0) {
    func_0x00772ee0();
    FUN_003ec0c8(0xd);
    if (param_4 != (long *)0x0) {
      *param_4 = *param_4 + 0xd;
    }
    puVar1 = (undefined4 *)((long)extraout_x8 + 9);
    if (*extraout_x8 != 0) {
      puVar1 = (undefined4 *)extraout_x8[2];
    }
    *puVar1 = 0x3040000;
    *(undefined1 *)(puVar1 + 1) = 0;
    *(char *)((long)puVar1 + 5) = (char)((ulong)param_2 >> 0x18);
    *(char *)((long)puVar1 + 6) = (char)((ulong)param_2 >> 0x10);
    *(char *)((long)puVar1 + 7) = (char)((ulong)param_2 >> 8);
    *(char *)(puVar1 + 2) = (char)param_2;
    *(char *)((long)puVar1 + 9) = (char)((ulong)param_3 >> 0x18);
    *(char *)((long)puVar1 + 10) = (char)((ulong)param_3 >> 0x10);
    *(char *)((long)puVar1 + 0xb) = (char)((ulong)param_3 >> 8);
    *(char *)(puVar1 + 3) = (char)param_3;
    return;
  }
  if (param_2[1] != 0) {
    func_0x003851dc(param_3,*(undefined8 *)(param_2 + 8));
    goto LAB_0038d6c4;
  }
  if (*(char *)(param_3 + 0x628) == '\0') {
    pbVar2 = param_2;
    func_0x003c1f6c();
    lVar3 = *(long *)pbVar2;
    FUN_003c1e28();
    uVar8 = *(ulong *)(param_3 + 0x8c8);
    lVar9 = 0x7fffffffffffffff;
    if ((((uVar8 != 0x7fffffffffffffff) &&
         (lVar5 = *(long *)(param_3 + 0x830), lVar5 != 0x7fffffffffffffff)) &&
        (lVar9 = -0x8000000000000000, uVar8 != 0x8000000000000000)) &&
       (lVar5 != -0x8000000000000000)) {
      if ((long)uVar8 < 1) {
        if ((long)(-0x8000000000000000 - uVar8) <= lVar5) goto LAB_0038d5e8;
      }
      else if ((long)(uVar8 ^ 0x7fffffffffffffff) < lVar5) {
        lVar9 = 0x7fffffffffffffff;
      }
      else {
LAB_0038d5e8:
        lVar9 = lVar5 + uVar8;
      }
    }
    if (*(char *)(param_3 + 0xcd8) == '\0') {
      lVar5 = param_3 + 0xf8;
      func_0x0039d43c();
      if (lVar5 != 0) goto LAB_0038d638;
      lVar9 = *(long *)(param_3 + 0x8c8);
      if (lVar9 != -0x8000000000000000) {
        lVar5 = 0x7fffffffffffffff;
        if (lVar9 < 0x7fffffffff922300) {
          lVar5 = lVar9 + 7200000;
        }
        if (lVar9 != 0x7fffffffffffffff) {
          lVar9 = lVar5;
        }
        goto LAB_0038d638;
      }
    }
    else {
LAB_0038d638:
      if (lVar3 < lVar9) {
        FUN_00385260(param_3);
      }
    }
    *(long *)(param_3 + 0x8c8) = lVar3;
  }
  if (cRam0000000000b5e770 == '\0') {
    lVar9 = *(long *)(param_3 + 0x8b0);
    if (lVar9 == *(long *)(param_3 + 0x8b8)) {
      uVar8 = (ulong)(lVar9 * 3) >> 1;
      if (uVar8 < 4) {
        uVar8 = 3;
      }
      *(ulong *)(param_3 + 0x8b8) = uVar8;
      lVar3 = *(long *)(param_3 + 0x8c0);
      FUN_00338cbc(lVar3,uVar8 << 3);
      *(long *)(param_3 + 0x8c0) = lVar3;
      lVar9 = *(long *)(param_3 + 0x8b0);
    }
    else {
      lVar3 = *(long *)(param_3 + 0x8c0);
    }
    *(int *)(param_3 + 0xcf4) = *(int *)(param_3 + 0xcf4) + 1;
    uVar6 = *(undefined8 *)(param_2 + 8);
    *(long *)(param_3 + 0x8b0) = lVar9 + 1;
    *(undefined8 *)(lVar3 + lVar9 * 8) = uVar6;
    FUN_00383c14(param_3,0x14);
  }
LAB_0038d6c4:
  *param_1 = 0;
  return;
}



/* Entry: 0038d6e0; end: 0038d783;  */

void FUN_0038d6e0(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined4 *puVar1;
  
  FUN_003ec0c8(0xd);
  if (param_4 != (long *)0x0) {
    *param_4 = *param_4 + 0xd;
  }
  puVar1 = (undefined4 *)((long)param_1 + 9);
  if (*param_1 != 0) {
    puVar1 = (undefined4 *)param_1[2];
  }
  *puVar1 = 0x3040000;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(char *)((long)puVar1 + 5) = (char)((ulong)param_2 >> 0x18);
  *(char *)((long)puVar1 + 6) = (char)((ulong)param_2 >> 0x10);
  *(char *)((long)puVar1 + 7) = (char)((ulong)param_2 >> 8);
  *(char *)(puVar1 + 2) = (char)param_2;
  *(char *)((long)puVar1 + 9) = (char)((ulong)param_3 >> 0x18);
  *(char *)((long)puVar1 + 10) = (char)((ulong)param_3 >> 0x10);
  *(char *)((long)puVar1 + 0xb) = (char)((ulong)param_3 >> 8);
  *(char *)(puVar1 + 3) = (char)param_3;
  return;
}



/* Entry: 0038d784; end: 0038d7ff;  */

void FUN_0038d784(long param_1,undefined8 param_2,undefined8 param_3,char *param_4,int param_5)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 ****ppppuVar5;
  code *pcVar6;
  char *pcVar7;
  uint uVar8;
  char *pcVar9;
  byte bVar10;
  int iVar11;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  char *pcVar12;
  long *extraout_x8_01;
  long *extraout_x8_02;
  char *pcVar13;
  char *pcVar15;
  ushort *puVar16;
  ulong uVar17;
  undefined8 *unaff_x20;
  ulong uVar18;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  char *pcStack_1d8;
  undefined8 ***pppuStack_1d0;
  ulong uStack_1c8;
  byte bStack_1b9;
  char acStack_1b8 [31];
  undefined1 uStack_199;
  ulong uStack_198;
  ulong uStack_190;
  char *pcStack_188;
  char *pcStack_180;
  undefined1 *puStack_178;
  long lStack_170;
  undefined1 auStack_168 [32];
  char *pcStack_148;
  undefined8 uStack_140;
  long lStack_118;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  char cStack_b1;
  char *pcStack_b0;
  char *pcStack_a8;
  byte bStack_99;
  undefined1 *puStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  byte abStack_48 [32];
  long lStack_28;
  char *pcVar14;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  *(int *)(param_1 + 0xcf4) = *(int *)(param_1 + 0xcf4) + 1;
  pcVar12 = (char *)(param_1 + 0x630);
  pcVar9 = param_4;
  FUN_0038d6e0(abStack_48,param_2,param_3);
  pcVar7 = (char *)abStack_48;
  FUN_003ecb34();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
  if ((int)pcVar7 == 4) {
    *pcVar12 = '\0';
    *extraout_x8 = 0;
  }
  else {
    puStack_98 = (undefined1 *)((ulong)pcVar7 & 0xffffffff);
    uStack_90 = 0x5606ec;
    uStack_88 = (ulong)param_4 & 0xffffffff;
    uStack_80 = 0x560664;
    FUN_0056189c(&pcStack_b0,"invalid rst_stream: length=%d, flags=%02x",0x29,&puStack_98,2);
    param_4 = pcStack_a8;
    pcVar7 = pcStack_b0;
    if (-1 < (char)bStack_99) {
      param_4 = (char *)(ulong)bStack_99;
      pcVar7 = (char *)&pcStack_b0;
    }
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d0 = 0;
    pcVar9 = &cStack_b1;
    param_5 = (int)&uStack_d0;
    FUN_003b646c(extraout_x8,2);
    pcVar12 = (char *)&puStack_98;
    puStack_98 = (undefined1 *)&uStack_d0;
    FUN_0033d548();
    unaff_x20 = &uStack_d0;
    if ((char)bStack_99 < '\0') {
      pcVar12 = pcStack_b0;
      __ZdlPv();
      unaff_x20 = &uStack_d0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  puStack_98 = (undefined1 *)unaff_x20;
  FUN_0033d548(&puStack_98);
  if ((char)bStack_99 < '\0') {
    __ZdlPv(pcStack_b0);
  }
  __Unwind_Resume();
  lStack_118 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar15 = pcVar9 + 9;
  if (*(long *)pcVar9 != 0) {
    pcVar15 = *(char **)(pcVar9 + 0x10);
  }
  uVar18 = *(ulong *)(pcVar9 + 8) & 0xff;
  if (*(long *)pcVar9 != 0) {
    uVar18 = *(ulong *)(pcVar9 + 8);
  }
  bVar10 = *pcVar12;
  pcVar13 = pcVar15;
  pcVar14 = pcVar15;
  uVar17 = uVar18;
  if (bVar10 != 4 && uVar18 != 0) {
    do {
      uVar17 = uVar17 - 1;
      pcVar13 = pcVar14 + 1;
      pcVar12[(ulong)bVar10 + 1] = *pcVar14;
      bVar10 = bVar10 + 1;
      *pcVar12 = bVar10;
      pcVar14 = pcVar13;
    } while (bVar10 != 4 && uVar17 != 0);
  }
  *(char **)(param_4 + 0x138) = pcVar15 + *(long *)(param_4 + 0x138) + (uVar18 - (long)pcVar13);
  if (bVar10 != 4) goto LAB_0038db3c;
  if (param_5 == 0) {
    func_0x00772f18();
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x38db8c);
    (*pcVar6)();
  }
  uVar8 = (*(uint *)(pcVar12 + 1) & 0xff00ff00) >> 8 | (*(uint *)(pcVar12 + 1) & 0xff00ff) << 8;
  uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
  uVar18 = (ulong)uVar8;
  pcStack_180 = (char *)0x0;
  if ((uVar8 == 0) &&
     ((*(int *)(param_4 + 0x398) != 0 ||
      ((*(long *)(param_4 + 0x590) != 0 && (*(long *)(*(long *)(param_4 + 0x590) + 8) != 0)))))) {
    pcStack_1d8 = (char *)0x0;
LAB_0038db08:
    bVar4 = true;
  }
  else {
    acStack_1b8[8] = '\0';
    acStack_1b8[9] = '\0';
    acStack_1b8[10] = '\0';
    acStack_1b8[0xb] = '\0';
    acStack_1b8[0xc] = '\0';
    acStack_1b8[0xd] = '\0';
    acStack_1b8[0xe] = '\0';
    acStack_1b8[0xf] = '\0';
    acStack_1b8[0x10] = '\0';
    acStack_1b8[0x11] = '\0';
    acStack_1b8[0x12] = '\0';
    acStack_1b8[0x13] = '\0';
    acStack_1b8[0x14] = '\0';
    acStack_1b8[0x15] = '\0';
    acStack_1b8[0x16] = '\0';
    acStack_1b8[0x17] = '\0';
    acStack_1b8[0] = '\0';
    acStack_1b8[1] = '\0';
    acStack_1b8[2] = '\0';
    acStack_1b8[3] = '\0';
    acStack_1b8[4] = '\0';
    acStack_1b8[5] = '\0';
    acStack_1b8[6] = '\0';
    acStack_1b8[7] = '\0';
    FUN_003b646c(&uStack_198,2,"RST_STREAM",10,&uStack_199,acStack_1b8);
    pcStack_148 = "Received RST_STREAM with error code ";
    uStack_140 = 0x24;
    uVar17 = uVar18;
    func_0x005748b4(uVar18,auStack_168);
    lStack_170 = uVar17 - (long)auStack_168;
    puStack_178 = auStack_168;
    FUN_00575d30(&pppuStack_1d0,&pcStack_148,&puStack_178);
    ppppuVar5 = (undefined8 ****)pppuStack_1d0;
    if (-1 < (char)bStack_1b9) {
      uStack_1c8 = (ulong)bStack_1b9;
      ppppuVar5 = &pppuStack_1d0;
    }
    FUN_003be254(&uStack_190,&uStack_198,5,ppppuVar5,uStack_1c8);
    FUN_003be104(&pcStack_188,&uStack_190,7,uVar18);
    pcStack_1d8 = pcStack_188;
    if (pcStack_188 != (char *)0x0) {
      pcStack_188 = segment_command_00000020.segname + 0xe;
      pcStack_180 = pcStack_1d8;
    }
    if ((uStack_190 & 1) != 0) {
      FUN_0055293c();
    }
    if ((char)bStack_1b9 < '\0') {
      __ZdlPv(pppuStack_1d0);
    }
    if ((uStack_198 & 1) != 0) {
      FUN_0055293c();
    }
    pcStack_148 = acStack_1b8;
    FUN_0033d548(&pcStack_148);
    if (((ulong)pcStack_1d8 & 1) == 0) goto LAB_0038db08;
    pcVar12 = pcStack_1d8 + -1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar12,0x10);
      if (bVar4) {
        *(int *)pcVar12 = *(int *)pcVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar4 = false;
  }
  pcVar15 = (char *)((long)&MACH_HEADER.magic + 1);
  pcVar9 = (char *)((long)&MACH_HEADER.magic + 1);
  FUN_003870a0(pcVar7);
  pcVar12 = pcStack_1d8;
  pcVar7 = param_4;
  if (((ulong)pcStack_1d8 & 1) != 0) {
    FUN_0055293c();
    pcVar7 = param_4;
  }
  param_4 = pcVar15;
  if (!bVar4) {
    FUN_0055293c();
    pcVar12 = pcStack_1d8;
  }
LAB_0038db3c:
  uVar8 = (uint)param_4;
  *extraout_x8_00 = 0;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pcVar7 != 0) {
    func_0x0040cf10();
    FUN_0033c494(&uStack_190);
    if ((char)bStack_1b9 < '\0') {
      __ZdlPv(pppuStack_1d0);
    }
    FUN_0033c494(&uStack_198);
    pcStack_148 = acStack_1b8;
    FUN_0033d548(&pcStack_148);
    FUN_0033c494(&pcStack_180);
  }
  __Unwind_Resume();
  lStack_228 = *(long *)PTR____stack_chk_guard_00999f88;
  if (pcVar9 == (char *)0x0) {
    iVar11 = 0;
  }
  else {
    iVar11 = 0;
    pcVar15 = (char *)0x0;
    do {
      iVar11 = iVar11 + ((uint)(*(int *)(pcVar7 + (long)pcVar15 * 4) !=
                               *(int *)(pcVar12 + (long)pcVar15 * 4)) |
                        uVar8 >> (ulong)((uint)pcVar15 & 0x1f) & 1);
      pcVar15 = pcVar15 + 1;
    } while (pcVar9 != pcVar15);
    iVar11 = iVar11 * 6;
  }
  FUN_003ec0c8(&lStack_248,iVar11 + 9);
  extraout_x8_01[1] = lStack_240;
  *extraout_x8_01 = lStack_248;
  extraout_x8_01[3] = lStack_230;
  extraout_x8_01[2] = lStack_238;
  puVar1 = (undefined1 *)((long)extraout_x8_01 + 9);
  if (*extraout_x8_01 != 0) {
    puVar1 = (undefined1 *)extraout_x8_01[2];
  }
  *puVar1 = (char)((uint)iVar11 >> 0x10);
  puVar1[1] = (char)((uint)iVar11 >> 8);
  puVar1[2] = (char)iVar11;
  *(undefined2 *)(puVar1 + 3) = 4;
  puVar16 = (ushort *)(puVar1 + 9);
  *(undefined4 *)(puVar1 + 5) = 0;
  if (pcVar9 != (char *)0x0) {
    pcVar15 = (char *)0x0;
    do {
      if ((*(int *)(pcVar7 + (long)pcVar15 * 4) != *(int *)(pcVar12 + (long)pcVar15 * 4)) ||
         ((uVar8 >> (ulong)((uint)pcVar15 & 0x1f) & 1) != 0)) {
        *puVar16 = *(ushort *)(&UNK_007f8ce8 + (long)pcVar15 * 2) >> 8 |
                   *(ushort *)(&UNK_007f8ce8 + (long)pcVar15 * 2) << 8;
        pcVar13 = pcVar7 + (long)pcVar15 * 4;
        *(char *)(puVar16 + 1) = pcVar13[3];
        *(char *)((long)puVar16 + 3) = (char)(short)*(qword *)(pcVar13 + 2);
        *(char *)(puVar16 + 2) = (char)((uint)*(undefined4 *)pcVar13 >> 8);
        *(char *)((long)puVar16 + 5) = (char)*(undefined4 *)pcVar13;
        puVar16 = puVar16 + 3;
        *(undefined4 *)(pcVar12 + (long)pcVar15 * 4) = *(undefined4 *)pcVar13;
      }
      pcVar15 = pcVar15 + 1;
    } while (pcVar9 != pcVar15);
  }
  puVar1 = (undefined1 *)((long)extraout_x8_01 + 9);
  if (*extraout_x8_01 != 0) {
    puVar1 = (undefined1 *)extraout_x8_01[2];
  }
  uVar18 = extraout_x8_01[1] & 0xff;
  if (*extraout_x8_01 != 0) {
    uVar18 = extraout_x8_01[1];
  }
  if (puVar16 == (ushort *)(puVar1 + uVar18)) {
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_228) {
      return;
    }
  }
  else {
    func_0x00772f50();
  }
  ___stack_chk_fail();
  FUN_003ec0c8(9);
  puVar2 = (undefined4 *)((long)extraout_x8_02 + 9);
  if (*extraout_x8_02 != 0) {
    puVar2 = (undefined4 *)extraout_x8_02[2];
  }
  *puVar2 = 0x4000000;
  *(undefined1 *)(puVar2 + 1) = 1;
  *(undefined4 *)((long)puVar2 + 5) = 0;
  return;
}



/* Entry: 0038d800; end: 0038d927;  */

void FUN_0038d800(undefined8 *param_1,char *param_2,char *param_3,char *param_4,long *param_5,
                 int param_6)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 ****ppppuVar5;
  code *pcVar6;
  uint uVar7;
  byte bVar8;
  int iVar9;
  undefined8 *extraout_x8;
  char *pcVar10;
  long *extraout_x8_00;
  long *extraout_x8_01;
  char *pcVar11;
  long *plVar13;
  ushort *puVar14;
  ulong uVar15;
  undefined8 *unaff_x20;
  ulong uVar16;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  char *pcStack_188;
  undefined8 ***pppuStack_180;
  ulong uStack_178;
  byte bStack_169;
  char acStack_168 [31];
  undefined1 uStack_149;
  ulong uStack_148;
  ulong uStack_140;
  char *pcStack_138;
  char *pcStack_130;
  undefined1 *puStack_128;
  long lStack_120;
  undefined1 auStack_118 [32];
  char *pcStack_f8;
  undefined8 uStack_f0;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_61;
  char *pcStack_60;
  char *pcStack_58;
  byte bStack_49;
  undefined1 *puStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  char *pcVar12;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  if ((int)param_3 == 4) {
    *param_2 = '\0';
    *param_1 = 0;
  }
  else {
    puStack_48 = (undefined1 *)((ulong)param_3 & 0xffffffff);
    uStack_40 = 0x5606ec;
    uStack_38 = (ulong)param_4 & 0xffffffff;
    uStack_30 = 0x560664;
    FUN_0056189c(&pcStack_60,"invalid rst_stream: length=%d, flags=%02x",0x29,&puStack_48,2);
    param_4 = pcStack_58;
    param_3 = pcStack_60;
    if (-1 < (char)bStack_49) {
      param_4 = (char *)(ulong)bStack_49;
      param_3 = (char *)&pcStack_60;
    }
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    param_5 = (long *)&uStack_61;
    param_6 = (int)&uStack_80;
    FUN_003b646c(param_1,2);
    param_2 = (char *)&puStack_48;
    puStack_48 = (undefined1 *)&uStack_80;
    FUN_0033d548();
    unaff_x20 = &uStack_80;
    if ((char)bStack_49 < '\0') {
      param_2 = pcStack_60;
      __ZdlPv();
      unaff_x20 = &uStack_80;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  puStack_48 = (undefined1 *)unaff_x20;
  FUN_0033d548(&puStack_48);
  if ((char)bStack_49 < '\0') {
    __ZdlPv(pcStack_60);
  }
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar10 = (char *)((long)param_5 + 9);
  if (*param_5 != 0) {
    pcVar10 = (char *)param_5[2];
  }
  uVar16 = param_5[1] & 0xff;
  if (*param_5 != 0) {
    uVar16 = param_5[1];
  }
  bVar8 = *param_2;
  pcVar11 = pcVar10;
  pcVar12 = pcVar10;
  uVar15 = uVar16;
  if (bVar8 != 4 && uVar16 != 0) {
    do {
      uVar15 = uVar15 - 1;
      pcVar11 = pcVar12 + 1;
      param_2[(ulong)bVar8 + 1] = *pcVar12;
      bVar8 = bVar8 + 1;
      *param_2 = bVar8;
      pcVar12 = pcVar11;
    } while (bVar8 != 4 && uVar15 != 0);
  }
  *(char **)(param_4 + 0x138) = pcVar10 + *(long *)(param_4 + 0x138) + (uVar16 - (long)pcVar11);
  if (bVar8 != 4) goto LAB_0038db3c;
  if (param_6 == 0) {
    func_0x00772f18();
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x38db8c);
    (*pcVar6)();
  }
  uVar7 = (*(uint *)(param_2 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 1) & 0xff00ff) << 8;
  uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar16 = (ulong)uVar7;
  pcStack_130 = (char *)0x0;
  if ((uVar7 == 0) &&
     ((*(int *)(param_4 + 0x398) != 0 ||
      ((*(long *)(param_4 + 0x590) != 0 && (*(long *)(*(long *)(param_4 + 0x590) + 8) != 0)))))) {
    pcStack_188 = (char *)0x0;
LAB_0038db08:
    bVar4 = true;
  }
  else {
    acStack_168[8] = '\0';
    acStack_168[9] = '\0';
    acStack_168[10] = '\0';
    acStack_168[0xb] = '\0';
    acStack_168[0xc] = '\0';
    acStack_168[0xd] = '\0';
    acStack_168[0xe] = '\0';
    acStack_168[0xf] = '\0';
    acStack_168[0x10] = '\0';
    acStack_168[0x11] = '\0';
    acStack_168[0x12] = '\0';
    acStack_168[0x13] = '\0';
    acStack_168[0x14] = '\0';
    acStack_168[0x15] = '\0';
    acStack_168[0x16] = '\0';
    acStack_168[0x17] = '\0';
    acStack_168[0] = '\0';
    acStack_168[1] = '\0';
    acStack_168[2] = '\0';
    acStack_168[3] = '\0';
    acStack_168[4] = '\0';
    acStack_168[5] = '\0';
    acStack_168[6] = '\0';
    acStack_168[7] = '\0';
    FUN_003b646c(&uStack_148,2,"RST_STREAM",10,&uStack_149,acStack_168);
    pcStack_f8 = "Received RST_STREAM with error code ";
    uStack_f0 = 0x24;
    uVar15 = uVar16;
    func_0x005748b4(uVar16,auStack_118);
    lStack_120 = uVar15 - (long)auStack_118;
    puStack_128 = auStack_118;
    FUN_00575d30(&pppuStack_180,&pcStack_f8,&puStack_128);
    ppppuVar5 = (undefined8 ****)pppuStack_180;
    if (-1 < (char)bStack_169) {
      uStack_178 = (ulong)bStack_169;
      ppppuVar5 = &pppuStack_180;
    }
    FUN_003be254(&uStack_140,&uStack_148,5,ppppuVar5,uStack_178);
    FUN_003be104(&pcStack_138,&uStack_140,7,uVar16);
    pcStack_188 = pcStack_138;
    if (pcStack_138 != (char *)0x0) {
      pcStack_138 = segment_command_00000020.segname + 0xe;
      pcStack_130 = pcStack_188;
    }
    if ((uStack_140 & 1) != 0) {
      FUN_0055293c();
    }
    if ((char)bStack_169 < '\0') {
      __ZdlPv(pppuStack_180);
    }
    if ((uStack_148 & 1) != 0) {
      FUN_0055293c();
    }
    pcStack_f8 = acStack_168;
    FUN_0033d548(&pcStack_f8);
    if (((ulong)pcStack_188 & 1) == 0) goto LAB_0038db08;
    pcVar10 = pcStack_188 + -1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar10,0x10);
      if (bVar4) {
        *(int *)pcVar10 = *(int *)pcVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar4 = false;
  }
  pcVar10 = (char *)((long)&MACH_HEADER.magic + 1);
  param_5 = (long *)((long)&MACH_HEADER.magic + 1);
  FUN_003870a0(param_3);
  param_2 = pcStack_188;
  param_3 = param_4;
  if (((ulong)pcStack_188 & 1) != 0) {
    FUN_0055293c();
    param_3 = param_4;
  }
  param_4 = pcVar10;
  if (!bVar4) {
    FUN_0055293c();
    param_2 = pcStack_188;
  }
LAB_0038db3c:
  uVar7 = (uint)param_4;
  *extraout_x8 = 0;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  if ((int)param_3 != 0) {
    func_0x0040cf10();
    FUN_0033c494(&uStack_140);
    if ((char)bStack_169 < '\0') {
      __ZdlPv(pppuStack_180);
    }
    FUN_0033c494(&uStack_148);
    pcStack_f8 = acStack_168;
    FUN_0033d548(&pcStack_f8);
    FUN_0033c494(&pcStack_130);
  }
  __Unwind_Resume();
  lStack_1d8 = *(long *)PTR____stack_chk_guard_00999f88;
  if (param_5 == (long *)0x0) {
    iVar9 = 0;
  }
  else {
    iVar9 = 0;
    plVar13 = (long *)0x0;
    do {
      iVar9 = iVar9 + ((uint)(*(int *)(param_3 + (long)plVar13 * 4) !=
                             *(int *)(param_2 + (long)plVar13 * 4)) |
                      uVar7 >> (ulong)((uint)plVar13 & 0x1f) & 1);
      plVar13 = (long *)((long)plVar13 + 1);
    } while (param_5 != plVar13);
    iVar9 = iVar9 * 6;
  }
  FUN_003ec0c8(&lStack_1f8,iVar9 + 9);
  extraout_x8_00[1] = lStack_1f0;
  *extraout_x8_00 = lStack_1f8;
  extraout_x8_00[3] = lStack_1e0;
  extraout_x8_00[2] = lStack_1e8;
  puVar1 = (undefined1 *)((long)extraout_x8_00 + 9);
  if (*extraout_x8_00 != 0) {
    puVar1 = (undefined1 *)extraout_x8_00[2];
  }
  *puVar1 = (char)((uint)iVar9 >> 0x10);
  puVar1[1] = (char)((uint)iVar9 >> 8);
  puVar1[2] = (char)iVar9;
  *(undefined2 *)(puVar1 + 3) = 4;
  puVar14 = (ushort *)(puVar1 + 9);
  *(undefined4 *)(puVar1 + 5) = 0;
  if (param_5 != (long *)0x0) {
    plVar13 = (long *)0x0;
    do {
      if ((*(int *)(param_3 + (long)plVar13 * 4) != *(int *)(param_2 + (long)plVar13 * 4)) ||
         ((uVar7 >> (ulong)((uint)plVar13 & 0x1f) & 1) != 0)) {
        *puVar14 = *(ushort *)(&UNK_007f8ce8 + (long)plVar13 * 2) >> 8 |
                   *(ushort *)(&UNK_007f8ce8 + (long)plVar13 * 2) << 8;
        pcVar10 = param_3 + (long)plVar13 * 4;
        *(char *)(puVar14 + 1) = pcVar10[3];
        *(char *)((long)puVar14 + 3) = (char)(short)*(qword *)(pcVar10 + 2);
        *(char *)(puVar14 + 2) = (char)((uint)*(undefined4 *)pcVar10 >> 8);
        *(char *)((long)puVar14 + 5) = (char)*(undefined4 *)pcVar10;
        puVar14 = puVar14 + 3;
        *(undefined4 *)(param_2 + (long)plVar13 * 4) = *(undefined4 *)pcVar10;
      }
      plVar13 = (long *)((long)plVar13 + 1);
    } while (param_5 != plVar13);
  }
  puVar1 = (undefined1 *)((long)extraout_x8_00 + 9);
  if (*extraout_x8_00 != 0) {
    puVar1 = (undefined1 *)extraout_x8_00[2];
  }
  uVar16 = extraout_x8_00[1] & 0xff;
  if (*extraout_x8_00 != 0) {
    uVar16 = extraout_x8_00[1];
  }
  if (puVar14 == (ushort *)(puVar1 + uVar16)) {
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1d8) {
      return;
    }
  }
  else {
    func_0x00772f50();
  }
  ___stack_chk_fail();
  FUN_003ec0c8(9);
  puVar2 = (undefined4 *)((long)extraout_x8_01 + 9);
  if (*extraout_x8_01 != 0) {
    puVar2 = (undefined4 *)extraout_x8_01[2];
  }
  *puVar2 = 0x4000000;
  *(undefined1 *)(puVar2 + 1) = 1;
  *(undefined4 *)((long)puVar2 + 5) = 0;
  return;
}



/* Entry: 0038d928; end: 0038dc1f;  */

void FUN_0038d928(undefined8 *param_1,char *param_2,long param_3,long param_4,long *param_5,
                 int param_6)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 ****ppppuVar5;
  code *pcVar6;
  uint uVar7;
  long lVar8;
  byte bVar9;
  int iVar10;
  char *pcVar11;
  long *extraout_x8;
  long *extraout_x8_00;
  char *pcVar12;
  long *plVar14;
  ushort *puVar15;
  ulong uVar16;
  ulong uVar17;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  char *pcStack_108;
  undefined8 ***pppuStack_100;
  ulong uStack_f8;
  byte bStack_e9;
  char acStack_e8 [31];
  undefined1 uStack_c9;
  ulong uStack_c8;
  ulong uStack_c0;
  char *pcStack_b8;
  char *pcStack_b0;
  undefined1 *puStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [32];
  char *pcStack_78;
  undefined8 uStack_70;
  long lStack_48;
  char *pcVar13;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar11 = (char *)((long)param_5 + 9);
  if (*param_5 != 0) {
    pcVar11 = (char *)param_5[2];
  }
  uVar17 = param_5[1] & 0xff;
  if (*param_5 != 0) {
    uVar17 = param_5[1];
  }
  bVar9 = *param_2;
  pcVar12 = pcVar11;
  pcVar13 = pcVar11;
  uVar16 = uVar17;
  if (bVar9 != 4 && uVar17 != 0) {
    do {
      uVar16 = uVar16 - 1;
      pcVar12 = pcVar13 + 1;
      param_2[(ulong)bVar9 + 1] = *pcVar13;
      bVar9 = bVar9 + 1;
      *param_2 = bVar9;
      pcVar13 = pcVar12;
    } while (bVar9 != 4 && uVar16 != 0);
  }
  *(char **)(param_4 + 0x138) = pcVar11 + *(long *)(param_4 + 0x138) + (uVar17 - (long)pcVar12);
  if (bVar9 != 4) goto LAB_0038db3c;
  if (param_6 == 0) {
    func_0x00772f18();
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x38db8c);
    (*pcVar6)();
  }
  uVar7 = (*(uint *)(param_2 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 1) & 0xff00ff) << 8;
  uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar17 = (ulong)uVar7;
  pcStack_b0 = (char *)0x0;
  if ((uVar7 == 0) &&
     ((*(int *)(param_4 + 0x398) != 0 ||
      ((*(long *)(param_4 + 0x590) != 0 && (*(long *)(*(long *)(param_4 + 0x590) + 8) != 0)))))) {
    pcStack_108 = (char *)0x0;
LAB_0038db08:
    bVar4 = true;
  }
  else {
    acStack_e8[8] = '\0';
    acStack_e8[9] = '\0';
    acStack_e8[10] = '\0';
    acStack_e8[0xb] = '\0';
    acStack_e8[0xc] = '\0';
    acStack_e8[0xd] = '\0';
    acStack_e8[0xe] = '\0';
    acStack_e8[0xf] = '\0';
    acStack_e8[0x10] = '\0';
    acStack_e8[0x11] = '\0';
    acStack_e8[0x12] = '\0';
    acStack_e8[0x13] = '\0';
    acStack_e8[0x14] = '\0';
    acStack_e8[0x15] = '\0';
    acStack_e8[0x16] = '\0';
    acStack_e8[0x17] = '\0';
    acStack_e8[0] = '\0';
    acStack_e8[1] = '\0';
    acStack_e8[2] = '\0';
    acStack_e8[3] = '\0';
    acStack_e8[4] = '\0';
    acStack_e8[5] = '\0';
    acStack_e8[6] = '\0';
    acStack_e8[7] = '\0';
    FUN_003b646c(&uStack_c8,2,"RST_STREAM",10,&uStack_c9,acStack_e8);
    pcStack_78 = "Received RST_STREAM with error code ";
    uStack_70 = 0x24;
    uVar16 = uVar17;
    func_0x005748b4(uVar17,auStack_98);
    lStack_a0 = uVar16 - (long)auStack_98;
    puStack_a8 = auStack_98;
    FUN_00575d30(&pppuStack_100,&pcStack_78,&puStack_a8);
    ppppuVar5 = (undefined8 ****)pppuStack_100;
    if (-1 < (char)bStack_e9) {
      uStack_f8 = (ulong)bStack_e9;
      ppppuVar5 = &pppuStack_100;
    }
    FUN_003be254(&uStack_c0,&uStack_c8,5,ppppuVar5,uStack_f8);
    FUN_003be104(&pcStack_b8,&uStack_c0,7,uVar17);
    pcStack_108 = pcStack_b8;
    if (pcStack_b8 != (char *)0x0) {
      pcStack_b8 = segment_command_00000020.segname + 0xe;
      pcStack_b0 = pcStack_108;
    }
    if ((uStack_c0 & 1) != 0) {
      FUN_0055293c();
    }
    if ((char)bStack_e9 < '\0') {
      __ZdlPv(pppuStack_100);
    }
    if ((uStack_c8 & 1) != 0) {
      FUN_0055293c();
    }
    pcStack_78 = acStack_e8;
    FUN_0033d548(&pcStack_78);
    if (((ulong)pcStack_108 & 1) == 0) goto LAB_0038db08;
    pcVar11 = pcStack_108 + -1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar11,0x10);
      if (bVar4) {
        *(int *)pcVar11 = *(int *)pcVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar4 = false;
  }
  lVar8 = 1;
  param_5 = (long *)((long)&MACH_HEADER.magic + 1);
  FUN_003870a0(param_3);
  param_2 = pcStack_108;
  param_3 = param_4;
  if (((ulong)pcStack_108 & 1) != 0) {
    FUN_0055293c();
    param_3 = param_4;
  }
  param_4 = lVar8;
  if (!bVar4) {
    FUN_0055293c();
    param_2 = pcStack_108;
  }
LAB_0038db3c:
  uVar7 = (uint)param_4;
  *param_1 = 0;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if ((int)param_3 != 0) {
    func_0x0040cf10();
    FUN_0033c494(&uStack_c0);
    if ((char)bStack_e9 < '\0') {
      __ZdlPv(pppuStack_100);
    }
    FUN_0033c494(&uStack_c8);
    pcStack_78 = acStack_e8;
    FUN_0033d548(&pcStack_78);
    FUN_0033c494(&pcStack_b0);
  }
  __Unwind_Resume();
  lStack_158 = *(long *)PTR____stack_chk_guard_00999f88;
  if (param_5 == (long *)0x0) {
    iVar10 = 0;
  }
  else {
    iVar10 = 0;
    plVar14 = (long *)0x0;
    do {
      iVar10 = iVar10 + ((uint)(*(int *)(param_3 + (long)plVar14 * 4) !=
                               *(int *)(param_2 + (long)plVar14 * 4)) |
                        uVar7 >> (ulong)((uint)plVar14 & 0x1f) & 1);
      plVar14 = (long *)((long)plVar14 + 1);
    } while (param_5 != plVar14);
    iVar10 = iVar10 * 6;
  }
  FUN_003ec0c8(&lStack_178,iVar10 + 9);
  extraout_x8[1] = lStack_170;
  *extraout_x8 = lStack_178;
  extraout_x8[3] = lStack_160;
  extraout_x8[2] = lStack_168;
  puVar2 = (undefined1 *)((long)extraout_x8 + 9);
  if (*extraout_x8 != 0) {
    puVar2 = (undefined1 *)extraout_x8[2];
  }
  *puVar2 = (char)((uint)iVar10 >> 0x10);
  puVar2[1] = (char)((uint)iVar10 >> 8);
  puVar2[2] = (char)iVar10;
  *(undefined2 *)(puVar2 + 3) = 4;
  puVar15 = (ushort *)(puVar2 + 9);
  *(undefined4 *)(puVar2 + 5) = 0;
  if (param_5 != (long *)0x0) {
    plVar14 = (long *)0x0;
    do {
      if ((*(int *)(param_3 + (long)plVar14 * 4) != *(int *)(param_2 + (long)plVar14 * 4)) ||
         ((uVar7 >> (ulong)((uint)plVar14 & 0x1f) & 1) != 0)) {
        *puVar15 = *(ushort *)(&UNK_007f8ce8 + (long)plVar14 * 2) >> 8 |
                   *(ushort *)(&UNK_007f8ce8 + (long)plVar14 * 2) << 8;
        puVar1 = (undefined4 *)(param_3 + (long)plVar14 * 4);
        *(undefined1 *)(puVar15 + 1) = *(undefined1 *)((long)puVar1 + 3);
        *(char *)((long)puVar15 + 3) = (char)*(undefined2 *)((long)puVar1 + 2);
        *(char *)(puVar15 + 2) = (char)((uint)*puVar1 >> 8);
        *(char *)((long)puVar15 + 5) = (char)*puVar1;
        puVar15 = puVar15 + 3;
        *(undefined4 *)(param_2 + (long)plVar14 * 4) = *puVar1;
      }
      plVar14 = (long *)((long)plVar14 + 1);
    } while (param_5 != plVar14);
  }
  puVar2 = (undefined1 *)((long)extraout_x8 + 9);
  if (*extraout_x8 != 0) {
    puVar2 = (undefined1 *)extraout_x8[2];
  }
  uVar17 = extraout_x8[1] & 0xff;
  if (*extraout_x8 != 0) {
    uVar17 = extraout_x8[1];
  }
  if (puVar15 == (ushort *)(puVar2 + uVar17)) {
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_158) {
      return;
    }
  }
  else {
    func_0x00772f50();
  }
  ___stack_chk_fail();
  FUN_003ec0c8(9);
  puVar1 = (undefined4 *)((long)extraout_x8_00 + 9);
  if (*extraout_x8_00 != 0) {
    puVar1 = (undefined4 *)extraout_x8_00[2];
  }
  *puVar1 = 0x4000000;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined4 *)((long)puVar1 + 5) = 0;
  return;
}



/* Entry: 0038dc20; end: 0038ddc7;  */

void FUN_0038dc20(long *param_1,long param_2,long param_3,uint param_4,long param_5)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  int iVar4;
  long *extraout_x8;
  long lVar5;
  ushort *puVar6;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  if (param_5 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    lVar5 = 0;
    do {
      iVar4 = iVar4 + ((uint)(*(int *)(param_3 + lVar5 * 4) != *(int *)(param_2 + lVar5 * 4)) |
                      param_4 >> (ulong)((uint)lVar5 & 0x1f) & 1);
      lVar5 = lVar5 + 1;
    } while (param_5 != lVar5);
    iVar4 = iVar4 * 6;
  }
  FUN_003ec0c8(&lStack_68,iVar4 + 9);
  param_1[1] = lStack_60;
  *param_1 = lStack_68;
  param_1[3] = lStack_50;
  param_1[2] = lStack_58;
  puVar2 = (undefined1 *)((long)param_1 + 9);
  if (*param_1 != 0) {
    puVar2 = (undefined1 *)param_1[2];
  }
  *puVar2 = (char)((uint)iVar4 >> 0x10);
  puVar2[1] = (char)((uint)iVar4 >> 8);
  puVar2[2] = (char)iVar4;
  *(undefined2 *)(puVar2 + 3) = 4;
  puVar6 = (ushort *)(puVar2 + 9);
  *(undefined4 *)(puVar2 + 5) = 0;
  if (param_5 != 0) {
    lVar5 = 0;
    do {
      if ((*(int *)(param_3 + lVar5 * 4) != *(int *)(param_2 + lVar5 * 4)) ||
         ((param_4 >> (ulong)((uint)lVar5 & 0x1f) & 1) != 0)) {
        *puVar6 = *(ushort *)(&UNK_007f8ce8 + lVar5 * 2) >> 8 |
                  *(ushort *)(&UNK_007f8ce8 + lVar5 * 2) << 8;
        puVar1 = (undefined4 *)(param_3 + lVar5 * 4);
        *(undefined1 *)(puVar6 + 1) = *(undefined1 *)((long)puVar1 + 3);
        *(char *)((long)puVar6 + 3) = (char)*(undefined2 *)((long)puVar1 + 2);
        *(char *)(puVar6 + 2) = (char)((uint)*puVar1 >> 8);
        *(char *)((long)puVar6 + 5) = (char)*puVar1;
        puVar6 = puVar6 + 3;
        *(undefined4 *)(param_2 + lVar5 * 4) = *puVar1;
      }
      lVar5 = lVar5 + 1;
    } while (param_5 != lVar5);
  }
  puVar2 = (undefined1 *)((long)param_1 + 9);
  if (*param_1 != 0) {
    puVar2 = (undefined1 *)param_1[2];
  }
  uVar3 = param_1[1] & 0xff;
  if (*param_1 != 0) {
    uVar3 = param_1[1];
  }
  if (puVar6 == (ushort *)(puVar2 + uVar3)) {
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
      return;
    }
  }
  else {
    func_0x00772f50();
  }
  ___stack_chk_fail();
  FUN_003ec0c8(9);
  puVar1 = (undefined4 *)((long)extraout_x8 + 9);
  if (*extraout_x8 != 0) {
    puVar1 = (undefined4 *)extraout_x8[2];
  }
  *puVar1 = 0x4000000;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined4 *)((long)puVar1 + 5) = 0;
  return;
}



/* Entry: 0038ddc8; end: 0038de13;  */

void FUN_0038ddc8(long *param_1)

{
  undefined4 *puVar1;
  
  FUN_003ec0c8(9);
  puVar1 = (undefined4 *)((long)param_1 + 9);
  if (*param_1 != 0) {
    puVar1 = (undefined4 *)param_1[2];
  }
  *puVar1 = 0x4000000;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined4 *)((long)puVar1 + 5) = 0;
  return;
}



/* Entry: 0038de14; end: 0038df47;  */

void FUN_0038de14(undefined8 *param_1,undefined4 *param_2,int param_3,int param_4,
                 undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_29;
  undefined8 *puStack_28;
  
  *(undefined8 **)(param_2 + 2) = param_5;
  uVar3 = param_5[1];
  uVar2 = *param_5;
  uVar4 = *(undefined8 *)((long)param_5 + 0xc);
  *(undefined8 *)(param_2 + 0xb) = *(undefined8 *)((long)param_5 + 0x14);
  *(undefined8 *)(param_2 + 9) = uVar4;
  *(undefined8 *)(param_2 + 8) = uVar3;
  *(undefined8 *)(param_2 + 6) = uVar2;
  *(undefined1 *)(param_2 + 4) = 0;
  *param_2 = 0;
  if (param_4 == 0) {
    if (((uint)(param_3 * -0x55555555) >> 1 | param_3 * -0x80000000) < 0x2aaaaaab) {
LAB_0038df08:
      *param_1 = 0;
      return;
    }
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_78 = 0;
    puVar1 = &uStack_78;
    FUN_003b646c(2,"settings frames must be a multiple of six bytes",0x2f,&uStack_29,&uStack_78);
  }
  else if (param_4 == 1) {
    *(undefined1 *)(param_2 + 4) = 1;
    if (param_3 == 0) goto LAB_0038df08;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_48 = 0;
    puVar1 = &uStack_48;
    FUN_003b646c(2,"non-empty settings ack frame received",0x25,&uStack_29,&uStack_48);
  }
  else {
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    puVar1 = &uStack_60;
    FUN_003b646c(2,"invalid flags on settings frame",0x1f,&uStack_29,&uStack_60);
  }
  puStack_28 = puVar1;
  FUN_0033d548(&puStack_28);
  return;
}



/* Entry: 0038df48; end: 0038e2c7;  */

void FUN_0038df48(undefined8 *param_1,uint *******param_2,uint *******param_3,uint ******param_4,
                 long *param_5,undefined8 param_6)

{
  byte bVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  dword *pdVar5;
  code *pcVar6;
  bool bVar7;
  uint *******pppppppuVar8;
  uint *******pppppppuVar9;
  byte *******pppppppbVar10;
  byte *******pppppppbVar11;
  int iVar12;
  uint *******pppppppuVar13;
  byte *******pppppppbVar14;
  byte *******pppppppbVar15;
  byte *******pppppppbVar16;
  byte *******pppppppbVar17;
  long *plVar18;
  int iVar19;
  undefined1 uVar20;
  uint uVar21;
  uint ******ppppppuVar22;
  long *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  ulong uVar23;
  byte ******ppppppbVar24;
  byte *****pppppbVar25;
  byte ****ppppbVar26;
  byte bVar27;
  byte *pbVar28;
  long lVar29;
  uint uVar30;
  byte ******ppppppbVar31;
  ulong uVar32;
  uint *******unaff_x20;
  uint *unaff_x21;
  uint *******unaff_x22;
  byte *pbVar33;
  byte *pbVar34;
  uint ******ppppppuVar35;
  uint ******ppppppuVar36;
  undefined8 uVar37;
  byte *****pppppbStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined1 uStack_299;
  byte ******ppppppbStack_298;
  ulong uStack_290;
  byte bStack_281;
  byte ******ppppppbStack_280;
  undefined1 *puStack_278;
  long lStack_270;
  undefined1 auStack_268 [32];
  char *pcStack_248;
  undefined8 uStack_240;
  long lStack_218;
  byte ******ppppppbStack_210;
  uint *****pppppuStack_200;
  byte ******ppppppbStack_1f8;
  undefined1 ****ppppuStack_1f0;
  code *pcStack_1e8;
  uint ****ppppuStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 uStack_1c1;
  byte ******ppppppbStack_1c0;
  byte ******ppppppbStack_1b8;
  byte bStack_1a9;
  uint *****pppppuStack_1a8;
  undefined8 uStack_1a0;
  ulong uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  uint *****pppppuStack_180;
  byte ******ppppppbStack_178;
  undefined1 ***pppuStack_170;
  code *pcStack_168;
  uint ******ppppppuStack_160;
  uint *puStack_158;
  uint ******ppppppuStack_150;
  uint ******ppppppuStack_148;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  byte *****pppppbStack_128;
  undefined8 uStack_120;
  uint ****ppppuStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  uint *****pppppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d1;
  char *pcStack_d0;
  undefined8 uStack_c8;
  uint *****pppppuStack_c0;
  uint uStack_b4;
  uint *****pppppuStack_b0;
  uint ******ppppppuStack_a8;
  uint *****pppppuStack_a0;
  byte bStack_91;
  undefined1 auStack_88 [32];
  long lStack_68;
  
  iVar12 = (int)param_6;
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar34 = (byte *)((long)param_5 + 9);
  if (*param_5 != 0) {
    pbVar34 = (byte *)param_5[2];
  }
  uVar23 = param_5[1] & 0xff;
  if (*param_5 != 0) {
    uVar23 = param_5[1];
  }
  pppppppuVar8 = param_2;
  pppppppuVar13 = param_3;
  iVar19 = iVar12;
  if (*(char *)(param_2 + 2) == '\0') {
    pbVar28 = pbVar34 + uVar23;
    unaff_x21 = (uint *)((long)param_2 + 0x14);
code_r0x0038dfc4:
    iVar19 = (int)param_6;
code_r0x0038dfd0:
    pbVar33 = pbVar34;
    unaff_x20 = param_3;
    unaff_x22 = param_2;
    switch(*(uint *)param_2) {
    case 0:
      if (pbVar34 == pbVar28) {
        *(uint *)param_2 = 0;
        if (iVar12 != 0) {
          ppppppuVar22 = param_2[1];
          ppppppuVar36 = param_2[4];
          ppppppuVar35 = param_2[3];
          uVar37 = *(undefined8 *)((long)param_2 + 0x24);
          *(undefined8 *)((long)ppppppuVar22 + 0x14) = *(undefined8 *)((long)param_2 + 0x2c);
          *(undefined8 *)((long)ppppppuVar22 + 0xc) = uVar37;
          ppppppuVar22[1] = (uint *****)ppppppuVar36;
          *ppppppuVar22 = (uint *****)ppppppuVar35;
          *(uint *)((long)param_3 + 0xcf4) = *(uint *)((long)param_3 + 0xcf4) + 1;
          FUN_0038ddc8(auStack_88);
          FUN_003ecb34(param_3 + 0xc6,auStack_88);
          pppppppuVar8 = param_3;
          FUN_00383c14(param_3,0xd);
          pppppppuVar13 = (uint *******)param_3[0x10];
          if (pppppppuVar13 != (uint *******)0x0) {
            pppppuStack_c0 = (uint *****)0x0;
            param_4 = &pppppuStack_c0;
            FUN_003c1e6c(&ppppppuStack_a8);
            pppppppuVar8 = (uint *******)&pppppuStack_c0;
            FUN_0033c494();
            param_3[0x10] = (uint ******)0x0;
          }
        }
        goto LAB_0038e128;
      }
      pbVar33 = pbVar34 + 1;
      *(ushort *)((long)param_2 + 0x12) = (ushort)*pbVar34 << 8;
      break;
    case 1:
      break;
    case 2:
      goto code_r0x0038e00c;
    case 3:
      goto code_r0x0038e020;
    case 4:
      goto code_r0x0038e038;
    case 5:
      goto code_r0x0038e050;
    default:
      goto code_r0x0038dfd0;
    }
    if (pbVar33 == pbVar28) {
      uVar21 = 1;
      goto code_r0x0038e124;
    }
    pbVar34 = pbVar33 + 1;
    *(ushort *)((long)param_2 + 0x12) = *(ushort *)((long)param_2 + 0x12) | (ushort)*pbVar33;
code_r0x0038e00c:
    if (pbVar34 == pbVar28) {
      uVar21 = 2;
      goto code_r0x0038e124;
    }
    pbVar33 = pbVar34 + 1;
    *unaff_x21 = (uint)*pbVar34 << 0x18;
code_r0x0038e020:
    if (pbVar33 == pbVar28) {
      uVar21 = 3;
      goto code_r0x0038e124;
    }
    pbVar34 = pbVar33 + 1;
    *unaff_x21 = *unaff_x21 | (uint)*pbVar33 << 0x10;
code_r0x0038e038:
    if (pbVar34 == pbVar28) {
      uVar21 = 4;
      goto code_r0x0038e124;
    }
    pbVar33 = pbVar34 + 1;
    *unaff_x21 = *unaff_x21 | (uint)*pbVar34 << 8;
code_r0x0038e050:
    if (pbVar33 != pbVar28) {
      *(uint *)param_2 = 0;
      pbVar34 = pbVar33 + 1;
      *(uint *)((long)param_2 + 0x14) = *(uint *)((long)param_2 + 0x14) | (uint)*pbVar33;
      pppppppuVar8 = (uint *******)(ulong)*(ushort *)((long)param_2 + 0x12);
      pppppppuVar13 = (uint *******)&uStack_b4;
      FUN_0039bcb0();
      if (((ulong)pppppppuVar8 & 1) != 0) {
        uVar23 = (ulong)uStack_b4;
        uVar21 = *unaff_x21;
        lVar29 = uVar23 * 0x20;
        uVar30 = *(uint *)(&UNK_009df2bc + lVar29);
        if ((uVar21 < uVar30) || (*(uint *)(&UNK_009df2c0 + lVar29) < uVar21)) {
          if (*(int *)(&UNK_009df2c4 + lVar29) == 0) {
            uVar2 = *(uint *)(&UNK_009df2c0 + uVar23 * 0x20);
            if (uVar21 <= *(uint *)(&UNK_009df2c0 + uVar23 * 0x20)) {
              uVar2 = uVar21;
            }
            bVar7 = uVar30 <= uVar21;
            uVar21 = uVar30;
            if (bVar7) {
              uVar21 = uVar2;
            }
            *unaff_x21 = uVar21;
          }
          else if (*(int *)(&UNK_009df2c4 + lVar29) == 1) {
            unaff_x22 = (uint *******)(&PTR_s_HEADER_TABLE_SIZE_009df2b0 + uVar23 * 4);
            uVar21 = *(uint *)(param_3 + 0xfd);
            uVar4 = *(undefined4 *)(&UNK_009df2c8 + uVar23 * 0x20);
            FUN_003ec14c(&ppppppuStack_a8,"HTTP2 settings error");
            func_0x0038d0a8(uVar21,uVar4,&ppppppuStack_a8,param_3 + 0xc6);
            pcStack_d0 = "invalid value %u passed for %s";
            uStack_c8 = 0x1e;
            FUN_0038e2c8(&ppppppuStack_a8,&pcStack_d0,unaff_x21,unaff_x22);
            param_4 = (uint ******)pppppuStack_a0;
            pppppppuVar13 = (uint *******)ppppppuStack_a8;
            if (-1 < (char)bStack_91) {
              param_4 = (uint ******)(ulong)bStack_91;
              pppppppuVar13 = &ppppppuStack_a8;
            }
            uStack_e8 = 0;
            uStack_e0 = 0;
            pppppuStack_f0 = (uint *****)0x0;
            iVar19 = (int)&pppppuStack_f0;
            FUN_003b646c(param_1,2,pppppppuVar13,param_4,&uStack_d1);
            pppppppuVar8 = (uint *******)&pppppuStack_b0;
            pppppuStack_b0 = (uint *****)&pppppuStack_f0;
            FUN_0033d548();
            unaff_x20 = (uint *******)&pppppuStack_f0;
            if ((char)bStack_91 < '\0') {
              __ZdlPv();
              pppppppuVar8 = (uint *******)ppppppuStack_a8;
              unaff_x20 = (uint *******)&pppppuStack_f0;
            }
            goto code_r0x0038e12c;
          }
        }
        if ((uStack_b4 == 3) && (*(uint *)((long)param_2 + 0x24) != uVar21)) {
          param_3[0x152] =
               (uint ******)
               ((long)param_3[0x152] + ((ulong)uVar21 - (ulong)*(uint *)((long)param_2 + 0x24)));
        }
        *(uint *)((long)param_2 + (uVar23 + 6) * 4) = uVar21;
      }
      goto code_r0x0038dfc4;
    }
    uVar21 = 5;
code_r0x0038e124:
    *(uint *)param_2 = uVar21;
  }
LAB_0038e128:
  *param_1 = 0;
code_r0x0038e12c:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  FUN_0033c494(&pppppuStack_c0);
  pppppppuVar9 = pppppppuVar8;
  __Unwind_Resume();
  puStack_100 = &stack0xfffffffffffffff0;
  pcStack_f8 = FUN_0038e2c8;
  lStack_108 = *(long *)PTR____stack_chk_guard_00999f88;
  ppppppuVar22 = *pppppppuVar9;
  pppppppbVar11 = (byte *******)pppppppuVar9[1];
  pppppbStack_128 = (byte *****)(ulong)*(uint *)pppppppuVar13;
  uStack_120 = 0x5606ec;
  ppppuStack_118 = (uint ****)*param_4;
  uStack_110 = 0x560e98;
  pppppppbVar16 = (byte *******)&pppppbStack_128;
  plVar18 = (long *)((long)&MACH_HEADER.magic + 2);
  FUN_0056189c();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_0038e344;
  pppppppbVar10 = (byte *******)((long)&MACH_HEADER.filetype + 1);
  pppppppbVar14 = pppppppbVar11;
  pppppppbVar17 = pppppppbVar16;
  ppppppuStack_160 = (uint ******)unaff_x22;
  puStack_158 = unaff_x21;
  ppppppuStack_150 = (uint ******)unaff_x20;
  ppppppuStack_148 = (uint ******)pppppppuVar8;
  ppuStack_140 = &puStack_100;
  FUN_003ec0c8();
  pppppppbVar16[2] = (byte ******)((long)pppppppbVar16[2] + 0xd);
  if ((int)pppppppbVar11 != 0) {
    puVar3 = (undefined4 *)((long)extraout_x8 + 9);
    if (*extraout_x8 != 0) {
      puVar3 = (undefined4 *)extraout_x8[2];
    }
    *puVar3 = 0x8040000;
    *(undefined1 *)(puVar3 + 1) = 0;
    *(char *)((long)puVar3 + 5) = (char)((ulong)ppppppuVar22 >> 0x18);
    *(char *)((long)puVar3 + 6) = (char)((ulong)ppppppuVar22 >> 0x10);
    *(char *)((long)puVar3 + 7) = (char)((ulong)ppppppuVar22 >> 8);
    *(char *)(puVar3 + 2) = (char)ppppppuVar22;
    *(char *)((long)puVar3 + 9) = (char)((ulong)pppppppbVar11 >> 0x18);
    *(char *)((long)puVar3 + 10) = (char)((ulong)pppppppbVar11 >> 0x10);
    *(char *)((long)puVar3 + 0xb) = (char)((ulong)pppppppbVar11 >> 8);
    *(char *)(puVar3 + 3) = (char)pppppppbVar11;
    return;
  }
  func_0x00772f88();
  pcStack_168 = FUN_0038e3ec;
  lStack_188 = *(long *)PTR____stack_chk_guard_00999f88;
  pppppuStack_180 = (uint *****)ppppppuVar22;
  ppppppbStack_178 = (byte ******)pppppppbVar11;
  pppuStack_170 = &ppuStack_140;
  if (((int)pppppppbVar14 == 4) && ((int)pppppppbVar17 == 0)) {
    *(byte *)pppppppbVar10 = 0;
    pbVar34 = (byte *)((long)pppppppbVar10 + 4);
    pbVar34[0] = 0;
    pbVar34[1] = 0;
    pbVar34[2] = 0;
    pbVar34[3] = 0;
    *extraout_x8_00 = 0;
  }
  else {
    pppppuStack_1a8 = (uint *****)((ulong)pppppppbVar14 & 0xffffffff);
    uStack_1a0 = 0x5606ec;
    uStack_198 = (ulong)pppppppbVar17 & 0xffffffff;
    uStack_190 = 0x560664;
    FUN_0056189c(&ppppppbStack_1c0,"invalid window update: length=%d, flags=%02x",0x2c,
                 &pppppuStack_1a8,2);
    pppppppbVar17 = (byte *******)ppppppbStack_1b8;
    pppppppbVar14 = (byte *******)ppppppbStack_1c0;
    if (-1 < (char)bStack_1a9) {
      pppppppbVar17 = (byte *******)(ulong)bStack_1a9;
      pppppppbVar14 = &ppppppbStack_1c0;
    }
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    ppppuStack_1e0 = (uint ****)0x0;
    plVar18 = (long *)&uStack_1c1;
    iVar19 = (int)&ppppuStack_1e0;
    FUN_003b646c(extraout_x8_00,2);
    pppppppbVar10 = (byte *******)&pppppuStack_1a8;
    pppppuStack_1a8 = &ppppuStack_1e0;
    FUN_0033d548();
    ppppppuVar22 = (uint ******)&ppppuStack_1e0;
    if ((char)bStack_1a9 < '\0') {
      pppppppbVar10 = (byte *******)ppppppbStack_1c0;
      __ZdlPv();
      ppppppuVar22 = (uint ******)&ppppuStack_1e0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  pppppuStack_1a8 = (uint *****)ppppppuVar22;
  FUN_0033d548(&pppppuStack_1a8);
  if ((char)bStack_1a9 < '\0') {
    __ZdlPv(ppppppbStack_1c0);
  }
  pppppppbVar11 = pppppppbVar10;
  __Unwind_Resume();
  pcStack_1e8 = FUN_0038e51c;
  lStack_218 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar34 = (byte *)((long)plVar18 + 9);
  if (*plVar18 != 0) {
    pbVar34 = (byte *)plVar18[2];
  }
  uVar23 = plVar18[1] & 0xff;
  if (*plVar18 != 0) {
    uVar23 = plVar18[1];
  }
  uVar21 = (uint)*(byte *)pppppppbVar11;
  pbVar28 = pbVar34;
  if (*(byte *)pppppppbVar11 != 4 && uVar23 != 0) {
    uVar30 = *(uint *)((long)pppppppbVar11 + 4);
    pbVar33 = pbVar34;
    uVar32 = uVar23;
    do {
      uVar32 = uVar32 - 1;
      pbVar28 = pbVar33 + 1;
      uVar30 = (uint)*pbVar33 << (ulong)((uVar21 & 0xff) * -8 + 0x18 & 0x1f) | uVar30;
      *(uint *)((long)pppppppbVar11 + 4) = uVar30;
      uVar21 = uVar21 + 1;
      *(byte *)pppppppbVar11 = (byte)uVar21;
      if ((uVar21 & 0xff) == 4) break;
      pbVar33 = pbVar28;
    } while (uVar32 != 0);
  }
  if (pppppppbVar17 != (byte *******)0x0) {
    pppppppbVar17[0x27] =
         (byte ******)
         ((long)pppppppbVar17[0x27] + (ulong)(uint)(((int)pbVar34 + (int)uVar23) - (int)pbVar28));
  }
  pppppppbVar15 = pppppppbVar14;
  ppppppbStack_210 = (byte ******)pppppppbVar16;
  pppppuStack_200 = (uint *****)ppppppuVar22;
  ppppppbStack_1f8 = (byte ******)pppppppbVar10;
  ppppuStack_1f0 = &pppuStack_170;
  if ((uVar21 & 0xff) == 4) {
    pppppppbVar11 = (byte *******)(ulong)*(uint *)((long)pppppppbVar11 + 4);
    uVar23 = (ulong)pppppppbVar11 & 0x7fffffff;
    if ((int)uVar23 == 0) {
      pcStack_248 = "invalid window update bytes: ";
      uStack_240 = 0x1d;
      func_0x005748b4(pppppppbVar11,auStack_268);
      lStack_270 = (long)pppppppbVar11 - (long)auStack_268;
      puStack_278 = auStack_268;
      FUN_00575d30(&ppppppbStack_298,&pcStack_248,&puStack_278);
      pppppppbVar16 = (byte *******)ppppppbStack_298;
      if (-1 < (char)bStack_281) {
        uStack_290 = (ulong)bStack_281;
        pppppppbVar16 = &ppppppbStack_298;
      }
      uStack_2b0 = 0;
      uStack_2a8 = 0;
      pppppbStack_2b8 = (byte *****)0x0;
      pppppppbVar14 = (byte *******)&pppppbStack_2b8;
      FUN_003b646c(extraout_x8_01,2,pppppppbVar16,uStack_290,&uStack_299,&pppppbStack_2b8);
      iVar12 = (int)pppppppbVar16;
      pppppppbVar11 = &ppppppbStack_280;
      ppppppbStack_280 = (byte ******)pppppppbVar14;
      FUN_0033d548();
      if ((char)bStack_281 < '\0') {
        pppppppbVar11 = (byte *******)ppppppbStack_298;
        __ZdlPv();
      }
      goto LAB_0038e6f4;
    }
    if (iVar19 == 0) {
      func_0x00772fc0();
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x38e728);
      (*pcVar6)();
    }
    if (*(int *)(pppppppbVar14 + 0x155) == 0) {
      ppppppbVar24 = pppppppbVar14[0x14d];
      ppppppbVar31 = (byte ******)((long)ppppppbVar24 + uVar23);
      pppppppbVar14[0x14d] = ppppppbVar31;
      if (((long)ppppppbVar24 < 1) && (0 < (long)ppppppbVar31)) {
        pdVar5 = &MACH_HEADER.ncmds;
LAB_0038e6e8:
        pppppppbVar15 = (byte *******)((long)pdVar5 + 3);
        pppppppbVar11 = pppppppbVar14;
        FUN_00383c14();
      }
    }
    else if (pppppppbVar17 != (byte *******)0x0) {
      pppppppbVar17[0xe1] = (byte ******)((long)pppppppbVar17[0xe1] + uVar23);
      pppppppbVar11 = pppppppbVar14;
      pppppppbVar15 = pppppppbVar17;
      func_0x0039d228();
      if ((int)pppppppbVar11 != 0) {
        FUN_0038481c(pppppppbVar14,pppppppbVar17);
        pdVar5 = &MACH_HEADER.filetype;
        goto LAB_0038e6e8;
      }
    }
  }
  iVar12 = (int)pppppppbVar15;
  *extraout_x8_01 = 0;
LAB_0038e6f4:
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_218) {
    ___stack_chk_fail();
    ppppppbStack_280 = (byte ******)pppppppbVar14;
    FUN_0033d548(&ppppppbStack_280);
    if ((char)bStack_281 < '\0') {
      __ZdlPv(ppppppbStack_298);
    }
    __Unwind_Resume();
    if (*(byte *)(pppppppbVar11 + 1) == 0) {
      bVar27 = 0;
    }
    else {
      bVar27 = *(byte *)((long)pppppppbVar11 + 10);
    }
    pppppbVar25 = pppppppbVar11[2][1];
    ppppppbVar31 = pppppppbVar11[5];
    if (pppppbVar25[(long)ppppppbVar31 * 4] == (byte ****)0x0) {
      ppppbVar26 = (byte ****)((long)pppppbVar25 + (long)ppppppbVar31 * 0x20 + 9);
    }
    else {
      ppppbVar26 = pppppbVar25[(long)ppppppbVar31 * 4 + 2];
    }
    bVar1 = bVar27 | 4;
    if (iVar12 == 0) {
      bVar1 = bVar27;
    }
    uVar20 = 9;
    if (*(byte *)(pppppppbVar11 + 1) != 0) {
      uVar20 = 1;
    }
    uVar4 = *(undefined4 *)((long)pppppppbVar11 + 0xc);
    lVar29 = (long)pppppppbVar11[2][4] - (long)pppppppbVar11[6];
    *(char *)ppppbVar26 = (char)((ulong)lVar29 >> 0x10);
    *(char *)((long)ppppbVar26 + 1) = (char)((ulong)lVar29 >> 8);
    *(char *)((long)ppppbVar26 + 2) = (char)lVar29;
    *(undefined1 *)((long)ppppbVar26 + 3) = uVar20;
    *(byte *)((long)ppppbVar26 + 4) = bVar1;
    *(char *)((long)ppppbVar26 + 5) = (char)((uint)uVar4 >> 0x18);
    *(char *)((long)ppppbVar26 + 6) = (char)((uint)uVar4 >> 0x10);
    *(char *)((long)ppppbVar26 + 7) = (char)((uint)uVar4 >> 8);
    *(char *)(ppppbVar26 + 1) = (char)uVar4;
    *pppppppbVar11[3] = (byte *****)((long)*pppppppbVar11[3] + 9);
    *(byte *)(pppppppbVar11 + 1) = 0;
    return;
  }
  return;
}



/* Entry: 0038e2c8; end: 0038e343;  */

void FUN_0038e2c8(undefined8 *param_1,uint *param_2,undefined8 *param_3,undefined8 param_4,
                 int param_5)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  dword *pdVar5;
  code *pcVar6;
  byte *******pppppppbVar7;
  byte *******pppppppbVar8;
  int iVar9;
  byte *******pppppppbVar10;
  byte *******pppppppbVar11;
  byte *******pppppppbVar12;
  byte *******pppppppbVar13;
  long *plVar14;
  undefined1 uVar15;
  uint uVar16;
  long *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  ulong uVar17;
  byte ******ppppppbVar18;
  byte *****pppppbVar19;
  byte ****ppppbVar20;
  byte bVar21;
  byte *pbVar22;
  long lVar24;
  uint uVar25;
  byte ******ppppppbVar26;
  ulong uVar27;
  byte *****pppppbStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 uStack_1a9;
  byte ******ppppppbStack_1a8;
  ulong uStack_1a0;
  byte bStack_191;
  byte ******ppppppbStack_190;
  undefined1 *puStack_188;
  long lStack_180;
  undefined1 auStack_178 [32];
  char *pcStack_158;
  undefined8 uStack_150;
  long lStack_128;
  byte ******ppppppbStack_120;
  byte *****pppppbStack_110;
  byte ******ppppppbStack_108;
  undefined1 ***pppuStack_100;
  code *pcStack_f8;
  byte ****ppppbStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d1;
  byte ******ppppppbStack_d0;
  byte ******ppppppbStack_c8;
  byte bStack_b9;
  byte *****pppppbStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  byte *****pppppbStack_90;
  byte ******ppppppbStack_88;
  undefined1 **ppuStack_80;
  code *pcStack_78;
  undefined1 *puStack_50;
  code *pcStack_48;
  byte *****pppppbStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  byte *pbVar23;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  ppppppbVar26 = (byte ******)*param_1;
  pppppppbVar8 = (byte *******)param_1[1];
  pppppbStack_38 = (byte *****)(ulong)*param_2;
  uStack_30 = 0x5606ec;
  uStack_28 = *param_3;
  uStack_20 = 0x560e98;
  pppppppbVar12 = (byte *******)&pppppbStack_38;
  plVar14 = (long *)((long)&MACH_HEADER.magic + 2);
  FUN_0056189c();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_0038e344;
  pppppppbVar7 = (byte *******)((long)&MACH_HEADER.filetype + 1);
  pppppppbVar10 = pppppppbVar8;
  pppppppbVar13 = pppppppbVar12;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_003ec0c8();
  pppppppbVar12[2] = (byte ******)((long)pppppppbVar12[2] + 0xd);
  if ((int)pppppppbVar8 != 0) {
    puVar3 = (undefined4 *)((long)extraout_x8 + 9);
    if (*extraout_x8 != 0) {
      puVar3 = (undefined4 *)extraout_x8[2];
    }
    *puVar3 = 0x8040000;
    *(undefined1 *)(puVar3 + 1) = 0;
    *(char *)((long)puVar3 + 5) = (char)((ulong)ppppppbVar26 >> 0x18);
    *(char *)((long)puVar3 + 6) = (char)((ulong)ppppppbVar26 >> 0x10);
    *(char *)((long)puVar3 + 7) = (char)((ulong)ppppppbVar26 >> 8);
    *(char *)(puVar3 + 2) = (char)ppppppbVar26;
    *(char *)((long)puVar3 + 9) = (char)((ulong)pppppppbVar8 >> 0x18);
    *(char *)((long)puVar3 + 10) = (char)((ulong)pppppppbVar8 >> 0x10);
    *(char *)((long)puVar3 + 0xb) = (char)((ulong)pppppppbVar8 >> 8);
    *(char *)(puVar3 + 3) = (char)pppppppbVar8;
    return;
  }
  func_0x00772f88();
  pcStack_78 = FUN_0038e3ec;
  lStack_98 = *(long *)PTR____stack_chk_guard_00999f88;
  pppppbStack_90 = (byte *****)ppppppbVar26;
  ppppppbStack_88 = (byte ******)pppppppbVar8;
  ppuStack_80 = &puStack_50;
  if (((int)pppppppbVar10 == 4) && ((int)pppppppbVar13 == 0)) {
    *(byte *)pppppppbVar7 = 0;
    pbVar1 = (byte *)((long)pppppppbVar7 + 4);
    pbVar1[0] = 0;
    pbVar1[1] = 0;
    pbVar1[2] = 0;
    pbVar1[3] = 0;
    *extraout_x8_00 = 0;
  }
  else {
    pppppbStack_b8 = (byte *****)((ulong)pppppppbVar10 & 0xffffffff);
    uStack_b0 = 0x5606ec;
    uStack_a8 = (ulong)pppppppbVar13 & 0xffffffff;
    uStack_a0 = 0x560664;
    FUN_0056189c(&ppppppbStack_d0,"invalid window update: length=%d, flags=%02x",0x2c,
                 &pppppbStack_b8,2);
    pppppppbVar13 = (byte *******)ppppppbStack_c8;
    pppppppbVar10 = (byte *******)ppppppbStack_d0;
    if (-1 < (char)bStack_b9) {
      pppppppbVar13 = (byte *******)(ulong)bStack_b9;
      pppppppbVar10 = &ppppppbStack_d0;
    }
    uStack_e8 = 0;
    uStack_e0 = 0;
    ppppbStack_f0 = (byte ****)0x0;
    plVar14 = (long *)&uStack_d1;
    param_5 = (int)&ppppbStack_f0;
    FUN_003b646c(extraout_x8_00,2);
    pppppppbVar7 = (byte *******)&pppppbStack_b8;
    pppppbStack_b8 = &ppppbStack_f0;
    FUN_0033d548();
    ppppppbVar26 = (byte ******)&ppppbStack_f0;
    if ((char)bStack_b9 < '\0') {
      pppppppbVar7 = (byte *******)ppppppbStack_d0;
      __ZdlPv();
      ppppppbVar26 = (byte ******)&ppppbStack_f0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  pppppbStack_b8 = (byte *****)ppppppbVar26;
  FUN_0033d548(&pppppbStack_b8);
  if ((char)bStack_b9 < '\0') {
    __ZdlPv(ppppppbStack_d0);
  }
  pppppppbVar8 = pppppppbVar7;
  __Unwind_Resume();
  pcStack_f8 = FUN_0038e51c;
  lStack_128 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar1 = (byte *)((long)plVar14 + 9);
  if (*plVar14 != 0) {
    pbVar1 = (byte *)plVar14[2];
  }
  uVar17 = plVar14[1] & 0xff;
  if (*plVar14 != 0) {
    uVar17 = plVar14[1];
  }
  uVar16 = (uint)*(byte *)pppppppbVar8;
  pbVar22 = pbVar1;
  if (*(byte *)pppppppbVar8 != 4 && uVar17 != 0) {
    uVar25 = *(uint *)((long)pppppppbVar8 + 4);
    pbVar23 = pbVar1;
    uVar27 = uVar17;
    do {
      uVar27 = uVar27 - 1;
      pbVar22 = pbVar23 + 1;
      uVar25 = (uint)*pbVar23 << (ulong)((uVar16 & 0xff) * -8 + 0x18 & 0x1f) | uVar25;
      *(uint *)((long)pppppppbVar8 + 4) = uVar25;
      uVar16 = uVar16 + 1;
      *(byte *)pppppppbVar8 = (byte)uVar16;
      if ((uVar16 & 0xff) == 4) break;
      pbVar23 = pbVar22;
    } while (uVar27 != 0);
  }
  if (pppppppbVar13 != (byte *******)0x0) {
    pppppppbVar13[0x27] =
         (byte ******)
         ((long)pppppppbVar13[0x27] + (ulong)(uint)(((int)pbVar1 + (int)uVar17) - (int)pbVar22));
  }
  pppppppbVar11 = pppppppbVar10;
  ppppppbStack_120 = (byte ******)pppppppbVar12;
  pppppbStack_110 = (byte *****)ppppppbVar26;
  ppppppbStack_108 = (byte ******)pppppppbVar7;
  pppuStack_100 = &ppuStack_80;
  if ((uVar16 & 0xff) == 4) {
    pppppppbVar8 = (byte *******)(ulong)*(uint *)((long)pppppppbVar8 + 4);
    uVar17 = (ulong)pppppppbVar8 & 0x7fffffff;
    if ((int)uVar17 == 0) {
      pcStack_158 = "invalid window update bytes: ";
      uStack_150 = 0x1d;
      func_0x005748b4(pppppppbVar8,auStack_178);
      lStack_180 = (long)pppppppbVar8 - (long)auStack_178;
      puStack_188 = auStack_178;
      FUN_00575d30(&ppppppbStack_1a8,&pcStack_158,&puStack_188);
      pppppppbVar12 = (byte *******)ppppppbStack_1a8;
      if (-1 < (char)bStack_191) {
        uStack_1a0 = (ulong)bStack_191;
        pppppppbVar12 = &ppppppbStack_1a8;
      }
      uStack_1c0 = 0;
      uStack_1b8 = 0;
      pppppbStack_1c8 = (byte *****)0x0;
      pppppppbVar10 = (byte *******)&pppppbStack_1c8;
      FUN_003b646c(extraout_x8_01,2,pppppppbVar12,uStack_1a0,&uStack_1a9,&pppppbStack_1c8);
      iVar9 = (int)pppppppbVar12;
      pppppppbVar8 = &ppppppbStack_190;
      ppppppbStack_190 = (byte ******)pppppppbVar10;
      FUN_0033d548();
      if ((char)bStack_191 < '\0') {
        pppppppbVar8 = (byte *******)ppppppbStack_1a8;
        __ZdlPv();
      }
      goto LAB_0038e6f4;
    }
    if (param_5 == 0) {
      func_0x00772fc0();
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x38e728);
      (*pcVar6)();
    }
    if (*(int *)(pppppppbVar10 + 0x155) == 0) {
      ppppppbVar18 = pppppppbVar10[0x14d];
      ppppppbVar26 = (byte ******)((long)ppppppbVar18 + uVar17);
      pppppppbVar10[0x14d] = ppppppbVar26;
      if (((long)ppppppbVar18 < 1) && (0 < (long)ppppppbVar26)) {
        pdVar5 = &MACH_HEADER.ncmds;
LAB_0038e6e8:
        pppppppbVar11 = (byte *******)((long)pdVar5 + 3);
        pppppppbVar8 = pppppppbVar10;
        FUN_00383c14();
      }
    }
    else if (pppppppbVar13 != (byte *******)0x0) {
      pppppppbVar13[0xe1] = (byte ******)((long)pppppppbVar13[0xe1] + uVar17);
      pppppppbVar8 = pppppppbVar10;
      pppppppbVar11 = pppppppbVar13;
      func_0x0039d228();
      if ((int)pppppppbVar8 != 0) {
        FUN_0038481c(pppppppbVar10,pppppppbVar13);
        pdVar5 = &MACH_HEADER.filetype;
        goto LAB_0038e6e8;
      }
    }
  }
  iVar9 = (int)pppppppbVar11;
  *extraout_x8_01 = 0;
LAB_0038e6f4:
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_128) {
    ___stack_chk_fail();
    ppppppbStack_190 = (byte ******)pppppppbVar10;
    FUN_0033d548(&ppppppbStack_190);
    if ((char)bStack_191 < '\0') {
      __ZdlPv(ppppppbStack_1a8);
    }
    __Unwind_Resume();
    if (*(byte *)(pppppppbVar8 + 1) == 0) {
      bVar21 = 0;
    }
    else {
      bVar21 = *(byte *)((long)pppppppbVar8 + 10);
    }
    pppppbVar19 = pppppppbVar8[2][1];
    ppppppbVar26 = pppppppbVar8[5];
    if (pppppbVar19[(long)ppppppbVar26 * 4] == (byte ****)0x0) {
      ppppbVar20 = (byte ****)((long)pppppbVar19 + (long)ppppppbVar26 * 0x20 + 9);
    }
    else {
      ppppbVar20 = pppppbVar19[(long)ppppppbVar26 * 4 + 2];
    }
    bVar2 = bVar21 | 4;
    if (iVar9 == 0) {
      bVar2 = bVar21;
    }
    uVar15 = 9;
    if (*(byte *)(pppppppbVar8 + 1) != 0) {
      uVar15 = 1;
    }
    uVar4 = *(undefined4 *)((long)pppppppbVar8 + 0xc);
    lVar24 = (long)pppppppbVar8[2][4] - (long)pppppppbVar8[6];
    *(char *)ppppbVar20 = (char)((ulong)lVar24 >> 0x10);
    *(char *)((long)ppppbVar20 + 1) = (char)((ulong)lVar24 >> 8);
    *(char *)((long)ppppbVar20 + 2) = (char)lVar24;
    *(undefined1 *)((long)ppppbVar20 + 3) = uVar15;
    *(byte *)((long)ppppbVar20 + 4) = bVar2;
    *(char *)((long)ppppbVar20 + 5) = (char)((uint)uVar4 >> 0x18);
    *(char *)((long)ppppbVar20 + 6) = (char)((uint)uVar4 >> 0x10);
    *(char *)((long)ppppbVar20 + 7) = (char)((uint)uVar4 >> 8);
    *(char *)(ppppbVar20 + 1) = (char)uVar4;
    *pppppppbVar8[3] = (byte *****)((long)*pppppppbVar8[3] + 9);
    *(byte *)(pppppppbVar8 + 1) = 0;
    return;
  }
  return;
}



/* Entry: 0038e344; end: 0038e3eb;  */

void FUN_0038e344(long *param_1,byte ******param_2,byte *******param_3,byte *******param_4,
                 long *param_5,int param_6)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  dword *pdVar5;
  code *pcVar6;
  byte *******pppppppbVar7;
  byte *******pppppppbVar8;
  int iVar9;
  byte *******pppppppbVar10;
  byte *******pppppppbVar11;
  byte *******pppppppbVar12;
  undefined1 uVar13;
  uint uVar14;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  ulong uVar15;
  byte ******ppppppbVar16;
  byte *****pppppbVar17;
  byte ****ppppbVar18;
  byte bVar19;
  byte *pbVar20;
  long lVar22;
  uint uVar23;
  byte ******ppppppbVar24;
  ulong uVar25;
  byte *****pppppbStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 uStack_169;
  byte ******ppppppbStack_168;
  ulong uStack_160;
  byte bStack_151;
  byte ******ppppppbStack_150;
  undefined1 *puStack_148;
  long lStack_140;
  undefined1 auStack_138 [32];
  char *pcStack_118;
  undefined8 uStack_110;
  long lStack_e8;
  byte ******ppppppbStack_e0;
  long *plStack_d8;
  byte *****pppppbStack_d0;
  byte ******ppppppbStack_c8;
  undefined1 **ppuStack_c0;
  code *pcStack_b8;
  byte ****ppppbStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_91;
  byte ******ppppppbStack_90;
  byte ******ppppppbStack_88;
  byte bStack_79;
  byte *****pppppbStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  byte *****pppppbStack_50;
  byte ******ppppppbStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  byte *pbVar21;
  
  pppppppbVar7 = (byte *******)((long)&MACH_HEADER.filetype + 1);
  pppppppbVar10 = param_3;
  pppppppbVar12 = param_4;
  FUN_003ec0c8();
  param_4[2] = (byte ******)((long)param_4[2] + 0xd);
  if ((int)param_3 != 0) {
    puVar3 = (undefined4 *)((long)param_1 + 9);
    if (*param_1 != 0) {
      puVar3 = (undefined4 *)param_1[2];
    }
    *puVar3 = 0x8040000;
    *(undefined1 *)(puVar3 + 1) = 0;
    *(char *)((long)puVar3 + 5) = (char)((ulong)param_2 >> 0x18);
    *(char *)((long)puVar3 + 6) = (char)((ulong)param_2 >> 0x10);
    *(char *)((long)puVar3 + 7) = (char)((ulong)param_2 >> 8);
    *(char *)(puVar3 + 2) = (char)param_2;
    *(char *)((long)puVar3 + 9) = (char)((ulong)param_3 >> 0x18);
    *(char *)((long)puVar3 + 10) = (char)((ulong)param_3 >> 0x10);
    *(char *)((long)puVar3 + 0xb) = (char)((ulong)param_3 >> 8);
    *(char *)(puVar3 + 3) = (char)param_3;
    return;
  }
  func_0x00772f88();
  pcStack_38 = FUN_0038e3ec;
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  pppppbStack_50 = (byte *****)param_2;
  ppppppbStack_48 = (byte ******)param_3;
  puStack_40 = &stack0xfffffffffffffff0;
  if (((int)pppppppbVar10 == 4) && ((int)pppppppbVar12 == 0)) {
    *(byte *)pppppppbVar7 = 0;
    pbVar1 = (byte *)((long)pppppppbVar7 + 4);
    pbVar1[0] = 0;
    pbVar1[1] = 0;
    pbVar1[2] = 0;
    pbVar1[3] = 0;
    *extraout_x8 = 0;
  }
  else {
    pppppbStack_78 = (byte *****)((ulong)pppppppbVar10 & 0xffffffff);
    uStack_70 = 0x5606ec;
    uStack_68 = (ulong)pppppppbVar12 & 0xffffffff;
    uStack_60 = 0x560664;
    FUN_0056189c(&ppppppbStack_90,"invalid window update: length=%d, flags=%02x",0x2c,
                 &pppppbStack_78,2);
    pppppppbVar12 = (byte *******)ppppppbStack_88;
    pppppppbVar10 = (byte *******)ppppppbStack_90;
    if (-1 < (char)bStack_79) {
      pppppppbVar12 = (byte *******)(ulong)bStack_79;
      pppppppbVar10 = &ppppppbStack_90;
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppppbStack_b0 = (byte ****)0x0;
    param_5 = (long *)&uStack_91;
    param_6 = (int)&ppppbStack_b0;
    FUN_003b646c(extraout_x8,2);
    pppppppbVar7 = (byte *******)&pppppbStack_78;
    pppppbStack_78 = &ppppbStack_b0;
    FUN_0033d548();
    param_2 = (byte ******)&ppppbStack_b0;
    if ((char)bStack_79 < '\0') {
      pppppppbVar7 = (byte *******)ppppppbStack_90;
      __ZdlPv();
      param_2 = (byte ******)&ppppbStack_b0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pppppbStack_78 = (byte *****)param_2;
  FUN_0033d548(&pppppbStack_78);
  if ((char)bStack_79 < '\0') {
    __ZdlPv(ppppppbStack_90);
  }
  pppppppbVar8 = pppppppbVar7;
  __Unwind_Resume();
  pcStack_b8 = FUN_0038e51c;
  lStack_e8 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar1 = (byte *)((long)param_5 + 9);
  if (*param_5 != 0) {
    pbVar1 = (byte *)param_5[2];
  }
  uVar15 = param_5[1] & 0xff;
  if (*param_5 != 0) {
    uVar15 = param_5[1];
  }
  uVar14 = (uint)*(byte *)pppppppbVar8;
  pbVar20 = pbVar1;
  if (*(byte *)pppppppbVar8 != 4 && uVar15 != 0) {
    uVar23 = *(uint *)((long)pppppppbVar8 + 4);
    pbVar21 = pbVar1;
    uVar25 = uVar15;
    do {
      uVar25 = uVar25 - 1;
      pbVar20 = pbVar21 + 1;
      uVar23 = (uint)*pbVar21 << (ulong)((uVar14 & 0xff) * -8 + 0x18 & 0x1f) | uVar23;
      *(uint *)((long)pppppppbVar8 + 4) = uVar23;
      uVar14 = uVar14 + 1;
      *(byte *)pppppppbVar8 = (byte)uVar14;
      if ((uVar14 & 0xff) == 4) break;
      pbVar21 = pbVar20;
    } while (uVar25 != 0);
  }
  if (pppppppbVar12 != (byte *******)0x0) {
    pppppppbVar12[0x27] =
         (byte ******)
         ((long)pppppppbVar12[0x27] + (ulong)(uint)(((int)pbVar1 + (int)uVar15) - (int)pbVar20));
  }
  pppppppbVar11 = pppppppbVar10;
  ppppppbStack_e0 = (byte ******)param_4;
  plStack_d8 = param_1;
  pppppbStack_d0 = (byte *****)param_2;
  ppppppbStack_c8 = (byte ******)pppppppbVar7;
  ppuStack_c0 = &puStack_40;
  if ((uVar14 & 0xff) == 4) {
    pppppppbVar8 = (byte *******)(ulong)*(uint *)((long)pppppppbVar8 + 4);
    uVar15 = (ulong)pppppppbVar8 & 0x7fffffff;
    if ((int)uVar15 == 0) {
      pcStack_118 = "invalid window update bytes: ";
      uStack_110 = 0x1d;
      func_0x005748b4(pppppppbVar8,auStack_138);
      lStack_140 = (long)pppppppbVar8 - (long)auStack_138;
      puStack_148 = auStack_138;
      FUN_00575d30(&ppppppbStack_168,&pcStack_118,&puStack_148);
      pppppppbVar7 = (byte *******)ppppppbStack_168;
      if (-1 < (char)bStack_151) {
        uStack_160 = (ulong)bStack_151;
        pppppppbVar7 = &ppppppbStack_168;
      }
      uStack_180 = 0;
      uStack_178 = 0;
      pppppbStack_188 = (byte *****)0x0;
      pppppppbVar10 = (byte *******)&pppppbStack_188;
      FUN_003b646c(extraout_x8_00,2,pppppppbVar7,uStack_160,&uStack_169,&pppppbStack_188);
      iVar9 = (int)pppppppbVar7;
      pppppppbVar8 = &ppppppbStack_150;
      ppppppbStack_150 = (byte ******)pppppppbVar10;
      FUN_0033d548();
      if ((char)bStack_151 < '\0') {
        pppppppbVar8 = (byte *******)ppppppbStack_168;
        __ZdlPv();
      }
      goto LAB_0038e6f4;
    }
    if (param_6 == 0) {
      func_0x00772fc0();
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x38e728);
      (*pcVar6)();
    }
    if (*(int *)(pppppppbVar10 + 0x155) == 0) {
      ppppppbVar16 = pppppppbVar10[0x14d];
      ppppppbVar24 = (byte ******)((long)ppppppbVar16 + uVar15);
      pppppppbVar10[0x14d] = ppppppbVar24;
      if (((long)ppppppbVar16 < 1) && (0 < (long)ppppppbVar24)) {
        pdVar5 = &MACH_HEADER.ncmds;
LAB_0038e6e8:
        pppppppbVar11 = (byte *******)((long)pdVar5 + 3);
        pppppppbVar8 = pppppppbVar10;
        FUN_00383c14();
      }
    }
    else if (pppppppbVar12 != (byte *******)0x0) {
      pppppppbVar12[0xe1] = (byte ******)((long)pppppppbVar12[0xe1] + uVar15);
      pppppppbVar8 = pppppppbVar10;
      pppppppbVar11 = pppppppbVar12;
      func_0x0039d228();
      if ((int)pppppppbVar8 != 0) {
        FUN_0038481c(pppppppbVar10,pppppppbVar12);
        pdVar5 = &MACH_HEADER.filetype;
        goto LAB_0038e6e8;
      }
    }
  }
  iVar9 = (int)pppppppbVar11;
  *extraout_x8_00 = 0;
LAB_0038e6f4:
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_e8) {
    ___stack_chk_fail();
    ppppppbStack_150 = (byte ******)pppppppbVar10;
    FUN_0033d548(&ppppppbStack_150);
    if ((char)bStack_151 < '\0') {
      __ZdlPv(ppppppbStack_168);
    }
    __Unwind_Resume();
    if (*(byte *)(pppppppbVar8 + 1) == 0) {
      bVar19 = 0;
    }
    else {
      bVar19 = *(byte *)((long)pppppppbVar8 + 10);
    }
    pppppbVar17 = pppppppbVar8[2][1];
    ppppppbVar24 = pppppppbVar8[5];
    if (pppppbVar17[(long)ppppppbVar24 * 4] == (byte ****)0x0) {
      ppppbVar18 = (byte ****)((long)pppppbVar17 + (long)ppppppbVar24 * 0x20 + 9);
    }
    else {
      ppppbVar18 = pppppbVar17[(long)ppppppbVar24 * 4 + 2];
    }
    bVar2 = bVar19 | 4;
    if (iVar9 == 0) {
      bVar2 = bVar19;
    }
    uVar13 = 9;
    if (*(byte *)(pppppppbVar8 + 1) != 0) {
      uVar13 = 1;
    }
    uVar4 = *(undefined4 *)((long)pppppppbVar8 + 0xc);
    lVar22 = (long)pppppppbVar8[2][4] - (long)pppppppbVar8[6];
    *(char *)ppppbVar18 = (char)((ulong)lVar22 >> 0x10);
    *(char *)((long)ppppbVar18 + 1) = (char)((ulong)lVar22 >> 8);
    *(char *)((long)ppppbVar18 + 2) = (char)lVar22;
    *(undefined1 *)((long)ppppbVar18 + 3) = uVar13;
    *(byte *)((long)ppppbVar18 + 4) = bVar2;
    *(char *)((long)ppppbVar18 + 5) = (char)((uint)uVar4 >> 0x18);
    *(char *)((long)ppppbVar18 + 6) = (char)((uint)uVar4 >> 0x10);
    *(char *)((long)ppppbVar18 + 7) = (char)((uint)uVar4 >> 8);
    *(char *)(ppppbVar18 + 1) = (char)uVar4;
    *pppppppbVar8[3] = (byte *****)((long)*pppppppbVar8[3] + 9);
    *(byte *)(pppppppbVar8 + 1) = 0;
    return;
  }
  return;
}



/* Entry: 0038e3ec; end: 0038e51b;  */

void FUN_0038e3ec(undefined8 *param_1,byte *******param_2,byte *******param_3,byte *******param_4,
                 long *param_5,int param_6)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 uVar3;
  dword *pdVar4;
  code *pcVar5;
  int iVar6;
  byte *******pppppppbVar7;
  undefined1 uVar8;
  uint uVar9;
  undefined8 *extraout_x8;
  ulong uVar10;
  byte ******ppppppbVar11;
  byte *****pppppbVar12;
  byte ****ppppbVar13;
  byte bVar14;
  byte *pbVar15;
  long lVar17;
  uint uVar18;
  byte ******ppppppbVar19;
  ulong uVar20;
  byte ******unaff_x20;
  byte *****pppppbStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 uStack_139;
  byte ******ppppppbStack_138;
  ulong uStack_130;
  byte bStack_121;
  byte ******ppppppbStack_120;
  undefined1 *puStack_118;
  long lStack_110;
  undefined1 auStack_108 [32];
  char *pcStack_e8;
  undefined8 uStack_e0;
  long lStack_b8;
  byte ****ppppbStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_61;
  byte ******ppppppbStack_60;
  byte ******ppppppbStack_58;
  byte bStack_49;
  byte *****pppppbStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  byte *pbVar16;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  if (((int)param_3 == 4) && ((int)param_4 == 0)) {
    *(byte *)param_2 = 0;
    pbVar1 = (byte *)((long)param_2 + 4);
    pbVar1[0] = 0;
    pbVar1[1] = 0;
    pbVar1[2] = 0;
    pbVar1[3] = 0;
    *param_1 = 0;
  }
  else {
    pppppbStack_48 = (byte *****)((ulong)param_3 & 0xffffffff);
    uStack_40 = 0x5606ec;
    uStack_38 = (ulong)param_4 & 0xffffffff;
    uStack_30 = 0x560664;
    FUN_0056189c(&ppppppbStack_60,"invalid window update: length=%d, flags=%02x",0x2c,
                 &pppppbStack_48,2);
    param_4 = (byte *******)ppppppbStack_58;
    param_3 = (byte *******)ppppppbStack_60;
    if (-1 < (char)bStack_49) {
      param_4 = (byte *******)(ulong)bStack_49;
      param_3 = &ppppppbStack_60;
    }
    uStack_78 = 0;
    uStack_70 = 0;
    ppppbStack_80 = (byte ****)0x0;
    param_5 = (long *)&uStack_61;
    param_6 = (int)&ppppbStack_80;
    FUN_003b646c(param_1,2);
    param_2 = (byte *******)&pppppbStack_48;
    pppppbStack_48 = &ppppbStack_80;
    FUN_0033d548();
    unaff_x20 = (byte ******)&ppppbStack_80;
    if ((char)bStack_49 < '\0') {
      param_2 = (byte *******)ppppppbStack_60;
      __ZdlPv();
      unaff_x20 = (byte ******)&ppppbStack_80;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  pppppbStack_48 = (byte *****)unaff_x20;
  FUN_0033d548(&pppppbStack_48);
  if ((char)bStack_49 < '\0') {
    __ZdlPv(ppppppbStack_60);
  }
  __Unwind_Resume();
  lStack_b8 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar1 = (byte *)((long)param_5 + 9);
  if (*param_5 != 0) {
    pbVar1 = (byte *)param_5[2];
  }
  uVar10 = param_5[1] & 0xff;
  if (*param_5 != 0) {
    uVar10 = param_5[1];
  }
  uVar9 = (uint)*(byte *)param_2;
  pbVar15 = pbVar1;
  if (*(byte *)param_2 != 4 && uVar10 != 0) {
    uVar18 = *(uint *)((long)param_2 + 4);
    pbVar16 = pbVar1;
    uVar20 = uVar10;
    do {
      uVar20 = uVar20 - 1;
      pbVar15 = pbVar16 + 1;
      uVar18 = (uint)*pbVar16 << (ulong)((uVar9 & 0xff) * -8 + 0x18 & 0x1f) | uVar18;
      *(uint *)((long)param_2 + 4) = uVar18;
      uVar9 = uVar9 + 1;
      *(byte *)param_2 = (byte)uVar9;
      if ((uVar9 & 0xff) == 4) break;
      pbVar16 = pbVar15;
    } while (uVar20 != 0);
  }
  if (param_4 != (byte *******)0x0) {
    param_4[0x27] =
         (byte ******)
         ((long)param_4[0x27] + (ulong)(uint)(((int)pbVar1 + (int)uVar10) - (int)pbVar15));
  }
  pppppppbVar7 = param_3;
  if ((uVar9 & 0xff) == 4) {
    param_2 = (byte *******)(ulong)*(uint *)((long)param_2 + 4);
    uVar10 = (ulong)param_2 & 0x7fffffff;
    if ((int)uVar10 == 0) {
      pcStack_e8 = "invalid window update bytes: ";
      uStack_e0 = 0x1d;
      func_0x005748b4(param_2,auStack_108);
      lStack_110 = (long)param_2 - (long)auStack_108;
      puStack_118 = auStack_108;
      FUN_00575d30(&ppppppbStack_138,&pcStack_e8,&puStack_118);
      pppppppbVar7 = (byte *******)ppppppbStack_138;
      if (-1 < (char)bStack_121) {
        uStack_130 = (ulong)bStack_121;
        pppppppbVar7 = &ppppppbStack_138;
      }
      uStack_150 = 0;
      uStack_148 = 0;
      pppppbStack_158 = (byte *****)0x0;
      param_3 = (byte *******)&pppppbStack_158;
      FUN_003b646c(extraout_x8,2,pppppppbVar7,uStack_130,&uStack_139,&pppppbStack_158);
      iVar6 = (int)pppppppbVar7;
      param_2 = &ppppppbStack_120;
      ppppppbStack_120 = (byte ******)param_3;
      FUN_0033d548();
      if ((char)bStack_121 < '\0') {
        param_2 = (byte *******)ppppppbStack_138;
        __ZdlPv();
      }
      goto LAB_0038e6f4;
    }
    if (param_6 == 0) {
      func_0x00772fc0();
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x38e728);
      (*pcVar5)();
    }
    if (*(int *)(param_3 + 0x155) == 0) {
      ppppppbVar11 = param_3[0x14d];
      ppppppbVar19 = (byte ******)((long)ppppppbVar11 + uVar10);
      param_3[0x14d] = ppppppbVar19;
      if (((long)ppppppbVar11 < 1) && (0 < (long)ppppppbVar19)) {
        pdVar4 = &MACH_HEADER.ncmds;
LAB_0038e6e8:
        pppppppbVar7 = (byte *******)((long)pdVar4 + 3);
        param_2 = param_3;
        FUN_00383c14();
      }
    }
    else if (param_4 != (byte *******)0x0) {
      param_4[0xe1] = (byte ******)((long)param_4[0xe1] + uVar10);
      param_2 = param_3;
      pppppppbVar7 = param_4;
      func_0x0039d228();
      if ((int)param_2 != 0) {
        FUN_0038481c(param_3,param_4);
        pdVar4 = &MACH_HEADER.filetype;
        goto LAB_0038e6e8;
      }
    }
  }
  iVar6 = (int)pppppppbVar7;
  *extraout_x8 = 0;
LAB_0038e6f4:
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_b8) {
    ___stack_chk_fail();
    ppppppbStack_120 = (byte ******)param_3;
    FUN_0033d548(&ppppppbStack_120);
    if ((char)bStack_121 < '\0') {
      __ZdlPv(ppppppbStack_138);
    }
    __Unwind_Resume();
    if (*(byte *)(param_2 + 1) == 0) {
      bVar14 = 0;
    }
    else {
      bVar14 = *(byte *)((long)param_2 + 10);
    }
    pppppbVar12 = param_2[2][1];
    ppppppbVar19 = param_2[5];
    if (pppppbVar12[(long)ppppppbVar19 * 4] == (byte ****)0x0) {
      ppppbVar13 = (byte ****)((long)pppppbVar12 + (long)ppppppbVar19 * 0x20 + 9);
    }
    else {
      ppppbVar13 = pppppbVar12[(long)ppppppbVar19 * 4 + 2];
    }
    bVar2 = bVar14 | 4;
    if (iVar6 == 0) {
      bVar2 = bVar14;
    }
    uVar8 = 9;
    if (*(byte *)(param_2 + 1) != 0) {
      uVar8 = 1;
    }
    uVar3 = *(undefined4 *)((long)param_2 + 0xc);
    lVar17 = (long)param_2[2][4] - (long)param_2[6];
    *(char *)ppppbVar13 = (char)((ulong)lVar17 >> 0x10);
    *(char *)((long)ppppbVar13 + 1) = (char)((ulong)lVar17 >> 8);
    *(char *)((long)ppppbVar13 + 2) = (char)lVar17;
    *(undefined1 *)((long)ppppbVar13 + 3) = uVar8;
    *(byte *)((long)ppppbVar13 + 4) = bVar2;
    *(char *)((long)ppppbVar13 + 5) = (char)((uint)uVar3 >> 0x18);
    *(char *)((long)ppppbVar13 + 6) = (char)((uint)uVar3 >> 0x10);
    *(char *)((long)ppppbVar13 + 7) = (char)((uint)uVar3 >> 8);
    *(char *)(ppppbVar13 + 1) = (char)uVar3;
    *param_2[3] = (byte *****)((long)*param_2[3] + 9);
    *(byte *)(param_2 + 1) = 0;
    return;
  }
  return;
}



/* Entry: 0038e51c; end: 0038e75b;  */

void FUN_0038e51c(undefined8 *param_1,byte *******param_2,byte *******param_3,byte *******param_4,
                 long *param_5,int param_6)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  dword *pdVar4;
  code *pcVar5;
  int iVar6;
  byte *******pppppppbVar7;
  undefined1 uVar8;
  uint uVar9;
  ulong uVar10;
  byte ******ppppppbVar11;
  byte *****pppppbVar12;
  byte ****ppppbVar13;
  byte bVar14;
  byte *pbVar15;
  long lVar17;
  uint uVar18;
  byte ******ppppppbVar19;
  ulong uVar20;
  byte *****pppppbStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_b9;
  byte ******ppppppbStack_b8;
  ulong uStack_b0;
  byte bStack_a1;
  byte ******ppppppbStack_a0;
  undefined1 *puStack_98;
  long lStack_90;
  undefined1 auStack_88 [32];
  char *pcStack_68;
  undefined8 uStack_60;
  long lStack_38;
  byte *pbVar16;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar2 = (byte *)((long)param_5 + 9);
  if (*param_5 != 0) {
    pbVar2 = (byte *)param_5[2];
  }
  uVar10 = param_5[1] & 0xff;
  if (*param_5 != 0) {
    uVar10 = param_5[1];
  }
  uVar9 = (uint)*(byte *)param_2;
  pbVar15 = pbVar2;
  if (*(byte *)param_2 != 4 && uVar10 != 0) {
    uVar18 = *(uint *)((long)param_2 + 4);
    pbVar16 = pbVar2;
    uVar20 = uVar10;
    do {
      uVar20 = uVar20 - 1;
      pbVar15 = pbVar16 + 1;
      uVar18 = (uint)*pbVar16 << (ulong)((uVar9 & 0xff) * -8 + 0x18 & 0x1f) | uVar18;
      *(uint *)((long)param_2 + 4) = uVar18;
      uVar9 = uVar9 + 1;
      *(byte *)param_2 = (byte)uVar9;
      if ((uVar9 & 0xff) == 4) break;
      pbVar16 = pbVar15;
    } while (uVar20 != 0);
  }
  if (param_4 != (byte *******)0x0) {
    param_4[0x27] =
         (byte ******)
         ((long)param_4[0x27] + (ulong)(uint)(((int)pbVar2 + (int)uVar10) - (int)pbVar15));
  }
  pppppppbVar7 = param_3;
  if ((uVar9 & 0xff) == 4) {
    param_2 = (byte *******)(ulong)*(uint *)((long)param_2 + 4);
    uVar10 = (ulong)param_2 & 0x7fffffff;
    if ((int)uVar10 == 0) {
      pcStack_68 = "invalid window update bytes: ";
      uStack_60 = 0x1d;
      func_0x005748b4(param_2,auStack_88);
      lStack_90 = (long)param_2 - (long)auStack_88;
      puStack_98 = auStack_88;
      FUN_00575d30(&ppppppbStack_b8,&pcStack_68,&puStack_98);
      pppppppbVar7 = (byte *******)ppppppbStack_b8;
      if (-1 < (char)bStack_a1) {
        uStack_b0 = (ulong)bStack_a1;
        pppppppbVar7 = &ppppppbStack_b8;
      }
      uStack_d0 = 0;
      uStack_c8 = 0;
      pppppbStack_d8 = (byte *****)0x0;
      param_3 = (byte *******)&pppppbStack_d8;
      FUN_003b646c(param_1,2,pppppppbVar7,uStack_b0,&uStack_b9,&pppppbStack_d8);
      iVar6 = (int)pppppppbVar7;
      param_2 = &ppppppbStack_a0;
      ppppppbStack_a0 = (byte ******)param_3;
      FUN_0033d548();
      if ((char)bStack_a1 < '\0') {
        param_2 = (byte *******)ppppppbStack_b8;
        __ZdlPv();
      }
      goto LAB_0038e6f4;
    }
    if (param_6 == 0) {
      func_0x00772fc0();
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x38e728);
      (*pcVar5)();
    }
    if (*(int *)(param_3 + 0x155) == 0) {
      ppppppbVar11 = param_3[0x14d];
      ppppppbVar19 = (byte ******)((long)ppppppbVar11 + uVar10);
      param_3[0x14d] = ppppppbVar19;
      if (((long)ppppppbVar11 < 1) && (0 < (long)ppppppbVar19)) {
        pdVar4 = &MACH_HEADER.ncmds;
LAB_0038e6e8:
        pppppppbVar7 = (byte *******)((long)pdVar4 + 3);
        param_2 = param_3;
        FUN_00383c14();
      }
    }
    else if (param_4 != (byte *******)0x0) {
      param_4[0xe1] = (byte ******)((long)param_4[0xe1] + uVar10);
      param_2 = param_3;
      pppppppbVar7 = param_4;
      func_0x0039d228();
      if ((int)param_2 != 0) {
        FUN_0038481c(param_3,param_4);
        pdVar4 = &MACH_HEADER.filetype;
        goto LAB_0038e6e8;
      }
    }
  }
  iVar6 = (int)pppppppbVar7;
  *param_1 = 0;
LAB_0038e6f4:
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_38) {
    ___stack_chk_fail();
    ppppppbStack_a0 = (byte ******)param_3;
    FUN_0033d548(&ppppppbStack_a0);
    if ((char)bStack_a1 < '\0') {
      __ZdlPv(ppppppbStack_b8);
    }
    __Unwind_Resume();
    if (*(byte *)(param_2 + 1) == 0) {
      bVar14 = 0;
    }
    else {
      bVar14 = *(byte *)((long)param_2 + 10);
    }
    pppppbVar12 = param_2[2][1];
    ppppppbVar19 = param_2[5];
    if (pppppbVar12[(long)ppppppbVar19 * 4] == (byte ****)0x0) {
      ppppbVar13 = (byte ****)((long)pppppbVar12 + (long)ppppppbVar19 * 0x20 + 9);
    }
    else {
      ppppbVar13 = pppppbVar12[(long)ppppppbVar19 * 4 + 2];
    }
    bVar1 = bVar14 | 4;
    if (iVar6 == 0) {
      bVar1 = bVar14;
    }
    uVar8 = 9;
    if (*(byte *)(param_2 + 1) != 0) {
      uVar8 = 1;
    }
    uVar3 = *(undefined4 *)((long)param_2 + 0xc);
    lVar17 = (long)param_2[2][4] - (long)param_2[6];
    *(char *)ppppbVar13 = (char)((ulong)lVar17 >> 0x10);
    *(char *)((long)ppppbVar13 + 1) = (char)((ulong)lVar17 >> 8);
    *(char *)((long)ppppbVar13 + 2) = (char)lVar17;
    *(undefined1 *)((long)ppppbVar13 + 3) = uVar8;
    *(byte *)((long)ppppbVar13 + 4) = bVar1;
    *(char *)((long)ppppbVar13 + 5) = (char)((uint)uVar3 >> 0x18);
    *(char *)((long)ppppbVar13 + 6) = (char)((uint)uVar3 >> 0x10);
    *(char *)((long)ppppbVar13 + 7) = (char)((uint)uVar3 >> 8);
    *(char *)(ppppbVar13 + 1) = (char)uVar3;
    *param_2[3] = (byte *****)((long)*param_2[3] + 9);
    *(byte *)(param_2 + 1) = 0;
    return;
  }
  return;
}



/* Entry: 0038e75c; end: 0038e813;  */

void FUN_0038e75c(long param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined1 *puVar5;
  byte bVar6;
  long lVar7;
  
  if (*(char *)(param_1 + 8) == '\0') {
    bVar6 = 0;
  }
  else {
    bVar6 = *(byte *)(param_1 + 10);
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 8);
  lVar7 = *(long *)(param_1 + 0x28);
  if (*(long *)(lVar4 + lVar7 * 0x20) == 0) {
    puVar5 = (undefined1 *)(lVar4 + lVar7 * 0x20 + 9);
  }
  else {
    puVar5 = *(undefined1 **)(lVar4 + lVar7 * 0x20 + 0x10);
  }
  bVar1 = bVar6 | 4;
  if (param_2 == 0) {
    bVar1 = bVar6;
  }
  uVar3 = 9;
  if (*(char *)(param_1 + 8) != '\0') {
    uVar3 = 1;
  }
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x20) - *(long *)(param_1 + 0x30);
  *puVar5 = (char)((ulong)lVar4 >> 0x10);
  puVar5[1] = (char)((ulong)lVar4 >> 8);
  puVar5[2] = (char)lVar4;
  puVar5[3] = uVar3;
  puVar5[4] = bVar1;
  puVar5[5] = (char)((uint)uVar2 >> 0x18);
  puVar5[6] = (char)((uint)uVar2 >> 0x10);
  puVar5[7] = (char)((uint)uVar2 >> 8);
  puVar5[8] = (char)uVar2;
  **(long **)(param_1 + 0x18) = **(long **)(param_1 + 0x18) + 9;
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 0038e814; end: 0038e8d7;  */

void FUN_0038e814(long param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uStack_48;
  undefined1 uStack_40;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar1 = *(ulong **)(param_1 + 0x10);
  uStack_48 = 0;
  uStack_40 = 9;
  FUN_003ecd90(puVar1,&uStack_48);
  lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x20);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (*puVar1 < (*(long *)(puVar1[2] + 0x20) + lVar3) - puVar1[6]) {
    uVar4 = 0;
    FUN_0038e75c();
    puVar2 = puVar1;
    FUN_0038e814();
    puVar1[5] = (ulong)puVar2;
    puVar1[6] = uVar4;
  }
  return;
}



/* Entry: 0038e8d8; end: 0038ea5f;  */

void FUN_0038e8d8(long *param_1,long *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  byte *pbVar6;
  uint uVar7;
  long *plVar8;
  byte *pbVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long *plStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_58;
  undefined1 uStack_50;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar12 = param_1;
  plVar8 = param_2;
  while( true ) {
    uVar7 = (uint)plVar8;
    if (*param_2 == 0) {
      uVar10 = (ulong)*(byte *)(param_2 + 1);
    }
    else {
      uVar10 = param_2[1];
    }
    if (uVar10 == 0) goto LAB_0038ea00;
    plVar12 = (long *)param_1[2];
    lVar5 = param_1[3];
    uVar1 = (param_1[6] - plVar12[4]) + *param_1;
    if (uVar10 <= uVar1) break;
    *(ulong *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + uVar1;
    FUN_003ec680(&plStack_c0,param_2);
    lVar5 = param_1[2];
    lStack_d8 = param_2[1];
    lStack_e0 = *param_2;
    lStack_c8 = param_2[3];
    lStack_d0 = param_2[2];
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    FUN_003ecb34(lVar5,&lStack_e0);
    lVar13 = param_2[1];
    plVar12 = (long *)*param_2;
    lVar11 = param_2[3];
    lVar5 = param_2[2];
    param_2[1] = lStack_b8;
    *param_2 = (long)plStack_c0;
    param_2[3] = lStack_a8;
    param_2[2] = lStack_b0;
    plStack_c0 = plVar12;
    lStack_b8 = lVar13;
    lStack_b0 = lVar5;
    lStack_a8 = lVar11;
    FUN_0038e75c(param_1,0);
    lVar5 = param_1[2];
    lStack_58 = 0;
    uStack_50 = 9;
    plVar8 = &lStack_58;
    FUN_003ecd90();
    lVar11 = *(long *)(param_1[2] + 0x20);
    param_1[5] = lVar5;
    param_1[6] = lVar11;
    plVar12 = plStack_c0;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_c0) {
      do {
        lVar5 = *plStack_c0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_c0,0x10);
        if (bVar3) {
          *plStack_c0 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (*(code *)plStack_c0[1])();
      }
    }
  }
  *(ulong *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + uVar10;
  lStack_98 = param_2[1];
  lStack_a0 = *param_2;
  lStack_88 = param_2[3];
  lStack_90 = param_2[2];
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  uVar7 = (uint)&lStack_a0;
  FUN_003ecb34();
LAB_0038ea00:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if (uVar7 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_c0);
  }
  __Unwind_Resume();
  uVar4 = uVar7 - 0x7f;
  uVar10 = (ulong)uVar4;
  if (uVar7 < 0x7f) {
    uVar10 = 1;
  }
  else {
    FUN_0039d54c();
  }
  func_0x0038e884(plVar12,uVar10 & 0xffffffff);
  pbVar6 = (byte *)plVar12[2];
  *(ulong *)(plVar12[3] + 0x10) = *(long *)(plVar12[3] + 0x10) + (uVar10 & 0xffffffff);
  func_0x003ed000(pbVar6,uVar10 & 0xffffffff);
  if ((int)uVar10 == 1) {
    *pbVar6 = (byte)uVar7 | 0x80;
    return;
  }
  pbVar9 = pbVar6 + 1;
  *pbVar6 = 0xff;
  uVar7 = (int)uVar10 - 2;
  switch((ulong)uVar7) {
  case 4:
    pbVar6[5] = (byte)(uVar4 >> 0x1c) | 0x80;
  case 3:
    pbVar6[4] = (byte)(uVar4 >> 0x15) | 0x80;
  case 2:
    pbVar6[3] = (byte)(uVar4 >> 0xe) | 0x80;
  case 1:
    pbVar6[2] = (byte)(uVar4 >> 7) | 0x80;
  case 0:
    *pbVar9 = (byte)uVar4 | 0x80;
  default:
    pbVar9[uVar7] = pbVar9[uVar7] & 0x7f;
    return;
  }
}



/* Entry: 0038ea60; end: 0038eb07;  */

void FUN_0038ea60(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  
  uVar2 = param_2 - 0x7f;
  uVar5 = (ulong)uVar2;
  if (param_2 < 0x7f) {
    uVar5 = 1;
  }
  else {
    FUN_0039d54c();
  }
  func_0x0038e884(param_1,uVar5 & 0xffffffff);
  pbVar3 = *(byte **)(param_1 + 0x10);
  *(ulong *)(*(long *)(param_1 + 0x18) + 0x10) =
       *(long *)(*(long *)(param_1 + 0x18) + 0x10) + (uVar5 & 0xffffffff);
  func_0x003ed000(pbVar3,uVar5 & 0xffffffff);
  if ((int)uVar5 != 1) {
    pbVar4 = pbVar3 + 1;
    *pbVar3 = 0xff;
    uVar1 = (int)uVar5 - 2;
    switch((ulong)uVar1) {
    case 4:
      pbVar3[5] = (byte)(uVar2 >> 0x1c) | 0x80;
    case 3:
      pbVar3[4] = (byte)(uVar2 >> 0x15) | 0x80;
    case 2:
      pbVar3[3] = (byte)(uVar2 >> 0xe) | 0x80;
    case 1:
      pbVar3[2] = (byte)(uVar2 >> 7) | 0x80;
    case 0:
      *pbVar4 = (byte)uVar2 | 0x80;
    default:
      pbVar4[uVar1] = pbVar4[uVar1] & 0x7f;
      return;
    }
  }
  *pbVar3 = (byte)param_2 | 0x80;
  return;
}



/* Entry: 0038eb08; end: 0038ee0f;  */

/* WARNING: Possible PIC construction at 0x0038f864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0038f5a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0038f318: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0038efe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0038eccc: Changing call to branch */

void FUN_0038eb08(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  long *plVar5;
  byte *pbVar6;
  long *plVar7;
  uint uVar8;
  int iVar9;
  long **pplVar10;
  long **pplVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long *plStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  long *plStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  long *plStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  int iStack_4c0;
  uint uStack_4bc;
  long *plStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  long *plStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  long *plStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  int iStack_450;
  int iStack_44c;
  long lStack_448;
  ulong uStack_440;
  ulong uStack_438;
  byte *pbStack_430;
  long *plStack_428;
  undefined8 **ppuStack_420;
  code *pcStack_418;
  long *plStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  long *plStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  long *plStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  byte bStack_3b0;
  byte bStack_3af;
  int iStack_3a0;
  int iStack_39c;
  long lStack_398;
  undefined8 **ppuStack_360;
  code *pcStack_358;
  long *plStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  long *plStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  long *plStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  byte bStack_2f0;
  byte bStack_2ef;
  int iStack_2e0;
  int iStack_2dc;
  long *plStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  int iStack_270;
  int iStack_26c;
  long lStack_268;
  undefined1 **ppuStack_240;
  code *pcStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  byte bStack_1d0;
  byte bStack_1cf;
  int iStack_1c0;
  int iStack_1bc;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  int iStack_150;
  int iStack_14c;
  long lStack_148;
  undefined1 *puStack_120;
  code *pcStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  int iStack_b0;
  uint uStack_ac;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  int iStack_40;
  int iStack_3c;
  long lStack_38;
  
  pplVar10 = &plStack_110;
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_78 = param_2[1];
  plStack_80 = (long *)*param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  puVar13 = param_3;
  FUN_00391bf0(&plStack_60,&plStack_80);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_80) {
    do {
      lVar14 = *plStack_80;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_80,0x10);
      if (bVar3) {
        *plStack_80 = lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar14 + -1 == 0) {
      (*(code *)plStack_80[1])();
    }
  }
  uVar15 = (ulong)(iStack_3c + 1);
  func_0x0038e884(param_1,uVar15);
  *(ulong *)(*(long *)(param_1 + 0x18) + 0x10) =
       *(long *)(*(long *)(param_1 + 0x18) + 0x10) + uVar15;
  puVar4 = *(undefined1 **)(param_1 + 0x10);
  func_0x003ed000(puVar4,uVar15);
  *puVar4 = 0x40;
  if (iStack_3c == 1) {
    puVar4[1] = (char)iStack_40;
  }
  else {
    puVar4[1] = 0x7f;
    puVar13 = (undefined8 *)(ulong)(iStack_3c - 1);
    func_0x0039d584(iStack_40 + -0x7f,puVar4 + 2);
  }
  uStack_98 = uStack_58;
  plStack_a0 = plStack_60;
  uStack_88 = uStack_48;
  uStack_90 = uStack_50;
  uStack_58 = 0;
  plStack_60 = (long *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  FUN_0038e8d8(param_1,&plStack_a0);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_a0) {
    do {
      lVar14 = *plStack_a0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_a0,0x10);
      if (bVar3) {
        *plStack_a0 = lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar14 + -1 == 0) {
      (*(code *)plStack_a0[1])();
    }
  }
  uStack_e8 = param_3[1];
  plStack_f0 = (long *)*param_3;
  uStack_d8 = param_3[3];
  uStack_e0 = param_3[2];
  param_3[1] = 0;
  *param_3 = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  FUN_00391c98(&plStack_d0,&plStack_f0);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_f0) {
    do {
      lVar14 = *plStack_f0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_f0,0x10);
      if (bVar3) {
        *plStack_f0 = lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar14 + -1 == 0) {
      (*(code *)plStack_f0[1])();
    }
  }
  uVar15 = (ulong)uStack_ac;
  func_0x0038e884(param_1,uVar15);
  *(ulong *)(*(long *)(param_1 + 0x18) + 0x10) =
       *(long *)(*(long *)(param_1 + 0x18) + 0x10) + uVar15;
  puVar4 = *(undefined1 **)(param_1 + 0x10);
  func_0x003ed000(puVar4,uVar15);
  if (uStack_ac == 1) {
    *puVar4 = (char)iStack_b0;
    uStack_108 = uStack_c8;
    plStack_110 = plStack_d0;
    uStack_f8 = uStack_b8;
    uStack_100 = uStack_c0;
    uStack_c8 = 0;
    plStack_d0 = (long *)0x0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    FUN_0038e8d8(param_1);
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_110) {
      do {
        lVar14 = *plStack_110;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_110,0x10);
        if (bVar3) {
          *plStack_110 = lVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar14 + -1 == 0) {
        (*(code *)plStack_110[1])();
      }
    }
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_d0) {
      do {
        lVar14 = *plStack_d0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_d0,0x10);
        if (bVar3) {
          *plStack_d0 = lVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar14 + -1 == 0) {
        (*(code *)plStack_d0[1])();
      }
    }
    plVar5 = plStack_60;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_60) {
      do {
        lVar14 = *plStack_60;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_60,0x10);
        if (bVar3) {
          *plStack_60 = lVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar14 + -1 == 0) {
        (*(code *)plStack_60[1])();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
      return;
    }
    ___stack_chk_fail();
    if ((int)pplVar10 != 0) {
      func_0x0040cf10();
      FUN_0034b418(&plStack_110);
      FUN_0034b418(&plStack_d0);
      FUN_0034b418(&plStack_60);
    }
    __Unwind_Resume();
    pplVar11 = &plStack_230;
    puStack_120 = &stack0xfffffffffffffff0;
    pcStack_118 = FUN_0038ee10;
    lStack_148 = *(long *)PTR____stack_chk_guard_00999f88;
    uStack_188 = pplVar10[1];
    plStack_190 = *pplVar10;
    uStack_178 = pplVar10[3];
    uStack_180 = pplVar10[2];
    pplVar10[1] = (long *)0x0;
    *pplVar10 = (long *)0x0;
    pplVar10[3] = (long *)0x0;
    pplVar10[2] = (long *)0x0;
    FUN_00391bf0(&plStack_170,&plStack_190);
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_190) {
      do {
        lVar14 = *plStack_190;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_190,0x10);
        if (bVar3) {
          *plStack_190 = lVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar14 + -1 == 0) {
        (*(code *)plStack_190[1])();
      }
    }
    uVar15 = (ulong)(iStack_14c + 1);
    func_0x0038e884(plVar5,uVar15);
    *(ulong *)(plVar5[3] + 0x10) = *(long *)(plVar5[3] + 0x10) + uVar15;
    puVar4 = (undefined1 *)plVar5[2];
    func_0x003ed000(puVar4,uVar15);
    *puVar4 = 0;
    if (iStack_14c == 1) {
      puVar4[1] = (char)iStack_150;
    }
    else {
      puVar4[1] = 0x7f;
      func_0x0039d584(iStack_150 + -0x7f,puVar4 + 2,iStack_14c + -1);
    }
    uStack_1a8 = uStack_168;
    plStack_1b0 = plStack_170;
    uStack_198 = uStack_158;
    uStack_1a0 = uStack_160;
    uStack_168 = 0;
    plStack_170 = (long *)0x0;
    uStack_158 = 0;
    uStack_160 = 0;
    FUN_0038e8d8(plVar5,&plStack_1b0);
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_1b0) {
      do {
        lVar14 = *plStack_1b0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_1b0,0x10);
        if (bVar3) {
          *plStack_1b0 = lVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar14 + -1 == 0) {
        (*(code *)plStack_1b0[1])();
      }
    }
    uStack_208 = puVar13[1];
    plStack_210 = (long *)*puVar13;
    uStack_1f8 = puVar13[3];
    uStack_200 = puVar13[2];
    puVar13[1] = 0;
    *puVar13 = 0;
    puVar13[3] = 0;
    puVar13[2] = 0;
    puVar13 = (undefined8 *)(ulong)*(byte *)((long)plVar5 + 9);
    FUN_00391d40(&plStack_1f0,&plStack_210);
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_210) {
      do {
        lVar14 = *plStack_210;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_210,0x10);
        if (bVar3) {
          *plStack_210 = lVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar14 + -1 == 0) {
        (*(code *)plStack_210[1])();
      }
    }
    uVar15 = (ulong)(iStack_1bc + (uint)bStack_1cf);
    func_0x0038e884(plVar5,uVar15);
    *(ulong *)(plVar5[3] + 0x10) = *(long *)(plVar5[3] + 0x10) + uVar15;
    pbVar6 = (byte *)plVar5[2];
    func_0x003ed000(pbVar6,uVar15);
    if (iStack_1bc == 1) {
      *pbVar6 = bStack_1d0 | (byte)iStack_1c0;
      if (bStack_1cf != 0) {
        pbVar6[1] = 0;
      }
      uStack_228 = uStack_1e8;
      plStack_230 = plStack_1f0;
      uStack_218 = uStack_1d8;
      uStack_220 = uStack_1e0;
      uStack_1e8 = 0;
      plStack_1f0 = (long *)0x0;
      uStack_1d8 = 0;
      uStack_1e0 = 0;
      FUN_0038e8d8(plVar5);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_230) {
        do {
          lVar14 = *plStack_230;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_230,0x10);
          if (bVar3) {
            *plStack_230 = lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar14 + -1 == 0) {
          (*(code *)plStack_230[1])();
        }
      }
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_1f0) {
        do {
          lVar14 = *plStack_1f0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_1f0,0x10);
          if (bVar3) {
            *plStack_1f0 = lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar14 + -1 == 0) {
          (*(code *)plStack_1f0[1])();
        }
      }
      plVar5 = plStack_170;
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_170) {
        do {
          lVar14 = *plStack_170;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_170,0x10);
          if (bVar3) {
            *plStack_170 = lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar14 + -1 == 0) {
          (*(code *)plStack_170[1])();
        }
      }
      if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_148) {
        return;
      }
      ___stack_chk_fail();
      if ((int)pplVar11 != 0) {
        func_0x0040cf10();
        FUN_0034b418(&plStack_230);
        FUN_0034b418(&plStack_1f0);
        FUN_0034b418(&plStack_170);
      }
      __Unwind_Resume();
      uVar8 = (uint)&plStack_350;
      ppuStack_240 = &puStack_120;
      pcStack_238 = FUN_0038f13c;
      lStack_268 = *(long *)PTR____stack_chk_guard_00999f88;
      uStack_2a8 = pplVar11[1];
      plStack_2b0 = *pplVar11;
      uStack_298 = pplVar11[3];
      uStack_2a0 = pplVar11[2];
      pplVar11[1] = (long *)0x0;
      *pplVar11 = (long *)0x0;
      pplVar11[3] = (long *)0x0;
      pplVar11[2] = (long *)0x0;
      FUN_00391bf0(&plStack_290,&plStack_2b0);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_2b0) {
        do {
          lVar14 = *plStack_2b0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_2b0,0x10);
          if (bVar3) {
            *plStack_2b0 = lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar14 + -1 == 0) {
          (*(code *)plStack_2b0[1])();
        }
      }
      uVar15 = (ulong)(iStack_26c + 1);
      func_0x0038e884(plVar5,uVar15);
      *(ulong *)(plVar5[3] + 0x10) = *(long *)(plVar5[3] + 0x10) + uVar15;
      puVar4 = (undefined1 *)plVar5[2];
      func_0x003ed000(puVar4,uVar15);
      *puVar4 = 0x40;
      if (iStack_26c == 1) {
        puVar4[1] = (char)iStack_270;
      }
      else {
        puVar4[1] = 0x7f;
        func_0x0039d584(iStack_270 + -0x7f,puVar4 + 2,iStack_26c + -1);
      }
      uStack_2c8 = uStack_288;
      plStack_2d0 = plStack_290;
      uStack_2b8 = uStack_278;
      uStack_2c0 = uStack_280;
      uStack_288 = 0;
      plStack_290 = (long *)0x0;
      uStack_278 = 0;
      uStack_280 = 0;
      FUN_0038e8d8(plVar5,&plStack_2d0);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_2d0) {
        do {
          lVar14 = *plStack_2d0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_2d0,0x10);
          if (bVar3) {
            *plStack_2d0 = lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar14 + -1 == 0) {
          (*(code *)plStack_2d0[1])();
        }
      }
      uStack_328 = puVar13[1];
      plStack_330 = (long *)*puVar13;
      uStack_318 = puVar13[3];
      uStack_320 = puVar13[2];
      puVar13[1] = 0;
      *puVar13 = 0;
      puVar13[3] = 0;
      puVar13[2] = 0;
      puVar13 = (undefined8 *)(ulong)*(byte *)((long)plVar5 + 9);
      FUN_00391d40(&plStack_310,&plStack_330);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_330) {
        do {
          lVar14 = *plStack_330;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_330,0x10);
          if (bVar3) {
            *plStack_330 = lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar14 + -1 == 0) {
          (*(code *)plStack_330[1])();
        }
      }
      uVar15 = (ulong)(iStack_2dc + (uint)bStack_2ef);
      func_0x0038e884(plVar5,uVar15);
      *(ulong *)(plVar5[3] + 0x10) = *(long *)(plVar5[3] + 0x10) + uVar15;
      pbVar6 = (byte *)plVar5[2];
      func_0x003ed000(pbVar6,uVar15);
      if (iStack_2dc == 1) {
        *pbVar6 = bStack_2f0 | (byte)iStack_2e0;
        if (bStack_2ef != 0) {
          pbVar6[1] = 0;
        }
        uStack_348 = uStack_308;
        plStack_350 = plStack_310;
        uStack_338 = uStack_2f8;
        uStack_340 = uStack_300;
        uStack_308 = 0;
        plStack_310 = (long *)0x0;
        uStack_2f8 = 0;
        uStack_300 = 0;
        FUN_0038e8d8(plVar5);
        if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_350) {
          do {
            lVar14 = *plStack_350;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plStack_350,0x10);
            if (bVar3) {
              *plStack_350 = lVar14 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar14 + -1 == 0) {
            (*(code *)plStack_350[1])();
          }
        }
        if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_310) {
          do {
            lVar14 = *plStack_310;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plStack_310,0x10);
            if (bVar3) {
              *plStack_310 = lVar14 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar14 + -1 == 0) {
            (*(code *)plStack_310[1])();
          }
        }
        plVar5 = plStack_290;
        if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_290) {
          do {
            lVar14 = *plStack_290;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plStack_290,0x10);
            if (bVar3) {
              *plStack_290 = lVar14 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar14 + -1 == 0) {
            (*(code *)plStack_290[1])();
          }
        }
        if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_268) {
          return;
        }
        ___stack_chk_fail();
        if (uVar8 != 0) {
          func_0x0040cf10();
          FUN_0034b418(&plStack_350);
          FUN_0034b418(&plStack_310);
          FUN_0034b418(&plStack_290);
        }
        __Unwind_Resume();
        pplVar10 = &plStack_410;
        pcStack_358 = FUN_0038f46c;
        lStack_398 = *(long *)PTR____stack_chk_guard_00999f88;
        uStack_3e8 = puVar13[1];
        plStack_3f0 = (long *)*puVar13;
        uStack_3d8 = puVar13[3];
        uStack_3e0 = puVar13[2];
        puVar13[1] = 0;
        *puVar13 = 0;
        puVar13[3] = 0;
        puVar13[2] = 0;
        puVar13 = (undefined8 *)(ulong)*(byte *)((long)plVar5 + 9);
        ppuStack_360 = &ppuStack_240;
        FUN_00391d40(&plStack_3d0,&plStack_3f0);
        if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_3f0) {
          do {
            lVar14 = *plStack_3f0;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plStack_3f0,0x10);
            if (bVar3) {
              *plStack_3f0 = lVar14 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar14 + -1 == 0) {
            (*(code *)plStack_3f0[1])();
          }
        }
        uVar15 = (ulong)(uVar8 - 0xf);
        if (uVar8 < 0xf) {
          uVar16 = 1;
        }
        else {
          uVar16 = uVar15;
          FUN_0039d54c();
        }
        lVar14 = (ulong)(iStack_39c + (uint)bStack_3af) + (uVar16 & 0xffffffff);
        func_0x0038e884(plVar5,lVar14);
        *(long *)(plVar5[3] + 0x10) = *(long *)(plVar5[3] + 0x10) + lVar14;
        puVar4 = (undefined1 *)plVar5[2];
        func_0x003ed000(puVar4,lVar14);
        if ((int)uVar16 == 1) {
          *puVar4 = (char)uVar8;
        }
        else {
          *puVar4 = 0xf;
          puVar13 = (undefined8 *)(ulong)((int)uVar16 - 1);
          func_0x0039d584(uVar15,puVar4 + 1);
        }
        pbVar6 = puVar4 + (uVar16 & 0xffffffff);
        if (iStack_39c == 1) {
          *pbVar6 = bStack_3b0 | (byte)iStack_3a0;
          if (bStack_3af != 0) {
            pbVar6[1] = 0;
          }
          uStack_408 = uStack_3c8;
          plStack_410 = plStack_3d0;
          uStack_3f8 = uStack_3b8;
          uStack_400 = uStack_3c0;
          uStack_3c8 = 0;
          plStack_3d0 = (long *)0x0;
          uStack_3b8 = 0;
          uStack_3c0 = 0;
          FUN_0038e8d8(plVar5);
          if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_410) {
            do {
              lVar14 = *plStack_410;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plStack_410,0x10);
              if (bVar3) {
                *plStack_410 = lVar14 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar14 + -1 == 0) {
              (*(code *)plStack_410[1])();
            }
          }
          plVar5 = plStack_3d0;
          if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_3d0) {
            do {
              lVar14 = *plStack_3d0;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plStack_3d0,0x10);
              if (bVar3) {
                *plStack_3d0 = lVar14 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar14 + -1 == 0) {
              (*(code *)plStack_3d0[1])();
            }
          }
          if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_398) {
            return;
          }
          ___stack_chk_fail();
          if ((int)pplVar10 != 0) {
            func_0x0040cf10();
            FUN_0034b418(&plStack_3d0);
          }
          plVar7 = plVar5;
          __Unwind_Resume();
          iVar9 = (int)&plStack_520;
          pcStack_418 = FUN_0038f6a4;
          lStack_448 = *(long *)PTR____stack_chk_guard_00999f88;
          uStack_488 = pplVar10[1];
          plStack_490 = *pplVar10;
          uStack_478 = pplVar10[3];
          uStack_480 = pplVar10[2];
          pplVar10[1] = (long *)0x0;
          *pplVar10 = (long *)0x0;
          pplVar10[3] = (long *)0x0;
          pplVar10[2] = (long *)0x0;
          uStack_440 = uVar16 & 0xffffffff;
          uStack_438 = uVar15;
          pbStack_430 = pbVar6;
          plStack_428 = plVar5;
          ppuStack_420 = &ppuStack_360;
          FUN_00391bf0(&plStack_470,&plStack_490);
          if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_490) {
            do {
              lVar14 = *plStack_490;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plStack_490,0x10);
              if (bVar3) {
                *plStack_490 = lVar14 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar14 + -1 == 0) {
              (*(code *)plStack_490[1])();
            }
          }
          uVar15 = (ulong)(iStack_44c + 1);
          func_0x0038e884(plVar7,uVar15);
          *(ulong *)(plVar7[3] + 0x10) = *(long *)(plVar7[3] + 0x10) + uVar15;
          puVar4 = (undefined1 *)plVar7[2];
          func_0x003ed000(puVar4,uVar15);
          *puVar4 = 0;
          if (iStack_44c == 1) {
            puVar4[1] = (char)iStack_450;
          }
          else {
            puVar4[1] = 0x7f;
            func_0x0039d584(iStack_450 + -0x7f,puVar4 + 2,iStack_44c + -1);
          }
          uStack_4a8 = uStack_468;
          plStack_4b0 = plStack_470;
          uStack_498 = uStack_458;
          uStack_4a0 = uStack_460;
          uStack_468 = 0;
          plStack_470 = (long *)0x0;
          uStack_458 = 0;
          uStack_460 = 0;
          FUN_0038e8d8(plVar7,&plStack_4b0);
          if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_4b0) {
            do {
              lVar14 = *plStack_4b0;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plStack_4b0,0x10);
              if (bVar3) {
                *plStack_4b0 = lVar14 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar14 + -1 == 0) {
              (*(code *)plStack_4b0[1])();
            }
          }
          uStack_4f8 = puVar13[1];
          plStack_500 = (long *)*puVar13;
          uStack_4e8 = puVar13[3];
          uStack_4f0 = puVar13[2];
          puVar13[1] = 0;
          *puVar13 = 0;
          puVar13[3] = 0;
          puVar13[2] = 0;
          FUN_00391c98(&plStack_4e0,&plStack_500);
          if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_500) {
            do {
              lVar14 = *plStack_500;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plStack_500,0x10);
              if (bVar3) {
                *plStack_500 = lVar14 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar14 + -1 == 0) {
              (*(code *)plStack_500[1])();
            }
          }
          uVar15 = (ulong)uStack_4bc;
          func_0x0038e884(plVar7,uVar15);
          *(ulong *)(plVar7[3] + 0x10) = *(long *)(plVar7[3] + 0x10) + uVar15;
          puVar4 = (undefined1 *)plVar7[2];
          func_0x003ed000(puVar4,uVar15);
          if (uStack_4bc == 1) {
            *puVar4 = (char)iStack_4c0;
            uStack_518 = uStack_4d8;
            plStack_520 = plStack_4e0;
            uStack_508 = uStack_4c8;
            uStack_510 = uStack_4d0;
            uStack_4d8 = 0;
            plStack_4e0 = (long *)0x0;
            uStack_4c8 = 0;
            uStack_4d0 = 0;
            FUN_0038e8d8(plVar7);
            if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_520) {
              do {
                lVar14 = *plStack_520;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plStack_520,0x10);
                if (bVar3) {
                  *plStack_520 = lVar14 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar14 + -1 == 0) {
                (*(code *)plStack_520[1])();
              }
            }
            if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_4e0) {
              do {
                lVar14 = *plStack_4e0;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plStack_4e0,0x10);
                if (bVar3) {
                  *plStack_4e0 = lVar14 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar14 + -1 == 0) {
                (*(code *)plStack_4e0[1])();
              }
            }
            plVar5 = plStack_470;
            if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_470) {
              do {
                lVar14 = *plStack_470;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plStack_470,0x10);
                if (bVar3) {
                  *plStack_470 = lVar14 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar14 + -1 == 0) {
                (*(code *)plStack_470[1])();
              }
            }
            if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_448) {
              return;
            }
            ___stack_chk_fail();
            if (iVar9 != 0) {
              func_0x0040cf10();
              FUN_0034b418(&plStack_520);
              FUN_0034b418(&plStack_4e0);
              FUN_0034b418(&plStack_470);
            }
            __Unwind_Resume();
            uVar1 = *(uint *)(plVar5[4] + 0xc);
            uVar8 = uVar1 - 0x1f;
            uVar15 = (ulong)uVar8;
            if (uVar1 < 0x1f) {
              uVar15 = 1;
            }
            else {
              FUN_0039d54c();
            }
            func_0x0038e884(plVar5,uVar15 & 0xffffffff);
            pbVar6 = (byte *)plVar5[2];
            *(ulong *)(plVar5[3] + 0x10) = *(long *)(plVar5[3] + 0x10) + (uVar15 & 0xffffffff);
            func_0x003ed000(pbVar6,uVar15 & 0xffffffff);
            iStack_39c = (int)uVar15 + -1;
            if (iStack_39c == 0) {
              *pbVar6 = (byte)uVar1 | 0x20;
              return;
            }
            pbVar12 = pbVar6 + 1;
            *pbVar6 = 0x3f;
          }
          else {
            pbVar12 = puVar4 + 1;
            *puVar4 = 0x7f;
            uVar8 = iStack_4c0 - 0x7f;
            iStack_39c = uStack_4bc - 1;
          }
        }
        else {
          pbVar12 = pbVar6 + 1;
          *pbVar6 = bStack_3b0 | 0x7f;
          uVar8 = iStack_3a0 - 0x7f;
          iStack_39c = iStack_39c + -1;
        }
      }
      else {
        pbVar12 = pbVar6 + 1;
        *pbVar6 = bStack_2f0 | 0x7f;
        uVar8 = iStack_2e0 - 0x7f;
        iStack_39c = iStack_2dc + -1;
      }
    }
    else {
      pbVar12 = pbVar6 + 1;
      *pbVar6 = bStack_1d0 | 0x7f;
      uVar8 = iStack_1c0 - 0x7f;
      iStack_39c = iStack_1bc + -1;
    }
  }
  else {
    pbVar12 = puVar4 + 1;
    *puVar4 = 0x7f;
    uVar8 = iStack_b0 - 0x7f;
    iStack_39c = uStack_ac - 1;
  }
  uVar1 = iStack_39c - 1;
  switch((ulong)uVar1) {
  case 4:
    pbVar12[4] = (byte)(uVar8 >> 0x1c) | 0x80;
  case 3:
    pbVar12[3] = (byte)(uVar8 >> 0x15) | 0x80;
  case 2:
    pbVar12[2] = (byte)(uVar8 >> 0xe) | 0x80;
  case 1:
    pbVar12[1] = (byte)(uVar8 >> 7) | 0x80;
  case 0:
    *pbVar12 = (byte)uVar8 | 0x80;
  default:
    pbVar12[uVar1] = pbVar12[uVar1] & 0x7f;
    return;
  }
}



/* Entry: 0038ee10; end: 0038f13b;  */

/* WARNING: Possible PIC construction at 0x0038f864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0038f5a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0038f318: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0038efe8: Changing call to branch */

void FUN_0038ee10(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  int iVar9;
  long **pplVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long *plStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  long *plStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  long *plStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  int iStack_3b0;
  uint uStack_3ac;
  long *plStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  long *plStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  long *plStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  int iStack_340;
  int iStack_33c;
  long lStack_338;
  ulong uStack_330;
  ulong uStack_328;
  byte *pbStack_320;
  long *plStack_318;
  undefined8 **ppuStack_310;
  code *pcStack_308;
  long *plStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long *plStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  byte bStack_2a0;
  byte bStack_29f;
  int iStack_290;
  int iStack_28c;
  long lStack_288;
  undefined1 **ppuStack_250;
  code *pcStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  byte bStack_1e0;
  byte bStack_1df;
  int iStack_1d0;
  int iStack_1cc;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  int iStack_160;
  int iStack_15c;
  long lStack_158;
  undefined1 *puStack_130;
  code *pcStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  byte bStack_c0;
  byte bStack_bf;
  int iStack_b0;
  int iStack_ac;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  int iStack_40;
  int iStack_3c;
  long lStack_38;
  
  pplVar10 = &plStack_120;
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_78 = param_2[1];
  plStack_80 = (long *)*param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  FUN_00391bf0(&plStack_60,&plStack_80);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_80) {
    do {
      lVar13 = *plStack_80;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_80,0x10);
      if (bVar3) {
        *plStack_80 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 + -1 == 0) {
      (*(code *)plStack_80[1])();
    }
  }
  uVar14 = (ulong)(iStack_3c + 1);
  func_0x0038e884(param_1,uVar14);
  *(ulong *)(*(long *)(param_1 + 0x18) + 0x10) =
       *(long *)(*(long *)(param_1 + 0x18) + 0x10) + uVar14;
  puVar4 = *(undefined1 **)(param_1 + 0x10);
  func_0x003ed000(puVar4,uVar14);
  *puVar4 = 0;
  if (iStack_3c == 1) {
    puVar4[1] = (char)iStack_40;
  }
  else {
    puVar4[1] = 0x7f;
    func_0x0039d584(iStack_40 + -0x7f,puVar4 + 2,iStack_3c + -1);
  }
  uStack_98 = uStack_58;
  plStack_a0 = plStack_60;
  uStack_88 = uStack_48;
  uStack_90 = uStack_50;
  uStack_58 = 0;
  plStack_60 = (long *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  FUN_0038e8d8(param_1,&plStack_a0);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_a0) {
    do {
      lVar13 = *plStack_a0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_a0,0x10);
      if (bVar3) {
        *plStack_a0 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 + -1 == 0) {
      (*(code *)plStack_a0[1])();
    }
  }
  uStack_f8 = param_3[1];
  plStack_100 = (long *)*param_3;
  uStack_e8 = param_3[3];
  uStack_f0 = param_3[2];
  param_3[1] = 0;
  *param_3 = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  puVar12 = (undefined8 *)(ulong)*(byte *)(param_1 + 9);
  FUN_00391d40(&plStack_e0,&plStack_100);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_100) {
    do {
      lVar13 = *plStack_100;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_100,0x10);
      if (bVar3) {
        *plStack_100 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 + -1 == 0) {
      (*(code *)plStack_100[1])();
    }
  }
  uVar14 = (ulong)(iStack_ac + (uint)bStack_bf);
  func_0x0038e884(param_1,uVar14);
  *(ulong *)(*(long *)(param_1 + 0x18) + 0x10) =
       *(long *)(*(long *)(param_1 + 0x18) + 0x10) + uVar14;
  pbVar5 = *(byte **)(param_1 + 0x10);
  func_0x003ed000(pbVar5,uVar14);
  if (iStack_ac == 1) {
    *pbVar5 = bStack_c0 | (byte)iStack_b0;
    if (bStack_bf != 0) {
      pbVar5[1] = 0;
    }
    uStack_118 = uStack_d8;
    plStack_120 = plStack_e0;
    uStack_108 = uStack_c8;
    uStack_110 = uStack_d0;
    uStack_d8 = 0;
    plStack_e0 = (long *)0x0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    FUN_0038e8d8(param_1);
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_120) {
      do {
        lVar13 = *plStack_120;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_120,0x10);
        if (bVar3) {
          *plStack_120 = lVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar13 + -1 == 0) {
        (*(code *)plStack_120[1])();
      }
    }
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_e0) {
      do {
        lVar13 = *plStack_e0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_e0,0x10);
        if (bVar3) {
          *plStack_e0 = lVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar13 + -1 == 0) {
        (*(code *)plStack_e0[1])();
      }
    }
    plVar6 = plStack_60;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_60) {
      do {
        lVar13 = *plStack_60;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_60,0x10);
        if (bVar3) {
          *plStack_60 = lVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar13 + -1 == 0) {
        (*(code *)plStack_60[1])();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
      return;
    }
    ___stack_chk_fail();
    if ((int)pplVar10 != 0) {
      func_0x0040cf10();
      FUN_0034b418(&plStack_120);
      FUN_0034b418(&plStack_e0);
      FUN_0034b418(&plStack_60);
    }
    __Unwind_Resume();
    uVar8 = (uint)&plStack_240;
    puStack_130 = &stack0xfffffffffffffff0;
    pcStack_128 = FUN_0038f13c;
    lStack_158 = *(long *)PTR____stack_chk_guard_00999f88;
    uStack_198 = pplVar10[1];
    plStack_1a0 = *pplVar10;
    uStack_188 = pplVar10[3];
    uStack_190 = pplVar10[2];
    pplVar10[1] = (long *)0x0;
    *pplVar10 = (long *)0x0;
    pplVar10[3] = (long *)0x0;
    pplVar10[2] = (long *)0x0;
    FUN_00391bf0(&plStack_180,&plStack_1a0);
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_1a0) {
      do {
        lVar13 = *plStack_1a0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_1a0,0x10);
        if (bVar3) {
          *plStack_1a0 = lVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar13 + -1 == 0) {
        (*(code *)plStack_1a0[1])();
      }
    }
    uVar14 = (ulong)(iStack_15c + 1);
    func_0x0038e884(plVar6,uVar14);
    *(ulong *)(plVar6[3] + 0x10) = *(long *)(plVar6[3] + 0x10) + uVar14;
    puVar4 = (undefined1 *)plVar6[2];
    func_0x003ed000(puVar4,uVar14);
    *puVar4 = 0x40;
    if (iStack_15c == 1) {
      puVar4[1] = (char)iStack_160;
    }
    else {
      puVar4[1] = 0x7f;
      func_0x0039d584(iStack_160 + -0x7f,puVar4 + 2,iStack_15c + -1);
    }
    uStack_1b8 = uStack_178;
    plStack_1c0 = plStack_180;
    uStack_1a8 = uStack_168;
    uStack_1b0 = uStack_170;
    uStack_178 = 0;
    plStack_180 = (long *)0x0;
    uStack_168 = 0;
    uStack_170 = 0;
    FUN_0038e8d8(plVar6,&plStack_1c0);
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_1c0) {
      do {
        lVar13 = *plStack_1c0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_1c0,0x10);
        if (bVar3) {
          *plStack_1c0 = lVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar13 + -1 == 0) {
        (*(code *)plStack_1c0[1])();
      }
    }
    uStack_218 = puVar12[1];
    plStack_220 = (long *)*puVar12;
    uStack_208 = puVar12[3];
    uStack_210 = puVar12[2];
    puVar12[1] = 0;
    *puVar12 = 0;
    puVar12[3] = 0;
    puVar12[2] = 0;
    puVar12 = (undefined8 *)(ulong)*(byte *)((long)plVar6 + 9);
    FUN_00391d40(&plStack_200,&plStack_220);
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_220) {
      do {
        lVar13 = *plStack_220;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_220,0x10);
        if (bVar3) {
          *plStack_220 = lVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar13 + -1 == 0) {
        (*(code *)plStack_220[1])();
      }
    }
    uVar14 = (ulong)(iStack_1cc + (uint)bStack_1df);
    func_0x0038e884(plVar6,uVar14);
    *(ulong *)(plVar6[3] + 0x10) = *(long *)(plVar6[3] + 0x10) + uVar14;
    pbVar5 = (byte *)plVar6[2];
    func_0x003ed000(pbVar5,uVar14);
    if (iStack_1cc == 1) {
      *pbVar5 = bStack_1e0 | (byte)iStack_1d0;
      if (bStack_1df != 0) {
        pbVar5[1] = 0;
      }
      uStack_238 = uStack_1f8;
      plStack_240 = plStack_200;
      uStack_228 = uStack_1e8;
      uStack_230 = uStack_1f0;
      uStack_1f8 = 0;
      plStack_200 = (long *)0x0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      FUN_0038e8d8(plVar6);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_240) {
        do {
          lVar13 = *plStack_240;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_240,0x10);
          if (bVar3) {
            *plStack_240 = lVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar13 + -1 == 0) {
          (*(code *)plStack_240[1])();
        }
      }
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_200) {
        do {
          lVar13 = *plStack_200;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_200,0x10);
          if (bVar3) {
            *plStack_200 = lVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar13 + -1 == 0) {
          (*(code *)plStack_200[1])();
        }
      }
      plVar6 = plStack_180;
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_180) {
        do {
          lVar13 = *plStack_180;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_180,0x10);
          if (bVar3) {
            *plStack_180 = lVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar13 + -1 == 0) {
          (*(code *)plStack_180[1])();
        }
      }
      if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_158) {
        return;
      }
      ___stack_chk_fail();
      if (uVar8 != 0) {
        func_0x0040cf10();
        FUN_0034b418(&plStack_240);
        FUN_0034b418(&plStack_200);
        FUN_0034b418(&plStack_180);
      }
      __Unwind_Resume();
      pplVar10 = &plStack_300;
      pcStack_248 = FUN_0038f46c;
      lStack_288 = *(long *)PTR____stack_chk_guard_00999f88;
      uStack_2d8 = puVar12[1];
      plStack_2e0 = (long *)*puVar12;
      uStack_2c8 = puVar12[3];
      uStack_2d0 = puVar12[2];
      puVar12[1] = 0;
      *puVar12 = 0;
      puVar12[3] = 0;
      puVar12[2] = 0;
      puVar12 = (undefined8 *)(ulong)*(byte *)((long)plVar6 + 9);
      ppuStack_250 = &puStack_130;
      FUN_00391d40(&plStack_2c0,&plStack_2e0);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_2e0) {
        do {
          lVar13 = *plStack_2e0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_2e0,0x10);
          if (bVar3) {
            *plStack_2e0 = lVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar13 + -1 == 0) {
          (*(code *)plStack_2e0[1])();
        }
      }
      uVar14 = (ulong)(uVar8 - 0xf);
      if (uVar8 < 0xf) {
        uVar15 = 1;
      }
      else {
        uVar15 = uVar14;
        FUN_0039d54c();
      }
      lVar13 = (ulong)(iStack_28c + (uint)bStack_29f) + (uVar15 & 0xffffffff);
      func_0x0038e884(plVar6,lVar13);
      *(long *)(plVar6[3] + 0x10) = *(long *)(plVar6[3] + 0x10) + lVar13;
      puVar4 = (undefined1 *)plVar6[2];
      func_0x003ed000(puVar4,lVar13);
      if ((int)uVar15 == 1) {
        *puVar4 = (char)uVar8;
      }
      else {
        *puVar4 = 0xf;
        puVar12 = (undefined8 *)(ulong)((int)uVar15 - 1);
        func_0x0039d584(uVar14,puVar4 + 1);
      }
      pbVar5 = puVar4 + (uVar15 & 0xffffffff);
      if (iStack_28c == 1) {
        *pbVar5 = bStack_2a0 | (byte)iStack_290;
        if (bStack_29f != 0) {
          pbVar5[1] = 0;
        }
        uStack_2f8 = uStack_2b8;
        plStack_300 = plStack_2c0;
        uStack_2e8 = uStack_2a8;
        uStack_2f0 = uStack_2b0;
        uStack_2b8 = 0;
        plStack_2c0 = (long *)0x0;
        uStack_2a8 = 0;
        uStack_2b0 = 0;
        FUN_0038e8d8(plVar6);
        if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_300) {
          do {
            lVar13 = *plStack_300;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plStack_300,0x10);
            if (bVar3) {
              *plStack_300 = lVar13 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar13 + -1 == 0) {
            (*(code *)plStack_300[1])();
          }
        }
        plVar6 = plStack_2c0;
        if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_2c0) {
          do {
            lVar13 = *plStack_2c0;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plStack_2c0,0x10);
            if (bVar3) {
              *plStack_2c0 = lVar13 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar13 + -1 == 0) {
            (*(code *)plStack_2c0[1])();
          }
        }
        if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_288) {
          return;
        }
        ___stack_chk_fail();
        if ((int)pplVar10 != 0) {
          func_0x0040cf10();
          FUN_0034b418(&plStack_2c0);
        }
        plVar7 = plVar6;
        __Unwind_Resume();
        iVar9 = (int)&plStack_410;
        pcStack_308 = FUN_0038f6a4;
        lStack_338 = *(long *)PTR____stack_chk_guard_00999f88;
        uStack_378 = pplVar10[1];
        plStack_380 = *pplVar10;
        uStack_368 = pplVar10[3];
        uStack_370 = pplVar10[2];
        pplVar10[1] = (long *)0x0;
        *pplVar10 = (long *)0x0;
        pplVar10[3] = (long *)0x0;
        pplVar10[2] = (long *)0x0;
        uStack_330 = uVar15 & 0xffffffff;
        uStack_328 = uVar14;
        pbStack_320 = pbVar5;
        plStack_318 = plVar6;
        ppuStack_310 = &ppuStack_250;
        FUN_00391bf0(&plStack_360,&plStack_380);
        if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_380) {
          do {
            lVar13 = *plStack_380;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plStack_380,0x10);
            if (bVar3) {
              *plStack_380 = lVar13 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar13 + -1 == 0) {
            (*(code *)plStack_380[1])();
          }
        }
        uVar14 = (ulong)(iStack_33c + 1);
        func_0x0038e884(plVar7,uVar14);
        *(ulong *)(plVar7[3] + 0x10) = *(long *)(plVar7[3] + 0x10) + uVar14;
        puVar4 = (undefined1 *)plVar7[2];
        func_0x003ed000(puVar4,uVar14);
        *puVar4 = 0;
        if (iStack_33c == 1) {
          puVar4[1] = (char)iStack_340;
        }
        else {
          puVar4[1] = 0x7f;
          func_0x0039d584(iStack_340 + -0x7f,puVar4 + 2,iStack_33c + -1);
        }
        uStack_398 = uStack_358;
        plStack_3a0 = plStack_360;
        uStack_388 = uStack_348;
        uStack_390 = uStack_350;
        uStack_358 = 0;
        plStack_360 = (long *)0x0;
        uStack_348 = 0;
        uStack_350 = 0;
        FUN_0038e8d8(plVar7,&plStack_3a0);
        if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_3a0) {
          do {
            lVar13 = *plStack_3a0;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plStack_3a0,0x10);
            if (bVar3) {
              *plStack_3a0 = lVar13 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar13 + -1 == 0) {
            (*(code *)plStack_3a0[1])();
          }
        }
        uStack_3e8 = puVar12[1];
        plStack_3f0 = (long *)*puVar12;
        uStack_3d8 = puVar12[3];
        uStack_3e0 = puVar12[2];
        puVar12[1] = 0;
        *puVar12 = 0;
        puVar12[3] = 0;
        puVar12[2] = 0;
        FUN_00391c98(&plStack_3d0,&plStack_3f0);
        if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_3f0) {
          do {
            lVar13 = *plStack_3f0;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plStack_3f0,0x10);
            if (bVar3) {
              *plStack_3f0 = lVar13 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar13 + -1 == 0) {
            (*(code *)plStack_3f0[1])();
          }
        }
        uVar14 = (ulong)uStack_3ac;
        func_0x0038e884(plVar7,uVar14);
        *(ulong *)(plVar7[3] + 0x10) = *(long *)(plVar7[3] + 0x10) + uVar14;
        puVar4 = (undefined1 *)plVar7[2];
        func_0x003ed000(puVar4,uVar14);
        if (uStack_3ac == 1) {
          *puVar4 = (char)iStack_3b0;
          uStack_408 = uStack_3c8;
          plStack_410 = plStack_3d0;
          uStack_3f8 = uStack_3b8;
          uStack_400 = uStack_3c0;
          uStack_3c8 = 0;
          plStack_3d0 = (long *)0x0;
          uStack_3b8 = 0;
          uStack_3c0 = 0;
          FUN_0038e8d8(plVar7);
          if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_410) {
            do {
              lVar13 = *plStack_410;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plStack_410,0x10);
              if (bVar3) {
                *plStack_410 = lVar13 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar13 + -1 == 0) {
              (*(code *)plStack_410[1])();
            }
          }
          if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_3d0) {
            do {
              lVar13 = *plStack_3d0;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plStack_3d0,0x10);
              if (bVar3) {
                *plStack_3d0 = lVar13 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar13 + -1 == 0) {
              (*(code *)plStack_3d0[1])();
            }
          }
          plVar6 = plStack_360;
          if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_360) {
            do {
              lVar13 = *plStack_360;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plStack_360,0x10);
              if (bVar3) {
                *plStack_360 = lVar13 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar13 + -1 == 0) {
              (*(code *)plStack_360[1])();
            }
          }
          if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_338) {
            return;
          }
          ___stack_chk_fail();
          if (iVar9 != 0) {
            func_0x0040cf10();
            FUN_0034b418(&plStack_410);
            FUN_0034b418(&plStack_3d0);
            FUN_0034b418(&plStack_360);
          }
          __Unwind_Resume();
          uVar1 = *(uint *)(plVar6[4] + 0xc);
          uVar8 = uVar1 - 0x1f;
          uVar14 = (ulong)uVar8;
          if (uVar1 < 0x1f) {
            uVar14 = 1;
          }
          else {
            FUN_0039d54c();
          }
          func_0x0038e884(plVar6,uVar14 & 0xffffffff);
          pbVar5 = (byte *)plVar6[2];
          *(ulong *)(plVar6[3] + 0x10) = *(long *)(plVar6[3] + 0x10) + (uVar14 & 0xffffffff);
          func_0x003ed000(pbVar5,uVar14 & 0xffffffff);
          iStack_28c = (int)uVar14 + -1;
          if (iStack_28c == 0) {
            *pbVar5 = (byte)uVar1 | 0x20;
            return;
          }
          pbVar11 = pbVar5 + 1;
          *pbVar5 = 0x3f;
        }
        else {
          pbVar11 = puVar4 + 1;
          *puVar4 = 0x7f;
          uVar8 = iStack_3b0 - 0x7f;
          iStack_28c = uStack_3ac - 1;
        }
      }
      else {
        pbVar11 = pbVar5 + 1;
        *pbVar5 = bStack_2a0 | 0x7f;
        uVar8 = iStack_290 - 0x7f;
        iStack_28c = iStack_28c + -1;
      }
    }
    else {
      pbVar11 = pbVar5 + 1;
      *pbVar5 = bStack_1e0 | 0x7f;
      uVar8 = iStack_1d0 - 0x7f;
      iStack_28c = iStack_1cc + -1;
    }
  }
  else {
    pbVar11 = pbVar5 + 1;
    *pbVar5 = bStack_c0 | 0x7f;
    uVar8 = iStack_b0 - 0x7f;
    iStack_28c = iStack_ac + -1;
  }
  uVar1 = iStack_28c - 1;
  switch((ulong)uVar1) {
  case 4:
    pbVar11[4] = (byte)(uVar8 >> 0x1c) | 0x80;
  case 3:
    pbVar11[3] = (byte)(uVar8 >> 0x15) | 0x80;
  case 2:
    pbVar11[2] = (byte)(uVar8 >> 0xe) | 0x80;
  case 1:
    pbVar11[1] = (byte)(uVar8 >> 7) | 0x80;
  case 0:
    *pbVar11 = (byte)uVar8 | 0x80;
  default:
    pbVar11[uVar1] = pbVar11[uVar1] & 0x7f;
    return;
  }
}



/* Entry: 0038f13c; end: 0038f46b;  */

/* WARNING: Possible PIC construction at 0x0038f864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0038f5a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0038f318: Changing call to branch */

void FUN_0038f13c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  int iVar9;
  long **pplVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long *plStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long *plStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  int iStack_290;
  uint uStack_28c;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  int iStack_220;
  int iStack_21c;
  long lStack_218;
  ulong uStack_210;
  ulong uStack_208;
  byte *pbStack_200;
  long *plStack_1f8;
  undefined1 **ppuStack_1f0;
  code *pcStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  byte bStack_180;
  byte bStack_17f;
  int iStack_170;
  int iStack_16c;
  long lStack_168;
  undefined1 *puStack_130;
  code *pcStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  byte bStack_c0;
  byte bStack_bf;
  int iStack_b0;
  int iStack_ac;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  int iStack_40;
  int iStack_3c;
  long lStack_38;
  
  uVar8 = (uint)&plStack_120;
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_78 = param_2[1];
  plStack_80 = (long *)*param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  FUN_00391bf0(&plStack_60,&plStack_80);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_80) {
    do {
      lVar13 = *plStack_80;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_80,0x10);
      if (bVar3) {
        *plStack_80 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 + -1 == 0) {
      (*(code *)plStack_80[1])();
    }
  }
  uVar14 = (ulong)(iStack_3c + 1);
  func_0x0038e884(param_1,uVar14);
  *(ulong *)(*(long *)(param_1 + 0x18) + 0x10) =
       *(long *)(*(long *)(param_1 + 0x18) + 0x10) + uVar14;
  puVar4 = *(undefined1 **)(param_1 + 0x10);
  func_0x003ed000(puVar4,uVar14);
  *puVar4 = 0x40;
  if (iStack_3c == 1) {
    puVar4[1] = (char)iStack_40;
  }
  else {
    puVar4[1] = 0x7f;
    func_0x0039d584(iStack_40 + -0x7f,puVar4 + 2,iStack_3c + -1);
  }
  uStack_98 = uStack_58;
  plStack_a0 = plStack_60;
  uStack_88 = uStack_48;
  uStack_90 = uStack_50;
  uStack_58 = 0;
  plStack_60 = (long *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  FUN_0038e8d8(param_1,&plStack_a0);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_a0) {
    do {
      lVar13 = *plStack_a0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_a0,0x10);
      if (bVar3) {
        *plStack_a0 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 + -1 == 0) {
      (*(code *)plStack_a0[1])();
    }
  }
  uStack_f8 = param_3[1];
  plStack_100 = (long *)*param_3;
  uStack_e8 = param_3[3];
  uStack_f0 = param_3[2];
  param_3[1] = 0;
  *param_3 = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  puVar12 = (undefined8 *)(ulong)*(byte *)(param_1 + 9);
  FUN_00391d40(&plStack_e0,&plStack_100);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_100) {
    do {
      lVar13 = *plStack_100;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_100,0x10);
      if (bVar3) {
        *plStack_100 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 + -1 == 0) {
      (*(code *)plStack_100[1])();
    }
  }
  uVar14 = (ulong)(iStack_ac + (uint)bStack_bf);
  func_0x0038e884(param_1,uVar14);
  *(ulong *)(*(long *)(param_1 + 0x18) + 0x10) =
       *(long *)(*(long *)(param_1 + 0x18) + 0x10) + uVar14;
  pbVar5 = *(byte **)(param_1 + 0x10);
  func_0x003ed000(pbVar5,uVar14);
  if (iStack_ac == 1) {
    *pbVar5 = bStack_c0 | (byte)iStack_b0;
    if (bStack_bf != 0) {
      pbVar5[1] = 0;
    }
    uStack_118 = uStack_d8;
    plStack_120 = plStack_e0;
    uStack_108 = uStack_c8;
    uStack_110 = uStack_d0;
    uStack_d8 = 0;
    plStack_e0 = (long *)0x0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    FUN_0038e8d8(param_1);
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_120) {
      do {
        lVar13 = *plStack_120;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_120,0x10);
        if (bVar3) {
          *plStack_120 = lVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar13 + -1 == 0) {
        (*(code *)plStack_120[1])();
      }
    }
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_e0) {
      do {
        lVar13 = *plStack_e0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_e0,0x10);
        if (bVar3) {
          *plStack_e0 = lVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar13 + -1 == 0) {
        (*(code *)plStack_e0[1])();
      }
    }
    plVar6 = plStack_60;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_60) {
      do {
        lVar13 = *plStack_60;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_60,0x10);
        if (bVar3) {
          *plStack_60 = lVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar13 + -1 == 0) {
        (*(code *)plStack_60[1])();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
      return;
    }
    ___stack_chk_fail();
    if (uVar8 != 0) {
      func_0x0040cf10();
      FUN_0034b418(&plStack_120);
      FUN_0034b418(&plStack_e0);
      FUN_0034b418(&plStack_60);
    }
    __Unwind_Resume();
    pplVar10 = &plStack_1e0;
    pcStack_128 = FUN_0038f46c;
    lStack_168 = *(long *)PTR____stack_chk_guard_00999f88;
    uStack_1b8 = puVar12[1];
    plStack_1c0 = (long *)*puVar12;
    uStack_1a8 = puVar12[3];
    uStack_1b0 = puVar12[2];
    puVar12[1] = 0;
    *puVar12 = 0;
    puVar12[3] = 0;
    puVar12[2] = 0;
    puVar12 = (undefined8 *)(ulong)*(byte *)((long)plVar6 + 9);
    puStack_130 = &stack0xfffffffffffffff0;
    FUN_00391d40(&plStack_1a0,&plStack_1c0);
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_1c0) {
      do {
        lVar13 = *plStack_1c0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_1c0,0x10);
        if (bVar3) {
          *plStack_1c0 = lVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar13 + -1 == 0) {
        (*(code *)plStack_1c0[1])();
      }
    }
    uVar14 = (ulong)(uVar8 - 0xf);
    if (uVar8 < 0xf) {
      uVar15 = 1;
    }
    else {
      uVar15 = uVar14;
      FUN_0039d54c();
    }
    lVar13 = (ulong)(iStack_16c + (uint)bStack_17f) + (uVar15 & 0xffffffff);
    func_0x0038e884(plVar6,lVar13);
    *(long *)(plVar6[3] + 0x10) = *(long *)(plVar6[3] + 0x10) + lVar13;
    puVar4 = (undefined1 *)plVar6[2];
    func_0x003ed000(puVar4,lVar13);
    if ((int)uVar15 == 1) {
      *puVar4 = (char)uVar8;
    }
    else {
      *puVar4 = 0xf;
      puVar12 = (undefined8 *)(ulong)((int)uVar15 - 1);
      func_0x0039d584(uVar14,puVar4 + 1);
    }
    pbVar5 = puVar4 + (uVar15 & 0xffffffff);
    if (iStack_16c == 1) {
      *pbVar5 = bStack_180 | (byte)iStack_170;
      if (bStack_17f != 0) {
        pbVar5[1] = 0;
      }
      uStack_1d8 = uStack_198;
      plStack_1e0 = plStack_1a0;
      uStack_1c8 = uStack_188;
      uStack_1d0 = uStack_190;
      uStack_198 = 0;
      plStack_1a0 = (long *)0x0;
      uStack_188 = 0;
      uStack_190 = 0;
      FUN_0038e8d8(plVar6);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_1e0) {
        do {
          lVar13 = *plStack_1e0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_1e0,0x10);
          if (bVar3) {
            *plStack_1e0 = lVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar13 + -1 == 0) {
          (*(code *)plStack_1e0[1])();
        }
      }
      plVar6 = plStack_1a0;
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_1a0) {
        do {
          lVar13 = *plStack_1a0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_1a0,0x10);
          if (bVar3) {
            *plStack_1a0 = lVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar13 + -1 == 0) {
          (*(code *)plStack_1a0[1])();
        }
      }
      if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_168) {
        return;
      }
      ___stack_chk_fail();
      if ((int)pplVar10 != 0) {
        func_0x0040cf10();
        FUN_0034b418(&plStack_1a0);
      }
      plVar7 = plVar6;
      __Unwind_Resume();
      iVar9 = (int)&plStack_2f0;
      pcStack_1e8 = FUN_0038f6a4;
      lStack_218 = *(long *)PTR____stack_chk_guard_00999f88;
      uStack_258 = pplVar10[1];
      plStack_260 = *pplVar10;
      uStack_248 = pplVar10[3];
      uStack_250 = pplVar10[2];
      pplVar10[1] = (long *)0x0;
      *pplVar10 = (long *)0x0;
      pplVar10[3] = (long *)0x0;
      pplVar10[2] = (long *)0x0;
      uStack_210 = uVar15 & 0xffffffff;
      uStack_208 = uVar14;
      pbStack_200 = pbVar5;
      plStack_1f8 = plVar6;
      ppuStack_1f0 = &puStack_130;
      FUN_00391bf0(&plStack_240,&plStack_260);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_260) {
        do {
          lVar13 = *plStack_260;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_260,0x10);
          if (bVar3) {
            *plStack_260 = lVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar13 + -1 == 0) {
          (*(code *)plStack_260[1])();
        }
      }
      uVar14 = (ulong)(iStack_21c + 1);
      func_0x0038e884(plVar7,uVar14);
      *(ulong *)(plVar7[3] + 0x10) = *(long *)(plVar7[3] + 0x10) + uVar14;
      puVar4 = (undefined1 *)plVar7[2];
      func_0x003ed000(puVar4,uVar14);
      *puVar4 = 0;
      if (iStack_21c == 1) {
        puVar4[1] = (char)iStack_220;
      }
      else {
        puVar4[1] = 0x7f;
        func_0x0039d584(iStack_220 + -0x7f,puVar4 + 2,iStack_21c + -1);
      }
      uStack_278 = uStack_238;
      plStack_280 = plStack_240;
      uStack_268 = uStack_228;
      uStack_270 = uStack_230;
      uStack_238 = 0;
      plStack_240 = (long *)0x0;
      uStack_228 = 0;
      uStack_230 = 0;
      FUN_0038e8d8(plVar7,&plStack_280);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_280) {
        do {
          lVar13 = *plStack_280;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_280,0x10);
          if (bVar3) {
            *plStack_280 = lVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar13 + -1 == 0) {
          (*(code *)plStack_280[1])();
        }
      }
      uStack_2c8 = puVar12[1];
      plStack_2d0 = (long *)*puVar12;
      uStack_2b8 = puVar12[3];
      uStack_2c0 = puVar12[2];
      puVar12[1] = 0;
      *puVar12 = 0;
      puVar12[3] = 0;
      puVar12[2] = 0;
      FUN_00391c98(&plStack_2b0,&plStack_2d0);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_2d0) {
        do {
          lVar13 = *plStack_2d0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_2d0,0x10);
          if (bVar3) {
            *plStack_2d0 = lVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar13 + -1 == 0) {
          (*(code *)plStack_2d0[1])();
        }
      }
      uVar14 = (ulong)uStack_28c;
      func_0x0038e884(plVar7,uVar14);
      *(ulong *)(plVar7[3] + 0x10) = *(long *)(plVar7[3] + 0x10) + uVar14;
      puVar4 = (undefined1 *)plVar7[2];
      func_0x003ed000(puVar4,uVar14);
      if (uStack_28c == 1) {
        *puVar4 = (char)iStack_290;
        uStack_2e8 = uStack_2a8;
        plStack_2f0 = plStack_2b0;
        uStack_2d8 = uStack_298;
        uStack_2e0 = uStack_2a0;
        uStack_2a8 = 0;
        plStack_2b0 = (long *)0x0;
        uStack_298 = 0;
        uStack_2a0 = 0;
        FUN_0038e8d8(plVar7);
        if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_2f0) {
          do {
            lVar13 = *plStack_2f0;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plStack_2f0,0x10);
            if (bVar3) {
              *plStack_2f0 = lVar13 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar13 + -1 == 0) {
            (*(code *)plStack_2f0[1])();
          }
        }
        if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_2b0) {
          do {
            lVar13 = *plStack_2b0;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plStack_2b0,0x10);
            if (bVar3) {
              *plStack_2b0 = lVar13 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar13 + -1 == 0) {
            (*(code *)plStack_2b0[1])();
          }
        }
        plVar6 = plStack_240;
        if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_240) {
          do {
            lVar13 = *plStack_240;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plStack_240,0x10);
            if (bVar3) {
              *plStack_240 = lVar13 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar13 + -1 == 0) {
            (*(code *)plStack_240[1])();
          }
        }
        if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_218) {
          return;
        }
        ___stack_chk_fail();
        if (iVar9 != 0) {
          func_0x0040cf10();
          FUN_0034b418(&plStack_2f0);
          FUN_0034b418(&plStack_2b0);
          FUN_0034b418(&plStack_240);
        }
        __Unwind_Resume();
        uVar1 = *(uint *)(plVar6[4] + 0xc);
        uVar8 = uVar1 - 0x1f;
        uVar14 = (ulong)uVar8;
        if (uVar1 < 0x1f) {
          uVar14 = 1;
        }
        else {
          FUN_0039d54c();
        }
        func_0x0038e884(plVar6,uVar14 & 0xffffffff);
        pbVar5 = (byte *)plVar6[2];
        *(ulong *)(plVar6[3] + 0x10) = *(long *)(plVar6[3] + 0x10) + (uVar14 & 0xffffffff);
        func_0x003ed000(pbVar5,uVar14 & 0xffffffff);
        iStack_16c = (int)uVar14 + -1;
        if (iStack_16c == 0) {
          *pbVar5 = (byte)uVar1 | 0x20;
          return;
        }
        pbVar11 = pbVar5 + 1;
        *pbVar5 = 0x3f;
      }
      else {
        pbVar11 = puVar4 + 1;
        *puVar4 = 0x7f;
        uVar8 = iStack_290 - 0x7f;
        iStack_16c = uStack_28c - 1;
      }
    }
    else {
      pbVar11 = pbVar5 + 1;
      *pbVar5 = bStack_180 | 0x7f;
      uVar8 = iStack_170 - 0x7f;
      iStack_16c = iStack_16c + -1;
    }
  }
  else {
    pbVar11 = pbVar5 + 1;
    *pbVar5 = bStack_c0 | 0x7f;
    uVar8 = iStack_b0 - 0x7f;
    iStack_16c = iStack_ac + -1;
  }
  uVar1 = iStack_16c - 1;
  switch((ulong)uVar1) {
  case 4:
    pbVar11[4] = (byte)(uVar8 >> 0x1c) | 0x80;
  case 3:
    pbVar11[3] = (byte)(uVar8 >> 0x15) | 0x80;
  case 2:
    pbVar11[2] = (byte)(uVar8 >> 0xe) | 0x80;
  case 1:
    pbVar11[1] = (byte)(uVar8 >> 7) | 0x80;
  case 0:
    *pbVar11 = (byte)uVar8 | 0x80;
  default:
    pbVar11[uVar1] = pbVar11[uVar1] & 0x7f;
    return;
  }
}



/* Entry: 0038f46c; end: 0038f6a3;  */

/* WARNING: Possible PIC construction at 0x0038f864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0038f5a4: Changing call to branch */

void FUN_0038f46c(long param_1,uint param_2,undefined8 *param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined1 *puVar5;
  long *plVar6;
  long *plVar7;
  byte *pbVar8;
  int iVar9;
  long **pplVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  int iStack_170;
  uint uStack_16c;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  int iStack_100;
  int iStack_fc;
  long lStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  byte *pbStack_e0;
  long *plStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  byte bStack_60;
  byte bStack_5f;
  int iStack_50;
  int iStack_4c;
  long lStack_48;
  
  pplVar10 = &plStack_c0;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_98 = param_3[1];
  plStack_a0 = (long *)*param_3;
  uStack_88 = param_3[3];
  uStack_90 = param_3[2];
  param_3[1] = 0;
  *param_3 = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  puVar12 = (undefined8 *)(ulong)*(byte *)(param_1 + 9);
  FUN_00391d40(&plStack_80,&plStack_a0);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_a0) {
    do {
      lVar13 = *plStack_a0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_a0,0x10);
      if (bVar3) {
        *plStack_a0 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 + -1 == 0) {
      (*(code *)plStack_a0[1])();
    }
  }
  uVar14 = (ulong)(param_2 - 0xf);
  if (param_2 < 0xf) {
    uVar15 = 1;
  }
  else {
    uVar15 = uVar14;
    FUN_0039d54c();
  }
  lVar13 = (ulong)(iStack_4c + (uint)bStack_5f) + (uVar15 & 0xffffffff);
  func_0x0038e884(param_1,lVar13);
  *(long *)(*(long *)(param_1 + 0x18) + 0x10) = *(long *)(*(long *)(param_1 + 0x18) + 0x10) + lVar13
  ;
  puVar5 = *(undefined1 **)(param_1 + 0x10);
  func_0x003ed000(puVar5,lVar13);
  if ((int)uVar15 == 1) {
    *puVar5 = (char)param_2;
  }
  else {
    *puVar5 = 0xf;
    puVar12 = (undefined8 *)(ulong)((int)uVar15 - 1);
    func_0x0039d584(uVar14,puVar5 + 1);
  }
  pbVar8 = puVar5 + (uVar15 & 0xffffffff);
  if (iStack_4c == 1) {
    *pbVar8 = bStack_60 | (byte)iStack_50;
    if (bStack_5f != 0) {
      pbVar8[1] = 0;
    }
    uStack_b8 = uStack_78;
    plStack_c0 = plStack_80;
    uStack_a8 = uStack_68;
    uStack_b0 = uStack_70;
    uStack_78 = 0;
    plStack_80 = (long *)0x0;
    uStack_68 = 0;
    uStack_70 = 0;
    FUN_0038e8d8(param_1);
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_c0) {
      do {
        lVar13 = *plStack_c0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_c0,0x10);
        if (bVar3) {
          *plStack_c0 = lVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar13 + -1 == 0) {
        (*(code *)plStack_c0[1])();
      }
    }
    plVar6 = plStack_80;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_80) {
      do {
        lVar13 = *plStack_80;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_80,0x10);
        if (bVar3) {
          *plStack_80 = lVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar13 + -1 == 0) {
        (*(code *)plStack_80[1])();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
      return;
    }
    ___stack_chk_fail();
    if ((int)pplVar10 != 0) {
      func_0x0040cf10();
      FUN_0034b418(&plStack_80);
    }
    plVar7 = plVar6;
    __Unwind_Resume();
    iVar9 = (int)&plStack_1d0;
    pcStack_c8 = FUN_0038f6a4;
    lStack_f8 = *(long *)PTR____stack_chk_guard_00999f88;
    uStack_138 = pplVar10[1];
    plStack_140 = *pplVar10;
    uStack_128 = pplVar10[3];
    uStack_130 = pplVar10[2];
    pplVar10[1] = (long *)0x0;
    *pplVar10 = (long *)0x0;
    pplVar10[3] = (long *)0x0;
    pplVar10[2] = (long *)0x0;
    uStack_f0 = uVar15 & 0xffffffff;
    uStack_e8 = uVar14;
    pbStack_e0 = pbVar8;
    plStack_d8 = plVar6;
    puStack_d0 = &stack0xfffffffffffffff0;
    FUN_00391bf0(&plStack_120,&plStack_140);
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_140) {
      do {
        lVar13 = *plStack_140;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_140,0x10);
        if (bVar3) {
          *plStack_140 = lVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar13 + -1 == 0) {
        (*(code *)plStack_140[1])();
      }
    }
    uVar14 = (ulong)(iStack_fc + 1);
    func_0x0038e884(plVar7,uVar14);
    *(ulong *)(plVar7[3] + 0x10) = *(long *)(plVar7[3] + 0x10) + uVar14;
    puVar5 = (undefined1 *)plVar7[2];
    func_0x003ed000(puVar5,uVar14);
    *puVar5 = 0;
    if (iStack_fc == 1) {
      puVar5[1] = (char)iStack_100;
    }
    else {
      puVar5[1] = 0x7f;
      func_0x0039d584(iStack_100 + -0x7f,puVar5 + 2,iStack_fc + -1);
    }
    uStack_158 = uStack_118;
    plStack_160 = plStack_120;
    uStack_148 = uStack_108;
    uStack_150 = uStack_110;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    FUN_0038e8d8(plVar7,&plStack_160);
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_160) {
      do {
        lVar13 = *plStack_160;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_160,0x10);
        if (bVar3) {
          *plStack_160 = lVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar13 + -1 == 0) {
        (*(code *)plStack_160[1])();
      }
    }
    uStack_1a8 = puVar12[1];
    plStack_1b0 = (long *)*puVar12;
    uStack_198 = puVar12[3];
    uStack_1a0 = puVar12[2];
    puVar12[1] = 0;
    *puVar12 = 0;
    puVar12[3] = 0;
    puVar12[2] = 0;
    FUN_00391c98(&plStack_190,&plStack_1b0);
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_1b0) {
      do {
        lVar13 = *plStack_1b0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_1b0,0x10);
        if (bVar3) {
          *plStack_1b0 = lVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar13 + -1 == 0) {
        (*(code *)plStack_1b0[1])();
      }
    }
    uVar14 = (ulong)uStack_16c;
    func_0x0038e884(plVar7,uVar14);
    *(ulong *)(plVar7[3] + 0x10) = *(long *)(plVar7[3] + 0x10) + uVar14;
    puVar5 = (undefined1 *)plVar7[2];
    func_0x003ed000(puVar5,uVar14);
    if (uStack_16c == 1) {
      *puVar5 = (char)iStack_170;
      uStack_1c8 = uStack_188;
      plStack_1d0 = plStack_190;
      uStack_1b8 = uStack_178;
      uStack_1c0 = uStack_180;
      uStack_188 = 0;
      plStack_190 = (long *)0x0;
      uStack_178 = 0;
      uStack_180 = 0;
      FUN_0038e8d8(plVar7);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_1d0) {
        do {
          lVar13 = *plStack_1d0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_1d0,0x10);
          if (bVar3) {
            *plStack_1d0 = lVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar13 + -1 == 0) {
          (*(code *)plStack_1d0[1])();
        }
      }
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_190) {
        do {
          lVar13 = *plStack_190;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_190,0x10);
          if (bVar3) {
            *plStack_190 = lVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar13 + -1 == 0) {
          (*(code *)plStack_190[1])();
        }
      }
      plVar6 = plStack_120;
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_120) {
        do {
          lVar13 = *plStack_120;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_120,0x10);
          if (bVar3) {
            *plStack_120 = lVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar13 + -1 == 0) {
          (*(code *)plStack_120[1])();
        }
      }
      if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_f8) {
        return;
      }
      ___stack_chk_fail();
      if (iVar9 != 0) {
        func_0x0040cf10();
        FUN_0034b418(&plStack_1d0);
        FUN_0034b418(&plStack_190);
        FUN_0034b418(&plStack_120);
      }
      __Unwind_Resume();
      uVar1 = *(uint *)(plVar6[4] + 0xc);
      uVar4 = uVar1 - 0x1f;
      uVar14 = (ulong)uVar4;
      if (uVar1 < 0x1f) {
        uVar14 = 1;
      }
      else {
        FUN_0039d54c();
      }
      func_0x0038e884(plVar6,uVar14 & 0xffffffff);
      pbVar8 = (byte *)plVar6[2];
      *(ulong *)(plVar6[3] + 0x10) = *(long *)(plVar6[3] + 0x10) + (uVar14 & 0xffffffff);
      func_0x003ed000(pbVar8,uVar14 & 0xffffffff);
      iStack_4c = (int)uVar14 + -1;
      if (iStack_4c == 0) {
        *pbVar8 = (byte)uVar1 | 0x20;
        return;
      }
      pbVar11 = pbVar8 + 1;
      *pbVar8 = 0x3f;
    }
    else {
      pbVar11 = puVar5 + 1;
      *puVar5 = 0x7f;
      uVar4 = iStack_170 - 0x7f;
      iStack_4c = uStack_16c - 1;
    }
  }
  else {
    pbVar11 = pbVar8 + 1;
    *pbVar8 = bStack_60 | 0x7f;
    uVar4 = iStack_50 - 0x7f;
    iStack_4c = iStack_4c + -1;
  }
  uVar1 = iStack_4c - 1;
  switch((ulong)uVar1) {
  case 4:
    pbVar11[4] = (byte)(uVar4 >> 0x1c) | 0x80;
  case 3:
    pbVar11[3] = (byte)(uVar4 >> 0x15) | 0x80;
  case 2:
    pbVar11[2] = (byte)(uVar4 >> 0xe) | 0x80;
  case 1:
    pbVar11[1] = (byte)(uVar4 >> 7) | 0x80;
  case 0:
    *pbVar11 = (byte)uVar4 | 0x80;
  default:
    pbVar11[uVar1] = pbVar11[uVar1] & 0x7f;
    return;
  }
}



/* Entry: 0038f6a4; end: 0038f9a7;  */

/* WARNING: Possible PIC construction at 0x0038f864: Changing call to branch */

void FUN_0038f6a4(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  long *plVar7;
  byte *pbVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  int iStack_b0;
  uint uStack_ac;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  int iStack_40;
  int iStack_3c;
  long lStack_38;
  
  iVar9 = (int)&plStack_110;
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_78 = param_2[1];
  plStack_80 = (long *)*param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  FUN_00391bf0(&plStack_60,&plStack_80);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_80) {
    do {
      lVar10 = *plStack_80;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_80,0x10);
      if (bVar3) {
        *plStack_80 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)plStack_80[1])();
    }
  }
  uVar11 = (ulong)(iStack_3c + 1);
  func_0x0038e884(param_1,uVar11);
  *(ulong *)(*(long *)(param_1 + 0x18) + 0x10) =
       *(long *)(*(long *)(param_1 + 0x18) + 0x10) + uVar11;
  puVar5 = *(undefined1 **)(param_1 + 0x10);
  func_0x003ed000(puVar5,uVar11);
  *puVar5 = 0;
  if (iStack_3c == 1) {
    puVar5[1] = (char)iStack_40;
  }
  else {
    puVar5[1] = 0x7f;
    func_0x0039d584(iStack_40 + -0x7f,puVar5 + 2,iStack_3c + -1);
  }
  uStack_98 = uStack_58;
  plStack_a0 = plStack_60;
  uStack_88 = uStack_48;
  uStack_90 = uStack_50;
  uStack_58 = 0;
  plStack_60 = (long *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  FUN_0038e8d8(param_1,&plStack_a0);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_a0) {
    do {
      lVar10 = *plStack_a0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_a0,0x10);
      if (bVar3) {
        *plStack_a0 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)plStack_a0[1])();
    }
  }
  uStack_e8 = param_3[1];
  plStack_f0 = (long *)*param_3;
  uStack_d8 = param_3[3];
  uStack_e0 = param_3[2];
  param_3[1] = 0;
  *param_3 = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  FUN_00391c98(&plStack_d0,&plStack_f0);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_f0) {
    do {
      lVar10 = *plStack_f0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_f0,0x10);
      if (bVar3) {
        *plStack_f0 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)plStack_f0[1])();
    }
  }
  uVar11 = (ulong)uStack_ac;
  func_0x0038e884(param_1,uVar11);
  *(ulong *)(*(long *)(param_1 + 0x18) + 0x10) =
       *(long *)(*(long *)(param_1 + 0x18) + 0x10) + uVar11;
  pbVar6 = *(byte **)(param_1 + 0x10);
  func_0x003ed000(pbVar6,uVar11);
  if (uStack_ac == 1) {
    *pbVar6 = (byte)iStack_b0;
    uStack_108 = uStack_c8;
    plStack_110 = plStack_d0;
    uStack_f8 = uStack_b8;
    uStack_100 = uStack_c0;
    uStack_c8 = 0;
    plStack_d0 = (long *)0x0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    FUN_0038e8d8(param_1);
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_110) {
      do {
        lVar10 = *plStack_110;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_110,0x10);
        if (bVar3) {
          *plStack_110 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (*(code *)plStack_110[1])();
      }
    }
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_d0) {
      do {
        lVar10 = *plStack_d0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_d0,0x10);
        if (bVar3) {
          *plStack_d0 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (*(code *)plStack_d0[1])();
      }
    }
    plVar7 = plStack_60;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_60) {
      do {
        lVar10 = *plStack_60;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_60,0x10);
        if (bVar3) {
          *plStack_60 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (*(code *)plStack_60[1])();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
      return;
    }
    ___stack_chk_fail();
    if (iVar9 != 0) {
      func_0x0040cf10();
      FUN_0034b418(&plStack_110);
      FUN_0034b418(&plStack_d0);
      FUN_0034b418(&plStack_60);
    }
    __Unwind_Resume();
    uVar1 = *(uint *)(plVar7[4] + 0xc);
    uVar4 = uVar1 - 0x1f;
    uVar11 = (ulong)uVar4;
    if (uVar1 < 0x1f) {
      uVar11 = 1;
    }
    else {
      FUN_0039d54c();
    }
    func_0x0038e884(plVar7,uVar11 & 0xffffffff);
    pbVar6 = (byte *)plVar7[2];
    *(ulong *)(plVar7[3] + 0x10) = *(long *)(plVar7[3] + 0x10) + (uVar11 & 0xffffffff);
    func_0x003ed000(pbVar6,uVar11 & 0xffffffff);
    iVar9 = (int)uVar11 + -1;
    if (iVar9 == 0) {
      *pbVar6 = (byte)uVar1 | 0x20;
      return;
    }
    *pbVar6 = 0x3f;
  }
  else {
    *pbVar6 = 0x7f;
    uVar4 = iStack_b0 - 0x7f;
    iVar9 = uStack_ac - 1;
  }
  pbVar8 = pbVar6 + 1;
  uVar1 = iVar9 - 1;
  switch((ulong)uVar1) {
  case 4:
    pbVar6[5] = (byte)(uVar4 >> 0x1c) | 0x80;
  case 3:
    pbVar6[4] = (byte)(uVar4 >> 0x15) | 0x80;
  case 2:
    pbVar6[3] = (byte)(uVar4 >> 0xe) | 0x80;
  case 1:
    pbVar6[2] = (byte)(uVar4 >> 7) | 0x80;
  case 0:
    *pbVar8 = (byte)uVar4 | 0x80;
  default:
    pbVar8[uVar1] = pbVar8[uVar1] & 0x7f;
    return;
  }
}



/* Entry: 0038f9a8; end: 0038fa53;  */

void FUN_0038f9a8(long param_1)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(*(long *)(param_1 + 0x20) + 0xc);
  uVar2 = uVar1 - 0x1f;
  uVar5 = (ulong)uVar2;
  if (uVar1 < 0x1f) {
    uVar5 = 1;
  }
  else {
    FUN_0039d54c();
  }
  func_0x0038e884(param_1,uVar5 & 0xffffffff);
  pbVar3 = *(byte **)(param_1 + 0x10);
  *(ulong *)(*(long *)(param_1 + 0x18) + 0x10) =
       *(long *)(*(long *)(param_1 + 0x18) + 0x10) + (uVar5 & 0xffffffff);
  func_0x003ed000(pbVar3,uVar5 & 0xffffffff);
  if ((int)uVar5 != 1) {
    pbVar4 = pbVar3 + 1;
    *pbVar3 = 0x3f;
    uVar1 = (int)uVar5 - 2;
    switch((ulong)uVar1) {
    case 4:
      pbVar3[5] = (byte)(uVar2 >> 0x1c) | 0x80;
    case 3:
      pbVar3[4] = (byte)(uVar2 >> 0x15) | 0x80;
    case 2:
      pbVar3[3] = (byte)(uVar2 >> 0xe) | 0x80;
    case 1:
      pbVar3[2] = (byte)(uVar2 >> 7) | 0x80;
    case 0:
      *pbVar4 = (byte)uVar2 | 0x80;
    default:
      pbVar4[uVar1] = pbVar4[uVar1] & 0x7f;
      return;
    }
  }
  *pbVar3 = (byte)uVar1 | 0x20;
  return;
}



/* Entry: 0038fa54; end: 0038fed3;  */

ulong * FUN_0038fa54(undefined8 *param_1,char *param_2,ulong *param_3,undefined8 *param_4,
                    ulong *param_5)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong *puVar5;
  undefined1 *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  char *pcVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  ulong *puVar17;
  long lVar18;
  ulong uVar19;
  ulong *unaff_x19;
  ulong *unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  ulong *unaff_x23;
  char *unaff_x24;
  ulong *unaff_x25;
  ulong unaff_x26;
  ulong *unaff_x27;
  ulong unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  ulong uVar24;
  ulong uVar25;
  
  do {
    puVar12 = param_3;
    pcVar9 = param_2;
    *(ulong *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(ulong **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(ulong **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(char **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x70) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    plVar14 = (long *)*param_4;
    uVar1 = *(uint *)(param_4 + 1) & 0xff;
    if (plVar14 != (long *)0x0) {
      uVar1 = *(uint *)(param_4 + 1);
    }
    uVar1 = (int)puVar12 + uVar1 + 0x20;
    unaff_x26 = (ulong)uVar1;
    if (uVar1 < 0x10000) {
      unaff_x28 = param_5[4];
      unaff_x21 = (ulong *)(unaff_x28 + 8);
      unaff_x27 = (ulong *)*param_1;
      unaff_x23 = (ulong *)param_1[1];
      if (unaff_x27 == unaff_x23) {
LAB_0038fbe4:
        puVar13 = unaff_x21;
        FUN_00392064(unaff_x21,unaff_x26);
        *(int *)((long)register0x00000008 + -0xb0) = (int)puVar13;
        *(undefined8 *)((long)register0x00000008 + -0x150) = 1;
        *(ulong **)((long)register0x00000008 + -0x148) = puVar12;
        *(char **)((long)register0x00000008 + -0x140) = pcVar9;
        plVar14 = (long *)*param_4;
        if ((long *)((long)&MACH_HEADER.magic + 1) < plVar14) {
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar3) {
              *plVar14 = *plVar14 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        uVar20 = *param_4;
        uVar23 = param_4[3];
        uVar22 = param_4[2];
        *(undefined8 *)((long)register0x00000008 + -0x168) = param_4[1];
        *(undefined8 *)((long)register0x00000008 + -0x170) = uVar20;
        *(undefined8 *)((long)register0x00000008 + -0x158) = uVar23;
        *(undefined8 *)((long)register0x00000008 + -0x160) = uVar22;
        FUN_0038eb08(param_5,(undefined1 *)((long)register0x00000008 + -0x150),
                     (undefined1 *)((long)register0x00000008 + -0x170));
        plVar14 = *(long **)((long)register0x00000008 + -0x170);
        if ((long *)((long)&MACH_HEADER.magic + 1) < plVar14) {
          do {
            lVar15 = *plVar14;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar3) {
              *plVar14 = lVar15 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar15 + -1 == 0) {
            (*(code *)plVar14[1])();
          }
        }
        plVar14 = *(long **)((long)register0x00000008 + -0x150);
        if ((long *)((long)&MACH_HEADER.magic + 1) < plVar14) {
          do {
            lVar15 = *plVar14;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar3) {
              *plVar14 = lVar15 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar15 + -1 == 0) {
            (*(code *)plVar14[1])();
          }
        }
        plVar14 = (long *)*param_4;
        if ((long *)((long)&MACH_HEADER.magic + 1) < plVar14) {
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar3) {
              *plVar14 = *plVar14 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        uVar20 = *param_4;
        uVar23 = param_4[3];
        uVar22 = param_4[2];
        *(undefined8 *)((long)register0x00000008 + -0x88) = param_4[1];
        *(undefined8 *)((long)register0x00000008 + -0x90) = uVar20;
        *(undefined8 *)((long)register0x00000008 + -0x78) = uVar23;
        *(undefined8 *)((long)register0x00000008 + -0x80) = uVar22;
        puVar10 = (ulong *)((long)register0x00000008 + -0x90);
        puVar13 = (ulong *)((long)register0x00000008 + -0xb0);
        FUN_0038fed4(param_1);
        puVar5 = *(ulong **)((long)register0x00000008 + -0x90);
        if ((ulong *)((long)&MACH_HEADER.magic + 1) < puVar5) {
          do {
            uVar16 = *puVar5;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
            if (bVar3) {
              *puVar5 = uVar16 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar16 - 1 == 0) {
            (*(code *)puVar5[1])();
          }
        }
      }
      else {
        uVar20 = *param_4;
        uVar23 = param_4[3];
        uVar22 = param_4[2];
        *(undefined8 *)((long)register0x00000008 + -0x88) = param_4[1];
        *(undefined8 *)((long)register0x00000008 + -0x90) = uVar20;
        *(undefined8 *)((long)register0x00000008 + -0x78) = uVar23;
        *(undefined8 *)((long)register0x00000008 + -0x80) = uVar22;
        uVar21 = *unaff_x27;
        uVar19 = unaff_x27[3];
        uVar16 = unaff_x27[2];
        *(ulong *)((long)register0x00000008 + -0xa8) = unaff_x27[1];
        *(ulong *)((long)register0x00000008 + -0xb0) = uVar21;
        *(ulong *)((long)register0x00000008 + -0x98) = uVar19;
        *(ulong *)((long)register0x00000008 + -0xa0) = uVar16;
        puVar6 = (undefined1 *)((long)register0x00000008 + -0x90);
        puVar13 = puVar12;
        FUN_003ec788(puVar6,(undefined1 *)((long)register0x00000008 + -0xb0));
        iVar4 = (int)puVar6;
        puVar11 = unaff_x23;
        while (puVar7 = unaff_x27, iVar4 == 0) {
          unaff_x27 = puVar7 + 5;
          if (unaff_x27 == (ulong *)param_1[1]) goto LAB_0038fbe4;
          uVar20 = *param_4;
          uVar23 = param_4[3];
          uVar22 = param_4[2];
          *(undefined8 *)((long)register0x00000008 + -0x88) = param_4[1];
          *(undefined8 *)((long)register0x00000008 + -0x90) = uVar20;
          *(undefined8 *)((long)register0x00000008 + -0x78) = uVar23;
          *(undefined8 *)((long)register0x00000008 + -0x80) = uVar22;
          uVar21 = *unaff_x27;
          uVar19 = puVar7[8];
          uVar16 = puVar7[7];
          *(ulong *)((long)register0x00000008 + -0xa8) = puVar7[6];
          *(ulong *)((long)register0x00000008 + -0xb0) = uVar21;
          *(ulong *)((long)register0x00000008 + -0x98) = uVar19;
          *(ulong *)((long)register0x00000008 + -0xa0) = uVar16;
          puVar6 = (undefined1 *)((long)register0x00000008 + -0x90);
          FUN_003ec788(puVar6,(undefined1 *)((long)register0x00000008 + -0xb0));
          puVar11 = puVar7;
          iVar4 = (int)puVar6;
        }
        if (*(uint *)unaff_x21 < (uint)puVar7[4]) {
          puVar10 = (ulong *)(ulong)((*(uint *)unaff_x21 - (uint)puVar7[4]) +
                                     *(int *)(unaff_x28 + 0x10) + 0x3e);
          puVar5 = param_5;
          FUN_0038ea60();
        }
        else {
          puVar13 = unaff_x21;
          FUN_00392064(unaff_x21,unaff_x26);
          *(int *)(puVar7 + 4) = (int)puVar13;
          *(undefined8 *)((long)register0x00000008 + -0x110) = 1;
          *(ulong **)((long)register0x00000008 + -0x108) = puVar12;
          *(char **)((long)register0x00000008 + -0x100) = pcVar9;
          plVar14 = (long *)*param_4;
          if ((long *)((long)&MACH_HEADER.magic + 1) < plVar14) {
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar3) {
                *plVar14 = *plVar14 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          uVar20 = *param_4;
          uVar23 = param_4[3];
          uVar22 = param_4[2];
          *(undefined8 *)((long)register0x00000008 + -0x128) = param_4[1];
          *(undefined8 *)((long)register0x00000008 + -0x130) = uVar20;
          *(undefined8 *)((long)register0x00000008 + -0x118) = uVar23;
          *(undefined8 *)((long)register0x00000008 + -0x120) = uVar22;
          puVar10 = (ulong *)((long)register0x00000008 + -0x110);
          puVar13 = (ulong *)((long)register0x00000008 + -0x130);
          FUN_0038eb08(param_5);
          plVar14 = *(long **)((long)register0x00000008 + -0x130);
          if ((long *)((long)&MACH_HEADER.magic + 1) < plVar14) {
            do {
              lVar15 = *plVar14;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar3) {
                *plVar14 = lVar15 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar15 + -1 == 0) {
              (*(code *)plVar14[1])();
            }
          }
          puVar5 = *(ulong **)((long)register0x00000008 + -0x110);
          if ((ulong *)((long)&MACH_HEADER.magic + 1) < puVar5) {
            do {
              uVar16 = *puVar5;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
              if (bVar3) {
                *puVar5 = uVar16 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar16 - 1 == 0) {
              (*(code *)puVar5[1])();
            }
          }
        }
        unaff_x23 = puVar11;
        if (puVar11 != (ulong *)param_1[1]) {
          uVar19 = *puVar11;
          uVar16 = puVar11[3];
          uVar21 = puVar11[1];
          *(ulong *)((long)register0x00000008 + -0x88) = puVar11[2];
          *(ulong *)((long)register0x00000008 + -0x90) = uVar21;
          *(ulong *)((long)register0x00000008 + -0x80) = uVar16;
          puVar11[1] = 0;
          *puVar11 = 0;
          puVar11[3] = 0;
          puVar11[2] = 0;
          uVar16 = puVar11[4];
          uVar25 = *puVar7;
          uVar24 = puVar7[3];
          uVar21 = puVar7[2];
          puVar11[1] = puVar7[1];
          *puVar11 = uVar25;
          puVar11[3] = uVar24;
          puVar11[2] = uVar21;
          puVar7[1] = 0;
          *puVar7 = 0;
          puVar7[3] = 0;
          puVar7[2] = 0;
          *(int *)(puVar11 + 4) = (int)puVar7[4];
          *puVar7 = uVar19;
          uVar21 = *(ulong *)((long)register0x00000008 + -0x88);
          uVar19 = *(ulong *)((long)register0x00000008 + -0x90);
          puVar7[3] = *(ulong *)((long)register0x00000008 + -0x80);
          puVar7[2] = uVar21;
          puVar7[1] = uVar19;
          *(int *)(puVar7 + 4) = (int)uVar16;
          unaff_x23 = (ulong *)param_1[1];
        }
        unaff_x27 = puVar7;
        if ((ulong *)*param_1 != unaff_x23) {
          do {
            if (*(uint *)unaff_x21 < (uint)unaff_x23[-1]) break;
            unaff_x23 = unaff_x23 + -5;
            puVar5 = unaff_x23;
            FUN_0034b418();
            param_1[1] = unaff_x23;
          } while (unaff_x23 != (ulong *)*param_1);
        }
      }
    }
    else {
      *(undefined8 *)((long)register0x00000008 + -0xd0) = 1;
      *(ulong **)((long)register0x00000008 + -200) = puVar12;
      *(char **)((long)register0x00000008 + -0xc0) = pcVar9;
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar14) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar3) {
            *plVar14 = *plVar14 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uVar20 = *param_4;
      uVar23 = param_4[3];
      uVar22 = param_4[2];
      *(undefined8 *)((long)register0x00000008 + -0xe8) = param_4[1];
      *(undefined8 *)((long)register0x00000008 + -0xf0) = uVar20;
      *(undefined8 *)((long)register0x00000008 + -0xd8) = uVar23;
      *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar22;
      puVar10 = (ulong *)((long)register0x00000008 + -0xd0);
      puVar13 = (ulong *)((long)register0x00000008 + -0xf0);
      FUN_0038f6a4(param_5);
      plVar14 = *(long **)((long)register0x00000008 + -0xf0);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar14) {
        do {
          lVar15 = *plVar14;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar3) {
            *plVar14 = lVar15 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar15 + -1 == 0) {
          (*(code *)plVar14[1])();
        }
      }
      puVar5 = *(ulong **)((long)register0x00000008 + -0xd0);
      if ((ulong *)((long)&MACH_HEADER.magic + 1) < puVar5) {
        do {
          uVar16 = *puVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
          if (bVar3) {
            *puVar5 = uVar16 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar16 - 1 == 0) {
          (*(code *)puVar5[1])();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x70)) {
      return puVar5;
    }
    ___stack_chk_fail();
    if ((int)puVar10 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x130));
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x110));
    }
    puVar7 = puVar5;
    __Unwind_Resume();
    *(ulong **)((long)register0x00000008 + -0x1a0) = param_5;
    *(ulong **)((long)register0x00000008 + -0x198) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -400) = param_4;
    *(ulong **)((long)register0x00000008 + -0x188) = puVar5;
    *(undefined1 **)((long)register0x00000008 + -0x180) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x178) = FUN_0038fed4;
    *(undefined8 *)((long)register0x00000008 + -0x1a8) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    puVar8 = puVar7 + 2;
    puVar17 = (ulong *)puVar7[1];
    puVar11 = puVar10;
    puVar5 = puVar13;
    if (puVar17 < (ulong *)*puVar8) {
      uVar21 = puVar10[1];
      uVar19 = *puVar10;
      uVar25 = puVar10[3];
      uVar24 = puVar10[2];
      puVar10[1] = 0;
      *puVar10 = 0;
      puVar10[3] = 0;
      puVar10[2] = 0;
      uVar16 = *puVar13;
      puVar17[1] = uVar21;
      *puVar17 = uVar19;
      puVar17[3] = uVar25;
      puVar17[2] = uVar24;
      *(int *)(puVar17 + 4) = (int)uVar16;
      unaff_x20 = puVar17 + 5;
      puVar7[1] = (ulong)unaff_x20;
      unaff_x22 = param_5;
LAB_0038ffe0:
      puVar7[1] = (ulong)unaff_x20;
      if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x1a8))
      {
        return unaff_x20 + -5;
      }
      ___stack_chk_fail();
      puVar13 = puVar5;
    }
    else {
      lVar15 = (long)((long)puVar17 - *puVar7) >> 3;
      unaff_x22 = (ulong *)(lVar15 * -0x3333333333333333);
      uVar16 = (long)unaff_x22 + 1;
      unaff_x20 = puVar13;
      if (uVar16 < 0x666666666666667) {
        lVar18 = (long)((long)*puVar8 - *puVar7) >> 3;
        uVar19 = lVar18 * -0x6666666666666666;
        if (uVar19 < uVar16 || uVar19 - uVar16 == 0) {
          uVar19 = uVar16;
        }
        if (0x333333333333332 < (ulong)(lVar18 * -0x3333333333333333)) {
          uVar19 = 0x666666666666666;
        }
        *(ulong **)((long)register0x00000008 + -0x1f8) = puVar8;
        func_0x00391f84();
        puVar11 = puVar8 + lVar15;
        *(ulong **)((long)register0x00000008 + -0x218) = puVar8;
        *(ulong **)((long)register0x00000008 + -0x210) = puVar11;
        *(ulong **)((long)register0x00000008 + -0x200) = puVar8 + uVar19 * 5;
        uVar21 = puVar10[1];
        uVar19 = *puVar10;
        uVar25 = puVar10[3];
        uVar24 = puVar10[2];
        puVar10[1] = 0;
        *puVar10 = 0;
        puVar10[3] = 0;
        puVar10[2] = 0;
        uVar16 = *puVar13;
        puVar11[1] = uVar21;
        *puVar11 = uVar19;
        puVar11[3] = uVar25;
        puVar11[2] = uVar24;
        *(int *)(puVar11 + 4) = (int)uVar16;
        *(ulong **)((long)register0x00000008 + -0x208) = puVar11 + 5;
        puVar11 = (ulong *)((long)register0x00000008 + -0x218);
        func_0x00391ea0(puVar7);
        unaff_x20 = (ulong *)puVar7[1];
        func_0x00391fc8((undefined1 *)((long)register0x00000008 + -0x218));
        goto LAB_0038ffe0;
      }
    }
    func_0x00391f70();
    func_0x00391fc8((undefined1 *)((long)register0x00000008 + -0x218));
    __Unwind_Resume(puVar7);
    *(ulong **)((long)register0x00000008 + -0x240) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x238) = puVar7;
    *(undefined1 **)((long)register0x00000008 + -0x230) =
         (undefined1 *)((long)register0x00000008 + -0x180);
    *(code **)((long)register0x00000008 + -0x228) = FUN_00390034;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x230);
    *(undefined8 *)((long)register0x00000008 + -0x248) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    plVar14 = (long *)*puVar11;
    uVar16 = puVar11[1] & 0xff;
    if (plVar14 != (long *)0x0) {
      uVar16 = puVar11[1];
    }
    if (uVar16 < 4) {
LAB_00390094:
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar14) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar3) {
            *plVar14 = *plVar14 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uVar16 = *puVar11;
      uVar21 = puVar11[3];
      uVar19 = puVar11[2];
      *(ulong *)((long)register0x00000008 + -0x2a8) = puVar11[1];
      *(ulong *)((long)register0x00000008 + -0x2b0) = uVar16;
      *(ulong *)((long)register0x00000008 + -0x298) = uVar21;
      *(ulong *)((long)register0x00000008 + -0x2a0) = uVar19;
      plVar14 = (long *)*puVar13;
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar14) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar3) {
            *plVar14 = *plVar14 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uVar16 = *puVar13;
      uVar21 = puVar13[3];
      uVar19 = puVar13[2];
      *(ulong *)((long)register0x00000008 + -0x2c8) = puVar13[1];
      *(ulong *)((long)register0x00000008 + -0x2d0) = uVar16;
      *(ulong *)((long)register0x00000008 + -0x2b8) = uVar21;
      *(ulong *)((long)register0x00000008 + -0x2c0) = uVar19;
      param_4 = (undefined8 *)((long)register0x00000008 + -0x2b0);
      FUN_0038f6a4();
      plVar14 = *(long **)((long)register0x00000008 + -0x2d0);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar14) {
        do {
          lVar15 = *plVar14;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar3) {
            *plVar14 = lVar15 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar15 + -1 == 0) {
          (*(code *)plVar14[1])();
        }
      }
      unaff_x19 = *(ulong **)((long)register0x00000008 + -0x2b0);
      if ((ulong *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
        do {
          uVar16 = *unaff_x19;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
          if (bVar3) {
            *unaff_x19 = uVar16 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar16 - 1 == 0) {
          (*(code *)unaff_x19[1])();
        }
      }
    }
    else {
      uVar19 = (long)puVar11 + 9;
      if (plVar14 != (long *)0x0) {
        uVar19 = puVar11[2];
      }
      if (*(int *)(uVar16 + uVar19 + -4) != 0x6e69622d) goto LAB_00390094;
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar14) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar3) {
            *plVar14 = *plVar14 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uVar16 = *puVar11;
      uVar21 = puVar11[3];
      uVar19 = puVar11[2];
      *(ulong *)((long)register0x00000008 + -0x268) = puVar11[1];
      *(ulong *)((long)register0x00000008 + -0x270) = uVar16;
      *(ulong *)((long)register0x00000008 + -600) = uVar21;
      *(ulong *)((long)register0x00000008 + -0x260) = uVar19;
      plVar14 = (long *)*puVar13;
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar14) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar3) {
            *plVar14 = *plVar14 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uVar16 = *puVar13;
      uVar21 = puVar13[3];
      uVar19 = puVar13[2];
      *(ulong *)((long)register0x00000008 + -0x288) = puVar13[1];
      *(ulong *)((long)register0x00000008 + -0x290) = uVar16;
      *(ulong *)((long)register0x00000008 + -0x278) = uVar21;
      *(ulong *)((long)register0x00000008 + -0x280) = uVar19;
      param_4 = (undefined8 *)((long)register0x00000008 + -0x270);
      FUN_0038ee10();
      plVar14 = *(long **)((long)register0x00000008 + -0x290);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar14) {
        do {
          lVar15 = *plVar14;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar3) {
            *plVar14 = lVar15 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar15 + -1 == 0) {
          (*(code *)plVar14[1])();
        }
      }
      unaff_x19 = *(ulong **)((long)register0x00000008 + -0x270);
      if ((ulong *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
        do {
          uVar16 = *unaff_x19;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
          if (bVar3) {
            *unaff_x19 = uVar16 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar16 - 1 == 0) {
          (*(code *)unaff_x19[1])();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x248)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_4 != 0) {
      func_0x0040cf10();
      unaff_x20 = (ulong *)((long)register0x00000008 + -0x2b0);
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x2d0));
      FUN_0034b418(unaff_x20);
    }
    unaff_x30 = FUN_00390250;
    param_5 = unaff_x19;
    __Unwind_Resume();
    param_1 = (undefined8 *)(param_5[4] + 0x1a8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x2d0);
    param_2 = ":path";
    param_3 = (ulong *)((long)&MACH_HEADER.cputype + 1);
    unaff_x21 = puVar10;
    unaff_x24 = pcVar9;
    unaff_x25 = puVar12;
  } while( true );
}



/* Entry: 0038fed4; end: 00390033;  */

ulong * FUN_0038fed4(ulong *param_1,ulong *param_2,ulong *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined1 *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
  long lVar16;
  ulong *unaff_x19;
  undefined8 *unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  ulong *puVar17;
  ulong *unaff_x23;
  char *unaff_x24;
  undefined8 unaff_x25;
  ulong unaff_x26;
  ulong *unaff_x27;
  ulong unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  ulong uVar22;
  ulong uVar23;
  
  do {
    *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    puVar7 = param_1 + 2;
    puVar15 = (ulong *)param_1[1];
    puVar8 = param_2;
    puVar9 = param_3;
    if (puVar15 < (ulong *)*puVar7) {
      uVar10 = param_2[1];
      uVar14 = *param_2;
      uVar22 = param_2[3];
      uVar19 = param_2[2];
      param_2[1] = 0;
      *param_2 = 0;
      param_2[3] = 0;
      param_2[2] = 0;
      uVar13 = *param_3;
      puVar15[1] = uVar10;
      *puVar15 = uVar14;
      puVar15[3] = uVar22;
      puVar15[2] = uVar19;
      *(int *)(puVar15 + 4) = (int)uVar13;
      puVar15 = puVar15 + 5;
      param_1[1] = (ulong)puVar15;
      puVar17 = unaff_x22;
LAB_0038ffe0:
      param_1[1] = (ulong)puVar15;
      if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x38)) {
        return puVar15 + -5;
      }
      ___stack_chk_fail();
      param_3 = puVar9;
    }
    else {
      lVar12 = (long)((long)puVar15 - *param_1) >> 3;
      puVar17 = (ulong *)(lVar12 * -0x3333333333333333);
      uVar13 = (long)puVar17 + 1;
      puVar15 = param_3;
      if (uVar13 < 0x666666666666667) {
        lVar16 = (long)((long)*puVar7 - *param_1) >> 3;
        uVar14 = lVar16 * -0x6666666666666666;
        if (uVar14 < uVar13 || uVar14 - uVar13 == 0) {
          uVar14 = uVar13;
        }
        if (0x333333333333332 < (ulong)(lVar16 * -0x3333333333333333)) {
          uVar14 = 0x666666666666666;
        }
        *(ulong **)((long)register0x00000008 + -0x88) = puVar7;
        func_0x00391f84();
        puVar8 = puVar7 + lVar12;
        *(ulong **)((long)register0x00000008 + -0xa8) = puVar7;
        *(ulong **)((long)register0x00000008 + -0xa0) = puVar8;
        *(ulong **)((long)register0x00000008 + -0x90) = puVar7 + uVar14 * 5;
        uVar10 = param_2[1];
        uVar14 = *param_2;
        uVar22 = param_2[3];
        uVar19 = param_2[2];
        param_2[1] = 0;
        *param_2 = 0;
        param_2[3] = 0;
        param_2[2] = 0;
        uVar13 = *param_3;
        puVar8[1] = uVar10;
        *puVar8 = uVar14;
        puVar8[3] = uVar22;
        puVar8[2] = uVar19;
        *(int *)(puVar8 + 4) = (int)uVar13;
        *(ulong **)((long)register0x00000008 + -0x98) = puVar8 + 5;
        puVar8 = (ulong *)((long)register0x00000008 + -0xa8);
        func_0x00391ea0(param_1);
        puVar15 = (ulong *)param_1[1];
        func_0x00391fc8((undefined1 *)((long)register0x00000008 + -0xa8));
        goto LAB_0038ffe0;
      }
    }
    func_0x00391f70();
    func_0x00391fc8((undefined1 *)((long)register0x00000008 + -0xa8));
    __Unwind_Resume(param_1);
    *(ulong **)((long)register0x00000008 + -0xd0) = puVar15;
    *(ulong **)((long)register0x00000008 + -200) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0xc0) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0xb8) = FUN_00390034;
    *(undefined8 *)((long)register0x00000008 + -0xd8) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    plVar11 = (long *)*puVar8;
    uVar13 = puVar8[1] & 0xff;
    if (plVar11 != (long *)0x0) {
      uVar13 = puVar8[1];
    }
    if (uVar13 < 4) {
LAB_00390094:
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar11) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = *plVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uVar13 = *puVar8;
      uVar10 = puVar8[3];
      uVar14 = puVar8[2];
      *(ulong *)((long)register0x00000008 + -0x138) = puVar8[1];
      *(ulong *)((long)register0x00000008 + -0x140) = uVar13;
      *(ulong *)((long)register0x00000008 + -0x128) = uVar10;
      *(ulong *)((long)register0x00000008 + -0x130) = uVar14;
      plVar11 = (long *)*param_3;
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar11) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = *plVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uVar13 = *param_3;
      uVar10 = param_3[3];
      uVar14 = param_3[2];
      *(ulong *)((long)register0x00000008 + -0x158) = param_3[1];
      *(ulong *)((long)register0x00000008 + -0x160) = uVar13;
      *(ulong *)((long)register0x00000008 + -0x148) = uVar10;
      *(ulong *)((long)register0x00000008 + -0x150) = uVar14;
      unaff_x20 = (undefined8 *)((long)register0x00000008 + -0x140);
      FUN_0038f6a4();
      plVar11 = *(long **)((long)register0x00000008 + -0x160);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar11) {
        do {
          lVar12 = *plVar11;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = lVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar12 + -1 == 0) {
          (*(code *)plVar11[1])();
        }
      }
      puVar8 = *(ulong **)((long)register0x00000008 + -0x140);
      if ((ulong *)((long)&MACH_HEADER.magic + 1) < puVar8) {
        do {
          uVar13 = *puVar8;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar8,0x10);
          if (bVar4) {
            *puVar8 = uVar13 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar13 - 1 == 0) {
          (*(code *)puVar8[1])();
        }
      }
    }
    else {
      uVar14 = (long)puVar8 + 9;
      if (plVar11 != (long *)0x0) {
        uVar14 = puVar8[2];
      }
      if (*(int *)(uVar13 + uVar14 + -4) != 0x6e69622d) goto LAB_00390094;
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar11) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = *plVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uVar13 = *puVar8;
      uVar10 = puVar8[3];
      uVar14 = puVar8[2];
      *(ulong *)((long)register0x00000008 + -0xf8) = puVar8[1];
      *(ulong *)((long)register0x00000008 + -0x100) = uVar13;
      *(ulong *)((long)register0x00000008 + -0xe8) = uVar10;
      *(ulong *)((long)register0x00000008 + -0xf0) = uVar14;
      plVar11 = (long *)*param_3;
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar11) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = *plVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uVar13 = *param_3;
      uVar10 = param_3[3];
      uVar14 = param_3[2];
      *(ulong *)((long)register0x00000008 + -0x118) = param_3[1];
      *(ulong *)((long)register0x00000008 + -0x120) = uVar13;
      *(ulong *)((long)register0x00000008 + -0x108) = uVar10;
      *(ulong *)((long)register0x00000008 + -0x110) = uVar14;
      unaff_x20 = (undefined8 *)((long)register0x00000008 + -0x100);
      FUN_0038ee10();
      plVar11 = *(long **)((long)register0x00000008 + -0x120);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar11) {
        do {
          lVar12 = *plVar11;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = lVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar12 + -1 == 0) {
          (*(code *)plVar11[1])();
        }
      }
      puVar8 = *(ulong **)((long)register0x00000008 + -0x100);
      if ((ulong *)((long)&MACH_HEADER.magic + 1) < puVar8) {
        do {
          uVar13 = *puVar8;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar8,0x10);
          if (bVar4) {
            *puVar8 = uVar13 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar13 - 1 == 0) {
          (*(code *)puVar8[1])();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0xd8)) {
      return puVar8;
    }
    ___stack_chk_fail();
    if ((int)unaff_x20 != 0) {
      func_0x0040cf10();
      puVar15 = (ulong *)((long)register0x00000008 + -0x140);
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x160));
      FUN_0034b418(puVar15);
    }
    unaff_x22 = puVar8;
    __Unwind_Resume();
    uVar13 = unaff_x22[4];
    puVar1 = (undefined8 *)(uVar13 + 0x1a8);
    param_3 = (ulong *)((long)&MACH_HEADER.cputype + 1);
    *(ulong *)((long)register0x00000008 + -0x1c0) = unaff_x28;
    *(ulong **)((long)register0x00000008 + -0x1b8) = unaff_x27;
    *(ulong *)((long)register0x00000008 + -0x1b0) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x1a8) = unaff_x25;
    *(char **)((long)register0x00000008 + -0x1a0) = unaff_x24;
    *(ulong **)((long)register0x00000008 + -0x198) = unaff_x23;
    *(ulong **)((long)register0x00000008 + -400) = puVar17;
    *(ulong **)((long)register0x00000008 + -0x188) = param_2;
    *(ulong **)((long)register0x00000008 + -0x180) = puVar15;
    *(ulong **)((long)register0x00000008 + -0x178) = puVar8;
    *(undefined1 **)((long)register0x00000008 + -0x170) =
         (undefined1 *)((long)register0x00000008 + -0xc0);
    *(code **)((long)register0x00000008 + -0x168) = FUN_00390250;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x170);
    unaff_x25 = 5;
    *(undefined8 *)((long)register0x00000008 + -0x1d0) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    plVar11 = (long *)*unaff_x20;
    uVar2 = *(uint *)(unaff_x20 + 1) & 0xff;
    if (plVar11 != (long *)0x0) {
      uVar2 = *(uint *)(unaff_x20 + 1);
    }
    unaff_x26 = (ulong)(uVar2 + 0x25);
    if (uVar2 + 0x25 < 0x10000) {
      unaff_x28 = unaff_x22[4];
      unaff_x21 = (ulong *)(unaff_x28 + 8);
      unaff_x27 = (ulong *)*puVar1;
      unaff_x23 = *(ulong **)(uVar13 + 0x1b0);
      if (unaff_x27 == unaff_x23) {
LAB_0038fbe4:
        puVar8 = unaff_x21;
        FUN_00392064(unaff_x21,unaff_x26);
        *(int *)((long)register0x00000008 + -0x210) = (int)puVar8;
        *(undefined8 *)((long)register0x00000008 + -0x2b0) = 1;
        *(undefined8 *)((long)register0x00000008 + -0x2a8) = 5;
        *(char **)((long)register0x00000008 + -0x2a0) = ":path";
        plVar11 = (long *)*unaff_x20;
        if ((long *)((long)&MACH_HEADER.magic + 1) < plVar11) {
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *plVar11 = *plVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        uVar18 = *unaff_x20;
        uVar21 = unaff_x20[3];
        uVar20 = unaff_x20[2];
        *(undefined8 *)((long)register0x00000008 + -0x2c8) = unaff_x20[1];
        *(undefined8 *)((long)register0x00000008 + -0x2d0) = uVar18;
        *(undefined8 *)((long)register0x00000008 + -0x2b8) = uVar21;
        *(undefined8 *)((long)register0x00000008 + -0x2c0) = uVar20;
        FUN_0038eb08(unaff_x22,(undefined1 *)((long)register0x00000008 + -0x2b0),
                     (undefined1 *)((long)register0x00000008 + -0x2d0));
        plVar11 = *(long **)((long)register0x00000008 + -0x2d0);
        if ((long *)((long)&MACH_HEADER.magic + 1) < plVar11) {
          do {
            lVar12 = *plVar11;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *plVar11 = lVar12 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar12 + -1 == 0) {
            (*(code *)plVar11[1])();
          }
        }
        plVar11 = *(long **)((long)register0x00000008 + -0x2b0);
        if ((long *)((long)&MACH_HEADER.magic + 1) < plVar11) {
          do {
            lVar12 = *plVar11;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *plVar11 = lVar12 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar12 + -1 == 0) {
            (*(code *)plVar11[1])();
          }
        }
        plVar11 = (long *)*unaff_x20;
        if ((long *)((long)&MACH_HEADER.magic + 1) < plVar11) {
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *plVar11 = *plVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        uVar18 = *unaff_x20;
        uVar21 = unaff_x20[3];
        uVar20 = unaff_x20[2];
        *(undefined8 *)((long)register0x00000008 + -0x1e8) = unaff_x20[1];
        *(undefined8 *)((long)register0x00000008 + -0x1f0) = uVar18;
        *(undefined8 *)((long)register0x00000008 + -0x1d8) = uVar21;
        *(undefined8 *)((long)register0x00000008 + -0x1e0) = uVar20;
        puVar9 = (ulong *)((long)register0x00000008 + -0x1f0);
        param_3 = (ulong *)((long)register0x00000008 + -0x210);
        FUN_0038fed4(puVar1);
        unaff_x19 = *(ulong **)((long)register0x00000008 + -0x1f0);
        if ((ulong *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
          do {
            uVar13 = *unaff_x19;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
            if (bVar4) {
              *unaff_x19 = uVar13 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar13 - 1 == 0) {
            (*(code *)unaff_x19[1])();
          }
        }
      }
      else {
        uVar18 = *unaff_x20;
        uVar21 = unaff_x20[3];
        uVar20 = unaff_x20[2];
        *(undefined8 *)((long)register0x00000008 + -0x1e8) = unaff_x20[1];
        *(undefined8 *)((long)register0x00000008 + -0x1f0) = uVar18;
        *(undefined8 *)((long)register0x00000008 + -0x1d8) = uVar21;
        *(undefined8 *)((long)register0x00000008 + -0x1e0) = uVar20;
        uVar19 = *unaff_x27;
        uVar10 = unaff_x27[3];
        uVar14 = unaff_x27[2];
        *(ulong *)((long)register0x00000008 + -0x208) = unaff_x27[1];
        *(ulong *)((long)register0x00000008 + -0x210) = uVar19;
        *(ulong *)((long)register0x00000008 + -0x1f8) = uVar10;
        *(ulong *)((long)register0x00000008 + -0x200) = uVar14;
        puVar6 = (undefined1 *)((long)register0x00000008 + -0x1f0);
        FUN_003ec788(puVar6,(undefined1 *)((long)register0x00000008 + -0x210));
        iVar5 = (int)puVar6;
        puVar8 = unaff_x23;
        while (puVar15 = unaff_x27, iVar5 == 0) {
          unaff_x27 = puVar15 + 5;
          if (unaff_x27 == *(ulong **)(uVar13 + 0x1b0)) goto LAB_0038fbe4;
          uVar18 = *unaff_x20;
          uVar21 = unaff_x20[3];
          uVar20 = unaff_x20[2];
          *(undefined8 *)((long)register0x00000008 + -0x1e8) = unaff_x20[1];
          *(undefined8 *)((long)register0x00000008 + -0x1f0) = uVar18;
          *(undefined8 *)((long)register0x00000008 + -0x1d8) = uVar21;
          *(undefined8 *)((long)register0x00000008 + -0x1e0) = uVar20;
          uVar19 = *unaff_x27;
          uVar10 = puVar15[8];
          uVar14 = puVar15[7];
          *(ulong *)((long)register0x00000008 + -0x208) = puVar15[6];
          *(ulong *)((long)register0x00000008 + -0x210) = uVar19;
          *(ulong *)((long)register0x00000008 + -0x1f8) = uVar10;
          *(ulong *)((long)register0x00000008 + -0x200) = uVar14;
          puVar6 = (undefined1 *)((long)register0x00000008 + -0x1f0);
          FUN_003ec788(puVar6,(undefined1 *)((long)register0x00000008 + -0x210));
          puVar8 = puVar15;
          iVar5 = (int)puVar6;
        }
        if (*(uint *)unaff_x21 < (uint)puVar15[4]) {
          puVar9 = (ulong *)(ulong)((*(uint *)unaff_x21 - (uint)puVar15[4]) +
                                    *(int *)(unaff_x28 + 0x10) + 0x3e);
          unaff_x19 = unaff_x22;
          FUN_0038ea60();
        }
        else {
          puVar9 = unaff_x21;
          FUN_00392064(unaff_x21,unaff_x26);
          *(int *)(puVar15 + 4) = (int)puVar9;
          *(undefined8 *)((long)register0x00000008 + -0x270) = 1;
          *(undefined8 *)((long)register0x00000008 + -0x268) = 5;
          *(char **)((long)register0x00000008 + -0x260) = ":path";
          plVar11 = (long *)*unaff_x20;
          if ((long *)((long)&MACH_HEADER.magic + 1) < plVar11) {
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar4) {
                *plVar11 = *plVar11 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          uVar18 = *unaff_x20;
          uVar21 = unaff_x20[3];
          uVar20 = unaff_x20[2];
          *(undefined8 *)((long)register0x00000008 + -0x288) = unaff_x20[1];
          *(undefined8 *)((long)register0x00000008 + -0x290) = uVar18;
          *(undefined8 *)((long)register0x00000008 + -0x278) = uVar21;
          *(undefined8 *)((long)register0x00000008 + -0x280) = uVar20;
          puVar9 = (ulong *)((long)register0x00000008 + -0x270);
          param_3 = (ulong *)((long)register0x00000008 + -0x290);
          FUN_0038eb08(unaff_x22);
          plVar11 = *(long **)((long)register0x00000008 + -0x290);
          if ((long *)((long)&MACH_HEADER.magic + 1) < plVar11) {
            do {
              lVar12 = *plVar11;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar4) {
                *plVar11 = lVar12 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar12 + -1 == 0) {
              (*(code *)plVar11[1])();
            }
          }
          unaff_x19 = *(ulong **)((long)register0x00000008 + -0x270);
          if ((ulong *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
            do {
              uVar14 = *unaff_x19;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
              if (bVar4) {
                *unaff_x19 = uVar14 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar14 - 1 == 0) {
              (*(code *)unaff_x19[1])();
            }
          }
        }
        unaff_x23 = puVar8;
        if (puVar8 != *(ulong **)(uVar13 + 0x1b0)) {
          uVar10 = *puVar8;
          uVar14 = puVar8[3];
          uVar19 = puVar8[1];
          *(ulong *)((long)register0x00000008 + -0x1e8) = puVar8[2];
          *(ulong *)((long)register0x00000008 + -0x1f0) = uVar19;
          *(ulong *)((long)register0x00000008 + -0x1e0) = uVar14;
          puVar8[1] = 0;
          *puVar8 = 0;
          puVar8[3] = 0;
          puVar8[2] = 0;
          uVar14 = puVar8[4];
          uVar23 = *puVar15;
          uVar22 = puVar15[3];
          uVar19 = puVar15[2];
          puVar8[1] = puVar15[1];
          *puVar8 = uVar23;
          puVar8[3] = uVar22;
          puVar8[2] = uVar19;
          puVar15[1] = 0;
          *puVar15 = 0;
          puVar15[3] = 0;
          puVar15[2] = 0;
          *(int *)(puVar8 + 4) = (int)puVar15[4];
          *puVar15 = uVar10;
          uVar19 = *(ulong *)((long)register0x00000008 + -0x1e8);
          uVar10 = *(ulong *)((long)register0x00000008 + -0x1f0);
          puVar15[3] = *(ulong *)((long)register0x00000008 + -0x1e0);
          puVar15[2] = uVar19;
          puVar15[1] = uVar10;
          *(int *)(puVar15 + 4) = (int)uVar14;
          unaff_x23 = *(ulong **)(uVar13 + 0x1b0);
        }
        unaff_x27 = puVar15;
        if ((ulong *)*puVar1 != unaff_x23) {
          do {
            if (*(uint *)unaff_x21 < (uint)unaff_x23[-1]) break;
            unaff_x23 = unaff_x23 + -5;
            unaff_x19 = unaff_x23;
            FUN_0034b418();
            *(ulong **)(uVar13 + 0x1b0) = unaff_x23;
          } while (unaff_x23 != (ulong *)*puVar1);
        }
      }
    }
    else {
      *(undefined8 *)((long)register0x00000008 + -0x230) = 1;
      *(undefined8 *)((long)register0x00000008 + -0x228) = 5;
      *(char **)((long)register0x00000008 + -0x220) = ":path";
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar11) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = *plVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uVar18 = *unaff_x20;
      uVar21 = unaff_x20[3];
      uVar20 = unaff_x20[2];
      *(undefined8 *)((long)register0x00000008 + -0x248) = unaff_x20[1];
      *(undefined8 *)((long)register0x00000008 + -0x250) = uVar18;
      *(undefined8 *)((long)register0x00000008 + -0x238) = uVar21;
      *(undefined8 *)((long)register0x00000008 + -0x240) = uVar20;
      puVar9 = (ulong *)((long)register0x00000008 + -0x230);
      param_3 = (ulong *)((long)register0x00000008 + -0x250);
      FUN_0038f6a4(unaff_x22);
      plVar11 = *(long **)((long)register0x00000008 + -0x250);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar11) {
        do {
          lVar12 = *plVar11;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = lVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar12 + -1 == 0) {
          (*(code *)plVar11[1])();
        }
      }
      unaff_x19 = *(ulong **)((long)register0x00000008 + -0x230);
      unaff_x21 = param_2;
      if ((ulong *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
        do {
          uVar13 = *unaff_x19;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
          if (bVar4) {
            *unaff_x19 = uVar13 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar13 - 1 == 0) {
          (*(code *)unaff_x19[1])();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x1d0)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)puVar9 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x290));
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x270));
    }
    unaff_x30 = FUN_0038fed4;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x2d0);
    param_2 = puVar9;
    unaff_x24 = ":path";
  } while( true );
}



/* Entry: 00390034; end: 0039024f;  */

ulong * FUN_00390034(undefined8 param_1,ulong *param_2,ulong *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong *puVar6;
  undefined1 *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong *unaff_x19;
  ulong *unaff_x20;
  ulong *unaff_x21;
  ulong *puVar18;
  ulong *unaff_x22;
  ulong *unaff_x23;
  char *unaff_x24;
  undefined8 unaff_x25;
  ulong unaff_x26;
  ulong *unaff_x27;
  ulong unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  ulong uVar23;
  ulong uVar24;
  
  do {
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    plVar13 = (long *)*param_2;
    uVar15 = param_2[1] & 0xff;
    if (plVar13 != (long *)0x0) {
      uVar15 = param_2[1];
    }
    if (uVar15 < 4) {
LAB_00390094:
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar13) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = *plVar13 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uVar15 = *param_2;
      uVar12 = param_2[3];
      uVar17 = param_2[2];
      *(ulong *)((long)register0x00000008 + -0x88) = param_2[1];
      *(ulong *)((long)register0x00000008 + -0x90) = uVar15;
      *(ulong *)((long)register0x00000008 + -0x78) = uVar12;
      *(ulong *)((long)register0x00000008 + -0x80) = uVar17;
      plVar13 = (long *)*param_3;
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar13) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = *plVar13 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uVar15 = *param_3;
      uVar12 = param_3[3];
      uVar17 = param_3[2];
      *(ulong *)((long)register0x00000008 + -0xa8) = param_3[1];
      *(ulong *)((long)register0x00000008 + -0xb0) = uVar15;
      *(ulong *)((long)register0x00000008 + -0x98) = uVar12;
      *(ulong *)((long)register0x00000008 + -0xa0) = uVar17;
      puVar11 = (undefined8 *)((long)register0x00000008 + -0x90);
      FUN_0038f6a4();
      plVar13 = *(long **)((long)register0x00000008 + -0xb0);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar13) {
        do {
          lVar14 = *plVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = lVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar14 + -1 == 0) {
          (*(code *)plVar13[1])();
        }
      }
      puVar9 = *(ulong **)((long)register0x00000008 + -0x90);
      if ((ulong *)((long)&MACH_HEADER.magic + 1) < puVar9) {
        do {
          uVar15 = *puVar9;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar9,0x10);
          if (bVar4) {
            *puVar9 = uVar15 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar15 - 1 == 0) {
          (*(code *)puVar9[1])();
        }
      }
    }
    else {
      uVar17 = (long)param_2 + 9;
      if (plVar13 != (long *)0x0) {
        uVar17 = param_2[2];
      }
      if (*(int *)(uVar15 + uVar17 + -4) != 0x6e69622d) goto LAB_00390094;
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar13) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = *plVar13 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uVar15 = *param_2;
      uVar12 = param_2[3];
      uVar17 = param_2[2];
      *(ulong *)((long)register0x00000008 + -0x48) = param_2[1];
      *(ulong *)((long)register0x00000008 + -0x50) = uVar15;
      *(ulong *)((long)register0x00000008 + -0x38) = uVar12;
      *(ulong *)((long)register0x00000008 + -0x40) = uVar17;
      plVar13 = (long *)*param_3;
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar13) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = *plVar13 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uVar15 = *param_3;
      uVar12 = param_3[3];
      uVar17 = param_3[2];
      *(ulong *)((long)register0x00000008 + -0x68) = param_3[1];
      *(ulong *)((long)register0x00000008 + -0x70) = uVar15;
      *(ulong *)((long)register0x00000008 + -0x58) = uVar12;
      *(ulong *)((long)register0x00000008 + -0x60) = uVar17;
      puVar11 = (undefined8 *)((long)register0x00000008 + -0x50);
      FUN_0038ee10();
      plVar13 = *(long **)((long)register0x00000008 + -0x70);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar13) {
        do {
          lVar14 = *plVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = lVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar14 + -1 == 0) {
          (*(code *)plVar13[1])();
        }
      }
      puVar9 = *(ulong **)((long)register0x00000008 + -0x50);
      if ((ulong *)((long)&MACH_HEADER.magic + 1) < puVar9) {
        do {
          uVar15 = *puVar9;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar9,0x10);
          if (bVar4) {
            *puVar9 = uVar15 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar15 - 1 == 0) {
          (*(code *)puVar9[1])();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return puVar9;
    }
    ___stack_chk_fail();
    if ((int)puVar11 != 0) {
      func_0x0040cf10();
      unaff_x20 = (ulong *)((long)register0x00000008 + -0x90);
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0xb0));
      FUN_0034b418(unaff_x20);
    }
    puVar18 = puVar9;
    __Unwind_Resume();
    uVar15 = puVar18[4];
    puVar1 = (undefined8 *)(uVar15 + 0x1a8);
    param_3 = (ulong *)((long)&MACH_HEADER.cputype + 1);
    *(ulong *)((long)register0x00000008 + -0x110) = unaff_x28;
    *(ulong **)((long)register0x00000008 + -0x108) = unaff_x27;
    *(ulong *)((long)register0x00000008 + -0x100) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0xf8) = unaff_x25;
    *(char **)((long)register0x00000008 + -0xf0) = unaff_x24;
    *(ulong **)((long)register0x00000008 + -0xe8) = unaff_x23;
    *(ulong **)((long)register0x00000008 + -0xe0) = unaff_x22;
    *(ulong **)((long)register0x00000008 + -0xd8) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0xd0) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -200) = puVar9;
    *(undefined1 **)((long)register0x00000008 + -0xc0) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0xb8) = FUN_00390250;
    unaff_x25 = 5;
    *(undefined8 *)((long)register0x00000008 + -0x120) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    plVar13 = (long *)*puVar11;
    uVar2 = *(uint *)(puVar11 + 1) & 0xff;
    if (plVar13 != (long *)0x0) {
      uVar2 = *(uint *)(puVar11 + 1);
    }
    unaff_x26 = (ulong)(uVar2 + 0x25);
    if (uVar2 + 0x25 < 0x10000) {
      unaff_x28 = puVar18[4];
      unaff_x21 = (ulong *)(unaff_x28 + 8);
      unaff_x27 = (ulong *)*puVar1;
      unaff_x23 = *(ulong **)(uVar15 + 0x1b0);
      if (unaff_x27 == unaff_x23) {
LAB_0038fbe4:
        puVar9 = unaff_x21;
        FUN_00392064(unaff_x21,unaff_x26);
        *(int *)((long)register0x00000008 + -0x160) = (int)puVar9;
        *(undefined8 *)((long)register0x00000008 + -0x200) = 1;
        *(undefined8 *)((long)register0x00000008 + -0x1f8) = 5;
        *(char **)((long)register0x00000008 + -0x1f0) = ":path";
        plVar13 = (long *)*puVar11;
        if ((long *)((long)&MACH_HEADER.magic + 1) < plVar13) {
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar4) {
              *plVar13 = *plVar13 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        uVar19 = *puVar11;
        uVar22 = puVar11[3];
        uVar21 = puVar11[2];
        *(undefined8 *)((long)register0x00000008 + -0x218) = puVar11[1];
        *(undefined8 *)((long)register0x00000008 + -0x220) = uVar19;
        *(undefined8 *)((long)register0x00000008 + -0x208) = uVar22;
        *(undefined8 *)((long)register0x00000008 + -0x210) = uVar21;
        FUN_0038eb08(puVar18,(undefined1 *)((long)register0x00000008 + -0x200),
                     (undefined1 *)((long)register0x00000008 + -0x220));
        plVar13 = *(long **)((long)register0x00000008 + -0x220);
        if ((long *)((long)&MACH_HEADER.magic + 1) < plVar13) {
          do {
            lVar14 = *plVar13;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar4) {
              *plVar13 = lVar14 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar14 + -1 == 0) {
            (*(code *)plVar13[1])();
          }
        }
        plVar13 = *(long **)((long)register0x00000008 + -0x200);
        if ((long *)((long)&MACH_HEADER.magic + 1) < plVar13) {
          do {
            lVar14 = *plVar13;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar4) {
              *plVar13 = lVar14 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar14 + -1 == 0) {
            (*(code *)plVar13[1])();
          }
        }
        plVar13 = (long *)*puVar11;
        if ((long *)((long)&MACH_HEADER.magic + 1) < plVar13) {
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar4) {
              *plVar13 = *plVar13 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        uVar19 = *puVar11;
        uVar22 = puVar11[3];
        uVar21 = puVar11[2];
        *(undefined8 *)((long)register0x00000008 + -0x138) = puVar11[1];
        *(undefined8 *)((long)register0x00000008 + -0x140) = uVar19;
        *(undefined8 *)((long)register0x00000008 + -0x128) = uVar22;
        *(undefined8 *)((long)register0x00000008 + -0x130) = uVar21;
        puVar10 = (ulong *)((long)register0x00000008 + -0x140);
        param_3 = (ulong *)((long)register0x00000008 + -0x160);
        FUN_0038fed4(puVar1);
        puVar6 = *(ulong **)((long)register0x00000008 + -0x140);
        if ((ulong *)((long)&MACH_HEADER.magic + 1) < puVar6) {
          do {
            uVar15 = *puVar6;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar6,0x10);
            if (bVar4) {
              *puVar6 = uVar15 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar15 - 1 == 0) {
            (*(code *)puVar6[1])();
          }
        }
      }
      else {
        uVar19 = *puVar11;
        uVar22 = puVar11[3];
        uVar21 = puVar11[2];
        *(undefined8 *)((long)register0x00000008 + -0x138) = puVar11[1];
        *(undefined8 *)((long)register0x00000008 + -0x140) = uVar19;
        *(undefined8 *)((long)register0x00000008 + -0x128) = uVar22;
        *(undefined8 *)((long)register0x00000008 + -0x130) = uVar21;
        uVar20 = *unaff_x27;
        uVar12 = unaff_x27[3];
        uVar17 = unaff_x27[2];
        *(ulong *)((long)register0x00000008 + -0x158) = unaff_x27[1];
        *(ulong *)((long)register0x00000008 + -0x160) = uVar20;
        *(ulong *)((long)register0x00000008 + -0x148) = uVar12;
        *(ulong *)((long)register0x00000008 + -0x150) = uVar17;
        puVar7 = (undefined1 *)((long)register0x00000008 + -0x140);
        FUN_003ec788(puVar7,(undefined1 *)((long)register0x00000008 + -0x160));
        iVar5 = (int)puVar7;
        puVar9 = unaff_x23;
        while (puVar8 = unaff_x27, iVar5 == 0) {
          unaff_x27 = puVar8 + 5;
          if (unaff_x27 == *(ulong **)(uVar15 + 0x1b0)) goto LAB_0038fbe4;
          uVar19 = *puVar11;
          uVar22 = puVar11[3];
          uVar21 = puVar11[2];
          *(undefined8 *)((long)register0x00000008 + -0x138) = puVar11[1];
          *(undefined8 *)((long)register0x00000008 + -0x140) = uVar19;
          *(undefined8 *)((long)register0x00000008 + -0x128) = uVar22;
          *(undefined8 *)((long)register0x00000008 + -0x130) = uVar21;
          uVar20 = *unaff_x27;
          uVar12 = puVar8[8];
          uVar17 = puVar8[7];
          *(ulong *)((long)register0x00000008 + -0x158) = puVar8[6];
          *(ulong *)((long)register0x00000008 + -0x160) = uVar20;
          *(ulong *)((long)register0x00000008 + -0x148) = uVar12;
          *(ulong *)((long)register0x00000008 + -0x150) = uVar17;
          puVar7 = (undefined1 *)((long)register0x00000008 + -0x140);
          FUN_003ec788(puVar7,(undefined1 *)((long)register0x00000008 + -0x160));
          puVar9 = puVar8;
          iVar5 = (int)puVar7;
        }
        if (*(uint *)unaff_x21 < (uint)puVar8[4]) {
          puVar10 = (ulong *)(ulong)((*(uint *)unaff_x21 - (uint)puVar8[4]) +
                                     *(int *)(unaff_x28 + 0x10) + 0x3e);
          puVar6 = puVar18;
          FUN_0038ea60();
        }
        else {
          puVar10 = unaff_x21;
          FUN_00392064(unaff_x21,unaff_x26);
          *(int *)(puVar8 + 4) = (int)puVar10;
          *(undefined8 *)((long)register0x00000008 + -0x1c0) = 1;
          *(undefined8 *)((long)register0x00000008 + -0x1b8) = 5;
          *(char **)((long)register0x00000008 + -0x1b0) = ":path";
          plVar13 = (long *)*puVar11;
          if ((long *)((long)&MACH_HEADER.magic + 1) < plVar13) {
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar4) {
                *plVar13 = *plVar13 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          uVar19 = *puVar11;
          uVar22 = puVar11[3];
          uVar21 = puVar11[2];
          *(undefined8 *)((long)register0x00000008 + -0x1d8) = puVar11[1];
          *(undefined8 *)((long)register0x00000008 + -0x1e0) = uVar19;
          *(undefined8 *)((long)register0x00000008 + -0x1c8) = uVar22;
          *(undefined8 *)((long)register0x00000008 + -0x1d0) = uVar21;
          puVar10 = (ulong *)((long)register0x00000008 + -0x1c0);
          param_3 = (ulong *)((long)register0x00000008 + -0x1e0);
          FUN_0038eb08(puVar18);
          plVar13 = *(long **)((long)register0x00000008 + -0x1e0);
          if ((long *)((long)&MACH_HEADER.magic + 1) < plVar13) {
            do {
              lVar14 = *plVar13;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar4) {
                *plVar13 = lVar14 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar14 + -1 == 0) {
              (*(code *)plVar13[1])();
            }
          }
          puVar6 = *(ulong **)((long)register0x00000008 + -0x1c0);
          if ((ulong *)((long)&MACH_HEADER.magic + 1) < puVar6) {
            do {
              uVar17 = *puVar6;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar6,0x10);
              if (bVar4) {
                *puVar6 = uVar17 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar17 - 1 == 0) {
              (*(code *)puVar6[1])();
            }
          }
        }
        unaff_x23 = puVar9;
        if (puVar9 != *(ulong **)(uVar15 + 0x1b0)) {
          uVar12 = *puVar9;
          uVar17 = puVar9[3];
          uVar20 = puVar9[1];
          *(ulong *)((long)register0x00000008 + -0x138) = puVar9[2];
          *(ulong *)((long)register0x00000008 + -0x140) = uVar20;
          *(ulong *)((long)register0x00000008 + -0x130) = uVar17;
          puVar9[1] = 0;
          *puVar9 = 0;
          puVar9[3] = 0;
          puVar9[2] = 0;
          uVar17 = puVar9[4];
          uVar24 = *puVar8;
          uVar23 = puVar8[3];
          uVar20 = puVar8[2];
          puVar9[1] = puVar8[1];
          *puVar9 = uVar24;
          puVar9[3] = uVar23;
          puVar9[2] = uVar20;
          puVar8[1] = 0;
          *puVar8 = 0;
          puVar8[3] = 0;
          puVar8[2] = 0;
          *(int *)(puVar9 + 4) = (int)puVar8[4];
          *puVar8 = uVar12;
          uVar20 = *(ulong *)((long)register0x00000008 + -0x138);
          uVar12 = *(ulong *)((long)register0x00000008 + -0x140);
          puVar8[3] = *(ulong *)((long)register0x00000008 + -0x130);
          puVar8[2] = uVar20;
          puVar8[1] = uVar12;
          *(int *)(puVar8 + 4) = (int)uVar17;
          unaff_x23 = *(ulong **)(uVar15 + 0x1b0);
        }
        unaff_x27 = puVar8;
        if ((ulong *)*puVar1 != unaff_x23) {
          do {
            if (*(uint *)unaff_x21 < (uint)unaff_x23[-1]) break;
            unaff_x23 = unaff_x23 + -5;
            puVar6 = unaff_x23;
            FUN_0034b418();
            *(ulong **)(uVar15 + 0x1b0) = unaff_x23;
          } while (unaff_x23 != (ulong *)*puVar1);
        }
      }
    }
    else {
      *(undefined8 *)((long)register0x00000008 + -0x180) = 1;
      *(undefined8 *)((long)register0x00000008 + -0x178) = 5;
      *(char **)((long)register0x00000008 + -0x170) = ":path";
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar13) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = *plVar13 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uVar19 = *puVar11;
      uVar22 = puVar11[3];
      uVar21 = puVar11[2];
      *(undefined8 *)((long)register0x00000008 + -0x198) = puVar11[1];
      *(undefined8 *)((long)register0x00000008 + -0x1a0) = uVar19;
      *(undefined8 *)((long)register0x00000008 + -0x188) = uVar22;
      *(undefined8 *)((long)register0x00000008 + -400) = uVar21;
      puVar10 = (ulong *)((long)register0x00000008 + -0x180);
      param_3 = (ulong *)((long)register0x00000008 + -0x1a0);
      FUN_0038f6a4(puVar18);
      plVar13 = *(long **)((long)register0x00000008 + -0x1a0);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar13) {
        do {
          lVar14 = *plVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = lVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar14 + -1 == 0) {
          (*(code *)plVar13[1])();
        }
      }
      puVar6 = *(ulong **)((long)register0x00000008 + -0x180);
      if ((ulong *)((long)&MACH_HEADER.magic + 1) < puVar6) {
        do {
          uVar15 = *puVar6;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar6,0x10);
          if (bVar4) {
            *puVar6 = uVar15 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar15 - 1 == 0) {
          (*(code *)puVar6[1])();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x120)) {
      return puVar6;
    }
    ___stack_chk_fail();
    if ((int)puVar10 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x1e0));
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x1c0));
    }
    unaff_x19 = puVar6;
    __Unwind_Resume();
    *(ulong **)((long)register0x00000008 + -0x250) = puVar18;
    *(ulong **)((long)register0x00000008 + -0x248) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x240) = puVar11;
    *(ulong **)((long)register0x00000008 + -0x238) = puVar6;
    *(undefined1 **)((long)register0x00000008 + -0x230) =
         (undefined1 *)((long)register0x00000008 + -0xc0);
    *(code **)((long)register0x00000008 + -0x228) = FUN_0038fed4;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x230);
    *(undefined8 *)((long)register0x00000008 + -600) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    puVar8 = unaff_x19 + 2;
    puVar6 = (ulong *)unaff_x19[1];
    param_2 = puVar10;
    puVar9 = param_3;
    if (puVar6 < (ulong *)*puVar8) {
      uVar12 = puVar10[1];
      uVar17 = *puVar10;
      uVar23 = puVar10[3];
      uVar20 = puVar10[2];
      puVar10[1] = 0;
      *puVar10 = 0;
      puVar10[3] = 0;
      puVar10[2] = 0;
      uVar15 = *param_3;
      puVar6[1] = uVar12;
      *puVar6 = uVar17;
      puVar6[3] = uVar23;
      puVar6[2] = uVar20;
      *(int *)(puVar6 + 4) = (int)uVar15;
      unaff_x20 = puVar6 + 5;
      unaff_x19[1] = (ulong)unaff_x20;
LAB_0038ffe0:
      unaff_x19[1] = (ulong)unaff_x20;
      if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -600)) {
        return unaff_x20 + -5;
      }
      ___stack_chk_fail();
      param_3 = puVar9;
    }
    else {
      lVar14 = (long)((long)puVar6 - *unaff_x19) >> 3;
      puVar18 = (ulong *)(lVar14 * -0x3333333333333333);
      uVar15 = (long)puVar18 + 1;
      unaff_x20 = param_3;
      if (uVar15 < 0x666666666666667) {
        lVar16 = (long)((long)*puVar8 - *unaff_x19) >> 3;
        uVar17 = lVar16 * -0x6666666666666666;
        if (uVar17 < uVar15 || uVar17 - uVar15 == 0) {
          uVar17 = uVar15;
        }
        if (0x333333333333332 < (ulong)(lVar16 * -0x3333333333333333)) {
          uVar17 = 0x666666666666666;
        }
        *(ulong **)((long)register0x00000008 + -0x2a8) = puVar8;
        func_0x00391f84();
        puVar6 = puVar8 + lVar14;
        *(ulong **)((long)register0x00000008 + -0x2c8) = puVar8;
        *(ulong **)((long)register0x00000008 + -0x2c0) = puVar6;
        *(ulong **)((long)register0x00000008 + -0x2b0) = puVar8 + uVar17 * 5;
        uVar12 = puVar10[1];
        uVar17 = *puVar10;
        uVar23 = puVar10[3];
        uVar20 = puVar10[2];
        puVar10[1] = 0;
        *puVar10 = 0;
        puVar10[3] = 0;
        puVar10[2] = 0;
        uVar15 = *param_3;
        puVar6[1] = uVar12;
        *puVar6 = uVar17;
        puVar6[3] = uVar23;
        puVar6[2] = uVar20;
        *(int *)(puVar6 + 4) = (int)uVar15;
        *(ulong **)((long)register0x00000008 + -0x2b8) = puVar6 + 5;
        param_2 = (ulong *)((long)register0x00000008 + -0x2c8);
        func_0x00391ea0(unaff_x19);
        unaff_x20 = (ulong *)unaff_x19[1];
        func_0x00391fc8((undefined1 *)((long)register0x00000008 + -0x2c8));
        goto LAB_0038ffe0;
      }
    }
    func_0x00391f70();
    func_0x00391fc8((undefined1 *)((long)register0x00000008 + -0x2c8));
    unaff_x30 = FUN_00390034;
    __Unwind_Resume(unaff_x19);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x2d0);
    unaff_x21 = puVar10;
    unaff_x22 = puVar18;
    unaff_x24 = ":path";
  } while( true );
}



/* Entry: 00390250; end: 0039028f;  */

ulong * FUN_00390250(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong *puVar6;
  undefined1 *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong *puVar17;
  long lVar18;
  ulong uVar19;
  ulong *unaff_x19;
  ulong *unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  ulong *unaff_x23;
  char *unaff_x24;
  undefined8 unaff_x25;
  ulong unaff_x26;
  ulong *unaff_x27;
  ulong unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  ulong uVar24;
  ulong uVar25;
  
  do {
    uVar16 = param_1[4];
    puVar1 = (undefined8 *)(uVar16 + 0x1a8);
    puVar12 = (ulong *)((long)&MACH_HEADER.cputype + 1);
    *(ulong *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(ulong **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(char **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x25 = 5;
    *(undefined8 *)((long)register0x00000008 + -0x70) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    plVar13 = (long *)*param_2;
    uVar2 = *(uint *)(param_2 + 1) & 0xff;
    if (plVar13 != (long *)0x0) {
      uVar2 = *(uint *)(param_2 + 1);
    }
    unaff_x26 = (ulong)(uVar2 + 0x25);
    if (uVar2 + 0x25 < 0x10000) {
      unaff_x28 = param_1[4];
      unaff_x21 = (ulong *)(unaff_x28 + 8);
      unaff_x27 = (ulong *)*puVar1;
      unaff_x23 = *(ulong **)(uVar16 + 0x1b0);
      if (unaff_x27 == unaff_x23) {
LAB_0038fbe4:
        puVar12 = unaff_x21;
        FUN_00392064(unaff_x21,unaff_x26);
        *(int *)((long)register0x00000008 + -0xb0) = (int)puVar12;
        *(undefined8 *)((long)register0x00000008 + -0x150) = 1;
        *(undefined8 *)((long)register0x00000008 + -0x148) = 5;
        *(char **)((long)register0x00000008 + -0x140) = ":path";
        plVar13 = (long *)*param_2;
        if ((long *)((long)&MACH_HEADER.magic + 1) < plVar13) {
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar4) {
              *plVar13 = *plVar13 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        uVar20 = *param_2;
        uVar23 = param_2[3];
        uVar22 = param_2[2];
        *(undefined8 *)((long)register0x00000008 + -0x168) = param_2[1];
        *(undefined8 *)((long)register0x00000008 + -0x170) = uVar20;
        *(undefined8 *)((long)register0x00000008 + -0x158) = uVar23;
        *(undefined8 *)((long)register0x00000008 + -0x160) = uVar22;
        FUN_0038eb08(param_1,(undefined1 *)((long)register0x00000008 + -0x150),
                     (undefined1 *)((long)register0x00000008 + -0x170));
        plVar13 = *(long **)((long)register0x00000008 + -0x170);
        if ((long *)((long)&MACH_HEADER.magic + 1) < plVar13) {
          do {
            lVar14 = *plVar13;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar4) {
              *plVar13 = lVar14 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar14 + -1 == 0) {
            (*(code *)plVar13[1])();
          }
        }
        plVar13 = *(long **)((long)register0x00000008 + -0x150);
        if ((long *)((long)&MACH_HEADER.magic + 1) < plVar13) {
          do {
            lVar14 = *plVar13;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar4) {
              *plVar13 = lVar14 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar14 + -1 == 0) {
            (*(code *)plVar13[1])();
          }
        }
        plVar13 = (long *)*param_2;
        if ((long *)((long)&MACH_HEADER.magic + 1) < plVar13) {
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar4) {
              *plVar13 = *plVar13 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        uVar20 = *param_2;
        uVar23 = param_2[3];
        uVar22 = param_2[2];
        *(undefined8 *)((long)register0x00000008 + -0x88) = param_2[1];
        *(undefined8 *)((long)register0x00000008 + -0x90) = uVar20;
        *(undefined8 *)((long)register0x00000008 + -0x78) = uVar23;
        *(undefined8 *)((long)register0x00000008 + -0x80) = uVar22;
        puVar10 = (ulong *)((long)register0x00000008 + -0x90);
        puVar12 = (ulong *)((long)register0x00000008 + -0xb0);
        FUN_0038fed4(puVar1);
        puVar6 = *(ulong **)((long)register0x00000008 + -0x90);
        if ((ulong *)((long)&MACH_HEADER.magic + 1) < puVar6) {
          do {
            uVar16 = *puVar6;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar6,0x10);
            if (bVar4) {
              *puVar6 = uVar16 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar16 - 1 == 0) {
            (*(code *)puVar6[1])();
          }
        }
      }
      else {
        uVar20 = *param_2;
        uVar23 = param_2[3];
        uVar22 = param_2[2];
        *(undefined8 *)((long)register0x00000008 + -0x88) = param_2[1];
        *(undefined8 *)((long)register0x00000008 + -0x90) = uVar20;
        *(undefined8 *)((long)register0x00000008 + -0x78) = uVar23;
        *(undefined8 *)((long)register0x00000008 + -0x80) = uVar22;
        uVar21 = *unaff_x27;
        uVar15 = unaff_x27[3];
        uVar19 = unaff_x27[2];
        *(ulong *)((long)register0x00000008 + -0xa8) = unaff_x27[1];
        *(ulong *)((long)register0x00000008 + -0xb0) = uVar21;
        *(ulong *)((long)register0x00000008 + -0x98) = uVar15;
        *(ulong *)((long)register0x00000008 + -0xa0) = uVar19;
        puVar7 = (undefined1 *)((long)register0x00000008 + -0x90);
        FUN_003ec788(puVar7,(undefined1 *)((long)register0x00000008 + -0xb0));
        iVar5 = (int)puVar7;
        puVar11 = unaff_x23;
        while (puVar8 = unaff_x27, iVar5 == 0) {
          unaff_x27 = puVar8 + 5;
          if (unaff_x27 == *(ulong **)(uVar16 + 0x1b0)) goto LAB_0038fbe4;
          uVar20 = *param_2;
          uVar23 = param_2[3];
          uVar22 = param_2[2];
          *(undefined8 *)((long)register0x00000008 + -0x88) = param_2[1];
          *(undefined8 *)((long)register0x00000008 + -0x90) = uVar20;
          *(undefined8 *)((long)register0x00000008 + -0x78) = uVar23;
          *(undefined8 *)((long)register0x00000008 + -0x80) = uVar22;
          uVar21 = *unaff_x27;
          uVar15 = puVar8[8];
          uVar19 = puVar8[7];
          *(ulong *)((long)register0x00000008 + -0xa8) = puVar8[6];
          *(ulong *)((long)register0x00000008 + -0xb0) = uVar21;
          *(ulong *)((long)register0x00000008 + -0x98) = uVar15;
          *(ulong *)((long)register0x00000008 + -0xa0) = uVar19;
          puVar7 = (undefined1 *)((long)register0x00000008 + -0x90);
          FUN_003ec788(puVar7,(undefined1 *)((long)register0x00000008 + -0xb0));
          puVar11 = puVar8;
          iVar5 = (int)puVar7;
        }
        if (*(uint *)unaff_x21 < (uint)puVar8[4]) {
          puVar10 = (ulong *)(ulong)((*(uint *)unaff_x21 - (uint)puVar8[4]) +
                                     *(int *)(unaff_x28 + 0x10) + 0x3e);
          puVar6 = param_1;
          FUN_0038ea60();
        }
        else {
          puVar12 = unaff_x21;
          FUN_00392064(unaff_x21,unaff_x26);
          *(int *)(puVar8 + 4) = (int)puVar12;
          *(undefined8 *)((long)register0x00000008 + -0x110) = 1;
          *(undefined8 *)((long)register0x00000008 + -0x108) = 5;
          *(char **)((long)register0x00000008 + -0x100) = ":path";
          plVar13 = (long *)*param_2;
          if ((long *)((long)&MACH_HEADER.magic + 1) < plVar13) {
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar4) {
                *plVar13 = *plVar13 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          uVar20 = *param_2;
          uVar23 = param_2[3];
          uVar22 = param_2[2];
          *(undefined8 *)((long)register0x00000008 + -0x128) = param_2[1];
          *(undefined8 *)((long)register0x00000008 + -0x130) = uVar20;
          *(undefined8 *)((long)register0x00000008 + -0x118) = uVar23;
          *(undefined8 *)((long)register0x00000008 + -0x120) = uVar22;
          puVar10 = (ulong *)((long)register0x00000008 + -0x110);
          puVar12 = (ulong *)((long)register0x00000008 + -0x130);
          FUN_0038eb08(param_1);
          plVar13 = *(long **)((long)register0x00000008 + -0x130);
          if ((long *)((long)&MACH_HEADER.magic + 1) < plVar13) {
            do {
              lVar14 = *plVar13;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar4) {
                *plVar13 = lVar14 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar14 + -1 == 0) {
              (*(code *)plVar13[1])();
            }
          }
          puVar6 = *(ulong **)((long)register0x00000008 + -0x110);
          if ((ulong *)((long)&MACH_HEADER.magic + 1) < puVar6) {
            do {
              uVar19 = *puVar6;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar6,0x10);
              if (bVar4) {
                *puVar6 = uVar19 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar19 - 1 == 0) {
              (*(code *)puVar6[1])();
            }
          }
        }
        unaff_x23 = puVar11;
        if (puVar11 != *(ulong **)(uVar16 + 0x1b0)) {
          uVar15 = *puVar11;
          uVar19 = puVar11[3];
          uVar21 = puVar11[1];
          *(ulong *)((long)register0x00000008 + -0x88) = puVar11[2];
          *(ulong *)((long)register0x00000008 + -0x90) = uVar21;
          *(ulong *)((long)register0x00000008 + -0x80) = uVar19;
          puVar11[1] = 0;
          *puVar11 = 0;
          puVar11[3] = 0;
          puVar11[2] = 0;
          uVar19 = puVar11[4];
          uVar25 = *puVar8;
          uVar24 = puVar8[3];
          uVar21 = puVar8[2];
          puVar11[1] = puVar8[1];
          *puVar11 = uVar25;
          puVar11[3] = uVar24;
          puVar11[2] = uVar21;
          puVar8[1] = 0;
          *puVar8 = 0;
          puVar8[3] = 0;
          puVar8[2] = 0;
          *(int *)(puVar11 + 4) = (int)puVar8[4];
          *puVar8 = uVar15;
          uVar21 = *(ulong *)((long)register0x00000008 + -0x88);
          uVar15 = *(ulong *)((long)register0x00000008 + -0x90);
          puVar8[3] = *(ulong *)((long)register0x00000008 + -0x80);
          puVar8[2] = uVar21;
          puVar8[1] = uVar15;
          *(int *)(puVar8 + 4) = (int)uVar19;
          unaff_x23 = *(ulong **)(uVar16 + 0x1b0);
        }
        unaff_x27 = puVar8;
        if ((ulong *)*puVar1 != unaff_x23) {
          do {
            if (*(uint *)unaff_x21 < (uint)unaff_x23[-1]) break;
            unaff_x23 = unaff_x23 + -5;
            puVar6 = unaff_x23;
            FUN_0034b418();
            *(ulong **)(uVar16 + 0x1b0) = unaff_x23;
          } while (unaff_x23 != (ulong *)*puVar1);
        }
      }
    }
    else {
      *(undefined8 *)((long)register0x00000008 + -0xd0) = 1;
      *(undefined8 *)((long)register0x00000008 + -200) = 5;
      *(char **)((long)register0x00000008 + -0xc0) = ":path";
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar13) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = *plVar13 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uVar20 = *param_2;
      uVar23 = param_2[3];
      uVar22 = param_2[2];
      *(undefined8 *)((long)register0x00000008 + -0xe8) = param_2[1];
      *(undefined8 *)((long)register0x00000008 + -0xf0) = uVar20;
      *(undefined8 *)((long)register0x00000008 + -0xd8) = uVar23;
      *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar22;
      puVar10 = (ulong *)((long)register0x00000008 + -0xd0);
      puVar12 = (ulong *)((long)register0x00000008 + -0xf0);
      FUN_0038f6a4(param_1);
      plVar13 = *(long **)((long)register0x00000008 + -0xf0);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar13) {
        do {
          lVar14 = *plVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = lVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar14 + -1 == 0) {
          (*(code *)plVar13[1])();
        }
      }
      puVar6 = *(ulong **)((long)register0x00000008 + -0xd0);
      if ((ulong *)((long)&MACH_HEADER.magic + 1) < puVar6) {
        do {
          uVar16 = *puVar6;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar6,0x10);
          if (bVar4) {
            *puVar6 = uVar16 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar16 - 1 == 0) {
          (*(code *)puVar6[1])();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x70)) {
      return puVar6;
    }
    ___stack_chk_fail();
    if ((int)puVar10 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x130));
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x110));
    }
    puVar8 = puVar6;
    __Unwind_Resume();
    *(ulong **)((long)register0x00000008 + -0x1a0) = param_1;
    *(ulong **)((long)register0x00000008 + -0x198) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -400) = param_2;
    *(ulong **)((long)register0x00000008 + -0x188) = puVar6;
    *(undefined1 **)((long)register0x00000008 + -0x180) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x178) = FUN_0038fed4;
    *(undefined8 *)((long)register0x00000008 + -0x1a8) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    puVar9 = puVar8 + 2;
    puVar17 = (ulong *)puVar8[1];
    puVar11 = puVar10;
    puVar6 = puVar12;
    if (puVar17 < (ulong *)*puVar9) {
      uVar15 = puVar10[1];
      uVar19 = *puVar10;
      uVar24 = puVar10[3];
      uVar21 = puVar10[2];
      puVar10[1] = 0;
      *puVar10 = 0;
      puVar10[3] = 0;
      puVar10[2] = 0;
      uVar16 = *puVar12;
      puVar17[1] = uVar15;
      *puVar17 = uVar19;
      puVar17[3] = uVar24;
      puVar17[2] = uVar21;
      *(int *)(puVar17 + 4) = (int)uVar16;
      unaff_x20 = puVar17 + 5;
      puVar8[1] = (ulong)unaff_x20;
      unaff_x22 = param_1;
LAB_0038ffe0:
      puVar8[1] = (ulong)unaff_x20;
      if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x1a8))
      {
        return unaff_x20 + -5;
      }
      ___stack_chk_fail();
      puVar12 = puVar6;
    }
    else {
      lVar14 = (long)((long)puVar17 - *puVar8) >> 3;
      unaff_x22 = (ulong *)(lVar14 * -0x3333333333333333);
      uVar16 = (long)unaff_x22 + 1;
      unaff_x20 = puVar12;
      if (uVar16 < 0x666666666666667) {
        lVar18 = (long)((long)*puVar9 - *puVar8) >> 3;
        uVar19 = lVar18 * -0x6666666666666666;
        if (uVar19 < uVar16 || uVar19 - uVar16 == 0) {
          uVar19 = uVar16;
        }
        if (0x333333333333332 < (ulong)(lVar18 * -0x3333333333333333)) {
          uVar19 = 0x666666666666666;
        }
        *(ulong **)((long)register0x00000008 + -0x1f8) = puVar9;
        func_0x00391f84();
        puVar11 = puVar9 + lVar14;
        *(ulong **)((long)register0x00000008 + -0x218) = puVar9;
        *(ulong **)((long)register0x00000008 + -0x210) = puVar11;
        *(ulong **)((long)register0x00000008 + -0x200) = puVar9 + uVar19 * 5;
        uVar15 = puVar10[1];
        uVar19 = *puVar10;
        uVar24 = puVar10[3];
        uVar21 = puVar10[2];
        puVar10[1] = 0;
        *puVar10 = 0;
        puVar10[3] = 0;
        puVar10[2] = 0;
        uVar16 = *puVar12;
        puVar11[1] = uVar15;
        *puVar11 = uVar19;
        puVar11[3] = uVar24;
        puVar11[2] = uVar21;
        *(int *)(puVar11 + 4) = (int)uVar16;
        *(ulong **)((long)register0x00000008 + -0x208) = puVar11 + 5;
        puVar11 = (ulong *)((long)register0x00000008 + -0x218);
        func_0x00391ea0(puVar8);
        unaff_x20 = (ulong *)puVar8[1];
        func_0x00391fc8((undefined1 *)((long)register0x00000008 + -0x218));
        goto LAB_0038ffe0;
      }
    }
    func_0x00391f70();
    func_0x00391fc8((undefined1 *)((long)register0x00000008 + -0x218));
    __Unwind_Resume(puVar8);
    *(ulong **)((long)register0x00000008 + -0x240) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x238) = puVar8;
    *(undefined1 **)((long)register0x00000008 + -0x230) =
         (undefined1 *)((long)register0x00000008 + -0x180);
    *(code **)((long)register0x00000008 + -0x228) = FUN_00390034;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x230);
    *(undefined8 *)((long)register0x00000008 + -0x248) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    plVar13 = (long *)*puVar11;
    uVar16 = puVar11[1] & 0xff;
    if (plVar13 != (long *)0x0) {
      uVar16 = puVar11[1];
    }
    if (uVar16 < 4) {
LAB_00390094:
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar13) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = *plVar13 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uVar16 = *puVar11;
      uVar15 = puVar11[3];
      uVar19 = puVar11[2];
      *(ulong *)((long)register0x00000008 + -0x2a8) = puVar11[1];
      *(ulong *)((long)register0x00000008 + -0x2b0) = uVar16;
      *(ulong *)((long)register0x00000008 + -0x298) = uVar15;
      *(ulong *)((long)register0x00000008 + -0x2a0) = uVar19;
      plVar13 = (long *)*puVar12;
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar13) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = *plVar13 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uVar16 = *puVar12;
      uVar15 = puVar12[3];
      uVar19 = puVar12[2];
      *(ulong *)((long)register0x00000008 + -0x2c8) = puVar12[1];
      *(ulong *)((long)register0x00000008 + -0x2d0) = uVar16;
      *(ulong *)((long)register0x00000008 + -0x2b8) = uVar15;
      *(ulong *)((long)register0x00000008 + -0x2c0) = uVar19;
      param_2 = (undefined8 *)((long)register0x00000008 + -0x2b0);
      FUN_0038f6a4();
      plVar13 = *(long **)((long)register0x00000008 + -0x2d0);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar13) {
        do {
          lVar14 = *plVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = lVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar14 + -1 == 0) {
          (*(code *)plVar13[1])();
        }
      }
      unaff_x19 = *(ulong **)((long)register0x00000008 + -0x2b0);
      if ((ulong *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
        do {
          uVar16 = *unaff_x19;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
          if (bVar4) {
            *unaff_x19 = uVar16 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar16 - 1 == 0) {
          (*(code *)unaff_x19[1])();
        }
      }
    }
    else {
      uVar19 = (long)puVar11 + 9;
      if (plVar13 != (long *)0x0) {
        uVar19 = puVar11[2];
      }
      if (*(int *)(uVar16 + uVar19 + -4) != 0x6e69622d) goto LAB_00390094;
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar13) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = *plVar13 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uVar16 = *puVar11;
      uVar15 = puVar11[3];
      uVar19 = puVar11[2];
      *(ulong *)((long)register0x00000008 + -0x268) = puVar11[1];
      *(ulong *)((long)register0x00000008 + -0x270) = uVar16;
      *(ulong *)((long)register0x00000008 + -600) = uVar15;
      *(ulong *)((long)register0x00000008 + -0x260) = uVar19;
      plVar13 = (long *)*puVar12;
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar13) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = *plVar13 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uVar16 = *puVar12;
      uVar15 = puVar12[3];
      uVar19 = puVar12[2];
      *(ulong *)((long)register0x00000008 + -0x288) = puVar12[1];
      *(ulong *)((long)register0x00000008 + -0x290) = uVar16;
      *(ulong *)((long)register0x00000008 + -0x278) = uVar15;
      *(ulong *)((long)register0x00000008 + -0x280) = uVar19;
      param_2 = (undefined8 *)((long)register0x00000008 + -0x270);
      FUN_0038ee10();
      plVar13 = *(long **)((long)register0x00000008 + -0x290);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar13) {
        do {
          lVar14 = *plVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = lVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar14 + -1 == 0) {
          (*(code *)plVar13[1])();
        }
      }
      unaff_x19 = *(ulong **)((long)register0x00000008 + -0x270);
      if ((ulong *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
        do {
          uVar16 = *unaff_x19;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
          if (bVar4) {
            *unaff_x19 = uVar16 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar16 - 1 == 0) {
          (*(code *)unaff_x19[1])();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x248)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      unaff_x20 = (ulong *)((long)register0x00000008 + -0x2b0);
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x2d0));
      FUN_0034b418(unaff_x20);
    }
    unaff_x30 = FUN_00390250;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x2d0);
    unaff_x21 = puVar10;
    unaff_x24 = ":path";
  } while( true );
}



/* Entry: 00390290; end: 00390367;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */
/* WARNING: Type propagation algorithm not settling */

uint ******* FUN_00390290(long param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  uint ******ppppppuVar4;
  undefined8 *puVar5;
  undefined7 *puVar6;
  ulong uVar7;
  ulong uVar8;
  uint *******pppppppuVar9;
  uint *******pppppppuVar10;
  uint *******pppppppuVar11;
  uint *******pppppppuVar12;
  int iVar13;
  byte *pbVar14;
  uint *******pppppppuVar15;
  uint uVar16;
  ulong *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  ulong uVar20;
  uint ******ppppppuVar21;
  uint *****pppppuVar22;
  long lVar23;
  uint uVar24;
  undefined1 uVar25;
  uint *******unaff_x20;
  char *pcVar26;
  uint *******unaff_x23;
  uint ******unaff_x24;
  uint *******apppppppuStack_2b8 [2];
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
  uint ******ppppppuStack_1d8;
  undefined8 uStack_1d0;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  uint ******ppppppuStack_1b0;
  uint *******pppppppuStack_1a8;
  uint *******pppppppuStack_1a0;
  char *pcStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 ***pppuStack_180;
  code *pcStack_178;
  undefined1 *puStack_170;
  uint ******appppppuStack_168 [3];
  uint *******pppppppuStack_150;
  uint *******pppppppuStack_148;
  undefined1 ***pppuStack_140;
  code *pcStack_138;
  uint *******pppppppuStack_128;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  uint ******ppppppuStack_e0;
  uint ******ppppppuStack_d8;
  uint ******ppppppuStack_d0;
  uint ******ppppppuStack_c8;
  uint *******pppppppuStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  long lStack_98;
  undefined1 *puStack_60;
  code *pcStack_58;
  uint *******pppppppuStack_48;
  undefined8 uStack_40;
  char *pcStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  if (param_2 != 0) {
    func_0x00772ff8();
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x390344);
    (*pcVar3)();
  }
  pppppppuVar9 = (uint *******)(*(long *)(param_1 + 0x20) + 0x120);
  pppppppuStack_48 = (uint *******)((long)&MACH_HEADER.magic + 1);
  uStack_40 = 8;
  pcStack_38 = "trailers";
  puVar18 = &DAT_0091e112;
  pppppppuVar12 = (uint *******)&pppppppuStack_48;
  uVar19 = 2;
  uVar20 = 0x2a;
  FUN_00390368();
  pppppppuVar10 = pppppppuStack_48;
  if ((uint *******)((long)&MACH_HEADER.magic + 1) < pppppppuStack_48) {
    do {
      ppppppuVar21 = *pppppppuStack_48;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pppppppuStack_48,0x10);
      if (bVar2) {
        *pppppppuStack_48 = (uint ******)((long)ppppppuVar21 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((uint ******)((long)ppppppuVar21 + -1) == (uint ******)0x0) {
      (*(code *)pppppppuStack_48[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return pppppppuVar10;
  }
  ___stack_chk_fail();
  if ((int)pppppppuVar9 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&pppppppuStack_48);
    __Unwind_Resume();
  }
  __Unwind_Resume();
  pcStack_58 = FUN_00390368;
  lStack_98 = *(long *)PTR____stack_chk_guard_00999f88;
  pppppppuVar11 = (uint *******)(pppppppuVar10[4] + 1);
  uVar16 = *(uint *)pppppppuVar9;
  puStack_60 = &stack0xfffffffffffffff0;
  if (*(uint *)pppppppuVar11 < uVar16) {
    pppppppuVar15 = pppppppuVar9;
    pppppppuVar12 = unaff_x20;
    pppppppuVar9 = unaff_x23;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_98) {
      iVar13 = (*(uint *)pppppppuVar11 - uVar16) + *(int *)(pppppppuVar10[4] + 2);
      uVar16 = iVar13 + 0x3e;
      uVar24 = iVar13 - 0x41;
      if (uVar16 < 0x7f) {
        pppppppuVar9 = (uint *******)((long)&MACH_HEADER.magic + 1);
      }
      else {
        pppppppuVar9 = (uint *******)(ulong)uVar24;
        FUN_0039d54c();
      }
      func_0x0038e884(pppppppuVar10,(ulong)pppppppuVar9 & 0xffffffff);
      pppppppuVar12 = (uint *******)pppppppuVar10[2];
      pppppppuVar10[3][2] =
           (uint *****)((long)pppppppuVar10[3][2] + ((ulong)pppppppuVar9 & 0xffffffff));
      func_0x003ed000(pppppppuVar12,(ulong)pppppppuVar9 & 0xffffffff);
      if ((int)pppppppuVar9 == 1) {
        *(byte *)pppppppuVar12 = (byte)uVar16 | 0x80;
        return pppppppuVar12;
      }
      pbVar14 = (byte *)((long)pppppppuVar12 + 1);
      *(byte *)pppppppuVar12 = 0xff;
      uVar16 = (int)pppppppuVar9 - 2;
      switch((ulong)uVar16) {
      case 4:
        *(byte *)((long)pppppppuVar12 + 5) = (byte)(uVar24 >> 0x1c) | 0x80;
      case 3:
        *(byte *)((long)pppppppuVar12 + 4) = (byte)(uVar24 >> 0x15) | 0x80;
      case 2:
        *(byte *)((long)pppppppuVar12 + 3) = (byte)(uVar24 >> 0xe) | 0x80;
      case 1:
        *(byte *)((long)pppppppuVar12 + 2) = (byte)(uVar24 >> 7) | 0x80;
      case 0:
        *pbVar14 = (byte)uVar24 | 0x80;
      default:
        pbVar14[uVar16] = pbVar14[uVar16] & 0x7f;
        return (uint *******)(ulong)uVar24;
      }
    }
  }
  else {
    FUN_00392064(pppppppuVar11,uVar20 & 0xffffffff);
    *(uint *)pppppppuVar9 = (uint)pppppppuVar11;
    pppppppuStack_b8 = (uint *******)((long)&MACH_HEADER.magic + 1);
    ppppppuStack_d8 = pppppppuVar12[1];
    ppppppuStack_e0 = *pppppppuVar12;
    ppppppuStack_c8 = pppppppuVar12[3];
    ppppppuStack_d0 = pppppppuVar12[2];
    pppppppuVar12[1] = (uint ******)0x0;
    *pppppppuVar12 = (uint ******)0x0;
    pppppppuVar12[3] = (uint ******)0x0;
    pppppppuVar12[2] = (uint ******)0x0;
    pppppppuVar15 = (uint *******)&pppppppuStack_b8;
    uStack_b0 = uVar19;
    puStack_a8 = puVar18;
    FUN_0038eb08(pppppppuVar10,pppppppuVar15,&ppppppuStack_e0);
    if ((uint ******)((long)&MACH_HEADER.magic + 1) < ppppppuStack_e0) {
      do {
        pppppuVar22 = *ppppppuStack_e0;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppppuStack_e0,0x10);
        if (bVar2) {
          *ppppppuStack_e0 = (uint *****)((long)pppppuVar22 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((uint *****)((long)pppppuVar22 + -1) == (uint *****)0x0) {
        (*(code *)ppppppuStack_e0[1])();
      }
    }
    pppppppuVar11 = pppppppuStack_b8;
    if ((uint *******)((long)&MACH_HEADER.magic + 1) < pppppppuStack_b8) {
      do {
        ppppppuVar21 = *pppppppuStack_b8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppppppuStack_b8,0x10);
        if (bVar2) {
          *pppppppuStack_b8 = (uint ******)((long)ppppppuVar21 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((uint ******)((long)ppppppuVar21 + -1) == (uint ******)0x0) {
        (*(code *)pppppppuStack_b8[1])();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_98) {
      return pppppppuVar11;
    }
  }
  iVar13 = (int)pppppppuVar15;
  ___stack_chk_fail();
  if (iVar13 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&ppppppuStack_e0);
    FUN_0034b418(&pppppppuStack_b8);
  }
  __Unwind_Resume();
  pcStack_e8 = FUN_003904e8;
  lVar23 = *(long *)PTR____stack_chk_guard_00999f88;
  ppuStack_f0 = &puStack_60;
  if (iVar13 == 0) {
    iVar13 = (int)pppppppuVar11[4] + 0x124;
    pppppppuStack_128 = (uint *******)((long)&MACH_HEADER.magic + 1);
    FUN_00390368();
    pppppppuVar11 = pppppppuStack_128;
    if ((uint *******)((long)&MACH_HEADER.magic + 1) < pppppppuStack_128) {
      do {
        ppppppuVar21 = *pppppppuStack_128;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppppppuStack_128,0x10);
        if (bVar2) {
          *pppppppuStack_128 = (uint ******)((long)ppppppuVar21 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((uint ******)((long)ppppppuVar21 + -1) == (uint ******)0x0) {
        (*(code *)pppppppuStack_128[1])();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lVar23) {
      return pppppppuVar11;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_00999f88 == lVar23) {
    pcVar26 = "Not encoding bad content-type header";
    uVar20 = 0x199;
    pppppppuStack_128 = *(uint ********)PTR____stack_chk_guard_00999f88;
    pppppppuVar12 = (uint *******)((long)&MACH_HEADER.magic + 2);
    FUN_00338e58();
    if ((int)pppppppuVar12 != 0) {
      ppppppuVar21 = (uint ******)appppppuStack_168;
      puStack_170 = (undefined1 *)&ppppppuStack_e0;
      _vsnprintf(ppppppuVar21,0x40,"Not encoding bad content-type header",&ppppppuStack_e0);
      if ((int)(uint)ppppppuVar21 < 0) {
        pppppppuVar9 = (uint *******)0x0;
        pcVar26 = (char *)0x0;
      }
      else {
        unaff_x24 = ppppppuVar21;
        if ((uint)ppppppuVar21 < 0x40) {
          pcVar26 = (char *)0x0;
          pppppppuVar9 = appppppuStack_168;
        }
        else {
          pcVar26 = (char *)(((ulong)ppppppuVar21 & 0xffffffff) + 1);
          FUN_00338c74();
          puStack_170 = (undefined1 *)&ppppppuStack_e0;
          _vsnprintf();
          pppppppuVar9 = (uint *******)pcVar26;
        }
      }
      uVar20 = 0x199;
      FUN_00338e80("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/hpack_encoder.cc"
                   ,0x199,2,pppppppuVar9);
      pppppppuVar12 = (uint *******)pcVar26;
      FUN_00338cb8();
    }
    if ((uint *******)*(uint *******)PTR____stack_chk_guard_00999f88 == pppppppuStack_128) {
      return pppppppuVar12;
    }
    ___stack_chk_fail();
    pcStack_198 = 
    "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/hpack_encoder.cc"
    ;
    uStack_190 = 0x199;
    uStack_188 = 2;
    pcStack_178 = FUN_00339178;
    lStack_1b8 = *(long *)PTR____stack_chk_guard_00999f88;
    uVar19 = 1;
    ppppppuStack_1b0 = unaff_x24;
    pppppppuStack_1a8 = pppppppuVar9;
    pppppppuStack_1a0 = (uint *******)pcVar26;
    pppuStack_180 = &ppuStack_f0;
    FUN_0033a598();
    ppppppuVar21 = *pppppppuVar12;
    ppppppuVar4 = ppppppuVar21;
    uStack_268 = uVar19;
    _strrchr(ppppppuVar21,0x2f);
    if (ppppppuVar4 != (uint ******)0x0) {
      ppppppuVar21 = (uint ******)((long)ppppppuVar4 + 1);
    }
    puVar5 = &uStack_268;
    _localtime_r(puVar5,auStack_2a0);
    if (puVar5 == (undefined8 *)0x0) {
      uStack_258 = 0x656d69746c6163;
      uStack_251 = 0;
      uStack_260 = 0x6c3a726f727265;
      uStack_259 = 0x6f;
    }
    else {
      puVar6 = &uStack_260;
      _strftime(puVar6,0x40,"%m%d %H:%M:%S",auStack_2a0);
      if (puVar6 == (undefined7 *)0x0) {
        uStack_260 = 0x733a726f727265;
        uStack_259 = 0x74;
        uStack_258 = 0x656d69746672;
      }
    }
    uVar7 = (ulong)*(uint *)((long)pppppppuVar12 + 0xc);
    func_0x00338e1c();
    uVar8 = uVar7;
    _pthread_self();
    auStack_218[1] = 0x560e98;
    puStack_208 = &uStack_260;
    uStack_200 = 0x560e98;
    uStack_1f8 = uVar20 & 0xffffffff;
    uStack_1f0 = 0x5606ac;
    pcStack_1e0 = FUN_00560738;
    uStack_1d0 = 0x560e98;
    uStack_1c8 = (ulong)*(uint *)(pppppppuVar12 + 1);
    uStack_1c0 = 0x5606ac;
    puVar17 = auStack_218;
    auStack_218[0] = uVar7;
    uStack_1e8 = uVar8;
    ppppppuStack_1d8 = ppppppuVar21;
    FUN_0056189c(apppppppuStack_2b8,"%s%s.%09d %7ld %s:%d]",0x15,puVar17,6);
    uVar16 = *(uint *)((long)pppppppuVar12 + 0xc);
    func_0x00338e6c();
    if (uVar16 == 0) {
      auStack_218[0] = auStack_218[0] & 0xffffffffffffff00;
      uStack_200 = uStack_200 & 0xffffffffffffff00;
LAB_00339300:
      pppppppuVar9 = *(uint ********)PTR____stderrp_00999f90;
      pcVar26 = "%-70s %s\n";
    }
    else {
      FUN_0033a7d8(auStack_218);
      if ((char)uStack_200 == '\0') goto LAB_00339300;
      pppppppuVar9 = *(uint ********)PTR____stderrp_00999f90;
      pcVar26 = "%-70s %s\n%s\n";
    }
    _fprintf();
    if (cStack_2a1 < '\0') {
      pppppppuVar9 = apppppppuStack_2b8[0];
      __ZdlPv();
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1b8) {
      return pppppppuVar9;
    }
    ___stack_chk_fail();
    if (cStack_2a1 < '\0') {
      __ZdlPv(apppppppuStack_2b8[0]);
    }
    __Unwind_Resume();
    uVar16 = (uint)puVar17;
    if ((char *)0x3 < pcVar26) {
      uVar20 = (ulong)pcVar26 >> 2;
      pppppppuVar12 = pppppppuVar9;
      do {
        uVar16 = (*(int *)pppppppuVar12 * 0x16a88000 |
                 (uint)(*(int *)pppppppuVar12 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ (uint)puVar17;
        uVar16 = (uVar16 >> 0x13 | uVar16 << 0xd) * 5 + 0xe6546b64;
        puVar17 = (ulong *)(ulong)uVar16;
        uVar20 = uVar20 - 1;
        pppppppuVar12 = (uint *******)((long)pppppppuVar12 + 4);
      } while (uVar20 != 0);
      pppppppuVar9 = (uint *******)((long)pppppppuVar9 + ((ulong)pcVar26 & 0xfffffffffffffffc));
    }
    uVar24 = 0;
    uVar20 = (ulong)pcVar26 & 3;
    if (uVar20 != 1) {
      if (uVar20 != 2) {
        if (uVar20 != 3) goto LAB_00339464;
        uVar24 = (uint)*(byte *)((long)pppppppuVar9 + 2) << 0x10;
      }
      uVar24 = uVar24 | (uint)*(byte *)((long)pppppppuVar9 + 1) << 8;
    }
    uVar16 = ((uVar24 ^ *(byte *)pppppppuVar9) * 0x16a88000 |
             (uVar24 ^ *(byte *)pppppppuVar9) * -0x3361d2af >> 0x11) * 0x1b873593 ^ uVar16;
LAB_00339464:
    uVar16 = uVar16 ^ (uint)pcVar26;
    uVar16 = (uVar16 ^ uVar16 >> 0x10) * -0x7a143595;
    uVar16 = (uVar16 ^ uVar16 >> 0xd) * -0x3d4d51cb;
    return (uint *******)(ulong)(uVar16 ^ uVar16 >> 0x10);
  }
  ___stack_chk_fail();
  if (iVar13 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&pppppppuStack_128);
  }
  pppppppuVar9 = pppppppuVar11;
  __Unwind_Resume();
  pcStack_138 = FUN_003905fc;
  pppppppuStack_150 = pppppppuVar12;
  pppppppuStack_148 = pppppppuVar11;
  pppuStack_140 = &ppuStack_f0;
  if (iVar13 != 0) {
    if (iVar13 == 1) {
      uVar25 = 0x87;
      goto LAB_00390630;
    }
    if (iVar13 != 2) {
      return pppppppuVar9;
    }
    func_0x0077302c();
  }
  uVar25 = 0x86;
LAB_00390630:
  func_0x0038e884(pppppppuVar9,1);
  pppppppuVar12 = (uint *******)pppppppuVar9[2];
  pppppppuVar9[3][2] = (uint *****)((long)pppppppuVar9[3][2] + 1);
  func_0x003ed000(pppppppuVar12,1);
  *(undefined1 *)pppppppuVar12 = uVar25;
  return pppppppuVar12;
}



/* Entry: 00390368; end: 003904e7;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */
/* WARNING: Type propagation algorithm not settling */

uint *******
FUN_00390368(long param_1,uint *******param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5,undefined4 param_6)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  uint ******ppppppuVar4;
  undefined8 *puVar5;
  undefined7 *puVar6;
  ulong uVar7;
  ulong uVar8;
  uint *******pppppppuVar9;
  uint *******pppppppuVar10;
  int iVar11;
  byte *pbVar12;
  ulong uVar13;
  uint uVar14;
  ulong *puVar15;
  long lVar16;
  uint uVar17;
  undefined1 uVar18;
  undefined8 *unaff_x20;
  uint ******ppppppuVar19;
  char *pcVar20;
  uint *******unaff_x23;
  uint ******unaff_x24;
  uint *******apppppppuStack_268 [2];
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
  uint ******ppppppuStack_188;
  undefined8 uStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  uint ******ppppppuStack_160;
  uint *******pppppppuStack_158;
  uint *******pppppppuStack_150;
  char *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined1 *puStack_120;
  uint ******appppppuStack_118 [3];
  undefined8 *puStack_100;
  uint *******pppppppuStack_f8;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  uint *******pppppppuStack_d8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  uint *******pppppppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pppppppuVar9 = (uint *******)(*(long *)(param_1 + 0x20) + 8);
  uVar14 = *(uint *)param_2;
  if (*(uint *)pppppppuVar9 < uVar14) {
    pppppppuVar10 = param_2;
    param_5 = unaff_x20;
    param_2 = unaff_x23;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
      iVar11 = (*(uint *)pppppppuVar9 - uVar14) + *(int *)(*(long *)(param_1 + 0x20) + 0x10);
      uVar14 = iVar11 + 0x3e;
      uVar17 = iVar11 - 0x41;
      if (uVar14 < 0x7f) {
        pppppppuVar9 = (uint *******)((long)&MACH_HEADER.magic + 1);
      }
      else {
        pppppppuVar9 = (uint *******)(ulong)uVar17;
        FUN_0039d54c();
      }
      func_0x0038e884(param_1,(ulong)pppppppuVar9 & 0xffffffff);
      pppppppuVar10 = *(uint ********)(param_1 + 0x10);
      *(ulong *)(*(long *)(param_1 + 0x18) + 0x10) =
           *(long *)(*(long *)(param_1 + 0x18) + 0x10) + ((ulong)pppppppuVar9 & 0xffffffff);
      func_0x003ed000(pppppppuVar10,(ulong)pppppppuVar9 & 0xffffffff);
      if ((int)pppppppuVar9 == 1) {
        *(byte *)pppppppuVar10 = (byte)uVar14 | 0x80;
        return pppppppuVar10;
      }
      pbVar12 = (byte *)((long)pppppppuVar10 + 1);
      *(byte *)pppppppuVar10 = 0xff;
      uVar14 = (int)pppppppuVar9 - 2;
      switch((ulong)uVar14) {
      case 4:
        *(byte *)((long)pppppppuVar10 + 5) = (byte)(uVar17 >> 0x1c) | 0x80;
      case 3:
        *(byte *)((long)pppppppuVar10 + 4) = (byte)(uVar17 >> 0x15) | 0x80;
      case 2:
        *(byte *)((long)pppppppuVar10 + 3) = (byte)(uVar17 >> 0xe) | 0x80;
      case 1:
        *(byte *)((long)pppppppuVar10 + 2) = (byte)(uVar17 >> 7) | 0x80;
      case 0:
        *pbVar12 = (byte)uVar17 | 0x80;
      default:
        pbVar12[uVar14] = pbVar12[uVar14] & 0x7f;
        return (uint *******)(ulong)uVar17;
      }
    }
  }
  else {
    FUN_00392064(pppppppuVar9,param_6);
    *(uint *)param_2 = (uint)pppppppuVar9;
    pppppppuStack_68 = (uint *******)((long)&MACH_HEADER.magic + 1);
    uStack_88 = param_5[1];
    plStack_90 = (long *)*param_5;
    uStack_78 = param_5[3];
    uStack_80 = param_5[2];
    param_5[1] = 0;
    *param_5 = 0;
    param_5[3] = 0;
    param_5[2] = 0;
    pppppppuVar10 = (uint *******)&pppppppuStack_68;
    uStack_60 = param_4;
    uStack_58 = param_3;
    FUN_0038eb08(param_1,pppppppuVar10,&plStack_90);
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_90) {
      do {
        lVar16 = *plStack_90;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
        if (bVar2) {
          *plStack_90 = lVar16 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar16 + -1 == 0) {
        (*(code *)plStack_90[1])();
      }
    }
    pppppppuVar9 = pppppppuStack_68;
    if ((uint *******)((long)&MACH_HEADER.magic + 1) < pppppppuStack_68) {
      do {
        ppppppuVar19 = *pppppppuStack_68;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppppppuStack_68,0x10);
        if (bVar2) {
          *pppppppuStack_68 = (uint ******)((long)ppppppuVar19 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((uint ******)((long)ppppppuVar19 + -1) == (uint ******)0x0) {
        (*(code *)pppppppuStack_68[1])();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
      return pppppppuVar9;
    }
  }
  iVar11 = (int)pppppppuVar10;
  ___stack_chk_fail();
  if (iVar11 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_90);
    FUN_0034b418(&pppppppuStack_68);
  }
  __Unwind_Resume();
  pcStack_98 = FUN_003904e8;
  lVar16 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_a0 = &stack0xfffffffffffffff0;
  if (iVar11 == 0) {
    iVar11 = (int)pppppppuVar9[4] + 0x124;
    pppppppuStack_d8 = (uint *******)((long)&MACH_HEADER.magic + 1);
    FUN_00390368();
    pppppppuVar9 = pppppppuStack_d8;
    if ((uint *******)((long)&MACH_HEADER.magic + 1) < pppppppuStack_d8) {
      do {
        ppppppuVar19 = *pppppppuStack_d8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppppppuStack_d8,0x10);
        if (bVar2) {
          *pppppppuStack_d8 = (uint ******)((long)ppppppuVar19 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((uint ******)((long)ppppppuVar19 + -1) == (uint ******)0x0) {
        (*(code *)pppppppuStack_d8[1])();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lVar16) {
      return pppppppuVar9;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_00999f88 == lVar16) {
    pcVar20 = "Not encoding bad content-type header";
    uVar13 = 0x199;
    pppppppuStack_d8 = *(uint ********)PTR____stack_chk_guard_00999f88;
    pppppppuVar9 = (uint *******)((long)&MACH_HEADER.magic + 2);
    FUN_00338e58();
    if ((int)pppppppuVar9 != 0) {
      ppppppuVar19 = (uint ******)appppppuStack_118;
      puStack_120 = (undefined1 *)&plStack_90;
      _vsnprintf(ppppppuVar19,0x40,"Not encoding bad content-type header",&plStack_90);
      if ((int)(uint)ppppppuVar19 < 0) {
        param_2 = (uint *******)0x0;
        pcVar20 = (char *)0x0;
      }
      else {
        unaff_x24 = ppppppuVar19;
        if ((uint)ppppppuVar19 < 0x40) {
          pcVar20 = (char *)0x0;
          param_2 = appppppuStack_118;
        }
        else {
          pcVar20 = (char *)(((ulong)ppppppuVar19 & 0xffffffff) + 1);
          FUN_00338c74();
          puStack_120 = (undefined1 *)&plStack_90;
          _vsnprintf();
          param_2 = (uint *******)pcVar20;
        }
      }
      uVar13 = 0x199;
      FUN_00338e80("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/hpack_encoder.cc"
                   ,0x199,2,param_2);
      pppppppuVar9 = (uint *******)pcVar20;
      FUN_00338cb8();
    }
    if ((uint *******)*(uint *******)PTR____stack_chk_guard_00999f88 == pppppppuStack_d8) {
      return pppppppuVar9;
    }
    ___stack_chk_fail();
    pcStack_148 = 
    "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/hpack_encoder.cc"
    ;
    uStack_140 = 0x199;
    uStack_138 = 2;
    pcStack_128 = FUN_00339178;
    lStack_168 = *(long *)PTR____stack_chk_guard_00999f88;
    uVar3 = 1;
    ppppppuStack_160 = unaff_x24;
    pppppppuStack_158 = param_2;
    pppppppuStack_150 = (uint *******)pcVar20;
    ppuStack_130 = &puStack_a0;
    FUN_0033a598();
    ppppppuVar19 = *pppppppuVar9;
    ppppppuVar4 = ppppppuVar19;
    uStack_218 = uVar3;
    _strrchr(ppppppuVar19,0x2f);
    if (ppppppuVar4 != (uint ******)0x0) {
      ppppppuVar19 = (uint ******)((long)ppppppuVar4 + 1);
    }
    puVar5 = &uStack_218;
    _localtime_r(puVar5,auStack_250);
    if (puVar5 == (undefined8 *)0x0) {
      uStack_208 = 0x656d69746c6163;
      uStack_201 = 0;
      uStack_210 = 0x6c3a726f727265;
      uStack_209 = 0x6f;
    }
    else {
      puVar6 = &uStack_210;
      _strftime(puVar6,0x40,"%m%d %H:%M:%S",auStack_250);
      if (puVar6 == (undefined7 *)0x0) {
        uStack_210 = 0x733a726f727265;
        uStack_209 = 0x74;
        uStack_208 = 0x656d69746672;
      }
    }
    uVar7 = (ulong)*(uint *)((long)pppppppuVar9 + 0xc);
    func_0x00338e1c();
    uVar8 = uVar7;
    _pthread_self();
    auStack_1c8[1] = 0x560e98;
    puStack_1b8 = &uStack_210;
    uStack_1b0 = 0x560e98;
    uStack_1a8 = uVar13 & 0xffffffff;
    uStack_1a0 = 0x5606ac;
    pcStack_190 = FUN_00560738;
    uStack_180 = 0x560e98;
    uStack_178 = (ulong)*(uint *)(pppppppuVar9 + 1);
    uStack_170 = 0x5606ac;
    puVar15 = auStack_1c8;
    auStack_1c8[0] = uVar7;
    uStack_198 = uVar8;
    ppppppuStack_188 = ppppppuVar19;
    FUN_0056189c(apppppppuStack_268,"%s%s.%09d %7ld %s:%d]",0x15,puVar15,6);
    uVar14 = *(uint *)((long)pppppppuVar9 + 0xc);
    func_0x00338e6c();
    if (uVar14 == 0) {
      auStack_1c8[0] = auStack_1c8[0] & 0xffffffffffffff00;
      uStack_1b0 = uStack_1b0 & 0xffffffffffffff00;
LAB_00339300:
      pppppppuVar9 = *(uint ********)PTR____stderrp_00999f90;
      pcVar20 = "%-70s %s\n";
    }
    else {
      FUN_0033a7d8(auStack_1c8);
      if ((char)uStack_1b0 == '\0') goto LAB_00339300;
      pppppppuVar9 = *(uint ********)PTR____stderrp_00999f90;
      pcVar20 = "%-70s %s\n%s\n";
    }
    _fprintf();
    if (cStack_251 < '\0') {
      pppppppuVar9 = apppppppuStack_268[0];
      __ZdlPv();
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_168) {
      return pppppppuVar9;
    }
    ___stack_chk_fail();
    if (cStack_251 < '\0') {
      __ZdlPv(apppppppuStack_268[0]);
    }
    __Unwind_Resume();
    uVar14 = (uint)puVar15;
    if ((char *)0x3 < pcVar20) {
      uVar13 = (ulong)pcVar20 >> 2;
      pppppppuVar10 = pppppppuVar9;
      do {
        uVar14 = (*(int *)pppppppuVar10 * 0x16a88000 |
                 (uint)(*(int *)pppppppuVar10 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ (uint)puVar15;
        uVar14 = (uVar14 >> 0x13 | uVar14 << 0xd) * 5 + 0xe6546b64;
        puVar15 = (ulong *)(ulong)uVar14;
        uVar13 = uVar13 - 1;
        pppppppuVar10 = (uint *******)((long)pppppppuVar10 + 4);
      } while (uVar13 != 0);
      pppppppuVar9 = (uint *******)((long)pppppppuVar9 + ((ulong)pcVar20 & 0xfffffffffffffffc));
    }
    uVar17 = 0;
    uVar13 = (ulong)pcVar20 & 3;
    if (uVar13 != 1) {
      if (uVar13 != 2) {
        if (uVar13 != 3) goto LAB_00339464;
        uVar17 = (uint)*(byte *)((long)pppppppuVar9 + 2) << 0x10;
      }
      uVar17 = uVar17 | (uint)*(byte *)((long)pppppppuVar9 + 1) << 8;
    }
    uVar14 = ((uVar17 ^ *(byte *)pppppppuVar9) * 0x16a88000 |
             (uVar17 ^ *(byte *)pppppppuVar9) * -0x3361d2af >> 0x11) * 0x1b873593 ^ uVar14;
LAB_00339464:
    uVar14 = uVar14 ^ (uint)pcVar20;
    uVar14 = (uVar14 ^ uVar14 >> 0x10) * -0x7a143595;
    uVar14 = (uVar14 ^ uVar14 >> 0xd) * -0x3d4d51cb;
    return (uint *******)(ulong)(uVar14 ^ uVar14 >> 0x10);
  }
  ___stack_chk_fail();
  if (iVar11 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&pppppppuStack_d8);
  }
  pppppppuVar10 = pppppppuVar9;
  __Unwind_Resume();
  pcStack_e8 = FUN_003905fc;
  puStack_100 = param_5;
  pppppppuStack_f8 = pppppppuVar9;
  ppuStack_f0 = &puStack_a0;
  if (iVar11 != 0) {
    if (iVar11 == 1) {
      uVar18 = 0x87;
      goto LAB_00390630;
    }
    if (iVar11 != 2) {
      return pppppppuVar10;
    }
    func_0x0077302c();
  }
  uVar18 = 0x86;
LAB_00390630:
  func_0x0038e884(pppppppuVar10,1);
  pppppppuVar9 = (uint *******)pppppppuVar10[2];
  pppppppuVar10[3][2] = (uint *****)((long)pppppppuVar10[3][2] + 1);
  func_0x003ed000(pppppppuVar9,1);
  *(undefined1 *)pppppppuVar9 = uVar18;
  return pppppppuVar9;
}



/* Entry: 003904e8; end: 003905fb;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_003904e8(byte *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined7 *puVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  uint uVar10;
  ulong *puVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  byte *pbVar15;
  byte bVar16;
  char *pcVar17;
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
  char *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  byte abStack_88 [24];
  byte *pbStack_48;
  
  lVar12 = *(long *)PTR____stack_chk_guard_00999f88;
  if (param_2 == 0) {
    lVar13 = *(long *)(param_1 + 0x20) + 0x124;
    pbStack_48 = (byte *)((long)&MACH_HEADER.magic + 1);
    FUN_00390368(param_1,lVar13,"content-type",0xc,&pbStack_48,0x3c);
    param_2 = (int)lVar13;
    param_1 = pbStack_48;
    if ((byte *)((long)&MACH_HEADER.magic + 1) < pbStack_48) {
      do {
        lVar13 = *(long *)pbStack_48;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pbStack_48,0x10);
        if (bVar2) {
          *(long *)pbStack_48 = lVar13 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar13 + -1 == 0) {
        (**(code **)(pbStack_48 + 8))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lVar12) {
      return param_1;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_00999f88 == lVar12) {
    pcVar17 = "Not encoding bad content-type header";
    uVar9 = 0x199;
    pbStack_48 = *(byte **)PTR____stack_chk_guard_00999f88;
    pbVar8 = (byte *)((long)&MACH_HEADER.magic + 2);
    FUN_00338e58();
    if ((int)pbVar8 != 0) {
      pbVar8 = abStack_88;
      _vsnprintf(pbVar8,0x40,"Not encoding bad content-type header",&stack0x00000000);
      if ((int)(uint)pbVar8 < 0) {
        unaff_x23 = (byte *)0x0;
        pcVar17 = (char *)0x0;
      }
      else {
        unaff_x24 = pbVar8;
        if ((uint)pbVar8 < 0x40) {
          pcVar17 = (char *)0x0;
          unaff_x23 = abStack_88;
        }
        else {
          pcVar17 = (char *)(((ulong)pbVar8 & 0xffffffff) + 1);
          FUN_00338c74();
          _vsnprintf();
          unaff_x23 = (byte *)pcVar17;
        }
      }
      uVar9 = 0x199;
      FUN_00338e80("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/hpack_encoder.cc"
                   ,0x199,2,unaff_x23);
      pbVar8 = (byte *)pcVar17;
      FUN_00338cb8();
    }
    if (*(byte **)PTR____stack_chk_guard_00999f88 == pbStack_48) {
      return pbVar8;
    }
    ___stack_chk_fail();
    pcStack_b8 = 
    "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/hpack_encoder.cc"
    ;
    uStack_b0 = 0x199;
    uStack_a8 = 2;
    pcStack_98 = FUN_00339178;
    lStack_d8 = *(long *)PTR____stack_chk_guard_00999f88;
    uVar3 = 1;
    pbStack_d0 = unaff_x24;
    pbStack_c8 = unaff_x23;
    pbStack_c0 = (byte *)pcVar17;
    puStack_a0 = &stack0xfffffffffffffff0;
    FUN_0033a598();
    lVar12 = *(long *)pbVar8;
    lVar13 = lVar12;
    uStack_188 = uVar3;
    _strrchr(lVar12,0x2f);
    if (lVar13 != 0) {
      lVar12 = lVar13 + 1;
    }
    puVar4 = &uStack_188;
    _localtime_r(puVar4,auStack_1c0);
    if (puVar4 == (undefined8 *)0x0) {
      uStack_178 = 0x656d69746c6163;
      uStack_171 = 0;
      uStack_180 = 0x6c3a726f727265;
      uStack_179 = 0x6f;
    }
    else {
      puVar5 = &uStack_180;
      _strftime(puVar5,0x40,"%m%d %H:%M:%S",auStack_1c0);
      if (puVar5 == (undefined7 *)0x0) {
        uStack_180 = 0x733a726f727265;
        uStack_179 = 0x74;
        uStack_178 = 0x656d69746672;
      }
    }
    uVar6 = (ulong)*(uint *)(pbVar8 + 0xc);
    func_0x00338e1c();
    uVar7 = uVar6;
    _pthread_self();
    auStack_138[1] = 0x560e98;
    puStack_128 = &uStack_180;
    uStack_120 = 0x560e98;
    uStack_118 = uVar9 & 0xffffffff;
    uStack_110 = 0x5606ac;
    pcStack_100 = FUN_00560738;
    uStack_f0 = 0x560e98;
    uStack_e8 = (ulong)*(uint *)(pbVar8 + 8);
    uStack_e0 = 0x5606ac;
    puVar11 = auStack_138;
    auStack_138[0] = uVar6;
    uStack_108 = uVar7;
    lStack_f8 = lVar12;
    FUN_0056189c(apbStack_1d8,"%s%s.%09d %7ld %s:%d]",0x15,puVar11,6);
    uVar10 = *(uint *)(pbVar8 + 0xc);
    func_0x00338e6c();
    if (uVar10 == 0) {
      auStack_138[0] = auStack_138[0] & 0xffffffffffffff00;
      uStack_120 = uStack_120 & 0xffffffffffffff00;
LAB_00339300:
      pbVar8 = *(byte **)PTR____stderrp_00999f90;
      pcVar17 = "%-70s %s\n";
    }
    else {
      FUN_0033a7d8(auStack_138);
      if ((char)uStack_120 == '\0') goto LAB_00339300;
      pbVar8 = *(byte **)PTR____stderrp_00999f90;
      pcVar17 = "%-70s %s\n%s\n";
    }
    _fprintf();
    if (cStack_1c1 < '\0') {
      pbVar8 = apbStack_1d8[0];
      __ZdlPv();
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_d8) {
      return pbVar8;
    }
    ___stack_chk_fail();
    if (cStack_1c1 < '\0') {
      __ZdlPv(apbStack_1d8[0]);
    }
    __Unwind_Resume();
    uVar10 = (uint)puVar11;
    if ((char *)0x3 < pcVar17) {
      uVar9 = (ulong)pcVar17 >> 2;
      pbVar15 = pbVar8;
      do {
        uVar10 = (*(int *)pbVar15 * 0x16a88000 | (uint)(*(int *)pbVar15 * -0x3361d2af) >> 0x11) *
                 0x1b873593 ^ (uint)puVar11;
        uVar10 = (uVar10 >> 0x13 | uVar10 << 0xd) * 5 + 0xe6546b64;
        puVar11 = (ulong *)(ulong)uVar10;
        uVar9 = uVar9 - 1;
        pbVar15 = pbVar15 + 4;
      } while (uVar9 != 0);
      pbVar8 = pbVar8 + ((ulong)pcVar17 & 0xfffffffffffffffc);
    }
    uVar14 = 0;
    uVar9 = (ulong)pcVar17 & 3;
    if (uVar9 != 1) {
      if (uVar9 != 2) {
        if (uVar9 != 3) goto LAB_00339464;
        uVar14 = (uint)pbVar8[2] << 0x10;
      }
      uVar14 = uVar14 | (uint)pbVar8[1] << 8;
    }
    uVar10 = ((uVar14 ^ *pbVar8) * 0x16a88000 | (uVar14 ^ *pbVar8) * -0x3361d2af >> 0x11) *
             0x1b873593 ^ uVar10;
LAB_00339464:
    uVar10 = uVar10 ^ (uint)pcVar17;
    uVar10 = (uVar10 ^ uVar10 >> 0x10) * -0x7a143595;
    uVar10 = (uVar10 ^ uVar10 >> 0xd) * -0x3d4d51cb;
    return (byte *)(ulong)(uVar10 ^ uVar10 >> 0x10);
  }
  ___stack_chk_fail();
  if (param_2 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&pbStack_48);
  }
  __Unwind_Resume();
  if (param_2 != 0) {
    if (param_2 == 1) {
      bVar16 = 0x87;
      goto LAB_00390630;
    }
    if (param_2 != 2) {
      return param_1;
    }
    func_0x0077302c();
  }
  bVar16 = 0x86;
LAB_00390630:
  func_0x0038e884(param_1,1);
  pbVar8 = *(byte **)(param_1 + 0x10);
  *(long *)(*(long *)(param_1 + 0x18) + 0x10) = *(long *)(*(long *)(param_1 + 0x18) + 0x10) + 1;
  func_0x003ed000(pbVar8,1);
  *pbVar8 = bVar16;
  return pbVar8;
}



/* Entry: 003905fc; end: 00390663;  */

void FUN_003905fc(long param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  
  if (param_2 != 0) {
    if (param_2 == 1) {
      uVar2 = 0x87;
      goto LAB_00390630;
    }
    if (param_2 != 2) {
      return;
    }
    func_0x0077302c();
  }
  uVar2 = 0x86;
LAB_00390630:
  func_0x0038e884(param_1,1);
  puVar1 = *(undefined1 **)(param_1 + 0x10);
  *(long *)(*(long *)(param_1 + 0x18) + 0x10) = *(long *)(*(long *)(param_1 + 0x18) + 0x10) + 1;
  func_0x003ed000(puVar1,1);
  *puVar1 = uVar2;
  return;
}



/* Entry: 00390664; end: 0039073f;  */

void FUN_00390664(long param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  code *pcVar4;
  byte *pbVar5;
  uint *puVar6;
  long *plVar7;
  undefined1 *puVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  uint *puVar12;
  long **pplVar13;
  char *pcVar14;
  long lVar15;
  long **pplVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  undefined1 uVar20;
  long *plStack_228;
  undefined8 uStack_220;
  char *pcStack_218;
  long *plStack_208;
  undefined8 uStack_200;
  char *pcStack_1f8;
  long lStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  undefined8 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined1 auStack_1b8 [32];
  long lStack_198;
  undefined1 ***pppuStack_160;
  code *pcStack_158;
  long *plStack_150;
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  long lStack_128;
  long *plStack_120;
  long *plStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  long *plStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long *plStack_e0;
  long lStack_d8;
  char *pcStack_d0;
  long *plStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_98;
  undefined1 *puStack_60;
  code *pcStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  pplVar16 = &plStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar12 = (uint *)(*(long *)(param_1 + 0x20) + 0x184);
  plVar18 = (long *)*param_2;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar18) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar2) {
        *plVar18 = *plVar18 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_48 = param_2[1];
  plStack_50 = (long *)*param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  pcVar14 = "grpc-trace-bin";
  lVar15 = 0xe;
  FUN_00390740();
  plVar18 = plStack_50;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_50) {
    do {
      lVar17 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar17 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar17 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)puVar12 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_50);
  }
  __Unwind_Resume();
  puStack_60 = &stack0xfffffffffffffff0;
  pcStack_58 = FUN_00390740;
  lStack_98 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar6 = (uint *)(plVar18[4] + 8);
  if (*puVar6 < *puVar12) {
    pplVar13 = (long **)(ulong)((*puVar6 - *puVar12) + *(int *)(plVar18[4] + 0x10) + 0x3e);
    lStack_b8 = (long)pplVar16[1];
    plStack_c0 = *pplVar16;
    lStack_a8 = (long)pplVar16[3];
    lStack_b0 = (long)pplVar16[2];
    pplVar16[1] = (long *)0x0;
    *pplVar16 = (long *)0x0;
    pplVar16[3] = (long *)0x0;
    pplVar16[2] = (long *)0x0;
    FUN_0038f46c(plVar18,pplVar13,&plStack_c0);
    plVar18 = plStack_c0;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_c0) {
      do {
        lVar15 = *plStack_c0;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_c0,0x10);
        if (bVar2) {
          *plStack_c0 = lVar15 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar15 + -1 == 0) {
        (*(code *)plStack_c0[1])();
      }
    }
  }
  else {
    if (*pplVar16 == (long *)0x0) {
      uVar19 = (ulong)*(byte *)(pplVar16 + 1);
    }
    else {
      uVar19 = (ulong)pplVar16[1];
    }
    FUN_00392064(puVar6,lVar15 + uVar19 + 0x20);
    *puVar12 = (uint)puVar6;
    plStack_e0 = (long *)((long)&MACH_HEADER.magic + 1);
    lStack_d8 = lVar15;
    pcStack_d0 = pcVar14;
    lStack_f8 = (long)pplVar16[1];
    plStack_100 = *pplVar16;
    lStack_e8 = (long)pplVar16[3];
    lStack_f0 = (long)pplVar16[2];
    pplVar16[1] = (long *)0x0;
    *pplVar16 = (long *)0x0;
    pplVar16[3] = (long *)0x0;
    pplVar16[2] = (long *)0x0;
    pplVar13 = &plStack_e0;
    FUN_0038f13c(plVar18,pplVar13,&plStack_100);
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_100) {
      do {
        lVar15 = *plStack_100;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_100,0x10);
        if (bVar2) {
          *plStack_100 = lVar15 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar15 + -1 == 0) {
        (*(code *)plStack_100[1])();
      }
    }
    plVar18 = plStack_e0;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_e0) {
      do {
        lVar15 = *plStack_e0;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_e0,0x10);
        if (bVar2) {
          *plStack_e0 = lVar15 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar15 + -1 == 0) {
        (*(code *)plStack_e0[1])();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar13 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_100);
    FUN_0034b418(&plStack_e0);
  }
  plVar7 = plVar18;
  __Unwind_Resume();
  plStack_120 = (long *)pplVar16;
  plStack_118 = plVar18;
  ppuStack_110 = &puStack_60;
  pcStack_108 = FUN_003908fc;
  lStack_128 = *(long *)PTR____stack_chk_guard_00999f88;
  iVar9 = (int)plVar7[4] + 0x180;
  plVar18 = *pplVar13;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar18) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar2) {
        *plVar18 = *plVar18 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plStack_148 = pplVar13[1];
  plStack_150 = *pplVar13;
  plStack_138 = pplVar13[3];
  plStack_140 = pplVar13[2];
  FUN_00390740();
  plVar18 = plStack_150;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_150) {
    do {
      lVar15 = *plStack_150;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_150,0x10);
      if (bVar2) {
        *plStack_150 = lVar15 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar15 + -1 == 0) {
      (*(code *)plStack_150[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_128) {
    return;
  }
  ___stack_chk_fail();
  if (iVar9 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_150);
  }
  __Unwind_Resume();
  pcStack_158 = FUN_003909d8;
  lVar15 = *(long *)PTR____stack_chk_guard_00999f88;
  pppuStack_160 = &ppuStack_110;
  if (iVar9 < 0x130) {
    if (iVar9 != 200) {
      if (iVar9 == 0xcc) {
        uVar10 = 9;
      }
      else {
        if (iVar9 != 0xce) goto LAB_00390a8c;
        uVar10 = 10;
      }
      goto LAB_00390b0c;
    }
    func_0x0038e884(plVar18,1);
    plVar7 = (long *)plVar18[2];
    *(long *)(plVar18[3] + 0x10) = *(long *)(plVar18[3] + 0x10) + 1;
    uVar10 = 1;
    func_0x003ed000();
    *(undefined1 *)plVar7 = 0x88;
LAB_00390ad0:
    if (*(long *)PTR____stack_chk_guard_00999f88 == lVar15) {
      return;
    }
  }
  else {
    if (iVar9 < 0x194) {
      if (iVar9 == 0x130) {
        uVar10 = 0xb;
      }
      else {
        if (iVar9 != 400) {
LAB_00390a8c:
          lStack_198 = 1;
          FUN_0034eb70(auStack_1b8,iVar9);
          plVar7 = &lStack_198;
          FUN_0038eb08(plVar18,plVar7,auStack_1b8);
          uVar10 = (uint)plVar7;
          FUN_0034b418(auStack_1b8);
          plVar7 = &lStack_198;
          FUN_0034b418();
          goto LAB_00390ad0;
        }
        uVar10 = 0xc;
      }
    }
    else if (iVar9 == 0x194) {
      uVar10 = 0xd;
    }
    else {
      if (iVar9 != 500) goto LAB_00390a8c;
      uVar10 = 0xe;
    }
LAB_00390b0c:
    plVar7 = plVar18;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lVar15) {
      uVar3 = uVar10 - 0x7f;
      uVar19 = (ulong)uVar3;
      if (uVar10 < 0x7f) {
        uVar19 = 1;
      }
      else {
        FUN_0039d54c();
      }
      func_0x0038e884(plVar18,uVar19 & 0xffffffff);
      pbVar5 = (byte *)plVar18[2];
      *(ulong *)(plVar18[3] + 0x10) = *(long *)(plVar18[3] + 0x10) + (uVar19 & 0xffffffff);
      func_0x003ed000(pbVar5,uVar19 & 0xffffffff);
      if ((int)uVar19 != 1) {
        pbVar11 = pbVar5 + 1;
        *pbVar5 = 0xff;
        uVar10 = (int)uVar19 - 2;
        switch((ulong)uVar10) {
        case 4:
          pbVar5[5] = (byte)(uVar3 >> 0x1c) | 0x80;
        case 3:
          pbVar5[4] = (byte)(uVar3 >> 0x15) | 0x80;
        case 2:
          pbVar5[3] = (byte)(uVar3 >> 0xe) | 0x80;
        case 1:
          pbVar5[2] = (byte)(uVar3 >> 7) | 0x80;
        case 0:
          *pbVar11 = (byte)uVar3 | 0x80;
        default:
          pbVar11[uVar10] = pbVar11[uVar10] & 0x7f;
          return;
        }
      }
      *pbVar5 = (byte)uVar10 | 0x80;
      return;
    }
  }
  ___stack_chk_fail();
  FUN_0034b418(auStack_1b8);
  FUN_0034b418(&lStack_198);
  plVar18 = plVar7;
  __Unwind_Resume();
  pcStack_1c8 = FUN_00390b60;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar20 = 0x83;
  plStack_1e0 = (long *)pplVar16;
  plStack_1d8 = plVar7;
  pppuStack_1d0 = &pppuStack_160;
  switch(uVar10) {
  case 1:
    uVar20 = 0x82;
  case 0:
    func_0x0038e884(plVar18,1);
    puVar8 = (undefined1 *)plVar18[2];
    *(long *)(plVar18[3] + 0x10) = *(long *)(plVar18[3] + 0x10) + 1;
    func_0x003ed000(puVar8,1);
    *puVar8 = uVar20;
    break;
  case 2:
    plStack_208 = (long *)((long)&MACH_HEADER.magic + 1);
    uStack_200 = 7;
    pcStack_1f8 = ":method";
    plStack_228 = (long *)((long)&MACH_HEADER.magic + 1);
    uStack_220 = 3;
    pcStack_218 = "PUT";
    FUN_0038f6a4(plVar18,&plStack_208,&plStack_228);
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_228) {
      do {
        lVar15 = *plStack_228;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_228,0x10);
        if (bVar2) {
          *plStack_228 = lVar15 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar15 + -1 == 0) {
        (*(code *)plStack_228[1])();
      }
    }
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_208) {
      do {
        lVar15 = *plStack_208;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_208,0x10);
        if (bVar2) {
          *plStack_208 = lVar15 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar15 + -1 == 0) {
        (*(code *)plStack_208[1])();
      }
    }
    break;
  case 3:
    goto code_r0x00390c94;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
code_r0x00390c94:
  func_0x00773060();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x390c9c);
  (*pcVar4)();
}



/* Entry: 00390740; end: 003908fb;  */

void FUN_00390740(long param_1,uint *param_2,undefined8 param_3,long param_4,long *param_5)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  code *pcVar4;
  byte *pbVar5;
  uint *puVar6;
  long *plVar7;
  undefined1 *puVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  long **pplVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  undefined1 uVar16;
  long *plStack_1d8;
  undefined8 uStack_1d0;
  char *pcStack_1c8;
  long *plStack_1b8;
  undefined8 uStack_1b0;
  char *pcStack_1a8;
  long lStack_198;
  long *plStack_190;
  long *plStack_188;
  undefined1 ***pppuStack_180;
  code *pcStack_178;
  undefined1 auStack_168 [32];
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long lStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  long *plStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long *plStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long *plStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar6 = (uint *)(*(long *)(param_1 + 0x20) + 8);
  if (*puVar6 < *param_2) {
    pplVar12 = (long **)(ulong)((*puVar6 - *param_2) + *(int *)(*(long *)(param_1 + 0x20) + 0x10) +
                               0x3e);
    lStack_68 = param_5[1];
    plStack_70 = (long *)*param_5;
    lStack_58 = param_5[3];
    lStack_60 = param_5[2];
    param_5[1] = 0;
    *param_5 = 0;
    param_5[3] = 0;
    param_5[2] = 0;
    FUN_0038f46c(param_1,pplVar12,&plStack_70);
    plVar14 = plStack_70;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_70) {
      do {
        lVar13 = *plStack_70;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
        if (bVar2) {
          *plStack_70 = lVar13 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar13 + -1 == 0) {
        (*(code *)plStack_70[1])();
      }
    }
  }
  else {
    if (*param_5 == 0) {
      uVar15 = (ulong)*(byte *)(param_5 + 1);
    }
    else {
      uVar15 = param_5[1];
    }
    FUN_00392064(puVar6,param_4 + uVar15 + 0x20);
    *param_2 = (uint)puVar6;
    plStack_90 = (long *)((long)&MACH_HEADER.magic + 1);
    lStack_a8 = param_5[1];
    plStack_b0 = (long *)*param_5;
    lStack_98 = param_5[3];
    lStack_a0 = param_5[2];
    param_5[1] = 0;
    *param_5 = 0;
    param_5[3] = 0;
    param_5[2] = 0;
    pplVar12 = &plStack_90;
    lStack_88 = param_4;
    uStack_80 = param_3;
    FUN_0038f13c(param_1,pplVar12,&plStack_b0);
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_b0) {
      do {
        lVar13 = *plStack_b0;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
        if (bVar2) {
          *plStack_b0 = lVar13 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar13 + -1 == 0) {
        (*(code *)plStack_b0[1])();
      }
    }
    plVar14 = plStack_90;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_90) {
      do {
        lVar13 = *plStack_90;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
        if (bVar2) {
          *plStack_90 = lVar13 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar13 + -1 == 0) {
        (*(code *)plStack_90[1])();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar12 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_b0);
    FUN_0034b418(&plStack_90);
  }
  plVar7 = plVar14;
  __Unwind_Resume();
  plStack_d0 = param_5;
  plStack_c8 = plVar14;
  puStack_c0 = &stack0xfffffffffffffff0;
  pcStack_b8 = FUN_003908fc;
  lStack_d8 = *(long *)PTR____stack_chk_guard_00999f88;
  iVar9 = (int)plVar7[4] + 0x180;
  plVar14 = *pplVar12;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar14) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar2) {
        *plVar14 = *plVar14 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plStack_f8 = pplVar12[1];
  plStack_100 = *pplVar12;
  plStack_e8 = pplVar12[3];
  plStack_f0 = pplVar12[2];
  FUN_00390740();
  plVar14 = plStack_100;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_100) {
    do {
      lVar13 = *plStack_100;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_100,0x10);
      if (bVar2) {
        *plStack_100 = lVar13 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar13 + -1 == 0) {
      (*(code *)plStack_100[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_d8) {
    return;
  }
  ___stack_chk_fail();
  if (iVar9 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_100);
  }
  __Unwind_Resume();
  pcStack_108 = FUN_003909d8;
  lVar13 = *(long *)PTR____stack_chk_guard_00999f88;
  ppuStack_110 = &puStack_c0;
  if (iVar9 < 0x130) {
    if (iVar9 != 200) {
      if (iVar9 == 0xcc) {
        uVar10 = 9;
      }
      else {
        if (iVar9 != 0xce) goto LAB_00390a8c;
        uVar10 = 10;
      }
      goto LAB_00390b0c;
    }
    func_0x0038e884(plVar14,1);
    plVar7 = (long *)plVar14[2];
    *(long *)(plVar14[3] + 0x10) = *(long *)(plVar14[3] + 0x10) + 1;
    uVar10 = 1;
    func_0x003ed000();
    *(undefined1 *)plVar7 = 0x88;
LAB_00390ad0:
    if (*(long *)PTR____stack_chk_guard_00999f88 == lVar13) {
      return;
    }
  }
  else {
    if (iVar9 < 0x194) {
      if (iVar9 == 0x130) {
        uVar10 = 0xb;
      }
      else {
        if (iVar9 != 400) {
LAB_00390a8c:
          lStack_148 = 1;
          FUN_0034eb70(auStack_168,iVar9);
          plVar7 = &lStack_148;
          FUN_0038eb08(plVar14,plVar7,auStack_168);
          uVar10 = (uint)plVar7;
          FUN_0034b418(auStack_168);
          plVar7 = &lStack_148;
          FUN_0034b418();
          goto LAB_00390ad0;
        }
        uVar10 = 0xc;
      }
    }
    else if (iVar9 == 0x194) {
      uVar10 = 0xd;
    }
    else {
      if (iVar9 != 500) goto LAB_00390a8c;
      uVar10 = 0xe;
    }
LAB_00390b0c:
    plVar7 = plVar14;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lVar13) {
      uVar3 = uVar10 - 0x7f;
      uVar15 = (ulong)uVar3;
      if (uVar10 < 0x7f) {
        uVar15 = 1;
      }
      else {
        FUN_0039d54c();
      }
      func_0x0038e884(plVar14,uVar15 & 0xffffffff);
      pbVar5 = (byte *)plVar14[2];
      *(ulong *)(plVar14[3] + 0x10) = *(long *)(plVar14[3] + 0x10) + (uVar15 & 0xffffffff);
      func_0x003ed000(pbVar5,uVar15 & 0xffffffff);
      if ((int)uVar15 != 1) {
        pbVar11 = pbVar5 + 1;
        *pbVar5 = 0xff;
        uVar10 = (int)uVar15 - 2;
        switch((ulong)uVar10) {
        case 4:
          pbVar5[5] = (byte)(uVar3 >> 0x1c) | 0x80;
        case 3:
          pbVar5[4] = (byte)(uVar3 >> 0x15) | 0x80;
        case 2:
          pbVar5[3] = (byte)(uVar3 >> 0xe) | 0x80;
        case 1:
          pbVar5[2] = (byte)(uVar3 >> 7) | 0x80;
        case 0:
          *pbVar11 = (byte)uVar3 | 0x80;
        default:
          pbVar11[uVar10] = pbVar11[uVar10] & 0x7f;
          return;
        }
      }
      *pbVar5 = (byte)uVar10 | 0x80;
      return;
    }
  }
  ___stack_chk_fail();
  FUN_0034b418(auStack_168);
  FUN_0034b418(&lStack_148);
  plVar14 = plVar7;
  __Unwind_Resume();
  pcStack_178 = FUN_00390b60;
  lStack_198 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar16 = 0x83;
  plStack_190 = param_5;
  plStack_188 = plVar7;
  pppuStack_180 = &ppuStack_110;
  switch(uVar10) {
  case 1:
    uVar16 = 0x82;
  case 0:
    func_0x0038e884(plVar14,1);
    puVar8 = (undefined1 *)plVar14[2];
    *(long *)(plVar14[3] + 0x10) = *(long *)(plVar14[3] + 0x10) + 1;
    func_0x003ed000(puVar8,1);
    *puVar8 = uVar16;
    break;
  case 2:
    plStack_1b8 = (long *)((long)&MACH_HEADER.magic + 1);
    uStack_1b0 = 7;
    pcStack_1a8 = ":method";
    plStack_1d8 = (long *)((long)&MACH_HEADER.magic + 1);
    uStack_1d0 = 3;
    pcStack_1c8 = "PUT";
    FUN_0038f6a4(plVar14,&plStack_1b8,&plStack_1d8);
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_1d8) {
      do {
        lVar13 = *plStack_1d8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_1d8,0x10);
        if (bVar2) {
          *plStack_1d8 = lVar13 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar13 + -1 == 0) {
        (*(code *)plStack_1d8[1])();
      }
    }
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_1b8) {
      do {
        lVar13 = *plStack_1b8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_1b8,0x10);
        if (bVar2) {
          *plStack_1b8 = lVar13 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar13 + -1 == 0) {
        (*(code *)plStack_1b8[1])();
      }
    }
    break;
  case 3:
    goto code_r0x00390c94;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
code_r0x00390c94:
  func_0x00773060();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x390c9c);
  (*pcVar4)();
}


