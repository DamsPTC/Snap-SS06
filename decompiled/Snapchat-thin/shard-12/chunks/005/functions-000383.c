/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10928bc78; end: 10928bcfb;  */

undefined4 * FUN_10928bc78(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (*(ulong *)(param_1 + 0x100) < 8) {
    puVar1 = (undefined8 *)(param_1 + *(ulong *)(param_1 + 0x100) * 0x20);
    uVar8 = *param_2;
    uVar10 = param_2[3];
    uVar9 = param_2[2];
    puVar1[1] = param_2[1];
    *puVar1 = uVar8;
    puVar1[3] = uVar10;
    puVar1[2] = uVar9;
    lVar6 = *(long *)(param_1 + 0x100);
    *(long *)(param_1 + 0x100) = lVar6 + 1;
    return (undefined4 *)(param_1 + lVar6 * 0x20);
  }
  lVar2 = 0x10;
  ___cxa_allocate_exception();
  func_0x000104c4f71c();
  lVar6 = lVar2;
  puVar4 = (undefined4 *)PTR___ZTISt12length_error_110352238;
  ___cxa_throw(lVar2,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
  ___cxa_free_exception(lVar2);
  __Unwind_Resume();
  uVar7 = *(ulong *)(lVar6 + 0x20);
  if (uVar7 < 8) {
    puVar5 = (undefined4 *)(lVar6 + uVar7 * 4);
    *puVar5 = *puVar4;
    *(ulong *)(lVar6 + 0x20) = uVar7 + 1;
    return puVar5;
  }
  puVar3 = (undefined4 *)0x10;
  ___cxa_allocate_exception();
  func_0x000104c4f71c();
  puVar4 = puVar3;
  puVar5 = (undefined4 *)PTR___ZTISt12length_error_110352238;
  ___cxa_throw(puVar3,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
  ___cxa_free_exception(puVar3);
  __Unwind_Resume();
  if (puVar4 != puVar5) {
    *(undefined8 *)(puVar4 + 8) = 0;
    if (*(long *)(puVar5 + 8) != 0) {
      lVar6 = *(long *)(puVar5 + 8) << 2;
      puVar3 = puVar5;
      do {
        FUN_10928bde4(puVar4,puVar3);
        puVar3 = puVar3 + 1;
        lVar6 = lVar6 + -4;
      } while (lVar6 != 0);
    }
    *(undefined8 *)(puVar5 + 8) = 0;
  }
  return puVar4;
}



/* Entry: 10928bcfc; end: 10928bd7b;  */

undefined4 * FUN_10928bcfc(long param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 0x20);
  if (uVar4 < 8) {
    puVar2 = (undefined4 *)(param_1 + uVar4 * 4);
    *puVar2 = *param_2;
    *(ulong *)(param_1 + 0x20) = uVar4 + 1;
    return puVar2;
  }
  puVar1 = (undefined4 *)0x10;
  ___cxa_allocate_exception();
  func_0x000104c4f71c();
  puVar2 = puVar1;
  puVar3 = (undefined4 *)PTR___ZTISt12length_error_110352238;
  ___cxa_throw(puVar1,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
  ___cxa_free_exception(puVar1);
  __Unwind_Resume();
  if (puVar2 != puVar3) {
    *(undefined8 *)(puVar2 + 8) = 0;
    if (*(long *)(puVar3 + 8) != 0) {
      lVar5 = *(long *)(puVar3 + 8) << 2;
      puVar1 = puVar3;
      do {
        FUN_10928bde4(puVar2,puVar1);
        puVar1 = puVar1 + 1;
        lVar5 = lVar5 + -4;
      } while (lVar5 != 0);
    }
    *(undefined8 *)(puVar3 + 8) = 0;
  }
  return puVar2;
}



/* Entry: 10928bd7c; end: 10928bde3;  */

long FUN_10928bd7c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_1 != param_2) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (*(long *)(param_2 + 0x20) != 0) {
      lVar2 = *(long *)(param_2 + 0x20) << 2;
      lVar1 = param_2;
      do {
        FUN_10928bde4(param_1,lVar1);
        lVar1 = lVar1 + 4;
        lVar2 = lVar2 + -4;
      } while (lVar2 != 0);
    }
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  return param_1;
}



/* Entry: 10928bde4; end: 10928be63;  */

/* WARNING: Removing unreachable block (ram,0x00010928c1f0) */
/* WARNING: Removing unreachable block (ram,0x00010928c1f4) */
/* WARNING: Removing unreachable block (ram,0x00010928c210) */

undefined8 ***** FUN_10928bde4(long param_1,undefined4 *param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  undefined8 ****ppppuVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  undefined8 *****pppppuVar12;
  uint uVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong *puVar20;
  ulong *puVar21;
  undefined8 *****pppppuVar22;
  ulong *puVar23;
  undefined8 uVar24;
  undefined8 *****pppppuVar25;
  long *plVar26;
  long *plVar27;
  long lVar28;
  long lStack_d8;
  long lStack_d0;
  long *plStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 ****ppppuStack_98;
  undefined8 ****ppppuStack_90;
  undefined8 ****ppppuStack_88;
  
  uVar15 = *(ulong *)(param_1 + 0x20);
  if (uVar15 < 8) {
    pppppuVar12 = (undefined8 *****)(param_1 + uVar15 * 4);
    *(undefined4 *)pppppuVar12 = *param_2;
    *(ulong *)(param_1 + 0x20) = uVar15 + 1;
    return pppppuVar12;
  }
  lVar10 = 0x10;
  ___cxa_allocate_exception();
  func_0x000104c4f71c();
  lVar11 = lVar10;
  puVar14 = PTR___ZTISt12length_error_110352238;
  ___cxa_throw(lVar10,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
  uVar13 = (uint)puVar14;
  ___cxa_free_exception(lVar10);
  __Unwind_Resume();
  ppppuStack_98 = (undefined8 *****)0x0;
  ppppuStack_90 = (undefined8 *****)0x0;
  ppppuStack_88 = (undefined8 *****)0x0;
  pppppuVar12 = (undefined8 *****)ppppuStack_90;
  for (plVar27 = *(long **)(lVar11 + 0xa0); ppppuStack_90 = pppppuVar12, plVar27 != (long *)0x0;
      plVar27 = (long *)*plVar27) {
    uVar24 = plVar27[0xc];
    uVar3 = *(undefined4 *)(plVar27 + 2);
    if (pppppuVar12 < ppppuStack_88) {
      pppppuVar22 = pppppuVar12 + 1;
      *(int *)pppppuVar12 = (int)uVar24;
      *(undefined4 *)((long)pppppuVar12 + 4) = uVar3;
    }
    else {
      lVar10 = (long)pppppuVar12 - (long)ppppuStack_98;
      uVar15 = (lVar10 >> 3) + 1;
      if (uVar15 >> 0x3d != 0) {
        FUN_10928ca64();
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10928c270);
        (*pcVar9)();
      }
      uVar16 = (long)ppppuStack_88 - (long)ppppuStack_98 >> 2;
      if (uVar16 <= uVar15) {
        uVar16 = uVar15;
      }
      if (0x7ffffffffffffff7 < (ulong)((long)ppppuStack_88 - (long)ppppuStack_98)) {
        uVar16 = 0x1fffffffffffffff;
      }
      pppppuVar12 = &ppppuStack_98;
      FUN_10928ca78();
      ppppuVar8 = ppppuStack_98;
      lVar28 = (long)ppppuStack_90 - (long)ppppuStack_98;
      puVar2 = (undefined4 *)((long)pppppuVar12 + lVar10);
      *puVar2 = (int)uVar24;
      puVar2[1] = uVar3;
      pppppuVar22 = (undefined8 *****)(puVar2 + 2);
      pppppuVar25 = (undefined8 *****)((long)puVar2 - lVar28);
      _memcpy(pppppuVar25,ppppuVar8);
      bVar6 = (undefined8 *****)ppppuStack_98 != (undefined8 *****)0x0;
      ppppuStack_98 = pppppuVar25;
      ppppuStack_88 = pppppuVar12 + uVar16;
      if (bVar6) {
        ppppuStack_90 = pppppuVar22;
        __ZdlPv();
      }
    }
    pppppuVar12 = pppppuVar22;
  }
  lVar10 = 0;
  if (pppppuVar12 != (undefined8 *****)ppppuStack_98) {
    lVar10 = LZCOUNT((long)pppppuVar12 - (long)ppppuStack_98 >> 3) * -2 + 0x7e;
  }
  func_0x0001078e575c(ppppuStack_98,pppppuVar12,&lStack_c0,lVar10,1);
  ppppuVar8 = ppppuStack_90;
  uStack_b8 = 0;
  lStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_a0 = 0x3f800000;
  for (pppppuVar12 = (undefined8 *****)ppppuStack_98; pppppuVar12 != (undefined8 *****)ppppuVar8;
      pppppuVar12 = pppppuVar12 + 1) {
    lVar10 = lVar11 + 0x90;
    FUN_10928d2c8(lVar10,*(undefined4 *)((long)pppppuVar12 + 4));
    uVar4 = *(uint *)(lVar11 + 0x88);
    while ((uVar13 < uVar4 && (*(long *)(lVar10 + 0x58) != 0))) {
      plVar27 = (long *)(*(long *)(*(long *)(lVar10 + 0x38) + (*(ulong *)(lVar10 + 0x50) >> 8) * 8)
                        + (*(ulong *)(lVar10 + 0x50) & 0xff) * 0x10);
      plVar26 = (long *)plVar27[1];
      if (plVar26 == (long *)0x0) {
        func_0x00010928dafc(lVar10 + 0x30);
      }
      else {
        lVar28 = *plVar27;
        plVar27 = plVar26 + 2;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar6) {
            *plVar27 = *plVar27 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        plVar27 = plVar26;
        __ZNSt3__119__shared_weak_count4lockEv();
        plStack_c8 = plVar27;
        if (plVar27 != (long *)0x0) {
          lStack_d0 = lVar28;
          if (lVar28 != 0) {
            *(int *)(lVar11 + 0x88) = *(int *)(lVar11 + 0x88) - *(int *)(lVar28 + 0x28);
            lStack_d8 = lVar28;
            FUN_10928d6b4(&lStack_c0,&lStack_d8,&lStack_d8);
          }
          plVar1 = plVar27 + 1;
          do {
            lVar28 = *plVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar28 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar28 == 0) {
            (**(code **)(*plVar27 + 0x10))(plVar27);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
          }
        }
        func_0x00010928dafc(lVar10 + 0x30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
      }
      uVar4 = *(uint *)(lVar11 + 0x88);
    }
  }
  puVar21 = *(ulong **)(lVar11 + 0x70);
  puVar23 = *(ulong **)(lVar11 + 0x78);
  if (puVar21 != puVar23) {
    do {
      if (uStack_b8 != 0) {
        uVar15 = *puVar21;
        uVar16 = ((ulong)(uint)((int)uVar15 << 3) + 8 ^ uVar15 >> 0x20) * -0x622015f714c7d297;
        uVar16 = (uVar15 >> 0x20 ^ uVar16 >> 0x2f ^ uVar16) * -0x622015f714c7d297;
        uVar16 = (uVar16 ^ uVar16 >> 0x2f) * -0x622015f714c7d297;
        uVar17 = uStack_b8 - 1;
        if ((uStack_b8 & uVar17) == 0) {
          uVar18 = uVar16 & uVar17;
        }
        else {
          uVar18 = uVar16;
          if (uStack_b8 <= uVar16) {
            uVar18 = 0;
            if (uStack_b8 != 0) {
              uVar18 = uVar16 / uStack_b8;
            }
            uVar18 = uVar16 - uVar18 * uStack_b8;
          }
        }
        plVar27 = *(long **)(lStack_c0 + uVar18 * 8);
        if (plVar27 != (long *)0x0) {
          do {
            while( true ) {
              plVar27 = (long *)*plVar27;
              if (plVar27 == (long *)0x0) goto LAB_10928c174;
              uVar19 = plVar27[1];
              if (uVar16 - uVar19 != 0) break;
              if (plVar27[2] == uVar15) {
                FUN_10928c2bc(puVar21);
                goto LAB_10928c174;
              }
            }
            if ((uStack_b8 & uVar17) == 0) {
              uVar19 = uVar19 & uVar17;
            }
            else if (uStack_b8 <= uVar19) {
              uVar7 = 0;
              if (uStack_b8 != 0) {
                uVar7 = uVar19 / uStack_b8;
              }
              uVar19 = uVar19 - uVar7 * uStack_b8;
            }
          } while (uVar19 == uVar18);
        }
      }
LAB_10928c174:
      puVar21 = puVar21 + 2;
    } while (puVar21 != puVar23);
    puVar21 = *(ulong **)(lVar11 + 0x70);
    puVar23 = *(ulong **)(lVar11 + 0x78);
  }
  puVar20 = puVar21;
  if (puVar21 != puVar23) {
    do {
      puVar21 = puVar20;
      if (*puVar20 == 0) break;
      puVar20 = puVar20 + 2;
      puVar21 = puVar23;
    } while (puVar20 != puVar23);
    if ((puVar23 != puVar21) && (puVar20 = puVar21 + 2, puVar20 != puVar23)) {
      do {
        if (*puVar20 != 0) {
          FUN_10928c904(puVar21,puVar20);
          puVar21 = puVar21 + 2;
        }
        puVar20 = puVar20 + 2;
      } while (puVar20 != puVar23);
      puVar23 = *(ulong **)(lVar11 + 0x78);
    }
  }
  if (puVar21 != puVar23) {
    while (puVar23 != puVar21) {
      puVar23 = puVar23 + -2;
      FUN_109232a8c(puVar23);
    }
    *(ulong **)(lVar11 + 0x78) = puVar21;
  }
  func_0x00010928d280(&lStack_c0);
  if ((undefined8 *****)ppppuStack_98 != (undefined8 *****)0x0) {
    ppppuStack_90 = ppppuStack_98;
    __ZdlPv();
  }
  return (undefined8 *****)ppppuStack_98;
}



/* Entry: 10928be64; end: 10928c2bb;  */

/* WARNING: Removing unreachable block (ram,0x00010928c1f0) */
/* WARNING: Removing unreachable block (ram,0x00010928c1f4) */
/* WARNING: Removing unreachable block (ram,0x00010928c210) */

void FUN_10928be64(long param_1,uint param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  undefined8 ****ppppuVar8;
  code *pcVar9;
  undefined8 *****pppppuVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong *puVar17;
  long lVar18;
  undefined8 *****pppppuVar19;
  ulong *puVar20;
  undefined8 uVar21;
  undefined8 *****pppppuVar22;
  long *plVar23;
  long *plVar24;
  long lVar25;
  long lStack_b8;
  long lStack_b0;
  long *plStack_a8;
  long lStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 ****ppppuStack_78;
  undefined8 ****ppppuStack_70;
  undefined8 ****ppppuStack_68;
  
  ppppuStack_78 = (undefined8 *****)0x0;
  ppppuStack_70 = (undefined8 *****)0x0;
  ppppuStack_68 = (undefined8 *****)0x0;
  pppppuVar10 = (undefined8 *****)ppppuStack_70;
  for (plVar24 = *(long **)(param_1 + 0xa0); ppppuStack_70 = pppppuVar10, plVar24 != (long *)0x0;
      plVar24 = (long *)*plVar24) {
    uVar21 = plVar24[0xc];
    uVar3 = *(undefined4 *)(plVar24 + 2);
    if (pppppuVar10 < ppppuStack_68) {
      pppppuVar19 = pppppuVar10 + 1;
      *(int *)pppppuVar10 = (int)uVar21;
      *(undefined4 *)((long)pppppuVar10 + 4) = uVar3;
    }
    else {
      lVar18 = (long)pppppuVar10 - (long)ppppuStack_78;
      uVar11 = (lVar18 >> 3) + 1;
      if (uVar11 >> 0x3d != 0) {
        FUN_10928ca64();
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10928c270);
        (*pcVar9)();
      }
      uVar12 = (long)ppppuStack_68 - (long)ppppuStack_78 >> 2;
      if (uVar12 <= uVar11) {
        uVar12 = uVar11;
      }
      if (0x7ffffffffffffff7 < (ulong)((long)ppppuStack_68 - (long)ppppuStack_78)) {
        uVar12 = 0x1fffffffffffffff;
      }
      pppppuVar10 = &ppppuStack_78;
      FUN_10928ca78();
      ppppuVar8 = ppppuStack_78;
      lVar25 = (long)ppppuStack_70 - (long)ppppuStack_78;
      puVar2 = (undefined4 *)((long)pppppuVar10 + lVar18);
      *puVar2 = (int)uVar21;
      puVar2[1] = uVar3;
      pppppuVar19 = (undefined8 *****)(puVar2 + 2);
      pppppuVar22 = (undefined8 *****)((long)puVar2 - lVar25);
      _memcpy(pppppuVar22,ppppuVar8);
      bVar6 = (undefined8 *****)ppppuStack_78 != (undefined8 *****)0x0;
      ppppuStack_78 = pppppuVar22;
      ppppuStack_68 = pppppuVar10 + uVar12;
      if (bVar6) {
        ppppuStack_70 = pppppuVar19;
        __ZdlPv();
      }
    }
    pppppuVar10 = pppppuVar19;
  }
  lVar18 = 0;
  if (pppppuVar10 != (undefined8 *****)ppppuStack_78) {
    lVar18 = LZCOUNT((long)pppppuVar10 - (long)ppppuStack_78 >> 3) * -2 + 0x7e;
  }
  func_0x0001078e575c(ppppuStack_78,pppppuVar10,&lStack_a0,lVar18,1);
  ppppuVar8 = ppppuStack_70;
  uStack_98 = 0;
  lStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_80 = 0x3f800000;
  for (pppppuVar10 = (undefined8 *****)ppppuStack_78; pppppuVar10 != (undefined8 *****)ppppuVar8;
      pppppuVar10 = pppppuVar10 + 1) {
    lVar18 = param_1 + 0x90;
    FUN_10928d2c8(lVar18,*(undefined4 *)((long)pppppuVar10 + 4));
    uVar4 = *(uint *)(param_1 + 0x88);
    while ((param_2 < uVar4 && (*(long *)(lVar18 + 0x58) != 0))) {
      plVar24 = (long *)(*(long *)(*(long *)(lVar18 + 0x38) + (*(ulong *)(lVar18 + 0x50) >> 8) * 8)
                        + (*(ulong *)(lVar18 + 0x50) & 0xff) * 0x10);
      plVar23 = (long *)plVar24[1];
      if (plVar23 == (long *)0x0) {
        func_0x00010928dafc(lVar18 + 0x30);
      }
      else {
        lVar25 = *plVar24;
        plVar24 = plVar23 + 2;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar6) {
            *plVar24 = *plVar24 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        plVar24 = plVar23;
        __ZNSt3__119__shared_weak_count4lockEv();
        plStack_a8 = plVar24;
        if (plVar24 != (long *)0x0) {
          lStack_b0 = lVar25;
          if (lVar25 != 0) {
            *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) - *(int *)(lVar25 + 0x28);
            lStack_b8 = lVar25;
            FUN_10928d6b4(&lStack_a0,&lStack_b8,&lStack_b8);
          }
          plVar1 = plVar24 + 1;
          do {
            lVar25 = *plVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar25 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar25 == 0) {
            (**(code **)(*plVar24 + 0x10))(plVar24);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
          }
        }
        func_0x00010928dafc(lVar18 + 0x30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
      }
      uVar4 = *(uint *)(param_1 + 0x88);
    }
  }
  puVar17 = *(ulong **)(param_1 + 0x70);
  puVar20 = *(ulong **)(param_1 + 0x78);
  if (puVar17 != puVar20) {
    do {
      if (uStack_98 != 0) {
        uVar11 = *puVar17;
        uVar12 = ((ulong)(uint)((int)uVar11 << 3) + 8 ^ uVar11 >> 0x20) * -0x622015f714c7d297;
        uVar12 = (uVar11 >> 0x20 ^ uVar12 >> 0x2f ^ uVar12) * -0x622015f714c7d297;
        uVar12 = (uVar12 ^ uVar12 >> 0x2f) * -0x622015f714c7d297;
        uVar13 = uStack_98 - 1;
        if ((uStack_98 & uVar13) == 0) {
          uVar14 = uVar12 & uVar13;
        }
        else {
          uVar14 = uVar12;
          if (uStack_98 <= uVar12) {
            uVar14 = 0;
            if (uStack_98 != 0) {
              uVar14 = uVar12 / uStack_98;
            }
            uVar14 = uVar12 - uVar14 * uStack_98;
          }
        }
        plVar24 = *(long **)(lStack_a0 + uVar14 * 8);
        if (plVar24 != (long *)0x0) {
          do {
            while( true ) {
              plVar24 = (long *)*plVar24;
              if (plVar24 == (long *)0x0) goto LAB_10928c174;
              uVar15 = plVar24[1];
              if (uVar12 - uVar15 != 0) break;
              if (plVar24[2] == uVar11) {
                FUN_10928c2bc(puVar17);
                goto LAB_10928c174;
              }
            }
            if ((uStack_98 & uVar13) == 0) {
              uVar15 = uVar15 & uVar13;
            }
            else if (uStack_98 <= uVar15) {
              uVar7 = 0;
              if (uStack_98 != 0) {
                uVar7 = uVar15 / uStack_98;
              }
              uVar15 = uVar15 - uVar7 * uStack_98;
            }
          } while (uVar15 == uVar14);
        }
      }
LAB_10928c174:
      puVar17 = puVar17 + 2;
    } while (puVar17 != puVar20);
    puVar17 = *(ulong **)(param_1 + 0x70);
    puVar20 = *(ulong **)(param_1 + 0x78);
  }
  puVar16 = puVar17;
  if (puVar17 != puVar20) {
    do {
      puVar17 = puVar16;
      if (*puVar16 == 0) break;
      puVar16 = puVar16 + 2;
      puVar17 = puVar20;
    } while (puVar16 != puVar20);
    if ((puVar20 != puVar17) && (puVar16 = puVar17 + 2, puVar16 != puVar20)) {
      do {
        if (*puVar16 != 0) {
          FUN_10928c904(puVar17,puVar16);
          puVar17 = puVar17 + 2;
        }
        puVar16 = puVar16 + 2;
      } while (puVar16 != puVar20);
      puVar20 = *(ulong **)(param_1 + 0x78);
    }
  }
  if (puVar17 != puVar20) {
    while (puVar20 != puVar17) {
      puVar20 = puVar20 + -2;
      FUN_109232a8c(puVar20);
    }
    *(ulong **)(param_1 + 0x78) = puVar17;
  }
  func_0x00010928d280(&lStack_a0);
  if ((undefined8 *****)ppppuStack_78 != (undefined8 *****)0x0) {
    ppppuStack_70 = ppppuStack_78;
    __ZdlPv();
  }
  return;
}



/* Entry: 10928c2bc; end: 10928c317;  */

void FUN_10928c2bc(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 10928c318; end: 10928c903;  */

/* WARNING: Removing unreachable block (ram,0x00010928c800) */
/* WARNING: Removing unreachable block (ram,0x00010928c80c) */

void FUN_10928c318(long *param_1,long *param_2,ulong param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  code *pcVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  int iVar13;
  bool bVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  int iStack_c4;
  undefined8 uStack_c0;
  long *plStack_b8;
  ulong uStack_a8;
  undefined8 uStack_a0;
  int iStack_94;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 *puStack_78;
  long *plStack_70;
  
  iVar13 = (int)param_3;
  iStack_c4 = iVar13;
  __ZNSt3__15mutex4lockEv(param_2 + 3);
  plVar12 = param_2 + 0x12;
  FUN_10928d2c8(plVar12,param_3,&iStack_c4);
  if (plVar12[0xb] == 0) {
    iStack_94 = iVar13;
    if (*(uint *)(param_2 + 0xc) < *(uint *)(param_2 + 0x11)) {
      FUN_10928be64(param_2,*(undefined4 *)((long)param_2 + 0x5c));
    }
    plVar8 = param_2 + 0x12;
    FUN_10928d2c8(plVar8,param_3,&iStack_94);
    puVar17 = (undefined8 *)plVar8[3];
    puVar18 = (undefined8 *)plVar8[4];
    puVar21 = puVar17;
    if (puVar17 != puVar18) {
      do {
        if ((puVar17[1] != 0) && (*(long *)(puVar17[1] + 8) == 0)) {
          FUN_10928cd60(plVar8 + 6,puVar17);
          lVar9 = puVar17[1];
          *puVar17 = 0;
          puVar17[1] = 0;
          if (lVar9 != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
        puVar17 = puVar17 + 2;
      } while (puVar17 != puVar18);
      puVar18 = (undefined8 *)plVar8[4];
      puVar17 = (undefined8 *)plVar8[3];
      puVar21 = (undefined8 *)plVar8[3];
    }
    do {
      puVar20 = puVar17;
      if (puVar20 == puVar18) goto LAB_10928c480;
      puVar17 = puVar20 + 2;
    } while ((puVar20[1] != 0) && (puVar21 = puVar18, *(long *)(puVar20[1] + 8) != -1));
    puVar21 = puVar20;
    if ((puVar20 != puVar18) && (puVar17 != puVar18)) {
      do {
        lVar9 = puVar17[1];
        if ((lVar9 != 0) && (*(long *)(lVar9 + 8) != -1)) {
          uVar15 = *puVar17;
          *puVar17 = 0;
          puVar17[1] = 0;
          lVar19 = puVar20[1];
          *puVar20 = uVar15;
          puVar20[1] = lVar9;
          if (lVar19 != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          puVar20 = puVar20 + 2;
        }
        puVar17 = puVar17 + 2;
      } while (puVar17 != puVar18);
      puVar18 = (undefined8 *)plVar8[4];
      puVar21 = puVar20;
    }
LAB_10928c480:
    FUN_10928c9a0(plVar8 + 3,puVar21,puVar18);
    if (plVar8[0xb] == 0) {
      plVar11 = param_2 + 0xe;
      bVar14 = false;
      do {
        uStack_a0 = *(undefined8 *)((long)param_2 + 100);
        uStack_a8 = param_3 & 0xffffffff;
        (**(code **)(*(long *)param_2[2] + 0x70))(&uStack_c0,(long *)param_2[2],&uStack_a8);
        plVar3 = plStack_b8;
        uVar15 = uStack_c0;
        if (plStack_b8 != (long *)0x0) {
          plVar1 = plStack_b8 + 2;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = *plVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        lVar9 = plVar8[7];
        uVar2 = 0;
        if (plVar8[8] != lVar9) {
          uVar2 = (plVar8[8] - lVar9) * 0x20 - 1;
        }
        lVar19 = plVar8[0xb];
        uVar16 = lVar19 + plVar8[10];
        if (uVar2 == uVar16) {
          FUN_10928cdf8(plVar8 + 6);
          lVar9 = plVar8[7];
          lVar19 = plVar8[0xb];
          uVar16 = lVar19 + plVar8[10];
        }
        puVar17 = (undefined8 *)(*(long *)(lVar9 + (uVar16 >> 8) * 8) + (uVar16 & 0xff) * 0x10);
        puVar17[1] = plVar3;
        *puVar17 = uVar15;
        plVar8[0xb] = lVar19 + 1;
        puVar17 = (undefined8 *)param_2[0xf];
        puVar18 = (undefined8 *)param_2[0x10];
        if (puVar17 < puVar18) {
          puVar17[1] = plStack_b8;
          *puVar17 = uStack_c0;
          param_2[0xf] = (long)(puVar17 + 2);
          *(int *)(param_2 + 0x11) = (int)param_2[0x11] + iVar13;
        }
        else {
          lVar9 = *plVar11;
          lVar19 = (long)puVar17 - lVar9;
          uVar2 = (lVar19 >> 4) + 1;
          if (uVar2 >> 0x3c != 0) {
            FUN_10928caac();
LAB_10928c88c:
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10928c890);
            (*pcVar7)();
          }
          uVar16 = (long)puVar18 - lVar9 >> 3;
          if (uVar16 <= uVar2) {
            uVar16 = uVar2;
          }
          if (0x7fffffffffffffef < (ulong)((long)puVar18 - lVar9)) {
            uVar16 = 0xfffffffffffffff;
          }
          plStack_70 = plVar11;
          if (uVar16 >> 0x3c != 0) {
            func_0x000104c4f740();
            goto LAB_10928c88c;
          }
          lVar10 = uVar16 << 4;
          __Znwm();
          puVar17 = (undefined8 *)(lVar10 + lVar19);
          puVar17[1] = plStack_b8;
          *puVar17 = uStack_c0;
          uStack_c0 = 0;
          plStack_b8 = (long *)0x0;
          _memcpy(puVar17 + (lVar19 >> 4) * -2,lVar9,lVar19);
          param_2[0xe] = (long)(puVar17 + (lVar19 >> 4) * -2);
          param_2[0xf] = (long)(puVar17 + 2);
          param_2[0x10] = lVar10 + uVar16 * 0x10;
          lStack_90 = lVar9;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          puStack_78 = puVar18;
          FUN_10928cac0(&lStack_90);
          plVar3 = plStack_b8;
          param_2[0xf] = (long)(puVar17 + 2);
          *(int *)(param_2 + 0x11) = (int)param_2[0x11] + iVar13;
          if (plStack_b8 != (long *)0x0) {
            plVar1 = plStack_b8 + 1;
            do {
              lVar9 = *plVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = lVar9 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar9 == 0) {
              (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
            }
          }
        }
        bVar5 = !bVar14;
        bVar14 = true;
      } while (bVar5);
    }
  }
  plVar12[0xc] = plVar12[0xc] + 1;
  plVar8 = (long *)(*(long *)(plVar12[7] + ((ulong)plVar12[10] >> 8) * 8) +
                   (plVar12[10] & 0xffU) * 0x10);
  plVar11 = (long *)plVar8[1];
  if (plVar11 == (long *)0x0) {
    lVar9 = 0;
    plVar11 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar11 == (long *)0x0) {
      lVar9 = 0;
    }
    else {
      lVar9 = *plVar8;
    }
  }
  func_0x00010928dafc(plVar12 + 6);
  __ZNSt3__15mutex6unlockEv(param_2 + 3);
  lVar19 = *param_2;
  lVar10 = param_2[1];
  if (lVar10 != 0) {
    plVar12 = (long *)(lVar10 + 0x10);
    do {
      cVar4 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar14) {
        *plVar12 = *plVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar6 = param_2[0xb];
  if (plVar11 != (long *)0x0) {
    plVar12 = plVar11 + 2;
    do {
      cVar4 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar14) {
        *plVar12 = *plVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = lVar9;
  plVar12 = (long *)0x48;
  __Znwm();
  plVar8 = plVar12 + 1;
  *plVar8 = 0;
  *plVar12 = (long)&PTR_FUN_110ae74f8;
  plVar12[2] = 0;
  plVar12[3] = lVar9;
  plVar12[4] = lVar19;
  plVar12[5] = lVar10;
  *(int *)(plVar12 + 6) = (int)lVar6;
  plVar12[7] = lVar9;
  plVar12[8] = (long)plVar11;
  param_1[1] = (long)plVar12;
  if (lVar9 != 0) {
    if (*(long *)(lVar9 + 0x10) == 0) {
      do {
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar14) {
          *plVar8 = *plVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar3 = plVar12 + 2;
      do {
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar14) {
          *plVar3 = *plVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      *(long *)(lVar9 + 8) = lVar9;
      *(long **)(lVar9 + 0x10) = plVar12;
    }
    else {
      if (*(long *)(*(long *)(lVar9 + 0x10) + 8) != -1) goto LAB_10928c7f8;
      do {
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar14) {
          *plVar8 = *plVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar3 = plVar12 + 2;
      do {
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar14) {
          *plVar3 = *plVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      *(long *)(lVar9 + 8) = lVar9;
      *(long **)(lVar9 + 0x10) = plVar12;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      lVar9 = *plVar8;
      cVar4 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar14) {
        *plVar8 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
LAB_10928c7f8:
  if (plVar11 != (long *)0x0) {
    plVar12 = plVar11 + 1;
    do {
      lVar9 = *plVar12;
      cVar4 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar14) {
        *plVar12 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  return;
}



/* Entry: 10928c904; end: 10928c99f;  */

undefined8 * FUN_10928c904(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10928c9a0; end: 10928ca63;  */

long FUN_10928c9a0(long *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (param_3 != param_2) {
    lVar4 = param_1[1];
    lVar6 = param_2;
    if (param_3 != lVar4) {
      lVar5 = *param_1;
      lVar7 = -lVar5;
      lVar6 = lVar5 + param_2;
      param_3 = lVar5 + param_3;
      do {
        puVar1 = (undefined8 *)(lVar6 + lVar7);
        puVar2 = (undefined8 *)(param_3 + lVar7);
        uVar9 = puVar2[1];
        uVar8 = *puVar2;
        *puVar2 = 0;
        puVar2[1] = 0;
        lVar3 = puVar1[1];
        puVar1[1] = uVar9;
        *puVar1 = uVar8;
        if (lVar3 != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        lVar6 = lVar6 + 0x10;
        param_3 = param_3 + 0x10;
      } while (param_3 + lVar7 != lVar4);
      lVar4 = param_1[1];
      lVar6 = lVar6 - lVar5;
    }
    for (; lVar4 != lVar6; lVar4 = lVar4 + -0x10) {
      if (*(long *)(lVar4 + -8) != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    param_1[1] = lVar6;
  }
  return param_2;
}



/* Entry: 10928ca64; end: 10928ca77;  */

undefined1  [16] FUN_10928ca64(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
    __Znwm(lVar1);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  func_0x000104c4f740();
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    plVar2[2] = lVar3 + -0x10;
    FUN_109232a8c();
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar2;
  return auVar5;
}



/* Entry: 10928ca78; end: 10928caab;  */

undefined1  [16] FUN_10928ca78(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
    __Znwm(lVar1);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  func_0x000104c4f740();
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    plVar2[2] = lVar3 + -0x10;
    FUN_109232a8c();
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar2;
  return auVar5;
}



/* Entry: 10928caac; end: 10928cabf;  */

long * FUN_10928caac(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    plVar2[2] = lVar3 + -0x10;
    FUN_109232a8c();
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 10928cac0; end: 10928cb0b;  */

long * FUN_10928cac0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    FUN_109232a8c();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10928cb0c; end: 10928cb67;  */

void FUN_10928cb0c(undefined8 param_1,long *param_2)

{
  long lVar1;
  long *plStack_38;
  
  while (param_2 != (long *)0x0) {
    lVar1 = *param_2;
    FUN_10928cb68(param_2 + 6);
    plStack_38 = param_2 + 3;
    func_0x00010928ccd8(&plStack_38);
    __ZdlPv(param_2);
    param_2 = (long *)lVar1;
  }
  return;
}



/* Entry: 10928cb68; end: 10928cc8b;  */

long * FUN_10928cb68(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  puVar5 = (undefined8 *)param_1[1];
  puVar6 = puVar5;
  if ((undefined8 *)param_1[2] != puVar5) {
    uVar4 = param_1[4];
    plVar7 = puVar5 + (uVar4 >> 8);
    lVar2 = *plVar7;
    lVar3 = lVar2 + (uVar4 & 0xff) * 0x10;
    lVar1 = puVar5[param_1[5] + uVar4 >> 8] + (param_1[5] + uVar4 & 0xff) * 0x10;
    puVar6 = (undefined8 *)param_1[2];
    if (lVar3 != lVar1) {
      do {
        if (*(long *)(lVar3 + 8) != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          lVar2 = *plVar7;
        }
        lVar3 = lVar3 + 0x10;
        if (lVar3 - lVar2 == 0x1000) {
          plVar7 = plVar7 + 1;
          lVar2 = *plVar7;
          lVar3 = lVar2;
        }
      } while (lVar3 != lVar1);
      puVar5 = (undefined8 *)param_1[1];
      puVar6 = (undefined8 *)param_1[2];
    }
  }
  param_1[5] = 0;
  lVar3 = (long)puVar6 - (long)puVar5;
  while (uVar4 = lVar3 >> 3, 2 < uVar4) {
    __ZdlPv(*puVar5);
    puVar6 = (undefined8 *)param_1[2];
    puVar5 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar5;
    lVar3 = (long)puVar6 - (long)puVar5;
  }
  if (uVar4 == 1) {
    lVar3 = 0x80;
  }
  else {
    if (uVar4 != 2) goto LAB_10928cc68;
    lVar3 = 0x100;
  }
  param_1[4] = lVar3;
LAB_10928cc68:
  for (; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    __ZdlPv(*puVar5);
  }
  lVar3 = param_1[2];
  if (lVar3 != param_1[1]) {
    param_1[2] = lVar3 + ((param_1[1] - lVar3) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10928cc8c; end: 10928cd17;  */

long * FUN_10928cc8c(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 != param_1[1]) {
    param_1[2] = lVar1 + ((param_1[1] - lVar1) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10928cd18; end: 10928cd5f;  */

void FUN_10928cd18(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x10) {
    if (*(long *)(lVar2 + -8) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 10928cd60; end: 10928cdf7;  */

void FUN_10928cd60(long param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  lVar7 = *(long *)(param_1 + 8);
  uVar2 = 0;
  if (*(long *)(param_1 + 0x10) != lVar7) {
    uVar2 = (*(long *)(param_1 + 0x10) - lVar7) * 0x20 - 1;
  }
  lVar6 = *(long *)(param_1 + 0x28);
  uVar9 = lVar6 + *(long *)(param_1 + 0x20);
  if (uVar2 == uVar9) {
    FUN_10928cdf8(param_1);
    lVar7 = *(long *)(param_1 + 8);
    lVar6 = *(long *)(param_1 + 0x28);
    uVar9 = lVar6 + *(long *)(param_1 + 0x20);
  }
  lVar8 = param_2[1];
  uVar10 = *param_2;
  puVar5 = (undefined8 *)(*(long *)(lVar7 + (uVar9 >> 8) * 8) + (uVar9 & 0xff) * 0x10);
  puVar5[1] = param_2[1];
  *puVar5 = uVar10;
  if (lVar8 != 0) {
    plVar1 = (long *)(lVar8 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar6 = *(long *)(param_1 + 0x28);
  }
  *(long *)(param_1 + 0x28) = lVar6 + 1;
  return;
}



/* Entry: 10928cdf8; end: 10928d107;  */

void FUN_10928cdf8(ulong *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  
  if (0xff < param_1[4]) {
    param_1[4] = param_1[4] - 0x100;
    puVar10 = (undefined8 *)param_1[1] + 1;
    uVar3 = *(undefined8 *)param_1[1];
LAB_10928ce30:
    param_1[1] = (ulong)puVar10;
    puVar10 = (undefined8 *)param_1[2];
    if (puVar10 == (undefined8 *)param_1[3]) {
      uVar15 = *param_1;
      uVar5 = param_1[1];
      if (uVar5 < uVar15 || uVar5 - uVar15 == 0) {
        uVar8 = (long)((long)puVar10 - uVar15) >> 2;
        if ((long)puVar10 - uVar15 == 0) {
          uVar8 = 1;
        }
        uVar15 = uVar8;
        FUN_10928d204();
        puVar11 = (undefined8 *)(uVar15 + (uVar8 >> 2) * 8);
        lVar12 = param_1[2] - (long)param_1[1];
        puVar10 = puVar11;
        if (lVar12 != 0) {
          puVar10 = (undefined8 *)((long)puVar11 + lVar12);
          puVar7 = (undefined8 *)param_1[1];
          puVar9 = puVar11;
          do {
            *puVar9 = *puVar7;
            lVar12 = lVar12 + -8;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          } while (lVar12 != 0);
        }
        uVar8 = *param_1;
        *param_1 = uVar15;
        param_1[1] = (ulong)puVar11;
        param_1[2] = (ulong)puVar10;
        param_1[3] = uVar15 + uVar5 * 8;
        if (uVar8 != 0) {
          __ZdlPv(uVar8);
          puVar10 = (undefined8 *)param_1[2];
        }
      }
      else {
        lVar12 = (((long)(uVar5 - uVar15) >> 3) + 1) / 2;
        lVar13 = uVar5 + lVar12 * -8;
        lVar1 = (long)puVar10 - uVar5;
        if (lVar1 != 0) {
          _memmove(lVar13,uVar5,lVar1);
          uVar5 = param_1[1];
        }
        puVar10 = (undefined8 *)(lVar13 + lVar1);
        param_1[1] = uVar5 + lVar12 * -8;
        param_1[2] = (ulong)puVar10;
      }
    }
    *puVar10 = uVar3;
    param_1[2] = param_1[2] + 8;
    return;
  }
  puVar11 = (undefined8 *)param_1[2];
  puVar9 = (undefined8 *)param_1[3];
  puVar7 = (undefined8 *)*param_1;
  puVar10 = (undefined8 *)param_1[1];
  uVar15 = (long)puVar11 - (long)puVar10;
  if (uVar15 < (ulong)((long)puVar9 - (long)puVar7)) {
    uVar3 = 0x1000;
    __Znwm();
    if (puVar9 == puVar11) {
      if (puVar10 == puVar7) {
        uVar15 = (long)puVar9 - (long)puVar10 >> 2;
        if (puVar11 == puVar10) {
          uVar15 = 1;
        }
        lVar12 = uVar15 * 2;
        FUN_10928d204();
        puVar10 = (undefined8 *)(uVar15 + (lVar12 + 6U & 0xfffffffffffffff8));
        lVar12 = param_1[2] - (long)param_1[1];
        puVar11 = puVar10;
        if (lVar12 != 0) {
          puVar11 = (undefined8 *)((long)puVar10 + lVar12);
          puVar7 = (undefined8 *)param_1[1];
          puVar9 = puVar10;
          do {
            *puVar9 = *puVar7;
            lVar12 = lVar12 + -8;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          } while (lVar12 != 0);
        }
        uVar5 = *param_1;
        *param_1 = uVar15;
        param_1[1] = (ulong)puVar10;
        param_1[2] = (ulong)puVar11;
        param_1[3] = uVar15 + (long)param_2 * 8;
        if (uVar5 != 0) {
          __ZdlPv(uVar5);
          puVar10 = (undefined8 *)param_1[1];
        }
      }
      puVar10[-1] = uVar3;
      puVar10 = (undefined8 *)param_1[1];
      param_1[1] = (ulong)(puVar10 + -1);
      uVar3 = puVar10[-1];
      goto LAB_10928ce30;
    }
    *puVar11 = uVar3;
    param_1[2] = param_1[2] + 8;
  }
  else {
    puVar6 = (undefined8 *)((long)puVar9 - (long)puVar7 >> 2);
    if (puVar9 == puVar7) {
      puVar6 = (undefined8 *)0x1;
    }
    FUN_10928d204();
    uVar3 = 0x1000;
    puVar4 = param_2;
    __Znwm();
    puVar7 = (undefined8 *)((long)puVar6 + uVar15);
    puVar9 = puVar6 + (long)param_2;
    puVar2 = puVar6;
    if (uVar15 == (long)param_2 * 8) {
      if ((long)uVar15 < 1) {
        puVar7 = (undefined8 *)((long)puVar7 - (long)puVar6 >> 2);
        if (puVar11 == puVar10) {
          puVar7 = (undefined8 *)0x1;
        }
        puVar2 = puVar7;
        FUN_10928d204();
        puVar7 = puVar2 + ((ulong)puVar7 >> 2);
        puVar9 = puVar2 + (long)puVar4;
        if (puVar6 != (undefined8 *)0x0) {
          __ZdlPv(puVar6);
        }
      }
      else {
        lVar12 = ((long)puVar7 - (long)puVar6 >> 3) + 1;
        puVar7 = puVar7 + -((ulong)(lVar12 - (lVar12 >> 0x3f)) >> 1);
      }
    }
    puVar10 = puVar7 + 1;
    *puVar7 = uVar3;
    puVar11 = (undefined8 *)param_1[2];
    puVar6 = puVar2;
    if (puVar11 != (undefined8 *)param_1[1]) {
      do {
        puVar2 = puVar6;
        puVar14 = puVar7;
        if (puVar7 == puVar6) {
          if (puVar10 < puVar9) {
            lVar12 = ((long)puVar9 - (long)puVar10 >> 3) + 1;
            lVar1 = (long)puVar10 - (long)puVar6;
            lVar13 = (long)puVar10 - (long)puVar6;
            puVar10 = puVar10 + ((ulong)(lVar12 - (lVar12 >> 0x3f)) >> 1);
            puVar14 = (undefined8 *)((long)puVar10 - lVar1);
            if (lVar13 != 0) {
              _memmove(puVar14,puVar7,lVar13);
              puVar4 = puVar7;
            }
          }
          else {
            puVar14 = (undefined8 *)((long)puVar9 - (long)puVar6 >> 2);
            if ((long)puVar9 - (long)puVar6 == 0) {
              puVar14 = (undefined8 *)0x1;
            }
            puVar2 = puVar14;
            FUN_10928d204();
            puVar14 = (undefined8 *)((long)puVar2 + ((long)puVar14 * 2 + 6U & 0xfffffffffffffff8));
            lVar12 = (long)puVar10 - (long)puVar6;
            puVar10 = puVar14;
            if (lVar12 != 0) {
              puVar10 = (undefined8 *)((long)puVar14 + lVar12);
              puVar9 = puVar14;
              do {
                *puVar9 = *puVar7;
                lVar12 = lVar12 + -8;
                puVar9 = puVar9 + 1;
                puVar7 = puVar7 + 1;
              } while (lVar12 != 0);
            }
            puVar9 = puVar2 + (long)puVar4;
            if (puVar6 != (undefined8 *)0x0) {
              __ZdlPv(puVar6);
            }
          }
        }
        puVar11 = puVar11 + -1;
        puVar7 = puVar14 + -1;
        *puVar7 = *puVar11;
        puVar6 = puVar2;
      } while (puVar11 != (undefined8 *)param_1[1]);
    }
    uVar15 = *param_1;
    *param_1 = (ulong)puVar2;
    param_1[1] = (ulong)puVar7;
    param_1[2] = (ulong)puVar10;
    param_1[3] = (ulong)puVar9;
    if (uVar15 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 10928d108; end: 10928d203;  */

void FUN_10928d108(ulong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar7 = (undefined8 *)param_1[2];
  if (puVar7 == (undefined8 *)param_1[3]) {
    uVar3 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar5 = (long)((long)puVar7 - uVar3) >> 2;
      if ((long)puVar7 - uVar3 == 0) {
        uVar5 = 1;
      }
      uVar3 = uVar5;
      FUN_10928d204();
      puVar1 = (undefined8 *)(uVar3 + (uVar5 >> 2) * 8);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (undefined8 *)((long)puVar1 + lVar8);
        puVar6 = (undefined8 *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar5 = *param_1;
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar3 + uVar4 * 8;
      if (uVar5 != 0) {
        __ZdlPv(uVar5);
        puVar7 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar3) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (undefined8 *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 10928d204; end: 10928d2c7;  */

void FUN_10928d204(ulong param_1,long param_2)

{
  long lStack_48;
  
  if (param_1 >> 0x3d == 0) {
    __Znwm(param_1 << 3);
    return;
  }
  func_0x000104c4f740();
  if ((param_1 & 1) != 0) {
    FUN_10928cb68(param_2 + 0x30);
    lStack_48 = param_2 + 0x18;
    func_0x00010928ccd8(&lStack_48);
  }
  __ZdlPv(param_2);
  return;
}



/* Entry: 10928d2c8; end: 10928d4e3;  */

long * FUN_10928d2c8(long *param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x24;
  
  uVar10 = (ulong)param_2;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar3 = uVar9 - 1;
    uVar8 = (uint)uVar9;
    if ((uVar9 & uVar3) == 0) {
      unaff_x24 = (ulong)(uVar8 - 1 & param_2);
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar1 = 0;
        if (uVar8 != 0) {
          uVar1 = param_2 / uVar8;
        }
        unaff_x24 = (ulong)(param_2 - uVar1 * uVar8);
      }
    }
    plVar5 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        uVar6 = plVar5[1];
        if (uVar6 == uVar10) {
          if (*(uint *)(plVar5 + 2) == param_2) {
            return plVar5;
          }
        }
        else {
          if ((uVar9 & uVar3) == 0) {
            uVar6 = uVar6 & uVar3;
          }
          else if (uVar9 <= uVar6) {
            uVar2 = 0;
            if (uVar9 != 0) {
              uVar2 = uVar6 / uVar9;
            }
            uVar6 = uVar6 - uVar2 * uVar9;
          }
          if (uVar6 != unaff_x24) break;
        }
      }
    }
  }
  plVar5 = (long *)0x68;
  __Znwm();
  *plVar5 = 0;
  plVar5[1] = uVar10;
  *(undefined4 *)(plVar5 + 2) = *param_3;
  plVar5[4] = 0;
  plVar5[3] = 0;
  plVar5[6] = 0;
  plVar5[5] = 0;
  plVar5[8] = 0;
  plVar5[7] = 0;
  plVar5[10] = 0;
  plVar5[9] = 0;
  plVar5[0xc] = 0;
  plVar5[0xb] = 0;
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar9) {
      uVar3 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar3 = uVar3 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar9) {
      uVar3 = uVar9;
    }
    FUN_10928d4e4(param_1,uVar3);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = (ulong)((int)uVar9 - 1U & param_2);
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar3 * uVar9;
      }
    }
  }
  lVar7 = *param_1;
  plVar4 = *(long **)(lVar7 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *plVar5 = *plVar4;
    *plVar4 = (long)plVar5;
    *(long **)(lVar7 + unaff_x24 * 8) = plVar4;
    if (*plVar5 == 0) goto LAB_10928d4a8;
    uVar10 = *(ulong *)(*plVar5 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar10 = uVar10 & uVar9 - 1;
    }
    else if (uVar9 <= uVar10) {
      uVar3 = 0;
      if (uVar9 != 0) {
        uVar3 = uVar10 / uVar9;
      }
      uVar10 = uVar10 - uVar3 * uVar9;
    }
    plVar4 = (long *)(*param_1 + uVar10 * 8);
  }
  else {
    *plVar5 = *plVar4;
  }
  *plVar4 = (long)plVar5;
LAB_10928d4a8:
  param_1[3] = param_1[3] + 1;
  return plVar5;
}



/* Entry: 10928d4e4; end: 10928d6b3;  */

undefined1  [16] FUN_10928d4e4(ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong unaff_x24;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  puVar3 = param_1;
  puVar13 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (ulong *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    puVar3 = param_2;
  }
  puVar14 = (ulong *)param_1[1];
  if (puVar14 > param_2 || param_2 == puVar14) {
    if (puVar14 <= param_2) goto LAB_10928d6a0;
    puVar3 = (ulong *)(long)((float)param_1[3] / *(float *)(param_1 + 4));
    if ((puVar14 < (ulong *)0x3) || (((ulong)puVar14 & (long)puVar14 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((ulong *)0x1 < puVar3) {
      puVar3 = (ulong *)(1L << (-LZCOUNT((long)puVar3 + -1) & 0x3fU));
    }
    if (param_2 <= puVar3) {
      param_2 = puVar3;
    }
    if (puVar14 <= param_2) goto LAB_10928d6a0;
    if (param_2 == (ulong *)0x0) {
      puVar3 = (ulong *)*param_1;
      *param_1 = 0;
      if (puVar3 != (ulong *)0x0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      goto LAB_10928d6a0;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    uVar2 = (long)param_2 << 3;
    __Znwm();
    puVar3 = (ulong *)*param_1;
    *param_1 = uVar2;
    if (puVar3 != (ulong *)0x0) {
      __ZdlPv();
    }
    puVar14 = (ulong *)0x0;
    param_1[1] = (ulong)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)puVar14 * 8) = 0;
      puVar14 = (ulong *)((long)puVar14 + 1);
    } while (param_2 != puVar14);
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      puVar14 = (ulong *)plVar5[1];
      uVar2 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar2) == 0) {
        puVar14 = (ulong *)((ulong)puVar14 & uVar2);
      }
      else if (param_2 <= puVar14) {
        uVar12 = 0;
        if (param_2 != (ulong *)0x0) {
          uVar12 = (ulong)puVar14 / (ulong)param_2;
        }
        puVar14 = (ulong *)((long)puVar14 - uVar12 * (long)param_2);
      }
      *(ulong **)(*param_1 + (long)puVar14 * 8) = param_1 + 2;
      plVar9 = (long *)*plVar5;
      while (plVar9 != (long *)0x0) {
        puVar11 = (ulong *)plVar9[1];
        if (((ulong)param_2 & uVar2) == 0) {
          puVar11 = (ulong *)((ulong)puVar11 & uVar2);
        }
        else if (param_2 <= puVar11) {
          uVar12 = 0;
          if (param_2 != (ulong *)0x0) {
            uVar12 = (ulong)puVar11 / (ulong)param_2;
          }
          puVar11 = (ulong *)((long)puVar11 - uVar12 * (long)param_2);
        }
        plVar10 = plVar9;
        if (puVar11 != puVar14) {
          uVar12 = *param_1;
          if (*(long *)(uVar12 + (long)puVar11 * 8) == 0) {
            *(long **)(uVar12 + (long)puVar11 * 8) = plVar5;
            puVar14 = puVar11;
          }
          else {
            *plVar5 = *plVar9;
            *plVar9 = **(undefined8 **)(uVar12 + (long)puVar11 * 8);
            **(long **)(uVar12 + (long)puVar11 * 8) = (long)plVar9;
            plVar10 = plVar5;
          }
        }
        plVar5 = plVar10;
        plVar9 = (long *)*plVar10;
      }
    }
LAB_10928d6a0:
    auVar16._8_8_ = puVar13;
    auVar16._0_8_ = puVar3;
    return auVar16;
  }
  func_0x000104c4f740();
  uVar2 = *puVar13;
  uVar12 = ((ulong)(uint)((int)uVar2 << 3) + 8 ^ uVar2 >> 0x20) * -0x622015f714c7d297;
  uVar12 = (uVar2 >> 0x20 ^ uVar12 >> 0x2f ^ uVar12) * -0x622015f714c7d297;
  uVar15 = (uVar12 ^ uVar12 >> 0x2f) * -0x622015f714c7d297;
  uVar12 = puVar3[1];
  if (uVar12 != 0) {
    uVar6 = uVar12 - 1;
    if ((uVar12 & uVar6) == 0) {
      unaff_x24 = uVar15 & uVar6;
    }
    else {
      unaff_x24 = uVar15;
      if (uVar12 <= uVar15) {
        uVar8 = 0;
        if (uVar12 != 0) {
          uVar8 = uVar15 / uVar12;
        }
        unaff_x24 = uVar15 - uVar8 * uVar12;
      }
    }
    puVar7 = *(undefined8 **)(*puVar3 + unaff_x24 * 8);
    if (puVar7 != (undefined8 *)0x0) {
      for (puVar13 = (ulong *)*puVar7; puVar13 != (ulong *)0x0; puVar13 = (ulong *)*puVar13) {
        uVar8 = puVar13[1];
        if (uVar8 == uVar15) {
          if (puVar13[2] == uVar2) {
            uVar4 = 0;
            goto LAB_10928d8bc;
          }
        }
        else {
          if ((uVar12 & uVar6) == 0) {
            uVar8 = uVar8 & uVar6;
          }
          else if (uVar12 <= uVar8) {
            uVar1 = 0;
            if (uVar12 != 0) {
              uVar1 = uVar8 / uVar12;
            }
            uVar8 = uVar8 - uVar1 * uVar12;
          }
          if (uVar8 != unaff_x24) break;
        }
      }
    }
  }
  puVar13 = (ulong *)0x18;
  __Znwm();
  *puVar13 = 0;
  puVar13[1] = uVar15;
  puVar13[2] = *param_3;
  if ((uVar12 == 0) || (*(float *)(puVar3 + 4) * (float)uVar12 < (float)(puVar3[3] + 1))) {
    uVar2 = 1;
    if (2 < uVar12) {
      uVar2 = (ulong)((uVar12 & uVar12 - 1) != 0);
    }
    uVar2 = uVar2 | uVar12 << 1;
    uVar12 = (ulong)((float)(puVar3[3] + 1) / *(float *)(puVar3 + 4));
    if (uVar2 <= uVar12) {
      uVar2 = uVar12;
    }
    FUN_10928d8f0(puVar3,uVar2);
    uVar12 = puVar3[1];
    if ((uVar12 & uVar12 - 1) == 0) {
      unaff_x24 = uVar12 - 1 & uVar15;
    }
    else {
      unaff_x24 = uVar15;
      if (uVar12 <= uVar15) {
        uVar2 = 0;
        if (uVar12 != 0) {
          uVar2 = uVar15 / uVar12;
        }
        unaff_x24 = uVar15 - uVar2 * uVar12;
      }
    }
  }
  uVar2 = *puVar3;
  puVar14 = *(ulong **)(uVar2 + unaff_x24 * 8);
  if (puVar14 == (ulong *)0x0) {
    puVar14 = puVar3 + 2;
    *puVar13 = *puVar14;
    *puVar14 = (ulong)puVar13;
    *(ulong **)(uVar2 + unaff_x24 * 8) = puVar14;
    if (*puVar13 == 0) goto LAB_10928d8ac;
    uVar2 = *(ulong *)(*puVar13 + 8);
    if ((uVar12 & uVar12 - 1) == 0) {
      uVar2 = uVar2 & uVar12 - 1;
    }
    else if (uVar12 <= uVar2) {
      uVar15 = 0;
      if (uVar12 != 0) {
        uVar15 = uVar2 / uVar12;
      }
      uVar2 = uVar2 - uVar15 * uVar12;
    }
    puVar14 = (ulong *)(*puVar3 + uVar2 * 8);
  }
  else {
    *puVar13 = *puVar14;
  }
  *puVar14 = (ulong)puVar13;
LAB_10928d8ac:
  puVar3[3] = puVar3[3] + 1;
  uVar4 = 1;
LAB_10928d8bc:
  auVar17._8_8_ = uVar4;
  auVar17._0_8_ = puVar13;
  return auVar17;
}



/* Entry: 10928d6b4; end: 10928d8ef;  */

undefined1  [16] FUN_10928d6b4(long *param_1,ulong *param_2,long *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong unaff_x24;
  undefined1 auVar12 [16];
  
  uVar3 = *param_2;
  uVar7 = ((ulong)(uint)((int)uVar3 << 3) + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
  uVar7 = (uVar3 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
  uVar11 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar5 = uVar7 - 1;
    if ((uVar7 & uVar5) == 0) {
      unaff_x24 = uVar11 & uVar5;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar7 <= uVar11) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = uVar11 / uVar7;
        }
        unaff_x24 = uVar11 - uVar9 * uVar7;
      }
    }
    puVar8 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar8 != (undefined8 *)0x0) {
      for (plVar10 = (long *)*puVar8; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
        uVar9 = plVar10[1];
        if (uVar9 == uVar11) {
          if (plVar10[2] == uVar3) {
            uVar2 = 0;
            goto LAB_10928d8bc;
          }
        }
        else {
          if ((uVar7 & uVar5) == 0) {
            uVar9 = uVar9 & uVar5;
          }
          else if (uVar7 <= uVar9) {
            uVar1 = 0;
            if (uVar7 != 0) {
              uVar1 = uVar9 / uVar7;
            }
            uVar9 = uVar9 - uVar1 * uVar7;
          }
          if (uVar9 != unaff_x24) break;
        }
      }
    }
  }
  plVar10 = (long *)0x18;
  __Znwm();
  *plVar10 = 0;
  plVar10[1] = uVar11;
  plVar10[2] = *param_3;
  if ((uVar7 == 0) || (*(float *)(param_1 + 4) * (float)uVar7 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar7) {
      uVar3 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar3 = uVar3 | uVar7 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar7) {
      uVar3 = uVar7;
    }
    FUN_10928d8f0(param_1,uVar3);
    uVar7 = param_1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x24 = uVar7 - 1 & uVar11;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar7 <= uVar11) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = uVar11 / uVar7;
        }
        unaff_x24 = uVar11 - uVar3 * uVar7;
      }
    }
  }
  lVar6 = *param_1;
  plVar4 = *(long **)(lVar6 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *plVar10 = *plVar4;
    *plVar4 = (long)plVar10;
    *(long **)(lVar6 + unaff_x24 * 8) = plVar4;
    if (*plVar10 == 0) goto LAB_10928d8ac;
    uVar3 = *(ulong *)(*plVar10 + 8);
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar3 = uVar3 & uVar7 - 1;
    }
    else if (uVar7 <= uVar3) {
      uVar11 = 0;
      if (uVar7 != 0) {
        uVar11 = uVar3 / uVar7;
      }
      uVar3 = uVar3 - uVar11 * uVar7;
    }
    plVar4 = (long *)(*param_1 + uVar3 * 8);
  }
  else {
    *plVar10 = *plVar4;
  }
  *plVar4 = (long)plVar10;
LAB_10928d8ac:
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_10928d8bc:
  auVar12._8_8_ = uVar2;
  auVar12._0_8_ = plVar10;
  return auVar12;
}



/* Entry: 10928d8f0; end: 10928d9bf;  */

void FUN_10928d8f0(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar9 = param_1[1];
  if (uVar9 < param_2) {
LAB_10928d938:
    if (param_2 == 0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
    }
    else {
      if (param_2 >> 0x3d != 0) {
        func_0x000104c4f740();
        uVar9 = param_1[4];
        if (*(long *)(*(long *)(param_1[1] + (uVar9 >> 8) * 8) + (uVar9 & 0xff) * 0x10 + 8) != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          uVar9 = param_1[4];
        }
        param_1[4] = uVar9 + 1;
        param_1[5] = param_1[5] + -1;
        if (0x1ff < uVar9 + 1) {
          __ZdlPv(*(undefined8 *)param_1[1]);
          param_1[1] = param_1[1] + 8;
          param_1[4] = param_1[4] + -0x100;
        }
        return;
      }
      lVar2 = param_2 << 3;
      __Znwm();
      lVar3 = *param_1;
      *param_1 = lVar2;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      uVar9 = 0;
      param_1[1] = param_2;
      do {
        *(undefined8 *)(*param_1 + uVar9 * 8) = 0;
        uVar9 = uVar9 + 1;
      } while (param_2 != uVar9);
      plVar5 = (long *)param_1[2];
      if (plVar5 != (long *)0x0) {
        uVar9 = plVar5[1];
        uVar4 = param_2 - 1;
        if ((param_2 & uVar4) == 0) {
          uVar9 = uVar9 & uVar4;
        }
        else if (param_2 <= uVar9) {
          uVar8 = 0;
          if (param_2 != 0) {
            uVar8 = uVar9 / param_2;
          }
          uVar9 = uVar9 - uVar8 * param_2;
        }
        *(long **)(*param_1 + uVar9 * 8) = param_1 + 2;
        plVar6 = (long *)*plVar5;
        while (plVar6 != (long *)0x0) {
          uVar8 = plVar6[1];
          if ((param_2 & uVar4) == 0) {
            uVar8 = uVar8 & uVar4;
          }
          else if (param_2 <= uVar8) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar1 * param_2;
          }
          plVar7 = plVar6;
          if (uVar8 != uVar9) {
            lVar2 = *param_1;
            if (*(long *)(lVar2 + uVar8 * 8) == 0) {
              *(long **)(lVar2 + uVar8 * 8) = plVar5;
              uVar9 = uVar8;
            }
            else {
              *plVar5 = *plVar6;
              *plVar6 = **(undefined8 **)(lVar2 + uVar8 * 8);
              **(long **)(lVar2 + uVar8 * 8) = (long)plVar6;
              plVar7 = plVar5;
            }
          }
          plVar5 = plVar7;
          plVar6 = (long *)*plVar7;
        }
      }
    }
    return;
  }
  if (param_2 < uVar9) {
    uVar4 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar9 < 3) || ((uVar9 & uVar9 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar4) {
      uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
    }
    if (param_2 <= uVar4) {
      param_2 = uVar4;
    }
    if (param_2 < uVar9) goto LAB_10928d938;
  }
  return;
}



/* Entry: 10928d9c0; end: 10928db77;  */

void FUN_10928d9c0(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  
  if (param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000104c4f740();
      uVar4 = param_1[4];
      if (*(long *)(*(long *)(param_1[1] + (uVar4 >> 8) * 8) + (uVar4 & 0xff) * 0x10 + 8) != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        uVar4 = param_1[4];
      }
      param_1[4] = uVar4 + 1;
      param_1[5] = param_1[5] + -1;
      if (0x1ff < uVar4 + 1) {
        __ZdlPv(*(undefined8 *)param_1[1]);
        param_1[1] = param_1[1] + 8;
        param_1[4] = param_1[4] + -0x100;
      }
      return;
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
    plVar6 = (long *)param_1[2];
    if (plVar6 != (long *)0x0) {
      uVar4 = plVar6[1];
      uVar5 = param_2 - 1;
      if ((param_2 & uVar5) == 0) {
        uVar4 = uVar4 & uVar5;
      }
      else if (param_2 <= uVar4) {
        uVar9 = 0;
        if (param_2 != 0) {
          uVar9 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar9 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
      plVar7 = (long *)*plVar6;
      while (plVar7 != (long *)0x0) {
        uVar9 = plVar7[1];
        if ((param_2 & uVar5) == 0) {
          uVar9 = uVar9 & uVar5;
        }
        else if (param_2 <= uVar9) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar9 / param_2;
          }
          uVar9 = uVar9 - uVar1 * param_2;
        }
        plVar8 = plVar7;
        if (uVar9 != uVar4) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + uVar9 * 8) == 0) {
            *(long **)(lVar2 + uVar9 * 8) = plVar6;
            uVar4 = uVar9;
          }
          else {
            *plVar6 = *plVar7;
            *plVar7 = **(undefined8 **)(lVar2 + uVar9 * 8);
            **(long **)(lVar2 + uVar9 * 8) = (long)plVar7;
            plVar8 = plVar6;
          }
        }
        plVar6 = plVar8;
        plVar7 = (long *)*plVar8;
      }
    }
  }
  return;
}



/* Entry: 10928db78; end: 10928df43;  */

void FUN_10928db78(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  float fVar7;
  code *pcVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  ulong unaff_x25;
  uint uVar24;
  
  plVar9 = (long *)param_1[1];
  if (plVar9 == (long *)0x0) {
    return;
  }
  __ZNSt3__119__shared_weak_count4lockEv();
  if (plVar9 == (long *)0x0) {
    return;
  }
  lVar23 = *param_1;
  if ((lVar23 == 0) || ((int)param_1[2] != *(int *)(lVar23 + 0x58))) goto LAB_10928de90;
  __ZNSt3__15mutex4lockEv(lVar23 + 0x18);
  uVar21 = *(ulong *)(param_2 + 0x28) & 0xffffffff;
  uVar19 = *(ulong *)(lVar23 + 0x98);
  uVar24 = (uint)*(ulong *)(param_2 + 0x28);
  if (uVar19 != 0) {
    uVar11 = uVar19 - 1;
    uVar18 = (uint)uVar19;
    if ((uVar19 & uVar11) == 0) {
      unaff_x25 = uVar18 - 1 & uVar21;
    }
    else {
      unaff_x25 = uVar21;
      if (uVar19 <= uVar21) {
        uVar5 = 0;
        if (uVar18 != 0) {
          uVar5 = uVar24 / uVar18;
        }
        unaff_x25 = (ulong)(uVar24 - uVar5 * uVar18);
      }
    }
    puVar13 = *(undefined8 **)(*(long *)(lVar23 + 0x90) + unaff_x25 * 8);
    if (puVar13 != (undefined8 *)0x0) {
      for (plVar16 = (long *)*puVar13; plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
        uVar14 = plVar16[1];
        if (uVar14 == uVar21) {
          if (*(uint *)(plVar16 + 2) == uVar24) goto LAB_10928ddac;
        }
        else {
          if ((uVar19 & uVar11) == 0) {
            uVar14 = uVar14 & uVar11;
          }
          else if (uVar19 <= uVar14) {
            uVar6 = 0;
            if (uVar19 != 0) {
              uVar6 = uVar14 / uVar19;
            }
            uVar14 = uVar14 - uVar6 * uVar19;
          }
          if (uVar14 != unaff_x25) break;
        }
      }
    }
  }
  plVar16 = (long *)0x68;
  __Znwm();
  *plVar16 = 0;
  plVar16[1] = uVar21;
  *(uint *)(plVar16 + 2) = uVar24;
  plVar16[4] = 0;
  plVar16[3] = 0;
  plVar16[6] = 0;
  plVar16[5] = 0;
  plVar16[8] = 0;
  plVar16[7] = 0;
  plVar16[10] = 0;
  plVar16[9] = 0;
  plVar16[0xc] = 0;
  plVar16[0xb] = 0;
  fVar7 = (float)(*(long *)(lVar23 + 0xa8) + 1);
  if ((uVar19 == 0) || (*(float *)(lVar23 + 0xb0) * (float)uVar19 < fVar7)) {
    uVar11 = 1;
    if (2 < uVar19) {
      uVar11 = (ulong)((uVar19 & uVar19 - 1) != 0);
    }
    uVar11 = uVar11 | uVar19 << 1;
    uVar19 = (ulong)(fVar7 / *(float *)(lVar23 + 0xb0));
    if (uVar11 <= uVar19) {
      uVar11 = uVar19;
    }
    FUN_10928d4e4(lVar23 + 0x90,uVar11);
    uVar19 = *(ulong *)(lVar23 + 0x98);
    if ((uVar19 & uVar19 - 1) == 0) {
      unaff_x25 = (int)uVar19 - 1 & uVar21;
    }
    else {
      unaff_x25 = uVar21;
      if (uVar19 <= uVar21) {
        uVar11 = 0;
        if (uVar19 != 0) {
          uVar11 = uVar21 / uVar19;
        }
        unaff_x25 = uVar21 - uVar11 * uVar19;
      }
    }
  }
  lVar15 = *(long *)(lVar23 + 0x90);
  plVar12 = *(long **)(lVar15 + unaff_x25 * 8);
  if (plVar12 == (long *)0x0) {
    plVar12 = (long *)(lVar23 + 0xa0);
    *plVar16 = *plVar12;
    *plVar12 = (long)plVar16;
    *(long **)(lVar15 + unaff_x25 * 8) = plVar12;
    if (*plVar16 != 0) {
      uVar21 = *(ulong *)(*plVar16 + 8);
      if ((uVar19 & uVar19 - 1) == 0) {
        uVar21 = uVar21 & uVar19 - 1;
      }
      else if (uVar19 <= uVar21) {
        uVar11 = 0;
        if (uVar19 != 0) {
          uVar11 = uVar21 / uVar19;
        }
        uVar21 = uVar21 - uVar11 * uVar19;
      }
      plVar12 = (long *)(*(long *)(lVar23 + 0x90) + uVar21 * 8);
      goto LAB_10928dd9c;
    }
  }
  else {
    *plVar16 = *plVar12;
LAB_10928dd9c:
    *plVar12 = (long)plVar16;
  }
  *(long *)(lVar23 + 0xa8) = *(long *)(lVar23 + 0xa8) + 1;
LAB_10928ddac:
  lVar15 = param_1[3];
  lVar2 = param_1[4];
  plVar12 = (long *)plVar16[4];
  if (plVar12 < (long *)plVar16[5]) {
    *plVar12 = lVar15;
    plVar12[1] = lVar2;
    if (lVar2 != 0) {
      plVar1 = (long *)(lVar2 + 0x10);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar12 = plVar12 + 2;
  }
  else {
    lVar17 = plVar16[3];
    lVar20 = (long)plVar12 - lVar17;
    lVar22 = lVar20 >> 4;
    uVar19 = lVar22 + 1;
    if (uVar19 >> 0x3c != 0) {
      FUN_10928e05c();
LAB_10928df08:
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10928df0c);
      (*pcVar8)();
    }
    uVar11 = plVar16[5] - lVar17;
    uVar21 = (long)uVar11 >> 3;
    if (uVar21 <= uVar19) {
      uVar21 = uVar19;
    }
    if (0x7fffffffffffffef < uVar11) {
      uVar21 = 0xfffffffffffffff;
    }
    if (uVar21 >> 0x3c != 0) {
      func_0x000104c4f740();
      goto LAB_10928df08;
    }
    lVar10 = uVar21 << 4;
    __Znwm();
    plVar1 = (long *)(lVar10 + lVar20);
    *plVar1 = lVar15;
    plVar1[1] = lVar2;
    if (lVar2 != 0) {
      plVar12 = (long *)(lVar2 + 0x10);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar4) {
          *plVar12 = *plVar12 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar17 = plVar16[3];
      lVar20 = plVar16[4] - lVar17;
      lVar22 = lVar20 >> 4;
    }
    plVar12 = plVar1 + 2;
    _memcpy(plVar1 + lVar22 * -2,lVar17,lVar20);
    plVar16[3] = (long)(plVar1 + lVar22 * -2);
    plVar16[4] = (long)plVar12;
    plVar16[5] = lVar10 + uVar21 * 0x10;
    if (lVar17 != 0) {
      __ZdlPv(lVar17);
    }
  }
  plVar16[4] = (long)plVar12;
  __ZNSt3__15mutex6unlockEv(lVar23 + 0x18);
LAB_10928de90:
  plVar16 = plVar9 + 1;
  do {
    lVar23 = *plVar16;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar4) {
      *plVar16 = lVar23 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar23 != 0) {
    return;
  }
  (**(code **)(*plVar9 + 0x10))(plVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar9);
  return;
}



/* Entry: 10928df44; end: 10928dfcf;  */

void FUN_10928df44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae74f8;
  if (param_1[8] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[5] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 10928dfd0; end: 10928e01b;  */

void FUN_10928dfd0(long param_1)

{
  FUN_10928db78(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0x40) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10928e01c; end: 10928e057;  */

long FUN_10928e01c(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110ae7538);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10928e058; end: 10928e05b;  */

void FUN_10928e058(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10928e05c; end: 10928e06f;  */

undefined * FUN_10928e05c(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  plVar6 = *(long **)(puVar4 + 8);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return puVar4;
}



/* Entry: 10928e070; end: 10928e1bb;  */

long FUN_10928e070(long param_1)

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



/* Entry: 10928e1bc; end: 10928e1c3;  */

void FUN_10928e1bc(void)

{
  return;
}



/* Entry: 10928e1c4; end: 10928e1f7;  */

void FUN_10928e1c4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110ae7558;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10928e1f8; end: 10928e223;  */

void FUN_10928e1f8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110ae7558;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10928e224; end: 10928e25f;  */

long FUN_10928e224(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110ae75c8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10928e260; end: 10928e26b;  */

undefined ** FUN_10928e260(void)

{
  return &PTR_DAT_110ae75c8;
}



/* Entry: 10928e26c; end: 10928e2cf;  */

long FUN_10928e26c(long param_1,long param_2)

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



/* Entry: 10928e2d0; end: 10928e397;  */

long * FUN_10928e2d0(long *param_1,long param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_31;
  
  *param_1 = param_2;
  lVar1 = param_3[2];
  lVar3 = param_3[1];
  lVar2 = *param_3;
  param_1[4] = 0x32aaaba7;
  param_1[2] = lVar3;
  param_1[1] = lVar2;
  *(int *)(param_1 + 3) = (int)lVar1;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  uStack_48 = *(undefined8 *)((long)param_3 + 0xc);
  uStack_50 = *(undefined8 *)((long)param_3 + 4);
  lStack_40 = param_2;
  FUN_10928e6b0(param_1 + 0x11,&uStack_31,&lStack_40,&uStack_50);
  *(bool *)(param_1 + 0x13) = *(int *)(lStack_40 + 0x734) == 1;
  return param_1;
}



/* Entry: 10928e398; end: 10928e4cb;  */

int FUN_10928e398(undefined8 *param_1,int param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auStack_50 [8];
  long *plStack_48;
  ulong uStack_40;
  long *plStack_38;
  
  uVar3 = *(uint *)(param_1 + 1);
  uVar7 = 0;
  if (uVar3 != 0) {
    uVar7 = ((param_2 + uVar3) - 1) / uVar3;
  }
  if ((param_1[0x10] != 0) && (*(long *)(param_1[0x10] + 8) == 0)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  iVar8 = *(int *)(param_1 + 0xc);
  uVar2 = iVar8 + uVar7 * uVar3;
  uVar9 = (ulong)uVar2;
  *(uint *)(param_1 + 0xc) = uVar2;
  if (*(uint *)((long)param_1 + 100) < uVar2) {
    __Znam(uVar9);
    FUN_10928e964(&uStack_40,uVar9);
    FUN_10928e4cc(param_1 + 0xd,&uStack_40);
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
      do {
        lVar10 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar10 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      }
    }
    plStack_38 = *(long **)((long)param_1 + 0x14);
    uStack_40 = (ulong)*(uint *)(param_1 + 0xc);
    FUN_10928b768(auStack_50,*param_1,&uStack_40,param_1 + 0xd);
    FUN_10928c904(param_1 + 0xf,auStack_50);
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
      do {
        lVar10 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar10 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
      }
    }
    iVar8 = 0;
    uVar4 = *(undefined4 *)(param_1 + 0xc);
    *(uint *)(param_1 + 0xc) = uVar7 * uVar3;
    *(undefined4 *)((long)param_1 + 100) = uVar4;
  }
  return iVar8;
}



/* Entry: 10928e4cc; end: 10928e52f;  */

undefined8 * FUN_10928e4cc(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10928e530; end: 10928e633;  */

void FUN_10928e530(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((*(byte *)(param_2 + 0x98) & 1) != 0) {
    __ZNSt3__15mutex4lockEv(param_2 + 0x20);
    lVar4 = param_2;
    FUN_10928e398(param_2,param_3);
    *(int *)(param_1 + 2) = (int)lVar4;
    FUN_10928e634(param_1,param_2 + 0x78);
    *(int *)((long)param_1 + 0x14) = (int)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_2 + 0x20);
    return;
  }
  FUN_10928c318(auStack_40,*(undefined8 *)(param_2 + 0x88),param_3);
  FUN_10928c904(param_1,auStack_40);
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  *(undefined4 *)(param_1 + 2) = 0;
  *(int *)((long)param_1 + 0x14) = (int)param_3;
  return;
}



/* Entry: 10928e634; end: 10928e6af;  */

undefined8 * FUN_10928e634(undefined8 *param_1,undefined8 *param_2)

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
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
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



/* Entry: 10928e6b0; end: 10928e753;  */

void FUN_10928e6b0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  
  puVar4 = (undefined8 *)0xd0;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110ae75e8;
  uVar7 = *param_3;
  puVar4[4] = 0;
  puVar4[5] = uVar7;
  puVar4[6] = 0x32aaaba7;
  puVar4[8] = 0;
  puVar4[7] = 0;
  puVar4[10] = 0;
  puVar4[9] = 0;
  puVar4[0xc] = 0;
  puVar4[0xb] = 0;
  *(undefined8 *)((long)puVar4 + 0x6c) = 0;
  *(undefined8 *)((long)puVar4 + 100) = 0;
  uVar7 = *param_4;
  *(undefined8 *)((long)puVar4 + 0x7c) = param_4[1];
  *(undefined8 *)((long)puVar4 + 0x74) = uVar7;
  puVar4[0x16] = 0;
  puVar4[0x15] = 0;
  puVar4[0x18] = 0;
  puVar4[0x17] = 0;
  puVar4[0x11] = 0;
  puVar4[0x12] = 0;
  *(undefined4 *)(puVar4 + 0x14) = 0;
  puVar4[0x13] = 0;
  *(undefined4 *)(puVar4 + 0x19) = 0x3f800000;
  puVar6 = puVar4 + 3;
  *puVar6 = 0;
  *param_1 = puVar6;
  param_1[1] = puVar4;
  if ((puVar6 != (undefined8 *)0x0) &&
     ((lVar5 = puVar4[4], lVar5 == 0 || (*(long *)(lVar5 + 8) == -1)))) {
    plVar8 = (long *)param_1[1];
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
      plVar1 = plVar8 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar5 = puVar4[4];
    }
    *puVar6 = puVar6;
    puVar4[4] = plVar8;
    if (lVar5 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 1;
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
        (**(code **)(*plVar8 + 0x10))(plVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar8);
        return;
      }
    }
  }
  return;
}



/* Entry: 10928e754; end: 10928e763;  */

void FUN_10928e754(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae75e8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10928e764; end: 10928e783;  */

void FUN_10928e764(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae75e8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10928e784; end: 10928e7e7;  */

void FUN_10928e784(long param_1)

{
  long lVar1;
  long lStack_28;
  
  FUN_10928cb0c(param_1 + 0xa8,*(undefined8 *)(param_1 + 0xb8));
  lVar1 = *(long *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  lStack_28 = param_1 + 0x88;
  FUN_10928e7ec(&lStack_28);
  __ZNSt3__15mutexD1Ev(param_1 + 0x30);
  if (*(long *)(param_1 + 0x20) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10928e7e8; end: 10928e7eb;  */

void FUN_10928e7e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10928e7ec; end: 10928e85b;  */

void FUN_10928e7ec(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_109232a8c();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10928e85c; end: 10928e963;  */

void FUN_10928e85c(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_2 != (undefined8 *)0x0) &&
     ((lVar4 = param_2[1], lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar5 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = param_2[1];
    }
    *param_2 = param_3;
    param_2[1] = plVar5;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
        return;
      }
    }
  }
  return;
}



/* Entry: 10928e964; end: 10928e9d7;  */

undefined8 * FUN_10928e964(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110ae7638;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  param_1[1] = puVar1;
  return param_1;
}



/* Entry: 10928e9d8; end: 10928e9db;  */

void FUN_10928e9d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10928e9dc; end: 10928e9ef;  */

void FUN_10928e9dc(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10928e9f0; end: 10928e9ff;  */

void FUN_10928e9f0(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 10928ea00; end: 10928ea37;  */

undefined8 FUN_10928ea00(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110ae7678);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10928ea38; end: 10928ea3b;  */

void FUN_10928ea38(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10928ea3c; end: 10928ea97;  */

void FUN_10928ea3c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 10928ea98; end: 10928f343;  */

/* WARNING: Removing unreachable block (ram,0x00010928ec20) */
/* WARNING: Removing unreachable block (ram,0x00010928ec2c) */
/* WARNING: Removing unreachable block (ram,0x00010928ec48) */
/* WARNING: Removing unreachable block (ram,0x00010928ec4c) */
/* WARNING: Removing unreachable block (ram,0x00010928ec60) */

void FUN_10928ea98(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 *puVar19;
  bool bVar20;
  long *plVar21;
  int iVar22;
  long lStack_d0;
  long *plStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  
  if (param_2[0x1c] == 0) {
    __ZNSt3__15mutex4lockEv(param_2 + 3);
    puVar8 = (undefined8 *)param_2[0x14];
    puVar17 = (undefined8 *)param_2[0x15];
    if (puVar8 != puVar17) {
      do {
        lVar9 = puVar8[1];
        if ((lVar9 != 0) && (*(long *)(lVar9 + 8) == 0)) {
          lVar15 = param_2[0x18];
          uVar12 = 0;
          if (param_2[0x19] != lVar15) {
            uVar12 = (param_2[0x19] - lVar15) * 0x20 - 1;
          }
          lVar13 = param_2[0x1c];
          uVar16 = lVar13 + param_2[0x1b];
          if (uVar12 == uVar16) {
            FUN_10928f944(param_2 + 0x17);
            lVar15 = param_2[0x18];
            lVar13 = param_2[0x1c];
            uVar16 = lVar13 + param_2[0x1b];
            lVar9 = puVar8[1];
          }
          puVar19 = (undefined8 *)(*(long *)(lVar15 + (uVar16 >> 8) * 8) + (uVar16 & 0xff) * 0x10);
          *puVar19 = *puVar8;
          puVar19[1] = lVar9;
          if (lVar9 != 0) {
            plVar7 = (long *)(lVar9 + 0x10);
            do {
              cVar4 = '\x01';
              bVar20 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar20) {
                *plVar7 = *plVar7 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            lVar13 = param_2[0x1c];
          }
          param_2[0x1c] = lVar13 + 1;
          lVar9 = puVar8[1];
          *puVar8 = 0;
          puVar8[1] = 0;
          if (lVar9 != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
        puVar8 = puVar8 + 2;
      } while (puVar8 != puVar17);
      puVar8 = (undefined8 *)param_2[0x14];
      puVar17 = (undefined8 *)param_2[0x15];
    }
    if (puVar8 == puVar17) {
LAB_10928ec10:
      if (puVar8 != puVar17) {
        for (; puVar17 != puVar8; puVar17 = puVar17 + -2) {
          if (puVar17[-1] != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
        param_2[0x15] = puVar8;
      }
    }
    else {
      do {
        puVar19 = puVar8 + 2;
        if ((puVar8[1] == 0) || (*(long *)(puVar8[1] + 8) == -1)) {
          if ((puVar8 != puVar17) && (puVar19 != puVar17)) {
            do {
              lVar9 = puVar19[1];
              if ((lVar9 != 0) && (*(long *)(lVar9 + 8) != -1)) {
                uVar11 = *puVar19;
                *puVar19 = 0;
                puVar19[1] = 0;
                lVar15 = puVar8[1];
                *puVar8 = uVar11;
                puVar8[1] = lVar9;
                if (lVar15 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                puVar8 = puVar8 + 2;
              }
              puVar19 = puVar19 + 2;
            } while (puVar19 != puVar17);
            puVar17 = (undefined8 *)param_2[0x15];
          }
          goto LAB_10928ec10;
        }
        puVar8 = puVar19;
      } while (puVar19 != puVar17);
    }
    __ZNSt3__15mutex6unlockEv(param_2 + 3);
    __ZNSt3__15mutex4lockEv(param_2 + 3);
    if (param_2[0x1c] == 0) {
      plVar7 = param_2 + 0xc;
      plVar18 = param_2 + 0x11;
      iVar22 = 4;
      do {
        puVar8 = (undefined8 *)param_2[0xc];
        puVar17 = (undefined8 *)param_2[0xd];
        if (puVar8 == puVar17) {
LAB_10928ee30:
          uStack_a0._4_4_ = 0;
          uStack_98 = 0;
          uStack_a4 = 0;
          uStack_a0._0_4_ = 0;
          uStack_ac = 0;
          uStack_a8 = 0;
          uStack_b4 = 0;
          uStack_b0 = 0;
          uStack_bc = 0;
          uStack_b8 = 0;
          uStack_c0 = 0x20;
          _memset_pattern16(&uStack_b8,&UNK_10dfc04c0,0x20);
          (**(code **)(*(long *)param_2[2] + 0xb8))(&lStack_d0,(long *)param_2[2],&uStack_c0);
          plVar1 = (long *)param_2[0xd];
          if (plVar1 < (long *)param_2[0xe]) {
            plVar1[1] = (long)plStack_c8;
            *plVar1 = lStack_d0;
            param_2[0xd] = plVar1 + 2;
          }
          else {
            lVar9 = (long)plVar1 - *plVar7;
            uVar12 = (lVar9 >> 4) + 1;
            if (uVar12 >> 0x3c != 0) {
              FUN_10928f584();
              goto LAB_10928f2b0;
            }
            uVar10 = (long)param_2[0xe] - *plVar7;
            uVar16 = (long)uVar10 >> 3;
            if (uVar16 <= uVar12) {
              uVar16 = uVar12;
            }
            if (0x7fffffffffffffef < uVar10) {
              uVar16 = 0xfffffffffffffff;
            }
            plVar6 = plVar7;
            plStack_70 = plVar7;
            FUN_10928f598();
            lVar15 = param_2[0xc];
            plVar1 = (long *)((long)plVar6 + lVar9);
            lVar9 = (long)plVar1 - (param_2[0xd] - lVar15);
            plVar1[1] = (long)plStack_c8;
            *plVar1 = lStack_d0;
            lStack_d0 = 0;
            plStack_c8 = (long *)0x0;
            _memcpy(lVar9,lVar15);
            uStack_90 = param_2[0xc];
            param_2[0xc] = lVar9;
            param_2[0xd] = plVar1 + 2;
            uStack_78 = param_2[0xe];
            param_2[0xe] = plVar6 + uVar16 * 2;
            uStack_88 = uStack_90;
            uStack_80 = uStack_90;
            func_0x00010928f5cc(&uStack_90);
            plVar6 = plStack_c8;
            param_2[0xd] = plVar1 + 2;
            if (plStack_c8 != (long *)0x0) {
              plVar1 = plStack_c8 + 1;
              do {
                lVar9 = *plVar1;
                cVar4 = '\x01';
                bVar20 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar20) {
                  *plVar1 = lVar9 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar9 == 0) {
                (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
              }
            }
          }
          uStack_80 = uStack_80 & 0xffffffff00000000;
          uStack_88 = *(undefined8 *)(param_2[0xd] + -0x10);
          uStack_90 = param_2[0xf];
          (**(code **)(*(long *)param_2[2] + 0xc0))(&lStack_d0,(long *)param_2[2],&uStack_90);
          uStack_b8 = SUB84(plStack_c8,0);
          uStack_b4 = (undefined4)((ulong)plStack_c8 >> 0x20);
          uStack_c0 = (undefined4)lStack_d0;
          uStack_bc = (undefined4)((ulong)lStack_d0 >> 0x20);
          if (plStack_c8 != (long *)0x0) {
            plVar1 = plStack_c8 + 2;
            do {
              cVar4 = '\x01';
              bVar20 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar20) {
                *plVar1 = *plVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          func_0x00010928fd84(param_2 + 0x17,&uStack_c0);
          if (CONCAT44(uStack_b4,uStack_b8) != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          plVar1 = (long *)param_2[0x12];
          if (plVar1 < (long *)param_2[0x13]) {
            plVar1[1] = (long)plStack_c8;
            *plVar1 = lStack_d0;
            param_2[0x12] = plVar1 + 2;
          }
          else {
            lVar9 = (long)plVar1 - *plVar18;
            uVar12 = (lVar9 >> 4) + 1;
            if (uVar12 >> 0x3c != 0) {
              FUN_10928f4f0();
LAB_10928f2b0:
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10928f2b4);
              (*pcVar5)();
            }
            uVar10 = (long)param_2[0x13] - *plVar18;
            uVar16 = (long)uVar10 >> 3;
            if (uVar16 <= uVar12) {
              uVar16 = uVar12;
            }
            if (0x7fffffffffffffef < uVar10) {
              uVar16 = 0xfffffffffffffff;
            }
            plVar6 = plVar18;
            uStack_a0 = plVar18;
            FUN_10928f504();
            lVar15 = param_2[0x11];
            plVar1 = (long *)((long)plVar6 + lVar9);
            lVar9 = (long)plVar1 - (param_2[0x12] - lVar15);
            plVar1[1] = (long)plStack_c8;
            *plVar1 = lStack_d0;
            lStack_d0 = 0;
            plStack_c8 = (long *)0x0;
            _memcpy(lVar9,lVar15);
            uVar11 = param_2[0x11];
            param_2[0x11] = lVar9;
            param_2[0x12] = plVar1 + 2;
            uVar14 = param_2[0x13];
            param_2[0x13] = plVar6 + uVar16 * 2;
            uStack_b0 = (undefined4)uVar11;
            uStack_ac = (undefined4)((ulong)uVar11 >> 0x20);
            uStack_a8 = (undefined4)uVar14;
            uStack_a4 = (undefined4)((ulong)uVar14 >> 0x20);
            uStack_c0 = uStack_b0;
            uStack_bc = uStack_ac;
            uStack_b8 = uStack_b0;
            uStack_b4 = uStack_ac;
            func_0x00010928f538(&uStack_c0);
            plVar6 = plStack_c8;
            param_2[0x12] = plVar1 + 2;
            if (plStack_c8 != (long *)0x0) {
              plVar1 = plStack_c8 + 1;
              do {
                lVar9 = *plVar1;
                cVar4 = '\x01';
                bVar20 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar20) {
                  *plVar1 = lVar9 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar9 == 0) {
                (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
              }
            }
          }
        }
        else {
          bVar20 = false;
          do {
            uStack_80 = uStack_80 & 0xffffffff00000000;
            uStack_88 = *puVar8;
            uStack_90 = param_2[0xf];
            (**(code **)(*(long *)param_2[2] + 0xc0))(&lStack_d0,(long *)param_2[2],&uStack_90);
            lVar9 = lStack_d0;
            if (lStack_d0 != 0) {
              uStack_c0 = (undefined4)lStack_d0;
              uStack_bc = (undefined4)((ulong)lStack_d0 >> 0x20);
              uStack_b8 = SUB84(plStack_c8,0);
              uStack_b4 = (undefined4)((ulong)plStack_c8 >> 0x20);
              if (plStack_c8 != (long *)0x0) {
                plVar1 = plStack_c8 + 2;
                do {
                  cVar4 = '\x01';
                  bVar20 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar20) {
                    *plVar1 = *plVar1 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              func_0x00010928fd84(param_2 + 0x17,&uStack_c0);
              if (CONCAT44(uStack_b4,uStack_b8) != 0) {
                __ZNSt3__119__shared_weak_count14__release_weakEv();
              }
              plVar1 = (long *)param_2[0x12];
              if (plVar1 < (long *)param_2[0x13]) {
                plVar21 = plVar1 + 2;
                plVar1[1] = (long)plStack_c8;
                *plVar1 = lStack_d0;
                lStack_d0 = 0;
                plStack_c8 = (long *)0x0;
              }
              else {
                lVar15 = (long)plVar1 - *plVar18;
                uVar12 = (lVar15 >> 4) + 1;
                if (uVar12 >> 0x3c != 0) {
                  FUN_10928f4f0();
                  goto LAB_10928f2b0;
                }
                uVar10 = (long)param_2[0x13] - *plVar18;
                uVar16 = (long)uVar10 >> 3;
                if (uVar16 <= uVar12) {
                  uVar16 = uVar12;
                }
                if (0x7fffffffffffffef < uVar10) {
                  uVar16 = 0xfffffffffffffff;
                }
                plVar6 = plVar18;
                uStack_a0 = plVar18;
                FUN_10928f504();
                lVar13 = param_2[0x11];
                plVar1 = (long *)((long)plVar6 + lVar15);
                lVar15 = (long)plVar1 - (param_2[0x12] - lVar13);
                plVar21 = plVar1 + 2;
                plVar1[1] = (long)plStack_c8;
                *plVar1 = lStack_d0;
                lStack_d0 = 0;
                plStack_c8 = (long *)0x0;
                _memcpy(lVar15,lVar13);
                uVar11 = param_2[0x11];
                param_2[0x11] = lVar15;
                param_2[0x12] = plVar21;
                uVar14 = param_2[0x13];
                param_2[0x13] = plVar6 + uVar16 * 2;
                uStack_b0 = (undefined4)uVar11;
                uStack_ac = (undefined4)((ulong)uVar11 >> 0x20);
                uStack_a8 = (undefined4)uVar14;
                uStack_a4 = (undefined4)((ulong)uVar14 >> 0x20);
                uStack_c0 = uStack_b0;
                uStack_bc = uStack_ac;
                uStack_b8 = uStack_b0;
                uStack_b4 = uStack_ac;
                func_0x00010928f538(&uStack_c0);
              }
              param_2[0x12] = plVar21;
              bVar20 = true;
            }
            plVar1 = plStack_c8;
            if (plStack_c8 != (long *)0x0) {
              plVar6 = plStack_c8 + 1;
              do {
                lVar15 = *plVar6;
                cVar4 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                if (bVar3) {
                  *plVar6 = lVar15 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar15 == 0) {
                (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
              }
            }
          } while ((lVar9 == 0) && (puVar8 = puVar8 + 2, puVar8 != puVar17));
          if (!bVar20) goto LAB_10928ee30;
        }
        iVar22 = iVar22 + -1;
      } while (iVar22 != 0);
    }
    __ZNSt3__15mutex6unlockEv(param_2 + 3);
  }
  uStack_c0 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  __ZNSt3__15mutex4lockEv(param_2 + 3);
  puVar8 = (undefined8 *)
           (*(long *)(param_2[0x18] + ((ulong)param_2[0x1b] >> 8) * 8) +
           (param_2[0x1b] & 0xff) * 0x10);
  plVar7 = (long *)puVar8[1];
  if (plVar7 == (long *)0x0) {
    plVar18 = (long *)0x0;
    plVar7 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar7 == (long *)0x0) {
      plVar18 = (long *)0x0;
    }
    else {
      plVar18 = (long *)*puVar8;
    }
  }
  uStack_c0 = SUB84(plVar18,0);
  uStack_bc = (undefined4)((ulong)plVar18 >> 0x20);
  uStack_b8 = SUB84(plVar7,0);
  uStack_b4 = (undefined4)((ulong)plVar7 >> 0x20);
  uVar12 = param_2[0x1b];
  if (*(long *)(*(long *)(param_2[0x18] + (uVar12 >> 8) * 8) + (uVar12 & 0xff) * 0x10 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    uVar12 = param_2[0x1b];
  }
  param_2[0x1b] = uVar12 + 1;
  param_2[0x1c] = param_2[0x1c] + -1;
  if (0x1ff < uVar12 + 1) {
    __ZdlPv(*(undefined8 *)param_2[0x18]);
    param_2[0x18] = param_2[0x18] + 8;
    param_2[0x1b] = param_2[0x1b] + -0x100;
  }
  __ZNSt3__15mutex6unlockEv(param_2 + 3);
  (**(code **)(*plVar18 + 0x30))(plVar18);
  uVar11 = *param_2;
  lVar9 = param_2[1];
  if (lVar9 != 0) {
    plVar1 = (long *)(lVar9 + 0x10);
    do {
      cVar4 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar20) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar2 = *(undefined4 *)(param_2 + 0xb);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 2;
    do {
      cVar4 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar20) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = plVar18;
  puVar8 = (undefined8 *)0x48;
  __Znwm();
  *puVar8 = &PTR_FUN_110ae7698;
  puVar8[1] = 0;
  puVar8[2] = 0;
  puVar8[3] = plVar18;
  puVar8[4] = uVar11;
  puVar8[5] = lVar9;
  *(undefined4 *)(puVar8 + 6) = uVar2;
  puVar8[7] = plVar18;
  puVar8[8] = plVar7;
  param_1[1] = puVar8;
  func_0x00010928fe04(param_1,plVar18 + 1,plVar18);
  if (plVar7 != (long *)0x0) {
    plVar18 = plVar7 + 1;
    do {
      lVar9 = *plVar18;
      cVar4 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar20) {
        *plVar18 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar7);
      return;
    }
  }
  return;
}



/* Entry: 10928f344; end: 10928f3df;  */

undefined8 * FUN_10928f344(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10928f3e0; end: 10928f46b;  */

long FUN_10928f3e0(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_3 != param_2) {
    lVar1 = *(long *)(param_1 + 8);
    lVar2 = param_2;
    if (param_3 != lVar1) {
      do {
        FUN_10928f344(lVar2,param_3);
        param_3 = param_3 + 0x10;
        lVar2 = lVar2 + 0x10;
      } while (param_3 != lVar1);
      lVar1 = *(long *)(param_1 + 8);
    }
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x10;
      FUN_109233b10(lVar1);
    }
    *(long *)(param_1 + 8) = lVar2;
  }
  return param_2;
}



/* Entry: 10928f46c; end: 10928f4ef;  */

long * FUN_10928f46c(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = param_2;
  if (param_1 != param_2) {
    do {
      plVar1 = param_1;
      if (*param_1 == 0) break;
      param_1 = param_1 + 2;
      plVar1 = param_2;
    } while (param_1 != param_2);
    plVar2 = plVar1;
    if (param_2 != plVar1) {
      while (plVar2 = plVar2 + 2, plVar2 != param_2) {
        if (*plVar2 != 0) {
          FUN_10928f344(plVar1,plVar2);
          plVar1 = plVar1 + 2;
        }
      }
    }
  }
  return plVar1;
}



/* Entry: 10928f4f0; end: 10928f503;  */

undefined1  [16] FUN_10928f4f0(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3c == 0) {
    lVar2 = param_2 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000104c4f740();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x10;
    FUN_109233b10();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 10928f504; end: 10928f583;  */

undefined1  [16] FUN_10928f504(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 >> 0x3c == 0) {
    lVar1 = param_2 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104c4f740();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    FUN_109233b10();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10928f584; end: 10928f597;  */

undefined1  [16] FUN_10928f584(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3c == 0) {
    lVar2 = param_2 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000104c4f740();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x10;
    FUN_109233968();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 10928f598; end: 10928f65f;  */

undefined1  [16] FUN_10928f598(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 >> 0x3c == 0) {
    lVar1 = param_2 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104c4f740();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    FUN_109233968();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10928f660; end: 10928f72f;  */

ulong * FUN_10928f660(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  
  puVar3 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (ulong *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    puVar3 = param_2;
  }
  puVar13 = (ulong *)param_1[1];
  if (puVar13 < param_2) {
LAB_10928f6a8:
    if (param_2 == (ulong *)0x0) {
      puVar3 = (ulong *)*param_1;
      *param_1 = 0;
      if (puVar3 != (ulong *)0x0) {
        __ZdlPv();
      }
      param_1[1] = 0;
    }
    else {
      if ((ulong)param_2 >> 0x3d != 0) {
        func_0x000104c4f740();
        uVar2 = param_1[1];
        if (uVar2 != 0) {
          uVar11 = *param_2;
          uVar7 = ((ulong)(uint)((int)uVar11 << 3) + 8 ^ uVar11 >> 0x20) * -0x622015f714c7d297;
          uVar7 = (uVar11 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
          uVar7 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
          uVar8 = uVar2 - 1;
          if ((uVar2 & uVar8) == 0) {
            uVar10 = uVar7 & uVar8;
          }
          else {
            uVar10 = uVar7;
            if (uVar2 <= uVar7) {
              uVar10 = 0;
              if (uVar2 != 0) {
                uVar10 = uVar7 / uVar2;
              }
              uVar10 = uVar7 - uVar10 * uVar2;
            }
          }
          plVar4 = *(long **)(*param_1 + uVar10 * 8);
          if (plVar4 != (long *)0x0) {
            puVar3 = (ulong *)*plVar4;
            do {
              if (puVar3 == (ulong *)0x0) {
                return (ulong *)0x0;
              }
              uVar12 = puVar3[1];
              if (uVar7 - uVar12 == 0) {
                if (puVar3[2] == uVar11) {
                  return puVar3;
                }
              }
              else {
                if ((uVar2 & uVar8) == 0) {
                  uVar12 = uVar12 & uVar8;
                }
                else if (uVar2 <= uVar12) {
                  uVar1 = 0;
                  if (uVar2 != 0) {
                    uVar1 = uVar12 / uVar2;
                  }
                  uVar12 = uVar12 - uVar1 * uVar2;
                }
                if (uVar12 != uVar10) {
                  return (ulong *)0x0;
                }
              }
              puVar3 = (ulong *)*puVar3;
            } while( true );
          }
        }
        return (ulong *)0x0;
      }
      uVar2 = (long)param_2 << 3;
      __Znwm();
      puVar3 = (ulong *)*param_1;
      *param_1 = uVar2;
      if (puVar3 != (ulong *)0x0) {
        __ZdlPv();
      }
      puVar13 = (ulong *)0x0;
      param_1[1] = (ulong)param_2;
      do {
        *(undefined8 *)(*param_1 + (long)puVar13 * 8) = 0;
        puVar13 = (ulong *)((long)puVar13 + 1);
      } while (param_2 != puVar13);
      plVar4 = (long *)param_1[2];
      if (plVar4 != (long *)0x0) {
        puVar13 = (ulong *)plVar4[1];
        uVar2 = (long)param_2 - 1;
        if (((ulong)param_2 & uVar2) == 0) {
          puVar13 = (ulong *)((ulong)puVar13 & uVar2);
        }
        else if (param_2 <= puVar13) {
          uVar11 = 0;
          if (param_2 != (ulong *)0x0) {
            uVar11 = (ulong)puVar13 / (ulong)param_2;
          }
          puVar13 = (ulong *)((long)puVar13 - uVar11 * (long)param_2);
        }
        *(ulong **)(*param_1 + (long)puVar13 * 8) = param_1 + 2;
        plVar5 = (long *)*plVar4;
        while (plVar5 != (long *)0x0) {
          puVar9 = (ulong *)plVar5[1];
          if (((ulong)param_2 & uVar2) == 0) {
            puVar9 = (ulong *)((ulong)puVar9 & uVar2);
          }
          else if (param_2 <= puVar9) {
            uVar11 = 0;
            if (param_2 != (ulong *)0x0) {
              uVar11 = (ulong)puVar9 / (ulong)param_2;
            }
            puVar9 = (ulong *)((long)puVar9 - uVar11 * (long)param_2);
          }
          plVar6 = plVar5;
          if (puVar9 != puVar13) {
            uVar11 = *param_1;
            if (*(long *)(uVar11 + (long)puVar9 * 8) == 0) {
              *(long **)(uVar11 + (long)puVar9 * 8) = plVar4;
              puVar13 = puVar9;
            }
            else {
              *plVar4 = *plVar5;
              *plVar5 = **(undefined8 **)(uVar11 + (long)puVar9 * 8);
              **(long **)(uVar11 + (long)puVar9 * 8) = (long)plVar5;
              plVar6 = plVar4;
            }
          }
          plVar4 = plVar6;
          plVar5 = (long *)*plVar6;
        }
      }
    }
    return puVar3;
  }
  if (param_2 < puVar13) {
    puVar3 = (ulong *)(long)((float)param_1[3] / *(float *)(param_1 + 4));
    if ((puVar13 < (ulong *)0x3) || (((ulong)puVar13 & (long)puVar13 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((ulong *)0x1 < puVar3) {
      puVar3 = (ulong *)(1L << (-LZCOUNT((long)puVar3 + -1) & 0x3fU));
    }
    if (param_2 <= puVar3) {
      param_2 = puVar3;
    }
    if (param_2 < puVar13) goto LAB_10928f6a8;
  }
  return puVar3;
}



/* Entry: 10928f730; end: 10928f86b;  */

long * FUN_10928f730(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong *puVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  
  if (param_2 == (ulong *)0x0) {
    plVar3 = (long *)*param_1;
    *param_1 = 0;
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if ((ulong)param_2 >> 0x3d != 0) {
      func_0x000104c4f740();
      uVar5 = param_1[1];
      if (uVar5 != 0) {
        uVar7 = *param_2;
        uVar10 = ((ulong)(uint)((int)uVar7 << 3) + 8 ^ uVar7 >> 0x20) * -0x622015f714c7d297;
        uVar10 = (uVar7 >> 0x20 ^ uVar10 >> 0x2f ^ uVar10) * -0x622015f714c7d297;
        uVar10 = (uVar10 ^ uVar10 >> 0x2f) * -0x622015f714c7d297;
        uVar11 = uVar5 - 1;
        if ((uVar5 & uVar11) == 0) {
          uVar13 = uVar10 & uVar11;
        }
        else {
          uVar13 = uVar10;
          if (uVar5 <= uVar10) {
            uVar13 = 0;
            if (uVar5 != 0) {
              uVar13 = uVar10 / uVar5;
            }
            uVar13 = uVar10 - uVar13 * uVar5;
          }
        }
        plVar3 = *(long **)(*param_1 + uVar13 * 8);
        if (plVar3 != (long *)0x0) {
          plVar3 = (long *)*plVar3;
          do {
            if (plVar3 == (long *)0x0) {
              return (long *)0x0;
            }
            uVar14 = plVar3[1];
            if (uVar10 - uVar14 == 0) {
              if (plVar3[2] == uVar7) {
                return plVar3;
              }
            }
            else {
              if ((uVar5 & uVar11) == 0) {
                uVar14 = uVar14 & uVar11;
              }
              else if (uVar5 <= uVar14) {
                uVar1 = 0;
                if (uVar5 != 0) {
                  uVar1 = uVar14 / uVar5;
                }
                uVar14 = uVar14 - uVar1 * uVar5;
              }
              if (uVar14 != uVar13) {
                return (long *)0x0;
              }
            }
            plVar3 = (long *)*plVar3;
          } while( true );
        }
      }
      return (long *)0x0;
    }
    lVar2 = (long)param_2 << 3;
    __Znwm();
    plVar3 = (long *)*param_1;
    *param_1 = lVar2;
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
    puVar4 = (ulong *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)puVar4 * 8) = 0;
      puVar4 = (ulong *)((long)puVar4 + 1);
    } while (param_2 != puVar4);
    plVar6 = (long *)param_1[2];
    if (plVar6 != (long *)0x0) {
      puVar4 = (ulong *)plVar6[1];
      uVar5 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar5) == 0) {
        puVar4 = (ulong *)((ulong)puVar4 & uVar5);
      }
      else if (param_2 <= puVar4) {
        uVar7 = 0;
        if (param_2 != (ulong *)0x0) {
          uVar7 = (ulong)puVar4 / (ulong)param_2;
        }
        puVar4 = (ulong *)((long)puVar4 - uVar7 * (long)param_2);
      }
      *(long **)(*param_1 + (long)puVar4 * 8) = param_1 + 2;
      plVar8 = (long *)*plVar6;
      while (plVar8 != (long *)0x0) {
        puVar12 = (ulong *)plVar8[1];
        if (((ulong)param_2 & uVar5) == 0) {
          puVar12 = (ulong *)((ulong)puVar12 & uVar5);
        }
        else if (param_2 <= puVar12) {
          uVar7 = 0;
          if (param_2 != (ulong *)0x0) {
            uVar7 = (ulong)puVar12 / (ulong)param_2;
          }
          puVar12 = (ulong *)((long)puVar12 - uVar7 * (long)param_2);
        }
        plVar9 = plVar8;
        if (puVar12 != puVar4) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)puVar12 * 8) == 0) {
            *(long **)(lVar2 + (long)puVar12 * 8) = plVar6;
            puVar4 = puVar12;
          }
          else {
            *plVar6 = *plVar8;
            *plVar8 = **(undefined8 **)(lVar2 + (long)puVar12 * 8);
            **(long **)(lVar2 + (long)puVar12 * 8) = (long)plVar8;
            plVar9 = plVar6;
          }
        }
        plVar6 = plVar9;
        plVar8 = (long *)*plVar9;
      }
    }
  }
  return plVar3;
}



/* Entry: 10928f86c; end: 10928f943;  */

long * FUN_10928f86c(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = *param_2;
    uVar4 = ((ulong)(uint)((int)uVar3 << 3) + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
    uVar4 = (uVar3 >> 0x20 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    uVar5 = uVar2 - 1;
    if ((uVar2 & uVar5) == 0) {
      uVar6 = uVar4 & uVar5;
    }
    else {
      uVar6 = uVar4;
      if (uVar2 <= uVar4) {
        uVar6 = 0;
        if (uVar2 != 0) {
          uVar6 = uVar4 / uVar2;
        }
        uVar6 = uVar4 - uVar6 * uVar2;
      }
    }
    plVar7 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)*plVar7;
      do {
        if (plVar7 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar8 = plVar7[1];
        if (uVar4 - uVar8 == 0) {
          if (plVar7[2] == uVar3) {
            return plVar7;
          }
        }
        else {
          if ((uVar2 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (uVar2 <= uVar8) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar8 / uVar2;
            }
            uVar8 = uVar8 - uVar1 * uVar2;
          }
          if (uVar8 != uVar6) {
            return (long *)0x0;
          }
        }
        plVar7 = (long *)*plVar7;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10928f944; end: 10928fc53;  */

void FUN_10928f944(ulong *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  
  if (0xff < param_1[4]) {
    param_1[4] = param_1[4] - 0x100;
    puVar10 = (undefined8 *)param_1[1] + 1;
    uVar3 = *(undefined8 *)param_1[1];
LAB_10928f97c:
    param_1[1] = (ulong)puVar10;
    puVar10 = (undefined8 *)param_1[2];
    if (puVar10 == (undefined8 *)param_1[3]) {
      uVar15 = *param_1;
      uVar5 = param_1[1];
      if (uVar5 < uVar15 || uVar5 - uVar15 == 0) {
        uVar8 = (long)((long)puVar10 - uVar15) >> 2;
        if ((long)puVar10 - uVar15 == 0) {
          uVar8 = 1;
        }
        uVar15 = uVar8;
        FUN_10928fd50();
        puVar11 = (undefined8 *)(uVar15 + (uVar8 >> 2) * 8);
        lVar12 = param_1[2] - (long)param_1[1];
        puVar10 = puVar11;
        if (lVar12 != 0) {
          puVar10 = (undefined8 *)((long)puVar11 + lVar12);
          puVar7 = (undefined8 *)param_1[1];
          puVar9 = puVar11;
          do {
            *puVar9 = *puVar7;
            lVar12 = lVar12 + -8;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          } while (lVar12 != 0);
        }
        uVar8 = *param_1;
        *param_1 = uVar15;
        param_1[1] = (ulong)puVar11;
        param_1[2] = (ulong)puVar10;
        param_1[3] = uVar15 + uVar5 * 8;
        if (uVar8 != 0) {
          __ZdlPv(uVar8);
          puVar10 = (undefined8 *)param_1[2];
        }
      }
      else {
        lVar12 = (((long)(uVar5 - uVar15) >> 3) + 1) / 2;
        lVar13 = uVar5 + lVar12 * -8;
        lVar1 = (long)puVar10 - uVar5;
        if (lVar1 != 0) {
          _memmove(lVar13,uVar5,lVar1);
          uVar5 = param_1[1];
        }
        puVar10 = (undefined8 *)(lVar13 + lVar1);
        param_1[1] = uVar5 + lVar12 * -8;
        param_1[2] = (ulong)puVar10;
      }
    }
    *puVar10 = uVar3;
    param_1[2] = param_1[2] + 8;
    return;
  }
  puVar11 = (undefined8 *)param_1[2];
  puVar9 = (undefined8 *)param_1[3];
  puVar7 = (undefined8 *)*param_1;
  puVar10 = (undefined8 *)param_1[1];
  uVar15 = (long)puVar11 - (long)puVar10;
  if (uVar15 < (ulong)((long)puVar9 - (long)puVar7)) {
    uVar3 = 0x1000;
    __Znwm();
    if (puVar9 == puVar11) {
      if (puVar10 == puVar7) {
        uVar15 = (long)puVar9 - (long)puVar10 >> 2;
        if (puVar11 == puVar10) {
          uVar15 = 1;
        }
        lVar12 = uVar15 * 2;
        FUN_10928fd50();
        puVar10 = (undefined8 *)(uVar15 + (lVar12 + 6U & 0xfffffffffffffff8));
        lVar12 = param_1[2] - (long)param_1[1];
        puVar11 = puVar10;
        if (lVar12 != 0) {
          puVar11 = (undefined8 *)((long)puVar10 + lVar12);
          puVar7 = (undefined8 *)param_1[1];
          puVar9 = puVar10;
          do {
            *puVar9 = *puVar7;
            lVar12 = lVar12 + -8;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          } while (lVar12 != 0);
        }
        uVar5 = *param_1;
        *param_1 = uVar15;
        param_1[1] = (ulong)puVar10;
        param_1[2] = (ulong)puVar11;
        param_1[3] = uVar15 + (long)param_2 * 8;
        if (uVar5 != 0) {
          __ZdlPv(uVar5);
          puVar10 = (undefined8 *)param_1[1];
        }
      }
      puVar10[-1] = uVar3;
      puVar10 = (undefined8 *)param_1[1];
      param_1[1] = (ulong)(puVar10 + -1);
      uVar3 = puVar10[-1];
      goto LAB_10928f97c;
    }
    *puVar11 = uVar3;
    param_1[2] = param_1[2] + 8;
  }
  else {
    puVar6 = (undefined8 *)((long)puVar9 - (long)puVar7 >> 2);
    if (puVar9 == puVar7) {
      puVar6 = (undefined8 *)0x1;
    }
    FUN_10928fd50();
    uVar3 = 0x1000;
    puVar4 = param_2;
    __Znwm();
    puVar7 = (undefined8 *)((long)puVar6 + uVar15);
    puVar9 = puVar6 + (long)param_2;
    puVar2 = puVar6;
    if (uVar15 == (long)param_2 * 8) {
      if ((long)uVar15 < 1) {
        puVar7 = (undefined8 *)((long)puVar7 - (long)puVar6 >> 2);
        if (puVar11 == puVar10) {
          puVar7 = (undefined8 *)0x1;
        }
        puVar2 = puVar7;
        FUN_10928fd50();
        puVar7 = puVar2 + ((ulong)puVar7 >> 2);
        puVar9 = puVar2 + (long)puVar4;
        if (puVar6 != (undefined8 *)0x0) {
          __ZdlPv(puVar6);
        }
      }
      else {
        lVar12 = ((long)puVar7 - (long)puVar6 >> 3) + 1;
        puVar7 = puVar7 + -((ulong)(lVar12 - (lVar12 >> 0x3f)) >> 1);
      }
    }
    puVar10 = puVar7 + 1;
    *puVar7 = uVar3;
    puVar11 = (undefined8 *)param_1[2];
    puVar6 = puVar2;
    if (puVar11 != (undefined8 *)param_1[1]) {
      do {
        puVar2 = puVar6;
        puVar14 = puVar7;
        if (puVar7 == puVar6) {
          if (puVar10 < puVar9) {
            lVar12 = ((long)puVar9 - (long)puVar10 >> 3) + 1;
            lVar1 = (long)puVar10 - (long)puVar6;
            lVar13 = (long)puVar10 - (long)puVar6;
            puVar10 = puVar10 + ((ulong)(lVar12 - (lVar12 >> 0x3f)) >> 1);
            puVar14 = (undefined8 *)((long)puVar10 - lVar1);
            if (lVar13 != 0) {
              _memmove(puVar14,puVar7,lVar13);
              puVar4 = puVar7;
            }
          }
          else {
            puVar14 = (undefined8 *)((long)puVar9 - (long)puVar6 >> 2);
            if ((long)puVar9 - (long)puVar6 == 0) {
              puVar14 = (undefined8 *)0x1;
            }
            puVar2 = puVar14;
            FUN_10928fd50();
            puVar14 = (undefined8 *)((long)puVar2 + ((long)puVar14 * 2 + 6U & 0xfffffffffffffff8));
            lVar12 = (long)puVar10 - (long)puVar6;
            puVar10 = puVar14;
            if (lVar12 != 0) {
              puVar10 = (undefined8 *)((long)puVar14 + lVar12);
              puVar9 = puVar14;
              do {
                *puVar9 = *puVar7;
                lVar12 = lVar12 + -8;
                puVar9 = puVar9 + 1;
                puVar7 = puVar7 + 1;
              } while (lVar12 != 0);
            }
            puVar9 = puVar2 + (long)puVar4;
            if (puVar6 != (undefined8 *)0x0) {
              __ZdlPv(puVar6);
            }
          }
        }
        puVar11 = puVar11 + -1;
        puVar7 = puVar14 + -1;
        *puVar7 = *puVar11;
        puVar6 = puVar2;
      } while (puVar11 != (undefined8 *)param_1[1]);
    }
    uVar15 = *param_1;
    *param_1 = (ulong)puVar2;
    param_1[1] = (ulong)puVar7;
    param_1[2] = (ulong)puVar10;
    param_1[3] = (ulong)puVar9;
    if (uVar15 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 10928fc54; end: 10928fd4f;  */

void FUN_10928fc54(ulong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar7 = (undefined8 *)param_1[2];
  if (puVar7 == (undefined8 *)param_1[3]) {
    uVar3 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar5 = (long)((long)puVar7 - uVar3) >> 2;
      if ((long)puVar7 - uVar3 == 0) {
        uVar5 = 1;
      }
      uVar3 = uVar5;
      FUN_10928fd50();
      puVar1 = (undefined8 *)(uVar3 + (uVar5 >> 2) * 8);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (undefined8 *)((long)puVar1 + lVar8);
        puVar6 = (undefined8 *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar5 = *param_1;
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar3 + uVar4 * 8;
      if (uVar5 != 0) {
        __ZdlPv(uVar5);
        puVar7 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar3) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (undefined8 *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 10928fd50; end: 10928feb3;  */

void FUN_10928fd50(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if (param_1 >> 0x3d == 0) {
    __Znwm(param_1 << 3);
    return;
  }
  func_0x000104c4f740();
  lVar3 = *(long *)(param_1 + 8);
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != lVar3) {
    uVar1 = (*(long *)(param_1 + 0x10) - lVar3) * 0x20 - 1;
  }
  uVar4 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
  if (uVar1 == uVar4) {
    FUN_10928f944(param_1);
    lVar3 = *(long *)(param_1 + 8);
    uVar4 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
  }
  uVar5 = *param_2;
  puVar2 = (undefined8 *)(*(long *)(lVar3 + (uVar4 >> 8) * 8) + (uVar4 & 0xff) * 0x10);
  puVar2[1] = param_2[1];
  *puVar2 = uVar5;
  *param_2 = 0;
  param_2[1] = 0;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  return;
}



/* Entry: 10928feb4; end: 10929008b;  */

void FUN_10928feb4(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar8 != (long *)0x0) {
      lVar15 = *param_1;
      if ((lVar15 != 0) && ((int)param_1[2] == *(int *)(lVar15 + 0x58))) {
        __ZNSt3__15mutex4lockEv(lVar15 + 0x18);
        lVar3 = param_1[3];
        lVar4 = param_1[4];
        plVar16 = *(long **)(lVar15 + 0xa8);
        if (plVar16 < *(long **)(lVar15 + 0xb0)) {
          *plVar16 = lVar3;
          plVar16[1] = lVar4;
          if (lVar4 != 0) {
            plVar1 = (long *)(lVar4 + 0x10);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = *plVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          plVar16 = plVar16 + 2;
        }
        else {
          lVar12 = *(long *)(lVar15 + 0xa0);
          lVar13 = (long)plVar16 - lVar12;
          lVar14 = lVar13 >> 4;
          uVar2 = lVar14 + 1;
          if (uVar2 >> 0x3c != 0) {
            FUN_1092901a0();
LAB_109290064:
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x109290068);
            (*pcVar7)();
          }
          uVar10 = (long)*(long **)(lVar15 + 0xb0) - lVar12;
          uVar11 = (long)uVar10 >> 3;
          if (uVar11 <= uVar2) {
            uVar11 = uVar2;
          }
          if (0x7fffffffffffffef < uVar10) {
            uVar11 = 0xfffffffffffffff;
          }
          if (uVar11 >> 0x3c != 0) {
            func_0x000104c4f740();
            goto LAB_109290064;
          }
          lVar9 = uVar11 << 4;
          __Znwm();
          plVar1 = (long *)(lVar9 + lVar13);
          *plVar1 = lVar3;
          plVar1[1] = lVar4;
          if (lVar4 != 0) {
            plVar16 = (long *)(lVar4 + 0x10);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar6) {
                *plVar16 = *plVar16 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            lVar12 = *(long *)(lVar15 + 0xa0);
            lVar13 = *(long *)(lVar15 + 0xa8) - lVar12;
            lVar14 = lVar13 >> 4;
          }
          plVar16 = plVar1 + 2;
          _memcpy(plVar1 + lVar14 * -2,lVar12,lVar13);
          *(long **)(lVar15 + 0xa0) = plVar1 + lVar14 * -2;
          *(long **)(lVar15 + 0xa8) = plVar16;
          *(ulong *)(lVar15 + 0xb0) = lVar9 + uVar11 * 0x10;
          if (lVar12 != 0) {
            __ZdlPv(lVar12);
          }
        }
        *(long **)(lVar15 + 0xa8) = plVar16;
        __ZNSt3__15mutex6unlockEv(lVar15 + 0x18);
      }
      plVar16 = plVar8 + 1;
      do {
        lVar15 = *plVar16;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar6) {
          *plVar16 = lVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar8);
        return;
      }
    }
  }
  return;
}



/* Entry: 10929008c; end: 109290117;  */

void FUN_10929008c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae7698;
  if (param_1[8] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[5] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 109290118; end: 10929015f;  */

void FUN_109290118(long param_1)

{
  FUN_10928feb4(param_1 + 0x20);
  if (*(long *)(param_1 + 0x40) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 109290160; end: 10929019b;  */

long FUN_109290160(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110ae76d8);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10929019c; end: 10929019f;  */

void FUN_10929019c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092901a0; end: 1092901b3;  */

undefined * FUN_1092901a0(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  plVar6 = *(long **)(puVar4 + 8);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return puVar4;
}



/* Entry: 1092901b4; end: 10929020b;  */

long FUN_1092901b4(long param_1)

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



/* Entry: 10929020c; end: 1092902db;  */

long FUN_10929020c(long param_1)

{
  long *plVar1;
  long lStack_38;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x18);
  for (plVar1 = *(long **)(param_1 + 0xf0); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    if ((*(byte *)(plVar1 + 3) & 1) == 0) {
      FUN_10924a40c(4,&UNK_10f562e5b);
    }
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 0x18);
  func_0x0001092920a4(param_1 + 0x108);
  func_0x00010929205c(param_1 + 0xe0);
  func_0x000109291edc(param_1 + 0xb8);
  func_0x000109291e94(param_1 + 0x90);
  lStack_38 = param_1 + 0x78;
  FUN_109291b24(&lStack_38);
  lStack_38 = param_1 + 0x60;
  func_0x000109291b94(&lStack_38);
  __ZNSt3__15mutexD1Ev(param_1 + 0x18);
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1092902dc; end: 109290417;  */

void FUN_1092902dc(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uStack_58;
  undefined1 uStack_49;
  undefined8 *puStack_48;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x18);
  if (param_2 != 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
    lVar2 = *(long *)(param_1 + 0x60);
    lVar1 = *(long *)(param_1 + 0x68);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x10;
      FUN_109233968();
    }
    *(long *)(param_1 + 0x68) = lVar2;
    lVar2 = *(long *)(param_1 + 0x78);
    lVar1 = *(long *)(param_1 + 0x80);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x10;
      FUN_109233b10();
    }
    *(long *)(param_1 + 0x80) = lVar2;
    func_0x00010929212c(param_1 + 0x90);
    func_0x000109292190(param_1 + 0xb8);
    func_0x0001092921e4(param_1 + 0xe0);
    func_0x000109292248(param_1 + 0x108);
  }
  FUN_109290418(param_1 + 0x78,param_1 + 0xb8);
  func_0x00010929212c(param_1 + 0x90);
  lVar2 = *(long *)(param_1 + 0x78);
  if (*(long *)(param_1 + 0x80) != lVar2) {
    lVar1 = 0;
    uVar3 = 0;
    do {
      uStack_58 = *(undefined8 *)(lVar2 + lVar1);
      lVar2 = param_1 + 0x90;
      puStack_48 = &uStack_58;
      FUN_10929229c(lVar2,&uStack_58,&UNK_10dd5b8f9,&puStack_48,&uStack_49);
      *(int *)(lVar2 + 0x18) = (int)uVar3;
      uVar3 = uVar3 + 1;
      lVar2 = *(long *)(param_1 + 0x78);
      lVar1 = lVar1 + 0x10;
    } while (uVar3 < (ulong)(*(long *)(param_1 + 0x80) - lVar2 >> 4));
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 0x18);
  return;
}



/* Entry: 109290418; end: 109290737;  */

void FUN_109290418(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong unaff_x28;
  undefined8 uStack_98;
  long lStack_90;
  ulong uStack_88;
  long *plStack_80;
  long lStack_78;
  float fStack_70;
  
  uStack_88 = 0;
  lStack_90 = 0;
  lStack_78 = 0;
  plStack_80 = (long *)0x0;
  fStack_70 = 1.0;
  if (*(long *)(param_2 + 0x10) != 0) {
    lVar12 = *(long *)(param_2 + 0x10);
    do {
      while (uVar6 = uStack_88, *(long *)(lVar12 + 0xa8) != 0) {
        lVar3 = *(long *)(lVar12 + 0xa8) + -1;
        uVar7 = lVar3 + *(long *)(lVar12 + 0xa0);
        uVar10 = *(ulong *)(*(long *)(*(long *)(lVar12 + 0x88) + (uVar7 >> 9) * 8) +
                           (uVar7 & 0x1ff) * 8);
        uVar7 = ((ulong)(uint)((int)uVar10 << 3) + 8 ^ uVar10 >> 0x20) * -0x622015f714c7d297;
        uVar7 = (uVar10 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
        uVar7 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
        if (uStack_88 != 0) {
          uVar5 = uStack_88 - 1;
          if ((uStack_88 & uVar5) == 0) {
            unaff_x28 = uVar7 & uVar5;
          }
          else {
            unaff_x28 = uVar7;
            if (uStack_88 <= uVar7) {
              uVar9 = 0;
              if (uStack_88 != 0) {
                uVar9 = uVar7 / uStack_88;
              }
              unaff_x28 = uVar7 - uVar9 * uStack_88;
            }
          }
          plVar8 = *(long **)(lStack_90 + unaff_x28 * 8);
          if (plVar8 != (long *)0x0) {
            do {
              while( true ) {
                plVar8 = (long *)*plVar8;
                if (plVar8 == (long *)0x0) goto LAB_10929054c;
                uVar9 = plVar8[1];
                if (uVar9 != uVar7) break;
                if (plVar8[2] == uVar10) goto LAB_109290660;
              }
              if ((uStack_88 & uVar5) == 0) {
                uVar9 = uVar9 & uVar5;
              }
              else if (uStack_88 <= uVar9) {
                uVar1 = 0;
                if (uStack_88 != 0) {
                  uVar1 = uVar9 / uStack_88;
                }
                uVar9 = uVar9 - uVar1 * uStack_88;
              }
            } while (uVar9 == unaff_x28);
          }
        }
LAB_10929054c:
        plVar8 = (long *)0x18;
        __Znwm();
        *plVar8 = 0;
        plVar8[1] = uVar7;
        plVar8[2] = uVar10;
        if ((uVar6 == 0) || (fStack_70 * (float)uVar6 < (float)(lStack_78 + 1))) {
          uVar10 = 1;
          if (2 < uVar6) {
            uVar10 = (ulong)((uVar6 & uVar6 - 1) != 0);
          }
          uVar10 = uVar10 | uVar6 << 1;
          uVar6 = (ulong)((float)(lStack_78 + 1) / fStack_70);
          if (uVar10 <= uVar6) {
            uVar10 = uVar6;
          }
          FUN_10928f660(&lStack_90,uVar10);
          uVar6 = uStack_88;
          if ((uStack_88 & uStack_88 - 1) == 0) {
            unaff_x28 = uStack_88 - 1 & uVar7;
          }
          else {
            unaff_x28 = uVar7;
            if (uStack_88 <= uVar7) {
              uVar10 = 0;
              if (uStack_88 != 0) {
                uVar10 = uVar7 / uStack_88;
              }
              unaff_x28 = uVar7 - uVar10 * uStack_88;
            }
          }
        }
        plVar4 = *(long **)(lStack_90 + unaff_x28 * 8);
        if (plVar4 == (long *)0x0) {
          *plVar8 = (long)plStack_80;
          *(long ***)(lStack_90 + unaff_x28 * 8) = &plStack_80;
          plStack_80 = plVar8;
          if (*plVar8 != 0) {
            uVar7 = *(ulong *)(*plVar8 + 8);
            if ((uVar6 & uVar6 - 1) == 0) {
              uVar7 = uVar7 & uVar6 - 1;
            }
            else if (uVar6 <= uVar7) {
              uVar10 = 0;
              if (uVar6 != 0) {
                uVar10 = uVar7 / uVar6;
              }
              uVar7 = uVar7 - uVar10 * uVar6;
            }
            plVar4 = (long *)(lStack_90 + uVar7 * 8);
            goto LAB_109290648;
          }
        }
        else {
          *plVar8 = *plVar4;
LAB_109290648:
          *plVar4 = (long)plVar8;
        }
        lStack_78 = lStack_78 + 1;
        lVar3 = *(long *)(lVar12 + 0xa8) + -1;
LAB_109290660:
        *(long *)(lVar12 + 0xa8) = lVar3;
        func_0x000109292da4(lVar12 + 0x80);
      }
      lVar3 = param_2;
      func_0x000109292e00(param_2,lVar12);
      lVar12 = lVar3;
    } while (lVar3 != 0);
  }
  puVar2 = (undefined8 *)*param_1;
  puVar11 = (undefined8 *)param_1[1];
  if (puVar2 != puVar11) {
    do {
      uStack_98 = *puVar2;
      plVar8 = &lStack_90;
      FUN_10928f86c(plVar8,&uStack_98);
      if (plVar8 != (long *)0x0) {
        FUN_10928ea3c(puVar2);
      }
      puVar2 = puVar2 + 2;
    } while (puVar2 != puVar11);
    puVar2 = (undefined8 *)*param_1;
    puVar11 = (undefined8 *)param_1[1];
  }
  uStack_98 = 0;
  FUN_10928f46c(puVar2,puVar11,&uStack_98);
  FUN_10928f3e0(param_1,puVar2,param_1[1]);
  func_0x00010928f618(&lStack_90);
  return;
}



/* Entry: 109290738; end: 10929077b;  */

void FUN_109290738(long param_1)

{
  __ZNSt3__15mutex4lockEv(param_1 + 0x18);
  FUN_10929077c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x18);
  return;
}



/* Entry: 10929077c; end: 10929123f;  */

void FUN_10929077c(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 *unaff_x28;
  float fVar28;
  undefined8 auStack_e0 [10];
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar26 = *(undefined8 **)(param_1 + 0xf0);
  if (puVar26 == (undefined8 *)0x0) {
LAB_109291180:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
    ___stack_chk_fail();
LAB_1092911cc:
    func_0x000104c4f740();
LAB_1092911d0:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1092911d4);
    (*pcVar5)();
  }
  plVar1 = (long *)(param_1 + 0xb8);
  plVar2 = (long *)(param_1 + 200);
LAB_1092907e4:
  uVar11 = *(ulong *)(param_1 + 0x98);
  if (uVar11 != 0) {
    plVar6 = (long *)puVar26[2];
    uVar16 = ((ulong)(uint)((int)plVar6 << 3) + 8 ^ (ulong)plVar6 >> 0x20) * -0x622015f714c7d297;
    uVar16 = ((ulong)plVar6 >> 0x20 ^ uVar16 >> 0x2f ^ uVar16) * -0x622015f714c7d297;
    uVar16 = (uVar16 ^ uVar16 >> 0x2f) * -0x622015f714c7d297;
    uVar17 = uVar11 - 1;
    if ((uVar11 & uVar17) == 0) {
      uVar19 = uVar16 & uVar17;
    }
    else {
      uVar19 = uVar16;
      if (uVar11 <= uVar16) {
        uVar19 = 0;
        if (uVar11 != 0) {
          uVar19 = uVar16 / uVar11;
        }
        uVar19 = uVar16 - uVar19 * uVar11;
      }
    }
    plVar22 = *(long **)(*(long *)(param_1 + 0x90) + uVar19 * 8);
    if (plVar22 != (long *)0x0) {
      do {
        while( true ) {
          plVar22 = (long *)*plVar22;
          if (plVar22 == (long *)0x0) goto LAB_1092908c4;
          uVar23 = plVar22[1];
          if (uVar23 != uVar16) break;
          if ((long *)plVar22[2] == plVar6) {
            if (((*(char *)(puVar26 + 3) == '\x01') &&
                (lVar12 = *(long *)(*(long *)(param_1 + 0x78) + (long)*(int *)(plVar22 + 3) * 0x10 +
                                   8), lVar12 != 0)) && (*(long *)(lVar12 + 8) == 0)) {
              (**(code **)(*plVar6 + 0x30))();
              uVar11 = *(ulong *)(param_1 + 0x110);
              if (uVar11 == 0) goto LAB_1092911b8;
              uVar16 = puVar26[2];
              uVar17 = ((ulong)(uint)((int)uVar16 << 3) + 8 ^ uVar16 >> 0x20) * -0x622015f714c7d297;
              uVar17 = (uVar16 >> 0x20 ^ uVar17 >> 0x2f ^ uVar17) * -0x622015f714c7d297;
              uVar17 = (uVar17 ^ uVar17 >> 0x2f) * -0x622015f714c7d297;
              uVar19 = uVar11 - 1;
              if ((uVar11 & uVar19) == 0) {
                uVar23 = uVar17 & uVar19;
              }
              else {
                uVar23 = uVar17;
                if (uVar11 <= uVar17) {
                  uVar23 = 0;
                  if (uVar11 != 0) {
                    uVar23 = uVar17 / uVar11;
                  }
                  uVar23 = uVar17 - uVar23 * uVar11;
                }
              }
              plVar6 = *(long **)(*(long *)(param_1 + 0x108) + uVar23 * 8);
              if (plVar6 == (long *)0x0) goto LAB_1092911b8;
              goto LAB_109290948;
            }
            goto LAB_1092908c4;
          }
        }
        if ((uVar11 & uVar17) == 0) {
          uVar23 = uVar23 & uVar17;
        }
        else if (uVar11 <= uVar23) {
          uVar24 = 0;
          if (uVar11 != 0) {
            uVar24 = uVar23 / uVar11;
          }
          uVar23 = uVar23 - uVar24 * uVar11;
        }
      } while (uVar23 == uVar19);
    }
  }
LAB_1092908c4:
  puVar26 = (undefined8 *)*puVar26;
  goto LAB_1092908c8;
  while (plVar6[2] != uVar16) {
LAB_109290948:
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) goto LAB_1092911b8;
    uVar24 = plVar6[1];
    if (uVar24 != uVar17) {
      if ((uVar11 & uVar19) == 0) {
        uVar24 = uVar24 & uVar19;
      }
      else if (uVar11 <= uVar24) {
        uVar4 = 0;
        if (uVar11 != 0) {
          uVar4 = uVar24 / uVar11;
        }
        uVar24 = uVar24 - uVar4 * uVar11;
      }
      if (uVar24 != uVar23) goto LAB_1092911b8;
      goto LAB_109290948;
    }
  }
  FUN_109291ca0(auStack_e0,plVar6 + 3);
  uVar9 = uStack_88;
  puVar14 = puStack_90;
  puVar25 = puStack_90;
  FUN_109291c04(puStack_90,uStack_88);
  puVar27 = *(undefined8 **)(param_1 + 0xc0);
  puStack_78 = puVar25;
  if (puVar27 != (undefined8 *)0x0) {
    uVar11 = (long)puVar27 - 1;
    if (((ulong)puVar27 & uVar11) == 0) {
      unaff_x28 = (undefined8 *)(uVar11 & (ulong)puVar25);
    }
    else {
      unaff_x28 = puVar25;
      if (puVar27 <= puVar25) {
        uVar16 = 0;
        if (puVar27 != (undefined8 *)0x0) {
          uVar16 = (ulong)puVar25 / (ulong)puVar27;
        }
        unaff_x28 = (undefined8 *)((long)puVar25 - uVar16 * (long)puVar27);
      }
    }
    puVar13 = *(undefined8 **)(*plVar1 + (long)unaff_x28 * 8);
    if (puVar13 != (undefined8 *)0x0) {
      for (plVar6 = (long *)*puVar13; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
        puVar13 = (undefined8 *)plVar6[1];
        if (puVar13 == puVar25) {
          if ((undefined8 *)plVar6[0xf] == puVar25) {
            uVar16 = plVar6[0xc];
            puVar13 = (undefined8 *)plVar6[0xd];
            FUN_109292694(uVar16,puVar13,puVar14,uVar9);
            if ((uVar16 & 1) != 0) goto LAB_109290d44;
          }
        }
        else {
          if (((ulong)puVar27 & uVar11) == 0) {
            puVar13 = (undefined8 *)((ulong)puVar13 & uVar11);
          }
          else if (puVar27 <= puVar13) {
            uVar16 = 0;
            if (puVar27 != (undefined8 *)0x0) {
              uVar16 = (ulong)puVar13 / (ulong)puVar27;
            }
            puVar13 = (undefined8 *)((long)puVar13 - uVar16 * (long)puVar27);
          }
          if (puVar13 != unaff_x28) break;
        }
      }
    }
  }
  plVar6 = (long *)0xb0;
  __Znwm();
  *plVar6 = 0;
  plVar6[1] = (long)puVar25;
  plVar6[5] = 0;
  plVar6[4] = 0;
  plVar6[7] = 0;
  plVar6[6] = 0;
  plVar6[9] = 0;
  plVar6[8] = 0;
  plVar6[0xb] = 0;
  plVar6[10] = 0;
  plVar6[3] = 0;
  plVar6[2] = 0;
  plVar6[0xc] = (long)(plVar6 + 2);
  plVar6[0xe] = 4;
  plVar6[0xd] = 0;
  puVar13 = auStack_e0;
  FUN_109292718();
  plVar6[0xf] = (long)puStack_78;
  plVar6[0x11] = 0;
  plVar6[0x10] = 0;
  plVar6[0x13] = 0;
  plVar6[0x12] = 0;
  plVar6[0x15] = 0;
  plVar6[0x14] = 0;
  fVar28 = (float)(*(long *)(param_1 + 0xd0) + 1);
  if ((puVar27 == (undefined8 *)0x0) || (*(float *)(param_1 + 0xd8) * (float)puVar27 < fVar28)) {
    uVar11 = 1;
    if ((undefined8 *)0x2 < puVar27) {
      uVar11 = (ulong)(((ulong)puVar27 & (long)puVar27 - 1U) != 0);
    }
    puVar14 = (undefined8 *)(uVar11 | (long)puVar27 << 1);
    puVar27 = (undefined8 *)(long)(fVar28 / *(float *)(param_1 + 0xd8));
    if (puVar14 <= puVar27) {
      puVar14 = puVar27;
    }
    if ((long)puVar14 - 1U == 0) {
      puVar14 = (undefined8 *)0x2;
    }
    else if (((ulong)puVar14 & (long)puVar14 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    puVar27 = *(undefined8 **)(param_1 + 0xc0);
    if (puVar27 < puVar14) {
LAB_109290b50:
      if ((ulong)puVar14 >> 0x3d != 0) goto LAB_1092911cc;
      lVar12 = (long)puVar14 << 3;
      __Znwm();
      lVar7 = *plVar1;
      *plVar1 = lVar12;
      if (lVar7 != 0) {
        __ZdlPv();
      }
      puVar27 = (undefined8 *)0x0;
      *(undefined8 **)(param_1 + 0xc0) = puVar14;
      do {
        *(undefined8 *)(*plVar1 + (long)puVar27 * 8) = 0;
        puVar27 = (undefined8 *)((long)puVar27 + 1);
      } while (puVar14 != puVar27);
      plVar22 = (long *)*plVar2;
      puVar27 = puVar14;
      if (plVar22 != (long *)0x0) {
        puVar18 = (undefined8 *)plVar22[1];
        uVar11 = (long)puVar14 - 1;
        if (((ulong)puVar14 & uVar11) == 0) {
          puVar18 = (undefined8 *)((ulong)puVar18 & uVar11);
        }
        else if (puVar14 <= puVar18) {
          uVar16 = 0;
          if (puVar14 != (undefined8 *)0x0) {
            uVar16 = (ulong)puVar18 / (ulong)puVar14;
          }
          puVar18 = (undefined8 *)((long)puVar18 - uVar16 * (long)puVar14);
        }
        *(long **)(*plVar1 + (long)puVar18 * 8) = plVar2;
        plVar20 = (long *)*plVar22;
        while (plVar20 != (long *)0x0) {
          puVar15 = (undefined8 *)plVar20[1];
          if (((ulong)puVar14 & uVar11) == 0) {
            puVar15 = (undefined8 *)((ulong)puVar15 & uVar11);
          }
          else if (puVar14 <= puVar15) {
            uVar16 = 0;
            if (puVar14 != (undefined8 *)0x0) {
              uVar16 = (ulong)puVar15 / (ulong)puVar14;
            }
            puVar15 = (undefined8 *)((long)puVar15 - uVar16 * (long)puVar14);
          }
          plVar21 = plVar20;
          if (puVar15 != puVar18) {
            lVar12 = *plVar1;
            if (*(long *)(lVar12 + (long)puVar15 * 8) == 0) {
              *(long **)(lVar12 + (long)puVar15 * 8) = plVar22;
              puVar18 = puVar15;
            }
            else {
              *plVar22 = *plVar20;
              *plVar20 = **(undefined8 **)(lVar12 + (long)puVar15 * 8);
              **(long **)(lVar12 + (long)puVar15 * 8) = (long)plVar20;
              plVar21 = plVar22;
            }
          }
          plVar22 = plVar21;
          plVar20 = (long *)*plVar21;
        }
      }
    }
    else if (puVar14 < puVar27) {
      puVar18 = (undefined8 *)(long)((float)*(ulong *)(param_1 + 0xd0) / *(float *)(param_1 + 0xd8))
      ;
      if ((puVar27 < (undefined8 *)0x3) || (((ulong)puVar27 & (long)puVar27 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((undefined8 *)0x1 < puVar18) {
        puVar18 = (undefined8 *)(1L << (-LZCOUNT((long)puVar18 + -1) & 0x3fU));
      }
      if (puVar14 <= puVar18) {
        puVar14 = puVar18;
      }
      if (puVar14 < puVar27) {
        if (puVar14 != (undefined8 *)0x0) goto LAB_109290b50;
        lVar12 = *plVar1;
        *plVar1 = 0;
        if (lVar12 != 0) {
          __ZdlPv();
        }
        *(undefined8 *)(param_1 + 0xc0) = 0;
        puVar27 = (undefined8 *)0x0;
      }
      else {
        puVar27 = *(undefined8 **)(param_1 + 0xc0);
      }
    }
    if (((ulong)puVar27 & (long)puVar27 - 1U) == 0) {
      unaff_x28 = (undefined8 *)((long)puVar27 - 1U & (ulong)puVar25);
    }
    else {
      unaff_x28 = puVar25;
      if (puVar27 <= puVar25) {
        uVar11 = 0;
        if (puVar27 != (undefined8 *)0x0) {
          uVar11 = (ulong)puVar25 / (ulong)puVar27;
        }
        unaff_x28 = (undefined8 *)((long)puVar25 - uVar11 * (long)puVar27);
      }
    }
  }
  lVar12 = *plVar1;
  plVar22 = *(long **)(lVar12 + (long)unaff_x28 * 8);
  if (plVar22 == (long *)0x0) {
    *plVar6 = *plVar2;
    *plVar2 = (long)plVar6;
    *(long **)(lVar12 + (long)unaff_x28 * 8) = plVar2;
    if (*plVar6 != 0) {
      puVar14 = *(undefined8 **)(*plVar6 + 8);
      if (((ulong)puVar27 & (long)puVar27 - 1U) == 0) {
        puVar14 = (undefined8 *)((ulong)puVar14 & (long)puVar27 - 1U);
      }
      else if (puVar27 <= puVar14) {
        uVar11 = 0;
        if (puVar27 != (undefined8 *)0x0) {
          uVar11 = (ulong)puVar14 / (ulong)puVar27;
        }
        puVar14 = (undefined8 *)((long)puVar14 - uVar11 * (long)puVar27);
      }
      plVar22 = (long *)(*plVar1 + (long)puVar14 * 8);
      goto LAB_109290d34;
    }
  }
  else {
    *plVar6 = *plVar22;
LAB_109290d34:
    *plVar22 = (long)plVar6;
  }
  *(long *)(param_1 + 0xd0) = *(long *)(param_1 + 0xd0) + 1;
LAB_109290d44:
  puVar14 = (undefined8 *)plVar6[0x11];
  puVar25 = (undefined8 *)plVar6[0x12];
  unaff_x28 = (undefined8 *)((long)puVar25 - (long)puVar14);
  uVar11 = 0;
  if (unaff_x28 != (undefined8 *)0x0) {
    uVar11 = ((long)puVar25 - (long)puVar14) * 0x40 - 1;
  }
  uVar17 = plVar6[0x14];
  lVar12 = plVar6[0x15];
  uVar16 = lVar12 + uVar17;
  if (uVar11 == uVar16) {
    if (uVar17 < 0x200) {
      puVar27 = (undefined8 *)plVar6[0x13];
      puVar18 = (undefined8 *)plVar6[0x10];
      if (unaff_x28 < (undefined8 *)((long)puVar27 - (long)puVar18)) {
        uVar9 = 0x1000;
        __Znwm();
        if (puVar27 == puVar25) {
          if (puVar14 == puVar18) {
            lVar12 = (long)puVar27 - (long)puVar14 >> 2;
            if (puVar25 == puVar14) {
              lVar12 = 1;
            }
            lVar7 = lVar12;
            FUN_109292920();
            puVar14 = (undefined8 *)(lVar7 + (lVar12 * 2 + 6U & 0xfffffffffffffff8));
            lVar12 = plVar6[0x12] - plVar6[0x11];
            puVar25 = puVar14;
            if (lVar12 != 0) {
              puVar25 = (undefined8 *)((long)puVar14 + lVar12);
              puVar27 = (undefined8 *)plVar6[0x11];
              puVar18 = puVar14;
              do {
                *puVar18 = *puVar27;
                lVar12 = lVar12 + -8;
                puVar27 = puVar27 + 1;
                puVar18 = puVar18 + 1;
              } while (lVar12 != 0);
            }
            lVar12 = plVar6[0x10];
            plVar6[0x10] = lVar7;
            plVar6[0x11] = (long)puVar14;
            plVar6[0x12] = (long)puVar25;
            plVar6[0x13] = lVar7 + (long)puVar13 * 8;
            if (lVar12 != 0) {
              __ZdlPv(lVar12);
              puVar14 = (undefined8 *)plVar6[0x11];
            }
          }
          puVar14[-1] = uVar9;
          puVar25 = (undefined8 *)plVar6[0x11];
          puVar14 = puVar25 + -1;
          plVar6[0x11] = (long)puVar14;
          goto LAB_109290d7c;
        }
        *puVar25 = uVar9;
        plVar6[0x12] = plVar6[0x12] + 8;
      }
      else {
        puVar15 = (undefined8 *)((long)puVar27 - (long)puVar18 >> 2);
        if (puVar27 == puVar18) {
          puVar15 = (undefined8 *)0x1;
        }
        FUN_109292920();
        uVar9 = 0x1000;
        puVar10 = puVar13;
        __Znwm();
        puVar27 = (undefined8 *)((long)puVar15 + (long)unaff_x28);
        puVar18 = puVar15 + (long)puVar13;
        puVar8 = puVar15;
        if (unaff_x28 == (undefined8 *)((long)puVar13 * 8)) {
          if ((long)unaff_x28 < 1) {
            puVar27 = (undefined8 *)((long)puVar27 - (long)puVar15 >> 2);
            if (puVar25 == puVar14) {
              puVar27 = (undefined8 *)0x1;
            }
            puVar8 = puVar27;
            FUN_109292920();
            puVar27 = puVar8 + ((ulong)puVar27 >> 2);
            puVar18 = puVar8 + (long)puVar10;
            if (puVar15 != (undefined8 *)0x0) {
              __ZdlPv(puVar15);
            }
          }
          else {
            lVar12 = ((long)puVar27 - (long)puVar15 >> 3) + 1;
            puVar27 = puVar27 + -((ulong)(lVar12 - (lVar12 >> 0x3f)) >> 1);
          }
        }
        unaff_x28 = puVar27 + 1;
        *puVar27 = uVar9;
        puVar25 = (undefined8 *)plVar6[0x12];
        puVar14 = (undefined8 *)plVar6[0x11];
        while (puVar25 != puVar14) {
          puVar13 = puVar8;
          puVar14 = puVar27;
          if (puVar27 == puVar8) {
            if (unaff_x28 < puVar18) {
              lVar12 = ((long)puVar18 - (long)unaff_x28 >> 3) + 1;
              lVar7 = (long)unaff_x28 - (long)puVar8;
              lVar3 = (long)unaff_x28 - (long)puVar8;
              unaff_x28 = unaff_x28 + ((ulong)(lVar12 - (lVar12 >> 0x3f)) >> 1);
              puVar14 = (undefined8 *)((long)unaff_x28 - lVar7);
              if (lVar3 != 0) {
                _memmove(puVar14,puVar27,lVar3);
                puVar10 = puVar27;
              }
            }
            else {
              puVar14 = (undefined8 *)((long)puVar18 - (long)puVar8 >> 2);
              if ((long)puVar18 - (long)puVar8 == 0) {
                puVar14 = (undefined8 *)0x1;
              }
              puVar13 = puVar14;
              FUN_109292920();
              puVar14 = (undefined8 *)
                        ((long)puVar13 + ((long)puVar14 * 2 + 6U & 0xfffffffffffffff8));
              lVar12 = (long)unaff_x28 - (long)puVar8;
              unaff_x28 = puVar14;
              if (lVar12 != 0) {
                unaff_x28 = (undefined8 *)((long)puVar14 + lVar12);
                puVar18 = puVar14;
                do {
                  *puVar18 = *puVar27;
                  lVar12 = lVar12 + -8;
                  puVar18 = puVar18 + 1;
                  puVar27 = puVar27 + 1;
                } while (lVar12 != 0);
              }
              puVar18 = puVar13 + (long)puVar10;
              if (puVar8 != (undefined8 *)0x0) {
                __ZdlPv(puVar8);
              }
            }
          }
          puVar25 = puVar25 + -1;
          puVar27 = puVar14 + -1;
          *puVar27 = *puVar25;
          puVar8 = puVar13;
          puVar14 = (undefined8 *)plVar6[0x11];
        }
        lVar12 = plVar6[0x10];
        plVar6[0x10] = (long)puVar8;
        plVar6[0x11] = (long)puVar27;
        plVar6[0x12] = (long)unaff_x28;
        plVar6[0x13] = (long)puVar18;
        if (lVar12 != 0) {
          __ZdlPv();
        }
      }
    }
    else {
      plVar6[0x14] = uVar17 - 0x200;
      puVar25 = puVar14 + 1;
LAB_109290d7c:
      uVar9 = *puVar14;
      plVar6[0x11] = (long)puVar25;
      FUN_109292824(plVar6 + 0x10,uVar9);
    }
    puVar14 = (undefined8 *)plVar6[0x11];
    lVar12 = plVar6[0x15];
    uVar16 = plVar6[0x14] + lVar12;
  }
  *(undefined8 *)(puVar14[uVar16 >> 9] + (uVar16 & 0x1ff) * 8) = puVar26[2];
  plVar6[0x15] = lVar12 + 1;
  uStack_88 = 0;
  if (puStack_90 != auStack_e0) {
    __ZdlPvSt11align_val_t(puStack_90,4);
  }
  uVar16 = *(ulong *)(param_1 + 0xe8);
  puVar14 = (undefined8 *)*puVar26;
  uVar11 = puVar26[1];
  uVar17 = uVar16 - 1;
  if ((uVar16 & uVar17) == 0) {
    uVar11 = uVar17 & uVar11;
  }
  else if (uVar16 <= uVar11) {
    uVar19 = 0;
    if (uVar16 != 0) {
      uVar19 = uVar11 / uVar16;
    }
    uVar11 = uVar11 - uVar19 * uVar16;
  }
  puVar25 = *(undefined8 **)(*(long *)(param_1 + 0xe0) + uVar11 * 8);
  do {
    puVar27 = puVar25;
    puVar25 = (undefined8 *)*puVar27;
  } while ((undefined8 *)*puVar27 != puVar26);
  puVar25 = puVar14;
  if (puVar27 == (undefined8 *)(param_1 + 0xf0)) {
LAB_1092910e4:
    if (puVar14 == (undefined8 *)0x0) {
LAB_10929111c:
      *(undefined8 *)(*(long *)(param_1 + 0xe0) + uVar11 * 8) = 0;
      puVar25 = (undefined8 *)*puVar26;
      goto LAB_109291124;
    }
    uVar19 = puVar14[1];
    if ((uVar16 & uVar17) == 0) {
      uVar23 = uVar19 & uVar17;
    }
    else {
      uVar23 = uVar19;
      if (uVar16 <= uVar19) {
        uVar23 = 0;
        if (uVar16 != 0) {
          uVar23 = uVar19 / uVar16;
        }
        uVar23 = uVar19 - uVar23 * uVar16;
      }
    }
    if (uVar23 != uVar11) goto LAB_10929111c;
  }
  else {
    uVar19 = puVar27[1];
    if ((uVar16 & uVar17) == 0) {
      uVar19 = uVar19 & uVar17;
    }
    else if (uVar16 <= uVar19) {
      uVar23 = 0;
      if (uVar16 != 0) {
        uVar23 = uVar19 / uVar16;
      }
      uVar19 = uVar19 - uVar23 * uVar16;
    }
    if (uVar19 != uVar11) goto LAB_1092910e4;
LAB_109291124:
    if (puVar25 == (undefined8 *)0x0) goto LAB_109291160;
    uVar19 = puVar25[1];
  }
  if ((uVar16 & uVar17) == 0) {
    uVar19 = uVar19 & uVar17;
  }
  else if (uVar16 <= uVar19) {
    uVar17 = 0;
    if (uVar16 != 0) {
      uVar17 = uVar19 / uVar16;
    }
    uVar19 = uVar19 - uVar17 * uVar16;
  }
  if (uVar19 != uVar11) {
    *(undefined8 **)(*(long *)(param_1 + 0xe0) + uVar19 * 8) = puVar27;
    puVar25 = (undefined8 *)*puVar26;
  }
LAB_109291160:
  *puVar27 = puVar25;
  *puVar26 = 0;
  *(long *)(param_1 + 0xf8) = *(long *)(param_1 + 0xf8) + -1;
  __ZdlPv(puVar26);
  puVar26 = puVar14;
LAB_1092908c8:
  if (puVar26 == (undefined8 *)0x0) goto LAB_109291180;
  goto LAB_1092907e4;
LAB_1092911b8:
  FUN_109262df8(&UNK_10f639994);
  goto LAB_1092911d0;
}



/* Entry: 109291240; end: 109291b23;  */

void FUN_109291240(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  code *pcVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  long lStack_e0;
  undefined1 uStack_d1;
  long lStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  
  __ZNSt3__15mutex4lockEv(param_2 + 3);
  uVar14 = *(ulong *)(param_3 + 0x78);
  uVar11 = *(undefined8 *)(param_3 + 0x80);
  uVar16 = uVar14;
  FUN_109291c04(uVar14,uVar11);
  uVar21 = param_2[0x18];
  if (uVar21 != 0) {
    uVar22 = uVar21 - 1;
    if ((uVar21 & uVar22) == 0) {
      uVar23 = uVar22 & uVar16;
    }
    else {
      uVar23 = uVar16;
      if (uVar21 <= uVar16) {
        uVar23 = 0;
        if (uVar21 != 0) {
          uVar23 = uVar16 / uVar21;
        }
        uVar23 = uVar16 - uVar23 * uVar21;
      }
    }
    plVar9 = *(long **)(param_2[0x17] + uVar23 * 8);
    if (plVar9 != (long *)0x0) {
      for (plVar9 = (long *)*plVar9; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        uVar10 = plVar9[1];
        if (uVar10 == uVar16) {
          uVar10 = plVar9[0xc];
          FUN_109292694(uVar10,plVar9[0xd],uVar14,uVar11);
          if ((uVar10 & 1) != 0) {
            if (plVar9[0x15] == 0) goto LAB_109291328;
            lVar12 = plVar9[0x15] + -1;
            uVar14 = plVar9[0x14] + lVar12;
            plVar18 = *(long **)(*(long *)(plVar9[0x11] + (uVar14 >> 9) * 8) + (uVar14 & 0x1ff) * 8)
            ;
            plVar9[0x15] = lVar12;
            func_0x000109292da4(plVar9 + 0x10);
            uStack_c0 = (long *)CONCAT44(uStack_c0._4_4_,(undefined4)uStack_c0);
            if (plVar9[0x15] == 0) {
              func_0x000109292e00(param_2 + 0x17,plVar9);
              uStack_c0 = (long *)CONCAT44(uStack_c0._4_4_,(undefined4)uStack_c0);
            }
            goto LAB_109291800;
          }
        }
        else {
          if ((uVar21 & uVar22) == 0) {
            uVar10 = uVar10 & uVar22;
          }
          else if (uVar21 <= uVar10) {
            uVar6 = 0;
            if (uVar21 != 0) {
              uVar6 = uVar10 / uVar21;
            }
            uVar10 = uVar10 - uVar6 * uVar21;
          }
          if (uVar10 != uVar23) break;
        }
      }
    }
  }
  FUN_10929077c(param_2);
LAB_109291328:
  plVar19 = param_2 + 0xc;
  plVar18 = (long *)*plVar19;
  plVar9 = (long *)param_2[0xd];
  while( true ) {
    if (plVar18 == plVar9) goto LAB_109291500;
    uStack_80 = uStack_80 & 0xffffffff00000000;
    uStack_88 = *plVar18;
    uStack_90 = param_3;
    (**(code **)(*(long *)param_2[2] + 0xc0))(&lStack_d0,(long *)param_2[2],&uStack_90);
    plVar20 = plStack_c8;
    if (lStack_d0 != 0) break;
    if (plStack_c8 != (long *)0x0) {
      plVar15 = plStack_c8 + 1;
      do {
        lVar12 = *plVar15;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *plVar15 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
      }
    }
    plVar18 = plVar18 + 2;
  }
  uStack_c0._0_4_ = (undefined4)lStack_d0;
  uStack_c0._4_4_ = (undefined4)((ulong)lStack_d0 >> 0x20);
  puVar8 = param_2 + 0x21;
  FUN_109292954(puVar8,lStack_d0,&uStack_c0);
  FUN_109291e00(puVar8 + 3,param_3 + 0x28);
  plVar18 = param_2 + 0xf;
  lVar12 = *plVar18;
  plVar9 = (long *)param_2[0x10];
  lStack_e0 = lStack_d0;
  uStack_c0 = &lStack_e0;
  puVar8 = param_2 + 0x12;
  FUN_10929229c(puVar8,&lStack_e0,&UNK_10dd5b8f9,&uStack_c0,&uStack_d1);
  *(int *)(puVar8 + 3) = (int)((ulong)((long)plVar9 - lVar12) >> 4);
  plVar20 = (long *)param_2[0x10];
  if (plVar20 < (long *)param_2[0x11]) {
    plVar20[1] = (long)plStack_c8;
    *plVar20 = lStack_d0;
    lStack_d0 = 0;
    plStack_c8 = (long *)0x0;
    plVar18 = (long *)*plVar20;
    param_2[0x10] = plVar20 + 2;
    goto LAB_1092914fc;
  }
  lVar12 = (long)plVar20 - *plVar18;
  uVar14 = (lVar12 >> 4) + 1;
  if (uVar14 >> 0x3c != 0) {
    FUN_10928f4f0();
    goto LAB_109291adc;
  }
  uVar21 = (long)param_2[0x11] - *plVar18;
  uVar16 = (long)uVar21 >> 3;
  if (uVar16 <= uVar14) {
    uVar16 = uVar14;
  }
  if (0x7fffffffffffffef < uVar21) {
    uVar16 = 0xfffffffffffffff;
  }
  uStack_a0 = plVar18;
  FUN_10928f504();
  lVar1 = param_2[0xf];
  lVar2 = param_2[0x10];
  plVar9 = (long *)((long)plVar18 + lVar12);
  plVar9[1] = (long)plStack_c8;
  *plVar9 = lStack_d0;
  lStack_d0 = 0;
  plStack_c8 = (long *)0x0;
  lVar12 = (long)plVar9 - (lVar2 - lVar1);
  _memcpy(lVar12,lVar1);
  uVar11 = param_2[0xf];
  param_2[0xf] = lVar12;
  param_2[0x10] = plVar9 + 2;
  uVar13 = param_2[0x11];
  param_2[0x11] = plVar18 + uVar16 * 2;
  uStack_b0 = (undefined4)uVar11;
  uStack_ac = (undefined4)((ulong)uVar11 >> 0x20);
  uStack_a8 = (undefined4)uVar13;
  uStack_a4 = (undefined4)((ulong)uVar13 >> 0x20);
  uStack_c0._0_4_ = uStack_b0;
  uStack_c0._4_4_ = uStack_ac;
  uStack_b8 = uStack_b0;
  uStack_b4 = uStack_ac;
  func_0x00010928f538(&uStack_c0);
  plVar20 = plStack_c8;
  param_2[0x10] = plVar9 + 2;
  plVar18 = (long *)*plVar9;
  uStack_c0 = (long *)CONCAT44(uStack_c0._4_4_,(undefined4)uStack_c0);
  if (plStack_c8 != (long *)0x0) {
    plVar15 = plStack_c8 + 1;
    do {
      lVar12 = *plVar15;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uStack_c0 = (long *)CONCAT44(uStack_c0._4_4_,(undefined4)uStack_c0);
    if (lVar12 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
    }
  }
LAB_1092914fc:
  if (plVar18 == (long *)0x0) {
LAB_109291500:
    uStack_a0._4_4_ = 0;
    uStack_98 = 0;
    uStack_a4 = 0;
    uStack_a0._0_4_ = 0;
    uStack_ac = 0;
    uStack_a8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_c0._4_4_ = 0;
    uStack_b8 = 0;
    uStack_c0._0_4_ = 0x20;
    _memset_pattern16(&uStack_b8,&UNK_10dfc04c0,0x20);
    (**(code **)(*(long *)param_2[2] + 0xb8))(&lStack_d0,(long *)param_2[2],&uStack_c0);
    plVar18 = (long *)param_2[0xd];
    if (plVar18 < (long *)param_2[0xe]) {
      plVar18[1] = (long)plStack_c8;
      *plVar18 = lStack_d0;
      param_2[0xd] = plVar18 + 2;
    }
    else {
      lVar12 = (long)plVar18 - *plVar19;
      uVar14 = (lVar12 >> 4) + 1;
      if (uVar14 >> 0x3c != 0) {
        FUN_10928f584();
        goto LAB_109291adc;
      }
      uVar21 = (long)param_2[0xe] - *plVar19;
      uVar16 = (long)uVar21 >> 3;
      if (uVar16 <= uVar14) {
        uVar16 = uVar14;
      }
      if (0x7fffffffffffffef < uVar21) {
        uVar16 = 0xfffffffffffffff;
      }
      plStack_70 = plVar19;
      FUN_10928f598();
      lVar1 = param_2[0xc];
      plVar18 = (long *)((long)plVar19 + lVar12);
      lVar12 = (long)plVar18 - (param_2[0xd] - lVar1);
      plVar18[1] = (long)plStack_c8;
      *plVar18 = lStack_d0;
      lStack_d0 = 0;
      plStack_c8 = (long *)0x0;
      _memcpy(lVar12,lVar1);
      uStack_90 = param_2[0xc];
      param_2[0xc] = lVar12;
      param_2[0xd] = plVar18 + 2;
      uStack_78 = param_2[0xe];
      param_2[0xe] = plVar19 + uVar16 * 2;
      uStack_88 = uStack_90;
      uStack_80 = uStack_90;
      func_0x00010928f5cc(&uStack_90);
      plVar19 = plStack_c8;
      param_2[0xd] = plVar18 + 2;
      if (plStack_c8 != (long *)0x0) {
        plVar18 = plStack_c8 + 1;
        do {
          lVar12 = *plVar18;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar5) {
            *plVar18 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
        }
      }
    }
    uStack_80 = uStack_80 & 0xffffffff00000000;
    uStack_88 = *(long *)(param_2[0xd] + -0x10);
    uStack_90 = param_3;
    (**(code **)(*(long *)param_2[2] + 0xc0))(&lStack_d0,(long *)param_2[2],&uStack_90);
    uStack_c0._0_4_ = (undefined4)lStack_d0;
    uStack_c0._4_4_ = (undefined4)((ulong)lStack_d0 >> 0x20);
    puVar8 = param_2 + 0x21;
    FUN_109292954(puVar8,lStack_d0,&uStack_c0);
    FUN_109291e00(puVar8 + 3,param_3 + 0x28);
    plVar20 = param_2 + 0xf;
    lVar12 = *plVar20;
    lVar1 = param_2[0x10];
    lStack_e0 = lStack_d0;
    uStack_c0 = &lStack_e0;
    puVar8 = param_2 + 0x12;
    FUN_10929229c(puVar8,&lStack_e0,&UNK_10dd5b8f9,&uStack_c0,&uStack_d1);
    *(int *)(puVar8 + 3) = (int)((ulong)(lVar1 - lVar12) >> 4);
    plVar19 = (long *)param_2[0x10];
    if (plVar19 < (long *)param_2[0x11]) {
      plVar19[1] = (long)plStack_c8;
      *plVar19 = lStack_d0;
      lStack_d0 = 0;
      plStack_c8 = (long *)0x0;
      plVar18 = (long *)*plVar19;
      param_2[0x10] = plVar19 + 2;
    }
    else {
      lVar12 = (long)plVar19 - *plVar20;
      uVar14 = (lVar12 >> 4) + 1;
      if (uVar14 >> 0x3c != 0) {
        FUN_10928f4f0();
LAB_109291adc:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x109291ae0);
        (*pcVar7)();
      }
      uVar21 = (long)param_2[0x11] - *plVar20;
      uVar16 = (long)uVar21 >> 3;
      if (uVar16 <= uVar14) {
        uVar16 = uVar14;
      }
      if (0x7fffffffffffffef < uVar21) {
        uVar16 = 0xfffffffffffffff;
      }
      uStack_a0 = plVar20;
      FUN_10928f504();
      lVar1 = param_2[0xf];
      lVar2 = param_2[0x10];
      plVar18 = (long *)((long)plVar20 + lVar12);
      plVar18[1] = (long)plStack_c8;
      *plVar18 = lStack_d0;
      lStack_d0 = 0;
      plStack_c8 = (long *)0x0;
      lVar12 = (long)plVar18 - (lVar2 - lVar1);
      _memcpy(lVar12,lVar1);
      uVar11 = param_2[0xf];
      param_2[0xf] = lVar12;
      param_2[0x10] = plVar18 + 2;
      uVar13 = param_2[0x11];
      param_2[0x11] = plVar20 + uVar16 * 2;
      uStack_b0 = (undefined4)uVar11;
      uStack_ac = (undefined4)((ulong)uVar11 >> 0x20);
      uStack_a8 = (undefined4)uVar13;
      uStack_a4 = (undefined4)((ulong)uVar13 >> 0x20);
      uStack_c0._0_4_ = uStack_b0;
      uStack_c0._4_4_ = uStack_ac;
      uStack_b8 = uStack_b0;
      uStack_b4 = uStack_ac;
      func_0x00010928f538(&uStack_c0);
      plVar19 = plStack_c8;
      param_2[0x10] = plVar18 + 2;
      plVar18 = (long *)*plVar18;
      uStack_c0 = (long *)CONCAT44(uStack_c0._4_4_,(undefined4)uStack_c0);
      if (plStack_c8 != (long *)0x0) {
        plVar20 = plStack_c8 + 1;
        do {
          lVar12 = *plVar20;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar5) {
            *plVar20 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        uStack_c0 = (long *)CONCAT44(uStack_c0._4_4_,(undefined4)uStack_c0);
        if (lVar12 == 0) {
          (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
        }
      }
    }
  }
LAB_109291800:
  uVar14 = ((ulong)(uint)((int)plVar18 << 3) + 8 ^ (ulong)plVar18 >> 0x20) * -0x622015f714c7d297;
  uVar14 = ((ulong)plVar18 >> 0x20 ^ uVar14 >> 0x2f ^ uVar14) * -0x622015f714c7d297;
  plVar20 = (long *)((uVar14 ^ uVar14 >> 0x2f) * -0x622015f714c7d297);
  plVar19 = (long *)param_2[0x1d];
  if (plVar19 != (long *)0x0) {
    uVar14 = (long)plVar19 - 1;
    if (((ulong)plVar19 & uVar14) == 0) {
      plVar9 = (long *)((ulong)plVar20 & uVar14);
    }
    else {
      plVar9 = plVar20;
      if (plVar19 <= plVar20) {
        uVar16 = 0;
        if (plVar19 != (long *)0x0) {
          uVar16 = (ulong)plVar20 / (ulong)plVar19;
        }
        plVar9 = (long *)((long)plVar20 - uVar16 * (long)plVar19);
      }
    }
    plVar15 = *(long **)(param_2[0x1c] + (long)plVar9 * 8);
    if (plVar15 != (long *)0x0) {
      do {
        while( true ) {
          plVar15 = (long *)*plVar15;
          if (plVar15 == (long *)0x0) goto LAB_1092918c4;
          plVar17 = (long *)plVar15[1];
          if (plVar17 != plVar20) break;
          if ((long *)plVar15[2] == plVar18) goto LAB_1092919dc;
        }
        if (((ulong)plVar19 & uVar14) == 0) {
          plVar17 = (long *)((ulong)plVar17 & uVar14);
        }
        else if (plVar19 <= plVar17) {
          uVar16 = 0;
          if (plVar19 != (long *)0x0) {
            uVar16 = (ulong)plVar17 / (ulong)plVar19;
          }
          plVar17 = (long *)((long)plVar17 - uVar16 * (long)plVar19);
        }
      } while (plVar17 == plVar9);
    }
  }
LAB_1092918c4:
  plVar15 = (long *)0x20;
  __Znwm();
  *plVar15 = 0;
  plVar15[1] = (long)plVar20;
  plVar15[2] = (long)plVar18;
  *(undefined1 *)(plVar15 + 3) = 0;
  if ((plVar19 == (long *)0x0) ||
     (*(float *)(param_2 + 0x20) * (float)plVar19 < (float)(param_2[0x1f] + 1))) {
    uVar14 = 1;
    if ((long *)0x2 < plVar19) {
      uVar14 = (ulong)(((ulong)plVar19 & (long)plVar19 - 1U) != 0);
    }
    uVar14 = uVar14 | (long)plVar19 << 1;
    uVar16 = (ulong)((float)(param_2[0x1f] + 1) / *(float *)(param_2 + 0x20));
    if (uVar14 <= uVar16) {
      uVar14 = uVar16;
    }
    FUN_109292f40(param_2 + 0x1c,uVar14);
    plVar19 = (long *)param_2[0x1d];
    if (((ulong)plVar19 & (long)plVar19 - 1U) == 0) {
      plVar9 = (long *)((long)plVar19 - 1U & (ulong)plVar20);
    }
    else {
      plVar9 = plVar20;
      if (plVar19 <= plVar20) {
        uVar14 = 0;
        if (plVar19 != (long *)0x0) {
          uVar14 = (ulong)plVar20 / (ulong)plVar19;
        }
        plVar9 = (long *)((long)plVar20 - uVar14 * (long)plVar19);
      }
    }
  }
  lVar12 = param_2[0x1c];
  plVar20 = *(long **)(lVar12 + (long)plVar9 * 8);
  if (plVar20 == (long *)0x0) {
    plVar20 = param_2 + 0x1e;
    *plVar15 = *plVar20;
    *plVar20 = (long)plVar15;
    *(long **)(lVar12 + (long)plVar9 * 8) = plVar20;
    if (*plVar15 == 0) goto LAB_1092919d0;
    plVar9 = *(long **)(*plVar15 + 8);
    if (((ulong)plVar19 & (long)plVar19 - 1U) == 0) {
      plVar9 = (long *)((ulong)plVar9 & (long)plVar19 - 1U);
    }
    else if (plVar19 <= plVar9) {
      uVar14 = 0;
      if (plVar19 != (long *)0x0) {
        uVar14 = (ulong)plVar9 / (ulong)plVar19;
      }
      plVar9 = (long *)((long)plVar9 - uVar14 * (long)plVar19);
    }
    plVar20 = (long *)(param_2[0x1c] + (long)plVar9 * 8);
  }
  else {
    *plVar15 = *plVar20;
  }
  *plVar20 = (long)plVar15;
LAB_1092919d0:
  param_2[0x1f] = param_2[0x1f] + 1;
LAB_1092919dc:
  (**(code **)(*plVar18 + 0x30))(plVar18);
  uVar11 = *param_2;
  lVar12 = param_2[1];
  if (lVar12 != 0) {
    plVar9 = (long *)(lVar12 + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = *plVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar3 = *(undefined4 *)(param_2 + 0xb);
  *param_1 = plVar18;
  puVar8 = (undefined8 *)0x38;
  __Znwm();
  *puVar8 = &PTR_FUN_110ae76f8;
  puVar8[1] = 0;
  puVar8[2] = 0;
  puVar8[3] = plVar18;
  puVar8[4] = uVar11;
  puVar8[5] = lVar12;
  *(undefined4 *)(puVar8 + 6) = uVar3;
  *(undefined4 *)((long)puVar8 + 0x34) = 0;
  param_1[1] = puVar8;
  func_0x00010928fe04(param_1,plVar18 + 1,plVar18);
  __ZNSt3__15mutex6unlockEv(param_2 + 3);
  return;
}



/* Entry: 109291b24; end: 109291c03;  */

void FUN_109291b24(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_109233b10();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 109291c04; end: 109291c9f;  */

ulong FUN_109291c04(long param_1,long param_2)

{
  ulong uVar1;
  uint *puVar2;
  
  if (param_2 != 0) {
    uVar1 = 0;
    param_2 = param_2 * 0x14;
    puVar2 = (uint *)(param_1 + 8);
    do {
      uVar1 = uVar1 + 0x9e3779b97f4a7c15;
      uVar1 = uVar1 * 0x40 + -0x61c8864680b583eb + (uVar1 >> 2) + (ulong)puVar2[-2] ^ uVar1;
      uVar1 = (ulong)puVar2[-1] + 0x9e3779b97f4a7c15 + uVar1 * 0x40 + (uVar1 >> 2) ^ uVar1;
      uVar1 = (ulong)*puVar2 + 0x9e3779b97f4a7c15 + uVar1 * 0x40 + (uVar1 >> 2) ^ uVar1;
      uVar1 = (ulong)puVar2[1] + 0x9e3779b97f4a7c15 + uVar1 * 0x40 + (uVar1 >> 2) ^ uVar1;
      uVar1 = (ulong)puVar2[2] + 0x9e3779b97f4a7c15 + uVar1 * 0x40 + (uVar1 >> 2) ^ uVar1;
      param_2 = param_2 + -0x14;
      puVar2 = puVar2 + 5;
    } while (param_2 != 0);
    return uVar1;
  }
  return 0;
}



/* Entry: 109291ca0; end: 109291d67;  */

undefined8 * FUN_109291ca0(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[10] = param_1;
  param_1[0xc] = 4;
  param_1[0xb] = 0;
  uVar1 = *(ulong *)(param_2 + 0x58);
  if (4 < uVar1) {
    FUN_109291d68(param_1);
    uVar1 = *(ulong *)(param_2 + 0x58);
  }
  if (uVar1 != 0) {
    puVar2 = *(undefined8 **)(param_2 + 0x50);
    lVar4 = param_1[0xb];
    lVar3 = uVar1 * 0x14;
    do {
      puVar5 = (undefined8 *)(param_1[10] + lVar4 * 0x14);
      uVar7 = puVar2[1];
      uVar6 = *puVar2;
      *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(puVar2 + 2);
      puVar5[1] = uVar7;
      *puVar5 = uVar6;
      lVar4 = param_1[0xb] + 1;
      param_1[0xb] = lVar4;
      puVar2 = (undefined8 *)((long)puVar2 + 0x14);
      lVar3 = lVar3 + -0x14;
    } while (lVar3 != 0);
  }
  return param_1;
}



/* Entry: 109291d68; end: 109291dff;  */

void FUN_109291d68(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (param_2 < 5) {
    param_2 = 4;
  }
  uVar3 = param_2;
  FUN_1092376bc();
  if (*(long *)(param_1 + 0x58) != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      puVar1 = (undefined8 *)(uVar3 + lVar4);
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x50) + lVar4);
      uVar7 = puVar2[1];
      uVar6 = *puVar2;
      *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(puVar2 + 2);
      puVar1[1] = uVar7;
      *puVar1 = uVar6;
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x14;
    } while (uVar5 < *(ulong *)(param_1 + 0x58));
  }
  if (*(long *)(param_1 + 0x50) != param_1) {
    __ZdlPvSt11align_val_t(*(long *)(param_1 + 0x50),4);
  }
  *(ulong *)(param_1 + 0x50) = uVar3;
  *(ulong *)(param_1 + 0x60) = param_2;
  return;
}



/* Entry: 109291e00; end: 109291f93;  */

long FUN_109291e00(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (param_1 != param_2) {
    *(undefined8 *)(param_1 + 0x58) = 0;
    uVar1 = *(ulong *)(param_2 + 0x58);
    if (*(ulong *)(param_1 + 0x60) < uVar1) {
      FUN_109291d68(param_1);
      uVar1 = *(ulong *)(param_2 + 0x58);
    }
    if (uVar1 != 0) {
      puVar2 = *(undefined8 **)(param_2 + 0x50);
      lVar4 = *(long *)(param_1 + 0x58);
      lVar3 = uVar1 * 0x14;
      do {
        puVar5 = (undefined8 *)(*(long *)(param_1 + 0x50) + lVar4 * 0x14);
        uVar7 = puVar2[1];
        uVar6 = *puVar2;
        *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(puVar2 + 2);
        puVar5[1] = uVar7;
        *puVar5 = uVar6;
        lVar4 = *(long *)(param_1 + 0x58) + 1;
        *(long *)(param_1 + 0x58) = lVar4;
        puVar2 = (undefined8 *)((long)puVar2 + 0x14);
        lVar3 = lVar3 + -0x14;
      } while (lVar3 != 0);
    }
  }
  return param_1;
}



/* Entry: 109291f94; end: 10929205b;  */

long * FUN_109291f94(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  param_1[5] = 0;
  lVar3 = (long)puVar1 - (long)puVar4;
  while (uVar2 = lVar3 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar4);
    puVar1 = (undefined8 *)param_1[2];
    puVar4 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar4;
    lVar3 = (long)puVar1 - (long)puVar4;
  }
  if (uVar2 == 1) {
    lVar3 = 0x100;
  }
  else {
    if (uVar2 != 2) goto LAB_109292004;
    lVar3 = 0x200;
  }
  param_1[4] = lVar3;
LAB_109292004:
  if (puVar4 != puVar1) {
    do {
      puVar5 = puVar4 + 1;
      __ZdlPv(*puVar4);
      puVar4 = puVar5;
    } while (puVar5 != puVar1);
    lVar3 = param_1[2];
    if (lVar3 != param_1[1]) {
      param_1[2] = lVar3 + ((param_1[1] - lVar3) + 7U & 0xfffffffffffffff8);
    }
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10929205c; end: 10929229b;  */

long * FUN_10929205c(long *param_1)

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



/* Entry: 10929229c; end: 109292693;  */

undefined1  [16] FUN_10929229c(long *param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  ulong unaff_x24;
  undefined1 auVar17 [16];
  
  uVar6 = *param_2;
  uVar9 = ((ulong)(uint)((int)uVar6 << 3) + 8 ^ uVar6 >> 0x20) * -0x622015f714c7d297;
  uVar9 = (uVar6 >> 0x20 ^ uVar9 >> 0x2f ^ uVar9) * -0x622015f714c7d297;
  uVar16 = (uVar9 ^ uVar9 >> 0x2f) * -0x622015f714c7d297;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar7 = uVar9 - 1;
    if ((uVar9 & uVar7) == 0) {
      unaff_x24 = uVar16 & uVar7;
    }
    else {
      unaff_x24 = uVar16;
      if (uVar9 <= uVar16) {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = uVar16 / uVar9;
        }
        unaff_x24 = uVar16 - uVar11 * uVar9;
      }
    }
    puVar10 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar10 != (undefined8 *)0x0) {
      for (plVar15 = (long *)*puVar10; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
        uVar11 = plVar15[1];
        if (uVar11 == uVar16) {
          if (plVar15[2] == uVar6) {
            uVar5 = 0;
            goto LAB_10929261c;
          }
        }
        else {
          if ((uVar9 & uVar7) == 0) {
            uVar11 = uVar11 & uVar7;
          }
          else if (uVar9 <= uVar11) {
            uVar14 = 0;
            if (uVar9 != 0) {
              uVar14 = uVar11 / uVar9;
            }
            uVar11 = uVar11 - uVar14 * uVar9;
          }
          if (uVar11 != unaff_x24) break;
        }
      }
    }
  }
  plVar15 = (long *)0x20;
  __Znwm();
  *plVar15 = 0;
  plVar15[1] = uVar16;
  plVar15[2] = *(long *)*param_4;
  *(undefined4 *)(plVar15 + 3) = 0;
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar6 = 1;
    if (2 < uVar9) {
      uVar6 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar6 = uVar6 | uVar9 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar7) {
      uVar6 = uVar7;
    }
    if (uVar6 - 1 == 0) {
      uVar6 = 2;
    }
    else if ((uVar6 & uVar6 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar9 = param_1[1];
    }
    if (uVar9 < uVar6) {
LAB_10929242c:
      if (uVar6 >> 0x3d != 0) {
        func_0x000104c4f740();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x109292680);
        (*pcVar2)();
      }
      lVar3 = uVar6 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      uVar9 = 0;
      param_1[1] = uVar6;
      do {
        *(undefined8 *)(*param_1 + uVar9 * 8) = 0;
        uVar9 = uVar9 + 1;
      } while (uVar6 != uVar9);
      plVar8 = (long *)param_1[2];
      uVar9 = uVar6;
      if (plVar8 != (long *)0x0) {
        uVar7 = plVar8[1];
        uVar11 = uVar6 - 1;
        if ((uVar6 & uVar11) == 0) {
          uVar7 = uVar7 & uVar11;
        }
        else if (uVar6 <= uVar7) {
          uVar14 = 0;
          if (uVar6 != 0) {
            uVar14 = uVar7 / uVar6;
          }
          uVar7 = uVar7 - uVar14 * uVar6;
        }
        *(long **)(*param_1 + uVar7 * 8) = param_1 + 2;
        plVar12 = (long *)*plVar8;
        while (plVar12 != (long *)0x0) {
          uVar14 = plVar12[1];
          if ((uVar6 & uVar11) == 0) {
            uVar14 = uVar14 & uVar11;
          }
          else if (uVar6 <= uVar14) {
            uVar1 = 0;
            if (uVar6 != 0) {
              uVar1 = uVar14 / uVar6;
            }
            uVar14 = uVar14 - uVar1 * uVar6;
          }
          plVar13 = plVar12;
          if (uVar14 != uVar7) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + uVar14 * 8) == 0) {
              *(long **)(lVar3 + uVar14 * 8) = plVar8;
              uVar7 = uVar14;
            }
            else {
              *plVar8 = *plVar12;
              *plVar12 = **(undefined8 **)(lVar3 + uVar14 * 8);
              **(long **)(lVar3 + uVar14 * 8) = (long)plVar12;
              plVar13 = plVar8;
            }
          }
          plVar8 = plVar13;
          plVar12 = (long *)*plVar13;
        }
      }
    }
    else if (uVar6 < uVar9) {
      uVar7 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar9 < 3) || ((uVar9 & uVar9 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar7) {
        uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
      }
      if (uVar6 <= uVar7) {
        uVar6 = uVar7;
      }
      if (uVar6 < uVar9) {
        if (uVar6 != 0) goto LAB_10929242c;
        lVar3 = *param_1;
        *param_1 = 0;
        if (lVar3 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar9 = 0;
      }
      else {
        uVar9 = param_1[1];
      }
    }
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = uVar9 - 1 & uVar16;
    }
    else {
      unaff_x24 = uVar16;
      if (uVar9 <= uVar16) {
        uVar6 = 0;
        if (uVar9 != 0) {
          uVar6 = uVar16 / uVar9;
        }
        unaff_x24 = uVar16 - uVar6 * uVar9;
      }
    }
  }
  lVar3 = *param_1;
  plVar8 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar15 = *plVar8;
    *plVar8 = (long)plVar15;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar8;
    if (*plVar15 == 0) goto LAB_10929260c;
    uVar6 = *(ulong *)(*plVar15 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar6 = uVar6 & uVar9 - 1;
    }
    else if (uVar9 <= uVar6) {
      uVar16 = 0;
      if (uVar9 != 0) {
        uVar16 = uVar6 / uVar9;
      }
      uVar6 = uVar6 - uVar16 * uVar9;
    }
    plVar8 = (long *)(*param_1 + uVar6 * 8);
  }
  else {
    *plVar15 = *plVar8;
  }
  *plVar8 = (long)plVar15;
LAB_10929260c:
  param_1[3] = param_1[3] + 1;
  uVar5 = 1;
LAB_10929261c:
  auVar17._8_8_ = uVar5;
  auVar17._0_8_ = plVar15;
  return auVar17;
}



/* Entry: 109292694; end: 109292717;  */

undefined8 FUN_109292694(int *param_1,long param_2,int *param_3,long param_4)

{
  int *piVar1;
  
  if (param_2 != param_4) {
    return 0;
  }
  if (param_2 != 0) {
    piVar1 = param_1 + param_2 * 5;
    do {
      if (*param_1 != *param_3) {
        return 0;
      }
      if (param_1[1] != param_3[1]) {
        return 0;
      }
      if (param_1[2] != param_3[2]) {
        return 0;
      }
      if (param_1[3] != param_3[3]) {
        return 0;
      }
      if (param_1[4] != param_3[4]) {
        return 0;
      }
      param_1 = param_1 + 5;
      param_3 = param_3 + 5;
    } while (param_1 != piVar1);
  }
  return 1;
}



/* Entry: 109292718; end: 1092927db;  */

void FUN_109292718(long param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (*(long *)(param_2 + 0x50) == param_2) {
    uVar2 = *(ulong *)(param_2 + 0x58);
    if (*(ulong *)(param_1 + 0x60) < uVar2) {
      FUN_109291d68(param_1);
      uVar2 = *(ulong *)(param_2 + 0x58);
    }
    if (uVar2 != 0) {
      lVar3 = 0;
      uVar2 = 0;
      lVar4 = *(long *)(param_1 + 0x58);
      do {
        puVar1 = (undefined8 *)(*(long *)(param_2 + 0x50) + lVar3);
        puVar5 = (undefined8 *)(*(long *)(param_1 + 0x50) + lVar4 * 0x14);
        uVar7 = puVar1[1];
        uVar6 = *puVar1;
        *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(puVar1 + 2);
        puVar5[1] = uVar7;
        *puVar5 = uVar6;
        lVar4 = *(long *)(param_1 + 0x58) + 1;
        *(long *)(param_1 + 0x58) = lVar4;
        uVar2 = uVar2 + 1;
        lVar3 = lVar3 + 0x14;
      } while (uVar2 < *(ulong *)(param_2 + 0x58));
    }
    *(undefined8 *)(param_2 + 0x58) = 0;
  }
  else {
    *(long *)(param_1 + 0x50) = *(long *)(param_2 + 0x50);
    uVar6 = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_1 + 0x58) = uVar6;
    *(long *)(param_2 + 0x50) = param_2;
    *(undefined8 *)(param_2 + 0x60) = 4;
    *(undefined8 *)(param_2 + 0x58) = 0;
  }
  return;
}



/* Entry: 1092927dc; end: 109292823;  */

void FUN_1092927dc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000109291f50(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 109292824; end: 10929291f;  */

void FUN_109292824(ulong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar7 = (undefined8 *)param_1[2];
  if (puVar7 == (undefined8 *)param_1[3]) {
    uVar3 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar5 = (long)((long)puVar7 - uVar3) >> 2;
      if ((long)puVar7 - uVar3 == 0) {
        uVar5 = 1;
      }
      uVar3 = uVar5;
      FUN_109292920();
      puVar1 = (undefined8 *)(uVar3 + (uVar5 >> 2) * 8);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (undefined8 *)((long)puVar1 + lVar8);
        puVar6 = (undefined8 *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar5 = *param_1;
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar3 + uVar4 * 8;
      if (uVar5 != 0) {
        __ZdlPv(uVar5);
        puVar7 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar3) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (undefined8 *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 109292920; end: 109292953;  */

undefined1  [16] FUN_109292920(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  ulong unaff_x24;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar3 = (long)param_1 << 3;
    __Znwm(lVar3);
    auVar16._8_8_ = param_1;
    auVar16._0_8_ = lVar3;
    return auVar16;
  }
  func_0x000104c4f740();
  uVar7 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ param_2 >> 0x20) * -0x622015f714c7d297;
  uVar7 = (param_2 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
  uVar15 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar5 = uVar7 - 1;
    if ((uVar7 & uVar5) == 0) {
      unaff_x24 = uVar5 & uVar15;
    }
    else {
      unaff_x24 = uVar15;
      if (uVar7 <= uVar15) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = uVar15 / uVar7;
        }
        unaff_x24 = uVar15 - uVar9 * uVar7;
      }
    }
    puVar8 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar8 != (undefined8 *)0x0) {
      for (plVar14 = (long *)*puVar8; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
        uVar9 = plVar14[1];
        if (uVar9 == uVar15) {
          if (plVar14[2] == param_2) goto LAB_109292cf0;
        }
        else {
          if ((uVar7 & uVar5) == 0) {
            uVar9 = uVar9 & uVar5;
          }
          else if (uVar7 <= uVar9) {
            uVar6 = 0;
            if (uVar7 != 0) {
              uVar6 = uVar9 / uVar7;
            }
            uVar9 = uVar9 - uVar6 * uVar7;
          }
          if (uVar9 != unaff_x24) break;
        }
      }
    }
  }
  plVar14 = (long *)0x80;
  __Znwm();
  *plVar14 = 0;
  plVar14[1] = uVar15;
  plVar14[2] = *param_3;
  plVar14[6] = 0;
  plVar14[5] = 0;
  plVar14[8] = 0;
  plVar14[7] = 0;
  plVar14[10] = 0;
  plVar14[9] = 0;
  plVar14[0xc] = 0;
  plVar14[0xb] = 0;
  plVar14[4] = 0;
  plVar14[3] = 0;
  plVar14[0xd] = (long)(plVar14 + 3);
  plVar14[0xf] = 4;
  plVar14[0xe] = 0;
  if ((uVar7 == 0) || (*(float *)(param_1 + 4) * (float)uVar7 < (float)(param_1[3] + 1))) {
    uVar5 = 1;
    if (2 < uVar7) {
      uVar5 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar5 = uVar5 | uVar7 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar5 <= uVar9) {
      uVar5 = uVar9;
    }
    if (uVar5 - 1 == 0) {
      uVar5 = 2;
    }
    else if ((uVar5 & uVar5 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar7 = param_1[1];
    }
    if (uVar7 < uVar5) {
LAB_109292b04:
      if (uVar5 >> 0x3d != 0) {
        func_0x000104c4f740();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x109292d4c);
        (*pcVar2)();
      }
      lVar3 = uVar5 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      uVar7 = 0;
      param_1[1] = uVar5;
      do {
        *(undefined8 *)(*param_1 + uVar7 * 8) = 0;
        uVar7 = uVar7 + 1;
      } while (uVar5 != uVar7);
      plVar10 = (long *)param_1[2];
      uVar7 = uVar5;
      if (plVar10 != (long *)0x0) {
        uVar9 = plVar10[1];
        uVar6 = uVar5 - 1;
        if ((uVar5 & uVar6) == 0) {
          uVar9 = uVar9 & uVar6;
        }
        else if (uVar5 <= uVar9) {
          uVar13 = 0;
          if (uVar5 != 0) {
            uVar13 = uVar9 / uVar5;
          }
          uVar9 = uVar9 - uVar13 * uVar5;
        }
        *(long **)(*param_1 + uVar9 * 8) = param_1 + 2;
        plVar11 = (long *)*plVar10;
        while (plVar11 != (long *)0x0) {
          uVar13 = plVar11[1];
          if ((uVar5 & uVar6) == 0) {
            uVar13 = uVar13 & uVar6;
          }
          else if (uVar5 <= uVar13) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar13 / uVar5;
            }
            uVar13 = uVar13 - uVar1 * uVar5;
          }
          plVar12 = plVar11;
          if (uVar13 != uVar9) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + uVar13 * 8) == 0) {
              *(long **)(lVar3 + uVar13 * 8) = plVar10;
              uVar9 = uVar13;
            }
            else {
              *plVar10 = *plVar11;
              *plVar11 = **(undefined8 **)(lVar3 + uVar13 * 8);
              **(long **)(lVar3 + uVar13 * 8) = (long)plVar11;
              plVar12 = plVar10;
            }
          }
          plVar10 = plVar12;
          plVar11 = (long *)*plVar12;
        }
      }
    }
    else if (uVar5 < uVar7) {
      uVar9 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar9) {
        uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
      }
      if (uVar5 <= uVar9) {
        uVar5 = uVar9;
      }
      if (uVar5 < uVar7) {
        if (uVar5 != 0) goto LAB_109292b04;
        lVar3 = *param_1;
        *param_1 = 0;
        if (lVar3 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar7 = 0;
      }
      else {
        uVar7 = param_1[1];
      }
    }
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x24 = uVar7 - 1 & uVar15;
    }
    else {
      unaff_x24 = uVar15;
      if (uVar7 <= uVar15) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = uVar15 / uVar7;
        }
        unaff_x24 = uVar15 - uVar5 * uVar7;
      }
    }
  }
  lVar3 = *param_1;
  plVar10 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar10 == (long *)0x0) {
    plVar10 = param_1 + 2;
    *plVar14 = *plVar10;
    *plVar10 = (long)plVar14;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar10;
    if (*plVar14 == 0) goto LAB_109292ce4;
    uVar15 = *(ulong *)(*plVar14 + 8);
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar15 = uVar15 & uVar7 - 1;
    }
    else if (uVar7 <= uVar15) {
      uVar5 = 0;
      if (uVar7 != 0) {
        uVar5 = uVar15 / uVar7;
      }
      uVar15 = uVar15 - uVar5 * uVar7;
    }
    plVar10 = (long *)(*param_1 + uVar15 * 8);
  }
  else {
    *plVar14 = *plVar10;
  }
  *plVar10 = (long)plVar14;
LAB_109292ce4:
  param_1[3] = param_1[3] + 1;
LAB_109292cf0:
  auVar17._8_8_ = param_2;
  auVar17._0_8_ = plVar14;
  return auVar17;
}



/* Entry: 109292954; end: 109292d63;  */

long * FUN_109292954(long *param_1,long param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  ulong unaff_x24;
  
  uVar5 = (uint)((ulong)param_2 >> 0x20);
  uVar8 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ (ulong)uVar5) * -0x622015f714c7d297;
  uVar8 = ((ulong)uVar5 ^ uVar8 >> 0x2f ^ uVar8) * -0x622015f714c7d297;
  uVar15 = (uVar8 ^ uVar8 >> 0x2f) * -0x622015f714c7d297;
  uVar8 = param_1[1];
  if (uVar8 != 0) {
    uVar6 = uVar8 - 1;
    if ((uVar8 & uVar6) == 0) {
      unaff_x24 = uVar6 & uVar15;
    }
    else {
      unaff_x24 = uVar15;
      if (uVar8 <= uVar15) {
        uVar10 = 0;
        if (uVar8 != 0) {
          uVar10 = uVar15 / uVar8;
        }
        unaff_x24 = uVar15 - uVar10 * uVar8;
      }
    }
    plVar9 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar9 != (long *)0x0) {
      for (plVar9 = (long *)*plVar9; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        uVar10 = plVar9[1];
        if (uVar10 == uVar15) {
          if (plVar9[2] == param_2) {
            return plVar9;
          }
        }
        else {
          if ((uVar8 & uVar6) == 0) {
            uVar10 = uVar10 & uVar6;
          }
          else if (uVar8 <= uVar10) {
            uVar7 = 0;
            if (uVar8 != 0) {
              uVar7 = uVar10 / uVar8;
            }
            uVar10 = uVar10 - uVar7 * uVar8;
          }
          if (uVar10 != unaff_x24) break;
        }
      }
    }
  }
  plVar9 = (long *)0x80;
  __Znwm();
  *plVar9 = 0;
  plVar9[1] = uVar15;
  plVar9[2] = *param_3;
  plVar9[6] = 0;
  plVar9[5] = 0;
  plVar9[8] = 0;
  plVar9[7] = 0;
  plVar9[10] = 0;
  plVar9[9] = 0;
  plVar9[0xc] = 0;
  plVar9[0xb] = 0;
  plVar9[4] = 0;
  plVar9[3] = 0;
  plVar9[0xd] = (long)(plVar9 + 3);
  plVar9[0xf] = 4;
  plVar9[0xe] = 0;
  if ((uVar8 == 0) || (*(float *)(param_1 + 4) * (float)uVar8 < (float)(param_1[3] + 1))) {
    uVar6 = 1;
    if (2 < uVar8) {
      uVar6 = (ulong)((uVar8 & uVar8 - 1) != 0);
    }
    uVar6 = uVar6 | uVar8 << 1;
    uVar10 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar10) {
      uVar6 = uVar10;
    }
    if (uVar6 - 1 == 0) {
      uVar6 = 2;
    }
    else if ((uVar6 & uVar6 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar8 = param_1[1];
    }
    if (uVar8 < uVar6) {
LAB_109292b04:
      if (uVar6 >> 0x3d != 0) {
        func_0x000104c4f740();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x109292d4c);
        (*pcVar2)();
      }
      lVar3 = uVar6 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      uVar8 = 0;
      param_1[1] = uVar6;
      do {
        *(undefined8 *)(*param_1 + uVar8 * 8) = 0;
        uVar8 = uVar8 + 1;
      } while (uVar6 != uVar8);
      plVar11 = (long *)param_1[2];
      uVar8 = uVar6;
      if (plVar11 != (long *)0x0) {
        uVar10 = plVar11[1];
        uVar7 = uVar6 - 1;
        if ((uVar6 & uVar7) == 0) {
          uVar10 = uVar10 & uVar7;
        }
        else if (uVar6 <= uVar10) {
          uVar14 = 0;
          if (uVar6 != 0) {
            uVar14 = uVar10 / uVar6;
          }
          uVar10 = uVar10 - uVar14 * uVar6;
        }
        *(long **)(*param_1 + uVar10 * 8) = param_1 + 2;
        plVar12 = (long *)*plVar11;
        while (plVar12 != (long *)0x0) {
          uVar14 = plVar12[1];
          if ((uVar6 & uVar7) == 0) {
            uVar14 = uVar14 & uVar7;
          }
          else if (uVar6 <= uVar14) {
            uVar1 = 0;
            if (uVar6 != 0) {
              uVar1 = uVar14 / uVar6;
            }
            uVar14 = uVar14 - uVar1 * uVar6;
          }
          plVar13 = plVar12;
          if (uVar14 != uVar10) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + uVar14 * 8) == 0) {
              *(long **)(lVar3 + uVar14 * 8) = plVar11;
              uVar10 = uVar14;
            }
            else {
              *plVar11 = *plVar12;
              *plVar12 = **(undefined8 **)(lVar3 + uVar14 * 8);
              **(long **)(lVar3 + uVar14 * 8) = (long)plVar12;
              plVar13 = plVar11;
            }
          }
          plVar11 = plVar13;
          plVar12 = (long *)*plVar13;
        }
      }
    }
    else if (uVar6 < uVar8) {
      uVar10 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar8 < 3) || ((uVar8 & uVar8 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar10) {
        uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
      }
      if (uVar6 <= uVar10) {
        uVar6 = uVar10;
      }
      if (uVar6 < uVar8) {
        if (uVar6 != 0) goto LAB_109292b04;
        lVar3 = *param_1;
        *param_1 = 0;
        if (lVar3 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar8 = 0;
      }
      else {
        uVar8 = param_1[1];
      }
    }
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x24 = uVar8 - 1 & uVar15;
    }
    else {
      unaff_x24 = uVar15;
      if (uVar8 <= uVar15) {
        uVar6 = 0;
        if (uVar8 != 0) {
          uVar6 = uVar15 / uVar8;
        }
        unaff_x24 = uVar15 - uVar6 * uVar8;
      }
    }
  }
  lVar3 = *param_1;
  plVar11 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar11 == (long *)0x0) {
    plVar11 = param_1 + 2;
    *plVar9 = *plVar11;
    *plVar11 = (long)plVar9;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar11;
    if (*plVar9 == 0) goto LAB_109292ce4;
    uVar15 = *(ulong *)(*plVar9 + 8);
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar15 = uVar15 & uVar8 - 1;
    }
    else if (uVar8 <= uVar15) {
      uVar6 = 0;
      if (uVar8 != 0) {
        uVar6 = uVar15 / uVar8;
      }
      uVar15 = uVar15 - uVar6 * uVar8;
    }
    plVar11 = (long *)(*param_1 + uVar15 * 8);
  }
  else {
    *plVar9 = *plVar11;
  }
  *plVar11 = (long)plVar9;
LAB_109292ce4:
  param_1[3] = param_1[3] + 1;
  return plVar9;
}



/* Entry: 109292d64; end: 109292f3f;  */

void FUN_109292d64(ulong param_1,long param_2)

{
  if ((param_1 & 1) != 0) {
    *(undefined8 *)(param_2 + 0x70) = 0;
    if (*(long *)(param_2 + 0x68) != param_2 + 0x18) {
      __ZdlPvSt11align_val_t(*(long *)(param_2 + 0x68),4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}


