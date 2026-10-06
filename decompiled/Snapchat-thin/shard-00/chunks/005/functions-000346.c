/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10073f670; end: 10073f73f;  */

void FUN_10073f670(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_29;
  undefined8 *puStack_28;
  
  puVar2 = &uStack_60;
  FUN_10073f5e8(param_2,"ssl_alpn_selected_protocol");
  if (param_2 == 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_48 = 0;
    puVar2 = &uStack_48;
    func_0x000104ab5920(param_1,2,"Cannot check peer: missing selected ALPN property.",0x32,
                        &uStack_29,&uStack_48);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 8);
    FUN_10073f91c(uVar1,*(undefined8 *)(param_2 + 0x10));
    if ((int)uVar1 != 0) {
      *param_1 = 0;
      return;
    }
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    func_0x000104ab5920(param_1,2,"Cannot check peer: invalid ALPN value.",0x26,&uStack_29,
                        &uStack_60);
  }
  puStack_28 = puVar2;
  func_0x000100482b64(&puStack_28);
  return;
}



/* Entry: 10073f740; end: 10073f91b;  */

ulong FUN_10073f740(ulong *param_1,long param_2,char ***param_3,undefined8 *param_4)

{
  bool bVar1;
  char ***pppcVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  long lVar6;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_101;
  char **ppcStack_100;
  ulong uStack_f8;
  byte bStack_e9;
  ulong uStack_e8;
  undefined1 *puStack_e0;
  char *pcStack_d8;
  undefined8 uStack_d0;
  long lStack_a8;
  long lStack_a0;
  char *pcStack_78;
  undefined8 uStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppcVar2 = param_3;
  FUN_10073f670(&uStack_e8,param_3);
  if (uStack_e8 == 0) {
    if (param_2 != 0) {
      lVar6 = param_2;
      func_0x000107c613d0(param_2);
      pppcVar2 = param_3;
      func_0x00010073f980(param_3,param_2,lVar6);
      if ((int)pppcVar2 == 0) {
        pcStack_78 = "Peer name ";
        uStack_70 = 10;
        lVar6 = param_2;
        func_0x000107c613d0();
        pcStack_d8 = " is not in peer certificate";
        uStack_d0 = 0x1b;
        lStack_a8 = param_2;
        lStack_a0 = lVar6;
        FUN_100066c24(&ppcStack_100,&pcStack_78,&lStack_a8,&pcStack_d8);
        pppcVar2 = (char ***)ppcStack_100;
        if (-1 < (char)bStack_e9) {
          uStack_f8 = (ulong)bStack_e9;
          pppcVar2 = &ppcStack_100;
        }
        uStack_118 = 0;
        uStack_110 = 0;
        uStack_120 = 0;
        func_0x000104ab5920(param_1,2,pppcVar2,uStack_f8,&uStack_101,&uStack_120);
        puStack_e0 = (undefined1 *)&uStack_120;
        func_0x000100482b64(&puStack_e0);
        param_4 = &uStack_120;
        if ((char)bStack_e9 < '\0') {
          func_0x000107c60e14(ppcStack_100);
          param_4 = &uStack_120;
        }
        goto LAB_10073f7e8;
      }
    }
    FUN_10073fe30(&pcStack_78,param_3,"ssl");
    pppcVar2 = (char ***)&pcStack_78;
    FUN_1007407ec(param_4,pppcVar2);
    FUN_1007402ac(&pcStack_78);
    *param_1 = 0;
  }
  else {
    *param_1 = uStack_e8;
    uStack_e8 = 0x36;
  }
LAB_10073f7e8:
  uVar3 = uStack_e8;
  if ((uStack_e8 & 1) != 0) {
    FUN_10084dad0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return uVar3;
  }
  func_0x000107c60e78();
  puStack_e0 = (undefined1 *)param_4;
  func_0x000100482b64(&puStack_e0);
  if ((char)bStack_e9 < '\0') {
    func_0x000107c60e14(ppcStack_100);
  }
  FUN_1004bdf74(&uStack_e8);
  func_0x000107c60bd8();
  lVar6 = 0;
  bVar5 = false;
  do {
    uVar4 = uVar3;
    func_0x000107c613d4(uVar3,(&PTR_s_grpc_exp_1107c3f80)[lVar6],pppcVar2);
    if ((int)uVar4 == 0) break;
    lVar6 = 1;
    bVar1 = !bVar5;
    bVar5 = true;
  } while (bVar1);
  return (ulong)((int)uVar4 == 0);
}



/* Entry: 10073f91c; end: 10073fa17;  */

bool FUN_10073f91c(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = 0;
  bVar3 = false;
  do {
    uVar2 = param_1;
    func_0x000107c613d4(param_1,(&PTR_s_grpc_exp_1107c3f80)[lVar4],param_2);
    if ((int)uVar2 == 0) break;
    lVar4 = 1;
    bVar1 = !bVar3;
    bVar3 = true;
  } while (bVar1);
  return (int)uVar2 == 0;
}



/* Entry: 10073fa18; end: 10073fc03;  */

undefined8 FUN_10073fa18(long *param_1,byte *param_2,ulong param_3)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  byte *pbVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  byte bVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  uint uStack_64;
  
  if (param_3 == 0) {
    uStack_64 = 0;
  }
  else {
    bVar9 = *param_2;
    if (bVar9 == 0x3a) {
      uVar6 = 0;
      uVar7 = 0;
      bVar2 = true;
    }
    else {
      uVar6 = 0;
      uVar7 = 0;
      uVar8 = 1;
      bVar2 = true;
      do {
        if ((char)bVar9 < '0') {
          if (((bVar9 != 0x2e) || (3 < uVar6)) || (uVar7 == 0)) goto LAB_10073fadc;
          uVar7 = 0;
          uVar6 = uVar6 + 1;
        }
        else {
          if ((0x39 < bVar9) || (3 < uVar7)) {
LAB_10073fadc:
            uVar8 = 0;
            goto LAB_10073fae4;
          }
          uVar7 = uVar7 + 1;
        }
        bVar2 = uVar8 < param_3;
        if (param_3 == uVar8) goto LAB_10073fae4;
        bVar9 = param_2[uVar8];
        uVar8 = uVar8 + 1;
      } while (bVar9 != 0x3a);
    }
    uVar8 = 1;
LAB_10073fae4:
    uStack_64 = (uint)uVar8;
    if (!bVar2) {
      uStack_64 = (uint)(2 < uVar6 && uVar7 != 0);
    }
  }
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    lVar15 = 0;
    uVar6 = 0;
    lVar14 = 0;
    plVar12 = (long *)0x0;
    do {
      lVar10 = *param_1;
      plVar1 = (long *)(lVar10 + lVar15);
      lVar11 = *plVar1;
      plVar13 = plVar12;
      if (lVar11 != 0) {
        lVar3 = lVar11;
        func_0x000107c613c0(lVar11,"x509_subject_alternative_name");
        if ((int)lVar3 == 0) {
          lVar14 = lVar14 + 1;
          lVar10 = lVar10 + lVar15;
          uVar5 = *(undefined8 *)(lVar10 + 8);
          uVar8 = *(ulong *)(lVar10 + 0x10);
          if (uStack_64 == 0) {
            FUN_10073fc04(uVar5,uVar8,param_2,param_3);
            if ((int)uVar5 != 0) {
              return 1;
            }
            uVar7 = param_1[1];
          }
          else if ((param_3 == uVar8) &&
                  (pbVar4 = param_2, func_0x000107c610b0(param_2,uVar5), (int)pbVar4 == 0)) {
            return 1;
          }
        }
        else {
          func_0x000107c613c0(lVar11,"x509_subject_common_name");
          plVar13 = plVar1;
          if ((int)lVar11 != 0) {
            plVar13 = plVar12;
          }
        }
      }
      uVar6 = uVar6 + 1;
      lVar15 = lVar15 + 0x18;
      plVar12 = plVar13;
    } while (uVar6 < uVar7);
    if (((lVar14 == 0) && (plVar13 != (long *)0x0)) && (uStack_64 == 0)) {
      lVar15 = plVar13[1];
      FUN_10073fc04(lVar15,plVar13[2],param_2,param_3);
      if ((int)lVar15 != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 10073fc04; end: 10073fdd7;  */

byte * FUN_10073fc04(char *param_1,ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  byte *pbVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  undefined8 auStack_58 [2];
  char cStack_41;
  byte *pbStack_40;
  long lStack_38;
  
  if (param_2 != 0) {
    uVar7 = param_2 - 1;
    if ((param_1[uVar7] != '.') || (param_2 = uVar7, uVar7 != 0)) {
      pbVar8 = (byte *)(param_4 - (ulong)(*(char *)(param_4 + param_3 + -1) == '.'));
      uVar7 = param_3;
      uVar4 = param_2;
      FUN_10073fdd8(param_3,pbVar8,param_1);
      if ((uVar7 & 1) != 0) {
        return (byte *)0x1;
      }
      if (*param_1 == '*') {
        if ((param_2 < 3) || (param_1[1] != '.')) {
          FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                        ,0x74f,2,"Invalid wildchar entry.");
        }
        else if (pbVar8 != (byte *)0x0) {
          uVar7 = 0x2e;
          uVar2 = param_3;
          pbVar3 = pbVar8;
          func_0x000107c610ac();
          pbVar5 = (byte *)(uVar2 - param_3);
          if ((uVar2 != 0 && pbVar5 != (byte *)0xffffffffffffffff) && pbVar5 < pbVar8 + -2) {
            if (pbVar8 <= pbVar5) {
              pbVar8 = &UNK_10f2fca6e;
              func_0x000104a6f9e8();
              if (cStack_41 < '\0') {
                func_0x000107c60e14(auStack_58[0]);
              }
              func_0x000107c60bd8();
              if (uVar7 == uVar4) {
                if (uVar7 == 0) {
                  pbVar5 = (byte *)0x1;
                }
                else {
                  do {
                    uVar7 = uVar7 - 1;
                    pbVar5 = (byte *)(ulong)((&UNK_10e52cb36)[*pbVar8] == (&UNK_10e52cb36)[*pbVar3])
                    ;
                    if ((&UNK_10e52cb36)[*pbVar8] != (&UNK_10e52cb36)[*pbVar3]) {
                      return pbVar5;
                    }
                    pbVar8 = pbVar8 + 1;
                    pbVar3 = pbVar3 + 1;
                  } while (uVar7 != 0);
                }
              }
              else {
                pbVar5 = (byte *)0x0;
              }
              return pbVar5;
            }
            pbVar3 = pbVar5 + 1 + param_3;
            lVar1 = (long)pbVar8 - (long)(pbVar5 + 1);
            pbStack_40 = pbVar3;
            lStack_38 = lVar1;
            if (lVar1 != 0) {
              pbVar8 = pbVar3;
              func_0x000107c610ac(pbVar3,0x2e,lVar1);
              if ((pbVar8 != (byte *)0x0 && (long)pbVar8 - (long)pbVar3 != -1) &&
                 (lVar6 = lVar1 + -1, (long)pbVar8 - (long)pbVar3 != lVar6)) {
                if (pbVar3[lVar6] != 0x2e) {
                  lVar6 = lVar1;
                }
                FUN_10073fdd8(pbVar3,lVar6,param_1 + 2,param_2 - 2);
                return pbVar3;
              }
            }
            func_0x000107c34ef8(auStack_58,&pbStack_40);
            FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                          ,0x75a,2,"Invalid toplevel subdomain: %s");
            if (cStack_41 < '\0') {
              func_0x000107c60e14(auStack_58[0]);
            }
          }
        }
      }
    }
  }
  return (byte *)0x0;
}



/* Entry: 10073fdd8; end: 10073fe2f;  */

bool FUN_10073fdd8(byte *param_1,long param_2,byte *param_3,long param_4)

{
  bool bVar1;
  
  if (param_2 == param_4) {
    if (param_2 == 0) {
      bVar1 = true;
    }
    else {
      do {
        param_2 = param_2 + -1;
        bVar1 = (&UNK_10e52cb36)[*param_1] == (&UNK_10e52cb36)[*param_3];
        if (!bVar1) {
          return bVar1;
        }
        param_1 = param_1 + 1;
        param_3 = param_3 + 1;
      } while (param_2 != 0);
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 10073fe30; end: 1007402ab;  */

void FUN_10073fe30(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  bool bVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  long lVar11;
  char *pcVar12;
  ulong uVar13;
  long lStack_c0;
  long lStack_b8;
  int iStack_ac;
  long *plStack_98;
  ulong uStack_90;
  undefined1 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 uStack_61;
  
  if (param_2[1] == 0) {
    func_0x000107c2c3d4();
  }
  else {
    puVar3 = (undefined8 *)0x30;
    func_0x000107c60e20();
    *puVar3 = 1;
    puVar3[1] = 0;
    lStack_80 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    *param_1 = puVar3;
    FUN_1007402ac(&lStack_80);
    FUN_1007402dc(puVar3,"transport_security_type",param_3);
    if (param_2[1] == 0) {
      return;
    }
    lVar9 = 0;
    uVar13 = 0;
    bVar1 = false;
    iStack_ac = 0;
    lStack_c0 = 0;
    lStack_b8 = 0;
    pcVar12 = (char *)0x0;
    do {
      lVar11 = *param_2;
      lVar8 = *(long *)(lVar11 + lVar9);
      pcVar10 = pcVar12;
      if (lVar8 != 0) {
        lVar4 = lVar8;
        func_0x000107c613c0(lVar8,"x509_subject");
        if ((int)lVar4 == 0) {
          pcVar10 = "x509_subject";
          goto LAB_100740008;
        }
        lVar4 = lVar8;
        func_0x000107c613c0(lVar8,"x509_subject_common_name");
        pcVar10 = "x509_subject_alternative_name";
        if ((int)lVar4 == 0) {
          pcVar10 = "x509_common_name";
          if (pcVar12 != (char *)0x0) {
            pcVar10 = pcVar12;
          }
          FUN_100740398(puVar3,"x509_common_name",*(undefined8 *)(lVar11 + lVar9 + 8),
                        *(undefined8 *)(lVar11 + lVar9 + 0x10));
        }
        else {
          lVar4 = lVar8;
          func_0x000107c613c0(lVar8,"x509_subject_alternative_name");
          if ((int)lVar4 == 0) {
            FUN_100740398(puVar3,"x509_subject_alternative_name",*(undefined8 *)(lVar11 + lVar9 + 8)
                          ,*(undefined8 *)(lVar11 + lVar9 + 0x10));
          }
          else {
            lVar4 = lVar8;
            func_0x000107c613c0(lVar8,"x509_pem_cert");
            pcVar10 = "x509_pem_cert";
            if ((int)lVar4 != 0) {
              pcVar10 = "x509_pem_cert_chain";
              lVar4 = lVar8;
              func_0x000107c613c0(lVar8,"x509_pem_cert_chain");
              if ((int)lVar4 != 0) {
                pcVar10 = "ssl_session_reused";
                lVar4 = lVar8;
                func_0x000107c613c0(lVar8,"ssl_session_reused");
                if ((int)lVar4 != 0) {
                  pcVar10 = "security_level";
                  lVar4 = lVar8;
                  func_0x000107c613c0(lVar8,"security_level");
                  if ((int)lVar4 != 0) {
                    lVar4 = lVar8;
                    func_0x000107c613c0(lVar8,"x509_dns");
                    if ((int)lVar4 == 0) {
                      pcVar10 = "peer_dns";
                    }
                    else {
                      lVar4 = lVar8;
                      func_0x000107c613c0(lVar8,"x509_uri");
                      if ((int)lVar4 == 0) {
                        lVar11 = lVar11 + lVar9;
                        FUN_100740398(puVar3,"peer_uri",*(undefined8 *)(lVar11 + 8),
                                      *(undefined8 *)(lVar11 + 0x10));
                        iStack_ac = iStack_ac + 1;
                        uVar6 = *(ulong *)(lVar11 + 0x10);
                        pcVar10 = pcVar12;
                        if ((8 < uVar6) &&
                           (plVar7 = *(long **)(lVar11 + 8),
                           *plVar7 == 0x2f3a656666697073 && (char)plVar7[1] == '/')) {
                          if (uVar6 < 0x801) {
                            uStack_88 = 0x2f;
                            plStack_98 = plVar7;
                            uStack_90 = uVar6;
                            func_0x000107c34bdc(&lStack_80,&uStack_61,&plStack_98);
                            if (((ulong)(lStack_78 - lStack_80) < 0x40) ||
                               (*(long *)(lStack_80 + 0x38) == 0)) {
                              uVar5 = 0xfb;
                              pcVar10 = "Invalid SPIFFE ID: workload id is empty.";
                            }
                            else {
                              if (*(ulong *)(lStack_80 + 0x28) < 0x100) {
                                lStack_78 = lStack_80;
                                func_0x000107c60e14();
                                lStack_b8 = *(long *)(lVar11 + 8);
                                lStack_c0 = *(long *)(lVar11 + 0x10);
                                bVar1 = true;
                                goto LAB_100740018;
                              }
                              uVar5 = 0xff;
                              pcVar10 = "Invalid SPIFFE ID: domain longer than 255 characters.";
                            }
                            FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/security_connector/ssl_utils.cc"
                                          ,uVar5,1,pcVar10);
                            pcVar10 = pcVar12;
                            if (lStack_80 != 0) {
                              lStack_78 = lStack_80;
                              func_0x000107c60e14();
                            }
                          }
                          else {
                            FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/security_connector/ssl_utils.cc"
                                          ,0xf6,1,"Invalid SPIFFE ID: ID longer than 2048 bytes.");
                          }
                        }
                        goto LAB_100740018;
                      }
                      lVar4 = lVar8;
                      func_0x000107c613c0(lVar8,"x509_email");
                      if ((int)lVar4 == 0) {
                        pcVar10 = "peer_email";
                      }
                      else {
                        func_0x000107c613c0(lVar8,"x509_ip");
                        pcVar10 = pcVar12;
                        if ((int)lVar8 != 0) goto LAB_100740018;
                        pcVar10 = "peer_ip";
                      }
                    }
                  }
                }
              }
            }
LAB_100740008:
            FUN_100740398(puVar3,pcVar10,*(undefined8 *)(lVar11 + lVar9 + 8),
                          *(undefined8 *)(lVar11 + lVar9 + 0x10));
            pcVar10 = pcVar12;
          }
        }
      }
LAB_100740018:
      uVar13 = uVar13 + 1;
      lVar9 = lVar9 + 0x18;
      pcVar12 = pcVar10;
    } while (uVar13 < (ulong)param_2[1]);
    if ((pcVar10 == (char *)0x0) || (func_0x000100740670(puVar3,pcVar10), (int)puVar3 == 1)) {
      if (!bVar1) {
        return;
      }
      if (iStack_ac != 1) {
        FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/security_connector/ssl_utils.cc"
                      ,0x15a,1,"Invalid SPIFFE ID: multiple URI SANs.");
        return;
      }
      if (lStack_c0 == 0) {
        uVar5 = 0x154;
      }
      else {
        if (lStack_b8 != 0) {
          FUN_100740398(*param_1,"peer_spiffe_id");
          return;
        }
        uVar5 = 0x155;
      }
      goto LAB_100740248;
    }
  }
  uVar5 = 0x14f;
LAB_100740248:
  FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/security_connector/ssl_utils.cc"
                ,uVar5,2,"assertion failed: %s");
  func_0x000107c60ebc();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10074026c);
  (*pcVar2)();
}



/* Entry: 1007402ac; end: 1007402db;  */

long * FUN_1007402ac(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000104acd8cc();
  }
  return param_1;
}



/* Entry: 1007402dc; end: 1007402df;  */

void FUN_1007402dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  FUN_1007402e0();
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = lVar1 + 1;
  puVar3 = (undefined8 *)(*(long *)(param_1 + 0x10) + lVar1 * 0x18);
  FUN_1004601ac();
  *puVar3 = param_2;
  uVar2 = param_3;
  FUN_1004601ac();
  puVar3[1] = uVar2;
  func_0x000107c613d0();
  puVar3[2] = param_3;
  return;
}



/* Entry: 1007402e0; end: 10074032f;  */

void FUN_1007402e0(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x20)) {
    uVar1 = lVar2 + 8U;
    if (lVar2 + 8U <= (ulong)(lVar2 * 2)) {
      uVar1 = lVar2 << 1;
    }
    *(ulong *)(param_1 + 0x20) = uVar1;
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    FUN_1004689e4(uVar3,uVar1 * 0x18);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
  }
  return;
}



/* Entry: 100740330; end: 100740397;  */

void FUN_100740330(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  FUN_1007402e0();
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = lVar1 + 1;
  puVar3 = (undefined8 *)(*(long *)(param_1 + 0x10) + lVar1 * 0x18);
  FUN_1004601ac();
  *puVar3 = param_2;
  uVar2 = param_3;
  FUN_1004601ac();
  puVar3[1] = uVar2;
  func_0x000107c613d0();
  puVar3[2] = param_3;
  return;
}



/* Entry: 100740398; end: 10074039b;  */

void FUN_100740398(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  FUN_1007402e0();
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  puVar4 = (undefined8 *)(lVar1 + lVar2 * 0x18);
  FUN_1004601ac();
  *puVar4 = param_2;
  lVar3 = param_4 + 1;
  FUN_100460200();
  plVar5 = puVar4 + 1;
  *plVar5 = lVar3;
  if (param_3 != 0) {
    func_0x000107c610b4();
    lVar3 = *plVar5;
  }
  *(undefined1 *)(lVar3 + param_4) = 0;
  *(long *)(lVar1 + lVar2 * 0x18 + 0x10) = param_4;
  return;
}



/* Entry: 10074039c; end: 100740427;  */

void FUN_10074039c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  FUN_1007402e0();
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  puVar4 = (undefined8 *)(lVar1 + lVar2 * 0x18);
  FUN_1004601ac();
  *puVar4 = param_2;
  lVar3 = param_4 + 1;
  FUN_100460200();
  plVar5 = puVar4 + 1;
  *plVar5 = lVar3;
  if (param_3 != 0) {
    func_0x000107c610b4();
    lVar3 = *plVar5;
  }
  *(undefined1 *)(lVar3 + param_4) = 0;
  *(long *)(lVar1 + lVar2 * 0x18 + 0x10) = param_4;
  return;
}



/* Entry: 100740428; end: 10074044b;  */

void FUN_100740428(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10074044c; end: 100740457;  */

void FUN_10074044c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  FUN_100740458(0);
  func_0x000107c615f0(uVar2);
  func_0x000107c610f8(uVar1);
  func_0x000107c6157c();
  FUN_1007404f4();
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100740458; end: 100740477;  */

void FUN_100740458(void)

{
  func_0x000107c61168(&PTR_PTR_112801900);
  return;
}



/* Entry: 100740478; end: 1007404f3;  */

void FUN_100740478(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  FUN_100740458(0);
  func_0x000107c615f0(uVar2);
  func_0x000107c610f8(uVar1);
  func_0x000107c6157c();
  FUN_1007404f4();
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1007404f4; end: 10074055f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007404f4(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112e1c5a8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e1c5b0) = param_2;
  *(undefined4 *)(unaff_x20 + _DAT_112e1c5b8) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_112e1c5c0) = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_112e1c5c8) = param_5;
  FUN_100740458();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100740560; end: 1007405f3; -[_TtC21LensConfigurationImpl23LensDebugConfigProvider boolValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_100740560(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  FUN_1007405f4(0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112e1c5b0);
  func_0x000107c3ebd4(uVar1,param_2,param_3,param_4,param_5);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 1007405f4; end: 100740703;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007405f4(char param_1)

{
  long unaff_x20;
  long lStack_28;
  
  if (((*(char *)(unaff_x20 + _DAT_112e1c5c8) == '\x01') &&
      (*(char *)(unaff_x20 + _DAT_112e1c5c0) == '\x01' && param_1 == '\x01')) &&
     (FUN_1000d224c(&lStack_28), lStack_28 != 0)) {
    func_0x000107c49a44(lStack_28);
    func_0x000107c61170(lStack_28);
  }
  return;
}



/* Entry: 100740704; end: 1007407eb;  */

long * FUN_100740704(long *param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  plVar1 = (long *)0x0;
  if (param_1 != (long *)0x0) {
    lVar5 = *param_1;
    if (lVar5 == 0) {
LAB_1007407a8:
      plVar1 = (long *)0x0;
    }
    else {
      uVar6 = param_1[1];
      plVar1 = param_1;
      while( true ) {
        uVar3 = *(ulong *)(lVar5 + 0x18);
        if (uVar6 == uVar3) {
          do {
            lVar5 = *(long *)(lVar5 + 8);
            if (lVar5 == 0) goto LAB_1007407a8;
            *param_1 = lVar5;
            param_1[1] = 0;
            uVar3 = *(ulong *)(lVar5 + 0x18);
          } while (uVar3 == 0);
          uVar6 = 0;
        }
        plVar4 = (long *)param_1[2];
        if (plVar4 == (long *)0x0) break;
        if (uVar3 <= uVar6) {
          uVar3 = uVar6;
        }
        lVar7 = uVar6 * 0x18;
        while (uVar3 != uVar6) {
          lVar8 = *(long *)(lVar5 + 0x10);
          uVar6 = uVar6 + 1;
          param_1[1] = uVar6;
          plVar2 = *(long **)(lVar8 + lVar7);
          if (plVar2 == (long *)0x0) {
            func_0x000107c2c3b4();
            lVar5 = *plVar2;
            if (*plVar1 != 0) {
              func_0x000104acd8cc();
            }
            *plVar1 = lVar5;
            *plVar2 = 0;
            return plVar1;
          }
          plVar1 = plVar4;
          func_0x000107c613c0();
          lVar7 = lVar7 + 0x18;
          if ((int)plVar1 == 0) {
            return (long *)(lVar8 + lVar7 + -0x18);
          }
        }
        plVar1 = (long *)0x0;
        if (lVar5 == 0) {
          return (long *)0x0;
        }
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      param_1[1] = uVar6 + 1;
      plVar1 = (long *)(lVar5 + uVar6 * 0x18);
    }
  }
  return plVar1;
}



/* Entry: 1007407ec; end: 100740833;  */

long * FUN_1007407ec(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (*param_1 != 0) {
    func_0x000104acd8cc();
  }
  *param_1 = lVar1;
  *param_2 = 0;
  return param_1;
}



/* Entry: 100740834; end: 10074086f;  */

void FUN_100740834(long *param_1)

{
  if (*param_1 != 0) {
    FUN_100460314();
  }
  if (param_1[1] != 0) {
    FUN_100460314();
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 100740870; end: 1007408cf;  */

void FUN_100740870(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 != (long *)0x0) {
    lVar2 = *param_1;
    if (lVar2 != 0) {
      lVar1 = lVar2;
      for (lVar3 = param_1[1]; lVar3 != 0; lVar3 = lVar3 + -1) {
        FUN_100740834(lVar1);
        lVar1 = lVar1 + 0x18;
      }
      FUN_100460314(lVar2);
      *param_1 = 0;
    }
    param_1[1] = 0;
  }
  return;
}



/* Entry: 1007408d0; end: 100740f3b;  */

void FUN_1007408d0(long ****param_1,undefined8 *param_2)

{
  long ****pppplVar1;
  long ****pppplVar2;
  long *plVar3;
  undefined8 ****ppppuVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  long **pplVar9;
  int *piVar10;
  long ***ppplVar11;
  long lVar12;
  long ****pppplVar13;
  long **pplVar14;
  long *plVar15;
  long ***ppplStack_118;
  undefined1 uStack_109;
  undefined1 auStack_108 [8];
  long *plStack_100;
  int iStack_f4;
  ulong uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long *aplStack_d8 [4];
  long ***ppplStack_b8;
  undefined8 ***pppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long ***ppplStack_70;
  undefined8 ***pppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppplVar13 = (long ****)*param_2;
  if (((ulong)pppplVar13 & 1) != 0) {
    piVar10 = (int *)((long)pppplVar13 + -1);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar7) {
        *piVar10 = *piVar10 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  pppplVar1 = param_1 + 4;
  ppplStack_118 = (long ***)pppplVar13;
  FUN_100460448(pppplVar1);
  if (pppplVar13 == (long ****)0x0) {
    if (*(char *)(param_1 + 0xc) == '\0') {
      lStack_e8 = 0;
      uStack_e0 = 0;
      ppplVar11 = param_1[0x45];
      FUN_100740f3c(ppplVar11,&uStack_e0,&lStack_e8);
      if ((int)ppplVar11 == 0) {
        ppplVar11 = param_1[0x45];
        func_0x000100740f8c(ppplVar11,&iStack_f4);
        if ((int)ppplVar11 == 0) {
          uStack_f0 = 0;
          plStack_100 = (long *)0x0;
          if (iStack_f4 - 1U < 2) {
            ppplVar11 = param_1[0x45];
            pppplVar13 = (long ****)0x0;
            if (param_1[0x46] != (long ***)0x0) {
              pppplVar13 = param_1 + 0x46;
            }
            func_0x000104ae1be0(ppplVar11,pppplVar13,&uStack_f0);
            if ((int)ppplVar11 != 0) {
              pppuStack_b0 = (undefined8 ****)0x0;
              uStack_a8 = 0;
              ppplStack_b8 = (long ***)0x0;
              func_0x000104ab5920(auStack_108,2,"Zero-copy frame protector creation failed",0x29,
                                  &uStack_109,&ppplStack_b8);
              func_0x000104ad56e4(aplStack_d8,auStack_108,ppplVar11);
              func_0x000104ad2400(param_1,aplStack_d8);
LAB_100740b54:
              FUN_1004bdf74(aplStack_d8);
              FUN_1004bdf74(auStack_108);
              goto LAB_100740b64;
            }
          }
          else if (iStack_f4 == 0) {
            ppplVar11 = param_1[0x45];
            pppplVar13 = (long ****)0x0;
            if (param_1[0x46] != (long ***)0x0) {
              pppplVar13 = param_1 + 0x46;
            }
            func_0x000100740fc4(ppplVar11,pppplVar13,&plStack_100);
            if ((int)ppplVar11 != 0) {
              pppuStack_b0 = (undefined8 ****)0x0;
              uStack_a8 = 0;
              ppplStack_b8 = (long ***)0x0;
              func_0x000104ab5920(auStack_108,2,"Frame protector creation failed",0x1f,&uStack_109,
                                  &ppplStack_b8);
              func_0x000104ad56e4(aplStack_d8,auStack_108,ppplVar11);
              func_0x000104ad2400(param_1,aplStack_d8);
              goto LAB_100740b54;
            }
          }
          bVar7 = uStack_f0 == 0;
          bVar8 = (long **)plStack_100 == (long **)0x0;
          if (uStack_f0 == 0 && (long **)plStack_100 == (long **)0x0) {
            if (lStack_e8 != 0) {
              FUN_1004b6808(&ppplStack_b8,uStack_e0);
              pppuStack_68 = pppuStack_b0;
              ppplStack_70 = ppplStack_b8;
              uStack_58 = uStack_a0;
              uStack_60 = uStack_a8;
              FUN_1005a70c4(param_1[0xf][2],&ppplStack_70);
            }
          }
          else if (lStack_e8 == 0) {
            pplVar14 = (long **)plStack_100;
            FUN_1007410c8(plStack_100,uStack_f0,*param_1[0xf],0,param_1[0xf][1],0);
            *param_1[0xf] = pplVar14;
          }
          else {
            FUN_1004b6808(&ppplStack_b8,uStack_e0);
            pplVar14 = (long **)plStack_100;
            FUN_1007410c8(plStack_100,uStack_f0,*param_1[0xf],&ppplStack_b8,param_1[0xf][1],1);
            *param_1[0xf] = pplVar14;
            if ((long ****)0x1 < ppplStack_b8) {
              do {
                ppplVar11 = (long ***)*ppplStack_b8;
                cVar6 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(ppplStack_b8,0x10);
                if (bVar5) {
                  *ppplStack_b8 = (long **)((long)ppplVar11 + -1);
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if ((long ***)((long)ppplVar11 + -1) == (long ***)0x0) {
                (*(code *)ppplStack_b8[1])();
              }
            }
          }
          FUN_1007417bc(param_1[0x45]);
          param_1[0x45] = (long ***)0x0;
          func_0x000100741818(aplStack_d8,param_1[0x44]);
          FUN_1004c9a58(&ppplStack_b8,aplStack_d8,&ppplStack_b8,auStack_108);
          if (bVar7 && bVar8) {
            plVar15 = (long *)0x0;
          }
          else {
            FUN_100741830(aplStack_d8,param_1[0x44]);
            FUN_100741e60(aplStack_d8,aplStack_d8[0]);
            func_0x0001004c9af4(&ppplStack_b8,aplStack_d8);
            plVar15 = aplStack_d8[0];
          }
          pplVar14 = param_1[0xf][1];
          ppppuVar4 = &pppuStack_b0;
          if (((ulong)ppplStack_b8 & 1) != 0) {
            ppppuVar4 = (undefined8 ****)pppuStack_b0;
          }
          pplVar9 = pplVar14;
          FUN_1004c87a4(pplVar14,ppppuVar4,(ulong)ppplStack_b8 >> 1);
          param_1[0xf][1] = pplVar9;
          FUN_10048650c(pplVar14);
          aplStack_d8[0] = (long *)0x0;
          FUN_1004bd7e8(auStack_108,param_1[0x10],aplStack_d8);
          FUN_1004bdf74(aplStack_d8);
          *(undefined1 *)(param_1 + 0xc) = 1;
          if (plVar15 != (long *)0x0) {
            plVar3 = plVar15 + 1;
            do {
              lVar12 = *plVar3;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar7) {
                *plVar3 = lVar12 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (lVar12 + -1 == 0) {
              (**(code **)(*plVar15 + 8))(plVar15);
            }
          }
          if (((ulong)ppplStack_b8 & 1) != 0) {
            func_0x000107c60e14(pppuStack_b0);
          }
          goto LAB_100740b74;
        }
        pppuStack_b0 = (undefined8 ****)0x0;
        uStack_a8 = 0;
        ppplStack_b8 = (long ***)0x0;
        func_0x000104ab5920(&uStack_f0,2,
                            "TSI handshaker result does not implement get_frame_protector_type",0x41
                            ,&plStack_100,&ppplStack_b8);
        func_0x000104ad56e4(aplStack_d8,&uStack_f0,ppplVar11);
        func_0x000104ad2400(param_1,aplStack_d8);
        if (((ulong)aplStack_d8[0] & 1) != 0) {
          FUN_10084dad0();
        }
        if ((uStack_f0 & 1) != 0) {
          FUN_10084dad0();
        }
      }
      else {
        pppuStack_b0 = (undefined8 ****)0x0;
        uStack_a8 = 0;
        ppplStack_b8 = (long ***)0x0;
        func_0x000104ab5920(&uStack_f0,2,"TSI handshaker result does not provide unused bytes",0x33,
                            &plStack_100,&ppplStack_b8);
        func_0x000104ad56e4(aplStack_d8,&uStack_f0,ppplVar11);
        func_0x000104ad2400(param_1,aplStack_d8);
        if (((ulong)aplStack_d8[0] & 1) != 0) {
          FUN_10084dad0();
        }
        if ((uStack_f0 & 1) != 0) {
          FUN_10084dad0();
        }
      }
LAB_100740b64:
      ppplStack_70 = (long ***)&ppplStack_b8;
      func_0x000100482b64(&ppplStack_70);
      goto LAB_100740b74;
    }
    ppplStack_b8 = (long ***)0x0;
  }
  else {
    ppplStack_b8 = (long ***)pppplVar13;
    if (((ulong)pppplVar13 & 1) != 0) {
      piVar10 = (int *)((long)pppplVar13 + -1);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar7) {
          *piVar10 = *piVar10 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
  }
  func_0x000104ad2400(param_1,&ppplStack_b8);
  if (((ulong)ppplStack_b8 & 1) != 0) {
    FUN_10084dad0();
  }
LAB_100740b74:
  func_0x000100466b80(pppplVar1);
  pppplVar13 = (long ****)ppplStack_118;
  if (((ulong)ppplStack_118 & 1) != 0) {
    FUN_10084dad0();
  }
  if (param_1 != (long ****)0x0) {
    pppplVar2 = param_1 + 1;
    do {
      ppplVar11 = *pppplVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pppplVar2,0x10);
      if (bVar7) {
        *pppplVar2 = (long ***)((long)ppplVar11 + -1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((long ***)((long)ppplVar11 + -1) == (long ***)0x0) {
      pppplVar13 = param_1;
      (*(code *)(*param_1)[1])(param_1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    func_0x000107c60e78();
    FUN_1004bdf74(aplStack_d8);
    FUN_1004bdf74(auStack_108);
    ppplStack_70 = (long ***)&ppplStack_b8;
    func_0x000100482b64(&ppplStack_70);
    func_0x000100466b80(pppplVar1);
    FUN_1004bdf74(&ppplStack_118);
    if (param_1 != (long ****)0x0) {
      pppplVar1 = param_1 + 1;
      do {
        ppplVar11 = *pppplVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pppplVar1,0x10);
        if (bVar7) {
          *pppplVar1 = (long ***)((long)ppplVar11 + -1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if ((long ***)((long)ppplVar11 + -1) == (long ***)0x0) goto LAB_100740f28;
    }
    do {
      func_0x000107c60bd8(pppplVar13);
LAB_100740f28:
      (*(code *)(*param_1)[1])(param_1);
    } while( true );
  }
  return;
}



/* Entry: 100740f3c; end: 100740ffb;  */

long * FUN_100740f3c(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == (long *)0x0) {
    return (long *)0x2;
  }
  plVar1 = (long *)0x2;
  if (((param_3 != 0) && (param_2 != 0)) && (*param_1 != 0)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x20);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100740f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1);
      return param_1;
    }
    plVar1 = (long *)0x6;
  }
  return plVar1;
}



/* Entry: 100740ffc; end: 1007410c7;  */

undefined8 FUN_100740ffc(long param_1,ulong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)0x30;
  FUN_100460860();
  if (param_2 == (ulong *)0x0) {
    lVar2 = 0x3f9c;
    goto LAB_100741058;
  }
  uVar4 = *param_2;
  if (uVar4 < 0x4001) {
    if (uVar4 < 0x400) {
      uVar4 = 0x400;
      goto LAB_100741050;
    }
  }
  else {
    uVar4 = 0x4000;
LAB_100741050:
    *param_2 = uVar4;
  }
  lVar2 = uVar4 - 100;
LAB_100741058:
  puVar1[4] = lVar2;
  FUN_100460200();
  puVar1[3] = lVar2;
  if (lVar2 == 0) {
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                  ,0x55d,2,"Could not allocated buffer for tsi_ssl_frame_protector.");
    FUN_100460314(puVar1);
    uVar3 = 7;
  }
  else {
    uVar3 = 0;
    uVar5 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[1] = uVar5;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *puVar1 = &PTR_FUN_1107c7890;
    *param_3 = puVar1;
  }
  return uVar3;
}



/* Entry: 1007410c8; end: 1007414db;  */

undefined8 *
FUN_1007410c8(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long param_4,
             undefined8 param_5,long param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 ***pppuVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 **ppuStack_120;
  ulong uStack_118;
  byte bStack_109;
  long *plStack_108;
  undefined1 auStack_100 [16];
  char *pcStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = (undefined8 *)0x630;
  puVar6 = param_2;
  func_0x000107c60e20();
  puVar5[1] = param_3;
  puVar5[2] = param_1;
  puVar5[3] = param_2;
  FUN_100460318(puVar5 + 0xc);
  FUN_100460318();
  puVar5[0x22] = 0;
  puVar7 = puVar5 + 0x9a;
  puVar5[0x1c] = 0;
  puVar5[0x1d] = 0;
  puVar5[0x9b] = 0;
  puVar5[0x9a] = 0;
  puVar5[0x9d] = 0;
  puVar5[0x9c] = 0;
  puVar5[0x9e] = 0;
  *puVar5 = &PTR_FUN_1107c6958;
  FUN_100460318(puVar5 + 4);
  puVar5[0x1f] = FUN_1008d753c;
  puVar5[0x20] = puVar5;
  puVar5[0x21] = 0;
  func_0x0001004b800c(puVar5 + 0x23);
  func_0x0001004b800c(puVar5 + 0x48);
  if (param_6 != 0) {
    lVar9 = 0;
    do {
      puVar6 = (undefined8 *)(param_4 + lVar9 * 0x20);
      plVar8 = (long *)*puVar6;
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
      uStack_88 = puVar6[1];
      uStack_90 = *puVar6;
      uStack_78 = puVar6[3];
      uStack_80 = puVar6[2];
      puVar6 = &uStack_90;
      FUN_1005a70c4(puVar5 + 0x48);
      lVar9 = lVar9 + 1;
    } while (lVar9 != param_6);
  }
  func_0x0001004b800c(puVar5 + 0x75);
  FUN_1007414f4(&plStack_108,param_5);
  lVar9 = plStack_108[2];
  plVar8 = (long *)plStack_108[3];
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_100741550();
  pcStack_f0 = ":secure_endpoint";
  uStack_e8 = 0x10;
  uStack_c0 = param_3;
  puStack_b8 = puVar6;
  FUN_10047c83c(&ppuStack_120,&uStack_c0,&pcStack_f0);
  pppuVar4 = (undefined8 ***)ppuStack_120;
  if (-1 < (char)bStack_109) {
    uStack_118 = (ulong)bStack_109;
    pppuVar4 = &ppuStack_120;
  }
  FUN_100487758(auStack_100,lVar9,pppuVar4,uStack_118);
  FUN_10074157c(puVar7,auStack_100);
  FUN_100487bf4(auStack_100);
  if ((char)bStack_109 < '\0') {
    func_0x000107c60e14(ppuStack_120);
  }
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      func_0x000107c60d68(plVar8);
    }
  }
  if (plStack_108 != (long *)0x0) {
    plVar8 = plStack_108 + 1;
    do {
      lVar9 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(*plStack_108 + 8))();
    }
  }
  FUN_1007415e0(&uStack_c0,puVar7,0x630,0x630);
  FUN_10074157c(puVar5 + 0x9c,&uStack_c0);
  puVar5[0x9e] = uStack_b0;
  FUN_100741660(&uStack_c0);
  if (param_2 == (undefined8 *)0x0) {
    FUN_10074169c(&uStack_c0,puVar7,0x2000,0x2000);
    puVar5[0x6e] = puStack_b8;
    puVar5[0x6d] = uStack_c0;
    puVar5[0x70] = uStack_a8;
    puVar5[0x6f] = uStack_b0;
    FUN_10074169c(&uStack_c0,puVar7,0x2000,0x2000);
  }
  else {
    func_0x0001004b8028(&uStack_c0);
    puVar5[0x6e] = puStack_b8;
    puVar5[0x6d] = uStack_c0;
    puVar5[0x70] = uStack_a8;
    puVar5[0x6f] = uStack_b0;
    func_0x0001004b8028(&uStack_c0);
  }
  puVar5[0x72] = puStack_b8;
  puVar5[0x71] = uStack_c0;
  puVar5[0x74] = uStack_a8;
  puVar5[0x73] = uStack_b0;
  *(undefined1 *)(puVar5 + 0x9f) = 0;
  *(undefined4 *)((long)puVar5 + 0x4fc) = 1;
  func_0x0001004b800c(puVar5 + 0xa0);
  puVar6 = puVar5 + 0xc5;
  FUN_100480ed8(puVar6,1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    func_0x000107c60e78();
    FUN_100741660(puVar5 + 0x9c);
    FUN_100487bf4(puVar7);
    FUN_1005a5f48(puVar5 + 0x14);
    FUN_1005a5f48(puVar5 + 0xc);
    func_0x000107c60e14(puVar5);
    func_0x000107c60bd8(puVar6);
    func_0x000104bd46a0();
    puVar7 = (undefined8 *)puVar6[3];
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (puVar7,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
               &PTR____CFConstantStringClassReference_110f2bdb8,0,0);
    return puVar7;
  }
  return puVar5;
}



/* Entry: 1007414dc; end: 1007414f3; -[SCLensCarouselStudySettingsProvider migrateFromStartupObservableEnabled] */

void FUN_1007414dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f2bdb8,0,0);
  return;
}



/* Entry: 1007414f4; end: 10074154f;  */

void FUN_1007414f4(long *param_1,int *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  FUN_10047fdf4(param_2,"grpc.resource_quota");
  if ((param_2 == (int *)0x0) || (*param_2 != 2)) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_2 + 4);
  }
  plVar1 = (long *)(lVar4 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *param_1 = lVar4;
  return;
}



/* Entry: 100741550; end: 10074157b;  */

void FUN_100741550(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100741558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}



/* Entry: 10074157c; end: 1007415df;  */

undefined8 * FUN_10074157c(undefined8 *param_1,undefined8 *param_2)

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
      func_0x000107c60d68(plVar5);
    }
  }
  return param_1;
}



/* Entry: 1007415e0; end: 10074165f;  */

void FUN_1007415e0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  
  plVar1 = (long *)*param_2;
  lVar2 = param_2[1];
  plVar5 = plVar1;
  if (lVar2 != 0) {
    plVar5 = (long *)(lVar2 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = *plVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar5 = (long *)*param_2;
  }
  (**(code **)(*plVar5 + 0x10))();
  *param_1 = plVar1;
  param_1[1] = lVar2;
  param_1[2] = plVar5;
  return;
}



/* Entry: 100741660; end: 10074169b;  */

long * FUN_100741660(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4,param_1[2]);
  }
  plVar4 = (long *)param_1[1];
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
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      func_0x000107c60d68(plVar4);
    }
  }
  return param_1;
}



/* Entry: 10074169c; end: 100741727;  */

void FUN_10074169c(undefined8 *param_1,long *param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  
  plVar6 = (long *)*param_2;
  (**(code **)(*plVar6 + 0x10))(plVar6,param_3 + 0x28,param_4 + 0x28);
  plVar7 = plVar6;
  func_0x000107c610a0();
  lVar2 = *param_2;
  lVar3 = param_2[1];
  if (lVar3 != 0) {
    plVar1 = (long *)(lVar3 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *plVar7 = 1;
  plVar7[1] = (long)&UNK_104ab58dc;
  plVar7[2] = lVar2;
  plVar7[3] = lVar3;
  plVar7[4] = (long)plVar6;
  param_1[2] = plVar7 + 5;
  *param_1 = plVar7;
  param_1[1] = plVar6 + -5;
  return;
}



/* Entry: 100741728; end: 10074173f; -[SCLensCarouselStudySettingsProvider forceSyncCarouselOpenEnabled] */

void FUN_100741728(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f2bdd8,0,0);
  return;
}



/* Entry: 100741740; end: 100741787;  */

undefined8 FUN_100741740(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112f850b8;
  FUN_1000285a8(0x112f850b8,&UNK_10dbf8fd0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 100741788; end: 10074178f;  */

void FUN_100741788(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100741790; end: 1007417bb;  */

void FUN_100741790(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007417bc; end: 1007417cf;  */

void FUN_1007417bc(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001007417c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))();
    return;
  }
  return;
}



/* Entry: 1007417d0; end: 100741807;  */

void FUN_1007417d0(long param_1)

{
  FUN_1006fd5c8(*(undefined8 *)(param_1 + 8));
  func_0x0001004d2e54(*(undefined8 *)(param_1 + 0x10));
  FUN_100460314(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 100741808; end: 10074182f; -[_TtC26SCLensCarouselServicesImpl24LensCarouselSettingsImpl lensCarouselLocationType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100741808(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f85060);
}



/* Entry: 100741830; end: 100741963;  */

void FUN_100741830(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 auStack_88 [2];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  puVar1 = (undefined8 *)0xc8;
  func_0x000107c60e20();
  puVar1[3] = 0;
  puVar1[2] = 0;
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
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  puVar1[0x17] = 0;
  puVar1[0x16] = 0;
  puVar1[0x18] = 0;
  puVar1[1] = 1;
  *puVar1 = &PTR_DAT_1107c6ac0;
  *(undefined1 *)(puVar1 + 0xe) = 0;
  *param_1 = puVar1;
  *(undefined4 *)(puVar1 + 2) = 1;
  auStack_88[0] = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 1;
  FUN_100741a6c(puVar1 + 3,auStack_88);
  FUN_100741bb0(auStack_88);
  FUN_100741c08(auStack_88,param_2,"x509_pem_cert");
  puVar2 = auStack_88;
  FUN_100740704();
  if (puVar2 != (undefined4 *)0x0) {
    FUN_100741c30(&uStack_a0,*(undefined8 *)(puVar2 + 2),*(undefined8 *)(puVar2 + 4));
    if (*(char *)((long)puVar1 + 0x67) < '\0') {
      func_0x000107c60e14(puVar1[10]);
    }
    puVar1[0xb] = uStack_98;
    puVar1[10] = uStack_a0;
    puVar1[0xc] = uStack_90;
  }
  return;
}



/* Entry: 100741964; end: 100741a6b;  */

void FUN_100741964(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *unaff_x20;
  long lVar5;
  
  lVar5 = *unaff_x20;
  uVar1 = *(undefined8 *)(lVar5 + 0x10);
  func_0x000107c4af2c();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(lVar5 + 0x18);
  func_0x000107c4b2ec();
  func_0x000107c61180();
  puVar3 = &UNK_11060feb8;
  func_0x000107c613fc(&UNK_11060feb8,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  *(undefined8 *)(puVar3 + 0x28) = uVar1;
  FUN_1000285a8(0x112f41a68,&UNK_10db8ed58);
  func_0x000107c613fc();
  func_0x000107c6157c(param_1);
  puVar4 = &UNK_100c7efec;
  FUN_1000bdd8c(&UNK_100c7efec,puVar3);
  FUN_1000285a8(0x112ee5898,&UNK_10db10a50);
  func_0x000107c613fc();
  FUN_1000bdd8c(&UNK_100c7efb8,puVar4);
  return;
}



/* Entry: 100741a6c; end: 100741baf;  */

void FUN_100741a6c(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  cVar1 = *(char *)(param_1 + 0x14);
  if (cVar1 == *(char *)(param_2 + 0x14)) {
    if (cVar1 != '\0') {
      *param_1 = *param_2;
      if (*(char *)((long)param_1 + 0x1f) < '\0') {
        func_0x000107c60e14(*(undefined8 *)(param_1 + 2));
      }
      uVar3 = *(undefined8 *)(param_2 + 4);
      uVar2 = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
      *(undefined8 *)(param_1 + 4) = uVar3;
      *(undefined8 *)(param_1 + 2) = uVar2;
      *(undefined1 *)((long)param_2 + 0x1f) = 0;
      *(undefined1 *)(param_2 + 2) = 0;
      if (*(char *)((long)param_1 + 0x37) < '\0') {
        func_0x000107c60e14(*(undefined8 *)(param_1 + 8));
      }
      uVar3 = *(undefined8 *)(param_2 + 10);
      uVar2 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
      *(undefined8 *)(param_1 + 10) = uVar3;
      *(undefined8 *)(param_1 + 8) = uVar2;
      *(undefined1 *)((long)param_2 + 0x37) = 0;
      *(undefined1 *)(param_2 + 8) = 0;
      if (*(char *)((long)param_1 + 0x4f) < '\0') {
        func_0x000107c60e14(*(undefined8 *)(param_1 + 0xe));
      }
      uVar3 = *(undefined8 *)(param_2 + 0x10);
      uVar2 = *(undefined8 *)(param_2 + 0xe);
      *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
      *(undefined8 *)(param_1 + 0x10) = uVar3;
      *(undefined8 *)(param_1 + 0xe) = uVar2;
      *(undefined1 *)((long)param_2 + 0x4f) = 0;
      *(undefined1 *)(param_2 + 0xe) = 0;
    }
  }
  else {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x14) != '\0') {
        if (*(char *)((long)param_1 + 0x4f) < '\0') {
          __ZdlPv(*(undefined8 *)(param_1 + 0xe));
        }
        if (*(char *)((long)param_1 + 0x37) < '\0') {
          __ZdlPv(*(undefined8 *)(param_1 + 8));
        }
        if (*(char *)((long)param_1 + 0x1f) < '\0') {
          __ZdlPv(*(undefined8 *)(param_1 + 2));
        }
        *(undefined1 *)(param_1 + 0x14) = 0;
      }
      return;
    }
    *param_1 = *param_2;
    uVar3 = *(undefined8 *)(param_2 + 4);
    uVar2 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar3;
    *(undefined8 *)(param_1 + 2) = uVar2;
    *(undefined8 *)(param_2 + 4) = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 2) = 0;
    uVar3 = *(undefined8 *)(param_2 + 10);
    uVar2 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 10) = uVar3;
    *(undefined8 *)(param_1 + 8) = uVar2;
    *(undefined8 *)(param_2 + 10) = 0;
    *(undefined8 *)(param_2 + 0xc) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    uVar2 = *(undefined8 *)(param_2 + 0xe);
    *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    *(undefined8 *)(param_1 + 0xe) = uVar2;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x12) = 0;
    *(undefined8 *)(param_2 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  return;
}



/* Entry: 100741bb0; end: 100741c07;  */

long FUN_100741bb0(long param_1)

{
  if (*(char *)(param_1 + 0x50) != '\0') {
    if (*(char *)(param_1 + 0x4f) < '\0') {
      func_0x000107c60e14(*(undefined8 *)(param_1 + 0x38));
    }
    if (*(char *)(param_1 + 0x37) < '\0') {
      func_0x000107c60e14(*(undefined8 *)(param_1 + 0x20));
    }
    if (*(char *)(param_1 + 0x1f) < '\0') {
      func_0x000107c60e14(*(undefined8 *)(param_1 + 8));
    }
  }
  return param_1;
}



/* Entry: 100741c08; end: 100741c27;  */

void FUN_100741c08(long *param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 != 0)) {
    *param_1 = param_2;
    param_1[1] = 0;
    param_1[2] = param_3;
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 100741c28; end: 100741c2f; -[SCLensCarouselLoggerPrivateServices lensCarouselSessionInteractor] */

undefined8 FUN_100741c28(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100741c30; end: 100741cd7;  */

ulong * FUN_100741c30(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  
  if (0x7ffffffffffffff7 < param_3) {
    func_0x000104a6fa5c();
    puVar1 = param_1 + 5;
    func_0x000107c61148(puVar1);
    uVar2 = param_1[4];
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    puVar3 = puVar1;
    func_0x000107c3bf90(puVar1);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  if (param_3 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)param_3;
    puVar1 = param_1;
    if (param_3 == 0) goto LAB_100741cb4;
  }
  else {
    uVar2 = (param_3 & 0xfffffffffffffff8) + 8;
    if ((param_3 | 7) != 0x17) {
      uVar2 = param_3 | 7;
    }
    puVar1 = (ulong *)(uVar2 + 1);
    func_0x000107c60e20();
    param_1[1] = param_3;
    param_1[2] = uVar2 + 1 | 0x8000000000000000;
    *param_1 = (ulong)puVar1;
  }
  func_0x000107c610b8(puVar1,param_2,param_3);
LAB_100741cb4:
  *(undefined1 *)((long)puVar1 + param_3) = 0;
  return param_1;
}



/* Entry: 100741cd8; end: 100741d3f;  */

void FUN_100741cd8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61148(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  lVar3 = lVar1;
  func_0x000107c3bf90(lVar1,param_2,uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 100741d40; end: 100741e5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100741d40(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126bbba0;
  func_0x000107c610f4(PTR_PTR_1126bbba0);
  lVar2 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar2 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = lVar2 + _DAT_11272656c;
    func_0x000107c61148(lVar7);
  }
  lVar3 = lVar7;
  func_0x000107c5dac4(lVar7);
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  param_1 = param_1 + 0x28;
  func_0x000107c61148(param_1);
  lVar5 = param_1;
  FUN_100741e78();
  func_0x000107c61180();
  lVar6 = lVar5;
  func_0x000107c4b1cc();
  func_0x000107c61180();
  func_0x000107c47534(puVar1,param_2,lVar4,uVar8,lVar6);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100741e60; end: 100741e77;  */

void FUN_100741e60(undefined4 *param_1,undefined8 param_2)

{
  *param_1 = 2;
  *(char **)(param_1 + 2) = "grpc.internal.channelz_security";
  *(undefined8 *)(param_1 + 4) = param_2;
  *(undefined ***)(param_1 + 6) = &PTR_FUN_1107c4b00;
  return;
}



/* Entry: 100741e78; end: 100741e9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100741e78(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_11272657c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100741e9c; end: 100741f73; -[SCLensThumbnailLogger initWithLogger:performer:lensIconRepository:] */

undefined1 *
FUN_100741e9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1126f05f0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_5;
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = 0;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100741f74; end: 10074247f; -[SCLensLoggerEntryPoint _newLensLoggerWithLensThumbnailLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100741f74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  undefined8 uStack_90;
  
  puVar1 = PTR_PTR_1126bbba8;
  func_0x000107c61174(param_3);
  func_0x000107c610f4();
  lVar2 = param_1 + _DAT_11272656c;
  func_0x000107c61148();
  lVar3 = lVar2;
  func_0x000107c5dac4();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar26 = 0;
  }
  else {
    lVar26 = param_1 + _DAT_112726578;
    func_0x000107c61148();
  }
  lVar5 = lVar26;
  func_0x000107c444a4();
  func_0x000107c61180();
  lVar6 = lVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar7 = lVar6;
  func_0x000107c4b1a4();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar27 = 0;
  }
  else {
    lVar27 = param_1 + _DAT_112726580;
    func_0x000107c61148();
  }
  lVar8 = lVar27;
  func_0x000107c4b074();
  func_0x000107c61180();
  func_0x000107c61174(0);
  if (param_1 == 0) {
    lVar28 = 0;
  }
  else {
    lVar28 = param_1 + _DAT_112726584;
    func_0x000107c61148();
  }
  lVar9 = lVar28;
  func_0x000107c4b214();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar29 = 0;
  }
  else {
    lVar29 = param_1 + _DAT_112726574;
    func_0x000107c61148();
  }
  lVar10 = lVar29;
  func_0x000107c3dfac();
  func_0x000107c61180();
  if (param_1 == 0) {
    uStack_90 = 0;
  }
  else {
    uStack_90 = param_1 + _DAT_112726588;
    func_0x000107c61148();
  }
  lVar11 = param_1;
  FUN_100743800();
  func_0x000107c61180();
  lVar12 = lVar11;
  func_0x000107c3eb4c();
  func_0x000107c61180();
  lVar13 = param_1;
  FUN_100743800();
  func_0x000107c61180();
  lVar14 = lVar13;
  func_0x000107c3eb58();
  func_0x000107c61180();
  lVar15 = param_1;
  FUN_100741e78();
  func_0x000107c61180();
  lVar16 = lVar15;
  func_0x000107c4afc4();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar30 = 0;
  }
  else {
    lVar30 = param_1 + _DAT_112726598;
    func_0x000107c61148();
  }
  lVar17 = lVar30;
  func_0x000107c4af44();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar31 = 0;
  }
  else {
    lVar31 = param_1 + _DAT_11272658c;
    func_0x000107c61148();
  }
  lVar18 = lVar31;
  func_0x000107c52030();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar32 = 0;
  }
  else {
    lVar32 = param_1 + _DAT_112726590;
    func_0x000107c61148();
  }
  lVar19 = lVar32;
  func_0x000107c5b7f4();
  func_0x000107c61180();
  lVar20 = lVar19;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar33 = 0;
  }
  else {
    lVar33 = param_1 + _DAT_1127265a0;
    func_0x000107c61148();
  }
  lVar21 = lVar33;
  func_0x000107c4b178();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar34 = 0;
  }
  else {
    lVar34 = param_1 + _DAT_11272659c;
    func_0x000107c61148();
  }
  lVar22 = lVar34;
  func_0x000107c4b2ec();
  func_0x000107c61180();
  lVar23 = param_1;
  FUN_10074c0d4();
  func_0x000107c61180();
  lVar24 = lVar23;
  func_0x000107c4b320();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar35 = 0;
  }
  else {
    lVar35 = param_1 + _DAT_1127265ac;
    func_0x000107c61148();
  }
  lVar25 = lVar35;
  func_0x000107c5c21c();
  func_0x000107c61180();
  FUN_10074c0d4();
  func_0x000107c61180();
  func_0x000107c45a00(puVar1,param_2,lVar4,lVar7,param_3,lVar8,0,lVar9,lVar10,uStack_90,lVar12,
                      lVar14,lVar16,lVar17,lVar18,lVar20,lVar21,lVar22,lVar24,lVar25,param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar25);
  func_0x000107c61170(lVar35);
  func_0x000107c61170(lVar24);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(lVar34);
  func_0x000107c61170(lVar21);
  func_0x000107c61170(lVar33);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar32);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar31);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar30);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(uStack_90);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar29);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar28);
  func_0x000107c61170(0);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar27);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar26);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  return puVar1;
}



/* Entry: 100742480; end: 1007424c7;  */

long * FUN_100742480(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uStack_28;
  
  if (param_1 != (long *)0x0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = *param_1 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uStack_28 = 0;
    FUN_1007402ac(&uStack_28);
  }
  return param_1;
}



/* Entry: 1007424c8; end: 1007424df;  */

void FUN_1007424c8(long param_1)

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



/* Entry: 1007424e0; end: 1007425bb;  */

void FUN_1007424e0(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  ulong uStack_30;
  undefined1 *puStack_28;
  
  if (*param_2 == 0) {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_50 = 0;
    func_0x000104ab5920(&uStack_30,2,"Handshake timed out",0x13,&uStack_31,&uStack_50);
    func_0x000104adde0c(param_1,&uStack_30);
    if ((uStack_30 & 1) != 0) {
      FUN_10084dad0();
    }
    puStack_28 = (undefined1 *)&uStack_50;
    func_0x000100482b64(&puStack_28);
  }
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
  if (lVar4 + -1 == 0 && param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  return;
}



/* Entry: 1007425bc; end: 100742967;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1007425bc(long *param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  code *pcVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uStack_78;
  ulong uStack_70;
  ulong auStack_68 [4];
  undefined1 uStack_41;
  ulong uStack_40;
  ulong *puStack_38;
  
  plVar10 = (long *)param_1[4];
  FUN_100460448(plVar10 + 2);
  if (*param_2 == 0) {
    if ((char)plVar10[0x10] == '\0') {
      if (*param_1 == 0) {
        uStack_78 = 0;
        FUN_1008d9ad4(&puStack_38,plVar10 + 0xf,&uStack_78);
      }
      else {
        lVar8 = param_1[1];
        FUN_100742968(lVar8,*param_1,1);
        *(long *)plVar10[0xe] = lVar8;
        FUN_100747ad4(&puStack_38);
        puVar4 = puStack_38;
        lVar8 = plVar10[0xe];
        plVar6 = *(long **)(lVar8 + 0x10);
        if (plVar6 != (long *)0x0) {
          plVar1 = plVar6 + 1;
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
            (**(code **)(*plVar6 + 8))();
          }
        }
        *(ulong **)(lVar8 + 0x10) = puVar4;
        plVar6 = (long *)plVar10[0xe];
        plVar6[1] = param_1[1];
        if (*plVar6 == 0) {
          FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/client/chttp2_connector.cc"
                        ,0xb2,2,"assertion failed: %s");
          func_0x000107c60ebc();
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1007428d4);
          (*pcVar5)();
        }
        plVar10[0x11] = *param_1;
        plVar1 = plVar10 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar10[0x13] = (long)FUN_1008d9650;
        plVar10[0x14] = (long)plVar10;
        plVar10[0x15] = 0;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        FUN_100747afc(*plVar6,param_1[2],plVar10 + 0x12,0);
        plVar10[0x1e] = (long)FUN_1008d9934;
        plVar10[0x1f] = (long)plVar10;
        plVar10[0x20] = 0;
        func_0x000100480ee4(plVar10 + 0x16,plVar10[0xc],plVar10 + 0x1d);
      }
      goto LAB_100742658;
    }
    auStack_68[2] = 0;
    auStack_68[3] = 0;
    auStack_68[1] = 0;
    func_0x000104ab5920(&uStack_40,2,"connector shutdown",0x12,&uStack_41,auStack_68 + 1);
    uVar12 = *param_2;
    if (uStack_40 == uVar12) {
LAB_100742708:
      if ((uVar12 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    else {
      *param_2 = uStack_40;
      uStack_40 = 0x36;
      if ((uVar12 & 1) != 0) {
        FUN_10084dad0();
        uVar12 = uStack_40;
        goto LAB_100742708;
      }
    }
    puStack_38 = auStack_68 + 1;
    func_0x000100482b64(&puStack_38);
    lVar8 = *param_1;
    if (lVar8 != 0) {
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
      func_0x000104aba5c4(lVar8,auStack_68);
      if ((auStack_68[0] & 1) != 0) {
        FUN_10084dad0();
      }
      func_0x000104aba638(*param_1);
      FUN_10048650c(param_1[1]);
      FUN_10061ce28(param_1[2]);
      FUN_100460314(param_1[2]);
    }
  }
  puVar11 = (undefined8 *)plVar10[0xe];
  *puVar11 = 0;
  puVar11[1] = 0;
  plVar6 = (long *)puVar11[2];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  puVar11[2] = 0;
  uVar12 = *param_2;
  if ((uVar12 & 1) != 0) {
    piVar7 = (int *)(uVar12 - 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = *piVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_70 = uVar12;
  FUN_1008d9ad4(&puStack_38,plVar10 + 0xf,&uStack_70);
  if ((uVar12 & 1) != 0) {
    FUN_10084dad0(uVar12);
  }
LAB_100742658:
  plVar6 = (long *)plVar10[0x23];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  plVar10[0x23] = 0;
  func_0x000100466b80(plVar10 + 2);
  plVar6 = plVar10 + 1;
  do {
    lVar8 = *plVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar8 + -1 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  return;
}



/* Entry: 100742968; end: 1007429c7;  */

undefined8 FUN_100742968(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xd00;
  func_0x000107c60e20(0xd00);
  FUN_1007429d8();
  return uVar1;
}



/* Entry: 1007429c8; end: 1007429d7; -[_TtC26LensDownloadLoggerServices28SCLensDownloadLoggerServices lensDownloadLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007429c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307d868));
  return;
}



/* Entry: 1007429d8; end: 1007437ef;  */

/* WARNING: Removing unreachable block (ram,0x00010074345c) */

ulong ***** FUN_1007429d8(ulong *****param_1,ulong ****param_2,ulong *****param_3,uint param_4)

{
  char *pcVar1;
  long *plVar2;
  int *piVar3;
  int *piVar4;
  uint *puVar5;
  ulong uVar6;
  long *plVar7;
  int iVar8;
  char cVar9;
  code *pcVar10;
  bool bVar11;
  uint uVar12;
  ulong *****pppppuVar13;
  char *pcVar14;
  ulong *****pppppuVar15;
  ulong ****ppppuVar16;
  char *****pppppcVar17;
  ulong *****pppppuVar18;
  ulong *****pppppuVar19;
  ulong *****pppppuVar20;
  undefined4 uVar21;
  long lVar22;
  ulong ***pppuVar23;
  ulong ****ppppuVar24;
  long lVar25;
  ulong *****pppppuVar26;
  undefined **ppuVar27;
  ulong ***pppuVar28;
  ulong *****pppppuVar29;
  ulong *****pppppuVar30;
  uint uStack_18c;
  long *plStack_120;
  ulong ***pppuStack_118;
  long *plStack_110;
  ulong ****ppppuStack_108;
  ulong uStack_100;
  byte bStack_f1;
  undefined1 auStack_f0 [32];
  char ****ppppcStack_d0;
  ulong ****ppppuStack_c8;
  undefined8 uStack_c0;
  ulong ****ppppuStack_a0;
  ulong ****ppppuStack_98;
  ulong ****ppppuStack_90;
  undefined8 uStack_88;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar30 = param_1 + 1;
  *pppppuVar30 = (ulong ****)0x1;
  param_1[2] = (ulong ****)param_3;
  pppppuVar20 = param_1 + 3;
  pppppuVar13 = param_3;
  ppppuVar16 = param_2;
  FUN_100741550();
  if (ppppuVar16 < (ulong ****)0x7ffffffffffffff8) {
    if (ppppuVar16 < (ulong ****)0x17) {
      *(char *)((long)param_1 + 0x2f) = (char)ppppuVar16;
      pppppuVar26 = pppppuVar20;
      if (ppppuVar16 != (ulong ****)0x0) goto LAB_100742a90;
      pppppuVar13 = (ulong *****)0x0;
    }
    else {
      uVar6 = ((ulong)ppppuVar16 & 0xfffffffffffffff8) + 8;
      if (((ulong)ppppuVar16 | 7) != 0x17) {
        uVar6 = (ulong)ppppuVar16 | 7;
      }
      pppppuVar26 = (ulong *****)(uVar6 + 1);
      func_0x000107c60e20();
      param_1[4] = ppppuVar16;
      param_1[5] = (ulong ****)(uVar6 + 1 | 0x8000000000000000);
      param_1[3] = (ulong ****)pppppuVar26;
LAB_100742a90:
      func_0x000107c610b8(pppppuVar26,pppppuVar13,ppppuVar16);
    }
    *(char *)((long)pppppuVar26 + (long)ppppuVar16) = '\0';
    FUN_1007414f4(&plStack_120,param_2);
    ppppuVar16 = (ulong ****)plStack_120[2];
    plVar7 = (long *)plStack_120[3];
    if (plVar7 != (long *)0x0) {
      plVar2 = plVar7 + 1;
      do {
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar11) {
          *plVar2 = *plVar2 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
    pppuStack_118 = (ulong ***)ppppuVar16;
    plStack_110 = plVar7;
    FUN_100741550();
    ppppcStack_d0 = (char ****)0x10f2346d4;
    ppppuStack_c8 = (ulong ****)0x11;
    ppppuStack_a0 = (ulong ****)param_3;
    ppppuStack_98 = (ulong ****)pppppuVar13;
    FUN_10047c83c(&ppppuStack_108,&ppppuStack_a0,&ppppcStack_d0);
    pppppuVar13 = param_1 + 6;
    pppppuVar26 = (ulong *****)ppppuStack_108;
    if (-1 < (char)bStack_f1) {
      uStack_100 = (ulong)bStack_f1;
      pppppuVar26 = &ppppuStack_108;
    }
    FUN_100487758(pppppuVar13,ppppuVar16,pppppuVar26,uStack_100);
    if ((char)bStack_f1 < '\0') {
      func_0x000107c60e14(ppppuStack_108);
    }
    if (plVar7 != (long *)0x0) {
      plVar2 = plVar7 + 1;
      do {
        lVar22 = *plVar2;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar11) {
          *plVar2 = lVar22 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (lVar22 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        func_0x000107c60d68(plVar7);
      }
    }
    if (plStack_120 != (long *)0x0) {
      plVar7 = plStack_120 + 1;
      do {
        lVar22 = *plVar7;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar11) {
          *plVar7 = lVar22 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (lVar22 + -1 == 0) {
        (**(code **)(*plStack_120 + 8))();
      }
    }
    pppppuVar26 = pppppuVar13;
    FUN_1007415e0(param_1 + 8,pppppuVar13,0xd00,0xd00);
    param_1[0xb] = (ulong ****)0x0;
    param_1[0xc] = (ulong ****)0x0;
    param_1[0xe] = (ulong ****)0x0;
    FUN_100744148();
    param_1[0x13] = (ulong ****)0x0;
    param_1[0x10] = (ulong ****)0x0;
    param_1[0x11] = (ulong ****)0x0;
    param_1[0xf] = (ulong ****)pppppuVar26;
    pcVar14 = (char *)((long)param_1 + 0x8d);
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    *(char *)(param_1 + 0x14) = '\x01';
    param_1[0x16] = (ulong ****)0x0;
    param_1[0x15] = (ulong ****)0x0;
    param_1[0x18] = (ulong ****)0x0;
    param_1[0x17] = (ulong ****)0x0;
    param_1[0x1a] = (ulong ****)0x0;
    param_1[0x19] = (ulong ****)0x0;
    param_1[0x1c] = (ulong ****)0x0;
    param_1[0x1b] = (ulong ****)0x0;
    param_1[0x1e] = (ulong ****)0x0;
    param_1[0x1d] = (ulong ****)0x0;
    param_1[0x59] = (ulong ****)0x0;
    ppppuVar16 = (ulong ****)"client_transport";
    if (param_4 == 0) {
      ppppuVar16 = (ulong ****)"server_transport";
    }
    param_1[0x5c] = ppppuVar16;
    *(undefined4 *)(param_1 + 0x5d) = 2;
    param_1[0x5e] = (ulong ****)0x0;
    param_1[0x61] = (ulong ****)0x0;
    param_1[0x60] = (ulong ****)0x0;
    param_1[0x5f] = (ulong ****)(param_1 + 0x60);
    FUN_100744288();
    *(char *)(param_1 + 0xc5) = (char)param_4;
    *(undefined4 *)(param_1 + 0xeb) = 0xffff;
    param_1[0xec] = (ulong ****)0x0;
    *(undefined4 *)(param_1 + 0xed) = 0;
    ((char *)((long)param_1 + 0x76c))[0] = '\x01';
    ((char *)((long)param_1 + 0x76c))[1] = '\0';
    *(undefined4 *)(param_1 + 0xee) = 8;
    uVar21 = 1;
    if (param_4 == 0) {
      uVar21 = 2;
    }
    *(undefined4 *)((long)param_1 + 0x7e4) = uVar21;
    *(undefined4 *)(param_1 + 0xfd) = 0;
    param_1[0x111] = (ulong ****)0x0;
    param_1[0xff] = (ulong ****)0x0;
    param_1[0xfe] = (ulong ****)0x0;
    param_1[0x101] = (ulong ****)0x0;
    param_1[0x100] = (ulong ****)0x0;
    param_1[0x103] = (ulong ****)0x0;
    param_1[0x102] = (ulong ****)0x0;
    param_1[0x104] = (ulong ****)0x0;
    param_1[0x107] = (ulong ****)0x0;
    param_1[0x106] = (ulong ****)0x0;
    param_1[0x117] = (ulong ****)0x0;
    param_1[0x116] = (ulong ****)0x0;
    param_1[0x119] = (ulong ****)0x0;
    param_1[0x118] = (ulong ****)0x0;
    FUN_100744334();
    pppppuVar26 = pppppuVar20;
    if (*(char *)((long)param_1 + 0x2f) < '\0') {
      pppppuVar26 = (ulong *****)*pppppuVar20;
    }
    ppppuVar16 = param_2;
    FUN_100480b50(param_2,"grpc.http2.bdp_probe",1);
    pppppuVar18 = param_1 + 0x135;
    FUN_100746924(pppppuVar18,pppppuVar26,ppppuVar16,pppppuVar13);
    param_1[0x152] = (ulong ****)0x0;
    uVar21 = 0x18;
    if (param_4 == 0) {
      uVar21 = 0;
    }
    *(undefined4 *)(param_1 + 0x153) = uVar21;
    pcVar14 = (char *)((long)param_1 + 0xa9c);
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\x01';
    param_1[0x154] = (ulong ****)0x0;
    *(undefined4 *)(param_1 + 0x155) = 0;
    param_1[0x159] = (ulong ****)0x0;
    *(char *)(param_1 + 0x15a) = '\0';
    *(undefined2 *)(param_1 + 0x173) = 0;
    pppppuVar13 = param_1 + 0x199;
    param_1[0x157] = (ulong ****)0x0;
    param_1[0x156] = (ulong ****)0x0;
    param_1[0x167] = (ulong ****)0x0;
    param_1[0x169] = (ulong ****)0x0;
    param_1[0x168] = (ulong ****)0x0;
    *(undefined2 *)(param_1 + 0x16a) = 0;
    *(undefined2 *)(param_1 + 0x19b) = 0;
    param_1[0x19a] = (ulong ****)0x0;
    *pppppuVar13 = (ulong ****)0x0;
    param_1[0x19e] = (ulong ****)0x0;
    *(char *)(param_1 + 0x19f) = '\0';
    param_1[0x19d] = (ulong ****)0x0;
    param_1[0x19c] = (ulong ****)0x0;
    *param_1 = (ulong ****)&UNK_1107c4240;
    FUN_100746b6c(param_1 + 0x1f,8);
    func_0x0001004b800c(param_1 + 0x34);
    pppppuVar26 = param_1 + 0x62;
    func_0x0001004b800c(pppppuVar26);
    if (param_4 != 0) {
      func_0x000100746ba8(auStack_f0,"PRI * HTTP/2.0\r\n\r\nSM\r\n\r\n");
      FUN_1005a70c4(pppppuVar26,auStack_f0);
    }
    func_0x0001004b800c(param_1 + 0xc6);
    lVar22 = 0;
    pcVar14 = (char *)((long)param_1 + 0x774);
    do {
      lVar25 = 0;
      do {
        *(undefined4 *)(pcVar14 + lVar25) = *(undefined4 *)(&UNK_1107c4820 + lVar22 * 0x20);
        lVar25 = lVar25 + 0x1c;
      } while (lVar25 != 0x70);
      lVar22 = lVar22 + 1;
      pcVar14 = pcVar14 + 4;
    } while (lVar22 != 7);
    FUN_100746bd8(param_1 + 0x131);
    if (param_4 != 0) {
      FUN_100746be0(param_1,1,0);
      FUN_100746be0(param_1,2,0);
    }
    FUN_100746be0(param_1,5,0x2000);
    pppppuVar19 = (ulong *****)0x6;
    pcVar14 = (char *)param_1;
    FUN_100746be0(param_1,6,1);
    *(uint *)(param_1 + 0x105) = uRam00000001130a58f4;
    *(uint *)((long)param_1 + 0x82c) = uRam00000001130a58f0;
    param_1[0x106] = (ulong ****)(long)(int)uRam00000001130a58f8;
    bVar11 = *(char *)(param_1 + 0xc5) != '\0';
    piVar3 = (int *)0x1130a58e4;
    if (bVar11) {
      piVar3 = (int *)0x1130a58e0;
    }
    piVar4 = (int *)0x1130a58ec;
    if (bVar11) {
      piVar4 = (int *)0x1130a58e8;
    }
    pcVar1 = (char *)0x1136a1e0a;
    if (bVar11) {
      pcVar1 = (char *)0x1136a1e09;
    }
    iVar8 = *piVar4;
    ppppuVar16 = (ulong ****)0x7fffffffffffffff;
    if (*piVar3 != 0x7fffffff) {
      ppppuVar16 = (ulong ****)(long)*piVar3;
    }
    cVar9 = *pcVar1;
    param_1[0x199] = ppppuVar16;
    ppppuVar16 = (ulong ****)0x7fffffffffffffff;
    if (iVar8 != 0x7fffffff) {
      ppppuVar16 = (ulong ****)(long)iVar8;
    }
    param_1[0x19a] = ppppuVar16;
    *(char *)(param_1 + 0x19b) = cVar9;
    if (param_2 != (ulong ****)0x0) {
      if (*param_2 != (ulong ***)0x0) {
        pppuVar28 = (ulong ***)0x0;
        uStack_18c = 1;
        do {
          pppppuVar15 = (ulong *****)(param_2[1] + (long)pppuVar28 * 4);
          pppppuVar29 = (ulong *****)pppppuVar15[1];
          pppppuVar19 = pppppuVar29;
          func_0x000107c613c0(pppppuVar29,"grpc.http2.initial_sequence_number");
          if ((int)pppppuVar19 == 0) {
            pppppuVar26 = (ulong *****)((ulong)pppppuVar26 & 0xffffffff00000000 | 0x7fffffff);
            pppppuVar19 = (ulong *****)0xffffffff;
            func_0x0001004865d8(pppppuVar15,0xffffffff,pppppuVar26);
            uVar12 = (uint)pppppuVar15;
            pcVar14 = (char *)pppppuVar15;
            if (-1 < (int)uVar12) {
              if ((*(uint *)((long)param_1 + 0x7e4) & 1) == (uVar12 & 1)) {
                *(uint *)((long)param_1 + 0x7e4) = uVar12;
              }
              else {
                pcVar14 = 
                "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                ;
                pppppuVar19 = (ulong *****)0x12f;
                FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                              ,0x12f,2,"%s: low bit must be %d on %s");
              }
            }
          }
          else {
            pppppuVar19 = pppppuVar29;
            func_0x000107c613c0(pppppuVar29,"grpc.http2.hpack_table_size.encoder");
            if ((int)pppppuVar19 == 0) {
              func_0x0001004865d8(pppppuVar15,0xffffffff);
              pcVar14 = (char *)pppppuVar15;
              pppppuVar19 = pppppuVar15;
              if (-1 < (int)pppppuVar15) {
                pcVar14 = (char *)(param_1 + 0x87);
                func_0x000104a9f174();
                pppppuVar19 = pppppuVar15;
              }
            }
            else {
              pppppuVar19 = pppppuVar29;
              func_0x000107c613c0(pppppuVar29,&UNK_10f50ea57);
              if ((int)pppppuVar19 == 0) {
                pppppuVar19 = (ulong *****)(ulong)uRam00000001130a58f4;
                func_0x0001004865d8();
                *(int *)(param_1 + 0x105) = (int)pppppuVar15;
                pcVar14 = (char *)pppppuVar15;
              }
              else {
                pppppuVar19 = pppppuVar29;
                func_0x000107c613c0(pppppuVar29,"grpc.http2.max_ping_strikes");
                if ((int)pppppuVar19 == 0) {
                  pppppuVar19 = (ulong *****)(ulong)uRam00000001130a58f0;
                  func_0x0001004865d8();
                  *(int *)((long)param_1 + 0x82c) = (int)pppppuVar15;
                  pcVar14 = (char *)pppppuVar15;
                }
                else {
                  pppppuVar19 = pppppuVar29;
                  func_0x000107c613c0(pppppuVar29,"grpc.http2.min_ping_interval_without_data_ms");
                  if ((int)pppppuVar19 == 0) {
                    pppppuVar19 = (ulong *****)(ulong)uRam00000001130a58f8;
                    func_0x0001004865d8();
                    ppppuVar16 = (ulong ****)(long)(int)pppppuVar15;
                    pppppuVar29 = param_1 + 0x106;
LAB_1007431c4:
                    *pppppuVar29 = ppppuVar16;
                    pcVar14 = (char *)pppppuVar15;
                  }
                  else {
                    pppppuVar19 = pppppuVar29;
                    func_0x000107c613c0(pppppuVar29,"grpc.http2.write_buffer_size");
                    if ((int)pppppuVar19 == 0) {
                      pppppuVar19 = (ulong *****)0x0;
                      func_0x0001004865d8();
                      *(int *)(param_1 + 0xeb) = (int)pppppuVar15;
                      pcVar14 = (char *)pppppuVar15;
                    }
                    else {
                      pppppuVar19 = pppppuVar29;
                      func_0x000107c613c0(pppppuVar29,&UNK_10f50ea26);
                      if ((int)pppppuVar19 == 0) {
                        puVar5 = (uint *)0x1130a58e4;
                        if (*(char *)(param_1 + 0xc5) != '\0') {
                          puVar5 = (uint *)0x1130a58e0;
                        }
                        pppppuVar19 = (ulong *****)((ulong)*puVar5 | 0x100000000);
                        func_0x0001004865d8();
                        ppppuVar16 = (ulong ****)0x7fffffffffffffff;
                        pppppuVar29 = pppppuVar13;
                        if ((int)pppppuVar15 != 0x7fffffff) {
                          ppppuVar16 = (ulong ****)(long)(int)pppppuVar15;
                        }
                        goto LAB_1007431c4;
                      }
                      pppppuVar19 = pppppuVar29;
                      func_0x000107c613c0(pppppuVar29,&UNK_10f50ea3d);
                      if ((int)pppppuVar19 == 0) {
                        puVar5 = (uint *)0x1130a58ec;
                        if (*(char *)(param_1 + 0xc5) != '\0') {
                          puVar5 = (uint *)0x1130a58e8;
                        }
                        pppppuVar19 = (ulong *****)(ulong)*puVar5;
                        func_0x0001004865d8();
                        ppppuVar16 = (ulong ****)0x7fffffffffffffff;
                        if ((int)pppppuVar15 != 0x7fffffff) {
                          ppppuVar16 = (ulong ****)(long)(int)pppppuVar15;
                        }
                        param_1[0x19a] = ppppuVar16;
                        pcVar14 = (char *)pppppuVar15;
                      }
                      else {
                        pppppuVar19 = pppppuVar29;
                        func_0x000107c613c0(pppppuVar29,"grpc.keepalive_permit_without_calls");
                        if ((int)pppppuVar19 == 0) {
                          pppppuVar19 = (ulong *****)0x0;
                          func_0x0001004865d8();
                          *(bool *)(param_1 + 0x19b) = (int)pppppuVar15 != 0;
                          pcVar14 = (char *)pppppuVar15;
                        }
                        else {
                          pppppuVar19 = pppppuVar29;
                          func_0x000107c613c0(pppppuVar29,"grpc.optimization_target");
                          if ((int)pppppuVar19 == 0) {
                            pcVar14 = 
                            "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                            ;
                            pppppuVar19 = (ulong *****)0x170;
                            FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                                          ,0x170,1,"GRPC_ARG_OPTIMIZATION_TARGET is deprecated");
                          }
                          else {
                            pppppuVar19 = pppppuVar29;
                            func_0x000107c613c0(pppppuVar29,"grpc.enable_channelz");
                            if ((int)pppppuVar19 == 0) {
                              pppppuVar19 = (ulong *****)0x1;
                              FUN_1004808c4();
                              uStack_18c = (uint)pppppuVar15;
                              pcVar14 = (char *)pppppuVar15;
                            }
                            else {
                              lVar22 = 6;
                              ppuVar27 = &PTR_s_grpc_max_concurrent_streams_1107c40a8;
                              do {
                                pppppuVar19 = (ulong *****)*ppuVar27;
                                pcVar14 = (char *)pppppuVar29;
                                func_0x000107c613c0();
                                if ((int)pcVar14 == 0) {
                                  if (*(char *)((long)ppuVar27 + ((ulong)param_4 | 0x18)) == '\0') {
                                    pcVar14 = 
                                    "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                                    ;
                                    pppppuVar19 = (ulong *****)0x197;
                                    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                                                  ,0x197,0,"%s is not available on %s");
                                  }
                                  else {
                                    pppppuVar19 = *(ulong ******)((long)ppuVar27 + 0xc);
                                    func_0x0001004865d8();
                                    pcVar14 = (char *)pppppuVar15;
                                    if (-1 < (int)pppppuVar15) {
                                      pppppuVar19 = (ulong *****)(ulong)*(uint *)(ppuVar27 + 1);
                                      pcVar14 = (char *)param_1;
                                      FUN_100746be0(param_1,pppppuVar19,pppppuVar15);
                                    }
                                  }
                                  break;
                                }
                                ppuVar27 = ppuVar27 + 4;
                                lVar22 = lVar22 + -1;
                              } while (lVar22 != 0);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          pppuVar28 = (ulong ***)((long)pppuVar28 + 1);
        } while (pppuVar28 < *param_2);
        if ((uStack_18c & 1) == 0) goto LAB_100743464;
      }
      ppppuVar16 = param_1[2];
      FUN_100746c84(ppppuVar16);
      if ((ulong *****)0x7ffffffffffffff7 < pppppuVar19) goto LAB_1007435f8;
      if (pppppuVar19 < (ulong *****)0x17) {
        uStack_c0 = CONCAT17((char)pppppuVar19,(undefined7)uStack_c0);
        pppppcVar17 = &ppppcStack_d0;
        if (pppppuVar19 != (ulong *****)0x0) goto LAB_100743380;
      }
      else {
        uVar6 = ((ulong)pppppuVar19 & 0xfffffffffffffff8) + 8;
        if (((ulong)pppppuVar19 | 7) != 0x17) {
          uVar6 = (ulong)pppppuVar19 | 7;
        }
        pppppcVar17 = (char *****)(uVar6 + 1);
        func_0x000107c60e20();
        uStack_c0 = uVar6 + 1 | 0x8000000000000000;
        ppppcStack_d0 = (char ****)pppppcVar17;
        ppppuStack_c8 = (ulong ****)pppppuVar19;
LAB_100743380:
        func_0x000107c610b8(pppppcVar17,ppppuVar16,pppppuVar19);
      }
      *(char *)((long)pppppcVar17 + (long)pppppuVar19) = '\0';
      ppppuStack_a0 = (ulong ****)0x10f235279;
      ppppuStack_98 = (ulong ****)FUN_1005616c4;
      uStack_88 = 0x100746d14;
      ppppuStack_90 = (ulong ****)pppppuVar20;
      FUN_1004d4da0(&ppppuStack_108,&UNK_10f591ec1,5,&ppppuStack_a0,2);
      FUN_100746d5c(&ppppuStack_a0,param_2);
      FUN_100746dbc(&pppuStack_118,&ppppcStack_d0,pppppuVar20,&ppppuStack_108,&ppppuStack_a0);
      pppuVar28 = pppuStack_118;
      ppppuVar16 = param_1[0x19d];
      if (ppppuVar16 != (ulong ****)0x0) {
        ppppuVar24 = ppppuVar16 + 1;
        do {
          pppuVar23 = *ppppuVar24;
          cVar9 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(ppppuVar24,0x10);
          if (bVar11) {
            *ppppuVar24 = (ulong ***)((long)pppuVar23 + -1);
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if ((ulong ***)((long)pppuVar23 + -1) == (ulong ***)0x0) {
          (*(code *)(*ppppuVar16)[1])();
        }
      }
      param_1[0x19d] = (ulong ****)pppuVar28;
      pppuStack_118 = (ulong ***)0x0;
      pcVar14 = (char *)ppppuStack_a0;
      if ((ulong *****)ppppuStack_a0 != (ulong *****)0x0) {
        pppppuVar26 = (ulong *****)(ppppuStack_a0 + 1);
        do {
          ppppuVar16 = *pppppuVar26;
          cVar9 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(pppppuVar26,0x10);
          if (bVar11) {
            *pppppuVar26 = (ulong ****)((long)ppppuVar16 + -1);
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if ((ulong ****)((long)ppppuVar16 + -1) == (ulong ****)0x0) {
          (*(code *)(*ppppuStack_a0)[1])();
        }
      }
      pppppuVar19 = pppppuVar20;
      if ((char)bStack_f1 < '\0') {
        func_0x000107c60e14();
        pcVar14 = (char *)ppppuStack_108;
        pppppuVar19 = pppppuVar20;
      }
    }
LAB_100743464:
    uVar21 = SUB84(pppppuVar19,0);
    *(undefined4 *)(param_1 + 0x108) = 0;
    *(char *)(param_1 + 0x110) = '\0';
    param_1[0x107] = (ulong ****)0x8000000000000000;
    param_1[0x119] = (ulong ****)0x8000000000000000;
    *(undefined4 *)(param_1 + 0x11a) = 0;
    if (param_1[0x199] == (ulong ****)0x7fffffffffffffff) {
      pcVar14 = (char *)((long)param_1 + 0xcdc);
      pcVar14[0] = '\x03';
      pcVar14[1] = '\0';
      pcVar14[2] = '\0';
      pcVar14[3] = '\0';
    }
    else {
      pcVar1 = (char *)((long)param_1 + 0xcdc);
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      do {
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(pppppuVar30,0x10);
        if (bVar11) {
          *pppppuVar30 = (ulong ****)((long)*pppppuVar30 + 1);
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      param_1[0x17c] = (ulong ****)FUN_100748e30;
      param_1[0x17d] = (ulong ****)param_1;
      param_1[0x17e] = (ulong ****)0x0;
      func_0x000100460dc4();
      ppppuVar16 = *(ulong *****)pcVar14;
      FUN_1004671a4();
      ppppuVar24 = *pppppuVar13;
      lVar22 = 0x7fffffffffffffff;
      if ((ppppuVar16 != (ulong ****)0x7fffffffffffffff &&
           ppppuVar24 != (ulong ****)0x7fffffffffffffff) &&
         (lVar22 = -0x8000000000000000,
         ppppuVar16 != (ulong ****)0x8000000000000000 &&
         ppppuVar24 != (ulong ****)0x8000000000000000)) {
        if ((long)ppppuVar16 < 1) {
          if (-0x8000000000000000 - (long)ppppuVar16 <= (long)ppppuVar24) goto LAB_100743524;
        }
        else if ((long)((ulong)ppppuVar16 ^ 0x7fffffffffffffff) < (long)ppppuVar24) {
          lVar22 = 0x7fffffffffffffff;
        }
        else {
LAB_100743524:
          lVar22 = (long)ppppuVar24 + (long)ppppuVar16;
        }
      }
      func_0x000100480ee4(param_1 + 0x18b,lVar22,param_1 + 0x17b);
      uVar21 = (undefined4)lVar22;
    }
    if (*(char *)(param_1 + 0x137) != '\0') {
      *(char *)(param_1 + 0x15a) = '\x01';
      FUN_100747038();
      ppppuStack_98 = (ulong ****)CONCAT44(ppppuStack_98._4_4_,uVar21);
      ppppuStack_a0 = (ulong ****)pppppuVar18;
      FUN_100747370(&ppppuStack_a0,param_1,0);
    }
    FUN_1007474b0(param_1,0);
    FUN_100747908(param_1);
    if (pcRam00000001136a1df8 != (code *)0x0) {
      (*pcRam00000001136a1df8)();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return param_1;
    }
  }
  else {
    func_0x000104a6fa5c(pppppuVar20);
  }
  func_0x000107c60e78();
LAB_1007435f8:
  func_0x000104a6fa5c(&ppppcStack_d0);
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x100743604);
  (*pcVar10)();
}



/* Entry: 1007437f0; end: 1007437f7;  */

void FUN_1007437f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100741558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x38))();
  return;
}



/* Entry: 1007437f8; end: 1007437ff; -[SCLensInfoCardVisibilityServices lensInfoButtonVisibility] */

undefined8 FUN_1007437f8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100743800; end: 100743823;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100743800(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_1127265a8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100743824; end: 10074382b; -[SCBloopsFeatureInfoService bloopsFeature] */

undefined8 FUN_100743824(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10074382c; end: 100743833; -[SCBloopsFeatureInfoService bloopsUserOnboardingStatusProvider] */

undefined8 FUN_10074382c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100743834; end: 10074383b; -[SCLensScheduleMetadataStoreServices sponsoredLensScheduleService] */

undefined8 FUN_100743834(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10074383c; end: 100743abf;  */

void FUN_10074383c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  puVar2 = *(undefined **)(param_1 + 0x20);
  func_0x000107c4b6cc();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c518fc();
  func_0x000107c61180();
  puVar9 = PTR____NSArray0__struct_11034ab48;
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar4 != (undefined *)0x0) {
    puVar1 = puVar4;
  }
  func_0x000107c61174(puVar1);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  puVar2 = *(undefined **)(param_1 + 0x28);
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar4 = puVar2;
  func_0x000107c518fc();
  func_0x000107c61180();
  puVar3 = puVar9;
  if (puVar4 != (undefined *)0x0) {
    puVar3 = puVar4;
  }
  func_0x000107c61174(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar2);
  puVar5 = *(undefined **)(param_1 + 0x20);
  func_0x000107c5d168();
  func_0x000107c61180();
  puVar2 = puVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar6 = puVar2;
  func_0x000107c518fc();
  func_0x000107c61180();
  puVar4 = puVar9;
  if (puVar6 != (undefined *)0x0) {
    puVar4 = puVar6;
  }
  func_0x000107c61174(puVar4);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar5);
  puVar5 = *(undefined **)(param_1 + 0x20);
  func_0x000107c3f014();
  func_0x000107c61180();
  puVar2 = puVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar6 = puVar2;
  func_0x000107c518fc();
  func_0x000107c61180();
  if (puVar6 != (undefined *)0x0) {
    puVar9 = puVar6;
  }
  func_0x000107c61174(puVar9);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar5);
  puVar2 = puVar1;
  func_0x000107c3e164(puVar1,param_2,puVar3);
  func_0x000107c61180();
  puVar6 = puVar2;
  func_0x000107c3e164();
  func_0x000107c61180();
  puVar5 = puVar6;
  func_0x000107c3e164();
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar2);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c5c734(uVar7);
  func_0x000107c61180();
  uVar8 = uVar7;
  func_0x000107c51ff0();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  puVar9 = PTR_PTR_1126de430;
  func_0x000107c610f4(PTR_PTR_1126de430);
  uVar7 = uVar8;
  func_0x000107c5c734(uVar8);
  func_0x000107c61180();
  func_0x000107c473ec(puVar9,param_2,uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 100743ac0; end: 100743b33;  */

void FUN_100743ac0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x000107c40aa4(uVar1);
  func_0x000107c61180();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c40aa4();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 100743b34; end: 100743b63;  */

void FUN_100743b34(void)

{
  func_0x000107c610f4(PTR_PTR_1126de408);
  func_0x000107c48604();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100743b64; end: 100743c37; -[SCMixerScheduleNamespaceServiceFactoryAdapter initWithServiceProvider:] */

undefined1 * FUN_100743b64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112701648;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100743c38; end: 100743c93; -[SCMixerScheduleNamespaceServiceFactoryAdapter serviceForServiceType:] */

void FUN_100743c38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_1007458bc;
  puStack_20 = &UNK_110c8e928;
  uStack_18 = param_3;
  func_0x000107c4c280(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100743c94; end: 100743d7b; +[SCLensScheduleMetadataStoreProvider _readOnlyScheduleServiceFromScheduleService:studySettingsProvider:] */

void FUN_100743c94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174(param_4);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10074a9a8;
  puStack_30 = &UNK_110c8f738;
  uStack_28 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c4c280(param_3,param_2,&puStack_48);
  func_0x000107c61180();
  func_0x000107c61170(uStack_28);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 100743d7c; end: 100743db7;  */

void FUN_100743d7c(long param_1,undefined8 param_2)

{
  func_0x000107c3bf50(PTR_PTR_1126de3a0,param_2,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x58));
  return;
}



/* Entry: 100743db8; end: 1007440e3; +[SCLensScheduleNamespaceServiceEntryPoint _mixerNamespaceFactoryWithMetadataStoreProvider:feedMetadataStoreProvider:mixerMetadataFetcher:updater:asyncUpdateStrategy:lensDataConfig:lensCarouselStudySettings:feedContextProvider:] */

void FUN_100743db8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_8);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_3);
  func_0x000107c3e4fc(puVar1,param_2,&PTR___NSConcreteGlobalBlock_110c8dab0);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  uStack_a0 = 0xc2000000;
  puStack_98 = &UNK_10ae9eca0;
  puStack_90 = &UNK_110c8dad0;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = param_5;
  puStack_80 = puVar1;
  uStack_78 = param_4;
  uStack_70 = param_8;
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_4);
  func_0x000107c61174(puVar1);
  func_0x000107c61174(param_5);
  func_0x000107c3e4fc(puVar2,param_2,&puStack_a8);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ae790;
  func_0x000107c610f4();
  func_0x000107c470d0();
  uVar4 = param_8;
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ae790;
  func_0x000107c610f4();
  func_0x000107c470d0();
  puVar6 = PTR_PTR_1126aeea8;
  func_0x000107c61160();
  puVar7 = PTR_PTR_1126de450;
  func_0x000107c610f4();
  uVar8 = param_9;
  func_0x000107c5c734(param_9);
  func_0x000107c61180();
  func_0x000107c61170(param_9);
  uVar9 = uVar8;
  func_0x000107c42f14(uVar8);
  func_0x000107c61180();
  func_0x000107c48d0c(puVar7,param_2,puVar6,uVar9,param_10);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar8);
  puVar10 = PTR_PTR_1126de458;
  func_0x000107c610f4();
  puVar11 = PTR_PTR_1126c8c48;
  func_0x000107c4d428();
  func_0x000107c61180();
  func_0x000107c477d0(puVar10,param_2,param_3,puVar1,param_4,param_6,puVar2,param_7,puVar7,puVar11,
                      uVar4,puVar3,puVar5);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uStack_70);
  func_0x000107c61170(uStack_78);
  func_0x000107c61170(puStack_80);
  func_0x000107c61170(uStack_88);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_4);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1007440e4; end: 10074413b; -[SCLensCarouselStudySettingsProvider feedDataTtlInSeconds] */

void FUN_1007440e4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4980c();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0df770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSNumber_1126ae570,PTR_s_numberWithInt__1126157f0,uVar2);
  return;
}



/* Entry: 10074413c; end: 100744147;  */

void FUN_10074413c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf461f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_configProviderForNamespace__1125af220,7);
  return;
}



/* Entry: 100744148; end: 1007441d3;  */

undefined8 * FUN_100744148(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0xa8;
  func_0x000107c60e20();
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0x14] = 0;
  puVar2 = puVar1 + 10;
  puVar1[0xb] = 0;
  *puVar2 = 0;
  puVar1[1] = puVar2;
  puVar1[9] = puVar2;
  *(undefined1 *)(puVar1 + 0xd) = 0;
  FUN_100480ed8(puVar1 + 0x14,1);
  puVar1[0xc] = 1;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x11] = &UNK_104aba468;
  puVar1[0x12] = puVar1;
  puVar1[0x13] = 0;
  return puVar1;
}



/* Entry: 1007441d4; end: 100744243;  */

void FUN_1007441d4(ulong *param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  
  if (param_2 < 0x81) {
    lVar3 = 0;
    if (param_2 == 0) goto LAB_10074422c;
  }
  else {
    uVar2 = param_2;
    if (param_2 < 0x101) {
      uVar2 = 0x100;
    }
    puVar1 = param_1;
    func_0x000104a9a738();
    param_1[1] = (ulong)puVar1;
    param_1[2] = uVar2;
    *param_1 = *param_1 | 1;
  }
  lVar3 = param_2 << 1;
  func_0x000107c60ee4();
LAB_10074422c:
  *param_1 = *param_1 + lVar3;
  return;
}



/* Entry: 100744244; end: 100744287;  */

undefined8 * FUN_100744244(undefined8 *param_1)

{
  *param_1 = 0;
  FUN_1007441d4();
  return param_1;
}



/* Entry: 100744288; end: 100744333;  */

undefined4 * FUN_100744288(undefined4 *param_1)

{
  undefined1 uStack_31;
  
  *param_1 = 0x1000;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 2) = 0x100000000000;
  FUN_100744244(param_1 + 6,0x80,&uStack_31);
  *(undefined8 *)(param_1 + 0x5d) = 0;
  *(undefined8 *)(param_1 + 0x5b) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x4e) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  FUN_1005618a8(param_1 + 0x5f);
  *(undefined8 *)(param_1 + 0x76) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0x7a) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x6e) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x72) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x66) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x6a) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  return param_1;
}



/* Entry: 100744334; end: 10074433b;  */

undefined8 * FUN_100744334(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_100744334(param_1 + 7);
  return param_1;
}



/* Entry: 10074433c; end: 100744387;  */

undefined8 * FUN_10074433c(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_100744334(param_1 + 7);
  return param_1;
}



/* Entry: 100744388; end: 1007443fb;  */

undefined8 * FUN_100744388(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = 0x100000000000;
  *(undefined4 *)(param_1 + 1) = 0x1000;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0x80;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  puVar1 = param_1;
  FUN_1007443fc();
  param_1[7] = puVar1;
  return param_1;
}



/* Entry: 1007443fc; end: 100744487;  */

undefined8 FUN_1007443fc(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((bRam00000001136a1e38 & 1) == 0) {
    iVar1 = 0x136a1e38;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      uVar2 = 0xb70;
      func_0x000107c60e20();
      FUN_100744488();
      uRam00000001136a1e30 = uVar2;
      func_0x000107c60e4c(0x1136a1e38);
    }
  }
  return uRam00000001136a1e30;
}



/* Entry: 100744488; end: 1007445a7;  */

/* WARNING: Possible PIC construction at 0x000104aa58cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104aa4f0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104aa4d94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104aa4c1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104aa4aa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104aa48e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104aa4aa8) */
/* WARNING: Removing unreachable block (ram,0x000104aa4ae8) */
/* WARNING: Removing unreachable block (ram,0x000104aa4b00) */
/* WARNING: Removing unreachable block (ram,0x000104aa4ad8) */
/* WARNING: Removing unreachable block (ram,0x000104aa4c20) */
/* WARNING: Removing unreachable block (ram,0x000104aa4c60) */
/* WARNING: Removing unreachable block (ram,0x000104aa4c78) */
/* WARNING: Removing unreachable block (ram,0x000104aa4c50) */
/* WARNING: Removing unreachable block (ram,0x000104aa4d98) */
/* WARNING: Removing unreachable block (ram,0x000104aa4dd8) */
/* WARNING: Removing unreachable block (ram,0x000104aa4df0) */
/* WARNING: Removing unreachable block (ram,0x000104aa4dc8) */
/* WARNING: Removing unreachable block (ram,0x000104aa4f10) */
/* WARNING: Removing unreachable block (ram,0x000104aa4f50) */
/* WARNING: Removing unreachable block (ram,0x000104aa4f68) */
/* WARNING: Removing unreachable block (ram,0x000104aa4f40) */
/* WARNING: Removing unreachable block (ram,0x000104aa58d0) */
/* WARNING: Removing unreachable block (ram,0x000104aa5910) */
/* WARNING: Removing unreachable block (ram,0x000104aa5928) */
/* WARNING: Removing unreachable block (ram,0x000104aa5900) */
/* WARNING: Removing unreachable block (ram,0x000104aa48e8) */
/* WARNING: Removing unreachable block (ram,0x000104aa4928) */
/* WARNING: Removing unreachable block (ram,0x000104aa4940) */
/* WARNING: Removing unreachable block (ram,0x000104aa4918) */

long ***** FUN_100744488(long *****param_1,undefined8 param_2)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *****ppppplVar7;
  long *****ppppplVar8;
  long *****ppppplVar9;
  long *****ppppplVar10;
  int iVar11;
  ulong uVar12;
  undefined1 *puVar13;
  undefined *puVar14;
  uint uVar15;
  long lVar16;
  undefined8 extraout_x8;
  long ****pppplVar17;
  undefined8 extraout_x8_00;
  undefined8 *extraout_x8_01;
  long ***ppplVar18;
  long ****pppplVar19;
  uint uVar20;
  long ****pppplVar21;
  long ****pppplVar22;
  long ****pppplVar23;
  long ***ppplVar24;
  long ***ppplVar25;
  long ***ppplStack_200;
  long ***ppplStack_1f8;
  undefined1 ****ppppuStack_1f0;
  long ***ppplStack_1e8;
  long ****pppplStack_1d8;
  long ***ppplStack_1d0;
  long ***ppplStack_1c8;
  long ***ppplStack_1c0;
  long ***ppplStack_1b8;
  long ****pppplStack_1b0;
  long ****pppplStack_1a8;
  undefined1 ***pppuStack_1a0;
  code *pcStack_198;
  long ****pppplStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long ****pppplStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 *puStack_150;
  undefined *puStack_148;
  ulong uStack_140;
  long lStack_138;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  undefined1 uStack_e9;
  long ****pppplStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  long ***ppplStack_78;
  long ***ppplStack_70;
  long ***ppplStack_68;
  long ***ppplStack_60;
  long ***ppplStack_58;
  undefined4 uStack_50;
  long lStack_48;
  
  lVar16 = 0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  do {
    *(undefined8 *)((long)param_1 + lVar16) = &UNK_1107c4408;
    *(undefined4 *)((undefined8 *)((long)param_1 + lVar16) + 5) = 0;
    lVar16 = lVar16 + 0x30;
  } while (lVar16 != 0xb70);
  lVar16 = 0;
  ppppplVar10 = param_1;
  do {
    FUN_1007445a8(&ppplStack_78,lVar16);
    *ppppplVar10 = (long ****)ppplStack_78;
    ppppplVar10[2] = (long ****)ppplStack_68;
    ppppplVar10[1] = (long ****)ppplStack_70;
    ppppplVar10[4] = (long ****)ppplStack_58;
    ppppplVar10[3] = (long ****)ppplStack_60;
    *(undefined4 *)(ppppplVar10 + 5) = uStack_50;
    ppplStack_78 = (long ***)&UNK_1107c4408;
    pppplVar17 = &ppplStack_70;
    FUN_100744a04();
    iVar11 = (int)param_2;
    lVar16 = lVar16 + 1;
    ppppplVar10 = ppppplVar10 + 6;
  } while (lVar16 != 0x3d);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  func_0x000107c60e78();
  if (iVar11 == 0) {
    func_0x000107c60bd8(pppplVar17);
  }
  func_0x000104bd46a0();
  pcStack_88 = FUN_1007445a8;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (&PTR_DAT_1107c4448)[(long)pppplVar17 * 2];
  puVar14 = (&PTR_s__1107c4450)[(long)pppplVar17 * 2];
  puVar4 = puVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x000107c613d0();
  puVar5 = puVar14;
  func_0x000107c613d0();
  pppplStack_e8 = (long ****)0x1;
  puVar6 = puVar1;
  puStack_e0 = puVar5;
  puStack_d8 = puVar14;
  func_0x000107c613d0();
  uVar12 = (ulong)((int)puVar5 + (int)puVar6 + 0x20);
  puVar14 = &UNK_104aa7258;
  ppppplVar10 = &pppplStack_e8;
  puVar13 = &uStack_e9;
  FUN_1007446b8(extraout_x8,puVar1,puVar4,ppppplVar10);
  ppppplVar7 = (long *****)pppplStack_e8;
  if ((long *****)0x1 < pppplStack_e8) {
    do {
      pppplVar17 = (long ****)*pppplStack_e8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppplStack_e8,0x10);
      if (bVar3) {
        *pppplStack_e8 = (long ***)((long)pppplVar17 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((long ****)((long)pppplVar17 + -1) == (long ****)0x0) {
      (*(code *)pppplStack_e8[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return ppppplVar7;
  }
  func_0x000107c60e78();
  if ((int)puVar4 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&pppplStack_e8);
  }
  func_0x000107c60bd8();
  pcStack_f8 = FUN_1007446b8;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_100 = &puStack_90;
  func_0x0001004bca54(&pppplStack_190,ppppplVar10);
  uStack_140 = uVar12 & 0xffffffff;
  uStack_168 = uStack_188;
  pppplStack_170 = pppplStack_190;
  uStack_158 = uStack_178;
  uStack_160 = uStack_180;
  uStack_188 = 0;
  pppplStack_190 = (long ****)0x0;
  uStack_178 = 0;
  uStack_180 = 0;
  ppppplVar10 = &pppplStack_170;
  puStack_150 = puVar13;
  puStack_148 = puVar14;
  FUN_1007447bc(extraout_x8_00,ppppplVar7);
  ppppplVar8 = (long *****)pppplStack_170;
  if ((long *****)0x1 < pppplStack_170) {
    do {
      pppplVar17 = (long ****)*pppplStack_170;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppplStack_170,0x10);
      if (bVar3) {
        *pppplStack_170 = (long ***)((long)pppplVar17 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((long ****)((long)pppplVar17 + -1) == (long ****)0x0) {
      (*(code *)pppplStack_170[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return ppppplVar8;
  }
  func_0x000107c60e78();
  if ((int)puVar4 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&pppplStack_170);
  }
  ppppplVar9 = ppppplVar8;
  func_0x000107c60bd8();
  pppplStack_1b0 = (long ****)ppppplVar7;
  pppplStack_1a8 = (long ****)ppppplVar8;
  pppuStack_1a0 = &ppuStack_100;
  if ((puVar4 == (undefined *)0x5) &&
     (*(int *)ppppplVar9 == 0x7461703a && *(char *)((long)ppppplVar9 + 4) == 'h')) {
    pcStack_198 = FUN_1007447bc;
    ppplStack_1b8 = *(long ****)PTR____stack_chk_guard_11034bdc0;
    ppppplVar7 = ppppplVar10;
    FUN_10074482c(&pppplStack_1d8);
    pppplVar17 = ppppplVar10[6];
    FUN_100744d34();
    *extraout_x8_01 = ppppplVar7;
    *(int *)(extraout_x8_01 + 5) = (int)pppplVar17;
    extraout_x8_01[2] = ppplStack_1d0;
    extraout_x8_01[1] = pppplStack_1d8;
    extraout_x8_01[4] = ppplStack_1c0;
    extraout_x8_01[3] = ppplStack_1c8;
    if ((long ***)*(long *)PTR____stack_chk_guard_11034bdc0 == ppplStack_1b8) {
      return ppppplVar7;
    }
    func_0x000107c60e78();
    FUN_1004b6d90(&pppplStack_1d8);
    func_0x000107c60bd8(ppppplVar7);
    ppplStack_1e8 = (long ***)FUN_100744d34;
    if ((bRam00000001130a5980 & 1) == 0) {
      iVar11 = 0x130a5980;
      ppppuStack_1f0 = &pppuStack_1a0;
      func_0x000107c60e48();
      if (iVar11 != 0) {
        uRam00000001130a5940 = 0;
        puRam00000001130a5948 = &UNK_104adf4cc;
        puRam00000001130a5950 = &UNK_104aa2608;
        puRam00000001130a5958 = &UNK_104aa2538;
        puRam00000001130a5960 = &UNK_104aa2730;
        puRam00000001130a5968 = &DAT_10f760227;
        uRam00000001130a5970 = 5;
        uRam00000001130a5978 = 0;
        func_0x000107c60e4c(0x1130a5980);
      }
    }
    return (long *****)0x1130a5940;
  }
  if ((puVar4 == (undefined *)0xa) &&
     (*ppppplVar9 == (long ****)0x69726f687475613a && *(short *)(ppppplVar9 + 1) == 0x7974)) {
    pcStack_198 = FUN_1007447bc;
    ppplStack_1b8 = *(long ****)PTR____stack_chk_guard_11034bdc0;
    ppppplVar7 = ppppplVar10;
    FUN_10074482c(&pppplStack_1d8);
    pppplVar17 = ppppplVar10[6];
    FUN_100744974();
    *extraout_x8_01 = ppppplVar7;
    *(int *)(extraout_x8_01 + 5) = (int)pppplVar17;
    extraout_x8_01[2] = ppplStack_1d0;
    extraout_x8_01[1] = pppplStack_1d8;
    extraout_x8_01[4] = ppplStack_1c0;
    extraout_x8_01[3] = ppplStack_1c8;
    if ((long ***)*(long *)PTR____stack_chk_guard_11034bdc0 == ppplStack_1b8) {
      return ppppplVar7;
    }
    func_0x000107c60e78();
    FUN_1004b6d90(&pppplStack_1d8);
    func_0x000107c60bd8(ppppplVar7);
    ppplStack_1e8 = (long ***)FUN_100744974;
    if ((bRam00000001130a59c8 & 1) == 0) {
      iVar11 = 0x130a59c8;
      ppppuStack_1f0 = &pppuStack_1a0;
      func_0x000107c60e48();
      if (iVar11 != 0) {
        uRam00000001130a5988 = 0;
        puRam00000001130a5990 = &UNK_104adf4cc;
        puRam00000001130a5998 = &UNK_104aa28ac;
        puRam00000001130a59a0 = &UNK_104aa2538;
        puRam00000001130a59a8 = &UNK_104aa28d4;
        puRam00000001130a59b0 = &DAT_10f760214;
        uRam00000001130a59b8 = 10;
        uRam00000001130a59c0 = 0;
        func_0x000107c60e4c(0x1130a59c8);
      }
    }
    return (long *****)0x1130a5988;
  }
  if ((puVar4 == (undefined *)0x7) &&
     (*(int *)ppppplVar9 == 0x74656d3a && *(int *)((long)ppppplVar9 + 3) == 0x646f6874)) {
    pcStack_198 = FUN_1007447bc;
    ppppplVar7 = ppppplVar10;
    ppplStack_1c0 = (long ***)puVar14;
    FUN_100744b0c();
    pppplVar17 = ppppplVar10[6];
    ppppplVar10 = ppppplVar7;
    FUN_100744c0c();
    *extraout_x8_01 = ppppplVar10;
    *(int *)(extraout_x8_01 + 5) = (int)pppplVar17;
    *(int *)(extraout_x8_01 + 1) = (int)ppppplVar7;
    return ppppplVar10;
  }
  if ((puVar4 == (undefined *)0x7) &&
     (*(int *)ppppplVar9 == 0x6174733a && *(int *)((long)ppppplVar9 + 3) == 0x73757461)) {
    pcStack_198 = FUN_1007447bc;
    ppppplVar7 = ppppplVar10;
    ppplStack_1c0 = (long ***)puVar14;
    FUN_100745064();
    pppplVar17 = ppppplVar10[6];
    ppppplVar10 = ppppplVar7;
    FUN_10074582c();
    *extraout_x8_01 = ppppplVar10;
    *(int *)(extraout_x8_01 + 5) = (int)pppplVar17;
    *(int *)(extraout_x8_01 + 1) = (int)ppppplVar7;
    return ppppplVar10;
  }
  if ((puVar4 == (undefined *)0x7) &&
     (*(int *)ppppplVar9 == 0x6863733a && *(int *)((long)ppppplVar9 + 3) == 0x656d6568)) {
    pcStack_198 = FUN_1007447bc;
    ppppplVar7 = ppppplVar10;
    ppplStack_1c0 = (long ***)puVar14;
    FUN_100744e34();
    pppplVar17 = ppppplVar10[6];
    ppppplVar10 = ppppplVar7;
    FUN_100744f54();
    *extraout_x8_01 = ppppplVar10;
    *(int *)(extraout_x8_01 + 5) = (int)pppplVar17;
    *(int *)(extraout_x8_01 + 1) = (int)ppppplVar7;
    return ppppplVar10;
  }
  if ((puVar4 == (undefined *)0xc) &&
     (*ppppplVar9 == (long ****)0x2d746e65746e6f63 && *(int *)(ppppplVar9 + 1) == 0x65707974)) {
    pcStack_198 = FUN_1007447bc;
    ppppplVar7 = ppppplVar10;
    ppplStack_1c0 = (long ***)puVar14;
    FUN_100746544();
    pppplVar17 = ppppplVar10[6];
    ppppplVar10 = ppppplVar7;
    FUN_100746644();
    *extraout_x8_01 = ppppplVar10;
    *(int *)(extraout_x8_01 + 5) = (int)pppplVar17;
    *(int *)(extraout_x8_01 + 1) = (int)ppppplVar7;
    return ppppplVar10;
  }
  if ((puVar4 == (undefined *)0x2) && (*(short *)ppppplVar9 == 0x6574)) {
    pcStack_198 = FUN_1007447bc;
    ppppplVar7 = ppppplVar10;
    ppplStack_1c0 = (long ***)puVar14;
    func_0x000104aa30c8();
    pppplVar17 = ppppplVar10[6];
    ppppplVar10 = ppppplVar7;
    func_0x000104aa3184();
    *extraout_x8_01 = ppppplVar10;
    *(int *)(extraout_x8_01 + 5) = (int)pppplVar17;
    *(char *)(extraout_x8_01 + 1) = (char)ppppplVar7;
    return ppppplVar10;
  }
  if ((puVar4 == (undefined *)0xd) &&
     (*ppppplVar9 == (long ****)0x636e652d63707267 &&
      *(long *)((long)ppppplVar9 + 5) == 0x676e69646f636e65)) {
    pcStack_198 = FUN_1007447bc;
    ppppplVar7 = ppppplVar10;
    ppplStack_1c0 = (long ***)puVar14;
    func_0x000104aa3424();
    pppplVar17 = ppppplVar10[6];
    ppppplVar10 = ppppplVar7;
    func_0x000104aa34e0();
    *extraout_x8_01 = ppppplVar10;
    *(int *)(extraout_x8_01 + 5) = (int)pppplVar17;
    *(int *)(extraout_x8_01 + 1) = (int)ppppplVar7;
    return ppppplVar10;
  }
  if ((puVar4 == (undefined *)0x1e) &&
     (((*ppppplVar9 == (long ****)0x746e692d63707267 &&
       ppppplVar9[1] == (long ****)0x6e652d6c616e7265) &&
      ppppplVar9[2] == (long ****)0x722d676e69646f63) &&
      *(long *)((long)ppppplVar9 + 0x16) == 0x747365757165722d)) {
    pcStack_198 = FUN_1007447bc;
    ppppplVar7 = ppppplVar10;
    ppplStack_1c0 = (long ***)puVar14;
    func_0x000104aa3424();
    pppplVar17 = ppppplVar10[6];
    ppppplVar10 = ppppplVar7;
    func_0x000104aa37a4();
    *extraout_x8_01 = ppppplVar10;
    *(int *)(extraout_x8_01 + 5) = (int)pppplVar17;
    *(int *)(extraout_x8_01 + 1) = (int)ppppplVar7;
    return ppppplVar10;
  }
  if ((puVar4 == (undefined *)0x14) &&
     ((*ppppplVar9 == (long ****)0x6363612d63707267 &&
      ppppplVar9[1] == (long ****)0x6f636e652d747065) && *(int *)(ppppplVar9 + 2) == 0x676e6964)) {
    pcStack_198 = FUN_1007447bc;
    ppppplVar7 = ppppplVar10;
    ppplStack_1c0 = (long ***)puVar14;
    func_0x000104aa38c0();
    pppplVar17 = ppppplVar10[6];
    ppppplVar10 = ppppplVar7;
    func_0x000104aa3998();
    *extraout_x8_01 = ppppplVar10;
    *(int *)(extraout_x8_01 + 5) = (int)pppplVar17;
    ppppplVar10 = (long *****)0x1;
    __Znwm();
    *(char *)ppppplVar10 = (char)ppppplVar7;
    extraout_x8_01[1] = ppppplVar10;
    return ppppplVar10;
  }
  if ((puVar4 == (undefined *)0xb) &&
     (*ppppplVar9 == (long ****)0x6174732d63707267 &&
      *(long *)((long)ppppplVar9 + 3) == 0x7375746174732d63)) {
    pcStack_198 = FUN_1007447bc;
    ppppplVar7 = ppppplVar10;
    ppplStack_1c0 = (long ***)puVar14;
    func_0x000104aa3cc4();
    pppplVar17 = ppppplVar10[6];
    ppppplVar10 = ppppplVar7;
    func_0x000104aa3d80();
    *extraout_x8_01 = ppppplVar10;
    *(int *)(extraout_x8_01 + 5) = (int)pppplVar17;
    *(int *)(extraout_x8_01 + 1) = (int)ppppplVar7;
    return ppppplVar10;
  }
  if ((puVar4 == (undefined *)0xc) &&
     (*ppppplVar9 == (long ****)0x6d69742d63707267 && *(int *)(ppppplVar9 + 1) == 0x74756f65)) {
    pcStack_198 = FUN_1007447bc;
    ppppplVar7 = ppppplVar10;
    ppplStack_1c0 = (long ***)puVar14;
    func_0x000104aa4050();
    pppplVar17 = ppppplVar10[6];
    ppppplVar10 = ppppplVar7;
    func_0x000104aa410c();
    *(int *)(extraout_x8_01 + 5) = (int)pppplVar17;
    *extraout_x8_01 = ppppplVar10;
    extraout_x8_01[1] = ppppplVar7;
    return ppppplVar10;
  }
  if ((puVar4 == (undefined *)0x1a) &&
     (((*ppppplVar9 == (long ****)0x6572702d63707267 &&
       ppppplVar9[1] == (long ****)0x70722d73756f6976) &&
      ppppplVar9[2] == (long ****)0x706d657474612d63) && *(short *)(ppppplVar9 + 3) == 0x7374)) {
    pcStack_198 = FUN_1007447bc;
    ppppplVar7 = ppppplVar10;
    ppplStack_1c0 = (long ***)puVar14;
    FUN_100745064();
    pppplVar17 = ppppplVar10[6];
    ppppplVar10 = ppppplVar7;
    func_0x000104aa4414();
    *extraout_x8_01 = ppppplVar10;
    *(int *)(extraout_x8_01 + 5) = (int)pppplVar17;
    *(int *)(extraout_x8_01 + 1) = (int)ppppplVar7;
    return ppppplVar10;
  }
  if ((puVar4 == (undefined *)0x16) &&
     ((*ppppplVar9 == (long ****)0x7465722d63707267 &&
      ppppplVar9[1] == (long ****)0x62687375702d7972) &&
      *(long *)((long)ppppplVar9 + 0xe) == 0x736d2d6b63616268)) {
    pcStack_198 = FUN_1007447bc;
    ppppplVar7 = ppppplVar10;
    ppplStack_1c0 = (long ***)puVar14;
    func_0x000104aa4520();
    pppplVar17 = ppppplVar10[6];
    ppppplVar10 = ppppplVar7;
    func_0x000104aa45dc();
    *(int *)(extraout_x8_01 + 5) = (int)pppplVar17;
    *extraout_x8_01 = ppppplVar10;
    extraout_x8_01[1] = ppppplVar7;
    return ppppplVar10;
  }
  if ((puVar4 == (undefined *)0xa) &&
     (*ppppplVar9 == (long ****)0x6567612d72657375 && *(short *)(ppppplVar9 + 1) == 0x746e)) {
    pcStack_198 = FUN_1007447bc;
    ppplStack_1b8 = *(long ****)PTR____stack_chk_guard_11034bdc0;
    ppppplVar7 = ppppplVar10;
    FUN_10074482c(&pppplStack_1d8);
    pppplVar17 = ppppplVar10[6];
    FUN_100746894();
    *extraout_x8_01 = ppppplVar7;
    *(int *)(extraout_x8_01 + 5) = (int)pppplVar17;
    extraout_x8_01[2] = ppplStack_1d0;
    extraout_x8_01[1] = pppplStack_1d8;
    extraout_x8_01[4] = ppplStack_1c0;
    extraout_x8_01[3] = ppplStack_1c8;
    if ((long ***)*(long *)PTR____stack_chk_guard_11034bdc0 == ppplStack_1b8) {
      return ppppplVar7;
    }
    func_0x000107c60e78();
    FUN_1004b6d90(&pppplStack_1d8);
    func_0x000107c60bd8(ppppplVar7);
    ppplStack_1e8 = (long ***)FUN_100746894;
    if ((bRam00000001130a5d70 & 1) == 0) {
      iVar11 = 0x130a5d70;
      ppppuStack_1f0 = &pppuStack_1a0;
      func_0x000107c60e48();
      if (iVar11 != 0) {
        uRam00000001130a5d30 = 0;
        puRam00000001130a5d38 = &UNK_104adf4cc;
        puRam00000001130a5d40 = &UNK_104aa4864;
        puRam00000001130a5d48 = &UNK_104aa2538;
        puRam00000001130a5d50 = &UNK_104aa488c;
        puRam00000001130a5d58 = &DAT_10f740723;
        uRam00000001130a5d60 = 10;
        uRam00000001130a5d68 = 0;
        func_0x000107c60e4c(0x1130a5d70);
      }
    }
    return (long *****)0x1130a5d30;
  }
  if ((puVar4 == (undefined *)0xc) &&
     (*ppppplVar9 == (long ****)0x73656d2d63707267 && *(int *)(ppppplVar9 + 1) == 0x65676173)) {
    pcStack_198 = FUN_1007447bc;
    ppplStack_1b8 = *(long ****)PTR____stack_chk_guard_11034bdc0;
    FUN_10074482c(&pppplStack_1d8);
    ppplStack_1e8 = (long ***)&UNK_104aa48e8;
    if ((bRam00000001130a5db8 & 1) == 0) {
      iVar11 = 0x130a5db8;
      ppppuStack_1f0 = &pppuStack_1a0;
      ___cxa_guard_acquire();
      if (iVar11 != 0) {
        uRam00000001130a5d78 = 0;
        puRam00000001130a5d80 = &UNK_104adf4cc;
        puRam00000001130a5d88 = &UNK_104aa49d8;
        puRam00000001130a5d90 = &UNK_104aa2538;
        puRam00000001130a5d98 = &UNK_104aa4a00;
        puRam00000001130a5da0 = &UNK_10f67192f;
        uRam00000001130a5da8 = 0xc;
        uRam00000001130a5db0 = 0;
        ___cxa_guard_release(0x1130a5db8);
      }
    }
    return (long *****)0x1130a5d78;
  }
  if ((puVar4 == (undefined *)0x4) && (*(int *)ppppplVar9 == 0x74736f68)) {
    pcStack_198 = FUN_1007447bc;
    ppplStack_1b8 = *(long ****)PTR____stack_chk_guard_11034bdc0;
    ppppplVar7 = ppppplVar10;
    FUN_10074482c(&pppplStack_1d8);
    pppplVar17 = ppppplVar10[6];
    FUN_10074676c();
    *extraout_x8_01 = ppppplVar7;
    *(int *)(extraout_x8_01 + 5) = (int)pppplVar17;
    extraout_x8_01[2] = ppplStack_1d0;
    extraout_x8_01[1] = pppplStack_1d8;
    extraout_x8_01[4] = ppplStack_1c0;
    extraout_x8_01[3] = ppplStack_1c8;
    if ((long ***)*(long *)PTR____stack_chk_guard_11034bdc0 == ppplStack_1b8) {
      return ppppplVar7;
    }
    func_0x000107c60e78();
    FUN_1004b6d90(&pppplStack_1d8);
    func_0x000107c60bd8(ppppplVar7);
    ppplStack_1e8 = (long ***)FUN_10074676c;
    if ((bRam00000001130a5e00 & 1) == 0) {
      iVar11 = 0x130a5e00;
      ppppuStack_1f0 = &pppuStack_1a0;
      func_0x000107c60e48();
      if (iVar11 != 0) {
        uRam00000001130a5dc0 = 0;
        puRam00000001130a5dc8 = &UNK_104adf4cc;
        puRam00000001130a5dd0 = &UNK_104aa4a24;
        puRam00000001130a5dd8 = &UNK_104aa2538;
        puRam00000001130a5de0 = &UNK_104aa4a4c;
        puRam00000001130a5de8 = &DAT_10f2df4ca;
        uRam00000001130a5df0 = 4;
        uRam00000001130a5df8 = 0;
        func_0x000107c60e4c(0x1130a5e00);
      }
    }
    return (long *****)0x1130a5dc0;
  }
  if ((puVar4 == (undefined *)0x19) &&
     (((*ppppplVar9 == (long ****)0x746e696f70646e65 &&
       ppppplVar9[1] == (long ****)0x656d2d64616f6c2d) &&
      ppppplVar9[2] == (long ****)0x69622d7363697274) && *(char *)(ppppplVar9 + 3) == 'n')) {
    pcStack_198 = FUN_1007447bc;
    ppplStack_1b8 = *(long ****)PTR____stack_chk_guard_11034bdc0;
    FUN_10074482c(&pppplStack_1d8);
    ppplStack_1e8 = (long ***)&UNK_104aa4aa8;
    if ((bRam00000001130a5e48 & 1) == 0) {
      iVar11 = 0x130a5e48;
      ppppuStack_1f0 = &pppuStack_1a0;
      ___cxa_guard_acquire();
      if (iVar11 != 0) {
        uRam00000001130a5e08 = 1;
        puRam00000001130a5e10 = &UNK_104adf4cc;
        puRam00000001130a5e18 = &UNK_104aa4b9c;
        puRam00000001130a5e20 = &UNK_104aa2538;
        puRam00000001130a5e28 = &UNK_104aa4bc4;
        pcRam00000001130a5e30 = "endpoint-load-metrics-bin";
        uRam00000001130a5e38 = 0x19;
        uRam00000001130a5e40 = 0;
        ___cxa_guard_release(0x1130a5e48);
      }
    }
    return (long *****)0x1130a5e08;
  }
  if ((puVar4 == (undefined *)0x15) &&
     ((*ppppplVar9 == (long ****)0x7265732d63707267 &&
      ppppplVar9[1] == (long ****)0x746174732d726576) &&
      *(long *)((long)ppppplVar9 + 0xd) == 0x6e69622d73746174)) {
    pcStack_198 = FUN_1007447bc;
    ppplStack_1b8 = *(long ****)PTR____stack_chk_guard_11034bdc0;
    FUN_10074482c(&pppplStack_1d8);
    ppplStack_1e8 = (long ***)&UNK_104aa4c20;
    if ((bRam00000001130a5e90 & 1) == 0) {
      iVar11 = 0x130a5e90;
      ppppuStack_1f0 = &pppuStack_1a0;
      ___cxa_guard_acquire();
      if (iVar11 != 0) {
        uRam00000001130a5e50 = 1;
        puRam00000001130a5e58 = &UNK_104adf4cc;
        puRam00000001130a5e60 = &UNK_104aa4d14;
        puRam00000001130a5e68 = &UNK_104aa2538;
        puRam00000001130a5e70 = &UNK_104aa4d3c;
        pcRam00000001130a5e78 = "grpc-server-stats-bin";
        uRam00000001130a5e80 = 0x15;
        uRam00000001130a5e88 = 0;
        ___cxa_guard_release(0x1130a5e90);
      }
    }
    return (long *****)0x1130a5e50;
  }
  if ((puVar4 == (undefined *)0xe) &&
     (*ppppplVar9 == (long ****)0x6172742d63707267 &&
      *(long *)((long)ppppplVar9 + 6) == 0x6e69622d65636172)) {
    pcStack_198 = FUN_1007447bc;
    ppplStack_1b8 = *(long ****)PTR____stack_chk_guard_11034bdc0;
    FUN_10074482c(&pppplStack_1d8);
    ppplStack_1e8 = (long ***)&UNK_104aa4d98;
    if ((bRam00000001130a5ed8 & 1) == 0) {
      iVar11 = 0x130a5ed8;
      ppppuStack_1f0 = &pppuStack_1a0;
      ___cxa_guard_acquire();
      if (iVar11 != 0) {
        uRam00000001130a5e98 = 1;
        puRam00000001130a5ea0 = &UNK_104adf4cc;
        puRam00000001130a5ea8 = &UNK_104aa4e8c;
        puRam00000001130a5eb0 = &UNK_104aa2538;
        puRam00000001130a5eb8 = &UNK_104aa4eb4;
        pcRam00000001130a5ec0 = "grpc-trace-bin";
        uRam00000001130a5ec8 = 0xe;
        uRam00000001130a5ed0 = 0;
        ___cxa_guard_release(0x1130a5ed8);
      }
    }
    return (long *****)0x1130a5e98;
  }
  if ((puVar4 == (undefined *)0xd) &&
     (*ppppplVar9 == (long ****)0x6761742d63707267 &&
      *(long *)((long)ppppplVar9 + 5) == 0x6e69622d73676174)) {
    pcStack_198 = FUN_1007447bc;
    ppplStack_1b8 = *(long ****)PTR____stack_chk_guard_11034bdc0;
    FUN_10074482c(&pppplStack_1d8);
    ppplStack_1e8 = (long ***)&UNK_104aa4f10;
    if ((bRam00000001130a5f20 & 1) == 0) {
      iVar11 = 0x130a5f20;
      ppppuStack_1f0 = &pppuStack_1a0;
      ___cxa_guard_acquire();
      if (iVar11 != 0) {
        uRam00000001130a5ee0 = 1;
        puRam00000001130a5ee8 = &UNK_104adf4cc;
        puRam00000001130a5ef0 = &UNK_104aa5004;
        puRam00000001130a5ef8 = &UNK_104aa2538;
        puRam00000001130a5f00 = &UNK_104aa502c;
        pcRam00000001130a5f08 = "grpc-tags-bin";
        uRam00000001130a5f10 = 0xd;
        uRam00000001130a5f18 = 0;
        ___cxa_guard_release(0x1130a5f20);
      }
    }
    return (long *****)0x1130a5ee0;
  }
  if ((puVar4 == (undefined *)0x13) &&
     ((*ppppplVar9 == (long ****)0x635f626c63707267 &&
      ppppplVar9[1] == (long ****)0x74735f746e65696c) &&
      *(long *)((long)ppppplVar9 + 0xb) == 0x73746174735f746e)) {
    pcStack_198 = FUN_1007447bc;
    ppppplVar7 = ppppplVar10;
    ppplStack_1c0 = (long ***)puVar14;
    func_0x000104aa5090();
    pppplVar17 = ppppplVar10[6];
    ppppplVar10 = ppppplVar7;
    func_0x000104aa50dc();
    *(int *)(extraout_x8_01 + 5) = (int)pppplVar17;
    *extraout_x8_01 = ppppplVar10;
    extraout_x8_01[1] = ppppplVar7;
    return ppppplVar10;
  }
  if ((puVar4 == (undefined *)0xb) &&
     (*ppppplVar9 == (long ****)0x2d74736f632d626c &&
      *(long *)((long)ppppplVar9 + 3) == 0x6e69622d74736f63)) {
    pcStack_198 = FUN_1007447bc;
    ppppplVar7 = ppppplVar10;
    func_0x000104aa5360(&ppplStack_1d0);
    pppplVar17 = ppppplVar10[6];
    func_0x000104aa5414();
    *extraout_x8_01 = ppppplVar7;
    *(int *)(extraout_x8_01 + 5) = (int)pppplVar17;
    ppppplVar10 = (long *****)0x20;
    __Znwm();
    *ppppplVar10 = (long ****)ppplStack_1d0;
    ppppplVar10[2] = (long ****)ppplStack_1c0;
    ppppplVar10[1] = (long ****)ppplStack_1c8;
    ppppplVar10[3] = (long ****)ppplStack_1b8;
    extraout_x8_01[1] = ppppplVar10;
    return ppppplVar10;
  }
  if ((puVar4 == (undefined *)0x8) && (*ppppplVar9 == (long ****)0x6e656b6f742d626c)) {
    pcStack_198 = FUN_1007447bc;
    ppplStack_1b8 = *(long ****)PTR____stack_chk_guard_11034bdc0;
    FUN_10074482c(&pppplStack_1d8);
    ppplStack_1e8 = (long ***)&UNK_104aa58d0;
    if ((bRam00000001130a5ff8 & 1) == 0) {
      iVar11 = 0x130a5ff8;
      ppppuStack_1f0 = &pppuStack_1a0;
      ___cxa_guard_acquire();
      if (iVar11 != 0) {
        uRam00000001130a5fb8 = 0;
        puRam00000001130a5fc0 = &UNK_104adf4cc;
        puRam00000001130a5fc8 = &UNK_104aa59c0;
        puRam00000001130a5fd0 = &UNK_104aa2538;
        puRam00000001130a5fd8 = &UNK_104aa59e8;
        pcRam00000001130a5fe0 = "lb-token";
        uRam00000001130a5fe8 = 8;
        uRam00000001130a5ff0 = 0;
        ___cxa_guard_release(0x1130a5ff8);
      }
    }
    return (long *****)0x1130a5fb8;
  }
  pppplVar17 = &ppplStack_200;
  pcStack_198 = FUN_1007447bc;
  ppplStack_1b8 = *(long ****)PTR____stack_chk_guard_11034bdc0;
  FUN_1004b6808(&pppplStack_1d8,ppppplVar9,puVar4);
  ppplStack_1f8 = (long ***)ppppplVar10[1];
  ppplStack_200 = (long ***)*ppppplVar10;
  ppplStack_1e8 = (long ***)ppppplVar10[3];
  ppppuStack_1f0 = (undefined1 ****)ppppplVar10[2];
  ppppplVar10[1] = (long ****)0x0;
  *ppppplVar10 = (long ****)0x0;
  ppppplVar10[3] = (long ****)0x0;
  ppppplVar10[2] = (long ****)0x0;
  ppppplVar10 = &pppplStack_1d8;
  FUN_1007462d4(extraout_x8_01);
  if ((long ****)0x1 < ppplStack_200) {
    do {
      ppplVar18 = (long ***)*ppplStack_200;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppplStack_200,0x10);
      if (bVar3) {
        *ppplStack_200 = (long **)((long)ppplVar18 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((long ***)((long)ppplVar18 + -1) == (long ***)0x0) {
      (*(code *)ppplStack_200[1])();
    }
  }
  ppppplVar7 = (long *****)pppplStack_1d8;
  if ((long *****)0x1 < pppplStack_1d8) {
    do {
      pppplVar19 = (long ****)*pppplStack_1d8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppplStack_1d8,0x10);
      if (bVar3) {
        *pppplStack_1d8 = (long ***)((long)pppplVar19 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((long ****)((long)pppplVar19 + -1) == (long ****)0x0) {
      (*(code *)pppplStack_1d8[1])();
      ppppplVar7 = (long *****)pppplStack_1d8;
    }
  }
  if ((long ***)*(long *)PTR____stack_chk_guard_11034bdc0 == ppplStack_1b8) {
    return ppppplVar7;
  }
  func_0x000107c60e78();
  if ((int)ppppplVar10 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&ppplStack_200);
    FUN_1004b6d90(&pppplStack_1d8);
  }
  func_0x000107c60bd8();
  pppplVar19 = *ppppplVar10;
  if (pppplVar19 == (long ****)0x0) {
    pppplVar22 = (long ****)((long)ppppplVar10 + 9);
    pppplVar21 = (long ****)(ulong)*(byte *)(ppppplVar10 + 1);
  }
  else {
    pppplVar21 = ppppplVar10[1];
    pppplVar22 = ppppplVar10[2];
  }
  if (pppplVar21 < (long ****)0x4) {
    uVar12 = 0;
  }
  else {
    uVar12 = (ulong)(*(int *)((long)pppplVar21 + (long)pppplVar22 + -4) == 0x6e69622d);
  }
  *ppppplVar7 = (long ****)(&UNK_1107c4388 + uVar12 * 0x40);
  if (pppplVar19 == (long ****)0x0) {
    uVar15 = (uint)*(byte *)(ppppplVar10 + 1);
  }
  else {
    uVar15 = (uint)ppppplVar10[1];
  }
  if (*pppplVar17 == (long ***)0x0) {
    uVar20 = (uint)*(byte *)(pppplVar17 + 1);
  }
  else {
    uVar20 = (uint)pppplVar17[1];
  }
  *(uint *)(ppppplVar7 + 5) = uVar20 + uVar15 + 0x20;
  pppplVar19 = (long ****)0x40;
  func_0x000107c60e20();
  pppplVar22 = *ppppplVar10;
  pppplVar23 = ppppplVar10[3];
  pppplVar21 = ppppplVar10[2];
  pppplVar19[1] = (long ***)ppppplVar10[1];
  *pppplVar19 = (long ***)pppplVar22;
  pppplVar19[3] = (long ***)pppplVar23;
  pppplVar19[2] = (long ***)pppplVar21;
  ppppplVar10[1] = (long ****)0x0;
  *ppppplVar10 = (long ****)0x0;
  ppppplVar10[3] = (long ****)0x0;
  ppppplVar10[2] = (long ****)0x0;
  ppplVar18 = *pppplVar17;
  ppplVar25 = pppplVar17[3];
  ppplVar24 = pppplVar17[2];
  pppplVar19[5] = pppplVar17[1];
  pppplVar19[4] = ppplVar18;
  pppplVar19[7] = ppplVar25;
  pppplVar19[6] = ppplVar24;
  pppplVar17[1] = (long ***)0x0;
  *pppplVar17 = (long ***)0x0;
  pppplVar17[3] = (long ***)0x0;
  pppplVar17[2] = (long ***)0x0;
  ppppplVar7[1] = pppplVar19;
  return ppppplVar7;
}



/* Entry: 1007445a8; end: 1007446b7;  */

/* WARNING: Possible PIC construction at 0x000104aa58cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104aa4f0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104aa4d94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104aa4c1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104aa4aa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104aa48e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104aa4aa8) */
/* WARNING: Removing unreachable block (ram,0x000104aa4ae8) */
/* WARNING: Removing unreachable block (ram,0x000104aa4b00) */
/* WARNING: Removing unreachable block (ram,0x000104aa4ad8) */
/* WARNING: Removing unreachable block (ram,0x000104aa4c20) */
/* WARNING: Removing unreachable block (ram,0x000104aa4c60) */
/* WARNING: Removing unreachable block (ram,0x000104aa4c78) */
/* WARNING: Removing unreachable block (ram,0x000104aa4c50) */
/* WARNING: Removing unreachable block (ram,0x000104aa4d98) */
/* WARNING: Removing unreachable block (ram,0x000104aa4dd8) */
/* WARNING: Removing unreachable block (ram,0x000104aa4df0) */
/* WARNING: Removing unreachable block (ram,0x000104aa4dc8) */
/* WARNING: Removing unreachable block (ram,0x000104aa4f10) */
/* WARNING: Removing unreachable block (ram,0x000104aa4f50) */
/* WARNING: Removing unreachable block (ram,0x000104aa4f68) */
/* WARNING: Removing unreachable block (ram,0x000104aa4f40) */
/* WARNING: Removing unreachable block (ram,0x000104aa58d0) */
/* WARNING: Removing unreachable block (ram,0x000104aa5910) */
/* WARNING: Removing unreachable block (ram,0x000104aa5928) */
/* WARNING: Removing unreachable block (ram,0x000104aa5900) */
/* WARNING: Removing unreachable block (ram,0x000104aa48e8) */
/* WARNING: Removing unreachable block (ram,0x000104aa4928) */
/* WARNING: Removing unreachable block (ram,0x000104aa4940) */
/* WARNING: Removing unreachable block (ram,0x000104aa4918) */

long ***** FUN_1007445a8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *****ppppplVar8;
  long *****ppppplVar9;
  long *****ppppplVar10;
  long *****ppppplVar11;
  ulong uVar12;
  undefined1 *puVar13;
  undefined *puVar14;
  uint uVar15;
  long ****pppplVar16;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  long ***ppplVar17;
  long ****pppplVar18;
  uint uVar19;
  long ****pppplVar20;
  long ****pppplVar21;
  long ****pppplVar22;
  long ***ppplVar23;
  long ***ppplVar24;
  long ***ppplStack_180;
  long ***ppplStack_178;
  long ***ppplStack_170;
  long ***ppplStack_168;
  long ****pppplStack_158;
  long ***ppplStack_150;
  long ***ppplStack_148;
  long ***ppplStack_140;
  long ***ppplStack_138;
  long ****pppplStack_130;
  long ****pppplStack_128;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  long ****pppplStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long ****pppplStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  undefined *puStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 uStack_69;
  long ****pppplStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (&PTR_DAT_1107c4448)[param_2 * 2];
  puVar14 = (&PTR_s__1107c4450)[param_2 * 2];
  puVar5 = puVar1;
  func_0x000107c613d0();
  puVar6 = puVar14;
  func_0x000107c613d0();
  pppplStack_68 = (long ****)0x1;
  puVar7 = puVar1;
  puStack_60 = puVar6;
  puStack_58 = puVar14;
  func_0x000107c613d0();
  uVar12 = (ulong)((int)puVar6 + (int)puVar7 + 0x20);
  puVar14 = &UNK_104aa7258;
  ppppplVar11 = &pppplStack_68;
  puVar13 = &uStack_69;
  FUN_1007446b8(param_1,puVar1,puVar5,ppppplVar11);
  ppppplVar8 = (long *****)pppplStack_68;
  if ((long *****)0x1 < pppplStack_68) {
    do {
      pppplVar16 = (long ****)*pppplStack_68;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppplStack_68,0x10);
      if (bVar3) {
        *pppplStack_68 = (long ***)((long)pppplVar16 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((long ****)((long)pppplVar16 + -1) == (long ****)0x0) {
      (*(code *)pppplStack_68[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppppplVar8;
  }
  func_0x000107c60e78();
  if ((int)puVar5 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&pppplStack_68);
  }
  func_0x000107c60bd8();
  pcStack_78 = FUN_1007446b8;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x0001004bca54(&pppplStack_110,ppppplVar11);
  uStack_c0 = uVar12 & 0xffffffff;
  uStack_e8 = uStack_108;
  pppplStack_f0 = pppplStack_110;
  uStack_d8 = uStack_f8;
  uStack_e0 = uStack_100;
  uStack_108 = 0;
  pppplStack_110 = (long ****)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  ppppplVar11 = &pppplStack_f0;
  puStack_d0 = puVar13;
  puStack_c8 = puVar14;
  FUN_1007447bc(extraout_x8,ppppplVar8);
  ppppplVar9 = (long *****)pppplStack_f0;
  if ((long *****)0x1 < pppplStack_f0) {
    do {
      pppplVar16 = (long ****)*pppplStack_f0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppplStack_f0,0x10);
      if (bVar3) {
        *pppplStack_f0 = (long ***)((long)pppplVar16 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((long ****)((long)pppplVar16 + -1) == (long ****)0x0) {
      (*(code *)pppplStack_f0[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return ppppplVar9;
  }
  func_0x000107c60e78();
  if ((int)puVar5 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&pppplStack_f0);
  }
  ppppplVar10 = ppppplVar9;
  func_0x000107c60bd8();
  pppplStack_130 = (long ****)ppppplVar8;
  pppplStack_128 = (long ****)ppppplVar9;
  ppuStack_120 = &puStack_80;
  if ((puVar5 == (undefined *)0x5) &&
     (*(int *)ppppplVar10 == 0x7461703a && *(char *)((long)ppppplVar10 + 4) == 'h')) {
    pcStack_118 = FUN_1007447bc;
    ppplStack_138 = *(long ****)PTR____stack_chk_guard_11034bdc0;
    ppppplVar8 = ppppplVar11;
    FUN_10074482c(&pppplStack_158);
    pppplVar16 = ppppplVar11[6];
    FUN_100744d34();
    *extraout_x8_00 = ppppplVar8;
    *(int *)(extraout_x8_00 + 5) = (int)pppplVar16;
    extraout_x8_00[2] = ppplStack_150;
    extraout_x8_00[1] = pppplStack_158;
    extraout_x8_00[4] = ppplStack_140;
    extraout_x8_00[3] = ppplStack_148;
    if ((long ***)*(long *)PTR____stack_chk_guard_11034bdc0 == ppplStack_138) {
      return ppppplVar8;
    }
    func_0x000107c60e78();
    FUN_1004b6d90(&pppplStack_158);
    func_0x000107c60bd8(ppppplVar8);
    ppplStack_168 = (long ***)FUN_100744d34;
    if ((bRam00000001130a5980 & 1) == 0) {
      iVar4 = 0x130a5980;
      ppplStack_170 = (long ***)&ppuStack_120;
      func_0x000107c60e48();
      if (iVar4 != 0) {
        uRam00000001130a5940 = 0;
        puRam00000001130a5948 = &UNK_104adf4cc;
        puRam00000001130a5950 = &UNK_104aa2608;
        puRam00000001130a5958 = &UNK_104aa2538;
        puRam00000001130a5960 = &UNK_104aa2730;
        puRam00000001130a5968 = &DAT_10f760227;
        uRam00000001130a5970 = 5;
        uRam00000001130a5978 = 0;
        func_0x000107c60e4c(0x1130a5980);
      }
    }
    return (long *****)0x1130a5940;
  }
  if ((puVar5 == (undefined *)0xa) &&
     (*ppppplVar10 == (long ****)0x69726f687475613a && *(short *)(ppppplVar10 + 1) == 0x7974)) {
    pcStack_118 = FUN_1007447bc;
    ppplStack_138 = *(long ****)PTR____stack_chk_guard_11034bdc0;
    ppppplVar8 = ppppplVar11;
    FUN_10074482c(&pppplStack_158);
    pppplVar16 = ppppplVar11[6];
    FUN_100744974();
    *extraout_x8_00 = ppppplVar8;
    *(int *)(extraout_x8_00 + 5) = (int)pppplVar16;
    extraout_x8_00[2] = ppplStack_150;
    extraout_x8_00[1] = pppplStack_158;
    extraout_x8_00[4] = ppplStack_140;
    extraout_x8_00[3] = ppplStack_148;
    if ((long ***)*(long *)PTR____stack_chk_guard_11034bdc0 == ppplStack_138) {
      return ppppplVar8;
    }
    func_0x000107c60e78();
    FUN_1004b6d90(&pppplStack_158);
    func_0x000107c60bd8(ppppplVar8);
    ppplStack_168 = (long ***)FUN_100744974;
    if ((bRam00000001130a59c8 & 1) == 0) {
      iVar4 = 0x130a59c8;
      ppplStack_170 = (long ***)&ppuStack_120;
      func_0x000107c60e48();
      if (iVar4 != 0) {
        uRam00000001130a5988 = 0;
        puRam00000001130a5990 = &UNK_104adf4cc;
        puRam00000001130a5998 = &UNK_104aa28ac;
        puRam00000001130a59a0 = &UNK_104aa2538;
        puRam00000001130a59a8 = &UNK_104aa28d4;
        puRam00000001130a59b0 = &DAT_10f760214;
        uRam00000001130a59b8 = 10;
        uRam00000001130a59c0 = 0;
        func_0x000107c60e4c(0x1130a59c8);
      }
    }
    return (long *****)0x1130a5988;
  }
  if ((puVar5 == (undefined *)0x7) &&
     (*(int *)ppppplVar10 == 0x74656d3a && *(int *)((long)ppppplVar10 + 3) == 0x646f6874)) {
    pcStack_118 = FUN_1007447bc;
    ppppplVar8 = ppppplVar11;
    ppplStack_140 = (long ***)puVar14;
    FUN_100744b0c();
    pppplVar16 = ppppplVar11[6];
    ppppplVar11 = ppppplVar8;
    FUN_100744c0c();
    *extraout_x8_00 = ppppplVar11;
    *(int *)(extraout_x8_00 + 5) = (int)pppplVar16;
    *(int *)(extraout_x8_00 + 1) = (int)ppppplVar8;
    return ppppplVar11;
  }
  if ((puVar5 == (undefined *)0x7) &&
     (*(int *)ppppplVar10 == 0x6174733a && *(int *)((long)ppppplVar10 + 3) == 0x73757461)) {
    pcStack_118 = FUN_1007447bc;
    ppppplVar8 = ppppplVar11;
    ppplStack_140 = (long ***)puVar14;
    FUN_100745064();
    pppplVar16 = ppppplVar11[6];
    ppppplVar11 = ppppplVar8;
    FUN_10074582c();
    *extraout_x8_00 = ppppplVar11;
    *(int *)(extraout_x8_00 + 5) = (int)pppplVar16;
    *(int *)(extraout_x8_00 + 1) = (int)ppppplVar8;
    return ppppplVar11;
  }
  if ((puVar5 == (undefined *)0x7) &&
     (*(int *)ppppplVar10 == 0x6863733a && *(int *)((long)ppppplVar10 + 3) == 0x656d6568)) {
    pcStack_118 = FUN_1007447bc;
    ppppplVar8 = ppppplVar11;
    ppplStack_140 = (long ***)puVar14;
    FUN_100744e34();
    pppplVar16 = ppppplVar11[6];
    ppppplVar11 = ppppplVar8;
    FUN_100744f54();
    *extraout_x8_00 = ppppplVar11;
    *(int *)(extraout_x8_00 + 5) = (int)pppplVar16;
    *(int *)(extraout_x8_00 + 1) = (int)ppppplVar8;
    return ppppplVar11;
  }
  if ((puVar5 == (undefined *)0xc) &&
     (*ppppplVar10 == (long ****)0x2d746e65746e6f63 && *(int *)(ppppplVar10 + 1) == 0x65707974)) {
    pcStack_118 = FUN_1007447bc;
    ppppplVar8 = ppppplVar11;
    ppplStack_140 = (long ***)puVar14;
    FUN_100746544();
    pppplVar16 = ppppplVar11[6];
    ppppplVar11 = ppppplVar8;
    FUN_100746644();
    *extraout_x8_00 = ppppplVar11;
    *(int *)(extraout_x8_00 + 5) = (int)pppplVar16;
    *(int *)(extraout_x8_00 + 1) = (int)ppppplVar8;
    return ppppplVar11;
  }
  if ((puVar5 == (undefined *)0x2) && (*(short *)ppppplVar10 == 0x6574)) {
    pcStack_118 = FUN_1007447bc;
    ppppplVar8 = ppppplVar11;
    ppplStack_140 = (long ***)puVar14;
    func_0x000104aa30c8();
    pppplVar16 = ppppplVar11[6];
    ppppplVar11 = ppppplVar8;
    func_0x000104aa3184();
    *extraout_x8_00 = ppppplVar11;
    *(int *)(extraout_x8_00 + 5) = (int)pppplVar16;
    *(char *)(extraout_x8_00 + 1) = (char)ppppplVar8;
    return ppppplVar11;
  }
  if ((puVar5 == (undefined *)0xd) &&
     (*ppppplVar10 == (long ****)0x636e652d63707267 &&
      *(long *)((long)ppppplVar10 + 5) == 0x676e69646f636e65)) {
    pcStack_118 = FUN_1007447bc;
    ppppplVar8 = ppppplVar11;
    ppplStack_140 = (long ***)puVar14;
    func_0x000104aa3424();
    pppplVar16 = ppppplVar11[6];
    ppppplVar11 = ppppplVar8;
    func_0x000104aa34e0();
    *extraout_x8_00 = ppppplVar11;
    *(int *)(extraout_x8_00 + 5) = (int)pppplVar16;
    *(int *)(extraout_x8_00 + 1) = (int)ppppplVar8;
    return ppppplVar11;
  }
  if ((puVar5 == (undefined *)0x1e) &&
     (((*ppppplVar10 == (long ****)0x746e692d63707267 &&
       ppppplVar10[1] == (long ****)0x6e652d6c616e7265) &&
      ppppplVar10[2] == (long ****)0x722d676e69646f63) &&
      *(long *)((long)ppppplVar10 + 0x16) == 0x747365757165722d)) {
    pcStack_118 = FUN_1007447bc;
    ppppplVar8 = ppppplVar11;
    ppplStack_140 = (long ***)puVar14;
    func_0x000104aa3424();
    pppplVar16 = ppppplVar11[6];
    ppppplVar11 = ppppplVar8;
    func_0x000104aa37a4();
    *extraout_x8_00 = ppppplVar11;
    *(int *)(extraout_x8_00 + 5) = (int)pppplVar16;
    *(int *)(extraout_x8_00 + 1) = (int)ppppplVar8;
    return ppppplVar11;
  }
  if ((puVar5 == (undefined *)0x14) &&
     ((*ppppplVar10 == (long ****)0x6363612d63707267 &&
      ppppplVar10[1] == (long ****)0x6f636e652d747065) && *(int *)(ppppplVar10 + 2) == 0x676e6964))
  {
    pcStack_118 = FUN_1007447bc;
    ppppplVar8 = ppppplVar11;
    ppplStack_140 = (long ***)puVar14;
    func_0x000104aa38c0();
    pppplVar16 = ppppplVar11[6];
    ppppplVar11 = ppppplVar8;
    func_0x000104aa3998();
    *extraout_x8_00 = ppppplVar11;
    *(int *)(extraout_x8_00 + 5) = (int)pppplVar16;
    ppppplVar11 = (long *****)0x1;
    __Znwm();
    *(char *)ppppplVar11 = (char)ppppplVar8;
    extraout_x8_00[1] = ppppplVar11;
    return ppppplVar11;
  }
  if ((puVar5 == (undefined *)0xb) &&
     (*ppppplVar10 == (long ****)0x6174732d63707267 &&
      *(long *)((long)ppppplVar10 + 3) == 0x7375746174732d63)) {
    pcStack_118 = FUN_1007447bc;
    ppppplVar8 = ppppplVar11;
    ppplStack_140 = (long ***)puVar14;
    func_0x000104aa3cc4();
    pppplVar16 = ppppplVar11[6];
    ppppplVar11 = ppppplVar8;
    func_0x000104aa3d80();
    *extraout_x8_00 = ppppplVar11;
    *(int *)(extraout_x8_00 + 5) = (int)pppplVar16;
    *(int *)(extraout_x8_00 + 1) = (int)ppppplVar8;
    return ppppplVar11;
  }
  if ((puVar5 == (undefined *)0xc) &&
     (*ppppplVar10 == (long ****)0x6d69742d63707267 && *(int *)(ppppplVar10 + 1) == 0x74756f65)) {
    pcStack_118 = FUN_1007447bc;
    ppppplVar8 = ppppplVar11;
    ppplStack_140 = (long ***)puVar14;
    func_0x000104aa4050();
    pppplVar16 = ppppplVar11[6];
    ppppplVar11 = ppppplVar8;
    func_0x000104aa410c();
    *(int *)(extraout_x8_00 + 5) = (int)pppplVar16;
    *extraout_x8_00 = ppppplVar11;
    extraout_x8_00[1] = ppppplVar8;
    return ppppplVar11;
  }
  if ((puVar5 == (undefined *)0x1a) &&
     (((*ppppplVar10 == (long ****)0x6572702d63707267 &&
       ppppplVar10[1] == (long ****)0x70722d73756f6976) &&
      ppppplVar10[2] == (long ****)0x706d657474612d63) && *(short *)(ppppplVar10 + 3) == 0x7374)) {
    pcStack_118 = FUN_1007447bc;
    ppppplVar8 = ppppplVar11;
    ppplStack_140 = (long ***)puVar14;
    FUN_100745064();
    pppplVar16 = ppppplVar11[6];
    ppppplVar11 = ppppplVar8;
    func_0x000104aa4414();
    *extraout_x8_00 = ppppplVar11;
    *(int *)(extraout_x8_00 + 5) = (int)pppplVar16;
    *(int *)(extraout_x8_00 + 1) = (int)ppppplVar8;
    return ppppplVar11;
  }
  if ((puVar5 == (undefined *)0x16) &&
     ((*ppppplVar10 == (long ****)0x7465722d63707267 &&
      ppppplVar10[1] == (long ****)0x62687375702d7972) &&
      *(long *)((long)ppppplVar10 + 0xe) == 0x736d2d6b63616268)) {
    pcStack_118 = FUN_1007447bc;
    ppppplVar8 = ppppplVar11;
    ppplStack_140 = (long ***)puVar14;
    func_0x000104aa4520();
    pppplVar16 = ppppplVar11[6];
    ppppplVar11 = ppppplVar8;
    func_0x000104aa45dc();
    *(int *)(extraout_x8_00 + 5) = (int)pppplVar16;
    *extraout_x8_00 = ppppplVar11;
    extraout_x8_00[1] = ppppplVar8;
    return ppppplVar11;
  }
  if ((puVar5 == (undefined *)0xa) &&
     (*ppppplVar10 == (long ****)0x6567612d72657375 && *(short *)(ppppplVar10 + 1) == 0x746e)) {
    pcStack_118 = FUN_1007447bc;
    ppplStack_138 = *(long ****)PTR____stack_chk_guard_11034bdc0;
    ppppplVar8 = ppppplVar11;
    FUN_10074482c(&pppplStack_158);
    pppplVar16 = ppppplVar11[6];
    FUN_100746894();
    *extraout_x8_00 = ppppplVar8;
    *(int *)(extraout_x8_00 + 5) = (int)pppplVar16;
    extraout_x8_00[2] = ppplStack_150;
    extraout_x8_00[1] = pppplStack_158;
    extraout_x8_00[4] = ppplStack_140;
    extraout_x8_00[3] = ppplStack_148;
    if ((long ***)*(long *)PTR____stack_chk_guard_11034bdc0 == ppplStack_138) {
      return ppppplVar8;
    }
    func_0x000107c60e78();
    FUN_1004b6d90(&pppplStack_158);
    func_0x000107c60bd8(ppppplVar8);
    ppplStack_168 = (long ***)FUN_100746894;
    if ((bRam00000001130a5d70 & 1) == 0) {
      iVar4 = 0x130a5d70;
      ppplStack_170 = (long ***)&ppuStack_120;
      func_0x000107c60e48();
      if (iVar4 != 0) {
        uRam00000001130a5d30 = 0;
        puRam00000001130a5d38 = &UNK_104adf4cc;
        puRam00000001130a5d40 = &UNK_104aa4864;
        puRam00000001130a5d48 = &UNK_104aa2538;
        puRam00000001130a5d50 = &UNK_104aa488c;
        puRam00000001130a5d58 = &DAT_10f740723;
        uRam00000001130a5d60 = 10;
        uRam00000001130a5d68 = 0;
        func_0x000107c60e4c(0x1130a5d70);
      }
    }
    return (long *****)0x1130a5d30;
  }
  if ((puVar5 == (undefined *)0xc) &&
     (*ppppplVar10 == (long ****)0x73656d2d63707267 && *(int *)(ppppplVar10 + 1) == 0x65676173)) {
    pcStack_118 = FUN_1007447bc;
    ppplStack_138 = *(long ****)PTR____stack_chk_guard_11034bdc0;
    FUN_10074482c(&pppplStack_158);
    ppplStack_168 = (long ***)&UNK_104aa48e8;
    if ((bRam00000001130a5db8 & 1) == 0) {
      iVar4 = 0x130a5db8;
      ppplStack_170 = (long ***)&ppuStack_120;
      ___cxa_guard_acquire();
      if (iVar4 != 0) {
        uRam00000001130a5d78 = 0;
        puRam00000001130a5d80 = &UNK_104adf4cc;
        puRam00000001130a5d88 = &UNK_104aa49d8;
        puRam00000001130a5d90 = &UNK_104aa2538;
        puRam00000001130a5d98 = &UNK_104aa4a00;
        puRam00000001130a5da0 = &UNK_10f67192f;
        uRam00000001130a5da8 = 0xc;
        uRam00000001130a5db0 = 0;
        ___cxa_guard_release(0x1130a5db8);
      }
    }
    return (long *****)0x1130a5d78;
  }
  if ((puVar5 == (undefined *)0x4) && (*(int *)ppppplVar10 == 0x74736f68)) {
    pcStack_118 = FUN_1007447bc;
    ppplStack_138 = *(long ****)PTR____stack_chk_guard_11034bdc0;
    ppppplVar8 = ppppplVar11;
    FUN_10074482c(&pppplStack_158);
    pppplVar16 = ppppplVar11[6];
    FUN_10074676c();
    *extraout_x8_00 = ppppplVar8;
    *(int *)(extraout_x8_00 + 5) = (int)pppplVar16;
    extraout_x8_00[2] = ppplStack_150;
    extraout_x8_00[1] = pppplStack_158;
    extraout_x8_00[4] = ppplStack_140;
    extraout_x8_00[3] = ppplStack_148;
    if ((long ***)*(long *)PTR____stack_chk_guard_11034bdc0 == ppplStack_138) {
      return ppppplVar8;
    }
    func_0x000107c60e78();
    FUN_1004b6d90(&pppplStack_158);
    func_0x000107c60bd8(ppppplVar8);
    ppplStack_168 = (long ***)FUN_10074676c;
    if ((bRam00000001130a5e00 & 1) == 0) {
      iVar4 = 0x130a5e00;
      ppplStack_170 = (long ***)&ppuStack_120;
      func_0x000107c60e48();
      if (iVar4 != 0) {
        uRam00000001130a5dc0 = 0;
        puRam00000001130a5dc8 = &UNK_104adf4cc;
        puRam00000001130a5dd0 = &UNK_104aa4a24;
        puRam00000001130a5dd8 = &UNK_104aa2538;
        puRam00000001130a5de0 = &UNK_104aa4a4c;
        puRam00000001130a5de8 = &DAT_10f2df4ca;
        uRam00000001130a5df0 = 4;
        uRam00000001130a5df8 = 0;
        func_0x000107c60e4c(0x1130a5e00);
      }
    }
    return (long *****)0x1130a5dc0;
  }
  if ((puVar5 == (undefined *)0x19) &&
     (((*ppppplVar10 == (long ****)0x746e696f70646e65 &&
       ppppplVar10[1] == (long ****)0x656d2d64616f6c2d) &&
      ppppplVar10[2] == (long ****)0x69622d7363697274) && *(char *)(ppppplVar10 + 3) == 'n')) {
    pcStack_118 = FUN_1007447bc;
    ppplStack_138 = *(long ****)PTR____stack_chk_guard_11034bdc0;
    FUN_10074482c(&pppplStack_158);
    ppplStack_168 = (long ***)&UNK_104aa4aa8;
    if ((bRam00000001130a5e48 & 1) == 0) {
      iVar4 = 0x130a5e48;
      ppplStack_170 = (long ***)&ppuStack_120;
      ___cxa_guard_acquire();
      if (iVar4 != 0) {
        uRam00000001130a5e08 = 1;
        puRam00000001130a5e10 = &UNK_104adf4cc;
        puRam00000001130a5e18 = &UNK_104aa4b9c;
        puRam00000001130a5e20 = &UNK_104aa2538;
        puRam00000001130a5e28 = &UNK_104aa4bc4;
        pcRam00000001130a5e30 = "endpoint-load-metrics-bin";
        uRam00000001130a5e38 = 0x19;
        uRam00000001130a5e40 = 0;
        ___cxa_guard_release(0x1130a5e48);
      }
    }
    return (long *****)0x1130a5e08;
  }
  if ((puVar5 == (undefined *)0x15) &&
     ((*ppppplVar10 == (long ****)0x7265732d63707267 &&
      ppppplVar10[1] == (long ****)0x746174732d726576) &&
      *(long *)((long)ppppplVar10 + 0xd) == 0x6e69622d73746174)) {
    pcStack_118 = FUN_1007447bc;
    ppplStack_138 = *(long ****)PTR____stack_chk_guard_11034bdc0;
    FUN_10074482c(&pppplStack_158);
    ppplStack_168 = (long ***)&UNK_104aa4c20;
    if ((bRam00000001130a5e90 & 1) == 0) {
      iVar4 = 0x130a5e90;
      ppplStack_170 = (long ***)&ppuStack_120;
      ___cxa_guard_acquire();
      if (iVar4 != 0) {
        uRam00000001130a5e50 = 1;
        puRam00000001130a5e58 = &UNK_104adf4cc;
        puRam00000001130a5e60 = &UNK_104aa4d14;
        puRam00000001130a5e68 = &UNK_104aa2538;
        puRam00000001130a5e70 = &UNK_104aa4d3c;
        pcRam00000001130a5e78 = "grpc-server-stats-bin";
        uRam00000001130a5e80 = 0x15;
        uRam00000001130a5e88 = 0;
        ___cxa_guard_release(0x1130a5e90);
      }
    }
    return (long *****)0x1130a5e50;
  }
  if ((puVar5 == (undefined *)0xe) &&
     (*ppppplVar10 == (long ****)0x6172742d63707267 &&
      *(long *)((long)ppppplVar10 + 6) == 0x6e69622d65636172)) {
    pcStack_118 = FUN_1007447bc;
    ppplStack_138 = *(long ****)PTR____stack_chk_guard_11034bdc0;
    FUN_10074482c(&pppplStack_158);
    ppplStack_168 = (long ***)&UNK_104aa4d98;
    if ((bRam00000001130a5ed8 & 1) == 0) {
      iVar4 = 0x130a5ed8;
      ppplStack_170 = (long ***)&ppuStack_120;
      ___cxa_guard_acquire();
      if (iVar4 != 0) {
        uRam00000001130a5e98 = 1;
        puRam00000001130a5ea0 = &UNK_104adf4cc;
        puRam00000001130a5ea8 = &UNK_104aa4e8c;
        puRam00000001130a5eb0 = &UNK_104aa2538;
        puRam00000001130a5eb8 = &UNK_104aa4eb4;
        pcRam00000001130a5ec0 = "grpc-trace-bin";
        uRam00000001130a5ec8 = 0xe;
        uRam00000001130a5ed0 = 0;
        ___cxa_guard_release(0x1130a5ed8);
      }
    }
    return (long *****)0x1130a5e98;
  }
  if ((puVar5 == (undefined *)0xd) &&
     (*ppppplVar10 == (long ****)0x6761742d63707267 &&
      *(long *)((long)ppppplVar10 + 5) == 0x6e69622d73676174)) {
    pcStack_118 = FUN_1007447bc;
    ppplStack_138 = *(long ****)PTR____stack_chk_guard_11034bdc0;
    FUN_10074482c(&pppplStack_158);
    ppplStack_168 = (long ***)&UNK_104aa4f10;
    if ((bRam00000001130a5f20 & 1) == 0) {
      iVar4 = 0x130a5f20;
      ppplStack_170 = (long ***)&ppuStack_120;
      ___cxa_guard_acquire();
      if (iVar4 != 0) {
        uRam00000001130a5ee0 = 1;
        puRam00000001130a5ee8 = &UNK_104adf4cc;
        puRam00000001130a5ef0 = &UNK_104aa5004;
        puRam00000001130a5ef8 = &UNK_104aa2538;
        puRam00000001130a5f00 = &UNK_104aa502c;
        pcRam00000001130a5f08 = "grpc-tags-bin";
        uRam00000001130a5f10 = 0xd;
        uRam00000001130a5f18 = 0;
        ___cxa_guard_release(0x1130a5f20);
      }
    }
    return (long *****)0x1130a5ee0;
  }
  if ((puVar5 == (undefined *)0x13) &&
     ((*ppppplVar10 == (long ****)0x635f626c63707267 &&
      ppppplVar10[1] == (long ****)0x74735f746e65696c) &&
      *(long *)((long)ppppplVar10 + 0xb) == 0x73746174735f746e)) {
    pcStack_118 = FUN_1007447bc;
    ppppplVar8 = ppppplVar11;
    ppplStack_140 = (long ***)puVar14;
    func_0x000104aa5090();
    pppplVar16 = ppppplVar11[6];
    ppppplVar11 = ppppplVar8;
    func_0x000104aa50dc();
    *(int *)(extraout_x8_00 + 5) = (int)pppplVar16;
    *extraout_x8_00 = ppppplVar11;
    extraout_x8_00[1] = ppppplVar8;
    return ppppplVar11;
  }
  if ((puVar5 == (undefined *)0xb) &&
     (*ppppplVar10 == (long ****)0x2d74736f632d626c &&
      *(long *)((long)ppppplVar10 + 3) == 0x6e69622d74736f63)) {
    pcStack_118 = FUN_1007447bc;
    ppppplVar8 = ppppplVar11;
    func_0x000104aa5360(&ppplStack_150);
    pppplVar16 = ppppplVar11[6];
    func_0x000104aa5414();
    *extraout_x8_00 = ppppplVar8;
    *(int *)(extraout_x8_00 + 5) = (int)pppplVar16;
    ppppplVar11 = (long *****)0x20;
    __Znwm();
    *ppppplVar11 = (long ****)ppplStack_150;
    ppppplVar11[2] = (long ****)ppplStack_140;
    ppppplVar11[1] = (long ****)ppplStack_148;
    ppppplVar11[3] = (long ****)ppplStack_138;
    extraout_x8_00[1] = ppppplVar11;
    return ppppplVar11;
  }
  if ((puVar5 == (undefined *)0x8) && (*ppppplVar10 == (long ****)0x6e656b6f742d626c)) {
    pcStack_118 = FUN_1007447bc;
    ppplStack_138 = *(long ****)PTR____stack_chk_guard_11034bdc0;
    FUN_10074482c(&pppplStack_158);
    ppplStack_168 = (long ***)&UNK_104aa58d0;
    if ((bRam00000001130a5ff8 & 1) == 0) {
      iVar4 = 0x130a5ff8;
      ppplStack_170 = (long ***)&ppuStack_120;
      ___cxa_guard_acquire();
      if (iVar4 != 0) {
        uRam00000001130a5fb8 = 0;
        puRam00000001130a5fc0 = &UNK_104adf4cc;
        puRam00000001130a5fc8 = &UNK_104aa59c0;
        puRam00000001130a5fd0 = &UNK_104aa2538;
        puRam00000001130a5fd8 = &UNK_104aa59e8;
        pcRam00000001130a5fe0 = "lb-token";
        uRam00000001130a5fe8 = 8;
        uRam00000001130a5ff0 = 0;
        ___cxa_guard_release(0x1130a5ff8);
      }
    }
    return (long *****)0x1130a5fb8;
  }
  pppplVar16 = &ppplStack_180;
  pcStack_118 = FUN_1007447bc;
  ppplStack_138 = *(long ****)PTR____stack_chk_guard_11034bdc0;
  FUN_1004b6808(&pppplStack_158,ppppplVar10,puVar5);
  ppplStack_178 = (long ***)ppppplVar11[1];
  ppplStack_180 = (long ***)*ppppplVar11;
  ppplStack_168 = (long ***)ppppplVar11[3];
  ppplStack_170 = (long ***)ppppplVar11[2];
  ppppplVar11[1] = (long ****)0x0;
  *ppppplVar11 = (long ****)0x0;
  ppppplVar11[3] = (long ****)0x0;
  ppppplVar11[2] = (long ****)0x0;
  ppppplVar11 = &pppplStack_158;
  FUN_1007462d4(extraout_x8_00);
  if ((long ****)0x1 < ppplStack_180) {
    do {
      ppplVar17 = (long ***)*ppplStack_180;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppplStack_180,0x10);
      if (bVar3) {
        *ppplStack_180 = (long **)((long)ppplVar17 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((long ***)((long)ppplVar17 + -1) == (long ***)0x0) {
      (*(code *)ppplStack_180[1])();
    }
  }
  ppppplVar8 = (long *****)pppplStack_158;
  if ((long *****)0x1 < pppplStack_158) {
    do {
      pppplVar18 = (long ****)*pppplStack_158;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppplStack_158,0x10);
      if (bVar3) {
        *pppplStack_158 = (long ***)((long)pppplVar18 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((long ****)((long)pppplVar18 + -1) == (long ****)0x0) {
      (*(code *)pppplStack_158[1])();
      ppppplVar8 = (long *****)pppplStack_158;
    }
  }
  if ((long ***)*(long *)PTR____stack_chk_guard_11034bdc0 == ppplStack_138) {
    return ppppplVar8;
  }
  func_0x000107c60e78();
  if ((int)ppppplVar11 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&ppplStack_180);
    FUN_1004b6d90(&pppplStack_158);
  }
  func_0x000107c60bd8();
  pppplVar18 = *ppppplVar11;
  if (pppplVar18 == (long ****)0x0) {
    pppplVar21 = (long ****)((long)ppppplVar11 + 9);
    pppplVar20 = (long ****)(ulong)*(byte *)(ppppplVar11 + 1);
  }
  else {
    pppplVar20 = ppppplVar11[1];
    pppplVar21 = ppppplVar11[2];
  }
  if (pppplVar20 < (long ****)0x4) {
    uVar12 = 0;
  }
  else {
    uVar12 = (ulong)(*(int *)((long)pppplVar20 + (long)pppplVar21 + -4) == 0x6e69622d);
  }
  *ppppplVar8 = (long ****)(&UNK_1107c4388 + uVar12 * 0x40);
  if (pppplVar18 == (long ****)0x0) {
    uVar15 = (uint)*(byte *)(ppppplVar11 + 1);
  }
  else {
    uVar15 = (uint)ppppplVar11[1];
  }
  if (*pppplVar16 == (long ***)0x0) {
    uVar19 = (uint)*(byte *)(pppplVar16 + 1);
  }
  else {
    uVar19 = (uint)pppplVar16[1];
  }
  *(uint *)(ppppplVar8 + 5) = uVar19 + uVar15 + 0x20;
  pppplVar18 = (long ****)0x40;
  func_0x000107c60e20();
  pppplVar21 = *ppppplVar11;
  pppplVar22 = ppppplVar11[3];
  pppplVar20 = ppppplVar11[2];
  pppplVar18[1] = (long ***)ppppplVar11[1];
  *pppplVar18 = (long ***)pppplVar21;
  pppplVar18[3] = (long ***)pppplVar22;
  pppplVar18[2] = (long ***)pppplVar20;
  ppppplVar11[1] = (long ****)0x0;
  *ppppplVar11 = (long ****)0x0;
  ppppplVar11[3] = (long ****)0x0;
  ppppplVar11[2] = (long ****)0x0;
  ppplVar17 = *pppplVar16;
  ppplVar24 = pppplVar16[3];
  ppplVar23 = pppplVar16[2];
  pppplVar18[5] = pppplVar16[1];
  pppplVar18[4] = ppplVar17;
  pppplVar18[7] = ppplVar24;
  pppplVar18[6] = ppplVar23;
  pppplVar16[1] = (long ***)0x0;
  *pppplVar16 = (long ***)0x0;
  pppplVar16[3] = (long ***)0x0;
  pppplVar16[2] = (long ***)0x0;
  ppppplVar8[1] = pppplVar18;
  return ppppplVar8;
}



/* Entry: 1007446b8; end: 1007447bb;  */

/* WARNING: Possible PIC construction at 0x000104aa58cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104aa4f0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104aa4d94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104aa4c1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104aa4aa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104aa48e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104aa4aa8) */
/* WARNING: Removing unreachable block (ram,0x000104aa4ae8) */
/* WARNING: Removing unreachable block (ram,0x000104aa4b00) */
/* WARNING: Removing unreachable block (ram,0x000104aa4ad8) */
/* WARNING: Removing unreachable block (ram,0x000104aa4c20) */
/* WARNING: Removing unreachable block (ram,0x000104aa4c60) */
/* WARNING: Removing unreachable block (ram,0x000104aa4c78) */
/* WARNING: Removing unreachable block (ram,0x000104aa4c50) */
/* WARNING: Removing unreachable block (ram,0x000104aa4d98) */
/* WARNING: Removing unreachable block (ram,0x000104aa4dd8) */
/* WARNING: Removing unreachable block (ram,0x000104aa4df0) */
/* WARNING: Removing unreachable block (ram,0x000104aa4dc8) */
/* WARNING: Removing unreachable block (ram,0x000104aa4f10) */
/* WARNING: Removing unreachable block (ram,0x000104aa4f50) */
/* WARNING: Removing unreachable block (ram,0x000104aa4f68) */
/* WARNING: Removing unreachable block (ram,0x000104aa4f40) */
/* WARNING: Removing unreachable block (ram,0x000104aa58d0) */
/* WARNING: Removing unreachable block (ram,0x000104aa5910) */
/* WARNING: Removing unreachable block (ram,0x000104aa5928) */
/* WARNING: Removing unreachable block (ram,0x000104aa5900) */
/* WARNING: Removing unreachable block (ram,0x000104aa48e8) */
/* WARNING: Removing unreachable block (ram,0x000104aa4928) */
/* WARNING: Removing unreachable block (ram,0x000104aa4940) */
/* WARNING: Removing unreachable block (ram,0x000104aa4918) */

long *****
FUN_1007446b8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5,
             undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *****ppppplVar4;
  long *****ppppplVar5;
  long *****ppppplVar6;
  uint uVar7;
  long ****pppplVar8;
  undefined8 *extraout_x8;
  long ***ppplVar9;
  long ****pppplVar10;
  uint uVar11;
  ulong uVar12;
  long ****pppplVar13;
  long ****pppplVar14;
  long ****pppplVar15;
  long ***ppplVar16;
  long ***ppplVar17;
  long ***ppplStack_110;
  long ***ppplStack_108;
  long ***ppplStack_100;
  long ***ppplStack_f8;
  long ****pppplStack_e8;
  long ***ppplStack_e0;
  long ***ppplStack_d8;
  long ***ppplStack_d0;
  long ***ppplStack_c8;
  undefined8 uStack_c0;
  long ****pppplStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long ****pppplStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long ****pppplStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001004bca54(&pppplStack_a0,param_4);
  uStack_50 = param_5 & 0xffffffff;
  uStack_78 = uStack_98;
  pppplStack_80 = pppplStack_a0;
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  uStack_98 = 0;
  pppplStack_a0 = (long ****)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  ppppplVar6 = &pppplStack_80;
  uStack_60 = param_6;
  uStack_58 = param_7;
  FUN_1007447bc(param_1,param_2);
  ppppplVar4 = (long *****)pppplStack_80;
  if ((long *****)0x1 < pppplStack_80) {
    do {
      pppplVar8 = (long ****)*pppplStack_80;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pppplStack_80,0x10);
      if (bVar2) {
        *pppplStack_80 = (long ***)((long)pppplVar8 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((long ****)((long)pppplVar8 + -1) == (long ****)0x0) {
      (*(code *)pppplStack_80[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppppplVar4;
  }
  func_0x000107c60e78();
  if ((int)param_3 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&pppplStack_80);
  }
  ppppplVar5 = ppppplVar4;
  func_0x000107c60bd8();
  uStack_c0 = param_2;
  pppplStack_b8 = (long ****)ppppplVar4;
  puStack_b0 = &stack0xfffffffffffffff0;
  if ((param_3 == 5) && (*(int *)ppppplVar5 == 0x7461703a && *(char *)((long)ppppplVar5 + 4) == 'h')
     ) {
    pcStack_a8 = FUN_1007447bc;
    ppplStack_c8 = *(long ****)PTR____stack_chk_guard_11034bdc0;
    ppppplVar4 = ppppplVar6;
    FUN_10074482c(&pppplStack_e8);
    pppplVar8 = ppppplVar6[6];
    FUN_100744d34();
    *extraout_x8 = ppppplVar4;
    *(int *)(extraout_x8 + 5) = (int)pppplVar8;
    extraout_x8[2] = ppplStack_e0;
    extraout_x8[1] = pppplStack_e8;
    extraout_x8[4] = ppplStack_d0;
    extraout_x8[3] = ppplStack_d8;
    if ((long ***)*(long *)PTR____stack_chk_guard_11034bdc0 == ppplStack_c8) {
      return ppppplVar4;
    }
    func_0x000107c60e78();
    FUN_1004b6d90(&pppplStack_e8);
    func_0x000107c60bd8(ppppplVar4);
    ppplStack_f8 = (long ***)FUN_100744d34;
    if ((bRam00000001130a5980 & 1) == 0) {
      iVar3 = 0x130a5980;
      ppplStack_100 = (long ***)&puStack_b0;
      func_0x000107c60e48();
      if (iVar3 != 0) {
        uRam00000001130a5940 = 0;
        puRam00000001130a5948 = &UNK_104adf4cc;
        puRam00000001130a5950 = &UNK_104aa2608;
        puRam00000001130a5958 = &UNK_104aa2538;
        puRam00000001130a5960 = &UNK_104aa2730;
        puRam00000001130a5968 = &DAT_10f760227;
        uRam00000001130a5970 = 5;
        uRam00000001130a5978 = 0;
        func_0x000107c60e4c(0x1130a5980);
      }
    }
    return (long *****)0x1130a5940;
  }
  if ((param_3 == 10) &&
     (*ppppplVar5 == (long ****)0x69726f687475613a && *(short *)(ppppplVar5 + 1) == 0x7974)) {
    pcStack_a8 = FUN_1007447bc;
    ppplStack_c8 = *(long ****)PTR____stack_chk_guard_11034bdc0;
    ppppplVar4 = ppppplVar6;
    FUN_10074482c(&pppplStack_e8);
    pppplVar8 = ppppplVar6[6];
    FUN_100744974();
    *extraout_x8 = ppppplVar4;
    *(int *)(extraout_x8 + 5) = (int)pppplVar8;
    extraout_x8[2] = ppplStack_e0;
    extraout_x8[1] = pppplStack_e8;
    extraout_x8[4] = ppplStack_d0;
    extraout_x8[3] = ppplStack_d8;
    if ((long ***)*(long *)PTR____stack_chk_guard_11034bdc0 == ppplStack_c8) {
      return ppppplVar4;
    }
    func_0x000107c60e78();
    FUN_1004b6d90(&pppplStack_e8);
    func_0x000107c60bd8(ppppplVar4);
    ppplStack_f8 = (long ***)FUN_100744974;
    if ((bRam00000001130a59c8 & 1) == 0) {
      iVar3 = 0x130a59c8;
      ppplStack_100 = (long ***)&puStack_b0;
      func_0x000107c60e48();
      if (iVar3 != 0) {
        uRam00000001130a5988 = 0;
        puRam00000001130a5990 = &UNK_104adf4cc;
        puRam00000001130a5998 = &UNK_104aa28ac;
        puRam00000001130a59a0 = &UNK_104aa2538;
        puRam00000001130a59a8 = &UNK_104aa28d4;
        puRam00000001130a59b0 = &DAT_10f760214;
        uRam00000001130a59b8 = 10;
        uRam00000001130a59c0 = 0;
        func_0x000107c60e4c(0x1130a59c8);
      }
    }
    return (long *****)0x1130a5988;
  }
  if ((param_3 == 7) &&
     (*(int *)ppppplVar5 == 0x74656d3a && *(int *)((long)ppppplVar5 + 3) == 0x646f6874)) {
    pcStack_a8 = FUN_1007447bc;
    ppppplVar4 = ppppplVar6;
    ppplStack_d0 = (long ***)param_7;
    ppplStack_c8 = (long ***)param_1;
    FUN_100744b0c();
    pppplVar8 = ppppplVar6[6];
    ppppplVar6 = ppppplVar4;
    FUN_100744c0c();
    *extraout_x8 = ppppplVar6;
    *(int *)(extraout_x8 + 5) = (int)pppplVar8;
    *(int *)(extraout_x8 + 1) = (int)ppppplVar4;
    return ppppplVar6;
  }
  if ((param_3 == 7) &&
     (*(int *)ppppplVar5 == 0x6174733a && *(int *)((long)ppppplVar5 + 3) == 0x73757461)) {
    pcStack_a8 = FUN_1007447bc;
    ppppplVar4 = ppppplVar6;
    ppplStack_d0 = (long ***)param_7;
    ppplStack_c8 = (long ***)param_1;
    FUN_100745064();
    pppplVar8 = ppppplVar6[6];
    ppppplVar6 = ppppplVar4;
    FUN_10074582c();
    *extraout_x8 = ppppplVar6;
    *(int *)(extraout_x8 + 5) = (int)pppplVar8;
    *(int *)(extraout_x8 + 1) = (int)ppppplVar4;
    return ppppplVar6;
  }
  if ((param_3 == 7) &&
     (*(int *)ppppplVar5 == 0x6863733a && *(int *)((long)ppppplVar5 + 3) == 0x656d6568)) {
    pcStack_a8 = FUN_1007447bc;
    ppppplVar4 = ppppplVar6;
    ppplStack_d0 = (long ***)param_7;
    ppplStack_c8 = (long ***)param_1;
    FUN_100744e34();
    pppplVar8 = ppppplVar6[6];
    ppppplVar6 = ppppplVar4;
    FUN_100744f54();
    *extraout_x8 = ppppplVar6;
    *(int *)(extraout_x8 + 5) = (int)pppplVar8;
    *(int *)(extraout_x8 + 1) = (int)ppppplVar4;
    return ppppplVar6;
  }
  if ((param_3 == 0xc) &&
     (*ppppplVar5 == (long ****)0x2d746e65746e6f63 && *(int *)(ppppplVar5 + 1) == 0x65707974)) {
    pcStack_a8 = FUN_1007447bc;
    ppppplVar4 = ppppplVar6;
    ppplStack_d0 = (long ***)param_7;
    ppplStack_c8 = (long ***)param_1;
    FUN_100746544();
    pppplVar8 = ppppplVar6[6];
    ppppplVar6 = ppppplVar4;
    FUN_100746644();
    *extraout_x8 = ppppplVar6;
    *(int *)(extraout_x8 + 5) = (int)pppplVar8;
    *(int *)(extraout_x8 + 1) = (int)ppppplVar4;
    return ppppplVar6;
  }
  if ((param_3 == 2) && (*(short *)ppppplVar5 == 0x6574)) {
    pcStack_a8 = FUN_1007447bc;
    ppppplVar4 = ppppplVar6;
    ppplStack_d0 = (long ***)param_7;
    ppplStack_c8 = (long ***)param_1;
    func_0x000104aa30c8();
    pppplVar8 = ppppplVar6[6];
    ppppplVar6 = ppppplVar4;
    func_0x000104aa3184();
    *extraout_x8 = ppppplVar6;
    *(int *)(extraout_x8 + 5) = (int)pppplVar8;
    *(char *)(extraout_x8 + 1) = (char)ppppplVar4;
    return ppppplVar6;
  }
  if ((param_3 == 0xd) &&
     (*ppppplVar5 == (long ****)0x636e652d63707267 &&
      *(long *)((long)ppppplVar5 + 5) == 0x676e69646f636e65)) {
    pcStack_a8 = FUN_1007447bc;
    ppppplVar4 = ppppplVar6;
    ppplStack_d0 = (long ***)param_7;
    ppplStack_c8 = (long ***)param_1;
    func_0x000104aa3424();
    pppplVar8 = ppppplVar6[6];
    ppppplVar6 = ppppplVar4;
    func_0x000104aa34e0();
    *extraout_x8 = ppppplVar6;
    *(int *)(extraout_x8 + 5) = (int)pppplVar8;
    *(int *)(extraout_x8 + 1) = (int)ppppplVar4;
    return ppppplVar6;
  }
  if ((param_3 == 0x1e) &&
     (((*ppppplVar5 == (long ****)0x746e692d63707267 &&
       ppppplVar5[1] == (long ****)0x6e652d6c616e7265) &&
      ppppplVar5[2] == (long ****)0x722d676e69646f63) &&
      *(long *)((long)ppppplVar5 + 0x16) == 0x747365757165722d)) {
    pcStack_a8 = FUN_1007447bc;
    ppppplVar4 = ppppplVar6;
    ppplStack_d0 = (long ***)param_7;
    ppplStack_c8 = (long ***)param_1;
    func_0x000104aa3424();
    pppplVar8 = ppppplVar6[6];
    ppppplVar6 = ppppplVar4;
    func_0x000104aa37a4();
    *extraout_x8 = ppppplVar6;
    *(int *)(extraout_x8 + 5) = (int)pppplVar8;
    *(int *)(extraout_x8 + 1) = (int)ppppplVar4;
    return ppppplVar6;
  }
  if ((param_3 == 0x14) &&
     ((*ppppplVar5 == (long ****)0x6363612d63707267 &&
      ppppplVar5[1] == (long ****)0x6f636e652d747065) && *(int *)(ppppplVar5 + 2) == 0x676e6964)) {
    pcStack_a8 = FUN_1007447bc;
    ppppplVar4 = ppppplVar6;
    ppplStack_d0 = (long ***)param_7;
    ppplStack_c8 = (long ***)param_1;
    func_0x000104aa38c0();
    pppplVar8 = ppppplVar6[6];
    ppppplVar6 = ppppplVar4;
    func_0x000104aa3998();
    *extraout_x8 = ppppplVar6;
    *(int *)(extraout_x8 + 5) = (int)pppplVar8;
    ppppplVar6 = (long *****)0x1;
    __Znwm();
    *(char *)ppppplVar6 = (char)ppppplVar4;
    extraout_x8[1] = ppppplVar6;
    return ppppplVar6;
  }
  if ((param_3 == 0xb) &&
     (*ppppplVar5 == (long ****)0x6174732d63707267 &&
      *(long *)((long)ppppplVar5 + 3) == 0x7375746174732d63)) {
    pcStack_a8 = FUN_1007447bc;
    ppppplVar4 = ppppplVar6;
    ppplStack_d0 = (long ***)param_7;
    ppplStack_c8 = (long ***)param_1;
    func_0x000104aa3cc4();
    pppplVar8 = ppppplVar6[6];
    ppppplVar6 = ppppplVar4;
    func_0x000104aa3d80();
    *extraout_x8 = ppppplVar6;
    *(int *)(extraout_x8 + 5) = (int)pppplVar8;
    *(int *)(extraout_x8 + 1) = (int)ppppplVar4;
    return ppppplVar6;
  }
  if ((param_3 == 0xc) &&
     (*ppppplVar5 == (long ****)0x6d69742d63707267 && *(int *)(ppppplVar5 + 1) == 0x74756f65)) {
    pcStack_a8 = FUN_1007447bc;
    ppppplVar4 = ppppplVar6;
    ppplStack_d0 = (long ***)param_7;
    ppplStack_c8 = (long ***)param_1;
    func_0x000104aa4050();
    pppplVar8 = ppppplVar6[6];
    ppppplVar6 = ppppplVar4;
    func_0x000104aa410c();
    *(int *)(extraout_x8 + 5) = (int)pppplVar8;
    *extraout_x8 = ppppplVar6;
    extraout_x8[1] = ppppplVar4;
    return ppppplVar6;
  }
  if ((param_3 == 0x1a) &&
     (((*ppppplVar5 == (long ****)0x6572702d63707267 &&
       ppppplVar5[1] == (long ****)0x70722d73756f6976) &&
      ppppplVar5[2] == (long ****)0x706d657474612d63) && *(short *)(ppppplVar5 + 3) == 0x7374)) {
    pcStack_a8 = FUN_1007447bc;
    ppppplVar4 = ppppplVar6;
    ppplStack_d0 = (long ***)param_7;
    ppplStack_c8 = (long ***)param_1;
    FUN_100745064();
    pppplVar8 = ppppplVar6[6];
    ppppplVar6 = ppppplVar4;
    func_0x000104aa4414();
    *extraout_x8 = ppppplVar6;
    *(int *)(extraout_x8 + 5) = (int)pppplVar8;
    *(int *)(extraout_x8 + 1) = (int)ppppplVar4;
    return ppppplVar6;
  }
  if ((param_3 == 0x16) &&
     ((*ppppplVar5 == (long ****)0x7465722d63707267 &&
      ppppplVar5[1] == (long ****)0x62687375702d7972) &&
      *(long *)((long)ppppplVar5 + 0xe) == 0x736d2d6b63616268)) {
    pcStack_a8 = FUN_1007447bc;
    ppppplVar4 = ppppplVar6;
    ppplStack_d0 = (long ***)param_7;
    ppplStack_c8 = (long ***)param_1;
    func_0x000104aa4520();
    pppplVar8 = ppppplVar6[6];
    ppppplVar6 = ppppplVar4;
    func_0x000104aa45dc();
    *(int *)(extraout_x8 + 5) = (int)pppplVar8;
    *extraout_x8 = ppppplVar6;
    extraout_x8[1] = ppppplVar4;
    return ppppplVar6;
  }
  if ((param_3 == 10) &&
     (*ppppplVar5 == (long ****)0x6567612d72657375 && *(short *)(ppppplVar5 + 1) == 0x746e)) {
    pcStack_a8 = FUN_1007447bc;
    ppplStack_c8 = *(long ****)PTR____stack_chk_guard_11034bdc0;
    ppppplVar4 = ppppplVar6;
    FUN_10074482c(&pppplStack_e8);
    pppplVar8 = ppppplVar6[6];
    FUN_100746894();
    *extraout_x8 = ppppplVar4;
    *(int *)(extraout_x8 + 5) = (int)pppplVar8;
    extraout_x8[2] = ppplStack_e0;
    extraout_x8[1] = pppplStack_e8;
    extraout_x8[4] = ppplStack_d0;
    extraout_x8[3] = ppplStack_d8;
    if ((long ***)*(long *)PTR____stack_chk_guard_11034bdc0 == ppplStack_c8) {
      return ppppplVar4;
    }
    func_0x000107c60e78();
    FUN_1004b6d90(&pppplStack_e8);
    func_0x000107c60bd8(ppppplVar4);
    ppplStack_f8 = (long ***)FUN_100746894;
    if ((bRam00000001130a5d70 & 1) == 0) {
      iVar3 = 0x130a5d70;
      ppplStack_100 = (long ***)&puStack_b0;
      func_0x000107c60e48();
      if (iVar3 != 0) {
        uRam00000001130a5d30 = 0;
        puRam00000001130a5d38 = &UNK_104adf4cc;
        puRam00000001130a5d40 = &UNK_104aa4864;
        puRam00000001130a5d48 = &UNK_104aa2538;
        puRam00000001130a5d50 = &UNK_104aa488c;
        puRam00000001130a5d58 = &DAT_10f740723;
        uRam00000001130a5d60 = 10;
        uRam00000001130a5d68 = 0;
        func_0x000107c60e4c(0x1130a5d70);
      }
    }
    return (long *****)0x1130a5d30;
  }
  if ((param_3 == 0xc) &&
     (*ppppplVar5 == (long ****)0x73656d2d63707267 && *(int *)(ppppplVar5 + 1) == 0x65676173)) {
    pcStack_a8 = FUN_1007447bc;
    ppplStack_c8 = *(long ****)PTR____stack_chk_guard_11034bdc0;
    FUN_10074482c(&pppplStack_e8);
    ppplStack_f8 = (long ***)&UNK_104aa48e8;
    if ((bRam00000001130a5db8 & 1) == 0) {
      iVar3 = 0x130a5db8;
      ppplStack_100 = (long ***)&puStack_b0;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        uRam00000001130a5d78 = 0;
        puRam00000001130a5d80 = &UNK_104adf4cc;
        puRam00000001130a5d88 = &UNK_104aa49d8;
        puRam00000001130a5d90 = &UNK_104aa2538;
        puRam00000001130a5d98 = &UNK_104aa4a00;
        puRam00000001130a5da0 = &UNK_10f67192f;
        uRam00000001130a5da8 = 0xc;
        uRam00000001130a5db0 = 0;
        ___cxa_guard_release(0x1130a5db8);
      }
    }
    return (long *****)0x1130a5d78;
  }
  if ((param_3 == 4) && (*(int *)ppppplVar5 == 0x74736f68)) {
    pcStack_a8 = FUN_1007447bc;
    ppplStack_c8 = *(long ****)PTR____stack_chk_guard_11034bdc0;
    ppppplVar4 = ppppplVar6;
    FUN_10074482c(&pppplStack_e8);
    pppplVar8 = ppppplVar6[6];
    FUN_10074676c();
    *extraout_x8 = ppppplVar4;
    *(int *)(extraout_x8 + 5) = (int)pppplVar8;
    extraout_x8[2] = ppplStack_e0;
    extraout_x8[1] = pppplStack_e8;
    extraout_x8[4] = ppplStack_d0;
    extraout_x8[3] = ppplStack_d8;
    if ((long ***)*(long *)PTR____stack_chk_guard_11034bdc0 == ppplStack_c8) {
      return ppppplVar4;
    }
    func_0x000107c60e78();
    FUN_1004b6d90(&pppplStack_e8);
    func_0x000107c60bd8(ppppplVar4);
    ppplStack_f8 = (long ***)FUN_10074676c;
    if ((bRam00000001130a5e00 & 1) == 0) {
      iVar3 = 0x130a5e00;
      ppplStack_100 = (long ***)&puStack_b0;
      func_0x000107c60e48();
      if (iVar3 != 0) {
        uRam00000001130a5dc0 = 0;
        puRam00000001130a5dc8 = &UNK_104adf4cc;
        puRam00000001130a5dd0 = &UNK_104aa4a24;
        puRam00000001130a5dd8 = &UNK_104aa2538;
        puRam00000001130a5de0 = &UNK_104aa4a4c;
        puRam00000001130a5de8 = &DAT_10f2df4ca;
        uRam00000001130a5df0 = 4;
        uRam00000001130a5df8 = 0;
        func_0x000107c60e4c(0x1130a5e00);
      }
    }
    return (long *****)0x1130a5dc0;
  }
  if ((param_3 == 0x19) &&
     (((*ppppplVar5 == (long ****)0x746e696f70646e65 &&
       ppppplVar5[1] == (long ****)0x656d2d64616f6c2d) &&
      ppppplVar5[2] == (long ****)0x69622d7363697274) && *(char *)(ppppplVar5 + 3) == 'n')) {
    pcStack_a8 = FUN_1007447bc;
    ppplStack_c8 = *(long ****)PTR____stack_chk_guard_11034bdc0;
    FUN_10074482c(&pppplStack_e8);
    ppplStack_f8 = (long ***)&UNK_104aa4aa8;
    if ((bRam00000001130a5e48 & 1) == 0) {
      iVar3 = 0x130a5e48;
      ppplStack_100 = (long ***)&puStack_b0;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        uRam00000001130a5e08 = 1;
        puRam00000001130a5e10 = &UNK_104adf4cc;
        puRam00000001130a5e18 = &UNK_104aa4b9c;
        puRam00000001130a5e20 = &UNK_104aa2538;
        puRam00000001130a5e28 = &UNK_104aa4bc4;
        pcRam00000001130a5e30 = "endpoint-load-metrics-bin";
        uRam00000001130a5e38 = 0x19;
        uRam00000001130a5e40 = 0;
        ___cxa_guard_release(0x1130a5e48);
      }
    }
    return (long *****)0x1130a5e08;
  }
  if ((param_3 == 0x15) &&
     ((*ppppplVar5 == (long ****)0x7265732d63707267 &&
      ppppplVar5[1] == (long ****)0x746174732d726576) &&
      *(long *)((long)ppppplVar5 + 0xd) == 0x6e69622d73746174)) {
    pcStack_a8 = FUN_1007447bc;
    ppplStack_c8 = *(long ****)PTR____stack_chk_guard_11034bdc0;
    FUN_10074482c(&pppplStack_e8);
    ppplStack_f8 = (long ***)&UNK_104aa4c20;
    if ((bRam00000001130a5e90 & 1) == 0) {
      iVar3 = 0x130a5e90;
      ppplStack_100 = (long ***)&puStack_b0;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        uRam00000001130a5e50 = 1;
        puRam00000001130a5e58 = &UNK_104adf4cc;
        puRam00000001130a5e60 = &UNK_104aa4d14;
        puRam00000001130a5e68 = &UNK_104aa2538;
        puRam00000001130a5e70 = &UNK_104aa4d3c;
        pcRam00000001130a5e78 = "grpc-server-stats-bin";
        uRam00000001130a5e80 = 0x15;
        uRam00000001130a5e88 = 0;
        ___cxa_guard_release(0x1130a5e90);
      }
    }
    return (long *****)0x1130a5e50;
  }
  if ((param_3 == 0xe) &&
     (*ppppplVar5 == (long ****)0x6172742d63707267 &&
      *(long *)((long)ppppplVar5 + 6) == 0x6e69622d65636172)) {
    pcStack_a8 = FUN_1007447bc;
    ppplStack_c8 = *(long ****)PTR____stack_chk_guard_11034bdc0;
    FUN_10074482c(&pppplStack_e8);
    ppplStack_f8 = (long ***)&UNK_104aa4d98;
    if ((bRam00000001130a5ed8 & 1) == 0) {
      iVar3 = 0x130a5ed8;
      ppplStack_100 = (long ***)&puStack_b0;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        uRam00000001130a5e98 = 1;
        puRam00000001130a5ea0 = &UNK_104adf4cc;
        puRam00000001130a5ea8 = &UNK_104aa4e8c;
        puRam00000001130a5eb0 = &UNK_104aa2538;
        puRam00000001130a5eb8 = &UNK_104aa4eb4;
        pcRam00000001130a5ec0 = "grpc-trace-bin";
        uRam00000001130a5ec8 = 0xe;
        uRam00000001130a5ed0 = 0;
        ___cxa_guard_release(0x1130a5ed8);
      }
    }
    return (long *****)0x1130a5e98;
  }
  if ((param_3 == 0xd) &&
     (*ppppplVar5 == (long ****)0x6761742d63707267 &&
      *(long *)((long)ppppplVar5 + 5) == 0x6e69622d73676174)) {
    pcStack_a8 = FUN_1007447bc;
    ppplStack_c8 = *(long ****)PTR____stack_chk_guard_11034bdc0;
    FUN_10074482c(&pppplStack_e8);
    ppplStack_f8 = (long ***)&UNK_104aa4f10;
    if ((bRam00000001130a5f20 & 1) == 0) {
      iVar3 = 0x130a5f20;
      ppplStack_100 = (long ***)&puStack_b0;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        uRam00000001130a5ee0 = 1;
        puRam00000001130a5ee8 = &UNK_104adf4cc;
        puRam00000001130a5ef0 = &UNK_104aa5004;
        puRam00000001130a5ef8 = &UNK_104aa2538;
        puRam00000001130a5f00 = &UNK_104aa502c;
        pcRam00000001130a5f08 = "grpc-tags-bin";
        uRam00000001130a5f10 = 0xd;
        uRam00000001130a5f18 = 0;
        ___cxa_guard_release(0x1130a5f20);
      }
    }
    return (long *****)0x1130a5ee0;
  }
  if ((param_3 == 0x13) &&
     ((*ppppplVar5 == (long ****)0x635f626c63707267 &&
      ppppplVar5[1] == (long ****)0x74735f746e65696c) &&
      *(long *)((long)ppppplVar5 + 0xb) == 0x73746174735f746e)) {
    pcStack_a8 = FUN_1007447bc;
    ppppplVar4 = ppppplVar6;
    ppplStack_d0 = (long ***)param_7;
    ppplStack_c8 = (long ***)param_1;
    func_0x000104aa5090();
    pppplVar8 = ppppplVar6[6];
    ppppplVar6 = ppppplVar4;
    func_0x000104aa50dc();
    *(int *)(extraout_x8 + 5) = (int)pppplVar8;
    *extraout_x8 = ppppplVar6;
    extraout_x8[1] = ppppplVar4;
    return ppppplVar6;
  }
  if ((param_3 == 0xb) &&
     (*ppppplVar5 == (long ****)0x2d74736f632d626c &&
      *(long *)((long)ppppplVar5 + 3) == 0x6e69622d74736f63)) {
    pcStack_a8 = FUN_1007447bc;
    ppppplVar4 = ppppplVar6;
    func_0x000104aa5360(&ppplStack_e0);
    pppplVar8 = ppppplVar6[6];
    func_0x000104aa5414();
    *extraout_x8 = ppppplVar4;
    *(int *)(extraout_x8 + 5) = (int)pppplVar8;
    ppppplVar6 = (long *****)0x20;
    __Znwm();
    *ppppplVar6 = (long ****)ppplStack_e0;
    ppppplVar6[2] = (long ****)ppplStack_d0;
    ppppplVar6[1] = (long ****)ppplStack_d8;
    ppppplVar6[3] = (long ****)ppplStack_c8;
    extraout_x8[1] = ppppplVar6;
    return ppppplVar6;
  }
  if ((param_3 == 8) && (*ppppplVar5 == (long ****)0x6e656b6f742d626c)) {
    pcStack_a8 = FUN_1007447bc;
    ppplStack_c8 = *(long ****)PTR____stack_chk_guard_11034bdc0;
    FUN_10074482c(&pppplStack_e8);
    ppplStack_f8 = (long ***)&UNK_104aa58d0;
    if ((bRam00000001130a5ff8 & 1) == 0) {
      iVar3 = 0x130a5ff8;
      ppplStack_100 = (long ***)&puStack_b0;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        uRam00000001130a5fb8 = 0;
        puRam00000001130a5fc0 = &UNK_104adf4cc;
        puRam00000001130a5fc8 = &UNK_104aa59c0;
        puRam00000001130a5fd0 = &UNK_104aa2538;
        puRam00000001130a5fd8 = &UNK_104aa59e8;
        pcRam00000001130a5fe0 = "lb-token";
        uRam00000001130a5fe8 = 8;
        uRam00000001130a5ff0 = 0;
        ___cxa_guard_release(0x1130a5ff8);
      }
    }
    return (long *****)0x1130a5fb8;
  }
  pppplVar8 = &ppplStack_110;
  pcStack_a8 = FUN_1007447bc;
  ppplStack_c8 = *(long ****)PTR____stack_chk_guard_11034bdc0;
  FUN_1004b6808(&pppplStack_e8,ppppplVar5,param_3);
  ppplStack_108 = (long ***)ppppplVar6[1];
  ppplStack_110 = (long ***)*ppppplVar6;
  ppplStack_f8 = (long ***)ppppplVar6[3];
  ppplStack_100 = (long ***)ppppplVar6[2];
  ppppplVar6[1] = (long ****)0x0;
  *ppppplVar6 = (long ****)0x0;
  ppppplVar6[3] = (long ****)0x0;
  ppppplVar6[2] = (long ****)0x0;
  ppppplVar6 = &pppplStack_e8;
  FUN_1007462d4(extraout_x8);
  if ((long ****)0x1 < ppplStack_110) {
    do {
      ppplVar9 = (long ***)*ppplStack_110;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppplStack_110,0x10);
      if (bVar2) {
        *ppplStack_110 = (long **)((long)ppplVar9 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((long ***)((long)ppplVar9 + -1) == (long ***)0x0) {
      (*(code *)ppplStack_110[1])();
    }
  }
  ppppplVar4 = (long *****)pppplStack_e8;
  if ((long *****)0x1 < pppplStack_e8) {
    do {
      pppplVar10 = (long ****)*pppplStack_e8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pppplStack_e8,0x10);
      if (bVar2) {
        *pppplStack_e8 = (long ***)((long)pppplVar10 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((long ****)((long)pppplVar10 + -1) == (long ****)0x0) {
      (*(code *)pppplStack_e8[1])();
      ppppplVar4 = (long *****)pppplStack_e8;
    }
  }
  if ((long ***)*(long *)PTR____stack_chk_guard_11034bdc0 == ppplStack_c8) {
    return ppppplVar4;
  }
  func_0x000107c60e78();
  if ((int)ppppplVar6 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&ppplStack_110);
    FUN_1004b6d90(&pppplStack_e8);
  }
  func_0x000107c60bd8();
  pppplVar10 = *ppppplVar6;
  if (pppplVar10 == (long ****)0x0) {
    pppplVar14 = (long ****)((long)ppppplVar6 + 9);
    pppplVar13 = (long ****)(ulong)*(byte *)(ppppplVar6 + 1);
  }
  else {
    pppplVar13 = ppppplVar6[1];
    pppplVar14 = ppppplVar6[2];
  }
  if (pppplVar13 < (long ****)0x4) {
    uVar12 = 0;
  }
  else {
    uVar12 = (ulong)(*(int *)((long)pppplVar13 + (long)pppplVar14 + -4) == 0x6e69622d);
  }
  *ppppplVar4 = (long ****)(&UNK_1107c4388 + uVar12 * 0x40);
  if (pppplVar10 == (long ****)0x0) {
    uVar7 = (uint)*(byte *)(ppppplVar6 + 1);
  }
  else {
    uVar7 = (uint)ppppplVar6[1];
  }
  if (*pppplVar8 == (long ***)0x0) {
    uVar11 = (uint)*(byte *)(pppplVar8 + 1);
  }
  else {
    uVar11 = (uint)pppplVar8[1];
  }
  *(uint *)(ppppplVar4 + 5) = uVar11 + uVar7 + 0x20;
  pppplVar10 = (long ****)0x40;
  func_0x000107c60e20();
  pppplVar14 = *ppppplVar6;
  pppplVar15 = ppppplVar6[3];
  pppplVar13 = ppppplVar6[2];
  pppplVar10[1] = (long ***)ppppplVar6[1];
  *pppplVar10 = (long ***)pppplVar14;
  pppplVar10[3] = (long ***)pppplVar15;
  pppplVar10[2] = (long ***)pppplVar13;
  ppppplVar6[1] = (long ****)0x0;
  *ppppplVar6 = (long ****)0x0;
  ppppplVar6[3] = (long ****)0x0;
  ppppplVar6[2] = (long ****)0x0;
  ppplVar9 = *pppplVar8;
  ppplVar17 = pppplVar8[3];
  ppplVar16 = pppplVar8[2];
  pppplVar10[5] = pppplVar8[1];
  pppplVar10[4] = ppplVar9;
  pppplVar10[7] = ppplVar17;
  pppplVar10[6] = ppplVar16;
  pppplVar8[1] = (long ***)0x0;
  *pppplVar8 = (long ***)0x0;
  pppplVar8[3] = (long ***)0x0;
  pppplVar8[2] = (long ***)0x0;
  ppppplVar4[1] = pppplVar10;
  return ppppplVar4;
}



/* Entry: 1007447bc; end: 10074482b;  */

/* WARNING: Possible PIC construction at 0x000104aa58cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104aa4f0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104aa4d94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104aa4c1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104aa4aa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104aa48e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104aa4aa8) */
/* WARNING: Removing unreachable block (ram,0x000104aa4ae8) */
/* WARNING: Removing unreachable block (ram,0x000104aa4b00) */
/* WARNING: Removing unreachable block (ram,0x000104aa4ad8) */
/* WARNING: Removing unreachable block (ram,0x000104aa4c20) */
/* WARNING: Removing unreachable block (ram,0x000104aa4c60) */
/* WARNING: Removing unreachable block (ram,0x000104aa4c78) */
/* WARNING: Removing unreachable block (ram,0x000104aa4c50) */
/* WARNING: Removing unreachable block (ram,0x000104aa4d98) */
/* WARNING: Removing unreachable block (ram,0x000104aa4dd8) */
/* WARNING: Removing unreachable block (ram,0x000104aa4df0) */
/* WARNING: Removing unreachable block (ram,0x000104aa4dc8) */
/* WARNING: Removing unreachable block (ram,0x000104aa4f10) */
/* WARNING: Removing unreachable block (ram,0x000104aa4f50) */
/* WARNING: Removing unreachable block (ram,0x000104aa4f68) */
/* WARNING: Removing unreachable block (ram,0x000104aa4f40) */
/* WARNING: Removing unreachable block (ram,0x000104aa58d0) */
/* WARNING: Removing unreachable block (ram,0x000104aa5910) */
/* WARNING: Removing unreachable block (ram,0x000104aa5928) */
/* WARNING: Removing unreachable block (ram,0x000104aa5900) */
/* WARNING: Removing unreachable block (ram,0x000104aa48e8) */
/* WARNING: Removing unreachable block (ram,0x000104aa4928) */
/* WARNING: Removing unreachable block (ram,0x000104aa4940) */
/* WARNING: Removing unreachable block (ram,0x000104aa4918) */

long * FUN_1007447bc(undefined8 *param_1,long *param_2,long param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  long **pplVar6;
  long **pplVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long *plStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  long in_stack_ffffffffffffffd0;
  long in_stack_ffffffffffffffd8;
  
  if ((param_3 == 5) && ((int)*param_2 == 0x7461703a && *(char *)((long)param_2 + 4) == 'h')) {
    lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar5 = param_4;
    FUN_10074482c(&plStack_48);
    lVar10 = param_4[6];
    FUN_100744d34();
    *param_1 = plVar5;
    *(int *)(param_1 + 5) = (int)lVar10;
    param_1[2] = lStack_40;
    param_1[1] = plStack_48;
    param_1[4] = in_stack_ffffffffffffffd0;
    param_1[3] = lStack_38;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
      return plVar5;
    }
    func_0x000107c60e78();
    FUN_1004b6d90(&plStack_48);
    func_0x000107c60bd8(plVar5);
    pcStack_58 = FUN_100744d34;
    if ((bRam00000001130a5980 & 1) == 0) {
      iVar3 = 0x130a5980;
      puStack_60 = &stack0xfffffffffffffff0;
      func_0x000107c60e48();
      if (iVar3 != 0) {
        uRam00000001130a5940 = 0;
        puRam00000001130a5948 = &UNK_104adf4cc;
        puRam00000001130a5950 = &UNK_104aa2608;
        puRam00000001130a5958 = &UNK_104aa2538;
        puRam00000001130a5960 = &UNK_104aa2730;
        puRam00000001130a5968 = &DAT_10f760227;
        uRam00000001130a5970 = 5;
        uRam00000001130a5978 = 0;
        func_0x000107c60e4c(0x1130a5980);
      }
    }
    return (long *)0x1130a5940;
  }
  if ((param_3 == 10) && (*param_2 == 0x69726f687475613a && (short)param_2[1] == 0x7974)) {
    lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar5 = param_4;
    FUN_10074482c(&plStack_48);
    lVar10 = param_4[6];
    FUN_100744974();
    *param_1 = plVar5;
    *(int *)(param_1 + 5) = (int)lVar10;
    param_1[2] = lStack_40;
    param_1[1] = plStack_48;
    param_1[4] = in_stack_ffffffffffffffd0;
    param_1[3] = lStack_38;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
      return plVar5;
    }
    func_0x000107c60e78();
    FUN_1004b6d90(&plStack_48);
    func_0x000107c60bd8(plVar5);
    pcStack_58 = FUN_100744974;
    if ((bRam00000001130a59c8 & 1) == 0) {
      iVar3 = 0x130a59c8;
      puStack_60 = &stack0xfffffffffffffff0;
      func_0x000107c60e48();
      if (iVar3 != 0) {
        uRam00000001130a5988 = 0;
        puRam00000001130a5990 = &UNK_104adf4cc;
        puRam00000001130a5998 = &UNK_104aa28ac;
        puRam00000001130a59a0 = &UNK_104aa2538;
        puRam00000001130a59a8 = &UNK_104aa28d4;
        puRam00000001130a59b0 = &DAT_10f760214;
        uRam00000001130a59b8 = 10;
        uRam00000001130a59c0 = 0;
        func_0x000107c60e4c(0x1130a59c8);
      }
    }
    return (long *)0x1130a5988;
  }
  if ((param_3 == 7) && ((int)*param_2 == 0x74656d3a && *(int *)((long)param_2 + 3) == 0x646f6874))
  {
    plVar5 = param_4;
    FUN_100744b0c();
    lVar9 = param_4[6];
    plVar11 = plVar5;
    FUN_100744c0c();
    *param_1 = plVar11;
    *(int *)(param_1 + 5) = (int)lVar9;
    *(int *)(param_1 + 1) = (int)plVar5;
    return plVar11;
  }
  if ((param_3 == 7) && ((int)*param_2 == 0x6174733a && *(int *)((long)param_2 + 3) == 0x73757461))
  {
    plVar5 = param_4;
    FUN_100745064();
    lVar9 = param_4[6];
    plVar11 = plVar5;
    FUN_10074582c();
    *param_1 = plVar11;
    *(int *)(param_1 + 5) = (int)lVar9;
    *(int *)(param_1 + 1) = (int)plVar5;
    return plVar11;
  }
  if ((param_3 == 7) && ((int)*param_2 == 0x6863733a && *(int *)((long)param_2 + 3) == 0x656d6568))
  {
    plVar5 = param_4;
    FUN_100744e34();
    lVar9 = param_4[6];
    plVar11 = plVar5;
    FUN_100744f54();
    *param_1 = plVar11;
    *(int *)(param_1 + 5) = (int)lVar9;
    *(int *)(param_1 + 1) = (int)plVar5;
    return plVar11;
  }
  if ((param_3 == 0xc) && (*param_2 == 0x2d746e65746e6f63 && (int)param_2[1] == 0x65707974)) {
    plVar5 = param_4;
    FUN_100746544();
    lVar9 = param_4[6];
    plVar11 = plVar5;
    FUN_100746644();
    *param_1 = plVar11;
    *(int *)(param_1 + 5) = (int)lVar9;
    *(int *)(param_1 + 1) = (int)plVar5;
    return plVar11;
  }
  if ((param_3 == 2) && ((short)*param_2 == 0x6574)) {
    plVar5 = param_4;
    func_0x000104aa30c8();
    lVar9 = param_4[6];
    plVar11 = plVar5;
    func_0x000104aa3184();
    *param_1 = plVar11;
    *(int *)(param_1 + 5) = (int)lVar9;
    *(char *)(param_1 + 1) = (char)plVar5;
    return plVar11;
  }
  if ((param_3 == 0xd) &&
     (*param_2 == 0x636e652d63707267 && *(long *)((long)param_2 + 5) == 0x676e69646f636e65)) {
    plVar5 = param_4;
    func_0x000104aa3424();
    lVar9 = param_4[6];
    plVar11 = plVar5;
    func_0x000104aa34e0();
    *param_1 = plVar11;
    *(int *)(param_1 + 5) = (int)lVar9;
    *(int *)(param_1 + 1) = (int)plVar5;
    return plVar11;
  }
  if ((param_3 == 0x1e) &&
     (((*param_2 == 0x746e692d63707267 && param_2[1] == 0x6e652d6c616e7265) &&
      param_2[2] == 0x722d676e69646f63) && *(long *)((long)param_2 + 0x16) == 0x747365757165722d)) {
    plVar5 = param_4;
    func_0x000104aa3424();
    lVar9 = param_4[6];
    plVar11 = plVar5;
    func_0x000104aa37a4();
    *param_1 = plVar11;
    *(int *)(param_1 + 5) = (int)lVar9;
    *(int *)(param_1 + 1) = (int)plVar5;
    return plVar11;
  }
  if ((param_3 == 0x14) &&
     ((*param_2 == 0x6363612d63707267 && param_2[1] == 0x6f636e652d747065) &&
      (int)param_2[2] == 0x676e6964)) {
    plVar5 = param_4;
    func_0x000104aa38c0();
    lVar9 = param_4[6];
    plVar11 = plVar5;
    func_0x000104aa3998();
    *param_1 = plVar11;
    *(int *)(param_1 + 5) = (int)lVar9;
    plVar11 = (long *)0x1;
    __Znwm();
    *(char *)plVar11 = (char)plVar5;
    param_1[1] = plVar11;
    return plVar11;
  }
  if ((param_3 == 0xb) &&
     (*param_2 == 0x6174732d63707267 && *(long *)((long)param_2 + 3) == 0x7375746174732d63)) {
    plVar5 = param_4;
    func_0x000104aa3cc4();
    lVar9 = param_4[6];
    plVar11 = plVar5;
    func_0x000104aa3d80();
    *param_1 = plVar11;
    *(int *)(param_1 + 5) = (int)lVar9;
    *(int *)(param_1 + 1) = (int)plVar5;
    return plVar11;
  }
  if ((param_3 == 0xc) && (*param_2 == 0x6d69742d63707267 && (int)param_2[1] == 0x74756f65)) {
    plVar5 = param_4;
    func_0x000104aa4050();
    lVar9 = param_4[6];
    plVar11 = plVar5;
    func_0x000104aa410c();
    *(int *)(param_1 + 5) = (int)lVar9;
    *param_1 = plVar11;
    param_1[1] = plVar5;
    return plVar11;
  }
  if ((param_3 == 0x1a) &&
     (((*param_2 == 0x6572702d63707267 && param_2[1] == 0x70722d73756f6976) &&
      param_2[2] == 0x706d657474612d63) && (short)param_2[3] == 0x7374)) {
    plVar5 = param_4;
    FUN_100745064();
    lVar9 = param_4[6];
    plVar11 = plVar5;
    func_0x000104aa4414();
    *param_1 = plVar11;
    *(int *)(param_1 + 5) = (int)lVar9;
    *(int *)(param_1 + 1) = (int)plVar5;
    return plVar11;
  }
  if ((param_3 == 0x16) &&
     ((*param_2 == 0x7465722d63707267 && param_2[1] == 0x62687375702d7972) &&
      *(long *)((long)param_2 + 0xe) == 0x736d2d6b63616268)) {
    plVar5 = param_4;
    func_0x000104aa4520();
    lVar9 = param_4[6];
    plVar11 = plVar5;
    func_0x000104aa45dc();
    *(int *)(param_1 + 5) = (int)lVar9;
    *param_1 = plVar11;
    param_1[1] = plVar5;
    return plVar11;
  }
  if ((param_3 == 10) && (*param_2 == 0x6567612d72657375 && (short)param_2[1] == 0x746e)) {
    lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar5 = param_4;
    FUN_10074482c(&plStack_48);
    lVar10 = param_4[6];
    FUN_100746894();
    *param_1 = plVar5;
    *(int *)(param_1 + 5) = (int)lVar10;
    param_1[2] = lStack_40;
    param_1[1] = plStack_48;
    param_1[4] = in_stack_ffffffffffffffd0;
    param_1[3] = lStack_38;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
      return plVar5;
    }
    func_0x000107c60e78();
    FUN_1004b6d90(&plStack_48);
    func_0x000107c60bd8(plVar5);
    pcStack_58 = FUN_100746894;
    if ((bRam00000001130a5d70 & 1) == 0) {
      iVar3 = 0x130a5d70;
      puStack_60 = &stack0xfffffffffffffff0;
      func_0x000107c60e48();
      if (iVar3 != 0) {
        uRam00000001130a5d30 = 0;
        puRam00000001130a5d38 = &UNK_104adf4cc;
        puRam00000001130a5d40 = &UNK_104aa4864;
        puRam00000001130a5d48 = &UNK_104aa2538;
        puRam00000001130a5d50 = &UNK_104aa488c;
        puRam00000001130a5d58 = &DAT_10f740723;
        uRam00000001130a5d60 = 10;
        uRam00000001130a5d68 = 0;
        func_0x000107c60e4c(0x1130a5d70);
      }
    }
    return (long *)0x1130a5d30;
  }
  if ((param_3 == 0xc) && (*param_2 == 0x73656d2d63707267 && (int)param_2[1] == 0x65676173)) {
    FUN_10074482c(&plStack_48);
    pcStack_58 = (code *)&UNK_104aa48e8;
    if ((bRam00000001130a5db8 & 1) == 0) {
      iVar3 = 0x130a5db8;
      puStack_60 = &stack0xfffffffffffffff0;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        uRam00000001130a5d78 = 0;
        puRam00000001130a5d80 = &UNK_104adf4cc;
        puRam00000001130a5d88 = &UNK_104aa49d8;
        puRam00000001130a5d90 = &UNK_104aa2538;
        puRam00000001130a5d98 = &UNK_104aa4a00;
        puRam00000001130a5da0 = &UNK_10f67192f;
        uRam00000001130a5da8 = 0xc;
        uRam00000001130a5db0 = 0;
        ___cxa_guard_release(0x1130a5db8);
      }
    }
    return (long *)0x1130a5d78;
  }
  if ((param_3 == 4) && ((int)*param_2 == 0x74736f68)) {
    lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar5 = param_4;
    FUN_10074482c(&plStack_48);
    lVar10 = param_4[6];
    FUN_10074676c();
    *param_1 = plVar5;
    *(int *)(param_1 + 5) = (int)lVar10;
    param_1[2] = lStack_40;
    param_1[1] = plStack_48;
    param_1[4] = in_stack_ffffffffffffffd0;
    param_1[3] = lStack_38;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
      return plVar5;
    }
    func_0x000107c60e78();
    FUN_1004b6d90(&plStack_48);
    func_0x000107c60bd8(plVar5);
    pcStack_58 = FUN_10074676c;
    if ((bRam00000001130a5e00 & 1) == 0) {
      iVar3 = 0x130a5e00;
      puStack_60 = &stack0xfffffffffffffff0;
      func_0x000107c60e48();
      if (iVar3 != 0) {
        uRam00000001130a5dc0 = 0;
        puRam00000001130a5dc8 = &UNK_104adf4cc;
        puRam00000001130a5dd0 = &UNK_104aa4a24;
        puRam00000001130a5dd8 = &UNK_104aa2538;
        puRam00000001130a5de0 = &UNK_104aa4a4c;
        puRam00000001130a5de8 = &DAT_10f2df4ca;
        uRam00000001130a5df0 = 4;
        uRam00000001130a5df8 = 0;
        func_0x000107c60e4c(0x1130a5e00);
      }
    }
    return (long *)0x1130a5dc0;
  }
  if ((param_3 == 0x19) &&
     (((*param_2 == 0x746e696f70646e65 && param_2[1] == 0x656d2d64616f6c2d) &&
      param_2[2] == 0x69622d7363697274) && (char)param_2[3] == 'n')) {
    FUN_10074482c(&plStack_48);
    pcStack_58 = (code *)&UNK_104aa4aa8;
    if ((bRam00000001130a5e48 & 1) == 0) {
      iVar3 = 0x130a5e48;
      puStack_60 = &stack0xfffffffffffffff0;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        uRam00000001130a5e08 = 1;
        puRam00000001130a5e10 = &UNK_104adf4cc;
        puRam00000001130a5e18 = &UNK_104aa4b9c;
        puRam00000001130a5e20 = &UNK_104aa2538;
        puRam00000001130a5e28 = &UNK_104aa4bc4;
        pcRam00000001130a5e30 = "endpoint-load-metrics-bin";
        uRam00000001130a5e38 = 0x19;
        uRam00000001130a5e40 = 0;
        ___cxa_guard_release(0x1130a5e48);
      }
    }
    return (long *)0x1130a5e08;
  }
  if ((param_3 == 0x15) &&
     ((*param_2 == 0x7265732d63707267 && param_2[1] == 0x746174732d726576) &&
      *(long *)((long)param_2 + 0xd) == 0x6e69622d73746174)) {
    FUN_10074482c(&plStack_48);
    pcStack_58 = (code *)&UNK_104aa4c20;
    if ((bRam00000001130a5e90 & 1) == 0) {
      iVar3 = 0x130a5e90;
      puStack_60 = &stack0xfffffffffffffff0;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        uRam00000001130a5e50 = 1;
        puRam00000001130a5e58 = &UNK_104adf4cc;
        puRam00000001130a5e60 = &UNK_104aa4d14;
        puRam00000001130a5e68 = &UNK_104aa2538;
        puRam00000001130a5e70 = &UNK_104aa4d3c;
        pcRam00000001130a5e78 = "grpc-server-stats-bin";
        uRam00000001130a5e80 = 0x15;
        uRam00000001130a5e88 = 0;
        ___cxa_guard_release(0x1130a5e90);
      }
    }
    return (long *)0x1130a5e50;
  }
  if ((param_3 == 0xe) &&
     (*param_2 == 0x6172742d63707267 && *(long *)((long)param_2 + 6) == 0x6e69622d65636172)) {
    FUN_10074482c(&plStack_48);
    pcStack_58 = (code *)&UNK_104aa4d98;
    if ((bRam00000001130a5ed8 & 1) == 0) {
      iVar3 = 0x130a5ed8;
      puStack_60 = &stack0xfffffffffffffff0;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        uRam00000001130a5e98 = 1;
        puRam00000001130a5ea0 = &UNK_104adf4cc;
        puRam00000001130a5ea8 = &UNK_104aa4e8c;
        puRam00000001130a5eb0 = &UNK_104aa2538;
        puRam00000001130a5eb8 = &UNK_104aa4eb4;
        pcRam00000001130a5ec0 = "grpc-trace-bin";
        uRam00000001130a5ec8 = 0xe;
        uRam00000001130a5ed0 = 0;
        ___cxa_guard_release(0x1130a5ed8);
      }
    }
    return (long *)0x1130a5e98;
  }
  if ((param_3 == 0xd) &&
     (*param_2 == 0x6761742d63707267 && *(long *)((long)param_2 + 5) == 0x6e69622d73676174)) {
    FUN_10074482c(&plStack_48);
    pcStack_58 = (code *)&UNK_104aa4f10;
    if ((bRam00000001130a5f20 & 1) == 0) {
      iVar3 = 0x130a5f20;
      puStack_60 = &stack0xfffffffffffffff0;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        uRam00000001130a5ee0 = 1;
        puRam00000001130a5ee8 = &UNK_104adf4cc;
        puRam00000001130a5ef0 = &UNK_104aa5004;
        puRam00000001130a5ef8 = &UNK_104aa2538;
        puRam00000001130a5f00 = &UNK_104aa502c;
        pcRam00000001130a5f08 = "grpc-tags-bin";
        uRam00000001130a5f10 = 0xd;
        uRam00000001130a5f18 = 0;
        ___cxa_guard_release(0x1130a5f20);
      }
    }
    return (long *)0x1130a5ee0;
  }
  if ((param_3 == 0x13) &&
     ((*param_2 == 0x635f626c63707267 && param_2[1] == 0x74735f746e65696c) &&
      *(long *)((long)param_2 + 0xb) == 0x73746174735f746e)) {
    plVar5 = param_4;
    func_0x000104aa5090();
    lVar9 = param_4[6];
    plVar11 = plVar5;
    func_0x000104aa50dc();
    *(int *)(param_1 + 5) = (int)lVar9;
    *param_1 = plVar11;
    param_1[1] = plVar5;
    return plVar11;
  }
  if ((param_3 == 0xb) &&
     (*param_2 == 0x2d74736f632d626c && *(long *)((long)param_2 + 3) == 0x6e69622d74736f63)) {
    plVar5 = param_4;
    func_0x000104aa5360(&lStack_40);
    lVar9 = param_4[6];
    func_0x000104aa5414();
    *param_1 = plVar5;
    *(int *)(param_1 + 5) = (int)lVar9;
    plVar5 = (long *)0x20;
    __Znwm();
    *plVar5 = lStack_40;
    plVar5[2] = in_stack_ffffffffffffffd0;
    plVar5[1] = lStack_38;
    plVar5[3] = in_stack_ffffffffffffffd8;
    param_1[1] = plVar5;
    return plVar5;
  }
  if ((param_3 == 8) && (*param_2 == 0x6e656b6f742d626c)) {
    FUN_10074482c(&plStack_48);
    pcStack_58 = (code *)&UNK_104aa58d0;
    if ((bRam00000001130a5ff8 & 1) == 0) {
      iVar3 = 0x130a5ff8;
      puStack_60 = &stack0xfffffffffffffff0;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        uRam00000001130a5fb8 = 0;
        puRam00000001130a5fc0 = &UNK_104adf4cc;
        puRam00000001130a5fc8 = &UNK_104aa59c0;
        puRam00000001130a5fd0 = &UNK_104aa2538;
        puRam00000001130a5fd8 = &UNK_104aa59e8;
        pcRam00000001130a5fe0 = "lb-token";
        uRam00000001130a5fe8 = 8;
        uRam00000001130a5ff0 = 0;
        ___cxa_guard_release(0x1130a5ff8);
      }
    }
    return (long *)0x1130a5fb8;
  }
  pplVar7 = &plStack_70;
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1004b6808(&plStack_48,param_2,param_3);
  lStack_68 = param_4[1];
  plStack_70 = (long *)*param_4;
  pcStack_58 = (code *)param_4[3];
  puStack_60 = (undefined1 *)param_4[2];
  param_4[1] = 0;
  *param_4 = 0;
  param_4[3] = 0;
  param_4[2] = 0;
  pplVar6 = &plStack_48;
  FUN_1007462d4(param_1);
  if ((long *)0x1 < plStack_70) {
    do {
      lVar10 = *plStack_70;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
      if (bVar2) {
        *plStack_70 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)plStack_70[1])();
    }
  }
  plVar5 = plStack_48;
  if ((long *)0x1 < plStack_48) {
    do {
      lVar10 = *plStack_48;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_48,0x10);
      if (bVar2) {
        *plStack_48 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)plStack_48[1])();
      plVar5 = plStack_48;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return plVar5;
  }
  func_0x000107c60e78();
  if ((int)pplVar6 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&plStack_70);
    FUN_1004b6d90(&plStack_48);
  }
  func_0x000107c60bd8();
  plVar11 = *pplVar6;
  if (plVar11 == (long *)0x0) {
    plVar15 = (long *)((long)pplVar6 + 9);
    plVar14 = (long *)(ulong)*(byte *)(pplVar6 + 1);
  }
  else {
    plVar14 = pplVar6[1];
    plVar15 = pplVar6[2];
  }
  if (plVar14 < (long *)0x4) {
    uVar13 = 0;
  }
  else {
    uVar13 = (ulong)(*(int *)((long)plVar14 + (long)plVar15 + -4) == 0x6e69622d);
  }
  *plVar5 = (long)(&UNK_1107c4388 + uVar13 * 0x40);
  if (plVar11 == (long *)0x0) {
    uVar8 = (uint)*(byte *)(pplVar6 + 1);
  }
  else {
    uVar8 = (uint)pplVar6[1];
  }
  if (*pplVar7 == (long *)0x0) {
    uVar12 = (uint)*(byte *)(pplVar7 + 1);
  }
  else {
    uVar12 = (uint)pplVar7[1];
  }
  *(uint *)(plVar5 + 5) = uVar12 + uVar8 + 0x20;
  puVar4 = (undefined8 *)0x40;
  func_0x000107c60e20();
  plVar11 = *pplVar6;
  plVar14 = pplVar6[3];
  plVar15 = pplVar6[2];
  puVar4[1] = pplVar6[1];
  *puVar4 = plVar11;
  puVar4[3] = plVar14;
  puVar4[2] = plVar15;
  pplVar6[1] = (long *)0x0;
  *pplVar6 = (long *)0x0;
  pplVar6[3] = (long *)0x0;
  pplVar6[2] = (long *)0x0;
  lVar9 = (long)*pplVar7;
  lVar16 = (long)pplVar7[3];
  lVar10 = (long)pplVar7[2];
  puVar4[5] = pplVar7[1];
  puVar4[4] = lVar9;
  puVar4[7] = lVar16;
  puVar4[6] = lVar10;
  pplVar7[1] = (long *)0x0;
  *pplVar7 = (long *)0x0;
  pplVar7[3] = (long *)0x0;
  pplVar7[2] = (long *)0x0;
  plVar5[1] = (long)puVar4;
  return plVar5;
}



/* Entry: 10074482c; end: 1007448db;  */

long * FUN_10074482c(undefined8 *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 *extraout_x8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  func_0x0001004bca54(&plStack_50);
  plVar4 = plStack_50;
  if ((long *)0x1 < plStack_50) {
    do {
      lVar6 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar4;
  }
  func_0x000107c60e78();
  if (param_2 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&plStack_50);
  }
  func_0x000107c60bd8();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar4;
  FUN_10074482c(&uStack_98);
  lVar6 = plVar4[6];
  FUN_100744974();
  *extraout_x8 = plVar5;
  *(int *)(extraout_x8 + 5) = (int)lVar6;
  extraout_x8[2] = uStack_90;
  extraout_x8[1] = uStack_98;
  extraout_x8[4] = uStack_80;
  extraout_x8[3] = uStack_88;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return plVar5;
  }
  func_0x000107c60e78();
  FUN_1004b6d90(&uStack_98);
  func_0x000107c60bd8(plVar5);
  if ((bRam00000001130a59c8 & 1) == 0) {
    iVar3 = 0x130a59c8;
    func_0x000107c60e48();
    if (iVar3 != 0) {
      uRam00000001130a5988 = 0;
      puRam00000001130a5990 = &UNK_104adf4cc;
      puRam00000001130a5998 = &UNK_104aa28ac;
      puRam00000001130a59a0 = &UNK_104aa2538;
      puRam00000001130a59a8 = &UNK_104aa28d4;
      puRam00000001130a59b0 = &DAT_10f760214;
      uRam00000001130a59b8 = 10;
      uRam00000001130a59c0 = 0;
      func_0x000107c60e4c(0x1130a59c8);
    }
  }
  return (long *)0x1130a5988;
}



/* Entry: 1007448dc; end: 100744973;  */

long FUN_1007448dc(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_2;
  FUN_10074482c(&lStack_48);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  FUN_100744974();
  *param_1 = lVar2;
  *(int *)(param_1 + 5) = (int)uVar3;
  param_1[2] = lStack_40;
  param_1[1] = lStack_48;
  param_1[4] = lStack_30;
  param_1[3] = lStack_38;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return lVar2;
  }
  func_0x000107c60e78();
  FUN_1004b6d90(&lStack_48);
  func_0x000107c60bd8(lVar2);
  if ((bRam00000001130a59c8 & 1) == 0) {
    iVar1 = 0x130a59c8;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      uRam00000001130a5988 = 0;
      puRam00000001130a5990 = &UNK_104adf4cc;
      puRam00000001130a5998 = &UNK_104aa28ac;
      puRam00000001130a59a0 = &UNK_104aa2538;
      puRam00000001130a59a8 = &UNK_104aa28d4;
      puRam00000001130a59b0 = &DAT_10f760214;
      uRam00000001130a59b8 = 10;
      uRam00000001130a59c0 = 0;
      func_0x000107c60e4c(0x1130a59c8);
    }
  }
  return 0x1130a5988;
}



/* Entry: 100744974; end: 100744a03;  */

undefined8 FUN_100744974(void)

{
  int iVar1;
  
  if ((bRam00000001130a59c8 & 1) == 0) {
    iVar1 = 0x130a59c8;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      uRam00000001130a5988 = 0;
      puRam00000001130a5990 = &UNK_104adf4cc;
      puRam00000001130a5998 = &UNK_104aa28ac;
      puRam00000001130a59a0 = &UNK_104aa2538;
      puRam00000001130a59a8 = &UNK_104aa28d4;
      puRam00000001130a59b0 = &DAT_10f760214;
      uRam00000001130a59b8 = 10;
      uRam00000001130a59c0 = 0;
      func_0x000107c60e4c(0x1130a59c8);
    }
  }
  return 0x1130a5988;
}



/* Entry: 100744a04; end: 100744a3f;  */

void FUN_100744a04(void)

{
  return;
}



/* Entry: 100744a40; end: 100744b0b;  */

undefined8 FUN_100744a40(long *param_1,undefined8 param_2,code *param_3)

{
  int *piVar1;
  ulong uVar2;
  int *piVar3;
  
  if (*param_1 == 0) {
    piVar3 = (int *)((long)param_1 + 9);
    uVar2 = (ulong)*(byte *)(param_1 + 1);
  }
  else {
    uVar2 = param_1[1];
    piVar3 = (int *)param_1[2];
  }
  if (uVar2 == 3) {
    piVar1 = piVar3;
    func_0x000107c610b0(piVar3,&DAT_10f2d965f);
    if ((int)piVar1 == 0) {
      return 2;
    }
    if ((short)*piVar3 == 0x4547 && *(char *)((long)piVar3 + 2) == 'T') {
      return 1;
    }
  }
  else if ((uVar2 == 4) && (*piVar3 == 0x54534f50)) {
    return 0;
  }
  (*param_3)(param_2,"invalid value",0xd,param_1);
  return 3;
}



/* Entry: 100744b0c; end: 100744bc7;  */

long * FUN_100744b0c(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long **pplVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *extraout_x8;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  pplVar3 = &plStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  uVar7 = param_1[4];
  FUN_100744a40(&plStack_50,uVar7,param_1[5]);
  iVar6 = (int)uVar7;
  plVar4 = plStack_50;
  if ((long *)0x1 < plStack_50) {
    do {
      lVar8 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return (long *)pplVar3;
  }
  func_0x000107c60e78();
  if (iVar6 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&plStack_50);
  }
  func_0x000107c60bd8();
  plVar5 = plVar4;
  FUN_100744b0c();
  lVar8 = plVar4[6];
  plVar4 = plVar5;
  FUN_100744c0c();
  *extraout_x8 = plVar4;
  *(int *)(extraout_x8 + 5) = (int)lVar8;
  *(int *)(extraout_x8 + 1) = (int)plVar5;
  return plVar4;
}



/* Entry: 100744bc8; end: 100744c0b;  */

void FUN_100744bc8(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_2;
  FUN_100744b0c();
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  lVar2 = lVar1;
  FUN_100744c0c();
  *param_1 = lVar2;
  *(int *)(param_1 + 5) = (int)uVar3;
  *(int *)(param_1 + 1) = (int)lVar1;
  return;
}



/* Entry: 100744c0c; end: 100744c9b;  */

undefined8 FUN_100744c0c(void)

{
  int iVar1;
  
  if ((bRam00000001130a5a10 & 1) == 0) {
    iVar1 = 0x130a5a10;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      uRam00000001130a59d0 = 0;
      pcRam00000001130a59d8 = FUN_100744a04;
      puRam00000001130a59e0 = &UNK_104aa29b4;
      puRam00000001130a59e8 = &UNK_104aa28f8;
      puRam00000001130a59f0 = &UNK_104aa29d4;
      puRam00000001130a59f8 = &DAT_10f76021f;
      uRam00000001130a5a00 = 7;
      uRam00000001130a5a08 = 0;
      func_0x000107c60e4c(0x1130a5a10);
    }
  }
  return 0x1130a59d0;
}



/* Entry: 100744c9c; end: 100744d33;  */

long FUN_100744c9c(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_2;
  FUN_10074482c(&lStack_48);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  FUN_100744d34();
  *param_1 = lVar2;
  *(int *)(param_1 + 5) = (int)uVar3;
  param_1[2] = lStack_40;
  param_1[1] = lStack_48;
  param_1[4] = lStack_30;
  param_1[3] = lStack_38;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return lVar2;
  }
  func_0x000107c60e78();
  FUN_1004b6d90(&lStack_48);
  func_0x000107c60bd8(lVar2);
  if ((bRam00000001130a5980 & 1) == 0) {
    iVar1 = 0x130a5980;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      uRam00000001130a5940 = 0;
      puRam00000001130a5948 = &UNK_104adf4cc;
      puRam00000001130a5950 = &UNK_104aa2608;
      puRam00000001130a5958 = &UNK_104aa2538;
      puRam00000001130a5960 = &UNK_104aa2730;
      puRam00000001130a5968 = &DAT_10f760227;
      uRam00000001130a5970 = 5;
      uRam00000001130a5978 = 0;
      func_0x000107c60e4c(0x1130a5980);
    }
  }
  return 0x1130a5940;
}



/* Entry: 100744d34; end: 100744dc3;  */

undefined8 FUN_100744d34(void)

{
  int iVar1;
  
  if ((bRam00000001130a5980 & 1) == 0) {
    iVar1 = 0x130a5980;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      uRam00000001130a5940 = 0;
      puRam00000001130a5948 = &UNK_104adf4cc;
      puRam00000001130a5950 = &UNK_104aa2608;
      puRam00000001130a5958 = &UNK_104aa2538;
      puRam00000001130a5960 = &UNK_104aa2730;
      puRam00000001130a5968 = &DAT_10f760227;
      uRam00000001130a5970 = 5;
      uRam00000001130a5978 = 0;
      func_0x000107c60e4c(0x1130a5980);
    }
  }
  return 0x1130a5940;
}


