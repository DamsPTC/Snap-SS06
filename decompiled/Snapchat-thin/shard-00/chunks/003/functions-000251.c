/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1005a5ca8; end: 1005a5d4f;  */

void FUN_1005a5ca8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  
  puVar2 = param_1 + 1;
  if (*param_1 == 0) {
    if (*(char *)((long)param_1 + 0x1f) < '\0') {
      func_0x000107c60e14(*puVar2);
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
        FUN_10084dad0(uVar1);
      }
    }
  }
  return;
}



/* Entry: 1005a5d50; end: 1005a5e6f;  */

/* WARNING: Possible PIC construction at 0x0001005a5f34: Changing call to branch */
/* WARNING: Type propagation algorithm not settling */

void FUN_1005a5d50(long param_1)

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
  
  FUN_100460448();
  uVar5 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  iVar3 = *(int *)(param_1 + 0xf0) + -1;
  *(int *)(param_1 + 0xf0) = iVar3;
  func_0x000100466b80(param_1);
  if (iVar3 == 0) {
    FUN_1005a5ea4(*(undefined8 *)(param_1 + 0x58),"",0,0);
    func_0x000107c607f0(*(undefined8 *)(param_1 + 0x48));
    func_0x000107c607f0(*(undefined8 *)(param_1 + 0x50));
    FUN_1005a5f48(param_1);
    if (*(char *)(param_1 + 0x10f) < '\0') {
      param_1 = *(long *)(param_1 + 0xf8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  auStack_68[2] = 0;
  auStack_68[3] = 0;
  auStack_68[1] = 0;
  func_0x000104ab5920(&uStack_40,2,"connect() timed out",0x13,&uStack_41,auStack_68 + 1);
  puStack_38 = auStack_68 + 1;
  func_0x000100482b64(&puStack_38);
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
  FUN_1004bd7e8(&puStack_38,uVar5,auStack_68);
  if ((auStack_68[0] & 1) != 0) {
    FUN_10084dad0();
  }
  if ((uStack_40 & 1) != 0) {
    FUN_10084dad0();
  }
  return;
}



/* Entry: 1005a5e70; end: 1005a5ea3;  */

long * FUN_1005a5e70(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  do {
    lVar4 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (0 < lVar4) {
    return (long *)(ulong)(lVar4 == 1);
  }
  func_0x000107c2c128();
  plVar3 = param_1 + 5;
  FUN_1005a5e70();
  if ((param_1 != (long *)0x0) && ((int)plVar3 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001005a5ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))(param_1);
    return param_1;
  }
  return plVar3;
}



/* Entry: 1005a5ea4; end: 1005a5f47;  */

void FUN_1005a5ea4(long *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1 + 0x28;
  FUN_1005a5e70();
  if ((param_1 != (long *)0x0) && (iVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001005a5ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))(param_1);
    return;
  }
  return;
}



/* Entry: 1005a5f48; end: 1005a5f63;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1005a5f48(long *param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  undefined8 uStack_88;
  ulong uStack_80;
  ulong auStack_78 [4];
  undefined1 uStack_51;
  ulong uStack_50;
  ulong *puStack_48;
  
  func_0x000107c61258();
  if ((int)param_1 == 0) {
    return;
  }
  func_0x000107c2c130();
  FUN_100460448(param_1 + 2);
  if (*param_2 == 0) {
    if ((char)param_1[10] == '\0') {
      lVar6 = param_1[0xb];
      if (lVar6 == 0) {
        FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/transport/tcp_connect_handshaker.cc"
                      ,0xc1,2,"assertion failed: %s");
        func_0x000107c60ebc();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1005a6158);
        (*pcVar4)();
      }
      *(long *)param_1[0x11] = lVar6;
      param_1[0xb] = 0;
      if ((char)param_1[0x12] != '\0') {
        FUN_1005a6208(lVar6,param_1[0xe]);
      }
      uStack_88 = 0;
      FUN_1005a6218(param_1,&uStack_88);
      goto LAB_1005a60e0;
    }
    auStack_78[2] = 0;
    auStack_78[3] = 0;
    auStack_78[1] = 0;
    func_0x000104ab5920(&uStack_50,2,"tcp handshaker shutdown",0x17,&uStack_51,auStack_78 + 1);
    uVar5 = *param_2;
    if (uStack_50 == uVar5) {
LAB_1005a5fec:
      if ((uVar5 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    else {
      *param_2 = uStack_50;
      uStack_50 = 0x36;
      if ((uVar5 & 1) != 0) {
        FUN_10084dad0();
        uVar5 = uStack_50;
        goto LAB_1005a5fec;
      }
    }
    puStack_48 = auStack_78 + 1;
    func_0x000100482b64(&puStack_48);
  }
  lVar6 = param_1[0xb];
  if (lVar6 != 0) {
    auStack_78[0] = *param_2;
    if ((auStack_78[0] & 1) != 0) {
      piVar7 = (int *)(auStack_78[0] - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = *piVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x000104aba5c4(lVar6,auStack_78);
    if ((auStack_78[0] & 1) != 0) {
      FUN_10084dad0();
    }
  }
  if ((char)param_1[10] == '\0') {
    lVar6 = param_1[0x11];
    param_1[0xc] = *(long *)(lVar6 + 0x10);
    *(undefined8 *)(lVar6 + 0x10) = 0;
    FUN_10048650c(*(undefined8 *)(lVar6 + 8));
    *(undefined8 *)(param_1[0x11] + 8) = 0;
    *(undefined1 *)(param_1 + 10) = 1;
    uVar5 = *param_2;
    if ((uVar5 & 1) != 0) {
      piVar7 = (int *)(uVar5 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = *piVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_80 = uVar5;
    FUN_1005a6218(param_1,&uStack_80);
    if ((uVar5 & 1) != 0) {
      FUN_10084dad0(uVar5);
    }
  }
LAB_1005a60e0:
  func_0x000100466b80(param_1 + 2);
  plVar1 = param_1 + 1;
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
    (**(code **)(*param_1 + 8))(param_1);
  }
  return;
}



/* Entry: 1005a5f64; end: 1005a6207;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1005a5f64(long *param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  undefined8 uStack_78;
  ulong uStack_70;
  ulong auStack_68 [4];
  undefined1 uStack_41;
  ulong uStack_40;
  ulong *puStack_38;
  
  FUN_100460448(param_1 + 2);
  if (*param_2 == 0) {
    if ((char)param_1[10] == '\0') {
      lVar6 = param_1[0xb];
      if (lVar6 == 0) {
        FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/transport/tcp_connect_handshaker.cc"
                      ,0xc1,2,"assertion failed: %s");
        func_0x000107c60ebc();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1005a6158);
        (*pcVar4)();
      }
      *(long *)param_1[0x11] = lVar6;
      param_1[0xb] = 0;
      if ((char)param_1[0x12] != '\0') {
        FUN_1005a6208(lVar6,param_1[0xe]);
      }
      uStack_78 = 0;
      FUN_1005a6218(param_1,&uStack_78);
      goto LAB_1005a60e0;
    }
    auStack_68[2] = 0;
    auStack_68[3] = 0;
    auStack_68[1] = 0;
    func_0x000104ab5920(&uStack_40,2,"tcp handshaker shutdown",0x17,&uStack_41,auStack_68 + 1);
    uVar5 = *param_2;
    if (uStack_40 == uVar5) {
LAB_1005a5fec:
      if ((uVar5 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    else {
      *param_2 = uStack_40;
      uStack_40 = 0x36;
      if ((uVar5 & 1) != 0) {
        FUN_10084dad0();
        uVar5 = uStack_40;
        goto LAB_1005a5fec;
      }
    }
    puStack_38 = auStack_68 + 1;
    func_0x000100482b64(&puStack_38);
  }
  lVar6 = param_1[0xb];
  if (lVar6 != 0) {
    auStack_68[0] = *param_2;
    if ((auStack_68[0] & 1) != 0) {
      piVar7 = (int *)(auStack_68[0] - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = *piVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x000104aba5c4(lVar6,auStack_68);
    if ((auStack_68[0] & 1) != 0) {
      FUN_10084dad0();
    }
  }
  if ((char)param_1[10] == '\0') {
    lVar6 = param_1[0x11];
    param_1[0xc] = *(long *)(lVar6 + 0x10);
    *(undefined8 *)(lVar6 + 0x10) = 0;
    FUN_10048650c(*(undefined8 *)(lVar6 + 8));
    *(undefined8 *)(param_1[0x11] + 8) = 0;
    *(undefined1 *)(param_1 + 10) = 1;
    uVar5 = *param_2;
    if ((uVar5 & 1) != 0) {
      piVar7 = (int *)(uVar5 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = *piVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_70 = uVar5;
    FUN_1005a6218(param_1,&uStack_70);
    if ((uVar5 & 1) != 0) {
      FUN_10084dad0(uVar5);
    }
  }
LAB_1005a60e0:
  func_0x000100466b80(param_1 + 2);
  plVar1 = param_1 + 1;
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
    (**(code **)(*param_1 + 8))(param_1);
  }
  return;
}



/* Entry: 1005a6208; end: 1005a6217;  */

void FUN_1005a6208(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001005a6210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}



/* Entry: 1005a6218; end: 1005a62a7;  */

void FUN_1005a6218(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_30;
  undefined1 uStack_21;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_1004d9fe0(param_1 + 0x78);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x68);
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
  FUN_1004bd7e8(&uStack_21,uVar3,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    FUN_10084dad0();
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}



/* Entry: 1005a62a8; end: 1005a638f;  */

void FUN_1005a62a8(long *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  int *piVar4;
  long lVar5;
  ulong uStack_38;
  
  FUN_100460448(param_1 + 2);
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
  plVar3 = param_1;
  FUN_1004de32c(param_1,&uStack_38);
  if ((uStack_38 & 1) != 0) {
    FUN_10084dad0();
  }
  func_0x000100466b80(param_1 + 2);
  if ((int)plVar3 != 0) {
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
    if (lVar5 + -1 == 0 && param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001005a6364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))(param_1);
      return;
    }
  }
  return;
}



/* Entry: 1005a6390; end: 1005a672f;  */

void FUN_1005a6390(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 ****ppppuVar9;
  char *pcVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long lVar13;
  undefined *apuStack_118 [2];
  undefined4 uStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 ***pppuStack_e0;
  char *pcStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = param_4[1];
  FUN_10047fdf4(lVar6,"grpc.http_connect_server");
  func_0x00010048122c();
  if (lVar6 == 0) {
    FUN_100460448(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x50) = 1;
    func_0x000100466b80(param_1 + 0x10);
    uStack_b8 = 0;
    FUN_1004bd7e8(apuStack_118,param_3,&uStack_b8);
    if ((uStack_b8 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  else {
    lVar7 = param_4[1];
    pcVar10 = "grpc.http_connect_headers";
    FUN_10047fdf4();
    func_0x00010048122c();
    uStack_c8 = 0;
    lStack_c0 = 0;
    if (lVar7 == 0) {
      lVar7 = 0;
LAB_1005a64ec:
      lVar13 = 0;
    }
    else {
      pcVar10 = "\n";
      func_0x000104a6f29c();
      lVar7 = uStack_c8 << 4;
      FUN_100460200();
      if (uStack_c8 == 0) goto LAB_1005a64ec;
      uVar12 = 0;
      lVar13 = 0;
      do {
        puVar11 = *(undefined1 **)(lStack_c0 + uVar12 * 8);
        pcVar10 = (char *)0x3a;
        func_0x000107c613bc();
        if (puVar11 == (undefined1 *)0x0) {
          pcVar10 = (char *)0x149;
          FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/transport/http_connect_handshaker.cc"
                        ,0x149,2,"skipping unparseable HTTP CONNECT header: %s");
        }
        else {
          *puVar11 = 0;
          puVar2 = (undefined8 *)(lVar7 + lVar13 * 0x10);
          *puVar2 = *(undefined8 *)(lStack_c0 + uVar12 * 8);
          puVar2[1] = puVar11 + 1;
          lVar13 = lVar13 + 1;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < uStack_c8);
    }
    FUN_100460448(param_1 + 0x10);
    *(undefined8 **)(param_1 + 0x68) = param_4;
    *(undefined8 *)(param_1 + 0x70) = param_3;
    uVar8 = *param_4;
    FUN_100741550(uVar8);
    if ((char *)0x7ffffffffffffff7 < pcVar10) goto LAB_1005a66b8;
    if (pcVar10 < (char *)0x17) {
      uStack_d0 = CONCAT17((char)pcVar10,(undefined7)uStack_d0);
      ppppuVar9 = &pppuStack_e0;
      if (pcVar10 != (char *)0x0) goto LAB_1005a6564;
    }
    else {
      uVar12 = ((ulong)pcVar10 & 0xfffffffffffffff8) + 8;
      if (((ulong)pcVar10 | 7) != 0x17) {
        uVar12 = (ulong)pcVar10 | 7;
      }
      ppppuVar9 = (undefined8 ****)(uVar12 + 1);
      func_0x000107c60e20();
      uStack_d0 = uVar12 + 1 | 0x8000000000000000;
      pppuStack_e0 = ppppuVar9;
      pcStack_d8 = pcVar10;
LAB_1005a6564:
      func_0x000107c610b8(ppppuVar9,uVar8,pcVar10);
    }
    *(char *)((long)ppppuVar9 + (long)pcVar10) = '\0';
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/transport/http_connect_handshaker.cc"
                  ,0x159,1,"Connecting to server %s via HTTP proxy %s");
    apuStack_118[0] = &UNK_10f74f485;
    uStack_108 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    lStack_100 = lVar13;
    lStack_f8 = lVar7;
    func_0x000104ab89f0(&uStack_90,apuStack_118,lVar6,lVar6);
    uStack_a8 = uStack_88;
    uStack_b0 = uStack_90;
    uStack_98 = uStack_78;
    uStack_a0 = uStack_80;
    FUN_1005a70c4(param_1 + 0x78,&uStack_b0);
    FUN_100460314(lVar7);
    if (uStack_c8 != 0) {
      uVar12 = 0;
      do {
        FUN_100460314(*(undefined8 *)(lStack_c0 + uVar12 * 8));
        uVar12 = uVar12 + 1;
      } while (uVar12 < uStack_c8);
    }
    FUN_100460314(lStack_c0);
    plVar1 = (long *)(param_1 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar8 = *param_4;
    *(undefined **)(param_1 + 0x1a8) = &UNK_104ade1b8;
    *(long *)(param_1 + 0x1b0) = param_1;
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    func_0x0001005a7358(uVar8,param_1 + 0x78,param_1 + 0x1a0,0,0x7fffffff);
    if ((long)uStack_d0 < 0) {
      func_0x000107c60e14(pppuStack_e0);
    }
    func_0x000100466b80(param_1 + 0x10);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  func_0x000107c60e78();
LAB_1005a66b8:
  func_0x000104a6fa5c(&pppuStack_e0);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1005a66c4);
  (*pcVar5)();
}



/* Entry: 1005a6730; end: 1005a68a7;  */

void FUN_1005a6730(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  int *piVar5;
  long lVar6;
  ulong uStack_50;
  ulong uStack_48;
  
  plVar1 = param_1 + 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar1 = param_1 + 4;
  FUN_100460448(plVar1);
  param_1[0xf] = param_4;
  param_1[0x10] = param_3;
  plVar4 = param_1;
  FUN_1005a68a8(param_1);
  FUN_1005a69b0(&uStack_48,param_1,param_1[0x12],plVar4);
  if (uStack_48 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    uStack_50 = uStack_48;
    if ((uStack_48 & 1) != 0) {
      piVar5 = (int *)(uStack_48 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar3) {
          *piVar5 = *piVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x000104ad2400(param_1,&uStack_50);
    if ((uStack_50 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  if ((uStack_48 & 1) != 0) {
    FUN_10084dad0();
  }
  func_0x000100466b80(plVar1);
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
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
      (**(code **)(*param_1 + 8))(param_1);
    }
  }
  return;
}



/* Entry: 1005a68a8; end: 1005a6967;  */

ulong FUN_1005a68a8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x78) + 0x10);
  uVar4 = *(ulong *)(lVar2 + 0x20);
  if (*(ulong *)(param_1 + 0x88) < uVar4) {
    uVar1 = *(undefined8 *)(param_1 + 0x90);
    FUN_1004689e4(uVar1,uVar4);
    *(ulong *)(param_1 + 0x88) = uVar4;
    *(undefined8 *)(param_1 + 0x90) = uVar1;
    lVar2 = *(long *)(*(long *)(param_1 + 0x78) + 0x10);
  }
  if (*(long *)(lVar2 + 0x10) != 0) {
    lVar5 = 0;
    do {
      plVar6 = *(long **)(lVar2 + 8);
      if (*plVar6 == 0) {
        lVar2 = (long)plVar6 + 9;
        uVar3 = (ulong)*(byte *)(plVar6 + 1);
      }
      else {
        uVar3 = plVar6[1];
        lVar2 = plVar6[2];
      }
      func_0x000107c610b4(*(long *)(param_1 + 0x90) + lVar5,lVar2,uVar3);
      if (*plVar6 == 0) {
        uVar3 = (ulong)*(byte *)(plVar6 + 1);
      }
      else {
        uVar3 = plVar6[1];
      }
      lVar5 = uVar3 + lVar5;
      FUN_100727454(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x10));
      lVar2 = *(long *)(*(long *)(param_1 + 0x78) + 0x10);
    } while (*(long *)(lVar2 + 0x10) != 0);
  }
  return uVar4;
}



/* Entry: 1005a6968; end: 1005a69af;  */

long * FUN_1005a6968(long *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if ((param_1 == (long *)0x0) || (*param_1 == 0)) {
    return (long *)0x2;
  }
  if (*(char *)((long)param_1 + 9) != '\0') {
    return (long *)0x5;
  }
  if (*(char *)((long)param_1 + 10) != '\0') {
    return (long *)0xe;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x30);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001005a69a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return param_1;
  }
  return (long *)0x6;
}



/* Entry: 1005a69b0; end: 1005a6a27;  */

void FUN_1005a69b0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  FUN_1005a6968();
  if ((int)uVar1 == 0xd) {
    *param_1 = 0;
  }
  else {
    FUN_1005a6d08(param_1,param_2,uVar1,0,0,0);
  }
  return;
}



/* Entry: 1005a6a28; end: 1005a6c0b;  */

long FUN_1005a6a28(long param_1,long param_2,ulong param_3,undefined8 *param_4,undefined8 *param_5,
                  undefined8 *param_6)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  undefined8 uStack_48;
  
  if (((param_3 != 0 && param_2 == 0 || param_4 == (undefined8 *)0x0) ||
      param_5 == (undefined8 *)0x0) || param_6 == (undefined8 *)0x0) {
    return 2;
  }
  uStack_48 = 0;
  if (param_3 != 0) {
    lVar3 = 2;
    if ((param_2 != 0) && (param_3 >> 0x1f == 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      FUN_1001f16f8(uVar4,param_2,param_3);
      if (-1 < (int)uVar4) goto LAB_1005a6ad4;
      FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                    ,0x5ea,2,"Could not write to memory BIO.");
      lVar3 = 7;
      *(undefined4 *)(param_1 + 0x20) = 7;
    }
    while ((int)lVar3 == 0x10) {
      lVar3 = param_1;
      FUN_1005a6c0c(param_1,&uStack_48);
      if ((int)lVar3 != 0) {
        return lVar3;
      }
LAB_1005a6ad4:
      lVar3 = param_1;
      FUN_1007274e0();
    }
    if ((int)lVar3 != 0) {
      return lVar3;
    }
  }
  lVar3 = param_1;
  FUN_1005a6c0c(param_1,&uStack_48);
  if ((int)lVar3 != 0) {
    return lVar3;
  }
  *param_4 = *(undefined8 *)(param_1 + 0x28);
  *param_5 = uStack_48;
  if (*(int *)(param_1 + 0x20) == 0xb) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_1005a6ce8();
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x20) == 0xb) {
        *param_6 = 0;
        return 0;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
  }
  uVar5 = *(ulong *)(param_1 + 0x10);
  FUN_10073a440();
  FUN_1005a6cc4();
  if (uVar5 == 0) {
    uVar7 = 0;
LAB_1005a6ba8:
    lVar3 = param_1;
    FUN_10073a448(param_1,uVar7,uVar5,param_6);
    if ((int)lVar3 == 0) {
      *(undefined1 *)(param_1 + 9) = 1;
    }
  }
  else {
    uVar7 = uVar5;
    FUN_100460200(uVar5);
    uVar2 = (uint)*(undefined8 *)(param_1 + 0x10);
    FUN_10073a440();
    FUN_1001f2fe8();
    if (((int)uVar2 < 0) || (uVar5 != uVar2)) {
      pcVar6 = "Failed to read the expected number of bytes from SSL object.";
      uVar4 = 0x60f;
    }
    else {
      if (uVar5 <= param_3) goto LAB_1005a6ba8;
      pcVar6 = "More unused bytes than received bytes.";
      uVar4 = 0x65d;
    }
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                  ,uVar4,2,pcVar6);
    FUN_100460314(uVar7);
    lVar3 = 7;
  }
  return lVar3;
}



/* Entry: 1005a6c0c; end: 1005a6cc3;  */

void FUN_1005a6c0c(long param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = *param_2;
  lVar3 = *(long *)(param_1 + 0x28);
  lVar4 = *(long *)(param_1 + 0x30);
  do {
    uVar5 = lVar4 - lVar6;
    if (lVar3 == 0 || uVar5 >> 0x1f != 0) {
LAB_1005a6c88:
      *param_2 = uVar5 + lVar6;
      return;
    }
    uVar2 = *(ulong *)(param_1 + 0x18);
    FUN_1001f2fe8(uVar2,lVar3 + lVar6,uVar5);
    if ((int)uVar2 < 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
      func_0x000107c2b1dc();
      uVar5 = 0;
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x20) = 7;
      }
      goto LAB_1005a6c88;
    }
    uVar5 = uVar2 & 0xffffffff;
    lVar3 = *(long *)(param_1 + 0x18);
    FUN_1005a6cc4();
    if (lVar3 == 0) goto LAB_1005a6c88;
    lVar6 = lVar6 + uVar5;
    lVar3 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) << 1;
    FUN_1004689e4();
    *(long *)(param_1 + 0x28) = lVar3;
    lVar4 = *(long *)(param_1 + 0x30);
  } while( true );
}



/* Entry: 1005a6cc4; end: 1005a6ce7;  */

ulong FUN_1005a6cc4(ulong param_1)

{
  FUN_1001f1f60(param_1,10,0,0);
  return param_1 & ((long)param_1 >> 0x3f ^ 0xffffffffffffffffU);
}



/* Entry: 1005a6ce8; end: 1005a6d07;  */

uint FUN_1005a6ce8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x110);
  if (lVar1 != 0) {
    return *(uint *)(lVar1 + 0x618) >> 3 & 1;
  }
  return 1;
}



/* Entry: 1005a6d08; end: 1005a704f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1005a6d08(undefined8 *param_1,undefined8 *******param_2,undefined8 param_3,
                  undefined8 param_4,long param_5,undefined8 ******param_6)

{
  undefined8 *******pppppppuVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *******pppppppuVar5;
  undefined8 *****pppppuVar6;
  undefined8 uVar7;
  undefined8 ****ppppuVar8;
  undefined8 ******ppppppuVar9;
  undefined8 *****pppppuStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 uStack_109;
  undefined8 *******pppppppuStack_108;
  ulong uStack_100;
  byte bStack_f1;
  ulong auStack_f0 [5];
  undefined8 ******ppppppuStack_c8;
  undefined8 ******ppppppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  char *pcStack_98;
  undefined8 uStack_90;
  undefined8 ******ppppppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_f0[4] = 0;
  if (*(char *)(param_2 + 0xc) != '\0') {
    auStack_f0[2] = 0;
    auStack_f0[3] = 0;
    auStack_f0[1] = 0;
    func_0x000104ab5920(param_1,2,"Handshaker shutdown",0x13,&pcStack_98,auStack_f0 + 1);
    pppppppuVar5 = &ppppppuStack_68;
    ppppppuStack_68 = (undefined8 ******)(auStack_f0 + 1);
    func_0x000100482b64();
    goto LAB_1005a6d74;
  }
  if ((int)param_3 != 0) {
    if ((int)param_3 == 4) {
      if (param_5 != 0) {
        uVar7 = 0x186;
        goto LAB_1005a6fa4;
      }
      pppppppuVar5 = (undefined8 *******)*param_2[0xf];
      pppppuVar6 = param_2[0xf][2];
      param_2[0x3d] = (undefined8 ******)FUN_1007271e8;
      param_2[0x3e] = param_2;
      param_2[0x3f] = (undefined8 ******)0x0;
      FUN_1005a7dc4(pppppppuVar5,pppppuVar6,param_2 + 0x3c,1,1);
      *param_1 = 0;
    }
    else {
      pppppuVar6 = param_2[0xf][1];
      FUN_1004ca024();
      if (pppppuVar6 == (undefined8 *****)0x0) {
        ppppppuStack_68 = (undefined8 ******)0x10f29f4ec;
        uStack_60 = 9;
      }
      else {
        (*(code *)(*pppppuVar6)[5])(&ppppppuStack_68);
      }
      pcStack_98 = " handshake failed";
      uStack_90 = 0x11;
      FUN_10047c83c(&pppppppuStack_108,&ppppppuStack_68,&pcStack_98);
      pppppppuVar5 = pppppppuStack_108;
      if (-1 < (char)bStack_f1) {
        uStack_100 = (ulong)bStack_f1;
        pppppppuVar5 = &pppppppuStack_108;
      }
      uStack_120 = 0;
      uStack_118 = 0;
      pppppuStack_128 = (undefined8 *****)0x0;
      func_0x000104ab5920(auStack_f0,2,pppppppuVar5,uStack_100,&uStack_109,&pppppuStack_128);
      func_0x000104ad56e4(param_1,auStack_f0,param_3);
      if ((auStack_f0[0] & 1) != 0) {
        FUN_10084dad0();
      }
      ppppppuStack_c8 = &pppppuStack_128;
      pppppppuVar5 = &ppppppuStack_c8;
      func_0x000100482b64();
      if ((char)bStack_f1 < '\0') {
        func_0x000107c60e14();
        pppppppuVar5 = pppppppuStack_108;
      }
    }
    goto LAB_1005a6d74;
  }
  if (param_6 == (undefined8 ******)0x0) {
    if (param_5 == 0) {
      pppppppuVar5 = (undefined8 *******)*param_2[0xf];
      pppppuVar6 = param_2[0xf][2];
      param_2[0x3d] = (undefined8 ******)FUN_1007271e8;
      param_2[0x3e] = param_2;
      param_2[0x3f] = (undefined8 ******)0x0;
      FUN_1005a7dc4(pppppppuVar5,pppppuVar6,param_2 + 0x3c,1,1);
      ppppppuVar9 = (undefined8 ******)0x0;
    }
    else {
LAB_1005a6e40:
      FUN_1004b6808(&ppppppuStack_68,param_4,param_5);
      pppppppuVar1 = param_2 + 0x13;
      FUN_1005a7050(pppppppuVar1);
      uStack_b8 = uStack_60;
      ppppppuStack_c0 = ppppppuStack_68;
      uStack_a8 = uStack_50;
      uStack_b0 = uStack_58;
      FUN_1005a70c4(pppppppuVar1,&ppppppuStack_c0);
      pppppppuVar5 = (undefined8 *******)*param_2[0xf];
      param_2[0x39] = (undefined8 ******)FUN_1005a7b24;
      param_2[0x3a] = param_2;
      param_2[0x3b] = (undefined8 ******)0x0;
      func_0x0001005a7358(pppppppuVar5,pppppppuVar1,param_2 + 0x38,0,0x7fffffff);
      ppppppuVar9 = (undefined8 ******)0x0;
    }
  }
  else {
    if (param_2[0x45] != (undefined8 ******)0x0) {
      uVar7 = 0x19e;
LAB_1005a6fa4:
      FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/transport/security_handshaker.cc"
                    ,uVar7,2,"assertion failed: %s");
      func_0x000107c60ebc();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1005a6fc8);
      (*pcVar4)();
    }
    param_2[0x45] = param_6;
    if (param_5 != 0) goto LAB_1005a6e40;
    FUN_10073b394(&ppppppuStack_68);
    pppppppuVar5 = param_2;
    ppppppuVar9 = ppppppuStack_68;
  }
  *param_1 = ppppppuVar9;
LAB_1005a6d74:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    func_0x000107c60e78();
    FUN_1004bdf74(auStack_f0 + 4);
    func_0x000107c60bd8();
    if (pppppppuVar5[2] != (undefined8 ******)0x0) {
      ppppppuVar9 = (undefined8 ******)0x0;
      do {
        pppppuVar6 = pppppppuVar5[1][(long)ppppppuVar9 * 4];
        if ((undefined8 *****)0x1 < pppppuVar6) {
          do {
            ppppuVar8 = *pppppuVar6;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pppppuVar6,0x10);
            if (bVar3) {
              *pppppuVar6 = (undefined8 ****)((long)ppppuVar8 + -1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((undefined8 ****)((long)ppppuVar8 + -1) == (undefined8 ****)0x0) {
            (*(code *)pppppuVar6[1])();
          }
        }
        ppppppuVar9 = (undefined8 ******)((long)ppppppuVar9 + 1);
      } while (ppppppuVar9 < pppppppuVar5[2]);
    }
    pppppppuVar5[4] = (undefined8 ******)0x0;
    pppppppuVar5[1] = *pppppppuVar5;
    pppppppuVar5[2] = (undefined8 ******)0x0;
    return;
  }
  return;
}



/* Entry: 1005a7050; end: 1005a70c3;  */

void FUN_1005a7050(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  
  if (param_1[2] != 0) {
    uVar5 = 0;
    do {
      plVar3 = *(long **)(param_1[1] + uVar5 * 0x20);
      if ((long *)0x1 < plVar3) {
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
          (*(code *)plVar3[1])();
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulong)param_1[2]);
  }
  param_1[4] = 0;
  param_1[1] = *param_1;
  param_1[2] = 0;
  return;
}



/* Entry: 1005a70c4; end: 1005a731f;  */

void FUN_1005a70c4(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  byte *pbVar13;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = param_1[2];
  if (lVar11 == 0) {
    lVar9 = *param_2;
    goto LAB_1005a7154;
  }
  lVar7 = param_1[1];
  lVar8 = lVar11 + -1;
  plVar5 = (long *)(lVar7 + lVar8 * 0x20);
  lVar9 = *param_2;
  if (lVar9 == 0 || lVar7 == 0) {
    if (lVar9 == 0) {
      if (*plVar5 == 0) {
        pbVar13 = (byte *)(lVar7 + lVar8 * 0x20 + 8);
        uVar6 = (ulong)*pbVar13;
        if (uVar6 < 0x17) {
          if ((uint)*(byte *)(param_2 + 1) + (uint)*pbVar13 < 0x18) {
            plVar5 = (long *)((long)plVar5 + uVar6 + 9);
            func_0x000107c610b4(plVar5,(long)param_2 + 9);
            *pbVar13 = (char)param_2[1] + *pbVar13;
          }
          else {
            lVar9 = 0x17 - uVar6;
            func_0x000107c610b4((long)plVar5 + uVar6 + 9,(long)param_2 + 9,lVar9);
            *pbVar13 = 0x17;
            FUN_1005a7320(param_1);
            puVar1 = (undefined8 *)(param_1[1] + lVar11 * 0x20);
            param_1[2] = lVar11 + 1;
            *puVar1 = 0;
            *(char *)(puVar1 + 1) = (char)param_2[1] - (char)lVar9;
            plVar5 = (long *)((long)puVar1 + 9);
            func_0x000107c610b4(plVar5,(long)param_2 + 9 + lVar9,
                                (ulong)*(byte *)(param_2 + 1) - lVar9);
          }
LAB_1005a7308:
          param_1[4] = param_1[4] + (ulong)*(byte *)(param_2 + 1);
          goto LAB_1005a71a4;
        }
      }
      lVar9 = 0;
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
LAB_1005a715c:
    uVar12 = param_2[1];
    lVar8 = param_2[3];
    lVar7 = param_2[2];
    plVar5 = param_1;
    FUN_1005a7320();
    plVar10 = (long *)(param_1[1] + lVar11 * 0x20);
    *plVar10 = lVar9;
    plVar10[1] = uVar12;
    plVar10[3] = lVar8;
    plVar10[2] = lVar7;
    uVar6 = uVar12 & 0xff;
    if (!bVar3) {
      uVar6 = uVar12;
    }
    param_1[4] = param_1[4] + uVar6;
    param_1[2] = lVar11 + 1;
  }
  else {
    if (lVar9 != *plVar5) {
LAB_1005a7154:
      bVar3 = lVar9 == 0;
      goto LAB_1005a715c;
    }
    lVar7 = lVar7 + lVar8 * 0x20;
    plVar5 = (long *)(lVar7 + 8);
    lVar8 = *plVar5;
    if (param_2[2] != *(long *)(lVar7 + 0x10) + lVar8) goto LAB_1005a7154;
    *plVar5 = lVar8 + param_2[1];
    plVar5 = (long *)*param_2;
    if (plVar5 == (long *)0x0) goto LAB_1005a7308;
    param_1[4] = param_1[4] + param_2[1];
    if ((long *)0x1 < plVar5) {
      do {
        lVar11 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 + -1 == 0) {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x0001005a72a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)plVar5[1])();
          return;
        }
        goto LAB_1005a731c;
      }
    }
  }
LAB_1005a71a4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
LAB_1005a731c:
  func_0x000107c60e78();
  if (plVar5[2] == 0) {
    plVar5[1] = *plVar5;
    return;
  }
  lVar4 = plVar5[1] - *plVar5 >> 5;
  if (plVar5[2] + lVar4 != plVar5[3]) {
    return;
  }
  if (lVar4 == 0) {
    uVar6 = (ulong)(plVar5[3] * 3) >> 1;
    plVar5[3] = uVar6;
    plVar10 = (long *)*plVar5;
    lVar4 = uVar6 << 5;
    if (plVar10 == plVar5 + 5) {
      FUN_100460200();
      *plVar5 = lVar4;
      func_0x000107c610b4();
      plVar10 = (long *)*plVar5;
    }
    else {
      FUN_1004689e4();
      *plVar5 = (long)plVar10;
    }
    plVar5[1] = (long)plVar10;
  }
  else {
    func_0x000107c610b8(*plVar5,plVar5[1],plVar5[2] << 5);
    plVar5[1] = *plVar5;
  }
  return;
}



/* Entry: 1005a7320; end: 1005a7363;  */

void FUN_1005a7320(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  
  if (param_1[2] == 0) {
    param_1[1] = *param_1;
    return;
  }
  lVar1 = param_1[1] - *param_1 >> 5;
  if (param_1[2] + lVar1 != param_1[3]) {
    return;
  }
  if (lVar1 == 0) {
    uVar2 = (ulong)(param_1[3] * 3) >> 1;
    param_1[3] = uVar2;
    plVar3 = (long *)*param_1;
    lVar1 = uVar2 << 5;
    if (plVar3 == param_1 + 5) {
      FUN_100460200();
      *param_1 = lVar1;
      func_0x000107c610b4();
      plVar3 = (long *)*param_1;
    }
    else {
      FUN_1004689e4();
      *param_1 = (long)plVar3;
    }
    param_1[1] = (long)plVar3;
  }
  else {
    func_0x000107c610b8(*param_1,param_1[1],param_1[2] << 5);
    param_1[1] = *param_1;
  }
  return;
}



/* Entry: 1005a7364; end: 1005a73a3;  */

void FUN_1005a7364(long param_1,ulong param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  undefined1 *puVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined1 *puVar6;
  code *unaff_x30;
  
  puVar3 = &stack0xffffffffffffffe0;
  puVar6 = &stack0xfffffffffffffff0;
  if (*(long *)(param_1 + 0x30) == 0) {
    *(undefined8 *)(param_1 + 0x30) = param_3;
    *(ulong *)(param_1 + 0x40) = param_2;
    func_0x0001004811f0(param_1 + 8);
    param_2 = param_1 + 0x68;
    puVar3 = (undefined1 *)register0x00000008;
    param_1 = *(long *)(param_1 + 0x20);
    puVar6 = unaff_x29;
  }
  else {
    unaff_x30 = FUN_1005a73a4;
    func_0x000107c2c35c();
  }
  puVar4 = (ulong *)(param_1 + 0x18);
  *(undefined8 *)(puVar3 + -0x20) = unaff_x20;
  *(undefined8 *)(puVar3 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar3 + -0x10) = puVar6;
  *(code **)(puVar3 + -8) = unaff_x30;
  do {
    uVar5 = *puVar4;
    if (uVar5 == 0) {
      while (*puVar4 == 0) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar2) {
          *puVar4 = param_2;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          return;
        }
      }
    }
    else {
      if (uVar5 != 2) {
        if ((uVar5 & 1) != 0) {
          func_0x000104ab6ba8(puVar3 + -0x30,uVar5 & 0xfffffffffffffffe);
          func_0x000104aba878(puVar3 + -0x40,2,"FD Shutdown",0xb,puVar3 + -0x41,1,puVar3 + -0x30);
          FUN_1004bd7e8(puVar3 + -0x31,param_2,puVar3 + -0x40);
          if ((*(ulong *)(puVar3 + -0x40) & 1) != 0) {
            FUN_10084dad0();
          }
          if ((*(ulong *)(puVar3 + -0x30) & 1) != 0) {
            FUN_10084dad0();
          }
          return;
        }
        func_0x000107c2c36c();
        func_0x000104bd46a0();
        func_0x000104bd46a0();
        FUN_1004bdf74(puVar3 + -0x40);
        FUN_1004bdf74(puVar3 + -0x30);
        func_0x000107c60bd8(puVar4);
        return;
      }
      while (*puVar4 == 2) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar2) {
          *puVar4 = 0;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          *(undefined8 *)(puVar3 + -0x28) = 0;
          FUN_1004bd7e8(puVar3 + -0x30,param_2,puVar3 + -0x28);
          if ((*(ulong *)(puVar3 + -0x28) & 1) == 0) {
            return;
          }
          FUN_10084dad0();
          return;
        }
      }
    }
    ClearExclusiveLocal();
  } while( true );
}



/* Entry: 1005a73a4; end: 1005a73ab;  */

void FUN_1005a73a4(long param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined1 uStack_41;
  ulong uStack_40;
  undefined1 uStack_31;
  ulong uStack_30;
  ulong uStack_28;
  
  puVar3 = (ulong *)(param_1 + 0x18);
  do {
    uVar4 = *puVar3;
    if (uVar4 == 0) {
      while (*puVar3 == 0) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar2) {
          *puVar3 = param_2;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          return;
        }
      }
    }
    else {
      if (uVar4 != 2) {
        if ((uVar4 & 1) != 0) {
          func_0x000104ab6ba8(&uStack_30,uVar4 & 0xfffffffffffffffe);
          func_0x000104aba878(&uStack_40,2,"FD Shutdown",0xb,&uStack_41,1,&uStack_30);
          FUN_1004bd7e8(&uStack_31,param_2,&uStack_40);
          if ((uStack_40 & 1) != 0) {
            FUN_10084dad0();
          }
          if ((uStack_30 & 1) != 0) {
            FUN_10084dad0();
          }
          return;
        }
        func_0x000107c2c36c();
        func_0x000104bd46a0();
        func_0x000104bd46a0();
        FUN_1004bdf74(&uStack_40);
        FUN_1004bdf74(&uStack_30);
        func_0x000107c60bd8(puVar3);
        return;
      }
      while (*puVar3 == 2) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar2) {
          *puVar3 = 0;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          uStack_28 = 0;
          FUN_1004bd7e8(&uStack_30,param_2,&uStack_28);
          if ((uStack_28 & 1) == 0) {
            return;
          }
          FUN_10084dad0();
          return;
        }
      }
    }
    ClearExclusiveLocal();
  } while( true );
}



/* Entry: 1005a73ac; end: 1005a73ef;  */

void FUN_1005a73ac(long *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1 + 0x28;
  FUN_1005a5e70();
  if ((param_1 != (long *)0x0) && (iVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001005a73e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))(param_1);
    return;
  }
  return;
}



/* Entry: 1005a73f0; end: 1005a762f;  */

void FUN_1005a73f0(undefined8 param_1,long param_2,long param_3)

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
  func_0x0001004b62b4(&uStack_48,0);
  FUN_100460de4(auStack_90);
  uStack_98 = 0;
  if (param_2 < 8) {
    if (param_2 != 1) {
      if (param_2 != 4) {
LAB_1005a7448:
        func_0x000104a6e964(&UNK_10f48d1b8,
                            "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/cfstream_handle.cc"
                            ,0x7f);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1005a7464);
        (*pcVar4)();
      }
      goto LAB_1005a7474;
    }
    param_3 = param_3 + 8;
  }
  else {
    if (param_2 == 8) {
      func_0x000107c60870(param_1);
      func_0x000104abac74(&uStack_a8,
                          "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/cfstream_handle.cc"
                          ,0x76,param_1,"write error");
      func_0x000104abaa50(&uStack_a0,&uStack_a8,3,0xe);
      uVar3 = uStack_a0;
      if (uStack_a0 != 0) {
        uStack_a0 = 0x36;
        uStack_98 = uVar3;
      }
      if ((uStack_a8 & 1) != 0) {
        FUN_10084dad0();
      }
      func_0x000107c607f0(param_1);
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
      func_0x000104abe838(param_3 + 8,&uStack_b0);
      if ((uStack_b0 & 1) != 0) {
        FUN_10084dad0();
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
      func_0x000104abe838(param_3 + 0x18,&uStack_b8);
      if ((uStack_b8 & 1) != 0) {
        FUN_10084dad0();
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
      func_0x000104abe838(param_3 + 0x10,&uStack_c0);
      if ((uStack_c0 & 1) != 0) {
        FUN_10084dad0();
      }
      if ((uVar3 & 1) != 0) {
        FUN_10084dad0(uVar3);
      }
      goto LAB_1005a7484;
    }
    if (param_2 != 0x10) goto LAB_1005a7448;
LAB_1005a7474:
    param_3 = param_3 + 0x18;
  }
  FUN_1005a5724(param_3);
LAB_1005a7484:
  FUN_100467a48(auStack_90);
  FUN_1004b6ddc(&uStack_48);
  return;
}



/* Entry: 1005a7630; end: 1005a79cb;  */

/* WARNING: Possible PIC construction at 0x0001005a7ae8: Changing call to branch */

void FUN_1005a7630(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  ulong **ppuVar10;
  int *piVar11;
  long *extraout_x8;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong *puStack_130;
  undefined1 uStack_121;
  ulong *puStack_120;
  ulong *puStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  ulong *puStack_f0;
  ulong *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c1;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong *puStack_b0;
  undefined8 *puStack_a8;
  ulong *puStack_a0;
  ulong uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [32];
  ulong *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  ppuVar10 = &puStack_f0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1[6] == 0) {
    func_0x000107c2c354();
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1005a7930);
    (*pcVar4)();
  }
  if (*param_2 != 0) {
    FUN_1005a7050(param_1[8]);
    param_2 = (ulong *)*param_2;
    if (((ulong)param_2 & 1) != 0) {
      piVar11 = (int *)((long)param_2 + -1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar3) {
          *piVar11 = *piVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppuVar10 = &puStack_b0;
    puVar6 = param_1;
    puStack_b0 = param_2;
    FUN_1005a7a18();
    if (((ulong)param_2 & 1) != 0) {
      puVar6 = param_2;
      FUN_10084dad0();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      iVar5 = (int)param_1 + 8;
      FUN_1005a5e70();
      if (iVar5 == 0) {
        return;
      }
      func_0x000107c607f0(param_1[2]);
      func_0x000107c607f0(param_1[3]);
      FUN_1005a5ea4(param_1[4],"",0,0);
      if (*(char *)((long)param_1 + 0xb7) < '\0') {
        param_1 = (ulong *)param_1[0x14];
      }
      else if (*(char *)((long)param_1 + 0x9f) < '\0') {
        func_0x000107c60e14(param_1[0x11]);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(param_1);
      return;
    }
    goto LAB_1005a7930;
  }
  FUN_1005a79cc(&puStack_58,param_1[8]);
  uVar12 = uStack_50 & 0xff;
  if (puStack_58 != (ulong *)0x0) {
    uVar12 = uStack_50;
  }
  uVar7 = param_1[3];
  lVar14 = (long)&uStack_50 + 1;
  if (puStack_58 != (ulong *)0x0) {
    lVar14 = lStack_48;
  }
  func_0x000107c60880(uVar7,lVar14,uVar12);
  if (uVar7 == 0xffffffffffffffff) {
    FUN_1005a7050(param_1[8]);
    uVar12 = param_1[3];
    func_0x000107c60870();
    if (uVar12 == 0) {
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_e0 = 0;
      func_0x000104ab5920(&uStack_c0,2,"write failed.",0xd,&uStack_c1,&uStack_e0);
      uVar12 = *param_2;
      if (uStack_c0 == uVar12) {
LAB_1005a787c:
        if ((uVar12 & 1) != 0) {
          FUN_10084dad0();
        }
      }
      else {
        *param_2 = uStack_c0;
        uStack_c0 = 0x36;
        if ((uVar12 & 1) != 0) {
          FUN_10084dad0();
          uVar12 = uStack_c0;
          goto LAB_1005a787c;
        }
      }
      puStack_a8 = &uStack_e0;
      func_0x000100482b64(&puStack_a8);
    }
    else {
      func_0x000104abac74(&uStack_b8,
                          "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/endpoint_cfstream.cc"
                          ,0xd0,uVar12,"write failed.");
      func_0x000104aba7a8(&puStack_a8,&uStack_b8,param_1);
      puVar8 = (undefined8 *)*param_2;
      if (puStack_a8 == puVar8) {
LAB_1005a77f0:
        if (((ulong)puVar8 & 1) != 0) {
          FUN_10084dad0();
        }
      }
      else {
        *param_2 = (ulong)puStack_a8;
        puStack_a8 = (undefined8 *)0x36;
        if (((ulong)puVar8 & 1) != 0) {
          FUN_10084dad0();
          puVar8 = puStack_a8;
          goto LAB_1005a77f0;
        }
      }
      if ((uStack_b8 & 1) != 0) {
        FUN_10084dad0();
      }
      func_0x000107c607f0(uVar12);
    }
    param_2 = (ulong *)*param_2;
    if (((ulong)param_2 & 1) != 0) {
      piVar11 = (int *)((long)param_2 + -1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar3) {
          *piVar11 = *piVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppuVar10 = &puStack_e8;
    puStack_e8 = param_2;
    FUN_1005a7a18(param_1);
    if (((ulong)param_2 & 1) != 0) {
      FUN_10084dad0(param_2);
    }
    FUN_1005a7a98(param_1);
  }
  else {
    uVar1 = uStack_50 & 0xff;
    if (puStack_58 != (ulong *)0x0) {
      uVar1 = uStack_50;
    }
    if ((long)uVar7 < (long)uVar1) {
      param_2 = (ulong *)param_1[8];
      uStack_98 = uStack_50;
      puStack_a0 = puStack_58;
      uStack_88 = uStack_40;
      lStack_90 = lStack_48;
      func_0x000104ad77f4(auStack_78,&puStack_a0,uVar7,uVar12);
      func_0x000104ad7ae8(param_2,auStack_78);
    }
    if (*(long *)(param_1[8] + 0x20) == 0) {
      puStack_f0 = (ulong *)0x0;
      FUN_1005a7a18(param_1);
      FUN_1005a7a98(param_1);
    }
    else {
      ppuVar10 = (ulong **)(param_1 + 0xd);
      FUN_1005a73a4(param_1[4]);
    }
  }
  if ((ulong *)0x1 < puStack_58) {
    do {
      uVar12 = *puStack_58;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puStack_58,0x10);
      if (bVar3) {
        *puStack_58 = uVar12 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar12 - 1 == 0) {
      (*(code *)puStack_58[1])();
    }
  }
  puVar6 = puStack_58;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
LAB_1005a7930:
  func_0x000107c60e78();
  FUN_1004bdf74(&uStack_c0);
  puStack_a8 = &uStack_e0;
  func_0x000100482b64(&puStack_a8);
  puVar9 = puVar6;
  func_0x000107c60bd8();
  puStack_110 = (undefined1 *)&puStack_100;
  pcStack_f8 = FUN_1005a79cc;
  uVar12 = puVar9[2];
  if (uVar12 == 0) {
    puStack_100 = &stack0xfffffffffffffff0;
    func_0x000107c2c3f8();
    pcStack_108 = FUN_1005a7a18;
    uVar12 = puVar9[6];
    puVar9[6] = 0;
    puVar9[8] = 0;
    puStack_130 = *ppuVar10;
    if (((ulong)puStack_130 & 1) != 0) {
      piVar11 = (int *)((long)puStack_130 + -1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar3) {
          *piVar11 = *piVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puStack_120 = param_2;
    puStack_118 = puVar6;
    FUN_1004bd7e8(&uStack_121,uVar12,&puStack_130);
    if (((ulong)puStack_130 & 1) != 0) {
      FUN_10084dad0();
    }
    return;
  }
  plVar13 = (long *)puVar9[1];
  lVar14 = *plVar13;
  lVar16 = plVar13[3];
  lVar15 = plVar13[2];
  extraout_x8[1] = plVar13[1];
  *extraout_x8 = lVar14;
  extraout_x8[3] = lVar16;
  extraout_x8[2] = lVar15;
  puVar9[1] = (ulong)(plVar13 + 4);
  puVar9[2] = uVar12 - 1;
  uVar12 = extraout_x8[1] & 0xff;
  if (*extraout_x8 != 0) {
    uVar12 = extraout_x8[1];
  }
  puVar9[4] = puVar9[4] - uVar12;
  return;
}



/* Entry: 1005a79cc; end: 1005a7a17;  */

void FUN_1005a79cc(long *param_1,long param_2,ulong *param_3)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  int *piVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uStack_40;
  undefined1 uStack_31;
  
  lVar6 = *(long *)(param_2 + 0x10);
  if (lVar6 != 0) {
    plVar7 = *(long **)(param_2 + 8);
    lVar8 = *plVar7;
    lVar10 = plVar7[3];
    lVar9 = plVar7[2];
    param_1[1] = plVar7[1];
    *param_1 = lVar8;
    param_1[3] = lVar10;
    param_1[2] = lVar9;
    *(long **)(param_2 + 8) = plVar7 + 4;
    *(long *)(param_2 + 0x10) = lVar6 + -1;
    uVar1 = param_1[1] & 0xff;
    if (*param_1 != 0) {
      uVar1 = param_1[1];
    }
    *(ulong *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) - uVar1;
    return;
  }
  func_0x000107c2c3f8();
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  uStack_40 = *param_3;
  if ((uStack_40 & 1) != 0) {
    piVar5 = (int *)(uStack_40 - 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = *piVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_1004bd7e8(&uStack_31,uVar4,&uStack_40);
  if ((uStack_40 & 1) != 0) {
    FUN_10084dad0();
  }
  return;
}



/* Entry: 1005a7a18; end: 1005a7a97;  */

void FUN_1005a7a18(long param_1,ulong *param_2)

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
  FUN_1004bd7e8(&uStack_21,uVar3,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    FUN_10084dad0();
  }
  return;
}



/* Entry: 1005a7a98; end: 1005a7b17;  */

/* WARNING: Possible PIC construction at 0x0001005a7ae8: Changing call to branch */

void FUN_1005a7a98(long param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1 + 8;
  FUN_1005a5e70();
  if (iVar1 == 0) {
    return;
  }
  func_0x000107c607f0(*(undefined8 *)(param_1 + 0x10));
  func_0x000107c607f0(*(undefined8 *)(param_1 + 0x18));
  FUN_1005a5ea4(*(undefined8 *)(param_1 + 0x20),"",0,0);
  if (*(char *)(param_1 + 0xb7) < '\0') {
    param_1 = *(long *)(param_1 + 0xa0);
  }
  else if (*(char *)(param_1 + 0x9f) < '\0') {
    func_0x000107c60e14(*(undefined8 *)(param_1 + 0x88));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1005a7b18; end: 1005a7b23;  */

void FUN_1005a7b18(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 1005a7b24; end: 1005a7bab;  */

void FUN_1005a7b24(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uStack_30;
  undefined1 uStack_21;
  
  *(code **)(param_1 + 0x1c8) = FUN_1005a7bac;
  *(long *)(param_1 + 0x1d0) = param_1;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
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
  FUN_1004bd7e8(&uStack_21,param_1 + 0x1c0,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    FUN_10084dad0();
  }
  return;
}



/* Entry: 1005a7bac; end: 1005a7dc3;  */

void FUN_1005a7bac(long *param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  plVar1 = param_1 + 4;
  FUN_100460448(plVar1);
  if ((*param_2 != 0) || ((char)param_1[0xc] != '\0')) {
    func_0x000104aba878(&uStack_38,2,"Handshake write failed",0x16,&uStack_40,1,param_2);
    func_0x000104ad2400(param_1,&uStack_38);
    if ((uStack_38 & 1) != 0) {
      FUN_10084dad0();
    }
    goto LAB_1005a7c24;
  }
  if (param_1[0x45] == 0) {
    uVar5 = *(undefined8 *)param_1[0xf];
    uVar6 = ((undefined8 *)param_1[0xf])[2];
    param_1[0x3d] = (long)FUN_1007271e8;
    param_1[0x3e] = (long)param_1;
    param_1[0x3f] = 0;
    FUN_1005a7dc4(uVar5,uVar6,param_1 + 0x3c,1,1);
    param_1 = (long *)0x0;
    goto LAB_1005a7c24;
  }
  FUN_10073b394(&uStack_40,param_1);
  uVar7 = uStack_40;
  uVar4 = *param_2;
  if (uStack_40 == uVar4) {
LAB_1005a7c98:
    if ((uVar4 & 1) != 0) {
      FUN_10084dad0();
    }
    uVar7 = *param_2;
  }
  else {
    *param_2 = uStack_40;
    uStack_40 = 0x36;
    if ((uVar4 & 1) != 0) {
      FUN_10084dad0();
      uVar4 = uStack_40;
      goto LAB_1005a7c98;
    }
  }
  if (uVar7 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    if ((uVar7 & 1) != 0) {
      piVar8 = (int *)(uVar7 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = *piVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_48 = uVar7;
    func_0x000104ad2400(param_1,&uStack_48);
    if ((uStack_48 & 1) != 0) {
      FUN_10084dad0();
    }
  }
LAB_1005a7c24:
  func_0x000100466b80(plVar1);
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(*param_1 + 8))(param_1);
    }
  }
  return;
}



/* Entry: 1005a7dc4; end: 1005a7dcf;  */

void FUN_1005a7dc4(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001005a7dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}



/* Entry: 1005a7dd0; end: 1005a7ec3;  */

/* WARNING: Possible PIC construction at 0x0001005a7e18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005a7e1c) */
/* WARNING: Removing unreachable block (ram,0x0001005a7e54) */

void FUN_1005a7dd0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *extraout_x8;
  undefined8 *puVar2;
  undefined8 auStack_48 [4];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x28) == 0) {
    *(undefined8 *)(param_1 + 0x28) = param_3;
    *(undefined8 *)(param_1 + 0x38) = param_2;
    FUN_1005a7050(param_2);
    puVar2 = auStack_48;
    param_1 = 0x2000;
  }
  else {
    func_0x000107c2c358();
    func_0x000107c60e78();
    puVar2 = extraout_x8;
  }
  if (param_1 < 0x18) {
    puVar1 = (undefined8 *)0x0;
    *(char *)(puVar2 + 1) = (char)param_1;
  }
  else {
    puVar1 = (undefined8 *)(param_1 + 0x10);
    func_0x000107c60e1c();
    *puVar1 = 1;
    puVar1[1] = FUN_1005a7b18;
    puVar2[1] = param_1;
    puVar2[2] = puVar1 + 2;
  }
  *puVar2 = puVar1;
  return;
}



/* Entry: 1005a7ec4; end: 1005a7f2f;  */

long FUN_1005a7ec4(long param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar3 = *(long *)(param_1 + 0x10);
  FUN_1005a7320();
  plVar1 = (long *)(*(long *)(param_1 + 8) + lVar3 * 0x20);
  lVar4 = *param_2;
  lVar6 = param_2[3];
  lVar5 = param_2[2];
  plVar1[1] = param_2[1];
  *plVar1 = lVar4;
  plVar1[3] = lVar6;
  plVar1[2] = lVar5;
  if (*param_2 == 0) {
    uVar2 = (ulong)*(byte *)(param_2 + 1);
  }
  else {
    uVar2 = param_2[1];
  }
  *(ulong *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + uVar2;
  *(long *)(param_1 + 0x10) = lVar3 + 1;
  return lVar3;
}



/* Entry: 1005a7f30; end: 1005a7f37;  */

void FUN_1005a7f30(long param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined1 uStack_41;
  ulong uStack_40;
  undefined1 uStack_31;
  ulong uStack_30;
  ulong uStack_28;
  
  puVar3 = (ulong *)(param_1 + 0x10);
  do {
    uVar4 = *puVar3;
    if (uVar4 == 0) {
      while (*puVar3 == 0) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar2) {
          *puVar3 = param_2;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          return;
        }
      }
    }
    else {
      if (uVar4 != 2) {
        if ((uVar4 & 1) != 0) {
          func_0x000104ab6ba8(&uStack_30,uVar4 & 0xfffffffffffffffe);
          func_0x000104aba878(&uStack_40,2,"FD Shutdown",0xb,&uStack_41,1,&uStack_30);
          FUN_1004bd7e8(&uStack_31,param_2,&uStack_40);
          if ((uStack_40 & 1) != 0) {
            FUN_10084dad0();
          }
          if ((uStack_30 & 1) != 0) {
            FUN_10084dad0();
          }
          return;
        }
        func_0x000107c2c36c();
        func_0x000104bd46a0();
        func_0x000104bd46a0();
        FUN_1004bdf74(&uStack_40);
        FUN_1004bdf74(&uStack_30);
        func_0x000107c60bd8(puVar3);
        return;
      }
      while (*puVar3 == 2) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar2) {
          *puVar3 = 0;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          uStack_28 = 0;
          FUN_1004bd7e8(&uStack_30,param_2,&uStack_28);
          if ((uStack_28 & 1) == 0) {
            return;
          }
          FUN_10084dad0();
          return;
        }
      }
    }
    ClearExclusiveLocal();
  } while( true );
}



/* Entry: 1005a7f38; end: 1005a805b; -[SCCDNSelectionManager setUrlToCache:url:] */

/* WARNING: Possible PIC construction at 0x0001005a7f88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005a7f8c) */

void FUN_1005a7f38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  func_0x000107c61174(param_4);
  lVar1 = param_1;
  func_0x000107c43f40(param_1,param_2,param_3);
  func_0x000107c61180();
  func_0x000107c56bcc(*(undefined8 *)(param_1 + 8),param_2,param_4,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1005a805c; end: 1005a8063; -[SCRequest setEstimatedRequestSize:] */

void FUN_1005a805c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x158) = param_3;
  return;
}



/* Entry: 1005a8064; end: 1005a806b; -[SCRequest isFSNAuthInPayload] */

undefined1 FUN_1005a8064(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1f);
}



/* Entry: 1005a806c; end: 1005a8137;  */

/* WARNING: Possible PIC construction at 0x0001005a80e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005a80ec) */

void FUN_1005a806c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126dff00;
  func_0x000107c610f4();
  puVar3 = PTR_PTR_1126dff08;
  func_0x000107c610f4(PTR_PTR_1126dff08);
  func_0x000107c467c4();
  func_0x000107c4836c(puVar2,param_2,0,0,puVar3,0);
  uVar1 = puRam00000001137f4558;
  puRam00000001137f4558 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1005a8138; end: 1005a8247; -[SCNNetworkTypesDebugInfo initWithEstimatedRTTInMs:longestCronetCallbackIntervalInMs:calculatedDyanmicTiemoutInMs:networkQuality:contextUpdateLifecycle:latencyEstimation:isThrottled:] */

undefined1 *
FUN_1005a8138(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_58 = PTR_PTR_11270b858;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    *(undefined4 *)((long)puVar1 + 0xc) = param_6;
    uVar2 = param_7;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_8;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_9;
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 1005a8248; end: 1005a836f; -[SCNNetworkTypesRequestResponseInfo initWithRequestInfo:responseInfo:debugInfo:failoverAdvice:] */

undefined1 *
FUN_1005a8248(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_11270b8c8;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1005a8370; end: 1005a843f; -[SCNNetworkTypesError initWithErrorCode:message:internalErrorCode:immediatelyRetryable:quicDetailedErrorCode:] */

undefined1 *
FUN_1005a8370(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5,undefined1 param_6,undefined4 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_4);
  puStack_58 = PTR_PTR_11270b868;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0xc) = param_3;
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    *(undefined4 *)((long)puVar1 + 0x10) = param_5;
    *(undefined4 *)((long)puVar1 + 0x14) = param_7;
  }
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1005a8440; end: 1005a8513; -[SCRequestSuccessFailureTask _addSuccessQueue:successBlock:] */

/* WARNING: Possible PIC construction at 0x0001005a84a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a84d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a84f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005a84d8) */
/* WARNING: Removing unreachable block (ram,0x0001005a84a8) */
/* WARNING: Removing unreachable block (ram,0x0001005a84ac) */
/* WARNING: Removing unreachable block (ram,0x0001005a84fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005a8440(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11278dd44);
    func_0x000107c61184(param_4);
    func_0x000107c40404(uVar1,param_2,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1005a8514; end: 1005a85e7; -[SCRequestSuccessFailureTask _addFailureQueue:failureBlock:] */

/* WARNING: Possible PIC construction at 0x0001005a8578: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a85a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a85cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005a85ac) */
/* WARNING: Removing unreachable block (ram,0x0001005a857c) */
/* WARNING: Removing unreachable block (ram,0x0001005a8580) */
/* WARNING: Removing unreachable block (ram,0x0001005a85d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005a8514(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11278dd48);
    func_0x000107c61184(param_4);
    func_0x000107c40404(uVar1,param_2,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1005a85e8; end: 1005a85ef; -[SCRequestScheduler nonFatalReporter] */

undefined8 FUN_1005a85e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1005a85f0; end: 1005a85fb; -[SCRequestTask setNonFatalReporter:] */

void FUN_1005a85f0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 1005a85fc; end: 1005a8667; -[SCRequestTask didEnqueueTaskWithTimestampForFirstAttempt:] */

/* WARNING: Possible PIC construction at 0x0001005a8634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005a8638) */

void FUN_1005a85fc(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c50300();
  func_0x000107c61180();
  func_0x000107c41b7c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1005a8668; end: 1005a866f; -[SCRequestTask request] */

undefined8 FUN_1005a8668(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1005a8670; end: 1005a86fb; -[SCRequest didEnqueueWithTimestamp:refreshEnqueueTime:] */

void FUN_1005a8670(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  func_0x000107c58c40(param_2,param_3,1);
  puVar1 = PTR_PTR_1126ae520;
  func_0x000107c5a9bc();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c3dfc0();
  *(undefined **)(param_2 + 0xf8) = puVar2;
  func_0x000107c61170(puVar1);
  if (((param_4 & 1) != 0) || ((*(byte *)(param_2 + 0x1e) & 1) == 0)) {
    *(undefined8 *)(param_2 + 0x160) = param_1;
  }
  lVar3 = param_2;
  func_0x000107c5d9b8();
  if ((int)lVar3 != 0) {
    *(undefined8 *)(param_2 + 0x150) = *(undefined8 *)(param_2 + 0x160);
  }
  *(undefined8 *)(param_2 + 0x148) = 0;
  return;
}



/* Entry: 1005a86fc; end: 1005a8707; -[SCRequest setSchedulingState:] */

void FUN_1005a86fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xf0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1f68d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setSchedulingState__11265b458);
  return;
}



/* Entry: 1005a8708; end: 1005a8767;  */

void FUN_1005a8708(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_2;
  func_0x000107c60c40(param_2);
  func_0x000107c60dc4();
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar4);
  return;
}



/* Entry: 1005a8768; end: 1005a883f; -[SCRequestSchedulingStateListenerAnnouncer setSchedulingState:] */

void FUN_1005a8768(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_40;
  long *plStack_38;
  
  FUN_1005a8708(&plStack_40,param_1 + 0x48);
  if (plStack_40 != (long *)0x0) {
    lVar2 = plStack_40[1];
    for (lVar6 = *plStack_40; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      func_0x000107c61148(lVar6);
      func_0x000107c58c40();
      func_0x000107c61170(lVar5);
    }
  }
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_38);
      return;
    }
  }
  return;
}



/* Entry: 1005a8840; end: 1005a8847; -[SCRequest userInitiated] */

undefined1 FUN_1005a8840(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 1005a8848; end: 1005a884f; -[SCRequestTask logger] */

undefined8 FUN_1005a8848(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1005a8850; end: 1005a8873; -[SCRequestTaskLogger taskDidEnqueue:] */

void FUN_1005a8850(undefined8 param_1,long param_2)

{
  func_0x000107c6071c();
  *(undefined8 *)(param_2 + 8) = param_1;
  return;
}



/* Entry: 1005a8874; end: 1005a8a07;  */

void FUN_1005a8874(double param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  
  func_0x000107c6071c();
  dVar10 = *(double *)(param_2 + 0x38);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c4a8c4(uVar1);
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d974(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c4bbe0(*(undefined8 *)(param_2 + 0x20));
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar1);
  lVar3 = *(long *)(*(long *)(param_2 + 0x28) + 0x80);
  func_0x000107c40808(lVar3);
  lVar4 = *(long *)(*(long *)(param_2 + 0x28) + 0x70);
  func_0x000107c5c770(lVar4);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c5d7e8(uVar5);
  func_0x000107c61180();
  uVar1 = uVar5;
  func_0x000107c4e430();
  func_0x000107c61180();
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c4d5b4(uVar6);
  func_0x000107c61180();
  uVar7 = uVar6;
  func_0x000107c5bcac();
  func_0x000107c61180();
  uVar8 = uVar7;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar9 = uVar8;
  func_0x000107c5bcb8();
  func_0x0001005a8a60();
  func_0x000107c61180();
  FUN_1005a8a80(param_1 - dVar10,lVar4 + lVar3,uVar1,uVar9,
                *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x38));
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc8910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + 0x28),PTR_s__addTask__11254fbe0,
             *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x30) + 8) + 0x28));
  return;
}



/* Entry: 1005a8a08; end: 1005a8a43; -[SCRequestTaskPool taskCount] */

undefined8 FUN_1005a8a08(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c5c79c();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c40808();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 1005a8a44; end: 1005a8a4b; -[SCRequestTaskPool tasks] */

undefined8 FUN_1005a8a44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1005a8a4c; end: 1005a8a53; -[SCRequestScheduler networkDeps] */

undefined8 FUN_1005a8a4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1005a8a54; end: 1005a8a7f; -[SCNetworkDeps startupInfoService] */

void FUN_1005a8a54(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x60,1);
  return;
}



/* Entry: 1005a8a80; end: 1005a8bef;  */

/* WARNING: Possible PIC construction at 0x0001005a8bc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005a8bcc) */

void FUN_1005a8a80(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  ppuVar1 = &PTR____CFConstantStringClassReference_110f60b58;
  if (99 < param_2) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f60b78;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f60b38;
  if (0x45 < param_2) {
    ppuVar2 = ppuVar1;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f60b18;
  if (0x31 < param_2) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f60af8;
  if (0x1d < param_2) {
    ppuVar2 = ppuVar1;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f60ad8;
  if (0x13 < param_2) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f60ab8;
  if (0xe < param_2) {
    ppuVar2 = ppuVar1;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110e65798;
  if (9 < param_2) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f60a98;
  if (4 < param_2) {
    ppuVar2 = ppuVar1;
  }
  uVar3 = param_3;
  FUN_1005a8bf0();
  if ((int)uVar3 == 0) {
    FUN_1005a8cb4(param_5,ppuVar2,param_4,&PTR____CFConstantStringClassReference_110f60b98,1);
    FUN_1005a8f98(param_1,param_5,ppuVar2,param_4,&PTR____CFConstantStringClassReference_110f60b98);
  }
  else {
    func_0x000107c2bf80(param_5,ppuVar2,param_4,param_3,1);
    func_0x000107c2bf84(param_1,param_5,ppuVar2,param_4,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1005a8bf0; end: 1005a8c63;  */

undefined8 FUN_1005a8bf0(long param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = uRam00000001137f45a0;
  if (lRam00000001137f45a8 != -1) {
    FUN_10002a2fc(0x1137f45a8,&PTR___NSConcreteGlobalBlock_110ccc2a0);
    uVar1 = uRam00000001137f45a0;
  }
  uRam00000001137f45a0 = uVar1;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c40404(uVar1);
  }
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 1005a8c64; end: 1005a8cb3;  */

void FUN_1005a8c64(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x000107c5a790(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR____CFConstantStringClassReference_110f60458);
  func_0x000107c61180();
  uVar1 = puRam00000001137f45a0;
  puRam00000001137f45a0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1005a8cb4; end: 1005a8f97;  */

/* WARNING: Possible PIC construction at 0x0001005a8d5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a8da4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a8dec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a8e7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a8e8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a8ed0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a8f74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a8f84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a9004: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005a8f88) */
/* WARNING: Removing unreachable block (ram,0x0001005a8f90) */
/* WARNING: Removing unreachable block (ram,0x0001005a8fdc) */
/* WARNING: Removing unreachable block (ram,0x0001005a9000) */
/* WARNING: Removing unreachable block (ram,0x0001005a8f78) */
/* WARNING: Removing unreachable block (ram,0x0001005a8ed4) */
/* WARNING: Removing unreachable block (ram,0x0001005a8f48) */
/* WARNING: Removing unreachable block (ram,0x0001005a8f4c) */
/* WARNING: Removing unreachable block (ram,0x0001005a8f58) */
/* WARNING: Removing unreachable block (ram,0x0001005a8f60) */
/* WARNING: Removing unreachable block (ram,0x0001005a8f68) */
/* WARNING: Removing unreachable block (ram,0x0001005a8f70) */
/* WARNING: Removing unreachable block (ram,0x0001005a8e90) */
/* WARNING: Removing unreachable block (ram,0x0001005a8ec4) */
/* WARNING: Removing unreachable block (ram,0x0001005a8ea8) */
/* WARNING: Removing unreachable block (ram,0x0001005a8e80) */
/* WARNING: Removing unreachable block (ram,0x0001005a8df0) */
/* WARNING: Removing unreachable block (ram,0x0001005a8e58) */
/* WARNING: Removing unreachable block (ram,0x0001005a8e64) */
/* WARNING: Removing unreachable block (ram,0x0001005a8e6c) */
/* WARNING: Removing unreachable block (ram,0x0001005a8da8) */
/* WARNING: Removing unreachable block (ram,0x0001005a8de0) */
/* WARNING: Removing unreachable block (ram,0x0001005a8dc8) */
/* WARNING: Removing unreachable block (ram,0x0001005a8de8) */
/* WARNING: Removing unreachable block (ram,0x0001005a8d60) */
/* WARNING: Removing unreachable block (ram,0x0001005a8d98) */
/* WARNING: Removing unreachable block (ram,0x0001005a8d80) */
/* WARNING: Removing unreachable block (ram,0x0001005a8da0) */
/* WARNING: Removing unreachable block (ram,0x0001005a9008) */

void FUN_1005a8cb4(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110cccc38);
    if (((int)plVar1 != 0) && (func_0x000107c61174(param_2), param_4 = param_2, param_2 != 0)) {
      func_0x000107c61178(param_2);
      func_0x000107c3ac4c();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1005a8f98; end: 1005a904b;  */

/* WARNING: Possible PIC construction at 0x0001005a9004: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005a9008) */

void FUN_1005a8f98(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  if (param_2 != 0) {
    FUN_1005a904c(param_2,param_3,param_4,param_5,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1005a904c; end: 1005a932b;  */

/* WARNING: Possible PIC construction at 0x0001005a90f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a913c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a9184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a9210: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a9220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a9264: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a9308: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a9318: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a93a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a93b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a93e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a9430: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a9488: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a9498: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a94bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a9548: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a9528: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a9538: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005a952c) */
/* WARNING: Removing unreachable block (ram,0x0001005a954c) */
/* WARNING: Removing unreachable block (ram,0x0001005a94c0) */
/* WARNING: Removing unreachable block (ram,0x0001005a948c) */
/* WARNING: Removing unreachable block (ram,0x0001005a9434) */
/* WARNING: Removing unreachable block (ram,0x0001005a93e8) */
/* WARNING: Removing unreachable block (ram,0x0001005a94d4) */
/* WARNING: Removing unreachable block (ram,0x0001005a93fc) */
/* WARNING: Removing unreachable block (ram,0x0001005a93b8) */
/* WARNING: Removing unreachable block (ram,0x0001005a949c) */
/* WARNING: Removing unreachable block (ram,0x0001005a93bc) */
/* WARNING: Removing unreachable block (ram,0x0001005a93a8) */
/* WARNING: Removing unreachable block (ram,0x0001005a931c) */
/* WARNING: Removing unreachable block (ram,0x0001005a9324) */
/* WARNING: Removing unreachable block (ram,0x0001005a930c) */
/* WARNING: Removing unreachable block (ram,0x0001005a9268) */
/* WARNING: Removing unreachable block (ram,0x0001005a92dc) */
/* WARNING: Removing unreachable block (ram,0x0001005a92e0) */
/* WARNING: Removing unreachable block (ram,0x0001005a92ec) */
/* WARNING: Removing unreachable block (ram,0x0001005a92f4) */
/* WARNING: Removing unreachable block (ram,0x0001005a92fc) */
/* WARNING: Removing unreachable block (ram,0x0001005a9304) */
/* WARNING: Removing unreachable block (ram,0x0001005a9224) */
/* WARNING: Removing unreachable block (ram,0x0001005a9258) */
/* WARNING: Removing unreachable block (ram,0x0001005a923c) */
/* WARNING: Removing unreachable block (ram,0x0001005a9214) */
/* WARNING: Removing unreachable block (ram,0x0001005a9188) */
/* WARNING: Removing unreachable block (ram,0x0001005a91ec) */
/* WARNING: Removing unreachable block (ram,0x0001005a91f8) */
/* WARNING: Removing unreachable block (ram,0x0001005a9200) */
/* WARNING: Removing unreachable block (ram,0x0001005a9140) */
/* WARNING: Removing unreachable block (ram,0x0001005a9178) */
/* WARNING: Removing unreachable block (ram,0x0001005a9160) */
/* WARNING: Removing unreachable block (ram,0x0001005a9180) */
/* WARNING: Removing unreachable block (ram,0x0001005a90f8) */
/* WARNING: Removing unreachable block (ram,0x0001005a9130) */
/* WARNING: Removing unreachable block (ram,0x0001005a9118) */
/* WARNING: Removing unreachable block (ram,0x0001005a9138) */
/* WARNING: Removing unreachable block (ram,0x0001005a953c) */
/* WARNING: Removing unreachable block (ram,0x0001005a9544) */

void FUN_1005a904c(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110cccc88);
    if (((int)plVar1 != 0) && (func_0x000107c61174(param_2), param_4 = param_2, param_2 != 0)) {
      func_0x000107c61178(param_2);
      func_0x000107c3ac4c();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1005a932c; end: 1005a9563; -[SCRequestScheduler _addTask:] */

/* WARNING: Possible PIC construction at 0x0001005a93a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a93b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a93e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a9430: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a9488: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a9498: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a94bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a9548: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a9528: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a9538: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005a952c) */
/* WARNING: Removing unreachable block (ram,0x0001005a954c) */
/* WARNING: Removing unreachable block (ram,0x0001005a94c0) */
/* WARNING: Removing unreachable block (ram,0x0001005a948c) */
/* WARNING: Removing unreachable block (ram,0x0001005a9434) */
/* WARNING: Removing unreachable block (ram,0x0001005a93e8) */
/* WARNING: Removing unreachable block (ram,0x0001005a94d4) */
/* WARNING: Removing unreachable block (ram,0x0001005a93fc) */
/* WARNING: Removing unreachable block (ram,0x0001005a93b8) */
/* WARNING: Removing unreachable block (ram,0x0001005a949c) */
/* WARNING: Removing unreachable block (ram,0x0001005a93bc) */
/* WARNING: Removing unreachable block (ram,0x0001005a93a8) */
/* WARNING: Removing unreachable block (ram,0x0001005a953c) */
/* WARNING: Removing unreachable block (ram,0x0001005a9544) */

void FUN_1005a932c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c509b0(param_1);
  func_0x000107c61180();
  func_0x000107c50300(param_3);
  func_0x000107c61180();
  func_0x000107c4a8c4();
  func_0x000107c61180();
  func_0x000107c4d9e8(param_1,param_2,param_3);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1005a9564; end: 1005a956b; -[SCRequestScheduler runningNSURLSessionTasks] */

undefined8 FUN_1005a9564(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 1005a956c; end: 1005a9573; -[SCRequest addRequestConcurrencyObserver:] */

void FUN_1005a956c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ebb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x110),PTR_s_setRequestConcurrencyObserver__1126588f0);
  return;
}



/* Entry: 1005a9574; end: 1005a957f; -[SCRequestInfoContainer setRequestConcurrencyObserver:] */

void FUN_1005a9574(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 1005a9580; end: 1005a9587; -[SCRequestScheduler _enqueueTask:reason:] */

void FUN_1005a9580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0a290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__enqueueTask_reason_andRun__112560240,param_3,param_4,1);
  return;
}



/* Entry: 1005a9588; end: 1005a9b9f; -[SCRequestScheduler _enqueueTask:reason:andRun:] */

/* WARNING: Possible PIC construction at 0x0001005a95dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a9624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a9634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a9694: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a96a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a96cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a9714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a9748: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a9b78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a97d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a97e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a97f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a9904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a9914: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a9924: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a9934: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a9944: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a99a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a99b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a99e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a99f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a9ab4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a9ac4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a9ad8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a9ae8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a9af8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a9b60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a9b70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005a9aec) */
/* WARNING: Removing unreachable block (ram,0x0001005a9adc) */
/* WARNING: Removing unreachable block (ram,0x0001005a9ac8) */
/* WARNING: Removing unreachable block (ram,0x0001005a9ab8) */
/* WARNING: Removing unreachable block (ram,0x0001005a99fc) */
/* WARNING: Removing unreachable block (ram,0x0001005a99ec) */
/* WARNING: Removing unreachable block (ram,0x0001005a99b4) */
/* WARNING: Removing unreachable block (ram,0x0001005a9948) */
/* WARNING: Removing unreachable block (ram,0x0001005a9964) */
/* WARNING: Removing unreachable block (ram,0x0001005a99a4) */
/* WARNING: Removing unreachable block (ram,0x0001005a99ac) */
/* WARNING: Removing unreachable block (ram,0x0001005a9984) */
/* WARNING: Removing unreachable block (ram,0x0001005a9938) */
/* WARNING: Removing unreachable block (ram,0x0001005a9928) */
/* WARNING: Removing unreachable block (ram,0x0001005a9918) */
/* WARNING: Removing unreachable block (ram,0x0001005a9908) */
/* WARNING: Removing unreachable block (ram,0x0001005a97fc) */
/* WARNING: Removing unreachable block (ram,0x0001005a97ec) */
/* WARNING: Removing unreachable block (ram,0x0001005a97dc) */
/* WARNING: Removing unreachable block (ram,0x0001005a9b7c) */
/* WARNING: Removing unreachable block (ram,0x0001005a974c) */
/* WARNING: Removing unreachable block (ram,0x0001005a9760) */
/* WARNING: Removing unreachable block (ram,0x0001005a980c) */
/* WARNING: Removing unreachable block (ram,0x0001005a9764) */
/* WARNING: Removing unreachable block (ram,0x0001005a9a04) */
/* WARNING: Removing unreachable block (ram,0x0001005a9770) */
/* WARNING: Removing unreachable block (ram,0x0001005a9750) */
/* WARNING: Removing unreachable block (ram,0x0001005a9b74) */
/* WARNING: Removing unreachable block (ram,0x0001005a9718) */
/* WARNING: Removing unreachable block (ram,0x0001005a96d0) */
/* WARNING: Removing unreachable block (ram,0x0001005a96a8) */
/* WARNING: Removing unreachable block (ram,0x0001005a9698) */
/* WARNING: Removing unreachable block (ram,0x0001005a9638) */
/* WARNING: Removing unreachable block (ram,0x0001005a9628) */
/* WARNING: Removing unreachable block (ram,0x0001005a95e0) */
/* WARNING: Removing unreachable block (ram,0x0001005a9afc) */
/* WARNING: Removing unreachable block (ram,0x0001005a9b24) */
/* WARNING: Removing unreachable block (ram,0x0001005a9b64) */
/* WARNING: Removing unreachable block (ram,0x0001005a9b6c) */
/* WARNING: Removing unreachable block (ram,0x0001005a9b44) */

void FUN_1005a9588(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c50300(param_3);
  func_0x000107c61180();
  func_0x000107c53c74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1005a9ba0; end: 1005a9bd7; -[SCRequest setCurrentDisplayContext:] */

void FUN_1005a9ba0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c289330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateRequestContext_11267fef0);
  return;
}



/* Entry: 1005a9bd8; end: 1005a9c7f; -[SCRequest updateRequestContext] */

/* WARNING: Possible PIC construction at 0x0001005a9c54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005a9c64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005a9c58) */
/* WARNING: Removing unreachable block (ram,0x0001005a9c68) */

void FUN_1005a9bd8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126b4960;
  lVar1 = param_1;
  func_0x000107c420e8();
  func_0x000107c61180();
  func_0x000107c4061c();
  func_0x000107c61180();
  lVar2 = param_1;
  func_0x000107c40f04(param_1);
  func_0x000107c61180();
  func_0x000107c4061c();
  func_0x000107c61180();
  func_0x000107c40064(puVar3,param_2,lVar1,lVar2);
  *(undefined **)(param_1 + 0xa0) = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1005a9c80; end: 1005a9c87; -[SCRequest displayContext] */

undefined8 FUN_1005a9c80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1005a9c88; end: 1005a9c8f; -[SCDisplayContext contexts] */

undefined8 FUN_1005a9c88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1005a9c90; end: 1005a9c97; -[SCRequest currentDisplayContext] */

undefined8 FUN_1005a9c90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1005a9c98; end: 1005a9dbf; +[SCRequest computeContextScoreWithContexts:currentContexts:] */

ulong FUN_1005a9c98(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar1 = param_4;
  func_0x000107c4080c(param_4,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    lVar4 = *plStack_110;
    do {
      lVar5 = 0;
      do {
        if (*plStack_110 != lVar4) {
          func_0x000107c61128(param_4);
        }
        uVar2 = param_3;
        func_0x000107c40404(param_3,param_2,*(undefined8 *)(lStack_118 + lVar5 * 8));
        uVar3 = uVar2 & 0xffffffff | uVar3 << 1;
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = param_4;
      func_0x000107c4080c(param_4,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
    return param_3;
  }
  return uVar3;
}



/* Entry: 1005a9dc0; end: 1005a9dc7; -[SCRequest setUserContextWhenEnqueued:] */

void FUN_1005a9dc0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1005a9dc8; end: 1005a9ed7; -[SCRequestTask updateUserInitiated] */

void FUN_1005a9dc8(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = param_1;
  func_0x000107c50300();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5d9b8();
  func_0x000107c61170(uVar2);
  if ((uVar3 & 1) == 0) {
    uVar2 = param_1;
    func_0x000107c50300();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c4f248();
    func_0x000107c61170(uVar2);
    uVar2 = param_1;
    func_0x000107c50300();
    func_0x000107c61180();
    uVar4 = uVar2;
    func_0x000107c4a644();
    if ((int)uVar4 == 0) {
      bVar1 = false;
    }
    else {
      uVar4 = param_1;
      func_0x000107c50300();
      func_0x000107c61180();
      uVar5 = uVar4;
      func_0x000107c405e4();
      bVar1 = uVar5 != 0;
      func_0x000107c61170(uVar4);
    }
    func_0x000107c61170(uVar2);
    if (((long)uVar3 < 3) && (!bVar1)) {
      return;
    }
    uVar2 = param_1;
    func_0x000107c50300(param_1);
    func_0x000107c61180();
    func_0x000107c5a370();
    func_0x000107c61170(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf77630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_didInitiateTaskByUser_1125bb730);
  return;
}



/* Entry: 1005a9ed8; end: 1005a9edf; -[SCRequest priority] */

undefined8 FUN_1005a9ed8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1005a9ee0; end: 1005a9eef; -[SCBlizzardPrioritizedQueue _sort:] */

void FUN_1005a9ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c246cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_sortedArrayUsingComparator__11266f550,
             &PTR___NSConcreteGlobalBlock_11095ee70);
  return;
}



/* Entry: 1005a9ef0; end: 1005a9ef7; -[SCRequest isUIAssetRequest] */

undefined1 FUN_1005a9ef0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x19);
}



/* Entry: 1005a9ef8; end: 1005a9eff; -[SCRequestScheduler allTasks] */

undefined8 FUN_1005a9ef8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1005a9f00; end: 1005a9f6b; -[SCRequestTaskPool taskForKey:] */

void FUN_1005a9f00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c5c79c(param_1);
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1005a9f6c; end: 1005aa267; -[SCRequestTaskPool addTask:] */

undefined8 FUN_1005a9f6c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c50300(param_3);
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4a8c4();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1;
  func_0x000107c5c79c();
  func_0x000107c61180();
  lVar3 = lVar1;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    lVar1 = lVar3;
    func_0x000107c3e478();
    func_0x000107c61180();
    lVar4 = param_3;
    func_0x000107c3e478();
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c61170(lVar1);
    if (lVar1 == lVar4) {
      func_0x000107c5d668(lVar3,param_2,param_3);
      func_0x000107c5d69c(lVar3);
      param_1 = param_3;
      func_0x000107c50300(param_3);
      func_0x000107c61180();
      func_0x000107c4bbe0();
      func_0x000107c61180();
      func_0x000107c61170();
      uVar5 = 1;
      goto LAB_1005aa098;
    }
    uVar5 = 2;
  }
  func_0x000107c5c79c(param_1);
  func_0x000107c61180();
  func_0x000107c56bd8();
LAB_1005aa098:
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(param_3);
  return uVar5;
}



/* Entry: 1005aa268; end: 1005aa26f; -[SCBlizzardFile highestPriority] */

undefined8 FUN_1005aa268(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1005aa270; end: 1005aa277; -[SCBlizzardFile creationTimeMillis] */

undefined8 FUN_1005aa270(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1005aa278; end: 1005aa507; -[SCRequestScheduler _loggerParameter] */

void FUN_1005aa278(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126dff98;
  func_0x000107c610fc();
  uVar8 = *(undefined8 *)(param_1 + 0x78);
  puVar3 = PTR_PTR_1126b19f8;
  func_0x000107c4cdf0(PTR_PTR_1126b19f8);
  func_0x000107c61180();
  func_0x000107c4d8d4(uVar8,param_2,puVar3);
  func_0x000107c57f64(puVar2,param_2,uVar8);
  func_0x000107c61170(puVar3);
  uVar8 = *(undefined8 *)(param_1 + 0x78);
  puVar3 = PTR_PTR_1126b19f8;
  func_0x000107c5bf1c(PTR_PTR_1126b19f8);
  func_0x000107c61180();
  func_0x000107c4d8d4(uVar8,param_2,puVar3);
  func_0x000107c57f6c(puVar2,param_2,uVar8);
  func_0x000107c61170(puVar3);
  uVar8 = *(undefined8 *)(param_1 + 0x78);
  puVar3 = PTR_PTR_1126b19f8;
  func_0x000107c41f5c(PTR_PTR_1126b19f8);
  func_0x000107c61180();
  func_0x000107c4d8d4(uVar8,param_2,puVar3);
  func_0x000107c57f5c(puVar2,param_2,uVar8);
  func_0x000107c61170(puVar3);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar4 = *(long *)(param_1 + 0x80);
  func_0x000107c4d9b0();
  func_0x000107c61180();
  lVar7 = lVar4;
  func_0x000107c4080c();
  if (lVar7 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar10) {
          func_0x000107c61128(lVar4);
        }
        uVar9 = *(ulong *)(lStack_128 + lVar11 * 8);
        uVar5 = uVar9;
        func_0x000107c50300(uVar9);
        func_0x000107c61180();
        uVar6 = uVar5;
        FUN_1005ab510();
        puVar3 = puVar2;
        func_0x000107c509a4(puVar2);
        func_0x000107c57f60(puVar2,param_2,puVar3 + (uVar6 & 0xffffffff));
        func_0x000107c61170(uVar5);
        func_0x000107c50300(uVar9);
        func_0x000107c61180();
        uVar5 = uVar9;
        func_0x000107c4a644();
        puVar3 = puVar2;
        func_0x000107c509a8(puVar2);
        func_0x000107c57f68(puVar2,param_2,puVar3 + (uVar5 & 0xffffffff));
        func_0x000107c61170(uVar9);
        lVar11 = lVar11 + 1;
      } while (lVar7 != lVar11);
      lVar7 = lVar4;
      func_0x000107c4080c(lVar4,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar7 != 0);
  }
  func_0x000107c61170(lVar4);
  uVar8 = *(undefined8 *)(param_1 + 0x70);
  puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_150 = 0xc2000000;
  pcStack_148 = FUN_1005ab324;
  puStack_140 = &UNK_110ccc420;
  func_0x000107c61174(puVar2);
  puStack_138 = puVar2;
  func_0x000107c429d4(uVar8,param_2,&puStack_158);
  lVar7 = *(long *)(param_1 + 8);
  func_0x000107c53c74(puVar2);
  puVar2 = puStack_138;
  func_0x000107c61170();
  iVar1 = (int)puVar2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    func_0x000107c60e78();
    func_0x000107c5abc4();
    if (iVar1 != 0) {
      if (lVar7 == 1) {
        func_0x000107c2bd64();
        func_0x000107c61180();
      }
      else {
        func_0x0001005a52c0();
        func_0x000107c61180();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1005aa508; end: 1005aa557; -[SCFriendsFeedNavigationServiceImpl _hintLabelWithBarStyle:] */

void FUN_1005aa508(int param_1,undefined8 param_2,long param_3)

{
  func_0x000107c5abc4();
  if (param_1 != 0) {
    if (param_3 == 1) {
      func_0x000107c2bd64();
      func_0x000107c61180();
    }
    else {
      func_0x0001005a52c0();
      func_0x000107c61180();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1005aa558; end: 1005aa7c3; -[SCBlizzardPrioritizedQueue _addSortedFiles:region:] */

/* WARNING: Possible PIC construction at 0x0001005aa608: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005aa618: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005aa678: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005aa6d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005aa6e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005aa724: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005aa740: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005aa760: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005aa780: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005aa764) */
/* WARNING: Removing unreachable block (ram,0x0001005aa770) */
/* WARNING: Removing unreachable block (ram,0x0001005aa744) */
/* WARNING: Removing unreachable block (ram,0x0001005aa6ec) */
/* WARNING: Removing unreachable block (ram,0x0001005aa728) */
/* WARNING: Removing unreachable block (ram,0x0001005aa6f4) */
/* WARNING: Removing unreachable block (ram,0x0001005aa6dc) */
/* WARNING: Removing unreachable block (ram,0x0001005aa67c) */
/* WARNING: Removing unreachable block (ram,0x0001005aa688) */
/* WARNING: Removing unreachable block (ram,0x0001005aa61c) */
/* WARNING: Removing unreachable block (ram,0x0001005aa630) */
/* WARNING: Removing unreachable block (ram,0x0001005aa640) */
/* WARNING: Removing unreachable block (ram,0x0001005aa74c) */
/* WARNING: Removing unreachable block (ram,0x0001005aa754) */
/* WARNING: Removing unreachable block (ram,0x0001005aa664) */
/* WARNING: Removing unreachable block (ram,0x0001005aa60c) */
/* WARNING: Removing unreachable block (ram,0x0001005aa784) */

void FUN_1005aa558(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c611a4(param_1);
  func_0x000107c4fba4(param_1);
  func_0x000107c61180();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d974(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  func_0x000107c61180();
  func_0x000107c4d9e8(param_1,param_2,puVar1);
  func_0x000107c61180();
  func_0x000107c4d9a4();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1005aa7c4; end: 1005aa7cb; -[SCBlizzardDoublyLinkedList head] */

undefined8 FUN_1005aa7c4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1005aa7cc; end: 1005aa7d3; -[SCRequestManagerRunningTaskState numOfLargeDLTasksInContext:] */

void FUN_1005aa7cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0de150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_numOfLargeDLTasksInContext__112615268);
  return;
}



/* Entry: 1005aa7d4; end: 1005aa8b3; -[SCRequestConcurrencyCounter numOfLargeDLTasksInContext:] */

undefined8 FUN_1005aa7d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c61174(param_3);
  func_0x000107c4e530(uVar1);
  uVar1 = puStack_48[3];
  func_0x000107c61170(param_3);
  func_0x000107c60bcc(&uStack_50,8);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 1005aa8b4; end: 1005aa8bb; -[SCBlizzardDLLNode next] */

undefined8 FUN_1005aa8b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1005aa8bc; end: 1005aa8c3; -[SCBlizzardDLLNode file] */

undefined8 FUN_1005aa8bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1005aa8c4; end: 1005aaa0b; -[SCBlizzardDoublyLinkedList insertFile:afterNode:] */

/* WARNING: Possible PIC construction at 0x0001005aa93c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005aa960: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005aa980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005aa9c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005aa984) */
/* WARNING: Removing unreachable block (ram,0x0001005aa964) */
/* WARNING: Removing unreachable block (ram,0x0001005aa940) */
/* WARNING: Removing unreachable block (ram,0x0001005aa9cc) */

void FUN_1005aa8c4(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d0388;
  if ((param_3 != 0) && (param_4 != 0)) {
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_3);
    func_0x000107c610f4(puVar1);
    func_0x000107c4690c();
    func_0x000107c4d660(param_4);
    func_0x000107c61180();
    func_0x000107c56a8c(puVar1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_4);
    return;
  }
  return;
}



/* Entry: 1005aaa0c; end: 1005aaa13; -[SCBlizzardDoublyLinkedList setFileCounts:] */

void FUN_1005aaa0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}


