/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00375984; end: 003759df;  */

undefined8 * FUN_00375984(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = param_2[0x11];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  uVar6 = param_2[6];
  uVar8 = param_2[9];
  uVar7 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar6;
  param_1[9] = uVar8;
  param_1[8] = uVar7;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  uVar3 = param_2[0xb];
  uVar2 = param_2[10];
  uVar5 = param_2[0xd];
  uVar4 = param_2[0xc];
  uVar7 = param_2[0xf];
  uVar6 = param_2[0xe];
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  param_1[0xd] = uVar5;
  param_1[0xc] = uVar4;
  param_1[0xf] = uVar7;
  param_1[0xe] = uVar6;
  param_1[0xb] = uVar3;
  param_1[10] = uVar2;
  FUN_003a277c();
  param_1[0x11] = uVar1;
  return param_1;
}



/* Entry: 003759e0; end: 00375a1f;  */

void FUN_003759e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar5 = param_2[6];
  uVar7 = param_2[9];
  uVar6 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  param_1[9] = uVar7;
  param_1[8] = uVar6;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  uVar2 = param_2[0xb];
  uVar1 = param_2[10];
  uVar4 = param_2[0xd];
  uVar3 = param_2[0xc];
  uVar6 = param_2[0xf];
  uVar5 = param_2[0xe];
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar3;
  param_1[0xf] = uVar6;
  param_1[0xe] = uVar5;
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
  param_1[0x11] = param_2[0x11];
  param_2[0x11] = 0;
  return;
}



/* Entry: 00375a20; end: 00375a83;  */

ulong FUN_00375a20(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (*(uint *)(param_1 + 0x80) < *(uint *)(param_2 + 0x80)) {
LAB_00375a3c:
    uVar1 = 1;
  }
  else {
    if (*(uint *)(param_1 + 0x80) <= *(uint *)(param_2 + 0x80)) {
      lVar2 = param_1;
      _memcmp();
      if ((int)lVar2 < 0) goto LAB_00375a3c;
      if ((int)lVar2 == 0) {
        uVar1 = *(ulong *)(param_1 + 0x88);
        FUN_003a2b04(uVar1,*(undefined8 *)(param_2 + 0x88));
        return uVar1 >> 0x1f & 1;
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 00375a84; end: 00375c3b;  */

ulong * FUN_00375a84(undefined8 param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 **ppuVar4;
  ulong uVar5;
  ulong uVar6;
  code *pcVar7;
  ulong *puVar8;
  ulong *puVar9;
  int *piVar10;
  ulong uStack_118;
  undefined8 **ppuStack_110;
  ulong *puStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined8 **ppuStack_e8;
  ulong uStack_e0;
  byte bStack_d1;
  undefined8 **ppuStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong auStack_b8 [4];
  char *pcStack_98;
  undefined8 uStack_90;
  undefined8 **ppuStack_88;
  ulong uStack_80;
  char *pcStack_78;
  undefined8 uStack_70;
  undefined8 **ppuStack_68;
  ulong uStack_60;
  char *pcStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_003a0d08(auStack_b8);
  if (auStack_b8[0] == 0) {
    puVar8 = auStack_b8;
    FUN_00375c3c();
    if (*(char *)((long)puVar8 + 0x17) < '\0') {
      FUN_002971d4(&ppuStack_d0,*puVar8,puVar8[1]);
    }
    else {
      uStack_c8 = puVar8[1];
      ppuStack_d0 = (undefined8 **)*puVar8;
      uStack_c0 = puVar8[2];
    }
  }
  else {
    FUN_00552ec8(&ppuStack_d0,auStack_b8,1);
  }
  uVar6 = uStack_c0;
  uVar5 = uStack_c8;
  ppuVar4 = ppuStack_d0;
  uVar3 = uStack_c0 >> 0x38;
  FUN_003a2ef8(&ppuStack_e8,*(undefined8 *)(param_2 + 0x88));
  uStack_80 = uVar5;
  ppuStack_88 = ppuVar4;
  if (-1 < (long)uVar6) {
    uStack_80 = uVar3;
    ppuStack_88 = &ppuStack_d0;
  }
  pcStack_98 = "{address=";
  uStack_90 = 9;
  uStack_60 = uStack_e0;
  ppuStack_68 = ppuStack_e8;
  if (-1 < (char)bStack_d1) {
    uStack_60 = (ulong)bStack_d1;
    ppuStack_68 = &ppuStack_e8;
  }
  pcStack_78 = ", args=";
  uStack_70 = 7;
  pcStack_58 = "}";
  uStack_50 = 1;
  FUN_00575fc4(param_1,&pcStack_98,5);
  if ((char)bStack_d1 < '\0') {
    __ZdlPv(ppuStack_e8);
  }
  if ((long)uStack_c0 < 0) {
    __ZdlPv(ppuStack_d0);
  }
  puVar8 = auStack_b8;
  FUN_0035d18c();
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_48) {
    ___stack_chk_fail();
    if ((char)bStack_d1 < '\0') {
      __ZdlPv(ppuStack_e8);
    }
    if ((long)uStack_c0 < 0) {
      __ZdlPv(ppuStack_d0);
    }
    FUN_0035d18c(auStack_b8);
    puVar9 = puVar8;
    __Unwind_Resume();
    pcStack_f8 = FUN_00375c3c;
    uStack_118 = *puVar9;
    if (uStack_118 != 0) {
      if ((uStack_118 & 1) != 0) {
        piVar10 = (int *)(uStack_118 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = *piVar10 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      ppuStack_110 = &ppuStack_e8;
      puStack_108 = puVar8;
      puStack_100 = &stack0xfffffffffffffff0;
      FUN_00776598(&uStack_118);
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x375c90);
      (*pcVar7)();
    }
    return puVar9 + 1;
  }
  return puVar8;
}



/* Entry: 00375c3c; end: 00375ca3;  */

ulong * FUN_00375c3c(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int *piVar4;
  ulong uStack_28;
  
  uStack_28 = *param_1;
  if (uStack_28 == 0) {
    return param_1 + 1;
  }
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
  FUN_00776598(&uStack_28);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x375c90);
  (*pcVar3)();
}



/* Entry: 00375ca4; end: 00375cbb;  */

void FUN_00375ca4(undefined4 *param_1,undefined8 param_2)

{
  *param_1 = 2;
  *(char **)(param_1 + 2) = "grpc.internal.subchannel_pool";
  *(undefined8 *)(param_1 + 4) = param_2;
  *(undefined ***)(param_1 + 6) = &PTR_FUN_009ddf88;
  return;
}



/* Entry: 00375cbc; end: 00375cf3;  */

void FUN_00375cbc(undefined8 param_1)

{
  FUN_003a28d0(param_1,"grpc.internal.subchannel_pool");
  return;
}



/* Entry: 00375cf4; end: 00375d4b;  */

void FUN_00375cf4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  
  plVar1 = (long *)(param_1 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}



/* Entry: 00375d4c; end: 00375fcf;  */

undefined8 *
FUN_00375d4c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
            char *param_5)

{
  long *plVar1;
  char *pcVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  char *pcVar6;
  undefined8 uVar7;
  long lVar8;
  long lStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  *param_1 = &PTR_FUN_009ddfb0;
  param_1[1] = 1;
  param_1[2] = 0;
  param_1[2] = *param_2;
  *param_2 = 0;
  param_1[3] = param_3;
  param_1[4] = param_5;
  func_0x003d5b44(&plStack_48,*(undefined8 *)(param_1[2] + 0x18));
  lVar8 = plStack_48[2];
  plVar3 = (long *)plStack_48[3];
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  pcVar2 = "SubchannelStreamClient";
  if (param_5 != (char *)0x0) {
    pcVar2 = param_5;
  }
  pcVar6 = pcVar2;
  lStack_68 = lVar8;
  plStack_60 = plVar3;
  _strlen(pcVar2);
  FUN_003d76e4(param_1 + 5,lVar8,pcVar2,pcVar6);
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar3 = plStack_48 + 1;
    do {
      lVar8 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plStack_48 + 8))();
    }
  }
  FUN_00339d50(param_1 + 7);
  uVar7 = *param_4;
  *param_4 = 0;
  param_1[0x10] = 0;
  param_1[0xf] = uVar7;
  lStack_68 = 1000;
  uStack_58 = 0x3fc999999999999a;
  plStack_60 = (long *)0x3ff999999999999a;
  uStack_50 = 120000;
  func_0x003a15f0(param_1 + 0x11,&lStack_68);
  *(undefined1 *)(param_1 + 0x45) = 0;
  if (param_1[4] != 0) {
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
                 ,0x49,1,"%s %p: created SubchannelStreamClient");
  }
  param_1[0x42] = FUN_00375fd0;
  param_1[0x43] = param_1;
  param_1[0x44] = 0;
  FUN_003760b8(param_1);
  return param_1;
}



/* Entry: 00375fd0; end: 003760b7;  */

void FUN_00375fd0(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  func_0x00339d8c(param_1 + 7);
  *(undefined1 *)(param_1 + 0x45) = 0;
  if (((param_1[0xf] != 0) && (*param_2 == 0)) && (param_1[0x10] == 0)) {
    if (param_1[4] != 0) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
                   ,0x98,1,"%s %p: SubchannelStreamClient restarting health check call");
    }
    FUN_00376338(param_1);
  }
  func_0x00339da8(param_1 + 7);
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
  if (lVar4 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00376074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}



/* Entry: 003760b8; end: 0037610b;  */

void FUN_003760b8(long param_1)

{
  func_0x00339d8c(param_1 + 0x38);
  FUN_00376338(param_1);
  func_0x00339da8(param_1 + 0x38);
  return;
}



/* Entry: 0037610c; end: 00376147;  */

long * FUN_0037610c(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  return param_1;
}



/* Entry: 00376148; end: 0037614b;  */

undefined8 *
FUN_00376148(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
            char *param_5)

{
  long *plVar1;
  char *pcVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  char *pcVar6;
  undefined8 uVar7;
  long lVar8;
  long lStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  *param_1 = &PTR_FUN_009ddfb0;
  param_1[1] = 1;
  param_1[2] = 0;
  param_1[2] = *param_2;
  *param_2 = 0;
  param_1[3] = param_3;
  param_1[4] = param_5;
  func_0x003d5b44(&plStack_48,*(undefined8 *)(param_1[2] + 0x18));
  lVar8 = plStack_48[2];
  plVar3 = (long *)plStack_48[3];
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  pcVar2 = "SubchannelStreamClient";
  if (param_5 != (char *)0x0) {
    pcVar2 = param_5;
  }
  pcVar6 = pcVar2;
  lStack_68 = lVar8;
  plStack_60 = plVar3;
  _strlen(pcVar2);
  FUN_003d76e4(param_1 + 5,lVar8,pcVar2,pcVar6);
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar3 = plStack_48 + 1;
    do {
      lVar8 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plStack_48 + 8))();
    }
  }
  FUN_00339d50(param_1 + 7);
  uVar7 = *param_4;
  *param_4 = 0;
  param_1[0x10] = 0;
  param_1[0xf] = uVar7;
  lStack_68 = 1000;
  uStack_58 = 0x3fc999999999999a;
  plStack_60 = (long *)0x3ff999999999999a;
  uStack_50 = 120000;
  func_0x003a15f0(param_1 + 0x11,&lStack_68);
  *(undefined1 *)(param_1 + 0x45) = 0;
  if (param_1[4] != 0) {
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
                 ,0x49,1,"%s %p: created SubchannelStreamClient");
  }
  param_1[0x42] = FUN_00375fd0;
  param_1[0x43] = param_1;
  param_1[0x44] = 0;
  FUN_003760b8(param_1);
  return param_1;
}



/* Entry: 0037614c; end: 00376227;  */

undefined8 * FUN_0037614c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_009ddfb0;
  if (param_1[4] != 0) {
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
                 ,0x52,1,"%s %p: destroying SubchannelStreamClient");
  }
  puVar4 = (undefined8 *)param_1[0x10];
  param_1[0x10] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)();
  }
  plVar5 = (long *)param_1[0xf];
  param_1[0xf] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  func_0x00339d70(param_1 + 7);
  FUN_00377730(param_1 + 5);
  plVar5 = (long *)param_1[2];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 8))();
    }
  }
  return param_1;
}



/* Entry: 00376228; end: 0037622b;  */

undefined8 * FUN_00376228(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_009ddfb0;
  if (param_1[4] != 0) {
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
                 ,0x52,1,"%s %p: destroying SubchannelStreamClient");
  }
  puVar4 = (undefined8 *)param_1[0x10];
  param_1[0x10] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)();
  }
  plVar5 = (long *)param_1[0xf];
  param_1[0xf] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  func_0x00339d70(param_1 + 7);
  FUN_00377730(param_1 + 5);
  plVar5 = (long *)param_1[2];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 8))();
    }
  }
  return param_1;
}



/* Entry: 0037622c; end: 0037623f;  */

void FUN_0037622c(void)

{
  FUN_0037614c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00376240; end: 00376337;  */

void FUN_00376240(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (param_1[4] != 0) {
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
                 ,0x59,1,"%s %p: SubchannelStreamClient shutting down");
  }
  func_0x00339d8c(param_1 + 7);
  plVar3 = (long *)param_1[0xf];
  param_1[0xf] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  puVar4 = (undefined8 *)param_1[0x10];
  param_1[0x10] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)();
  }
  if ((char)param_1[0x45] != '\0') {
    func_0x003cf020(param_1 + 0x3a);
  }
  func_0x00339da8(param_1 + 7);
  plVar3 = param_1 + 1;
  do {
    lVar5 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00376314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}



/* Entry: 00376338; end: 003764a3;  */

void FUN_00376338(undefined8 param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  char *pcVar8;
  undefined8 uVar9;
  long *plVar10;
  int iVar11;
  long extraout_x8;
  int *piVar12;
  long lVar13;
  long lVar14;
  undefined1 uStack_151;
  ulong uStack_150;
  ulong uStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  char cStack_109;
  undefined8 uStack_108;
  long *plStack_100;
  long lStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  char *pcStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  long *plStack_a0;
  long lStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  char *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  
  plVar4 = (long *)param_2[0xf];
  if (plVar4 == (long *)0x0) {
    return;
  }
  if (param_2[0x10] == 0) {
    (**(code **)(*plVar4 + 0x18))(plVar4,param_2);
    plVar4 = param_2 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    lVar5 = 0xd98;
    __Znwm();
    FUN_00376bf8();
    if (param_2 != (long *)0x0) {
      plVar4 = param_2 + 1;
      do {
        lVar13 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar13 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar13 + -1 == 0) {
        (**(code **)(*param_2 + 0x10))();
      }
    }
    puVar6 = (undefined8 *)param_2[0x10];
    param_2[0x10] = lVar5;
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)();
      lVar5 = param_2[0x10];
    }
    lVar13 = param_2[4];
    if (lVar13 != 0) goto LAB_00376414;
  }
  else {
    FUN_007723f4();
    lVar13 = extraout_x8;
LAB_00376414:
    lStack_50 = lVar13;
    plStack_48 = param_2;
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
                 ,0x74,1,"%s %p: SubchannelStreamClient created CallState %p");
    lVar5 = param_2[0x10];
  }
  plStack_48 = *(long **)PTR____stack_chk_guard_00999f88;
  lVar13 = *(long *)(lVar5 + 8);
  lVar14 = *(long *)(lVar13 + 0x10);
  if (lVar14 == 0) {
    plStack_a0 = (long *)0x0;
  }
  else {
    plVar4 = (long *)(lVar14 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_a0 = *(long **)(lVar13 + 0x10);
  }
  lStack_98 = lVar5 + 0x10;
  plStack_90 = (long *)((long)&MACH_HEADER.magic + 1);
  uStack_88 = 0x1c;
  pcStack_80 = "/grpc.health.v1.Health/Watch";
  FUN_0033a6ec();
  plStack_100 = plStack_a0;
  uStack_c0 = *(undefined8 *)(lVar5 + 0x20);
  uStack_68 = 0x7fffffffffffffff;
  lVar13 = lVar5 + 0x88;
  lStack_b0 = lVar5 + 0x28;
  uStack_148 = 0;
  plStack_a0 = (long *)0x0;
  lStack_f8 = lStack_98;
  uStack_e8 = uStack_88;
  plStack_f0 = plStack_90;
  uStack_d8 = uStack_78;
  pcStack_e0 = pcStack_80;
  uStack_88 = 0;
  plStack_90 = (long *)0x0;
  uStack_78 = 0;
  pcStack_80 = (char *)0x0;
  uStack_c8 = 0x7fffffffffffffff;
  uStack_d0 = param_1;
  lStack_b8 = lVar13;
  uStack_70 = param_1;
  uStack_60 = uStack_c0;
  lStack_58 = lVar13;
  lStack_50 = lStack_b0;
  FUN_00370d48(&plStack_120,&plStack_100,&uStack_148);
  plVar4 = plStack_120;
  plStack_120 = (long *)0x0;
  *(long **)(lVar5 + 0xd8) = plVar4;
  FUN_00353304(&plStack_120);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_f0) {
    do {
      lVar14 = *plStack_f0;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_f0,0x10);
      if (bVar2) {
        *plStack_f0 = lVar14 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar14 + -1 == 0) {
      (*(code *)plStack_f0[1])();
    }
  }
  if (plStack_100 != (long *)0x0) {
    plVar4 = plStack_100 + 1;
    do {
      lVar14 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar14 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar14 + -1 == 0) {
      (**(code **)(*plStack_100 + 8))();
    }
  }
  *(code **)(lVar5 + 0xd80) = FUN_0037709c;
  *(long *)(lVar5 + 0xd88) = lVar5;
  *(undefined8 *)(lVar5 + 0xd90) = 0;
  func_0x0037119c(*(undefined8 *)(lVar5 + 0xd8),lVar5 + 0xd78);
  if (uStack_148 == 0) {
    if (*(long *)(*(long *)(lVar5 + 8) + 0x78) != 0) {
      *(long *)(lVar5 + 0x180) = lVar13;
      *(long *)(lVar5 + 400) = lVar5 + 0xe0;
      func_0x003711dc(&plStack_120,*(undefined8 *)(lVar5 + 0xd8),&uStack_151,"on_complete");
      plStack_120 = (long *)0x0;
      FUN_00353304(&plStack_120);
      *(code **)(lVar5 + 0x250) = FUN_00377150;
      *(long *)(lVar5 + 600) = lVar5;
      *(undefined8 *)(lVar5 + 0x260) = 0;
      *(long *)(lVar5 + 0x188) = lVar5 + 0x248;
      (**(code **)(**(long **)(*(long *)(lVar5 + 8) + 0x78) + 0x10))(&plStack_120);
      FUN_0034b9f8(lVar5 + 0x268,&plStack_120);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_120) {
        do {
          lVar13 = *plStack_120;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plStack_120,0x10);
          if (bVar2) {
            *plStack_120 = lVar13 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar13 + -1 == 0) {
          (*(code *)plStack_120[1])();
        }
      }
      if (uStack_148 != 0) {
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
                     ,0xf3,2,"assertion failed: %s");
        _abort();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x3769ac);
        (*pcVar3)();
      }
      *(long *)(lVar5 + 0xe0) = lVar5 + 0x268;
      *(undefined4 *)(lVar5 + 0xe8) = 0;
      *(undefined8 *)(lVar5 + 0xf0) = 0;
      *(byte *)(lVar5 + 0x198) = *(byte *)(lVar5 + 0x198) | 1;
      (**(code **)(**(long **)(*(long *)(lVar5 + 8) + 0x78) + 0x28))(&plStack_120);
      uStack_138 = uStack_118;
      plStack_140 = plStack_120;
      uStack_128 = uStack_108;
      FUN_003ecad8(lVar5 + 0x470,&plStack_140);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_140) {
        do {
          lVar13 = *plStack_140;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plStack_140,0x10);
          if (bVar2) {
            *plStack_140 = lVar13 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar13 + -1 == 0) {
          (*(code *)plStack_140[1])();
        }
      }
      *(long *)(lVar5 + 0x108) = lVar5 + 0x470;
      *(long *)(lVar5 + 0xf8) = lVar5 + 0x598;
      *(byte *)(lVar5 + 0x198) = *(byte *)(lVar5 + 0x198) | 6;
      *(long *)(lVar5 + 0x118) = lVar5 + 0x7a0;
      *(undefined8 *)(lVar5 + 0x120) = 0;
      *(undefined8 *)(lVar5 + 0x130) = 0;
      *(undefined8 *)(lVar5 + 0x138) = 0;
      func_0x003711dc(&plStack_120,*(undefined8 *)(lVar5 + 0xd8),&uStack_151,
                      "recv_initial_metadata_ready");
      plStack_120 = (long *)0x0;
      FUN_00353304(&plStack_120);
      *(undefined8 *)(lVar5 + 0x9b0) = 0x3771b8;
      *(long *)(lVar5 + 0x9b8) = lVar5;
      *(undefined8 *)(lVar5 + 0x9c0) = 0;
      *(long *)(lVar5 + 0x128) = lVar5 + 0x9a8;
      *(byte *)(lVar5 + 0x198) = *(byte *)(lVar5 + 0x198) | 8;
      *(long *)(lVar5 + 0x140) = lVar5 + 0x9c8;
      *(undefined8 *)(lVar5 + 0x150) = 0;
      func_0x003711dc(&plStack_120,*(undefined8 *)(lVar5 + 0xd8),&uStack_151,"recv_message_ready");
      plStack_120 = (long *)0x0;
      FUN_00353304(&plStack_120);
      *(undefined8 *)(lVar5 + 0xb00) = 0x377210;
      *(long *)(lVar5 + 0xb08) = lVar5;
      *(undefined8 *)(lVar5 + 0xb10) = 0;
      *(long *)(lVar5 + 0x158) = lVar5 + 0xaf8;
      *(byte *)(lVar5 + 0x198) = *(byte *)(lVar5 + 0x198) | 0x10;
      FUN_00377240(lVar5,lVar5 + 0x188);
      iVar11 = (int)lVar5 + 0x208;
      *(long *)(lVar5 + 0x210) = lVar5 + 0xe0;
      *(long *)(lVar5 + 0x160) = lVar5 + 0xb20;
      *(long *)(lVar5 + 0x168) = lVar5 + 0xd28;
      *(code **)(lVar5 + 0xd60) = FUN_003772bc;
      *(long *)(lVar5 + 0xd68) = lVar5;
      *(undefined8 *)(lVar5 + 0xd70) = 0;
      *(long *)(lVar5 + 0x170) = lVar5 + 0xd58;
      *(byte *)(lVar5 + 0x218) = *(byte *)(lVar5 + 0x218) | 0x20;
      FUN_00377240(lVar5);
      goto LAB_003768d8;
    }
    uStack_150 = 0;
  }
  else {
    uStack_150 = uStack_148;
    if ((uStack_148 & 1) != 0) {
      piVar12 = (int *)(uStack_148 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar2) {
          *piVar12 = *piVar12 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  FUN_003be004(&plStack_120,&uStack_150);
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
               ,0xdf,2,
               "SubchannelStreamClient %p CallState %p: error creating stream on subchannel (%s); will retry"
              );
  if (cStack_109 < '\0') {
    __ZdlPv(plStack_120);
  }
  if ((uStack_150 & 1) != 0) {
    FUN_0055293c();
  }
  iVar11 = 1;
  FUN_003770b0(lVar5);
LAB_003768d8:
  if ((uStack_148 & 1) != 0) {
    FUN_0055293c();
  }
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
  plVar4 = plStack_a0;
  if (plStack_a0 != (long *)0x0) {
    plVar7 = plStack_a0 + 1;
    do {
      lVar13 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar13 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar13 + -1 == 0) {
      (**(code **)(*plStack_a0 + 8))();
    }
  }
  if ((long *)*(long *)PTR____stack_chk_guard_00999f88 == plStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (iVar11 != 0) {
    func_0x0040cf10();
    if (cStack_109 < '\0') {
      __ZdlPv(plStack_120);
    }
    FUN_0033c494(&uStack_150);
    FUN_0033c494(&uStack_148);
    FUN_00348de0(&plStack_a0);
  }
  __Unwind_Resume();
  plVar7 = (long *)plVar4[0xf];
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))(plVar7,plVar4);
  }
  plVar7 = plVar4 + 0x11;
  FUN_003a15f4();
  if (plVar4[4] != 0) {
    pcVar8 = 
    "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
    ;
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
                 ,0x80,1,"%s %p: SubchannelStreamClient health check call lost...");
    func_0x003c1f6c();
    uVar9 = *(undefined8 *)pcVar8;
    FUN_003c1e28(uVar9);
    plVar10 = plVar7;
    FUN_00376b94(plVar7,uVar9);
    if ((long)plVar10 < 1) {
      pcVar8 = "%s %p: ... retrying immediately.";
      uVar9 = 0x87;
    }
    else {
      pcVar8 = "%s %p: ... will retry in %lldms.";
      uVar9 = 0x84;
    }
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
                 ,uVar9,1,pcVar8);
  }
  plVar10 = plVar4 + 1;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar2) {
      *plVar10 = *plVar10 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  *(undefined1 *)(plVar4 + 0x45) = 1;
                    /* WARNING: Trying to construct memory range beyond end of address space: ram */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puRam0000000000b65d60)(plVar4 + 0x3a,plVar7,plVar4 + 0x41);
  return;
}



/* Entry: 003764a4; end: 00376a93;  */

void FUN_003764a4(undefined8 param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  char *pcVar6;
  undefined8 uVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  undefined1 uStack_151;
  ulong uStack_150;
  ulong uStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  char cStack_109;
  undefined8 uStack_108;
  long *plStack_100;
  long lStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  char *pcStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  long *plStack_a0;
  long lStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  char *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar10 = *(long *)(param_2 + 8);
  lVar12 = *(long *)(lVar10 + 0x10);
  if (lVar12 == 0) {
    plStack_a0 = (long *)0x0;
  }
  else {
    plVar4 = (long *)(lVar12 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_a0 = *(long **)(lVar10 + 0x10);
  }
  lStack_98 = param_2 + 0x10;
  plStack_90 = (long *)((long)&MACH_HEADER.magic + 1);
  uStack_88 = 0x1c;
  pcStack_80 = "/grpc.health.v1.Health/Watch";
  FUN_0033a6ec();
  plStack_100 = plStack_a0;
  uStack_c0 = *(undefined8 *)(param_2 + 0x20);
  uStack_68 = 0x7fffffffffffffff;
  lVar10 = param_2 + 0x88;
  lStack_b0 = param_2 + 0x28;
  uStack_148 = 0;
  plStack_a0 = (long *)0x0;
  lStack_f8 = lStack_98;
  uStack_e8 = uStack_88;
  plStack_f0 = plStack_90;
  uStack_d8 = uStack_78;
  pcStack_e0 = pcStack_80;
  uStack_88 = 0;
  plStack_90 = (long *)0x0;
  uStack_78 = 0;
  pcStack_80 = (char *)0x0;
  uStack_c8 = 0x7fffffffffffffff;
  uStack_d0 = param_1;
  lStack_b8 = lVar10;
  uStack_70 = param_1;
  uStack_60 = uStack_c0;
  lStack_58 = lVar10;
  lStack_50 = lStack_b0;
  FUN_00370d48(&plStack_120,&plStack_100,&uStack_148);
  plVar4 = plStack_120;
  plStack_120 = (long *)0x0;
  *(long **)(param_2 + 0xd8) = plVar4;
  FUN_00353304(&plStack_120);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_f0) {
    do {
      lVar12 = *plStack_f0;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_f0,0x10);
      if (bVar2) {
        *plStack_f0 = lVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)plStack_f0[1])();
    }
  }
  if (plStack_100 != (long *)0x0) {
    plVar4 = plStack_100 + 1;
    do {
      lVar12 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar12 + -1 == 0) {
      (**(code **)(*plStack_100 + 8))();
    }
  }
  *(code **)(param_2 + 0xd80) = FUN_0037709c;
  *(long *)(param_2 + 0xd88) = param_2;
  *(undefined8 *)(param_2 + 0xd90) = 0;
  func_0x0037119c(*(undefined8 *)(param_2 + 0xd8),param_2 + 0xd78);
  if (uStack_148 == 0) {
    if (*(long *)(*(long *)(param_2 + 8) + 0x78) != 0) {
      *(long *)(param_2 + 0x180) = lVar10;
      *(long *)(param_2 + 400) = param_2 + 0xe0;
      func_0x003711dc(&plStack_120,*(undefined8 *)(param_2 + 0xd8),&uStack_151,"on_complete");
      plStack_120 = (long *)0x0;
      FUN_00353304(&plStack_120);
      *(code **)(param_2 + 0x250) = FUN_00377150;
      *(long *)(param_2 + 600) = param_2;
      *(undefined8 *)(param_2 + 0x260) = 0;
      *(long *)(param_2 + 0x188) = param_2 + 0x248;
      (**(code **)(**(long **)(*(long *)(param_2 + 8) + 0x78) + 0x10))(&plStack_120);
      FUN_0034b9f8(param_2 + 0x268,&plStack_120);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_120) {
        do {
          lVar10 = *plStack_120;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plStack_120,0x10);
          if (bVar2) {
            *plStack_120 = lVar10 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar10 + -1 == 0) {
          (*(code *)plStack_120[1])();
        }
      }
      if (uStack_148 != 0) {
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
                     ,0xf3,2,"assertion failed: %s");
        _abort();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x3769ac);
        (*pcVar3)();
      }
      *(long *)(param_2 + 0xe0) = param_2 + 0x268;
      *(undefined4 *)(param_2 + 0xe8) = 0;
      *(undefined8 *)(param_2 + 0xf0) = 0;
      *(byte *)(param_2 + 0x198) = *(byte *)(param_2 + 0x198) | 1;
      (**(code **)(**(long **)(*(long *)(param_2 + 8) + 0x78) + 0x28))(&plStack_120);
      uStack_138 = uStack_118;
      plStack_140 = plStack_120;
      uStack_128 = uStack_108;
      FUN_003ecad8(param_2 + 0x470,&plStack_140);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_140) {
        do {
          lVar10 = *plStack_140;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plStack_140,0x10);
          if (bVar2) {
            *plStack_140 = lVar10 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar10 + -1 == 0) {
          (*(code *)plStack_140[1])();
        }
      }
      *(long *)(param_2 + 0x108) = param_2 + 0x470;
      *(long *)(param_2 + 0xf8) = param_2 + 0x598;
      *(byte *)(param_2 + 0x198) = *(byte *)(param_2 + 0x198) | 6;
      *(long *)(param_2 + 0x118) = param_2 + 0x7a0;
      *(undefined8 *)(param_2 + 0x120) = 0;
      *(undefined8 *)(param_2 + 0x130) = 0;
      *(undefined8 *)(param_2 + 0x138) = 0;
      func_0x003711dc(&plStack_120,*(undefined8 *)(param_2 + 0xd8),&uStack_151,
                      "recv_initial_metadata_ready");
      plStack_120 = (long *)0x0;
      FUN_00353304(&plStack_120);
      *(undefined8 *)(param_2 + 0x9b0) = 0x3771b8;
      *(long *)(param_2 + 0x9b8) = param_2;
      *(undefined8 *)(param_2 + 0x9c0) = 0;
      *(long *)(param_2 + 0x128) = param_2 + 0x9a8;
      *(byte *)(param_2 + 0x198) = *(byte *)(param_2 + 0x198) | 8;
      *(long *)(param_2 + 0x140) = param_2 + 0x9c8;
      *(undefined8 *)(param_2 + 0x150) = 0;
      func_0x003711dc(&plStack_120,*(undefined8 *)(param_2 + 0xd8),&uStack_151,"recv_message_ready")
      ;
      plStack_120 = (long *)0x0;
      FUN_00353304(&plStack_120);
      *(undefined8 *)(param_2 + 0xb00) = 0x377210;
      *(long *)(param_2 + 0xb08) = param_2;
      *(undefined8 *)(param_2 + 0xb10) = 0;
      *(long *)(param_2 + 0x158) = param_2 + 0xaf8;
      *(byte *)(param_2 + 0x198) = *(byte *)(param_2 + 0x198) | 0x10;
      FUN_00377240(param_2,param_2 + 0x188);
      iVar9 = (int)param_2 + 0x208;
      *(long *)(param_2 + 0x210) = param_2 + 0xe0;
      *(long *)(param_2 + 0x160) = param_2 + 0xb20;
      *(long *)(param_2 + 0x168) = param_2 + 0xd28;
      *(code **)(param_2 + 0xd60) = FUN_003772bc;
      *(long *)(param_2 + 0xd68) = param_2;
      *(undefined8 *)(param_2 + 0xd70) = 0;
      *(long *)(param_2 + 0x170) = param_2 + 0xd58;
      *(byte *)(param_2 + 0x218) = *(byte *)(param_2 + 0x218) | 0x20;
      FUN_00377240(param_2);
      goto LAB_003768d8;
    }
    uStack_150 = 0;
  }
  else {
    uStack_150 = uStack_148;
    if ((uStack_148 & 1) != 0) {
      piVar11 = (int *)(uStack_148 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar2) {
          *piVar11 = *piVar11 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  FUN_003be004(&plStack_120,&uStack_150);
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
               ,0xdf,2,
               "SubchannelStreamClient %p CallState %p: error creating stream on subchannel (%s); will retry"
              );
  if (cStack_109 < '\0') {
    __ZdlPv(plStack_120);
  }
  if ((uStack_150 & 1) != 0) {
    FUN_0055293c();
  }
  iVar9 = 1;
  FUN_003770b0(param_2);
LAB_003768d8:
  if ((uStack_148 & 1) != 0) {
    FUN_0055293c();
  }
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_90) {
    do {
      lVar10 = *plStack_90;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
      if (bVar2) {
        *plStack_90 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)plStack_90[1])();
    }
  }
  plVar4 = plStack_a0;
  if (plStack_a0 != (long *)0x0) {
    plVar5 = plStack_a0 + 1;
    do {
      lVar10 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plStack_a0 + 8))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (iVar9 != 0) {
    func_0x0040cf10();
    if (cStack_109 < '\0') {
      __ZdlPv(plStack_120);
    }
    FUN_0033c494(&uStack_150);
    FUN_0033c494(&uStack_148);
    FUN_00348de0(&plStack_a0);
  }
  __Unwind_Resume();
  plVar5 = (long *)plVar4[0xf];
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5,plVar4);
  }
  plVar5 = plVar4 + 0x11;
  FUN_003a15f4();
  if (plVar4[4] != 0) {
    pcVar6 = 
    "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
    ;
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
                 ,0x80,1,"%s %p: SubchannelStreamClient health check call lost...");
    func_0x003c1f6c();
    uVar7 = *(undefined8 *)pcVar6;
    FUN_003c1e28(uVar7);
    plVar8 = plVar5;
    FUN_00376b94(plVar5,uVar7);
    if ((long)plVar8 < 1) {
      pcVar6 = "%s %p: ... retrying immediately.";
      uVar7 = 0x87;
    }
    else {
      pcVar6 = "%s %p: ... will retry in %lldms.";
      uVar7 = 0x84;
    }
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
                 ,uVar7,1,pcVar6);
  }
  plVar8 = plVar4 + 1;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar2) {
      *plVar8 = *plVar8 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  *(undefined1 *)(plVar4 + 0x45) = 1;
                    /* WARNING: Trying to construct memory range beyond end of address space: ram */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puRam0000000000b65d60)(plVar4 + 0x3a,plVar5,plVar4 + 0x41);
  return;
}



/* Entry: 00376a94; end: 00376b93;  */

void FUN_00376a94(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  
  plVar3 = *(long **)(param_1 + 0x78);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3,param_1);
  }
  lVar4 = param_1 + 0x88;
  FUN_003a15f4();
  if (*(long *)(param_1 + 0x20) != 0) {
    pcVar5 = 
    "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
    ;
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
                 ,0x80,1,"%s %p: SubchannelStreamClient health check call lost...");
    func_0x003c1f6c();
    uVar6 = *(undefined8 *)pcVar5;
    FUN_003c1e28(uVar6);
    lVar7 = lVar4;
    FUN_00376b94(lVar4,uVar6);
    if (lVar7 < 1) {
      pcVar5 = "%s %p: ... retrying immediately.";
      uVar6 = 0x87;
    }
    else {
      pcVar5 = "%s %p: ... will retry in %lldms.";
      uVar6 = 0x84;
    }
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
                 ,uVar6,1,pcVar5);
  }
  plVar3 = (long *)(param_1 + 8);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = *plVar3 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  *(undefined1 *)(param_1 + 0x228) = 1;
                    /* WARNING: Could not recover jumptable at 0x003cf01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puRam0000000000b65d60)(param_1 + 0x1d0,lVar4,param_1 + 0x208);
  return;
}



/* Entry: 00376b94; end: 00376bf7;  */

long FUN_00376b94(ulong param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0x7fffffffffffffff;
  if ((((param_1 != 0x7fffffffffffffff) && (param_2 != -0x7fffffffffffffff)) &&
      (lVar1 = -0x8000000000000000, param_1 != 0x8000000000000000)) &&
     (param_2 != -0x8000000000000000)) {
    if ((long)param_1 < 1) {
      if (-param_2 < (long)(-0x8000000000000000 - param_1)) {
        return -0x8000000000000000;
      }
    }
    else if ((long)(param_1 ^ 0x7fffffffffffffff) < -param_2) {
      return 0x7fffffffffffffff;
    }
    lVar1 = param_1 - param_2;
  }
  return lVar1;
}



/* Entry: 00376bf8; end: 00376df3;  */

undefined8 * FUN_00376bf8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_009ddfd8;
  param_1[1] = 0;
  param_1[1] = *param_2;
  *param_2 = 0;
  FUN_003c3d28();
  param_1[2] = param_3;
  param_1[3] = param_2;
  uVar1 = *(undefined8 *)(param_1[1] + 0x10);
  FUN_00370d38();
  FUN_003d5f68();
  param_1[4] = uVar1;
  FUN_003bb7c0(param_1 + 5);
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined1 *)((long)param_1 + 0x114) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = param_1 + 0x11;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x48] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  *(undefined8 *)((long)param_1 + 0x1d1) = 0;
  *(undefined8 *)((long)param_1 + 0x1c9) = 0;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x8b] = param_1[4];
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  param_1[0x1c] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  *(undefined8 *)((long)param_1 + 0x211) = 0;
  *(undefined8 *)((long)param_1 + 0x209) = 0;
  FUN_003ecf38(param_1 + 0x8e);
  uVar1 = param_1[4];
  *(undefined4 *)(param_1 + 0xb3) = 0;
  param_1[0xf1] = uVar1;
  param_1[0xf3] = 0;
  param_1[0xf2] = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  param_1[0x132] = uVar1;
  param_1[0x134] = 0;
  param_1[0x133] = 0;
  *(undefined1 *)(param_1 + 0x139) = 0;
  *(undefined1 *)(param_1 + 0x15e) = 0;
  *(undefined2 *)(param_1 + 0x163) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  param_1[0x1a2] = uVar1;
  param_1[0x1a4] = 0;
  param_1[0x1a3] = 0;
  param_1[0x1a6] = 0;
  param_1[0x1a5] = 0;
  param_1[0x1a8] = 0;
  param_1[0x1a7] = 0;
  param_1[0x1aa] = 0;
  param_1[0x1a9] = 0;
  return param_1;
}



/* Entry: 00376df4; end: 00376e23;  */

long FUN_00376df4(long param_1)

{
  if ((*(ulong *)(param_1 + 0x98) & 1) != 0) {
    FUN_0055293c();
  }
  return param_1;
}



/* Entry: 00376e24; end: 00376f4f;  */

undefined8 * FUN_00376e24(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_009ddfd8;
  if (*(long *)(param_1[1] + 0x20) != 0) {
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
                 ,0xb6,1,"%s %p: SubchannelStreamClient destroying CallState %p");
  }
  lVar6 = 0;
  do {
    pcVar5 = *(code **)((long)param_1 + lVar6 + 0x90);
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(*(undefined8 *)((long)param_1 + lVar6 + 0x88));
    }
    lVar6 = lVar6 + 0x10;
  } while (lVar6 != 0x50);
  FUN_003bba54(param_1 + 5,0);
  FUN_0036d7cc(param_1 + 0x164);
  FUN_0036d804(param_1 + 0x139);
  FUN_0036d7cc(param_1 + 0xf4);
  FUN_0036d7cc(param_1 + 0xb3);
  FUN_003ede40(param_1 + 0x8e);
  FUN_0036d7cc(param_1 + 0x4d);
  if ((param_1[0x2f] & 1) != 0) {
    FUN_0055293c();
  }
  FUN_003bb818(param_1 + 5);
  FUN_00377818(param_1 + 4,0);
  plVar4 = (long *)param_1[1];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
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
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 00376f50; end: 00376f53;  */

undefined8 * FUN_00376f50(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_009ddfd8;
  if (*(long *)(param_1[1] + 0x20) != 0) {
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
                 ,0xb6,1,"%s %p: SubchannelStreamClient destroying CallState %p");
  }
  lVar6 = 0;
  do {
    pcVar5 = *(code **)((long)param_1 + lVar6 + 0x90);
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(*(undefined8 *)((long)param_1 + lVar6 + 0x88));
    }
    lVar6 = lVar6 + 0x10;
  } while (lVar6 != 0x50);
  FUN_003bba54(param_1 + 5,0);
  FUN_0036d7cc(param_1 + 0x164);
  FUN_0036d804(param_1 + 0x139);
  FUN_0036d7cc(param_1 + 0xf4);
  FUN_0036d7cc(param_1 + 0xb3);
  FUN_003ede40(param_1 + 0x8e);
  FUN_0036d7cc(param_1 + 0x4d);
  if ((param_1[0x2f] & 1) != 0) {
    FUN_0055293c();
  }
  FUN_003bb818(param_1 + 5);
  FUN_00377818(param_1 + 4,0);
  plVar4 = (long *)param_1[1];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
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
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 00376f54; end: 00376f67;  */

void FUN_00376f54(void)

{
  FUN_00376e24();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00376f68; end: 00376fcb;  */

void FUN_00376f68(long param_1)

{
  ulong uStack_28;
  
  uStack_28 = 4;
  FUN_003bbb7c(param_1 + 0x28,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    FUN_0055293c();
  }
  FUN_00376fcc(param_1);
  return;
}



/* Entry: 00376fcc; end: 0037709b;  */

void FUN_00376fcc(qword param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  ulong uStack_38;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  pcVar3 = (char *)(param_1 + 0xb19);
  do {
    if (*pcVar3 != '\0') {
      ClearExclusiveLocal();
      return;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
    if (bVar2) {
      *pcVar3 = '\x01';
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  func_0x003711dc(&uStack_28,*(undefined8 *)(param_1 + 0xd8),&uStack_29,"cancel");
  uStack_28 = 0;
  FUN_00353304(&uStack_28);
  pcVar3 = segment_command_00000020.segname + 8;
  FUN_00338c74();
  *(code **)pcVar3 = FUN_00377480;
  *(qword *)(pcVar3 + 8) = param_1;
  *(code **)(pcVar3 + 0x18) = FUN_0033df34;
  *(char **)(pcVar3 + 0x20) = pcVar3;
  *(undefined8 *)(pcVar3 + 0x28) = 0;
  uStack_38 = 0;
  FUN_003bb88c(param_1 + 0x28,pcVar3 + 0x10,&uStack_38,"health_cancel");
  if ((uStack_38 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 0037709c; end: 003770af;  */

void FUN_0037709c(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003770a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))();
    return;
  }
  return;
}



/* Entry: 003770b0; end: 0037714f;  */

void FUN_003770b0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 uStack_51;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined1 uStack_21;
  
  if (*(undefined8 **)(param_1[1] + 0x80) == param_1) {
    *(undefined8 *)(param_1[1] + 0x80) = 0;
    puVar1 = param_1;
    (**(code **)*param_1)();
    if ((int)param_2 != 0) {
      if (*(long *)(param_1[1] + 0x78) == 0) {
        func_0x0077242c();
        func_0x0040cf10();
        pcStack_38 = FUN_00377150;
        uStack_50 = param_2;
        puStack_48 = param_1;
        puStack_40 = &stack0xfffffffffffffff0;
        FUN_003bb974(puVar1 + 5,"on_complete");
        FUN_00366e68(puVar1 + 0x4d);
        FUN_00367130(puVar1 + 0x8b);
        FUN_00366e68(puVar1 + 0xb3);
        FUN_00367130(puVar1 + 0xf1);
        func_0x00371218(puVar1[0x1b],&uStack_51,"on_complete");
        return;
      }
      if ((*(byte *)(param_1 + 0x163) & 1) == 0) {
        FUN_00376a94();
      }
      else {
        FUN_003a15dc(param_1[1] + 0x88);
        FUN_00376338(param_1[1]);
      }
    }
  }
  func_0x00371218(param_1[0x1b],&uStack_21,"call_ended");
  return;
}



/* Entry: 00377150; end: 0037723f;  */

void FUN_00377150(long param_1)

{
  undefined1 uStack_21;
  
  FUN_003bb974(param_1 + 0x28,"on_complete");
  FUN_00366e68(param_1 + 0x268);
  FUN_00367130(param_1 + 0x458);
  FUN_00366e68(param_1 + 0x598);
  FUN_00367130(param_1 + 0x788);
  func_0x00371218(*(undefined8 *)(param_1 + 0xd8),&uStack_21,"on_complete");
  return;
}



/* Entry: 00377240; end: 003772bb;  */

void FUN_00377240(long param_1,long param_2)

{
  ulong uStack_28;
  
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0xd8);
  *(code **)(param_2 + 0x28) = FUN_0037742c;
  *(long *)(param_2 + 0x30) = param_2;
  *(undefined8 *)(param_2 + 0x38) = 0;
  uStack_28 = 0;
  FUN_003bb88c(param_1 + 0x28,param_2 + 0x20,&uStack_28,"start_subchannel_batch");
  if ((uStack_28 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003772bc; end: 0037742b;  */

void FUN_003772bc(long param_1,ulong *param_2)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  int *piVar6;
  ulong uStack_30;
  int iStack_24;
  
  FUN_003bb974(param_1 + 0x28,"recv_trailing_metadata_ready");
  if ((*(byte *)(param_1 + 0xb21) >> 2 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (ulong)*(uint *)(param_1 + 0xca8) | 0x100000000;
  }
  iStack_24 = 2;
  if ((uVar5 & 0x100000000) != 0) {
    iStack_24 = (int)uVar5;
  }
  uVar5 = *param_2;
  if (uVar5 != 0) {
    if ((uVar5 & 1) != 0) {
      piVar6 = (int *)(uVar5 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = *piVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_30 = uVar5;
    FUN_003fb7d8(&uStack_30,0x7fffffffffffffff,&iStack_24,0,0,0);
    if ((uStack_30 & 1) != 0) {
      FUN_0055293c();
    }
  }
  if (*(long *)(*(long *)(param_1 + 8) + 0x20) != 0) {
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
                 ,0x1ad,1,
                 "%s %p: SubchannelStreamClient CallState %p: health watch failed with status %d");
  }
  FUN_00366e68(param_1 + 0xb20);
  FUN_00367130(param_1 + 0xd10);
  lVar1 = *(long *)(param_1 + 8) + 0x38;
  func_0x00339d8c(lVar1);
  plVar4 = *(long **)(*(long *)(param_1 + 8) + 0x78);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x38))(plVar4,*(long *)(param_1 + 8),iStack_24);
  }
  FUN_003770b0(param_1,iStack_24 != 0xc);
  func_0x00339da8(lVar1);
  return;
}



/* Entry: 0037742c; end: 00377437;  */

void FUN_0037742c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  FUN_00371144();
  puVar1 = (undefined8 *)(lVar2 + 0x50);
  func_0x003a6564(puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00371140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar1)();
  return;
}



/* Entry: 00377438; end: 0037747f;  */

void FUN_00377438(long param_1)

{
  undefined1 uStack_21;
  
  FUN_003bb974(param_1 + 0x28,"health_cancel");
  func_0x00371218(*(undefined8 *)(param_1 + 0xd8),&uStack_21,"cancel");
  return;
}



/* Entry: 00377480; end: 00377527;  */

void FUN_00377480(qword param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  qword *pqVar3;
  ulong uVar4;
  long lVar5;
  
  pcVar2 = segment_command_00000020.segname + 8;
  FUN_00338c74();
  *(code **)pcVar2 = FUN_00377438;
  *(qword *)(pcVar2 + 8) = param_1;
  pqVar3 = (qword *)(pcVar2 + 0x10);
  *(code **)(pcVar2 + 0x18) = FUN_0033df34;
  *(char **)(pcVar2 + 0x20) = pcVar2;
  *(undefined8 *)(pcVar2 + 0x28) = 0;
  FUN_00400bf0();
  *(byte *)(pqVar3 + 2) = (byte)pqVar3[2] | 0x40;
  uVar4 = *(ulong *)(pqVar3[1] + 0x98);
  if (uVar4 != 4) {
    *(undefined8 *)(pqVar3[1] + 0x98) = 4;
    if ((uVar4 & 1) != 0) {
      FUN_0055293c();
    }
  }
  lVar5 = *(long *)(param_1 + 0xd8);
  FUN_00371144();
  puVar1 = (undefined8 *)(lVar5 + 0x50);
  func_0x003a6564(puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00371140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar1)();
  return;
}



/* Entry: 00377528; end: 0037772f;  */

void FUN_00377528(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 ****ppppuVar3;
  long lVar4;
  long *plVar5;
  undefined8 ***pppuStack_60;
  ulong uStack_58;
  byte bStack_49;
  ulong uStack_48;
  
  if (*(char *)(param_1 + 0xaf0) == '\0') {
    func_0x00371218(*(undefined8 *)(param_1 + 0xd8),&pppuStack_60,"recv_message_ready");
  }
  else {
    lVar1 = param_1 + 0x9c8;
    lVar2 = *(long *)(param_1 + 8) + 0x38;
    func_0x00339d8c(lVar2);
    lVar4 = *(long *)(param_1 + 8);
    plVar5 = *(long **)(lVar4 + 0x78);
    if (plVar5 != (long *)0x0) {
      FUN_003ece8c(&pppuStack_60,lVar1);
      ppppuVar3 = (undefined8 ****)pppuStack_60;
      if (-1 < (char)bStack_49) {
        uStack_58 = (ulong)bStack_49;
        ppppuVar3 = &pppuStack_60;
      }
      (**(code **)(*plVar5 + 0x30))(&uStack_48,plVar5,lVar4,ppppuVar3,uStack_58);
      if ((char)bStack_49 < '\0') {
        __ZdlPv(pppuStack_60);
      }
      if (uStack_48 != 0) {
        if (*(long *)(*(long *)(param_1 + 8) + 0x20) != 0) {
          func_0x0035f480(&pppuStack_60,&uStack_48,1);
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
                       ,0x17d,1,
                       "%s %p: SubchannelStreamClient CallState %p: failed to parse response message: %s"
                      );
          if ((char)bStack_49 < '\0') {
            __ZdlPv(pppuStack_60);
          }
        }
        FUN_00376fcc(param_1);
        if ((uStack_48 & 1) != 0) {
          FUN_0055293c();
        }
      }
    }
    func_0x00339da8(lVar2);
    *(undefined1 *)(param_1 + 0xb18) = 1;
    FUN_0036b714(lVar1);
    *(long *)(param_1 + 0x1d0) = param_1 + 0xe0;
    *(long *)(param_1 + 0x140) = lVar1;
    *(undefined8 *)(param_1 + 0xb00) = 0x377210;
    *(long *)(param_1 + 0xb08) = param_1;
    *(undefined8 *)(param_1 + 0xb10) = 0;
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(long *)(param_1 + 0x158) = param_1 + 0xaf8;
    *(byte *)(param_1 + 0x1d8) = *(byte *)(param_1 + 0x1d8) | 0x10;
    FUN_00377240(param_1,param_1 + 0x1c8);
  }
  return;
}



/* Entry: 00377730; end: 00377767;  */

long * FUN_00377730(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((long *)*param_1 != (long *)0x0) {
    (**(code **)(*(long *)*param_1 + 0x20))();
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



/* Entry: 00377768; end: 00377817;  */

long FUN_00377768(long param_1)

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



/* Entry: 00377818; end: 0037783f;  */

void FUN_00377818(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_003d6000();
  }
  return;
}



/* Entry: 00377840; end: 003778f3;  */

undefined8 * FUN_00377840(undefined8 *param_1,qword param_2,undefined8 *param_3,qword param_4)

{
  qword *pqVar1;
  undefined1 auVar2 [16];
  ulong uStack_40;
  undefined1 uStack_31;
  
  *param_1 = *param_3;
  auVar2 = NEON_ext(*(undefined1 (*) [16])(param_3 + 6),*(undefined1 (*) [16])(param_3 + 6),8,1);
  param_1[2] = auVar2._8_8_;
  param_1[1] = auVar2._0_8_;
  param_1[3] = 0;
  if (param_4 != 0x7fffffffffffffff) {
    pqVar1 = &segment_command_00000020.vmaddr;
    __Znwm();
    *(undefined1 *)pqVar1 = 0;
    pqVar1[1] = param_2;
    pqVar1[2] = param_4;
    pqVar1[4] = (qword)FUN_003778f4;
    pqVar1[5] = (qword)pqVar1;
    pqVar1[6] = 0;
    uStack_40 = 0;
    FUN_003c1e6c(&uStack_31,pqVar1 + 3,&uStack_40);
    if ((uStack_40 & 1) != 0) {
      FUN_0055293c();
    }
  }
  return param_1;
}



/* Entry: 003778f4; end: 003779b3;  */

void FUN_003778f4(char *param_1,ulong *param_2)

{
  char cVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  char *pcVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  char *pcVar10;
  bool bVar11;
  ulong uStack_90;
  ulong uStack_88;
  undefined1 uStack_79;
  ulong uStack_78;
  ulong uStack_38;
  ulong uStack_30;
  undefined8 uStack_28;
  
  lVar9 = *(long *)(*(long *)(param_1 + 8) + 0x10);
  if (*param_1 == '\0') {
    *param_1 = '\x01';
    uVar4 = *(undefined8 *)(lVar9 + 8);
    uStack_28 = *param_2;
    if ((uStack_28 & 1) != 0) {
      piVar8 = (int *)(uStack_28 - 1);
      do {
        cVar1 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar11) {
          *piVar8 = *piVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_003bb88c(uVar4,param_1 + 0x18,&uStack_28,"scheduling deadline timer");
    if ((uStack_28 & 1) != 0) {
      FUN_0055293c();
    }
    return;
  }
  FUN_00377dbc(param_1);
  __ZdlPv();
  plVar3 = *(long **)(lVar9 + 8);
  pcVar6 = "done scheduling deadline timer";
  do {
    lVar7 = *plVar3;
    lVar9 = lVar7 + -1;
    cVar1 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar11) {
      *plVar3 = lVar9;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar9 != 0) {
    if (lVar7 == 0) {
      func_0x00773d94();
      func_0x0040cf10();
      func_0x0040cf10();
      FUN_0033c494(&uStack_38);
      FUN_0033c494(&uStack_30);
      __Unwind_Resume();
      plVar3 = plVar3 + 0xb;
      do {
        pcVar10 = (char *)*plVar3;
        if (((ulong)pcVar10 & 1) == 0) {
          uStack_78 = 0;
LAB_003bbad0:
          do {
            if ((char *)*plVar3 != pcVar10) {
              ClearExclusiveLocal();
              bVar11 = true;
              goto LAB_003bbb24;
            }
            cVar1 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar11) {
              *plVar3 = (long)pcVar6;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (pcVar10 == (char *)0x0) goto LAB_003bbb14;
          uStack_90 = 0;
          FUN_003c1e6c(&uStack_79,pcVar10,&uStack_90);
          if ((uStack_90 & 1) != 0) {
            FUN_0055293c();
          }
          bVar11 = false;
          pcVar6 = pcVar10;
        }
        else {
          FUN_003b7b3c(&uStack_78,(ulong)pcVar10 & 0xfffffffffffffffe);
          if (uStack_78 == 0) goto LAB_003bbad0;
          uStack_88 = uStack_78;
          if ((uStack_78 & 1) != 0) {
            piVar8 = (int *)(uStack_78 - 1);
            do {
              cVar1 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar8,0x10);
              if (bVar11) {
                *piVar8 = *piVar8 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          FUN_003c1e6c(&uStack_79,pcVar6,&uStack_88);
          if ((uStack_88 & 1) != 0) {
            FUN_0055293c();
          }
LAB_003bbb14:
          bVar11 = false;
        }
LAB_003bbb24:
        if ((uStack_78 & 1) != 0) {
          FUN_0055293c();
        }
        if (!bVar11) {
          return;
        }
      } while( true );
    }
    plVar3 = plVar3 + 1;
    plVar5 = plVar3;
    FUN_0033b3e4(plVar3,(long)&uStack_28 + 7);
    while (plVar5 == (long *)0x0) {
      plVar5 = plVar3;
      FUN_0033b3e4(plVar3,(long)&uStack_28 + 7);
    }
    FUN_003b7b6c(&uStack_30,plVar5[3]);
    uVar2 = uStack_30;
    plVar5[3] = 0;
    uStack_38 = uStack_30;
    if ((uStack_30 & 1) != 0) {
      piVar8 = (int *)(uStack_30 - 1);
      do {
        cVar1 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar11) {
          *piVar8 = *piVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_003bb81c();
    if ((uVar2 & 1) != 0) {
      FUN_0055293c(uVar2);
    }
    if ((uStack_30 & 1) != 0) {
      FUN_0055293c();
    }
  }
  return;
}



/* Entry: 003779b4; end: 003779b7;  */

undefined8 * FUN_003779b4(undefined8 *param_1,qword param_2,undefined8 *param_3,qword param_4)

{
  qword *pqVar1;
  undefined1 auVar2 [16];
  ulong uStack_40;
  undefined1 uStack_31;
  
  *param_1 = *param_3;
  auVar2 = NEON_ext(*(undefined1 (*) [16])(param_3 + 6),*(undefined1 (*) [16])(param_3 + 6),8,1);
  param_1[2] = auVar2._8_8_;
  param_1[1] = auVar2._0_8_;
  param_1[3] = 0;
  if (param_4 != 0x7fffffffffffffff) {
    pqVar1 = &segment_command_00000020.vmaddr;
    __Znwm();
    *(undefined1 *)pqVar1 = 0;
    pqVar1[1] = param_2;
    pqVar1[2] = param_4;
    pqVar1[4] = (qword)FUN_003778f4;
    pqVar1[5] = (qword)pqVar1;
    pqVar1[6] = 0;
    uStack_40 = 0;
    FUN_003c1e6c(&uStack_31,pqVar1 + 3,&uStack_40);
    if ((uStack_40 & 1) != 0) {
      FUN_0055293c();
    }
  }
  return param_1;
}



/* Entry: 003779b8; end: 003779ef;  */

long FUN_003779b8(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x003cf020(*(long *)(param_1 + 0x18) + 8);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 003779f0; end: 003779f3;  */

long FUN_003779f0(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x003cf020(*(long *)(param_1 + 0x18) + 8);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 003779f4; end: 00377a3b;  */

void FUN_003779f4(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(lVar3 + 0x18);
  if (lVar2 != 0) {
    func_0x003cf020(lVar2 + 8);
    *(undefined8 *)(lVar3 + 0x18) = 0;
  }
  if (param_2 != 0x7fffffffffffffff) {
    lVar2 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar2 + 0x18) != 0) {
      func_0x00772464();
      lVar2 = *(long *)(param_1 + 0x10);
      if ((*(byte *)(param_2 + 0x10) >> 6 & 1) == 0) {
        if ((*(byte *)(param_2 + 0x10) >> 5 & 1) != 0) {
          uVar1 = *(undefined8 *)(*(long *)(param_2 + 8) + 0x90);
          *(code **)(lVar2 + 0x28) = FUN_00378198;
          *(long *)(lVar2 + 0x30) = lVar2;
          *(undefined8 *)(lVar2 + 0x38) = 0;
          *(undefined8 *)(lVar2 + 0x40) = uVar1;
          *(long *)(*(long *)(param_2 + 8) + 0x90) = lVar2 + 0x20;
        }
      }
      else if (*(long *)(lVar2 + 0x18) != 0) {
        func_0x003cf020(*(long *)(lVar2 + 0x18) + 8);
        *(undefined8 *)(lVar2 + 0x18) = 0;
      }
      return;
    }
    uVar1 = *(undefined8 *)(lVar2 + 0x10);
    FUN_00377dec(uVar1,&stack0xffffffffffffffd0,&stack0xffffffffffffffd8);
    *(undefined8 *)(lVar2 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 00377a3c; end: 00377b53;  */

void FUN_00377a3c(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  if (param_2 != 0x7fffffffffffffff) {
    lVar2 = *(long *)(param_1 + 0x10);
    lStack_30 = param_1;
    lStack_28 = param_2;
    if (*(long *)(lVar2 + 0x18) != 0) {
      func_0x00772464();
      lVar2 = *(long *)(param_1 + 0x10);
      if ((*(byte *)(param_2 + 0x10) >> 6 & 1) == 0) {
        if ((*(byte *)(param_2 + 0x10) >> 5 & 1) != 0) {
          uVar1 = *(undefined8 *)(*(long *)(param_2 + 8) + 0x90);
          *(code **)(lVar2 + 0x28) = FUN_00378198;
          *(long *)(lVar2 + 0x30) = lVar2;
          *(undefined8 *)(lVar2 + 0x38) = 0;
          *(undefined8 *)(lVar2 + 0x40) = uVar1;
          *(long *)(*(long *)(param_2 + 8) + 0x90) = lVar2 + 0x20;
        }
      }
      else if (*(long *)(lVar2 + 0x18) != 0) {
        func_0x003cf020(*(long *)(lVar2 + 0x18) + 8);
        *(undefined8 *)(lVar2 + 0x18) = 0;
      }
      return;
    }
    uVar1 = *(undefined8 *)(lVar2 + 0x10);
    FUN_00377dec(uVar1,&lStack_30,&lStack_28);
    *(undefined8 *)(lVar2 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 00377b54; end: 00377b5b;  */

long FUN_00377b54(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(lVar1 + 0x18) != 0) {
    func_0x003cf020(*(long *)(lVar1 + 0x18) + 8);
    *(undefined8 *)(lVar1 + 0x18) = 0;
  }
  return lVar1;
}



/* Entry: 00377b5c; end: 00377b7b;  */

void FUN_00377b5c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  if (*(int *)(param_3 + 0x14) == 0) {
    *param_1 = 0;
    return;
  }
  func_0x0077249c();
  return;
}



/* Entry: 00377b7c; end: 00377b7f;  */

void FUN_00377b7c(void)

{
  return;
}



/* Entry: 00377b80; end: 00377c2f;  */

void FUN_00377b80(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  bVar1 = *(byte *)(param_2 + 0x10);
  if ((bVar1 >> 6 & 1) == 0) {
    if ((bVar1 >> 3 & 1) != 0) {
      lVar2 = *(long *)(param_2 + 8);
      *(undefined8 *)(lVar4 + 0x70) = *(undefined8 *)(lVar2 + 0x48);
      uVar3 = *(undefined8 *)(lVar2 + 0x38);
      *(code **)(lVar4 + 0x50) = FUN_00378228;
      *(long *)(lVar4 + 0x58) = param_1;
      *(undefined8 *)(lVar4 + 0x60) = 0;
      *(undefined8 *)(lVar4 + 0x68) = uVar3;
      *(long *)(*(long *)(param_2 + 8) + 0x48) = lVar4 + 0x48;
      bVar1 = *(byte *)(param_2 + 0x10);
    }
    if ((bVar1 >> 5 & 1) != 0) {
      uVar3 = *(undefined8 *)(*(long *)(param_2 + 8) + 0x90);
      *(code **)(lVar4 + 0x28) = FUN_00378198;
      *(long *)(lVar4 + 0x30) = lVar4;
      *(undefined8 *)(lVar4 + 0x38) = 0;
      *(undefined8 *)(lVar4 + 0x40) = uVar3;
      *(long *)(*(long *)(param_2 + 8) + 0x90) = lVar4 + 0x20;
    }
  }
  else if (*(long *)(lVar4 + 0x18) != 0) {
    func_0x003cf020(*(long *)(lVar4 + 0x18) + 8);
    *(undefined8 *)(lVar4 + 0x18) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x003a6a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))((undefined8 *)(param_1 + 0x18),param_2);
  return;
}



/* Entry: 00377c30; end: 00377c6b;  */

uint FUN_00377c30(int *param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_1;
  FUN_003a28d0(param_1,"grpc.enable_deadline_checking");
  FUN_003a2ea4(param_1);
  uVar2 = (uint)param_1 ^ 1;
  if (piVar1 != (int *)0x0) {
    if (*piVar1 == 1) {
      if (piVar1[4] == 0) {
        uVar2 = 0;
      }
      else {
        if (piVar1[4] != 1) {
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/channel_args.cc"
                       ,0x1cb,2,"%s treated as bool but set to %d (assuming true)");
        }
        uVar2 = 1;
      }
    }
    else {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/channel_args.cc"
                   ,0x1c2,2,"%s ignored: it must be an integer");
    }
  }
  return uVar2;
}



/* Entry: 00377c6c; end: 00377dbb;  */

undefined *** FUN_00377c6c(long param_1)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  long lVar3;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined ***pppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  ppuStack_58 = &PTR_FUN_009de118;
  ppuStack_50 = &PTR_DAT_009de038;
  pppuStack_40 = &ppuStack_58;
  FUN_003f517c(param_1 + 0x18,3,&UNK_00002710,&ppuStack_58);
  if (pppuStack_40 == &ppuStack_58) {
    lVar3 = 4;
    pppuVar1 = &ppuStack_58;
LAB_00377ce4:
    (*(code *)(*pppuVar1)[lVar3])();
  }
  else if (pppuStack_40 != (undefined ***)0x0) {
    lVar3 = 5;
    pppuVar1 = pppuStack_40;
    goto LAB_00377ce4;
  }
  ppuStack_58 = &PTR_FUN_009de118;
  ppuStack_50 = &PTR_FUN_009de0a0;
  pppuStack_40 = &ppuStack_58;
  FUN_003f517c(param_1 + 0x18,4,&UNK_00002710,&ppuStack_58);
  if (pppuStack_40 == &ppuStack_58) {
    lVar3 = 4;
    pppuVar1 = &ppuStack_58;
LAB_00377d38:
    (*(code *)(*pppuVar1)[lVar3])();
  }
  else {
    pppuVar1 = pppuStack_40;
    if (pppuStack_40 != (undefined ***)0x0) {
      lVar3 = 5;
      goto LAB_00377d38;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return pppuVar1;
  }
  ___stack_chk_fail();
  if (pppuStack_40 == &ppuStack_58) {
    lVar3 = 4;
    pppuVar2 = &ppuStack_58;
  }
  else {
    if (pppuStack_40 == (undefined ***)0x0) goto LAB_00377db4;
    lVar3 = 5;
    pppuVar2 = pppuStack_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_00377db4:
  __Unwind_Resume();
  FUN_00377a3c(pppuVar1[1],pppuVar1[2]);
  return pppuVar1;
}



/* Entry: 00377dbc; end: 00377deb;  */

long FUN_00377dbc(long param_1)

{
  FUN_00377a3c(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  return param_1;
}



/* Entry: 00377dec; end: 00377e8b;  */

ulong * FUN_00377dec(ulong *param_1,ulong *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  
  do {
    uVar4 = *param_1;
    uVar5 = uVar4 + 0x60;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = uVar5;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (param_1[2] < uVar5) {
    func_0x003d6048(param_1,0x60);
  }
  else {
    param_1 = (ulong *)((long)param_1 + uVar4 + 0x30);
  }
  uVar5 = *param_2;
  uVar3 = *param_3;
  *param_1 = uVar5;
  plVar6 = (long *)**(undefined8 **)(uVar5 + 0x10);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = *plVar6 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  param_1[9] = (ulong)FUN_00377e8c;
  param_1[10] = (ulong)param_1;
  param_1[0xb] = 0;
  func_0x003cf010(param_1 + 1,uVar3,param_1 + 8);
  return param_1;
}



/* Entry: 00377e8c; end: 003780a7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_00377e8c(long *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  undefined8 *puVar9;
  ulong uStack_78;
  ulong auStack_70 [4];
  undefined1 uStack_49;
  ulong uStack_48;
  ulong uStack_40;
  ulong *puStack_38;
  
  puVar9 = *(undefined8 **)(*param_1 + 0x10);
  puStack_38 = (ulong *)0x4;
  if (*param_2 == 4) {
LAB_00377ee4:
    plVar4 = (long *)*puVar9;
    do {
      lVar7 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      FUN_004005ec();
    }
    return;
  }
  puVar3 = param_2;
  FUN_00552b00(param_2,&puStack_38);
  if (((ulong)puStack_38 & 1) != 0) {
    FUN_0055293c();
  }
  if (((ulong)puVar3 & 1) != 0) goto LAB_00377ee4;
  auStack_70[2] = 0;
  auStack_70[3] = 0;
  auStack_70[1] = 0;
  FUN_003b646c(&uStack_48,2,"Deadline Exceeded",0x11,&uStack_49,auStack_70 + 1);
  FUN_003be104(&uStack_40,&uStack_48,3,4);
  uVar5 = *param_2;
  if (uStack_40 != uVar5) {
    *param_2 = uStack_40;
    uStack_40 = 0x36;
    if ((uVar5 & 1) == 0) goto LAB_00377f7c;
    FUN_0055293c();
    uVar5 = uStack_40;
  }
  if ((uVar5 & 1) != 0) {
    FUN_0055293c();
  }
LAB_00377f7c:
  if ((uStack_48 & 1) != 0) {
    FUN_0055293c();
  }
  puStack_38 = auStack_70 + 1;
  FUN_0033d548(&puStack_38);
  uVar6 = puVar9[1];
  auStack_70[0] = *param_2;
  if ((auStack_70[0] & 1) != 0) {
    piVar8 = (int *)(auStack_70[0] - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar2) {
        *piVar8 = *piVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_003bbb7c(uVar6,auStack_70);
  if ((auStack_70[0] & 1) != 0) {
    FUN_0055293c();
  }
  param_1[9] = (long)FUN_003780a8;
  param_1[10] = (long)param_1;
  param_1[0xb] = 0;
  uVar6 = puVar9[1];
  uStack_78 = *param_2;
  if ((uStack_78 & 1) != 0) {
    piVar8 = (int *)(uStack_78 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar2) {
        *piVar8 = *piVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_003bb88c(uVar6,param_1 + 8,&uStack_78,"deadline exceeded -- sending cancel_stream op");
  if ((uStack_78 & 1) == 0) {
    return;
  }
  FUN_0055293c();
  return;
}



/* Entry: 003780a8; end: 00378143;  */

void FUN_003780a8(undefined8 *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  puVar3 = param_1 + 8;
  param_1[9] = FUN_00378144;
  param_1[10] = param_1;
  param_1[0xb] = 0;
  FUN_00400bf0();
  *(byte *)(puVar3 + 2) = *(byte *)(puVar3 + 2) | 0x40;
  lVar5 = puVar3[1];
  uVar4 = *(ulong *)(lVar5 + 0x98);
  uVar6 = *param_2;
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
      uVar6 = *param_2;
    }
    *(ulong *)(lVar5 + 0x98) = uVar6;
    if ((uVar4 & 1) != 0) {
      FUN_0055293c();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00378140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,puVar3);
  return;
}



/* Entry: 00378144; end: 00378197;  */

void FUN_00378144(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uStack_38;
  undefined1 uStack_29;
  ulong uStack_28;
  
  puVar6 = *(undefined8 **)(*param_1 + 0x10);
  FUN_003bb974(puVar6[1],"got on_complete from cancel_stream batch");
  plVar3 = (long *)*puVar6;
  do {
    lVar5 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 + -1 == 0) {
    plVar4 = plVar3;
    FUN_003c3188();
    if ((((ulong)plVar4 & 1) == 0) && (func_0x003c1f6c(), (*(byte *)(*plVar4 + 0x28) >> 1 & 1) != 0)
       ) {
      uStack_28 = 0;
      FUN_003c2968(plVar3 + 1,&uStack_28,0,0);
      if ((uStack_28 & 1) == 0) {
        return;
      }
      FUN_0055293c();
      return;
    }
    uStack_38 = 0;
    FUN_003c1e6c(&uStack_29,plVar3 + 1,&uStack_38);
    if ((uStack_38 & 1) != 0) {
      FUN_0055293c();
    }
    return;
  }
  return;
}



/* Entry: 00378198; end: 00378227;  */

void FUN_00378198(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_30;
  undefined1 uStack_21;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x003cf020(*(long *)(param_1 + 0x18) + 8);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x40);
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



/* Entry: 00378228; end: 003782bf;  */

void FUN_00378228(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  ulong uStack_30;
  undefined1 uStack_21;
  
  lVar6 = *(long *)(param_1 + 0x10);
  lVar4 = *(long *)(lVar6 + 0x68);
  if ((*(byte *)(lVar4 + 1) >> 3 & 1) == 0) {
    uVar3 = 0x7fffffffffffffff;
  }
  else {
    uVar3 = *(undefined8 *)(lVar4 + 0x180);
  }
  FUN_00377a3c(param_1,uVar3);
  uVar3 = *(undefined8 *)(lVar6 + 0x70);
  uStack_30 = *param_2;
  if ((uStack_30 & 1) != 0) {
    piVar5 = (int *)(uStack_30 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
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



/* Entry: 003782c0; end: 003782c7;  */

void FUN_003782c0(void)

{
  return;
}



/* Entry: 003782c8; end: 003782fb;  */

void FUN_003782c8(long param_1)

{
  dword *pdVar1;
  undefined8 uVar2;
  
  pdVar1 = &MACH_HEADER.ncmds;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined ***)pdVar1 = &PTR_FUN_009de118;
  *(undefined8 *)(pdVar1 + 2) = uVar2;
  return;
}



/* Entry: 003782fc; end: 00378317;  */

void FUN_003782fc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_009de118;
  param_2[1] = uVar1;
  return;
}



/* Entry: 00378318; end: 0037844f;  */

undefined8 FUN_00378318(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uStack_40;
  long *plStack_38;
  
  puVar6 = &uStack_40;
  uVar5 = (uint)&uStack_40;
  lVar7 = *param_2;
  uStack_40 = *(undefined8 *)(lVar7 + 0x38);
  plStack_38 = *(long **)(lVar7 + 0x40);
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
  FUN_003a21a4(&uStack_40,"grpc.enable_deadline_checking",0x1d);
  FUN_003a21a4(&uStack_40,"grpc.minimal_stack",0x12);
  uVar5 = uVar5 & 0xffff;
  if (uVar5 < 0x101) {
    uVar5 = 0;
  }
  uVar5 = (uint)((uVar5 & 0xff) == 0);
  if (((ulong)puVar6 & 0xff00) != 0) {
    uVar5 = (uint)puVar6;
  }
  if ((uVar5 & 0xff) != 0) {
    FUN_003a6bac(lVar7,*(undefined8 *)(param_1 + 8));
  }
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return 1;
}



/* Entry: 00378450; end: 0037848b;  */

long FUN_00378450(long param_1,undefined8 param_2)

{
  FUN_0033ff44(param_2,&PTR_DAT_009de178);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 0037848c; end: 0037849b;  */

undefined ** FUN_0037848c(void)

{
  return &PTR_DAT_009de178;
}



/* Entry: 0037849c; end: 00378627;  */

char * FUN_0037849c(char *param_1,char *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  ulong *puVar5;
  char *pcVar6;
  undefined *puVar7;
  char *pcVar8;
  char *pcVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong *puVar13;
  undefined1 uStack_81;
  char *pcStack_80;
  char *pcStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  char *apcStack_58 [4];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  ppuVar4 = &PTR___tlv_bootstrap_00b2c390;
  pcVar9 = param_2;
  (*(code *)PTR___tlv_bootstrap_00b2c390)();
  puVar13 = (ulong *)*ppuVar4;
  do {
    uVar10 = *puVar13;
    uVar11 = uVar10 + 0x210;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar13,0x10);
    if (bVar3) {
      *puVar13 = uVar11;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (puVar13[2] < uVar11) {
    pcVar9 = section_000001f8.segname + 8;
    puVar5 = puVar13;
    func_0x003d6048();
  }
  else {
    puVar5 = (ulong *)((long)puVar13 + uVar10 + 0x30);
  }
  *(undefined4 *)puVar5 = 0;
  puVar5[0x3f] = 0;
  puVar5[0x40] = 0;
  puVar5[0x3e] = (ulong)puVar13;
  *(ulong **)param_1 = puVar5;
  pcVar6 = param_2;
  FUN_00552acc();
  *(uint *)puVar5 = (uint)*puVar5 | 0x400;
  *(int *)(puVar5 + 0x31) = (int)pcVar6;
  uVar11 = *(ulong *)param_2;
  if (uVar11 != 0) {
    if ((uVar11 & 1) == 0) {
      puVar7 = &UNK_00810ff6;
      bVar3 = (uVar11 & 3) != 2;
      if (bVar3) {
        puVar7 = (undefined *)0x0;
      }
      uVar11 = 0x1b;
      if (bVar3) {
        uVar11 = 0;
      }
    }
    else if ((char)*(byte *)(uVar11 + 0x1e) < '\0') {
      puVar7 = *(undefined **)(uVar11 + 7);
      uVar11 = *(ulong *)(uVar11 + 0xf);
    }
    else {
      puVar7 = (undefined *)(uVar11 + 7);
      uVar11 = (ulong)*(byte *)(uVar11 + 0x1e);
    }
    param_2 = *(char **)param_1;
    func_0x003ec288(apcStack_58,puVar7,uVar11);
    pcVar9 = (char *)apcStack_58;
    FUN_0034ce60(param_2);
    pcVar6 = apcStack_58[0];
    if ((long *)((long)&MACH_HEADER.magic + 1) < apcStack_58[0]) {
      do {
        lVar12 = *(long *)apcStack_58[0];
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(apcStack_58[0],0x10);
        if (bVar3) {
          *(long *)apcStack_58[0] = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 + -1 == 0) {
        (**(code **)(apcStack_58[0] + 8))();
        pcVar6 = apcStack_58[0];
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_38) {
    ___stack_chk_fail();
    if ((int)pcVar9 != 0) {
      func_0x0040cf10();
      FUN_0034b418(apcStack_58);
    }
    pcVar8 = pcVar6;
    __Unwind_Resume();
    pcStack_68 = FUN_00378628;
    *pcVar8 = '\0';
    *(undefined4 *)(pcVar8 + 8) = 0xffffffff;
    uVar1 = (uint)*(qword *)(pcVar9 + 8);
    if (uVar1 != 0xffffffff) {
      pcStack_80 = param_2;
      pcStack_78 = pcVar6;
      puStack_70 = &stack0xfffffffffffffff0;
      (*(code *)(&PTR_FUN_009de188)[uVar1])(&uStack_81,pcVar8,pcVar9);
      *(uint *)(pcVar8 + 8) = uVar1;
    }
    return pcVar8;
  }
  return param_1;
}



/* Entry: 00378628; end: 0037868b;  */

undefined1 * FUN_00378628(undefined1 *param_1,long param_2)

{
  uint uVar1;
  undefined1 uStack_21;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  uVar1 = *(uint *)(param_2 + 8);
  if (uVar1 != 0xffffffff) {
    (*(code *)(&PTR_FUN_009de188)[uVar1])(&uStack_21,param_1,param_2);
    *(uint *)(param_1 + 8) = uVar1;
  }
  return param_1;
}



/* Entry: 0037868c; end: 0037869f;  */

void FUN_0037868c(void)

{
  return;
}



/* Entry: 003786a0; end: 0037945f;  */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_003786a0(undefined8 *param_1,undefined8 param_2,ulong param_3,long param_4,
                 undefined8 *param_5)

{
  undefined8 ****ppppuVar1;
  ulong *puVar2;
  undefined8 ****ppppuVar3;
  undefined8 ****ppppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  code *pcVar9;
  undefined8 *****pppppuVar10;
  ulong uVar11;
  char **ppcVar12;
  undefined8 *****pppppuVar13;
  char *pcVar14;
  char *pcVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  segment_command *psVar19;
  long lVar20;
  ulong uVar21;
  undefined8 ****ppppuStack_2e0;
  undefined8 ****ppppuStack_2d8;
  undefined8 ****ppppuStack_2d0;
  long *plStack_2c0;
  long lStack_2b8;
  ulong *puStack_2b0;
  ulong *puStack_2a8;
  undefined8 ****ppppuStack_2a0;
  undefined8 ****ppppuStack_298;
  undefined8 ****ppppuStack_290;
  char *pcStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  char *pcStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  char *pcStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 ***pppuStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 uStack_219;
  undefined8 ****ppppuStack_218;
  ulong uStack_210;
  byte bStack_201;
  ulong uStack_200;
  char *pcStack_1f8;
  char *pcStack_1f0;
  char *pcStack_1e8;
  char *pcStack_1e0;
  undefined8 ***pppuStack_1d8;
  undefined8 ***pppuStack_1d0;
  undefined8 ***pppuStack_1c8;
  undefined8 ***pppuStack_1c0;
  undefined8 ***pppuStack_1b8;
  undefined8 ***pppuStack_1b0;
  undefined8 ***pppuStack_1a8;
  undefined8 ***pppuStack_1a0;
  undefined4 uStack_198;
  undefined8 uStack_194;
  int iStack_18c;
  undefined8 ***pppuStack_188;
  undefined8 ***pppuStack_180;
  undefined8 ***pppuStack_178;
  undefined8 ***pppuStack_170;
  undefined8 ***pppuStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  int iStack_154;
  undefined4 uStack_150;
  undefined8 uStack_14c;
  char *pcStack_140;
  char *pcStack_138;
  undefined1 *puStack_130;
  char *pcStack_128;
  char *pcStack_120;
  ulong uStack_118;
  char *pcStack_110;
  char *pcStack_108;
  undefined1 *puStack_100;
  char *pcStack_f8;
  char *pcStack_f0;
  undefined1 *puStack_e0;
  long lStack_d8;
  undefined1 auStack_d0 [32];
  char **ppcStack_b0;
  char *pcStack_a8;
  char *pcStack_a0;
  char **ppcStack_98;
  char **ppcStack_90;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_00999f88;
  func_0x003a2e80(param_3,"grpc.parse_fault_injection_method_config",0);
  uVar8 = uStack_14c._4_4_;
  uVar7 = uStack_194._4_4_;
  uStack_194._4_4_ = uVar7;
  uStack_14c._4_4_ = uVar8;
  if ((param_3 & 1) == 0) {
    *param_1 = 0;
    uVar5 = uStack_194;
    uVar6 = uStack_14c;
    goto LAB_0037920c;
  }
  ppppuStack_2a0 = (undefined8 *****)0x0;
  ppppuStack_298 = (undefined8 *****)0x0;
  ppppuStack_290 = (undefined8 *****)0x0;
  lStack_2b8 = 0;
  puStack_2b0 = (ulong *)0x0;
  param_4 = param_4 + 0x20;
  puStack_2a8 = (ulong *)0x0;
  uVar5 = uStack_194;
  uVar6 = uStack_14c;
  FUN_00379460(param_4,"faultInjectionPolicy",0x14,&plStack_2c0,&lStack_2b8,1);
  uVar6 = uStack_14c;
  uVar5 = uStack_194;
  if ((int)param_4 != 0) {
    ppppuStack_2d8 = (undefined8 *****)0x0;
    ppppuStack_2d0 = (undefined8 *****)0x0;
    ppppuStack_2e0 = (undefined8 *****)0x0;
    lVar20 = *plStack_2c0;
    if (plStack_2c0[1] != lVar20) {
      lVar18 = 0;
      uVar21 = 0;
      do {
        pppuStack_1d0 = (undefined8 ****)0x0;
        pppuStack_1d8 = (undefined8 ****)0x0;
        pppuStack_1c0 = (undefined8 ****)0x0;
        pppuStack_1c8 = (undefined8 ****)0x0;
        pppuStack_1b0 = (undefined8 ****)0x0;
        pppuStack_1b8 = (undefined8 ****)0x0;
        pppuStack_1a8 = (undefined8 ****)0x0;
        uStack_194 = 0;
        uStack_194._4_4_ = 0;
        pppuStack_1a0 = (undefined8 ****)0x0;
        uStack_198 = 0;
        pcStack_1e0 = (char *)((ulong)pcStack_1e0 & 0xffffffff00000000);
        iStack_18c = 100;
        pppuStack_180 = (undefined8 ****)0x0;
        pppuStack_188 = (undefined8 ****)0x0;
        pppuStack_170 = (undefined8 ****)0x0;
        pppuStack_178 = (undefined8 ****)0x0;
        uStack_160 = 0;
        pppuStack_168 = (undefined8 ****)0x0;
        iStack_154 = 0;
        uStack_150 = 0;
        uStack_15c = 0;
        uStack_158 = 0;
        uStack_14c = 0xffffffff00000064;
        uStack_14c._4_4_ = 0xffffffff;
        pcStack_1f8 = (char *)0x0;
        pcStack_1f0 = (char *)0x0;
        pcStack_1e8 = (char *)0x0;
        if (*(int *)(lVar20 + lVar18) == 5) {
          uVar11 = lVar20 + lVar18 + 0x20;
          pcStack_138 = (char *)0x0;
          pcStack_140 = (char *)0x0;
          puStack_130 = (undefined1 *)0x0;
          uVar17 = uVar11;
          FUN_003798c4(uVar11,"abortCode",9,&pcStack_140,&pcStack_1f8,0);
          uVar7 = uStack_14c._4_4_;
          uVar5 = uStack_194;
          uVar6 = uStack_14c;
          if ((int)uVar17 != 0) {
            pppppuVar10 = (undefined8 *****)pcStack_140;
            if (-1 < (long)puStack_130) {
              pppppuVar10 = (undefined8 *****)&pcStack_140;
            }
            uVar8 = uStack_194._4_4_;
            uStack_194 = uVar5;
            uVar5 = uStack_194;
            uStack_194._4_4_ = uVar8;
            uStack_14c._4_4_ = uVar7;
            FUN_003b055c(pppppuVar10,&pcStack_1e0);
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            uVar7 = uStack_14c._4_4_;
            if (((ulong)pppppuVar10 & 1) == 0) {
              uStack_248 = 0;
              uStack_240 = 0;
              pcStack_250 = (char *)0x0;
              uVar7 = uStack_194._4_4_;
              uStack_194 = uVar5;
              uVar8 = uStack_14c._4_4_;
              uStack_14c = uVar6;
              uVar5 = uStack_194;
              uStack_194._4_4_ = uVar7;
              uVar6 = uStack_14c;
              uStack_14c._4_4_ = uVar8;
              FUN_003b646c(&pcStack_110,2,"field:abortCode error:failed to parse status code",0x31,
                           &ppppuStack_218,&pcStack_250);
              uVar6 = uStack_14c;
              uVar5 = uStack_194;
              if (pcStack_1f0 < pcStack_1e8) {
                *(char **)pcStack_1f0 = pcStack_110;
                pcStack_110 = segment_command_00000020.segname + 0xe;
                pcStack_1f0 = pcStack_1f0 + 8;
              }
              else {
                lVar20 = (long)pcStack_1f0 - (long)pcStack_1f8 >> 3;
                uVar17 = lVar20 + 1;
                uStack_194 = uVar5;
                uStack_14c = uVar6;
                if (uVar17 >> 0x3d != 0) {
                  uVar7 = uStack_194._4_4_;
                  uVar8 = uStack_14c._4_4_;
                  uVar5 = uStack_194;
                  uStack_194._4_4_ = uVar7;
                  uVar6 = uStack_14c;
                  uStack_14c._4_4_ = uVar8;
                  FUN_0035d520(&pcStack_1f8);
                  uVar6 = uStack_14c;
                  uVar5 = uStack_194;
                  goto LAB_00379284;
                }
                uVar16 = (long)pcStack_1e8 - (long)pcStack_1f8 >> 2;
                if (uVar16 <= uVar17) {
                  uVar16 = uVar17;
                }
                if (0x7ffffffffffffff7 < (ulong)((long)pcStack_1e8 - (long)pcStack_1f8)) {
                  uVar16 = 0x1fffffffffffffff;
                }
                if (uVar16 == 0) {
                  ppcVar12 = (char **)0x0;
                  ppcStack_90 = &pcStack_1e8;
                }
                else {
                  ppcVar12 = &pcStack_1e8;
                  uVar7 = uStack_194._4_4_;
                  uVar8 = uStack_14c._4_4_;
                  ppcStack_90 = &pcStack_1e8;
                  uVar5 = uStack_194;
                  uStack_194._4_4_ = uVar7;
                  uVar6 = uStack_14c;
                  uStack_14c._4_4_ = uVar8;
                  FUN_0035d534();
                  uVar6 = uStack_14c;
                  uVar5 = uStack_194;
                }
                uStack_14c = uVar6;
                uStack_194 = uVar5;
                uVar8 = uStack_14c._4_4_;
                uVar6 = uStack_14c;
                uVar7 = uStack_194._4_4_;
                uVar5 = uStack_194;
                pcVar15 = (char *)(ppcVar12 + lVar20);
                uStack_194._4_4_ = uVar7;
                uStack_14c._4_4_ = uVar8;
                *(char **)pcVar15 = pcStack_110;
                pcStack_110 = segment_command_00000020.segname + 0xe;
                uVar7 = uStack_194._4_4_;
                uStack_194 = uVar5;
                uVar8 = uStack_14c._4_4_;
                uStack_14c = uVar6;
                ppcStack_b0 = ppcVar12;
                pcStack_a8 = pcVar15;
                pcStack_a0 = pcVar15 + 8;
                ppcStack_98 = ppcVar12 + uVar16;
                uVar5 = uStack_194;
                uStack_194._4_4_ = uVar7;
                uVar6 = uStack_14c;
                uStack_14c._4_4_ = uVar8;
                FUN_0035d4ac(&pcStack_1f8,&ppcStack_b0);
                uVar6 = uStack_14c;
                uVar5 = uStack_194;
                pcVar15 = pcStack_1f0;
                uVar7 = uStack_194._4_4_;
                uStack_194 = uVar5;
                uVar8 = uStack_14c._4_4_;
                uStack_14c = uVar6;
                uVar5 = uStack_194;
                uStack_194._4_4_ = uVar7;
                uVar6 = uStack_14c;
                uStack_14c._4_4_ = uVar8;
                FUN_0035d67c(&ppcStack_b0);
                uVar6 = uStack_14c;
                uVar5 = uStack_194;
                pcStack_1f0 = pcVar15;
                if (((ulong)pcStack_110 & 1) != 0) {
                  uVar7 = uStack_194._4_4_;
                  uStack_194 = uVar5;
                  uVar8 = uStack_14c._4_4_;
                  uStack_14c = uVar6;
                  uVar5 = uStack_194;
                  uStack_194._4_4_ = uVar7;
                  uVar6 = uStack_14c;
                  uStack_14c._4_4_ = uVar8;
                  FUN_0055293c();
                  uVar6 = uStack_14c;
                  uVar5 = uStack_194;
                }
              }
              uStack_14c = uVar6;
              uStack_194 = uVar5;
              uVar8 = uStack_14c._4_4_;
              uVar7 = uStack_194._4_4_;
              ppcStack_b0 = &pcStack_250;
              uVar5 = uStack_194;
              uStack_194._4_4_ = uVar7;
              uVar6 = uStack_14c;
              uStack_14c._4_4_ = uVar8;
              FUN_0033d548(&ppcStack_b0);
              uVar6 = uStack_14c;
              uVar5 = uStack_194;
              uVar7 = uStack_14c._4_4_;
            }
          }
          uStack_14c._4_4_ = uVar7;
          uStack_14c = uVar6;
          uStack_194 = uVar5;
          uVar8 = uStack_14c._4_4_;
          uVar7 = uStack_194._4_4_;
          uVar17 = uVar11;
          uVar5 = uStack_194;
          uStack_194._4_4_ = uVar7;
          uVar6 = uStack_14c;
          uStack_14c._4_4_ = uVar8;
          FUN_003798c4(uVar11,"abortMessage",0xc,&pppuStack_1d8,&pcStack_1f8,0);
          uVar6 = uStack_14c;
          uVar5 = uStack_194;
          if ((uVar17 & 1) == 0) {
            uVar7 = uStack_194._4_4_;
            uStack_194 = uVar5;
            uVar8 = uStack_14c._4_4_;
            uStack_14c = uVar6;
            uVar5 = uStack_194;
            uStack_194._4_4_ = uVar7;
            uVar6 = uStack_14c;
            uStack_14c._4_4_ = uVar8;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                      (&pppuStack_1d8,"Fault injected");
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
          }
          uStack_14c = uVar6;
          uStack_194 = uVar5;
          uVar8 = uStack_14c._4_4_;
          uVar7 = uStack_194._4_4_;
          uVar5 = uStack_194;
          uStack_194._4_4_ = uVar7;
          uVar6 = uStack_14c;
          uStack_14c._4_4_ = uVar8;
          FUN_003798c4(uVar11,"abortCodeHeader",0xf,&pppuStack_1c0,&pcStack_1f8,0);
          uVar6 = uStack_14c;
          uVar5 = uStack_194;
          uVar7 = uStack_194._4_4_;
          uStack_194 = uVar5;
          uVar8 = uStack_14c._4_4_;
          uStack_14c = uVar6;
          uVar5 = uStack_194;
          uStack_194._4_4_ = uVar7;
          uVar6 = uStack_14c;
          uStack_14c._4_4_ = uVar8;
          FUN_003798c4(uVar11,"abortPercentageHeader",0x15,&pppuStack_1a8,&pcStack_1f8,0);
          uVar6 = uStack_14c;
          uVar5 = uStack_194;
          uVar7 = uStack_194._4_4_;
          uStack_194 = uVar5;
          uVar8 = uStack_14c._4_4_;
          uStack_14c = uVar6;
          uVar5 = uStack_194;
          uStack_194._4_4_ = uVar7;
          uVar6 = uStack_14c;
          uStack_14c._4_4_ = uVar8;
          FUN_00379be4(uVar11,"abortPercentageNumerator",0x18,(long)&uStack_194 + 4,&pcStack_1f8,0);
          uVar6 = uStack_14c;
          uVar5 = uStack_194;
          uVar17 = uVar11;
          uVar7 = uStack_194._4_4_;
          uStack_194 = uVar5;
          uVar8 = uStack_14c._4_4_;
          uStack_14c = uVar6;
          uVar5 = uStack_194;
          uStack_194._4_4_ = uVar7;
          uVar6 = uStack_14c;
          uStack_14c._4_4_ = uVar8;
          FUN_00379be4(uVar11,"abortPercentageDenominator",0x1a,&iStack_18c,&pcStack_1f8,0);
          uVar6 = uStack_14c;
          uVar5 = uStack_194;
          if (((((int)uVar17 != 0) && (iStack_18c != 100)) && (iStack_18c != 10000)) &&
             (iStack_18c != 1000000)) {
            uStack_260 = 0;
            uStack_258 = 0;
            pcStack_268 = (char *)0x0;
            uVar7 = uStack_194._4_4_;
            uStack_194 = uVar5;
            uVar8 = uStack_14c._4_4_;
            uStack_14c = uVar6;
            uVar5 = uStack_194;
            uStack_194._4_4_ = uVar7;
            uVar6 = uStack_14c;
            uStack_14c._4_4_ = uVar8;
            FUN_003b646c(&pcStack_110,2,
                         "field:abortPercentageDenominator error:Denominator can only be one of 100, 10000, 1000000"
                         ,0x59,&ppppuStack_218,&pcStack_268);
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            if (pcStack_1f0 < pcStack_1e8) {
              *(char **)pcStack_1f0 = pcStack_110;
              pcStack_110 = segment_command_00000020.segname + 0xe;
              pcStack_1f0 = pcStack_1f0 + 8;
            }
            else {
              lVar20 = (long)pcStack_1f0 - (long)pcStack_1f8 >> 3;
              uVar17 = lVar20 + 1;
              uStack_194 = uVar5;
              uStack_14c = uVar6;
              if (uVar17 >> 0x3d != 0) {
                uVar7 = uStack_194._4_4_;
                uVar8 = uStack_14c._4_4_;
                uVar5 = uStack_194;
                uStack_194._4_4_ = uVar7;
                uVar6 = uStack_14c;
                uStack_14c._4_4_ = uVar8;
                FUN_0035d520(&pcStack_1f8);
                uVar8 = uStack_14c._4_4_;
                uVar7 = uStack_194._4_4_;
                uVar5 = uStack_194;
                uVar6 = uStack_14c;
                uStack_194._4_4_ = uVar7;
                uStack_14c._4_4_ = uVar8;
                goto LAB_00379284;
              }
              uVar16 = (long)pcStack_1e8 - (long)pcStack_1f8 >> 2;
              if (uVar16 <= uVar17) {
                uVar16 = uVar17;
              }
              if (0x7ffffffffffffff7 < (ulong)((long)pcStack_1e8 - (long)pcStack_1f8)) {
                uVar16 = 0x1fffffffffffffff;
              }
              if (uVar16 == 0) {
                ppcVar12 = (char **)0x0;
                ppcStack_90 = &pcStack_1e8;
              }
              else {
                ppcVar12 = &pcStack_1e8;
                uVar7 = uStack_194._4_4_;
                uVar8 = uStack_14c._4_4_;
                ppcStack_90 = &pcStack_1e8;
                uVar5 = uStack_194;
                uStack_194._4_4_ = uVar7;
                uVar6 = uStack_14c;
                uStack_14c._4_4_ = uVar8;
                FUN_0035d534();
                uVar6 = uStack_14c;
                uVar5 = uStack_194;
              }
              uStack_14c = uVar6;
              uStack_194 = uVar5;
              uVar8 = uStack_14c._4_4_;
              uVar6 = uStack_14c;
              uVar7 = uStack_194._4_4_;
              uVar5 = uStack_194;
              pcVar15 = (char *)(ppcVar12 + lVar20);
              uStack_194._4_4_ = uVar7;
              uStack_14c._4_4_ = uVar8;
              *(char **)pcVar15 = pcStack_110;
              pcStack_110 = segment_command_00000020.segname + 0xe;
              uVar7 = uStack_194._4_4_;
              uStack_194 = uVar5;
              uVar8 = uStack_14c._4_4_;
              uStack_14c = uVar6;
              ppcStack_b0 = ppcVar12;
              pcStack_a8 = pcVar15;
              pcStack_a0 = pcVar15 + 8;
              ppcStack_98 = ppcVar12 + uVar16;
              uVar5 = uStack_194;
              uStack_194._4_4_ = uVar7;
              uVar6 = uStack_14c;
              uStack_14c._4_4_ = uVar8;
              FUN_0035d4ac(&pcStack_1f8,&ppcStack_b0);
              uVar6 = uStack_14c;
              uVar5 = uStack_194;
              pcVar15 = pcStack_1f0;
              uVar7 = uStack_194._4_4_;
              uStack_194 = uVar5;
              uVar8 = uStack_14c._4_4_;
              uStack_14c = uVar6;
              uVar5 = uStack_194;
              uStack_194._4_4_ = uVar7;
              uVar6 = uStack_14c;
              uStack_14c._4_4_ = uVar8;
              FUN_0035d67c(&ppcStack_b0);
              uVar6 = uStack_14c;
              uVar5 = uStack_194;
              pcStack_1f0 = pcVar15;
              if (((ulong)pcStack_110 & 1) != 0) {
                uVar7 = uStack_194._4_4_;
                uStack_194 = uVar5;
                uVar8 = uStack_14c._4_4_;
                uStack_14c = uVar6;
                uVar5 = uStack_194;
                uStack_194._4_4_ = uVar7;
                uVar6 = uStack_14c;
                uStack_14c._4_4_ = uVar8;
                FUN_0055293c();
                uVar6 = uStack_14c;
                uVar5 = uStack_194;
              }
            }
            uStack_14c = uVar6;
            uStack_194 = uVar5;
            uVar8 = uStack_14c._4_4_;
            uVar7 = uStack_194._4_4_;
            ppcStack_b0 = &pcStack_268;
            uVar5 = uStack_194;
            uStack_194._4_4_ = uVar7;
            uVar6 = uStack_14c;
            uStack_14c._4_4_ = uVar8;
            FUN_0033d548(&ppcStack_b0);
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
          }
          uStack_14c = uVar6;
          uStack_194 = uVar5;
          uVar8 = uStack_14c._4_4_;
          uVar7 = uStack_194._4_4_;
          uVar5 = uStack_194;
          uStack_194._4_4_ = uVar7;
          uVar6 = uStack_14c;
          uStack_14c._4_4_ = uVar8;
          FUN_003d2d74(uVar11,"delay",5,&pppuStack_188,&pcStack_1f8,0);
          uVar6 = uStack_14c;
          uVar5 = uStack_194;
          uVar7 = uStack_194._4_4_;
          uStack_194 = uVar5;
          uVar8 = uStack_14c._4_4_;
          uStack_14c = uVar6;
          uVar5 = uStack_194;
          uStack_194._4_4_ = uVar7;
          uVar6 = uStack_14c;
          uStack_14c._4_4_ = uVar8;
          FUN_003798c4(uVar11,"delayHeader",0xb,&pppuStack_180,&pcStack_1f8,0);
          uVar6 = uStack_14c;
          uVar5 = uStack_194;
          uVar7 = uStack_194._4_4_;
          uStack_194 = uVar5;
          uVar8 = uStack_14c._4_4_;
          uStack_14c = uVar6;
          uVar5 = uStack_194;
          uStack_194._4_4_ = uVar7;
          uVar6 = uStack_14c;
          uStack_14c._4_4_ = uVar8;
          FUN_003798c4(uVar11,"delayPercentageHeader",0x15,&pppuStack_168,&pcStack_1f8,0);
          uVar6 = uStack_14c;
          uVar5 = uStack_194;
          uVar7 = uStack_194._4_4_;
          uStack_194 = uVar5;
          uVar8 = uStack_14c._4_4_;
          uStack_14c = uVar6;
          uVar5 = uStack_194;
          uStack_194._4_4_ = uVar7;
          uVar6 = uStack_14c;
          uStack_14c._4_4_ = uVar8;
          FUN_00379be4(uVar11,"delayPercentageNumerator",0x18,&uStack_150,&pcStack_1f8,0);
          uVar6 = uStack_14c;
          uVar5 = uStack_194;
          uVar17 = uVar11;
          uVar7 = uStack_194._4_4_;
          uStack_194 = uVar5;
          uVar8 = uStack_14c._4_4_;
          uStack_14c = uVar6;
          uVar5 = uStack_194;
          uStack_194._4_4_ = uVar7;
          uVar6 = uStack_14c;
          uStack_14c._4_4_ = uVar8;
          FUN_00379be4(uVar11,"delayPercentageDenominator",0x1a,&uStack_14c,&pcStack_1f8,0);
          uVar6 = uStack_14c;
          uVar5 = uStack_194;
          if ((((int)uVar17 != 0) && (uStack_14c._0_4_ = (int)uVar6, (int)uStack_14c != 100)) &&
             (((int)uStack_14c != 10000 && ((int)uStack_14c != 1000000)))) {
            uStack_278 = 0;
            uStack_270 = 0;
            pcStack_280 = (char *)0x0;
            uVar7 = uStack_194._4_4_;
            uStack_194 = uVar5;
            uVar8 = uStack_14c._4_4_;
            uStack_14c = uVar6;
            uVar5 = uStack_194;
            uStack_194._4_4_ = uVar7;
            uVar6 = uStack_14c;
            uStack_14c._4_4_ = uVar8;
            FUN_003b646c(&pcStack_110,2,
                         "field:delayPercentageDenominator error:Denominator can only be one of 100, 10000, 1000000"
                         ,0x59,&ppppuStack_218,&pcStack_280);
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            if (pcStack_1f0 < pcStack_1e8) {
              *(char **)pcStack_1f0 = pcStack_110;
              pcStack_110 = segment_command_00000020.segname + 0xe;
              pcStack_1f0 = pcStack_1f0 + 8;
            }
            else {
              lVar20 = (long)pcStack_1f0 - (long)pcStack_1f8 >> 3;
              uVar17 = lVar20 + 1;
              uStack_194 = uVar5;
              uStack_14c = uVar6;
              if (uVar17 >> 0x3d != 0) {
                uVar7 = uStack_194._4_4_;
                uVar8 = uStack_14c._4_4_;
                uVar5 = uStack_194;
                uStack_194._4_4_ = uVar7;
                uVar6 = uStack_14c;
                uStack_14c._4_4_ = uVar8;
                FUN_0035d520(&pcStack_1f8);
                uVar6 = uStack_14c;
                uVar5 = uStack_194;
                goto LAB_00379284;
              }
              uVar16 = (long)pcStack_1e8 - (long)pcStack_1f8 >> 2;
              if (uVar16 <= uVar17) {
                uVar16 = uVar17;
              }
              if (0x7ffffffffffffff7 < (ulong)((long)pcStack_1e8 - (long)pcStack_1f8)) {
                uVar16 = 0x1fffffffffffffff;
              }
              if (uVar16 == 0) {
                ppcVar12 = (char **)0x0;
                ppcStack_90 = &pcStack_1e8;
              }
              else {
                ppcVar12 = &pcStack_1e8;
                uVar7 = uStack_194._4_4_;
                uVar8 = uStack_14c._4_4_;
                ppcStack_90 = &pcStack_1e8;
                uVar5 = uStack_194;
                uStack_194._4_4_ = uVar7;
                uVar6 = uStack_14c;
                uStack_14c._4_4_ = uVar8;
                FUN_0035d534();
                uVar6 = uStack_14c;
                uVar5 = uStack_194;
              }
              uStack_14c = uVar6;
              uStack_194 = uVar5;
              uVar8 = uStack_14c._4_4_;
              uVar6 = uStack_14c;
              uVar7 = uStack_194._4_4_;
              uVar5 = uStack_194;
              pcVar15 = (char *)(ppcVar12 + lVar20);
              uStack_194._4_4_ = uVar7;
              uStack_14c._4_4_ = uVar8;
              *(char **)pcVar15 = pcStack_110;
              pcStack_110 = segment_command_00000020.segname + 0xe;
              uVar7 = uStack_194._4_4_;
              uStack_194 = uVar5;
              uVar8 = uStack_14c._4_4_;
              uStack_14c = uVar6;
              ppcStack_b0 = ppcVar12;
              pcStack_a8 = pcVar15;
              pcStack_a0 = pcVar15 + 8;
              ppcStack_98 = ppcVar12 + uVar16;
              uVar5 = uStack_194;
              uStack_194._4_4_ = uVar7;
              uVar6 = uStack_14c;
              uStack_14c._4_4_ = uVar8;
              FUN_0035d4ac(&pcStack_1f8,&ppcStack_b0);
              uVar6 = uStack_14c;
              uVar5 = uStack_194;
              pcVar15 = pcStack_1f0;
              uVar7 = uStack_194._4_4_;
              uStack_194 = uVar5;
              uVar8 = uStack_14c._4_4_;
              uStack_14c = uVar6;
              uVar5 = uStack_194;
              uStack_194._4_4_ = uVar7;
              uVar6 = uStack_14c;
              uStack_14c._4_4_ = uVar8;
              FUN_0035d67c(&ppcStack_b0);
              uVar6 = uStack_14c;
              uVar5 = uStack_194;
              pcStack_1f0 = pcVar15;
              if (((ulong)pcStack_110 & 1) != 0) {
                uVar7 = uStack_194._4_4_;
                uStack_194 = uVar5;
                uVar8 = uStack_14c._4_4_;
                uStack_14c = uVar6;
                uVar5 = uStack_194;
                uStack_194._4_4_ = uVar7;
                uVar6 = uStack_14c;
                uStack_14c._4_4_ = uVar8;
                FUN_0055293c();
                uVar6 = uStack_14c;
                uVar5 = uStack_194;
              }
            }
            uStack_14c = uVar6;
            uStack_194 = uVar5;
            uVar8 = uStack_14c._4_4_;
            uVar7 = uStack_194._4_4_;
            ppcStack_b0 = &pcStack_280;
            uVar5 = uStack_194;
            uStack_194._4_4_ = uVar7;
            uVar6 = uStack_14c;
            uStack_14c._4_4_ = uVar8;
            FUN_0033d548(&ppcStack_b0);
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
          }
          uStack_14c = uVar6;
          uStack_194 = uVar5;
          uVar8 = uStack_14c._4_4_;
          uVar7 = uStack_194._4_4_;
          uVar5 = uStack_194;
          uStack_194._4_4_ = uVar7;
          uVar6 = uStack_14c;
          uStack_14c._4_4_ = uVar8;
          FUN_00379be4(uVar11,"maxFaults",9,(long)&uStack_14c + 4,&pcStack_1f8,0);
          uVar6 = uStack_14c;
          uVar5 = uStack_194;
          uVar7 = uStack_194._4_4_;
          uVar8 = uStack_14c._4_4_;
          if (pcStack_1f8 != pcStack_1f0) {
            ppcStack_b0 = (char **)0x8c3562;
            pcStack_a8 = segment_command_00000020.segname + 3;
            uVar11 = uVar21;
            uStack_194 = uVar5;
            uStack_14c = uVar6;
            uVar5 = uStack_194;
            uStack_194._4_4_ = uVar7;
            uVar6 = uStack_14c;
            uStack_14c._4_4_ = uVar8;
            func_0x00574ad8(uVar21,auStack_d0);
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            lStack_d8 = uVar11 - (long)auStack_d0;
            uVar7 = uStack_194._4_4_;
            uStack_194 = uVar5;
            uVar8 = uStack_14c._4_4_;
            uStack_14c = uVar6;
            puStack_e0 = auStack_d0;
            uVar5 = uStack_194;
            uStack_194._4_4_ = uVar7;
            uVar6 = uStack_14c;
            uStack_14c._4_4_ = uVar8;
            FUN_00575d30(&ppppuStack_218,&ppcStack_b0,&puStack_e0);
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            uVar11 = uStack_210;
            pppppuVar10 = (undefined8 *****)ppppuStack_218;
            if (-1 < (char)bStack_201) {
              uVar11 = (ulong)bStack_201;
              pppppuVar10 = &ppppuStack_218;
            }
            uVar7 = uStack_194._4_4_;
            uStack_194 = uVar5;
            uVar8 = uStack_14c._4_4_;
            uStack_14c = uVar6;
            uVar5 = uStack_194;
            uStack_194._4_4_ = uVar7;
            uVar6 = uStack_14c;
            uStack_14c._4_4_ = uVar8;
            FUN_00379780(&uStack_118,&uStack_200,pppppuVar10,uVar11,&pcStack_1f8);
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            if (puStack_2b0 < puStack_2a8) {
              *puStack_2b0 = uStack_118;
              uStack_118 = 0x36;
              puStack_2b0 = puStack_2b0 + 1;
            }
            else {
              lVar20 = (long)puStack_2b0 - lStack_2b8 >> 3;
              uVar11 = lVar20 + 1;
              if (uVar11 >> 0x3d != 0) goto LAB_00379258;
              uVar17 = (long)puStack_2a8 - lStack_2b8 >> 2;
              if (uVar17 <= uVar11) {
                uVar17 = uVar11;
              }
              if (0x7ffffffffffffff7 < (ulong)((long)puStack_2a8 - lStack_2b8)) {
                uVar17 = 0x1fffffffffffffff;
              }
              pcStack_f0 = (char *)&puStack_2a8;
              if (uVar17 == 0) {
                pcVar15 = (char *)0x0;
              }
              else {
                pcVar15 = (char *)&puStack_2a8;
                uVar7 = uStack_194._4_4_;
                uStack_194 = uVar5;
                uVar8 = uStack_14c._4_4_;
                uStack_14c = uVar6;
                uVar5 = uStack_194;
                uStack_194._4_4_ = uVar7;
                uVar6 = uStack_14c;
                uStack_14c._4_4_ = uVar8;
                FUN_0035d534();
                uVar6 = uStack_14c;
                uVar5 = uStack_194;
              }
              uStack_14c = uVar6;
              uStack_194 = uVar5;
              uVar8 = uStack_14c._4_4_;
              uVar6 = uStack_14c;
              uVar7 = uStack_194._4_4_;
              uVar5 = uStack_194;
              pcVar14 = pcVar15 + lVar20 * 8;
              uStack_194._4_4_ = uVar7;
              uStack_14c._4_4_ = uVar8;
              *(ulong *)pcVar14 = uStack_118;
              uStack_118 = 0x36;
              uVar7 = uStack_194._4_4_;
              uStack_194 = uVar5;
              uVar8 = uStack_14c._4_4_;
              uStack_14c = uVar6;
              pcStack_110 = pcVar15;
              pcStack_108 = pcVar14;
              puStack_100 = pcVar14 + 8;
              pcStack_f8 = pcVar15 + uVar17 * 8;
              uVar5 = uStack_194;
              uStack_194._4_4_ = uVar7;
              uVar6 = uStack_14c;
              uStack_14c._4_4_ = uVar8;
              FUN_0035d4ac(&lStack_2b8,&pcStack_110);
              uVar6 = uStack_14c;
              uVar5 = uStack_194;
              puVar2 = puStack_2b0;
              uVar7 = uStack_194._4_4_;
              uStack_194 = uVar5;
              uVar8 = uStack_14c._4_4_;
              uStack_14c = uVar6;
              uVar5 = uStack_194;
              uStack_194._4_4_ = uVar7;
              uVar6 = uStack_14c;
              uStack_14c._4_4_ = uVar8;
              FUN_0035d67c(&pcStack_110);
              uVar6 = uStack_14c;
              uVar5 = uStack_194;
              puStack_2b0 = puVar2;
              if ((uStack_118 & 1) != 0) {
                uVar7 = uStack_194._4_4_;
                uStack_194 = uVar5;
                uVar8 = uStack_14c._4_4_;
                uStack_14c = uVar6;
                uVar5 = uStack_194;
                uStack_194._4_4_ = uVar7;
                uVar6 = uStack_14c;
                uStack_14c._4_4_ = uVar8;
                FUN_0055293c();
                uVar6 = uStack_14c;
                uVar5 = uStack_194;
              }
            }
            uStack_14c = uVar6;
            uStack_194 = uVar5;
            uVar8 = uStack_14c._4_4_;
            uVar7 = uStack_194._4_4_;
            uVar5 = uStack_194;
            uVar6 = uStack_14c;
            if ((char)bStack_201 < '\0') {
              uStack_194._4_4_ = uVar7;
              uStack_14c._4_4_ = uVar8;
              __ZdlPv(ppppuStack_218);
              uVar6 = uStack_14c;
              uVar5 = uStack_194;
              uVar7 = uStack_194._4_4_;
              uVar8 = uStack_14c._4_4_;
            }
          }
          uStack_14c._4_4_ = uVar8;
          uStack_194._4_4_ = uVar7;
          uStack_14c = uVar6;
          uStack_194 = uVar5;
          uVar8 = uStack_14c._4_4_;
          uVar7 = uStack_194._4_4_;
          if (ppppuStack_2d8 < ppppuStack_2d0) {
            *(undefined4 *)ppppuStack_2d8 = pcStack_1e0._0_4_;
            uStack_14c._4_4_ = uVar8;
            uStack_194._4_4_ = uVar7;
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            ppppuStack_2d8[3] = pppuStack_1c8;
            uStack_14c = uVar6;
            uStack_194 = uVar5;
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            ppppuStack_2d8[2] = pppuStack_1d0;
            uStack_14c = uVar6;
            uStack_194 = uVar5;
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            ppppuStack_2d8[1] = pppuStack_1d8;
            uStack_14c = uVar6;
            uStack_194 = uVar5;
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            pppuStack_1d0 = (undefined8 ****)0x0;
            pppuStack_1c8 = (undefined8 ****)0x0;
            pppuStack_1d8 = (undefined8 ****)0x0;
            ppppuStack_2d8[5] = pppuStack_1b8;
            uStack_14c = uVar6;
            uStack_194 = uVar5;
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            ppppuStack_2d8[4] = pppuStack_1c0;
            uStack_14c = uVar6;
            uStack_194 = uVar5;
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            ppppuStack_2d8[6] = pppuStack_1b0;
            uStack_14c = uVar6;
            uStack_194 = uVar5;
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            pppuStack_1b8 = (undefined8 ****)0x0;
            pppuStack_1b0 = (undefined8 ****)0x0;
            pppuStack_1c0 = (undefined8 ****)0x0;
            ppppuStack_2d8[9] = (undefined8 ****)CONCAT84(uVar5,uStack_198);
            uStack_14c = uVar6;
            uStack_194 = uVar5;
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            ppppuStack_2d8[8] = pppuStack_1a0;
            uStack_14c = uVar6;
            uStack_194 = uVar5;
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            ppppuStack_2d8[7] = pppuStack_1a8;
            uStack_14c = uVar6;
            uStack_194 = uVar5;
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            pppuStack_1a0 = (undefined8 ****)0x0;
            pppuStack_1a8 = (undefined8 ****)0x0;
            ppppuVar1 = (undefined8 ****)CONCAT44(iStack_18c,uStack_194._4_4_);
            ppppuStack_2d8[0xb] = pppuStack_188;
            uStack_14c = uVar6;
            uStack_194 = uVar5;
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            ppppuStack_2d8[10] = ppppuVar1;
            uStack_14c = uVar6;
            uStack_194 = uVar5;
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            ppppuStack_2d8[0xe] = pppuStack_170;
            uStack_14c = uVar6;
            uStack_194 = uVar5;
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            ppppuStack_2d8[0xd] = pppuStack_178;
            uStack_14c = uVar6;
            uStack_194 = uVar5;
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            ppppuStack_2d8[0xc] = pppuStack_180;
            uStack_14c = uVar6;
            uStack_194 = uVar5;
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            pppuStack_180 = (undefined8 ****)0x0;
            pppuStack_178 = (undefined8 ****)0x0;
            pppuStack_170 = (undefined8 ****)0x0;
            ppppuStack_2d8[0x11] = (undefined8 ****)CONCAT44(iStack_154,uStack_158);
            uStack_14c = uVar6;
            uStack_194 = uVar5;
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            ppppuStack_2d8[0x10] = (undefined8 ****)CONCAT44(uStack_15c,uStack_160);
            uStack_14c = uVar6;
            uStack_194 = uVar5;
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            ppppuStack_2d8[0xf] = pppuStack_168;
            uStack_14c = uVar6;
            uStack_194 = uVar5;
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            pppuStack_168 = (undefined8 ****)0x0;
            uStack_160 = 0;
            uStack_15c = 0;
            uStack_158 = 0;
            iStack_154 = 0;
            ppppuVar1 = (undefined8 ****)CONCAT84(uVar6,uStack_150);
            *(undefined4 *)(ppppuStack_2d8 + 0x13) = uStack_14c._4_4_;
            uStack_14c = uVar6;
            uStack_194 = uVar5;
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            ppppuStack_2d8[0x12] = ppppuVar1;
            uStack_14c = uVar6;
            uStack_194 = uVar5;
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            pppppuVar13 = (undefined8 *****)(ppppuStack_2d8 + 0x14);
          }
          else {
            pppppuVar13 = &ppppuStack_2e0;
            uVar5 = uStack_194;
            uStack_194._4_4_ = uVar7;
            uVar6 = uStack_14c;
            uStack_14c._4_4_ = uVar8;
            FUN_0037a5cc(pppppuVar13,&pcStack_1e0);
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
          }
          uStack_14c = uVar6;
          uStack_194 = uVar5;
          uVar8 = uStack_14c._4_4_;
          uVar7 = uStack_194._4_4_;
          pppppuVar10 = (undefined8 *****)pcStack_140;
          ppppuStack_2d8 = pppppuVar13;
          uVar5 = uStack_194;
          uVar6 = uStack_14c;
          uStack_194._4_4_ = uVar7;
          uStack_14c._4_4_ = uVar8;
          if ((long)puStack_130 < 0) {
LAB_00379078:
            uStack_14c = uVar6;
            uStack_194 = uVar5;
            uVar8 = uStack_14c._4_4_;
            uVar7 = uStack_194._4_4_;
            uVar5 = uStack_194;
            uStack_194._4_4_ = uVar7;
            uVar6 = uStack_14c;
            uStack_14c._4_4_ = uVar8;
            __ZdlPv(pppppuVar10);
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
          }
        }
        else {
          ppcStack_b0 = (char **)0x8c3364;
          pcStack_a8 = (char *)((long)&MACH_HEADER.flags + 3);
          uVar11 = uVar21;
          func_0x00574ad8(uVar21,auStack_d0);
          uVar7 = uStack_14c._4_4_;
          uVar5 = uStack_194;
          lStack_d8 = uVar11 - (long)auStack_d0;
          pcStack_110 = " is not a JSON object";
          pcStack_108 = (char *)((long)&MACH_HEADER.sizeofcmds + 1);
          uVar8 = uStack_194._4_4_;
          uStack_194 = uVar5;
          puStack_e0 = auStack_d0;
          uVar5 = uStack_194;
          uStack_194._4_4_ = uVar8;
          uVar6 = uStack_14c;
          uStack_14c._4_4_ = uVar7;
          FUN_00575ddc(&ppppuStack_218,&ppcStack_b0,&puStack_e0,&pcStack_110);
          uVar7 = uStack_14c._4_4_;
          uVar5 = uStack_194;
          uVar11 = uStack_210;
          pppppuVar10 = (undefined8 *****)ppppuStack_218;
          if (-1 < (char)bStack_201) {
            uVar11 = (ulong)bStack_201;
            pppppuVar10 = &ppppuStack_218;
          }
          uStack_230 = 0;
          uStack_228 = 0;
          pppuStack_238 = (undefined8 ****)0x0;
          uVar8 = uStack_194._4_4_;
          uStack_194 = uVar5;
          uVar5 = uStack_194;
          uStack_194._4_4_ = uVar8;
          uVar6 = uStack_14c;
          uStack_14c._4_4_ = uVar7;
          FUN_003b646c(&uStack_200,2,pppppuVar10,uVar11,&uStack_219,&pppuStack_238);
          uVar8 = uStack_14c._4_4_;
          uVar7 = uStack_194._4_4_;
          uStack_194._4_4_ = uVar7;
          uStack_14c._4_4_ = uVar8;
          if (puStack_2b0 < puStack_2a8) {
            *puStack_2b0 = uStack_200;
            uStack_200 = 0x36;
            puStack_2b0 = puStack_2b0 + 1;
            uVar5 = uStack_194;
            uVar6 = uStack_14c;
          }
          else {
            lVar20 = (long)puStack_2b0 - lStack_2b8 >> 3;
            uVar11 = lVar20 + 1;
            if (uVar11 >> 0x3d != 0) {
              uVar5 = uStack_194;
              uVar6 = uStack_14c;
              FUN_0035d520(&lStack_2b8);
              uVar6 = uStack_14c;
              uVar5 = uStack_194;
              goto LAB_00379284;
            }
            uVar17 = (long)puStack_2a8 - lStack_2b8 >> 2;
            if (uVar17 <= uVar11) {
              uVar17 = uVar11;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)puStack_2a8 - lStack_2b8)) {
              uVar17 = 0x1fffffffffffffff;
            }
            pcStack_120 = (char *)&puStack_2a8;
            if (uVar17 == 0) {
              pcVar15 = (char *)0x0;
              uVar5 = uStack_194;
              uVar6 = uStack_14c;
            }
            else {
              pcVar15 = (char *)&puStack_2a8;
              uVar5 = uStack_194;
              uVar6 = uStack_14c;
              FUN_0035d534();
              uVar6 = uStack_14c;
              uVar5 = uStack_194;
            }
            uStack_14c = uVar6;
            uStack_194 = uVar5;
            uVar8 = uStack_14c._4_4_;
            uVar6 = uStack_14c;
            uVar7 = uStack_194._4_4_;
            uVar5 = uStack_194;
            pcVar14 = pcVar15 + lVar20 * 8;
            uStack_194._4_4_ = uVar7;
            uStack_14c._4_4_ = uVar8;
            *(ulong *)pcVar14 = uStack_200;
            uStack_200 = 0x36;
            uVar7 = uStack_194._4_4_;
            uStack_194 = uVar5;
            uVar8 = uStack_14c._4_4_;
            uStack_14c = uVar6;
            pcStack_140 = pcVar15;
            pcStack_138 = pcVar14;
            puStack_130 = pcVar14 + 8;
            pcStack_128 = pcVar15 + uVar17 * 8;
            uVar5 = uStack_194;
            uStack_194._4_4_ = uVar7;
            uVar6 = uStack_14c;
            uStack_14c._4_4_ = uVar8;
            FUN_0035d4ac(&lStack_2b8,&pcStack_140);
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            puVar2 = puStack_2b0;
            uVar7 = uStack_194._4_4_;
            uStack_194 = uVar5;
            uVar8 = uStack_14c._4_4_;
            uStack_14c = uVar6;
            uVar5 = uStack_194;
            uStack_194._4_4_ = uVar7;
            uVar6 = uStack_14c;
            uStack_14c._4_4_ = uVar8;
            FUN_0035d67c(&pcStack_140);
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            puStack_2b0 = puVar2;
            if ((uStack_200 & 1) != 0) {
              uVar7 = uStack_194._4_4_;
              uStack_194 = uVar5;
              uVar8 = uStack_14c._4_4_;
              uStack_14c = uVar6;
              uVar5 = uStack_194;
              uStack_194._4_4_ = uVar7;
              uVar6 = uStack_14c;
              uStack_14c._4_4_ = uVar8;
              FUN_0055293c();
              uVar6 = uStack_14c;
              uVar5 = uStack_194;
            }
          }
          uStack_14c = uVar6;
          uStack_194 = uVar5;
          uVar8 = uStack_14c._4_4_;
          uVar7 = uStack_194._4_4_;
          pcStack_140 = (char *)&pppuStack_238;
          uVar5 = uStack_194;
          uStack_194._4_4_ = uVar7;
          uVar6 = uStack_14c;
          uStack_14c._4_4_ = uVar8;
          FUN_0033d548(&pcStack_140);
          uVar6 = uStack_14c;
          uVar5 = uStack_194;
          pppppuVar10 = (undefined8 *****)ppppuStack_218;
          if ((char)bStack_201 < '\0') goto LAB_00379078;
        }
        uStack_14c = uVar6;
        uStack_194 = uVar5;
        uVar8 = uStack_14c._4_4_;
        uVar7 = uStack_194._4_4_;
        ppcStack_b0 = &pcStack_1f8;
        uVar5 = uStack_194;
        uStack_194._4_4_ = uVar7;
        uVar6 = uStack_14c;
        uStack_14c._4_4_ = uVar8;
        FUN_0033d548(&ppcStack_b0);
        uVar6 = uStack_14c;
        uVar5 = uStack_194;
        if (iStack_154 < 0) {
          uVar7 = uStack_194._4_4_;
          uStack_194 = uVar5;
          uVar8 = uStack_14c._4_4_;
          uStack_14c = uVar6;
          uVar5 = uStack_194;
          uStack_194._4_4_ = uVar7;
          uVar6 = uStack_14c;
          uStack_14c._4_4_ = uVar8;
          __ZdlPv(pppuStack_168);
          uVar6 = uStack_14c;
          uVar5 = uStack_194;
        }
        uStack_14c = uVar6;
        uStack_194 = uVar5;
        uVar8 = uStack_14c._4_4_;
        uVar7 = uStack_194._4_4_;
        uVar5 = uStack_194;
        uVar6 = uStack_14c;
        if ((long)pppuStack_170 < 0) {
          uStack_194._4_4_ = uVar7;
          uStack_14c._4_4_ = uVar8;
          __ZdlPv(pppuStack_180);
          uVar6 = uStack_14c;
          uVar5 = uStack_194;
          uVar7 = uStack_194._4_4_;
          uVar8 = uStack_14c._4_4_;
        }
        uStack_14c._4_4_ = uVar8;
        uStack_194._4_4_ = uVar7;
        uStack_14c = uVar6;
        uStack_194 = uVar5;
        uVar8 = uStack_14c._4_4_;
        uVar7 = uStack_194._4_4_;
        uVar5 = uStack_194;
        uVar6 = uStack_14c;
        if (uStack_194._3_1_ < '\0') {
          uStack_194._4_4_ = uVar7;
          uStack_14c._4_4_ = uVar8;
          __ZdlPv(pppuStack_1a8);
          uVar6 = uStack_14c;
          uVar5 = uStack_194;
          uVar7 = uStack_194._4_4_;
          uVar8 = uStack_14c._4_4_;
        }
        uStack_14c._4_4_ = uVar8;
        uStack_194._4_4_ = uVar7;
        uStack_14c = uVar6;
        uStack_194 = uVar5;
        uVar8 = uStack_14c._4_4_;
        uVar7 = uStack_194._4_4_;
        uVar5 = uStack_194;
        uVar6 = uStack_14c;
        if ((long)pppuStack_1b0 < 0) {
          uStack_194._4_4_ = uVar7;
          uStack_14c._4_4_ = uVar8;
          __ZdlPv(pppuStack_1c0);
          uVar6 = uStack_14c;
          uVar5 = uStack_194;
          uVar7 = uStack_194._4_4_;
          uVar8 = uStack_14c._4_4_;
        }
        uStack_14c._4_4_ = uVar8;
        uStack_194._4_4_ = uVar7;
        uStack_14c = uVar6;
        uStack_194 = uVar5;
        uVar8 = uStack_14c._4_4_;
        uVar7 = uStack_194._4_4_;
        uVar5 = uStack_194;
        uVar6 = uStack_14c;
        if ((long)pppuStack_1c8 < 0) {
          uStack_194._4_4_ = uVar7;
          uStack_14c._4_4_ = uVar8;
          __ZdlPv(pppuStack_1d8);
          uVar6 = uStack_14c;
          uVar5 = uStack_194;
          uVar7 = uStack_194._4_4_;
          uVar8 = uStack_14c._4_4_;
        }
        uStack_14c._4_4_ = uVar8;
        uStack_194._4_4_ = uVar7;
        uStack_14c = uVar6;
        uStack_194 = uVar5;
        uVar8 = uStack_14c._4_4_;
        uVar7 = uStack_194._4_4_;
        uVar21 = uVar21 + 1;
        lVar20 = *plStack_2c0;
        lVar18 = lVar18 + 0x50;
        uVar5 = uStack_194;
        uVar6 = uStack_14c;
        uStack_194._4_4_ = uVar7;
        uStack_14c._4_4_ = uVar8;
      } while (uVar21 < (ulong)((plStack_2c0[1] - lVar20 >> 4) * -0x3333333333333333));
    }
    uStack_14c = uVar6;
    uStack_194 = uVar5;
    uVar8 = uStack_14c._4_4_;
    uVar7 = uStack_194._4_4_;
    uVar5 = uStack_194;
    uStack_194._4_4_ = uVar7;
    uVar6 = uStack_14c;
    uStack_14c._4_4_ = uVar8;
    FUN_0037ab2c(&ppppuStack_2a0);
    uVar6 = uStack_14c;
    uVar5 = uStack_194;
    ppppuStack_298 = ppppuStack_2d8;
    ppppuStack_2a0 = ppppuStack_2e0;
    ppppuStack_290 = ppppuStack_2d0;
    ppppuStack_2d8 = (undefined8 *****)0x0;
    ppppuStack_2d0 = (undefined8 *****)0x0;
    ppppuStack_2e0 = (undefined8 *****)0x0;
    pcStack_1e0 = (char *)&ppppuStack_2e0;
    uVar7 = uStack_194._4_4_;
    uStack_194 = uVar5;
    uVar8 = uStack_14c._4_4_;
    uStack_14c = uVar6;
    uVar5 = uStack_194;
    uStack_194._4_4_ = uVar7;
    uVar6 = uStack_14c;
    uStack_14c._4_4_ = uVar8;
    FUN_0037aaa8(&pcStack_1e0);
    uVar6 = uStack_14c;
    uVar5 = uStack_194;
  }
  uStack_14c = uVar6;
  uStack_194 = uVar5;
  uVar8 = uStack_14c._4_4_;
  uVar7 = uStack_194._4_4_;
  uVar5 = uStack_194;
  uStack_194._4_4_ = uVar7;
  uVar6 = uStack_14c;
  uStack_14c._4_4_ = uVar8;
  FUN_00379780(&pcStack_1e0,&ppcStack_b0,"Fault injection parser",0x16,&lStack_2b8);
  uVar6 = uStack_14c;
  uVar5 = uStack_194;
  pcVar15 = pcStack_1e0;
  pcVar14 = (char *)*param_5;
  if (pcStack_1e0 == pcVar14) {
LAB_0037917c:
    uStack_14c = uVar6;
    uStack_194 = uVar5;
    uVar8 = uStack_14c._4_4_;
    uVar7 = uStack_194._4_4_;
    uVar5 = uStack_194;
    uVar6 = uStack_14c;
    if (((ulong)pcVar14 & 1) != 0) {
      uStack_194._4_4_ = uVar7;
      uStack_14c._4_4_ = uVar8;
      FUN_0055293c();
      uVar6 = uStack_14c;
      uVar5 = uStack_194;
      uVar7 = uStack_194._4_4_;
      uVar8 = uStack_14c._4_4_;
    }
    uStack_14c._4_4_ = uVar8;
    uStack_194._4_4_ = uVar7;
    uStack_14c = uVar6;
    uStack_194 = uVar5;
    uVar8 = uStack_14c._4_4_;
    uVar7 = uStack_194._4_4_;
    pcVar15 = (char *)*param_5;
    uVar5 = uStack_194;
    uVar6 = uStack_14c;
    uStack_194._4_4_ = uVar7;
    uStack_14c._4_4_ = uVar8;
  }
  else {
    *param_5 = pcStack_1e0;
    pcStack_1e0 = segment_command_00000020.segname + 0xe;
    if (((ulong)pcVar14 & 1) != 0) {
      uVar7 = uStack_194._4_4_;
      uStack_194 = uVar5;
      uVar8 = uStack_14c._4_4_;
      uStack_14c = uVar6;
      uVar5 = uStack_194;
      uStack_194._4_4_ = uVar7;
      uVar6 = uStack_14c;
      uStack_14c._4_4_ = uVar8;
      FUN_0055293c();
      uVar6 = uStack_14c;
      uVar5 = uStack_194;
      pcVar14 = pcStack_1e0;
      goto LAB_0037917c;
    }
  }
  uStack_14c = uVar6;
  uStack_194 = uVar5;
  uVar8 = uStack_14c._4_4_;
  uVar7 = uStack_194._4_4_;
  ppppuVar3 = ppppuStack_298;
  ppppuVar1 = ppppuStack_2a0;
  if ((pcVar15 == (char *)0x0) && (ppppuStack_2a0 != ppppuStack_298)) {
    psVar19 = &segment_command_00000020;
    uVar5 = uStack_194;
    uStack_194._4_4_ = uVar7;
    uVar6 = uStack_14c;
    uStack_14c._4_4_ = uVar8;
    __Znwm();
    uVar6 = uStack_14c;
    uVar5 = uStack_194;
    ppppuVar4 = ppppuStack_290;
    ppppuStack_2a0 = (undefined8 *****)0x0;
    ppppuStack_298 = (undefined8 *****)0x0;
    ppppuStack_290 = (undefined8 *****)0x0;
    *(undefined ***)psVar19 = &PTR_FUN_009de1f8;
    *(undefined8 *****)psVar19->segname = ppppuVar1;
    *(undefined8 *****)(psVar19->segname + 8) = ppppuVar3;
    psVar19->vmaddr = (qword)ppppuVar4;
    pppuStack_1d8 = (undefined8 ****)0x0;
    pppuStack_1d0 = (undefined8 ****)0x0;
    pcStack_1e0 = (char *)0x0;
    ppcStack_b0 = &pcStack_1e0;
    uVar7 = uStack_194._4_4_;
    uStack_194 = uVar5;
    uVar8 = uStack_14c._4_4_;
    uStack_14c = uVar6;
    uVar5 = uStack_194;
    uStack_194._4_4_ = uVar7;
    uVar6 = uStack_14c;
    uStack_14c._4_4_ = uVar8;
    FUN_0037aaa8(&ppcStack_b0);
    uVar6 = uStack_14c;
    uVar5 = uStack_194;
  }
  else {
    psVar19 = (segment_command *)0x0;
    uVar5 = uStack_194;
    uVar6 = uStack_14c;
    uStack_194._4_4_ = uVar7;
    uStack_14c._4_4_ = uVar8;
  }
  uStack_14c = uVar6;
  uStack_194 = uVar5;
  uVar8 = uStack_14c._4_4_;
  uVar7 = uStack_194._4_4_;
  *param_1 = psVar19;
  pcStack_1e0 = (char *)&lStack_2b8;
  uVar5 = uStack_194;
  uStack_194._4_4_ = uVar7;
  uVar6 = uStack_14c;
  uStack_14c._4_4_ = uVar8;
  FUN_0033d548(&pcStack_1e0);
  uVar6 = uStack_14c;
  uVar5 = uStack_194;
  pcStack_1e0 = (char *)&ppppuStack_2a0;
  uVar7 = uStack_194._4_4_;
  uStack_194 = uVar5;
  uVar8 = uStack_14c._4_4_;
  uStack_14c = uVar6;
  uVar5 = uStack_194;
  uStack_194._4_4_ = uVar7;
  uVar6 = uStack_14c;
  uStack_14c._4_4_ = uVar8;
  FUN_0037aaa8(&pcStack_1e0);
  uVar6 = uStack_14c;
  uVar5 = uStack_194;
LAB_0037920c:
  uStack_14c = uVar6;
  uStack_194 = uVar5;
  uVar8 = uStack_14c._4_4_;
  uVar7 = uStack_194._4_4_;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_80) {
    return;
  }
  uVar5 = uStack_194;
  uStack_194._4_4_ = uVar7;
  uVar6 = uStack_14c;
  uStack_14c._4_4_ = uVar8;
  ___stack_chk_fail();
  uVar6 = uStack_14c;
  uVar5 = uStack_194;
LAB_00379258:
  uStack_14c = uVar6;
  uStack_194 = uVar5;
  uVar8 = uStack_14c._4_4_;
  uVar7 = uStack_194._4_4_;
  uVar5 = uStack_194;
  uStack_194._4_4_ = uVar7;
  uVar6 = uStack_14c;
  uStack_14c._4_4_ = uVar8;
  FUN_0035d520(&lStack_2b8);
  uVar6 = uStack_14c;
  uVar5 = uStack_194;
LAB_00379284:
  uStack_14c = uVar6;
  uStack_194 = uVar5;
  uVar8 = uStack_14c._4_4_;
  uVar7 = uStack_194._4_4_;
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x379288);
  uVar5 = uStack_194;
  uStack_194._4_4_ = uVar7;
  uVar6 = uStack_14c;
  uStack_14c._4_4_ = uVar8;
  (*pcVar9)();
}



/* Entry: 00379460; end: 0037977f;  */

/* WARNING: Removing unreachable block (ram,0x00379528) */

void FUN_00379460(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long *param_5,
                 int param_6)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  code *pcVar3;
  char ***pppcVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  ulong auStack_168 [3];
  undefined1 uStack_149;
  undefined8 **ppuStack_148;
  ulong uStack_140;
  byte bStack_131;
  ulong uStack_130;
  ulong *puStack_128;
  ulong *puStack_120;
  ulong *puStack_118;
  ulong *puStack_110;
  ulong *puStack_108;
  char *pcStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  char **ppcStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  if (0x7ffffffffffffff7 < param_3) {
    func_0x0033b318(&ppcStack_98);
    goto LAB_00379704;
  }
  if (param_3 < 0x17) {
    uStack_88 = CONCAT17((char)param_3,(undefined7)uStack_88);
    pppcVar4 = &ppcStack_98;
    if (param_3 != 0) goto LAB_003794fc;
  }
  else {
    uVar1 = (param_3 & 0xfffffffffffffff8) + 8;
    if ((param_3 | 7) != 0x17) {
      uVar1 = param_3 | 7;
    }
    pppcVar4 = (char ***)(uVar1 + 1);
    __Znwm();
    uStack_88 = uVar1 + 1 | 0x8000000000000000;
    ppcStack_98 = (char **)pppcVar4;
    uStack_90 = param_3;
LAB_003794fc:
    _memmove(pppcVar4,param_2,param_3);
  }
  *(undefined1 *)((long)pppcVar4 + param_3) = 0;
  lVar9 = param_1;
  FUN_0035d420(param_1,&ppcStack_98);
  if (param_1 + 8 == lVar9) {
    if (param_6 == 0) goto LAB_003796b4;
    ppcStack_98 = (char **)0x8c358e;
    uStack_90 = 6;
    pcStack_f8 = " error:does not exist.";
    uStack_f0 = 0x16;
    uStack_c8 = param_2;
    uStack_c0 = param_3;
    FUN_00575ddc(&ppuStack_148,&ppcStack_98,&uStack_c8,&pcStack_f8);
    pppuVar2 = (undefined8 ***)ppuStack_148;
    if (-1 < (char)bStack_131) {
      uStack_140 = (ulong)bStack_131;
      pppuVar2 = &ppuStack_148;
    }
    auStack_168[1] = 0;
    auStack_168[2] = 0;
    auStack_168[0] = 0;
    FUN_003b646c(&uStack_130,2,pppuVar2,uStack_140,&uStack_149,auStack_168);
    puVar5 = (ulong *)(param_5 + 2);
    puVar7 = (ulong *)param_5[1];
    if (puVar7 < (ulong *)*puVar5) {
      *puVar7 = uStack_130;
      uStack_130 = 0x36;
      param_5[1] = (long)(puVar7 + 1);
LAB_00379690:
      puStack_128 = auStack_168;
      FUN_0033d548(&puStack_128);
      if ((char)bStack_131 < '\0') {
        __ZdlPv(ppuStack_148);
      }
      goto LAB_003796b4;
    }
    lVar9 = (long)puVar7 - *param_5 >> 3;
    uVar1 = lVar9 + 1;
    if (uVar1 >> 0x3d == 0) {
      uVar6 = (long)*puVar5 - *param_5;
      uVar8 = (long)uVar6 >> 2;
      if (uVar8 <= uVar1) {
        uVar8 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar6) {
        uVar8 = 0x1fffffffffffffff;
      }
      puStack_108 = puVar5;
      if (uVar8 == 0) {
        puStack_128 = (ulong *)0x0;
      }
      else {
        FUN_0035d534();
        puStack_128 = puVar5;
      }
      puStack_120 = puStack_128 + lVar9;
      puStack_110 = puStack_128 + uVar8;
      puStack_118 = puStack_120 + 1;
      *puStack_120 = uStack_130;
      uStack_130 = 0x36;
      FUN_0035d4ac(param_5,&puStack_128);
      lVar9 = param_5[1];
      FUN_0035d67c(&puStack_128);
      param_5[1] = lVar9;
      if ((uStack_130 & 1) != 0) {
        FUN_0055293c();
      }
      goto LAB_00379690;
    }
  }
  else {
    FUN_003d2b34(lVar9 + 0x38,param_2,param_3,param_4,param_5);
LAB_003796b4:
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
  }
  FUN_0035d520(param_5);
LAB_00379704:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x379708);
  (*pcVar3)();
}



/* Entry: 00379780; end: 0037981f;  */

void FUN_00379780(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long *param_5)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  *param_1 = 0;
  if (param_5[1] - *param_5 != 0) {
    FUN_003bdf2c(&lStack_38,2,param_3,param_4,param_2,param_5[1] - *param_5 >> 3);
    if (lStack_38 != 0) {
      *param_1 = lStack_38;
    }
    lVar1 = *param_5;
    lVar2 = param_5[1];
    if (lVar2 != lVar1) {
      do {
        lVar2 = lVar2 + -8;
        FUN_0033d5cc(param_5 + 2,lVar2);
      } while (lVar2 != lVar1);
    }
    param_5[1] = lVar1;
  }
  return;
}



/* Entry: 00379820; end: 003798a3;  */

void FUN_00379820(long param_1)

{
  dword *pdVar1;
  dword *pdStack_28;
  
  pdVar1 = &MACH_HEADER.cpusubtype;
  __Znwm();
  *(undefined ***)pdVar1 = &PTR_FUN_009de1a8;
  pdStack_28 = pdVar1;
  FUN_003ead58(param_1 + 0xd8,&pdStack_28);
  pdVar1 = pdStack_28;
  pdStack_28 = (dword *)0x0;
  if (pdVar1 != (dword *)0x0) {
    (**(code **)(*(long *)pdVar1 + 8))();
  }
  return;
}



/* Entry: 003798a4; end: 003798c3;  */

void FUN_003798a4(void)

{
  return;
}



/* Entry: 003798c4; end: 00379be3;  */

/* WARNING: Removing unreachable block (ram,0x0037998c) */

void FUN_003798c4(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long *param_5,
                 int param_6)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  code *pcVar3;
  char ***pppcVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  ulong auStack_168 [3];
  undefined1 uStack_149;
  undefined8 **ppuStack_148;
  ulong uStack_140;
  byte bStack_131;
  ulong uStack_130;
  ulong *puStack_128;
  ulong *puStack_120;
  ulong *puStack_118;
  ulong *puStack_110;
  ulong *puStack_108;
  char *pcStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  char **ppcStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  if (0x7ffffffffffffff7 < param_3) {
    func_0x0033b318(&ppcStack_98);
    goto LAB_00379b68;
  }
  if (param_3 < 0x17) {
    uStack_88 = CONCAT17((char)param_3,(undefined7)uStack_88);
    pppcVar4 = &ppcStack_98;
    if (param_3 != 0) goto LAB_00379960;
  }
  else {
    uVar1 = (param_3 & 0xfffffffffffffff8) + 8;
    if ((param_3 | 7) != 0x17) {
      uVar1 = param_3 | 7;
    }
    pppcVar4 = (char ***)(uVar1 + 1);
    __Znwm();
    uStack_88 = uVar1 + 1 | 0x8000000000000000;
    ppcStack_98 = (char **)pppcVar4;
    uStack_90 = param_3;
LAB_00379960:
    _memmove(pppcVar4,param_2,param_3);
  }
  *(undefined1 *)((long)pppcVar4 + param_3) = 0;
  lVar9 = param_1;
  FUN_0035d420(param_1,&ppcStack_98);
  if (param_1 + 8 == lVar9) {
    if (param_6 == 0) goto LAB_00379b18;
    ppcStack_98 = (char **)0x8c358e;
    uStack_90 = 6;
    pcStack_f8 = " error:does not exist.";
    uStack_f0 = 0x16;
    uStack_c8 = param_2;
    uStack_c0 = param_3;
    FUN_00575ddc(&ppuStack_148,&ppcStack_98,&uStack_c8,&pcStack_f8);
    pppuVar2 = (undefined8 ***)ppuStack_148;
    if (-1 < (char)bStack_131) {
      uStack_140 = (ulong)bStack_131;
      pppuVar2 = &ppuStack_148;
    }
    auStack_168[1] = 0;
    auStack_168[2] = 0;
    auStack_168[0] = 0;
    FUN_003b646c(&uStack_130,2,pppuVar2,uStack_140,&uStack_149,auStack_168);
    puVar5 = (ulong *)(param_5 + 2);
    puVar7 = (ulong *)param_5[1];
    if (puVar7 < (ulong *)*puVar5) {
      *puVar7 = uStack_130;
      uStack_130 = 0x36;
      param_5[1] = (long)(puVar7 + 1);
LAB_00379af4:
      puStack_128 = auStack_168;
      FUN_0033d548(&puStack_128);
      if ((char)bStack_131 < '\0') {
        __ZdlPv(ppuStack_148);
      }
      goto LAB_00379b18;
    }
    lVar9 = (long)puVar7 - *param_5 >> 3;
    uVar1 = lVar9 + 1;
    if (uVar1 >> 0x3d == 0) {
      uVar6 = (long)*puVar5 - *param_5;
      uVar8 = (long)uVar6 >> 2;
      if (uVar8 <= uVar1) {
        uVar8 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar6) {
        uVar8 = 0x1fffffffffffffff;
      }
      puStack_108 = puVar5;
      if (uVar8 == 0) {
        puStack_128 = (ulong *)0x0;
      }
      else {
        FUN_0035d534();
        puStack_128 = puVar5;
      }
      puStack_120 = puStack_128 + lVar9;
      puStack_110 = puStack_128 + uVar8;
      puStack_118 = puStack_120 + 1;
      *puStack_120 = uStack_130;
      uStack_130 = 0x36;
      FUN_0035d4ac(param_5,&puStack_128);
      lVar9 = param_5[1];
      FUN_0035d67c(&puStack_128);
      param_5[1] = lVar9;
      if ((uStack_130 & 1) != 0) {
        FUN_0055293c();
      }
      goto LAB_00379af4;
    }
  }
  else {
    FUN_00379f74(lVar9 + 0x38,param_2,param_3,param_4,param_5);
LAB_00379b18:
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
  }
  FUN_0035d520(param_5);
LAB_00379b68:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x379b6c);
  (*pcVar3)();
}



/* Entry: 00379be4; end: 00379f03;  */

/* WARNING: Removing unreachable block (ram,0x00379cac) */

void FUN_00379be4(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long *param_5,
                 int param_6)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  code *pcVar3;
  char ***pppcVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  ulong auStack_168 [3];
  undefined1 uStack_149;
  undefined8 **ppuStack_148;
  ulong uStack_140;
  byte bStack_131;
  ulong uStack_130;
  ulong *puStack_128;
  ulong *puStack_120;
  ulong *puStack_118;
  ulong *puStack_110;
  ulong *puStack_108;
  char *pcStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  char **ppcStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  if (0x7ffffffffffffff7 < param_3) {
    func_0x0033b318(&ppcStack_98);
    goto LAB_00379e88;
  }
  if (param_3 < 0x17) {
    uStack_88 = CONCAT17((char)param_3,(undefined7)uStack_88);
    pppcVar4 = &ppcStack_98;
    if (param_3 != 0) goto LAB_00379c80;
  }
  else {
    uVar1 = (param_3 & 0xfffffffffffffff8) + 8;
    if ((param_3 | 7) != 0x17) {
      uVar1 = param_3 | 7;
    }
    pppcVar4 = (char ***)(uVar1 + 1);
    __Znwm();
    uStack_88 = uVar1 + 1 | 0x8000000000000000;
    ppcStack_98 = (char **)pppcVar4;
    uStack_90 = param_3;
LAB_00379c80:
    _memmove(pppcVar4,param_2,param_3);
  }
  *(undefined1 *)((long)pppcVar4 + param_3) = 0;
  lVar9 = param_1;
  FUN_0035d420(param_1,&ppcStack_98);
  if (param_1 + 8 == lVar9) {
    if (param_6 == 0) goto LAB_00379e38;
    ppcStack_98 = (char **)0x8c358e;
    uStack_90 = 6;
    pcStack_f8 = " error:does not exist.";
    uStack_f0 = 0x16;
    uStack_c8 = param_2;
    uStack_c0 = param_3;
    FUN_00575ddc(&ppuStack_148,&ppcStack_98,&uStack_c8,&pcStack_f8);
    pppuVar2 = (undefined8 ***)ppuStack_148;
    if (-1 < (char)bStack_131) {
      uStack_140 = (ulong)bStack_131;
      pppuVar2 = &ppuStack_148;
    }
    auStack_168[1] = 0;
    auStack_168[2] = 0;
    auStack_168[0] = 0;
    FUN_003b646c(&uStack_130,2,pppuVar2,uStack_140,&uStack_149,auStack_168);
    puVar5 = (ulong *)(param_5 + 2);
    puVar7 = (ulong *)param_5[1];
    if (puVar7 < (ulong *)*puVar5) {
      *puVar7 = uStack_130;
      uStack_130 = 0x36;
      param_5[1] = (long)(puVar7 + 1);
LAB_00379e14:
      puStack_128 = auStack_168;
      FUN_0033d548(&puStack_128);
      if ((char)bStack_131 < '\0') {
        __ZdlPv(ppuStack_148);
      }
      goto LAB_00379e38;
    }
    lVar9 = (long)puVar7 - *param_5 >> 3;
    uVar1 = lVar9 + 1;
    if (uVar1 >> 0x3d == 0) {
      uVar6 = (long)*puVar5 - *param_5;
      uVar8 = (long)uVar6 >> 2;
      if (uVar8 <= uVar1) {
        uVar8 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar6) {
        uVar8 = 0x1fffffffffffffff;
      }
      puStack_108 = puVar5;
      if (uVar8 == 0) {
        puStack_128 = (ulong *)0x0;
      }
      else {
        FUN_0035d534();
        puStack_128 = puVar5;
      }
      puStack_120 = puStack_128 + lVar9;
      puStack_110 = puStack_128 + uVar8;
      puStack_118 = puStack_120 + 1;
      *puStack_120 = uStack_130;
      uStack_130 = 0x36;
      FUN_0035d4ac(param_5,&puStack_128);
      lVar9 = param_5[1];
      FUN_0035d67c(&puStack_128);
      param_5[1] = lVar9;
      if ((uStack_130 & 1) != 0) {
        FUN_0055293c();
      }
      goto LAB_00379e14;
    }
  }
  else {
    FUN_0037a1d4(lVar9 + 0x38,param_2,param_3,param_4,param_5);
LAB_00379e38:
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
  }
  FUN_0035d520(param_5);
LAB_00379e88:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x379e8c);
  (*pcVar3)();
}



/* Entry: 00379f04; end: 00379f73;  */

long FUN_00379f04(long param_1)

{
  if (*(char *)(param_1 + 0x8f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x78));
  }
  if (*(char *)(param_1 + 0x77) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x60));
  }
  if (*(char *)(param_1 + 0x4f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x38));
  }
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 00379f74; end: 0037a1d3;  */

void FUN_00379f74(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long *param_5)

{
  ulong uVar1;
  int iVar2;
  undefined8 ***pppuVar3;
  code *pcVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  long *unaff_x19;
  long lVar9;
  ulong auStack_148 [3];
  undefined1 uStack_129;
  undefined8 **ppuStack_128;
  ulong uStack_120;
  byte bStack_111;
  ulong uStack_110;
  ulong *puStack_108;
  ulong *puStack_100;
  ulong *puStack_f8;
  ulong *puStack_f0;
  ulong *puStack_e8;
  char *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  char *pcStack_78;
  undefined8 uStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  iVar2 = *param_1;
  if (iVar2 == 4) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_4,param_1 + 2);
    param_5 = unaff_x19;
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(param_4,"");
    pcStack_78 = "field:";
    uStack_70 = 6;
    pcStack_d8 = " error:type should be STRING";
    uStack_d0 = 0x1c;
    uStack_a8 = param_2;
    uStack_a0 = param_3;
    FUN_00575ddc(&ppuStack_128,&pcStack_78,&uStack_a8,&pcStack_d8);
    pppuVar3 = (undefined8 ***)ppuStack_128;
    if (-1 < (char)bStack_111) {
      uStack_120 = (ulong)bStack_111;
      pppuVar3 = &ppuStack_128;
    }
    auStack_148[1] = 0;
    auStack_148[2] = 0;
    auStack_148[0] = 0;
    FUN_003b646c(&uStack_110,2,pppuVar3,uStack_120,&uStack_129,auStack_148);
    puVar5 = (ulong *)(param_5 + 2);
    puVar7 = (ulong *)param_5[1];
    if (puVar7 < (ulong *)*puVar5) {
      *puVar7 = uStack_110;
      uStack_110 = 0x36;
      param_5[1] = (long)(puVar7 + 1);
    }
    else {
      lVar9 = (long)puVar7 - *param_5 >> 3;
      uVar1 = lVar9 + 1;
      if (uVar1 >> 0x3d != 0) goto LAB_0037a164;
      uVar6 = (long)*puVar5 - *param_5;
      uVar8 = (long)uVar6 >> 2;
      if (uVar8 <= uVar1) {
        uVar8 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar6) {
        uVar8 = 0x1fffffffffffffff;
      }
      puStack_e8 = puVar5;
      if (uVar8 == 0) {
        puStack_108 = (ulong *)0x0;
      }
      else {
        FUN_0035d534();
        puStack_108 = puVar5;
      }
      puStack_100 = puStack_108 + lVar9;
      puStack_f0 = puStack_108 + uVar8;
      puStack_f8 = puStack_100 + 1;
      *puStack_100 = uStack_110;
      uStack_110 = 0x36;
      FUN_0035d4ac(param_5,&puStack_108);
      lVar9 = param_5[1];
      FUN_0035d67c(&puStack_108);
      param_5[1] = lVar9;
      if ((uStack_110 & 1) != 0) {
        FUN_0055293c();
      }
    }
    puStack_108 = auStack_148;
    FUN_0033d548(&puStack_108);
    if ((char)bStack_111 < '\0') {
      __ZdlPv(ppuStack_128);
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail(iVar2 == 4);
LAB_0037a164:
  FUN_0035d520(param_5);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x37a170);
  (*pcVar4)();
}



/* Entry: 0037a1d4; end: 0037a5cb;  */

void FUN_0037a1d4(int *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                 long *param_5)

{
  ulong uVar1;
  undefined8 ******ppppppuVar2;
  code *pcVar3;
  int *piVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  ulong auStack_160 [6];
  undefined1 uStack_129;
  undefined8 *****pppppuStack_128;
  ulong uStack_120;
  byte bStack_111;
  ulong uStack_110;
  ulong *puStack_108;
  ulong *puStack_100;
  ulong *puStack_f8;
  ulong *puStack_f0;
  ulong *puStack_e8;
  char *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  char *pcStack_78;
  undefined8 uStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  if (*param_1 - 3U < 2) {
    uVar1 = *(ulong *)(param_1 + 4);
    piVar4 = *(int **)(param_1 + 2);
    if (-1 < (char)*(byte *)((long)param_1 + 0x1f)) {
      uVar1 = (ulong)*(byte *)((long)param_1 + 0x1f);
      piVar4 = param_1 + 2;
    }
    func_0x00575a04(piVar4,uVar1,&pcStack_78,10);
    *param_4 = pcStack_78._0_4_;
    if (((ulong)piVar4 & 1) == 0) {
      pcStack_78 = "field:";
      uStack_70 = 6;
      pcStack_d8 = " error:failed to parse.";
      uStack_d0 = 0x17;
      uStack_a8 = param_2;
      uStack_a0 = param_3;
      FUN_00575ddc(&pppppuStack_128,&pcStack_78,&uStack_a8,&pcStack_d8);
      ppppppuVar2 = (undefined8 ******)pppppuStack_128;
      if (-1 < (char)bStack_111) {
        uStack_120 = (ulong)bStack_111;
        ppppppuVar2 = &pppppuStack_128;
      }
      auStack_160[1] = 0;
      auStack_160[2] = 0;
      auStack_160[0] = 0;
      FUN_003b646c(&uStack_110,2,ppppppuVar2,uStack_120,&uStack_129,auStack_160);
      puVar6 = (ulong *)(param_5 + 2);
      puVar8 = (ulong *)param_5[1];
      if (puVar8 < (ulong *)*puVar6) {
        *puVar8 = uStack_110;
        uStack_110 = 0x36;
        param_5[1] = (long)(puVar8 + 1);
        puVar6 = auStack_160;
      }
      else {
        lVar10 = (long)puVar8 - *param_5 >> 3;
        uVar1 = lVar10 + 1;
        if (uVar1 >> 0x3d != 0) {
          FUN_0035d520(param_5);
          goto LAB_0037a534;
        }
        uVar7 = (long)*puVar6 - *param_5;
        uVar9 = (long)uVar7 >> 2;
        if (uVar9 <= uVar1) {
          uVar9 = uVar1;
        }
        if (0x7ffffffffffffff7 < uVar7) {
          uVar9 = 0x1fffffffffffffff;
        }
        puStack_e8 = puVar6;
        if (uVar9 == 0) {
          puStack_108 = (ulong *)0x0;
        }
        else {
          FUN_0035d534();
          puStack_108 = puVar6;
        }
        puStack_100 = puStack_108 + lVar10;
        puStack_f0 = puStack_108 + uVar9;
        puStack_f8 = puStack_100 + 1;
        *puStack_100 = uStack_110;
        uStack_110 = 0x36;
        FUN_0035d4ac(param_5,&puStack_108);
        lVar10 = param_5[1];
        FUN_0035d67c(&puStack_108);
        param_5[1] = lVar10;
        puVar6 = auStack_160;
        if ((uStack_110 & 1) != 0) {
          FUN_0055293c();
          puVar6 = auStack_160;
        }
      }
LAB_0037a4cc:
      puStack_108 = puVar6;
      FUN_0033d548(&puStack_108);
      if ((char)bStack_111 < '\0') {
        __ZdlPv(pppppuStack_128);
      }
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
      return;
    }
    ___stack_chk_fail(uVar5);
  }
  else {
    pcStack_78 = "field:";
    uStack_70 = 6;
    pcStack_d8 = " error:type should be NUMBER or STRING";
    uStack_d0 = 0x26;
    uStack_a8 = param_2;
    uStack_a0 = param_3;
    FUN_00575ddc(&pppppuStack_128,&pcStack_78,&uStack_a8,&pcStack_d8);
    ppppppuVar2 = (undefined8 ******)pppppuStack_128;
    if (-1 < (char)bStack_111) {
      uStack_120 = (ulong)bStack_111;
      ppppppuVar2 = &pppppuStack_128;
    }
    auStack_160[4] = 0;
    auStack_160[5] = 0;
    auStack_160[3] = 0;
    FUN_003b646c(&uStack_110,2,ppppppuVar2,uStack_120,&uStack_129,auStack_160 + 3);
    puVar6 = (ulong *)(param_5 + 2);
    puVar8 = (ulong *)param_5[1];
    if (puVar8 < (ulong *)*puVar6) {
      *puVar8 = uStack_110;
      uStack_110 = 0x36;
      param_5[1] = (long)(puVar8 + 1);
LAB_0037a470:
      puVar6 = auStack_160 + 3;
      goto LAB_0037a4cc;
    }
    lVar10 = (long)puVar8 - *param_5 >> 3;
    uVar1 = lVar10 + 1;
    if (uVar1 >> 0x3d == 0) {
      uVar7 = (long)*puVar6 - *param_5;
      uVar9 = (long)uVar7 >> 2;
      if (uVar9 <= uVar1) {
        uVar9 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar7) {
        uVar9 = 0x1fffffffffffffff;
      }
      puStack_e8 = puVar6;
      if (uVar9 == 0) {
        puStack_108 = (ulong *)0x0;
      }
      else {
        FUN_0035d534();
        puStack_108 = puVar6;
      }
      puStack_100 = puStack_108 + lVar10;
      puStack_f0 = puStack_108 + uVar9;
      puStack_f8 = puStack_100 + 1;
      *puStack_100 = uStack_110;
      uStack_110 = 0x36;
      FUN_0035d4ac(param_5,&puStack_108);
      lVar10 = param_5[1];
      FUN_0035d67c(&puStack_108);
      param_5[1] = lVar10;
      if ((uStack_110 & 1) != 0) {
        FUN_0055293c();
      }
      goto LAB_0037a470;
    }
  }
  FUN_0035d520(param_5);
LAB_0037a534:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x37a538);
  (*pcVar3)();
}



/* Entry: 0037a5cc; end: 0037a757;  */

long * FUN_0037a5cc(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar3 = param_1[1] - *param_1 >> 5;
  uVar1 = lVar3 * -0x3333333333333333 + 1;
  if (uVar1 < 0x19999999999999a) {
    plVar5 = param_1 + 2;
    lVar2 = *plVar5 - *param_1 >> 5;
    uVar4 = lVar2 * -0x6666666666666666;
    if (uVar4 < uVar1 || uVar4 - uVar1 == 0) {
      uVar4 = uVar1;
    }
    if (0xcccccccccccccb < (ulong)(lVar2 * -0x3333333333333333)) {
      uVar4 = 0x199999999999999;
    }
    plStack_38 = plVar5;
    if (uVar4 == 0) {
      plStack_58 = (long *)0x0;
    }
    else {
      FUN_0037a7e0();
      plStack_58 = plVar5;
    }
    plStack_50 = plStack_58 + lVar3 * 4;
    plStack_40 = plStack_58 + uVar4 * 0x14;
    *(undefined4 *)plStack_50 = *(undefined4 *)param_2;
    lVar2 = param_2[2];
    lVar3 = param_2[1];
    plStack_50[3] = param_2[3];
    plStack_50[2] = lVar2;
    plStack_50[1] = lVar3;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[1] = 0;
    lVar2 = param_2[5];
    lVar3 = param_2[4];
    plStack_50[6] = param_2[6];
    plStack_50[5] = lVar2;
    plStack_50[4] = lVar3;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[4] = 0;
    lVar2 = param_2[8];
    lVar3 = param_2[7];
    plStack_50[9] = param_2[9];
    plStack_50[8] = lVar2;
    plStack_50[7] = lVar3;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[7] = 0;
    lVar3 = param_2[10];
    plStack_50[0xb] = param_2[0xb];
    plStack_50[10] = lVar3;
    lVar2 = param_2[0xd];
    lVar3 = param_2[0xc];
    plStack_50[0xe] = param_2[0xe];
    plStack_50[0xd] = lVar2;
    plStack_50[0xc] = lVar3;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    lVar2 = param_2[0x10];
    lVar3 = param_2[0xf];
    plStack_50[0x11] = param_2[0x11];
    plStack_50[0x10] = lVar2;
    plStack_50[0xf] = lVar3;
    param_2[0xf] = 0;
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    lVar3 = param_2[0x12];
    *(undefined4 *)(plStack_50 + 0x13) = *(undefined4 *)(param_2 + 0x13);
    plStack_50[0x12] = lVar3;
    plStack_48 = plStack_50 + 0x14;
    FUN_0037a758(param_1,&plStack_58);
    plVar5 = (long *)param_1[1];
    func_0x0037aa34(&plStack_58);
    return plVar5;
  }
  FUN_0037a7cc();
  func_0x0037aa34(&plStack_58);
  __Unwind_Resume();
  plVar5 = param_1 + 2;
  lVar3 = param_1[1];
  func_0x0037a824(plVar5,lVar3,lVar3,*param_1,*param_1,param_2[1],param_2[1]);
  param_2[1] = lVar3;
  lVar2 = *param_1;
  *param_1 = lVar3;
  param_2[1] = lVar2;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return plVar5;
}



/* Entry: 0037a758; end: 0037a7cb;  */

void FUN_0037a758(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1[1];
  func_0x0037a824(param_1 + 2,uVar2,uVar2,*param_1,*param_1,param_2[1],param_2[1]);
  param_2[1] = uVar2;
  uVar1 = *param_1;
  *param_1 = uVar2;
  param_2[1] = uVar1;
  uVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = uVar2;
  uVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = uVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 0037a7cc; end: 0037a7df;  */

undefined1  [16]
FUN_0037a7cc(undefined8 param_1,ulong param_2,undefined4 *param_3,undefined8 param_4,
            undefined4 *param_5,undefined8 param_6,long param_7)

{
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  char *pcStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  pcVar1 = "vector";
  FUN_0033b32c();
  if (param_2 < 0x19999999999999a) {
    lVar2 = param_2 * 0xa0;
    __Znwm(lVar2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  FUN_00349558();
  puStack_88 = &uStack_70;
  puStack_80 = &uStack_60;
  lVar2 = param_7;
  while (param_3 != param_5) {
    *(undefined4 *)(lVar2 + -0xa0) = param_3[-0x28];
    uVar4 = *(undefined8 *)(param_3 + -0x24);
    uVar3 = *(undefined8 *)(param_3 + -0x26);
    *(undefined8 *)(lVar2 + -0x88) = *(undefined8 *)(param_3 + -0x22);
    *(undefined8 *)(lVar2 + -0x90) = uVar4;
    *(undefined8 *)(lVar2 + -0x98) = uVar3;
    *(undefined8 *)(param_3 + -0x24) = 0;
    *(undefined8 *)(param_3 + -0x22) = 0;
    *(undefined8 *)(param_3 + -0x26) = 0;
    uVar4 = *(undefined8 *)(param_3 + -0x1e);
    uVar3 = *(undefined8 *)(param_3 + -0x20);
    *(undefined8 *)(lVar2 + -0x70) = *(undefined8 *)(param_3 + -0x1c);
    *(undefined8 *)(lVar2 + -0x78) = uVar4;
    *(undefined8 *)(lVar2 + -0x80) = uVar3;
    *(undefined8 *)(param_3 + -0x1e) = 0;
    *(undefined8 *)(param_3 + -0x1c) = 0;
    *(undefined8 *)(param_3 + -0x20) = 0;
    uVar4 = *(undefined8 *)(param_3 + -0x18);
    uVar3 = *(undefined8 *)(param_3 + -0x1a);
    *(undefined8 *)(lVar2 + -0x58) = *(undefined8 *)(param_3 + -0x16);
    *(undefined8 *)(lVar2 + -0x60) = uVar4;
    *(undefined8 *)(lVar2 + -0x68) = uVar3;
    *(undefined8 *)(param_3 + -0x18) = 0;
    *(undefined8 *)(param_3 + -0x16) = 0;
    *(undefined8 *)(param_3 + -0x1a) = 0;
    uVar3 = *(undefined8 *)(param_3 + -0x14);
    *(undefined8 *)(lVar2 + -0x48) = *(undefined8 *)(param_3 + -0x12);
    *(undefined8 *)(lVar2 + -0x50) = uVar3;
    uVar4 = *(undefined8 *)(param_3 + -0xe);
    uVar3 = *(undefined8 *)(param_3 + -0x10);
    *(undefined8 *)(lVar2 + -0x30) = *(undefined8 *)(param_3 + -0xc);
    *(undefined8 *)(lVar2 + -0x38) = uVar4;
    *(undefined8 *)(lVar2 + -0x40) = uVar3;
    *(undefined8 *)(param_3 + -0x10) = 0;
    *(undefined8 *)(param_3 + -0xe) = 0;
    *(undefined8 *)(param_3 + -0xc) = 0;
    uVar4 = *(undefined8 *)(param_3 + -8);
    uVar3 = *(undefined8 *)(param_3 + -10);
    *(undefined8 *)(lVar2 + -0x18) = *(undefined8 *)(param_3 + -6);
    *(undefined8 *)(lVar2 + -0x20) = uVar4;
    *(undefined8 *)(lVar2 + -0x28) = uVar3;
    *(undefined8 *)(param_3 + -10) = 0;
    *(undefined8 *)(param_3 + -8) = 0;
    *(undefined8 *)(param_3 + -6) = 0;
    uVar3 = *(undefined8 *)(param_3 + -4);
    *(undefined4 *)(lVar2 + -8) = param_3[-2];
    *(undefined8 *)(lVar2 + -0x10) = uVar3;
    lVar2 = lVar2 + -0xa0;
    param_3 = param_3 + -0x28;
  }
  uStack_78 = 1;
  pcStack_90 = pcVar1;
  uStack_70 = param_6;
  lStack_68 = param_7;
  uStack_60 = param_6;
  lStack_58 = lVar2;
  FUN_0037a93c(&pcStack_90);
  auVar6._8_8_ = lVar2;
  auVar6._0_8_ = param_6;
  return auVar6;
}



/* Entry: 0037a7e0; end: 0037a93b;  */

undefined1  [16]
FUN_0037a7e0(undefined8 param_1,ulong param_2,undefined4 *param_3,undefined8 param_4,
            undefined4 *param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if (param_2 < 0x19999999999999a) {
    lVar1 = param_2 * 0xa0;
    __Znwm(lVar1);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  FUN_00349558();
  puStack_78 = &uStack_60;
  puStack_70 = &uStack_50;
  lVar1 = param_7;
  while (param_3 != param_5) {
    *(undefined4 *)(lVar1 + -0xa0) = param_3[-0x28];
    uVar3 = *(undefined8 *)(param_3 + -0x24);
    uVar2 = *(undefined8 *)(param_3 + -0x26);
    *(undefined8 *)(lVar1 + -0x88) = *(undefined8 *)(param_3 + -0x22);
    *(undefined8 *)(lVar1 + -0x90) = uVar3;
    *(undefined8 *)(lVar1 + -0x98) = uVar2;
    *(undefined8 *)(param_3 + -0x24) = 0;
    *(undefined8 *)(param_3 + -0x22) = 0;
    *(undefined8 *)(param_3 + -0x26) = 0;
    uVar3 = *(undefined8 *)(param_3 + -0x1e);
    uVar2 = *(undefined8 *)(param_3 + -0x20);
    *(undefined8 *)(lVar1 + -0x70) = *(undefined8 *)(param_3 + -0x1c);
    *(undefined8 *)(lVar1 + -0x78) = uVar3;
    *(undefined8 *)(lVar1 + -0x80) = uVar2;
    *(undefined8 *)(param_3 + -0x1e) = 0;
    *(undefined8 *)(param_3 + -0x1c) = 0;
    *(undefined8 *)(param_3 + -0x20) = 0;
    uVar3 = *(undefined8 *)(param_3 + -0x18);
    uVar2 = *(undefined8 *)(param_3 + -0x1a);
    *(undefined8 *)(lVar1 + -0x58) = *(undefined8 *)(param_3 + -0x16);
    *(undefined8 *)(lVar1 + -0x60) = uVar3;
    *(undefined8 *)(lVar1 + -0x68) = uVar2;
    *(undefined8 *)(param_3 + -0x18) = 0;
    *(undefined8 *)(param_3 + -0x16) = 0;
    *(undefined8 *)(param_3 + -0x1a) = 0;
    uVar2 = *(undefined8 *)(param_3 + -0x14);
    *(undefined8 *)(lVar1 + -0x48) = *(undefined8 *)(param_3 + -0x12);
    *(undefined8 *)(lVar1 + -0x50) = uVar2;
    uVar3 = *(undefined8 *)(param_3 + -0xe);
    uVar2 = *(undefined8 *)(param_3 + -0x10);
    *(undefined8 *)(lVar1 + -0x30) = *(undefined8 *)(param_3 + -0xc);
    *(undefined8 *)(lVar1 + -0x38) = uVar3;
    *(undefined8 *)(lVar1 + -0x40) = uVar2;
    *(undefined8 *)(param_3 + -0x10) = 0;
    *(undefined8 *)(param_3 + -0xe) = 0;
    *(undefined8 *)(param_3 + -0xc) = 0;
    uVar3 = *(undefined8 *)(param_3 + -8);
    uVar2 = *(undefined8 *)(param_3 + -10);
    *(undefined8 *)(lVar1 + -0x18) = *(undefined8 *)(param_3 + -6);
    *(undefined8 *)(lVar1 + -0x20) = uVar3;
    *(undefined8 *)(lVar1 + -0x28) = uVar2;
    *(undefined8 *)(param_3 + -10) = 0;
    *(undefined8 *)(param_3 + -8) = 0;
    *(undefined8 *)(param_3 + -6) = 0;
    uVar2 = *(undefined8 *)(param_3 + -4);
    *(undefined4 *)(lVar1 + -8) = param_3[-2];
    *(undefined8 *)(lVar1 + -0x10) = uVar2;
    lVar1 = lVar1 + -0xa0;
    param_3 = param_3 + -0x28;
  }
  uStack_68 = 1;
  uStack_80 = param_1;
  uStack_60 = param_6;
  lStack_58 = param_7;
  uStack_50 = param_6;
  lStack_48 = lVar1;
  FUN_0037a93c(&uStack_80);
  auVar5._8_8_ = lVar1;
  auVar5._0_8_ = param_6;
  return auVar5;
}



/* Entry: 0037a93c; end: 0037a96f;  */

long FUN_0037a93c(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\0') {
    FUN_0037a970(param_1);
  }
  return param_1;
}



/* Entry: 0037a970; end: 0037a9bf;  */

void FUN_0037a970(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1[2] + 8);
  lVar3 = *(long *)(param_1[1] + 8);
  if (lVar1 != lVar3) {
    uVar2 = *param_1;
    do {
      FUN_0037a9c0(uVar2,lVar1);
      lVar1 = lVar1 + 0xa0;
    } while (lVar1 != lVar3);
  }
  return;
}



/* Entry: 0037a9c0; end: 0037aaa7;  */

void FUN_0037a9c0(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x8f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_2 + 0x78));
  }
  if (*(char *)(param_2 + 0x77) < '\0') {
    __ZdlPv(*(undefined8 *)(param_2 + 0x60));
  }
  if (*(char *)(param_2 + 0x4f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_2 + 0x38));
  }
  if (*(char *)(param_2 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_2 + 0x20));
  }
  if (-1 < *(char *)(param_2 + 0x1f)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(*(undefined8 *)(param_2 + 8));
  return;
}



/* Entry: 0037aaa8; end: 0037ab2b;  */

void FUN_0037aaa8(long *param_1)

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
        lVar2 = lVar2 + -0xa0;
        FUN_0037a9c0(plVar3 + 2,lVar2);
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



/* Entry: 0037ab2c; end: 0037ab97;  */

void FUN_0037ab2c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -0xa0;
        FUN_0037a9c0(param_1 + 2,lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
    __ZdlPv(lVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 0037ab98; end: 0037ac23;  */

undefined8 * FUN_0037ab98(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 1;
  *param_1 = &PTR_FUN_009de1f8;
  FUN_0037aaa8(&puStack_28);
  return param_1;
}



/* Entry: 0037ac24; end: 0037aedf;  */

undefined ** FUN_0037ac24(undefined8 *param_1,long param_2,uint *param_3,ulong param_4,long param_5)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  code *pcVar5;
  undefined **ppuVar6;
  ulong *puVar7;
  int iVar8;
  undefined1 uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  undefined **ppuStack_a8;
  undefined1 auStack_a0 [8];
  undefined **ppuStack_98;
  uint *puStack_90;
  undefined **ppuStack_88;
  long *plStack_80;
  ulong uStack_78;
  undefined **ppuStack_70;
  ulong uStack_68;
  ulong *puStack_60;
  ulong uStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  param_3[0x6a] = (uint)*(byte *)(param_2 + 0x30) << 1;
  param_3[0x68] = *(uint *)(param_2 + 8);
  *(undefined1 *)(param_3 + 0x66) = 0;
  *param_3 = *param_3 | 0x74;
  param_3[0x67] = 0;
  plVar10 = *(long **)(param_2 + 0x10);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar10) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_78 = *(ulong *)(param_2 + 0x18);
  plStack_80 = *(long **)(param_2 + 0x10);
  uStack_68 = *(ulong *)(param_2 + 0x28);
  ppuStack_70 = *(undefined ***)(param_2 + 0x20);
  FUN_0034cc88(param_3,&plStack_80);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_80) {
    do {
      lVar11 = *plStack_80;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_80,0x10);
      if (bVar3) {
        *plStack_80 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 + -1 == 0) {
      (*(code *)plStack_80[1])();
    }
  }
  ppuVar6 = &PTR___tlv_bootstrap_00b2c390;
  (*(code *)PTR___tlv_bootstrap_00b2c390)();
  puStack_60 = (ulong *)*ppuVar6;
  do {
    uVar12 = *puStack_60;
    uVar1 = uVar12 + 0x10;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puStack_60,0x10);
    if (bVar3) {
      *puStack_60 = uVar1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (puStack_60[2] < uVar1) {
    func_0x003d6048(puStack_60,0x10);
  }
  else {
    puStack_60 = (ulong *)((long)puStack_60 + uVar12 + 0x30);
  }
  *puStack_60 = 0;
  puStack_60[1] = 0;
  puStack_90 = param_3;
  ppuStack_88 = (undefined **)puStack_60;
  if (*(long **)(param_5 + 0x18) != (long *)0x0) {
    iVar8 = (int)&puStack_90;
    (**(code **)(**(long **)(param_5 + 0x18) + 0x30))(&ppuStack_a8);
    ppuVar4 = ppuStack_a8;
    ppuStack_a8 = &PTR_PTR_00afa4e0;
    auStack_a0[0] = 0;
    ppuStack_98 = ppuVar4;
    (**(code **)(PTR_PTR_00afa4e0 + 8))(&PTR_PTR_00afa4e0);
    puStack_90 = (uint *)((ulong)puStack_90 & 0xffffffffffffff00);
    ppuStack_98 = &PTR_PTR_00afa4e0;
    plStack_80 = (long *)((ulong)plStack_80 & 0xffffffffffffff00);
    uStack_68 = uStack_68 & 0xffffffffffffff00;
    uStack_78 = uStack_78 & 0xffffffffffffff00;
    ppuStack_70 = ppuVar4;
    ppuStack_88 = &PTR_PTR_00afa4e0;
    uStack_58 = param_4;
    FUN_0037af40(&puStack_90);
    puVar7 = (ulong *)*ppuVar6;
    do {
      uVar12 = *puVar7;
      uVar1 = uVar12 + 0x40;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar7,0x10);
      if (bVar3) {
        *puVar7 = uVar1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar7[2] < uVar1) {
      iVar8 = 0x40;
      func_0x003d6048();
      uVar9 = plStack_80._0_1_;
    }
    else {
      uVar9 = 0;
      puVar7 = (ulong *)((long)puVar7 + uVar12 + 0x30);
    }
    *puVar7 = (ulong)&PTR_FUN_009de380;
    *(undefined1 *)(puVar7 + 1) = uVar9;
    *(undefined1 *)(puVar7 + 4) = 0;
    puVar7[5] = (ulong)puStack_60;
    puVar7[6] = uStack_58;
    *(undefined1 *)(puVar7 + 2) = 0;
    puVar7[3] = (ulong)ppuStack_70;
    ppuStack_70 = &PTR_PTR_00afa4e0;
    *param_1 = puVar7;
    FUN_0037aee0(&plStack_80);
    FUN_0037af40(auStack_a0);
    ppuVar6 = ppuStack_a8;
    (**(code **)(*ppuStack_a8 + 8))();
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
      return ppuVar6;
    }
    ___stack_chk_fail();
    if (iVar8 != 0) {
      func_0x0040cf10();
      FUN_0034b418(&plStack_80);
    }
    __Unwind_Resume();
    if ((*(byte *)ppuVar6 >> 1 & 1) == 0) {
      FUN_0037af40(ppuVar6 + 1);
    }
    FUN_0037af18(ppuVar6 + 3);
    return ppuVar6;
  }
  FUN_0033e390();
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x37ae74);
  (*pcVar5)();
}



/* Entry: 0037aee0; end: 0037af17;  */

byte * FUN_0037aee0(byte *param_1)

{
  if ((*param_1 >> 1 & 1) == 0) {
    FUN_0037af40(param_1 + 8);
  }
  FUN_0037af18(param_1 + 0x18);
  return param_1;
}



/* Entry: 0037af18; end: 0037af3f;  */

void FUN_0037af18(byte *param_1)

{
  code *pcVar1;
  
  if (*param_1 < 2) {
    return;
  }
  _abort();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x37af3c);
  (*pcVar1)();
}



/* Entry: 0037af40; end: 0037af8f;  */

char * FUN_0037af40(char *param_1)

{
  code *pcVar1;
  
  if (*param_1 != '\x01') {
    if (*param_1 != '\0') {
      _abort();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x37af88);
      (*pcVar1)();
    }
    (**(code **)(**(long **)(param_1 + 8) + 8))();
  }
  return param_1;
}



/* Entry: 0037af90; end: 0037b293;  */

/* WARNING: Removing unreachable block (ram,0x0037b140) */

undefined8 **** FUN_0037af90(undefined8 *param_1,undefined8 ****param_2)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *****pppppuVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  int iVar7;
  undefined8 **ppuVar8;
  undefined8 ****ppppuStack_e8;
  ulong uStack_e0;
  byte bStack_d1;
  undefined8 ***pppuStack_d0;
  undefined8 ***pppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 ***pppuStack_78;
  undefined8 uStack_70;
  char *pcStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  ppppuVar5 = param_2;
  FUN_003a2164(param_2,"grpc.internal.transport",0x17);
  if (ppppuVar5 == (undefined8 ****)0x0) {
    func_0x005535e8(&pppuStack_78,"HttpClientFilter needs a transport",0x22);
    iVar7 = (int)&pppuStack_78;
    FUN_0037c148(param_1);
    param_2 = (undefined8 ****)pppuStack_78;
    if (((ulong)pppuStack_78 & 1) != 0) {
      FUN_0055293c();
    }
  }
  else {
    FUN_003a20f4(&pppuStack_78,param_2,"grpc.http2_scheme",0x11);
    uVar3 = 0;
    if ((char)pcStack_68 != '\0') {
      uVar3 = uStack_70;
    }
    pcVar1 = "";
    ppppuVar6 = (undefined8 ****)pcVar1;
    if ((char)pcStack_68 != '\0') {
      ppppuVar6 = (undefined8 ****)pppuStack_78;
    }
    FUN_003feac4(ppppuVar6,uVar3,&pppuStack_c8,FUN_0037b2f4);
    iVar2 = 0;
    if ((int)ppppuVar6 != 2) {
      iVar2 = (int)ppppuVar6;
    }
    ppuVar8 = (*ppppuVar5)[1];
    pppuStack_c8 = (undefined8 ****)0x0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    pppuStack_d0 = &pppuStack_c8;
    FUN_003a20f4(&pppuStack_78,param_2,"grpc.primary_user_agent",0x17);
    ppppuVar5 = (undefined8 ****)pcVar1;
    uVar3 = 0;
    if ((char)pcStack_68 != '\0') {
      ppppuVar5 = (undefined8 ****)pppuStack_78;
      uVar3 = uStack_70;
    }
    ppppuVar6 = &pppuStack_d0;
    FUN_0037b2f8(ppppuVar6,ppppuVar5,uVar3);
    func_0x003fac5c();
    uStack_70 = 0x560e98;
    pcStack_68 = "ios";
    uStack_60 = 0x560e98;
    uStack_50 = 0x560e98;
    pppuStack_78 = ppppuVar6;
    puStack_58 = ppuVar8;
    FUN_0056189c(&ppppuStack_e8,"grpc-c/%s (%s; %s)",0x12,&pppuStack_78,3);
    pppppuVar4 = (undefined8 *****)ppppuStack_e8;
    if (-1 < (char)bStack_d1) {
      uStack_e0 = (ulong)bStack_d1;
      pppppuVar4 = &ppppuStack_e8;
    }
    FUN_0037b2f8(&pppuStack_d0,pppppuVar4,uStack_e0);
    if ((char)bStack_d1 < '\0') {
      __ZdlPv(ppppuStack_e8);
    }
    FUN_003a20f4(&pppuStack_78,param_2,"grpc.secondary_user_agent",0x19);
    uVar3 = 0;
    if ((char)pcStack_68 != '\0') {
      pcVar1 = (char *)pppuStack_78;
      uVar3 = uStack_70;
    }
    FUN_0037b2f8(&pppuStack_d0,pcVar1,uVar3);
    FUN_0037b5c0(&pppuStack_78,pppuStack_c8,uStack_c0," ",1);
    FUN_0037b4bc(&uStack_b0,&pppuStack_78);
    ppppuStack_e8 = &pppuStack_c8;
    FUN_0037b728(&ppppuStack_e8);
    iVar7 = 0x8c3647;
    FUN_003a2028(param_2,"grpc.testing.use_put_requests",0x1d);
    *(int *)(param_1 + 2) = iVar2;
    param_1[5] = uStack_a0;
    param_1[4] = uStack_a8;
    param_1[6] = uStack_98;
    param_1[3] = uStack_b0;
    *(bool *)(param_1 + 7) = ((ulong)param_2 & 0xff00000000) != 0 && (int)param_2 != 0;
    *param_1 = 0;
    param_1[1] = &PTR_FUN_009de298;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_48) {
    ___stack_chk_fail();
    if (iVar7 != 0) {
      func_0x0040cf10();
      FUN_0033c494(&pppuStack_78);
    }
    __Unwind_Resume();
    *param_2 = (undefined8 ***)&PTR_FUN_009de298;
    FUN_0034b418(param_2 + 2);
    return param_2;
  }
  return param_2;
}



/* Entry: 0037b294; end: 0037b2f3;  */

undefined8 * FUN_0037b294(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009de298;
  FUN_0034b418(param_1 + 2);
  return param_1;
}



/* Entry: 0037b2f4; end: 0037b2f7;  */

void FUN_0037b2f4(void)

{
  return;
}



/* Entry: 0037b2f8; end: 0037b4bb;  */

void FUN_0037b2f8(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 **ppuVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x19;
  undefined1 *puStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  ppuVar3 = &puStack_80;
  if (param_3 != 0) {
    if (0x7ffffffffffffff7 < param_3) {
      func_0x0033b318(&puStack_80);
LAB_0037b484:
      FUN_0037b568(unaff_x19);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x37b490);
      (*pcVar2)();
    }
    unaff_x19 = (long *)*param_1;
    if (param_3 < 0x17) {
      uStack_70 = CONCAT17((char)param_3,(undefined7)uStack_70);
    }
    else {
      uVar1 = (param_3 & 0xfffffffffffffff8) + 8;
      if ((param_3 | 7) != 0x17) {
        uVar1 = param_3 | 7;
      }
      ppuVar3 = (undefined1 **)(uVar1 + 1);
      __Znwm();
      uStack_70 = (ulong)(uVar1 + 1) | 0x8000000000000000;
      puStack_80 = (undefined1 *)ppuVar3;
      uStack_78 = param_3;
    }
    _memmove(ppuVar3,param_2,param_3);
    *(undefined1 *)((long)ppuVar3 + param_3) = 0;
    plVar4 = unaff_x19 + 2;
    puVar6 = (undefined8 *)unaff_x19[1];
    if (puVar6 < (undefined8 *)*plVar4) {
      puVar6[2] = uStack_70;
      puVar6[1] = uStack_78;
      *puVar6 = puStack_80;
      puVar6 = puVar6 + 3;
      unaff_x19[1] = (long)puVar6;
    }
    else {
      lVar7 = (long)puVar6 - *unaff_x19 >> 3;
      uVar1 = lVar7 * -0x5555555555555555 + 1;
      if (0xaaaaaaaaaaaaaaa < uVar1) goto LAB_0037b484;
      lVar5 = *plVar4 - *unaff_x19 >> 3;
      uVar8 = lVar5 * 0x5555555555555556;
      if (uVar8 < uVar1 || uVar8 - uVar1 == 0) {
        uVar8 = uVar1;
      }
      if (0x555555555555554 < (ulong)(lVar5 * -0x5555555555555555)) {
        uVar8 = 0xaaaaaaaaaaaaaaa;
      }
      plStack_48 = plVar4;
      if (uVar8 == 0) {
        plStack_68 = (long *)0x0;
      }
      else {
        FUN_0037b57c();
        plStack_68 = plVar4;
      }
      plStack_60 = plStack_68 + lVar7;
      plStack_50 = plStack_68 + uVar8 * 3;
      plStack_60[2] = uStack_70;
      plStack_60[1] = uStack_78;
      *plStack_60 = (long)puStack_80;
      plStack_58 = plStack_60 + 3;
      FUN_0045a5fc(unaff_x19,&plStack_68);
      puVar6 = (undefined8 *)unaff_x19[1];
      func_0x00427834(&plStack_68);
    }
    unaff_x19[1] = (long)puVar6;
  }
  return;
}



/* Entry: 0037b4bc; end: 0037b567;  */

void FUN_0037b4bc(undefined8 *param_1,undefined8 *param_2,char *param_3,undefined8 param_4,
                 long param_5)

{
  undefined1 **ppuVar1;
  char *pcVar2;
  ulong uVar3;
  char *pcVar4;
  undefined8 *extraout_x8;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  char *pcVar8;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  ppuVar1 = &puStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_58 = param_2[1];
  puStack_60 = (undefined1 *)*param_2;
  lStack_50 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  func_0x003ec34c(&uStack_48);
  param_1[1] = uStack_40;
  *param_1 = uStack_48;
  param_1[3] = uStack_30;
  param_1[2] = uStack_38;
  if (lStack_50 < 0) {
    ppuVar1 = (undefined1 **)puStack_60;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_50 < 0) {
    __ZdlPv(puStack_60);
  }
  __Unwind_Resume(ppuVar1);
  pcVar2 = "vector";
  FUN_0033b32c();
  if (param_3 < (char *)0xaaaaaaaaaaaaaab) {
    __Znwm((long)param_3 * 0x18);
    return;
  }
  FUN_00349558();
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  if (pcVar2 != param_3) {
    if (pcVar2[0x17] < '\0') {
      uVar3 = *(ulong *)(pcVar2 + 8);
    }
    else {
      uVar3 = (ulong)(byte)pcVar2[0x17];
    }
    pcVar8 = pcVar2 + 0x18;
    for (pcVar4 = pcVar8; pcVar4 != param_3; pcVar4 = pcVar4 + 0x18) {
      if (pcVar4[0x17] < '\0') {
        uVar5 = *(ulong *)(pcVar4 + 8);
      }
      else {
        uVar5 = (ulong)(byte)pcVar4[0x17];
      }
      uVar3 = uVar3 + param_5 + uVar5;
    }
    if (uVar3 != 0) {
      FUN_003606f8(extraout_x8);
      puVar6 = (undefined8 *)*extraout_x8;
      if (-1 < *(char *)((long)extraout_x8 + 0x17)) {
        puVar6 = extraout_x8;
      }
      if (pcVar2[0x17] < '\0') {
        pcVar4 = *(char **)pcVar2;
        uVar3 = *(ulong *)(pcVar2 + 8);
      }
      else {
        uVar3 = (ulong)(byte)pcVar2[0x17];
        pcVar4 = pcVar2;
      }
      _memcpy(puVar6,pcVar4,uVar3);
      if (pcVar2[0x17] < '\0') {
        uVar3 = *(ulong *)(pcVar2 + 8);
      }
      else {
        uVar3 = (ulong)(byte)pcVar2[0x17];
      }
      if (pcVar8 != param_3) {
        lVar7 = (long)puVar6 + uVar3;
        do {
          _memcpy(lVar7,param_4,param_5);
          if (pcVar8[0x17] < '\0') {
            pcVar2 = *(char **)pcVar8;
            uVar3 = *(ulong *)(pcVar8 + 8);
          }
          else {
            uVar3 = (ulong)(byte)pcVar8[0x17];
            pcVar2 = pcVar8;
          }
          _memcpy(lVar7 + param_5,pcVar2,uVar3);
          if (pcVar8[0x17] < '\0') {
            uVar3 = *(ulong *)(pcVar8 + 8);
          }
          else {
            uVar3 = (ulong)(byte)pcVar8[0x17];
          }
          lVar7 = lVar7 + param_5 + uVar3;
          pcVar8 = pcVar8 + 0x18;
        } while (pcVar8 != param_3);
      }
    }
  }
  return;
}



/* Entry: 0037b568; end: 0037b57b;  */

void FUN_0037b568(undefined8 param_1,char *param_2,undefined8 param_3,long param_4)

{
  char *pcVar1;
  ulong uVar2;
  char *pcVar3;
  undefined8 *extraout_x8;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  char *pcVar7;
  
  pcVar1 = "vector";
  FUN_0033b32c();
  if (param_2 < (char *)0xaaaaaaaaaaaaaab) {
    __Znwm((long)param_2 * 0x18);
    return;
  }
  FUN_00349558();
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  if (pcVar1 != param_2) {
    if (pcVar1[0x17] < '\0') {
      uVar2 = *(ulong *)(pcVar1 + 8);
    }
    else {
      uVar2 = (ulong)(byte)pcVar1[0x17];
    }
    pcVar7 = pcVar1 + 0x18;
    for (pcVar3 = pcVar7; pcVar3 != param_2; pcVar3 = pcVar3 + 0x18) {
      if (pcVar3[0x17] < '\0') {
        uVar4 = *(ulong *)(pcVar3 + 8);
      }
      else {
        uVar4 = (ulong)(byte)pcVar3[0x17];
      }
      uVar2 = uVar2 + param_4 + uVar4;
    }
    if (uVar2 != 0) {
      FUN_003606f8(extraout_x8);
      puVar5 = (undefined8 *)*extraout_x8;
      if (-1 < *(char *)((long)extraout_x8 + 0x17)) {
        puVar5 = extraout_x8;
      }
      if (pcVar1[0x17] < '\0') {
        pcVar3 = *(char **)pcVar1;
        uVar2 = *(ulong *)(pcVar1 + 8);
      }
      else {
        uVar2 = (ulong)(byte)pcVar1[0x17];
        pcVar3 = pcVar1;
      }
      _memcpy(puVar5,pcVar3,uVar2);
      if (pcVar1[0x17] < '\0') {
        uVar2 = *(ulong *)(pcVar1 + 8);
      }
      else {
        uVar2 = (ulong)(byte)pcVar1[0x17];
      }
      if (pcVar7 != param_2) {
        lVar6 = (long)puVar5 + uVar2;
        do {
          _memcpy(lVar6,param_3,param_4);
          if (pcVar7[0x17] < '\0') {
            pcVar1 = *(char **)pcVar7;
            uVar2 = *(ulong *)(pcVar7 + 8);
          }
          else {
            uVar2 = (ulong)(byte)pcVar7[0x17];
            pcVar1 = pcVar7;
          }
          _memcpy(lVar6 + param_4,pcVar1,uVar2);
          if (pcVar7[0x17] < '\0') {
            uVar2 = *(ulong *)(pcVar7 + 8);
          }
          else {
            uVar2 = (ulong)(byte)pcVar7[0x17];
          }
          lVar6 = lVar6 + param_4 + uVar2;
          pcVar7 = pcVar7 + 0x18;
        } while (pcVar7 != param_2);
      }
    }
  }
  return;
}



/* Entry: 0037b57c; end: 0037b5bf;  */

void FUN_0037b57c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *extraout_x8;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  
  if (param_2 < (undefined8 *)0xaaaaaaaaaaaaaab) {
    __Znwm((long)param_2 * 0x18);
    return;
  }
  FUN_00349558();
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  if (param_1 != param_2) {
    if ((char)*(byte *)((long)param_1 + 0x17) < '\0') {
      uVar1 = param_1[1];
    }
    else {
      uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
    }
    puVar6 = param_1 + 3;
    for (puVar4 = puVar6; puVar4 != param_2; puVar4 = puVar4 + 3) {
      if ((char)*(byte *)((long)puVar4 + 0x17) < '\0') {
        uVar3 = puVar4[1];
      }
      else {
        uVar3 = (ulong)*(byte *)((long)puVar4 + 0x17);
      }
      uVar1 = uVar1 + param_4 + uVar3;
    }
    if (uVar1 != 0) {
      FUN_003606f8(extraout_x8);
      puVar4 = (undefined8 *)*extraout_x8;
      if (-1 < *(char *)((long)extraout_x8 + 0x17)) {
        puVar4 = extraout_x8;
      }
      if ((char)*(byte *)((long)param_1 + 0x17) < '\0') {
        puVar2 = (undefined8 *)*param_1;
        uVar1 = param_1[1];
      }
      else {
        uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
        puVar2 = param_1;
      }
      _memcpy(puVar4,puVar2,uVar1);
      if ((char)*(byte *)((long)param_1 + 0x17) < '\0') {
        uVar1 = param_1[1];
      }
      else {
        uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
      }
      if (puVar6 != param_2) {
        lVar5 = (long)puVar4 + uVar1;
        do {
          _memcpy(lVar5,param_3,param_4);
          if ((char)*(byte *)((long)puVar6 + 0x17) < '\0') {
            puVar4 = (undefined8 *)*puVar6;
            uVar1 = puVar6[1];
          }
          else {
            uVar1 = (ulong)*(byte *)((long)puVar6 + 0x17);
            puVar4 = puVar6;
          }
          _memcpy(lVar5 + param_4,puVar4,uVar1);
          if ((char)*(byte *)((long)puVar6 + 0x17) < '\0') {
            uVar1 = puVar6[1];
          }
          else {
            uVar1 = (ulong)*(byte *)((long)puVar6 + 0x17);
          }
          lVar5 = lVar5 + param_4 + uVar1;
          puVar6 = puVar6 + 3;
        } while (puVar6 != param_2);
      }
    }
  }
  return;
}


