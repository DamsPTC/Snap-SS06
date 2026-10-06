/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00359e38; end: 00359e67;  */

ulong * FUN_00359e38(ulong *param_1)

{
  if ((*param_1 & 1) != 0) {
    FUN_0055293c();
  }
  return param_1;
}



/* Entry: 00359e68; end: 0035a8c7;  */

/* WARNING: Removing unreachable block (ram,0x0035a39c) */
/* WARNING: Removing unreachable block (ram,0x0035a6ac) */
/* WARNING: Removing unreachable block (ram,0x0035a160) */
/* WARNING: Removing unreachable block (ram,0x00359fbc) */
/* WARNING: Removing unreachable block (ram,0x0035a4b8) */

undefined8
FUN_00359e68(undefined8 param_1,undefined8 param_2,char ****param_3,long *param_4,
            undefined8 *param_5)

{
  ulong uVar1;
  char *pcVar2;
  undefined8 ***pppuVar3;
  char ***pppcVar4;
  code *pcVar5;
  char ****ppppcVar6;
  char *pcVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined8 *puVar10;
  int *piVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 ***pppuStack_260;
  undefined8 ***pppuStack_258;
  long lStack_250;
  undefined8 *puStack_248;
  undefined8 ***pppuStack_240;
  undefined8 ***pppuStack_238;
  long lStack_230;
  undefined8 ***pppuStack_228;
  long **pplStack_220;
  undefined8 **ppuStack_218;
  char ***pppcStack_210;
  undefined8 uStack_208;
  long lStack_200;
  undefined8 *puStack_1f8;
  long *plStack_1f0;
  long lStack_1e8;
  int iStack_1e0;
  undefined4 uStack_1dc;
  long lStack_1d8;
  char cStack_1c9;
  undefined8 ***pppuStack_1c8;
  ulong uStack_1c0;
  byte bStack_1b1;
  undefined8 uStack_1b0;
  undefined8 ***pppuStack_1a8;
  byte bStack_199;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  long *plStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 ***pppuStack_f0;
  undefined8 ***pppuStack_e8;
  undefined8 uStack_e0;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  ppppcVar6 = param_3;
  plStack_1f0 = param_4;
  func_0x003a2e80(param_3,"grpc.enable_http_proxy",1);
  if ((int)ppppcVar6 == 0) {
LAB_0035a1a4:
    uVar13 = 0;
LAB_0035a1a8:
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
      return uVar13;
    }
    ___stack_chk_fail();
  }
  else {
    puStack_1f8 = (undefined8 *)0x0;
    FUN_0035a998(&lStack_1e8);
    plStack_120 = (long *)0x0;
    ppppcVar6 = param_3;
    func_0x003a2dcc(param_3,"grpc.http_proxy");
    FUN_00339490();
    pppcStack_210 = (char ***)ppppcVar6;
    if (ppppcVar6 == (char ****)0x0) {
      pcVar7 = "grpc_proxy";
      FUN_00338dd0();
      pppcStack_210 = (char ***)pcVar7;
      if ((char ****)pcVar7 != (char ****)0x0) goto LAB_00359f34;
      pcVar7 = "https_proxy";
      FUN_00338dd0();
      pppcStack_210 = (char ***)pcVar7;
      if ((char ****)pcVar7 != (char ****)0x0) goto LAB_00359f34;
      pcVar7 = "http_proxy";
      FUN_00338dd0();
      pppcStack_210 = (char ***)pcVar7;
      if ((char ****)pcVar7 != (char ****)0x0) goto LAB_00359f34;
      lVar15 = 0;
    }
    else {
LAB_00359f34:
      pppcVar4 = pppcStack_210;
      if (*(char *)pppcStack_210 == '\0') {
LAB_0035a0b4:
        lVar15 = 0;
      }
      else {
        ppppcVar6 = (char ****)pppcStack_210;
        _strlen(pppcStack_210);
        FUN_004011d4(&pppuStack_f0,pppcVar4,ppppcVar6);
        FUN_0035aa60(&lStack_1e8,&pppuStack_f0);
        FUN_0035afe0(&pppuStack_f0);
        if (lStack_1e8 != 0) {
          FUN_00552ec8(&pppuStack_f0,&lStack_1e8,1);
LAB_00359f80:
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/http_proxy.cc"
                       ,0x57,2,"cannot parse value of \'http_proxy\' env var. Error: %s");
          goto LAB_0035a0b4;
        }
        if (-1 < (char)bStack_1b1) {
          uStack_1c0 = (ulong)bStack_1b1;
        }
        if (uStack_1c0 == 0) {
          FUN_00353254();
          goto LAB_00359f80;
        }
        if (cStack_1c9 < '\0') {
          if (lStack_1d8 == 4) {
            iVar12 = *(int *)CONCAT44(uStack_1dc,iStack_1e0);
            goto LAB_0035a020;
          }
LAB_0035a094:
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/http_proxy.cc"
                       ,0x5c,2,"\'%s\' scheme not supported in proxy URI");
          goto LAB_0035a0b4;
        }
        iVar12 = iStack_1e0;
        if (cStack_1c9 != '\x04') goto LAB_0035a094;
LAB_0035a020:
        if (iVar12 != 0x70747468) goto LAB_0035a094;
        if (-1 < (char)bStack_1b1) {
          pppuStack_1c8 = &pppuStack_1c8;
        }
        FUN_00339a80(pppuStack_1c8,&DAT_0090efab,&plStack_120,&puStack_150);
        if (puStack_150 == (undefined8 *)((long)&MACH_HEADER.magic + 1)) {
          lVar15 = *plStack_120;
        }
        else if (puStack_150 == (undefined8 *)((long)&MACH_HEADER.magic + 2)) {
          puStack_1f8 = (undefined8 *)*plStack_120;
          lVar15 = plStack_120[1];
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/http_proxy.cc"
                       ,0x6b,0,"userinfo found in proxy URI");
        }
        else {
          if (puStack_150 == (undefined8 *)0x0) {
            FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/http_proxy.cc"
                         ,99,2,"assertion failed: %s");
            _abort();
            goto LAB_0035a744;
          }
          puVar14 = (undefined8 *)0x0;
          do {
            FUN_00338cb8(plStack_120[(long)puVar14]);
            puVar14 = (undefined8 *)((long)puVar14 + 1);
          } while (puVar14 < puStack_150);
          lVar15 = 0;
        }
        FUN_00338cb8(plStack_120);
      }
      pppcStack_210 = (char ***)0x0;
      FUN_00338cb8(pppcVar4);
    }
    FUN_0035afe0(&lStack_1e8);
    *plStack_1f0 = lVar15;
    if (*plStack_1f0 == 0) goto LAB_0035a1a4;
    pppcStack_210 = (char ***)0x0;
    uStack_208 = 0;
    lStack_200 = 0;
    uVar13 = param_2;
    _strlen(param_2);
    FUN_004011d4(&lStack_1e8,param_2,uVar13);
    pplStack_220 = &plStack_1f0;
    ppuStack_218 = &puStack_1f8;
    if (lStack_1e8 != 0) {
      FUN_00552ec8(&pppuStack_f0,&lStack_1e8,1);
LAB_0035a124:
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/http_proxy.cc"
                   ,0x97,2,
                   "\'http_proxy\' environment variable set, but cannot parse server URI \'%s\' -- not using proxy. Error: %s"
                  );
LAB_0035a168:
      FUN_00338cb8(*plStack_1f0);
      *plStack_1f0 = 0;
      FUN_00338cb8(puStack_1f8);
      uVar13 = 0;
LAB_0035a188:
      FUN_0035afe0(&lStack_1e8);
      if (lStack_200 < 0) {
        __ZdlPv(pppcStack_210);
      }
      goto LAB_0035a1a8;
    }
    ppppuVar8 = (undefined8 ****)pppuStack_1a8;
    if (-1 < (char)bStack_199) {
      ppppuVar8 = (undefined8 ****)(ulong)bStack_199;
    }
    if (ppppuVar8 == (undefined8 ****)0x0) {
      FUN_00353254(&pppuStack_f0,"OK");
      goto LAB_0035a124;
    }
    if (cStack_1c9 < '\0') {
      if (lStack_1d8 != 4) goto LAB_0035a24c;
      piVar11 = (int *)CONCAT44(uStack_1dc,iStack_1e0);
LAB_0035a238:
      if (*piVar11 != 0x78696e75) goto LAB_0035a24c;
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/http_proxy.cc"
                   ,0x9e,1,"not using proxy for Unix domain socket \'%s\'");
      goto LAB_0035a168;
    }
    if (cStack_1c9 == '\x04') {
      piVar11 = &iStack_1e0;
      goto LAB_0035a238;
    }
LAB_0035a24c:
    pcVar7 = "no_grpc_proxy";
    FUN_00338dd0();
    pppuStack_228 = (undefined8 ***)pcVar7;
    if ((undefined8 ****)pcVar7 == (undefined8 ****)0x0) {
      pcVar7 = "no_proxy";
      FUN_00338dd0("no_proxy");
      pppuStack_f0 = (undefined8 ****)0x0;
      FUN_0033904c(&pppuStack_228,pcVar7);
      FUN_0033904c(&pppuStack_f0,0);
      if ((undefined8 ****)pppuStack_228 != (undefined8 ****)0x0) goto LAB_0035a294;
    }
    else {
LAB_0035a294:
      pppuStack_f0 = (undefined8 ****)0x0;
      pppuStack_e8 = (undefined8 ****)0x0;
      uStack_e0 = 0;
      plStack_120 = (long *)0x0;
      uStack_118 = 0;
      lStack_110 = 0;
      if (lStack_1e8 != 0) {
        FUN_0055169c(&lStack_1e8);
        goto LAB_0035a744;
      }
      ppppuVar8 = (undefined8 ****)pppuStack_1a8;
      pcVar7 = uStack_1b0;
      if (-1 < (char)bStack_199) {
        ppppuVar8 = (undefined8 ****)(ulong)bStack_199;
        pcVar7 = (char *)&uStack_1b0;
      }
      FUN_00665a00(pcVar7,ppppuVar8,"/",1);
      func_0x0033b110();
      pppuVar3 = pppuStack_228;
      if (((ulong)pcVar7 & 1) == 0) {
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/http_proxy.cc"
                     ,0xad,1,
                     "unable to split host and port, not checking no_proxy list for host \'%s\'");
      }
      else {
        ppppuVar8 = (undefined8 ****)pppuStack_228;
        _strlen();
        pppuStack_240 = pppuVar3;
        lStack_230 = CONCAT71(lStack_230._1_7_,0x2c);
        pppuStack_238 = ppppuVar8;
        FUN_0035b07c(&puStack_150,&pppuStack_260,&pppuStack_240);
        puVar14 = puStack_148;
        if (puStack_150 != puStack_148) {
          puVar10 = puStack_150;
          do {
            ppppuVar8 = (undefined8 ****)pppuStack_e8;
            ppppuVar9 = (undefined8 ****)pppuStack_f0;
            if (-1 < (long)uStack_e0) {
              ppppuVar8 = (undefined8 ****)(uStack_e0 >> 0x38);
              ppppuVar9 = &pppuStack_f0;
            }
            func_0x00574860(ppppuVar9,ppppuVar8,*puVar10,puVar10[1]);
            if ((int)ppppuVar9 != 0) {
              FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/http_proxy.cc"
                           ,0xb6,1,"not using proxy for host in no_proxy list \'%s\'");
              FUN_0035a8c8(&pplStack_220);
              if (puStack_150 != (undefined8 *)0x0) {
                puStack_148 = puStack_150;
                __ZdlPv();
              }
              if (lStack_110 < 0) {
                __ZdlPv(plStack_120);
              }
              uVar13 = 0;
              goto LAB_0035a640;
            }
            puVar10 = puVar10 + 2;
          } while (puVar10 != puVar14);
        }
        if (puStack_150 != (undefined8 *)0x0) {
          puStack_148 = puStack_150;
          __ZdlPv(puStack_150);
        }
      }
      if (lStack_110 < 0) {
        __ZdlPv(plStack_120);
      }
    }
    if (lStack_1e8 != 0) {
      FUN_0055169c(&lStack_1e8);
      goto LAB_0035a744;
    }
    pcVar7 = uStack_1b0;
    if (-1 < (char)bStack_199) {
      pppuStack_1a8 = (undefined8 ****)(ulong)bStack_199;
      pcVar7 = (char *)&uStack_1b0;
    }
    if ((undefined8 ****)pppuStack_1a8 == (undefined8 ****)0x0) {
      ppppuVar8 = (undefined8 ****)0x0;
    }
    else {
      pcVar2 = (char *)((long)&uStack_1b0 + 1);
      if ((char)bStack_199 < '\0') {
        pcVar2 = uStack_1b0 + 1;
      }
      ppppuVar8 = (undefined8 ****)pppuStack_1a8;
      if (*pcVar7 == '/') {
        pcVar7 = pcVar2;
        ppppuVar8 = (undefined8 ****)((long)pppuStack_1a8 + -1);
      }
    }
    plStack_120 = (long *)0x0;
    uStack_118 = 0;
    puStack_150 = (undefined8 *)0x0;
    puStack_148 = (undefined8 *)0x0;
    FUN_0033af30(pcVar7,ppppuVar8,&plStack_120,&puStack_150);
    if (puStack_148 == (undefined8 *)0x0) {
      FUN_0033ae40(&pppuStack_f0,plStack_120,uStack_118,0x1bb);
LAB_0035a494:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                (&pppcStack_210,&pppuStack_f0);
      pppuStack_f0 = (undefined8 ****)0x0;
      ppppcVar6 = (char ****)pppcStack_210;
      if (-1 < lStack_200) {
        ppppcVar6 = &pppcStack_210;
      }
      FUN_003a2ec4(&plStack_120,"grpc.http_connect_server",ppppcVar6);
      FUN_00354a68(&pppuStack_f0,&plStack_120);
      puVar14 = puStack_1f8;
      pppuStack_240 = (undefined8 ****)0x0;
      pppuStack_238 = (undefined8 ****)0x0;
      lStack_230 = 0;
      if (puStack_1f8 != (undefined8 *)0x0) {
        puVar10 = puStack_1f8;
        _strlen(puStack_1f8);
        FUN_003eb788(puVar14,puVar10,0,0);
        plStack_120 = (long *)0x8c0bd0;
        uStack_118 = 0x1a;
        puStack_248 = puVar14;
        if (puVar14 == (undefined8 *)0x0) {
          puVar10 = (undefined8 *)0x0;
        }
        else {
          puVar10 = puVar14;
          _strlen();
        }
        puStack_150 = puVar14;
        puStack_148 = puVar10;
        FUN_00575d30(&pppuStack_260,&plStack_120,&puStack_150);
        if (lStack_230 < 0) {
          __ZdlPv(pppuStack_240);
        }
        pppuStack_238 = pppuStack_258;
        pppuStack_240 = pppuStack_260;
        lStack_230 = lStack_250;
        if (-1 < lStack_250) {
          pppuStack_260 = &pppuStack_240;
        }
        FUN_003a2ec4(&plStack_120,"grpc.http_connect_headers",pppuStack_260);
        FUN_00354a68(&pppuStack_f0,&plStack_120);
        puStack_248 = (undefined8 *)0x0;
        if (puVar14 != (undefined8 *)0x0) {
          FUN_00338cb8(puVar14);
        }
      }
      ppppuVar8 = &pppuStack_e8;
      if (((ulong)pppuStack_f0 & 1) != 0) {
        ppppuVar8 = (undefined8 ****)pppuStack_e8;
      }
      FUN_003a1ecc(param_3,ppppuVar8,(ulong)pppuStack_f0 >> 1);
      *param_5 = param_3;
      FUN_00338cb8(puStack_1f8);
      if (lStack_230 < 0) {
        __ZdlPv(pppuStack_240);
      }
      if (((ulong)pppuStack_f0 & 1) != 0) {
        __ZdlPv(pppuStack_e8);
      }
      uVar13 = 1;
LAB_0035a640:
      pppuVar3 = pppuStack_228;
      pppuStack_228 = (undefined8 ****)0x0;
      if ((undefined8 ****)pppuVar3 != (undefined8 ****)0x0) {
        FUN_00338cb8();
      }
      goto LAB_0035a188;
    }
    if (ppppuVar8 < (undefined8 ****)0x7ffffffffffffff8) {
      if ((undefined8 ****)((long)&MACH_HEADER.sizeofcmds + 2) < ppppuVar8) {
        uVar1 = ((ulong)ppppuVar8 & 0xfffffffffffffff8) + 8;
        if (((ulong)ppppuVar8 | 7) != 0x17) {
          uVar1 = (ulong)ppppuVar8 | 7;
        }
        ppppuVar9 = (undefined8 ****)(uVar1 + 1);
        __Znwm();
        uStack_e0 = uVar1 + 1 | 0x8000000000000000;
        pppuStack_f0 = ppppuVar9;
        pppuStack_e8 = ppppuVar8;
LAB_0035a480:
        _memmove(ppppuVar9,pcVar7,ppppuVar8);
      }
      else {
        uStack_e0 = CONCAT17((char)ppppuVar8,(undefined7)uStack_e0);
        ppppuVar9 = &pppuStack_f0;
        if (ppppuVar8 != (undefined8 ****)0x0) goto LAB_0035a480;
      }
      *(undefined1 *)((long)ppppuVar9 + (long)ppppuVar8) = 0;
      goto LAB_0035a494;
    }
  }
  func_0x0033b318(&pppuStack_f0);
LAB_0035a744:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x35a748);
  (*pcVar5)();
}



/* Entry: 0035a8c8; end: 0035a907;  */

void FUN_0035a8c8(undefined8 *param_1)

{
  FUN_00338cb8(**(undefined8 **)*param_1);
  **(undefined8 **)*param_1 = 0;
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(*(undefined8 *)param_1[1]);
  return;
}



/* Entry: 0035a908; end: 0035a987;  */

void FUN_0035a908(void)

{
  dword *pdVar1;
  dword *pdStack_28;
  
  pdVar1 = &MACH_HEADER.cpusubtype;
  __Znwm();
  *(undefined ***)pdVar1 = &PTR_FUN_009dcbc0;
  pdStack_28 = pdVar1;
  FUN_00360a18(1,&pdStack_28);
  pdVar1 = pdStack_28;
  pdStack_28 = (dword *)0x0;
  if (pdVar1 != (dword *)0x0) {
    (**(code **)(*(long *)pdVar1 + 8))();
  }
  return;
}



/* Entry: 0035a988; end: 0035a997;  */

void FUN_0035a988(void)

{
  return;
}



/* Entry: 0035a998; end: 0035aa07;  */

undefined8 FUN_0035a998(undefined8 param_1)

{
  ulong uStack_28;
  
  FUN_00552acc(&uStack_28,2,"",0);
  FUN_0035aa08(param_1,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    FUN_0055293c();
  }
  return param_1;
}



/* Entry: 0035aa08; end: 0035aa5f;  */

long * FUN_0035aa08(long *param_1,long *param_2)

{
  *param_1 = *param_2;
  *param_2 = 0x36;
  if (*param_1 == 0) {
    FUN_0055142c(param_1);
  }
  return param_1;
}



/* Entry: 0035aa60; end: 0035aaa7;  */

long * FUN_0035aa60(long *param_1,long *param_2)

{
  if (param_1 != param_2) {
    if (*param_2 == 0) {
      FUN_0035aaa8(param_1,param_2 + 1);
    }
    else {
      FUN_0035ab18(param_1);
    }
  }
  return param_1;
}



/* Entry: 0035aaa8; end: 0035ab17;  */

ulong * FUN_0035aaa8(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  puVar1 = param_1 + 1;
  if (*param_1 != 0) {
    FUN_0035ae18();
    puVar1 = (ulong *)*param_1;
    if (puVar1 != (ulong *)0x0) {
      *param_1 = 0;
      if (((ulong)puVar1 & 1) != 0) {
        FUN_0055293c();
      }
    }
    return puVar1;
  }
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(*puVar1);
  }
  uVar3 = param_2[1];
  uVar2 = *param_2;
  param_1[3] = param_2[2];
  param_1[2] = uVar3;
  *puVar1 = uVar2;
  *(undefined1 *)((long)param_2 + 0x17) = 0;
  *(undefined1 *)param_2 = 0;
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  uVar3 = param_2[4];
  uVar2 = param_2[3];
  param_1[6] = param_2[5];
  param_1[5] = uVar3;
  param_1[4] = uVar2;
  *(undefined1 *)((long)param_2 + 0x2f) = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    __ZdlPv(param_1[7]);
  }
  uVar3 = param_2[7];
  uVar2 = param_2[6];
  param_1[9] = param_2[8];
  param_1[8] = uVar3;
  param_1[7] = uVar2;
  *(undefined1 *)((long)param_2 + 0x47) = 0;
  *(undefined1 *)(param_2 + 6) = 0;
  func_0x0035acc0(param_1 + 10,param_2 + 9);
  FUN_0035ad68(param_1 + 0xd);
  uVar2 = param_2[0xc];
  param_1[0xe] = param_2[0xd];
  param_1[0xd] = uVar2;
  param_1[0xf] = param_2[0xe];
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  if (*(char *)((long)param_1 + 0x97) < '\0') {
    __ZdlPv(param_1[0x10]);
  }
  uVar3 = param_2[0x10];
  uVar2 = param_2[0xf];
  param_1[0x12] = param_2[0x11];
  param_1[0x11] = uVar3;
  param_1[0x10] = uVar2;
  *(undefined1 *)((long)param_2 + 0x8f) = 0;
  *(undefined1 *)(param_2 + 0xf) = 0;
  return puVar1;
}



/* Entry: 0035ab18; end: 0035abb3;  */

void FUN_0035ab18(ulong *param_1,ulong *param_2)

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
  
  FUN_0035aed4();
  uVar4 = *param_2;
  *param_2 = 0x36;
  uVar5 = *param_1;
  if (uVar4 == uVar5) {
    if ((uVar4 & 1) != 0) {
      FUN_0055293c();
    }
LAB_0035ab70:
    uVar4 = *param_1;
  }
  else {
    *param_1 = uVar4;
    pcStack_28 = "";
    if ((uVar5 & 1) != 0) {
      FUN_0055293c(uVar5);
      goto LAB_0035ab70;
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



/* Entry: 0035abb4; end: 0035ad27;  */

undefined8 * FUN_0035abb4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  *(undefined1 *)((long)param_2 + 0x17) = 0;
  *(undefined1 *)param_2 = 0;
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  uVar2 = param_2[4];
  uVar1 = param_2[3];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  *(undefined1 *)((long)param_2 + 0x2f) = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  param_1[8] = param_2[8];
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  *(undefined1 *)((long)param_2 + 0x47) = 0;
  *(undefined1 *)(param_2 + 6) = 0;
  func_0x0035acc0(param_1 + 9,param_2 + 9);
  FUN_0035ad68(param_1 + 0xc);
  uVar1 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar1;
  param_1[0xe] = param_2[0xe];
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  uVar2 = param_2[0x10];
  uVar1 = param_2[0xf];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar2;
  param_1[0xf] = uVar1;
  *(undefined1 *)((long)param_2 + 0x8f) = 0;
  *(undefined1 *)(param_2 + 0xf) = 0;
  return param_1;
}



/* Entry: 0035ad28; end: 0035ad67;  */

void FUN_0035ad28(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_0035ad28(param_1,*param_2);
    FUN_0035ad28(param_1,param_2[1]);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(param_2);
    return;
  }
  return;
}



/* Entry: 0035ad68; end: 0035add3;  */

void FUN_0035ad68(long *param_1)

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
        lVar2 = lVar2 + -0x30;
        FUN_0035add4(param_1 + 2,lVar2);
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



/* Entry: 0035add4; end: 0035ae17;  */

void FUN_0035add4(undefined8 param_1,undefined8 *param_2)

{
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



/* Entry: 0035ae18; end: 0035aed3;  */

void FUN_0035ae18(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = param_2[1];
  uVar5 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar6 = param_2[4];
  uVar5 = param_2[3];
  param_1[5] = param_2[5];
  param_1[4] = uVar6;
  param_1[3] = uVar5;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[3] = 0;
  uVar6 = param_2[7];
  uVar5 = param_2[6];
  param_1[8] = param_2[8];
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[6] = 0;
  param_1[9] = param_2[9];
  plVar1 = param_2 + 10;
  lVar3 = *plVar1;
  plVar2 = param_1 + 10;
  *plVar2 = lVar3;
  lVar4 = param_2[0xb];
  param_1[0xb] = lVar4;
  if (lVar4 == 0) {
    param_1[9] = plVar2;
  }
  else {
    *(long **)(lVar3 + 0x10) = plVar2;
    param_2[9] = plVar1;
    *plVar1 = 0;
    param_2[0xb] = 0;
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  uVar5 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar5;
  param_1[0xe] = param_2[0xe];
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  uVar6 = param_2[0x10];
  uVar5 = param_2[0xf];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar6;
  param_1[0xf] = uVar5;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0xf] = 0;
  return;
}



/* Entry: 0035aed4; end: 0035af5b;  */

void FUN_0035aed4(long *param_1)

{
  long *plStack_28;
  
  if (*param_1 == 0) {
    if (*(char *)((long)param_1 + 0x97) < '\0') {
      __ZdlPv(param_1[0x10]);
    }
    plStack_28 = param_1 + 0xd;
    FUN_0035af5c(&plStack_28);
    FUN_0035ad28(param_1 + 10,param_1[0xb]);
    if (*(char *)((long)param_1 + 0x4f) < '\0') {
      __ZdlPv(param_1[7]);
    }
    if (*(char *)((long)param_1 + 0x37) < '\0') {
      __ZdlPv(param_1[4]);
    }
    if (*(char *)((long)param_1 + 0x1f) < '\0') {
      __ZdlPv(param_1[1]);
    }
  }
  return;
}



/* Entry: 0035af5c; end: 0035afdf;  */

void FUN_0035af5c(long *param_1)

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
        FUN_0035add4(plVar3 + 2,lVar2);
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



/* Entry: 0035afe0; end: 0035b07b;  */

ulong * FUN_0035afe0(ulong *param_1)

{
  ulong *puStack_28;
  
  if (*param_1 == 0) {
    if (*(char *)((long)param_1 + 0x97) < '\0') {
      __ZdlPv(param_1[0x10]);
    }
    puStack_28 = param_1 + 0xd;
    FUN_0035af5c(&puStack_28);
    FUN_0035ad28(param_1 + 10,param_1[0xb]);
    if (*(char *)((long)param_1 + 0x4f) < '\0') {
      __ZdlPv(param_1[7]);
    }
    if (*(char *)((long)param_1 + 0x37) < '\0') {
      __ZdlPv(param_1[4]);
    }
    if (*(char *)((long)param_1 + 0x1f) < '\0') {
      __ZdlPv(param_1[1]);
    }
  }
  else if ((*param_1 & 1) != 0) {
    FUN_0055293c();
  }
  return param_1;
}



/* Entry: 0035b07c; end: 0035b13f;  */

void FUN_0035b07c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 auStack_160 [8];
  int iStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 auStack_130 [32];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_0035b1f8(auStack_160,0,param_3);
  do {
    if (iStack_158 == 2) {
      return;
    }
    puVar1 = auStack_130;
    lVar2 = 0;
    do {
      *puVar1 = uStack_150;
      puVar1[1] = uStack_148;
      FUN_0035b140(auStack_160);
      puVar1 = puVar1 + 2;
      if (lVar2 == 0xf) break;
      lVar2 = lVar2 + 1;
    } while (iStack_158 != 2);
    FUN_0035b258(param_1,param_1[1],auStack_130,puVar1);
  } while( true );
}



/* Entry: 0035b140; end: 0035b1f7;  */

long * FUN_0035b140(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  char *pcVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  
  while( true ) {
    if ((int)param_1[1] == 1) {
      *(undefined4 *)(param_1 + 1) = 2;
      return param_1;
    }
    lVar2 = *(long *)param_1[4];
    plVar3 = (long *)((long *)param_1[4])[1];
    plVar4 = param_1 + 5;
    lVar6 = lVar2;
    plVar7 = plVar3;
    FUN_00576578();
    if ((long *)(lVar2 + (long)plVar3) == plVar4) {
      *(undefined4 *)(param_1 + 1) = 1;
    }
    plVar8 = (long *)*param_1;
    if (plVar3 < plVar8) break;
    uVar9 = (long)plVar4 - (lVar2 + (long)plVar8);
    uVar1 = (long)plVar3 - (long)plVar8;
    if (uVar9 <= (ulong)((long)plVar3 - (long)plVar8)) {
      uVar1 = uVar9;
    }
    param_1[2] = lVar2 + (long)plVar8;
    param_1[3] = uVar1;
    *param_1 = (long)plVar8 + uVar1 + lVar6;
    if (uVar1 != 0) {
      return param_1;
    }
  }
  pcVar5 = "string_view::substr";
  FUN_0033b2a4();
  *(long *)pcVar5 = 0;
  *(int *)((long)pcVar5 + 8) = (int)lVar6;
  *(long *)((long)pcVar5 + 0x10) = 0;
  *(long *)((long)pcVar5 + 0x18) = 0;
  *(long **)((long)pcVar5 + 0x20) = plVar7;
  *(char *)((long)pcVar5 + 0x28) = (char)plVar7[2];
  lVar2 = plVar7[1];
  if (*plVar7 == 0) {
    *(undefined4 *)((long)pcVar5 + 8) = 2;
  }
  else if ((int)lVar6 != 2) {
    FUN_0035b140(pcVar5);
    return (long *)pcVar5;
  }
  *(long *)pcVar5 = lVar2;
  return (long *)pcVar5;
}



/* Entry: 0035b1f8; end: 0035b257;  */

long * FUN_0035b1f8(long *param_1,int param_2,long *param_3)

{
  long lVar1;
  
  *param_1 = 0;
  *(int *)(param_1 + 1) = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = (long)param_3;
  *(char *)(param_1 + 5) = (char)param_3[2];
  lVar1 = param_3[1];
  if (*param_3 == 0) {
    *(undefined4 *)(param_1 + 1) = 2;
  }
  else if (param_2 != 2) {
    FUN_0035b140(param_1);
    return param_1;
  }
  *param_1 = lVar1;
  return param_1;
}



/* Entry: 0035b258; end: 0035b46b;  */

long * FUN_0035b258(long *param_1,long *param_2,long *param_3,long *param_4,long param_5)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  if (0 < param_5) {
    plVar3 = param_1 + 2;
    plVar2 = (long *)param_1[1];
    if (*plVar3 - (long)plVar2 >> 4 < param_5) {
      lVar6 = *param_1;
      uVar1 = param_5 + ((long)plVar2 - lVar6 >> 4);
      if (uVar1 >> 0x3c != 0) {
        FUN_0035b540();
        if (plStack_58 != plStack_60) {
          plStack_58 = (long *)((long)plStack_58 +
                               (((long)plStack_60 - (long)plStack_58) + 0xfU & 0xfffffffffffffff0));
        }
        if (plStack_68 != (long *)0x0) {
          __ZdlPv();
        }
        __Unwind_Resume();
        plVar9 = (long *)param_2[1];
        plVar5 = (long *)*param_1;
        plVar3 = plVar9;
        for (plVar2 = param_3; plVar5 != plVar2; plVar2 = plVar2 + -2) {
          lVar6 = plVar2[-2];
          plVar3[-1] = plVar2[-1];
          plVar3[-2] = lVar6;
          plVar3 = plVar3 + -2;
        }
        param_2[1] = (long)plVar3;
        lVar10 = param_2[2];
        lVar6 = param_1[1] - (long)param_3;
        if (lVar6 != 0) {
          _memmove(lVar10,param_3,lVar6);
          plVar3 = (long *)param_2[1];
        }
        param_2[2] = lVar10 + lVar6;
        lVar6 = *param_1;
        *param_1 = (long)plVar3;
        param_2[1] = lVar6;
        lVar6 = param_1[1];
        param_1[1] = param_2[2];
        param_2[2] = lVar6;
        lVar6 = param_1[2];
        param_1[2] = param_2[3];
        param_2[3] = lVar6;
        *param_2 = param_2[1];
        return plVar9;
      }
      uVar4 = *plVar3 - lVar6;
      uVar7 = (long)uVar4 >> 3;
      if (uVar7 <= uVar1) {
        uVar7 = uVar1;
      }
      if (0x7fffffffffffffef < uVar4) {
        uVar7 = 0xfffffffffffffff;
      }
      plStack_48 = plVar3;
      if (uVar7 == 0) {
        plStack_68 = (long *)0x0;
      }
      else {
        FUN_0035b554();
        plStack_68 = plVar3;
      }
      plStack_60 = plStack_68 + ((long)param_2 - lVar6 >> 4) * 2;
      plStack_50 = plStack_68 + uVar7 * 2;
      plStack_58 = plStack_60 + param_5 * 2;
      plVar3 = plStack_60;
      do {
        lVar6 = param_3[1];
        plVar2 = plVar3 + 2;
        *plVar3 = *param_3;
        plVar3[1] = lVar6;
        plVar3 = plVar2;
        param_3 = param_3 + 2;
      } while (plVar2 != plStack_58);
      FUN_0035b46c(param_1,&plStack_68,param_2);
      if (plStack_58 != plStack_60) {
        plStack_58 = (long *)((long)plStack_58 +
                             ((long)plStack_60 + (0xf - (long)plStack_58) & 0xfffffffffffffff0U));
      }
      param_2 = param_1;
      if (plStack_68 != (long *)0x0) {
        __ZdlPv();
      }
    }
    else {
      lVar6 = (long)plVar2 - (long)param_2 >> 4;
      plVar3 = plVar2;
      if (lVar6 < param_5) {
        plVar5 = param_3 + lVar6 * 2;
        plVar9 = plVar2;
        for (plVar8 = plVar5; plVar8 != param_4; plVar8 = plVar8 + 2) {
          lVar6 = plVar8[1];
          *plVar9 = *plVar8;
          plVar9[1] = lVar6;
          plVar3 = plVar3 + 2;
          plVar9 = plVar9 + 2;
        }
        param_1[1] = (long)plVar3;
        if ((long)plVar2 - (long)param_2 < 1) {
          return param_2;
        }
      }
      else {
        plVar5 = param_3 + param_5 * 2;
      }
      plVar8 = plVar3;
      for (plVar9 = plVar3 + param_5 * -2; plVar9 < plVar2; plVar9 = plVar9 + 2) {
        lVar6 = *plVar9;
        plVar8[1] = plVar9[1];
        *plVar8 = lVar6;
        plVar8 = plVar8 + 2;
      }
      param_1[1] = (long)plVar8;
      plVar2 = param_2;
      if (plVar3 != param_2 + param_5 * 2) {
        _memmove(plVar3 + ((long)plVar3 - (long)(param_2 + param_5 * 2) >> 4) * -2,param_2);
      }
      for (; plVar5 != param_3; param_3 = param_3 + 2) {
        lVar6 = param_3[1];
        *plVar2 = *param_3;
        plVar2[1] = lVar6;
        plVar2 = plVar2 + 2;
      }
    }
  }
  return param_2;
}



/* Entry: 0035b46c; end: 0035b53f;  */

long FUN_0035b46c(long *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = param_2[1];
  lVar2 = *param_1;
  lVar1 = lVar4;
  for (lVar3 = param_3; lVar2 != lVar3; lVar3 = lVar3 + -0x10) {
    uVar5 = *(undefined8 *)(lVar3 + -0x10);
    *(undefined8 *)(lVar1 + -8) = *(undefined8 *)(lVar3 + -8);
    *(undefined8 *)(lVar1 + -0x10) = uVar5;
    lVar1 = lVar1 + -0x10;
  }
  param_2[1] = lVar1;
  lVar2 = param_2[2];
  lVar3 = param_1[1] - param_3;
  if (lVar3 != 0) {
    _memmove(lVar2,param_3,lVar3);
    lVar1 = param_2[1];
  }
  param_2[2] = lVar2 + lVar3;
  lVar3 = *param_1;
  *param_1 = lVar1;
  param_2[1] = lVar3;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return lVar4;
}



/* Entry: 0035b540; end: 0035b553;  */

undefined1  [16] FUN_0035b540(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  char *pcVar1;
  long lVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  pcVar1 = "vector";
  FUN_0033b32c();
  if ((ulong)param_2 >> 0x3c == 0) {
    lVar2 = (long)param_2 << 4;
    __Znwm(lVar2);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar2;
    return auVar6;
  }
  FUN_00349558();
  *(undefined ***)pcVar1 = &PTR_FUN_009dcc18;
  *(undefined8 *)(pcVar1 + 8) = param_3;
  uVar5 = *param_2;
  *(undefined8 *)(pcVar1 + 0x18) = param_2[1];
  *(undefined8 *)(pcVar1 + 0x10) = uVar5;
  *param_2 = 0;
  param_2[1] = 0;
  pcVar3 = pcVar1;
  puVar4 = param_2;
  func_0x003c3ee0();
  *(char **)(pcVar1 + 0x20) = pcVar3;
  uVar5 = param_2[2];
  param_2[2] = 0;
  *(undefined8 *)(pcVar1 + 0x28) = uVar5;
  auVar7._8_8_ = puVar4;
  auVar7._0_8_ = pcVar1;
  return auVar7;
}



/* Entry: 0035b554; end: 0035b587;  */

undefined1  [16] FUN_0035b554(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if ((ulong)param_2 >> 0x3c == 0) {
    lVar1 = (long)param_2 << 4;
    __Znwm(lVar1);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar1;
    return auVar5;
  }
  FUN_00349558();
  *param_1 = &PTR_FUN_009dcc18;
  param_1[1] = param_3;
  uVar4 = *param_2;
  param_1[3] = param_2[1];
  param_1[2] = uVar4;
  *param_2 = 0;
  param_2[1] = 0;
  puVar2 = param_1;
  puVar3 = param_2;
  func_0x003c3ee0();
  param_1[4] = puVar2;
  uVar4 = param_2[2];
  param_2[2] = 0;
  param_1[5] = uVar4;
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 0035b588; end: 0035b5f7;  */

undefined8 * FUN_0035b588(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_009dcc18;
  param_1[1] = param_3;
  uVar2 = *param_2;
  param_1[3] = param_2[1];
  param_1[2] = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  puVar1 = param_1;
  func_0x003c3ee0();
  param_1[4] = puVar1;
  uVar2 = param_2[2];
  param_2[2] = 0;
  param_1[5] = uVar2;
  return param_1;
}



/* Entry: 0035b5f8; end: 0035b64f;  */

undefined8 * FUN_0035b5f8(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_009dcc18;
  func_0x003c3ef0(param_1[4]);
  plVar1 = (long *)param_1[5];
  param_1[5] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FUN_0033d36c(param_1 + 2);
  return param_1;
}



/* Entry: 0035b650; end: 0035b657;  */

void FUN_0035b650(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x35b654);
  (*pcVar1)();
}



/* Entry: 0035b658; end: 0035b6af;  */

void FUN_0035b658(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = param_1 + 1;
  (**(code **)(*param_1 + 0x38))();
  do {
    lVar3 = *plVar4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar3 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar3 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0035b6ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}



/* Entry: 0035b6b0; end: 0035b727;  */

void FUN_0035b6b0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  if (*param_2 == 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    lVar1 = param_2[1];
    param_1[2] = param_2[2];
    param_1[1] = lVar1;
    param_1[3] = param_2[3];
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    *param_1 = 0;
  }
  else {
    *param_1 = *param_2;
    *param_2 = 0x36;
  }
  param_1[4] = 0;
  param_1[4] = param_2[4];
  param_2[4] = 0;
  lVar2 = param_2[6];
  lVar1 = param_2[5];
  param_1[7] = param_2[7];
  param_1[6] = lVar2;
  param_1[5] = lVar1;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[5] = 0;
  param_1[8] = param_2[8];
  param_2[8] = 0;
  return;
}



/* Entry: 0035b728; end: 0035b7db;  */

long FUN_0035b728(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  func_0x0034a2ec();
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  plVar4 = *(long **)(param_1 + 0x20);
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
  *(undefined8 *)(param_1 + 0x20) = uVar6;
  *(undefined8 *)(param_2 + 0x20) = 0;
  if (*(char *)(param_1 + 0x3f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x28));
  }
  uVar7 = *(undefined8 *)(param_2 + 0x30);
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar7;
  *(undefined8 *)(param_1 + 0x28) = uVar6;
  *(undefined1 *)(param_2 + 0x3f) = 0;
  *(undefined1 *)(param_2 + 0x28) = 0;
  FUN_003a2a64(*(undefined8 *)(param_1 + 0x40));
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  return param_1;
}



/* Entry: 0035b7dc; end: 0035b893;  */

void FUN_0035b7dc(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  qword qVar5;
  ulong uStack_30;
  undefined1 uStack_21;
  
  if ((*(char *)(param_2 + 0x10) == '\0') && (qVar5 = *(qword *)(param_2 + 8), qVar5 != 0)) {
    *(undefined1 *)(param_2 + 0x10) = 1;
    plVar1 = (long *)(qVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    pcVar4 = segment_command_00000020.segname + 8;
    FUN_00338c74();
    *(code **)pcVar4 = FUN_0035bf3c;
    *(qword *)(pcVar4 + 8) = qVar5;
    *(code **)(pcVar4 + 0x18) = FUN_0033df34;
    *(char **)(pcVar4 + 0x20) = pcVar4;
    *(undefined8 *)(pcVar4 + 0x28) = 0;
    uStack_30 = 0;
    FUN_003c1e6c(&uStack_21,pcVar4 + 0x10,&uStack_30);
    if ((uStack_30 & 1) != 0) {
      FUN_0055293c();
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 1;
  return;
}



/* Entry: 0035b894; end: 0035b94f;  */

undefined8 * FUN_0035b894(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_009dcc68;
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
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  param_1[1] = 0;
  return param_1;
}



/* Entry: 0035b950; end: 0035b953;  */

void FUN_0035b950(void)

{
  return;
}



/* Entry: 0035b954; end: 0035b9d3;  */

ulong * FUN_0035b954(ulong *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  int *piVar4;
  
  uVar3 = *param_2;
  if (uVar3 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[1] = 0;
    FUN_0035b9d4(param_1 + 1,param_2[1],param_2[2],
                 ((long)(param_2[2] - param_2[1]) >> 3) * -0x30c30c30c30c30c3);
    *param_1 = 0;
  }
  else {
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
    }
  }
  return param_1;
}



/* Entry: 0035b9d4; end: 0035ba57;  */

void FUN_0035b9d4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_0035ba58(param_1,param_4);
    lVar1 = param_1 + 0x10;
    FUN_0035bb08(lVar1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 0035ba58; end: 0035baab;  */

undefined1  [16] FUN_0035ba58(long *param_1,ulong param_2,ulong param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_2 < 0x186186186186187) {
    plVar1 = param_1 + 2;
    FUN_0035bac0();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 0x15);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = plVar1;
    return auVar4;
  }
  FUN_0035baac(param_1);
  FUN_0033b32c("vector");
  if (param_2 < 0x186186186186187) {
    lVar2 = param_2 * 0xa8;
    __Znwm(lVar2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  FUN_00349558();
  uVar3 = param_2;
  if (param_2 != param_3) {
    lVar2 = 0;
    do {
      uVar3 = param_2 + lVar2;
      FUN_003d5000(param_4 + lVar2,uVar3);
      lVar2 = lVar2 + 0xa8;
    } while (param_2 + lVar2 != param_3);
    param_4 = param_4 + lVar2;
  }
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = param_4;
  return auVar6;
}



/* Entry: 0035baac; end: 0035babf;  */

undefined1  [16] FUN_0035baac(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  FUN_0033b32c("vector");
  if (param_2 < 0x186186186186187) {
    lVar1 = param_2 * 0xa8;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  FUN_00349558();
  uVar2 = param_2;
  if (param_2 != param_3) {
    lVar1 = 0;
    do {
      uVar2 = param_2 + lVar1;
      FUN_003d5000(param_4 + lVar1,uVar2);
      lVar1 = lVar1 + 0xa8;
    } while (param_2 + lVar1 != param_3);
    param_4 = param_4 + lVar1;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_4;
  return auVar4;
}



/* Entry: 0035bac0; end: 0035bb07;  */

undefined1  [16] FUN_0035bac0(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 < 0x186186186186187) {
    lVar1 = param_2 * 0xa8;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  FUN_00349558();
  uVar2 = param_2;
  if (param_2 != param_3) {
    lVar1 = 0;
    do {
      uVar2 = param_2 + lVar1;
      FUN_003d5000(param_4 + lVar1,uVar2);
      lVar1 = lVar1 + 0xa8;
    } while (param_2 + lVar1 != param_3);
    param_4 = param_4 + lVar1;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_4;
  return auVar4;
}



/* Entry: 0035bb08; end: 0035bb87;  */

long FUN_0035bb08(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_2 != param_3) {
    lVar1 = 0;
    do {
      FUN_003d5000(param_4 + lVar1,param_2 + lVar1);
      lVar1 = lVar1 + 0xa8;
    } while (param_2 + lVar1 != param_3);
    param_4 = param_4 + lVar1;
  }
  return param_4;
}



/* Entry: 0035bb88; end: 0035bbcf;  */

long * FUN_0035bb88(long *param_1,long *param_2)

{
  if (param_1 != param_2) {
    if (*param_2 == 0) {
      FUN_0035bbd0(param_1,param_2 + 1);
    }
    else {
      FUN_0035bc9c(param_1);
    }
  }
  return param_1;
}



/* Entry: 0035bbd0; end: 0035bc9b;  */

undefined1  [16] FUN_0035bbd0(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  plVar1 = param_1 + 1;
  if (*param_1 != 0) {
    *plVar1 = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    plVar4 = (long *)*param_2;
    FUN_0035b9d4(plVar1,plVar4,param_2[1],(param_2[1] - (long)plVar4 >> 3) * -0x30c30c30c30c30c3);
    plVar1 = (long *)*param_1;
    param_2 = plVar4;
    if ((plVar1 != (long *)0x0) && (*param_1 = 0, ((ulong)plVar1 & 1) != 0)) {
      FUN_0055293c();
      param_2 = plVar4;
    }
LAB_0035bc78:
    auVar10._8_8_ = param_2;
    auVar10._0_8_ = plVar1;
    return auVar10;
  }
  if (plVar1 == param_2) goto LAB_0035bc78;
  plVar4 = (long *)*param_2;
  plVar5 = (long *)param_2[1];
  lVar8 = (long)plVar5 - (long)plVar4 >> 3;
  uVar7 = lVar8 * -0x30c30c30c30c30c3;
  plVar2 = param_1 + 3;
  lVar6 = *plVar1;
  if ((ulong)((*plVar2 - lVar6 >> 3) * -0x30c30c30c30c30c3) < uVar7) {
    plVar3 = plVar4;
    FUN_0034a480(plVar1);
    if (0x186186186186186 < uVar7) {
      FUN_0035baac();
      param_1[2] = (long)plVar4;
      __Unwind_Resume();
      param_1[2] = uVar7;
      __Unwind_Resume();
      plVar4 = plVar1;
      for (; plVar1 != plVar3; plVar1 = plVar1 + 0x15) {
        FUN_003d5004(lVar6,plVar1);
        lVar6 = lVar6 + 0xa8;
        plVar4 = plVar3;
      }
      auVar12._8_8_ = lVar6;
      auVar12._0_8_ = plVar4;
      return auVar12;
    }
    lVar6 = param_1[3] - *plVar1 >> 3;
    uVar9 = lVar6 * -0x6186186186186186;
    if (uVar9 < uVar7 || uVar9 + lVar8 * 0x30c30c30c30c30c3 == 0) {
      uVar9 = uVar7;
    }
    if (0xc30c30c30c30c2 < (ulong)(lVar6 * -0x30c30c30c30c30c3)) {
      uVar9 = 0x186186186186186;
    }
    FUN_0035ba58(plVar1,uVar9);
    FUN_0035bb08(plVar2,plVar4,plVar5,param_1[2]);
    plVar1 = plVar4;
  }
  else {
    lVar6 = param_1[2] - lVar6 >> 3;
    if (uVar7 <= (ulong)(lVar6 * -0x30c30c30c30c30c3)) {
      FUN_0035bee0(plVar4);
      plVar2 = (long *)param_1[2];
      plVar1 = plVar5;
      while (plVar2 != plVar5) {
        plVar2 = plVar2 + -0x15;
        FUN_0034a25c();
      }
      param_1[2] = (long)plVar5;
      goto LAB_0035beb4;
    }
    plVar1 = plVar4 + lVar6;
    FUN_0035bee0(plVar4,plVar1);
    FUN_0035bb08(plVar2,plVar1,plVar5,param_1[2]);
  }
  param_1[2] = (long)plVar2;
LAB_0035beb4:
  auVar11._8_8_ = plVar1;
  auVar11._0_8_ = plVar2;
  return auVar11;
}



/* Entry: 0035bc9c; end: 0035bd57;  */

void FUN_0035bc9c(ulong *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong *puVar4;
  ulong *puStack_28;
  
  if (*param_1 == 0) {
    puStack_28 = param_1 + 1;
    FUN_0034a1ec(&puStack_28);
  }
  param_2 = (ulong *)*param_2;
  if (((ulong)param_2 & 1) != 0) {
    piVar3 = (int *)((long)param_2 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  puVar4 = (ulong *)*param_1;
  if (param_2 == puVar4) {
    puStack_28 = param_2;
    if (((ulong)param_2 & 1) != 0) {
      FUN_0055293c();
    }
  }
  else {
    *param_1 = (ulong)param_2;
    puStack_28 = (ulong *)0x36;
    if (((ulong)puVar4 & 1) == 0) goto LAB_0035bd20;
    FUN_0055293c(puVar4);
  }
  param_2 = (ulong *)*param_1;
LAB_0035bd20:
  if (param_2 == (ulong *)0x0) {
    FUN_0055142c(param_1);
  }
  return;
}



/* Entry: 0035bd58; end: 0035bedf;  */

undefined1  [16] FUN_0035bd58(long *param_1,long *param_2,long *param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  plVar2 = param_1 + 2;
  lVar4 = *param_1;
  if ((ulong)((*plVar2 - lVar4 >> 3) * -0x30c30c30c30c30c3) < param_4) {
    plVar3 = param_2;
    FUN_0034a480(param_1);
    if (0x186186186186186 < param_4) {
      plVar2 = param_1;
      FUN_0035baac();
      param_1[1] = (long)param_2;
      __Unwind_Resume();
      param_1[1] = param_4;
      __Unwind_Resume();
      plVar1 = plVar2;
      for (; plVar2 != plVar3; plVar2 = plVar2 + 0x15) {
        FUN_003d5004(lVar4,plVar2);
        lVar4 = lVar4 + 0xa8;
        plVar1 = plVar3;
      }
      auVar7._8_8_ = lVar4;
      auVar7._0_8_ = plVar1;
      return auVar7;
    }
    lVar4 = param_1[2] - *param_1 >> 3;
    uVar5 = lVar4 * -0x6186186186186186;
    if (uVar5 < param_4 || uVar5 - param_4 == 0) {
      uVar5 = param_4;
    }
    if (0xc30c30c30c30c2 < (ulong)(lVar4 * -0x30c30c30c30c30c3)) {
      uVar5 = 0x186186186186186;
    }
    FUN_0035ba58(param_1,uVar5);
    FUN_0035bb08(plVar2,param_2,param_3,param_1[1]);
    plVar3 = param_2;
  }
  else {
    lVar4 = param_1[1] - lVar4 >> 3;
    if (param_4 <= (ulong)(lVar4 * -0x30c30c30c30c30c3)) {
      FUN_0035bee0(param_2);
      plVar2 = (long *)param_1[1];
      plVar3 = param_3;
      while (plVar2 != param_3) {
        plVar2 = plVar2 + -0x15;
        FUN_0034a25c();
      }
      param_1[1] = (long)param_3;
      goto LAB_0035beb4;
    }
    plVar3 = param_2 + lVar4;
    FUN_0035bee0(param_2,plVar3);
    FUN_0035bb08(plVar2,plVar3,param_3,param_1[1]);
  }
  param_1[1] = (long)plVar2;
LAB_0035beb4:
  auVar6._8_8_ = plVar3;
  auVar6._0_8_ = plVar2;
  return auVar6;
}



/* Entry: 0035bee0; end: 0035bf3b;  */

undefined1  [16] FUN_0035bee0(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = param_1;
  for (; param_1 != param_2; param_1 = param_1 + 0xa8) {
    FUN_003d5004(param_3,param_1);
    param_3 = param_3 + 0xa8;
    lVar1 = param_2;
  }
  auVar2._8_8_ = param_3;
  auVar2._0_8_ = lVar1;
  return auVar2;
}



/* Entry: 0035bf3c; end: 0035c07f;  */

void FUN_0035bf3c(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined ***pppuVar8;
  undefined1 uStack_49;
  undefined **ppuStack_48;
  long lStack_40;
  undefined ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  pppuVar8 = *(undefined ****)(param_1 + 0x18);
  if (pppuVar8 != (undefined ***)0x0) {
    pppuVar4 = pppuVar8 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pppuVar4,0x10);
      if (bVar2) {
        *pppuVar4 = (undefined **)((long)*pppuVar4 + 1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  ppuStack_48 = &PTR_FUN_009dccd8;
  lStack_40 = param_1;
  pppuStack_30 = &ppuStack_48;
  FUN_003d0dec(uVar3,&ppuStack_48,&uStack_49);
  if (pppuStack_30 == &ppuStack_48) {
    lVar6 = 4;
    pppuVar4 = &ppuStack_48;
LAB_0035bfc0:
    (*(code *)(*pppuVar4)[lVar6])();
  }
  else {
    pppuVar4 = pppuStack_30;
    if (pppuStack_30 != (undefined ***)0x0) {
      lVar6 = 5;
      goto LAB_0035bfc0;
    }
  }
  if (pppuVar8 != (undefined ***)0x0) {
    pppuVar5 = pppuVar8 + 1;
    do {
      ppuVar7 = *pppuVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
      if (bVar2) {
        *pppuVar5 = (undefined **)((long)ppuVar7 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (ppuVar7 == (undefined **)0x0) {
      (*(code *)(*pppuVar8)[2])(pppuVar8);
      pppuVar4 = pppuVar8;
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar8);
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (pppuStack_30 == &ppuStack_48) {
    lVar6 = 4;
    pppuVar5 = &ppuStack_48;
  }
  else {
    if (pppuStack_30 == (undefined ***)0x0) goto LAB_0035c060;
    lVar6 = 5;
    pppuVar5 = pppuStack_30;
  }
  (*(code *)(*pppuVar5)[lVar6])();
LAB_0035c060:
  func_0x00771abc(pppuVar8 == (undefined ***)0x0,pppuVar8);
  __Unwind_Resume(pppuVar4);
  return;
}



/* Entry: 0035c080; end: 0035c087;  */

void FUN_0035c080(void)

{
  return;
}



/* Entry: 0035c088; end: 0035c0bb;  */

void FUN_0035c088(long param_1)

{
  dword *pdVar1;
  undefined8 uVar2;
  
  pdVar1 = &MACH_HEADER.ncmds;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined ***)pdVar1 = &PTR_FUN_009dccd8;
  *(undefined8 *)(pdVar1 + 2) = uVar2;
  return;
}



/* Entry: 0035c0bc; end: 0035c0d7;  */

void FUN_0035c0bc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_009dccd8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 0035c0d8; end: 0035c173;  */

void FUN_0035c0d8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  (**(code **)(**(long **)(param_1 + 8) + 0x28))();
  plVar4 = *(long **)(param_1 + 8);
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
  if (lVar5 + -1 != 0 || plVar4 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0035c134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x10))();
  return;
}



/* Entry: 0035c174; end: 0035c17f;  */

undefined ** FUN_0035c174(void)

{
  return &PTR_DAT_009dcd38;
}



/* Entry: 0035c180; end: 0035c203;  */

void FUN_0035c180(long param_1)

{
  undefined8 *puVar1;
  
  *(undefined1 *)(param_1 + 0x38) = 1;
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x003c3f30(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x20),
                    *(undefined8 *)(param_1 + 0x20));
    puVar1 = *(undefined8 **)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)();
    }
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    func_0x003c3f30(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x20),
                    *(undefined8 *)(param_1 + 0x20));
    puVar1 = *(undefined8 **)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = 0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)();
    }
  }
  return;
}



/* Entry: 0035c204; end: 0035c37f;  */

void FUN_0035c204(qword *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  qword *pqVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 auStack_90 [72];
  undefined8 uStack_48;
  
  plVar7 = (long *)(param_1 + 9);
  if (*plVar7 == 0) {
    pqVar3 = (qword *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    pqVar3 = param_1;
    (**(code **)(*param_1 + 0x40))(param_1,param_1[8],*(undefined8 *)(param_2 + 0x20));
  }
  if (*(long *)(param_2 + 0x20) == 0) {
    uVar8 = 0;
  }
  else {
    plVar4 = (long *)(*(long *)(param_2 + 0x20) + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uVar8 = *(undefined8 *)(param_2 + 0x20);
  }
  plVar4 = (long *)param_1[8];
  if (plVar4 != (long *)0x0) {
    plVar6 = plVar4 + 1;
    do {
      lVar5 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 + -1 == 0) goto LAB_0035c358;
  }
  do {
    param_1[8] = uVar8;
    if ((int)pqVar3 == 0) {
      plVar6 = (long *)param_1[10];
      if (plVar6 != (long *)0x0) {
LAB_0035c314:
        func_0x0035b724(auStack_90,param_2);
        (**(code **)(*plVar6 + 0x20))(plVar6,auStack_90);
        FUN_0034a4dc(auStack_90);
        return;
      }
    }
    else {
      pqVar3 = &segment_command_00000020.fileoff;
      if (param_1[9] != 0) {
        pqVar3 = &segment_command_00000020.filesize;
        plVar7 = (long *)(param_1 + 10);
      }
      plVar4 = *(long **)(param_2 + 0x20);
      (**(code **)(*plVar4 + 0x10))();
      FUN_0035c380(&uStack_48,param_1,plVar4,*(undefined8 *)(param_2 + 0x40));
      plVar4 = *(long **)((long)param_1 + (long)pqVar3);
      *(undefined8 *)((long)param_1 + (long)pqVar3) = uStack_48;
      if (plVar4 != (long *)0x0) {
        (**(code **)*plVar4)();
      }
    }
    plVar6 = (long *)*plVar7;
    if (plVar6 != (long *)0x0) goto LAB_0035c314;
    FUN_00771b0c();
    param_1 = (qword *)0x0;
LAB_0035c358:
    (**(code **)(*plVar4 + 8))();
  } while( true );
}



/* Entry: 0035c380; end: 0035c693;  */

long * FUN_0035c380(undefined8 *param_1,long *param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 ****ppppuVar4;
  dword *pdVar5;
  dword *pdVar6;
  long *plVar7;
  undefined8 *puVar8;
  char *pcVar9;
  long lVar10;
  long *plVar11;
  undefined8 ***pppuStack_138;
  ulong uStack_130;
  byte bStack_121;
  long lStack_120;
  long *plStack_118;
  dword *pdStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  char *pcStack_d8;
  undefined8 uStack_d0;
  long lStack_a8;
  long lStack_a0;
  char *pcStack_78;
  undefined8 uStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pdVar6 = &MACH_HEADER.flags;
  __Znwm();
  plVar11 = param_2 + 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar3) {
      *plVar11 = *plVar11 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *(undefined ***)pdVar6 = &PTR_FUN_009dcdd0;
  *(long **)(pdVar6 + 2) = param_2;
  *(undefined8 *)(pdVar6 + 4) = 0;
  lStack_120 = param_2[2];
  plStack_118 = (long *)param_2[3];
  if (plStack_118 != (long *)0x0) {
    plVar11 = plStack_118 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = *plVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plStack_e8 = (long *)0x0;
  uStack_f8 = 0;
  plStack_f0 = (long *)0x0;
  pdStack_110 = pdVar6;
  uStack_108 = param_4;
  uStack_e0 = param_4;
  (**(code **)(*param_2 + 0x48))(&puStack_100,param_2,param_3,&lStack_120);
  pdVar5 = pdStack_110;
  pdStack_110 = (dword *)0x0;
  if (pdVar5 != (dword *)0x0) {
    (**(code **)(*(long *)pdVar5 + 8))();
  }
  plVar11 = plStack_118;
  if (plStack_118 != (long *)0x0) {
    plVar7 = plStack_118 + 1;
    do {
      lVar10 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_118 + 0x10))(plStack_118);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  if (puStack_100 == (undefined8 *)0x0) {
    pcVar9 = section_00000108.segname + 6;
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/child_policy_handler.cc"
                 ,0x11e,2,"could not create LB policy \"%s\"");
    puVar8 = puStack_100;
    *param_1 = 0;
    puStack_100 = (undefined8 *)0x0;
    if (puVar8 != (undefined8 *)0x0) {
      (**(code **)*puVar8)();
    }
  }
  else {
    *(undefined8 **)(pdVar6 + 4) = puStack_100;
    plVar11 = (long *)param_2[5];
    pcStack_78 = "Created new LB policy \"";
    uStack_70 = 0x17;
    if (param_3 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = param_3;
      _strlen();
    }
    pcStack_d8 = "\"";
    uStack_d0 = 1;
    lStack_a8 = param_3;
    lStack_a0 = lVar10;
    FUN_00575ddc(&pppuStack_138,&pcStack_78,&lStack_a8,&pcStack_d8);
    ppppuVar4 = (undefined8 ****)pppuStack_138;
    if (-1 < (char)bStack_121) {
      uStack_130 = (ulong)bStack_121;
      ppppuVar4 = &pppuStack_138;
    }
    (**(code **)(*plVar11 + 0x30))(plVar11,0,ppppuVar4,uStack_130);
    if ((char)bStack_121 < '\0') {
      __ZdlPv(pppuStack_138);
    }
    pcVar9 = (char *)param_2[4];
    func_0x003c3f20(puStack_100[4]);
    *param_1 = puStack_100;
  }
  plVar11 = plStack_e8;
  plStack_e8 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 8))();
  }
  plVar7 = plStack_f0;
  if (plStack_f0 != (long *)0x0) {
    plVar1 = plStack_f0 + 1;
    do {
      lVar10 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar11 = plVar7;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_48) {
    ___stack_chk_fail();
    if ((int)pcVar9 != 0) {
      func_0x0040cf10();
      pdVar6 = pdStack_110;
      pdStack_110 = (dword *)0x0;
      if (pdVar6 != (dword *)0x0) {
        (**(code **)(*(long *)pdVar6 + 8))();
      }
      FUN_0033d36c(&lStack_120);
      plVar7 = plStack_e8;
      plStack_e8 = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 8))();
      }
      FUN_0033d36c(&uStack_f8);
    }
    __Unwind_Resume();
    pcVar9[0] = '\0';
    pcVar9[1] = '\0';
    pcVar9[2] = '\0';
    pcVar9[3] = '\0';
    pcVar9[4] = '\0';
    pcVar9[5] = '\0';
    pcVar9[6] = '\0';
    pcVar9[7] = '\0';
    puVar8 = (undefined8 *)*plVar11;
    *plVar11 = *(long *)pcVar9;
    if (puVar8 != (undefined8 *)0x0) {
      (**(code **)*puVar8)();
    }
    return plVar11;
  }
  return plVar11;
}



/* Entry: 0035c694; end: 0035c6d7;  */

long * FUN_0035c694(long *param_1,long *param_2)

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



/* Entry: 0035c6d8; end: 0035c7c3;  */

void FUN_0035c6d8(long param_1)

{
  if (*(long **)(param_1 + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x48) + 0x28))();
    if (*(long **)(param_1 + 0x50) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0035c714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x50) + 0x28))();
      return;
    }
  }
  return;
}



/* Entry: 0035c7c4; end: 0035c87b;  */

void FUN_0035c7c4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  long *plStack_30;
  undefined8 uStack_28;
  
  plStack_38 = (long *)param_3[1];
  uStack_40 = *param_3;
  uStack_28 = param_3[3];
  plStack_30 = (long *)param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  FUN_0035fc20(param_2,&uStack_40);
  plVar4 = plStack_30;
  plStack_30 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 0035c87c; end: 0035c90f;  */

undefined8 * FUN_0035c87c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_009dcd58;
  puVar4 = (undefined8 *)param_1[10];
  param_1[10] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)();
  }
  puVar4 = (undefined8 *)param_1[9];
  param_1[9] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)();
  }
  plVar5 = (long *)param_1[8];
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
  *param_1 = &PTR_FUN_009dcc18;
  func_0x003c3ef0(param_1[4]);
  plVar5 = (long *)param_1[5];
  param_1[5] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  FUN_0033d36c(param_1 + 2);
  return param_1;
}



/* Entry: 0035c910; end: 0035c9a7;  */

void FUN_0035c910(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_009dcd58;
  puVar4 = (undefined8 *)param_1[10];
  param_1[10] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)();
  }
  puVar4 = (undefined8 *)param_1[9];
  param_1[9] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)();
  }
  plVar5 = (long *)param_1[8];
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
  FUN_0035b5f8(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0035c9a8; end: 0035c9b3;  */

char * FUN_0035c9a8(void)

{
  return "child_policy_handler";
}



/* Entry: 0035c9b4; end: 0035ca6f;  */

undefined8 * FUN_0035c9b4(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_009dcdd0;
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
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  param_1[1] = 0;
  return param_1;
}



/* Entry: 0035ca70; end: 0035cb47;  */

void FUN_0035ca70(undefined8 *param_1,long *param_2,undefined1 *param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined1 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 unaff_x20;
  undefined1 *unaff_x21;
  long *unaff_x22;
  long *plStack_118;
  long *plStack_110;
  undefined1 *puStack_108;
  undefined8 uStack_100;
  long *plStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  long alStack_e0 [21];
  long lStack_38;
  
  plVar5 = alStack_e0;
  plVar2 = alStack_e0;
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar3 = param_2;
  puVar4 = param_3;
  uVar6 = param_4;
  if ((*(char *)(param_2[1] + 0x38) == '\0') &&
     ((plVar1 = param_2, func_0x0035cd04(), ((ulong)plVar1 & 1) != 0 ||
      (func_0x0035cd30(), unaff_x20 = param_4, unaff_x21 = param_3, unaff_x22 = param_2,
      ((ulong)plVar3 & 1) != 0)))) {
    unaff_x22 = *(long **)(param_2[1] + 0x28);
    FUN_003d518c(alStack_e0,param_3);
    uVar6 = param_4;
    (**(code **)(*unaff_x22 + 0x10))(param_1,unaff_x22,alStack_e0,param_4);
    FUN_0034a25c();
  }
  else {
    plVar2 = plVar3;
    *param_1 = 0;
    plVar5 = (long *)puVar4;
    param_4 = unaff_x20;
    param_3 = unaff_x21;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_38) {
    ___stack_chk_fail();
    FUN_0034a25c(alStack_e0);
    plVar3 = plVar2;
    __Unwind_Resume();
    pcStack_e8 = FUN_0035cb48;
    if (*(char *)(plVar3[1] + 0x38) == '\0') {
      plVar1 = plVar3;
      plStack_110 = unaff_x22;
      puStack_108 = param_3;
      uStack_100 = param_4;
      plStack_f8 = plVar2;
      puStack_f0 = &stack0xfffffffffffffff0;
      func_0x0035cd30();
      if ((int)plVar1 == 0) {
        plVar2 = plVar3;
        func_0x0035cd04();
        if ((int)plVar2 == 0) {
          return;
        }
      }
      else {
        if ((int)plVar5 == 1) {
          return;
        }
        func_0x003c3f30(*(undefined8 *)(*(long *)(plVar3[1] + 0x48) + 0x20),
                        *(undefined8 *)(plVar3[1] + 0x20));
        FUN_0035c694(plVar3[1] + 0x48,plVar3[1] + 0x50);
      }
      plVar3 = *(long **)(plVar3[1] + 0x28);
      plStack_118 = (long *)*param_5;
      *param_5 = 0;
      (**(code **)(*plVar3 + 0x18))(plVar3,plVar5,uVar6,&plStack_118);
      plVar3 = plStack_118;
      plStack_118 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    return;
  }
  return;
}



/* Entry: 0035cb48; end: 0035cc3b;  */

void FUN_0035cb48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  long *plVar2;
  long *plStack_38;
  
  if (*(char *)(*(long *)(param_1 + 8) + 0x38) == '\0') {
    lVar1 = param_1;
    func_0x0035cd30();
    if ((int)lVar1 == 0) {
      lVar1 = param_1;
      func_0x0035cd04();
      if ((int)lVar1 == 0) {
        return;
      }
    }
    else {
      if ((int)param_2 == 1) {
        return;
      }
      func_0x003c3f30(*(undefined8 *)(*(long *)(*(long *)(param_1 + 8) + 0x48) + 0x20),
                      *(undefined8 *)(*(long *)(param_1 + 8) + 0x20));
      FUN_0035c694(*(long *)(param_1 + 8) + 0x48,*(long *)(param_1 + 8) + 0x50);
    }
    plVar2 = *(long **)(*(long *)(param_1 + 8) + 0x28);
    plStack_38 = (long *)*param_4;
    *param_4 = 0;
    (**(code **)(*plVar2 + 0x18))(plVar2,param_2,param_3,&plStack_38);
    plVar2 = plStack_38;
    plStack_38 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  return;
}



/* Entry: 0035cc3c; end: 0035cc87;  */

void FUN_0035cc3c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  if (*(char *)(lVar1 + 0x38) == '\0') {
    lVar2 = *(long *)(lVar1 + 0x50);
    if (lVar2 == 0) {
      lVar2 = *(long *)(lVar1 + 0x48);
    }
    if (*(long *)(param_1 + 0x10) == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x0035cc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(lVar1 + 0x28) + 0x20))();
      return;
    }
  }
  return;
}



/* Entry: 0035cc88; end: 0035cd03;  */

void FUN_0035cc88(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long *plVar2;
  
  if ((*(char *)(*(long *)(param_1 + 8) + 0x38) == '\0') &&
     ((uVar1 = param_1, func_0x0035cd30(), (uVar1 & 1) != 0 ||
      (uVar1 = param_1, func_0x0035cd04(), (int)uVar1 != 0)))) {
    plVar2 = *(long **)(*(long *)(param_1 + 8) + 0x28);
                    /* WARNING: Could not recover jumptable at 0x0035cd00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x30))(plVar2,param_2,param_3,param_4);
    return;
  }
  return;
}



/* Entry: 0035cd04; end: 0035cd5b;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_0035cd04(long param_1,ulong param_2,undefined8 param_3,byte *param_4)

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
  long lStack_d8;
  ulong uStack_d0;
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
  
  if (*(long *)(param_1 + 0x10) != 0) {
    return (byte *)(ulong)(*(long *)(param_1 + 0x10) == *(long *)(*(long *)(param_1 + 8) + 0x48));
  }
  func_0x00771b40();
  puStack_30 = (undefined1 *)&puStack_20;
  uStack_18 = 0x35cd30;
  if (*(long *)(param_1 + 0x10) != 0) {
    return (byte *)(ulong)(*(long *)(param_1 + 0x10) == *(long *)(*(long *)(param_1 + 8) + 0x50));
  }
  puStack_20 = &stack0xfffffffffffffff0;
  func_0x00771b74();
  pcStack_28 = FUN_0035cd5c;
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar7 = (byte *)((long)&MACH_HEADER.magic + 2);
  uVar12 = param_2;
  FUN_00338e58();
  if ((int)pbVar7 != 0) {
    ppuStack_b0 = &puStack_20;
    pbVar7 = abStack_a8;
    _vsnprintf(pbVar7,0x40,param_4,&puStack_20);
    if ((int)(uint)pbVar7 < 0) {
      unaff_x23 = (byte *)0x0;
      param_4 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar7;
      if ((uint)pbVar7 < 0x40) {
        param_4 = (byte *)0x0;
        unaff_x23 = abStack_a8;
      }
      else {
        param_4 = (byte *)(((ulong)pbVar7 & 0xffffffff) + 1);
        FUN_00338c74();
        ppuStack_b0 = &puStack_20;
        _vsnprintf();
        unaff_x23 = param_4;
      }
    }
    uVar12 = param_2;
    FUN_00338e80(param_1,param_2,2,unaff_x23);
    pbVar7 = param_4;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return pbVar7;
  }
  ___stack_chk_fail();
  uStack_c8 = 2;
  pcStack_b8 = FUN_00339178;
  lStack_f8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = 1;
  pbStack_f0 = unaff_x24;
  pbStack_e8 = unaff_x23;
  pbStack_e0 = param_4;
  lStack_d8 = param_1;
  uStack_d0 = param_2;
  ppuStack_c0 = &puStack_30;
  FUN_0033a598();
  lVar14 = *(long *)pbVar7;
  lVar2 = lVar14;
  uStack_1a8 = uVar1;
  _strrchr(lVar14,0x2f);
  if (lVar2 != 0) {
    lVar14 = lVar2 + 1;
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
  uVar5 = (ulong)*(uint *)(pbVar7 + 0xc);
  func_0x00338e1c();
  uVar6 = uVar5;
  _pthread_self();
  auStack_158[1] = 0x560e98;
  puStack_148 = &uStack_1a0;
  uStack_140 = 0x560e98;
  uStack_138 = uVar12 & 0xffffffff;
  uStack_130 = 0x5606ac;
  pcStack_120 = FUN_00560738;
  uStack_110 = 0x560e98;
  uStack_108 = (ulong)*(uint *)(pbVar7 + 8);
  uStack_100 = 0x5606ac;
  puVar10 = auStack_158;
  auStack_158[0] = uVar5;
  uStack_128 = uVar6;
  lStack_118 = lVar14;
  FUN_0056189c(apbStack_1f8,"%s%s.%09d %7ld %s:%d]",0x15,puVar10,6);
  uVar9 = *(uint *)(pbVar7 + 0xc);
  func_0x00338e6c();
  if (uVar9 == 0) {
    auStack_158[0] = auStack_158[0] & 0xffffffffffffff00;
    uStack_140 = uStack_140 & 0xffffffffffffff00;
LAB_00339300:
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_158);
    if ((char)uStack_140 == '\0') goto LAB_00339300;
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_1e1 < '\0') {
    pbVar7 = apbStack_1f8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_f8) {
    return pbVar7;
  }
  ___stack_chk_fail();
  if (cStack_1e1 < '\0') {
    __ZdlPv(apbStack_1f8[0]);
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



/* Entry: 0035cd5c; end: 0035cd63;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_0035cd5c(undefined8 param_1,ulong param_2,undefined8 param_3,byte *param_4)

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



/* Entry: 0035cd64; end: 0035ce77;  */

void FUN_0035cd64(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  plVar6 = *(long **)(param_1 + 0x10);
  if ((*(byte *)(param_2 + 2) & 1) != 0) {
    puVar4 = *(uint **)param_2[1];
    if ((*puVar4 >> 0x15 & 1) != 0) {
      lVar7 = *(long *)(puVar4 + 0x22);
      *puVar4 = *puVar4 & 0xffdfffff;
      if (lVar7 != 0) {
        plVar5 = (long *)*plVar6;
        if (plVar5 != (long *)0x0) {
          plVar1 = plVar5 + 1;
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
            (**(code **)(*plVar5 + 8))(plVar5);
          }
        }
        *plVar6 = lVar7;
        lVar7 = *param_2;
        plVar6[2] = (long)FUN_0035cef0;
        plVar6[3] = (long)plVar6;
        plVar6[4] = 0;
        plVar6[5] = lVar7;
        *param_2 = (long)(plVar6 + 1);
      }
    }
  }
  if ((*(byte *)(param_2 + 2) >> 3 & 1) != 0) {
    lVar7 = *(long *)(param_2[1] + 0x48);
    plVar6[8] = (long)FUN_0035cf7c;
    plVar6[9] = (long)plVar6;
    plVar6[10] = 0;
    plVar6[0xb] = lVar7;
    *(long **)(param_2[1] + 0x48) = plVar6 + 7;
  }
                    /* WARNING: Could not recover jumptable at 0x003a6a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 0035ce78; end: 0035cee3;  */

void FUN_0035ce78(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
  if (*plVar5 != 0) {
    FUN_0035d844(*plVar5,(char)plVar5[6] == '\0',(char)plVar5[0xc]);
    plVar5 = (long *)*plVar5;
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
      if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0035cee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 8))();
        return;
      }
    }
  }
  return;
}



/* Entry: 0035cee4; end: 0035ceef;  */

void FUN_0035cee4(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 0035cef0; end: 0035cf7b;  */

void FUN_0035cef0(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_30;
  undefined1 uStack_21;
  
  uStack_30 = *param_2;
  if (uStack_30 == 0) {
    *(undefined1 *)(param_1 + 0x30) = 1;
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uStack_30 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
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
  }
  FUN_00342584(&uStack_21,uVar3,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 0035cf7c; end: 0035d007;  */

void FUN_0035cf7c(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_30;
  undefined1 uStack_21;
  
  uStack_30 = *param_2;
  if (uStack_30 == 0) {
    *(undefined1 *)(param_1 + 0x60) = 1;
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    uStack_30 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x58);
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
  }
  FUN_00342584(&uStack_21,uVar3,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 0035d008; end: 0035d0e3;  */

undefined *** FUN_0035d008(long param_1)

{
  ulong uVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined **appuStack_48 [3];
  undefined ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  appuStack_48[0] = &PTR_FUN_009dced8;
  uVar4 = 1;
  ppuVar5 = (undefined **)&UNK_00002710;
  pppuStack_30 = appuStack_48;
  FUN_003f517c(param_1 + 0x18,1,&UNK_00002710,appuStack_48);
  if (pppuStack_30 == appuStack_48) {
    lVar6 = 4;
    pppuVar2 = appuStack_48;
LAB_0035d070:
    (*(code *)(*pppuVar2)[lVar6])();
  }
  else {
    pppuVar2 = pppuStack_30;
    if (pppuStack_30 != (undefined ***)0x0) {
      lVar6 = 5;
      goto LAB_0035d070;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return pppuVar2;
  }
  ___stack_chk_fail();
  if (pppuStack_30 == appuStack_48) {
    lVar6 = 4;
    pppuVar3 = appuStack_48;
LAB_0035d0d0:
    (*(code *)(*pppuVar3)[lVar6])();
  }
  else if (pppuStack_30 != (undefined ***)0x0) {
    lVar6 = 5;
    pppuVar3 = pppuStack_30;
    goto LAB_0035d0d0;
  }
  __Unwind_Resume();
  if ((undefined **)0x7ffffffffffffff7 < ppuVar5) {
    func_0x0033b318();
    if (*pppuVar2 == (undefined **)0x0) {
      if (*(char *)((long)pppuVar2 + 0x1f) < '\0') {
        __ZdlPv(pppuVar2[1]);
      }
    }
    else if (((ulong)*pppuVar2 & 1) != 0) {
      FUN_0055293c();
    }
    return pppuVar2;
  }
  if (ppuVar5 < (undefined **)0x17) {
    *(char *)((long)pppuVar2 + 0x17) = (char)ppuVar5;
    pppuVar3 = pppuVar2;
    if (ppuVar5 == (undefined **)0x0) goto LAB_0035d168;
  }
  else {
    uVar1 = ((ulong)ppuVar5 & 0xfffffffffffffff8) + 8;
    if (((ulong)ppuVar5 | 7) != 0x17) {
      uVar1 = (ulong)ppuVar5 | 7;
    }
    pppuVar3 = (undefined ***)(uVar1 + 1);
    __Znwm();
    pppuVar2[1] = ppuVar5;
    pppuVar2[2] = (undefined **)(uVar1 + 1 | 0x8000000000000000);
    *pppuVar2 = (undefined **)pppuVar3;
  }
  _memmove(pppuVar3,uVar4,ppuVar5);
LAB_0035d168:
  *(undefined1 *)((long)pppuVar3 + (long)ppuVar5) = 0;
  return pppuVar2;
}



/* Entry: 0035d0e4; end: 0035d18b;  */

ulong * FUN_0035d0e4(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong *puVar2;
  
  if (0x7ffffffffffffff7 < param_3) {
    func_0x0033b318();
    if (*param_1 == 0) {
      if (*(char *)((long)param_1 + 0x1f) < '\0') {
        __ZdlPv(param_1[1]);
      }
    }
    else if ((*param_1 & 1) != 0) {
      FUN_0055293c();
    }
    return param_1;
  }
  if (param_3 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)param_3;
    puVar2 = param_1;
    if (param_3 == 0) goto LAB_0035d168;
  }
  else {
    uVar1 = (param_3 & 0xfffffffffffffff8) + 8;
    if ((param_3 | 7) != 0x17) {
      uVar1 = param_3 | 7;
    }
    puVar2 = (ulong *)(uVar1 + 1);
    __Znwm();
    param_1[1] = param_3;
    param_1[2] = uVar1 + 1 | 0x8000000000000000;
    *param_1 = (ulong)puVar2;
  }
  _memmove(puVar2,param_2,param_3);
LAB_0035d168:
  *(undefined1 *)((long)puVar2 + param_3) = 0;
  return param_1;
}



/* Entry: 0035d18c; end: 0035d1d3;  */

ulong * FUN_0035d18c(ulong *param_1)

{
  if (*param_1 == 0) {
    if (*(char *)((long)param_1 + 0x1f) < '\0') {
      __ZdlPv(param_1[1]);
    }
  }
  else if ((*param_1 & 1) != 0) {
    FUN_0055293c();
  }
  return param_1;
}



/* Entry: 0035d1d4; end: 0035d227;  */

void FUN_0035d1d4(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

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



/* Entry: 0035d228; end: 0035d2ab;  */

void FUN_0035d228(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  lVar3 = param_1[1];
  lVar1 = param_2[1];
  while (lVar3 != lVar2) {
    lVar1 = lVar1 + -0xa8;
    lVar3 = lVar3 + -0xa8;
    FUN_003d518c(lVar1,lVar3);
  }
  param_2[1] = lVar1;
  lVar2 = *param_1;
  *param_1 = lVar1;
  param_2[1] = lVar2;
  lVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 0035d2ac; end: 0035d2f7;  */

long * FUN_0035d2ac(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0xa8;
    FUN_0034a25c();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 0035d2f8; end: 0035d41f;  */

ulong **** FUN_0035d2f8(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  ulong ****ppppuVar4;
  ulong ****ppppuVar5;
  long *plVar6;
  ulong ***pppuVar7;
  ulong **ppuVar8;
  int *piVar9;
  ulong uVar10;
  ulong uVar11;
  ulong ****ppppuVar12;
  long lVar13;
  ulong ****ppppuVar14;
  ulong ***pppuStack_58;
  ulong ***pppuStack_50;
  ulong ***pppuStack_48;
  ulong ***pppuStack_40;
  ulong ***pppuStack_38;
  
  ppppuVar5 = (ulong ****)(param_1 + 2);
  pppuVar7 = (ulong ***)param_1[1];
  if (pppuVar7 < *ppppuVar5) {
    ppuVar8 = (ulong **)*param_2;
    *pppuVar7 = ppuVar8;
    if (((ulong)ppuVar8 & 1) != 0) {
      piVar9 = (int *)((long)ppuVar8 + -1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = *piVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pppuVar7 = pppuVar7 + 1;
    param_1[1] = (long)pppuVar7;
  }
  else {
    lVar13 = (long)pppuVar7 - *param_1 >> 3;
    uVar1 = lVar13 + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_0035d520();
      FUN_0035d67c(&pppuStack_58);
      __Unwind_Resume();
      ppppuVar5 = (ulong ****)(param_1 + 1);
      ppppuVar14 = (ulong ****)*ppppuVar5;
      if (ppppuVar14 != (ulong ****)0x0) {
        param_1 = param_1 + 2;
        ppppuVar12 = ppppuVar5;
        do {
          plVar6 = param_1;
          FUN_003494f0(param_1,ppppuVar14 + 4,param_2);
          ppppuVar4 = ppppuVar14 + 1;
          if ((int)plVar6 == 0) {
            ppppuVar12 = ppppuVar14;
            ppppuVar4 = ppppuVar14;
          }
          ppppuVar14 = (ulong ****)*ppppuVar4;
        } while (ppppuVar14 != (ulong ****)0x0);
        if ((ppppuVar12 != ppppuVar5) &&
           (FUN_003494f0(param_1,param_2,ppppuVar12 + 4), (int)param_1 == 0)) {
          return ppppuVar12;
        }
      }
      return ppppuVar5;
    }
    uVar10 = (long)*ppppuVar5 - *param_1;
    uVar11 = (long)uVar10 >> 2;
    if (uVar11 <= uVar1) {
      uVar11 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar10) {
      uVar11 = 0x1fffffffffffffff;
    }
    pppuStack_38 = (ulong ***)ppppuVar5;
    if (uVar11 == 0) {
      pppuStack_58 = (ulong ***)0x0;
    }
    else {
      FUN_0035d534();
      pppuStack_58 = (ulong ***)ppppuVar5;
    }
    pppuStack_50 = pppuStack_58 + lVar13;
    pppuStack_40 = pppuStack_58 + uVar11;
    pppuVar7 = (ulong ***)*param_2;
    *pppuStack_50 = (ulong **)pppuVar7;
    if (((ulong)pppuVar7 & 1) != 0) {
      piVar9 = (int *)((long)pppuVar7 + -1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = *piVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pppuStack_48 = pppuStack_50 + 1;
    FUN_0035d4ac(param_1,&pppuStack_58);
    pppuVar7 = (ulong ***)param_1[1];
    ppppuVar5 = &pppuStack_58;
    FUN_0035d67c(ppppuVar5);
  }
  param_1[1] = (long)pppuVar7;
  return ppppuVar5;
}



/* Entry: 0035d420; end: 0035d4ab;  */

long * FUN_0035d420(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = (long *)(param_1 + 8);
  plVar5 = (long *)*plVar4;
  if (plVar5 != (long *)0x0) {
    param_1 = param_1 + 0x10;
    plVar3 = plVar4;
    do {
      lVar2 = param_1;
      FUN_003494f0(param_1,plVar5 + 4,param_2);
      plVar1 = plVar5 + 1;
      if ((int)lVar2 == 0) {
        plVar3 = plVar5;
        plVar1 = plVar5;
      }
      plVar5 = (long *)*plVar1;
    } while (plVar5 != (long *)0x0);
    if ((plVar3 != plVar4) && (FUN_003494f0(param_1,param_2,plVar3 + 4), (int)param_1 == 0)) {
      return plVar3;
    }
  }
  return plVar4;
}



/* Entry: 0035d4ac; end: 0035d51f;  */

void FUN_0035d4ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1[1];
  func_0x0035d568(param_1 + 2,uVar2,uVar2,*param_1,*param_1,param_2[1],param_2[1]);
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



/* Entry: 0035d520; end: 0035d533;  */

undefined1  [16]
FUN_0035d520(undefined8 param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,
            undefined8 *param_5,undefined8 param_6,undefined8 *param_7)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  char *pcStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  
  pcVar1 = "vector";
  FUN_0033b32c();
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  FUN_00349558();
  puStack_88 = &uStack_70;
  puStack_80 = &uStack_60;
  puStack_58 = param_7;
  puVar3 = param_7;
  while (param_3 != param_5) {
    param_3 = param_3 + -1;
    puStack_58 = puStack_58 + -1;
    *puStack_58 = *param_3;
    *param_3 = 0x36;
    puVar3 = puVar3 + -1;
  }
  uStack_78 = 1;
  pcStack_90 = pcVar1;
  uStack_70 = param_6;
  puStack_68 = param_7;
  uStack_60 = param_6;
  FUN_0035d5f8(&pcStack_90);
  auVar5._8_8_ = puVar3;
  auVar5._0_8_ = param_6;
  return auVar5;
}



/* Entry: 0035d534; end: 0035d5f7;  */

undefined1  [16]
FUN_0035d534(undefined8 param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,
            undefined8 *param_5,undefined8 param_6,undefined8 *param_7)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  FUN_00349558();
  puStack_78 = &uStack_60;
  puStack_70 = &uStack_50;
  puStack_48 = param_7;
  puVar2 = param_7;
  while (param_3 != param_5) {
    param_3 = param_3 + -1;
    puStack_48 = puStack_48 + -1;
    *puStack_48 = *param_3;
    *param_3 = 0x36;
    puVar2 = puVar2 + -1;
  }
  uStack_68 = 1;
  uStack_80 = param_1;
  uStack_60 = param_6;
  puStack_58 = param_7;
  uStack_50 = param_6;
  FUN_0035d5f8(&uStack_80);
  auVar4._8_8_ = puVar2;
  auVar4._0_8_ = param_6;
  return auVar4;
}



/* Entry: 0035d5f8; end: 0035d62b;  */

long FUN_0035d5f8(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\0') {
    FUN_0035d62c(param_1);
  }
  return param_1;
}



/* Entry: 0035d62c; end: 0035d67b;  */

void FUN_0035d62c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1[2] + 8);
  lVar3 = *(long *)(param_1[1] + 8);
  if (lVar1 != lVar3) {
    uVar2 = *param_1;
    do {
      FUN_0033d5cc(uVar2,lVar1);
      lVar1 = lVar1 + 8;
    } while (lVar1 != lVar3);
  }
  return;
}



/* Entry: 0035d67c; end: 0035d6ef;  */

long * FUN_0035d67c(long *param_1)

{
  func_0x0035d6ac();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 0035d6f0; end: 0035d6f7;  */

void FUN_0035d6f0(void)

{
  return;
}



/* Entry: 0035d6f8; end: 0035d71b;  */

void FUN_0035d6f8(void)

{
  dword *pdVar1;
  
  pdVar1 = &MACH_HEADER.ncmds;
  __Znwm();
  *(undefined ***)pdVar1 = &PTR_FUN_009dced8;
  return;
}



/* Entry: 0035d71c; end: 0035d733;  */

void FUN_0035d71c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_009dced8;
  return;
}



/* Entry: 0035d734; end: 0035d7d3;  */

undefined8 FUN_0035d734(undefined8 param_1,long *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  lVar2 = *param_2;
  FUN_003a20f4(auStack_38,lVar2 + 0x38,"grpc.lb_policy_name",0x13);
  puVar1 = auStack_38;
  FUN_0035d7e0(puVar1,&UNK_007f3eb9);
  if ((int)puVar1 != 0) {
    FUN_003a6bac(lVar2,&PTR_FUN_009dce20);
  }
  return 1;
}



/* Entry: 0035d7d4; end: 0035d7df;  */

undefined ** FUN_0035d7d4(void)

{
  return &PTR_DAT_009dcf38;
}



/* Entry: 0035d7e0; end: 0035d843;  */

bool FUN_0035d7e0(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 2) != '\0') {
    lVar3 = param_1[1];
    lVar1 = param_2;
    _strlen();
    if (lVar3 == lVar1) {
      uVar2 = *param_1;
      _memcmp(uVar2,param_2,lVar3);
      return (int)uVar2 == 0;
    }
  }
  return false;
}



/* Entry: 0035d844; end: 0035d88b;  */

void FUN_0035d844(long param_1,int param_2,int param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  
  plVar1 = (long *)(param_1 + 0x18);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (param_2 != 0) {
    plVar1 = (long *)(param_1 + 0x20);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (param_3 != 0) {
    plVar1 = (long *)(param_1 + 0x28);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 0035d88c; end: 0035d907;  */

void FUN_0035d88c(void)

{
  dword *pdVar1;
  dword *pdStack_28;
  
  pdVar1 = &MACH_HEADER.cpusubtype;
  __Znwm();
  *(undefined ***)pdVar1 = &PTR_DAT_009dcf58;
  pdStack_28 = pdVar1;
  FUN_0035fa18(&pdStack_28);
  pdVar1 = pdStack_28;
  pdStack_28 = (dword *)0x0;
  if (pdVar1 != (dword *)0x0) {
    (**(code **)(*(long *)pdVar1 + 8))();
  }
  return;
}



/* Entry: 0035d908; end: 0035d913;  */

void FUN_0035d908(void)

{
  return;
}



/* Entry: 0035d914; end: 0035da43;  */

void FUN_0035d914(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  dword *pdVar5;
  long lVar6;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  pdVar5 = &section_00000068.offset;
  __Znwm();
  plStack_58 = (long *)param_3[1];
  uStack_60 = *param_3;
  uStack_48 = param_3[3];
  plStack_50 = (long *)param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  FUN_0035b588(&uStack_60);
  plVar4 = plStack_50;
  plStack_50 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = plStack_58;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  *(undefined ***)pdVar5 = &PTR_FUN_009dcfa8;
  FUN_0034a0d4(pdVar5 + 0xc);
  *(undefined2 *)(pdVar5 + 0x24) = 0;
  *(undefined8 *)(pdVar5 + 0x1e) = 0;
  *(undefined8 *)(pdVar5 + 0x1c) = 0;
  *(undefined8 *)(pdVar5 + 0x22) = 0;
  *(undefined8 *)(pdVar5 + 0x20) = 0;
  *(undefined8 *)(pdVar5 + 0x16) = 0;
  *(undefined8 *)(pdVar5 + 0x14) = 0;
  *(undefined8 *)(pdVar5 + 0x1a) = 0;
  *(undefined8 *)(pdVar5 + 0x18) = 0;
  *param_1 = pdVar5;
  return;
}



/* Entry: 0035da44; end: 0035da4f;  */

undefined * FUN_0035da44(void)

{
  return &UNK_007f40a0;
}



/* Entry: 0035da50; end: 0035da87;  */

void FUN_0035da50(undefined8 *param_1)

{
  dword *pdVar1;
  
  pdVar1 = &MACH_HEADER.ncmds;
  __Znwm();
  *(undefined ***)pdVar1 = &PTR_DAT_009dd1c8;
  *(undefined8 *)(pdVar1 + 2) = 1;
  *param_1 = pdVar1;
  return;
}



/* Entry: 0035da88; end: 0035db1f;  */

undefined8 * FUN_0035da88(undefined8 *param_1)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  
  *param_1 = &PTR_FUN_009dcfa8;
  if (param_1[0xf] == 0) {
    if (param_1[0x10] == 0) {
      param_1[0xf] = 0;
      param_1[0x10] = 0;
      FUN_0034a4dc(param_1 + 6);
      *param_1 = &PTR_FUN_009dcc18;
      func_0x003c3ef0(param_1[4]);
      plVar2 = (long *)param_1[5];
      param_1[5] = 0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      FUN_0033d36c(param_1 + 2);
      return param_1;
    }
    uVar3 = 0xbb;
  }
  else {
    uVar3 = 0xba;
  }
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/pick_first/pick_first.cc"
               ,uVar3,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x35db1c);
  (*pcVar1)();
}



/* Entry: 0035db20; end: 0035db33;  */

void FUN_0035db20(void)

{
  FUN_0035da88();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}


