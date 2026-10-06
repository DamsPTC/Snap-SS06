/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a6023e0; end: 10a602637;  */

void FUN_10a6023e0(long param_1,undefined **param_2)

{
  undefined **ppuVar1;
  ushort uVar2;
  ushort uVar3;
  code **ppcVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  code **ppcVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  code **ppcVar11;
  long *plVar12;
  long *plVar13;
  undefined ***pppuVar14;
  code **ppcVar15;
  undefined8 *extraout_x8;
  undefined *puVar16;
  ulong uVar17;
  code *pcVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  int iVar22;
  undefined **ppuVar23;
  undefined *puVar24;
  undefined **ppuVar25;
  undefined **ppuVar26;
  ulong uVar27;
  undefined4 uVar28;
  long *plStack_228;
  code *pcStack_210;
  code *pcStack_208;
  code *pcStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined *puStack_1a8;
  undefined **ppuStack_1a0;
  long lStack_180;
  undefined **ppuStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  long lStack_d8;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010a3c7a18();
  pcStack_a8 = FUN_10a637970;
  ppuStack_a0 = &PTR_DAT_110c01210;
  lStack_98 = param_1;
  FUN_10a1dd7c8(param_2,&PTR_s_camera_110c00b70,&pcStack_a8,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  (**(code **)(*param_2 + 0x60))(&ppuStack_110,param_2,&PTR_DAT_110bfb550);
  pppuVar14 = (undefined ***)(param_1 + 0x3b8);
  func_0x000107c3193c(pppuVar14);
  ppuVar9 = ppuStack_110;
  *(undefined8 *)(param_1 + 0x3c0) = uStack_108;
  *pppuVar14 = ppuStack_110;
  *(undefined8 *)(param_1 + 0x3c8) = uStack_100;
  uStack_108 = 0;
  uStack_100 = 0;
  ppuStack_110 = (undefined **)0x0;
  puStack_f0 = (undefined1 *)&ppuStack_110;
  FUN_10a0426d8(&puStack_f0);
  uVar28 = SUB84(ppuVar9,0);
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bfb570);
  *(undefined4 *)(param_1 + 0x1f0) = uVar28;
  ppcVar15 = (code **)0x0;
  ppuVar9 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110bfb590);
  *(char *)(param_1 + 0x3b1) = (char)ppuVar9;
  ppuVar9 = &PTR_DAT_110bfb5b0;
  ppuVar10 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110bfb5b0);
  if ((int)ppuVar10 != 0) {
    FUN_10a581180(param_1 + 0x388);
    ppuVar9 = &PTR_DAT_110bfb5b0;
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110bfb5b0);
    ppuVar10 = param_2;
    (**(code **)(*param_2 + 0x208))();
    if ((int)ppuVar10 != 0) {
      iVar22 = 0;
      pppuVar14 = &ppuStack_e0;
      do {
        (**(code **)(*param_2 + 0x218))(param_2,iVar22);
        pcStack_e8 = FUN_10a6379c8;
        ppuStack_e0 = &PTR_FUN_110c01228;
        ppcVar15 = &pcStack_e8;
        ppuVar9 = &PTR_DAT_110bfb5d0;
        lStack_d8 = param_1;
        FUN_10a2dca90(param_2,&PTR_DAT_110bfb5d0,ppcVar15,0);
        (*(code *)*ppuStack_e0)(pppuVar14);
        (**(code **)(*param_2 + 0x220))(param_2);
        iVar22 = iVar22 + 1;
      } while ((int)ppuVar10 != iVar22);
    }
    (**(code **)(*param_2 + 0x220))();
    ppuVar10 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)**pppuVar14)(pppuVar14);
  __Unwind_Resume();
  lStack_180 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (ppcVar15 == (code **)0x0) {
    ppuVar25 = ppuVar10;
    ppuVar23 = ppuVar9;
    func_0x00010a0fda30();
  }
  else {
    ppuStack_1b8 = (undefined **)ppuVar10[9];
    ppuStack_1c0 = (undefined **)ppuVar10[8];
    ppcVar11 = ppcVar15 + 0x11;
    func_0x00010a35bf90(ppcVar11,&ppuStack_1c0);
    ppcVar4 = (code **)((ulong)&ppuStack_1c0 | 8);
    pppuVar14 = &ppuStack_1c0;
    if (ppcVar11 != (code **)0x0) {
      ppcVar4 = ppcVar11 + 5;
      pppuVar14 = (undefined ***)(ppcVar11 + 4);
    }
    ppuVar23 = (undefined **)*ppcVar4;
    ppuVar25 = *pppuVar14;
  }
  ppuVar26 = (undefined **)ppuVar10[0x2e];
  FUN_10a3dd220(ppuVar26);
  FUN_10a57b654(ppuVar26,ppuVar25,ppuVar23);
  ppuVar25 = (undefined **)0x28;
  __Znwm();
  ppuVar23 = ppuVar25 + 1;
  *ppuVar23 = (undefined *)0x0;
  *ppuVar25 = (undefined *)&PTR_DAT_110c01250;
  ppuVar25[2] = (undefined *)0x0;
  ppuVar25[3] = (undefined *)ppuVar26;
  ppuVar25[4] = FUN_10a3df8cc;
  if (ppuVar26 != (undefined **)0x0) {
    if (ppuVar26[6] == (undefined *)0x0) {
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppuVar23,0x10);
        if (bVar7) {
          *ppuVar23 = *ppuVar23 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      ppuVar1 = ppuVar25 + 2;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
        if (bVar7) {
          *ppuVar1 = *ppuVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      ppuVar26[5] = (undefined *)ppuVar26;
      ppuVar26[6] = (undefined *)ppuVar25;
    }
    else {
      if (*(long *)(ppuVar26[6] + 8) != -1) goto LAB_10a6027b8;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppuVar23,0x10);
        if (bVar7) {
          *ppuVar23 = *ppuVar23 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      ppuVar1 = ppuVar25 + 2;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
        if (bVar7) {
          *ppuVar1 = *ppuVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      ppuVar26[5] = (undefined *)ppuVar26;
      ppuVar26[6] = (undefined *)ppuVar25;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      puVar16 = *ppuVar23;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppuVar23,0x10);
      if (bVar7) {
        *ppuVar23 = puVar16 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (puVar16 == (undefined *)0x0) {
      (**(code **)(*ppuVar25 + 0x10))(ppuVar25);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar25);
    }
  }
LAB_10a6027b8:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (ppuVar26 + 0x2a,ppuVar10 + 0x2a);
  uVar2 = (*(ushort *)(ppuVar10 + 0x30) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(ppuVar26 + 0x30) & 0xfffc;
  *(ushort *)(ppuVar26 + 0x30) = uVar3 | *(ushort *)(ppuVar26 + 0x30) & 1 | uVar2;
  *(ushort *)(ppuVar26 + 0x30) = uVar3 | uVar2 | *(ushort *)(ppuVar10 + 0x30) & 1;
  if (ppuVar25 != (undefined **)0x0) {
    ppuVar23 = ppuVar25 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppuVar23,0x10);
      if (bVar7) {
        *ppuVar23 = *ppuVar23 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  ppuStack_1c0 = ppuVar26;
  ppuStack_1b8 = ppuVar25;
  FUN_10a3c7ce8(ppuVar9,&ppuStack_1c0);
  ppuVar9 = ppuStack_1b8;
  if (ppuStack_1b8 != (undefined **)0x0) {
    ppuVar23 = ppuStack_1b8 + 1;
    do {
      puVar16 = *ppuVar23;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppuVar23,0x10);
      if (bVar7) {
        *ppuVar23 = puVar16 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (puVar16 == (undefined *)0x0) {
      (**(code **)(*ppuStack_1b8 + 0x10))(ppuStack_1b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar9);
    }
  }
  plStack_228 = (long *)0x0;
  plVar12 = (long *)ppuVar10[0x70];
  if (((plVar12 == (long *)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_228 = plVar12, plVar12 == (long *)0x0)) ||
     (puVar16 = ppuVar10[0x6f], puVar16 == (undefined *)0x0)) {
    pcVar18 = (code *)ppuVar26[0x70];
    ppuVar26[0x70] = (undefined *)0x0;
    ppuVar26[0x6f] = (undefined *)0x0;
    if (pcVar18 != (code *)0x0) {
LAB_10a6028e0:
      __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar18);
    }
  }
  else {
    ppuVar9 = ppuVar26 + 0x6f;
    if (ppcVar15 == (code **)0x0) {
      FUN_10a38cc90(&pcStack_210,puVar16);
      if (pcStack_208 != (code *)0x0) {
        pcVar18 = pcStack_208 + 0x10;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pcVar18,0x10);
          if (bVar7) {
            *(long *)pcVar18 = *(long *)pcVar18 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      puVar16 = ppuVar26[0x70];
      ppuVar26[0x70] = pcStack_208;
      *ppuVar9 = pcStack_210;
      if (puVar16 != (undefined *)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (pcStack_208 != (code *)0x0) {
        pcVar18 = pcStack_208 + 8;
        do {
          lVar19 = *(long *)pcVar18;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pcVar18,0x10);
          if (bVar7) {
            *(long *)pcVar18 = lVar19 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
LAB_10a602e28:
        pcVar18 = pcStack_208;
        if (lVar19 == 0) {
          (**(code **)(*(long *)pcStack_208 + 0x10))(pcStack_208);
          goto LAB_10a6028e0;
        }
      }
    }
    else {
      pcVar18 = *(code **)(puVar16 + 0x40);
      pcVar5 = *(code **)(puVar16 + 0x48);
      if (*(char *)(ppcVar15 + 0x17) == '\x01') {
        pppuVar14 = &ppuStack_1b8;
        ppuStack_1c0 = (undefined **)FUN_10a637bb4;
        ppuStack_1b8 = &PTR_FUN_110c01290;
        ppuStack_1b0 = ppuVar9;
        FUN_10a3aea38(ppcVar15,pcVar18,pcVar5,&ppuStack_1c0);
        ppuVar9 = ppuStack_1b8;
      }
      else {
        ppcVar11 = ppcVar15 + 0x11;
        pcStack_210 = pcVar18;
        pcStack_208 = pcVar5;
        func_0x00010a35bf90(ppcVar11,&pcStack_210);
        ppcVar4 = &pcStack_208;
        ppcVar8 = &pcStack_210;
        if (ppcVar11 != (code **)0x0) {
          ppcVar4 = ppcVar11 + 5;
          ppcVar8 = ppcVar11 + 4;
        }
        if ((pcVar18 == *ppcVar8) && (pcVar5 == *ppcVar4)) {
          FUN_10a38cc90(&pcStack_210,puVar16);
          if (pcStack_208 != (code *)0x0) {
            pcVar18 = pcStack_208 + 0x10;
            do {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(pcVar18,0x10);
              if (bVar7) {
                *(long *)pcVar18 = *(long *)pcVar18 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          puVar16 = ppuVar26[0x70];
          ppuVar26[0x70] = pcStack_208;
          *ppuVar9 = pcStack_210;
          if (puVar16 != (undefined *)0x0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          if (pcStack_208 != (code *)0x0) {
            pcVar18 = pcStack_208 + 8;
            do {
              lVar19 = *(long *)pcVar18;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(pcVar18,0x10);
              if (bVar7) {
                *(long *)pcVar18 = lVar19 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            goto LAB_10a602e28;
          }
          goto LAB_10a6028e4;
        }
        pppuVar14 = &ppuStack_1f8;
        pcStack_200 = FUN_10a637c74;
        ppuStack_1f8 = &PTR_FUN_110c012b0;
        ppuStack_1f0 = ppuVar9;
        FUN_10a3aea38(ppcVar15,*ppcVar8,*ppcVar4,&pcStack_200);
        ppuVar9 = ppuStack_1f8;
      }
      (*(code *)*ppuVar9)(pppuVar14);
    }
  }
LAB_10a6028e4:
  if (plStack_228 != (long *)0x0) {
    plVar12 = plStack_228 + 1;
    do {
      lVar19 = *plVar12;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar7) {
        *plVar12 = lVar19 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plStack_228 + 0x10))(plStack_228);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_228);
    }
  }
  *(undefined4 *)(ppuVar26 + 0x3e) = *(undefined4 *)(ppuVar10 + 0x3e);
  *(bool *)((long)ppuVar26 + 0x3b1) = *(code *)((long)ppuVar10 + 0x3b1) == (code)0x1;
  puVar24 = ppuVar10[0x78];
  for (puVar16 = ppuVar10[0x77]; puVar16 != puVar24; puVar16 = puVar16 + 0x18) {
    FUN_10a0b4ec0(ppuVar26 + 0x77,puVar16);
  }
  lVar19 = (long)ppuVar10[0x72] - (long)ppuVar10[0x71];
  if (lVar19 != 0) {
    uVar27 = lVar19 >> 4;
    puVar24 = ppuVar26[0x72];
    puVar16 = ppuVar26[0x71];
    uVar21 = (long)puVar24 - (long)puVar16 >> 4;
    if (uVar21 < uVar27) {
      uVar21 = uVar27 - uVar21;
      if ((ulong)((long)ppuVar26[0x73] - (long)puVar24 >> 4) < uVar21) {
        if (uVar27 >> 0x3c != 0) goto LAB_10a602e88;
        ppuVar9 = ppuVar26 + 0x71;
        uVar17 = (long)ppuVar26[0x73] - (long)puVar16;
        uVar20 = (long)uVar17 >> 3;
        if (uVar20 <= uVar27) {
          uVar20 = uVar27;
        }
        if (0x7fffffffffffffef < uVar17) {
          uVar20 = 0xfffffffffffffff;
        }
        ppuStack_1a0 = ppuVar9;
        FUN_10a60f838();
        lVar19 = (long)ppuVar9 + ((long)puVar24 - (long)puVar16);
        _bzero(lVar19,uVar21 * 0x10);
        puVar16 = (undefined *)(lVar19 - ((long)ppuVar26[0x72] - (long)ppuVar26[0x71]));
        _memcpy(puVar16);
        ppuStack_1c0 = (undefined **)ppuVar26[0x71];
        ppuVar26[0x71] = puVar16;
        ppuVar26[0x72] = (undefined *)(lVar19 + uVar21 * 0x10);
        puStack_1a8 = ppuVar26[0x73];
        ppuVar26[0x73] = (undefined *)(ppuVar9 + uVar20 * 2);
        ppuStack_1b8 = ppuStack_1c0;
        ppuStack_1b0 = ppuStack_1c0;
        func_0x00010a60f86c(&ppuStack_1c0);
      }
      else {
        _bzero(puVar24,uVar21 * 0x10);
        ppuVar26[0x72] = puVar24 + uVar21 * 0x10;
      }
    }
    else if (uVar27 < uVar21) {
      for (; puVar24 != puVar16 + lVar19; puVar24 = puVar24 + -0x10) {
        if (*(long *)(puVar24 + -8) != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
      ppuVar26[0x72] = puVar16 + lVar19;
    }
    uVar21 = 0;
    do {
      if ((ulong)((long)ppuVar10[0x72] - (long)ppuVar10[0x71] >> 4) <= uVar21) goto LAB_10a602ef0;
      plVar12 = (long *)(ppuVar10[0x71] + uVar21 * 0x10);
      plStack_228 = (long *)0x0;
      plVar13 = (long *)plVar12[1];
      if ((plVar13 == (long *)0x0) ||
         (__ZNSt3__119__shared_weak_count4lockEv(), plStack_228 = plVar13, plVar13 == (long *)0x0))
      {
        lVar19 = 0;
      }
      else {
        lVar19 = *plVar12;
      }
      if ((ulong)((long)ppuVar26[0x72] - (long)ppuVar26[0x71] >> 4) <= uVar21) goto LAB_10a602ef0;
      ppuVar9 = (undefined **)(ppuVar26[0x71] + uVar21 * 0x10);
      if (lVar19 == 0) {
        pcVar18 = (code *)ppuVar9[1];
        *ppuVar9 = (undefined *)0x0;
        ppuVar9[1] = (undefined *)0x0;
        if (pcVar18 != (code *)0x0) {
LAB_10a602c68:
          __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar18);
        }
      }
      else if (ppcVar15 == (code **)0x0) {
        FUN_10a447c64(&pcStack_210,lVar19);
        if (pcStack_208 != (code *)0x0) {
          pcVar18 = pcStack_208 + 0x10;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pcVar18,0x10);
            if (bVar7) {
              *(long *)pcVar18 = *(long *)pcVar18 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        puVar16 = ppuVar9[1];
        ppuVar9[1] = pcStack_208;
        *ppuVar9 = pcStack_210;
        if (puVar16 != (undefined *)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        if (pcStack_208 != (code *)0x0) {
          pcVar18 = pcStack_208 + 8;
          do {
            lVar19 = *(long *)pcVar18;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pcVar18,0x10);
            if (bVar7) {
              *(long *)pcVar18 = lVar19 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
LAB_10a602c50:
          pcVar18 = pcStack_208;
          if (lVar19 == 0) {
            (**(code **)(*(long *)pcStack_208 + 0x10))(pcStack_208);
            goto LAB_10a602c68;
          }
        }
      }
      else {
        pcVar18 = *(code **)(lVar19 + 0x40);
        pcVar5 = *(code **)(lVar19 + 0x48);
        if (*(char *)(ppcVar15 + 0x17) == '\x01') {
          ppuStack_1c0 = (undefined **)FUN_10a638074;
          ppuStack_1b8 = &PTR_FUN_110c012f0;
          ppuStack_1b0 = ppuVar9;
          FUN_10a637d34(ppcVar15,pcVar18,pcVar5,&ppuStack_1c0);
          pcVar18 = (code *)*ppuStack_1b8;
          pppuVar14 = &ppuStack_1b8;
        }
        else {
          ppcVar11 = ppcVar15 + 0x11;
          pcStack_210 = pcVar18;
          pcStack_208 = pcVar5;
          func_0x00010a35bf90(ppcVar11,&pcStack_210);
          ppcVar4 = &pcStack_208;
          ppcVar8 = &pcStack_210;
          if (ppcVar11 != (code **)0x0) {
            ppcVar4 = ppcVar11 + 5;
            ppcVar8 = ppcVar11 + 4;
          }
          if ((pcVar18 == *ppcVar8) && (pcVar5 == *ppcVar4)) {
            FUN_10a447c64(&pcStack_210,lVar19);
            if (pcStack_208 != (code *)0x0) {
              pcVar18 = pcStack_208 + 0x10;
              do {
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(pcVar18,0x10);
                if (bVar7) {
                  *(long *)pcVar18 = *(long *)pcVar18 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
            }
            puVar16 = ppuVar9[1];
            ppuVar9[1] = pcStack_208;
            *ppuVar9 = pcStack_210;
            if (puVar16 != (undefined *)0x0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
            if (pcStack_208 != (code *)0x0) {
              pcVar18 = pcStack_208 + 8;
              do {
                lVar19 = *(long *)pcVar18;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(pcVar18,0x10);
                if (bVar7) {
                  *(long *)pcVar18 = lVar19 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              goto LAB_10a602c50;
            }
            goto LAB_10a602ca4;
          }
          pcStack_200 = FUN_10a638134;
          ppuStack_1f8 = &PTR_FUN_110c01310;
          ppuStack_1f0 = ppuVar9;
          FUN_10a637d34(ppcVar15,*ppcVar8,*ppcVar4,&pcStack_200);
          pcVar18 = (code *)*ppuStack_1f8;
          pppuVar14 = &ppuStack_1f8;
        }
        (*pcVar18)(pppuVar14);
      }
LAB_10a602ca4:
      if (plStack_228 != (long *)0x0) {
        plVar12 = plStack_228 + 1;
        do {
          lVar19 = *plVar12;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar7) {
            *plVar12 = lVar19 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plStack_228 + 0x10))(plStack_228);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_228);
        }
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 != uVar27);
  }
  *extraout_x8 = ppuVar26;
  extraout_x8[1] = ppuVar25;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_180) {
    return;
  }
  ___stack_chk_fail();
LAB_10a602e88:
  FUN_10a60f824();
LAB_10a602ef0:
                    /* WARNING: Does not return */
  pcVar18 = (code *)SoftwareBreakpoint(1,0x10a602ef4);
  (*pcVar18)();
}



/* Entry: 10a602638; end: 10a602f5f;  */

void FUN_10a602638(undefined8 *param_1,undefined **param_2,undefined8 param_3,long param_4)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 *puVar3;
  long **pplVar4;
  char cVar5;
  bool bVar6;
  undefined **ppuVar7;
  long *plVar8;
  undefined **ppuVar9;
  long *plVar10;
  long lVar11;
  undefined ***pppuVar12;
  undefined *puVar13;
  ulong uVar14;
  code *pcVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  ulong uVar23;
  long *plStack_118;
  undefined *puStack_100;
  long *plStack_f8;
  code *pcStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_4 == 0) {
    ppuVar21 = param_2;
    uVar19 = param_3;
    func_0x00010a0fda30();
  }
  else {
    ppuStack_a8 = (undefined **)param_2[9];
    ppuStack_b0 = (undefined **)param_2[8];
    lVar16 = param_4 + 0x88;
    func_0x00010a35bf90(lVar16,&ppuStack_b0);
    puVar3 = (undefined8 *)((ulong)&ppuStack_b0 | 8);
    pppuVar12 = &ppuStack_b0;
    if (lVar16 != 0) {
      puVar3 = (undefined8 *)(lVar16 + 0x28);
      pppuVar12 = (undefined ***)(lVar16 + 0x20);
    }
    uVar19 = *puVar3;
    ppuVar21 = *pppuVar12;
  }
  ppuVar22 = (undefined **)param_2[0x2e];
  FUN_10a3dd220(ppuVar22);
  FUN_10a57b654(ppuVar22,ppuVar21,uVar19);
  ppuVar21 = (undefined **)0x28;
  __Znwm();
  ppuVar9 = ppuVar21 + 1;
  *ppuVar9 = (undefined *)0x0;
  *ppuVar21 = (undefined *)&PTR_DAT_110c01250;
  ppuVar21[2] = (undefined *)0x0;
  ppuVar21[3] = (undefined *)ppuVar22;
  ppuVar21[4] = FUN_10a3df8cc;
  if (ppuVar22 != (undefined **)0x0) {
    if (ppuVar22[6] == (undefined *)0x0) {
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
        if (bVar6) {
          *ppuVar9 = *ppuVar9 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      ppuVar7 = ppuVar21 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
        if (bVar6) {
          *ppuVar7 = *ppuVar7 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      ppuVar22[5] = (undefined *)ppuVar22;
      ppuVar22[6] = (undefined *)ppuVar21;
    }
    else {
      if (*(long *)(ppuVar22[6] + 8) != -1) goto LAB_10a6027b8;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
        if (bVar6) {
          *ppuVar9 = *ppuVar9 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      ppuVar7 = ppuVar21 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
        if (bVar6) {
          *ppuVar7 = *ppuVar7 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      ppuVar22[5] = (undefined *)ppuVar22;
      ppuVar22[6] = (undefined *)ppuVar21;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      puVar13 = *ppuVar9;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
      if (bVar6) {
        *ppuVar9 = puVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (puVar13 == (undefined *)0x0) {
      (**(code **)(*ppuVar21 + 0x10))(ppuVar21);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar21);
    }
  }
LAB_10a6027b8:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (ppuVar22 + 0x2a,param_2 + 0x2a);
  uVar1 = (*(ushort *)(param_2 + 0x30) >> 1 & 1) << 1;
  uVar2 = *(ushort *)(ppuVar22 + 0x30) & 0xfffc;
  *(ushort *)(ppuVar22 + 0x30) = uVar2 | *(ushort *)(ppuVar22 + 0x30) & 1 | uVar1;
  *(ushort *)(ppuVar22 + 0x30) = uVar2 | uVar1 | *(ushort *)(param_2 + 0x30) & 1;
  if (ppuVar21 != (undefined **)0x0) {
    ppuVar9 = ppuVar21 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
      if (bVar6) {
        *ppuVar9 = *ppuVar9 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  ppuStack_b0 = ppuVar22;
  ppuStack_a8 = ppuVar21;
  FUN_10a3c7ce8(param_3,&ppuStack_b0);
  ppuVar9 = ppuStack_a8;
  if (ppuStack_a8 != (undefined **)0x0) {
    ppuVar7 = ppuStack_a8 + 1;
    do {
      puVar13 = *ppuVar7;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
      if (bVar6) {
        *ppuVar7 = puVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (puVar13 == (undefined *)0x0) {
      (**(code **)(*ppuStack_a8 + 0x10))(ppuStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar9);
    }
  }
  plStack_118 = (long *)0x0;
  plVar8 = (long *)param_2[0x70];
  if (((plVar8 == (long *)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_118 = plVar8, plVar8 == (long *)0x0)) ||
     (puVar13 = param_2[0x6f], puVar13 == (undefined *)0x0)) {
    plVar8 = (long *)ppuVar22[0x70];
    ppuVar22[0x70] = (undefined *)0x0;
    ppuVar22[0x6f] = (undefined *)0x0;
    if (plVar8 != (long *)0x0) {
LAB_10a6028e0:
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  else {
    ppuVar9 = ppuVar22 + 0x6f;
    if (param_4 == 0) {
      FUN_10a38cc90(&puStack_100,puVar13);
      if (plStack_f8 != (long *)0x0) {
        plVar8 = plStack_f8 + 2;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar6) {
            *plVar8 = *plVar8 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      puVar13 = ppuVar22[0x70];
      ppuVar22[0x70] = (undefined *)plStack_f8;
      *ppuVar9 = puStack_100;
      if (puVar13 != (undefined *)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (plStack_f8 != (long *)0x0) {
        plVar8 = plStack_f8 + 1;
        do {
          lVar16 = *plVar8;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar6) {
            *plVar8 = lVar16 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
LAB_10a602e28:
        plVar8 = plStack_f8;
        if (lVar16 == 0) {
          (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
          goto LAB_10a6028e0;
        }
      }
    }
    else {
      puVar20 = *(undefined **)(puVar13 + 0x40);
      plVar8 = *(long **)(puVar13 + 0x48);
      if (*(char *)(param_4 + 0xb8) == '\x01') {
        pppuVar12 = &ppuStack_a8;
        ppuStack_b0 = (undefined **)FUN_10a637bb4;
        ppuStack_a8 = &PTR_FUN_110c01290;
        ppuStack_a0 = ppuVar9;
        FUN_10a3aea38(param_4,puVar20,plVar8,&ppuStack_b0);
        ppuVar9 = ppuStack_a8;
      }
      else {
        lVar16 = param_4 + 0x88;
        puStack_100 = puVar20;
        plStack_f8 = plVar8;
        func_0x00010a35bf90(lVar16,&puStack_100);
        pplVar4 = &plStack_f8;
        ppuVar7 = &puStack_100;
        if (lVar16 != 0) {
          pplVar4 = (long **)(lVar16 + 0x28);
          ppuVar7 = (undefined **)(lVar16 + 0x20);
        }
        if ((puVar20 == *ppuVar7) && (plVar8 == *pplVar4)) {
          FUN_10a38cc90(&puStack_100,puVar13);
          if (plStack_f8 != (long *)0x0) {
            plVar8 = plStack_f8 + 2;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar6) {
                *plVar8 = *plVar8 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          puVar13 = ppuVar22[0x70];
          ppuVar22[0x70] = (undefined *)plStack_f8;
          *ppuVar9 = puStack_100;
          if (puVar13 != (undefined *)0x0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          if (plStack_f8 != (long *)0x0) {
            plVar8 = plStack_f8 + 1;
            do {
              lVar16 = *plVar8;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar6) {
                *plVar8 = lVar16 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            goto LAB_10a602e28;
          }
          goto LAB_10a6028e4;
        }
        pppuVar12 = &ppuStack_e8;
        pcStack_f0 = FUN_10a637c74;
        ppuStack_e8 = &PTR_FUN_110c012b0;
        ppuStack_e0 = ppuVar9;
        FUN_10a3aea38(param_4,*ppuVar7,*pplVar4,&pcStack_f0);
        ppuVar9 = ppuStack_e8;
      }
      (*(code *)*ppuVar9)(pppuVar12);
    }
  }
LAB_10a6028e4:
  if (plStack_118 != (long *)0x0) {
    plVar8 = plStack_118 + 1;
    do {
      lVar16 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar16 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_118 + 0x10))(plStack_118);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_118);
    }
  }
  *(undefined4 *)(ppuVar22 + 0x3e) = *(undefined4 *)(param_2 + 0x3e);
  *(bool *)((long)ppuVar22 + 0x3b1) = *(char *)((long)param_2 + 0x3b1) == '\x01';
  puVar20 = param_2[0x78];
  for (puVar13 = param_2[0x77]; puVar13 != puVar20; puVar13 = puVar13 + 0x18) {
    FUN_10a0b4ec0(ppuVar22 + 0x77,puVar13);
  }
  lVar16 = (long)param_2[0x72] - (long)param_2[0x71];
  if (lVar16 != 0) {
    uVar23 = lVar16 >> 4;
    puVar20 = ppuVar22[0x72];
    puVar13 = ppuVar22[0x71];
    uVar18 = (long)puVar20 - (long)puVar13 >> 4;
    if (uVar18 < uVar23) {
      uVar18 = uVar23 - uVar18;
      if ((ulong)((long)ppuVar22[0x73] - (long)puVar20 >> 4) < uVar18) {
        if (uVar23 >> 0x3c != 0) goto LAB_10a602e88;
        ppuVar9 = ppuVar22 + 0x71;
        uVar14 = (long)ppuVar22[0x73] - (long)puVar13;
        uVar17 = (long)uVar14 >> 3;
        if (uVar17 <= uVar23) {
          uVar17 = uVar23;
        }
        if (0x7fffffffffffffef < uVar14) {
          uVar17 = 0xfffffffffffffff;
        }
        ppuStack_90 = ppuVar9;
        FUN_10a60f838();
        lVar16 = (long)ppuVar9 + ((long)puVar20 - (long)puVar13);
        _bzero(lVar16,uVar18 * 0x10);
        puVar13 = (undefined *)(lVar16 - ((long)ppuVar22[0x72] - (long)ppuVar22[0x71]));
        _memcpy(puVar13);
        ppuStack_b0 = (undefined **)ppuVar22[0x71];
        ppuVar22[0x71] = puVar13;
        ppuVar22[0x72] = (undefined *)(lVar16 + uVar18 * 0x10);
        puStack_98 = ppuVar22[0x73];
        ppuVar22[0x73] = (undefined *)(ppuVar9 + uVar17 * 2);
        ppuStack_a8 = ppuStack_b0;
        ppuStack_a0 = ppuStack_b0;
        func_0x00010a60f86c(&ppuStack_b0);
      }
      else {
        _bzero(puVar20,uVar18 * 0x10);
        ppuVar22[0x72] = puVar20 + uVar18 * 0x10;
      }
    }
    else if (uVar23 < uVar18) {
      for (; puVar20 != puVar13 + lVar16; puVar20 = puVar20 + -0x10) {
        if (*(long *)(puVar20 + -8) != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
      ppuVar22[0x72] = puVar13 + lVar16;
    }
    uVar18 = 0;
    do {
      if ((ulong)((long)param_2[0x72] - (long)param_2[0x71] >> 4) <= uVar18) goto LAB_10a602ef0;
      plVar8 = (long *)(param_2[0x71] + uVar18 * 0x10);
      plStack_118 = (long *)0x0;
      plVar10 = (long *)plVar8[1];
      if ((plVar10 == (long *)0x0) ||
         (__ZNSt3__119__shared_weak_count4lockEv(), plStack_118 = plVar10, plVar10 == (long *)0x0))
      {
        lVar16 = 0;
      }
      else {
        lVar16 = *plVar8;
      }
      if ((ulong)((long)ppuVar22[0x72] - (long)ppuVar22[0x71] >> 4) <= uVar18) goto LAB_10a602ef0;
      ppuVar9 = (undefined **)(ppuVar22[0x71] + uVar18 * 0x10);
      if (lVar16 == 0) {
        plVar8 = (long *)ppuVar9[1];
        *ppuVar9 = (undefined *)0x0;
        ppuVar9[1] = (undefined *)0x0;
        if (plVar8 != (long *)0x0) {
LAB_10a602c68:
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      else if (param_4 == 0) {
        FUN_10a447c64(&puStack_100,lVar16);
        if (plStack_f8 != (long *)0x0) {
          plVar8 = plStack_f8 + 2;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar6) {
              *plVar8 = *plVar8 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        puVar13 = ppuVar9[1];
        ppuVar9[1] = (undefined *)plStack_f8;
        *ppuVar9 = puStack_100;
        if (puVar13 != (undefined *)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        if (plStack_f8 != (long *)0x0) {
          plVar8 = plStack_f8 + 1;
          do {
            lVar16 = *plVar8;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar6) {
              *plVar8 = lVar16 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
LAB_10a602c50:
          plVar8 = plStack_f8;
          if (lVar16 == 0) {
            (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
            goto LAB_10a602c68;
          }
        }
      }
      else {
        puVar13 = *(undefined **)(lVar16 + 0x40);
        plVar8 = *(long **)(lVar16 + 0x48);
        if (*(char *)(param_4 + 0xb8) == '\x01') {
          ppuStack_b0 = (undefined **)FUN_10a638074;
          ppuStack_a8 = &PTR_FUN_110c012f0;
          ppuStack_a0 = ppuVar9;
          FUN_10a637d34(param_4,puVar13,plVar8,&ppuStack_b0);
          pcVar15 = (code *)*ppuStack_a8;
          pppuVar12 = &ppuStack_a8;
        }
        else {
          lVar11 = param_4 + 0x88;
          puStack_100 = puVar13;
          plStack_f8 = plVar8;
          func_0x00010a35bf90(lVar11,&puStack_100);
          pplVar4 = &plStack_f8;
          ppuVar7 = &puStack_100;
          if (lVar11 != 0) {
            pplVar4 = (long **)(lVar11 + 0x28);
            ppuVar7 = (undefined **)(lVar11 + 0x20);
          }
          if ((puVar13 == *ppuVar7) && (plVar8 == *pplVar4)) {
            FUN_10a447c64(&puStack_100,lVar16);
            if (plStack_f8 != (long *)0x0) {
              plVar8 = plStack_f8 + 2;
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                if (bVar6) {
                  *plVar8 = *plVar8 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            puVar13 = ppuVar9[1];
            ppuVar9[1] = (undefined *)plStack_f8;
            *ppuVar9 = puStack_100;
            if (puVar13 != (undefined *)0x0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
            if (plStack_f8 != (long *)0x0) {
              plVar8 = plStack_f8 + 1;
              do {
                lVar16 = *plVar8;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                if (bVar6) {
                  *plVar8 = lVar16 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              goto LAB_10a602c50;
            }
            goto LAB_10a602ca4;
          }
          pcStack_f0 = FUN_10a638134;
          ppuStack_e8 = &PTR_FUN_110c01310;
          ppuStack_e0 = ppuVar9;
          FUN_10a637d34(param_4,*ppuVar7,*pplVar4,&pcStack_f0);
          pcVar15 = (code *)*ppuStack_e8;
          pppuVar12 = &ppuStack_e8;
        }
        (*pcVar15)(pppuVar12);
      }
LAB_10a602ca4:
      if (plStack_118 != (long *)0x0) {
        plVar8 = plStack_118 + 1;
        do {
          lVar16 = *plVar8;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar6) {
            *plVar8 = lVar16 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plStack_118 + 0x10))(plStack_118);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_118);
        }
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 != uVar23);
  }
  *param_1 = ppuVar22;
  param_1[1] = ppuVar21;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_10a602e88:
  FUN_10a60f824();
LAB_10a602ef0:
                    /* WARNING: Does not return */
  pcVar15 = (code *)SoftwareBreakpoint(1,0x10a602ef4);
  (*pcVar15)();
}



/* Entry: 10a602f60; end: 10a603033;  */

void FUN_10a602f60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_58 [20];
  byte bStack_44;
  
  plVar5 = *(long **)(param_1 + 0x380);
  if ((plVar5 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar5 != (long *)0x0))
  {
    lVar7 = *(long *)(param_1 + 0x378);
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
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
    if ((lVar7 != 0) && (FUN_10a603034(auStack_58,param_1,param_2,param_3), bStack_44 == 1)) {
      FUN_10a603310(param_1 + 0x438,auStack_58);
      if ((bStack_44 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a603034);
        (*pcVar4)();
      }
      FUN_10a603310(param_1 + 0x450,auStack_58);
    }
  }
  return;
}



/* Entry: 10a603034; end: 10a60330f;  */

void FUN_10a603034(float *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  float *pfVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined1 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fStack_98;
  float fStack_94;
  float fStack_8c;
  float fStack_88;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  undefined8 uStack_74;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  
  FUN_10a005558(&fStack_68,param_3,param_4);
  plVar5 = *(long **)(param_2 + 0x380);
  if ((plVar5 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar5 == (long *)0x0))
  {
    lVar9 = 0;
  }
  else {
    lVar9 = *(long *)(param_2 + 0x378);
    plVar1 = plVar5 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  if (*(char *)(lVar9 + 0x2f0) == '\x01') {
    FUN_10a42b498(lVar9);
    *(undefined1 *)(lVar9 + 0x2f0) = 0;
  }
  if (*(long *)(lVar9 + 0x2f8) != 0) {
    lVar7 = lVar9 + 0x300;
    do {
      lVar8 = 0;
      do {
        pfVar2 = (float *)(lVar7 + lVar8);
        fVar14 = fStack_5c;
        if (*pfVar2 <= 0.0) {
          fVar14 = -fStack_5c;
        }
        fVar11 = fStack_58;
        if (pfVar2[1] <= 0.0) {
          fVar11 = -fStack_58;
        }
        fVar12 = fStack_54;
        if (pfVar2[2] <= 0.0) {
          fVar12 = -fStack_54;
        }
        fVar14 = pfVar2[1] * (fStack_64 + fVar11) + (fStack_68 + fVar14) * *pfVar2 +
                 (fStack_60 + fVar12) * pfVar2[2];
      } while ((-pfVar2[3] <= fVar14) && (bVar4 = lVar8 != 0x50, lVar8 = lVar8 + 0x10, bVar4));
      if (-pfVar2[3] <= fVar14) {
        lVar7 = 200;
        if (*(ulong *)(lVar9 + 0x4d0) < 2) {
          lVar7 = 0x1e0;
        }
        lVar7 = lVar9 + 0x2f8 + lVar7;
        FUN_10a005558(&fStack_80,&fStack_68,lVar7 + 0x10);
        if (0.0 < fStack_78 + fStack_6c) {
          fVar11 = fStack_80 + (float)uStack_74;
          fVar14 = (float)((ulong)uStack_74 >> 0x20);
          fVar12 = fStack_7c + fVar14;
          fStack_80 = ((fStack_80 - (float)uStack_74) + fVar11) * 0.5;
          fStack_7c = ((fStack_7c - fVar14) + fVar12) * 0.5;
          fStack_78 = ((fStack_78 - fStack_6c) + -0.01) * 0.5;
          uStack_74 = CONCAT44(fVar12 - fStack_7c,fVar11 - fStack_80);
          fStack_6c = -0.01 - fStack_78;
        }
        fVar14 = fStack_78;
        FUN_10a005558(&fStack_98,&fStack_80,lVar7 + 0x50);
        fVar11 = *(float *)(param_2 + 0x1f0);
        fVar13 = fVar11 + fVar11;
        FUN_10a42bae4(lVar9);
        fVar12 = fVar13 - (fStack_8c + fStack_8c);
        if (fVar12 <= 0.0) {
          fVar12 = 0.0;
        }
        fVar10 = ((fStack_98 - (fStack_8c + fVar12)) + 1.0) * 0.5;
        fVar12 = (fStack_98 + fStack_8c + fVar12 + 1.0) * 0.5 - fVar10;
        if (0.0 < fVar12) {
          fVar11 = fStack_88 * -2.0 + fVar11 * fVar13;
          if (fVar11 <= 0.0) {
            fVar11 = 0.0;
          }
          fVar13 = 1.0 - (fStack_94 + fStack_88 + fVar11 + 1.0) * 0.5;
          fVar11 = (1.0 - ((fStack_94 - (fStack_88 + fVar11)) + 1.0) * 0.5) - fVar13;
          if (0.0 < fVar11) {
            *param_1 = fVar10;
            param_1[1] = fVar13;
            param_1[2] = fVar10 + fVar12;
            param_1[3] = fVar13 + fVar11;
            param_1[4] = -fVar14;
            uVar6 = 1;
            goto LAB_10a6032f0;
          }
        }
        uVar6 = 0;
        *(undefined1 *)param_1 = 0;
LAB_10a6032f0:
        *(undefined1 *)(param_1 + 5) = uVar6;
        return;
      }
      lVar7 = lVar7 + 0x60;
    } while (lVar7 != lVar9 + 0x2f8 + *(long *)(lVar9 + 0x2f8) * 0x60 + 8);
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}



/* Entry: 10a603310; end: 10a603407;  */

void FUN_10a603310(float param_1,float param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  undefined4 uStack_54;
  long *plStack_50;
  long *plStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  plVar2 = (long *)param_3[1];
  if (plVar2 < (long *)param_3[2]) {
    lVar3 = param_4[1];
    lVar7 = *param_4;
    *(int *)(plVar2 + 2) = (int)param_4[2];
    plVar2[1] = lVar3;
    *plVar2 = lVar7;
    lVar7 = (long)plVar2 + 0x14;
  }
  else {
    lVar7 = (long)plVar2 - *param_3;
    uVar4 = (lVar7 >> 2) * -0x3333333333333333 + 1;
    if (0xccccccccccccccc < uVar4) {
      plVar2 = param_3;
      plVar1 = param_4;
      FUN_10a60f8ec();
      pcStack_38 = FUN_10a603408;
      plVar2[0x83] = (long)plVar1;
      if (((*(byte *)((long)plVar2 + 0x3b3) & 1) != 0) ||
         (plVar1 = plVar2, *(char *)((long)plVar2 + 0x3b2) == '\x01')) {
        lVar7 = *(long *)(plVar1[0x2d] + 0x248);
        if (lVar7 != 0) {
          plStack_50 = param_4;
          plStack_48 = param_3;
          puStack_40 = &stack0xfffffffffffffff0;
          FUN_10a394a64(lVar7);
          func_0x00010acae698(lVar7 + 0x268);
          uVar12 = NEON_fmov(0x3f800000,4);
          fVar9 = (float)((ulong)uVar12 >> 0x20);
          fVar10 = ((float)*(undefined8 *)(lVar7 + 0x2a0) + (float)uVar12) * 0.5;
          fVar11 = ((float)((ulong)*(undefined8 *)(lVar7 + 0x2a0) >> 0x20) + fVar9) * 0.5;
          fVar8 = param_1 * ((float)uVar12 - fVar10);
          fVar9 = param_2 * (fVar9 - fVar11);
          fVar10 = (fVar8 - param_1 * fVar10) * 0.5;
          fVar11 = (fVar9 - param_2 * fVar11) * 0.5;
          uStack_68 = CONCAT44(fVar11,fVar10);
          uStack_60 = 0;
          uStack_5c = CONCAT44(fVar9 - fVar11,fVar8 - fVar10);
          uStack_54 = 0;
          lVar7 = *(long *)(lVar7 + 0x178);
          if ((*(byte *)(lVar7 + 0x2a) & 0x24) != 0) {
            FUN_10a3e8fd4(lVar7);
          }
          FUN_10a6034d0(plVar2,&uStack_68,lVar7 + 0xc0);
        }
      }
      return;
    }
    lVar3 = param_3[2] - *param_3 >> 2;
    uVar5 = lVar3 * -0x6666666666666666;
    if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
      uVar5 = uVar4;
    }
    if (0x666666666666665 < (ulong)(lVar3 * -0x3333333333333333)) {
      uVar5 = 0xccccccccccccccc;
    }
    plVar1 = param_3;
    FUN_10a60f900();
    plVar2 = (long *)((long)plVar1 + lVar7);
    lVar3 = param_4[1];
    lVar7 = *param_4;
    *(int *)(plVar2 + 2) = (int)param_4[2];
    plVar2[1] = lVar3;
    *plVar2 = lVar7;
    lVar7 = (long)plVar2 + 0x14;
    lVar6 = (long)plVar2 - (param_3[1] - *param_3);
    _memcpy(lVar6);
    lVar3 = *param_3;
    *param_3 = lVar6;
    param_3[1] = lVar7;
    param_3[2] = (long)plVar1 + uVar5 * 0x14;
    if (lVar3 != 0) {
      __ZdlPv();
    }
  }
  param_3[1] = lVar7;
  return;
}



/* Entry: 10a603408; end: 10a6034cf;  */

void FUN_10a603408(float param_1,float param_2,long param_3,long param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  undefined4 uStack_24;
  
  *(long *)(param_3 + 0x418) = param_4;
  if (((*(byte *)(param_3 + 0x3b3) & 1) != 0) ||
     (param_4 = param_3, *(char *)(param_3 + 0x3b2) == '\x01')) {
    lVar1 = *(long *)(*(long *)(param_4 + 0x168) + 0x248);
    if (lVar1 != 0) {
      FUN_10a394a64(lVar1);
      func_0x00010acae698(lVar1 + 0x268);
      uVar6 = NEON_fmov(0x3f800000,4);
      fVar3 = (float)((ulong)uVar6 >> 0x20);
      fVar4 = ((float)*(undefined8 *)(lVar1 + 0x2a0) + (float)uVar6) * 0.5;
      fVar5 = ((float)((ulong)*(undefined8 *)(lVar1 + 0x2a0) >> 0x20) + fVar3) * 0.5;
      fVar2 = param_1 * ((float)uVar6 - fVar4);
      fVar3 = param_2 * (fVar3 - fVar5);
      fVar4 = (fVar2 - param_1 * fVar4) * 0.5;
      fVar5 = (fVar3 - param_2 * fVar5) * 0.5;
      uStack_38 = CONCAT44(fVar5,fVar4);
      uStack_30 = 0;
      uStack_2c = CONCAT44(fVar3 - fVar5,fVar2 - fVar4);
      uStack_24 = 0;
      lVar1 = *(long *)(lVar1 + 0x178);
      if ((*(byte *)(lVar1 + 0x2a) & 0x24) != 0) {
        FUN_10a3e8fd4(lVar1);
      }
      FUN_10a6034d0(param_3,&uStack_38,lVar1 + 0xc0);
    }
  }
  return;
}



/* Entry: 10a6034d0; end: 10a6035b3;  */

void FUN_10a6034d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_70;
  undefined5 uStack_68;
  undefined3 uStack_63;
  undefined5 uStack_60;
  undefined8 uStack_58;
  undefined5 uStack_50;
  undefined3 uStack_4b;
  undefined4 uStack_48;
  char cStack_44;
  
  plVar5 = *(long **)(param_1 + 0x380);
  if ((plVar5 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar5 != (long *)0x0))
  {
    lVar8 = *(long *)(param_1 + 0x378);
    plVar1 = plVar5 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
    if ((lVar8 != 0) && (FUN_10a603034(&uStack_58,param_1,param_2,param_3), cStack_44 == '\x01')) {
      puVar2 = (undefined8 *)(param_1 + 0x420);
      if ((*(byte *)(param_1 + 0x434) & 1) == 0) {
        *(ulong *)(param_1 + 0x428) = CONCAT35(uStack_4b,uStack_50);
        *puVar2 = uStack_58;
        uVar6 = CONCAT17(1,CONCAT43(uStack_48,uStack_4b));
      }
      else {
        FUN_10a6035b4(&uStack_70,puVar2,&uStack_58);
        *(ulong *)(param_1 + 0x428) = CONCAT35(uStack_63,uStack_68);
        *puVar2 = uStack_70;
        uVar6 = CONCAT53(uStack_60,uStack_63);
      }
      *(undefined8 *)(param_1 + 0x42d) = uVar6;
    }
  }
  return;
}



/* Entry: 10a6035b4; end: 10a603663;  */

void FUN_10a6035b4(float *param_1,float *param_2,float *param_3)

{
  bool bVar1;
  float *pfVar2;
  float fVar3;
  undefined1 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar6 = *param_3;
  if (fVar6 <= param_2[2]) {
    bVar1 = param_3[2] < *param_2;
  }
  else {
    bVar1 = true;
  }
  fVar8 = param_3[1];
  if (fVar8 <= param_2[3]) {
    fVar9 = param_2[1];
    if (param_3[3] < fVar9) {
      bVar1 = true;
    }
    if (!bVar1) {
      if (fVar6 <= *param_2) {
        fVar6 = *param_2;
      }
      if (fVar8 <= fVar9) {
        fVar8 = fVar9;
      }
      pfVar2 = param_3;
      if (param_2[2] <= param_3[2]) {
        pfVar2 = param_2;
      }
      fVar9 = pfVar2[2];
      pfVar2 = param_3;
      if (param_2[3] <= param_3[3]) {
        pfVar2 = param_2;
      }
      fVar3 = pfVar2[3];
      fVar5 = param_3[4];
      fVar7 = param_2[4];
      *param_1 = fVar6;
      param_1[1] = fVar8;
      if (fVar7 <= fVar5) {
        fVar5 = fVar7;
      }
      param_1[2] = fVar9;
      param_1[3] = fVar3;
      param_1[4] = fVar5;
      uVar4 = 1;
      goto LAB_10a60365c;
    }
  }
  uVar4 = 0;
  *(undefined1 *)param_1 = 0;
LAB_10a60365c:
  *(undefined1 *)(param_1 + 5) = uVar4;
  return;
}



/* Entry: 10a603664; end: 10a6039c7;  */

void FUN_10a603664(undefined8 param_1,ulong param_2,long param_3)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  float fVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  undefined8 auStack_c8 [2];
  char cStack_b4;
  undefined8 auStack_88 [2];
  char cStack_74;
  undefined8 uStack_70;
  undefined4 uStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  
  puVar1 = (ulong *)(param_3 + 0x438);
  if (*(long *)(param_3 + 0x438) != 0) {
    *(long *)(param_3 + 0x440) = *(long *)(param_3 + 0x438);
    __ZdlPv();
  }
  uVar15 = *(ulong *)(param_3 + 0x450);
  *(undefined8 *)(param_3 + 0x440) = *(undefined8 *)(param_3 + 0x458);
  *puVar1 = uVar15;
  *(undefined8 *)(param_3 + 0x448) = *(undefined8 *)(param_3 + 0x460);
  *(undefined8 *)(param_3 + 0x458) = 0;
  *(undefined8 *)(param_3 + 0x460) = 0;
  *(undefined8 *)(param_3 + 0x450) = 0;
  plVar6 = *(long **)(param_3 + 0x380);
  if (plVar6 == (long *)0x0) {
    return;
  }
  __ZNSt3__119__shared_weak_count4lockEv();
  if (plVar6 == (long *)0x0) {
    return;
  }
  lVar11 = *(long *)(param_3 + 0x378);
  plVar2 = plVar6 + 1;
  do {
    lVar9 = *plVar2;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = lVar9 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar9 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
  }
  fVar16 = (float)param_2;
  fVar14 = (float)uVar15;
  if (lVar11 == 0) {
    return;
  }
  puVar13 = *(undefined8 **)(param_3 + 0x390);
  for (puVar12 = *(undefined8 **)(param_3 + 0x388); puVar12 != puVar13; puVar12 = puVar12 + 2) {
    plVar6 = (long *)puVar12[1];
    if ((plVar6 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 != (long *)0x0)
       ) {
      plVar10 = (long *)*puVar12;
      plVar2 = plVar6 + 1;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
      if (((plVar10 != (long *)0x0) &&
          (plVar6 = plVar10, (**(code **)(*plVar10 + 0x60))(), (int)plVar6 != 0)) &&
         (plVar6 = (long *)plVar10[0x4c], plVar6 != (long *)0x0)) {
        FUN_10a347d04();
        if (plVar6 == (long *)0x0) {
          uStack_68 = 0;
          fStack_64 = -3.4028235e+38;
          uStack_70 = 0;
          fStack_60 = -3.4028235e+38;
          fStack_5c = -3.4028235e+38;
          bVar4 = true;
          uVar15 = 0xff7fffff;
          param_2 = uVar15;
        }
        else {
          (**(code **)(*plVar6 + 0x38))(&uStack_70);
          uVar15 = (ulong)(uint)fStack_64;
          bVar4 = fStack_5c < 0.0;
          param_2 = (ulong)(uint)fStack_60;
        }
        iVar8 = 0;
        while ((fVar14 = (float)param_2, iVar8 == 1 || (fVar14 = (float)uVar15, iVar8 != 2))) {
          bVar5 = fVar14 < 0.0;
          while (iVar8 = iVar8 + 1, bVar5) {
            if (iVar8 == 2) goto LAB_10a603894;
            bVar5 = true;
          }
        }
        if (!bVar4) {
          func_0x00010a424420(auStack_c8,plVar10);
          FUN_10a603034(auStack_88,param_3,&uStack_70,auStack_c8);
          if (cStack_74 == '\x01') {
            if ((*(long *)(param_3 + 0x418) == 0) || (*(char *)(param_3 + 0x434) != '\x01')) {
              puVar7 = auStack_88;
            }
            else {
              FUN_10a6035b4(auStack_c8,param_3 + 0x420,auStack_88);
              if (cStack_b4 != '\x01') goto LAB_10a603894;
              puVar7 = auStack_c8;
            }
            FUN_10a603310(puVar1,puVar7);
          }
        }
      }
    }
LAB_10a603894:
    fVar16 = (float)param_2;
    fVar14 = (float)uVar15;
  }
  if (((*(char *)(param_3 + 0x3b2) == '\x01') &&
      (lVar11 = *(long *)(*(long *)(param_3 + 0x168) + 0x248), lVar11 != 0)) &&
     (*(long *)(param_3 + 0x438) == *(long *)(param_3 + 0x440))) {
    FUN_10a394a64(lVar11);
    func_0x00010acae698(lVar11 + 0x268);
    uVar19 = NEON_fmov(0x3f800000,4);
    fVar20 = (float)((ulong)uVar19 >> 0x20);
    fVar17 = ((float)*(undefined8 *)(lVar11 + 0x2a0) + (float)uVar19) * 0.5;
    fVar18 = ((float)((ulong)*(undefined8 *)(lVar11 + 0x2a0) >> 0x20) + fVar20) * 0.5;
    fStack_64 = fVar14 * ((float)uVar19 - fVar17);
    fStack_60 = fVar16 * (fVar20 - fVar18);
    fVar14 = (fStack_64 - fVar14 * fVar17) * 0.5;
    fVar16 = (fStack_60 - fVar16 * fVar18) * 0.5;
    uStack_70 = CONCAT44(fVar16,fVar14);
    uStack_68 = 0;
    fStack_64 = fStack_64 - fVar14;
    fStack_60 = fStack_60 - fVar16;
    fStack_5c = 0.0;
    lVar11 = *(long *)(lVar11 + 0x178);
    if ((*(byte *)(lVar11 + 0x2a) & 0x24) != 0) {
      FUN_10a3e8fd4(lVar11);
    }
    FUN_10a603034(auStack_c8,param_3,&uStack_70,lVar11 + 0xc0);
    if (cStack_b4 == '\x01') {
      if ((*(long *)(param_3 + 0x418) == 0) || (*(char *)(param_3 + 0x434) != '\x01')) {
        puVar12 = auStack_c8;
      }
      else {
        FUN_10a6035b4(&uStack_70,param_3 + 0x420,auStack_c8);
        if (fStack_5c._0_1_ != '\x01') goto LAB_10a603998;
        puVar12 = &uStack_70;
      }
      FUN_10a603310(puVar1,puVar12);
    }
  }
LAB_10a603998:
  *(undefined8 *)(param_3 + 0x418) = 0;
  if (*(char *)(param_3 + 0x434) == '\x01') {
    *(undefined1 *)(param_3 + 0x434) = 0;
  }
  return;
}



/* Entry: 10a6039c8; end: 10a603a1f;  */

void FUN_10a6039c8(long param_1)

{
  func_0x000107c28478(param_1 + 0x468,*(undefined8 *)(param_1 + 0x470));
  *(long *)(param_1 + 0x468) = param_1 + 0x470;
  *(undefined8 *)(param_1 + 0x478) = 0;
  *(undefined8 *)(param_1 + 0x470) = 0;
  *(undefined8 *)(param_1 + 0x488) = *(undefined8 *)(param_1 + 0x480);
  *(undefined8 *)(param_1 + 0x4a0) = *(undefined8 *)(param_1 + 0x498);
  FUN_10a6381f4(param_1 + 0x4b0);
  *(undefined8 *)(param_1 + 0x4e0) = *(undefined8 *)(param_1 + 0x4d8);
  return;
}



/* Entry: 10a603a20; end: 10a603b47;  */

/* WARNING: Possible PIC construction at 0x00010a603b74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a603d38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a603b78) */
/* WARNING: Removing unreachable block (ram,0x00010a603ba0) */
/* WARNING: Removing unreachable block (ram,0x00010a603c90) */
/* WARNING: Removing unreachable block (ram,0x00010a603c98) */
/* WARNING: Removing unreachable block (ram,0x00010a603cb8) */
/* WARNING: Removing unreachable block (ram,0x00010a603ca8) */
/* WARNING: Removing unreachable block (ram,0x00010a603cb4) */
/* WARNING: Removing unreachable block (ram,0x00010a603ccc) */
/* WARNING: Removing unreachable block (ram,0x00010a603cdc) */
/* WARNING: Removing unreachable block (ram,0x00010a603ba8) */
/* WARNING: Removing unreachable block (ram,0x00010a603ce0) */
/* WARNING: Removing unreachable block (ram,0x00010a603ce8) */
/* WARNING: Removing unreachable block (ram,0x00010a603d08) */
/* WARNING: Removing unreachable block (ram,0x00010a603cf8) */
/* WARNING: Removing unreachable block (ram,0x00010a603d04) */
/* WARNING: Removing unreachable block (ram,0x00010a603d1c) */
/* WARNING: Removing unreachable block (ram,0x00010a603d2c) */
/* WARNING: Removing unreachable block (ram,0x00010a603bb0) */
/* WARNING: Removing unreachable block (ram,0x00010a603bf4) */
/* WARNING: Removing unreachable block (ram,0x00010a603c30) */
/* WARNING: Removing unreachable block (ram,0x00010a603c48) */
/* WARNING: Removing unreachable block (ram,0x00010a603c38) */
/* WARNING: Removing unreachable block (ram,0x00010a603c44) */
/* WARNING: Removing unreachable block (ram,0x00010a603c5c) */
/* WARNING: Removing unreachable block (ram,0x00010a603c74) */
/* WARNING: Removing unreachable block (ram,0x00010a603c64) */
/* WARNING: Removing unreachable block (ram,0x00010a603c70) */
/* WARNING: Removing unreachable block (ram,0x00010a603c88) */
/* WARNING: Removing unreachable block (ram,0x00010a603bfc) */
/* WARNING: Removing unreachable block (ram,0x00010a603c18) */
/* WARNING: Removing unreachable block (ram,0x00010a603c2c) */
/* WARNING: Removing unreachable block (ram,0x00010a603c08) */
/* WARNING: Removing unreachable block (ram,0x00010a603c14) */
/* WARNING: Removing unreachable block (ram,0x00010a603bc0) */
/* WARNING: Removing unreachable block (ram,0x00010a603bdc) */
/* WARNING: Removing unreachable block (ram,0x00010a603bf0) */
/* WARNING: Removing unreachable block (ram,0x00010a603bcc) */
/* WARNING: Removing unreachable block (ram,0x00010a603bd8) */
/* WARNING: Removing unreachable block (ram,0x00010a603d3c) */

void FUN_10a603a20(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined1 auStack_128 [16];
  undefined4 *puStack_118;
  undefined1 *puStack_100;
  long *plStack_f0;
  long lStack_e8;
  undefined1 **ppuStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined4 auStack_90 [2];
  undefined8 uStack_88;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_38;
  
  puVar3 = auStack_90;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a603664();
  puVar10 = *(undefined4 **)(param_1 + 0x4a0);
  for (puVar9 = *(undefined4 **)(param_1 + 0x498); puVar9 != puVar10; puVar9 = puVar9 + 1) {
    auStack_90[0] = *puVar9;
    func_0x00010a638258(param_1 + 0x4b0,auStack_90);
  }
  FUN_10a638498(auStack_90,param_1 + 0x468);
  pcStack_78 = FUN_10a63856c;
  ppuStack_70 = &PTR_FUN_110c01330;
  lStack_68 = param_1;
  FUN_10a2f0f14(*(long *)(param_2 + 0x18) + 0x50,&pcStack_78);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  plVar5 = (long *)(param_1 + 0x498);
  lVar8 = param_1 + 0x480;
  FUN_10a603b48(auStack_90,param_1 + 0x468);
  func_0x000107c28478(auStack_90,uStack_88);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c28478(auStack_90);
  __Unwind_Resume();
  pcStack_98 = FUN_10a603b48;
  ppuStack_e0 = &puStack_a0;
  uVar4 = *(ulong *)((long)puVar3 + 0x10);
  uVar6 = plVar5[1] - *plVar5 >> 2;
  uVar1 = uVar6 <= uVar4;
  uVar2 = uVar4 == uVar6;
  if (!(bool)uVar1 || (bool)uVar2) {
    if (uVar4 < uVar6) {
      plVar5[1] = *plVar5 + uVar4 * 4;
    }
    return;
  }
  uStack_d8 = 0x10a603b78;
  puStack_100 = (undefined1 *)puVar3;
  plStack_f0 = plVar5;
  lStack_e8 = lVar8;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x00010742b258(plVar5,uVar4 - uVar6);
  func_0x00010742bae4();
  if (!(bool)uVar1 || (bool)uVar2) {
    puVar9 = *(undefined4 **)(lVar8 + 8);
    puVar3 = puVar9;
    for (lVar7 = (long)plVar5 << 2; lVar7 != 0; lVar7 = lVar7 + -4) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 **)(lVar8 + 8) = puVar9 + (long)plVar5;
    return;
  }
  func_0x00010742be60();
  func_0x00010014b1ac();
  func_0x00010742b52c();
  func_0x00010014b1fc(auStack_128);
  puVar3 = puStack_118;
  for (lVar8 = (long)plVar5 << 2; lVar8 != 0; lVar8 = lVar8 + -4) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puStack_118 = puStack_118 + (long)plVar5;
  func_0x00010742bb50();
  func_0x00010014b2a4();
  func_0x00010014b328(auStack_128);
  return;
}



/* Entry: 10a603b48; end: 10a603d5f;  */

/* WARNING: Possible PIC construction at 0x00010a603b74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a603d38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a603b78) */
/* WARNING: Removing unreachable block (ram,0x00010a603ba0) */
/* WARNING: Removing unreachable block (ram,0x00010a603c90) */
/* WARNING: Removing unreachable block (ram,0x00010a603c98) */
/* WARNING: Removing unreachable block (ram,0x00010a603cb8) */
/* WARNING: Removing unreachable block (ram,0x00010a603ca8) */
/* WARNING: Removing unreachable block (ram,0x00010a603cb4) */
/* WARNING: Removing unreachable block (ram,0x00010a603ccc) */
/* WARNING: Removing unreachable block (ram,0x00010a603cdc) */
/* WARNING: Removing unreachable block (ram,0x00010a603ba8) */
/* WARNING: Removing unreachable block (ram,0x00010a603ce0) */
/* WARNING: Removing unreachable block (ram,0x00010a603ce8) */
/* WARNING: Removing unreachable block (ram,0x00010a603d08) */
/* WARNING: Removing unreachable block (ram,0x00010a603cf8) */
/* WARNING: Removing unreachable block (ram,0x00010a603d04) */
/* WARNING: Removing unreachable block (ram,0x00010a603d1c) */
/* WARNING: Removing unreachable block (ram,0x00010a603d2c) */
/* WARNING: Removing unreachable block (ram,0x00010a603bb0) */
/* WARNING: Removing unreachable block (ram,0x00010a603bf4) */
/* WARNING: Removing unreachable block (ram,0x00010a603c30) */
/* WARNING: Removing unreachable block (ram,0x00010a603c48) */
/* WARNING: Removing unreachable block (ram,0x00010a603c38) */
/* WARNING: Removing unreachable block (ram,0x00010a603c44) */
/* WARNING: Removing unreachable block (ram,0x00010a603c5c) */
/* WARNING: Removing unreachable block (ram,0x00010a603c74) */
/* WARNING: Removing unreachable block (ram,0x00010a603c64) */
/* WARNING: Removing unreachable block (ram,0x00010a603c70) */
/* WARNING: Removing unreachable block (ram,0x00010a603c88) */
/* WARNING: Removing unreachable block (ram,0x00010a603bfc) */
/* WARNING: Removing unreachable block (ram,0x00010a603c18) */
/* WARNING: Removing unreachable block (ram,0x00010a603c2c) */
/* WARNING: Removing unreachable block (ram,0x00010a603c08) */
/* WARNING: Removing unreachable block (ram,0x00010a603c14) */
/* WARNING: Removing unreachable block (ram,0x00010a603bc0) */
/* WARNING: Removing unreachable block (ram,0x00010a603bdc) */
/* WARNING: Removing unreachable block (ram,0x00010a603bf0) */
/* WARNING: Removing unreachable block (ram,0x00010a603bcc) */
/* WARNING: Removing unreachable block (ram,0x00010a603bd8) */
/* WARNING: Removing unreachable block (ram,0x00010a603d3c) */

void FUN_10a603b48(long param_1,undefined8 param_2,long *param_3,long param_4)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_98 [16];
  undefined4 *puStack_88;
  long lStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  puStack_50 = &stack0xfffffffffffffff0;
  uVar4 = *(ulong *)(param_1 + 0x10);
  uVar6 = param_3[1] - *param_3 >> 2;
  uVar2 = uVar6 <= uVar4;
  uVar3 = uVar4 == uVar6;
  if (!(bool)uVar2 || (bool)uVar3) {
    if (uVar4 < uVar6) {
      param_3[1] = *param_3 + uVar4 * 4;
    }
    return;
  }
  uStack_48 = 0x10a603b78;
  lStack_70 = param_1;
  uStack_68 = param_2;
  plStack_60 = param_3;
  lStack_58 = param_4;
  func_0x00010742b258(param_3,uVar4 - uVar6);
  func_0x00010742bae4();
  if (!(bool)uVar2 || (bool)uVar3) {
    puVar5 = *(undefined4 **)(param_4 + 8);
    puVar1 = puVar5;
    for (lVar7 = (long)param_3 << 2; lVar7 != 0; lVar7 = lVar7 + -4) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    *(undefined4 **)(param_4 + 8) = puVar5 + (long)param_3;
    return;
  }
  func_0x00010742be60();
  func_0x00010014b1ac();
  func_0x00010742b52c();
  func_0x00010014b1fc(auStack_98);
  puVar1 = puStack_88 + (long)param_3;
  for (lVar7 = (long)param_3 << 2; lVar7 != 0; lVar7 = lVar7 + -4) {
    *puStack_88 = 0;
    puStack_88 = puStack_88 + 1;
  }
  puStack_88 = puVar1;
  func_0x00010742bb50();
  func_0x00010014b2a4();
  func_0x00010014b328(auStack_98);
  return;
}



/* Entry: 10a603d60; end: 10a603ddb;  */

void FUN_10a603d60(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  code **ppcVar4;
  code **ppcVar5;
  undefined **ppuVar6;
  code *pcStack_1d8;
  undefined **ppuStack_1d0;
  undefined ***pppuStack_1c8;
  code *pcStack_198;
  undefined **ppuStack_190;
  undefined ***pppuStack_188;
  code *pcStack_158;
  undefined **ppuStack_150;
  undefined ***pppuStack_148;
  long lStack_118;
  code *pcStack_d8;
  undefined **ppuStack_d0;
  undefined ***pppuStack_c8;
  long lStack_98;
  undefined ***pppuStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  code *pcStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  long lStack_28;
  
  FUN_10a603ddc();
  if ((*(ushort *)(param_1 + 0x180) >> 4 & 1) == 0) {
    FUN_10a605010(param_1,param_2);
    if ((*(ushort *)(param_1 + 0x180) >> 4 & 1) == 0) {
      FUN_10a6050c0(param_1,param_2);
      if (((*(ushort *)(param_1 + 0x180) >> 4 & 1) == 0) &&
         (FUN_10a605170(param_1,param_2), (*(ushort *)(param_1 + 0x180) >> 4 & 1) == 0)) {
        lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcStack_68 = FUN_10a63e304;
        ppuStack_60 = &PTR_FUN_110c019c0;
        ppcVar4 = &pcStack_68;
        lStack_58 = param_1;
        FUN_10a2f2000(*(long *)(param_2 + 0x18) + 1000);
        pppuVar2 = &ppuStack_60;
        (*(code *)*ppuStack_60)();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
          return;
        }
        ___stack_chk_fail();
        (*(code *)*ppuStack_60)(&ppuStack_60);
        pppuVar3 = pppuVar2;
        __Unwind_Resume();
        pcStack_78 = FUN_10a6052c0;
        pppuStack_88 = pppuVar2;
        puStack_80 = &stack0xfffffffffffffff0;
        FUN_10a605314();
        if (((*(ushort *)(pppuVar3 + 0x30) >> 4 & 1) != 0) ||
           (FUN_10a6053d4(pppuVar3,ppcVar4), (*(ushort *)(pppuVar3 + 0x30) >> 4 & 1) != 0)) {
          return;
        }
        lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pppuVar3[0xb4] = pppuVar3[0xb3];
        pppuVar3[0xb7] = pppuVar3[0xb6];
        pppuVar3[0xba] = pppuVar3[0xb9];
        pcStack_d8 = FUN_10a64259c;
        ppuStack_d0 = &PTR_FUN_110c01c90;
        ppcVar5 = &pcStack_d8;
        pppuStack_c8 = pppuVar3;
        FUN_10a605760(ppcVar4[3] + 0x610);
        pppuVar2 = &ppuStack_d0;
        (*(code *)*ppuStack_d0)();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
          return;
        }
        ___stack_chk_fail();
        (*(code *)*ppuStack_d0)(&ppuStack_d0);
        __Unwind_Resume();
        lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcStack_158 = FUN_10a638b3c;
        ppuStack_150 = &PTR_FUN_110c013b8;
        pppuStack_148 = pppuVar2;
        FUN_10a6056e8(ppcVar5[3] + 0x558,&pcStack_158);
        (*(code *)*ppuStack_150)(&ppuStack_150);
        pcStack_198 = FUN_10a6394c0;
        ppuStack_190 = &PTR_DAT_110c01440;
        pppuStack_188 = pppuVar2;
        FUN_10a2f01d8(ppcVar5[3] + 0x278,&pcStack_198);
        (*(code *)*ppuStack_190)(&ppuStack_190);
        pcStack_1d8 = FUN_10a63a018;
        ppuStack_1d0 = &PTR_FUN_110c014c8;
        ppcVar4 = &pcStack_1d8;
        pppuStack_1c8 = pppuVar2;
        FUN_10a605760(ppcVar5[3] + 0x610);
        pppuVar2 = &ppuStack_1d0;
        (*(code *)*ppuStack_1d0)();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
          return;
        }
        ___stack_chk_fail();
        (*(code *)*ppuStack_1d0)(&ppuStack_1d0);
        __Unwind_Resume();
        __ZNSt3__15mutex4lockEv(pppuVar2 + 7);
        ppuVar1 = (pppuVar2 + (long)*(int *)(pppuVar2 + 6) * 3)[1];
        for (ppuVar6 = pppuVar2[(long)*(int *)(pppuVar2 + 6) * 3]; ppuVar6 != ppuVar1;
            ppuVar6 = ppuVar6 + 7) {
          (**ppcVar4)(ppuVar6,ppcVar4);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(pppuVar2 + 7);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a603ddc; end: 10a60500f;  */

void FUN_10a603ddc(undefined **param_1,undefined ***param_2)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  bool bVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  code **ppcVar9;
  code **ppcVar10;
  undefined1 uVar11;
  ulong uVar12;
  long lVar13;
  code *pcVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  ulong uVar20;
  undefined **unaff_x20;
  undefined **ppuVar21;
  undefined8 unaff_x21;
  undefined *puVar22;
  undefined **ppuVar23;
  long *plVar24;
  ulong unaff_x26;
  ulong unaff_x27;
  undefined *puVar25;
  long lVar26;
  undefined8 uVar27;
  code *pcStack_478;
  undefined **ppuStack_470;
  undefined ***pppuStack_468;
  code *pcStack_438;
  undefined **ppuStack_430;
  undefined ***pppuStack_428;
  code *pcStack_3f8;
  undefined **ppuStack_3f0;
  undefined ***pppuStack_3e8;
  long lStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined **ppuStack_3a0;
  undefined ***pppuStack_398;
  undefined8 ****ppppuStack_390;
  code *pcStack_388;
  code *pcStack_378;
  undefined **ppuStack_370;
  undefined ***pppuStack_368;
  long lStack_338;
  undefined **ppuStack_330;
  undefined ***pppuStack_328;
  undefined8 ****ppppuStack_320;
  code *pcStack_318;
  code *pcStack_308;
  undefined **ppuStack_300;
  undefined ***pppuStack_2f8;
  long lStack_2c8;
  undefined **ppuStack_2c0;
  undefined ***pppuStack_2b8;
  undefined1 ****ppppuStack_2b0;
  code *pcStack_2a8;
  code *pcStack_298;
  undefined **ppuStack_290;
  undefined ***pppuStack_288;
  long lStack_258;
  undefined **ppuStack_250;
  undefined ***pppuStack_248;
  undefined1 ***pppuStack_240;
  code *pcStack_238;
  code *pcStack_228;
  undefined **ppuStack_220;
  undefined ***pppuStack_218;
  long lStack_1e8;
  undefined **ppuStack_1e0;
  undefined ***pppuStack_1d8;
  undefined1 **ppuStack_1d0;
  code *pcStack_1c8;
  code *pcStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  long lStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  long **pplStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined4 uStack_114;
  undefined *puStack_110;
  ulong uStack_108;
  long *plStack_100;
  long lStack_f8;
  float fStack_f0;
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = param_1;
  ppuStack_140 = param_1;
  if (*(long *)(param_1[0x43] + 0x30) != 0) {
    ppuVar23 = (undefined **)param_1[0x93];
    ppuStack_148 = (undefined **)param_1[0x94];
    if (ppuVar23 != ppuStack_148) {
      pplStack_138 = &plStack_100;
      unaff_x26 = 3;
      do {
        uStack_114 = *(undefined4 *)ppuVar23;
        if ((*(ushort *)(ppuVar6 + 0x30) >> 4 & 1) != 0) break;
        ppuVar5 = ppuVar6 + 0x96;
        FUN_10a63828c(ppuVar5,&uStack_114);
        puVar22 = ppuVar6[0x43];
        unaff_x20 = (undefined **)0x40;
        __Znwm();
        unaff_x20[1] = (undefined *)0x0;
        unaff_x20[2] = (undefined *)0x0;
        *unaff_x20 = (undefined *)&PTR_DAT_110c014f8;
        uVar11 = *(undefined1 *)((long)ppuVar5 + 0x1c);
        puVar25 = *(undefined **)((long)ppuVar5 + 0x14);
        unaff_x20[4] = (undefined *)0x0;
        unaff_x20[5] = (undefined *)0x0;
        ppuStack_130 = unaff_x20 + 3;
        *ppuStack_130 = (undefined *)&PTR_DAT_110bfba78;
        *(undefined4 *)(unaff_x20 + 6) = uStack_114;
        *(undefined1 *)((long)unaff_x20 + 0x34) = uVar11;
        unaff_x20[7] = puVar25;
        uStack_108 = 0;
        puStack_110 = (undefined *)0x0;
        lStack_f8 = 0;
        plStack_100 = (long *)0x0;
        fStack_f0 = *(float *)(puVar22 + 0x38);
        param_2 = *(undefined ****)(puVar22 + 0x20);
        ppuStack_128 = unaff_x20;
        FUN_10a6255f4(&puStack_110);
        ppuVar6 = ppuStack_140;
        uVar20 = uStack_108;
        plVar18 = plStack_100;
        for (plVar24 = *(long **)(puVar22 + 0x28); ppuStack_140 = ppuVar6, uStack_108 = uVar20,
            plStack_100 = plVar18, plVar24 != (long *)0x0; plVar24 = (long *)*plVar24) {
          uVar12 = plVar24[2];
          uVar17 = ((ulong)(uint)((int)uVar12 << 3) + 8 ^ uVar12 >> 0x20) * -0x622015f714c7d297;
          uVar17 = (uVar12 >> 0x20 ^ uVar17 >> 0x2f ^ uVar17) * -0x622015f714c7d297;
          uVar17 = (uVar17 ^ uVar17 >> 0x2f) * -0x622015f714c7d297;
          if (uVar20 != 0) {
            uVar15 = uVar20 - 1;
            if ((uVar20 & uVar15) == 0) {
              unaff_x27 = uVar17 & uVar15;
            }
            else {
              unaff_x27 = uVar17;
              if (uVar20 <= uVar17) {
                uVar19 = 0;
                if (uVar20 != 0) {
                  uVar19 = uVar17 / uVar20;
                }
                unaff_x27 = uVar17 - uVar19 * uVar20;
              }
            }
            plVar18 = *(long **)(puStack_110 + unaff_x27 * 8);
            if (plVar18 != (long *)0x0) {
              do {
                while( true ) {
                  plVar18 = (long *)*plVar18;
                  if (plVar18 == (long *)0x0) goto LAB_10a603fa4;
                  uVar19 = plVar18[1];
                  if (uVar19 != uVar17) break;
                  if (plVar18[2] == uVar12) goto LAB_10a604108;
                }
                if ((uVar20 & uVar15) == 0) {
                  uVar19 = uVar19 & uVar15;
                }
                else if (uVar20 <= uVar19) {
                  uVar3 = 0;
                  if (uVar20 != 0) {
                    uVar3 = uVar19 / uVar20;
                  }
                  uVar19 = uVar19 - uVar3 * uVar20;
                }
              } while (uVar19 == unaff_x27);
            }
          }
LAB_10a603fa4:
          plVar18 = (long *)0x68;
          __Znwm();
          *plVar18 = 0;
          plVar18[1] = uVar17;
          lVar13 = plVar24[3];
          lVar26 = plVar24[2];
          plVar18[3] = plVar24[3];
          plVar18[2] = lVar26;
          if (lVar13 != 0) {
            plVar16 = (long *)(lVar13 + 8);
            do {
              cVar1 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar4) {
                *plVar16 = *plVar16 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          ppuStack_c0 = (undefined **)(plVar18 + 4);
          *(undefined1 *)(plVar18 + 0xc) = 3;
          if (*(char *)(plVar24 + 0xc) == '\0') {
            uVar11 = 0;
          }
          else {
            param_2 = (undefined ***)(plVar24 + 4);
            FUN_10a005398(&ppuStack_c0);
            uVar11 = *(undefined1 *)(plVar24 + 0xc);
          }
          *(undefined1 *)(plVar18 + 0xc) = uVar11;
          if ((uVar20 == 0) || (fStack_f0 * (float)uVar20 < (float)(lStack_f8 + 1))) {
            uVar12 = 1;
            if (2 < uVar20) {
              uVar12 = (ulong)((uVar20 & uVar20 - 1) != 0);
            }
            param_2 = (undefined ***)(uVar12 | uVar20 << 1);
            pppuVar8 = (undefined ***)(long)((float)(lStack_f8 + 1) / fStack_f0);
            if (param_2 <= pppuVar8) {
              param_2 = pppuVar8;
            }
            FUN_10a6255f4(&puStack_110);
            uVar20 = uStack_108;
            if ((uStack_108 & uStack_108 - 1) == 0) {
              unaff_x27 = uStack_108 - 1 & uVar17;
            }
            else {
              unaff_x27 = uVar17;
              if (uStack_108 <= uVar17) {
                uVar12 = 0;
                if (uStack_108 != 0) {
                  uVar12 = uVar17 / uStack_108;
                }
                unaff_x27 = uVar17 - uVar12 * uStack_108;
              }
            }
          }
          plVar16 = *(long **)(puStack_110 + unaff_x27 * 8);
          if (plVar16 == (long *)0x0) {
            *plVar18 = (long)plStack_100;
            *(long ***)(puStack_110 + unaff_x27 * 8) = pplStack_138;
            plStack_100 = plVar18;
            if (*plVar18 != 0) {
              uVar12 = *(ulong *)(*plVar18 + 8);
              if ((uVar20 & uVar20 - 1) == 0) {
                uVar12 = uVar12 & uVar20 - 1;
              }
              else if (uVar20 <= uVar12) {
                uVar17 = 0;
                if (uVar20 != 0) {
                  uVar17 = uVar12 / uVar20;
                }
                uVar12 = uVar12 - uVar17 * uVar20;
              }
              *(long **)(puStack_110 + uVar12 * 8) = plVar18;
            }
          }
          else {
            *plVar18 = *plVar16;
            *plVar16 = (long)plVar18;
          }
          lStack_f8 = lStack_f8 + 1;
LAB_10a604108:
          ppuVar6 = ppuStack_140;
          uVar20 = uStack_108;
          plVar18 = plStack_100;
        }
        if (plVar18 == (long *)0x0) {
          param_1 = &puStack_110;
          FUN_10a57cb64();
LAB_10a604318:
          ppuVar5 = unaff_x20 + 1;
          do {
            puVar22 = *ppuVar5;
            cVar1 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
            if (bVar4) {
              *ppuVar5 = puVar22 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (puVar22 == (undefined *)0x0) {
            (**(code **)(*unaff_x20 + 0x10))(unaff_x20);
            param_1 = unaff_x20;
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
        else {
          do {
            pppuVar8 = (undefined ***)plVar18[2];
            puVar25 = puVar22 + 0x18;
            FUN_10a626004();
            param_2 = pppuVar8;
            if (puVar25 != (undefined *)0x0) {
              if ((char)plVar18[0xc] == '\x01') {
                pcVar14 = (code *)plVar18[4];
                ppuStack_b8 = ppuStack_128;
                ppuStack_c0 = ppuStack_130;
                if (ppuStack_128 != (undefined **)0x0) {
                  ppuVar5 = ppuStack_128 + 1;
                  do {
                    cVar1 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
                    if (bVar4) {
                      *ppuVar5 = *ppuVar5 + 1;
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                }
                param_2 = (undefined ***)(plVar18 + 4);
                (*pcVar14)(&ppuStack_c0);
                if (ppuStack_b8 != (undefined **)0x0) {
                  ppuVar5 = ppuStack_b8 + 1;
                  do {
                    puVar25 = *ppuVar5;
                    cVar1 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
                    if (bVar4) {
                      *ppuVar5 = puVar25 + -1;
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                    ppuVar21 = ppuStack_b8;
                  } while (cVar1 != '\0');
LAB_10a6041d0:
                  if (puVar25 == (undefined *)0x0) {
                    (**(code **)(*ppuVar21 + 0x10))(ppuVar21);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar21);
                  }
                }
              }
              else if ((char)plVar18[0xc] == '\x02') {
                plVar24 = plVar18 + 4;
                FUN_10a688b40();
                ppuVar5 = ppuStack_128;
                if (plVar24 == (long *)0x0) {
                  param_2 = (undefined ***)0x0;
                  if (pppuVar8 != (undefined ***)0x0) {
                    lStack_b0 = plVar18[4];
                    lStack_a8 = plVar18[5];
                    if (lStack_a8 != 0) {
                      plVar24 = (long *)(lStack_a8 + 8);
                      do {
                        cVar1 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                        if (bVar4) {
                          *plVar24 = *plVar24 + 1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar1 != '\0');
                    }
                    ppuStack_d0 = ppuStack_130;
                    ppuStack_c8 = ppuStack_128;
                    if (ppuStack_128 == (undefined **)0x0) {
                      ppuStack_98 = (undefined **)0x0;
                    }
                    else {
                      ppuVar21 = ppuStack_128 + 1;
                      do {
                        cVar1 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(ppuVar21,0x10);
                        if (bVar4) {
                          *ppuVar21 = *ppuVar21 + 1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar1 != '\0');
                      ppuStack_98 = ppuStack_128;
                      do {
                        cVar1 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(ppuVar21,0x10);
                        if (bVar4) {
                          *ppuVar21 = *ppuVar21 + 1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar1 != '\0');
                    }
                    ppuStack_a0 = ppuStack_130;
                    ppuStack_b8 = &PTR_FUN_110c01538;
                    ppuStack_d8 = (undefined **)0x0;
                    uStack_e0 = 0;
                    ppuStack_c0 = (undefined **)FUN_10a63aef4;
                    param_2 = &ppuStack_c0;
                    FUN_10a4634ec(pppuVar8);
                    (*(code *)*ppuStack_b8)(&ppuStack_b8);
                    if (ppuVar5 != (undefined **)0x0) {
                      ppuVar21 = ppuVar5 + 1;
                      do {
                        puVar25 = *ppuVar21;
                        cVar1 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(ppuVar21,0x10);
                        if (bVar4) {
                          *ppuVar21 = puVar25 + -1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar1 != '\0');
                      if (puVar25 == (undefined *)0x0) {
                        (**(code **)(*ppuVar5 + 0x10))(ppuVar5);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar5);
                      }
                    }
                    if (ppuStack_d8 != (undefined **)0x0) {
                      ppuVar5 = ppuStack_d8 + 1;
                      do {
                        puVar25 = *ppuVar5;
                        cVar1 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
                        if (bVar4) {
                          *ppuVar5 = puVar25 + -1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                        ppuVar21 = ppuStack_d8;
                      } while (cVar1 != '\0');
                      goto LAB_10a6041d0;
                    }
                  }
                }
                else {
                  *plVar24 = CONCAT44((int)((ulong)*plVar24 >> 0x20) + 1,(int)*plVar24 + 1);
                  param_2 = &ppuStack_130;
                  FUN_10a63acf0(plVar18[4]);
                  iVar2 = *(int *)((long)plVar24 + 4) + -1;
                  *(int *)((long)plVar24 + 4) = iVar2;
                  if (iVar2 == 0) {
                    *(undefined4 *)plVar24 = 0;
                  }
                }
              }
            }
            unaff_x20 = ppuStack_128;
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
          param_1 = &puStack_110;
          FUN_10a57cb64();
          if (unaff_x20 != (undefined **)0x0) goto LAB_10a604318;
        }
        unaff_x21 = 0;
        ppuVar23 = (undefined **)((long)ppuVar23 + 4);
      } while (ppuVar23 != ppuStack_148);
    }
  }
  if (*(long *)(ppuVar6[0x3f] + 0x30) != 0) {
    ppuVar23 = (undefined **)ppuVar6[0x90];
    ppuStack_148 = (undefined **)ppuVar6[0x91];
    if (ppuVar23 != ppuStack_148) {
      pplStack_138 = &plStack_100;
      unaff_x26 = 3;
      do {
        uStack_114 = *(undefined4 *)ppuVar23;
        if ((*(ushort *)(ppuVar6 + 0x30) >> 4 & 1) != 0) break;
        ppuVar5 = ppuVar6 + 0x96;
        FUN_10a63828c(ppuVar5,&uStack_114);
        puVar22 = ppuVar6[0x3f];
        unaff_x20 = (undefined **)0x40;
        __Znwm();
        unaff_x20[1] = (undefined *)0x0;
        unaff_x20[2] = (undefined *)0x0;
        *unaff_x20 = (undefined *)&PTR_DAT_110c01560;
        uVar27 = *(undefined8 *)((long)ppuVar5 + 0x14);
        unaff_x20[4] = (undefined *)0x0;
        unaff_x20[5] = (undefined *)0x0;
        ppuStack_130 = unaff_x20 + 3;
        *ppuStack_130 = (undefined *)&PTR_DAT_110bfb9c8;
        *(undefined4 *)(unaff_x20 + 6) = uStack_114;
        *(undefined8 *)((long)unaff_x20 + 0x34) = uVar27;
        uStack_108 = 0;
        puStack_110 = (undefined *)0x0;
        lStack_f8 = 0;
        plStack_100 = (long *)0x0;
        fStack_f0 = *(float *)(puVar22 + 0x38);
        param_2 = *(undefined ****)(puVar22 + 0x20);
        ppuStack_128 = unaff_x20;
        FUN_10a623780(&puStack_110);
        ppuVar6 = ppuStack_140;
        uVar20 = uStack_108;
        plVar18 = plStack_100;
        for (plVar24 = *(long **)(puVar22 + 0x28); ppuStack_140 = ppuVar6, uStack_108 = uVar20,
            plStack_100 = plVar18, plVar24 != (long *)0x0; plVar24 = (long *)*plVar24) {
          uVar12 = plVar24[2];
          uVar17 = ((ulong)(uint)((int)uVar12 << 3) + 8 ^ uVar12 >> 0x20) * -0x622015f714c7d297;
          uVar17 = (uVar12 >> 0x20 ^ uVar17 >> 0x2f ^ uVar17) * -0x622015f714c7d297;
          uVar17 = (uVar17 ^ uVar17 >> 0x2f) * -0x622015f714c7d297;
          if (uVar20 != 0) {
            uVar15 = uVar20 - 1;
            if ((uVar20 & uVar15) == 0) {
              unaff_x27 = uVar17 & uVar15;
            }
            else {
              unaff_x27 = uVar17;
              if (uVar20 <= uVar17) {
                uVar19 = 0;
                if (uVar20 != 0) {
                  uVar19 = uVar17 / uVar20;
                }
                unaff_x27 = uVar17 - uVar19 * uVar20;
              }
            }
            plVar18 = *(long **)(puStack_110 + unaff_x27 * 8);
            if (plVar18 != (long *)0x0) {
              do {
                while( true ) {
                  plVar18 = (long *)*plVar18;
                  if (plVar18 == (long *)0x0) goto LAB_10a6044cc;
                  uVar19 = plVar18[1];
                  if (uVar19 != uVar17) break;
                  if (plVar18[2] == uVar12) goto LAB_10a604630;
                }
                if ((uVar20 & uVar15) == 0) {
                  uVar19 = uVar19 & uVar15;
                }
                else if (uVar20 <= uVar19) {
                  uVar3 = 0;
                  if (uVar20 != 0) {
                    uVar3 = uVar19 / uVar20;
                  }
                  uVar19 = uVar19 - uVar3 * uVar20;
                }
              } while (uVar19 == unaff_x27);
            }
          }
LAB_10a6044cc:
          plVar18 = (long *)0x68;
          __Znwm();
          *plVar18 = 0;
          plVar18[1] = uVar17;
          lVar13 = plVar24[3];
          lVar26 = plVar24[2];
          plVar18[3] = plVar24[3];
          plVar18[2] = lVar26;
          if (lVar13 != 0) {
            plVar16 = (long *)(lVar13 + 8);
            do {
              cVar1 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar4) {
                *plVar16 = *plVar16 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          ppuStack_c0 = (undefined **)(plVar18 + 4);
          *(undefined1 *)(plVar18 + 0xc) = 3;
          if (*(char *)(plVar24 + 0xc) == '\0') {
            uVar11 = 0;
          }
          else {
            param_2 = (undefined ***)(plVar24 + 4);
            FUN_10a005398(&ppuStack_c0);
            uVar11 = *(undefined1 *)(plVar24 + 0xc);
          }
          *(undefined1 *)(plVar18 + 0xc) = uVar11;
          if ((uVar20 == 0) || (fStack_f0 * (float)uVar20 < (float)(lStack_f8 + 1))) {
            uVar12 = 1;
            if (2 < uVar20) {
              uVar12 = (ulong)((uVar20 & uVar20 - 1) != 0);
            }
            param_2 = (undefined ***)(uVar12 | uVar20 << 1);
            pppuVar8 = (undefined ***)(long)((float)(lStack_f8 + 1) / fStack_f0);
            if (param_2 <= pppuVar8) {
              param_2 = pppuVar8;
            }
            FUN_10a623780(&puStack_110);
            uVar20 = uStack_108;
            if ((uStack_108 & uStack_108 - 1) == 0) {
              unaff_x27 = uStack_108 - 1 & uVar17;
            }
            else {
              unaff_x27 = uVar17;
              if (uStack_108 <= uVar17) {
                uVar12 = 0;
                if (uStack_108 != 0) {
                  uVar12 = uVar17 / uStack_108;
                }
                unaff_x27 = uVar17 - uVar12 * uStack_108;
              }
            }
          }
          plVar16 = *(long **)(puStack_110 + unaff_x27 * 8);
          if (plVar16 == (long *)0x0) {
            *plVar18 = (long)plStack_100;
            *(long ***)(puStack_110 + unaff_x27 * 8) = pplStack_138;
            plStack_100 = plVar18;
            if (*plVar18 != 0) {
              uVar12 = *(ulong *)(*plVar18 + 8);
              if ((uVar20 & uVar20 - 1) == 0) {
                uVar12 = uVar12 & uVar20 - 1;
              }
              else if (uVar20 <= uVar12) {
                uVar17 = 0;
                if (uVar20 != 0) {
                  uVar17 = uVar12 / uVar20;
                }
                uVar12 = uVar12 - uVar17 * uVar20;
              }
              *(long **)(puStack_110 + uVar12 * 8) = plVar18;
            }
          }
          else {
            *plVar18 = *plVar16;
            *plVar16 = (long)plVar18;
          }
          lStack_f8 = lStack_f8 + 1;
LAB_10a604630:
          ppuVar6 = ppuStack_140;
          uVar20 = uStack_108;
          plVar18 = plStack_100;
        }
        if (plVar18 == (long *)0x0) {
          param_1 = &puStack_110;
          FUN_10a57c50c();
LAB_10a604840:
          ppuVar5 = unaff_x20 + 1;
          do {
            puVar22 = *ppuVar5;
            cVar1 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
            if (bVar4) {
              *ppuVar5 = puVar22 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (puVar22 == (undefined *)0x0) {
            (**(code **)(*unaff_x20 + 0x10))(unaff_x20);
            param_1 = unaff_x20;
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
        else {
          do {
            pppuVar8 = (undefined ***)plVar18[2];
            puVar25 = puVar22 + 0x18;
            FUN_10a624190();
            param_2 = pppuVar8;
            if (puVar25 != (undefined *)0x0) {
              if ((char)plVar18[0xc] == '\x01') {
                pcVar14 = (code *)plVar18[4];
                ppuStack_b8 = ppuStack_128;
                ppuStack_c0 = ppuStack_130;
                if (ppuStack_128 != (undefined **)0x0) {
                  ppuVar5 = ppuStack_128 + 1;
                  do {
                    cVar1 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
                    if (bVar4) {
                      *ppuVar5 = *ppuVar5 + 1;
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                }
                param_2 = (undefined ***)(plVar18 + 4);
                (*pcVar14)(&ppuStack_c0);
                if (ppuStack_b8 != (undefined **)0x0) {
                  ppuVar5 = ppuStack_b8 + 1;
                  do {
                    puVar25 = *ppuVar5;
                    cVar1 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
                    if (bVar4) {
                      *ppuVar5 = puVar25 + -1;
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                    ppuVar21 = ppuStack_b8;
                  } while (cVar1 != '\0');
LAB_10a6046f8:
                  if (puVar25 == (undefined *)0x0) {
                    (**(code **)(*ppuVar21 + 0x10))(ppuVar21);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar21);
                  }
                }
              }
              else if ((char)plVar18[0xc] == '\x02') {
                plVar24 = plVar18 + 4;
                FUN_10a688b40();
                ppuVar5 = ppuStack_128;
                if (plVar24 == (long *)0x0) {
                  param_2 = (undefined ***)0x0;
                  if (pppuVar8 != (undefined ***)0x0) {
                    lStack_b0 = plVar18[4];
                    lStack_a8 = plVar18[5];
                    if (lStack_a8 != 0) {
                      plVar24 = (long *)(lStack_a8 + 8);
                      do {
                        cVar1 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                        if (bVar4) {
                          *plVar24 = *plVar24 + 1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar1 != '\0');
                    }
                    ppuStack_d0 = ppuStack_130;
                    ppuStack_c8 = ppuStack_128;
                    if (ppuStack_128 == (undefined **)0x0) {
                      ppuStack_98 = (undefined **)0x0;
                    }
                    else {
                      ppuVar21 = ppuStack_128 + 1;
                      do {
                        cVar1 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(ppuVar21,0x10);
                        if (bVar4) {
                          *ppuVar21 = *ppuVar21 + 1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar1 != '\0');
                      ppuStack_98 = ppuStack_128;
                      do {
                        cVar1 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(ppuVar21,0x10);
                        if (bVar4) {
                          *ppuVar21 = *ppuVar21 + 1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar1 != '\0');
                    }
                    ppuStack_a0 = ppuStack_130;
                    ppuStack_b8 = &PTR_FUN_110c015a0;
                    ppuStack_d8 = (undefined **)0x0;
                    uStack_e0 = 0;
                    ppuStack_c0 = (undefined **)FUN_10a63b208;
                    param_2 = &ppuStack_c0;
                    FUN_10a4634ec(pppuVar8);
                    (*(code *)*ppuStack_b8)(&ppuStack_b8);
                    if (ppuVar5 != (undefined **)0x0) {
                      ppuVar21 = ppuVar5 + 1;
                      do {
                        puVar25 = *ppuVar21;
                        cVar1 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(ppuVar21,0x10);
                        if (bVar4) {
                          *ppuVar21 = puVar25 + -1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar1 != '\0');
                      if (puVar25 == (undefined *)0x0) {
                        (**(code **)(*ppuVar5 + 0x10))(ppuVar5);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar5);
                      }
                    }
                    if (ppuStack_d8 != (undefined **)0x0) {
                      ppuVar5 = ppuStack_d8 + 1;
                      do {
                        puVar25 = *ppuVar5;
                        cVar1 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
                        if (bVar4) {
                          *ppuVar5 = puVar25 + -1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                        ppuVar21 = ppuStack_d8;
                      } while (cVar1 != '\0');
                      goto LAB_10a6046f8;
                    }
                  }
                }
                else {
                  *plVar24 = CONCAT44((int)((ulong)*plVar24 >> 0x20) + 1,(int)*plVar24 + 1);
                  param_2 = &ppuStack_130;
                  FUN_10a63b004(plVar18[4]);
                  iVar2 = *(int *)((long)plVar24 + 4) + -1;
                  *(int *)((long)plVar24 + 4) = iVar2;
                  if (iVar2 == 0) {
                    *(undefined4 *)plVar24 = 0;
                  }
                }
              }
            }
            unaff_x20 = ppuStack_128;
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
          param_1 = &puStack_110;
          FUN_10a57c50c();
          if (unaff_x20 != (undefined **)0x0) goto LAB_10a604840;
        }
        unaff_x21 = 0;
        ppuVar23 = (undefined **)((long)ppuVar23 + 4);
      } while (ppuVar23 != ppuStack_148);
    }
  }
  if (*(long *)(ppuVar6[0x41] + 0x30) != 0) {
    ppuVar23 = (undefined **)ppuVar6[0x8d];
    ppuStack_148 = ppuVar6 + 0x8e;
    if (ppuVar23 != ppuStack_148) {
      pplStack_138 = &plStack_100;
      do {
        uStack_114 = *(undefined4 *)((long)ppuVar23 + 0x1c);
        if ((*(ushort *)(ppuVar6 + 0x30) >> 4 & 1) != 0) break;
        ppuVar5 = ppuVar6 + 0x96;
        FUN_10a63828c(ppuVar5,&uStack_114);
        puVar22 = ppuVar6[0x41];
        unaff_x20 = (undefined **)0x40;
        __Znwm();
        unaff_x20[1] = (undefined *)0x0;
        unaff_x20[2] = (undefined *)0x0;
        *unaff_x20 = (undefined *)&PTR_DAT_110c015c8;
        uVar27 = *(undefined8 *)((long)ppuVar5 + 0x14);
        unaff_x20[4] = (undefined *)0x0;
        unaff_x20[5] = (undefined *)0x0;
        ppuStack_130 = unaff_x20 + 3;
        *ppuStack_130 = (undefined *)&PTR_DAT_110bfba20;
        *(undefined4 *)(unaff_x20 + 6) = uStack_114;
        *(undefined8 *)((long)unaff_x20 + 0x34) = uVar27;
        uStack_108 = 0;
        puStack_110 = (undefined *)0x0;
        lStack_f8 = 0;
        plStack_100 = (long *)0x0;
        fStack_f0 = *(float *)(puVar22 + 0x38);
        param_2 = *(undefined ****)(puVar22 + 0x20);
        ppuStack_128 = unaff_x20;
        FUN_10a6246b8(&puStack_110);
        uVar20 = uStack_108;
        plVar18 = plStack_100;
        for (plVar24 = *(long **)(puVar22 + 0x28); uStack_108 = uVar20, plStack_100 = plVar18,
            plVar24 != (long *)0x0; plVar24 = (long *)*plVar24) {
          uVar12 = plVar24[2];
          uVar17 = ((ulong)(uint)((int)uVar12 << 3) + 8 ^ uVar12 >> 0x20) * -0x622015f714c7d297;
          uVar17 = (uVar12 >> 0x20 ^ uVar17 >> 0x2f ^ uVar17) * -0x622015f714c7d297;
          uVar17 = (uVar17 ^ uVar17 >> 0x2f) * -0x622015f714c7d297;
          if (uVar20 != 0) {
            uVar15 = uVar20 - 1;
            if ((uVar20 & uVar15) == 0) {
              unaff_x26 = uVar17 & uVar15;
            }
            else {
              unaff_x26 = uVar17;
              if (uVar20 <= uVar17) {
                uVar19 = 0;
                if (uVar20 != 0) {
                  uVar19 = uVar17 / uVar20;
                }
                unaff_x26 = uVar17 - uVar19 * uVar20;
              }
            }
            plVar18 = *(long **)(puStack_110 + unaff_x26 * 8);
            if (plVar18 != (long *)0x0) {
              do {
                while( true ) {
                  plVar18 = (long *)*plVar18;
                  if (plVar18 == (long *)0x0) goto LAB_10a6049f4;
                  uVar19 = plVar18[1];
                  if (uVar19 != uVar17) break;
                  if (plVar18[2] == uVar12) goto LAB_10a604b58;
                }
                if ((uVar20 & uVar15) == 0) {
                  uVar19 = uVar19 & uVar15;
                }
                else if (uVar20 <= uVar19) {
                  uVar3 = 0;
                  if (uVar20 != 0) {
                    uVar3 = uVar19 / uVar20;
                  }
                  uVar19 = uVar19 - uVar3 * uVar20;
                }
              } while (uVar19 == unaff_x26);
            }
          }
LAB_10a6049f4:
          plVar18 = (long *)0x68;
          __Znwm();
          *plVar18 = 0;
          plVar18[1] = uVar17;
          lVar13 = plVar24[3];
          lVar26 = plVar24[2];
          plVar18[3] = plVar24[3];
          plVar18[2] = lVar26;
          if (lVar13 != 0) {
            plVar16 = (long *)(lVar13 + 8);
            do {
              cVar1 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar4) {
                *plVar16 = *plVar16 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          ppuStack_c0 = (undefined **)(plVar18 + 4);
          *(undefined1 *)(plVar18 + 0xc) = 3;
          if (*(char *)(plVar24 + 0xc) == '\0') {
            uVar11 = 0;
          }
          else {
            param_2 = (undefined ***)(plVar24 + 4);
            FUN_10a005398(&ppuStack_c0);
            uVar11 = *(undefined1 *)(plVar24 + 0xc);
          }
          *(undefined1 *)(plVar18 + 0xc) = uVar11;
          if ((uVar20 == 0) || (fStack_f0 * (float)uVar20 < (float)(lStack_f8 + 1))) {
            uVar12 = 1;
            if (2 < uVar20) {
              uVar12 = (ulong)((uVar20 & uVar20 - 1) != 0);
            }
            param_2 = (undefined ***)(uVar12 | uVar20 << 1);
            pppuVar8 = (undefined ***)(long)((float)(lStack_f8 + 1) / fStack_f0);
            if (param_2 <= pppuVar8) {
              param_2 = pppuVar8;
            }
            FUN_10a6246b8(&puStack_110);
            uVar20 = uStack_108;
            if ((uStack_108 & uStack_108 - 1) == 0) {
              unaff_x26 = uStack_108 - 1 & uVar17;
            }
            else {
              unaff_x26 = uVar17;
              if (uStack_108 <= uVar17) {
                uVar12 = 0;
                if (uStack_108 != 0) {
                  uVar12 = uVar17 / uStack_108;
                }
                unaff_x26 = uVar17 - uVar12 * uStack_108;
              }
            }
          }
          plVar16 = *(long **)(puStack_110 + unaff_x26 * 8);
          if (plVar16 == (long *)0x0) {
            *plVar18 = (long)plStack_100;
            *(long ***)(puStack_110 + unaff_x26 * 8) = pplStack_138;
            plStack_100 = plVar18;
            if (*plVar18 != 0) {
              uVar12 = *(ulong *)(*plVar18 + 8);
              if ((uVar20 & uVar20 - 1) == 0) {
                uVar12 = uVar12 & uVar20 - 1;
              }
              else if (uVar20 <= uVar12) {
                uVar17 = 0;
                if (uVar20 != 0) {
                  uVar17 = uVar12 / uVar20;
                }
                uVar12 = uVar12 - uVar17 * uVar20;
              }
              *(long **)(puStack_110 + uVar12 * 8) = plVar18;
            }
          }
          else {
            *plVar18 = *plVar16;
            *plVar16 = (long)plVar18;
          }
          lStack_f8 = lStack_f8 + 1;
LAB_10a604b58:
          uVar20 = uStack_108;
          plVar18 = plStack_100;
        }
        if (plVar18 == (long *)0x0) {
          param_1 = &puStack_110;
          FUN_10a57c838();
LAB_10a604d6c:
          ppuVar6 = ppuStack_140;
          ppuVar5 = unaff_x20 + 1;
          do {
            puVar22 = *ppuVar5;
            cVar1 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
            if (bVar4) {
              *ppuVar5 = puVar22 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (puVar22 == (undefined *)0x0) {
            (**(code **)(*unaff_x20 + 0x10))(unaff_x20);
            param_1 = unaff_x20;
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
        else {
          do {
            pppuVar8 = (undefined ***)plVar18[2];
            puVar25 = puVar22 + 0x18;
            FUN_10a6250c8();
            param_2 = pppuVar8;
            if (puVar25 != (undefined *)0x0) {
              if ((char)plVar18[0xc] == '\x01') {
                pcVar14 = (code *)plVar18[4];
                ppuStack_b8 = ppuStack_128;
                ppuStack_c0 = ppuStack_130;
                if (ppuStack_128 != (undefined **)0x0) {
                  ppuVar6 = ppuStack_128 + 1;
                  do {
                    cVar1 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
                    if (bVar4) {
                      *ppuVar6 = *ppuVar6 + 1;
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                }
                param_2 = (undefined ***)(plVar18 + 4);
                (*pcVar14)(&ppuStack_c0);
                if (ppuStack_b8 != (undefined **)0x0) {
                  ppuVar6 = ppuStack_b8 + 1;
                  do {
                    puVar25 = *ppuVar6;
                    cVar1 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
                    if (bVar4) {
                      *ppuVar6 = puVar25 + -1;
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                    ppuVar5 = ppuStack_b8;
                  } while (cVar1 != '\0');
LAB_10a604c1c:
                  if (puVar25 == (undefined *)0x0) {
                    (**(code **)(*ppuVar5 + 0x10))(ppuVar5);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar5);
                  }
                }
              }
              else if ((char)plVar18[0xc] == '\x02') {
                plVar24 = plVar18 + 4;
                FUN_10a688b40();
                ppuVar6 = ppuStack_128;
                if (plVar24 == (long *)0x0) {
                  param_2 = (undefined ***)0x0;
                  if (pppuVar8 != (undefined ***)0x0) {
                    lStack_b0 = plVar18[4];
                    lStack_a8 = plVar18[5];
                    if (lStack_a8 != 0) {
                      plVar24 = (long *)(lStack_a8 + 8);
                      do {
                        cVar1 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                        if (bVar4) {
                          *plVar24 = *plVar24 + 1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar1 != '\0');
                    }
                    ppuStack_d0 = ppuStack_130;
                    ppuStack_c8 = ppuStack_128;
                    if (ppuStack_128 == (undefined **)0x0) {
                      ppuStack_98 = (undefined **)0x0;
                    }
                    else {
                      ppuVar5 = ppuStack_128 + 1;
                      do {
                        cVar1 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
                        if (bVar4) {
                          *ppuVar5 = *ppuVar5 + 1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar1 != '\0');
                      ppuStack_98 = ppuStack_128;
                      do {
                        cVar1 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
                        if (bVar4) {
                          *ppuVar5 = *ppuVar5 + 1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar1 != '\0');
                    }
                    ppuStack_a0 = ppuStack_130;
                    ppuStack_b8 = &PTR_FUN_110c01608;
                    ppuStack_d8 = (undefined **)0x0;
                    uStack_e0 = 0;
                    ppuStack_c0 = (undefined **)FUN_10a63b51c;
                    param_2 = &ppuStack_c0;
                    FUN_10a4634ec(pppuVar8);
                    (*(code *)*ppuStack_b8)(&ppuStack_b8);
                    if (ppuVar6 != (undefined **)0x0) {
                      ppuVar5 = ppuVar6 + 1;
                      do {
                        puVar25 = *ppuVar5;
                        cVar1 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
                        if (bVar4) {
                          *ppuVar5 = puVar25 + -1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar1 != '\0');
                      if (puVar25 == (undefined *)0x0) {
                        (**(code **)(*ppuVar6 + 0x10))(ppuVar6);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar6);
                      }
                    }
                    if (ppuStack_d8 != (undefined **)0x0) {
                      ppuVar6 = ppuStack_d8 + 1;
                      do {
                        puVar25 = *ppuVar6;
                        cVar1 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
                        if (bVar4) {
                          *ppuVar6 = puVar25 + -1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                        ppuVar5 = ppuStack_d8;
                      } while (cVar1 != '\0');
                      goto LAB_10a604c1c;
                    }
                  }
                }
                else {
                  *plVar24 = CONCAT44((int)((ulong)*plVar24 >> 0x20) + 1,(int)*plVar24 + 1);
                  param_2 = &ppuStack_130;
                  FUN_10a63b318(plVar18[4]);
                  iVar2 = *(int *)((long)plVar24 + 4) + -1;
                  *(int *)((long)plVar24 + 4) = iVar2;
                  if (iVar2 == 0) {
                    *(undefined4 *)plVar24 = 0;
                  }
                }
              }
            }
            unaff_x20 = ppuStack_128;
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
          param_1 = &puStack_110;
          FUN_10a57c838();
          ppuVar6 = ppuStack_140;
          if (unaff_x20 != (undefined **)0x0) goto LAB_10a604d6c;
        }
        unaff_x21 = 0;
        ppuVar5 = (undefined **)ppuVar23[1];
        ppuVar21 = ppuVar23;
        if ((undefined **)ppuVar23[1] == (undefined **)0x0) {
          do {
            ppuVar23 = (undefined **)ppuVar21[2];
            bVar4 = (undefined **)*ppuVar23 != ppuVar21;
            ppuVar21 = ppuVar23;
          } while (bVar4);
        }
        else {
          do {
            ppuVar23 = ppuVar5;
            ppuVar5 = (undefined **)*ppuVar23;
          } while ((undefined **)*ppuVar23 != (undefined **)0x0);
        }
      } while (ppuVar23 != ppuStack_148);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_b8)(&ppuStack_b8);
  FUN_10a63b2c0(&ppuStack_d0);
  func_0x00010a004dac(&uStack_e0);
  FUN_10a57c838(&puStack_110);
  FUN_10a63b2c0(&ppuStack_130);
  ppuVar6 = param_1;
  __Unwind_Resume();
  ppuStack_170 = unaff_x20;
  ppuStack_168 = param_1;
  puStack_160 = &stack0xfffffffffffffff0;
  pcStack_158 = FUN_10a605010;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6[0x9c] = ppuVar6[0x9b];
  pcStack_1b8 = FUN_10a63b594;
  ppuStack_1b0 = &PTR_FUN_110c016f0;
  ppcVar9 = &pcStack_1b8;
  ppuStack_1a8 = ppuVar6;
  FUN_10a6057d8(param_2[3] + 0x21);
  pppuVar8 = &ppuStack_1b0;
  (*(code *)*ppuStack_1b0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_1b0)(&ppuStack_1b0);
  pppuVar7 = pppuVar8;
  __Unwind_Resume();
  pcStack_1c8 = FUN_10a6050c0;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1e0 = unaff_x20;
  pppuStack_1d8 = pppuVar8;
  ppuStack_1d0 = &puStack_160;
  pppuVar7[0x9f] = pppuVar7[0x9e];
  pcStack_228 = FUN_10a63c7c4;
  ppuStack_220 = &PTR_FUN_110c01778;
  ppcVar10 = &pcStack_228;
  pppuStack_218 = pppuVar7;
  FUN_10a605850(ppcVar9[3] + 0x1c0);
  pppuVar8 = &ppuStack_220;
  (*(code *)*ppuStack_220)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_220)(&ppuStack_220);
  pppuVar7 = pppuVar8;
  __Unwind_Resume();
  pcStack_238 = FUN_10a605170;
  lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_298 = FUN_10a63d138;
  ppuStack_290 = &PTR_FUN_110c01868;
  ppcVar9 = &pcStack_298;
  pppuStack_288 = pppuVar7;
  ppuStack_250 = unaff_x20;
  pppuStack_248 = pppuVar8;
  pppuStack_240 = &ppuStack_1d0;
  FUN_10a6058c8(ppcVar10[3] + 0x4a0);
  pppuVar8 = &ppuStack_290;
  (*(code *)*ppuStack_290)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_258) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_290)(&ppuStack_290);
  pppuVar7 = pppuVar8;
  __Unwind_Resume();
  pcStack_2a8 = FUN_10a605218;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_308 = FUN_10a63e304;
  ppuStack_300 = &PTR_FUN_110c019c0;
  ppcVar10 = &pcStack_308;
  pppuStack_2f8 = pppuVar7;
  ppuStack_2c0 = unaff_x20;
  pppuStack_2b8 = pppuVar8;
  ppppuStack_2b0 = &pppuStack_240;
  FUN_10a2f2000(ppcVar9[3] + 1000);
  pppuVar8 = &ppuStack_300;
  (*(code *)*ppuStack_300)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_300)(&ppuStack_300);
  pppuVar7 = pppuVar8;
  __Unwind_Resume();
  pcStack_318 = FUN_10a6052c0;
  ppuStack_330 = unaff_x20;
  pppuStack_328 = pppuVar8;
  ppppuStack_320 = &ppppuStack_2b0;
  FUN_10a605314();
  if (((*(ushort *)(pppuVar7 + 0x30) >> 4 & 1) != 0) ||
     (FUN_10a6053d4(pppuVar7,ppcVar10), ppuVar6 = ppuStack_330,
     (*(ushort *)(pppuVar7 + 0x30) >> 4 & 1) != 0)) {
    return;
  }
  lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar7[0xb4] = pppuVar7[0xb3];
  pppuVar7[0xb7] = pppuVar7[0xb6];
  pppuVar7[0xba] = pppuVar7[0xb9];
  pcStack_378 = FUN_10a64259c;
  ppuStack_370 = &PTR_FUN_110c01c90;
  ppcVar9 = &pcStack_378;
  pppuStack_368 = pppuVar7;
  FUN_10a605760(ppcVar10[3] + 0x610);
  pppuVar8 = &ppuStack_370;
  (*(code *)*ppuStack_370)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_338) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_370)(&ppuStack_370);
  pppuVar7 = pppuVar8;
  __Unwind_Resume();
  uStack_3b0 = 0x9ddfea08eb382d69;
  ppuStack_3a0 = ppuVar6;
  pcStack_388 = FUN_10a6055a8;
  lStack_3b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_3f8 = FUN_10a638b3c;
  ppuStack_3f0 = &PTR_FUN_110c013b8;
  pppuStack_3e8 = pppuVar7;
  uStack_3a8 = unaff_x21;
  pppuStack_398 = pppuVar8;
  ppppuStack_390 = &ppppuStack_320;
  FUN_10a6056e8(ppcVar9[3] + 0x558,&pcStack_3f8);
  (*(code *)*ppuStack_3f0)(&ppuStack_3f0);
  pcStack_438 = FUN_10a6394c0;
  ppuStack_430 = &PTR_DAT_110c01440;
  pppuStack_428 = pppuVar7;
  FUN_10a2f01d8(ppcVar9[3] + 0x278,&pcStack_438);
  (*(code *)*ppuStack_430)(&ppuStack_430);
  pcStack_478 = FUN_10a63a018;
  ppuStack_470 = &PTR_FUN_110c014c8;
  ppcVar10 = &pcStack_478;
  pppuStack_468 = pppuVar7;
  FUN_10a605760(ppcVar9[3] + 0x610);
  pppuVar8 = &ppuStack_470;
  (*(code *)*ppuStack_470)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3b8) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_470)(&ppuStack_470);
    __Unwind_Resume();
    __ZNSt3__15mutex4lockEv(pppuVar8 + 7);
    ppuVar23 = (pppuVar8 + (long)*(int *)(pppuVar8 + 6) * 3)[1];
    for (ppuVar6 = pppuVar8[(long)*(int *)(pppuVar8 + 6) * 3]; ppuVar6 != ppuVar23;
        ppuVar6 = ppuVar6 + 7) {
      (**ppcVar10)(ppuVar6,ppcVar10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(pppuVar8 + 7);
    return;
  }
  return;
}



/* Entry: 10a605010; end: 10a6050bf;  */

void FUN_10a605010(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined ***pppuVar2;
  code **ppcVar3;
  code **ppcVar4;
  undefined **ppuVar5;
  code *pcStack_328;
  undefined **ppuStack_320;
  undefined ***pppuStack_318;
  code *pcStack_2e8;
  undefined **ppuStack_2e0;
  undefined ***pppuStack_2d8;
  code *pcStack_2a8;
  undefined **ppuStack_2a0;
  undefined ***pppuStack_298;
  long lStack_268;
  code *pcStack_228;
  undefined **ppuStack_220;
  undefined ***pppuStack_218;
  long lStack_1e8;
  code *pcStack_1b8;
  undefined **ppuStack_1b0;
  undefined ***pppuStack_1a8;
  long lStack_178;
  code *pcStack_148;
  undefined **ppuStack_140;
  undefined ***pppuStack_138;
  long lStack_108;
  code *pcStack_d8;
  undefined **ppuStack_d0;
  undefined ***pppuStack_c8;
  long lStack_98;
  code *pcStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)(param_1 + 0x4e0) = *(undefined8 *)(param_1 + 0x4d8);
  pcStack_68 = FUN_10a63b594;
  ppuStack_60 = &PTR_FUN_110c016f0;
  ppcVar3 = &pcStack_68;
  lStack_58 = param_1;
  FUN_10a6057d8(*(long *)(param_2 + 0x18) + 0x108);
  pppuVar2 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume();
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar2[0x9f] = pppuVar2[0x9e];
  pcStack_d8 = FUN_10a63c7c4;
  ppuStack_d0 = &PTR_FUN_110c01778;
  ppcVar4 = &pcStack_d8;
  pppuStack_c8 = pppuVar2;
  FUN_10a605850(ppcVar3[3] + 0x1c0);
  pppuVar2 = &ppuStack_d0;
  (*(code *)*ppuStack_d0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_d0)(&ppuStack_d0);
  __Unwind_Resume();
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_148 = FUN_10a63d138;
  ppuStack_140 = &PTR_FUN_110c01868;
  ppcVar3 = &pcStack_148;
  pppuStack_138 = pppuVar2;
  FUN_10a6058c8(ppcVar4[3] + 0x4a0);
  pppuVar2 = &ppuStack_140;
  (*(code *)*ppuStack_140)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_140)(&ppuStack_140);
  __Unwind_Resume();
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_1b8 = FUN_10a63e304;
  ppuStack_1b0 = &PTR_FUN_110c019c0;
  ppcVar4 = &pcStack_1b8;
  pppuStack_1a8 = pppuVar2;
  FUN_10a2f2000(ppcVar3[3] + 1000);
  pppuVar2 = &ppuStack_1b0;
  (*(code *)*ppuStack_1b0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_1b0)(&ppuStack_1b0);
  __Unwind_Resume();
  FUN_10a605314();
  if (((*(ushort *)(pppuVar2 + 0x30) >> 4 & 1) != 0) ||
     (FUN_10a6053d4(pppuVar2,ppcVar4), (*(ushort *)(pppuVar2 + 0x30) >> 4 & 1) != 0)) {
    return;
  }
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar2[0xb4] = pppuVar2[0xb3];
  pppuVar2[0xb7] = pppuVar2[0xb6];
  pppuVar2[0xba] = pppuVar2[0xb9];
  pcStack_228 = FUN_10a64259c;
  ppuStack_220 = &PTR_FUN_110c01c90;
  ppcVar3 = &pcStack_228;
  pppuStack_218 = pppuVar2;
  FUN_10a605760(ppcVar4[3] + 0x610);
  pppuVar2 = &ppuStack_220;
  (*(code *)*ppuStack_220)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_220)(&ppuStack_220);
  __Unwind_Resume();
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_2a8 = FUN_10a638b3c;
  ppuStack_2a0 = &PTR_FUN_110c013b8;
  pppuStack_298 = pppuVar2;
  FUN_10a6056e8(ppcVar3[3] + 0x558,&pcStack_2a8);
  (*(code *)*ppuStack_2a0)(&ppuStack_2a0);
  pcStack_2e8 = FUN_10a6394c0;
  ppuStack_2e0 = &PTR_DAT_110c01440;
  pppuStack_2d8 = pppuVar2;
  FUN_10a2f01d8(ppcVar3[3] + 0x278,&pcStack_2e8);
  (*(code *)*ppuStack_2e0)(&ppuStack_2e0);
  pcStack_328 = FUN_10a63a018;
  ppuStack_320 = &PTR_FUN_110c014c8;
  ppcVar4 = &pcStack_328;
  pppuStack_318 = pppuVar2;
  FUN_10a605760(ppcVar3[3] + 0x610);
  pppuVar2 = &ppuStack_320;
  (*(code *)*ppuStack_320)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_320)(&ppuStack_320);
  __Unwind_Resume();
  __ZNSt3__15mutex4lockEv(pppuVar2 + 7);
  ppuVar1 = (pppuVar2 + (long)*(int *)(pppuVar2 + 6) * 3)[1];
  for (ppuVar5 = pppuVar2[(long)*(int *)(pppuVar2 + 6) * 3]; ppuVar5 != ppuVar1;
      ppuVar5 = ppuVar5 + 7) {
    (**ppcVar4)(ppuVar5,ppcVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(pppuVar2 + 7);
  return;
}



/* Entry: 10a6050c0; end: 10a60516f;  */

void FUN_10a6050c0(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined ***pppuVar2;
  code **ppcVar3;
  code **ppcVar4;
  undefined **ppuVar5;
  code *pcStack_2b8;
  undefined **ppuStack_2b0;
  undefined ***pppuStack_2a8;
  code *pcStack_278;
  undefined **ppuStack_270;
  undefined ***pppuStack_268;
  code *pcStack_238;
  undefined **ppuStack_230;
  undefined ***pppuStack_228;
  long lStack_1f8;
  code *pcStack_1b8;
  undefined **ppuStack_1b0;
  undefined ***pppuStack_1a8;
  long lStack_178;
  code *pcStack_148;
  undefined **ppuStack_140;
  undefined ***pppuStack_138;
  long lStack_108;
  code *pcStack_d8;
  undefined **ppuStack_d0;
  undefined ***pppuStack_c8;
  long lStack_98;
  code *pcStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)(param_1 + 0x4f8) = *(undefined8 *)(param_1 + 0x4f0);
  pcStack_68 = FUN_10a63c7c4;
  ppuStack_60 = &PTR_FUN_110c01778;
  ppcVar3 = &pcStack_68;
  lStack_58 = param_1;
  FUN_10a605850(*(long *)(param_2 + 0x18) + 0x1c0);
  pppuVar2 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume();
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_d8 = FUN_10a63d138;
  ppuStack_d0 = &PTR_FUN_110c01868;
  ppcVar4 = &pcStack_d8;
  pppuStack_c8 = pppuVar2;
  FUN_10a6058c8(ppcVar3[3] + 0x4a0);
  pppuVar2 = &ppuStack_d0;
  (*(code *)*ppuStack_d0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_d0)(&ppuStack_d0);
  __Unwind_Resume();
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_148 = FUN_10a63e304;
  ppuStack_140 = &PTR_FUN_110c019c0;
  ppcVar3 = &pcStack_148;
  pppuStack_138 = pppuVar2;
  FUN_10a2f2000(ppcVar4[3] + 1000);
  pppuVar2 = &ppuStack_140;
  (*(code *)*ppuStack_140)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_140)(&ppuStack_140);
  __Unwind_Resume();
  FUN_10a605314();
  if (((*(ushort *)(pppuVar2 + 0x30) >> 4 & 1) == 0) &&
     (FUN_10a6053d4(pppuVar2,ppcVar3), (*(ushort *)(pppuVar2 + 0x30) >> 4 & 1) == 0)) {
    lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pppuVar2[0xb4] = pppuVar2[0xb3];
    pppuVar2[0xb7] = pppuVar2[0xb6];
    pppuVar2[0xba] = pppuVar2[0xb9];
    pcStack_1b8 = FUN_10a64259c;
    ppuStack_1b0 = &PTR_FUN_110c01c90;
    ppcVar4 = &pcStack_1b8;
    pppuStack_1a8 = pppuVar2;
    FUN_10a605760(ppcVar3[3] + 0x610);
    pppuVar2 = &ppuStack_1b0;
    (*(code *)*ppuStack_1b0)();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
      return;
    }
    ___stack_chk_fail();
    (*(code *)*ppuStack_1b0)(&ppuStack_1b0);
    __Unwind_Resume();
    lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcStack_238 = FUN_10a638b3c;
    ppuStack_230 = &PTR_FUN_110c013b8;
    pppuStack_228 = pppuVar2;
    FUN_10a6056e8(ppcVar4[3] + 0x558,&pcStack_238);
    (*(code *)*ppuStack_230)(&ppuStack_230);
    pcStack_278 = FUN_10a6394c0;
    ppuStack_270 = &PTR_DAT_110c01440;
    pppuStack_268 = pppuVar2;
    FUN_10a2f01d8(ppcVar4[3] + 0x278,&pcStack_278);
    (*(code *)*ppuStack_270)(&ppuStack_270);
    pcStack_2b8 = FUN_10a63a018;
    ppuStack_2b0 = &PTR_FUN_110c014c8;
    ppcVar3 = &pcStack_2b8;
    pppuStack_2a8 = pppuVar2;
    FUN_10a605760(ppcVar4[3] + 0x610);
    pppuVar2 = &ppuStack_2b0;
    (*(code *)*ppuStack_2b0)();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f8) {
      return;
    }
    ___stack_chk_fail();
    (*(code *)*ppuStack_2b0)(&ppuStack_2b0);
    __Unwind_Resume();
    __ZNSt3__15mutex4lockEv(pppuVar2 + 7);
    ppuVar1 = (pppuVar2 + (long)*(int *)(pppuVar2 + 6) * 3)[1];
    for (ppuVar5 = pppuVar2[(long)*(int *)(pppuVar2 + 6) * 3]; ppuVar5 != ppuVar1;
        ppuVar5 = ppuVar5 + 7) {
      (**ppcVar3)(ppuVar5,ppcVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(pppuVar2 + 7);
    return;
  }
  return;
}



/* Entry: 10a605170; end: 10a605217;  */

void FUN_10a605170(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  undefined ***pppuVar2;
  code **ppcVar3;
  code **ppcVar4;
  undefined **ppuVar5;
  code *pcStack_248;
  undefined **ppuStack_240;
  undefined ***pppuStack_238;
  code *pcStack_208;
  undefined **ppuStack_200;
  undefined ***pppuStack_1f8;
  code *pcStack_1c8;
  undefined **ppuStack_1c0;
  undefined ***pppuStack_1b8;
  long lStack_188;
  code *pcStack_148;
  undefined **ppuStack_140;
  undefined ***pppuStack_138;
  long lStack_108;
  code *pcStack_d8;
  undefined **ppuStack_d0;
  undefined ***pppuStack_c8;
  long lStack_98;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a63d138;
  ppuStack_60 = &PTR_FUN_110c01868;
  ppcVar3 = &pcStack_68;
  uStack_58 = param_1;
  FUN_10a6058c8(*(long *)(param_2 + 0x18) + 0x4a0);
  pppuVar2 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume();
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_d8 = FUN_10a63e304;
  ppuStack_d0 = &PTR_FUN_110c019c0;
  ppcVar4 = &pcStack_d8;
  pppuStack_c8 = pppuVar2;
  FUN_10a2f2000(ppcVar3[3] + 1000);
  pppuVar2 = &ppuStack_d0;
  (*(code *)*ppuStack_d0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_d0)(&ppuStack_d0);
  __Unwind_Resume();
  FUN_10a605314();
  if (((*(ushort *)(pppuVar2 + 0x30) >> 4 & 1) != 0) ||
     (FUN_10a6053d4(pppuVar2,ppcVar4), (*(ushort *)(pppuVar2 + 0x30) >> 4 & 1) != 0)) {
    return;
  }
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar2[0xb4] = pppuVar2[0xb3];
  pppuVar2[0xb7] = pppuVar2[0xb6];
  pppuVar2[0xba] = pppuVar2[0xb9];
  pcStack_148 = FUN_10a64259c;
  ppuStack_140 = &PTR_FUN_110c01c90;
  ppcVar3 = &pcStack_148;
  pppuStack_138 = pppuVar2;
  FUN_10a605760(ppcVar4[3] + 0x610);
  pppuVar2 = &ppuStack_140;
  (*(code *)*ppuStack_140)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_140)(&ppuStack_140);
  __Unwind_Resume();
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_1c8 = FUN_10a638b3c;
  ppuStack_1c0 = &PTR_FUN_110c013b8;
  pppuStack_1b8 = pppuVar2;
  FUN_10a6056e8(ppcVar3[3] + 0x558,&pcStack_1c8);
  (*(code *)*ppuStack_1c0)(&ppuStack_1c0);
  pcStack_208 = FUN_10a6394c0;
  ppuStack_200 = &PTR_DAT_110c01440;
  pppuStack_1f8 = pppuVar2;
  FUN_10a2f01d8(ppcVar3[3] + 0x278,&pcStack_208);
  (*(code *)*ppuStack_200)(&ppuStack_200);
  pcStack_248 = FUN_10a63a018;
  ppuStack_240 = &PTR_FUN_110c014c8;
  ppcVar4 = &pcStack_248;
  pppuStack_238 = pppuVar2;
  FUN_10a605760(ppcVar3[3] + 0x610);
  pppuVar2 = &ppuStack_240;
  (*(code *)*ppuStack_240)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_240)(&ppuStack_240);
  __Unwind_Resume();
  __ZNSt3__15mutex4lockEv(pppuVar2 + 7);
  ppuVar1 = (pppuVar2 + (long)*(int *)(pppuVar2 + 6) * 3)[1];
  for (ppuVar5 = pppuVar2[(long)*(int *)(pppuVar2 + 6) * 3]; ppuVar5 != ppuVar1;
      ppuVar5 = ppuVar5 + 7) {
    (**ppcVar4)(ppuVar5,ppcVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(pppuVar2 + 7);
  return;
}



/* Entry: 10a605218; end: 10a6052bf;  */

void FUN_10a605218(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  undefined ***pppuVar2;
  code **ppcVar3;
  code **ppcVar4;
  undefined **ppuVar5;
  code *pcStack_1d8;
  undefined **ppuStack_1d0;
  undefined ***pppuStack_1c8;
  code *pcStack_198;
  undefined **ppuStack_190;
  undefined ***pppuStack_188;
  code *pcStack_158;
  undefined **ppuStack_150;
  undefined ***pppuStack_148;
  long lStack_118;
  code *pcStack_d8;
  undefined **ppuStack_d0;
  undefined ***pppuStack_c8;
  long lStack_98;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a63e304;
  ppuStack_60 = &PTR_FUN_110c019c0;
  ppcVar3 = &pcStack_68;
  uStack_58 = param_1;
  FUN_10a2f2000(*(long *)(param_2 + 0x18) + 1000);
  pppuVar2 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume();
  FUN_10a605314();
  if (((*(ushort *)(pppuVar2 + 0x30) >> 4 & 1) != 0) ||
     (FUN_10a6053d4(pppuVar2,ppcVar3), (*(ushort *)(pppuVar2 + 0x30) >> 4 & 1) != 0)) {
    return;
  }
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar2[0xb4] = pppuVar2[0xb3];
  pppuVar2[0xb7] = pppuVar2[0xb6];
  pppuVar2[0xba] = pppuVar2[0xb9];
  pcStack_d8 = FUN_10a64259c;
  ppuStack_d0 = &PTR_FUN_110c01c90;
  ppcVar4 = &pcStack_d8;
  pppuStack_c8 = pppuVar2;
  FUN_10a605760(ppcVar3[3] + 0x610);
  pppuVar2 = &ppuStack_d0;
  (*(code *)*ppuStack_d0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_d0)(&ppuStack_d0);
  __Unwind_Resume();
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_158 = FUN_10a638b3c;
  ppuStack_150 = &PTR_FUN_110c013b8;
  pppuStack_148 = pppuVar2;
  FUN_10a6056e8(ppcVar4[3] + 0x558,&pcStack_158);
  (*(code *)*ppuStack_150)(&ppuStack_150);
  pcStack_198 = FUN_10a6394c0;
  ppuStack_190 = &PTR_DAT_110c01440;
  pppuStack_188 = pppuVar2;
  FUN_10a2f01d8(ppcVar4[3] + 0x278,&pcStack_198);
  (*(code *)*ppuStack_190)(&ppuStack_190);
  pcStack_1d8 = FUN_10a63a018;
  ppuStack_1d0 = &PTR_FUN_110c014c8;
  ppcVar3 = &pcStack_1d8;
  pppuStack_1c8 = pppuVar2;
  FUN_10a605760(ppcVar4[3] + 0x610);
  pppuVar2 = &ppuStack_1d0;
  (*(code *)*ppuStack_1d0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_1d0)(&ppuStack_1d0);
  __Unwind_Resume();
  __ZNSt3__15mutex4lockEv(pppuVar2 + 7);
  ppuVar1 = (pppuVar2 + (long)*(int *)(pppuVar2 + 6) * 3)[1];
  for (ppuVar5 = pppuVar2[(long)*(int *)(pppuVar2 + 6) * 3]; ppuVar5 != ppuVar1;
      ppuVar5 = ppuVar5 + 7) {
    (**ppcVar3)(ppuVar5,ppcVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(pppuVar2 + 7);
  return;
}



/* Entry: 10a6052c0; end: 10a605313;  */

void FUN_10a6052c0(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined ***pppuVar2;
  code **ppcVar3;
  code **ppcVar4;
  undefined **ppuVar5;
  code *pcStack_168;
  undefined **ppuStack_160;
  undefined ***pppuStack_158;
  code *pcStack_128;
  undefined **ppuStack_120;
  undefined ***pppuStack_118;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  undefined ***pppuStack_d8;
  long lStack_a8;
  code *pcStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  long lStack_28;
  
  FUN_10a605314();
  if (((*(ushort *)(param_1 + 0x180) >> 4 & 1) != 0) ||
     (FUN_10a6053d4(param_1,param_2), (*(ushort *)(param_1 + 0x180) >> 4 & 1) != 0)) {
    return;
  }
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)(param_1 + 0x5a0) = *(undefined8 *)(param_1 + 0x598);
  *(undefined8 *)(param_1 + 0x5b8) = *(undefined8 *)(param_1 + 0x5b0);
  *(undefined8 *)(param_1 + 0x5d0) = *(undefined8 *)(param_1 + 0x5c8);
  pcStack_68 = FUN_10a64259c;
  ppuStack_60 = &PTR_FUN_110c01c90;
  ppcVar3 = &pcStack_68;
  lStack_58 = param_1;
  FUN_10a605760(*(long *)(param_2 + 0x18) + 0x610);
  pppuVar2 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume();
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_e8 = FUN_10a638b3c;
  ppuStack_e0 = &PTR_FUN_110c013b8;
  pppuStack_d8 = pppuVar2;
  FUN_10a6056e8(ppcVar3[3] + 0x558,&pcStack_e8);
  (*(code *)*ppuStack_e0)(&ppuStack_e0);
  pcStack_128 = FUN_10a6394c0;
  ppuStack_120 = &PTR_DAT_110c01440;
  pppuStack_118 = pppuVar2;
  FUN_10a2f01d8(ppcVar3[3] + 0x278,&pcStack_128);
  (*(code *)*ppuStack_120)(&ppuStack_120);
  pcStack_168 = FUN_10a63a018;
  ppuStack_160 = &PTR_FUN_110c014c8;
  ppcVar4 = &pcStack_168;
  pppuStack_158 = pppuVar2;
  FUN_10a605760(ppcVar3[3] + 0x610);
  pppuVar2 = &ppuStack_160;
  (*(code *)*ppuStack_160)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_160)(&ppuStack_160);
  __Unwind_Resume();
  __ZNSt3__15mutex4lockEv(pppuVar2 + 7);
  ppuVar1 = (pppuVar2 + (long)*(int *)(pppuVar2 + 6) * 3)[1];
  for (ppuVar5 = pppuVar2[(long)*(int *)(pppuVar2 + 6) * 3]; ppuVar5 != ppuVar1;
      ppuVar5 = ppuVar5 + 7) {
    (**ppcVar4)(ppuVar5,ppcVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(pppuVar2 + 7);
  return;
}



/* Entry: 10a605314; end: 10a6053d3;  */

void FUN_10a605314(long param_1,long param_2)

{
  undefined ***pppuVar1;
  undefined **ppuVar2;
  undefined ***pppuVar3;
  code **ppcVar4;
  code **ppcVar5;
  undefined **ppuVar6;
  code *pcStack_258;
  undefined **ppuStack_250;
  undefined ***pppuStack_248;
  code *pcStack_218;
  undefined **ppuStack_210;
  undefined ***pppuStack_208;
  code *pcStack_1d8;
  undefined **ppuStack_1d0;
  undefined ***pppuStack_1c8;
  long lStack_198;
  code *pcStack_158;
  undefined **ppuStack_150;
  undefined ***pppuStack_148;
  long lStack_118;
  code **ppcStack_110;
  undefined ***pppuStack_108;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  undefined ***pppuStack_d8;
  long lStack_a8;
  undefined1 *puStack_80;
  code *pcStack_78;
  code *pcStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)(param_1 + 0x558) = *(undefined8 *)(param_1 + 0x550);
  *(undefined8 *)(param_1 + 0x570) = *(undefined8 *)(param_1 + 0x568);
  *(undefined8 *)(param_1 + 0x588) = *(undefined8 *)(param_1 + 0x580);
  pcStack_68 = FUN_10a64131c;
  ppuStack_60 = &PTR_FUN_110c01ba0;
  ppcVar4 = &pcStack_68;
  lStack_58 = param_1;
  FUN_10a6056e8(*(long *)(param_2 + 0x18) + 0x558);
  pppuVar1 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume();
  pcStack_78 = FUN_10a6053d4;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = pppuVar1[0xa2];
  ppuVar6 = pppuVar1[0xa1];
  puStack_80 = &stack0xfffffffffffffff0;
  while (ppuVar2 != ppuVar6) {
    ppuVar2 = ppuVar2 + -2;
    FUN_10a5810a0();
  }
  pppuVar1[0xa2] = ppuVar6;
  ppuVar2 = pppuVar1[0xa5];
  ppuVar6 = pppuVar1[0xa4];
  while (ppuVar2 != ppuVar6) {
    ppuVar2 = ppuVar2 + -2;
    FUN_10a580fd8();
  }
  pppuVar1[0xa5] = ppuVar6;
  ppuVar2 = pppuVar1[0xa8];
  ppuVar6 = pppuVar1[0xa7];
  while (ppuVar2 != ppuVar6) {
    ppuVar2 = ppuVar2 + -2;
    FUN_10a580f10();
  }
  pppuVar1[0xa8] = ppuVar6;
  pcStack_e8 = FUN_10a63fe88;
  ppuStack_e0 = &PTR_DAT_110c01ab0;
  ppcVar5 = &pcStack_e8;
  pppuStack_d8 = pppuVar1;
  FUN_10a2f01d8(ppcVar4[3] + 0x278);
  pppuVar1 = &ppuStack_e0;
  (*(code *)*ppuStack_e0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_e0)(&ppuStack_e0);
  pppuVar3 = pppuVar1;
  __Unwind_Resume();
  pcStack_f8 = FUN_10a6054e8;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcStack_110 = &pcStack_e8;
  pppuStack_108 = pppuVar1;
  ppuStack_100 = &puStack_80;
  pppuVar3[0xb4] = pppuVar3[0xb3];
  pppuVar3[0xb7] = pppuVar3[0xb6];
  pppuVar3[0xba] = pppuVar3[0xb9];
  pcStack_158 = FUN_10a64259c;
  ppuStack_150 = &PTR_FUN_110c01c90;
  ppcVar4 = &pcStack_158;
  pppuStack_148 = pppuVar3;
  FUN_10a605760(ppcVar5[3] + 0x610);
  pppuVar1 = &ppuStack_150;
  (*(code *)*ppuStack_150)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_150)(&ppuStack_150);
  __Unwind_Resume();
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_1d8 = FUN_10a638b3c;
  ppuStack_1d0 = &PTR_FUN_110c013b8;
  pppuStack_1c8 = pppuVar1;
  FUN_10a6056e8(ppcVar4[3] + 0x558,&pcStack_1d8);
  (*(code *)*ppuStack_1d0)(&ppuStack_1d0);
  pcStack_218 = FUN_10a6394c0;
  ppuStack_210 = &PTR_DAT_110c01440;
  pppuStack_208 = pppuVar1;
  FUN_10a2f01d8(ppcVar4[3] + 0x278,&pcStack_218);
  (*(code *)*ppuStack_210)(&ppuStack_210);
  pcStack_258 = FUN_10a63a018;
  ppuStack_250 = &PTR_FUN_110c014c8;
  ppcVar5 = &pcStack_258;
  pppuStack_248 = pppuVar1;
  FUN_10a605760(ppcVar4[3] + 0x610);
  pppuVar1 = &ppuStack_250;
  (*(code *)*ppuStack_250)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_250)(&ppuStack_250);
  __Unwind_Resume();
  __ZNSt3__15mutex4lockEv(pppuVar1 + 7);
  ppuVar6 = (pppuVar1 + (long)*(int *)(pppuVar1 + 6) * 3)[1];
  for (ppuVar2 = pppuVar1[(long)*(int *)(pppuVar1 + 6) * 3]; ppuVar2 != ppuVar6;
      ppuVar2 = ppuVar2 + 7) {
    (**ppcVar5)(ppuVar2,ppcVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(pppuVar1 + 7);
  return;
}



/* Entry: 10a6053d4; end: 10a6054e7;  */

void FUN_10a6053d4(long param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  code **ppcVar5;
  code **ppcVar6;
  long lVar7;
  undefined **ppuVar8;
  code *pcStack_1e8;
  undefined **ppuStack_1e0;
  undefined ***pppuStack_1d8;
  code *pcStack_1a8;
  undefined **ppuStack_1a0;
  undefined ***pppuStack_198;
  code *pcStack_168;
  undefined **ppuStack_160;
  undefined ***pppuStack_158;
  long lStack_128;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  undefined ***pppuStack_d8;
  long lStack_a8;
  code **ppcStack_a0;
  undefined ***pppuStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x510);
  lVar7 = *(long *)(param_1 + 0x508);
  while (lVar2 != lVar7) {
    lVar2 = lVar2 + -0x10;
    FUN_10a5810a0();
  }
  *(long *)(param_1 + 0x510) = lVar7;
  lVar2 = *(long *)(param_1 + 0x528);
  lVar7 = *(long *)(param_1 + 0x520);
  while (lVar2 != lVar7) {
    lVar2 = lVar2 + -0x10;
    FUN_10a580fd8();
  }
  *(long *)(param_1 + 0x528) = lVar7;
  lVar2 = *(long *)(param_1 + 0x540);
  lVar7 = *(long *)(param_1 + 0x538);
  while (lVar2 != lVar7) {
    lVar2 = lVar2 + -0x10;
    FUN_10a580f10();
  }
  *(long *)(param_1 + 0x540) = lVar7;
  pcStack_78 = FUN_10a63fe88;
  ppuStack_70 = &PTR_DAT_110c01ab0;
  ppcVar5 = &pcStack_78;
  lStack_68 = param_1;
  FUN_10a2f01d8(*(long *)(param_2 + 0x18) + 0x278);
  pppuVar3 = &ppuStack_70;
  (*(code *)*ppuStack_70)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(&ppuStack_70);
  pppuVar4 = pppuVar3;
  __Unwind_Resume();
  pcStack_88 = FUN_10a6054e8;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcStack_a0 = &pcStack_78;
  pppuStack_98 = pppuVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  pppuVar4[0xb4] = pppuVar4[0xb3];
  pppuVar4[0xb7] = pppuVar4[0xb6];
  pppuVar4[0xba] = pppuVar4[0xb9];
  pcStack_e8 = FUN_10a64259c;
  ppuStack_e0 = &PTR_FUN_110c01c90;
  ppcVar6 = &pcStack_e8;
  pppuStack_d8 = pppuVar4;
  FUN_10a605760(ppcVar5[3] + 0x610);
  pppuVar3 = &ppuStack_e0;
  (*(code *)*ppuStack_e0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_e0)(&ppuStack_e0);
  __Unwind_Resume();
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_168 = FUN_10a638b3c;
  ppuStack_160 = &PTR_FUN_110c013b8;
  pppuStack_158 = pppuVar3;
  FUN_10a6056e8(ppcVar6[3] + 0x558,&pcStack_168);
  (*(code *)*ppuStack_160)(&ppuStack_160);
  pcStack_1a8 = FUN_10a6394c0;
  ppuStack_1a0 = &PTR_DAT_110c01440;
  pppuStack_198 = pppuVar3;
  FUN_10a2f01d8(ppcVar6[3] + 0x278,&pcStack_1a8);
  (*(code *)*ppuStack_1a0)(&ppuStack_1a0);
  pcStack_1e8 = FUN_10a63a018;
  ppuStack_1e0 = &PTR_FUN_110c014c8;
  ppcVar5 = &pcStack_1e8;
  pppuStack_1d8 = pppuVar3;
  FUN_10a605760(ppcVar6[3] + 0x610);
  pppuVar3 = &ppuStack_1e0;
  (*(code *)*ppuStack_1e0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_1e0)(&ppuStack_1e0);
  __Unwind_Resume();
  __ZNSt3__15mutex4lockEv(pppuVar3 + 7);
  ppuVar1 = (pppuVar3 + (long)*(int *)(pppuVar3 + 6) * 3)[1];
  for (ppuVar8 = pppuVar3[(long)*(int *)(pppuVar3 + 6) * 3]; ppuVar8 != ppuVar1;
      ppuVar8 = ppuVar8 + 7) {
    (**ppcVar5)(ppuVar8,ppcVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(pppuVar3 + 7);
  return;
}



/* Entry: 10a6054e8; end: 10a6055a7;  */

void FUN_10a6054e8(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined ***pppuVar2;
  code **ppcVar3;
  code **ppcVar4;
  undefined **ppuVar5;
  code *pcStack_168;
  undefined **ppuStack_160;
  undefined ***pppuStack_158;
  code *pcStack_128;
  undefined **ppuStack_120;
  undefined ***pppuStack_118;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  undefined ***pppuStack_d8;
  long lStack_a8;
  code *pcStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)(param_1 + 0x5a0) = *(undefined8 *)(param_1 + 0x598);
  *(undefined8 *)(param_1 + 0x5b8) = *(undefined8 *)(param_1 + 0x5b0);
  *(undefined8 *)(param_1 + 0x5d0) = *(undefined8 *)(param_1 + 0x5c8);
  pcStack_68 = FUN_10a64259c;
  ppuStack_60 = &PTR_FUN_110c01c90;
  ppcVar3 = &pcStack_68;
  lStack_58 = param_1;
  FUN_10a605760(*(long *)(param_2 + 0x18) + 0x610);
  pppuVar2 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume();
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_e8 = FUN_10a638b3c;
  ppuStack_e0 = &PTR_FUN_110c013b8;
  pppuStack_d8 = pppuVar2;
  FUN_10a6056e8(ppcVar3[3] + 0x558,&pcStack_e8);
  (*(code *)*ppuStack_e0)(&ppuStack_e0);
  pcStack_128 = FUN_10a6394c0;
  ppuStack_120 = &PTR_DAT_110c01440;
  pppuStack_118 = pppuVar2;
  FUN_10a2f01d8(ppcVar3[3] + 0x278,&pcStack_128);
  (*(code *)*ppuStack_120)(&ppuStack_120);
  pcStack_168 = FUN_10a63a018;
  ppuStack_160 = &PTR_FUN_110c014c8;
  ppcVar4 = &pcStack_168;
  pppuStack_158 = pppuVar2;
  FUN_10a605760(ppcVar3[3] + 0x610);
  pppuVar2 = &ppuStack_160;
  (*(code *)*ppuStack_160)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_160)(&ppuStack_160);
  __Unwind_Resume();
  __ZNSt3__15mutex4lockEv(pppuVar2 + 7);
  ppuVar1 = (pppuVar2 + (long)*(int *)(pppuVar2 + 6) * 3)[1];
  for (ppuVar5 = pppuVar2[(long)*(int *)(pppuVar2 + 6) * 3]; ppuVar5 != ppuVar1;
      ppuVar5 = ppuVar5 + 7) {
    (**ppcVar4)(ppuVar5,ppcVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(pppuVar2 + 7);
  return;
}



/* Entry: 10a6055a8; end: 10a6056e7;  */

void FUN_10a6055a8(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  undefined ***pppuVar2;
  code **ppcVar3;
  undefined **ppuVar4;
  code *pcStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_78 = FUN_10a638b3c;
  ppuStack_70 = &PTR_FUN_110c013b8;
  uStack_68 = param_1;
  FUN_10a6056e8(*(long *)(param_2 + 0x18) + 0x558,&pcStack_78);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  pcStack_b8 = FUN_10a6394c0;
  ppuStack_b0 = &PTR_DAT_110c01440;
  uStack_a8 = param_1;
  FUN_10a2f01d8(*(long *)(param_2 + 0x18) + 0x278,&pcStack_b8);
  (*(code *)*ppuStack_b0)(&ppuStack_b0);
  pcStack_f8 = FUN_10a63a018;
  ppuStack_f0 = &PTR_FUN_110c014c8;
  ppcVar3 = &pcStack_f8;
  uStack_e8 = param_1;
  FUN_10a605760(*(long *)(param_2 + 0x18) + 0x610);
  pppuVar2 = &ppuStack_f0;
  (*(code *)*ppuStack_f0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_f0)(&ppuStack_f0);
  __Unwind_Resume();
  __ZNSt3__15mutex4lockEv(pppuVar2 + 7);
  ppuVar1 = (pppuVar2 + (long)*(int *)(pppuVar2 + 6) * 3)[1];
  for (ppuVar4 = pppuVar2[(long)*(int *)(pppuVar2 + 6) * 3]; ppuVar4 != ppuVar1;
      ppuVar4 = ppuVar4 + 7) {
    (**ppcVar3)(ppuVar4,ppcVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(pppuVar2 + 7);
  return;
}



/* Entry: 10a6056e8; end: 10a60575f;  */

void FUN_10a6056e8(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x38);
  plVar2 = (long *)(param_1 + (long)*(int *)(param_1 + 0x30) * 0x18);
  lVar1 = plVar2[1];
  for (lVar3 = *plVar2; lVar3 != lVar1; lVar3 = lVar3 + 0x38) {
    (*(code *)*param_2)(lVar3,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x38);
  return;
}



/* Entry: 10a605760; end: 10a6057d7;  */

void FUN_10a605760(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x38);
  plVar2 = (long *)(param_1 + (long)*(int *)(param_1 + 0x30) * 0x18);
  lVar1 = plVar2[1];
  for (lVar3 = *plVar2; lVar3 != lVar1; lVar3 = lVar3 + 0x40) {
    (*(code *)*param_2)(lVar3,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x38);
  return;
}



/* Entry: 10a6057d8; end: 10a60584f;  */

void FUN_10a6057d8(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x38);
  plVar2 = (long *)(param_1 + (long)*(int *)(param_1 + 0x30) * 0x18);
  lVar1 = plVar2[1];
  for (lVar3 = *plVar2; lVar3 != lVar1; lVar3 = lVar3 + 0x38) {
    (*(code *)*param_2)(lVar3,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x38);
  return;
}



/* Entry: 10a605850; end: 10a6058c7;  */

void FUN_10a605850(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x38);
  plVar2 = (long *)(param_1 + (long)*(int *)(param_1 + 0x30) * 0x18);
  lVar1 = plVar2[1];
  for (lVar3 = *plVar2; lVar3 != lVar1; lVar3 = lVar3 + 0x38) {
    (*(code *)*param_2)(lVar3,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x38);
  return;
}



/* Entry: 10a6058c8; end: 10a60593f;  */

void FUN_10a6058c8(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x38);
  plVar2 = (long *)(param_1 + (long)*(int *)(param_1 + 0x30) * 0x18);
  lVar1 = plVar2[1];
  for (lVar3 = *plVar2; lVar3 != lVar1; lVar3 = lVar3 + 0x38) {
    (*(code *)*param_2)(lVar3,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x38);
  return;
}



/* Entry: 10a605940; end: 10a605dbf;  */

void FUN_10a605940(undefined8 param_1,float param_2,float param_3,long param_4,undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  float fVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  float fStack_130;
  ulong uStack_12c;
  float fStack_124;
  undefined8 uStack_120;
  float fStack_118;
  undefined8 uStack_110;
  float fStack_108;
  undefined8 uStack_100;
  float fStack_f8;
  undefined8 uStack_f0;
  float fStack_e8;
  undefined1 auStack_e0 [64];
  
  plVar4 = *(long **)(param_4 + 0x380);
  if ((plVar4 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0))
  {
    lVar8 = *(long *)(param_4 + 0x378);
    plVar9 = plVar4 + 1;
    do {
      lVar7 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
    fVar10 = 0.0;
    if (lVar8 != 0) {
      func_0x00010a42d044(lVar8,param_5);
      fStack_15c = fVar10;
      fStack_158 = param_2;
      fStack_154 = param_3;
      fVar11 = fVar10;
      fVar13 = param_2;
      fVar18 = param_3;
      func_0x00010a42d020(lVar8,param_5);
      plVar4 = *(long **)(param_4 + 0x388);
      plVar9 = *(long **)(param_4 + 0x390);
      fStack_168 = fVar11;
      fStack_164 = fVar13;
      fStack_160 = fVar18;
      if (plVar4 == plVar9) {
        fVar6 = 3.4028235e+38;
      }
      else {
        fVar6 = 3.4028235e+38;
        do {
          plVar5 = (long *)plVar4[1];
          if ((plVar5 != (long *)0x0) &&
             (__ZNSt3__119__shared_weak_count4lockEv(), plVar5 != (long *)0x0)) {
            lVar8 = *plVar4;
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
            if ((lVar8 != 0) && (*(long *)(lVar8 + 0x260) != 0)) {
              func_0x00010a424420(auStack_e0,lVar8);
              func_0x0001094f5708(&uStack_120,auStack_e0);
              fVar20 = (float)((ulong)uStack_120 >> 0x20);
              fVar21 = (float)((ulong)uStack_110 >> 0x20);
              fVar23 = (float)((ulong)uStack_100 >> 0x20);
              fVar15 = (float)((ulong)uStack_f0 >> 0x20);
              fVar24 = (float)uStack_120 * fVar10 + (float)uStack_110 * param_2 +
                       (float)uStack_100 * param_3 + (float)uStack_f0;
              fVar25 = fVar20 * fVar10 + fVar21 * param_2 + fVar23 * param_3 + fVar15;
              fVar22 = fVar10 * fStack_118 + param_2 * fStack_108 + param_3 * fStack_f8 + fStack_e8;
              fVar19 = ((float)uStack_120 * fVar11 + (float)uStack_110 * fVar13 +
                       (float)uStack_100 * fVar18 + (float)uStack_f0) - fVar24;
              fVar20 = (fVar20 * fVar11 + fVar21 * fVar13 + fVar23 * fVar18 + fVar15) - fVar25;
              fVar23 = (fVar11 * fStack_118 + fVar13 * fStack_108 + fVar18 * fStack_f8 + fStack_e8)
                       - fVar22;
              fVar21 = fVar23 * fVar23;
              if (1.1920929e-07 <= fVar21 + fVar19 * fVar19 + fVar20 * fVar20) {
                uStack_138 = CONCAT44(fVar25,fVar24);
                uVar16 = NEON_fmov(0x3f800000,4);
                uVar17 = CONCAT44((float)((ulong)uVar16 >> 0x20) / fVar20,(float)uVar16 / fVar19);
                fStack_124 = 3.4028235e+38;
                if (fVar23 != 0.0) {
                  fStack_124 = 1.0 / fVar23;
                }
                uVar12 = uVar17 ^ (uVar17 ^ 0x7f7fffff7f7fffff) &
                                  CONCAT44(-(uint)(fVar20 == 0.0),-(uint)(fVar19 == 0.0));
                plVar5 = *(long **)(lVar8 + 0x260);
                fStack_130 = fVar22;
                uStack_12c = uVar12;
                FUN_10a347d04();
                fVar15 = (float)uVar12;
                fVar14 = (float)uVar17;
                if (plVar5 == (long *)0x0) {
                  fVar15 = 0.0;
                  uStack_148 = 0xff7fffff00000000;
                  uStack_150 = 0;
                  uStack_140 = 0xff7fffffff7fffff;
                }
                else {
                  (**(code **)(*plVar5 + 0x38))(&uStack_150);
                }
                FUN_10a005840(&uStack_150,&uStack_138);
                if (fVar14 < fVar15) {
                  fVar15 = -fVar20 * fVar20 - fVar19 * fVar19;
                  if ((ABS(fVar15 - fVar21) <= 1.1920929e-07) ||
                     (fVar19 = (((0.0 - fVar25) * -fVar20 - (0.0 - fVar24) * fVar19) -
                               (0.0 - fVar22) * fVar23) / (fVar15 - fVar21), fVar19 <= -1e-05))
                  goto LAB_10a605b6c;
                }
                else {
                  fVar19 = (fVar15 + fVar14) * 0.5;
                }
              }
              else {
LAB_10a605b6c:
                fVar19 = 3.4028235e+38;
              }
              if (fVar19 < fVar6) {
                fVar6 = fVar19;
              }
            }
          }
          plVar4 = plVar4 + 2;
        } while (plVar4 != plVar9);
      }
      if (*(char *)(param_4 + 0x3b2) == '\x01') {
        lVar8 = *(long *)(*(long *)(param_4 + 0x168) + 0x248);
        bVar3 = false;
        if ((lVar8 != 0) && (bVar3 = false, !NAN(fVar6))) {
          bVar3 = fVar6 == 3.4028235e+38;
        }
        if (bVar3) {
          FUN_10a606504(lVar8,&fStack_15c,&fStack_168);
        }
      }
    }
  }
  return;
}



/* Entry: 10a605dc0; end: 10a605e53;  */

uint FUN_10a605dc0(long param_1)

{
  undefined **ppuVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puStack_40;
  long lStack_38;
  
  puVar3 = *(undefined8 **)(param_1 + 0x3b8);
  puVar4 = *(undefined8 **)(param_1 + 0x3c0);
  if (puVar3 == puVar4) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    do {
      lStack_38 = (long)*(char *)((long)puVar3 + 0x17);
      puStack_40 = puVar3;
      if (lStack_38 < 0) {
        lStack_38 = puVar3[1];
        puStack_40 = (undefined8 *)*puVar3;
      }
      ppuVar1 = &PTR_PTR_110c00b90;
      FUN_10a60f940(&PTR_PTR_110c00b90,&puStack_40);
      if (ppuVar1 != &PTR_FUN_110c00ca8) {
        uVar2 = *(uint *)(ppuVar1 + 2) | uVar2;
      }
      puVar3 = puVar3 + 3;
    } while (puVar3 != puVar4);
  }
  return uVar2;
}



/* Entry: 10a605e54; end: 10a605f07;  */

void FUN_10a605e54(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined8 *puStack_48;
  ulong uStack_40;
  
  uStack_40 = param_2[1];
  puStack_48 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uStack_40 = (ulong)*(byte *)((long)param_2 + 0x17);
    puStack_48 = param_2;
  }
  ppuVar2 = &PTR_PTR_110c00b90;
  FUN_10a60f940(&PTR_PTR_110c00b90,&puStack_48);
  if (ppuVar2 == &PTR_FUN_110c00ca8) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (&puStack_48,&UNK_10f6693c8,param_2);
    FUN_10a0029c0(&puStack_48);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a605eec);
    (*pcVar1)();
  }
  FUN_10a0b4ec0(param_1 + 0x3b8,param_2);
  return;
}



/* Entry: 10a605f08; end: 10a605fb7;  */

uint FUN_10a605f08(uint param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined8 *puStack_48;
  ulong uStack_40;
  
  uStack_40 = param_2[1];
  puStack_48 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uStack_40 = (ulong)*(byte *)((long)param_2 + 0x17);
    puStack_48 = param_2;
  }
  ppuVar2 = &PTR_PTR_110c00b90;
  FUN_10a60f940(&PTR_PTR_110c00b90,&puStack_48);
  if (ppuVar2 == &PTR_FUN_110c00ca8) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (&puStack_48,&UNK_10f6693c8,param_2);
    FUN_10a0029c0(&puStack_48);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a605f9c);
    (*pcVar1)();
  }
  return *(uint *)(ppuVar2 + 2) | param_1;
}



/* Entry: 10a605fb8; end: 10a6060db;  */

void FUN_10a605fb8(long param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined1 uStack_a1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
  plVar8 = *(long **)(param_1 + 0x390);
  if (plVar8 < *(long **)(param_1 + 0x398)) {
    lVar9 = param_2[1];
    lVar11 = *param_2;
    plVar8[1] = param_2[1];
    *plVar8 = lVar11;
    if (lVar9 != 0) {
      plVar6 = (long *)(lVar9 + 0x10);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar8 = plVar8 + 2;
  }
  else {
    plVar6 = (long *)(param_1 + 0x388);
    lVar9 = (long)plVar8 - *plVar6;
    uVar1 = (lVar9 >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_10a60f824();
      plVar8 = (long *)plVar6[0x71];
      if (plVar8 != (long *)plVar6[0x72]) {
        do {
          plVar7 = (long *)plVar8[1];
          if ((plVar7 != (long *)0x0) &&
             (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 != (long *)0x0)) {
            lVar9 = *plVar8;
            plVar2 = plVar7 + 1;
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
              (**(code **)(*plVar7 + 0x10))(plVar7);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
            }
            if (((lVar9 != 0) && (plVar7 = (long *)param_2[1], plVar7 != (long *)0x0)) &&
               (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 != (long *)0x0)) {
              lVar11 = *param_2;
              plVar2 = plVar7 + 1;
              do {
                lVar12 = *plVar2;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar4) {
                  *plVar2 = lVar12 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar12 == 0) {
                (**(code **)(*plVar7 + 0x10))(plVar7);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
              }
              if (lVar9 == lVar11) {
                if ((long *)plVar6[0x72] != plVar8) {
                  plVar7 = plVar8 + 2;
                  FUN_10a60f9bc(&uStack_a1,plVar7,(long *)plVar6[0x72],plVar8);
                  for (plVar8 = (long *)plVar6[0x72]; plVar8 != plVar7; plVar8 = plVar8 + -2) {
                    if (plVar8[-1] != 0) {
                      __ZNSt3__119__shared_weak_count14__release_weakEv();
                    }
                  }
                  plVar6[0x72] = (long)plVar7;
                  return;
                }
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x10a606228);
                (*pcVar5)();
              }
            }
          }
          plVar8 = plVar8 + 2;
        } while (plVar8 != (long *)plVar6[0x72]);
      }
      return;
    }
    uVar10 = (long)*(long **)(param_1 + 0x398) - *plVar6;
    uVar13 = (long)uVar10 >> 3;
    if (uVar13 <= uVar1) {
      uVar13 = uVar1;
    }
    if (0x7fffffffffffffef < uVar10) {
      uVar13 = 0xfffffffffffffff;
    }
    plStack_38 = plVar6;
    FUN_10a60f838();
    plVar7 = (long *)((long)plVar6 + lVar9);
    lVar9 = param_2[1];
    lVar11 = *param_2;
    plVar7[1] = param_2[1];
    *plVar7 = lVar11;
    if (lVar9 != 0) {
      plVar8 = (long *)(lVar9 + 0x10);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = *plVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar8 = plVar7 + 2;
    lVar9 = (long)plVar7 - (*(long *)(param_1 + 0x390) - *(long *)(param_1 + 0x388));
    _memcpy(lVar9);
    uStack_58 = *(undefined8 *)(param_1 + 0x388);
    *(long *)(param_1 + 0x388) = lVar9;
    *(long **)(param_1 + 0x390) = plVar8;
    uStack_40 = *(undefined8 *)(param_1 + 0x398);
    *(long **)(param_1 + 0x398) = plVar6 + uVar13 * 2;
    uStack_50 = uStack_58;
    uStack_48 = uStack_58;
    func_0x00010a60f86c(&uStack_58);
  }
  *(long **)(param_1 + 0x390) = plVar8;
  return;
}



/* Entry: 10a6060dc; end: 10a606227;  */

void FUN_10a6060dc(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined1 uStack_41;
  
  plVar8 = *(long **)(param_1 + 0x388);
  if (plVar8 != *(long **)(param_1 + 0x390)) {
    do {
      plVar5 = (long *)plVar8[1];
      if ((plVar5 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar5 != (long *)0x0)) {
        lVar9 = *plVar8;
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
        if (lVar6 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
        if (((lVar9 != 0) && (plVar5 = (long *)param_2[1], plVar5 != (long *)0x0)) &&
           (__ZNSt3__119__shared_weak_count4lockEv(), plVar5 != (long *)0x0)) {
          lVar6 = *param_2;
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
          if (lVar9 == lVar6) {
            if (*(long **)(param_1 + 0x390) != plVar8) {
              plVar5 = plVar8 + 2;
              FUN_10a60f9bc(&uStack_41,plVar5,*(long **)(param_1 + 0x390),plVar8);
              for (plVar8 = *(long **)(param_1 + 0x390); plVar8 != plVar5; plVar8 = plVar8 + -2) {
                if (plVar8[-1] != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
              }
              *(long **)(param_1 + 0x390) = plVar5;
              return;
            }
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10a606228);
            (*pcVar4)();
          }
        }
      }
      plVar8 = plVar8 + 2;
    } while (plVar8 != *(long **)(param_1 + 0x390));
  }
  return;
}



/* Entry: 10a606228; end: 10a6063a7;  */

void FUN_10a606228(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuStack_88;
  ulong uStack_80;
  byte bStack_71;
  undefined8 **appuStack_70 [2];
  char cStack_59;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  FUN_10a3c829c(&ppuStack_58);
  uVar2 = uStack_50;
  if (-1 < (char)bStack_41) {
    uVar2 = (ulong)bStack_41;
  }
  FUN_10a003c90(appuStack_70,uVar2 + 0x14,&ppuStack_88);
  pppuVar3 = (undefined8 ***)appuStack_70[0];
  if (-1 < cStack_59) {
    pppuVar3 = appuStack_70;
  }
  if (uVar2 != 0) {
    pppuVar4 = (undefined8 ***)ppuStack_58;
    if (-1 < (char)bStack_41) {
      pppuVar4 = &ppuStack_58;
    }
    _memmove(pppuVar3,pppuVar4,uVar2);
  }
  puVar1 = (undefined8 *)((long)pppuVar3 + uVar2);
  puVar1[1] = 0x69536863756f546d;
  *puVar1 = 0x756d696e696d202c;
  *(undefined4 *)(puVar1 + 2) = 0x203a657a;
  *(undefined1 *)((long)puVar1 + 0x14) = 0;
  __ZNSt3__19to_stringEf(&ppuStack_88,*(undefined4 *)(param_2 + 0x1f0));
  pppuVar3 = (undefined8 ***)ppuStack_88;
  if (-1 < (char)bStack_71) {
    uStack_80 = (ulong)bStack_71;
    pppuVar3 = &ppuStack_88;
  }
  pppuVar4 = appuStack_70;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar4,pppuVar3,uStack_80);
  ppuVar5 = *pppuVar4;
  param_1[1] = pppuVar4[1];
  *param_1 = ppuVar5;
  param_1[2] = pppuVar4[2];
  pppuVar4[1] = (undefined8 **)0x0;
  pppuVar4[2] = (undefined8 **)0x0;
  *pppuVar4 = (undefined8 **)0x0;
  if ((char)bStack_71 < '\0') {
    __ZdlPv(ppuStack_88);
  }
  if (cStack_59 < '\0') {
    __ZdlPv(appuStack_70[0]);
  }
  if ((char)bStack_41 < '\0') {
    __ZdlPv(ppuStack_58);
  }
  return;
}



/* Entry: 10a6063a8; end: 10a6063eb;  */

void FUN_10a6063a8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuStack_88;
  ulong uStack_80;
  byte bStack_71;
  undefined8 **appuStack_70 [2];
  char cStack_59;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  FUN_10a3c829c(&ppuStack_58);
  uVar2 = uStack_50;
  if (-1 < (char)bStack_41) {
    uVar2 = (ulong)bStack_41;
  }
  FUN_10a003c90(appuStack_70,uVar2 + 0x14,&ppuStack_88);
  pppuVar3 = (undefined8 ***)appuStack_70[0];
  if (-1 < cStack_59) {
    pppuVar3 = appuStack_70;
  }
  if (uVar2 != 0) {
    pppuVar4 = (undefined8 ***)ppuStack_58;
    if (-1 < (char)bStack_41) {
      pppuVar4 = &ppuStack_58;
    }
    _memmove(pppuVar3,pppuVar4,uVar2);
  }
  puVar1 = (undefined8 *)((long)pppuVar3 + uVar2);
  puVar1[1] = 0x69536863756f546d;
  *puVar1 = 0x756d696e696d202c;
  *(undefined4 *)(puVar1 + 2) = 0x203a657a;
  *(undefined1 *)((long)puVar1 + 0x14) = 0;
  __ZNSt3__19to_stringEf(&ppuStack_88,*(undefined4 *)(param_2 + 0x1e0));
  pppuVar3 = (undefined8 ***)ppuStack_88;
  if (-1 < (char)bStack_71) {
    uStack_80 = (ulong)bStack_71;
    pppuVar3 = &ppuStack_88;
  }
  pppuVar4 = appuStack_70;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar4,pppuVar3,uStack_80);
  ppuVar5 = *pppuVar4;
  param_1[1] = pppuVar4[1];
  *param_1 = ppuVar5;
  param_1[2] = pppuVar4[2];
  pppuVar4[1] = (undefined8 **)0x0;
  pppuVar4[2] = (undefined8 **)0x0;
  *pppuVar4 = (undefined8 **)0x0;
  if ((char)bStack_71 < '\0') {
    __ZdlPv(ppuStack_88);
  }
  if (cStack_59 < '\0') {
    __ZdlPv(appuStack_70[0]);
  }
  if ((char)bStack_41 < '\0') {
    __ZdlPv(ppuStack_58);
  }
  return;
}



/* Entry: 10a6063ec; end: 10a60644f;  */

void FUN_10a6063ec(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x380);
  if ((plVar4 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0))
  {
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a606450; end: 10a60646f;  */

void FUN_10a606450(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x318);
  if ((plVar4 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0))
  {
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a606470; end: 10a606497;  */

void FUN_10a606470(long param_1,int param_2)

{
  undefined8 **ppuVar1;
  long *plVar2;
  long *plVar3;
  code *pcStack_78;
  undefined8 *apuStack_70 [7];
  long lStack_38;
  
  FUN_10a5ae930(*(undefined8 *)(param_1 + 0x3a0));
  ppuVar1 = (undefined8 **)(param_1 + 0x3d8);
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = (long *)(param_1 + 0x3e0);
  if (*(char *)(*plVar3 + 8) == '\x01') {
    pcStack_78 = (code *)*ppuVar1;
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(apuStack_70);
    param_2 = (int)plVar2;
    *ppuVar1 = (undefined8 *)&UNK_1053a6a3c;
    (*(code *)**(undefined8 **)(param_1 + 0x3e0))(plVar3);
    *(undefined ***)(param_1 + 0x3e0) = &PTR_DAT_110ae9180;
    (*pcStack_78)(&pcStack_78);
    ppuVar1 = apuStack_70;
    (*(code *)*apuStack_70[0])();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if (**ppuVar1 != 0) {
    FUN_10a021eb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(**ppuVar1);
    return;
  }
  return;
}



/* Entry: 10a606498; end: 10a606503;  */

void FUN_10a606498(long *param_1)

{
  if ((*(ushort *)(param_1 + 0x30) & 0x17) != 0) {
    return;
  }
  if ((param_1[0x2d] != 0) && ((*(ushort *)(param_1[0x2d] + 0x118) >> 9 & 1) != 0)) {
    if (((*(uint *)(param_1 + 0x3d) ^ 0xffffffff) & 2) != 0 ||
        (*(uint *)((long)param_1 + 0x1ec) & 2) != 2) {
      *(uint *)(param_1 + 0x3d) = *(uint *)(param_1 + 0x3d) | 2;
      *(uint *)((long)param_1 + 0x1ec) = *(uint *)((long)param_1 + 0x1ec) | 2;
                    /* WARNING: Could not recover jumptable at 0x00010a3c7418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xd0))(param_1,param_1[0x2e] + 0x4f8);
      return;
    }
  }
  return;
}



/* Entry: 10a606504; end: 10a6066df;  */

ulong FUN_10a606504(float param_1,float param_2,long param_3,float *param_4,float *param_5)

{
  ulong uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uStack_a0;
  float fStack_98;
  ulong uStack_94;
  float fStack_8c;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  undefined4 uStack_74;
  
  lVar2 = *(long *)(param_3 + 0x178);
  if ((*(byte *)(lVar2 + 0x2a) >> 6 & 1) != 0) {
    func_0x00010a3e933c(lVar2);
  }
  fVar23 = *(float *)(lVar2 + 0x108);
  fVar24 = *(float *)(lVar2 + 0x118);
  fVar25 = *(float *)(lVar2 + 0x128);
  fVar26 = *(float *)(lVar2 + 0x138);
  uVar21 = *(undefined8 *)(lVar2 + 0x100);
  uVar18 = *(undefined8 *)(lVar2 + 0x110);
  uVar12 = *(undefined8 *)(lVar2 + 0x120);
  uVar15 = *(undefined8 *)(lVar2 + 0x130);
  FUN_10a394a64(param_3);
  func_0x00010acae698(param_3 + 0x268);
  uVar6 = NEON_fmov(0x3f800000,4);
  fVar4 = (float)uVar6;
  fVar7 = (float)((ulong)uVar6 >> 0x20);
  fVar8 = ((float)*(undefined8 *)(param_3 + 0x2a0) + fVar4) * 0.5;
  fVar10 = ((float)((ulong)*(undefined8 *)(param_3 + 0x2a0) >> 0x20) + fVar7) * 0.5;
  fVar3 = param_1 * (fVar4 - fVar8);
  fVar5 = param_2 * (fVar7 - fVar10);
  fVar8 = (fVar3 - param_1 * fVar8) * 0.5;
  fVar10 = (fVar5 - param_2 * fVar10) * 0.5;
  uStack_88 = CONCAT44(fVar10,fVar8);
  uStack_80 = 0;
  uStack_7c = CONCAT44(fVar5 - fVar10,fVar3 - fVar8);
  uStack_74 = 0;
  fVar8 = *param_4;
  fVar5 = param_4[1];
  fVar9 = param_4[2];
  fVar20 = (float)uVar21;
  fVar22 = (float)((ulong)uVar21 >> 0x20);
  fVar17 = (float)uVar18;
  fVar19 = (float)((ulong)uVar18 >> 0x20);
  fVar11 = (float)uVar12;
  fVar13 = (float)((ulong)uVar12 >> 0x20);
  fVar14 = (float)uVar15;
  fVar16 = (float)((ulong)uVar15 >> 0x20);
  fVar10 = fVar20 * fVar8 + fVar17 * fVar5 + fVar14 + fVar11 * fVar9;
  fVar3 = fVar22 * fVar8 + fVar19 * fVar5 + fVar16 + fVar13 * fVar9;
  uStack_a0 = CONCAT44(fVar3,fVar10);
  fStack_98 = fVar23 * fVar8 + fVar24 * fVar5 + fVar26 + fVar25 * fVar9;
  fVar8 = *param_5;
  fVar5 = param_5[1];
  fVar9 = param_5[2];
  fVar10 = (fVar20 * fVar8 + fVar17 * fVar5 + fVar14 + fVar11 * fVar9) - fVar10;
  fVar3 = (fVar22 * fVar8 + fVar19 * fVar5 + fVar16 + fVar13 * fVar9) - fVar3;
  fVar8 = (fVar23 * fVar8 + fVar24 * fVar5 + fVar26 + fVar25 * fVar9) - fStack_98;
  if (1.1920929e-07 <= fVar8 * fVar8 + fVar10 * fVar10 + fVar3 * fVar3) {
    fVar4 = fVar4 / fVar10;
    fStack_8c = 3.4028235e+38;
    if (fVar8 != 0.0) {
      fStack_8c = 1.0 / fVar8;
    }
    uVar1 = CONCAT44(fVar7 / fVar3,fVar4) ^
            (CONCAT44(fVar7 / fVar3,fVar4) ^ 0x7f7fffff7f7fffff) &
            CONCAT44(-(uint)(fVar3 == 0.0),-(uint)(fVar10 == 0.0));
    uStack_94 = uVar1;
    FUN_10a005840(&uStack_88,&uStack_a0);
    fVar10 = (float)uVar1;
    fVar8 = fVar10;
    if (fVar4 < fVar10) {
      fVar8 = 0.0;
    }
    uVar1 = 0x100000000;
    if (fVar4 < fVar10) {
      uVar1 = 0;
    }
    uVar1 = uVar1 | (uint)fVar8;
  }
  else {
    uVar1 = 0x17f7fffff;
  }
  return uVar1;
}



/* Entry: 10a6066e0; end: 10a607557;  */

undefined1  [16] FUN_10a6066e0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x17;
  auVar1._0_8_ = &UNK_10f66a0f9;
  return auVar1;
}



/* Entry: 10a607558; end: 10a6075ab;  */

void FUN_10a607558(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f667746;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  puStack_30 = &UNK_10f667746;
  uStack_18 = 0xffffffff;
  FUN_10a6075ac(param_1,&uStack_58);
  FUN_10a643ebc();
  return;
}



/* Entry: 10a6075ac; end: 10a607683;  */

/* WARNING: Removing unreachable block (ram,0x00010a607644) */

undefined1  [16] FUN_10a6075ac(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f66a0f9,0x17);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a643dc0(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a607684; end: 10a6076d7;  */

void FUN_10a607684(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f667746;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  puStack_30 = &UNK_10f667746;
  uStack_18 = 0xffffffff;
  FUN_10a6076d8(param_1,&uStack_58);
  FUN_10a644074();
  return;
}



/* Entry: 10a6076d8; end: 10a6077af;  */

/* WARNING: Removing unreachable block (ram,0x00010a607770) */

undefined1  [16] FUN_10a6076d8(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f66a111,0x13);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a643f78(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a6077b0; end: 10a607803;  */

void FUN_10a6077b0(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f667746;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  puStack_30 = &UNK_10f667746;
  uStack_18 = 0xffffffff;
  FUN_10a607804(param_1,&uStack_58);
  FUN_10a64422c();
  return;
}



/* Entry: 10a607804; end: 10a6078db;  */

/* WARNING: Removing unreachable block (ram,0x00010a60789c) */

undefined1  [16] FUN_10a607804(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f66a125,0x11);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a644130(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a6078dc; end: 10a60792f;  */

void FUN_10a6078dc(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f667746;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  puStack_30 = &UNK_10f667746;
  uStack_18 = 0xffffffff;
  FUN_10a607930(param_1,&uStack_58);
  FUN_10a6443e4();
  return;
}



/* Entry: 10a607930; end: 10a607a07;  */

/* WARNING: Removing unreachable block (ram,0x00010a6079c8) */

undefined1  [16] FUN_10a607930(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f66a137,0x14);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a6442e8(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a607a08; end: 10a607a5b;  */

void FUN_10a607a08(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f667746;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  puStack_30 = &UNK_10f667746;
  uStack_18 = 0xffffffff;
  FUN_10a607a5c(param_1,&uStack_58);
  FUN_10a64459c();
  return;
}



/* Entry: 10a607a5c; end: 10a607b33;  */

/* WARNING: Removing unreachable block (ram,0x00010a607af4) */

undefined1  [16] FUN_10a607a5c(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f66a14c,0x12);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a6444a0(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a607b34; end: 10a607b87;  */

void FUN_10a607b34(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f667746;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  puStack_30 = &UNK_10f667746;
  uStack_18 = 0xffffffff;
  FUN_10a607b88(param_1,&uStack_58);
  FUN_10a644754();
  return;
}



/* Entry: 10a607b88; end: 10a607c5f;  */

/* WARNING: Removing unreachable block (ram,0x00010a607c20) */

undefined1  [16] FUN_10a607b88(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f66a15f,0x18);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a644658(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a607c60; end: 10a607cb3;  */

void FUN_10a607c60(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f667746;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  puStack_30 = &UNK_10f667746;
  uStack_18 = 0xffffffff;
  FUN_10a607cb4(param_1,&uStack_58);
  FUN_10a64490c();
  return;
}



/* Entry: 10a607cb4; end: 10a607d8b;  */

/* WARNING: Removing unreachable block (ram,0x00010a607d4c) */

undefined1  [16] FUN_10a607cb4(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f66a178,0x16);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a644810(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a607d8c; end: 10a607e3f;  */

void FUN_10a607d8c(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f667746;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f667746;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a607e40(param_1,&puStack_98);
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f669400;
  puStack_70 = &UNK_10f667746;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0xc1;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a644ac4();
  FUN_10a644c30(param_1);
  return;
}



/* Entry: 10a607e40; end: 10a607f17;  */

/* WARNING: Removing unreachable block (ram,0x00010a607ed8) */

undefined1  [16] FUN_10a607e40(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f66a18f,0xc);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a6449c8(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a607f18; end: 10a607fb3;  */

void FUN_10a607f18(undefined8 param_1)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_88 = (undefined *)0x0;
  uStack_80 = 0xffffffff00000001;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_48 = CONCAT44(uStack_48._4_4_,0xffffffff);
  FUN_10a607fb4(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f669400;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000064;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0xc1;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a644de8();
  FUN_10a644f54(param_1);
  return;
}



/* Entry: 10a607fb4; end: 10a60808b;  */

/* WARNING: Removing unreachable block (ram,0x00010a60804c) */

undefined1  [16] FUN_10a607fb4(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f66a19c,0x12);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a644cec(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a60808c; end: 10a608143;  */

void FUN_10a60808c(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f667746;
  puStack_70 = (undefined *)0x0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a608144(param_1,&puStack_98);
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f669400;
  puStack_70 = &UNK_10f667746;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0xc1;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a64510c();
  FUN_10a645278(param_1);
  return;
}



/* Entry: 10a608144; end: 10a60821b;  */

/* WARNING: Removing unreachable block (ram,0x00010a6081dc) */

undefined1  [16] FUN_10a608144(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f66a1af,0x17);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a645010(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a60821c; end: 10a6082d3;  */

void FUN_10a60821c(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f667746;
  puStack_70 = (undefined *)0x0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a6082d4(param_1,&puStack_98);
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f669400;
  puStack_70 = &UNK_10f667746;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0xc1;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a645430();
  FUN_10a64559c(param_1);
  return;
}



/* Entry: 10a6082d4; end: 10a6083ab;  */

/* WARNING: Removing unreachable block (ram,0x00010a60836c) */

undefined1  [16] FUN_10a6082d4(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f66a1c7,0x15);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a645334(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a6083ac; end: 10a6084a3;  */

void FUN_10a6083ac(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f667746;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f667746;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a6084a4(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f669409;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f667746;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x94;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a645754();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f669400;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f667746;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0xc1;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a6458cc(param_1,&puStack_98);
  FUN_10a6459ec(param_1);
  return;
}



/* Entry: 10a6084a4; end: 10a60857b;  */

/* WARNING: Removing unreachable block (ram,0x00010a60853c) */

undefined1  [16] FUN_10a6084a4(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f66a1dd,0x13);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a645658(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a60857c; end: 10a608673;  */

void FUN_10a60857c(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f667746;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f667746;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a608674(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f669409;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f667746;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x94;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a645ba4();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f669400;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f667746;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0xc1;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a645d1c(param_1,&puStack_98);
  FUN_10a645e3c(param_1);
  return;
}



/* Entry: 10a608674; end: 10a60874b;  */

/* WARNING: Removing unreachable block (ram,0x00010a60870c) */

undefined1  [16] FUN_10a608674(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f66a1f1,0x12);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a645aa8(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a60874c; end: 10a6089c7;  */

void FUN_10a60874c(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f66a204,0x11);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bffbe8;
  pppuVar2 = (undefined8 ***)&UNK_10f667746;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bffbe8;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f669409,FUN_10a645ef8,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,"isCancelled",FUN_10a64601c,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f669400,FUN_10a6460d4,0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f66a204,0x11);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a6089ac);
  (*pcVar6)();
}



/* Entry: 10a6089c8; end: 10a608ab3;  */

void FUN_10a6089c8(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f667746;
  puStack_70 = (undefined *)0x0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a608ab4(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f669411;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f667746;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a64629c();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66941d;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f667746;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a646424(param_1,&puStack_98);
  FUN_10a646538(param_1);
  return;
}



/* Entry: 10a608ab4; end: 10a608b8b;  */

/* WARNING: Removing unreachable block (ram,0x00010a608b4c) */

undefined1  [16] FUN_10a608ab4(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f66a216,0x11);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a6461a0(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a608b8c; end: 10a608c77;  */

void FUN_10a608b8c(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f667746;
  puStack_70 = (undefined *)0x0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a608c78(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f669411;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f667746;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a6466f0();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66941d;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f667746;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a646878(param_1,&puStack_98);
  FUN_10a64698c(param_1);
  return;
}



/* Entry: 10a608c78; end: 10a608d4f;  */

/* WARNING: Removing unreachable block (ram,0x00010a608d10) */

undefined1  [16] FUN_10a608c78(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f66a228,0x10);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a6465f4(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a608d50; end: 10a608e3b;  */

void FUN_10a608d50(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f667746;
  puStack_70 = (undefined *)0x0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a608e3c(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f669411;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f667746;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a646b44();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66941d;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f667746;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a646ccc(param_1,&puStack_98);
  FUN_10a646de0(param_1);
  return;
}



/* Entry: 10a608e3c; end: 10a608f13;  */

/* WARNING: Removing unreachable block (ram,0x00010a608ed4) */

undefined1  [16] FUN_10a608e3c(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f66a239,0xf);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a646a48(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a608f14; end: 10a608fff;  */

void FUN_10a608f14(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f667746;
  puStack_70 = (undefined *)0x0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a609000(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f669425;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f667746;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a646f98();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66941d;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f667746;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a647110(param_1,&puStack_98);
  FUN_10a647224(param_1);
  return;
}



/* Entry: 10a609000; end: 10a6090d7;  */

/* WARNING: Removing unreachable block (ram,0x00010a609098) */

undefined1  [16] FUN_10a609000(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f66a249,0x13);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a646e9c(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a6090d8; end: 10a6091c3;  */

void FUN_10a6090d8(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f667746;
  puStack_70 = (undefined *)0x0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a6091c4(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f669425;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f667746;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a6473dc();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66941d;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f667746;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a647554(param_1,&puStack_98);
  FUN_10a647668(param_1);
  return;
}



/* Entry: 10a6091c4; end: 10a60929b;  */

/* WARNING: Removing unreachable block (ram,0x00010a60925c) */

undefined1  [16] FUN_10a6091c4(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f66a25d,0x12);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a6472e0(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a60929c; end: 10a609387;  */

void FUN_10a60929c(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f667746;
  puStack_70 = (undefined *)0x0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a609388(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f669425;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f667746;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a647820();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66941d;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f667746;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a647998(param_1,&puStack_98);
  FUN_10a647aac(param_1);
  return;
}



/* Entry: 10a609388; end: 10a60945f;  */

/* WARNING: Removing unreachable block (ram,0x00010a609420) */

undefined1  [16] FUN_10a609388(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f66a270,0x11);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a647724(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a609460; end: 10a609517;  */

void FUN_10a609460(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f667746;
  puStack_70 = (undefined *)0x0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a609518(param_1,&puStack_98);
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f669400;
  puStack_70 = &UNK_10f667746;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0xc1;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a647c64();
  FUN_10a647dd0(param_1);
  return;
}



/* Entry: 10a609518; end: 10a6095ef;  */

/* WARNING: Removing unreachable block (ram,0x00010a6095b0) */

undefined1  [16] FUN_10a609518(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f66a282,0x13);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a647b68(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a6095f0; end: 10a60968b;  */

void FUN_10a6095f0(undefined8 param_1)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_88 = (undefined *)0x0;
  uStack_80 = 0xffffffff00000001;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_48 = CONCAT44(uStack_48._4_4_,0xffffffff);
  FUN_10a60968c(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f669400;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000064;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0xc1;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a647f88();
  FUN_10a6480f4(param_1);
  return;
}



/* Entry: 10a60968c; end: 10a609763;  */

/* WARNING: Removing unreachable block (ram,0x00010a609724) */

undefined1  [16] FUN_10a60968c(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f66a296,0xe);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a647e8c(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a609764; end: 10a60981b;  */

void FUN_10a609764(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f667746;
  puStack_70 = (undefined *)0x0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a60981c(param_1,&puStack_98);
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f669400;
  puStack_70 = &UNK_10f667746;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0xc1;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a6482ac();
  FUN_10a648418(param_1);
  return;
}



/* Entry: 10a60981c; end: 10a6098f3;  */

/* WARNING: Removing unreachable block (ram,0x00010a6098b4) */

undefined1  [16] FUN_10a60981c(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f66a2a5,0x11);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a6481b0(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a6098f4; end: 10a6099af;  */

undefined1  [16] FUN_10a6098f4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xf;
  auVar1._0_8_ = &UNK_10f662d2d;
  return auVar1;
}



/* Entry: 10a6099b0; end: 10a609f3f;  */

void FUN_10a6099b0(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f662d2d,0xf);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c008a8;
  pppuVar2 = (undefined8 ***)&UNK_10f667746;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000064;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c008a8;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bce988;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a609f20;
    FUN_10a054dac(param_1,&UNK_10f66942b,FUN_10a6484d4,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a609f20;
    FUN_10a054dac(param_1,&DAT_10f669437,FUN_10a648748,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"text",FUN_10a648864,FUN_10a648914);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f2db9ba,FUN_10a648bd4,FUN_10a648c84);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f644dc7,FUN_10a648d3c,FUN_10a648e40);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68f0dc,FUN_10a648fa8,FUN_10a649068);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"textColor",FUN_10a649130,FUN_10a6491e0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f644dd1,FUN_10a6493a8,FUN_10a649504);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f2daf5e,FUN_10a649644,FUN_10a6496f4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f2daf4e,FUN_10a6498b8,FUN_10a649968);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f2db3c4,FUN_10a649a20,FUN_10a649ad0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f6850aa,FUN_10a649b88,FUN_10a649c38);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f644ddf,FUN_10a649d0c,FUN_10a649e68);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f644dea,FUN_10a649f20,FUN_10a64a084);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f644df6,FUN_10a64a208,FUN_10a64a2b8);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_60 = (undefined4)*(undefined8 *)(lVar3 + -0x28);
    uStack_5c = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x28) >> 0x20);
    uStack_50 = (undefined4)uVar10;
    uStack_4c = (undefined4)(uVar10 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uVar10 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f662d2d,0xf);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a609f20:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a609f24);
  (*pcVar6)();
}



/* Entry: 10a609f40; end: 10a609fb3;  */

void FUN_10a609f40(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bffd38;
  param_1[2] = &PTR_DAT_110bcba98;
  param_1[7] = &PTR_DAT_110bcbaf0;
  param_1[0xd] = &PTR_DAT_110bcbb10;
  param_1[0x16] = &PTR_DAT_110bcbb80;
  param_1[0xa8] = &PTR_DAT_110bfffb0;
  param_1[0x17] = &PTR_DAT_110bcbbb0;
  func_0x00010a193298(param_1 + 0xa5);
  func_0x00010a1932f0(param_1 + 0xa3);
  *param_1 = &PTR_FUN_110c002b0;
  param_1[2] = &PTR_DAT_110bd5880;
  param_1[7] = &PTR_DAT_110bd58d8;
  param_1[0xd] = &PTR_DAT_110bd58f8;
  param_1[0x16] = &PTR_DAT_110bd5968;
  param_1[0xa8] = &PTR_DAT_110c00510;
  param_1[0x17] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + 0x9c);
  func_0x00010a004e5c(param_1 + 0x9a);
  param_1[0x72] = &PTR_FUN_110b9ec48;
  puStack_28 = param_1 + 0x90;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x8d;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x86;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x83;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(param_1 + 0x7e);
  puStack_28 = param_1 + 0x78;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x75;
  func_0x00010a04aad4(&puStack_28);
  lVar1 = param_1[0x71];
  param_1[0x71] = 0;
  if (lVar1 != 0) {
    FUN_10a447854();
  }
  param_1[99] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x6c);
  FUN_10a44a358(param_1 + 0x65);
  plVar2 = (long *)param_1[0x62];
  param_1[0x62] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a425f6c(param_1 + 0x60,0);
  FUN_10a4477fc(param_1 + 0x5e);
  func_0x00010a4477a4(param_1 + 0x5c);
  func_0x00010a4476d0(param_1 + 0x57);
  FUN_10a44763c(param_1 + 0x54);
  if (param_1[0x53] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x51] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x4f] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0x4c);
  if (param_1[0x4a] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(param_1,&PTR_PTR_110bfc680);
  return;
}



/* Entry: 10a609fb4; end: 10a60a06f;  */

void FUN_10a609fb4(undefined8 param_1)

{
  func_0x00010a3a3454(param_1,&PTR_PTR_110bfc668);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a60a070; end: 10a60a0a7;  */

void FUN_10a60a070(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  func_0x00010a3a3454((long)param_1 + lVar1,&PTR_PTR_110bfc668);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a60a0a8; end: 10a60a1af;  */

void FUN_10a60a0a8(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_30;
  long *plStack_28;
  
  FUN_10a60a1b0(&lStack_30,param_2);
  if (lStack_30 == 0) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f669443,&UNK_10f669474,0x17,&UNK_10f6694b2);
    }
    func_0x000107c2b054(param_1,&UNK_10f667746);
  }
  else if (*(char *)(lStack_30 + 0x2c7) < '\0') {
    func_0x000107c3192c(param_1,*(undefined8 *)(lStack_30 + 0x2b0),
                        *(undefined8 *)(lStack_30 + 0x2b8));
  }
  else {
    uVar6 = *(undefined8 *)(lStack_30 + 0x2b8);
    uVar5 = *(undefined8 *)(lStack_30 + 0x2b0);
    param_1[2] = *(undefined8 *)(lStack_30 + 0x2c0);
    param_1[1] = uVar6;
    *param_1 = uVar5;
  }
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_28);
      return;
    }
  }
  return;
}



/* Entry: 10a60a1b0; end: 10a60a227;  */

void FUN_10a60a1b0(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  FUN_10a424150();
  lVar5 = *param_2;
  if (((lVar5 == 0) || (lVar4 = *(long *)(lVar5 + 0x268), lVar4 == 0)) ||
     (___dynamic_cast(lVar4,&PTR_DAT_110bb3788,&PTR_DAT_110bb27b8,0), lVar4 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar5 = *(long *)(lVar5 + 0x270);
    *param_1 = lVar4;
    param_1[1] = lVar5;
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
  }
  return;
}



/* Entry: 10a60a228; end: 10a60a2d3;  */

void FUN_10a60a228(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lStack_30;
  long *plStack_28;
  
  FUN_10a60a1b0(&lStack_30,param_1);
  if (lStack_30 == 0) {
    FUN_10a00946c(&UNK_10f6694df);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a60a2c0);
    (*pcVar4)();
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lStack_30 + 0x2b0,param_2);
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_28);
      return;
    }
  }
  return;
}



/* Entry: 10a60a2d4; end: 10a60a3b3;  */

void FUN_10a60a2d4(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lStack_30;
  long *plStack_28;
  
  FUN_10a60a1b0(&lStack_30,param_2);
  if (lStack_30 == 0) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f669443,&UNK_10f669510,0x27,&UNK_10f66954e);
    }
    puVar4 = &UNK_10f667746;
  }
  else {
    puVar4 = &UNK_10f643dac;
  }
  func_0x000107c2b054(param_1,puVar4);
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_28);
      return;
    }
  }
  return;
}



/* Entry: 10a60a3b4; end: 10a60a45b;  */

void FUN_10a60a3b4(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lStack_30;
  long *plStack_28;
  
  FUN_10a60a1b0(&lStack_30,param_1);
  if (lStack_30 == 0) {
    FUN_10a00946c(&UNK_10f66957b);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a60a448);
    (*pcVar4)();
  }
  FUN_10a1ea6a0(lStack_30,param_2);
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_28);
      return;
    }
  }
  return;
}



/* Entry: 10a60a45c; end: 10a60a54b;  */

void FUN_10a60a45c(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  long lStack_30;
  long *plStack_28;
  
  FUN_10a60a1b0(&lStack_30,param_2);
  if (lStack_30 == 0) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f669443,&UNK_10f6695ac,0x37,&UNK_10f66954e);
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar4 = *(long *)(lStack_30 + 0x318);
    uVar5 = *(undefined8 *)(lStack_30 + 0x310);
    param_1[1] = *(undefined8 *)(lStack_30 + 0x318);
    *param_1 = uVar5;
    if (lVar4 != 0) {
      plVar1 = (long *)(lVar4 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_28);
      return;
    }
  }
  return;
}



/* Entry: 10a60a54c; end: 10a60a647;  */

void FUN_10a60a54c(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uStack_40;
  long *plStack_38;
  long lStack_30;
  long *plStack_28;
  
  FUN_10a60a1b0(&lStack_30,param_1);
  if (lStack_30 != 0) {
    plStack_38 = (long *)param_2[1];
    uStack_40 = *param_2;
    if (param_2[1] != 0) {
      plVar1 = (long *)(param_2[1] + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    func_0x00010a1ea71c(lStack_30 + 0x310,&uStack_40);
    plVar1 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar2 = plStack_38 + 1;
      do {
        lVar6 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
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
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
      }
    }
    return;
  }
  FUN_10a00946c(&UNK_10f66957b);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a60a634);
  (*pcVar5)();
}



/* Entry: 10a60a648; end: 10a60a70b;  */

undefined4 FUN_10a60a648(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined4 uVar5;
  long lStack_30;
  long *plStack_28;
  
  FUN_10a60a1b0(&lStack_30,param_1);
  if (lStack_30 == 0) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f669443,&UNK_10f669605,0x47,&UNK_10f669644);
    }
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(lStack_30 + 0x2cc);
  }
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
  return uVar5;
}


