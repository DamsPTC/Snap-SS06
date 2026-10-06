/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 003bbe6c; end: 003bbec3;  */

undefined8 FUN_003bbe6c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x30;
  __Znwm(0x30);
  FUN_003bc344();
  return uVar1;
}



/* Entry: 003bbec4; end: 003bc103;  */

void FUN_003bbec4(undefined8 param_1,long param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  code *pcVar4;
  int *piVar5;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined1 auStack_90 [72];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_00341380(&uStack_48,0);
  FUN_003413d4(auStack_90);
  uStack_98 = 0;
  if (param_2 < 8) {
    if (param_2 != 1) {
      if (param_2 != 2) {
LAB_003bbf1c:
        func_0x00338df0("return",
                        "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/cfstream_handle.cc"
                        ,0x5c);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x3bbf38);
        (*pcVar4)();
      }
      goto LAB_003bbf48;
    }
    param_3 = param_3 + 8;
  }
  else {
    if (param_2 == 8) {
      _CFReadStreamCopyError(param_1);
      FUN_003be760(&uStack_a8,
                   "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/cfstream_handle.cc"
                   ,0x53,param_1,"read error");
      FUN_003be104(&uStack_a0,&uStack_a8,3,0xe);
      uVar3 = uStack_a0;
      if (uStack_a0 != 0) {
        uStack_a0 = 0x36;
        uStack_98 = uVar3;
      }
      if ((uStack_a8 & 1) != 0) {
        FUN_0055293c();
      }
      _CFRelease(param_1);
      uStack_b0 = uVar3;
      if ((uVar3 & 1) != 0) {
        piVar5 = (int *)(uVar3 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar2) {
            *piVar5 = *piVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_003c3b50(param_3 + 8,&uStack_b0);
      if ((uStack_b0 & 1) != 0) {
        FUN_0055293c();
      }
      uStack_b8 = uVar3;
      if ((uVar3 & 1) != 0) {
        piVar5 = (int *)(uVar3 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar2) {
            *piVar5 = *piVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_003c3b50(param_3 + 0x18,&uStack_b8);
      if ((uStack_b8 & 1) != 0) {
        FUN_0055293c();
      }
      uStack_c0 = uVar3;
      if ((uVar3 & 1) != 0) {
        piVar5 = (int *)(uVar3 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar2) {
            *piVar5 = *piVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_003c3b50(param_3 + 0x10,&uStack_c0);
      if ((uStack_c0 & 1) != 0) {
        FUN_0055293c();
      }
      if ((uVar3 & 1) != 0) {
        FUN_0055293c(uVar3);
      }
      goto LAB_003bbf58;
    }
    if (param_2 != 0x10) goto LAB_003bbf1c;
LAB_003bbf48:
    param_3 = param_3 + 0x10;
  }
  FUN_003c3c84(param_3);
LAB_003bbf58:
  FUN_00341470(auStack_90);
  FUN_003414dc(&uStack_48);
  return;
}



/* Entry: 003bc104; end: 003bc343;  */

void FUN_003bc104(undefined8 param_1,long param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  code *pcVar4;
  int *piVar5;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined1 auStack_90 [72];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_00341380(&uStack_48,0);
  FUN_003413d4(auStack_90);
  uStack_98 = 0;
  if (param_2 < 8) {
    if (param_2 != 1) {
      if (param_2 != 4) {
LAB_003bc15c:
        func_0x00338df0("return",
                        "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/cfstream_handle.cc"
                        ,0x7f);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x3bc178);
        (*pcVar4)();
      }
      goto LAB_003bc188;
    }
    param_3 = param_3 + 8;
  }
  else {
    if (param_2 == 8) {
      _CFWriteStreamCopyError(param_1);
      FUN_003be760(&uStack_a8,
                   "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/cfstream_handle.cc"
                   ,0x76,param_1,"write error");
      FUN_003be104(&uStack_a0,&uStack_a8,3,0xe);
      uVar3 = uStack_a0;
      if (uStack_a0 != 0) {
        uStack_a0 = 0x36;
        uStack_98 = uVar3;
      }
      if ((uStack_a8 & 1) != 0) {
        FUN_0055293c();
      }
      _CFRelease(param_1);
      uStack_b0 = uVar3;
      if ((uVar3 & 1) != 0) {
        piVar5 = (int *)(uVar3 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar2) {
            *piVar5 = *piVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_003c3b50(param_3 + 8,&uStack_b0);
      if ((uStack_b0 & 1) != 0) {
        FUN_0055293c();
      }
      uStack_b8 = uVar3;
      if ((uVar3 & 1) != 0) {
        piVar5 = (int *)(uVar3 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar2) {
            *piVar5 = *piVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_003c3b50(param_3 + 0x18,&uStack_b8);
      if ((uStack_b8 & 1) != 0) {
        FUN_0055293c();
      }
      uStack_c0 = uVar3;
      if ((uVar3 & 1) != 0) {
        piVar5 = (int *)(uVar3 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar2) {
            *piVar5 = *piVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_003c3b50(param_3 + 0x10,&uStack_c0);
      if ((uStack_c0 & 1) != 0) {
        FUN_0055293c();
      }
      if ((uVar3 & 1) != 0) {
        FUN_0055293c(uVar3);
      }
      goto LAB_003bc198;
    }
    if (param_2 != 0x10) goto LAB_003bc15c;
LAB_003bc188:
    param_3 = param_3 + 0x18;
  }
  FUN_003c3c84(param_3);
LAB_003bc198:
  FUN_00341470(auStack_90);
  FUN_003414dc(&uStack_48);
  return;
}



/* Entry: 003bc344; end: 003bc47f;  */

undefined8 * FUN_003bc344(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  code *pcStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  
  *param_1 = &PTR_FUN_009dff40;
  FUN_003f8b94();
  *param_1 = &PTR_FUN_009dff60;
  func_0x003c39bc(param_1 + 1);
  func_0x003c39bc(param_1 + 2);
  func_0x003c39bc(param_1 + 3);
  FUN_00339cc8(param_1 + 5,1);
  func_0x003c39b4(param_1 + 1);
  func_0x003c39b4(param_1 + 2);
  func_0x003c39b4(param_1 + 3);
  uVar1 = 0;
  _dispatch_queue_create(0,0);
  param_1[4] = uVar1;
  uStack_78 = 0;
  pcStack_68 = FUN_003bbdb4;
  pcStack_60 = FUN_003bbde4;
  uStack_58 = 0;
  puStack_70 = param_1;
  _CFReadStreamSetClient(param_2,0x1b,FUN_003bbec4,&uStack_78);
  _CFWriteStreamSetClient(param_3,0x1d,FUN_003bc104,&uStack_78);
  FUN_003be8f8(param_2,param_1[4]);
  func_0x003be904(param_3,param_1[4]);
  return param_1;
}



/* Entry: 003bc480; end: 003bc4df;  */

undefined8 * FUN_003bc480(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009dff60;
  FUN_003c39c4(param_1 + 1);
  FUN_003c39c4(param_1 + 2);
  FUN_003c39c4(param_1 + 3);
  _dispatch_release(param_1[4]);
  *param_1 = &PTR_FUN_009dff40;
  FUN_003f8e14();
  return param_1;
}



/* Entry: 003bc4e0; end: 003bc4e3;  */

undefined8 * FUN_003bc4e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009dff60;
  FUN_003c39c4(param_1 + 1);
  FUN_003c39c4(param_1 + 2);
  FUN_003c39c4(param_1 + 3);
  _dispatch_release(param_1[4]);
  *param_1 = &PTR_FUN_009dff40;
  FUN_003f8e14();
  return param_1;
}



/* Entry: 003bc4e4; end: 003bc4f7;  */

void FUN_003bc4e4(void)

{
  FUN_003bc480();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 003bc4f8; end: 003bc50f;  */

ulong * FUN_003bc4f8(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  int *piVar6;
  undefined1 uStack_99;
  ulong uStack_98;
  undefined1 uStack_89;
  ulong uStack_88;
  undefined1 uStack_41;
  ulong uStack_40;
  undefined1 uStack_31;
  ulong *puStack_30;
  ulong *puStack_28;
  
  puVar3 = (ulong *)(param_1 + 8);
  do {
    uVar5 = *puVar3;
    if (uVar5 == 0) {
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
      if (uVar5 != 2) {
        if ((uVar5 & 1) != 0) {
          FUN_003b7b3c(&puStack_30,uVar5 & 0xfffffffffffffffe);
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
          piVar6 = (int *)(uStack_88 - 1);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar2) {
              *piVar6 = *piVar6 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        puVar4 = &uStack_88;
        FUN_003b7ab0();
        if ((uStack_88 & 1) != 0) {
          FUN_0055293c();
        }
        do {
          uVar5 = *puVar3;
          if ((uVar5 | 2) == 2) {
            while (*puVar3 == uVar5) {
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
            if ((uVar5 & 1) != 0) {
              FUN_003b7afc(puVar4);
              return (ulong *)0x0;
            }
            while (*puVar3 == uVar5) {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
              if (bVar2) {
                *puVar3 = (ulong)puVar4 | 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') {
                FUN_003bdf2c(&uStack_98,2,"FD Shutdown",0xb,&uStack_99,1,param_2);
                FUN_003c1e6c(&uStack_89,uVar5,&uStack_98);
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
      while (*puVar3 == 2) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar2) {
          *puVar3 = 0;
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



/* Entry: 003bc510; end: 003bc617;  */

void FUN_003bc510(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uStack_38;
  ulong uStack_30;
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
  FUN_003c3b50(param_1 + 8,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    FUN_0055293c();
  }
  uStack_30 = *param_2;
  if ((uStack_30 & 1) != 0) {
    piVar3 = (int *)(uStack_30 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_003c3b50(param_1 + 0x10,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    FUN_0055293c();
  }
  uStack_38 = *param_2;
  if ((uStack_38 & 1) != 0) {
    piVar3 = (int *)(uStack_38 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_003c3b50(param_1 + 0x18,&uStack_38);
  if ((uStack_38 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003bc618; end: 003bc6a3;  */

dword * FUN_003bc618(void)

{
  dword *pdVar1;
  undefined8 *puVar2;
  
  pdVar1 = &section_00000068.flags;
  __Znwm();
  *(undefined8 *)(pdVar1 + 0xe) = 0;
  *(undefined8 *)(pdVar1 + 0xc) = 0;
  *(undefined8 *)(pdVar1 + 0x12) = 0;
  *(undefined8 *)(pdVar1 + 0x10) = 0;
  *(undefined8 *)(pdVar1 + 2) = 0;
  *(undefined8 *)pdVar1 = 0;
  *(undefined8 *)(pdVar1 + 6) = 0;
  *(undefined8 *)(pdVar1 + 4) = 0;
  *(undefined8 *)(pdVar1 + 10) = 0;
  *(undefined8 *)(pdVar1 + 8) = 0;
  *(undefined8 *)(pdVar1 + 0x1e) = 0;
  *(undefined8 *)(pdVar1 + 0x1c) = 0;
  *(undefined8 *)(pdVar1 + 0x22) = 0;
  *(undefined8 *)(pdVar1 + 0x20) = 0;
  *(undefined8 *)(pdVar1 + 0x26) = 0;
  *(undefined8 *)(pdVar1 + 0x24) = 0;
  *(undefined8 *)(pdVar1 + 0x1a) = 0;
  *(undefined8 *)(pdVar1 + 0x18) = 0;
  *(undefined8 *)(pdVar1 + 0x28) = 0;
  puVar2 = (undefined8 *)(pdVar1 + 0x14);
  *(undefined8 *)(pdVar1 + 0x16) = 0;
  *puVar2 = 0;
  *(undefined8 **)(pdVar1 + 2) = puVar2;
  *(undefined8 **)(pdVar1 + 0x12) = puVar2;
  *(undefined1 *)(pdVar1 + 0x1a) = 0;
  FUN_00339cc8(pdVar1 + 0x28,1);
  *(undefined8 *)(pdVar1 + 0x18) = 1;
  *(undefined8 *)(pdVar1 + 0x1c) = 0;
  *(undefined8 *)(pdVar1 + 0x1e) = 0;
  *(code **)(pdVar1 + 0x22) = FUN_003bc6a4;
  *(dword **)(pdVar1 + 0x24) = pdVar1;
  *(undefined8 *)(pdVar1 + 0x26) = 0;
  return pdVar1;
}



/* Entry: 003bc6a4; end: 003bc6a7;  */

void FUN_003bc6a4(long *param_1)

{
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 uVar1;
  undefined8 *puVar2;
  long extraout_x10;
  
  *param_1 = 0;
  func_0x003c1f6c(param_1);
  func_0x003c1f6c();
  if (extraout_x10 == 0) {
    *(undefined8 *)(*param_1 + 0x20) = extraout_x8;
    func_0x003c1f6c();
    puVar2 = (undefined8 *)(*param_1 + 0x18);
    uVar1 = extraout_x8_01;
  }
  else {
    **(undefined8 **)(*param_1 + 0x20) = extraout_x8;
    func_0x003c1f6c();
    puVar2 = (undefined8 *)(*param_1 + 0x20);
    uVar1 = extraout_x8_00;
  }
  *puVar2 = uVar1;
  return;
}



/* Entry: 003bc6a8; end: 003bc6f7;  */

void FUN_003bc6a8(long *param_1,long param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  long *plVar5;
  ulong *puVar6;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  ulong extraout_x8;
  long lVar10;
  long extraout_x10;
  ulong uStack_58;
  
  iVar4 = (int)param_1 + 0xa0;
  FUN_00339d14();
  if (iVar4 != 0) {
    plVar5 = param_1 + 0xc;
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
      if (param_1[0xc] == 0) {
        FUN_003bbcd4(param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_0099c620)(param_1);
        return;
      }
      func_0x00773e00();
      uVar7 = *param_3;
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
      puVar6 = (ulong *)(param_1 + 0xc);
      do {
        uVar9 = *puVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar6,0x10);
        if (bVar2) {
          *puVar6 = uVar9 + 2;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (uVar9 == 1) {
        plVar5 = param_1;
        func_0x003c1f6c();
        param_1[0xb] = *plVar5;
        FUN_003bcd5c(param_1);
      }
      else {
        if ((param_1[0xb] != 0) &&
           (plVar5 = param_1, func_0x003c1f6c(), uVar9 = extraout_x8, extraout_x10 != *plVar5)) {
          param_1[0xb] = 0;
        }
        if ((uVar9 & 1) == 0) {
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/combiner.cc"
                       ,0x96,2,"assertion failed: %s");
          _abort();
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x3bcb38);
          (*pcVar3)();
        }
      }
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
      puVar6 = &uStack_58;
      uStack_58 = uVar7;
      FUN_003b7ab0();
      *(ulong **)(param_2 + 0x18) = puVar6;
      if ((uStack_58 & 1) != 0) {
        FUN_0055293c();
      }
      FUN_0033b3a0(param_1 + 1,param_2);
      if ((uVar7 & 1) != 0) {
        FUN_0055293c(uVar7);
      }
      return;
    }
  }
  return;
}



/* Entry: 003bc6f8; end: 003bc933;  */

ulong FUN_003bc6f8(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  long *plVar8;
  ulong *puVar9;
  long *plVar10;
  long *plVar11;
  ulong uStack_78;
  long *plStack_70;
  char *pcStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  char *pcStack_48;
  char *pcStack_40;
  char *pcStack_38;
  
  func_0x003c1f6c();
  plVar8 = *(long **)(*param_1 + 0x18);
  if (plVar8 == (long *)0x0) goto LAB_003bc8c4;
  if (plVar8[0xb] == 0) {
    func_0x003c1f6c();
    puVar9 = (ulong *)*param_1;
    if ((puVar9[5] & 1) == 0) {
      param_1 = puVar9;
      (**(code **)(*puVar9 + 0x10))();
      if ((int)param_1 == 0) goto LAB_003bc724;
      puVar9[5] = puVar9[5] | 1;
    }
    func_0x003c329c();
    iVar3 = (int)param_1;
    if ((((ulong)param_1 & 1) != 0) || (FUN_003c2a58(), iVar3 == 0)) goto LAB_003bc724;
LAB_003bc7d0:
    FUN_003bc934(plVar8);
  }
  else {
LAB_003bc724:
    if (((char)plVar8[0xd] == '\0') || (3 < plVar8[0xc])) {
      plVar4 = plVar8 + 1;
      FUN_0033b3c4();
      if (plVar4 == (long *)0x0) goto LAB_003bc7d0;
      FUN_003b7b6c(&pcStack_38,plVar4[3]);
      plVar4[3] = 0;
      pcStack_40 = pcStack_38;
      pcStack_38 = segment_command_00000020.segname + 0xe;
      (*(code *)plVar4[1])(plVar4[2],&pcStack_40);
      if (((ulong)pcStack_40 & 1) != 0) {
        FUN_0055293c();
      }
      pcVar5 = pcStack_38;
      if (((ulong)pcStack_38 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      plVar10 = (long *)plVar8[0xe];
      if (plVar10 == (long *)0x0) {
        func_0x00773dcc();
        plVar4 = (long *)0x0;
        goto code_r0x003bc8e4;
      }
      plVar8[0xe] = 0;
      plVar8[0xf] = 0;
      do {
        plVar11 = (long *)*plVar10;
        FUN_003b7b6c(&pcStack_38,plVar10[3]);
        plVar10[3] = 0;
        pcStack_48 = pcStack_38;
        pcStack_38 = segment_command_00000020.segname + 0xe;
        (*(code *)plVar10[1])(plVar10[2],&pcStack_48);
        if (((ulong)pcStack_48 & 1) != 0) {
          FUN_0055293c();
        }
        pcVar5 = pcStack_38;
        if (((ulong)pcStack_38 & 1) != 0) {
          FUN_0055293c();
        }
        plVar4 = (long *)0x0;
        plVar10 = plVar11;
      } while (plVar11 != (long *)0x0);
    }
    FUN_003bc998();
    *(undefined1 *)(plVar8 + 0xd) = 0;
    plVar10 = plVar8 + 0xc;
    do {
      lVar7 = *plVar10;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = lVar7 + -2;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    switch(lVar7) {
    case 0:
    case 1:
code_r0x003bc8e4:
      pcVar5 = "return true";
      func_0x00338df0("return true",
                      "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/combiner.cc"
                      ,0x131);
      func_0x0040cf10();
      func_0x0040cf10();
      FUN_0033c494(&pcStack_40);
      FUN_0033c494(&pcStack_38);
      pcVar6 = pcVar5;
      __Unwind_Resume(pcVar5);
      pcStack_58 = FUN_003bc934;
      plStack_70 = plVar4;
      pcStack_68 = pcVar5;
      puStack_60 = &stack0xfffffffffffffff0;
      FUN_003bc998();
      uStack_78 = 0;
      FUN_003c2968(pcVar6 + 0x80,&uStack_78,0,0);
      if ((uStack_78 & 1) != 0) {
        FUN_0055293c();
      }
      return uStack_78;
    case 2:
      FUN_003bc9e0(plVar8);
      break;
    case 3:
      break;
    case 4:
    case 5:
      if (plVar8[0xe] != 0) {
        *(undefined1 *)(plVar8 + 0xd) = 1;
      }
    default:
      func_0x003c1f6c();
      *plVar8 = *(long *)(*(long *)pcVar5 + 0x18);
      func_0x003c1f6c();
      *(long **)(*(long *)pcVar5 + 0x18) = plVar8;
      if (*plVar8 == 0) {
        func_0x003c1f6c();
        *(long **)(*(long *)pcVar5 + 0x20) = plVar8;
      }
    }
  }
LAB_003bc8c4:
  return (ulong)(plVar8 != (long *)0x0);
}



/* Entry: 003bc934; end: 003bc997;  */

void FUN_003bc934(long param_1)

{
  ulong uStack_28;
  
  FUN_003bc998();
  uStack_28 = 0;
  FUN_003c2968(param_1 + 0x80,&uStack_28,0,0);
  if ((uStack_28 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003bc998; end: 003bc9df;  */

void FUN_003bc998(long *param_1)

{
  undefined8 extraout_x8;
  
  func_0x003c1f6c();
  func_0x003c1f6c(**(undefined8 **)(*param_1 + 0x18));
  *(undefined8 *)(*param_1 + 0x18) = extraout_x8;
  func_0x003c1f6c();
  if (*(long *)(*param_1 + 0x18) == 0) {
    func_0x003c1f6c();
    *(undefined8 *)(*param_1 + 0x20) = 0;
  }
  return;
}



/* Entry: 003bc9e0; end: 003bca13;  */

void FUN_003bc9e0(long *param_1,long param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  ulong *puVar5;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  ulong extraout_x8;
  long extraout_x10;
  ulong uStack_58;
  
  if (param_1[0xc] == 0) {
    FUN_003bbcd4(param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(param_1);
    return;
  }
  func_0x00773e00();
  uVar6 = *param_3;
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
  }
  puVar5 = (ulong *)(param_1 + 0xc);
  do {
    uVar8 = *puVar5;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar5,0x10);
    if (bVar2) {
      *puVar5 = uVar8 + 2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (uVar8 == 1) {
    plVar4 = param_1;
    func_0x003c1f6c();
    param_1[0xb] = *plVar4;
    FUN_003bcd5c(param_1);
  }
  else {
    if ((param_1[0xb] != 0) &&
       (plVar4 = param_1, func_0x003c1f6c(), uVar8 = extraout_x8, extraout_x10 != *plVar4)) {
      param_1[0xb] = 0;
    }
    if ((uVar8 & 1) == 0) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/combiner.cc"
                   ,0x96,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x3bcb38);
      (*pcVar3)();
    }
  }
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
  }
  puVar5 = &uStack_58;
  uStack_58 = uVar6;
  FUN_003b7ab0();
  *(ulong **)(param_2 + 0x18) = puVar5;
  if ((uStack_58 & 1) != 0) {
    FUN_0055293c();
  }
  FUN_0033b3a0(param_1 + 1,param_2);
  if ((uVar6 & 1) != 0) {
    FUN_0055293c(uVar6);
  }
  return;
}



/* Entry: 003bca14; end: 003bcb63;  */

void FUN_003bca14(long *param_1,long param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  ulong *puVar5;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  ulong extraout_x8;
  long extraout_x10;
  ulong uStack_38;
  
  uVar6 = *param_3;
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
  }
  puVar5 = (ulong *)(param_1 + 0xc);
  do {
    uVar8 = *puVar5;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar5,0x10);
    if (bVar2) {
      *puVar5 = uVar8 + 2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (uVar8 == 1) {
    plVar4 = param_1;
    func_0x003c1f6c();
    param_1[0xb] = *plVar4;
    FUN_003bcd5c(param_1);
  }
  else {
    if ((param_1[0xb] != 0) &&
       (plVar4 = param_1, func_0x003c1f6c(), uVar8 = extraout_x8, extraout_x10 != *plVar4)) {
      param_1[0xb] = 0;
    }
    if ((uVar8 & 1) == 0) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/combiner.cc"
                   ,0x96,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x3bcb38);
      (*pcVar3)();
    }
  }
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
  }
  puVar5 = &uStack_38;
  uStack_38 = uVar6;
  FUN_003b7ab0();
  *(ulong **)(param_2 + 0x18) = puVar5;
  if ((uStack_38 & 1) != 0) {
    FUN_0055293c();
  }
  FUN_0033b3a0(param_1 + 1,param_2);
  if ((uVar6 & 1) != 0) {
    FUN_0055293c(uVar6);
  }
  return;
}



/* Entry: 003bcb64; end: 003bcbcf;  */

void FUN_003bcb64(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uVar4;
  ulong uStack_28;
  
  uVar4 = *param_3;
  if ((uVar4 & 1) != 0) {
    piVar3 = (int *)(uVar4 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_28 = uVar4;
  FUN_003bcbd0(param_1,param_2,&uStack_28);
  if ((uVar4 & 1) != 0) {
    FUN_0055293c(uVar4);
  }
  return;
}



/* Entry: 003bcbd0; end: 003bcd5b;  */

void FUN_003bcbd0(long *param_1,undefined8 *param_2,ulong *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  ulong *puVar5;
  int *piVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 uVar7;
  undefined8 *puVar8;
  long extraout_x10;
  ulong uVar9;
  long *plVar10;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  if (param_1 == (long *)0x0) {
    func_0x00773e34();
    func_0x0040cf10();
    func_0x0040cf10();
    FUN_0033c494(&uStack_38);
    FUN_0033c494(&uStack_48);
    __Unwind_Resume();
    *param_1 = 0;
    func_0x003c1f6c(param_1);
    func_0x003c1f6c();
    if (extraout_x10 == 0) {
      *(undefined8 *)(*param_1 + 0x20) = extraout_x8;
      func_0x003c1f6c();
      puVar8 = (undefined8 *)(*param_1 + 0x18);
      uVar7 = extraout_x8_01;
    }
    else {
      **(undefined8 **)(*param_1 + 0x20) = extraout_x8;
      func_0x003c1f6c();
      puVar8 = (undefined8 *)(*param_1 + 0x20);
      uVar7 = extraout_x8_00;
    }
    *puVar8 = uVar7;
    return;
  }
  plVar10 = param_1;
  func_0x003c1f6c();
  if (*(long **)(*plVar10 + 0x18) != param_1) {
    param_2[3] = param_1;
    pcVar4 = segment_command_00000020.segname + 8;
    FUN_00338c74();
    *(code **)pcVar4 = FUN_003bcdb8;
    *(undefined8 **)(pcVar4 + 8) = param_2;
    *(code **)(pcVar4 + 0x18) = FUN_0033df34;
    *(char **)(pcVar4 + 0x20) = pcVar4;
    *(undefined8 *)(pcVar4 + 0x28) = 0;
    uVar9 = *param_3;
    if ((uVar9 & 1) != 0) {
      piVar6 = (int *)(uVar9 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = *piVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_40 = uVar9;
    FUN_003bca14(param_1,pcVar4 + 0x10,&uStack_40);
    if ((uVar9 & 1) == 0) {
      return;
    }
    FUN_0055293c(uVar9);
    return;
  }
  plVar10 = param_1 + 0xe;
  if (*plVar10 == 0) {
    plVar1 = param_1 + 0xc;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar9 = *param_3;
  uStack_48 = uVar9;
  if ((uVar9 & 1) == 0) {
    if (param_2 != (undefined8 *)0x0) goto LAB_003bccd4;
  }
  else {
    piVar6 = (int *)(uVar9 - 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = *piVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (param_2 == (undefined8 *)0x0) goto LAB_003bcd08;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = *piVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_003bccd4:
    puVar5 = &uStack_38;
    uStack_38 = uVar9;
    FUN_003b7ab0();
    param_2[3] = puVar5;
    if ((uStack_38 & 1) != 0) {
      FUN_0055293c();
    }
    *param_2 = 0;
    if (*plVar10 != 0) {
      plVar10 = (long *)param_1[0xf];
    }
    *plVar10 = (long)param_2;
    param_1[0xf] = (long)param_2;
  }
  if ((uVar9 & 1) == 0) {
    return;
  }
LAB_003bcd08:
  FUN_0055293c(uVar9);
  return;
}



/* Entry: 003bcd5c; end: 003bcdb7;  */

void FUN_003bcd5c(long *param_1)

{
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 uVar1;
  undefined8 *puVar2;
  long extraout_x10;
  
  *param_1 = 0;
  func_0x003c1f6c(param_1);
  func_0x003c1f6c();
  if (extraout_x10 == 0) {
    *(undefined8 *)(*param_1 + 0x20) = extraout_x8;
    func_0x003c1f6c();
    puVar2 = (undefined8 *)(*param_1 + 0x18);
    uVar1 = extraout_x8_01;
  }
  else {
    **(undefined8 **)(*param_1 + 0x20) = extraout_x8;
    func_0x003c1f6c();
    puVar2 = (undefined8 *)(*param_1 + 0x20);
    uVar1 = extraout_x8_00;
  }
  *puVar2 = uVar1;
  return;
}



/* Entry: 003bcdb8; end: 003bce33;  */

void FUN_003bcdb8(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uVar5;
  ulong uStack_28;
  
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
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
  FUN_003bcbd0(uVar3,param_1,&uStack_28);
  if ((uVar5 & 1) != 0) {
    FUN_0055293c(uVar5);
  }
  return;
}



/* Entry: 003bce34; end: 003bce3b;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_003bce34(undefined8 param_1,ulong param_2,undefined8 param_3,byte *param_4)

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



/* Entry: 003bce3c; end: 003bcea3;  */

bool FUN_003bce3c(undefined8 param_1)

{
  bool bVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (iRam0000000000b65d38 == 0) {
    uStack_14 = 0;
    _setsockopt(param_1,0x29,0x1b,&uStack_14,4);
    bVar1 = (int)param_1 == 0;
  }
  else {
    uStack_18 = 1;
    _setsockopt(param_1,0x29,0x1b,&uStack_18,4);
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 003bcea4; end: 003bcedf;  */

void FUN_003bcea4(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x003bceac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}



/* Entry: 003bcee0; end: 003bcf53;  */

void FUN_003bcee0(long *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int *piVar4;
  ulong uStack_28;
  
  pcVar3 = *(code **)(*param_1 + 0x28);
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



/* Entry: 003bcf54; end: 003bcf8f;  */

void FUN_003bcf54(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x003bcf5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}



/* Entry: 003bcf90; end: 003bd017;  */

void FUN_003bcf90(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_28;
  
  _CFReadStreamClose(*(undefined8 *)(param_1 + 0x10));
  _CFWriteStreamClose(*(undefined8 *)(param_1 + 0x18));
  uVar3 = *(undefined8 *)(param_1 + 0x20);
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
  FUN_003bc510(uVar3,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003bd018; end: 003bd01b;  */

void FUN_003bd018(long param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1 + 8;
  FUN_00339d14();
  if (iVar1 != 0) {
    _CFRelease(*(undefined8 *)(param_1 + 0x10));
    _CFRelease(*(undefined8 *)(param_1 + 0x18));
    func_0x003bbe28(*(undefined8 *)(param_1 + 0x20),"",0,0);
    if (*(char *)(param_1 + 0xb7) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0xa0));
    }
    if (*(char *)(param_1 + 0x9f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x88));
    }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(param_1);
    return;
  }
  return;
}



/* Entry: 003bd01c; end: 003bd09b;  */

void FUN_003bd01c(long param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1 + 8;
  FUN_00339d14();
  if (iVar1 != 0) {
    _CFRelease(*(undefined8 *)(param_1 + 0x10));
    _CFRelease(*(undefined8 *)(param_1 + 0x18));
    func_0x003bbe28(*(undefined8 *)(param_1 + 0x20),"",0,0);
    if (*(char *)(param_1 + 0xb7) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0xa0));
    }
    if (*(char *)(param_1 + 0x9f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x88));
    }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(param_1);
    return;
  }
  return;
}



/* Entry: 003bd09c; end: 003bd0f7;  */

undefined1  [16] FUN_003bd09c(long param_1)

{
  undefined1 auVar1 [16];
  
  if (-1 < *(char *)(param_1 + 0x9f)) {
    auVar1[8] = *(char *)(param_1 + 0x9f);
    auVar1._0_8_ = param_1 + 0x88;
    auVar1._9_7_ = 0;
    return auVar1;
  }
  return *(undefined1 (*) [16])(param_1 + 0x88);
}



/* Entry: 003bd0f8; end: 003bd2ef;  */

/* WARNING: Possible PIC construction at 0x003bd214: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003bd81c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x003bd218) */
/* WARNING: Removing unreachable block (ram,0x003bd23c) */
/* WARNING: Removing unreachable block (ram,0x003bd820) */
/* WARNING: Type propagation algorithm not settling */

section * FUN_003bd0f8(undefined8 param_1,section **param_2,undefined4 *param_3,qword param_4)

{
  undefined4 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 *puVar5;
  section **ppsVar6;
  undefined8 uVar7;
  section *psVar8;
  section *psVar9;
  section *psVar10;
  section *psVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  section *psVar18;
  qword qVar19;
  undefined1 *puVar20;
  section *psVar21;
  undefined4 *puVar22;
  long *plVar23;
  long lVar24;
  ulong uVar25;
  int *piVar26;
  section *psVar27;
  char *pcVar28;
  undefined8 *******pppppppuVar29;
  undefined8 *******pppppppuVar30;
  undefined8 uVar31;
  section *psStack_360;
  section *psStack_358;
  undefined8 *******pppppppuStack_350;
  undefined8 uStack_348;
  undefined1 auStack_340 [8];
  undefined1 auStack_338 [32];
  long lStack_318;
  section *psStack_310;
  section *psStack_308;
  undefined8 *******pppppppuStack_300;
  undefined8 uStack_2f8;
  undefined1 auStack_2f0 [8];
  undefined1 auStack_2e8 [56];
  undefined1 auStack_2b0 [8];
  char *pcStack_2a8;
  section *psStack_2a0;
  undefined4 *puStack_298;
  qword qStack_290;
  qword qStack_288;
  undefined1 auStack_278 [32];
  section *psStack_258;
  undefined8 uStack_250;
  qword qStack_248;
  qword qStack_240;
  long lStack_238;
  section **ppsStack_230;
  undefined4 *puStack_228;
  section *psStack_220;
  section *psStack_218;
  undefined8 *******pppppppuStack_210;
  code *pcStack_208;
  undefined1 auStack_200 [8];
  undefined1 auStack_1f8 [16];
  char acStack_1e8 [16];
  ulong uStack_1d8;
  undefined1 auStack_1d0 [8];
  undefined1 auStack_1c8 [16];
  char acStack_1b8 [23];
  undefined1 uStack_1a1;
  section *psStack_1a0;
  ulong uStack_198;
  section *psStack_190;
  section *psStack_188;
  long lStack_180;
  undefined4 *puStack_178;
  ulong uStack_170;
  qword qStack_168;
  long lStack_158;
  section **ppsStack_150;
  undefined4 *puStack_148;
  section *psStack_140;
  section *psStack_138;
  undefined8 *******pppppppuStack_130;
  code *pcStack_128;
  undefined1 auStack_120 [64];
  dword dStack_e0;
  undefined1 auStack_dc [128];
  undefined4 uStack_5c;
  long lStack_58;
  
  ppsVar6 = (section **)auStack_120;
  psVar10 = (section *)auStack_120;
  pppppppuVar30 = (undefined8 *******)&stack0xfffffffffffffff0;
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  psVar8 = &section_000000b8;
  __Znwm();
  *(section **)psVar8[2].sectname = (section *)0x0;
  psVar8[1].reserved2 = 0;
  psVar8[1].reserved3 = 0;
  psVar8[2].segname[0] = '\0';
  psVar8[2].segname[1] = '\0';
  psVar8[2].segname[2] = '\0';
  psVar8[2].segname[3] = '\0';
  psVar8[2].segname[4] = '\0';
  psVar8[2].segname[5] = '\0';
  psVar8[2].segname[6] = '\0';
  psVar8[2].segname[7] = '\0';
  *(section **)(psVar8[2].sectname + 8) = (section *)0x0;
  psVar8[1].flags = 0;
  psVar8[1].reserved1 = 0;
  psVar8[1].reloff = 0;
  psVar8[1].nrelocs = 0;
  *(undefined ***)psVar8->sectname = &PTR_FUN_009dff98;
  FUN_00339cc8(psVar8->sectname + 8,1);
  *(undefined8 *)psVar8->segname = param_1;
  *(section ***)(psVar8->segname + 8) = param_2;
  _CFRetain(param_1);
  _CFRetain(param_2);
  psVar8->addr = param_4;
  FUN_003bbddc(param_4,"",0,0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
            (&psVar8[1].reloff,param_3);
  uStack_5c = 0x80;
  psVar9 = *(section **)psVar8->segname;
  _CFReadStreamCopyProperty(psVar9,*(undefined8 *)PTR__kCFStreamPropertySocketNativeHandle_00999d78)
  ;
  _CFDataGetBytes();
  if (psVar9 != (section *)0x0) {
    _CFRelease(psVar9);
  }
  FUN_003bdeb4(auStack_120 + 0x20);
  puVar22 = &uStack_5c;
  _getsockname(dStack_e0,auStack_dc);
  if (-1 < (int)dStack_e0) {
    FUN_003a0d08(auStack_120,auStack_dc);
    psVar18 = (section *)(auStack_120 + 0x20);
    uVar31 = 0x3bd218;
    goto SUB_003bdb4c;
  }
  pcVar28 = "";
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(psVar8 + 2);
  psVar8->flags = 0;
  psVar8->reserved1 = 0;
  psVar8->reloff = 0;
  psVar8->nrelocs = 0;
  psVar8->offset = 0;
  psVar8->align = 0;
  psVar8->size = 0;
  *(code **)psVar8[1].sectname = FUN_003bd2f0;
  *(section **)(psVar8[1].sectname + 8) = psVar8;
  psVar8[1].segname[0] = '\0';
  psVar8[1].segname[1] = '\0';
  psVar8[1].segname[2] = '\0';
  psVar8[1].segname[3] = '\0';
  psVar8[1].segname[4] = '\0';
  psVar8[1].segname[5] = '\0';
  psVar8[1].segname[6] = '\0';
  psVar8[1].segname[7] = '\0';
  psVar8[1].addr = (qword)FUN_003bd6d4;
  psVar8[1].size = (qword)psVar8;
  psVar8[1].offset = 0;
  psVar8[1].align = 0;
  psVar10 = (section *)(auStack_120 + 0x20);
  FUN_0035d18c();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return psVar8;
  }
  ___stack_chk_fail();
  FUN_0035d18c(auStack_120);
  FUN_0035d18c(auStack_120 + 0x20);
  psVar11 = psVar10;
  __Unwind_Resume();
  pcStack_128 = FUN_003bd2f0;
  lStack_158 = *(long *)PTR____stack_chk_guard_00999f88;
  ppsStack_150 = param_2;
  puStack_148 = param_3;
  psStack_140 = psVar9;
  psStack_138 = psVar10;
  pppppppuStack_130 = pppppppuVar30;
  if (psVar11->size == 0) {
    func_0x00773e68();
LAB_003bd600:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x3bd604);
    (*pcVar4)();
  }
  if (*(section **)((section *)pcVar28)->sectname == (section *)0x0) {
    if (*(long *)(*(long *)&psVar11->reloff + 0x10) != 1) {
      func_0x00773e9c();
      goto LAB_003bd600;
    }
    plVar23 = *(long **)(*(long *)&psVar11->reloff + 8);
    puStack_178 = (undefined4 *)plVar23[1];
    lStack_180 = *plVar23;
    qStack_168 = plVar23[3];
    uStack_170 = plVar23[2];
    param_3 = (undefined4 *)((ulong)puStack_178 & 0xff);
    if (lStack_180 != 0) {
      param_3 = puStack_178;
    }
    lVar16 = *(long *)psVar11->segname;
    uVar25 = (ulong)&lStack_180 | 9;
    if (lStack_180 != 0) {
      uVar25 = uStack_170;
    }
    puVar22 = param_3;
    _CFReadStreamRead(lVar16,uVar25);
    if (lVar16 == 0) {
      uVar31._0_4_ = psVar11->reloff;
      uVar31._4_4_ = psVar11->nrelocs;
      func_0x003ecf8c(uVar31);
      acStack_1e8[0] = '\0';
      acStack_1e8[1] = '\0';
      acStack_1e8[2] = '\0';
      acStack_1e8[3] = '\0';
      acStack_1e8[4] = '\0';
      acStack_1e8[5] = '\0';
      acStack_1e8[6] = '\0';
      acStack_1e8[7] = '\0';
      acStack_1e8[8] = '\0';
      acStack_1e8[9] = '\0';
      acStack_1e8[10] = '\0';
      acStack_1e8[0xb] = '\0';
      acStack_1e8[0xc] = '\0';
      acStack_1e8[0xd] = '\0';
      acStack_1e8[0xe] = '\0';
      acStack_1e8[0xf] = '\0';
      auStack_1f8[8] = '\0';
      auStack_1f8[9] = '\0';
      auStack_1f8[10] = '\0';
      auStack_1f8[0xb] = '\0';
      auStack_1f8[0xc] = '\0';
      auStack_1f8[0xd] = '\0';
      auStack_1f8[0xe] = '\0';
      auStack_1f8[0xf] = '\0';
      puVar22 = (undefined4 *)((long)&MACH_HEADER.filetype + 1);
      FUN_003b646c(auStack_1f8 + 0x20,2,"Socket closed",0xd,&psStack_1a0,auStack_1f8 + 8);
      FUN_003bdd6c(auStack_1f8 + 0x28,auStack_1f8 + 0x20,psVar11);
      psVar9 = (section *)(auStack_1f8 + 0x28);
      FUN_003bdcec(psVar11);
      if (((ulong)auStack_1d0 & 1) != 0) {
        FUN_0055293c();
      }
      if ((uStack_1d8 & 1) != 0) {
        FUN_0055293c();
      }
      psStack_188 = (section *)(auStack_1f8 + 8);
      FUN_0033d548(&psStack_188);
    }
    else if (lVar16 == -1) {
      uVar12._0_4_ = psVar11->reloff;
      uVar12._4_4_ = psVar11->nrelocs;
      func_0x003ecf8c(uVar12);
      param_3 = *(undefined4 **)psVar11->segname;
      _CFReadStreamCopyError();
      if (param_3 == (undefined4 *)0x0) {
        acStack_1b8[0] = '\0';
        acStack_1b8[1] = '\0';
        acStack_1b8[2] = '\0';
        acStack_1b8[3] = '\0';
        acStack_1b8[4] = '\0';
        acStack_1b8[5] = '\0';
        acStack_1b8[6] = '\0';
        acStack_1b8[7] = '\0';
        acStack_1b8[8] = '\0';
        acStack_1b8[9] = '\0';
        acStack_1b8[10] = '\0';
        acStack_1b8[0xb] = '\0';
        acStack_1b8[0xc] = '\0';
        acStack_1b8[0xd] = '\0';
        acStack_1b8[0xe] = '\0';
        acStack_1b8[0xf] = '\0';
        auStack_1c8[8] = '\0';
        auStack_1c8[9] = '\0';
        auStack_1c8[10] = '\0';
        auStack_1c8[0xb] = '\0';
        auStack_1c8[0xc] = '\0';
        auStack_1c8[0xd] = '\0';
        auStack_1c8[0xe] = '\0';
        auStack_1c8[0xf] = '\0';
        puVar22 = (undefined4 *)((long)&MACH_HEADER.cpusubtype + 2);
        FUN_003b646c(&psStack_1a0,2,"Read error",10,&uStack_1a1,auStack_1c8 + 8);
        psVar9 = *(section **)((section *)pcVar28)->sectname;
        if (psStack_1a0 == psVar9) {
LAB_003bd570:
          if (((ulong)psVar9 & 1) != 0) {
            FUN_0055293c();
          }
        }
        else {
          *(section **)((section *)pcVar28)->sectname = psStack_1a0;
          psStack_1a0 = (section *)0x36;
          if (((ulong)psVar9 & 1) != 0) {
            FUN_0055293c();
            psVar9 = psStack_1a0;
            goto LAB_003bd570;
          }
        }
        psStack_188 = (section *)(auStack_1c8 + 8);
        FUN_0033d548(&psStack_188);
      }
      else {
        puVar22 = param_3;
        FUN_003be760(&uStack_198,
                     "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/endpoint_cfstream.cc"
                     ,0xa7,param_3,"Read error");
        FUN_003bdd6c(&psStack_188,&uStack_198,psVar11);
        psVar9 = *(section **)((section *)pcVar28)->sectname;
        if (psStack_188 == psVar9) {
LAB_003bd460:
          if (((ulong)psVar9 & 1) != 0) {
            FUN_0055293c();
          }
        }
        else {
          *(section **)((section *)pcVar28)->sectname = psStack_188;
          psStack_188 = (section *)(segment_command_00000020.segname + 0xe);
          if (((ulong)psVar9 & 1) != 0) {
            FUN_0055293c();
            psVar9 = psStack_188;
            goto LAB_003bd460;
          }
        }
        if ((uStack_198 & 1) != 0) {
          FUN_0055293c();
        }
        _CFRelease(param_3);
      }
      pcVar28 = *(char **)((section *)pcVar28)->sectname;
      if (((ulong)pcVar28 & 1) != 0) {
        piVar26 = (int *)((long)&((section *)((long)pcVar28 + -0x50))->reserved3 + 3);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar26,0x10);
          if (bVar3) {
            *piVar26 = *piVar26 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      psVar9 = (section *)auStack_1c8;
      auStack_1c8._0_8_ = pcVar28;
      FUN_003bdcec(psVar11);
      if (((ulong)pcVar28 & 1) != 0) {
        FUN_0055293c(pcVar28);
      }
    }
    else {
      if ((long)param_3 - lVar16 != 0 && lVar16 <= (long)param_3) {
        uVar13._0_4_ = psVar11->reloff;
        uVar13._4_4_ = psVar11->nrelocs;
        puVar22 = (undefined4 *)0x0;
        FUN_003eda78(uVar13,(long)param_3 - lVar16);
      }
      auStack_1f8[0] = '\0';
      auStack_1f8[1] = '\0';
      auStack_1f8[2] = '\0';
      auStack_1f8[3] = '\0';
      auStack_1f8[4] = '\0';
      auStack_1f8[5] = '\0';
      auStack_1f8[6] = '\0';
      auStack_1f8[7] = '\0';
      psVar9 = (section *)auStack_1f8;
      FUN_003bdcec(psVar11);
    }
    FUN_003bd01c();
    psVar10 = psVar11;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_158) {
      return psVar11;
    }
  }
  else {
    func_0x003ecf8c();
    pcVar28 = *(char **)((section *)pcVar28)->sectname;
    if (((ulong)pcVar28 & 1) != 0) {
      piVar26 = (int *)((long)&((section *)((long)pcVar28 + -0x50))->reserved3 + 3);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar26,0x10);
        if (bVar3) {
          *piVar26 = *piVar26 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    psVar9 = (section *)&psStack_190;
    psVar10 = psVar11;
    psStack_190 = (section *)pcVar28;
    FUN_003bdcec();
    if (((ulong)pcVar28 & 1) != 0) {
      psVar10 = (section *)pcVar28;
      FUN_0055293c();
    }
    psVar18 = psStack_138;
    psVar27 = psStack_140;
    pppppppuVar30 = pppppppuStack_130;
    pcVar4 = pcStack_128;
    puVar20 = auStack_120;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_158) goto code_r0x003bd01c;
  }
  ___stack_chk_fail();
  FUN_0033c494(&psStack_1a0);
  psStack_188 = (section *)(auStack_1c8 + 8);
  FUN_0033d548(&psStack_188);
  psVar11 = psVar10;
  __Unwind_Resume();
  puVar5 = auStack_2f0;
  psVar21 = (section *)auStack_2f0;
  pcStack_208 = FUN_003bd6d4;
  pppppppuVar29 = &pppppppuStack_210;
  lStack_238 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar16._0_4_ = psVar11->offset;
  lVar16._4_4_ = psVar11->align;
  ppsStack_230 = param_2;
  puStack_228 = param_3;
  psStack_220 = (section *)pcVar28;
  psStack_218 = psVar10;
  pppppppuStack_210 = &pppppppuStack_130;
  if (lVar16 == 0) {
    func_0x00773ed0();
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x3bd9d4);
    (*pcVar4)();
  }
  if (*(long *)psVar9->sectname == 0) {
    uVar15._0_4_ = psVar11->flags;
    uVar15._4_4_ = psVar11->reserved1;
    param_2 = &psStack_258;
    FUN_003ecdfc(&psStack_258,uVar15);
    param_3 = (undefined4 *)((ulong)uStack_250 & 0xff);
    if (psStack_258 != (section *)0x0) {
      param_3 = uStack_250;
    }
    lVar16 = *(long *)(psVar11->segname + 8);
    qVar19 = (long)&uStack_250 + 1;
    if (psStack_258 != (section *)0x0) {
      qVar19 = qStack_248;
    }
    puVar22 = param_3;
    _CFWriteStreamWrite(lVar16,qVar19);
    if (lVar16 == -1) {
      uVar17._0_4_ = psVar11->flags;
      uVar17._4_4_ = psVar11->reserved1;
      func_0x003ecf8c(uVar17);
      param_3 = *(undefined4 **)(psVar11->segname + 8);
      _CFWriteStreamCopyError();
      if (param_3 == (undefined4 *)0x0) {
        auStack_2e8[0x10] = '\0';
        auStack_2e8[0x11] = '\0';
        auStack_2e8[0x12] = '\0';
        auStack_2e8[0x13] = '\0';
        auStack_2e8[0x14] = '\0';
        auStack_2e8[0x15] = '\0';
        auStack_2e8[0x16] = '\0';
        auStack_2e8[0x17] = '\0';
        auStack_2e8._24_8_ = 0;
        auStack_2e8[8] = '\0';
        auStack_2e8[9] = '\0';
        auStack_2e8[10] = '\0';
        auStack_2e8[0xb] = '\0';
        auStack_2e8[0xc] = '\0';
        auStack_2e8[0xd] = '\0';
        auStack_2e8[0xe] = '\0';
        auStack_2e8[0xf] = '\0';
        puVar22 = (undefined4 *)((long)&MACH_HEADER.filetype + 1);
        FUN_003b646c(auStack_2e8 + 0x28,2,"write failed.",0xd,auStack_2e8 + 0x27,auStack_2e8 + 8);
        uVar25 = *(ulong *)psVar9->sectname;
        if (auStack_2e8._40_8_ == uVar25) {
LAB_003bd920:
          if ((uVar25 & 1) != 0) {
            FUN_0055293c();
          }
        }
        else {
          *(undefined8 *)psVar9->sectname = auStack_2e8._40_8_;
          auStack_2e8._40_8_ = 0x36;
          if ((uVar25 & 1) != 0) {
            FUN_0055293c();
            uVar25 = auStack_2e8._40_8_;
            goto LAB_003bd920;
          }
        }
        pcStack_2a8 = auStack_2e8 + 8;
        FUN_0033d548(&pcStack_2a8);
      }
      else {
        puVar22 = param_3;
        FUN_003be760(auStack_2e8 + 0x30,
                     "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/endpoint_cfstream.cc"
                     ,0xd0,param_3,"write failed.");
        FUN_003bdd6c(&pcStack_2a8,auStack_2e8 + 0x30,psVar11);
        pcVar28 = *(char **)psVar9->sectname;
        if (pcStack_2a8 == pcVar28) {
LAB_003bd894:
          if (((ulong)pcVar28 & 1) != 0) {
            FUN_0055293c();
          }
        }
        else {
          *(char **)psVar9->sectname = pcStack_2a8;
          pcStack_2a8 = segment_command_00000020.segname + 0xe;
          if (((ulong)pcVar28 & 1) != 0) {
            FUN_0055293c();
            pcVar28 = pcStack_2a8;
            goto LAB_003bd894;
          }
        }
        if ((auStack_2e8._48_8_ & 1) != 0) {
          FUN_0055293c();
        }
        _CFRelease(param_3);
      }
      psVar9 = *(section **)psVar9->sectname;
      if (((ulong)psVar9 & 1) != 0) {
        piVar26 = (int *)((long)&psVar9[-1].reserved3 + 3);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar26,0x10);
          if (bVar3) {
            *piVar26 = *piVar26 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      psVar21 = (section *)auStack_2e8;
      auStack_2e8._0_8_ = psVar9;
      FUN_003bde34(psVar11);
      if (((ulong)psVar9 & 1) != 0) {
        FUN_0055293c(psVar9);
      }
      FUN_003bd01c(psVar11);
    }
    else {
      puVar1 = (undefined4 *)((ulong)uStack_250 & 0xff);
      if (psStack_258 != (section *)0x0) {
        puVar1 = uStack_250;
      }
      if (lVar16 < (long)puVar1) {
        psVar9 = *(section **)&psVar11->flags;
        puStack_298 = uStack_250;
        psStack_2a0 = psStack_258;
        qStack_288 = qStack_240;
        qStack_290 = qStack_248;
        puVar22 = param_3;
        FUN_003ec47c(auStack_278,&psStack_2a0);
        FUN_003ece48(psVar9,auStack_278);
      }
      if (*(long *)(*(long *)&psVar11->flags + 0x20) != 0) {
        qVar19 = psVar11->addr;
        uVar31 = 0x3bd820;
        psVar18 = psVar11;
        goto SUB_003bc508;
      }
      auStack_2f0[0] = '\0';
      auStack_2f0[1] = '\0';
      auStack_2f0[2] = '\0';
      auStack_2f0[3] = '\0';
      auStack_2f0[4] = '\0';
      auStack_2f0[5] = '\0';
      auStack_2f0[6] = '\0';
      auStack_2f0[7] = '\0';
      FUN_003bde34(psVar11);
      FUN_003bd01c(psVar11);
    }
    if ((section *)((long)&MACH_HEADER.magic + 1) < psStack_258) {
      do {
        psVar10 = (section *)((long)&(*(section **)psStack_258->sectname)[-1].reserved3 + 3);
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(psStack_258,0x10);
        if (bVar3) {
          *(section **)psStack_258->sectname = psVar10;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (psVar10 == (section *)0x0) {
        (*(code *)*(section **)(psStack_258->sectname + 8))();
      }
    }
    psVar8 = psStack_258;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_238) {
      return psStack_258;
    }
  }
  else {
    uVar14._0_4_ = psVar11->flags;
    uVar14._4_4_ = psVar11->reserved1;
    func_0x003ecf8c(uVar14);
    psVar9 = *(section **)psVar9->sectname;
    if (((ulong)psVar9 & 1) != 0) {
      piVar26 = (int *)((long)&psVar9[-1].reserved3 + 3);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar26,0x10);
        if (bVar3) {
          *piVar26 = *piVar26 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    psVar21 = (section *)auStack_2b0;
    psVar8 = psVar11;
    auStack_2b0 = (undefined1  [8])psVar9;
    FUN_003bde34();
    if (((ulong)psVar9 & 1) != 0) {
      psVar8 = psVar9;
      FUN_0055293c();
    }
    psVar18 = psStack_218;
    psVar27 = psStack_220;
    pppppppuVar30 = pppppppuStack_210;
    pcVar4 = pcStack_208;
    puVar20 = auStack_200;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_238) {
code_r0x003bd01c:
      *(section **)(puVar20 + -0x20) = psVar27;
      *(section **)(puVar20 + -0x18) = psVar18;
      *(undefined8 ********)(puVar20 + -0x10) = pppppppuVar30;
      *(code **)(puVar20 + -8) = pcVar4;
      psVar9 = (section *)(psVar11->sectname + 8);
      FUN_00339d14();
      if ((int)psVar9 != 0) {
        _CFRelease(*(undefined8 *)psVar11->segname);
        _CFRelease(*(undefined8 *)(psVar11->segname + 8));
        func_0x003bbe28(psVar11->addr,"",0,0);
        if (psVar11[2].segname[7] < '\0') {
          __ZdlPv(*(section **)psVar11[2].sectname);
        }
        if (*(char *)((long)&psVar11[1].reserved3 + 3) < '\0') {
          uVar7._0_4_ = psVar11[1].reloff;
          uVar7._4_4_ = psVar11[1].nrelocs;
          __ZdlPv(uVar7);
        }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_0099c620)(psVar11);
        return psVar11;
      }
      return psVar9;
    }
  }
  ___stack_chk_fail();
  FUN_0033c494(auStack_2e8 + 0x28);
  pcStack_2a8 = auStack_2e8 + 8;
  FUN_0033d548(&pcStack_2a8);
  psVar11 = psVar8;
  __Unwind_Resume();
  puVar5 = auStack_340;
  uStack_2f8 = 0x3bda70;
  lStack_318 = *(long *)PTR____stack_chk_guard_00999f88;
  psStack_310 = psVar9;
  psStack_308 = psVar8;
  pppppppuStack_300 = pppppppuVar29;
  if (psVar11->size == 0) {
    psVar11->size = (qword)puVar22;
    *(section **)&psVar11->reloff = psVar21;
    func_0x003ecf8c(psVar21);
    FUN_003ec0c8(auStack_338,0x2000);
    FUN_003ecd90(psVar21,auStack_338);
    func_0x00339cd4(psVar11->sectname + 8);
    psVar18 = (section *)psVar11->addr;
    psVar10 = (section *)&psVar11->reserved2;
    func_0x003bc500();
    psVar8 = psVar11;
    psVar9 = psVar21;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_318) {
      return psVar18;
    }
  }
  else {
    func_0x00773f04();
    psVar18 = psVar11;
    psVar10 = psVar21;
  }
  ___stack_chk_fail();
  ppsVar6 = &psStack_360;
  psStack_360 = psVar9;
  psStack_358 = psVar8;
  pppppppuStack_350 = &pppppppuStack_300;
  uStack_348 = 0x3bdb0c;
  pppppppuVar30 = &pppppppuStack_350;
  lVar24._0_4_ = psVar18->offset;
  lVar24._4_4_ = psVar18->align;
  if (lVar24 != 0) {
    uVar31 = 0x3bdb4c;
    func_0x00773f38();
SUB_003bdb4c:
    *(section **)((long)ppsVar6 + -0x20) = psVar9;
    *(section **)((long)ppsVar6 + -0x18) = psVar8;
    *(undefined8 ********)((long)ppsVar6 + -0x10) = pppppppuVar30;
    *(undefined8 *)((long)ppsVar6 + -8) = uVar31;
    if (psVar18 != psVar10) {
      if (*(section **)psVar10->sectname == (section *)0x0) {
        FUN_003bdb94(psVar18,psVar10->sectname + 8);
      }
      else {
        FUN_003bdc3c(psVar18);
      }
    }
    return psVar18;
  }
  *(undefined4 **)&psVar18->offset = puVar22;
  *(section **)&psVar18->flags = psVar10;
  func_0x00339cd4(psVar18->sectname + 8);
  qVar19 = psVar18->addr;
  psVar11 = psStack_358;
  psVar9 = psStack_360;
  pppppppuVar29 = pppppppuStack_350;
  uVar31 = uStack_348;
SUB_003bc508:
  pcVar28 = psVar18[1].segname + 8;
  psVar10 = (section *)(qVar19 + 0x18);
  *(section **)(puVar5 + -0x20) = psVar9;
  *(section **)(puVar5 + -0x18) = psVar11;
  *(undefined8 ********)(puVar5 + -0x10) = pppppppuVar29;
  *(undefined8 *)(puVar5 + -8) = uVar31;
  do {
    uVar25 = *(ulong *)psVar10->sectname;
    if (uVar25 == 0) {
      while (*(long *)psVar10->sectname == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(psVar10,0x10);
        if (bVar3) {
          *(char **)psVar10->sectname = pcVar28;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          return psVar10;
        }
      }
    }
    else {
      if (uVar25 != 2) {
        if ((uVar25 & 1) != 0) {
          FUN_003b7b3c(puVar5 + -0x30,uVar25 & 0xfffffffffffffffe);
          FUN_003bdf2c(puVar5 + -0x40,2,"FD Shutdown",0xb,puVar5 + -0x41,1,puVar5 + -0x30);
          FUN_003c1e6c(puVar5 + -0x31,pcVar28,puVar5 + -0x40);
          if ((*(ulong *)(puVar5 + -0x40) & 1) != 0) {
            FUN_0055293c();
          }
          psVar9 = *(section **)(puVar5 + -0x30);
          if (((ulong)psVar9 & 1) != 0) {
            FUN_0055293c();
          }
          return psVar9;
        }
        func_0x00774260();
        func_0x0040cf10();
        func_0x0040cf10();
        FUN_0033c494(puVar5 + -0x40);
        FUN_0033c494(puVar5 + -0x30);
        psVar8 = psVar10;
        __Unwind_Resume();
        *(section ***)(puVar5 + -0x80) = param_2;
        *(undefined4 **)(puVar5 + -0x78) = param_3;
        *(section **)(puVar5 + -0x70) = psVar9;
        *(section **)(puVar5 + -0x68) = psVar10;
        *(undefined1 **)(puVar5 + -0x60) = puVar5 + -0x10;
        *(code **)(puVar5 + -0x58) = FUN_003c3b50;
        uVar25 = *(ulong *)pcVar28;
        *(ulong *)(puVar5 + -0x88) = uVar25;
        if ((uVar25 & 1) != 0) {
          piVar26 = (int *)(uVar25 - 1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar26,0x10);
            if (bVar3) {
              *piVar26 = *piVar26 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        puVar20 = puVar5 + -0x88;
        FUN_003b7ab0();
        if ((*(ulong *)(puVar5 + -0x88) & 1) != 0) {
          FUN_0055293c();
        }
        do {
          uVar25 = *(ulong *)psVar8->sectname;
          if ((uVar25 | 2) == 2) {
            while (*(ulong *)psVar8->sectname == uVar25) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(psVar8,0x10);
              if (bVar3) {
                *(ulong *)psVar8->sectname = (ulong)puVar20 | 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') {
LAB_003c3c34:
                return (section *)((long)&MACH_HEADER.magic + 1);
              }
            }
          }
          else {
            if ((uVar25 & 1) != 0) {
              FUN_003b7afc(puVar20);
              return (section *)0x0;
            }
            while (*(ulong *)psVar8->sectname == uVar25) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(psVar8,0x10);
              if (bVar3) {
                *(ulong *)psVar8->sectname = (ulong)puVar20 | 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') {
                FUN_003bdf2c(puVar5 + -0x98,2,"FD Shutdown",0xb,puVar5 + -0x99,1,pcVar28);
                FUN_003c1e6c(puVar5 + -0x89,uVar25,puVar5 + -0x98);
                if ((*(ulong *)(puVar5 + -0x98) & 1) != 0) {
                  FUN_0055293c();
                }
                goto LAB_003c3c34;
              }
            }
          }
          ClearExclusiveLocal();
        } while( true );
      }
      while (*(long *)psVar10->sectname == 2) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(psVar10,0x10);
        if (bVar3) {
          psVar10->sectname[0] = '\0';
          psVar10->sectname[1] = '\0';
          psVar10->sectname[2] = '\0';
          psVar10->sectname[3] = '\0';
          psVar10->sectname[4] = '\0';
          psVar10->sectname[5] = '\0';
          psVar10->sectname[6] = '\0';
          psVar10->sectname[7] = '\0';
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          *(undefined8 *)(puVar5 + -0x28) = 0;
          FUN_003c1e6c(puVar5 + -0x30,pcVar28,puVar5 + -0x28);
          psVar9 = *(section **)(puVar5 + -0x28);
          if (((ulong)psVar9 & 1) == 0) {
            return psVar9;
          }
          FUN_0055293c();
          return psVar9;
        }
      }
    }
    ClearExclusiveLocal();
  } while( true );
}



/* Entry: 003bd2f0; end: 003bd6d3;  */

/* WARNING: Possible PIC construction at 0x003bd81c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x003bd820) */
/* WARNING: Type propagation algorithm not settling */

ulong ******* FUN_003bd2f0(ulong *******param_1,ulong *******param_2,ulong ******param_3)

{
  ulong ****ppppuVar1;
  long lVar2;
  ulong ******ppppppuVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  ulong ******ppppppuVar7;
  ulong *******pppppppuVar8;
  char *pcVar9;
  ulong *******pppppppuVar10;
  ulong ******ppppppuVar11;
  ulong *******pppppppuVar12;
  undefined1 *puVar13;
  ulong *******pppppppuVar14;
  int *piVar15;
  ulong *****pppppuVar16;
  ulong *******unaff_x19;
  ulong *******unaff_x20;
  ulong *******pppppppuVar17;
  ulong ******unaff_x21;
  ulong *******unaff_x22;
  undefined8 *******pppppppuVar18;
  undefined8 ******unaff_x29;
  code *unaff_x30;
  undefined8 uStack_228;
  undefined1 auStack_220 [8];
  undefined1 auStack_218 [32];
  long lStack_1f8;
  ulong *******pppppppuStack_1f0;
  ulong *******pppppppuStack_1e8;
  undefined8 *******pppppppuStack_1e0;
  code *pcStack_1d8;
  ulong ******ppppppuStack_1d0;
  ulong *******pppppppuStack_1c8;
  char acStack_1c0 [31];
  undefined1 uStack_1a1;
  ulong ******ppppppuStack_1a0;
  ulong uStack_198;
  ulong *******pppppppuStack_190;
  char *pcStack_188;
  ulong *******pppppppuStack_180;
  ulong ******ppppppuStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined1 auStack_158 [32];
  ulong *******pppppppuStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 ******ppppppuStack_f0;
  code *pcStack_e8;
  undefined1 auStack_e0 [8];
  ulong ******ppppppuStack_d8;
  ulong *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong *puStack_b8;
  ulong ******ppppppuStack_b0;
  ulong *******pppppppuStack_a8;
  char acStack_a0 [31];
  undefined1 uStack_81;
  ulong ******ppppppuStack_80;
  ulong uStack_78;
  ulong *******pppppppuStack_70;
  char *pcStack_68;
  ulong ****ppppuStack_60;
  ulong ******ppppppuStack_58;
  ulong ****ppppuStack_50;
  ulong ****ppppuStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  if (param_1[5] == (ulong ******)0x0) {
    func_0x00773e68();
LAB_003bd600:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x3bd604);
    (*pcVar6)();
  }
  if (*param_2 == (ulong ******)0x0) {
    if (param_1[7][2] != (ulong *****)0x1) {
      func_0x00773e9c();
      goto LAB_003bd600;
    }
    pppppuVar16 = param_1[7][1];
    ppppppuStack_58 = (ulong ******)pppppuVar16[1];
    ppppuStack_60 = *pppppuVar16;
    ppppuStack_48 = pppppuVar16[3];
    ppppuStack_50 = pppppuVar16[2];
    unaff_x21 = (ulong ******)((ulong)ppppppuStack_58 & 0xff);
    if (ppppuStack_60 != (ulong ****)0x0) {
      unaff_x21 = ppppppuStack_58;
    }
    ppppppuVar11 = param_1[2];
    ppppuVar1 = (ulong ****)((ulong)&ppppuStack_60 | 9);
    if (ppppuStack_60 != (ulong ****)0x0) {
      ppppuVar1 = ppppuStack_50;
    }
    param_3 = unaff_x21;
    _CFReadStreamRead(ppppppuVar11,ppppuVar1);
    if (ppppppuVar11 == (ulong ******)0x0) {
      func_0x003ecf8c(param_1[7]);
      uStack_c8 = 0;
      uStack_c0 = 0;
      puStack_d0 = (ulong *)0x0;
      param_3 = (ulong ******)0xd;
      FUN_003b646c(&puStack_b8,2,"Socket closed",0xd,&ppppppuStack_80,&puStack_d0);
      FUN_003bdd6c(&ppppppuStack_b0,&puStack_b8,param_1);
      pppppppuVar17 = &ppppppuStack_b0;
      FUN_003bdcec(param_1);
      if (((ulong)ppppppuStack_b0 & 1) != 0) {
        FUN_0055293c();
      }
      if (((ulong)puStack_b8 & 1) != 0) {
        FUN_0055293c();
      }
      pcStack_68 = (char *)&puStack_d0;
      FUN_0033d548(&pcStack_68);
    }
    else if (ppppppuVar11 == (ulong ******)0xffffffffffffffff) {
      func_0x003ecf8c(param_1[7]);
      unaff_x21 = param_1[2];
      _CFReadStreamCopyError();
      if (unaff_x21 == (ulong ******)0x0) {
        acStack_a0[8] = '\0';
        acStack_a0[9] = '\0';
        acStack_a0[10] = '\0';
        acStack_a0[0xb] = '\0';
        acStack_a0[0xc] = '\0';
        acStack_a0[0xd] = '\0';
        acStack_a0[0xe] = '\0';
        acStack_a0[0xf] = '\0';
        acStack_a0[0x10] = '\0';
        acStack_a0[0x11] = '\0';
        acStack_a0[0x12] = '\0';
        acStack_a0[0x13] = '\0';
        acStack_a0[0x14] = '\0';
        acStack_a0[0x15] = '\0';
        acStack_a0[0x16] = '\0';
        acStack_a0[0x17] = '\0';
        acStack_a0[0] = '\0';
        acStack_a0[1] = '\0';
        acStack_a0[2] = '\0';
        acStack_a0[3] = '\0';
        acStack_a0[4] = '\0';
        acStack_a0[5] = '\0';
        acStack_a0[6] = '\0';
        acStack_a0[7] = '\0';
        param_3 = (ulong ******)0xa;
        FUN_003b646c(&ppppppuStack_80,2,"Read error",10,&uStack_81,acStack_a0);
        ppppppuVar11 = *param_2;
        if (ppppppuStack_80 == ppppppuVar11) {
LAB_003bd570:
          if (((ulong)ppppppuVar11 & 1) != 0) {
            FUN_0055293c();
          }
        }
        else {
          *param_2 = ppppppuStack_80;
          ppppppuStack_80 = (ulong ******)0x36;
          if (((ulong)ppppppuVar11 & 1) != 0) {
            FUN_0055293c();
            ppppppuVar11 = ppppppuStack_80;
            goto LAB_003bd570;
          }
        }
        pcStack_68 = acStack_a0;
        FUN_0033d548(&pcStack_68);
      }
      else {
        param_3 = unaff_x21;
        FUN_003be760(&uStack_78,
                     "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/endpoint_cfstream.cc"
                     ,0xa7,unaff_x21,"Read error");
        FUN_003bdd6c(&pcStack_68,&uStack_78,param_1);
        pcVar9 = (char *)*param_2;
        if (pcStack_68 == pcVar9) {
LAB_003bd460:
          if (((ulong)pcVar9 & 1) != 0) {
            FUN_0055293c();
          }
        }
        else {
          *param_2 = (ulong ******)pcStack_68;
          pcStack_68 = segment_command_00000020.segname + 0xe;
          if (((ulong)pcVar9 & 1) != 0) {
            FUN_0055293c();
            pcVar9 = pcStack_68;
            goto LAB_003bd460;
          }
        }
        if ((uStack_78 & 1) != 0) {
          FUN_0055293c();
        }
        _CFRelease(unaff_x21);
      }
      param_2 = (ulong *******)*param_2;
      if (((ulong)param_2 & 1) != 0) {
        piVar15 = (int *)((long)param_2 + -1);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar5) {
            *piVar15 = *piVar15 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      pppppppuVar17 = (ulong *******)&pppppppuStack_a8;
      pppppppuStack_a8 = param_2;
      FUN_003bdcec(param_1);
      if (((ulong)param_2 & 1) != 0) {
        FUN_0055293c(param_2);
      }
    }
    else {
      if ((long)unaff_x21 - (long)ppppppuVar11 != 0 && (long)ppppppuVar11 <= (long)unaff_x21) {
        param_3 = (ulong ******)0x0;
        FUN_003eda78(param_1[7],(long)unaff_x21 - (long)ppppppuVar11);
      }
      ppppppuStack_d8 = (ulong ******)0x0;
      pppppppuVar17 = &ppppppuStack_d8;
      FUN_003bdcec(param_1);
    }
    FUN_003bd01c();
    pppppppuVar10 = param_1;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
      return param_1;
    }
  }
  else {
    func_0x003ecf8c();
    param_2 = (ulong *******)*param_2;
    if (((ulong)param_2 & 1) != 0) {
      piVar15 = (int *)((long)param_2 + -1);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar5) {
          *piVar15 = *piVar15 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    pppppppuVar17 = (ulong *******)&pppppppuStack_70;
    pppppppuVar10 = param_1;
    pppppppuStack_70 = param_2;
    FUN_003bdcec();
    if (((ulong)param_2 & 1) != 0) {
      pppppppuVar10 = param_2;
      FUN_0055293c();
    }
    puVar13 = (undefined1 *)register0x00000008;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) goto code_r0x003bd01c;
  }
  unaff_x20 = param_2;
  ___stack_chk_fail();
  FUN_0033c494(&ppppppuStack_80);
  pcStack_68 = acStack_a0;
  FUN_0033d548(&pcStack_68);
  param_1 = pppppppuVar10;
  __Unwind_Resume();
  ppppppuVar7 = (ulong ******)&ppppppuStack_1d0;
  pppppppuVar12 = &ppppppuStack_1d0;
  ppppppuStack_f0 = (undefined8 ******)&stack0xfffffffffffffff0;
  pcStack_e8 = FUN_003bd6d4;
  pppppppuVar18 = &ppppppuStack_f0;
  lStack_118 = *(long *)PTR____stack_chk_guard_00999f88;
  if (param_1[6] == (ulong ******)0x0) {
    func_0x00773ed0();
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x3bd9d4);
    (*pcVar6)();
  }
  if (*pppppppuVar17 == (ulong ******)0x0) {
    unaff_x22 = (ulong *******)&pppppppuStack_138;
    FUN_003ecdfc(&pppppppuStack_138,param_1[8]);
    unaff_x21 = (ulong ******)((ulong)uStack_130 & 0xff);
    if (pppppppuStack_138 != (ulong *******)0x0) {
      unaff_x21 = uStack_130;
    }
    ppppppuVar11 = param_1[3];
    lVar2 = (long)&uStack_130 + 1;
    if (pppppppuStack_138 != (ulong *******)0x0) {
      lVar2 = lStack_128;
    }
    param_3 = unaff_x21;
    _CFWriteStreamWrite(ppppppuVar11,lVar2);
    if (ppppppuVar11 == (ulong ******)0xffffffffffffffff) {
      func_0x003ecf8c(param_1[8]);
      unaff_x21 = param_1[3];
      _CFWriteStreamCopyError();
      if (unaff_x21 == (ulong ******)0x0) {
        acStack_1c0[8] = '\0';
        acStack_1c0[9] = '\0';
        acStack_1c0[10] = '\0';
        acStack_1c0[0xb] = '\0';
        acStack_1c0[0xc] = '\0';
        acStack_1c0[0xd] = '\0';
        acStack_1c0[0xe] = '\0';
        acStack_1c0[0xf] = '\0';
        acStack_1c0[0x10] = '\0';
        acStack_1c0[0x11] = '\0';
        acStack_1c0[0x12] = '\0';
        acStack_1c0[0x13] = '\0';
        acStack_1c0[0x14] = '\0';
        acStack_1c0[0x15] = '\0';
        acStack_1c0[0x16] = '\0';
        acStack_1c0[0x17] = '\0';
        acStack_1c0[0] = '\0';
        acStack_1c0[1] = '\0';
        acStack_1c0[2] = '\0';
        acStack_1c0[3] = '\0';
        acStack_1c0[4] = '\0';
        acStack_1c0[5] = '\0';
        acStack_1c0[6] = '\0';
        acStack_1c0[7] = '\0';
        param_3 = (ulong ******)0xd;
        FUN_003b646c(&ppppppuStack_1a0,2,"write failed.",0xd,&uStack_1a1,acStack_1c0);
        ppppppuVar11 = *pppppppuVar17;
        if (ppppppuStack_1a0 == ppppppuVar11) {
LAB_003bd920:
          if (((ulong)ppppppuVar11 & 1) != 0) {
            FUN_0055293c();
          }
        }
        else {
          *pppppppuVar17 = ppppppuStack_1a0;
          ppppppuStack_1a0 = (ulong ******)0x36;
          if (((ulong)ppppppuVar11 & 1) != 0) {
            FUN_0055293c();
            ppppppuVar11 = ppppppuStack_1a0;
            goto LAB_003bd920;
          }
        }
        pcStack_188 = acStack_1c0;
        FUN_0033d548(&pcStack_188);
      }
      else {
        param_3 = unaff_x21;
        FUN_003be760(&uStack_198,
                     "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/endpoint_cfstream.cc"
                     ,0xd0,unaff_x21,"write failed.");
        FUN_003bdd6c(&pcStack_188,&uStack_198,param_1);
        pcVar9 = (char *)*pppppppuVar17;
        if (pcStack_188 == pcVar9) {
LAB_003bd894:
          if (((ulong)pcVar9 & 1) != 0) {
            FUN_0055293c();
          }
        }
        else {
          *pppppppuVar17 = (ulong ******)pcStack_188;
          pcStack_188 = segment_command_00000020.segname + 0xe;
          if (((ulong)pcVar9 & 1) != 0) {
            FUN_0055293c();
            pcVar9 = pcStack_188;
            goto LAB_003bd894;
          }
        }
        if ((uStack_198 & 1) != 0) {
          FUN_0055293c();
        }
        _CFRelease(unaff_x21);
      }
      pppppppuVar17 = (ulong *******)*pppppppuVar17;
      if (((ulong)pppppppuVar17 & 1) != 0) {
        piVar15 = (int *)((long)pppppppuVar17 + -1);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar5) {
            *piVar15 = *piVar15 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      pppppppuVar12 = (ulong *******)&pppppppuStack_1c8;
      pppppppuStack_1c8 = pppppppuVar17;
      FUN_003bde34(param_1);
      if (((ulong)pppppppuVar17 & 1) != 0) {
        FUN_0055293c(pppppppuVar17);
      }
      FUN_003bd01c(param_1);
    }
    else {
      ppppppuVar3 = (ulong ******)((ulong)uStack_130 & 0xff);
      if (pppppppuStack_138 != (ulong *******)0x0) {
        ppppppuVar3 = uStack_130;
      }
      if ((long)ppppppuVar11 < (long)ppppppuVar3) {
        pppppppuVar17 = (ulong *******)param_1[8];
        ppppppuStack_178 = uStack_130;
        pppppppuStack_180 = pppppppuStack_138;
        uStack_168 = uStack_120;
        lStack_170 = lStack_128;
        param_3 = unaff_x21;
        FUN_003ec47c(auStack_158,&pppppppuStack_180);
        FUN_003ece48(pppppppuVar17,auStack_158);
      }
      if (param_1[8][4] != (ulong *****)0x0) {
        ppppppuVar11 = param_1[4];
        uStack_228 = 0x3bd820;
        pppppppuVar10 = param_1;
        goto SUB_003bc508;
      }
      ppppppuStack_1d0 = (ulong ******)0x0;
      FUN_003bde34(param_1);
      FUN_003bd01c(param_1);
    }
    if ((ulong *******)((long)&MACH_HEADER.magic + 1) < pppppppuStack_138) {
      do {
        ppppppuVar11 = *pppppppuStack_138;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppppppuStack_138,0x10);
        if (bVar5) {
          *pppppppuStack_138 = (ulong ******)((long)ppppppuVar11 + -1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((ulong ******)((long)ppppppuVar11 + -1) == (ulong ******)0x0) {
        (*(code *)pppppppuStack_138[1])();
      }
    }
    pppppppuVar8 = pppppppuStack_138;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_118) {
      return pppppppuStack_138;
    }
  }
  else {
    func_0x003ecf8c(param_1[8]);
    pppppppuVar17 = (ulong *******)*pppppppuVar17;
    if (((ulong)pppppppuVar17 & 1) != 0) {
      piVar15 = (int *)((long)pppppppuVar17 + -1);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar5) {
          *piVar15 = *piVar15 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    pppppppuVar12 = (ulong *******)&pppppppuStack_190;
    pppppppuVar8 = param_1;
    pppppppuStack_190 = pppppppuVar17;
    FUN_003bde34();
    if (((ulong)pppppppuVar17 & 1) != 0) {
      pppppppuVar8 = pppppppuVar17;
      FUN_0055293c();
    }
    unaff_x19 = pppppppuVar10;
    unaff_x29 = ppppppuStack_f0;
    unaff_x30 = pcStack_e8;
    puVar13 = auStack_e0;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_118) {
code_r0x003bd01c:
      *(ulong ********)(puVar13 + -0x20) = unaff_x20;
      *(ulong ********)(puVar13 + -0x18) = unaff_x19;
      *(undefined8 *******)(puVar13 + -0x10) = unaff_x29;
      *(code **)(puVar13 + -8) = unaff_x30;
      pppppppuVar17 = param_1 + 1;
      FUN_00339d14();
      if ((int)pppppppuVar17 != 0) {
        _CFRelease(param_1[2]);
        _CFRelease(param_1[3]);
        func_0x003bbe28(param_1[4],"",0,0);
        if (*(char *)((long)param_1 + 0xb7) < '\0') {
          __ZdlPv(param_1[0x14]);
        }
        if (*(char *)((long)param_1 + 0x9f) < '\0') {
          __ZdlPv(param_1[0x11]);
        }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_0099c620)(param_1);
        return param_1;
      }
      return pppppppuVar17;
    }
  }
  ___stack_chk_fail();
  FUN_0033c494(&ppppppuStack_1a0);
  pcStack_188 = acStack_1c0;
  FUN_0033d548(&pcStack_188);
  param_1 = pppppppuVar8;
  __Unwind_Resume();
  ppppppuVar7 = (ulong ******)auStack_220;
  pcStack_1d8 = FUN_003bda70;
  lStack_1f8 = *(long *)PTR____stack_chk_guard_00999f88;
  pppppppuStack_1f0 = pppppppuVar17;
  pppppppuStack_1e8 = pppppppuVar8;
  pppppppuStack_1e0 = pppppppuVar18;
  if (param_1[5] == (ulong ******)0x0) {
    param_1[5] = param_3;
    param_1[7] = (ulong ******)pppppppuVar12;
    func_0x003ecf8c(pppppppuVar12);
    FUN_003ec0c8(auStack_218,0x2000);
    FUN_003ecd90(pppppppuVar12,auStack_218);
    func_0x00339cd4(param_1 + 1);
    pppppppuVar10 = (ulong *******)param_1[4];
    pppppppuVar14 = param_1 + 9;
    func_0x003bc500();
    pppppppuVar17 = pppppppuVar12;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1f8) {
      return pppppppuVar10;
    }
  }
  else {
    func_0x00773f04();
    pppppppuVar10 = param_1;
    pppppppuVar14 = pppppppuVar12;
    param_1 = pppppppuVar8;
  }
  ___stack_chk_fail();
  uStack_228 = 0x3bdb0c;
  if (pppppppuVar10[6] != (ulong ******)0x0) {
    func_0x00773f38();
    if (pppppppuVar10 != pppppppuVar14) {
      if (*pppppppuVar14 == (ulong ******)0x0) {
        FUN_003bdb94(pppppppuVar10,pppppppuVar14 + 1);
      }
      else {
        FUN_003bdc3c(pppppppuVar10);
      }
    }
    return pppppppuVar10;
  }
  pppppppuVar10[6] = param_3;
  pppppppuVar10[8] = (ulong ******)pppppppuVar14;
  func_0x00339cd4(pppppppuVar10 + 1);
  ppppppuVar11 = pppppppuVar10[4];
  pppppppuVar18 = &pppppppuStack_1e0;
SUB_003bc508:
  pppppppuVar10 = pppppppuVar10 + 0xd;
  pppppppuVar12 = (ulong *******)(ppppppuVar11 + 3);
  *(ulong ********)((long)ppppppuVar7 + -0x20) = pppppppuVar17;
  *(ulong ********)((long)ppppppuVar7 + -0x18) = param_1;
  *(undefined8 ********)((long)ppppppuVar7 + -0x10) = pppppppuVar18;
  *(undefined8 *)((long)ppppppuVar7 + -8) = uStack_228;
  do {
    ppppppuVar11 = *pppppppuVar12;
    if (ppppppuVar11 == (ulong ******)0x0) {
      while (*pppppppuVar12 == (ulong ******)0x0) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar12,0x10);
        if (bVar5) {
          *pppppppuVar12 = (ulong ******)pppppppuVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          return pppppppuVar12;
        }
      }
    }
    else {
      if (ppppppuVar11 != (ulong ******)0x2) {
        if (((ulong)ppppppuVar11 & 1) != 0) {
          FUN_003b7b3c((undefined1 *)((long)ppppppuVar7 + -0x30),
                       (ulong)ppppppuVar11 & 0xfffffffffffffffe);
          FUN_003bdf2c((undefined1 *)((long)ppppppuVar7 + -0x40),2,"FD Shutdown",0xb,
                       (undefined1 *)((long)ppppppuVar7 + -0x41),1,
                       (undefined1 *)((long)ppppppuVar7 + -0x30));
          FUN_003c1e6c((undefined1 *)((long)ppppppuVar7 + -0x31),pppppppuVar10,
                       (undefined1 *)((long)ppppppuVar7 + -0x40));
          if ((*(ulong *)((long)ppppppuVar7 + -0x40) & 1) != 0) {
            FUN_0055293c();
          }
          pppppppuVar17 = *(ulong ********)((long)ppppppuVar7 + -0x30);
          if (((ulong)pppppppuVar17 & 1) != 0) {
            FUN_0055293c();
          }
          return pppppppuVar17;
        }
        func_0x00774260();
        func_0x0040cf10();
        func_0x0040cf10();
        FUN_0033c494((undefined1 *)((long)ppppppuVar7 + -0x40));
        FUN_0033c494((undefined1 *)((long)ppppppuVar7 + -0x30));
        pppppppuVar8 = pppppppuVar12;
        __Unwind_Resume();
        *(ulong ********)((long)ppppppuVar7 + -0x80) = unaff_x22;
        *(ulong *******)((long)ppppppuVar7 + -0x78) = unaff_x21;
        *(ulong ********)((long)ppppppuVar7 + -0x70) = pppppppuVar17;
        *(ulong ********)((long)ppppppuVar7 + -0x68) = pppppppuVar12;
        *(undefined1 **)((long)ppppppuVar7 + -0x60) = (undefined1 *)((long)ppppppuVar7 + -0x10);
        *(code **)((long)ppppppuVar7 + -0x58) = FUN_003c3b50;
        ppppppuVar11 = *pppppppuVar10;
        *(ulong *******)((long)ppppppuVar7 + -0x88) = ppppppuVar11;
        if (((ulong)ppppppuVar11 & 1) != 0) {
          piVar15 = (int *)((long)ppppppuVar11 + -1);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar15,0x10);
            if (bVar5) {
              *piVar15 = *piVar15 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        puVar13 = (undefined1 *)((long)ppppppuVar7 + -0x88);
        FUN_003b7ab0();
        if ((*(ulong *)((long)ppppppuVar7 + -0x88) & 1) != 0) {
          FUN_0055293c();
        }
        do {
          ppppppuVar11 = *pppppppuVar8;
          if (((ulong)ppppppuVar11 | 2) == 2) {
            while (*pppppppuVar8 == ppppppuVar11) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar8,0x10);
              if (bVar5) {
                *pppppppuVar8 = (ulong ******)((ulong)puVar13 | 1);
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
LAB_003c3c34:
                return (ulong *******)((long)&MACH_HEADER.magic + 1);
              }
            }
          }
          else {
            if (((ulong)ppppppuVar11 & 1) != 0) {
              FUN_003b7afc(puVar13);
              return (ulong *******)0x0;
            }
            while (*pppppppuVar8 == ppppppuVar11) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar8,0x10);
              if (bVar5) {
                *pppppppuVar8 = (ulong ******)((ulong)puVar13 | 1);
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                FUN_003bdf2c((undefined1 *)((long)ppppppuVar7 + -0x98),2,"FD Shutdown",0xb,
                             (undefined1 *)((long)ppppppuVar7 + -0x99),1,pppppppuVar10);
                FUN_003c1e6c((undefined1 *)((long)ppppppuVar7 + -0x89),ppppppuVar11,
                             (undefined1 *)((long)ppppppuVar7 + -0x98));
                if ((*(ulong *)((long)ppppppuVar7 + -0x98) & 1) != 0) {
                  FUN_0055293c();
                }
                goto LAB_003c3c34;
              }
            }
          }
          ClearExclusiveLocal();
        } while( true );
      }
      while (*pppppppuVar12 == (ulong ******)0x2) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar12,0x10);
        if (bVar5) {
          *pppppppuVar12 = (ulong ******)0x0;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          *(undefined8 *)((long)ppppppuVar7 + -0x28) = 0;
          FUN_003c1e6c((undefined1 *)((long)ppppppuVar7 + -0x30),pppppppuVar10,
                       (undefined1 *)((long)ppppppuVar7 + -0x28));
          pppppppuVar17 = *(ulong ********)((long)ppppppuVar7 + -0x28);
          if (((ulong)pppppppuVar17 & 1) == 0) {
            return pppppppuVar17;
          }
          FUN_0055293c();
          return pppppppuVar17;
        }
      }
    }
    ClearExclusiveLocal();
  } while( true );
}



/* Entry: 003bd6d4; end: 003bda6f;  */

/* WARNING: Possible PIC construction at 0x003bd81c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x003bd820) */

ulong ******* FUN_003bd6d4(ulong *******param_1,ulong *******param_2,ulong ******param_3)

{
  long lVar1;
  ulong ******ppppppuVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  ulong ******ppppppuVar6;
  ulong *******pppppppuVar7;
  char *pcVar8;
  ulong *******pppppppuVar9;
  ulong ******ppppppuVar10;
  ulong *******pppppppuVar11;
  undefined1 *puVar12;
  ulong *******pppppppuVar13;
  int *piVar14;
  ulong ******unaff_x21;
  ulong *******unaff_x22;
  undefined8 *******pppppppuVar15;
  undefined8 uStack_148;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [32];
  long lStack_118;
  ulong ******ppppppuStack_110;
  ulong ******ppppppuStack_108;
  undefined8 ******ppppppuStack_100;
  code *pcStack_f8;
  ulong *****pppppuStack_f0;
  ulong ******ppppppuStack_e8;
  char acStack_e0 [31];
  undefined1 uStack_c1;
  ulong *****pppppuStack_c0;
  ulong uStack_b8;
  ulong ******ppppppuStack_b0;
  char *pcStack_a8;
  ulong ******ppppppuStack_a0;
  ulong *****pppppuStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [32];
  ulong ******ppppppuStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  ppppppuVar6 = &pppppuStack_f0;
  pppppppuVar11 = (ulong *******)&pppppuStack_f0;
  pppppppuVar15 = (undefined8 *******)&stack0xfffffffffffffff0;
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  if (param_1[6] == (ulong ******)0x0) {
    func_0x00773ed0();
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x3bd9d4);
    (*pcVar5)();
  }
  if (*param_2 == (ulong ******)0x0) {
    unaff_x22 = &ppppppuStack_58;
    FUN_003ecdfc(&ppppppuStack_58,param_1[8]);
    unaff_x21 = (ulong ******)((ulong)uStack_50 & 0xff);
    if ((ulong *******)ppppppuStack_58 != (ulong *******)0x0) {
      unaff_x21 = uStack_50;
    }
    ppppppuVar10 = param_1[3];
    lVar1 = (long)&uStack_50 + 1;
    if ((ulong *******)ppppppuStack_58 != (ulong *******)0x0) {
      lVar1 = lStack_48;
    }
    param_3 = unaff_x21;
    _CFWriteStreamWrite(ppppppuVar10,lVar1);
    if (ppppppuVar10 == (ulong ******)0xffffffffffffffff) {
      func_0x003ecf8c(param_1[8]);
      unaff_x21 = param_1[3];
      _CFWriteStreamCopyError();
      if (unaff_x21 == (ulong ******)0x0) {
        acStack_e0[8] = '\0';
        acStack_e0[9] = '\0';
        acStack_e0[10] = '\0';
        acStack_e0[0xb] = '\0';
        acStack_e0[0xc] = '\0';
        acStack_e0[0xd] = '\0';
        acStack_e0[0xe] = '\0';
        acStack_e0[0xf] = '\0';
        acStack_e0[0x10] = '\0';
        acStack_e0[0x11] = '\0';
        acStack_e0[0x12] = '\0';
        acStack_e0[0x13] = '\0';
        acStack_e0[0x14] = '\0';
        acStack_e0[0x15] = '\0';
        acStack_e0[0x16] = '\0';
        acStack_e0[0x17] = '\0';
        acStack_e0[0] = '\0';
        acStack_e0[1] = '\0';
        acStack_e0[2] = '\0';
        acStack_e0[3] = '\0';
        acStack_e0[4] = '\0';
        acStack_e0[5] = '\0';
        acStack_e0[6] = '\0';
        acStack_e0[7] = '\0';
        param_3 = (ulong ******)0xd;
        FUN_003b646c(&pppppuStack_c0,2,"write failed.",0xd,&uStack_c1,acStack_e0);
        ppppppuVar10 = *param_2;
        if ((ulong ******)pppppuStack_c0 == ppppppuVar10) {
LAB_003bd920:
          if (((ulong)ppppppuVar10 & 1) != 0) {
            FUN_0055293c();
          }
        }
        else {
          *param_2 = (ulong ******)pppppuStack_c0;
          pppppuStack_c0 = (ulong *****)0x36;
          if (((ulong)ppppppuVar10 & 1) != 0) {
            FUN_0055293c();
            ppppppuVar10 = (ulong ******)pppppuStack_c0;
            goto LAB_003bd920;
          }
        }
        pcStack_a8 = acStack_e0;
        FUN_0033d548(&pcStack_a8);
      }
      else {
        param_3 = unaff_x21;
        FUN_003be760(&uStack_b8,
                     "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/endpoint_cfstream.cc"
                     ,0xd0,unaff_x21,"write failed.");
        FUN_003bdd6c(&pcStack_a8,&uStack_b8,param_1);
        pcVar8 = (char *)*param_2;
        if (pcStack_a8 == pcVar8) {
LAB_003bd894:
          if (((ulong)pcVar8 & 1) != 0) {
            FUN_0055293c();
          }
        }
        else {
          *param_2 = (ulong ******)pcStack_a8;
          pcStack_a8 = segment_command_00000020.segname + 0xe;
          if (((ulong)pcVar8 & 1) != 0) {
            FUN_0055293c();
            pcVar8 = pcStack_a8;
            goto LAB_003bd894;
          }
        }
        if ((uStack_b8 & 1) != 0) {
          FUN_0055293c();
        }
        _CFRelease(unaff_x21);
      }
      param_2 = (ulong *******)*param_2;
      if (((ulong)param_2 & 1) != 0) {
        piVar14 = (int *)((long)param_2 + -1);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar4) {
            *piVar14 = *piVar14 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      pppppppuVar11 = &ppppppuStack_e8;
      ppppppuStack_e8 = (ulong ******)param_2;
      FUN_003bde34(param_1);
      if (((ulong)param_2 & 1) != 0) {
        FUN_0055293c(param_2);
      }
      FUN_003bd01c(param_1);
    }
    else {
      ppppppuVar2 = (ulong ******)((ulong)uStack_50 & 0xff);
      if ((ulong *******)ppppppuStack_58 != (ulong *******)0x0) {
        ppppppuVar2 = uStack_50;
      }
      if ((long)ppppppuVar10 < (long)ppppppuVar2) {
        param_2 = (ulong *******)param_1[8];
        pppppuStack_98 = (ulong *****)uStack_50;
        ppppppuStack_a0 = ppppppuStack_58;
        uStack_88 = uStack_40;
        lStack_90 = lStack_48;
        param_3 = unaff_x21;
        FUN_003ec47c(auStack_78,&ppppppuStack_a0);
        FUN_003ece48(param_2,auStack_78);
      }
      if (param_1[8][4] != (ulong *****)0x0) {
        ppppppuVar10 = param_1[4];
        uStack_148 = 0x3bd820;
        pppppppuVar9 = param_1;
        goto SUB_003bc508;
      }
      pppppuStack_f0 = (ulong *****)0x0;
      FUN_003bde34(param_1);
      FUN_003bd01c(param_1);
    }
    if ((ulong *******)((long)&MACH_HEADER.magic + 1) < ppppppuStack_58) {
      do {
        ppppppuVar10 = (ulong ******)*ppppppuStack_58;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppuStack_58,0x10);
        if (bVar4) {
          *ppppppuStack_58 = (ulong *****)((long)ppppppuVar10 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((ulong ******)((long)ppppppuVar10 + -1) == (ulong ******)0x0) {
        (*(code *)ppppppuStack_58[1])();
      }
    }
    pppppppuVar7 = (ulong *******)ppppppuStack_58;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
      return (ulong *******)ppppppuStack_58;
    }
  }
  else {
    func_0x003ecf8c(param_1[8]);
    param_2 = (ulong *******)*param_2;
    if (((ulong)param_2 & 1) != 0) {
      piVar14 = (int *)((long)param_2 + -1);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar4) {
          *piVar14 = *piVar14 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    pppppppuVar11 = &ppppppuStack_b0;
    pppppppuVar7 = param_1;
    ppppppuStack_b0 = (ulong ******)param_2;
    FUN_003bde34();
    if (((ulong)param_2 & 1) != 0) {
      pppppppuVar7 = param_2;
      FUN_0055293c();
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
      pppppppuVar11 = param_1 + 1;
      FUN_00339d14();
      if ((int)pppppppuVar11 != 0) {
        _CFRelease(param_1[2]);
        _CFRelease(param_1[3]);
        func_0x003bbe28(param_1[4],"",0,0);
        if (*(char *)((long)param_1 + 0xb7) < '\0') {
          __ZdlPv(param_1[0x14]);
        }
        if (*(char *)((long)param_1 + 0x9f) < '\0') {
          __ZdlPv(param_1[0x11]);
        }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_0099c620)(param_1);
        return param_1;
      }
      return pppppppuVar11;
    }
  }
  ___stack_chk_fail();
  FUN_0033c494(&pppppuStack_c0);
  pcStack_a8 = acStack_e0;
  FUN_0033d548(&pcStack_a8);
  param_1 = pppppppuVar7;
  __Unwind_Resume();
  ppppppuVar6 = (ulong ******)auStack_140;
  pcStack_f8 = FUN_003bda70;
  lStack_118 = *(long *)PTR____stack_chk_guard_00999f88;
  ppppppuStack_110 = (ulong ******)param_2;
  ppppppuStack_108 = (ulong ******)pppppppuVar7;
  ppppppuStack_100 = pppppppuVar15;
  if (param_1[5] == (ulong ******)0x0) {
    param_1[5] = param_3;
    param_1[7] = (ulong ******)pppppppuVar11;
    func_0x003ecf8c(pppppppuVar11);
    FUN_003ec0c8(auStack_138,0x2000);
    FUN_003ecd90(pppppppuVar11,auStack_138);
    func_0x00339cd4(param_1 + 1);
    pppppppuVar9 = (ulong *******)param_1[4];
    pppppppuVar13 = param_1 + 9;
    func_0x003bc500();
    param_2 = pppppppuVar11;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_118) {
      return pppppppuVar9;
    }
  }
  else {
    func_0x00773f04();
    pppppppuVar9 = param_1;
    pppppppuVar13 = pppppppuVar11;
    param_1 = pppppppuVar7;
  }
  ___stack_chk_fail();
  uStack_148 = 0x3bdb0c;
  if (pppppppuVar9[6] != (ulong ******)0x0) {
    func_0x00773f38();
    if (pppppppuVar9 != pppppppuVar13) {
      if (*pppppppuVar13 == (ulong ******)0x0) {
        FUN_003bdb94(pppppppuVar9,pppppppuVar13 + 1);
      }
      else {
        FUN_003bdc3c(pppppppuVar9);
      }
    }
    return pppppppuVar9;
  }
  pppppppuVar9[6] = param_3;
  pppppppuVar9[8] = (ulong ******)pppppppuVar13;
  func_0x00339cd4(pppppppuVar9 + 1);
  ppppppuVar10 = pppppppuVar9[4];
  pppppppuVar15 = &ppppppuStack_100;
SUB_003bc508:
  pppppppuVar9 = pppppppuVar9 + 0xd;
  pppppppuVar11 = (ulong *******)(ppppppuVar10 + 3);
  *(ulong ********)((long)ppppppuVar6 + -0x20) = param_2;
  *(ulong ********)((long)ppppppuVar6 + -0x18) = param_1;
  *(undefined8 ********)((long)ppppppuVar6 + -0x10) = pppppppuVar15;
  *(undefined8 *)((long)ppppppuVar6 + -8) = uStack_148;
  do {
    ppppppuVar10 = *pppppppuVar11;
    if (ppppppuVar10 == (ulong ******)0x0) {
      while (*pppppppuVar11 == (ulong ******)0x0) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppppppuVar11,0x10);
        if (bVar4) {
          *pppppppuVar11 = (ulong ******)pppppppuVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          return pppppppuVar11;
        }
      }
    }
    else {
      if (ppppppuVar10 != (ulong ******)0x2) {
        if (((ulong)ppppppuVar10 & 1) != 0) {
          FUN_003b7b3c((undefined1 *)((long)ppppppuVar6 + -0x30),
                       (ulong)ppppppuVar10 & 0xfffffffffffffffe);
          FUN_003bdf2c((undefined1 *)((long)ppppppuVar6 + -0x40),2,"FD Shutdown",0xb,
                       (undefined1 *)((long)ppppppuVar6 + -0x41),1,
                       (undefined1 *)((long)ppppppuVar6 + -0x30));
          FUN_003c1e6c((undefined1 *)((long)ppppppuVar6 + -0x31),pppppppuVar9,
                       (undefined1 *)((long)ppppppuVar6 + -0x40));
          if ((*(ulong *)((long)ppppppuVar6 + -0x40) & 1) != 0) {
            FUN_0055293c();
          }
          pppppppuVar11 = *(ulong ********)((long)ppppppuVar6 + -0x30);
          if (((ulong)pppppppuVar11 & 1) != 0) {
            FUN_0055293c();
          }
          return pppppppuVar11;
        }
        func_0x00774260();
        func_0x0040cf10();
        func_0x0040cf10();
        FUN_0033c494((undefined1 *)((long)ppppppuVar6 + -0x40));
        FUN_0033c494((undefined1 *)((long)ppppppuVar6 + -0x30));
        pppppppuVar7 = pppppppuVar11;
        __Unwind_Resume();
        *(ulong ********)((long)ppppppuVar6 + -0x80) = unaff_x22;
        *(ulong *******)((long)ppppppuVar6 + -0x78) = unaff_x21;
        *(ulong ********)((long)ppppppuVar6 + -0x70) = param_2;
        *(ulong ********)((long)ppppppuVar6 + -0x68) = pppppppuVar11;
        *(undefined1 **)((long)ppppppuVar6 + -0x60) = (undefined1 *)((long)ppppppuVar6 + -0x10);
        *(code **)((long)ppppppuVar6 + -0x58) = FUN_003c3b50;
        ppppppuVar10 = *pppppppuVar9;
        *(ulong *******)((long)ppppppuVar6 + -0x88) = ppppppuVar10;
        if (((ulong)ppppppuVar10 & 1) != 0) {
          piVar14 = (int *)((long)ppppppuVar10 + -1);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
            if (bVar4) {
              *piVar14 = *piVar14 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        puVar12 = (undefined1 *)((long)ppppppuVar6 + -0x88);
        FUN_003b7ab0();
        if ((*(ulong *)((long)ppppppuVar6 + -0x88) & 1) != 0) {
          FUN_0055293c();
        }
        do {
          ppppppuVar10 = *pppppppuVar7;
          if (((ulong)ppppppuVar10 | 2) == 2) {
            while (*pppppppuVar7 == ppppppuVar10) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pppppppuVar7,0x10);
              if (bVar4) {
                *pppppppuVar7 = (ulong ******)((ulong)puVar12 | 1);
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
LAB_003c3c34:
                return (ulong *******)((long)&MACH_HEADER.magic + 1);
              }
            }
          }
          else {
            if (((ulong)ppppppuVar10 & 1) != 0) {
              FUN_003b7afc(puVar12);
              return (ulong *******)0x0;
            }
            while (*pppppppuVar7 == ppppppuVar10) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pppppppuVar7,0x10);
              if (bVar4) {
                *pppppppuVar7 = (ulong ******)((ulong)puVar12 | 1);
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                FUN_003bdf2c((undefined1 *)((long)ppppppuVar6 + -0x98),2,"FD Shutdown",0xb,
                             (undefined1 *)((long)ppppppuVar6 + -0x99),1,pppppppuVar9);
                FUN_003c1e6c((undefined1 *)((long)ppppppuVar6 + -0x89),ppppppuVar10,
                             (undefined1 *)((long)ppppppuVar6 + -0x98));
                if ((*(ulong *)((long)ppppppuVar6 + -0x98) & 1) != 0) {
                  FUN_0055293c();
                }
                goto LAB_003c3c34;
              }
            }
          }
          ClearExclusiveLocal();
        } while( true );
      }
      while (*pppppppuVar11 == (ulong ******)0x2) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppppppuVar11,0x10);
        if (bVar4) {
          *pppppppuVar11 = (ulong ******)0x0;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          *(undefined8 *)((long)ppppppuVar6 + -0x28) = 0;
          FUN_003c1e6c((undefined1 *)((long)ppppppuVar6 + -0x30),pppppppuVar9,
                       (undefined1 *)((long)ppppppuVar6 + -0x28));
          pppppppuVar11 = *(ulong ********)((long)ppppppuVar6 + -0x28);
          if (((ulong)pppppppuVar11 & 1) == 0) {
            return pppppppuVar11;
          }
          FUN_0055293c();
          return pppppppuVar11;
        }
      }
    }
    ClearExclusiveLocal();
  } while( true );
}



/* Entry: 003bda70; end: 003bdb93;  */

ulong * FUN_003bda70(ulong *param_1,ulong *param_2,ulong param_3)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  int *piVar7;
  ulong *unaff_x19;
  ulong *unaff_x20;
  undefined1 uStack_e9;
  ulong uStack_e8;
  undefined1 uStack_d9;
  ulong uStack_d8;
  undefined1 uStack_91;
  ulong *puStack_90;
  undefined8 uStack_88;
  undefined1 **ppuStack_80;
  undefined1 **ppuStack_78;
  ulong *puStack_70;
  ulong *puStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  if (param_1[5] == 0) {
    param_1[5] = param_3;
    param_1[7] = (ulong)param_2;
    func_0x003ecf8c(param_2);
    FUN_003ec0c8(auStack_48,0x2000);
    FUN_003ecd90(param_2,auStack_48);
    func_0x00339cd4(param_1 + 1);
    puVar3 = (ulong *)param_1[4];
    puVar4 = param_1 + 9;
    func_0x003bc500();
    unaff_x19 = param_1;
    unaff_x20 = param_2;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
      return puVar3;
    }
  }
  else {
    func_0x00773f04();
    puVar3 = param_1;
    puVar4 = param_2;
  }
  ___stack_chk_fail();
  uStack_58 = 0x3bdb0c;
  puStack_70 = unaff_x20;
  puStack_68 = unaff_x19;
  puStack_60 = &stack0xfffffffffffffff0;
  if (puVar3[6] != 0) {
    func_0x00773f38();
    ppuStack_78 = (undefined1 **)0x3bdb4c;
    if (puVar3 != puVar4) {
      puStack_90 = unaff_x20;
      uStack_88 = unaff_x19;
      ppuStack_80 = &puStack_60;
      if (*puVar4 == 0) {
        FUN_003bdb94(puVar3,puVar4 + 1);
      }
      else {
        FUN_003bdc3c(puVar3);
      }
    }
    return puVar3;
  }
  puVar3[6] = param_3;
  puVar3[8] = (ulong)puVar4;
  func_0x00339cd4(puVar3 + 1);
  puVar5 = puVar3 + 0xd;
  puVar4 = (ulong *)(puVar3[4] + 0x18);
  do {
    uVar6 = *puVar4;
    if (uVar6 == 0) {
      while (*puVar4 == 0) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar2) {
          *puVar4 = (ulong)puVar5;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          return puVar4;
        }
      }
    }
    else {
      if (uVar6 != 2) {
        if ((uVar6 & 1) != 0) {
          FUN_003b7b3c(&ppuStack_80,uVar6 & 0xfffffffffffffffe);
          FUN_003bdf2c(&puStack_90,2,"FD Shutdown",0xb,&uStack_91,1,&ppuStack_80);
          FUN_003c1e6c((long)&uStack_88 + 7,puVar5,&puStack_90);
          if (((ulong)puStack_90 & 1) != 0) {
            FUN_0055293c();
          }
          if (((ulong)ppuStack_80 & 1) != 0) {
            FUN_0055293c();
          }
          return (ulong *)ppuStack_80;
        }
        func_0x00774260();
        func_0x0040cf10();
        func_0x0040cf10();
        FUN_0033c494(&puStack_90);
        FUN_0033c494(&ppuStack_80);
        __Unwind_Resume();
        uStack_d8 = *puVar5;
        if ((uStack_d8 & 1) != 0) {
          piVar7 = (int *)(uStack_d8 - 1);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
            if (bVar2) {
              *piVar7 = *piVar7 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        puVar3 = &uStack_d8;
        FUN_003b7ab0();
        if ((uStack_d8 & 1) != 0) {
          FUN_0055293c();
        }
        do {
          uVar6 = *puVar4;
          if ((uVar6 | 2) == 2) {
            while (*puVar4 == uVar6) {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(puVar4,0x10);
              if (bVar2) {
                *puVar4 = (ulong)puVar3 | 1;
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
              FUN_003b7afc(puVar3);
              return (ulong *)0x0;
            }
            while (*puVar4 == uVar6) {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(puVar4,0x10);
              if (bVar2) {
                *puVar4 = (ulong)puVar3 | 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') {
                FUN_003bdf2c(&uStack_e8,2,"FD Shutdown",0xb,&uStack_e9,1,puVar5);
                FUN_003c1e6c(&uStack_d9,uVar6,&uStack_e8);
                if ((uStack_e8 & 1) != 0) {
                  FUN_0055293c();
                }
                goto LAB_003c3c34;
              }
            }
          }
          ClearExclusiveLocal();
        } while( true );
      }
      while (*puVar4 == 2) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar2) {
          *puVar4 = 0;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          ppuStack_78 = (undefined1 **)0x0;
          FUN_003c1e6c(&ppuStack_80,puVar5,&ppuStack_78);
          if (((ulong)ppuStack_78 & 1) == 0) {
            return (ulong *)ppuStack_78;
          }
          FUN_0055293c();
          return (ulong *)ppuStack_78;
        }
      }
    }
    ClearExclusiveLocal();
  } while( true );
}



/* Entry: 003bdb94; end: 003bdc3b;  */

void FUN_003bdb94(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  
  puVar2 = param_1 + 1;
  if (*param_1 == 0) {
    if (*(char *)((long)param_1 + 0x1f) < '\0') {
      __ZdlPv(*puVar2);
    }
    uVar3 = param_2[1];
    uVar1 = *param_2;
    param_1[3] = param_2[2];
    param_1[2] = uVar3;
    *puVar2 = uVar1;
    *(undefined1 *)((long)param_2 + 0x17) = 0;
    *(undefined1 *)param_2 = 0;
  }
  else {
    uVar3 = param_2[1];
    uVar1 = *param_2;
    param_1[3] = param_2[2];
    param_1[2] = uVar3;
    *puVar2 = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar1 = *param_1;
    if (uVar1 != 0) {
      *param_1 = 0;
      if ((uVar1 & 1) != 0) {
        FUN_0055293c(uVar1);
      }
    }
  }
  return;
}



/* Entry: 003bdc3c; end: 003bdceb;  */

void FUN_003bdc3c(ulong *param_1,ulong *param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  char *pcVar7;
  int *piVar8;
  long *plVar9;
  undefined4 uStack_38;
  undefined4 uStack_34;
  char *pcStack_30;
  char *pcStack_28;
  
  if ((*param_1 == 0) && (*(char *)((long)param_1 + 0x1f) < '\0')) {
    __ZdlPv(param_1[1]);
  }
  uVar4 = *param_2;
  *param_2 = 0x36;
  uVar5 = *param_1;
  if (uVar4 == uVar5) {
    if ((uVar4 & 1) != 0) {
      FUN_0055293c();
    }
LAB_003bdca8:
    uVar4 = *param_1;
  }
  else {
    *param_1 = uVar4;
    pcStack_28 = "";
    if ((uVar5 & 1) != 0) {
      FUN_0055293c(uVar5);
      goto LAB_003bdca8;
    }
  }
  if (uVar4 != 0) {
    return;
  }
  pcStack_30 = "external/abseil-cpp+/absl/status/statusor.cc";
  pcStack_28 = "An OK status is not a valid constructor argument to StatusOr<T>";
  uStack_38 = 0x4a;
  uStack_34 = 2;
  FUN_0055159c(&PTR_FUN_00b1e660,&uStack_34,&pcStack_30,&uStack_38,&pcStack_28);
  pcVar7 = pcStack_28;
  pcVar6 = pcStack_28;
  _strlen(pcStack_28);
  FUN_005529d0(&pcStack_30,0xd,pcVar7,pcVar6);
  pcVar6 = (char *)*param_1;
  pcVar7 = pcVar6;
  if (pcStack_30 != pcVar6) {
    *param_1 = (ulong)pcStack_30;
    pcStack_30 = "";
    if (((ulong)pcVar6 & 1) == 0) {
      return;
    }
    piVar8 = (int *)(pcVar6 + -1);
    if (*piVar8 != 1) {
      do {
        iVar1 = *piVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      pcVar7 = pcStack_30;
      if (iVar1 + -1 != 0) goto LAB_00551520;
    }
    plVar9 = *(long **)(pcVar6 + 0x1f);
    pcVar6[0x1f] = '\0';
    pcVar6[0x20] = '\0';
    pcVar6[0x21] = '\0';
    pcVar6[0x22] = '\0';
    pcVar6[0x23] = '\0';
    pcVar6[0x24] = '\0';
    pcVar6[0x25] = '\0';
    pcVar6[0x26] = '\0';
    if (plVar9 != (long *)0x0) {
      if (*plVar9 != 0) {
        FUN_00553a40(plVar9);
      }
      __ZdlPv(plVar9);
    }
    if (pcVar6[0x1e] < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar6 + 7));
    }
    __ZdlPv(piVar8);
    pcVar7 = pcStack_30;
  }
LAB_00551520:
  if (((ulong)pcVar7 & 1) != 0) {
    piVar8 = (int *)(pcVar7 + -1);
    if (*piVar8 != 1) {
      do {
        iVar1 = *piVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 + -1 != 0) {
        return;
      }
    }
    plVar9 = *(long **)(pcVar7 + 0x1f);
    pcVar7[0x1f] = '\0';
    pcVar7[0x20] = '\0';
    pcVar7[0x21] = '\0';
    pcVar7[0x22] = '\0';
    pcVar7[0x23] = '\0';
    pcVar7[0x24] = '\0';
    pcVar7[0x25] = '\0';
    pcVar7[0x26] = '\0';
    if (plVar9 != (long *)0x0) {
      if (*plVar9 != 0) {
        FUN_00553a40(plVar9);
      }
      __ZdlPv(plVar9);
    }
    if (pcVar7[0x1e] < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar7 + 7));
    }
    __ZdlPv(piVar8);
  }
  return;
}



/* Entry: 003bdcec; end: 003bdd6b;  */

void FUN_003bdcec(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_30;
  undefined1 uStack_21;
  
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
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
  FUN_003c1e6c(&uStack_21,uVar3,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003bdd6c; end: 003bde33;  */

void FUN_003bdd6c(undefined8 param_1,ulong *param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  ulong uStack_30;
  ulong uStack_28;
  
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
  FUN_003be104(&uStack_28,&uStack_30,3,0xe);
  if ((char)*(byte *)(param_3 + 0x9f) < '\0') {
    lVar3 = *(long *)(param_3 + 0x88);
    uVar4 = *(ulong *)(param_3 + 0x90);
  }
  else {
    lVar3 = param_3 + 0x88;
    uVar4 = (ulong)*(byte *)(param_3 + 0x9f);
  }
  FUN_003be254(param_1,&uStack_28,4,lVar3,uVar4);
  if ((uStack_28 & 1) != 0) {
    FUN_0055293c();
  }
  if ((uStack_30 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003bde34; end: 003bdeb3;  */

void FUN_003bde34(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_30;
  undefined1 uStack_21;
  
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
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
  FUN_003c1e6c(&uStack_21,uVar3,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003bdeb4; end: 003bdf23;  */

undefined8 FUN_003bdeb4(undefined8 param_1)

{
  ulong uStack_28;
  
  FUN_00552acc(&uStack_28,2,"",0);
  FUN_003a1488(param_1,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    FUN_0055293c();
  }
  return param_1;
}



/* Entry: 003bdf24; end: 003bdf2b;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_003bdf24(undefined8 param_1,ulong param_2,undefined8 param_3,byte *param_4)

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



/* Entry: 003bdf2c; end: 003be003;  */

void FUN_003bdf2c(undefined8 param_1)

{
  char cVar1;
  bool bVar2;
  long in_x4;
  long in_x5;
  int *piVar3;
  long lVar4;
  ulong auStack_58 [4];
  ulong *puStack_38;
  
  auStack_58[1] = 0;
  auStack_58[2] = 0;
  auStack_58[3] = 0;
  FUN_003b646c();
  puStack_38 = auStack_58 + 1;
  FUN_0033d548(&puStack_38);
  if (in_x4 != 0) {
    lVar4 = 0;
    do {
      auStack_58[0] = *(ulong *)(in_x5 + lVar4 * 8);
      if (auStack_58[0] != 0) {
        if ((auStack_58[0] & 1) != 0) {
          piVar3 = (int *)(auStack_58[0] - 1);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar2) {
              *piVar3 = *piVar3 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        FUN_003b6784(param_1,auStack_58);
        if ((auStack_58[0] & 1) != 0) {
          FUN_0055293c();
        }
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != in_x4);
  }
  return;
}



/* Entry: 003be004; end: 003be007;  */

/* WARNING: Removing unreachable block (ram,0x003b7200) */
/* WARNING: Removing unreachable block (ram,0x003b74a0) */

ulong *** FUN_003be004(ulong ***param_1,ulong *param_2)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  undefined8 **ppuVar6;
  code *pcVar7;
  char *pcVar8;
  ulong ***pppuVar9;
  ulong ***pppuVar10;
  long lVar11;
  ulong uVar12;
  ulong **ppuVar13;
  long lVar14;
  ulong uVar15;
  undefined8 ***pppuVar16;
  char **ppcStack_1e8;
  ulong *puStack_1e0;
  byte bStack_1d1;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 *puStack_1c0;
  ulong uStack_1b8;
  ulong *puStack_1b0;
  ulong *puStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 **ppuStack_188;
  undefined8 **ppuStack_180;
  byte bStack_171;
  byte bStack_170;
  undefined7 uStack_16f;
  long lStack_168;
  char cStack_160;
  ulong *puStack_158;
  ulong *puStack_150;
  ulong *puStack_148;
  ulong **ppuStack_140;
  ulong **ppuStack_138;
  ulong *puStack_130;
  undefined8 **ppuStack_128;
  undefined8 **ppuStack_120;
  undefined8 **ppuStack_118;
  undefined8 **ppuStack_110;
  undefined8 **ppuStack_108;
  undefined8 **ppuStack_f8;
  undefined8 **ppuStack_f0;
  char **ppcStack_c8;
  ulong *puStack_c0;
  ulong *puStack_b8;
  ulong **ppuStack_98;
  ulong **ppuStack_90;
  ulong **ppuStack_88;
  ulong **ppuStack_80;
  ulong **ppuStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  if (*param_2 == 0) {
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
      pcVar8 = "OK";
      _strlen();
      if ((ulong **)0x7ffffffffffffff7 < pcVar8) {
        func_0x0033b318();
        if (*param_1 != (ulong **)0x0) {
          func_0x003711f8();
        }
        return param_1;
      }
      if (pcVar8 < (ulong **)0x17) {
        *(char *)((long)param_1 + 0x17) = (char)pcVar8;
        pppuVar9 = param_1;
        if ((ulong **)pcVar8 == (ulong **)0x0) goto LAB_003532e0;
      }
      else {
        uVar12 = ((ulong)pcVar8 & 0xfffffffffffffff8) + 8;
        if (((ulong)pcVar8 | 7) != 0x17) {
          uVar12 = (ulong)pcVar8 | 7;
        }
        pppuVar9 = (ulong ***)(uVar12 + 1);
        __Znwm();
        param_1[1] = (ulong **)pcVar8;
        param_1[2] = (ulong **)(uVar12 + 1 | 0x8000000000000000);
        *param_1 = (ulong **)pppuVar9;
      }
      _memmove(pppuVar9,"OK",pcVar8);
LAB_003532e0:
      *(char *)((long)pppuVar9 + (long)pcVar8) = '\0';
      return param_1;
    }
  }
  else {
    ppuStack_140 = (ulong **)0x0;
    ppuStack_138 = (ulong **)0x0;
    puStack_130 = (ulong *)0x0;
    FUN_00552acc();
    FUN_00551ce4(&ppcStack_c8);
    ppuStack_90 = (ulong **)puStack_c0;
    ppuStack_98 = (ulong **)ppcStack_c8;
    if (-1 < (long)puStack_b8) {
      ppuStack_90 = (ulong **)((ulong)puStack_b8 >> 0x38);
      ppuStack_98 = (ulong **)&ppcStack_c8;
    }
    FUN_005760f0(&ppuStack_140,&ppuStack_98);
    uVar12 = *param_2;
    if ((uVar12 & 1) == 0) {
      if ((uVar12 & 3) == 2) {
        ppcStack_c8 = (char **)&UNK_00810ff6;
        ppuVar13 = (ulong **)0x1b;
        goto LAB_003b72c8;
      }
    }
    else {
      bVar2 = *(byte *)(uVar12 + 0x1e);
      if ((char)bVar2 < '\0') {
        if (*(long *)(uVar12 + 0xf) != 0) {
          ppcStack_c8 = *(char ***)(uVar12 + 7);
          ppuVar13 = *(ulong ***)(uVar12 + 0xf);
          goto LAB_003b72c8;
        }
      }
      else {
        ppuVar13 = (ulong **)(ulong)bVar2;
        if (bVar2 != 0) {
          ppcStack_c8 = (char **)(uVar12 + 7);
LAB_003b72c8:
          ppuStack_90 = (ulong **)0x1;
          ppuStack_98 = (ulong **)0x8b8f2c;
          puStack_c0 = (ulong *)ppuVar13;
          FUN_005761b0(&ppuStack_140,&ppuStack_98,&ppcStack_c8);
        }
      }
    }
    puStack_158 = (ulong *)0x0;
    puStack_150 = (ulong *)0x0;
    puStack_148 = (ulong *)0x0;
    bStack_170 = 0;
    cStack_160 = '\0';
    ppuStack_98 = (ulong **)&bStack_170;
    ppuStack_90 = &puStack_158;
    FUN_005527f0(param_2,&ppuStack_98,FUN_003b7ba0);
    if (cStack_160 != '\0') {
      if (((bStack_170 & 1) == 0) || (lStack_168 == 0)) {
        uStack_1a0 = CONCAT71(uStack_16f,bStack_170);
        lStack_198 = lStack_168;
      }
      else {
        piVar1 = (int *)(lStack_168 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        uStack_1a0 = 1;
        lStack_198 = lStack_168;
        if (1 < CONCAT71(uStack_16f,bStack_170)) {
          FUN_0055ae58(&uStack_1a0,&bStack_170,8);
        }
      }
      FUN_003b6edc(&ppuStack_188,&uStack_1a0);
      FUN_00543968(&uStack_1a0);
      uStack_1b8 = 0;
      puStack_1b0 = (ulong *)0x0;
      puStack_1a8 = (ulong *)0x0;
      FUN_00426a0c(&uStack_1b8,(long)ppuStack_180 - (long)ppuStack_188 >> 3);
      ppuVar6 = ppuStack_180;
      if (ppuStack_188 != ppuStack_180) {
        pppuVar16 = (undefined8 ***)ppuStack_188;
        do {
          FUN_003b7178(&ppcStack_c8,pppuVar16);
          if (puStack_1b0 < puStack_1a8) {
            puStack_1b0[2] = (ulong)puStack_b8;
            puStack_1b0[1] = (ulong)puStack_c0;
            *puStack_1b0 = (ulong)ppcStack_c8;
            puStack_1b0 = puStack_1b0 + 3;
          }
          else {
            lVar14 = (long)((long)puStack_1b0 - uStack_1b8) >> 3;
            uVar12 = lVar14 * -0x5555555555555555 + 1;
            if (0xaaaaaaaaaaaaaaa < uVar12) {
              FUN_0037b568(&uStack_1b8);
              goto LAB_003b7790;
            }
            lVar11 = (long)((long)puStack_1a8 - uStack_1b8) >> 3;
            uVar15 = lVar11 * 0x5555555555555556;
            if (uVar15 < uVar12 || uVar15 - uVar12 == 0) {
              uVar15 = uVar12;
            }
            if (0x555555555555554 < (ulong)(lVar11 * -0x5555555555555555)) {
              uVar15 = 0xaaaaaaaaaaaaaaa;
            }
            ppuStack_78 = &puStack_1a8;
            if (uVar15 == 0) {
              pppuVar9 = (ulong ***)0x0;
            }
            else {
              pppuVar9 = (ulong ***)&puStack_1a8;
              FUN_0037b57c();
            }
            pppuVar10 = pppuVar9 + lVar14;
            ppuStack_80 = (ulong **)(pppuVar9 + uVar15 * 3);
            ppuStack_98 = (ulong **)pppuVar9;
            ppuStack_90 = (ulong **)pppuVar10;
            pppuVar10[2] = (ulong **)puStack_b8;
            pppuVar10[1] = (ulong **)puStack_c0;
            *pppuVar10 = (ulong **)ppcStack_c8;
            puStack_c0 = (ulong *)0x0;
            puStack_b8 = (ulong *)0x0;
            ppcStack_c8 = (char **)0x0;
            ppuStack_88 = (ulong **)(pppuVar10 + 3);
            FUN_0045a5fc(&uStack_1b8,&ppuStack_98);
            puVar5 = puStack_1b0;
            func_0x00427834(&ppuStack_98);
            puStack_1b0 = puVar5;
          }
          pppuVar16 = pppuVar16 + 1;
        } while (pppuVar16 != (undefined8 ***)ppuVar6);
      }
      ppuStack_98 = (ulong **)0x8c7e42;
      ppuStack_90 = (ulong **)((long)&MACH_HEADER.cpusubtype + 2);
      FUN_0037b5c0(&ppcStack_1e8,uStack_1b8,puStack_1b0,", ",2);
      puStack_c0 = puStack_1e0;
      ppcStack_c8 = ppcStack_1e8;
      if (-1 < (char)bStack_1d1) {
        puStack_c0 = (ulong *)(ulong)bStack_1d1;
        ppcStack_c8 = (char **)&ppcStack_1e8;
      }
      ppuStack_f8 = (undefined8 **)0x8dd325;
      ppuStack_f0 = (undefined8 **)((long)&MACH_HEADER.magic + 1);
      FUN_00575ddc(&puStack_1d0,&ppuStack_98,&ppcStack_c8,&ppuStack_f8);
      if (puStack_150 < puStack_148) {
        puStack_150[2] = (ulong)puStack_1c0;
        puStack_150[1] = (ulong)puStack_1c8;
        *puStack_150 = (ulong)puStack_1d0;
        puStack_1c8 = (ulong *)0x0;
        puStack_1c0 = (ulong *)0x0;
        puStack_1d0 = (ulong *)0x0;
        puStack_150 = puStack_150 + 3;
      }
      else {
        lVar14 = (long)puStack_150 - (long)puStack_158 >> 3;
        uVar12 = lVar14 * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar12) goto LAB_003b7788;
        ppuVar13 = &puStack_148;
        lVar11 = (long)puStack_148 - (long)puStack_158 >> 3;
        uVar15 = lVar11 * 0x5555555555555556;
        if (uVar15 < uVar12 || uVar15 - uVar12 == 0) {
          uVar15 = uVar12;
        }
        if (0x555555555555554 < (ulong)(lVar11 * -0x5555555555555555)) {
          uVar15 = 0xaaaaaaaaaaaaaaa;
        }
        ppuStack_108 = ppuVar13;
        if (uVar15 == 0) {
          ppuStack_128 = (ulong **)0x0;
        }
        else {
          FUN_0037b57c();
          ppuStack_128 = ppuVar13;
        }
        ppuVar13 = ppuStack_128 + lVar14;
        ppuStack_110 = ppuStack_128 + uVar15 * 3;
        ppuStack_120 = ppuVar13;
        ppuVar13[2] = puStack_1c0;
        ppuVar13[1] = puStack_1c8;
        *ppuVar13 = puStack_1d0;
        puStack_1c8 = (ulong *)0x0;
        puStack_1c0 = (ulong *)0x0;
        puStack_1d0 = (ulong *)0x0;
        ppuStack_118 = ppuVar13 + 3;
        FUN_0045a5fc(&puStack_158,&ppuStack_128);
        puVar5 = puStack_150;
        func_0x00427834(&ppuStack_128);
        puStack_150 = puVar5;
        if ((long)puStack_1c0 < 0) {
          __ZdlPv(puStack_1d0);
        }
      }
      if ((char)bStack_1d1 < '\0') {
        __ZdlPv(ppcStack_1e8);
      }
      ppuStack_98 = (ulong **)&uStack_1b8;
      FUN_0037b728(&ppuStack_98);
      ppuStack_98 = (ulong **)&ppuStack_188;
      FUN_0033d548(&ppuStack_98);
    }
    if (puStack_158 == puStack_150) {
      if ((long)puStack_130 < 0) {
        FUN_002971d4(param_1,ppuStack_140,ppuStack_138);
      }
      else {
        param_1[1] = ppuStack_138;
        *param_1 = ppuStack_140;
        param_1[2] = (ulong **)puStack_130;
      }
    }
    else {
      ppuStack_90 = ppuStack_138;
      ppuStack_98 = ppuStack_140;
      if (-1 < (long)puStack_130) {
        ppuStack_90 = (ulong **)((ulong)puStack_130 >> 0x38);
        ppuStack_98 = (ulong **)&ppuStack_140;
      }
      ppcStack_c8 = (char **)0x8c7e4d;
      puStack_c0 = (ulong *)0x2;
      FUN_0037b5c0(&ppuStack_188,puStack_158,puStack_150,", ",2);
      ppuStack_f0 = ppuStack_180;
      ppuStack_f8 = ppuStack_188;
      if (-1 < (char)bStack_171) {
        ppuStack_f0 = (undefined8 ***)(ulong)bStack_171;
        ppuStack_f8 = &ppuStack_188;
      }
      ppuStack_128 = (undefined8 **)0x8e50dc;
      ppuStack_120 = (undefined8 **)((long)&MACH_HEADER.magic + 1);
      FUN_00575ebc(param_1,&ppuStack_98,&ppcStack_c8,&ppuStack_f8,&ppuStack_128);
      if ((char)bStack_171 < '\0') {
        __ZdlPv(ppuStack_188);
      }
    }
    if (cStack_160 != '\0') {
      FUN_00543968(&bStack_170);
    }
    ppuStack_98 = &puStack_158;
    pppuVar9 = &ppuStack_98;
    FUN_0037b728(pppuVar9);
    if ((long)puStack_130 < 0) {
      pppuVar9 = (ulong ***)ppuStack_140;
      __ZdlPv(ppuStack_140);
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
      return pppuVar9;
    }
  }
  ___stack_chk_fail();
LAB_003b7788:
  FUN_0037b568(&puStack_158);
LAB_003b7790:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x3b7794);
  (*pcVar7)();
}



/* Entry: 003be008; end: 003be103;  */

void FUN_003be008(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 *puStack_48;
  
  uVar1 = param_3;
  _strerror(param_3);
  uVar2 = uVar1;
  _strlen();
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  FUN_003b646c(param_1,2,uVar1,uVar2,param_2,&uStack_60);
  puStack_48 = (undefined1 *)&uStack_60;
  FUN_0033d548(&puStack_48);
  FUN_003b65d4(param_1,0,(long)(int)param_3);
  _strerror(param_3);
  uVar1 = param_3;
  _strlen();
  FUN_003b6540(param_1,2,param_3,uVar1);
  uVar1 = param_4;
  _strlen(param_4);
  FUN_003b6540(param_1,3,param_4,uVar1);
  return;
}



/* Entry: 003be104; end: 003be1cf;  */

void FUN_003be104(ulong *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uStack_38;
  
  if (*param_2 != 0) goto LAB_003be184;
  func_0x00553638(&uStack_38,"",0);
  uVar1 = *param_2;
  if (uStack_38 == uVar1) {
LAB_003be16c:
    if ((uVar1 & 1) != 0) {
      FUN_0055293c();
    }
  }
  else {
    *param_2 = uStack_38;
    uStack_38 = 0x36;
    if ((uVar1 & 1) != 0) {
      FUN_0055293c();
      uVar1 = uStack_38;
      goto LAB_003be16c;
    }
  }
  FUN_003b65d4(param_2,3,0);
LAB_003be184:
  FUN_003b65d4(param_2,param_3,param_4);
  *param_1 = *param_2;
  *param_2 = 0x36;
  return;
}



/* Entry: 003be1d0; end: 003be253;  */

undefined8 FUN_003be1d0(ulong param_1,ulong param_2,ulong *param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_1;
  uVar3 = param_2;
  FUN_003b6954();
  if ((uVar3 & 0xff) == 0) {
    if ((int)param_2 != 3) {
      return 0;
    }
    FUN_00552acc();
    iVar1 = (int)param_1;
    if (iVar1 == 0) {
      uVar2 = param_1 & 0xffffffff;
    }
    else if (iVar1 == 1) {
      uVar2 = 1;
    }
    else {
      if (iVar1 != 8) {
        return 0;
      }
      uVar2 = 8;
    }
  }
  *param_3 = uVar2;
  return 1;
}



/* Entry: 003be254; end: 003be373;  */

void FUN_003be254(ulong *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong *puVar1;
  ulong *puStack_48;
  
  if (*param_2 != 0) goto LAB_003be2dc;
  func_0x00553638(&puStack_48,"",0);
  puVar1 = (ulong *)*param_2;
  if (puStack_48 == puVar1) {
LAB_003be2c4:
    if (((ulong)puVar1 & 1) != 0) {
      FUN_0055293c();
    }
  }
  else {
    *param_2 = (ulong)puStack_48;
    puStack_48 = (ulong *)0x36;
    if (((ulong)puVar1 & 1) != 0) {
      FUN_0055293c();
      puVar1 = puStack_48;
      goto LAB_003be2c4;
    }
  }
  FUN_003b65d4(param_2,3,0);
LAB_003be2dc:
  if ((int)param_3 == 0) {
    puVar1 = param_2;
    FUN_00552acc(param_2);
    FUN_00552acc(param_1,puVar1,param_4,param_5);
    puStack_48 = param_1;
    FUN_005527f0(param_2,&puStack_48,FUN_003be6a8);
  }
  else {
    FUN_003b6540(param_2,param_3,param_4,param_5);
    *param_1 = *param_2;
    *param_2 = 0x36;
  }
  return;
}



/* Entry: 003be374; end: 003be56b;  */

long * FUN_003be374(ulong *param_1,long *param_2,ulong *param_3)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined1 **ppuVar5;
  undefined1 **ppuVar6;
  char *pcVar7;
  ulong uVar8;
  undefined8 *extraout_x8;
  long *plVar9;
  int *piVar10;
  long *plVar11;
  undefined *puVar12;
  long *plStack_88;
  undefined *puStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 *puStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  char cStack_48;
  
  ppuVar6 = &puStack_60;
  ppuVar5 = &puStack_60;
  if ((int)param_2 != 0) {
    FUN_003b6b14(&puStack_60,param_1);
    if (cStack_48 == '\0') {
      if ((int)param_2 != 5) {
        return (long *)0x0;
      }
      FUN_00552acc();
      iVar4 = (int)param_1;
      if (iVar4 == 0) {
        pcVar7 = "";
      }
      else if (iVar4 == 1) {
        pcVar7 = "CANCELLED";
      }
      else {
        if (iVar4 != 8) {
          plVar11 = (long *)0x0;
          goto LAB_003be3dc;
        }
        pcVar7 = "RESOURCE_EXHAUSTED";
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(param_3,pcVar7);
    }
    else {
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        __ZdlPv(*param_3);
      }
      param_3[1] = uStack_58;
      *param_3 = (ulong)puStack_60;
      param_3[2] = uStack_50;
      uStack_50 = uStack_50 & 0xffffffffffffff;
      puStack_60 = (undefined1 *)((ulong)puStack_60 & 0xffffffffffffff00);
    }
    plVar11 = (long *)((long)&MACH_HEADER.magic + 1);
LAB_003be3dc:
    if ((cStack_48 != '\0') && ((long)uStack_50 < 0)) {
      __ZdlPv(puStack_60);
    }
    return plVar11;
  }
  uVar8 = *param_1;
  if ((uVar8 & 1) == 0) {
    if ((uVar8 & 3) != 2) {
      return (long *)0x0;
    }
    puVar12 = &UNK_00810ff6;
    uVar8 = 0x1b;
  }
  else {
    if ((char)*(byte *)(uVar8 + 0x1e) < '\0') {
      puVar12 = *(undefined **)(uVar8 + 7);
      uVar8 = *(ulong *)(uVar8 + 0xf);
    }
    else {
      puVar12 = (undefined *)(uVar8 + 7);
      uVar8 = (ulong)*(byte *)(uVar8 + 0x1e);
    }
    if (uVar8 == 0) {
      return (long *)0x0;
    }
    if (0x7ffffffffffffff7 < uVar8) {
      func_0x0033b318();
      if ((cStack_48 != '\0') && ((long)uStack_50 < 0)) {
        __ZdlPv(puStack_60);
      }
      plVar11 = (long *)ppuVar6;
      __Unwind_Resume();
      pcStack_68 = FUN_003be56c;
      plVar9 = (long *)*param_2;
      plStack_88 = plVar11;
      if (*plVar11 != 0) {
        if (plVar9 != (long *)0x0) {
          if (((ulong)plVar9 & 1) != 0) {
            piVar10 = (int *)((long)plVar9 + -1);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar3) {
                *piVar10 = *piVar10 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          plStack_88 = plVar9;
          puStack_80 = puVar12;
          plStack_78 = (long *)ppuVar6;
          puStack_70 = &stack0xfffffffffffffff0;
          FUN_003b6784(plVar11,&plStack_88);
          if (((ulong)plStack_88 & 1) != 0) {
            FUN_0055293c();
          }
        }
        plVar9 = (long *)*plVar11;
        param_2 = plVar11;
      }
      *extraout_x8 = plVar9;
      *param_2 = 0x36;
      return plStack_88;
    }
    if (uVar8 < 0x17) {
      uStack_50 = CONCAT17((char)uVar8,(undefined7)uStack_50);
      goto LAB_003be4b0;
    }
  }
  uVar1 = (uVar8 & 0xfffffffffffffff8) + 8;
  if ((uVar8 | 7) != 0x17) {
    uVar1 = uVar8 | 7;
  }
  ppuVar5 = (undefined1 **)(uVar1 + 1);
  __Znwm();
  uStack_50 = (ulong)(uVar1 + 1) | 0x8000000000000000;
  puStack_60 = (undefined1 *)ppuVar5;
  uStack_58 = uVar8;
LAB_003be4b0:
  _memmove(ppuVar5,puVar12,uVar8);
  *(undefined1 *)((long)ppuVar5 + uVar8) = 0;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    __ZdlPv(*param_3);
  }
  param_3[1] = uStack_58;
  *param_3 = (ulong)puStack_60;
  param_3[2] = uStack_50;
  return (long *)((long)&MACH_HEADER.magic + 1);
}



/* Entry: 003be56c; end: 003be607;  */

void FUN_003be56c(ulong *param_1,ulong *param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uStack_28;
  
  uStack_28 = *param_3;
  if (*param_2 != 0) {
    if (uStack_28 != 0) {
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
      FUN_003b6784(param_2,&uStack_28);
      if ((uStack_28 & 1) != 0) {
        FUN_0055293c();
      }
    }
    uStack_28 = *param_2;
    param_3 = param_2;
  }
  *param_1 = uStack_28;
  *param_3 = 0x36;
  return;
}



/* Entry: 003be608; end: 003be6a7;  */

undefined8 FUN_003be608(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 auStack_48 [2];
  char cStack_31;
  
  FUN_003b7178(auStack_48,param_2);
  FUN_00339074(param_3,param_4,2,"%s: %s");
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return 0;
}



/* Entry: 003be6a8; end: 003be75f;  */

void FUN_003be6a8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong *param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uStack_40;
  ulong uStack_38;
  
  uVar4 = *param_1;
  if (((*param_4 & 1) == 0) || (uStack_38 = param_4[1], uStack_38 == 0)) {
    uStack_38 = param_4[1];
    uStack_40 = *param_4;
  }
  else {
    piVar1 = (int *)(uStack_38 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uStack_40 = 1;
    if (1 < *param_4) {
      FUN_0055ae58(&uStack_40,param_4,8);
    }
  }
  FUN_005521b8(uVar4,param_2,param_3,&uStack_40);
  FUN_00543968(&uStack_40);
  return;
}



/* Entry: 003be760; end: 003be8f7;  */

void FUN_003be760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 **param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 uStack_2a1;
  undefined8 **ppuStack_2a0;
  ulong uStack_298;
  byte bStack_289;
  undefined1 auStack_288 [256];
  undefined1 auStack_188 [256];
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined1 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined1 *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = param_4;
  _CFErrorGetDomain(param_4);
  uVar2 = param_4;
  _CFErrorGetCode();
  _CFErrorCopyDescription(param_4);
  _CFStringGetCString(uVar1,auStack_188,0x100,0x8000100);
  _CFStringGetCString(param_4,auStack_288,0x100,0x8000100);
  uStack_80 = 0x560e98;
  puStack_78 = auStack_188;
  uStack_70 = 0x560e98;
  pcStack_60 = FUN_00560738;
  uStack_50 = 0x560e98;
  puStack_88 = param_5;
  uStack_68 = uVar2;
  puStack_58 = auStack_288;
  FUN_0056189c(&ppuStack_2a0,"%s (error domain:%s, code:%ld, description:%s)",0x2e,&puStack_88,4);
  _CFRelease(param_4);
  pppuVar3 = (undefined8 ***)ppuStack_2a0;
  if (-1 < (char)bStack_289) {
    uStack_298 = (ulong)bStack_289;
    pppuVar3 = &ppuStack_2a0;
  }
  uStack_2b8 = 0;
  uStack_2b0 = 0;
  uStack_2c0 = 0;
  FUN_003b646c(param_1,2,pppuVar3,uStack_298,&uStack_2a1,&uStack_2c0);
  pppuVar3 = (undefined8 ***)&puStack_88;
  puStack_88 = &uStack_2c0;
  FUN_0033d548(pppuVar3);
  if ((char)bStack_289 < '\0') {
    pppuVar3 = (undefined8 ***)ppuStack_2a0;
    __ZdlPv(ppuStack_2a0);
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_48) {
    ___stack_chk_fail();
    puStack_88 = &uStack_2c0;
    FUN_0033d548(&puStack_88);
    if ((char)bStack_289 < '\0') {
      __ZdlPv(ppuStack_2a0);
    }
    __Unwind_Resume(pppuVar3);
                    /* WARNING: Could not recover jumptable at 0x003be900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_DAT_00afacd8)();
    return;
  }
  return;
}



/* Entry: 003be8f8; end: 003be917;  */

void FUN_003be8f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x003be900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_DAT_00afacd8)();
  return;
}



/* Entry: 003be918; end: 003bea8b;  */

void FUN_003be918(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = 0xb8;
  __Znwm();
  FUN_00339df0();
  FUN_00339df0(lVar2 + 0x30);
  lVar1 = lVar2 + 0x60;
  FUN_00339d50(lVar1);
  *(undefined1 *)(lVar2 + 0xa0) = 0;
  *(undefined1 *)(lVar2 + 0xb0) = 0;
  PTR_DAT_00afacd8 = FUN_003beee4;
  PTR_DAT_00aface0 = FUN_003bef70;
  lRam0000000000b5e8b0 = lVar2;
  func_0x00339d8c(lVar1);
  uVar3 = 0x20;
  __Znwm();
  FUN_0033b6e0();
  uRam0000000000b5e8b8 = uVar3;
  FUN_003b3344(uVar3);
  while( true ) {
    lVar2 = lRam0000000000b5e8b0;
    if (*(long *)(lRam0000000000b5e8b0 + 0xa8) != 0) break;
    uVar3 = 0x7fffffffffffffff;
    uVar4 = 0xffffffff;
    FUN_0033b990(0x7fffffffffffffff,0xffffffff);
    FUN_00339e80(lVar2,lVar2 + 0x60,uVar3,uVar4);
  }
  func_0x00339da8(lVar1);
  return;
}



/* Entry: 003bea8c; end: 003beb47;  */

void FUN_003bea8c(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = lRam0000000000b5e8b0 + 0x60;
  func_0x00339d8c(lVar1);
  lVar2 = lRam0000000000b5e8b0;
  *(undefined1 *)(lRam0000000000b5e8b0 + 0xb0) = 1;
  _CFRunLoopStop(*(undefined8 *)(lVar2 + 0xa8));
  func_0x00339da8(lVar1);
  FUN_003b33cc(lRam0000000000b5e8b8);
  if (lRam0000000000b5e8b8 != 0) {
    FUN_003b3a7c();
    __ZdlPv();
  }
  lVar1 = lRam0000000000b5e8b0;
  if (lRam0000000000b5e8b0 != 0) {
    func_0x00339d70(lRam0000000000b5e8b0 + 0x60);
    FUN_00339e64(lVar1 + 0x30);
    FUN_00339e64(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(lVar1);
    return;
  }
  return;
}



/* Entry: 003beb48; end: 003beb9f;  */

void FUN_003beb48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  puVar1 = param_1 + 8;
  param_1[9] = 0;
  *puVar1 = 0;
  FUN_00339d50();
  *puVar1 = puVar1;
  param_1[9] = puVar1;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *param_2 = param_1;
  return;
}



/* Entry: 003beba0; end: 003bec4b;  */

void FUN_003beba0(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uStack_50;
  undefined1 uStack_41;
  
  *(undefined1 *)(param_1 + 0x58) = 1;
  for (lVar1 = *(long *)(param_1 + 0x48); lVar1 != param_1 + 0x40; lVar1 = *(long *)(lVar1 + 8)) {
    *(undefined1 *)(*(long *)(lVar1 + 0x10) + 0x30) = 1;
    FUN_00339f68();
  }
  if (*(long *)(param_1 + 0x50) == 0) {
    uStack_50 = 0;
    FUN_003c1e6c(&uStack_41,param_2,&uStack_50);
    if ((uStack_50 & 1) != 0) {
      FUN_0055293c();
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x60) = param_2;
  }
  return;
}



/* Entry: 003bec4c; end: 003bec7b;  */

void FUN_003bec4c(long param_1)

{
  FUN_003bf128(param_1 + 0x40);
  func_0x00339d70(param_1);
  return;
}



/* Entry: 003bec7c; end: 003bee23;  */

void FUN_003bec7c(undefined8 *param_1,long *param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  dword *pdVar2;
  undefined1 *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *extraout_x8;
  undefined8 *puVar6;
  undefined1 *puVar7;
  ulong uStack_88;
  undefined1 uStack_79;
  undefined8 uStack_78;
  undefined1 auStack_70 [48];
  char cStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar4 = param_3;
  uStack_78 = param_4;
  FUN_00339df0(auStack_70);
  cStack_40 = '\0';
  if (param_3 != (long *)0x0) {
    *param_3 = (long)auStack_70;
  }
  if ((char)param_2[0xd] == '\0') {
    pdVar2 = &MACH_HEADER.flags;
    __Znwm();
    *(undefined1 **)(pdVar2 + 4) = auStack_70;
    puVar6 = (undefined8 *)param_2[9];
    *(long **)pdVar2 = param_2 + 8;
    *(undefined8 **)(pdVar2 + 2) = puVar6;
    *puVar6 = pdVar2;
    param_2[9] = (long)pdVar2;
    param_2[10] = param_2[10] + 1;
    while ((char)param_2[0xb] == '\0') {
      puVar6 = &uStack_78;
      uVar5 = 1;
      FUN_003b8d70(puVar6,1);
      FUN_0033ba00();
      uVar5 = uVar5 & 0xffffffff;
      FUN_0033b990();
      puVar3 = auStack_70;
      plVar4 = param_2;
      FUN_00339e80(puVar3,param_2,puVar6,uVar5);
      if (((int)puVar3 != 0) || (cStack_40 != '\0')) break;
    }
    lVar1 = *(long *)pdVar2;
    *(long *)(lVar1 + 8) = *(long *)(pdVar2 + 2);
    **(long **)(pdVar2 + 2) = lVar1;
    param_2[10] = param_2[10] + -1;
    __ZdlPv(pdVar2);
    if (((char)param_2[0xb] != '\0') && (param_2[10] == 0)) {
      plVar4 = (long *)param_2[0xc];
      uStack_88 = 0;
      FUN_003c1e6c(&uStack_79,plVar4,&uStack_88);
      if ((uStack_88 & 1) != 0) {
        FUN_0055293c();
      }
    }
  }
  else {
    *(undefined1 *)(param_2 + 0xd) = 0;
  }
  *param_1 = 0;
  puVar3 = auStack_70;
  FUN_00339e64();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if ((int)plVar4 == 0) {
    __Unwind_Resume(puVar3);
  }
  func_0x0040cf10();
  if (plVar4 == (long *)((long)&MACH_HEADER.magic + 1)) {
    for (puVar7 = *(undefined1 **)(puVar3 + 0x48); puVar7 != puVar3 + 0x40;
        puVar7 = *(undefined1 **)(puVar7 + 8)) {
      *(undefined1 *)(*(long *)(puVar7 + 0x10) + 0x30) = 1;
      FUN_00339f68();
    }
  }
  else {
    if (plVar4 == (long *)0x0) {
      if (*(long *)(puVar3 + 0x50) == 0) {
        puVar3[0x68] = 1;
        goto LAB_003beeac;
      }
      plVar4 = *(long **)(*(long *)(puVar3 + 0x48) + 0x10);
      *(undefined1 *)(plVar4 + 6) = 1;
    }
    else {
      *(undefined1 *)(plVar4 + 6) = 1;
    }
    FUN_00339f68(plVar4);
  }
LAB_003beeac:
  *extraout_x8 = 0;
  return;
}



/* Entry: 003bee24; end: 003beebf;  */

void FUN_003bee24(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  
  if (param_3 == 1) {
    for (lVar1 = *(long *)(param_2 + 0x48); lVar1 != param_2 + 0x40; lVar1 = *(long *)(lVar1 + 8)) {
      *(undefined1 *)(*(long *)(lVar1 + 0x10) + 0x30) = 1;
      FUN_00339f68();
    }
  }
  else {
    if (param_3 == 0) {
      if (*(long *)(param_2 + 0x50) == 0) {
        *(undefined1 *)(param_2 + 0x68) = 1;
        goto LAB_003beeac;
      }
      param_3 = *(long *)(*(long *)(param_2 + 0x48) + 0x10);
      *(undefined1 *)(param_3 + 0x30) = 1;
    }
    else {
      *(undefined1 *)(param_3 + 0x30) = 1;
    }
    FUN_00339f68(param_3);
  }
LAB_003beeac:
  *param_1 = 0;
  return;
}



/* Entry: 003beec0; end: 003beee3;  */

undefined8 FUN_003beec0(void)

{
  return 0;
}



/* Entry: 003beee4; end: 003bef6f;  */

void FUN_003beee4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = lRam0000000000b5e8b0 + 0x60;
  func_0x00339d8c(lVar1);
  _CFReadStreamScheduleWithRunLoop
            (param_1,*(undefined8 *)(lRam0000000000b5e8b0 + 0xa8),
             *(undefined8 *)PTR__kCFRunLoopDefaultMode_00999d70);
  lVar2 = lRam0000000000b5e8b0;
  *(undefined1 *)(lRam0000000000b5e8b0 + 0xa0) = 1;
  FUN_00339f68(lVar2 + 0x30);
  func_0x00339da8(lVar1);
  return;
}



/* Entry: 003bef70; end: 003beffb;  */

void FUN_003bef70(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = lRam0000000000b5e8b0 + 0x60;
  func_0x00339d8c(lVar1);
  _CFWriteStreamScheduleWithRunLoop
            (param_1,*(undefined8 *)(lRam0000000000b5e8b0 + 0xa8),
             *(undefined8 *)PTR__kCFRunLoopDefaultMode_00999d70);
  lVar2 = lRam0000000000b5e8b0;
  *(undefined1 *)(lRam0000000000b5e8b0 + 0xa0) = 1;
  FUN_00339f68(lVar2 + 0x30);
  func_0x00339da8(lVar1);
  return;
}



/* Entry: 003beffc; end: 003bf0f3;  */

void FUN_003beffc(void)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack_40;
  undefined1 uStack_38;
  
  lVar3 = lRam0000000000b5e8b0 + 0x60;
  uStack_38 = 0;
  lStack_40 = lVar3;
  func_0x00339d8c();
  _CFRunLoopGetCurrent();
  lVar2 = lRam0000000000b5e8b0;
  *(long *)(lRam0000000000b5e8b0 + 0xa8) = lVar3;
  FUN_00339f68(lVar2);
  cVar1 = *(char *)(lRam0000000000b5e8b0 + 0xb0);
  while (cVar1 == '\0') {
    while (lVar3 = lRam0000000000b5e8b0, *(char *)(lRam0000000000b5e8b0 + 0xa0) == '\0') {
      uVar4 = 0x7fffffffffffffff;
      uVar5 = 0xffffffff;
      FUN_0033b990(0x7fffffffffffffff,0xffffffff);
      FUN_00339e80(lVar3 + 0x30,lVar3 + 0x60,uVar4,uVar5);
    }
    *(undefined1 *)(lRam0000000000b5e8b0 + 0xa0) = 0;
    uStack_38 = 1;
    func_0x00339da8(lStack_40);
    _CFRunLoopRun();
    func_0x00339d8c(lStack_40);
    uStack_38 = 0;
    cVar1 = *(char *)(lRam0000000000b5e8b0 + 0xb0);
  }
  uStack_38 = 1;
  func_0x00339da8(lStack_40);
  FUN_003bf0f4(&lStack_40);
  return;
}



/* Entry: 003bf0f4; end: 003bf127;  */

undefined8 * FUN_003bf0f4(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) == '\0') {
    func_0x00339da8(*param_1);
  }
  return param_1;
}



/* Entry: 003bf128; end: 003bf187;  */

void FUN_003bf128(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if (param_1[2] != 0) {
    plVar1 = (long *)param_1[1];
    lVar2 = *param_1;
    lVar3 = *plVar1;
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar2 + 8);
    **(long **)(lVar2 + 8) = lVar3;
    param_1[2] = 0;
    while (plVar1 != param_1) {
      plVar1 = (long *)plVar1[1];
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 003bf188; end: 003bf18f;  */

undefined8 FUN_003bf188(void)

{
  return 0;
}



/* Entry: 003bf190; end: 003bf303;  */

/* WARNING: Type propagation algorithm not settling */

qword * FUN_003bf190(long param_1,long param_2)

{
  qword *pqVar1;
  segment_command *psVar2;
  qword *pqVar3;
  long lVar4;
  segment_command *psVar5;
  segment_command *apsStack_e0 [2];
  char cStack_c9;
  qword *pqStack_c8;
  qword qStack_c0;
  qword aqStack_b8 [4];
  char *pcStack_98;
  undefined8 uStack_90;
  long lStack_68;
  long lStack_60;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  pqVar3 = &section_000000b8.size;
  FUN_00338c74();
  FUN_00339d50(pqVar3 + 2);
  pqVar3[1] = 1;
  pqVar3[0x16] = 0;
  pqVar3[0x17] = 0;
  pqVar3[0x14] = 0;
  pqVar3[0x15] = 0;
  *(int *)pqVar3 = (int)param_1;
  pqVar3[0xe] = (qword)(pqVar3 + 0xe);
  pqVar3[0xf] = (qword)(pqVar3 + 0xe);
  pqVar3[0xd] = 0;
  pqVar3[10] = 0;
  *(undefined4 *)(pqVar3 + 0xb) = 0;
  pqVar3[0x13] = 0;
  pqVar3[0xc] = 0;
  if (param_2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_2;
    _strlen();
  }
  pcStack_98 = " fd=";
  uStack_90 = 4;
  pqVar1 = &((segment_command *)apsStack_e0)->fileoff;
  lStack_68 = param_2;
  lStack_60 = lVar4;
  func_0x00574ac0(param_1,pqVar1);
  qStack_c0 = param_1 - (long)pqVar1;
  pqStack_c8 = pqVar1;
  FUN_00575ddc((segment_command *)apsStack_e0,&lStack_68,&pcStack_98,
               &((segment_command *)apsStack_e0)->vmaddr);
  psVar5 = (segment_command *)(pqVar3 + 0x18);
  psVar2 = apsStack_e0[0];
  if (-1 < cStack_c9) {
    psVar2 = (segment_command *)apsStack_e0;
  }
  FUN_003c3190(psVar5,psVar2);
  if (cRam0000000000b5e8c0 == '\x01') {
    psVar5 = &segment_command_00000020;
    FUN_00338c74();
    pqVar3[0x1b] = (qword)psVar5;
    *(qword **)psVar5 = pqVar3;
    psVar5->segname[0] = '\0';
    psVar5->segname[1] = '\0';
    psVar5->segname[2] = '\0';
    psVar5->segname[3] = '\0';
    psVar5->segname[4] = '\0';
    psVar5->segname[5] = '\0';
    psVar5->segname[6] = '\0';
    psVar5->segname[7] = '\0';
    FUN_003c0898();
  }
  if (cStack_c9 < '\0') {
    psVar5 = apsStack_e0[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return pqVar3;
  }
  ___stack_chk_fail();
  if (cStack_c9 < '\0') {
    __ZdlPv(apsStack_e0[0]);
  }
  __Unwind_Resume();
  if ((*(int *)(psVar5[1].segname + 8) == 0) && (*(int *)(psVar5[1].segname + 4) == 0)) {
    return (qword *)(ulong)psVar5->cmd;
  }
  return (qword *)0xffffffff;
}



/* Entry: 003bf304; end: 003bf323;  */

undefined4 FUN_003bf304(undefined4 *param_1)

{
  if ((param_1[0x16] == 0) && (param_1[0x15] == 0)) {
    return *param_1;
  }
  return 0xffffffff;
}



/* Entry: 003bf324; end: 003bf44b;  */

void FUN_003bf324(undefined4 *param_1,undefined8 param_2,undefined4 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  *(undefined8 *)(param_1 + 0x2e) = param_2;
  param_1[0x16] = (uint)(param_3 != (undefined4 *)0x0);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *param_1;
    param_1[0x16] = 1;
  }
  func_0x00339d8c(param_1 + 4);
  FUN_003c08e0(param_1,1);
  lVar1 = *(long *)(param_1 + 0x26);
  if (((lVar1 == 0) && (*(long *)(param_1 + 0x28) == 0)) &&
     (*(undefined8 **)(param_1 + 0x1c) == (undefined8 *)(param_1 + 0x1c))) {
    FUN_003c0914(param_1);
  }
  else {
    puVar3 = (undefined8 *)(param_1 + 0x1c);
    puVar2 = (undefined8 *)*puVar3;
    if (puVar2 != puVar3) {
      do {
        FUN_003c0a00(&uStack_38,puVar2);
        if ((uStack_38 & 1) != 0) {
          FUN_0055293c();
        }
        puVar2 = (undefined8 *)*puVar2;
      } while (puVar2 != puVar3);
      lVar1 = *(long *)(param_1 + 0x26);
    }
    if (lVar1 != 0) {
      FUN_003c0a00(&uStack_40);
      if ((uStack_40 & 1) != 0) {
        FUN_0055293c();
      }
    }
    if ((*(long *)(param_1 + 0x28) != 0) && (*(long *)(param_1 + 0x28) != *(long *)(param_1 + 0x26))
       ) {
      FUN_003c0a00(&uStack_48);
      if ((uStack_48 & 1) != 0) {
        FUN_0055293c();
      }
    }
  }
  func_0x00339da8(param_1 + 4);
  FUN_003c0988(param_1);
  return;
}



/* Entry: 003bf44c; end: 003bf583;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

ulong * FUN_003bf44c(undefined4 *param_1,ulong *param_2,undefined8 param_3,ulong *param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined7 *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong *puVar10;
  char *pcVar11;
  uint uVar12;
  ulong *puVar13;
  ulong uVar14;
  int *piVar15;
  uint uVar16;
  ulong *puVar17;
  ulong *unaff_x23;
  ulong *unaff_x24;
  ulong *apuStack_2b8 [2];
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
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  ulong *puStack_1b0;
  ulong *puStack_1a8;
  ulong *puStack_1a0;
  ulong *puStack_198;
  ulong *puStack_190;
  undefined8 uStack_188;
  undefined1 **ppuStack_180;
  code *pcStack_178;
  undefined1 **ppuStack_170;
  ulong auStack_168 [8];
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
  ulong *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  ulong auStack_58 [2];
  long lStack_48;
  
  puVar7 = (ulong *)(param_1 + 4);
  puVar13 = param_2;
  func_0x00339d8c(puVar7);
  if (param_1[0x14] == 0) {
    param_1[0x14] = 1;
    uVar9 = *(ulong *)(param_1 + 0x1a);
    uVar14 = *param_2;
    if (uVar14 != uVar9) {
      if ((uVar14 & 1) != 0) {
        piVar15 = (int *)(uVar14 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar2) {
            *piVar15 = *piVar15 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        uVar14 = *param_2;
      }
      *(ulong *)(param_1 + 0x1a) = uVar14;
      if ((uVar9 & 1) != 0) {
        FUN_0055293c();
      }
    }
    puVar13 = (ulong *)(param_1 + 0x2c);
    _shutdown(*param_1,2);
    FUN_003c0fd4(param_1,param_1 + 0x2a);
    FUN_003c0fd4(param_1);
  }
  _pthread_mutex_unlock();
  if ((int)puVar7 == 0) {
    return puVar7;
  }
  func_0x00770db4();
  _pthread_mutex_trylock();
  if (((uint)puVar7 | 0x10) == 0x10) {
    return (ulong *)(ulong)((uint)puVar7 == 0);
  }
  func_0x00770de8();
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar8 = auStack_58;
  _pthread_condattr_init();
  if ((int)puVar8 == 0) {
    puVar13 = auStack_58;
    puVar8 = puVar7;
    _pthread_cond_init();
    if ((int)puVar8 != 0) goto LAB_00339e5c;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
      return puVar8;
    }
  }
  else {
    func_0x00770e50();
LAB_00339e5c:
    func_0x00770e1c();
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_00339e64;
  puStack_70 = &stack0xffffffffffffffd0;
  _pthread_cond_destroy();
  if ((int)puVar8 == 0) {
    return puVar8;
  }
  func_0x00770e84();
  pcStack_78 = FUN_00339e80;
  uVar9 = (ulong)param_4 >> 0x20;
  puVar17 = puVar13;
  puStack_88 = puVar7;
  puStack_80 = (undefined1 *)&puStack_70;
  func_0x0033a068(uVar9);
  uVar3 = param_3;
  FUN_00339fc4(param_3,param_4,uVar9);
  if ((int)uVar3 == 0) {
    _pthread_cond_wait();
  }
  else {
    FUN_0033a30c(param_3,param_4,1);
    uVar9 = (ulong)param_4 >> 0x20;
    puVar17 = param_4;
    FUN_0033a598(uVar9);
    FUN_0033a01c(param_3,param_4,uVar9);
    lStack_a8 = (long)(int)param_4;
    uStack_b0 = param_3;
    _pthread_cond_timedwait(puVar8,puVar13,&uStack_b0);
  }
  if (((uint)puVar8 < 0x3d) && ((1L << ((ulong)puVar8 & 0x3f) & 0x1000000800000001U) != 0)) {
    return (ulong *)(ulong)((uint)puVar8 == 0x3c);
  }
  func_0x00770eb8();
  pcStack_b8 = FUN_00339f68;
  ppuStack_c0 = &puStack_80;
  _pthread_cond_signal();
  if ((int)puVar8 == 0) {
    return puVar8;
  }
  func_0x00770eec();
  uStack_c8 = 0x339f84;
  puStack_d0 = (undefined1 *)&ppuStack_c0;
  _pthread_cond_broadcast();
  if ((int)puVar8 == 0) {
    return puVar8;
  }
  func_0x00770f20();
  uStack_d8 = 0x339fa0;
  puStack_e0 = (undefined1 *)&puStack_d0;
  _pthread_once();
  if ((int)puVar8 == 0) {
    return puVar8;
  }
  func_0x00770f54();
  pcStack_e8 = FUN_00339fbc;
  lStack_128 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar7 = (ulong *)((long)&MACH_HEADER.magic + 2);
  puVar10 = puVar13;
  puStack_f0 = (undefined1 *)&puStack_e0;
  FUN_00338e58();
  if ((int)puVar7 != 0) {
    ppuStack_170 = &puStack_e0;
    puVar7 = auStack_168;
    _vsnprintf(puVar7,0x40,puVar17,&puStack_e0);
    if ((int)(uint)puVar7 < 0) {
      unaff_x23 = (ulong *)0x0;
      puVar17 = (ulong *)0x0;
    }
    else {
      unaff_x24 = puVar7;
      if ((uint)puVar7 < 0x40) {
        puVar17 = (ulong *)0x0;
        unaff_x23 = auStack_168;
      }
      else {
        puVar17 = (ulong *)(((ulong)puVar7 & 0xffffffff) + 1);
        FUN_00338c74();
        ppuStack_170 = &puStack_e0;
        _vsnprintf();
        unaff_x23 = puVar17;
      }
    }
    puVar10 = puVar13;
    FUN_00338e80(puVar8,puVar13,2,unaff_x23);
    puVar7 = puVar17;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_128) {
    return puVar7;
  }
  ___stack_chk_fail();
  uStack_188 = 2;
  pcStack_178 = FUN_00339178;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar3 = 1;
  puStack_1b0 = unaff_x24;
  puStack_1a8 = unaff_x23;
  puStack_1a0 = puVar17;
  puStack_198 = puVar8;
  puStack_190 = puVar13;
  ppuStack_180 = &puStack_f0;
  FUN_0033a598();
  uVar9 = *puVar7;
  uVar14 = uVar9;
  uStack_268 = uVar3;
  _strrchr(uVar9,0x2f);
  if (uVar14 != 0) {
    uVar9 = uVar14 + 1;
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
  uVar6 = (ulong)*(uint *)((long)puVar7 + 0xc);
  func_0x00338e1c();
  uVar14 = uVar6;
  _pthread_self();
  auStack_218[1] = 0x560e98;
  puStack_208 = &uStack_260;
  uStack_200 = 0x560e98;
  uStack_1f8 = (ulong)puVar10 & 0xffffffff;
  uStack_1f0 = 0x5606ac;
  pcStack_1e0 = FUN_00560738;
  uStack_1d0 = 0x560e98;
  uStack_1c8 = (ulong)(uint)puVar7[1];
  uStack_1c0 = 0x5606ac;
  puVar13 = auStack_218;
  auStack_218[0] = uVar6;
  uStack_1e8 = uVar14;
  uStack_1d8 = uVar9;
  FUN_0056189c(apuStack_2b8,"%s%s.%09d %7ld %s:%d]",0x15,puVar13,6);
  uVar12 = *(uint *)((long)puVar7 + 0xc);
  func_0x00338e6c();
  if (uVar12 == 0) {
    auStack_218[0] = auStack_218[0] & 0xffffffffffffff00;
    uStack_200 = uStack_200 & 0xffffffffffffff00;
LAB_00339300:
    puVar7 = *(ulong **)PTR____stderrp_00999f90;
    pcVar11 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_218);
    if ((char)uStack_200 == '\0') goto LAB_00339300;
    puVar7 = *(ulong **)PTR____stderrp_00999f90;
    pcVar11 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_2a1 < '\0') {
    puVar7 = apuStack_2b8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1b8) {
    return puVar7;
  }
  ___stack_chk_fail();
  if (cStack_2a1 < '\0') {
    __ZdlPv(apuStack_2b8[0]);
  }
  __Unwind_Resume();
  uVar12 = (uint)puVar13;
  if ((char *)0x3 < pcVar11) {
    uVar9 = (ulong)pcVar11 >> 2;
    puVar8 = puVar7;
    do {
      uVar12 = ((int)*puVar8 * 0x16a88000 | (uint)((int)*puVar8 * -0x3361d2af) >> 0x11) * 0x1b873593
               ^ (uint)puVar13;
      uVar12 = (uVar12 >> 0x13 | uVar12 << 0xd) * 5 + 0xe6546b64;
      puVar13 = (ulong *)(ulong)uVar12;
      uVar9 = uVar9 - 1;
      puVar8 = (ulong *)((long)puVar8 + 4);
    } while (uVar9 != 0);
    puVar7 = (ulong *)((long)puVar7 + ((ulong)pcVar11 & 0xfffffffffffffffc));
  }
  uVar16 = 0;
  uVar9 = (ulong)pcVar11 & 3;
  if (uVar9 != 1) {
    if (uVar9 != 2) {
      if (uVar9 != 3) goto LAB_00339464;
      uVar16 = (uint)*(byte *)((long)puVar7 + 2) << 0x10;
    }
    uVar16 = uVar16 | (uint)*(byte *)((long)puVar7 + 1) << 8;
  }
  uVar16 = uVar16 ^ (byte)*puVar7;
  uVar12 = (uVar16 * 0x16a88000 | uVar16 * -0x3361d2af >> 0x11) * 0x1b873593 ^ uVar12;
LAB_00339464:
  uVar12 = uVar12 ^ (uint)pcVar11;
  uVar12 = (uVar12 ^ uVar12 >> 0x10) * -0x7a143595;
  uVar12 = (uVar12 ^ uVar12 >> 0xd) * -0x3d4d51cb;
  return (ulong *)(ulong)(uVar12 ^ uVar12 >> 0x10);
}



/* Entry: 003bf584; end: 003bf5db;  */

void FUN_003bf584(undefined8 param_1,undefined8 param_2)

{
  ulong uStack_30;
  undefined1 uStack_21;
  
  uStack_30 = 4;
  FUN_003c1e6c(&uStack_21,param_2,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003bf5dc; end: 003bf64b;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_003bf5dc(long param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

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
  
  pbVar8 = (byte *)(param_1 + 0x10);
  func_0x00339d8c(pbVar8);
  pbVar7 = (byte *)(param_1 + 0xa8);
  FUN_003c0fd4(param_1);
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



/* Entry: 003bf64c; end: 003bf64f;  */

void FUN_003bf64c(void)

{
  return;
}



/* Entry: 003bf650; end: 003bf6d3;  */

bool FUN_003bf650(long param_1)

{
  int iVar1;
  
  func_0x00339d8c(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0x50);
  func_0x00339da8(param_1 + 0x10);
  return iVar1 != 0;
}



/* Entry: 003bf7c8; end: 003c00cf;  */

/* WARNING: Removing unreachable block (ram,0x003c0d00) */

void FUN_003bf7c8(undefined8 *param_1,undefined **param_2,undefined ***param_3,ulong param_4)

{
  long lVar1;
  ushort uVar2;
  char cVar3;
  ulong uVar4;
  code *pcVar5;
  uint uVar6;
  dword *pdVar7;
  segment_command *psVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  char *pcVar11;
  long lVar12;
  undefined8 uVar13;
  char *pcVar14;
  ulong uVar15;
  bool bVar16;
  int extraout_w8;
  undefined *extraout_x8;
  undefined *puVar17;
  long *plVar18;
  undefined8 *puVar19;
  ulong *extraout_x8_00;
  undefined8 *extraout_x8_01;
  int *piVar20;
  undefined8 *extraout_x9;
  dword *unaff_x19;
  undefined2 uVar21;
  undefined **ppuVar22;
  char *pcVar23;
  ulong unaff_x22;
  ushort *puVar24;
  undefined **ppuVar25;
  uint uVar26;
  char *pcVar27;
  long lVar28;
  ulong uStack_1368;
  ulong uStack_1360;
  ulong uStack_1358;
  ulong uStack_1350;
  ulong uStack_1348;
  ulong uStack_1340;
  undefined **ppuStack_1338;
  undefined **ppuStack_1330;
  dword *pdStack_1328;
  undefined1 *puStack_1320;
  code *pcStack_1318;
  char *pcStack_1310;
  undefined ***pppuStack_1300;
  undefined8 *puStack_12f8;
  uint uStack_12ec;
  undefined ***pppuStack_12e8;
  ulong uStack_12e0;
  undefined4 uStack_12d4;
  char *pcStack_12d0;
  undefined **ppuStack_12c8;
  undefined **ppuStack_12c0;
  char *pcStack_12b8;
  char *pcStack_12b0;
  char *pcStack_12a8;
  undefined **ppuStack_12a0;
  dword *pdStack_1298;
  int iStack_1290;
  int iStack_128c;
  undefined *puStack_1288;
  undefined **ppuStack_1280;
  undefined **ppuStack_1278;
  char acStack_1270 [3840];
  dword adStack_370 [192];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  if (param_3 != (undefined ***)0x0) {
    *param_3 = (undefined **)&pdStack_1298;
  }
  *param_1 = 0;
  iStack_1290 = 0;
  puStack_1288 = (undefined *)0x0;
  ppuStack_1280 = (undefined **)0x0;
  pdStack_1298 = (dword *)param_2[0x13];
  pppuStack_1300 = param_3;
  puStack_12f8 = param_1;
  if (pdStack_1298 == (dword *)0x0) {
    pdVar7 = &MACH_HEADER.flags;
    FUN_00338c74();
    pdStack_1298 = pdVar7;
    func_0x003d0a10(&ppuStack_1278);
    ppuVar9 = ppuStack_1278;
    pdVar7 = pdStack_1298;
    if (ppuStack_1278 != (undefined **)0x0) {
      *puStack_12f8 = ppuStack_1278;
    }
    if (cRam0000000000b5e8c0 == '\x01') {
      psVar8 = &segment_command_00000020;
      FUN_00338c74();
      *(segment_command **)(pdVar7 + 4) = psVar8;
      psVar8->cmd = 0;
      psVar8->cmdsize = 0;
      *(dword **)psVar8->segname = pdVar7;
      FUN_003c0898();
      unaff_x19 = pdVar7;
    }
    if (ppuVar9 == (undefined **)0x0) goto LAB_003bf83c;
    ppuStack_12a0 = ppuVar9;
    if (((ulong)ppuVar9 & 1) != 0) {
      piVar20 = (int *)((long)ppuVar9 + -1);
      do {
        cVar3 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar16) {
          *piVar20 = *piVar20 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar16) {
          *piVar20 = *piVar20 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    param_3 = &ppuStack_1278;
    ppuStack_1278 = ppuVar9;
    FUN_003be608("pollset_work",param_3,
                 "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_poll_posix.cc"
                 ,0x3ae);
    ppuVar22 = ppuStack_1278;
    if (((ulong)ppuStack_1278 & 1) != 0) {
      FUN_0055293c();
    }
    if (((ulong)ppuVar9 & 1) != 0) {
      FUN_0055293c();
      ppuVar22 = ppuVar9;
    }
  }
  else {
    param_2[0x13] = *(undefined **)(pdStack_1298 + 2);
LAB_003bf83c:
    iStack_128c = 0;
    ppuVar9 = &PTR___tlv_bootstrap_00b2c408;
    if (*(int *)(param_2 + 0xc) == 0) {
      (*(code *)PTR___tlv_bootstrap_00b2c408)();
      ppuVar25 = (undefined **)0x0;
      ppuVar22 = (undefined **)0x0;
      bVar16 = false;
      unaff_x22 = 0;
      unaff_x19 = (dword *)0x0;
      *ppuVar9 = (undefined *)param_2;
      uVar15 = param_4;
      goto LAB_003bf9c0;
    }
    ppuVar22 = (undefined **)0x0;
    unaff_x19 = (dword *)0x0;
    unaff_x22 = 0;
    ppuVar25 = (undefined **)0x0;
    while( true ) {
      bVar16 = true;
      uVar15 = param_4;
      if ((iStack_1290 != 0) && (ppuVar22 == (undefined **)0x0)) {
        bVar16 = false;
        iStack_1290 = 0;
        *(undefined4 *)(param_2 + 0xd) = 0;
        uVar15 = 0;
        if ((int)unaff_x22 == 0 && iStack_128c == 0) {
          uVar15 = param_4;
        }
      }
LAB_003bf9c0:
      param_4 = uVar15;
      if (bVar16) break;
      if (*(int *)(param_2 + 0xd) == 0) {
LAB_003bf9e8:
        if ((int)unaff_x19 == 0) {
          ppuStack_1280 = param_2 + 8;
          puStack_1288 = param_2[10];
          *(dword ***)(puStack_1288 + 0x18) = &pdStack_1298;
          param_2[10] = (undefined *)&pdStack_1298;
          ppuVar9 = &PTR___tlv_bootstrap_00b2c3f0;
          (*(code *)PTR___tlv_bootstrap_00b2c3f0)();
          *ppuVar9 = extraout_x8;
        }
        uStack_12ec = (uint)unaff_x22;
        if (param_4 == 0) {
          uVar15 = 0;
        }
        else {
          uVar15 = 0xffffffff;
          if (param_4 != 0x7fffffffffffffff) {
            func_0x003c1f6c();
            puVar10 = *ppuVar9;
            FUN_003c1e28();
            if (puVar10 == (undefined *)0x8000000000000001) {
LAB_003bfa4c:
              uVar15 = 0xffffffff;
            }
            else {
              uVar15 = 0;
              if ((param_4 != 0x8000000000000000) && (puVar10 != (undefined *)0x8000000000000000)) {
                if ((long)param_4 < 1) {
                  uVar15 = 0;
                  if (-(long)puVar10 < (long)(-0x8000000000000000 - param_4)) goto LAB_003bfa58;
                }
                else if ((long)(param_4 ^ 0x7fffffffffffffff) < -(long)puVar10) goto LAB_003bfa4c;
                uVar4 = param_4 - (long)puVar10;
                uVar15 = 0;
                if ((-1 < (long)uVar4) && (uVar15 = uVar4, uVar4 >> 0x1f != 0)) goto LAB_003bfa4c;
              }
            }
          }
        }
LAB_003bfa58:
        puVar17 = param_2[0x10];
        puVar10 = puVar17 + 2;
        pcVar11 = (char *)adStack_370;
        pcVar23 = acStack_1270;
        if ((undefined *)0x60 < puVar10) {
          pcVar11 = (char *)((long)puVar10 * 0x30);
          FUN_00338c74();
          pcVar23 = pcVar11 + (long)puVar10 * 8;
          puVar17 = param_2[0x10];
        }
        puVar10 = (undefined *)0x0;
        param_3 = (undefined ***)((long)&MACH_HEADER.magic + 1);
        *(dword *)pcVar11 = *pdStack_1298;
        *(dword *)(pcVar11 + 4) = 1;
        if (puVar17 != (undefined *)0x0) {
          puVar10 = (undefined *)0x0;
          puVar17 = (undefined *)0x0;
          do {
            lVar12 = *(long *)(param_2[0x12] + (long)puVar17 * 8);
            if (((*(ulong *)(*(long *)(param_2[0x12] + (long)puVar17 * 8) + 8) & 1) == 0) ||
               (*(long *)(lVar12 + 0x60) == 1)) {
              FUN_003c0988();
            }
            else {
              *(long *)(param_2[0x12] + (long)puVar10 * 8) = lVar12;
              uVar13 = *(undefined8 *)(param_2[0x12] + (long)puVar17 * 8);
              *(undefined8 *)(pcVar23 + ((long)param_3 * 5 + 4) * 8) = uVar13;
              FUN_003c08e0(uVar13,2);
              puVar10 = puVar10 + 1;
              *(undefined4 *)(pcVar11 + (long)param_3 * 8) =
                   **(undefined4 **)(param_2[0x12] + (long)puVar17 * 8);
              *(undefined2 *)(pcVar11 + (long)param_3 * 8 + 6) = 0;
              param_3 = (undefined ***)(ulong)((int)param_3 + 1);
            }
            puVar17 = puVar17 + 1;
          } while (puVar17 < param_2[0x10]);
        }
        uStack_12d4 = (undefined4)uVar15;
        param_2[0x10] = puVar10;
        func_0x00339da8(param_2);
        uVar26 = (uint)param_3;
        pppuStack_12e8 = param_3;
        uStack_12e0 = param_4;
        pcStack_12d0 = pcVar23;
        if (1 < uVar26) {
          lVar12 = (long)param_3 + -1;
          pdVar7 = (dword *)(pcVar11 + 0xc);
          do {
            pcVar14 = pcVar23 + 0x28;
            lVar28 = *(long *)(pcVar23 + 0x48);
            FUN_003c08e0(lVar28,2);
            lVar1 = lVar28 + 0x10;
            func_0x00339d8c(lVar1);
            if (*(int *)(lVar28 + 0x50) == 0) {
              if (*(long *)(lVar28 + 0x98) == 0 && *(long *)(lVar28 + 0xa8) != 1) {
                plVar18 = (long *)(lVar28 + 0xa0);
                *(char **)(lVar28 + 0x98) = pcVar14;
                if (*plVar18 == 0 && *(long *)(lVar28 + 0xb0) != 1) {
                  uVar21 = 5;
                  goto LAB_003bfc2c;
                }
                uVar21 = 1;
              }
              else {
                plVar18 = (long *)(lVar28 + 0xa0);
                if (*plVar18 == 0 && *(long *)(lVar28 + 0xb0) != 1) {
                  uVar21 = 4;
                }
                else {
                  uVar21 = 0;
                  *(long *)pcVar14 = lVar28 + 0x70;
                  puVar19 = *(undefined8 **)(lVar28 + 0x78);
                  *(undefined8 **)(pcVar23 + 0x30) = puVar19;
                  *puVar19 = pcVar14;
                  plVar18 = (long *)(*(long *)pcVar14 + 8);
                }
LAB_003bfc2c:
                *plVar18 = (long)pcVar14;
              }
              *(undefined ***)(pcVar23 + 0x38) = param_2;
              *(dword ***)(pcVar23 + 0x40) = &pdStack_1298;
              *(long *)(pcVar23 + 0x48) = lVar28;
              func_0x00339da8(lVar1);
            }
            else {
              *(dword *)((long)(pcVar23 + 0x38) + 0) = 0;
              *(dword *)((long)(pcVar23 + 0x38) + 4) = 0;
              *(dword *)((long)(pcVar23 + 0x40) + 0) = 0;
              *(dword *)((long)(pcVar23 + 0x40) + 4) = 0;
              *(dword *)((long)(pcVar23 + 0x48) + 0) = 0;
              *(dword *)((long)(pcVar23 + 0x48) + 4) = 0;
              func_0x00339da8(lVar1);
              FUN_003c0988(lVar28);
              uVar21 = 0;
            }
            *(undefined2 *)pdVar7 = uVar21;
            FUN_003c0988(lVar28);
            pdVar7 = pdVar7 + 2;
            lVar12 = lVar12 + -1;
            pcVar23 = pcVar14;
          } while (lVar12 != 0);
        }
        pcVar14 = pcVar11;
        (*(code *)PTR__poll_00afad58)(pcVar11,param_3,uStack_12d4);
        pcVar23 = pcStack_12d0;
        param_4 = uStack_12e0;
        func_0x003c1f6c(pcVar14);
        *(undefined1 *)(*(long *)pcVar14 + 0x34) = 0;
        if (extraout_w8 < 0) {
          ___error();
          if (*(dword *)pcVar14 != 4) {
            ___error();
            FUN_003be008(&pcStack_12b0,&ppuStack_1278,*(dword *)pcVar14,"poll");
            pcVar14 = pcStack_12b0;
            if (pcStack_12b0 == (char *)0x0) {
              pcStack_1310 = "!GRPC_ERROR_IS_NONE(error)";
              FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                           ,0xd5,2,"assertion failed: %s");
              _abort();
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x3c004c);
              (*pcVar5)();
            }
            pcStack_12b0 = segment_command_00000020.segname + 0xe;
            pcStack_12a8 = pcVar14;
            param_3 = (undefined ***)&pcStack_12a8;
            FUN_003c1364(puStack_12f8);
            if (((ulong)pcVar14 & 1) != 0) {
              FUN_0055293c(pcVar14);
            }
            pcVar14 = pcStack_12b0;
            if (((ulong)pcStack_12b0 & 1) != 0) {
              FUN_0055293c();
            }
          }
          if (1 < uVar26) {
            lVar12 = (long)pppuStack_12e8 + -1;
            do {
              pcVar27 = pcVar23 + 0x28;
              param_3 = (undefined ***)(ulong)(*(long *)(pcVar23 + 0x48) != 0);
              pcVar14 = pcVar27;
              FUN_003c1500(pcVar27,param_3,param_3);
              lVar12 = lVar12 + -1;
              pcVar23 = pcVar27;
            } while (lVar12 != 0);
          }
        }
        else if (extraout_w8 == 0) {
          if (1 < uVar26) {
            lVar12 = (long)pppuStack_12e8 + -1;
            do {
              pcVar23 = pcVar23 + 0x28;
              param_3 = (undefined ***)0x0;
              pcVar14 = pcVar23;
              FUN_003c1500(pcVar23,0,0);
              lVar12 = lVar12 + -1;
            } while (lVar12 != 0);
          }
        }
        else {
          if ((*(ushort *)(pcVar11 + 6) & 0x19) != 0) {
            func_0x003d0a20(&pcStack_12b8,pdStack_1298);
            param_3 = (undefined ***)&pcStack_12b8;
            FUN_003c1364(puStack_12f8);
            pcVar14 = pcStack_12b8;
            if (((ulong)pcStack_12b8 & 1) != 0) {
              FUN_0055293c();
            }
          }
          if (1 < uVar26) {
            lVar12 = (long)pppuStack_12e8 + -1;
            puVar24 = (ushort *)(pcVar11 + 0xe);
            do {
              pcVar27 = pcVar23 + 0x28;
              if (*(long *)(pcVar23 + 0x48) == 0) {
                param_3 = (undefined ***)0x0;
                uVar26 = 0;
              }
              else {
                uVar2 = *puVar24;
                if ((uVar2 >> 4 & 1) != 0) {
                  *(undefined8 *)(*(long *)(pcVar23 + 0x48) + 0x60) = 1;
                  uVar2 = *puVar24;
                }
                param_3 = (undefined ***)(ulong)(uVar2 & 0x19);
                uVar26 = uVar2 & 0x1c;
              }
              pcVar14 = pcVar27;
              FUN_003c1500(pcVar27,param_3,uVar26);
              puVar24 = puVar24 + 4;
              lVar12 = lVar12 + -1;
              pcVar23 = pcVar27;
            } while (lVar12 != 0);
          }
        }
        if ((dword *)pcVar11 != adStack_370) {
          FUN_00338cb8();
          pcVar14 = pcVar11;
        }
        func_0x003c1f6c();
        uVar6 = (uint)*(long *)pcVar14;
        FUN_003c1d50();
        uVar26 = uStack_12ec;
        ppuVar9 = param_2;
        func_0x00339d8c();
        unaff_x22 = (ulong)(uVar26 | uVar6);
        ppuVar22 = (undefined **)*puStack_12f8;
        unaff_x19 = (dword *)((long)&MACH_HEADER.magic + 1);
        ppuVar25 = ppuVar22;
      }
      else {
        func_0x003c1f6c();
        ppuVar9 = (undefined **)*ppuVar9;
        FUN_003c1e28();
        if ((long)param_4 <= (long)ppuVar9) goto LAB_003bf9e8;
        *(undefined4 *)(param_2 + 0xd) = 0;
      }
    }
    ppuVar22 = &PTR___tlv_bootstrap_00b2c408;
    (*(code *)PTR___tlv_bootstrap_00b2c408)();
    *ppuVar22 = (undefined *)0x0;
    if ((int)unaff_x19 != 0) {
      ppuStack_1280[2] = puStack_1288;
      *(undefined ***)(puStack_1288 + 0x18) = ppuStack_1280;
      ppuVar22 = &PTR___tlv_bootstrap_00b2c3f0;
      (*(code *)PTR___tlv_bootstrap_00b2c3f0)();
      *ppuVar22 = (undefined *)0x0;
    }
    *(undefined **)(pdStack_1298 + 2) = param_2[0x13];
    param_2[0x13] = (undefined *)pdStack_1298;
    if (*(int *)(param_2 + 0xc) != 0) {
      if ((undefined **)param_2[10] == param_2 + 8) {
        if ((*(int *)((long)param_2 + 100) == 0) && (*(int *)(param_2 + 0xf) == 0)) {
          *(undefined4 *)((long)param_2 + 100) = 1;
          func_0x00339da8(param_2);
          ppuVar9 = param_2;
          FUN_003c12dc();
          func_0x003c1f6c();
          FUN_003c1d50(*ppuVar9);
          ppuVar22 = param_2;
          func_0x00339d8c();
        }
      }
      else {
        param_3 = (undefined ***)0x0;
        FUN_003c0a60(&ppuStack_12c0,param_2,0,0);
        ppuVar22 = ppuStack_12c0;
        if (((ulong)ppuStack_12c0 & 1) != 0) {
          FUN_0055293c();
          ppuVar22 = ppuStack_12c0;
        }
      }
    }
    if (pppuStack_1300 != (undefined ***)0x0) {
      *pppuStack_1300 = (undefined **)0x0;
    }
    ppuStack_12c8 = ppuVar25;
    if (((ulong)ppuVar25 & 1) == 0) {
      if (ppuVar25 == (undefined **)0x0) goto LAB_003bf968;
    }
    else {
      piVar20 = (int *)((long)ppuVar25 + -1);
      do {
        cVar3 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar16) {
          *piVar20 = *piVar20 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar16) {
          *piVar20 = *piVar20 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    param_3 = &ppuStack_1278;
    ppuStack_1278 = ppuVar25;
    FUN_003be608("pollset_work",param_3,
                 "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_poll_posix.cc"
                 ,0x471);
    ppuVar22 = ppuStack_1278;
    if (((ulong)ppuStack_1278 & 1) != 0) {
      FUN_0055293c();
    }
    if (((ulong)ppuVar25 & 1) != 0) {
      FUN_0055293c();
      ppuVar22 = ppuVar25;
    }
  }
LAB_003bf968:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if ((int)param_3 != 0) {
    func_0x0040cf10();
    FUN_0033c494(puStack_12f8);
  }
  ppuVar9 = ppuVar22;
  __Unwind_Resume();
  uVar15 = 0;
  pcStack_1318 = FUN_003c00d0;
  *extraout_x8_00 = 0;
  uStack_1340 = unaff_x22;
  ppuStack_1338 = param_2;
  ppuStack_1330 = ppuVar22;
  pdStack_1328 = unaff_x19;
  puStack_1320 = &stack0xfffffffffffffff0;
  if (param_3 == (undefined ***)0x0) {
    ppuVar25 = &PTR___tlv_bootstrap_00b2c408;
    (*(code *)PTR___tlv_bootstrap_00b2c408)();
    if ((undefined **)*ppuVar25 == ppuVar9) goto LAB_003c0c5c;
    if (((uint)uVar15 >> 1 & 1) != 0) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_poll_posix.cc"
                   ,0x324,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x3c0d38);
      (*pcVar5)();
    }
    ppuVar25 = (undefined **)ppuVar9[10];
    if (ppuVar25 != ppuVar9 + 8) {
      puVar10 = ppuVar25[3];
      *(undefined **)(puVar10 + 0x10) = ppuVar25[2];
      *(undefined **)(ppuVar25[2] + 0x18) = puVar10;
      ppuVar25 = &PTR___tlv_bootstrap_00b2c3f0;
      (*(code *)PTR___tlv_bootstrap_00b2c3f0)();
      puVar19 = extraout_x8_01;
      if ((undefined8 *)*ppuVar25 == extraout_x8_01) {
        extraout_x8_01[2] = extraout_x9;
        extraout_x8_01[3] = ppuVar9[0xb];
        ppuVar9[0xb] = (undefined *)extraout_x8_01;
        *(undefined8 **)(extraout_x8_01[3] + 0x10) = extraout_x8_01;
        puVar19 = (undefined8 *)ppuVar9[10];
        if (puVar19 == extraout_x9) {
          puVar19 = (undefined8 *)0x0;
        }
        else {
          lVar12 = puVar19[3];
          *(undefined8 *)(lVar12 + 0x10) = puVar19[2];
          *(long *)(puVar19[2] + 0x18) = lVar12;
        }
        if (((uVar15 & 1) == 0) && ((undefined8 *)*ppuVar25 == puVar19)) {
          puVar19[2] = extraout_x9;
          puVar19[3] = ppuVar9[0xb];
          ppuVar9[0xb] = (undefined *)puVar19;
          *(undefined8 **)(puVar19[3] + 0x10) = puVar19;
          goto LAB_003c0c5c;
        }
        if (puVar19 == (undefined8 *)0x0) goto LAB_003c0c5c;
      }
      puVar19[2] = extraout_x9;
      puVar19[3] = ppuVar9[0xb];
      ppuVar9[0xb] = (undefined *)puVar19;
      *(undefined8 **)(puVar19[3] + 0x10) = puVar19;
      func_0x003d0a30(&uStack_1368,*puVar19);
      FUN_003c0db0(extraout_x8_00,&uStack_1368);
      if ((uStack_1368 & 1) != 0) {
        FUN_0055293c();
      }
      goto LAB_003c0c5c;
    }
  }
  else {
    if (param_3 != (undefined ***)((long)&MACH_HEADER.magic + 1)) {
      ppuVar9 = &PTR___tlv_bootstrap_00b2c3f0;
      (*(code *)PTR___tlv_bootstrap_00b2c3f0)();
      if ((undefined ***)*ppuVar9 == param_3) {
        if ((uVar15 & 1) != 0) {
          if (((uint)uVar15 >> 1 & 1) != 0) {
            *(undefined4 *)(param_3 + 1) = 1;
          }
          *(undefined4 *)((long)param_3 + 0xc) = 1;
          func_0x003d0a30(&uStack_1360,*param_3);
          FUN_003c0db0(extraout_x8_00,&uStack_1360);
          if ((uStack_1360 & 1) != 0) {
            FUN_0055293c();
          }
        }
      }
      else {
        if (((uint)uVar15 >> 1 & 1) != 0) {
          *(undefined4 *)(param_3 + 1) = 1;
        }
        *(undefined4 *)((long)param_3 + 0xc) = 1;
        func_0x003d0a30(&uStack_1358,*param_3);
        FUN_003c0db0(extraout_x8_00,&uStack_1358);
        if ((uStack_1358 & 1) != 0) {
          FUN_0055293c();
        }
      }
      goto LAB_003c0c5c;
    }
    for (ppuVar25 = (undefined **)ppuVar9[10]; ppuVar25 != ppuVar9 + 8;
        ppuVar25 = (undefined **)ppuVar25[2]) {
      func_0x003d0a30(&uStack_1350,*ppuVar25);
      FUN_003c0db0(extraout_x8_00,&uStack_1350);
      if ((uStack_1350 & 1) != 0) {
        FUN_0055293c();
      }
    }
  }
  *(undefined4 *)(ppuVar9 + 0xd) = 1;
LAB_003c0c5c:
  uVar15 = *extraout_x8_00;
  if ((uVar15 & 1) == 0) {
    if (uVar15 == 0) {
      return;
    }
  }
  else {
    piVar20 = (int *)(uVar15 - 1);
    do {
      cVar3 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(piVar20,0x10);
      if (bVar16) {
        *piVar20 = *piVar20 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      cVar3 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(piVar20,0x10);
      if (bVar16) {
        *piVar20 = *piVar20 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_1348 = uVar15;
  FUN_003be608("pollset_kick_ext",&uStack_1348,
               "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_poll_posix.cc"
               ,0x33e);
  if ((uStack_1348 & 1) != 0) {
    FUN_0055293c();
  }
  if ((uVar15 & 1) != 0) {
    FUN_0055293c(uVar15);
  }
  return;
}



/* Entry: 003c00d0; end: 003c00d7;  */

/* WARNING: Removing unreachable block (ram,0x003c0d00) */

void FUN_003c00d0(ulong *param_1,undefined *param_2,undefined8 *param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined **ppuVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 *extraout_x8;
  int *piVar8;
  undefined8 *extraout_x9;
  undefined8 *puVar9;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  uVar6 = 0;
  *param_1 = 0;
  if (param_3 == (undefined8 *)0x0) {
    ppuVar5 = &PTR___tlv_bootstrap_00b2c408;
    (*(code *)PTR___tlv_bootstrap_00b2c408)();
    if (*ppuVar5 == param_2) goto LAB_003c0c5c;
    if (((uint)uVar6 >> 1 & 1) != 0) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_poll_posix.cc"
                   ,0x324,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x3c0d38);
      (*pcVar4)();
    }
    puVar7 = *(undefined **)(param_2 + 0x50);
    if (puVar7 != param_2 + 0x40) {
      lVar1 = *(long *)(puVar7 + 0x18);
      *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(puVar7 + 0x10);
      *(long *)(*(long *)(puVar7 + 0x10) + 0x18) = lVar1;
      ppuVar5 = &PTR___tlv_bootstrap_00b2c3f0;
      (*(code *)PTR___tlv_bootstrap_00b2c3f0)();
      puVar9 = extraout_x8;
      if ((undefined8 *)*ppuVar5 == extraout_x8) {
        extraout_x8[2] = extraout_x9;
        extraout_x8[3] = *(undefined8 *)(param_2 + 0x58);
        *(undefined8 **)(param_2 + 0x58) = extraout_x8;
        *(undefined8 **)(extraout_x8[3] + 0x10) = extraout_x8;
        puVar9 = *(undefined8 **)(param_2 + 0x50);
        if (puVar9 == extraout_x9) {
          puVar9 = (undefined8 *)0x0;
        }
        else {
          lVar1 = puVar9[3];
          *(undefined8 *)(lVar1 + 0x10) = puVar9[2];
          *(long *)(puVar9[2] + 0x18) = lVar1;
        }
        if (((uVar6 & 1) == 0) && ((undefined8 *)*ppuVar5 == puVar9)) {
          puVar9[2] = extraout_x9;
          puVar9[3] = *(undefined8 *)(param_2 + 0x58);
          *(undefined8 **)(param_2 + 0x58) = puVar9;
          *(undefined8 **)(puVar9[3] + 0x10) = puVar9;
          goto LAB_003c0c5c;
        }
        if (puVar9 == (undefined8 *)0x0) goto LAB_003c0c5c;
      }
      puVar9[2] = extraout_x9;
      puVar9[3] = *(undefined8 *)(param_2 + 0x58);
      *(undefined8 **)(param_2 + 0x58) = puVar9;
      *(undefined8 **)(puVar9[3] + 0x10) = puVar9;
      func_0x003d0a30(&uStack_58,*puVar9);
      FUN_003c0db0(param_1,&uStack_58);
      if ((uStack_58 & 1) != 0) {
        FUN_0055293c();
      }
      goto LAB_003c0c5c;
    }
  }
  else {
    if (param_3 != (undefined8 *)((long)&MACH_HEADER.magic + 1)) {
      ppuVar5 = &PTR___tlv_bootstrap_00b2c3f0;
      (*(code *)PTR___tlv_bootstrap_00b2c3f0)();
      if ((undefined8 *)*ppuVar5 == param_3) {
        if ((uVar6 & 1) != 0) {
          if (((uint)uVar6 >> 1 & 1) != 0) {
            *(undefined4 *)(param_3 + 1) = 1;
          }
          *(undefined4 *)((long)param_3 + 0xc) = 1;
          func_0x003d0a30(&uStack_50,*param_3);
          FUN_003c0db0(param_1,&uStack_50);
          if ((uStack_50 & 1) != 0) {
            FUN_0055293c();
          }
        }
      }
      else {
        if (((uint)uVar6 >> 1 & 1) != 0) {
          *(undefined4 *)(param_3 + 1) = 1;
        }
        *(undefined4 *)((long)param_3 + 0xc) = 1;
        func_0x003d0a30(&uStack_48,*param_3);
        FUN_003c0db0(param_1,&uStack_48);
        if ((uStack_48 & 1) != 0) {
          FUN_0055293c();
        }
      }
      goto LAB_003c0c5c;
    }
    for (puVar9 = *(undefined8 **)(param_2 + 0x50); puVar9 != (undefined8 *)(param_2 + 0x40);
        puVar9 = (undefined8 *)puVar9[2]) {
      func_0x003d0a30(&uStack_40,*puVar9);
      FUN_003c0db0(param_1,&uStack_40);
      if ((uStack_40 & 1) != 0) {
        FUN_0055293c();
      }
    }
  }
  *(undefined4 *)(param_2 + 0x68) = 1;
LAB_003c0c5c:
  uVar6 = *param_1;
  if ((uVar6 & 1) == 0) {
    if (uVar6 == 0) {
      return;
    }
  }
  else {
    piVar8 = (int *)(uVar6 - 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar3) {
        *piVar8 = *piVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar3) {
        *piVar8 = *piVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_38 = uVar6;
  FUN_003be608("pollset_kick_ext",&uStack_38,
               "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_poll_posix.cc"
               ,0x33e);
  if ((uStack_38 & 1) != 0) {
    FUN_0055293c();
  }
  if ((uVar6 & 1) != 0) {
    FUN_0055293c(uVar6);
  }
  return;
}



/* Entry: 003c00d8; end: 003c01af;  */

void FUN_003c00d8(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uStack_28;
  
  func_0x00339d8c();
  lVar3 = *(long *)(param_1 + 0x80);
  if (lVar3 != 0) {
    plVar4 = *(long **)(param_1 + 0x90);
    lVar2 = lVar3;
    do {
      if (*plVar4 == param_2) goto LAB_003c0194;
      plVar4 = plVar4 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  if (lVar3 == *(long *)(param_1 + 0x88)) {
    uVar1 = lVar3 + 8U;
    if (lVar3 + 8U <= (ulong)(lVar3 * 3) >> 1) {
      uVar1 = (ulong)(lVar3 * 3) >> 1;
    }
    *(ulong *)(param_1 + 0x88) = uVar1;
    lVar2 = *(long *)(param_1 + 0x90);
    FUN_00338cbc(lVar2,uVar1 << 3);
    *(long *)(param_1 + 0x90) = lVar2;
    lVar3 = *(long *)(param_1 + 0x80);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x90);
  }
  *(long *)(param_1 + 0x80) = lVar3 + 1;
  *(long *)(lVar2 + lVar3 * 8) = param_2;
  FUN_003c08e0(param_2,2);
  FUN_003c0a60(&uStack_28,param_1,0,0);
  if ((uStack_28 & 1) != 0) {
    FUN_0055293c();
  }
LAB_003c0194:
  func_0x00339da8(param_1);
  return;
}



/* Entry: 003c01b0; end: 003c01db;  */

undefined8 FUN_003c01b0(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x88;
  func_0x00338c94(0x88);
  FUN_00339d50();
  return uVar1;
}



/* Entry: 003c01dc; end: 003c03cf;  */

void FUN_003c01dc(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  func_0x00339d70();
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar2 = 0;
    do {
      FUN_003c0988(*(undefined8 *)(*(long *)(param_1 + 0x80) + uVar2 * 8));
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ulong *)(param_1 + 0x70));
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar2 = 0;
    do {
      lVar3 = *(long *)(*(long *)(param_1 + 0x50) + uVar2 * 8);
      func_0x00339d8c(lVar3);
      iVar1 = *(int *)(lVar3 + 0x78) + -1;
      *(int *)(lVar3 + 0x78) = iVar1;
      if (((*(int *)(lVar3 + 0x60) == 0) || (*(int *)(lVar3 + 100) != 0)) ||
         (*(long *)(lVar3 + 0x50) != lVar3 + 0x40 || iVar1 != 0)) {
        func_0x00339da8(lVar3);
      }
      else {
        *(undefined4 *)(lVar3 + 100) = 1;
        func_0x00339da8(lVar3);
        FUN_003c12dc(lVar3);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ulong *)(param_1 + 0x40));
  }
  FUN_00338cb8(*(undefined8 *)(param_1 + 0x50));
  FUN_00338cb8(*(undefined8 *)(param_1 + 0x68));
  FUN_00338cb8(*(undefined8 *)(param_1 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(param_1);
  return;
}



/* Entry: 003c03d0; end: 003c049b;  */

/* WARNING: Possible PIC construction at 0x003c0430: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003c0488: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x003c0434) */
/* WARNING: Removing unreachable block (ram,0x003c0450) */
/* WARNING: Removing unreachable block (ram,0x003c0468) */
/* WARNING: Removing unreachable block (ram,0x003c0478) */
/* WARNING: Removing unreachable block (ram,0x003c047c) */
/* WARNING: Removing unreachable block (ram,0x003c0458) */
/* WARNING: Removing unreachable block (ram,0x003c048c) */
/* WARNING: Removing unreachable block (ram,0x003c12dc) */
/* WARNING: Removing unreachable block (ram,0x003c12f8) */
/* WARNING: Removing unreachable block (ram,0x003c12fc) */
/* WARNING: Removing unreachable block (ram,0x003c1318) */
/* WARNING: Removing unreachable block (ram,0x003c1338) */
/* WARNING: Removing unreachable block (ram,0x003c133c) */
/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_003c03d0(byte *param_1,byte *param_2,undefined8 param_3,byte *param_4)

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
  long lVar14;
  undefined8 *puVar15;
  uint uVar16;
  byte *pbVar17;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *apbStack_2d8 [2];
  char cStack_2c1;
  undefined1 auStack_2c0 [56];
  undefined8 uStack_288;
  undefined7 uStack_280;
  undefined1 uStack_279;
  undefined7 uStack_278;
  undefined1 uStack_271;
  ulong auStack_238 [2];
  undefined7 *puStack_228;
  ulong uStack_220;
  ulong uStack_218;
  undefined8 uStack_210;
  ulong uStack_208;
  code *pcStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  byte *pbStack_1d0;
  byte *pbStack_1c8;
  byte *pbStack_1c0;
  byte *pbStack_1b8;
  byte *pbStack_1b0;
  undefined8 uStack_1a8;
  undefined1 **ppuStack_1a0;
  code *pcStack_198;
  undefined1 **ppuStack_190;
  byte abStack_188 [64];
  long lStack_148;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined1 *puStack_100;
  undefined8 uStack_f8;
  undefined1 *puStack_f0;
  undefined8 uStack_e8;
  undefined1 **ppuStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  byte abStack_78 [16];
  long lStack_68;
  byte *pbStack_60;
  byte *pbStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  pbVar7 = param_2;
  func_0x00339d8c();
  lVar14 = *(long *)(param_1 + 0x40);
  if (lVar14 != 0) {
    puVar15 = *(undefined8 **)(param_1 + 0x50);
    puVar4 = puVar15;
    lVar3 = lVar14;
    do {
      if ((byte *)*puVar4 == param_2) {
        lVar14 = lVar14 + -1;
        *(long *)(param_1 + 0x40) = lVar14;
        *puVar4 = puVar15[lVar14];
        puVar15[lVar14] = param_2;
        break;
      }
      puVar4 = puVar4 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  uStack_28 = 0x3c0434;
  pbVar8 = param_1;
  puStack_30 = &stack0xfffffffffffffff0;
  _pthread_mutex_unlock();
  if ((int)pbVar8 == 0) {
    return pbVar8;
  }
  func_0x00770db4();
  uStack_38 = 0x339dc4;
  puStack_40 = (undefined1 *)&puStack_30;
  _pthread_mutex_trylock();
  if (((uint)pbVar8 | 0x10) == 0x10) {
    return (byte *)(ulong)((uint)pbVar8 == 0);
  }
  func_0x00770de8();
  pcStack_48 = FUN_00339df0;
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar17 = abStack_78;
  pbStack_60 = param_1;
  pbStack_58 = param_2;
  puStack_50 = (undefined1 *)&puStack_40;
  _pthread_condattr_init();
  if ((int)pbVar17 == 0) {
    pbVar7 = abStack_78;
    _pthread_cond_init();
    if ((int)pbVar8 != 0) goto LAB_00339e5c;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
      return pbVar8;
    }
  }
  else {
    func_0x00770e50();
    pbVar8 = pbVar17;
LAB_00339e5c:
    func_0x00770e1c();
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_00339e64;
  ppuStack_90 = &puStack_50;
  _pthread_cond_destroy();
  if ((int)pbVar8 == 0) {
    return pbVar8;
  }
  func_0x00770e84();
  pcStack_98 = FUN_00339e80;
  uVar9 = (ulong)param_4 >> 0x20;
  pbVar17 = pbVar7;
  puStack_a0 = (undefined1 *)&ppuStack_90;
  func_0x0033a068(uVar9);
  uVar2 = param_3;
  FUN_00339fc4(param_3,param_4,uVar9);
  if ((int)uVar2 == 0) {
    _pthread_cond_wait();
  }
  else {
    FUN_0033a30c(param_3,param_4,1);
    uVar9 = (ulong)param_4 >> 0x20;
    pbVar17 = param_4;
    FUN_0033a598(uVar9);
    FUN_0033a01c(param_3,param_4,uVar9);
    lStack_c8 = (long)(int)param_4;
    uStack_d0 = param_3;
    _pthread_cond_timedwait(pbVar8,pbVar7,&uStack_d0);
  }
  if (((uint)pbVar8 < 0x3d) && ((1L << ((ulong)pbVar8 & 0x3f) & 0x1000000800000001U) != 0)) {
    return (byte *)(ulong)((uint)pbVar8 == 0x3c);
  }
  func_0x00770eb8();
  pcStack_d8 = FUN_00339f68;
  ppuStack_e0 = &puStack_a0;
  _pthread_cond_signal();
  if ((int)pbVar8 == 0) {
    return pbVar8;
  }
  func_0x00770eec();
  uStack_e8 = 0x339f84;
  puStack_f0 = (undefined1 *)&ppuStack_e0;
  _pthread_cond_broadcast();
  if ((int)pbVar8 == 0) {
    return pbVar8;
  }
  func_0x00770f20();
  uStack_f8 = 0x339fa0;
  puStack_100 = (undefined1 *)&puStack_f0;
  _pthread_once();
  if ((int)pbVar8 == 0) {
    return pbVar8;
  }
  func_0x00770f54();
  pcStack_108 = FUN_00339fbc;
  lStack_148 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar1 = (byte *)((long)&MACH_HEADER.magic + 2);
  pbVar10 = pbVar7;
  puStack_110 = (undefined1 *)&puStack_100;
  FUN_00338e58();
  if ((int)pbVar1 != 0) {
    ppuStack_190 = &puStack_100;
    pbVar1 = abStack_188;
    _vsnprintf(pbVar1,0x40,pbVar17,&puStack_100);
    if ((int)(uint)pbVar1 < 0) {
      unaff_x23 = (byte *)0x0;
      pbVar17 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar1;
      if ((uint)pbVar1 < 0x40) {
        pbVar17 = (byte *)0x0;
        unaff_x23 = abStack_188;
      }
      else {
        pbVar17 = (byte *)(((ulong)pbVar1 & 0xffffffff) + 1);
        FUN_00338c74();
        ppuStack_190 = &puStack_100;
        _vsnprintf();
        unaff_x23 = pbVar17;
      }
    }
    pbVar10 = pbVar7;
    FUN_00338e80(pbVar8,pbVar7,2,unaff_x23);
    pbVar1 = pbVar17;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_148) {
    return pbVar1;
  }
  ___stack_chk_fail();
  uStack_1a8 = 2;
  pcStack_198 = FUN_00339178;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = 1;
  pbStack_1d0 = unaff_x24;
  pbStack_1c8 = unaff_x23;
  pbStack_1c0 = pbVar17;
  pbStack_1b8 = pbVar8;
  pbStack_1b0 = pbVar7;
  ppuStack_1a0 = &puStack_110;
  FUN_0033a598();
  lVar14 = *(long *)pbVar1;
  lVar3 = lVar14;
  uStack_288 = uVar2;
  _strrchr(lVar14,0x2f);
  if (lVar3 != 0) {
    lVar14 = lVar3 + 1;
  }
  puVar4 = &uStack_288;
  _localtime_r(puVar4,auStack_2c0);
  if (puVar4 == (undefined8 *)0x0) {
    uStack_278 = 0x656d69746c6163;
    uStack_271 = 0;
    uStack_280 = 0x6c3a726f727265;
    uStack_279 = 0x6f;
  }
  else {
    puVar5 = &uStack_280;
    _strftime(puVar5,0x40,"%m%d %H:%M:%S",auStack_2c0);
    if (puVar5 == (undefined7 *)0x0) {
      uStack_280 = 0x733a726f727265;
      uStack_279 = 0x74;
      uStack_278 = 0x656d69746672;
    }
  }
  uVar6 = (ulong)*(uint *)(pbVar1 + 0xc);
  func_0x00338e1c();
  uVar9 = uVar6;
  _pthread_self();
  auStack_238[1] = 0x560e98;
  puStack_228 = &uStack_280;
  uStack_220 = 0x560e98;
  uStack_218 = (ulong)pbVar10 & 0xffffffff;
  uStack_210 = 0x5606ac;
  pcStack_200 = FUN_00560738;
  uStack_1f0 = 0x560e98;
  uStack_1e8 = (ulong)*(uint *)(pbVar1 + 8);
  uStack_1e0 = 0x5606ac;
  puVar13 = auStack_238;
  auStack_238[0] = uVar6;
  uStack_208 = uVar9;
  lStack_1f8 = lVar14;
  FUN_0056189c(apbStack_2d8,"%s%s.%09d %7ld %s:%d]",0x15,puVar13,6);
  uVar12 = *(uint *)(pbVar1 + 0xc);
  func_0x00338e6c();
  if (uVar12 == 0) {
    auStack_238[0] = auStack_238[0] & 0xffffffffffffff00;
    uStack_220 = uStack_220 & 0xffffffffffffff00;
LAB_00339300:
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar11 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_238);
    if ((char)uStack_220 == '\0') goto LAB_00339300;
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar11 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_2c1 < '\0') {
    pbVar7 = apbStack_2d8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1d8) {
    return pbVar7;
  }
  ___stack_chk_fail();
  if (cStack_2c1 < '\0') {
    __ZdlPv(apbStack_2d8[0]);
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
  uVar16 = 0;
  uVar9 = (ulong)pcVar11 & 3;
  if (uVar9 != 1) {
    if (uVar9 != 2) {
      if (uVar9 != 3) goto LAB_00339464;
      uVar16 = (uint)pbVar7[2] << 0x10;
    }
    uVar16 = uVar16 | (uint)pbVar7[1] << 8;
  }
  uVar12 = ((uVar16 ^ *pbVar7) * 0x16a88000 | (uVar16 ^ *pbVar7) * -0x3361d2af >> 0x11) * 0x1b873593
           ^ uVar12;
LAB_00339464:
  uVar12 = uVar12 ^ (uint)pcVar11;
  uVar12 = (uVar12 ^ uVar12 >> 0x10) * -0x7a143595;
  uVar12 = (uVar12 ^ uVar12 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar12 ^ uVar12 >> 0x10);
}



/* Entry: 003c049c; end: 003c057f;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_003c049c(byte *param_1,byte *param_2,undefined8 param_3,byte *param_4)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined7 *puVar4;
  ulong uVar5;
  byte *pbVar6;
  long lVar7;
  byte *pbVar8;
  char *pcVar9;
  byte *pbVar10;
  uint uVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
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
  byte *pbStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  byte abStack_58 [16];
  long lStack_48;
  
  pbVar10 = param_2;
  func_0x00339d8c();
  lVar14 = *(long *)(param_1 + 0x58);
  if (lVar14 == *(long *)(param_1 + 0x60)) {
    uVar13 = lVar14 * 2;
    if (uVar13 < 9) {
      uVar13 = 8;
    }
    *(ulong *)(param_1 + 0x60) = uVar13;
    lVar7 = *(long *)(param_1 + 0x68);
    pbVar10 = (byte *)(uVar13 << 3);
    FUN_00338cbc();
    *(long *)(param_1 + 0x68) = lVar7;
    lVar14 = *(long *)(param_1 + 0x58);
  }
  else {
    lVar7 = *(long *)(param_1 + 0x68);
  }
  *(long *)(param_1 + 0x58) = lVar14 + 1;
  *(byte **)(lVar7 + lVar14 * 8) = param_2;
  if (*(long *)(param_1 + 0x70) == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = 0;
    uVar13 = 0;
    do {
      pbVar10 = *(byte **)(*(long *)(param_1 + 0x80) + uVar13 * 8);
      if ((*(ulong *)(*(long *)(*(long *)(param_1 + 0x80) + uVar13 * 8) + 8) & 1) == 0) {
        FUN_003c0988(pbVar10);
      }
      else {
        FUN_003c05ec(param_2);
        *(undefined8 *)(*(long *)(param_1 + 0x80) + lVar14 * 8) =
             *(undefined8 *)(*(long *)(param_1 + 0x80) + uVar13 * 8);
        lVar14 = lVar14 + 1;
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < *(ulong *)(param_1 + 0x70));
  }
  *(long *)(param_1 + 0x70) = lVar14;
  _pthread_mutex_unlock();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x00770db4();
  _pthread_mutex_trylock();
  if (((uint)param_1 | 0x10) == 0x10) {
    return (byte *)(ulong)((uint)param_1 == 0);
  }
  func_0x00770de8();
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar6 = abStack_58;
  _pthread_condattr_init();
  if ((int)pbVar6 == 0) {
    pbVar10 = abStack_58;
    pbVar6 = param_1;
    _pthread_cond_init();
    if ((int)pbVar6 != 0) goto LAB_00339e5c;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
      return pbVar6;
    }
  }
  else {
    func_0x00770e50();
LAB_00339e5c:
    func_0x00770e1c();
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_00339e64;
  puStack_70 = &stack0xffffffffffffffd0;
  _pthread_cond_destroy();
  if ((int)pbVar6 == 0) {
    return pbVar6;
  }
  func_0x00770e84();
  pcStack_78 = FUN_00339e80;
  uVar13 = (ulong)param_4 >> 0x20;
  pbVar16 = pbVar10;
  pbStack_88 = param_1;
  puStack_80 = (undefined1 *)&puStack_70;
  func_0x0033a068(uVar13);
  uVar2 = param_3;
  FUN_00339fc4(param_3,param_4,uVar13);
  if ((int)uVar2 == 0) {
    _pthread_cond_wait();
  }
  else {
    FUN_0033a30c(param_3,param_4,1);
    uVar13 = (ulong)param_4 >> 0x20;
    pbVar16 = param_4;
    FUN_0033a598(uVar13);
    FUN_0033a01c(param_3,param_4,uVar13);
    lStack_a8 = (long)(int)param_4;
    uStack_b0 = param_3;
    _pthread_cond_timedwait(pbVar6,pbVar10,&uStack_b0);
  }
  if (((uint)pbVar6 < 0x3d) && ((1L << ((ulong)pbVar6 & 0x3f) & 0x1000000800000001U) != 0)) {
    return (byte *)(ulong)((uint)pbVar6 == 0x3c);
  }
  func_0x00770eb8();
  pcStack_b8 = FUN_00339f68;
  ppuStack_c0 = &puStack_80;
  _pthread_cond_signal();
  if ((int)pbVar6 == 0) {
    return pbVar6;
  }
  func_0x00770eec();
  uStack_c8 = 0x339f84;
  puStack_d0 = (undefined1 *)&ppuStack_c0;
  _pthread_cond_broadcast();
  if ((int)pbVar6 == 0) {
    return pbVar6;
  }
  func_0x00770f20();
  uStack_d8 = 0x339fa0;
  puStack_e0 = (undefined1 *)&puStack_d0;
  _pthread_once();
  if ((int)pbVar6 == 0) {
    return pbVar6;
  }
  func_0x00770f54();
  pcStack_e8 = FUN_00339fbc;
  lStack_128 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar1 = (byte *)((long)&MACH_HEADER.magic + 2);
  pbVar8 = pbVar10;
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
    pbVar8 = pbVar10;
    FUN_00338e80(pbVar6,pbVar10,2,unaff_x23);
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
  pbStack_198 = pbVar6;
  pbStack_190 = pbVar10;
  ppuStack_180 = &puStack_f0;
  FUN_0033a598();
  lVar14 = *(long *)pbVar1;
  lVar7 = lVar14;
  uStack_268 = uVar2;
  _strrchr(lVar14,0x2f);
  if (lVar7 != 0) {
    lVar14 = lVar7 + 1;
  }
  puVar3 = &uStack_268;
  _localtime_r(puVar3,auStack_2a0);
  if (puVar3 == (undefined8 *)0x0) {
    uStack_258 = 0x656d69746c6163;
    uStack_251 = 0;
    uStack_260 = 0x6c3a726f727265;
    uStack_259 = 0x6f;
  }
  else {
    puVar4 = &uStack_260;
    _strftime(puVar4,0x40,"%m%d %H:%M:%S",auStack_2a0);
    if (puVar4 == (undefined7 *)0x0) {
      uStack_260 = 0x733a726f727265;
      uStack_259 = 0x74;
      uStack_258 = 0x656d69746672;
    }
  }
  uVar5 = (ulong)*(uint *)(pbVar1 + 0xc);
  func_0x00338e1c();
  uVar13 = uVar5;
  _pthread_self();
  auStack_218[1] = 0x560e98;
  puStack_208 = &uStack_260;
  uStack_200 = 0x560e98;
  uStack_1f8 = (ulong)pbVar8 & 0xffffffff;
  uStack_1f0 = 0x5606ac;
  pcStack_1e0 = FUN_00560738;
  uStack_1d0 = 0x560e98;
  uStack_1c8 = (ulong)*(uint *)(pbVar1 + 8);
  uStack_1c0 = 0x5606ac;
  puVar12 = auStack_218;
  auStack_218[0] = uVar5;
  uStack_1e8 = uVar13;
  lStack_1d8 = lVar14;
  FUN_0056189c(apbStack_2b8,"%s%s.%09d %7ld %s:%d]",0x15,puVar12,6);
  uVar11 = *(uint *)(pbVar1 + 0xc);
  func_0x00338e6c();
  if (uVar11 == 0) {
    auStack_218[0] = auStack_218[0] & 0xffffffffffffff00;
    uStack_200 = uStack_200 & 0xffffffffffffff00;
LAB_00339300:
    pbVar10 = *(byte **)PTR____stderrp_00999f90;
    pcVar9 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_218);
    if ((char)uStack_200 == '\0') goto LAB_00339300;
    pbVar10 = *(byte **)PTR____stderrp_00999f90;
    pcVar9 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_2a1 < '\0') {
    pbVar10 = apbStack_2b8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1b8) {
    return pbVar10;
  }
  ___stack_chk_fail();
  if (cStack_2a1 < '\0') {
    __ZdlPv(apbStack_2b8[0]);
  }
  __Unwind_Resume();
  uVar11 = (uint)puVar12;
  if ((char *)0x3 < pcVar9) {
    uVar13 = (ulong)pcVar9 >> 2;
    pbVar6 = pbVar10;
    do {
      uVar11 = (*(int *)pbVar6 * 0x16a88000 | (uint)(*(int *)pbVar6 * -0x3361d2af) >> 0x11) *
               0x1b873593 ^ (uint)puVar12;
      uVar11 = (uVar11 >> 0x13 | uVar11 << 0xd) * 5 + 0xe6546b64;
      puVar12 = (ulong *)(ulong)uVar11;
      uVar13 = uVar13 - 1;
      pbVar6 = pbVar6 + 4;
    } while (uVar13 != 0);
    pbVar10 = pbVar10 + ((ulong)pcVar9 & 0xfffffffffffffffc);
  }
  uVar15 = 0;
  uVar13 = (ulong)pcVar9 & 3;
  if (uVar13 != 1) {
    if (uVar13 != 2) {
      if (uVar13 != 3) goto LAB_00339464;
      uVar15 = (uint)pbVar10[2] << 0x10;
    }
    uVar15 = uVar15 | (uint)pbVar10[1] << 8;
  }
  uVar11 = ((uVar15 ^ *pbVar10) * 0x16a88000 | (uVar15 ^ *pbVar10) * -0x3361d2af >> 0x11) *
           0x1b873593 ^ uVar11;
LAB_00339464:
  uVar11 = uVar11 ^ (uint)pcVar9;
  uVar11 = (uVar11 ^ uVar11 >> 0x10) * -0x7a143595;
  uVar11 = (uVar11 ^ uVar11 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar11 ^ uVar11 >> 0x10);
}



/* Entry: 003c0580; end: 003c05eb;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_003c0580(byte *param_1,byte *param_2,undefined8 param_3,byte *param_4)

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
  long lVar13;
  undefined8 *puVar14;
  uint uVar15;
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
  func_0x00339d8c();
  lVar13 = *(long *)(param_1 + 0x58);
  if (lVar13 != 0) {
    puVar14 = *(undefined8 **)(param_1 + 0x68);
    puVar4 = puVar14;
    lVar3 = lVar13;
    do {
      if ((byte *)*puVar4 == param_2) {
        lVar13 = lVar13 + -1;
        *(long *)(param_1 + 0x58) = lVar13;
        *puVar4 = puVar14[lVar13];
        puVar14[lVar13] = param_2;
        break;
      }
      puVar4 = puVar4 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  _pthread_mutex_unlock();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x00770db4();
  _pthread_mutex_trylock();
  if (((uint)param_1 | 0x10) == 0x10) {
    return (byte *)(ulong)((uint)param_1 == 0);
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
    if ((int)param_1 != 0) goto LAB_00339e5c;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
      return param_1;
    }
  }
  else {
    func_0x00770e50();
    param_1 = pbVar16;
LAB_00339e5c:
    func_0x00770e1c();
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_00339e64;
  ppuStack_70 = &puStack_30;
  _pthread_cond_destroy();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x00770e84();
  pcStack_78 = FUN_00339e80;
  uVar8 = (ulong)param_4 >> 0x20;
  pbVar16 = pbVar7;
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
    _pthread_cond_timedwait(param_1,pbVar7,&uStack_b0);
  }
  if (((uint)param_1 < 0x3d) && ((1L << ((ulong)param_1 & 0x3f) & 0x1000000800000001U) != 0)) {
    return (byte *)(ulong)((uint)param_1 == 0x3c);
  }
  func_0x00770eb8();
  pcStack_b8 = FUN_00339f68;
  ppuStack_c0 = &puStack_80;
  _pthread_cond_signal();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x00770eec();
  uStack_c8 = 0x339f84;
  puStack_d0 = (undefined1 *)&ppuStack_c0;
  _pthread_cond_broadcast();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x00770f20();
  uStack_d8 = 0x339fa0;
  puStack_e0 = (undefined1 *)&puStack_d0;
  _pthread_once();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x00770f54();
  pcStack_e8 = FUN_00339fbc;
  lStack_128 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar1 = (byte *)((long)&MACH_HEADER.magic + 2);
  pbVar9 = pbVar7;
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
    pbVar9 = pbVar7;
    FUN_00338e80(param_1,pbVar7,2,unaff_x23);
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
  pbStack_198 = param_1;
  pbStack_190 = pbVar7;
  ppuStack_180 = &puStack_f0;
  FUN_0033a598();
  lVar13 = *(long *)pbVar1;
  lVar3 = lVar13;
  uStack_268 = uVar2;
  _strrchr(lVar13,0x2f);
  if (lVar3 != 0) {
    lVar13 = lVar3 + 1;
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
  lStack_1d8 = lVar13;
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
  uVar15 = 0;
  uVar8 = (ulong)pcVar10 & 3;
  if (uVar8 != 1) {
    if (uVar8 != 2) {
      if (uVar8 != 3) goto LAB_00339464;
      uVar15 = (uint)pbVar7[2] << 0x10;
    }
    uVar15 = uVar15 | (uint)pbVar7[1] << 8;
  }
  uVar11 = ((uVar15 ^ *pbVar7) * 0x16a88000 | (uVar15 ^ *pbVar7) * -0x3361d2af >> 0x11) * 0x1b873593
           ^ uVar11;
LAB_00339464:
  uVar11 = uVar11 ^ (uint)pcVar10;
  uVar11 = (uVar11 ^ uVar11 >> 0x10) * -0x7a143595;
  uVar11 = (uVar11 ^ uVar11 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar11 ^ uVar11 >> 0x10);
}



/* Entry: 003c05ec; end: 003c076b;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_003c05ec(byte *param_1,byte *param_2,undefined8 param_3,byte *param_4)

{
  byte *pbVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined7 *puVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined8 uVar8;
  byte *pbVar9;
  char *pcVar10;
  uint uVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
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
  byte *pbStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  byte abStack_58 [16];
  long lStack_48;
  
  func_0x00339d8c();
  if (*(long *)(param_1 + 0x70) == *(long *)(param_1 + 0x78)) {
    uVar13 = *(long *)(param_1 + 0x70) * 2;
    if (uVar13 < 9) {
      uVar13 = 8;
    }
    *(ulong *)(param_1 + 0x78) = uVar13;
    uVar8 = *(undefined8 *)(param_1 + 0x80);
    FUN_00338cbc(uVar8,uVar13 << 3);
    *(undefined8 *)(param_1 + 0x80) = uVar8;
  }
  pbVar6 = (byte *)((long)&MACH_HEADER.magic + 2);
  FUN_003c08e0(param_2);
  lVar14 = *(long *)(param_1 + 0x70);
  *(long *)(param_1 + 0x70) = lVar14 + 1;
  *(byte **)(*(long *)(param_1 + 0x80) + lVar14 * 8) = param_2;
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar13 = 0;
    do {
      pbVar6 = param_2;
      FUN_003c00d8(*(undefined8 *)(*(long *)(param_1 + 0x50) + uVar13 * 8));
      uVar13 = uVar13 + 1;
    } while (uVar13 < *(ulong *)(param_1 + 0x40));
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    uVar13 = 0;
    do {
      pbVar6 = param_2;
      FUN_003c05ec(*(undefined8 *)(*(long *)(param_1 + 0x68) + uVar13 * 8));
      uVar13 = uVar13 + 1;
    } while (uVar13 < *(ulong *)(param_1 + 0x58));
  }
  _pthread_mutex_unlock();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x00770db4();
  _pthread_mutex_trylock();
  if (((uint)param_1 | 0x10) == 0x10) {
    return (byte *)(ulong)((uint)param_1 == 0);
  }
  func_0x00770de8();
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar7 = abStack_58;
  _pthread_condattr_init();
  if ((int)pbVar7 == 0) {
    pbVar6 = abStack_58;
    pbVar7 = param_1;
    _pthread_cond_init();
    if ((int)pbVar7 != 0) goto LAB_00339e5c;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
      return pbVar7;
    }
  }
  else {
    func_0x00770e50();
LAB_00339e5c:
    func_0x00770e1c();
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_00339e64;
  puStack_70 = &stack0xffffffffffffffd0;
  _pthread_cond_destroy();
  if ((int)pbVar7 == 0) {
    return pbVar7;
  }
  func_0x00770e84();
  pcStack_78 = FUN_00339e80;
  uVar13 = (ulong)param_4 >> 0x20;
  pbVar16 = pbVar6;
  pbStack_88 = param_1;
  puStack_80 = (undefined1 *)&puStack_70;
  func_0x0033a068(uVar13);
  uVar8 = param_3;
  FUN_00339fc4(param_3,param_4,uVar13);
  if ((int)uVar8 == 0) {
    _pthread_cond_wait();
  }
  else {
    FUN_0033a30c(param_3,param_4,1);
    uVar13 = (ulong)param_4 >> 0x20;
    pbVar16 = param_4;
    FUN_0033a598(uVar13);
    FUN_0033a01c(param_3,param_4,uVar13);
    lStack_a8 = (long)(int)param_4;
    uStack_b0 = param_3;
    _pthread_cond_timedwait(pbVar7,pbVar6,&uStack_b0);
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
  pbVar9 = pbVar6;
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
    pbVar9 = pbVar6;
    FUN_00338e80(pbVar7,pbVar6,2,unaff_x23);
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
  uVar8 = 1;
  pbStack_1b0 = unaff_x24;
  pbStack_1a8 = unaff_x23;
  pbStack_1a0 = pbVar16;
  pbStack_198 = pbVar7;
  pbStack_190 = pbVar6;
  ppuStack_180 = &puStack_f0;
  FUN_0033a598();
  lVar14 = *(long *)pbVar1;
  lVar2 = lVar14;
  uStack_268 = uVar8;
  _strrchr(lVar14,0x2f);
  if (lVar2 != 0) {
    lVar14 = lVar2 + 1;
  }
  puVar3 = &uStack_268;
  _localtime_r(puVar3,auStack_2a0);
  if (puVar3 == (undefined8 *)0x0) {
    uStack_258 = 0x656d69746c6163;
    uStack_251 = 0;
    uStack_260 = 0x6c3a726f727265;
    uStack_259 = 0x6f;
  }
  else {
    puVar4 = &uStack_260;
    _strftime(puVar4,0x40,"%m%d %H:%M:%S",auStack_2a0);
    if (puVar4 == (undefined7 *)0x0) {
      uStack_260 = 0x733a726f727265;
      uStack_259 = 0x74;
      uStack_258 = 0x656d69746672;
    }
  }
  uVar5 = (ulong)*(uint *)(pbVar1 + 0xc);
  func_0x00338e1c();
  uVar13 = uVar5;
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
  auStack_218[0] = uVar5;
  uStack_1e8 = uVar13;
  lStack_1d8 = lVar14;
  FUN_0056189c(apbStack_2b8,"%s%s.%09d %7ld %s:%d]",0x15,puVar12,6);
  uVar11 = *(uint *)(pbVar1 + 0xc);
  func_0x00338e6c();
  if (uVar11 == 0) {
    auStack_218[0] = auStack_218[0] & 0xffffffffffffff00;
    uStack_200 = uStack_200 & 0xffffffffffffff00;
LAB_00339300:
    pbVar6 = *(byte **)PTR____stderrp_00999f90;
    pcVar10 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_218);
    if ((char)uStack_200 == '\0') goto LAB_00339300;
    pbVar6 = *(byte **)PTR____stderrp_00999f90;
    pcVar10 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_2a1 < '\0') {
    pbVar6 = apbStack_2b8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1b8) {
    return pbVar6;
  }
  ___stack_chk_fail();
  if (cStack_2a1 < '\0') {
    __ZdlPv(apbStack_2b8[0]);
  }
  __Unwind_Resume();
  uVar11 = (uint)puVar12;
  if ((char *)0x3 < pcVar10) {
    uVar13 = (ulong)pcVar10 >> 2;
    pbVar7 = pbVar6;
    do {
      uVar11 = (*(int *)pbVar7 * 0x16a88000 | (uint)(*(int *)pbVar7 * -0x3361d2af) >> 0x11) *
               0x1b873593 ^ (uint)puVar12;
      uVar11 = (uVar11 >> 0x13 | uVar11 << 0xd) * 5 + 0xe6546b64;
      puVar12 = (ulong *)(ulong)uVar11;
      uVar13 = uVar13 - 1;
      pbVar7 = pbVar7 + 4;
    } while (uVar13 != 0);
    pbVar6 = pbVar6 + ((ulong)pcVar10 & 0xfffffffffffffffc);
  }
  uVar15 = 0;
  uVar13 = (ulong)pcVar10 & 3;
  if (uVar13 != 1) {
    if (uVar13 != 2) {
      if (uVar13 != 3) goto LAB_00339464;
      uVar15 = (uint)pbVar6[2] << 0x10;
    }
    uVar15 = uVar15 | (uint)pbVar6[1] << 8;
  }
  uVar11 = ((uVar15 ^ *pbVar6) * 0x16a88000 | (uVar15 ^ *pbVar6) * -0x3361d2af >> 0x11) * 0x1b873593
           ^ uVar11;
LAB_00339464:
  uVar11 = uVar11 ^ (uint)pcVar10;
  uVar11 = (uVar11 ^ uVar11 >> 0x10) * -0x7a143595;
  uVar11 = (uVar11 ^ uVar11 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar11 ^ uVar11 >> 0x10);
}



/* Entry: 003c076c; end: 003c0773;  */

undefined8 FUN_003c076c(void)

{
  return 0;
}



/* Entry: 003c0774; end: 003c07eb;  */

bool FUN_003c0774(int param_1)

{
  int iVar1;
  
  func_0x003d09fc();
  if (param_1 == 0) {
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_poll_posix.cc"
                 ,0x579,2,"Skipping poll because of no wakeup fd.");
  }
  else {
    iVar1 = param_1;
    FUN_0033a930();
    if (iVar1 != 0) {
      uRam0000000000b5e8c0 = 1;
      FUN_00339d50(0xb5e8c8);
      func_0x0033aa18(FUN_003c166c);
    }
  }
  return param_1 != 0;
}



/* Entry: 003c07ec; end: 003c07ff;  */

void FUN_003c07ec(void)

{
  return;
}



/* Entry: 003c0800; end: 003c088f;  */

undefined8 FUN_003c0800(undefined8 param_1)

{
  int iVar1;
  
  if ((int)param_1 != 0) {
    func_0x003d09fc();
    iVar1 = (int)param_1;
    if (iVar1 == 0) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_poll_posix.cc"
                   ,0x579,2,"Skipping poll because of no wakeup fd.");
      param_1 = 0;
    }
    else {
      FUN_0033a930();
      if (iVar1 != 0) {
        uRam0000000000b5e8c0 = 1;
        FUN_00339d50(0xb5e8c8);
        func_0x0033aa18(FUN_003c166c);
      }
      puRam0000000000b5e910 = PTR__poll_00afad58;
      PTR__poll_00afad58 = FUN_003c1708;
      param_1 = 1;
    }
  }
  return param_1;
}



/* Entry: 003c0890; end: 003c0897;  */

void FUN_003c0890(void)

{
  return;
}



/* Entry: 003c0898; end: 003c08df;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_003c0898(long param_1,byte *param_2,undefined8 param_3,byte *param_4)

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
  uint uVar13;
  long lVar14;
  byte *pbVar15;
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
  *(long *)(param_1 + 0x10) = lRam0000000000b5e908;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (lRam0000000000b5e908 != 0) {
    *(long *)(lRam0000000000b5e908 + 0x18) = param_1;
  }
  pbVar7 = (byte *)0xb5e8c8;
  lRam0000000000b5e908 = param_1;
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
  pbVar15 = abStack_58;
  puStack_30 = &stack0xffffffffffffffe0;
  _pthread_condattr_init();
  if ((int)pbVar15 == 0) {
    param_2 = abStack_58;
    _pthread_cond_init();
    if ((int)pbVar7 != 0) goto LAB_00339e5c;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
      return pbVar7;
    }
  }
  else {
    func_0x00770e50();
    pbVar7 = pbVar15;
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
  pbVar15 = param_2;
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
    pbVar15 = param_4;
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
    _vsnprintf(pbVar1,0x40,pbVar15,&puStack_e0);
    if ((int)(uint)pbVar1 < 0) {
      unaff_x23 = (byte *)0x0;
      pbVar15 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar1;
      if ((uint)pbVar1 < 0x40) {
        pbVar15 = (byte *)0x0;
        unaff_x23 = abStack_168;
      }
      else {
        pbVar15 = (byte *)(((ulong)pbVar1 & 0xffffffff) + 1);
        FUN_00338c74();
        ppuStack_170 = &puStack_e0;
        _vsnprintf();
        unaff_x23 = pbVar15;
      }
    }
    pbVar9 = param_2;
    FUN_00338e80(pbVar7,param_2,2,unaff_x23);
    pbVar1 = pbVar15;
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
  pbStack_1a0 = pbVar15;
  pbStack_198 = pbVar7;
  pbStack_190 = param_2;
  ppuStack_180 = &puStack_f0;
  FUN_0033a598();
  lVar14 = *(long *)pbVar1;
  lVar3 = lVar14;
  uStack_268 = uVar2;
  _strrchr(lVar14,0x2f);
  if (lVar3 != 0) {
    lVar14 = lVar3 + 1;
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
  lStack_1d8 = lVar14;
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
    pbVar15 = pbVar7;
    do {
      uVar11 = (*(int *)pbVar15 * 0x16a88000 | (uint)(*(int *)pbVar15 * -0x3361d2af) >> 0x11) *
               0x1b873593 ^ (uint)puVar12;
      uVar11 = (uVar11 >> 0x13 | uVar11 << 0xd) * 5 + 0xe6546b64;
      puVar12 = (ulong *)(ulong)uVar11;
      uVar8 = uVar8 - 1;
      pbVar15 = pbVar15 + 4;
    } while (uVar8 != 0);
    pbVar7 = pbVar7 + ((ulong)pcVar10 & 0xfffffffffffffffc);
  }
  uVar13 = 0;
  uVar8 = (ulong)pcVar10 & 3;
  if (uVar8 != 1) {
    if (uVar8 != 2) {
      if (uVar8 != 3) goto LAB_00339464;
      uVar13 = (uint)pbVar7[2] << 0x10;
    }
    uVar13 = uVar13 | (uint)pbVar7[1] << 8;
  }
  uVar11 = ((uVar13 ^ *pbVar7) * 0x16a88000 | (uVar13 ^ *pbVar7) * -0x3361d2af >> 0x11) * 0x1b873593
           ^ uVar11;
LAB_00339464:
  uVar11 = uVar11 ^ (uint)pcVar10;
  uVar11 = (uVar11 ^ uVar11 >> 0x10) * -0x7a143595;
  uVar11 = (uVar11 ^ uVar11 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar11 ^ uVar11 >> 0x10);
}



/* Entry: 003c08e0; end: 003c0913;  */

void FUN_003c08e0(undefined4 *param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uStack_40;
  undefined1 uStack_31;
  
  plVar1 = (long *)(param_1 + 2);
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + (param_2 & 0xffffffff);
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (0 < lVar4) {
    return;
  }
  func_0x00773fd4();
  param_1[0x15] = 1;
  if (param_1[0x16] == 0) {
    _close(*param_1);
  }
  uStack_40 = 0;
  FUN_003c1e6c(&uStack_31,*(undefined8 *)(param_1 + 0x2e),&uStack_40);
  if ((uStack_40 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003c0914; end: 003c0987;  */

void FUN_003c0914(undefined4 *param_1)

{
  ulong uStack_30;
  undefined1 uStack_21;
  
  param_1[0x15] = 1;
  if (param_1[0x16] == 0) {
    _close(*param_1);
  }
  uStack_30 = 0;
  FUN_003c1e6c(&uStack_21,*(undefined8 *)(param_1 + 0x2e),&uStack_30);
  if ((uStack_30 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003c0988; end: 003c09ff;  */

void FUN_003c0988(long param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  undefined8 extraout_x8;
  ulong *extraout_x8_00;
  undefined *puVar12;
  undefined8 *extraout_x8_01;
  int *piVar13;
  undefined8 *extraout_x9;
  ulong uVar14;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  plVar1 = (long *)(param_1 + 8);
  do {
    lVar11 = *plVar1;
    lVar4 = lVar11 + -2;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 == 0) {
    func_0x00339d70(param_1 + 0x10);
    func_0x003c31e8(param_1 + 0xc0);
    FUN_003c0f4c(*(undefined8 *)(param_1 + 0xd8));
    if ((*(ulong *)(param_1 + 0x68) & 1) != 0) {
      FUN_0055293c();
    }
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_0099a260)(param_1);
    return;
  }
  if (2 < lVar11) {
    return;
  }
  func_0x00774008();
  func_0x0040cf10();
  puVar6 = *(undefined **)(param_1 + 0x10);
  func_0x00339d8c();
  puVar8 = *(undefined8 **)(param_1 + 0x18);
  if (puVar8 != (undefined8 *)0x0) {
    FUN_003c0a60(extraout_x8,*(undefined8 *)(param_1 + 0x10),puVar8,2);
    func_0x00339da8(*(undefined8 *)(param_1 + 0x10));
    return;
  }
  func_0x0077403c();
  FUN_0033c494(extraout_x8);
  __Unwind_Resume();
  uVar10 = (uint)param_3;
  *extraout_x8_00 = 0;
  if (puVar8 == (undefined8 *)0x0) {
    ppuVar7 = &PTR___tlv_bootstrap_00b2c408;
    (*(code *)PTR___tlv_bootstrap_00b2c408)();
    if (*ppuVar7 == puVar6) goto LAB_003c0c5c;
    if (((uint)param_3 >> 1 & 1) != 0) {
      uVar9 = 0x324;
      goto LAB_003c0d0c;
    }
    puVar12 = *(undefined **)(puVar6 + 0x50);
    if (puVar12 != puVar6 + 0x40) {
      lVar4 = *(long *)(puVar12 + 0x18);
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(puVar12 + 0x10);
      *(long *)(*(long *)(puVar12 + 0x10) + 0x18) = lVar4;
      ppuVar7 = &PTR___tlv_bootstrap_00b2c3f0;
      (*(code *)PTR___tlv_bootstrap_00b2c3f0)();
      puVar8 = extraout_x8_01;
      if ((undefined8 *)*ppuVar7 == extraout_x8_01) {
        extraout_x8_01[2] = extraout_x9;
        extraout_x8_01[3] = *(undefined8 *)(puVar6 + 0x58);
        *(undefined8 **)(puVar6 + 0x58) = extraout_x8_01;
        *(undefined8 **)(extraout_x8_01[3] + 0x10) = extraout_x8_01;
        puVar8 = *(undefined8 **)(puVar6 + 0x50);
        if (puVar8 == extraout_x9) {
          puVar8 = (undefined8 *)0x0;
        }
        else {
          lVar4 = puVar8[3];
          *(undefined8 *)(lVar4 + 0x10) = puVar8[2];
          *(long *)(puVar8[2] + 0x18) = lVar4;
        }
        if (((param_3 & 1) == 0) && ((undefined8 *)*ppuVar7 == puVar8)) {
          puVar8[2] = extraout_x9;
          puVar8[3] = *(undefined8 *)(puVar6 + 0x58);
          *(undefined8 **)(puVar6 + 0x58) = puVar8;
          *(undefined8 **)(puVar8[3] + 0x10) = puVar8;
          goto LAB_003c0c5c;
        }
        if (puVar8 == (undefined8 *)0x0) goto LAB_003c0c5c;
      }
      puVar8[2] = extraout_x9;
      puVar8[3] = *(undefined8 *)(puVar6 + 0x58);
      *(undefined8 **)(puVar6 + 0x58) = puVar8;
      *(undefined8 **)(puVar8[3] + 0x10) = puVar8;
      func_0x003d0a30(&uStack_98,*puVar8);
      FUN_003c0db0(extraout_x8_00,&uStack_98);
      if ((uStack_98 & 1) != 0) {
        FUN_0055293c();
      }
      goto LAB_003c0c5c;
    }
  }
  else {
    if (puVar8 != (undefined8 *)((long)&MACH_HEADER.magic + 1)) {
      ppuVar7 = &PTR___tlv_bootstrap_00b2c3f0;
      (*(code *)PTR___tlv_bootstrap_00b2c3f0)();
      if ((undefined8 *)*ppuVar7 == puVar8) {
        if ((uVar10 & 1) != 0) {
          if ((uVar10 >> 1 & 1) != 0) {
            *(undefined4 *)(puVar8 + 1) = 1;
          }
          *(undefined4 *)((long)puVar8 + 0xc) = 1;
          func_0x003d0a30(&uStack_90,*puVar8);
          FUN_003c0db0(extraout_x8_00,&uStack_90);
          if ((uStack_90 & 1) != 0) {
            FUN_0055293c();
          }
        }
      }
      else {
        if ((uVar10 >> 1 & 1) != 0) {
          *(undefined4 *)(puVar8 + 1) = 1;
        }
        *(undefined4 *)((long)puVar8 + 0xc) = 1;
        func_0x003d0a30(&uStack_88,*puVar8);
        FUN_003c0db0(extraout_x8_00,&uStack_88);
        if ((uStack_88 & 1) != 0) {
          FUN_0055293c();
        }
      }
      goto LAB_003c0c5c;
    }
    if ((uVar10 >> 1 & 1) != 0) {
      uVar9 = 0x30a;
LAB_003c0d0c:
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_poll_posix.cc"
                   ,uVar9,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x3c0d38);
      (*pcVar5)();
    }
    for (puVar8 = *(undefined8 **)(puVar6 + 0x50); puVar8 != (undefined8 *)(puVar6 + 0x40);
        puVar8 = (undefined8 *)puVar8[2]) {
      func_0x003d0a30(&uStack_80,*puVar8);
      FUN_003c0db0(extraout_x8_00,&uStack_80);
      if ((uStack_80 & 1) != 0) {
        FUN_0055293c();
      }
    }
  }
  *(undefined4 *)(puVar6 + 0x68) = 1;
LAB_003c0c5c:
  uVar14 = *extraout_x8_00;
  if ((uVar14 & 1) == 0) {
    if (uVar14 == 0) {
      return;
    }
  }
  else {
    piVar13 = (int *)(uVar14 - 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar3) {
        *piVar13 = *piVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar3) {
        *piVar13 = *piVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_78 = uVar14;
  FUN_003be608("pollset_kick_ext",&uStack_78,
               "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_poll_posix.cc"
               ,0x33e);
  if ((uStack_78 & 1) != 0) {
    FUN_0055293c();
  }
  if ((uVar14 & 1) != 0) {
    FUN_0055293c(uVar14);
  }
  return;
}



/* Entry: 003c0a00; end: 003c0a5f;  */

void FUN_003c0a00(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong *extraout_x8;
  undefined *puVar10;
  undefined8 *extraout_x8_00;
  int *piVar11;
  undefined8 *extraout_x9;
  ulong uVar12;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  puVar5 = *(undefined **)(param_2 + 0x10);
  func_0x00339d8c();
  puVar7 = *(undefined8 **)(param_2 + 0x18);
  if (puVar7 != (undefined8 *)0x0) {
    FUN_003c0a60(param_1,*(undefined8 *)(param_2 + 0x10),puVar7,2);
    func_0x00339da8(*(undefined8 *)(param_2 + 0x10));
    return;
  }
  func_0x0077403c();
  FUN_0033c494(param_1);
  __Unwind_Resume();
  uVar9 = (uint)param_4;
  *extraout_x8 = 0;
  if (puVar7 == (undefined8 *)0x0) {
    ppuVar6 = &PTR___tlv_bootstrap_00b2c408;
    (*(code *)PTR___tlv_bootstrap_00b2c408)();
    if (*ppuVar6 == puVar5) goto LAB_003c0c5c;
    if (((uint)param_4 >> 1 & 1) != 0) {
      uVar8 = 0x324;
      goto LAB_003c0d0c;
    }
    puVar10 = *(undefined **)(puVar5 + 0x50);
    if (puVar10 != puVar5 + 0x40) {
      lVar1 = *(long *)(puVar10 + 0x18);
      *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(puVar10 + 0x10);
      *(long *)(*(long *)(puVar10 + 0x10) + 0x18) = lVar1;
      ppuVar6 = &PTR___tlv_bootstrap_00b2c3f0;
      (*(code *)PTR___tlv_bootstrap_00b2c3f0)();
      puVar7 = extraout_x8_00;
      if ((undefined8 *)*ppuVar6 == extraout_x8_00) {
        extraout_x8_00[2] = extraout_x9;
        extraout_x8_00[3] = *(undefined8 *)(puVar5 + 0x58);
        *(undefined8 **)(puVar5 + 0x58) = extraout_x8_00;
        *(undefined8 **)(extraout_x8_00[3] + 0x10) = extraout_x8_00;
        puVar7 = *(undefined8 **)(puVar5 + 0x50);
        if (puVar7 == extraout_x9) {
          puVar7 = (undefined8 *)0x0;
        }
        else {
          lVar1 = puVar7[3];
          *(undefined8 *)(lVar1 + 0x10) = puVar7[2];
          *(long *)(puVar7[2] + 0x18) = lVar1;
        }
        if (((param_4 & 1) == 0) && ((undefined8 *)*ppuVar6 == puVar7)) {
          puVar7[2] = extraout_x9;
          puVar7[3] = *(undefined8 *)(puVar5 + 0x58);
          *(undefined8 **)(puVar5 + 0x58) = puVar7;
          *(undefined8 **)(puVar7[3] + 0x10) = puVar7;
          goto LAB_003c0c5c;
        }
        if (puVar7 == (undefined8 *)0x0) goto LAB_003c0c5c;
      }
      puVar7[2] = extraout_x9;
      puVar7[3] = *(undefined8 *)(puVar5 + 0x58);
      *(undefined8 **)(puVar5 + 0x58) = puVar7;
      *(undefined8 **)(puVar7[3] + 0x10) = puVar7;
      func_0x003d0a30(&uStack_78,*puVar7);
      FUN_003c0db0(extraout_x8,&uStack_78);
      if ((uStack_78 & 1) != 0) {
        FUN_0055293c();
      }
      goto LAB_003c0c5c;
    }
  }
  else {
    if (puVar7 != (undefined8 *)((long)&MACH_HEADER.magic + 1)) {
      ppuVar6 = &PTR___tlv_bootstrap_00b2c3f0;
      (*(code *)PTR___tlv_bootstrap_00b2c3f0)();
      if ((undefined8 *)*ppuVar6 == puVar7) {
        if ((uVar9 & 1) != 0) {
          if ((uVar9 >> 1 & 1) != 0) {
            *(undefined4 *)(puVar7 + 1) = 1;
          }
          *(undefined4 *)((long)puVar7 + 0xc) = 1;
          func_0x003d0a30(&uStack_70,*puVar7);
          FUN_003c0db0(extraout_x8,&uStack_70);
          if ((uStack_70 & 1) != 0) {
            FUN_0055293c();
          }
        }
      }
      else {
        if ((uVar9 >> 1 & 1) != 0) {
          *(undefined4 *)(puVar7 + 1) = 1;
        }
        *(undefined4 *)((long)puVar7 + 0xc) = 1;
        func_0x003d0a30(&uStack_68,*puVar7);
        FUN_003c0db0(extraout_x8,&uStack_68);
        if ((uStack_68 & 1) != 0) {
          FUN_0055293c();
        }
      }
      goto LAB_003c0c5c;
    }
    if ((uVar9 >> 1 & 1) != 0) {
      uVar8 = 0x30a;
LAB_003c0d0c:
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_poll_posix.cc"
                   ,uVar8,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x3c0d38);
      (*pcVar4)();
    }
    for (puVar7 = *(undefined8 **)(puVar5 + 0x50); puVar7 != (undefined8 *)(puVar5 + 0x40);
        puVar7 = (undefined8 *)puVar7[2]) {
      func_0x003d0a30(&uStack_60,*puVar7);
      FUN_003c0db0(extraout_x8,&uStack_60);
      if ((uStack_60 & 1) != 0) {
        FUN_0055293c();
      }
    }
  }
  *(undefined4 *)(puVar5 + 0x68) = 1;
LAB_003c0c5c:
  uVar12 = *extraout_x8;
  if ((uVar12 & 1) == 0) {
    if (uVar12 == 0) {
      return;
    }
  }
  else {
    piVar11 = (int *)(uVar12 - 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar3) {
        *piVar11 = *piVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar3) {
        *piVar11 = *piVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_58 = uVar12;
  FUN_003be608("pollset_kick_ext",&uStack_58,
               "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_poll_posix.cc"
               ,0x33e);
  if ((uStack_58 & 1) != 0) {
    FUN_0055293c();
  }
  if ((uVar12 & 1) != 0) {
    FUN_0055293c(uVar12);
  }
  return;
}



/* Entry: 003c0a60; end: 003c0daf;  */

void FUN_003c0a60(ulong *param_1,undefined *param_2,undefined8 *param_3,ulong param_4)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *extraout_x8;
  int *piVar8;
  undefined8 *extraout_x9;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  *param_1 = 0;
  if (param_3 == (undefined8 *)0x0) {
    ppuVar5 = &PTR___tlv_bootstrap_00b2c408;
    (*(code *)PTR___tlv_bootstrap_00b2c408)();
    if (*ppuVar5 == param_2) goto LAB_003c0c5c;
    if (((uint)param_4 >> 1 & 1) != 0) {
      uVar6 = 0x324;
      goto LAB_003c0d0c;
    }
    puVar7 = *(undefined **)(param_2 + 0x50);
    if (puVar7 != param_2 + 0x40) {
      lVar1 = *(long *)(puVar7 + 0x18);
      *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(puVar7 + 0x10);
      *(long *)(*(long *)(puVar7 + 0x10) + 0x18) = lVar1;
      ppuVar5 = &PTR___tlv_bootstrap_00b2c3f0;
      (*(code *)PTR___tlv_bootstrap_00b2c3f0)();
      puVar10 = extraout_x8;
      if ((undefined8 *)*ppuVar5 == extraout_x8) {
        extraout_x8[2] = extraout_x9;
        extraout_x8[3] = *(undefined8 *)(param_2 + 0x58);
        *(undefined8 **)(param_2 + 0x58) = extraout_x8;
        *(undefined8 **)(extraout_x8[3] + 0x10) = extraout_x8;
        puVar10 = *(undefined8 **)(param_2 + 0x50);
        if (puVar10 == extraout_x9) {
          puVar10 = (undefined8 *)0x0;
        }
        else {
          lVar1 = puVar10[3];
          *(undefined8 *)(lVar1 + 0x10) = puVar10[2];
          *(long *)(puVar10[2] + 0x18) = lVar1;
        }
        if (((param_4 & 1) == 0) && ((undefined8 *)*ppuVar5 == puVar10)) {
          puVar10[2] = extraout_x9;
          puVar10[3] = *(undefined8 *)(param_2 + 0x58);
          *(undefined8 **)(param_2 + 0x58) = puVar10;
          *(undefined8 **)(puVar10[3] + 0x10) = puVar10;
          goto LAB_003c0c5c;
        }
        if (puVar10 == (undefined8 *)0x0) goto LAB_003c0c5c;
      }
      puVar10[2] = extraout_x9;
      puVar10[3] = *(undefined8 *)(param_2 + 0x58);
      *(undefined8 **)(param_2 + 0x58) = puVar10;
      *(undefined8 **)(puVar10[3] + 0x10) = puVar10;
      func_0x003d0a30(&uStack_58,*puVar10);
      FUN_003c0db0(param_1,&uStack_58);
      if ((uStack_58 & 1) != 0) {
        FUN_0055293c();
      }
      goto LAB_003c0c5c;
    }
  }
  else {
    if (param_3 != (undefined8 *)((long)&MACH_HEADER.magic + 1)) {
      ppuVar5 = &PTR___tlv_bootstrap_00b2c3f0;
      (*(code *)PTR___tlv_bootstrap_00b2c3f0)();
      if ((undefined8 *)*ppuVar5 == param_3) {
        if ((param_4 & 1) != 0) {
          if (((uint)param_4 >> 1 & 1) != 0) {
            *(undefined4 *)(param_3 + 1) = 1;
          }
          *(undefined4 *)((long)param_3 + 0xc) = 1;
          func_0x003d0a30(&uStack_50,*param_3);
          FUN_003c0db0(param_1,&uStack_50);
          if ((uStack_50 & 1) != 0) {
            FUN_0055293c();
          }
        }
      }
      else {
        if (((uint)param_4 >> 1 & 1) != 0) {
          *(undefined4 *)(param_3 + 1) = 1;
        }
        *(undefined4 *)((long)param_3 + 0xc) = 1;
        func_0x003d0a30(&uStack_48,*param_3);
        FUN_003c0db0(param_1,&uStack_48);
        if ((uStack_48 & 1) != 0) {
          FUN_0055293c();
        }
      }
      goto LAB_003c0c5c;
    }
    if (((uint)param_4 >> 1 & 1) != 0) {
      uVar6 = 0x30a;
LAB_003c0d0c:
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_poll_posix.cc"
                   ,uVar6,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x3c0d38);
      (*pcVar4)();
    }
    for (puVar10 = *(undefined8 **)(param_2 + 0x50); puVar10 != (undefined8 *)(param_2 + 0x40);
        puVar10 = (undefined8 *)puVar10[2]) {
      func_0x003d0a30(&uStack_40,*puVar10);
      FUN_003c0db0(param_1,&uStack_40);
      if ((uStack_40 & 1) != 0) {
        FUN_0055293c();
      }
    }
  }
  *(undefined4 *)(param_2 + 0x68) = 1;
LAB_003c0c5c:
  uVar9 = *param_1;
  if ((uVar9 & 1) == 0) {
    if (uVar9 == 0) {
      return;
    }
  }
  else {
    piVar8 = (int *)(uVar9 - 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar3) {
        *piVar8 = *piVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar3) {
        *piVar8 = *piVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_38 = uVar9;
  FUN_003be608("pollset_kick_ext",&uStack_38,
               "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_poll_posix.cc"
               ,0x33e);
  if ((uStack_38 & 1) != 0) {
    FUN_0055293c();
  }
  if ((uVar9 & 1) != 0) {
    FUN_0055293c(uVar9);
  }
  return;
}



/* Entry: 003c0db0; end: 003c0f4b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_003c0db0(ulong *param_1,ulong *param_2)

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
    FUN_003b646c(&uStack_30,2,"Kick Failure",0xc,&uStack_31,auStack_58 + 1);
    uVar3 = *param_1;
    if (uStack_30 == uVar3) {
LAB_003c0e28:
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
        goto LAB_003c0e28;
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
    if (((ulong)pcVar4 & 1) == 0) goto LAB_003c0ec0;
    FUN_0055293c();
    pcVar4 = pcStack_28;
  }
  if (((ulong)pcVar4 & 1) != 0) {
    FUN_0055293c();
  }
LAB_003c0ec0:
  if ((uStack_60 & 1) != 0) {
    FUN_0055293c();
  }
  if ((auStack_58[0] & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003c0f4c; end: 003c0fd3;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_003c0f4c(byte *param_1,byte *param_2,undefined8 param_3,byte *param_4)

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
  long lVar13;
  uint uVar14;
  byte *pbVar15;
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
  
  if (cRam0000000000b5e8c0 != '\x01') {
    return param_1;
  }
  func_0x00339d8c(0xb5e8c8);
  if (pbRam0000000000b5e908 == param_1) {
    pbRam0000000000b5e908 = *(byte **)(param_1 + 0x10);
  }
  lVar13 = *(long *)(param_1 + 0x18);
  if (lVar13 != 0) {
    *(undefined8 *)(lVar13 + 0x10) = *(undefined8 *)(param_1 + 0x10);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    *(long *)(*(long *)(param_1 + 0x10) + 0x18) = lVar13;
  }
  FUN_00338cb8(param_1);
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
  pbVar15 = abStack_58;
  puStack_30 = &stack0xffffffffffffffe0;
  _pthread_condattr_init();
  if ((int)pbVar15 == 0) {
    param_2 = abStack_58;
    _pthread_cond_init();
    if ((int)pbVar7 != 0) goto LAB_00339e5c;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
      return pbVar7;
    }
  }
  else {
    func_0x00770e50();
    pbVar7 = pbVar15;
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
  pbVar15 = param_2;
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
    pbVar15 = param_4;
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
    _vsnprintf(pbVar1,0x40,pbVar15,&puStack_e0);
    if ((int)(uint)pbVar1 < 0) {
      unaff_x23 = (byte *)0x0;
      pbVar15 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar1;
      if ((uint)pbVar1 < 0x40) {
        pbVar15 = (byte *)0x0;
        unaff_x23 = abStack_168;
      }
      else {
        pbVar15 = (byte *)(((ulong)pbVar1 & 0xffffffff) + 1);
        FUN_00338c74();
        ppuStack_170 = &puStack_e0;
        _vsnprintf();
        unaff_x23 = pbVar15;
      }
    }
    pbVar9 = param_2;
    FUN_00338e80(pbVar7,param_2,2,unaff_x23);
    pbVar1 = pbVar15;
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
  pbStack_1a0 = pbVar15;
  pbStack_198 = pbVar7;
  pbStack_190 = param_2;
  ppuStack_180 = &puStack_f0;
  FUN_0033a598();
  lVar13 = *(long *)pbVar1;
  lVar3 = lVar13;
  uStack_268 = uVar2;
  _strrchr(lVar13,0x2f);
  if (lVar3 != 0) {
    lVar13 = lVar3 + 1;
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
  lStack_1d8 = lVar13;
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
    pbVar15 = pbVar7;
    do {
      uVar11 = (*(int *)pbVar15 * 0x16a88000 | (uint)(*(int *)pbVar15 * -0x3361d2af) >> 0x11) *
               0x1b873593 ^ (uint)puVar12;
      uVar11 = (uVar11 >> 0x13 | uVar11 << 0xd) * 5 + 0xe6546b64;
      puVar12 = (ulong *)(ulong)uVar11;
      uVar8 = uVar8 - 1;
      pbVar15 = pbVar15 + 4;
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



/* Entry: 003c0fd4; end: 003c1063;  */

undefined8 FUN_003c0fd4(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uStack_30;
  undefined1 uStack_21;
  
  uVar1 = 0;
  lVar2 = *param_2;
  if (lVar2 == 0) {
    lVar2 = 1;
  }
  else {
    if (lVar2 == 1) {
      return 0;
    }
    FUN_003c1064(&uStack_30,param_1);
    FUN_003c1e6c(&uStack_21,lVar2,&uStack_30);
    if ((uStack_30 & 1) != 0) {
      FUN_0055293c();
    }
    lVar2 = 0;
    uVar1 = 1;
  }
  *param_2 = lVar2;
  return uVar1;
}



/* Entry: 003c1064; end: 003c10f3;  */

void FUN_003c1064(undefined8 *param_1,long param_2)

{
  undefined1 uStack_29;
  ulong uStack_28;
  
  if (*(int *)(param_2 + 0x50) == 0) {
    *param_1 = 0;
  }
  else {
    FUN_003bdf2c(&uStack_28,2,"FD shutdown",0xb,&uStack_29,1,param_2 + 0x68);
    FUN_003be104(param_1,&uStack_28,3,0xe);
    if ((uStack_28 & 1) != 0) {
      FUN_0055293c();
    }
  }
  return;
}



/* Entry: 003c10f4; end: 003c124b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_003c10f4(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  ulong auStack_68 [4];
  undefined1 uStack_41;
  ulong uStack_40;
  ulong uStack_38;
  undefined1 uStack_29;
  ulong *puStack_28;
  
  if ((*(int *)(param_1 + 0x50) == 0) && (*(long *)(param_1 + 0x60) == 0)) {
    if (*param_2 == 1) {
      *param_2 = 0;
      FUN_003c1064(auStack_68,param_1);
      FUN_003c1e6c(&puStack_28,param_3,auStack_68);
      if ((auStack_68[0] & 1) != 0) {
        FUN_0055293c();
      }
      FUN_003c124c(param_1);
    }
    else {
      if (*param_2 != 0) {
        func_0x00774070();
        func_0x0040cf10();
        FUN_0033c494(auStack_68);
        __Unwind_Resume();
        pcStack_78 = FUN_003c124c;
        plVar1 = *(long **)(param_1 + 0x70);
        puStack_80 = &stack0xfffffffffffffff0;
        if (plVar1 == (long *)(param_1 + 0x70)) {
          if (*(long *)(param_1 + 0x98) == 0) {
            if (*(long *)(param_1 + 0xa0) != 0) {
              FUN_003c0a00(&uStack_98);
              if ((uStack_98 & 1) != 0) {
                FUN_0055293c();
              }
            }
          }
          else {
            FUN_003c0a00(&uStack_90,*(long *)(param_1 + 0x98));
            if ((uStack_90 & 1) != 0) {
              FUN_0055293c();
            }
          }
        }
        else {
          FUN_003c0a00(&uStack_88,plVar1);
          if ((uStack_88 & 1) != 0) {
            FUN_0055293c();
          }
        }
        return;
      }
      *param_2 = param_3;
    }
  }
  else {
    auStack_68[2] = 0;
    auStack_68[3] = 0;
    auStack_68[1] = 0;
    FUN_003b646c(&uStack_40,2,"FD shutdown",0xb,&uStack_41,auStack_68 + 1);
    FUN_003be104(&uStack_38,&uStack_40,3,0xe);
    FUN_003c1e6c(&uStack_29,param_3,&uStack_38);
    if ((uStack_38 & 1) != 0) {
      FUN_0055293c();
    }
    if ((uStack_40 & 1) != 0) {
      FUN_0055293c();
    }
    puStack_28 = auStack_68 + 1;
    FUN_0033d548(&puStack_28);
  }
  return;
}


