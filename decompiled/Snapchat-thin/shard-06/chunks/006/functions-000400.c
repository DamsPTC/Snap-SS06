/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104ac6254; end: 104ac679b;  */

/* WARNING: Possible PIC construction at 0x000104ac62bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104ac6828: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104ac68d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104ac6880: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104ac65ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104ac671c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104ac65b0) */
/* WARNING: Removing unreachable block (ram,0x000104ac6884) */
/* WARNING: Removing unreachable block (ram,0x000104ac68dc) */
/* WARNING: Removing unreachable block (ram,0x000104ac68e4) */
/* WARNING: Removing unreachable block (ram,0x000104ac68fc) */
/* WARNING: Removing unreachable block (ram,0x000104ac6900) */
/* WARNING: Removing unreachable block (ram,0x000104ac6908) */
/* WARNING: Removing unreachable block (ram,0x000104ac6920) */
/* WARNING: Removing unreachable block (ram,0x000104ac6930) */
/* WARNING: Removing unreachable block (ram,0x000104ac693c) */
/* WARNING: Removing unreachable block (ram,0x000104ac6910) */
/* WARNING: Removing unreachable block (ram,0x000104ac682c) */
/* WARNING: Removing unreachable block (ram,0x000104ac62c0) */
/* WARNING: Removing unreachable block (ram,0x000104ac6720) */

void FUN_104ac6254(uint *param_1,long *param_2)

{
  ulong *puVar1;
  undefined8 *****pppppuVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long *plVar7;
  int iVar8;
  uint *puVar9;
  double dVar10;
  uint *puVar11;
  char *****pppppcVar12;
  long *plVar13;
  long *plVar14;
  char *****pppppcVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  char *****pppppcVar20;
  ulong uVar21;
  ulong uVar22;
  code *unaff_x21;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 *****pppppuVar26;
  code *pcVar27;
  undefined1 auStack_250 [16];
  long lStack_240;
  long lStack_238;
  undefined8 ****ppppuStack_230;
  code *pcStack_228;
  long lStack_220;
  long lStack_218;
  undefined8 ****ppppuStack_210;
  code *pcStack_208;
  uint *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  long *plStack_1e0;
  long lStack_1d8;
  undefined8 ****ppppuStack_1d0;
  code *pcStack_1c8;
  char ****ppppcStack_1c0;
  undefined4 *puStack_1b8;
  undefined8 ****appppuStack_1b0 [2];
  char cStack_199;
  long alStack_198 [4];
  ulong uStack_178;
  long *plStack_170;
  ulong uStack_168;
  char ****ppppcStack_140;
  undefined8 uStack_138;
  char cStack_129;
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
  undefined4 auStack_90 [4];
  long lStack_80;
  
  pppppcVar15 = &ppppcStack_1c0;
  pppppuVar26 = (undefined8 *****)&stack0xfffffffffffffff0;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*param_2 == 0) {
    puStack_1b8 = auStack_90;
    do {
      while( true ) {
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        auStack_90[0] = 0x80;
        puVar9 = (uint *)(ulong)*param_1;
        FUN_104abfcb0(puVar9,&uStack_110,1,1);
        if ((int)puVar9 < 0) break;
        dVar10 = *(double *)(*(long *)(*(long *)(param_1 + 4) + 0xc0) + 8);
        func_0x000100746a20();
        if (dVar10 <= 0.9) {
          iVar8 = (int)&uStack_110;
          func_0x000104ac885c();
          if (iVar8 != 0) {
            uStack_a8 = 0;
            uStack_b0 = 0;
            uStack_98 = 0;
            uStack_a0 = 0;
            uStack_c8 = 0;
            uStack_d0 = 0;
            uStack_b8 = 0;
            uStack_c0 = 0;
            uStack_e8 = 0;
            uStack_f0 = 0;
            uStack_d8 = 0;
            uStack_e0 = 0;
            uStack_108 = 0;
            uStack_110 = 0;
            uStack_f8 = 0;
            uStack_100 = 0;
            auStack_90[0] = 0x80;
            puVar11 = puVar9;
            _getsockname(puVar9,&uStack_110,puStack_1b8);
            if ((int)puVar11 < 0) {
              ___error();
              pppppcVar15 = (char *****)(ulong)*puVar11;
              _strerror();
              ppppcStack_1c0 = (char ****)pppppcVar15;
              func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_posix.cc"
                                  ,0xf6,2,"Failed getsockname: %s");
              _close(puVar9);
              goto LAB_104ac6294;
            }
          }
          FUN_104abec20(&uStack_178,puVar9);
          if ((uStack_178 & 1) != 0) {
            func_0x00010084dad0();
          }
          FUN_104abf870(&ppppcStack_140,puVar9,2,*(undefined8 *)(*(long *)(param_1 + 4) + 0xb0));
          pppppcVar20 = (char *****)ppppcStack_140;
          pppppcVar12 = (char *****)*param_2;
          if ((char *****)ppppcStack_140 == pppppcVar12) {
LAB_104ac6444:
            if (((ulong)pppppcVar12 & 1) != 0) {
              func_0x00010084dad0();
            }
            pppppcVar20 = (char *****)*param_2;
          }
          else {
            *param_2 = (long)ppppcStack_140;
            ppppcStack_140 = (char ****)0x36;
            if (((ulong)pppppcVar12 & 1) != 0) {
              func_0x00010084dad0();
              pppppcVar12 = (char *****)ppppcStack_140;
              goto LAB_104ac6444;
            }
          }
          if (pppppcVar20 != (char *****)0x0) goto LAB_104ac6294;
          func_0x0001004d4034(alStack_198,&uStack_110);
          if (alStack_198[0] != 0) {
            func_0x00010ae77430(&ppppcStack_140,alStack_198,1);
            ppppcStack_1c0 = ppppcStack_140;
            if (-1 < cStack_129) {
              ppppcStack_1c0 = (char ****)&ppppcStack_140;
            }
            func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_posix.cc"
                                ,0x106,2,"Invalid address: %s");
            if (cStack_129 < '\0') {
              __ZdlPv(ppppcStack_140);
            }
            func_0x00010047c7d4(alStack_198);
            goto LAB_104ac6294;
          }
          ppppcStack_140 = (char ****)0x10f239ea1;
          uStack_138 = 0x16;
          plVar13 = alStack_198;
          func_0x0001004d5530();
          uStack_168 = plVar13[1];
          plStack_170 = (long *)*plVar13;
          if (-1 < (char)*(byte *)((long)plVar13 + 0x17)) {
            uStack_168 = (ulong)*(byte *)((long)plVar13 + 0x17);
            plStack_170 = plVar13;
          }
          func_0x00010047c83c(appppuStack_1b0,&ppppcStack_140,&plStack_170);
          pppppuVar2 = (undefined8 *****)appppuStack_1b0[0];
          if (-1 < cStack_199) {
            pppppuVar2 = appppuStack_1b0;
          }
          FUN_104abd67c(puVar9,pppppuVar2,1);
          lVar23 = *(long *)(param_1 + 4);
          puVar1 = (ulong *)(lVar23 + 0xa8);
          do {
            uVar21 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar21 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          uVar22 = (*(long **)(*(long *)(param_1 + 4) + 0xa0))[1] -
                   **(long **)(*(long *)(param_1 + 4) + 0xa0) >> 3;
          uVar6 = 0;
          if (uVar22 != 0) {
            uVar6 = uVar21 / uVar22;
          }
          uVar24 = *(undefined8 *)(**(long **)(lVar23 + 0xa0) + (uVar21 - uVar6 * uVar22) * 8);
          func_0x000104abd7d4(uVar24,puVar9);
          plVar14 = (long *)0x20;
          func_0x000100460200();
          lVar23 = *(long *)(param_1 + 4);
          *plVar14 = lVar23;
          plVar14[1] = *(long *)(param_1 + 0x28);
          *(undefined1 *)(plVar14 + 2) = 0;
          unaff_x21 = *(code **)(lVar23 + 8);
          uVar3 = *(undefined8 *)(lVar23 + 0x10);
          uVar25 = *(undefined8 *)(lVar23 + 0xb0);
          plVar13 = alStack_198;
          func_0x0001004d5530();
          uVar21 = plVar13[1];
          plVar7 = (long *)*plVar13;
          if (-1 < (char)*(byte *)((long)plVar13 + 0x17)) {
            uVar21 = (ulong)*(byte *)((long)plVar13 + 0x17);
            plVar7 = plVar13;
          }
          FUN_104ac1ba8(puVar9,uVar25,plVar7,uVar21);
          (*unaff_x21)(uVar3,puVar9,uVar24,plVar14);
          if (cStack_199 < '\0') {
            __ZdlPv(appppuStack_1b0[0]);
          }
          func_0x00010047c7d4(alStack_198);
        }
        else {
          do {
            pppppcVar20 = (char *****)((long)pppppcRam00000001136a20d8 + 1);
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(0x1136a20d8,0x10);
            if (bVar5) {
              cVar4 = ExclusiveMonitorsStatus();
              pppppcRam00000001136a20d8 = pppppcVar20;
            }
          } while (cVar4 != '\0');
          if ((long)pppppcVar20 % 1000 == 1) {
            ppppcStack_1c0 = (char ****)pppppcVar20;
            func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_posix.cc"
                                ,0xe6,1,
                                "Dropped >= %lld new connection attempts due to high memory pressure"
                               );
          }
          _close(puVar9);
        }
      }
      puVar11 = puVar9;
      ___error();
    } while (*puVar11 == 4);
    ___error();
    if (((*puVar11 == 0x23) || (___error(), *puVar11 == 0x35)) || (___error(), *puVar11 == 0x23)) {
      lVar23 = *(long *)(param_1 + 2);
      func_0x000104abd794(lVar23,param_1 + 0x2a);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
        return;
      }
      ___stack_chk_fail();
      if (cStack_129 < '\0') {
        __ZdlPv(ppppcStack_140);
      }
      func_0x00010047c7d4(alStack_198);
      lVar16 = lVar23;
      __Unwind_Resume();
      uStack_1f8 = 0x1136a20d8;
      uStack_1f0 = 0x80;
      pcStack_1c8 = FUN_104ac679c;
      lVar19 = lVar16 + 0x18;
      lVar17 = lVar19;
      puStack_200 = puVar9;
      pcStack_1e8 = unaff_x21;
      plStack_1e0 = param_2;
      lStack_1d8 = lVar23;
      ppppuStack_1d0 = pppppuVar26;
      func_0x000100460448();
      if (*(char *)(lVar16 + 0x68) == '\0') {
        func_0x00010bdac8f4();
        pcStack_208 = FUN_104ac6848;
        lVar23 = lVar17 + 0x18;
        lVar18 = lVar23;
        lStack_220 = lVar19;
        lStack_218 = lVar16;
        ppppuStack_210 = &ppppuStack_1d0;
        func_0x000100460448();
        uVar21 = *(long *)(lVar17 + 0x60) + 1;
        *(ulong *)(lVar17 + 0x60) = uVar21;
        lVar19 = lVar23;
        if (uVar21 == *(uint *)(lVar17 + 0x80)) {
          pppppcVar15 = (char *****)&lStack_220;
          pppppuVar26 = &ppppuStack_210;
          pcVar27 = (code *)0x104ac6884;
        }
        else if (uVar21 < *(uint *)(lVar17 + 0x80)) {
          pppppcVar15 = (char *****)&puStack_200;
          pppppuVar26 = (undefined8 *****)ppppuStack_210;
          pcVar27 = pcStack_208;
        }
        else {
          func_0x00010bdac928();
          pcStack_228 = FUN_104ac68ac;
          lVar19 = lVar18 + 0x18;
          lVar16 = lVar19;
          lStack_240 = lVar17;
          lStack_238 = lVar23;
          ppppuStack_230 = &ppppuStack_210;
          func_0x000100460448(lVar19);
          if (*(char *)(lVar18 + 0x68) == '\0') {
            func_0x00010bdac95c();
            FUN_104bd46a0();
            func_0x0001004bdf74(auStack_250);
            __Unwind_Resume(lVar16);
            return;
          }
          pppppcVar15 = (char *****)auStack_250;
          pppppuVar26 = &ppppuStack_230;
          pcVar27 = (code *)0x104ac68dc;
        }
      }
      else {
        lVar23 = *(long *)(lVar16 + 0x70);
        if (lVar23 == 0) {
          pppppcVar15 = (char *****)&puStack_200;
          pppppuVar26 = &ppppuStack_1d0;
          pcVar27 = (code *)0x104ac682c;
        }
        else {
          do {
            FUN_104ac886c(lVar23 + 0x18);
            *(code **)(lVar23 + 0xd0) = FUN_104ac6848;
            *(long *)(lVar23 + 0xd8) = lVar16;
            *(undefined8 *)(lVar23 + 0xe0) = 0;
            func_0x000104abd6fc(*(undefined8 *)(lVar23 + 8),lVar23 + 200,0,"tcp_listener_shutdown");
            lVar23 = *(long *)(lVar23 + 0xe8);
            pppppuVar26 = (undefined8 *****)ppppuStack_1d0;
            pcVar27 = pcStack_1c8;
          } while (lVar23 != 0);
        }
      }
    }
    else {
      puVar9 = (uint *)(*(long *)(param_1 + 4) + 0x18);
      func_0x000100460448();
      lVar19 = *(long *)(param_1 + 4);
      if (*(char *)(lVar19 + 0x69) == '\0') {
        ___error();
        pppppcVar15 = (char *****)(ulong)*puVar9;
        _strerror();
        ppppcStack_1c0 = (char ****)pppppcVar15;
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_posix.cc"
                            ,0xd8,2,"Failed accept4: %s");
        lVar19 = *(long *)(param_1 + 4);
      }
      lVar19 = lVar19 + 0x18;
      pcVar27 = (code *)0x104ac6720;
      pppppcVar15 = &ppppcStack_1c0;
    }
  }
  else {
LAB_104ac6294:
    func_0x000100460448(*(long *)(param_1 + 4) + 0x18);
    lVar19 = *(long *)(param_1 + 4);
    lVar23 = *(long *)(lVar19 + 0x58) + -1;
    *(long *)(lVar19 + 0x58) = lVar23;
    if ((lVar23 == 0) && (*(char *)(lVar19 + 0x68) != '\0')) {
      lVar19 = lVar19 + 0x18;
      pcVar27 = (code *)0x104ac65b0;
      pppppcVar15 = &ppppcStack_1c0;
    }
    else {
      pppppcVar15 = &ppppcStack_1c0;
      lVar19 = lVar19 + 0x18;
      pcVar27 = (code *)0x104ac62c0;
    }
  }
  iVar8 = (int)lVar19;
  *(undefined8 ******)((long)pppppcVar15 + -0x10) = pppppuVar26;
  *(code **)((long)pppppcVar15 + -8) = pcVar27;
  func_0x000107c61268();
  if (iVar8 != 0) {
    func_0x000107c2c138();
                    /* WARNING: Could not recover jumptable at 0x000100466ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puRam00000001136a2078)();
    return;
  }
  return;
}



/* Entry: 104ac679c; end: 104ac6847;  */

/* WARNING: Possible PIC construction at 0x000104ac6828: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104ac68d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104ac6880: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104ac68dc) */
/* WARNING: Removing unreachable block (ram,0x000104ac68e4) */
/* WARNING: Removing unreachable block (ram,0x000104ac68fc) */
/* WARNING: Removing unreachable block (ram,0x000104ac6900) */
/* WARNING: Removing unreachable block (ram,0x000104ac6908) */
/* WARNING: Removing unreachable block (ram,0x000104ac6920) */
/* WARNING: Removing unreachable block (ram,0x000104ac6930) */
/* WARNING: Removing unreachable block (ram,0x000104ac693c) */
/* WARNING: Removing unreachable block (ram,0x000104ac6910) */
/* WARNING: Removing unreachable block (ram,0x000104ac682c) */
/* WARNING: Removing unreachable block (ram,0x000104ac6884) */

void FUN_104ac679c(long param_1)

{
  undefined8 ****ppppuVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****unaff_x29;
  code *unaff_x30;
  undefined1 auStack_90 [16];
  long lStack_80;
  long lStack_78;
  undefined8 ***pppuStack_70;
  code *pcStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 ***pppuStack_50;
  code *pcStack_48;
  long lVar5;
  
  ppppuVar9 = (undefined8 ****)&stack0xfffffffffffffff0;
  lVar5 = param_1 + 0x18;
  lVar8 = lVar5;
  func_0x000100460448();
  if (*(char *)(param_1 + 0x68) == '\0') {
    func_0x00010bdac8f4();
    pcStack_48 = FUN_104ac6848;
    ppppuVar1 = &pppuStack_50;
    lVar2 = lVar8 + 0x18;
    lVar6 = lVar2;
    lStack_60 = lVar5;
    lStack_58 = param_1;
    pppuStack_50 = ppppuVar9;
    func_0x000100460448();
    uVar3 = *(long *)(lVar8 + 0x60) + 1;
    *(ulong *)(lVar8 + 0x60) = uVar3;
    lVar5 = lVar2;
    if (uVar3 == *(uint *)(lVar8 + 0x80)) {
      register0x00000008 = (BADSPACEBASE *)&lStack_60;
      ppppuVar9 = ppppuVar1;
      unaff_x30 = (code *)0x104ac6884;
    }
    else if (uVar3 < *(uint *)(lVar8 + 0x80)) {
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
      ppppuVar9 = (undefined8 ****)pppuStack_50;
      unaff_x30 = pcStack_48;
    }
    else {
      func_0x00010bdac928();
      pcStack_68 = FUN_104ac68ac;
      ppppuVar9 = &pppuStack_70;
      lVar5 = lVar6 + 0x18;
      lVar7 = lVar5;
      lStack_80 = lVar8;
      lStack_78 = lVar2;
      pppuStack_70 = ppppuVar1;
      func_0x000100460448(lVar5);
      if (*(char *)(lVar6 + 0x68) == '\0') {
        func_0x00010bdac95c();
        FUN_104bd46a0();
        func_0x0001004bdf74(auStack_90);
        __Unwind_Resume(lVar7);
        return;
      }
      register0x00000008 = (BADSPACEBASE *)auStack_90;
      unaff_x30 = (code *)0x104ac68dc;
    }
  }
  else {
    lVar8 = *(long *)(param_1 + 0x70);
    if (lVar8 == 0) {
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
      unaff_x30 = (code *)0x104ac682c;
    }
    else {
      do {
        FUN_104ac886c(lVar8 + 0x18);
        *(code **)(lVar8 + 0xd0) = FUN_104ac6848;
        *(long *)(lVar8 + 0xd8) = param_1;
        *(undefined8 *)(lVar8 + 0xe0) = 0;
        func_0x000104abd6fc(*(undefined8 *)(lVar8 + 8),lVar8 + 200,0,"tcp_listener_shutdown");
        lVar8 = *(long *)(lVar8 + 0xe8);
        ppppuVar9 = unaff_x29;
      } while (lVar8 != 0);
    }
  }
  iVar4 = (int)lVar5;
  *(undefined8 *****)((long)register0x00000008 + -0x10) = ppppuVar9;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x000107c61268();
  if (iVar4 != 0) {
    func_0x000107c2c138();
                    /* WARNING: Could not recover jumptable at 0x000100466ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puRam00000001136a2078)();
    return;
  }
  return;
}



/* Entry: 104ac6848; end: 104ac68ab;  */

/* WARNING: Possible PIC construction at 0x000104ac6880: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104ac68d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104ac6884) */
/* WARNING: Removing unreachable block (ram,0x000104ac68dc) */
/* WARNING: Removing unreachable block (ram,0x000104ac68e4) */
/* WARNING: Removing unreachable block (ram,0x000104ac68fc) */
/* WARNING: Removing unreachable block (ram,0x000104ac6900) */
/* WARNING: Removing unreachable block (ram,0x000104ac6908) */
/* WARNING: Removing unreachable block (ram,0x000104ac6920) */
/* WARNING: Removing unreachable block (ram,0x000104ac6930) */
/* WARNING: Removing unreachable block (ram,0x000104ac693c) */
/* WARNING: Removing unreachable block (ram,0x000104ac6910) */

void FUN_104ac6848(long param_1)

{
  undefined8 ****ppppuVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  long lVar6;
  long lVar7;
  undefined8 ****unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_50 [16];
  long lStack_40;
  long lStack_38;
  undefined8 ***pppuStack_30;
  code *pcStack_28;
  long lVar5;
  
  ppppuVar1 = (undefined8 ****)&stack0xfffffffffffffff0;
  lVar5 = param_1 + 0x18;
  lVar6 = lVar5;
  func_0x000100460448();
  uVar2 = *(long *)(param_1 + 0x60) + 1;
  *(ulong *)(param_1 + 0x60) = uVar2;
  if (uVar2 == *(uint *)(param_1 + 0x80)) {
    unaff_x30 = 0x104ac6884;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x29 = ppppuVar1;
  }
  else if (*(uint *)(param_1 + 0x80) <= uVar2) {
    func_0x00010bdac928();
    pcStack_28 = FUN_104ac68ac;
    unaff_x29 = &pppuStack_30;
    lVar3 = lVar6 + 0x18;
    lVar7 = lVar3;
    lStack_40 = param_1;
    lStack_38 = lVar5;
    pppuStack_30 = ppppuVar1;
    func_0x000100460448(lVar3);
    if (*(char *)(lVar6 + 0x68) == '\0') {
      func_0x00010bdac95c();
      FUN_104bd46a0();
      func_0x0001004bdf74(auStack_50);
      __Unwind_Resume(lVar7);
      return;
    }
    unaff_x30 = 0x104ac68dc;
    register0x00000008 = (BADSPACEBASE *)auStack_50;
    lVar5 = lVar3;
  }
  iVar4 = (int)lVar5;
  *(undefined8 *****)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  func_0x000107c61268();
  if (iVar4 != 0) {
    func_0x000107c2c138();
                    /* WARNING: Could not recover jumptable at 0x000100466ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puRam00000001136a2078)();
    return;
  }
  return;
}



/* Entry: 104ac68ac; end: 104ac6977;  */

void FUN_104ac68ac(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uStack_30;
  undefined1 uStack_21;
  
  lVar1 = param_1 + 0x18;
  lVar2 = lVar1;
  func_0x000100460448(lVar1);
  if (*(char *)(param_1 + 0x68) != '\0') {
    func_0x000100466b80(lVar1);
    if (*(long *)(param_1 + 0x98) != 0) {
      uStack_30 = 0;
      func_0x0001004bd7e8(&uStack_21,*(long *)(param_1 + 0x98),&uStack_30);
      if ((uStack_30 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    func_0x0001005a5f48(lVar1);
    while (*(long *)(param_1 + 0x70) != 0) {
      *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(*(long *)(param_1 + 0x70) + 0xe8);
      func_0x000100460314();
    }
    func_0x00010048650c(*(undefined8 *)(param_1 + 0xb0));
    if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
    }
    FUN_104a91938(param_1 + 0xc0);
    __ZdlPv(param_1);
    return;
  }
  func_0x00010bdac95c();
  FUN_104bd46a0();
  func_0x0001004bdf74(&uStack_30);
  __Unwind_Resume(lVar2);
  return;
}



/* Entry: 104ac6978; end: 104ac697f;  */

void FUN_104ac6978(void)

{
  return;
}



/* Entry: 104ac6980; end: 104ac6ca3;  */

/* WARNING: Possible PIC construction at 0x000104ac6a64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104ac6aa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104ac6a68) */
/* WARNING: Removing unreachable block (ram,0x000104ac6a70) */
/* WARNING: Removing unreachable block (ram,0x000104ac6aa4) */

undefined1  [16] FUN_104ac6980(code *param_1,undefined8 param_2,uint *param_3,char ***param_4)

{
  ulong *puVar1;
  undefined8 ***pppuVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  char ***pppcVar10;
  char *pcVar11;
  uint *puVar12;
  uint *puVar13;
  char *pcVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long *unaff_x24;
  code *pcVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  long alStack_258 [8];
  long lStack_218;
  long *plStack_210;
  undefined8 *puStack_208;
  uint *puStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  char **ppcStack_1e8;
  undefined1 *puStack_1e0;
  code *pcStack_1d8;
  char **ppcStack_1d0;
  undefined8 **appuStack_1c8 [2];
  char cStack_1b1;
  long alStack_1b0 [4];
  ulong uStack_190;
  char *apcStack_188 [9];
  long *plStack_140;
  ulong uStack_138;
  char **ppcStack_110;
  undefined8 uStack_108;
  char cStack_f9;
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
  undefined4 auStack_60 [2];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar18 = &uStack_e0;
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
  auStack_60[0] = 0x80;
  func_0x000100460de4(apcStack_188);
  puVar13 = param_3;
  _getpeername(param_3,&uStack_e0,auStack_60);
  if ((int)puVar13 < 0) {
    ___error();
    pppcVar10 = (char ***)(ulong)*puVar13;
    _strerror();
    pcVar11 = 
    "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_posix.cc"
    ;
    pcVar14 = "Failed getpeername: %s";
    puVar13 = (uint *)0x263;
    pcVar19 = (code *)0x104ac6aa4;
    ppcStack_1d0 = (char **)pppcVar10;
  }
  else {
    FUN_104abec20(&uStack_190,param_3);
    if ((uStack_190 & 1) != 0) {
      func_0x00010084dad0();
    }
    func_0x0001004d4034(alStack_1b0,&uStack_e0);
    if (alStack_1b0[0] == 0) {
      ppcStack_110 = (char **)0x10f239ea1;
      uStack_108 = 0x16;
      plVar7 = alStack_1b0;
      func_0x0001004d5530();
      uStack_138 = plVar7[1];
      plStack_140 = (long *)*plVar7;
      if (-1 < (char)*(byte *)((long)plVar7 + 0x17)) {
        uStack_138 = (ulong)*(byte *)((long)plVar7 + 0x17);
        plStack_140 = plVar7;
      }
      func_0x00010047c83c(appuStack_1c8,&ppcStack_110,&plStack_140);
      pppuVar2 = (undefined8 ***)appuStack_1c8[0];
      if (-1 < cStack_1b1) {
        pppuVar2 = appuStack_1c8;
      }
      FUN_104abd67c(param_3,pppuVar2,1);
      lVar8 = *(long *)(param_1 + 8);
      puVar1 = (ulong *)(lVar8 + 0xa8);
      do {
        uVar16 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      uVar17 = (*(long **)(*(long *)(param_1 + 8) + 0xa0))[1] -
               **(long **)(*(long *)(param_1 + 8) + 0xa0) >> 3;
      uVar6 = 0;
      if (uVar17 != 0) {
        uVar6 = uVar16 / uVar17;
      }
      puVar18 = *(undefined8 **)(**(long **)(lVar8 + 0xa0) + (uVar16 - uVar6 * uVar17) * 8);
      func_0x000104abd7d4(puVar18,param_3);
      unaff_x24 = (long *)0x20;
      func_0x000100460200();
      lVar8 = *(long *)(param_1 + 8);
      *unaff_x24 = lVar8;
      unaff_x24[1] = -1;
      *(char *)(unaff_x24 + 2) = '\x01';
      *(int *)((long)unaff_x24 + 0x14) = (int)param_2;
      unaff_x24[3] = (long)param_4;
      param_1 = *(code **)(lVar8 + 8);
      uVar3 = *(undefined8 *)(lVar8 + 0x10);
      param_2 = *(undefined8 *)(lVar8 + 0xb0);
      plVar7 = alStack_1b0;
      func_0x0001004d5530();
      uVar16 = plVar7[1];
      plVar9 = (long *)*plVar7;
      if (-1 < (char)*(byte *)((long)plVar7 + 0x17)) {
        uVar16 = (ulong)*(byte *)((long)plVar7 + 0x17);
        plVar9 = plVar7;
      }
      puVar13 = param_3;
      FUN_104ac1ba8(param_3,param_2,plVar9,uVar16);
      pcVar14 = (char *)unaff_x24;
      (*param_1)(uVar3,puVar13,puVar18,unaff_x24);
      if (cStack_1b1 < '\0') {
        __ZdlPv(appuStack_1c8[0]);
      }
      func_0x00010047c7d4(alStack_1b0);
      param_4 = (char ***)apcStack_188;
      func_0x000100467a48();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
        auVar23._8_8_ = puVar13;
        auVar23._0_8_ = param_4;
        return auVar23;
      }
      ___stack_chk_fail();
      if ((int)puVar13 != 0) {
        FUN_104bd46a0();
        if (cStack_f9 < '\0') {
          __ZdlPv(ppcStack_110);
        }
        func_0x00010047c7d4(alStack_1b0);
        func_0x000100467a48(apcStack_188);
      }
      pcVar19 = FUN_104ac6ca4;
      pcVar11 = (char *)param_4;
      __Unwind_Resume(param_4);
    }
    else {
      param_4 = &ppcStack_110;
      func_0x00010ae77430(&ppcStack_110,alStack_1b0,1);
      ppcStack_1d0 = ppcStack_110;
      if (-1 < cStack_f9) {
        ppcStack_1d0 = (char **)param_4;
      }
      pcVar11 = 
      "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_posix.cc"
      ;
      pcVar14 = "Invalid address: %s";
      puVar13 = (uint *)0x26a;
      pcVar19 = (code *)0x104ac6a68;
    }
  }
  lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = (long *)0x2;
  puVar12 = puVar13;
  plStack_210 = unaff_x24;
  puStack_208 = puVar18;
  puStack_200 = param_3;
  pcStack_1f8 = param_1;
  uStack_1f0 = param_2;
  ppcStack_1e8 = (char **)param_4;
  puStack_1e0 = &stack0xfffffffffffffff0;
  pcStack_1d8 = pcVar19;
  func_0x0001004686b8();
  if ((int)plVar7 != 0) {
    plVar7 = alStack_258;
    func_0x000107c616d0(plVar7,0x40,pcVar14,&ppcStack_1d0);
    if ((int)(uint)plVar7 < 0) {
      plVar9 = (long *)0x0;
      plVar7 = (long *)0x0;
    }
    else if ((uint)plVar7 < 0x40) {
      plVar7 = (long *)0x0;
      plVar9 = alStack_258;
    }
    else {
      plVar7 = (long *)(((ulong)plVar7 & 0xffffffff) + 1);
      func_0x000100460200();
      func_0x000107c616d0();
      plVar9 = plVar7;
    }
    FUN_104a6e9e0(pcVar11,puVar13,2,plVar9);
    func_0x000100460314();
    puVar12 = puVar13;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_218) {
    func_0x000107c60e78();
    if ((ulong)puVar12 >> 0x3d != 0) {
      FUN_104a7757c();
      lVar8 = plVar7[1];
      lVar15 = plVar7[2];
      while (lVar15 != lVar8) {
        plVar7[2] = lVar15 + -8;
        plVar9 = *(long **)(lVar15 + -8);
        *(undefined8 *)(lVar15 + -8) = 0;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))();
        }
        lVar15 = plVar7[2];
      }
      if (*plVar7 != 0) {
        func_0x000107c60e14();
      }
      auVar22._8_8_ = puVar12;
      auVar22._0_8_ = plVar7;
      return auVar22;
    }
    lVar8 = (long)puVar12 << 3;
    func_0x000107c60e20(lVar8);
    auVar21._8_8_ = puVar12;
    auVar21._0_8_ = lVar8;
    return auVar21;
  }
  auVar20._8_8_ = puVar12;
  auVar20._0_8_ = plVar7;
  return auVar20;
}



/* Entry: 104ac6ca4; end: 104ac6cab;  */

undefined1  [16]
FUN_104ac6ca4(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long alStack_88 [8];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)0x2;
  uVar4 = param_2;
  func_0x0001004686b8();
  if ((int)plVar1 != 0) {
    plVar1 = alStack_88;
    func_0x000107c616d0(plVar1,0x40,param_4,&stack0x00000000);
    if ((int)(uint)plVar1 < 0) {
      plVar3 = (long *)0x0;
      plVar1 = (long *)0x0;
    }
    else if ((uint)plVar1 < 0x40) {
      plVar1 = (long *)0x0;
      plVar3 = alStack_88;
    }
    else {
      plVar1 = (long *)(((ulong)plVar1 & 0xffffffff) + 1);
      func_0x000100460200();
      func_0x000107c616d0();
      plVar3 = plVar1;
    }
    FUN_104a6e9e0(param_1,param_2,2,plVar3);
    func_0x000100460314();
    uVar4 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar6._8_8_ = uVar4;
    auVar6._0_8_ = plVar1;
    return auVar6;
  }
  func_0x000107c60e78();
  if (uVar4 >> 0x3d == 0) {
    lVar2 = uVar4 << 3;
    func_0x000107c60e20(lVar2);
    auVar7._8_8_ = uVar4;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
  FUN_104a7757c();
  lVar2 = plVar1[1];
  lVar5 = plVar1[2];
  while (lVar5 != lVar2) {
    plVar1[2] = lVar5 + -8;
    plVar3 = *(long **)(lVar5 + -8);
    *(undefined8 *)(lVar5 + -8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    lVar5 = plVar1[2];
  }
  if (*plVar1 != 0) {
    func_0x000107c60e14();
  }
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = plVar1;
  return auVar8;
}



/* Entry: 104ac6cac; end: 104ac70c3;  */

/* WARNING: Removing unreachable block (ram,0x000104ac6e08) */

long ******
FUN_104ac6cac(ulong *param_1,long ****param_2,long ******param_3,undefined8 param_4,
             undefined8 param_5,long ******param_6,long ******param_7,undefined8 param_8,
             undefined8 param_9)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  long ******pppppplVar5;
  long ******pppppplVar6;
  undefined1 *puVar7;
  long ******pppppplVar8;
  char *pcVar9;
  long **pplVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  long ******pppppplVar13;
  undefined8 uVar14;
  long ******pppppplVar15;
  long ******pppppplVar16;
  char *pcVar17;
  long ****pppplVar18;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  long *extraout_x8_01;
  int *piVar19;
  ulong uVar20;
  uint uVar21;
  long *plVar22;
  long *****ppppplVar23;
  int iVar24;
  long ****unaff_x26;
  ulong uVar25;
  ulong uVar26;
  long *****unaff_x27;
  ulong unaff_x28;
  long *****ppppplVar27;
  long *****ppppplVar28;
  long *****ppppplVar29;
  long *****ppppplVar30;
  long *****ppppplVar31;
  long *****ppppplVar32;
  long *****ppppplVar33;
  char *pcVar34;
  undefined8 ******ppppppuVar35;
  long ***ppplStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  long *****ppppplStack_5a0;
  ulong uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined1 uStack_571;
  long *****ppppplStack_570;
  ulong uStack_568;
  byte bStack_559;
  ulong uStack_558;
  long ****pppplStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  long *****ppppplStack_538;
  undefined8 *****apppppuStack_530 [2];
  char cStack_519;
  long ****pppplStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  ulong uStack_500;
  undefined1 auStack_4f4 [4];
  long lStack_4f0;
  long ***ppplStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  long *****ppppplStack_4d0;
  long *plStack_4c8;
  undefined8 *puStack_4c0;
  long *****ppppplStack_4b8;
  long ****pppplStack_4b0;
  long *****ppppplStack_488;
  ulong uStack_480;
  ulong uStack_478;
  long ****apppplStack_458 [16];
  int aiStack_3d8 [2];
  long lStack_3d0;
  ulong uStack_3c0;
  long ****pppplStack_3b8;
  long ***ppplStack_3b0;
  long *****ppppplStack_3a8;
  long ***ppplStack_3a0;
  long *****ppppplStack_398;
  long *****ppppplStack_390;
  long ****pppplStack_388;
  long *****ppppplStack_380;
  long *****ppppplStack_378;
  undefined1 **ppuStack_370;
  code *pcStack_368;
  long *****ppppplStack_360;
  char *pcStack_350;
  long ****apppplStack_348 [8];
  long lStack_308;
  long *****ppppplStack_300;
  long *****ppppplStack_2f8;
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
  long *****ppppplStack_2a0;
  long *****ppppplStack_298;
  undefined1 auStack_28c [128];
  undefined4 uStack_20c;
  long lStack_208;
  long ***ppplStack_200;
  long *****ppppplStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long *****ppppplStack_1e0;
  long *****ppppplStack_1d8;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  char *pcStack_1c0;
  long *****ppppplStack_1b0;
  uint uStack_1a4;
  long *****appppplStack_1a0 [2];
  char cStack_189;
  undefined1 uStack_181;
  long ***appplStack_180 [4];
  ulong uStack_160;
  uint uStack_158;
  long ****apppplStack_154 [16];
  long ****pppplStack_d0;
  long ***ppplStack_c8;
  undefined8 uStack_c0;
  long *****ppppplStack_a0;
  long *****ppppplStack_98;
  byte bStack_89;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar23 = (long *****)&uStack_1a4;
  pppppplVar13 = (long ******)0x1;
  pppppplVar15 = (long ******)0x0;
  pppppplVar16 = param_3;
  pcVar17 = (char *)param_6;
  FUN_104abf9a4(&ppppplStack_1b0);
  if ((long ******)ppppplStack_1b0 == (long ******)0x0) {
    if (*(int *)param_6 == 1) {
      pppppplVar15 = param_3;
      func_0x0001004d3fb0(param_3,apppplStack_154);
      if ((int)pppppplVar15 != 0) {
        param_3 = (long ******)apppplStack_154;
      }
    }
    param_6 = (long ******)(ulong)uStack_1a4;
    *param_7 = (long *****)0x0;
    uStack_158 = 0xffffffff;
    pcVar17 = (char *)(ulong)*(byte *)((long)param_2 + 0x6a);
    ppppplVar23 = (long *****)&uStack_158;
    pppppplVar13 = param_6;
    pppppplVar15 = param_3;
    FUN_104ac70c4(&uStack_160,param_2);
    uVar21 = uStack_158;
    if (uStack_160 == 0) {
      unaff_x28 = (ulong)uStack_158;
      if ((int)uStack_158 < 1) {
        pcStack_1c0 = "port > 0";
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_common.cc"
                            ,0x5e,2,"assertion failed: %s");
        _abort();
        goto LAB_104ac7028;
      }
      func_0x0001004d466c(appplStack_180,param_3,1);
      if ((long ****)appplStack_180[0] == (long ****)0x0) {
        ppppplStack_a0 = (long *****)0x10f23a10d;
        ppppplStack_98 = (long *****)0x14;
        ppppplVar27 = (long *****)appplStack_180;
        func_0x0001004d5530();
        ppplStack_c8 = (long ***)ppppplVar27[1];
        pppplStack_d0 = *ppppplVar27;
        if (-1 < (char)*(byte *)((long)ppppplVar27 + 0x17)) {
          ppplStack_c8 = (long ***)(ulong)*(byte *)((long)ppppplVar27 + 0x17);
          pppplStack_d0 = (long ****)ppppplVar27;
        }
        func_0x00010047c83c(appppplStack_1a0,&ppppplStack_a0,&pppplStack_d0);
        unaff_x26 = param_2 + 3;
        func_0x000100460448(unaff_x26);
        *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
        if (param_2[1] != (long ***)0x0) {
          pcStack_1c0 = "!s->on_accept_cb && \"must add ports before starting server\"";
          func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_common.cc"
                              ,0x66,2,"assertion failed: %s");
          _abort();
LAB_104ac7028:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x104ac702c);
          (*pcVar4)();
        }
        unaff_x27 = (long *****)0x100;
        func_0x000100460200();
        unaff_x27[0x1d] = (long ****)0x0;
        pppplVar18 = param_2 + 0xe;
        if (*pppplVar18 != (long ***)0x0) {
          pppplVar18 = (long ****)(param_2[0xf] + 0x1d);
        }
        *pppplVar18 = (long ***)unaff_x27;
        param_2[0xf] = (long ***)unaff_x27;
        unaff_x27[2] = param_2;
        *(uint *)unaff_x27 = uStack_1a4;
        pppppplVar13 = (long ******)appppplStack_1a0[0];
        if (-1 < cStack_189) {
          pppppplVar13 = appppplStack_1a0;
        }
        pppppplVar15 = (long ******)0x1;
        pppppplVar16 = param_6;
        FUN_104abd67c();
        unaff_x27[1] = (long ****)pppppplVar16;
        ppppplVar27 = *param_3;
        unaff_x27[4] = (long ****)param_3[1];
        unaff_x27[3] = (long ****)ppppplVar27;
        ppppplVar28 = param_3[3];
        ppppplVar27 = param_3[2];
        ppppplVar30 = param_3[5];
        ppppplVar29 = param_3[4];
        ppppplVar32 = param_3[7];
        ppppplVar31 = param_3[6];
        ppppplVar33 = param_3[8];
        unaff_x27[0xc] = (long ****)param_3[9];
        unaff_x27[0xb] = (long ****)ppppplVar33;
        unaff_x27[10] = (long ****)ppppplVar32;
        unaff_x27[9] = (long ****)ppppplVar31;
        unaff_x27[8] = (long ****)ppppplVar30;
        unaff_x27[7] = (long ****)ppppplVar29;
        unaff_x27[6] = (long ****)ppppplVar28;
        unaff_x27[5] = (long ****)ppppplVar27;
        ppppplVar28 = param_3[0xb];
        ppppplVar27 = param_3[10];
        ppppplVar30 = param_3[0xd];
        ppppplVar29 = param_3[0xc];
        ppppplVar31 = param_3[0xe];
        uVar12 = *(undefined4 *)(param_3 + 0x10);
        unaff_x27[0x12] = (long ****)param_3[0xf];
        unaff_x27[0x11] = (long ****)ppppplVar31;
        unaff_x27[0x10] = (long ****)ppppplVar30;
        unaff_x27[0xf] = (long ****)ppppplVar29;
        unaff_x27[0xe] = (long ****)ppppplVar28;
        unaff_x27[0xd] = (long ****)ppppplVar27;
        *(undefined4 *)(unaff_x27 + 0x13) = uVar12;
        *(uint *)((long)unaff_x27 + 0x9c) = uVar21;
        *(int *)(unaff_x27 + 0x14) = (int)param_4;
        *(int *)((long)unaff_x27 + 0xa4) = (int)param_5;
        *(undefined4 *)(unaff_x27 + 0x1f) = 0;
        unaff_x27[0x1e] = (long ****)0x0;
        if (pppppplVar16 == (long ******)0x0) {
          pcStack_1c0 = "sp->emfd";
          func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_common.cc"
                              ,0x79,2,"assertion failed: %s");
          _abort();
          goto LAB_104ac7028;
        }
        func_0x000100466b80(unaff_x26);
        *param_7 = unaff_x27;
        *param_1 = uStack_160;
        uStack_160 = 0x36;
        if (cStack_189 < '\0') {
          __ZdlPv(appppplStack_1a0[0]);
        }
      }
      else {
        func_0x00010ae77430(&ppppplStack_a0,appplStack_180,1);
        pppppplVar15 = (long ******)ppppplStack_98;
        pppppplVar13 = (long ******)ppppplStack_a0;
        if (-1 < (char)bStack_89) {
          pppppplVar15 = (long ******)(ulong)bStack_89;
          pppppplVar13 = &ppppplStack_a0;
        }
        ppplStack_c8 = (long ***)0x0;
        uStack_c0 = 0;
        pppplStack_d0 = (long ****)0x0;
        param_7 = (long ******)&pppplStack_d0;
        pcVar17 = &uStack_181;
        ppppplVar23 = &pppplStack_d0;
        FUN_104ab5920(param_1,2);
        appppplStack_1a0[0] = (long *****)param_7;
        func_0x000100482b64(appppplStack_1a0);
      }
      func_0x00010047c7d4(appplStack_180);
      if ((uStack_160 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    else {
      *param_1 = uStack_160;
    }
    pppppplVar16 = (long ******)ppppplStack_1b0;
    if (((ulong)ppppplStack_1b0 & 1) != 0) {
      func_0x00010084dad0();
      pppppplVar16 = (long ******)ppppplStack_1b0;
    }
  }
  else {
    *param_1 = (ulong)ppppplStack_1b0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return pppppplVar16;
  }
  ___stack_chk_fail();
  if ((int)pppppplVar13 != 0) {
    FUN_104bd46a0();
    func_0x0001004bdf74(&ppppplStack_1b0);
  }
  pppppplVar5 = pppppplVar16;
  __Unwind_Resume();
  pcStack_1c8 = FUN_104ac70c4;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplStack_298 = (long *****)0x0;
  ppplStack_200 = (long ***)param_2;
  ppppplStack_1f8 = (long *****)param_3;
  uStack_1f0 = param_4;
  uStack_1e8 = param_5;
  ppppplStack_1e0 = (long *****)param_7;
  ppppplStack_1d8 = (long *****)pppppplVar16;
  puStack_1d0 = &stack0xfffffffffffffff0;
  if ((int)pppppplVar13 < 0) {
    pcStack_2d0 = "fd >= 0";
    uVar14 = 0x9d;
    goto LAB_104ac7550;
  }
  if (((int)pcVar17 == 0) ||
     (pppppplVar16 = pppppplVar15, func_0x000104ac885c(), (int)pppppplVar16 != 0)) {
LAB_104ac7118:
    FUN_104abeae8(&ppppplStack_2a0,pppppplVar13,1);
    ppppplVar28 = ppppplStack_298;
    ppppplVar27 = ppppplStack_2a0;
    pppppplVar16 = (long ******)ppppplStack_298;
    if (ppppplStack_2a0 == ppppplStack_298) {
LAB_104ac7148:
      if (((ulong)pppppplVar16 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    else {
      ppppplStack_2a0 = (long *****)0x36;
      ppppplStack_298 = ppppplVar27;
      if (((ulong)ppppplVar28 & 1) != 0) {
        func_0x00010084dad0();
        pppppplVar16 = (long ******)ppppplStack_2a0;
        goto LAB_104ac7148;
      }
    }
    if ((long ******)ppppplStack_298 != (long ******)0x0) goto LAB_104ac72d4;
    FUN_104abedcc(&ppppplStack_2a0,pppppplVar13,1);
    ppppplVar28 = ppppplStack_298;
    ppppplVar27 = ppppplStack_2a0;
    pppppplVar16 = (long ******)ppppplStack_298;
    if (ppppplStack_2a0 == ppppplStack_298) {
LAB_104ac7188:
      if (((ulong)pppppplVar16 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    else {
      ppppplStack_2a0 = (long *****)0x36;
      ppppplStack_298 = ppppplVar27;
      if (((ulong)ppppplVar28 & 1) != 0) {
        func_0x00010084dad0();
        pppppplVar16 = (long ******)ppppplStack_2a0;
        goto LAB_104ac7188;
      }
    }
    if ((long ******)ppppplStack_298 != (long ******)0x0) goto LAB_104ac72d4;
    pppppplVar16 = pppppplVar15;
    func_0x000104ac885c();
    if ((int)pppppplVar16 == 0) {
      FUN_104abf380(&ppppplStack_2a0,pppppplVar13,1);
      ppppplVar28 = ppppplStack_298;
      ppppplVar27 = ppppplStack_2a0;
      pppppplVar16 = (long ******)ppppplStack_298;
      if (ppppplStack_2a0 == ppppplStack_298) {
LAB_104ac738c:
        if (((ulong)pppppplVar16 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      else {
        ppppplStack_2a0 = (long *****)0x36;
        ppppplStack_298 = ppppplVar27;
        if (((ulong)ppppplVar28 & 1) != 0) {
          func_0x00010084dad0();
          pppppplVar16 = (long ******)ppppplStack_2a0;
          goto LAB_104ac738c;
        }
      }
      if ((long ******)ppppplStack_298 != (long ******)0x0) goto LAB_104ac72d4;
      FUN_104abef08(&ppppplStack_2a0,pppppplVar13,1);
      ppppplVar28 = ppppplStack_298;
      ppppplVar27 = ppppplStack_2a0;
      pppppplVar16 = (long ******)ppppplStack_298;
      if (ppppplStack_2a0 == ppppplStack_298) {
LAB_104ac73cc:
        if (((ulong)pppppplVar16 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      else {
        ppppplStack_2a0 = (long *****)0x36;
        ppppplStack_298 = ppppplVar27;
        if (((ulong)ppppplVar28 & 1) != 0) {
          func_0x00010084dad0();
          pppppplVar16 = (long ******)ppppplStack_2a0;
          goto LAB_104ac73cc;
        }
      }
      if ((long ******)ppppplStack_298 != (long ******)0x0) goto LAB_104ac72d4;
      FUN_104abf528(&ppppplStack_2a0,pppppplVar13,pppppplVar5[0x16],0);
      ppppplVar28 = ppppplStack_298;
      ppppplVar27 = ppppplStack_2a0;
      pppppplVar16 = (long ******)ppppplStack_298;
      if (ppppplStack_2a0 == ppppplStack_298) {
LAB_104ac7410:
        if (((ulong)pppppplVar16 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      else {
        ppppplStack_2a0 = (long *****)0x36;
        ppppplStack_298 = ppppplVar27;
        if (((ulong)ppppplVar28 & 1) != 0) {
          func_0x00010084dad0();
          pppppplVar16 = (long ******)ppppplStack_2a0;
          goto LAB_104ac7410;
        }
      }
      if ((long ******)ppppplStack_298 != (long ******)0x0) goto LAB_104ac72d4;
    }
    FUN_104abec20(&ppppplStack_2a0,pppppplVar13);
    ppppplVar28 = ppppplStack_298;
    ppppplVar27 = ppppplStack_2a0;
    pppppplVar16 = (long ******)ppppplStack_298;
    if (ppppplStack_2a0 == ppppplStack_298) {
LAB_104ac71d0:
      if (((ulong)pppppplVar16 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    else {
      ppppplStack_2a0 = (long *****)0x36;
      ppppplStack_298 = ppppplVar27;
      if (((ulong)ppppplVar28 & 1) != 0) {
        func_0x00010084dad0();
        pppppplVar16 = (long ******)ppppplStack_2a0;
        goto LAB_104ac71d0;
      }
    }
    if ((long ******)ppppplStack_298 != (long ******)0x0) goto LAB_104ac72d4;
    FUN_104abf870(&ppppplStack_2a0,pppppplVar13,1,pppppplVar5[0x16]);
    ppppplVar28 = ppppplStack_298;
    ppppplVar27 = ppppplStack_2a0;
    pppppplVar16 = (long ******)ppppplStack_298;
    if (ppppplStack_2a0 == ppppplStack_298) {
LAB_104ac7214:
      if (((ulong)pppppplVar16 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    else {
      ppppplStack_2a0 = (long *****)0x36;
      ppppplStack_298 = ppppplVar27;
      if (((ulong)ppppplVar28 & 1) != 0) {
        func_0x00010084dad0();
        pppppplVar16 = (long ******)ppppplStack_2a0;
        goto LAB_104ac7214;
      }
    }
    if ((long ******)ppppplStack_298 != (long ******)0x0) goto LAB_104ac72d4;
    pppppplVar16 = pppppplVar13;
    _bind(pppppplVar13,pppppplVar15,*(undefined4 *)(pppppplVar15 + 0x10));
    if ((int)pppppplVar16 < 0) {
      ___error();
      FUN_104aba954(auStack_2a8,&uStack_2a9,*(int *)pppppplVar16,&UNK_10f663e6b);
      FUN_104ac767c(&ppppplStack_2a0,auStack_2a8);
      ppppplVar27 = ppppplStack_298;
      if (ppppplStack_2a0 != ppppplStack_298) {
        ppppplStack_298 = ppppplStack_2a0;
        ppppplStack_2a0 = (long *****)0x36;
        if (((ulong)ppppplVar27 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      func_0x0001004bdf74(&ppppplStack_2a0);
      puVar7 = auStack_2a8;
LAB_104ac7528:
      func_0x0001004bdf74(puVar7);
      if ((long ******)ppppplStack_298 == (long ******)0x0) {
        pcStack_2d0 = "!GRPC_ERROR_IS_NONE(err)";
        uVar14 = 0xd7;
LAB_104ac7550:
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_common.cc"
                            ,uVar14,2,"assertion failed: %s");
        _abort();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x104ac7574);
        (*pcVar4)();
      }
      goto LAB_104ac72d4;
    }
    func_0x00010045fe6c(0x1130a6358,FUN_104ac76a4);
    pppppplVar16 = pppppplVar13;
    _listen(pppppplVar13,uRam00000001136a20e0);
    if ((int)pppppplVar16 < 0) {
      ___error();
      FUN_104aba954(auStack_2b8,&uStack_2a9,*(int *)pppppplVar16,"listen");
      FUN_104ac767c(&ppppplStack_2a0,auStack_2b8);
      ppppplVar27 = ppppplStack_298;
      if (ppppplStack_2a0 != ppppplStack_298) {
        ppppplStack_298 = ppppplStack_2a0;
        ppppplStack_2a0 = (long *****)0x36;
        if (((ulong)ppppplVar27 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      func_0x0001004bdf74(&ppppplStack_2a0);
      puVar7 = auStack_2b8;
      goto LAB_104ac7528;
    }
    pppppplVar16 = (long ******)&uStack_20c;
    uStack_20c = 0x80;
    pppppplVar6 = pppppplVar13;
    _getsockname(pppppplVar13,auStack_28c);
    if ((int)pppppplVar6 < 0) {
      ___error();
      FUN_104aba954(auStack_2c0,&uStack_2a9,*(int *)pppppplVar6,"getsockname");
      FUN_104ac767c(&ppppplStack_2a0,auStack_2c0);
      ppppplVar27 = ppppplStack_298;
      if (ppppplStack_2a0 != ppppplStack_298) {
        ppppplStack_298 = ppppplStack_2a0;
        ppppplStack_2a0 = (long *****)0x36;
        if (((ulong)ppppplVar27 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      func_0x0001004bdf74(&ppppplStack_2a0);
      puVar7 = auStack_2c0;
      goto LAB_104ac7528;
    }
    uVar21 = (uint)auStack_28c;
    func_0x0001004df104();
    *(uint *)ppppplVar23 = uVar21;
    *extraout_x8 = 0;
  }
  else {
    FUN_104abf0b0(&ppppplStack_2a0,pppppplVar13,1);
    ppppplVar28 = ppppplStack_298;
    ppppplVar27 = ppppplStack_2a0;
    pppppplVar16 = (long ******)ppppplStack_298;
    if (ppppplStack_2a0 == ppppplStack_298) {
LAB_104ac72c4:
      if (((ulong)pppppplVar16 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    else {
      ppppplStack_2a0 = (long *****)0x36;
      ppppplStack_298 = ppppplVar27;
      if (((ulong)ppppplVar28 & 1) != 0) {
        func_0x00010084dad0();
        pppppplVar16 = (long ******)ppppplStack_2a0;
        goto LAB_104ac72c4;
      }
    }
    if ((long ******)ppppplStack_298 == (long ******)0x0) goto LAB_104ac7118;
LAB_104ac72d4:
    _close(pppppplVar13);
    pcVar17 = (char *)&ppppplStack_2a0;
    FUN_104aba878(&uStack_2c8,2,"Unable to configure socket",0x1a,pcVar17,1,&ppppplStack_298);
    pppppplVar16 = (long ******)((ulong)pppppplVar13 & 0xffffffff);
    FUN_104abaa50(extraout_x8,&uStack_2c8,10);
    if ((uStack_2c8 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  pppppplVar6 = (long ******)ppppplStack_298;
  if (((ulong)ppppplStack_298 & 1) != 0) {
    func_0x00010084dad0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return pppppplVar6;
  }
  ___stack_chk_fail();
  func_0x0001004bdf74(&ppppplStack_2a0);
  func_0x0001004bdf74(auStack_2c0);
  func_0x0001004bdf74(&ppppplStack_298);
  pppppplVar8 = pppppplVar6;
  __Unwind_Resume();
  puStack_2f0 = (undefined1 *)&ppuStack_2e0;
  pcStack_2d8 = FUN_104ac767c;
  if (*pppppplVar8 != (long *****)0x0) {
    *extraout_x8_00 = *pppppplVar8;
    *pppppplVar8 = (long *****)0x36;
    return pppppplVar8;
  }
  ppuStack_2e0 = &puStack_1d0;
  func_0x00010bdac990();
  pcStack_2e8 = FUN_104ac76a4;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = "/proc/sys/net/core/somaxconn";
  uVar12 = 0xf2849a6;
  ppppplStack_300 = (long *****)pppppplVar13;
  ppppplStack_2f8 = (long *****)pppppplVar6;
  _fopen();
  ppppplStack_378 = (long *****)pppppplVar6;
  if ((long ******)pcVar9 == (long ******)0x0) {
LAB_104ac7770:
    uRam00000001136a20e0 = 0x80;
  }
  else {
    ppppplVar27 = apppplStack_348;
    uVar12 = 0x40;
    pppppplVar16 = (long ******)pcVar9;
    _fgets();
    ppppplStack_378 = (long *****)pcVar9;
    if (ppppplVar27 == (long *****)0x0) {
LAB_104ac7768:
      _fclose();
      goto LAB_104ac7770;
    }
    pppppplVar6 = (long ******)apppplStack_348;
    uVar12 = SUB84(&pcStack_350,0);
    pppppplVar16 = (long ******)0xa;
    _strtol();
    if ((((char *)0x7ffffffe < (char *)((long)pppppplVar6 + -1)) || (pcStack_350 == (char *)0x0)) ||
       (*pcStack_350 != '\n')) goto LAB_104ac7768;
    _fclose();
    uRam00000001136a20e0 = (uint)pppppplVar6;
    pppppplVar13 = pppppplVar6;
    if (uRam00000001136a20e0 < 100) {
      pcVar9 = 
      "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_common.cc"
      ;
      pcVar17 = "Suspiciously small accept queue (%d) will probably lead to connection drops";
      uVar12 = 0x47;
      pppppplVar16 = (long ******)0x1;
      ppppplStack_360 = (long *****)pppppplVar6;
      func_0x0001004686cc();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return (long ******)pcVar9;
  }
  ___stack_chk_fail();
  pcStack_368 = FUN_104ac77a8;
  lStack_3d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplStack_4d0 = (long *****)0x0;
  plStack_4c8 = (long *)0x0;
  uStack_3c0 = unaff_x28;
  pppplStack_3b8 = (long ****)unaff_x27;
  ppplStack_3b0 = (long ***)unaff_x26;
  ppppplStack_3a8 = (long *****)param_6;
  ppplStack_3a0 = (long ***)param_2;
  ppppplStack_398 = (long *****)pppppplVar5;
  ppppplStack_390 = (long *****)pppppplVar15;
  pppplStack_388 = (long ****)ppppplVar23;
  ppppplStack_380 = (long *****)pppppplVar13;
  ppuStack_370 = &puStack_2f0;
  if ((int)pppppplVar16 == 0) {
    func_0x000104aa9a0c(0,apppplStack_458);
    FUN_104abf9a4(&ppppplStack_538,apppplStack_458,1,0,&puStack_4c0,&uStack_500);
    if ((long ******)ppppplStack_538 == (long ******)0x0) {
      if ((int)puStack_4c0 == 1) {
        func_0x000104aa99b0(0,apppplStack_458);
      }
      puVar11 = (undefined4 *)(uStack_500 & 0xffffffff);
      _bind(puVar11,apppplStack_458,aiStack_3d8[0]);
      if ((int)puVar11 != 0) {
        ___error();
        FUN_104aba954(&ppppplStack_4b8,&uStack_558,*puVar11,&UNK_10f663e6b);
        ppppplVar27 = ppppplStack_4b8;
        ppppplVar23 = ppppplStack_538;
        if ((long ******)ppppplStack_4b8 == (long ******)0x0) {
          func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                              ,0xd5,2,"assertion failed: %s");
          _abort();
          goto LAB_104ac80d0;
        }
        ppppplStack_488 = ppppplStack_4b8;
        ppppplStack_4b8 = (long *****)0x36;
        if (ppppplVar27 == ppppplStack_538) {
          if (((ulong)ppppplVar27 & 1) != 0) {
            func_0x00010084dad0();
          }
        }
        else {
          ppppplStack_538 = ppppplVar27;
          ppppplStack_488 = (long *****)0x36;
          if (((ulong)ppppplVar23 & 1) != 0) {
            func_0x00010084dad0(ppppplVar23);
          }
        }
        if (((ulong)ppppplStack_4b8 & 1) != 0) {
          func_0x00010084dad0();
        }
        _close(uStack_500 & 0xffffffff);
        goto LAB_104ac7e88;
      }
      puVar11 = (undefined4 *)(uStack_500 & 0xffffffff);
      _getsockname(puVar11,apppplStack_458,aiStack_3d8);
      if ((int)puVar11 != 0) {
        ___error();
        FUN_104aba954(&ppppplStack_4b8,&uStack_558,*puVar11,"getsockname");
        ppppplVar27 = ppppplStack_4b8;
        ppppplVar23 = ppppplStack_538;
        if ((long ******)ppppplStack_4b8 == (long ******)0x0) {
          func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                              ,0xd5,2,"assertion failed: %s");
          _abort();
          goto LAB_104ac80d0;
        }
        ppppplStack_488 = ppppplStack_4b8;
        ppppplStack_4b8 = (long *****)0x36;
        if (ppppplVar27 == ppppplStack_538) {
          if (((ulong)ppppplVar27 & 1) != 0) {
            func_0x00010084dad0();
          }
        }
        else {
          ppppplStack_538 = ppppplVar27;
          ppppplStack_488 = (long *****)0x36;
          if (((ulong)ppppplVar23 & 1) != 0) {
            func_0x00010084dad0(ppppplVar23);
          }
        }
        if (((ulong)ppppplStack_4b8 & 1) != 0) {
          func_0x00010084dad0();
        }
        _close(uStack_500 & 0xffffffff);
        goto LAB_104ac7e88;
      }
      _close(uStack_500 & 0xffffffff);
      pppppplVar16 = (long ******)apppplStack_458;
      func_0x0001004df104();
      if ((int)pppppplVar16 < 1) {
        ppppplStack_488 = (long *****)0x0;
        uStack_480 = 0;
        uStack_478 = 0;
        FUN_104ab5920(&ppppplStack_570,2,"Bad port",8,&uStack_558,&ppppplStack_488);
        ppppplStack_4b8 = (long *****)&ppppplStack_488;
        func_0x000100482b64(&ppppplStack_4b8);
      }
      else {
        ppppplStack_570 = (long *****)0x0;
      }
      if (((ulong)ppppplStack_538 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    else {
LAB_104ac7e88:
      pppppplVar16 = (long ******)0x0;
      ppppplStack_570 = ppppplStack_538;
    }
    ppppplVar23 = ppppplStack_4d0;
    if (ppppplStack_570 != ppppplStack_4d0) {
      ppppplStack_4d0 = ppppplStack_570;
      ppppplStack_570 = (long *****)0x36;
      if (((ulong)ppppplVar23 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    apppplStack_458[0] = (long ****)0x0;
    if ((long ******)ppppplStack_4d0 == (long ******)0x0) {
      uVar21 = 0;
    }
    else {
      pppppplVar15 = &ppppplStack_4d0;
      func_0x00010ae7711c(pppppplVar15,apppplStack_458);
      uVar21 = (uint)pppppplVar15 ^ 1;
      if (((ulong)apppplStack_458[0] & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    if (((ulong)ppppplStack_570 & 1) != 0) {
      func_0x00010084dad0();
    }
    if (uVar21 != 0) {
      *extraout_x8_01 = (long)ppppplStack_4d0;
LAB_104ac7f04:
      ppppplStack_4d0 = (long *****)0x36;
      goto LAB_104ac7f74;
    }
    if ((int)pppppplVar16 < 1) {
      uStack_4e0 = 0;
      uStack_4d8 = 0;
      ppplStack_4e8 = (long ***)0x0;
      ppppplVar23 = (long *****)&ppplStack_4e8;
      FUN_104ab5920(extraout_x8_01,2,"Bad get_unused_port()",0x15,&ppppplStack_488,&ppplStack_4e8);
LAB_104ac7f68:
      apppplStack_458[0] = (long ****)ppppplVar23;
      func_0x000100482b64(apppplStack_458);
      goto LAB_104ac7f74;
    }
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_ifaddrs.cc"
                        ,0x6f,0,"Picked unused port %d");
  }
  pplVar10 = &plStack_4c8;
  _getifaddrs();
  if (((int)pplVar10 == 0) && (plStack_4c8 != (long *)0x0)) {
    iVar24 = 0;
    plVar22 = plStack_4c8;
    uVar25 = 0;
LAB_104ac782c:
    uStack_500 = 0;
    pcVar34 = "<unknown>";
    if ((char *)plVar22[1] != (char *)0x0) {
      pcVar34 = (char *)plVar22[1];
    }
    uVar26 = uVar25;
    if (plVar22[3] == 0) goto LAB_104ac7a3c;
    cVar1 = *(char *)(plVar22[3] + 1);
    if (cVar1 == '\x02') {
      aiStack_3d8[0] = 0x10;
    }
    else {
      if (cVar1 != '\x1e') goto LAB_104ac7a3c;
      aiStack_3d8[0] = 0x1c;
    }
    _memcpy(apppplStack_458);
    ppppplVar23 = apppplStack_458;
    func_0x000104aa9a68(ppppplVar23,pppppplVar16);
    if ((int)ppppplVar23 == 0) {
      uStack_510 = 0;
      uStack_508 = 0;
      pppplStack_518 = (long ****)0x0;
      FUN_104ab5920(&ppppplStack_4b8,2,"Failed to set port",0x12,&ppppplStack_538,&pppplStack_518);
      ppppplVar23 = ppppplStack_4d0;
      pppppplVar15 = (long ******)ppppplStack_4d0;
      if (ppppplStack_4b8 == ppppplStack_4d0) {
LAB_104ac7b74:
        if (((ulong)pppppplVar15 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      else {
        ppppplStack_4d0 = ppppplStack_4b8;
        ppppplStack_4b8 = (long *****)0x36;
        if (((ulong)ppppplVar23 & 1) != 0) {
          func_0x00010084dad0();
          pppppplVar15 = (long ******)ppppplStack_4b8;
          goto LAB_104ac7b74;
        }
      }
      ppppplStack_488 = &pppplStack_518;
      func_0x000100482b64(&ppppplStack_488);
    }
    else {
      func_0x0001004d466c(&ppppplStack_538,apppplStack_458,0);
      if ((long ******)ppppplStack_538 != (long ******)0x0) {
        func_0x00010ae77430(&ppppplStack_488,&ppppplStack_538,1);
        uVar25 = uStack_480;
        pppppplVar15 = (long ******)ppppplStack_488;
        if (-1 < (long)uStack_478) {
          uVar25 = uStack_478 >> 0x38;
          pppppplVar15 = &ppppplStack_488;
        }
        uStack_548 = 0;
        uStack_540 = 0;
        pppplStack_550 = (long ****)0x0;
        FUN_104ab5920(extraout_x8_01,2,pppppplVar15,uVar25,&ppppplStack_570,&pppplStack_550);
        ppppplStack_4b8 = &pppplStack_550;
        func_0x000100482b64(&ppppplStack_4b8);
        if ((long)uStack_478 < 0) {
          __ZdlPv(ppppplStack_488);
        }
        func_0x00010047c7d4(&ppppplStack_538);
        goto LAB_104ac7f74;
      }
      ppppppuVar35 = (undefined8 ******)apppppuStack_530[0];
      if (-1 < cStack_519) {
        ppppppuVar35 = apppppuStack_530;
      }
      uVar20 = (ulong)*(uint *)(plVar22 + 2);
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_ifaddrs.cc"
                          ,0x8c,0,"Adding local addr from interface %s flags 0x%x to server: %s");
      func_0x000100460448((long ******)((long)pcVar9 + 0x18));
      iVar3 = aiStack_3d8[0];
      for (ppppplVar23 = *(long ******)((long)pcVar9 + 0x70); ppppplVar23 != (long *****)0x0;
          ppppplVar23 = (long *****)ppppplVar23[0x1d]) {
        if (*(int *)(ppppplVar23 + 0x13) == iVar3) {
          ppppplVar27 = ppppplVar23 + 3;
          _memcmp(ppppplVar27,apppplStack_458,iVar3);
          if ((int)ppppplVar27 == 0) break;
        }
      }
      func_0x000100466b80((long ******)((long)pcVar9 + 0x18));
      if (ppppplVar23 != (long *****)0x0) {
        if ((long ******)ppppplStack_538 == (long ******)0x0) {
          func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_ifaddrs.cc"
                              ,0x92,0,"Skipping duplicate addr %s on interface %s");
LAB_104ac7a34:
          func_0x00010047c7d4(&ppppplStack_538);
          goto LAB_104ac7a3c;
        }
        func_0x00010ae77c74(&ppppplStack_538);
        goto LAB_104ac80d0;
      }
      FUN_104ac6cac(&ppppplStack_488,pcVar9,apppplStack_458,uVar12,iVar24,auStack_4f4,&uStack_500,
                    param_8,param_9,pcVar34,uVar20,ppppppuVar35);
      ppppplVar23 = ppppplStack_4d0;
      if (ppppplStack_488 != ppppplStack_4d0) {
        ppppplStack_4d0 = ppppplStack_488;
        ppppplStack_488 = (long *****)0x36;
        if (((ulong)ppppplVar23 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      ppppplStack_4b8 = (long *****)0x0;
      if ((long ******)ppppplStack_4d0 == (long ******)0x0) {
        uVar21 = 0;
      }
      else {
        pppppplVar15 = &ppppplStack_4d0;
        func_0x00010ae7711c(pppppplVar15,&ppppplStack_4b8);
        uVar21 = (uint)pppppplVar15 ^ 1;
        if (((ulong)ppppplStack_4b8 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      if (((ulong)ppppplStack_488 & 1) != 0) {
        func_0x00010084dad0();
      }
      if (uVar21 == 0) {
        if ((int)pppppplVar16 == *(int *)(uStack_500 + 0x9c)) {
          iVar24 = iVar24 + 1;
          uVar26 = uStack_500;
          if (uVar25 != 0) {
            *(undefined4 *)(uStack_500 + 0xf8) = 1;
            *(ulong *)(uVar25 + 0xf0) = uStack_500;
          }
          goto LAB_104ac7a34;
        }
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_ifaddrs.cc"
                            ,0x9d,2,"assertion failed: %s");
        _abort();
        goto LAB_104ac80d0;
      }
      ppppplStack_488 = (long *****)0x10f23a2e8;
      uStack_480 = 0x18;
      pppppplVar15 = &ppppplStack_538;
      func_0x0001004d5530();
      pppplStack_4b0 = (long ****)pppppplVar15[1];
      ppppplStack_4b8 = *pppppplVar15;
      if (-1 < (char)*(byte *)((long)pppppplVar15 + 0x17)) {
        pppplStack_4b0 = (long ****)(ulong)*(byte *)((long)pppppplVar15 + 0x17);
        ppppplStack_4b8 = (long *****)pppppplVar15;
      }
      func_0x00010047c83c(&ppppplStack_570,&ppppplStack_488,&ppppplStack_4b8);
      pppppplVar15 = (long ******)ppppplStack_570;
      if (-1 < (char)bStack_559) {
        uStack_568 = (ulong)bStack_559;
        pppppplVar15 = &ppppplStack_570;
      }
      uStack_588 = 0;
      uStack_580 = 0;
      uStack_590 = 0;
      FUN_104ab5920(&uStack_558,2,pppppplVar15,uStack_568,&uStack_571,&uStack_590);
      puStack_4c0 = &uStack_590;
      func_0x000100482b64(&puStack_4c0);
      if ((char)bStack_559 < '\0') {
        __ZdlPv(ppppplStack_570);
      }
      uStack_598 = uStack_558;
      if ((uStack_558 & 1) != 0) {
        piVar19 = (int *)(uStack_558 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar19,0x10);
          if (bVar2) {
            *piVar19 = *piVar19 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      ppppplStack_5a0 = ppppplStack_4d0;
      if (((ulong)ppppplStack_4d0 & 1) != 0) {
        piVar19 = (int *)((long)ppppplStack_4d0 + -1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar19,0x10);
          if (bVar2) {
            *piVar19 = *piVar19 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      func_0x0001008306c4(&ppppplStack_488,&uStack_598,&ppppplStack_5a0);
      ppppplVar23 = ppppplStack_4d0;
      pppppplVar15 = (long ******)ppppplStack_4d0;
      if (ppppplStack_488 == ppppplStack_4d0) {
LAB_104ac7da4:
        if (((ulong)pppppplVar15 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      else {
        ppppplStack_4d0 = ppppplStack_488;
        ppppplStack_488 = (long *****)0x36;
        if (((ulong)ppppplVar23 & 1) != 0) {
          func_0x00010084dad0();
          pppppplVar15 = (long ******)ppppplStack_488;
          goto LAB_104ac7da4;
        }
      }
      if (((ulong)ppppplStack_5a0 & 1) != 0) {
        func_0x00010084dad0();
      }
      if ((uStack_598 & 1) != 0) {
        func_0x00010084dad0();
      }
      if ((uStack_558 & 1) != 0) {
        func_0x00010084dad0();
      }
      func_0x00010047c7d4(&ppppplStack_538);
    }
    goto LAB_104ac7dd8;
  }
  ___error();
  FUN_104aba954(&lStack_4f0,apppplStack_458,*(undefined4 *)pplVar10,"getifaddrs");
  if (lStack_4f0 == 0) {
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                        ,0xd5,2,"assertion failed: %s");
    _abort();
LAB_104ac80d0:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x104ac80d4);
    (*pcVar4)();
  }
  *extraout_x8_01 = lStack_4f0;
  lStack_4f0 = 0x36;
LAB_104ac7f74:
  pppppplVar15 = (long ******)ppppplStack_4d0;
  if (((ulong)ppppplStack_4d0 & 1) != 0) {
    func_0x00010084dad0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3d0) {
    ___stack_chk_fail();
    func_0x0001004bdf74(&ppppplStack_488);
    func_0x0001004bdf74(&ppppplStack_5a0);
    func_0x0001004bdf74(&uStack_598);
    func_0x0001004bdf74(&uStack_558);
    func_0x00010047c7d4(&ppppplStack_538);
    func_0x0001004bdf74(&ppppplStack_4d0);
    __Unwind_Resume(pppppplVar15);
    return (long ******)0x1;
  }
  return pppppplVar15;
LAB_104ac7a3c:
  plVar22 = (long *)*plVar22;
  uVar25 = uVar26;
  if (plVar22 == (long *)0x0) {
LAB_104ac7dd8:
    _freeifaddrs(plStack_4c8);
    if ((long ******)ppppplStack_4d0 == (long ******)0x0) {
      if (uVar26 != 0) {
        *(int *)pcVar17 = *(int *)(uVar26 + 0x9c);
        *extraout_x8_01 = 0;
        goto LAB_104ac7f74;
      }
      uStack_5b0 = 0;
      uStack_5a8 = 0;
      ppplStack_5b8 = (long ***)0x0;
      ppppplVar23 = (long *****)&ppplStack_5b8;
      FUN_104ab5920(2,"No local addresses",0x12,&ppppplStack_488,&ppplStack_5b8);
      goto LAB_104ac7f68;
    }
    *extraout_x8_01 = (long)ppppplStack_4d0;
    goto LAB_104ac7f04;
  }
  goto LAB_104ac782c;
}



/* Entry: 104ac70c4; end: 104ac767b;  */

long *****
FUN_104ac70c4(undefined8 *param_1,long param_2,undefined4 *param_3,long param_4,char *param_5,
             undefined4 *param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  long lVar5;
  long *****ppppplVar6;
  long *****ppppplVar7;
  char *pcVar8;
  undefined1 *puVar9;
  long **pplVar10;
  long ****pppplVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  long *****ppppplVar15;
  long *extraout_x8;
  long *extraout_x8_00;
  int *piVar16;
  ulong uVar17;
  uint uVar18;
  long *plVar19;
  long ****pppplVar20;
  int iVar21;
  ulong uVar22;
  ulong uVar23;
  char *pcVar24;
  undefined8 *****pppppuVar25;
  long **pplStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  long ****pppplStack_3e0;
  ulong uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined1 uStack_3b1;
  long ****pppplStack_3b0;
  ulong uStack_3a8;
  byte bStack_399;
  ulong uStack_398;
  long ***ppplStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  long ****pppplStack_378;
  undefined8 ****appppuStack_370 [2];
  char cStack_359;
  long ***ppplStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  ulong uStack_340;
  undefined1 auStack_334 [4];
  long lStack_330;
  long **pplStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  long ****pppplStack_310;
  long *plStack_308;
  undefined8 *puStack_300;
  long ****pppplStack_2f8;
  long ***ppplStack_2f0;
  long ****pppplStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  long ***appplStack_298 [16];
  int aiStack_218 [2];
  long lStack_210;
  char *pcStack_190;
  undefined1 auStack_188 [64];
  long lStack_148;
  undefined4 *puStack_140;
  long ****pppplStack_138;
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
  long ****pppplStack_e0;
  long ****pppplStack_d8;
  undefined1 auStack_cc [128];
  undefined4 uStack_4c;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppplStack_d8 = (long ****)0x0;
  if ((int)param_3 < 0) {
    pcStack_110 = "fd >= 0";
    uVar14 = 0x9d;
    goto LAB_104ac7550;
  }
  if (((int)param_5 == 0) || (lVar5 = param_4, func_0x000104ac885c(), (int)lVar5 != 0)) {
LAB_104ac7118:
    FUN_104abeae8(&pppplStack_e0,param_3,1);
    pppplVar11 = pppplStack_d8;
    pppplVar20 = pppplStack_e0;
    ppppplVar15 = (long *****)pppplStack_d8;
    if (pppplStack_e0 == pppplStack_d8) {
LAB_104ac7148:
      if (((ulong)ppppplVar15 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    else {
      pppplStack_e0 = (long ****)0x36;
      pppplStack_d8 = pppplVar20;
      if (((ulong)pppplVar11 & 1) != 0) {
        func_0x00010084dad0();
        ppppplVar15 = (long *****)pppplStack_e0;
        goto LAB_104ac7148;
      }
    }
    if ((long *****)pppplStack_d8 != (long *****)0x0) goto LAB_104ac72d4;
    FUN_104abedcc(&pppplStack_e0,param_3,1);
    pppplVar11 = pppplStack_d8;
    pppplVar20 = pppplStack_e0;
    ppppplVar15 = (long *****)pppplStack_d8;
    if (pppplStack_e0 == pppplStack_d8) {
LAB_104ac7188:
      if (((ulong)ppppplVar15 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    else {
      pppplStack_e0 = (long ****)0x36;
      pppplStack_d8 = pppplVar20;
      if (((ulong)pppplVar11 & 1) != 0) {
        func_0x00010084dad0();
        ppppplVar15 = (long *****)pppplStack_e0;
        goto LAB_104ac7188;
      }
    }
    if ((long *****)pppplStack_d8 != (long *****)0x0) goto LAB_104ac72d4;
    lVar5 = param_4;
    func_0x000104ac885c();
    if ((int)lVar5 == 0) {
      FUN_104abf380(&pppplStack_e0,param_3,1);
      pppplVar11 = pppplStack_d8;
      pppplVar20 = pppplStack_e0;
      ppppplVar15 = (long *****)pppplStack_d8;
      if (pppplStack_e0 == pppplStack_d8) {
LAB_104ac738c:
        if (((ulong)ppppplVar15 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      else {
        pppplStack_e0 = (long ****)0x36;
        pppplStack_d8 = pppplVar20;
        if (((ulong)pppplVar11 & 1) != 0) {
          func_0x00010084dad0();
          ppppplVar15 = (long *****)pppplStack_e0;
          goto LAB_104ac738c;
        }
      }
      if ((long *****)pppplStack_d8 != (long *****)0x0) goto LAB_104ac72d4;
      FUN_104abef08(&pppplStack_e0,param_3,1);
      pppplVar11 = pppplStack_d8;
      pppplVar20 = pppplStack_e0;
      ppppplVar15 = (long *****)pppplStack_d8;
      if (pppplStack_e0 == pppplStack_d8) {
LAB_104ac73cc:
        if (((ulong)ppppplVar15 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      else {
        pppplStack_e0 = (long ****)0x36;
        pppplStack_d8 = pppplVar20;
        if (((ulong)pppplVar11 & 1) != 0) {
          func_0x00010084dad0();
          ppppplVar15 = (long *****)pppplStack_e0;
          goto LAB_104ac73cc;
        }
      }
      if ((long *****)pppplStack_d8 != (long *****)0x0) goto LAB_104ac72d4;
      FUN_104abf528(&pppplStack_e0,param_3,*(undefined8 *)(param_2 + 0xb0),0);
      pppplVar11 = pppplStack_d8;
      pppplVar20 = pppplStack_e0;
      ppppplVar15 = (long *****)pppplStack_d8;
      if (pppplStack_e0 == pppplStack_d8) {
LAB_104ac7410:
        if (((ulong)ppppplVar15 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      else {
        pppplStack_e0 = (long ****)0x36;
        pppplStack_d8 = pppplVar20;
        if (((ulong)pppplVar11 & 1) != 0) {
          func_0x00010084dad0();
          ppppplVar15 = (long *****)pppplStack_e0;
          goto LAB_104ac7410;
        }
      }
      if ((long *****)pppplStack_d8 != (long *****)0x0) goto LAB_104ac72d4;
    }
    FUN_104abec20(&pppplStack_e0,param_3);
    pppplVar11 = pppplStack_d8;
    pppplVar20 = pppplStack_e0;
    ppppplVar15 = (long *****)pppplStack_d8;
    if (pppplStack_e0 == pppplStack_d8) {
LAB_104ac71d0:
      if (((ulong)ppppplVar15 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    else {
      pppplStack_e0 = (long ****)0x36;
      pppplStack_d8 = pppplVar20;
      if (((ulong)pppplVar11 & 1) != 0) {
        func_0x00010084dad0();
        ppppplVar15 = (long *****)pppplStack_e0;
        goto LAB_104ac71d0;
      }
    }
    if ((long *****)pppplStack_d8 != (long *****)0x0) goto LAB_104ac72d4;
    FUN_104abf870(&pppplStack_e0,param_3,1,*(undefined8 *)(param_2 + 0xb0));
    pppplVar11 = pppplStack_d8;
    pppplVar20 = pppplStack_e0;
    ppppplVar15 = (long *****)pppplStack_d8;
    if (pppplStack_e0 == pppplStack_d8) {
LAB_104ac7214:
      if (((ulong)ppppplVar15 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    else {
      pppplStack_e0 = (long ****)0x36;
      pppplStack_d8 = pppplVar20;
      if (((ulong)pppplVar11 & 1) != 0) {
        func_0x00010084dad0();
        ppppplVar15 = (long *****)pppplStack_e0;
        goto LAB_104ac7214;
      }
    }
    if ((long *****)pppplStack_d8 != (long *****)0x0) goto LAB_104ac72d4;
    puVar12 = param_3;
    _bind(param_3,param_4,*(undefined4 *)(param_4 + 0x80));
    if ((int)puVar12 < 0) {
      ___error();
      FUN_104aba954(auStack_e8,&uStack_e9,*puVar12,&UNK_10f663e6b);
      FUN_104ac767c(&pppplStack_e0,auStack_e8);
      pppplVar20 = pppplStack_d8;
      if (pppplStack_e0 != pppplStack_d8) {
        pppplStack_d8 = pppplStack_e0;
        pppplStack_e0 = (long ****)0x36;
        if (((ulong)pppplVar20 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      func_0x0001004bdf74(&pppplStack_e0);
      puVar9 = auStack_e8;
LAB_104ac7528:
      func_0x0001004bdf74(puVar9);
      if ((long *****)pppplStack_d8 == (long *****)0x0) {
        pcStack_110 = "!GRPC_ERROR_IS_NONE(err)";
        uVar14 = 0xd7;
LAB_104ac7550:
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_common.cc"
                            ,uVar14,2,"assertion failed: %s");
        _abort();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x104ac7574);
        (*pcVar4)();
      }
      goto LAB_104ac72d4;
    }
    func_0x00010045fe6c(0x1130a6358,FUN_104ac76a4);
    puVar12 = param_3;
    _listen(param_3,uRam00000001136a20e0);
    if ((int)puVar12 < 0) {
      ___error();
      FUN_104aba954(auStack_f8,&uStack_e9,*puVar12,"listen");
      FUN_104ac767c(&pppplStack_e0,auStack_f8);
      pppplVar20 = pppplStack_d8;
      if (pppplStack_e0 != pppplStack_d8) {
        pppplStack_d8 = pppplStack_e0;
        pppplStack_e0 = (long ****)0x36;
        if (((ulong)pppplVar20 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      func_0x0001004bdf74(&pppplStack_e0);
      puVar9 = auStack_f8;
      goto LAB_104ac7528;
    }
    ppppplVar15 = (long *****)&uStack_4c;
    uStack_4c = 0x80;
    puVar12 = param_3;
    _getsockname(param_3,auStack_cc);
    if ((int)puVar12 < 0) {
      ___error();
      FUN_104aba954(auStack_100,&uStack_e9,*puVar12,"getsockname");
      FUN_104ac767c(&pppplStack_e0,auStack_100);
      pppplVar20 = pppplStack_d8;
      if (pppplStack_e0 != pppplStack_d8) {
        pppplStack_d8 = pppplStack_e0;
        pppplStack_e0 = (long ****)0x36;
        if (((ulong)pppplVar20 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      func_0x0001004bdf74(&pppplStack_e0);
      puVar9 = auStack_100;
      goto LAB_104ac7528;
    }
    uVar13 = SUB84(auStack_cc,0);
    func_0x0001004df104();
    *param_6 = uVar13;
    *param_1 = 0;
  }
  else {
    FUN_104abf0b0(&pppplStack_e0,param_3,1);
    pppplVar11 = pppplStack_d8;
    pppplVar20 = pppplStack_e0;
    ppppplVar15 = (long *****)pppplStack_d8;
    if (pppplStack_e0 == pppplStack_d8) {
LAB_104ac72c4:
      if (((ulong)ppppplVar15 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    else {
      pppplStack_e0 = (long ****)0x36;
      pppplStack_d8 = pppplVar20;
      if (((ulong)pppplVar11 & 1) != 0) {
        func_0x00010084dad0();
        ppppplVar15 = (long *****)pppplStack_e0;
        goto LAB_104ac72c4;
      }
    }
    if ((long *****)pppplStack_d8 == (long *****)0x0) goto LAB_104ac7118;
LAB_104ac72d4:
    _close(param_3);
    param_5 = (char *)&pppplStack_e0;
    FUN_104aba878(&uStack_108,2,"Unable to configure socket",0x1a,param_5,1,&pppplStack_d8);
    ppppplVar15 = (long *****)((ulong)param_3 & 0xffffffff);
    FUN_104abaa50(param_1,&uStack_108,10);
    if ((uStack_108 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  ppppplVar6 = (long *****)pppplStack_d8;
  if (((ulong)pppplStack_d8 & 1) != 0) {
    func_0x00010084dad0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppppplVar6;
  }
  ___stack_chk_fail();
  func_0x0001004bdf74(&pppplStack_e0);
  func_0x0001004bdf74(auStack_100);
  func_0x0001004bdf74(&pppplStack_d8);
  ppppplVar7 = ppppplVar6;
  __Unwind_Resume();
  puStack_130 = (undefined1 *)&puStack_120;
  pcStack_118 = FUN_104ac767c;
  if (*ppppplVar7 != (long ****)0x0) {
    *extraout_x8 = (long)*ppppplVar7;
    *ppppplVar7 = (long ****)0x36;
    return ppppplVar7;
  }
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x00010bdac990();
  pcStack_128 = FUN_104ac76a4;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = "/proc/sys/net/core/somaxconn";
  uVar13 = 0xf2849a6;
  puStack_140 = param_3;
  pppplStack_138 = (long ****)ppppplVar6;
  _fopen();
  if ((long *****)pcVar8 == (long *****)0x0) {
LAB_104ac7770:
    uRam00000001136a20e0 = 0x80;
  }
  else {
    puVar9 = auStack_188;
    uVar13 = 0x40;
    ppppplVar15 = (long *****)pcVar8;
    _fgets();
    if (puVar9 == (undefined1 *)0x0) {
LAB_104ac7768:
      _fclose();
      goto LAB_104ac7770;
    }
    puVar9 = auStack_188;
    uVar13 = SUB84(&pcStack_190,0);
    ppppplVar15 = (long *****)0xa;
    _strtol();
    if ((((undefined1 *)0x7ffffffe < puVar9 + -1) || (pcStack_190 == (char *)0x0)) ||
       (*pcStack_190 != '\n')) goto LAB_104ac7768;
    _fclose();
    uRam00000001136a20e0 = (uint)puVar9;
    if (uRam00000001136a20e0 < 100) {
      pcVar8 = 
      "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_common.cc"
      ;
      param_5 = "Suspiciously small accept queue (%d) will probably lead to connection drops";
      uVar13 = 0x47;
      ppppplVar15 = (long *****)0x1;
      func_0x0001004686cc();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return (long *****)pcVar8;
  }
  ___stack_chk_fail();
  lStack_210 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppplStack_310 = (long ****)0x0;
  plStack_308 = (long *)0x0;
  if ((int)ppppplVar15 == 0) {
    func_0x000104aa9a0c(0,appplStack_298);
    FUN_104abf9a4(&pppplStack_378,appplStack_298,1,0,&puStack_300,&uStack_340);
    if ((long *****)pppplStack_378 == (long *****)0x0) {
      if ((int)puStack_300 == 1) {
        func_0x000104aa99b0(0,appplStack_298);
      }
      puVar12 = (undefined4 *)(uStack_340 & 0xffffffff);
      _bind(puVar12,appplStack_298,aiStack_218[0]);
      if ((int)puVar12 != 0) {
        ___error();
        FUN_104aba954(&pppplStack_2f8,&uStack_398,*puVar12,&UNK_10f663e6b);
        pppplVar11 = pppplStack_2f8;
        pppplVar20 = pppplStack_378;
        if ((long *****)pppplStack_2f8 == (long *****)0x0) {
          func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                              ,0xd5,2,"assertion failed: %s");
          _abort();
          goto LAB_104ac80d0;
        }
        pppplStack_2c8 = pppplStack_2f8;
        pppplStack_2f8 = (long ****)0x36;
        if (pppplVar11 == pppplStack_378) {
          if (((ulong)pppplVar11 & 1) != 0) {
            func_0x00010084dad0();
          }
        }
        else {
          pppplStack_378 = pppplVar11;
          pppplStack_2c8 = (long ****)0x36;
          if (((ulong)pppplVar20 & 1) != 0) {
            func_0x00010084dad0(pppplVar20);
          }
        }
        if (((ulong)pppplStack_2f8 & 1) != 0) {
          func_0x00010084dad0();
        }
        _close(uStack_340 & 0xffffffff);
        goto LAB_104ac7e88;
      }
      puVar12 = (undefined4 *)(uStack_340 & 0xffffffff);
      _getsockname(puVar12,appplStack_298,aiStack_218);
      if ((int)puVar12 != 0) {
        ___error();
        FUN_104aba954(&pppplStack_2f8,&uStack_398,*puVar12,"getsockname");
        pppplVar11 = pppplStack_2f8;
        pppplVar20 = pppplStack_378;
        if ((long *****)pppplStack_2f8 == (long *****)0x0) {
          func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                              ,0xd5,2,"assertion failed: %s");
          _abort();
          goto LAB_104ac80d0;
        }
        pppplStack_2c8 = pppplStack_2f8;
        pppplStack_2f8 = (long ****)0x36;
        if (pppplVar11 == pppplStack_378) {
          if (((ulong)pppplVar11 & 1) != 0) {
            func_0x00010084dad0();
          }
        }
        else {
          pppplStack_378 = pppplVar11;
          pppplStack_2c8 = (long ****)0x36;
          if (((ulong)pppplVar20 & 1) != 0) {
            func_0x00010084dad0(pppplVar20);
          }
        }
        if (((ulong)pppplStack_2f8 & 1) != 0) {
          func_0x00010084dad0();
        }
        _close(uStack_340 & 0xffffffff);
        goto LAB_104ac7e88;
      }
      _close(uStack_340 & 0xffffffff);
      ppppplVar15 = (long *****)appplStack_298;
      func_0x0001004df104();
      if ((int)ppppplVar15 < 1) {
        pppplStack_2c8 = (long ****)0x0;
        uStack_2c0 = 0;
        uStack_2b8 = 0;
        FUN_104ab5920(&pppplStack_3b0,2,"Bad port",8,&uStack_398,&pppplStack_2c8);
        pppplStack_2f8 = (long ****)&pppplStack_2c8;
        func_0x000100482b64(&pppplStack_2f8);
      }
      else {
        pppplStack_3b0 = (long ****)0x0;
      }
      if (((ulong)pppplStack_378 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    else {
LAB_104ac7e88:
      ppppplVar15 = (long *****)0x0;
      pppplStack_3b0 = pppplStack_378;
    }
    pppplVar20 = pppplStack_310;
    if (pppplStack_3b0 != pppplStack_310) {
      pppplStack_310 = pppplStack_3b0;
      pppplStack_3b0 = (long ****)0x36;
      if (((ulong)pppplVar20 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    appplStack_298[0] = (long ***)0x0;
    if ((long *****)pppplStack_310 == (long *****)0x0) {
      uVar18 = 0;
    }
    else {
      ppppplVar6 = &pppplStack_310;
      func_0x00010ae7711c(ppppplVar6,appplStack_298);
      uVar18 = (uint)ppppplVar6 ^ 1;
      if (((ulong)appplStack_298[0] & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    if (((ulong)pppplStack_3b0 & 1) != 0) {
      func_0x00010084dad0();
    }
    if (uVar18 != 0) {
      *extraout_x8_00 = (long)pppplStack_310;
LAB_104ac7f04:
      pppplStack_310 = (long ****)0x36;
      goto LAB_104ac7f74;
    }
    if ((int)ppppplVar15 < 1) {
      uStack_320 = 0;
      uStack_318 = 0;
      pplStack_328 = (long **)0x0;
      pppplVar20 = (long ****)&pplStack_328;
      FUN_104ab5920(extraout_x8_00,2,"Bad get_unused_port()",0x15,&pppplStack_2c8,&pplStack_328);
LAB_104ac7f68:
      appplStack_298[0] = (long ***)pppplVar20;
      func_0x000100482b64(appplStack_298);
      goto LAB_104ac7f74;
    }
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_ifaddrs.cc"
                        ,0x6f,0,"Picked unused port %d");
  }
  pplVar10 = &plStack_308;
  _getifaddrs();
  if (((int)pplVar10 == 0) && (plStack_308 != (long *)0x0)) {
    iVar21 = 0;
    plVar19 = plStack_308;
    uVar22 = 0;
LAB_104ac782c:
    uStack_340 = 0;
    pcVar24 = "<unknown>";
    if ((char *)plVar19[1] != (char *)0x0) {
      pcVar24 = (char *)plVar19[1];
    }
    uVar23 = uVar22;
    if (plVar19[3] == 0) goto LAB_104ac7a3c;
    cVar1 = *(char *)(plVar19[3] + 1);
    if (cVar1 == '\x02') {
      aiStack_218[0] = 0x10;
    }
    else {
      if (cVar1 != '\x1e') goto LAB_104ac7a3c;
      aiStack_218[0] = 0x1c;
    }
    _memcpy(appplStack_298);
    pppplVar20 = appplStack_298;
    func_0x000104aa9a68(pppplVar20,ppppplVar15);
    if ((int)pppplVar20 == 0) {
      uStack_350 = 0;
      uStack_348 = 0;
      ppplStack_358 = (long ***)0x0;
      FUN_104ab5920(&pppplStack_2f8,2,"Failed to set port",0x12,&pppplStack_378,&ppplStack_358);
      pppplVar20 = pppplStack_310;
      ppppplVar15 = (long *****)pppplStack_310;
      if (pppplStack_2f8 == pppplStack_310) {
LAB_104ac7b74:
        if (((ulong)ppppplVar15 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      else {
        pppplStack_310 = pppplStack_2f8;
        pppplStack_2f8 = (long ****)0x36;
        if (((ulong)pppplVar20 & 1) != 0) {
          func_0x00010084dad0();
          ppppplVar15 = (long *****)pppplStack_2f8;
          goto LAB_104ac7b74;
        }
      }
      pppplStack_2c8 = &ppplStack_358;
      func_0x000100482b64(&pppplStack_2c8);
    }
    else {
      func_0x0001004d466c(&pppplStack_378,appplStack_298,0);
      if ((long *****)pppplStack_378 != (long *****)0x0) {
        func_0x00010ae77430(&pppplStack_2c8,&pppplStack_378,1);
        uVar22 = uStack_2c0;
        ppppplVar15 = (long *****)pppplStack_2c8;
        if (-1 < (long)uStack_2b8) {
          uVar22 = uStack_2b8 >> 0x38;
          ppppplVar15 = &pppplStack_2c8;
        }
        uStack_388 = 0;
        uStack_380 = 0;
        ppplStack_390 = (long ***)0x0;
        FUN_104ab5920(extraout_x8_00,2,ppppplVar15,uVar22,&pppplStack_3b0,&ppplStack_390);
        pppplStack_2f8 = &ppplStack_390;
        func_0x000100482b64(&pppplStack_2f8);
        if ((long)uStack_2b8 < 0) {
          __ZdlPv(pppplStack_2c8);
        }
        func_0x00010047c7d4(&pppplStack_378);
        goto LAB_104ac7f74;
      }
      pppppuVar25 = (undefined8 *****)appppuStack_370[0];
      if (-1 < cStack_359) {
        pppppuVar25 = appppuStack_370;
      }
      uVar17 = (ulong)*(uint *)(plVar19 + 2);
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_ifaddrs.cc"
                          ,0x8c,0,"Adding local addr from interface %s flags 0x%x to server: %s");
      func_0x000100460448((long *****)((long)pcVar8 + 0x18));
      iVar3 = aiStack_218[0];
      for (pppplVar20 = *(long *****)((long)pcVar8 + 0x70); pppplVar20 != (long ****)0x0;
          pppplVar20 = (long ****)pppplVar20[0x1d]) {
        if (*(int *)(pppplVar20 + 0x13) == iVar3) {
          pppplVar11 = pppplVar20 + 3;
          _memcmp(pppplVar11,appplStack_298,iVar3);
          if ((int)pppplVar11 == 0) break;
        }
      }
      func_0x000100466b80((long *****)((long)pcVar8 + 0x18));
      if (pppplVar20 != (long ****)0x0) {
        if ((long *****)pppplStack_378 == (long *****)0x0) {
          func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_ifaddrs.cc"
                              ,0x92,0,"Skipping duplicate addr %s on interface %s");
LAB_104ac7a34:
          func_0x00010047c7d4(&pppplStack_378);
          goto LAB_104ac7a3c;
        }
        func_0x00010ae77c74(&pppplStack_378);
        goto LAB_104ac80d0;
      }
      FUN_104ac6cac(&pppplStack_2c8,pcVar8,appplStack_298,uVar13,iVar21,auStack_334,&uStack_340,
                    param_8,param_9,pcVar24,uVar17,pppppuVar25);
      pppplVar20 = pppplStack_310;
      if (pppplStack_2c8 != pppplStack_310) {
        pppplStack_310 = pppplStack_2c8;
        pppplStack_2c8 = (long ****)0x36;
        if (((ulong)pppplVar20 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      pppplStack_2f8 = (long ****)0x0;
      if ((long *****)pppplStack_310 == (long *****)0x0) {
        uVar18 = 0;
      }
      else {
        ppppplVar6 = &pppplStack_310;
        func_0x00010ae7711c(ppppplVar6,&pppplStack_2f8);
        uVar18 = (uint)ppppplVar6 ^ 1;
        if (((ulong)pppplStack_2f8 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      if (((ulong)pppplStack_2c8 & 1) != 0) {
        func_0x00010084dad0();
      }
      if (uVar18 == 0) {
        if ((int)ppppplVar15 == *(int *)(uStack_340 + 0x9c)) {
          iVar21 = iVar21 + 1;
          uVar23 = uStack_340;
          if (uVar22 != 0) {
            *(undefined4 *)(uStack_340 + 0xf8) = 1;
            *(ulong *)(uVar22 + 0xf0) = uStack_340;
          }
          goto LAB_104ac7a34;
        }
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_ifaddrs.cc"
                            ,0x9d,2,"assertion failed: %s");
        _abort();
        goto LAB_104ac80d0;
      }
      pppplStack_2c8 = (long ****)0x10f23a2e8;
      uStack_2c0 = 0x18;
      ppppplVar15 = &pppplStack_378;
      func_0x0001004d5530();
      ppplStack_2f0 = (long ***)ppppplVar15[1];
      pppplStack_2f8 = *ppppplVar15;
      if (-1 < (char)*(byte *)((long)ppppplVar15 + 0x17)) {
        ppplStack_2f0 = (long ***)(ulong)*(byte *)((long)ppppplVar15 + 0x17);
        pppplStack_2f8 = (long ****)ppppplVar15;
      }
      func_0x00010047c83c(&pppplStack_3b0,&pppplStack_2c8,&pppplStack_2f8);
      ppppplVar15 = (long *****)pppplStack_3b0;
      if (-1 < (char)bStack_399) {
        uStack_3a8 = (ulong)bStack_399;
        ppppplVar15 = &pppplStack_3b0;
      }
      uStack_3c8 = 0;
      uStack_3c0 = 0;
      uStack_3d0 = 0;
      FUN_104ab5920(&uStack_398,2,ppppplVar15,uStack_3a8,&uStack_3b1,&uStack_3d0);
      puStack_300 = &uStack_3d0;
      func_0x000100482b64(&puStack_300);
      if ((char)bStack_399 < '\0') {
        __ZdlPv(pppplStack_3b0);
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
      pppplStack_3e0 = pppplStack_310;
      if (((ulong)pppplStack_310 & 1) != 0) {
        piVar16 = (int *)((long)pppplStack_310 + -1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar2) {
            *piVar16 = *piVar16 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      func_0x0001008306c4(&pppplStack_2c8,&uStack_3d8,&pppplStack_3e0);
      pppplVar20 = pppplStack_310;
      ppppplVar15 = (long *****)pppplStack_310;
      if (pppplStack_2c8 == pppplStack_310) {
LAB_104ac7da4:
        if (((ulong)ppppplVar15 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      else {
        pppplStack_310 = pppplStack_2c8;
        pppplStack_2c8 = (long ****)0x36;
        if (((ulong)pppplVar20 & 1) != 0) {
          func_0x00010084dad0();
          ppppplVar15 = (long *****)pppplStack_2c8;
          goto LAB_104ac7da4;
        }
      }
      if (((ulong)pppplStack_3e0 & 1) != 0) {
        func_0x00010084dad0();
      }
      if ((uStack_3d8 & 1) != 0) {
        func_0x00010084dad0();
      }
      if ((uStack_398 & 1) != 0) {
        func_0x00010084dad0();
      }
      func_0x00010047c7d4(&pppplStack_378);
    }
    goto LAB_104ac7dd8;
  }
  ___error();
  FUN_104aba954(&lStack_330,appplStack_298,*(undefined4 *)pplVar10,"getifaddrs");
  if (lStack_330 == 0) {
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                        ,0xd5,2,"assertion failed: %s");
    _abort();
LAB_104ac80d0:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x104ac80d4);
    (*pcVar4)();
  }
  *extraout_x8_00 = lStack_330;
  lStack_330 = 0x36;
LAB_104ac7f74:
  ppppplVar15 = (long *****)pppplStack_310;
  if (((ulong)pppplStack_310 & 1) != 0) {
    func_0x00010084dad0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_210) {
    ___stack_chk_fail();
    func_0x0001004bdf74(&pppplStack_2c8);
    func_0x0001004bdf74(&pppplStack_3e0);
    func_0x0001004bdf74(&uStack_3d8);
    func_0x0001004bdf74(&uStack_398);
    func_0x00010047c7d4(&pppplStack_378);
    func_0x0001004bdf74(&pppplStack_310);
    __Unwind_Resume(ppppplVar15);
    return (long *****)0x1;
  }
  return ppppplVar15;
LAB_104ac7a3c:
  plVar19 = (long *)*plVar19;
  uVar22 = uVar23;
  if (plVar19 == (long *)0x0) {
LAB_104ac7dd8:
    _freeifaddrs(plStack_308);
    if ((long *****)pppplStack_310 == (long *****)0x0) {
      if (uVar23 != 0) {
        *(undefined4 *)param_5 = *(undefined4 *)(uVar23 + 0x9c);
        *extraout_x8_00 = 0;
        goto LAB_104ac7f74;
      }
      uStack_3f0 = 0;
      uStack_3e8 = 0;
      pplStack_3f8 = (long **)0x0;
      pppplVar20 = (long ****)&pplStack_3f8;
      FUN_104ab5920(2,"No local addresses",0x12,&pppplStack_2c8,&pplStack_3f8);
      goto LAB_104ac7f68;
    }
    *extraout_x8_00 = (long)pppplStack_310;
    goto LAB_104ac7f04;
  }
  goto LAB_104ac782c;
}



/* Entry: 104ac767c; end: 104ac76a3;  */

long *****
FUN_104ac767c(long *param_1,long *****param_2,undefined8 param_3,long *****param_4,char *param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  char *pcVar5;
  undefined1 *puVar6;
  long **pplVar7;
  long ****pppplVar8;
  undefined4 *puVar9;
  long *****ppppplVar10;
  undefined4 uVar11;
  long *extraout_x8;
  int *piVar12;
  ulong uVar13;
  uint uVar14;
  long *plVar15;
  long ****pppplVar16;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  char *pcVar20;
  undefined8 *****pppppuVar21;
  long **pplStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long ****pppplStack_2d0;
  ulong uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 uStack_2a1;
  long ****pppplStack_2a0;
  ulong uStack_298;
  byte bStack_289;
  ulong uStack_288;
  long ***ppplStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long ****pppplStack_268;
  undefined8 ****appppuStack_260 [2];
  char cStack_249;
  long ***ppplStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  ulong uStack_230;
  undefined1 auStack_224 [4];
  long lStack_220;
  long **pplStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long ****pppplStack_200;
  long *plStack_1f8;
  undefined8 *puStack_1f0;
  long ****pppplStack_1e8;
  long ***ppplStack_1e0;
  long ****pppplStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  long ***appplStack_188 [16];
  int aiStack_108 [2];
  long lStack_100;
  char *pcStack_80;
  undefined1 auStack_78 [64];
  long lStack_38;
  
  if (*param_2 != (long ****)0x0) {
    *param_1 = (long)*param_2;
    *param_2 = (long ****)0x36;
    return param_2;
  }
  func_0x00010bdac990();
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = "/proc/sys/net/core/somaxconn";
  uVar11 = 0xf2849a6;
  _fopen();
  if ((long *****)pcVar5 == (long *****)0x0) {
LAB_104ac7770:
    uRam00000001136a20e0 = 0x80;
  }
  else {
    puVar6 = auStack_78;
    uVar11 = 0x40;
    param_4 = (long *****)pcVar5;
    _fgets();
    if (puVar6 == (undefined1 *)0x0) {
LAB_104ac7768:
      _fclose();
      goto LAB_104ac7770;
    }
    puVar6 = auStack_78;
    uVar11 = SUB84(&pcStack_80,0);
    param_4 = (long *****)0xa;
    _strtol();
    if ((((undefined1 *)0x7ffffffe < puVar6 + -1) || (pcStack_80 == (char *)0x0)) ||
       (*pcStack_80 != '\n')) goto LAB_104ac7768;
    _fclose();
    uRam00000001136a20e0 = (uint)puVar6;
    if (uRam00000001136a20e0 < 100) {
      pcVar5 = 
      "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_common.cc"
      ;
      param_5 = "Suspiciously small accept queue (%d) will probably lead to connection drops";
      uVar11 = 0x47;
      param_4 = (long *****)0x1;
      func_0x0001004686cc();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return (long *****)pcVar5;
  }
  ___stack_chk_fail();
  lStack_100 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppplStack_200 = (long ****)0x0;
  plStack_1f8 = (long *)0x0;
  if ((int)param_4 == 0) {
    func_0x000104aa9a0c(0,appplStack_188);
    FUN_104abf9a4(&pppplStack_268,appplStack_188,1,0,&puStack_1f0,&uStack_230);
    if ((long *****)pppplStack_268 == (long *****)0x0) {
      if ((int)puStack_1f0 == 1) {
        func_0x000104aa99b0(0,appplStack_188);
      }
      puVar9 = (undefined4 *)(uStack_230 & 0xffffffff);
      _bind(puVar9,appplStack_188,aiStack_108[0]);
      if ((int)puVar9 != 0) {
        ___error();
        FUN_104aba954(&pppplStack_1e8,&uStack_288,*puVar9,&UNK_10f663e6b);
        pppplVar8 = pppplStack_1e8;
        pppplVar16 = pppplStack_268;
        if ((long *****)pppplStack_1e8 == (long *****)0x0) {
          func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                              ,0xd5,2,"assertion failed: %s");
          _abort();
          goto LAB_104ac80d0;
        }
        pppplStack_1b8 = pppplStack_1e8;
        pppplStack_1e8 = (long ****)0x36;
        if (pppplVar8 == pppplStack_268) {
          if (((ulong)pppplVar8 & 1) != 0) {
            func_0x00010084dad0();
          }
        }
        else {
          pppplStack_268 = pppplVar8;
          pppplStack_1b8 = (long ****)0x36;
          if (((ulong)pppplVar16 & 1) != 0) {
            func_0x00010084dad0(pppplVar16);
          }
        }
        if (((ulong)pppplStack_1e8 & 1) != 0) {
          func_0x00010084dad0();
        }
        _close(uStack_230 & 0xffffffff);
        goto LAB_104ac7e88;
      }
      puVar9 = (undefined4 *)(uStack_230 & 0xffffffff);
      _getsockname(puVar9,appplStack_188,aiStack_108);
      if ((int)puVar9 != 0) {
        ___error();
        FUN_104aba954(&pppplStack_1e8,&uStack_288,*puVar9,"getsockname");
        pppplVar8 = pppplStack_1e8;
        pppplVar16 = pppplStack_268;
        if ((long *****)pppplStack_1e8 == (long *****)0x0) {
          func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                              ,0xd5,2,"assertion failed: %s");
          _abort();
          goto LAB_104ac80d0;
        }
        pppplStack_1b8 = pppplStack_1e8;
        pppplStack_1e8 = (long ****)0x36;
        if (pppplVar8 == pppplStack_268) {
          if (((ulong)pppplVar8 & 1) != 0) {
            func_0x00010084dad0();
          }
        }
        else {
          pppplStack_268 = pppplVar8;
          pppplStack_1b8 = (long ****)0x36;
          if (((ulong)pppplVar16 & 1) != 0) {
            func_0x00010084dad0(pppplVar16);
          }
        }
        if (((ulong)pppplStack_1e8 & 1) != 0) {
          func_0x00010084dad0();
        }
        _close(uStack_230 & 0xffffffff);
        goto LAB_104ac7e88;
      }
      _close(uStack_230 & 0xffffffff);
      param_4 = (long *****)appplStack_188;
      func_0x0001004df104();
      if ((int)param_4 < 1) {
        pppplStack_1b8 = (long ****)0x0;
        uStack_1b0 = 0;
        uStack_1a8 = 0;
        FUN_104ab5920(&pppplStack_2a0,2,"Bad port",8,&uStack_288,&pppplStack_1b8);
        pppplStack_1e8 = (long ****)&pppplStack_1b8;
        func_0x000100482b64(&pppplStack_1e8);
      }
      else {
        pppplStack_2a0 = (long ****)0x0;
      }
      if (((ulong)pppplStack_268 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    else {
LAB_104ac7e88:
      param_4 = (long *****)0x0;
      pppplStack_2a0 = pppplStack_268;
    }
    pppplVar16 = pppplStack_200;
    if (pppplStack_2a0 != pppplStack_200) {
      pppplStack_200 = pppplStack_2a0;
      pppplStack_2a0 = (long ****)0x36;
      if (((ulong)pppplVar16 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    appplStack_188[0] = (long ***)0x0;
    if ((long *****)pppplStack_200 == (long *****)0x0) {
      uVar14 = 0;
    }
    else {
      ppppplVar10 = &pppplStack_200;
      func_0x00010ae7711c(ppppplVar10,appplStack_188);
      uVar14 = (uint)ppppplVar10 ^ 1;
      if (((ulong)appplStack_188[0] & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    if (((ulong)pppplStack_2a0 & 1) != 0) {
      func_0x00010084dad0();
    }
    if (uVar14 != 0) {
      *extraout_x8 = (long)pppplStack_200;
LAB_104ac7f04:
      pppplStack_200 = (long ****)0x36;
      goto LAB_104ac7f74;
    }
    if ((int)param_4 < 1) {
      uStack_210 = 0;
      uStack_208 = 0;
      pplStack_218 = (long **)0x0;
      pppplVar16 = (long ****)&pplStack_218;
      FUN_104ab5920(extraout_x8,2,"Bad get_unused_port()",0x15,&pppplStack_1b8,&pplStack_218);
LAB_104ac7f68:
      appplStack_188[0] = (long ***)pppplVar16;
      func_0x000100482b64(appplStack_188);
      goto LAB_104ac7f74;
    }
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_ifaddrs.cc"
                        ,0x6f,0,"Picked unused port %d");
  }
  pplVar7 = &plStack_1f8;
  _getifaddrs();
  if (((int)pplVar7 == 0) && (plStack_1f8 != (long *)0x0)) {
    iVar17 = 0;
    plVar15 = plStack_1f8;
    uVar18 = 0;
LAB_104ac782c:
    uStack_230 = 0;
    pcVar20 = "<unknown>";
    if ((char *)plVar15[1] != (char *)0x0) {
      pcVar20 = (char *)plVar15[1];
    }
    uVar19 = uVar18;
    if (plVar15[3] == 0) goto LAB_104ac7a3c;
    cVar1 = *(char *)(plVar15[3] + 1);
    if (cVar1 == '\x02') {
      aiStack_108[0] = 0x10;
    }
    else {
      if (cVar1 != '\x1e') goto LAB_104ac7a3c;
      aiStack_108[0] = 0x1c;
    }
    _memcpy(appplStack_188);
    pppplVar16 = appplStack_188;
    func_0x000104aa9a68(pppplVar16,param_4);
    if ((int)pppplVar16 == 0) {
      uStack_240 = 0;
      uStack_238 = 0;
      ppplStack_248 = (long ***)0x0;
      FUN_104ab5920(&pppplStack_1e8,2,"Failed to set port",0x12,&pppplStack_268,&ppplStack_248);
      pppplVar16 = pppplStack_200;
      ppppplVar10 = (long *****)pppplStack_200;
      if (pppplStack_1e8 == pppplStack_200) {
LAB_104ac7b74:
        if (((ulong)ppppplVar10 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      else {
        pppplStack_200 = pppplStack_1e8;
        pppplStack_1e8 = (long ****)0x36;
        if (((ulong)pppplVar16 & 1) != 0) {
          func_0x00010084dad0();
          ppppplVar10 = (long *****)pppplStack_1e8;
          goto LAB_104ac7b74;
        }
      }
      pppplStack_1b8 = &ppplStack_248;
      func_0x000100482b64(&pppplStack_1b8);
    }
    else {
      func_0x0001004d466c(&pppplStack_268,appplStack_188,0);
      if ((long *****)pppplStack_268 != (long *****)0x0) {
        func_0x00010ae77430(&pppplStack_1b8,&pppplStack_268,1);
        uVar18 = uStack_1b0;
        ppppplVar10 = (long *****)pppplStack_1b8;
        if (-1 < (long)uStack_1a8) {
          uVar18 = uStack_1a8 >> 0x38;
          ppppplVar10 = &pppplStack_1b8;
        }
        uStack_278 = 0;
        uStack_270 = 0;
        ppplStack_280 = (long ***)0x0;
        FUN_104ab5920(extraout_x8,2,ppppplVar10,uVar18,&pppplStack_2a0,&ppplStack_280);
        pppplStack_1e8 = &ppplStack_280;
        func_0x000100482b64(&pppplStack_1e8);
        if ((long)uStack_1a8 < 0) {
          __ZdlPv(pppplStack_1b8);
        }
        func_0x00010047c7d4(&pppplStack_268);
        goto LAB_104ac7f74;
      }
      pppppuVar21 = (undefined8 *****)appppuStack_260[0];
      if (-1 < cStack_249) {
        pppppuVar21 = appppuStack_260;
      }
      uVar13 = (ulong)*(uint *)(plVar15 + 2);
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_ifaddrs.cc"
                          ,0x8c,0,"Adding local addr from interface %s flags 0x%x to server: %s");
      func_0x000100460448((long *****)((long)pcVar5 + 0x18));
      iVar3 = aiStack_108[0];
      for (pppplVar16 = *(long *****)((long)pcVar5 + 0x70); pppplVar16 != (long ****)0x0;
          pppplVar16 = (long ****)pppplVar16[0x1d]) {
        if (*(int *)(pppplVar16 + 0x13) == iVar3) {
          pppplVar8 = pppplVar16 + 3;
          _memcmp(pppplVar8,appplStack_188,iVar3);
          if ((int)pppplVar8 == 0) break;
        }
      }
      func_0x000100466b80((long *****)((long)pcVar5 + 0x18));
      if (pppplVar16 != (long ****)0x0) {
        if ((long *****)pppplStack_268 == (long *****)0x0) {
          func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_ifaddrs.cc"
                              ,0x92,0,"Skipping duplicate addr %s on interface %s");
LAB_104ac7a34:
          func_0x00010047c7d4(&pppplStack_268);
          goto LAB_104ac7a3c;
        }
        func_0x00010ae77c74(&pppplStack_268);
        goto LAB_104ac80d0;
      }
      FUN_104ac6cac(&pppplStack_1b8,pcVar5,appplStack_188,uVar11,iVar17,auStack_224,&uStack_230,
                    param_8,param_9,pcVar20,uVar13,pppppuVar21);
      pppplVar16 = pppplStack_200;
      if (pppplStack_1b8 != pppplStack_200) {
        pppplStack_200 = pppplStack_1b8;
        pppplStack_1b8 = (long ****)0x36;
        if (((ulong)pppplVar16 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      pppplStack_1e8 = (long ****)0x0;
      if ((long *****)pppplStack_200 == (long *****)0x0) {
        uVar14 = 0;
      }
      else {
        ppppplVar10 = &pppplStack_200;
        func_0x00010ae7711c(ppppplVar10,&pppplStack_1e8);
        uVar14 = (uint)ppppplVar10 ^ 1;
        if (((ulong)pppplStack_1e8 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      if (((ulong)pppplStack_1b8 & 1) != 0) {
        func_0x00010084dad0();
      }
      if (uVar14 == 0) {
        if ((int)param_4 == *(int *)(uStack_230 + 0x9c)) {
          iVar17 = iVar17 + 1;
          uVar19 = uStack_230;
          if (uVar18 != 0) {
            *(undefined4 *)(uStack_230 + 0xf8) = 1;
            *(ulong *)(uVar18 + 0xf0) = uStack_230;
          }
          goto LAB_104ac7a34;
        }
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_ifaddrs.cc"
                            ,0x9d,2,"assertion failed: %s");
        _abort();
        goto LAB_104ac80d0;
      }
      pppplStack_1b8 = (long ****)0x10f23a2e8;
      uStack_1b0 = 0x18;
      ppppplVar10 = &pppplStack_268;
      func_0x0001004d5530();
      ppplStack_1e0 = (long ***)ppppplVar10[1];
      pppplStack_1e8 = *ppppplVar10;
      if (-1 < (char)*(byte *)((long)ppppplVar10 + 0x17)) {
        ppplStack_1e0 = (long ***)(ulong)*(byte *)((long)ppppplVar10 + 0x17);
        pppplStack_1e8 = (long ****)ppppplVar10;
      }
      func_0x00010047c83c(&pppplStack_2a0,&pppplStack_1b8,&pppplStack_1e8);
      ppppplVar10 = (long *****)pppplStack_2a0;
      if (-1 < (char)bStack_289) {
        uStack_298 = (ulong)bStack_289;
        ppppplVar10 = &pppplStack_2a0;
      }
      uStack_2b8 = 0;
      uStack_2b0 = 0;
      uStack_2c0 = 0;
      FUN_104ab5920(&uStack_288,2,ppppplVar10,uStack_298,&uStack_2a1,&uStack_2c0);
      puStack_1f0 = &uStack_2c0;
      func_0x000100482b64(&puStack_1f0);
      if ((char)bStack_289 < '\0') {
        __ZdlPv(pppplStack_2a0);
      }
      uStack_2c8 = uStack_288;
      if ((uStack_288 & 1) != 0) {
        piVar12 = (int *)(uStack_288 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar2) {
            *piVar12 = *piVar12 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      pppplStack_2d0 = pppplStack_200;
      if (((ulong)pppplStack_200 & 1) != 0) {
        piVar12 = (int *)((long)pppplStack_200 + -1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar2) {
            *piVar12 = *piVar12 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      func_0x0001008306c4(&pppplStack_1b8,&uStack_2c8,&pppplStack_2d0);
      pppplVar16 = pppplStack_200;
      ppppplVar10 = (long *****)pppplStack_200;
      if (pppplStack_1b8 == pppplStack_200) {
LAB_104ac7da4:
        if (((ulong)ppppplVar10 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      else {
        pppplStack_200 = pppplStack_1b8;
        pppplStack_1b8 = (long ****)0x36;
        if (((ulong)pppplVar16 & 1) != 0) {
          func_0x00010084dad0();
          ppppplVar10 = (long *****)pppplStack_1b8;
          goto LAB_104ac7da4;
        }
      }
      if (((ulong)pppplStack_2d0 & 1) != 0) {
        func_0x00010084dad0();
      }
      if ((uStack_2c8 & 1) != 0) {
        func_0x00010084dad0();
      }
      if ((uStack_288 & 1) != 0) {
        func_0x00010084dad0();
      }
      func_0x00010047c7d4(&pppplStack_268);
    }
    goto LAB_104ac7dd8;
  }
  ___error();
  FUN_104aba954(&lStack_220,appplStack_188,*(undefined4 *)pplVar7,"getifaddrs");
  if (lStack_220 == 0) {
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                        ,0xd5,2,"assertion failed: %s");
    _abort();
LAB_104ac80d0:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x104ac80d4);
    (*pcVar4)();
  }
  *extraout_x8 = lStack_220;
  lStack_220 = 0x36;
LAB_104ac7f74:
  ppppplVar10 = (long *****)pppplStack_200;
  if (((ulong)pppplStack_200 & 1) != 0) {
    func_0x00010084dad0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_100) {
    ___stack_chk_fail();
    func_0x0001004bdf74(&pppplStack_1b8);
    func_0x0001004bdf74(&pppplStack_2d0);
    func_0x0001004bdf74(&uStack_2c8);
    func_0x0001004bdf74(&uStack_288);
    func_0x00010047c7d4(&pppplStack_268);
    func_0x0001004bdf74(&pppplStack_200);
    __Unwind_Resume(ppppplVar10);
    return (long *****)0x1;
  }
  return ppppplVar10;
LAB_104ac7a3c:
  plVar15 = (long *)*plVar15;
  uVar18 = uVar19;
  if (plVar15 == (long *)0x0) {
LAB_104ac7dd8:
    _freeifaddrs(plStack_1f8);
    if ((long *****)pppplStack_200 == (long *****)0x0) {
      if (uVar19 != 0) {
        *(undefined4 *)param_5 = *(undefined4 *)(uVar19 + 0x9c);
        *extraout_x8 = 0;
        goto LAB_104ac7f74;
      }
      uStack_2e0 = 0;
      uStack_2d8 = 0;
      pplStack_2e8 = (long **)0x0;
      pppplVar16 = (long ****)&pplStack_2e8;
      FUN_104ab5920(2,"No local addresses",0x12,&pppplStack_1b8,&pplStack_2e8);
      goto LAB_104ac7f68;
    }
    *extraout_x8 = (long)pppplStack_200;
    goto LAB_104ac7f04;
  }
  goto LAB_104ac782c;
}



/* Entry: 104ac76a4; end: 104ac77a7;  */

char * FUN_104ac76a4(undefined8 param_1,undefined8 param_2,long *****param_3,char *param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  char *pcVar5;
  undefined1 *puVar6;
  long **pplVar7;
  long ****pppplVar8;
  undefined4 *puVar9;
  long *****ppppplVar10;
  undefined4 uVar11;
  long *extraout_x8;
  int *piVar12;
  ulong uVar13;
  uint uVar14;
  long *plVar15;
  long ****pppplVar16;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  char *pcVar20;
  undefined8 *****pppppuVar21;
  long **pplStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long ****pppplStack_2c0;
  ulong uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined1 uStack_291;
  long ****pppplStack_290;
  ulong uStack_288;
  byte bStack_279;
  ulong uStack_278;
  long ***ppplStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long ****pppplStack_258;
  undefined8 ****appppuStack_250 [2];
  char cStack_239;
  long ***ppplStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  ulong uStack_220;
  undefined1 auStack_214 [4];
  long lStack_210;
  long **pplStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long ****pppplStack_1f0;
  long *plStack_1e8;
  undefined8 *puStack_1e0;
  long ****pppplStack_1d8;
  long ***ppplStack_1d0;
  long ****pppplStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  long ***appplStack_178 [16];
  int aiStack_f8 [2];
  long lStack_f0;
  char *pcStack_70;
  undefined1 auStack_68 [64];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = "/proc/sys/net/core/somaxconn";
  uVar11 = 0xf2849a6;
  _fopen();
  if ((long *****)pcVar5 == (long *****)0x0) {
LAB_104ac7770:
    uRam00000001136a20e0 = 0x80;
  }
  else {
    puVar6 = auStack_68;
    uVar11 = 0x40;
    param_3 = (long *****)pcVar5;
    _fgets();
    if (puVar6 == (undefined1 *)0x0) {
LAB_104ac7768:
      _fclose();
      goto LAB_104ac7770;
    }
    puVar6 = auStack_68;
    uVar11 = SUB84(&pcStack_70,0);
    param_3 = (long *****)0xa;
    _strtol();
    if ((((undefined1 *)0x7ffffffe < puVar6 + -1) || (pcStack_70 == (char *)0x0)) ||
       (*pcStack_70 != '\n')) goto LAB_104ac7768;
    _fclose();
    uRam00000001136a20e0 = (uint)puVar6;
    if (uRam00000001136a20e0 < 100) {
      pcVar5 = 
      "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_common.cc"
      ;
      param_4 = "Suspiciously small accept queue (%d) will probably lead to connection drops";
      uVar11 = 0x47;
      param_3 = (long *****)0x1;
      func_0x0001004686cc();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return pcVar5;
  }
  ___stack_chk_fail();
  lStack_f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppplStack_1f0 = (long ****)0x0;
  plStack_1e8 = (long *)0x0;
  if ((int)param_3 == 0) {
    func_0x000104aa9a0c(0,appplStack_178);
    FUN_104abf9a4(&pppplStack_258,appplStack_178,1,0,&puStack_1e0,&uStack_220);
    if ((long *****)pppplStack_258 == (long *****)0x0) {
      if ((int)puStack_1e0 == 1) {
        func_0x000104aa99b0(0,appplStack_178);
      }
      puVar9 = (undefined4 *)(uStack_220 & 0xffffffff);
      _bind(puVar9,appplStack_178,aiStack_f8[0]);
      if ((int)puVar9 != 0) {
        ___error();
        FUN_104aba954(&pppplStack_1d8,&uStack_278,*puVar9,&UNK_10f663e6b);
        pppplVar8 = pppplStack_1d8;
        pppplVar16 = pppplStack_258;
        if ((long *****)pppplStack_1d8 == (long *****)0x0) {
          func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                              ,0xd5,2,"assertion failed: %s");
          _abort();
          goto LAB_104ac80d0;
        }
        pppplStack_1a8 = pppplStack_1d8;
        pppplStack_1d8 = (long ****)0x36;
        if (pppplVar8 == pppplStack_258) {
          if (((ulong)pppplVar8 & 1) != 0) {
            func_0x00010084dad0();
          }
        }
        else {
          pppplStack_258 = pppplVar8;
          pppplStack_1a8 = (long ****)0x36;
          if (((ulong)pppplVar16 & 1) != 0) {
            func_0x00010084dad0(pppplVar16);
          }
        }
        if (((ulong)pppplStack_1d8 & 1) != 0) {
          func_0x00010084dad0();
        }
        _close(uStack_220 & 0xffffffff);
        goto LAB_104ac7e88;
      }
      puVar9 = (undefined4 *)(uStack_220 & 0xffffffff);
      _getsockname(puVar9,appplStack_178,aiStack_f8);
      if ((int)puVar9 != 0) {
        ___error();
        FUN_104aba954(&pppplStack_1d8,&uStack_278,*puVar9,"getsockname");
        pppplVar8 = pppplStack_1d8;
        pppplVar16 = pppplStack_258;
        if ((long *****)pppplStack_1d8 == (long *****)0x0) {
          func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                              ,0xd5,2,"assertion failed: %s");
          _abort();
          goto LAB_104ac80d0;
        }
        pppplStack_1a8 = pppplStack_1d8;
        pppplStack_1d8 = (long ****)0x36;
        if (pppplVar8 == pppplStack_258) {
          if (((ulong)pppplVar8 & 1) != 0) {
            func_0x00010084dad0();
          }
        }
        else {
          pppplStack_258 = pppplVar8;
          pppplStack_1a8 = (long ****)0x36;
          if (((ulong)pppplVar16 & 1) != 0) {
            func_0x00010084dad0(pppplVar16);
          }
        }
        if (((ulong)pppplStack_1d8 & 1) != 0) {
          func_0x00010084dad0();
        }
        _close(uStack_220 & 0xffffffff);
        goto LAB_104ac7e88;
      }
      _close(uStack_220 & 0xffffffff);
      param_3 = (long *****)appplStack_178;
      func_0x0001004df104();
      if ((int)param_3 < 1) {
        pppplStack_1a8 = (long ****)0x0;
        uStack_1a0 = 0;
        uStack_198 = 0;
        FUN_104ab5920(&pppplStack_290,2,"Bad port",8,&uStack_278,&pppplStack_1a8);
        pppplStack_1d8 = (long ****)&pppplStack_1a8;
        func_0x000100482b64(&pppplStack_1d8);
      }
      else {
        pppplStack_290 = (long ****)0x0;
      }
      if (((ulong)pppplStack_258 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    else {
LAB_104ac7e88:
      param_3 = (long *****)0x0;
      pppplStack_290 = pppplStack_258;
    }
    pppplVar16 = pppplStack_1f0;
    if (pppplStack_290 != pppplStack_1f0) {
      pppplStack_1f0 = pppplStack_290;
      pppplStack_290 = (long ****)0x36;
      if (((ulong)pppplVar16 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    appplStack_178[0] = (long ***)0x0;
    if ((long *****)pppplStack_1f0 == (long *****)0x0) {
      uVar14 = 0;
    }
    else {
      ppppplVar10 = &pppplStack_1f0;
      func_0x00010ae7711c(ppppplVar10,appplStack_178);
      uVar14 = (uint)ppppplVar10 ^ 1;
      if (((ulong)appplStack_178[0] & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    if (((ulong)pppplStack_290 & 1) != 0) {
      func_0x00010084dad0();
    }
    if (uVar14 != 0) {
      *extraout_x8 = (long)pppplStack_1f0;
LAB_104ac7f04:
      pppplStack_1f0 = (long ****)0x36;
      goto LAB_104ac7f74;
    }
    if ((int)param_3 < 1) {
      uStack_200 = 0;
      uStack_1f8 = 0;
      pplStack_208 = (long **)0x0;
      pppplVar16 = (long ****)&pplStack_208;
      FUN_104ab5920(extraout_x8,2,"Bad get_unused_port()",0x15,&pppplStack_1a8,&pplStack_208);
LAB_104ac7f68:
      appplStack_178[0] = (long ***)pppplVar16;
      func_0x000100482b64(appplStack_178);
      goto LAB_104ac7f74;
    }
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_ifaddrs.cc"
                        ,0x6f,0,"Picked unused port %d");
  }
  pplVar7 = &plStack_1e8;
  _getifaddrs();
  if (((int)pplVar7 == 0) && (plStack_1e8 != (long *)0x0)) {
    iVar17 = 0;
    plVar15 = plStack_1e8;
    uVar18 = 0;
LAB_104ac782c:
    uStack_220 = 0;
    pcVar20 = "<unknown>";
    if ((char *)plVar15[1] != (char *)0x0) {
      pcVar20 = (char *)plVar15[1];
    }
    uVar19 = uVar18;
    if (plVar15[3] == 0) goto LAB_104ac7a3c;
    cVar1 = *(char *)(plVar15[3] + 1);
    if (cVar1 == '\x02') {
      aiStack_f8[0] = 0x10;
    }
    else {
      if (cVar1 != '\x1e') goto LAB_104ac7a3c;
      aiStack_f8[0] = 0x1c;
    }
    _memcpy(appplStack_178);
    pppplVar16 = appplStack_178;
    func_0x000104aa9a68(pppplVar16,param_3);
    if ((int)pppplVar16 == 0) {
      uStack_230 = 0;
      uStack_228 = 0;
      ppplStack_238 = (long ***)0x0;
      FUN_104ab5920(&pppplStack_1d8,2,"Failed to set port",0x12,&pppplStack_258,&ppplStack_238);
      pppplVar16 = pppplStack_1f0;
      ppppplVar10 = (long *****)pppplStack_1f0;
      if (pppplStack_1d8 == pppplStack_1f0) {
LAB_104ac7b74:
        if (((ulong)ppppplVar10 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      else {
        pppplStack_1f0 = pppplStack_1d8;
        pppplStack_1d8 = (long ****)0x36;
        if (((ulong)pppplVar16 & 1) != 0) {
          func_0x00010084dad0();
          ppppplVar10 = (long *****)pppplStack_1d8;
          goto LAB_104ac7b74;
        }
      }
      pppplStack_1a8 = &ppplStack_238;
      func_0x000100482b64(&pppplStack_1a8);
    }
    else {
      func_0x0001004d466c(&pppplStack_258,appplStack_178,0);
      if ((long *****)pppplStack_258 != (long *****)0x0) {
        func_0x00010ae77430(&pppplStack_1a8,&pppplStack_258,1);
        uVar18 = uStack_1a0;
        ppppplVar10 = (long *****)pppplStack_1a8;
        if (-1 < (long)uStack_198) {
          uVar18 = uStack_198 >> 0x38;
          ppppplVar10 = &pppplStack_1a8;
        }
        uStack_268 = 0;
        uStack_260 = 0;
        ppplStack_270 = (long ***)0x0;
        FUN_104ab5920(extraout_x8,2,ppppplVar10,uVar18,&pppplStack_290,&ppplStack_270);
        pppplStack_1d8 = &ppplStack_270;
        func_0x000100482b64(&pppplStack_1d8);
        if ((long)uStack_198 < 0) {
          __ZdlPv(pppplStack_1a8);
        }
        func_0x00010047c7d4(&pppplStack_258);
        goto LAB_104ac7f74;
      }
      pppppuVar21 = (undefined8 *****)appppuStack_250[0];
      if (-1 < cStack_239) {
        pppppuVar21 = appppuStack_250;
      }
      uVar13 = (ulong)*(uint *)(plVar15 + 2);
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_ifaddrs.cc"
                          ,0x8c,0,"Adding local addr from interface %s flags 0x%x to server: %s");
      func_0x000100460448((long *****)((long)pcVar5 + 0x18));
      iVar3 = aiStack_f8[0];
      for (pppplVar16 = *(long *****)((long)pcVar5 + 0x70); pppplVar16 != (long ****)0x0;
          pppplVar16 = (long ****)pppplVar16[0x1d]) {
        if (*(int *)(pppplVar16 + 0x13) == iVar3) {
          pppplVar8 = pppplVar16 + 3;
          _memcmp(pppplVar8,appplStack_178,iVar3);
          if ((int)pppplVar8 == 0) break;
        }
      }
      func_0x000100466b80((long *****)((long)pcVar5 + 0x18));
      if (pppplVar16 != (long ****)0x0) {
        if ((long *****)pppplStack_258 == (long *****)0x0) {
          func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_ifaddrs.cc"
                              ,0x92,0,"Skipping duplicate addr %s on interface %s");
LAB_104ac7a34:
          func_0x00010047c7d4(&pppplStack_258);
          goto LAB_104ac7a3c;
        }
        func_0x00010ae77c74(&pppplStack_258);
        goto LAB_104ac80d0;
      }
      FUN_104ac6cac(&pppplStack_1a8,pcVar5,appplStack_178,uVar11,iVar17,auStack_214,&uStack_220,
                    param_7,param_8,pcVar20,uVar13,pppppuVar21);
      pppplVar16 = pppplStack_1f0;
      if (pppplStack_1a8 != pppplStack_1f0) {
        pppplStack_1f0 = pppplStack_1a8;
        pppplStack_1a8 = (long ****)0x36;
        if (((ulong)pppplVar16 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      pppplStack_1d8 = (long ****)0x0;
      if ((long *****)pppplStack_1f0 == (long *****)0x0) {
        uVar14 = 0;
      }
      else {
        ppppplVar10 = &pppplStack_1f0;
        func_0x00010ae7711c(ppppplVar10,&pppplStack_1d8);
        uVar14 = (uint)ppppplVar10 ^ 1;
        if (((ulong)pppplStack_1d8 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      if (((ulong)pppplStack_1a8 & 1) != 0) {
        func_0x00010084dad0();
      }
      if (uVar14 == 0) {
        if ((int)param_3 == *(int *)(uStack_220 + 0x9c)) {
          iVar17 = iVar17 + 1;
          uVar19 = uStack_220;
          if (uVar18 != 0) {
            *(undefined4 *)(uStack_220 + 0xf8) = 1;
            *(ulong *)(uVar18 + 0xf0) = uStack_220;
          }
          goto LAB_104ac7a34;
        }
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_ifaddrs.cc"
                            ,0x9d,2,"assertion failed: %s");
        _abort();
        goto LAB_104ac80d0;
      }
      pppplStack_1a8 = (long ****)0x10f23a2e8;
      uStack_1a0 = 0x18;
      ppppplVar10 = &pppplStack_258;
      func_0x0001004d5530();
      ppplStack_1d0 = (long ***)ppppplVar10[1];
      pppplStack_1d8 = *ppppplVar10;
      if (-1 < (char)*(byte *)((long)ppppplVar10 + 0x17)) {
        ppplStack_1d0 = (long ***)(ulong)*(byte *)((long)ppppplVar10 + 0x17);
        pppplStack_1d8 = (long ****)ppppplVar10;
      }
      func_0x00010047c83c(&pppplStack_290,&pppplStack_1a8,&pppplStack_1d8);
      ppppplVar10 = (long *****)pppplStack_290;
      if (-1 < (char)bStack_279) {
        uStack_288 = (ulong)bStack_279;
        ppppplVar10 = &pppplStack_290;
      }
      uStack_2a8 = 0;
      uStack_2a0 = 0;
      uStack_2b0 = 0;
      FUN_104ab5920(&uStack_278,2,ppppplVar10,uStack_288,&uStack_291,&uStack_2b0);
      puStack_1e0 = &uStack_2b0;
      func_0x000100482b64(&puStack_1e0);
      if ((char)bStack_279 < '\0') {
        __ZdlPv(pppplStack_290);
      }
      uStack_2b8 = uStack_278;
      if ((uStack_278 & 1) != 0) {
        piVar12 = (int *)(uStack_278 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar2) {
            *piVar12 = *piVar12 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      pppplStack_2c0 = pppplStack_1f0;
      if (((ulong)pppplStack_1f0 & 1) != 0) {
        piVar12 = (int *)((long)pppplStack_1f0 + -1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar2) {
            *piVar12 = *piVar12 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      func_0x0001008306c4(&pppplStack_1a8,&uStack_2b8,&pppplStack_2c0);
      pppplVar16 = pppplStack_1f0;
      ppppplVar10 = (long *****)pppplStack_1f0;
      if (pppplStack_1a8 == pppplStack_1f0) {
LAB_104ac7da4:
        if (((ulong)ppppplVar10 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      else {
        pppplStack_1f0 = pppplStack_1a8;
        pppplStack_1a8 = (long ****)0x36;
        if (((ulong)pppplVar16 & 1) != 0) {
          func_0x00010084dad0();
          ppppplVar10 = (long *****)pppplStack_1a8;
          goto LAB_104ac7da4;
        }
      }
      if (((ulong)pppplStack_2c0 & 1) != 0) {
        func_0x00010084dad0();
      }
      if ((uStack_2b8 & 1) != 0) {
        func_0x00010084dad0();
      }
      if ((uStack_278 & 1) != 0) {
        func_0x00010084dad0();
      }
      func_0x00010047c7d4(&pppplStack_258);
    }
    goto LAB_104ac7dd8;
  }
  ___error();
  FUN_104aba954(&lStack_210,appplStack_178,*(undefined4 *)pplVar7,"getifaddrs");
  if (lStack_210 == 0) {
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                        ,0xd5,2,"assertion failed: %s");
    _abort();
LAB_104ac80d0:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x104ac80d4);
    (*pcVar4)();
  }
  *extraout_x8 = lStack_210;
  lStack_210 = 0x36;
LAB_104ac7f74:
  ppppplVar10 = (long *****)pppplStack_1f0;
  if (((ulong)pppplStack_1f0 & 1) != 0) {
    func_0x00010084dad0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f0) {
    ___stack_chk_fail();
    func_0x0001004bdf74(&pppplStack_1a8);
    func_0x0001004bdf74(&pppplStack_2c0);
    func_0x0001004bdf74(&uStack_2b8);
    func_0x0001004bdf74(&uStack_278);
    func_0x00010047c7d4(&pppplStack_258);
    func_0x0001004bdf74(&pppplStack_1f0);
    __Unwind_Resume(ppppplVar10);
    return (char *)(long *****)0x1;
  }
  return (char *)ppppplVar10;
LAB_104ac7a3c:
  plVar15 = (long *)*plVar15;
  uVar18 = uVar19;
  if (plVar15 == (long *)0x0) {
LAB_104ac7dd8:
    _freeifaddrs(plStack_1e8);
    if ((long *****)pppplStack_1f0 == (long *****)0x0) {
      if (uVar19 != 0) {
        *(undefined4 *)param_4 = *(undefined4 *)(uVar19 + 0x9c);
        *extraout_x8 = 0;
        goto LAB_104ac7f74;
      }
      uStack_2d0 = 0;
      uStack_2c8 = 0;
      pplStack_2d8 = (long **)0x0;
      pppplVar16 = (long ****)&pplStack_2d8;
      FUN_104ab5920(2,"No local addresses",0x12,&pppplStack_1a8,&pplStack_2d8);
      goto LAB_104ac7f68;
    }
    *extraout_x8 = (long)pppplStack_1f0;
    goto LAB_104ac7f04;
  }
  goto LAB_104ac782c;
}



/* Entry: 104ac77a8; end: 104ac82ab;  */

long *****
FUN_104ac77a8(long *param_1,long param_2,undefined4 param_3,undefined8 **param_4,undefined4 *param_5
             ,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  char cVar1;
  bool bVar2;
  long ****pppplVar3;
  long ****pppplVar4;
  int iVar5;
  code *pcVar6;
  long **pplVar7;
  undefined8 **ppuVar8;
  long lVar9;
  undefined4 *puVar10;
  long *****ppppplVar11;
  int *piVar12;
  ulong uVar13;
  uint uVar14;
  undefined8 *puVar15;
  long *plVar16;
  long lVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  char *pcVar21;
  undefined8 *****pppppuVar22;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long ****pppplStack_240;
  ulong uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 uStack_211;
  long ****pppplStack_210;
  ulong uStack_208;
  byte bStack_1f9;
  ulong uStack_1f8;
  long ***ppplStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long ****pppplStack_1d8;
  undefined8 ****appppuStack_1d0 [2];
  char cStack_1b9;
  long ***ppplStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  ulong uStack_1a0;
  undefined1 auStack_194 [4];
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long ****pppplStack_170;
  long *plStack_168;
  undefined8 *puStack_160;
  long ****pppplStack_158;
  long ***ppplStack_150;
  long ****pppplStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 *apuStack_f8 [16];
  int aiStack_78 [2];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppplStack_170 = (long ****)0x0;
  plStack_168 = (long *)0x0;
  if ((int)param_4 == 0) {
    func_0x000104aa9a0c(0,apuStack_f8);
    FUN_104abf9a4(&pppplStack_1d8,apuStack_f8,1,0,&puStack_160,&uStack_1a0);
    if ((long *****)pppplStack_1d8 == (long *****)0x0) {
      if ((int)puStack_160 == 1) {
        func_0x000104aa99b0(0,apuStack_f8);
      }
      puVar10 = (undefined4 *)(uStack_1a0 & 0xffffffff);
      _bind(puVar10,apuStack_f8,aiStack_78[0]);
      if ((int)puVar10 != 0) {
        ___error();
        FUN_104aba954(&pppplStack_158,&uStack_1f8,*puVar10,&UNK_10f663e6b);
        pppplVar4 = pppplStack_158;
        pppplVar3 = pppplStack_1d8;
        if ((long *****)pppplStack_158 == (long *****)0x0) {
          func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                              ,0xd5,2,"assertion failed: %s");
          _abort();
          goto LAB_104ac80d0;
        }
        pppplStack_128 = pppplStack_158;
        pppplStack_158 = (long ****)0x36;
        if (pppplVar4 == pppplStack_1d8) {
          if (((ulong)pppplVar4 & 1) != 0) {
            func_0x00010084dad0();
          }
        }
        else {
          pppplStack_1d8 = pppplVar4;
          pppplStack_128 = (long ****)0x36;
          if (((ulong)pppplVar3 & 1) != 0) {
            func_0x00010084dad0(pppplVar3);
          }
        }
        if (((ulong)pppplStack_158 & 1) != 0) {
          func_0x00010084dad0();
        }
        _close(uStack_1a0 & 0xffffffff);
        goto LAB_104ac7e88;
      }
      puVar10 = (undefined4 *)(uStack_1a0 & 0xffffffff);
      _getsockname(puVar10,apuStack_f8,aiStack_78);
      if ((int)puVar10 != 0) {
        ___error();
        FUN_104aba954(&pppplStack_158,&uStack_1f8,*puVar10,"getsockname");
        pppplVar4 = pppplStack_158;
        pppplVar3 = pppplStack_1d8;
        if ((long *****)pppplStack_158 == (long *****)0x0) {
          func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                              ,0xd5,2,"assertion failed: %s");
          _abort();
          goto LAB_104ac80d0;
        }
        pppplStack_128 = pppplStack_158;
        pppplStack_158 = (long ****)0x36;
        if (pppplVar4 == pppplStack_1d8) {
          if (((ulong)pppplVar4 & 1) != 0) {
            func_0x00010084dad0();
          }
        }
        else {
          pppplStack_1d8 = pppplVar4;
          pppplStack_128 = (long ****)0x36;
          if (((ulong)pppplVar3 & 1) != 0) {
            func_0x00010084dad0(pppplVar3);
          }
        }
        if (((ulong)pppplStack_158 & 1) != 0) {
          func_0x00010084dad0();
        }
        _close(uStack_1a0 & 0xffffffff);
        goto LAB_104ac7e88;
      }
      _close(uStack_1a0 & 0xffffffff);
      param_4 = apuStack_f8;
      func_0x0001004df104();
      if ((int)param_4 < 1) {
        pppplStack_128 = (long ****)0x0;
        uStack_120 = 0;
        uStack_118 = 0;
        FUN_104ab5920(&pppplStack_210,2,"Bad port",8,&uStack_1f8,&pppplStack_128);
        pppplStack_158 = (long ****)&pppplStack_128;
        func_0x000100482b64(&pppplStack_158);
      }
      else {
        pppplStack_210 = (long ****)0x0;
      }
      if (((ulong)pppplStack_1d8 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    else {
LAB_104ac7e88:
      param_4 = (undefined8 **)0x0;
      pppplStack_210 = pppplStack_1d8;
    }
    pppplVar3 = pppplStack_170;
    if (pppplStack_210 != pppplStack_170) {
      pppplStack_170 = pppplStack_210;
      pppplStack_210 = (long ****)0x36;
      if (((ulong)pppplVar3 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    apuStack_f8[0] = (undefined8 *)0x0;
    if ((long *****)pppplStack_170 == (long *****)0x0) {
      uVar14 = 0;
    }
    else {
      ppppplVar11 = &pppplStack_170;
      func_0x00010ae7711c(ppppplVar11,apuStack_f8);
      uVar14 = (uint)ppppplVar11 ^ 1;
      if (((ulong)apuStack_f8[0] & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    if (((ulong)pppplStack_210 & 1) != 0) {
      func_0x00010084dad0();
    }
    if (uVar14 != 0) {
      *param_1 = (long)pppplStack_170;
LAB_104ac7f04:
      pppplStack_170 = (long ****)0x36;
      goto LAB_104ac7f74;
    }
    if ((int)param_4 < 1) {
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_188 = 0;
      puVar15 = &uStack_188;
      FUN_104ab5920(param_1,2,"Bad get_unused_port()",0x15,&pppplStack_128,&uStack_188);
LAB_104ac7f68:
      apuStack_f8[0] = puVar15;
      func_0x000100482b64(apuStack_f8);
      goto LAB_104ac7f74;
    }
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_ifaddrs.cc"
                        ,0x6f,0,"Picked unused port %d");
  }
  pplVar7 = &plStack_168;
  _getifaddrs();
  if (((int)pplVar7 == 0) && (plStack_168 != (long *)0x0)) {
    iVar18 = 0;
    plVar16 = plStack_168;
    uVar19 = 0;
LAB_104ac782c:
    uStack_1a0 = 0;
    pcVar21 = "<unknown>";
    if ((char *)plVar16[1] != (char *)0x0) {
      pcVar21 = (char *)plVar16[1];
    }
    uVar20 = uVar19;
    if (plVar16[3] == 0) goto LAB_104ac7a3c;
    cVar1 = *(char *)(plVar16[3] + 1);
    if (cVar1 == '\x02') {
      aiStack_78[0] = 0x10;
    }
    else {
      if (cVar1 != '\x1e') goto LAB_104ac7a3c;
      aiStack_78[0] = 0x1c;
    }
    _memcpy(apuStack_f8);
    ppuVar8 = apuStack_f8;
    func_0x000104aa9a68(ppuVar8,param_4);
    if ((int)ppuVar8 == 0) {
      uStack_1b0 = 0;
      uStack_1a8 = 0;
      ppplStack_1b8 = (long ***)0x0;
      FUN_104ab5920(&pppplStack_158,2,"Failed to set port",0x12,&pppplStack_1d8,&ppplStack_1b8);
      pppplVar3 = pppplStack_170;
      ppppplVar11 = (long *****)pppplStack_170;
      if (pppplStack_158 == pppplStack_170) {
LAB_104ac7b74:
        if (((ulong)ppppplVar11 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      else {
        pppplStack_170 = pppplStack_158;
        pppplStack_158 = (long ****)0x36;
        if (((ulong)pppplVar3 & 1) != 0) {
          func_0x00010084dad0();
          ppppplVar11 = (long *****)pppplStack_158;
          goto LAB_104ac7b74;
        }
      }
      pppplStack_128 = &ppplStack_1b8;
      func_0x000100482b64(&pppplStack_128);
    }
    else {
      func_0x0001004d466c(&pppplStack_1d8,apuStack_f8,0);
      if ((long *****)pppplStack_1d8 != (long *****)0x0) {
        func_0x00010ae77430(&pppplStack_128,&pppplStack_1d8,1);
        uVar19 = uStack_120;
        ppppplVar11 = (long *****)pppplStack_128;
        if (-1 < (long)uStack_118) {
          uVar19 = uStack_118 >> 0x38;
          ppppplVar11 = &pppplStack_128;
        }
        uStack_1e8 = 0;
        uStack_1e0 = 0;
        ppplStack_1f0 = (long ***)0x0;
        FUN_104ab5920(param_1,2,ppppplVar11,uVar19,&pppplStack_210,&ppplStack_1f0);
        pppplStack_158 = &ppplStack_1f0;
        func_0x000100482b64(&pppplStack_158);
        if ((long)uStack_118 < 0) {
          __ZdlPv(pppplStack_128);
        }
        func_0x00010047c7d4(&pppplStack_1d8);
        goto LAB_104ac7f74;
      }
      pppppuVar22 = (undefined8 *****)appppuStack_1d0[0];
      if (-1 < cStack_1b9) {
        pppppuVar22 = appppuStack_1d0;
      }
      uVar13 = (ulong)*(uint *)(plVar16 + 2);
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_ifaddrs.cc"
                          ,0x8c,0,"Adding local addr from interface %s flags 0x%x to server: %s");
      func_0x000100460448(param_2 + 0x18);
      iVar5 = aiStack_78[0];
      for (lVar17 = *(long *)(param_2 + 0x70); lVar17 != 0; lVar17 = *(long *)(lVar17 + 0xe8)) {
        if (*(int *)(lVar17 + 0x98) == iVar5) {
          lVar9 = lVar17 + 0x18;
          _memcmp(lVar9,apuStack_f8,iVar5);
          if ((int)lVar9 == 0) break;
        }
      }
      func_0x000100466b80(param_2 + 0x18);
      if (lVar17 != 0) {
        if ((long *****)pppplStack_1d8 == (long *****)0x0) {
          func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_ifaddrs.cc"
                              ,0x92,0,"Skipping duplicate addr %s on interface %s");
LAB_104ac7a34:
          func_0x00010047c7d4(&pppplStack_1d8);
          goto LAB_104ac7a3c;
        }
        func_0x00010ae77c74(&pppplStack_1d8);
        goto LAB_104ac80d0;
      }
      FUN_104ac6cac(&pppplStack_128,param_2,apuStack_f8,param_3,iVar18,auStack_194,&uStack_1a0,
                    param_8,param_9,pcVar21,uVar13,pppppuVar22);
      pppplVar3 = pppplStack_170;
      if (pppplStack_128 != pppplStack_170) {
        pppplStack_170 = pppplStack_128;
        pppplStack_128 = (long ****)0x36;
        if (((ulong)pppplVar3 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      pppplStack_158 = (long ****)0x0;
      if ((long *****)pppplStack_170 == (long *****)0x0) {
        uVar14 = 0;
      }
      else {
        ppppplVar11 = &pppplStack_170;
        func_0x00010ae7711c(ppppplVar11,&pppplStack_158);
        uVar14 = (uint)ppppplVar11 ^ 1;
        if (((ulong)pppplStack_158 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      if (((ulong)pppplStack_128 & 1) != 0) {
        func_0x00010084dad0();
      }
      if (uVar14 == 0) {
        if ((int)param_4 == *(int *)(uStack_1a0 + 0x9c)) {
          iVar18 = iVar18 + 1;
          uVar20 = uStack_1a0;
          if (uVar19 != 0) {
            *(undefined4 *)(uStack_1a0 + 0xf8) = 1;
            *(ulong *)(uVar19 + 0xf0) = uStack_1a0;
          }
          goto LAB_104ac7a34;
        }
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_utils_posix_ifaddrs.cc"
                            ,0x9d,2,"assertion failed: %s");
        _abort();
        goto LAB_104ac80d0;
      }
      pppplStack_128 = (long ****)0x10f23a2e8;
      uStack_120 = 0x18;
      ppppplVar11 = &pppplStack_1d8;
      func_0x0001004d5530();
      ppplStack_150 = (long ***)ppppplVar11[1];
      pppplStack_158 = *ppppplVar11;
      if (-1 < (char)*(byte *)((long)ppppplVar11 + 0x17)) {
        ppplStack_150 = (long ***)(ulong)*(byte *)((long)ppppplVar11 + 0x17);
        pppplStack_158 = (long ****)ppppplVar11;
      }
      func_0x00010047c83c(&pppplStack_210,&pppplStack_128,&pppplStack_158);
      ppppplVar11 = (long *****)pppplStack_210;
      if (-1 < (char)bStack_1f9) {
        uStack_208 = (ulong)bStack_1f9;
        ppppplVar11 = &pppplStack_210;
      }
      uStack_228 = 0;
      uStack_220 = 0;
      uStack_230 = 0;
      FUN_104ab5920(&uStack_1f8,2,ppppplVar11,uStack_208,&uStack_211,&uStack_230);
      puStack_160 = &uStack_230;
      func_0x000100482b64(&puStack_160);
      if ((char)bStack_1f9 < '\0') {
        __ZdlPv(pppplStack_210);
      }
      uStack_238 = uStack_1f8;
      if ((uStack_1f8 & 1) != 0) {
        piVar12 = (int *)(uStack_1f8 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar2) {
            *piVar12 = *piVar12 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      pppplStack_240 = pppplStack_170;
      if (((ulong)pppplStack_170 & 1) != 0) {
        piVar12 = (int *)((long)pppplStack_170 + -1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar2) {
            *piVar12 = *piVar12 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      func_0x0001008306c4(&pppplStack_128,&uStack_238,&pppplStack_240);
      pppplVar3 = pppplStack_170;
      ppppplVar11 = (long *****)pppplStack_170;
      if (pppplStack_128 == pppplStack_170) {
LAB_104ac7da4:
        if (((ulong)ppppplVar11 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      else {
        pppplStack_170 = pppplStack_128;
        pppplStack_128 = (long ****)0x36;
        if (((ulong)pppplVar3 & 1) != 0) {
          func_0x00010084dad0();
          ppppplVar11 = (long *****)pppplStack_128;
          goto LAB_104ac7da4;
        }
      }
      if (((ulong)pppplStack_240 & 1) != 0) {
        func_0x00010084dad0();
      }
      if ((uStack_238 & 1) != 0) {
        func_0x00010084dad0();
      }
      if ((uStack_1f8 & 1) != 0) {
        func_0x00010084dad0();
      }
      func_0x00010047c7d4(&pppplStack_1d8);
    }
    goto LAB_104ac7dd8;
  }
  ___error();
  FUN_104aba954(&lStack_190,apuStack_f8,*(undefined4 *)pplVar7,"getifaddrs");
  if (lStack_190 == 0) {
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                        ,0xd5,2,"assertion failed: %s");
    _abort();
LAB_104ac80d0:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x104ac80d4);
    (*pcVar6)();
  }
  *param_1 = lStack_190;
  lStack_190 = 0x36;
LAB_104ac7f74:
  ppppplVar11 = (long *****)pppplStack_170;
  if (((ulong)pppplStack_170 & 1) != 0) {
    func_0x00010084dad0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    func_0x0001004bdf74(&pppplStack_128);
    func_0x0001004bdf74(&pppplStack_240);
    func_0x0001004bdf74(&uStack_238);
    func_0x0001004bdf74(&uStack_1f8);
    func_0x00010047c7d4(&pppplStack_1d8);
    func_0x0001004bdf74(&pppplStack_170);
    __Unwind_Resume(ppppplVar11);
    return (long *****)0x1;
  }
  return ppppplVar11;
LAB_104ac7a3c:
  plVar16 = (long *)*plVar16;
  uVar19 = uVar20;
  if (plVar16 == (long *)0x0) {
LAB_104ac7dd8:
    _freeifaddrs(plStack_168);
    if ((long *****)pppplStack_170 == (long *****)0x0) {
      if (uVar20 != 0) {
        *param_5 = *(undefined4 *)(uVar20 + 0x9c);
        *param_1 = 0;
        goto LAB_104ac7f74;
      }
      uStack_250 = 0;
      uStack_248 = 0;
      uStack_258 = 0;
      puVar15 = &uStack_258;
      FUN_104ab5920(2,"No local addresses",0x12,&pppplStack_128,&uStack_258);
      goto LAB_104ac7f68;
    }
    *param_1 = (long)pppplStack_170;
    goto LAB_104ac7f04;
  }
  goto LAB_104ac782c;
}



/* Entry: 104ac82ac; end: 104ac82db;  */

undefined8 FUN_104ac82ac(void)

{
  return 1;
}



/* Entry: 104ac82dc; end: 104ac83fb;  */

void FUN_104ac82dc(void)

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
  FUN_104ab5920(&uStack_50,2,"Timer list shutdown",0x13,&uStack_51,&uStack_70);
  func_0x000100490ee4(0x7fffffffffffffff,0,&uStack_50);
  if ((uStack_50 & 1) != 0) {
    func_0x00010084dad0();
  }
  puStack_48 = (undefined1 *)&uStack_70;
  func_0x000100482b64(&puStack_48);
  if (uRam00000001136a2188 != 0) {
    uVar2 = 0;
    lVar3 = 0x90;
    do {
      lVar1 = lRam00000001136a2180 + lVar3;
      func_0x0001005a5f48(lVar1 + -0x90);
      FUN_104ac8420(lVar1);
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 0xd8;
    } while (uVar2 < uRam00000001136a2188);
  }
  func_0x0001005a5f48(0x1136a2118);
  func_0x000100460314(lRam00000001136a2180);
  func_0x000100460314(uRam00000001136a2190);
  uRam00000001136a2110 = 0;
  return;
}



/* Entry: 104ac83fc; end: 104ac841f;  */

void FUN_104ac83fc(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR___tlv_bootstrap_11340d990;
  (*(code *)PTR___tlv_bootstrap_11340d990)();
  *ppuVar1 = (undefined *)0x0;
  return;
}



/* Entry: 104ac8420; end: 104ac8427;  */

void FUN_104ac8420(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(*param_1);
  return;
}



/* Entry: 104ac8428; end: 104ac8687;  */

bool FUN_104ac8428(long *param_1,long *param_2)

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
    func_0x0001004689e4(lVar3,(ulong)uVar6 << 3);
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



/* Entry: 104ac8688; end: 104ac869f;  */

undefined8 FUN_104ac8688(undefined8 *param_1)

{
  return *(undefined8 *)*param_1;
}



/* Entry: 104ac86a0; end: 104ac86d3;  */

/* WARNING: Possible PIC construction at 0x000104ac86c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104ac86c4) */

void FUN_104ac86a0(void)

{
  undefined8 *puVar1;
  long *plVar2;
  
  FUN_104ac86d4();
  func_0x0001005a5f48(0x1136a2198);
  puVar1 = (undefined8 *)0x1136a21d8;
  func_0x000107c61220();
  if ((int)puVar1 == 0) {
    return;
  }
  func_0x000107c2c144();
  plVar2 = (long *)*puVar1;
  *puVar1 = 0;
                    /* WARNING: Could not recover jumptable at 0x000100832c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x68))(plVar2,&DAT_10f78e59e);
  return;
}



/* Entry: 104ac86d4; end: 104ac877b;  */

void FUN_104ac86d4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000100460448(0x1136a2198);
  if (cRam00000001136a2238 == '\x01') {
    cRam00000001136a2238 = '\0';
    func_0x000104a6f52c(0x1136a21d8);
    if (0 < iRam00000001136a223c) {
      do {
        uVar2 = 0;
        func_0x000100466584(0);
        uVar3 = 0x1136a2198;
        func_0x000100466590(0x1136a2208,0x1136a2198,uVar2,param_2);
        func_0x000104ac87f0();
        param_2 = uVar3;
      } while (0 < iRam00000001136a223c);
    }
  }
  uRam00000001136a2270 = 0;
  iVar1 = 0x136a2198;
  func_0x000107c61268();
  if (iVar1 == 0) {
    return;
  }
  func_0x000107c2c138();
                    /* WARNING: Could not recover jumptable at 0x000100466ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puRam00000001136a2078)();
  return;
}



/* Entry: 104ac877c; end: 104ac8787;  */

/* WARNING: Possible PIC construction at 0x000100468b04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100468b08) */
/* WARNING: Removing unreachable block (ram,0x000100468b50) */
/* WARNING: Removing unreachable block (ram,0x000100468b7c) */
/* WARNING: Removing unreachable block (ram,0x000100468ba0) */
/* WARNING: Removing unreachable block (ram,0x000100468bc0) */
/* WARNING: Removing unreachable block (ram,0x000100468bd4) */

code * FUN_104ac877c(int param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auStack_60 [48];
  
  if (param_1 == 0) {
    func_0x000100460448(0x1136a2198);
    if (bRam00000001136a2238 == 1) {
      bRam00000001136a2238 = 0;
      func_0x000104a6f52c(0x1136a21d8);
      if (0 < iRam00000001136a223c) {
        do {
          uVar1 = 0;
          func_0x000100466584(0);
          uVar2 = 0x1136a2198;
          func_0x000100466590(0x1136a2208,0x1136a2198,uVar1,param_2);
          func_0x000104ac87f0();
          param_2 = uVar2;
        } while (0 < iRam00000001136a223c);
      }
    }
    uRam00000001136a2270 = 0;
  }
  else {
    func_0x000100460448(0x1136a2198);
    if ((bRam00000001136a2238 & 1) == 0) {
      bRam00000001136a2238 = 1;
      unaff_x29 = &stack0xfffffffffffffff0;
      iRam00000001136a2240 = iRam00000001136a2240 + 1;
      iRam00000001136a223c = iRam00000001136a223c + 1;
      unaff_x30 = &UNK_100468b08;
      register0x00000008 = (BADSPACEBASE *)auStack_60;
    }
  }
  UNRECOVERED_JUMPTABLE = (code *)0x1136a2198;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x000107c61268();
  if ((int)UNRECOVERED_JUMPTABLE == 0) {
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c2c138();
  UNRECOVERED_JUMPTABLE = (code *)*puRam00000001136a2078;
                    /* WARNING: Could not recover jumptable at 0x000100466ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return UNRECOVERED_JUMPTABLE;
}



/* Entry: 104ac8788; end: 104ac8853;  */

void FUN_104ac8788(void)

{
  int iVar1;
  
  iVar1 = 0x136a2198;
  func_0x000100460448(0x1136a2198);
  uRam00000001136a2260 = 1;
  uRam00000001136a2250 = 0;
  uRam00000001136a2258 = 0x7fffffffffffffff;
  lRam00000001136a2268 = lRam00000001136a2268 + 1;
  func_0x000100466b64(0x1136a21d8);
  func_0x000107c61268();
  if (iVar1 == 0) {
    return;
  }
  func_0x000107c2c138();
                    /* WARNING: Could not recover jumptable at 0x000100466ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puRam00000001136a2078)();
  return;
}



/* Entry: 104ac8854; end: 104ac886b;  */

undefined1  [16]
FUN_104ac8854(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long alStack_88 [8];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)0x2;
  uVar4 = param_2;
  func_0x0001004686b8();
  if ((int)plVar1 != 0) {
    plVar1 = alStack_88;
    func_0x000107c616d0(plVar1,0x40,param_4,&stack0x00000000);
    if ((int)(uint)plVar1 < 0) {
      plVar3 = (long *)0x0;
      plVar1 = (long *)0x0;
    }
    else if ((uint)plVar1 < 0x40) {
      plVar1 = (long *)0x0;
      plVar3 = alStack_88;
    }
    else {
      plVar1 = (long *)(((ulong)plVar1 & 0xffffffff) + 1);
      func_0x000100460200();
      func_0x000107c616d0();
      plVar3 = plVar1;
    }
    FUN_104a6e9e0(param_1,param_2,2,plVar3);
    func_0x000100460314();
    uVar4 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar6._8_8_ = uVar4;
    auVar6._0_8_ = plVar1;
    return auVar6;
  }
  func_0x000107c60e78();
  if (uVar4 >> 0x3d == 0) {
    lVar2 = uVar4 << 3;
    func_0x000107c60e20(lVar2);
    auVar7._8_8_ = uVar4;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
  FUN_104a7757c();
  lVar2 = plVar1[1];
  lVar5 = plVar1[2];
  while (lVar5 != lVar2) {
    plVar1[2] = lVar5 + -8;
    plVar3 = *(long **)(lVar5 + -8);
    *(undefined8 *)(lVar5 + -8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    lVar5 = plVar1[2];
  }
  if (*plVar1 != 0) {
    func_0x000107c60e14();
  }
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = plVar1;
  return auVar8;
}



/* Entry: 104ac886c; end: 104ac88d7;  */

void FUN_104ac886c(long param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined1 auStack_b0 [4];
  ushort uStack_ac;
  
  if (*(char *)(param_1 + 1) == '\x01') {
    pcVar2 = (char *)(param_1 + 2);
    if ((((*pcVar2 != '\0') || (*(char *)(param_1 + 3) == '\0')) &&
        (pcVar1 = pcVar2, _stat(pcVar2,auStack_b0), (int)pcVar1 == 0)) &&
       ((uStack_ac & 0xf000) == 0xc000)) {
      _unlink(pcVar2);
    }
  }
  return;
}



/* Entry: 104ac88d8; end: 104ac88df;  */

undefined8 FUN_104ac88d8(void)

{
  return 0;
}



/* Entry: 104ac88e0; end: 104ac8a33;  */

void FUN_104ac88e0(long *param_1,undefined8 *param_2)

{
  int iVar1;
  code *pcVar2;
  ulong uVar3;
  char *pcVar4;
  uint *puVar5;
  uint *puVar6;
  int *piVar7;
  int *piVar8;
  long *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined1 uStack_141;
  uint *puStack_140;
  int *piStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  char *pcStack_120;
  undefined1 uStack_111;
  long lStack_110;
  undefined1 auStack_108 [128];
  long lStack_88;
  undefined8 *puStack_80;
  uint *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  char *pcStack_60;
  ulong uStack_58;
  long lStack_48;
  uint auStack_40 [2];
  long lStack_38;
  uint uStack_30;
  uint uStack_2c;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = &uStack_30;
  _pipe();
  if ((int)puVar5 == 0) {
    auStack_40[0] = 0;
    auStack_40[1] = 0;
    puVar5 = (uint *)(ulong)uStack_30;
    FUN_104abeae8(&lStack_48,puVar5,1);
    lStack_38 = lStack_48;
    if (lStack_48 == 0) {
      puVar5 = (uint *)(ulong)uStack_2c;
      FUN_104abeae8(&lStack_48,puVar5,1);
      lStack_38 = lStack_48;
      if (lStack_48 == 0) {
        *param_2 = CONCAT44(uStack_2c,uStack_30);
      }
    }
  }
  else {
    ___error();
    param_2 = (undefined8 *)(ulong)*puVar5;
    ___error();
    uVar3 = (ulong)*puVar5;
    _strerror();
    pcVar4 = 
    "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/wakeup_fd_pipe.cc"
    ;
    pcStack_60 = (char *)param_2;
    uStack_58 = uVar3;
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/wakeup_fd_pipe.cc"
                        ,0x27,2,"pipe creation failed (%d): %s");
    ___error();
    puVar5 = auStack_40;
    FUN_104aba954(&lStack_38,puVar5,*(undefined4 *)pcVar4,"pipe");
    if (lStack_38 == 0) {
      pcStack_60 = "!GRPC_ERROR_IS_NONE(error)";
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                          ,0xd5,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104ac899c);
      (*pcVar2)();
    }
  }
  *param_1 = lStack_38;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001004bdf74(auStack_40);
  puVar6 = puVar5;
  __Unwind_Resume();
  puStack_80 = param_2;
  puStack_78 = puVar5;
  puStack_70 = &stack0xfffffffffffffff0;
  pcStack_68 = FUN_104ac8a34;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  do {
    do {
      piVar7 = (int *)(ulong)*puVar6;
      _read(piVar7,auStack_108,0x80);
    } while (0 < (long)piVar7);
    if (piVar7 == (int *)0x0) goto LAB_104ac8a90;
    ___error();
  } while (*piVar7 == 4);
  if (*piVar7 == 0x23) {
LAB_104ac8a90:
    *extraout_x8 = 0;
  }
  else {
    ___error();
    iVar1 = *piVar7;
    piVar7 = (int *)&uStack_111;
    FUN_104aba954(&lStack_110,piVar7,iVar1,"read");
    if (lStack_110 == 0) {
      pcStack_120 = "!GRPC_ERROR_IS_NONE(error)";
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                          ,0xd5,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104ac8b18);
      (*pcVar2)();
    }
    *extraout_x8 = lStack_110;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  piVar8 = piVar7;
  __Unwind_Resume();
  pcStack_128 = FUN_104ac8b38;
  uStack_141 = 0;
  puStack_140 = puVar6;
  piStack_138 = piVar7;
  ppuStack_130 = &puStack_70;
  do {
    piVar7 = (int *)(ulong)(uint)piVar8[1];
    _write(piVar7,&uStack_141,1);
    if (piVar7 == (int *)0x1) break;
    ___error();
  } while (*piVar7 == 4);
  *extraout_x8_00 = 0;
  return;
}



/* Entry: 104ac8a34; end: 104ac8b37;  */

void FUN_104ac8a34(long *param_1,uint *param_2)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  int *piVar4;
  undefined8 *extraout_x8;
  undefined1 uStack_e1;
  uint *puStack_e0;
  int *piStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char *pcStack_c0;
  undefined1 uStack_b1;
  long lStack_b0;
  undefined1 auStack_a8 [128];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  do {
    do {
      piVar3 = (int *)(ulong)*param_2;
      _read(piVar3,auStack_a8,0x80);
    } while (0 < (long)piVar3);
    if (piVar3 == (int *)0x0) goto LAB_104ac8a90;
    ___error();
  } while (*piVar3 == 4);
  if (*piVar3 == 0x23) {
LAB_104ac8a90:
    *param_1 = 0;
  }
  else {
    ___error();
    iVar1 = *piVar3;
    piVar3 = (int *)&uStack_b1;
    FUN_104aba954(&lStack_b0,piVar3,iVar1,"read");
    if (lStack_b0 == 0) {
      pcStack_c0 = "!GRPC_ERROR_IS_NONE(error)";
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                          ,0xd5,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104ac8b18);
      (*pcVar2)();
    }
    *param_1 = lStack_b0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  piVar4 = piVar3;
  __Unwind_Resume();
  pcStack_c8 = FUN_104ac8b38;
  uStack_e1 = 0;
  puStack_e0 = param_2;
  piStack_d8 = piVar3;
  puStack_d0 = &stack0xfffffffffffffff0;
  do {
    piVar3 = (int *)(ulong)(uint)piVar4[1];
    _write(piVar3,&uStack_e1,1);
    if (piVar3 == (int *)0x1) break;
    ___error();
  } while (*piVar3 == 4);
  *extraout_x8 = 0;
  return;
}



/* Entry: 104ac8b38; end: 104ac8bcb;  */

void FUN_104ac8b38(undefined8 *param_1,long param_2)

{
  int *piVar1;
  undefined1 uStack_21;
  
  uStack_21 = 0;
  do {
    piVar1 = (int *)(ulong)*(uint *)(param_2 + 4);
    _write(piVar1,&uStack_21,1);
    if (piVar1 == (int *)0x1) break;
    ___error();
  } while (*piVar1 == 4);
  *param_1 = 0;
  return;
}



/* Entry: 104ac8bcc; end: 104ac8c77;  */

/* WARNING: Type propagation algorithm not settling */

bool FUN_104ac8bcc(void)

{
  int iVar1;
  ulong uStack_38;
  ulong auStack_30 [2];
  ulong *puVar2;
  
  auStack_30[1] = 0xffffffffffffffff;
  FUN_104ac88e0(auStack_30,auStack_30 + 1);
  uStack_38 = 0;
  if (auStack_30[0] == 0) {
    iVar1 = 1;
  }
  else {
    puVar2 = auStack_30;
    func_0x00010ae7711c(puVar2,&uStack_38);
    iVar1 = (int)puVar2;
    if ((uStack_38 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  if ((auStack_30[0] & 1) != 0) {
    func_0x00010084dad0();
  }
  if (iVar1 != 0) {
    func_0x000104ac8b90(auStack_30 + 1);
  }
  return iVar1 != 0;
}



/* Entry: 104ac8c78; end: 104ac8ce3;  */

/* WARNING: Possible PIC construction at 0x00010045fea8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010045feac) */
/* WARNING: Removing unreachable block (ram,0x00010045fed0) */
/* WARNING: Removing unreachable block (ram,0x00010045fee0) */
/* WARNING: Removing unreachable block (ram,0x00010045fef0) */
/* WARNING: Removing unreachable block (ram,0x00010045ff14) */
/* WARNING: Removing unreachable block (ram,0x00010045ff20) */
/* WARNING: Removing unreachable block (ram,0x00010045ff28) */
/* WARNING: Removing unreachable block (ram,0x00010045ff30) */
/* WARNING: Removing unreachable block (ram,0x00010045ff40) */
/* WARNING: Removing unreachable block (ram,0x00010045ff48) */

void FUN_104ac8c78(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  uVar2 = 0x1130a63a0;
  pcVar3 = FUN_104ac8ce4;
  puVar1 = (undefined1 *)register0x00000008;
  while( true ) {
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(undefined **)(puVar1 + -8) = unaff_x30;
    func_0x000107c6127c(uVar2,pcVar3);
    if ((int)uVar2 == 0) break;
    func_0x000107c2c150();
    *(undefined8 *)(puVar1 + -0x40) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x38) = unaff_x21;
    *(undefined8 *)(puVar1 + -0x30) = unaff_x20;
    *(undefined8 *)(puVar1 + -0x28) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x20) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x18) = &UNK_10045fe88;
    unaff_x29 = puVar1 + -0x20;
    uVar2 = 0x1130a64b0;
    pcVar3 = (code *)&UNK_10046011c;
    unaff_x30 = &UNK_10045feac;
    puVar1 = puVar1 + -0x40;
  }
  return;
}



/* Entry: 104ac8ce4; end: 104ac8d53;  */

void FUN_104ac8ce4(int param_1)

{
  bool bVar1;
  
  if (iRam00000001130a6398 != 0) {
    FUN_104ac88d8();
    bVar1 = param_1 != 0;
    param_1 = 0;
    if (bVar1) {
      ppuRam00000001136a2280 = (undefined **)&UNK_1107c5a20;
      return;
    }
  }
  if (iRam00000001130a639c != 0) {
    FUN_104ac8bcc();
    if (param_1 != 0) {
      ppuRam00000001136a2280 = &PTR_FUN_1107c5a48;
      return;
    }
  }
  uRam00000001136a2278 = 1;
  return;
}



/* Entry: 104ac8d54; end: 104ac8d8b;  */

void FUN_104ac8d54(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  
  puVar1 = (ulong *)(param_1 + 1);
  do {
    uVar4 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar4 - 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((uVar4 >> 0x30 != 0 || param_1 == (long *)0x0) || uVar4 != 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104ac8d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* Entry: 104ac8d8c; end: 104ac8dc7;  */

long * FUN_104ac8d8c(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  return param_1;
}



/* Entry: 104ac8dc8; end: 104ac8ebb;  */

undefined8 * FUN_104ac8dc8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107c5a80;
  func_0x00010083746c(param_1 + 2);
  return param_1;
}



/* Entry: 104ac8ebc; end: 104ac8f5b;  */

void FUN_104ac8ebc(long param_1)

{
  long lVar1;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  char cStack_69;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_50 [24];
  undefined1 *puStack_38;
  
  lVar1 = param_1;
  func_0x00010048224c();
  FUN_104a81d0c(auStack_88,param_1 + 200,1);
  func_0x0001004829b8(lVar1,auStack_88);
  puStack_38 = auStack_50;
  func_0x000100482ae0(&puStack_38);
  func_0x000100482900(auStack_68,uStack_60);
  if (cStack_69 < '\0') {
    __ZdlPv(uStack_80);
  }
  if (*(char *)(param_1 + 0xdf) < '\0') {
    **(undefined1 **)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 200) = 0;
    *(undefined1 *)(param_1 + 0xdf) = 0;
  }
  return;
}



/* Entry: 104ac8f5c; end: 104ac8fef;  */

undefined8 FUN_104ac8f5c(ulong param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    uVar4 = *(byte *)(param_1 + 0x41) - 1;
    uVar3 = (uint)param_2;
    if (uVar4 < 3) {
      if ((uVar3 & 0xc0) == 0x80) {
LAB_104ac8fd0:
        *(char *)(param_1 + 0x41) = (char)uVar4;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (param_1 + 200,(int)(char)param_2);
        uVar1 = 1;
      }
      else {
LAB_104ac8f80:
        uVar1 = 0;
      }
      return uVar1;
    }
    if (*(byte *)(param_1 + 0x41) == 0) {
      if ((uVar3 >> 7 & 1) == 0) {
        uVar4 = 0;
        goto LAB_104ac8fd0;
      }
      if ((uVar3 & 0xe0) == 0xc0) {
        uVar4 = 1;
        goto LAB_104ac8fd0;
      }
      if ((uVar3 & 0xf0) == 0xe0) {
        uVar4 = 2;
      }
      else {
        if ((uVar3 & 0xf8) != 0xf0) goto LAB_104ac8f80;
        uVar4 = 3;
      }
      goto LAB_104ac8fd0;
    }
    _abort();
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x20) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x18) = FUN_104ac8ff0;
    uVar4 = (uint)param_2;
    if (0x7f < uVar4) {
      if (uVar4 < 0x800) {
        uVar2 = param_1;
        FUN_104ac8f5c(param_1,uVar4 >> 6 | 0xc0);
        if ((int)uVar2 == 0) {
          return 0;
        }
        param_2 = (ulong)(uVar4 & 0x3f | 0x80);
      }
      else {
        if (uVar4 >> 0x10 == 0) {
          uVar2 = param_1;
          FUN_104ac8f5c(param_1,uVar4 >> 0xc | 0xe0);
          if (((int)uVar2 == 0) ||
             (uVar2 = param_1, FUN_104ac8f5c(param_1,uVar4 >> 6 & 0x3f | 0x80), (uVar2 & 1) == 0)) {
            return 0;
          }
        }
        else {
          if (uVar4 >> 0x15 != 0) {
            return 0;
          }
          uVar2 = param_1;
          FUN_104ac8f5c(param_1,uVar4 >> 0x12 | 0xf0);
          if ((int)uVar2 == 0) {
            return 0;
          }
          uVar2 = param_1;
          FUN_104ac8f5c(param_1,uVar4 >> 0xc & 0x3f | 0x80);
          if ((int)uVar2 == 0) {
            return 0;
          }
          uVar2 = param_1;
          FUN_104ac8f5c(param_1,uVar4 >> 6 & 0x3f | 0x80);
          if ((int)uVar2 == 0) {
            return 0;
          }
        }
        param_2 = (ulong)(uVar4 & 0x3f | 0x80);
      }
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x20);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x18);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x30);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x28);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x40);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x38);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x10);
  } while( true );
}



/* Entry: 104ac8ff0; end: 104ac90ef;  */

undefined8 FUN_104ac8ff0(ulong param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    uVar3 = (uint)param_2;
    if (0x7f < uVar3) {
      if (uVar3 < 0x800) {
        uVar1 = param_1;
        FUN_104ac8f5c(param_1,uVar3 >> 6 | 0xc0);
        if ((int)uVar1 == 0) {
          return 0;
        }
        param_2 = (ulong)(uVar3 & 0x3f | 0x80);
      }
      else {
        if (uVar3 >> 0x10 == 0) {
          uVar1 = param_1;
          FUN_104ac8f5c(param_1,uVar3 >> 0xc | 0xe0);
          if (((int)uVar1 == 0) ||
             (uVar1 = param_1, FUN_104ac8f5c(param_1,uVar3 >> 6 & 0x3f | 0x80), (uVar1 & 1) == 0)) {
            return 0;
          }
        }
        else {
          if (uVar3 >> 0x15 != 0) {
            return 0;
          }
          uVar1 = param_1;
          FUN_104ac8f5c(param_1,uVar3 >> 0x12 | 0xf0);
          if ((int)uVar1 == 0) {
            return 0;
          }
          uVar1 = param_1;
          FUN_104ac8f5c(param_1,uVar3 >> 0xc & 0x3f | 0x80);
          if ((int)uVar1 == 0) {
            return 0;
          }
          uVar1 = param_1;
          FUN_104ac8f5c(param_1,uVar3 >> 6 & 0x3f | 0x80);
          if ((int)uVar1 == 0) {
            return 0;
          }
        }
        param_2 = (ulong)(uVar3 & 0x3f | 0x80);
      }
    }
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x20);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x18);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x30);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x28);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    uVar3 = *(byte *)(param_1 + 0x41) - 1;
    uVar2 = (uint)param_2;
    if (uVar3 < 3) break;
    if (*(byte *)(param_1 + 0x41) == 0) {
      if ((uVar2 >> 7 & 1) == 0) {
        uVar3 = 0;
      }
      else if ((uVar2 & 0xe0) == 0xc0) {
        uVar3 = 1;
      }
      else if ((uVar2 & 0xf0) == 0xe0) {
        uVar3 = 2;
      }
      else {
        if ((uVar2 & 0xf8) != 0xf0) {
          return 0;
        }
        uVar3 = 3;
      }
LAB_104ac8fd0:
      *(char *)(param_1 + 0x41) = (char)uVar3;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (param_1 + 200,(int)(char)param_2);
      return 1;
    }
    unaff_x30 = FUN_104ac8ff0;
    _abort();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x10);
  }
  if ((uVar2 & 0xc0) != 0x80) {
    return 0;
  }
  goto LAB_104ac8fd0;
}



/* Entry: 104ac90f0; end: 104ac9227;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_104ac90f0(long *param_1,long *param_2)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  long *plVar6;
  int *piVar7;
  int ******ppppppiVar8;
  int ******ppppppiVar9;
  int *******pppppppiVar10;
  uint uVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  int iVar17;
  int iVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 uStack_c0;
  int *******pppppppiStack_b8;
  ulong uStack_b0;
  byte bStack_a1;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  long *plStack_30;
  long *plStack_28;
  
  plVar6 = param_1 + 2;
  puVar12 = (undefined8 *)param_1[1];
  if (puVar12 < (undefined8 *)*plVar6) {
    puVar12[3] = 0;
    puVar12[2] = 0;
    puVar12[5] = 0;
    puVar12[4] = 0;
    puVar12[6] = 0;
    puVar12[7] = 0;
    puVar12[1] = 0;
    *puVar12 = 0;
    puVar12[4] = puVar12 + 5;
    puVar12[8] = 0;
    puVar12[9] = 0;
    puVar12 = puVar12 + 10;
    param_1[1] = (long)puVar12;
LAB_104ac91f4:
    param_1[1] = (long)puVar12;
    return puVar12 + -10;
  }
  lVar13 = (long)puVar12 - *param_1 >> 4;
  uVar1 = lVar13 * -0x3333333333333333 + 1;
  if (uVar1 < 0x333333333333334) {
    lVar15 = *plVar6 - *param_1 >> 4;
    uVar16 = lVar15 * -0x6666666666666666;
    if (uVar16 < uVar1 || uVar16 - uVar1 == 0) {
      uVar16 = uVar1;
    }
    if (0x199999999999998 < (ulong)(lVar15 * -0x3333333333333333)) {
      uVar16 = 0x333333333333333;
    }
    plStack_28 = plVar6;
    if (uVar16 == 0) {
      plStack_48 = (long *)0x0;
    }
    else {
      FUN_104a77a38();
      plStack_48 = plVar6;
    }
    plStack_40 = plStack_48 + lVar13 * 2;
    plStack_30 = plStack_48 + uVar16 * 10;
    plStack_40[3] = 0;
    plStack_40[2] = 0;
    plStack_40[5] = 0;
    plStack_40[4] = 0;
    plStack_40[1] = 0;
    *plStack_40 = 0;
    plStack_40[6] = 0;
    plStack_40[7] = 0;
    plStack_40[4] = (long)(plStack_40 + 5);
    plStack_40[8] = 0;
    plStack_40[9] = 0;
    plStack_38 = plStack_40 + 10;
    FUN_104aabe2c(param_1,&plStack_48);
    puVar12 = (undefined8 *)param_1[1];
    FUN_104aabfe4(&plStack_48);
    goto LAB_104ac91f4;
  }
  FUN_104a77a24();
  FUN_104aabfe4(&plStack_48);
  __Unwind_Resume(param_1);
  piVar7 = (int *)&DAT_10f62a4d8;
  FUN_104a6fa70();
  if (*piVar7 != 4) {
    return (undefined8 *)0x0;
  }
  ppppppiVar9 = (int ******)(piVar7 + 2);
  ppppppiVar8 = (int ******)*ppppppiVar9;
  uVar1 = *(ulong *)(piVar7 + 4);
  if (-1 < (char)*(byte *)((long)piVar7 + 0x1f)) {
    ppppppiVar8 = ppppppiVar9;
    uVar1 = (ulong)*(byte *)((long)piVar7 + 0x1f);
  }
  if (*(char *)((long)ppppppiVar8 + (uVar1 - 1)) != 's') {
    return (undefined8 *)0x0;
  }
  uStack_c0 = 0x7fffffffffffffff;
  FUN_104ab7cd8(&pppppppiStack_b8,&uStack_c0);
  bVar2 = *(byte *)((long)piVar7 + 0x1f);
  uVar14 = (ulong)bVar2;
  uVar16 = *(ulong *)(piVar7 + 4);
  if (-1 < (char)bVar2) {
    uVar16 = uVar14;
  }
  if (-1 < (char)bStack_a1) {
    uStack_b0 = (ulong)bStack_a1;
  }
  if (uVar16 == uStack_b0) {
    pppppppiVar10 = pppppppiStack_b8;
    if (-1 < (char)bStack_a1) {
      pppppppiVar10 = (int *******)&pppppppiStack_b8;
    }
    if ((char)bVar2 < '\0') {
      iVar18 = (int)*ppppppiVar9;
      _memcmp();
      bVar5 = iVar18 == 0;
    }
    else {
      ppppppiVar8 = ppppppiVar9;
      if (bVar2 == 0) {
        bVar5 = true;
      }
      else {
        do {
          uVar14 = uVar14 - 1;
          bVar5 = *(char *)ppppppiVar8 == *(char *)pppppppiVar10;
          if (!bVar5) break;
          pppppppiVar10 = (int *******)((long)pppppppiVar10 + 1);
          ppppppiVar8 = (int ******)((long)ppppppiVar8 + 1);
        } while (uVar14 != 0);
      }
    }
  }
  else {
    bVar5 = false;
  }
  if ((char)bStack_a1 < '\0') {
    __ZdlPv(pppppppiStack_b8);
  }
  if (bVar5) {
    *param_2 = 0x7fffffffffffffff;
    return (undefined8 *)0x1;
  }
  ppppppiVar8 = *(int *******)(piVar7 + 2);
  if (-1 < *(char *)((long)piVar7 + 0x1f)) {
    ppppppiVar8 = ppppppiVar9;
  }
  func_0x0001004601ac();
  *(undefined1 *)((long)ppppppiVar8 + (uVar1 - 1)) = 0;
  ppppppiVar9 = ppppppiVar8;
  pppppppiStack_b8 = (int *******)ppppppiVar8;
  _strchr();
  if (ppppppiVar9 != (int ******)0x0) {
    iVar18 = (int)ppppppiVar9 + 1;
    *(undefined1 *)ppppppiVar9 = 0;
    iVar17 = iVar18;
    FUN_104a6f25c();
    if (iVar17 != -1) {
      _strlen();
      if (iVar18 < 10) {
        if (iVar18 != 9) {
          iVar18 = 9 - iVar18;
          if (iVar18 < 2) {
            iVar18 = 1;
          }
          uVar3 = iVar18 - 1;
          auVar21._8_4_ = 1;
          auVar21._0_8_ = 0x100000000;
          auVar21._12_4_ = 1;
          auVar20._4_12_ = auVar21._4_12_;
          auVar20._0_4_ = iVar17;
          uVar4 = 0;
          do {
            uVar11 = uVar4;
            auVar21 = auVar20;
            auVar20._0_4_ = auVar21._0_4_ * 10;
            auVar20._4_4_ = auVar21._4_4_ * 10;
            auVar20._8_4_ = auVar21._8_4_ * 10;
            auVar20._12_4_ = auVar21._12_4_ * 10;
            uVar4 = uVar11 + 4;
          } while ((iVar18 + 3U & 0xfffffffc) != uVar11 + 4);
          auVar19._0_4_ = -(uint)(uVar3 < uVar11);
          auVar19._4_4_ = -(uint)(uVar3 < (uVar11 | 1));
          auVar19._8_4_ = -(uint)(uVar3 < (uVar11 | 2));
          auVar19._12_4_ = -(uint)(uVar3 < (uVar11 | 3));
          auVar20 = auVar20 ^ (auVar20 ^ auVar21) & auVar19;
          auVar21 = NEON_ext(auVar20,auVar20,8,1);
          iVar17 = auVar20._0_4_ * auVar21._0_4_ * auVar20._4_4_ * auVar21._4_4_;
        }
        goto LAB_104ac9474;
      }
    }
    puVar12 = (undefined8 *)0x0;
    goto LAB_104ac94d0;
  }
  iVar17 = 0;
LAB_104ac9474:
  if (ppppppiVar9 == ppppppiVar8) {
    lVar13 = 0;
LAB_104ac949c:
    *param_2 = lVar13 + iVar17 / 1000000;
    puVar12 = (undefined8 *)0x1;
  }
  else {
    ppppppiVar9 = ppppppiVar8;
    FUN_104a6f25c();
    if ((int)ppppppiVar9 != -1) {
      lVar13 = (long)(int)ppppppiVar9 * 1000;
      goto LAB_104ac949c;
    }
    puVar12 = (undefined8 *)0x0;
  }
  if (ppppppiVar8 == (int ******)0x0) {
    return puVar12;
  }
LAB_104ac94d0:
  pppppppiStack_b8 = (int *******)0x0;
  func_0x000100460314(ppppppiVar8);
  return puVar12;
}



/* Entry: 104ac9228; end: 104ac923b;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_104ac9228(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  bool bVar6;
  int *piVar7;
  int ******ppppppiVar8;
  int ******ppppppiVar9;
  int *******pppppppiVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  int iVar15;
  int iVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uStack_70;
  int *******pppppppiStack_68;
  ulong uStack_60;
  byte bStack_51;
  
  piVar7 = (int *)&DAT_10f62a4d8;
  FUN_104a6fa70();
  if (*piVar7 != 4) {
    return 0;
  }
  ppppppiVar9 = (int ******)(piVar7 + 2);
  ppppppiVar8 = (int ******)*ppppppiVar9;
  uVar4 = *(ulong *)(piVar7 + 4);
  if (-1 < (char)*(byte *)((long)piVar7 + 0x1f)) {
    ppppppiVar8 = ppppppiVar9;
    uVar4 = (ulong)*(byte *)((long)piVar7 + 0x1f);
  }
  if (*(char *)((long)ppppppiVar8 + (uVar4 - 1)) != 's') {
    return 0;
  }
  uStack_70 = 0x7fffffffffffffff;
  FUN_104ab7cd8(&pppppppiStack_68,&uStack_70);
  bVar2 = *(byte *)((long)piVar7 + 0x1f);
  uVar12 = (ulong)bVar2;
  uVar1 = *(ulong *)(piVar7 + 4);
  if (-1 < (char)bVar2) {
    uVar1 = uVar12;
  }
  if (-1 < (char)bStack_51) {
    uStack_60 = (ulong)bStack_51;
  }
  if (uVar1 == uStack_60) {
    pppppppiVar10 = pppppppiStack_68;
    if (-1 < (char)bStack_51) {
      pppppppiVar10 = (int *******)&pppppppiStack_68;
    }
    if ((char)bVar2 < '\0') {
      iVar16 = (int)*ppppppiVar9;
      _memcmp();
      bVar6 = iVar16 == 0;
    }
    else {
      ppppppiVar8 = ppppppiVar9;
      if (bVar2 == 0) {
        bVar6 = true;
      }
      else {
        do {
          uVar12 = uVar12 - 1;
          bVar6 = *(char *)ppppppiVar8 == *(char *)pppppppiVar10;
          if (!bVar6) break;
          pppppppiVar10 = (int *******)((long)pppppppiVar10 + 1);
          ppppppiVar8 = (int ******)((long)ppppppiVar8 + 1);
        } while (uVar12 != 0);
      }
    }
  }
  else {
    bVar6 = false;
  }
  if ((char)bStack_51 < '\0') {
    __ZdlPv(pppppppiStack_68);
  }
  if (bVar6) {
    *param_2 = 0x7fffffffffffffff;
    return 1;
  }
  ppppppiVar8 = *(int *******)(piVar7 + 2);
  if (-1 < *(char *)((long)piVar7 + 0x1f)) {
    ppppppiVar8 = ppppppiVar9;
  }
  func_0x0001004601ac();
  *(undefined1 *)((long)ppppppiVar8 + (uVar4 - 1)) = 0;
  ppppppiVar9 = ppppppiVar8;
  pppppppiStack_68 = (int *******)ppppppiVar8;
  _strchr();
  if (ppppppiVar9 != (int ******)0x0) {
    iVar16 = (int)ppppppiVar9 + 1;
    *(undefined1 *)ppppppiVar9 = 0;
    iVar15 = iVar16;
    FUN_104a6f25c();
    if (iVar15 != -1) {
      _strlen();
      if (iVar16 < 10) {
        if (iVar16 != 9) {
          iVar16 = 9 - iVar16;
          if (iVar16 < 2) {
            iVar16 = 1;
          }
          uVar3 = iVar16 - 1;
          auVar19._8_4_ = 1;
          auVar19._0_8_ = 0x100000000;
          auVar19._12_4_ = 1;
          auVar18._4_12_ = auVar19._4_12_;
          auVar18._0_4_ = iVar15;
          uVar5 = 0;
          do {
            uVar11 = uVar5;
            auVar19 = auVar18;
            auVar18._0_4_ = auVar19._0_4_ * 10;
            auVar18._4_4_ = auVar19._4_4_ * 10;
            auVar18._8_4_ = auVar19._8_4_ * 10;
            auVar18._12_4_ = auVar19._12_4_ * 10;
            uVar5 = uVar11 + 4;
          } while ((iVar16 + 3U & 0xfffffffc) != uVar11 + 4);
          auVar17._0_4_ = -(uint)(uVar3 < uVar11);
          auVar17._4_4_ = -(uint)(uVar3 < (uVar11 | 1));
          auVar17._8_4_ = -(uint)(uVar3 < (uVar11 | 2));
          auVar17._12_4_ = -(uint)(uVar3 < (uVar11 | 3));
          auVar18 = auVar18 ^ (auVar18 ^ auVar19) & auVar17;
          auVar19 = NEON_ext(auVar18,auVar18,8,1);
          iVar15 = auVar18._0_4_ * auVar19._0_4_ * auVar18._4_4_ * auVar19._4_4_;
        }
        goto LAB_104ac9474;
      }
    }
    uVar14 = 0;
    goto LAB_104ac94d0;
  }
  iVar15 = 0;
LAB_104ac9474:
  if (ppppppiVar9 == ppppppiVar8) {
    lVar13 = 0;
LAB_104ac949c:
    *param_2 = lVar13 + iVar15 / 1000000;
    uVar14 = 1;
  }
  else {
    ppppppiVar9 = ppppppiVar8;
    FUN_104a6f25c();
    if ((int)ppppppiVar9 != -1) {
      lVar13 = (long)(int)ppppppiVar9 * 1000;
      goto LAB_104ac949c;
    }
    uVar14 = 0;
  }
  if (ppppppiVar8 == (int ******)0x0) {
    return uVar14;
  }
LAB_104ac94d0:
  pppppppiStack_68 = (int *******)0x0;
  func_0x000100460314(ppppppiVar8);
  return uVar14;
}



/* Entry: 104ac923c; end: 104ac94fb;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_104ac923c(int *param_1,long *param_2)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  bool bVar6;
  int ******ppppppiVar7;
  int ******ppppppiVar8;
  int *******pppppppiVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  int iVar14;
  int iVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uStack_60;
  int *******pppppppiStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  if (*param_1 != 4) {
    return 0;
  }
  ppppppiVar8 = (int ******)(param_1 + 2);
  ppppppiVar7 = (int ******)*ppppppiVar8;
  uVar4 = *(ulong *)(param_1 + 4);
  if (-1 < (char)*(byte *)((long)param_1 + 0x1f)) {
    ppppppiVar7 = ppppppiVar8;
    uVar4 = (ulong)*(byte *)((long)param_1 + 0x1f);
  }
  if (*(char *)((long)ppppppiVar7 + (uVar4 - 1)) != 's') {
    return 0;
  }
  uStack_60 = 0x7fffffffffffffff;
  FUN_104ab7cd8(&pppppppiStack_58,&uStack_60);
  bVar2 = *(byte *)((long)param_1 + 0x1f);
  uVar11 = (ulong)bVar2;
  uVar1 = *(ulong *)(param_1 + 4);
  if (-1 < (char)bVar2) {
    uVar1 = uVar11;
  }
  if (-1 < (char)bStack_41) {
    uStack_50 = (ulong)bStack_41;
  }
  if (uVar1 == uStack_50) {
    pppppppiVar9 = pppppppiStack_58;
    if (-1 < (char)bStack_41) {
      pppppppiVar9 = (int *******)&pppppppiStack_58;
    }
    if ((char)bVar2 < '\0') {
      iVar15 = (int)*ppppppiVar8;
      _memcmp();
      bVar6 = iVar15 == 0;
    }
    else {
      ppppppiVar7 = ppppppiVar8;
      if (bVar2 == 0) {
        bVar6 = true;
      }
      else {
        do {
          uVar11 = uVar11 - 1;
          bVar6 = *(char *)ppppppiVar7 == *(char *)pppppppiVar9;
          if (!bVar6) break;
          pppppppiVar9 = (int *******)((long)pppppppiVar9 + 1);
          ppppppiVar7 = (int ******)((long)ppppppiVar7 + 1);
        } while (uVar11 != 0);
      }
    }
  }
  else {
    bVar6 = false;
  }
  if ((char)bStack_41 < '\0') {
    __ZdlPv(pppppppiStack_58);
  }
  if (bVar6) {
    *param_2 = 0x7fffffffffffffff;
    return 1;
  }
  ppppppiVar7 = *(int *******)(param_1 + 2);
  if (-1 < *(char *)((long)param_1 + 0x1f)) {
    ppppppiVar7 = ppppppiVar8;
  }
  func_0x0001004601ac();
  *(undefined1 *)((long)ppppppiVar7 + (uVar4 - 1)) = 0;
  ppppppiVar8 = ppppppiVar7;
  pppppppiStack_58 = (int *******)ppppppiVar7;
  _strchr();
  if (ppppppiVar8 != (int ******)0x0) {
    iVar15 = (int)ppppppiVar8 + 1;
    *(undefined1 *)ppppppiVar8 = 0;
    iVar14 = iVar15;
    FUN_104a6f25c();
    if (iVar14 != -1) {
      _strlen();
      if (iVar15 < 10) {
        if (iVar15 != 9) {
          iVar15 = 9 - iVar15;
          if (iVar15 < 2) {
            iVar15 = 1;
          }
          uVar3 = iVar15 - 1;
          auVar18._8_4_ = 1;
          auVar18._0_8_ = 0x100000000;
          auVar18._12_4_ = 1;
          auVar17._4_12_ = auVar18._4_12_;
          auVar17._0_4_ = iVar14;
          uVar5 = 0;
          do {
            uVar10 = uVar5;
            auVar18 = auVar17;
            auVar17._0_4_ = auVar18._0_4_ * 10;
            auVar17._4_4_ = auVar18._4_4_ * 10;
            auVar17._8_4_ = auVar18._8_4_ * 10;
            auVar17._12_4_ = auVar18._12_4_ * 10;
            uVar5 = uVar10 + 4;
          } while ((iVar15 + 3U & 0xfffffffc) != uVar10 + 4);
          auVar16._0_4_ = -(uint)(uVar3 < uVar10);
          auVar16._4_4_ = -(uint)(uVar3 < (uVar10 | 1));
          auVar16._8_4_ = -(uint)(uVar3 < (uVar10 | 2));
          auVar16._12_4_ = -(uint)(uVar3 < (uVar10 | 3));
          auVar17 = auVar17 ^ (auVar17 ^ auVar18) & auVar16;
          auVar18 = NEON_ext(auVar17,auVar17,8,1);
          iVar14 = auVar17._0_4_ * auVar18._0_4_ * auVar17._4_4_ * auVar18._4_4_;
        }
        goto LAB_104ac9474;
      }
    }
    uVar13 = 0;
    goto LAB_104ac94d0;
  }
  iVar14 = 0;
LAB_104ac9474:
  if (ppppppiVar8 == ppppppiVar7) {
    lVar12 = 0;
LAB_104ac949c:
    *param_2 = lVar12 + iVar14 / 1000000;
    uVar13 = 1;
  }
  else {
    ppppppiVar8 = ppppppiVar7;
    FUN_104a6f25c();
    if ((int)ppppppiVar8 != -1) {
      lVar12 = (long)(int)ppppppiVar8 * 1000;
      goto LAB_104ac949c;
    }
    uVar13 = 0;
  }
  if (ppppppiVar7 == (int ******)0x0) {
    return uVar13;
  }
LAB_104ac94d0:
  pppppppiStack_58 = (int *******)0x0;
  func_0x000100460314(ppppppiVar7);
  return uVar13;
}



/* Entry: 104ac94fc; end: 104ac973b;  */

void FUN_104ac94fc(int *param_1,undefined8 param_2,undefined8 param_3,long *param_4,long *param_5)

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
  ulong auStack_138 [3];
  undefined1 uStack_119;
  undefined8 **ppuStack_118;
  ulong uStack_110;
  byte bStack_101;
  ulong uStack_100;
  ulong *puStack_f8;
  ulong *puStack_f0;
  ulong *puStack_e8;
  ulong *puStack_e0;
  ulong *puStack_d8;
  char *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  char *pcStack_68;
  undefined8 uStack_60;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar2 = *param_1;
  if (iVar2 == 6) {
    *param_4 = (long)(param_1 + 0xe);
    param_5 = unaff_x19;
  }
  else {
    *param_4 = 0;
    pcStack_68 = "field:";
    uStack_60 = 6;
    pcStack_c8 = " error:type should be ARRAY";
    uStack_c0 = 0x1b;
    uStack_98 = param_2;
    uStack_90 = param_3;
    func_0x000100066c24(&ppuStack_118,&pcStack_68,&uStack_98,&pcStack_c8);
    pppuVar3 = (undefined8 ***)ppuStack_118;
    if (-1 < (char)bStack_101) {
      uStack_110 = (ulong)bStack_101;
      pppuVar3 = &ppuStack_118;
    }
    auStack_138[1] = 0;
    auStack_138[2] = 0;
    auStack_138[0] = 0;
    FUN_104ab5920(&uStack_100,2,pppuVar3,uStack_110,&uStack_119,auStack_138);
    puVar5 = (ulong *)(param_5 + 2);
    puVar7 = (ulong *)param_5[1];
    if (puVar7 < (ulong *)*puVar5) {
      *puVar7 = uStack_100;
      uStack_100 = 0x36;
      param_5[1] = (long)(puVar7 + 1);
    }
    else {
      lVar9 = (long)puVar7 - *param_5 >> 3;
      uVar1 = lVar9 + 1;
      if (uVar1 >> 0x3d != 0) goto LAB_104ac96cc;
      uVar6 = (long)*puVar5 - *param_5;
      uVar8 = (long)uVar6 >> 2;
      if (uVar8 <= uVar1) {
        uVar8 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar6) {
        uVar8 = 0x1fffffffffffffff;
      }
      puStack_d8 = puVar5;
      if (uVar8 == 0) {
        puStack_f8 = (ulong *)0x0;
      }
      else {
        FUN_104a83ef8();
        puStack_f8 = puVar5;
      }
      puStack_f0 = puStack_f8 + lVar9;
      puStack_e0 = puStack_f8 + uVar8;
      puStack_e8 = puStack_f0 + 1;
      *puStack_f0 = uStack_100;
      uStack_100 = 0x36;
      FUN_104a83e70(param_5,&puStack_f8);
      lVar9 = param_5[1];
      FUN_104a84040(&puStack_f8);
      param_5[1] = lVar9;
      if ((uStack_100 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    puStack_f8 = auStack_138;
    func_0x000100482b64(&puStack_f8);
    if ((char)bStack_101 < '\0') {
      __ZdlPv(ppuStack_118);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail(iVar2 == 6);
LAB_104ac96cc:
  FUN_104a83ee4(param_5);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x104ac96d8);
  (*pcVar4)();
}



/* Entry: 104ac973c; end: 104ac9bd7;  */

/* WARNING: Removing unreachable block (ram,0x000104ac9804) */

void FUN_104ac973c(long param_1,undefined8 param_2,ulong param_3,undefined8 *param_4,long *param_5,
                  int param_6)

{
  undefined8 ******ppppppuVar1;
  code *pcVar2;
  char ******ppppppcVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  ulong auStack_180 [6];
  undefined1 uStack_149;
  undefined8 *****pppppuStack_148;
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
  char *****pppppcStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (0x7ffffffffffffff7 < param_3) {
    func_0x000104a6fa5c(&pppppcStack_98);
    goto LAB_104ac9b2c;
  }
  if (param_3 < 0x17) {
    uStack_88 = CONCAT17((char)param_3,(undefined7)uStack_88);
    ppppppcVar3 = &pppppcStack_98;
    if (param_3 != 0) goto LAB_104ac97d8;
  }
  else {
    uVar4 = (param_3 & 0xfffffffffffffff8) + 8;
    if ((param_3 | 7) != 0x17) {
      uVar4 = param_3 | 7;
    }
    ppppppcVar3 = (char ******)(uVar4 + 1);
    __Znwm();
    uStack_88 = uVar4 + 1 | 0x8000000000000000;
    pppppcStack_98 = (char *****)ppppppcVar3;
    uStack_90 = param_3;
LAB_104ac97d8:
    _memmove(ppppppcVar3,param_2,param_3);
  }
  *(undefined1 *)((long)ppppppcVar3 + param_3) = 0;
  lVar10 = param_1;
  func_0x000100484044(param_1,&pppppcStack_98);
  if (param_1 + 8 == lVar10) {
    if (param_6 != 0) {
      pppppcStack_98 = (char *****)0x10f233508;
      uStack_90 = 6;
      pcStack_f8 = " error:does not exist.";
      uStack_f0 = 0x16;
      uStack_c8 = param_2;
      uStack_c0 = param_3;
      func_0x000100066c24(&pppppuStack_148,&pppppcStack_98,&uStack_c8,&pcStack_f8);
      ppppppuVar1 = (undefined8 ******)pppppuStack_148;
      if (-1 < (char)bStack_131) {
        uStack_140 = (ulong)bStack_131;
        ppppppuVar1 = &pppppuStack_148;
      }
      auStack_180[4] = 0;
      auStack_180[5] = 0;
      auStack_180[3] = 0;
      FUN_104ab5920(&uStack_130,2,ppppppuVar1,uStack_140,&uStack_149,auStack_180 + 3);
      puVar6 = (ulong *)(param_5 + 2);
      puVar8 = (ulong *)param_5[1];
      if (puVar8 < (ulong *)*puVar6) {
        *puVar8 = uStack_130;
        uStack_130 = 0x36;
        param_5[1] = (long)(puVar8 + 1);
      }
      else {
        lVar10 = (long)puVar8 - *param_5 >> 3;
        uVar4 = lVar10 + 1;
        if (uVar4 >> 0x3d != 0) {
          FUN_104a83ee4(param_5);
          goto LAB_104ac9b2c;
        }
        uVar7 = (long)*puVar6 - *param_5;
        uVar9 = (long)uVar7 >> 2;
        if (uVar9 <= uVar4) {
          uVar9 = uVar4;
        }
        if (0x7ffffffffffffff7 < uVar7) {
          uVar9 = 0x1fffffffffffffff;
        }
        puStack_108 = puVar6;
        if (uVar9 == 0) {
          puStack_128 = (ulong *)0x0;
        }
        else {
          FUN_104a83ef8();
          puStack_128 = puVar6;
        }
        puStack_120 = puStack_128 + lVar10;
        puStack_110 = puStack_128 + uVar9;
        puStack_118 = puStack_120 + 1;
        *puStack_120 = uStack_130;
        uStack_130 = 0x36;
        FUN_104a83e70(param_5,&puStack_128);
        lVar10 = param_5[1];
        FUN_104a84040(&puStack_128);
        param_5[1] = lVar10;
        if ((uStack_130 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      puVar6 = auStack_180 + 3;
      goto LAB_104ac9ab0;
    }
LAB_104ac9acc:
    uVar5 = 0;
LAB_104ac9ad0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail(uVar5);
  }
  else {
    uVar4 = lVar10 + 0x38;
    FUN_104ac923c(uVar4,param_4);
    if ((uVar4 & 1) != 0) {
      uVar5 = 1;
      goto LAB_104ac9ad0;
    }
    *param_4 = 0x8000000000000000;
    pppppcStack_98 = (char *****)0x10f233508;
    uStack_90 = 6;
    pcStack_f8 = " error:type should be STRING of the form given by google.proto.Duration.";
    uStack_f0 = 0x48;
    uStack_c8 = param_2;
    uStack_c0 = param_3;
    func_0x000100066c24(&pppppuStack_148,&pppppcStack_98,&uStack_c8,&pcStack_f8);
    ppppppuVar1 = (undefined8 ******)pppppuStack_148;
    if (-1 < (char)bStack_131) {
      uStack_140 = (ulong)bStack_131;
      ppppppuVar1 = &pppppuStack_148;
    }
    auStack_180[1] = 0;
    auStack_180[2] = 0;
    auStack_180[0] = 0;
    FUN_104ab5920(&uStack_130,2,ppppppuVar1,uStack_140,&uStack_149,auStack_180);
    puVar6 = (ulong *)(param_5 + 2);
    puVar8 = (ulong *)param_5[1];
    if (puVar8 < (ulong *)*puVar6) {
      *puVar8 = uStack_130;
      uStack_130 = 0x36;
      param_5[1] = (long)(puVar8 + 1);
      puVar6 = auStack_180;
LAB_104ac9ab0:
      puStack_128 = puVar6;
      func_0x000100482b64(&puStack_128);
      if ((char)bStack_131 < '\0') {
        __ZdlPv(pppppuStack_148);
      }
      goto LAB_104ac9acc;
    }
    lVar10 = (long)puVar8 - *param_5 >> 3;
    uVar4 = lVar10 + 1;
    if (uVar4 >> 0x3d == 0) {
      uVar7 = (long)*puVar6 - *param_5;
      uVar9 = (long)uVar7 >> 2;
      if (uVar9 <= uVar4) {
        uVar9 = uVar4;
      }
      if (0x7ffffffffffffff7 < uVar7) {
        uVar9 = 0x1fffffffffffffff;
      }
      puStack_108 = puVar6;
      if (uVar9 == 0) {
        puStack_128 = (ulong *)0x0;
      }
      else {
        FUN_104a83ef8();
        puStack_128 = puVar6;
      }
      puStack_120 = puStack_128 + lVar10;
      puStack_110 = puStack_128 + uVar9;
      puStack_118 = puStack_120 + 1;
      *puStack_120 = uStack_130;
      uStack_130 = 0x36;
      FUN_104a83e70(param_5,&puStack_128);
      lVar10 = param_5[1];
      FUN_104a84040(&puStack_128);
      param_5[1] = lVar10;
      puVar6 = auStack_180;
      if ((uStack_130 & 1) != 0) {
        func_0x00010084dad0();
        puVar6 = auStack_180;
      }
      goto LAB_104ac9ab0;
    }
  }
  FUN_104a83ee4(param_5);
LAB_104ac9b2c:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x104ac9b30);
  (*pcVar2)();
}



/* Entry: 104ac9bd8; end: 104ac9c57;  */

undefined8 * FUN_104ac9bd8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if (*(long *)(param_1 + 0x58) == 0) {
    puVar4 = (undefined8 *)0x58;
    __Znwm();
    *puVar4 = &PTR_FUN_1107c5b60;
    puVar4[1] = 2;
    func_0x000100460318(puVar4 + 2);
    puVar4[10] = param_1;
    *(undefined8 **)(param_1 + 0x58) = puVar4;
  }
  else {
    plVar1 = (long *)(*(long *)(param_1 + 0x58) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar4 = *(undefined8 **)(param_1 + 0x58);
  }
  return puVar4;
}



/* Entry: 104ac9c58; end: 104ac9ce7;  */

void FUN_104ac9c58(long param_1)

{
  func_0x000104ac9c80(*(undefined8 *)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0x58) = 0;
  return;
}



/* Entry: 104ac9ce8; end: 104ac9d8f;  */

void FUN_104ac9ce8(long param_1)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  
  lVar7 = param_1 + 0x10;
  func_0x000100460448(lVar7);
  if (*(long *)(param_1 + 0x50) == 0) {
LAB_104ac9d54:
    func_0x000100466b80(lVar7);
  }
  else {
    piVar1 = (int *)(*(long *)(param_1 + 0x50) + 0x50);
    iVar6 = *piVar1;
    do {
      while( true ) {
        if (iVar6 == 0) goto LAB_104ac9d54;
        iVar3 = *piVar1;
        if (iVar3 == iVar6) break;
        ClearExclusiveLocal();
        iVar6 = iVar3;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar6 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      iVar6 = iVar3;
    } while (cVar4 != '\0');
    lVar8 = *(long *)(param_1 + 0x50);
    func_0x000100466b80(lVar7);
    puVar9 = (undefined8 *)(lVar8 + 8);
    (**(code **)*puVar9)(puVar9);
  }
  plVar2 = (long *)(param_1 + 8);
  do {
    lVar7 = *plVar2;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *plVar2 = lVar7 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((param_1 != 0) && (lVar7 == 1)) {
    func_0x0001005a5f48(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 104ac9d90; end: 104ac9d93;  */

void FUN_104ac9d90(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
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
  if ((param_1 != 0) && (lVar4 == 1)) {
    func_0x0001005a5f48(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 104ac9d94; end: 104ac9deb;  */

void FUN_104ac9d94(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
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
  if ((param_1 != 0) && (lVar4 == 1)) {
    func_0x0001005a5f48(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 104ac9dec; end: 104ac9e1b;  */

undefined8 * FUN_104ac9dec(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  func_0x000100460318(param_1 + 3);
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  return param_1;
}



/* Entry: 104ac9e1c; end: 104ac9ed3;  */

long * FUN_104ac9e1c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plStack_30;
  undefined1 uStack_28;
  
  if (*param_1 != -0x8000000000000000) {
    plVar1 = param_1 + 3;
    uStack_28 = 0;
    plVar2 = plVar1;
    plStack_30 = plVar1;
    func_0x000100460448();
    if ((int)param_1[0xb] == 1) {
      FUN_104ab2050();
      (**(code **)(*plVar2 + 0x58))();
      if ((int)plVar2 != 0) {
        uStack_28 = 1;
        func_0x000100466b80(plVar1);
        FUN_104ac9ed4(param_1);
      }
    }
    FUN_104ab38e4(&plStack_30);
  }
  if ((long *)param_1[0xc] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xc] + 8))();
  }
  func_0x0001005a5f48(param_1 + 3);
  return param_1;
}



/* Entry: 104ac9ed4; end: 104ac9f3f;  */

void FUN_104ac9ed4(long param_1)

{
  undefined8 *puVar1;
  
  func_0x000100460448(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x58) = 2;
  puVar1 = *(undefined8 **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  func_0x000100466b80(param_1 + 0x18);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000104ac9f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1);
    return;
  }
  return;
}



/* Entry: 104ac9f40; end: 104ac9f43;  */

long * FUN_104ac9f40(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plStack_30;
  undefined1 uStack_28;
  
  if (*param_1 != -0x8000000000000000) {
    plVar1 = param_1 + 3;
    uStack_28 = 0;
    plVar2 = plVar1;
    plStack_30 = plVar1;
    func_0x000100460448();
    if ((int)param_1[0xb] == 1) {
      FUN_104ab2050();
      (**(code **)(*plVar2 + 0x58))();
      if ((int)plVar2 != 0) {
        uStack_28 = 1;
        func_0x000100466b80(plVar1);
        FUN_104ac9ed4(param_1);
      }
    }
    FUN_104ab38e4(&plStack_30);
  }
  if ((long *)param_1[0xc] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xc] + 8))();
  }
  func_0x0001005a5f48(param_1 + 3);
  return param_1;
}



/* Entry: 104ac9f44; end: 104aca183;  */

void FUN_104ac9f44(undefined8 *param_1,ulong *param_2)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long **pplVar6;
  long *plVar7;
  undefined ***pppuVar8;
  undefined4 uVar9;
  long lVar10;
  undefined ***unaff_x23;
  ulong uVar11;
  long *plStack_70;
  undefined **ppuStack_68;
  ulong *puStack_60;
  undefined ***pppuStack_50;
  long lStack_48;
  
  pplVar6 = &plStack_70;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar1 = (undefined ***)(param_2 + 3);
  pppuVar2 = pppuVar1;
  func_0x000100460448();
  if ((int)param_2[0xb] == 2) {
LAB_104aca014:
    *param_1 = 0;
    uVar9 = 1;
  }
  else {
    if ((int)param_2[0xb] == 0) {
      func_0x000100460dc4();
      ppuVar3 = *pppuVar2;
      func_0x0001004671a4();
      if ((long)*param_2 <= (long)ppuVar3) goto LAB_104aca014;
      *(undefined4 *)(param_2 + 0xb) = 1;
      FUN_104ab2050();
      uVar11 = *param_2;
      ppuVar4 = ppuVar3;
      func_0x000100460dc4();
      puVar5 = *ppuVar4;
      func_0x0001004671a4();
      plStack_70 = (long *)0x7fffffffffffffff;
      if ((((uVar11 != 0x7fffffffffffffff) && (puVar5 != (undefined *)0x8000000000000001)) &&
          (plStack_70 = (long *)0x8000000000000000, uVar11 != 0x8000000000000000)) &&
         (puVar5 != (undefined *)0x8000000000000000)) {
        if ((long)uVar11 < 1) {
          if ((long)(-0x8000000000000000 - uVar11) <= -(long)puVar5) goto LAB_104aca02c;
        }
        else if ((long)(uVar11 ^ 0x7fffffffffffffff) < -(long)puVar5) {
          plStack_70 = (long *)0x7fffffffffffffff;
        }
        else {
LAB_104aca02c:
          plStack_70 = (long *)(uVar11 - (long)puVar5);
        }
      }
      FUN_104ab7d70();
      ppuStack_68 = &PTR_FUN_1107c5b98;
      unaff_x23 = &ppuStack_68;
      puStack_60 = param_2;
      pppuStack_50 = unaff_x23;
      (**(code **)(*ppuVar3 + 0x50))(ppuVar3,pplVar6,&ppuStack_68);
      param_2[1] = (ulong)ppuVar3;
      param_2[2] = (ulong)pplVar6;
      if (pppuStack_50 == unaff_x23) {
        lVar10 = 4;
        pppuVar2 = &ppuStack_68;
      }
      else {
        pppuVar2 = pppuStack_50;
        if (pppuStack_50 == (undefined ***)0x0) goto LAB_104aca098;
        lVar10 = 5;
      }
      (*(code *)(*pppuVar2)[lVar10])();
    }
LAB_104aca098:
    func_0x00010047a478();
    (**(code **)(**pppuVar2 + 0x28))(&plStack_70);
    plVar7 = (long *)param_2[0xc];
    param_2[0xc] = (ulong)plStack_70;
    plStack_70 = plVar7;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    uVar9 = 0;
  }
  *(undefined4 *)(param_1 + 1) = uVar9;
  pppuVar2 = pppuVar1;
  func_0x000100466b80(pppuVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (pppuStack_50 == unaff_x23) {
    lVar10 = 4;
    pppuVar8 = &ppuStack_68;
  }
  else {
    if (pppuStack_50 == (undefined ***)0x0) goto LAB_104aca15c;
    lVar10 = 5;
    pppuVar8 = pppuStack_50;
  }
  (*(code *)(*pppuVar8)[lVar10])();
LAB_104aca15c:
  func_0x000100466b80(pppuVar1);
  __Unwind_Resume(pppuVar2);
  FUN_104bd46a0(pppuVar2);
  return;
}



/* Entry: 104aca184; end: 104aca18b;  */

void FUN_104aca184(void)

{
  return;
}



/* Entry: 104aca18c; end: 104aca1bf;  */

void FUN_104aca18c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_1107c5b98;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 104aca1c0; end: 104aca1db;  */

void FUN_104aca1c0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1107c5b98;
  param_2[1] = uVar1;
  return;
}



/* Entry: 104aca1dc; end: 104aca257;  */

void FUN_104aca1dc(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_80 [72];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001004b62b4(&uStack_38,0);
  func_0x000100460de4(auStack_80);
  FUN_104ac9ed4(uVar1);
  func_0x000100467a48(auStack_80);
  func_0x0001004b6ddc(&uStack_38);
  return;
}



/* Entry: 104aca258; end: 104aca293;  */

long FUN_104aca258(long param_1,undefined8 param_2)

{
  FUN_104a7385c(param_2,&PTR_DAT_1107c5bf8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104aca294; end: 104aca29f;  */

undefined ** FUN_104aca294(void)

{
  return &PTR_DAT_1107c5bf8;
}



/* Entry: 104aca2a0; end: 104aca2ff;  */

long FUN_104aca2a0(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 != param_1) {
    FUN_104a83324(param_1);
    FUN_104aca384(param_1 + 0x20,param_2 + 0x20);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_1 + 0x30,param_2 + 0x30);
    func_0x00010048650c(*(undefined8 *)(param_1 + 0x48));
    uVar1 = *(undefined8 *)(param_2 + 0x48);
    func_0x0001004bf248();
    *(undefined8 *)(param_1 + 0x48) = uVar1;
  }
  return param_1;
}



/* Entry: 104aca300; end: 104aca383;  */

long FUN_104aca300(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001004c7a78();
  FUN_104aca4bc(param_1 + 0x20,param_2 + 0x20);
  if (*(char *)(param_1 + 0x47) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x30));
  }
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  *(undefined1 *)(param_2 + 0x47) = 0;
  *(undefined1 *)(param_2 + 0x30) = 0;
  func_0x00010048650c(*(undefined8 *)(param_1 + 0x48));
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x48) = 0;
  return param_1;
}



/* Entry: 104aca384; end: 104aca3cb;  */

long * FUN_104aca384(long *param_1,long *param_2)

{
  if (param_1 != param_2) {
    if (*param_2 == 0) {
      FUN_104aca3cc(param_1,param_2 + 1);
    }
    else {
      FUN_104a859d4(param_1);
    }
  }
  return param_1;
}



/* Entry: 104aca3cc; end: 104aca4bb;  */

void FUN_104aca3cc(ulong *param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  uVar4 = *param_1;
  if (uVar4 == 0) {
    if (*param_2 == 0) {
      uVar4 = 0;
    }
    else {
      plVar5 = (long *)(*param_2 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uVar4 = *param_2;
    }
    plVar5 = (long *)param_1[1];
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
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
    param_1[1] = uVar4;
  }
  else {
    param_1[1] = 0;
    if (*param_2 != 0) {
      plVar5 = (long *)(*param_2 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uVar4 = *param_1;
      param_1[1] = *param_2;
      if (uVar4 == 0) {
        return;
      }
    }
    *param_1 = 0;
    if ((uVar4 & 1) != 0) {
      func_0x00010084dad0(uVar4);
    }
  }
  return;
}



/* Entry: 104aca4bc; end: 104aca503;  */

long * FUN_104aca4bc(long *param_1,long *param_2)

{
  if (param_1 != param_2) {
    if (*param_2 == 0) {
      FUN_104aca504(param_1,param_2 + 1);
    }
    else {
      FUN_104aca5b4(param_1);
    }
  }
  return param_1;
}



/* Entry: 104aca504; end: 104aca5b3;  */

void FUN_104aca504(ulong *param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  uVar4 = *param_1;
  if (uVar4 == 0) {
    uVar4 = *param_2;
    plVar5 = (long *)param_1[1];
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
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
    param_1[1] = uVar4;
    *param_2 = 0;
  }
  else {
    param_1[1] = 0;
    param_1[1] = *param_2;
    *param_2 = 0;
    *param_1 = 0;
    if ((uVar4 & 1) != 0) {
      func_0x00010084dad0(uVar4);
    }
  }
  return;
}



/* Entry: 104aca5b4; end: 104aca687;  */

void FUN_104aca5b4(ulong *param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulong *puStack_30;
  undefined *puStack_28;
  
  if ((*param_1 == 0) && (plVar5 = (long *)param_1[1], plVar5 != (long *)0x0)) {
    plVar1 = plVar5 + 1;
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
      puStack_30 = param_2;
      (**(code **)(*plVar5 + 8))();
      param_2 = puStack_30;
    }
  }
  uVar6 = *param_2;
  *param_2 = 0x36;
  uVar9 = *param_1;
  if (uVar6 == uVar9) {
    if ((uVar6 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  else {
    *param_1 = uVar6;
    puStack_28 = (undefined *)0x36;
    if ((uVar9 & 1) == 0) goto LAB_104aca630;
    func_0x00010084dad0(uVar9);
  }
  uVar6 = *param_1;
LAB_104aca630:
  if (uVar6 != 0) {
    return;
  }
  puStack_30 = (ulong *)&UNK_10f6d19ac;
  puStack_28 = &UNK_10f6d196c;
  uStack_38 = 0x4a;
  uStack_34 = 2;
  func_0x00010ae77bf0(&PTR_DAT_113311b68,&uStack_34,&puStack_30,&uStack_38,&puStack_28);
  puVar4 = puStack_28;
  puVar7 = puStack_28;
  _strlen(puStack_28);
  func_0x000107c2b9b4(&puStack_30,0xd,puVar4,puVar7);
  puVar8 = (ulong *)*param_1;
  if (puStack_30 != puVar8) {
    *param_1 = (ulong)puStack_30;
    puStack_30 = (ulong *)0x36;
    if (((ulong)puVar8 & 1) == 0) {
      return;
    }
    func_0x000107c2b9b0();
    puVar8 = puStack_30;
  }
  if (((ulong)puVar8 & 1) != 0) {
    func_0x000107c2b9b0();
  }
  return;
}



/* Entry: 104aca688; end: 104aca6c3;  */

long FUN_104aca688(long param_1)

{
  if (*(char *)(param_1 + 0x2f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x18));
  }
  func_0x000100472450(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 104aca6c4; end: 104aca84b;  */

undefined8 * FUN_104aca6c4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plStack_58;
  undefined1 uStack_49;
  long *plStack_48;
  
  if (param_2 != param_1) {
    uVar3 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar3;
    uVar8 = param_2[3];
    uVar3 = param_2[2];
    uVar10 = param_2[5];
    uVar9 = param_2[4];
    uVar11 = param_2[6];
    uVar13 = param_2[9];
    uVar12 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar11;
    param_1[9] = uVar13;
    param_1[8] = uVar12;
    param_1[3] = uVar8;
    param_1[2] = uVar3;
    param_1[5] = uVar10;
    param_1[4] = uVar9;
    uVar8 = param_2[0xb];
    uVar3 = param_2[10];
    uVar10 = param_2[0xd];
    uVar9 = param_2[0xc];
    uVar12 = param_2[0xf];
    uVar11 = param_2[0xe];
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    param_1[0xd] = uVar10;
    param_1[0xc] = uVar9;
    param_1[0xf] = uVar12;
    param_1[0xe] = uVar11;
    param_1[0xb] = uVar8;
    param_1[10] = uVar3;
    func_0x00010048650c(param_1[0x11]);
    uVar3 = param_2[0x11];
    func_0x0001004bf248();
    param_1[0x11] = uVar3;
    puVar6 = param_1 + 0x12;
    func_0x0001004c4af4(puVar6,param_1[0x13]);
    param_1[0x12] = param_1 + 0x13;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    plVar7 = (long *)param_2[0x12];
    while (plVar7 != param_2 + 0x13) {
      (**(code **)(*(long *)plVar7[5] + 0x10))(&plStack_58);
      puVar4 = puVar6;
      plStack_48 = plVar7 + 4;
      FUN_104acaf9c(puVar6,plVar7 + 4,&UNK_10dd5b8f9,&plStack_48,&uStack_49);
      plVar1 = plStack_58;
      plStack_58 = (long *)0x0;
      plVar5 = (long *)puVar4[5];
      puVar4[5] = plVar1;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))(plVar5);
        plVar1 = plStack_58;
        plStack_58 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
      }
      plVar1 = (long *)plVar7[1];
      plVar5 = plVar7;
      if ((long *)plVar7[1] == (long *)0x0) {
        do {
          plVar7 = (long *)plVar5[2];
          bVar2 = (long *)*plVar7 != plVar5;
          plVar5 = plVar7;
        } while (bVar2);
      }
      else {
        do {
          plVar7 = plVar1;
          plVar1 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
    }
  }
  return param_1;
}



/* Entry: 104aca84c; end: 104acaf9b;  */

/* WARNING: Removing unreachable block (ram,0x000104aca930) */

void FUN_104aca84c(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 ***pppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  undefined8 ****ppppuVar13;
  undefined8 ***pppuStack_1a8;
  undefined8 ***pppuStack_1a0;
  byte bStack_191;
  undefined8 **ppuStack_190;
  undefined8 **ppuStack_188;
  undefined8 **ppuStack_180;
  undefined8 ***pppuStack_178;
  undefined8 ***pppuStack_170;
  undefined8 ***pppuStack_168;
  undefined8 **ppuStack_160;
  undefined8 ***pppuStack_158;
  undefined8 ***pppuStack_150;
  long alStack_148 [4];
  undefined8 ***pppuStack_128;
  undefined8 ***pppuStack_120;
  undefined8 ***pppuStack_118;
  undefined8 ***pppuStack_110;
  undefined8 ***pppuStack_108;
  undefined8 ***pppuStack_100;
  undefined8 ***pppuStack_f8;
  undefined8 ***pppuStack_f0;
  undefined8 ***pppuStack_e8;
  undefined8 ***pppuStack_e0;
  undefined8 ***pppuStack_d0;
  undefined8 ***pppuStack_c8;
  undefined8 ***pppuStack_a0;
  undefined8 ***pppuStack_98;
  long lStack_90;
  undefined1 auStack_88 [24];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001004d466c(alStack_148,param_2,0);
  if (alStack_148[0] == 0) {
    plVar11 = alStack_148;
    func_0x0001004d5530();
    if (*(char *)((long)plVar11 + 0x17) < '\0') {
      func_0x000100033dac(&pppuStack_a0,*plVar11,plVar11[1]);
    }
    else {
      pppuStack_98 = (undefined8 ***)plVar11[1];
      pppuStack_a0 = (undefined8 ***)*plVar11;
      lStack_90 = plVar11[2];
    }
  }
  else {
    func_0x00010ae77430(&pppuStack_a0,alStack_148,1);
  }
  pppuStack_d0 = &ppuStack_160;
  ppuStack_160 = (undefined8 ***)0x0;
  pppuStack_158 = (undefined8 ***)0x0;
  pppuStack_150 = (undefined8 ***)0x0;
  pppuStack_c8 = (undefined8 ***)((ulong)pppuStack_c8 & 0xffffffffffffff00);
  pppuVar5 = (undefined8 ***)0x18;
  __Znwm();
  ppppuVar7 = &pppuStack_150;
  pppuStack_150 = pppuVar5 + 3;
  ppppuVar13 = ppppuVar7;
  ppuStack_160 = pppuVar5;
  pppuStack_158 = pppuVar5;
  func_0x0001004d6840(ppppuVar7,&pppuStack_a0,auStack_88,pppuVar5);
  pppuStack_158 = ppppuVar13;
  if (*(long *)(param_2 + 0x88) == 0) {
LAB_104acaa94:
    if (*(long *)(param_2 + 0xa0) != 0) {
      pppuStack_178 = (undefined8 ****)0x0;
      pppuStack_170 = (undefined8 ****)0x0;
      pppuStack_168 = (undefined8 ****)0x0;
      plVar11 = *(long **)(param_2 + 0x90);
      if (plVar11 != (long *)(param_2 + 0x98)) {
        do {
          ppppuVar13 = (undefined8 ****)plVar11[4];
          if (ppppuVar13 == (undefined8 ****)0x0) {
            ppppuVar6 = (undefined8 ****)0x0;
          }
          else {
            ppppuVar6 = ppppuVar13;
            _strlen();
          }
          pppuStack_d0 = (undefined8 ***)0x10f27ca42;
          pppuStack_c8 = (undefined8 ****)0x1;
          pppuStack_a0 = ppppuVar13;
          pppuStack_98 = ppppuVar6;
          (**(code **)(*(long *)plVar11[5] + 0x20))(&pppuStack_1a8);
          pppuStack_f8 = pppuStack_1a0;
          pppuStack_100 = pppuStack_1a8;
          if (-1 < (char)bStack_191) {
            pppuStack_f8 = (undefined8 ****)(ulong)bStack_191;
            pppuStack_100 = &pppuStack_1a8;
          }
          func_0x000100066c24(&ppuStack_190,&pppuStack_a0,&pppuStack_d0,&pppuStack_100);
          if (pppuStack_170 < pppuStack_168) {
            pppuStack_170[2] = ppuStack_180;
            pppuStack_170[1] = ppuStack_188;
            *pppuStack_170 = ppuStack_190;
            ppuStack_188 = (undefined8 ***)0x0;
            ppuStack_180 = (undefined8 ***)0x0;
            ppuStack_190 = (undefined8 ***)0x0;
            pppuStack_170 = pppuStack_170 + 3;
          }
          else {
            lVar8 = (long)pppuStack_170 - (long)pppuStack_178 >> 3;
            uVar1 = lVar8 * -0x5555555555555555 + 1;
            if (0xaaaaaaaaaaaaaaa < uVar1) {
              FUN_104a9439c(&pppuStack_178);
              goto LAB_104acae88;
            }
            lVar9 = (long)pppuStack_168 - (long)pppuStack_178 >> 3;
            uVar10 = lVar9 * 0x5555555555555556;
            if (uVar10 < uVar1 || uVar10 - uVar1 == 0) {
              uVar10 = uVar1;
            }
            if (0x555555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
              uVar10 = 0xaaaaaaaaaaaaaaa;
            }
            pppuStack_108 = &pppuStack_168;
            if (uVar10 == 0) {
              ppppuVar13 = (undefined8 ****)0x0;
            }
            else {
              ppppuVar13 = &pppuStack_168;
              func_0x0001004d69d4();
            }
            ppppuVar6 = ppppuVar13 + lVar8;
            pppuStack_110 = ppppuVar13 + uVar10 * 3;
            pppuStack_128 = ppppuVar13;
            pppuStack_120 = ppppuVar6;
            ppppuVar6[2] = (undefined8 ***)ppuStack_180;
            ppppuVar6[1] = (undefined8 ***)ppuStack_188;
            *ppppuVar6 = (undefined8 ***)ppuStack_190;
            ppuStack_188 = (undefined8 ***)0x0;
            ppuStack_180 = (undefined8 ***)0x0;
            ppuStack_190 = (undefined8 ***)0x0;
            pppuStack_118 = ppppuVar6 + 3;
            func_0x00010004824c(&pppuStack_178,&pppuStack_128);
            pppuVar5 = pppuStack_170;
            func_0x0001000482e8(&pppuStack_128);
            pppuStack_170 = pppuVar5;
            if ((long)ppuStack_180 < 0) {
              __ZdlPv(ppuStack_190);
            }
          }
          if ((char)bStack_191 < '\0') {
            __ZdlPv(pppuStack_1a8);
          }
          plVar2 = (long *)plVar11[1];
          plVar12 = plVar11;
          if ((long *)plVar11[1] == (long *)0x0) {
            do {
              plVar11 = (long *)plVar12[2];
              bVar4 = (long *)*plVar11 != plVar12;
              plVar12 = plVar11;
            } while (bVar4);
          }
          else {
            do {
              plVar11 = plVar2;
              plVar2 = (long *)*plVar11;
            } while ((long *)*plVar11 != (long *)0x0);
          }
        } while (plVar11 != (long *)(param_2 + 0x98));
      }
      pppuStack_a0 = (undefined8 ***)0x10f23a7dc;
      pppuStack_98 = (undefined8 ****)0xc;
      func_0x0001004d6a18(&pppuStack_1a8,pppuStack_178,pppuStack_170,&DAT_10f68f19e,2);
      pppuStack_c8 = pppuStack_1a0;
      pppuStack_d0 = pppuStack_1a8;
      if (-1 < (char)bStack_191) {
        pppuStack_c8 = (undefined8 ****)(ulong)bStack_191;
        pppuStack_d0 = &pppuStack_1a8;
      }
      pppuStack_100 = (undefined8 ***)&DAT_10f2da10d;
      pppuStack_f8 = (undefined8 ****)0x1;
      func_0x000100066c24(&ppuStack_190,&pppuStack_a0,&pppuStack_d0,&pppuStack_100);
      if (pppuStack_158 < pppuStack_150) {
        pppuStack_158[2] = ppuStack_180;
        pppuStack_158[1] = ppuStack_188;
        *pppuStack_158 = ppuStack_190;
        ppuStack_188 = (undefined8 ***)0x0;
        ppuStack_180 = (undefined8 ***)0x0;
        ppuStack_190 = (undefined8 ***)0x0;
        pppuStack_158 = pppuStack_158 + 3;
      }
      else {
        lVar8 = (long)pppuStack_158 - (long)ppuStack_160 >> 3;
        uVar1 = lVar8 * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar1) {
          FUN_104a9439c(&ppuStack_160);
          goto LAB_104acae88;
        }
        lVar9 = (long)pppuStack_150 - (long)ppuStack_160 >> 3;
        uVar10 = lVar9 * 0x5555555555555556;
        if (uVar10 < uVar1 || uVar10 - uVar1 == 0) {
          uVar10 = uVar1;
        }
        if (0x555555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
          uVar10 = 0xaaaaaaaaaaaaaaa;
        }
        pppuStack_108 = ppppuVar7;
        if (uVar10 == 0) {
          pppuStack_128 = (undefined8 ****)0x0;
        }
        else {
          func_0x0001004d69d4();
          pppuStack_128 = ppppuVar7;
        }
        ppppuVar7 = (undefined8 ****)(pppuStack_128 + lVar8);
        pppuStack_110 = pppuStack_128 + uVar10 * 3;
        pppuStack_120 = ppppuVar7;
        ppppuVar7[2] = (undefined8 ***)ppuStack_180;
        ppppuVar7[1] = (undefined8 ***)ppuStack_188;
        *ppppuVar7 = (undefined8 ***)ppuStack_190;
        ppuStack_188 = (undefined8 ***)0x0;
        ppuStack_180 = (undefined8 ***)0x0;
        ppuStack_190 = (undefined8 ***)0x0;
        pppuStack_118 = ppppuVar7 + 3;
        func_0x00010004824c(&ppuStack_160,&pppuStack_128);
        pppuVar5 = pppuStack_158;
        func_0x0001000482e8(&pppuStack_128);
        pppuStack_158 = pppuVar5;
        if ((long)ppuStack_180 < 0) {
          __ZdlPv(ppuStack_190);
        }
      }
      if ((char)bStack_191 < '\0') {
        __ZdlPv(pppuStack_1a8);
      }
      pppuStack_a0 = &pppuStack_178;
      func_0x0001004d6bcc(&pppuStack_a0);
    }
    func_0x0001004d6a18(param_1,ppuStack_160,pppuStack_158," ",1);
    pppuStack_a0 = &ppuStack_160;
    func_0x0001004d6bcc(&pppuStack_a0);
    func_0x00010047c7d4(alStack_148);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    pppuStack_a0 = (undefined8 ***)0x10f23a7d6;
    pppuStack_98 = (undefined8 ****)0x5;
    FUN_104aaa098(&pppuStack_178);
    pppuStack_c8 = pppuStack_170;
    pppuStack_d0 = pppuStack_178;
    if (-1 < (long)pppuStack_168) {
      pppuStack_c8 = (undefined8 ****)((ulong)pppuStack_168 >> 0x38);
      pppuStack_d0 = &pppuStack_178;
    }
    func_0x00010047c83c(&pppuStack_128,&pppuStack_a0,&pppuStack_d0);
    if (pppuStack_158 < pppuStack_150) {
      pppuStack_158[2] = pppuStack_118;
      pppuStack_158[1] = pppuStack_120;
      *pppuStack_158 = pppuStack_128;
      pppuStack_120 = (undefined8 ****)0x0;
      pppuStack_118 = (undefined8 ****)0x0;
      pppuStack_128 = (undefined8 ****)0x0;
      pppuStack_158 = pppuStack_158 + 3;
LAB_104acaa84:
      if ((long)pppuStack_168 < 0) {
        __ZdlPv(pppuStack_178);
      }
      goto LAB_104acaa94;
    }
    lVar8 = (long)pppuStack_158 - (long)ppuStack_160 >> 3;
    uVar1 = lVar8 * -0x5555555555555555 + 1;
    if (uVar1 < 0xaaaaaaaaaaaaaab) {
      lVar9 = (long)pppuStack_150 - (long)ppuStack_160 >> 3;
      uVar10 = lVar9 * 0x5555555555555556;
      if (uVar10 < uVar1 || uVar10 - uVar1 == 0) {
        uVar10 = uVar1;
      }
      if (0x555555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
        uVar10 = 0xaaaaaaaaaaaaaaa;
      }
      pppuStack_e0 = ppppuVar7;
      if (uVar10 == 0) {
        ppppuVar13 = (undefined8 ****)0x0;
      }
      else {
        ppppuVar13 = ppppuVar7;
        func_0x0001004d69d4();
      }
      ppppuVar6 = ppppuVar13 + lVar8;
      pppuStack_e8 = ppppuVar13 + uVar10 * 3;
      pppuStack_100 = ppppuVar13;
      pppuStack_f8 = ppppuVar6;
      ppppuVar6[2] = pppuStack_118;
      ppppuVar6[1] = pppuStack_120;
      *ppppuVar6 = pppuStack_128;
      pppuStack_120 = (undefined8 ****)0x0;
      pppuStack_118 = (undefined8 ****)0x0;
      pppuStack_128 = (undefined8 ****)0x0;
      pppuStack_f0 = ppppuVar6 + 3;
      func_0x00010004824c(&ppuStack_160,&pppuStack_100);
      pppuVar5 = pppuStack_158;
      func_0x0001000482e8(&pppuStack_100);
      pppuStack_158 = pppuVar5;
      if ((long)pppuStack_118 < 0) {
        __ZdlPv(pppuStack_128);
      }
      goto LAB_104acaa84;
    }
  }
  FUN_104a9439c(&ppuStack_160);
LAB_104acae88:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x104acae8c);
  (*pcVar3)();
}



/* Entry: 104acaf9c; end: 104acb057;  */

undefined1  [16] FUN_104acaf9c(long param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar3 = plVar1, (ulong)plVar3[4] <= *param_2) {
        if (*param_2 <= (ulong)plVar3[4]) {
          uVar2 = 0;
          goto LAB_104acb040;
        }
        plVar1 = (long *)plVar3[1];
        if ((long *)plVar3[1] == (long *)0x0) {
          plVar4 = plVar3 + 1;
          goto LAB_104acb004;
        }
      }
      plVar1 = (long *)*plVar3;
      plVar4 = plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
LAB_104acb004:
  plVar1 = (long *)0x30;
  __Znwm();
  plVar1[4] = *(long *)*param_4;
  plVar1[5] = 0;
  FUN_104a83cf4(param_1,plVar3,plVar4,plVar1);
  uVar2 = 1;
  plVar3 = plVar1;
LAB_104acb040:
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = plVar3;
  return auVar5;
}



/* Entry: 104acb058; end: 104acb09b;  */

/* WARNING: Removing unreachable block (ram,0x000104acb080) */

void FUN_104acb058(long param_1)

{
  long lVar1;
  
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8); lVar1 = lVar1 + -0x18
      ) {
  }
  return;
}



/* Entry: 104acb09c; end: 104acb0a3;  */

void FUN_104acb09c(void)

{
  return;
}



/* Entry: 104acb0a4; end: 104acb0d7;  */

void FUN_104acb0a4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_1107c5c60;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 104acb0d8; end: 104acb0db;  */

void FUN_104acb0d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104acb0dc; end: 104acb117;  */

long FUN_104acb0dc(long param_1,undefined8 param_2)

{
  FUN_104a7385c(param_2,&PTR_DAT_1107c5ce0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104acb118; end: 104acb137;  */

undefined ** FUN_104acb118(void)

{
  return &PTR_DAT_1107c5ce0;
}



/* Entry: 104acb138; end: 104acb177;  */

void FUN_104acb138(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(((ulong)((int)param_1 + 0xf) & 0xfffffff0) + 0x30);
  func_0x0001004b7918(puVar1,0x40);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = param_1;
  puVar1[3] = 0;
  puVar1[4] = param_2;
  return;
}



/* Entry: 104acb178; end: 104acb217;  */

long * FUN_104acb178(long *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = *param_1;
  if (lVar5 != 0) {
    lVar2 = param_1[2];
    plVar6 = (long *)param_1[3];
    param_1[3] = 0;
    if (*(long *)(lVar5 + 0x68) == lVar2) {
      plVar1 = (long *)(lVar5 + 0x68);
      do {
        if (*plVar1 != lVar2) {
          ClearExclusiveLocal();
          goto LAB_104acb1d8;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (plVar6 != (long *)0x0) {
        (**(code **)*plVar6)();
      }
    }
    else {
LAB_104acb1d8:
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  if ((long *)param_1[3] != (long *)0x0) {
    (**(code **)(*(long *)param_1[3] + 8))();
  }
  plVar6 = (long *)param_1[1];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      func_0x000107c60d68(plVar6);
    }
  }
  return param_1;
}



/* Entry: 104acb218; end: 104acb21b;  */

long * FUN_104acb218(long *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = *param_1;
  if (lVar5 != 0) {
    lVar2 = param_1[2];
    plVar6 = (long *)param_1[3];
    param_1[3] = 0;
    if (*(long *)(lVar5 + 0x68) == lVar2) {
      plVar1 = (long *)(lVar5 + 0x68);
      do {
        if (*plVar1 != lVar2) {
          ClearExclusiveLocal();
          goto LAB_104acb1d8;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (plVar6 != (long *)0x0) {
        (**(code **)*plVar6)();
      }
    }
    else {
LAB_104acb1d8:
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  if ((long *)param_1[3] != (long *)0x0) {
    (**(code **)(*(long *)param_1[3] + 8))();
  }
  plVar6 = (long *)param_1[1];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      func_0x000107c60d68(plVar6);
    }
  }
  return param_1;
}



/* Entry: 104acb21c; end: 104acb2c7;  */

void FUN_104acb21c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 auStack_48 [32];
  char cStack_28;
  
  plVar1 = param_1 + 2;
  do {
    puVar4 = (undefined8 *)*plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (puVar4 != (undefined8 *)0x0) {
    auStack_48[0] = 0;
    cStack_28 = '\0';
    (**(code **)*puVar4)(puVar4,auStack_48);
    if (cStack_28 != '\0') {
      FUN_104acb178(auStack_48);
    }
  }
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
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  return;
}



/* Entry: 104acb2c8; end: 104acb357;  */

void FUN_104acb2c8(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  char cStack_30;
  
  plVar1 = (long *)(param_1 + 0x10);
  do {
    puVar4 = (undefined8 *)*plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (puVar4 != (undefined8 *)0x0) {
    uStack_48 = param_2[1];
    uStack_50 = *param_2;
    *param_2 = 0;
    param_2[1] = 0;
    uStack_40 = param_2[2];
    uStack_38 = param_2[3];
    param_2[3] = 0;
    cStack_30 = '\x01';
    (**(code **)*puVar4)(puVar4,&uStack_50);
    if (cStack_30 != '\0') {
      FUN_104acb178(&uStack_50);
    }
  }
  return;
}



/* Entry: 104acb358; end: 104acb417;  */

void FUN_104acb358(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_30;
  undefined1 uStack_21;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x000100460448(uVar2);
  do {
    uStack_21 = 0;
    lVar1 = *(long *)(param_1 + 8) + 0x40;
    func_0x0001004920d0(lVar1,&uStack_21);
    lStack_30 = lVar1;
    if (lVar1 == 0) {
LAB_104acb3c4:
      FUN_104acbaf8(&lStack_30,0);
      func_0x000100466b80(uVar2);
      return;
    }
    if (*(long *)(*(long *)(lVar1 + 8) + 0x10) != 0) {
      lStack_30 = 0;
      func_0x0001004bc388(*(long *)(param_1 + 8) + 0x40);
      goto LAB_104acb3c4;
    }
    FUN_104acbaf8(&lStack_30,0);
  } while( true );
}



/* Entry: 104acb418; end: 104acb41b;  */

long FUN_104acb418(long param_1)

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



/* Entry: 104acb41c; end: 104acb537;  */

void FUN_104acb41c(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined4 uVar3;
  long lVar4;
  long *plStack_48;
  undefined8 *puStack_40;
  char cStack_31;
  
  lVar4 = *param_2;
  func_0x000100460448(lVar4);
  cStack_31 = '\0';
  puVar1 = (undefined8 *)(*param_2 + 0x40);
  func_0x0001004920d0(puVar1,&cStack_31);
  puStack_40 = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
    if (cStack_31 == '\0') {
      func_0x00010047a478();
      (**(code **)(*(long *)*puVar1 + 0x18))();
    }
    else {
      func_0x00010047a478();
      (**(code **)(*(long *)*puVar1 + 0x28))(&plStack_48);
      plVar2 = *(long **)(*param_2 + 0x90);
      *(long **)(*param_2 + 0x90) = plStack_48;
      plStack_48 = plVar2;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
    }
    uVar3 = 0;
  }
  else {
    *param_1 = puVar1[1];
    puVar1[1] = 0;
    uVar3 = 1;
  }
  *(undefined4 *)(param_1 + 1) = uVar3;
  FUN_104acbaf8(&puStack_40,0);
  func_0x000100466b80(lVar4);
  return;
}



/* Entry: 104acb538; end: 104acb623;  */

long FUN_104acb538(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x28) + 0xc0 == *(long *)(param_1 + 0x30)) {
    lVar5 = *(long *)(param_1 + 0x30);
    plVar1 = (long *)(*(long *)(param_1 + 0x18) + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (*(char *)(param_1 + 0xbf) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0xa8));
    }
    lVar5 = 0xa0;
    do {
      func_0x0001004bc3ac(param_1 + lVar5,0);
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0x80);
    func_0x0001005a5f48(param_1 + 0x40);
    func_0x00010047a38c((long *)(param_1 + 0x18));
    if (*(long *)(param_1 + 0x10) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    return param_1;
  }
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/resource_quota/memory_quota.cc"
                      ,0xa8,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x104acb61c);
  (*pcVar4)();
}



/* Entry: 104acb624; end: 104acb627;  */

long FUN_104acb624(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x28) + 0xc0 == *(long *)(param_1 + 0x30)) {
    lVar5 = *(long *)(param_1 + 0x30);
    plVar1 = (long *)(*(long *)(param_1 + 0x18) + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (*(char *)(param_1 + 0xbf) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0xa8));
    }
    lVar5 = 0xa0;
    do {
      func_0x0001004bc3ac(param_1 + lVar5,0);
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0x80);
    func_0x0001005a5f48(param_1 + 0x40);
    func_0x00010047a38c((long *)(param_1 + 0x18));
    if (*(long *)(param_1 + 0x10) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    return param_1;
  }
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/resource_quota/memory_quota.cc"
                      ,0xa8,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x104acb61c);
  (*pcVar4)();
}



/* Entry: 104acb628; end: 104acb63b;  */

void FUN_104acb628(void)

{
  FUN_104acb538();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104acb63c; end: 104acb7f3;  */

long * FUN_104acb63c(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined8 uStack_80;
  long *plStack_78;
  long alStack_70 [5];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_80 = 0;
  plStack_78 = (long *)0x0;
  alStack_70[1] = 0;
  alStack_70[0] = 0;
  alStack_70[3] = 0;
  alStack_70[2] = 0;
  func_0x000100460448(param_1 + 0x40);
  if (*(char *)(param_1 + 0x80) != '\0') {
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/resource_quota/memory_quota.cc"
                        ,0xb2,2,"assertion failed: %s");
    _abort();
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x104acb794);
    (*pcVar6)();
  }
  *(undefined1 *)(param_1 + 0x80) = 1;
  FUN_104acb7f4(&uStack_80,param_1 + 0x18);
  lVar11 = 0;
  do {
    puVar2 = (undefined8 *)(param_1 + 0x88 + lVar11);
    uVar9 = *puVar2;
    *puVar2 = 0;
    func_0x0001004bc3ac(puVar2,0);
    func_0x0001004bc3ac((long)alStack_70 + lVar11,uVar9);
    lVar11 = lVar11 + 8;
  } while (lVar11 != 0x20);
  func_0x000100466b80(param_1 + 0x40);
  lVar11 = 0x18;
  do {
    plVar7 = (long *)((long)alStack_70 + lVar11);
    plVar8 = (long *)0x0;
    func_0x0001004bc3ac();
    plVar10 = plStack_78;
    lVar11 = lVar11 + -8;
  } while (lVar11 != -8);
  if (plStack_78 != (long *)0x0) {
    plVar1 = plStack_78 + 1;
    do {
      lVar11 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar7 = plVar10;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar7;
  }
  ___stack_chk_fail();
  if ((int)plVar8 == 0) {
    __Unwind_Resume(plVar7);
  }
  FUN_104bd46a0();
  lVar11 = *plVar8;
  lVar3 = plVar8[1];
  if (lVar3 != 0) {
    plVar10 = (long *)(lVar3 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar10 = (long *)plVar7[1];
  *plVar7 = lVar11;
  plVar7[1] = lVar3;
  if (plVar10 != (long *)0x0) {
    plVar8 = plVar10 + 1;
    do {
      lVar11 = *plVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  return plVar7;
}



/* Entry: 104acb7f4; end: 104acb86b;  */

undefined8 * FUN_104acb7f4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  
  uVar2 = *param_2;
  lVar5 = param_2[1];
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar6 = (long *)param_1[1];
  *param_1 = uVar2;
  param_1[1] = lVar5;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return param_1;
}



/* Entry: 104acb86c; end: 104acb90b;  */

void FUN_104acb86c(long *param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  long *plStack_38;
  
  if (0x80000 < (ulong)param_1[5]) {
    puVar1 = (ulong *)(param_1 + 5);
    uVar5 = param_1[5];
    do {
      uVar6 = *puVar1;
      if (uVar6 == uVar5) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = 0x80000;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          uVar5 = uVar5 - 0x80000;
          puVar1 = (ulong *)(param_1 + 6);
          do {
            uVar6 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar6 - uVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar5 <= uVar6) {
            plVar2 = (long *)(param_1[3] + 0x10);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar4) {
                *plVar2 = *plVar2 + uVar5;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            return;
          }
          func_0x00010bdacbd8();
          (**(code **)(*param_1 + 0x20))(&plStack_38);
          plVar2 = plStack_38;
          plStack_38 = (long *)0x0;
          if ((plVar2 != (long *)0x0) && ((**(code **)*plVar2)(), plStack_38 != (long *)0x0)) {
            (**(code **)(*plStack_38 + 8))();
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      uVar5 = uVar6;
    } while (0x80000 < uVar6);
  }
  return;
}



/* Entry: 104acb90c; end: 104acb98f;  */

void FUN_104acb90c(long *param_1)

{
  long *plVar1;
  long *plStack_28;
  
  (**(code **)(*param_1 + 0x20))(&plStack_28);
  plVar1 = plStack_28;
  plStack_28 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)*plVar1)();
    if (plStack_28 != (long *)0x0) {
      (**(code **)(*plStack_28 + 8))();
    }
  }
  return;
}



/* Entry: 104acb990; end: 104acba7b;  */

void FUN_104acb990(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *apuStack_e8 [2];
  char cStack_d1;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_b9;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  char *pcStack_88;
  undefined8 uStack_80;
  long lStack_58;
  ulong uStack_50;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_2 + 8);
  if ((char)*(byte *)(lVar2 + 0x87) < '\0') {
    lStack_58 = *(long *)(lVar2 + 0x70);
    uStack_50 = *(ulong *)(lVar2 + 0x78);
  }
  else {
    lStack_58 = lVar2 + 0x70;
    uStack_50 = (ulong)*(byte *)(lVar2 + 0x87);
  }
  pcStack_88 = "/allocator/";
  uStack_80 = 0xb;
  uStack_b8 = param_3;
  uStack_b0 = param_4;
  func_0x000100066c24(apuStack_e8,&lStack_58,&pcStack_88,&uStack_b8);
  puVar1 = (undefined8 *)&uStack_b9;
  func_0x000100487844(&uStack_d0,puVar1,(long *)(param_2 + 8),apuStack_e8);
  if (cStack_d1 < '\0') {
    puVar1 = apuStack_e8[0];
    __ZdlPv();
  }
  param_1[1] = uStack_c8;
  *param_1 = uStack_d0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_d1 < '\0') {
    __ZdlPv(apuStack_e8[0]);
  }
  __Unwind_Resume();
  *puVar1 = &PTR_FUN_1107c5d60;
  return;
}



/* Entry: 104acba7c; end: 104acba93;  */

void FUN_104acba7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107c5d60;
  return;
}



/* Entry: 104acba94; end: 104acbaa7;  */

void FUN_104acba94(void)

{
  FUN_104acbaa8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104acbaa8; end: 104acbaf7;  */

long FUN_104acbaa8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 != 0) {
    puVar1 = *(undefined8 **)(lVar2 + 0x60);
    *(undefined8 *)(lVar2 + 0x60) = 0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)();
    }
  }
  func_0x00010047a38c((long *)(param_1 + 8));
  return param_1;
}



/* Entry: 104acbaf8; end: 104acbb5b;  */

void FUN_104acbaf8(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *param_1;
  *param_1 = param_2;
  if (lVar6 != 0) {
    plVar4 = *(long **)(lVar6 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar6);
    return;
  }
  return;
}



/* Entry: 104acbb5c; end: 104acbb6b;  */

void FUN_104acbb5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107c5e58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104acbb6c; end: 104acbb8b;  */

void FUN_104acbb6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107c5e58;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104acbb8c; end: 104acbb97;  */

long FUN_104acbb8c(long param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  char cStack_31;
  
  cStack_31 = '\0';
  lVar1 = param_1 + 0x58;
  do {
    lVar5 = lVar1;
    func_0x0001004920d0(lVar1,&cStack_31);
    if (lVar5 != 0) {
      plVar6 = *(long **)(lVar5 + 8);
      if (plVar6 != (long *)0x0) {
        plVar2 = plVar6 + 1;
        do {
          lVar7 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
      }
      __ZdlPv(lVar5);
    }
  } while (cStack_31 == '\0');
  if (*(long **)(param_1 + 0xa8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xa8) + 8))();
  }
  func_0x00010083746c(lVar1);
  func_0x0001005a5f48(param_1 + 0x18);
  return param_1 + 0x18;
}



/* Entry: 104acbb98; end: 104acbc57;  */

long FUN_104acbb98(long param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  char cStack_31;
  
  cStack_31 = '\0';
  lVar1 = param_1 + 0x40;
  do {
    lVar5 = lVar1;
    func_0x0001004920d0(lVar1,&cStack_31);
    if (lVar5 != 0) {
      plVar6 = *(long **)(lVar5 + 8);
      if (plVar6 != (long *)0x0) {
        plVar2 = plVar6 + 1;
        do {
          lVar7 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
      }
      __ZdlPv(lVar5);
    }
  } while (cStack_31 == '\0');
  if (*(long **)(param_1 + 0x90) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x90) + 8))();
  }
  func_0x00010083746c(lVar1);
  func_0x0001005a5f48(param_1);
  return param_1;
}



/* Entry: 104acbc58; end: 104acbc8b;  */

void FUN_104acbc58(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  ulong *puVar6;
  long lVar7;
  long lVar8;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  char cStack_40;
  
  plVar4 = (long *)0x8;
  ___cxa_allocate_exception();
  *plVar4 = (long)(PTR___ZTVNSt3__112bad_weak_ptrE_110346af0 + 0x10);
  puVar6 = (ulong *)PTR___ZTINSt3__112bad_weak_ptrE_1103469f8;
  ___cxa_throw();
  if ((char)puVar6[4] == '\0') {
    FUN_104acb358(plVar4);
    uStack_60 = uStack_60 & 0xffffffffffffff00;
    cStack_40 = '\0';
    if ((char)puVar6[4] == '\0') {
      if (plVar4 == (long *)0x0) {
        return;
      }
      goto LAB_104acbd84;
    }
  }
  uStack_58 = puVar6[1];
  uStack_60 = *puVar6;
  *puVar6 = 0;
  puVar6[1] = 0;
  uStack_50 = puVar6[2];
  uStack_48 = puVar6[3];
  puVar6[3] = 0;
  cStack_40 = '\x01';
  plVar5 = (long *)plVar4[4];
  if (plVar5 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar5 != (long *)0x0) {
      lVar7 = plVar4[3];
      if (lVar7 != 0) {
        *(undefined1 *)(lVar7 + 0x38) = 0;
        plVar1 = (long *)(lVar7 + 0x28);
        do {
          lVar8 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = 0;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 != 0) {
          plVar1 = (long *)(lVar7 + 0x30);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 - lVar8;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          plVar1 = (long *)(*(long *)(lVar7 + 0x18) + 0x10);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + lVar8;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
      }
      plVar1 = plVar5 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (cStack_40 == '\0') goto LAB_104acbd84;
  }
  FUN_104acb178(&uStack_60);
LAB_104acbd84:
  if (plVar4[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *plVar4 = (long)&PTR____cxa_pure_virtual_1107c4208;
  func_0x000104a9b8f0(plVar4 + 1);
  __ZdlPv(plVar4);
  return;
}


