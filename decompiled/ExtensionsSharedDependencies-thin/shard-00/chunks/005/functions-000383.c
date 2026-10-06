/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 007767f4; end: 00777047;  */

void FUN_007767f4(undefined8 **param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 **ppuVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 **ppuVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  uint uVar17;
  undefined8 *puVar18;
  undefined8 **ppuVar19;
  undefined8 **ppuVar20;
  undefined8 **ppuVar21;
  undefined8 **ppuVar22;
  undefined8 **ppuVar23;
  undefined8 **ppuVar24;
  undefined8 **ppuVar25;
  ulong uStack_70;
  undefined8 *puStack_68;
  
  puVar18 = *param_1;
  ppuVar8 = param_1;
  FUN_00567c80();
  uVar17 = (uint)puVar18;
  if ((uVar17 & (uVar17 << 3 ^ 0x20) & 0x28) != 0) {
    if ((~uVar17 & 9) == 0) {
      pcVar10 = 
      "Check (v & (kMuWriter | kMuReader)) != (kMuWriter | kMuReader) failed: %s: Mutex corrupt: both reader and writer lock held: %p"
      ;
      uVar9 = 0x7a4;
      goto LAB_00776f58;
    }
    if (((ulong)puVar18 & 0x24) == 0x20) {
      pcVar10 = 
      "Check (v & (kMuWait | kMuWrWait)) != kMuWrWait failed: %s: Mutex corrupt: waiting writer with no waiters: %p"
      ;
      uVar9 = 0x7a7;
      goto LAB_00776f58;
    }
  }
  if ((uVar17 >> 4 & 1) != 0) {
    uVar11 = 8;
    if (((ulong)puVar18 & 8) == 0) {
      uVar11 = 9;
    }
    ppuVar8 = param_1;
    FUN_00567ce4(param_1,uVar11);
  }
  puStack_68 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
  if (((param_2 == 0) || (*(long *)(*(long *)(param_2 + 0x20) + 0x20) == 0)) ||
     ((*(byte *)(*(long *)(param_2 + 0x20) + 0x14) & 1) != 0)) {
    uStack_70 = 0;
    ppuVar24 = (undefined8 **)0x0;
    ppuVar21 = (undefined8 **)0x0;
    ppuVar22 = (undefined8 **)0x0;
    ppuVar23 = (undefined8 **)0x0;
    ppuVar20 = (undefined8 **)0x0;
LAB_00776894:
    do {
      puVar18 = *param_1;
      uVar17 = (uint)puVar18;
      if ((((uVar17 >> 3 & 1) == 0) || (param_2 != 0)) || (((ulong)puVar18 & 6) == 4)) {
        if ((param_2 == 0) && (((ulong)puVar18 & 5) == 1)) {
          lVar15 = -0x101;
          if ((undefined8 *)0x1ff < puVar18) {
            lVar15 = -0x100;
          }
          while (*param_1 == puVar18) {
            cVar1 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(param_1,0x10);
            if (bVar7) {
              *param_1 = (undefined8 *)(lVar15 + (long)puVar18);
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') {
              return;
            }
          }
          goto LAB_00776920;
        }
        if ((uVar17 >> 6 & 1) != 0) goto LAB_00776924;
        do {
          if (*param_1 != puVar18) goto LAB_00776920;
          cVar1 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar7) {
            *param_1 = (undefined8 *)((ulong)puVar18 | 0x40);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if ((uVar17 >> 2 & 1) == 0) {
          if (param_2 != 0) {
            bVar7 = true;
            do {
              while( true ) {
                puVar12 = *param_1;
                puVar18 = puVar12 + -0x20;
                if ((long)puVar12 < 0x100) {
                  puVar18 = puVar12;
                }
                if (bVar7) {
                  lVar15 = *(long *)(param_2 + 0x28);
                  ppuVar8 = (undefined8 **)0x0;
                  FUN_00568070(0,param_2,puVar18,2);
                  bVar7 = lVar15 == 0;
                }
                else {
                  bVar7 = false;
                  ppuVar8 = (undefined8 **)0x0;
                }
                uVar17 = 0xffffffde;
                if (((ulong)puVar12 & 0xfffffffffffffe08) != 0) {
                  uVar17 = 0xffffffd7;
                }
                uVar13 = (ulong)puVar18 & 0xffffffffffffff00;
                if (ppuVar8 != (undefined8 **)0x0) {
                  uVar13 = (ulong)ppuVar8 | 4;
                }
                if (*param_1 == puVar12) break;
                ClearExclusiveLocal();
              }
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
              if (bVar2) {
                *param_1 = (undefined8 *)(uVar13 | (ulong)((uint)puVar12 & uVar17) & 0x9f);
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            goto LAB_00776db0;
          }
          pcVar10 = "Check %s failed: %s";
          uVar9 = 0x85e;
          goto LAB_00776f58;
        }
        ppuVar19 = (undefined8 **)((ulong)puVar18 & 0xffffffffffffff00);
        if ((((ulong)puVar18 & 1) == 0) || ((long)((ulong)ppuVar19[5] & 0xffffffffffffff00) < 0x101)
           ) {
          if (ppuVar20 != (undefined8 **)0x0) {
            if ((*(byte *)((long)ppuVar19 + 0x13) & 1) == 0) {
              pcVar10 = "Check %s failed: %s";
              uVar9 = 0x896;
              goto LAB_00776f58;
            }
            if (((ulong)ppuVar20[2] & 1) == 0) {
              *(undefined1 *)(ppuVar20 + 2) = 1;
              if (ppuVar20[1] != (undefined8 *)0x0) {
                pcVar10 = "Check %s failed: %s";
                uVar9 = 0x89c;
                goto LAB_00776f58;
              }
              if (ppuVar20 != ppuVar19) {
                puVar12 = *ppuVar20;
                if ((*ppuVar20[4] == *(long *)puVar12[4]) &&
                   (*(int *)(ppuVar20 + 3) == *(int *)(puVar12 + 3))) {
                  plVar16 = (long *)ppuVar20[4][1];
                  plVar14 = (long *)((long *)puVar12[4])[1];
                  if ((plVar16 == (long *)0x0) || (plVar16[2] == 0)) {
                    if ((plVar14 == (long *)0x0) || (plVar14[2] == 0)) goto LAB_00776a04;
                  }
                  else if ((plVar14 != (long *)0x0) &&
                          (((plVar16[2] == plVar14[2] && (plVar16[3] == plVar14[3])) &&
                           (*plVar16 == *plVar14 && plVar16[1] == plVar14[1])))) {
LAB_00776a04:
                    ppuVar20[1] = puVar12;
                  }
                }
              }
            }
          }
          puVar12 = (undefined8 *)(*ppuVar19)[4];
          ppuVar25 = ppuVar19;
          if (((undefined *)*puVar12 != &UNK_00811348) ||
             ((lVar15 = puVar12[1], lVar15 != 0 && (*(long *)(lVar15 + 0x10) != 0)))) {
            if ((ppuVar22 == (undefined8 **)0x0) ||
               ((ppuVar20 != ppuVar19 && ((undefined *)*ppuVar22[4] != &UNK_00811348)))) {
              if (ppuVar20 != ppuVar19) {
                if (ppuVar20 != (undefined8 **)0x0) {
                  ppuVar25 = ppuVar20;
                }
                ppuVar25 = (undefined8 **)*ppuVar25;
                *(undefined1 *)(ppuVar19 + 2) = 0;
                if (ppuVar19[1] == (undefined8 *)0x0) {
                  *(undefined1 *)((long)ppuVar19 + 0x13) = 1;
                  *param_1 = puVar18;
                  do {
                    *(undefined1 *)((long)ppuVar25 + 0x11) = 0;
                    ppuVar8 = (undefined8 **)ppuVar25[4][1];
                    if (ppuVar8 == (undefined8 **)0x0) {
LAB_00776ab4:
                      if (ppuVar22 == (undefined8 **)0x0) {
                        *(undefined1 *)((long)ppuVar25 + 0x11) = 1;
                        ppuVar23 = ppuVar20;
                        ppuVar22 = ppuVar25;
                        if ((undefined *)*ppuVar25[4] == &UNK_00811348) {
                          uStack_70 = 0x20;
                          ppuVar20 = ppuVar19;
                          goto LAB_00776894;
                        }
                      }
                      else if ((undefined *)*ppuVar25[4] == &UNK_00811370) {
                        *(undefined1 *)((long)ppuVar25 + 0x11) = 1;
                      }
                      else {
                        uStack_70 = 0x20;
                      }
                    }
                    else if (ppuVar8 != ppuVar24) {
                      if (((code *)ppuVar8[2] == (code *)0x0) ||
                         ((*(code *)ppuVar8[2])(), ((ulong)ppuVar8 & 1) != 0)) goto LAB_00776ab4;
                      ppuVar24 = (undefined8 **)ppuVar25[4][1];
                    }
                    if (((*(byte *)((long)ppuVar25 + 0x11) & 1) == 0) &&
                       (ppuVar20 = (undefined8 **)ppuVar25[1], ppuVar20 != (undefined8 **)0x0)) {
                      ppuVar5 = ppuVar25;
                      for (ppuVar4 = (undefined8 **)ppuVar20[1]; ppuVar3 = ppuVar20,
                          ppuVar4 != (undefined8 **)0x0; ppuVar4 = (undefined8 **)ppuVar4[1]) {
                        ppuVar5[1] = ppuVar4;
                        ppuVar20 = ppuVar4;
                        ppuVar8 = ppuVar3;
                        ppuVar5 = ppuVar3;
                      }
                      ppuVar25[1] = ppuVar3;
                      ppuVar25 = ppuVar3;
                    }
                    ppuVar20 = ppuVar19;
                    if (ppuVar25 == ppuVar19) goto LAB_00776894;
                    ppuVar20 = ppuVar25;
                    ppuVar25 = (undefined8 **)*ppuVar25;
                  } while( true );
                }
                pcVar10 = "Check %s failed: %s";
                uVar9 = 0x8dc;
                goto LAB_00776f58;
              }
              ppuVar19[5] = (undefined8 *)0x0;
              *(undefined1 *)((long)ppuVar19 + 0x13) = 0;
              if (param_2 != 0) {
                FUN_00568070(ppuVar19,param_2,puVar18,2);
                uVar13 = 0x96;
                ppuVar8 = ppuVar19;
                goto LAB_00776d90;
              }
              puVar18 = (undefined8 *)((ulong)puVar18 & 0xffffffffffffff96);
              goto LAB_00776dac;
            }
            if (ppuVar23 != (undefined8 **)0x0) {
              ppuVar25 = ppuVar23;
            }
            if ((undefined8 **)*ppuVar25 == ppuVar22) goto LAB_00776c7c;
            pcVar10 = "Check %s failed: %s";
            uVar9 = 0x919;
            goto LAB_00776f58;
          }
          *(undefined1 *)((long)*ppuVar19 + 0x11) = 1;
          uStack_70 = 0x20;
LAB_00776c7c:
          bVar7 = false;
          ppuVar8 = ppuVar19;
          ppuVar20 = &puStack_68;
          goto LAB_00776c88;
        }
        ppuVar19[5] = ppuVar19[5] + -0x20;
        if (param_2 == 0) goto LAB_00776dac;
        FUN_00568070(ppuVar19,param_2,puVar18,2);
        if (ppuVar19 == (undefined8 **)0x0) {
          pcVar10 = "Check %s failed: %s";
          uVar9 = 0x88a;
          goto LAB_00776f58;
        }
        uVar13 = 0xbf;
        ppuVar8 = ppuVar19;
LAB_00776d90:
        puVar18 = (undefined8 *)((ulong)puVar18 & uVar13 | (ulong)ppuVar8);
        goto LAB_00776dac;
      }
      while (*param_1 == puVar18) {
        cVar1 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar7) {
          *param_1 = (undefined8 *)((ulong)puVar18 & 0xffffffffffffffd7);
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          return;
        }
      }
LAB_00776920:
      ClearExclusiveLocal();
LAB_00776924:
      FUN_00566c78(ppuVar21,0);
      ppuVar8 = ppuVar21;
    } while( true );
  }
  pcVar10 = "Check %s failed: %s";
  uVar9 = 0x841;
LAB_00776f58:
  FUN_00584c60(3,"mutex.cc",uVar9,pcVar10);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x776f60);
  (*pcVar6)();
  while ((ppuVar20 = ppuVar23, ppuVar25 != ppuVar8 || (!bVar7))) {
LAB_00776c88:
    ppuVar23 = (undefined8 **)*ppuVar25;
    if (*(char *)((long)ppuVar23 + 0x11) == '\x01') {
      if (ppuVar25[1] != (undefined8 *)0x0) {
        pcVar10 = "Check %s failed: %s";
        uVar9 = 0x41a;
        goto LAB_00776f58;
      }
      func_0x005672bc();
      *ppuVar23 = *ppuVar20;
      *ppuVar20 = ppuVar23;
      if ((ppuVar8 != ppuVar19) || ((undefined *)*ppuVar23[4] == &UNK_00811348)) break;
    }
    else {
      ppuVar25 = (undefined8 **)ppuVar23[1];
      if (ppuVar25 == (undefined8 **)0x0) {
        bVar7 = true;
        ppuVar25 = ppuVar23;
        ppuVar23 = ppuVar20;
      }
      else {
        ppuVar22 = ppuVar23;
        for (ppuVar21 = (undefined8 **)ppuVar25[1]; ppuVar21 != (undefined8 **)0x0;
            ppuVar21 = (undefined8 **)ppuVar21[1]) {
          ppuVar22[1] = ppuVar21;
          ppuVar22 = ppuVar25;
          ppuVar25 = ppuVar21;
        }
        ppuVar23[1] = ppuVar25;
        bVar7 = true;
        ppuVar23 = ppuVar20;
      }
    }
  }
  if (param_2 != 0) {
    FUN_00568070();
  }
  if (puStack_68 != (undefined8 *)((long)&MACH_HEADER.magic + 1)) {
    if (ppuVar8 == (undefined8 **)0x0) {
      puVar18 = (undefined8 *)((ulong)puVar18 & 0x10 | 2);
    }
    else {
      ppuVar8[5] = (undefined8 *)0x0;
      *(undefined1 *)((long)ppuVar8 + 0x13) = 0;
      puVar18 = (undefined8 *)(uStack_70 | (ulong)ppuVar8 | (ulong)puVar18 & 0x10 | 6);
    }
LAB_00776dac:
    *param_1 = puVar18;
LAB_00776db0:
    puVar18 = puStack_68;
    if (puStack_68 != (undefined8 *)((long)&MACH_HEADER.magic + 1)) {
      __ZNSt3__16chrono12steady_clock3nowEv();
      do {
        if ((*(byte *)((long)puVar18 + 0x12) & 1) == 0) {
          lVar15 = puVar18[4];
          *(undefined8 ***)(lVar15 + 0x30) = ppuVar8;
          *(undefined1 *)(lVar15 + 0x38) = 1;
        }
        puVar12 = (undefined8 *)*puVar18;
        *puVar18 = 0;
        *(undefined4 *)((long)puVar18 + 0x1c) = 0;
        FUN_005666e0(puVar18);
        puVar18 = puVar12;
        puStack_68 = puVar12;
      } while (puVar12 != (undefined8 *)((long)&MACH_HEADER.magic + 1));
    }
    return;
  }
  pcVar10 = "Check %s failed: %s";
  uVar9 = 0x930;
  goto LAB_00776f58;
}



/* Entry: 00777048; end: 007771d3;  */

/* WARNING: Removing unreachable block (ram,0x00777100) */

void FUN_00777048(uint *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  uint uVar5;
  long lVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  
  puVar4 = param_1;
  FUN_005769c0();
  puVar11 = puVar4;
  if (((ulong)puVar4 & 1) == 0) {
    do {
      uVar5 = *param_1;
      puVar11 = (uint *)(ulong)uVar5;
      if (uVar5 != (uint)puVar4) {
        ClearExclusiveLocal();
        break;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = (uint)puVar4 | 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 1) == 0) {
      return;
    }
  }
  uVar10 = (uint)puVar11;
  __ZNSt3__16chrono12steady_clock3nowEv();
  iVar9 = 0;
  uVar5 = 0;
LAB_007770d4:
  do {
    while (uVar8 = (uint)puVar11, uVar8 < 8) {
      puVar11 = (uint *)(ulong)(uVar8 | 8);
      while( true ) {
        uVar1 = *param_1;
        puVar7 = (uint *)(ulong)uVar1;
        if (uVar1 != uVar8) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar3) {
          *param_1 = uVar8 | 8;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') goto LAB_00777154;
      }
      ClearExclusiveLocal();
      if ((uVar1 & 1) == 0) {
        do {
          puVar7 = (uint *)(ulong)*param_1;
          if (*param_1 != uVar1) {
            ClearExclusiveLocal();
            break;
          }
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar3) {
            *param_1 = uVar1 | uVar5 | 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      else {
        puVar11 = puVar7;
        if (7 < uVar1) break;
      }
      puVar11 = puVar7;
      if (((ulong)puVar7 & 1) == 0) {
        return;
      }
    }
LAB_00777154:
    iVar9 = iVar9 + 1;
    FUN_00576d44(param_1,puVar11,iVar9,uVar10 >> 1 & 1);
    puVar11 = param_1;
    FUN_005769c0();
    puVar7 = puVar11;
    __ZNSt3__16chrono12steady_clock3nowEv();
    lVar6 = (long)puVar7 - (long)puVar4 >> 7;
    if (0x1ffffffe < lVar6) {
      lVar6 = 0x1fffffff;
    }
    uVar1 = (int)lVar6 << 3;
    uVar8 = 0x10;
    if (uVar1 != 8) {
      uVar8 = uVar1;
    }
    uVar5 = 8;
    if (uVar1 != 0) {
      uVar5 = uVar8;
    }
    uVar8 = (uint)puVar11;
    if (((ulong)puVar11 & 1) == 0) {
      do {
        uVar1 = *param_1;
        puVar11 = (uint *)(ulong)uVar1;
        if (uVar1 != uVar8) {
          ClearExclusiveLocal();
          if ((uVar1 & 1) == 0) {
            return;
          }
          goto LAB_007770d4;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar3) {
          *param_1 = uVar8 | uVar5 | 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (((ulong)puVar11 & 1) == 0) {
      return;
    }
  } while( true );
}



/* Entry: 007771d4; end: 00777253;  */

void FUN_007771d4(void)

{
  return;
}



/* Entry: 00777254; end: 007772bb;  */

void FUN_00777254(void)

{
  code *pcVar1;
  dword *pdVar2;
  
  pdVar2 = &MACH_HEADER.ncmds;
  ___cxa_allocate_exception();
  __ZNSt13runtime_errorC2ERKS_();
  *(undefined ***)pdVar2 = &PTR_FUN_00a0d300;
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x777298);
  (*pcVar1)();
}



/* Entry: 007772bc; end: 007772c3;  */

void FUN_007772bc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x7772c0);
  (*pcVar1)();
}



/* Entry: 007772c4; end: 00777343;  */

void FUN_007772c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x30;
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar1 = auStack_40;
  func_0x00692d80();
  lStack_30 = param_4;
  uStack_28 = param_3;
  func_0x00693044(unaff_x30);
  uVar5 = 0xb6;
  FUN_0077670c(auStack_40);
  func_0x0068fc58(auStack_40,&UNK_00914304);
  func_0x0069334c();
  func_0x00692f24();
  func_0x00692f10(*(undefined8 *)(unaff_x20 + 8));
  func_0x00692f18();
  func_0x00692f10(*(undefined8 *)(unaff_x19 + 8));
  func_0x0068ef84();
  plVar4 = &lStack_30;
  FUN_0055130c();
  func_0x006931a8();
  uStack_78 = uVar5;
  func_0x00693044(FUN_00777344);
  puVar2 = auStack_88;
  uVar5 = 0xdc;
  FUN_0077670c();
  func_0x00693114();
  func_0x0069334c();
  func_0x00692f24();
  func_0x00692f10(*(undefined8 *)(puVar1 + 8));
  func_0x00692f18();
  func_0x00692f10(plVar4[1]);
  func_0x0068fc78();
  FUN_0055130c();
  func_0x0068ef84();
  puVar1 = puVar2;
  func_0x00692c1c();
  ppuVar3 = &PTR_DAT_00b29548 + ((ulong)puVar1 & 0xffffffff);
  FUN_0055130c();
  func_0x0069308c();
  uStack_c8 = uVar5;
  func_0x00693044(FUN_007773e4);
  puVar1 = auStack_d8;
  FUN_0077670c(puVar1);
  func_0x00693114();
  func_0x0069334c();
  func_0x00692f24();
  func_0x00692f10(*(undefined8 *)(puVar2 + 8));
  func_0x00692f18();
  func_0x00692f10(ppuVar3[1]);
  func_0x00690618();
  func_0x006579b0();
  func_0x00693010(ppuVar3[1]);
  func_0x0068ef84(puVar1,&UNK_009144da);
  func_0x00692f10(*(undefined8 *)(param_4 + 8));
  func_0x0069308c();
  func_0x006bf46c();
  _abort();
  _abort();
  _abort();
  _abort();
                    /* WARNING: Could not recover jumptable at 0x007774bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s10AppIntents0A10DependencyC12wrappedValuexvg_0099aa60)();
  return;
}



/* Entry: 00777344; end: 007773e3;  */

void FUN_00777344(long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [16];
  undefined8 uStack_88;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  uStack_38 = param_3;
  func_0x00693044();
  puVar1 = auStack_48;
  uVar4 = 0xdc;
  FUN_0077670c();
  func_0x00693114();
  func_0x0069334c();
  func_0x00692f24();
  func_0x00692f10(*(undefined8 *)(param_1 + 8));
  func_0x00692f18();
  func_0x00692f10(*(undefined8 *)(param_2 + 8));
  func_0x0068fc78();
  FUN_0055130c();
  func_0x0068ef84();
  puVar2 = puVar1;
  func_0x00692c1c();
  ppuVar3 = &PTR_DAT_00b29548 + ((ulong)puVar2 & 0xffffffff);
  FUN_0055130c();
  func_0x0069308c();
  uStack_88 = uVar4;
  func_0x00693044(FUN_007773e4);
  puVar2 = auStack_98;
  FUN_0077670c(puVar2);
  func_0x00693114();
  func_0x0069334c();
  func_0x00692f24();
  func_0x00692f10(*(undefined8 *)(puVar1 + 8));
  func_0x00692f18();
  func_0x00692f10(ppuVar3[1]);
  func_0x00690618();
  func_0x006579b0();
  func_0x00693010(ppuVar3[1]);
  func_0x0068ef84(puVar2,&UNK_009144da);
  func_0x00692f10(*(undefined8 *)(param_4 + 8));
  func_0x0069308c();
  func_0x006bf46c();
  _abort();
  _abort();
  _abort();
  _abort();
                    /* WARNING: Could not recover jumptable at 0x007774bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s10AppIntents0A10DependencyC12wrappedValuexvg_0099aa60)();
  return;
}



/* Entry: 007773e4; end: 0077747f;  */

void FUN_007773e4(long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  uStack_38 = param_3;
  func_0x00693044();
  puVar1 = auStack_48;
  FUN_0077670c(puVar1);
  func_0x00693114();
  func_0x0069334c();
  func_0x00692f24();
  func_0x00692f10(*(undefined8 *)(param_1 + 8));
  func_0x00692f18();
  func_0x00692f10(*(undefined8 *)(param_2 + 8));
  func_0x00690618();
  func_0x006579b0();
  func_0x00693010(*(undefined8 *)(param_2 + 8));
  func_0x0068ef84(puVar1,&UNK_009144da);
  func_0x00692f10(*(undefined8 *)(param_4 + 8));
  func_0x0069308c();
  func_0x006bf46c();
  _abort();
  _abort();
  _abort();
  _abort();
                    /* WARNING: Could not recover jumptable at 0x007774bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s10AppIntents0A10DependencyC12wrappedValuexvg_0099aa60)();
  return;
}



/* Entry: 00777480; end: 007774a7;  */

void FUN_00777480(void)

{
  func_0x006bf46c();
  _abort();
  _abort();
  _abort();
  _abort();
                    /* WARNING: Could not recover jumptable at 0x007774bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s10AppIntents0A10DependencyC12wrappedValuexvg_0099aa60)();
  return;
}



/* Entry: 007774a8; end: 007774b3;  */

void FUN_007774a8(void)

{
  _abort();
                    /* WARNING: Could not recover jumptable at 0x007774bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s10AppIntents0A10DependencyC12wrappedValuexvg_0099aa60)();
  return;
}


