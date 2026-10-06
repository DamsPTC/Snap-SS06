/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1008d7974; end: 1008d79b7;  */

long * FUN_1008d7974(long *param_1,long param_2,long param_3,long param_4,long param_5)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == (long *)0x0) {
    return (long *)0x2;
  }
  plVar1 = (long *)0x2;
  if ((((param_5 != 0) && (param_4 != 0)) && (param_3 != 0)) && ((param_2 != 0 && (*param_1 != 0))))
  {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x10);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001008d79a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1);
      return param_1;
    }
    plVar1 = (long *)0x6;
  }
  return plVar1;
}



/* Entry: 1008d79b8; end: 1008d7b13;  */

long FUN_1008d79b8(ulong param_1,undefined8 param_2,ulong *param_3,ulong *param_4,long *param_5)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 uVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  ulong uStack_d0;
  undefined1 uStack_c1;
  ulong *puStack_c0;
  long *plStack_b8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  ulong uStack_a0;
  undefined1 *puStack_50;
  code *pcStack_48;
  char *pcStack_40;
  
  if (*param_3 >> 0x1f != 0) {
    func_0x000107c2c474();
    pcStack_48 = FUN_1008d7b14;
    lVar9 = *param_5;
    lVar3 = *(long *)(param_1 + 8);
    puVar5 = param_4;
    puStack_50 = &stack0xfffffffffffffff0;
    FUN_1008d79b8(lVar3,param_4,param_5);
    if ((int)lVar3 == 0) {
      lVar8 = *param_5;
      if (lVar9 - lVar8 == 0) {
        lVar3 = 0;
        *param_3 = 0;
      }
      else {
        *param_5 = lVar9 - lVar8;
        if (*param_3 >> 0x1f != 0) {
          func_0x000107c2c46c();
          pcStack_a8 = FUN_1008d7c04;
          *(undefined8 *)(lVar3 + 0x110) = 0;
          uVar6 = *(undefined8 *)(lVar3 + 0xe0);
          uStack_d0 = *puVar5;
          if ((uStack_d0 & 1) != 0) {
            piVar7 = (int *)(uStack_d0 - 1);
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
              if (bVar2) {
                *piVar7 = *piVar7 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          puStack_c0 = param_3;
          plStack_b8 = param_5;
          ppuStack_b0 = &puStack_50;
          FUN_1004bd7e8(&uStack_c1,uVar6,&uStack_d0);
          if ((uStack_d0 & 1) != 0) {
            FUN_10084dad0();
          }
          FUN_1008d7c8c(lVar3);
          return lVar3;
        }
        uVar4 = *(ulong *)(param_1 + 0x10);
        FUN_1001f16f8(uVar4,param_2);
        if ((int)uVar4 < 0) {
          uStack_a0 = uVar4;
          FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                        ,0x494,2,"Sending protected frame to ssl failed with %d");
          lVar3 = 7;
        }
        else {
          *param_3 = uVar4 & 0xffffffff;
          lVar3 = *(long *)(param_1 + 8);
          FUN_1008d79b8(lVar3,(long)param_4 + lVar8,param_5);
          if ((int)lVar3 == 0) {
            *param_5 = *param_5 + lVar8;
          }
        }
      }
    }
    return lVar3;
  }
  FUN_1001e83a0();
  uVar4 = param_1;
  FUN_10064cf6c(param_1,param_2,(int)*param_3);
  if ((int)uVar4 < 1) {
    FUN_1001f34c8();
    pcStack_40 = "SSL_ERROR_NONE";
    switch(param_1 & 0xffffffff) {
    case 0:
      break;
    case 1:
      FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                    ,0x22b,2,"Corruption detected.");
      func_0x000104ae1748();
      return 8;
    case 2:
    case 6:
      *param_3 = 0;
      return 0;
    case 3:
      FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                    ,0x227,2,"Peer tried to renegotiate SSL connection. This is unsupported.");
      return 6;
    case 4:
      pcStack_40 = "SSL_ERROR_WANT_X509_LOOKUP";
      break;
    case 5:
      pcStack_40 = "SSL_ERROR_SYSCALL";
      break;
    case 7:
      pcStack_40 = "SSL_ERROR_WANT_CONNECT";
      break;
    case 8:
      pcStack_40 = "SSL_ERROR_WANT_ACCEPT";
      break;
    default:
      pcStack_40 = "Unknown error";
    }
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                  ,0x22f,2,"SSL_read failed with error %s.");
    return 10;
  }
  *param_3 = uVar4 & 0xffffffff;
  return 0;
}



/* Entry: 1008d7b14; end: 1008d7c03;  */

void FUN_1008d7b14(long param_1,undefined8 param_2,ulong *param_3,ulong *param_4,long *param_5)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  ulong uStack_90;
  undefined1 uStack_81;
  ulong *puStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  ulong uStack_60;
  
  lVar9 = *param_5;
  lVar3 = *(long *)(param_1 + 8);
  puVar6 = param_4;
  FUN_1008d79b8(lVar3,param_4,param_5);
  if ((int)lVar3 == 0) {
    lVar8 = *param_5;
    if (lVar9 - lVar8 == 0) {
      *param_3 = 0;
    }
    else {
      *param_5 = lVar9 - lVar8;
      if (*param_3 >> 0x1f != 0) {
        func_0x000107c2c46c();
        pcStack_68 = FUN_1008d7c04;
        *(undefined8 *)(lVar3 + 0x110) = 0;
        uVar5 = *(undefined8 *)(lVar3 + 0xe0);
        uStack_90 = *puVar6;
        if ((uStack_90 & 1) != 0) {
          piVar7 = (int *)(uStack_90 - 1);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
            if (bVar2) {
              *piVar7 = *piVar7 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        puStack_80 = param_3;
        plStack_78 = param_5;
        puStack_70 = &stack0xfffffffffffffff0;
        FUN_1004bd7e8(&uStack_81,uVar5,&uStack_90);
        if ((uStack_90 & 1) != 0) {
          FUN_10084dad0();
        }
        FUN_1008d7c8c(lVar3);
        return;
      }
      uVar4 = *(ulong *)(param_1 + 0x10);
      FUN_1001f16f8(uVar4,param_2);
      if ((int)uVar4 < 0) {
        uStack_60 = uVar4;
        FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                      ,0x494,2,"Sending protected frame to ssl failed with %d");
      }
      else {
        *param_3 = uVar4 & 0xffffffff;
        uVar5 = *(undefined8 *)(param_1 + 8);
        FUN_1008d79b8(uVar5,(long)param_4 + lVar8,param_5);
        if ((int)uVar5 == 0) {
          *param_5 = *param_5 + lVar8;
        }
      }
    }
  }
  return;
}



/* Entry: 1008d7c04; end: 1008d7c8b;  */

void FUN_1008d7c04(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_30;
  undefined1 uStack_21;
  
  *(undefined8 *)(param_1 + 0x110) = 0;
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
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
  FUN_1008d7c8c(param_1);
  return;
}



/* Entry: 1008d7c8c; end: 1008d7d83;  */

void FUN_1008d7c8c(long param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  
  iVar3 = (int)param_1 + 0x628;
  FUN_1005a5e70();
  if ((param_1 != 0) && (iVar3 != 0)) {
    func_0x000104aba638(*(undefined8 *)(param_1 + 8));
    func_0x000104ae1b8c(*(undefined8 *)(param_1 + 0x10));
    func_0x000104ae1c90(*(undefined8 *)(param_1 + 0x18));
    FUN_10061ce28(param_1 + 0x118);
    FUN_10061ce28(param_1 + 0x240);
    plVar4 = *(long **)(param_1 + 0x368);
    if ((long *)0x1 < plVar4) {
      do {
        lVar5 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 + -1 == 0) {
        (*(code *)plVar4[1])();
      }
    }
    plVar4 = *(long **)(param_1 + 0x388);
    if ((long *)0x1 < plVar4) {
      do {
        lVar5 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 + -1 == 0) {
        (*(code *)plVar4[1])();
      }
    }
    FUN_10061ce28(param_1 + 0x3a8);
    FUN_10061ce28(param_1 + 0x500);
    FUN_1005a5f48(param_1 + 0x20);
    FUN_100741660(param_1 + 0x4e0);
    FUN_100487bf4(param_1 + 0x4d0);
    FUN_1005a5f48(param_1 + 0xa0);
    FUN_1005a5f48(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 1008d7d84; end: 1008d7e0f;  */

void FUN_1008d7d84(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_28;
  
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  *(code **)(param_1 + 0x188) = FUN_1007484bc;
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
  FUN_10074775c(uVar3,param_1 + 0x180,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    FUN_10084dad0();
  }
  return;
}



/* Entry: 1008d7e10; end: 1008d8bcb;  */

/* WARNING: Removing unreachable block (ram,0x0001008d8330) */
/* WARNING: Removing unreachable block (ram,0x0001008d7fac) */
/* WARNING: Removing unreachable block (ram,0x0001008d821c) */
/* WARNING: Removing unreachable block (ram,0x0001008d7fb0) */

void FUN_1008d7e10(long *******param_1,long *******param_2,long *******param_3,long *******param_4,
                  long *******param_5)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  code *pcVar5;
  long ******pppppplVar6;
  long *******ppppppplVar7;
  long *******ppppppplVar8;
  long *******ppppppplVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  undefined4 uVar13;
  ulong uVar14;
  int *piVar15;
  undefined8 *extraout_x8;
  uint uVar16;
  undefined8 *puVar17;
  long *******unaff_x20;
  long *******unaff_x22;
  long ******unaff_x24;
  long *unaff_x27;
  long ******unaff_x28;
  long ******pppppplVar18;
  long ******pppppplVar19;
  long ******pppppplVar20;
  undefined8 uVar21;
  long ******pppppplVar22;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined1 uStack_259;
  undefined8 *puStack_258;
  long ******pppppplStack_250;
  long ******pppppplStack_248;
  undefined1 *puStack_240;
  code *pcStack_238;
  long ******pppppplStack_230;
  long *****ppppplStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long ******pppppplStack_210;
  long *****ppppplStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long ******pppppplStack_1f0;
  long *****ppppplStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long *****ppppplStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long *****ppppplStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *****ppppplStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long ******pppppplStack_188;
  long ******pppppplStack_180;
  byte bStack_171;
  undefined1 uStack_169;
  long ******pppppplStack_168;
  long alStack_160 [4];
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [40];
  long ******pppppplStack_f8;
  long ******pppppplStack_f0;
  long ******pppppplStack_e8;
  code *pcStack_e0;
  ulong uStack_d8;
  undefined *puStack_d0;
  ulong uStack_c8;
  code *pcStack_c0;
  ulong uStack_b8;
  undefined *puStack_b0;
  long ******pppppplStack_a8;
  long ******pppppplStack_a0;
  undefined8 uStack_98;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppplVar18 = (long ******)((long)param_3 + 9);
  if (*param_3 != (long ******)0x0) {
    pppppplVar18 = param_3[2];
  }
  pppppplVar19 = (long ******)((ulong)param_3[1] & 0xff);
  if (*param_3 != (long ******)0x0) {
    pppppplVar19 = param_3[1];
  }
  pppppplStack_1f0 = (long ******)0x0;
  pcVar11 = (char *)param_3;
  if (pppppplVar19 != (long ******)0x0) {
    unaff_x27 = alStack_160;
    unaff_x24 = (long ******)((long)pppppplVar18 + (long)pppppplVar19);
    uVar16 = *(uint *)(param_2 + 0x153);
    uVar14 = (ulong)uVar16;
    unaff_x22 = param_3;
    unaff_x28 = pppppplVar18;
    if (0x17 < uVar16) {
      pppppplVar6 = pppppplVar18;
      switch(uVar16) {
      case 0x18:
        goto LAB_1008d806c;
      case 0x19:
        uVar16 = *(uint *)((long)param_2 + 0xaa4);
        pppppplVar6 = pppppplVar18;
        goto code_r0x0001008d8080;
      case 0x1a:
        uVar16 = *(uint *)((long)param_2 + 0xaa4);
        pppppplVar6 = pppppplVar18;
        goto code_r0x0001008d8094;
      case 0x1b:
        goto code_r0x0001008d80a8;
      case 0x1c:
        goto code_r0x0001008d80b8;
      case 0x1d:
        goto code_r0x0001008d80c8;
      case 0x1e:
        uVar16 = *(uint *)(param_2 + 0x155);
        pppppplVar6 = pppppplVar18;
        goto code_r0x0001008d80e0;
      case 0x1f:
        uVar16 = *(uint *)(param_2 + 0x155);
        pppppplVar6 = pppppplVar18;
        goto code_r0x0001008d80f4;
      case 0x20:
        uVar16 = *(uint *)(param_2 + 0x155);
        goto code_r0x0001008d8108;
      case 0x21:
        uVar16 = *(uint *)((long)param_2 + 0xaa4);
        goto code_r0x0001008d8490;
      default:
        func_0x000104a6e964("return GRPC_ERROR_NONE",
                            "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/parsing.cc"
                            ,0x114);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1008d7ffc);
        (*pcVar5)();
      }
    }
    pppppplVar6 = (long ******)((long)pppppplVar18 + (0x18 - uVar14));
    pppppplVar20 = pppppplVar19;
    do {
      if ((int)uVar14 == 0x18) goto LAB_1008d806c;
      bVar1 = *(byte *)unaff_x28;
      if ((uint)bVar1 != (int)"PRI * HTTP/2.0\r\n\r\nSM\r\n\r\n"[uVar14]) {
        pppppplStack_f8 = (long ******)(ulong)(byte)"PRI * HTTP/2.0\r\n\r\nSM\r\n\r\n"[uVar14];
        uVar16 = (uint)bVar1;
        if ((char)bVar1 < '\0') {
          uVar16 = 0x20;
        }
        uStack_d8 = (ulong)uVar16;
        pppppplStack_f0 = (long ******)&UNK_10ae73be8;
        pcStack_e0 = FUN_1004d50a8;
        puStack_d0 = &UNK_10ae73be8;
        pcStack_c0 = FUN_1004d50a8;
        puStack_b0 = &UNK_10ae73cc0;
        pppppplStack_e8 = pppppplStack_f8;
        uStack_c8 = (ulong)bVar1;
        uStack_b8 = uVar14;
        FUN_1004d4da0(&pppppplStack_a8,
                      "Connect string mismatch: expected \'%c\' (%d) got \'%c\' (%d) at byte %d",
                      0x44,&pppppplStack_f8,5);
        param_4 = (long *******)pppppplStack_a0;
        pcVar11 = (char *)pppppplStack_a8;
        if (-1 < (char)uStack_98._7_1_) {
          param_4 = (long *******)(ulong)uStack_98._7_1_;
          pcVar11 = (char *)&pppppplStack_a8;
        }
        uStack_200 = 0;
        uStack_1f8 = 0;
        ppppplStack_208 = (long *****)0x0;
        param_2 = (long *******)&ppppplStack_208;
        param_5 = &pppppplStack_188;
        func_0x000104ab5920(param_1,2);
        pppppplStack_f8 = (long ******)param_2;
        func_0x000100482b64(&pppppplStack_f8);
        goto LAB_1008d8014;
      }
      unaff_x28 = (long ******)((long)unaff_x28 + 1);
      uVar16 = (int)uVar14 + 1;
      uVar14 = (ulong)uVar16;
      *(uint *)(param_2 + 0x153) = uVar16;
      pppppplVar20 = (long ******)((long)pppppplVar20 - 1);
      unaff_x20 = param_2;
    } while (pppppplVar20 != (long ******)0x0);
  }
LAB_1008d8010:
  param_2 = unaff_x20;
  *param_1 = (long ******)0x0;
LAB_1008d8014:
  do {
    param_1 = (long *******)pppppplStack_1f0;
    param_3 = (long *******)pcVar11;
    if (((ulong)pppppplStack_1f0 & 1) != 0) {
      FUN_10084dad0();
      param_3 = (long *******)pcVar11;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    func_0x000107c60e78();
    iVar12 = (int)param_4;
    iVar10 = (int)param_3;
    if (iVar10 == 0) {
      ppppppplVar9 = param_1;
      func_0x000107c60bd8();
      pcStack_238 = FUN_1008d8bcc;
      ppppppplVar9[1] = (long ******)param_5;
      pppppplVar19 = param_5[1];
      pppppplVar18 = *param_5;
      uVar21 = *(undefined8 *)((long)param_5 + 0xc);
      *(undefined8 *)((long)ppppppplVar9 + 0x2c) = *(undefined8 *)((long)param_5 + 0x14);
      *(undefined8 *)((long)ppppppplVar9 + 0x24) = uVar21;
      ppppppplVar9[4] = pppppplVar19;
      ppppppplVar9[3] = pppppplVar18;
      *(char *)(ppppppplVar9 + 2) = '\0';
      *(undefined4 *)ppppppplVar9 = 0;
      pppppplStack_250 = (long ******)param_2;
      pppppplStack_248 = (long ******)param_1;
      puStack_240 = &stack0xfffffffffffffff0;
      if (iVar12 == 0) {
        if (((uint)(iVar10 * -0x55555555) >> 1 | iVar10 * -0x80000000) < 0x2aaaaaab) {
LAB_1008d8cc0:
          *extraout_x8 = 0;
          return;
        }
        uStack_2a0 = 0;
        uStack_298 = 0;
        uStack_2a8 = 0;
        puVar17 = &uStack_2a8;
        func_0x000104ab5920(2,"settings frames must be a multiple of six bytes",0x2f,&uStack_259,
                            &uStack_2a8);
      }
      else if (iVar12 == 1) {
        *(char *)(ppppppplVar9 + 2) = '\x01';
        if (iVar10 == 0) goto LAB_1008d8cc0;
        uStack_270 = 0;
        uStack_268 = 0;
        uStack_278 = 0;
        puVar17 = &uStack_278;
        func_0x000104ab5920(2,"non-empty settings ack frame received",0x25,&uStack_259,&uStack_278);
      }
      else {
        uStack_288 = 0;
        uStack_280 = 0;
        uStack_290 = 0;
        puVar17 = &uStack_290;
        func_0x000104ab5920(2,"invalid flags on settings frame",0x1f,&uStack_259,&uStack_290);
      }
      puStack_258 = puVar17;
      func_0x000100482b64(&puStack_258);
      return;
    }
    func_0x000104bd46a0(param_1);
    pppppplVar6 = unaff_x28;
LAB_1008d806c:
    unaff_x28 = (long ******)((long)pppppplVar6 + 1);
    uVar16 = (uint)*(byte *)pppppplVar6 << 0x10;
    *(uint *)((long)param_2 + 0xaa4) = uVar16;
    pppppplVar6 = unaff_x28;
    if (unaff_x28 == unaff_x24) {
      uVar13 = 0x19;
      goto LAB_1008d85d0;
    }
code_r0x0001008d8080:
    unaff_x28 = (long ******)((long)pppppplVar6 + 1);
    uVar16 = uVar16 | (uint)*(byte *)pppppplVar6 << 8;
    *(uint *)((long)param_2 + 0xaa4) = uVar16;
    pppppplVar6 = unaff_x28;
    if (unaff_x28 == unaff_x24) {
      uVar13 = 0x1a;
      goto LAB_1008d85d0;
    }
code_r0x0001008d8094:
    unaff_x28 = (long ******)((long)pppppplVar6 + 1);
    *(uint *)((long)param_2 + 0xaa4) = uVar16 | *(byte *)pppppplVar6;
    pppppplVar6 = unaff_x28;
    if (unaff_x28 == unaff_x24) {
      uVar13 = 0x1b;
      goto LAB_1008d85d0;
    }
code_r0x0001008d80a8:
    unaff_x28 = (long ******)((long)pppppplVar6 + 1);
    *(byte *)((long)param_2 + 0xa9c) = *(byte *)pppppplVar6;
    pppppplVar6 = unaff_x28;
    if (unaff_x28 == unaff_x24) {
      uVar13 = 0x1c;
      goto LAB_1008d85d0;
    }
code_r0x0001008d80b8:
    unaff_x28 = (long ******)((long)pppppplVar6 + 1);
    *(byte *)((long)param_2 + 0xa9d) = *(byte *)pppppplVar6;
    pppppplVar6 = unaff_x28;
    if (unaff_x28 == unaff_x24) {
      uVar13 = 0x1d;
      goto LAB_1008d85d0;
    }
code_r0x0001008d80c8:
    unaff_x28 = (long ******)((long)pppppplVar6 + 1);
    uVar16 = (*(byte *)pppppplVar6 & 0x7f) << 0x18;
    *(uint *)(param_2 + 0x155) = uVar16;
    pppppplVar6 = unaff_x28;
    if (unaff_x28 == unaff_x24) {
      uVar13 = 0x1e;
      goto LAB_1008d85d0;
    }
code_r0x0001008d80e0:
    unaff_x28 = (long ******)((long)pppppplVar6 + 1);
    uVar16 = uVar16 | (uint)*(byte *)pppppplVar6 << 0x10;
    *(uint *)(param_2 + 0x155) = uVar16;
    pppppplVar6 = unaff_x28;
    if (unaff_x28 == unaff_x24) {
      uVar13 = 0x1f;
      goto LAB_1008d85d0;
    }
code_r0x0001008d80f4:
    unaff_x28 = (long ******)((long)pppppplVar6 + 1);
    uVar16 = uVar16 | (uint)*(byte *)pppppplVar6 << 8;
    *(uint *)(param_2 + 0x155) = uVar16;
    if (unaff_x28 == unaff_x24) {
      uVar13 = 0x20;
      goto LAB_1008d85d0;
    }
code_r0x0001008d8108:
    uVar16 = uVar16 | *(byte *)unaff_x28;
    pcVar11 = (char *)(ulong)uVar16;
    *(uint *)(param_2 + 0x155) = uVar16;
    *(undefined4 *)(param_2 + 0x153) = 0x21;
    bVar1 = *(byte *)((long)param_2 + 0xa9c);
    pppppplVar6 = (long ******)(ulong)bVar1;
    if (*(char *)((long)param_2 + 0xa9f) != '\0') {
      if (bVar1 == 4) {
        *(char *)((long)param_2 + 0xa9f) = '\0';
        pppppplVar6 = (long ******)0x4;
        if (*(int *)(param_2 + 0x154) != 0) goto LAB_1008d82b4;
code_r0x0001008d8140:
        if (uVar16 == 0) {
          ppppppplVar9 = param_2 + 0x12a;
          pcVar11 = (char *)(ulong)*(uint *)((long)param_2 + 0xaa4);
          param_4 = (long *******)(ulong)*(byte *)((long)param_2 + 0xa9d);
          param_5 = (long *******)((long)param_2 + 0x774);
          FUN_1008d8bcc(&pppppplStack_a8,ppppppplVar9);
          if ((long *******)pppppplStack_a8 == (long *******)0x0) {
            if ((*(byte *)((long)param_2 + 0xa9d) & 1) != 0) {
              param_2[0xfa] = *(long *******)((long)param_2 + 0x7b4);
              param_2[0xf9] = *(long *******)((long)param_2 + 0x7ac);
              *(long *******)((long)param_2 + 0x7dc) = param_2[0xf8];
              *(long *******)((long)param_2 + 0x7d4) = param_2[0xf7];
              pcVar11 = (char *)(ulong)*(uint *)(param_2 + 0xf9);
              func_0x0001008d9290(param_2 + 0x122);
              *(undefined4 *)(param_2 + 0x151) = *(undefined4 *)((long)param_2 + 0x7d4);
              *(char *)((long)param_2 + 0x76d) = '\0';
              param_2[0x158] = (long ******)FUN_1008d8d78;
              param_2[0x156] = (long ******)ppppppplVar9;
              pppppplStack_210 = (long ******)0x0;
              ppppppplVar9 = (long *******)pppppplStack_210;
              if (((ulong)pppppplStack_a8 & 1) != 0) {
                FUN_10084dad0();
                ppppppplVar9 = (long *******)pppppplStack_210;
              }
              goto code_r0x0001008d846c;
            }
            param_2[0x158] = (long ******)FUN_1008d8d78;
            param_2[0x156] = (long ******)ppppppplVar9;
          }
          pppppplStack_210 = pppppplStack_a8;
          ppppppplVar9 = (long *******)pppppplStack_a8;
        }
        else {
          pppppplStack_f0 = (long ******)0x0;
          pppppplStack_e8 = (long ******)0x0;
          pppppplStack_f8 = (long ******)0x0;
          pcVar11 = "Settings frame received for grpc_chttp2_stream";
          param_5 = &pppppplStack_188;
          param_4 = (long *******)0x2e;
          func_0x000104ab5920(&pppppplStack_210,2);
          ppppppplVar9 = &pppppplStack_a8;
          pppppplStack_a8 = (long ******)&pppppplStack_f8;
code_r0x0001008d8178:
          func_0x000100482b64(ppppppplVar9);
          ppppppplVar9 = (long *******)pppppplStack_210;
        }
      }
      else {
        pppppplStack_f8 = (long ******)0x10f2362d4;
        pppppplStack_f0 = (long ******)0x3b;
        func_0x000107c2ba30(pppppplVar6,&uStack_98);
        pppppplStack_a0 = (long ******)((long)pppppplVar6 - (long)&uStack_98);
        pppppplStack_a8 = (long ******)&uStack_98;
        FUN_10047c83c(&pppppplStack_188,&pppppplStack_f8,&pppppplStack_a8);
        param_4 = (long *******)pppppplStack_180;
        pcVar11 = (char *)pppppplStack_188;
        if (-1 < (char)bStack_171) {
          param_4 = (long *******)(ulong)bStack_171;
          pcVar11 = (char *)&pppppplStack_188;
        }
        uStack_198 = 0;
        uStack_190 = 0;
        ppppplStack_1a0 = (long *****)0x0;
        param_5 = (long *******)&uStack_169;
        func_0x000104ab5920(&pppppplStack_210,2);
        pppppplStack_168 = &ppppplStack_1a0;
        func_0x000100482b64(&pppppplStack_168);
        ppppppplVar9 = (long *******)pppppplStack_210;
        if ((char)bStack_171 < '\0') {
          func_0x000107c60e14(pppppplStack_188);
          ppppppplVar9 = (long *******)pppppplStack_210;
        }
      }
      goto code_r0x0001008d846c;
    }
    *(char *)((long)param_2 + 0xa9f) = '\0';
    uVar4 = *(uint *)(param_2 + 0x154);
    if (uVar4 != 0) {
      if (bVar1 == 9) {
        ppppppplVar9 = (long *******)0x1;
        if (uVar4 == uVar16) goto LAB_1008d8414;
        pppppplStack_f0 = (long ******)&UNK_10ae73cc0;
        pcStack_e0 = (code *)&UNK_10ae73cc0;
        pppppplStack_f8 = (long ******)(ulong)uVar4;
        pppppplStack_e8 = (long ******)pcVar11;
        FUN_1004d4da0(&pppppplStack_a8,
                      "Expected CONTINUATION frame for grpc_chttp2_stream %08x, got grpc_chttp2_stream %08x"
                      ,0x54,&pppppplStack_f8,2);
        param_4 = (long *******)pppppplStack_a0;
        pcVar11 = (char *)pppppplStack_a8;
        if (-1 < (char)uStack_98._7_1_) {
          param_4 = (long *******)(ulong)uStack_98._7_1_;
          pcVar11 = (char *)&pppppplStack_a8;
        }
        uStack_1c8 = 0;
        uStack_1c0 = 0;
        ppppplStack_1d0 = (long *****)0x0;
        param_5 = &pppppplStack_188;
        func_0x000104ab5920(&pppppplStack_210,2);
        pppppplStack_f8 = &ppppplStack_1d0;
        func_0x000100482b64(&pppppplStack_f8);
        ppppppplVar9 = (long *******)pppppplStack_210;
      }
      else {
LAB_1008d82b4:
        pppppplStack_a0 = (long ******)&UNK_10ae73c30;
        pppppplStack_a8 = pppppplVar6;
        FUN_1004d4da0(&pppppplStack_f8,"Expected CONTINUATION frame, got frame type %02x",0x30,
                      &pppppplStack_a8,1);
        param_4 = (long *******)pppppplStack_f0;
        pcVar11 = (char *)pppppplStack_f8;
        if (-1 < (long)pppppplStack_e8) {
          param_4 = (long *******)((ulong)pppppplStack_e8 >> 0x38);
          pcVar11 = (char *)&pppppplStack_f8;
        }
        uStack_1b0 = 0;
        uStack_1a8 = 0;
        ppppplStack_1b8 = (long *****)0x0;
        param_5 = &pppppplStack_188;
        func_0x000104ab5920(&pppppplStack_210,2);
        pppppplStack_a8 = &ppppplStack_1b8;
        func_0x000100482b64(&pppppplStack_a8);
        ppppppplVar9 = (long *******)pppppplStack_210;
      }
      goto code_r0x0001008d846c;
    }
    ppppppplVar9 = (long *******)0x0;
    switch(pppppplVar6) {
    case (long ******)0x0:
      if (*(char *)(param_2 + 0x15a) != '\0') {
        *(char *)(param_2 + 0x15a) = '\0';
        ppppppplVar9 = param_2 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppppppplVar9,0x10);
          if (bVar3) {
            *ppppppplVar9 = (long ******)((long)*ppppppplVar9 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        func_0x000104a9a320(param_2);
        pcVar11 = (char *)(ulong)*(uint *)(param_2 + 0x155);
      }
      param_2[0x139] = (long ******)((long)param_2[0x139] + (ulong)*(uint *)((long)param_2 + 0xaa4))
      ;
      ppppppplVar9 = param_2 + 0x1f;
      func_0x000104aa7b24(ppppppplVar9,pcVar11);
      pppppplStack_188 = (long ******)0x0;
      pppppplStack_a0 = (long ******)((ulong)pppppplStack_a0 & 0xffffffff00000000);
      pppppplStack_a8 = (long ******)0x0;
      if (ppppppplVar9 == (long *******)0x0) {
        pppppplStack_f8 = (long ******)(param_2 + 0x135);
        param_5 = (long *******)&UNK_104aa7918;
        func_0x000104a9c074(&pppppplStack_168,&pppppplStack_f8,
                            *(undefined4 *)((long)param_2 + 0xaa4),&uStack_169);
        ppppppplVar8 = (long *******)pppppplStack_f8;
        if ((long *******)pppppplStack_168 != (long *******)0x0) {
          pppppplStack_188 = pppppplStack_168;
        }
        pppppplStack_230 = pppppplStack_168;
        pppppplStack_f8 = (long ******)0x0;
        uVar13 = 0;
        FUN_1008e2ed0(ppppppplVar8,0,0);
      }
      else {
        pppppplStack_f8 = ppppppplVar9[0xdf];
        pppppplStack_f0 = (long ******)(ppppppplVar9 + 0xdf);
        func_0x000104a9c048(&pppppplStack_168,&pppppplStack_f8,
                            *(undefined4 *)((long)param_2 + 0xaa4));
        ppppppplVar8 = (long *******)pppppplStack_f0;
        ppppppplVar7 = (long *******)pppppplStack_f8;
        if ((long *******)pppppplStack_168 != (long *******)0x0) {
          pppppplStack_188 = pppppplStack_168;
        }
        pppppplStack_230 = pppppplStack_168;
        pppppplStack_f8 = (long ******)0x0;
        uVar14 = 0;
        FUN_1008e2ed0(ppppppplVar7,0,0);
        param_5 = ppppppplVar7;
        FUN_1008e2f10(ppppppplVar8,ppppppplVar7,uVar14 & 0xffffffff);
        uVar13 = SUB84(ppppppplVar7,0);
      }
      pppppplStack_a0 = (long ******)CONCAT44(pppppplStack_a0._4_4_,uVar13);
      pppppplStack_a8 = (long ******)ppppppplVar8;
      FUN_1008e1b18(&pppppplStack_f8);
      pcVar11 = (char *)param_2;
      param_4 = ppppppplVar9;
      FUN_100747370(&pppppplStack_a8);
      if ((long *******)pppppplStack_230 == (long *******)0x0) {
        if (ppppppplVar9 == (long *******)0x0) {
code_r0x0001008d8994:
          param_2[0x158] = (long ******)&UNK_104aa75fc;
        }
        else {
          ppppppplVar9[0xdd] =
               (long ******)((long)ppppppplVar9[0xdd] + (ulong)*(uint *)((long)param_2 + 0xaa4));
          ppppppplVar9[0x27] = (long ******)((long)ppppppplVar9[0x27] + 9);
          if (*(char *)((long)ppppppplVar9 + 0x169) != '\0') goto code_r0x0001008d8994;
          pcVar11 = (char *)(ulong)*(uint *)((long)ppppppplVar9 + 0x9c);
          param_4 = ppppppplVar9;
          func_0x000104a9c2e8(&pppppplStack_f8,*(char *)((long)param_2 + 0xa9d));
          ppppppplVar8 = (long *******)pppppplStack_f8;
          ppppppplVar7 = (long *******)pppppplStack_f8;
          if ((long *******)pppppplStack_f8 != (long *******)0x0) goto code_r0x0001008d88e0;
          param_2[0x157] = (long ******)ppppppplVar9;
          param_2[0x158] = (long ******)&UNK_104a9c84c;
          param_2[0x156] = (long ******)0x0;
          param_2[0x107] = (long ******)0x8000000000000000;
        }
        pppppplStack_210 = (long ******)0x0;
        ppppppplVar9 = (long *******)pppppplStack_210;
      }
      else {
        ppppppplVar8 = (long *******)pppppplStack_230;
        ppppppplVar7 = (long *******)pppppplStack_188;
        if (ppppppplVar9 == (long *******)0x0) {
          pppppplStack_f8 = pppppplStack_230;
          uVar14 = (ulong)pppppplStack_230 & 1;
          if (((ulong)pppppplStack_230 & 1) != 0) {
            piVar15 = (int *)((long)pppppplStack_230 + -1);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar15,0x10);
              if (bVar3) {
                *piVar15 = *piVar15 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          func_0x000104addba0(&pppppplStack_210,&pppppplStack_f8);
          if (((ulong)pppppplStack_f8 & 1) != 0) {
            FUN_10084dad0();
          }
        }
        else {
code_r0x0001008d88e0:
          pppppplStack_188 = (long ******)ppppppplVar7;
          uVar14 = (ulong)ppppppplVar8 & 1;
          pppppplStack_168 = (long ******)ppppppplVar8;
          if (((ulong)ppppppplVar8 & 1) != 0) {
            piVar15 = (int *)((long)ppppppplVar8 + -1);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar15,0x10);
              if (bVar3) {
                *piVar15 = *piVar15 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          pppppplStack_230 = (long ******)ppppppplVar8;
          func_0x000104addba0(&pppppplStack_f8,&pppppplStack_168);
          func_0x000104a997b0(param_2,ppppppplVar9,1,0,&pppppplStack_f8);
          if (((ulong)pppppplStack_f8 & 1) != 0) {
            FUN_10084dad0();
          }
          if (((ulong)pppppplStack_168 & 1) != 0) {
            FUN_10084dad0();
          }
          pcVar11 = (char *)(ulong)*(uint *)(param_2 + 0x155);
          param_5 = ppppppplVar9 + 0x2a;
          param_4 = (long *******)0x1;
          func_0x000104a9d3e0(param_2);
          param_2[0x158] = (long ******)&UNK_104aa75fc;
          pppppplStack_210 = (long ******)0x0;
        }
        ppppppplVar9 = (long *******)pppppplStack_210;
        if (uVar14 != 0) {
          FUN_10084dad0(pppppplStack_230);
          ppppppplVar9 = (long *******)pppppplStack_210;
        }
      }
      break;
    case (long ******)0x1:
LAB_1008d8414:
      pcVar11 = (char *)ppppppplVar9;
      func_0x000104aa7604(&pppppplStack_210,param_2);
      ppppppplVar9 = (long *******)pppppplStack_210;
      break;
    default:
      param_2[0x158] = (long ******)&UNK_104aa75fc;
      goto LAB_1008d8470;
    case (long ******)0x3:
      pcVar11 = (char *)(ulong)*(uint *)((long)param_2 + 0xaa4);
      param_4 = (long *******)(ulong)*(byte *)((long)param_2 + 0xa9d);
      func_0x000104a9d45c(&pppppplStack_f8,param_2 + 0x12a);
      if ((long *******)pppppplStack_f8 == (long *******)0x0) {
        pcVar11 = (char *)(ulong)*(uint *)(param_2 + 0x155);
        ppppppplVar9 = param_2 + 0x1f;
        func_0x000104aa7b24();
        param_2[0x157] = (long ******)ppppppplVar9;
        if (ppppppplVar9 == (long *******)0x0) {
          param_2[0x158] = (long ******)&UNK_104aa75fc;
        }
        else {
          ppppppplVar9[0x27] = (long ******)((long)ppppppplVar9[0x27] + 9);
          param_2[0x158] = (long ******)&UNK_104a9d584;
          param_2[0x156] = (long ******)(param_2 + 0x12a);
        }
        pppppplStack_210 = (long ******)0x0;
      }
      else {
        pppppplStack_210 = pppppplStack_f8;
        pppppplStack_f8 = (long ******)0x36;
      }
      ppppppplVar9 = (long *******)pppppplStack_210;
      if (((ulong)pppppplStack_f8 & 1) != 0) {
        FUN_10084dad0();
        ppppppplVar9 = (long *******)pppppplStack_210;
      }
      break;
    case (long ******)0x4:
      goto code_r0x0001008d8140;
    case (long ******)0x6:
      ppppppplVar8 = param_2 + 0x12a;
      pcVar11 = (char *)(ulong)*(uint *)((long)param_2 + 0xaa4);
      param_4 = (long *******)(ulong)*(byte *)((long)param_2 + 0xa9d);
      func_0x000104a9cfe8(&pppppplStack_f8,ppppppplVar8);
      ppppppplVar9 = (long *******)pppppplStack_f8;
      if ((long *******)pppppplStack_f8 == (long *******)0x0) {
        pppppplVar6 = (long ******)&UNK_104a9d120;
code_r0x0001008d8798:
        param_2[0x158] = pppppplVar6;
        param_2[0x156] = (long ******)ppppppplVar8;
        ppppppplVar9 = (long *******)pppppplStack_f8;
      }
      break;
    case (long ******)0x7:
      ppppppplVar8 = param_2 + 0x131;
      pcVar11 = (char *)(ulong)*(uint *)((long)param_2 + 0xaa4);
      param_4 = (long *******)(ulong)*(byte *)((long)param_2 + 0xa9d);
      func_0x000104a9c9cc(&pppppplStack_f8,ppppppplVar8);
      ppppppplVar9 = (long *******)pppppplStack_f8;
      if ((long *******)pppppplStack_f8 == (long *******)0x0) {
        pppppplVar6 = (long ******)&UNK_104a9cb10;
        goto code_r0x0001008d8798;
      }
      break;
    case (long ******)0x8:
      pcVar11 = (char *)(ulong)*(uint *)((long)param_2 + 0xaa4);
      param_4 = (long *******)(ulong)*(byte *)((long)param_2 + 0xa9d);
      FUN_1008d92d8(&pppppplStack_f8,param_2 + 0x12a);
      if ((long *******)pppppplStack_f8 == (long *******)0x0) {
        pcVar11 = (char *)(ulong)*(uint *)(param_2 + 0x155);
        if (*(uint *)(param_2 + 0x155) == 0) {
code_r0x0001008d8828:
          param_2[0x158] = (long ******)FUN_1008d9408;
          param_2[0x156] = (long ******)(param_2 + 0x12a);
        }
        else {
          ppppppplVar9 = param_2 + 0x1f;
          func_0x000104aa7b24();
          param_2[0x157] = (long ******)ppppppplVar9;
          if (ppppppplVar9 != (long *******)0x0) {
            ppppppplVar9[0x27] = (long ******)((long)ppppppplVar9[0x27] + 9);
            goto code_r0x0001008d8828;
          }
          param_2[0x158] = (long ******)&UNK_104aa75fc;
        }
        pppppplStack_210 = (long ******)0x0;
      }
      else {
        pppppplStack_210 = pppppplStack_f8;
        pppppplStack_f8 = (long ******)0x36;
      }
      ppppppplVar9 = (long *******)pppppplStack_210;
      if (((ulong)pppppplStack_f8 & 1) != 0) {
        FUN_10084dad0();
        ppppppplVar9 = (long *******)pppppplStack_210;
      }
      break;
    case (long ******)0x9:
      uStack_1e0 = 0;
      uStack_1d8 = 0;
      ppppplStack_1e8 = (long *****)0x0;
      pcVar11 = "Unexpected CONTINUATION frame";
      param_5 = &pppppplStack_a8;
      param_4 = (long *******)0x1d;
      func_0x000104ab5920(&pppppplStack_210,2);
      ppppppplVar9 = &pppppplStack_f8;
      pppppplStack_f8 = &ppppplStack_1e8;
      goto code_r0x0001008d8178;
    }
code_r0x0001008d846c:
    if (ppppppplVar9 != (long *******)0x0) goto LAB_1008d8610;
LAB_1008d8470:
    uVar16 = *(uint *)((long)param_2 + 0xaa4);
    if (uVar16 == 0) {
      func_0x0001004b8028(&pppppplStack_f8);
      param_3 = &pppppplStack_f8;
      param_4 = (long *******)0x1;
      FUN_1008d90f8(&pppppplStack_a8,param_2);
      pppppplVar6 = pppppplStack_a8;
      ppppppplVar9 = (long *******)0x0;
      if ((long *******)pppppplStack_a8 != (long *******)0x0) {
        pppppplStack_1f0 = pppppplStack_a8;
        pppppplStack_a8 = (long ******)0x36;
        ppppppplVar9 = (long *******)pppppplVar6;
      }
      pcVar11 = (char *)param_3;
      if (ppppppplVar9 == (long *******)0x0) break;
      goto LAB_1008d8610;
    }
    if (*(uint *)(param_2 + 0xfb) < uVar16) {
      pppppplStack_a8 = (long ******)0x10f236221;
      pppppplStack_a0 = (long ******)0x2e;
      func_0x000104aa755c(&pppppplStack_f8,&pppppplStack_a8,(char *)((long)param_2 + 0xaa4),
                          param_2 + 0xfb);
      param_4 = (long *******)pppppplStack_f0;
      pcVar11 = (char *)pppppplStack_f8;
      if (-1 < (long)pppppplStack_e8) {
        param_4 = (long *******)((ulong)pppppplStack_e8 >> 0x38);
        pcVar11 = (char *)&pppppplStack_f8;
      }
      uStack_220 = 0;
      uStack_218 = 0;
      ppppplStack_228 = (long *****)0x0;
      param_2 = (long *******)&ppppplStack_228;
      param_5 = (long *******)&ppppplStack_1a0;
      func_0x000104ab5920(param_1,2);
      pppppplStack_188 = (long ******)param_2;
      func_0x000100482b64(&pppppplStack_188);
      goto LAB_1008d8014;
    }
    unaff_x28 = (long ******)((long)unaff_x28 + 1);
    unaff_x20 = param_2;
    if (unaff_x28 == unaff_x24) goto LAB_1008d8010;
code_r0x0001008d8490:
    uVar4 = (int)unaff_x24 - (int)unaff_x28;
    unaff_x20 = param_2;
    if (uVar16 != uVar4) {
      if (uVar4 <= uVar16) {
        pppppplVar6 = *unaff_x22;
        pppppplVar22 = unaff_x22[3];
        pppppplVar20 = unaff_x22[2];
        unaff_x27[1] = (long)unaff_x22[1];
        *unaff_x27 = (long)pppppplVar6;
        unaff_x27[3] = (long)pppppplVar22;
        unaff_x27[2] = (long)pppppplVar20;
        FUN_1008d8d00(&pppppplStack_f8,alStack_160,(long)unaff_x28 - (long)pppppplVar18,pppppplVar19
                     );
        pcVar11 = (char *)&pppppplStack_f8;
        param_4 = (long *******)0x0;
        FUN_1008d90f8(&pppppplStack_a8,param_2);
        ppppppplVar9 = (long *******)pppppplStack_a8;
        if ((long *******)pppppplStack_a8 == (long *******)0x0) {
          *(uint *)((long)param_2 + 0xaa4) = *(int *)((long)param_2 + 0xaa4) - uVar4;
          goto LAB_1008d8010;
        }
        goto LAB_1008d8610;
      }
      pppppplVar6 = *unaff_x22;
      pppppplVar22 = unaff_x22[3];
      pppppplVar20 = unaff_x22[2];
      unaff_x27[5] = (long)unaff_x22[1];
      unaff_x27[4] = (long)pppppplVar6;
      unaff_x27[7] = (long)pppppplVar22;
      unaff_x27[6] = (long)pppppplVar20;
      FUN_1008d8d00(&pppppplStack_f8,auStack_140,(long)unaff_x28 - (long)pppppplVar18,
                    ((long)unaff_x28 - (long)pppppplVar18) + (ulong)uVar16);
      param_3 = &pppppplStack_f8;
      param_4 = (long *******)0x1;
      FUN_1008d90f8(&pppppplStack_a8,param_2);
      pcVar11 = (char *)param_3;
      ppppppplVar9 = (long *******)pppppplStack_a8;
      if ((long *******)pppppplStack_a8 != (long *******)0x0) goto LAB_1008d8610;
      param_2[0x157] = (long ******)0x0;
      pppppplVar6 = (long ******)((long)unaff_x28 + (ulong)*(uint *)((long)param_2 + 0xaa4));
      goto LAB_1008d806c;
    }
    pppppplVar6 = *unaff_x22;
    pppppplVar22 = unaff_x22[3];
    pppppplVar20 = unaff_x22[2];
    unaff_x27[9] = (long)unaff_x22[1];
    unaff_x27[8] = (long)pppppplVar6;
    unaff_x27[0xb] = (long)pppppplVar22;
    unaff_x27[10] = (long)pppppplVar20;
    FUN_1008d8d00(&pppppplStack_f8,auStack_120,(long)unaff_x28 - (long)pppppplVar18,pppppplVar19);
    pcVar11 = (char *)&pppppplStack_f8;
    param_4 = (long *******)0x1;
    FUN_1008d90f8(&pppppplStack_a8,param_2);
    ppppppplVar9 = (long *******)pppppplStack_a8;
    if ((long *******)pppppplStack_a8 == (long *******)0x0) {
      *(undefined4 *)(param_2 + 0x153) = 0x18;
      param_2[0x157] = (long ******)0x0;
      goto LAB_1008d8010;
    }
    pppppplStack_a8 = (long ******)0x36;
LAB_1008d8610:
    *param_1 = (long ******)ppppppplVar9;
    pppppplStack_1f0 = (long ******)0x36;
  } while( true );
  param_2[0x157] = (long ******)0x0;
  unaff_x28 = (long ******)((long)unaff_x28 + 1);
  pppppplVar6 = unaff_x28;
  if (unaff_x28 == unaff_x24) {
    uVar13 = 0x18;
LAB_1008d85d0:
    *(undefined4 *)(param_2 + 0x153) = uVar13;
    pcVar11 = (char *)param_3;
    unaff_x20 = param_2;
    goto LAB_1008d8010;
  }
  goto LAB_1008d806c;
}



/* Entry: 1008d8bcc; end: 1008d8cff;  */

void FUN_1008d8bcc(undefined8 *param_1,undefined4 *param_2,int param_3,int param_4,
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
LAB_1008d8cc0:
      *param_1 = 0;
      return;
    }
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_78 = 0;
    puVar1 = &uStack_78;
    func_0x000104ab5920(2,"settings frames must be a multiple of six bytes",0x2f,&uStack_29,
                        &uStack_78);
  }
  else if (param_4 == 1) {
    *(undefined1 *)(param_2 + 4) = 1;
    if (param_3 == 0) goto LAB_1008d8cc0;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_48 = 0;
    puVar1 = &uStack_48;
    func_0x000104ab5920(2,"non-empty settings ack frame received",0x25,&uStack_29,&uStack_48);
  }
  else {
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    puVar1 = &uStack_60;
    func_0x000104ab5920(2,"invalid flags on settings frame",0x1f,&uStack_29,&uStack_60);
  }
  puStack_28 = puVar1;
  func_0x000100482b64(&puStack_28);
  return;
}



/* Entry: 1008d8d00; end: 1008d8d77;  */

void FUN_1008d8d00(undefined8 *param_1,long ****param_2,long ****param_3,long ****param_4,
                  long *param_5,int param_6)

{
  long lVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  bool bVar8;
  long ****pppplVar9;
  long ****pppplVar10;
  long ****pppplVar11;
  long ***ppplVar12;
  undefined4 uVar13;
  undefined8 *extraout_x8;
  ulong uVar14;
  ulong *extraout_x8_00;
  int *piVar15;
  uint uVar16;
  long ***ppplVar17;
  long ***ppplVar18;
  long ****unaff_x20;
  uint *unaff_x21;
  long ****unaff_x22;
  byte *pbVar19;
  byte *pbVar20;
  long ***ppplVar21;
  undefined8 uVar22;
  ulong uStack_140;
  undefined1 auStack_138 [8];
  long ***ppplStack_130;
  uint *puStack_128;
  long ***ppplStack_120;
  long ***ppplStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  long **pplStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e1;
  char *pcStack_e0;
  undefined8 uStack_d8;
  long **pplStack_d0;
  uint uStack_c4;
  long **pplStack_c0;
  long ***ppplStack_b8;
  long **pplStack_b0;
  byte bStack_a1;
  undefined1 auStack_98 [32];
  long lStack_78;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  ppplVar12 = (long ***)((long)param_4 - (long)param_3);
  if (param_4 < param_3) {
    func_0x000107c2c3e0();
  }
  else {
    ppplVar18 = *param_2;
    if (ppplVar18 == (long ***)0x0) {
      if (param_4 <= (long ****)(ulong)*(byte *)(param_2 + 1)) {
        *param_1 = 0;
        *(char *)(param_1 + 1) = (char)ppplVar12;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memcpy_11034c658)((long)param_1 + 9,(long)param_2 + (long)param_3 + 9);
        return;
      }
      goto LAB_1008d8d74;
    }
    if (param_4 <= param_2[1]) {
      ppplVar17 = param_2[2];
      param_1[1] = ppplVar12;
      param_1[2] = (undefined *)((long)ppplVar17 + (long)param_3);
      *param_1 = ppplVar18;
      return;
    }
  }
  func_0x000107c2c3e8();
LAB_1008d8d74:
  func_0x000107c2c3e4();
  pcStack_18 = FUN_1008d8d78;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pbVar20 = (byte *)((long)param_5 + 9);
  if (*param_5 != 0) {
    pbVar20 = (byte *)param_5[2];
  }
  uVar14 = param_5[1] & 0xff;
  if (*param_5 != 0) {
    uVar14 = param_5[1];
  }
  pppplVar9 = param_2;
  pppplVar11 = param_3;
  puStack_20 = &stack0xfffffffffffffff0;
  if (*(char *)(param_2 + 2) == '\0') {
    pbVar2 = pbVar20 + uVar14;
    unaff_x21 = (uint *)((long)param_2 + 0x14);
    puStack_20 = &stack0xfffffffffffffff0;
code_r0x0001008d8df4:
code_r0x0001008d8e00:
    pbVar19 = pbVar20;
    unaff_x20 = param_3;
    unaff_x22 = param_2;
    switch(*(undefined4 *)param_2) {
    case 0:
      if (pbVar20 == pbVar2) {
        *(undefined4 *)param_2 = 0;
        if (param_6 != 0) {
          ppplVar18 = param_2[1];
          ppplVar21 = param_2[4];
          ppplVar17 = param_2[3];
          uVar22 = *(undefined8 *)((long)param_2 + 0x24);
          *(undefined8 *)((long)ppplVar18 + 0x14) = *(undefined8 *)((long)param_2 + 0x2c);
          *(undefined8 *)((long)ppplVar18 + 0xc) = uVar22;
          ppplVar18[1] = (long **)ppplVar21;
          *ppplVar18 = (long **)ppplVar17;
          *(int *)((long)param_3 + 0xcf4) = *(int *)((long)param_3 + 0xcf4) + 1;
          FUN_1008d9244(auStack_98);
          FUN_1005a70c4(param_3 + 0xc6,auStack_98);
          pppplVar9 = param_3;
          FUN_1007474b0(param_3,0xd);
          pppplVar11 = (long ****)param_3[0x10];
          if (pppplVar11 != (long ****)0x0) {
            pplStack_d0 = (long **)0x0;
            ppplVar12 = &pplStack_d0;
            FUN_1004bd7e8(&ppplStack_b8,pppplVar11,ppplVar12);
            pppplVar9 = (long ****)&pplStack_d0;
            FUN_1004bdf74();
            param_3[0x10] = (long ***)0x0;
          }
        }
        goto LAB_1008d8f58;
      }
      pbVar19 = pbVar20 + 1;
      *(ushort *)((long)param_2 + 0x12) = (ushort)*pbVar20 << 8;
      break;
    case 1:
      break;
    case 2:
      goto code_r0x0001008d8e3c;
    case 3:
      goto code_r0x0001008d8e50;
    case 4:
      goto code_r0x0001008d8e68;
    case 5:
      goto code_r0x0001008d8e80;
    default:
      goto code_r0x0001008d8e00;
    }
    if (pbVar19 == pbVar2) {
      uVar13 = 1;
      goto code_r0x0001008d8f54;
    }
    pbVar20 = pbVar19 + 1;
    *(ushort *)((long)param_2 + 0x12) = *(ushort *)((long)param_2 + 0x12) | (ushort)*pbVar19;
code_r0x0001008d8e3c:
    if (pbVar20 == pbVar2) {
      uVar13 = 2;
      goto code_r0x0001008d8f54;
    }
    pbVar19 = pbVar20 + 1;
    *unaff_x21 = (uint)*pbVar20 << 0x18;
code_r0x0001008d8e50:
    if (pbVar19 == pbVar2) {
      uVar13 = 3;
      goto code_r0x0001008d8f54;
    }
    pbVar20 = pbVar19 + 1;
    *unaff_x21 = *unaff_x21 | (uint)*pbVar19 << 0x10;
code_r0x0001008d8e68:
    if (pbVar20 == pbVar2) {
      uVar13 = 4;
      goto code_r0x0001008d8f54;
    }
    pbVar19 = pbVar20 + 1;
    *unaff_x21 = *unaff_x21 | (uint)*pbVar20 << 8;
code_r0x0001008d8e80:
    if (pbVar19 != pbVar2) {
      *(undefined4 *)param_2 = 0;
      pbVar20 = pbVar19 + 1;
      *(uint *)((long)param_2 + 0x14) = *(uint *)((long)param_2 + 0x14) | (uint)*pbVar19;
      pppplVar9 = (long ****)(ulong)*(ushort *)((long)param_2 + 0x12);
      pppplVar11 = (long ****)&uStack_c4;
      FUN_1008d9200(pppplVar9,pppplVar11);
      if (((ulong)pppplVar9 & 1) != 0) {
        uVar14 = (ulong)uStack_c4;
        uVar16 = *unaff_x21;
        lVar1 = uVar14 * 0x20;
        uVar4 = *(uint *)(&UNK_1107c4824 + lVar1);
        if ((uVar16 < uVar4) || (*(uint *)(&UNK_1107c4828 + lVar1) < uVar16)) {
          if (*(int *)(&UNK_1107c482c + lVar1) == 0) {
            uVar3 = *(uint *)(&UNK_1107c4828 + uVar14 * 0x20);
            if (uVar16 <= *(uint *)(&UNK_1107c4828 + uVar14 * 0x20)) {
              uVar3 = uVar16;
            }
            bVar8 = uVar4 <= uVar16;
            uVar16 = uVar4;
            if (bVar8) {
              uVar16 = uVar3;
            }
            *unaff_x21 = uVar16;
          }
          else if (*(int *)(&UNK_1107c482c + lVar1) == 1) {
            unaff_x22 = (long ****)(&PTR_DAT_1107c4818 + uVar14 * 4);
            uVar13 = *(undefined4 *)(param_3 + 0xfd);
            uVar5 = *(undefined4 *)(&UNK_1107c4830 + uVar14 * 0x20);
            FUN_10047e7b4(&ppplStack_b8,"HTTP2 settings error");
            func_0x000104a9cd04(uVar13,uVar5,&ppplStack_b8,param_3 + 0xc6);
            pcStack_e0 = "invalid value %u passed for %s";
            uStack_d8 = 0x1e;
            func_0x000104a9d87c(&ppplStack_b8,&pcStack_e0,unaff_x21,unaff_x22);
            ppplVar12 = (long ***)pplStack_b0;
            pppplVar11 = (long ****)ppplStack_b8;
            if (-1 < (char)bStack_a1) {
              ppplVar12 = (long ***)(ulong)bStack_a1;
              pppplVar11 = &ppplStack_b8;
            }
            uStack_f8 = 0;
            uStack_f0 = 0;
            pplStack_100 = (long **)0x0;
            func_0x000104ab5920(extraout_x8,2,pppplVar11,ppplVar12,&uStack_e1,&pplStack_100);
            pppplVar9 = (long ****)&pplStack_c0;
            pplStack_c0 = (long **)&pplStack_100;
            func_0x000100482b64();
            unaff_x20 = (long ****)&pplStack_100;
            if ((char)bStack_a1 < '\0') {
              func_0x000107c60e14();
              pppplVar9 = (long ****)ppplStack_b8;
              unaff_x20 = (long ****)&pplStack_100;
            }
            goto code_r0x0001008d8f5c;
          }
        }
        if ((uStack_c4 == 3) && (*(uint *)((long)param_2 + 0x24) != uVar16)) {
          param_3[0x152] =
               (long ***)
               ((long)param_3[0x152] + ((ulong)uVar16 - (ulong)*(uint *)((long)param_2 + 0x24)));
        }
        *(uint *)((long)param_2 + uVar14 * 4 + 0x18) = uVar16;
      }
      goto code_r0x0001008d8df4;
    }
    uVar13 = 5;
code_r0x0001008d8f54:
    *(undefined4 *)param_2 = uVar13;
  }
LAB_1008d8f58:
  *extraout_x8 = 0;
code_r0x0001008d8f5c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  func_0x000107c60e78();
  FUN_1004bdf74(&pplStack_d0);
  pppplVar10 = pppplVar9;
  func_0x000107c60bd8();
  iVar7 = (int)&uStack_140;
  pcStack_108 = FUN_1008d90f8;
  ppplVar18 = pppplVar10[0x157];
  ppplStack_130 = (long ***)unaff_x22;
  puStack_128 = unaff_x21;
  ppplStack_120 = (long ***)unaff_x20;
  ppplStack_118 = (long ***)pppplVar9;
  ppuStack_110 = &puStack_20;
  (*(code *)pppplVar10[0x158])(pppplVar10[0x156],pppplVar10,ppplVar18,pppplVar11,ppplVar12);
  uStack_140 = *extraout_x8_00;
  if (uStack_140 != 0) {
    if ((uStack_140 & 1) != 0) {
      piVar15 = (int *)(uStack_140 - 1);
      do {
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar8) {
          *piVar15 = *piVar15 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    FUN_10084d7f0(&uStack_140,2,auStack_138);
    FUN_1004bdf74(&uStack_140);
    if (iVar7 != 0) {
      if (pppplVar10[0x158] == (long ***)&UNK_104aa013c) {
        pppplVar10[0x11b] = (long ***)0x0;
      }
      else {
        pppplVar10[0x158] = (long ***)&UNK_104aa75fc;
      }
      if (ppplVar18 != (long ***)0x0) {
        func_0x000104a75cac(ppplVar18 + 0xdb,extraout_x8_00);
        func_0x000104a9d3e0(pppplVar10,*(undefined4 *)(pppplVar10 + 0x155),1,ppplVar18 + 0x2a);
      }
    }
  }
  return;
}



/* Entry: 1008d8d78; end: 1008d90f7;  */

void FUN_1008d8d78(undefined8 *param_1,undefined8 ****param_2,undefined8 ****param_3,
                  undefined8 ***param_4,long *param_5,int param_6)

{
  long lVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  bool bVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  undefined8 ****ppppuVar11;
  undefined4 uVar12;
  ulong uVar13;
  ulong *extraout_x8;
  int *piVar14;
  uint uVar15;
  undefined8 ****unaff_x20;
  uint *unaff_x21;
  undefined8 ***pppuVar16;
  undefined8 ****unaff_x22;
  byte *pbVar17;
  byte *pbVar18;
  undefined8 ***pppuVar19;
  undefined8 ***pppuVar20;
  undefined8 uVar21;
  ulong uStack_130;
  undefined1 auStack_128 [8];
  undefined8 ***pppuStack_120;
  uint *puStack_118;
  undefined8 ***pppuStack_110;
  undefined8 ***pppuStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined8 **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d1;
  char *pcStack_d0;
  undefined8 uStack_c8;
  undefined8 **ppuStack_c0;
  uint uStack_b4;
  undefined8 **ppuStack_b0;
  undefined8 ***pppuStack_a8;
  undefined8 **ppuStack_a0;
  byte bStack_91;
  undefined1 auStack_88 [32];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pbVar18 = (byte *)((long)param_5 + 9);
  if (*param_5 != 0) {
    pbVar18 = (byte *)param_5[2];
  }
  uVar13 = param_5[1] & 0xff;
  if (*param_5 != 0) {
    uVar13 = param_5[1];
  }
  ppppuVar9 = param_2;
  ppppuVar11 = param_3;
  if (*(char *)(param_2 + 2) == '\0') {
    pbVar2 = pbVar18 + uVar13;
    unaff_x21 = (uint *)((long)param_2 + 0x14);
code_r0x0001008d8df4:
code_r0x0001008d8e00:
    pbVar17 = pbVar18;
    unaff_x20 = param_3;
    unaff_x22 = param_2;
    switch(*(undefined4 *)param_2) {
    case 0:
      if (pbVar18 == pbVar2) {
        *(undefined4 *)param_2 = 0;
        if (param_6 != 0) {
          pppuVar16 = param_2[1];
          pppuVar20 = param_2[4];
          pppuVar19 = param_2[3];
          uVar21 = *(undefined8 *)((long)param_2 + 0x24);
          *(undefined8 *)((long)pppuVar16 + 0x14) = *(undefined8 *)((long)param_2 + 0x2c);
          *(undefined8 *)((long)pppuVar16 + 0xc) = uVar21;
          pppuVar16[1] = pppuVar20;
          *pppuVar16 = pppuVar19;
          *(int *)((long)param_3 + 0xcf4) = *(int *)((long)param_3 + 0xcf4) + 1;
          FUN_1008d9244(auStack_88);
          FUN_1005a70c4(param_3 + 0xc6,auStack_88);
          ppppuVar9 = param_3;
          FUN_1007474b0(param_3,0xd);
          ppppuVar11 = (undefined8 ****)param_3[0x10];
          if (ppppuVar11 != (undefined8 ****)0x0) {
            ppuStack_c0 = (undefined8 ***)0x0;
            param_4 = &ppuStack_c0;
            FUN_1004bd7e8(&pppuStack_a8,ppppuVar11,param_4);
            ppppuVar9 = (undefined8 ****)&ppuStack_c0;
            FUN_1004bdf74();
            param_3[0x10] = (undefined8 ***)0x0;
          }
        }
        goto LAB_1008d8f58;
      }
      pbVar17 = pbVar18 + 1;
      *(ushort *)((long)param_2 + 0x12) = (ushort)*pbVar18 << 8;
      break;
    case 1:
      break;
    case 2:
      goto code_r0x0001008d8e3c;
    case 3:
      goto code_r0x0001008d8e50;
    case 4:
      goto code_r0x0001008d8e68;
    case 5:
      goto code_r0x0001008d8e80;
    default:
      goto code_r0x0001008d8e00;
    }
    if (pbVar17 == pbVar2) {
      uVar12 = 1;
      goto code_r0x0001008d8f54;
    }
    pbVar18 = pbVar17 + 1;
    *(ushort *)((long)param_2 + 0x12) = *(ushort *)((long)param_2 + 0x12) | (ushort)*pbVar17;
code_r0x0001008d8e3c:
    if (pbVar18 == pbVar2) {
      uVar12 = 2;
      goto code_r0x0001008d8f54;
    }
    pbVar17 = pbVar18 + 1;
    *unaff_x21 = (uint)*pbVar18 << 0x18;
code_r0x0001008d8e50:
    if (pbVar17 == pbVar2) {
      uVar12 = 3;
      goto code_r0x0001008d8f54;
    }
    pbVar18 = pbVar17 + 1;
    *unaff_x21 = *unaff_x21 | (uint)*pbVar17 << 0x10;
code_r0x0001008d8e68:
    if (pbVar18 == pbVar2) {
      uVar12 = 4;
      goto code_r0x0001008d8f54;
    }
    pbVar17 = pbVar18 + 1;
    *unaff_x21 = *unaff_x21 | (uint)*pbVar18 << 8;
code_r0x0001008d8e80:
    if (pbVar17 != pbVar2) {
      *(undefined4 *)param_2 = 0;
      pbVar18 = pbVar17 + 1;
      *(uint *)((long)param_2 + 0x14) = *(uint *)((long)param_2 + 0x14) | (uint)*pbVar17;
      ppppuVar9 = (undefined8 ****)(ulong)*(ushort *)((long)param_2 + 0x12);
      ppppuVar11 = (undefined8 ****)&uStack_b4;
      FUN_1008d9200(ppppuVar9,ppppuVar11);
      if (((ulong)ppppuVar9 & 1) != 0) {
        uVar13 = (ulong)uStack_b4;
        uVar15 = *unaff_x21;
        lVar1 = uVar13 * 0x20;
        uVar4 = *(uint *)(&UNK_1107c4824 + lVar1);
        if ((uVar15 < uVar4) || (*(uint *)(&UNK_1107c4828 + lVar1) < uVar15)) {
          if (*(int *)(&UNK_1107c482c + lVar1) == 0) {
            uVar3 = *(uint *)(&UNK_1107c4828 + uVar13 * 0x20);
            if (uVar15 <= *(uint *)(&UNK_1107c4828 + uVar13 * 0x20)) {
              uVar3 = uVar15;
            }
            bVar8 = uVar4 <= uVar15;
            uVar15 = uVar4;
            if (bVar8) {
              uVar15 = uVar3;
            }
            *unaff_x21 = uVar15;
          }
          else if (*(int *)(&UNK_1107c482c + lVar1) == 1) {
            unaff_x22 = (undefined8 ****)(&PTR_DAT_1107c4818 + uVar13 * 4);
            uVar12 = *(undefined4 *)(param_3 + 0xfd);
            uVar5 = *(undefined4 *)(&UNK_1107c4830 + uVar13 * 0x20);
            FUN_10047e7b4(&pppuStack_a8,"HTTP2 settings error");
            func_0x000104a9cd04(uVar12,uVar5,&pppuStack_a8,param_3 + 0xc6);
            pcStack_d0 = "invalid value %u passed for %s";
            uStack_c8 = 0x1e;
            func_0x000104a9d87c(&pppuStack_a8,&pcStack_d0,unaff_x21,unaff_x22);
            param_4 = (undefined8 ***)ppuStack_a0;
            ppppuVar11 = (undefined8 ****)pppuStack_a8;
            if (-1 < (char)bStack_91) {
              param_4 = (undefined8 ***)(ulong)bStack_91;
              ppppuVar11 = &pppuStack_a8;
            }
            uStack_e8 = 0;
            uStack_e0 = 0;
            ppuStack_f0 = (undefined8 ***)0x0;
            func_0x000104ab5920(param_1,2,ppppuVar11,param_4,&uStack_d1,&ppuStack_f0);
            ppppuVar9 = (undefined8 ****)&ppuStack_b0;
            ppuStack_b0 = &ppuStack_f0;
            func_0x000100482b64();
            unaff_x20 = (undefined8 ****)&ppuStack_f0;
            if ((char)bStack_91 < '\0') {
              func_0x000107c60e14();
              ppppuVar9 = (undefined8 ****)pppuStack_a8;
              unaff_x20 = (undefined8 ****)&ppuStack_f0;
            }
            goto code_r0x0001008d8f5c;
          }
        }
        if ((uStack_b4 == 3) && (*(uint *)((long)param_2 + 0x24) != uVar15)) {
          param_3[0x152] =
               (undefined8 ***)
               ((long)param_3[0x152] + ((ulong)uVar15 - (ulong)*(uint *)((long)param_2 + 0x24)));
        }
        *(uint *)((long)param_2 + uVar13 * 4 + 0x18) = uVar15;
      }
      goto code_r0x0001008d8df4;
    }
    uVar12 = 5;
code_r0x0001008d8f54:
    *(undefined4 *)param_2 = uVar12;
  }
LAB_1008d8f58:
  *param_1 = 0;
code_r0x0001008d8f5c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
  FUN_1004bdf74(&ppuStack_c0);
  ppppuVar10 = ppppuVar9;
  func_0x000107c60bd8();
  iVar7 = (int)&uStack_130;
  pcStack_f8 = FUN_1008d90f8;
  pppuVar16 = ppppuVar10[0x157];
  pppuStack_120 = unaff_x22;
  puStack_118 = unaff_x21;
  pppuStack_110 = unaff_x20;
  pppuStack_108 = ppppuVar9;
  puStack_100 = &stack0xfffffffffffffff0;
  (*(code *)ppppuVar10[0x158])(ppppuVar10[0x156],ppppuVar10,pppuVar16,ppppuVar11,param_4);
  uStack_130 = *extraout_x8;
  if (uStack_130 != 0) {
    if ((uStack_130 & 1) != 0) {
      piVar14 = (int *)(uStack_130 - 1);
      do {
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar8) {
          *piVar14 = *piVar14 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    FUN_10084d7f0(&uStack_130,2,auStack_128);
    FUN_1004bdf74(&uStack_130);
    if (iVar7 != 0) {
      if (ppppuVar10[0x158] == (undefined8 ***)&UNK_104aa013c) {
        ppppuVar10[0x11b] = (undefined8 ***)0x0;
      }
      else {
        ppppuVar10[0x158] = (undefined8 ***)&UNK_104aa75fc;
      }
      if (pppuVar16 != (undefined8 ***)0x0) {
        func_0x000104a75cac(pppuVar16 + 0xdb,extraout_x8);
        func_0x000104a9d3e0(ppppuVar10,*(undefined4 *)(ppppuVar10 + 0x155),1,pppuVar16 + 0x2a);
      }
    }
  }
  return;
}



/* Entry: 1008d90f8; end: 1008d91ff;  */

void FUN_1008d90f8(ulong *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  ulong uStack_40;
  undefined1 auStack_38 [8];
  
  iVar3 = (int)&uStack_40;
  lVar5 = *(long *)(param_2 + 0xab8);
  (**(code **)(param_2 + 0xac0))(*(undefined8 *)(param_2 + 0xab0),param_2,lVar5,param_3,param_4);
  uStack_40 = *param_1;
  if (uStack_40 != 0) {
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
    FUN_10084d7f0(&uStack_40,2,auStack_38);
    FUN_1004bdf74(&uStack_40);
    if (iVar3 != 0) {
      if (*(undefined **)(param_2 + 0xac0) == &UNK_104aa013c) {
        *(undefined8 *)(param_2 + 0x8d8) = 0;
      }
      else {
        *(undefined **)(param_2 + 0xac0) = &UNK_104aa75fc;
      }
      if (lVar5 != 0) {
        func_0x000104a75cac(lVar5 + 0x6d8,param_1);
        func_0x000104a9d3e0(param_2,*(undefined4 *)(param_2 + 0xaa8),1,lVar5 + 0x150);
      }
    }
  }
  return;
}



/* Entry: 1008d9200; end: 1008d9243;  */

bool FUN_1008d9200(uint param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 - 1 & 0xff;
  uVar2 = uVar1 + 4;
  if (param_1 - 1 >> 8 != 0xfe) {
    uVar2 = uVar1;
  }
  *param_2 = uVar2;
  if (uVar2 < 7) {
    return *(ushort *)(&UNK_10dd55478 + (ulong)uVar2 * 2) == param_1;
  }
  return false;
}



/* Entry: 1008d9244; end: 1008d92d7;  */

void FUN_1008d9244(long *param_1)

{
  undefined4 *puVar1;
  
  func_0x0001005a7e6c(9);
  puVar1 = (undefined4 *)((long)param_1 + 9);
  if (*param_1 != 0) {
    puVar1 = (undefined4 *)param_1[2];
  }
  *puVar1 = 0x4000000;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined4 *)((long)puVar1 + 5) = 0;
  return;
}



/* Entry: 1008d92d8; end: 1008d9407;  */

byte *****
FUN_1008d92d8(undefined8 *param_1,byte *****param_2,byte *****param_3,byte *****param_4,
             long *param_5,int param_6)

{
  byte *pbVar1;
  byte *****pppppbVar2;
  undefined1 *puVar3;
  byte *****pppppbVar5;
  long lVar6;
  uint uVar7;
  byte ****ppppbVar8;
  undefined8 *extraout_x8;
  ulong uVar9;
  byte ****ppppbVar10;
  byte *pbVar11;
  uint uVar13;
  ulong uVar14;
  byte ****ppppbVar15;
  byte ****unaff_x20;
  undefined1 **ppuVar16;
  code *pcVar17;
  long alStack_170 [2];
  undefined1 auStack_160 [8];
  byte ***pppbStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 uStack_139;
  byte ****ppppbStack_138;
  ulong uStack_130;
  byte bStack_121;
  byte ****ppppbStack_120;
  undefined1 *puStack_118;
  long lStack_110;
  undefined1 auStack_108 [32];
  char *pcStack_e8;
  undefined8 uStack_e0;
  long lStack_b8;
  undefined1 *puStack_90;
  code *pcStack_88;
  byte **ppbStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_61;
  byte ****ppppbStack_60;
  byte ****ppppbStack_58;
  byte bStack_49;
  byte ***pppbStack_48;
  undefined *puStack_40;
  ulong uStack_38;
  undefined *puStack_30;
  long lStack_28;
  undefined1 **ppuVar4;
  byte *pbVar12;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
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
    pppbStack_48 = (byte ***)((ulong)param_3 & 0xffffffff);
    puStack_40 = &UNK_10ae73cc0;
    uStack_38 = (ulong)param_4 & 0xffffffff;
    puStack_30 = &UNK_10ae73c30;
    FUN_1004d4da0(&ppppbStack_60,"invalid window update: length=%d, flags=%02x",0x2c,&pppbStack_48,2
                 );
    param_4 = (byte *****)ppppbStack_58;
    param_3 = (byte *****)ppppbStack_60;
    if (-1 < (char)bStack_49) {
      param_4 = (byte *****)(ulong)bStack_49;
      param_3 = &ppppbStack_60;
    }
    uStack_78 = 0;
    uStack_70 = 0;
    ppbStack_80 = (byte **)0x0;
    param_5 = (long *)&uStack_61;
    param_6 = (int)&ppbStack_80;
    func_0x000104ab5920(param_1,2);
    param_2 = (byte *****)&pppbStack_48;
    pppbStack_48 = &ppbStack_80;
    func_0x000100482b64();
    unaff_x20 = (byte ****)&ppbStack_80;
    if ((char)bStack_49 < '\0') {
      param_2 = (byte *****)ppppbStack_60;
      func_0x000107c60e14();
      unaff_x20 = (byte ****)&ppbStack_80;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_2;
  }
  func_0x000107c60e78();
  pppbStack_48 = (byte ***)unaff_x20;
  func_0x000100482b64(&pppbStack_48);
  if ((char)bStack_49 < '\0') {
    func_0x000107c60e14(ppppbStack_60);
  }
  func_0x000107c60bd8();
  pcStack_88 = FUN_1008d9408;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pbVar1 = (byte *)((long)param_5 + 9);
  if (*param_5 != 0) {
    pbVar1 = (byte *)param_5[2];
  }
  uVar9 = param_5[1] & 0xff;
  if (*param_5 != 0) {
    uVar9 = param_5[1];
  }
  uVar7 = (uint)*(byte *)param_2;
  pbVar11 = pbVar1;
  if (*(byte *)param_2 != 4 && uVar9 != 0) {
    uVar13 = *(uint *)((long)param_2 + 4);
    pbVar12 = pbVar1;
    uVar14 = uVar9;
    do {
      uVar14 = uVar14 - 1;
      pbVar11 = pbVar12 + 1;
      uVar13 = (uint)*pbVar12 << (ulong)((uVar7 & 0xff) * -8 + 0x18 & 0x1f) | uVar13;
      *(uint *)((long)param_2 + 4) = uVar13;
      uVar7 = uVar7 + 1;
      *(byte *)param_2 = (byte)uVar7;
      if ((uVar7 & 0xff) == 4) break;
      pbVar12 = pbVar11;
    } while (uVar14 != 0);
  }
  if (param_4 != (byte *****)0x0) {
    param_4[0x27] =
         (byte ****)((long)param_4[0x27] + (ulong)(uint)(((int)pbVar1 + (int)uVar9) - (int)pbVar11))
    ;
  }
  pppppbVar5 = param_3;
  puStack_90 = &stack0xfffffffffffffff0;
  if ((uVar7 & 0xff) == 4) {
    param_2 = (byte *****)(ulong)*(uint *)((long)param_2 + 4);
    uVar9 = (ulong)param_2 & 0x7fffffff;
    if ((int)uVar9 == 0) {
      pcStack_e8 = "invalid window update bytes: ";
      uStack_e0 = 0x1d;
      FUN_1004d52e8(param_2,auStack_108);
      lStack_110 = (long)param_2 - (long)auStack_108;
      puStack_118 = auStack_108;
      FUN_10047c83c(&ppppbStack_138,&pcStack_e8,&puStack_118);
      pppppbVar5 = (byte *****)ppppbStack_138;
      if (-1 < (char)bStack_121) {
        uStack_130 = (ulong)bStack_121;
        pppppbVar5 = &ppppbStack_138;
      }
      uStack_150 = 0;
      uStack_148 = 0;
      pppbStack_158 = (byte ***)0x0;
      param_3 = (byte *****)&pppbStack_158;
      func_0x000104ab5920(extraout_x8,2,pppppbVar5,uStack_130,&uStack_139,&pppbStack_158);
      param_2 = &ppppbStack_120;
      ppppbStack_120 = (byte ****)param_3;
      func_0x000100482b64();
      if ((char)bStack_121 < '\0') {
        param_2 = (byte *****)ppppbStack_138;
        func_0x000107c60e14();
      }
      goto LAB_1008d95e0;
    }
    if (param_6 == 0) {
      func_0x000107c2c2c0();
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x1008d9614);
      (*pcVar17)();
    }
    if (*(int *)(param_3 + 0x155) == 0) {
      ppppbVar10 = param_3[0x14d];
      ppppbVar8 = (byte ****)((long)ppppbVar10 + uVar9);
      param_3[0x14d] = ppppbVar8;
      if (((long)ppppbVar10 < 1) && (0 < (long)ppppbVar8)) {
        pppppbVar5 = (byte *****)0x13;
LAB_1008d95d4:
        param_2 = param_3;
        FUN_1007474b0();
      }
    }
    else if (param_4 != (byte *****)0x0) {
      param_4[0xe1] = (byte ****)((long)param_4[0xe1] + uVar9);
      param_2 = param_3;
      pppppbVar5 = param_4;
      func_0x000104aa7a8c();
      if ((int)param_2 != 0) {
        func_0x000104a97694(param_3,param_4);
        pppppbVar5 = (byte *****)0xf;
        goto LAB_1008d95d4;
      }
    }
  }
  *extraout_x8 = 0;
LAB_1008d95e0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return param_2;
  }
  func_0x000107c60e78();
  ppppbStack_120 = (byte ****)param_3;
  func_0x000100482b64(&ppppbStack_120);
  if ((char)bStack_121 < '\0') {
    func_0x000107c60e14(ppppbStack_138);
  }
  pcVar17 = FUN_1008d9648;
  func_0x000107c60bd8();
  lVar6 = 3;
  puVar3 = auStack_160;
  ppuVar16 = &puStack_90;
  do {
    ppuVar4 = (undefined1 **)(puVar3 + -0x10);
    *(undefined1 ***)(puVar3 + -0x10) = ppuVar16;
    *(code **)(puVar3 + -8) = pcVar17;
    ppppbVar8 = param_2[lVar6 * 2 + 0x15];
    if (ppppbVar8 == (byte ****)0x0) {
LAB_10074a2c8:
      *pppppbVar5 = ppppbVar8;
      return (byte *****)(ulong)(ppppbVar8 != (byte ****)0x0);
    }
    ppppbVar10 = ppppbVar8 + 0x13;
    if (((uint)*(byte *)ppppbVar10 & 1 << lVar6) != 0) {
      ppppbVar15 = (byte ****)ppppbVar8[lVar6 * 2 + 9];
      pppppbVar2 = param_2 + lVar6 * 2 + 0x16;
      if (ppppbVar15 != (byte ****)0x0) {
        pppppbVar2 = (byte *****)(ppppbVar15 + lVar6 * 2 + 10);
      }
      *pppppbVar2 = (byte ****)0x0;
      param_2[lVar6 * 2 + 0x15] = ppppbVar15;
      *(byte *)ppppbVar10 = *(byte *)ppppbVar10 & ((byte)(1 << lVar6) ^ 0xff);
      goto LAB_10074a2c8;
    }
    pcVar17 = FUN_10074a2e0;
    func_0x000107c2c2d8();
    lVar6 = 0;
    puVar3 = puVar3 + -0x10;
    ppuVar16 = ppuVar4;
  } while( true );
}



/* Entry: 1008d9408; end: 1008d9647;  */

byte *****
FUN_1008d9408(undefined8 *param_1,byte *****param_2,byte *****param_3,byte *****param_4,
             long *param_5,int param_6)

{
  byte *****pppppbVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  byte *****pppppbVar5;
  long lVar6;
  uint uVar7;
  byte ****ppppbVar8;
  ulong uVar9;
  byte ****ppppbVar10;
  byte *pbVar11;
  uint uVar13;
  ulong uVar14;
  byte ****ppppbVar15;
  undefined1 *puVar16;
  code *pcVar17;
  long alStack_f0 [2];
  undefined1 auStack_e0 [8];
  byte ***pppbStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_b9;
  byte ****ppppbStack_b8;
  ulong uStack_b0;
  byte bStack_a1;
  byte ****ppppbStack_a0;
  undefined1 *puStack_98;
  long lStack_90;
  undefined1 auStack_88 [32];
  char *pcStack_68;
  undefined8 uStack_60;
  long lStack_38;
  undefined1 *puVar4;
  byte *pbVar12;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pbVar2 = (byte *)((long)param_5 + 9);
  if (*param_5 != 0) {
    pbVar2 = (byte *)param_5[2];
  }
  uVar9 = param_5[1] & 0xff;
  if (*param_5 != 0) {
    uVar9 = param_5[1];
  }
  uVar7 = (uint)*(byte *)param_2;
  pbVar11 = pbVar2;
  if (*(byte *)param_2 != 4 && uVar9 != 0) {
    uVar13 = *(uint *)((long)param_2 + 4);
    pbVar12 = pbVar2;
    uVar14 = uVar9;
    do {
      uVar14 = uVar14 - 1;
      pbVar11 = pbVar12 + 1;
      uVar13 = (uint)*pbVar12 << (ulong)((uVar7 & 0xff) * -8 + 0x18 & 0x1f) | uVar13;
      *(uint *)((long)param_2 + 4) = uVar13;
      uVar7 = uVar7 + 1;
      *(byte *)param_2 = (byte)uVar7;
      if ((uVar7 & 0xff) == 4) break;
      pbVar12 = pbVar11;
    } while (uVar14 != 0);
  }
  if (param_4 != (byte *****)0x0) {
    param_4[0x27] =
         (byte ****)((long)param_4[0x27] + (ulong)(uint)(((int)pbVar2 + (int)uVar9) - (int)pbVar11))
    ;
  }
  pppppbVar5 = param_3;
  if ((uVar7 & 0xff) == 4) {
    param_2 = (byte *****)(ulong)*(uint *)((long)param_2 + 4);
    uVar9 = (ulong)param_2 & 0x7fffffff;
    if ((int)uVar9 == 0) {
      pcStack_68 = "invalid window update bytes: ";
      uStack_60 = 0x1d;
      FUN_1004d52e8(param_2,auStack_88);
      lStack_90 = (long)param_2 - (long)auStack_88;
      puStack_98 = auStack_88;
      FUN_10047c83c(&ppppbStack_b8,&pcStack_68,&puStack_98);
      pppppbVar5 = (byte *****)ppppbStack_b8;
      if (-1 < (char)bStack_a1) {
        uStack_b0 = (ulong)bStack_a1;
        pppppbVar5 = &ppppbStack_b8;
      }
      uStack_d0 = 0;
      uStack_c8 = 0;
      pppbStack_d8 = (byte ***)0x0;
      param_3 = (byte *****)&pppbStack_d8;
      func_0x000104ab5920(param_1,2,pppppbVar5,uStack_b0,&uStack_b9,&pppbStack_d8);
      param_2 = &ppppbStack_a0;
      ppppbStack_a0 = (byte ****)param_3;
      func_0x000100482b64();
      if ((char)bStack_a1 < '\0') {
        param_2 = (byte *****)ppppbStack_b8;
        func_0x000107c60e14();
      }
      goto LAB_1008d95e0;
    }
    if (param_6 == 0) {
      func_0x000107c2c2c0();
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x1008d9614);
      (*pcVar17)();
    }
    if (*(int *)(param_3 + 0x155) == 0) {
      ppppbVar10 = param_3[0x14d];
      ppppbVar8 = (byte ****)((long)ppppbVar10 + uVar9);
      param_3[0x14d] = ppppbVar8;
      if (((long)ppppbVar10 < 1) && (0 < (long)ppppbVar8)) {
        pppppbVar5 = (byte *****)0x13;
LAB_1008d95d4:
        param_2 = param_3;
        FUN_1007474b0();
      }
    }
    else if (param_4 != (byte *****)0x0) {
      param_4[0xe1] = (byte ****)((long)param_4[0xe1] + uVar9);
      param_2 = param_3;
      pppppbVar5 = param_4;
      func_0x000104aa7a8c();
      if ((int)param_2 != 0) {
        func_0x000104a97694(param_3,param_4);
        pppppbVar5 = (byte *****)0xf;
        goto LAB_1008d95d4;
      }
    }
  }
  *param_1 = 0;
LAB_1008d95e0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_2;
  }
  func_0x000107c60e78();
  ppppbStack_a0 = (byte ****)param_3;
  func_0x000100482b64(&ppppbStack_a0);
  if ((char)bStack_a1 < '\0') {
    func_0x000107c60e14(ppppbStack_b8);
  }
  pcVar17 = FUN_1008d9648;
  func_0x000107c60bd8();
  lVar6 = 3;
  puVar3 = auStack_e0;
  puVar16 = &stack0xfffffffffffffff0;
  do {
    puVar4 = puVar3 + -0x10;
    *(undefined1 **)(puVar3 + -0x10) = puVar16;
    *(code **)(puVar3 + -8) = pcVar17;
    ppppbVar8 = param_2[lVar6 * 2 + 0x15];
    if (ppppbVar8 == (byte ****)0x0) {
LAB_10074a2c8:
      *pppppbVar5 = ppppbVar8;
      return (byte *****)(ulong)(ppppbVar8 != (byte ****)0x0);
    }
    ppppbVar10 = ppppbVar8 + 0x13;
    if (((uint)*(byte *)ppppbVar10 & 1 << lVar6) != 0) {
      ppppbVar15 = (byte ****)ppppbVar8[lVar6 * 2 + 9];
      pppppbVar1 = param_2 + lVar6 * 2 + 0x16;
      if (ppppbVar15 != (byte ****)0x0) {
        pppppbVar1 = (byte *****)(ppppbVar15 + lVar6 * 2 + 10);
      }
      *pppppbVar1 = (byte ****)0x0;
      param_2[lVar6 * 2 + 0x15] = ppppbVar15;
      *(byte *)ppppbVar10 = *(byte *)ppppbVar10 & ((byte)(1 << lVar6) ^ 0xff);
      goto LAB_10074a2c8;
    }
    pcVar17 = FUN_10074a2e0;
    func_0x000107c2c2d8();
    lVar6 = 0;
    puVar3 = puVar3 + -0x10;
    puVar16 = puVar4;
  } while( true );
}



/* Entry: 1008d9648; end: 1008d964f;  */

bool FUN_1008d9648(long param_1,long *param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 *puVar4;
  
  lVar5 = 3;
  puVar3 = (undefined1 *)register0x00000008;
  do {
    puVar4 = puVar3 + -0x10;
    *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
    *(code **)(puVar3 + -8) = unaff_x30;
    plVar7 = (long *)(param_1 + lVar5 * 0x10 + 0xa8);
    lVar6 = *plVar7;
    if (lVar6 == 0) {
LAB_10074a2c8:
      *param_2 = lVar6;
      return lVar6 != 0;
    }
    pbVar1 = (byte *)(lVar6 + 0x98);
    if (((uint)*pbVar1 & 1 << lVar5) != 0) {
      lVar8 = *(long *)(lVar6 + lVar5 * 0x10 + 0x48);
      puVar2 = (undefined8 *)(param_1 + lVar5 * 0x10 + 0xb0);
      if (lVar8 != 0) {
        puVar2 = (undefined8 *)(lVar8 + lVar5 * 0x10 + 0x50);
      }
      *puVar2 = 0;
      *plVar7 = lVar8;
      *pbVar1 = *pbVar1 & ((byte)(1 << lVar5) ^ 0xff);
      goto LAB_10074a2c8;
    }
    unaff_x30 = FUN_10074a2e0;
    func_0x000107c2c2d8();
    lVar5 = 0;
    puVar3 = puVar3 + -0x10;
    unaff_x29 = puVar4;
  } while( true );
}



/* Entry: 1008d9650; end: 1008d97df;  */

void FUN_1008d9650(long *param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  int *piVar6;
  long lVar7;
  ulong uStack_40;
  ulong uStack_38;
  
  FUN_100460448(param_1 + 2);
  if ((char)param_1[0x22] == '\0') {
    FUN_1008d97e0(param_1[0x11],param_1[0xb]);
    if (*param_2 == 0) {
      uStack_38 = 0;
    }
    else {
      func_0x000104adfc0c(*(undefined8 *)param_1[0xe]);
      FUN_10048650c(*(undefined8 *)(param_1[0xe] + 8));
      puVar5 = (undefined8 *)param_1[0xe];
      *puVar5 = 0;
      puVar5[1] = 0;
      plVar4 = (long *)puVar5[2];
      if (plVar4 != (long *)0x0) {
        plVar1 = plVar4 + 1;
        do {
          lVar7 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
      puVar5[2] = 0;
      uStack_38 = *param_2;
      if ((uStack_38 & 1) != 0) {
        piVar6 = (int *)(uStack_38 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar3) {
            *piVar6 = *piVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    FUN_1008d97f8(param_1,&uStack_38);
    if ((uStack_38 & 1) != 0) {
      FUN_10084dad0();
    }
    FUN_1005a5960(param_1 + 0x16);
  }
  else {
    uStack_40 = 0;
    FUN_1008d97f8(param_1,&uStack_40);
    if ((uStack_40 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  func_0x000100466b80(param_1 + 2);
  plVar4 = param_1 + 1;
  do {
    lVar7 = *plVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar3) {
      *plVar4 = lVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar7 + -1 == 0) {
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  return;
}



/* Entry: 1008d97e0; end: 1008d97f7;  */

void FUN_1008d97e0(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001008d97e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))();
  return;
}



/* Entry: 1008d97f8; end: 1008d98a7;  */

ulong * FUN_1008d97f8(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  int *piVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uStack_40;
  undefined1 uStack_31;
  
  puVar3 = (ulong *)(param_1 + 0x108);
  if (*(char *)(param_1 + 0x110) != '\0') {
    uVar6 = *(ulong *)(param_1 + 0x108);
    if ((uVar6 & 1) != 0) {
      piVar4 = (int *)(uVar6 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uStack_40 = uVar6;
    FUN_1008d9ad4(&uStack_31,param_1 + 0x78,&uStack_40);
    if ((uVar6 & 1) != 0) {
      FUN_10084dad0(uVar6);
    }
    *(undefined8 *)(param_1 + 0x88) = 0;
    FUN_1008d9b4c(puVar3);
    return puVar3;
  }
  if (*(char *)(param_1 + 0x110) == '\0') {
    uVar6 = *param_2;
    *puVar3 = uVar6;
    if ((uVar6 & 1) != 0) {
      piVar4 = (int *)(uVar6 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    *(undefined1 *)(param_1 + 0x110) = 1;
  }
  else {
    uVar6 = *puVar3;
    uVar5 = *param_2;
    if (uVar5 != uVar6) {
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
        uVar5 = *param_2;
      }
      *puVar3 = uVar5;
      if ((uVar6 & 1) != 0) {
        FUN_10084dad0();
      }
    }
  }
  return puVar3;
}



/* Entry: 1008d98a8; end: 1008d9933;  */

ulong * FUN_1008d98a8(ulong *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  int *piVar5;
  
  if ((char)param_1[1] == '\0') {
    uVar3 = *param_2;
    *param_1 = uVar3;
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
    *(undefined1 *)(param_1 + 1) = 1;
  }
  else {
    uVar3 = *param_1;
    uVar4 = *param_2;
    if (uVar4 != uVar3) {
      if ((uVar4 & 1) != 0) {
        piVar5 = (int *)(uVar4 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar2) {
            *piVar5 = *piVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        uVar4 = *param_2;
      }
      *param_1 = uVar4;
      if ((uVar3 & 1) != 0) {
        FUN_10084dad0();
      }
    }
  }
  return param_1;
}



/* Entry: 1008d9934; end: 1008d9ad3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1008d9934(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong auStack_58 [4];
  undefined1 uStack_31;
  ulong uStack_30;
  ulong *puStack_28;
  
  FUN_100460448(param_1 + 2);
  if ((char)param_1[0x22] == '\0') {
    FUN_1008d97e0(param_1[0x11],param_1[0xb]);
    func_0x000104adfc0c(*(undefined8 *)param_1[0xe]);
    FUN_10048650c(*(undefined8 *)(param_1[0xe] + 8));
    puVar5 = (undefined8 *)param_1[0xe];
    *puVar5 = 0;
    puVar5[1] = 0;
    plVar4 = (long *)puVar5[2];
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
        (**(code **)(*plVar4 + 8))();
      }
    }
    puVar5[2] = 0;
    auStack_58[1] = 0;
    auStack_58[2] = 0;
    auStack_58[3] = 0;
    func_0x000104ab5920(&uStack_30,2,"connection attempt timed out before receiving SETTINGS frame",
                        0x3c,&uStack_31,auStack_58 + 1);
    FUN_1008d97f8(param_1,&uStack_30);
    if ((uStack_30 & 1) != 0) {
      FUN_10084dad0();
    }
    puStack_28 = auStack_58 + 1;
    func_0x000100482b64(&puStack_28);
  }
  else {
    auStack_58[0] = 0;
    FUN_1008d97f8(param_1,auStack_58);
    if ((auStack_58[0] & 1) != 0) {
      FUN_10084dad0();
    }
  }
  func_0x000100466b80(param_1 + 2);
  plVar4 = param_1 + 1;
  do {
    lVar6 = *plVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar3) {
      *plVar4 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 + -1 == 0) {
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  return;
}



/* Entry: 1008d9ad4; end: 1008d9b4b;  */

void FUN_1008d9ad4(undefined8 param_1,undefined8 *param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_28;
  
  uVar3 = *param_2;
  *param_2 = 0;
  uStack_28 = *param_3;
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
  FUN_1004bd7e8(param_1,uVar3,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    FUN_10084dad0();
  }
  return;
}



/* Entry: 1008d9b4c; end: 1008d9b83;  */

void FUN_1008d9b4c(ulong *param_1)

{
  if ((char)param_1[1] != '\0') {
    if ((*param_1 & 1) != 0) {
      FUN_10084dad0();
    }
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return;
}



/* Entry: 1008d9b84; end: 1008d9ca3;  */

void FUN_1008d9b84(long *param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  long lVar5;
  ulong uVar6;
  ulong uStack_38;
  
  lVar5 = param_1[0x2c];
  FUN_100460448(param_1 + 0x32);
  uVar6 = *param_2;
  if ((uVar6 & 1) != 0) {
    piVar4 = (int *)(uVar6 - 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar3) {
        *piVar4 = *piVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_38 = uVar6;
  FUN_1008da1e0(param_1,&uStack_38);
  if ((uVar6 & 1) != 0) {
    FUN_10084dad0(uVar6);
  }
  func_0x000100466b80(param_1 + 0x32);
  FUN_10048650c(lVar5);
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
  if (lVar5 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001008d9c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}



/* Entry: 1008d9ca4; end: 1008da1df;  */

bool FUN_1008d9ca4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  int *piVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puStack_128;
  long *plStack_120;
  ulong uStack_118;
  undefined8 auStack_110 [2];
  char cStack_f9;
  ulong auStack_f8 [2];
  char cStack_e1;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [8];
  long *plStack_b8;
  undefined **appuStack_b0 [12];
  
  FUN_10047d32c(appuStack_b0,"subchannel",1);
  appuStack_b0[0] = &PTR_FUN_1107c4a78;
  FUN_100560184(auStack_c0,*(undefined8 *)(param_1 + 0x160));
  FUN_10047d464(appuStack_b0,auStack_c0);
  FUN_10047d4f8();
  if (plStack_b8 != (long *)0x0) {
    plVar11 = plStack_b8 + 1;
    do {
      lVar10 = *plVar11;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      func_0x000107c60d68(plStack_b8);
    }
  }
  lVar10 = lRam0000000113815be8;
  if (lRam0000000113815be8 == 0) {
    FUN_100472138();
  }
  uVar5 = lVar10 + 0x18;
  FUN_10047d518(uVar5,appuStack_b0);
  if ((uVar5 & 1) == 0) {
    bVar4 = false;
  }
  else {
    FUN_10047f3fc(&uStack_d0,appuStack_b0);
    if (uStack_d0 == 0) {
      plVar11 = *(long **)(param_1 + 0x168);
      *(undefined8 *)(param_1 + 0x158) = 0;
      *(undefined8 *)(param_1 + 0x160) = 0;
      *(undefined8 *)(param_1 + 0x168) = 0;
      bVar4 = *(char *)(param_1 + 0x1d0) == '\0';
      if (*(char *)(param_1 + 0x1d0) == '\0') {
        puVar6 = (undefined8 *)0x28;
        func_0x000107c60e20();
        uVar12 = uStack_c8;
        uStack_c8 = 0;
        uVar7 = *(undefined8 *)(param_1 + 0x130);
        if (*(long *)(param_1 + 0x140) == 0) {
          uVar13 = 0;
        }
        else {
          plVar8 = (long *)(*(long *)(param_1 + 0x140) + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = *plVar8 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          uVar13 = *(undefined8 *)(param_1 + 0x140);
        }
        *puVar6 = &PTR_DAT_1107c32e8;
        puVar6[1] = 1;
        puVar6[2] = uVar12;
        FUN_1004bf248();
        puVar6[3] = uVar7;
        puVar6[4] = uVar13;
        plVar8 = *(long **)(param_1 + 0x210);
        if (plVar8 != (long *)0x0) {
          plVar1 = plVar8 + 1;
          do {
            lVar10 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar10 + -1 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
        *(undefined8 **)(param_1 + 0x210) = puVar6;
        if (*(long *)(param_1 + 0x140) != 0) {
          plStack_120 = plVar11;
          FUN_1008dae9c(*(long *)(param_1 + 0x140),&plStack_120);
          if (plStack_120 != (long *)0x0) {
            plVar11 = plStack_120 + 1;
            do {
              lVar10 = *plVar11;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar3) {
                *plVar11 = lVar10 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar10 == 1) {
              (**(code **)(*plStack_120 + 8))();
            }
          }
          plVar11 = (long *)0x0;
        }
        uVar12 = *(undefined8 *)(param_1 + 0x210);
        uVar7 = *(undefined8 *)(param_1 + 0x138);
        plVar8 = (long *)(param_1 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        puVar6 = (undefined8 *)0x28;
        func_0x000107c60e20();
        puVar6[2] = 0;
        puVar6[3] = 0;
        *puVar6 = &PTR_DAT_1107c3488;
        puVar6[1] = 1;
        puVar6[4] = param_1;
        puStack_128 = puVar6;
        FUN_1008daf90(uVar12,uVar7,&puStack_128);
        puVar6 = puStack_128;
        puStack_128 = (undefined8 *)0x0;
        if (puVar6 != (undefined8 *)0x0) {
          (**(code **)*puVar6)();
        }
        auStack_f8[0] = 0;
        FUN_1004dbb24(param_1,2,auStack_f8);
        if ((auStack_f8[0] & 1) != 0) {
          FUN_10084dad0();
        }
      }
      if (plVar11 != (long *)0x0) {
        plVar8 = plVar11 + 1;
        do {
          lVar10 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar11 + 8))(plVar11);
        }
      }
    }
    else {
      uStack_e0 = uStack_d0;
      if ((uStack_d0 & 1) != 0) {
        piVar9 = (int *)(uStack_d0 - 1);
        do {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar4) {
            *piVar9 = *piVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      func_0x000104addba0(&uStack_d8,&uStack_e0);
      if ((uStack_e0 & 1) != 0) {
        FUN_10084dad0();
      }
      func_0x000104adfc0c(*(undefined8 *)(param_1 + 0x158));
      func_0x000104a8fd88(auStack_f8,param_1 + 0x18);
      uStack_118 = uStack_d8;
      if ((uStack_d8 & 1) != 0) {
        piVar9 = (int *)(uStack_d8 - 1);
        do {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar4) {
            *piVar9 = *piVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      func_0x000104aba950(auStack_110,&uStack_118);
      FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel.cc"
                    ,0x3d8,2,"subchannel %p %s: error initializing subchannel stack: %s");
      if (cStack_f9 < '\0') {
        func_0x000107c60e14(auStack_110[0]);
      }
      if ((uStack_118 & 1) != 0) {
        FUN_10084dad0();
      }
      if (cStack_e1 < '\0') {
        func_0x000107c60e14(auStack_f8[0]);
      }
      if ((uStack_d8 & 1) != 0) {
        FUN_10084dad0();
      }
      bVar4 = false;
    }
    FUN_100487e0c(&uStack_d0);
  }
  FUN_100487e4c(appuStack_b0);
  return bVar4;
}



/* Entry: 1008da1e0; end: 1008da53f;  */

/* WARNING: Removing unreachable block (ram,0x0001008da668) */

void FUN_1008da1e0(long *param_1,ulong *param_2,long *param_3,char *param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong *puVar5;
  long *plVar6;
  int *piVar7;
  undefined8 extraout_x8;
  long *unaff_x22;
  ulong uVar8;
  undefined1 auStack_1a0 [32];
  long lStack_180;
  long lStack_178;
  long lStack_170;
  undefined1 auStack_160 [8];
  long *plStack_158;
  undefined1 auStack_150 [32];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long *plStack_b0;
  ulong uStack_a8;
  undefined8 auStack_a0 [2];
  char cStack_89;
  ulong auStack_88 [2];
  char cStack_71;
  ulong uStack_70;
  long alStack_68 [3];
  long *plStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = param_1;
  puVar5 = param_2;
  if (((char)param_1[0x3a] == '\0') &&
     ((param_1[0x2b] == 0 || (FUN_1008d9ca4(), ((ulong)plVar3 & 1) == 0)))) {
    uVar8 = param_1[0x6c];
    func_0x000100460dc4();
    lVar4 = *plVar3;
    FUN_1004671a4();
    uStack_70 = 0x7fffffffffffffff;
    if ((uVar8 != 0x7fffffffffffffff && lVar4 != -0x7fffffffffffffff) &&
       ((uStack_70 = 0x8000000000000000, uVar8 != 0x8000000000000000 &&
        (lVar4 != -0x8000000000000000)))) {
      if ((long)uVar8 < 1) {
        if ((long)(-0x8000000000000000 - uVar8) <= -lVar4) goto LAB_1008da45c;
      }
      else if ((long)(uVar8 ^ 0x7fffffffffffffff) < -lVar4) {
        uStack_70 = 0x7fffffffffffffff;
      }
      else {
LAB_1008da45c:
        uStack_70 = uVar8 - lVar4;
      }
    }
    func_0x000104a8fd88(auStack_88,param_1 + 3);
    uStack_a8 = *param_2;
    if ((uStack_a8 & 1) != 0) {
      piVar7 = (int *)(uStack_a8 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = *piVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    func_0x000104aba950(auStack_a0,&uStack_a8);
    param_4 = "subchannel %p %s: connect failed (%s), backing off for %lld ms";
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel.cc"
                  ,0x3b1,1,"subchannel %p %s: connect failed (%s), backing off for %lld ms");
    if (cStack_89 < '\0') {
      func_0x000107c60e14(auStack_a0[0]);
    }
    if ((uStack_a8 & 1) != 0) {
      FUN_10084dad0();
    }
    if (cStack_71 < '\0') {
      func_0x000107c60e14(auStack_88[0]);
    }
    plStack_b0 = (long *)*param_2;
    if (((ulong)plStack_b0 & 1) != 0) {
      piVar7 = (int *)((long)plStack_b0 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = *piVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    func_0x000104addac4(auStack_88,&plStack_b0);
    FUN_1004dbb24(param_1,3,auStack_88);
    if ((auStack_88[0] & 1) != 0) {
      FUN_10084dad0();
    }
    plVar3 = plStack_b0;
    if (((ulong)plStack_b0 & 1) != 0) {
      FUN_10084dad0();
    }
    func_0x000104ab2050();
    puVar5 = &uStack_70;
    func_0x000104ab7d70();
    plVar6 = param_1 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_50 = (long *)0x0;
    plVar6 = (long *)0x10;
    func_0x000107c60e20();
    *plVar6 = (long)&PTR_DAT_1107c3408;
    plVar6[1] = (long)param_1;
    unaff_x22 = alStack_68;
    param_3 = alStack_68;
    plStack_50 = plVar6;
    (**(code **)(*plVar3 + 0x50))();
    param_1[0x6d] = (long)plVar3;
    param_1[0x6e] = (long)puVar5;
    if (plStack_50 == unaff_x22) {
      lVar4 = 4;
      plVar3 = alStack_68;
    }
    else {
      plVar3 = plStack_50;
      if (plStack_50 == (long *)0x0) goto LAB_1008da420;
      lVar4 = 5;
    }
    (**(code **)(*plVar3 + lVar4 * 8))();
  }
LAB_1008da420:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  if ((int)puVar5 != 0) {
    func_0x000104bd46a0();
    if (plStack_50 == unaff_x22) {
      lVar4 = 4;
      plVar6 = alStack_68;
    }
    else {
      if (plStack_50 == (long *)0x0) goto LAB_1008da538;
      lVar4 = 5;
      plVar6 = plStack_50;
    }
    (**(code **)(*plVar6 + lVar4 * 8))();
  }
LAB_1008da538:
  func_0x000107c60bd8();
  lVar4 = *param_3;
  if (*(char *)(lVar4 + 0x27) < '\0') {
    FUN_100033dac(&uStack_130,*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(lVar4 + 0x18));
    lVar4 = *param_3;
  }
  else {
    uStack_128 = *(undefined8 *)(lVar4 + 0x18);
    uStack_130 = *(undefined8 *)(lVar4 + 0x10);
    uStack_120 = *(undefined8 *)(lVar4 + 0x20);
  }
  FUN_100478b40(auStack_150,lVar4 + 0x28);
  lVar4 = *param_3;
  lStack_178 = plVar3[1];
  lStack_180 = *plVar3;
  lStack_170 = plVar3[2];
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = 0;
  FUN_1004780e0(auStack_1a0,puVar5);
  FUN_1004786dc(auStack_160,&lStack_180,auStack_1a0,*param_3 + 0x58,param_4);
  FUN_1004786dc(extraout_x8,&uStack_130,auStack_150,lVar4 + 0x48,auStack_160);
  if (plStack_158 != (long *)0x0) {
    plVar3 = plStack_158 + 1;
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_158 + 0x10))(plStack_158);
      func_0x000107c60d68(plStack_158);
    }
  }
  FUN_100478948(auStack_1a0);
  if (lStack_170 < 0) {
    func_0x000107c60e14(lStack_180);
  }
  FUN_100478948(auStack_150);
  return;
}



/* Entry: 1008da540; end: 1008da6db;  */

/* WARNING: Removing unreachable block (ram,0x0001008da668) */

void FUN_1008da540(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long *param_4,
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
    FUN_100033dac(&uStack_60,*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(lVar4 + 0x18));
    lVar4 = *param_4;
  }
  else {
    uStack_58 = *(undefined8 *)(lVar4 + 0x18);
    uStack_60 = *(undefined8 *)(lVar4 + 0x10);
    uStack_50 = *(undefined8 *)(lVar4 + 0x20);
  }
  FUN_100478b40(auStack_80,lVar4 + 0x28);
  lVar4 = *param_4;
  uStack_a8 = param_2[1];
  uStack_b0 = *param_2;
  lStack_a0 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  FUN_1004780e0(auStack_d0,param_3);
  FUN_1004786dc(auStack_90,&uStack_b0,auStack_d0,*param_4 + 0x58,param_5);
  FUN_1004786dc(param_1,&uStack_60,auStack_80,lVar4 + 0x48,auStack_90);
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
      func_0x000107c60d68(plStack_88);
    }
  }
  FUN_100478948(auStack_d0);
  if (lStack_a0 < 0) {
    func_0x000107c60e14(uStack_b0);
  }
  FUN_100478948(auStack_80);
  return;
}



/* Entry: 1008da6dc; end: 1008da73f;  */

undefined8 FUN_1008da6dc(undefined8 param_1,long *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  lVar2 = *param_2;
  FUN_10047d3b0(auStack_38,lVar2 + 0x38,"grpc.lb_policy_name",0x13);
  puVar1 = auStack_38;
  FUN_1008da740(puVar1,&UNK_10dd50589);
  if ((int)puVar1 != 0) {
    FUN_100560688(lVar2,&PTR_DAT_1107c2388);
  }
  return 1;
}



/* Entry: 1008da740; end: 1008da7a3;  */

bool FUN_1008da740(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 2) != '\0') {
    lVar3 = param_1[1];
    lVar1 = param_2;
    func_0x000107c613d0();
    if (lVar3 == lVar1) {
      uVar2 = *param_1;
      func_0x000107c610b0(uVar2,param_2,lVar3);
      return (int)uVar2 == 0;
    }
  }
  return false;
}



/* Entry: 1008da7a4; end: 1008da7ff;  */

undefined8 FUN_1008da7a4(long param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x38;
  FUN_10047d6c8(lVar2,"grpc.minimal_stack",0x12);
  uVar1 = (uint)lVar2 & 0xffff;
  if (uVar1 < 0x101) {
    uVar1 = 0;
  }
  if ((uVar1 & 0xff) == 0) {
    FUN_100560688(param_1,&PTR_FUN_1107c3e90);
  }
  return 1;
}



/* Entry: 1008da800; end: 1008da97f;  */

void FUN_1008da800(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

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
  long lVar10;
  undefined8 *puVar11;
  int *piVar12;
  long lVar13;
  undefined1 uStack_c1;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  ulong uStack_a8;
  undefined1 auStack_a0 [8];
  long *plStack_98;
  ulong auStack_90 [2];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(int *)(param_4 + 0x14) != 0) {
    func_0x000107c2c240();
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x1008da938);
    (*pcVar8)();
  }
  lVar10 = param_3;
  FUN_100560184(auStack_a0,*(undefined8 *)(param_4 + 8));
  FUN_1008daa08(auStack_90,auStack_a0);
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
      func_0x000107c60d68(plStack_98);
    }
  }
  uVar7 = uStack_68;
  uVar6 = uStack_70;
  uVar5 = uStack_78;
  uVar4 = uStack_80;
  puVar11 = *(undefined8 **)(param_3 + 8);
  if (auStack_90[0] == 0) {
    *puVar11 = &PTR_DAT_1107c3988;
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
    *puVar11 = &PTR_DAT_1107c0cf0;
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
    func_0x000104addba0(param_1,&uStack_a8);
    if ((uStack_a8 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  puVar9 = auStack_90;
  FUN_1008dab08(puVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
  if ((int)lVar10 != 0) {
    func_0x000104bd46a0(puVar9);
    FUN_1004bdf74(&uStack_a8);
    FUN_1008dab08(auStack_90);
  }
  func_0x000107c60bd8(puVar9);
  pcStack_b8 = FUN_1008da980;
  puStack_c0 = &stack0xfffffffffffffff0;
  FUN_1008da800(&uStack_c1,puVar9,lVar10);
  return;
}



/* Entry: 1008da980; end: 1008da9db;  */

void FUN_1008da980(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_1008da800(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 1008da9dc; end: 1008daa07;  */

void FUN_1008da9dc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
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
                    /* WARNING: Could not recover jumptable at 0x0001008daa04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1008daa08; end: 1008dab07;  */

ulong * FUN_1008daa08(undefined8 *param_1,undefined8 param_2)

{
  ulong *puVar1;
  ulong *puStack_98;
  int iStack_90;
  char cStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10047d3b0(&puStack_98,param_2,"grpc.default_authority",0x16);
  if (cStack_88 == '\0') {
    func_0x000107c2b9c4(&puStack_48,
                        "GRPC_ARG_DEFAULT_AUTHORITY string channel arg. not found. Note that direct channels must explicitly specify a value for this argument."
                        ,0x86);
    iStack_90 = (int)&puStack_48;
    func_0x000104a945cc(param_1);
    puVar1 = puStack_48;
    if (((ulong)puStack_48 & 1) != 0) {
      FUN_10084dad0();
      puVar1 = puStack_48;
    }
  }
  else {
    FUN_1004b6808(&puStack_48);
    uStack_78 = uStack_38;
    uStack_80 = uStack_40;
    uStack_70 = uStack_30;
    param_1[4] = uStack_38;
    param_1[3] = uStack_40;
    param_1[5] = uStack_30;
    param_1[1] = &PTR_DAT_1107c3988;
    param_1[2] = puStack_48;
    *param_1 = 0;
    puVar1 = puStack_98;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar1;
  }
  func_0x000107c60e78();
  if (iStack_90 != 0) {
    func_0x000104bd46a0();
    FUN_1004bdf74(&puStack_48);
  }
  func_0x000107c60bd8();
  if (*puVar1 == 0) {
    FUN_1004b6d90(puVar1 + 2);
  }
  else if ((*puVar1 & 1) != 0) {
    FUN_10084dad0();
  }
  return puVar1;
}



/* Entry: 1008dab08; end: 1008dab47;  */

ulong * FUN_1008dab08(ulong *param_1)

{
  if (*param_1 == 0) {
    FUN_1004b6d90(param_1 + 2);
  }
  else if ((*param_1 & 1) != 0) {
    FUN_10084dad0();
  }
  return param_1;
}



/* Entry: 1008dab48; end: 1008dac83;  */

void FUN_1008dab48(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int *piVar5;
  long lVar6;
  undefined1 uStack_81;
  undefined1 *puStack_80;
  code *pcStack_78;
  ulong uStack_68;
  undefined1 auStack_60 [8];
  long *plStack_58;
  ulong auStack_50 [2];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(int *)(param_4 + 0x14) == 0) {
    FUN_100560184(auStack_60,*(undefined8 *)(param_4 + 8));
    FUN_1008dacac(auStack_50,auStack_60);
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 1;
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
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        func_0x000107c60d68(plStack_58);
      }
    }
    puVar4 = *(undefined8 **)(param_3 + 8);
    if (auStack_50[0] == 0) {
      *puVar4 = &PTR_DAT_1107c6698;
      puVar4[2] = 0;
      puVar4[1] = 0;
      puVar4[2] = uStack_38;
      puVar4[1] = uStack_40;
      uStack_38 = 0;
      uStack_40 = 0;
      *param_1 = 0;
    }
    else {
      *puVar4 = &PTR_DAT_1107c0cf0;
      uStack_68 = auStack_50[0];
      if ((auStack_50[0] & 1) != 0) {
        piVar5 = (int *)(auStack_50[0] - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar3) {
            *piVar5 = *piVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      func_0x000104addba0(param_1,&uStack_68);
      if ((uStack_68 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    FUN_1008dae0c(auStack_50);
    return;
  }
  func_0x000107c2c3d8();
  func_0x000104bd46a0();
  FUN_1004bdf74(&uStack_68);
  FUN_1008dae0c(auStack_50);
  func_0x000107c60bd8(param_2);
  pcStack_78 = FUN_1008dac84;
  puStack_80 = &stack0xfffffffffffffff0;
  FUN_1008dab48(&uStack_81,param_2,param_3);
  return;
}



/* Entry: 1008dac84; end: 1008dacab;  */

void FUN_1008dac84(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_1008dab48(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 1008dacac; end: 1008dae0b;  */

void FUN_1008dacac(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined **ppuStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  
  plVar4 = param_2;
  FUN_100479434(param_2,"grpc.internal.security_connector",0x20);
  if (plVar4 == (long *)0x0) {
    func_0x000107c2b9c4(&ppuStack_48,"Security connector missing from client auth filter args",0x37)
    ;
    func_0x000104ad19e8(param_1,&ppuStack_48);
    if (((ulong)ppuStack_48 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  else {
    FUN_100479434(param_2,"grpc.auth_context",0x11);
    if (param_2 == (long *)0x0) {
      func_0x000107c2b9c4(&ppuStack_48,"Auth context missing from client auth filter args",0x31);
      func_0x000104ad19e8(param_1,&ppuStack_48);
      if (((ulong)ppuStack_48 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    else {
      plVar1 = plVar4 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(param_2,0x10);
        if (bVar3) {
          *param_2 = *param_2 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      param_1[2] = plVar4;
      param_1[3] = param_2;
      plStack_40 = (long *)0x0;
      uStack_38 = 0;
      uStack_50 = 0;
      ppuStack_48 = &PTR_DAT_1107c6698;
      *param_1 = 0;
      param_1[1] = &PTR_DAT_1107c6698;
      FUN_1007402ac(&uStack_38);
      if (plStack_40 != (long *)0x0) {
        plVar4 = plStack_40 + 1;
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
          (**(code **)(*plStack_40 + 8))();
        }
      }
      FUN_1007402ac(&uStack_50);
    }
  }
  return;
}



/* Entry: 1008dae0c; end: 1008dae7b;  */

ulong * FUN_1008dae0c(ulong *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  if (*param_1 == 0) {
    FUN_1007402ac(param_1 + 3);
    plVar4 = (long *)param_1[2];
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
  }
  else if ((*param_1 & 1) != 0) {
    FUN_10084dad0();
  }
  return param_1;
}



/* Entry: 1008dae7c; end: 1008dae9b;  */

void FUN_1008dae7c(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001008dae88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_2 + 8))();
  return;
}



/* Entry: 1008dae9c; end: 1008daf17;  */

void FUN_1008dae9c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
  FUN_100460448(param_1 + 0x40);
  uVar6 = *param_2;
  plVar4 = *(long **)(param_1 + 0x80);
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
  *(undefined8 *)(param_1 + 0x80) = uVar6;
  *param_2 = 0;
  func_0x000100466b80(param_1 + 0x40);
  return;
}



/* Entry: 1008daf18; end: 1008daf8f;  */

undefined8 * FUN_1008daf18(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xd8;
  func_0x000107c60e20();
  puVar1[0x17] = 0;
  puVar1[0x16] = 0;
  puVar1[0x19] = 0;
  puVar1[0x18] = 0;
  puVar1[0x1a] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[8] = 0;
  *(undefined1 *)(puVar1 + 0xb) = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  *(undefined1 *)(puVar1 + 0xe) = 0;
  puVar1[0x10] = 0;
  puVar1[0xf] = 0;
  puVar1[0x12] = 0;
  puVar1[0x11] = 0;
  puVar1[0x14] = 0;
  puVar1[0x13] = 0;
  *(undefined1 *)(puVar1 + 0x15) = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  *(undefined8 *)((long)puVar1 + 0x34) = 0;
  *(undefined8 *)((long)puVar1 + 0x2c) = 0;
  puVar1[1] = FUN_1008de1d0;
  puVar1[2] = puVar1;
  puVar1[4] = param_1;
  puVar1[5] = puVar1;
  return puVar1 + 5;
}



/* Entry: 1008daf90; end: 1008daff7;  */

void FUN_1008daf90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = 0;
  FUN_1008daf18();
  FUN_1008daff8(lVar1 + 8,param_3);
  *(undefined4 *)(lVar1 + 0x10) = 2;
  *(undefined8 *)(lVar1 + 0x68) = param_2;
  plVar2 = *(long **)(param_1 + 0x10);
  func_0x0001004868b0(plVar2,0);
                    /* WARNING: Could not recover jumptable at 0x0001008daff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x10))();
  return;
}



/* Entry: 1008daff8; end: 1008db03b;  */

long * FUN_1008daff8(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *param_2;
  *param_2 = 0;
  puVar1 = (undefined8 *)*param_1;
  *param_1 = lVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  return param_1;
}



/* Entry: 1008db03c; end: 1008db043;  */

undefined8 FUN_1008db03c(void)

{
  return 0;
}



/* Entry: 1008db044; end: 1008db08b;  */

void FUN_1008db044(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x10))();
  if (((ulong)plVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001008db094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x10))((long *)(param_1 + 0x10),param_2);
  return;
}



/* Entry: 1008db08c; end: 1008db097;  */

void FUN_1008db08c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001008db094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x10))();
  return;
}



/* Entry: 1008db098; end: 1008db127;  */

void FUN_1008db098(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x10))();
  if (((ulong)plVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001008db094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x10))((long *)(param_1 + 0x10),param_2);
  return;
}



/* Entry: 1008db128; end: 1008db13f;  */

void FUN_1008db128(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001008db13c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)**(undefined8 **)(param_1 + 8) + 0x38))();
  return;
}



/* Entry: 1008db140; end: 1008db1c3;  */

void FUN_1008db140(long param_1,long param_2)

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
  *(code **)(param_2 + 0x98) = FUN_1008dddc8;
  *(long *)(param_2 + 0xa0) = param_2;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  uStack_28 = 0;
  FUN_10074775c(uVar4,param_2 + 0x90,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    FUN_10084dad0();
  }
  return;
}



/* Entry: 1008db1c4; end: 1008db1ef;  */

void FUN_1008db1c4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  if (*(long *)(param_2 + 8) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 8) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar4 = *(undefined8 *)(param_2 + 8);
  }
  *param_1 = uVar4;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}



/* Entry: 1008db1f0; end: 1008db253;  */

void FUN_1008db1f0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  FUN_100460448(param_2 + 400);
  uVar4 = 0;
  if (*(long *)(param_2 + 0x210) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x210) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar4 = *(undefined8 *)(param_2 + 0x210);
  }
  *param_1 = uVar4;
  func_0x000100466b80(param_2 + 400);
  return;
}



/* Entry: 1008db254; end: 1008db343;  */

bool FUN_1008db254(long *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long *plVar5;
  long lStack_38;
  
  plVar5 = (long *)*param_2;
  if (*plVar5 == 0) {
    func_0x000107c2c1b8();
  }
  else {
    unaff_x19 = param_1[1];
    FUN_1008db1f0(&lStack_38,*(undefined8 *)(*plVar5 + 0x18));
    param_1 = *(long **)(unaff_x19 + 0xd8);
    unaff_x20 = lStack_38;
    if (param_1 == (long *)0x0) goto LAB_1008db2a8;
    plVar3 = param_1 + 1;
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 != 0) goto LAB_1008db2a8;
  }
  (**(code **)(*param_1 + 8))();
LAB_1008db2a8:
  *(long *)(unaff_x19 + 0xd8) = unaff_x20;
  if (unaff_x20 == 0) {
    FUN_1004e3790(unaff_x19);
  }
  else {
    plVar3 = (long *)plVar5[1];
    plVar5[1] = 0;
    plVar5 = *(long **)(unaff_x19 + 0xe8);
    *(long **)(unaff_x19 + 0xe8) = plVar3;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))(plVar5);
      plVar3 = *(long **)(unaff_x19 + 0xe8);
    }
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (*(char *)(unaff_x19 + 200) != '\0') {
      FUN_1008db344(*(undefined8 *)(unaff_x19 + 0x10),unaff_x19 + 0xb8,
                    *(undefined8 *)(unaff_x19 + 0x60));
      *(undefined1 *)(unaff_x19 + 200) = 0;
      *(undefined8 *)(unaff_x19 + 0xd0) = 0;
    }
  }
  return unaff_x20 != 0;
}



/* Entry: 1008db344; end: 1008db40f;  */

void FUN_1008db344(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  FUN_1004d9fe0(param_3,*(undefined8 *)(param_1 + 0x60));
  lVar1 = *(long *)(param_1 + 0x128);
  if (lVar1 != 0) {
    if (lVar1 == param_2) {
      puVar3 = (undefined8 *)(param_1 + 0x128);
    }
    else {
      do {
        lVar2 = lVar1;
        lVar1 = *(long *)(lVar2 + 8);
        if (lVar1 == 0) {
          return;
        }
      } while (lVar1 != param_2);
      puVar3 = (undefined8 *)(lVar2 + 8);
    }
    *puVar3 = *(undefined8 *)(param_2 + 8);
  }
  return;
}



/* Entry: 1008db410; end: 1008db497;  */

void FUN_1008db410(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uStack_30;
  undefined1 uStack_21;
  
  *(code **)(param_1 + 0xa0) = FUN_1008db498;
  *(long *)(param_1 + 0xa8) = param_1;
  *(undefined8 *)(param_1 + 0xb0) = 0;
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
  FUN_1004bd7e8(&uStack_21,param_1 + 0x98,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    FUN_10084dad0();
  }
  return;
}



/* Entry: 1008db498; end: 1008db53b;  */

long * FUN_1008db498(long *param_1,ulong *param_2,ulong *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong *puVar5;
  int *piVar6;
  long lVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  ulong uStack_180;
  ulong auStack_178 [2];
  char cStack_161;
  long *plStack_160;
  undefined8 uStack_158;
  long lStack_150;
  long *plStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  ulong uStack_f0;
  undefined1 auStack_e8 [8];
  ulong uStack_e0;
  long *plStack_d8;
  long lStack_d0;
  long *plStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  long lStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  plVar8 = (long *)*param_2;
  if (plVar8 != (long *)0x0) {
    if (((ulong)plVar8 & 1) != 0) {
      piVar6 = (int *)((long)plVar8 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = *piVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plStack_28 = plVar8;
    func_0x000104a76d10(param_1,&plStack_28,&UNK_104a773b4);
    if (((ulong)plVar8 & 1) != 0) {
      FUN_10084dad0(plVar8);
      param_1 = plVar8;
    }
    return param_1;
  }
  (**(code **)(*(long *)param_1[0xe] + 0x18))();
  puVar5 = &uStack_f0;
  plStack_28 = *(long **)PTR____stack_chk_guard_11034bdc0;
  plVar8 = (long *)param_1[3];
  plStack_d8 = (long *)param_1[0x1b];
  param_1[0x1b] = 0;
  lStack_d0 = param_1[0xc];
  if ((long *)0x1 < plVar8) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lStack_a0 = param_1[7];
  lStack_98 = param_1[8];
  auVar9 = NEON_ext(*(undefined1 (*) [16])(param_1 + 10),*(undefined1 (*) [16])(param_1 + 10),8,1);
  uStack_88 = auVar9._8_8_;
  uStack_90 = auVar9._0_8_;
  uStack_e0 = 0;
  uStack_50 = 0;
  plStack_c8 = (long *)param_1[3];
  lStack_c0 = param_1[4];
  lStack_b0 = param_1[6];
  lStack_b8 = param_1[5];
  uStack_68 = 0;
  plStack_70 = (long *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  plStack_80 = (long *)0x0;
  uStack_a8 = 0;
  lStack_78 = lStack_d0;
  lStack_48 = lStack_a0;
  lStack_40 = lStack_98;
  uStack_38 = uStack_90;
  uStack_30 = uStack_88;
  FUN_1008db56c(auStack_e8,&plStack_d8,&uStack_e0);
  FUN_1008dbdb8(param_1 + 0x1e,auStack_e8);
  FUN_1008dbe00(auStack_e8);
  if ((long *)0x1 < plStack_c8) {
    do {
      lVar7 = *plStack_c8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_c8,0x10);
      if (bVar3) {
        *plStack_c8 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_c8[1])();
    }
  }
  if (plStack_d8 != (long *)0x0) {
    plVar8 = plStack_d8 + 1;
    do {
      lVar7 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plStack_d8 + 8))();
    }
  }
  plVar8 = (long *)param_1[0xd];
  if (plVar8 != (long *)0x0) {
    FUN_1008dbe30(param_1[0x1e]);
    param_1[0xd] = 0;
  }
  if (uStack_e0 == 0) {
    FUN_1008dbe58(param_1);
    puVar5 = (ulong *)plVar8;
  }
  else {
    uStack_f0 = uStack_e0;
    if ((uStack_e0 & 1) != 0) {
      piVar6 = (int *)(uStack_e0 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = *piVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    param_3 = (ulong *)&UNK_104a773b4;
    func_0x000104a76d10(param_1);
    FUN_1004bdf74(&uStack_f0);
  }
  if ((uStack_e0 & 1) != 0) {
    FUN_10084dad0();
  }
  if ((long *)0x1 < plStack_70) {
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
  plVar8 = plStack_80;
  if (plStack_80 != (long *)0x0) {
    plVar1 = plStack_80 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plStack_80 + 8))();
    }
  }
  if (*(long **)PTR____stack_chk_guard_11034bdc0 == plStack_28) {
    return plVar8;
  }
  func_0x000107c60e78();
  FUN_1004bdf74(&uStack_f0);
  FUN_1004bdf74(&uStack_e0);
  func_0x000104a7735c(&plStack_80);
  func_0x000107c60bd8();
  plVar8[1] = 0;
  *plVar8 = 0;
  *plVar8 = *puVar5;
  *puVar5 = 0;
  plVar8[7] = 0;
  plVar8[6] = 0;
  plVar8[8] = puVar5[7];
  plStack_148 = (long *)(puVar5 + 2);
  lStack_150 = puVar5[9];
  lStack_128 = puVar5[10];
  uStack_158 = 0;
  lStack_140 = puVar5[6];
  lStack_138 = puVar5[7];
  lStack_130 = puVar5[8];
  plStack_160 = plVar8 + 10;
  FUN_1004b8120(auStack_178,*(undefined8 *)(*plVar8 + 0x10),1,&UNK_104a8db70,plVar8,&plStack_160);
  uStack_180 = auStack_178[0];
  uVar4 = *param_3;
  if (auStack_178[0] != uVar4) {
    *param_3 = auStack_178[0];
    auStack_178[0] = 0x36;
    if ((uVar4 & 1) == 0) goto LAB_1008db9f0;
    FUN_10084dad0();
    uVar4 = auStack_178[0];
  }
  if ((uVar4 & 1) != 0) {
    FUN_10084dad0();
  }
  uStack_180 = *param_3;
LAB_1008db9f0:
  if (uStack_180 == 0) {
    FUN_1004b8648(plVar8 + 10,puVar5[1]);
    if (*(long *)(*plVar8 + 0x20) != 0) {
      FUN_1004b8698(*(long *)(*plVar8 + 0x20) + 0xa0);
    }
  }
  else {
    if ((uStack_180 & 1) != 0) {
      piVar6 = (int *)(uStack_180 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = *piVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x000104aba950(auStack_178,&uStack_180);
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel.cc"
                  ,0xa8,2,"error: %s");
    if (cStack_161 < '\0') {
      func_0x000107c60e14(auStack_178[0]);
    }
    FUN_1004bdf74(&uStack_180);
  }
  return plVar8;
}



/* Entry: 1008db53c; end: 1008db56b;  */

void FUN_1008db53c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  *(undefined1 *)(lVar1 + 0x30) = 1;
  lVar1 = *(long *)(lVar1 + 0x10);
  if ((*(byte *)(lVar1 + 0x238) >> 3 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001008db568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(*(long *)(lVar1 + 0x1a8) + 0x40) + 0x28) + 0x18))();
  return;
}



/* Entry: 1008db56c; end: 1008db6c7;  */

long * FUN_1008db56c(long *param_1,long *param_2,ulong *param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  long *plVar5;
  ulong uVar6;
  int iVar7;
  long *plVar8;
  ulong *puVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  long *plVar13;
  undefined1 auVar14 [16];
  ulong uStack_210;
  ulong auStack_208 [2];
  char cStack_1f1;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  long *plStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  ulong uStack_180;
  undefined1 auStack_178 [8];
  ulong uStack_170;
  long *plStack_168;
  long lStack_160;
  long *plStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  ulong *puStack_b0;
  long *plStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  long *plStack_90;
  long lStack_88;
  long *plStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  iVar7 = (int)&plStack_90;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar1 = *(int *)(*(long *)(*param_2 + 0x10) + 0x38);
  puVar4 = (ulong *)param_2[8];
  do {
    uVar10 = *puVar4;
    uVar6 = uVar10 + ((ulong)(iVar1 + 0x5f) & 0xfffffff0);
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
    if (bVar3) {
      *puVar4 = uVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (puVar4[2] < uVar6) {
    FUN_1004bbee0();
  }
  else {
    puVar4 = (ulong *)((long)puVar4 + uVar10 + 0x30);
  }
  plStack_90 = (long *)*param_2;
  lStack_88 = param_2[1];
  lStack_78 = param_2[3];
  plStack_80 = (long *)param_2[2];
  lStack_68 = param_2[5];
  lStack_70 = param_2[4];
  lStack_58 = param_2[7];
  lStack_60 = param_2[6];
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  *param_2 = 0;
  lStack_50 = param_2[8];
  lStack_48 = param_2[9];
  lStack_40 = param_2[10];
  puVar9 = param_3;
  FUN_1008db930();
  *param_1 = (long)puVar4;
  if ((long *)0x1 < plStack_80) {
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
  plVar8 = plStack_90;
  if (plStack_90 != (long *)0x0) {
    plVar5 = plStack_90 + 1;
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
      (**(code **)(*plStack_90 + 8))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar8;
  }
  func_0x000107c60e78();
  if (iVar7 != 0) {
    func_0x000104bd46a0();
    func_0x000104a7735c(&plStack_90);
  }
  plVar5 = plVar8;
  func_0x000107c60bd8();
  puVar4 = &uStack_180;
  pcStack_98 = FUN_1008db6c8;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = (long *)plVar5[3];
  plStack_168 = (long *)plVar5[0x1b];
  plVar5[0x1b] = 0;
  lStack_160 = plVar5[0xc];
  if ((long *)0x1 < plVar13) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = *plVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lStack_130 = plVar5[7];
  lStack_128 = plVar5[8];
  auVar14 = NEON_ext(*(undefined1 (*) [16])(plVar5 + 10),*(undefined1 (*) [16])(plVar5 + 10),8,1);
  uStack_118 = auVar14._8_8_;
  uStack_120 = auVar14._0_8_;
  uStack_170 = 0;
  uStack_e0 = 0;
  plStack_158 = (long *)plVar5[3];
  lStack_150 = plVar5[4];
  lStack_140 = plVar5[6];
  lStack_148 = plVar5[5];
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  plStack_110 = (long *)0x0;
  uStack_138 = 0;
  lStack_108 = lStack_160;
  lStack_d8 = lStack_130;
  lStack_d0 = lStack_128;
  uStack_c8 = uStack_120;
  uStack_c0 = uStack_118;
  puStack_b0 = param_3;
  plStack_a8 = plVar8;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_1008db56c(auStack_178,&plStack_168,&uStack_170);
  FUN_1008dbdb8(plVar5 + 0x1e,auStack_178);
  FUN_1008dbe00(auStack_178);
  if ((long *)0x1 < plStack_158) {
    do {
      lVar11 = *plStack_158;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_158,0x10);
      if (bVar3) {
        *plStack_158 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 + -1 == 0) {
      (*(code *)plStack_158[1])();
    }
  }
  if (plStack_168 != (long *)0x0) {
    plVar8 = plStack_168 + 1;
    do {
      lVar11 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 + -1 == 0) {
      (**(code **)(*plStack_168 + 8))();
    }
  }
  plVar8 = (long *)plVar5[0xd];
  if (plVar8 != (long *)0x0) {
    FUN_1008dbe30(plVar5[0x1e]);
    plVar5[0xd] = 0;
  }
  if (uStack_170 == 0) {
    FUN_1008dbe58(plVar5);
    puVar4 = (ulong *)plVar8;
  }
  else {
    uStack_180 = uStack_170;
    if ((uStack_170 & 1) != 0) {
      piVar12 = (int *)(uStack_170 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar3) {
          *piVar12 = *piVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar9 = (ulong *)&UNK_104a773b4;
    func_0x000104a76d10(plVar5);
    FUN_1004bdf74(&uStack_180);
  }
  if ((uStack_170 & 1) != 0) {
    FUN_10084dad0();
  }
  if ((long *)0x1 < plStack_100) {
    do {
      lVar11 = *plStack_100;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_100,0x10);
      if (bVar3) {
        *plStack_100 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 + -1 == 0) {
      (*(code *)plStack_100[1])();
    }
  }
  plVar8 = plStack_110;
  if (plStack_110 != (long *)0x0) {
    plVar5 = plStack_110 + 1;
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
      (**(code **)(*plStack_110 + 8))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return plVar8;
  }
  func_0x000107c60e78();
  FUN_1004bdf74(&uStack_180);
  FUN_1004bdf74(&uStack_170);
  func_0x000104a7735c(&plStack_110);
  func_0x000107c60bd8();
  plVar8[1] = 0;
  *plVar8 = 0;
  *plVar8 = *puVar4;
  *puVar4 = 0;
  plVar8[7] = 0;
  plVar8[6] = 0;
  plVar8[8] = puVar4[7];
  plStack_1d8 = (long *)(puVar4 + 2);
  lStack_1e0 = puVar4[9];
  lStack_1b8 = puVar4[10];
  uStack_1e8 = 0;
  lStack_1d0 = puVar4[6];
  lStack_1c8 = puVar4[7];
  lStack_1c0 = puVar4[8];
  plStack_1f0 = plVar8 + 10;
  FUN_1004b8120(auStack_208,*(undefined8 *)(*plVar8 + 0x10),1,&UNK_104a8db70,plVar8,&plStack_1f0);
  uStack_210 = auStack_208[0];
  uVar6 = *puVar9;
  if (auStack_208[0] != uVar6) {
    *puVar9 = auStack_208[0];
    auStack_208[0] = 0x36;
    if ((uVar6 & 1) == 0) goto LAB_1008db9f0;
    FUN_10084dad0();
    uVar6 = auStack_208[0];
  }
  if ((uVar6 & 1) != 0) {
    FUN_10084dad0();
  }
  uStack_210 = *puVar9;
LAB_1008db9f0:
  if (uStack_210 == 0) {
    FUN_1004b8648(plVar8 + 10,puVar4[1]);
    if (*(long *)(*plVar8 + 0x20) != 0) {
      FUN_1004b8698(*(long *)(*plVar8 + 0x20) + 0xa0);
    }
  }
  else {
    if ((uStack_210 & 1) != 0) {
      piVar12 = (int *)(uStack_210 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar3) {
          *piVar12 = *piVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x000104aba950(auStack_208,&uStack_210);
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel.cc"
                  ,0xa8,2,"error: %s");
    if (cStack_1f1 < '\0') {
      func_0x000107c60e14(auStack_208[0]);
    }
    FUN_1004bdf74(&uStack_210);
  }
  return plVar8;
}



/* Entry: 1008db6c8; end: 1008db92f;  */

long * FUN_1008db6c8(long param_1,undefined8 param_2,ulong *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  ulong uStack_180;
  ulong auStack_178 [2];
  char cStack_161;
  long *plStack_160;
  undefined8 uStack_158;
  long lStack_150;
  long *plStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  ulong uStack_f0;
  undefined1 auStack_e8 [8];
  ulong uStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar5 = &uStack_f0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = *(long **)(param_1 + 0x18);
  plStack_d8 = *(long **)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  uStack_d0 = *(undefined8 *)(param_1 + 0x60);
  if ((long *)0x1 < plVar8) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_a0 = *(undefined8 *)(param_1 + 0x38);
  uStack_98 = *(undefined8 *)(param_1 + 0x40);
  auVar9 = NEON_ext(*(undefined1 (*) [16])(param_1 + 0x50),*(undefined1 (*) [16])(param_1 + 0x50),8,
                    1);
  uStack_88 = auVar9._8_8_;
  uStack_90 = auVar9._0_8_;
  uStack_e0 = 0;
  uStack_50 = 0;
  plStack_c8 = *(long **)(param_1 + 0x18);
  uStack_c0 = *(undefined8 *)(param_1 + 0x20);
  uStack_b0 = *(undefined8 *)(param_1 + 0x30);
  uStack_b8 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = 0;
  plStack_70 = (long *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  plStack_80 = (long *)0x0;
  uStack_a8 = 0;
  uStack_78 = uStack_d0;
  uStack_48 = uStack_a0;
  uStack_40 = uStack_98;
  uStack_38 = uStack_90;
  uStack_30 = uStack_88;
  FUN_1008db56c(auStack_e8,&plStack_d8,&uStack_e0);
  FUN_1008dbdb8((undefined8 *)(param_1 + 0xf0),auStack_e8);
  FUN_1008dbe00(auStack_e8);
  if ((long *)0x1 < plStack_c8) {
    do {
      lVar6 = *plStack_c8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_c8,0x10);
      if (bVar3) {
        *plStack_c8 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)plStack_c8[1])();
    }
  }
  if (plStack_d8 != (long *)0x0) {
    plVar8 = plStack_d8 + 1;
    do {
      lVar6 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plStack_d8 + 8))();
    }
  }
  plVar8 = *(long **)(param_1 + 0x68);
  if (plVar8 != (long *)0x0) {
    FUN_1008dbe30(*(undefined8 *)(param_1 + 0xf0));
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  if (uStack_e0 == 0) {
    FUN_1008dbe58(param_1);
    puVar5 = (ulong *)plVar8;
  }
  else {
    uStack_f0 = uStack_e0;
    if ((uStack_e0 & 1) != 0) {
      piVar7 = (int *)(uStack_e0 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = *piVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    param_3 = (ulong *)&UNK_104a773b4;
    func_0x000104a76d10(param_1);
    FUN_1004bdf74(&uStack_f0);
  }
  if ((uStack_e0 & 1) != 0) {
    FUN_10084dad0();
  }
  if ((long *)0x1 < plStack_70) {
    do {
      lVar6 = *plStack_70;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
      if (bVar3) {
        *plStack_70 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)plStack_70[1])();
    }
  }
  plVar8 = plStack_80;
  if (plStack_80 != (long *)0x0) {
    plVar1 = plStack_80 + 1;
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
      (**(code **)(*plStack_80 + 8))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar8;
  }
  func_0x000107c60e78();
  FUN_1004bdf74(&uStack_f0);
  FUN_1004bdf74(&uStack_e0);
  func_0x000104a7735c(&plStack_80);
  func_0x000107c60bd8();
  plVar8[1] = 0;
  *plVar8 = 0;
  *plVar8 = *puVar5;
  *puVar5 = 0;
  plVar8[7] = 0;
  plVar8[6] = 0;
  plVar8[8] = puVar5[7];
  plStack_148 = (long *)(puVar5 + 2);
  lStack_150 = puVar5[9];
  lStack_128 = puVar5[10];
  uStack_158 = 0;
  lStack_140 = puVar5[6];
  lStack_138 = puVar5[7];
  lStack_130 = puVar5[8];
  plStack_160 = plVar8 + 10;
  FUN_1004b8120(auStack_178,*(undefined8 *)(*plVar8 + 0x10),1,&UNK_104a8db70,plVar8,&plStack_160);
  uStack_180 = auStack_178[0];
  uVar4 = *param_3;
  if (auStack_178[0] != uVar4) {
    *param_3 = auStack_178[0];
    auStack_178[0] = 0x36;
    if ((uVar4 & 1) == 0) goto LAB_1008db9f0;
    FUN_10084dad0();
    uVar4 = auStack_178[0];
  }
  if ((uVar4 & 1) != 0) {
    FUN_10084dad0();
  }
  uStack_180 = *param_3;
LAB_1008db9f0:
  if (uStack_180 == 0) {
    FUN_1004b8648(plVar8 + 10,puVar5[1]);
    if (*(long *)(*plVar8 + 0x20) != 0) {
      FUN_1004b8698(*(long *)(*plVar8 + 0x20) + 0xa0);
    }
  }
  else {
    if ((uStack_180 & 1) != 0) {
      piVar7 = (int *)(uStack_180 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = *piVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x000104aba950(auStack_178,&uStack_180);
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel.cc"
                  ,0xa8,2,"error: %s");
    if (cStack_161 < '\0') {
      func_0x000107c60e14(auStack_178[0]);
    }
    FUN_1004bdf74(&uStack_180);
  }
  return plVar8;
}



/* Entry: 1008db930; end: 1008dbb1f;  */

long * FUN_1008db930(long *param_1,long *param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  int *piVar4;
  ulong uStack_90;
  ulong auStack_88 [2];
  char cStack_71;
  long *plStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  param_1[1] = 0;
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[8] = param_2[7];
  plStack_58 = param_2 + 2;
  lStack_60 = param_2[9];
  lStack_38 = param_2[10];
  uStack_68 = 0;
  lStack_50 = param_2[6];
  lStack_40 = param_2[8];
  lStack_48 = param_2[7];
  plStack_70 = param_1 + 10;
  FUN_1004b8120(auStack_88,*(undefined8 *)(*param_1 + 0x10),1,&UNK_104a8db70,param_1,&plStack_70);
  uStack_90 = auStack_88[0];
  uVar3 = *param_3;
  if (auStack_88[0] != uVar3) {
    *param_3 = auStack_88[0];
    auStack_88[0] = 0x36;
    if ((uVar3 & 1) == 0) goto LAB_1008db9f0;
    FUN_10084dad0();
    uVar3 = auStack_88[0];
  }
  if ((uVar3 & 1) != 0) {
    FUN_10084dad0();
  }
  uStack_90 = *param_3;
LAB_1008db9f0:
  if (uStack_90 == 0) {
    FUN_1004b8648(param_1 + 10,param_2[1]);
    if (*(long *)(*param_1 + 0x20) != 0) {
      FUN_1004b8698(*(long *)(*param_1 + 0x20) + 0xa0);
    }
  }
  else {
    if ((uStack_90 & 1) != 0) {
      piVar4 = (int *)(uStack_90 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    func_0x000104aba950(auStack_88,&uStack_90);
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel.cc"
                  ,0xa8,2,"error: %s");
    if (cStack_71 < '\0') {
      func_0x000107c60e14(auStack_88[0]);
    }
    FUN_1004bdf74(&uStack_90);
  }
  return param_1;
}



/* Entry: 1008dbb20; end: 1008dbba7;  */

void FUN_1008dbb20(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  FUN_1006118a0(puVar1,param_2,param_3,0);
  *puVar1 = &PTR_DAT_1107c39e0;
  puVar1[1] = &PTR_DAT_1107c3a38;
  *param_1 = 0;
  return;
}



/* Entry: 1008dbba8; end: 1008dbbbb;  */

void FUN_1008dbba8(undefined8 *param_1,undefined8 param_2)

{
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



/* Entry: 1008dbbbc; end: 1008dbd5f;  */

long FUN_1008dbbbc(long param_1,long param_2,long *param_3,long param_4,undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  
  *(long *)(param_1 + 8) = param_2;
  *(long **)(param_1 + 0x10) = param_3;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_3,0x10);
    if (bVar3) {
      *param_3 = *param_3 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar1 = (long *)(*(long *)(param_1 + 8) + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *(undefined1 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0;
  *(undefined8 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xac) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x167) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined1 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x380) = param_5;
  *(undefined4 *)(param_1 + 0x398) = 0;
  *(undefined8 *)(param_1 + 0x388) = 0;
  *(undefined8 *)(param_1 + 0x390) = 0;
  *(undefined8 *)(param_1 + 0x588) = param_5;
  *(undefined8 *)(param_1 + 0x590) = 0;
  *(undefined8 *)(param_1 + 0x598) = 0;
  *(undefined1 *)(param_1 + 0x6c8) = 0;
  *(undefined8 *)(param_1 + 0x6d8) = 0;
  *(undefined8 *)(param_1 + 0x6d0) = 0x7fffffffffffffff;
  *(undefined1 *)(param_1 + 0x6e0) = 0;
  *(undefined8 *)(param_1 + 0x6e8) = 0;
  *(undefined2 *)(param_1 + 0x6f0) = 0;
  FUN_1008dbba8(param_1 + 0x6f8,param_2 + 0x9a8);
  *(undefined8 *)(param_1 + 0x878) = 0;
  *(undefined8 *)(param_1 + 0x858) = 0;
  *(undefined8 *)(param_1 + 0x850) = 0;
  *(undefined8 *)(param_1 + 0x868) = 0;
  *(undefined8 *)(param_1 + 0x860) = 0;
  *(undefined1 *)(param_1 + 0x870) = 0;
  if (param_4 != 0) {
    *(int *)(param_1 + 0x9c) = (int)param_4;
    **(long **)(param_2 + 0x2c8) = param_1;
    FUN_1008deda8(param_2 + 0xf8,param_4,param_1);
    FUN_1008dee98(param_2);
  }
  func_0x0001004b800c(param_1 + 0x5a0);
  func_0x0001004b800c(param_1 + 0x728);
  return param_1;
}



/* Entry: 1008dbd60; end: 1008dbd83;  */

undefined8 FUN_1008dbd60(undefined8 param_1,undefined8 param_2)

{
  FUN_1008dbbbc(param_2,param_1);
  return 0;
}



/* Entry: 1008dbd84; end: 1008dbdb7;  */

void FUN_1008dbd84(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  
  lVar4 = *(long *)(param_1 + 0x10);
  plVar3 = (long *)(lVar4 + 0x48);
  do {
    lVar6 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = param_2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar6 == 0) {
    return;
  }
  func_0x000107c2c17c();
  lVar6 = *(long *)(lVar4 + 0x10);
  plVar3 = (long *)**(undefined8 **)(lVar4 + 8);
  lVar4 = param_2;
  func_0x000100611dc4();
  if (lVar4 == 0) {
    func_0x000104abe96c();
    if (param_2 == 0) {
      return;
    }
    puVar5 = (undefined8 *)(*plVar3 + 0x28);
  }
  else {
    puVar5 = (undefined8 *)(*plVar3 + 0x20);
    param_2 = lVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x000100611e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar5)(plVar3,lVar6 + 0x200,param_2);
  return;
}



/* Entry: 1008dbdb8; end: 1008dbdff;  */

long * FUN_1008dbdb8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (*param_1 != 0) {
    func_0x000104a8dc18();
  }
  *param_1 = lVar1;
  *param_2 = 0;
  return param_1;
}



/* Entry: 1008dbe00; end: 1008dbe2f;  */

long * FUN_1008dbe00(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000104a8dc18();
  }
  return param_1;
}



/* Entry: 1008dbe30; end: 1008dbe57;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1008dbe30(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uStack_108;
  char *pcStack_100;
  long alStack_f8 [20];
  long lStack_58;
  
  if (*(long *)(param_1 + 8) == 0) {
    if (param_2 != 0) {
      *(long *)(param_1 + 8) = param_2;
      return;
    }
  }
  else {
    func_0x000107c2c210();
  }
  func_0x000107c2c20c();
  lVar5 = 0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  alStack_f8[1] = 0;
  lVar2 = param_1 + 0x1c0;
  do {
    if (*(long *)(lVar2 + lVar5) != 0) {
      *(undefined8 *)(*(long *)(lVar2 + lVar5) + 0x18) = *(undefined8 *)(param_1 + 0xf0);
      lVar4 = *(long *)(lVar2 + lVar5);
      *(code **)(lVar4 + 0x28) = FUN_1008dbf78;
      *(long *)(lVar4 + 0x30) = lVar4;
      *(undefined8 *)(lVar4 + 0x38) = 0;
      uStack_108 = 0;
      pcStack_100 = "resuming pending batch from LB call";
      alStack_f8[0] = *(long *)(lVar2 + lVar5) + 0x20;
      FUN_1004dfd88(alStack_f8 + 1,alStack_f8,&uStack_108,&pcStack_100);
      if ((uStack_108 & 1) != 0) {
        FUN_10084dad0();
      }
      *(undefined8 *)(lVar2 + lVar5) = 0;
    }
    lVar5 = lVar5 + 8;
  } while (lVar5 != 0x30);
  FUN_1004dffa0(alStack_f8 + 1,*(undefined8 *)(param_1 + 0x50));
  plVar1 = alStack_f8 + 1;
  FUN_1004e0194();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  func_0x000107c60e78();
  FUN_1004e0194(alStack_f8 + 1);
  func_0x000107c60bd8();
  lVar2 = plVar1[3];
  FUN_1008dbf84();
  puVar3 = (undefined8 *)(lVar2 + 0x50);
  FUN_1004bd910(puVar3,0);
                    /* WARNING: Could not recover jumptable at 0x0001008dc014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar3)();
  return;
}



/* Entry: 1008dbe58; end: 1008dbf77;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1008dbe58(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uStack_f8;
  char *pcStack_f0;
  long alStack_e8 [20];
  long lStack_48;
  
  lVar5 = 0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  alStack_e8[1] = 0;
  lVar2 = param_1 + 0x1c0;
  do {
    if (*(long *)(lVar2 + lVar5) != 0) {
      *(undefined8 *)(*(long *)(lVar2 + lVar5) + 0x18) = *(undefined8 *)(param_1 + 0xf0);
      lVar4 = *(long *)(lVar2 + lVar5);
      *(code **)(lVar4 + 0x28) = FUN_1008dbf78;
      *(long *)(lVar4 + 0x30) = lVar4;
      *(undefined8 *)(lVar4 + 0x38) = 0;
      uStack_f8 = 0;
      pcStack_f0 = "resuming pending batch from LB call";
      alStack_e8[0] = *(long *)(lVar2 + lVar5) + 0x20;
      FUN_1004dfd88(alStack_e8 + 1,alStack_e8,&uStack_f8,&pcStack_f0);
      if ((uStack_f8 & 1) != 0) {
        FUN_10084dad0();
      }
      *(undefined8 *)(lVar2 + lVar5) = 0;
    }
    lVar5 = lVar5 + 8;
  } while (lVar5 != 0x30);
  FUN_1004dffa0(alStack_e8 + 1,*(undefined8 *)(param_1 + 0x50));
  plVar1 = alStack_e8 + 1;
  FUN_1004e0194();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  FUN_1004e0194(alStack_e8 + 1);
  func_0x000107c60bd8();
  lVar2 = plVar1[3];
  FUN_1008dbf84();
  puVar3 = (undefined8 *)(lVar2 + 0x50);
  FUN_1004bd910(puVar3,0);
                    /* WARNING: Could not recover jumptable at 0x0001008dc014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar3)();
  return;
}



/* Entry: 1008dbf78; end: 1008dbf83;  */

void FUN_1008dbf78(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  FUN_1008dbf84();
  puVar2 = (undefined8 *)(lVar1 + 0x50);
  FUN_1004bd910(puVar2,0);
                    /* WARNING: Could not recover jumptable at 0x0001008dc014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar2)();
  return;
}



/* Entry: 1008dbf84; end: 1008dbfdb;  */

void FUN_1008dbf84(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (((*(byte *)(param_2 + 0x10) >> 5 & 1) != 0) && (*(long *)(*param_1 + 0x20) != 0)) {
    param_1[3] = (long)&UNK_104a8dc58;
    param_1[4] = (long)param_1;
    param_1[5] = 0;
    if (param_1[7] != 0) {
      func_0x000107c2c208();
      FUN_1008dbf84();
      param_1 = param_1 + 10;
      FUN_1004bd910(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x0001008dc014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)();
      return;
    }
    lVar1 = *(long *)(param_2 + 8);
    lVar2 = *(long *)(lVar1 + 0x80);
    param_1[6] = *(long *)(lVar1 + 0x90);
    param_1[7] = lVar2;
    *(long **)(lVar1 + 0x90) = param_1 + 2;
  }
  return;
}



/* Entry: 1008dbfdc; end: 1008dc017;  */

void FUN_1008dbfdc(long param_1)

{
  undefined8 *puVar1;
  
  FUN_1008dbf84();
  puVar1 = (undefined8 *)(param_1 + 0x50);
  FUN_1004bd910(puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x0001008dc014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar1)();
  return;
}



/* Entry: 1008dc018; end: 1008dc01f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1008dc018(long param_1,long param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
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
  
  lVar9 = *(long *)(param_1 + 0x10);
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = &PTR___tlv_bootstrap_11340d8b8;
  (*(code *)PTR___tlv_bootstrap_11340d8b8)(*(undefined8 *)(lVar9 + 0x20));
  puVar18 = *ppuVar5;
  *ppuVar5 = extraout_x8;
  ppuVar6 = &PTR___tlv_bootstrap_11340d8d0;
  (*(code *)PTR___tlv_bootstrap_11340d8d0)(*(undefined8 *)(lVar9 + 0x40));
  puVar19 = *ppuVar6;
  *ppuVar6 = extraout_x8_00;
  ppuVar7 = &PTR___tlv_bootstrap_11340d8e8;
  (*(code *)PTR___tlv_bootstrap_11340d8e8)(*(undefined8 *)(lVar9 + 0x48));
  puVar20 = *ppuVar7;
  *ppuVar7 = extraout_x8_01;
  ppuVar8 = &PTR___tlv_bootstrap_11340d900;
  (*(code *)PTR___tlv_bootstrap_11340d900)(lVar9 + 0x38);
  puVar21 = *ppuVar8;
  *ppuVar8 = extraout_x8_02;
  *(undefined8 *)(param_2 + 0x38) = 1;
  alStack_130[1] = 0;
  uStack_110 = 0;
  plVar12 = *(long **)(lVar9 + 0x10);
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
  lStack_78 = lVar9;
  if ((bVar1 >> 6 & 1) == 0) {
    if (((bVar1 >> 3 & 1) == 0) ||
       (puVar15 = *(undefined4 **)(lVar9 + 0x70), puVar15 == (undefined4 *)0x0)) goto LAB_100615030;
    uVar16 = 3;
    switch(*puVar15) {
    case 1:
      uVar16 = 4;
    case 0:
      *puVar15 = uVar16;
      break;
    case 2:
      goto LAB_100615030;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      goto code_r0x000100615318;
    }
    lVar13 = *(long *)(param_2 + 8);
    *(undefined8 *)(puVar15 + 0xc) = *(undefined8 *)(lVar13 + 0x38);
    *(undefined8 *)(puVar15 + 2) = *(undefined8 *)(lVar13 + 0x48);
    *(code **)(puVar15 + 6) = FUN_10082b948;
    *(long *)(puVar15 + 8) = lVar9;
    *(undefined8 *)(puVar15 + 10) = 0;
    *(long *)(*(long *)(param_2 + 8) + 0x48) = *(long *)(lVar9 + 0x70) + 0x10;
    uVar11 = (uint)*(byte *)(param_2 + 0x10);
LAB_100615030:
    if ((uVar11 & 1) == 0) {
      if ((uVar11 >> 5 & 1) == 0) {
        uVar17 = *(ulong *)(lVar9 + 0xa0);
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
          func_0x000104aaf3e8(alStack_130,&uStack_158,alStack_130 + 1);
          if ((uVar17 & 1) != 0) {
            FUN_10084dad0(uVar17);
          }
        }
      }
      else if (*(int *)(lVar9 + 0xac) == 5) {
        uVar17 = *(ulong *)(lVar9 + 0xa0);
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
        func_0x000104aaf3e8(alStack_130,&uStack_148,alStack_130 + 1);
        if ((uVar17 & 1) != 0) {
          FUN_10084dad0(uVar17);
        }
      }
      else {
        if (*(int *)(lVar9 + 0xac) != 0) {
          uVar10 = 0x24a;
          goto LAB_1006152c0;
        }
        *(undefined4 *)(lVar9 + 0xac) = 2;
        if (*(long *)(param_2 + 0x38) != 0) {
          *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 1;
        }
        lVar13 = *(long *)(param_2 + 8);
        *(undefined8 *)(lVar9 + 0x68) = *(undefined8 *)(lVar13 + 0x80);
        *(undefined8 *)(lVar9 + 0x78) = *(undefined8 *)(lVar13 + 0x90);
        *(long *)(lVar13 + 0x90) = lVar9 + 0x80;
        lStack_150 = param_2;
        FUN_1006153ac(&lStack_150);
      }
    }
    else if ((*(int *)(lVar9 + 0xa8) == 3) || (*(int *)(lVar9 + 0xac) == 5)) {
      uVar17 = *(ulong *)(lVar9 + 0xa0);
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
      func_0x000104aaf3e8(alStack_130,&uStack_140,alStack_130 + 1);
      if ((uVar17 & 1) != 0) {
        FUN_10084dad0(uVar17);
      }
    }
    else {
      if (*(int *)(lVar9 + 0xa8) != 0) {
        uVar10 = 0x237;
LAB_1006152c0:
        FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                      ,uVar10,2,"assertion failed: %s");
        func_0x000107c60ebc();
        goto LAB_10061531c;
      }
      *(undefined4 *)(lVar9 + 0xa8) = 1;
      if ((*(byte *)(param_2 + 0x10) >> 5 & 1) != 0) {
        if (*(int *)(lVar9 + 0xac) != 0) {
          uVar10 = 0x23c;
          goto LAB_1006152c0;
        }
        *(undefined4 *)(lVar9 + 0xac) = 1;
      }
      FUN_100615414(lVar9 + 0x60,alStack_130);
      FUN_1006154b8(lVar9,alStack_130 + 1);
    }
    if (alStack_130[0] != 0) {
      lVar13 = *(long *)(lVar9 + 0x10);
      FUN_1004bd910(lVar13,*(long *)(lVar13 + 0x28) + -1);
      if (lVar13 == *(long *)(lVar9 + 0x18)) {
        uStack_160 = 4;
        func_0x000104aaf3e8(alStack_130,&uStack_160,alStack_130 + 1);
      }
      else {
LAB_100615234:
        func_0x00010061664c(alStack_130,alStack_130 + 1);
      }
    }
  }
  else {
    if ((bVar1 & 0x3f) != 0) {
      uVar10 = 0x1ff;
      goto LAB_1006152c0;
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
    func_0x000104aaf50c(lVar9,&uStack_138);
    if ((uVar17 & 1) != 0) {
      FUN_10084dad0(uVar17);
    }
    lVar13 = *(long *)(lVar9 + 0x10);
    FUN_1004bd910(lVar13,*(long *)(lVar13 + 0x28) + -1);
    if (lVar13 != *(long *)(lVar9 + 0x18)) goto LAB_100615234;
    func_0x000104aaf338(alStack_130,alStack_130 + 1);
  }
  FUN_10061694c(alStack_130 + 1);
  FUN_1006153ac(alStack_130);
  *ppuVar8 = puVar21;
  *ppuVar7 = puVar20;
  *ppuVar6 = puVar19;
  *ppuVar5 = puVar18;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  func_0x000107c60e78();
code_r0x000100615318:
  func_0x000107c60ebc();
LAB_10061531c:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100615320);
  (*pcVar4)();
}



/* Entry: 1008dc020; end: 1008dc10b;  */

undefined1 ** FUN_1008dc020(uint *param_1,byte *param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  uint *puVar9;
  undefined1 **ppuVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  byte **ppbVar13;
  uint uVar14;
  undefined *extraout_x8;
  undefined *extraout_x8_00;
  undefined *extraout_x8_01;
  undefined *extraout_x8_02;
  int *piVar15;
  long lVar16;
  undefined8 extraout_x8_03;
  long *plVar17;
  undefined4 *puVar18;
  long lVar19;
  undefined4 uVar20;
  ulong uVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uStack_250;
  ulong uStack_248;
  undefined1 *puStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  undefined1 *puStack_220;
  undefined8 auStack_218 [3];
  undefined8 uStack_200;
  undefined1 *puStack_168;
  long lStack_160;
  byte *pbStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_c8;
  
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar14 = *param_1;
  *param_1 = uVar14 | 2;
  if ((uVar14 >> 1 & 1) == 0) {
    uVar27 = *(undefined8 *)(param_2 + 8);
    puVar11 = *(undefined1 **)param_2;
    uVar26 = *(undefined8 *)(param_2 + 0x18);
    uVar12 = *(undefined8 *)(param_2 + 0x10);
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[0x18] = 0;
    param_2[0x19] = 0;
    param_2[0x1a] = 0;
    param_2[0x1b] = 0;
    param_2[0x1c] = 0;
    param_2[0x1d] = 0;
    param_2[0x1e] = 0;
    param_2[0x1f] = 0;
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    *(undefined8 *)(param_1 + 0x6e) = uVar27;
    *(undefined1 **)(param_1 + 0x6c) = puVar11;
    *(undefined8 *)(param_1 + 0x72) = uVar26;
    *(undefined8 *)(param_1 + 0x70) = uVar12;
    puVar9 = param_1;
  }
  else {
    uVar12 = *(undefined8 *)(param_2 + 0x18);
    uVar27 = *(undefined8 *)(param_2 + 0x10);
    uVar26 = *(undefined8 *)(param_2 + 8);
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[0x18] = 0;
    param_2[0x19] = 0;
    param_2[0x1a] = 0;
    param_2[0x1b] = 0;
    param_2[0x1c] = 0;
    param_2[0x1d] = 0;
    param_2[0x1e] = 0;
    param_2[0x1f] = 0;
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    puVar9 = *(uint **)(param_1 + 0x6c);
    *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0x70) = uVar27;
    *(undefined8 *)(param_1 + 0x6e) = uVar26;
    *(undefined8 *)(param_1 + 0x72) = uVar12;
    if ((uint *)0x1 < puVar9) {
      do {
        lVar16 = *(long *)puVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar9,0x10);
        if (bVar3) {
          *(long *)puVar9 = lVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar16 + -1 == 0) {
        (**(code **)(puVar9 + 2))();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
    return (undefined1 **)(param_1 + 0x6c);
  }
  func_0x000107c60e78();
  if ((int)param_2 == 0) {
    func_0x000107c60bd8();
  }
  func_0x000104bd46a0();
  ppbVar13 = &pbStack_f0;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*param_2 >> 1 & 1) == 0) {
    plVar17 = *(long **)(puVar9 + 2);
    if ((long *)0x1 < plVar17) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar3) {
          *plVar17 = *plVar17 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_e8 = *(undefined8 *)(puVar9 + 4);
    pbStack_f0 = *(byte **)(puVar9 + 2);
    uStack_d8 = *(undefined8 *)(puVar9 + 8);
    uStack_e0 = *(undefined8 *)(puVar9 + 6);
    FUN_1008dc020(param_2,&pbStack_f0);
    if ((byte *)0x1 < pbStack_f0) {
      do {
        lVar19 = *(long *)pbStack_f0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pbStack_f0,0x10);
        if (bVar3) {
          *(long *)pbStack_f0 = lVar19 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar19 + -1 == 0) {
        (**(code **)(pbStack_f0 + 8))();
      }
    }
  }
  ppuVar10 = *(undefined1 ***)(param_4 + 0x18);
  pbStack_f0 = param_2;
  uStack_e8 = param_3;
  if (ppuVar10 == (undefined1 **)0x0) {
    func_0x000104a71f98();
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1008dc1f4);
    (*pcVar4)();
  }
  (**(code **)(*ppuVar10 + 0x30))(extraout_x8_03);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return ppuVar10;
  }
  func_0x000107c60e78();
  if ((int)ppbVar13 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&pbStack_f0);
  }
  func_0x000107c60bd8();
  puVar11 = ppuVar10[2];
  lStack_160 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = &PTR___tlv_bootstrap_11340d8b8;
  (*(code *)PTR___tlv_bootstrap_11340d8b8)(*(undefined8 *)(puVar11 + 0x20));
  puVar22 = *ppuVar5;
  *ppuVar5 = extraout_x8;
  ppuVar6 = &PTR___tlv_bootstrap_11340d8d0;
  (*(code *)PTR___tlv_bootstrap_11340d8d0)(*(undefined8 *)(puVar11 + 0x40));
  puVar23 = *ppuVar6;
  *ppuVar6 = extraout_x8_00;
  ppuVar7 = &PTR___tlv_bootstrap_11340d8e8;
  (*(code *)PTR___tlv_bootstrap_11340d8e8)(*(undefined8 *)(puVar11 + 0x48));
  puVar24 = *ppuVar7;
  *ppuVar7 = extraout_x8_01;
  ppuVar8 = &PTR___tlv_bootstrap_11340d900;
  (*(code *)PTR___tlv_bootstrap_11340d900)(puVar11 + 0x38);
  puVar25 = *ppuVar8;
  *ppuVar8 = extraout_x8_02;
  *(undefined8 *)((long)ppbVar13 + 0x38) = 1;
  auStack_218[0] = 0;
  uStack_200 = 0;
  plVar17 = *(long **)(puVar11 + 0x10);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar3) {
      *plVar17 = *plVar17 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  bVar1 = *(byte *)((long)ppbVar13 + 0x10);
  uVar14 = (uint)bVar1;
  puStack_220 = (undefined1 *)ppbVar13;
  puStack_168 = puVar11;
  if ((bVar1 >> 6 & 1) == 0) {
    if (((bVar1 >> 3 & 1) == 0) ||
       (puVar18 = *(undefined4 **)(puVar11 + 0x70), puVar18 == (undefined4 *)0x0))
    goto LAB_100615030;
    uVar20 = 3;
    switch(*puVar18) {
    case 1:
      uVar20 = 4;
    case 0:
      *puVar18 = uVar20;
      break;
    case 2:
      goto LAB_100615030;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      goto code_r0x000100615318;
    }
    lVar19 = *(long *)((long)ppbVar13 + 8);
    *(undefined8 *)(puVar18 + 0xc) = *(undefined8 *)(lVar19 + 0x38);
    *(undefined8 *)(puVar18 + 2) = *(undefined8 *)(lVar19 + 0x48);
    *(code **)(puVar18 + 6) = FUN_10082b948;
    *(undefined1 **)(puVar18 + 8) = puVar11;
    *(undefined8 *)(puVar18 + 10) = 0;
    *(long *)(*(long *)((long)ppbVar13 + 8) + 0x48) = *(long *)(puVar11 + 0x70) + 0x10;
    uVar14 = (uint)*(byte *)((long)ppbVar13 + 0x10);
LAB_100615030:
    if ((uVar14 & 1) == 0) {
      if ((uVar14 >> 5 & 1) == 0) {
        uVar21 = *(ulong *)(puVar11 + 0xa0);
        if (uVar21 != 0) {
          if ((uVar21 & 1) != 0) {
            piVar15 = (int *)(uVar21 - 1);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar15,0x10);
              if (bVar3) {
                *piVar15 = *piVar15 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          uStack_248 = uVar21;
          func_0x000104aaf3e8(&puStack_220,&uStack_248,auStack_218);
          if ((uVar21 & 1) != 0) {
            FUN_10084dad0(uVar21);
          }
        }
      }
      else if (*(int *)(puVar11 + 0xac) == 5) {
        uVar21 = *(ulong *)(puVar11 + 0xa0);
        if ((uVar21 & 1) != 0) {
          piVar15 = (int *)(uVar21 - 1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar15,0x10);
            if (bVar3) {
              *piVar15 = *piVar15 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        uStack_238 = uVar21;
        func_0x000104aaf3e8(&puStack_220,&uStack_238,auStack_218);
        if ((uVar21 & 1) != 0) {
          FUN_10084dad0(uVar21);
        }
      }
      else {
        if (*(int *)(puVar11 + 0xac) != 0) {
          uVar12 = 0x24a;
          goto LAB_1006152c0;
        }
        *(undefined4 *)(puVar11 + 0xac) = 2;
        if (*(long *)((long)ppbVar13 + 0x38) != 0) {
          *(long *)((long)ppbVar13 + 0x38) = *(long *)((long)ppbVar13 + 0x38) + 1;
        }
        lVar19 = *(long *)((long)ppbVar13 + 8);
        *(undefined8 *)(puVar11 + 0x68) = *(undefined8 *)(lVar19 + 0x80);
        *(undefined8 *)(puVar11 + 0x78) = *(undefined8 *)(lVar19 + 0x90);
        *(undefined1 **)(lVar19 + 0x90) = puVar11 + 0x80;
        puStack_240 = (undefined1 *)ppbVar13;
        FUN_1006153ac(&puStack_240);
      }
    }
    else if ((*(int *)(puVar11 + 0xa8) == 3) || (*(int *)(puVar11 + 0xac) == 5)) {
      uVar21 = *(ulong *)(puVar11 + 0xa0);
      if ((uVar21 & 1) != 0) {
        piVar15 = (int *)(uVar21 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar3) {
            *piVar15 = *piVar15 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_230 = uVar21;
      func_0x000104aaf3e8(&puStack_220,&uStack_230,auStack_218);
      if ((uVar21 & 1) != 0) {
        FUN_10084dad0(uVar21);
      }
    }
    else {
      if (*(int *)(puVar11 + 0xa8) != 0) {
        uVar12 = 0x237;
LAB_1006152c0:
        FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                      ,uVar12,2,"assertion failed: %s");
        func_0x000107c60ebc();
        goto LAB_10061531c;
      }
      *(undefined4 *)(puVar11 + 0xa8) = 1;
      if ((*(byte *)((long)ppbVar13 + 0x10) >> 5 & 1) != 0) {
        if (*(int *)(puVar11 + 0xac) != 0) {
          uVar12 = 0x23c;
          goto LAB_1006152c0;
        }
        *(undefined4 *)(puVar11 + 0xac) = 1;
      }
      FUN_100615414(puVar11 + 0x60,&puStack_220);
      FUN_1006154b8(puVar11,auStack_218);
    }
    if (puStack_220 != (undefined1 *)0x0) {
      lVar19 = *(long *)(puVar11 + 0x10);
      FUN_1004bd910(lVar19,*(long *)(lVar19 + 0x28) + -1);
      if (lVar19 == *(long *)(puVar11 + 0x18)) {
        uStack_250 = 4;
        func_0x000104aaf3e8(&puStack_220,&uStack_250,auStack_218);
      }
      else {
LAB_100615234:
        func_0x00010061664c(&puStack_220,auStack_218);
      }
    }
  }
  else {
    if ((bVar1 & 0x3f) != 0) {
      uVar12 = 0x1ff;
      goto LAB_1006152c0;
    }
    uVar21 = *(ulong *)(*(long *)((long)ppbVar13 + 8) + 0x98);
    if ((uVar21 & 1) != 0) {
      piVar15 = (int *)(uVar21 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar3) {
          *piVar15 = *piVar15 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_228 = uVar21;
    func_0x000104aaf50c(puVar11,&uStack_228);
    if ((uVar21 & 1) != 0) {
      FUN_10084dad0(uVar21);
    }
    lVar19 = *(long *)(puVar11 + 0x10);
    FUN_1004bd910(lVar19,*(long *)(lVar19 + 0x28) + -1);
    if (lVar19 != *(long *)(puVar11 + 0x18)) goto LAB_100615234;
    func_0x000104aaf338(&puStack_220,auStack_218);
  }
  FUN_10061694c(auStack_218);
  ppuVar10 = &puStack_220;
  FUN_1006153ac(ppuVar10);
  *ppuVar8 = puVar25;
  *ppuVar7 = puVar24;
  *ppuVar6 = puVar23;
  *ppuVar5 = puVar22;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_160) {
    return ppuVar10;
  }
  func_0x000107c60e78();
code_r0x000100615318:
  func_0x000107c60ebc();
LAB_10061531c:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100615320);
  (*pcVar4)();
}



/* Entry: 1008dc10c; end: 1008dc223;  */

void FUN_1008dc10c(undefined8 param_1,long param_2,byte *param_3,undefined8 param_4,long param_5)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  byte **ppbVar10;
  uint uVar11;
  undefined *extraout_x8;
  undefined *extraout_x8_00;
  undefined *extraout_x8_01;
  undefined *extraout_x8_02;
  long lVar12;
  int *piVar13;
  long *plVar14;
  long lVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  ulong uVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 uStack_1c0;
  ulong uStack_1b8;
  undefined1 *puStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  undefined1 *puStack_190;
  undefined8 auStack_188 [3];
  undefined8 uStack_170;
  long lStack_d8;
  long lStack_d0;
  byte *pbStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  ppbVar10 = &pbStack_60;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*param_3 >> 1 & 1) == 0) {
    plVar14 = *(long **)(param_2 + 8);
    if ((long *)0x1 < plVar14) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *plVar14 = *plVar14 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_58 = *(undefined8 *)(param_2 + 0x10);
    pbStack_60 = *(byte **)(param_2 + 8);
    uStack_48 = *(undefined8 *)(param_2 + 0x20);
    uStack_50 = *(undefined8 *)(param_2 + 0x18);
    FUN_1008dc020(param_3,&pbStack_60);
    if ((byte *)0x1 < pbStack_60) {
      do {
        lVar15 = *(long *)pbStack_60;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pbStack_60,0x10);
        if (bVar3) {
          *(long *)pbStack_60 = lVar15 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar15 + -1 == 0) {
        (**(code **)(pbStack_60 + 8))();
      }
    }
  }
  plVar14 = *(long **)(param_5 + 0x18);
  pbStack_60 = param_3;
  uStack_58 = param_4;
  if (plVar14 == (long *)0x0) {
    func_0x000104a71f98();
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1008dc1f4);
    (*pcVar4)();
  }
  (**(code **)(*plVar14 + 0x30))(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
  if ((int)ppbVar10 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&pbStack_60);
  }
  func_0x000107c60bd8();
  lVar15 = plVar14[2];
  lStack_d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = &PTR___tlv_bootstrap_11340d8b8;
  (*(code *)PTR___tlv_bootstrap_11340d8b8)(*(undefined8 *)(lVar15 + 0x20));
  puVar19 = *ppuVar5;
  *ppuVar5 = extraout_x8;
  ppuVar6 = &PTR___tlv_bootstrap_11340d8d0;
  (*(code *)PTR___tlv_bootstrap_11340d8d0)(*(undefined8 *)(lVar15 + 0x40));
  puVar20 = *ppuVar6;
  *ppuVar6 = extraout_x8_00;
  ppuVar7 = &PTR___tlv_bootstrap_11340d8e8;
  (*(code *)PTR___tlv_bootstrap_11340d8e8)(*(undefined8 *)(lVar15 + 0x48));
  puVar21 = *ppuVar7;
  *ppuVar7 = extraout_x8_01;
  ppuVar8 = &PTR___tlv_bootstrap_11340d900;
  (*(code *)PTR___tlv_bootstrap_11340d900)(lVar15 + 0x38);
  puVar22 = *ppuVar8;
  *ppuVar8 = extraout_x8_02;
  *(undefined8 *)((long)ppbVar10 + 0x38) = 1;
  auStack_188[0] = 0;
  uStack_170 = 0;
  plVar14 = *(long **)(lVar15 + 0x10);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar3) {
      *plVar14 = *plVar14 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  bVar1 = *(byte *)((long)ppbVar10 + 0x10);
  uVar11 = (uint)bVar1;
  puStack_190 = (undefined1 *)ppbVar10;
  lStack_d8 = lVar15;
  if ((bVar1 >> 6 & 1) == 0) {
    if (((bVar1 >> 3 & 1) == 0) ||
       (puVar16 = *(undefined4 **)(lVar15 + 0x70), puVar16 == (undefined4 *)0x0))
    goto LAB_100615030;
    uVar17 = 3;
    switch(*puVar16) {
    case 1:
      uVar17 = 4;
    case 0:
      *puVar16 = uVar17;
      break;
    case 2:
      goto LAB_100615030;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      goto code_r0x000100615318;
    }
    lVar12 = *(long *)((long)ppbVar10 + 8);
    *(undefined8 *)(puVar16 + 0xc) = *(undefined8 *)(lVar12 + 0x38);
    *(undefined8 *)(puVar16 + 2) = *(undefined8 *)(lVar12 + 0x48);
    *(code **)(puVar16 + 6) = FUN_10082b948;
    *(long *)(puVar16 + 8) = lVar15;
    *(undefined8 *)(puVar16 + 10) = 0;
    *(long *)(*(long *)((long)ppbVar10 + 8) + 0x48) = *(long *)(lVar15 + 0x70) + 0x10;
    uVar11 = (uint)*(byte *)((long)ppbVar10 + 0x10);
LAB_100615030:
    if ((uVar11 & 1) == 0) {
      if ((uVar11 >> 5 & 1) == 0) {
        uVar18 = *(ulong *)(lVar15 + 0xa0);
        if (uVar18 != 0) {
          if ((uVar18 & 1) != 0) {
            piVar13 = (int *)(uVar18 - 1);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
              if (bVar3) {
                *piVar13 = *piVar13 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          uStack_1b8 = uVar18;
          func_0x000104aaf3e8(&puStack_190,&uStack_1b8,auStack_188);
          if ((uVar18 & 1) != 0) {
            FUN_10084dad0(uVar18);
          }
        }
      }
      else if (*(int *)(lVar15 + 0xac) == 5) {
        uVar18 = *(ulong *)(lVar15 + 0xa0);
        if ((uVar18 & 1) != 0) {
          piVar13 = (int *)(uVar18 - 1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar3) {
              *piVar13 = *piVar13 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        uStack_1a8 = uVar18;
        func_0x000104aaf3e8(&puStack_190,&uStack_1a8,auStack_188);
        if ((uVar18 & 1) != 0) {
          FUN_10084dad0(uVar18);
        }
      }
      else {
        if (*(int *)(lVar15 + 0xac) != 0) {
          uVar9 = 0x24a;
          goto LAB_1006152c0;
        }
        *(undefined4 *)(lVar15 + 0xac) = 2;
        if (*(long *)((long)ppbVar10 + 0x38) != 0) {
          *(long *)((long)ppbVar10 + 0x38) = *(long *)((long)ppbVar10 + 0x38) + 1;
        }
        lVar12 = *(long *)((long)ppbVar10 + 8);
        *(undefined8 *)(lVar15 + 0x68) = *(undefined8 *)(lVar12 + 0x80);
        *(undefined8 *)(lVar15 + 0x78) = *(undefined8 *)(lVar12 + 0x90);
        *(long *)(lVar12 + 0x90) = lVar15 + 0x80;
        puStack_1b0 = (undefined1 *)ppbVar10;
        FUN_1006153ac(&puStack_1b0);
      }
    }
    else if ((*(int *)(lVar15 + 0xa8) == 3) || (*(int *)(lVar15 + 0xac) == 5)) {
      uVar18 = *(ulong *)(lVar15 + 0xa0);
      if ((uVar18 & 1) != 0) {
        piVar13 = (int *)(uVar18 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar3) {
            *piVar13 = *piVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_1a0 = uVar18;
      func_0x000104aaf3e8(&puStack_190,&uStack_1a0,auStack_188);
      if ((uVar18 & 1) != 0) {
        FUN_10084dad0(uVar18);
      }
    }
    else {
      if (*(int *)(lVar15 + 0xa8) != 0) {
        uVar9 = 0x237;
LAB_1006152c0:
        FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                      ,uVar9,2,"assertion failed: %s");
        func_0x000107c60ebc();
        goto LAB_10061531c;
      }
      *(undefined4 *)(lVar15 + 0xa8) = 1;
      if ((*(byte *)((long)ppbVar10 + 0x10) >> 5 & 1) != 0) {
        if (*(int *)(lVar15 + 0xac) != 0) {
          uVar9 = 0x23c;
          goto LAB_1006152c0;
        }
        *(undefined4 *)(lVar15 + 0xac) = 1;
      }
      FUN_100615414(lVar15 + 0x60,&puStack_190);
      FUN_1006154b8(lVar15,auStack_188);
    }
    if (puStack_190 != (undefined1 *)0x0) {
      lVar12 = *(long *)(lVar15 + 0x10);
      FUN_1004bd910(lVar12,*(long *)(lVar12 + 0x28) + -1);
      if (lVar12 == *(long *)(lVar15 + 0x18)) {
        uStack_1c0 = 4;
        func_0x000104aaf3e8(&puStack_190,&uStack_1c0,auStack_188);
      }
      else {
LAB_100615234:
        func_0x00010061664c(&puStack_190,auStack_188);
      }
    }
  }
  else {
    if ((bVar1 & 0x3f) != 0) {
      uVar9 = 0x1ff;
      goto LAB_1006152c0;
    }
    uVar18 = *(ulong *)(*(long *)((long)ppbVar10 + 8) + 0x98);
    if ((uVar18 & 1) != 0) {
      piVar13 = (int *)(uVar18 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar3) {
          *piVar13 = *piVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_198 = uVar18;
    func_0x000104aaf50c(lVar15,&uStack_198);
    if ((uVar18 & 1) != 0) {
      FUN_10084dad0(uVar18);
    }
    lVar12 = *(long *)(lVar15 + 0x10);
    FUN_1004bd910(lVar12,*(long *)(lVar12 + 0x28) + -1);
    if (lVar12 != *(long *)(lVar15 + 0x18)) goto LAB_100615234;
    func_0x000104aaf338(&puStack_190,auStack_188);
  }
  FUN_10061694c(auStack_188);
  FUN_1006153ac(&puStack_190);
  *ppuVar8 = puVar22;
  *ppuVar7 = puVar21;
  *ppuVar6 = puVar20;
  *ppuVar5 = puVar19;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d0) {
    return;
  }
  func_0x000107c60e78();
code_r0x000100615318:
  func_0x000107c60ebc();
LAB_10061531c:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100615320);
  (*pcVar4)();
}



/* Entry: 1008dc224; end: 1008dc22b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1008dc224(long param_1,long param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
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
  
  lVar9 = *(long *)(param_1 + 0x10);
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = &PTR___tlv_bootstrap_11340d8b8;
  (*(code *)PTR___tlv_bootstrap_11340d8b8)(*(undefined8 *)(lVar9 + 0x20));
  puVar18 = *ppuVar5;
  *ppuVar5 = extraout_x8;
  ppuVar6 = &PTR___tlv_bootstrap_11340d8d0;
  (*(code *)PTR___tlv_bootstrap_11340d8d0)(*(undefined8 *)(lVar9 + 0x40));
  puVar19 = *ppuVar6;
  *ppuVar6 = extraout_x8_00;
  ppuVar7 = &PTR___tlv_bootstrap_11340d8e8;
  (*(code *)PTR___tlv_bootstrap_11340d8e8)(*(undefined8 *)(lVar9 + 0x48));
  puVar20 = *ppuVar7;
  *ppuVar7 = extraout_x8_01;
  ppuVar8 = &PTR___tlv_bootstrap_11340d900;
  (*(code *)PTR___tlv_bootstrap_11340d900)(lVar9 + 0x38);
  puVar21 = *ppuVar8;
  *ppuVar8 = extraout_x8_02;
  *(undefined8 *)(param_2 + 0x38) = 1;
  alStack_130[1] = 0;
  uStack_110 = 0;
  plVar12 = *(long **)(lVar9 + 0x10);
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
  lStack_78 = lVar9;
  if ((bVar1 >> 6 & 1) == 0) {
    if (((bVar1 >> 3 & 1) == 0) ||
       (puVar15 = *(undefined4 **)(lVar9 + 0x70), puVar15 == (undefined4 *)0x0)) goto LAB_100615030;
    uVar16 = 3;
    switch(*puVar15) {
    case 1:
      uVar16 = 4;
    case 0:
      *puVar15 = uVar16;
      break;
    case 2:
      goto LAB_100615030;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      goto code_r0x000100615318;
    }
    lVar13 = *(long *)(param_2 + 8);
    *(undefined8 *)(puVar15 + 0xc) = *(undefined8 *)(lVar13 + 0x38);
    *(undefined8 *)(puVar15 + 2) = *(undefined8 *)(lVar13 + 0x48);
    *(code **)(puVar15 + 6) = FUN_10082b948;
    *(long *)(puVar15 + 8) = lVar9;
    *(undefined8 *)(puVar15 + 10) = 0;
    *(long *)(*(long *)(param_2 + 8) + 0x48) = *(long *)(lVar9 + 0x70) + 0x10;
    uVar11 = (uint)*(byte *)(param_2 + 0x10);
LAB_100615030:
    if ((uVar11 & 1) == 0) {
      if ((uVar11 >> 5 & 1) == 0) {
        uVar17 = *(ulong *)(lVar9 + 0xa0);
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
          func_0x000104aaf3e8(alStack_130,&uStack_158,alStack_130 + 1);
          if ((uVar17 & 1) != 0) {
            FUN_10084dad0(uVar17);
          }
        }
      }
      else if (*(int *)(lVar9 + 0xac) == 5) {
        uVar17 = *(ulong *)(lVar9 + 0xa0);
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
        func_0x000104aaf3e8(alStack_130,&uStack_148,alStack_130 + 1);
        if ((uVar17 & 1) != 0) {
          FUN_10084dad0(uVar17);
        }
      }
      else {
        if (*(int *)(lVar9 + 0xac) != 0) {
          uVar10 = 0x24a;
          goto LAB_1006152c0;
        }
        *(undefined4 *)(lVar9 + 0xac) = 2;
        if (*(long *)(param_2 + 0x38) != 0) {
          *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 1;
        }
        lVar13 = *(long *)(param_2 + 8);
        *(undefined8 *)(lVar9 + 0x68) = *(undefined8 *)(lVar13 + 0x80);
        *(undefined8 *)(lVar9 + 0x78) = *(undefined8 *)(lVar13 + 0x90);
        *(long *)(lVar13 + 0x90) = lVar9 + 0x80;
        lStack_150 = param_2;
        FUN_1006153ac(&lStack_150);
      }
    }
    else if ((*(int *)(lVar9 + 0xa8) == 3) || (*(int *)(lVar9 + 0xac) == 5)) {
      uVar17 = *(ulong *)(lVar9 + 0xa0);
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
      func_0x000104aaf3e8(alStack_130,&uStack_140,alStack_130 + 1);
      if ((uVar17 & 1) != 0) {
        FUN_10084dad0(uVar17);
      }
    }
    else {
      if (*(int *)(lVar9 + 0xa8) != 0) {
        uVar10 = 0x237;
LAB_1006152c0:
        FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                      ,uVar10,2,"assertion failed: %s");
        func_0x000107c60ebc();
        goto LAB_10061531c;
      }
      *(undefined4 *)(lVar9 + 0xa8) = 1;
      if ((*(byte *)(param_2 + 0x10) >> 5 & 1) != 0) {
        if (*(int *)(lVar9 + 0xac) != 0) {
          uVar10 = 0x23c;
          goto LAB_1006152c0;
        }
        *(undefined4 *)(lVar9 + 0xac) = 1;
      }
      FUN_100615414(lVar9 + 0x60,alStack_130);
      FUN_1006154b8(lVar9,alStack_130 + 1);
    }
    if (alStack_130[0] != 0) {
      lVar13 = *(long *)(lVar9 + 0x10);
      FUN_1004bd910(lVar13,*(long *)(lVar13 + 0x28) + -1);
      if (lVar13 == *(long *)(lVar9 + 0x18)) {
        uStack_160 = 4;
        func_0x000104aaf3e8(alStack_130,&uStack_160,alStack_130 + 1);
      }
      else {
LAB_100615234:
        func_0x00010061664c(alStack_130,alStack_130 + 1);
      }
    }
  }
  else {
    if ((bVar1 & 0x3f) != 0) {
      uVar10 = 0x1ff;
      goto LAB_1006152c0;
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
    func_0x000104aaf50c(lVar9,&uStack_138);
    if ((uVar17 & 1) != 0) {
      FUN_10084dad0(uVar17);
    }
    lVar13 = *(long *)(lVar9 + 0x10);
    FUN_1004bd910(lVar13,*(long *)(lVar13 + 0x28) + -1);
    if (lVar13 != *(long *)(lVar9 + 0x18)) goto LAB_100615234;
    func_0x000104aaf338(alStack_130,alStack_130 + 1);
  }
  FUN_10061694c(alStack_130 + 1);
  FUN_1006153ac(alStack_130);
  *ppuVar8 = puVar21;
  *ppuVar7 = puVar20;
  *ppuVar6 = puVar19;
  *ppuVar5 = puVar18;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  func_0x000107c60e78();
code_r0x000100615318:
  func_0x000107c60ebc();
LAB_10061531c:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100615320);
  (*pcVar4)();
}



/* Entry: 1008dc22c; end: 1008dc4cb;  */

void FUN_1008dc22c(undefined8 *param_1,long param_2,byte *****param_3,undefined8 param_4,
                  long param_5)

{
  byte *****pppppbVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined **ppuVar5;
  ulong *puVar6;
  byte *****pppppbVar7;
  byte ****ppppbVar8;
  byte ****ppppbVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long *plStack_c0;
  ulong *puStack_b8;
  long alStack_b0 [3];
  long *plStack_98;
  byte ****ppppbStack_90;
  undefined8 uStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = &PTR___tlv_bootstrap_11340d8d0;
  pppppbVar7 = param_3;
  (*(code *)PTR___tlv_bootstrap_11340d8d0)();
  puVar14 = (undefined8 *)*ppuVar5;
  puVar13 = (undefined *)*puVar14;
  if (puVar13 == (undefined *)0x0) {
    ppuVar5 = &PTR___tlv_bootstrap_11340d8b8;
    (*(code *)PTR___tlv_bootstrap_11340d8b8)();
    puVar13 = *ppuVar5;
    pppppbVar7 = (byte *****)0x0;
    FUN_1008dc4cc();
    *puVar14 = puVar13;
    puVar14[1] = &UNK_104ace198;
  }
  plVar10 = *(long **)(param_2 + 0x10);
  if (plVar10 == (long *)0x0) {
    uVar15 = 0;
  }
  else {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar15 = *(undefined8 *)(param_2 + 0x10);
  }
  if (*(long *)(puVar13 + 8) != 0) {
    func_0x000104acd8cc();
  }
  *(undefined8 *)(puVar13 + 8) = uVar15;
  if ((*(byte *)param_3 >> 1 & 1) == 0) {
    puVar6 = *(ulong **)(param_5 + 0x18);
    ppppbStack_90 = (byte ****)param_3;
    uStack_88 = param_4;
    if (puVar6 == (ulong *)0x0) goto LAB_1008dc428;
    pppppbVar7 = &ppppbStack_90;
    (**(code **)(*puVar6 + 0x30))(param_1);
  }
  else {
    if (param_3[0x36] == (byte ****)0x0) {
      ppppbVar8 = (byte ****)((long)param_3 + 0x1b9);
      ppppbVar9 = (byte ****)(ulong)*(byte *)(param_3 + 0x37);
    }
    else {
      ppppbVar9 = param_3[0x37];
      ppppbVar8 = param_3[0x38];
    }
    (**(code **)(**(long **)(param_2 + 8) + 0x30))
              (&puStack_b8,*(long **)(param_2 + 8),ppppbVar8,ppppbVar9,
               *(undefined8 *)(param_2 + 0x10));
    FUN_1008dca14(&plStack_c0,param_2,param_3,param_4);
    func_0x0001008dd00c(alStack_b0,param_5);
    FUN_1008dd0e8(&ppppbStack_90,&puStack_b8,&plStack_c0,alStack_b0);
    ppuVar5 = &PTR___tlv_bootstrap_11340d8b8;
    (*(code *)PTR___tlv_bootstrap_11340d8b8)();
    puVar13 = *ppuVar5;
    pppppbVar7 = &ppppbStack_90;
    FUN_1008dd3bc();
    *param_1 = puVar13;
    FUN_1008dd49c(&ppppbStack_90);
    if (plStack_98 == alStack_b0) {
      lVar11 = 4;
      plStack_98 = alStack_b0;
LAB_1008dc3c4:
      (**(code **)(*plStack_98 + lVar11 * 8))();
    }
    else if (plStack_98 != (long *)0x0) {
      lVar11 = 5;
      goto LAB_1008dc3c4;
    }
    (**(code **)(*plStack_c0 + 8))();
    (**(code **)(*puStack_b8 + 8))();
    puVar6 = puStack_b8;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  func_0x000107c60e78();
LAB_1008dc428:
  func_0x000104a71f98();
  if ((int)pppppbVar7 != 0) {
    func_0x000104bd46a0();
  }
  func_0x000107c60bd8();
  if (pppppbVar7 != (byte *****)0x0) {
    pppppbVar1 = pppppbVar7 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppppbVar1,0x10);
      if (bVar4) {
        *pppppbVar1 = (byte ****)((long)*pppppbVar1 + 1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  do {
    uVar12 = *puVar6;
    uVar2 = uVar12 + 0x20;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar6,0x10);
    if (bVar4) {
      *puVar6 = uVar2;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (puVar6[2] < uVar2) {
    FUN_1004bbee0();
  }
  else {
    puVar6 = (ulong *)((long)puVar6 + uVar12 + 0x30);
  }
  *puVar6 = (ulong)pppppbVar7;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  return;
}



/* Entry: 1008dc4cc; end: 1008dc54f;  */

void FUN_1008dc4cc(ulong *param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  
  if (param_2 != 0) {
    plVar1 = (long *)(param_2 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  do {
    uVar5 = *param_1;
    uVar2 = uVar5 + 0x20;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar4) {
      *param_1 = uVar2;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (param_1[2] < uVar2) {
    FUN_1004bbee0(param_1,0x20);
  }
  else {
    param_1 = (ulong *)((long)param_1 + uVar5 + 0x30);
  }
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



/* Entry: 1008dc550; end: 1008dc687;  */

void FUN_1008dc550(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined **ppuVar7;
  ulong *puVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  ulong uStack_60;
  ulong uStack_58;
  
  plVar10 = (long *)(param_2 + 0x40);
  if (*(char *)(param_2 + 0x57) < '\0') {
    plVar10 = (long *)*plVar10;
  }
  lVar5 = (long)plVar10;
  func_0x000107c613d0(plVar10);
  plVar11 = (long *)(param_2 + 0x58);
  if (*(char *)(param_2 + 0x6f) < '\0') {
    plVar11 = (long *)*plVar11;
  }
  lVar6 = (long)plVar11;
  func_0x000107c613d0(plVar11);
  FUN_1008dc930(&uStack_60,param_3,param_4,plVar10,lVar5,plVar11,lVar6,param_5);
  uVar4 = uStack_60;
  uStack_60 = 0x36;
  uStack_58 = uVar4;
  ppuVar7 = &PTR___tlv_bootstrap_11340d8b8;
  (*(code *)PTR___tlv_bootstrap_11340d8b8)();
  puVar8 = (ulong *)*ppuVar7;
  do {
    uVar9 = *puVar8;
    uVar1 = uVar9 + 0x10;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar8,0x10);
    if (bVar3) {
      *puVar8 = uVar1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (puVar8[2] < uVar1) {
    FUN_1004bbee0(puVar8,0x10);
  }
  else {
    puVar8 = (ulong *)((long)puVar8 + uVar9 + 0x30);
  }
  *puVar8 = (ulong)&PTR_LAB_1107c64e0;
  puVar8[1] = uVar4;
  uStack_58 = 0x36;
  *param_1 = puVar8;
  if ((uStack_60 & 1) != 0) {
    FUN_10084dad0();
  }
  return;
}



/* Entry: 1008dc688; end: 1008dc69b;  */

void FUN_1008dc688(long *param_1,long param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 1008dc69c; end: 1008dc92f;  */

undefined1  [16] FUN_1008dc69c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  FUN_1008dc688(&uStack_80);
  lVar5 = -0x18;
  lVar6 = 1;
  do {
    puVar1 = &uStack_80;
    FUN_100740704();
    lVar5 = lVar5 + 0x18;
    lVar6 = lVar6 + -1;
  } while (puVar1 != (undefined8 *)0x0);
  if (lVar6 == 0) {
    lVar5 = 0;
  }
  else {
    FUN_100460200();
    FUN_1008dc688(&uStack_98,param_1);
    uStack_78 = uStack_90;
    uStack_80 = uStack_98;
    uStack_70 = uStack_88;
    puVar1 = &uStack_80;
    FUN_100740704();
    if (puVar1 != (undefined8 *)0x0) {
      lVar6 = 0;
      do {
        uVar7 = *puVar1;
        uVar2 = uVar7;
        func_0x000107c613c0(uVar7,"x509_subject_alternative_name");
        if ((int)uVar2 == 0) {
          pcVar3 = "x509_subject_alternative_name";
LAB_1008dc8b8:
          puVar4 = (undefined8 *)(lVar5 + lVar6 * 0x18);
          lVar6 = lVar6 + 1;
          *puVar4 = pcVar3;
          puVar4[1] = puVar1[1];
          puVar4[2] = puVar1[2];
        }
        else {
          uVar2 = uVar7;
          func_0x000107c613c0(uVar7,"x509_subject");
          pcVar3 = "x509_subject";
          if ((int)uVar2 == 0) goto LAB_1008dc8b8;
          uVar2 = uVar7;
          func_0x000107c613c0(uVar7,"x509_common_name");
          if ((int)uVar2 == 0) {
            pcVar3 = "x509_subject_common_name";
            goto LAB_1008dc8b8;
          }
          uVar2 = uVar7;
          func_0x000107c613c0(uVar7,"x509_pem_cert");
          pcVar3 = "x509_pem_cert";
          if ((((int)uVar2 == 0) ||
              (uVar2 = uVar7, func_0x000107c613c0(uVar7,"security_level"), pcVar3 = "security_level"
              , (int)uVar2 == 0)) ||
             (uVar2 = uVar7, func_0x000107c613c0(uVar7,"x509_pem_cert_chain"),
             pcVar3 = "x509_pem_cert_chain", (int)uVar2 == 0)) goto LAB_1008dc8b8;
          uVar2 = uVar7;
          func_0x000107c613c0(uVar7,"peer_dns");
          if ((int)uVar2 == 0) {
            pcVar3 = "x509_dns";
            goto LAB_1008dc8b8;
          }
          uVar2 = uVar7;
          func_0x000107c613c0(uVar7,"peer_uri");
          if (((int)uVar2 == 0) ||
             (uVar2 = uVar7, func_0x000107c613c0(uVar7,"peer_spiffe_id"), (int)uVar2 == 0)) {
            pcVar3 = "x509_uri";
            goto LAB_1008dc8b8;
          }
          uVar2 = uVar7;
          func_0x000107c613c0(uVar7,"peer_email");
          if ((int)uVar2 == 0) {
            pcVar3 = "x509_email";
            goto LAB_1008dc8b8;
          }
          func_0x000107c613c0(uVar7,"peer_ip");
          if ((int)uVar7 == 0) {
            pcVar3 = "x509_ip";
            goto LAB_1008dc8b8;
          }
        }
        puVar1 = &uStack_80;
        FUN_100740704();
      } while (puVar1 != (undefined8 *)0x0);
      goto LAB_1008dc908;
    }
  }
  lVar6 = 0;
LAB_1008dc908:
  auVar8._8_8_ = lVar6;
  auVar8._0_8_ = lVar5;
  return auVar8;
}



/* Entry: 1008dc930; end: 1008dca13;  */

void FUN_1008dc930(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7,long param_8)

{
  int iVar1;
  long lVar2;
  long lStack_60;
  long lStack_58;
  
  iVar1 = (int)&lStack_60;
  lVar2 = param_3;
  FUN_1008dc69c();
  lStack_60 = param_8;
  lStack_58 = lVar2;
  func_0x00010073f980(&lStack_60,param_2,param_3);
  if ((((param_7 == 0) || (param_3 != param_5)) ||
      (func_0x000107c610b0(param_2,param_4,param_3), (int)param_2 != 0)) && (iVar1 == 0)) {
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/security_connector/ssl_utils.cc"
                  ,0xc2,2,"call host does not match SSL server name");
    if (lStack_60 != 0) {
      FUN_100460314();
    }
    func_0x000107c2b9c8(param_1,"call host does not match SSL server name",0x28);
  }
  else {
    if (lStack_60 != 0) {
      FUN_100460314();
    }
    *param_1 = 0;
  }
  return;
}



/* Entry: 1008dca14; end: 1008dcf5b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1008dca14(undefined8 *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int iVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined **ppuVar17;
  undefined **ppuStack_c0;
  ulong uStack_b8;
  undefined **ppuStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong auStack_88 [4];
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  
  ppuVar5 = &PTR___tlv_bootstrap_11340d8d0;
  (*(code *)PTR___tlv_bootstrap_11340d8d0)();
  plVar11 = *(long **)*ppuVar5;
  plVar15 = *(long **)(*(long *)(param_2 + 8) + 0x28);
  if (plVar11 == (long *)0x0) {
    bVar4 = false;
  }
  else {
    bVar4 = *plVar11 != 0;
  }
  if ((plVar15 != (long *)0x0) || (bVar4)) {
    bVar2 = false;
    if (plVar15 != (long *)0x0) {
      bVar2 = bVar4;
    }
    if (bVar2) {
      func_0x000104acef68(plVar15,*plVar11,0);
      if (plVar15 == (long *)0x0) {
        func_0x000107c2b9c8(auStack_88,"Incompatible credentials set on channel and call.",0x31);
        uVar1 = auStack_88[0];
        auStack_88[0] = 0x36;
        uStack_b8 = uVar1;
        ppuVar5 = &PTR___tlv_bootstrap_11340d8b8;
        (*(code *)PTR___tlv_bootstrap_11340d8b8)();
        puVar7 = (ulong *)*ppuVar5;
        do {
          uVar12 = *puVar7;
          uVar13 = uVar12 + 0x10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar7,0x10);
          if (bVar4) {
            *puVar7 = uVar13;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar7[2] < uVar13) {
          FUN_1004bbee0(puVar7,0x10);
        }
        else {
          puVar7 = (ulong *)((long)puVar7 + uVar12 + 0x30);
        }
        *puVar7 = (ulong)&PTR_DAT_1107c67b0;
        puVar7[1] = uVar1;
        uStack_b8 = 0x36;
        *param_1 = puVar7;
        if ((auStack_88[0] & 1) == 0) {
          return;
        }
        FUN_10084dad0();
        return;
      }
    }
    else {
      if (bVar4) {
        plVar15 = (long *)*plVar11;
      }
      plVar11 = plVar15 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *plVar11 = *plVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_100741c08(&uStack_68,*(undefined8 *)(param_2 + 0x10),"security_level");
    puVar8 = &uStack_68;
    FUN_100740704();
    if (puVar8 == (undefined8 *)0x0) {
      func_0x000107c2b9c8(&uStack_90,
                          "Established channel does not have an auth property representing a security level."
                          ,0x51);
      uVar1 = uStack_90;
      uStack_90 = 0x36;
      uStack_b8 = uVar1;
      ppuVar5 = &PTR___tlv_bootstrap_11340d8b8;
      (*(code *)PTR___tlv_bootstrap_11340d8b8)();
      puVar7 = (ulong *)*ppuVar5;
      do {
        uVar12 = *puVar7;
        uVar13 = uVar12 + 0x10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar4) {
          *puVar7 = uVar13;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar7[2] < uVar13) {
        FUN_1004bbee0(puVar7,0x10);
      }
      else {
        puVar7 = (ulong *)((long)puVar7 + uVar12 + 0x30);
      }
      *puVar7 = (ulong)&PTR_DAT_1107c67b0;
      puVar7[1] = uVar1;
      uStack_b8 = 0x36;
      *param_1 = puVar7;
      if ((uStack_90 & 1) != 0) {
        FUN_10084dad0();
      }
      if (plVar15 == (long *)0x0) {
        return;
      }
    }
    else {
      plVar11 = plVar15;
      (**(code **)(*plVar15 + 0x18))();
      uVar16 = puVar8[1];
      uVar9 = uVar16;
      func_0x000107c613c0(uVar16,"TSI_INTEGRITY_ONLY");
      if ((int)uVar9 == 0) {
        iVar10 = 1;
      }
      else {
        func_0x000107c613c0(uVar16,"TSI_PRIVACY_AND_INTEGRITY");
        iVar10 = (uint)((int)uVar16 == 0) << 1;
      }
      if (iVar10 < (int)plVar11) {
        func_0x000107c2b9c8(&uStack_98,
                            "Established channel does not have a sufficient security level to transfer call credential."
                            ,0x5a);
        uVar1 = uStack_98;
        uStack_98 = 0x36;
        uStack_b8 = uVar1;
        ppuVar5 = &PTR___tlv_bootstrap_11340d8b8;
        (*(code *)PTR___tlv_bootstrap_11340d8b8)();
        puVar7 = (ulong *)*ppuVar5;
        do {
          uVar12 = *puVar7;
          uVar13 = uVar12 + 0x10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar7,0x10);
          if (bVar4) {
            *puVar7 = uVar13;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar7[2] < uVar13) {
          FUN_1004bbee0(puVar7,0x10);
        }
        else {
          puVar7 = (ulong *)((long)puVar7 + uVar12 + 0x30);
        }
        *puVar7 = (ulong)&PTR_DAT_1107c67b0;
        puVar7[1] = uVar1;
        uStack_b8 = 0x36;
        *param_1 = puVar7;
        if ((uStack_98 & 1) != 0) {
          FUN_10084dad0();
        }
      }
      else {
        (**(code **)(*plVar15 + 0x10))(&ppuStack_c0,plVar15,param_3,(long *)(param_2 + 8));
        ppuVar17 = ppuStack_c0;
        ppuStack_c0 = &PTR_PTR_1130a63b0;
        uStack_b8 = uStack_b8 & 0xffffffffffffff00;
        ppuStack_b0 = ppuVar17;
        uStack_a8 = 0;
        uStack_a0 = param_4;
        (**(code **)(PTR_PTR_1130a63b0 + 8))(&PTR_PTR_1130a63b0);
        ppuVar5 = &PTR___tlv_bootstrap_11340d8b8;
        (*(code *)PTR___tlv_bootstrap_11340d8b8)();
        puVar7 = (ulong *)*ppuVar5;
        do {
          uVar13 = *puVar7;
          uVar1 = uVar13 + 0x30;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar7,0x10);
          if (bVar4) {
            *puVar7 = uVar1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar7[2] < uVar1) {
          FUN_1004bbee0(puVar7,0x30);
          param_4 = uStack_a0;
          ppuVar17 = ppuStack_b0;
        }
        else {
          puVar7 = (ulong *)((long)puVar7 + uVar13 + 0x30);
          uStack_a8 = 0;
        }
        *puVar7 = (ulong)&PTR_DAT_1107c67e8;
        *(undefined1 *)(puVar7 + 1) = 0;
        puVar7[3] = uStack_a8;
        puVar7[2] = (ulong)ppuVar17;
        ppuStack_b0 = &PTR_PTR_1130a63b0;
        uStack_a8 = 0;
        puVar7[4] = param_4;
        *param_1 = puVar7;
        func_0x000104ad1390(&uStack_b8);
        (**(code **)(*ppuStack_c0 + 8))();
      }
    }
    plVar11 = plVar15 + 1;
    do {
      lVar14 = *plVar11;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = lVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar15 + 8))(plVar15);
    }
  }
  else {
    auStack_88[2] = 0;
    auStack_88[1] = 0;
    ppuStack_b0 = (undefined **)0x0;
    uStack_b8 = 0;
    uStack_68 = 0;
    uStack_a8 = param_4;
    auStack_88[3] = param_4;
    uStack_60 = param_3;
    uStack_58 = param_4;
    FUN_1008dcf5c(&uStack_b8);
    ppuVar5 = &PTR___tlv_bootstrap_11340d8b8;
    (*(code *)PTR___tlv_bootstrap_11340d8b8)();
    puVar6 = *ppuVar5;
    FUN_1008dcf8c(puVar6,&uStack_68);
    *param_1 = puVar6;
    FUN_1008dcf5c(&uStack_68);
    FUN_1008dcf5c(auStack_88 + 1);
  }
  return;
}



/* Entry: 1008dcf5c; end: 1008dcf8b;  */

ulong * FUN_1008dcf5c(ulong *param_1)

{
  if ((*param_1 & 1) != 0) {
    FUN_10084dad0();
  }
  return param_1;
}



/* Entry: 1008dcf8c; end: 1008dd06f;  */

void FUN_1008dcf8c(ulong *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  
  do {
    uVar3 = *param_1;
    uVar4 = uVar3 + 0x20;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = uVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (param_1[2] < uVar4) {
    FUN_1004bbee0(param_1,0x20);
  }
  else {
    param_1 = (ulong *)((long)param_1 + uVar3 + 0x30);
  }
  *param_1 = (ulong)&PTR_FUN_1107c6758;
  if (*param_2 == 0) {
    uVar4 = param_2[1];
    param_1[3] = param_2[2];
    param_1[2] = uVar4;
    param_2[1] = 0;
    param_1[1] = 0;
  }
  else {
    param_1[1] = *param_2;
    *param_2 = 0x36;
  }
  return;
}



/* Entry: 1008dd070; end: 1008dd083;  */

void FUN_1008dd070(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1107c4e48;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1008dd084; end: 1008dd0e7;  */

long FUN_1008dd084(long param_1,long param_2)

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



/* Entry: 1008dd0e8; end: 1008dd24f;  */

long * FUN_1008dd0e8(undefined1 *param_1,long *param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  long ***ppplVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  long alStack_c8 [3];
  long *plStack_b0;
  long lStack_a8;
  long *plStack_70;
  long *plStack_68;
  long **pplStack_60;
  undefined1 *puStack_58;
  long *plStack_50;
  long alStack_48 [3];
  long *plStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_68 = (long *)*param_2;
  *param_2 = (long)&PTR_PTR_1130a6498;
  plStack_70 = (long *)*param_3;
  *param_3 = &PTR_PTR_1130a64a0;
  FUN_1008dd084(alStack_48,param_4);
  *param_1 = 0;
  pplStack_60 = &plStack_68;
  ppplVar3 = &pplStack_60;
  puStack_58 = (undefined1 *)&plStack_70;
  plStack_50 = alStack_48;
  FUN_1008dd250(param_1 + 8);
  if (plStack_30 == alStack_48) {
    lVar4 = 4;
    plStack_30 = alStack_48;
LAB_1008dd180:
    (**(code **)(*plStack_30 + lVar4 * 8))();
  }
  else if (plStack_30 != (long *)0x0) {
    lVar4 = 5;
    goto LAB_1008dd180;
  }
  (**(code **)(*plStack_70 + 8))();
  plVar5 = plStack_68;
  (**(code **)(*plStack_68 + 8))();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar5;
  }
  func_0x000107c60e78();
  if ((int)ppplVar3 == 0) {
    func_0x000107c60bd8(plVar5);
  }
  func_0x000104bd46a0();
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = plVar5 + 2;
  FUN_1008dd084(alStack_c8,ppplVar3[2]);
  FUN_1008dd084(plVar1,alStack_c8);
  if (plStack_b0 == alStack_c8) {
    lVar4 = 4;
    plStack_b0 = alStack_c8;
LAB_1008dd2bc:
    (**(code **)(*plStack_b0 + lVar4 * 8))();
  }
  else if (plStack_b0 != (long *)0x0) {
    lVar4 = 5;
    goto LAB_1008dd2bc;
  }
  puStack_d8 = ppplVar3[1];
  puStack_e0 = *ppplVar3;
  puStack_d0 = ppplVar3[2];
  plVar2 = plVar5;
  FUN_1008dd358(plVar5,&puStack_e0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return plVar5;
  }
  func_0x000107c60e78();
  plVar5 = (long *)plVar5[5];
  if (plVar5 == plVar1) {
    lVar4 = 4;
    plVar5 = plVar1;
  }
  else {
    if (plVar5 == (long *)0x0) goto LAB_1008dd34c;
    lVar4 = 5;
  }
  (**(code **)(*plVar5 + lVar4 * 8))(plVar5);
LAB_1008dd34c:
  func_0x000107c60bd8(plVar2);
  return plVar2;
}



/* Entry: 1008dd250; end: 1008dd353;  */

long FUN_1008dd250(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long alStack_58 [3];
  long *plStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)(param_1 + 0x10);
  FUN_1008dd084(alStack_58,param_2[2]);
  FUN_1008dd084(plVar1,alStack_58);
  if (plStack_40 == alStack_58) {
    lVar2 = 4;
    plStack_40 = alStack_58;
LAB_1008dd2bc:
    (**(code **)(*plStack_40 + lVar2 * 8))();
  }
  else if (plStack_40 != (long *)0x0) {
    lVar2 = 5;
    goto LAB_1008dd2bc;
  }
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_60 = param_2[2];
  lVar2 = param_1;
  FUN_1008dd358(param_1,&uStack_70);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  func_0x000107c60e78();
  plVar4 = *(long **)(param_1 + 0x28);
  if (plVar4 == plVar1) {
    lVar3 = 4;
    plVar4 = plVar1;
  }
  else {
    if (plVar4 == (long *)0x0) goto LAB_1008dd34c;
    lVar3 = 5;
  }
  (**(code **)(*plVar4 + lVar3 * 8))(plVar4);
LAB_1008dd34c:
  func_0x000107c60bd8(lVar2);
  return lVar2;
}



/* Entry: 1008dd354; end: 1008dd357;  */

void FUN_1008dd354(void)

{
  return;
}



/* Entry: 1008dd358; end: 1008dd3b7;  */

undefined8 * FUN_1008dd358(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_2;
  *param_1 = *puVar1;
  *puVar1 = &PTR_PTR_1130a6498;
  uVar2 = *(undefined8 *)param_2[1];
  *(undefined8 *)param_2[1] = &PTR_PTR_1130a64a0;
  param_1[1] = uVar2;
  (**(code **)(PTR_PTR_1130a64a0 + 8))();
  return param_1;
}



/* Entry: 1008dd3b8; end: 1008dd3bb;  */

void FUN_1008dd3b8(void)

{
  return;
}



/* Entry: 1008dd3bc; end: 1008dd447;  */

ulong * FUN_1008dd3bc(ulong *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  
  do {
    uVar3 = *param_1;
    uVar4 = uVar3 + 0x40;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = uVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (param_1[2] < uVar4) {
    FUN_1004bbee0(param_1,0x40);
  }
  else {
    param_1 = (ulong *)((long)param_1 + uVar3 + 0x30);
  }
  *param_1 = (ulong)&PTR_LAB_1107c68a0;
  *(undefined1 *)(param_1 + 1) = 0;
  FUN_1008dd084(param_1 + 4,param_2 + 0x18);
  uVar4 = *(ulong *)(param_2 + 8);
  param_1[3] = *(ulong *)(param_2 + 0x10);
  param_1[2] = uVar4;
  *(undefined ***)(param_2 + 8) = &PTR_PTR_1130a6498;
  *(undefined ***)(param_2 + 0x10) = &PTR_PTR_1130a64a0;
  return param_1;
}



/* Entry: 1008dd448; end: 1008dd49b;  */

long * FUN_1008dd448(long *param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  iVar1 = (int)param_1;
  if (iVar1 == 2) {
    plVar2 = *(long **)(param_4 + 8);
    (**(code **)(*plVar2 + 8))();
    return plVar2;
  }
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      func_0x000107c60ebc();
      func_0x000104bd46a0();
      FUN_1008dd448((long)(char)*param_1,param_1,param_1,param_1);
      return param_1;
    }
    (**(code **)(**(long **)(param_2 + 8) + 8))();
    (**(code **)(**(long **)(param_2 + 0x10) + 8))();
    plVar2 = (long *)(param_2 + 0x18);
    plVar3 = *(long **)(param_2 + 0x30);
    if (plVar3 == plVar2) {
      lVar4 = 4;
    }
    else {
      if (plVar3 == (long *)0x0) {
        return (long *)0x0;
      }
      lVar4 = 5;
      plVar2 = plVar3;
    }
                    /* WARNING: Could not recover jumptable at 0x0001008dd55c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + lVar4 * 8))();
    return plVar2;
  }
  (**(code **)(**(long **)(param_3 + 8) + 8))();
  plVar2 = (long *)(param_3 + 0x18);
  plVar3 = *(long **)(param_3 + 0x30);
  if (plVar3 == plVar2) {
    lVar4 = 4;
  }
  else {
    if (plVar3 == (long *)0x0) {
      return (long *)0x0;
    }
    lVar4 = 5;
    plVar2 = plVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x000104ad19cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar4 * 8))();
  return plVar2;
}



/* Entry: 1008dd49c; end: 1008dd4d3;  */

char * FUN_1008dd49c(char *param_1)

{
  FUN_1008dd448((long)*param_1,param_1,param_1,param_1);
  return param_1;
}



/* Entry: 1008dd4d4; end: 1008dd507;  */

void FUN_1008dd4d4(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  (**(code **)(**(long **)(param_1 + 8) + 8))();
  (**(code **)(**(long **)(param_1 + 0x10) + 8))();
  plVar2 = (long *)(param_1 + 0x18);
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar3 = 5;
    plVar2 = plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001008dd55c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3 * 8))();
  return;
}



/* Entry: 1008dd508; end: 1008dd56f;  */

void FUN_1008dd508(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  (**(code **)(**(long **)(param_1 + 0x10) + 8))();
  plVar2 = (long *)(param_1 + 0x18);
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar3 = 5;
    plVar2 = plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001008dd55c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3 * 8))();
  return;
}



/* Entry: 1008dd570; end: 1008dd61b;  */

undefined1  [16] FUN_1008dd570(long param_1,ulong *param_2,undefined1 *param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  undefined1 **ppuVar6;
  ulong *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  char *pcVar10;
  undefined8 *extraout_x8;
  long *plVar11;
  int *piVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  ulong uStack_c0;
  undefined1 uStack_b1;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined8 *puStack_a0;
  ulong uStack_98;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  ulong uStack_58;
  ulong in_stack_ffffffffffffffb0;
  ulong in_stack_ffffffffffffffb8;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined8 in_stack_ffffffffffffffe0;
  ulong in_stack_ffffffffffffffe8;
  
  iVar4 = (int)param_1;
  if (iVar4 != 2) {
    if (iVar4 == 1) {
      (**(code **)**(undefined8 **)(param_3 + 8))(&stack0xffffffffffffffb0);
      FUN_1008dda80(&ppuStack_70,&stack0xffffffffffffffb0);
      FUN_1008dd99c(&stack0xffffffffffffffb0);
      uVar16 = uStack_58 & 0xffffffff;
      uVar18 = uVar16;
      if ((int)uStack_58 != 0) {
        if ((int)uStack_58 != 1) {
          func_0x000104a71e10();
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1008dd970);
          (*pcVar3)();
        }
        if (ppuStack_70 == (undefined1 **)0x0) {
          pcStack_68 = (code *)0x0;
        }
        else {
          ppuStack_70 = (undefined1 **)0x36;
        }
        puVar8 = &stack0xffffffffffffff78;
        FUN_1008ddae0(puVar8,param_3);
        uVar18 = (ulong)param_3 & 0xffffffff00000000;
        FUN_1008dcf5c(&stack0xffffffffffffff78);
        uVar16 = (ulong)param_3 & 0xffffffff;
        param_3 = puVar8;
      }
      FUN_1008dd99c(&ppuStack_70);
      auVar22._8_8_ = uVar18 | uVar16;
      auVar22._0_8_ = param_3;
      return auVar22;
    }
    if (iVar4 != 0) {
      func_0x000107c60ebc();
      pcVar10 = (char *)(param_1 + 8);
      lVar5 = (long)*pcVar10;
      FUN_1008dd570(lVar5,pcVar10,pcVar10,pcVar10);
      if (((ulong)pcVar10 & 0xfffffffe) != 0) {
        func_0x000104a71e10();
        ppuVar6 = &puStack_40;
        uVar14 = *(undefined8 *)(lVar5 + 8);
        *(undefined8 *)(lVar5 + 8) = 0x36;
        pcStack_38 = (code *)CONCAT44(pcStack_38._4_4_,1);
        *extraout_x8 = uVar14;
        puStack_40 = (undefined1 *)0x36;
        *(undefined4 *)(extraout_x8 + 1) = 1;
        FUN_10047a9b8(&puStack_40);
        auVar20._8_8_ = pcVar10;
        auVar20._0_8_ = ppuVar6;
        return auVar20;
      }
      auVar19._8_8_ = (ulong)pcVar10 & 0xffffffff;
      auVar19._0_8_ = lVar5;
      return auVar19;
    }
    (*(code *)**(undefined8 **)param_2[1])(&puStack_40);
    FUN_10047a8f0(&stack0xffffffffffffffb0,&puStack_40);
    FUN_10047a9b8(&puStack_40);
    puVar15 = (ulong *)(in_stack_ffffffffffffffb8 & 0xffffffff);
    puVar7 = param_2;
    puVar17 = puVar15;
    if ((int)in_stack_ffffffffffffffb8 != 0) {
      if ((int)in_stack_ffffffffffffffb8 != 1) {
        func_0x000104a71e10();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1008dd6d4);
        (*pcVar3)();
      }
      puVar7 = &uStack_58;
      uStack_58 = in_stack_ffffffffffffffb0;
      FUN_1008dd6fc(puVar7,param_2);
      puVar15 = param_2;
      puVar17 = (ulong *)((ulong)param_2 >> 0x20);
      if ((uStack_58 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    FUN_10047a9b8(&stack0xffffffffffffffb0);
    auVar21._8_8_ = (ulong)puVar15 & 0xffffffff | (long)puVar17 << 0x20;
    auVar21._0_8_ = puVar7;
    return auVar21;
  }
  puVar8 = &stack0xffffffffffffffd0;
  (**(code **)**(undefined8 **)(param_4 + 8))();
  puVar9 = (undefined8 *)&stack0xffffffffffffffe0;
  FUN_100616694();
  if ((in_stack_ffffffffffffffe8 & 0xfffffffe) == 0) {
    auVar23._8_8_ = in_stack_ffffffffffffffe8 & 0xffffffff;
    auVar23._0_8_ = in_stack_ffffffffffffffe0;
    return auVar23;
  }
  func_0x000104a71e10();
  pcStack_38 = FUN_1008ddd0c;
  puStack_40 = &stack0xfffffffffffffff0;
  if (*(char *)(puVar9 + 0xc5) != '\0') {
LAB_1008ddd50:
    plVar11 = *(long **)(puVar8 + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *(undefined1 **)(param_3 + 0x18) = puVar8;
    uVar14 = puVar9[0xf];
    puVar8 = param_3 + 0x20;
    *(code **)(param_3 + 0x28) = FUN_1008de290;
    *(undefined1 **)(param_3 + 0x30) = param_3;
    *(undefined8 *)(param_3 + 0x38) = 0;
    uStack_58 = 0;
    FUN_10074775c(uVar14,puVar8,&uStack_58);
    if ((uStack_58 & 1) != 0) {
      FUN_10084dad0();
    }
    auVar24._8_8_ = puVar8;
    auVar24._0_8_ = uStack_58;
    return auVar24;
  }
  if (((param_3[0x10] & 1) == 0) || ((*(byte *)(**(long **)(param_3 + 8) + 1) >> 3 & 1) == 0)) {
    if ((((byte)param_3[0x10] >> 1 & 1) == 0) ||
       ((*(byte *)(*(long *)(*(long *)(param_3 + 8) + 0x18) + 1) >> 3 & 1) == 0))
    goto LAB_1008ddd50;
  }
  else {
    func_0x000107c2c290();
  }
  func_0x000107c2c28c();
  func_0x000104bd46a0();
  FUN_1004bdf74(&uStack_58);
  func_0x000107c60bd8();
  ppuStack_70 = &puStack_40;
  pcStack_68 = FUN_1008dddc8;
  uVar18 = puVar9[0x11];
  uVar16 = puVar9[5];
  if (uVar16 != 0) {
    if ((uVar16 & 1) != 0) {
      piVar12 = (int *)(uVar16 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar2) {
          *piVar12 = *piVar12 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uStack_98 = uVar16;
    func_0x000104a97f00(uVar18,&uStack_98,0);
    if ((uVar16 & 1) != 0) {
      FUN_10084dad0(uVar16);
    }
  }
  if (*(char *)(puVar9 + 6) != '\0') {
    uVar14 = puVar9[7];
    *(undefined8 *)(uVar18 + 0x2d8) = puVar9[8];
    *(undefined8 *)(uVar18 + 0x2d0) = uVar14;
  }
  if (puVar9[0xc] != 0) {
    func_0x0001008dbda0(*(undefined8 *)(uVar18 + 0x10));
  }
  if (puVar9[0xd] != 0) {
    FUN_1005a6208(*(undefined8 *)(uVar18 + 0x10));
  }
  if (puVar9[0xe] != 0 || puVar9[0xf] != 0) {
    func_0x000104a9a3ac(uVar18);
    FUN_1007474b0(uVar18,0x10);
  }
  puVar13 = (undefined8 *)puVar9[1];
  if (puVar13 != (undefined8 *)0x0) {
    puVar9[1] = 0;
    puStack_a0 = puVar13;
    FUN_1008de004(uVar18 + 0x2e0,*(undefined4 *)(puVar9 + 2),&puStack_a0);
    puVar13 = puStack_a0;
    puStack_a0 = (undefined8 *)0x0;
    if (puVar13 != (undefined8 *)0x0) {
      (**(code **)*puVar13)();
    }
  }
  if (puVar9[3] != 0) {
    func_0x000104add5ec(uVar18 + 0x2e0);
  }
  uVar16 = puVar9[4];
  if (uVar16 != 0) {
    if ((uVar16 & 1) != 0) {
      piVar12 = (int *)(uVar16 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar2) {
          *piVar12 = *piVar12 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uStack_a8 = uVar16;
    func_0x000104a97f00(uVar18,&uStack_a8,1);
    if ((uVar16 & 1) != 0) {
      FUN_10084dad0(uVar16);
    }
    uStack_b0 = puVar9[4];
    if ((uStack_b0 & 1) != 0) {
      piVar12 = (int *)(uStack_b0 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar2) {
          *piVar12 = *piVar12 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    func_0x000104a98258(uVar18,&uStack_b0);
    if ((uStack_b0 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  uVar14 = *puVar9;
  uStack_c0 = 0;
  FUN_1004bd7e8(&uStack_b1,uVar14,&uStack_c0);
  uVar16 = uStack_c0;
  if ((uStack_c0 & 1) != 0) {
    FUN_10084dad0();
  }
  plVar11 = (long *)(uVar18 + 8);
  do {
    lVar5 = *plVar11;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar2) {
      *plVar11 = lVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if ((uVar18 != 0) && (lVar5 == 1)) {
    func_0x000104a96f9c(uVar18);
    func_0x000107c60e14();
    uVar16 = uVar18;
  }
  auVar25._8_8_ = uVar14;
  auVar25._0_8_ = uVar16;
  return auVar25;
}



/* Entry: 1008dd61c; end: 1008dd6fb;  */

undefined1  [16] FUN_1008dd61c(ulong *param_1)

{
  code *pcVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  ulong uStack_58;
  ulong uStack_50;
  int iStack_48;
  undefined1 auStack_40 [16];
  
  (*(code *)**(undefined8 **)param_1[1])(auStack_40);
  FUN_10047a8f0(&uStack_50,auStack_40);
  FUN_10047a9b8(auStack_40);
  if (iStack_48 == 0) {
    puVar3 = (ulong *)0x0;
    uVar4 = 0;
    puVar2 = param_1;
  }
  else {
    if (iStack_48 != 1) {
      func_0x000104a71e10();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008dd6d4);
      (*pcVar1)();
    }
    uStack_58 = uStack_50;
    uStack_50 = 0x36;
    puVar2 = &uStack_58;
    FUN_1008dd6fc(puVar2,param_1);
    uVar4 = (ulong)param_1 >> 0x20;
    puVar3 = param_1;
    if ((uStack_58 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  FUN_10047a9b8(&uStack_50);
  auVar5._8_8_ = (ulong)puVar3 & 0xffffffff | uVar4 << 0x20;
  auVar5._0_8_ = puVar2;
  return auVar5;
}



/* Entry: 1008dd6fc; end: 1008dd747;  */

void FUN_1008dd6fc(long *param_1,undefined8 param_2)

{
  undefined1 auStack_20 [8];
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  if (*param_1 == 0) {
    FUN_1008dd74c(&uStack_18,param_1);
  }
  else {
    func_0x000104a91cc8(auStack_20,param_1);
  }
  return;
}


