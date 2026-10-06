/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 003c67e8; end: 003c683f;  */

void FUN_003c67e8(void)

{
  undefined8 uVar1;
  
  FUN_00338d88();
  uVar1 = 0x18;
  __Znwm();
  FUN_003c7f64();
  uRam0000000000b5e9f0 = uVar1;
  return;
}



/* Entry: 003c6840; end: 003c6b6b;  */

void FUN_003c6840(ulong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                 int *param_5)

{
  int iVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong *puVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uStack_60;
  ulong uStack_58;
  int iStack_4c;
  ulong uStack_48;
  
  uStack_58 = 0;
  *param_5 = -1;
  puVar3 = param_3;
  func_0x003a06e4(param_3,param_4);
  if ((int)puVar3 == 0) {
    uVar7 = *param_3;
    param_4[1] = param_3[1];
    *param_4 = uVar7;
    uVar8 = param_3[3];
    uVar7 = param_3[2];
    uVar10 = param_3[5];
    uVar9 = param_3[4];
    uVar11 = param_3[6];
    uVar13 = param_3[9];
    uVar12 = param_3[8];
    param_4[7] = param_3[7];
    param_4[6] = uVar11;
    param_4[9] = uVar13;
    param_4[8] = uVar12;
    param_4[3] = uVar8;
    param_4[2] = uVar7;
    param_4[5] = uVar10;
    param_4[4] = uVar9;
    uVar8 = param_3[0xb];
    uVar7 = param_3[10];
    uVar10 = param_3[0xd];
    uVar9 = param_3[0xc];
    uVar12 = param_3[0xf];
    uVar11 = param_3[0xe];
    *(undefined4 *)(param_4 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    param_4[0xd] = uVar10;
    param_4[0xc] = uVar9;
    param_4[0xf] = uVar12;
    param_4[0xe] = uVar11;
    param_4[0xb] = uVar8;
    param_4[10] = uVar7;
  }
  FUN_003c5d08(&uStack_48,param_4,1,0,&iStack_4c,param_5);
  uVar4 = uStack_58;
  if (uStack_48 != uStack_58) {
    uStack_58 = uStack_48;
    uStack_48 = 0x36;
    if ((uVar4 & 1) == 0) goto LAB_003c6908;
    FUN_0055293c();
    uVar4 = uStack_48;
  }
  if ((uVar4 & 1) != 0) {
    FUN_0055293c();
  }
LAB_003c6908:
  if (uStack_58 == 0) {
    if ((iStack_4c == 1) && (puVar3 = param_3, func_0x003a0660(param_3,param_4), (int)puVar3 == 0))
    {
      uVar7 = *param_3;
      param_4[1] = param_3[1];
      *param_4 = uVar7;
      uVar8 = param_3[3];
      uVar7 = param_3[2];
      uVar10 = param_3[5];
      uVar9 = param_3[4];
      uVar11 = param_3[6];
      uVar13 = param_3[9];
      uVar12 = param_3[8];
      param_4[7] = param_3[7];
      param_4[6] = uVar11;
      param_4[9] = uVar13;
      param_4[8] = uVar12;
      param_4[3] = uVar8;
      param_4[2] = uVar7;
      param_4[5] = uVar10;
      param_4[4] = uVar9;
      uVar8 = param_3[0xb];
      uVar7 = param_3[10];
      uVar10 = param_3[0xd];
      uVar9 = param_3[0xc];
      uVar12 = param_3[0xf];
      uVar11 = param_3[0xe];
      *(undefined4 *)(param_4 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      param_4[0xd] = uVar10;
      param_4[0xc] = uVar9;
      param_4[0xf] = uVar12;
      param_4[0xe] = uVar11;
      param_4[0xb] = uVar8;
      param_4[10] = uVar7;
    }
    iVar1 = *param_5;
    uStack_60 = 0;
    if (iVar1 < 0) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_client_posix.cc"
                   ,0x62,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x3c6af8);
      (*pcVar2)();
    }
    FUN_003c4e4c(&uStack_48,iVar1,1);
    if ((((uStack_48 != 0) || (FUN_003c5130(&uStack_48,iVar1,1), uStack_48 != 0)) ||
        ((func_0x003d05c8(), (int)param_4 == 0 &&
         (((FUN_003c56e4(&uStack_48,iVar1,1), uStack_48 != 0 ||
           (FUN_003c526c(&uStack_48,iVar1,1), uStack_48 != 0)) ||
          (FUN_003c588c(&uStack_48,iVar1,param_2,1), uStack_48 != 0)))))) ||
       ((FUN_003c4f84(&uStack_48,iVar1), uStack_48 != 0 ||
        (FUN_003c5bd4(&uStack_48,iVar1,0,param_2), uStack_48 != 0)))) {
      uStack_60 = uStack_48;
      _close(iVar1);
    }
    uVar4 = uStack_58;
    if (uStack_60 != uStack_58) {
      uStack_58 = uStack_60;
      uStack_60 = 0;
      if ((uVar4 & 1) != 0) {
        FUN_0055293c();
      }
    }
    uStack_48 = 0;
    if (uStack_58 == 0) {
      uVar6 = 0;
    }
    else {
      puVar5 = &uStack_58;
      FUN_00552b00(puVar5,&uStack_48);
      uVar6 = (uint)puVar5 ^ 1;
      if ((uStack_48 & 1) != 0) {
        FUN_0055293c();
      }
    }
    if ((uStack_60 & 1) != 0) {
      FUN_0055293c();
    }
    if (uVar6 == 0) {
      *param_1 = 0;
      if ((uStack_58 & 1) == 0) {
        return;
      }
      FUN_0055293c();
      return;
    }
  }
  *param_1 = uStack_58;
  return;
}



/* Entry: 003c6b6c; end: 003c71ef;  */

/* WARNING: Removing unreachable block (ram,0x003c6c54) */
/* WARNING: Type propagation algorithm not settling */

int *******
FUN_003c6b6c(undefined8 param_1,ulong *param_2,int *param_3,undefined8 param_4,long param_5,
            undefined8 param_6,undefined8 *param_7)

{
  long *plVar1;
  undefined8 *******pppppppuVar2;
  int *****pppppiVar3;
  int ******ppppppiVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  int iVar9;
  int *******pppppppiVar10;
  char *pcVar11;
  ulong *puVar12;
  int *******pppppppiVar13;
  int ******ppppppiVar14;
  int *piVar15;
  long lVar16;
  ulong uVar17;
  char *pcVar18;
  int *******pppppppiVar19;
  int ******ppppppiVar20;
  long lVar21;
  char *pcVar22;
  int *******pppppppiVar23;
  long lVar24;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined1 uStack_2f1;
  ulong uStack_2f0;
  undefined1 *puStack_2e8;
  int *******pppppppiStack_2e0;
  int *******pppppppiStack_2d8;
  undefined1 **ppuStack_2d0;
  code *pcStack_2c8;
  char *pcStack_2c0;
  int *******pppppppiStack_2b0;
  int *******pppppppiStack_2a8;
  ulong uStack_2a0;
  int *******pppppppiStack_298;
  ulong uStack_290;
  byte bStack_281;
  ulong uStack_280;
  int *******pppppppiStack_278;
  ulong uStack_270;
  ulong uStack_268;
  char *pcStack_260;
  char *pcStack_258;
  char *pcStack_250;
  ulong uStack_248;
  int *******pppppppiStack_240;
  int ******ppppppiStack_238;
  int ******ppppppiStack_230;
  undefined4 uStack_220;
  int iStack_21c;
  int *******pppppppiStack_218;
  ulong uStack_210;
  char *pcStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1b8;
  undefined1 *puStack_160;
  code *pcStack_158;
  char *pcStack_150;
  char *pcStack_148;
  char *pcStack_140;
  char *pcStack_138;
  char *pcStack_130;
  ulong uStack_128;
  undefined8 *******apppppppuStack_120 [2];
  char cStack_109;
  undefined8 *******pppppppuStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  int ******appppppiStack_e8 [4];
  char *pcStack_c8;
  ulong uStack_c0;
  int *******pppppppiStack_98;
  ulong uStack_90;
  byte bStack_81;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  do {
    piVar15 = param_3;
    _connect(param_3,param_5,*(undefined4 *)(param_5 + 0x80));
    iVar9 = (int)piVar15;
    if (-1 < iVar9) break;
    ___error();
  } while (*piVar15 == 4);
  FUN_003a0d08(appppppiStack_e8,param_5);
  if (appppppiStack_e8[0] == (int ******)0x0) {
    pppppppiStack_98 = (int *******)0x8c994c;
    uStack_90 = 0xb;
    pcVar11 = (char *)appppppiStack_e8;
    FUN_00375c3c();
    uStack_c0 = *(ulong *)(pcVar11 + 8);
    pcStack_c8 = *(char **)pcVar11;
    if (-1 < pcVar11[0x17]) {
      uStack_c0 = (ulong)(byte)pcVar11[0x17];
      pcStack_c8 = pcVar11;
    }
    FUN_00575d30(apppppppuStack_120,&pppppppiStack_98,&pcStack_c8);
    pppppppuVar2 = apppppppuStack_120[0];
    if (-1 < cStack_109) {
      pppppppuVar2 = apppppppuStack_120;
    }
    FUN_003c17c0(param_3,pppppppuVar2,1);
    pppppppiStack_98 = (int *******)0x0;
    piVar15 = param_3;
    ___error();
    if ((*piVar15 == 0x23) || (___error(), *piVar15 == 0x24)) {
      do {
        pppppppiVar19 = pppppppiRam0000000000afaf98;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(0xafaf98,0x10);
        if (bVar7) {
          cVar5 = ExclusiveMonitorsStatus();
          pppppppiRam0000000000afaf98 = (int *******)((long)pppppppiRam0000000000afaf98 + 1);
        }
      } while (cVar5 != '\0');
      pppppppiStack_98 = pppppppiVar19;
      if (iVar9 < 0) goto LAB_003c6db8;
LAB_003c6d58:
      ppppppiVar20 = (int ******)appppppiStack_e8;
      FUN_00375c3c();
      pppppiVar3 = ppppppiVar20[1];
      ppppppiVar4 = (int ******)*ppppppiVar20;
      if (-1 < (char)*(byte *)((long)ppppppiVar20 + 0x17)) {
        pppppiVar3 = (int *****)(ulong)*(byte *)((long)ppppppiVar20 + 0x17);
        ppppppiVar4 = ppppppiVar20;
      }
      FUN_003c8808(param_3,param_4,ppppppiVar4,pppppiVar3);
      *param_7 = param_3;
      uStack_128 = 0;
      FUN_003c1e6c(&pcStack_c8,param_2,&uStack_128);
      if ((uStack_128 & 1) != 0) {
        FUN_0055293c();
      }
LAB_003c6da8:
      pppppppiVar19 = (int *******)0x0;
    }
    else {
      pppppppiVar19 = (int *******)0x0;
      if (-1 < iVar9) goto LAB_003c6d58;
LAB_003c6db8:
      ___error();
      if ((*piVar15 != 0x23) && (___error(), *piVar15 != 0x24)) {
        ___error();
        FUN_003be008(&pcStack_130,&pcStack_138,*piVar15,"connect");
        pcVar11 = pcStack_130;
        if (pcStack_130 == (char *)0x0) {
          pcStack_150 = "!GRPC_ERROR_IS_NONE(error)";
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                       ,0xd5,2,"assertion failed: %s");
          _abort();
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x3c70d4);
          (*pcVar8)();
        }
        pcStack_c8 = pcStack_130;
        pcStack_130 = segment_command_00000020.segname + 0xe;
        pcStack_140 = pcVar11;
        if (((ulong)pcVar11 & 1) != 0) {
          pcVar18 = pcVar11 + -1;
          do {
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pcVar18,0x10);
            if (bVar7) {
              *(int *)pcVar18 = *(int *)pcVar18 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        ppppppiVar20 = (int ******)appppppiStack_e8;
        FUN_00375c3c();
        pppppiVar3 = ppppppiVar20[1];
        ppppppiVar4 = (int ******)*ppppppiVar20;
        if (-1 < (char)*(byte *)((long)ppppppiVar20 + 0x17)) {
          pppppiVar3 = (int *****)(ulong)*(byte *)((long)ppppppiVar20 + 0x17);
          ppppppiVar4 = ppppppiVar20;
        }
        FUN_003be254(&pcStack_138,&pcStack_140,4,ppppppiVar4,pppppiVar3);
        pcVar18 = pcStack_138;
        pcVar22 = pcVar11;
        if (pcStack_138 == pcVar11) {
LAB_003c702c:
          pcVar18 = pcVar11;
          if (((ulong)pcVar22 & 1) != 0) {
            FUN_0055293c(pcVar22);
          }
        }
        else {
          pcStack_c8 = pcStack_138;
          pcStack_138 = segment_command_00000020.segname + 0xe;
          if (((ulong)pcVar11 & 1) != 0) {
            FUN_0055293c(pcVar11);
            pcVar11 = pcVar18;
            pcVar22 = pcStack_138;
            goto LAB_003c702c;
          }
        }
        if (((ulong)pcStack_140 & 1) != 0) {
          FUN_0055293c();
        }
        func_0x003c1840(param_3,0,0,"tcp_client_connect_error");
        if (((ulong)pcVar18 & 1) != 0) {
          pcVar11 = pcVar18 + -1;
          do {
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pcVar11,0x10);
            if (bVar7) {
              *(int *)pcVar11 = *(int *)pcVar11 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        pcStack_148 = pcVar18;
        FUN_003c1e6c(&pcStack_138,param_2,&pcStack_148);
        if (((ulong)pcStack_148 & 1) != 0) {
          FUN_0055293c();
        }
        if (((ulong)pcVar18 & 1) != 0) {
          FUN_0055293c(pcVar18);
        }
        goto LAB_003c6da8;
      }
      func_0x003c19f0(param_1,param_3);
      pcVar11 = section_00000108.sectname + 8;
      __Znwm();
      *(undefined8 *)(pcVar11 + 0xf8) = 0;
      *(undefined8 *)(pcVar11 + 0xf0) = 0;
      *(undefined8 *)(pcVar11 + 0x108) = 0;
      *(undefined8 *)(pcVar11 + 0x100) = 0;
      *(undefined8 *)(pcVar11 + 0xd8) = 0;
      *(undefined8 *)(pcVar11 + 0xd0) = 0;
      *(undefined8 *)(pcVar11 + 0xe8) = 0;
      *(undefined8 *)(pcVar11 + 0xe0) = 0;
      *(undefined8 *)(pcVar11 + 0xb8) = 0;
      *(undefined8 *)(pcVar11 + 0xb0) = 0;
      *(undefined8 *)(pcVar11 + 200) = 0;
      *(undefined8 *)(pcVar11 + 0xc0) = 0;
      *(undefined8 *)(pcVar11 + 0x98) = 0;
      *(undefined8 *)(pcVar11 + 0x90) = 0;
      *(undefined8 *)(pcVar11 + 0xa8) = 0;
      *(undefined8 *)(pcVar11 + 0xa0) = 0;
      *(undefined8 *)(pcVar11 + 0x78) = 0;
      *(undefined8 *)(pcVar11 + 0x70) = 0;
      *(undefined8 *)(pcVar11 + 0x88) = 0;
      *(undefined8 *)(pcVar11 + 0x80) = 0;
      *(undefined8 *)(pcVar11 + 0x58) = 0;
      *(undefined8 *)(pcVar11 + 0x50) = 0;
      *(undefined8 *)(pcVar11 + 0x68) = 0;
      *(undefined8 *)(pcVar11 + 0x60) = 0;
      *(undefined8 *)(pcVar11 + 0x38) = 0;
      *(undefined8 *)(pcVar11 + 0x30) = 0;
      *(undefined8 *)(pcVar11 + 0x48) = 0;
      *(undefined8 *)(pcVar11 + 0x40) = 0;
      *(qword *)(pcVar11 + 0x18) = 0;
      pcVar11[0x10] = '\0';
      pcVar11[0x11] = '\0';
      pcVar11[0x12] = '\0';
      pcVar11[0x13] = '\0';
      pcVar11[0x14] = '\0';
      pcVar11[0x15] = '\0';
      pcVar11[0x16] = '\0';
      pcVar11[0x17] = '\0';
      *(undefined8 *)(pcVar11 + 0x28) = 0;
      *(qword *)(pcVar11 + 0x20) = 0;
      pcVar11[8] = '\0';
      pcVar11[9] = '\0';
      pcVar11[10] = '\0';
      pcVar11[0xb] = '\0';
      pcVar11[0xc] = '\0';
      pcVar11[0xd] = '\0';
      pcVar11[0xe] = '\0';
      pcVar11[0xf] = '\0';
      pcVar11[0] = '\0';
      pcVar11[1] = '\0';
      pcVar11[2] = '\0';
      pcVar11[3] = '\0';
      pcVar11[4] = '\0';
      pcVar11[5] = '\0';
      pcVar11[6] = '\0';
      pcVar11[7] = '\0';
      *(undefined8 **)(pcVar11 + 0xe8) = param_7;
      *(ulong **)(pcVar11 + 0xf0) = param_2;
      *(int **)(pcVar11 + 0x40) = param_3;
      *(undefined8 *)(pcVar11 + 200) = param_1;
      ppppppiVar20 = (int ******)appppppiStack_e8;
      FUN_00375c3c(ppppppiVar20);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (pcVar11 + 0xd0,ppppppiVar20);
      *(int ********)(pcVar11 + 0x100) = pppppppiVar19;
      pcVar11[0x108] = 0;
      func_0x00339d50(pcVar11);
      *(undefined4 *)(pcVar11 + 0xa0) = 2;
      *(code **)(pcVar11 + 0xb0) = FUN_003c71f0;
      *(char **)(pcVar11 + 0xb8) = pcVar11;
      *(undefined8 *)(pcVar11 + 0xc0) = 0;
      FUN_003a277c();
      *(undefined8 *)(pcVar11 + 0xf8) = param_4;
      lVar16 = *plRam0000000000b5e9f0;
      uVar17 = (plRam0000000000b5e9f0[1] - lVar16 >> 5) * -0x5555555555555555;
      iVar9 = 0;
      if (uVar17 != 0) {
        iVar9 = (int)((ulong)pppppppiVar19 / uVar17);
      }
      iVar9 = (int)pppppppiVar19 - iVar9 * (int)uVar17;
      lVar21 = lVar16 + (long)iVar9 * 0x60;
      func_0x00339d8c(lVar21);
      lVar16 = lVar16 + (long)iVar9 * 0x60;
      lVar24 = lVar16 + 0x40;
      pppppppiVar19 = (int *******)&pppppppiStack_98;
      FUN_003c82c4();
      plVar1 = (long *)(*(long *)(lVar16 + 0x48) + lVar24 * 0x10);
      if (((ulong)pppppppiVar19 & 0xff) != 0) {
        *plVar1 = (long)pppppppiStack_98;
      }
      plVar1[1] = (long)pcVar11;
      func_0x00339da8(lVar21);
      func_0x00339d8c(pcVar11);
      *(code **)(pcVar11 + 0x88) = FUN_003c7ab4;
      *(char **)(pcVar11 + 0x90) = pcVar11;
      *(undefined8 *)(pcVar11 + 0x98) = 0;
      func_0x003cf010(pcVar11 + 0x48,param_6,pcVar11 + 0x80);
      param_2 = (ulong *)(pcVar11 + 0xa8);
      func_0x003c18e8(*(undefined8 *)(pcVar11 + 0x40));
      func_0x00339da8(pcVar11);
      pppppppiVar19 = pppppppiStack_98;
    }
    if (cStack_109 < '\0') {
      __ZdlPv(apppppppuStack_120[0]);
    }
  }
  else {
    FUN_00552ec8(&pppppppiStack_98,appppppiStack_e8,1);
    uVar17 = uStack_90;
    pppppppiVar19 = pppppppiStack_98;
    if (-1 < (char)bStack_81) {
      uVar17 = (ulong)bStack_81;
      pppppppiVar19 = (int *******)&pppppppiStack_98;
    }
    uStack_f8 = 0;
    uStack_f0 = 0;
    lStack_100 = 0;
    FUN_003b646c(apppppppuStack_120,2,pppppppiVar19,uVar17,&pcStack_138,&lStack_100);
    pcStack_c8 = (char *)&lStack_100;
    FUN_0033d548(&pcStack_c8);
    pppppppuStack_108 = apppppppuStack_120[0];
    if (((ulong)apppppppuStack_120[0] & 1) != 0) {
      piVar15 = (int *)((long)apppppppuStack_120[0] + -1);
      do {
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar7) {
          *piVar15 = *piVar15 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    FUN_003c1e6c(&pppppppiStack_98,param_2,&pppppppuStack_108);
    if (((ulong)pppppppuStack_108 & 1) != 0) {
      FUN_0055293c();
    }
    if (((ulong)apppppppuStack_120[0] & 1) != 0) {
      FUN_0055293c();
    }
    pppppppiVar19 = (int *******)0x0;
  }
  pppppppiVar10 = appppppiStack_e8;
  FUN_0035d18c();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return pppppppiVar19;
  }
  ___stack_chk_fail();
  FUN_0033c494(&pcStack_138);
  FUN_0033c494(&pcStack_140);
  FUN_0033c494(&pcStack_c8);
  if (cStack_109 < '\0') {
    __ZdlPv(apppppppuStack_120[0]);
  }
  FUN_0035d18c(appppppiStack_e8);
  __Unwind_Resume();
  pcStack_158 = FUN_003c71f0;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_00999f88;
  iStack_21c = 0;
  ppppppiVar20 = pppppppiVar10[0x1d];
  ppppppiVar4 = pppppppiVar10[0x1e];
  pppppppiVar19 = pppppppiVar10 + 0x1a;
  puStack_160 = &stack0xfffffffffffffff0;
  if (*(char *)((long)pppppppiVar10 + 0xe7) < '\0') {
    FUN_002971d4(&pppppppiStack_240,pppppppiVar10[0x1a],pppppppiVar10[0x1b]);
  }
  else {
    ppppppiStack_238 = pppppppiVar10[0x1b];
    pppppppiStack_240 = (int *******)*pppppppiVar19;
    ppppppiStack_230 = pppppppiVar10[0x1c];
  }
  func_0x00339d8c(pppppppiVar10);
  pppppppiVar23 = (int *******)pppppppiVar10[8];
  if (pppppppiVar23 == (int *******)0x0) {
    pcStack_2c0 = "ac->fd";
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_client_posix.cc"
                 ,0xb0,2,"assertion failed: %s");
    _abort();
    goto LAB_003c791c;
  }
  pppppppiVar10[8] = (int ******)0x0;
  cVar5 = *(char *)(pppppppiVar10 + 0x21);
  func_0x00339da8(pppppppiVar10);
  func_0x003cf020(pppppppiVar10 + 9);
  func_0x00339d8c(pppppppiVar10);
  uVar17 = *param_2;
  if (uVar17 == 0) {
    if (cVar5 == '\0') {
      do {
        uStack_220 = 4;
        pppppppiVar13 = pppppppiVar23;
        func_0x003c1830();
        _getsockopt();
        if (-1 < (int)pppppppiVar13) {
          if (iStack_21c == 0x3d) {
            FUN_003be008(&pcStack_258,&pppppppiStack_218,0x3d,"connect");
            pcVar11 = pcStack_258;
            if (pcStack_258 == (char *)0x0) {
              pcStack_2c0 = "!GRPC_ERROR_IS_NONE(error)";
              FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                           ,0xd5,2,"assertion failed: %s");
              _abort();
              goto LAB_003c791c;
            }
            pcStack_1e8 = pcStack_258;
            pcStack_258 = "";
            pcVar18 = (char *)*param_2;
            if (pcVar11 == pcVar18) {
              if (((ulong)pcVar11 & 1) != 0) {
                FUN_0055293c();
              }
            }
            else {
              *param_2 = (ulong)pcVar11;
              pcStack_1e8 = "";
              if (((ulong)pcVar18 & 1) != 0) {
                FUN_0055293c(pcVar18);
              }
            }
            if (((ulong)pcStack_258 & 1) != 0) {
              FUN_0055293c();
            }
          }
          else {
            if (iStack_21c == 0x37) {
              FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_client_posix.cc"
                           ,0xe4,2,"kernel out of buffers");
              func_0x00339da8(pppppppiVar10);
              func_0x003c18e8(pppppppiVar23,pppppppiVar10 + 0x15);
              goto LAB_003c75e8;
            }
            if (iStack_21c == 0) {
              func_0x003c1a00(pppppppiVar10[0x19],pppppppiVar23);
              if ((char)*(byte *)((long)pppppppiVar10 + 0xe7) < '\0') {
                pppppppiVar13 = (int *******)pppppppiVar10[0x1a];
                ppppppiVar14 = pppppppiVar10[0x1b];
              }
              else {
                ppppppiVar14 = (int ******)(ulong)*(byte *)((long)pppppppiVar10 + 0xe7);
                pppppppiVar13 = pppppppiVar19;
              }
              FUN_003c8808(pppppppiVar23,pppppppiVar10[0x1f],pppppppiVar13,ppppppiVar14);
              *ppppppiVar20 = (int *****)pppppppiVar23;
              pppppppiVar23 = (int *******)0x0;
            }
            else {
              FUN_003be008(&pcStack_260,&pppppppiStack_218,iStack_21c,"getsockopt(SO_ERROR)");
              pcVar11 = pcStack_260;
              if (pcStack_260 == (char *)0x0) {
                pcStack_2c0 = "!GRPC_ERROR_IS_NONE(error)";
                FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                             ,0xd5,2,"assertion failed: %s");
                _abort();
                goto LAB_003c791c;
              }
              pcStack_1e8 = pcStack_260;
              pcStack_260 = "";
              pcVar18 = (char *)*param_2;
              if (pcVar11 == pcVar18) {
                if (((ulong)pcVar11 & 1) != 0) {
                  FUN_0055293c();
                }
              }
              else {
                *param_2 = (ulong)pcVar11;
                pcStack_1e8 = "";
                if (((ulong)pcVar18 & 1) != 0) {
                  FUN_0055293c(pcVar18);
                }
              }
              if (((ulong)pcStack_260 & 1) != 0) {
                FUN_0055293c();
              }
            }
          }
          goto LAB_003c7308;
        }
        ___error();
      } while (*(int *)pppppppiVar13 == 4);
      ___error();
      FUN_003be008(&pcStack_250,&pppppppiStack_218,*(int *)pppppppiVar13,"getsockopt");
      pcVar11 = pcStack_250;
      if (pcStack_250 == (char *)0x0) {
        pcStack_2c0 = "!GRPC_ERROR_IS_NONE(error)";
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                     ,0xd5,2,"assertion failed: %s");
        _abort();
        goto LAB_003c791c;
      }
      pcStack_1e8 = pcStack_250;
      pcStack_250 = "";
      pcVar18 = (char *)*param_2;
      if (pcVar11 == pcVar18) {
        if (((ulong)pcVar11 & 1) != 0) {
          FUN_0055293c();
        }
      }
      else {
        *param_2 = (ulong)pcVar11;
        pcStack_1e8 = "";
        if (((ulong)pcVar18 & 1) != 0) {
          FUN_0055293c(pcVar18);
        }
      }
      if (((ulong)pcStack_250 & 1) != 0) {
        FUN_0055293c();
      }
      goto LAB_003c7308;
    }
LAB_003c7374:
    func_0x003c1a00(pppppppiVar10[0x19],pppppppiVar23);
    func_0x003c1840(pppppppiVar23,0,0,"tcp_client_orphan");
  }
  else {
    if ((uVar17 & 1) != 0) {
      piVar15 = (int *)(uVar17 - 1);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar7) {
          *piVar15 = *piVar15 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    uStack_248 = uVar17;
    FUN_003be254(&pcStack_1e8,&uStack_248,2,"Timeout occurred",0x10);
    pcVar11 = (char *)*param_2;
    if (pcStack_1e8 == pcVar11) {
LAB_003c72f4:
      if (((ulong)pcVar11 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      *param_2 = (ulong)pcStack_1e8;
      pcStack_1e8 = "";
      if (((ulong)pcVar11 & 1) != 0) {
        FUN_0055293c();
        pcVar11 = pcStack_1e8;
        goto LAB_003c72f4;
      }
    }
    if ((uStack_248 & 1) != 0) {
      FUN_0055293c();
    }
LAB_003c7308:
    if (cVar5 == '\0') {
      lVar16 = *plRam0000000000b5e9f0;
      uVar17 = (plRam0000000000b5e9f0[1] - lVar16 >> 5) * -0x5555555555555555;
      iVar9 = 0;
      if (uVar17 != 0) {
        iVar9 = (int)((ulong)pppppppiVar10[0x20] / uVar17);
      }
      iVar9 = (int)pppppppiVar10[0x20] - iVar9 * (int)uVar17;
      lVar24 = lVar16 + (long)iVar9 * 0x60;
      func_0x00339d8c(lVar24);
      FUN_003c81c0(lVar16 + (long)iVar9 * 0x60 + 0x40,pppppppiVar10 + 0x20);
      func_0x00339da8(lVar24);
    }
    if (pppppppiVar23 != (int *******)0x0) goto LAB_003c7374;
  }
  iVar9 = *(int *)(pppppppiVar10 + 0x14);
  *(int *)(pppppppiVar10 + 0x14) = iVar9 + -1;
  pppppppiVar23 = pppppppiVar10;
  func_0x00339da8();
  uVar17 = *param_2;
  if (uVar17 == 0) goto joined_r0x003c7564;
  pppppppiStack_278 = (int *******)0x0;
  uStack_270 = 0;
  uStack_268 = 0;
  if ((uVar17 & 1) != 0) {
    piVar15 = (int *)(uVar17 - 1);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar7) {
        *piVar15 = *piVar15 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  puVar12 = &uStack_280;
  uStack_280 = uVar17;
  FUN_003be374(puVar12,0,&pppppppiStack_278);
  if ((uStack_280 & 1) != 0) {
    FUN_0055293c();
  }
  if (((ulong)puVar12 & 1) == 0) {
    pcStack_2c0 = "ret";
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_client_posix.cc"
                 ,0x106,2,"assertion failed: %s");
    _abort();
LAB_003c791c:
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x3c7920);
    (*pcVar8)();
  }
  pcStack_1e8 = "Failed to connect to remote host: ";
  uStack_1e0 = 0x22;
  uStack_210 = uStack_270;
  pppppppiStack_218 = pppppppiStack_278;
  if (-1 < (long)uStack_268) {
    uStack_210 = uStack_268 >> 0x38;
    pppppppiStack_218 = (int *******)&pppppppiStack_278;
  }
  FUN_00575d30(&pppppppiStack_298,&pcStack_1e8,&pppppppiStack_218);
  uStack_2a0 = *param_2;
  if ((uStack_2a0 & 1) != 0) {
    piVar15 = (int *)(uStack_2a0 - 1);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar7) {
        *piVar15 = *piVar15 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  pppppppiVar23 = pppppppiStack_298;
  if (-1 < (char)bStack_281) {
    uStack_290 = (ulong)bStack_281;
    pppppppiVar23 = (int *******)&pppppppiStack_298;
  }
  FUN_003be254(&pcStack_1e8,&uStack_2a0,0,pppppppiVar23,uStack_290);
  pcVar11 = (char *)*param_2;
  if (pcStack_1e8 == pcVar11) {
LAB_003c74b0:
    if (((ulong)pcVar11 & 1) != 0) {
      FUN_0055293c();
    }
  }
  else {
    *param_2 = (ulong)pcStack_1e8;
    pcStack_1e8 = "";
    if (((ulong)pcVar11 & 1) != 0) {
      FUN_0055293c();
      pcVar11 = pcStack_1e8;
      goto LAB_003c74b0;
    }
  }
  if ((uStack_2a0 & 1) != 0) {
    FUN_0055293c();
  }
  pppppppiStack_2a8 = (int *******)*param_2;
  if (((ulong)pppppppiStack_2a8 & 1) != 0) {
    piVar15 = (int *)((long)pppppppiStack_2a8 + -1);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar7) {
        *piVar15 = *piVar15 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  ppppppiVar20 = ppppppiStack_238;
  pppppppiVar23 = pppppppiStack_240;
  if (-1 < (long)ppppppiStack_230) {
    ppppppiVar20 = (int ******)((ulong)ppppppiStack_230 >> 0x38);
    pppppppiVar23 = (int *******)&pppppppiStack_240;
  }
  FUN_003be254(&pcStack_1e8,&pppppppiStack_2a8,4,pppppppiVar23,ppppppiVar20);
  pcVar11 = (char *)*param_2;
  if (pcStack_1e8 == pcVar11) {
LAB_003c7538:
    if (((ulong)pcVar11 & 1) != 0) {
      FUN_0055293c();
    }
  }
  else {
    *param_2 = (ulong)pcStack_1e8;
    pcStack_1e8 = "";
    if (((ulong)pcVar11 & 1) != 0) {
      FUN_0055293c();
      pcVar11 = pcStack_1e8;
      goto LAB_003c7538;
    }
  }
  pppppppiVar23 = pppppppiStack_2a8;
  if (((ulong)pppppppiStack_2a8 & 1) != 0) {
    FUN_0055293c();
  }
  if ((char)bStack_281 < '\0') {
    __ZdlPv();
    pppppppiVar23 = pppppppiStack_298;
  }
  if ((long)uStack_268 < 0) {
    pppppppiVar23 = pppppppiStack_278;
    __ZdlPv();
  }
joined_r0x003c7564:
  if (iVar9 + -1 == 0) {
    func_0x00339d70(pppppppiVar10);
    FUN_003a2a64(pppppppiVar10[0x1f]);
    if (*(char *)((long)pppppppiVar10 + 0xe7) < '\0') {
      __ZdlPv(*pppppppiVar19);
    }
    pppppppiVar23 = pppppppiVar10;
    __ZdlPv();
  }
  if (cVar5 == '\0') {
    pppppppiStack_2b0 = (int *******)*param_2;
    if (((ulong)pppppppiStack_2b0 & 1) != 0) {
      piVar15 = (int *)((long)pppppppiStack_2b0 + -1);
      do {
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar7) {
          *piVar15 = *piVar15 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    FUN_003c2968(ppppppiVar4,&pppppppiStack_2b0,0,0);
    pppppppiVar23 = pppppppiStack_2b0;
    if (((ulong)pppppppiStack_2b0 & 1) != 0) {
      FUN_0055293c();
    }
  }
LAB_003c75e8:
  if ((long)ppppppiStack_230 < 0) {
    pppppppiVar23 = pppppppiStack_240;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_1b8) {
    ___stack_chk_fail();
    FUN_0033c494(&pcStack_1e8);
    FUN_0033c494(&pcStack_260);
    if ((long)ppppppiStack_230 < 0) {
      __ZdlPv(pppppppiStack_240);
    }
    pppppppiVar19 = pppppppiVar23;
    __Unwind_Resume();
    pcStack_2c8 = FUN_003c7ab4;
    pppppppiStack_2e0 = pppppppiVar10;
    pppppppiStack_2d8 = pppppppiVar23;
    ppuStack_2d0 = &puStack_160;
    func_0x00339d8c();
    ppppppiVar20 = pppppppiVar19[8];
    if (ppppppiVar20 != (int ******)0x0) {
      uStack_308 = 0;
      uStack_300 = 0;
      uStack_310 = 0;
      FUN_003b646c(&uStack_2f0,2,"connect() timed out",0x13,&uStack_2f1,&uStack_310);
      FUN_003c1850(ppppppiVar20,&uStack_2f0);
      if ((uStack_2f0 & 1) != 0) {
        FUN_0055293c();
      }
      puStack_2e8 = (undefined1 *)&uStack_310;
      FUN_0033d548(&puStack_2e8);
    }
    iVar9 = *(int *)(pppppppiVar19 + 0x14);
    *(int *)(pppppppiVar19 + 0x14) = iVar9 + -1;
    pppppppiVar10 = pppppppiVar19;
    func_0x00339da8(pppppppiVar19);
    if (iVar9 + -1 == 0) {
      func_0x00339d70(pppppppiVar19);
      FUN_003a2a64(pppppppiVar19[0x1f]);
      if (*(char *)((long)pppppppiVar19 + 0xe7) < '\0') {
        __ZdlPv(pppppppiVar19[0x1a]);
      }
      __ZdlPv(pppppppiVar19);
      pppppppiVar10 = pppppppiVar19;
    }
    return pppppppiVar10;
  }
  return pppppppiVar23;
}



/* Entry: 003c71f0; end: 003c7ab3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_003c71f0(int *******param_1,ulong *param_2)

{
  long lVar1;
  int ******ppppppiVar2;
  char cVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  char *pcVar8;
  ulong *puVar9;
  int *******pppppppiVar10;
  int *******pppppppiVar11;
  int ******ppppppiVar12;
  ulong uVar13;
  int *piVar14;
  char *pcVar15;
  int ******ppppppiVar16;
  int *******pppppppiVar17;
  long lVar18;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 uStack_1a1;
  ulong uStack_1a0;
  undefined1 *puStack_198;
  int *******pppppppiStack_190;
  int *******pppppppiStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  char *pcStack_170;
  int *******pppppppiStack_160;
  int *******pppppppiStack_158;
  ulong uStack_150;
  int *******pppppppiStack_148;
  ulong uStack_140;
  byte bStack_131;
  ulong uStack_130;
  int *******pppppppiStack_128;
  ulong uStack_120;
  ulong uStack_118;
  char *pcStack_110;
  char *pcStack_108;
  char *pcStack_100;
  ulong uStack_f8;
  int *******pppppppiStack_f0;
  int ******ppppppiStack_e8;
  int ******ppppppiStack_e0;
  undefined4 uStack_d0;
  int iStack_cc;
  int *******pppppppiStack_c8;
  ulong uStack_c0;
  char *pcStack_98;
  undefined8 uStack_90;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  iStack_cc = 0;
  ppppppiVar16 = param_1[0x1d];
  ppppppiVar2 = param_1[0x1e];
  pppppppiVar11 = param_1 + 0x1a;
  if (*(char *)((long)param_1 + 0xe7) < '\0') {
    FUN_002971d4(&pppppppiStack_f0,param_1[0x1a],param_1[0x1b]);
  }
  else {
    ppppppiStack_e8 = param_1[0x1b];
    pppppppiStack_f0 = (int *******)*pppppppiVar11;
    ppppppiStack_e0 = param_1[0x1c];
  }
  func_0x00339d8c(param_1);
  pppppppiVar17 = (int *******)param_1[8];
  if (pppppppiVar17 == (int *******)0x0) {
    pcStack_170 = "ac->fd";
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_client_posix.cc"
                 ,0xb0,2,"assertion failed: %s");
    _abort();
    goto LAB_003c791c;
  }
  param_1[8] = (int ******)0x0;
  cVar3 = *(char *)(param_1 + 0x21);
  func_0x00339da8(param_1);
  func_0x003cf020(param_1 + 9);
  func_0x00339d8c(param_1);
  uVar13 = *param_2;
  if (uVar13 == 0) {
    if (cVar3 == '\0') {
      do {
        uStack_d0 = 4;
        pppppppiVar10 = pppppppiVar17;
        func_0x003c1830();
        _getsockopt();
        if (-1 < (int)pppppppiVar10) {
          if (iStack_cc == 0x3d) {
            FUN_003be008(&pcStack_108,&pppppppiStack_c8,0x3d,"connect");
            pcVar8 = pcStack_108;
            if (pcStack_108 == (char *)0x0) {
              pcStack_170 = "!GRPC_ERROR_IS_NONE(error)";
              FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                           ,0xd5,2,"assertion failed: %s");
              _abort();
              goto LAB_003c791c;
            }
            pcStack_98 = pcStack_108;
            pcStack_108 = "";
            pcVar15 = (char *)*param_2;
            if (pcVar8 == pcVar15) {
              if (((ulong)pcVar8 & 1) != 0) {
                FUN_0055293c();
              }
            }
            else {
              *param_2 = (ulong)pcVar8;
              pcStack_98 = "";
              if (((ulong)pcVar15 & 1) != 0) {
                FUN_0055293c(pcVar15);
              }
            }
            if (((ulong)pcStack_108 & 1) != 0) {
              FUN_0055293c();
            }
          }
          else {
            if (iStack_cc == 0x37) {
              FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_client_posix.cc"
                           ,0xe4,2,"kernel out of buffers");
              func_0x00339da8(param_1);
              func_0x003c18e8(pppppppiVar17,param_1 + 0x15);
              goto LAB_003c75e8;
            }
            if (iStack_cc == 0) {
              func_0x003c1a00(param_1[0x19],pppppppiVar17);
              if ((char)*(byte *)((long)param_1 + 0xe7) < '\0') {
                pppppppiVar10 = (int *******)param_1[0x1a];
                ppppppiVar12 = param_1[0x1b];
              }
              else {
                ppppppiVar12 = (int ******)(ulong)*(byte *)((long)param_1 + 0xe7);
                pppppppiVar10 = pppppppiVar11;
              }
              FUN_003c8808(pppppppiVar17,param_1[0x1f],pppppppiVar10,ppppppiVar12);
              *ppppppiVar16 = (int *****)pppppppiVar17;
              pppppppiVar17 = (int *******)0x0;
            }
            else {
              FUN_003be008(&pcStack_110,&pppppppiStack_c8,iStack_cc,"getsockopt(SO_ERROR)");
              pcVar8 = pcStack_110;
              if (pcStack_110 == (char *)0x0) {
                pcStack_170 = "!GRPC_ERROR_IS_NONE(error)";
                FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                             ,0xd5,2,"assertion failed: %s");
                _abort();
                goto LAB_003c791c;
              }
              pcStack_98 = pcStack_110;
              pcStack_110 = "";
              pcVar15 = (char *)*param_2;
              if (pcVar8 == pcVar15) {
                if (((ulong)pcVar8 & 1) != 0) {
                  FUN_0055293c();
                }
              }
              else {
                *param_2 = (ulong)pcVar8;
                pcStack_98 = "";
                if (((ulong)pcVar15 & 1) != 0) {
                  FUN_0055293c(pcVar15);
                }
              }
              if (((ulong)pcStack_110 & 1) != 0) {
                FUN_0055293c();
              }
            }
          }
          goto LAB_003c7308;
        }
        ___error();
      } while (*(int *)pppppppiVar10 == 4);
      ___error();
      FUN_003be008(&pcStack_100,&pppppppiStack_c8,*(int *)pppppppiVar10,"getsockopt");
      pcVar8 = pcStack_100;
      if (pcStack_100 == (char *)0x0) {
        pcStack_170 = "!GRPC_ERROR_IS_NONE(error)";
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                     ,0xd5,2,"assertion failed: %s");
        _abort();
        goto LAB_003c791c;
      }
      pcStack_98 = pcStack_100;
      pcStack_100 = "";
      pcVar15 = (char *)*param_2;
      if (pcVar8 == pcVar15) {
        if (((ulong)pcVar8 & 1) != 0) {
          FUN_0055293c();
        }
      }
      else {
        *param_2 = (ulong)pcVar8;
        pcStack_98 = "";
        if (((ulong)pcVar15 & 1) != 0) {
          FUN_0055293c(pcVar15);
        }
      }
      if (((ulong)pcStack_100 & 1) != 0) {
        FUN_0055293c();
      }
      goto LAB_003c7308;
    }
LAB_003c7374:
    func_0x003c1a00(param_1[0x19],pppppppiVar17);
    func_0x003c1840(pppppppiVar17,0,0,"tcp_client_orphan");
  }
  else {
    if ((uVar13 & 1) != 0) {
      piVar14 = (int *)(uVar13 - 1);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar6) {
          *piVar14 = *piVar14 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    uStack_f8 = uVar13;
    FUN_003be254(&pcStack_98,&uStack_f8,2,"Timeout occurred",0x10);
    pcVar8 = (char *)*param_2;
    if (pcStack_98 == pcVar8) {
LAB_003c72f4:
      if (((ulong)pcVar8 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      *param_2 = (ulong)pcStack_98;
      pcStack_98 = "";
      if (((ulong)pcVar8 & 1) != 0) {
        FUN_0055293c();
        pcVar8 = pcStack_98;
        goto LAB_003c72f4;
      }
    }
    if ((uStack_f8 & 1) != 0) {
      FUN_0055293c();
    }
LAB_003c7308:
    if (cVar3 == '\0') {
      lVar1 = *plRam0000000000b5e9f0;
      uVar13 = (plRam0000000000b5e9f0[1] - lVar1 >> 5) * -0x5555555555555555;
      iVar4 = 0;
      if (uVar13 != 0) {
        iVar4 = (int)((ulong)param_1[0x20] / uVar13);
      }
      iVar4 = (int)param_1[0x20] - iVar4 * (int)uVar13;
      lVar18 = lVar1 + (long)iVar4 * 0x60;
      func_0x00339d8c(lVar18);
      FUN_003c81c0(lVar1 + (long)iVar4 * 0x60 + 0x40,param_1 + 0x20);
      func_0x00339da8(lVar18);
    }
    if (pppppppiVar17 != (int *******)0x0) goto LAB_003c7374;
  }
  iVar4 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = iVar4 + -1;
  pppppppiVar17 = param_1;
  func_0x00339da8();
  uVar13 = *param_2;
  if (uVar13 == 0) goto joined_r0x003c7564;
  pppppppiStack_128 = (int *******)0x0;
  uStack_120 = 0;
  uStack_118 = 0;
  if ((uVar13 & 1) != 0) {
    piVar14 = (int *)(uVar13 - 1);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar14,0x10);
      if (bVar6) {
        *piVar14 = *piVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  puVar9 = &uStack_130;
  uStack_130 = uVar13;
  FUN_003be374(puVar9,0,&pppppppiStack_128);
  if ((uStack_130 & 1) != 0) {
    FUN_0055293c();
  }
  if (((ulong)puVar9 & 1) == 0) {
    pcStack_170 = "ret";
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_client_posix.cc"
                 ,0x106,2,"assertion failed: %s");
    _abort();
LAB_003c791c:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x3c7920);
    (*pcVar7)();
  }
  pcStack_98 = "Failed to connect to remote host: ";
  uStack_90 = 0x22;
  uStack_c0 = uStack_120;
  pppppppiStack_c8 = pppppppiStack_128;
  if (-1 < (long)uStack_118) {
    uStack_c0 = uStack_118 >> 0x38;
    pppppppiStack_c8 = (int *******)&pppppppiStack_128;
  }
  FUN_00575d30(&pppppppiStack_148,&pcStack_98,&pppppppiStack_c8);
  uStack_150 = *param_2;
  if ((uStack_150 & 1) != 0) {
    piVar14 = (int *)(uStack_150 - 1);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar14,0x10);
      if (bVar6) {
        *piVar14 = *piVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  pppppppiVar17 = pppppppiStack_148;
  if (-1 < (char)bStack_131) {
    uStack_140 = (ulong)bStack_131;
    pppppppiVar17 = (int *******)&pppppppiStack_148;
  }
  FUN_003be254(&pcStack_98,&uStack_150,0,pppppppiVar17,uStack_140);
  pcVar8 = (char *)*param_2;
  if (pcStack_98 == pcVar8) {
LAB_003c74b0:
    if (((ulong)pcVar8 & 1) != 0) {
      FUN_0055293c();
    }
  }
  else {
    *param_2 = (ulong)pcStack_98;
    pcStack_98 = "";
    if (((ulong)pcVar8 & 1) != 0) {
      FUN_0055293c();
      pcVar8 = pcStack_98;
      goto LAB_003c74b0;
    }
  }
  if ((uStack_150 & 1) != 0) {
    FUN_0055293c();
  }
  pppppppiStack_158 = (int *******)*param_2;
  if (((ulong)pppppppiStack_158 & 1) != 0) {
    piVar14 = (int *)((long)pppppppiStack_158 + -1);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar14,0x10);
      if (bVar6) {
        *piVar14 = *piVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  ppppppiVar16 = ppppppiStack_e8;
  pppppppiVar17 = pppppppiStack_f0;
  if (-1 < (long)ppppppiStack_e0) {
    ppppppiVar16 = (int ******)((ulong)ppppppiStack_e0 >> 0x38);
    pppppppiVar17 = (int *******)&pppppppiStack_f0;
  }
  FUN_003be254(&pcStack_98,&pppppppiStack_158,4,pppppppiVar17,ppppppiVar16);
  pcVar8 = (char *)*param_2;
  if (pcStack_98 == pcVar8) {
LAB_003c7538:
    if (((ulong)pcVar8 & 1) != 0) {
      FUN_0055293c();
    }
  }
  else {
    *param_2 = (ulong)pcStack_98;
    pcStack_98 = "";
    if (((ulong)pcVar8 & 1) != 0) {
      FUN_0055293c();
      pcVar8 = pcStack_98;
      goto LAB_003c7538;
    }
  }
  pppppppiVar17 = pppppppiStack_158;
  if (((ulong)pppppppiStack_158 & 1) != 0) {
    FUN_0055293c();
  }
  if ((char)bStack_131 < '\0') {
    __ZdlPv();
    pppppppiVar17 = pppppppiStack_148;
  }
  if ((long)uStack_118 < 0) {
    pppppppiVar17 = pppppppiStack_128;
    __ZdlPv();
  }
joined_r0x003c7564:
  if (iVar4 + -1 == 0) {
    func_0x00339d70(param_1);
    FUN_003a2a64(param_1[0x1f]);
    if (*(char *)((long)param_1 + 0xe7) < '\0') {
      __ZdlPv(*pppppppiVar11);
    }
    pppppppiVar17 = param_1;
    __ZdlPv();
  }
  if (cVar3 == '\0') {
    pppppppiStack_160 = (int *******)*param_2;
    if (((ulong)pppppppiStack_160 & 1) != 0) {
      piVar14 = (int *)((long)pppppppiStack_160 + -1);
      do {
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar6) {
          *piVar14 = *piVar14 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_003c2968(ppppppiVar2,&pppppppiStack_160,0,0);
    pppppppiVar17 = pppppppiStack_160;
    if (((ulong)pppppppiStack_160 & 1) != 0) {
      FUN_0055293c();
    }
  }
LAB_003c75e8:
  if ((long)ppppppiStack_e0 < 0) {
    pppppppiVar17 = pppppppiStack_f0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_68) {
    ___stack_chk_fail();
    FUN_0033c494(&pcStack_98);
    FUN_0033c494(&pcStack_110);
    if ((long)ppppppiStack_e0 < 0) {
      __ZdlPv(pppppppiStack_f0);
    }
    pppppppiVar11 = pppppppiVar17;
    __Unwind_Resume();
    pcStack_178 = FUN_003c7ab4;
    pppppppiStack_190 = param_1;
    pppppppiStack_188 = pppppppiVar17;
    puStack_180 = &stack0xfffffffffffffff0;
    func_0x00339d8c();
    ppppppiVar16 = pppppppiVar11[8];
    if (ppppppiVar16 != (int ******)0x0) {
      uStack_1b8 = 0;
      uStack_1b0 = 0;
      uStack_1c0 = 0;
      FUN_003b646c(&uStack_1a0,2,"connect() timed out",0x13,&uStack_1a1,&uStack_1c0);
      FUN_003c1850(ppppppiVar16,&uStack_1a0);
      if ((uStack_1a0 & 1) != 0) {
        FUN_0055293c();
      }
      puStack_198 = (undefined1 *)&uStack_1c0;
      FUN_0033d548(&puStack_198);
    }
    iVar4 = *(int *)(pppppppiVar11 + 0x14);
    *(int *)(pppppppiVar11 + 0x14) = iVar4 + -1;
    func_0x00339da8(pppppppiVar11);
    if (iVar4 + -1 == 0) {
      func_0x00339d70(pppppppiVar11);
      FUN_003a2a64(pppppppiVar11[0x1f]);
      if (*(char *)((long)pppppppiVar11 + 0xe7) < '\0') {
        __ZdlPv(pppppppiVar11[0x1a]);
      }
      __ZdlPv(pppppppiVar11);
    }
    return;
  }
  return;
}



/* Entry: 003c7ab4; end: 003c7ba3;  */

void FUN_003c7ab4(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  ulong uStack_30;
  undefined1 *puStack_28;
  
  func_0x00339d8c();
  lVar2 = *(long *)(param_1 + 0x40);
  if (lVar2 != 0) {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_50 = 0;
    FUN_003b646c(&uStack_30,2,"connect() timed out",0x13,&uStack_31,&uStack_50);
    FUN_003c1850(lVar2,&uStack_30);
    if ((uStack_30 & 1) != 0) {
      FUN_0055293c();
    }
    puStack_28 = (undefined1 *)&uStack_50;
    FUN_0033d548(&puStack_28);
  }
  iVar1 = *(int *)(param_1 + 0xa0) + -1;
  *(int *)(param_1 + 0xa0) = iVar1;
  func_0x00339da8(param_1);
  if (iVar1 == 0) {
    func_0x00339d70(param_1);
    FUN_003a2a64(*(undefined8 *)(param_1 + 0xf8));
    if (*(char *)(param_1 + 0xe7) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0xd0));
    }
    __ZdlPv(param_1);
  }
  return;
}



/* Entry: 003c7ba4; end: 003c7d8b;  */

ulong FUN_003c7ba4(undefined8 param_1,undefined8 *param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  code *pcVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int iVar8;
  int *piVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulong uStack_140;
  ulong uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined4 uStack_e0;
  undefined1 auStack_dc [132];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_e0 = 0xffffffff;
  uStack_e8 = 0;
  *param_2 = 0;
  FUN_003c6840(&uStack_f0,param_4,param_5,auStack_dc,&uStack_e0);
  uVar6 = uStack_e8;
  uVar11 = uStack_f0;
  uVar10 = uStack_e8;
  if (uStack_f0 != uStack_e8) {
    uStack_f0 = 0x36;
    uStack_e8 = uVar11;
    uVar10 = 0x36;
    if ((uVar6 & 1) != 0) {
      FUN_0055293c();
      uVar10 = 0x36;
    }
  }
  uStack_f8 = 0;
  if (uStack_e8 == 0) {
    uVar14 = 0;
  }
  else {
    puVar5 = &uStack_e8;
    FUN_00552b00(puVar5,&uStack_f8);
    uVar14 = (uint)puVar5 ^ 1;
    if ((uStack_f8 & 1) != 0) {
      FUN_0055293c();
    }
  }
  if ((uVar10 & 1) != 0) {
    FUN_0055293c(uVar10);
  }
  if (uVar14 == 0) {
    FUN_003c6b6c(param_3,param_1,uStack_e0,param_4,auStack_dc,param_6,param_2);
    iVar8 = (int)param_1;
  }
  else {
    uStack_100 = uStack_e8;
    if ((uStack_e8 & 1) != 0) {
      piVar9 = (int *)(uStack_e8 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar2) {
          *piVar9 = *piVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_003c1e6c(&uStack_f0,param_1,&uStack_100);
    iVar8 = (int)param_1;
    if ((uStack_100 & 1) != 0) {
      FUN_0055293c();
    }
    param_3 = 0;
  }
  uVar11 = uStack_e8;
  if ((uStack_e8 & 1) != 0) {
    FUN_0055293c();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return param_3;
  }
  ___stack_chk_fail();
  if (iVar8 != 0) {
    func_0x0040cf10();
    FUN_0033c494(&uStack_f8);
    FUN_0033c494(&uStack_f0);
    FUN_0033c494(&uStack_e8);
  }
  uVar6 = uVar11;
  __Unwind_Resume();
  pcStack_108 = FUN_003c7d8c;
  if (0 < (long)uVar6) {
    uVar10 = (plRam0000000000b5e9f0[1] - *plRam0000000000b5e9f0 >> 5) * -0x5555555555555555;
    iVar8 = 0;
    if (uVar10 != 0) {
      iVar8 = (int)(uVar6 / uVar10);
    }
    lVar12 = *plRam0000000000b5e9f0 + (long)((int)uVar6 - iVar8 * (int)uVar10) * 0x60;
    uStack_138 = uVar6;
    puStack_130 = param_2;
    uStack_128 = param_4;
    uStack_120 = param_6;
    uStack_118 = uVar11;
    puStack_110 = &stack0xfffffffffffffff0;
    func_0x00339d8c(lVar12);
    puVar13 = (undefined8 *)(lVar12 + 0x40);
    Hint_Prefetch(*puVar13,0,2,0);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (long)&PTR_LOOP_00a01490 + uVar6;
    puVar5 = &uStack_138;
    puVar7 = puVar13;
    FUN_003c8230(puVar13,puVar5,
                 SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^
                 ((long)&PTR_LOOP_00a01490 + uVar6) * -0x622015f714c7d297);
    if (puVar7 == (undefined8 *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = puVar5[1];
      if (uVar11 == 0) {
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_client_posix.cc"
                     ,0x1ab,2,"assertion failed: %s");
        _abort();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x3c7f34);
        (*pcVar4)();
      }
      *(int *)(uVar11 + 0xa0) = *(int *)(uVar11 + 0xa0) + 1;
      FUN_00554064(puVar13,puVar7,0x10);
    }
    func_0x00339da8(lVar12);
    if (uVar11 != 0) {
      func_0x00339d8c(uVar11);
      lVar12 = *(long *)(uVar11 + 0x40);
      if (lVar12 != 0) {
        *(undefined1 *)(uVar11 + 0x108) = 1;
        uStack_140 = 0;
        FUN_003c1850(lVar12,&uStack_140);
        if ((uStack_140 & 1) != 0) {
          FUN_0055293c();
        }
      }
      iVar8 = *(int *)(uVar11 + 0xa0) + -1;
      *(int *)(uVar11 + 0xa0) = iVar8;
      func_0x00339da8(uVar11);
      if (iVar8 != 0) {
        return (ulong)(lVar12 != 0);
      }
      func_0x00339d70(uVar11);
      FUN_003a2a64(*(undefined8 *)(uVar11 + 0xf8));
      if (*(char *)(uVar11 + 0xe7) < '\0') {
        __ZdlPv(*(undefined8 *)(uVar11 + 0xd0));
      }
      __ZdlPv(uVar11);
      return (ulong)(lVar12 != 0);
    }
  }
  return 0;
}



/* Entry: 003c7d8c; end: 003c7f63;  */

bool FUN_003c7d8c(ulong param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uStack_40;
  ulong uStack_38;
  
  if (0 < (long)param_1) {
    uVar6 = (plRam0000000000b5e9f0[1] - *plRam0000000000b5e9f0 >> 5) * -0x5555555555555555;
    iVar1 = 0;
    if (uVar6 != 0) {
      iVar1 = (int)(param_1 / uVar6);
    }
    lVar7 = *plRam0000000000b5e9f0 + (long)((int)param_1 - iVar1 * (int)uVar6) * 0x60;
    uStack_38 = param_1;
    func_0x00339d8c(lVar7);
    puVar8 = (undefined8 *)(lVar7 + 0x40);
    Hint_Prefetch(*puVar8,0,2,0);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (long)&PTR_LOOP_00a01490 + param_1;
    puVar5 = &uStack_38;
    puVar4 = puVar8;
    FUN_003c8230(puVar8,puVar5,
                 SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^
                 ((long)&PTR_LOOP_00a01490 + param_1) * -0x622015f714c7d297);
    if (puVar4 == (undefined8 *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = puVar5[1];
      if (uVar6 == 0) {
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_client_posix.cc"
                     ,0x1ab,2,"assertion failed: %s");
        _abort();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x3c7f34);
        (*pcVar3)();
      }
      *(int *)(uVar6 + 0xa0) = *(int *)(uVar6 + 0xa0) + 1;
      FUN_00554064(puVar8,puVar4,0x10);
    }
    func_0x00339da8(lVar7);
    if (uVar6 != 0) {
      func_0x00339d8c(uVar6);
      lVar7 = *(long *)(uVar6 + 0x40);
      if (lVar7 != 0) {
        *(undefined1 *)(uVar6 + 0x108) = 1;
        uStack_40 = 0;
        FUN_003c1850(lVar7,&uStack_40);
        if ((uStack_40 & 1) != 0) {
          FUN_0055293c();
        }
      }
      iVar1 = *(int *)(uVar6 + 0xa0) + -1;
      *(int *)(uVar6 + 0xa0) = iVar1;
      func_0x00339da8(uVar6);
      if (iVar1 != 0) {
        return lVar7 != 0;
      }
      func_0x00339d70(uVar6);
      FUN_003a2a64(*(undefined8 *)(uVar6 + 0xf8));
      if (*(char *)(uVar6 + 0xe7) < '\0') {
        __ZdlPv(*(undefined8 *)(uVar6 + 0xd0));
      }
      __ZdlPv(uVar6);
      return lVar7 != 0;
    }
  }
  return false;
}



/* Entry: 003c7f64; end: 003c7fcb;  */

undefined8 * FUN_003c7f64(undefined8 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_003c7fcc(param_1);
    FUN_003c801c(param_1,param_2);
  }
  return param_1;
}



/* Entry: 003c7fcc; end: 003c801b;  */

void FUN_003c7fcc(long *param_1,ulong param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (0x2aaaaaaaaaaaaaa < param_2) {
    FUN_003c80a8();
    puVar2 = (undefined8 *)param_1[1];
    puVar3 = puVar2;
    if (param_2 != 0) {
      puVar3 = puVar2 + param_2 * 0xc;
      lVar4 = param_2 * 0x60;
      do {
        puVar2[9] = 0;
        puVar2[8] = 0;
        puVar2[0xb] = 0;
        puVar2[10] = 0;
        puVar2[5] = 0;
        puVar2[4] = 0;
        puVar2[7] = 0;
        puVar2[6] = 0;
        puVar2[1] = 0;
        *puVar2 = 0;
        puVar2[3] = 0;
        puVar2[2] = 0;
        FUN_00339d50(puVar2);
        puVar2[8] = &UNK_00811030;
        puVar2[9] = 0;
        puVar2[10] = 0;
        puVar2[0xb] = 0;
        puVar2 = puVar2 + 0xc;
        lVar4 = lVar4 + -0x60;
      } while (lVar4 != 0);
    }
    param_1[1] = (long)puVar3;
    return;
  }
  plVar1 = param_1 + 2;
  FUN_003c80bc();
  *param_1 = (long)plVar1;
  param_1[1] = (long)plVar1;
  param_1[2] = (long)(plVar1 + param_2 * 0xc);
  return;
}



/* Entry: 003c801c; end: 003c80a7;  */

void FUN_003c801c(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  puVar2 = puVar1;
  if (param_2 != 0) {
    puVar2 = puVar1 + param_2 * 0xc;
    param_2 = param_2 * 0x60;
    do {
      puVar1[9] = 0;
      puVar1[8] = 0;
      puVar1[0xb] = 0;
      puVar1[10] = 0;
      puVar1[5] = 0;
      puVar1[4] = 0;
      puVar1[7] = 0;
      puVar1[6] = 0;
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1[3] = 0;
      puVar1[2] = 0;
      FUN_00339d50(puVar1);
      puVar1[8] = &UNK_00811030;
      puVar1[9] = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      puVar1 = puVar1 + 0xc;
      param_2 = param_2 + -0x60;
    } while (param_2 != 0);
  }
  *(undefined8 **)(param_1 + 8) = puVar2;
  return;
}



/* Entry: 003c80a8; end: 003c80bb;  */

void FUN_003c80a8(undefined8 param_1,ulong param_2)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  pcVar1 = "vector";
  FUN_0033b32c();
  if (param_2 < 0x2aaaaaaaaaaaaab) {
    __Znwm(param_2 * 0x60);
    return;
  }
  FUN_00349558();
  plVar4 = *(long **)pcVar1;
  lVar5 = *plVar4;
  if (lVar5 != 0) {
    lVar3 = plVar4[1];
    lVar2 = lVar5;
    if (lVar3 != lVar5) {
      do {
        lVar3 = lVar3 + -0x60;
        FUN_003c8184(plVar4 + 2,lVar3);
      } while (lVar3 != lVar5);
      lVar2 = **(long **)pcVar1;
    }
    plVar4[1] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(lVar2);
    return;
  }
  return;
}



/* Entry: 003c80bc; end: 003c80ff;  */

void FUN_003c80bc(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if (param_2 < 0x2aaaaaaaaaaaaab) {
    __Znwm(param_2 * 0x60);
    return;
  }
  FUN_00349558();
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x60;
        FUN_003c8184(plVar3 + 2,lVar2);
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



/* Entry: 003c8100; end: 003c8183;  */

void FUN_003c8100(long *param_1)

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
        lVar2 = lVar2 + -0x60;
        FUN_003c8184(plVar3 + 2,lVar2);
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



/* Entry: 003c8184; end: 003c81bf;  */

void FUN_003c8184(undefined8 param_1,long param_2)

{
  if (*(long *)(param_2 + 0x50) != 0) {
    __ZdlPv(*(long *)(param_2 + 0x40) + -8);
  }
  func_0x00339d70(param_2);
  return;
}



/* Entry: 003c81c0; end: 003c822f;  */

void FUN_003c81c0(undefined8 *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  
  Hint_Prefetch(*param_1,0,2,0);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (long)&PTR_LOOP_00a01490 + *param_2;
  puVar2 = param_1;
  FUN_003c8230(param_1,param_2,
               SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
               ((long)&PTR_LOOP_00a01490 + *param_2) * -0x622015f714c7d297);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00554064(param_1,puVar2,0x10);
  }
  return;
}



/* Entry: 003c8230; end: 003c82c3;  */

undefined1  [16] FUN_003c8230(ulong *param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  long lVar3;
  ulong uVar4;
  byte bVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  undefined8 uVar8;
  byte bVar15;
  undefined1 auVar16 [16];
  
  lVar3 = 0;
  uVar4 = *param_1;
  uVar6 = uVar4 >> 0xc ^ param_3 >> 7;
  bVar5 = (byte)param_3 & 0x7f;
  while( true ) {
    uVar6 = uVar6 & param_1[2];
    uVar8 = *(undefined8 *)(uVar4 + uVar6);
    bVar9 = (byte)((ulong)uVar8 >> 8);
    bVar10 = (byte)((ulong)uVar8 >> 0x10);
    bVar11 = (byte)((ulong)uVar8 >> 0x18);
    bVar12 = (byte)((ulong)uVar8 >> 0x20);
    bVar13 = (byte)((ulong)uVar8 >> 0x28);
    bVar14 = (byte)((ulong)uVar8 >> 0x30);
    bVar15 = (byte)((ulong)uVar8 >> 0x38);
    for (uVar1 = CONCAT17(-(bVar15 == bVar5),
                          CONCAT16(-(bVar14 == bVar5),
                                   CONCAT15(-(bVar13 == bVar5),
                                            CONCAT14(-(bVar12 == bVar5),
                                                     CONCAT13(-(bVar11 == bVar5),
                                                              CONCAT12(-(bVar10 == bVar5),
                                                                       CONCAT11(-(bVar9 == bVar5),
                                                                                -((byte)uVar8 ==
                                                                                 bVar5)))))))) &
                 0x8080808080808080; uVar1 != 0; uVar1 = uVar1 - 1 & uVar1) {
      uVar7 = (uVar1 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar1 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar6 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & param_1[2];
      if (*(long *)(param_1[1] + uVar7 * 0x10) == *param_2) {
        auVar16._8_8_ = param_1[1] + uVar7 * 0x10;
        auVar16._0_8_ = uVar4 + uVar7;
        return auVar16;
      }
    }
    if (CONCAT17(-(bVar15 == 0x80),
                 CONCAT16(-(bVar14 == 0x80),
                          CONCAT15(-(bVar13 == 0x80),
                                   CONCAT14(-(bVar12 == 0x80),
                                            CONCAT13(-(bVar11 == 0x80),
                                                     CONCAT12(-(bVar10 == 0x80),
                                                              CONCAT11(-(bVar9 == 0x80),
                                                                       -((byte)uVar8 == 0x80))))))))
        != 0) break;
    lVar3 = lVar3 + 8;
    uVar6 = lVar3 + uVar6;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2;
  return auVar2 << 0x40;
}



/* Entry: 003c82c4; end: 003c839f;  */

undefined1  [16] FUN_003c82c4(ulong *param_1,long *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  byte bVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  undefined8 uVar9;
  byte bVar16;
  undefined1 auVar17 [16];
  
  lVar6 = 0;
  uVar7 = *param_1;
  Hint_Prefetch(uVar7,0,2,0);
  uVar3 = (long)&PTR_LOOP_00a01490 + *param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar3;
  uVar3 = SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar3 * -0x622015f714c7d297;
  bVar4 = (byte)uVar3 & 0x7f;
  uVar3 = uVar3 >> 7 ^ uVar7 >> 0xc;
  while( true ) {
    uVar3 = uVar3 & param_1[2];
    uVar9 = *(undefined8 *)(uVar7 + uVar3);
    bVar10 = (byte)((ulong)uVar9 >> 8);
    bVar11 = (byte)((ulong)uVar9 >> 0x10);
    bVar12 = (byte)((ulong)uVar9 >> 0x18);
    bVar13 = (byte)((ulong)uVar9 >> 0x20);
    bVar14 = (byte)((ulong)uVar9 >> 0x28);
    bVar15 = (byte)((ulong)uVar9 >> 0x30);
    bVar16 = (byte)((ulong)uVar9 >> 0x38);
    uVar8 = CONCAT17(-(bVar16 == bVar4),
                     CONCAT16(-(bVar15 == bVar4),
                              CONCAT15(-(bVar14 == bVar4),
                                       CONCAT14(-(bVar13 == bVar4),
                                                CONCAT13(-(bVar12 == bVar4),
                                                         CONCAT12(-(bVar11 == bVar4),
                                                                  CONCAT11(-(bVar10 == bVar4),
                                                                           -((byte)uVar9 == bVar4)))
                                                        ))))) & 0x8080808080808080;
    if (uVar8 != 0) {
      do {
        uVar1 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        puVar5 = (ulong *)(uVar3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_1[2]
                          );
        if (*(long *)(param_1[1] + (long)puVar5 * 0x10) == *param_2) {
          uVar9 = 0;
          goto LAB_003c8394;
        }
        uVar8 = uVar8 - 1 & uVar8;
      } while (uVar8 != 0);
    }
    if (CONCAT17(-(bVar16 == 0x80),
                 CONCAT16(-(bVar15 == 0x80),
                          CONCAT15(-(bVar14 == 0x80),
                                   CONCAT14(-(bVar13 == 0x80),
                                            CONCAT13(-(bVar12 == 0x80),
                                                     CONCAT12(-(bVar11 == 0x80),
                                                              CONCAT11(-(bVar10 == 0x80),
                                                                       -((byte)uVar9 == 0x80))))))))
        != 0) break;
    lVar6 = lVar6 + 8;
    uVar3 = lVar6 + uVar3;
  }
  FUN_003c83a0();
  uVar9 = 1;
  puVar5 = param_1;
LAB_003c8394:
  auVar17._8_8_ = uVar9;
  auVar17._0_8_ = puVar5;
  return auVar17;
}



/* Entry: 003c83a0; end: 003c848f;  */

void FUN_003c83a0(ulong *param_1,ulong param_2)

{
  byte bVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar3 = *param_1;
  uVar4 = param_1[2];
  uVar5 = (uVar3 >> 0xc ^ param_2 >> 7) & uVar4;
  uVar8 = *(undefined8 *)(uVar3 + uVar5);
  uVar7 = CONCAT17(-((char)((ulong)uVar8 >> 0x38) < -1),
                   CONCAT16(-((char)((ulong)uVar8 >> 0x30) < -1),
                            CONCAT15(-((char)((ulong)uVar8 >> 0x28) < -1),
                                     CONCAT14(-((char)((ulong)uVar8 >> 0x20) < -1),
                                              CONCAT13(-((char)((ulong)uVar8 >> 0x18) < -1),
                                                       CONCAT12(-((char)((ulong)uVar8 >> 0x10) < -1)
                                                                ,CONCAT11(-((char)((ulong)uVar8 >> 8
                                                                                  ) < -1),
                                                                          -((char)uVar8 < -1))))))))
  ;
  if (uVar7 == 0) {
    lVar6 = 8;
    do {
      uVar5 = uVar5 + lVar6 & uVar4;
      uVar8 = *(undefined8 *)(uVar3 + uVar5);
      uVar7 = CONCAT17(-((char)((ulong)uVar8 >> 0x38) < -1),
                       CONCAT16(-((char)((ulong)uVar8 >> 0x30) < -1),
                                CONCAT15(-((char)((ulong)uVar8 >> 0x28) < -1),
                                         CONCAT14(-((char)((ulong)uVar8 >> 0x20) < -1),
                                                  CONCAT13(-((char)((ulong)uVar8 >> 0x18) < -1),
                                                           CONCAT12(-((char)((ulong)uVar8 >> 0x10) <
                                                                     -1),CONCAT11(-((char)((ulong)
                                                  uVar8 >> 8) < -1),-((char)uVar8 < -1))))))));
      lVar6 = lVar6 + 8;
    } while (uVar7 == 0);
  }
  uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
  uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
  uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
  uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
  puVar2 = (ulong *)(uVar5 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar4);
  if ((*(long *)(uVar3 - 8) == 0) && (*(char *)(uVar3 + (long)puVar2) != -2)) {
    FUN_003c85a8(param_1);
    puVar2 = param_1;
    func_0x00553d3c(param_1,param_2);
    uVar3 = *param_1;
  }
  param_1[3] = param_1[3] + 1;
  *(ulong *)(uVar3 - 8) = *(long *)(uVar3 - 8) - (ulong)(*(char *)(uVar3 + (long)puVar2) == -0x80);
  bVar1 = (byte)param_2 & 0x7f;
  uVar4 = param_1[2];
  *(byte *)(uVar3 + (long)puVar2) = bVar1;
  *(byte *)(uVar3 + (uVar4 & (long)puVar2 - 7U) + (uVar4 & 7)) = bVar1;
  return;
}



/* Entry: 003c8490; end: 003c85a7;  */

void FUN_003c8490(ulong *param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  
  uVar2 = *param_1;
  uVar3 = param_1[1];
  uVar15 = param_1[2];
  param_1[2] = param_2;
  FUN_003b3200();
  if (uVar15 != 0) {
    uVar7 = 0;
    uVar8 = param_1[1];
    do {
      if (-1 < *(char *)(uVar2 + uVar7)) {
        plVar1 = (long *)(uVar3 + uVar7 * 0x10);
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (long)&PTR_LOOP_00a01490 + *plVar1;
        uVar11 = SUB168(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^
                 ((long)&PTR_LOOP_00a01490 + *plVar1) * -0x622015f714c7d297;
        uVar9 = *param_1;
        uVar10 = param_1[2];
        uVar12 = (uVar11 >> 7 ^ uVar9 >> 0xc) & uVar10;
        uVar16 = *(undefined8 *)(uVar9 + uVar12);
        uVar13 = CONCAT17(-((char)((ulong)uVar16 >> 0x38) < -1),
                          CONCAT16(-((char)((ulong)uVar16 >> 0x30) < -1),
                                   CONCAT15(-((char)((ulong)uVar16 >> 0x28) < -1),
                                            CONCAT14(-((char)((ulong)uVar16 >> 0x20) < -1),
                                                     CONCAT13(-((char)((ulong)uVar16 >> 0x18) < -1),
                                                              CONCAT12(-((char)((ulong)uVar16 >>
                                                                               0x10) < -1),
                                                                       CONCAT11(-((char)((ulong)
                                                  uVar16 >> 8) < -1),-((char)uVar16 < -1))))))));
        if (uVar13 == 0) {
          lVar14 = 8;
          do {
            uVar12 = uVar12 + lVar14 & uVar10;
            uVar16 = *(undefined8 *)(uVar9 + uVar12);
            uVar13 = CONCAT17(-((char)((ulong)uVar16 >> 0x38) < -1),
                              CONCAT16(-((char)((ulong)uVar16 >> 0x30) < -1),
                                       CONCAT15(-((char)((ulong)uVar16 >> 0x28) < -1),
                                                CONCAT14(-((char)((ulong)uVar16 >> 0x20) < -1),
                                                         CONCAT13(-((char)((ulong)uVar16 >> 0x18) <
                                                                   -1),CONCAT12(-((char)((ulong)
                                                  uVar16 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar16 >> 8) < -1),
                                                           -((char)uVar16 < -1))))))));
            lVar14 = lVar14 + 8;
          } while (uVar13 == 0);
        }
        uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar13 = uVar12 + ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3) & uVar10;
        bVar4 = (byte)uVar11 & 0x7f;
        *(byte *)(uVar9 + uVar13) = bVar4;
        *(byte *)(uVar9 + (uVar13 - 7 & uVar10) + (uVar10 & 7)) = bVar4;
        lVar14 = *plVar1;
        plVar6 = (long *)(uVar8 + uVar13 * 0x10);
        plVar6[1] = plVar1[1];
        *plVar6 = lVar14;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar15);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(uVar2 - 8);
    return;
  }
  return;
}



/* Entry: 003c85a8; end: 003c8647;  */

ulong * FUN_003c85a8(ulong *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long *plVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  
  lVar9 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar10 = param_1[2];
  if ((uVar10 < 9) || (uVar10 * 0x19 < param_1[3] << 5)) {
    if (*(long *)PTR____stack_chk_guard_00999f88 == lVar9) {
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar17 = param_1[2];
      param_1[2] = uVar10 << 1 | 1;
      puVar8 = param_1;
      FUN_003b3200();
      if (uVar17 != 0) {
        uVar10 = 0;
        uVar11 = param_1[1];
        do {
          if (-1 < *(char *)(uVar2 + uVar10)) {
            plVar1 = (long *)(uVar3 + uVar10 * 0x10);
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (long)&PTR_LOOP_00a01490 + *plVar1;
            uVar14 = SUB168(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^
                     ((long)&PTR_LOOP_00a01490 + *plVar1) * -0x622015f714c7d297;
            uVar12 = *param_1;
            uVar13 = param_1[2];
            uVar15 = (uVar14 >> 7 ^ uVar12 >> 0xc) & uVar13;
            uVar18 = *(undefined8 *)(uVar12 + uVar15);
            uVar16 = CONCAT17(-((char)((ulong)uVar18 >> 0x38) < -1),
                              CONCAT16(-((char)((ulong)uVar18 >> 0x30) < -1),
                                       CONCAT15(-((char)((ulong)uVar18 >> 0x28) < -1),
                                                CONCAT14(-((char)((ulong)uVar18 >> 0x20) < -1),
                                                         CONCAT13(-((char)((ulong)uVar18 >> 0x18) <
                                                                   -1),CONCAT12(-((char)((ulong)
                                                  uVar18 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar18 >> 8) < -1),
                                                           -((char)uVar18 < -1))))))));
            if (uVar16 == 0) {
              lVar9 = 8;
              do {
                uVar15 = uVar15 + lVar9 & uVar13;
                uVar18 = *(undefined8 *)(uVar12 + uVar15);
                uVar16 = CONCAT17(-((char)((ulong)uVar18 >> 0x38) < -1),
                                  CONCAT16(-((char)((ulong)uVar18 >> 0x30) < -1),
                                           CONCAT15(-((char)((ulong)uVar18 >> 0x28) < -1),
                                                    CONCAT14(-((char)((ulong)uVar18 >> 0x20) < -1),
                                                             CONCAT13(-((char)((ulong)uVar18 >> 0x18
                                                                              ) < -1),
                                                                      CONCAT12(-((char)((ulong)
                                                  uVar18 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar18 >> 8) < -1),
                                                           -((char)uVar18 < -1))))))));
                lVar9 = lVar9 + 8;
              } while (uVar16 == 0);
            }
            uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
            uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
            uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
            uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
            uVar16 = uVar15 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3) & uVar13;
            bVar4 = (byte)uVar14 & 0x7f;
            *(byte *)(uVar12 + uVar16) = bVar4;
            *(byte *)(uVar12 + (uVar16 - 7 & uVar13) + (uVar13 & 7)) = bVar4;
            lVar9 = *plVar1;
            plVar7 = (long *)(uVar11 + uVar16 * 0x10);
            plVar7[1] = plVar1[1];
            *plVar7 = lVar9;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 != uVar17);
        puVar8 = (ulong *)(uVar2 - 8);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_0099c620)(puVar8);
        return puVar8;
      }
      return puVar8;
    }
  }
  else {
    param_2 = (long *)&UNK_009e03c0;
    FUN_00553d9c(param_1,&UNK_009e03c0,&stack0xffffffffffffffd8);
    if (*(long *)PTR____stack_chk_guard_00999f88 == lVar9) {
      return param_1;
    }
  }
  ___stack_chk_fail();
  auVar6._8_8_ = 0;
  auVar6._0_8_ = (long)&PTR_LOOP_00a01490 + *param_2;
  return (ulong *)(SUB168(auVar6 * ZEXT816(0x9ddfea08eb382d69),8) ^
                  ((long)&PTR_LOOP_00a01490 + *param_2) * -0x622015f714c7d297);
}



/* Entry: 003c8648; end: 003c8687;  */

ulong FUN_003c8648(undefined8 param_1,long *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (long)&PTR_LOOP_00a01490 + *param_2;
  return SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
         ((long)&PTR_LOOP_00a01490 + *param_2) * -0x622015f714c7d297;
}



/* Entry: 003c8688; end: 003c86ef;  */

int * FUN_003c8688(int *param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  do {
    piVar2 = param_1;
    _sendmsg(param_1,param_2,param_4);
    if (-1 < (long)piVar2) {
      return piVar2;
    }
    piVar3 = piVar2;
    ___error();
    iVar1 = *piVar3;
    *param_3 = iVar1;
  } while (iVar1 == 4);
  return piVar2;
}



/* Entry: 003c86f0; end: 003c8807;  */

long FUN_003c86f0(long param_1,undefined8 *param_2,undefined8 *param_3,long *param_4,long *param_5)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  *param_2 = *(undefined8 *)(param_1 + 0x130);
  *param_3 = *(undefined8 *)(param_1 + 0x138);
  lVar5 = *(long *)(param_1 + 0x130);
  if (lVar5 == *(long *)(param_1 + 0x10)) {
    lVar2 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + 8);
    lVar4 = 0;
    do {
      if (*(long *)(lVar3 + lVar5 * 0x20) == 0) {
        lVar2 = *(long *)(param_1 + 0x138);
        *param_5 = lVar3 + lVar5 * 0x20 + lVar2 + 9;
        uVar6 = (ulong)*(byte *)(lVar3 + lVar5 * 0x20 + 8);
      }
      else {
        lVar5 = lVar3 + lVar5 * 0x20;
        lVar2 = *(long *)(param_1 + 0x138);
        *param_5 = *(long *)(lVar5 + 0x10) + lVar2;
        uVar6 = *(ulong *)(lVar5 + 8);
      }
      param_5[1] = uVar6 - lVar2;
      *param_4 = *param_4 + (uVar6 - lVar2);
      lVar5 = *(long *)(param_1 + 0x130) + 1;
      *(long *)(param_1 + 0x130) = lVar5;
      *(undefined8 *)(param_1 + 0x138) = 0;
      lVar2 = lVar4 + 1;
    } while ((lVar5 != *(long *)(param_1 + 0x10)) &&
            (param_5 = param_5 + 2, bVar1 = lVar4 != 0x103, lVar4 = lVar2, bVar1));
  }
  return lVar2;
}



/* Entry: 003c8808; end: 003c8ed3;  */

/* WARNING: Type propagation algorithm not settling */

qword * FUN_003c8808(ulong *param_1,ulong *param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  code *pcVar7;
  bool bVar8;
  dword dVar9;
  int iVar10;
  undefined8 uVar11;
  dword *pdVar12;
  qword *pqVar13;
  undefined8 *******pppppppuVar14;
  long *plVar15;
  long *plVar16;
  dword *pdVar17;
  segment_command *psVar18;
  int *piVar19;
  int *piVar20;
  undefined4 *puVar21;
  qword *pqVar22;
  ulong *puVar23;
  ulong uVar24;
  ulong *puVar25;
  qword *pqVar26;
  char *pcVar27;
  long lVar28;
  dword *pdVar29;
  int *piVar30;
  ulong uVar31;
  undefined8 uVar32;
  uint uVar33;
  ulong *puVar34;
  ulong *puVar35;
  ulong uVar36;
  ulong *puVar37;
  long lVar38;
  ulong unaff_x25;
  long lVar39;
  ulong unaff_x26;
  uint uVar40;
  double dVar41;
  double dVar42;
  qword *pqStack_1448;
  ulong *puStack_1440;
  ulong *puStack_1438;
  ulong *puStack_1430;
  qword *pqStack_1428;
  undefined1 ***pppuStack_1420;
  code *pcStack_1418;
  char *pcStack_1410;
  qword *pqStack_1408;
  qword *pqStack_1400;
  dword *pdStack_13f8;
  dword *pdStack_13f0;
  undefined1 uStack_13e1;
  dword *pdStack_13e0;
  dword *pdStack_13d8;
  ulong auStack_13d0 [2];
  undefined4 uStack_13c0;
  dword *pdStack_13b8;
  undefined4 uStack_13b0;
  undefined8 uStack_13a8;
  undefined4 uStack_13a0;
  undefined4 uStack_139c;
  int iStack_1394;
  ulong uStack_1390;
  ulong uStack_1388;
  undefined8 uStack_1380;
  dword adStack_1378 [1040];
  long lStack_338;
  ulong *puStack_330;
  ulong uStack_328;
  ulong *puStack_320;
  dword *pdStack_318;
  ulong *puStack_310;
  ulong *puStack_308;
  long *plStack_300;
  qword *pqStack_2f8;
  undefined1 **ppuStack_2f0;
  code *pcStack_2e8;
  char *pcStack_2e0;
  qword *pqStack_2d8;
  qword *pqStack_2d0;
  qword aqStack_2c8 [3];
  undefined1 uStack_2a9;
  ulong uStack_2a8;
  qword *pqStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  dword *pdStack_288;
  undefined4 uStack_280;
  ulong *puStack_278;
  undefined4 uStack_270;
  undefined1 *puStack_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  qword *pqStack_258;
  undefined1 auStack_250 [24];
  ulong auStack_238 [8];
  long lStack_1f8;
  ulong *puStack_1f0;
  ulong uStack_1e8;
  long lStack_1e0;
  ulong uStack_1d8;
  ulong *puStack_1d0;
  dword *pdStack_1c8;
  ulong *puStack_1c0;
  qword *pqStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  ulong uStack_188;
  ulong uStack_180;
  ulong *puStack_178;
  dword *pdStack_170;
  dword *pdStack_168;
  undefined8 uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  uint uStack_144;
  long *aplStack_140 [4];
  long lStack_120;
  long *plStack_118;
  undefined8 *******pppppppuStack_100;
  ulong uStack_f8;
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
  undefined4 auStack_80 [4];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_178 = param_1;
  uStack_160 = param_3;
  uStack_158 = param_4;
  if ((param_2 == (ulong *)0x0) || (*param_2 == 0)) {
    uVar33 = 0x2000;
    uStack_144 = 0x400000;
    uVar40 = 0x100;
    pdStack_168 = (dword *)&UNK_00004000;
    pdStack_170 = &MACH_HEADER.cputype;
  }
  else {
    uVar36 = 0;
    pdStack_170 = &MACH_HEADER.cputype;
    pdVar29 = &section_000000b8.reserved2;
    uStack_144 = 0x400000;
    pdVar17 = &dylib_command_00001ff0.dylib.current_version;
    lVar38 = 8;
    pdStack_168 = (dword *)&UNK_00004000;
    do {
      pdVar12 = (dword *)((undefined8 *)(param_2[1] + lVar38) + -1);
      uVar32 = *(undefined8 *)(param_2[1] + lVar38);
      uVar11 = uVar32;
      _strcmp(uVar32,"grpc.experimental.tcp_read_chunk_size");
      if ((int)uVar11 == 0) {
        unaff_x25 = unaff_x25 & 0xffffffff00000000 | 0x2000000;
        FUN_003a2c94(pdVar12,(ulong)pdVar17 & 0xffffffff | 0x100000000,unaff_x25);
        pdVar17 = pdVar12;
      }
      else {
        uVar11 = uVar32;
        _strcmp(uVar32,"grpc.experimental.tcp_min_read_chunk_size");
        if ((int)uVar11 == 0) {
          unaff_x26 = unaff_x26 & 0xffffffff00000000 | 0x2000000;
          FUN_003a2c94(pdVar12,(ulong)pdVar17 & 0xffffffff | 0x100000000,unaff_x26);
          pdVar29 = pdVar12;
        }
        else {
          uVar11 = uVar32;
          _strcmp(uVar32,"grpc.experimental.tcp_max_read_chunk_size");
          if ((int)uVar11 == 0) {
            uStack_150 = uStack_150 & 0xffffffff00000000 | 0x2000000;
            FUN_003a2c94(pdVar12,(ulong)pdVar17 & 0xffffffff | 0x100000000);
            uStack_144 = (uint)pdVar12;
          }
          else {
            uVar11 = uVar32;
            _strcmp(uVar32,"grpc.experimental.tcp_tx_zerocopy_enabled");
            if ((int)uVar11 == 0) {
              FUN_003a2de0(pdVar12,0);
            }
            else {
              uVar11 = uVar32;
              _strcmp(uVar32,"grpc.experimental.tcp_tx_zerocopy_send_bytes_threshold");
              if ((int)uVar11 == 0) {
                uStack_180 = uStack_180 & 0xffffffff00000000 | 0x7fffffff;
                FUN_003a2c94(pdVar12,0x4000);
                pdStack_168 = pdVar12;
              }
              else {
                _strcmp(uVar32,"grpc.experimental.tcp_tx_zerocopy_max_simultaneous_sends");
                if ((int)uVar32 == 0) {
                  uStack_188 = uStack_188 & 0xffffffff00000000 | 0x7fffffff;
                  FUN_003a2c94(pdVar12,4);
                  pdStack_170 = pdVar12;
                }
              }
            }
          }
        }
      }
      uVar33 = (uint)pdVar17;
      uVar40 = (uint)pdVar29;
      uVar36 = uVar36 + 1;
      lVar38 = lVar38 + 0x20;
    } while (uVar36 < *param_2);
  }
  uVar2 = uVar40;
  if ((int)uStack_144 <= (int)uVar40) {
    uVar2 = uStack_144;
  }
  if ((int)uVar2 <= (int)uVar33) {
    uVar40 = uVar33;
  }
  if ((int)uStack_144 <= (int)uVar40) {
    uVar40 = uStack_144;
  }
  uVar36 = (ulong)uVar40;
  pqVar13 = &section_00000388.addr;
  __Znwm();
  pdVar17 = (dword *)(pqVar13 + 5);
  *(long *)pdVar17 = 1;
  FUN_00339d50(pqVar13 + 0x2d);
  pqVar13[0x35] = 0;
  puVar35 = pqVar13 + 0x49;
  lVar38 = (long)(pqVar13 + 0x4c);
  pqVar13[0x53] = 0;
  pqVar13[0x4a] = 0;
  *puVar35 = 0;
  pqVar13[0x4c] = 0;
  pqVar13[0x4b] = 0;
  pqVar13[0x4e] = 0;
  pqVar13[0x4d] = 0;
  pqVar13[0x50] = 0;
  pqVar13[0x4f] = 0;
  pqVar13[0x52] = 0;
  pqVar13[0x51] = 0;
  FUN_003c9e04(pqVar13 + 0x60,pdStack_170,(long)(int)pdStack_168);
  puVar37 = puStack_178;
  pqVar13[0x73] = 0;
  *pqVar13 = (qword)&PTR_FUN_009e03e0;
  if (0x7ffffffffffffff7 < uStack_158) {
    func_0x0033b318(&pppppppuStack_100);
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x3c8de4);
    (*pcVar7)();
  }
  if (uStack_158 < 0x17) {
    uStack_f0 = CONCAT17((char)uStack_158,(undefined7)uStack_f0);
    pppppppuVar14 = &pppppppuStack_100;
    uVar24 = uStack_158;
    if (uStack_158 != 0) goto LAB_003c8adc;
  }
  else {
    uVar24 = (uStack_158 & 0xfffffffffffffff8) + 8;
    if ((uStack_158 | 7) != 0x17) {
      uVar24 = uStack_158 | 7;
    }
    pppppppuVar14 = (undefined8 *******)(uVar24 + 1);
    __Znwm();
    uStack_f0 = uVar24 + 1 | 0x8000000000000000;
    uStack_f8 = uStack_158;
    pppppppuStack_100 = pppppppuVar14;
LAB_003c8adc:
    uVar24 = uStack_158;
    _memmove(pppppppuVar14,uStack_160,uStack_158);
  }
  *(undefined1 *)((long)pppppppuVar14 + uVar24) = 0;
  if (*(char *)((long)pqVar13 + 0x25f) < '\0') {
    __ZdlPv(*puVar35);
  }
  pqVar13[0x4a] = uStack_f8;
  *puVar35 = (ulong)pppppppuStack_100;
  pqVar13[0x4b] = uStack_f0;
  puVar34 = puVar37;
  FUN_003c1830();
  *(dword *)(pqVar13 + 2) = (dword)puVar34;
  func_0x003d5b44(aplStack_140,param_2);
  lStack_120 = aplStack_140[0][2];
  plVar15 = (long *)aplStack_140[0][3];
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 1;
    do {
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plStack_118 = plVar15;
  FUN_003d77d0(&pppppppuStack_100,lStack_120,uStack_160,uStack_158);
  func_0x003cb644(pqVar13 + 0x4f,&pppppppuStack_100);
  FUN_00377730(&pppppppuStack_100);
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 1;
    do {
      lVar28 = *plVar1;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar28 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
  }
  if (aplStack_140[0] != (long *)0x0) {
    plVar15 = aplStack_140[0] + 1;
    do {
      lVar28 = *plVar15;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar8) {
        *plVar15 = lVar28 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar28 + -1 == 0) {
      (**(code **)(*aplStack_140[0] + 8))();
    }
  }
  FUN_003839ec(&pppppppuStack_100,pqVar13 + 0x4f,0x3a8,0x3a8);
  func_0x003cb644(pqVar13 + 0x51,&pppppppuStack_100);
  pqVar13[0x53] = uStack_f0;
  FUN_00388a1c(&pppppppuStack_100);
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
  pppppppuStack_100 = (undefined8 *******)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  auStack_80[0] = 0x80;
  FUN_003bdeb4(&lStack_120);
  dVar9 = *(dword *)(pqVar13 + 2);
  _getsockname(dVar9,&pppppppuStack_100,auStack_80);
  if ((int)dVar9 < 0) {
LAB_003c8c58:
    pcVar27 = "";
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(lVar38);
  }
  else {
    FUN_003a0d08(aplStack_140,&pppppppuStack_100);
    func_0x003bdb4c(&lStack_120,aplStack_140);
    lVar28 = lStack_120;
    FUN_0035d18c(aplStack_140);
    if (lVar28 != 0) goto LAB_003c8c58;
    pcVar27 = (char *)&lStack_120;
    FUN_00375c3c();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar38);
  }
  pqVar13[0x73] = 0;
  pqVar13[0x3a] = 0;
  pqVar13[0x39] = 0;
  pqVar13[0x3c] = 0;
  pqVar13[0x3b] = 0;
  pqVar13[3] = (qword)(double)(int)uVar40;
  *(uint *)(pqVar13 + 7) = uVar2;
  *(uint *)((long)pqVar13 + 0x3c) = uStack_144;
  pqVar13[4] = 0;
  *(undefined2 *)((long)pqVar13 + 0x14) = 1;
  *(undefined4 *)(pqVar13 + 0x5e) = 0xffffffff;
  *(undefined2 *)((long)pqVar13 + 0x2f4) = 0x100;
  pqVar13[0x5d] = 0;
  if ((bRam0000000000b5ea18 & 1) == 0) {
    iVar10 = 0xb5ea18;
    ___cxa_guard_acquire();
    if (iVar10 != 0) {
      func_0x003c2d68();
      uRam0000000000b5ea10 = (undefined1)iVar10;
      ___cxa_guard_release(0xb5ea18);
    }
  }
  *(undefined1 *)(pqVar13 + 0x74) = uRam0000000000b5ea10;
  *(undefined4 *)((long)pqVar13 + 0x3a4) = 1;
  pqVar13[5] = 1;
  pqVar13[6] = 0;
  pqVar13[1] = (qword)puVar37;
  FUN_003ecf38(pqVar13 + 8);
  iVar10 = (int)pqVar13 + 0x2a8;
  FUN_00339d50();
  pqVar13[0x54] = 0;
  pqVar13[0x3e] = (qword)FUN_003c8ed4;
  pqVar13[0x3f] = (qword)pqVar13;
  pqVar13[0x40] = 0;
  FUN_003c179c();
  pcVar7 = FUN_003c9738;
  if (iVar10 == 0) {
    pcVar7 = FUN_003c9c7c;
  }
  pqVar13[0x42] = (qword)pcVar7;
  pqVar13[0x43] = (qword)pqVar13;
  pqVar13[0x44] = 0;
  *(undefined4 *)(pqVar13 + 0x36) = 1;
  *(undefined1 *)((long)pqVar13 + 0x1b4) = 0;
  FUN_003c1770();
  if (iVar10 != 0) {
    do {
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pdVar17,0x10);
      if (bVar8) {
        *(long *)pdVar17 = *(long *)pdVar17 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    pqVar13[0x5f] = 0;
    pcVar27 = (char *)(pqVar13 + 0x45);
    pqVar13[0x46] = (qword)FUN_003c9d2c;
    pqVar13[0x47] = (qword)pqVar13;
    pqVar13[0x48] = 0;
    func_0x003c18f8(pqVar13[1]);
  }
  plVar15 = &lStack_120;
  FUN_0035d18c();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
    return pqVar13;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0xb5ea18);
  FUN_0035d18c(&lStack_120);
  plVar16 = plVar15;
  __Unwind_Resume();
  puStack_1c0 = puVar37;
  uStack_1b0 = 0xb5e000;
  pcStack_198 = FUN_003c8ed4;
  lStack_1f8 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar1 = plVar16 + 0x2d;
  puStack_1f0 = puVar35;
  uStack_1e8 = uVar36;
  lStack_1e0 = lVar38;
  uStack_1d8 = (ulong)uVar2;
  puStack_1d0 = param_2;
  pdStack_1c8 = pdVar17;
  pqStack_1b8 = pqVar13;
  plStack_1a8 = plVar15;
  puStack_1a0 = &stack0xfffffffffffffff0;
  func_0x00339d8c(plVar1);
  pqStack_2d0 = (qword *)0x0;
  if (*(long *)pcVar27 == 0) {
    lVar38 = plVar16[0x35];
    iVar10 = *(int *)((long)plVar16 + 0x3a4);
    if ((*(ulong *)(lVar38 + 0x20) < (ulong)(long)iVar10) && (*(ulong *)(lVar38 + 0x10) < 4)) {
      iVar6 = iVar10;
      if (iVar10 <= (int)(double)plVar16[3]) {
        iVar6 = (int)(double)plVar16[3];
      }
      iVar6 = iVar6 - (int)*(ulong *)(lVar38 + 0x20);
      iVar3 = (int)plVar16[7];
      if ((int)plVar16[7] <= iVar10) {
        iVar3 = iVar10;
      }
      iVar4 = *(int *)((long)plVar16 + 0x3c);
      if (*(int *)((long)plVar16 + 0x3c) <= iVar10) {
        iVar4 = iVar10;
      }
      if (iVar6 <= iVar4) {
        iVar4 = iVar6;
      }
      iVar10 = iVar3;
      if (iVar3 <= iVar6) {
        iVar10 = iVar4;
      }
      FUN_003b639c(auStack_238,plVar16 + 0x4f,(long)iVar3,(long)iVar10);
      FUN_003ecd90(lVar38,auStack_238);
      if (*(char *)((long)plVar16 + 0x15) == '\0') {
        *(undefined1 *)((long)plVar16 + 0x15) = 1;
        lVar38 = plVar16[0x4f];
        func_0x00339d8c(lVar38 + 0x40);
        if (*(char *)(lVar38 + 0x80) != '\0') {
          pcStack_2e0 = "!shutdown_";
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/resource_quota/memory_quota.h"
                       ,0x13a,2,"assertion failed: %s");
          _abort();
          goto LAB_003c95fc;
        }
        lVar39 = *(long *)(lVar38 + 0x18);
        pdVar17 = &MACH_HEADER.flags;
        __Znwm();
        uVar11 = *(undefined8 *)(lVar39 + 0x30);
        lVar28 = *(long *)(lVar39 + 0x38);
        if (lVar28 != 0) {
          plVar15 = (long *)(lVar28 + 8);
          do {
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar8) {
              *plVar15 = *plVar15 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        plVar15 = (long *)(pdVar17 + 2);
        *plVar15 = 1;
        *(undefined ***)pdVar17 = &PTR_FUN_009e07f8;
        psVar18 = &segment_command_00000020;
        __Znwm();
        *(undefined ***)psVar18 = &PTR_FUN_009e0448;
        *(undefined8 *)psVar18->segname = uVar11;
        *(long *)(psVar18->segname + 8) = lVar28;
        psVar18->vmaddr = (qword)plVar16;
        *(segment_command **)(pdVar17 + 4) = psVar18;
        do {
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar8) {
            *plVar15 = *plVar15 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        pdStack_288 = pdVar17;
        FUN_003d62f4(lVar39 + 0x30,&pdStack_288);
        if (pdStack_288 != (dword *)0x0) {
          plVar15 = (long *)(pdStack_288 + 2);
          do {
            lVar28 = *plVar15;
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar8) {
              *plVar15 = lVar28 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar28 + -1 == 0) {
            (**(code **)(*(long *)pdStack_288 + 0x10))();
          }
        }
        FUN_0038aa60(lVar38 + 0x90,pdVar17);
        func_0x00339da8(lVar38 + 0x40);
      }
    }
    lVar38 = plVar16[0x35];
    uVar24 = *(ulong *)(lVar38 + 0x10);
    if (3 < uVar24) {
      uVar24 = 4;
    }
    if (uVar24 != 0) {
      puVar37 = (ulong *)(*(long *)(lVar38 + 8) + 8);
      puVar34 = auStack_238;
      uVar36 = uVar24;
      do {
        if (puVar37[-1] == 0) {
          *puVar34 = (ulong)((long)puVar37 + 1);
          uVar31 = (ulong)(byte)*puVar37;
        }
        else {
          *puVar34 = puVar37[1];
          uVar31 = *puVar37;
        }
        puVar34[1] = uVar31;
        puVar34 = puVar34 + 2;
        puVar37 = puVar37 + 4;
        uVar36 = uVar36 - 1;
      } while (uVar36 != 0);
    }
    if (*(long *)(lVar38 + 0x20) == 0) {
      pcStack_2e0 = "tcp->incoming_buffer->length != 0";
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_posix.cc"
                   ,0x2f0,2,"assertion failed: %s");
      _abort();
LAB_003c95fc:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x3c9600);
      (*pcVar7)();
    }
    puVar34 = (ulong *)0x0;
    puVar37 = auStack_238;
    pdVar17 = (dword *)(auStack_238 + 1);
    param_2 = (ulong *)((long)&MACH_HEADER.magic + 1);
LAB_003c9100:
    uVar36 = uVar24;
    *(undefined4 *)(plVar16 + 0x36) = 1;
    pdStack_288 = (dword *)0x0;
    uStack_280 = 0;
    uStack_270 = (undefined4)uVar36;
    bVar8 = *(char *)((long)plVar16 + 0x1b4) != '\0';
    puStack_268 = (undefined1 *)0x0;
    if (bVar8) {
      puStack_268 = auStack_250;
    }
    uStack_260 = 0;
    if (bVar8) {
      uStack_260 = 0x18;
    }
    uStack_25c = 0;
    puStack_278 = puVar37;
    while( true ) {
      piVar19 = (int *)(ulong)*(uint *)(plVar16 + 2);
      _recvmsg(piVar19,&pdStack_288,0);
      if (-1 < (long)piVar19) break;
      ___error();
      if (*piVar19 != 4) {
        if ((ulong *)(long)*(int *)((long)plVar16 + 0x3a4) <= puVar34) goto LAB_003c93cc;
        ___error();
        if (*piVar19 == 0x23) {
          if (puVar34 != (ulong *)0x0) {
            if ((int)plVar16[0x36] != 0) goto LAB_003c93d4;
            dVar41 = (double)plVar16[4];
            goto LAB_003c9204;
          }
          dVar42 = (double)plVar16[3];
          dVar41 = (double)plVar16[4];
          if (dVar41 <= dVar42 * 0.8) {
            dVar41 = dVar41 * 0.01 + dVar42 * 0.99;
          }
          else if (dVar41 <= dVar42 + dVar42) {
            dVar41 = dVar42 + dVar42;
          }
          plVar16[3] = (long)dVar41;
          plVar16[4] = 0;
          *(undefined4 *)(plVar16 + 0x36) = 0;
          goto LAB_003c941c;
        }
        puVar21 = (undefined4 *)plVar16[0x35];
        func_0x003ecf8c();
        ___error();
        FUN_003be008(&uStack_298,&pqStack_2a0,*puVar21,"recvmsg");
        uVar24 = uStack_298;
        if (uStack_298 == 0) {
          pcStack_2e0 = "!GRPC_ERROR_IS_NONE(error)";
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                       ,0xd5,2,"assertion failed: %s");
          _abort();
          goto LAB_003c95fc;
        }
        uStack_298 = 0x36;
        uStack_290 = uVar24;
        FUN_003ca4c0(&pqStack_258,&uStack_290,plVar16);
        pqVar13 = pqStack_2d0;
        if (pqStack_258 == pqStack_2d0) {
LAB_003c9298:
          if (((ulong)pqVar13 & 1) != 0) {
            FUN_0055293c();
          }
        }
        else {
          pqStack_2d0 = pqStack_258;
          pqStack_258 = (qword *)(segment_command_00000020.segname + 0xe);
          if (((ulong)pqVar13 & 1) != 0) {
            FUN_0055293c();
            pqVar13 = pqStack_258;
            goto LAB_003c9298;
          }
        }
        if ((uVar24 & 1) != 0) {
          FUN_0055293c(uVar24);
        }
        if ((uStack_298 & 1) != 0) {
          FUN_0055293c();
        }
        goto LAB_003c9478;
      }
    }
    if (piVar19 == (int *)0x0) {
      if (puVar34 < (ulong *)(long)*(int *)((long)plVar16 + 0x3a4)) {
        func_0x003ecf8c(plVar16[0x35]);
        aqStack_2c8[1] = 0;
        aqStack_2c8[2] = 0;
        aqStack_2c8[0] = 0;
        FUN_003b646c(&uStack_2a8,2,"Socket closed",0xd,&uStack_2a9,aqStack_2c8);
        FUN_003ca4c0(&pqStack_2a0,&uStack_2a8,plVar16);
        pqVar13 = pqStack_2d0;
        if (pqStack_2a0 == pqStack_2d0) {
LAB_003c93a4:
          if (((ulong)pqVar13 & 1) != 0) {
            FUN_0055293c();
          }
        }
        else {
          pqStack_2d0 = pqStack_2a0;
          pqStack_2a0 = (qword *)(segment_command_00000020.segname + 0xe);
          if (((ulong)pqVar13 & 1) != 0) {
            FUN_0055293c();
            pqVar13 = pqStack_2a0;
            goto LAB_003c93a4;
          }
        }
        if ((uStack_2a8 & 1) != 0) {
          FUN_0055293c();
        }
        pqStack_258 = aqStack_2c8;
        FUN_0033d548(&pqStack_258);
        goto LAB_003c9478;
      }
LAB_003c93cc:
      *(undefined4 *)(plVar16 + 0x36) = 1;
      goto LAB_003c93d4;
    }
    dVar41 = (double)plVar16[4] + (double)piVar19;
    plVar16[4] = (long)dVar41;
    puVar34 = (ulong *)((long)piVar19 + (long)puVar34);
    if ((int)plVar16[0x36] != 0) {
      if (puVar34 == *(ulong **)(plVar16[0x35] + 0x20)) goto LAB_003c93d4;
      uVar24 = 0;
      if (uVar36 != 0) {
        uVar24 = 0;
        pdVar29 = pdVar17;
        do {
          piVar30 = *(int **)pdVar29;
          piVar20 = (int *)((long)piVar19 - (long)piVar30);
          if (piVar19 < piVar30) {
            puVar37[uVar24 * 2] = *(long *)(pdVar29 + -2) + (long)piVar19;
            auStack_238[uVar24 * 2 + 1] = (long)piVar30 - (long)piVar19;
            uVar24 = uVar24 + 1;
            piVar20 = (int *)0x0;
          }
          pdVar29 = pdVar29 + 4;
          uVar36 = uVar36 - 1;
          piVar19 = piVar20;
        } while (uVar36 != 0);
      }
      goto LAB_003c9100;
    }
LAB_003c9204:
    dVar42 = (double)plVar16[3];
    if (dVar41 <= dVar42 * 0.8) {
      dVar41 = dVar41 * 0.01 + dVar42 * 0.99;
    }
    else if (dVar41 <= dVar42 + dVar42) {
      dVar41 = dVar42 + dVar42;
    }
    plVar16[3] = (long)dVar41;
    plVar16[4] = 0;
LAB_003c93d4:
    pqVar13 = pqStack_2d0;
    if (pqStack_2d0 != (qword *)0x0) {
      pqStack_2d0 = (qword *)0x0;
      pqStack_258 = (qword *)(segment_command_00000020.segname + 0xe);
      if (((ulong)pqVar13 & 1) != 0) {
        FUN_0055293c();
      }
    }
    if ((char)plVar16[0x74] == '\0') {
      puVar25 = *(ulong **)(plVar16[0x35] + 0x20);
      lVar38 = (long)puVar25 - (long)puVar34;
      if (puVar34 <= puVar25 && lVar38 != 0) {
        FUN_003eda78(plVar16[0x35],lVar38,plVar16 + 8);
      }
LAB_003c9478:
      if (((ulong)pqStack_2d0 & 1) != 0) {
        pcVar27 = (char *)((long)pqStack_2d0 + -1);
        do {
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(pcVar27,0x10);
          if (bVar8) {
            *(int *)pcVar27 = *(int *)pcVar27 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        FUN_0055293c();
      }
      goto LAB_003c9498;
    }
    iVar10 = *(int *)((long)plVar16 + 0x3a4) - (int)puVar34;
    *(int *)((long)plVar16 + 0x3a4) = iVar10;
    if (iVar10 < 1) {
      *(undefined4 *)((long)plVar16 + 0x3a4) = 1;
      puVar37 = (ulong *)(plVar16 + 8);
      FUN_003ed3c8(plVar16[0x35],puVar34,puVar37);
      FUN_003ed190(puVar37,plVar16[0x35]);
      goto LAB_003c9478;
    }
    FUN_003ed3c8(plVar16[0x35],puVar34,plVar16 + 8);
LAB_003c941c:
    func_0x00339da8(plVar1);
    puVar25 = (ulong *)(plVar16 + 0x3d);
    func_0x003c18d8(plVar16[1]);
  }
  else {
    FUN_003450b4(&pqStack_2d0,pcVar27);
    func_0x003ecf8c(plVar16[0x35]);
    func_0x003ecf8c(plVar16 + 8);
LAB_003c9498:
    puVar34 = (ulong *)plVar16[0x39];
    plVar16[0x39] = 0;
    plVar16[0x35] = 0;
    func_0x00339da8(plVar1);
    pqStack_2d8 = pqStack_2d0;
    if (((ulong)pqStack_2d0 & 1) != 0) {
      pcVar27 = (char *)((long)pqStack_2d0 + -1);
      do {
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pcVar27,0x10);
        if (bVar8) {
          *(int *)pcVar27 = *(int *)pcVar27 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    puVar25 = puVar34;
    FUN_00342584(auStack_238,puVar34,&pqStack_2d8);
    if (((ulong)pqStack_2d8 & 1) != 0) {
      FUN_0055293c();
    }
    plVar15 = plVar16 + 5;
    do {
      lVar38 = *plVar15;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar8) {
        *plVar15 = lVar38 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar38 + -1 == 0) {
      FUN_003cb798(plVar16);
    }
  }
  pqVar13 = pqStack_2d0;
  if (((ulong)pqStack_2d0 & 1) != 0) {
    FUN_0055293c();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1f8) {
    return pqVar13;
  }
  ___stack_chk_fail();
  FUN_0033c494(&pqStack_2a0);
  FUN_0033c494(&uStack_2a8);
  pqStack_258 = aqStack_2c8;
  FUN_0033d548(&pqStack_258);
  FUN_0033c494(&pqStack_2d0);
  pqVar22 = pqVar13;
  __Unwind_Resume();
  pcStack_2e8 = FUN_003c9738;
  lStack_338 = *(long *)PTR____stack_chk_guard_00999f88;
  pqVar26 = (qword *)*puVar25;
  puStack_330 = puVar35;
  uStack_328 = uVar36;
  puStack_320 = param_2;
  pdStack_318 = pdVar17;
  puStack_310 = puVar37;
  puStack_308 = puVar34;
  plStack_300 = plVar1;
  pqStack_2f8 = pqVar13;
  ppuStack_2f0 = &puStack_1a0;
  if (pqVar26 == (qword *)0x0) {
    puVar35 = (ulong *)pqVar22[0x73];
    if (puVar35 == (ulong *)0x0) {
      pqVar13 = pqVar22;
      puVar34 = puVar25;
      FUN_003ca670();
      if (((ulong)pqVar13 & 1) == 0) {
LAB_003c99d0:
        FUN_003caafc();
        pqVar13 = pqVar22;
        goto LAB_003c9ae4;
      }
    }
    else {
      puVar37 = pqVar22 + 0x60;
      puVar34 = puVar35 + 0x25;
      pdVar17 = adStack_1378;
      do {
        uStack_1380 = 0;
        puVar23 = puVar35;
        FUN_003c86f0(puVar35,&uStack_1388,&uStack_1390,&uStack_1380,adStack_1378);
        auStack_13d0[1] = 0;
        uStack_13c0 = 0;
        uStack_13b0 = SUB84(puVar23,0);
        uStack_139c = 0;
        do {
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar34,0x10);
          if (bVar8) {
            *puVar34 = *puVar34 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        pdStack_13b8 = pdVar17;
        FUN_003cac9c(puVar37,*(undefined4 *)(pqVar22 + 0x6b),puVar35);
        *(int *)(pqVar22 + 0x6b) = *(int *)(pqVar22 + 0x6b) + 1;
        iStack_1394 = 0;
        if (pqVar22[0x5d] != 0) {
          if (*(char *)((long)pqVar22 + 0x2f5) != '\0') {
            FUN_003cac04();
            goto LAB_003c9b8c;
          }
          *(undefined1 *)((long)pqVar22 + 0x2f5) = 0;
          FUN_003ca5c0(pqVar22);
        }
        uStack_13a8 = 0;
        uStack_13a0 = 0;
        uVar36 = (ulong)*(uint *)(pqVar22 + 2);
        FUN_003c8688(uVar36,auStack_13d0 + 1,&iStack_1394,0x4000000);
        if ((long)uVar36 < 0) {
          FUN_003cac5c(puVar37);
          if (iStack_1394 == 0x23) {
            puVar35[0x26] = uStack_1388;
            puVar35[0x27] = uStack_1390;
            puVar34 = (ulong *)((long)&segment_command_00000020.cmd + 3);
            goto LAB_003c99d0;
          }
          if (iStack_1394 == 0x20) {
            FUN_003be008(&pdStack_13e0,&uStack_13e1,0x20,"sendmsg");
            pdVar17 = pdStack_13e0;
            if (pdStack_13e0 == (dword *)0x0) {
              pcStack_1410 = "!GRPC_ERROR_IS_NONE(error)";
              FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                           ,0xd5,2,"assertion failed: %s");
              _abort();
LAB_003c9b8c:
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x3c9b90);
              (*pcVar7)();
            }
            pdStack_13e0 = (dword *)(segment_command_00000020.segname + 0xe);
            pdStack_13d8 = pdVar17;
            FUN_003ca4c0(auStack_13d0,&pdStack_13d8,pqVar22);
            uVar36 = *puVar25;
            if (auStack_13d0[0] == uVar36) {
LAB_003c999c:
              if ((uVar36 & 1) != 0) {
                FUN_0055293c();
              }
            }
            else {
              *puVar25 = auStack_13d0[0];
              auStack_13d0[0] = 0x36;
              if ((uVar36 & 1) != 0) {
                FUN_0055293c();
                uVar36 = auStack_13d0[0];
                goto LAB_003c999c;
              }
            }
            if (((ulong)pdVar17 & 1) != 0) {
              FUN_0055293c(pdVar17);
            }
            if (((ulong)pdStack_13e0 & 1) != 0) {
              FUN_0055293c();
            }
            FUN_003ca5c0(pqVar22);
          }
          else {
            FUN_003be008(&pdStack_13f8,&uStack_13e1,iStack_1394,"sendmsg");
            pdVar17 = pdStack_13f8;
            if (pdStack_13f8 == (dword *)0x0) {
              pcStack_1410 = "!GRPC_ERROR_IS_NONE(error)";
              FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                           ,0xd5,2,"assertion failed: %s");
              _abort();
              goto LAB_003c9b8c;
            }
            pdStack_13f8 = (dword *)(segment_command_00000020.segname + 0xe);
            pdStack_13f0 = pdVar17;
            FUN_003ca4c0(auStack_13d0,&pdStack_13f0,pqVar22);
            uVar36 = *puVar25;
            if (auStack_13d0[0] == uVar36) {
LAB_003c9a38:
              if ((uVar36 & 1) != 0) {
                FUN_0055293c();
              }
            }
            else {
              *puVar25 = auStack_13d0[0];
              auStack_13d0[0] = 0x36;
              if ((uVar36 & 1) != 0) {
                FUN_0055293c();
                uVar36 = auStack_13d0[0];
                goto LAB_003c9a38;
              }
            }
            if (((ulong)pdVar17 & 1) != 0) {
              FUN_0055293c(pdVar17);
            }
            if (((ulong)pdStack_13f8 & 1) != 0) {
              FUN_0055293c();
            }
            FUN_003ca5c0(pqVar22);
          }
          goto LAB_003c9a60;
        }
        *(int *)(pqVar22 + 0x5e) = *(int *)(pqVar22 + 0x5e) + (int)uVar36;
        func_0x003c87b0(puVar35,uStack_1380);
      } while (puVar35[0x26] != puVar35[2]);
      uVar36 = *puVar25;
      if ((uVar36 != 0) && (*puVar25 = 0, (uVar36 & 1) != 0)) {
        FUN_0055293c();
      }
LAB_003c9a60:
      do {
        uVar36 = *puVar34;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar34,0x10);
        if (bVar8) {
          *puVar34 = uVar36 - 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (uVar36 - 1 == 0) {
        func_0x003ecf8c(puVar35);
        FUN_003cb420(puVar37,puVar35);
      }
    }
    puVar34 = (ulong *)pqVar22[0x3a];
    pqVar22[0x3a] = 0;
    pqVar22[0x73] = 0;
    pqStack_1408 = (qword *)*puVar25;
    if (((ulong)pqStack_1408 & 1) != 0) {
      pcVar27 = (char *)((long)pqStack_1408 + -1);
      do {
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pcVar27,0x10);
        if (bVar8) {
          *(int *)pcVar27 = *(int *)pcVar27 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    FUN_00342584(adStack_1378,puVar34,&pqStack_1408);
    pqVar13 = pqStack_1408;
    if (((ulong)pqStack_1408 & 1) != 0) {
      FUN_0055293c();
    }
    pdVar29 = (dword *)(pqVar22 + 5);
    do {
      lVar38 = *(long *)pdVar29;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pdVar29,0x10);
      if (bVar8) {
        *(long *)pdVar29 = lVar38 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar38 + -1 == 0) {
      FUN_003cb798();
      pqVar13 = pqVar22;
    }
  }
  else {
    puVar35 = (ulong *)pqVar22[0x3a];
    pqVar22[0x3a] = 0;
    puVar37 = (ulong *)pqVar22[0x73];
    if (puVar37 != (ulong *)0x0) {
      puVar34 = puVar37 + 0x25;
      do {
        uVar36 = *puVar34;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar34,0x10);
        if (bVar8) {
          *puVar34 = uVar36 - 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (uVar36 - 1 == 0) {
        func_0x003ecf8c(puVar37);
        FUN_003cb420(pqVar22 + 0x60,puVar37);
      }
      pqVar22[0x73] = 0;
      pqVar26 = (qword *)*puVar25;
    }
    if (((ulong)pqVar26 & 1) != 0) {
      pcVar27 = (char *)((long)pqVar26 + -1);
      do {
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pcVar27,0x10);
        if (bVar8) {
          *(int *)pcVar27 = *(int *)pcVar27 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    puVar34 = puVar35;
    pqStack_1400 = pqVar26;
    FUN_00342584(adStack_1378,puVar35,&pqStack_1400);
    pqVar13 = pqStack_1400;
    if (((ulong)pqStack_1400 & 1) != 0) {
      FUN_0055293c();
    }
    pdVar29 = (dword *)(pqVar22 + 5);
    do {
      lVar38 = *(long *)pdVar29;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pdVar29,0x10);
      if (bVar8) {
        *(long *)pdVar29 = lVar38 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar38 + -1 == 0) {
      FUN_003cb798();
      pqVar13 = pqVar22;
    }
  }
LAB_003c9ae4:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_338) {
    return pqVar13;
  }
  ___stack_chk_fail();
  if ((auStack_13d0[0] & 1) != 0) {
    FUN_0055293c();
  }
  if (((ulong)pdVar17 & 1) != 0) {
    FUN_0055293c(pdVar17);
  }
  if (((ulong)pdStack_13f8 & 1) != 0) {
    FUN_0055293c();
  }
  __Unwind_Resume(pqVar13);
  pqVar22 = pqVar13;
  func_0x0040cf10(pqVar13);
  pcStack_1418 = FUN_003c9c7c;
  puStack_1440 = puVar37;
  puStack_1438 = puVar35;
  puStack_1430 = puVar25;
  pqStack_1428 = pqVar13;
  pppuStack_1420 = &ppuStack_2f0;
  func_0x00339d8c(pqRam0000000000b5e9f8);
  iVar10 = iRam0000000000b5ea00;
  iRam0000000000b5ea00 = iRam0000000000b5ea00 + -1;
  uVar11 = pqRam0000000000b5e9f8;
  func_0x00339da8();
  if (1 < iVar10) {
    pqStack_1448 = (qword *)*puVar34;
    if (((ulong)pqStack_1448 & 1) != 0) {
      pcVar27 = (char *)((long)pqStack_1448 - 1);
      do {
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pcVar27,0x10);
        if (bVar8) {
          *(int *)pcVar27 = *(int *)pcVar27 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    FUN_003c9738(pqVar22,&pqStack_1448);
    if (((ulong)pqStack_1448 & 1) != 0) {
      FUN_0055293c();
    }
    return pqStack_1448;
  }
  FUN_00774474();
  func_0x0040cf10();
  FUN_0033c494(&pqStack_1448);
  __Unwind_Resume(uVar11);
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_posix.cc"
               ,0x530,2,"Error handling is not supported for this platform");
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_posix.cc"
               ,0x531,2,"assertion failed: %s");
  _abort();
  pqVar22 = &segment_command_00000020.vmsize;
  __Znwm();
  pqVar13 = pqVar22;
  FUN_00339d50();
  pqRam0000000000b5e9f8 = pqVar22;
  return pqVar13;
}



/* Entry: 003c8ed4; end: 003c9737;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_003c8ed4(qword param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  dword *pdVar8;
  segment_command *psVar9;
  int *piVar10;
  int *piVar11;
  undefined4 *puVar12;
  ulong *puVar13;
  undefined8 uVar14;
  ulong *puVar15;
  ulong uVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  long lVar20;
  long lVar21;
  int *piVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  ulong *puVar26;
  ulong *puVar27;
  ulong *unaff_x22;
  char *unaff_x23;
  long lVar28;
  long *plVar29;
  double dVar30;
  double dVar31;
  ulong uStack_12b8;
  ulong *puStack_12b0;
  ulong *puStack_12a8;
  ulong *puStack_12a0;
  char *pcStack_1298;
  undefined1 **ppuStack_1290;
  code *pcStack_1288;
  char *pcStack_1280;
  char *pcStack_1278;
  char *pcStack_1270;
  char *pcStack_1268;
  char *pcStack_1260;
  undefined1 uStack_1251;
  char *pcStack_1250;
  char *pcStack_1248;
  ulong auStack_1240 [2];
  undefined4 uStack_1230;
  char *pcStack_1228;
  undefined4 uStack_1220;
  undefined8 uStack_1218;
  undefined4 uStack_1210;
  undefined4 uStack_120c;
  int iStack_1204;
  ulong uStack_1200;
  ulong uStack_11f8;
  undefined8 uStack_11f0;
  char acStack_11e8 [4160];
  long lStack_1a8;
  undefined1 *puStack_160;
  code *pcStack_158;
  char *pcStack_150;
  char *pcStack_148;
  char *pcStack_140;
  char acStack_138 [31];
  undefined1 uStack_119;
  ulong uStack_118;
  char *pcStack_110;
  ulong uStack_108;
  ulong uStack_100;
  dword *pdStack_f8;
  undefined4 uStack_f0;
  ulong *puStack_e8;
  undefined4 uStack_e0;
  undefined1 *puStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  char *pcStack_c8;
  undefined1 auStack_c0 [24];
  ulong auStack_a8 [8];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar21 = param_1 + 0x168;
  func_0x00339d8c(lVar21);
  pcStack_140 = (char *)0x0;
  if (*param_2 == 0) {
    lVar24 = *(long *)(param_1 + 0x1a8);
    iVar3 = *(int *)(param_1 + 0x3a4);
    if ((*(ulong *)(lVar24 + 0x20) < (ulong)(long)iVar3) && (*(ulong *)(lVar24 + 0x10) < 4)) {
      iVar5 = iVar3;
      if (iVar3 <= (int)*(double *)(param_1 + 0x18)) {
        iVar5 = (int)*(double *)(param_1 + 0x18);
      }
      iVar5 = iVar5 - (int)*(ulong *)(lVar24 + 0x20);
      iVar1 = *(int *)(param_1 + 0x38);
      if (*(int *)(param_1 + 0x38) <= iVar3) {
        iVar1 = iVar3;
      }
      iVar2 = *(int *)(param_1 + 0x3c);
      if (*(int *)(param_1 + 0x3c) <= iVar3) {
        iVar2 = iVar3;
      }
      if (iVar5 <= iVar2) {
        iVar2 = iVar5;
      }
      iVar3 = iVar1;
      if (iVar1 <= iVar5) {
        iVar3 = iVar2;
      }
      FUN_003b639c(auStack_a8,param_1 + 0x278,(long)iVar1,(long)iVar3);
      FUN_003ecd90(lVar24,auStack_a8);
      if (*(char *)(param_1 + 0x15) == '\0') {
        *(undefined1 *)(param_1 + 0x15) = 1;
        lVar24 = *(long *)(param_1 + 0x278);
        func_0x00339d8c(lVar24 + 0x40);
        if (*(char *)(lVar24 + 0x80) != '\0') {
          pcStack_150 = "!shutdown_";
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/resource_quota/memory_quota.h"
                       ,0x13a,2,"assertion failed: %s");
          _abort();
          goto LAB_003c95fc;
        }
        lVar28 = *(long *)(lVar24 + 0x18);
        pdVar8 = &MACH_HEADER.flags;
        __Znwm();
        uVar14 = *(undefined8 *)(lVar28 + 0x30);
        lVar20 = *(long *)(lVar28 + 0x38);
        if (lVar20 != 0) {
          plVar29 = (long *)(lVar20 + 8);
          do {
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar29,0x10);
            if (bVar7) {
              *plVar29 = *plVar29 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        plVar29 = (long *)(pdVar8 + 2);
        *plVar29 = 1;
        *(undefined ***)pdVar8 = &PTR_FUN_009e07f8;
        psVar9 = &segment_command_00000020;
        __Znwm();
        *(undefined ***)psVar9 = &PTR_FUN_009e0448;
        *(undefined8 *)psVar9->segname = uVar14;
        *(long *)(psVar9->segname + 8) = lVar20;
        psVar9->vmaddr = param_1;
        *(segment_command **)(pdVar8 + 4) = psVar9;
        do {
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar7) {
            *plVar29 = *plVar29 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        pdStack_f8 = pdVar8;
        FUN_003d62f4(lVar28 + 0x30,&pdStack_f8);
        if (pdStack_f8 != (dword *)0x0) {
          plVar29 = (long *)(pdStack_f8 + 2);
          do {
            lVar20 = *plVar29;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar29,0x10);
            if (bVar7) {
              *plVar29 = lVar20 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar20 + -1 == 0) {
            (**(code **)(*(long *)pdStack_f8 + 0x10))();
          }
        }
        FUN_0038aa60(lVar24 + 0x90,pdVar8);
        func_0x00339da8(lVar24 + 0x40);
      }
    }
    lVar24 = *(long *)(param_1 + 0x1a8);
    uVar16 = *(ulong *)(lVar24 + 0x10);
    if (3 < uVar16) {
      uVar16 = 4;
    }
    if (uVar16 != 0) {
      puVar26 = (ulong *)(*(long *)(lVar24 + 8) + 8);
      puVar27 = auStack_a8;
      uVar25 = uVar16;
      do {
        if (puVar26[-1] == 0) {
          *puVar27 = (ulong)((long)puVar26 + 1);
          uVar23 = (ulong)(byte)*puVar26;
        }
        else {
          *puVar27 = puVar26[1];
          uVar23 = *puVar26;
        }
        puVar27[1] = uVar23;
        puVar27 = puVar27 + 2;
        puVar26 = puVar26 + 4;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
    }
    if (*(long *)(lVar24 + 0x20) == 0) {
      pcStack_150 = "tcp->incoming_buffer->length != 0";
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_posix.cc"
                   ,0x2f0,2,"assertion failed: %s");
      _abort();
LAB_003c95fc:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x3c9600);
      (*pcVar6)();
    }
    uVar25 = 0;
    unaff_x22 = auStack_a8;
    unaff_x23 = (char *)(auStack_a8 + 1);
LAB_003c9100:
    uVar23 = uVar16;
    *(undefined4 *)(param_1 + 0x1b0) = 1;
    pdStack_f8 = (dword *)0x0;
    uStack_f0 = 0;
    uStack_e0 = (undefined4)uVar23;
    bVar7 = *(char *)(param_1 + 0x1b4) != '\0';
    puStack_d8 = (undefined1 *)0x0;
    if (bVar7) {
      puStack_d8 = auStack_c0;
    }
    uStack_d0 = 0;
    if (bVar7) {
      uStack_d0 = 0x18;
    }
    uStack_cc = 0;
    puStack_e8 = unaff_x22;
    while( true ) {
      piVar10 = (int *)(ulong)*(uint *)(param_1 + 0x10);
      _recvmsg(piVar10,&pdStack_f8,0);
      if (-1 < (long)piVar10) break;
      ___error();
      if (*piVar10 != 4) {
        if ((ulong)(long)*(int *)(param_1 + 0x3a4) <= uVar25) goto LAB_003c93cc;
        ___error();
        if (*piVar10 == 0x23) {
          if (uVar25 != 0) {
            if (*(int *)(param_1 + 0x1b0) != 0) goto LAB_003c93d4;
            dVar30 = *(double *)(param_1 + 0x20);
            goto LAB_003c9204;
          }
          dVar31 = *(double *)(param_1 + 0x18);
          dVar30 = *(double *)(param_1 + 0x20);
          if (dVar30 <= dVar31 * 0.8) {
            dVar30 = dVar30 * 0.01 + dVar31 * 0.99;
          }
          else if (dVar30 <= dVar31 + dVar31) {
            dVar30 = dVar31 + dVar31;
          }
          *(double *)(param_1 + 0x18) = dVar30;
          *(undefined8 *)(param_1 + 0x20) = 0;
          *(undefined4 *)(param_1 + 0x1b0) = 0;
          goto LAB_003c941c;
        }
        puVar12 = *(undefined4 **)(param_1 + 0x1a8);
        func_0x003ecf8c();
        ___error();
        FUN_003be008(&uStack_108,&pcStack_110,*puVar12,"recvmsg");
        uVar16 = uStack_108;
        if (uStack_108 == 0) {
          pcStack_150 = "!GRPC_ERROR_IS_NONE(error)";
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                       ,0xd5,2,"assertion failed: %s");
          _abort();
          goto LAB_003c95fc;
        }
        uStack_108 = 0x36;
        uStack_100 = uVar16;
        FUN_003ca4c0(&pcStack_c8,&uStack_100,param_1);
        pcVar17 = pcStack_140;
        if (pcStack_c8 == pcStack_140) {
LAB_003c9298:
          if (((ulong)pcVar17 & 1) != 0) {
            FUN_0055293c();
          }
        }
        else {
          pcStack_140 = pcStack_c8;
          pcStack_c8 = segment_command_00000020.segname + 0xe;
          if (((ulong)pcVar17 & 1) != 0) {
            FUN_0055293c();
            pcVar17 = pcStack_c8;
            goto LAB_003c9298;
          }
        }
        if ((uVar16 & 1) != 0) {
          FUN_0055293c(uVar16);
        }
        if ((uStack_108 & 1) != 0) {
          FUN_0055293c();
        }
        goto LAB_003c9478;
      }
    }
    if (piVar10 == (int *)0x0) {
      if (uVar25 < (ulong)(long)*(int *)(param_1 + 0x3a4)) {
        func_0x003ecf8c(*(undefined8 *)(param_1 + 0x1a8));
        acStack_138[8] = '\0';
        acStack_138[9] = '\0';
        acStack_138[10] = '\0';
        acStack_138[0xb] = '\0';
        acStack_138[0xc] = '\0';
        acStack_138[0xd] = '\0';
        acStack_138[0xe] = '\0';
        acStack_138[0xf] = '\0';
        acStack_138[0x10] = '\0';
        acStack_138[0x11] = '\0';
        acStack_138[0x12] = '\0';
        acStack_138[0x13] = '\0';
        acStack_138[0x14] = '\0';
        acStack_138[0x15] = '\0';
        acStack_138[0x16] = '\0';
        acStack_138[0x17] = '\0';
        acStack_138[0] = '\0';
        acStack_138[1] = '\0';
        acStack_138[2] = '\0';
        acStack_138[3] = '\0';
        acStack_138[4] = '\0';
        acStack_138[5] = '\0';
        acStack_138[6] = '\0';
        acStack_138[7] = '\0';
        FUN_003b646c(&uStack_118,2,"Socket closed",0xd,&uStack_119,acStack_138);
        FUN_003ca4c0(&pcStack_110,&uStack_118,param_1);
        pcVar17 = pcStack_140;
        if (pcStack_110 == pcStack_140) {
LAB_003c93a4:
          if (((ulong)pcVar17 & 1) != 0) {
            FUN_0055293c();
          }
        }
        else {
          pcStack_140 = pcStack_110;
          pcStack_110 = segment_command_00000020.segname + 0xe;
          if (((ulong)pcVar17 & 1) != 0) {
            FUN_0055293c();
            pcVar17 = pcStack_110;
            goto LAB_003c93a4;
          }
        }
        if ((uStack_118 & 1) != 0) {
          FUN_0055293c();
        }
        pcStack_c8 = acStack_138;
        FUN_0033d548(&pcStack_c8);
        goto LAB_003c9478;
      }
LAB_003c93cc:
      *(undefined4 *)(param_1 + 0x1b0) = 1;
      goto LAB_003c93d4;
    }
    dVar30 = *(double *)(param_1 + 0x20) + (double)piVar10;
    *(double *)(param_1 + 0x20) = dVar30;
    uVar25 = (long)piVar10 + uVar25;
    if (*(int *)(param_1 + 0x1b0) != 0) {
      if (uVar25 == *(ulong *)(*(long *)(param_1 + 0x1a8) + 0x20)) goto LAB_003c93d4;
      uVar16 = 0;
      if (uVar23 != 0) {
        uVar16 = 0;
        pcVar17 = unaff_x23;
        do {
          piVar22 = *(int **)pcVar17;
          piVar11 = (int *)((long)piVar10 - (long)piVar22);
          if (piVar10 < piVar22) {
            unaff_x22[uVar16 * 2] = *(long *)(pcVar17 + -8) + (long)piVar10;
            auStack_a8[uVar16 * 2 + 1] = (long)piVar22 - (long)piVar10;
            uVar16 = uVar16 + 1;
            piVar11 = (int *)0x0;
          }
          pcVar17 = pcVar17 + 0x10;
          uVar23 = uVar23 - 1;
          piVar10 = piVar11;
        } while (uVar23 != 0);
      }
      goto LAB_003c9100;
    }
LAB_003c9204:
    dVar31 = *(double *)(param_1 + 0x18);
    if (dVar30 <= dVar31 * 0.8) {
      dVar30 = dVar30 * 0.01 + dVar31 * 0.99;
    }
    else if (dVar30 <= dVar31 + dVar31) {
      dVar30 = dVar31 + dVar31;
    }
    *(double *)(param_1 + 0x18) = dVar30;
    *(undefined8 *)(param_1 + 0x20) = 0;
LAB_003c93d4:
    pcVar17 = pcStack_140;
    if (pcStack_140 != (char *)0x0) {
      pcStack_140 = (char *)0x0;
      pcStack_c8 = segment_command_00000020.segname + 0xe;
      if (((ulong)pcVar17 & 1) != 0) {
        FUN_0055293c();
      }
    }
    if (*(char *)(param_1 + 0x3a0) == '\0') {
      uVar16 = *(ulong *)(*(long *)(param_1 + 0x1a8) + 0x20);
      lVar24 = uVar16 - uVar25;
      if (uVar25 <= uVar16 && lVar24 != 0) {
        FUN_003eda78(*(long *)(param_1 + 0x1a8),lVar24,param_1 + 0x40);
      }
LAB_003c9478:
      if (((ulong)pcStack_140 & 1) != 0) {
        pcVar17 = pcStack_140 + -1;
        do {
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pcVar17,0x10);
          if (bVar7) {
            *(int *)pcVar17 = *(int *)pcVar17 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        FUN_0055293c();
      }
      goto LAB_003c9498;
    }
    iVar3 = *(int *)(param_1 + 0x3a4) - (int)uVar25;
    *(int *)(param_1 + 0x3a4) = iVar3;
    if (iVar3 < 1) {
      *(undefined4 *)(param_1 + 0x3a4) = 1;
      unaff_x22 = (ulong *)(param_1 + 0x40);
      FUN_003ed3c8(*(undefined8 *)(param_1 + 0x1a8),uVar25,unaff_x22);
      FUN_003ed190(unaff_x22,*(undefined8 *)(param_1 + 0x1a8));
      goto LAB_003c9478;
    }
    FUN_003ed3c8(*(undefined8 *)(param_1 + 0x1a8),uVar25,param_1 + 0x40);
LAB_003c941c:
    func_0x00339da8(lVar21);
    puVar26 = (ulong *)(param_1 + 0x1e8);
    func_0x003c18d8(*(undefined8 *)(param_1 + 8));
  }
  else {
    FUN_003450b4(&pcStack_140,param_2);
    func_0x003ecf8c(*(undefined8 *)(param_1 + 0x1a8));
    func_0x003ecf8c(param_1 + 0x40);
LAB_003c9498:
    puVar26 = *(ulong **)(param_1 + 0x1c8);
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    func_0x00339da8(lVar21);
    pcStack_148 = pcStack_140;
    if (((ulong)pcStack_140 & 1) != 0) {
      pcVar17 = pcStack_140 + -1;
      do {
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pcVar17,0x10);
        if (bVar7) {
          *(int *)pcVar17 = *(int *)pcVar17 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_00342584(auStack_a8,puVar26,&pcStack_148);
    if (((ulong)pcStack_148 & 1) != 0) {
      FUN_0055293c();
    }
    plVar29 = (long *)(param_1 + 0x28);
    do {
      lVar21 = *plVar29;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar7) {
        *plVar29 = lVar21 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar21 + -1 == 0) {
      FUN_003cb798(param_1);
    }
  }
  pcVar17 = pcStack_140;
  if (((ulong)pcStack_140 & 1) != 0) {
    FUN_0055293c();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  FUN_0033c494(&pcStack_110);
  FUN_0033c494(&uStack_118);
  pcStack_c8 = acStack_138;
  FUN_0033d548(&pcStack_c8);
  FUN_0033c494(&pcStack_140);
  __Unwind_Resume();
  pcStack_158 = FUN_003c9738;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar18 = (char *)*puVar26;
  puStack_160 = &stack0xfffffffffffffff0;
  if (pcVar18 == (char *)0x0) {
    puVar27 = *(ulong **)(pcVar17 + 0x398);
    if (puVar27 == (ulong *)0x0) {
      pcVar18 = pcVar17;
      puVar15 = puVar26;
      FUN_003ca670();
      if (((ulong)pcVar18 & 1) == 0) {
LAB_003c99d0:
        FUN_003caafc();
        pcVar18 = pcVar17;
        goto LAB_003c9ae4;
      }
    }
    else {
      unaff_x22 = (ulong *)(pcVar17 + 0x300);
      puVar15 = puVar27 + 0x25;
      unaff_x23 = acStack_11e8;
      do {
        uStack_11f0 = 0;
        puVar13 = puVar27;
        FUN_003c86f0(puVar27,&uStack_11f8,&uStack_1200,&uStack_11f0,acStack_11e8);
        auStack_1240[1] = 0;
        uStack_1230 = 0;
        uStack_1220 = SUB84(puVar13,0);
        uStack_120c = 0;
        do {
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar15,0x10);
          if (bVar7) {
            *puVar15 = *puVar15 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        pcStack_1228 = unaff_x23;
        FUN_003cac9c(unaff_x22,*(undefined4 *)(pcVar17 + 0x358),puVar27);
        *(int *)(pcVar17 + 0x358) = *(int *)(pcVar17 + 0x358) + 1;
        iStack_1204 = 0;
        if (*(long *)(pcVar17 + 0x2e8) != 0) {
          if (pcVar17[0x2f5] != '\0') {
            FUN_003cac04();
            goto LAB_003c9b8c;
          }
          pcVar17[0x2f5] = 0;
          FUN_003ca5c0(pcVar17);
        }
        uStack_1218 = 0;
        uStack_1210 = 0;
        uVar16 = (ulong)*(uint *)(pcVar17 + 0x10);
        FUN_003c8688(uVar16,auStack_1240 + 1,&iStack_1204,0x4000000);
        if ((long)uVar16 < 0) {
          FUN_003cac5c(unaff_x22);
          if (iStack_1204 == 0x23) {
            puVar27[0x26] = uStack_11f8;
            puVar27[0x27] = uStack_1200;
            puVar15 = (ulong *)((long)&segment_command_00000020.cmd + 3);
            goto LAB_003c99d0;
          }
          if (iStack_1204 == 0x20) {
            FUN_003be008(&pcStack_1250,&uStack_1251,0x20,"sendmsg");
            unaff_x23 = pcStack_1250;
            if (pcStack_1250 == (char *)0x0) {
              pcStack_1280 = "!GRPC_ERROR_IS_NONE(error)";
              FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                           ,0xd5,2,"assertion failed: %s");
              _abort();
LAB_003c9b8c:
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x3c9b90);
              (*pcVar6)();
            }
            pcStack_1250 = segment_command_00000020.segname + 0xe;
            pcStack_1248 = unaff_x23;
            FUN_003ca4c0(auStack_1240,&pcStack_1248,pcVar17);
            uVar16 = *puVar26;
            if (auStack_1240[0] == uVar16) {
LAB_003c999c:
              if ((uVar16 & 1) != 0) {
                FUN_0055293c();
              }
            }
            else {
              *puVar26 = auStack_1240[0];
              auStack_1240[0] = 0x36;
              if ((uVar16 & 1) != 0) {
                FUN_0055293c();
                uVar16 = auStack_1240[0];
                goto LAB_003c999c;
              }
            }
            if (((ulong)unaff_x23 & 1) != 0) {
              FUN_0055293c(unaff_x23);
            }
            if (((ulong)pcStack_1250 & 1) != 0) {
              FUN_0055293c();
            }
            FUN_003ca5c0(pcVar17);
          }
          else {
            FUN_003be008(&pcStack_1268,&uStack_1251,iStack_1204,"sendmsg");
            unaff_x23 = pcStack_1268;
            if (pcStack_1268 == (char *)0x0) {
              pcStack_1280 = "!GRPC_ERROR_IS_NONE(error)";
              FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                           ,0xd5,2,"assertion failed: %s");
              _abort();
              goto LAB_003c9b8c;
            }
            pcStack_1268 = segment_command_00000020.segname + 0xe;
            pcStack_1260 = unaff_x23;
            FUN_003ca4c0(auStack_1240,&pcStack_1260,pcVar17);
            uVar16 = *puVar26;
            if (auStack_1240[0] == uVar16) {
LAB_003c9a38:
              if ((uVar16 & 1) != 0) {
                FUN_0055293c();
              }
            }
            else {
              *puVar26 = auStack_1240[0];
              auStack_1240[0] = 0x36;
              if ((uVar16 & 1) != 0) {
                FUN_0055293c();
                uVar16 = auStack_1240[0];
                goto LAB_003c9a38;
              }
            }
            if (((ulong)unaff_x23 & 1) != 0) {
              FUN_0055293c(unaff_x23);
            }
            if (((ulong)pcStack_1268 & 1) != 0) {
              FUN_0055293c();
            }
            FUN_003ca5c0(pcVar17);
          }
          goto LAB_003c9a60;
        }
        *(int *)(pcVar17 + 0x2f0) = *(int *)(pcVar17 + 0x2f0) + (int)uVar16;
        func_0x003c87b0(puVar27,uStack_11f0);
      } while (puVar27[0x26] != puVar27[2]);
      uVar16 = *puVar26;
      if ((uVar16 != 0) && (*puVar26 = 0, (uVar16 & 1) != 0)) {
        FUN_0055293c();
      }
LAB_003c9a60:
      do {
        uVar16 = *puVar15;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar15,0x10);
        if (bVar7) {
          *puVar15 = uVar16 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar16 - 1 == 0) {
        func_0x003ecf8c(puVar27);
        FUN_003cb420(unaff_x22,puVar27);
      }
    }
    puVar15 = *(ulong **)(pcVar17 + 0x1d0);
    *(undefined8 *)(pcVar17 + 0x1d0) = 0;
    *(undefined8 *)(pcVar17 + 0x398) = 0;
    pcStack_1278 = (char *)*puVar26;
    if (((ulong)pcStack_1278 & 1) != 0) {
      pcVar18 = pcStack_1278 + -1;
      do {
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pcVar18,0x10);
        if (bVar7) {
          *(int *)pcVar18 = *(int *)pcVar18 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_00342584(acStack_11e8,puVar15,&pcStack_1278);
    pcVar18 = pcStack_1278;
    if (((ulong)pcStack_1278 & 1) != 0) {
      FUN_0055293c();
    }
    plVar29 = (long *)(pcVar17 + 0x28);
    do {
      lVar21 = *plVar29;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar7) {
        *plVar29 = lVar21 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar21 + -1 == 0) {
      FUN_003cb798();
      pcVar18 = pcVar17;
    }
  }
  else {
    puVar27 = *(ulong **)(pcVar17 + 0x1d0);
    *(undefined8 *)(pcVar17 + 0x1d0) = 0;
    unaff_x22 = *(ulong **)(pcVar17 + 0x398);
    if (unaff_x22 != (ulong *)0x0) {
      puVar15 = unaff_x22 + 0x25;
      do {
        uVar16 = *puVar15;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar15,0x10);
        if (bVar7) {
          *puVar15 = uVar16 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar16 - 1 == 0) {
        func_0x003ecf8c(unaff_x22);
        FUN_003cb420((long)pcVar17 + 0x300,unaff_x22);
      }
      *(undefined8 *)(pcVar17 + 0x398) = 0;
      pcVar18 = (char *)*puVar26;
    }
    if (((ulong)pcVar18 & 1) != 0) {
      pcVar19 = pcVar18 + -1;
      do {
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pcVar19,0x10);
        if (bVar7) {
          *(int *)pcVar19 = *(int *)pcVar19 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar15 = puVar27;
    pcStack_1270 = pcVar18;
    FUN_00342584(acStack_11e8,puVar27,&pcStack_1270);
    pcVar18 = pcStack_1270;
    if (((ulong)pcStack_1270 & 1) != 0) {
      FUN_0055293c();
    }
    plVar29 = (long *)(pcVar17 + 0x28);
    do {
      lVar21 = *plVar29;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar7) {
        *plVar29 = lVar21 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar21 + -1 == 0) {
      FUN_003cb798();
      pcVar18 = pcVar17;
    }
  }
LAB_003c9ae4:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1a8) {
    return;
  }
  ___stack_chk_fail();
  if ((auStack_1240[0] & 1) != 0) {
    FUN_0055293c();
  }
  if (((ulong)unaff_x23 & 1) != 0) {
    FUN_0055293c(unaff_x23);
  }
  if (((ulong)pcStack_1268 & 1) != 0) {
    FUN_0055293c();
  }
  __Unwind_Resume(pcVar18);
  pcVar17 = pcVar18;
  func_0x0040cf10(pcVar18);
  pcStack_1288 = FUN_003c9c7c;
  puStack_12b0 = unaff_x22;
  puStack_12a8 = puVar27;
  puStack_12a0 = puVar26;
  pcStack_1298 = pcVar18;
  ppuStack_1290 = &puStack_160;
  func_0x00339d8c(uRam0000000000b5e9f8);
  iVar3 = iRam0000000000b5ea00;
  iRam0000000000b5ea00 = iRam0000000000b5ea00 + -1;
  uVar14 = uRam0000000000b5e9f8;
  func_0x00339da8();
  if (1 < iVar3) {
    uStack_12b8 = *puVar15;
    if ((uStack_12b8 & 1) != 0) {
      piVar10 = (int *)(uStack_12b8 - 1);
      do {
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar7) {
          *piVar10 = *piVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_003c9738(pcVar17,&uStack_12b8);
    if ((uStack_12b8 & 1) != 0) {
      FUN_0055293c();
    }
    return;
  }
  FUN_00774474();
  func_0x0040cf10();
  FUN_0033c494(&uStack_12b8);
  __Unwind_Resume(uVar14);
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_posix.cc"
               ,0x530,2,"Error handling is not supported for this platform");
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_posix.cc"
               ,0x531,2,"assertion failed: %s");
  _abort();
  uVar14 = 0x40;
  __Znwm();
  func_0x00339d50();
  uRam0000000000b5e9f8 = uVar14;
  return;
}



/* Entry: 003c9738; end: 003c9c7b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_003c9738(ulong param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code *pcVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong *puVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  ulong *puVar13;
  long unaff_x22;
  char *unaff_x23;
  ulong uStack_1168;
  long lStack_1160;
  ulong *puStack_1158;
  ulong *puStack_1150;
  ulong uStack_1148;
  undefined1 *puStack_1140;
  code *pcStack_1138;
  char *pcStack_1130;
  ulong uStack_1128;
  ulong uStack_1120;
  char *pcStack_1118;
  char *pcStack_1110;
  undefined1 uStack_1101;
  char *pcStack_1100;
  char *pcStack_10f8;
  ulong auStack_10f0 [2];
  undefined4 uStack_10e0;
  char *pcStack_10d8;
  undefined4 uStack_10d0;
  undefined8 uStack_10c8;
  undefined4 uStack_10c0;
  undefined4 uStack_10bc;
  int iStack_10b4;
  ulong uStack_10b0;
  ulong uStack_10a8;
  undefined8 uStack_10a0;
  char acStack_1098 [4160];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar10 = *param_2;
  if (uVar10 == 0) {
    puVar13 = *(ulong **)(param_1 + 0x398);
    if (puVar13 == (ulong *)0x0) {
      uVar10 = param_1;
      puVar9 = param_2;
      FUN_003ca670();
      if ((uVar10 & 1) == 0) {
LAB_003c99d0:
        FUN_003caafc();
        uVar10 = param_1;
        goto LAB_003c9ae4;
      }
    }
    else {
      unaff_x22 = param_1 + 0x300;
      puVar9 = puVar13 + 0x25;
      unaff_x23 = acStack_1098;
      do {
        uStack_10a0 = 0;
        puVar6 = puVar13;
        FUN_003c86f0(puVar13,&uStack_10a8,&uStack_10b0,&uStack_10a0,acStack_1098);
        auStack_10f0[1] = 0;
        uStack_10e0 = 0;
        uStack_10d0 = SUB84(puVar6,0);
        uStack_10bc = 0;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar9,0x10);
          if (bVar3) {
            *puVar9 = *puVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        pcStack_10d8 = unaff_x23;
        FUN_003cac9c(unaff_x22,*(undefined4 *)(param_1 + 0x358),puVar13);
        *(int *)(param_1 + 0x358) = *(int *)(param_1 + 0x358) + 1;
        iStack_10b4 = 0;
        if (*(long *)(param_1 + 0x2e8) != 0) {
          if (*(char *)(param_1 + 0x2f5) != '\0') {
            FUN_003cac04();
            goto LAB_003c9b8c;
          }
          *(undefined1 *)(param_1 + 0x2f5) = 0;
          FUN_003ca5c0(param_1);
        }
        uStack_10c8 = 0;
        uStack_10c0 = 0;
        uVar10 = (ulong)*(uint *)(param_1 + 0x10);
        FUN_003c8688(uVar10,auStack_10f0 + 1,&iStack_10b4,0x4000000);
        if ((long)uVar10 < 0) {
          FUN_003cac5c(unaff_x22);
          if (iStack_10b4 == 0x23) {
            puVar13[0x26] = uStack_10a8;
            puVar13[0x27] = uStack_10b0;
            puVar9 = (ulong *)((long)&segment_command_00000020.cmd + 3);
            goto LAB_003c99d0;
          }
          if (iStack_10b4 == 0x20) {
            FUN_003be008(&pcStack_1100,&uStack_1101,0x20,"sendmsg");
            unaff_x23 = pcStack_1100;
            if (pcStack_1100 == (char *)0x0) {
              pcStack_1130 = "!GRPC_ERROR_IS_NONE(error)";
              FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                           ,0xd5,2,"assertion failed: %s");
              _abort();
LAB_003c9b8c:
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x3c9b90);
              (*pcVar5)();
            }
            pcStack_1100 = segment_command_00000020.segname + 0xe;
            pcStack_10f8 = unaff_x23;
            FUN_003ca4c0(auStack_10f0,&pcStack_10f8,param_1);
            uVar10 = *param_2;
            if (auStack_10f0[0] == uVar10) {
LAB_003c999c:
              if ((uVar10 & 1) != 0) {
                FUN_0055293c();
              }
            }
            else {
              *param_2 = auStack_10f0[0];
              auStack_10f0[0] = 0x36;
              if ((uVar10 & 1) != 0) {
                FUN_0055293c();
                uVar10 = auStack_10f0[0];
                goto LAB_003c999c;
              }
            }
            if (((ulong)unaff_x23 & 1) != 0) {
              FUN_0055293c(unaff_x23);
            }
            if (((ulong)pcStack_1100 & 1) != 0) {
              FUN_0055293c();
            }
            FUN_003ca5c0(param_1);
          }
          else {
            FUN_003be008(&pcStack_1118,&uStack_1101,iStack_10b4,"sendmsg");
            unaff_x23 = pcStack_1118;
            if (pcStack_1118 == (char *)0x0) {
              pcStack_1130 = "!GRPC_ERROR_IS_NONE(error)";
              FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                           ,0xd5,2,"assertion failed: %s");
              _abort();
              goto LAB_003c9b8c;
            }
            pcStack_1118 = segment_command_00000020.segname + 0xe;
            pcStack_1110 = unaff_x23;
            FUN_003ca4c0(auStack_10f0,&pcStack_1110,param_1);
            uVar10 = *param_2;
            if (auStack_10f0[0] == uVar10) {
LAB_003c9a38:
              if ((uVar10 & 1) != 0) {
                FUN_0055293c();
              }
            }
            else {
              *param_2 = auStack_10f0[0];
              auStack_10f0[0] = 0x36;
              if ((uVar10 & 1) != 0) {
                FUN_0055293c();
                uVar10 = auStack_10f0[0];
                goto LAB_003c9a38;
              }
            }
            if (((ulong)unaff_x23 & 1) != 0) {
              FUN_0055293c(unaff_x23);
            }
            if (((ulong)pcStack_1118 & 1) != 0) {
              FUN_0055293c();
            }
            FUN_003ca5c0(param_1);
          }
          goto LAB_003c9a60;
        }
        *(int *)(param_1 + 0x2f0) = *(int *)(param_1 + 0x2f0) + (int)uVar10;
        func_0x003c87b0(puVar13,uStack_10a0);
      } while (puVar13[0x26] != puVar13[2]);
      uVar10 = *param_2;
      if ((uVar10 != 0) && (*param_2 = 0, (uVar10 & 1) != 0)) {
        FUN_0055293c();
      }
LAB_003c9a60:
      do {
        uVar10 = *puVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar9,0x10);
        if (bVar3) {
          *puVar9 = uVar10 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar10 - 1 == 0) {
        func_0x003ecf8c(puVar13);
        FUN_003cb420(unaff_x22,puVar13);
      }
    }
    puVar9 = *(ulong **)(param_1 + 0x1d0);
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    *(undefined8 *)(param_1 + 0x398) = 0;
    uStack_1128 = *param_2;
    if ((uStack_1128 & 1) != 0) {
      piVar11 = (int *)(uStack_1128 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar3) {
          *piVar11 = *piVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_00342584(acStack_1098,puVar9,&uStack_1128);
    uVar10 = uStack_1128;
    if ((uStack_1128 & 1) != 0) {
      FUN_0055293c();
    }
    plVar1 = (long *)(param_1 + 0x28);
    do {
      lVar12 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 + -1 == 0) {
      FUN_003cb798();
      uVar10 = param_1;
    }
  }
  else {
    puVar13 = *(ulong **)(param_1 + 0x1d0);
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    unaff_x22 = *(long *)(param_1 + 0x398);
    if (unaff_x22 != 0) {
      plVar1 = (long *)(unaff_x22 + 0x128);
      do {
        lVar12 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 + -1 == 0) {
        func_0x003ecf8c(unaff_x22);
        FUN_003cb420(param_1 + 0x300,unaff_x22);
      }
      *(undefined8 *)(param_1 + 0x398) = 0;
      uVar10 = *param_2;
    }
    if ((uVar10 & 1) != 0) {
      piVar11 = (int *)(uVar10 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar3) {
          *piVar11 = *piVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar9 = puVar13;
    uStack_1120 = uVar10;
    FUN_00342584(acStack_1098,puVar13,&uStack_1120);
    uVar10 = uStack_1120;
    if ((uStack_1120 & 1) != 0) {
      FUN_0055293c();
    }
    plVar1 = (long *)(param_1 + 0x28);
    do {
      lVar12 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 + -1 == 0) {
      FUN_003cb798();
      uVar10 = param_1;
    }
  }
LAB_003c9ae4:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if ((auStack_10f0[0] & 1) != 0) {
    FUN_0055293c();
  }
  if (((ulong)unaff_x23 & 1) != 0) {
    FUN_0055293c(unaff_x23);
  }
  if (((ulong)pcStack_1118 & 1) != 0) {
    FUN_0055293c();
  }
  __Unwind_Resume(uVar10);
  uVar7 = uVar10;
  func_0x0040cf10(uVar10);
  pcStack_1138 = FUN_003c9c7c;
  lStack_1160 = unaff_x22;
  puStack_1158 = puVar13;
  puStack_1150 = param_2;
  uStack_1148 = uVar10;
  puStack_1140 = &stack0xfffffffffffffff0;
  func_0x00339d8c(uRam0000000000b5e9f8);
  iVar4 = iRam0000000000b5ea00;
  iRam0000000000b5ea00 = iRam0000000000b5ea00 + -1;
  uVar8 = uRam0000000000b5e9f8;
  func_0x00339da8();
  if (iVar4 < 2) {
    FUN_00774474();
    func_0x0040cf10();
    FUN_0033c494(&uStack_1168);
    __Unwind_Resume(uVar8);
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_posix.cc"
                 ,0x530,2,"Error handling is not supported for this platform");
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_posix.cc"
                 ,0x531,2,"assertion failed: %s");
    _abort();
    uVar8 = 0x40;
    __Znwm();
    func_0x00339d50();
    uRam0000000000b5e9f8 = uVar8;
    return;
  }
  uStack_1168 = *puVar9;
  if ((uStack_1168 & 1) != 0) {
    piVar11 = (int *)(uStack_1168 - 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar3) {
        *piVar11 = *piVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_003c9738(uVar7,&uStack_1168);
  if ((uStack_1168 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003c9c7c; end: 003c9d2b;  */

void FUN_003c9c7c(undefined8 param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  ulong uStack_38;
  
  func_0x00339d8c(uRam0000000000b5e9f8);
  iVar3 = iRam0000000000b5ea00;
  iRam0000000000b5ea00 = iRam0000000000b5ea00 + -1;
  uVar4 = uRam0000000000b5e9f8;
  func_0x00339da8();
  if (1 < iVar3) {
    uStack_38 = *param_2;
    if ((uStack_38 & 1) != 0) {
      piVar5 = (int *)(uStack_38 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_003c9738(param_1,&uStack_38);
    if ((uStack_38 & 1) != 0) {
      FUN_0055293c();
    }
    return;
  }
  FUN_00774474();
  func_0x0040cf10();
  FUN_0033c494(&uStack_38);
  __Unwind_Resume(uVar4);
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_posix.cc"
               ,0x530,2,"Error handling is not supported for this platform");
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_posix.cc"
               ,0x531,2,"assertion failed: %s");
  _abort();
  uVar4 = 0x40;
  __Znwm();
  func_0x00339d50();
  uRam0000000000b5e9f8 = uVar4;
  return;
}



/* Entry: 003c9d2c; end: 003c9d83;  */

void FUN_003c9d2c(void)

{
  undefined8 uVar1;
  
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_posix.cc"
               ,0x530,2,"Error handling is not supported for this platform");
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_posix.cc"
               ,0x531,2,"assertion failed: %s");
  _abort();
  uVar1 = 0x40;
  __Znwm();
  FUN_00339d50();
  uRam0000000000b5e9f8 = uVar1;
  return;
}



/* Entry: 003c9d84; end: 003c9dc7;  */

void FUN_003c9d84(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x40;
  __Znwm();
  FUN_00339d50();
  uRam0000000000b5e9f8 = uVar1;
  return;
}



/* Entry: 003c9dc8; end: 003c9e03;  */

void FUN_003c9dc8(void)

{
  long lVar1;
  
  lVar1 = lRam0000000000b5e9f8;
  if (lRam0000000000b5e9f8 != 0) {
    func_0x00339d70(lRam0000000000b5e9f8);
    __ZdlPv(lVar1);
  }
  lRam0000000000b5e9f8 = 0;
  return;
}



/* Entry: 003c9e04; end: 003c9f47;  */

long * FUN_003c9e04(long *param_1,ulong param_2,long param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  
  iVar3 = (int)param_2;
  *(int *)(param_1 + 2) = iVar3;
  *(int *)((long)param_1 + 0x14) = iVar3;
  FUN_00339d50(param_1 + 3);
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined2 *)((long)param_1 + 0x5c) = 0;
  param_1[0xc] = param_3;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x12) = 0;
  lVar2 = ((-(param_2 >> 0x1f & 1) & 0xfffffffc00000000 | (param_2 & 0xffffffff) << 2) + (long)iVar3
          ) * 0x40;
  FUN_00338c74();
  *param_1 = lVar2;
  lVar2 = (long)iVar3 << 3;
  FUN_00338c74();
  param_1[1] = lVar2;
  if ((*param_1 == 0) || (lVar2 == 0)) {
    FUN_00338cb8(*param_1);
    FUN_00338cb8(param_1[1]);
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_posix.cc"
                 ,0xcc,1,"Disabling TCP TX zerocopy due to memory pressure.\n");
    *(undefined1 *)(param_1 + 0x12) = 1;
  }
  else if (0 < (int)param_1[2]) {
    lVar4 = 0;
    lVar2 = 0;
    do {
      lVar1 = *param_1 + lVar4;
      *(undefined8 *)(lVar1 + 0x128) = 0;
      *(undefined8 *)(lVar1 + 0x130) = 0;
      *(undefined8 *)(lVar1 + 0x138) = 0;
      FUN_003ecf38();
      *(long *)(param_1[1] + lVar2 * 8) = *param_1 + lVar4;
      lVar2 = lVar2 + 1;
      lVar4 = lVar4 + 0x140;
    } while (lVar2 < (int)param_1[2]);
  }
  return param_1;
}



/* Entry: 003c9f48; end: 003c9f8f;  */

long * FUN_003c9f48(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 003c9f90; end: 003ca09f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_003c9f90(ulong param_1,long param_2,undefined8 param_3,ulong param_4,undefined4 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  int *piVar8;
  ulong auStack_d0 [4];
  undefined1 uStack_a9;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined1 uStack_91;
  ulong uStack_90;
  ulong *puStack_88;
  ulong uStack_50;
  undefined1 uStack_41;
  
  if (*(long *)(param_1 + 0x1c8) == 0) {
    *(undefined8 *)(param_1 + 0x1c8) = param_3;
    func_0x00339d8c(param_1 + 0x168);
    *(long *)(param_1 + 0x1a8) = param_2;
    if (*(char *)(param_1 + 0x3a0) == '\0') {
      param_5 = 1;
    }
    *(undefined4 *)(param_1 + 0x3a4) = param_5;
    func_0x003ecf8c(param_2);
    FUN_003ed190(param_2,param_1 + 0x40);
    func_0x00339da8(param_1 + 0x168);
    plVar1 = (long *)(param_1 + 0x28);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (*(char *)(param_1 + 0x14) == '\0') {
      if (((param_4 & 1) != 0) || (*(int *)(param_1 + 0x1b0) != 0)) {
        uStack_50 = 0;
        FUN_00342584(&uStack_41,param_1 + 0x1e8,&uStack_50);
        if ((uStack_50 & 1) != 0) {
          FUN_0055293c();
        }
        return;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x14) = 0;
    }
                    /* WARNING: Trying to construct memory range beyond end of address space: ram */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lRam0000000000b5e918 + 0x30))(*(undefined8 *)(param_1 + 8),param_1 + 0x1e8);
    return;
  }
  func_0x007744a8();
  func_0x0040cf10();
  FUN_0033c494(&uStack_50);
  __Unwind_Resume();
  uStack_90 = 0;
  if (*(long *)(param_1 + 0x1d0) != 0) {
    uVar7 = 0x67a;
LAB_003ca240:
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_posix.cc"
                 ,uVar7,2,"assertion failed: %s");
    _abort();
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x3ca264);
    (*pcVar4)();
  }
  if (*(long *)(param_2 + 0x20) == 0) {
    uVar6 = *(ulong *)(param_1 + 8);
    FUN_003c18c8();
    if ((int)uVar6 == 0) {
      uStack_a0 = 0;
    }
    else {
      auStack_d0[1] = 0;
      auStack_d0[2] = 0;
      auStack_d0[3] = 0;
      FUN_003b646c(&uStack_a8,2,"EOF",3,&uStack_a9,auStack_d0 + 1);
      FUN_003ca4c0(&uStack_a0,&uStack_a8,param_1);
    }
    FUN_00342584(&uStack_91,param_3,&uStack_a0);
    if ((uVar6 & 1) == 0) {
      if ((uStack_a0 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      if ((uStack_a0 & 1) != 0) {
        FUN_0055293c();
      }
      if ((uStack_a8 & 1) != 0) {
        FUN_0055293c();
      }
      puStack_88 = auStack_d0 + 1;
      FUN_0033d548(&puStack_88);
    }
    FUN_003ca5c0(param_1);
  }
  else {
    *(long *)(param_1 + 0x1b8) = param_2;
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    *(ulong *)(param_1 + 0x2e8) = param_4;
    if ((param_4 != 0) && (uVar6 = param_1, FUN_003c1770(), (uVar6 & 1) == 0)) {
      uVar7 = 0x690;
      goto LAB_003ca240;
    }
    uVar5 = param_1;
    FUN_003ca670(param_1,&uStack_90);
    uVar6 = uStack_90;
    if ((uVar5 & 1) == 0) {
      plVar1 = (long *)(param_1 + 0x28);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *(undefined8 *)(param_1 + 0x1d0) = param_3;
      *(undefined8 *)(param_1 + 0x398) = 0;
      FUN_003caafc(param_1);
      uVar6 = uStack_90;
    }
    else {
      auStack_d0[0] = uStack_90;
      if ((uStack_90 & 1) != 0) {
        piVar8 = (int *)(uStack_90 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = *piVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_00342584(&puStack_88,param_3,auStack_d0);
      if ((auStack_d0[0] & 1) != 0) {
        FUN_0055293c();
      }
    }
    if ((uVar6 & 1) != 0) {
      FUN_0055293c(uVar6);
    }
  }
  return;
}



/* Entry: 003ca0a0; end: 003ca2df;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_003ca0a0(ulong param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  int *piVar8;
  ulong auStack_80 [4];
  undefined1 uStack_59;
  ulong uStack_58;
  ulong uStack_50;
  undefined1 uStack_41;
  ulong uStack_40;
  ulong *puStack_38;
  
  uStack_40 = 0;
  if (*(long *)(param_1 + 0x1d0) != 0) {
    uVar7 = 0x67a;
LAB_003ca240:
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_posix.cc"
                 ,uVar7,2,"assertion failed: %s");
    _abort();
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x3ca264);
    (*pcVar4)();
  }
  if (*(long *)(param_2 + 0x20) == 0) {
    uVar6 = *(ulong *)(param_1 + 8);
    FUN_003c18c8();
    if ((int)uVar6 == 0) {
      uStack_50 = 0;
    }
    else {
      auStack_80[1] = 0;
      auStack_80[2] = 0;
      auStack_80[3] = 0;
      FUN_003b646c(&uStack_58,2,"EOF",3,&uStack_59,auStack_80 + 1);
      FUN_003ca4c0(&uStack_50,&uStack_58,param_1);
    }
    FUN_00342584(&uStack_41,param_3,&uStack_50);
    if ((uVar6 & 1) == 0) {
      if ((uStack_50 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      if ((uStack_50 & 1) != 0) {
        FUN_0055293c();
      }
      if ((uStack_58 & 1) != 0) {
        FUN_0055293c();
      }
      puStack_38 = auStack_80 + 1;
      FUN_0033d548(&puStack_38);
    }
    FUN_003ca5c0(param_1);
  }
  else {
    *(long *)(param_1 + 0x1b8) = param_2;
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    *(long *)(param_1 + 0x2e8) = param_4;
    if ((param_4 != 0) && (uVar6 = param_1, FUN_003c1770(), (uVar6 & 1) == 0)) {
      uVar7 = 0x690;
      goto LAB_003ca240;
    }
    uVar5 = param_1;
    FUN_003ca670(param_1,&uStack_40);
    uVar6 = uStack_40;
    if ((uVar5 & 1) == 0) {
      plVar1 = (long *)(param_1 + 0x28);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *(undefined8 *)(param_1 + 0x1d0) = param_3;
      *(undefined8 *)(param_1 + 0x398) = 0;
      FUN_003caafc(param_1);
      uVar6 = uStack_40;
    }
    else {
      auStack_80[0] = uStack_40;
      if ((uStack_40 & 1) != 0) {
        piVar8 = (int *)(uStack_40 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = *piVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_00342584(&puStack_38,param_3,auStack_80);
      if ((auStack_80[0] & 1) != 0) {
        FUN_0055293c();
      }
    }
    if ((uVar6 & 1) != 0) {
      FUN_0055293c(uVar6);
    }
  }
  return;
}



/* Entry: 003ca2e0; end: 003ca30f;  */

void FUN_003ca2e0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x003c1924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lRam0000000000b5e918 + 0x90))(param_2,*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 003ca310; end: 003ca37f;  */

void FUN_003ca310(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_28;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
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
  FUN_003c1850(uVar3,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003ca380; end: 003ca3e3;  */

void FUN_003ca380(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_41;
  ulong uStack_40;
  undefined1 *puStack_38;
  
  iVar4 = (int)param_1 + 0x40;
  func_0x003ecf8c();
  FUN_003c1770();
  if (iVar4 != 0) {
    *(undefined8 *)(param_1 + 0x2f8) = 1;
    func_0x003c1908(*(undefined8 *)(param_1 + 8));
  }
  plVar1 = (long *)(param_1 + 0x28);
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
  func_0x003c1840(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x1d8),
                  *(undefined8 *)(param_1 + 0x1e0),"tcp_unref_orphan");
  func_0x003ecf54(param_1 + 0x40);
  lVar5 = param_1 + 0x2a8;
  func_0x00339d8c(lVar5);
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  FUN_003b646c(&uStack_40,2,"endpoint destroyed",0x12,&uStack_41,&uStack_60);
  if ((uStack_40 & 1) != 0) {
    FUN_0055293c();
  }
  puStack_38 = (undefined1 *)&uStack_60;
  FUN_0033d548(&puStack_38);
  func_0x00339da8(lVar5);
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  func_0x00339d70(lVar5);
  FUN_003cb8b0(param_1 + 0x300);
  FUN_00388a1c(param_1 + 0x288);
  FUN_00377730(param_1 + 0x278);
  if (*(char *)(param_1 + 0x277) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x260));
  }
  if (*(char *)(param_1 + 0x25f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x248));
  }
  func_0x00339d70(param_1 + 0x168);
  __ZdlPv(param_1);
  return;
}



/* Entry: 003ca3e4; end: 003ca433;  */

undefined1  [16] FUN_003ca3e4(long param_1)

{
  undefined1 auVar1 [16];
  
  if (-1 < *(char *)(param_1 + 0x25f)) {
    auVar1[8] = *(char *)(param_1 + 0x25f);
    auVar1._0_8_ = param_1 + 0x248;
    auVar1._9_7_ = 0;
    return auVar1;
  }
  return *(undefined1 (*) [16])(param_1 + 0x248);
}



/* Entry: 003ca434; end: 003ca4bf;  */

void FUN_003ca434(ulong *param_1,undefined1 *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulong *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  int *piVar7;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined4 uStack_3c;
  undefined1 uStack_38;
  char cStack_37;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar4 = param_1;
  FUN_003c1770();
  if ((int)puVar4 != 0) {
    uStack_3c = 0x10;
    iVar3 = (int)param_1[2];
    param_2 = &uStack_38;
    _getsockname(iVar3,param_2,&uStack_3c);
    if (iVar3 < 0) {
      puVar4 = (ulong *)0x0;
    }
    else {
      puVar4 = (ulong *)(ulong)(cStack_37 == '\x02' || cStack_37 == '\x1e');
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  uStack_78 = *puVar4;
  if ((uStack_78 & 1) != 0) {
    piVar7 = (int *)(uStack_78 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = *piVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_003be104(&uStack_70,&uStack_78,10,(long)*(int *)(param_2 + 0x10));
  FUN_003be104(&uStack_68,&uStack_70,3,0xe);
  if ((char)param_2[0x25f] < '\0') {
    puVar5 = *(undefined1 **)(param_2 + 0x248);
    uVar6 = *(ulong *)(param_2 + 0x250);
  }
  else {
    puVar5 = param_2 + 0x248;
    uVar6 = (ulong)(byte)param_2[0x25f];
  }
  FUN_003be254(extraout_x8,&uStack_68,4,puVar5,uVar6);
  if ((uStack_68 & 1) != 0) {
    FUN_0055293c();
  }
  if ((uStack_70 & 1) != 0) {
    FUN_0055293c();
  }
  if ((uStack_78 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003ca4c0; end: 003ca5bf;  */

void FUN_003ca4c0(undefined8 param_1,ulong *param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  
  uStack_38 = *param_2;
  if ((uStack_38 & 1) != 0) {
    piVar5 = (int *)(uStack_38 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_003be104(&uStack_30,&uStack_38,10,(long)*(int *)(param_3 + 0x10));
  FUN_003be104(&uStack_28,&uStack_30,3,0xe);
  if ((char)*(byte *)(param_3 + 0x25f) < '\0') {
    lVar3 = *(long *)(param_3 + 0x248);
    uVar4 = *(ulong *)(param_3 + 0x250);
  }
  else {
    lVar3 = param_3 + 0x248;
    uVar4 = (ulong)*(byte *)(param_3 + 0x25f);
  }
  FUN_003be254(param_1,&uStack_28,4,lVar3,uVar4);
  if ((uStack_28 & 1) != 0) {
    FUN_0055293c();
  }
  if ((uStack_30 & 1) != 0) {
    FUN_0055293c();
  }
  if ((uStack_38 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003ca5c0; end: 003ca66f;  */

void FUN_003ca5c0(long param_1)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_41;
  ulong uStack_40;
  undefined1 *puStack_38;
  
  if (*(long *)(param_1 + 0x2e8) != 0) {
    func_0x00339d8c(param_1 + 0x2a8);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    FUN_003b646c(&uStack_40,2,"TracedBuffer list shutdown",0x1a,&uStack_41,&uStack_60);
    if ((uStack_40 & 1) != 0) {
      FUN_0055293c();
    }
    puStack_38 = (undefined1 *)&uStack_60;
    FUN_0033d548(&puStack_38);
    func_0x00339da8(param_1 + 0x2a8);
    *(undefined8 *)(param_1 + 0x2e8) = 0;
  }
  return;
}



/* Entry: 003ca670; end: 003caafb;  */

void FUN_003ca670(long param_1,ulong *param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  ulong uStack_1158;
  long *plStack_1150;
  ulong uStack_1148;
  ulong *puStack_1140;
  ulong uStack_1138;
  undefined1 *puStack_1130;
  code *pcStack_1128;
  char *pcStack_1120;
  ulong uStack_1110;
  ulong uStack_1108;
  undefined1 uStack_10f9;
  ulong uStack_10f8;
  ulong uStack_10f0;
  ulong uStack_10e8;
  int iStack_10dc;
  undefined8 uStack_10d8;
  undefined4 uStack_10d0;
  long *plStack_10c8;
  int iStack_10c0;
  undefined8 uStack_10b8;
  undefined4 uStack_10b0;
  undefined4 uStack_10ac;
  long alStack_10a8 [520];
  long lStack_68;
  
  uVar13 = 0;
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar6 = *(long *)(param_1 + 0x1b8);
  lVar14 = *(long *)(param_1 + 0x1c0);
  uVar7 = *(ulong *)(lVar6 + 0x10);
  do {
    if (uVar13 - uVar7 == 0) {
LAB_003caa50:
      func_0x007744dc();
LAB_003caa5c:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x3caa60);
      (*pcVar3)();
    }
    lVar15 = 0;
    puVar8 = (ulong *)(*(long *)(lVar6 + 8) + uVar13 * 0x20 + 8);
    plVar9 = alStack_10a8;
    lVar6 = 0;
    lVar10 = lVar14;
    lVar2 = uVar13 << 5;
    uVar12 = uVar13;
    do {
      uVar5 = uVar12;
      lVar11 = lVar2;
      if (puVar8[-1] == 0) {
        *plVar9 = (long)((long)puVar8 + lVar10 + 1);
        uVar12 = (ulong)(byte)*puVar8;
      }
      else {
        *plVar9 = puVar8[1] + lVar10;
        uVar12 = *puVar8;
      }
      plVar9[1] = uVar12 - lVar10;
      lVar15 = (uVar12 - lVar10) + lVar15;
      *(undefined8 *)(param_1 + 0x1c0) = 0;
      lVar1 = lVar6 + 1;
      if ((uVar13 - uVar7) + 1 + lVar6 == 0) break;
      lVar10 = 0;
      plVar9 = plVar9 + 2;
      puVar8 = puVar8 + 4;
      bVar4 = lVar6 != 0x103;
      lVar6 = lVar1;
      lVar2 = lVar11 + 0x20;
      uVar12 = uVar5 + 1;
    } while (bVar4);
    iVar16 = (int)lVar1;
    if (iVar16 == 0) goto LAB_003caa50;
    uStack_10d8 = 0;
    uStack_10d0 = 0;
    uStack_10ac = 0;
    iStack_10dc = 0;
    plStack_10c8 = alStack_10a8;
    iStack_10c0 = iVar16;
    if (*(long *)(param_1 + 0x2e8) != 0) {
      if (*(char *)(param_1 + 0x2f5) != '\0') {
        FUN_003cac04();
        goto LAB_003caa5c;
      }
      *(undefined1 *)(param_1 + 0x2f5) = 0;
      FUN_003ca5c0(param_1);
    }
    uStack_10b8 = 0;
    uStack_10b0 = 0;
    uVar7 = (ulong)*(uint *)(param_1 + 0x10);
    FUN_003c8688(uVar7,&uStack_10d8,&iStack_10dc,0);
    if ((long)uVar7 < 0) {
      if (iStack_10dc == 0x20) {
        FUN_003be008(&uStack_10f8,&uStack_10f9,0x20,"sendmsg");
        uVar13 = uStack_10f8;
        if (uStack_10f8 == 0) {
          pcStack_1120 = "!GRPC_ERROR_IS_NONE(error)";
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                       ,0xd5,2,"assertion failed: %s");
          _abort();
          goto LAB_003caa5c;
        }
        uStack_10f8 = 0x36;
        uStack_10f0 = uVar13;
        FUN_003ca4c0(&uStack_10e8,&uStack_10f0,param_1);
        uVar7 = *param_2;
        if (uStack_10e8 == uVar7) {
LAB_003ca8e8:
          if ((uVar7 & 1) != 0) {
            FUN_0055293c();
          }
        }
        else {
          *param_2 = uStack_10e8;
          uStack_10e8 = 0x36;
          if ((uVar7 & 1) != 0) {
            FUN_0055293c();
            uVar7 = uStack_10e8;
            goto LAB_003ca8e8;
          }
        }
        if ((uVar13 & 1) != 0) {
          FUN_0055293c(uVar13);
        }
        if ((uStack_10f8 & 1) != 0) {
          FUN_0055293c();
        }
        func_0x003ecf8c(*(undefined8 *)(param_1 + 0x1b8));
        FUN_003ca5c0(param_1);
      }
      else {
        if (iStack_10dc == 0x23) {
          *(long *)(param_1 + 0x1c0) = lVar14;
          for (; uVar13 != 0; uVar13 = uVar13 - 1) {
            FUN_003edd10(*(undefined8 *)(param_1 + 0x1b8));
          }
          uVar7 = 0;
          uVar13 = 0;
          goto LAB_003ca9ac;
        }
        FUN_003be008(&uStack_1110,&uStack_10f9,iStack_10dc,"sendmsg");
        uVar13 = uStack_1110;
        if (uStack_1110 == 0) {
          pcStack_1120 = "!GRPC_ERROR_IS_NONE(error)";
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                       ,0xd5,2,"assertion failed: %s");
          _abort();
          goto LAB_003caa5c;
        }
        uStack_1110 = 0x36;
        uStack_1108 = uVar13;
        FUN_003ca4c0(&uStack_10e8,&uStack_1108,param_1);
        uVar7 = *param_2;
        if (uStack_10e8 == uVar7) {
LAB_003ca978:
          if ((uVar7 & 1) != 0) {
            FUN_0055293c();
          }
        }
        else {
          *param_2 = uStack_10e8;
          uStack_10e8 = 0x36;
          if ((uVar7 & 1) != 0) {
            FUN_0055293c();
            uVar7 = uStack_10e8;
            goto LAB_003ca978;
          }
        }
        if ((uVar13 & 1) != 0) {
          FUN_0055293c(uVar13);
        }
        if ((uStack_1110 & 1) != 0) {
          FUN_0055293c();
        }
        func_0x003ecf8c(*(undefined8 *)(param_1 + 0x1b8));
        FUN_003ca5c0(param_1);
      }
      goto LAB_003ca9a8;
    }
    if (*(long *)(param_1 + 0x1c0) != 0) {
      func_0x00774510();
      goto LAB_003caa5c;
    }
    *(int *)(param_1 + 0x2f0) = *(int *)(param_1 + 0x2f0) + (int)uVar7;
    lVar6 = *(long *)(param_1 + 0x1b8);
    uVar7 = lVar15 - uVar7;
    if (uVar7 == 0) {
      lVar14 = 0;
      uVar13 = uVar13 + lVar1;
    }
    else {
      plVar9 = (long *)(*(long *)(lVar6 + 8) + lVar11);
      do {
        uVar13 = uVar5;
        if (*plVar9 == 0) {
          uVar12 = (ulong)*(byte *)(plVar9 + 1);
        }
        else {
          uVar12 = plVar9[1];
        }
        lVar14 = uVar12 - uVar7;
        if (uVar7 <= uVar12 && lVar14 != 0) {
          *(long *)(param_1 + 0x1c0) = lVar14;
          goto LAB_003ca824;
        }
        plVar9 = plVar9 + -4;
        uVar7 = uVar7 - uVar12;
        uVar5 = uVar13 - 1;
      } while (uVar7 != 0);
      lVar14 = 0;
    }
LAB_003ca824:
    uVar7 = *(ulong *)(lVar6 + 0x10);
    if (uVar13 == uVar7) {
      uVar7 = *param_2;
      if (uVar7 != 0) {
        *param_2 = 0;
        uStack_10e8 = 0x36;
        if ((uVar7 & 1) != 0) {
          FUN_0055293c();
        }
      }
      func_0x003ecf8c(*(undefined8 *)(param_1 + 0x1b8));
LAB_003ca9a8:
      uVar7 = 1;
LAB_003ca9ac:
      if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_68) {
        ___stack_chk_fail();
        FUN_0033c494(&uStack_10e8);
        FUN_0033c494(&uStack_1108);
        FUN_0033c494(&uStack_1110);
        uVar12 = uVar7;
        __Unwind_Resume();
        pcStack_1128 = FUN_003caafc;
        uVar5 = uVar12;
        plStack_1150 = alStack_10a8;
        uStack_1148 = uVar13;
        puStack_1140 = param_2;
        uStack_1138 = uVar7;
        puStack_1130 = &stack0xfffffffffffffff0;
        FUN_003c179c();
        if ((uVar5 & 1) == 0) {
          lVar14 = lRam0000000000b5e9f8;
          func_0x00339d8c();
          lVar6 = lRam0000000000b5ea08;
          if (iRam0000000000b5ea00 == 0) {
            iRam0000000000b5ea00 = 2;
            func_0x003c3ec4();
            lVar6 = lVar14 + 0x28;
            func_0x00338c94();
            lRam0000000000b5ea08 = lVar6;
            func_0x003c3e74(lVar6 + 0x28,lVar6);
            func_0x00339da8(lRam0000000000b5e9f8);
            *(code **)(lVar6 + 0x10) = FUN_003cb474;
            *(long *)(lVar6 + 0x18) = lVar6;
            *(undefined8 *)(lVar6 + 0x20) = 0;
            uStack_1158 = 0;
            FUN_003c2968(lVar6 + 8,&uStack_1158,0,1);
            if ((uStack_1158 & 1) != 0) {
              FUN_0055293c();
            }
          }
          else {
            iRam0000000000b5ea00 = iRam0000000000b5ea00 + 1;
            func_0x00339da8(lRam0000000000b5e9f8);
          }
          func_0x003c1918(lVar6 + 0x28,*(undefined8 *)(uVar12 + 8));
        }
        func_0x003c18e8(*(undefined8 *)(uVar12 + 8),uVar12 + 0x208);
        return;
      }
      return;
    }
  } while( true );
}



/* Entry: 003caafc; end: 003cac03;  */

void FUN_003caafc(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uStack_38;
  
  uVar1 = param_1;
  FUN_003c179c();
  if ((uVar1 & 1) == 0) {
    lVar2 = lRam0000000000b5e9f8;
    func_0x00339d8c();
    lVar3 = lRam0000000000b5ea08;
    if (iRam0000000000b5ea00 == 0) {
      iRam0000000000b5ea00 = 2;
      func_0x003c3ec4();
      lVar3 = lVar2 + 0x28;
      func_0x00338c94();
      lRam0000000000b5ea08 = lVar3;
      func_0x003c3e74(lVar3 + 0x28,lVar3);
      func_0x00339da8(lRam0000000000b5e9f8);
      *(code **)(lVar3 + 0x10) = FUN_003cb474;
      *(long *)(lVar3 + 0x18) = lVar3;
      *(undefined8 *)(lVar3 + 0x20) = 0;
      uStack_38 = 0;
      FUN_003c2968(lVar3 + 8,&uStack_38,0,1);
      if ((uStack_38 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      iRam0000000000b5ea00 = iRam0000000000b5ea00 + 1;
      func_0x00339da8(lRam0000000000b5e9f8);
    }
    func_0x003c1918(lVar3 + 0x28,*(undefined8 *)(param_1 + 8));
  }
  func_0x003c18e8(*(undefined8 *)(param_1 + 8),param_1 + 0x208);
  return;
}



/* Entry: 003cac04; end: 003cac5b;  */

void FUN_003cac04(void)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  
  pcVar3 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_posix.cc";
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_posix.cc"
               ,0x529,2,"Write with timestamps not supported for this platform");
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_posix.cc"
               ,0x52a,2,"assertion failed: %s");
  _abort();
  *(int *)(pcVar3 + 0x58) = *(int *)(pcVar3 + 0x58) + -1;
  FUN_003cb170();
  plVar4 = (long *)(pcVar3 + 0x128);
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
    if (*(long *)(pcVar3 + 0x10) != 0) {
      uVar6 = 0;
      do {
        plVar4 = *(long **)(*(long *)(pcVar3 + 8) + uVar6 * 0x20);
        if ((long *)((long)&MACH_HEADER.magic + 1) < plVar4) {
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
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(ulong *)(pcVar3 + 0x10));
    }
    pcVar3[0x20] = '\0';
    pcVar3[0x21] = '\0';
    pcVar3[0x22] = '\0';
    pcVar3[0x23] = '\0';
    pcVar3[0x24] = '\0';
    pcVar3[0x25] = '\0';
    pcVar3[0x26] = '\0';
    pcVar3[0x27] = '\0';
    *(undefined8 *)(pcVar3 + 8) = *(undefined8 *)pcVar3;
    pcVar3[0x10] = '\0';
    pcVar3[0x11] = '\0';
    pcVar3[0x12] = '\0';
    pcVar3[0x13] = '\0';
    pcVar3[0x14] = '\0';
    pcVar3[0x15] = '\0';
    pcVar3[0x16] = '\0';
    pcVar3[0x17] = '\0';
    return;
  }
  return;
}



/* Entry: 003cac5c; end: 003cac9b;  */

void FUN_003cac5c(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  
  *(int *)(param_1 + 0xb) = *(int *)(param_1 + 0xb) + -1;
  FUN_003cb170();
  plVar3 = param_1 + 0x25;
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
    if (param_1[2] != 0) {
      uVar5 = 0;
      do {
        plVar3 = *(long **)(param_1[1] + uVar5 * 0x20);
        if ((long *)((long)&MACH_HEADER.magic + 1) < plVar3) {
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
  return;
}



/* Entry: 003cac9c; end: 003cad0b;  */

void FUN_003cac9c(long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  undefined4 uStack_24;
  
  uStack_30 = param_3;
  uStack_24 = param_2;
  func_0x00339d8c(param_1 + 0x18);
  FUN_003cad0c(param_1 + 0x68,&uStack_24,&uStack_24,&uStack_30);
  func_0x00339da8(param_1 + 0x18);
  return;
}



/* Entry: 003cad0c; end: 003caf3b;  */

undefined1  [16] FUN_003cad0c(long *param_1,uint *param_2,undefined4 *param_3,qword *param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  segment_command *psVar10;
  ulong uVar11;
  ulong uVar12;
  ulong unaff_x25;
  undefined2 uVar13;
  undefined1 auVar14 [16];
  
  uVar1 = *param_2;
  uVar12 = (ulong)uVar1;
  uVar11 = param_1[1];
  if (uVar11 != 0) {
    uVar3 = CONCAT17(POPCOUNT((char)(uVar11 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(uVar11 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(uVar11 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(uVar11 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(uVar11 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(uVar11 >> 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(uVar11 >>
                                                                                          8)),
                                                                           POPCOUNT((char)uVar11))))
                                               ))));
    uVar13 = NEON_uaddlv(uVar3,1);
    uVar4 = CONCAT62((int6)((ulong)uVar3 >> 0x10),uVar13) & 0xffffffff;
    if (uVar4 < 2) {
      unaff_x25 = (ulong)((int)uVar11 - 1U & uVar1);
    }
    else {
      unaff_x25 = uVar12;
      if (uVar11 <= uVar12) {
        uVar8 = 0;
        if (uVar11 != 0) {
          uVar8 = uVar12 / uVar11;
        }
        unaff_x25 = uVar12 - uVar8 * uVar11;
      }
    }
    puVar6 = *(undefined8 **)(*param_1 + unaff_x25 * 8);
    if ((puVar6 != (undefined8 *)0x0) &&
       (psVar10 = (segment_command *)*puVar6, psVar10 != (segment_command *)0x0)) {
      do {
        uVar8 = *(ulong *)psVar10->segname;
        if (uVar8 == uVar12) {
          if (*(uint *)(psVar10->segname + 8) == uVar1) {
            uVar3 = 0;
            goto LAB_003caf04;
          }
        }
        else {
          if (uVar4 < 2) {
            uVar8 = uVar8 & uVar11 - 1;
          }
          else if (uVar11 <= uVar8) {
            uVar2 = 0;
            if (uVar11 != 0) {
              uVar2 = uVar8 / uVar11;
            }
            uVar8 = uVar8 - uVar2 * uVar11;
          }
          if (uVar8 != unaff_x25) break;
        }
        psVar10 = *(segment_command **)psVar10;
      } while (psVar10 != (segment_command *)0x0);
    }
  }
  psVar10 = &segment_command_00000020;
  __Znwm();
  psVar10->cmd = 0;
  psVar10->cmdsize = 0;
  *(ulong *)psVar10->segname = uVar12;
  *(undefined4 *)(psVar10->segname + 8) = *param_3;
  psVar10->vmaddr = *param_4;
  if ((uVar11 == 0) || (*(float *)(param_1 + 4) * (float)uVar11 < (float)(param_1[3] + 1))) {
    uVar4 = 1;
    if (2 < uVar11) {
      uVar4 = (ulong)((uVar11 & uVar11 - 1) != 0);
    }
    uVar4 = uVar4 | uVar11 << 1;
    uVar11 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar4 <= uVar11) {
      uVar4 = uVar11;
    }
    FUN_003caf3c(param_1,uVar4);
    uVar11 = param_1[1];
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x25 = (ulong)((int)uVar11 - 1U & uVar1);
    }
    else {
      unaff_x25 = uVar12;
      if (uVar11 <= uVar12) {
        uVar4 = 0;
        if (uVar11 != 0) {
          uVar4 = uVar12 / uVar11;
        }
        unaff_x25 = uVar12 - uVar4 * uVar11;
      }
    }
  }
  lVar7 = *param_1;
  puVar6 = *(undefined8 **)(lVar7 + unaff_x25 * 8);
  if (puVar6 == (undefined8 *)0x0) {
    plVar5 = param_1 + 2;
    lVar9 = *plVar5;
    psVar10->cmd = (int)lVar9;
    psVar10->cmdsize = (int)((ulong)lVar9 >> 0x20);
    *plVar5 = (long)psVar10;
    *(long **)(lVar7 + unaff_x25 * 8) = plVar5;
    if (*(long *)psVar10 == 0) goto LAB_003caef4;
    uVar12 = *(ulong *)(*(long *)psVar10 + 8);
    if ((uVar11 & uVar11 - 1) == 0) {
      uVar12 = uVar12 & uVar11 - 1;
    }
    else if (uVar11 <= uVar12) {
      uVar4 = 0;
      if (uVar11 != 0) {
        uVar4 = uVar12 / uVar11;
      }
      uVar12 = uVar12 - uVar4 * uVar11;
    }
    puVar6 = (undefined8 *)(*param_1 + uVar12 * 8);
  }
  else {
    uVar3 = *puVar6;
    psVar10->cmd = (int)uVar3;
    psVar10->cmdsize = (int)((ulong)uVar3 >> 0x20);
  }
  *puVar6 = psVar10;
LAB_003caef4:
  param_1[3] = param_1[3] + 1;
  uVar3 = 1;
LAB_003caf04:
  auVar14._8_8_ = uVar3;
  auVar14._0_8_ = psVar10;
  return auVar14;
}



/* Entry: 003caf3c; end: 003cb017;  */

long * FUN_003caf3c(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  undefined4 auStack_54 [5];
  long *plStack_40;
  long *plStack_38;
  
  plVar2 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)((long)&MACH_HEADER.magic + 2);
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar2 = param_2;
  }
  plVar8 = (long *)param_1[1];
  if (param_2 <= plVar8) {
    if (param_2 < plVar8) {
      plVar2 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((plVar8 < (long *)((long)&MACH_HEADER.magic + 3)) ||
         (uVar10 = CONCAT17(POPCOUNT((char)((ulong)plVar8 >> 0x38)),
                            CONCAT16(POPCOUNT((char)((ulong)plVar8 >> 0x30)),
                                     CONCAT15(POPCOUNT((char)((ulong)plVar8 >> 0x28)),
                                              CONCAT14(POPCOUNT((char)((ulong)plVar8 >> 0x20)),
                                                       CONCAT13(POPCOUNT((char)((ulong)plVar8 >>
                                                                               0x18)),
                                                                CONCAT12(POPCOUNT((char)((ulong)
                                                  plVar8 >> 0x10)),
                                                  CONCAT11(POPCOUNT((char)((ulong)plVar8 >> 8)),
                                                           POPCOUNT((char)plVar8)))))))),
         uVar9 = NEON_uaddlv(uVar10,1),
         1 < (CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff))) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)((long)&MACH_HEADER.magic + 1) < plVar2) {
        plVar2 = (long *)(1L << (-LZCOUNT((long)plVar2 + -1) & 0x3fU));
      }
      if (param_2 <= plVar2) {
        param_2 = plVar2;
      }
      if (param_2 < plVar8) goto LAB_003caff0;
    }
    return plVar2;
  }
LAB_003caff0:
  if (param_2 == (long *)0x0) {
    plVar2 = (long *)*param_1;
    *param_1 = 0;
    if (plVar2 != (long *)0x0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if ((ulong)param_2 >> 0x3d != 0) {
      plVar8 = param_1;
      plVar2 = param_2;
      FUN_00349558();
      plStack_40 = param_2;
      plStack_38 = param_1;
      func_0x00339d8c(plVar8 + 3);
      auStack_54[0] = SUB84(plVar2,0);
      plVar2 = plVar8 + 0xd;
      plVar5 = plVar2;
      FUN_003cb1f8(plVar2,auStack_54);
      plVar5 = (long *)plVar5[3];
      FUN_003cb2ac(plVar2);
      func_0x00339da8(plVar8 + 3);
      return plVar5;
    }
    lVar3 = (long)param_2 << 3;
    __Znwm();
    plVar2 = (long *)*param_1;
    *param_1 = lVar3;
    if (plVar2 != (long *)0x0) {
      __ZdlPv();
    }
    plVar8 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar8 * 8) = 0;
      plVar8 = (long *)((long)plVar8 + 1);
    } while (param_2 != plVar8);
    plVar8 = (long *)param_1[2];
    if (plVar8 != (long *)0x0) {
      plVar5 = (long *)plVar8[1];
      uVar10 = CONCAT17(POPCOUNT((char)((ulong)param_2 >> 0x38)),
                        CONCAT16(POPCOUNT((char)((ulong)param_2 >> 0x30)),
                                 CONCAT15(POPCOUNT((char)((ulong)param_2 >> 0x28)),
                                          CONCAT14(POPCOUNT((char)((ulong)param_2 >> 0x20)),
                                                   CONCAT13(POPCOUNT((char)((ulong)param_2 >> 0x18))
                                                            ,CONCAT12(POPCOUNT((char)((ulong)param_2
                                                                                     >> 0x10)),
                                                                      CONCAT11(POPCOUNT((char)((
                                                  ulong)param_2 >> 8)),POPCOUNT((char)param_2)))))))
                       );
      uVar9 = NEON_uaddlv(uVar10,1);
      uVar4 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
      if (uVar4 < 2) {
        plVar5 = (long *)((ulong)plVar5 & (long)param_2 - 1U);
      }
      else if (param_2 <= plVar5) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar5 / (ulong)param_2;
        }
        plVar5 = (long *)((long)plVar5 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar5 * 8) = param_1 + 2;
      plVar6 = (long *)*plVar8;
      if (plVar6 != (long *)0x0) {
        do {
          plVar7 = (long *)plVar6[1];
          if (uVar4 < 2) {
            plVar7 = (long *)((ulong)plVar7 & (long)param_2 - 1U);
          }
          else if (param_2 <= plVar7) {
            uVar1 = 0;
            if (param_2 != (long *)0x0) {
              uVar1 = (ulong)plVar7 / (ulong)param_2;
            }
            plVar7 = (long *)((long)plVar7 - uVar1 * (long)param_2);
          }
          if (plVar7 != plVar5) {
            if (*(long *)(*param_1 + (long)plVar7 * 8) == 0) {
              *(long **)(*param_1 + (long)plVar7 * 8) = plVar8;
              plVar5 = plVar7;
            }
            else {
              *plVar8 = *plVar6;
              *plVar6 = **(long **)(*param_1 + (long)plVar7 * 8);
              **(undefined8 **)(*param_1 + (long)plVar7 * 8) = plVar6;
              plVar6 = plVar8;
            }
          }
          plVar8 = plVar6;
          plVar6 = (long *)*plVar8;
        } while (plVar6 != (long *)0x0);
      }
    }
  }
  return plVar2;
}



/* Entry: 003cb018; end: 003cb16f;  */

long FUN_003cb018(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  undefined4 uStack_54;
  
  if (param_2 == 0) {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      FUN_00349558();
      func_0x00339d8c(param_1 + 3);
      uStack_54 = (undefined4)param_2;
      plVar5 = param_1 + 0xd;
      plVar7 = plVar5;
      FUN_003cb1f8(plVar5,&uStack_54);
      lVar3 = plVar7[3];
      FUN_003cb2ac(plVar5);
      func_0x00339da8(param_1 + 3);
      return lVar3;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar4 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      uVar4 = plVar5[1];
      uVar10 = CONCAT17(POPCOUNT((char)(param_2 >> 0x38)),
                        CONCAT16(POPCOUNT((char)(param_2 >> 0x30)),
                                 CONCAT15(POPCOUNT((char)(param_2 >> 0x28)),
                                          CONCAT14(POPCOUNT((char)(param_2 >> 0x20)),
                                                   CONCAT13(POPCOUNT((char)(param_2 >> 0x18)),
                                                            CONCAT12(POPCOUNT((char)(param_2 >> 0x10
                                                                                    )),
                                                                     CONCAT11(POPCOUNT((char)(
                                                  param_2 >> 8)),POPCOUNT((char)param_2))))))));
      uVar9 = NEON_uaddlv(uVar10,1);
      uVar6 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
      if (uVar6 < 2) {
        uVar4 = uVar4 & param_2 - 1;
      }
      else if (param_2 <= uVar4) {
        uVar8 = 0;
        if (param_2 != 0) {
          uVar8 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar8 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
      plVar7 = (long *)*plVar5;
      if (plVar7 != (long *)0x0) {
        do {
          uVar8 = plVar7[1];
          if (uVar6 < 2) {
            uVar8 = uVar8 & param_2 - 1;
          }
          else if (param_2 <= uVar8) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar1 * param_2;
          }
          if (uVar8 != uVar4) {
            if (*(long *)(*param_1 + uVar8 * 8) == 0) {
              *(long **)(*param_1 + uVar8 * 8) = plVar5;
              uVar4 = uVar8;
            }
            else {
              *plVar5 = *plVar7;
              *plVar7 = **(long **)(*param_1 + uVar8 * 8);
              **(undefined8 **)(*param_1 + uVar8 * 8) = plVar7;
              plVar7 = plVar5;
            }
          }
          plVar5 = plVar7;
          plVar7 = (long *)*plVar5;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  return lVar3;
}



/* Entry: 003cb170; end: 003cb1f7;  */

undefined8 FUN_003cb170(long param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uStack_34;
  
  func_0x00339d8c(param_1 + 0x18);
  lVar1 = param_1 + 0x68;
  lVar2 = lVar1;
  uStack_34 = param_2;
  FUN_003cb1f8(lVar1,&uStack_34);
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  FUN_003cb2ac(lVar1);
  func_0x00339da8(param_1 + 0x18);
  return uVar3;
}



/* Entry: 003cb1f8; end: 003cb2ab;  */

long * FUN_003cb1f8(long *param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    uVar1 = *param_2;
    uVar4 = (ulong)uVar1;
    uVar9 = CONCAT17(POPCOUNT((char)(uVar3 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(uVar3 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(uVar3 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(uVar3 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(uVar3 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(uVar3 >> 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(uVar3 >> 
                                                  8)),POPCOUNT((char)uVar3))))))));
    uVar8 = NEON_uaddlv(uVar9,1);
    uVar10 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8);
    if ((uVar10 & 0xffffffff) < 2) {
      uVar5 = (ulong)((int)uVar3 - 1U & uVar1);
    }
    else {
      uVar5 = uVar4;
      if (uVar3 <= uVar4) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = uVar4 / uVar3;
        }
        uVar5 = uVar4 - uVar5 * uVar3;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      if (plVar6 != (long *)0x0) {
        do {
          uVar7 = plVar6[1];
          if (uVar7 == uVar4) {
            if (*(uint *)(plVar6 + 2) == uVar1) {
              return plVar6;
            }
          }
          else {
            if ((uVar10 & 0xffffffff) < 2) {
              uVar7 = uVar7 & uVar3 - 1;
            }
            else if (uVar3 <= uVar7) {
              uVar2 = 0;
              if (uVar3 != 0) {
                uVar2 = uVar7 / uVar3;
              }
              uVar7 = uVar7 - uVar2 * uVar3;
            }
            if (uVar7 != uVar5) {
              return (long *)0x0;
            }
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      return (long *)0x0;
    }
  }
  return (long *)0x0;
}



/* Entry: 003cb2ac; end: 003cb2eb;  */

undefined8 FUN_003cb2ac(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long alStack_38 [3];
  
  uVar2 = *param_2;
  FUN_003cb2ec(alStack_38);
  lVar1 = alStack_38[0];
  alStack_38[0] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return uVar2;
}



/* Entry: 003cb2ec; end: 003cb41f;  */

void FUN_003cb2ec(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar10 = CONCAT17(POPCOUNT((char)(uVar4 >> 0x38)),
                    CONCAT16(POPCOUNT((char)(uVar4 >> 0x30)),
                             CONCAT15(POPCOUNT((char)(uVar4 >> 0x28)),
                                      CONCAT14(POPCOUNT((char)(uVar4 >> 0x20)),
                                               CONCAT13(POPCOUNT((char)(uVar4 >> 0x18)),
                                                        CONCAT12(POPCOUNT((char)(uVar4 >> 0x10)),
                                                                 CONCAT11(POPCOUNT((char)(uVar4 >> 8
                                                                                         )),
                                                                          POPCOUNT((char)uVar4))))))
                            ));
  uVar9 = NEON_uaddlv(uVar10,1);
  uVar6 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
  if (uVar6 < 2) {
    uVar3 = uVar4 - 1 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if (uVar6 < 2) {
      uVar8 = uVar8 & uVar4 - 1;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_003cb3b8;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if (uVar6 < 2) {
      uVar8 = uVar8 & uVar4 - 1;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_003cb3b8;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_003cb3b8:
  lVar7 = *param_3;
  if (lVar7 != 0) {
    uVar8 = *(ulong *)(lVar7 + 8);
    if (uVar6 < 2) {
      uVar8 = uVar8 & uVar4 - 1;
    }
    else if (uVar4 <= uVar8) {
      uVar6 = 0;
      if (uVar4 != 0) {
        uVar6 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar6 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(*param_2 + uVar8 * 8) = plVar5;
      lVar7 = *param_3;
    }
  }
  *plVar5 = lVar7;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 003cb420; end: 003cb473;  */

void FUN_003cb420(long param_1,undefined8 param_2)

{
  int iVar1;
  
  func_0x00339d8c(param_1 + 0x18);
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined8 *)(*(long *)(param_1 + 8) + (long)iVar1 * 8) = param_2;
  *(int *)(param_1 + 0x14) = iVar1 + 1;
  func_0x00339da8(param_1 + 0x18);
  return;
}



/* Entry: 003cb474; end: 003cb61b;  */

void FUN_003cb474(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
  int *piVar8;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  puVar5 = (undefined8 *)*param_1;
  func_0x00339d8c();
  func_0x003c1f6c();
  puVar6 = (undefined *)*puVar5;
  FUN_003c1e28();
  puVar2 = (undefined *)0x7fffffffffffffff;
  if ((long)puVar6 < 0x7fffffffffffd8f0) {
    puVar2 = &UNK_00002710 + (long)puVar6;
  }
  puVar1 = puVar6;
  if (puVar6 != (undefined *)0x7fffffffffffffff) {
    puVar1 = puVar2;
  }
  puVar2 = (undefined *)0x8000000000000000;
  if (puVar6 != (undefined *)0x8000000000000000) {
    puVar2 = puVar1;
  }
  func_0x003c3ea4(&uStack_40,param_1 + 5,0,puVar2);
  if (uStack_40 != 0) {
    uStack_38 = uStack_40;
    if ((uStack_40 & 1) != 0) {
      piVar8 = (int *)(uStack_40 - 1);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar4) {
          *piVar8 = *piVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_003be608("backup_poller:pollset_work",&uStack_38,
                 "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_posix.cc"
                 ,0x1e6);
    if ((uStack_38 & 1) != 0) {
      FUN_0055293c();
    }
  }
  if ((uStack_40 & 1) != 0) {
    FUN_0055293c();
  }
  func_0x00339da8(*param_1);
  lVar7 = lRam0000000000b5e9f8;
  func_0x00339d8c();
  if (iRam0000000000b5ea00 == 1) {
    if (puRam0000000000b5ea08 != param_1) {
      func_0x00774544();
      func_0x0040cf10();
      func_0x0040cf10();
      FUN_0033c494(&uStack_48);
      __Unwind_Resume(lVar7);
      func_0x003c3e94(lVar7 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_0099a260)(lVar7);
      return;
    }
    puRam0000000000b5ea08 = (undefined8 *)0x0;
    iRam0000000000b5ea00 = 0;
    func_0x00339da8(lRam0000000000b5e9f8);
    param_1[2] = FUN_003cb61c;
    param_1[3] = param_1;
    param_1[4] = 0;
    func_0x003c3e84(param_1 + 5,param_1 + 1);
  }
  else {
    func_0x00339da8(lRam0000000000b5e9f8);
    uStack_48 = 0;
    FUN_003c2968(param_1 + 1,&uStack_48,0,1);
    if ((uStack_48 & 1) != 0) {
      FUN_0055293c();
    }
  }
  return;
}



/* Entry: 003cb61c; end: 003cb6a7;  */

void FUN_003cb61c(long param_1)

{
  func_0x003c3e94(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(param_1);
  return;
}



/* Entry: 003cb6a8; end: 003cb797;  */

void FUN_003cb6a8(undefined8 *param_1,ulong *param_2)

{
  long lVar1;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  char cStack_40;
  
  if ((char)param_2[4] == '\0') {
    FUN_003d6390(param_1);
    uStack_60 = uStack_60 & 0xffffffffffffff00;
    cStack_40 = '\0';
    if ((char)param_2[4] == '\0') {
      if (param_1 == (undefined8 *)0x0) {
        return;
      }
      goto LAB_003cb744;
    }
  }
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_50 = param_2[2];
  uStack_48 = param_2[3];
  param_2[3] = 0;
  cStack_40 = '\x01';
  lVar1 = param_1[3];
  func_0x00339d8c(lVar1 + 0x168);
  if (*(long *)(lVar1 + 0x1a8) != 0) {
    func_0x003ecf8c();
  }
  func_0x00339da8(lVar1 + 0x168);
  *(undefined1 *)(lVar1 + 0x15) = 0;
  if (cStack_40 != '\0') {
    FUN_003d61b4(&uStack_60);
  }
LAB_003cb744:
  *param_1 = &PTR____cxa_pure_virtual_009deca0;
  func_0x0038aa08(param_1 + 1);
  __ZdlPv(param_1);
  return;
}



/* Entry: 003cb798; end: 003cb8af;  */

void FUN_003cb798(long param_1)

{
  long lVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_41;
  ulong uStack_40;
  undefined1 *puStack_38;
  
  func_0x003c1840(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x1d8),
                  *(undefined8 *)(param_1 + 0x1e0),"tcp_unref_orphan");
  FUN_003ecf54(param_1 + 0x40);
  lVar1 = param_1 + 0x2a8;
  func_0x00339d8c(lVar1);
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  FUN_003b646c(&uStack_40,2,"endpoint destroyed",0x12,&uStack_41,&uStack_60);
  if ((uStack_40 & 1) != 0) {
    FUN_0055293c();
  }
  puStack_38 = (undefined1 *)&uStack_60;
  FUN_0033d548(&puStack_38);
  func_0x00339da8(lVar1);
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  func_0x00339d70(lVar1);
  FUN_003cb8b0(param_1 + 0x300);
  FUN_00388a1c(param_1 + 0x288);
  FUN_00377730(param_1 + 0x278);
  if (*(char *)(param_1 + 0x277) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x260));
  }
  if (*(char *)(param_1 + 0x25f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x248));
  }
  func_0x00339d70(param_1 + 0x168);
  __ZdlPv(param_1);
  return;
}



/* Entry: 003cb8b0; end: 003cb93f;  */

long * FUN_003cb8b0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (0 < (int)param_1[2])) {
    lVar2 = 0;
    lVar1 = 0;
    do {
      FUN_003ecf54(*param_1 + lVar2);
      lVar1 = lVar1 + 1;
      lVar2 = lVar2 + 0x140;
    } while (lVar1 < (int)param_1[2]);
    lVar1 = *param_1;
  }
  FUN_00338cb8(lVar1);
  FUN_00338cb8(param_1[1]);
  FUN_003c9f48(param_1 + 0xd);
  func_0x00339d70(param_1 + 3);
  return param_1;
}



/* Entry: 003cb940; end: 003cb963;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_003cb940(undefined8 param_1,ulong param_2,undefined8 param_3,byte *param_4)

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



/* Entry: 003cb964; end: 003cb9e3;  */

int FUN_003cb964(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  
  func_0x00339d8c(param_1 + 0x18);
  lVar1 = *(long *)(param_1 + 0x70);
  if (lVar1 != 0) {
    uVar2 = 0;
    do {
      if ((*(int *)(lVar1 + 0xf8) == 0) && (uVar2 = uVar2 + 1, param_2 < uVar2)) {
        iVar3 = 0;
        do {
          iVar3 = iVar3 + 1;
          lVar1 = *(long *)(lVar1 + 0xf0);
        } while (lVar1 != 0);
        goto LAB_003cb9b4;
      }
      lVar1 = *(long *)(lVar1 + 0xe8);
    } while (lVar1 != 0);
  }
  iVar3 = 0;
LAB_003cb9b4:
  func_0x00339da8(param_1 + 0x18);
  return iVar3;
}



/* Entry: 003cb9e4; end: 003cba07;  */

undefined8 FUN_003cb9e4(undefined8 param_1)

{
  func_0x00339ce8();
  return param_1;
}



/* Entry: 003cba08; end: 003cbd17;  */

void FUN_003cba08(undefined8 *param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long *plStack_a8;
  undefined8 *puStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar6 = 0xd0;
  __Znwm();
  *(undefined8 *)(lVar6 + 8) = 0;
  *(undefined8 *)(lVar6 + 0x58) = 0;
  *(undefined8 *)(lVar6 + 0x70) = 0;
  *(undefined8 *)(lVar6 + 0x90) = 0;
  *(undefined8 *)(lVar6 + 0x88) = 0;
  *(undefined8 *)(lVar6 + 0x10) = 0;
  *(undefined8 *)(lVar6 + 0x60) = 0;
  *(undefined4 *)(lVar6 + 0x68) = 0;
  *(undefined8 *)(lVar6 + 0x78) = 0;
  *(undefined4 *)(lVar6 + 0x80) = 0;
  *(undefined8 *)(lVar6 + 0xa0) = 0;
  *(undefined8 *)(lVar6 + 0x98) = 0;
  *(undefined8 *)(lVar6 + 0xb0) = 0;
  *(undefined8 *)(lVar6 + 0xa8) = 0;
  *(undefined8 *)(lVar6 + 0xc0) = 0;
  *(undefined8 *)(lVar6 + 0xb8) = 0;
  *(undefined8 *)(lVar6 + 200) = 0;
  lVar7 = lVar6;
  FUN_003c56b0();
  lVar11 = 0;
  uVar13 = 0;
  *(char *)(lVar6 + 0x6a) = (char)lVar7;
  *(undefined1 *)(lVar6 + 0x6b) = 0;
  if (param_3 == (ulong *)0x0) goto LAB_003cbac0;
LAB_003cbab8:
  uVar9 = *param_3;
  do {
    if (uVar9 <= uVar13) {
      FUN_00339cc8(lVar6,1);
      FUN_00339d50(lVar6 + 0x18);
      *(undefined8 *)(lVar6 + 0x58) = 0;
      *(undefined8 *)(lVar6 + 0x60) = 0;
      *(undefined1 *)(lVar6 + 0x68) = 0;
      *(undefined8 *)(lVar6 + 0x88) = 0;
      *(undefined8 *)(lVar6 + 0x90) = 0;
      *(undefined8 *)(lVar6 + 0x98) = param_2;
      *(undefined8 *)(lVar6 + 8) = 0;
      *(undefined8 *)(lVar6 + 0x10) = 0;
      *(undefined8 *)(lVar6 + 0x70) = 0;
      *(undefined8 *)(lVar6 + 0x78) = 0;
      *(undefined4 *)(lVar6 + 0x80) = 0;
      puVar8 = param_3;
      FUN_003a277c();
      *(ulong **)(lVar6 + 0xb0) = puVar8;
      *(undefined8 *)(lVar6 + 0xb8) = 0;
      func_0x003d5b44(&plStack_a8,param_3);
      puStack_a0 = (undefined8 *)plStack_a8[2];
      plStack_98 = (long *)plStack_a8[3];
      if (plStack_98 != (long *)0x0) {
        plVar1 = plStack_98 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_003cceb4(lVar6 + 0xc0,&puStack_a0);
      plVar1 = plStack_98;
      if (plStack_98 != (long *)0x0) {
        plVar2 = plStack_98 + 1;
        do {
          lVar11 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
      if (plStack_a8 != (long *)0x0) {
        plVar1 = plStack_a8 + 1;
        do {
          lVar11 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 + -1 == 0) {
          (**(code **)(*plStack_a8 + 8))();
        }
      }
      *(undefined8 *)(lVar6 + 0xa8) = 0;
      *param_4 = lVar6;
      *param_1 = 0;
      return;
    }
    uVar9 = param_3[1];
    uVar12 = *(undefined8 *)(uVar9 + lVar11 + 8);
    iVar5 = 0x8c9db2;
    _strcmp("grpc.so_reuseport",uVar12);
    if (iVar5 == 0) {
      if (*(int *)(uVar9 + lVar11) != 1) {
        FUN_00338cb8(lVar6);
        uStack_70 = 0;
        uStack_68 = 0;
        uStack_78 = 0;
        puVar10 = &uStack_78;
        FUN_003b646c(param_1,2,"grpc.so_reuseport must be an integer",0x24,&plStack_a8,&uStack_78);
LAB_003cbcc0:
        puStack_a0 = puVar10;
        FUN_0033d548(&puStack_a0);
        return;
      }
      FUN_003c56b0();
      if (iVar5 == 0) {
        bVar4 = false;
      }
      else {
        bVar4 = *(int *)(param_3[1] + lVar11 + 0x10) != 0;
      }
      *(bool *)(lVar6 + 0x6a) = bVar4;
    }
    else {
      iVar5 = 0x8c9de9;
      _strcmp("grpc.expand_wildcard_addrs",uVar12);
      if (iVar5 == 0) {
        if (*(int *)(uVar9 + lVar11) != 1) {
          FUN_00338cb8(lVar6);
          uStack_88 = 0;
          uStack_80 = 0;
          uStack_90 = 0;
          puVar10 = &uStack_90;
          FUN_003b646c(param_1,2,"grpc.expand_wildcard_addrs must be an integer",0x2d,&plStack_a8,
                       &uStack_90);
          goto LAB_003cbcc0;
        }
        *(bool *)(lVar6 + 0x6b) = *(int *)(uVar9 + lVar11 + 0x10) != 0;
      }
    }
    uVar13 = uVar13 + 1;
    lVar11 = lVar11 + 0x20;
    if (param_3 != (ulong *)0x0) goto LAB_003cbab8;
LAB_003cbac0:
    uVar9 = 0;
  } while( true );
}



/* Entry: 003cbd18; end: 003cc2c3;  */

void FUN_003cbd18(long param_1,long *****param_2,code *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  char *pcVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  long *****ppppplVar11;
  long ****pppplVar12;
  char **ppcVar13;
  dword *pdVar15;
  long *****ppppplVar16;
  char *pcVar17;
  long lVar18;
  int *piVar19;
  ulong *extraout_x8;
  long lVar20;
  long ****pppplVar21;
  long lVar22;
  undefined8 *unaff_x24;
  char *unaff_x25;
  dword *unaff_x26;
  ulong unaff_x27;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  ulong uStack_428;
  undefined1 auStack_420 [4];
  int iStack_41c;
  int *piStack_418;
  char *pcStack_410;
  ulong uStack_408;
  char *pcStack_400;
  char *pcStack_3f8;
  char *pcStack_3f0;
  undefined8 uStack_3e8;
  long lStack_3e0;
  char *pcStack_3d8;
  char *pcStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  uint uStack_3b4;
  char *pcStack_3b0;
  long ***appplStack_3a4 [16];
  long ***ppplStack_320;
  long ***ppplStack_318;
  long ***ppplStack_310;
  long ***ppplStack_308;
  long ***ppplStack_300;
  long ***ppplStack_2f8;
  long ***ppplStack_2f0;
  long ***ppplStack_2e8;
  long ***ppplStack_2e0;
  long ***ppplStack_2d8;
  long ***ppplStack_2d0;
  long ***ppplStack_2c8;
  long ***ppplStack_2c0;
  long ***ppplStack_2b8;
  long ***ppplStack_2b0;
  long ***ppplStack_2a8;
  undefined4 auStack_2a0 [2];
  ulong auStack_298 [17];
  ulong auStack_210 [17];
  long lStack_188;
  undefined8 uStack_170;
  ulong uStack_168;
  dword *pdStack_160;
  code *pcStack_158;
  undefined8 *puStack_150;
  code *pcStack_148;
  undefined8 *puStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  char *pcStack_110;
  long lStack_100;
  long ****pppplStack_f8;
  long ****pppplStack_f0;
  long ****pppplStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined1 uStack_cd;
  undefined1 auStack_cc [4];
  uint uStack_c8;
  uint uStack_c4;
  undefined8 uStack_c0;
  long lStack_b8;
  long ***appplStack_b0 [3];
  long ****pppplStack_98;
  long ****pppplStack_90;
  code *pcStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  ulong *puVar14;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  if (param_3 == (code *)0x0) {
    func_0x00774578();
LAB_003cc204:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x3cc208);
    (*pcVar6)();
  }
  lVar22 = param_1 + 0x18;
  ppppplVar16 = param_2;
  pcVar17 = (char *)param_3;
  func_0x00339d8c(lVar22);
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00774614();
    goto LAB_003cc204;
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    func_0x007745e0();
    goto LAB_003cc204;
  }
  *(code **)(param_1 + 8) = param_3;
  *(undefined8 **)(param_1 + 0x10) = param_4;
  *(long ******)(param_1 + 0xa0) = param_2;
  lVar23 = *(long *)(param_1 + 0x70);
  lStack_100 = lVar22;
  if (lVar23 != 0) {
    pppplStack_f8 = appplStack_b0;
    param_3 = FUN_003ccf18;
    lVar22 = 0xffffffff;
    do {
      if (*(char *)(param_1 + 0x6a) == '\0') {
        pppplVar12 = *param_2;
        pppplVar21 = param_2[1];
LAB_003cbfd8:
        if (pppplVar21 != pppplVar12) {
          param_4 = (undefined8 *)0x0;
          do {
            func_0x003c1918(pppplVar12[(long)param_4],*(undefined8 *)(lVar23 + 8));
            param_4 = (undefined8 *)((long)param_4 + 1);
            pppplVar12 = *param_2;
          } while (param_4 < (undefined8 *)((long)param_2[1] - (long)pppplVar12 >> 3));
        }
        ppppplVar16 = (long *****)(lVar23 + 0xa8);
        *(code **)(lVar23 + 0xb0) = FUN_003ccf18;
        *(long *)(lVar23 + 0xb8) = lVar23;
        *(undefined8 *)(lVar23 + 0xc0) = 0;
        func_0x003c18d8(*(undefined8 *)(lVar23 + 8));
        *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 1;
        lVar23 = *(long *)(lVar23 + 0xe8);
      }
      else {
        unaff_x25 = (char *)(lVar23 + 0x18);
        pcVar6 = (code *)unaff_x25;
        func_0x003d05c8();
        pppplVar12 = *param_2;
        pppplVar21 = param_2[1];
        if (((int)pcVar6 != 0) ||
           (param_4 = (undefined8 *)((long)pppplVar21 - (long)pppplVar12),
           param_4 < (undefined8 *)((long)&MACH_HEADER.cpusubtype + 1))) goto LAB_003cbfd8;
        FUN_003bdeb4(&lStack_b8);
        uVar4 = (int)((ulong)param_4 >> 3) - 1;
        unaff_x24 = (undefined8 *)(ulong)uVar4;
        uStack_c0 = 0;
        for (lVar18 = *(long *)(lVar23 + 0xe8); (lVar18 != 0 && (*(int *)(lVar18 + 0xf8) != 0));
            lVar18 = *(long *)(lVar18 + 0xe8)) {
          *(uint *)(lVar18 + 0xa4) = *(int *)(lVar18 + 0xa4) + uVar4;
        }
        if (uVar4 != 0) {
          param_4 = (undefined8 *)0x0;
          do {
            uStack_c8 = 0xffffffff;
            uStack_c4 = 0xffffffff;
            ppppplVar16 = (long *****)((long)&MACH_HEADER.magic + 1);
            pcVar17 = (char *)0x0;
            FUN_003c5d08(&pppplStack_90,unaff_x25,1,0,auStack_cc,&uStack_c4);
            if ((long *****)pppplStack_90 != (long *****)0x0) {
LAB_003cc030:
              pppplStack_f0 = pppplStack_90;
              goto LAB_003cc0a0;
            }
            ppppplVar16 = (long *****)(ulong)uStack_c4;
            pcVar17 = unaff_x25;
            FUN_003cdd88(&pppplStack_90,*(undefined8 *)(lVar23 + 0x10),ppppplVar16,unaff_x25,1,
                         &uStack_c8);
            if ((long *****)pppplStack_90 != (long *****)0x0) goto LAB_003cc030;
            *(int *)(*(long *)(lVar23 + 0x10) + 0x80) =
                 *(int *)(*(long *)(lVar23 + 0x10) + 0x80) + 1;
            FUN_003a0930(&pppplStack_90,unaff_x25,1);
            func_0x003bdb4c(&lStack_b8,&pppplStack_90);
            FUN_0035d18c(&pppplStack_90);
            if (lStack_b8 != 0) {
              FUN_00552ec8(&pppplStack_90,&lStack_b8,1);
              pcVar17 = (char *)pcStack_88;
              ppppplVar16 = (long *****)pppplStack_90;
              if (-1 < (long)puStack_80) {
                pcVar17 = (char *)((ulong)puStack_80 >> 0x38);
                ppppplVar16 = &pppplStack_90;
              }
              uStack_e0 = 0;
              lStack_d8 = 0;
              pppplStack_e8 = (long ****)0x0;
              FUN_003b646c(&pppplStack_f0,2,ppppplVar16,pcVar17,&uStack_cd,&pppplStack_e8);
              pppplStack_98 = (long ****)&pppplStack_e8;
              FUN_0033d548(&pppplStack_98);
              if ((long)puStack_80 < 0) {
                __ZdlPv(pppplStack_90);
              }
              goto LAB_003cc0a0;
            }
            unaff_x26 = &section_000000b8.reserved2;
            FUN_00338c74();
            unaff_x26[0x3e] = 1;
            uVar24 = *(undefined8 *)(lVar23 + 0xe8);
            *(undefined8 *)(unaff_x26 + 0x3c) = *(undefined8 *)(lVar23 + 0xf0);
            *(undefined8 *)(unaff_x26 + 0x3a) = uVar24;
            *(dword **)(lVar23 + 0xe8) = unaff_x26;
            *(dword **)(lVar23 + 0xf0) = unaff_x26;
            *(undefined8 *)(unaff_x26 + 4) = *(undefined8 *)(lVar23 + 0x10);
            *unaff_x26 = uStack_c4;
            if (lStack_b8 != 0) {
              FUN_0055169c(&lStack_b8);
              goto LAB_003cc204;
            }
            unaff_x27 = (ulong)uStack_c4;
            pppplStack_90 = pppplStack_f8;
            pcStack_88 = FUN_00561110;
            uStack_78 = 0x5606ec;
            puStack_80 = param_4;
            FUN_0056189c(&pppplStack_e8,"tcp-server-listener:%s/clone-%d",0x1f,&pppplStack_90,2);
            ppppplVar16 = (long *****)pppplStack_e8;
            if (-1 < lStack_d8) {
              ppppplVar16 = &pppplStack_e8;
            }
            pcVar17 = (char *)((long)&MACH_HEADER.magic + 1);
            uVar10 = unaff_x27;
            FUN_003c17c0();
            *(ulong *)(unaff_x26 + 2) = uVar10;
            if (lStack_d8 < 0) {
              __ZdlPv(pppplStack_e8);
            }
            uVar24 = *(undefined8 *)unaff_x25;
            *(undefined8 *)(unaff_x26 + 8) = *(undefined8 *)(lVar23 + 0x20);
            *(undefined8 *)(unaff_x26 + 6) = uVar24;
            uVar25 = *(undefined8 *)(lVar23 + 0x30);
            uVar24 = *(undefined8 *)(lVar23 + 0x28);
            uVar27 = *(undefined8 *)(lVar23 + 0x40);
            uVar26 = *(undefined8 *)(lVar23 + 0x38);
            uVar29 = *(undefined8 *)(lVar23 + 0x50);
            uVar28 = *(undefined8 *)(lVar23 + 0x48);
            uVar30 = *(undefined8 *)(lVar23 + 0x58);
            *(undefined8 *)(unaff_x26 + 0x18) = *(undefined8 *)(lVar23 + 0x60);
            *(undefined8 *)(unaff_x26 + 0x16) = uVar30;
            *(undefined8 *)(unaff_x26 + 0x14) = uVar29;
            *(undefined8 *)(unaff_x26 + 0x12) = uVar28;
            *(undefined8 *)(unaff_x26 + 0x10) = uVar27;
            *(undefined8 *)(unaff_x26 + 0xe) = uVar26;
            *(undefined8 *)(unaff_x26 + 0xc) = uVar25;
            *(undefined8 *)(unaff_x26 + 10) = uVar24;
            uVar25 = *(undefined8 *)(lVar23 + 0x70);
            uVar24 = *(undefined8 *)(lVar23 + 0x68);
            uVar27 = *(undefined8 *)(lVar23 + 0x80);
            uVar26 = *(undefined8 *)(lVar23 + 0x78);
            uVar28 = *(undefined8 *)(lVar23 + 0x88);
            uVar1 = *(undefined4 *)(lVar23 + 0x98);
            *(undefined8 *)(unaff_x26 + 0x24) = *(undefined8 *)(lVar23 + 0x90);
            *(undefined8 *)(unaff_x26 + 0x22) = uVar28;
            *(undefined8 *)(unaff_x26 + 0x20) = uVar27;
            *(undefined8 *)(unaff_x26 + 0x1e) = uVar26;
            *(undefined8 *)(unaff_x26 + 0x1c) = uVar25;
            *(undefined8 *)(unaff_x26 + 0x1a) = uVar24;
            unaff_x26[0x26] = uVar1;
            unaff_x26[0x27] = uStack_c8;
            unaff_x26[0x28] = *(undefined4 *)(lVar23 + 0xa0);
            unaff_x26[0x29] = (uVar4 - (int)param_4) + *(int *)(lVar23 + 0xa4);
            if (*(long *)(unaff_x26 + 2) == 0) {
              pcStack_110 = "sp->emfd";
              FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_posix.cc"
                           ,0x1a0,2,"assertion failed: %s");
              _abort();
              goto LAB_003cc204;
            }
            lVar18 = *(long *)(*(long *)(*(long *)(lVar23 + 0x10) + 0x78) + 0xe8);
            if (lVar18 != 0) {
              do {
                lVar20 = lVar18;
                lVar18 = *(long *)(lVar20 + 0xe8);
              } while (lVar18 != 0);
              *(long *)(*(long *)(lVar23 + 0x10) + 0x78) = lVar20;
            }
            param_4 = (undefined8 *)((long)param_4 + 1);
          } while (param_4 != unaff_x24);
        }
        pppplStack_f0 = (long ****)0x0;
LAB_003cc0a0:
        FUN_0035d18c(&lStack_b8);
        if ((long *****)pppplStack_f0 == (long *****)0x0) {
          unaff_x25 = (char *)((long)&MACH_HEADER.magic + 1);
        }
        else {
          pppplStack_90 = pppplStack_f0;
          if (((ulong)pppplStack_f0 & 1) != 0) {
            piVar19 = (int *)((long)pppplStack_f0 + -1);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar19,0x10);
              if (bVar3) {
                *piVar19 = *piVar19 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          ppppplVar16 = &pppplStack_90;
          unaff_x25 = "clone_port";
          pcVar17 = 
          "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_posix.cc"
          ;
          FUN_003be608();
          if (((ulong)pppplStack_90 & 1) != 0) {
            FUN_0055293c();
          }
        }
        if (((ulong)pppplStack_f0 & 1) != 0) {
          FUN_0055293c();
        }
        if ((int)unaff_x25 == 0) {
          func_0x007745ac();
          goto LAB_003cc204;
        }
        pppplVar12 = *param_2;
        if (param_2[1] != pppplVar12) {
          param_4 = (undefined8 *)0x0;
          do {
            unaff_x24 = (undefined8 *)(lVar23 + 8);
            func_0x003c1918(pppplVar12[(long)param_4],*unaff_x24);
            ppppplVar16 = (long *****)(lVar23 + 0xa8);
            *(code **)(lVar23 + 0xb0) = FUN_003ccf18;
            *(long *)(lVar23 + 0xb8) = lVar23;
            *(undefined8 *)(lVar23 + 0xc0) = 0;
            func_0x003c18d8(*unaff_x24);
            *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 1;
            lVar23 = *(long *)(lVar23 + 0xe8);
            param_4 = (undefined8 *)((long)param_4 + 1);
            pppplVar12 = *param_2;
          } while (param_4 < (undefined8 *)((long)param_2[1] - (long)pppplVar12 >> 3));
        }
      }
    } while (lVar23 != 0);
  }
  lVar23 = lStack_100;
  func_0x00339da8();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pppplStack_98 = (long ****)&pppplStack_e8;
  FUN_0033d548(&pppplStack_98);
  if ((long)puStack_80 < 0) {
    __ZdlPv(pppplStack_90);
  }
  FUN_0033c494(&uStack_c0);
  FUN_0035d18c(&lStack_b8);
  lVar18 = lVar23;
  __Unwind_Resume();
  pcStack_118 = FUN_003cc2c4;
  lStack_188 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_170 = 0;
  uStack_168 = unaff_x27;
  pdStack_160 = unaff_x26;
  pcStack_158 = (code *)unaff_x25;
  puStack_150 = unaff_x24;
  pcStack_148 = param_3;
  puStack_140 = param_4;
  lStack_138 = lVar22;
  lStack_130 = param_1;
  lStack_128 = lVar23;
  puStack_120 = &stack0xfffffffffffffff0;
  if (0x80 < *(uint *)(ppppplVar16 + 0x10)) {
    func_0x00774648();
    goto LAB_003cc978;
  }
  ppppplVar11 = ppppplVar16;
  FUN_003a1340();
  iStack_41c = (int)ppppplVar11;
  uStack_428 = 0;
  *(undefined4 *)pcVar17 = 0xffffffff;
  if (*(long *)(lVar18 + 0x78) == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(*(long *)(lVar18 + 0x78) + 0xa0) + 1;
  }
  FUN_003d05d8(ppppplVar16);
  if ((iStack_41c == 0) &&
     (piVar19 = *(int **)(lVar18 + 0x70), piStack_418 = piVar19, piVar19 != (int *)0x0)) {
    do {
      auStack_2a0[0] = 0x80;
      iVar7 = *piVar19;
      piStack_418 = piVar19;
      _getsockname(iVar7,&ppplStack_320,auStack_2a0);
      if (iVar7 == 0) {
        pppplVar12 = &ppplStack_320;
        FUN_003a1340();
        if (0 < (int)pppplVar12) {
          ppplStack_2b8 = (long ***)ppppplVar16[0xd];
          ppplStack_2c0 = (long ***)ppppplVar16[0xc];
          ppplStack_2a8 = (long ***)ppppplVar16[0xf];
          ppplStack_2b0 = (long ***)ppppplVar16[0xe];
          auStack_2a0[0] = *(undefined4 *)(ppppplVar16 + 0x10);
          ppplStack_2f8 = (long ***)ppppplVar16[5];
          ppplStack_300 = (long ***)ppppplVar16[4];
          ppplStack_2e8 = (long ***)ppppplVar16[7];
          ppplStack_2f0 = (long ***)ppppplVar16[6];
          ppplStack_2d8 = (long ***)ppppplVar16[9];
          ppplStack_2e0 = (long ***)ppppplVar16[8];
          ppplStack_2c8 = (long ***)ppppplVar16[0xb];
          ppplStack_2d0 = (long ***)ppppplVar16[10];
          ppplStack_318 = (long ***)ppppplVar16[1];
          ppplStack_320 = (long ***)*ppppplVar16;
          ppplStack_308 = (long ***)ppppplVar16[3];
          ppplStack_310 = (long ***)ppppplVar16[2];
          FUN_003a13ac(&ppplStack_320,pppplVar12);
          ppppplVar16 = (long *****)&ppplStack_320;
          iStack_41c = (int)pppplVar12;
          break;
        }
      }
      piVar19 = *(int **)(piVar19 + 0x3a);
      piStack_418 = piVar19;
    } while (piVar19 != (int *)0x0);
  }
  ppppplVar11 = ppppplVar16;
  FUN_003a075c(ppppplVar16,&iStack_41c);
  iVar7 = iStack_41c;
  iVar8 = (int)ppppplVar11;
  if (iVar8 == 0) {
    ppppplVar11 = ppppplVar16;
    func_0x003a06e4(ppppplVar16,appplStack_3a4);
    if ((int)ppppplVar11 != 0) {
      ppppplVar16 = (long *****)appplStack_3a4;
    }
    FUN_003cd970(auStack_210,lVar18,ppppplVar16,iVar9,0,auStack_420,&piStack_418);
    uVar10 = uStack_428;
    if (auStack_210[0] != uStack_428) {
      uStack_428 = auStack_210[0];
      auStack_210[0] = 0x36;
      if ((uVar10 & 1) != 0) {
        FUN_0055293c();
      }
    }
    auStack_298[0] = 0;
    if (uStack_428 == 0) {
      iVar9 = 1;
    }
    else {
      puVar14 = &uStack_428;
      FUN_00552b00(puVar14,auStack_298);
      iVar9 = (int)puVar14;
      if ((auStack_298[0] & 1) != 0) {
        FUN_0055293c();
      }
    }
    uVar10 = auStack_210[0];
    if ((auStack_210[0] & 1) != 0) {
      FUN_0055293c();
    }
    if (iVar9 != 0) {
      *(int *)pcVar17 = piStack_418[0x27];
    }
    *extraout_x8 = uStack_428;
    goto LAB_003cc790;
  }
  lStack_3c8 = 0;
  lStack_3c0 = 0;
  pcStack_3d8 = (char *)0x0;
  pcStack_3d0 = (char *)0x0;
  *(undefined4 *)pcVar17 = 0xffffffff;
  FUN_003cef70();
  if ((iVar8 == 0) || (*(char *)(lVar18 + 0x6b) == '\0')) {
    FUN_003a084c(iVar7,auStack_210,auStack_298);
    FUN_003cd970(&pcStack_3f0,lVar18,auStack_298,iVar9,0,&uStack_3b4,&lStack_3c0);
    pcVar5 = pcStack_3d0;
    if (pcStack_3f0 != pcStack_3d0) {
      pcStack_3d0 = pcStack_3f0;
      pcStack_3f0 = segment_command_00000020.segname + 0xe;
      if (((ulong)pcVar5 & 1) != 0) {
        FUN_0055293c();
      }
    }
    pcStack_3b0 = (char *)0x0;
    if (pcStack_3d0 == (char *)0x0) {
      ppcVar13 = (char **)((long)&MACH_HEADER.magic + 1);
    }
    else {
      ppcVar13 = &pcStack_3d0;
      FUN_00552b00(ppcVar13,&pcStack_3b0);
      if (((ulong)pcStack_3b0 & 1) != 0) {
        FUN_0055293c();
      }
    }
    if (((ulong)pcStack_3f0 & 1) != 0) {
      FUN_0055293c();
    }
    if ((int)ppcVar13 == 0) {
LAB_003cc57c:
      FUN_003a13ac(auStack_210,iVar7);
      FUN_003cd970(&pcStack_3f0,lVar18,auStack_210,iVar9,ppcVar13,&uStack_3b4,&lStack_3c8);
      pcVar5 = pcStack_3d8;
      if (pcStack_3f0 != pcStack_3d8) {
        pcStack_3d8 = pcStack_3f0;
        pcStack_3f0 = segment_command_00000020.segname + 0xe;
        if (((ulong)pcVar5 & 1) != 0) {
          FUN_0055293c();
        }
      }
      pcStack_3b0 = (char *)0x0;
      if (pcStack_3d8 == (char *)0x0) {
        iVar9 = 1;
      }
      else {
        ppcVar13 = &pcStack_3d8;
        FUN_00552b00(ppcVar13,&pcStack_3b0);
        iVar9 = (int)ppcVar13;
        if (((ulong)pcStack_3b0 & 1) != 0) {
          FUN_0055293c();
        }
      }
      if (((ulong)pcStack_3f0 & 1) != 0) {
        FUN_0055293c();
      }
      if (iVar9 == 0) {
LAB_003cc65c:
        iVar9 = *(int *)pcVar17;
      }
      else {
        iVar9 = *(int *)(lStack_3c8 + 0x9c);
        *(int *)pcVar17 = iVar9;
        if (lStack_3c0 != 0) {
          *(undefined4 *)(lStack_3c8 + 0xf8) = 1;
          *(long *)(lStack_3c0 + 0xf0) = lStack_3c8;
          goto LAB_003cc65c;
        }
      }
      if (iVar9 < 1) {
        uStack_3e8 = 0;
        lStack_3e0 = 0;
        pcStack_3f0 = (char *)0x0;
        FUN_003b646c(extraout_x8,2,"Failed to add any wildcard listeners",0x24,&pcStack_3f8,
                     &pcStack_3f0);
        pcStack_3b0 = (char *)&pcStack_3f0;
        FUN_0033d548(&pcStack_3b0);
        if ((pcStack_3d0 == (char *)0x0) || (pcStack_3d8 == (char *)0x0)) {
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_posix.cc"
                       ,0x16d,2,"assertion failed: %s");
          _abort();
LAB_003cc978:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x3cc97c);
          (*pcVar6)();
        }
        pcStack_3f8 = (char *)*extraout_x8;
        if (((ulong)pcStack_3f8 & 1) != 0) {
          pcVar17 = pcStack_3f8 + -1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pcVar17,0x10);
            if (bVar3) {
              *(int *)pcVar17 = *(int *)pcVar17 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        pcStack_400 = pcStack_3d0;
        if (((ulong)pcStack_3d0 & 1) != 0) {
          pcVar17 = pcStack_3d0 + -1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pcVar17,0x10);
            if (bVar3) {
              *(int *)pcVar17 = *(int *)pcVar17 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        FUN_003be56c(&pcStack_3b0,&pcStack_3f8,&pcStack_400);
        pcVar17 = (char *)*extraout_x8;
        if (pcStack_3b0 == pcVar17) {
LAB_003cc888:
          if (((ulong)pcVar17 & 1) != 0) {
            FUN_0055293c();
          }
        }
        else {
          *extraout_x8 = (ulong)pcStack_3b0;
          pcStack_3b0 = segment_command_00000020.segname + 0xe;
          if (((ulong)pcVar17 & 1) != 0) {
            FUN_0055293c();
            pcVar17 = pcStack_3b0;
            goto LAB_003cc888;
          }
        }
        if (((ulong)pcStack_400 & 1) != 0) {
          FUN_0055293c();
        }
        if (((ulong)pcStack_3f8 & 1) != 0) {
          FUN_0055293c();
        }
        uStack_408 = *extraout_x8;
        if ((uStack_408 & 1) != 0) {
          piVar19 = (int *)(uStack_408 - 1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar19,0x10);
            if (bVar3) {
              *piVar19 = *piVar19 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        pcStack_410 = pcStack_3d8;
        if (((ulong)pcStack_3d8 & 1) != 0) {
          pcVar17 = pcStack_3d8 + -1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pcVar17,0x10);
            if (bVar3) {
              *(int *)pcVar17 = *(int *)pcVar17 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        FUN_003be56c(&pcStack_3b0,&uStack_408,&pcStack_410);
        pcVar17 = (char *)*extraout_x8;
        if (pcStack_3b0 == pcVar17) {
LAB_003cc920:
          if (((ulong)pcVar17 & 1) != 0) {
            FUN_0055293c();
          }
        }
        else {
          *extraout_x8 = (ulong)pcStack_3b0;
          pcStack_3b0 = segment_command_00000020.segname + 0xe;
          if (((ulong)pcVar17 & 1) != 0) {
            FUN_0055293c();
            pcVar17 = pcStack_3b0;
            goto LAB_003cc920;
          }
        }
        if (((ulong)pcStack_410 & 1) != 0) {
          FUN_0055293c();
        }
        if ((uStack_408 & 1) != 0) {
          FUN_0055293c();
        }
        goto LAB_003cc76c;
      }
      if (pcStack_3d0 != (char *)0x0) {
        pcStack_3b0 = pcStack_3d0;
        if (((ulong)pcStack_3d0 & 1) != 0) {
          pcVar17 = pcStack_3d0 + -1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pcVar17,0x10);
            if (bVar3) {
              *(int *)pcVar17 = *(int *)pcVar17 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        FUN_003be004(&pcStack_3f0,&pcStack_3b0);
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_posix.cc"
                     ,0x15c,1,"Failed to add :: listener, the environment may not support IPv6: %s")
        ;
        if (lStack_3e0 < 0) {
          __ZdlPv(pcStack_3f0);
        }
        if (((ulong)pcStack_3b0 & 1) != 0) {
          FUN_0055293c();
        }
      }
      if (pcStack_3d8 != (char *)0x0) {
        pcStack_3f8 = pcStack_3d8;
        if (((ulong)pcStack_3d8 & 1) != 0) {
          pcVar17 = pcStack_3d8 + -1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pcVar17,0x10);
            if (bVar3) {
              *(int *)pcVar17 = *(int *)pcVar17 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        FUN_003be004(&pcStack_3f0,&pcStack_3f8);
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_posix.cc"
                     ,0x163,1,
                     "Failed to add 0.0.0.0 listener, the environment may not support IPv4: %s");
        if (lStack_3e0 < 0) {
          __ZdlPv(pcStack_3f0);
        }
        if (((ulong)pcStack_3f8 & 1) != 0) {
          FUN_0055293c();
        }
      }
    }
    else {
      iVar7 = *(int *)(lStack_3c0 + 0x9c);
      *(int *)pcVar17 = iVar7;
      if ((uStack_3b4 & 0xfffffffd) != 1) {
        ppcVar13 = (char **)((long)&MACH_HEADER.magic + 1);
        goto LAB_003cc57c;
      }
    }
    *extraout_x8 = 0;
  }
  else {
    FUN_003ce46c(extraout_x8,lVar18,iVar9,iVar7,pcVar17);
  }
LAB_003cc76c:
  if (((ulong)pcStack_3d8 & 1) != 0) {
    FUN_0055293c();
  }
  if (((ulong)pcStack_3d0 & 1) != 0) {
    FUN_0055293c();
  }
  uVar10 = uStack_428;
  if ((uStack_428 & 1) != 0) {
    FUN_0055293c();
  }
LAB_003cc790:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  FUN_0033c494(&pcStack_3b0);
  FUN_0033c494(&pcStack_410);
  FUN_0033c494(&uStack_408);
  FUN_0033c494(extraout_x8);
  FUN_0033c494(&pcStack_3d8);
  FUN_0033c494(&pcStack_3d0);
  FUN_0033c494(&uStack_428);
  __Unwind_Resume();
  pdVar15 = &MACH_HEADER.ncmds;
  __Znwm();
  *(undefined ***)pdVar15 = &PTR_FUN_009e0478;
  *(ulong *)(pdVar15 + 2) = uVar10;
  *(dword **)(uVar10 + 0xb8) = pdVar15;
  return;
}



/* Entry: 003cc2c4; end: 003ccb13;  */

void FUN_003cc2c4(ulong *param_1,long param_2,undefined8 *param_3,int *param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  char **ppcVar8;
  ulong uVar10;
  dword *pdVar11;
  char *pcVar12;
  int *piVar13;
  ulong uStack_318;
  undefined1 auStack_310 [4];
  int iStack_30c;
  int *piStack_308;
  char *pcStack_300;
  ulong uStack_2f8;
  char *pcStack_2f0;
  char *pcStack_2e8;
  char *pcStack_2e0;
  undefined8 uStack_2d8;
  long lStack_2d0;
  char *pcStack_2c8;
  char *pcStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  uint uStack_2a4;
  char *pcStack_2a0;
  undefined8 auStack_294 [16];
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined4 auStack_190 [2];
  ulong auStack_188 [17];
  ulong auStack_100 [17];
  long lStack_78;
  ulong *puVar9;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
  if (0x80 < *(uint *)(param_3 + 0x10)) {
    func_0x00774648();
    goto LAB_003cc978;
  }
  puVar7 = param_3;
  FUN_003a1340();
  iStack_30c = (int)puVar7;
  uStack_318 = 0;
  *param_4 = -1;
  if (*(long *)(param_2 + 0x78) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(*(long *)(param_2 + 0x78) + 0xa0) + 1;
  }
  FUN_003d05d8(param_3);
  if ((iStack_30c == 0) &&
     (piVar13 = *(int **)(param_2 + 0x70), piStack_308 = piVar13, piVar13 != (int *)0x0)) {
    do {
      auStack_190[0] = 0x80;
      iVar4 = *piVar13;
      piStack_308 = piVar13;
      _getsockname(iVar4,&uStack_210,auStack_190);
      if (iVar4 == 0) {
        puVar7 = &uStack_210;
        FUN_003a1340();
        if (0 < (int)puVar7) {
          uStack_1a8 = param_3[0xd];
          uStack_1b0 = param_3[0xc];
          uStack_198 = param_3[0xf];
          uStack_1a0 = param_3[0xe];
          auStack_190[0] = *(undefined4 *)(param_3 + 0x10);
          uStack_1e8 = param_3[5];
          uStack_1f0 = param_3[4];
          uStack_1d8 = param_3[7];
          uStack_1e0 = param_3[6];
          uStack_1c8 = param_3[9];
          uStack_1d0 = param_3[8];
          uStack_1b8 = param_3[0xb];
          uStack_1c0 = param_3[10];
          uStack_208 = param_3[1];
          uStack_210 = *param_3;
          uStack_1f8 = param_3[3];
          uStack_200 = param_3[2];
          FUN_003a13ac(&uStack_210,puVar7);
          param_3 = &uStack_210;
          iStack_30c = (int)puVar7;
          break;
        }
      }
      piVar13 = *(int **)(piVar13 + 0x3a);
      piStack_308 = piVar13;
    } while (piVar13 != (int *)0x0);
  }
  puVar7 = param_3;
  FUN_003a075c(param_3,&iStack_30c);
  iVar4 = iStack_30c;
  iVar5 = (int)puVar7;
  if (iVar5 == 0) {
    puVar7 = param_3;
    func_0x003a06e4(param_3,auStack_294);
    if ((int)puVar7 != 0) {
      param_3 = auStack_294;
    }
    FUN_003cd970(auStack_100,param_2,param_3,iVar6,0,auStack_310,&piStack_308);
    uVar10 = uStack_318;
    if (auStack_100[0] != uStack_318) {
      uStack_318 = auStack_100[0];
      auStack_100[0] = 0x36;
      if ((uVar10 & 1) != 0) {
        FUN_0055293c();
      }
    }
    auStack_188[0] = 0;
    if (uStack_318 == 0) {
      iVar6 = 1;
    }
    else {
      puVar9 = &uStack_318;
      FUN_00552b00(puVar9,auStack_188);
      iVar6 = (int)puVar9;
      if ((auStack_188[0] & 1) != 0) {
        FUN_0055293c();
      }
    }
    uVar10 = auStack_100[0];
    if ((auStack_100[0] & 1) != 0) {
      FUN_0055293c();
    }
    if (iVar6 != 0) {
      *param_4 = piStack_308[0x27];
    }
    *param_1 = uStack_318;
    goto LAB_003cc790;
  }
  lStack_2b8 = 0;
  lStack_2b0 = 0;
  pcStack_2c8 = (char *)0x0;
  pcStack_2c0 = (char *)0x0;
  *param_4 = -1;
  FUN_003cef70();
  if ((iVar5 == 0) || (*(char *)(param_2 + 0x6b) == '\0')) {
    FUN_003a084c(iVar4,auStack_100,auStack_188);
    FUN_003cd970(&pcStack_2e0,param_2,auStack_188,iVar6,0,&uStack_2a4,&lStack_2b0);
    pcVar12 = pcStack_2c0;
    if (pcStack_2e0 != pcStack_2c0) {
      pcStack_2c0 = pcStack_2e0;
      pcStack_2e0 = segment_command_00000020.segname + 0xe;
      if (((ulong)pcVar12 & 1) != 0) {
        FUN_0055293c();
      }
    }
    pcStack_2a0 = (char *)0x0;
    if (pcStack_2c0 == (char *)0x0) {
      ppcVar8 = (char **)((long)&MACH_HEADER.magic + 1);
    }
    else {
      ppcVar8 = &pcStack_2c0;
      FUN_00552b00(ppcVar8,&pcStack_2a0);
      if (((ulong)pcStack_2a0 & 1) != 0) {
        FUN_0055293c();
      }
    }
    if (((ulong)pcStack_2e0 & 1) != 0) {
      FUN_0055293c();
    }
    if ((int)ppcVar8 == 0) {
LAB_003cc57c:
      FUN_003a13ac(auStack_100,iVar4);
      FUN_003cd970(&pcStack_2e0,param_2,auStack_100,iVar6,ppcVar8,&uStack_2a4,&lStack_2b8);
      pcVar12 = pcStack_2c8;
      if (pcStack_2e0 != pcStack_2c8) {
        pcStack_2c8 = pcStack_2e0;
        pcStack_2e0 = segment_command_00000020.segname + 0xe;
        if (((ulong)pcVar12 & 1) != 0) {
          FUN_0055293c();
        }
      }
      pcStack_2a0 = (char *)0x0;
      if (pcStack_2c8 == (char *)0x0) {
        iVar6 = 1;
      }
      else {
        ppcVar8 = &pcStack_2c8;
        FUN_00552b00(ppcVar8,&pcStack_2a0);
        iVar6 = (int)ppcVar8;
        if (((ulong)pcStack_2a0 & 1) != 0) {
          FUN_0055293c();
        }
      }
      if (((ulong)pcStack_2e0 & 1) != 0) {
        FUN_0055293c();
      }
      if (iVar6 == 0) {
LAB_003cc65c:
        iVar6 = *param_4;
      }
      else {
        iVar6 = *(int *)(lStack_2b8 + 0x9c);
        *param_4 = iVar6;
        if (lStack_2b0 != 0) {
          *(undefined4 *)(lStack_2b8 + 0xf8) = 1;
          *(long *)(lStack_2b0 + 0xf0) = lStack_2b8;
          goto LAB_003cc65c;
        }
      }
      if (iVar6 < 1) {
        uStack_2d8 = 0;
        lStack_2d0 = 0;
        pcStack_2e0 = (char *)0x0;
        FUN_003b646c(param_1,2,"Failed to add any wildcard listeners",0x24,&pcStack_2e8,&pcStack_2e0
                    );
        pcStack_2a0 = (char *)&pcStack_2e0;
        FUN_0033d548(&pcStack_2a0);
        if ((pcStack_2c0 == (char *)0x0) || (pcStack_2c8 == (char *)0x0)) {
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_posix.cc"
                       ,0x16d,2,"assertion failed: %s");
          _abort();
LAB_003cc978:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x3cc97c);
          (*pcVar3)();
        }
        pcStack_2e8 = (char *)*param_1;
        if (((ulong)pcStack_2e8 & 1) != 0) {
          pcVar12 = pcStack_2e8 + -1;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(pcVar12,0x10);
            if (bVar2) {
              *(int *)pcVar12 = *(int *)pcVar12 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        pcStack_2f0 = pcStack_2c0;
        if (((ulong)pcStack_2c0 & 1) != 0) {
          pcVar12 = pcStack_2c0 + -1;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(pcVar12,0x10);
            if (bVar2) {
              *(int *)pcVar12 = *(int *)pcVar12 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        FUN_003be56c(&pcStack_2a0,&pcStack_2e8,&pcStack_2f0);
        pcVar12 = (char *)*param_1;
        if (pcStack_2a0 == pcVar12) {
LAB_003cc888:
          if (((ulong)pcVar12 & 1) != 0) {
            FUN_0055293c();
          }
        }
        else {
          *param_1 = (ulong)pcStack_2a0;
          pcStack_2a0 = segment_command_00000020.segname + 0xe;
          if (((ulong)pcVar12 & 1) != 0) {
            FUN_0055293c();
            pcVar12 = pcStack_2a0;
            goto LAB_003cc888;
          }
        }
        if (((ulong)pcStack_2f0 & 1) != 0) {
          FUN_0055293c();
        }
        if (((ulong)pcStack_2e8 & 1) != 0) {
          FUN_0055293c();
        }
        uStack_2f8 = *param_1;
        if ((uStack_2f8 & 1) != 0) {
          piVar13 = (int *)(uStack_2f8 - 1);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar2) {
              *piVar13 = *piVar13 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        pcStack_300 = pcStack_2c8;
        if (((ulong)pcStack_2c8 & 1) != 0) {
          pcVar12 = pcStack_2c8 + -1;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(pcVar12,0x10);
            if (bVar2) {
              *(int *)pcVar12 = *(int *)pcVar12 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        FUN_003be56c(&pcStack_2a0,&uStack_2f8,&pcStack_300);
        pcVar12 = (char *)*param_1;
        if (pcStack_2a0 == pcVar12) {
LAB_003cc920:
          if (((ulong)pcVar12 & 1) != 0) {
            FUN_0055293c();
          }
        }
        else {
          *param_1 = (ulong)pcStack_2a0;
          pcStack_2a0 = segment_command_00000020.segname + 0xe;
          if (((ulong)pcVar12 & 1) != 0) {
            FUN_0055293c();
            pcVar12 = pcStack_2a0;
            goto LAB_003cc920;
          }
        }
        if (((ulong)pcStack_300 & 1) != 0) {
          FUN_0055293c();
        }
        if ((uStack_2f8 & 1) != 0) {
          FUN_0055293c();
        }
        goto LAB_003cc76c;
      }
      if (pcStack_2c0 != (char *)0x0) {
        pcStack_2a0 = pcStack_2c0;
        if (((ulong)pcStack_2c0 & 1) != 0) {
          pcVar12 = pcStack_2c0 + -1;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(pcVar12,0x10);
            if (bVar2) {
              *(int *)pcVar12 = *(int *)pcVar12 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        FUN_003be004(&pcStack_2e0,&pcStack_2a0);
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_posix.cc"
                     ,0x15c,1,"Failed to add :: listener, the environment may not support IPv6: %s")
        ;
        if (lStack_2d0 < 0) {
          __ZdlPv(pcStack_2e0);
        }
        if (((ulong)pcStack_2a0 & 1) != 0) {
          FUN_0055293c();
        }
      }
      if (pcStack_2c8 != (char *)0x0) {
        pcStack_2e8 = pcStack_2c8;
        if (((ulong)pcStack_2c8 & 1) != 0) {
          pcVar12 = pcStack_2c8 + -1;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(pcVar12,0x10);
            if (bVar2) {
              *(int *)pcVar12 = *(int *)pcVar12 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        FUN_003be004(&pcStack_2e0,&pcStack_2e8);
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_posix.cc"
                     ,0x163,1,
                     "Failed to add 0.0.0.0 listener, the environment may not support IPv4: %s");
        if (lStack_2d0 < 0) {
          __ZdlPv(pcStack_2e0);
        }
        if (((ulong)pcStack_2e8 & 1) != 0) {
          FUN_0055293c();
        }
      }
    }
    else {
      iVar4 = *(int *)(lStack_2b0 + 0x9c);
      *param_4 = iVar4;
      if ((uStack_2a4 & 0xfffffffd) != 1) {
        ppcVar8 = (char **)((long)&MACH_HEADER.magic + 1);
        goto LAB_003cc57c;
      }
    }
    *param_1 = 0;
  }
  else {
    FUN_003ce46c(param_1,param_2,iVar6,iVar4,param_4);
  }
LAB_003cc76c:
  if (((ulong)pcStack_2c8 & 1) != 0) {
    FUN_0055293c();
  }
  if (((ulong)pcStack_2c0 & 1) != 0) {
    FUN_0055293c();
  }
  uVar10 = uStack_318;
  if ((uStack_318 & 1) != 0) {
    FUN_0055293c();
  }
LAB_003cc790:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  FUN_0033c494(&pcStack_2a0);
  FUN_0033c494(&pcStack_300);
  FUN_0033c494(&uStack_2f8);
  FUN_0033c494(param_1);
  FUN_0033c494(&pcStack_2c8);
  FUN_0033c494(&pcStack_2c0);
  FUN_0033c494(&uStack_318);
  __Unwind_Resume();
  pdVar11 = &MACH_HEADER.ncmds;
  __Znwm();
  *(undefined ***)pdVar11 = &PTR_FUN_009e0478;
  *(ulong *)(pdVar11 + 2) = uVar10;
  *(dword **)(uVar10 + 0xb8) = pdVar11;
  return;
}



/* Entry: 003ccb14; end: 003ccb47;  */

void FUN_003ccb14(long param_1)

{
  dword *pdVar1;
  
  pdVar1 = &MACH_HEADER.ncmds;
  __Znwm();
  *(undefined ***)pdVar1 = &PTR_FUN_009e0478;
  *(long *)(pdVar1 + 2) = param_1;
  *(dword **)(param_1 + 0xb8) = pdVar1;
  return;
}



/* Entry: 003ccb48; end: 003ccbdb;  */

undefined4 FUN_003ccb48(long param_1,uint param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  lVar1 = param_1 + 0x18;
  func_0x00339d8c(lVar1);
  puVar3 = *(undefined4 **)(param_1 + 0x70);
  if (puVar3 != (undefined4 *)0x0) {
    uVar2 = 0;
    do {
      if ((puVar3[0x3e] == 0) && (uVar2 = uVar2 + 1, param_2 < uVar2)) {
        param_3 = param_3 + 1;
        do {
          param_3 = param_3 + -1;
          if (param_3 == 0) {
            func_0x00339da8(lVar1);
            return *puVar3;
          }
          puVar3 = *(undefined4 **)(puVar3 + 0x3c);
        } while (puVar3 != (undefined4 *)0x0);
        break;
      }
      puVar3 = *(undefined4 **)(puVar3 + 0x3a);
    } while (puVar3 != (undefined4 *)0x0);
  }
  func_0x00339da8(lVar1);
  return 0xffffffff;
}



/* Entry: 003ccbdc; end: 003ccc7f;  */

void FUN_003ccbdc(long param_1,undefined8 *param_2)

{
  ulong *puVar1;
  long *plVar2;
  ulong uStack_38;
  
  func_0x00339d8c(param_1 + 0x18);
  if (param_2 != (undefined8 *)0x0) {
    uStack_38 = 0;
    puVar1 = &uStack_38;
    FUN_003b7ab0();
    param_2[3] = puVar1;
    if ((uStack_38 & 1) != 0) {
      FUN_0055293c();
    }
    plVar2 = (long *)(param_1 + 0x88);
    *param_2 = 0;
    if (*plVar2 != 0) {
      plVar2 = *(long **)(param_1 + 0x90);
    }
    *plVar2 = (long)param_2;
    *(undefined8 **)(param_1 + 0x90) = param_2;
  }
  func_0x00339da8(param_1 + 0x18);
  return;
}



/* Entry: 003ccc80; end: 003ccdc3;  */

void FUN_003ccc80(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c1;
  ulong uStack_c0;
  undefined1 *puStack_b8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_51;
  ulong uStack_50;
  undefined1 *puStack_48;
  
  lVar3 = param_1;
  FUN_00339d14();
  if ((int)lVar3 != 0) {
    func_0x003cb948(param_1);
    lVar3 = param_1 + 0x18;
    func_0x00339d8c(lVar3);
    FUN_003c1f14(&uStack_70,param_1 + 0x88);
    func_0x00339da8(lVar3);
    lVar2 = lVar3;
    func_0x00339d8c();
    if (*(char *)(param_1 + 0x68) != '\0') {
      func_0x0077467c();
      func_0x0040cf10();
      if ((uStack_50 & 1) != 0) {
        FUN_0055293c();
      }
      puStack_48 = (undefined1 *)&uStack_70;
      FUN_0033d548(&puStack_48);
      __Unwind_Resume();
      func_0x00339d8c(lVar2 + 0x18);
      *(undefined1 *)(lVar2 + 0x69) = 1;
      if (*(long *)(lVar2 + 0x58) != 0) {
        for (lVar3 = *(long *)(lVar2 + 0x70); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0xe8)) {
          uVar1 = *(undefined8 *)(lVar3 + 8);
          uStack_d8 = 0;
          uStack_d0 = 0;
          uStack_e0 = 0;
          FUN_003b646c(&uStack_c0,2,"Server shutdown",0xf,&uStack_c1,&uStack_e0);
          FUN_003c1850(uVar1,&uStack_c0);
          if ((uStack_c0 & 1) != 0) {
            FUN_0055293c();
          }
          puStack_b8 = (undefined1 *)&uStack_e0;
          FUN_0033d548(&puStack_b8);
        }
      }
      func_0x00339da8(lVar2 + 0x18);
      return;
    }
    *(undefined1 *)(param_1 + 0x68) = 1;
    if (*(long *)(param_1 + 0x58) == 0) {
      func_0x00339da8(lVar3);
      FUN_003cd460(param_1);
    }
    else {
      for (lVar2 = *(long *)(param_1 + 0x70); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0xe8)) {
        uVar1 = *(undefined8 *)(lVar2 + 8);
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_70 = 0;
        FUN_003b646c(&uStack_50,2,"Server destroyed",0x10,&uStack_51,&uStack_70);
        FUN_003c1850(uVar1,&uStack_50);
        if ((uStack_50 & 1) != 0) {
          FUN_0055293c();
        }
        puStack_48 = (undefined1 *)&uStack_70;
        FUN_0033d548(&puStack_48);
      }
      func_0x00339da8(lVar3);
    }
  }
  return;
}



/* Entry: 003ccdc4; end: 003cceb3;  */

void FUN_003ccdc4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_51;
  ulong uStack_50;
  undefined1 *puStack_48;
  
  func_0x00339d8c(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x69) = 1;
  if (*(long *)(param_1 + 0x58) != 0) {
    for (lVar2 = *(long *)(param_1 + 0x70); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0xe8)) {
      uVar1 = *(undefined8 *)(lVar2 + 8);
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_70 = 0;
      FUN_003b646c(&uStack_50,2,"Server shutdown",0xf,&uStack_51,&uStack_70);
      FUN_003c1850(uVar1,&uStack_50);
      if ((uStack_50 & 1) != 0) {
        FUN_0055293c();
      }
      puStack_48 = (undefined1 *)&uStack_70;
      FUN_0033d548(&puStack_48);
    }
  }
  func_0x00339da8(param_1 + 0x18);
  return;
}



/* Entry: 003cceb4; end: 003ccf17;  */

undefined8 * FUN_003cceb4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 003ccf18; end: 003cd45f;  */

/* WARNING: Possible PIC construction at 0x003ccf80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003cd4ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003cd59c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003cd544: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003cd270: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003cd3e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x003cd274) */
/* WARNING: Removing unreachable block (ram,0x003cd548) */
/* WARNING: Removing unreachable block (ram,0x003cd5a0) */
/* WARNING: Removing unreachable block (ram,0x003cd5a8) */
/* WARNING: Removing unreachable block (ram,0x003cd5c0) */
/* WARNING: Removing unreachable block (ram,0x003cd5c4) */
/* WARNING: Removing unreachable block (ram,0x003cd5cc) */
/* WARNING: Removing unreachable block (ram,0x003cd5e4) */
/* WARNING: Removing unreachable block (ram,0x003cd5f4) */
/* WARNING: Removing unreachable block (ram,0x003cd600) */
/* WARNING: Removing unreachable block (ram,0x003cd5d4) */
/* WARNING: Removing unreachable block (ram,0x003cd4f0) */
/* WARNING: Removing unreachable block (ram,0x003ccf84) */
/* WARNING: Removing unreachable block (ram,0x003cd3e4) */
/* WARNING: Removing unreachable block (ram,0x00339344) */

qword * FUN_003ccf18(qword *param_1,qword *param_2,qword *param_3,char *param_4)

{
  ulong *puVar1;
  undefined1 *puVar2;
  undefined8 *****pppppuVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  qword **ppqVar7;
  int iVar8;
  qword *pqVar9;
  undefined8 uVar10;
  qword qVar11;
  ulong uVar12;
  qword *pqVar13;
  qword *pqVar14;
  ulong uVar15;
  double dVar16;
  uint *puVar17;
  char *pcVar18;
  long *plVar19;
  segment_command *psVar20;
  qword *pqVar21;
  qword *pqVar22;
  qword *pqVar23;
  uint uVar24;
  undefined1 *puVar25;
  qword qVar26;
  char *pcVar27;
  ulong uVar28;
  uint uVar29;
  code *unaff_x21;
  qword *pqVar30;
  undefined8 unaff_x22;
  long lVar31;
  qword *unaff_x23;
  uint *unaff_x24;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 *****pppppuVar34;
  code *pcVar35;
  char acStack_4f1 [673];
  undefined1 auStack_250 [16];
  qword *pqStack_240;
  qword *pqStack_238;
  undefined8 ****ppppuStack_230;
  code *pcStack_228;
  qword *pqStack_220;
  qword *pqStack_218;
  undefined8 ****ppppuStack_210;
  code *pcStack_208;
  uint *puStack_200;
  qword *pqStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  qword *pqStack_1e0;
  qword *pqStack_1d8;
  undefined8 ****ppppuStack_1d0;
  code *pcStack_1c8;
  char *pcStack_1c0;
  qword *pqStack_1b8;
  undefined8 ****appppuStack_1b0 [2];
  char cStack_199;
  long alStack_198 [4];
  ulong uStack_178;
  long *plStack_170;
  ulong uStack_168;
  char *pcStack_140;
  undefined8 uStack_138;
  char cStack_129;
  qword aqStack_110 [16];
  undefined4 auStack_90 [4];
  long lStack_80;
  
  ppqVar7 = (qword **)&pcStack_1c0;
  pppppuVar34 = (undefined8 *****)&stack0xfffffffffffffff0;
  lStack_80 = *(long *)PTR____stack_chk_guard_00999f88;
  pqVar9 = param_2;
  if (*param_2 == 0) {
    pqStack_1b8 = aqStack_110 + 0x10;
    unaff_x22 = 0x80;
    unaff_x23 = (qword *)0xb5ea20;
    pqVar13 = (qword *)0xb5ea20;
    do {
      while( true ) {
        aqStack_110[0xd] = 0;
        aqStack_110[0xc] = 0;
        aqStack_110[0xf] = 0;
        aqStack_110[0xe] = 0;
        aqStack_110[9] = 0;
        aqStack_110[8] = 0;
        aqStack_110[0xb] = 0;
        aqStack_110[10] = 0;
        aqStack_110[5] = 0;
        aqStack_110[4] = 0;
        aqStack_110[7] = 0;
        aqStack_110[6] = 0;
        aqStack_110[1] = 0;
        aqStack_110[0] = 0;
        aqStack_110[3] = 0;
        aqStack_110[2] = 0;
        auStack_90[0] = 0x80;
        unaff_x24 = (uint *)(ulong)(uint)*param_1;
        pqVar9 = aqStack_110;
        param_3 = (qword *)((long)&MACH_HEADER.magic + 1);
        param_4 = (char *)((long)&MACH_HEADER.magic + 1);
        FUN_003c6014();
        if ((int)unaff_x24 < 0) break;
        dVar16 = *(double *)(*(long *)(param_1[2] + 0xc0) + 8);
        FUN_003d6c4c();
        if (dVar16 <= 0.9) {
          iVar8 = (int)aqStack_110;
          func_0x003d05c8();
          if (iVar8 != 0) {
            aqStack_110[0xd] = 0;
            aqStack_110[0xc] = 0;
            aqStack_110[0xf] = 0;
            aqStack_110[0xe] = 0;
            aqStack_110[9] = 0;
            aqStack_110[8] = 0;
            aqStack_110[0xb] = 0;
            aqStack_110[10] = 0;
            aqStack_110[5] = 0;
            aqStack_110[4] = 0;
            aqStack_110[7] = 0;
            aqStack_110[6] = 0;
            aqStack_110[1] = 0;
            aqStack_110[0] = 0;
            aqStack_110[3] = 0;
            aqStack_110[2] = 0;
            auStack_90[0] = 0x80;
            puVar17 = unaff_x24;
            _getsockname(unaff_x24,aqStack_110,pqStack_1b8);
            if ((int)puVar17 < 0) {
              ___error();
              pcVar27 = (char *)(ulong)*puVar17;
              _strerror();
              param_4 = "Failed getsockname: %s";
              pqVar9 = (qword *)((long)&section_000000b8.nrelocs + 2);
              param_3 = (qword *)((long)&MACH_HEADER.magic + 2);
              pcStack_1c0 = pcVar27;
              FUN_00339074(
                          "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_posix.cc"
                          );
              _close(unaff_x24);
              goto LAB_003ccf58;
            }
          }
          FUN_003c4f84(&uStack_178,unaff_x24);
          if ((uStack_178 & 1) != 0) {
            FUN_0055293c();
          }
          param_3 = *(qword **)(param_1[2] + 0xb0);
          pqVar9 = (qword *)((long)&MACH_HEADER.magic + 2);
          FUN_003c5bd4(&pcStack_140,unaff_x24);
          pcVar27 = pcStack_140;
          pcVar18 = (char *)*param_2;
          if (pcStack_140 == pcVar18) {
LAB_003cd108:
            if (((ulong)pcVar18 & 1) != 0) {
              FUN_0055293c();
            }
            pcVar27 = (char *)*param_2;
          }
          else {
            *param_2 = (qword)pcStack_140;
            pcStack_140 = segment_command_00000020.segname + 0xe;
            if (((ulong)pcVar18 & 1) != 0) {
              FUN_0055293c();
              pcVar18 = pcStack_140;
              goto LAB_003cd108;
            }
          }
          if (pcVar27 != (char *)0x0) goto LAB_003ccf58;
          FUN_003a0d08(alStack_198,aqStack_110);
          if (alStack_198[0] != 0) {
            FUN_00552ec8(&pcStack_140,alStack_198,1);
            pcStack_1c0 = pcStack_140;
            if (-1 < cStack_129) {
              pcStack_1c0 = (char *)&pcStack_140;
            }
            param_4 = "Invalid address: %s";
            pqVar9 = (qword *)((long)&section_000000b8.reserved3 + 2);
            param_3 = (qword *)((long)&MACH_HEADER.magic + 2);
            FUN_00339074(
                        "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_posix.cc"
                        );
            if (cStack_129 < '\0') {
              __ZdlPv(pcStack_140);
            }
            FUN_0035d18c(alStack_198);
            goto LAB_003ccf58;
          }
          pcStack_140 = "tcp-server-connection:";
          uStack_138 = 0x16;
          plVar19 = alStack_198;
          FUN_00375c3c();
          uStack_168 = plVar19[1];
          plStack_170 = (long *)*plVar19;
          if (-1 < (char)*(byte *)((long)plVar19 + 0x17)) {
            uStack_168 = (ulong)*(byte *)((long)plVar19 + 0x17);
            plStack_170 = plVar19;
          }
          FUN_00575d30(appppuStack_1b0,&pcStack_140,&plStack_170);
          pppppuVar3 = (undefined8 *****)appppuStack_1b0[0];
          if (-1 < cStack_199) {
            pppppuVar3 = appppuStack_1b0;
          }
          FUN_003c17c0(unaff_x24,pppppuVar3,1);
          lVar31 = param_1[2];
          puVar1 = (ulong *)(lVar31 + 0xa8);
          do {
            uVar15 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar15 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          uVar28 = (*(long **)(param_1[2] + 0xa0))[1] - **(long **)(param_1[2] + 0xa0) >> 3;
          uVar12 = 0;
          if (uVar28 != 0) {
            uVar12 = uVar15 / uVar28;
          }
          uVar32 = *(undefined8 *)(**(long **)(lVar31 + 0xa0) + (uVar15 - uVar12 * uVar28) * 8);
          func_0x003c1918(uVar32,unaff_x24);
          psVar20 = &segment_command_00000020;
          FUN_00338c74();
          lVar31 = param_1[2];
          psVar20->cmd = (int)lVar31;
          psVar20->cmdsize = (int)((ulong)lVar31 >> 0x20);
          *(qword *)psVar20->segname = param_1[0x14];
          psVar20->segname[8] = '\0';
          unaff_x21 = *(code **)(lVar31 + 8);
          uVar10 = *(undefined8 *)(lVar31 + 0x10);
          uVar33 = *(undefined8 *)(lVar31 + 0xb0);
          plVar19 = alStack_198;
          FUN_00375c3c();
          uVar15 = plVar19[1];
          plVar6 = (long *)*plVar19;
          if (-1 < (char)*(byte *)((long)plVar19 + 0x17)) {
            uVar15 = (ulong)*(byte *)((long)plVar19 + 0x17);
            plVar6 = plVar19;
          }
          FUN_003c8808(unaff_x24,uVar33,plVar6,uVar15);
          (*unaff_x21)(uVar10,unaff_x24,uVar32,psVar20);
          if (cStack_199 < '\0') {
            __ZdlPv(appppuStack_1b0[0]);
          }
          FUN_0035d18c(alStack_198);
        }
        else {
          do {
            pcVar27 = pcRam0000000000b5ea20 + 1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(0xb5ea20,0x10);
            if (bVar5) {
              cVar4 = ExclusiveMonitorsStatus();
              pcRam0000000000b5ea20 = pcVar27;
            }
          } while (cVar4 != '\0');
          if ((long)pcVar27 % 1000 == 1) {
            pcStack_1c0 = pcVar27;
            FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_posix.cc"
                         ,0xe6,1,
                         "Dropped >= %lld new connection attempts due to high memory pressure");
          }
          _close(unaff_x24);
        }
      }
      puVar17 = unaff_x24;
      ___error();
    } while (*puVar17 == 4);
    ___error();
    if (((*puVar17 == 0x23) || (___error(), *puVar17 == 0x35)) || (___error(), *puVar17 == 0x23)) {
      pqVar30 = (qword *)param_1[1];
      pqVar9 = param_1 + 0x15;
      func_0x003c18d8();
      if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_80) {
        return pqVar30;
      }
      ___stack_chk_fail();
      if (cStack_129 < '\0') {
        __ZdlPv(pcStack_140);
      }
      FUN_0035d18c(alStack_198);
      pqVar21 = pqVar30;
      __Unwind_Resume();
      pqStack_1f8 = (qword *)0xb5ea20;
      uStack_1f0 = 0x80;
      pcStack_1c8 = FUN_003cd460;
      pqVar14 = pqVar21 + 3;
      pqVar22 = pqVar14;
      puStack_200 = unaff_x24;
      pcStack_1e8 = unaff_x21;
      pqStack_1e0 = param_2;
      pqStack_1d8 = pqVar30;
      ppppuStack_1d0 = pppppuVar34;
      func_0x00339d8c();
      if ((char)*(uint *)(pqVar21 + 0xd) == '\0') {
        func_0x007746b0();
        pcStack_208 = FUN_003cd50c;
        param_1 = pqVar22 + 3;
        pqVar30 = param_1;
        pqStack_220 = pqVar14;
        pqStack_218 = pqVar21;
        ppppuStack_210 = &ppppuStack_1d0;
        func_0x00339d8c();
        uVar15 = pqVar22[0xc] + 1;
        pqVar22[0xc] = uVar15;
        pqVar14 = param_1;
        if (uVar15 == *(uint *)(pqVar22 + 0x10)) {
          ppqVar7 = &pqStack_220;
          unaff_x23 = pqVar13;
          pppppuVar34 = &ppppuStack_210;
          pcVar35 = (code *)0x3cd548;
        }
        else if (uVar15 < *(uint *)(pqVar22 + 0x10)) {
          ppqVar7 = (qword **)&puStack_200;
          param_1 = pqStack_218;
          pqVar22 = pqStack_220;
          unaff_x23 = pqVar13;
          pppppuVar34 = (undefined8 *****)ppppuStack_210;
          pcVar35 = pcStack_208;
        }
        else {
          func_0x007746e4();
          pcStack_228 = FUN_003cd570;
          pqVar14 = pqVar30 + 3;
          pqVar13 = pqVar14;
          pqStack_240 = pqVar22;
          pqStack_238 = param_1;
          ppppuStack_230 = &ppppuStack_210;
          func_0x00339d8c(pqVar14);
          if ((char)*(uint *)(pqVar30 + 0xd) == '\0') {
            func_0x00774718();
            func_0x0040cf10();
            FUN_0033c494(auStack_250);
            __Unwind_Resume(pqVar13);
            return pqVar13;
          }
          ppqVar7 = (qword **)auStack_250;
          param_1 = pqVar30;
          pqVar22 = pqVar14;
          pppppuVar34 = &ppppuStack_230;
          pcVar35 = (code *)0x3cd5a0;
        }
      }
      else {
        lVar31 = pqVar21[0xe];
        if (lVar31 == 0) {
          ppqVar7 = (qword **)&puStack_200;
          param_1 = pqVar21;
          pqVar22 = pqVar14;
          unaff_x22 = 0;
          pppppuVar34 = &ppppuStack_1d0;
          pcVar35 = (code *)0x3cd4f0;
        }
        else {
          do {
            FUN_003d05d8(lVar31 + 0x18);
            pqVar9 = (qword *)(lVar31 + 200);
            *(code **)(lVar31 + 0xd0) = FUN_003cd50c;
            *(qword **)(lVar31 + 0xd8) = pqVar21;
            *(undefined8 *)(lVar31 + 0xe0) = 0;
            param_3 = (qword *)0x0;
            param_4 = "tcp_listener_shutdown";
            func_0x003c1840(*(undefined8 *)(lVar31 + 8));
            lVar31 = *(long *)(lVar31 + 0xe8);
            param_1 = pqStack_1d8;
            pqVar22 = pqStack_1e0;
            unaff_x21 = pcStack_1e8;
            unaff_x22 = uStack_1f0;
            unaff_x23 = pqStack_1f8;
            unaff_x24 = puStack_200;
            pppppuVar34 = (undefined8 *****)ppppuStack_1d0;
            pcVar35 = pcStack_1c8;
          } while (lVar31 != 0);
        }
      }
    }
    else {
      pqVar22 = param_1 + 2;
      puVar17 = (uint *)(*pqVar22 + 0x18);
      func_0x00339d8c();
      qVar26 = *pqVar22;
      if (*(char *)(qVar26 + 0x69) == '\0') {
        ___error();
        pcVar27 = (char *)(ulong)*puVar17;
        _strerror();
        param_4 = "Failed accept4: %s";
        pqVar9 = &section_000000b8.addr;
        param_3 = (qword *)((long)&MACH_HEADER.magic + 2);
        pcStack_1c0 = pcVar27;
        FUN_00339074(
                    "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_posix.cc"
                    );
        qVar26 = param_1[2];
      }
      pqVar14 = (qword *)(qVar26 + 0x18);
      pcVar35 = (code *)0x3cd3e4;
      ppqVar7 = (qword **)&pcStack_1c0;
      unaff_x23 = pqVar13;
    }
  }
  else {
LAB_003ccf58:
    pqVar22 = param_1 + 2;
    func_0x00339d8c(*pqVar22 + 0x18);
    qVar26 = *pqVar22;
    lVar31 = *(long *)(qVar26 + 0x58) + -1;
    *(long *)(qVar26 + 0x58) = lVar31;
    if ((lVar31 == 0) && (*(char *)(qVar26 + 0x68) != '\0')) {
      pqVar14 = (qword *)(qVar26 + 0x18);
      pcVar35 = (code *)0x3cd274;
      ppqVar7 = (qword **)&pcStack_1c0;
    }
    else {
      ppqVar7 = (qword **)&pcStack_1c0;
      pqVar14 = (qword *)(qVar26 + 0x18);
      pcVar35 = (code *)0x3ccf84;
    }
  }
  *(undefined8 ******)((long)ppqVar7 + -0x10) = pppppuVar34;
  *(code **)((long)ppqVar7 + -8) = pcVar35;
  _pthread_mutex_unlock();
  if ((int)pqVar14 == 0) {
    return pqVar14;
  }
  func_0x00770db4();
  *(undefined1 **)((long)ppqVar7 + -0x20) = (undefined1 *)((long)ppqVar7 + -0x10);
  *(undefined8 *)((long)ppqVar7 + -0x18) = 0x339dc4;
  _pthread_mutex_trylock();
  if (((uint)pqVar14 | 0x10) == 0x10) {
    return (qword *)(ulong)((uint)pqVar14 == 0);
  }
  func_0x00770de8();
  *(qword **)((long)ppqVar7 + -0x40) = pqVar22;
  *(qword **)((long)ppqVar7 + -0x38) = param_1;
  *(undefined1 **)((long)ppqVar7 + -0x30) = (undefined1 *)((long)ppqVar7 + -0x20);
  *(code **)((long)ppqVar7 + -0x28) = FUN_00339df0;
  *(undefined8 *)((long)ppqVar7 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  pqVar13 = (qword *)((long)ppqVar7 + -0x58);
  _pthread_condattr_init();
  if ((int)pqVar13 == 0) {
    pqVar9 = (qword *)((long)ppqVar7 + -0x58);
    pqVar13 = pqVar14;
    _pthread_cond_init();
    if ((int)pqVar13 != 0) goto LAB_00339e5c;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)ppqVar7 + -0x48)) {
      return pqVar13;
    }
  }
  else {
    func_0x00770e50();
LAB_00339e5c:
    func_0x00770e1c();
  }
  ___stack_chk_fail();
  *(undefined1 **)((long)ppqVar7 + -0x70) = (undefined1 *)((long)ppqVar7 + -0x30);
  *(code **)((long)ppqVar7 + -0x68) = FUN_00339e64;
  _pthread_cond_destroy();
  if ((int)pqVar13 == 0) {
    return pqVar13;
  }
  func_0x00770e84();
  *(undefined8 *)((long)ppqVar7 + -0xa0) = unaff_x22;
  *(code **)((long)ppqVar7 + -0x98) = unaff_x21;
  *(qword **)((long)ppqVar7 + -0x90) = pqVar22;
  *(qword **)((long)ppqVar7 + -0x88) = pqVar14;
  *(undefined1 **)((long)ppqVar7 + -0x80) = (undefined1 *)((long)ppqVar7 + -0x70);
  *(code **)((long)ppqVar7 + -0x78) = FUN_00339e80;
  uVar15 = (ulong)param_4 >> 0x20;
  pqVar30 = pqVar9;
  func_0x0033a068(uVar15);
  pqVar14 = param_3;
  FUN_00339fc4(param_3,param_4,uVar15);
  pqVar21 = pqVar13;
  pqVar22 = pqVar9;
  if ((int)pqVar14 == 0) {
    _pthread_cond_wait();
    pqVar14 = (qword *)param_4;
  }
  else {
    FUN_0033a30c(param_3,param_4,1);
    uVar15 = (ulong)param_4 >> 0x20;
    pqVar30 = (qword *)param_4;
    FUN_0033a598(uVar15);
    pqVar14 = param_3;
    pqVar23 = (qword *)param_4;
    FUN_0033a01c(param_3,param_4,uVar15);
    *(qword **)((long)ppqVar7 + -0xb0) = pqVar14;
    *(long *)((long)ppqVar7 + -0xa8) = (long)(int)pqVar23;
    _pthread_cond_timedwait(pqVar13,pqVar9,(undefined1 *)((long)ppqVar7 + -0xb0));
    pqVar14 = param_3;
    param_3 = (qword *)param_4;
  }
  if (((uint)pqVar21 < 0x3d) && ((1L << ((ulong)pqVar21 & 0x3f) & 0x1000000800000001U) != 0)) {
    return (qword *)(ulong)((uint)pqVar21 == 0x3c);
  }
  func_0x00770eb8();
  *(undefined1 **)((long)ppqVar7 + -0xc0) = (undefined1 *)((long)ppqVar7 + -0x80);
  *(code **)((long)ppqVar7 + -0xb8) = FUN_00339f68;
  _pthread_cond_signal();
  if ((int)pqVar21 == 0) {
    return pqVar21;
  }
  func_0x00770eec();
  *(undefined1 **)((long)ppqVar7 + -0xd0) = (undefined1 *)((long)ppqVar7 + -0xc0);
  *(undefined8 *)((long)ppqVar7 + -200) = 0x339f84;
  _pthread_cond_broadcast();
  if ((int)pqVar21 == 0) {
    return pqVar21;
  }
  func_0x00770f20();
  *(undefined1 **)((long)ppqVar7 + -0xe0) = (undefined1 *)((long)ppqVar7 + -0xd0);
  *(undefined8 *)((long)ppqVar7 + -0xd8) = 0x339fa0;
  _pthread_once();
  if ((int)pqVar21 == 0) {
    return pqVar21;
  }
  func_0x00770f54();
  *(uint **)((long)ppqVar7 + -0x120) = unaff_x24;
  *(qword **)((long)ppqVar7 + -0x118) = unaff_x23;
  *(qword **)((long)ppqVar7 + -0x110) = param_3;
  *(qword **)((long)ppqVar7 + -0x108) = pqVar14;
  *(qword **)((long)ppqVar7 + -0x100) = pqVar13;
  *(qword **)((long)ppqVar7 + -0xf8) = pqVar9;
  *(undefined1 **)((long)ppqVar7 + -0xf0) = (undefined1 *)((long)ppqVar7 + -0xe0);
  *(code **)((long)ppqVar7 + -0xe8) = FUN_00339fbc;
  *(undefined8 *)((long)ppqVar7 + -0x128) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  pqVar9 = (qword *)((long)&MACH_HEADER.magic + 2);
  pqVar13 = pqVar22;
  FUN_00338e58();
  if ((int)pqVar9 != 0) {
    *(undefined1 **)((long)ppqVar7 + -0x170) = (undefined1 *)((long)ppqVar7 + -0xe0);
    puVar17 = (uint *)((long)ppqVar7 + -0x168);
    _vsnprintf(puVar17,0x40,pqVar30,(undefined1 *)((long)ppqVar7 + -0xe0));
    if ((int)(uint)puVar17 < 0) {
      unaff_x23 = (qword *)0x0;
      pqVar30 = (qword *)0x0;
    }
    else {
      unaff_x24 = puVar17;
      if ((uint)puVar17 < 0x40) {
        pqVar30 = (qword *)0x0;
        unaff_x23 = (qword *)((long)ppqVar7 + -0x168);
      }
      else {
        pqVar30 = (qword *)(((ulong)puVar17 & 0xffffffff) + 1);
        FUN_00338c74();
        *(undefined1 **)((long)ppqVar7 + -0x170) = (undefined1 *)((long)ppqVar7 + -0xe0);
        _vsnprintf();
        unaff_x23 = pqVar30;
      }
    }
    pqVar13 = pqVar22;
    FUN_00338e80(pqVar21,pqVar22,2,unaff_x23);
    pqVar9 = pqVar30;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)ppqVar7 + -0x128)) {
    return pqVar9;
  }
  ___stack_chk_fail();
  *(uint **)((long)ppqVar7 + -0x1b0) = unaff_x24;
  *(qword **)((long)ppqVar7 + -0x1a8) = unaff_x23;
  *(qword **)((long)ppqVar7 + -0x1a0) = pqVar30;
  *(qword **)((long)ppqVar7 + -0x198) = pqVar21;
  *(qword **)((long)ppqVar7 + -400) = pqVar22;
  *(undefined8 *)((long)ppqVar7 + -0x188) = 2;
  *(undefined1 **)((long)ppqVar7 + -0x180) = (undefined1 *)((long)ppqVar7 + -0xf0);
  *(code **)((long)ppqVar7 + -0x178) = FUN_00339178;
  *(undefined8 *)((long)ppqVar7 + -0x1b8) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  uVar10 = 1;
  FUN_0033a598();
  *(undefined8 *)((long)ppqVar7 + -0x268) = uVar10;
  qVar26 = *pqVar9;
  qVar11 = qVar26;
  _strrchr(qVar26,0x2f);
  if (qVar11 != 0) {
    qVar26 = qVar11 + 1;
  }
  puVar25 = (undefined1 *)((long)ppqVar7 + -0x268);
  _localtime_r(puVar25,(undefined1 *)((long)ppqVar7 + -0x2a0));
  if (puVar25 == (undefined1 *)0x0) {
    builtin_strncpy((char *)((long)ppqVar7 + -0x260),"error:localtime",0x10);
  }
  else {
    puVar25 = (undefined1 *)((long)ppqVar7 + -0x260);
    _strftime(puVar25,0x40,"%m%d %H:%M:%S",(undefined1 *)((long)ppqVar7 + -0x2a0));
    if (puVar25 == (undefined1 *)0x0) {
      builtin_strncpy((char *)((long)ppqVar7 + -0x260),"error:strftime",0xf);
    }
  }
  uVar12 = (ulong)*(uint *)((long)pqVar9 + 0xc);
  func_0x00338e1c();
  uVar15 = uVar12;
  _pthread_self();
  *(ulong *)((long)ppqVar7 + -0x218) = uVar12;
  *(undefined8 *)((long)ppqVar7 + -0x210) = 0x560e98;
  *(undefined1 **)((long)ppqVar7 + -0x208) = (undefined1 *)((long)ppqVar7 + -0x260);
  *(undefined8 *)((long)ppqVar7 + -0x200) = 0x560e98;
  *(ulong *)((long)ppqVar7 + -0x1f8) = (ulong)pqVar13 & 0xffffffff;
  *(undefined8 *)((long)ppqVar7 + -0x1f0) = 0x5606ac;
  *(ulong *)((long)ppqVar7 + -0x1e8) = uVar15;
  *(code **)((long)ppqVar7 + -0x1e0) = FUN_00560738;
  *(qword *)((long)ppqVar7 + -0x1d8) = qVar26;
  *(undefined8 *)((long)ppqVar7 + -0x1d0) = 0x560e98;
  *(ulong *)((long)ppqVar7 + -0x1c8) = (ulong)(uint)pqVar9[1];
  *(undefined8 *)((long)ppqVar7 + -0x1c0) = 0x5606ac;
  puVar25 = (undefined1 *)((long)ppqVar7 + -0x218);
  FUN_0056189c((undefined1 *)((long)ppqVar7 + -0x2b8),"%s%s.%09d %7ld %s:%d]",0x15,puVar25,6);
  uVar24 = *(uint *)((long)pqVar9 + 0xc);
  func_0x00338e6c();
  if (uVar24 == 0) {
    *(undefined1 *)((long)ppqVar7 + -0x218) = 0;
    *(undefined1 *)((long)ppqVar7 + -0x200) = 0;
LAB_00339300:
    pqVar13 = *(qword **)PTR____stderrp_00999f90;
    puVar2 = *(undefined1 **)((long)ppqVar7 + -0x2b8);
    if (-1 < *(char *)((long)ppqVar7 + -0x2a1)) {
      puVar2 = (undefined1 *)((long)ppqVar7 + -0x2b8);
    }
    lVar31 = pqVar9[2];
    *(undefined1 **)((long)ppqVar7 + -0x2d0) = puVar2;
    *(long *)((long)ppqVar7 + -0x2c8) = lVar31;
    pcVar27 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8((undefined1 *)((long)ppqVar7 + -0x218));
    if (*(char *)((long)ppqVar7 + -0x200) == '\0') goto LAB_00339300;
    pqVar13 = *(qword **)PTR____stderrp_00999f90;
    puVar2 = *(undefined1 **)((long)ppqVar7 + -0x2b8);
    if (-1 < *(char *)((long)ppqVar7 + -0x2a1)) {
      puVar2 = (undefined1 *)((long)ppqVar7 + -0x2b8);
    }
    *(qword *)((long)ppqVar7 + -0x2c8) = pqVar9[2];
    *(undefined1 **)((long)ppqVar7 + -0x2c0) = (undefined1 *)((long)ppqVar7 + -0x218);
    *(undefined1 **)((long)ppqVar7 + -0x2d0) = puVar2;
    pcVar27 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (*(char *)((long)ppqVar7 + -0x2a1) < '\0') {
    pqVar13 = *(qword **)((long)ppqVar7 + -0x2b8);
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)ppqVar7 + -0x1b8)) {
    return pqVar13;
  }
  ___stack_chk_fail();
  if (*(char *)((long)ppqVar7 + -0x2a1) < '\0') {
    __ZdlPv(*(undefined8 *)((long)ppqVar7 + -0x2b8));
  }
  __Unwind_Resume();
  uVar24 = (uint)puVar25;
  if ((char *)0x3 < pcVar27) {
    uVar15 = (ulong)pcVar27 >> 2;
    pqVar9 = pqVar13;
    do {
      uVar24 = ((int)*pqVar9 * 0x16a88000 | (uint)((int)*pqVar9 * -0x3361d2af) >> 0x11) * 0x1b873593
               ^ (uint)puVar25;
      uVar24 = (uVar24 >> 0x13 | uVar24 << 0xd) * 5 + 0xe6546b64;
      puVar25 = (undefined1 *)(ulong)uVar24;
      uVar15 = uVar15 - 1;
      pqVar9 = (qword *)((long)pqVar9 + 4);
    } while (uVar15 != 0);
    pqVar13 = (qword *)((long)pqVar13 + ((ulong)pcVar27 & 0xfffffffffffffffc));
  }
  uVar29 = 0;
  uVar15 = (ulong)pcVar27 & 3;
  if (uVar15 != 1) {
    if (uVar15 != 2) {
      if (uVar15 != 3) goto LAB_00339464;
      uVar29 = (uint)*(byte *)((long)pqVar13 + 2) << 0x10;
    }
    uVar29 = uVar29 | (uint)*(byte *)((long)pqVar13 + 1) << 8;
  }
  uVar29 = uVar29 ^ (byte)*pqVar13;
  uVar24 = (uVar29 * 0x16a88000 | uVar29 * -0x3361d2af >> 0x11) * 0x1b873593 ^ uVar24;
LAB_00339464:
  uVar24 = uVar24 ^ (uint)pcVar27;
  uVar24 = (uVar24 ^ uVar24 >> 0x10) * -0x7a143595;
  uVar24 = (uVar24 ^ uVar24 >> 0xd) * -0x3d4d51cb;
  return (qword *)(ulong)(uVar24 ^ uVar24 >> 0x10);
}



/* Entry: 003cd460; end: 003cd50b;  */

/* WARNING: Possible PIC construction at 0x003cd4ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003cd59c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003cd544: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x003cd5a0) */
/* WARNING: Removing unreachable block (ram,0x003cd5a8) */
/* WARNING: Removing unreachable block (ram,0x003cd5c0) */
/* WARNING: Removing unreachable block (ram,0x003cd5c4) */
/* WARNING: Removing unreachable block (ram,0x003cd5cc) */
/* WARNING: Removing unreachable block (ram,0x003cd5e4) */
/* WARNING: Removing unreachable block (ram,0x003cd5f4) */
/* WARNING: Removing unreachable block (ram,0x003cd600) */
/* WARNING: Removing unreachable block (ram,0x003cd5d4) */
/* WARNING: Removing unreachable block (ram,0x003cd4f0) */
/* WARNING: Removing unreachable block (ram,0x003cd548) */
/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_003cd460(byte *param_1,byte *param_2,byte *param_3,byte *param_4)

{
  undefined8 ****ppppuVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  char *pcVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint uVar15;
  byte *unaff_x19;
  byte *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar16;
  undefined8 unaff_x22;
  long lVar17;
  byte *unaff_x23;
  undefined1 *unaff_x24;
  undefined8 ****ppppuVar18;
  undefined8 ****unaff_x29;
  code *unaff_x30;
  char acStack_331 [673];
  undefined1 auStack_90 [16];
  byte *pbStack_80;
  byte *pbStack_78;
  undefined8 ***pppuStack_70;
  code *pcStack_68;
  byte *pbStack_60;
  byte *pbStack_58;
  undefined8 ***pppuStack_50;
  code *pcStack_48;
  
  ppppuVar18 = (undefined8 ****)&stack0xfffffffffffffff0;
  pbVar16 = param_1 + 0x18;
  pbVar7 = pbVar16;
  func_0x00339d8c();
  if (param_1[0x68] == 0) {
    func_0x007746b0();
    pcStack_48 = FUN_003cd50c;
    ppppuVar1 = &pppuStack_50;
    unaff_x19 = pbVar7 + 0x18;
    pbVar8 = unaff_x19;
    pbStack_60 = pbVar16;
    pbStack_58 = param_1;
    pppuStack_50 = ppppuVar18;
    func_0x00339d8c();
    uVar6 = *(long *)(pbVar7 + 0x60) + 1;
    *(ulong *)(pbVar7 + 0x60) = uVar6;
    pbVar16 = unaff_x19;
    if (uVar6 == *(uint *)(pbVar7 + 0x80)) {
      register0x00000008 = (BADSPACEBASE *)&pbStack_60;
      ppppuVar18 = ppppuVar1;
      unaff_x30 = (code *)0x3cd548;
    }
    else if (uVar6 < *(uint *)(pbVar7 + 0x80)) {
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
      unaff_x19 = pbStack_58;
      pbVar7 = pbStack_60;
      ppppuVar18 = (undefined8 ****)pppuStack_50;
      unaff_x30 = pcStack_48;
    }
    else {
      func_0x007746e4();
      pcStack_68 = FUN_003cd570;
      ppppuVar18 = &pppuStack_70;
      pbVar16 = pbVar8 + 0x18;
      pbVar9 = pbVar16;
      pbStack_80 = pbVar7;
      pbStack_78 = unaff_x19;
      pppuStack_70 = ppppuVar1;
      func_0x00339d8c(pbVar16);
      if (pbVar8[0x68] == 0) {
        func_0x00774718();
        func_0x0040cf10();
        FUN_0033c494(auStack_90);
        __Unwind_Resume(pbVar9);
        return pbVar9;
      }
      register0x00000008 = (BADSPACEBASE *)auStack_90;
      unaff_x19 = pbVar8;
      pbVar7 = pbVar16;
      unaff_x30 = (code *)0x3cd5a0;
    }
  }
  else {
    lVar17 = *(long *)(param_1 + 0x70);
    if (lVar17 == 0) {
      unaff_x22 = 0;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
      unaff_x19 = param_1;
      pbVar7 = pbVar16;
      unaff_x30 = (code *)0x3cd4f0;
    }
    else {
      do {
        FUN_003d05d8(lVar17 + 0x18);
        param_2 = (byte *)(lVar17 + 200);
        *(code **)(lVar17 + 0xd0) = FUN_003cd50c;
        *(byte **)(lVar17 + 0xd8) = param_1;
        *(undefined8 *)(lVar17 + 0xe0) = 0;
        param_3 = (byte *)0x0;
        param_4 = (byte *)"tcp_listener_shutdown";
        func_0x003c1840(*(undefined8 *)(lVar17 + 8));
        lVar17 = *(long *)(lVar17 + 0xe8);
        pbVar7 = unaff_x20;
        ppppuVar18 = unaff_x29;
      } while (lVar17 != 0);
    }
  }
  *(undefined8 *****)((long)register0x00000008 + -0x10) = ppppuVar18;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
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
  *(byte **)((long)register0x00000008 + -0x40) = pbVar7;
  *(byte **)((long)register0x00000008 + -0x38) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x30) =
       (undefined1 *)((long)register0x00000008 + -0x20);
  *(code **)((long)register0x00000008 + -0x28) = FUN_00339df0;
  *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  pbVar8 = (byte *)((long)register0x00000008 + -0x58);
  _pthread_condattr_init();
  if ((int)pbVar8 == 0) {
    param_2 = (byte *)((long)register0x00000008 + -0x58);
    pbVar8 = pbVar16;
    _pthread_cond_init();
    if ((int)pbVar8 != 0) goto LAB_00339e5c;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x48)) {
      return pbVar8;
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
  if ((int)pbVar8 == 0) {
    return pbVar8;
  }
  func_0x00770e84();
  *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x21;
  *(byte **)((long)register0x00000008 + -0x90) = pbVar7;
  *(byte **)((long)register0x00000008 + -0x88) = pbVar16;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x70);
  *(code **)((long)register0x00000008 + -0x78) = FUN_00339e80;
  uVar6 = (ulong)param_4 >> 0x20;
  pbVar16 = param_2;
  func_0x0033a068(uVar6);
  pbVar7 = param_3;
  FUN_00339fc4(param_3,param_4,uVar6);
  pbVar9 = pbVar8;
  pbVar12 = param_2;
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
    pbVar11 = param_4;
    FUN_0033a01c(param_3,param_4,uVar6);
    *(byte **)((long)register0x00000008 + -0xb0) = pbVar7;
    *(long *)((long)register0x00000008 + -0xa8) = (long)(int)pbVar11;
    _pthread_cond_timedwait(pbVar8,param_2,(undefined1 *)((long)register0x00000008 + -0xb0));
    pbVar7 = param_3;
    param_3 = param_4;
  }
  if (((uint)pbVar9 < 0x3d) && ((1L << ((ulong)pbVar9 & 0x3f) & 0x1000000800000001U) != 0)) {
    return (byte *)(ulong)((uint)pbVar9 == 0x3c);
  }
  func_0x00770eb8();
  *(undefined1 **)((long)register0x00000008 + -0xc0) =
       (undefined1 *)((long)register0x00000008 + -0x80);
  *(code **)((long)register0x00000008 + -0xb8) = FUN_00339f68;
  _pthread_cond_signal();
  if ((int)pbVar9 == 0) {
    return pbVar9;
  }
  func_0x00770eec();
  *(undefined1 **)((long)register0x00000008 + -0xd0) =
       (undefined1 *)((long)register0x00000008 + -0xc0);
  *(undefined8 *)((long)register0x00000008 + -200) = 0x339f84;
  _pthread_cond_broadcast();
  if ((int)pbVar9 == 0) {
    return pbVar9;
  }
  func_0x00770f20();
  *(undefined1 **)((long)register0x00000008 + -0xe0) =
       (undefined1 *)((long)register0x00000008 + -0xd0);
  *(undefined8 *)((long)register0x00000008 + -0xd8) = 0x339fa0;
  _pthread_once();
  if ((int)pbVar9 == 0) {
    return pbVar9;
  }
  func_0x00770f54();
  *(undefined1 **)((long)register0x00000008 + -0x120) = unaff_x24;
  *(byte **)((long)register0x00000008 + -0x118) = unaff_x23;
  *(byte **)((long)register0x00000008 + -0x110) = param_3;
  *(byte **)((long)register0x00000008 + -0x108) = pbVar7;
  *(byte **)((long)register0x00000008 + -0x100) = pbVar8;
  *(byte **)((long)register0x00000008 + -0xf8) = param_2;
  *(undefined1 **)((long)register0x00000008 + -0xf0) =
       (undefined1 *)((long)register0x00000008 + -0xe0);
  *(code **)((long)register0x00000008 + -0xe8) = FUN_00339fbc;
  *(undefined8 *)((long)register0x00000008 + -0x128) =
       *(undefined8 *)PTR____stack_chk_guard_00999f88;
  pbVar7 = (byte *)((long)&MACH_HEADER.magic + 2);
  pbVar8 = pbVar12;
  FUN_00338e58();
  if ((int)pbVar7 != 0) {
    *(undefined1 **)((long)register0x00000008 + -0x170) =
         (undefined1 *)((long)register0x00000008 + -0xe0);
    puVar14 = (undefined1 *)((long)register0x00000008 + -0x168);
    _vsnprintf(puVar14,0x40,pbVar16,(undefined1 *)((long)register0x00000008 + -0xe0));
    if ((int)(uint)puVar14 < 0) {
      unaff_x23 = (byte *)0x0;
      pbVar16 = (byte *)0x0;
    }
    else {
      unaff_x24 = puVar14;
      if ((uint)puVar14 < 0x40) {
        pbVar16 = (byte *)0x0;
        unaff_x23 = (byte *)((long)register0x00000008 + -0x168);
      }
      else {
        pbVar16 = (byte *)(((ulong)puVar14 & 0xffffffff) + 1);
        FUN_00338c74();
        *(undefined1 **)((long)register0x00000008 + -0x170) =
             (undefined1 *)((long)register0x00000008 + -0xe0);
        _vsnprintf();
        unaff_x23 = pbVar16;
      }
    }
    pbVar8 = pbVar12;
    FUN_00338e80(pbVar9,pbVar12,2,unaff_x23);
    pbVar7 = pbVar16;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x128)) {
    return pbVar7;
  }
  ___stack_chk_fail();
  *(undefined1 **)((long)register0x00000008 + -0x1b0) = unaff_x24;
  *(byte **)((long)register0x00000008 + -0x1a8) = unaff_x23;
  *(byte **)((long)register0x00000008 + -0x1a0) = pbVar16;
  *(byte **)((long)register0x00000008 + -0x198) = pbVar9;
  *(byte **)((long)register0x00000008 + -400) = pbVar12;
  *(undefined8 *)((long)register0x00000008 + -0x188) = 2;
  *(undefined1 **)((long)register0x00000008 + -0x180) =
       (undefined1 *)((long)register0x00000008 + -0xf0);
  *(code **)((long)register0x00000008 + -0x178) = FUN_00339178;
  *(undefined8 *)((long)register0x00000008 + -0x1b8) =
       *(undefined8 *)PTR____stack_chk_guard_00999f88;
  uVar3 = 1;
  FUN_0033a598();
  *(undefined8 *)((long)register0x00000008 + -0x268) = uVar3;
  lVar17 = *(long *)pbVar7;
  lVar4 = lVar17;
  _strrchr(lVar17,0x2f);
  if (lVar4 != 0) {
    lVar17 = lVar4 + 1;
  }
  puVar14 = (undefined1 *)((long)register0x00000008 + -0x268);
  _localtime_r(puVar14,(undefined1 *)((long)register0x00000008 + -0x2a0));
  if (puVar14 == (undefined1 *)0x0) {
    builtin_strncpy((char *)((long)register0x00000008 + -0x260),"error:localtime",0x10);
  }
  else {
    puVar14 = (undefined1 *)((long)register0x00000008 + -0x260);
    _strftime(puVar14,0x40,"%m%d %H:%M:%S",(undefined1 *)((long)register0x00000008 + -0x2a0));
    if (puVar14 == (undefined1 *)0x0) {
      builtin_strncpy((char *)((long)register0x00000008 + -0x260),"error:strftime",0xf);
    }
  }
  uVar5 = (ulong)*(uint *)(pbVar7 + 0xc);
  func_0x00338e1c();
  uVar6 = uVar5;
  _pthread_self();
  *(ulong *)((long)register0x00000008 + -0x218) = uVar5;
  *(undefined8 *)((long)register0x00000008 + -0x210) = 0x560e98;
  *(undefined1 **)((long)register0x00000008 + -0x208) =
       (undefined1 *)((long)register0x00000008 + -0x260);
  *(undefined8 *)((long)register0x00000008 + -0x200) = 0x560e98;
  *(ulong *)((long)register0x00000008 + -0x1f8) = (ulong)pbVar8 & 0xffffffff;
  *(undefined8 *)((long)register0x00000008 + -0x1f0) = 0x5606ac;
  *(ulong *)((long)register0x00000008 + -0x1e8) = uVar6;
  *(code **)((long)register0x00000008 + -0x1e0) = FUN_00560738;
  *(long *)((long)register0x00000008 + -0x1d8) = lVar17;
  *(undefined8 *)((long)register0x00000008 + -0x1d0) = 0x560e98;
  *(ulong *)((long)register0x00000008 + -0x1c8) = (ulong)*(uint *)(pbVar7 + 8);
  *(undefined8 *)((long)register0x00000008 + -0x1c0) = 0x5606ac;
  puVar14 = (undefined1 *)((long)register0x00000008 + -0x218);
  FUN_0056189c((undefined1 *)((long)register0x00000008 + -0x2b8),"%s%s.%09d %7ld %s:%d]",0x15,
               puVar14,6);
  uVar13 = *(uint *)(pbVar7 + 0xc);
  func_0x00338e6c();
  if (uVar13 == 0) {
    *(undefined1 *)((long)register0x00000008 + -0x218) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x200) = 0;
LAB_00339300:
    pbVar16 = *(byte **)PTR____stderrp_00999f90;
    puVar2 = *(undefined1 **)((long)register0x00000008 + -0x2b8);
    if (-1 < *(char *)((long)register0x00000008 + -0x2a1)) {
      puVar2 = (undefined1 *)((long)register0x00000008 + -0x2b8);
    }
    lVar17 = *(long *)(pbVar7 + 0x10);
    *(undefined1 **)((long)register0x00000008 + -0x2d0) = puVar2;
    *(long *)((long)register0x00000008 + -0x2c8) = lVar17;
    pcVar10 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8((undefined1 *)((long)register0x00000008 + -0x218));
    if (*(char *)((long)register0x00000008 + -0x200) == '\0') goto LAB_00339300;
    pbVar16 = *(byte **)PTR____stderrp_00999f90;
    puVar2 = *(undefined1 **)((long)register0x00000008 + -0x2b8);
    if (-1 < *(char *)((long)register0x00000008 + -0x2a1)) {
      puVar2 = (undefined1 *)((long)register0x00000008 + -0x2b8);
    }
    *(long *)((long)register0x00000008 + -0x2c8) = *(long *)(pbVar7 + 0x10);
    *(undefined1 **)((long)register0x00000008 + -0x2c0) =
         (undefined1 *)((long)register0x00000008 + -0x218);
    *(undefined1 **)((long)register0x00000008 + -0x2d0) = puVar2;
    pcVar10 = "%-70s %s\n%s\n";
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
  uVar13 = (uint)puVar14;
  if ((char *)0x3 < pcVar10) {
    uVar6 = (ulong)pcVar10 >> 2;
    pbVar7 = pbVar16;
    do {
      uVar13 = (*(int *)pbVar7 * 0x16a88000 | (uint)(*(int *)pbVar7 * -0x3361d2af) >> 0x11) *
               0x1b873593 ^ (uint)puVar14;
      uVar13 = (uVar13 >> 0x13 | uVar13 << 0xd) * 5 + 0xe6546b64;
      puVar14 = (undefined1 *)(ulong)uVar13;
      uVar6 = uVar6 - 1;
      pbVar7 = pbVar7 + 4;
    } while (uVar6 != 0);
    pbVar16 = pbVar16 + ((ulong)pcVar10 & 0xfffffffffffffffc);
  }
  uVar15 = 0;
  uVar6 = (ulong)pcVar10 & 3;
  if (uVar6 != 1) {
    if (uVar6 != 2) {
      if (uVar6 != 3) goto LAB_00339464;
      uVar15 = (uint)pbVar16[2] << 0x10;
    }
    uVar15 = uVar15 | (uint)pbVar16[1] << 8;
  }
  uVar13 = ((uVar15 ^ *pbVar16) * 0x16a88000 | (uVar15 ^ *pbVar16) * -0x3361d2af >> 0x11) *
           0x1b873593 ^ uVar13;
LAB_00339464:
  uVar13 = uVar13 ^ (uint)pcVar10;
  uVar13 = (uVar13 ^ uVar13 >> 0x10) * -0x7a143595;
  uVar13 = (uVar13 ^ uVar13 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar13 ^ uVar13 >> 0x10);
}



/* Entry: 003cd50c; end: 003cd56f;  */

/* WARNING: Possible PIC construction at 0x003cd544: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003cd59c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x003cd548) */
/* WARNING: Removing unreachable block (ram,0x003cd5a0) */
/* WARNING: Removing unreachable block (ram,0x003cd5a8) */
/* WARNING: Removing unreachable block (ram,0x003cd5c0) */
/* WARNING: Removing unreachable block (ram,0x003cd5c4) */
/* WARNING: Removing unreachable block (ram,0x003cd5cc) */
/* WARNING: Removing unreachable block (ram,0x003cd5e4) */
/* WARNING: Removing unreachable block (ram,0x003cd5f4) */
/* WARNING: Removing unreachable block (ram,0x003cd600) */
/* WARNING: Removing unreachable block (ram,0x003cd5d4) */
/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_003cd50c(byte *param_1,byte *param_2,byte *param_3,byte *param_4)

{
  undefined8 ****ppppuVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  char *pcVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint uVar15;
  byte *unaff_x19;
  byte *unaff_x20;
  long lVar16;
  undefined8 unaff_x21;
  byte *pbVar17;
  undefined8 unaff_x22;
  byte *unaff_x23;
  undefined1 *unaff_x24;
  undefined8 ****unaff_x29;
  undefined8 unaff_x30;
  char acStack_2f1 [137];
  char acStack_268 [536];
  undefined1 auStack_50 [16];
  byte *pbStack_40;
  byte *pbStack_38;
  undefined8 ***pppuStack_30;
  code *pcStack_28;
  
  ppppuVar1 = (undefined8 ****)&stack0xfffffffffffffff0;
  pbVar17 = param_1 + 0x18;
  pbVar8 = pbVar17;
  func_0x00339d8c();
  uVar6 = *(long *)(param_1 + 0x60) + 1;
  *(ulong *)(param_1 + 0x60) = uVar6;
  if (uVar6 == *(uint *)(param_1 + 0x80)) {
    unaff_x30 = 0x3cd548;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x19 = pbVar17;
    unaff_x20 = param_1;
    unaff_x29 = ppppuVar1;
  }
  else if (*(uint *)(param_1 + 0x80) <= uVar6) {
    func_0x007746e4();
    pcStack_28 = FUN_003cd570;
    unaff_x29 = &pppuStack_30;
    unaff_x20 = pbVar8 + 0x18;
    pbVar9 = unaff_x20;
    pbStack_40 = param_1;
    pbStack_38 = pbVar17;
    pppuStack_30 = ppppuVar1;
    func_0x00339d8c(unaff_x20);
    if (pbVar8[0x68] == 0) {
      func_0x00774718();
      func_0x0040cf10();
      FUN_0033c494(auStack_50);
      __Unwind_Resume(pbVar9);
      return pbVar9;
    }
    unaff_x30 = 0x3cd5a0;
    register0x00000008 = (BADSPACEBASE *)auStack_50;
    pbVar17 = unaff_x20;
    unaff_x19 = pbVar8;
  }
  *(undefined8 *****)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  _pthread_mutex_unlock();
  if ((int)pbVar17 == 0) {
    return pbVar17;
  }
  func_0x00770db4();
  *(undefined1 **)((long)register0x00000008 + -0x20) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -0x18) = 0x339dc4;
  _pthread_mutex_trylock();
  if (((uint)pbVar17 | 0x10) == 0x10) {
    return (byte *)(ulong)((uint)pbVar17 == 0);
  }
  func_0x00770de8();
  *(byte **)((long)register0x00000008 + -0x40) = unaff_x20;
  *(byte **)((long)register0x00000008 + -0x38) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x30) =
       (undefined1 *)((long)register0x00000008 + -0x20);
  *(code **)((long)register0x00000008 + -0x28) = FUN_00339df0;
  *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  pbVar8 = (byte *)((long)register0x00000008 + -0x58);
  _pthread_condattr_init();
  if ((int)pbVar8 == 0) {
    param_2 = (byte *)((long)register0x00000008 + -0x58);
    pbVar8 = pbVar17;
    _pthread_cond_init();
    if ((int)pbVar8 != 0) goto LAB_00339e5c;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x48)) {
      return pbVar8;
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
  if ((int)pbVar8 == 0) {
    return pbVar8;
  }
  func_0x00770e84();
  *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x21;
  *(byte **)((long)register0x00000008 + -0x90) = unaff_x20;
  *(byte **)((long)register0x00000008 + -0x88) = pbVar17;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x70);
  *(code **)((long)register0x00000008 + -0x78) = FUN_00339e80;
  uVar6 = (ulong)param_4 >> 0x20;
  pbVar17 = param_2;
  func_0x0033a068(uVar6);
  pbVar9 = param_3;
  FUN_00339fc4(param_3,param_4,uVar6);
  pbVar7 = pbVar8;
  pbVar12 = param_2;
  if ((int)pbVar9 == 0) {
    _pthread_cond_wait();
    pbVar9 = param_4;
  }
  else {
    FUN_0033a30c(param_3,param_4,1);
    uVar6 = (ulong)param_4 >> 0x20;
    pbVar17 = param_4;
    FUN_0033a598(uVar6);
    pbVar9 = param_3;
    pbVar11 = param_4;
    FUN_0033a01c(param_3,param_4,uVar6);
    *(byte **)((long)register0x00000008 + -0xb0) = pbVar9;
    *(long *)((long)register0x00000008 + -0xa8) = (long)(int)pbVar11;
    _pthread_cond_timedwait(pbVar8,param_2,(undefined1 *)((long)register0x00000008 + -0xb0));
    pbVar9 = param_3;
    param_3 = param_4;
  }
  if (((uint)pbVar7 < 0x3d) && ((1L << ((ulong)pbVar7 & 0x3f) & 0x1000000800000001U) != 0)) {
    return (byte *)(ulong)((uint)pbVar7 == 0x3c);
  }
  func_0x00770eb8();
  *(undefined1 **)((long)register0x00000008 + -0xc0) =
       (undefined1 *)((long)register0x00000008 + -0x80);
  *(code **)((long)register0x00000008 + -0xb8) = FUN_00339f68;
  _pthread_cond_signal();
  if ((int)pbVar7 == 0) {
    return pbVar7;
  }
  func_0x00770eec();
  *(undefined1 **)((long)register0x00000008 + -0xd0) =
       (undefined1 *)((long)register0x00000008 + -0xc0);
  *(undefined8 *)((long)register0x00000008 + -200) = 0x339f84;
  _pthread_cond_broadcast();
  if ((int)pbVar7 == 0) {
    return pbVar7;
  }
  func_0x00770f20();
  *(undefined1 **)((long)register0x00000008 + -0xe0) =
       (undefined1 *)((long)register0x00000008 + -0xd0);
  *(undefined8 *)((long)register0x00000008 + -0xd8) = 0x339fa0;
  _pthread_once();
  if ((int)pbVar7 == 0) {
    return pbVar7;
  }
  func_0x00770f54();
  *(undefined1 **)((long)register0x00000008 + -0x120) = unaff_x24;
  *(byte **)((long)register0x00000008 + -0x118) = unaff_x23;
  *(byte **)((long)register0x00000008 + -0x110) = param_3;
  *(byte **)((long)register0x00000008 + -0x108) = pbVar9;
  *(byte **)((long)register0x00000008 + -0x100) = pbVar8;
  *(byte **)((long)register0x00000008 + -0xf8) = param_2;
  *(undefined1 **)((long)register0x00000008 + -0xf0) =
       (undefined1 *)((long)register0x00000008 + -0xe0);
  *(code **)((long)register0x00000008 + -0xe8) = FUN_00339fbc;
  *(undefined8 *)((long)register0x00000008 + -0x128) =
       *(undefined8 *)PTR____stack_chk_guard_00999f88;
  pbVar8 = (byte *)((long)&MACH_HEADER.magic + 2);
  pbVar9 = pbVar12;
  FUN_00338e58();
  if ((int)pbVar8 != 0) {
    *(undefined1 **)((long)register0x00000008 + -0x170) =
         (undefined1 *)((long)register0x00000008 + -0xe0);
    puVar14 = (undefined1 *)((long)register0x00000008 + -0x168);
    _vsnprintf(puVar14,0x40,pbVar17,(undefined1 *)((long)register0x00000008 + -0xe0));
    if ((int)(uint)puVar14 < 0) {
      unaff_x23 = (byte *)0x0;
      pbVar17 = (byte *)0x0;
    }
    else {
      unaff_x24 = puVar14;
      if ((uint)puVar14 < 0x40) {
        pbVar17 = (byte *)0x0;
        unaff_x23 = (byte *)((long)register0x00000008 + -0x168);
      }
      else {
        pbVar17 = (byte *)(((ulong)puVar14 & 0xffffffff) + 1);
        FUN_00338c74();
        *(undefined1 **)((long)register0x00000008 + -0x170) =
             (undefined1 *)((long)register0x00000008 + -0xe0);
        _vsnprintf();
        unaff_x23 = pbVar17;
      }
    }
    pbVar9 = pbVar12;
    FUN_00338e80(pbVar7,pbVar12,2,unaff_x23);
    pbVar8 = pbVar17;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x128)) {
    return pbVar8;
  }
  ___stack_chk_fail();
  *(undefined1 **)((long)register0x00000008 + -0x1b0) = unaff_x24;
  *(byte **)((long)register0x00000008 + -0x1a8) = unaff_x23;
  *(byte **)((long)register0x00000008 + -0x1a0) = pbVar17;
  *(byte **)((long)register0x00000008 + -0x198) = pbVar7;
  *(byte **)((long)register0x00000008 + -400) = pbVar12;
  *(undefined8 *)((long)register0x00000008 + -0x188) = 2;
  *(undefined1 **)((long)register0x00000008 + -0x180) =
       (undefined1 *)((long)register0x00000008 + -0xf0);
  *(code **)((long)register0x00000008 + -0x178) = FUN_00339178;
  *(undefined8 *)((long)register0x00000008 + -0x1b8) =
       *(undefined8 *)PTR____stack_chk_guard_00999f88;
  uVar3 = 1;
  FUN_0033a598();
  *(undefined8 *)((long)register0x00000008 + -0x268) = uVar3;
  lVar16 = *(long *)pbVar8;
  lVar4 = lVar16;
  _strrchr(lVar16,0x2f);
  if (lVar4 != 0) {
    lVar16 = lVar4 + 1;
  }
  puVar14 = (undefined1 *)((long)register0x00000008 + -0x268);
  _localtime_r(puVar14,(undefined1 *)((long)register0x00000008 + -0x2a0));
  if (puVar14 == (undefined1 *)0x0) {
    builtin_strncpy((char *)((long)register0x00000008 + -0x260),"error:localtime",0x10);
  }
  else {
    puVar14 = (undefined1 *)((long)register0x00000008 + -0x260);
    _strftime(puVar14,0x40,"%m%d %H:%M:%S",(undefined1 *)((long)register0x00000008 + -0x2a0));
    if (puVar14 == (undefined1 *)0x0) {
      builtin_strncpy((char *)((long)register0x00000008 + -0x260),"error:strftime",0xf);
    }
  }
  uVar5 = (ulong)*(uint *)(pbVar8 + 0xc);
  func_0x00338e1c();
  uVar6 = uVar5;
  _pthread_self();
  *(ulong *)((long)register0x00000008 + -0x218) = uVar5;
  *(undefined8 *)((long)register0x00000008 + -0x210) = 0x560e98;
  *(undefined1 **)((long)register0x00000008 + -0x208) =
       (undefined1 *)((long)register0x00000008 + -0x260);
  *(undefined8 *)((long)register0x00000008 + -0x200) = 0x560e98;
  *(ulong *)((long)register0x00000008 + -0x1f8) = (ulong)pbVar9 & 0xffffffff;
  *(undefined8 *)((long)register0x00000008 + -0x1f0) = 0x5606ac;
  *(ulong *)((long)register0x00000008 + -0x1e8) = uVar6;
  *(code **)((long)register0x00000008 + -0x1e0) = FUN_00560738;
  *(long *)((long)register0x00000008 + -0x1d8) = lVar16;
  *(undefined8 *)((long)register0x00000008 + -0x1d0) = 0x560e98;
  *(ulong *)((long)register0x00000008 + -0x1c8) = (ulong)*(uint *)(pbVar8 + 8);
  *(undefined8 *)((long)register0x00000008 + -0x1c0) = 0x5606ac;
  puVar14 = (undefined1 *)((long)register0x00000008 + -0x218);
  FUN_0056189c((undefined1 *)((long)register0x00000008 + -0x2b8),"%s%s.%09d %7ld %s:%d]",0x15,
               puVar14,6);
  uVar13 = *(uint *)(pbVar8 + 0xc);
  func_0x00338e6c();
  if (uVar13 == 0) {
    *(undefined1 *)((long)register0x00000008 + -0x218) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x200) = 0;
LAB_00339300:
    pbVar17 = *(byte **)PTR____stderrp_00999f90;
    puVar2 = *(undefined1 **)((long)register0x00000008 + -0x2b8);
    if (-1 < *(char *)((long)register0x00000008 + -0x2a1)) {
      puVar2 = (undefined1 *)((long)register0x00000008 + -0x2b8);
    }
    lVar16 = *(long *)(pbVar8 + 0x10);
    *(undefined1 **)((long)register0x00000008 + -0x2d0) = puVar2;
    *(long *)((long)register0x00000008 + -0x2c8) = lVar16;
    pcVar10 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8((undefined1 *)((long)register0x00000008 + -0x218));
    if (*(char *)((long)register0x00000008 + -0x200) == '\0') goto LAB_00339300;
    pbVar17 = *(byte **)PTR____stderrp_00999f90;
    puVar2 = *(undefined1 **)((long)register0x00000008 + -0x2b8);
    if (-1 < *(char *)((long)register0x00000008 + -0x2a1)) {
      puVar2 = (undefined1 *)((long)register0x00000008 + -0x2b8);
    }
    *(long *)((long)register0x00000008 + -0x2c8) = *(long *)(pbVar8 + 0x10);
    *(undefined1 **)((long)register0x00000008 + -0x2c0) =
         (undefined1 *)((long)register0x00000008 + -0x218);
    *(undefined1 **)((long)register0x00000008 + -0x2d0) = puVar2;
    pcVar10 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (*(char *)((long)register0x00000008 + -0x2a1) < '\0') {
    pbVar17 = *(byte **)((long)register0x00000008 + -0x2b8);
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x1b8)) {
    return pbVar17;
  }
  ___stack_chk_fail();
  if (*(char *)((long)register0x00000008 + -0x2a1) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x2b8));
  }
  __Unwind_Resume();
  uVar13 = (uint)puVar14;
  if ((char *)0x3 < pcVar10) {
    uVar6 = (ulong)pcVar10 >> 2;
    pbVar8 = pbVar17;
    do {
      uVar13 = (*(int *)pbVar8 * 0x16a88000 | (uint)(*(int *)pbVar8 * -0x3361d2af) >> 0x11) *
               0x1b873593 ^ (uint)puVar14;
      uVar13 = (uVar13 >> 0x13 | uVar13 << 0xd) * 5 + 0xe6546b64;
      puVar14 = (undefined1 *)(ulong)uVar13;
      uVar6 = uVar6 - 1;
      pbVar8 = pbVar8 + 4;
    } while (uVar6 != 0);
    pbVar17 = pbVar17 + ((ulong)pcVar10 & 0xfffffffffffffffc);
  }
  uVar15 = 0;
  uVar6 = (ulong)pcVar10 & 3;
  if (uVar6 != 1) {
    if (uVar6 != 2) {
      if (uVar6 != 3) goto LAB_00339464;
      uVar15 = (uint)pbVar17[2] << 0x10;
    }
    uVar15 = uVar15 | (uint)pbVar17[1] << 8;
  }
  uVar13 = ((uVar15 ^ *pbVar17) * 0x16a88000 | (uVar15 ^ *pbVar17) * -0x3361d2af >> 0x11) *
           0x1b873593 ^ uVar13;
LAB_00339464:
  uVar13 = uVar13 ^ (uint)pcVar10;
  uVar13 = (uVar13 ^ uVar13 >> 0x10) * -0x7a143595;
  uVar13 = (uVar13 ^ uVar13 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar13 ^ uVar13 >> 0x10);
}



/* Entry: 003cd570; end: 003cd63b;  */

void FUN_003cd570(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uStack_30;
  undefined1 uStack_21;
  
  lVar1 = param_1 + 0x18;
  lVar2 = lVar1;
  func_0x00339d8c(lVar1);
  if (*(char *)(param_1 + 0x68) != '\0') {
    func_0x00339da8(lVar1);
    if (*(long *)(param_1 + 0x98) != 0) {
      uStack_30 = 0;
      FUN_003c1e6c(&uStack_21,*(long *)(param_1 + 0x98),&uStack_30);
      if ((uStack_30 & 1) != 0) {
        FUN_0055293c();
      }
    }
    func_0x00339d70(lVar1);
    while (*(long *)(param_1 + 0x70) != 0) {
      *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(*(long *)(param_1 + 0x70) + 0xe8);
      FUN_00338cb8();
    }
    FUN_003a2a64(*(undefined8 *)(param_1 + 0xb0));
    if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
    }
    func_0x003777c0(param_1 + 0xc0);
    __ZdlPv(param_1);
    return;
  }
  func_0x00774718();
  func_0x0040cf10();
  FUN_0033c494(&uStack_30);
  __Unwind_Resume(lVar2);
  return;
}



/* Entry: 003cd63c; end: 003cd643;  */

void FUN_003cd63c(void)

{
  return;
}



/* Entry: 003cd644; end: 003cd967;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

segment_command * FUN_003cd644(code *param_1,undefined8 param_2,char *param_3,qword param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  segment_command *psVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined7 *puVar8;
  ulong uVar9;
  segment_command *psVar10;
  char *****pppppcVar11;
  long *plVar12;
  char *pcVar13;
  segment_command *psVar14;
  segment_command *psVar15;
  char *pcVar16;
  uint uVar17;
  ulong *puVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  char *pcVar23;
  segment_command *unaff_x24;
  segment_command *apsStack_3a8 [2];
  char cStack_391;
  undefined1 auStack_390 [56];
  undefined8 uStack_358;
  undefined7 uStack_350;
  undefined1 uStack_349;
  undefined7 uStack_348;
  undefined1 uStack_341;
  ulong auStack_308 [2];
  undefined7 *puStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  undefined8 uStack_2e0;
  ulong uStack_2d8;
  code *pcStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2c0;
  ulong uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  segment_command *psStack_2a0;
  segment_command *psStack_298;
  segment_command *psStack_290;
  segment_command *psStack_288;
  char *pcStack_280;
  undefined8 uStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  char ****ppppcStack_260;
  segment_command sStack_258;
  segment_command *psStack_210;
  segment_command *psStack_208;
  char *pcStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  segment_command *psStack_1e8;
  undefined1 *puStack_1e0;
  code *pcStack_1d8;
  char ****ppppcStack_1d0;
  char ****appppcStack_1c8 [2];
  char cStack_1b1;
  long alStack_1b0 [4];
  ulong uStack_190;
  segment_command sStack_188;
  long *plStack_140;
  ulong uStack_138;
  char ****ppppcStack_110;
  undefined8 uStack_108;
  char cStack_f9;
  segment_command sStack_e0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 auStack_60 [2];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  psVar10 = &sStack_e0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  sStack_e0.nsects = 0;
  sStack_e0.flags = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  sStack_e0.fileoff = 0;
  sStack_e0.vmsize = 0;
  sStack_e0.maxprot = 0;
  sStack_e0.initprot = 0;
  sStack_e0.filesize = 0;
  sStack_e0.segname[0] = '\0';
  sStack_e0.segname[1] = '\0';
  sStack_e0.segname[2] = '\0';
  sStack_e0.segname[3] = '\0';
  sStack_e0.segname[4] = '\0';
  sStack_e0.segname[5] = '\0';
  sStack_e0.segname[6] = '\0';
  sStack_e0.segname[7] = '\0';
  sStack_e0.cmd = 0;
  sStack_e0.cmdsize = 0;
  sStack_e0.vmaddr = 0;
  sStack_e0.segname[8] = '\0';
  sStack_e0.segname[9] = '\0';
  sStack_e0.segname[10] = '\0';
  sStack_e0.segname[0xb] = '\0';
  sStack_e0.segname[0xc] = '\0';
  sStack_e0.segname[0xd] = '\0';
  sStack_e0.segname[0xe] = '\0';
  sStack_e0.segname[0xf] = '\0';
  auStack_60[0] = 0x80;
  FUN_003413d4(&sStack_188);
  pcVar23 = param_3;
  _getpeername(param_3,&sStack_e0,auStack_60);
  if ((int)pcVar23 < 0) {
    ___error();
    pppppcVar11 = (char *****)(ulong)*(uint *)pcVar23;
    _strerror();
    pcVar23 = "Failed getpeername: %s";
    pcVar13 = section_00000248.segname + 0xb;
    ppppcStack_1d0 = (char ****)pppppcVar11;
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_posix.cc"
                 ,0x263,2);
    _close(param_3);
  }
  else {
    FUN_003c4f84(&uStack_190,param_3);
    if ((uStack_190 & 1) != 0) {
      FUN_0055293c();
    }
    FUN_003a0d08(alStack_1b0,&sStack_e0);
    if (alStack_1b0[0] == 0) {
      ppppcStack_110 = (char ****)0x8c9fcf;
      uStack_108 = 0x16;
      plVar12 = alStack_1b0;
      FUN_00375c3c();
      uStack_138 = plVar12[1];
      plStack_140 = (long *)*plVar12;
      if (-1 < (char)*(byte *)((long)plVar12 + 0x17)) {
        uStack_138 = (ulong)*(byte *)((long)plVar12 + 0x17);
        plStack_140 = plVar12;
      }
      FUN_00575d30(appppcStack_1c8,&ppppcStack_110,&plStack_140);
      pppppcVar11 = (char *****)appppcStack_1c8[0];
      if (-1 < cStack_1b1) {
        pppppcVar11 = appppcStack_1c8;
      }
      FUN_003c17c0(param_3,pppppcVar11,1);
      lVar19 = *(long *)(param_1 + 8);
      puVar18 = (ulong *)(lVar19 + 0xa8);
      do {
        uVar22 = *puVar18;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar18,0x10);
        if (bVar2) {
          *puVar18 = uVar22 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      uVar20 = (*(long **)(*(long *)(param_1 + 8) + 0xa0))[1] -
               **(long **)(*(long *)(param_1 + 8) + 0xa0) >> 3;
      uVar9 = 0;
      if (uVar20 != 0) {
        uVar9 = uVar22 / uVar20;
      }
      psVar10 = *(segment_command **)(**(long **)(lVar19 + 0xa0) + (uVar22 - uVar9 * uVar20) * 8);
      func_0x003c1918(psVar10,param_3);
      unaff_x24 = &segment_command_00000020;
      FUN_00338c74();
      lVar19 = *(long *)(param_1 + 8);
      unaff_x24->cmd = (int)lVar19;
      unaff_x24->cmdsize = (int)((ulong)lVar19 >> 0x20);
      unaff_x24->segname[0] = -1;
      unaff_x24->segname[1] = -1;
      unaff_x24->segname[2] = -1;
      unaff_x24->segname[3] = -1;
      unaff_x24->segname[4] = -1;
      unaff_x24->segname[5] = -1;
      unaff_x24->segname[6] = -1;
      unaff_x24->segname[7] = -1;
      unaff_x24->segname[8] = '\x01';
      *(int *)(unaff_x24->segname + 0xc) = (int)param_2;
      unaff_x24->vmaddr = param_4;
      param_1 = *(code **)(lVar19 + 8);
      uVar5 = *(undefined8 *)(lVar19 + 0x10);
      param_2 = *(undefined8 *)(lVar19 + 0xb0);
      plVar12 = alStack_1b0;
      FUN_00375c3c();
      uVar22 = plVar12[1];
      plVar3 = (long *)*plVar12;
      if (-1 < (char)*(byte *)((long)plVar12 + 0x17)) {
        uVar22 = (ulong)*(byte *)((long)plVar12 + 0x17);
        plVar3 = plVar12;
      }
      pcVar13 = param_3;
      FUN_003c8808(param_3,param_2,plVar3,uVar22);
      pcVar23 = (char *)unaff_x24;
      (*param_1)(uVar5,pcVar13,psVar10);
    }
    else {
      FUN_00552ec8(&ppppcStack_110,alStack_1b0,1);
      ppppcStack_1d0 = ppppcStack_110;
      if (-1 < cStack_f9) {
        ppppcStack_1d0 = (char ****)&ppppcStack_110;
      }
      pcVar23 = "Invalid address: %s";
      pcVar13 = (char *)((long)&section_00000248.addr + 2);
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_posix.cc"
                   ,0x26a,2);
      appppcStack_1c8[0] = ppppcStack_110;
      cStack_1b1 = cStack_f9;
    }
    if (cStack_1b1 < '\0') {
      __ZdlPv(appppcStack_1c8[0]);
    }
    FUN_0035d18c(alStack_1b0);
  }
  psVar14 = &sStack_188;
  FUN_00341470();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return psVar14;
  }
  ___stack_chk_fail();
  if ((int)pcVar13 != 0) {
    func_0x0040cf10();
    if (cStack_f9 < '\0') {
      __ZdlPv(ppppcStack_110);
    }
    FUN_0035d18c(alStack_1b0);
    FUN_00341470(&sStack_188);
  }
  psVar15 = psVar14;
  __Unwind_Resume();
  pcStack_1d8 = FUN_003cd968;
  sStack_258._64_8_ = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  psVar4 = (segment_command *)((long)&MACH_HEADER.magic + 2);
  pcVar16 = pcVar13;
  psStack_210 = unaff_x24;
  psStack_208 = psVar10;
  pcStack_200 = param_3;
  pcStack_1f8 = param_1;
  uStack_1f0 = param_2;
  psStack_1e8 = psVar14;
  puStack_1e0 = &stack0xfffffffffffffff0;
  FUN_00338e58();
  if ((int)psVar4 != 0) {
    ppppcStack_260 = (char ****)&ppppcStack_1d0;
    psVar10 = &sStack_258;
    _vsnprintf(psVar10,0x40,pcVar23,&ppppcStack_1d0);
    if ((int)(uint)psVar10 < 0) {
      psVar10 = (segment_command *)0x0;
      pcVar23 = (char *)0x0;
    }
    else {
      unaff_x24 = psVar10;
      if ((uint)psVar10 < 0x40) {
        pcVar23 = (char *)0x0;
        psVar10 = &sStack_258;
      }
      else {
        pcVar23 = (char *)(((ulong)psVar10 & 0xffffffff) + 1);
        FUN_00338c74();
        ppppcStack_260 = (char ****)&ppppcStack_1d0;
        _vsnprintf();
        psVar10 = (segment_command *)pcVar23;
      }
    }
    pcVar16 = pcVar13;
    FUN_00338e80(psVar15,pcVar13,2,psVar10);
    psVar4 = (segment_command *)pcVar23;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == sStack_258._64_8_) {
    return psVar4;
  }
  ___stack_chk_fail();
  uStack_278 = 2;
  pcStack_268 = FUN_00339178;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar5 = 1;
  psStack_2a0 = unaff_x24;
  psStack_298 = psVar10;
  psStack_290 = (segment_command *)pcVar23;
  psStack_288 = psVar15;
  pcStack_280 = pcVar13;
  ppuStack_270 = &puStack_1e0;
  FUN_0033a598();
  lVar19._0_4_ = psVar4->cmd;
  lVar19._4_4_ = psVar4->cmdsize;
  lVar6 = lVar19;
  uStack_358 = uVar5;
  _strrchr(lVar19,0x2f);
  if (lVar6 != 0) {
    lVar19 = lVar6 + 1;
  }
  puVar7 = &uStack_358;
  _localtime_r(puVar7,auStack_390);
  if (puVar7 == (undefined8 *)0x0) {
    uStack_348 = 0x656d69746c6163;
    uStack_341 = 0;
    uStack_350 = 0x6c3a726f727265;
    uStack_349 = 0x6f;
  }
  else {
    puVar8 = &uStack_350;
    _strftime(puVar8,0x40,"%m%d %H:%M:%S",auStack_390);
    if (puVar8 == (undefined7 *)0x0) {
      uStack_350 = 0x733a726f727265;
      uStack_349 = 0x74;
      uStack_348 = 0x656d69746672;
    }
  }
  uVar9 = (ulong)*(uint *)(psVar4->segname + 4);
  func_0x00338e1c();
  uVar22 = uVar9;
  _pthread_self();
  auStack_308[1] = 0x560e98;
  puStack_2f8 = &uStack_350;
  uStack_2f0 = 0x560e98;
  uStack_2e8 = (ulong)pcVar16 & 0xffffffff;
  uStack_2e0 = 0x5606ac;
  pcStack_2d0 = FUN_00560738;
  uStack_2c0 = 0x560e98;
  uStack_2b8 = (ulong)*(uint *)psVar4->segname;
  uStack_2b0 = 0x5606ac;
  puVar18 = auStack_308;
  auStack_308[0] = uVar9;
  uStack_2d8 = uVar22;
  lStack_2c8 = lVar19;
  FUN_0056189c(apsStack_3a8,"%s%s.%09d %7ld %s:%d]",0x15,puVar18,6);
  uVar17 = *(uint *)(psVar4->segname + 4);
  func_0x00338e6c();
  if (uVar17 == 0) {
    auStack_308[0] = auStack_308[0] & 0xffffffffffffff00;
    uStack_2f0 = uStack_2f0 & 0xffffffffffffff00;
LAB_00339300:
    psVar10 = *(segment_command **)PTR____stderrp_00999f90;
    pcVar23 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_308);
    if ((char)uStack_2f0 == '\0') goto LAB_00339300;
    psVar10 = *(segment_command **)PTR____stderrp_00999f90;
    pcVar23 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_391 < '\0') {
    psVar10 = apsStack_3a8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_2a8) {
    return psVar10;
  }
  ___stack_chk_fail();
  if (cStack_391 < '\0') {
    __ZdlPv(apsStack_3a8[0]);
  }
  __Unwind_Resume();
  uVar17 = (uint)puVar18;
  if ((char *)0x3 < pcVar23) {
    uVar22 = (ulong)pcVar23 >> 2;
    psVar14 = psVar10;
    do {
      uVar17 = (psVar14->cmd * 0x16a88000 | psVar14->cmd * -0x3361d2af >> 0x11) * 0x1b873593 ^
               (uint)puVar18;
      uVar17 = (uVar17 >> 0x13 | uVar17 << 0xd) * 5 + 0xe6546b64;
      puVar18 = (ulong *)(ulong)uVar17;
      uVar22 = uVar22 - 1;
      psVar14 = (segment_command *)&psVar14->cmdsize;
    } while (uVar22 != 0);
    psVar10 = (segment_command *)(psVar10->segname + (((ulong)pcVar23 & 0xfffffffffffffffc) - 8));
  }
  uVar21 = 0;
  uVar22 = (ulong)pcVar23 & 3;
  if (uVar22 != 1) {
    if (uVar22 != 2) {
      if (uVar22 != 3) goto LAB_00339464;
      uVar21 = (uint)*(byte *)((long)&psVar10->cmd + 2) << 0x10;
    }
    uVar21 = uVar21 | (uint)*(byte *)((long)&psVar10->cmd + 1) << 8;
  }
  uVar21 = uVar21 ^ (byte)psVar10->cmd;
  uVar17 = (uVar21 * 0x16a88000 | uVar21 * -0x3361d2af >> 0x11) * 0x1b873593 ^ uVar17;
LAB_00339464:
  uVar17 = uVar17 ^ (uint)pcVar23;
  uVar17 = (uVar17 ^ uVar17 >> 0x10) * -0x7a143595;
  uVar17 = (uVar17 ^ uVar17 >> 0xd) * -0x3d4d51cb;
  return (segment_command *)(ulong)(uVar17 ^ uVar17 >> 0x10);
}



/* Entry: 003cd968; end: 003cd96f;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_003cd968(undefined8 param_1,ulong param_2,undefined8 param_3,byte *param_4)

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



/* Entry: 003cd970; end: 003cdd87;  */

/* WARNING: Removing unreachable block (ram,0x003cdacc) */

dword * FUN_003cd970(ulong *param_1,long param_2,dword *param_3,undefined8 param_4,
                    undefined8 param_5,long *****param_6,long *****param_7,undefined8 param_8,
                    undefined8 param_9)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  long ****pppplVar5;
  long *****ppppplVar6;
  dword *pdVar7;
  dword *pdVar8;
  undefined1 *puVar9;
  dword *pdVar10;
  long **pplVar11;
  undefined8 **ppuVar12;
  long lVar13;
  undefined4 *puVar14;
  dword **ppdVar15;
  undefined4 uVar16;
  long *****ppppplVar17;
  undefined8 uVar18;
  dword *pdVar19;
  char *pcVar20;
  long ****pppplVar21;
  undefined8 *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int *piVar22;
  char *pcVar23;
  ulong uVar24;
  uint uVar25;
  undefined8 *puVar26;
  long *plVar27;
  long lVar28;
  dword *pdVar29;
  int iVar30;
  long unaff_x26;
  ulong uVar31;
  ulong uVar32;
  dword *unaff_x27;
  ulong unaff_x28;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  char *pcVar39;
  undefined8 *****pppppuVar40;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  dword *pdStack_5a0;
  ulong uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined1 uStack_571;
  dword *pdStack_570;
  ulong uStack_568;
  byte bStack_559;
  ulong uStack_558;
  long lStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  dword *pdStack_538;
  undefined8 ****appppuStack_530 [2];
  char cStack_519;
  long lStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  ulong uStack_500;
  undefined1 auStack_4f4 [4];
  long lStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  dword *pdStack_4d0;
  long *plStack_4c8;
  undefined8 *puStack_4c0;
  dword *pdStack_4b8;
  ulong uStack_4b0;
  dword *pdStack_488;
  ulong uStack_480;
  ulong uStack_478;
  undefined8 *apuStack_458 [16];
  int aiStack_3d8 [2];
  long lStack_3d0;
  ulong uStack_3c0;
  dword *pdStack_3b8;
  long lStack_3b0;
  long ****pppplStack_3a8;
  long lStack_3a0;
  dword *pdStack_398;
  dword *pdStack_390;
  long ***ppplStack_388;
  long ****pppplStack_380;
  dword *pdStack_378;
  undefined1 **ppuStack_370;
  code *pcStack_368;
  long ****pppplStack_360;
  char *pcStack_350;
  long ***appplStack_348 [8];
  long lStack_308;
  long ****pppplStack_300;
  dword *pdStack_2f8;
  undefined1 *puStack_2f0;
  code *pcStack_2e8;
  undefined1 **ppuStack_2e0;
  code *pcStack_2d8;
  char *pcStack_2d0;
  ulong uStack_2c8;
  undefined1 auStack_2c0 [8];
  undefined1 auStack_2b8 [15];
  undefined1 uStack_2a9;
  undefined1 auStack_2a8 [8];
  dword *pdStack_2a0;
  dword *pdStack_298;
  undefined1 auStack_28c [128];
  dword dStack_20c;
  long lStack_208;
  long lStack_200;
  dword *pdStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long ****pppplStack_1e0;
  dword *pdStack_1d8;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  char *pcStack_1c0;
  dword *pdStack_1b0;
  uint uStack_1a4;
  long ****apppplStack_1a0 [2];
  char cStack_189;
  undefined1 uStack_181;
  long **applStack_180 [4];
  ulong uStack_160;
  uint uStack_158;
  dword adStack_154 [33];
  long ***ppplStack_d0;
  long **pplStack_c8;
  undefined8 uStack_c0;
  long ****pppplStack_a0;
  dword *pdStack_98;
  byte bStack_89;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  pppplVar21 = (long ****)&uStack_1a4;
  ppppplVar17 = (long *****)((long)&MACH_HEADER.magic + 1);
  pdVar19 = (dword *)0x0;
  pdVar29 = param_3;
  pcVar20 = (char *)param_6;
  FUN_003c5d08(&pdStack_1b0);
  if (pdStack_1b0 == (dword *)0x0) {
    if (*(int *)param_6 == 1) {
      pdVar19 = param_3;
      FUN_003a0660(param_3,adStack_154);
      if ((int)pdVar19 != 0) {
        param_3 = adStack_154;
      }
    }
    param_6 = (long *****)(ulong)uStack_1a4;
    *param_7 = (long ****)0x0;
    uStack_158 = 0xffffffff;
    pcVar20 = (char *)(ulong)*(byte *)(param_2 + 0x6a);
    pppplVar21 = (long ****)&uStack_158;
    ppppplVar17 = param_6;
    pdVar19 = param_3;
    FUN_003cdd88(&uStack_160,param_2);
    uVar25 = uStack_158;
    if (uStack_160 == 0) {
      unaff_x28 = (ulong)uStack_158;
      if ((int)uStack_158 < 1) {
        pcStack_1c0 = "port > 0";
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_common.cc"
                     ,0x5e,2,"assertion failed: %s");
        _abort();
        goto LAB_003cdcec;
      }
      FUN_003a0930(applStack_180,param_3,1);
      if ((long ***)applStack_180[0] == (long ***)0x0) {
        pppplStack_a0 = (long ****)0x8ca240;
        pdStack_98 = &MACH_HEADER.sizeofcmds;
        pppplVar5 = (long ****)applStack_180;
        FUN_00375c3c();
        pplStack_c8 = (long **)pppplVar5[1];
        ppplStack_d0 = *pppplVar5;
        if (-1 < (char)*(byte *)((long)pppplVar5 + 0x17)) {
          pplStack_c8 = (long **)(ulong)*(byte *)((long)pppplVar5 + 0x17);
          ppplStack_d0 = (long ***)pppplVar5;
        }
        FUN_00575d30(apppplStack_1a0,&pppplStack_a0,&ppplStack_d0);
        unaff_x26 = param_2 + 0x18;
        func_0x00339d8c(unaff_x26);
        *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x80) + 1;
        if (*(long *)(param_2 + 8) != 0) {
          pcStack_1c0 = "!s->on_accept_cb && \"must add ports before starting server\"";
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_common.cc"
                       ,0x66,2,"assertion failed: %s");
          _abort();
LAB_003cdcec:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x3cdcf0);
          (*pcVar4)();
        }
        unaff_x27 = &section_000000b8.reserved2;
        FUN_00338c74();
        *(undefined8 *)(unaff_x27 + 0x3a) = 0;
        plVar27 = (long *)(param_2 + 0x70);
        if (*plVar27 != 0) {
          plVar27 = (long *)(*(long *)(param_2 + 0x78) + 0xe8);
        }
        *plVar27 = (long)unaff_x27;
        *(dword **)(param_2 + 0x78) = unaff_x27;
        *(long *)(unaff_x27 + 4) = param_2;
        *unaff_x27 = uStack_1a4;
        ppppplVar17 = (long *****)apppplStack_1a0[0];
        if (-1 < cStack_189) {
          ppppplVar17 = apppplStack_1a0;
        }
        pdVar19 = (dword *)((long)&MACH_HEADER.magic + 1);
        ppppplVar6 = param_6;
        FUN_003c17c0();
        *(long ******)(unaff_x27 + 2) = ppppplVar6;
        uVar18 = *(undefined8 *)param_3;
        *(undefined8 *)(unaff_x27 + 8) = *(undefined8 *)(param_3 + 2);
        *(undefined8 *)(unaff_x27 + 6) = uVar18;
        uVar33 = *(undefined8 *)(param_3 + 6);
        uVar18 = *(undefined8 *)(param_3 + 4);
        uVar35 = *(undefined8 *)(param_3 + 10);
        uVar34 = *(undefined8 *)(param_3 + 8);
        uVar37 = *(undefined8 *)(param_3 + 0xe);
        uVar36 = *(undefined8 *)(param_3 + 0xc);
        uVar38 = *(undefined8 *)(param_3 + 0x10);
        *(undefined8 *)(unaff_x27 + 0x18) = *(undefined8 *)(param_3 + 0x12);
        *(undefined8 *)(unaff_x27 + 0x16) = uVar38;
        *(undefined8 *)(unaff_x27 + 0x14) = uVar37;
        *(undefined8 *)(unaff_x27 + 0x12) = uVar36;
        *(undefined8 *)(unaff_x27 + 0x10) = uVar35;
        *(undefined8 *)(unaff_x27 + 0xe) = uVar34;
        *(undefined8 *)(unaff_x27 + 0xc) = uVar33;
        *(undefined8 *)(unaff_x27 + 10) = uVar18;
        uVar33 = *(undefined8 *)(param_3 + 0x16);
        uVar18 = *(undefined8 *)(param_3 + 0x14);
        uVar35 = *(undefined8 *)(param_3 + 0x1a);
        uVar34 = *(undefined8 *)(param_3 + 0x18);
        uVar36 = *(undefined8 *)(param_3 + 0x1c);
        uVar16 = param_3[0x20];
        *(undefined8 *)(unaff_x27 + 0x24) = *(undefined8 *)(param_3 + 0x1e);
        *(undefined8 *)(unaff_x27 + 0x22) = uVar36;
        *(undefined8 *)(unaff_x27 + 0x20) = uVar35;
        *(undefined8 *)(unaff_x27 + 0x1e) = uVar34;
        *(undefined8 *)(unaff_x27 + 0x1c) = uVar33;
        *(undefined8 *)(unaff_x27 + 0x1a) = uVar18;
        unaff_x27[0x26] = uVar16;
        unaff_x27[0x27] = uVar25;
        unaff_x27[0x28] = (int)param_4;
        unaff_x27[0x29] = (int)param_5;
        unaff_x27[0x3e] = 0;
        *(undefined8 *)(unaff_x27 + 0x3c) = 0;
        if (ppppplVar6 == (long *****)0x0) {
          pcStack_1c0 = "sp->emfd";
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_common.cc"
                       ,0x79,2,"assertion failed: %s");
          _abort();
          goto LAB_003cdcec;
        }
        func_0x00339da8(unaff_x26);
        *param_7 = (long ****)unaff_x27;
        *param_1 = uStack_160;
        uStack_160 = 0x36;
        if (cStack_189 < '\0') {
          __ZdlPv(apppplStack_1a0[0]);
        }
      }
      else {
        FUN_00552ec8(&pppplStack_a0,applStack_180,1);
        pdVar19 = pdStack_98;
        ppppplVar17 = (long *****)pppplStack_a0;
        if (-1 < (char)bStack_89) {
          pdVar19 = (dword *)(ulong)bStack_89;
          ppppplVar17 = &pppplStack_a0;
        }
        pplStack_c8 = (long **)0x0;
        uStack_c0 = 0;
        ppplStack_d0 = (long ***)0x0;
        param_7 = (long *****)&ppplStack_d0;
        pcVar20 = &uStack_181;
        pppplVar21 = &ppplStack_d0;
        FUN_003b646c(param_1,2);
        apppplStack_1a0[0] = (long ****)param_7;
        FUN_0033d548(apppplStack_1a0);
      }
      FUN_0035d18c(applStack_180);
      if ((uStack_160 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      *param_1 = uStack_160;
    }
    pdVar29 = pdStack_1b0;
    if (((ulong)pdStack_1b0 & 1) != 0) {
      FUN_0055293c();
      pdVar29 = pdStack_1b0;
    }
  }
  else {
    *param_1 = (ulong)pdStack_1b0;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
    return pdVar29;
  }
  ___stack_chk_fail();
  if ((int)ppppplVar17 != 0) {
    func_0x0040cf10();
    FUN_0033c494(&pdStack_1b0);
  }
  pdVar7 = pdVar29;
  __Unwind_Resume();
  pcStack_1c8 = FUN_003cdd88;
  lStack_208 = *(long *)PTR____stack_chk_guard_00999f88;
  pdStack_298 = (dword *)0x0;
  lStack_200 = param_2;
  pdStack_1f8 = param_3;
  uStack_1f0 = param_4;
  uStack_1e8 = param_5;
  pppplStack_1e0 = (long ****)param_7;
  pdStack_1d8 = pdVar29;
  puStack_1d0 = &stack0xfffffffffffffff0;
  if ((int)ppppplVar17 < 0) {
    pcStack_2d0 = "fd >= 0";
    uVar18 = 0x9d;
    goto LAB_003ce214;
  }
  if (((int)pcVar20 == 0) || (pdVar29 = pdVar19, func_0x003d05c8(), (int)pdVar29 != 0)) {
LAB_003cdddc:
    FUN_003c4e4c(&pdStack_2a0,ppppplVar17,1);
    pdVar8 = pdStack_298;
    pdVar29 = pdStack_2a0;
    if (pdStack_2a0 == pdStack_298) {
LAB_003cde0c:
      if (((ulong)pdVar8 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      pdStack_2a0 = (dword *)(segment_command_00000020.segname + 0xe);
      pdStack_298 = pdVar29;
      if (((ulong)pdVar8 & 1) != 0) {
        FUN_0055293c();
        pdVar8 = pdStack_2a0;
        goto LAB_003cde0c;
      }
    }
    if (pdStack_298 != (dword *)0x0) goto LAB_003cdf98;
    FUN_003c5130(&pdStack_2a0,ppppplVar17,1);
    pdVar8 = pdStack_298;
    pdVar29 = pdStack_2a0;
    if (pdStack_2a0 == pdStack_298) {
LAB_003cde4c:
      if (((ulong)pdVar8 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      pdStack_2a0 = (dword *)(segment_command_00000020.segname + 0xe);
      pdStack_298 = pdVar29;
      if (((ulong)pdVar8 & 1) != 0) {
        FUN_0055293c();
        pdVar8 = pdStack_2a0;
        goto LAB_003cde4c;
      }
    }
    if (pdStack_298 != (dword *)0x0) goto LAB_003cdf98;
    pdVar29 = pdVar19;
    func_0x003d05c8();
    if ((int)pdVar29 == 0) {
      FUN_003c56e4(&pdStack_2a0,ppppplVar17,1);
      pdVar8 = pdStack_298;
      pdVar29 = pdStack_2a0;
      if (pdStack_2a0 == pdStack_298) {
LAB_003ce050:
        if (((ulong)pdVar8 & 1) != 0) {
          FUN_0055293c();
        }
      }
      else {
        pdStack_2a0 = (dword *)(segment_command_00000020.segname + 0xe);
        pdStack_298 = pdVar29;
        if (((ulong)pdVar8 & 1) != 0) {
          FUN_0055293c();
          pdVar8 = pdStack_2a0;
          goto LAB_003ce050;
        }
      }
      if (pdStack_298 != (dword *)0x0) goto LAB_003cdf98;
      FUN_003c526c(&pdStack_2a0,ppppplVar17,1);
      pdVar8 = pdStack_298;
      pdVar29 = pdStack_2a0;
      if (pdStack_2a0 == pdStack_298) {
LAB_003ce090:
        if (((ulong)pdVar8 & 1) != 0) {
          FUN_0055293c();
        }
      }
      else {
        pdStack_2a0 = (dword *)(segment_command_00000020.segname + 0xe);
        pdStack_298 = pdVar29;
        if (((ulong)pdVar8 & 1) != 0) {
          FUN_0055293c();
          pdVar8 = pdStack_2a0;
          goto LAB_003ce090;
        }
      }
      if (pdStack_298 != (dword *)0x0) goto LAB_003cdf98;
      FUN_003c588c(&pdStack_2a0,ppppplVar17,*(undefined8 *)(pdVar7 + 0x2c),0);
      pdVar8 = pdStack_298;
      pdVar29 = pdStack_2a0;
      if (pdStack_2a0 == pdStack_298) {
LAB_003ce0d4:
        if (((ulong)pdVar8 & 1) != 0) {
          FUN_0055293c();
        }
      }
      else {
        pdStack_2a0 = (dword *)(segment_command_00000020.segname + 0xe);
        pdStack_298 = pdVar29;
        if (((ulong)pdVar8 & 1) != 0) {
          FUN_0055293c();
          pdVar8 = pdStack_2a0;
          goto LAB_003ce0d4;
        }
      }
      if (pdStack_298 != (dword *)0x0) goto LAB_003cdf98;
    }
    FUN_003c4f84(&pdStack_2a0,ppppplVar17);
    pdVar8 = pdStack_298;
    pdVar29 = pdStack_2a0;
    if (pdStack_2a0 == pdStack_298) {
LAB_003cde94:
      if (((ulong)pdVar8 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      pdStack_2a0 = (dword *)(segment_command_00000020.segname + 0xe);
      pdStack_298 = pdVar29;
      if (((ulong)pdVar8 & 1) != 0) {
        FUN_0055293c();
        pdVar8 = pdStack_2a0;
        goto LAB_003cde94;
      }
    }
    if (pdStack_298 != (dword *)0x0) goto LAB_003cdf98;
    FUN_003c5bd4(&pdStack_2a0,ppppplVar17,1,*(undefined8 *)(pdVar7 + 0x2c));
    pdVar8 = pdStack_298;
    pdVar29 = pdStack_2a0;
    if (pdStack_2a0 == pdStack_298) {
LAB_003cded8:
      if (((ulong)pdVar8 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      pdStack_2a0 = (dword *)(segment_command_00000020.segname + 0xe);
      pdStack_298 = pdVar29;
      if (((ulong)pdVar8 & 1) != 0) {
        FUN_0055293c();
        pdVar8 = pdStack_2a0;
        goto LAB_003cded8;
      }
    }
    if (pdStack_298 != (dword *)0x0) goto LAB_003cdf98;
    ppppplVar6 = ppppplVar17;
    _bind(ppppplVar17,pdVar19,pdVar19[0x20]);
    if ((int)ppppplVar6 < 0) {
      ___error();
      FUN_003be008(auStack_2a8,&uStack_2a9,*(int *)ppppplVar6,"bind");
      FUN_003ce340(&pdStack_2a0,auStack_2a8);
      pdVar29 = pdStack_298;
      if (pdStack_2a0 != pdStack_298) {
        pdStack_298 = pdStack_2a0;
        pdStack_2a0 = (dword *)(segment_command_00000020.segname + 0xe);
        if (((ulong)pdVar29 & 1) != 0) {
          FUN_0055293c();
        }
      }
      FUN_0033c494(&pdStack_2a0);
      puVar9 = auStack_2a8;
LAB_003ce1ec:
      FUN_0033c494(puVar9);
      if (pdStack_298 == (dword *)0x0) {
        pcStack_2d0 = "!GRPC_ERROR_IS_NONE(err)";
        uVar18 = 0xd7;
LAB_003ce214:
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_common.cc"
                     ,uVar18,2,"assertion failed: %s");
        _abort();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x3ce238);
        (*pcVar4)();
      }
      goto LAB_003cdf98;
    }
    func_0x00339fa0(0xafaff0,FUN_003ce368);
    ppppplVar6 = ppppplVar17;
    _listen(ppppplVar17,uRam0000000000b5ea28);
    if ((int)ppppplVar6 < 0) {
      ___error();
      FUN_003be008(auStack_2b8,&uStack_2a9,*(int *)ppppplVar6,"listen");
      FUN_003ce340(&pdStack_2a0,auStack_2b8);
      pdVar29 = pdStack_298;
      if (pdStack_2a0 != pdStack_298) {
        pdStack_298 = pdStack_2a0;
        pdStack_2a0 = (dword *)(segment_command_00000020.segname + 0xe);
        if (((ulong)pdVar29 & 1) != 0) {
          FUN_0055293c();
        }
      }
      FUN_0033c494(&pdStack_2a0);
      puVar9 = auStack_2b8;
      goto LAB_003ce1ec;
    }
    pdVar29 = &dStack_20c;
    dStack_20c = 0x80;
    ppppplVar6 = ppppplVar17;
    _getsockname(ppppplVar17,auStack_28c);
    if ((int)ppppplVar6 < 0) {
      ___error();
      FUN_003be008(auStack_2c0,&uStack_2a9,*(int *)ppppplVar6,"getsockname");
      FUN_003ce340(&pdStack_2a0,auStack_2c0);
      pdVar29 = pdStack_298;
      if (pdStack_2a0 != pdStack_298) {
        pdStack_298 = pdStack_2a0;
        pdStack_2a0 = (dword *)(segment_command_00000020.segname + 0xe);
        if (((ulong)pdVar29 & 1) != 0) {
          FUN_0055293c();
        }
      }
      FUN_0033c494(&pdStack_2a0);
      puVar9 = auStack_2c0;
      goto LAB_003ce1ec;
    }
    uVar25 = (uint)auStack_28c;
    FUN_003a1340();
    *(uint *)pppplVar21 = uVar25;
    *extraout_x8 = 0;
  }
  else {
    FUN_003c5414(&pdStack_2a0,ppppplVar17,1);
    pdVar8 = pdStack_298;
    pdVar29 = pdStack_2a0;
    if (pdStack_2a0 == pdStack_298) {
LAB_003cdf88:
      if (((ulong)pdVar8 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      pdStack_2a0 = (dword *)(segment_command_00000020.segname + 0xe);
      pdStack_298 = pdVar29;
      if (((ulong)pdVar8 & 1) != 0) {
        FUN_0055293c();
        pdVar8 = pdStack_2a0;
        goto LAB_003cdf88;
      }
    }
    if (pdStack_298 == (dword *)0x0) goto LAB_003cdddc;
LAB_003cdf98:
    _close(ppppplVar17);
    pcVar20 = (char *)&pdStack_2a0;
    FUN_003bdf2c(&uStack_2c8,2,"Unable to configure socket",0x1a,pcVar20,1,&pdStack_298);
    pdVar29 = (dword *)((ulong)ppppplVar17 & 0xffffffff);
    FUN_003be104(extraout_x8,&uStack_2c8,10);
    if ((uStack_2c8 & 1) != 0) {
      FUN_0055293c();
    }
  }
  pdVar8 = pdStack_298;
  if (((ulong)pdStack_298 & 1) != 0) {
    FUN_0055293c();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_208) {
    return pdVar8;
  }
  ___stack_chk_fail();
  FUN_0033c494(&pdStack_2a0);
  FUN_0033c494(auStack_2c0);
  FUN_0033c494(&pdStack_298);
  pdVar10 = pdVar8;
  __Unwind_Resume();
  puStack_2f0 = (undefined1 *)&ppuStack_2e0;
  pcStack_2d8 = FUN_003ce340;
  if (*(long *)pdVar10 != 0) {
    *extraout_x8_00 = *(long *)pdVar10;
    *(undefined8 *)pdVar10 = 0x36;
    return pdVar10;
  }
  ppuStack_2e0 = &puStack_1d0;
  func_0x0077474c();
  pcStack_2e8 = FUN_003ce368;
  lStack_308 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar23 = "/proc/sys/net/core/somaxconn";
  uVar16 = 0x8e5a2c;
  pppplStack_300 = (long ****)ppppplVar17;
  pdStack_2f8 = pdVar8;
  _fopen();
  pdStack_378 = pdVar8;
  if ((dword *)pcVar23 == (dword *)0x0) {
LAB_003ce434:
    uRam0000000000b5ea28 = 0x80;
  }
  else {
    pppplVar5 = appplStack_348;
    uVar16 = 0x40;
    pdVar29 = (dword *)pcVar23;
    _fgets();
    pdStack_378 = (dword *)pcVar23;
    if (pppplVar5 == (long ****)0x0) {
LAB_003ce42c:
      _fclose();
      goto LAB_003ce434;
    }
    ppppplVar6 = (long *****)appplStack_348;
    uVar16 = SUB84(&pcStack_350,0);
    pdVar29 = (dword *)((long)&MACH_HEADER.cpusubtype + 2);
    _strtol();
    if ((((char *)0x7ffffffe < (char *)((long)ppppplVar6 + -1)) || (pcStack_350 == (char *)0x0)) ||
       (*pcStack_350 != '\n')) goto LAB_003ce42c;
    _fclose();
    uRam0000000000b5ea28 = (uint)ppppplVar6;
    ppppplVar17 = ppppplVar6;
    if (uRam0000000000b5ea28 < 100) {
      pcVar23 = 
      "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_common.cc"
      ;
      pcVar20 = "Suspiciously small accept queue (%d) will probably lead to connection drops";
      uVar16 = 0x47;
      pdVar29 = (dword *)((long)&MACH_HEADER.magic + 1);
      pppplStack_360 = (long ****)ppppplVar6;
      FUN_00339074();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_308) {
    return (dword *)pcVar23;
  }
  ___stack_chk_fail();
  pcStack_368 = FUN_003ce46c;
  lStack_3d0 = *(long *)PTR____stack_chk_guard_00999f88;
  pdStack_4d0 = (dword *)0x0;
  plStack_4c8 = (long *)0x0;
  uStack_3c0 = unaff_x28;
  pdStack_3b8 = unaff_x27;
  lStack_3b0 = unaff_x26;
  pppplStack_3a8 = (long ****)param_6;
  lStack_3a0 = param_2;
  pdStack_398 = pdVar7;
  pdStack_390 = pdVar19;
  ppplStack_388 = (long ***)pppplVar21;
  pppplStack_380 = (long ****)ppppplVar17;
  ppuStack_370 = &puStack_2f0;
  if ((int)pdVar29 == 0) {
    func_0x003a08d4(0,apuStack_458);
    FUN_003c5d08(&pdStack_538,apuStack_458,1,0,&puStack_4c0,&uStack_500);
    if (pdStack_538 == (dword *)0x0) {
      if ((int)puStack_4c0 == 1) {
        func_0x003a0878(0,apuStack_458);
      }
      puVar14 = (undefined4 *)(uStack_500 & 0xffffffff);
      _bind(puVar14,apuStack_458,aiStack_3d8[0]);
      if ((int)puVar14 != 0) {
        ___error();
        FUN_003be008(&pdStack_4b8,&uStack_558,*puVar14,"bind");
        pdVar29 = pdStack_4b8;
        pdVar19 = pdStack_538;
        if (pdStack_4b8 == (dword *)0x0) {
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                       ,0xd5,2,"assertion failed: %s");
          _abort();
          goto LAB_003ced94;
        }
        pdStack_488 = pdStack_4b8;
        pdStack_4b8 = (dword *)(segment_command_00000020.segname + 0xe);
        if (pdVar29 == pdStack_538) {
          if (((ulong)pdVar29 & 1) != 0) {
            FUN_0055293c();
          }
        }
        else {
          pdStack_538 = pdVar29;
          pdStack_488 = (dword *)(segment_command_00000020.segname + 0xe);
          if (((ulong)pdVar19 & 1) != 0) {
            FUN_0055293c(pdVar19);
          }
        }
        if (((ulong)pdStack_4b8 & 1) != 0) {
          FUN_0055293c();
        }
        _close(uStack_500 & 0xffffffff);
        goto LAB_003ceb4c;
      }
      puVar14 = (undefined4 *)(uStack_500 & 0xffffffff);
      _getsockname(puVar14,apuStack_458,aiStack_3d8);
      if ((int)puVar14 != 0) {
        ___error();
        FUN_003be008(&pdStack_4b8,&uStack_558,*puVar14,"getsockname");
        pdVar29 = pdStack_4b8;
        pdVar19 = pdStack_538;
        if (pdStack_4b8 == (dword *)0x0) {
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                       ,0xd5,2,"assertion failed: %s");
          _abort();
          goto LAB_003ced94;
        }
        pdStack_488 = pdStack_4b8;
        pdStack_4b8 = (dword *)(segment_command_00000020.segname + 0xe);
        if (pdVar29 == pdStack_538) {
          if (((ulong)pdVar29 & 1) != 0) {
            FUN_0055293c();
          }
        }
        else {
          pdStack_538 = pdVar29;
          pdStack_488 = (dword *)(segment_command_00000020.segname + 0xe);
          if (((ulong)pdVar19 & 1) != 0) {
            FUN_0055293c(pdVar19);
          }
        }
        if (((ulong)pdStack_4b8 & 1) != 0) {
          FUN_0055293c();
        }
        _close(uStack_500 & 0xffffffff);
        goto LAB_003ceb4c;
      }
      _close(uStack_500 & 0xffffffff);
      pdVar29 = (dword *)apuStack_458;
      FUN_003a1340();
      if ((int)pdVar29 < 1) {
        pdStack_488 = (dword *)0x0;
        uStack_480 = 0;
        uStack_478 = 0;
        FUN_003b646c(&pdStack_570,2,"Bad port",8,&uStack_558,&pdStack_488);
        pdStack_4b8 = (dword *)&pdStack_488;
        FUN_0033d548(&pdStack_4b8);
      }
      else {
        pdStack_570 = (dword *)0x0;
      }
      if (((ulong)pdStack_538 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
LAB_003ceb4c:
      pdVar29 = (dword *)0x0;
      pdStack_570 = pdStack_538;
    }
    pdVar19 = pdStack_4d0;
    if (pdStack_570 != pdStack_4d0) {
      pdStack_4d0 = pdStack_570;
      pdStack_570 = (dword *)(segment_command_00000020.segname + 0xe);
      if (((ulong)pdVar19 & 1) != 0) {
        FUN_0055293c();
      }
    }
    apuStack_458[0] = (undefined8 *)0x0;
    if (pdStack_4d0 == (dword *)0x0) {
      uVar25 = 0;
    }
    else {
      ppdVar15 = &pdStack_4d0;
      FUN_00552b00(ppdVar15,apuStack_458);
      uVar25 = (uint)ppdVar15 ^ 1;
      if (((ulong)apuStack_458[0] & 1) != 0) {
        FUN_0055293c();
      }
    }
    if (((ulong)pdStack_570 & 1) != 0) {
      FUN_0055293c();
    }
    if (uVar25 != 0) {
      *extraout_x8_01 = (long)pdStack_4d0;
LAB_003cebc8:
      pdStack_4d0 = (dword *)(segment_command_00000020.segname + 0xe);
      goto LAB_003cec38;
    }
    if ((int)pdVar29 < 1) {
      uStack_4e0 = 0;
      uStack_4d8 = 0;
      uStack_4e8 = 0;
      puVar26 = &uStack_4e8;
      FUN_003b646c(extraout_x8_01,2,"Bad get_unused_port()",0x15,&pdStack_488,&uStack_4e8);
LAB_003cec2c:
      apuStack_458[0] = puVar26;
      FUN_0033d548(apuStack_458);
      goto LAB_003cec38;
    }
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_ifaddrs.cc"
                 ,0x6f,0,"Picked unused port %d");
  }
  pplVar11 = &plStack_4c8;
  _getifaddrs();
  if (((int)pplVar11 == 0) && (plStack_4c8 != (long *)0x0)) {
    iVar30 = 0;
    plVar27 = plStack_4c8;
    uVar31 = 0;
LAB_003ce4f0:
    uStack_500 = 0;
    pcVar39 = "<unknown>";
    if ((char *)plVar27[1] != (char *)0x0) {
      pcVar39 = (char *)plVar27[1];
    }
    uVar32 = uVar31;
    if (plVar27[3] == 0) goto LAB_003ce700;
    cVar1 = *(char *)(plVar27[3] + 1);
    if (cVar1 == '\x02') {
      aiStack_3d8[0] = 0x10;
    }
    else {
      if (cVar1 != '\x1e') goto LAB_003ce700;
      aiStack_3d8[0] = 0x1c;
    }
    _memcpy(apuStack_458);
    ppuVar12 = apuStack_458;
    FUN_003a13ac(ppuVar12,pdVar29);
    if ((int)ppuVar12 == 0) {
      uStack_510 = 0;
      uStack_508 = 0;
      lStack_518 = 0;
      FUN_003b646c(&pdStack_4b8,2,"Failed to set port",0x12,&pdStack_538,&lStack_518);
      pdVar19 = pdStack_4d0;
      if (pdStack_4b8 == pdStack_4d0) {
LAB_003ce838:
        if (((ulong)pdVar19 & 1) != 0) {
          FUN_0055293c();
        }
      }
      else {
        pdStack_4d0 = pdStack_4b8;
        pdStack_4b8 = (dword *)(segment_command_00000020.segname + 0xe);
        if (((ulong)pdVar19 & 1) != 0) {
          FUN_0055293c();
          pdVar19 = pdStack_4b8;
          goto LAB_003ce838;
        }
      }
      pdStack_488 = (dword *)&lStack_518;
      FUN_0033d548(&pdStack_488);
    }
    else {
      FUN_003a0930(&pdStack_538,apuStack_458,0);
      if (pdStack_538 != (dword *)0x0) {
        FUN_00552ec8(&pdStack_488,&pdStack_538,1);
        uVar31 = uStack_480;
        pdVar19 = pdStack_488;
        if (-1 < (long)uStack_478) {
          uVar31 = uStack_478 >> 0x38;
          pdVar19 = (dword *)&pdStack_488;
        }
        uStack_548 = 0;
        uStack_540 = 0;
        lStack_550 = 0;
        FUN_003b646c(extraout_x8_01,2,pdVar19,uVar31,&pdStack_570,&lStack_550);
        pdStack_4b8 = (dword *)&lStack_550;
        FUN_0033d548(&pdStack_4b8);
        if ((long)uStack_478 < 0) {
          __ZdlPv(pdStack_488);
        }
        FUN_0035d18c(&pdStack_538);
        goto LAB_003cec38;
      }
      pppppuVar40 = (undefined8 *****)appppuStack_530[0];
      if (-1 < cStack_519) {
        pppppuVar40 = appppuStack_530;
      }
      uVar24 = (ulong)*(uint *)(plVar27 + 2);
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_ifaddrs.cc"
                   ,0x8c,0,"Adding local addr from interface %s flags 0x%x to server: %s");
      func_0x00339d8c((char *)((long)pcVar23 + 0x18));
      iVar3 = aiStack_3d8[0];
      for (lVar28 = *(long *)((long)pcVar23 + 0x70); lVar28 != 0; lVar28 = *(long *)(lVar28 + 0xe8))
      {
        if (*(int *)(lVar28 + 0x98) == iVar3) {
          lVar13 = lVar28 + 0x18;
          _memcmp(lVar13,apuStack_458,iVar3);
          if ((int)lVar13 == 0) break;
        }
      }
      func_0x00339da8((char *)((long)pcVar23 + 0x18));
      if (lVar28 != 0) {
        if (pdStack_538 == (dword *)0x0) {
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_ifaddrs.cc"
                       ,0x92,0,"Skipping duplicate addr %s on interface %s");
LAB_003ce6f8:
          FUN_0035d18c(&pdStack_538);
          goto LAB_003ce700;
        }
        FUN_0055169c(&pdStack_538);
        goto LAB_003ced94;
      }
      FUN_003cd970(&pdStack_488,pcVar23,apuStack_458,uVar16,iVar30,auStack_4f4,&uStack_500,param_8,
                   param_9,pcVar39,uVar24,pppppuVar40);
      pdVar19 = pdStack_4d0;
      if (pdStack_488 != pdStack_4d0) {
        pdStack_4d0 = pdStack_488;
        pdStack_488 = (dword *)(segment_command_00000020.segname + 0xe);
        if (((ulong)pdVar19 & 1) != 0) {
          FUN_0055293c();
        }
      }
      pdStack_4b8 = (dword *)0x0;
      if (pdStack_4d0 == (dword *)0x0) {
        uVar25 = 0;
      }
      else {
        ppdVar15 = &pdStack_4d0;
        FUN_00552b00(ppdVar15,&pdStack_4b8);
        uVar25 = (uint)ppdVar15 ^ 1;
        if (((ulong)pdStack_4b8 & 1) != 0) {
          FUN_0055293c();
        }
      }
      if (((ulong)pdStack_488 & 1) != 0) {
        FUN_0055293c();
      }
      if (uVar25 == 0) {
        if ((int)pdVar29 == *(int *)(uStack_500 + 0x9c)) {
          iVar30 = iVar30 + 1;
          uVar32 = uStack_500;
          if (uVar31 != 0) {
            *(undefined4 *)(uStack_500 + 0xf8) = 1;
            *(ulong *)(uVar31 + 0xf0) = uStack_500;
          }
          goto LAB_003ce6f8;
        }
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_ifaddrs.cc"
                     ,0x9d,2,"assertion failed: %s");
        _abort();
        goto LAB_003ced94;
      }
      pdStack_488 = (dword *)0x8ca41b;
      uStack_480 = 0x18;
      pdVar19 = (dword *)&pdStack_538;
      FUN_00375c3c();
      uStack_4b0 = *(ulong *)(pdVar19 + 2);
      pdStack_4b8 = *(dword **)pdVar19;
      if (-1 < (char)*(byte *)((long)pdVar19 + 0x17)) {
        uStack_4b0 = (ulong)*(byte *)((long)pdVar19 + 0x17);
        pdStack_4b8 = pdVar19;
      }
      FUN_00575d30(&pdStack_570,&pdStack_488,&pdStack_4b8);
      pdVar19 = pdStack_570;
      if (-1 < (char)bStack_559) {
        uStack_568 = (ulong)bStack_559;
        pdVar19 = (dword *)&pdStack_570;
      }
      uStack_588 = 0;
      uStack_580 = 0;
      uStack_590 = 0;
      FUN_003b646c(&uStack_558,2,pdVar19,uStack_568,&uStack_571,&uStack_590);
      puStack_4c0 = &uStack_590;
      FUN_0033d548(&puStack_4c0);
      if ((char)bStack_559 < '\0') {
        __ZdlPv(pdStack_570);
      }
      uStack_598 = uStack_558;
      if ((uStack_558 & 1) != 0) {
        piVar22 = (int *)(uStack_558 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar22,0x10);
          if (bVar2) {
            *piVar22 = *piVar22 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      pdStack_5a0 = pdStack_4d0;
      if (((ulong)pdStack_4d0 & 1) != 0) {
        pcVar23 = (char *)((long)pdStack_4d0 + -1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(pcVar23,0x10);
          if (bVar2) {
            *(int *)pcVar23 = *(int *)pcVar23 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_003be56c(&pdStack_488,&uStack_598,&pdStack_5a0);
      pdVar19 = pdStack_4d0;
      if (pdStack_488 == pdStack_4d0) {
LAB_003cea68:
        if (((ulong)pdVar19 & 1) != 0) {
          FUN_0055293c();
        }
      }
      else {
        pdStack_4d0 = pdStack_488;
        pdStack_488 = (dword *)(segment_command_00000020.segname + 0xe);
        if (((ulong)pdVar19 & 1) != 0) {
          FUN_0055293c();
          pdVar19 = pdStack_488;
          goto LAB_003cea68;
        }
      }
      if (((ulong)pdStack_5a0 & 1) != 0) {
        FUN_0055293c();
      }
      if ((uStack_598 & 1) != 0) {
        FUN_0055293c();
      }
      if ((uStack_558 & 1) != 0) {
        FUN_0055293c();
      }
      FUN_0035d18c(&pdStack_538);
    }
    goto LAB_003cea9c;
  }
  ___error();
  FUN_003be008(&lStack_4f0,apuStack_458,*(undefined4 *)pplVar11,"getifaddrs");
  if (lStack_4f0 == 0) {
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                 ,0xd5,2,"assertion failed: %s");
    _abort();
LAB_003ced94:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x3ced98);
    (*pcVar4)();
  }
  *extraout_x8_01 = lStack_4f0;
  lStack_4f0 = 0x36;
LAB_003cec38:
  pdVar19 = pdStack_4d0;
  if (((ulong)pdStack_4d0 & 1) != 0) {
    FUN_0055293c();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_3d0) {
    ___stack_chk_fail();
    FUN_0033c494(&pdStack_488);
    FUN_0033c494(&pdStack_5a0);
    FUN_0033c494(&uStack_598);
    FUN_0033c494(&uStack_558);
    FUN_0035d18c(&pdStack_538);
    FUN_0033c494(&pdStack_4d0);
    __Unwind_Resume(pdVar19);
    return (dword *)((long)&MACH_HEADER.magic + 1);
  }
  return pdVar19;
LAB_003ce700:
  plVar27 = (long *)*plVar27;
  uVar31 = uVar32;
  if (plVar27 == (long *)0x0) {
LAB_003cea9c:
    _freeifaddrs(plStack_4c8);
    if (pdStack_4d0 == (dword *)0x0) {
      if (uVar32 != 0) {
        *(int *)pcVar20 = *(int *)(uVar32 + 0x9c);
        *extraout_x8_01 = 0;
        goto LAB_003cec38;
      }
      uStack_5b0 = 0;
      uStack_5a8 = 0;
      uStack_5b8 = 0;
      puVar26 = &uStack_5b8;
      FUN_003b646c(2,"No local addresses",0x12,&pdStack_488,&uStack_5b8);
      goto LAB_003cec2c;
    }
    *extraout_x8_01 = (long)pdStack_4d0;
    goto LAB_003cebc8;
  }
  goto LAB_003ce4f0;
}



/* Entry: 003cdd88; end: 003ce33f;  */

char * FUN_003cdd88(undefined8 *param_1,long param_2,undefined4 *param_3,long param_4,char *param_5,
                   undefined4 *param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 *puVar8;
  long **pplVar9;
  undefined8 **ppuVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  char **ppcVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  long *extraout_x8;
  long *extraout_x8_00;
  int *piVar16;
  char *pcVar17;
  ulong uVar18;
  uint uVar19;
  long *plVar20;
  undefined8 *puVar21;
  int iVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 *****pppppuVar25;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  char *pcStack_3e0;
  ulong uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined1 uStack_3b1;
  char *pcStack_3b0;
  ulong uStack_3a8;
  byte bStack_399;
  ulong uStack_398;
  long lStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  char *pcStack_378;
  undefined8 ****appppuStack_370 [2];
  char cStack_359;
  long lStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  ulong uStack_340;
  undefined1 auStack_334 [4];
  long lStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  char *pcStack_310;
  long *plStack_308;
  undefined8 *puStack_300;
  char *pcStack_2f8;
  ulong uStack_2f0;
  char *pcStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  undefined8 *apuStack_298 [16];
  int aiStack_218 [2];
  long lStack_210;
  char *pcStack_190;
  undefined1 auStack_188 [64];
  long lStack_148;
  undefined4 *puStack_140;
  char *pcStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  char *pcStack_110;
  ulong uStack_108;
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [15];
  undefined1 uStack_e9;
  undefined1 auStack_e8 [8];
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 auStack_cc [128];
  undefined4 uStack_4c;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pcStack_d8 = (char *)0x0;
  if ((int)param_3 < 0) {
    pcStack_110 = "fd >= 0";
    uVar15 = 0x9d;
    goto LAB_003ce214;
  }
  if (((int)param_5 == 0) || (lVar5 = param_4, func_0x003d05c8(), (int)lVar5 != 0)) {
LAB_003cdddc:
    FUN_003c4e4c(&pcStack_e0,param_3,1);
    pcVar6 = pcStack_d8;
    pcVar17 = pcStack_e0;
    if (pcStack_e0 == pcStack_d8) {
LAB_003cde0c:
      if (((ulong)pcVar6 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      pcStack_e0 = segment_command_00000020.segname + 0xe;
      pcStack_d8 = pcVar17;
      if (((ulong)pcVar6 & 1) != 0) {
        FUN_0055293c();
        pcVar6 = pcStack_e0;
        goto LAB_003cde0c;
      }
    }
    if (pcStack_d8 != (char *)0x0) goto LAB_003cdf98;
    FUN_003c5130(&pcStack_e0,param_3,1);
    pcVar6 = pcStack_d8;
    pcVar17 = pcStack_e0;
    if (pcStack_e0 == pcStack_d8) {
LAB_003cde4c:
      if (((ulong)pcVar6 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      pcStack_e0 = segment_command_00000020.segname + 0xe;
      pcStack_d8 = pcVar17;
      if (((ulong)pcVar6 & 1) != 0) {
        FUN_0055293c();
        pcVar6 = pcStack_e0;
        goto LAB_003cde4c;
      }
    }
    if (pcStack_d8 != (char *)0x0) goto LAB_003cdf98;
    lVar5 = param_4;
    func_0x003d05c8();
    if ((int)lVar5 == 0) {
      FUN_003c56e4(&pcStack_e0,param_3,1);
      pcVar6 = pcStack_d8;
      pcVar17 = pcStack_e0;
      if (pcStack_e0 == pcStack_d8) {
LAB_003ce050:
        if (((ulong)pcVar6 & 1) != 0) {
          FUN_0055293c();
        }
      }
      else {
        pcStack_e0 = segment_command_00000020.segname + 0xe;
        pcStack_d8 = pcVar17;
        if (((ulong)pcVar6 & 1) != 0) {
          FUN_0055293c();
          pcVar6 = pcStack_e0;
          goto LAB_003ce050;
        }
      }
      if (pcStack_d8 != (char *)0x0) goto LAB_003cdf98;
      FUN_003c526c(&pcStack_e0,param_3,1);
      pcVar6 = pcStack_d8;
      pcVar17 = pcStack_e0;
      if (pcStack_e0 == pcStack_d8) {
LAB_003ce090:
        if (((ulong)pcVar6 & 1) != 0) {
          FUN_0055293c();
        }
      }
      else {
        pcStack_e0 = segment_command_00000020.segname + 0xe;
        pcStack_d8 = pcVar17;
        if (((ulong)pcVar6 & 1) != 0) {
          FUN_0055293c();
          pcVar6 = pcStack_e0;
          goto LAB_003ce090;
        }
      }
      if (pcStack_d8 != (char *)0x0) goto LAB_003cdf98;
      FUN_003c588c(&pcStack_e0,param_3,*(undefined8 *)(param_2 + 0xb0),0);
      pcVar6 = pcStack_d8;
      pcVar17 = pcStack_e0;
      if (pcStack_e0 == pcStack_d8) {
LAB_003ce0d4:
        if (((ulong)pcVar6 & 1) != 0) {
          FUN_0055293c();
        }
      }
      else {
        pcStack_e0 = segment_command_00000020.segname + 0xe;
        pcStack_d8 = pcVar17;
        if (((ulong)pcVar6 & 1) != 0) {
          FUN_0055293c();
          pcVar6 = pcStack_e0;
          goto LAB_003ce0d4;
        }
      }
      if (pcStack_d8 != (char *)0x0) goto LAB_003cdf98;
    }
    FUN_003c4f84(&pcStack_e0,param_3);
    pcVar6 = pcStack_d8;
    pcVar17 = pcStack_e0;
    if (pcStack_e0 == pcStack_d8) {
LAB_003cde94:
      if (((ulong)pcVar6 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      pcStack_e0 = segment_command_00000020.segname + 0xe;
      pcStack_d8 = pcVar17;
      if (((ulong)pcVar6 & 1) != 0) {
        FUN_0055293c();
        pcVar6 = pcStack_e0;
        goto LAB_003cde94;
      }
    }
    if (pcStack_d8 != (char *)0x0) goto LAB_003cdf98;
    FUN_003c5bd4(&pcStack_e0,param_3,1,*(undefined8 *)(param_2 + 0xb0));
    pcVar6 = pcStack_d8;
    pcVar17 = pcStack_e0;
    if (pcStack_e0 == pcStack_d8) {
LAB_003cded8:
      if (((ulong)pcVar6 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      pcStack_e0 = segment_command_00000020.segname + 0xe;
      pcStack_d8 = pcVar17;
      if (((ulong)pcVar6 & 1) != 0) {
        FUN_0055293c();
        pcVar6 = pcStack_e0;
        goto LAB_003cded8;
      }
    }
    if (pcStack_d8 != (char *)0x0) goto LAB_003cdf98;
    puVar12 = param_3;
    _bind(param_3,param_4,*(undefined4 *)(param_4 + 0x80));
    if ((int)puVar12 < 0) {
      ___error();
      FUN_003be008(auStack_e8,&uStack_e9,*puVar12,"bind");
      FUN_003ce340(&pcStack_e0,auStack_e8);
      pcVar17 = pcStack_d8;
      if (pcStack_e0 != pcStack_d8) {
        pcStack_d8 = pcStack_e0;
        pcStack_e0 = segment_command_00000020.segname + 0xe;
        if (((ulong)pcVar17 & 1) != 0) {
          FUN_0055293c();
        }
      }
      FUN_0033c494(&pcStack_e0);
      puVar8 = auStack_e8;
LAB_003ce1ec:
      FUN_0033c494(puVar8);
      if (pcStack_d8 == (char *)0x0) {
        pcStack_110 = "!GRPC_ERROR_IS_NONE(err)";
        uVar15 = 0xd7;
LAB_003ce214:
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_common.cc"
                     ,uVar15,2,"assertion failed: %s");
        _abort();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x3ce238);
        (*pcVar4)();
      }
      goto LAB_003cdf98;
    }
    func_0x00339fa0(0xafaff0,FUN_003ce368);
    puVar12 = param_3;
    _listen(param_3,uRam0000000000b5ea28);
    if ((int)puVar12 < 0) {
      ___error();
      FUN_003be008(auStack_f8,&uStack_e9,*puVar12,"listen");
      FUN_003ce340(&pcStack_e0,auStack_f8);
      pcVar17 = pcStack_d8;
      if (pcStack_e0 != pcStack_d8) {
        pcStack_d8 = pcStack_e0;
        pcStack_e0 = segment_command_00000020.segname + 0xe;
        if (((ulong)pcVar17 & 1) != 0) {
          FUN_0055293c();
        }
      }
      FUN_0033c494(&pcStack_e0);
      puVar8 = auStack_f8;
      goto LAB_003ce1ec;
    }
    pcVar17 = (char *)&uStack_4c;
    uStack_4c = 0x80;
    puVar12 = param_3;
    _getsockname(param_3,auStack_cc);
    if ((int)puVar12 < 0) {
      ___error();
      FUN_003be008(auStack_100,&uStack_e9,*puVar12,"getsockname");
      FUN_003ce340(&pcStack_e0,auStack_100);
      pcVar17 = pcStack_d8;
      if (pcStack_e0 != pcStack_d8) {
        pcStack_d8 = pcStack_e0;
        pcStack_e0 = segment_command_00000020.segname + 0xe;
        if (((ulong)pcVar17 & 1) != 0) {
          FUN_0055293c();
        }
      }
      FUN_0033c494(&pcStack_e0);
      puVar8 = auStack_100;
      goto LAB_003ce1ec;
    }
    uVar14 = SUB84(auStack_cc,0);
    FUN_003a1340();
    *param_6 = uVar14;
    *param_1 = 0;
  }
  else {
    FUN_003c5414(&pcStack_e0,param_3,1);
    pcVar6 = pcStack_d8;
    pcVar17 = pcStack_e0;
    if (pcStack_e0 == pcStack_d8) {
LAB_003cdf88:
      if (((ulong)pcVar6 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      pcStack_e0 = segment_command_00000020.segname + 0xe;
      pcStack_d8 = pcVar17;
      if (((ulong)pcVar6 & 1) != 0) {
        FUN_0055293c();
        pcVar6 = pcStack_e0;
        goto LAB_003cdf88;
      }
    }
    if (pcStack_d8 == (char *)0x0) goto LAB_003cdddc;
LAB_003cdf98:
    _close(param_3);
    param_5 = (char *)&pcStack_e0;
    FUN_003bdf2c(&uStack_108,2,"Unable to configure socket",0x1a,param_5,1,&pcStack_d8);
    pcVar17 = (char *)((ulong)param_3 & 0xffffffff);
    FUN_003be104(param_1,&uStack_108,10);
    if ((uStack_108 & 1) != 0) {
      FUN_0055293c();
    }
  }
  pcVar6 = pcStack_d8;
  if (((ulong)pcStack_d8 & 1) != 0) {
    FUN_0055293c();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return pcVar6;
  }
  ___stack_chk_fail();
  FUN_0033c494(&pcStack_e0);
  FUN_0033c494(auStack_100);
  FUN_0033c494(&pcStack_d8);
  pcVar7 = pcVar6;
  __Unwind_Resume();
  puStack_130 = (undefined1 *)&puStack_120;
  pcStack_118 = FUN_003ce340;
  if (*(long *)pcVar7 != 0) {
    *extraout_x8 = *(long *)pcVar7;
    *(undefined8 *)pcVar7 = 0x36;
    return pcVar7;
  }
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x0077474c();
  pcStack_128 = FUN_003ce368;
  lStack_148 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar7 = "/proc/sys/net/core/somaxconn";
  uVar14 = 0x8e5a2c;
  puStack_140 = param_3;
  pcStack_138 = pcVar6;
  _fopen();
  if (pcVar7 == (char *)0x0) {
LAB_003ce434:
    uRam0000000000b5ea28 = 0x80;
  }
  else {
    puVar8 = auStack_188;
    uVar14 = 0x40;
    pcVar17 = pcVar7;
    _fgets();
    if (puVar8 == (undefined1 *)0x0) {
LAB_003ce42c:
      _fclose();
      goto LAB_003ce434;
    }
    puVar8 = auStack_188;
    uVar14 = SUB84(&pcStack_190,0);
    pcVar17 = (char *)((long)&MACH_HEADER.cpusubtype + 2);
    _strtol();
    if ((((undefined1 *)0x7ffffffe < puVar8 + -1) || (pcStack_190 == (char *)0x0)) ||
       (*pcStack_190 != '\n')) goto LAB_003ce42c;
    _fclose();
    uRam0000000000b5ea28 = (uint)puVar8;
    if (uRam0000000000b5ea28 < 100) {
      pcVar7 = 
      "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_common.cc"
      ;
      param_5 = "Suspiciously small accept queue (%d) will probably lead to connection drops";
      uVar14 = 0x47;
      pcVar17 = (char *)((long)&MACH_HEADER.magic + 1);
      FUN_00339074();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_148) {
    return pcVar7;
  }
  ___stack_chk_fail();
  lStack_210 = *(long *)PTR____stack_chk_guard_00999f88;
  pcStack_310 = (char *)0x0;
  plStack_308 = (long *)0x0;
  if ((int)pcVar17 == 0) {
    func_0x003a08d4(0,apuStack_298);
    FUN_003c5d08(&pcStack_378,apuStack_298,1,0,&puStack_300,&uStack_340);
    if (pcStack_378 == (char *)0x0) {
      if ((int)puStack_300 == 1) {
        func_0x003a0878(0,apuStack_298);
      }
      puVar12 = (undefined4 *)(uStack_340 & 0xffffffff);
      _bind(puVar12,apuStack_298,aiStack_218[0]);
      if ((int)puVar12 != 0) {
        ___error();
        FUN_003be008(&pcStack_2f8,&uStack_398,*puVar12,"bind");
        pcVar6 = pcStack_2f8;
        pcVar17 = pcStack_378;
        if (pcStack_2f8 == (char *)0x0) {
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                       ,0xd5,2,"assertion failed: %s");
          _abort();
          goto LAB_003ced94;
        }
        pcStack_2c8 = pcStack_2f8;
        pcStack_2f8 = segment_command_00000020.segname + 0xe;
        if (pcVar6 == pcStack_378) {
          if (((ulong)pcVar6 & 1) != 0) {
            FUN_0055293c();
          }
        }
        else {
          pcStack_378 = pcVar6;
          pcStack_2c8 = segment_command_00000020.segname + 0xe;
          if (((ulong)pcVar17 & 1) != 0) {
            FUN_0055293c(pcVar17);
          }
        }
        if (((ulong)pcStack_2f8 & 1) != 0) {
          FUN_0055293c();
        }
        _close(uStack_340 & 0xffffffff);
        goto LAB_003ceb4c;
      }
      puVar12 = (undefined4 *)(uStack_340 & 0xffffffff);
      _getsockname(puVar12,apuStack_298,aiStack_218);
      if ((int)puVar12 != 0) {
        ___error();
        FUN_003be008(&pcStack_2f8,&uStack_398,*puVar12,"getsockname");
        pcVar6 = pcStack_2f8;
        pcVar17 = pcStack_378;
        if (pcStack_2f8 == (char *)0x0) {
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                       ,0xd5,2,"assertion failed: %s");
          _abort();
          goto LAB_003ced94;
        }
        pcStack_2c8 = pcStack_2f8;
        pcStack_2f8 = segment_command_00000020.segname + 0xe;
        if (pcVar6 == pcStack_378) {
          if (((ulong)pcVar6 & 1) != 0) {
            FUN_0055293c();
          }
        }
        else {
          pcStack_378 = pcVar6;
          pcStack_2c8 = segment_command_00000020.segname + 0xe;
          if (((ulong)pcVar17 & 1) != 0) {
            FUN_0055293c(pcVar17);
          }
        }
        if (((ulong)pcStack_2f8 & 1) != 0) {
          FUN_0055293c();
        }
        _close(uStack_340 & 0xffffffff);
        goto LAB_003ceb4c;
      }
      _close(uStack_340 & 0xffffffff);
      pcVar17 = (char *)apuStack_298;
      FUN_003a1340();
      if ((int)pcVar17 < 1) {
        pcStack_2c8 = (char *)0x0;
        uStack_2c0 = 0;
        uStack_2b8 = 0;
        FUN_003b646c(&pcStack_3b0,2,"Bad port",8,&uStack_398,&pcStack_2c8);
        pcStack_2f8 = (char *)&pcStack_2c8;
        FUN_0033d548(&pcStack_2f8);
      }
      else {
        pcStack_3b0 = (char *)0x0;
      }
      if (((ulong)pcStack_378 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
LAB_003ceb4c:
      pcVar17 = (char *)0x0;
      pcStack_3b0 = pcStack_378;
    }
    pcVar6 = pcStack_310;
    if (pcStack_3b0 != pcStack_310) {
      pcStack_310 = pcStack_3b0;
      pcStack_3b0 = segment_command_00000020.segname + 0xe;
      if (((ulong)pcVar6 & 1) != 0) {
        FUN_0055293c();
      }
    }
    apuStack_298[0] = (undefined8 *)0x0;
    if (pcStack_310 == (char *)0x0) {
      uVar19 = 0;
    }
    else {
      ppcVar13 = &pcStack_310;
      FUN_00552b00(ppcVar13,apuStack_298);
      uVar19 = (uint)ppcVar13 ^ 1;
      if (((ulong)apuStack_298[0] & 1) != 0) {
        FUN_0055293c();
      }
    }
    if (((ulong)pcStack_3b0 & 1) != 0) {
      FUN_0055293c();
    }
    if (uVar19 != 0) {
      *extraout_x8_00 = (long)pcStack_310;
LAB_003cebc8:
      pcStack_310 = segment_command_00000020.segname + 0xe;
      goto LAB_003cec38;
    }
    if ((int)pcVar17 < 1) {
      uStack_320 = 0;
      uStack_318 = 0;
      uStack_328 = 0;
      puVar21 = &uStack_328;
      FUN_003b646c(extraout_x8_00,2,"Bad get_unused_port()",0x15,&pcStack_2c8,&uStack_328);
LAB_003cec2c:
      apuStack_298[0] = puVar21;
      FUN_0033d548(apuStack_298);
      goto LAB_003cec38;
    }
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_ifaddrs.cc"
                 ,0x6f,0,"Picked unused port %d");
  }
  pplVar9 = &plStack_308;
  _getifaddrs();
  if (((int)pplVar9 == 0) && (plStack_308 != (long *)0x0)) {
    iVar22 = 0;
    plVar20 = plStack_308;
    uVar23 = 0;
LAB_003ce4f0:
    uStack_340 = 0;
    pcVar6 = "<unknown>";
    if ((char *)plVar20[1] != (char *)0x0) {
      pcVar6 = (char *)plVar20[1];
    }
    uVar24 = uVar23;
    if (plVar20[3] == 0) goto LAB_003ce700;
    cVar1 = *(char *)(plVar20[3] + 1);
    if (cVar1 == '\x02') {
      aiStack_218[0] = 0x10;
    }
    else {
      if (cVar1 != '\x1e') goto LAB_003ce700;
      aiStack_218[0] = 0x1c;
    }
    _memcpy(apuStack_298);
    ppuVar10 = apuStack_298;
    FUN_003a13ac(ppuVar10,pcVar17);
    if ((int)ppuVar10 == 0) {
      uStack_350 = 0;
      uStack_348 = 0;
      lStack_358 = 0;
      FUN_003b646c(&pcStack_2f8,2,"Failed to set port",0x12,&pcStack_378,&lStack_358);
      pcVar17 = pcStack_310;
      if (pcStack_2f8 == pcStack_310) {
LAB_003ce838:
        if (((ulong)pcVar17 & 1) != 0) {
          FUN_0055293c();
        }
      }
      else {
        pcStack_310 = pcStack_2f8;
        pcStack_2f8 = segment_command_00000020.segname + 0xe;
        if (((ulong)pcVar17 & 1) != 0) {
          FUN_0055293c();
          pcVar17 = pcStack_2f8;
          goto LAB_003ce838;
        }
      }
      pcStack_2c8 = (char *)&lStack_358;
      FUN_0033d548(&pcStack_2c8);
    }
    else {
      FUN_003a0930(&pcStack_378,apuStack_298,0);
      if (pcStack_378 != (char *)0x0) {
        FUN_00552ec8(&pcStack_2c8,&pcStack_378,1);
        uVar23 = uStack_2c0;
        pcVar17 = pcStack_2c8;
        if (-1 < (long)uStack_2b8) {
          uVar23 = uStack_2b8 >> 0x38;
          pcVar17 = (char *)&pcStack_2c8;
        }
        uStack_388 = 0;
        uStack_380 = 0;
        lStack_390 = 0;
        FUN_003b646c(extraout_x8_00,2,pcVar17,uVar23,&pcStack_3b0,&lStack_390);
        pcStack_2f8 = (char *)&lStack_390;
        FUN_0033d548(&pcStack_2f8);
        if ((long)uStack_2b8 < 0) {
          __ZdlPv(pcStack_2c8);
        }
        FUN_0035d18c(&pcStack_378);
        goto LAB_003cec38;
      }
      pppppuVar25 = (undefined8 *****)appppuStack_370[0];
      if (-1 < cStack_359) {
        pppppuVar25 = appppuStack_370;
      }
      uVar18 = (ulong)*(uint *)(plVar20 + 2);
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_ifaddrs.cc"
                   ,0x8c,0,"Adding local addr from interface %s flags 0x%x to server: %s");
      func_0x00339d8c(pcVar7 + 0x18);
      iVar3 = aiStack_218[0];
      for (puVar21 = *(undefined8 **)(pcVar7 + 0x70); puVar21 != (undefined8 *)0x0;
          puVar21 = (undefined8 *)puVar21[0x1d]) {
        if (*(int *)(puVar21 + 0x13) == iVar3) {
          puVar11 = puVar21 + 3;
          _memcmp(puVar11,apuStack_298,iVar3);
          if ((int)puVar11 == 0) break;
        }
      }
      func_0x00339da8(pcVar7 + 0x18);
      if (puVar21 != (undefined8 *)0x0) {
        if (pcStack_378 == (char *)0x0) {
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_ifaddrs.cc"
                       ,0x92,0,"Skipping duplicate addr %s on interface %s");
LAB_003ce6f8:
          FUN_0035d18c(&pcStack_378);
          goto LAB_003ce700;
        }
        FUN_0055169c(&pcStack_378);
        goto LAB_003ced94;
      }
      FUN_003cd970(&pcStack_2c8,pcVar7,apuStack_298,uVar14,iVar22,auStack_334,&uStack_340,param_8,
                   param_9,pcVar6,uVar18,pppppuVar25);
      pcVar6 = pcStack_310;
      if (pcStack_2c8 != pcStack_310) {
        pcStack_310 = pcStack_2c8;
        pcStack_2c8 = segment_command_00000020.segname + 0xe;
        if (((ulong)pcVar6 & 1) != 0) {
          FUN_0055293c();
        }
      }
      pcStack_2f8 = (char *)0x0;
      if (pcStack_310 == (char *)0x0) {
        uVar19 = 0;
      }
      else {
        ppcVar13 = &pcStack_310;
        FUN_00552b00(ppcVar13,&pcStack_2f8);
        uVar19 = (uint)ppcVar13 ^ 1;
        if (((ulong)pcStack_2f8 & 1) != 0) {
          FUN_0055293c();
        }
      }
      if (((ulong)pcStack_2c8 & 1) != 0) {
        FUN_0055293c();
      }
      if (uVar19 == 0) {
        if ((int)pcVar17 == *(int *)(uStack_340 + 0x9c)) {
          iVar22 = iVar22 + 1;
          uVar24 = uStack_340;
          if (uVar23 != 0) {
            *(undefined4 *)(uStack_340 + 0xf8) = 1;
            *(ulong *)(uVar23 + 0xf0) = uStack_340;
          }
          goto LAB_003ce6f8;
        }
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_ifaddrs.cc"
                     ,0x9d,2,"assertion failed: %s");
        _abort();
        goto LAB_003ced94;
      }
      pcStack_2c8 = "Failed to add listener: ";
      uStack_2c0 = 0x18;
      pcVar17 = (char *)&pcStack_378;
      FUN_00375c3c();
      uStack_2f0 = *(ulong *)(pcVar17 + 8);
      pcStack_2f8 = *(char **)pcVar17;
      if (-1 < pcVar17[0x17]) {
        uStack_2f0 = (ulong)(byte)pcVar17[0x17];
        pcStack_2f8 = pcVar17;
      }
      FUN_00575d30(&pcStack_3b0,&pcStack_2c8,&pcStack_2f8);
      pcVar17 = pcStack_3b0;
      if (-1 < (char)bStack_399) {
        uStack_3a8 = (ulong)bStack_399;
        pcVar17 = (char *)&pcStack_3b0;
      }
      uStack_3c8 = 0;
      uStack_3c0 = 0;
      uStack_3d0 = 0;
      FUN_003b646c(&uStack_398,2,pcVar17,uStack_3a8,&uStack_3b1,&uStack_3d0);
      puStack_300 = &uStack_3d0;
      FUN_0033d548(&puStack_300);
      if ((char)bStack_399 < '\0') {
        __ZdlPv(pcStack_3b0);
      }
      uStack_3d8 = uStack_398;
      if ((uStack_398 & 1) != 0) {
        piVar16 = (int *)(uStack_398 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar2) {
            *piVar16 = *piVar16 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      pcStack_3e0 = pcStack_310;
      if (((ulong)pcStack_310 & 1) != 0) {
        pcVar17 = pcStack_310 + -1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(pcVar17,0x10);
          if (bVar2) {
            *(int *)pcVar17 = *(int *)pcVar17 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_003be56c(&pcStack_2c8,&uStack_3d8,&pcStack_3e0);
      pcVar17 = pcStack_310;
      if (pcStack_2c8 == pcStack_310) {
LAB_003cea68:
        if (((ulong)pcVar17 & 1) != 0) {
          FUN_0055293c();
        }
      }
      else {
        pcStack_310 = pcStack_2c8;
        pcStack_2c8 = segment_command_00000020.segname + 0xe;
        if (((ulong)pcVar17 & 1) != 0) {
          FUN_0055293c();
          pcVar17 = pcStack_2c8;
          goto LAB_003cea68;
        }
      }
      if (((ulong)pcStack_3e0 & 1) != 0) {
        FUN_0055293c();
      }
      if ((uStack_3d8 & 1) != 0) {
        FUN_0055293c();
      }
      if ((uStack_398 & 1) != 0) {
        FUN_0055293c();
      }
      FUN_0035d18c(&pcStack_378);
    }
    goto LAB_003cea9c;
  }
  ___error();
  FUN_003be008(&lStack_330,apuStack_298,*(undefined4 *)pplVar9,"getifaddrs");
  if (lStack_330 == 0) {
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                 ,0xd5,2,"assertion failed: %s");
    _abort();
LAB_003ced94:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x3ced98);
    (*pcVar4)();
  }
  *extraout_x8_00 = lStack_330;
  lStack_330 = 0x36;
LAB_003cec38:
  pcVar17 = pcStack_310;
  if (((ulong)pcStack_310 & 1) != 0) {
    FUN_0055293c();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_210) {
    ___stack_chk_fail();
    FUN_0033c494(&pcStack_2c8);
    FUN_0033c494(&pcStack_3e0);
    FUN_0033c494(&uStack_3d8);
    FUN_0033c494(&uStack_398);
    FUN_0035d18c(&pcStack_378);
    FUN_0033c494(&pcStack_310);
    __Unwind_Resume(pcVar17);
    return (char *)((long)&MACH_HEADER.magic + 1);
  }
  return pcVar17;
LAB_003ce700:
  plVar20 = (long *)*plVar20;
  uVar23 = uVar24;
  if (plVar20 == (long *)0x0) {
LAB_003cea9c:
    _freeifaddrs(plStack_308);
    if (pcStack_310 == (char *)0x0) {
      if (uVar24 != 0) {
        *(undefined4 *)param_5 = *(undefined4 *)(uVar24 + 0x9c);
        *extraout_x8_00 = 0;
        goto LAB_003cec38;
      }
      uStack_3f0 = 0;
      uStack_3e8 = 0;
      uStack_3f8 = 0;
      puVar21 = &uStack_3f8;
      FUN_003b646c(2,"No local addresses",0x12,&pcStack_2c8,&uStack_3f8);
      goto LAB_003cec2c;
    }
    *extraout_x8_00 = (long)pcStack_310;
    goto LAB_003cebc8;
  }
  goto LAB_003ce4f0;
}



/* Entry: 003ce340; end: 003ce367;  */

char * FUN_003ce340(long *param_1,char *param_2,undefined8 param_3,char *param_4,char *param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  code *pcVar5;
  undefined1 *puVar6;
  long **pplVar7;
  undefined8 **ppuVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  char **ppcVar11;
  undefined4 uVar12;
  long *extraout_x8;
  int *piVar13;
  char *pcVar14;
  ulong uVar15;
  uint uVar16;
  long *plVar17;
  undefined8 *puVar18;
  int iVar19;
  ulong uVar20;
  ulong uVar21;
  char *pcVar22;
  undefined8 *****pppppuVar23;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  char *pcStack_2d0;
  ulong uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 uStack_2a1;
  char *pcStack_2a0;
  ulong uStack_298;
  byte bStack_289;
  ulong uStack_288;
  long lStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  char *pcStack_268;
  undefined8 ****appppuStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  ulong uStack_230;
  undefined1 auStack_224 [4];
  long lStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  char *pcStack_200;
  long *plStack_1f8;
  undefined8 *puStack_1f0;
  char *pcStack_1e8;
  ulong uStack_1e0;
  char *pcStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  undefined8 *apuStack_188 [16];
  int aiStack_108 [2];
  long lStack_100;
  char *pcStack_80;
  undefined1 auStack_78 [64];
  long lStack_38;
  
  if (*(long *)param_2 != 0) {
    *param_1 = *(long *)param_2;
    *(long *)param_2 = 0x36;
    return param_2;
  }
  func_0x0077474c();
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar14 = "/proc/sys/net/core/somaxconn";
  uVar12 = 0x8e5a2c;
  _fopen();
  if (pcVar14 == (char *)0x0) {
LAB_003ce434:
    uRam0000000000b5ea28 = 0x80;
  }
  else {
    puVar6 = auStack_78;
    uVar12 = 0x40;
    param_4 = pcVar14;
    _fgets();
    if (puVar6 == (undefined1 *)0x0) {
LAB_003ce42c:
      _fclose();
      goto LAB_003ce434;
    }
    puVar6 = auStack_78;
    uVar12 = SUB84(&pcStack_80,0);
    param_4 = (char *)((long)&MACH_HEADER.cpusubtype + 2);
    _strtol();
    if ((((undefined1 *)0x7ffffffe < puVar6 + -1) || (pcStack_80 == (char *)0x0)) ||
       (*pcStack_80 != '\n')) goto LAB_003ce42c;
    _fclose();
    uRam0000000000b5ea28 = (uint)puVar6;
    if (uRam0000000000b5ea28 < 100) {
      pcVar14 = 
      "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_common.cc"
      ;
      param_5 = "Suspiciously small accept queue (%d) will probably lead to connection drops";
      uVar12 = 0x47;
      param_4 = (char *)((long)&MACH_HEADER.magic + 1);
      FUN_00339074();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return pcVar14;
  }
  ___stack_chk_fail();
  lStack_100 = *(long *)PTR____stack_chk_guard_00999f88;
  pcStack_200 = (char *)0x0;
  plStack_1f8 = (long *)0x0;
  if ((int)param_4 == 0) {
    func_0x003a08d4(0,apuStack_188);
    FUN_003c5d08(&pcStack_268,apuStack_188,1,0,&puStack_1f0,&uStack_230);
    if (pcStack_268 == (char *)0x0) {
      if ((int)puStack_1f0 == 1) {
        func_0x003a0878(0,apuStack_188);
      }
      puVar10 = (undefined4 *)(uStack_230 & 0xffffffff);
      _bind(puVar10,apuStack_188,aiStack_108[0]);
      if ((int)puVar10 != 0) {
        ___error();
        FUN_003be008(&pcStack_1e8,&uStack_288,*puVar10,"bind");
        pcVar3 = pcStack_1e8;
        pcVar22 = pcStack_268;
        if (pcStack_1e8 == (char *)0x0) {
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                       ,0xd5,2,"assertion failed: %s");
          _abort();
          goto LAB_003ced94;
        }
        pcStack_1b8 = pcStack_1e8;
        pcStack_1e8 = segment_command_00000020.segname + 0xe;
        if (pcVar3 == pcStack_268) {
          if (((ulong)pcVar3 & 1) != 0) {
            FUN_0055293c();
          }
        }
        else {
          pcStack_268 = pcVar3;
          pcStack_1b8 = segment_command_00000020.segname + 0xe;
          if (((ulong)pcVar22 & 1) != 0) {
            FUN_0055293c(pcVar22);
          }
        }
        if (((ulong)pcStack_1e8 & 1) != 0) {
          FUN_0055293c();
        }
        _close(uStack_230 & 0xffffffff);
        goto LAB_003ceb4c;
      }
      puVar10 = (undefined4 *)(uStack_230 & 0xffffffff);
      _getsockname(puVar10,apuStack_188,aiStack_108);
      if ((int)puVar10 != 0) {
        ___error();
        FUN_003be008(&pcStack_1e8,&uStack_288,*puVar10,"getsockname");
        pcVar3 = pcStack_1e8;
        pcVar22 = pcStack_268;
        if (pcStack_1e8 == (char *)0x0) {
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                       ,0xd5,2,"assertion failed: %s");
          _abort();
          goto LAB_003ced94;
        }
        pcStack_1b8 = pcStack_1e8;
        pcStack_1e8 = segment_command_00000020.segname + 0xe;
        if (pcVar3 == pcStack_268) {
          if (((ulong)pcVar3 & 1) != 0) {
            FUN_0055293c();
          }
        }
        else {
          pcStack_268 = pcVar3;
          pcStack_1b8 = segment_command_00000020.segname + 0xe;
          if (((ulong)pcVar22 & 1) != 0) {
            FUN_0055293c(pcVar22);
          }
        }
        if (((ulong)pcStack_1e8 & 1) != 0) {
          FUN_0055293c();
        }
        _close(uStack_230 & 0xffffffff);
        goto LAB_003ceb4c;
      }
      _close(uStack_230 & 0xffffffff);
      param_4 = (char *)apuStack_188;
      FUN_003a1340();
      if ((int)param_4 < 1) {
        pcStack_1b8 = (char *)0x0;
        uStack_1b0 = 0;
        uStack_1a8 = 0;
        FUN_003b646c(&pcStack_2a0,2,"Bad port",8,&uStack_288,&pcStack_1b8);
        pcStack_1e8 = (char *)&pcStack_1b8;
        FUN_0033d548(&pcStack_1e8);
      }
      else {
        pcStack_2a0 = (char *)0x0;
      }
      if (((ulong)pcStack_268 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
LAB_003ceb4c:
      param_4 = (char *)0x0;
      pcStack_2a0 = pcStack_268;
    }
    pcVar22 = pcStack_200;
    if (pcStack_2a0 != pcStack_200) {
      pcStack_200 = pcStack_2a0;
      pcStack_2a0 = segment_command_00000020.segname + 0xe;
      if (((ulong)pcVar22 & 1) != 0) {
        FUN_0055293c();
      }
    }
    apuStack_188[0] = (undefined8 *)0x0;
    if (pcStack_200 == (char *)0x0) {
      uVar16 = 0;
    }
    else {
      ppcVar11 = &pcStack_200;
      FUN_00552b00(ppcVar11,apuStack_188);
      uVar16 = (uint)ppcVar11 ^ 1;
      if (((ulong)apuStack_188[0] & 1) != 0) {
        FUN_0055293c();
      }
    }
    if (((ulong)pcStack_2a0 & 1) != 0) {
      FUN_0055293c();
    }
    if (uVar16 != 0) {
      *extraout_x8 = (long)pcStack_200;
LAB_003cebc8:
      pcStack_200 = segment_command_00000020.segname + 0xe;
      goto LAB_003cec38;
    }
    if ((int)param_4 < 1) {
      uStack_210 = 0;
      uStack_208 = 0;
      uStack_218 = 0;
      puVar18 = &uStack_218;
      FUN_003b646c(extraout_x8,2,"Bad get_unused_port()",0x15,&pcStack_1b8,&uStack_218);
LAB_003cec2c:
      apuStack_188[0] = puVar18;
      FUN_0033d548(apuStack_188);
      goto LAB_003cec38;
    }
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_ifaddrs.cc"
                 ,0x6f,0,"Picked unused port %d");
  }
  pplVar7 = &plStack_1f8;
  _getifaddrs();
  if (((int)pplVar7 == 0) && (plStack_1f8 != (long *)0x0)) {
    iVar19 = 0;
    plVar17 = plStack_1f8;
    uVar20 = 0;
LAB_003ce4f0:
    uStack_230 = 0;
    pcVar22 = "<unknown>";
    if ((char *)plVar17[1] != (char *)0x0) {
      pcVar22 = (char *)plVar17[1];
    }
    uVar21 = uVar20;
    if (plVar17[3] == 0) goto LAB_003ce700;
    cVar1 = *(char *)(plVar17[3] + 1);
    if (cVar1 == '\x02') {
      aiStack_108[0] = 0x10;
    }
    else {
      if (cVar1 != '\x1e') goto LAB_003ce700;
      aiStack_108[0] = 0x1c;
    }
    _memcpy(apuStack_188);
    ppuVar8 = apuStack_188;
    FUN_003a13ac(ppuVar8,param_4);
    if ((int)ppuVar8 == 0) {
      uStack_240 = 0;
      uStack_238 = 0;
      lStack_248 = 0;
      FUN_003b646c(&pcStack_1e8,2,"Failed to set port",0x12,&pcStack_268,&lStack_248);
      pcVar14 = pcStack_200;
      if (pcStack_1e8 == pcStack_200) {
LAB_003ce838:
        if (((ulong)pcVar14 & 1) != 0) {
          FUN_0055293c();
        }
      }
      else {
        pcStack_200 = pcStack_1e8;
        pcStack_1e8 = segment_command_00000020.segname + 0xe;
        if (((ulong)pcVar14 & 1) != 0) {
          FUN_0055293c();
          pcVar14 = pcStack_1e8;
          goto LAB_003ce838;
        }
      }
      pcStack_1b8 = (char *)&lStack_248;
      FUN_0033d548(&pcStack_1b8);
    }
    else {
      FUN_003a0930(&pcStack_268,apuStack_188,0);
      if (pcStack_268 != (char *)0x0) {
        FUN_00552ec8(&pcStack_1b8,&pcStack_268,1);
        uVar20 = uStack_1b0;
        pcVar14 = pcStack_1b8;
        if (-1 < (long)uStack_1a8) {
          uVar20 = uStack_1a8 >> 0x38;
          pcVar14 = (char *)&pcStack_1b8;
        }
        uStack_278 = 0;
        uStack_270 = 0;
        lStack_280 = 0;
        FUN_003b646c(extraout_x8,2,pcVar14,uVar20,&pcStack_2a0,&lStack_280);
        pcStack_1e8 = (char *)&lStack_280;
        FUN_0033d548(&pcStack_1e8);
        if ((long)uStack_1a8 < 0) {
          __ZdlPv(pcStack_1b8);
        }
        FUN_0035d18c(&pcStack_268);
        goto LAB_003cec38;
      }
      pppppuVar23 = (undefined8 *****)appppuStack_260[0];
      if (-1 < cStack_249) {
        pppppuVar23 = appppuStack_260;
      }
      uVar15 = (ulong)*(uint *)(plVar17 + 2);
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_ifaddrs.cc"
                   ,0x8c,0,"Adding local addr from interface %s flags 0x%x to server: %s");
      func_0x00339d8c(pcVar14 + 0x18);
      iVar4 = aiStack_108[0];
      for (puVar18 = *(undefined8 **)(pcVar14 + 0x70); puVar18 != (undefined8 *)0x0;
          puVar18 = (undefined8 *)puVar18[0x1d]) {
        if (*(int *)(puVar18 + 0x13) == iVar4) {
          puVar9 = puVar18 + 3;
          _memcmp(puVar9,apuStack_188,iVar4);
          if ((int)puVar9 == 0) break;
        }
      }
      func_0x00339da8(pcVar14 + 0x18);
      if (puVar18 != (undefined8 *)0x0) {
        if (pcStack_268 == (char *)0x0) {
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_ifaddrs.cc"
                       ,0x92,0,"Skipping duplicate addr %s on interface %s");
LAB_003ce6f8:
          FUN_0035d18c(&pcStack_268);
          goto LAB_003ce700;
        }
        FUN_0055169c(&pcStack_268);
        goto LAB_003ced94;
      }
      FUN_003cd970(&pcStack_1b8,pcVar14,apuStack_188,uVar12,iVar19,auStack_224,&uStack_230,param_8,
                   param_9,pcVar22,uVar15,pppppuVar23);
      pcVar22 = pcStack_200;
      if (pcStack_1b8 != pcStack_200) {
        pcStack_200 = pcStack_1b8;
        pcStack_1b8 = segment_command_00000020.segname + 0xe;
        if (((ulong)pcVar22 & 1) != 0) {
          FUN_0055293c();
        }
      }
      pcStack_1e8 = (char *)0x0;
      if (pcStack_200 == (char *)0x0) {
        uVar16 = 0;
      }
      else {
        ppcVar11 = &pcStack_200;
        FUN_00552b00(ppcVar11,&pcStack_1e8);
        uVar16 = (uint)ppcVar11 ^ 1;
        if (((ulong)pcStack_1e8 & 1) != 0) {
          FUN_0055293c();
        }
      }
      if (((ulong)pcStack_1b8 & 1) != 0) {
        FUN_0055293c();
      }
      if (uVar16 == 0) {
        if ((int)param_4 == *(int *)(uStack_230 + 0x9c)) {
          iVar19 = iVar19 + 1;
          uVar21 = uStack_230;
          if (uVar20 != 0) {
            *(undefined4 *)(uStack_230 + 0xf8) = 1;
            *(ulong *)(uVar20 + 0xf0) = uStack_230;
          }
          goto LAB_003ce6f8;
        }
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_ifaddrs.cc"
                     ,0x9d,2,"assertion failed: %s");
        _abort();
        goto LAB_003ced94;
      }
      pcStack_1b8 = "Failed to add listener: ";
      uStack_1b0 = 0x18;
      pcVar14 = (char *)&pcStack_268;
      FUN_00375c3c();
      uStack_1e0 = *(ulong *)(pcVar14 + 8);
      pcStack_1e8 = *(char **)pcVar14;
      if (-1 < pcVar14[0x17]) {
        uStack_1e0 = (ulong)(byte)pcVar14[0x17];
        pcStack_1e8 = pcVar14;
      }
      FUN_00575d30(&pcStack_2a0,&pcStack_1b8,&pcStack_1e8);
      pcVar14 = pcStack_2a0;
      if (-1 < (char)bStack_289) {
        uStack_298 = (ulong)bStack_289;
        pcVar14 = (char *)&pcStack_2a0;
      }
      uStack_2b8 = 0;
      uStack_2b0 = 0;
      uStack_2c0 = 0;
      FUN_003b646c(&uStack_288,2,pcVar14,uStack_298,&uStack_2a1,&uStack_2c0);
      puStack_1f0 = &uStack_2c0;
      FUN_0033d548(&puStack_1f0);
      if ((char)bStack_289 < '\0') {
        __ZdlPv(pcStack_2a0);
      }
      uStack_2c8 = uStack_288;
      if ((uStack_288 & 1) != 0) {
        piVar13 = (int *)(uStack_288 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar2) {
            *piVar13 = *piVar13 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      pcStack_2d0 = pcStack_200;
      if (((ulong)pcStack_200 & 1) != 0) {
        pcVar14 = pcStack_200 + -1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(pcVar14,0x10);
          if (bVar2) {
            *(int *)pcVar14 = *(int *)pcVar14 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_003be56c(&pcStack_1b8,&uStack_2c8,&pcStack_2d0);
      pcVar14 = pcStack_200;
      if (pcStack_1b8 == pcStack_200) {
LAB_003cea68:
        if (((ulong)pcVar14 & 1) != 0) {
          FUN_0055293c();
        }
      }
      else {
        pcStack_200 = pcStack_1b8;
        pcStack_1b8 = segment_command_00000020.segname + 0xe;
        if (((ulong)pcVar14 & 1) != 0) {
          FUN_0055293c();
          pcVar14 = pcStack_1b8;
          goto LAB_003cea68;
        }
      }
      if (((ulong)pcStack_2d0 & 1) != 0) {
        FUN_0055293c();
      }
      if ((uStack_2c8 & 1) != 0) {
        FUN_0055293c();
      }
      if ((uStack_288 & 1) != 0) {
        FUN_0055293c();
      }
      FUN_0035d18c(&pcStack_268);
    }
    goto LAB_003cea9c;
  }
  ___error();
  FUN_003be008(&lStack_220,apuStack_188,*(undefined4 *)pplVar7,"getifaddrs");
  if (lStack_220 == 0) {
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                 ,0xd5,2,"assertion failed: %s");
    _abort();
LAB_003ced94:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x3ced98);
    (*pcVar5)();
  }
  *extraout_x8 = lStack_220;
  lStack_220 = 0x36;
LAB_003cec38:
  pcVar14 = pcStack_200;
  if (((ulong)pcStack_200 & 1) != 0) {
    FUN_0055293c();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_100) {
    ___stack_chk_fail();
    FUN_0033c494(&pcStack_1b8);
    FUN_0033c494(&pcStack_2d0);
    FUN_0033c494(&uStack_2c8);
    FUN_0033c494(&uStack_288);
    FUN_0035d18c(&pcStack_268);
    FUN_0033c494(&pcStack_200);
    __Unwind_Resume(pcVar14);
    return (char *)((long)&MACH_HEADER.magic + 1);
  }
  return pcVar14;
LAB_003ce700:
  plVar17 = (long *)*plVar17;
  uVar20 = uVar21;
  if (plVar17 == (long *)0x0) {
LAB_003cea9c:
    _freeifaddrs(plStack_1f8);
    if (pcStack_200 == (char *)0x0) {
      if (uVar21 != 0) {
        *(undefined4 *)param_5 = *(undefined4 *)(uVar21 + 0x9c);
        *extraout_x8 = 0;
        goto LAB_003cec38;
      }
      uStack_2e0 = 0;
      uStack_2d8 = 0;
      uStack_2e8 = 0;
      puVar18 = &uStack_2e8;
      FUN_003b646c(2,"No local addresses",0x12,&pcStack_1b8,&uStack_2e8);
      goto LAB_003cec2c;
    }
    *extraout_x8 = (long)pcStack_200;
    goto LAB_003cebc8;
  }
  goto LAB_003ce4f0;
}



/* Entry: 003ce368; end: 003ce46b;  */

char * FUN_003ce368(undefined8 param_1,undefined8 param_2,char *param_3,char *param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  code *pcVar5;
  undefined1 *puVar6;
  long **pplVar7;
  undefined8 **ppuVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  char **ppcVar11;
  undefined4 uVar12;
  long *extraout_x8;
  int *piVar13;
  char *pcVar14;
  ulong uVar15;
  uint uVar16;
  long *plVar17;
  undefined8 *puVar18;
  int iVar19;
  ulong uVar20;
  ulong uVar21;
  char *pcVar22;
  undefined8 *****pppppuVar23;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  char *pcStack_2c0;
  ulong uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined1 uStack_291;
  char *pcStack_290;
  ulong uStack_288;
  byte bStack_279;
  ulong uStack_278;
  long lStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  char *pcStack_258;
  undefined8 ****appppuStack_250 [2];
  char cStack_239;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  ulong uStack_220;
  undefined1 auStack_214 [4];
  long lStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  char *pcStack_1f0;
  long *plStack_1e8;
  undefined8 *puStack_1e0;
  char *pcStack_1d8;
  ulong uStack_1d0;
  char *pcStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  undefined8 *apuStack_178 [16];
  int aiStack_f8 [2];
  long lStack_f0;
  char *pcStack_70;
  undefined1 auStack_68 [64];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar14 = "/proc/sys/net/core/somaxconn";
  uVar12 = 0x8e5a2c;
  _fopen();
  if (pcVar14 == (char *)0x0) {
LAB_003ce434:
    uRam0000000000b5ea28 = 0x80;
  }
  else {
    puVar6 = auStack_68;
    uVar12 = 0x40;
    param_3 = pcVar14;
    _fgets();
    if (puVar6 == (undefined1 *)0x0) {
LAB_003ce42c:
      _fclose();
      goto LAB_003ce434;
    }
    puVar6 = auStack_68;
    uVar12 = SUB84(&pcStack_70,0);
    param_3 = (char *)((long)&MACH_HEADER.cpusubtype + 2);
    _strtol();
    if ((((undefined1 *)0x7ffffffe < puVar6 + -1) || (pcStack_70 == (char *)0x0)) ||
       (*pcStack_70 != '\n')) goto LAB_003ce42c;
    _fclose();
    uRam0000000000b5ea28 = (uint)puVar6;
    if (uRam0000000000b5ea28 < 100) {
      pcVar14 = 
      "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_common.cc"
      ;
      param_4 = "Suspiciously small accept queue (%d) will probably lead to connection drops";
      uVar12 = 0x47;
      param_3 = (char *)((long)&MACH_HEADER.magic + 1);
      FUN_00339074();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return pcVar14;
  }
  ___stack_chk_fail();
  lStack_f0 = *(long *)PTR____stack_chk_guard_00999f88;
  pcStack_1f0 = (char *)0x0;
  plStack_1e8 = (long *)0x0;
  if ((int)param_3 == 0) {
    func_0x003a08d4(0,apuStack_178);
    FUN_003c5d08(&pcStack_258,apuStack_178,1,0,&puStack_1e0,&uStack_220);
    if (pcStack_258 == (char *)0x0) {
      if ((int)puStack_1e0 == 1) {
        func_0x003a0878(0,apuStack_178);
      }
      puVar10 = (undefined4 *)(uStack_220 & 0xffffffff);
      _bind(puVar10,apuStack_178,aiStack_f8[0]);
      if ((int)puVar10 != 0) {
        ___error();
        FUN_003be008(&pcStack_1d8,&uStack_278,*puVar10,"bind");
        pcVar3 = pcStack_1d8;
        pcVar22 = pcStack_258;
        if (pcStack_1d8 == (char *)0x0) {
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                       ,0xd5,2,"assertion failed: %s");
          _abort();
          goto LAB_003ced94;
        }
        pcStack_1a8 = pcStack_1d8;
        pcStack_1d8 = segment_command_00000020.segname + 0xe;
        if (pcVar3 == pcStack_258) {
          if (((ulong)pcVar3 & 1) != 0) {
            FUN_0055293c();
          }
        }
        else {
          pcStack_258 = pcVar3;
          pcStack_1a8 = segment_command_00000020.segname + 0xe;
          if (((ulong)pcVar22 & 1) != 0) {
            FUN_0055293c(pcVar22);
          }
        }
        if (((ulong)pcStack_1d8 & 1) != 0) {
          FUN_0055293c();
        }
        _close(uStack_220 & 0xffffffff);
        goto LAB_003ceb4c;
      }
      puVar10 = (undefined4 *)(uStack_220 & 0xffffffff);
      _getsockname(puVar10,apuStack_178,aiStack_f8);
      if ((int)puVar10 != 0) {
        ___error();
        FUN_003be008(&pcStack_1d8,&uStack_278,*puVar10,"getsockname");
        pcVar3 = pcStack_1d8;
        pcVar22 = pcStack_258;
        if (pcStack_1d8 == (char *)0x0) {
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                       ,0xd5,2,"assertion failed: %s");
          _abort();
          goto LAB_003ced94;
        }
        pcStack_1a8 = pcStack_1d8;
        pcStack_1d8 = segment_command_00000020.segname + 0xe;
        if (pcVar3 == pcStack_258) {
          if (((ulong)pcVar3 & 1) != 0) {
            FUN_0055293c();
          }
        }
        else {
          pcStack_258 = pcVar3;
          pcStack_1a8 = segment_command_00000020.segname + 0xe;
          if (((ulong)pcVar22 & 1) != 0) {
            FUN_0055293c(pcVar22);
          }
        }
        if (((ulong)pcStack_1d8 & 1) != 0) {
          FUN_0055293c();
        }
        _close(uStack_220 & 0xffffffff);
        goto LAB_003ceb4c;
      }
      _close(uStack_220 & 0xffffffff);
      param_3 = (char *)apuStack_178;
      FUN_003a1340();
      if ((int)param_3 < 1) {
        pcStack_1a8 = (char *)0x0;
        uStack_1a0 = 0;
        uStack_198 = 0;
        FUN_003b646c(&pcStack_290,2,"Bad port",8,&uStack_278,&pcStack_1a8);
        pcStack_1d8 = (char *)&pcStack_1a8;
        FUN_0033d548(&pcStack_1d8);
      }
      else {
        pcStack_290 = (char *)0x0;
      }
      if (((ulong)pcStack_258 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
LAB_003ceb4c:
      param_3 = (char *)0x0;
      pcStack_290 = pcStack_258;
    }
    pcVar22 = pcStack_1f0;
    if (pcStack_290 != pcStack_1f0) {
      pcStack_1f0 = pcStack_290;
      pcStack_290 = segment_command_00000020.segname + 0xe;
      if (((ulong)pcVar22 & 1) != 0) {
        FUN_0055293c();
      }
    }
    apuStack_178[0] = (undefined8 *)0x0;
    if (pcStack_1f0 == (char *)0x0) {
      uVar16 = 0;
    }
    else {
      ppcVar11 = &pcStack_1f0;
      FUN_00552b00(ppcVar11,apuStack_178);
      uVar16 = (uint)ppcVar11 ^ 1;
      if (((ulong)apuStack_178[0] & 1) != 0) {
        FUN_0055293c();
      }
    }
    if (((ulong)pcStack_290 & 1) != 0) {
      FUN_0055293c();
    }
    if (uVar16 != 0) {
      *extraout_x8 = (long)pcStack_1f0;
LAB_003cebc8:
      pcStack_1f0 = segment_command_00000020.segname + 0xe;
      goto LAB_003cec38;
    }
    if ((int)param_3 < 1) {
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_208 = 0;
      puVar18 = &uStack_208;
      FUN_003b646c(extraout_x8,2,"Bad get_unused_port()",0x15,&pcStack_1a8,&uStack_208);
LAB_003cec2c:
      apuStack_178[0] = puVar18;
      FUN_0033d548(apuStack_178);
      goto LAB_003cec38;
    }
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_ifaddrs.cc"
                 ,0x6f,0,"Picked unused port %d");
  }
  pplVar7 = &plStack_1e8;
  _getifaddrs();
  if (((int)pplVar7 == 0) && (plStack_1e8 != (long *)0x0)) {
    iVar19 = 0;
    plVar17 = plStack_1e8;
    uVar20 = 0;
LAB_003ce4f0:
    uStack_220 = 0;
    pcVar22 = "<unknown>";
    if ((char *)plVar17[1] != (char *)0x0) {
      pcVar22 = (char *)plVar17[1];
    }
    uVar21 = uVar20;
    if (plVar17[3] == 0) goto LAB_003ce700;
    cVar1 = *(char *)(plVar17[3] + 1);
    if (cVar1 == '\x02') {
      aiStack_f8[0] = 0x10;
    }
    else {
      if (cVar1 != '\x1e') goto LAB_003ce700;
      aiStack_f8[0] = 0x1c;
    }
    _memcpy(apuStack_178);
    ppuVar8 = apuStack_178;
    FUN_003a13ac(ppuVar8,param_3);
    if ((int)ppuVar8 == 0) {
      uStack_230 = 0;
      uStack_228 = 0;
      lStack_238 = 0;
      FUN_003b646c(&pcStack_1d8,2,"Failed to set port",0x12,&pcStack_258,&lStack_238);
      pcVar14 = pcStack_1f0;
      if (pcStack_1d8 == pcStack_1f0) {
LAB_003ce838:
        if (((ulong)pcVar14 & 1) != 0) {
          FUN_0055293c();
        }
      }
      else {
        pcStack_1f0 = pcStack_1d8;
        pcStack_1d8 = segment_command_00000020.segname + 0xe;
        if (((ulong)pcVar14 & 1) != 0) {
          FUN_0055293c();
          pcVar14 = pcStack_1d8;
          goto LAB_003ce838;
        }
      }
      pcStack_1a8 = (char *)&lStack_238;
      FUN_0033d548(&pcStack_1a8);
    }
    else {
      FUN_003a0930(&pcStack_258,apuStack_178,0);
      if (pcStack_258 != (char *)0x0) {
        FUN_00552ec8(&pcStack_1a8,&pcStack_258,1);
        uVar20 = uStack_1a0;
        pcVar14 = pcStack_1a8;
        if (-1 < (long)uStack_198) {
          uVar20 = uStack_198 >> 0x38;
          pcVar14 = (char *)&pcStack_1a8;
        }
        uStack_268 = 0;
        uStack_260 = 0;
        lStack_270 = 0;
        FUN_003b646c(extraout_x8,2,pcVar14,uVar20,&pcStack_290,&lStack_270);
        pcStack_1d8 = (char *)&lStack_270;
        FUN_0033d548(&pcStack_1d8);
        if ((long)uStack_198 < 0) {
          __ZdlPv(pcStack_1a8);
        }
        FUN_0035d18c(&pcStack_258);
        goto LAB_003cec38;
      }
      pppppuVar23 = (undefined8 *****)appppuStack_250[0];
      if (-1 < cStack_239) {
        pppppuVar23 = appppuStack_250;
      }
      uVar15 = (ulong)*(uint *)(plVar17 + 2);
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_ifaddrs.cc"
                   ,0x8c,0,"Adding local addr from interface %s flags 0x%x to server: %s");
      func_0x00339d8c(pcVar14 + 0x18);
      iVar4 = aiStack_f8[0];
      for (puVar18 = *(undefined8 **)(pcVar14 + 0x70); puVar18 != (undefined8 *)0x0;
          puVar18 = (undefined8 *)puVar18[0x1d]) {
        if (*(int *)(puVar18 + 0x13) == iVar4) {
          puVar9 = puVar18 + 3;
          _memcmp(puVar9,apuStack_178,iVar4);
          if ((int)puVar9 == 0) break;
        }
      }
      func_0x00339da8(pcVar14 + 0x18);
      if (puVar18 != (undefined8 *)0x0) {
        if (pcStack_258 == (char *)0x0) {
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_ifaddrs.cc"
                       ,0x92,0,"Skipping duplicate addr %s on interface %s");
LAB_003ce6f8:
          FUN_0035d18c(&pcStack_258);
          goto LAB_003ce700;
        }
        FUN_0055169c(&pcStack_258);
        goto LAB_003ced94;
      }
      FUN_003cd970(&pcStack_1a8,pcVar14,apuStack_178,uVar12,iVar19,auStack_214,&uStack_220,param_7,
                   param_8,pcVar22,uVar15,pppppuVar23);
      pcVar22 = pcStack_1f0;
      if (pcStack_1a8 != pcStack_1f0) {
        pcStack_1f0 = pcStack_1a8;
        pcStack_1a8 = segment_command_00000020.segname + 0xe;
        if (((ulong)pcVar22 & 1) != 0) {
          FUN_0055293c();
        }
      }
      pcStack_1d8 = (char *)0x0;
      if (pcStack_1f0 == (char *)0x0) {
        uVar16 = 0;
      }
      else {
        ppcVar11 = &pcStack_1f0;
        FUN_00552b00(ppcVar11,&pcStack_1d8);
        uVar16 = (uint)ppcVar11 ^ 1;
        if (((ulong)pcStack_1d8 & 1) != 0) {
          FUN_0055293c();
        }
      }
      if (((ulong)pcStack_1a8 & 1) != 0) {
        FUN_0055293c();
      }
      if (uVar16 == 0) {
        if ((int)param_3 == *(int *)(uStack_220 + 0x9c)) {
          iVar19 = iVar19 + 1;
          uVar21 = uStack_220;
          if (uVar20 != 0) {
            *(undefined4 *)(uStack_220 + 0xf8) = 1;
            *(ulong *)(uVar20 + 0xf0) = uStack_220;
          }
          goto LAB_003ce6f8;
        }
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_ifaddrs.cc"
                     ,0x9d,2,"assertion failed: %s");
        _abort();
        goto LAB_003ced94;
      }
      pcStack_1a8 = "Failed to add listener: ";
      uStack_1a0 = 0x18;
      pcVar14 = (char *)&pcStack_258;
      FUN_00375c3c();
      uStack_1d0 = *(ulong *)(pcVar14 + 8);
      pcStack_1d8 = *(char **)pcVar14;
      if (-1 < pcVar14[0x17]) {
        uStack_1d0 = (ulong)(byte)pcVar14[0x17];
        pcStack_1d8 = pcVar14;
      }
      FUN_00575d30(&pcStack_290,&pcStack_1a8,&pcStack_1d8);
      pcVar14 = pcStack_290;
      if (-1 < (char)bStack_279) {
        uStack_288 = (ulong)bStack_279;
        pcVar14 = (char *)&pcStack_290;
      }
      uStack_2a8 = 0;
      uStack_2a0 = 0;
      uStack_2b0 = 0;
      FUN_003b646c(&uStack_278,2,pcVar14,uStack_288,&uStack_291,&uStack_2b0);
      puStack_1e0 = &uStack_2b0;
      FUN_0033d548(&puStack_1e0);
      if ((char)bStack_279 < '\0') {
        __ZdlPv(pcStack_290);
      }
      uStack_2b8 = uStack_278;
      if ((uStack_278 & 1) != 0) {
        piVar13 = (int *)(uStack_278 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar2) {
            *piVar13 = *piVar13 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      pcStack_2c0 = pcStack_1f0;
      if (((ulong)pcStack_1f0 & 1) != 0) {
        pcVar14 = pcStack_1f0 + -1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(pcVar14,0x10);
          if (bVar2) {
            *(int *)pcVar14 = *(int *)pcVar14 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_003be56c(&pcStack_1a8,&uStack_2b8,&pcStack_2c0);
      pcVar14 = pcStack_1f0;
      if (pcStack_1a8 == pcStack_1f0) {
LAB_003cea68:
        if (((ulong)pcVar14 & 1) != 0) {
          FUN_0055293c();
        }
      }
      else {
        pcStack_1f0 = pcStack_1a8;
        pcStack_1a8 = segment_command_00000020.segname + 0xe;
        if (((ulong)pcVar14 & 1) != 0) {
          FUN_0055293c();
          pcVar14 = pcStack_1a8;
          goto LAB_003cea68;
        }
      }
      if (((ulong)pcStack_2c0 & 1) != 0) {
        FUN_0055293c();
      }
      if ((uStack_2b8 & 1) != 0) {
        FUN_0055293c();
      }
      if ((uStack_278 & 1) != 0) {
        FUN_0055293c();
      }
      FUN_0035d18c(&pcStack_258);
    }
    goto LAB_003cea9c;
  }
  ___error();
  FUN_003be008(&lStack_210,apuStack_178,*(undefined4 *)pplVar7,"getifaddrs");
  if (lStack_210 == 0) {
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                 ,0xd5,2,"assertion failed: %s");
    _abort();
LAB_003ced94:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x3ced98);
    (*pcVar5)();
  }
  *extraout_x8 = lStack_210;
  lStack_210 = 0x36;
LAB_003cec38:
  pcVar14 = pcStack_1f0;
  if (((ulong)pcStack_1f0 & 1) != 0) {
    FUN_0055293c();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_f0) {
    ___stack_chk_fail();
    FUN_0033c494(&pcStack_1a8);
    FUN_0033c494(&pcStack_2c0);
    FUN_0033c494(&uStack_2b8);
    FUN_0033c494(&uStack_278);
    FUN_0035d18c(&pcStack_258);
    FUN_0033c494(&pcStack_1f0);
    __Unwind_Resume(pcVar14);
    return (char *)((long)&MACH_HEADER.magic + 1);
  }
  return pcVar14;
LAB_003ce700:
  plVar17 = (long *)*plVar17;
  uVar20 = uVar21;
  if (plVar17 == (long *)0x0) {
LAB_003cea9c:
    _freeifaddrs(plStack_1e8);
    if (pcStack_1f0 == (char *)0x0) {
      if (uVar21 != 0) {
        *(undefined4 *)param_4 = *(undefined4 *)(uVar21 + 0x9c);
        *extraout_x8 = 0;
        goto LAB_003cec38;
      }
      uStack_2d0 = 0;
      uStack_2c8 = 0;
      uStack_2d8 = 0;
      puVar18 = &uStack_2d8;
      FUN_003b646c(2,"No local addresses",0x12,&pcStack_1a8,&uStack_2d8);
      goto LAB_003cec2c;
    }
    *extraout_x8 = (long)pcStack_1f0;
    goto LAB_003cebc8;
  }
  goto LAB_003ce4f0;
}



/* Entry: 003ce46c; end: 003cef6f;  */

char * FUN_003ce46c(long *param_1,long param_2,undefined4 param_3,undefined8 **param_4,
                   undefined4 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  code *pcVar5;
  long **pplVar6;
  undefined8 **ppuVar7;
  long lVar8;
  undefined4 *puVar9;
  char **ppcVar10;
  int *piVar11;
  char *pcVar12;
  ulong uVar13;
  uint uVar14;
  undefined8 *puVar15;
  long *plVar16;
  long lVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 *****pppppuVar21;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  char *pcStack_240;
  ulong uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 uStack_211;
  char *pcStack_210;
  ulong uStack_208;
  byte bStack_1f9;
  ulong uStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  char *pcStack_1d8;
  undefined8 ****appppuStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  ulong uStack_1a0;
  undefined1 auStack_194 [4];
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  char *pcStack_170;
  long *plStack_168;
  undefined8 *puStack_160;
  char *pcStack_158;
  ulong uStack_150;
  char *pcStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 *apuStack_f8 [16];
  int aiStack_78 [2];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  pcStack_170 = (char *)0x0;
  plStack_168 = (long *)0x0;
  if ((int)param_4 == 0) {
    func_0x003a08d4(0,apuStack_f8);
    FUN_003c5d08(&pcStack_1d8,apuStack_f8,1,0,&puStack_160,&uStack_1a0);
    if (pcStack_1d8 == (char *)0x0) {
      if ((int)puStack_160 == 1) {
        func_0x003a0878(0,apuStack_f8);
      }
      puVar9 = (undefined4 *)(uStack_1a0 & 0xffffffff);
      _bind(puVar9,apuStack_f8,aiStack_78[0]);
      if ((int)puVar9 != 0) {
        ___error();
        FUN_003be008(&pcStack_158,&uStack_1f8,*puVar9,"bind");
        pcVar3 = pcStack_158;
        pcVar12 = pcStack_1d8;
        if (pcStack_158 == (char *)0x0) {
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                       ,0xd5,2,"assertion failed: %s");
          _abort();
          goto LAB_003ced94;
        }
        pcStack_128 = pcStack_158;
        pcStack_158 = segment_command_00000020.segname + 0xe;
        if (pcVar3 == pcStack_1d8) {
          if (((ulong)pcVar3 & 1) != 0) {
            FUN_0055293c();
          }
        }
        else {
          pcStack_1d8 = pcVar3;
          pcStack_128 = segment_command_00000020.segname + 0xe;
          if (((ulong)pcVar12 & 1) != 0) {
            FUN_0055293c(pcVar12);
          }
        }
        if (((ulong)pcStack_158 & 1) != 0) {
          FUN_0055293c();
        }
        _close(uStack_1a0 & 0xffffffff);
        goto LAB_003ceb4c;
      }
      puVar9 = (undefined4 *)(uStack_1a0 & 0xffffffff);
      _getsockname(puVar9,apuStack_f8,aiStack_78);
      if ((int)puVar9 != 0) {
        ___error();
        FUN_003be008(&pcStack_158,&uStack_1f8,*puVar9,"getsockname");
        pcVar3 = pcStack_158;
        pcVar12 = pcStack_1d8;
        if (pcStack_158 == (char *)0x0) {
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                       ,0xd5,2,"assertion failed: %s");
          _abort();
          goto LAB_003ced94;
        }
        pcStack_128 = pcStack_158;
        pcStack_158 = segment_command_00000020.segname + 0xe;
        if (pcVar3 == pcStack_1d8) {
          if (((ulong)pcVar3 & 1) != 0) {
            FUN_0055293c();
          }
        }
        else {
          pcStack_1d8 = pcVar3;
          pcStack_128 = segment_command_00000020.segname + 0xe;
          if (((ulong)pcVar12 & 1) != 0) {
            FUN_0055293c(pcVar12);
          }
        }
        if (((ulong)pcStack_158 & 1) != 0) {
          FUN_0055293c();
        }
        _close(uStack_1a0 & 0xffffffff);
        goto LAB_003ceb4c;
      }
      _close(uStack_1a0 & 0xffffffff);
      param_4 = apuStack_f8;
      FUN_003a1340();
      if ((int)param_4 < 1) {
        pcStack_128 = (char *)0x0;
        uStack_120 = 0;
        uStack_118 = 0;
        FUN_003b646c(&pcStack_210,2,"Bad port",8,&uStack_1f8,&pcStack_128);
        pcStack_158 = (char *)&pcStack_128;
        FUN_0033d548(&pcStack_158);
      }
      else {
        pcStack_210 = (char *)0x0;
      }
      if (((ulong)pcStack_1d8 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
LAB_003ceb4c:
      param_4 = (undefined8 **)0x0;
      pcStack_210 = pcStack_1d8;
    }
    pcVar12 = pcStack_170;
    if (pcStack_210 != pcStack_170) {
      pcStack_170 = pcStack_210;
      pcStack_210 = segment_command_00000020.segname + 0xe;
      if (((ulong)pcVar12 & 1) != 0) {
        FUN_0055293c();
      }
    }
    apuStack_f8[0] = (undefined8 *)0x0;
    if (pcStack_170 == (char *)0x0) {
      uVar14 = 0;
    }
    else {
      ppcVar10 = &pcStack_170;
      FUN_00552b00(ppcVar10,apuStack_f8);
      uVar14 = (uint)ppcVar10 ^ 1;
      if (((ulong)apuStack_f8[0] & 1) != 0) {
        FUN_0055293c();
      }
    }
    if (((ulong)pcStack_210 & 1) != 0) {
      FUN_0055293c();
    }
    if (uVar14 != 0) {
      *param_1 = (long)pcStack_170;
LAB_003cebc8:
      pcStack_170 = segment_command_00000020.segname + 0xe;
      goto LAB_003cec38;
    }
    if ((int)param_4 < 1) {
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_188 = 0;
      puVar15 = &uStack_188;
      FUN_003b646c(param_1,2,"Bad get_unused_port()",0x15,&pcStack_128,&uStack_188);
LAB_003cec2c:
      apuStack_f8[0] = puVar15;
      FUN_0033d548(apuStack_f8);
      goto LAB_003cec38;
    }
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_ifaddrs.cc"
                 ,0x6f,0,"Picked unused port %d");
  }
  pplVar6 = &plStack_168;
  _getifaddrs();
  if (((int)pplVar6 == 0) && (plStack_168 != (long *)0x0)) {
    iVar18 = 0;
    plVar16 = plStack_168;
    uVar19 = 0;
LAB_003ce4f0:
    uStack_1a0 = 0;
    pcVar12 = "<unknown>";
    if ((char *)plVar16[1] != (char *)0x0) {
      pcVar12 = (char *)plVar16[1];
    }
    uVar20 = uVar19;
    if (plVar16[3] == 0) goto LAB_003ce700;
    cVar1 = *(char *)(plVar16[3] + 1);
    if (cVar1 == '\x02') {
      aiStack_78[0] = 0x10;
    }
    else {
      if (cVar1 != '\x1e') goto LAB_003ce700;
      aiStack_78[0] = 0x1c;
    }
    _memcpy(apuStack_f8);
    ppuVar7 = apuStack_f8;
    FUN_003a13ac(ppuVar7,param_4);
    if ((int)ppuVar7 == 0) {
      uStack_1b0 = 0;
      uStack_1a8 = 0;
      lStack_1b8 = 0;
      FUN_003b646c(&pcStack_158,2,"Failed to set port",0x12,&pcStack_1d8,&lStack_1b8);
      pcVar12 = pcStack_170;
      if (pcStack_158 == pcStack_170) {
LAB_003ce838:
        if (((ulong)pcVar12 & 1) != 0) {
          FUN_0055293c();
        }
      }
      else {
        pcStack_170 = pcStack_158;
        pcStack_158 = segment_command_00000020.segname + 0xe;
        if (((ulong)pcVar12 & 1) != 0) {
          FUN_0055293c();
          pcVar12 = pcStack_158;
          goto LAB_003ce838;
        }
      }
      pcStack_128 = (char *)&lStack_1b8;
      FUN_0033d548(&pcStack_128);
    }
    else {
      FUN_003a0930(&pcStack_1d8,apuStack_f8,0);
      if (pcStack_1d8 != (char *)0x0) {
        FUN_00552ec8(&pcStack_128,&pcStack_1d8,1);
        uVar19 = uStack_120;
        pcVar12 = pcStack_128;
        if (-1 < (long)uStack_118) {
          uVar19 = uStack_118 >> 0x38;
          pcVar12 = (char *)&pcStack_128;
        }
        uStack_1e8 = 0;
        uStack_1e0 = 0;
        lStack_1f0 = 0;
        FUN_003b646c(param_1,2,pcVar12,uVar19,&pcStack_210,&lStack_1f0);
        pcStack_158 = (char *)&lStack_1f0;
        FUN_0033d548(&pcStack_158);
        if ((long)uStack_118 < 0) {
          __ZdlPv(pcStack_128);
        }
        FUN_0035d18c(&pcStack_1d8);
        goto LAB_003cec38;
      }
      pppppuVar21 = (undefined8 *****)appppuStack_1d0[0];
      if (-1 < cStack_1b9) {
        pppppuVar21 = appppuStack_1d0;
      }
      uVar13 = (ulong)*(uint *)(plVar16 + 2);
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_ifaddrs.cc"
                   ,0x8c,0,"Adding local addr from interface %s flags 0x%x to server: %s");
      func_0x00339d8c(param_2 + 0x18);
      iVar4 = aiStack_78[0];
      for (lVar17 = *(long *)(param_2 + 0x70); lVar17 != 0; lVar17 = *(long *)(lVar17 + 0xe8)) {
        if (*(int *)(lVar17 + 0x98) == iVar4) {
          lVar8 = lVar17 + 0x18;
          _memcmp(lVar8,apuStack_f8,iVar4);
          if ((int)lVar8 == 0) break;
        }
      }
      func_0x00339da8(param_2 + 0x18);
      if (lVar17 != 0) {
        if (pcStack_1d8 == (char *)0x0) {
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_ifaddrs.cc"
                       ,0x92,0,"Skipping duplicate addr %s on interface %s");
LAB_003ce6f8:
          FUN_0035d18c(&pcStack_1d8);
          goto LAB_003ce700;
        }
        FUN_0055169c(&pcStack_1d8);
        goto LAB_003ced94;
      }
      FUN_003cd970(&pcStack_128,param_2,apuStack_f8,param_3,iVar18,auStack_194,&uStack_1a0,param_8,
                   param_9,pcVar12,uVar13,pppppuVar21);
      pcVar12 = pcStack_170;
      if (pcStack_128 != pcStack_170) {
        pcStack_170 = pcStack_128;
        pcStack_128 = segment_command_00000020.segname + 0xe;
        if (((ulong)pcVar12 & 1) != 0) {
          FUN_0055293c();
        }
      }
      pcStack_158 = (char *)0x0;
      if (pcStack_170 == (char *)0x0) {
        uVar14 = 0;
      }
      else {
        ppcVar10 = &pcStack_170;
        FUN_00552b00(ppcVar10,&pcStack_158);
        uVar14 = (uint)ppcVar10 ^ 1;
        if (((ulong)pcStack_158 & 1) != 0) {
          FUN_0055293c();
        }
      }
      if (((ulong)pcStack_128 & 1) != 0) {
        FUN_0055293c();
      }
      if (uVar14 == 0) {
        if ((int)param_4 == *(int *)(uStack_1a0 + 0x9c)) {
          iVar18 = iVar18 + 1;
          uVar20 = uStack_1a0;
          if (uVar19 != 0) {
            *(undefined4 *)(uStack_1a0 + 0xf8) = 1;
            *(ulong *)(uVar19 + 0xf0) = uStack_1a0;
          }
          goto LAB_003ce6f8;
        }
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_ifaddrs.cc"
                     ,0x9d,2,"assertion failed: %s");
        _abort();
        goto LAB_003ced94;
      }
      pcStack_128 = "Failed to add listener: ";
      uStack_120 = 0x18;
      pcVar12 = (char *)&pcStack_1d8;
      FUN_00375c3c();
      uStack_150 = *(ulong *)(pcVar12 + 8);
      pcStack_158 = *(char **)pcVar12;
      if (-1 < pcVar12[0x17]) {
        uStack_150 = (ulong)(byte)pcVar12[0x17];
        pcStack_158 = pcVar12;
      }
      FUN_00575d30(&pcStack_210,&pcStack_128,&pcStack_158);
      pcVar12 = pcStack_210;
      if (-1 < (char)bStack_1f9) {
        uStack_208 = (ulong)bStack_1f9;
        pcVar12 = (char *)&pcStack_210;
      }
      uStack_228 = 0;
      uStack_220 = 0;
      uStack_230 = 0;
      FUN_003b646c(&uStack_1f8,2,pcVar12,uStack_208,&uStack_211,&uStack_230);
      puStack_160 = &uStack_230;
      FUN_0033d548(&puStack_160);
      if ((char)bStack_1f9 < '\0') {
        __ZdlPv(pcStack_210);
      }
      uStack_238 = uStack_1f8;
      if ((uStack_1f8 & 1) != 0) {
        piVar11 = (int *)(uStack_1f8 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar2) {
            *piVar11 = *piVar11 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      pcStack_240 = pcStack_170;
      if (((ulong)pcStack_170 & 1) != 0) {
        pcVar12 = pcStack_170 + -1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(pcVar12,0x10);
          if (bVar2) {
            *(int *)pcVar12 = *(int *)pcVar12 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_003be56c(&pcStack_128,&uStack_238,&pcStack_240);
      pcVar12 = pcStack_170;
      if (pcStack_128 == pcStack_170) {
LAB_003cea68:
        if (((ulong)pcVar12 & 1) != 0) {
          FUN_0055293c();
        }
      }
      else {
        pcStack_170 = pcStack_128;
        pcStack_128 = segment_command_00000020.segname + 0xe;
        if (((ulong)pcVar12 & 1) != 0) {
          FUN_0055293c();
          pcVar12 = pcStack_128;
          goto LAB_003cea68;
        }
      }
      if (((ulong)pcStack_240 & 1) != 0) {
        FUN_0055293c();
      }
      if ((uStack_238 & 1) != 0) {
        FUN_0055293c();
      }
      if ((uStack_1f8 & 1) != 0) {
        FUN_0055293c();
      }
      FUN_0035d18c(&pcStack_1d8);
    }
    goto LAB_003cea9c;
  }
  ___error();
  FUN_003be008(&lStack_190,apuStack_f8,*(undefined4 *)pplVar6,"getifaddrs");
  if (lStack_190 == 0) {
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                 ,0xd5,2,"assertion failed: %s");
    _abort();
LAB_003ced94:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x3ced98);
    (*pcVar5)();
  }
  *param_1 = lStack_190;
  lStack_190 = 0x36;
LAB_003cec38:
  pcVar12 = pcStack_170;
  if (((ulong)pcStack_170 & 1) != 0) {
    FUN_0055293c();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_70) {
    ___stack_chk_fail();
    FUN_0033c494(&pcStack_128);
    FUN_0033c494(&pcStack_240);
    FUN_0033c494(&uStack_238);
    FUN_0033c494(&uStack_1f8);
    FUN_0035d18c(&pcStack_1d8);
    FUN_0033c494(&pcStack_170);
    __Unwind_Resume(pcVar12);
    return (char *)((long)&MACH_HEADER.magic + 1);
  }
  return pcVar12;
LAB_003ce700:
  plVar16 = (long *)*plVar16;
  uVar19 = uVar20;
  if (plVar16 == (long *)0x0) {
LAB_003cea9c:
    _freeifaddrs(plStack_168);
    if (pcStack_170 == (char *)0x0) {
      if (uVar20 != 0) {
        *param_5 = *(undefined4 *)(uVar20 + 0x9c);
        *param_1 = 0;
        goto LAB_003cec38;
      }
      uStack_250 = 0;
      uStack_248 = 0;
      uStack_258 = 0;
      puVar15 = &uStack_258;
      FUN_003b646c(2,"No local addresses",0x12,&pcStack_128,&uStack_258);
      goto LAB_003cec2c;
    }
    *param_1 = (long)pcStack_170;
    goto LAB_003cebc8;
  }
  goto LAB_003ce4f0;
}



/* Entry: 003cef70; end: 003cf077;  */

undefined8 FUN_003cef70(void)

{
  return 1;
}



/* Entry: 003cf078; end: 003cf35b;  */

/* WARNING: Possible PIC construction at 0x003cf244: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003cf1c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x003cf248) */
/* WARNING: Removing unreachable block (ram,0x003cf24c) */
/* WARNING: Removing unreachable block (ram,0x003cf26c) */
/* WARNING: Removing unreachable block (ram,0x003cf298) */
/* WARNING: Removing unreachable block (ram,0x003cf29c) */
/* WARNING: Removing unreachable block (ram,0x003cf2a0) */
/* WARNING: Removing unreachable block (ram,0x003cf2ac) */
/* WARNING: Removing unreachable block (ram,0x003cf1cc) */
/* WARNING: Removing unreachable block (ram,0x00339344) */

undefined8 ***
FUN_003cf078(undefined8 ***param_1,undefined8 ***param_2,undefined8 ***param_3,undefined8 ***param_4
            )

{
  undefined1 *puVar1;
  undefined8 ***pppuVar2;
  undefined8 uVar3;
  undefined8 **ppuVar4;
  ulong uVar5;
  undefined8 ***pppuVar6;
  ulong uVar7;
  undefined8 ***pppuVar8;
  undefined8 **ppuVar9;
  undefined8 ***pppuVar10;
  char *pcVar11;
  undefined8 ***pppuVar12;
  undefined8 ***pppuVar13;
  uint uVar14;
  undefined1 *puVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  undefined8 ***unaff_x19;
  undefined8 ***pppuVar19;
  undefined8 ***unaff_x20;
  undefined8 ***unaff_x21;
  undefined8 ***pppuVar20;
  long unaff_x22;
  undefined8 ***unaff_x23;
  undefined8 ***pppuVar21;
  undefined1 *unaff_x24;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  double dVar22;
  char acStack_321 [137];
  char acStack_298 [536];
  undefined8 **ppuStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_59;
  ulong uStack_58;
  undefined1 uStack_49;
  undefined8 **ppuStack_48;
  
  uVar7 = uRam0000000000b5eac8;
  lVar16 = lRam0000000000b5eac0;
  pppuVar2 = &ppuStack_80;
  pppuVar10 = &ppuStack_80;
  puVar15 = &stack0xfffffffffffffff0;
  param_1[4] = param_3;
  *param_1 = param_2;
  if (cRam0000000000b5ea50 == '\0') {
    *(undefined1 *)((long)param_1 + 0xc) = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    puStack_78 = (undefined8 *)0x0;
    FUN_003b646c(&uStack_58,2,"Attempt to create timer before initialization",0x2d,&uStack_59,
                 &puStack_78);
    FUN_003c1e6c(&uStack_49,param_3,&uStack_58);
    if ((uStack_58 & 1) != 0) {
      FUN_0055293c();
    }
    ppuStack_48 = &puStack_78;
    pppuVar2 = &ppuStack_48;
    FUN_0033d548(pppuVar2);
    return pppuVar2;
  }
  uVar17 = (ulong)param_1 >> 4 ^ (ulong)param_1 >> 9 ^ (ulong)param_1 >> 0xe;
  uVar5 = 0;
  if (uVar7 != 0) {
    uVar5 = uVar17 / uVar7;
  }
  pppuVar21 = (undefined8 ***)(uVar17 - uVar5 * uVar7);
  pppuVar19 = (undefined8 ***)(lVar16 + (long)pppuVar21 * 0xd8);
  pppuVar20 = pppuVar19;
  pppuVar6 = param_2;
  func_0x00339d8c();
  *(undefined1 *)((long)param_1 + 0xc) = 1;
  func_0x003c1f6c();
  ppuVar9 = *pppuVar20;
  FUN_003c1e28();
  if ((long)param_2 - (long)ppuVar9 == 0 || (long)param_2 < (long)ppuVar9) {
    *(undefined1 *)((long)param_1 + 0xc) = 0;
    pppuVar6 = (undefined8 ***)param_1[4];
    ppuStack_80 = (undefined8 **)0x0;
    FUN_003c1e6c(&ppuStack_48);
    param_3 = pppuVar10;
    if (((ulong)ppuStack_80 & 1) != 0) {
      FUN_0055293c();
      param_3 = pppuVar10;
    }
    unaff_x30 = 0x3cf1cc;
    unaff_x19 = pppuVar19;
  }
  else {
    dVar22 = 9.223372036854776e+18;
    if ((param_2 != (undefined8 ***)0x7fffffffffffffff) &&
       (ppuVar9 != (undefined8 **)0x8000000000000001)) {
      if (ppuVar9 == (undefined8 **)0x8000000000000000) {
LAB_003cf138:
        dVar22 = -9.223372036854776e+18;
      }
      else {
        if ((long)param_2 < 1) {
          if (-(long)ppuVar9 < -0x8000000000000000 - (long)param_2) goto LAB_003cf138;
        }
        else if ((long)((ulong)param_2 ^ 0x7fffffffffffffff) < -(long)ppuVar9) {
          dVar22 = 9.223372036854776e+18;
          goto LAB_003cf204;
        }
        dVar22 = (double)((long)param_2 - (long)ppuVar9);
      }
    }
LAB_003cf204:
    func_0x003cef90(dVar22 / 1000.0,lVar16 + (long)pppuVar21 * 0xd8 + 0x40);
    if ((long)param_2 < *(long *)(lVar16 + (long)pppuVar21 * 0xd8 + 0x78)) {
      pppuVar10 = (undefined8 ***)(lVar16 + (long)pppuVar21 * 0xd8 + 0x90);
      FUN_003cfd30();
      unaff_x30 = 0x3cf248;
      pppuVar2 = &ppuStack_80;
      pppuVar6 = param_1;
      unaff_x19 = pppuVar19;
      param_1 = pppuVar10;
    }
    else {
      *(undefined4 *)(param_1 + 1) = 0xffffffff;
      lVar16 = lVar16 + (long)pppuVar21 * 0xd8;
      param_1[2] = (undefined8 **)(lVar16 + 0xa0);
      ppuVar9 = *(undefined8 ***)(lVar16 + 0xb8);
      param_1[3] = ppuVar9;
      ppuVar9[2] = param_1;
      param_1[2][3] = param_1;
      pppuVar2 = (undefined8 ***)register0x00000008;
      param_2 = unaff_x20;
      param_1 = unaff_x21;
      lVar16 = unaff_x22;
      pppuVar21 = unaff_x23;
      puVar15 = unaff_x29;
    }
  }
  *(undefined1 **)((long)pppuVar2 + -0x10) = puVar15;
  *(undefined8 *)((long)pppuVar2 + -8) = unaff_x30;
  _pthread_mutex_unlock();
  if ((int)pppuVar19 == 0) {
    return pppuVar19;
  }
  func_0x00770db4();
  *(undefined1 **)((long)pppuVar2 + -0x20) = (undefined1 *)((long)pppuVar2 + -0x10);
  *(undefined8 *)((long)pppuVar2 + -0x18) = 0x339dc4;
  _pthread_mutex_trylock();
  if (((uint)pppuVar19 | 0x10) == 0x10) {
    return (undefined8 ***)(ulong)((uint)pppuVar19 == 0);
  }
  func_0x00770de8();
  *(undefined8 ****)((long)pppuVar2 + -0x40) = param_2;
  *(undefined8 ****)((long)pppuVar2 + -0x38) = unaff_x19;
  *(undefined1 **)((long)pppuVar2 + -0x30) = (undefined1 *)((long)pppuVar2 + -0x20);
  *(code **)((long)pppuVar2 + -0x28) = FUN_00339df0;
  *(undefined8 *)((long)pppuVar2 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  pppuVar10 = (undefined8 ***)((long)pppuVar2 + -0x58);
  _pthread_condattr_init();
  if ((int)pppuVar10 == 0) {
    pppuVar6 = (undefined8 ***)((long)pppuVar2 + -0x58);
    pppuVar10 = pppuVar19;
    _pthread_cond_init();
    if ((int)pppuVar10 != 0) goto LAB_00339e5c;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)pppuVar2 + -0x48)) {
      return pppuVar10;
    }
  }
  else {
    func_0x00770e50();
LAB_00339e5c:
    func_0x00770e1c();
  }
  ___stack_chk_fail();
  *(undefined1 **)((long)pppuVar2 + -0x70) = (undefined1 *)((long)pppuVar2 + -0x30);
  *(code **)((long)pppuVar2 + -0x68) = FUN_00339e64;
  _pthread_cond_destroy();
  if ((int)pppuVar10 == 0) {
    return pppuVar10;
  }
  func_0x00770e84();
  *(long *)((long)pppuVar2 + -0xa0) = lVar16;
  *(undefined8 ****)((long)pppuVar2 + -0x98) = param_1;
  *(undefined8 ****)((long)pppuVar2 + -0x90) = param_2;
  *(undefined8 ****)((long)pppuVar2 + -0x88) = pppuVar19;
  *(undefined1 **)((long)pppuVar2 + -0x80) = (undefined1 *)((long)pppuVar2 + -0x70);
  *(code **)((long)pppuVar2 + -0x78) = FUN_00339e80;
  uVar7 = (ulong)param_4 >> 0x20;
  pppuVar20 = pppuVar6;
  func_0x0033a068(uVar7);
  pppuVar19 = param_3;
  FUN_00339fc4(param_3,param_4,uVar7);
  pppuVar8 = pppuVar10;
  pppuVar13 = pppuVar6;
  if ((int)pppuVar19 == 0) {
    _pthread_cond_wait();
    pppuVar19 = param_4;
  }
  else {
    FUN_0033a30c(param_3,param_4,1);
    uVar7 = (ulong)param_4 >> 0x20;
    pppuVar20 = param_4;
    FUN_0033a598(uVar7);
    pppuVar19 = param_3;
    pppuVar12 = param_4;
    FUN_0033a01c(param_3,param_4,uVar7);
    *(undefined8 ****)((long)pppuVar2 + -0xb0) = pppuVar19;
    *(long *)((long)pppuVar2 + -0xa8) = (long)(int)pppuVar12;
    _pthread_cond_timedwait(pppuVar10,pppuVar6,(undefined1 *)((long)pppuVar2 + -0xb0));
    pppuVar19 = param_3;
    param_3 = param_4;
  }
  if (((uint)pppuVar8 < 0x3d) && ((1L << ((ulong)pppuVar8 & 0x3f) & 0x1000000800000001U) != 0)) {
    return (undefined8 ***)(ulong)((uint)pppuVar8 == 0x3c);
  }
  func_0x00770eb8();
  *(undefined1 **)((long)pppuVar2 + -0xc0) = (undefined1 *)((long)pppuVar2 + -0x80);
  *(code **)((long)pppuVar2 + -0xb8) = FUN_00339f68;
  _pthread_cond_signal();
  if ((int)pppuVar8 == 0) {
    return pppuVar8;
  }
  func_0x00770eec();
  *(undefined1 **)((long)pppuVar2 + -0xd0) = (undefined1 *)((long)pppuVar2 + -0xc0);
  *(undefined8 *)((long)pppuVar2 + -200) = 0x339f84;
  _pthread_cond_broadcast();
  if ((int)pppuVar8 == 0) {
    return pppuVar8;
  }
  func_0x00770f20();
  *(undefined1 **)((long)pppuVar2 + -0xe0) = (undefined1 *)((long)pppuVar2 + -0xd0);
  *(undefined8 *)((long)pppuVar2 + -0xd8) = 0x339fa0;
  _pthread_once();
  if ((int)pppuVar8 == 0) {
    return pppuVar8;
  }
  func_0x00770f54();
  *(undefined1 **)((long)pppuVar2 + -0x120) = unaff_x24;
  *(undefined8 ****)((long)pppuVar2 + -0x118) = pppuVar21;
  *(undefined8 ****)((long)pppuVar2 + -0x110) = param_3;
  *(undefined8 ****)((long)pppuVar2 + -0x108) = pppuVar19;
  *(undefined8 ****)((long)pppuVar2 + -0x100) = pppuVar10;
  *(undefined8 ****)((long)pppuVar2 + -0xf8) = pppuVar6;
  *(undefined1 **)((long)pppuVar2 + -0xf0) = (undefined1 *)((long)pppuVar2 + -0xe0);
  *(code **)((long)pppuVar2 + -0xe8) = FUN_00339fbc;
  *(undefined8 *)((long)pppuVar2 + -0x128) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  pppuVar10 = (undefined8 ***)((long)&MACH_HEADER.magic + 2);
  pppuVar6 = pppuVar13;
  FUN_00338e58();
  if ((int)pppuVar10 != 0) {
    *(undefined1 **)((long)pppuVar2 + -0x170) = (undefined1 *)((long)pppuVar2 + -0xe0);
    puVar15 = (undefined1 *)((long)pppuVar2 + -0x168);
    _vsnprintf(puVar15,0x40,pppuVar20,(undefined1 *)((long)pppuVar2 + -0xe0));
    if ((int)(uint)puVar15 < 0) {
      pppuVar21 = (undefined8 ***)0x0;
      pppuVar20 = (undefined8 ***)0x0;
    }
    else {
      unaff_x24 = puVar15;
      if ((uint)puVar15 < 0x40) {
        pppuVar20 = (undefined8 ***)0x0;
        pppuVar21 = (undefined8 ***)((long)pppuVar2 + -0x168);
      }
      else {
        pppuVar20 = (undefined8 ***)(((ulong)puVar15 & 0xffffffff) + 1);
        FUN_00338c74();
        *(undefined1 **)((long)pppuVar2 + -0x170) = (undefined1 *)((long)pppuVar2 + -0xe0);
        _vsnprintf();
        pppuVar21 = pppuVar20;
      }
    }
    pppuVar6 = pppuVar13;
    FUN_00338e80(pppuVar8,pppuVar13,2,pppuVar21);
    pppuVar10 = pppuVar20;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)pppuVar2 + -0x128)) {
    return pppuVar10;
  }
  ___stack_chk_fail();
  *(undefined1 **)((long)pppuVar2 + -0x1b0) = unaff_x24;
  *(undefined8 ****)((long)pppuVar2 + -0x1a8) = pppuVar21;
  *(undefined8 ****)((long)pppuVar2 + -0x1a0) = pppuVar20;
  *(undefined8 ****)((long)pppuVar2 + -0x198) = pppuVar8;
  *(undefined8 ****)((long)pppuVar2 + -400) = pppuVar13;
  *(undefined8 *)((long)pppuVar2 + -0x188) = 2;
  *(undefined1 **)((long)pppuVar2 + -0x180) = (undefined1 *)((long)pppuVar2 + -0xf0);
  *(code **)((long)pppuVar2 + -0x178) = FUN_00339178;
  *(undefined8 *)((long)pppuVar2 + -0x1b8) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  uVar3 = 1;
  FUN_0033a598();
  *(undefined8 *)((long)pppuVar2 + -0x268) = uVar3;
  ppuVar9 = *pppuVar10;
  ppuVar4 = ppuVar9;
  _strrchr(ppuVar9,0x2f);
  if (ppuVar4 != (undefined8 **)0x0) {
    ppuVar9 = (undefined8 **)((long)ppuVar4 + 1);
  }
  puVar15 = (undefined1 *)((long)pppuVar2 + -0x268);
  _localtime_r(puVar15,(undefined1 *)((long)pppuVar2 + -0x2a0));
  if (puVar15 == (undefined1 *)0x0) {
    builtin_strncpy((char *)((long)pppuVar2 + -0x260),"error:localtime",0x10);
  }
  else {
    puVar15 = (undefined1 *)((long)pppuVar2 + -0x260);
    _strftime(puVar15,0x40,"%m%d %H:%M:%S",(undefined1 *)((long)pppuVar2 + -0x2a0));
    if (puVar15 == (undefined1 *)0x0) {
      builtin_strncpy((char *)((long)pppuVar2 + -0x260),"error:strftime",0xf);
    }
  }
  uVar5 = (ulong)*(uint *)((long)pppuVar10 + 0xc);
  func_0x00338e1c();
  uVar7 = uVar5;
  _pthread_self();
  *(ulong *)((long)pppuVar2 + -0x218) = uVar5;
  *(undefined8 *)((long)pppuVar2 + -0x210) = 0x560e98;
  *(undefined1 **)((long)pppuVar2 + -0x208) = (undefined1 *)((long)pppuVar2 + -0x260);
  *(undefined8 *)((long)pppuVar2 + -0x200) = 0x560e98;
  *(ulong *)((long)pppuVar2 + -0x1f8) = (ulong)pppuVar6 & 0xffffffff;
  *(undefined8 *)((long)pppuVar2 + -0x1f0) = 0x5606ac;
  *(ulong *)((long)pppuVar2 + -0x1e8) = uVar7;
  *(code **)((long)pppuVar2 + -0x1e0) = FUN_00560738;
  *(undefined8 ***)((long)pppuVar2 + -0x1d8) = ppuVar9;
  *(undefined8 *)((long)pppuVar2 + -0x1d0) = 0x560e98;
  *(ulong *)((long)pppuVar2 + -0x1c8) = (ulong)*(uint *)(pppuVar10 + 1);
  *(undefined8 *)((long)pppuVar2 + -0x1c0) = 0x5606ac;
  puVar15 = (undefined1 *)((long)pppuVar2 + -0x218);
  FUN_0056189c((undefined1 *)((long)pppuVar2 + -0x2b8),"%s%s.%09d %7ld %s:%d]",0x15,puVar15,6);
  uVar14 = *(uint *)((long)pppuVar10 + 0xc);
  func_0x00338e6c();
  if (uVar14 == 0) {
    *(undefined1 *)((long)pppuVar2 + -0x218) = 0;
    *(undefined1 *)((long)pppuVar2 + -0x200) = 0;
LAB_00339300:
    pppuVar6 = *(undefined8 ****)PTR____stderrp_00999f90;
    puVar1 = *(undefined1 **)((long)pppuVar2 + -0x2b8);
    if (-1 < *(char *)((long)pppuVar2 + -0x2a1)) {
      puVar1 = (undefined1 *)((long)pppuVar2 + -0x2b8);
    }
    ppuVar9 = pppuVar10[2];
    *(undefined1 **)((long)pppuVar2 + -0x2d0) = puVar1;
    *(undefined8 ***)((long)pppuVar2 + -0x2c8) = ppuVar9;
    pcVar11 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8((undefined1 *)((long)pppuVar2 + -0x218));
    if (*(char *)((long)pppuVar2 + -0x200) == '\0') goto LAB_00339300;
    pppuVar6 = *(undefined8 ****)PTR____stderrp_00999f90;
    puVar1 = *(undefined1 **)((long)pppuVar2 + -0x2b8);
    if (-1 < *(char *)((long)pppuVar2 + -0x2a1)) {
      puVar1 = (undefined1 *)((long)pppuVar2 + -0x2b8);
    }
    *(undefined8 ***)((long)pppuVar2 + -0x2c8) = pppuVar10[2];
    *(undefined1 **)((long)pppuVar2 + -0x2c0) = (undefined1 *)((long)pppuVar2 + -0x218);
    *(undefined1 **)((long)pppuVar2 + -0x2d0) = puVar1;
    pcVar11 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (*(char *)((long)pppuVar2 + -0x2a1) < '\0') {
    pppuVar6 = *(undefined8 ****)((long)pppuVar2 + -0x2b8);
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)pppuVar2 + -0x1b8)) {
    return pppuVar6;
  }
  ___stack_chk_fail();
  if (*(char *)((long)pppuVar2 + -0x2a1) < '\0') {
    __ZdlPv(*(undefined8 *)((long)pppuVar2 + -0x2b8));
  }
  __Unwind_Resume();
  uVar14 = (uint)puVar15;
  if ((char *)0x3 < pcVar11) {
    uVar7 = (ulong)pcVar11 >> 2;
    pppuVar2 = pppuVar6;
    do {
      uVar14 = (*(int *)pppuVar2 * 0x16a88000 | (uint)(*(int *)pppuVar2 * -0x3361d2af) >> 0x11) *
               0x1b873593 ^ (uint)puVar15;
      uVar14 = (uVar14 >> 0x13 | uVar14 << 0xd) * 5 + 0xe6546b64;
      puVar15 = (undefined1 *)(ulong)uVar14;
      uVar7 = uVar7 - 1;
      pppuVar2 = (undefined8 ***)((long)pppuVar2 + 4);
    } while (uVar7 != 0);
    pppuVar6 = (undefined8 ***)((long)pppuVar6 + ((ulong)pcVar11 & 0xfffffffffffffffc));
  }
  uVar18 = 0;
  uVar7 = (ulong)pcVar11 & 3;
  if (uVar7 != 1) {
    if (uVar7 != 2) {
      if (uVar7 != 3) goto LAB_00339464;
      uVar18 = (uint)*(byte *)((long)pppuVar6 + 2) << 0x10;
    }
    uVar18 = uVar18 | (uint)*(byte *)((long)pppuVar6 + 1) << 8;
  }
  uVar14 = ((uVar18 ^ *(byte *)pppuVar6) * 0x16a88000 |
           (uVar18 ^ *(byte *)pppuVar6) * -0x3361d2af >> 0x11) * 0x1b873593 ^ uVar14;
LAB_00339464:
  uVar14 = uVar14 ^ (uint)pcVar11;
  uVar14 = (uVar14 ^ uVar14 >> 0x10) * -0x7a143595;
  uVar14 = (uVar14 ^ uVar14 >> 0xd) * -0x3d4d51cb;
  return (undefined8 ***)(ulong)(uVar14 ^ uVar14 >> 0x10);
}



/* Entry: 003cf35c; end: 003cf44b;  */

void FUN_003cf35c(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uStack_40;
  undefined1 uStack_31;
  
  lVar1 = lRam0000000000b5eac0;
  if (cRam0000000000b5ea50 != '\0') {
    uVar3 = param_1 >> 4 ^ param_1 >> 9 ^ param_1 >> 0xe;
    uVar2 = 0;
    if (uRam0000000000b5eac8 != 0) {
      uVar2 = uVar3 / uRam0000000000b5eac8;
    }
    lVar5 = uVar3 - uVar2 * uRam0000000000b5eac8;
    lVar4 = lRam0000000000b5eac0 + lVar5 * 0xd8;
    func_0x00339d8c(lVar4);
    if (*(char *)(param_1 + 0xc) != '\0') {
      uStack_40 = 4;
      FUN_003c1e6c(&uStack_31,*(undefined8 *)(param_1 + 0x20),&uStack_40);
      if ((uStack_40 & 1) != 0) {
        FUN_0055293c();
      }
      *(undefined1 *)(param_1 + 0xc) = 0;
      if (*(int *)(param_1 + 8) == -1) {
        lVar1 = *(long *)(param_1 + 0x10);
        *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_1 + 0x18);
        *(long *)(*(long *)(param_1 + 0x18) + 0x10) = lVar1;
      }
      else {
        func_0x003cfdec(lVar1 + lVar5 * 0xd8 + 0x90,param_1);
      }
    }
    func_0x00339da8(lVar4);
  }
  return;
}



/* Entry: 003cf44c; end: 003cf5a3;  */

/* WARNING: Type propagation algorithm not settling */

long FUN_003cf44c(long *param_1)

{
  char cVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  int *piVar7;
  bool bVar8;
  ulong auStack_68 [4];
  undefined1 uStack_41;
  ulong uStack_40;
  ulong *puStack_38;
  
  plVar3 = param_1;
  func_0x003c1f6c();
  lVar4 = *plVar3;
  FUN_003c1e28();
  ppuVar5 = &PTR___tlv_bootstrap_00b2c468;
  (*(code *)PTR___tlv_bootstrap_00b2c468)();
  puVar6 = *ppuVar5;
  if (lVar4 < (long)puVar6) {
    if (param_1 != (long *)0x0) {
      if (*param_1 <= (long)puVar6) {
        puVar6 = (undefined *)*param_1;
      }
      *param_1 = (long)puVar6;
    }
    return 1;
  }
  if (lVar4 == 0x7fffffffffffffff) {
    auStack_68[1] = 0;
    auStack_68[2] = 0;
    auStack_68[3] = 0;
    FUN_003b646c(&uStack_40,2,"Shutting down timer system",0x1a,&uStack_41,auStack_68 + 1);
    puStack_38 = auStack_68 + 1;
    FUN_0033d548(&puStack_38);
    if ((uStack_40 & 1) != 0) {
      piVar7 = (int *)(uStack_40 - 1);
      do {
        cVar1 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar8) {
          *piVar7 = *piVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      bVar8 = false;
      goto LAB_003cf528;
    }
  }
  else {
    uStack_40 = 0;
  }
  bVar8 = true;
LAB_003cf528:
  uVar2 = uStack_40;
  auStack_68[0] = uStack_40;
  FUN_003cf8ec(lVar4,param_1,auStack_68);
  if (!bVar8) {
    FUN_0055293c(uVar2);
  }
  if ((uStack_40 & 1) != 0) {
    FUN_0055293c();
  }
  return lVar4;
}



/* Entry: 003cf5a4; end: 003cf707;  */

void FUN_003cf5a4(int param_1)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  ulong uVar8;
  uint uVar9;
  
  FUN_00338d88();
  uVar2 = param_1 << 1;
  uVar9 = uVar2;
  if (0x1f < uVar2) {
    uVar9 = 0x20;
  }
  if (uVar2 == 0) {
    uVar9 = 1;
  }
  uRam0000000000b5eac8 = (ulong)uVar9;
  lVar3 = uRam0000000000b5eac8 * 0xd8;
  func_0x00338c94();
  lVar4 = uRam0000000000b5eac8 << 3;
  lRam0000000000b5eac0 = lVar3;
  func_0x00338c94();
  uRam0000000000b5ea50 = 1;
  uRam0000000000b5ea48 = 0;
  puVar5 = (undefined8 *)0xb5ea58;
  lRam0000000000b5ead0 = lVar4;
  FUN_00339d50();
  func_0x003c1f6c();
  uVar6 = *puVar5;
  FUN_003c1e28();
  ppuVar7 = &PTR___tlv_bootstrap_00b2c468;
  uRam0000000000b5ea40 = uVar6;
  (*(code *)PTR___tlv_bootstrap_00b2c468)();
  *ppuVar7 = (undefined *)0x0;
  if (uRam0000000000b5eac8 != 0) {
    uVar8 = 0;
    uVar9 = 1;
    do {
      lVar4 = lRam0000000000b5eac0 + uVar8 * 0xd8;
      FUN_00339d50(lVar4);
      func_0x003cef78(0x40083e0f83e0f83e,0x3fb999999999999a,0x3fe0000000000000,lVar4 + 0x40);
      *(undefined8 *)(lVar4 + 0x78) = uRam0000000000b5ea40;
      *(uint *)(lVar4 + 0x88) = uVar9 - 1;
      FUN_003cfd20(lVar4 + 0x90);
      *(long *)(lVar4 + 0xb8) = lVar4 + 0xa0;
      *(long *)(lVar4 + 0xb0) = lVar4 + 0xa0;
      lVar3 = lVar4;
      FUN_003cfcc4();
      *(long *)(lRam0000000000b5ead0 + uVar8 * 8) = lVar4;
      *(long *)(lVar4 + 0x80) = lVar3;
      uVar8 = (ulong)uVar9;
      uVar1 = (ulong)uVar9;
      uVar9 = uVar9 + 1;
    } while (uVar1 < uRam0000000000b5eac8);
  }
  return;
}



/* Entry: 003cf708; end: 003cf827;  */

void FUN_003cf708(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_51;
  ulong uStack_50;
  undefined1 *puStack_48;
  
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  FUN_003b646c(&uStack_50,2,"Timer list shutdown",0x13,&uStack_51,&uStack_70);
  FUN_003cf8ec(0x7fffffffffffffff,0,&uStack_50);
  if ((uStack_50 & 1) != 0) {
    FUN_0055293c();
  }
  puStack_48 = (undefined1 *)&uStack_70;
  FUN_0033d548(&puStack_48);
  if (uRam0000000000b5eac8 != 0) {
    uVar2 = 0;
    lVar3 = 0x90;
    do {
      lVar1 = lRam0000000000b5eac0 + lVar3;
      func_0x00339d70(lVar1 + -0x90);
      func_0x003cfd28(lVar1);
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 0xd8;
    } while (uVar2 < uRam0000000000b5eac8);
  }
  func_0x00339d70(0xb5ea58);
  FUN_00338cb8(lRam0000000000b5eac0);
  FUN_00338cb8(uRam0000000000b5ead0);
  uRam0000000000b5ea50 = 0;
  return;
}



/* Entry: 003cf828; end: 003cf84b;  */

void FUN_003cf828(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR___tlv_bootstrap_00b2c468;
  (*(code *)PTR___tlv_bootstrap_00b2c468)();
  *ppuVar1 = (undefined *)0x0;
  return;
}



/* Entry: 003cf84c; end: 003cf8eb;  */

void FUN_003cf84c(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar2 = lRam0000000000b5ead0;
  uVar3 = (ulong)*(uint *)(param_1 + 0x88);
  if (*(uint *)(param_1 + 0x88) != 0) {
    lVar5 = *(long *)(param_1 + 0x80);
    do {
      uVar1 = (int)uVar3 - 1;
      lVar6 = *(long *)(lVar2 + (ulong)uVar1 * 8);
      if (*(long *)(lVar6 + 0x80) <= lVar5) break;
      lVar7 = *(long *)(lVar2 + uVar3 * 8);
      *(long *)(lVar2 + (ulong)uVar1 * 8) = lVar7;
      *(long *)(lVar2 + uVar3 * 8) = lVar6;
      *(uint *)(lVar7 + 0x88) = uVar1;
      *(int *)(lVar6 + 0x88) = (int)uVar3;
      uVar3 = (ulong)*(uint *)(param_1 + 0x88);
    } while (*(uint *)(param_1 + 0x88) != 0);
  }
  lVar2 = lRam0000000000b5ead0;
  uVar4 = lRam0000000000b5eac8 - 1;
  if (uVar3 < uVar4) {
    lVar5 = *(long *)(param_1 + 0x80);
    do {
      uVar1 = (int)uVar3 + 1;
      lVar6 = *(long *)(lVar2 + (ulong)uVar1 * 8);
      if (lVar5 <= *(long *)(lVar6 + 0x80)) {
        return;
      }
      lVar7 = *(long *)(lVar2 + uVar3 * 8);
      *(long *)(lVar2 + uVar3 * 8) = lVar6;
      *(long *)(lVar2 + (ulong)uVar1 * 8) = lVar7;
      *(int *)(lVar6 + 0x88) = (int)uVar3;
      *(uint *)(lVar7 + 0x88) = uVar1;
      uVar3 = (ulong)*(uint *)(param_1 + 0x88);
    } while (uVar3 < uVar4);
  }
  return;
}



/* Entry: 003cf8ec; end: 003cfcc3;  */

undefined4 FUN_003cf8ec(double param_1,ulong param_2,ulong *param_3,ulong *param_4)

{
  long *plVar1;
  undefined *puVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined **ppuVar7;
  undefined *extraout_x8;
  ulong uVar8;
  int *piVar9;
  ulong *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  double dVar16;
  double dVar17;
  undefined4 uStack_ac;
  ulong uStack_a0;
  undefined1 uStack_91;
  
  ppuVar7 = &PTR___tlv_bootstrap_00b2c468;
  (*(code *)PTR___tlv_bootstrap_00b2c468)(uRam0000000000b5ea40);
  *ppuVar7 = extraout_x8;
  if ((long)param_2 < (long)extraout_x8) {
    if (param_3 != (ulong *)0x0) {
      puVar2 = extraout_x8;
      if ((long)*param_3 <= (long)extraout_x8) {
        puVar2 = (undefined *)*param_3;
      }
      *param_3 = (ulong)puVar2;
    }
    return 1;
  }
  do {
    if (lRam0000000000b5ea48 != 0) {
      ClearExclusiveLocal();
      return 0;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(0xb5ea48,0x10);
    if (bVar5) {
      lRam0000000000b5ea48 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  func_0x00339d8c(0xb5ea58);
  lVar14 = *plRam0000000000b5ead0;
  puVar10 = (ulong *)(lVar14 + 0x80);
  uVar8 = *puVar10;
  if ((long)uVar8 < (long)param_2 || uVar8 == param_2 && param_2 != 0x7fffffffffffffff) {
    uStack_ac = 1;
LAB_003cf9ec:
    uVar8 = *param_4;
    if ((uVar8 & 1) != 0) {
      piVar9 = (int *)(uVar8 - 1);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar5) {
          *piVar9 = *piVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    func_0x00339d8c(lVar14);
    lVar13 = 0;
    plVar1 = (long *)(lVar14 + 0x90);
    piVar9 = (int *)(uVar8 - 1);
    do {
      plVar15 = plVar1;
      FUN_003cff90();
      if ((int)plVar15 != 0) {
        if ((long)param_2 < *(long *)(lVar14 + 0x78)) goto LAB_003cfb98;
        func_0x003cefa8(lVar14 + 0x40);
        param_1 = param_1 * 0.33;
        dVar17 = 1000.0;
        if (param_1 <= 1.0) {
          dVar17 = param_1 * 1000.0;
        }
        uVar3 = *(ulong *)(lVar14 + 0x78);
        if ((long)*(ulong *)(lVar14 + 0x78) <= (long)param_2) {
          uVar3 = param_2;
        }
        dVar16 = 10.0;
        if (0.01 <= param_1) {
          dVar16 = dVar17;
        }
        lVar11 = 0x7fffffffffffffff;
        param_1 = dVar16;
        if (dVar16 < 9.223372036854776e+18) {
          param_1 = -9.223372036854776e+18;
          if (-9.223372036854776e+18 < dVar16) {
            param_1 = dVar16;
          }
          lVar12 = (long)param_1;
          if ((lVar12 != 0x7fffffffffffffff && uVar3 != 0x7fffffffffffffff) &&
             (lVar11 = -0x8000000000000000,
             lVar12 != -0x8000000000000000 && uVar3 != 0x8000000000000000)) {
            if ((long)uVar3 < 1) {
              if ((long)(-0x8000000000000000 - uVar3) <= lVar12) goto LAB_003cfae0;
            }
            else if ((long)(uVar3 ^ 0x7fffffffffffffff) < lVar12) {
              lVar11 = 0x7fffffffffffffff;
            }
            else {
LAB_003cfae0:
              lVar11 = uVar3 + lVar12;
            }
          }
        }
        *(long *)(lVar14 + 0x78) = lVar11;
        plVar15 = *(long **)(lVar14 + 0xb0);
        while (plVar6 = plVar15, plVar6 != (long *)(lVar14 + 0xa0)) {
          plVar15 = (long *)plVar6[2];
          if (*plVar6 < *(long *)(lVar14 + 0x78)) {
            plVar15[3] = plVar6[3];
            *(long **)(plVar6[3] + 0x10) = plVar15;
            FUN_003cfd30(plVar1);
          }
        }
        plVar15 = plVar1;
        FUN_003cff90();
        if (((ulong)plVar15 & 1) != 0) goto LAB_003cfb98;
      }
      plVar15 = plVar1;
      func_0x003cffa0();
      if ((long)param_2 < *plVar15) goto LAB_003cfb98;
      *(undefined1 *)((long)plVar15 + 0xc) = 0;
      func_0x003cffac(plVar1);
      lVar11 = plVar15[4];
      if ((uVar8 & 1) != 0) {
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar5) {
            *piVar9 = *piVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      uStack_a0 = uVar8;
      FUN_003c1e6c(&uStack_91,lVar11,&uStack_a0);
      if ((uStack_a0 & 1) != 0) {
        FUN_0055293c();
      }
      lVar13 = lVar13 + 1;
    } while( true );
  }
  uStack_ac = 1;
  uRam0000000000b5ea40 = uVar8;
joined_r0x003cfc14:
  if (param_3 != (ulong *)0x0) {
    if ((long)*param_3 <= (long)uRam0000000000b5ea40) {
      uRam0000000000b5ea40 = *param_3;
    }
    *param_3 = uRam0000000000b5ea40;
    uRam0000000000b5ea40 = *puVar10;
  }
  func_0x00339da8(0xb5ea58);
  lRam0000000000b5ea48 = 0;
  return uStack_ac;
LAB_003cfb98:
  lVar11 = lVar14;
  FUN_003cfcc4();
  func_0x00339da8(lVar14);
  if ((uVar8 & 1) != 0) {
    FUN_0055293c(uVar8);
  }
  if (lVar13 != 0) {
    uStack_ac = 2;
  }
  *(long *)(*plRam0000000000b5ead0 + 0x80) = lVar11;
  FUN_003cf84c();
  lVar14 = *plRam0000000000b5ead0;
  uVar8 = *(ulong *)(lVar14 + 0x80);
  if (((long)uVar8 < (long)param_2) || (uVar8 == param_2 && param_2 != 0x7fffffffffffffff))
  goto LAB_003cf9ec;
  puVar10 = (ulong *)(lVar14 + 0x80);
  uRam0000000000b5ea40 = uVar8;
  goto joined_r0x003cfc14;
}



/* Entry: 003cfcc4; end: 003cfd1f;  */

long FUN_003cfcc4(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  plVar3 = (long *)(param_1 + 0x90);
  plVar2 = plVar3;
  FUN_003cff90();
  if ((int)plVar2 == 0) {
    func_0x003cffa0();
    lVar4 = *plVar3;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x78);
    lVar1 = lVar5;
    if (lVar5 != 0x7fffffffffffffff) {
      lVar1 = lVar5 + 1;
    }
    lVar4 = -0x8000000000000000;
    if (lVar5 != -0x8000000000000000) {
      lVar4 = lVar1;
    }
  }
  return lVar4;
}



/* Entry: 003cfd20; end: 003cfd2f;  */

void FUN_003cfd20(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 003cfd30; end: 003cff8f;  */

bool FUN_003cfd30(long *param_1,long *param_2)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  
  uVar4 = *(uint *)(param_1 + 1);
  lVar3 = *param_1;
  if (uVar4 == *(uint *)((long)param_1 + 0xc)) {
    uVar6 = uVar4 * 3 >> 1;
    if (uVar4 * 3 >> 1 < uVar4 + 1) {
      uVar6 = uVar4 + 1;
    }
    *(uint *)((long)param_1 + 0xc) = uVar6;
    FUN_00338cbc(lVar3,(ulong)uVar6 << 3);
    *param_1 = lVar3;
    uVar4 = *(uint *)(param_1 + 1);
  }
  if (uVar4 == 0) {
    uVar6 = 0;
  }
  else {
    lVar5 = *param_2;
    uVar6 = uVar4;
    do {
      uVar2 = uVar6;
      if (0 < (int)uVar6) {
        uVar2 = uVar6 - 1;
      }
      uVar2 = (int)uVar2 >> 1;
      plVar7 = *(long **)(lVar3 + (ulong)uVar2 * 8);
      if (*plVar7 <= lVar5) break;
      *(long **)(lVar3 + (ulong)uVar6 * 8) = plVar7;
      *(uint *)(plVar7 + 1) = uVar6;
      bVar1 = 2 < uVar6;
      uVar6 = uVar2;
    } while (bVar1);
  }
  *(long **)(lVar3 + (ulong)uVar6 * 8) = param_2;
  *(uint *)(param_2 + 1) = uVar6;
  *(uint *)(param_1 + 1) = uVar4 + 1;
  return uVar6 == 0;
}



/* Entry: 003cff90; end: 003cffb7;  */

bool FUN_003cff90(long param_1)

{
  return *(int *)(param_1 + 8) == 0;
}



/* Entry: 003cffb8; end: 003d0093;  */

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

byte * FUN_003cffb8(undefined8 param_1,byte *param_2,byte *param_3,byte *param_4)

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



/* Entry: 003d0094; end: 003d013b;  */

/* WARNING: Possible PIC construction at 0x003d00cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x003d00d0) */
/* WARNING: Removing unreachable block (ram,0x003d00e0) */
/* WARNING: Removing unreachable block (ram,0x003d00f0) */
/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_003d0094(undefined8 param_1,byte *param_2,byte *param_3,byte *param_4)

{
  undefined1 *puVar1;
  undefined1 ***pppuVar2;
  byte *pbVar3;
  long lVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  byte *pbVar8;
  char *pcVar9;
  byte *pbVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint uVar13;
  byte *unaff_x19;
  byte *unaff_x20;
  long lVar14;
  byte *unaff_x21;
  byte *unaff_x22;
  byte *unaff_x23;
  undefined1 *unaff_x24;
  undefined1 ***pppuVar15;
  undefined8 uVar16;
  char acStack_2a1 [481];
  undefined1 **ppuStack_c0;
  undefined8 uStack_b8;
  byte *pbStack_b0;
  long lStack_a8;
  byte *pbStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  byte abStack_58 [16];
  long lStack_48;
  
  pppuVar2 = (undefined1 ***)&stack0xffffffffffffffd0;
  pppuVar15 = (undefined1 ***)&stack0xfffffffffffffff0;
  func_0x00339d8c(0xb5ead8);
  if (cRam0000000000b5eb78 == '\x01') {
    cRam0000000000b5eb78 = '\0';
    pbVar6 = (byte *)0xb5eb18;
    uVar16 = 0x3d00d0;
    param_3 = unaff_x22;
  }
  else {
    uRam0000000000b5ebb0 = 0;
    pbVar6 = (byte *)0xb5ead8;
    _pthread_mutex_unlock();
    if ((int)pbVar6 == 0) {
      return pbVar6;
    }
    func_0x00770db4();
    _pthread_mutex_trylock();
    if (((uint)pbVar6 | 0x10) == 0x10) {
      return (byte *)(ulong)((uint)pbVar6 == 0);
    }
    func_0x00770de8();
    lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
    unaff_x20 = abStack_58;
    _pthread_condattr_init();
    if ((int)unaff_x20 == 0) {
      unaff_x19 = abStack_58;
      unaff_x20 = pbVar6;
      _pthread_cond_init();
      pbVar3 = param_4;
      if ((int)unaff_x20 != 0) goto LAB_00339e5c;
      if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
        return unaff_x20;
      }
    }
    else {
      func_0x00770e50();
      unaff_x19 = param_2;
      pbVar3 = param_4;
LAB_00339e5c:
      func_0x00770e1c();
    }
    ___stack_chk_fail();
    pcStack_68 = FUN_00339e64;
    puStack_70 = &stack0xffffffffffffffd0;
    _pthread_cond_destroy();
    if ((int)unaff_x20 == 0) {
      return unaff_x20;
    }
    func_0x00770e84();
    pcStack_78 = FUN_00339e80;
    uVar7 = (ulong)pbVar3 >> 0x20;
    param_4 = unaff_x19;
    pbStack_88 = pbVar6;
    puStack_80 = (undefined1 *)&puStack_70;
    func_0x0033a068(uVar7);
    pbVar8 = param_3;
    FUN_00339fc4(param_3,pbVar3,uVar7);
    pbVar6 = unaff_x20;
    param_2 = unaff_x19;
    if ((int)pbVar8 == 0) {
      _pthread_cond_wait();
      unaff_x21 = pbVar3;
    }
    else {
      FUN_0033a30c(param_3,pbVar3,1);
      uVar7 = (ulong)pbVar3 >> 0x20;
      param_4 = pbVar3;
      FUN_0033a598(uVar7);
      pbVar8 = param_3;
      pbVar10 = pbVar3;
      FUN_0033a01c(param_3,pbVar3,uVar7);
      lStack_a8 = (long)(int)pbVar10;
      pbStack_b0 = pbVar8;
      _pthread_cond_timedwait(unaff_x20,unaff_x19,&pbStack_b0);
      unaff_x21 = param_3;
      param_3 = pbVar3;
    }
    if (((uint)pbVar6 < 0x3d) && ((1L << ((ulong)pbVar6 & 0x3f) & 0x1000000800000001U) != 0)) {
      return (byte *)(ulong)((uint)pbVar6 == 0x3c);
    }
    func_0x00770eb8();
    pppuVar2 = &ppuStack_c0;
    pppuVar15 = &ppuStack_c0;
    uStack_b8 = 0x339f68;
    ppuStack_c0 = &puStack_80;
    _pthread_cond_signal();
    if ((int)pbVar6 == 0) {
      return pbVar6;
    }
    uVar16 = 0x339f84;
    func_0x00770eec();
  }
  *(undefined1 ****)((long)pppuVar2 + -0x10) = pppuVar15;
  *(undefined8 *)((long)pppuVar2 + -8) = uVar16;
  _pthread_cond_broadcast();
  if ((int)pbVar6 == 0) {
    return pbVar6;
  }
  func_0x00770f20();
  *(undefined1 **)((long)pppuVar2 + -0x20) = (undefined1 *)((long)pppuVar2 + -0x10);
  *(undefined8 *)((long)pppuVar2 + -0x18) = 0x339fa0;
  _pthread_once();
  if ((int)pbVar6 == 0) {
    return pbVar6;
  }
  func_0x00770f54();
  *(undefined1 **)((long)pppuVar2 + -0x60) = unaff_x24;
  *(byte **)((long)pppuVar2 + -0x58) = unaff_x23;
  *(byte **)((long)pppuVar2 + -0x50) = param_3;
  *(byte **)((long)pppuVar2 + -0x48) = unaff_x21;
  *(byte **)((long)pppuVar2 + -0x40) = unaff_x20;
  *(byte **)((long)pppuVar2 + -0x38) = unaff_x19;
  *(undefined1 **)((long)pppuVar2 + -0x30) = (undefined1 *)((long)pppuVar2 + -0x20);
  *(code **)((long)pppuVar2 + -0x28) = FUN_00339fbc;
  *(undefined8 *)((long)pppuVar2 + -0x68) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  pbVar3 = (byte *)((long)&MACH_HEADER.magic + 2);
  pbVar8 = param_2;
  FUN_00338e58();
  if ((int)pbVar3 != 0) {
    *(undefined1 **)((long)pppuVar2 + -0xb0) = (undefined1 *)((long)pppuVar2 + -0x20);
    puVar12 = (undefined1 *)((long)pppuVar2 + -0xa8);
    _vsnprintf(puVar12,0x40,param_4,(undefined1 *)((long)pppuVar2 + -0x20));
    if ((int)(uint)puVar12 < 0) {
      unaff_x23 = (byte *)0x0;
      param_4 = (byte *)0x0;
    }
    else {
      unaff_x24 = puVar12;
      if ((uint)puVar12 < 0x40) {
        param_4 = (byte *)0x0;
        unaff_x23 = (byte *)((long)pppuVar2 + -0xa8);
      }
      else {
        param_4 = (byte *)(((ulong)puVar12 & 0xffffffff) + 1);
        FUN_00338c74();
        *(undefined1 **)((long)pppuVar2 + -0xb0) = (undefined1 *)((long)pppuVar2 + -0x20);
        _vsnprintf();
        unaff_x23 = param_4;
      }
    }
    pbVar8 = param_2;
    FUN_00338e80(pbVar6,param_2,2,unaff_x23);
    pbVar3 = param_4;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)pppuVar2 + -0x68)) {
    return pbVar3;
  }
  ___stack_chk_fail();
  *(undefined1 **)((long)pppuVar2 + -0xf0) = unaff_x24;
  *(byte **)((long)pppuVar2 + -0xe8) = unaff_x23;
  *(byte **)((long)pppuVar2 + -0xe0) = param_4;
  *(byte **)((long)pppuVar2 + -0xd8) = pbVar6;
  *(byte **)((long)pppuVar2 + -0xd0) = param_2;
  *(undefined8 *)((long)pppuVar2 + -200) = 2;
  *(undefined1 **)((long)pppuVar2 + -0xc0) = (undefined1 *)((long)pppuVar2 + -0x30);
  *(code **)((long)pppuVar2 + -0xb8) = FUN_00339178;
  *(undefined8 *)((long)pppuVar2 + -0xf8) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  uVar16 = 1;
  FUN_0033a598();
  *(undefined8 *)((long)pppuVar2 + -0x1a8) = uVar16;
  lVar14 = *(long *)pbVar3;
  lVar4 = lVar14;
  _strrchr(lVar14,0x2f);
  if (lVar4 != 0) {
    lVar14 = lVar4 + 1;
  }
  puVar12 = (undefined1 *)((long)pppuVar2 + -0x1a8);
  _localtime_r(puVar12,(undefined1 *)((long)pppuVar2 + -0x1e0));
  if (puVar12 == (undefined1 *)0x0) {
    builtin_strncpy((char *)((long)pppuVar2 + -0x1a0),"error:localtime",0x10);
  }
  else {
    puVar12 = (undefined1 *)((long)pppuVar2 + -0x1a0);
    _strftime(puVar12,0x40,"%m%d %H:%M:%S",(undefined1 *)((long)pppuVar2 + -0x1e0));
    if (puVar12 == (undefined1 *)0x0) {
      builtin_strncpy((char *)((long)pppuVar2 + -0x1a0),"error:strftime",0xf);
    }
  }
  uVar5 = (ulong)*(uint *)(pbVar3 + 0xc);
  func_0x00338e1c();
  uVar7 = uVar5;
  _pthread_self();
  *(ulong *)((long)pppuVar2 + -0x158) = uVar5;
  *(undefined8 *)((long)pppuVar2 + -0x150) = 0x560e98;
  *(undefined1 **)((long)pppuVar2 + -0x148) = (undefined1 *)((long)pppuVar2 + -0x1a0);
  *(undefined8 *)((long)pppuVar2 + -0x140) = 0x560e98;
  *(ulong *)((long)pppuVar2 + -0x138) = (ulong)pbVar8 & 0xffffffff;
  *(undefined8 *)((long)pppuVar2 + -0x130) = 0x5606ac;
  *(ulong *)((long)pppuVar2 + -0x128) = uVar7;
  *(code **)((long)pppuVar2 + -0x120) = FUN_00560738;
  *(long *)((long)pppuVar2 + -0x118) = lVar14;
  *(undefined8 *)((long)pppuVar2 + -0x110) = 0x560e98;
  *(ulong *)((long)pppuVar2 + -0x108) = (ulong)*(uint *)(pbVar3 + 8);
  *(undefined8 *)((long)pppuVar2 + -0x100) = 0x5606ac;
  puVar12 = (undefined1 *)((long)pppuVar2 + -0x158);
  FUN_0056189c((undefined1 *)((long)pppuVar2 + -0x1f8),"%s%s.%09d %7ld %s:%d]",0x15,puVar12,6);
  uVar11 = *(uint *)(pbVar3 + 0xc);
  func_0x00338e6c();
  if (uVar11 == 0) {
    *(undefined1 *)((long)pppuVar2 + -0x158) = 0;
    *(undefined1 *)((long)pppuVar2 + -0x140) = 0;
LAB_00339300:
    pbVar6 = *(byte **)PTR____stderrp_00999f90;
    puVar1 = *(undefined1 **)((long)pppuVar2 + -0x1f8);
    if (-1 < *(char *)((long)pppuVar2 + -0x1e1)) {
      puVar1 = (undefined1 *)((long)pppuVar2 + -0x1f8);
    }
    lVar14 = *(long *)(pbVar3 + 0x10);
    *(undefined1 **)((long)pppuVar2 + -0x210) = puVar1;
    *(long *)((long)pppuVar2 + -0x208) = lVar14;
    pcVar9 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8((undefined1 *)((long)pppuVar2 + -0x158));
    if (*(char *)((long)pppuVar2 + -0x140) == '\0') goto LAB_00339300;
    pbVar6 = *(byte **)PTR____stderrp_00999f90;
    puVar1 = *(undefined1 **)((long)pppuVar2 + -0x1f8);
    if (-1 < *(char *)((long)pppuVar2 + -0x1e1)) {
      puVar1 = (undefined1 *)((long)pppuVar2 + -0x1f8);
    }
    *(long *)((long)pppuVar2 + -0x208) = *(long *)(pbVar3 + 0x10);
    *(undefined1 **)((long)pppuVar2 + -0x200) = (undefined1 *)((long)pppuVar2 + -0x158);
    *(undefined1 **)((long)pppuVar2 + -0x210) = puVar1;
    pcVar9 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (*(char *)((long)pppuVar2 + -0x1e1) < '\0') {
    pbVar6 = *(byte **)((long)pppuVar2 + -0x1f8);
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)pppuVar2 + -0xf8)) {
    return pbVar6;
  }
  ___stack_chk_fail();
  if (*(char *)((long)pppuVar2 + -0x1e1) < '\0') {
    __ZdlPv(*(undefined8 *)((long)pppuVar2 + -0x1f8));
  }
  __Unwind_Resume();
  uVar11 = (uint)puVar12;
  if ((char *)0x3 < pcVar9) {
    uVar7 = (ulong)pcVar9 >> 2;
    pbVar3 = pbVar6;
    do {
      uVar11 = (*(int *)pbVar3 * 0x16a88000 | (uint)(*(int *)pbVar3 * -0x3361d2af) >> 0x11) *
               0x1b873593 ^ (uint)puVar12;
      uVar11 = (uVar11 >> 0x13 | uVar11 << 0xd) * 5 + 0xe6546b64;
      puVar12 = (undefined1 *)(ulong)uVar11;
      uVar7 = uVar7 - 1;
      pbVar3 = pbVar3 + 4;
    } while (uVar7 != 0);
    pbVar6 = pbVar6 + ((ulong)pcVar9 & 0xfffffffffffffffc);
  }
  uVar13 = 0;
  uVar7 = (ulong)pcVar9 & 3;
  if (uVar7 != 1) {
    if (uVar7 != 2) {
      if (uVar7 != 3) goto LAB_00339464;
      uVar13 = (uint)pbVar6[2] << 0x10;
    }
    uVar13 = uVar13 | (uint)pbVar6[1] << 8;
  }
  uVar11 = ((uVar13 ^ *pbVar6) * 0x16a88000 | (uVar13 ^ *pbVar6) * -0x3361d2af >> 0x11) * 0x1b873593
           ^ uVar11;
LAB_00339464:
  uVar11 = uVar11 ^ (uint)pcVar9;
  uVar11 = (uVar11 ^ uVar11 >> 0x10) * -0x7a143595;
  uVar11 = (uVar11 ^ uVar11 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar11 ^ uVar11 >> 0x10);
}



/* Entry: 003d013c; end: 003d0147;  */

/* WARNING: Possible PIC construction at 0x003d01f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003d0414: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003d03e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003d04a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003d0508: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003d00cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x003d050c) */
/* WARNING: Removing unreachable block (ram,0x003d04a4) */
/* WARNING: Removing unreachable block (ram,0x003d0418) */
/* WARNING: Removing unreachable block (ram,0x003d01fc) */
/* WARNING: Removing unreachable block (ram,0x003d0244) */
/* WARNING: Removing unreachable block (ram,0x003d0270) */
/* WARNING: Removing unreachable block (ram,0x003d00d0) */
/* WARNING: Removing unreachable block (ram,0x003d00e0) */
/* WARNING: Removing unreachable block (ram,0x003d00f0) */
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

byte * FUN_003d013c(int param_1,byte *param_2,byte *param_3,byte *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  byte *pbVar8;
  char *pcVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint uVar14;
  byte *unaff_x19;
  byte *unaff_x20;
  long lVar15;
  byte *unaff_x21;
  byte *unaff_x22;
  byte *unaff_x23;
  undefined1 *unaff_x24;
  undefined1 *unaff_x29;
  undefined8 uVar16;
  undefined8 unaff_x30;
  char acStack_3d1 [785];
  undefined1 auStack_60 [48];
  
  if (param_1 == 0) {
    puVar2 = &stack0xffffffffffffffd0;
    puVar13 = &stack0xfffffffffffffff0;
    func_0x00339d8c(0xb5ead8);
    if (bRam0000000000b5eb78 != 1) {
      uRam0000000000b5ebb0 = 0;
      goto SUB_00339da8;
    }
    bRam0000000000b5eb78 = 0;
    pbVar5 = (byte *)0xb5eb18;
    uVar16 = 0x3d00d0;
  }
  else {
    func_0x00339d8c();
    if ((bRam0000000000b5eb78 & 1) == 0) {
      bRam0000000000b5eb78 = 1;
      unaff_x29 = &stack0xfffffffffffffff0;
      iRam0000000000b5eb80 = iRam0000000000b5eb80 + 1;
      iRam0000000000b5eb7c = iRam0000000000b5eb7c + 1;
      unaff_x30 = 0x3d01fc;
      register0x00000008 = (BADSPACEBASE *)auStack_60;
    }
SUB_00339da8:
    pbVar5 = (byte *)0xb5ead8;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    _pthread_mutex_unlock();
    if ((int)pbVar5 == 0) {
      return pbVar5;
    }
    func_0x00770db4();
    *(undefined1 **)((long)register0x00000008 + -0x20) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x18) = 0x339dc4;
    _pthread_mutex_trylock();
    if (((uint)pbVar5 | 0x10) == 0x10) {
      return (byte *)(ulong)((uint)pbVar5 == 0);
    }
    func_0x00770de8();
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x30) =
         (undefined1 *)((long)register0x00000008 + -0x20);
    *(code **)((long)register0x00000008 + -0x28) = FUN_00339df0;
    *(undefined8 *)((long)register0x00000008 + -0x48) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    pbVar6 = (byte *)((long)register0x00000008 + -0x58);
    _pthread_condattr_init();
    if ((int)pbVar6 == 0) {
      unaff_x19 = (byte *)((long)register0x00000008 + -0x58);
      pbVar6 = pbVar5;
      _pthread_cond_init();
      pbVar10 = param_4;
      if ((int)pbVar6 != 0) goto LAB_00339e5c;
      if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x48)) {
        return pbVar6;
      }
    }
    else {
      func_0x00770e50();
      unaff_x19 = param_2;
      pbVar10 = param_4;
LAB_00339e5c:
      func_0x00770e1c();
    }
    ___stack_chk_fail();
    *(undefined1 **)((long)register0x00000008 + -0x70) =
         (undefined1 *)((long)register0x00000008 + -0x30);
    *(code **)((long)register0x00000008 + -0x68) = FUN_00339e64;
    _pthread_cond_destroy();
    if ((int)pbVar6 == 0) {
      return pbVar6;
    }
    func_0x00770e84();
    *(byte **)((long)register0x00000008 + -0xa0) = unaff_x22;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x21;
    *(byte **)((long)register0x00000008 + -0x90) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x88) = pbVar5;
    *(undefined1 **)((long)register0x00000008 + -0x80) =
         (undefined1 *)((long)register0x00000008 + -0x70);
    *(code **)((long)register0x00000008 + -0x78) = FUN_00339e80;
    uVar7 = (ulong)pbVar10 >> 0x20;
    param_4 = unaff_x19;
    func_0x0033a068(uVar7);
    pbVar8 = param_3;
    FUN_00339fc4(param_3,pbVar10,uVar7);
    pbVar5 = pbVar6;
    param_2 = unaff_x19;
    if ((int)pbVar8 == 0) {
      _pthread_cond_wait();
      unaff_x21 = pbVar10;
    }
    else {
      FUN_0033a30c(param_3,pbVar10,1);
      uVar7 = (ulong)pbVar10 >> 0x20;
      param_4 = pbVar10;
      FUN_0033a598(uVar7);
      pbVar8 = param_3;
      pbVar11 = pbVar10;
      FUN_0033a01c(param_3,pbVar10,uVar7);
      *(byte **)((long)register0x00000008 + -0xb0) = pbVar8;
      *(long *)((long)register0x00000008 + -0xa8) = (long)(int)pbVar11;
      _pthread_cond_timedwait(pbVar6,unaff_x19,(undefined1 *)((long)register0x00000008 + -0xb0));
      unaff_x21 = param_3;
      param_3 = pbVar10;
    }
    if (((uint)pbVar5 < 0x3d) && ((1L << ((ulong)pbVar5 & 0x3f) & 0x1000000800000001U) != 0)) {
      return (byte *)(ulong)((uint)pbVar5 == 0x3c);
    }
    func_0x00770eb8();
    puVar2 = (undefined1 *)((long)register0x00000008 + -0xc0);
    puVar13 = (undefined1 *)((long)register0x00000008 + -0xc0);
    *(undefined1 **)((long)register0x00000008 + -0xc0) =
         (undefined1 *)((long)register0x00000008 + -0x80);
    *(code **)((long)register0x00000008 + -0xb8) = FUN_00339f68;
    _pthread_cond_signal();
    if ((int)pbVar5 == 0) {
      return pbVar5;
    }
    uVar16 = 0x339f84;
    func_0x00770eec();
    unaff_x20 = pbVar6;
    unaff_x22 = param_3;
  }
  *(undefined1 **)(puVar2 + -0x10) = puVar13;
  *(undefined8 *)(puVar2 + -8) = uVar16;
  _pthread_cond_broadcast();
  if ((int)pbVar5 == 0) {
    return pbVar5;
  }
  func_0x00770f20();
  *(undefined1 **)(puVar2 + -0x20) = puVar2 + -0x10;
  *(undefined8 *)(puVar2 + -0x18) = 0x339fa0;
  _pthread_once();
  if ((int)pbVar5 == 0) {
    return pbVar5;
  }
  func_0x00770f54();
  *(undefined1 **)(puVar2 + -0x60) = unaff_x24;
  *(byte **)(puVar2 + -0x58) = unaff_x23;
  *(byte **)(puVar2 + -0x50) = unaff_x22;
  *(byte **)(puVar2 + -0x48) = unaff_x21;
  *(byte **)(puVar2 + -0x40) = unaff_x20;
  *(byte **)(puVar2 + -0x38) = unaff_x19;
  *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x20;
  *(code **)(puVar2 + -0x28) = FUN_00339fbc;
  *(undefined8 *)(puVar2 + -0x68) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  pbVar6 = (byte *)((long)&MACH_HEADER.magic + 2);
  pbVar10 = param_2;
  FUN_00338e58();
  if ((int)pbVar6 != 0) {
    *(undefined1 **)(puVar2 + -0xb0) = puVar2 + -0x20;
    puVar13 = puVar2 + -0xa8;
    _vsnprintf(puVar13,0x40,param_4,puVar2 + -0x20);
    if ((int)(uint)puVar13 < 0) {
      unaff_x23 = (byte *)0x0;
      param_4 = (byte *)0x0;
    }
    else {
      unaff_x24 = puVar13;
      if ((uint)puVar13 < 0x40) {
        param_4 = (byte *)0x0;
        unaff_x23 = puVar2 + -0xa8;
      }
      else {
        param_4 = (byte *)(((ulong)puVar13 & 0xffffffff) + 1);
        FUN_00338c74();
        *(undefined1 **)(puVar2 + -0xb0) = puVar2 + -0x20;
        _vsnprintf();
        unaff_x23 = param_4;
      }
    }
    pbVar10 = param_2;
    FUN_00338e80(pbVar5,param_2,2,unaff_x23);
    pbVar6 = param_4;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar2 + -0x68)) {
    return pbVar6;
  }
  ___stack_chk_fail();
  *(undefined1 **)(puVar2 + -0xf0) = unaff_x24;
  *(byte **)(puVar2 + -0xe8) = unaff_x23;
  *(byte **)(puVar2 + -0xe0) = param_4;
  *(byte **)(puVar2 + -0xd8) = pbVar5;
  *(byte **)(puVar2 + -0xd0) = param_2;
  *(undefined8 *)(puVar2 + -200) = 2;
  *(undefined1 **)(puVar2 + -0xc0) = puVar2 + -0x30;
  *(code **)(puVar2 + -0xb8) = FUN_00339178;
  *(undefined8 *)(puVar2 + -0xf8) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  uVar16 = 1;
  FUN_0033a598();
  *(undefined8 *)(puVar2 + -0x1a8) = uVar16;
  lVar15 = *(long *)pbVar6;
  lVar3 = lVar15;
  _strrchr(lVar15,0x2f);
  if (lVar3 != 0) {
    lVar15 = lVar3 + 1;
  }
  puVar13 = puVar2 + -0x1a8;
  _localtime_r(puVar13,puVar2 + -0x1e0);
  if (puVar13 == (undefined1 *)0x0) {
    builtin_strncpy(puVar2 + -0x1a0,"error:localtime",0x10);
  }
  else {
    puVar13 = puVar2 + -0x1a0;
    _strftime(puVar13,0x40,"%m%d %H:%M:%S",puVar2 + -0x1e0);
    if (puVar13 == (undefined1 *)0x0) {
      builtin_strncpy(puVar2 + -0x1a0,"error:strftime",0xf);
    }
  }
  uVar4 = (ulong)*(uint *)(pbVar6 + 0xc);
  func_0x00338e1c();
  uVar7 = uVar4;
  _pthread_self();
  *(ulong *)(puVar2 + -0x158) = uVar4;
  *(undefined8 *)(puVar2 + -0x150) = 0x560e98;
  *(undefined1 **)(puVar2 + -0x148) = puVar2 + -0x1a0;
  *(undefined8 *)(puVar2 + -0x140) = 0x560e98;
  *(ulong *)(puVar2 + -0x138) = (ulong)pbVar10 & 0xffffffff;
  *(undefined8 *)(puVar2 + -0x130) = 0x5606ac;
  *(ulong *)(puVar2 + -0x128) = uVar7;
  *(code **)(puVar2 + -0x120) = FUN_00560738;
  *(long *)(puVar2 + -0x118) = lVar15;
  *(undefined8 *)(puVar2 + -0x110) = 0x560e98;
  *(ulong *)(puVar2 + -0x108) = (ulong)*(uint *)(pbVar6 + 8);
  *(undefined8 *)(puVar2 + -0x100) = 0x5606ac;
  puVar13 = puVar2 + -0x158;
  FUN_0056189c(puVar2 + -0x1f8,"%s%s.%09d %7ld %s:%d]",0x15,puVar13,6);
  uVar12 = *(uint *)(pbVar6 + 0xc);
  func_0x00338e6c();
  if (uVar12 == 0) {
    puVar2[-0x158] = 0;
    puVar2[-0x140] = 0;
LAB_00339300:
    pbVar5 = *(byte **)PTR____stderrp_00999f90;
    puVar1 = *(undefined1 **)(puVar2 + -0x1f8);
    if (-1 < (char)puVar2[-0x1e1]) {
      puVar1 = puVar2 + -0x1f8;
    }
    lVar15 = *(long *)(pbVar6 + 0x10);
    *(undefined1 **)(puVar2 + -0x210) = puVar1;
    *(long *)(puVar2 + -0x208) = lVar15;
    pcVar9 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(puVar2 + -0x158);
    if (puVar2[-0x140] == '\0') goto LAB_00339300;
    pbVar5 = *(byte **)PTR____stderrp_00999f90;
    puVar1 = *(undefined1 **)(puVar2 + -0x1f8);
    if (-1 < (char)puVar2[-0x1e1]) {
      puVar1 = puVar2 + -0x1f8;
    }
    *(long *)(puVar2 + -0x208) = *(long *)(pbVar6 + 0x10);
    *(undefined1 **)(puVar2 + -0x200) = puVar2 + -0x158;
    *(undefined1 **)(puVar2 + -0x210) = puVar1;
    pcVar9 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if ((char)puVar2[-0x1e1] < '\0') {
    pbVar5 = *(byte **)(puVar2 + -0x1f8);
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar2 + -0xf8)) {
    return pbVar5;
  }
  ___stack_chk_fail();
  if ((char)puVar2[-0x1e1] < '\0') {
    __ZdlPv(*(undefined8 *)(puVar2 + -0x1f8));
  }
  __Unwind_Resume();
  uVar12 = (uint)puVar13;
  if ((char *)0x3 < pcVar9) {
    uVar7 = (ulong)pcVar9 >> 2;
    pbVar6 = pbVar5;
    do {
      uVar12 = (*(int *)pbVar6 * 0x16a88000 | (uint)(*(int *)pbVar6 * -0x3361d2af) >> 0x11) *
               0x1b873593 ^ (uint)puVar13;
      uVar12 = (uVar12 >> 0x13 | uVar12 << 0xd) * 5 + 0xe6546b64;
      puVar13 = (undefined1 *)(ulong)uVar12;
      uVar7 = uVar7 - 1;
      pbVar6 = pbVar6 + 4;
    } while (uVar7 != 0);
    pbVar5 = pbVar5 + ((ulong)pcVar9 & 0xfffffffffffffffc);
  }
  uVar14 = 0;
  uVar7 = (ulong)pcVar9 & 3;
  if (uVar7 != 1) {
    if (uVar7 != 2) {
      if (uVar7 != 3) goto LAB_00339464;
      uVar14 = (uint)pbVar5[2] << 0x10;
    }
    uVar14 = uVar14 | (uint)pbVar5[1] << 8;
  }
  uVar12 = ((uVar14 ^ *pbVar5) * 0x16a88000 | (uVar14 ^ *pbVar5) * -0x3361d2af >> 0x11) * 0x1b873593
           ^ uVar12;
LAB_00339464:
  uVar12 = uVar12 ^ (uint)pcVar9;
  uVar12 = (uVar12 ^ uVar12 >> 0x10) * -0x7a143595;
  uVar12 = (uVar12 ^ uVar12 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar12 ^ uVar12 >> 0x10);
}



/* Entry: 003d0148; end: 003d01af;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_003d0148(undefined8 param_1,byte *param_2,undefined8 param_3,byte *param_4)

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
  
  pbVar7 = (byte *)0xb5ead8;
  func_0x00339d8c(0xb5ead8);
  uRam0000000000b5eba0 = 1;
  uRam0000000000b5eb90 = 0;
  uRam0000000000b5eb98 = 0x7fffffffffffffff;
  lRam0000000000b5eba8 = lRam0000000000b5eba8 + 1;
  FUN_00339f68(0xb5eb18);
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


