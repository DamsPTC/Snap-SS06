/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a305eb4; end: 10a305f8b;  */

void FUN_10a305eb4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  byte *pbVar1;
  long *plVar2;
  long *plVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined8 uStack_30;
  long *plStack_28;
  
  pbVar1 = (byte *)(param_1 + 0x60);
  do {
    bVar4 = *pbVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar6) {
      *pbVar1 = 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  while ((bVar4 & 1) != 0) {
    do {
    } while ((*pbVar1 & 1) != 0);
    do {
      bVar4 = *pbVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar6) {
        *pbVar1 = 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plStack_28 = (long *)param_3[1];
  uStack_30 = *param_3;
  if (param_3[1] != 0) {
    plVar2 = (long *)(param_3[1] + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = *plVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_10a31d10c(param_1 + 8,param_2,&uStack_30);
  plVar2 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar3 = plStack_28 + 1;
    do {
      lVar7 = *plVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *plVar3 = lVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  *pbVar1 = 0;
  return;
}



/* Entry: 10a305f8c; end: 10a30601f;  */

/* WARNING: Removing unreachable block (ram,0x00010a306088) */
/* WARNING: Removing unreachable block (ram,0x00010a3060b8) */
/* WARNING: Removing unreachable block (ram,0x00010a30608c) */
/* WARNING: Removing unreachable block (ram,0x00010a30f1c8) */
/* WARNING: Removing unreachable block (ram,0x00010a30f1e0) */
/* WARNING: Removing unreachable block (ram,0x00010a30f1e4) */
/* WARNING: Removing unreachable block (ram,0x00010a30f1fc) */
/* WARNING: Removing unreachable block (ram,0x00010a30f4ec) */
/* WARNING: Removing unreachable block (ram,0x00010a30f20c) */
/* WARNING: Removing unreachable block (ram,0x00010a30f224) */
/* WARNING: Removing unreachable block (ram,0x00010a30f248) */
/* WARNING: Removing unreachable block (ram,0x00010a30f26c) */
/* WARNING: Removing unreachable block (ram,0x00010a30f284) */
/* WARNING: Removing unreachable block (ram,0x00010a30f290) */
/* WARNING: Removing unreachable block (ram,0x00010a30f2d4) */
/* WARNING: Removing unreachable block (ram,0x00010a30f2b4) */
/* WARNING: Removing unreachable block (ram,0x00010a30f2d8) */
/* WARNING: Removing unreachable block (ram,0x00010a30f2f0) */
/* WARNING: Removing unreachable block (ram,0x00010a30f310) */
/* WARNING: Removing unreachable block (ram,0x00010a30f320) */
/* WARNING: Removing unreachable block (ram,0x00010a30f4f0) */
/* WARNING: Removing unreachable block (ram,0x00010a30f4fc) */
/* WARNING: Removing unreachable block (ram,0x00010a30f510) */
/* WARNING: Removing unreachable block (ram,0x00010a30f33c) */
/* WARNING: Removing unreachable block (ram,0x00010a30f34c) */
/* WARNING: Removing unreachable block (ram,0x00010a30f39c) */
/* WARNING: Removing unreachable block (ram,0x00010a30f35c) */
/* WARNING: Removing unreachable block (ram,0x00010a30f364) */
/* WARNING: Removing unreachable block (ram,0x00010a30f370) */
/* WARNING: Removing unreachable block (ram,0x00010a30f388) */
/* WARNING: Removing unreachable block (ram,0x00010a30f394) */
/* WARNING: Removing unreachable block (ram,0x00010a30f3c0) */
/* WARNING: Removing unreachable block (ram,0x00010a30f3e0) */
/* WARNING: Removing unreachable block (ram,0x00010a30f3e8) */
/* WARNING: Removing unreachable block (ram,0x00010a30f3fc) */
/* WARNING: Removing unreachable block (ram,0x00010a30f424) */
/* WARNING: Removing unreachable block (ram,0x00010a30f440) */
/* WARNING: Removing unreachable block (ram,0x00010a30f45c) */
/* WARNING: Removing unreachable block (ram,0x00010a30f474) */
/* WARNING: Removing unreachable block (ram,0x00010a30f484) */
/* WARNING: Removing unreachable block (ram,0x00010a30f4bc) */
/* WARNING: Removing unreachable block (ram,0x00010a30f4a0) */
/* WARNING: Removing unreachable block (ram,0x00010a30f4c0) */
/* WARNING: Removing unreachable block (ram,0x00010a30f4cc) */
/* WARNING: Type propagation algorithm not settling */

undefined8 *******
FUN_10a305f8c(undefined8 *******param_1,undefined8 *******param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  char cVar3;
  undefined *puVar4;
  undefined8 *******pppppppuVar5;
  code *pcVar6;
  uint uVar7;
  int iVar8;
  undefined8 *******pppppppuVar9;
  undefined8 *******pppppppuVar10;
  undefined8 *******pppppppuVar11;
  long lVar12;
  undefined8 *******pppppppuVar13;
  undefined8 ******ppppppuVar14;
  undefined8 *******pppppppuVar15;
  undefined8 *******pppppppuVar16;
  undefined8 *******pppppppuVar17;
  undefined8 *******pppppppuStack_90;
  undefined8 *******pppppppuStack_88;
  undefined8 *******pppppppuStack_80;
  undefined8 *******pppppppuStack_78;
  undefined8 *******pppppppuStack_70;
  undefined8 *******pppppppuStack_68;
  
  if (((((*(byte *)((long)param_2 + 0x141) & 1) != 0) || (FUN_10a0ee554(), 0x30 < (uint)param_1)) ||
      ((1L << ((ulong)param_1 & 0x3f) & 0x1700000000004U) == 0)) ||
     ((param_1 = param_2, FUN_10a306028(param_2,0), 0x100 < param_3 && (0x100 < param_4)))) {
    return param_1;
  }
  if (((*(byte *)((long)param_2 + 0x141) & 1) != 0) || (*(char *)(param_2 + 0xc) != '\x01')) {
    return param_2;
  }
  ppppppuVar14 = (undefined8 ******)(long)*(char *)((long)param_2 + 0xaf);
  if ((long)ppppppuVar14 < 0) {
    pppppppuVar9 = (undefined8 *******)param_2[0x13];
    ppppppuVar14 = param_2[0x14];
  }
  else {
    pppppppuVar9 = param_2 + 0x13;
  }
  pppppppuVar15 = (undefined8 *******)(long)*(char *)((long)param_2 + 199);
  if ((long)pppppppuVar15 < 0) {
    pppppppuVar13 = (undefined8 *******)param_2[0x16];
    pppppppuVar15 = (undefined8 *******)param_2[0x17];
  }
  else {
    pppppppuVar13 = param_2 + 0x16;
  }
  FUN_10a30f638(pppppppuVar9,ppppppuVar14);
  pppppppuStack_80 = pppppppuVar13;
  pppppppuStack_78 = pppppppuVar15;
  if ((bRam00000001137eaed0 & 1) == 0) goto LAB_10a30f91c;
  do {
    uVar1 = uRam00000001137eaf90;
    uVar2 = uRam00000001137eaf98;
    if (-1 < (char)bRam00000001137eafa7) {
      uVar1 = 0x1137eaf90;
      uVar2 = (ulong)bRam00000001137eafa7;
    }
    pppppppuVar9 = &pppppppuStack_80;
    FUN_10a0ee2b4(pppppppuVar9,uVar1,uVar2,0);
    if (pppppppuVar9 == (undefined8 *******)0xffffffffffffffff) {
      return (undefined8 *******)0xffffffffffffffff;
    }
    pppppppuStack_90 = pppppppuStack_80;
    pppppppuStack_88 = pppppppuVar9;
    if ((long)pppppppuVar9 < 0) {
LAB_10a30f90c:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10a30f910);
      (*pcVar6)();
    }
    pppppppuVar15 = &pppppppuStack_90;
    FUN_10a166af4(&pppppppuStack_90,&UNK_10f64db47,0);
    if (pppppppuVar15 == (undefined8 *******)0xffffffffffffffff) {
      return (undefined8 *******)0xffffffffffffffff;
    }
    pppppppuVar15 = (undefined8 *******)((long)pppppppuStack_78 - (long)pppppppuVar9);
    if (pppppppuVar9 <= pppppppuStack_78) {
      pppppppuStack_80 = (undefined8 *******)((long)pppppppuStack_80 + (long)pppppppuVar9);
      pppppppuVar9 = &pppppppuStack_70;
      pppppppuStack_78 = pppppppuVar15;
      pppppppuStack_70 = pppppppuStack_80;
      pppppppuStack_68 = pppppppuVar15;
      FUN_10a0ee2b4(pppppppuVar9,&DAT_10f493349,8,0);
      puVar4 = PTR___DefaultRuneLocale_11034bcf8;
      if (pppppppuVar9 == (undefined8 *******)0xffffffffffffffff) {
        return (undefined8 *******)0xffffffffffffffff;
      }
      do {
        pppppppuVar5 = pppppppuStack_68;
        pppppppuVar13 = pppppppuStack_70;
        pppppppuVar15 = (undefined8 *******)((long)pppppppuStack_68 - (long)pppppppuVar9);
        if (pppppppuStack_68 < pppppppuVar9 || pppppppuVar15 == (undefined8 *******)0x0) {
          return pppppppuVar9;
        }
        pppppppuVar17 = (undefined8 *******)((long)pppppppuStack_70 + (long)pppppppuVar9);
        pppppppuVar10 = pppppppuVar17;
        _memchr(pppppppuVar17,0x3b,pppppppuVar15);
        pppppppuVar16 = (undefined8 *******)((long)pppppppuVar10 - (long)pppppppuVar13);
        if (pppppppuVar10 == (undefined8 *******)0x0 ||
            pppppppuVar16 == (undefined8 *******)0xffffffffffffffff) {
          return pppppppuVar10;
        }
        if ((undefined8 *******)((long)pppppppuVar16 - (long)pppppppuVar9) <= pppppppuVar15) {
          pppppppuVar15 = (undefined8 *******)((long)pppppppuVar16 - (long)pppppppuVar9);
        }
        pppppppuVar10 = pppppppuVar16;
        if (pppppppuVar15 == (undefined8 *******)0x0) {
LAB_10a30f800:
          pppppppuVar17 = pppppppuVar10;
          if (pppppppuVar5 <= pppppppuVar10) goto LAB_10a30f90c;
          do {
            cVar3 = *(char *)((long)pppppppuVar13 + (long)pppppppuVar17);
            lVar12 = (long)cVar3;
            if (cVar3 < 0) {
              ___maskrune(lVar12,0x4000);
              uVar7 = (uint)lVar12;
            }
            else {
              uVar7 = *(uint *)(puVar4 + (ulong)(uint)(int)cVar3 * 4 + 0x3c) & 0x4000;
            }
            pppppppuVar5 = pppppppuStack_70;
            if (pppppppuVar17 == (undefined8 *******)0x0) {
              pppppppuVar15 = (undefined8 *******)0xffffffffffffffff;
            }
            if (uVar7 != 0) {
              pppppppuVar15 = pppppppuVar17;
            }
          } while ((pppppppuVar17 != (undefined8 *******)0x0) &&
                  (pppppppuVar17 = (undefined8 *******)((long)pppppppuVar17 - 1), uVar7 == 0));
          pppppppuVar15 = (undefined8 *******)((long)pppppppuVar15 + 1);
          if (pppppppuStack_68 < pppppppuVar15) break;
          uVar2 = (long)pppppppuStack_68 - (long)pppppppuVar15;
          if ((ulong)((long)pppppppuVar10 - (long)pppppppuVar15) <=
              (ulong)((long)pppppppuStack_68 - (long)pppppppuVar15)) {
            uVar2 = (long)pppppppuVar10 - (long)pppppppuVar15;
          }
          pppppppuVar13 = pppppppuStack_70;
          FUN_10a30f55c(pppppppuStack_70,pppppppuStack_68,
                        (long)pppppppuStack_70 + (long)pppppppuVar15,uVar2,pppppppuVar16,
                        pppppppuStack_68);
          if ((((ulong)pppppppuVar13 & 1) == 0) &&
             (pppppppuVar13 = pppppppuStack_70,
             FUN_10a30f55c(pppppppuStack_70,pppppppuStack_68,
                           (long)pppppppuVar5 + (long)pppppppuVar15,uVar2,0,pppppppuVar15),
             ((ulong)pppppppuVar13 & 1) == 0)) {
            *(undefined1 *)((long)pppppppuStack_70 + (long)pppppppuVar9) = 0x2f;
            *(undefined1 *)((long)pppppppuStack_70 + (long)pppppppuVar9 + 1) = 0x2a;
            *(undefined1 *)((long)pppppppuStack_70 + (long)pppppppuVar16 + -1) = 0x2a;
            *(undefined1 *)((long)pppppppuStack_70 + (long)pppppppuVar16) = 0x2f;
          }
        }
        else {
          pppppppuVar11 = pppppppuVar17;
          _memchr(pppppppuVar17,0x2a,pppppppuVar15);
          if ((pppppppuVar11 == (undefined8 *******)0x0 ||
               (long)pppppppuVar11 - (long)pppppppuVar17 == -1) &&
             (pppppppuVar11 = pppppppuVar17, _memchr(pppppppuVar17,10,pppppppuVar15),
             pppppppuVar11 == (undefined8 *******)0x0 ||
             (long)pppppppuVar11 - (long)pppppppuVar17 == -1)) {
            pppppppuVar11 = pppppppuVar17;
            _memchr(pppppppuVar17,0x5b,pppppppuVar15);
            if (pppppppuVar11 == (undefined8 *******)0x0 ||
                (long)pppppppuVar11 - (long)pppppppuVar17 == -1) {
              pppppppuVar11 = pppppppuVar17;
              _memchr(pppppppuVar17,0x3d,pppppppuVar15);
              if ((pppppppuVar11 != (undefined8 *******)0x0) &&
                 ((long)pppppppuVar11 - (long)pppppppuVar17 != -1)) goto LAB_10a30f8cc;
            }
            else {
              pppppppuVar10 =
                   (undefined8 *******)
                   (((long)pppppppuVar11 - (long)pppppppuVar17) + (long)pppppppuVar9);
            }
            goto LAB_10a30f800;
          }
          pppppppuVar16 = (undefined8 *******)((long)pppppppuVar9 + 1);
        }
LAB_10a30f8cc:
        pppppppuVar9 = &pppppppuStack_70;
        FUN_10a0ee2b4(pppppppuVar9,&DAT_10f493349,8,pppppppuVar16);
        if (pppppppuVar9 == (undefined8 *******)0xffffffffffffffff) {
          return (undefined8 *******)0xffffffffffffffff;
        }
      } while( true );
    }
    FUN_109ffdddc(&UNK_10f2fca6e);
LAB_10a30f91c:
    iVar8 = 0x137eaed0;
    ___cxa_guard_acquire();
    if (iVar8 != 0) {
      FUN_10aba565c(0x1137eaf90,0xb2);
      ___cxa_atexit(PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev_110346340
                    ,0x1137eaf90,0x100000000);
      ___cxa_guard_release(0x1137eaed0);
    }
  } while( true );
}



/* Entry: 10a306020; end: 10a306027;  */

undefined1 FUN_10a306020(long param_1)

{
  return *(undefined1 *)(param_1 + 0x141);
}



/* Entry: 10a306028; end: 10a30610b;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 ******* FUN_10a306028(undefined8 *******param_1,int param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  char cVar4;
  ushort uVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  undefined8 *******pppppppuVar12;
  undefined8 *******pppppppuVar13;
  undefined8 *******pppppppuVar14;
  undefined8 *******pppppppuVar15;
  undefined8 *******pppppppuVar16;
  undefined8 *******pppppppuVar17;
  undefined **ppuVar18;
  undefined *puVar19;
  undefined8 *******pppppppuVar20;
  undefined8 *******pppppppuVar21;
  undefined8 *puVar22;
  long lVar23;
  undefined8 *******pppppppuStack_90;
  undefined8 *******pppppppuStack_88;
  undefined8 *******pppppppuStack_80;
  undefined8 *******pppppppuStack_78;
  undefined8 *******pppppppuStack_70;
  undefined8 *******pppppppuStack_68;
  
  if (((*(byte *)((long)param_1 + 0x141) & 1) != 0) || (*(char *)(param_1 + 0xc) != '\x01')) {
    return param_1;
  }
  pppppppuVar15 = (undefined8 *******)(long)*(char *)((long)param_1 + 0xaf);
  if ((long)pppppppuVar15 < 0) {
    pppppppuVar12 = (undefined8 *******)param_1[0x13];
    pppppppuVar15 = (undefined8 *******)param_1[0x14];
  }
  else {
    pppppppuVar12 = param_1 + 0x13;
  }
  pppppppuVar16 = (undefined8 *******)(long)*(char *)((long)param_1 + 199);
  if ((long)pppppppuVar16 < 0) {
    pppppppuVar17 = (undefined8 *******)param_1[0x16];
    pppppppuVar16 = (undefined8 *******)param_1[0x17];
  }
  else {
    pppppppuVar17 = param_1 + 0x16;
  }
  if (param_2 == 1) {
    FUN_10a30f638(pppppppuVar12,pppppppuVar15);
    pppppppuStack_80 = pppppppuVar17;
    pppppppuStack_78 = pppppppuVar16;
    if ((bRam00000001137eaed0 & 1) == 0) goto LAB_10a30f91c;
    do {
      uVar1 = uRam00000001137eaf90;
      uVar2 = uRam00000001137eaf98;
      if (-1 < (char)bRam00000001137eafa7) {
        uVar1 = 0x1137eaf90;
        uVar2 = (ulong)bRam00000001137eafa7;
      }
      pppppppuVar15 = &pppppppuStack_80;
      FUN_10a0ee2b4(pppppppuVar15,uVar1,uVar2,0);
      if (pppppppuVar15 == (undefined8 *******)0xffffffffffffffff) {
        return (undefined8 *******)0xffffffffffffffff;
      }
      pppppppuStack_90 = pppppppuStack_80;
      pppppppuStack_88 = pppppppuVar15;
      if ((long)pppppppuVar15 < 0) {
LAB_10a30f90c:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10a30f910);
        (*pcVar6)();
      }
      pppppppuVar12 = &pppppppuStack_90;
      FUN_10a166af4(&pppppppuStack_90,&UNK_10f64db47,0);
      if (pppppppuVar12 == (undefined8 *******)0xffffffffffffffff) {
        return (undefined8 *******)0xffffffffffffffff;
      }
      pppppppuVar12 = (undefined8 *******)((long)pppppppuStack_78 - (long)pppppppuVar15);
      if (pppppppuVar15 <= pppppppuStack_78) {
        pppppppuStack_80 = (undefined8 *******)((long)pppppppuStack_80 + (long)pppppppuVar15);
        pppppppuVar15 = &pppppppuStack_70;
        pppppppuStack_78 = pppppppuVar12;
        pppppppuStack_70 = pppppppuStack_80;
        pppppppuStack_68 = pppppppuVar12;
        FUN_10a0ee2b4(pppppppuVar15,&DAT_10f493349,8,0);
        puVar19 = PTR___DefaultRuneLocale_11034bcf8;
        if (pppppppuVar15 == (undefined8 *******)0xffffffffffffffff) {
          return (undefined8 *******)0xffffffffffffffff;
        }
        do {
          pppppppuVar17 = pppppppuStack_68;
          pppppppuVar16 = pppppppuStack_70;
          pppppppuVar12 = (undefined8 *******)((long)pppppppuStack_68 - (long)pppppppuVar15);
          if (pppppppuStack_68 < pppppppuVar15 || pppppppuVar12 == (undefined8 *******)0x0) {
            return pppppppuVar15;
          }
          pppppppuVar21 = (undefined8 *******)((long)pppppppuStack_70 + (long)pppppppuVar15);
          pppppppuVar13 = pppppppuVar21;
          _memchr(pppppppuVar21,0x3b,pppppppuVar12);
          pppppppuVar20 = (undefined8 *******)((long)pppppppuVar13 - (long)pppppppuVar16);
          if (pppppppuVar13 == (undefined8 *******)0x0 ||
              pppppppuVar20 == (undefined8 *******)0xffffffffffffffff) {
            return pppppppuVar13;
          }
          if ((undefined8 *******)((long)pppppppuVar20 - (long)pppppppuVar15) <= pppppppuVar12) {
            pppppppuVar12 = (undefined8 *******)((long)pppppppuVar20 - (long)pppppppuVar15);
          }
          pppppppuVar13 = pppppppuVar20;
          if (pppppppuVar12 == (undefined8 *******)0x0) {
LAB_10a30f800:
            pppppppuVar21 = pppppppuVar13;
            if (pppppppuVar17 <= pppppppuVar13) goto LAB_10a30f90c;
            do {
              cVar4 = *(char *)((long)pppppppuVar16 + (long)pppppppuVar21);
              lVar23 = (long)cVar4;
              if (cVar4 < 0) {
                ___maskrune(lVar23,0x4000);
                uVar11 = (uint)lVar23;
              }
              else {
                uVar11 = *(uint *)(puVar19 + (ulong)(uint)(int)cVar4 * 4 + 0x3c) & 0x4000;
              }
              pppppppuVar17 = pppppppuStack_70;
              if (pppppppuVar21 == (undefined8 *******)0x0) {
                pppppppuVar12 = (undefined8 *******)0xffffffffffffffff;
              }
              if (uVar11 != 0) {
                pppppppuVar12 = pppppppuVar21;
              }
            } while ((pppppppuVar21 != (undefined8 *******)0x0) &&
                    (pppppppuVar21 = (undefined8 *******)((long)pppppppuVar21 - 1), uVar11 == 0));
            pppppppuVar12 = (undefined8 *******)((long)pppppppuVar12 + 1);
            if (pppppppuStack_68 < pppppppuVar12) break;
            uVar2 = (long)pppppppuStack_68 - (long)pppppppuVar12;
            if ((ulong)((long)pppppppuVar13 - (long)pppppppuVar12) <=
                (ulong)((long)pppppppuStack_68 - (long)pppppppuVar12)) {
              uVar2 = (long)pppppppuVar13 - (long)pppppppuVar12;
            }
            pppppppuVar16 = pppppppuStack_70;
            FUN_10a30f55c(pppppppuStack_70,pppppppuStack_68,
                          (long)pppppppuStack_70 + (long)pppppppuVar12,uVar2,pppppppuVar20,
                          pppppppuStack_68);
            if ((((ulong)pppppppuVar16 & 1) == 0) &&
               (pppppppuVar16 = pppppppuStack_70,
               FUN_10a30f55c(pppppppuStack_70,pppppppuStack_68,
                             (long)pppppppuVar17 + (long)pppppppuVar12,uVar2,0,pppppppuVar12),
               ((ulong)pppppppuVar16 & 1) == 0)) {
              *(undefined1 *)((long)pppppppuStack_70 + (long)pppppppuVar15) = 0x2f;
              *(undefined1 *)((long)pppppppuStack_70 + (long)pppppppuVar15 + 1) = 0x2a;
              *(undefined1 *)((long)pppppppuStack_70 + (long)pppppppuVar20 + -1) = 0x2a;
              *(undefined1 *)((long)pppppppuStack_70 + (long)pppppppuVar20) = 0x2f;
            }
          }
          else {
            pppppppuVar14 = pppppppuVar21;
            _memchr(pppppppuVar21,0x2a,pppppppuVar12);
            if ((pppppppuVar14 == (undefined8 *******)0x0 ||
                 (long)pppppppuVar14 - (long)pppppppuVar21 == -1) &&
               (pppppppuVar14 = pppppppuVar21, _memchr(pppppppuVar21,10,pppppppuVar12),
               pppppppuVar14 == (undefined8 *******)0x0 ||
               (long)pppppppuVar14 - (long)pppppppuVar21 == -1)) {
              pppppppuVar14 = pppppppuVar21;
              _memchr(pppppppuVar21,0x5b,pppppppuVar12);
              if (pppppppuVar14 == (undefined8 *******)0x0 ||
                  (long)pppppppuVar14 - (long)pppppppuVar21 == -1) {
                pppppppuVar14 = pppppppuVar21;
                _memchr(pppppppuVar21,0x3d,pppppppuVar12);
                if ((pppppppuVar14 != (undefined8 *******)0x0) &&
                   ((long)pppppppuVar14 - (long)pppppppuVar21 != -1)) goto LAB_10a30f8cc;
              }
              else {
                pppppppuVar13 =
                     (undefined8 *******)
                     (((long)pppppppuVar14 - (long)pppppppuVar21) + (long)pppppppuVar15);
              }
              goto LAB_10a30f800;
            }
            pppppppuVar20 = (undefined8 *******)((long)pppppppuVar15 + 1);
          }
LAB_10a30f8cc:
          pppppppuVar15 = &pppppppuStack_70;
          FUN_10a0ee2b4(pppppppuVar15,&DAT_10f493349,8,pppppppuVar20);
          if (pppppppuVar15 == (undefined8 *******)0xffffffffffffffff) {
            return (undefined8 *******)0xffffffffffffffff;
          }
        } while( true );
      }
      FUN_109ffdddc(&UNK_10f2fca6e);
LAB_10a30f91c:
      iVar10 = 0x137eaed0;
      ___cxa_guard_acquire();
      if (iVar10 != 0) {
        FUN_10aba565c(0x1137eaf90,0xb2);
        ___cxa_atexit(PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev_110346340
                      ,0x1137eaf90,0x100000000);
        ___cxa_guard_release(0x1137eaed0);
      }
    } while( true );
  }
  if (param_2 != 0) {
    pppppppuVar15 = (undefined8 *******)&UNK_10f64eb82;
    FUN_10a00946c(&UNK_10f64eb82);
    __ZNSt3__15mutexD1Ev(pppppppuVar15 + 8);
    func_0x00010a196d80(pppppppuVar15 + 6);
    FUN_10a322350(pppppppuVar15 + 2,0);
    func_0x00010a322104(pppppppuVar15 + 1,0);
    return pppppppuVar15;
  }
  pppppppuStack_70 = pppppppuVar12;
  pppppppuStack_68 = pppppppuVar15;
  if ((bRam00000001137eaec8 & 1) == 0) goto LAB_10a30f4fc;
  do {
    uVar1 = uRam00000001137eaf78;
    uVar2 = uRam00000001137eaf80;
    if (-1 < (char)bRam00000001137eaf8f) {
      uVar1 = 0x1137eaf78;
      uVar2 = (ulong)bRam00000001137eaf8f;
    }
    pppppppuVar15 = &pppppppuStack_70;
    FUN_10a0ee2b4(pppppppuVar15,uVar1,uVar2,0);
    if (pppppppuVar15 == (undefined8 *******)0xffffffffffffffff) {
      return (undefined8 *******)0xffffffffffffffff;
    }
    pppppppuStack_80 = pppppppuStack_70;
    pppppppuStack_78 = pppppppuVar15;
    if ((long)pppppppuVar15 < 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10a30f4f0);
      (*pcVar6)();
    }
    pppppppuVar12 = &pppppppuStack_70;
    FUN_10a166af4(pppppppuVar12,&UNK_10f64db37,pppppppuVar15);
    if (pppppppuVar12 == (undefined8 *******)0xffffffffffffffff) {
      return (undefined8 *******)0xffffffffffffffff;
    }
    uVar5 = *(ushort *)((long)pppppppuStack_70 + (long)pppppppuVar12 + -2);
    uVar5 = uVar5 >> 8 | uVar5 << 8;
    lVar23 = -2;
    if (uVar5 != 0x696e) {
      lVar23 = -9;
    }
    puVar19 = (undefined *)(lVar23 + (long)pppppppuVar12);
    pppppppuVar15 = &pppppppuStack_80;
    FUN_10a166af4(pppppppuVar15,&UNK_10f64db47,0);
    if (pppppppuVar15 == (undefined8 *******)0xffffffffffffffff) {
      *(undefined1 *)((long)pppppppuStack_70 + (long)puVar19) = 0x2f;
      *(undefined1 *)((long)pppppppuStack_70 + (long)(puVar19 + 1)) = 0x2f;
    }
    uVar1 = 0x12;
    if (uVar5 != 0x696e) {
      uVar1 = 0x19;
    }
    pppppppuVar15 = &pppppppuStack_80;
    FUN_10a166af4(pppppppuVar15,&UNK_10f64db99,0);
    if (pppppppuVar15 == (undefined8 *******)0xffffffffffffffff) {
      bVar7 = false;
    }
    else {
      pppppppuVar12 = &pppppppuStack_80;
      FUN_10a166af4(pppppppuVar12,&UNK_10f64dbab,0);
      bVar7 = pppppppuVar12 != (undefined8 *******)0xffffffffffffffff;
    }
    puVar3 = &UNK_10f64db59;
    if (uVar5 != 0x696e) {
      puVar3 = &UNK_10f64db6c;
    }
    pppppppuVar12 = &pppppppuStack_70;
    FUN_10a0ee2b4(pppppppuVar12,puVar3,uVar1,puVar19);
    while( true ) {
      if (pppppppuVar12 == (undefined8 *******)0xffffffffffffffff) {
        pppppppuVar15 = &pppppppuStack_80;
        FUN_10a166af4(pppppppuVar15,&DAT_10f64dbc7,0);
        if (pppppppuVar15 != (undefined8 *******)0xffffffffffffffff) {
          return pppppppuVar15;
        }
        pppppppuVar15 = &pppppppuStack_80;
        FUN_10a166af4(pppppppuVar15,&DAT_10f64dbd5,0);
        if (pppppppuVar15 != (undefined8 *******)0xffffffffffffffff) {
          return pppppppuVar15;
        }
        ppuVar18 = &PTR_DAT_110bc3668;
        if (uVar5 != 0x696e) {
          ppuVar18 = &PTR_DAT_110bc3698;
        }
        ppuVar18 = ppuVar18 + 1;
        lVar23 = 0x30;
        do {
          puVar3 = *ppuVar18;
          pppppppuVar15 = &pppppppuStack_70;
          FUN_10a0ee2b4(pppppppuVar15,ppuVar18[-1],puVar3,puVar19);
          if (pppppppuVar15 == (undefined8 *******)0xffffffffffffffff) {
            puVar19 = (undefined *)0xffffffffffffffff;
          }
          else {
            *(undefined1 *)((long)pppppppuStack_70 + (long)pppppppuVar15) = 0x2f;
            *(undefined1 *)((long)pppppppuStack_70 + (long)pppppppuVar15 + 1) = 0x2f;
            puVar19 = (undefined *)((long)pppppppuVar15 + (long)puVar3);
          }
          ppuVar18 = ppuVar18 + 2;
          lVar23 = lVar23 + -0x10;
        } while (lVar23 != 0);
        return pppppppuVar15;
      }
      pppppppuVar16 = &pppppppuStack_70;
      FUN_10a166af4(pppppppuVar16,";",pppppppuVar12);
      if (pppppppuStack_68 < pppppppuVar12) break;
      pppppppuStack_90 = (undefined8 *******)((long)pppppppuStack_70 + (long)pppppppuVar12);
      pppppppuStack_88 = (undefined8 *******)((long)pppppppuStack_68 - (long)pppppppuVar12);
      if ((undefined8 *******)((long)pppppppuVar16 - (long)pppppppuVar12) <=
          (undefined8 *******)((long)pppppppuStack_68 - (long)pppppppuVar12)) {
        pppppppuStack_88 = (undefined8 *******)((long)pppppppuVar16 - (long)pppppppuVar12);
      }
      if (pppppppuVar15 == (undefined8 *******)0xffffffffffffffff) {
        pppppppuVar16 = &pppppppuStack_90;
        FUN_10a0ee2b4(pppppppuVar16,&UNK_10f64db86,3,0);
        bVar8 = pppppppuVar16 != (undefined8 *******)0xffffffffffffffff;
        if (!bVar7) goto LAB_10a30f3c0;
LAB_10a30f364:
        lVar23 = 0x30;
        puVar22 = (undefined8 *)&UNK_110bc3640;
        do {
          pppppppuVar16 = &pppppppuStack_90;
          FUN_10a0ee2b4(pppppppuVar16,puVar22[-1],*puVar22,0);
          if (pppppppuVar16 != (undefined8 *******)0xffffffffffffffff) goto LAB_10a30f3e8;
          puVar22 = puVar22 + 2;
          lVar23 = lVar23 + -0x10;
        } while (lVar23 != 0);
        bVar9 = false;
      }
      else {
        bVar8 = false;
        if (bVar7) goto LAB_10a30f364;
LAB_10a30f3c0:
        pppppppuVar16 = &pppppppuStack_90;
        FUN_10a0ee2b4(pppppppuVar16,&UNK_10f68e822,6,0);
        bVar9 = pppppppuVar16 != (undefined8 *******)0xffffffffffffffff;
      }
      if (bVar8 || bVar9) {
LAB_10a30f3e8:
        *(undefined1 *)((long)pppppppuStack_70 + (long)pppppppuVar12) = 0x2f;
        *(undefined1 *)((long)pppppppuStack_70 + (long)pppppppuVar12 + 1) = 0x2f;
      }
      puVar19 = (undefined *)((long)pppppppuStack_88 + (long)pppppppuVar12);
      pppppppuVar12 = &pppppppuStack_70;
      FUN_10a0ee2b4(pppppppuVar12,puVar3,uVar1,puVar19);
    }
    FUN_109ffdddc(&UNK_10f2fca6e);
LAB_10a30f4fc:
    iVar10 = 0x137eaec8;
    ___cxa_guard_acquire();
    if (iVar10 != 0) {
      FUN_10aba565c(0x1137eaf78,0xb2);
      ___cxa_atexit(PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev_110346340
                    ,0x1137eaf78,0x100000000);
      ___cxa_guard_release(0x1137eaec8);
    }
  } while( true );
}



/* Entry: 10a30610c; end: 10a30672f;  */

/* WARNING: Removing unreachable block (ram,0x00010a306508) */

void FUN_10a30610c(undefined ***param_1,undefined4 *param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *plStack_2b0;
  long *plStack_2a8;
  undefined1 uStack_2a0;
  undefined7 uStack_29f;
  char cStack_289;
  byte bStack_288;
  long lStack_280;
  long *plStack_278;
  char cStack_270;
  undefined1 auStack_268 [8];
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [32];
  undefined1 auStack_228 [257];
  byte bStack_127;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  byte bStack_ec;
  long lStack_e8;
  long *plStack_e0;
  byte bStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined **ppuStack_b8;
  long lStack_b0;
  undefined ***pppuStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = 1;
  FUN_10a303694();
  lVar7 = 0;
  FUN_10a2421c8();
  lVar9 = *(long *)(lVar7 + 0x278);
  if (param_4 != 0) {
    lVar9 = param_4;
  }
  lVar6 = lVar6 + 500;
  if (param_3 != 0) {
    lVar6 = param_3;
  }
  uVar10 = *(ulong *)(lVar7 + 0x270);
  __ZNSt3__16chrono12steady_clock3nowEv();
  FUN_10a1007e0(auStack_118,param_5);
  FUN_10a08fd8c();
  FUN_10a31da38(auStack_268,1,auStack_118,param_5);
  *param_1 = (undefined **)0x0;
  param_1[1] = (undefined **)0x0;
  FUN_10a306730(&lStack_280,param_2,auStack_260);
  if ((cStack_270 == '\x01') && ((uVar10 & 3) != 3)) {
    if ((*(byte *)(lStack_280 + 0xa8) & 1) == 0) {
      FUN_10a3069ac(param_1,lStack_280,plStack_278);
      goto LAB_10a30653c;
    }
  }
  else {
    ppuStack_b8 = &PTR_DAT_110bc40f8;
    pppuStack_a0 = &ppuStack_b8;
    lStack_b0 = lVar9;
    lStack_98 = lVar6;
    if (*(char *)((long)param_7 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_90,*param_7,param_7[1]);
    }
    else {
      uStack_88 = param_7[1];
      uStack_90 = *param_7;
      uStack_80 = param_7[2];
    }
    uStack_78 = 0;
    plStack_70 = (long *)0x0;
    FUN_10ab956fc(auStack_228,&ppuStack_b8);
    FUN_10a31c19c(auStack_268);
    if ((bStack_127 & 1) == 0) {
      FUN_10a305f8c();
    }
    if (((uint)param_6 >> 3 & 1) != 0) {
      __ZNSt3__15mutex4lockEv(param_2 + 0x10);
    }
    uStack_2a0 = 0;
    bStack_288 = 0;
    plStack_d0 = (long *)0x0;
    plStack_c8 = (long *)0x0;
    lVar9 = 0;
    FUN_10a2421c8();
    uVar10 = *(ulong *)(lVar9 + 0x270);
    FUN_10a306730(&lStack_e8,param_2,auStack_248);
    if ((bStack_d8 == 1) && ((uVar10 & 3) != 3)) {
      if ((*(byte *)(lStack_e8 + 0xa8) & 1) == 0) {
        FUN_10a3069ac(&plStack_d0,lStack_e8,plStack_e0);
LAB_10a3063bc:
        FUN_10a305ddc(*(undefined8 *)(param_2 + 2),auStack_260,&plStack_d0);
        plStack_2a8 = plStack_c8;
        plStack_2b0 = plStack_d0;
        plStack_d0 = (long *)0x0;
        plStack_c8 = (long *)0x0;
        if ((bStack_d8 & 1) == 0) goto LAB_10a306420;
      }
      else {
        func_0x00010a30a100(&uStack_2a0);
        plStack_2b0 = (long *)0x0;
        plStack_2a8 = (long *)0x0;
        if (bStack_d8 != 1) goto LAB_10a306420;
      }
LAB_10a3063e8:
      if (plStack_e0 != (long *)0x0) {
        plVar8 = plStack_e0 + 1;
        do {
          lVar9 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_e0);
        }
      }
    }
    else {
      FUN_10a30a14c(&uStack_100,param_2,auStack_268,&uStack_2a0,param_6);
      uVar4 = uStack_100;
      if ((bStack_ec & 1) != 0) {
        FUN_10a30a3a8(*param_2,uStack_100);
        FUN_10a30a3a8(*param_2,uVar4);
        plVar8 = (long *)0xc8;
        __Znwm();
        plVar8[1] = 0;
        plVar8[2] = 0;
        *plVar8 = (long)&PTR_FUN_110bc4278;
        plStack_d0 = plVar8 + 3;
        *(undefined1 *)plStack_d0 = 0;
        *(undefined8 *)((long)plVar8 + 0x24) = uStack_f8;
        *(ulong *)((long)plVar8 + 0x1c) = CONCAT44(uStack_fc,uStack_100);
        *(undefined4 *)((long)plVar8 + 0x2c) = uStack_f0;
        plVar8[7] = 0;
        plVar8[6] = 0;
        plVar8[9] = 0;
        plVar8[8] = 0;
        *(undefined4 *)(plVar8 + 10) = 0x3f800000;
        plVar8[0xc] = 0;
        plVar8[0xb] = 0;
        plVar8[0xe] = 0;
        plVar8[0xd] = 0;
        *(undefined4 *)(plVar8 + 0xf) = 0x3f800000;
        plVar8[0x11] = 0;
        plVar8[0x10] = 0;
        plVar8[0x13] = 0;
        plVar8[0x12] = 0;
        *(undefined4 *)(plVar8 + 0x14) = 0x3f800000;
        plVar8[0x15] = 0;
        plVar8[0x16] = 0;
        *(undefined1 *)(plVar8 + 0x18) = 0;
        plVar8[0x17] = 0;
        plStack_c8 = plVar8;
        FUN_10a305ddc(*(undefined8 *)(param_2 + 2),auStack_248,&plStack_d0);
        goto LAB_10a3063bc;
      }
      plStack_2b0 = (long *)0x0;
      plStack_2a8 = (long *)0x0;
      if ((bStack_d8 & 1) != 0) goto LAB_10a3063e8;
    }
LAB_10a306420:
    plVar8 = plStack_c8;
    if (plStack_c8 != (long *)0x0) {
      plVar1 = plStack_c8 + 1;
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
        (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    func_0x00010a306a20(param_1,&plStack_2b0);
    plVar8 = plStack_2a8;
    if (plStack_2a8 != (long *)0x0) {
      plVar1 = plStack_2a8 + 1;
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
        (**(code **)(*plStack_2a8 + 0x10))(plStack_2a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    if (*param_1 == (undefined **)0x0) {
      if ((bStack_288 & 1) != 0) {
        FUN_10a196f30(&uStack_2a0);
      }
      goto LAB_10a306620;
    }
    if ((bStack_288 != 0) && (cStack_289 < '\0')) {
      __ZdlPv(CONCAT71(uStack_29f,uStack_2a0));
    }
    if (((uint)param_6 >> 3 & 1) != 0) {
      __ZNSt3__15mutex6unlockEv(param_2 + 0x10);
    }
    plVar8 = plStack_70;
    if (plStack_70 != (long *)0x0) {
      plVar1 = plStack_70 + 1;
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
        (**(code **)(*plStack_70 + 0x10))(plStack_70);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    param_1 = pppuStack_a0;
    if (pppuStack_a0 == &ppuStack_b8) {
      lVar9 = 0x20;
    }
    else {
      if (pppuStack_a0 == (undefined ***)0x0) goto LAB_10a30653c;
      lVar9 = 0x28;
    }
    (**(code **)((long)*pppuStack_a0 + lVar9))();
LAB_10a30653c:
    __ZNSt3__16chrono12steady_clock3nowEv();
    if (param_1 == (undefined ***)0x0) {
      __ZNSt3__16chrono12steady_clock3nowEv();
    }
    *(double *)(param_2 + 10) =
         *(double *)(param_2 + 10) + (double)((long)param_1 - lVar7) / 1000000000.0;
    if ((cStack_270 == '\x01') && (plStack_278 != (long *)0x0)) {
      plVar8 = plStack_278 + 1;
      do {
        lVar9 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_278 + 0x10))(plStack_278);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_278);
      }
    }
    func_0x00010a189190(auStack_228);
    if (cStack_101 < '\0') {
      __ZdlPv(auStack_118[0]);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
  }
  FUN_10a196e14(&UNK_10f64d749);
LAB_10a306620:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a306624);
  (*pcVar5)();
}



/* Entry: 10a306730; end: 10a3069ab;  */

void FUN_10a306730(long *param_1,ulong param_2,undefined8 param_3)

{
  byte *pbVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plStack_60;
  long *plStack_58;
  byte bStack_50;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  plStack_60 = (long *)((ulong)plStack_60 & 0xffffffffffffff00);
  bStack_50 = 0;
  lVar10 = *(long *)(param_2 + 8);
  pbVar1 = (byte *)(lVar10 + 0x60);
  do {
    bVar3 = *pbVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  while ((bVar3 & 1) != 0) {
    do {
    } while ((*pbVar1 & 1) != 0);
    do {
      bVar3 = *pbVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar5) {
        *pbVar1 = 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar7 = (long *)(lVar10 + 8);
  FUN_10a31c478(plVar7,param_3);
  *pbVar1 = 0;
  lVar10 = *plVar7;
  if (lVar10 == 0) {
    uVar8 = param_2;
    FUN_10a309fd8(param_2,param_3);
    if (uVar8 >> 0x20 == 0) {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 2) = 0;
      if (bStack_50 != 1) {
        return;
      }
    }
    else {
      puStack_40 = &UNK_10f64d785;
      uStack_38 = 0x1e;
      if ((int)uVar8 == 0) {
        FUN_10a0edfc4(&puStack_40);
LAB_10a306978:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10a30697c);
        (*pcVar6)();
      }
      plVar9 = (long *)0xc8;
      __Znwm();
      plVar7 = plStack_58;
      *plVar9 = (long)&PTR_FUN_110bc4278;
      plVar9[1] = 0;
      plStack_60 = plVar9 + 3;
      *(undefined1 *)plStack_60 = 0;
      plVar9[2] = 0;
      *(int *)((long)plVar9 + 0x1c) = (int)uVar8;
      *(undefined1 *)(plVar9 + 4) = 0;
      *(undefined1 *)((long)plVar9 + 0x24) = 0;
      *(undefined1 *)(plVar9 + 5) = 0;
      *(undefined1 *)((long)plVar9 + 0x2c) = 0;
      plVar9[7] = 0;
      plVar9[6] = 0;
      plVar9[9] = 0;
      plVar9[8] = 0;
      *(undefined4 *)(plVar9 + 10) = 0x3f800000;
      plVar9[0xc] = 0;
      plVar9[0xb] = 0;
      plVar9[0xe] = 0;
      plVar9[0xd] = 0;
      *(undefined4 *)(plVar9 + 0xf) = 0x3f800000;
      plVar9[0x11] = 0;
      plVar9[0x10] = 0;
      plVar9[0x13] = 0;
      plVar9[0x12] = 0;
      *(undefined4 *)(plVar9 + 0x14) = 0x3f800000;
      plVar9[0x16] = 0;
      plVar9[0x17] = 0;
      plVar9[0x15] = 0;
      *(undefined1 *)(plVar9 + 0x18) = 0;
      if (bStack_50 == 1) {
        if (plStack_58 != (long *)0x0) {
          plVar2 = plStack_58 + 1;
          do {
            lVar10 = *plVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *plVar2 = lVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar10 == 0) {
            lVar10 = *plStack_58;
            plStack_58 = plVar9;
            (**(code **)(lVar10 + 0x10))(plVar7);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
            plVar9 = plStack_58;
          }
        }
      }
      else {
        bStack_50 = 1;
      }
      plStack_58 = plVar9;
      if ((bStack_50 & 1) == 0) goto LAB_10a306978;
      FUN_10a305ddc(*(undefined8 *)(param_2 + 8),param_3,&plStack_60);
      *(undefined1 *)(param_1 + 2) = 0;
    }
    param_1[1] = (long)plStack_58;
    *param_1 = (long)plStack_60;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  else {
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    lVar11 = plVar7[1];
    *param_1 = lVar10;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      plVar7 = (long *)(lVar11 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = *plVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    *(undefined1 *)(param_1 + 2) = 1;
    if (((bStack_50 & 1) != 0) && (plStack_58 != (long *)0x0)) {
      plVar7 = plStack_58 + 1;
      do {
        lVar10 = *plVar7;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_58);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a3069ac; end: 10a306aab;  */

undefined8 * FUN_10a3069ac(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (param_3 != 0) {
    plVar5 = (long *)(param_3 + 8);
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
  *param_1 = param_2;
  param_1[1] = param_3;
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



/* Entry: 10a306aac; end: 10a3070b3;  */

/* WARNING: Removing unreachable block (ram,0x00010a306e78) */

void FUN_10a306aac(undefined ***param_1,undefined4 *param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 *param_9)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long *plStack_2b0;
  long *plStack_2a8;
  undefined1 uStack_2a0;
  undefined7 uStack_29f;
  char cStack_289;
  byte bStack_288;
  long lStack_280;
  long *plStack_278;
  char cStack_270;
  undefined1 auStack_268 [8];
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [32];
  undefined1 auStack_228 [257];
  byte bStack_127;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined4 auStack_100 [5];
  byte bStack_ec;
  long lStack_e8;
  long *plStack_e0;
  byte bStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined **ppuStack_c0;
  long lStack_b8;
  undefined ***pppuStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = 1;
  FUN_10a303694();
  lVar5 = 0;
  FUN_10a2421c8();
  lVar8 = *(long *)(lVar5 + 0x278);
  if (param_5 != 0) {
    lVar8 = param_5;
  }
  lVar4 = lVar4 + 500;
  if (param_4 != 0) {
    lVar4 = param_4;
  }
  uVar9 = *(ulong *)(lVar5 + 0x270);
  __ZNSt3__16chrono12steady_clock3nowEv();
  FUN_10a1007e0(auStack_118,param_6);
  FUN_10a08fd8c();
  FUN_10a31da38(auStack_268,param_3,auStack_118,param_6);
  *param_1 = (undefined **)0x0;
  param_1[1] = (undefined **)0x0;
  FUN_10a3070b4(&lStack_280,param_2,auStack_260);
  if ((cStack_270 == '\x01') && ((uVar9 & 3) != 3)) {
    if ((*(byte *)(lStack_280 + 0x14) & 1) == 0) {
      FUN_10a307244(param_1,lStack_280,plStack_278);
      goto LAB_10a306eac;
    }
  }
  else {
    ppuStack_c0 = &PTR_DAT_110bc4178;
    pppuStack_a8 = &ppuStack_c0;
    lStack_b8 = lVar8;
    lStack_a0 = lVar4;
    if (*(char *)((long)param_9 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_98,*param_9,param_9[1]);
    }
    else {
      uStack_90 = param_9[1];
      uStack_98 = *param_9;
      uStack_88 = param_9[2];
    }
    uStack_80 = 0;
    plStack_78 = (long *)0x0;
    FUN_10ab956fc(auStack_228,&ppuStack_c0);
    FUN_10a31c19c(auStack_268);
    if (((int)param_3 == 1) && ((bStack_127 & 1) == 0)) {
      FUN_10a305f8c();
    }
    if (((uint)param_8 >> 3 & 1) != 0) {
      __ZNSt3__15mutex4lockEv(param_2 + 0x10);
    }
    uStack_2a0 = 0;
    bStack_288 = 0;
    plStack_d0 = (long *)0x0;
    plStack_c8 = (long *)0x0;
    lVar8 = 0;
    FUN_10a2421c8();
    uVar9 = *(ulong *)(lVar8 + 0x270);
    FUN_10a3070b4(&lStack_e8,param_2,auStack_248);
    if ((bStack_d8 == 1) && ((uVar9 & 3) != 3)) {
      if ((*(byte *)(lStack_e8 + 0x14) & 1) == 0) {
        FUN_10a307244(&plStack_d0,lStack_e8,plStack_e0);
LAB_10a306d2c:
        FUN_10a305eb4(*(undefined8 *)(param_2 + 4),auStack_260,&plStack_d0);
        plStack_2a8 = plStack_c8;
        plStack_2b0 = plStack_d0;
        plStack_d0 = (long *)0x0;
        plStack_c8 = (long *)0x0;
        if ((bStack_d8 & 1) == 0) goto LAB_10a306d90;
      }
      else {
        func_0x00010a30a100(&uStack_2a0);
        plStack_2b0 = (long *)0x0;
        plStack_2a8 = (long *)0x0;
        if (bStack_d8 != 1) goto LAB_10a306d90;
      }
LAB_10a306d58:
      if (plStack_e0 != (long *)0x0) {
        plVar6 = plStack_e0 + 1;
        do {
          lVar8 = *plVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_e0);
        }
      }
    }
    else {
      FUN_10a30a14c(auStack_100,param_2,auStack_268,&uStack_2a0,param_8);
      if ((bStack_ec & 1) != 0) {
        FUN_10a30a3a8(*param_2,auStack_100[0]);
        FUN_10a30a3a8(*param_2,auStack_100[0]);
        plVar6 = (long *)0x570;
        __Znwm();
        plVar6[1] = 0;
        plVar6[2] = 0;
        plVar7 = plVar6 + 3;
        *plVar6 = (long)&PTR_FUN_110baa010;
        FUN_10a15d248(plVar7,auStack_100);
        plStack_d0 = plVar7;
        plStack_c8 = plVar6;
        FUN_10a305eb4(*(undefined8 *)(param_2 + 4),auStack_248,&plStack_d0);
        goto LAB_10a306d2c;
      }
      plStack_2b0 = (long *)0x0;
      plStack_2a8 = (long *)0x0;
      if ((bStack_d8 & 1) != 0) goto LAB_10a306d58;
    }
LAB_10a306d90:
    plVar6 = plStack_c8;
    if (plStack_c8 != (long *)0x0) {
      plVar7 = plStack_c8 + 1;
      do {
        lVar8 = *plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    func_0x00010a3072b8(param_1,&plStack_2b0);
    plVar6 = plStack_2a8;
    if (plStack_2a8 != (long *)0x0) {
      plVar7 = plStack_2a8 + 1;
      do {
        lVar8 = *plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_2a8 + 0x10))(plStack_2a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (*param_1 == (undefined **)0x0) {
      if ((bStack_288 & 1) != 0) {
        FUN_10a196f30(&uStack_2a0);
      }
      goto LAB_10a306f90;
    }
    if ((bStack_288 != 0) && (cStack_289 < '\0')) {
      __ZdlPv(CONCAT71(uStack_29f,uStack_2a0));
    }
    if (((uint)param_8 >> 3 & 1) != 0) {
      __ZNSt3__15mutex6unlockEv(param_2 + 0x10);
    }
    plVar6 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar7 = plStack_78 + 1;
      do {
        lVar8 = *plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    param_1 = pppuStack_a8;
    if (pppuStack_a8 == &ppuStack_c0) {
      lVar8 = 0x20;
    }
    else {
      if (pppuStack_a8 == (undefined ***)0x0) goto LAB_10a306eac;
      lVar8 = 0x28;
    }
    (**(code **)((long)*pppuStack_a8 + lVar8))();
LAB_10a306eac:
    __ZNSt3__16chrono12steady_clock3nowEv();
    if (param_1 == (undefined ***)0x0) {
      __ZNSt3__16chrono12steady_clock3nowEv();
    }
    *(double *)(param_2 + 10) =
         *(double *)(param_2 + 10) + (double)((long)param_1 - lVar5) / 1000000000.0;
    if ((cStack_270 == '\x01') && (plStack_278 != (long *)0x0)) {
      plVar6 = plStack_278 + 1;
      do {
        lVar8 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_278 + 0x10))(plStack_278);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_278);
      }
    }
    func_0x00010a189190(auStack_228);
    if (cStack_101 < '\0') {
      __ZdlPv(auStack_118[0]);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
    ___stack_chk_fail();
  }
  FUN_10a196e14(&UNK_10f64d749);
LAB_10a306f90:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a306f94);
  (*pcVar3)();
}



/* Entry: 10a3070b4; end: 10a307243;  */

undefined ** FUN_10a3070b4(long *param_1,undefined **param_2,undefined *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined1 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  char cStack_59;
  int iStack_54;
  undefined1 uStack_50;
  undefined1 uStack_4c;
  undefined1 uStack_48;
  undefined1 uStack_44;
  
  ppuVar4 = (undefined **)param_2[2];
  puVar7 = param_3;
  FUN_10a305d7c(ppuVar4,param_3);
  puVar6 = *ppuVar4;
  if (puVar6 == (undefined *)0x0) {
    ppuVar4 = param_2;
    puVar6 = param_3;
    FUN_10a309fd8();
    if ((ulong)ppuVar4 >> 0x20 == 0) {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 2) = 0;
    }
    else {
      puStack_70 = &UNK_10f64d785;
      uStack_68 = 0x1e;
      if ((int)ppuVar4 == 0) {
        ppuVar4 = &puStack_70;
        FUN_10a0edfc4();
        func_0x00010a1943f8(&puStack_88);
        __Unwind_Resume();
        if (puVar7 != (undefined *)0x0) {
          plVar9 = (long *)(puVar7 + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = *plVar9 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        plVar9 = (long *)ppuVar4[1];
        *ppuVar4 = puVar6;
        ppuVar4[1] = puVar7;
        if (plVar9 != (long *)0x0) {
          plVar1 = plVar9 + 1;
          do {
            lVar8 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
        return ppuVar4;
      }
      puVar5 = (undefined8 *)0x570;
      __Znwm();
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = &PTR_FUN_110baa010;
      func_0x000107c2b054(&puStack_70,"");
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      iStack_54 = (int)ppuVar4;
      FUN_10a15d248(puVar5 + 3,&iStack_54);
      if (cStack_59 < '\0') {
        __ZdlPv(puStack_70);
      }
      uStack_78 = 1;
      ppuVar4 = (undefined **)param_2[2];
      puStack_88 = puVar5 + 3;
      puStack_80 = puVar5;
      FUN_10a305eb4(ppuVar4,param_3,&puStack_88);
      *param_1 = (long)puStack_88;
      param_1[1] = (long)puVar5;
      *(undefined1 *)(param_1 + 2) = 1;
    }
  }
  else {
    *(int *)((long)param_2 + 0x1c) = *(int *)((long)param_2 + 0x1c) + 1;
    puVar7 = ppuVar4[1];
    *param_1 = (long)puVar6;
    param_1[1] = (long)puVar7;
    if (puVar7 != (undefined *)0x0) {
      plVar9 = (long *)(puVar7 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = *plVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return ppuVar4;
}



/* Entry: 10a307244; end: 10a30731b;  */

undefined8 * FUN_10a307244(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (param_3 != 0) {
    plVar5 = (long *)(param_3 + 8);
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
  *param_1 = param_2;
  param_1[1] = param_3;
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



/* Entry: 10a30731c; end: 10a307797;  */

/* WARNING: Removing unreachable block (ram,0x00010a3074d0) */
/* WARNING: Removing unreachable block (ram,0x00010a3075d8) */

void FUN_10a30731c(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,byte param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 *param_14)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_250 [8];
  long *plStack_248;
  long lStack_240;
  long *plStack_238;
  char cStack_230;
  undefined1 auStack_228 [8];
  undefined1 auStack_220 [48];
  undefined1 uStack_1f0;
  undefined1 auStack_1e8 [257];
  byte bStack_e7;
  undefined **ppuStack_d8;
  undefined8 uStack_d0;
  undefined ***pppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = param_2;
  __ZNSt3__16chrono12steady_clock3nowEv();
  lVar8 = lVar9;
  FUN_10a08fd8c();
  FUN_10a31da38(auStack_228,param_3,param_4,lVar8);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_10a307798(&lStack_240,param_2,auStack_220,param_6);
  if (cStack_230 == '\x01') {
    if ((*(byte *)(lStack_240 + 0x14) & 1) == 0) {
      FUN_10a307244(param_1,lStack_240,plStack_238);
      plVar7 = param_1;
      goto LAB_10a3075ec;
    }
  }
  else {
    puVar5 = auStack_228;
    FUN_10a305818(puVar5,param_2);
    if (((ulong)puVar5 & 1) == 0) {
      puVar6 = (undefined8 *)*param_6;
      func_0x00010a08f1bc();
      ppuStack_d8 = &PTR_DAT_110bc41f8;
      uStack_d0 = param_13;
      pppuStack_c0 = &ppuStack_d8;
      uStack_b8 = param_12;
      if (*(char *)((long)param_14 + 0x17) < '\0') {
        func_0x000107c3192c(&uStack_b0,*param_14,param_14[1]);
      }
      else {
        uStack_a8 = param_14[1];
        uStack_b0 = *param_14;
        uStack_a0 = param_14[2];
      }
      uStack_98 = 0;
      plStack_90 = (long *)0x0;
      lStack_88 = *param_6 + 0x30;
      puVar6 = (undefined8 *)*puVar6;
      FUN_10a155a64();
      uStack_80 = *puVar6;
      FUN_10a08fd8c();
      uStack_78 = SUB84(puVar6,0);
      puVar5 = auStack_1e8;
      FUN_10ab947c0(puVar5,&ppuStack_d8);
      uStack_1f0 = ((ulong)puVar5 & 0x101) != 0;
      FUN_10a31c19c(auStack_228);
      plVar7 = plStack_90;
      if (plStack_90 != (long *)0x0) {
        plVar1 = plStack_90 + 1;
        do {
          lVar8 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_90 + 0x10))(plStack_90);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      if (pppuStack_c0 == &ppuStack_d8) {
        lVar8 = 0x20;
      }
      else {
        if (pppuStack_c0 == (undefined ***)0x0) goto LAB_10a307504;
        lVar8 = 0x28;
      }
      (**(code **)((long)*pppuStack_c0 + lVar8))();
    }
LAB_10a307504:
    if ((((int)param_3 == 1) && ((bStack_e7 & 1) == 0)) && (*(int *)(*param_6 + 0x734) == 1)) {
      FUN_10a305f8c();
    }
    if ((param_10 >> 3 & 1) != 0) {
      __ZNSt3__15mutex4lockEv(param_2 + 0x40);
    }
    ppuStack_d8 = (undefined **)((ulong)ppuStack_d8 & 0xffffffffffffff00);
    pppuStack_c0 = (undefined ***)((ulong)pppuStack_c0 & 0xffffffffffffff00);
    FUN_10a307eb8(auStack_250,param_2,param_6,param_5,param_8,param_9,auStack_228,&ppuStack_d8,
                  param_10);
    plVar7 = param_1;
    func_0x00010a3072b8(param_1,auStack_250);
    if (plStack_248 != (long *)0x0) {
      plVar1 = plStack_248 + 1;
      do {
        lVar8 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_248 + 0x10))(plStack_248);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        plVar7 = plStack_248;
      }
    }
    if (*param_1 == 0) {
      if (((ulong)pppuStack_c0 & 1) != 0) {
        FUN_10a196f30(&ppuStack_d8);
      }
      goto LAB_10a3076c0;
    }
    if ((param_10 >> 3 & 1) != 0) {
      plVar7 = (long *)(param_2 + 0x40);
      __ZNSt3__15mutex6unlockEv();
    }
LAB_10a3075ec:
    __ZNSt3__16chrono12steady_clock3nowEv();
    if (plVar7 == (long *)0x0) {
      __ZNSt3__16chrono12steady_clock3nowEv();
    }
    *(double *)(param_2 + 0x28) =
         *(double *)(param_2 + 0x28) + (double)((long)plVar7 - lVar9) / 1000000000.0;
    if ((cStack_230 == '\x01') && (plStack_238 != (long *)0x0)) {
      plVar7 = plStack_238 + 1;
      do {
        lVar9 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_238 + 0x10))(plStack_238);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_238);
      }
    }
    func_0x00010a189190(auStack_1e8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
    ___stack_chk_fail();
  }
  FUN_10a196e14(&UNK_10f64d749);
LAB_10a3076c0:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a3076c4);
  (*pcVar4)();
}



/* Entry: 10a307798; end: 10a307eb7;  */

/* WARNING: Removing unreachable block (ram,0x00010a307c84) */
/* WARNING: Removing unreachable block (ram,0x00010a307938) */
/* WARNING: Removing unreachable block (ram,0x00010a307c94) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a307798(long *param_1,long *******param_2,undefined8 param_3,long *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  long ******pppppplVar6;
  undefined **ppuVar7;
  long *******ppppppplVar8;
  long *******ppppppplVar9;
  long *******ppppppplVar11;
  long *****ppppplVar12;
  long *****ppppplVar13;
  bool bVar14;
  long *******unaff_x25;
  undefined8 *******pppppppuStack_1a8;
  ulong uStack_1a0;
  byte bStack_191;
  long *******ppppppplStack_190;
  long *******ppppppplStack_188;
  byte bStack_180;
  int iStack_178;
  long *******ppppppplStack_168;
  long *******ppppppplStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  long *******ppppppplStack_128;
  long *******ppppppplStack_120;
  ulong uStack_118;
  long *******ppppppplStack_110;
  long *******ppppppplStack_108;
  long lStack_100;
  long ******pppppplStack_f8;
  long ******pppppplStack_f0;
  undefined8 uStack_e8;
  long *****ppppplStack_e0;
  long *****ppppplStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long *****ppppplStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_90 [24];
  long ******pppppplStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *******pppppppuVar10;
  
  if (*(int *)(*param_4 + 0x734) == 1 || *(int *)(*param_4 + 0x734) == 6) {
    pppppplVar6 = param_2[2];
    FUN_10a305d7c();
    ppppplVar12 = *pppppplVar6;
    if (ppppplVar12 == (long *****)0x0) {
      FUN_10a309df0(&ppppppplStack_110,param_3);
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (&pppppplStack_78,&UNK_10f64022e,&ppppppplStack_110);
      if (lStack_100 < 0) {
        __ZdlPv(ppppppplStack_110);
      }
      if ((*(int *)param_2 == 0) || (*(int *)(*param_4 + 0x734) != 1)) {
        ppppppplStack_190 = (long *******)((ulong)ppppppplStack_190 & 0xffffffffffffff00);
        bStack_180 = 0;
        iStack_178 = 0;
      }
      else {
        ppuVar7 = &PTR___tlv_bootstrap_11340de10;
        (*(code *)PTR___tlv_bootstrap_11340de10)();
        if (*ppuVar7 != (undefined *)0x0) {
          FUN_10a08e1c8(*ppuVar7 + 0x18);
        }
        unaff_x25 = param_2;
        FUN_10a309fd8(param_2,param_3);
        if ((ulong)unaff_x25 >> 0x20 == 0) {
          FUN_10a0f1edc(&ppppppplStack_110,&pppppplStack_78,0);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a307d7c);
          (*pcVar4)();
        }
        ppppppplVar8 = (long *******)0x570;
        __Znwm();
        ppppppplVar11 = ppppppplVar8 + 1;
        *ppppppplVar11 = (long ******)0x0;
        ppppppplVar8[2] = (long ******)0x0;
        ppppppplVar9 = ppppppplVar8 + 3;
        *ppppppplVar8 = (long ******)&PTR_FUN_110baa010;
        FUN_10a15e9dc(ppppppplVar9,param_4,unaff_x25,param_6);
        do {
          cVar2 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(ppppppplVar11,0x10);
          if (bVar14) {
            *ppppppplVar11 = (long ******)((long)*ppppppplVar11 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        bStack_180 = 1;
        iStack_178 = (int)unaff_x25;
        do {
          pppppplVar6 = *ppppppplVar11;
          cVar2 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(ppppppplVar11,0x10);
          if (bVar14) {
            *ppppppplVar11 = (long ******)((long)pppppplVar6 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        ppppppplStack_190 = ppppppplVar9;
        ppppppplStack_188 = ppppppplVar8;
        if (pppppplVar6 == (long ******)0x0) {
          (*(code *)(*ppppppplVar8)[2])(ppppppplVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar8);
        }
      }
      iVar3 = iStack_178;
      if ((bStack_180 & 1) == 0) {
        pppppppuVar10 = &pppppppuStack_1a8;
        FUN_10a309df0(pppppppuVar10,param_3);
        iVar5 = (int)pppppppuVar10;
        FUN_10a08fd8c();
        if ((iVar3 != 0) && (iVar5 != 0)) {
          pppppplStack_78 = (long ******)0x0;
          uStack_70 = 0;
          uStack_68 = 0;
          pppppppuVar10 = pppppppuStack_1a8;
          if (-1 < (char)bStack_191) {
            uStack_1a0 = (ulong)bStack_191;
            pppppppuVar10 = &pppppppuStack_1a8;
          }
          FUN_10a189258(&ppppppplStack_110,pppppppuVar10,uStack_1a0,&UNK_10f64e7d3,5);
          FUN_10a166d50(auStack_90,&ppppppplStack_110);
          if (lStack_100 < 0) {
            __ZdlPv(ppppppplStack_110);
          }
          FUN_10a09d9a0(&ppppppplStack_110,auStack_90,0);
          ppppppplVar8 = &pppppplStack_78;
          FUN_10a17496c(ppppppplVar8,&ppppppplStack_110);
          ppppppplVar9 = ppppppplVar8;
          if (lStack_100 < 0) {
            ppppppplVar9 = ppppppplStack_110;
            __ZdlPv(ppppppplStack_110);
          }
          if ((int)ppppppplVar8 == 0) {
LAB_10a307ae4:
            ppppppplStack_128 = (long *******)0x0;
            ppppppplStack_120 = (long *******)0x0;
            uStack_118 = 0;
            uStack_140 = 0;
            uStack_138 = 0;
            uStack_130 = 0;
            uStack_158 = 0;
            uStack_150 = 0;
            lStack_148 = 0;
            uStack_a0 = 0;
            uStack_b8 = 0;
            lStack_c0 = 0;
            uStack_a8 = 0;
            ppppplStack_b0 = (long *****)0x0;
            ppppplStack_d8 = (long *****)0x0;
            ppppplStack_e0 = (long *****)0x0;
            lStack_c8 = 0;
            uStack_d0 = 0;
            pppppplStack_f8 = (long ******)0x0;
            lStack_100 = 0;
            uStack_e8 = 0;
            pppppplStack_f0 = (long ******)0x0;
            ppppppplStack_108 = (long *******)0x0;
            ppppppplStack_110 = (long *******)0x0;
            FUN_10a08fd8c();
            ppppppplVar11 = param_2;
            FUN_10a304f48(param_2,&pppppppuStack_1a8,&ppppppplStack_128,&uStack_140,&uStack_158,
                          &ppppppplStack_110,ppppppplVar9);
            if (((int)ppppppplVar11 == 0) ||
               (((ppppppplStack_110 == ppppppplStack_108 && (pppppplStack_f8 == pppppplStack_f0)) &&
                (ppppplStack_e0 == ppppplStack_d8)))) {
              ppppppplVar9 = ppppppplStack_120;
              if (-1 < (long)uStack_118) {
                ppppppplVar9 = (long *******)(uStack_118 >> 0x38);
              }
              if (ppppppplVar9 != (long *******)0x0) {
                uVar1 = uStack_138;
                if (-1 < (long)uStack_130) {
                  uVar1 = uStack_130 >> 0x38;
                }
                if (uVar1 != 0) {
                  ppppppplVar8 = (long *******)0x570;
                  __Znwm();
                  ppppppplVar8[1] = (long ******)0x0;
                  ppppppplVar8[2] = (long ******)0x0;
                  *ppppppplVar8 = (long ******)&PTR_FUN_110baa010;
                  unaff_x25 = ppppppplVar8 + 3;
                  FUN_10a15f2ec(unaff_x25,param_4,iVar3,&ppppppplStack_128,&uStack_140);
                  bVar14 = false;
                  goto LAB_10a307bfc;
                }
              }
              bVar14 = true;
            }
            else {
              FUN_10a322b90(&ppppppplStack_168,param_4,iVar3,&ppppppplStack_110);
              bVar14 = false;
              ppppppplVar8 = ppppppplStack_160;
              unaff_x25 = ppppppplStack_168;
            }
LAB_10a307bfc:
            ppppppplStack_168 = (long *******)&ppppplStack_b0;
            FUN_10a188534(&ppppppplStack_168);
            if (lStack_c8 != 0) {
              lStack_c0 = lStack_c8;
              __ZdlPv();
            }
            ppppppplStack_168 = (long *******)&ppppplStack_e0;
            FUN_10a1885a4(&ppppppplStack_168);
            ppppppplStack_168 = &pppppplStack_f8;
            func_0x00010a1885e4(&ppppppplStack_168);
            ppppppplStack_168 = (long *******)&ppppppplStack_110;
            FUN_10a188624(&ppppppplStack_168);
            if (lStack_148 < 0) {
              __ZdlPv(uStack_158);
            }
            if ((long)uStack_130 < 0) {
              __ZdlPv(uStack_140);
            }
            if ((long)uStack_118 < 0) {
              __ZdlPv(ppppppplStack_128);
            }
          }
          else {
            FUN_109f49410(&ppppppplStack_110,&pppppplStack_78);
            if (((ppppppplStack_110 == ppppppplStack_108) && (pppppplStack_f8 == pppppplStack_f0))
               && (ppppplStack_e0 == ppppplStack_d8)) {
              unaff_x25 = &pppppplStack_f8;
              ppppppplVar8 = (long *******)&ppppppplStack_110;
              ppppppplStack_128 = (long *******)&ppppplStack_b0;
              FUN_10a188534(&ppppppplStack_128);
              if (lStack_c8 != 0) {
                lStack_c0 = lStack_c8;
                __ZdlPv();
              }
              ppppppplStack_128 = (long *******)&ppppplStack_e0;
              FUN_10a1885a4(&ppppppplStack_128);
              ppppppplStack_128 = unaff_x25;
              func_0x00010a1885e4(&ppppppplStack_128);
              ppppppplVar9 = (long *******)&ppppppplStack_128;
              ppppppplStack_128 = ppppppplVar8;
              FUN_10a188624(ppppppplVar9);
              goto LAB_10a307ae4;
            }
            FUN_10a322b90(&ppppppplStack_128,param_4,iVar3,&ppppppplStack_110);
            ppppppplVar8 = ppppppplStack_120;
            unaff_x25 = ppppppplStack_128;
            ppppppplStack_128 = (long *******)&ppppplStack_b0;
            FUN_10a188534(&ppppppplStack_128);
            if (lStack_c8 != 0) {
              lStack_c0 = lStack_c8;
              __ZdlPv();
            }
            ppppppplStack_128 = (long *******)&ppppplStack_e0;
            FUN_10a1885a4(&ppppppplStack_128);
            ppppppplStack_128 = &pppppplStack_f8;
            func_0x00010a1885e4(&ppppppplStack_128);
            ppppppplStack_128 = (long *******)&ppppppplStack_110;
            FUN_10a188624(&ppppppplStack_128);
            bVar14 = false;
          }
          if (!bVar14) {
            bStack_180 = 1;
            ppppppplStack_190 = unaff_x25;
            ppppppplStack_188 = ppppppplVar8;
          }
        }
        if ((char)bStack_191 < '\0') {
          __ZdlPv(pppppppuStack_1a8);
        }
        if ((bStack_180 & 1) == 0) goto LAB_10a307d40;
      }
      FUN_10a305eb4(param_2[2],param_3,&ppppppplStack_190);
      ppppppplVar8 = ppppppplStack_188;
      *(undefined1 *)(param_1 + 2) = 0;
      param_1[1] = (long)ppppppplStack_188;
      *param_1 = (long)ppppppplStack_190;
      if (ppppppplStack_188 != (long *******)0x0) {
        ppppppplVar9 = ppppppplStack_188 + 1;
        do {
          cVar2 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(ppppppplVar9,0x10);
          if (bVar14) {
            *ppppppplVar9 = (long ******)((long)*ppppppplVar9 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        *(undefined1 *)(param_1 + 2) = 1;
        do {
          pppppplVar6 = *ppppppplVar9;
          cVar2 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(ppppppplVar9,0x10);
          if (bVar14) {
            *ppppppplVar9 = (long ******)((long)pppppplVar6 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (pppppplVar6 != (long ******)0x0) {
          return;
        }
        (*(code *)(*ppppppplStack_188)[2])(ppppppplStack_188);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar8);
        return;
      }
    }
    else {
      *(int *)((long)param_2 + 0x1c) = *(int *)((long)param_2 + 0x1c) + 1;
      ppppplVar13 = pppppplVar6[1];
      *param_1 = (long)ppppplVar12;
      param_1[1] = (long)ppppplVar13;
      if (ppppplVar13 != (long *****)0x0) {
        ppppplVar13 = ppppplVar13 + 1;
        do {
          cVar2 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(ppppplVar13,0x10);
          if (bVar14) {
            *ppppplVar13 = (long ****)((long)*ppppplVar13 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    *(undefined1 *)(param_1 + 2) = 1;
  }
  else {
LAB_10a307d40:
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



/* Entry: 10a307eb8; end: 10a309a73;  */

void FUN_10a307eb8(long *param_1,int *param_2,undefined **param_3,mach_header **param_4,
                  undefined8 *param_5,undefined4 *param_6,long param_7,undefined8 param_8,
                  byte param_9)

{
  ulong *puVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long **pplVar14;
  mach_header *pmVar15;
  mach_header **ppmVar16;
  undefined **ppuVar17;
  dword *pdVar18;
  mach_header *extraout_x8;
  undefined *puVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  undefined *puVar23;
  uint uVar24;
  undefined4 *puVar25;
  char *pcVar26;
  mach_header *pmVar27;
  long *plVar28;
  undefined8 *puVar29;
  uint uVar30;
  undefined **ppuVar31;
  long *plVar32;
  undefined **ppuVar33;
  char *pcVar34;
  int aiStack_868 [5];
  char cStack_851;
  int aiStack_850 [5];
  char cStack_839;
  long alStack_838 [2];
  char cStack_821;
  undefined8 uStack_820;
  mach_header *pmStack_818;
  mach_header *pmStack_810;
  undefined **ppuStack_808;
  mach_header *pmStack_800;
  undefined **ppuStack_7f8;
  undefined8 uStack_7f0;
  mach_header *pmStack_7e8;
  mach_header *pmStack_7e0;
  undefined **ppuStack_7d8;
  mach_header *pmStack_7d0;
  undefined **ppuStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined4 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined1 auStack_720 [408];
  undefined1 uStack_588;
  undefined1 uStack_587;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined1 auStack_550 [56];
  undefined1 auStack_518 [24];
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  long *plStack_4e8;
  long *plStack_4e0;
  undefined8 uStack_4d8;
  byte bStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined4 uStack_4a8;
  mach_header *pmStack_4a0;
  undefined **ppuStack_498;
  undefined *puStack_490;
  ulong uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  mach_header *pmStack_468;
  mach_header mStack_460;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  mach_header *pmStack_300;
  undefined **ppuStack_2f8;
  mach_header *pmStack_2f0;
  undefined **ppuStack_2e8;
  mach_header *pmStack_2e0;
  undefined **ppuStack_2d8;
  long lStack_2c8;
  long *plStack_2c0;
  char cStack_2b8;
  mach_header *pmStack_2b0;
  undefined **ppuStack_2a8;
  mach_header *pmStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  long lStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
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
  undefined1 uStack_1b0;
  undefined1 uStack_1af;
  undefined1 uStack_1ae;
  undefined5 uStack_1ad;
  int *piStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  mach_header *pmStack_188;
  mach_header *pmStack_180;
  undefined **ppuStack_178;
  undefined8 *puStack_170;
  long alStack_168 [2];
  undefined8 uStack_158;
  char cStack_151;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
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
  undefined8 uStack_90;
  int *piStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_820 = (undefined **)&UNK_10f64d7a4;
  pmStack_818 = (mach_header *)0x28;
  if (*param_3 == (undefined *)0x0) {
    FUN_10a0edfc4(&uStack_820);
    goto LAB_10a3096dc;
  }
  uStack_820 = (undefined **)&UNK_10f64d7a4;
  pmStack_818 = (mach_header *)0x28;
  if (param_7 == 0) {
    FUN_10a0edfc4(&uStack_820);
    goto LAB_10a3096dc;
  }
  uStack_820 = (undefined **)&UNK_10f64d7cd;
  pmStack_818 = (mach_header *)0x2b;
  if (*(char *)(param_7 + 0x40) == '\0') {
    FUN_10a0edfc4(&uStack_820);
    goto LAB_10a3096dc;
  }
  ppuStack_2a8 = (undefined **)0x0;
  pmStack_2b0 = (mach_header *)0x0;
  FUN_10a307798(&lStack_2c8,param_2,param_7 + 0x20,param_3,param_4,param_4);
  if (cStack_2b8 == '\x01') {
    if ((*(byte *)(lStack_2c8 + 0x14) & 1) == 0) {
      FUN_10a307244(&pmStack_2b0,lStack_2c8,plStack_2c0);
      goto LAB_10a30952c;
    }
    func_0x00010a30a100(param_8);
    *param_1 = 0;
    param_1[1] = 0;
LAB_10a309550:
    if ((cStack_2b8 == '\x01') && (plStack_2c0 != (long *)0x0)) {
      plVar32 = plStack_2c0 + 1;
      do {
        lVar22 = *plVar32;
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar32,0x10);
        if (bVar9) {
          *plVar32 = lVar22 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar22 == 0) {
        (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_2c0);
      }
    }
    ppuVar17 = ppuStack_2a8;
    if (ppuStack_2a8 != (undefined **)0x0) {
      ppuVar33 = ppuStack_2a8 + 1;
      do {
        puVar23 = *ppuVar33;
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(ppuVar33,0x10);
        if (bVar9) {
          *ppuVar33 = puVar23 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (puVar23 == (undefined *)0x0) {
        (**(code **)(*ppuStack_2a8 + 0x10))(ppuStack_2a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
    pmStack_810 = extraout_x8;
LAB_10a309680:
    pmStack_818 = (mach_header *)(param_7 + 0x48);
LAB_10a309684:
    (**(code **)(*(long *)*param_3 + 0xa0))(&pmStack_4a0,*param_3,&uStack_820);
    FUN_10a16609c(&pmStack_2e0,&pmStack_4a0);
    func_0x00010a0eb124(&pmStack_4a0);
  }
  else {
    puVar23 = *param_3;
    if (((param_9 >> 2 & 1) != 0) &&
       (*(int *)(puVar23 + 0x734) == 1 && *(char *)(param_7 + 0x60) == '\x01')) {
      FUN_10a305aec(param_2,param_7 + 0x98,param_7 + 0xb0);
    }
    ppuStack_2d8 = (undefined **)0x0;
    pmStack_2e0 = (mach_header *)0x0;
    bVar3 = *(byte *)(param_7 + 0x40);
    if (bVar3 < 2) {
      if (bVar3 == 1) {
        bVar3 = *(byte *)(param_7 + 0x60);
        if (bVar3 - 3 < 2) {
          pmStack_818 = *(mach_header **)(param_7 + 0x68);
          pmStack_810 = (mach_header *)(*(long *)(param_7 + 0x70) - (long)pmStack_818);
          uStack_820 = (undefined **)CONCAT44(uStack_820._4_4_,1);
          (**(code **)(*(long *)*param_3 + 0xa0))(&pmStack_4a0,*param_3,&uStack_820);
          ppuVar17 = ppuStack_2d8;
          ppuStack_2d8 = ppuStack_498;
          pmStack_2e0 = pmStack_4a0;
          pmStack_4a0 = (mach_header *)0x0;
          ppuStack_498 = (undefined **)0x0;
          if (ppuVar17 != (undefined **)0x0) {
            ppuVar33 = ppuVar17 + 1;
            do {
              puVar19 = *ppuVar33;
              cVar4 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(ppuVar33,0x10);
              if (bVar9) {
                *ppuVar33 = puVar19 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (puVar19 == (undefined *)0x0) {
              (**(code **)(*ppuVar17 + 0x10))(ppuVar17);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
            }
          }
          if (ppuStack_498 != (undefined **)0x0) {
            ppuVar17 = ppuStack_498 + 1;
            do {
              puVar19 = *ppuVar17;
              cVar4 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
              if (bVar9) {
                *ppuVar17 = puVar19 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
LAB_10a30821c:
            ppuVar17 = ppuStack_498;
            if (puVar19 == (undefined *)0x0) {
              (**(code **)(*ppuStack_498 + 0x10))(ppuStack_498);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
            }
          }
          goto LAB_10a308238;
        }
        if (bVar3 == 2) {
          pmStack_810 = (mach_header *)(long)*(char *)(param_7 + 0x97);
          if ((long)pmStack_810 < 0) {
            pmStack_818 = *(mach_header **)(param_7 + 0x80);
            pmStack_810 = *(mach_header **)(param_7 + 0x88);
          }
          else {
            pmStack_818 = (mach_header *)(param_7 + 0x80);
          }
          uStack_820 = (undefined **)((ulong)uStack_820._4_4_ << 0x20);
          (**(code **)(*(long *)*param_3 + 0xa0))(&pmStack_4a0,*param_3,&uStack_820);
          ppuVar17 = ppuStack_2d8;
          ppuStack_2d8 = ppuStack_498;
          pmStack_2e0 = pmStack_4a0;
          pmStack_4a0 = (mach_header *)0x0;
          ppuStack_498 = (undefined **)0x0;
          if (ppuVar17 != (undefined **)0x0) {
            ppuVar33 = ppuVar17 + 1;
            do {
              puVar19 = *ppuVar33;
              cVar4 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(ppuVar33,0x10);
              if (bVar9) {
                *ppuVar33 = puVar19 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (puVar19 == (undefined *)0x0) {
              (**(code **)(*ppuVar17 + 0x10))(ppuVar17);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
            }
          }
          if (ppuStack_498 != (undefined **)0x0) {
            ppuVar17 = ppuStack_498 + 1;
            do {
              puVar19 = *ppuVar17;
              cVar4 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
              if (bVar9) {
                *ppuVar17 = puVar19 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            goto LAB_10a30821c;
          }
          goto LAB_10a308238;
        }
      }
      else {
        if (bVar3 == 0) goto LAB_10a3096b4;
LAB_10a308238:
        bVar3 = *(byte *)(param_7 + 0x60);
      }
      pmVar15 = pmStack_2e0;
      ppuStack_2e8 = (undefined **)0x0;
      pmStack_2f0 = (mach_header *)0x0;
      ppuStack_2f8 = (undefined **)0x0;
      pmStack_300 = (mach_header *)0x0;
      if (bVar3 == 4) {
        if ((pmStack_2e0[2].magic & 1) == 0) goto LAB_10a3096dc;
        pcVar26 = *(char **)&pmStack_2e0[1].cpusubtype;
        pcVar2 = *(char **)&pmStack_2e0[1].ncmds;
        if (pcVar2 == pcVar26) {
          pmVar27 = (mach_header *)0x0;
          pcVar34 = "";
        }
        else {
          do {
            pmStack_818 = (mach_header *)(long)pcVar26[0x17];
            uStack_820 = (undefined **)pcVar26;
            if ((long)pmStack_818 < 0) {
              pmStack_818 = *(mach_header **)(pcVar26 + 8);
              uStack_820 = (undefined **)*(char **)pcVar26;
            }
            puVar29 = &uStack_820;
            FUN_10a159054(puVar29,&UNK_10f62a458,9);
            pmVar27 = pmStack_818;
            pcVar34 = (char *)uStack_820;
            if ((int)puVar29 != 0) goto LAB_10a308498;
            pcVar26 = pcVar26 + 0x38;
          } while (pcVar26 != pcVar2);
          pmVar27 = (mach_header *)0x0;
          pcVar34 = "";
        }
LAB_10a308498:
        ppuVar17 = *(undefined ***)&pmVar15[1].cpusubtype;
        ppuVar33 = *(undefined ***)&pmVar15[1].ncmds;
        if (ppuVar33 != ppuVar17) {
          do {
            pmStack_818 = (mach_header *)(long)*(char *)((long)ppuVar17 + 0x17);
            uStack_820 = ppuVar17;
            if ((long)pmStack_818 < 0) {
              pmStack_818 = (mach_header *)ppuVar17[1];
              uStack_820 = (undefined **)*ppuVar17;
            }
            puVar29 = &uStack_820;
            FUN_10a159054(puVar29,&UNK_10f62a468,9);
            ppuVar31 = uStack_820;
            if ((int)puVar29 != 0) goto LAB_10a308574;
            ppuVar17 = ppuVar17 + 7;
          } while (ppuVar17 != ppuVar33);
          goto LAB_10a308558;
        }
LAB_10a308560:
        pmStack_818 = (mach_header *)0x0;
        ppuVar31 = (undefined **)"";
LAB_10a308574:
        uStack_820 = (undefined **)0x0;
        ppuStack_808 = (undefined **)((ulong)ppuStack_808 & 0xffffffff00000000);
        pmStack_800 = (mach_header *)0x0;
        ppuStack_7f8 = (undefined **)0x0;
        uStack_7f0 = 0;
        pmStack_7e8 = pmStack_2e0;
        pmStack_7e0 = (mach_header *)((ulong)pmStack_7e0 & 0xffffffffffffff00);
        ppuStack_7c8 = (undefined **)((ulong)ppuStack_7c8 & 0xffffffffffffff00);
        pmStack_4a0 = &MACH_HEADER;
        uStack_488 = uStack_488 & 0xffffffff00000000;
        uStack_480 = 0;
        uStack_478 = 0;
        uStack_470 = 0;
        pmStack_468 = pmStack_2e0;
        mStack_460._0_8_ = mStack_460._0_8_ & 0xffffffffffffff00;
        mStack_460._24_8_ = mStack_460._24_8_ & 0xffffffffffffff00;
        puStack_490 = (undefined *)pmStack_818;
        pmStack_818 = (mach_header *)pcVar34;
        pmStack_810 = pmVar27;
        ppuStack_498 = ppuVar31;
        (**(code **)(*(long *)*param_3 + 0xa8))(&pmStack_180,*param_3,&uStack_820);
        ppuVar17 = ppuStack_178;
        pmVar15 = pmStack_180;
        pmStack_2f0 = pmStack_180;
        ppuStack_2e8 = ppuStack_178;
        (**(code **)(*(long *)*param_3 + 0xa8))(&pmStack_180,*param_3,&pmStack_4a0);
        ppuVar33 = ppuStack_178;
        pmVar27 = pmStack_180;
        pmStack_300 = pmStack_180;
        ppuStack_2f8 = ppuStack_178;
        if ((char)mStack_460.flags == '\x01') {
          pmStack_180 = &mStack_460;
          func_0x00010a0eab1c(&pmStack_180);
        }
        if ((char)ppuStack_7c8 == '\x01') {
          pmStack_4a0 = (mach_header *)&pmStack_7e0;
          func_0x00010a0eab1c(&pmStack_4a0);
        }
        bVar9 = true;
      }
      else {
        if (bVar3 != 1) {
          if (*(char *)(param_7 + 0x40) == '\x02') {
            if ((pmStack_2e0[2].magic & 1) == 0) goto LAB_10a3096dc;
            pcVar26 = *(char **)&pmStack_2e0[1].cpusubtype;
            pcVar2 = *(char **)&pmStack_2e0[1].ncmds;
            if (pcVar2 == pcVar26) {
              pmVar27 = (mach_header *)0x0;
              pcVar34 = "";
            }
            else {
              do {
                pmStack_818 = (mach_header *)(long)pcVar26[0x17];
                uStack_820 = (undefined **)pcVar26;
                if ((long)pmStack_818 < 0) {
                  pmStack_818 = *(mach_header **)(pcVar26 + 8);
                  uStack_820 = (undefined **)*(char **)pcVar26;
                }
                puVar29 = &uStack_820;
                FUN_10a159054(puVar29,&UNK_10f62a458,9);
                pmVar27 = pmStack_818;
                pcVar34 = (char *)uStack_820;
                if ((int)puVar29 != 0) goto LAB_10a308504;
                pcVar26 = pcVar26 + 0x38;
              } while (pcVar26 != pcVar2);
              pmVar27 = (mach_header *)0x0;
              pcVar34 = "";
            }
LAB_10a308504:
            ppuVar17 = *(undefined ***)&pmVar15[1].cpusubtype;
            ppuVar33 = *(undefined ***)&pmVar15[1].ncmds;
            if (ppuVar33 == ppuVar17) goto LAB_10a308560;
            do {
              pmStack_818 = (mach_header *)(long)*(char *)((long)ppuVar17 + 0x17);
              uStack_820 = ppuVar17;
              if ((long)pmStack_818 < 0) {
                pmStack_818 = (mach_header *)ppuVar17[1];
                uStack_820 = (undefined **)*ppuVar17;
              }
              puVar29 = &uStack_820;
              FUN_10a159054(puVar29,&UNK_10f62a468,9);
              ppuVar31 = uStack_820;
              if ((int)puVar29 != 0) goto LAB_10a308574;
              ppuVar17 = ppuVar17 + 7;
            } while (ppuVar17 != ppuVar33);
LAB_10a308558:
            pmStack_818 = (mach_header *)0x0;
            ppuVar31 = (undefined **)"";
          }
          else {
            pcVar34 = "main_vert";
            pmStack_818 = (mach_header *)0x9;
            pmVar27 = (mach_header *)0x9;
            ppuVar31 = (undefined **)&UNK_10f62a468;
          }
          goto LAB_10a308574;
        }
        iVar10 = *(int *)(puVar23 + 0x734);
        if ((iVar10 != 1) && (iVar10 != 6)) {
          FUN_10a196e14(&UNK_10f64d7f9);
          goto LAB_10a3096dc;
        }
        if (*(char *)(param_7 + 0x141) == '\x01') {
          lVar22 = *(long *)(param_7 + 200);
          if (lVar22 == *(long *)(param_7 + 0xd0)) {
LAB_10a3083d4:
            bVar9 = false;
          }
          else {
            do {
              lVar20 = lVar22 + 0x98;
              bVar9 = *(long *)(lVar22 + 8) != *(long *)(lVar22 + 0x10);
              lVar22 = lVar20;
            } while (!bVar9 && lVar20 != *(long *)(param_7 + 0xd0));
          }
        }
        else {
          pmVar15 = param_4[1];
          if (pmVar15 == param_4[2]) goto LAB_10a3083d4;
          do {
            pmVar27 = pmVar15 + 4;
            lVar22._0_4_ = pmVar15->cpusubtype;
            lVar22._4_4_ = pmVar15->filetype;
            lVar20._0_4_ = pmVar15->ncmds;
            lVar20._4_4_ = pmVar15->sizeofcmds;
            bVar9 = lVar22 != lVar20;
            pmVar15 = pmVar27;
          } while (!bVar9 && pmVar27 != param_4[2]);
        }
        pmStack_180 = (mach_header *)*param_3;
        pmStack_818 = (mach_header *)(long)*(char *)(param_7 + 0xaf);
        if ((long)pmStack_818 < 0) {
          uStack_820 = *(undefined ***)(param_7 + 0x98);
          pmStack_818 = *(mach_header **)(param_7 + 0xa0);
        }
        else {
          uStack_820 = (undefined **)(param_7 + 0x98);
        }
        pmStack_2a0 = (mach_header *)((ulong)pmStack_2a0 & 0xffffffff00000000);
        ppuStack_1a0 = (undefined **)(CONCAT71(ppuStack_1a0._1_7_,bVar9) ^ 1);
        func_0x00010924e19c(&pmStack_4a0,pmStack_180,&pmStack_180,&pmStack_2a0,&uStack_820,
                            &ppuStack_1a0);
        ppuVar17 = ppuStack_498;
        pmVar15 = pmStack_4a0;
        pmStack_2f0 = pmStack_4a0;
        ppuStack_2e8 = ppuStack_498;
        pmStack_180 = (mach_header *)*param_3;
        pmStack_818 = (mach_header *)(long)*(char *)(param_7 + 199);
        if ((long)pmStack_818 < 0) {
          uStack_820 = *(undefined ***)(param_7 + 0xb0);
          pmStack_818 = *(mach_header **)(param_7 + 0xb8);
        }
        else {
          uStack_820 = (undefined **)(param_7 + 0xb0);
        }
        pmStack_2a0 = (mach_header *)CONCAT44(pmStack_2a0._4_4_,1);
        ppuStack_1a0 = (undefined **)(CONCAT71(ppuStack_1a0._1_7_,bVar9) ^ 1);
        func_0x00010924e19c(&pmStack_4a0,pmStack_180,&pmStack_180,&pmStack_2a0,&uStack_820,
                            &ppuStack_1a0);
        pmStack_300 = pmStack_4a0;
        ppuStack_2f8 = ppuStack_498;
        pmVar27 = pmStack_4a0;
        ppuVar33 = ppuStack_498;
      }
      cVar4 = *(char *)(param_7 + 0x141);
      if (cVar4 == '\x01') {
        FUN_10a0e6d5c(&pmStack_4a0,param_7 + 200);
      }
      else {
        pmStack_4a0 = (mach_header *)((ulong)pmStack_4a0 & 0xffffffff00000000);
        uStack_390 = 0;
        uStack_398 = 0;
        uStack_380 = 0;
        uStack_388 = 0;
        uStack_370 = 0;
        uStack_378 = 0;
        puStack_490 = (undefined *)0x0;
        ppuStack_498 = (undefined **)0x0;
        uStack_480 = 0;
        uStack_488 = 0;
        uStack_470 = 0;
        uStack_478 = 0;
        mStack_460.magic = 0;
        mStack_460.cputype = 0;
        pmStack_468 = (mach_header *)0x0;
        mStack_460.ncmds = 0;
        mStack_460.sizeofcmds = 0;
        mStack_460.cpusubtype = 0;
        mStack_460.filetype = 0;
        uStack_440 = 0;
        mStack_460.flags = 0;
        mStack_460.reserved = 0;
        uStack_430 = 0;
        uStack_438 = 0;
        uStack_420 = 0;
        uStack_428 = 0;
        uStack_410 = 0;
        uStack_418 = 0;
        uStack_400 = 0;
        uStack_408 = 0;
        uStack_3f0 = 0;
        uStack_3f8 = 0;
        uStack_3e0 = 0;
        uStack_3e8 = 0;
        uStack_3d0 = 0;
        uStack_3d8 = 0;
        uStack_3c0 = 0;
        uStack_3c8 = 0;
        uStack_3b0 = 0;
        uStack_3b8 = 0;
        lVar22 = 0x100;
        uStack_3a0 = 0;
        uStack_3a8 = 0;
        pdVar18 = &mStack_460.ncmds;
        do {
          *(undefined8 *)(pdVar18 + -2) = 0;
          ((mach_header *)(pdVar18 + -4))->magic = 0;
          ((mach_header *)(pdVar18 + -4))->cputype = 0;
          *(undefined8 *)(pdVar18 + -6) = 0;
          *(undefined8 *)pdVar18 = 0xffffffff;
          lVar22 = lVar22 + -0x20;
          pdVar18 = pdVar18 + 8;
        } while (lVar22 != 0);
        uStack_320 = 0;
        uStack_328 = 0;
        uStack_310 = 0;
        uStack_318 = 0;
        uStack_340 = 0;
        uStack_348 = 0;
        uStack_330 = 0;
        uStack_338 = 0;
        uStack_360 = 0;
        uStack_368 = 0;
        uStack_350 = 0;
        uStack_358 = 0;
      }
      pmStack_818 = (mach_header *)param_3[1];
      uStack_820 = (undefined **)*param_3;
      if (param_3[1] != (undefined *)0x0) {
        plVar32 = (long *)(param_3[1] + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar32,0x10);
          if (bVar6) {
            *plVar32 = *plVar32 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      pmStack_810 = pmStack_2e0;
      ppuStack_808 = ppuStack_2d8;
      if (ppuStack_2d8 == (undefined **)0x0) {
        ppuStack_7f8 = (undefined **)0x0;
      }
      else {
        ppuVar31 = ppuStack_2d8 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar31,0x10);
          if (bVar6) {
            *ppuVar31 = *ppuVar31 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        ppuStack_7f8 = ppuStack_2d8;
        if (ppuStack_2d8 != (undefined **)0x0) {
          ppuVar31 = ppuStack_2d8 + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(ppuVar31,0x10);
            if (bVar6) {
              *ppuVar31 = *ppuVar31 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
      }
      pmStack_800 = pmStack_2e0;
      uStack_7f0 = 0;
      pmStack_7e8 = (mach_header *)0x0;
      if (ppuVar17 != (undefined **)0x0) {
        ppuVar31 = ppuVar17 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar31,0x10);
          if (bVar6) {
            *ppuVar31 = *ppuVar31 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      if (ppuVar33 != (undefined **)0x0) {
        ppuVar31 = ppuVar33 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar31,0x10);
          if (bVar6) {
            *ppuVar31 = *ppuVar31 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      uStack_7b8 = param_5[1];
      uStack_7c0 = *param_5;
      if (param_5[1] != 0) {
        plVar32 = (long *)(param_5[1] + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar32,0x10);
          if (bVar6) {
            *plVar32 = *plVar32 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      uStack_7b0 = *param_6;
      uStack_7a0 = 0;
      uStack_7a8 = 0;
      uStack_790 = 0;
      uStack_798 = 0;
      uStack_788 = 0;
      pmStack_7e0 = pmVar15;
      ppuStack_7d8 = ppuVar17;
      pmStack_7d0 = pmVar27;
      ppuStack_7c8 = ppuVar33;
      if (*(long *)(param_6 + 10) != 0) {
        puVar25 = param_6 + 2;
        lVar22 = *(long *)(param_6 + 10) << 2;
        do {
          func_0x00010928bcfc(&uStack_7a8,puVar25);
          puVar25 = puVar25 + 1;
          lVar22 = lVar22 + -4;
        } while (lVar22 != 0);
      }
      uStack_780 = *(undefined8 *)(param_6 + 0xc);
      uStack_770 = 0;
      uStack_778 = 0;
      uStack_760 = 0;
      uStack_768 = 0;
      uStack_758 = 0;
      if (*(long *)(param_6 + 0x16) != 0) {
        puVar25 = param_6 + 0xe;
        lVar22 = *(long *)(param_6 + 0x16) << 2;
        do {
          func_0x000109261ecc(&uStack_778,puVar25);
          puVar25 = puVar25 + 1;
          lVar22 = lVar22 + -4;
        } while (lVar22 != 0);
      }
      uStack_750 = *(undefined8 *)(param_6 + 0x18);
      uStack_740 = 0;
      uStack_748 = 0;
      uStack_730 = 0;
      uStack_738 = 0;
      uStack_728 = 0;
      if (*(long *)(param_6 + 0x22) != 0) {
        puVar25 = param_6 + 0x1a;
        lVar22 = *(long *)(param_6 + 0x22) << 2;
        do {
          func_0x000109261ecc(&uStack_748,puVar25);
          puVar25 = puVar25 + 1;
          lVar22 = lVar22 + -4;
        } while (lVar22 != 0);
      }
      ppmVar16 = &pmStack_4a0;
      if (cVar4 == '\0') {
        ppmVar16 = param_4;
      }
      FUN_10a0e908c(auStack_720,ppmVar16);
      uStack_588 = *(undefined1 *)(param_7 + 0x38);
      uStack_587 = 0;
      uStack_578 = 0;
      uStack_580 = 0;
      uStack_568 = 0;
      uStack_570 = 0;
      uStack_558 = 0;
      uStack_560 = 0;
      func_0x000107c2b054(&pmStack_2a0,"");
      func_0x000107c2b054(&ppuStack_1a0,"");
      FUN_10a107e2c(auStack_550,&pmStack_2a0,&ppuStack_1a0,0);
      FUN_10a309df0(alStack_838,param_7 + 0x20);
      FUN_10a166d50(auStack_518,alStack_838);
      puVar29 = &uStack_500;
      uStack_4f0 = 0;
      uStack_4f8 = 0;
      uStack_500 = 0;
      FUN_10a309df0(aiStack_850,param_7 + 8);
      FUN_10a166d50(&pmStack_180,aiStack_850);
      FUN_10a309df0(aiStack_868,param_7 + 0x20);
      FUN_10a166d50(alStack_168,aiStack_868);
      pplVar14 = &plStack_4e8;
      plStack_4e8 = (long *)0x0;
      plStack_4e0 = (long *)0x0;
      uStack_4d8 = 0;
      FUN_10a102f04(pplVar14,&pmStack_180,&uStack_150,2);
      lVar22 = 0;
      bStack_4d0 = 0;
      uStack_4c0 = 0;
      uStack_4c8 = 0;
      uStack_4b0 = 0;
      uStack_4b8 = 0;
      uStack_4a8 = 0x3f800000;
      do {
        if ((&cStack_151)[lVar22] < '\0') {
          pplVar14 = *(long ***)((long)alStack_168 + lVar22);
          __ZdlPv();
        }
        iVar10 = (int)pplVar14;
        lVar22 = lVar22 + -0x18;
      } while (lVar22 != -0x30);
      if (cStack_851 < '\0') {
        iVar10 = aiStack_868[0];
        __ZdlPv();
      }
      if (cStack_839 < '\0') {
        iVar10 = aiStack_850[0];
        __ZdlPv();
      }
      if (cStack_821 < '\0') {
        lVar22 = alStack_838[0];
        __ZdlPv();
        iVar10 = (int)lVar22;
      }
      if ((long)ppuStack_190 < 0) {
        ppuVar17 = ppuStack_1a0;
        __ZdlPv();
        iVar10 = (int)ppuVar17;
      }
      if ((long)uStack_290 < 0) {
        pmVar15 = pmStack_2a0;
        __ZdlPv();
        iVar10 = (int)pmVar15;
      }
      if ((*(int *)(*param_3 + 0x734) == 8 || *(int *)(*param_3 + 0x734) == 3) &&
         (*(char *)(param_7 + 0x39) == '\x01')) {
        FUN_10a309df0(&pmStack_2a0,param_7 + 8);
        FUN_10a166d50(&pmStack_180,&pmStack_2a0);
        FUN_10a059fa0(puVar29,&pmStack_180);
        iVar10 = (int)puVar29;
        if ((long)puStack_170 < 0) {
          pmVar15 = pmStack_180;
          __ZdlPv();
          iVar10 = (int)pmVar15;
        }
        if ((long)uStack_290 < 0) {
          pmVar15 = pmStack_2a0;
          __ZdlPv();
          iVar10 = (int)pmVar15;
        }
      }
      if (bVar9) {
        bStack_4d0 = bStack_4d0 | 1;
      }
      FUN_10a08fd8c();
      if ((iVar10 == 0) || (cVar4 == '\0')) {
        if (cVar4 != '\0') goto LAB_10a308ac4;
      }
      else {
        bStack_4d0 = bStack_4d0 | 2;
LAB_10a308ac4:
        lVar22 = *(long *)(param_7 + 0x128);
        lVar20 = *(long *)(param_7 + 0x130);
        if (lVar22 != lVar20) {
          param_3 = (undefined **)&UNK_10dd5b8f9;
          do {
            pmStack_180 = (mach_header *)(lVar22 + 0x18);
            puVar29 = &uStack_4c8;
            FUN_109cf993c(&uStack_4c8,pmStack_180,&UNK_10dd5b8f9,&pmStack_180,&pmStack_2a0);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (puVar29 + 5,lVar22);
            lVar22 = lVar22 + 0x30;
          } while (lVar22 != lVar20);
        }
      }
      ppmVar16 = &pmStack_2a0;
      FUN_10a195228(&pmStack_180,ppmVar16,&uStack_820);
      ppuVar33 = ppuStack_178;
      pmStack_2b0 = pmStack_180;
      ppuVar17 = ppuStack_2a8;
      uVar11 = (uint)ppmVar16;
      pmStack_180 = (mach_header *)0x0;
      ppuStack_178 = (undefined **)0x0;
      ppuStack_2a8 = ppuVar33;
      if (ppuVar17 != (undefined **)0x0) {
        ppuVar33 = ppuVar17 + 1;
        do {
          puVar23 = *ppuVar33;
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(ppuVar33,0x10);
          if (bVar9) {
            *ppuVar33 = puVar23 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (puVar23 == (undefined *)0x0) {
          (**(code **)(*ppuVar17 + 0x10))(ppuVar17);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          uVar11 = (uint)ppuVar17;
        }
      }
      ppuVar17 = ppuStack_178;
      if (ppuStack_178 != (undefined **)0x0) {
        ppuVar33 = ppuStack_178 + 1;
        do {
          puVar23 = *ppuVar33;
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(ppuVar33,0x10);
          if (bVar9) {
            *ppuVar33 = puVar23 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (puVar23 == (undefined *)0x0) {
          (**(code **)(*ppuStack_178 + 0x10))(ppuStack_178);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          uVar11 = (uint)ppuVar17;
        }
      }
      FUN_10a08fd8c();
      if (((uVar11 != 0) && (*(char *)(param_7 + 0x141) == '\x01')) &&
         ((*(byte *)(param_7 + 0x39) & 1) == 0)) {
        lVar22 = *(long *)(param_7 + 200);
        if (lVar22 == *(long *)(param_7 + 0xd0)) {
          if ((*(long *)(param_7 + 0xe0) != *(long *)(param_7 + 0xe8)) ||
             (*(long *)(param_7 + 0xf8) != *(long *)(param_7 + 0x100))) goto LAB_10a308c10;
          func_0x00010ae02f70(0,((long)plStack_4e0 - (long)plStack_4e8 >> 3) * -0x5555555555555555);
          param_3 = &PTR_PTR_1133012b0;
          ppuVar17 = param_3;
          FUN_10ae079a0();
          func_0x00010ae02f80();
          FUN_10ae07cd4(ppuVar17,&PTR_PTR_1133012b0);
        }
        else {
          if (*param_2 == 0) {
LAB_10a308c10:
            param_3 = (undefined **)0x1;
          }
          else {
            do {
              lVar20 = lVar22 + 0x98;
              bVar9 = *(long *)(lVar22 + 8) == *(long *)(lVar22 + 0x10);
              param_3 = (undefined **)(ulong)bVar9;
              lVar22 = lVar20;
            } while (bVar9 && lVar20 != *(long *)(param_7 + 0xd0));
          }
          cVar4 = *(char *)(param_7 + 0x60);
          FUN_10a08fd8c();
          plVar32 = plStack_4e0;
          if (plStack_4e8 != plStack_4e0) {
            uVar11 = uVar11 & 0x20;
            uVar30 = 1;
            plVar28 = plStack_4e8;
            do {
              if (*(char *)((long)plVar28 + 0x17) < '\0') {
                func_0x000107c3192c(&pmStack_2a0,*plVar28,plVar28[1]);
              }
              else {
                uStack_298 = plVar28[1];
                pmStack_2a0 = (mach_header *)*plVar28;
                uStack_290 = plVar28[2];
              }
              uVar21 = uStack_298;
              pmVar15 = pmStack_2a0;
              if (-1 < (long)uStack_290) {
                uVar21 = uStack_290 >> 0x38;
                pmVar15 = (mach_header *)&pmStack_2a0;
              }
              FUN_10a189258(&pmStack_180,pmVar15,uVar21,&UNK_10f64e7cd,5);
              uVar12 = 0;
              FUN_10ad01a04();
              if ((long)puStack_170 < 0) {
                __ZdlPv(pmStack_180);
              }
              uVar21 = uStack_298;
              pmVar15 = pmStack_2a0;
              if (-1 < (long)uStack_290) {
                uVar21 = uStack_290 >> 0x38;
                pmVar15 = (mach_header *)&pmStack_2a0;
              }
              FUN_10a189258(&pmStack_180,pmVar15,uVar21,&UNK_10f64e7d3,5);
              uVar13 = 0;
              FUN_10ad01a04();
              if ((long)puStack_170 < 0) {
                __ZdlPv(pmStack_180);
                if (uVar11 == 0 && cVar4 != '\x04') goto LAB_10a308d64;
LAB_10a308d1c:
                uVar21 = uStack_298;
                pmVar15 = pmStack_2a0;
                if (-1 < (long)uStack_290) {
                  uVar21 = uStack_290 >> 0x38;
                  pmVar15 = (mach_header *)&pmStack_2a0;
                }
                FUN_10a189258(&pmStack_180,pmVar15,uVar21,&UNK_10f64e7d9,4);
                uVar24 = 0;
                FUN_10ad01a04();
LAB_10a308df4:
                if ((long)puStack_170 < 0) {
                  __ZdlPv(pmStack_180);
                }
              }
              else {
                if (uVar11 != 0 || cVar4 == '\x04') goto LAB_10a308d1c;
LAB_10a308d64:
                uVar21 = uStack_298;
                pmVar15 = pmStack_2a0;
                if (-1 < (long)uStack_290) {
                  uVar21 = uStack_290 >> 0x38;
                  pmVar15 = (mach_header *)&pmStack_2a0;
                }
                FUN_10a189258(&pmStack_180,pmVar15,uVar21,&UNK_10f64e7de,3);
                uVar24 = (uint)&pmStack_180;
                FUN_10ad01a04();
                if (-1 < (long)puStack_170) {
                  if (uVar24 == 0) goto LAB_10a308e08;
LAB_10a308dbc:
                  uVar21 = uStack_298;
                  pmVar15 = pmStack_2a0;
                  if (-1 < (long)uStack_290) {
                    uVar21 = uStack_290 >> 0x38;
                    pmVar15 = (mach_header *)&pmStack_2a0;
                  }
                  FUN_10a189258(&pmStack_180,pmVar15,uVar21,&UNK_10f64e7e2,3);
                  uVar24 = 0;
                  FUN_10ad01a04();
                  goto LAB_10a308df4;
                }
                __ZdlPv(pmStack_180);
                if (uVar24 != 0) goto LAB_10a308dbc;
              }
LAB_10a308e08:
              if ((long)uStack_290 < 0) {
                __ZdlPv(pmStack_2a0);
              }
              uVar30 = uVar30 & uVar24 & uVar12 & uVar13;
              plVar28 = plVar28 + 3;
            } while (plVar28 != plVar32);
            if (uVar30 == 0) {
              FUN_10a1894d8(&pmStack_2a0,(long *)(param_7 + 200));
              if (*(char *)(param_7 + 0xaf) < '\0') {
                func_0x000107c3192c(&uStack_228,*(undefined8 *)(param_7 + 0x98),
                                    *(undefined8 *)(param_7 + 0xa0));
              }
              else {
                uStack_220 = *(undefined8 *)(param_7 + 0xa0);
                uStack_228 = *(undefined8 *)(param_7 + 0x98);
                uStack_218 = *(undefined8 *)(param_7 + 0xa8);
              }
              if (*(char *)(param_7 + 199) < '\0') {
                func_0x000107c3192c(&uStack_210,*(undefined8 *)(param_7 + 0xb0),
                                    *(undefined8 *)(param_7 + 0xb8));
              }
              else {
                uStack_208 = *(undefined8 *)(param_7 + 0xb8);
                uStack_210 = *(undefined8 *)(param_7 + 0xb0);
                uStack_200 = *(undefined8 *)(param_7 + 0xc0);
              }
              if (*(char *)(param_7 + 0x97) < '\0') {
                func_0x000107c3192c(&uStack_1f8,*(undefined8 *)(param_7 + 0x80),
                                    *(undefined8 *)(param_7 + 0x88));
              }
              else {
                uStack_1f0 = *(undefined8 *)(param_7 + 0x88);
                uStack_1f8 = *(undefined8 *)(param_7 + 0x80);
                uStack_1e8 = *(undefined8 *)(param_7 + 0x90);
              }
              uStack_1d8 = 0;
              uStack_1e0 = 0;
              uStack_1d0 = 0;
              FUN_10a0469c8(&uStack_1e0,*(long *)(param_7 + 0x68),*(long *)(param_7 + 0x70),
                            *(long *)(param_7 + 0x70) - *(long *)(param_7 + 0x68));
              uStack_1c0 = 0;
              uStack_1c8 = 0;
              uStack_1b8 = 0;
              puVar29 = &uStack_1c8;
              FUN_10a0cf0cc();
              uStack_1b0 = SUB81(param_3,0);
              uStack_1ae = (undefined1)(uVar11 >> 5);
              uStack_1af = cVar4 == '\x04';
              piStack_1a8 = param_2;
              FUN_109d1a80c();
              uVar7 = uStack_200;
              puVar29 = (undefined8 *)puVar29[9];
              plVar32 = (long *)puVar29[2];
              ppuStack_190 = (undefined **)0x0;
              ppuStack_198 = (undefined **)0x0;
              if (plVar32 == (long *)0x0) {
                puStack_170 = (undefined8 *)uStack_290;
                uStack_158 = uStack_278;
                uStack_140 = uStack_260;
                uStack_128 = uStack_248;
                uStack_110 = uStack_230;
                uStack_f8 = uStack_218;
                ppuStack_178 = (undefined **)uStack_298;
                pmStack_180 = pmStack_2a0;
                pmStack_2a0 = (mach_header *)0x0;
                uStack_298 = 0;
                alStack_168[1] = uStack_280;
                alStack_168[0] = lStack_288;
                uStack_290 = 0;
                lStack_288 = 0;
                uStack_280 = 0;
                uStack_278 = 0;
                uStack_148 = uStack_268;
                uStack_150 = uStack_270;
                uStack_268 = 0;
                uStack_270 = 0;
                uStack_130 = uStack_250;
                uStack_138 = uStack_258;
                uStack_260 = 0;
                uStack_258 = 0;
                uStack_250 = 0;
                uStack_248 = 0;
                uStack_118 = uStack_238;
                uStack_120 = uStack_240;
                uStack_238 = 0;
                uStack_240 = 0;
                uStack_230 = 0;
                uStack_100 = uStack_220;
                uStack_108 = uStack_228;
                uStack_228 = 0;
                uStack_220 = 0;
                uStack_218 = 0;
                uStack_e8 = uStack_208;
                uStack_f0 = uStack_210;
                uStack_210 = 0;
                uStack_208 = 0;
                uStack_200 = 0;
                uStack_e0 = uVar7;
                uStack_c8 = uStack_1e8;
                uStack_d0 = uStack_1f0;
                uStack_d8 = uStack_1f8;
                uStack_1f8 = 0;
                uStack_1f0 = 0;
                uStack_1e8 = 0;
                uStack_b8 = uStack_1d8;
                uStack_c0 = uStack_1e0;
                uStack_1e0 = 0;
                uStack_1d8 = 0;
                uStack_a0 = uStack_1c0;
                uStack_a8 = uStack_1c8;
                uStack_b0 = uStack_1d0;
                uStack_98 = uStack_1b8;
                uStack_1d0 = 0;
                uStack_1c8 = 0;
                uStack_1c0 = 0;
                uStack_1b8 = 0;
                uStack_90 = CONCAT53(uStack_1ad,CONCAT12(uStack_1ae,CONCAT11(uStack_1af,uStack_1b0))
                                    );
                piStack_88 = piStack_1a8;
                ppuVar17 = (undefined **)0x1b8;
                __Znwm();
                ppuVar17[2] = (undefined *)0x0;
                ppuVar17[1] = (undefined *)0x200000006;
                *(undefined2 *)(ppuVar17 + 3) = 4;
                ppuVar17[5] = (undefined *)0x0;
                ppuVar17[4] = (undefined *)0x0;
                ppuVar17[7] = (undefined *)0x0;
                ppuVar17[6] = (undefined *)0x0;
                ppuVar17[9] = (undefined *)0x0;
                ppuVar17[8] = (undefined *)0x0;
                ppuVar17[0xb] = (undefined *)0x0;
                ppuVar17[10] = (undefined *)0x0;
                ppuVar17[0xd] = (undefined *)0x0;
                ppuVar17[0xc] = (undefined *)0x0;
                ppuVar17[0xf] = (undefined *)0x0;
                ppuVar17[0xe] = (undefined *)0x0;
                ppuVar17[0x10] = (undefined *)0x0;
                ppuVar17[0x11] = (undefined *)(ppuVar17 + 3);
                ppuVar17[0x12] = (undefined *)0x0;
                *(undefined2 *)(ppuVar17 + 0x13) = 0;
                *ppuVar17 = (undefined *)&PTR_FUN_110bc3d50;
                FUN_10a31e664(ppuVar17 + 0x14,&pmStack_180);
                ppuVar17[0x36] = (undefined *)0x0;
                if (ppuStack_198 != (undefined **)0x0) {
                  puVar1 = (ulong *)(ppuStack_198 + 1);
                  do {
                    uVar21 = *puVar1;
                    cVar4 = '\x01';
                    bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar9) {
                      *puVar1 = uVar21 - 4;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if ((uVar21 & 0x1fffffffc) == 4) {
                    do {
                      uVar21 = *puVar1;
                      cVar4 = '\x01';
                      bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                      if (bVar9) {
                        *puVar1 = uVar21 - 1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                    if (uVar21 - 1 == 0) {
                      (**(code **)((long)*ppuStack_198 + 8))();
                    }
                  }
                }
                ppuStack_198 = ppuVar17;
                if (ppuStack_190 != (undefined **)0x0) {
                  func_0x0001092b4274(&ppuStack_190);
                }
                ppuStack_1a0 = ppuVar17 + 0x14;
                ppuStack_190 = ppuVar17;
                func_0x00010a30a03c(&pmStack_180);
                pmStack_188 = (mach_header *)FUN_10a31dd8c;
              }
              else {
                alStack_838[0] = 0;
                (**(code **)(*plVar32 + 0x28))(plVar32,0,alStack_838);
                uVar7 = uStack_200;
                if (alStack_838[0] != 0) {
                  func_0x0001092af97c(alStack_838);
                  goto LAB_10a3096dc;
                }
                puStack_170 = (undefined8 *)uStack_290;
                uStack_158 = uStack_278;
                uStack_140 = uStack_260;
                uStack_128 = uStack_248;
                uStack_110 = uStack_230;
                uStack_f8 = uStack_218;
                ppuStack_178 = (undefined **)uStack_298;
                pmStack_180 = pmStack_2a0;
                pmStack_2a0 = (mach_header *)0x0;
                uStack_298 = 0;
                alStack_168[1] = uStack_280;
                alStack_168[0] = lStack_288;
                uStack_290 = 0;
                lStack_288 = 0;
                uStack_280 = 0;
                uStack_278 = 0;
                uStack_148 = uStack_268;
                uStack_150 = uStack_270;
                uStack_268 = 0;
                uStack_270 = 0;
                uStack_130 = uStack_250;
                uStack_138 = uStack_258;
                uStack_260 = 0;
                uStack_258 = 0;
                uStack_250 = 0;
                uStack_248 = 0;
                uStack_118 = uStack_238;
                uStack_120 = uStack_240;
                uStack_238 = 0;
                uStack_240 = 0;
                uStack_230 = 0;
                uStack_100 = uStack_220;
                uStack_108 = uStack_228;
                uStack_228 = 0;
                uStack_220 = 0;
                uStack_218 = 0;
                uStack_e8 = uStack_208;
                uStack_f0 = uStack_210;
                uStack_210 = 0;
                uStack_208 = 0;
                uStack_200 = 0;
                uStack_e0 = uVar7;
                uStack_c8 = uStack_1e8;
                uStack_d0 = uStack_1f0;
                uStack_d8 = uStack_1f8;
                uStack_1f8 = 0;
                uStack_1f0 = 0;
                uStack_1e8 = 0;
                uStack_b8 = uStack_1d8;
                uStack_c0 = uStack_1e0;
                uStack_1e0 = 0;
                uStack_1d8 = 0;
                uStack_a0 = uStack_1c0;
                uStack_a8 = uStack_1c8;
                uStack_b0 = uStack_1d0;
                uStack_98 = uStack_1b8;
                uStack_1d0 = 0;
                uStack_1c8 = 0;
                uStack_1c0 = 0;
                uStack_1b8 = 0;
                uStack_90 = CONCAT53(uStack_1ad,CONCAT12(uStack_1ae,CONCAT11(uStack_1af,uStack_1b0))
                                    );
                piStack_88 = piStack_1a8;
                ppuVar17 = (undefined **)0x1c0;
                __Znwm();
                ppuVar17[2] = (undefined *)0x0;
                ppuVar17[1] = (undefined *)0x200000006;
                *(undefined2 *)(ppuVar17 + 3) = 4;
                ppuVar17[5] = (undefined *)0x0;
                ppuVar17[4] = (undefined *)0x0;
                ppuVar17[7] = (undefined *)0x0;
                ppuVar17[6] = (undefined *)0x0;
                ppuVar17[9] = (undefined *)0x0;
                ppuVar17[8] = (undefined *)0x0;
                ppuVar17[0xb] = (undefined *)0x0;
                ppuVar17[10] = (undefined *)0x0;
                ppuVar17[0xd] = (undefined *)0x0;
                ppuVar17[0xc] = (undefined *)0x0;
                ppuVar17[0xf] = (undefined *)0x0;
                ppuVar17[0xe] = (undefined *)0x0;
                ppuVar17[0x10] = (undefined *)0x0;
                ppuVar17[0x11] = (undefined *)(ppuVar17 + 3);
                ppuVar17[0x12] = (undefined *)0x0;
                *(undefined2 *)(ppuVar17 + 0x13) = 0;
                *ppuVar17 = (undefined *)&PTR_FUN_110bc3d18;
                FUN_10a31e664(ppuVar17 + 0x14,&pmStack_180);
                ppuVar17[0x36] = (undefined *)0x0;
                ppuVar17[0x37] = (undefined *)plVar32;
                if (ppuStack_198 != (undefined **)0x0) {
                  puVar1 = (ulong *)(ppuStack_198 + 1);
                  do {
                    uVar21 = *puVar1;
                    cVar4 = '\x01';
                    bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar9) {
                      *puVar1 = uVar21 - 4;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if ((uVar21 & 0x1fffffffc) == 4) {
                    do {
                      uVar21 = *puVar1;
                      cVar4 = '\x01';
                      bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                      if (bVar9) {
                        *puVar1 = uVar21 - 1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                    if (uVar21 - 1 == 0) {
                      (**(code **)((long)*ppuStack_198 + 8))();
                    }
                  }
                }
                ppuStack_198 = ppuVar17;
                if (ppuStack_190 != (undefined **)0x0) {
                  func_0x0001092b4274(&ppuStack_190);
                }
                ppuStack_1a0 = ppuVar17 + 0x14;
                ppuStack_190 = ppuVar17;
                func_0x00010a30a03c(&pmStack_180);
                pmStack_188 = (mach_header *)FUN_10a31dd5c;
                __ZNSt13exception_ptrD1Ev(alStack_838);
              }
              ppuVar17 = ppuStack_1a0;
              if (ppuStack_1a0[0x22] != (undefined *)0x0) {
                func_0x0001092b4274(ppuStack_1a0 + 0x22);
              }
              ppuVar17[0x22] = (undefined *)ppuStack_190;
              ppuStack_190 = (undefined **)0x0;
              pmStack_180 = pmStack_188;
              ppuStack_178 = ppuStack_1a0;
              puStack_170 = puVar29;
              (**(code **)*puVar29)(puVar29,&pmStack_180);
              param_3 = ppuStack_198;
              ppuStack_198 = (undefined **)0x0;
              if ((ppuStack_190 != (undefined **)0x0) &&
                 (func_0x0001092b4274(&ppuStack_190), ppuStack_198 != (undefined **)0x0)) {
                puVar1 = (ulong *)(ppuStack_198 + 1);
                do {
                  uVar21 = *puVar1;
                  cVar4 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar9) {
                    *puVar1 = uVar21 - 4;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if ((uVar21 & 0x1fffffffc) == 4) {
                  do {
                    uVar21 = *puVar1;
                    cVar4 = '\x01';
                    bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar9) {
                      *puVar1 = uVar21 - 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (uVar21 - 1 == 0) {
                    (**(code **)((long)*ppuStack_198 + 8))();
                  }
                }
              }
              if (param_3 != (undefined **)0x0) {
                ppuVar17 = param_3 + 1;
                do {
                  puVar23 = *ppuVar17;
                  cVar4 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
                  if (bVar9) {
                    *ppuVar17 = puVar23 + -4;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (((ulong)puVar23 & 0x1fffffffc) == 4) {
                  do {
                    puVar23 = *ppuVar17;
                    cVar4 = '\x01';
                    bVar9 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
                    if (bVar9) {
                      *ppuVar17 = puVar23 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (puVar23 + -1 == (undefined *)0x0) {
                    (**(code **)(*param_3 + 8))(param_3);
                  }
                }
              }
              func_0x00010a30a03c(&pmStack_2a0);
            }
          }
        }
      }
      FUN_10a305eb4(*(undefined8 *)(param_2 + 4),param_7 + 0x20,&pmStack_2b0);
      FUN_10a186904(&uStack_820);
      func_0x00010923ff08(&pmStack_4a0);
      ppuVar17 = ppuStack_2f8;
      if (ppuStack_2f8 != (undefined **)0x0) {
        ppuVar33 = ppuStack_2f8 + 1;
        do {
          puVar23 = *ppuVar33;
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(ppuVar33,0x10);
          if (bVar9) {
            *ppuVar33 = puVar23 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (puVar23 == (undefined *)0x0) {
          (**(code **)(*ppuStack_2f8 + 0x10))(ppuStack_2f8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
        }
      }
      ppuVar17 = ppuStack_2e8;
      if (ppuStack_2e8 != (undefined **)0x0) {
        ppuVar33 = ppuStack_2e8 + 1;
        do {
          puVar23 = *ppuVar33;
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(ppuVar33,0x10);
          if (bVar9) {
            *ppuVar33 = puVar23 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (puVar23 == (undefined *)0x0) {
          (**(code **)(*ppuStack_2e8 + 0x10))(ppuStack_2e8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
        }
      }
      ppuVar17 = ppuStack_2d8;
      if (ppuStack_2d8 != (undefined **)0x0) {
        ppuVar33 = ppuStack_2d8 + 1;
        do {
          puVar23 = *ppuVar33;
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(ppuVar33,0x10);
          if (bVar9) {
            *ppuVar33 = puVar23 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (puVar23 == (undefined *)0x0) {
          (**(code **)(*ppuStack_2d8 + 0x10))(ppuStack_2d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
        }
      }
LAB_10a30952c:
      FUN_10a305eb4(*(undefined8 *)(param_2 + 4),param_7 + 8,&pmStack_2b0);
      param_1[1] = (long)ppuStack_2a8;
      *param_1 = (long)pmStack_2b0;
      ppuStack_2a8 = (undefined **)0x0;
      pmStack_2b0 = (mach_header *)0x0;
      goto LAB_10a309550;
    }
    if (bVar3 == 2) {
      pmStack_810 = (mach_header *)(long)*(char *)(param_7 + 0x5f);
      if ((long)pmStack_810 < 0) {
        pmStack_818 = *(mach_header **)(param_7 + 0x48);
        pmStack_810 = *(mach_header **)(param_7 + 0x50);
      }
      else {
        pmStack_818 = (mach_header *)(param_7 + 0x48);
      }
      uStack_820 = (undefined **)((ulong)uStack_820._4_4_ << 0x20);
      (**(code **)(*(long *)*param_3 + 0xa0))(&pmStack_4a0,*param_3,&uStack_820);
      ppuVar17 = ppuStack_2d8;
      ppuStack_2d8 = ppuStack_498;
      pmStack_2e0 = pmStack_4a0;
      pmStack_4a0 = (mach_header *)0x0;
      ppuStack_498 = (undefined **)0x0;
      if (ppuVar17 != (undefined **)0x0) {
        ppuVar33 = ppuVar17 + 1;
        do {
          puVar19 = *ppuVar33;
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(ppuVar33,0x10);
          if (bVar9) {
            *ppuVar33 = puVar19 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (puVar19 == (undefined *)0x0) {
          (**(code **)(*ppuVar17 + 0x10))(ppuVar17);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
        }
      }
      if (ppuStack_498 != (undefined **)0x0) {
        ppuVar17 = ppuStack_498 + 1;
        do {
          puVar19 = *ppuVar17;
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
          if (bVar9) {
            *ppuVar17 = puVar19 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        goto LAB_10a30821c;
      }
      goto LAB_10a308238;
    }
    if (bVar3 != 3) {
      if (bVar3 != 4) goto LAB_10a308238;
      uStack_820 = (undefined **)CONCAT44(uStack_820._4_4_,1);
      pmStack_810 = (mach_header *)(long)*(char *)(param_7 + 0x5f);
      if (-1 < (long)pmStack_810) goto LAB_10a309680;
      pmStack_818 = *(mach_header **)(param_7 + 0x48);
      pmStack_810 = *(mach_header **)(param_7 + 0x50);
      goto LAB_10a309684;
    }
  }
LAB_10a3096b4:
  FUN_10a0ee06c(&UNK_10f64d7cd);
LAB_10a3096dc:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a3096e0);
  (*pcVar8)();
}



/* Entry: 10a309a74; end: 10a309af3;  */

void FUN_10a309a74(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puStack_58;
  ulong uStack_50;
  undefined1 auStack_48 [24];
  
  uStack_50 = param_3[1];
  puStack_58 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uStack_50 = (ulong)*(byte *)((long)param_3 + 0x17);
    puStack_58 = param_3;
  }
  uVar1 = param_2;
  FUN_10a08fd8c();
  FUN_10a31db54(auStack_48,&puStack_58,uVar1);
  FUN_10a307798(param_1,param_2,auStack_48,param_4);
  return;
}



/* Entry: 10a309af4; end: 10a309beb;  */

void FUN_10a309af4(long *param_1,undefined8 param_2,char param_3,undefined8 param_4,long *param_5,
                  long param_6,long param_7)

{
  long lVar1;
  ulong uVar2;
  long lStack_48;
  long lStack_40;
  char cStack_32;
  undefined1 uStack_31;
  
  cStack_32 = param_3;
  FUN_10a322a78(&lStack_48,&uStack_31,&cStack_32,param_4,param_6 + 0x60);
  if (*(char *)(param_7 + 0x30) == '\x01') {
    FUN_10ab958a8(lStack_48 + 0x40,param_7,param_7 + 0x18);
  }
  lVar1 = lStack_48;
  uVar2 = lStack_48 + 0x40;
  FUN_10ab947c0(uVar2,param_6);
  *(bool *)(lVar1 + 0x38) = (uVar2 & 0x101) != 0;
  FUN_10a31c19c(lVar1);
  if (((cStack_32 == '\x01') && ((*(byte *)(lStack_48 + 0x141) & 1) == 0)) &&
     (*(int *)(*param_5 + 0x734) == 1)) {
    FUN_10a305f8c();
  }
  *param_1 = lStack_48;
  param_1[1] = lStack_40;
  return;
}



/* Entry: 10a309bec; end: 10a309def;  */

void FUN_10a309bec(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8,
                  uint param_9)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_a0 [8];
  long *plStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  char cStack_69;
  byte bStack_68;
  
  lVar8 = param_2;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_80 = 0;
  bStack_68 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = *param_8;
  plStack_88 = (long *)param_8[1];
  if (plStack_88 != (long *)0x0) {
    plVar6 = plStack_88 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_90 = uVar2;
  if ((param_9 >> 3 & 1) != 0) {
    __ZNSt3__15mutex4lockEv(param_2 + 0x40);
  }
  FUN_10a307eb8(auStack_a0,param_2,param_4,param_3,param_6,param_7,uVar2,&uStack_80,(char)param_9);
  plVar6 = param_1;
  func_0x00010a3072b8(param_1,auStack_a0);
  if (plStack_98 != (long *)0x0) {
    plVar1 = plStack_98 + 1;
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
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar6 = plStack_98;
    }
  }
  if (*param_1 != 0) {
    __ZNSt3__16chrono12steady_clock3nowEv();
    if (plVar6 == (long *)0x0) {
      __ZNSt3__16chrono12steady_clock3nowEv();
    }
    *(double *)(param_2 + 0x28) =
         *(double *)(param_2 + 0x28) + (double)((long)plVar6 - lVar8) / 1000000000.0;
    if ((param_9 >> 3 & 1) != 0) {
      __ZNSt3__15mutex6unlockEv(param_2 + 0x40);
    }
    plVar6 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar1 = plStack_88 + 1;
      do {
        lVar8 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if ((bStack_68 == 1) && (cStack_69 < '\0')) {
      __ZdlPv(CONCAT71(uStack_7f,uStack_80));
    }
    return;
  }
  if ((bStack_68 & 1) != 0) {
    FUN_10a196f30(&uStack_80);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a309da0);
  (*pcVar5)();
}



/* Entry: 10a309df0; end: 10a309fd7;  */

/* WARNING: Removing unreachable block (ram,0x00010a309f18) */

void FUN_10a309df0(undefined8 param_1,ulong *param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 auStack_a0 [2];
  char cStack_89;
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined8 auStack_70 [2];
  char cStack_59;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c2b054(auStack_48,&UNK_10f64eba0);
  uVar3 = *param_2;
  if ((bRam00000001137eaef0 & 1) == 0) {
    lVar2 = 0x1137eaef0;
    ___cxa_guard_acquire();
    if ((int)lVar2 != 0) {
      FUN_10a31dc6c();
      lRam00000001137eaee8 = lVar2;
      ___cxa_guard_release(0x1137eaef0);
    }
  }
  lVar2 = lRam00000001137eaee8 + 0x9e3779b9;
  puVar1 = &UNK_10f63f033;
  if ((param_2[2] & 0x20) != 0) {
    puVar1 = &UNK_10f63f039;
  }
  if ((param_2[2] & 0x80) != 0) {
    puVar1 = &UNK_10f64eba3;
  }
  puStack_58 = puVar1;
  _strlen();
  puStack_50 = puVar1;
  __ZNSt3__19to_stringEy(auStack_70,uVar3 * 0x40 + (uVar3 >> 2) + lVar2 ^ uVar3);
  __ZNSt3__19to_stringEy(auStack_88,param_2[1]);
  if ((int)param_2[2] == 0) {
    func_0x000107c2b054(auStack_a0,"");
  }
  else {
    __ZNSt3__19to_stringEj(auStack_a0);
  }
  FUN_10a189304(param_1,auStack_70,auStack_88,auStack_a0,auStack_48,&puStack_58);
  if (cStack_89 < '\0') {
    __ZdlPv(auStack_a0[0]);
  }
  if (cStack_71 < '\0') {
    __ZdlPv(auStack_88[0]);
  }
  if (cStack_59 < '\0') {
    __ZdlPv(auStack_70[0]);
  }
  return;
}



/* Entry: 10a309fd8; end: 10a30a03b;  */

undefined8 FUN_10a309fd8(int *param_1)

{
  code *pcVar1;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [56];
  
  if (*param_1 == 0) {
    return 0;
  }
  FUN_10a309df0(auStack_70);
  FUN_10a0f1edc(auStack_58,auStack_70,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a30a020);
  (*pcVar1)();
}



/* Entry: 10a30a03c; end: 10a30a14b;  */

long FUN_10a30a03c(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0xd8;
  FUN_10a0426d8(&lStack_28);
  if (*(long *)(param_1 + 0xc0) != 0) {
    *(long *)(param_1 + 200) = *(long *)(param_1 + 0xc0);
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0xbf) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0xa8));
  }
  if (*(char *)(param_1 + 0xa7) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x90));
  }
  if (*(char *)(param_1 + 0x8f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x78));
  }
  lStack_28 = param_1 + 0x60;
  FUN_10a188534(&lStack_28);
  if (*(long *)(param_1 + 0x48) != 0) {
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x48);
    __ZdlPv();
  }
  lStack_28 = param_1 + 0x30;
  FUN_10a1885a4(&lStack_28);
  lStack_28 = param_1 + 0x18;
  func_0x00010a1885e4(&lStack_28);
  lStack_28 = param_1;
  FUN_10a188624(&lStack_28);
  return param_1;
}



/* Entry: 10a30a14c; end: 10a30a3a7;  */

void FUN_10a30a14c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 auStack_c8 [2];
  char cStack_b1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined1 auStack_70 [32];
  long lVar5;
  
  lVar4 = 0;
  FUN_10a2421c8();
  lVar5 = lVar4;
  FUN_10a18b160(auStack_70);
  iVar3 = (int)lVar5;
  FUN_10a08fd8c();
  if ((iVar3 == 0) && ((~*(uint *)(lVar4 + 0x270) & 3) == 0)) {
    __ZNSt3__16chrono12steady_clock3nowEv();
    FUN_10a0ee900(&uStack_b0,&UNK_10f64d877,0x1c);
    uVar1 = *(ulong *)(param_3 + 0xa0);
    plVar2 = (long *)*(long *)(param_3 + 0x98);
    if (-1 < (char)*(byte *)(param_3 + 0xaf)) {
      uVar1 = (ulong)*(byte *)(param_3 + 0xaf);
      plVar2 = (long *)(param_3 + 0x98);
    }
    puVar6 = &uStack_b0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar6,0,plVar2,uVar1);
    uStack_88 = puVar6[1];
    uStack_90 = *puVar6;
    lStack_80 = puVar6[2];
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    if (uStack_a0._7_1_ < '\0') {
      __ZdlPv(uStack_b0);
    }
    FUN_10a0ee900(auStack_c8,&UNK_10f64d877,0x1c);
    uVar1 = *(ulong *)(param_3 + 0xb8);
    puVar6 = *(undefined8 **)(param_3 + 0xb0);
    if (-1 < (char)*(byte *)(param_3 + 199)) {
      uVar1 = (ulong)*(byte *)(param_3 + 199);
      puVar6 = (undefined8 *)(param_3 + 0xb0);
    }
    puVar7 = auStack_c8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar7,0,puVar6,uVar1);
    uStack_a8 = puVar7[1];
    uStack_b0 = *puVar7;
    uStack_a0 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    if (cStack_b1 < '\0') {
      __ZdlPv(auStack_c8[0]);
    }
    FUN_10a30a480(param_1,param_2,param_4,param_5,&uStack_90,&uStack_b0);
    if (uStack_a0 < 0) {
      __ZdlPv(uStack_b0);
    }
    if (lStack_80 < 0) {
      __ZdlPv(uStack_90);
    }
  }
  else {
    FUN_10a30a480(param_1,param_2,param_4,param_5,param_3 + 0x98,param_3 + 0xb0);
  }
  FUN_10a197000(auStack_70);
  return;
}



/* Entry: 10a30a3a8; end: 10a30a47f;  */

void FUN_10a30a3a8(int param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uStack_44;
  undefined8 *puStack_40;
  int iStack_38;
  undefined4 uStack_34;
  int iStack_24;
  
  if (param_1 != 0) {
    uVar2 = 1;
    FUN_10a303694(1);
    iStack_24 = 0;
    _glGetProgramiv(param_2,0x8741,&iStack_24);
    if (iStack_24 != 0) {
      FUN_10a18b3bc(&puStack_40,(long)iStack_24 + 0x18);
      uStack_44 = 0;
      FUN_10a174bb8(uVar2,param_2,(iStack_38 - (int)puStack_40) + -0x18,&iStack_24,&uStack_44,
                    puStack_40 + 3);
      *puStack_40 = 1;
      *(undefined4 *)(puStack_40 + 1) = uStack_44;
      puStack_40[2] = CONCAT44(uStack_34,iStack_38) - (long)puStack_40;
      FUN_10a00946c(&UNK_10f64d894);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a30a45c);
      (*pcVar1)();
    }
  }
  return;
}



/* Entry: 10a30a480; end: 10a30a6ab;  */

void FUN_10a30a480(undefined4 *param_1,ulong param_2,undefined8 *param_3,ulong param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  
  if (((uint)param_4 >> 2 & 1) != 0) {
    FUN_10a305aec(param_2,param_5,param_6);
  }
  uVar4 = param_5[1];
  puVar2 = (undefined8 *)*param_5;
  if (-1 < (char)*(byte *)((long)param_5 + 0x17)) {
    uVar4 = (ulong)*(byte *)((long)param_5 + 0x17);
    puVar2 = param_5;
  }
  FUN_10a30a6ac(puVar2,uVar4,0x8b31,param_3,param_4);
  uVar6 = (undefined1)((ulong)puVar2 >> 0x20);
  if ((ulong)puVar2 >> 0x20 != 0) {
    uVar4 = param_6[1];
    puVar3 = (undefined8 *)*param_6;
    if (-1 < (char)*(byte *)((long)param_6 + 0x17)) {
      uVar4 = (ulong)*(byte *)((long)param_6 + 0x17);
      puVar3 = param_6;
    }
    FUN_10a30a6ac(puVar3,uVar4,0x8b30,param_3,param_4);
    uVar6 = (undefined1)((ulong)puVar3 >> 0x20);
    if ((ulong)puVar3 >> 0x20 != 0) {
      uVar4 = param_2;
      FUN_10a30b1d4(param_2,puVar2,puVar3,param_3,param_4);
      if (uVar4 >> 0x20 != 0) {
        *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
        bVar1 = (param_4 & 2) != 0;
        *param_1 = (int)uVar4;
        uVar5 = (undefined4)((ulong)puVar2 >> 8);
        if (bVar1) {
          uVar5 = (undefined4)((ulong)puVar3 >> 8);
        }
        uVar6 = 0;
        if (bVar1) {
          uVar6 = SUB81(puVar2,0);
        }
        *(undefined1 *)(param_1 + 1) = uVar6;
        *(short *)((long)param_1 + 5) = (short)((ulong)puVar2 >> 8);
        uVar6 = 0;
        if (bVar1) {
          uVar6 = SUB81(puVar3,0);
        }
        *(char *)((long)param_1 + 7) = (char)((ulong)puVar2 >> 0x18);
        *(bool *)(param_1 + 2) = bVar1;
        *(undefined1 *)(param_1 + 3) = uVar6;
        *(short *)((long)param_1 + 0xd) = (short)uVar5;
        *(char *)((long)param_1 + 0xf) = (char)((uint)uVar5 >> 0x10);
        *(bool *)(param_1 + 4) = bVar1;
        uVar6 = 1;
        goto LAB_10a30a538;
      }
      if (*(char *)(param_3 + 3) == '\x01') {
        if (*(char *)((long)param_3 + 0x17) < '\0') {
          __ZdlPv(*param_3);
        }
        *(undefined1 *)(param_3 + 3) = 0;
      }
      uVar4 = param_5[1];
      puVar2 = (undefined8 *)*param_5;
      if (-1 < (char)*(byte *)((long)param_5 + 0x17)) {
        uVar4 = (ulong)*(byte *)((long)param_5 + 0x17);
        puVar2 = param_5;
      }
      FUN_10a30a6ac(puVar2,uVar4,0x8b31,param_3,0);
      uVar6 = (undefined1)((ulong)puVar2 >> 0x20);
      if ((ulong)puVar2 >> 0x20 != 0) {
        uVar4 = param_6[1];
        puVar3 = (undefined8 *)*param_6;
        if (-1 < (char)*(byte *)((long)param_6 + 0x17)) {
          uVar4 = (ulong)*(byte *)((long)param_6 + 0x17);
          puVar3 = param_6;
        }
        FUN_10a30a6ac(puVar3,uVar4,0x8b30,param_3,0);
        uVar6 = (undefined1)((ulong)puVar3 >> 0x20);
        if ((ulong)puVar3 >> 0x20 != 0) {
          FUN_10a30b1d4(param_2,puVar2,puVar3,param_3,0);
          uVar6 = 0;
        }
      }
    }
  }
  *(undefined1 *)param_1 = 0;
LAB_10a30a538:
  *(undefined1 *)(param_1 + 5) = uVar6;
  return;
}



/* Entry: 10a30a6ac; end: 10a30b1d3;  */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_10a30a6ac(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   ulong param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  uint uVar4;
  undefined8 *******pppppppuVar5;
  code *pcVar6;
  bool bVar7;
  undefined ********ppppppppuVar8;
  undefined ********ppppppppuVar9;
  undefined ***pppuVar10;
  ulong uVar11;
  long *plVar12;
  uint uVar13;
  undefined1 uVar14;
  undefined8 uVar15;
  int iVar16;
  undefined8 *******pppppppuStack_5a0;
  ulong uStack_598;
  byte bStack_589;
  undefined8 auStack_588 [2];
  char cStack_571;
  undefined8 *******pppppppuStack_570;
  ulong uStack_568;
  byte bStack_559;
  int iStack_554;
  undefined ********ppppppppuStack_550;
  long lStack_548;
  undefined8 uStack_540;
  undefined **ppuStack_538;
  byte abStack_530 [56];
  undefined8 uStack_4f8;
  char cStack_4e1;
  undefined **appuStack_4d0 [19];
  undefined8 uStack_438;
  ulong uStack_430;
  byte bStack_421;
  undefined8 uStack_420;
  long lStack_418;
  char cStack_409;
  undefined8 uStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  int iStack_3ec;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  long lStack_3d8;
  undefined ********ppppppppuStack_3d0;
  ulong uStack_3c8;
  undefined8 uStack_3c0;
  undefined **ppuStack_3b8;
  undefined1 auStack_3b0 [56];
  undefined8 uStack_378;
  char cStack_361;
  undefined **appuStack_350 [19];
  undefined8 *******pppppppuStack_2b8;
  ulong uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  byte abStack_280 [56];
  undefined8 uStack_248;
  char cStack_231;
  undefined **appuStack_220 [19];
  undefined **ppuStack_188;
  undefined *puStack_180;
  undefined **appuStack_178 [2];
  undefined1 auStack_168 [56];
  undefined8 uStack_130;
  char cStack_119;
  undefined **appuStack_108 [19];
  undefined1 auStack_69 [9];
  
  FUN_10a303694(1);
  uVar15 = param_3;
  _glCreateShader(param_3);
  puStack_180 = &UNK_10f64d48b;
  uStack_2a0 = (undefined **)CONCAT44(1,(int)param_2);
  ppuStack_188 = param_1;
  _glShaderSource();
  _glCompileShader(uVar15);
  if ((param_5 & 1) == 0) {
    iStack_554 = 1;
    _glGetShaderiv(uVar15,0x8b81,&iStack_554);
    if (iStack_554 == 0) {
      FUN_10a30b39c(&pppppppuStack_570,uVar15);
      _glDeleteShader(uVar15);
      func_0x000107c2b054(auStack_588,"");
      bVar7 = (int)param_3 != 0x8b31;
      puVar2 = &DAT_10f35d286;
      if (bVar7) {
        puVar2 = &DAT_10f62f4db;
      }
      uVar15 = 6;
      if (bVar7) {
        uVar15 = 8;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (auStack_588,puVar2,uVar15);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (auStack_588,&UNK_10f64d8c9,0x15);
      uVar11 = uStack_568;
      pppppppuVar5 = pppppppuStack_570;
      if (-1 < (char)bStack_559) {
        uVar11 = (ulong)bStack_559;
        pppppppuVar5 = &pppppppuStack_570;
      }
      FUN_109febc44(&ppuStack_188);
      if (0x7ffffffffffffff7 < uVar11) {
        func_0x000109ffde50();
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10a30b054);
        (*pcVar6)();
      }
      if (uVar11 < 0x17) {
        uStack_3c0 = (undefined **)CONCAT17((char)uVar11,(undefined7)uStack_3c0);
        ppppppppuVar8 = (undefined ********)&ppppppppuStack_3d0;
        if (uVar11 != 0) goto LAB_10a30a85c;
      }
      else {
        ppppppppuVar9 = (undefined ********)0x19;
        if ((uVar11 | 7) != 0x17) {
          ppppppppuVar9 = (undefined ********)((uVar11 | 7) + 1);
        }
        ppppppppuVar8 = ppppppppuVar9;
        __Znwm();
        uStack_3c0 = (undefined **)((ulong)ppppppppuVar9 | 0x8000000000000000);
        ppppppppuStack_3d0 = ppppppppuVar8;
        uStack_3c8 = uVar11;
LAB_10a30a85c:
        _memcpy(ppppppppuVar8,pppppppuVar5,uVar11);
      }
      *(undefined1 *)((long)ppppppppuVar8 + uVar11) = 0;
      FUN_10a174c58(&uStack_2a0,&ppppppppuStack_3d0,0x18);
      if ((long)uStack_3c0 < 0) {
        __ZdlPv(ppppppppuStack_3d0);
      }
      puVar2 = PTR___ZNSt3__15ctypeIcE2idE_110346770;
      plVar12 = (long *)((long)uStack_2a0 + -0x18);
      if ((abStack_280[*plVar12] >> 1 & 1) == 0) {
        puVar1 = PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10;
        do {
          uStack_2b0 = 0;
          pppppppuStack_2b8 = (undefined8 *******)0x0;
          uStack_2a8 = 0;
          __ZNKSt3__18ios_base6getlocEv(&ppppppppuStack_3d0,(long)&uStack_2a0 + *plVar12);
          ppppppppuVar9 = (undefined ********)&ppppppppuStack_3d0;
          __ZNKSt3__16locale9use_facetERNS0_2idE(ppppppppuVar9,puVar2);
          (*(code *)(*ppppppppuVar9)[7])();
          __ZNSt3__16localeD1Ev(&ppppppppuStack_3d0);
          FUN_10a10894c(&uStack_2a0,&pppppppuStack_2b8,ppppppppuVar9);
          if ((long)uStack_2a8 < 0) {
            if (uStack_2b0 != 0) goto LAB_10a30a970;
LAB_10a30aee8:
            __ZdlPv(pppppppuStack_2b8);
          }
          else if (uStack_2a8._7_1_ != '\0') {
LAB_10a30a970:
            FUN_10a108878(&ppppppppuStack_3d0,&pppppppuStack_2b8,0x18);
            uStack_3e8 = 0;
            uStack_3e0 = 0;
            lStack_3d8 = 0;
            iStack_3ec = 0;
            func_0x000107c2b054(&uStack_408,"ERROR");
            uVar11 = uStack_400;
            if (-1 < (long)uStack_3f8) {
              uVar11 = uStack_3f8 >> 0x38;
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                      (&ppppppppuStack_550,&pppppppuStack_2b8,0,uVar11,&uStack_420);
            if ((long)uStack_540 < 0) {
              ppppppppuVar9 = ppppppppuStack_550;
              if (lStack_548 == 5) goto LAB_10a30a9ec;
LAB_10a30aa0c:
              func_0x000107c2b054(&uStack_438,"WARNING");
              uVar11 = uStack_430;
              if (-1 < (char)bStack_421) {
                uVar11 = (ulong)bStack_421;
              }
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                        (&uStack_420,&pppppppuStack_2b8,0,uVar11,auStack_69);
              if (cStack_409 < '\0') {
                if (lStack_418 == 7) {
                  bVar7 = *(int *)CONCAT44(uStack_420._4_4_,(int)uStack_420) == 0x4e524157 &&
                          *(int *)((long)CONCAT44(uStack_420._4_4_,(int)uStack_420) + 3) ==
                          0x474e494e;
                }
                else {
                  bVar7 = false;
                }
                __ZdlPv();
              }
              else if (cStack_409 == '\a') {
                bVar7 = (int)uStack_420 == 0x4e524157 &&
                        CONCAT31(uStack_420._4_3_,uStack_420._3_1_) == 0x474e494e;
              }
              else {
                bVar7 = false;
              }
              if ((char)bStack_421 < '\0') {
                __ZdlPv(uStack_438);
              }
              if ((long)uStack_540 < 0) {
LAB_10a30aae8:
                __ZdlPv(ppppppppuStack_550);
              }
            }
            else {
              if (uStack_540._7_1_ != '\x05') goto LAB_10a30aa0c;
              ppppppppuVar9 = (undefined ********)&ppppppppuStack_550;
LAB_10a30a9ec:
              if (*(int *)ppppppppuVar9 != 0x4f525245 || *(char *)((long)ppppppppuVar9 + 4) != 'R')
              goto LAB_10a30aa0c;
              bVar7 = true;
              if (((uint)(int)uStack_540._7_1_ >> 7 & 1) != 0) goto LAB_10a30aae8;
            }
            if ((long)uStack_3f8 < 0) {
              __ZdlPv(uStack_408);
              if (bVar7) goto LAB_10a30aafc;
LAB_10a30ab20:
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                        (&ppppppppuStack_550,&pppppppuStack_2b8,0,1,&uStack_408);
              if ((long)uStack_540 < 0) {
                if (lStack_548 == 1) {
                  cVar3 = *(char *)ppppppppuStack_550;
                  __ZdlPv();
                  if (cVar3 == '(') {
                    uVar14 = 0x28;
                    goto LAB_10a30abe0;
                  }
                }
                else {
                  __ZdlPv();
                }
LAB_10a30ab7c:
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                          (&ppppppppuStack_550,&pppppppuStack_2b8,1,2,&uStack_408);
                if ((long)uStack_540 < 0) {
                  if (lStack_548 == 1) {
                    cVar3 = *(char *)ppppppppuStack_550;
                    __ZdlPv();
                    if (cVar3 == '(') {
                      uVar14 = 0x28;
                      goto LAB_10a30abe0;
                    }
                  }
                  else {
                    __ZdlPv();
                  }
                }
                else if ((uStack_540._7_1_ == '\x01') && ((char)ppppppppuStack_550 == '('))
                goto LAB_10a30abb0;
                uVar14 = 0x3a;
              }
              else {
                if ((uStack_540._7_1_ != '\x01') || ((char)ppppppppuStack_550 != '('))
                goto LAB_10a30ab7c;
LAB_10a30abb0:
                uVar14 = 0x28;
              }
            }
            else {
              if (!bVar7) goto LAB_10a30ab20;
LAB_10a30aafc:
              uVar14 = 0x3a;
              FUN_10a10894c(&ppppppppuStack_3d0,&uStack_3e8,0x3a);
            }
LAB_10a30abe0:
            FUN_10a10894c(&ppppppppuStack_3d0,&uStack_3e8,uVar14);
            __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERi(&ppppppppuStack_3d0,&iStack_3ec);
            if (0 < iStack_3ec) {
              __ZNKSt3__18ios_base6getlocEv
                        (&ppppppppuStack_550,
                         (undefined *)((long)appuStack_178 + (long)appuStack_178[0][-3]));
              ppppppppuVar9 = (undefined ********)&ppppppppuStack_550;
              __ZNKSt3__16locale9use_facetERNS0_2idE(ppppppppuVar9,puVar2);
              (*(code *)(*ppppppppuVar9)[7])();
              __ZNSt3__16localeD1Ev(&ppppppppuStack_550);
              __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc(appuStack_178,ppppppppuVar9);
              __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv(appuStack_178);
              FUN_109febc44(&ppppppppuStack_550);
              __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl
                        (&uStack_540,param_1,param_2);
              ppppppppuVar9 = ppppppppuStack_550 + -3;
              if ((abStack_530[(long)*ppppppppuVar9] >> 1 & 1) == 0) {
                iVar16 = 1;
                do {
                  uStack_408 = 0;
                  uStack_400 = 0;
                  uStack_3f8 = 0;
                  __ZNKSt3__18ios_base6getlocEv
                            (&uStack_420,(long)&ppppppppuStack_550 + (long)*ppppppppuVar9);
                  plVar12 = &uStack_420;
                  __ZNKSt3__16locale9use_facetERNS0_2idE(plVar12,puVar2);
                  (**(code **)(*plVar12 + 0x38))();
                  __ZNSt3__16localeD1Ev(&uStack_420);
                  FUN_10a10894c(&ppppppppuStack_550,&uStack_408,plVar12);
                  uVar4 = iVar16 - iStack_3ec;
                  uVar13 = -uVar4;
                  if (-1 < (int)uVar4) {
                    uVar13 = uVar4;
                  }
                  if (uVar13 < 3) {
                    pppuVar10 = appuStack_178;
                    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(appuStack_178,iVar16);
                    FUN_10a002568();
                    FUN_10a002568();
                    __ZNKSt3__18ios_base6getlocEv
                              (&uStack_420,(undefined *)((long)pppuVar10 + (long)(*pppuVar10)[-3]));
                    plVar12 = &uStack_420;
                    __ZNKSt3__16locale9use_facetERNS0_2idE(plVar12,puVar2);
                    (**(code **)(*plVar12 + 0x38))();
                    __ZNSt3__16localeD1Ev(&uStack_420);
                    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc(pppuVar10,plVar12);
                    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv(pppuVar10);
                  }
                  if ((long)uStack_3f8 < 0) {
                    __ZdlPv(uStack_408);
                  }
                  ppppppppuVar9 = ppppppppuStack_550 + -3;
                  iVar16 = iVar16 + 1;
                } while ((abStack_530[(long)*ppppppppuVar9] >> 1 & 1) == 0);
              }
              ppppppppuStack_550 = (undefined ********)&PTR_SUB_1108a5a38;
              appuStack_4d0[0] = &PTR_DAT_1108a5a88;
              uStack_540 = &PTR_DAT_1108a5a60;
              ppuStack_538 = &PTR_DAT_11088d7b0;
              if (cStack_4e1 < '\0') {
                __ZdlPv(uStack_4f8);
              }
              ppuStack_538 = (undefined **)puVar1;
              __ZNSt3__16localeD1Ev(abStack_530);
              __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev
                        (&ppppppppuStack_550,&PTR_PTR_1108a5aa0);
              __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_4d0);
            }
            uVar11 = uStack_2b0;
            pppppppuVar5 = pppppppuStack_2b8;
            if (-1 < (long)uStack_2a8) {
              uVar11 = uStack_2a8 >> 0x38;
              pppppppuVar5 = &pppppppuStack_2b8;
            }
            pppuVar10 = appuStack_178;
            FUN_10a002568(appuStack_178,pppppppuVar5,uVar11);
            __ZNKSt3__18ios_base6getlocEv
                      (&ppppppppuStack_550,(undefined *)((long)pppuVar10 + (long)(*pppuVar10)[-3]));
            ppppppppuVar9 = (undefined ********)&ppppppppuStack_550;
            __ZNKSt3__16locale9use_facetERNS0_2idE(ppppppppuVar9,puVar2);
            (*(code *)(*ppppppppuVar9)[7])();
            __ZNSt3__16localeD1Ev(&ppppppppuStack_550);
            __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc(pppuVar10,ppppppppuVar9);
            __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv(pppuVar10);
            if (lStack_3d8 < 0) {
              __ZdlPv(uStack_3e8);
            }
            ppppppppuStack_3d0 = (undefined ********)&PTR_SUB_1108a5a38;
            uStack_3c0 = &PTR_DAT_1108a5a60;
            appuStack_350[0] = &PTR_DAT_1108a5a88;
            ppuStack_3b8 = &PTR_DAT_11088d7b0;
            if (cStack_361 < '\0') {
              __ZdlPv(uStack_378);
            }
            ppuStack_3b8 = (undefined **)
                           (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 +
                           0x10);
            __ZNSt3__16localeD1Ev(auStack_3b0);
            __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev
                      (&ppppppppuStack_3d0,&PTR_PTR_1108a5aa0);
            __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_350);
            if ((long)uStack_2a8 < 0) goto LAB_10a30aee8;
          }
          plVar12 = (long *)((long)uStack_2a0 + -0x18);
        } while ((abStack_280[*plVar12] >> 1 & 1) == 0);
      }
      func_0x00010a002480(&pppppppuStack_5a0,appuStack_178 + 1,&ppppppppuStack_3d0);
      uStack_2a0 = &PTR_SUB_1108a5a38;
      ppuStack_290 = &PTR_DAT_1108a5a60;
      appuStack_220[0] = &PTR_DAT_1108a5a88;
      ppuStack_288 = &PTR_DAT_11088d7b0;
      if (cStack_231 < '\0') {
        __ZdlPv(uStack_248);
      }
      puVar2 = PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10;
      ppuStack_288 = (undefined **)puVar2;
      __ZNSt3__16localeD1Ev(abStack_280);
      __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(&uStack_2a0,&PTR_PTR_1108a5aa0);
      __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_220);
      ppuStack_188 = &PTR_SUB_1108a5a38;
      appuStack_178[0] = &PTR_DAT_1108a5a60;
      appuStack_108[0] = &PTR_DAT_1108a5a88;
      appuStack_178[1] = &PTR_DAT_11088d7b0;
      if (cStack_119 < '\0') {
        __ZdlPv(uStack_130);
      }
      appuStack_178[1] = (undefined **)puVar2;
      __ZNSt3__16localeD1Ev(auStack_168);
      __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_188,&PTR_PTR_1108a5aa0);
      __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_108);
      pppppppuVar5 = pppppppuStack_5a0;
      if (-1 < (char)bStack_589) {
        uStack_598 = (ulong)bStack_589;
        pppppppuVar5 = &pppppppuStack_5a0;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (auStack_588,pppppppuVar5,uStack_598);
      if ((char)bStack_589 < '\0') {
        __ZdlPv(pppppppuStack_5a0);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (auStack_588,&UNK_10f64d48b,1);
      FUN_10a174bec(param_4,auStack_588);
      if (cStack_571 < '\0') {
        __ZdlPv(auStack_588[0]);
      }
      if ((char)bStack_559 < '\0') {
        __ZdlPv(pppppppuStack_570);
      }
      uVar15 = 0;
      uVar11 = 0;
      uVar13 = 0;
      goto LAB_10a30a754;
    }
  }
  uVar13 = (uint)uVar15 & 0xffffff00;
  uVar11 = 0x100000000;
LAB_10a30a754:
  return uVar11 | (uVar13 | (uint)uVar15 & 0xff);
}



/* Entry: 10a30b1d4; end: 10a30b39b;  */

ulong FUN_10a30b1d4(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   uint param_5)

{
  undefined8 ***pppuVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  undefined8 **ppuStack_88;
  ulong uStack_80;
  byte bStack_71;
  undefined8 auStack_70 [2];
  char cStack_59;
  int iStack_54;
  
  lVar2 = 1;
  FUN_10a303694();
  lVar5 = lVar2;
  _glCreateProgram();
  _glAttachShader();
  _glAttachShader(lVar5,param_3);
  if (*param_1 == 1) {
    _glProgramParameteri(lVar5,0x8257,1);
  }
  _glLinkProgram(lVar5);
  _glDetachShader(lVar5,param_2);
  _glDetachShader(lVar5,param_3);
  if ((param_5 >> 1 & 1) == 0) {
    _glDeleteShader(param_2);
    _glDeleteShader(param_3);
    iStack_54 = 1;
    _glGetProgramiv(lVar5,0x8b82,&iStack_54);
    if (iStack_54 == 0) {
      func_0x000107c2b054(auStack_70,&UNK_10f64d8df);
      FUN_10a30b39c(&ppuStack_88,lVar5);
      pppuVar1 = (undefined8 ***)ppuStack_88;
      if (-1 < (char)bStack_71) {
        uStack_80 = (ulong)bStack_71;
        pppuVar1 = &ppuStack_88;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (auStack_70,pppuVar1,uStack_80);
      if ((char)bStack_71 < '\0') {
        __ZdlPv(ppuStack_88);
      }
      if (*(uint *)(lVar2 + 0xa4) == (uint)lVar5) {
        *(undefined4 *)(lVar2 + 0xa4) = 0xffffffff;
      }
      _glDeleteProgram(lVar5);
      FUN_10a174bec(param_4,auStack_70);
      if (cStack_59 < '\0') {
        __ZdlPv(auStack_70[0]);
      }
      lVar5 = 0;
      uVar3 = 0;
      uVar4 = 0;
      goto LAB_10a30b2a4;
    }
  }
  uVar4 = (uint)lVar5 & 0xffffff00;
  uVar3 = 0x100000000;
LAB_10a30b2a4:
  return uVar3 | (uVar4 | (uint)lVar5 & 0xff);
}



/* Entry: 10a30b39c; end: 10a30b4ab;  */

long * FUN_10a30b39c(undefined8 *param_1,long *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  int iStack_9c;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  int iStack_34;
  
  FUN_10a303694(1);
  iStack_34 = 0;
  plVar5 = param_2;
  _glIsShader();
  if ((int)plVar5 == 0) {
    plVar5 = param_2;
    _glIsProgram();
    if ((int)plVar5 == 0) {
      plVar5 = (long *)&UNK_10f64d8f7;
      FUN_10a322e60();
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        __ZdlPv(*param_1);
      }
      __Unwind_Resume();
      lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
      if ((*(int *)((long)plVar5 + 0xc) == 4) || ((char)plVar5[1] != '\x01')) {
        plVar10 = (long *)0x1;
        plVar6 = plVar5;
      }
      else {
        plVar8 = (long *)(ulong)*(uint *)(plVar5 + 2);
        plVar7 = (long *)(ulong)*(uint *)((long)plVar5 + 0x14);
        iStack_9c = 0;
        uVar1 = *(uint *)((long)plVar5 + 0x14);
        if (*(char *)((long)plVar5 + 9) == '\0') {
          uVar1 = *(uint *)(plVar5 + 2);
        }
        plVar6 = (long *)(ulong)uVar1;
        (**(code **)(*plVar5 + 0x88))(plVar6,0x8867,&iStack_9c);
        plVar10 = (long *)(ulong)(iStack_9c != 0);
        if (iStack_9c != 0) {
          if (*(char *)((long)plVar5 + 9) == '\x01') {
            lStack_98 = 0;
            lStack_90 = 0;
            (**(code **)(*plVar5 + 0x98))(plVar8,0x8866,&lStack_98);
            (**(code **)(*plVar5 + 0x98))(plVar7,0x8866,&lStack_90);
            plVar5[3] = lStack_90 - lStack_98;
            plVar8 = plVar7;
          }
          else {
            (**(code **)(*plVar5 + 0x98))(plVar8,0x8866,plVar5 + 3);
          }
          *(undefined4 *)((long)plVar5 + 0xc) = 4;
          plVar6 = plVar8;
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
        return plVar10;
      }
      ___stack_chk_fail();
      __Unwind_Resume();
      lVar9 = plVar6[3];
      if (plVar6[4] != lVar9) {
        uVar3 = plVar6[6];
        lVar4 = plVar6[7];
        plVar10 = (long *)(lVar9 + (uVar3 / 0x66) * 8);
        plVar8 = (long *)*plVar10;
        lVar9 = *(long *)(lVar9 + ((lVar4 + uVar3) / 0x66) * 8);
        plVar5 = plVar8 + (uVar3 % 0x66) * 5;
        while (plVar5 != (long *)(lVar9 + ((lVar4 + uVar3) % 0x66) * 0x28)) {
          if (((int)plVar5[2] != 0) && ((char)plVar5[1] == '\x01')) {
            (**(code **)(*plVar5 + 0x50))(*(byte *)((long)plVar5 + 9) + 1);
            *(undefined4 *)((long)plVar5 + 0xc) = 0;
            plVar8 = (long *)*plVar10;
          }
          plVar5 = plVar5 + 5;
          if ((long)plVar5 - (long)plVar8 == 0xff0) {
            plVar10 = plVar10 + 1;
            plVar8 = (long *)*plVar10;
            plVar5 = plVar8;
          }
        }
      }
      FUN_10a322c4c(plVar6 + 2);
      return plVar6;
    }
    _glGetProgramiv(param_2,0x8b84,&iStack_34);
  }
  else {
    _glGetShaderiv(param_2,0x8b84,&iStack_34);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
            (param_1,(long)iStack_34,0);
  puVar2 = (undefined8 *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    puVar2 = param_1;
  }
  plVar5 = param_2;
  _glIsShader();
  if ((int)plVar5 == 0) {
    plVar5 = param_2;
    _glIsProgram();
    if ((int)plVar5 != 0) {
      _glGetProgramInfoLog(param_2,iStack_34,0,puVar2);
      plVar5 = param_2;
    }
  }
  else {
    _glGetShaderInfoLog(param_2,iStack_34,0,puVar2);
    plVar5 = param_2;
  }
  return plVar5;
}



/* Entry: 10a30b4ac; end: 10a30b5e3;  */

long * FUN_10a30b4ac(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  int iStack_5c;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(int *)((long)param_1 + 0xc) == 4) || ((char)param_1[1] != '\x01')) {
    plVar8 = (long *)0x1;
    plVar4 = param_1;
  }
  else {
    plVar5 = (long *)(ulong)*(uint *)(param_1 + 2);
    plVar6 = (long *)(ulong)*(uint *)((long)param_1 + 0x14);
    iStack_5c = 0;
    uVar1 = *(uint *)((long)param_1 + 0x14);
    if (*(char *)((long)param_1 + 9) == '\0') {
      uVar1 = *(uint *)(param_1 + 2);
    }
    plVar4 = (long *)(ulong)uVar1;
    (**(code **)(*param_1 + 0x88))(plVar4,0x8867,&iStack_5c);
    plVar8 = (long *)(ulong)(iStack_5c != 0);
    if (iStack_5c != 0) {
      if (*(char *)((long)param_1 + 9) == '\x01') {
        lStack_58 = 0;
        lStack_50 = 0;
        (**(code **)(*param_1 + 0x98))(plVar5,0x8866,&lStack_58);
        (**(code **)(*param_1 + 0x98))(plVar6,0x8866,&lStack_50);
        param_1[3] = lStack_50 - lStack_58;
        plVar5 = plVar6;
      }
      else {
        (**(code **)(*param_1 + 0x98))(plVar5,0x8866,param_1 + 3);
      }
      *(undefined4 *)((long)param_1 + 0xc) = 4;
      plVar4 = plVar5;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar8;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lVar7 = plVar4[3];
  if (plVar4[4] != lVar7) {
    uVar2 = plVar4[6];
    lVar3 = plVar4[7];
    plVar5 = (long *)(lVar7 + (uVar2 / 0x66) * 8);
    plVar6 = (long *)*plVar5;
    lVar7 = *(long *)(lVar7 + ((lVar3 + uVar2) / 0x66) * 8);
    plVar8 = plVar6 + (uVar2 % 0x66) * 5;
    while (plVar8 != (long *)(lVar7 + ((lVar3 + uVar2) % 0x66) * 0x28)) {
      if (((int)plVar8[2] != 0) && ((char)plVar8[1] == '\x01')) {
        (**(code **)(*plVar8 + 0x50))(*(byte *)((long)plVar8 + 9) + 1);
        *(undefined4 *)((long)plVar8 + 0xc) = 0;
        plVar6 = (long *)*plVar5;
      }
      plVar8 = plVar8 + 5;
      if ((long)plVar8 - (long)plVar6 == 0xff0) {
        plVar5 = plVar5 + 1;
        plVar6 = (long *)*plVar5;
        plVar8 = plVar6;
      }
    }
  }
  FUN_10a322c4c(plVar4 + 2);
  return plVar4;
}



/* Entry: 10a30b5e4; end: 10a30b6c7;  */

long FUN_10a30b5e4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  lVar4 = *(long *)(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != lVar4) {
    uVar2 = *(ulong *)(param_1 + 0x30);
    plVar5 = (long *)(lVar4 + (uVar2 / 0x66) * 8);
    plVar3 = (long *)*plVar5;
    uVar1 = *(long *)(param_1 + 0x38) + uVar2;
    lVar4 = *(long *)(lVar4 + (uVar1 / 0x66) * 8);
    plVar6 = plVar3 + (uVar2 % 0x66) * 5;
    while (plVar6 != (long *)(lVar4 + (uVar1 % 0x66) * 0x28)) {
      if (((int)plVar6[2] != 0) && ((char)plVar6[1] == '\x01')) {
        (**(code **)(*plVar6 + 0x50))(*(byte *)((long)plVar6 + 9) + 1);
        *(undefined4 *)((long)plVar6 + 0xc) = 0;
        plVar3 = (long *)*plVar5;
      }
      plVar6 = plVar6 + 5;
      if ((long)plVar6 - (long)plVar3 == 0xff0) {
        plVar5 = plVar5 + 1;
        plVar3 = (long *)*plVar5;
        plVar6 = plVar3;
      }
    }
  }
  FUN_10a322c4c(param_1 + 0x10);
  return param_1;
}



/* Entry: 10a30b6c8; end: 10a30b80b;  */

long * FUN_10a30b6c8(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  
  if (*(char *)(param_1 + 1) == '\x01') {
    lVar1 = param_1[3];
    if (param_1[4] != lVar1) {
      uVar4 = param_1[6];
      plVar3 = (long *)(lVar1 + (uVar4 / 0x66) * 8);
      plVar5 = (long *)*plVar3;
      plVar6 = plVar5 + (uVar4 % 0x66) * 5;
      while (plVar6 != (long *)(*(long *)(lVar1 + ((param_1[7] + uVar4) / 0x66) * 8) +
                               ((param_1[7] + uVar4) % 0x66) * 0x28)) {
        if ((char)plVar6[4] != '\x01') {
          *(undefined1 *)(plVar6 + 4) = 1;
          return plVar6;
        }
        plVar6 = plVar6 + 5;
        if ((long)plVar6 - (long)plVar5 == 0xff0) {
          plVar3 = plVar3 + 1;
          plVar5 = (long *)*plVar3;
          plVar6 = plVar5;
        }
      }
    }
    FUN_10a30b80c(param_1 + 2,*param_1);
    if (param_1[7] == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a30b80c);
      (*pcVar2)();
    }
    uVar4 = (param_1[7] + param_1[6]) - 1;
    plVar6 = (long *)(*(long *)(param_1[3] + (uVar4 / 0x66) * 8) + (uVar4 % 0x66) * 0x28);
    *(undefined1 *)(plVar6 + 4) = 1;
    if ((char)plVar6[1] == '\x01') {
      (**(code **)(*plVar6 + 0x48))(*(byte *)((long)plVar6 + 9) + 1,plVar6 + 2);
      *(undefined4 *)((long)plVar6 + 0xc) = 1;
    }
  }
  else {
    plVar6 = (long *)0x0;
  }
  return plVar6;
}



/* Entry: 10a30b80c; end: 10a30bbb7;  */

long FUN_10a30b80c(ulong *param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  
  puVar18 = (undefined8 *)param_1[1];
  puVar12 = (undefined8 *)param_1[2];
  uVar9 = (long)puVar12 - (long)puVar18;
  uVar8 = 0;
  if (uVar9 != 0) {
    uVar8 = ((long)puVar12 - (long)puVar18 >> 3) * 0x66 - 1;
  }
  uVar2 = param_1[4];
  uVar10 = param_1[5] + uVar2;
  if (uVar8 != uVar10) goto LAB_10a30bae0;
  if (uVar2 < 0x66) {
    puVar14 = (undefined8 *)param_1[3];
    puVar16 = (undefined8 *)*param_1;
    if (uVar9 < (ulong)((long)puVar14 - (long)puVar16)) {
      uVar5 = 0xff0;
      puVar7 = param_2;
      __Znwm();
      if (puVar14 == puVar12) {
        if (puVar18 == puVar16) {
          uVar8 = (long)puVar14 - (long)puVar18 >> 2;
          if (puVar12 == puVar18) {
            uVar8 = 1;
          }
          lVar15 = uVar8 * 2;
          FUN_10a322e2c();
          puVar18 = (undefined8 *)(uVar8 + (lVar15 + 6U & 0xfffffffffffffff8));
          lVar15 = param_1[2] - (long)param_1[1];
          puVar12 = puVar18;
          if (lVar15 != 0) {
            puVar12 = (undefined8 *)((long)puVar18 + lVar15);
            puVar14 = (undefined8 *)param_1[1];
            puVar16 = puVar18;
            do {
              *puVar16 = *puVar14;
              lVar15 = lVar15 + -8;
              puVar14 = puVar14 + 1;
              puVar16 = puVar16 + 1;
            } while (lVar15 != 0);
          }
          uVar9 = *param_1;
          *param_1 = uVar8;
          param_1[1] = (ulong)puVar18;
          param_1[2] = (ulong)puVar12;
          param_1[3] = uVar8 + (long)puVar7 * 8;
          if (uVar9 != 0) {
            __ZdlPv(uVar9);
            puVar18 = (undefined8 *)param_1[1];
          }
        }
        puVar18[-1] = uVar5;
        uVar8 = param_1[1];
        param_1[1] = uVar8 - 8;
        uVar5 = *(undefined8 *)(uVar8 - 8);
        param_1[1] = uVar8;
        goto LAB_10a30b874;
      }
      *puVar12 = uVar5;
      param_1[2] = param_1[2] + 8;
    }
    else {
      puVar7 = (undefined8 *)((long)puVar14 - (long)puVar16 >> 2);
      if (puVar14 == puVar16) {
        puVar7 = (undefined8 *)0x1;
      }
      puVar17 = param_2;
      FUN_10a322e2c();
      uVar5 = 0xff0;
      puVar6 = puVar17;
      __Znwm();
      puVar14 = (undefined8 *)((long)puVar7 + uVar9);
      puVar16 = puVar7 + (long)puVar17;
      puVar4 = puVar7;
      if (uVar9 == (long)puVar17 * 8) {
        if ((long)uVar9 < 1) {
          puVar14 = (undefined8 *)((long)puVar14 - (long)puVar7 >> 2);
          if (puVar12 == puVar18) {
            puVar14 = (undefined8 *)0x1;
          }
          puVar4 = puVar14;
          FUN_10a322e2c();
          puVar14 = puVar4 + ((ulong)puVar14 >> 2);
          puVar16 = puVar4 + (long)puVar6;
          if (puVar7 != (undefined8 *)0x0) {
            __ZdlPv(puVar7);
          }
        }
        else {
          lVar15 = ((long)puVar14 - (long)puVar7 >> 3) + 1;
          puVar14 = puVar14 + -((ulong)(lVar15 - (lVar15 >> 0x3f)) >> 1);
        }
      }
      puVar18 = puVar14 + 1;
      *puVar14 = uVar5;
      puVar12 = (undefined8 *)param_1[2];
      puVar7 = puVar4;
      if (puVar12 != (undefined8 *)param_1[1]) {
        do {
          puVar4 = puVar7;
          puVar17 = puVar14;
          if (puVar14 == puVar7) {
            if (puVar18 < puVar16) {
              lVar15 = ((long)puVar16 - (long)puVar18 >> 3) + 1;
              lVar13 = (long)puVar18 - (long)puVar7;
              lVar3 = (long)puVar18 - (long)puVar7;
              puVar18 = puVar18 + ((ulong)(lVar15 - (lVar15 >> 0x3f)) >> 1);
              puVar17 = (undefined8 *)((long)puVar18 - lVar13);
              if (lVar3 != 0) {
                _memmove(puVar17,puVar14,lVar3);
                puVar6 = puVar14;
              }
            }
            else {
              puVar17 = (undefined8 *)((long)puVar16 - (long)puVar7 >> 2);
              if ((long)puVar16 - (long)puVar7 == 0) {
                puVar17 = (undefined8 *)0x1;
              }
              puVar4 = puVar17;
              FUN_10a322e2c();
              puVar17 = (undefined8 *)((long)puVar4 + ((long)puVar17 * 2 + 6U & 0xfffffffffffffff8))
              ;
              lVar15 = (long)puVar18 - (long)puVar7;
              puVar18 = puVar17;
              if (lVar15 != 0) {
                puVar18 = (undefined8 *)((long)puVar17 + lVar15);
                puVar16 = puVar17;
                do {
                  *puVar16 = *puVar14;
                  lVar15 = lVar15 + -8;
                  puVar16 = puVar16 + 1;
                  puVar14 = puVar14 + 1;
                } while (lVar15 != 0);
              }
              puVar16 = puVar4 + (long)puVar6;
              if (puVar7 != (undefined8 *)0x0) {
                __ZdlPv(puVar7);
              }
            }
          }
          puVar12 = puVar12 + -1;
          puVar14 = puVar17 + -1;
          *puVar14 = *puVar12;
          puVar7 = puVar4;
        } while (puVar12 != (undefined8 *)param_1[1]);
      }
      uVar8 = *param_1;
      *param_1 = (ulong)puVar4;
      param_1[1] = (ulong)puVar14;
      param_1[2] = (ulong)puVar18;
      param_1[3] = (ulong)puVar16;
      if (uVar8 != 0) {
        __ZdlPv();
      }
    }
  }
  else {
    param_1[4] = uVar2 - 0x66;
    uVar5 = *puVar18;
    param_1[1] = (ulong)(puVar18 + 1);
LAB_10a30b874:
    FUN_10a322d30(param_1,uVar5);
  }
  puVar18 = (undefined8 *)param_1[1];
  uVar10 = param_1[5] + param_1[4];
LAB_10a30bae0:
  puVar11 = (ulong *)(puVar18[uVar10 / 0x66] + (uVar10 % 0x66) * 0x28);
  *puVar11 = (ulong)param_2;
  *(undefined2 *)(puVar11 + 1) = *(undefined2 *)((long)param_2 + 0x215);
  *(undefined8 *)((long)puVar11 + 0x14) = 0;
  *(undefined8 *)((long)puVar11 + 0xc) = 0;
  *(undefined8 *)((long)puVar11 + 0x19) = 0;
  uVar8 = param_1[5];
  param_1[5] = uVar8 + 1;
  uVar8 = param_1[4] + uVar8 + 1;
  plVar1 = (long *)(param_1[1] + (uVar8 / 0x66) * 8);
  lVar13 = *plVar1;
  lVar15 = 0;
  if (param_1[2] != param_1[1]) {
    lVar15 = lVar13 + (uVar8 % 0x66) * 0x28;
  }
  if (lVar15 == lVar13) {
    lVar15 = plVar1[-1] + 0xff0;
  }
  return lVar15 + -0x28;
}



/* Entry: 10a30bbb8; end: 10a30bcbf;  */

void FUN_10a30bbb8(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined **ppuVar5;
  
  plVar2 = (long *)0x10;
  __Znwm();
  *plVar2 = 0;
  *(undefined1 *)(plVar2 + 1) = 0;
  *param_1 = plVar2;
  puVar3 = (undefined8 *)0x20;
  __Znwm();
  *puVar3 = &PTR_FUN_110bc3d88;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = plVar2;
  param_1[1] = puVar3;
  FUN_10a301b2c();
  iVar1 = (int)puVar3;
  if (iVar1 != 0) {
    FUN_10ad4bd78();
    if (iVar1 < 3000) {
      lVar4 = 0x9117;
      _glFenceSyncAPPLE(0x9117,0);
    }
    else {
      lVar4 = 0x9117;
      _glFenceSync(0x9117,0);
    }
    if (lVar4 != 0) {
      _glFlush();
      goto LAB_10a30bc68;
    }
    ppuVar5 = &PTR_PTR_1133011f0;
    FUN_10ae079a0(0,&PTR_PTR_1133011f0);
    FUN_10ae07cd4(ppuVar5,&PTR_PTR_1133011f0);
  }
  _glFinish();
  lVar4 = 0;
LAB_10a30bc68:
  *plVar2 = lVar4;
  *(undefined1 *)(plVar2 + 1) = 0;
  return;
}



/* Entry: 10a30bcc0; end: 10a30c09b;  */

undefined ** FUN_10a30bcc0(undefined **param_1)

{
  undefined **ppuVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  undefined8 *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined8 *puVar13;
  undefined8 *extraout_x8;
  undefined *puVar14;
  undefined *puVar15;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined8 *puStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar10 = &PTR___tlv_bootstrap_11340de28;
  (*(code *)PTR___tlv_bootstrap_11340de28)();
  puStack_a0 = (undefined8 *)&UNK_10f63b699;
  puStack_98 = (undefined *)0x28;
  if (*ppuVar10 == (undefined *)0x0) {
    FUN_10a0edfc4(&puStack_a0);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a30c004);
    (*pcVar5)();
  }
  *param_1 = *ppuVar10;
  ppuVar8 = (undefined8 **)(param_1 + 1);
  *ppuVar8 = (undefined8 *)0x0;
  ppuVar12 = param_1 + 2;
  *ppuVar12 = (undefined *)0x0;
  param_1[3] = (undefined *)0x0;
  ppuVar10 = &PTR_PTR_113301300;
  FUN_10ae079a0(0,&PTR_PTR_113301300);
  FUN_10ae07cd4(ppuVar10,&PTR_PTR_113301300);
  ppuVar10 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  puStack_b0 = *ppuVar10;
  ppuVar6 = (undefined8 **)0x1d0;
  __Znwm();
  ppuVar7 = ppuVar6;
  FUN_10a322f64();
  puStack_a0 = (undefined8 *)0x0;
  puVar13 = *ppuVar8;
  *ppuVar8 = ppuVar6;
  if (puVar13 != (undefined8 *)0x0) {
    FUN_10a31ed38(ppuVar8);
    puVar13 = puStack_a0;
    puStack_a0 = (undefined8 *)0x0;
    ppuVar7 = ppuVar8;
    if (puVar13 != (undefined8 *)0x0) {
      ppuVar7 = &puStack_a0;
      FUN_10a31ed38(ppuVar7);
    }
  }
  _qos_class_self();
  FUN_109d1d570(&puStack_a0,&UNK_10e4aa728,ppuVar7,0xfffffff2);
  puVar13 = (undefined8 *)0x48;
  __Znwm();
  puVar14 = puStack_98;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = &PTR_DAT_110b3f038;
  puStack_88 = puVar13 + 3;
  *puStack_88 = &PTR_FUN_110b3ef60;
  puVar13[4] = puStack_88;
  puVar13[5] = 0;
  puVar13[6] = puStack_98;
  puVar13[7] = puStack_a0;
  puVar13[8] = puStack_98;
  if (puStack_98 != (undefined *)0x0) {
    _dispatch_retain(puStack_98);
    _dispatch_release(puVar14);
  }
  puStack_b0 = (undefined *)0x0;
  ppuStack_a8 = (undefined **)0x0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  puStack_98 = &UNK_109896774;
  ppuStack_90 = &PTR_DAT_110b17068;
  puVar9 = (undefined8 *)0x170;
  puStack_a0 = puStack_88;
  puStack_80 = puVar13;
  __Znwm();
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &PTR_FUN_110bc42c8;
  ppuVar10 = (undefined **)0x18;
  __Znwm();
  puVar13 = puVar9 + 3;
  *ppuVar10 = (undefined *)&PTR_FUN_110bc4318;
  ppuVar10[1] = (undefined *)param_1;
  ppuVar10[2] = (undefined *)param_1;
  ppuStack_e0 = ppuVar10;
  FUN_109d1dddc(puVar13,&ppuStack_e0,FUN_10a322ff8,&puStack_a0,&UNK_10e4aa728,9);
  if (ppuStack_e0 != (undefined **)0x0) {
    (**(code **)(*ppuStack_e0 + 8))();
  }
  puStack_c0 = puVar13;
  ppuStack_b8 = (undefined **)puVar9;
  func_0x0001092ba41c(&puStack_a0);
  ppuVar11 = (undefined **)0xd0;
  __Znwm();
  ppuVar11[1] = (undefined *)0x0;
  ppuVar11[2] = (undefined *)0x0;
  *ppuVar11 = (undefined *)&PTR_DAT_110ae90f0;
  ppuVar10 = ppuVar11 + 3;
  puStack_c0 = (undefined8 *)0x0;
  ppuStack_b8 = (undefined **)0x0;
  puStack_98 = &UNK_109896774;
  ppuStack_90 = &PTR_DAT_110b17068;
  puStack_a0 = puVar13;
  puStack_88 = puVar13;
  puStack_80 = puVar9;
  func_0x000109d18d1c(ppuVar10,&UNK_10e4aa728,9,&puStack_a0);
  func_0x0001092ba41c(&puStack_a0);
  ppuStack_e0 = ppuVar10;
  ppuStack_d8 = ppuVar11;
  func_0x00010a21ba78(ppuVar12,&ppuStack_e0);
  ppuVar11 = ppuStack_d8;
  if (ppuStack_d8 != (undefined **)0x0) {
    ppuVar1 = ppuStack_d8 + 1;
    do {
      puVar14 = *ppuVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar4) {
        *ppuVar1 = puVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar14 == (undefined *)0x0) {
      (**(code **)(*ppuStack_d8 + 0x10))(ppuStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar12 = ppuVar11;
    }
  }
  ppuVar11 = ppuStack_b8;
  if (ppuStack_b8 != (undefined **)0x0) {
    ppuVar1 = ppuStack_b8 + 1;
    do {
      puVar14 = *ppuVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar4) {
        *ppuVar1 = puVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar14 == (undefined *)0x0) {
      (**(code **)(*ppuStack_b8 + 0x10))(ppuStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar12 = ppuVar11;
    }
  }
  ppuVar11 = ppuStack_a8;
  if (ppuStack_a8 != (undefined **)0x0) {
    ppuVar1 = ppuStack_a8 + 1;
    do {
      puVar14 = *ppuVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar4) {
        *ppuVar1 = puVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar14 == (undefined *)0x0) {
      (**(code **)(*ppuStack_a8 + 0x10))(ppuStack_a8);
      ppuVar12 = ppuVar11;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    func_0x00010a06e274(&puStack_c0);
    func_0x00010a06e274(&puStack_b0);
    func_0x00010a061620(ppuVar11);
    puVar14 = *ppuVar10;
    *ppuVar10 = (undefined *)0x0;
    if (puVar14 != (undefined *)0x0) {
      FUN_10a31ed38(ppuVar10);
    }
    __Unwind_Resume(ppuVar12);
    ppuVar10 = &PTR___tlv_bootstrap_11340de10;
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    if ((undefined8 *)*ppuVar10 == (undefined8 *)0x0) {
      *extraout_x8 = 0;
      extraout_x8[1] = 0;
    }
    else {
      ppuVar10 = *(undefined ***)*ppuVar10;
      FUN_10a09418c();
      puVar14 = ppuVar10[1];
      puVar15 = *ppuVar10;
      extraout_x8[1] = ppuVar10[1];
      *extraout_x8 = puVar15;
      if (puVar14 != (undefined *)0x0) {
        plVar2 = (long *)(puVar14 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = *plVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    return ppuVar10;
  }
  return param_1;
}



/* Entry: 10a30c09c; end: 10a30c103;  */

void FUN_10a30c09c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  ppuVar4 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  if ((long *)*ppuVar4 == (long *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar5 = *(undefined8 **)*ppuVar4;
    FUN_10a09418c();
    lVar6 = puVar5[1];
    uVar7 = *puVar5;
    param_1[1] = puVar5[1];
    *param_1 = uVar7;
    if (lVar6 != 0) {
      plVar1 = (long *)(lVar6 + 8);
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



/* Entry: 10a30c104; end: 10a30c46b;  */

void FUN_10a30c104(undefined8 param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  code *pcStack_60;
  code *pcStack_58;
  long *plStack_50;
  undefined8 *puStack_48;
  
  if ((*(long *)(param_2 + 8) != 0) &&
     (puVar7 = *(undefined8 **)(param_2 + 0x10), puVar7 != (undefined8 *)0x0)) {
    plVar8 = (long *)puVar7[2];
    plStack_70 = (long *)0x0;
    plStack_68 = (long *)0x0;
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0xc0;
      __Znwm();
      plVar8[2] = 0;
      plVar8[1] = 0x200000006;
      *(undefined2 *)(plVar8 + 3) = 4;
      plVar8[5] = 0;
      plVar8[4] = 0;
      plVar8[7] = 0;
      plVar8[6] = 0;
      plVar8[9] = 0;
      plVar8[8] = 0;
      plVar8[0xb] = 0;
      plVar8[10] = 0;
      plVar8[0xd] = 0;
      plVar8[0xc] = 0;
      plVar8[0xf] = 0;
      plVar8[0xe] = 0;
      plVar8[0x10] = 0;
      plVar8[0x11] = (long)(plVar8 + 3);
      plVar8[0x12] = 0;
      *(undefined2 *)(plVar8 + 0x13) = 0;
      *plVar8 = (long)&PTR_DAT_110bc3e20;
      plStack_78 = plVar8 + 0x14;
      *plStack_78 = param_2;
      *(undefined1 *)(plVar8 + 0x16) = 1;
      plVar8[0x17] = 0;
      pcStack_60 = FUN_10a31ea6c;
      plStack_70 = plVar8;
      plStack_68 = plVar8;
    }
    else {
      pcStack_58 = (code *)0x0;
      (**(code **)(*plVar8 + 0x28))(plVar8,0,&pcStack_58);
      if (pcStack_58 != (code *)0x0) {
        func_0x0001092af97c(&pcStack_58);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a30c3f8);
        (*pcVar4)();
      }
      plVar5 = (long *)0xc8;
      __Znwm();
      plVar5[2] = 0;
      plVar5[1] = 0x200000006;
      *(undefined2 *)(plVar5 + 3) = 4;
      plVar5[5] = 0;
      plVar5[4] = 0;
      plVar5[7] = 0;
      plVar5[6] = 0;
      plVar5[9] = 0;
      plVar5[8] = 0;
      plVar5[0xb] = 0;
      plVar5[10] = 0;
      plVar5[0xd] = 0;
      plVar5[0xc] = 0;
      plVar5[0xf] = 0;
      plVar5[0xe] = 0;
      plVar5[0x10] = 0;
      plVar5[0x11] = (long)(plVar5 + 3);
      plVar5[0x12] = 0;
      *(undefined2 *)(plVar5 + 0x13) = 0;
      plVar5[0x14] = param_2;
      *plVar5 = (long)&PTR_FUN_110bc3de8;
      *(undefined1 *)(plVar5 + 0x16) = 1;
      plVar5[0x17] = 0;
      plVar5[0x18] = (long)plVar8;
      if (plStack_70 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_70 + 1);
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar6 & 0x1fffffffc) == 4) {
          do {
            uVar6 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar6 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar6 - 1 == 0) {
            (**(code **)(*plStack_70 + 8))();
          }
        }
      }
      plStack_70 = plVar5;
      if (plStack_68 != (long *)0x0) {
        func_0x0001092b4274(&plStack_68);
      }
      pcStack_60 = FUN_10a31ea3c;
      plStack_78 = plVar5 + 0x14;
      plStack_68 = plVar5;
      __ZNSt13exception_ptrD1Ev(&pcStack_58);
    }
    plVar8 = plStack_78;
    if (plStack_78[3] != 0) {
      func_0x0001092b4274();
    }
    plVar8[3] = (long)plStack_68;
    plStack_68 = (long *)0x0;
    pcStack_58 = pcStack_60;
    plStack_50 = plStack_78;
    puStack_48 = puVar7;
    (**(code **)*puVar7)(puVar7,&pcStack_58);
    plStack_80 = plStack_70;
    plStack_70 = (long *)0x0;
    if (plStack_68 != (long *)0x0) {
      func_0x0001092b4274(&plStack_68);
      if (plStack_70 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_70 + 1);
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar6 & 0x1fffffffc) == 4) {
          do {
            uVar6 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar6 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar6 - 1 == 0) {
            (**(code **)(*plStack_70 + 8))();
          }
        }
      }
    }
    FUN_109d1a244(&plStack_80);
    FUN_10a09b344(&plStack_80);
    if (plStack_80 != (long *)0x0) {
      puVar1 = (ulong *)(plStack_80 + 1);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plStack_80 + 8))();
        }
      }
    }
  }
  if (*(long **)(param_2 + 0x10) == (long *)0x0) {
    FUN_109d1b124(param_1);
  }
  else {
    (**(code **)(**(long **)(param_2 + 0x10) + 0x38))(param_1);
  }
  return;
}



/* Entry: 10a30c46c; end: 10a30c513;  */

long FUN_10a30c46c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long *plStack_28;
  
  FUN_10a30c104(&plStack_28);
  FUN_109d1a244(&plStack_28);
  if (plStack_28 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_28 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plStack_28 + 8))();
      }
    }
  }
  func_0x00010a225c4c(param_1 + 0x10);
  func_0x00010a061620(param_1 + 0x10);
  lVar4 = *(long *)(param_1 + 8);
  *(long *)(param_1 + 8) = 0;
  if (lVar4 != 0) {
    FUN_10a31ed38();
  }
  return param_1;
}



/* Entry: 10a30c514; end: 10a30c56f;  */

bool FUN_10a30c514(ulong param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1;
  if (iVar1 < 0) {
    ___maskrune(param_1,0x500);
    uVar2 = (uint)param_1;
  }
  else {
    uVar2 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 + (param_1 & 0xffffffff) * 4 + 0x3c) & 0x500
    ;
  }
  return (iVar1 == 0x5f || iVar1 == 0x2e) || uVar2 != 0;
}



/* Entry: 10a30c570; end: 10a30c94b;  */

long * FUN_10a30c570(long *param_1,uint *param_2,long param_3,long param_4,ulong param_5)

{
  uint uVar1;
  undefined1 *puVar2;
  long lVar3;
  byte bVar4;
  code *pcVar5;
  bool bVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  byte *pbVar19;
  uint **ppuVar20;
  undefined8 *puVar21;
  uint *puVar22;
  ulong unaff_x20;
  undefined8 unaff_x21;
  uint *unaff_x22;
  undefined8 *puVar23;
  uint *unaff_x23;
  uint *unaff_x24;
  uint *puVar24;
  char *pcVar25;
  ulong uStack_e0;
  uint *apuStack_d8 [2];
  long lStack_c8;
  uint *puStack_c0;
  uint *puStack_b8;
  uint *puStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  long *plStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  uint uStack_74;
  uint *puStack_70;
  uint *puStack_68;
  
  param_1[1] = *param_1;
  param_1[4] = param_1[3];
  puStack_68 = param_2;
  if (0 < param_3) {
    puVar24 = (uint *)((long)param_2 + param_3);
    unaff_x21 = 10;
    unaff_x22 = (uint *)0x5;
    unaff_x20 = param_5;
    uStack_74 = (uint)param_5;
    puStack_70 = puVar24;
    do {
      func_0x00010a10058c(&puStack_68);
      unaff_x23 = puStack_68;
      iVar17 = (int)(char)*puStack_68;
      if ((char)*puStack_68 == '\0') {
        uVar15 = 0x12;
      }
      else {
        FUN_10a30c514();
        uVar7 = (ulong)(char)*puStack_68;
        if (iVar17 == 0) {
          if ((ulong)(param_1[0xd] - param_1[0xc] >> 1) <= uVar7) goto LAB_10a30c92c;
          pcVar25 = (char *)(param_1[0xc] + uVar7 * 2);
          pbVar19 = (byte *)(pcVar25 + 1);
          puVar22 = (uint *)((long)puStack_68 + 1);
          if (*pcVar25 == *(char *)puVar22) {
            puVar22 = (uint *)((long)puStack_68 + 2);
          }
          else {
            if ((ulong)(param_1[10] - param_1[9]) <= uVar7) goto LAB_10a30c92c;
            pbVar19 = (byte *)(param_1[9] + uVar7);
          }
          uVar15 = (uint)*pbVar19;
          puStack_68 = puVar22;
        }
        else {
          FUN_10a30c514();
          if ((int)uVar7 != 0) {
            do {
              if ((byte)*puStack_68 < 0x21) break;
              uVar7 = (ulong)*(char *)((long)puStack_68 + 1);
              puStack_68 = (uint *)((long)puStack_68 + 1);
              FUN_10a30c514();
            } while ((uVar7 & 1) != 0);
          }
          if ((long)puStack_68 - (long)unaff_x23 < 0) goto LAB_10a30c92c;
          if ((long)puStack_68 - (long)unaff_x23 == 7) {
            uVar15 = (*unaff_x23 & 0xff00ff00) >> 8 | (*unaff_x23 & 0xff00ff) << 8;
            uVar16 = uVar15 >> 0x10 | uVar15 << 0x10;
            uVar15 = 0x64656669;
            if (uVar16 == 0x64656669) {
              uVar15 = (*(uint *)((long)unaff_x23 + 3) & 0xff00ff00) >> 8 |
                       (*(uint *)((long)unaff_x23 + 3) & 0xff00ff) << 8;
              uVar16 = uVar15 >> 0x10 | uVar15 << 0x10;
              uVar15 = 0x696e6564;
              if (uVar16 != 0x696e6564) goto LAB_10a30c6e4;
              iVar17 = 0;
            }
            else {
LAB_10a30c6e4:
              iVar17 = 1;
              if (uVar16 < uVar15) {
                iVar17 = -1;
              }
            }
            uVar15 = 9;
            if (iVar17 != 0) {
              uVar15 = 0x12;
            }
          }
          else {
            uVar15 = 0x12;
          }
        }
      }
      lVar13 = (long)puStack_68 - (long)unaff_x23;
      if (lVar13 < 0) goto LAB_10a30c92c;
      if (uVar15 == 0x12) {
        if (((puStack_68 == unaff_x23) || ((long)(char)*unaff_x23 < 0)) ||
           ((*(uint *)(PTR___DefaultRuneLocale_11034bcf8 + (long)(char)*unaff_x23 * 4 + 0x3c) >> 10
            & 1) == 0)) {
          lVar13 = param_4;
          FUN_10a31f1f0(param_4,unaff_x23);
          puVar11 = (undefined8 *)&UNK_10e4aae98;
          if (lVar13 != 0) {
            puVar11 = (undefined8 *)(lVar13 + 0x20);
          }
          unaff_x24 = (uint *)*puVar11;
        }
        else {
          unaff_x24 = (uint *)0x0;
          puVar22 = unaff_x23;
          do {
            unaff_x23 = (uint *)((long)puVar22 + 1);
            unaff_x24 = (uint *)((long)(char)*puVar22 + (long)unaff_x24 * 10 + -0x30);
            lVar13 = lVar13 + -1;
            puVar22 = unaff_x23;
          } while (lVar13 != 0);
        }
        param_2 = unaff_x24;
        FUN_10a30cc58(param_1);
        unaff_x22 = (uint *)0x12;
        if (((int)unaff_x20 != 0) && (unaff_x24 == (uint *)0x7fffffffffffffff)) {
          return (long *)0x7fffffffffffffff;
        }
      }
      else {
        bVar6 = 0xfd < ((int)unaff_x22 - 0x13U & 0xff);
        uVar16 = 5;
        if (uVar15 != 0 || bVar6) {
          uVar16 = uVar15;
        }
        uVar1 = 4;
        if (uVar15 != 1 || bVar6) {
          uVar1 = uVar16;
        }
        unaff_x22 = (uint *)(ulong)uVar1;
        if (*(int *)((long)param_1 + (long)unaff_x22 * 4 + 0x478) != 1) {
          param_2 = unaff_x22;
          FUN_10a30c94c(param_1);
        }
        if (uVar1 == 0x11) {
          if ((param_1[3] == param_1[4]) ||
             (pcVar25 = (char *)(param_1[4] + -1), *pcVar25 != '\x10')) {
            FUN_10a00946c(&UNK_10f64d911);
LAB_10a30c93c:
            FUN_10a31efb4();
            goto LAB_10a30c940;
          }
          unaff_x22 = (uint *)0x11;
        }
        else {
          puVar2 = (undefined1 *)param_1[4];
          if (puVar2 < (undefined1 *)param_1[5]) {
            pcVar25 = puVar2 + 1;
            *puVar2 = (char)uVar1;
          }
          else {
            unaff_x23 = (uint *)param_1[3];
            unaff_x24 = (uint *)(puVar2 + -(long)unaff_x23);
            uVar7 = (long)unaff_x24 + 1;
            if ((long)uVar7 < 0) goto LAB_10a30c93c;
            uVar14 = param_1[5] - (long)unaff_x23;
            uVar18 = uVar14 * 2;
            if (uVar18 < uVar7 || uVar18 - uVar7 == 0) {
              uVar18 = uVar7;
            }
            if (0x3ffffffffffffffe < uVar14) {
              uVar18 = 0x7fffffffffffffff;
            }
            if (uVar18 == 0) {
              uVar7 = 0;
            }
            else {
              uVar7 = uVar18;
              __Znwm();
            }
            pcVar25 = (undefined1 *)(uVar7 + (long)unaff_x24) + 1;
            *(undefined1 *)(uVar7 + (long)unaff_x24) = (char)uVar1;
            param_2 = unaff_x23;
            _memcpy(uVar7,unaff_x23,unaff_x24);
            param_1[3] = uVar7;
            param_1[4] = (long)pcVar25;
            param_1[5] = uVar7 + uVar18;
            if (unaff_x23 != (uint *)0x0) {
              __ZdlPv(unaff_x23);
            }
            unaff_x20 = (ulong)uStack_74;
            puVar24 = puStack_70;
          }
        }
        param_1[4] = (long)pcVar25;
      }
      func_0x00010a10058c(&puStack_68);
    } while (puStack_68 < puVar24);
  }
  param_2 = (uint *)0x11;
  FUN_10a30c94c(param_1);
  plVar8 = (long *)*param_1;
  if ((param_1[1] - (long)plVar8 == 8) && (param_1[3] == param_1[4])) {
    if (plVar8 != (long *)param_1[1]) {
      plVar9 = (long *)0x0;
      if ((long *)*plVar8 != (long *)0x7fffffffffffffff) {
        plVar9 = (long *)*plVar8;
      }
      return plVar9;
    }
LAB_10a30c92c:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a30c930);
    (*pcVar5)();
  }
LAB_10a30c940:
  plVar8 = (long *)&UNK_10f64d959;
  FUN_10a00946c();
  pcStack_88 = FUN_10a30c94c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = plVar8[4];
  plVar9 = plVar8;
  puVar12 = (ulong *)param_2;
  puStack_c0 = unaff_x24;
  puStack_b8 = unaff_x23;
  puStack_b0 = unaff_x22;
  uStack_a8 = unaff_x21;
  uStack_a0 = unaff_x20;
  plStack_98 = param_1;
  puStack_90 = &stack0xfffffffffffffff0;
  if (plVar8[3] != lVar13) {
    do {
      bVar4 = *(byte *)(lVar13 + -1);
      uVar7 = (ulong)bVar4;
      if (*(int *)((long)plVar8 + uVar7 * 4 + 0x78) <
          *(int *)((long)plVar8 + ((ulong)param_2 & 0xffffffff) * 4 + 0x78)) break;
      uVar15 = *(uint *)((long)plVar8 + uVar7 * 4 + 0x478);
      uVar18 = (ulong)uVar15;
      if (0 < (int)uVar15) {
        puVar11 = (undefined8 *)*plVar8;
        ppuVar20 = apuStack_d8;
        puVar23 = (undefined8 *)plVar8[1];
        do {
          puVar21 = puVar23 + -1;
          if (puVar23 == puVar11) {
            FUN_10a00946c(&UNK_10f64ed13);
            goto LAB_10a30cc4c;
          }
          puVar22 = (uint *)*puVar21;
          plVar8[1] = (long)puVar21;
          puVar24 = (uint *)0x0;
          if (puVar22 != (uint *)0x7fffffffffffffff || bVar4 == 9) {
            puVar24 = puVar22;
          }
          *ppuVar20 = puVar24;
          uVar18 = uVar18 - 1;
          ppuVar20 = ppuVar20 + 1;
          puVar23 = puVar21;
        } while (uVar18 != 0);
      }
      switch(uVar7) {
      case 0:
        uStack_e0 = (long)apuStack_d8[0] + (long)apuStack_d8[1];
        plVar9 = plVar8;
        puVar12 = &uStack_e0;
        FUN_10a31f0e4();
        break;
      case 1:
        uStack_e0 = (long)apuStack_d8[1] - (long)apuStack_d8[0];
        plVar9 = plVar8;
        puVar12 = &uStack_e0;
        FUN_10a31f0e4();
        break;
      case 2:
        uStack_e0 = (long)apuStack_d8[0] * (long)apuStack_d8[1];
        plVar9 = plVar8;
        puVar12 = &uStack_e0;
        FUN_10a31f0e4();
        break;
      case 3:
        uStack_e0 = 0;
        if (apuStack_d8[0] != (uint *)0x0) {
          uStack_e0 = (long)apuStack_d8[1] / (long)apuStack_d8[0];
        }
        plVar9 = plVar8;
        puVar12 = &uStack_e0;
        FUN_10a31f0e4();
        break;
      case 4:
        uStack_e0 = -(long)apuStack_d8[0];
        plVar9 = plVar8;
        puVar12 = &uStack_e0;
        FUN_10a31f0e4();
        break;
      case 5:
        plVar9 = plVar8;
        puVar12 = (ulong *)apuStack_d8[0];
        FUN_10a30cc58();
        break;
      case 6:
        uStack_e0 = (ulong)(apuStack_d8[0] == (uint *)0x0);
        plVar9 = plVar8;
        puVar12 = &uStack_e0;
        FUN_10a31f0e4();
        break;
      case 7:
        uStack_e0 = (ulong)(apuStack_d8[0] != (uint *)0x0 && apuStack_d8[1] != (uint *)0x0);
        plVar9 = plVar8;
        puVar12 = &uStack_e0;
        FUN_10a31f0e4();
        break;
      case 8:
        uStack_e0 = (ulong)(apuStack_d8[0] != (uint *)0x0 || apuStack_d8[1] != (uint *)0x0);
        plVar9 = plVar8;
        puVar12 = &uStack_e0;
        FUN_10a31f0e4();
        break;
      case 9:
        uStack_e0 = (ulong)(apuStack_d8[0] != (uint *)0x7fffffffffffffff);
        plVar9 = plVar8;
        puVar12 = &uStack_e0;
        FUN_10a31f0e4();
        break;
      case 10:
        uStack_e0 = (ulong)((long)apuStack_d8[0] < (long)apuStack_d8[1]);
        plVar9 = plVar8;
        puVar12 = &uStack_e0;
        FUN_10a31f0e4();
        break;
      case 0xb:
        uStack_e0 = (ulong)((long)apuStack_d8[0] <= (long)apuStack_d8[1]);
        plVar9 = plVar8;
        puVar12 = &uStack_e0;
        FUN_10a31f0e4();
        break;
      case 0xc:
        uStack_e0 = (ulong)((long)apuStack_d8[1] < (long)apuStack_d8[0]);
        plVar9 = plVar8;
        puVar12 = &uStack_e0;
        FUN_10a31f0e4();
        break;
      case 0xd:
        uStack_e0 = (ulong)((long)apuStack_d8[1] <= (long)apuStack_d8[0]);
        plVar9 = plVar8;
        puVar12 = &uStack_e0;
        FUN_10a31f0e4();
        break;
      case 0xe:
        uStack_e0 = (ulong)(apuStack_d8[1] == apuStack_d8[0]);
        plVar9 = plVar8;
        puVar12 = &uStack_e0;
        FUN_10a31f0e4();
        break;
      case 0xf:
        uStack_e0 = (ulong)(apuStack_d8[1] != apuStack_d8[0]);
        plVar9 = plVar8;
        puVar12 = &uStack_e0;
        FUN_10a31f0e4();
        break;
      case 0x10:
        goto LAB_10a30cc10;
      }
      if (plVar8[3] == plVar8[4]) {
LAB_10a30cc4c:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a30cc50);
        (*pcVar5)();
      }
      lVar13 = plVar8[4] + -1;
      plVar8[4] = lVar13;
    } while (plVar8[3] != lVar13);
  }
LAB_10a30cc10:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return plVar9;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puVar11 = (undefined8 *)plVar9[1];
  if (puVar11 < (undefined8 *)plVar9[2]) {
    puVar23 = puVar11 + 1;
    *puVar11 = puVar12;
    plVar10 = plVar9;
  }
  else {
    lVar13 = (long)puVar11 - *plVar9;
    uVar7 = (lVar13 >> 3) + 1;
    if (uVar7 >> 0x3d != 0) {
      FUN_10a31f1a8();
      *plVar9 = (long)&PTR_FUN_110bc3628;
      plVar9[1] = 0;
      plVar9[2] = 0;
      plVar9[3] = 0;
      FUN_10a0cf0cc(plVar9 + 1,*puVar12,*(long *)((long)puVar12 + 8),
                    ((long)(*(long *)((long)puVar12 + 8) - *puVar12) >> 3) * -0x5555555555555555);
      puVar11 = (undefined8 *)0x30;
      __Znwm();
      puVar11[3] = 0;
      puVar11[2] = 0;
      puVar11[5] = 0;
      puVar11[4] = 0;
      puVar11[1] = 0;
      *puVar11 = 0;
      *(undefined4 *)(puVar11 + 5) = 0x3f800000;
      plVar9[4] = (long)puVar11;
      puVar11 = (undefined8 *)0x30;
      __Znwm();
      puVar11[3] = 0;
      puVar11[2] = 0;
      puVar11[5] = 0;
      puVar11[4] = 0;
      puVar11[1] = 0;
      *puVar11 = 0;
      *(undefined4 *)(puVar11 + 5) = 0x3f800000;
      plVar9[5] = (long)puVar11;
      return plVar9;
    }
    uVar14 = plVar9[2] - *plVar9;
    uVar18 = (long)uVar14 >> 2;
    if (uVar18 <= uVar7) {
      uVar18 = uVar7;
    }
    if (0x7ffffffffffffff7 < uVar14) {
      uVar18 = 0x1fffffffffffffff;
    }
    plVar8 = plVar9;
    FUN_10a31f1bc();
    lVar3 = *plVar9;
    puVar11 = (undefined8 *)((long)plVar8 + lVar13);
    lVar13 = (long)puVar11 - (plVar9[1] - lVar3);
    puVar23 = puVar11 + 1;
    *puVar11 = puVar12;
    _memcpy(lVar13,lVar3);
    plVar10 = (long *)*plVar9;
    *plVar9 = lVar13;
    plVar9[1] = (long)puVar23;
    plVar9[2] = (long)(plVar8 + uVar18);
    if (plVar10 != (long *)0x0) {
      __ZdlPv();
    }
  }
  plVar9[1] = (long)puVar23;
  return plVar10;
}



/* Entry: 10a30c94c; end: 10a30cc57;  */

long * FUN_10a30c94c(long *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long **pplVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 *puVar16;
  ulong uStack_60;
  long *aplStack_58 [2];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = param_1[4];
  plVar5 = param_1;
  puVar8 = (ulong *)param_2;
  if (param_1[3] != lVar10) {
    do {
      bVar3 = *(byte *)(lVar10 + -1);
      uVar9 = (ulong)bVar3;
      if (*(int *)((long)param_1 + uVar9 * 4 + 0x78) <
          *(int *)((long)param_1 + ((ulong)param_2 & 0xffffffff) * 4 + 0x78)) break;
      uVar2 = *(uint *)((long)param_1 + uVar9 * 4 + 0x478);
      uVar12 = (ulong)uVar2;
      if (0 < (int)uVar2) {
        puVar7 = (undefined8 *)*param_1;
        pplVar13 = aplStack_58;
        puVar16 = (undefined8 *)param_1[1];
        do {
          puVar14 = puVar16 + -1;
          if (puVar16 == puVar7) {
            FUN_10a00946c(&UNK_10f64ed13);
            goto LAB_10a30cc4c;
          }
          plVar15 = (long *)*puVar14;
          param_1[1] = (long)puVar14;
          plVar6 = (long *)0x0;
          if (plVar15 != (long *)0x7fffffffffffffff || bVar3 == 9) {
            plVar6 = plVar15;
          }
          *pplVar13 = plVar6;
          uVar12 = uVar12 - 1;
          pplVar13 = pplVar13 + 1;
          puVar16 = puVar14;
        } while (uVar12 != 0);
      }
      switch(uVar9) {
      case 0:
        uStack_60 = (long)aplStack_58[0] + (long)aplStack_58[1];
        plVar5 = param_1;
        puVar8 = &uStack_60;
        FUN_10a31f0e4();
        break;
      case 1:
        uStack_60 = (long)aplStack_58[1] - (long)aplStack_58[0];
        plVar5 = param_1;
        puVar8 = &uStack_60;
        FUN_10a31f0e4();
        break;
      case 2:
        uStack_60 = (long)aplStack_58[0] * (long)aplStack_58[1];
        plVar5 = param_1;
        puVar8 = &uStack_60;
        FUN_10a31f0e4();
        break;
      case 3:
        uStack_60 = 0;
        if (aplStack_58[0] != (long *)0x0) {
          uStack_60 = (long)aplStack_58[1] / (long)aplStack_58[0];
        }
        plVar5 = param_1;
        puVar8 = &uStack_60;
        FUN_10a31f0e4();
        break;
      case 4:
        uStack_60 = -(long)aplStack_58[0];
        plVar5 = param_1;
        puVar8 = &uStack_60;
        FUN_10a31f0e4();
        break;
      case 5:
        plVar5 = param_1;
        puVar8 = (ulong *)aplStack_58[0];
        FUN_10a30cc58();
        break;
      case 6:
        uStack_60 = (ulong)(aplStack_58[0] == (long *)0x0);
        plVar5 = param_1;
        puVar8 = &uStack_60;
        FUN_10a31f0e4();
        break;
      case 7:
        uStack_60 = (ulong)(aplStack_58[0] != (long *)0x0 && aplStack_58[1] != (long *)0x0);
        plVar5 = param_1;
        puVar8 = &uStack_60;
        FUN_10a31f0e4();
        break;
      case 8:
        uStack_60 = (ulong)(aplStack_58[0] != (long *)0x0 || aplStack_58[1] != (long *)0x0);
        plVar5 = param_1;
        puVar8 = &uStack_60;
        FUN_10a31f0e4();
        break;
      case 9:
        uStack_60 = (ulong)(aplStack_58[0] != (long *)0x7fffffffffffffff);
        plVar5 = param_1;
        puVar8 = &uStack_60;
        FUN_10a31f0e4();
        break;
      case 10:
        uStack_60 = (ulong)((long)aplStack_58[0] < (long)aplStack_58[1]);
        plVar5 = param_1;
        puVar8 = &uStack_60;
        FUN_10a31f0e4();
        break;
      case 0xb:
        uStack_60 = (ulong)((long)aplStack_58[0] <= (long)aplStack_58[1]);
        plVar5 = param_1;
        puVar8 = &uStack_60;
        FUN_10a31f0e4();
        break;
      case 0xc:
        uStack_60 = (ulong)((long)aplStack_58[1] < (long)aplStack_58[0]);
        plVar5 = param_1;
        puVar8 = &uStack_60;
        FUN_10a31f0e4();
        break;
      case 0xd:
        uStack_60 = (ulong)((long)aplStack_58[1] <= (long)aplStack_58[0]);
        plVar5 = param_1;
        puVar8 = &uStack_60;
        FUN_10a31f0e4();
        break;
      case 0xe:
        uStack_60 = (ulong)(aplStack_58[1] == aplStack_58[0]);
        plVar5 = param_1;
        puVar8 = &uStack_60;
        FUN_10a31f0e4();
        break;
      case 0xf:
        uStack_60 = (ulong)(aplStack_58[1] != aplStack_58[0]);
        plVar5 = param_1;
        puVar8 = &uStack_60;
        FUN_10a31f0e4();
        break;
      case 0x10:
        goto LAB_10a30cc10;
      }
      if (param_1[3] == param_1[4]) {
LAB_10a30cc4c:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a30cc50);
        (*pcVar4)();
      }
      lVar10 = param_1[4] + -1;
      param_1[4] = lVar10;
    } while (param_1[3] != lVar10);
  }
LAB_10a30cc10:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar5;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puVar7 = (undefined8 *)plVar5[1];
  if (puVar7 < (undefined8 *)plVar5[2]) {
    puVar16 = puVar7 + 1;
    *puVar7 = puVar8;
    plVar15 = plVar5;
  }
  else {
    lVar10 = (long)puVar7 - *plVar5;
    uVar9 = (lVar10 >> 3) + 1;
    if (uVar9 >> 0x3d != 0) {
      FUN_10a31f1a8();
      *plVar5 = (long)&PTR_FUN_110bc3628;
      plVar5[1] = 0;
      plVar5[2] = 0;
      plVar5[3] = 0;
      FUN_10a0cf0cc(plVar5 + 1,*puVar8,puVar8[1],
                    ((long)(puVar8[1] - *puVar8) >> 3) * -0x5555555555555555);
      puVar7 = (undefined8 *)0x30;
      __Znwm();
      puVar7[3] = 0;
      puVar7[2] = 0;
      puVar7[5] = 0;
      puVar7[4] = 0;
      puVar7[1] = 0;
      *puVar7 = 0;
      *(undefined4 *)(puVar7 + 5) = 0x3f800000;
      plVar5[4] = (long)puVar7;
      puVar7 = (undefined8 *)0x30;
      __Znwm();
      puVar7[3] = 0;
      puVar7[2] = 0;
      puVar7[5] = 0;
      puVar7[4] = 0;
      puVar7[1] = 0;
      *puVar7 = 0;
      *(undefined4 *)(puVar7 + 5) = 0x3f800000;
      plVar5[5] = (long)puVar7;
      return plVar5;
    }
    uVar11 = plVar5[2] - *plVar5;
    uVar12 = (long)uVar11 >> 2;
    if (uVar12 <= uVar9) {
      uVar12 = uVar9;
    }
    if (0x7ffffffffffffff7 < uVar11) {
      uVar12 = 0x1fffffffffffffff;
    }
    plVar6 = plVar5;
    FUN_10a31f1bc();
    lVar1 = *plVar5;
    puVar7 = (undefined8 *)((long)plVar6 + lVar10);
    lVar10 = (long)puVar7 - (plVar5[1] - lVar1);
    puVar16 = puVar7 + 1;
    *puVar7 = puVar8;
    _memcpy(lVar10,lVar1);
    plVar15 = (long *)*plVar5;
    *plVar5 = lVar10;
    plVar5[1] = (long)puVar16;
    plVar5[2] = (long)(plVar6 + uVar12);
    if (plVar15 != (long *)0x0) {
      __ZdlPv();
    }
  }
  plVar5[1] = (long)puVar16;
  return plVar15;
}



/* Entry: 10a30cc58; end: 10a30cd1b;  */

long * FUN_10a30cc58(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  
  puVar5 = (undefined8 *)param_1[1];
  if (puVar5 < (undefined8 *)param_1[2]) {
    puVar9 = puVar5 + 1;
    *puVar5 = param_2;
    plVar4 = param_1;
  }
  else {
    lVar8 = (long)puVar5 - *param_1;
    uVar1 = (lVar8 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_10a31f1a8();
      *param_1 = (long)&PTR_FUN_110bc3628;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      FUN_10a0cf0cc(param_1 + 1,*param_2,param_2[1],
                    (param_2[1] - *param_2 >> 3) * -0x5555555555555555);
      puVar5 = (undefined8 *)0x30;
      __Znwm();
      puVar5[3] = 0;
      puVar5[2] = 0;
      puVar5[5] = 0;
      puVar5[4] = 0;
      puVar5[1] = 0;
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 5) = 0x3f800000;
      param_1[4] = (long)puVar5;
      puVar5 = (undefined8 *)0x30;
      __Znwm();
      puVar5[3] = 0;
      puVar5[2] = 0;
      puVar5[5] = 0;
      puVar5[4] = 0;
      puVar5[1] = 0;
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 5) = 0x3f800000;
      param_1[5] = (long)puVar5;
      return param_1;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    plVar3 = param_1;
    FUN_10a31f1bc();
    lVar2 = *param_1;
    puVar5 = (undefined8 *)((long)plVar3 + lVar8);
    lVar8 = (long)puVar5 - (param_1[1] - lVar2);
    puVar9 = puVar5 + 1;
    *puVar5 = param_2;
    _memcpy(lVar8,lVar2);
    plVar4 = (long *)*param_1;
    *param_1 = lVar8;
    param_1[1] = (long)puVar9;
    param_1[2] = (long)(plVar3 + uVar7);
    if (plVar4 != (long *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar9;
  return plVar4;
}



/* Entry: 10a30cd1c; end: 10a30cdef;  */

undefined8 * FUN_10a30cd1c(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110bc3628;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10a0cf0cc(param_1 + 1,*param_2,param_2[1],(param_2[1] - *param_2 >> 3) * -0x5555555555555555);
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 5) = 0x3f800000;
  param_1[4] = puVar1;
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 5) = 0x3f800000;
  param_1[5] = puVar1;
  return param_1;
}



/* Entry: 10a30cdf0; end: 10a30ce4b;  */

undefined8 * FUN_10a30cdf0(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bc3628;
  FUN_10a323524(param_1 + 5,0);
  FUN_10a323524(param_1 + 4,0);
  puStack_28 = param_1 + 1;
  FUN_10a0426d8(&puStack_28);
  return param_1;
}



/* Entry: 10a30ce4c; end: 10a30ce4f;  */

undefined8 * FUN_10a30ce4c(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bc3628;
  FUN_10a323524(param_1 + 5,0);
  FUN_10a323524(param_1 + 4,0);
  puStack_28 = param_1 + 1;
  FUN_10a0426d8(&puStack_28);
  return param_1;
}



/* Entry: 10a30ce50; end: 10a30ce63;  */

void FUN_10a30ce50(void)

{
  FUN_10a30cdf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a30ce64; end: 10a30d0df;  */

/* WARNING: Removing unreachable block (ram,0x00010a30d234) */
/* WARNING: Removing unreachable block (ram,0x00010a30d448) */

byte * FUN_10a30ce64(long param_1,long param_2,byte *param_3,byte **param_4)

{
  int *piVar1;
  byte bVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  code *pcVar8;
  byte **ppbVar9;
  byte *pbVar10;
  byte *pbVar11;
  int *piVar12;
  byte **ppbVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  undefined **ppuVar17;
  int iVar18;
  long *plVar19;
  byte *pbVar20;
  long *plVar21;
  byte *pbVar22;
  long *plVar23;
  long *plVar24;
  byte *pbVar25;
  undefined8 uVar26;
  byte *pbVar27;
  int *piVar28;
  byte *pbVar29;
  byte *pbVar30;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  byte *pbStack_170;
  byte *pbStack_168;
  byte *pbStack_160;
  undefined8 *apuStack_158 [3];
  char cStack_140;
  undefined1 uStack_131;
  long *plStack_130;
  byte *pbStack_128;
  undefined8 uStack_120;
  undefined8 auStack_a8 [2];
  char cStack_91;
  byte *pbStack_90;
  undefined8 uStack_88;
  long lStack_80;
  byte *pbStack_70;
  undefined7 uStack_68;
  undefined1 uStack_61;
  undefined7 uStack_60;
  char cStack_59;
  undefined7 uStack_58;
  undefined1 uStack_51;
  undefined7 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((char)param_3[0x17] < '\0') {
    func_0x000107c3192c(&pbStack_70,*(undefined8 *)param_3,*(undefined8 *)(param_3 + 8));
  }
  else {
    pbStack_70 = *(byte **)param_3;
    uStack_68 = (undefined7)*(undefined8 *)(param_3 + 8);
    uStack_61 = (undefined1)((ulong)*(undefined8 *)(param_3 + 8) >> 0x38);
    uStack_60 = (undefined7)*(undefined8 *)(param_3 + 0x10);
    cStack_59 = (char)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x38);
  }
  pbStack_90 = &UNK_10f610487;
  uStack_88 = 0xb;
  param_2 = param_2 + 0x8c0;
  FUN_10a3235d4(param_2,&pbStack_90);
  if (param_2 == 0) {
    uVar26 = 0;
  }
  else {
    uVar26 = *(undefined8 *)(param_2 + 0x20);
    __ZNSt3__19to_stringEx(auStack_a8,uVar26);
    puVar14 = auStack_a8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar14,"/",1);
    uStack_88 = puVar14[1];
    pbStack_90 = (byte *)*puVar14;
    lStack_80 = puVar14[2];
    puVar14[1] = 0;
    puVar14[2] = 0;
    *puVar14 = 0;
    uVar7 = *(ulong *)(param_3 + 8);
    pbVar11 = *(byte **)param_3;
    if (-1 < (char)param_3[0x17]) {
      uVar7 = (ulong)param_3[0x17];
      pbVar11 = param_3;
    }
    ppbVar9 = &pbStack_90;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (ppbVar9,pbVar11,uVar7);
    pbVar11 = *ppbVar9;
    uStack_58 = SUB87(ppbVar9[1],0);
    uStack_51 = (undefined1)*(undefined8 *)((long)ppbVar9 + 0xf);
    uStack_50 = (undefined7)((ulong)*(undefined8 *)((long)ppbVar9 + 0xf) >> 8);
    cVar5 = *(char *)((long)ppbVar9 + 0x17);
    ppbVar9[1] = (byte *)0x0;
    ppbVar9[2] = (byte *)0x0;
    *ppbVar9 = (byte *)0x0;
    if (cStack_59 < '\0') {
      __ZdlPv(pbStack_70);
    }
    uStack_68 = uStack_58;
    uStack_61 = uStack_51;
    uStack_60 = uStack_50;
    pbStack_70 = pbVar11;
    cStack_59 = cVar5;
    if (lStack_80 < 0) {
      __ZdlPv(pbStack_90);
    }
    if (cStack_91 < '\0') {
      __ZdlPv(auStack_a8[0]);
    }
  }
  iVar18 = (int)uVar26;
  pbVar11 = param_4[1];
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    pbVar11 = (byte *)(ulong)*(byte *)((long)param_4 + 0x17);
  }
  if (pbVar11 == (byte *)0x0) {
    pbVar10 = *(byte **)(param_1 + 0x20);
    func_0x000107c2b054(&pbStack_90,"");
    ppbVar9 = &pbStack_70;
    puVar14 = (undefined8 *)(param_1 + 8);
    param_4 = &pbStack_90;
    FUN_10a30d0e0();
    pbVar11 = pbVar10;
    if (lStack_80 < 0) {
      pbVar11 = pbStack_90;
      __ZdlPv();
    }
  }
  else {
    pbVar10 = *(byte **)(param_1 + 0x28);
    ppbVar9 = &pbStack_70;
    puVar14 = (undefined8 *)(param_1 + 8);
    FUN_10a30d0e0();
    pbVar11 = pbVar10;
  }
  if (cStack_59 < '\0') {
    pbVar11 = pbStack_70;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pbVar10;
  }
  ___stack_chk_fail();
  if (lStack_80 < 0) {
    __ZdlPv(pbStack_90);
  }
  if (cStack_59 < '\0') {
    __ZdlPv(pbStack_70);
  }
  __Unwind_Resume();
  do {
    bVar2 = *pbVar11;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(pbVar11,0x10);
    if (bVar6) {
      *pbVar11 = 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  while ((bVar2 & 1) != 0) {
    do {
    } while ((*pbVar11 & 1) != 0);
    do {
      bVar2 = *pbVar11;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pbVar11,0x10);
      if (bVar6) {
        *pbVar11 = 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  pbVar10 = pbVar11 + 8;
  pbVar22 = pbVar10;
  func_0x000107c2b05c(pbVar10,ppbVar9);
  pbVar27 = *(byte **)(pbVar11 + 0x10);
  if (pbVar27 != (byte *)0x0) {
    pbVar29 = pbVar27 + -1;
    if (((ulong)pbVar27 & (ulong)pbVar29) == 0) {
      pbVar30 = (byte *)((ulong)pbVar29 & (ulong)pbVar22);
    }
    else {
      pbVar30 = pbVar22;
      if (pbVar27 <= pbVar22) {
        uVar7 = 0;
        if (pbVar27 != (byte *)0x0) {
          uVar7 = (ulong)pbVar22 / (ulong)pbVar27;
        }
        pbVar30 = pbVar22 + -(uVar7 * (long)pbVar27);
      }
    }
    plVar19 = *(long **)(*(long *)pbVar10 + (long)pbVar30 * 8);
    if (plVar19 != (long *)0x0) {
      for (plVar19 = (long *)*plVar19; plVar19 != (long *)0x0; plVar19 = (long *)*plVar19) {
        pbVar20 = (byte *)plVar19[1];
        if (pbVar20 == pbVar22) {
          pbVar20 = pbVar10;
          func_0x000107c2b068(pbVar10,plVar19 + 2,ppbVar9);
          if (((ulong)pbVar20 & 1) != 0) {
            pbVar10 = (byte *)plVar19[5];
            *pbVar11 = 0;
            return pbVar10;
          }
        }
        else {
          if (((ulong)pbVar27 & (ulong)pbVar29) == 0) {
            pbVar20 = (byte *)((ulong)pbVar20 & (ulong)pbVar29);
          }
          else if (pbVar27 <= pbVar20) {
            uVar7 = 0;
            if (pbVar27 != (byte *)0x0) {
              uVar7 = (ulong)pbVar20 / (ulong)pbVar27;
            }
            pbVar20 = pbVar20 + -(uVar7 * (long)pbVar27);
          }
          if (pbVar20 != pbVar30) break;
        }
      }
    }
  }
  *pbVar11 = 0;
  pbVar22 = param_4[1];
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    pbVar22 = (byte *)(ulong)*(byte *)((long)param_4 + 0x17);
  }
  if (pbVar22 != (byte *)0x0) {
    FUN_10a0b4df8(&plStack_130,param_4,param_3);
    FUN_10a0f1b8c(&pbStack_170,&plStack_130,0);
    if (cStack_140 == '\x01') {
      FUN_10a0f20c0(&uStack_188,&pbStack_170);
LAB_10a30d4ac:
      FUN_10a0f1ea0(&pbStack_170);
      do {
        bVar2 = *pbVar11;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pbVar11,0x10);
        if (bVar6) {
          *pbVar11 = 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      while ((bVar2 & 1) != 0) {
        do {
        } while ((*pbVar11 & 1) != 0);
        do {
          bVar2 = *pbVar11;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pbVar11,0x10);
          if (bVar6) {
            *pbVar11 = 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      puVar14 = (undefined8 *)0x18;
      __Znwm();
      puVar14[1] = uStack_180;
      *puVar14 = uStack_188;
      puVar14[2] = lStack_178;
      uStack_180 = 0;
      lStack_178 = 0;
      uStack_188 = 0;
      if (*(char *)((long)ppbVar9 + 0x17) < '\0') {
        puStack_190 = puVar14;
        func_0x000107c3192c(&pbStack_170,*ppbVar9,ppbVar9[1]);
        apuStack_158[0] = puStack_190;
      }
      else {
        pbStack_168 = ppbVar9[1];
        pbStack_170 = *ppbVar9;
        pbStack_160 = ppbVar9[2];
        apuStack_158[0] = puVar14;
      }
      puStack_190 = (undefined8 *)0x0;
      pbVar22 = pbVar10;
      func_0x000107c2b05c(pbVar10,&pbStack_170);
      pbVar27 = *(byte **)(pbVar11 + 0x10);
      if (pbVar27 != (byte *)0x0) {
        pbVar29 = pbVar27 + -1;
        if (((ulong)pbVar27 & (ulong)pbVar29) == 0) {
          param_3 = (byte *)((ulong)pbVar29 & (ulong)pbVar22);
        }
        else {
          param_3 = pbVar22;
          if (pbVar27 <= pbVar22) {
            uVar7 = 0;
            if (pbVar27 != (byte *)0x0) {
              uVar7 = (ulong)pbVar22 / (ulong)pbVar27;
            }
            param_3 = pbVar22 + -(uVar7 * (long)pbVar27);
          }
        }
        puVar14 = *(undefined8 **)(*(long *)pbVar10 + (long)param_3 * 8);
        if (puVar14 != (undefined8 *)0x0) {
          for (plVar19 = (long *)*puVar14; plVar19 != (long *)0x0; plVar19 = (long *)*plVar19) {
            pbVar30 = (byte *)plVar19[1];
            if (pbVar30 == pbVar22) {
              pbVar30 = pbVar10;
              func_0x000107c2b068(pbVar10,plVar19 + 2,&pbStack_170);
              if (((ulong)pbVar30 & 1) != 0) goto LAB_10a30d8b8;
            }
            else {
              if (((ulong)pbVar27 & (ulong)pbVar29) == 0) {
                pbVar30 = (byte *)((ulong)pbVar30 & (ulong)pbVar29);
              }
              else if (pbVar27 <= pbVar30) {
                uVar7 = 0;
                if (pbVar27 != (byte *)0x0) {
                  uVar7 = (ulong)pbVar30 / (ulong)pbVar27;
                }
                pbVar30 = pbVar30 + -(uVar7 * (long)pbVar27);
              }
              if (pbVar30 != param_3) break;
            }
          }
        }
      }
      plVar19 = (long *)0x30;
      __Znwm();
      uStack_120 = 0;
      *plVar19 = 0;
      plVar19[1] = (long)pbVar22;
      plStack_130 = plVar19;
      pbStack_128 = pbVar10;
      if ((long)pbStack_160 < 0) {
        func_0x000107c3192c(plVar19 + 2,pbStack_170,pbStack_168);
      }
      else {
        plVar19[3] = (long)pbStack_168;
        plVar19[2] = (long)pbStack_170;
        plVar19[4] = (long)pbStack_160;
      }
      puVar14 = apuStack_158[0];
      apuStack_158[0] = (undefined8 *)0x0;
      plVar19[5] = (long)puVar14;
      uStack_120 = CONCAT71(uStack_120._1_7_,1);
      if ((pbVar27 != (byte *)0x0) &&
         ((float)(*(long *)(pbVar11 + 0x20) + 1) <= *(float *)(pbVar11 + 0x28) * (float)pbVar27))
      goto LAB_10a30d844;
      uVar7 = 1;
      if ((byte *)0x2 < pbVar27) {
        uVar7 = (ulong)(((ulong)pbVar27 & (ulong)(pbVar27 + -1)) != 0);
      }
      pbVar29 = (byte *)(uVar7 | (long)pbVar27 << 1);
      pbVar27 = (byte *)(long)((float)(*(long *)(pbVar11 + 0x20) + 1) / *(float *)(pbVar11 + 0x28));
      if (pbVar29 <= pbVar27) {
        pbVar29 = pbVar27;
      }
      if (pbVar29 + -1 == (byte *)0x0) {
        pbVar29 = (byte *)0x2;
      }
      else if (((ulong)pbVar29 & (ulong)(pbVar29 + -1)) != 0) {
        __ZNSt3__112__next_primeEm();
      }
      pbVar27 = *(byte **)(pbVar11 + 0x10);
      if (pbVar27 < pbVar29) {
LAB_10a30d6c0:
        if ((ulong)pbVar29 >> 0x3d != 0) {
          func_0x000109ffded8();
          goto LAB_10a30d96c;
        }
        lVar15 = (long)pbVar29 << 3;
        __Znwm();
        lVar16 = *(long *)pbVar10;
        *(long *)pbVar10 = lVar15;
        if (lVar16 != 0) {
          __ZdlPv();
        }
        pbVar27 = (byte *)0x0;
        *(byte **)(pbVar11 + 0x10) = pbVar29;
        do {
          *(undefined8 *)(*(long *)pbVar10 + (long)pbVar27 * 8) = 0;
          pbVar27 = pbVar27 + 1;
        } while (pbVar29 != pbVar27);
        plVar21 = *(long **)(pbVar11 + 0x18);
        pbVar27 = pbVar29;
        if (plVar21 != (long *)0x0) {
          pbVar30 = (byte *)plVar21[1];
          pbVar20 = pbVar29 + -1;
          if (((ulong)pbVar29 & (ulong)pbVar20) == 0) {
            pbVar30 = (byte *)((ulong)pbVar30 & (ulong)pbVar20);
          }
          else if (pbVar29 <= pbVar30) {
            uVar7 = 0;
            if (pbVar29 != (byte *)0x0) {
              uVar7 = (ulong)pbVar30 / (ulong)pbVar29;
            }
            pbVar30 = pbVar30 + -(uVar7 * (long)pbVar29);
          }
          *(byte **)(*(long *)pbVar10 + (long)pbVar30 * 8) = pbVar11 + 0x18;
          plVar23 = (long *)*plVar21;
          while (plVar23 != (long *)0x0) {
            pbVar25 = (byte *)plVar23[1];
            if (((ulong)pbVar29 & (ulong)pbVar20) == 0) {
              pbVar25 = (byte *)((ulong)pbVar25 & (ulong)pbVar20);
            }
            else if (pbVar29 <= pbVar25) {
              uVar7 = 0;
              if (pbVar29 != (byte *)0x0) {
                uVar7 = (ulong)pbVar25 / (ulong)pbVar29;
              }
              pbVar25 = pbVar25 + -(uVar7 * (long)pbVar29);
            }
            plVar24 = plVar23;
            if (pbVar25 != pbVar30) {
              lVar15 = *(long *)pbVar10;
              if (*(long *)(lVar15 + (long)pbVar25 * 8) == 0) {
                *(long **)(lVar15 + (long)pbVar25 * 8) = plVar21;
                pbVar30 = pbVar25;
              }
              else {
                *plVar21 = *plVar23;
                *plVar23 = **(undefined8 **)(lVar15 + (long)pbVar25 * 8);
                **(long **)(lVar15 + (long)pbVar25 * 8) = (long)plVar23;
                plVar24 = plVar21;
              }
            }
            plVar21 = plVar24;
            plVar23 = (long *)*plVar24;
          }
        }
      }
      else if (pbVar29 < pbVar27) {
        pbVar30 = (byte *)(long)((float)*(ulong *)(pbVar11 + 0x20) / *(float *)(pbVar11 + 0x28));
        if ((pbVar27 < (byte *)0x3) || (((ulong)pbVar27 & (ulong)(pbVar27 + -1)) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if ((byte *)0x1 < pbVar30) {
          pbVar30 = (byte *)(1L << (-LZCOUNT(pbVar30 + -1) & 0x3fU));
        }
        if (pbVar29 <= pbVar30) {
          pbVar29 = pbVar30;
        }
        if (pbVar29 < pbVar27) {
          if (pbVar29 != (byte *)0x0) goto LAB_10a30d6c0;
          pbVar10[0] = 0;
          pbVar10[1] = 0;
          pbVar10[2] = 0;
          pbVar10[3] = 0;
          pbVar10[4] = 0;
          pbVar10[5] = 0;
          pbVar10[6] = 0;
          pbVar10[7] = 0;
          if (*(long *)pbVar10 != 0) {
            __ZdlPv();
          }
          pbVar11[0x10] = 0;
          pbVar11[0x11] = 0;
          pbVar11[0x12] = 0;
          pbVar11[0x13] = 0;
          pbVar11[0x14] = 0;
          pbVar11[0x15] = 0;
          pbVar11[0x16] = 0;
          pbVar11[0x17] = 0;
          pbVar27 = (byte *)0x0;
        }
        else {
          pbVar27 = *(byte **)(pbVar11 + 0x10);
        }
      }
      if (((ulong)pbVar27 & (ulong)(pbVar27 + -1)) == 0) {
        param_3 = (byte *)((ulong)(pbVar27 + -1) & (ulong)pbVar22);
      }
      else {
        param_3 = pbVar22;
        if (pbVar27 <= pbVar22) {
          uVar7 = 0;
          if (pbVar27 != (byte *)0x0) {
            uVar7 = (ulong)pbVar22 / (ulong)pbVar27;
          }
          param_3 = pbVar22 + -(uVar7 * (long)pbVar27);
        }
      }
LAB_10a30d844:
      lVar15 = *(long *)pbVar10;
      plVar21 = *(long **)(lVar15 + (long)param_3 * 8);
      if (plVar21 == (long *)0x0) {
        pbVar22 = pbVar11 + 0x18;
        *plVar19 = *(long *)pbVar22;
        *(long **)pbVar22 = plVar19;
        *(byte **)(lVar15 + (long)param_3 * 8) = pbVar22;
        if (*plVar19 != 0) {
          pbVar22 = *(byte **)(*plVar19 + 8);
          if (((ulong)pbVar27 & (ulong)(pbVar27 + -1)) == 0) {
            pbVar22 = (byte *)((ulong)pbVar22 & (ulong)(pbVar27 + -1));
          }
          else if (pbVar27 <= pbVar22) {
            uVar7 = 0;
            if (pbVar27 != (byte *)0x0) {
              uVar7 = (ulong)pbVar22 / (ulong)pbVar27;
            }
            pbVar22 = pbVar22 + -(uVar7 * (long)pbVar27);
          }
          *(long **)(*(long *)pbVar10 + (long)pbVar22 * 8) = plVar19;
        }
      }
      else {
        *plVar19 = *plVar21;
        *plVar21 = (long)plVar19;
      }
      *(long *)(pbVar11 + 0x20) = *(long *)(pbVar11 + 0x20) + 1;
LAB_10a30d8b8:
      puVar14 = apuStack_158[0];
      apuStack_158[0] = (undefined8 *)0x0;
      if (puVar14 != (undefined8 *)0x0) {
        func_0x00010a31f3b0(apuStack_158);
      }
      if ((long)pbStack_160 < 0) {
        __ZdlPv(pbStack_170);
      }
      puVar14 = puStack_190;
      puStack_190 = (undefined8 *)0x0;
      if (puVar14 != (undefined8 *)0x0) {
        func_0x00010a31f3b0(&puStack_190);
      }
      pbVar10 = (byte *)plVar19[5];
      *pbVar11 = 0;
      if (lStack_178 < 0) {
        __ZdlPv(uStack_188);
      }
      return pbVar10;
    }
  }
  piVar4 = (int *)puVar14[1];
  for (piVar3 = (int *)*puVar14; piVar3 != piVar4; piVar3 = piVar3 + 6) {
    lVar15 = (long)*(char *)((long)piVar3 + 0x17);
    piVar28 = piVar3;
    if (lVar15 < 0) {
      lVar15 = *(long *)(piVar3 + 2);
      piVar28 = *(int **)piVar3;
    }
    if (5 < lVar15) {
      piVar1 = (int *)((long)piVar28 + lVar15);
      piVar12 = piVar28;
      while (_memchr(piVar12,0x67,lVar15 + -5), piVar12 != (int *)0x0) {
        if (*piVar12 == 0x6c736c67 && (short)piVar12[1] == 0x7365) {
          if ((piVar12 != piVar1) && ((long)piVar12 - (long)piVar28 != -1)) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                      (&pbStack_170,piVar3,((long)piVar12 - (long)piVar28) + 6,0xffffffffffffffff,
                       &uStack_131);
            ppbVar13 = &pbStack_170;
            __ZNSt3__14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi
                      (ppbVar13,0,10);
            if ((long)pbStack_160 < 0) {
              __ZdlPv(pbStack_170);
            }
            if (iVar18 < (int)ppbVar13) {
              uVar7 = *(ulong *)(piVar3 + 2);
              piVar28 = *(int **)piVar3;
              if (-1 < (char)*(byte *)((long)piVar3 + 0x17)) {
                uVar7 = (ulong)*(byte *)((long)piVar3 + 0x17);
                piVar28 = piVar3;
              }
              FUN_10ae03140(0,piVar28,uVar7);
              FUN_10ae03140();
              func_0x00010ae02ecc();
              func_0x00010ae02ecc();
              ppuVar17 = &PTR_PTR_113301098;
              FUN_10ae079a0();
              FUN_10ae0314c();
              FUN_10ae0314c();
              func_0x00010ae02edc();
              func_0x00010ae02edc();
              FUN_10ae07cd4(ppuVar17,&PTR_PTR_113301098);
              goto LAB_10a30d45c;
            }
          }
          break;
        }
        piVar12 = (int *)((long)piVar12 + 1);
        lVar15 = (long)piVar1 - (long)piVar12;
        if (lVar15 < 6) break;
      }
    }
    FUN_10a0b4df8(&plStack_130,piVar3,param_3);
    FUN_10a0f1b8c(&pbStack_170,&plStack_130,1);
    if (cStack_140 == '\x01') {
      FUN_10a0f20c0(&uStack_188,&pbStack_170);
      goto LAB_10a30d4ac;
    }
LAB_10a30d45c:
  }
  FUN_10a0ee900(&pbStack_170,&UNK_10f64ed2b,0x35);
  FUN_10a0029c0(&pbStack_170);
LAB_10a30d96c:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a30d970);
  (*pcVar8)();
}



/* Entry: 10a30d0e0; end: 10a30da0f;  */

/* WARNING: Removing unreachable block (ram,0x00010a30d234) */
/* WARNING: Removing unreachable block (ram,0x00010a30d448) */

long FUN_10a30d0e0(byte *param_1,long *param_2,int param_3,byte *param_4,undefined8 *param_5,
                  long param_6)

{
  byte *pbVar1;
  int *piVar2;
  byte bVar3;
  int *piVar4;
  int *piVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  code *pcVar9;
  int *piVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined **ppuVar14;
  long *plVar15;
  byte *pbVar16;
  long *plVar17;
  byte *pbVar18;
  long *plVar19;
  long *plVar20;
  byte *pbVar21;
  byte *pbVar22;
  int *piVar23;
  byte *pbVar24;
  byte *pbVar25;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 *apuStack_a8 [3];
  char cStack_90;
  undefined1 uStack_81;
  long *plStack_80;
  byte *pbStack_78;
  undefined8 uStack_70;
  
  do {
    bVar3 = *param_1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar7) {
      *param_1 = 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  while ((bVar3 & 1) != 0) {
    do {
    } while ((*param_1 & 1) != 0);
    do {
      bVar3 = *param_1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar7) {
        *param_1 = 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  pbVar1 = param_1 + 8;
  pbVar18 = pbVar1;
  func_0x000107c2b05c(pbVar1,param_2);
  pbVar22 = *(byte **)(param_1 + 0x10);
  if (pbVar22 != (byte *)0x0) {
    pbVar24 = pbVar22 + -1;
    if (((ulong)pbVar22 & (ulong)pbVar24) == 0) {
      pbVar25 = (byte *)((ulong)pbVar24 & (ulong)pbVar18);
    }
    else {
      pbVar25 = pbVar18;
      if (pbVar22 <= pbVar18) {
        uVar8 = 0;
        if (pbVar22 != (byte *)0x0) {
          uVar8 = (ulong)pbVar18 / (ulong)pbVar22;
        }
        pbVar25 = pbVar18 + -(uVar8 * (long)pbVar22);
      }
    }
    plVar15 = *(long **)(*(long *)pbVar1 + (long)pbVar25 * 8);
    if (plVar15 != (long *)0x0) {
      for (plVar15 = (long *)*plVar15; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
        pbVar16 = (byte *)plVar15[1];
        if (pbVar16 == pbVar18) {
          pbVar16 = pbVar1;
          func_0x000107c2b068(pbVar1,plVar15 + 2,param_2);
          if (((ulong)pbVar16 & 1) != 0) {
            lVar12 = plVar15[5];
            *param_1 = 0;
            return lVar12;
          }
        }
        else {
          if (((ulong)pbVar22 & (ulong)pbVar24) == 0) {
            pbVar16 = (byte *)((ulong)pbVar16 & (ulong)pbVar24);
          }
          else if (pbVar22 <= pbVar16) {
            uVar8 = 0;
            if (pbVar22 != (byte *)0x0) {
              uVar8 = (ulong)pbVar16 / (ulong)pbVar22;
            }
            pbVar16 = pbVar16 + -(uVar8 * (long)pbVar22);
          }
          if (pbVar16 != pbVar25) break;
        }
      }
    }
  }
  *param_1 = 0;
  uVar8 = *(ulong *)(param_6 + 8);
  if (-1 < (char)*(byte *)(param_6 + 0x17)) {
    uVar8 = (ulong)*(byte *)(param_6 + 0x17);
  }
  if (uVar8 != 0) {
    FUN_10a0b4df8(&plStack_80,param_6,param_4);
    FUN_10a0f1b8c(&lStack_c0,&plStack_80,0);
    if (cStack_90 == '\x01') {
      FUN_10a0f20c0(&uStack_d8,&lStack_c0);
LAB_10a30d4ac:
      FUN_10a0f1ea0(&lStack_c0);
      do {
        bVar3 = *param_1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar7) {
          *param_1 = 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      while ((bVar3 & 1) != 0) {
        do {
        } while ((*param_1 & 1) != 0);
        do {
          bVar3 = *param_1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar7) {
            *param_1 = 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      puVar11 = (undefined8 *)0x18;
      __Znwm();
      puVar11[1] = uStack_d0;
      *puVar11 = uStack_d8;
      puVar11[2] = lStack_c8;
      uStack_d0 = 0;
      lStack_c8 = 0;
      uStack_d8 = 0;
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        puStack_e0 = puVar11;
        func_0x000107c3192c(&lStack_c0,*param_2,param_2[1]);
        apuStack_a8[0] = puStack_e0;
      }
      else {
        lStack_b8 = param_2[1];
        lStack_c0 = *param_2;
        lStack_b0 = param_2[2];
        apuStack_a8[0] = puVar11;
      }
      puStack_e0 = (undefined8 *)0x0;
      pbVar18 = pbVar1;
      func_0x000107c2b05c(pbVar1,&lStack_c0);
      pbVar22 = *(byte **)(param_1 + 0x10);
      if (pbVar22 != (byte *)0x0) {
        pbVar24 = pbVar22 + -1;
        if (((ulong)pbVar22 & (ulong)pbVar24) == 0) {
          param_4 = (byte *)((ulong)pbVar24 & (ulong)pbVar18);
        }
        else {
          param_4 = pbVar18;
          if (pbVar22 <= pbVar18) {
            uVar8 = 0;
            if (pbVar22 != (byte *)0x0) {
              uVar8 = (ulong)pbVar18 / (ulong)pbVar22;
            }
            param_4 = pbVar18 + -(uVar8 * (long)pbVar22);
          }
        }
        puVar11 = *(undefined8 **)(*(long *)pbVar1 + (long)param_4 * 8);
        if (puVar11 != (undefined8 *)0x0) {
          for (plVar15 = (long *)*puVar11; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
            pbVar25 = (byte *)plVar15[1];
            if (pbVar25 == pbVar18) {
              pbVar25 = pbVar1;
              func_0x000107c2b068(pbVar1,plVar15 + 2,&lStack_c0);
              if (((ulong)pbVar25 & 1) != 0) goto LAB_10a30d8b8;
            }
            else {
              if (((ulong)pbVar22 & (ulong)pbVar24) == 0) {
                pbVar25 = (byte *)((ulong)pbVar25 & (ulong)pbVar24);
              }
              else if (pbVar22 <= pbVar25) {
                uVar8 = 0;
                if (pbVar22 != (byte *)0x0) {
                  uVar8 = (ulong)pbVar25 / (ulong)pbVar22;
                }
                pbVar25 = pbVar25 + -(uVar8 * (long)pbVar22);
              }
              if (pbVar25 != param_4) break;
            }
          }
        }
      }
      plVar15 = (long *)0x30;
      __Znwm();
      uStack_70 = 0;
      *plVar15 = 0;
      plVar15[1] = (long)pbVar18;
      plStack_80 = plVar15;
      pbStack_78 = pbVar1;
      if (lStack_b0 < 0) {
        func_0x000107c3192c(plVar15 + 2,lStack_c0,lStack_b8);
      }
      else {
        plVar15[3] = lStack_b8;
        plVar15[2] = lStack_c0;
        plVar15[4] = lStack_b0;
      }
      puVar11 = apuStack_a8[0];
      apuStack_a8[0] = (undefined8 *)0x0;
      plVar15[5] = (long)puVar11;
      uStack_70 = CONCAT71(uStack_70._1_7_,1);
      if ((pbVar22 != (byte *)0x0) &&
         ((float)(*(long *)(param_1 + 0x20) + 1) <= *(float *)(param_1 + 0x28) * (float)pbVar22))
      goto LAB_10a30d844;
      uVar8 = 1;
      if ((byte *)0x2 < pbVar22) {
        uVar8 = (ulong)(((ulong)pbVar22 & (ulong)(pbVar22 + -1)) != 0);
      }
      pbVar24 = (byte *)(uVar8 | (long)pbVar22 << 1);
      pbVar22 = (byte *)(long)((float)(*(long *)(param_1 + 0x20) + 1) / *(float *)(param_1 + 0x28));
      if (pbVar24 <= pbVar22) {
        pbVar24 = pbVar22;
      }
      if (pbVar24 + -1 == (byte *)0x0) {
        pbVar24 = (byte *)0x2;
      }
      else if (((ulong)pbVar24 & (ulong)(pbVar24 + -1)) != 0) {
        __ZNSt3__112__next_primeEm();
      }
      pbVar22 = *(byte **)(param_1 + 0x10);
      if (pbVar22 < pbVar24) {
LAB_10a30d6c0:
        if ((ulong)pbVar24 >> 0x3d != 0) {
          func_0x000109ffded8();
          goto LAB_10a30d96c;
        }
        lVar12 = (long)pbVar24 << 3;
        __Znwm();
        lVar13 = *(long *)pbVar1;
        *(long *)pbVar1 = lVar12;
        if (lVar13 != 0) {
          __ZdlPv();
        }
        pbVar22 = (byte *)0x0;
        *(byte **)(param_1 + 0x10) = pbVar24;
        do {
          *(undefined8 *)(*(long *)pbVar1 + (long)pbVar22 * 8) = 0;
          pbVar22 = pbVar22 + 1;
        } while (pbVar24 != pbVar22);
        plVar17 = *(long **)(param_1 + 0x18);
        pbVar22 = pbVar24;
        if (plVar17 != (long *)0x0) {
          pbVar25 = (byte *)plVar17[1];
          pbVar16 = pbVar24 + -1;
          if (((ulong)pbVar24 & (ulong)pbVar16) == 0) {
            pbVar25 = (byte *)((ulong)pbVar25 & (ulong)pbVar16);
          }
          else if (pbVar24 <= pbVar25) {
            uVar8 = 0;
            if (pbVar24 != (byte *)0x0) {
              uVar8 = (ulong)pbVar25 / (ulong)pbVar24;
            }
            pbVar25 = pbVar25 + -(uVar8 * (long)pbVar24);
          }
          *(byte **)(*(long *)pbVar1 + (long)pbVar25 * 8) = param_1 + 0x18;
          plVar19 = (long *)*plVar17;
          while (plVar19 != (long *)0x0) {
            pbVar21 = (byte *)plVar19[1];
            if (((ulong)pbVar24 & (ulong)pbVar16) == 0) {
              pbVar21 = (byte *)((ulong)pbVar21 & (ulong)pbVar16);
            }
            else if (pbVar24 <= pbVar21) {
              uVar8 = 0;
              if (pbVar24 != (byte *)0x0) {
                uVar8 = (ulong)pbVar21 / (ulong)pbVar24;
              }
              pbVar21 = pbVar21 + -(uVar8 * (long)pbVar24);
            }
            plVar20 = plVar19;
            if (pbVar21 != pbVar25) {
              lVar12 = *(long *)pbVar1;
              if (*(long *)(lVar12 + (long)pbVar21 * 8) == 0) {
                *(long **)(lVar12 + (long)pbVar21 * 8) = plVar17;
                pbVar25 = pbVar21;
              }
              else {
                *plVar17 = *plVar19;
                *plVar19 = **(undefined8 **)(lVar12 + (long)pbVar21 * 8);
                **(long **)(lVar12 + (long)pbVar21 * 8) = (long)plVar19;
                plVar20 = plVar17;
              }
            }
            plVar17 = plVar20;
            plVar19 = (long *)*plVar20;
          }
        }
      }
      else if (pbVar24 < pbVar22) {
        pbVar25 = (byte *)(long)((float)*(ulong *)(param_1 + 0x20) / *(float *)(param_1 + 0x28));
        if ((pbVar22 < (byte *)0x3) || (((ulong)pbVar22 & (ulong)(pbVar22 + -1)) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if ((byte *)0x1 < pbVar25) {
          pbVar25 = (byte *)(1L << (-LZCOUNT(pbVar25 + -1) & 0x3fU));
        }
        if (pbVar24 <= pbVar25) {
          pbVar24 = pbVar25;
        }
        if (pbVar24 < pbVar22) {
          if (pbVar24 != (byte *)0x0) goto LAB_10a30d6c0;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          pbVar1[4] = 0;
          pbVar1[5] = 0;
          pbVar1[6] = 0;
          pbVar1[7] = 0;
          if (*(long *)pbVar1 != 0) {
            __ZdlPv();
          }
          param_1[0x10] = 0;
          param_1[0x11] = 0;
          param_1[0x12] = 0;
          param_1[0x13] = 0;
          param_1[0x14] = 0;
          param_1[0x15] = 0;
          param_1[0x16] = 0;
          param_1[0x17] = 0;
          pbVar22 = (byte *)0x0;
        }
        else {
          pbVar22 = *(byte **)(param_1 + 0x10);
        }
      }
      if (((ulong)pbVar22 & (ulong)(pbVar22 + -1)) == 0) {
        param_4 = (byte *)((ulong)(pbVar22 + -1) & (ulong)pbVar18);
      }
      else {
        param_4 = pbVar18;
        if (pbVar22 <= pbVar18) {
          uVar8 = 0;
          if (pbVar22 != (byte *)0x0) {
            uVar8 = (ulong)pbVar18 / (ulong)pbVar22;
          }
          param_4 = pbVar18 + -(uVar8 * (long)pbVar22);
        }
      }
LAB_10a30d844:
      lVar12 = *(long *)pbVar1;
      plVar17 = *(long **)(lVar12 + (long)param_4 * 8);
      if (plVar17 == (long *)0x0) {
        pbVar18 = param_1 + 0x18;
        *plVar15 = *(long *)pbVar18;
        *(long **)pbVar18 = plVar15;
        *(byte **)(lVar12 + (long)param_4 * 8) = pbVar18;
        if (*plVar15 != 0) {
          pbVar18 = *(byte **)(*plVar15 + 8);
          if (((ulong)pbVar22 & (ulong)(pbVar22 + -1)) == 0) {
            pbVar18 = (byte *)((ulong)pbVar18 & (ulong)(pbVar22 + -1));
          }
          else if (pbVar22 <= pbVar18) {
            uVar8 = 0;
            if (pbVar22 != (byte *)0x0) {
              uVar8 = (ulong)pbVar18 / (ulong)pbVar22;
            }
            pbVar18 = pbVar18 + -(uVar8 * (long)pbVar22);
          }
          *(long **)(*(long *)pbVar1 + (long)pbVar18 * 8) = plVar15;
        }
      }
      else {
        *plVar15 = *plVar17;
        *plVar17 = (long)plVar15;
      }
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
LAB_10a30d8b8:
      puVar11 = apuStack_a8[0];
      apuStack_a8[0] = (undefined8 *)0x0;
      if (puVar11 != (undefined8 *)0x0) {
        func_0x00010a31f3b0(apuStack_a8);
      }
      if (lStack_b0 < 0) {
        __ZdlPv(lStack_c0);
      }
      puVar11 = puStack_e0;
      puStack_e0 = (undefined8 *)0x0;
      if (puVar11 != (undefined8 *)0x0) {
        func_0x00010a31f3b0(&puStack_e0);
      }
      lVar12 = plVar15[5];
      *param_1 = 0;
      if (lStack_c8 < 0) {
        __ZdlPv(uStack_d8);
      }
      return lVar12;
    }
  }
  piVar5 = (int *)param_5[1];
  for (piVar4 = (int *)*param_5; piVar4 != piVar5; piVar4 = piVar4 + 6) {
    lVar12 = (long)*(char *)((long)piVar4 + 0x17);
    piVar23 = piVar4;
    if (lVar12 < 0) {
      lVar12 = *(long *)(piVar4 + 2);
      piVar23 = *(int **)piVar4;
    }
    if (5 < lVar12) {
      piVar2 = (int *)((long)piVar23 + lVar12);
      piVar10 = piVar23;
      while (_memchr(piVar10,0x67,lVar12 + -5), piVar10 != (int *)0x0) {
        if (*piVar10 == 0x6c736c67 && (short)piVar10[1] == 0x7365) {
          if ((piVar10 != piVar2) && ((long)piVar10 - (long)piVar23 != -1)) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                      (&lStack_c0,piVar4,((long)piVar10 - (long)piVar23) + 6,0xffffffffffffffff,
                       &uStack_81);
            plVar15 = &lStack_c0;
            __ZNSt3__14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi
                      (plVar15,0,10);
            if (lStack_b0 < 0) {
              __ZdlPv(lStack_c0);
            }
            if (param_3 < (int)plVar15) {
              uVar8 = *(ulong *)(piVar4 + 2);
              piVar23 = *(int **)piVar4;
              if (-1 < (char)*(byte *)((long)piVar4 + 0x17)) {
                uVar8 = (ulong)*(byte *)((long)piVar4 + 0x17);
                piVar23 = piVar4;
              }
              FUN_10ae03140(0,piVar23,uVar8);
              FUN_10ae03140();
              func_0x00010ae02ecc();
              func_0x00010ae02ecc();
              ppuVar14 = &PTR_PTR_113301098;
              FUN_10ae079a0();
              FUN_10ae0314c();
              FUN_10ae0314c();
              func_0x00010ae02edc();
              func_0x00010ae02edc();
              FUN_10ae07cd4(ppuVar14,&PTR_PTR_113301098);
              goto LAB_10a30d45c;
            }
          }
          break;
        }
        piVar10 = (int *)((long)piVar10 + 1);
        lVar12 = (long)piVar2 - (long)piVar10;
        if (lVar12 < 6) break;
      }
    }
    FUN_10a0b4df8(&plStack_80,piVar4,param_4);
    FUN_10a0f1b8c(&lStack_c0,&plStack_80,1);
    if (cStack_90 == '\x01') {
      FUN_10a0f20c0(&uStack_d8,&lStack_c0);
      goto LAB_10a30d4ac;
    }
LAB_10a30d45c:
  }
  FUN_10a0ee900(&lStack_c0,&UNK_10f64ed2b,0x35);
  FUN_10a0029c0(&lStack_c0);
LAB_10a30d96c:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10a30d970);
  (*pcVar9)();
}



/* Entry: 10a30da10; end: 10a30da7b;  */

/* WARNING: Removing unreachable block (ram,0x00010a30da48) */

void FUN_10a30da10(void)

{
  FUN_10a30da7c();
  return;
}



/* Entry: 10a30da7c; end: 10a30e0c3;  */

void FUN_10a30da7c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,ulong param_8,
                  char *******param_9)

{
  ulong uVar1;
  char cVar2;
  char *******pppppppcVar3;
  undefined8 *******pppppppuVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  char *****pppppcVar10;
  char ****ppppcVar11;
  char ******ppppppcVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 uStack_a90;
  uint uStack_a84;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 ******ppppppuStack_a70;
  ulong uStack_a68;
  byte bStack_a59;
  undefined8 auStack_a58 [2];
  char cStack_a41;
  char ****ppppcStack_a40;
  char ****ppppcStack_a38;
  char ****ppppcStack_a30;
  char ****ppppcStack_a20;
  char ****ppppcStack_a18;
  char ****ppppcStack_a10;
  char ***pppcStack_a00;
  char ***pppcStack_9f8;
  char ***pppcStack_9f0;
  char *****pppppcStack_9e0;
  char *****pppppcStack_9d8;
  char *****pppppcStack_9d0;
  undefined1 auStack_9c0 [2168];
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined7 uStack_138;
  char cStack_131;
  undefined1 auStack_100 [80];
  byte bStack_b0;
  undefined1 uStack_89;
  char ******ppppppcStack_88;
  ulong uStack_80;
  byte bStack_71;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a31f3e8(auStack_9c0,param_3,param_6);
  func_0x000107c2b054(&ppppcStack_a40,"");
  FUN_10a30e0c4(param_2,auStack_9c0,param_4,param_5,&ppppcStack_a40,param_7,param_9);
  if ((long)ppppcStack_a30 < 0) {
    __ZdlPv(ppppcStack_a40);
  }
  if (((param_8 & 1) == 0) && ((bStack_b0 & 1) == 0)) {
    uStack_a84 = (uint)param_9;
    ppppcStack_a40 = (char ****)&UNK_10f610487;
    ppppcStack_a38 = (char ****)0xb;
    puVar6 = auStack_100;
    FUN_10a3235d4(puVar6,&ppppcStack_a40);
    lVar14 = *(long *)(puVar6 + 0x20);
    param_9 = &ppppppcStack_88;
    func_0x000107c2b054(&ppppppcStack_88,&UNK_10f64d96f);
    uStack_a90 = param_7;
    uStack_a80 = param_5;
    uStack_a78 = param_6;
    if (299 < lVar14) {
      puVar6 = auStack_100;
      FUN_10a31f1f0(puVar6,&UNK_10f64d988,0x17);
      if (puVar6 == (undefined1 *)0x0) goto LAB_10a30de74;
    }
    uVar15 = param_4[1];
    puVar9 = (undefined8 *)*param_4;
    if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
      uVar15 = (ulong)*(byte *)((long)param_4 + 0x17);
      puVar9 = param_4;
    }
    uVar1 = uStack_80;
    if (-1 < (char)bStack_71) {
      uVar1 = (ulong)bStack_71;
      ppppppcStack_88 = (char ******)param_9;
    }
    if (uVar1 != 0) {
      if ((long)uVar1 <= (long)uVar15) {
        puVar16 = (undefined8 *)((long)puVar9 + uVar15);
        param_9 = (char *******)(long)*(char *)ppppppcStack_88;
        puVar7 = puVar9;
        do {
          if ((0xfffffffffffffffe < uVar15 - uVar1) ||
             (_memchr(puVar7,param_9,(uVar15 - uVar1) + 1), puVar7 == (undefined8 *)0x0)) break;
          puVar8 = puVar7;
          _memcmp();
          if ((int)puVar8 == 0) {
            if ((puVar7 != puVar16) && ((long)puVar7 - (long)puVar9 != -1)) goto LAB_10a30de74;
            break;
          }
          puVar7 = (undefined8 *)((long)puVar7 + 1);
          uVar15 = (long)puVar16 - (long)puVar7;
        } while ((long)uVar1 <= (long)uVar15);
      }
      param_9 = (char *******)0x1137eaf60;
      if ((bRam00000001137eaec0 & 1) == 0) goto LAB_10a30deec;
      goto LAB_10a30dbe8;
    }
  }
LAB_10a30de74:
  if (cStack_131 < '\0') {
    func_0x000107c3192c(param_1,uStack_148,uStack_140);
  }
  else {
    param_1[1] = uStack_140;
    *param_1 = uStack_148;
    param_1[2] = CONCAT17(cStack_131,uStack_138);
  }
  do {
    FUN_10a3208e0(auStack_9c0);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
    ___stack_chk_fail();
LAB_10a30deec:
    iVar5 = 0x137eaec0;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x000107c2b074(&ppppcStack_a40,&PTR_DAT_110c527d0);
      if ((long)ppppcStack_a30 < 0) {
        func_0x000107c3192c(&ppppcStack_a20,ppppcStack_a40,ppppcStack_a38);
      }
      else {
        ppppcStack_a18 = ppppcStack_a38;
        ppppcStack_a20 = ppppcStack_a40;
        ppppcStack_a10 = ppppcStack_a30;
      }
      FUN_109feb280(&pppcStack_a00,&UNK_10f433675,&ppppcStack_a20);
      FUN_10a012db0(&pppppcStack_9e0,&pppcStack_a00,&UNK_10f64d48b);
      param_9[1] = (char ******)pppppcStack_9d8;
      *param_9 = (char ******)pppppcStack_9e0;
      param_9[2] = (char ******)pppppcStack_9d0;
      pppppcStack_9d8 = (char *****)0x0;
      pppppcStack_9d0 = (char *****)0x0;
      pppppcStack_9e0 = (char *****)0x0;
      if ((long)pppcStack_9f0 < 0) {
        __ZdlPv(pppcStack_a00);
      }
      if ((long)ppppcStack_a10 < 0) {
        __ZdlPv(ppppcStack_a20);
      }
      if ((long)ppppcStack_a30 < 0) {
        __ZdlPv(ppppcStack_a40);
      }
      ___cxa_guard_release(0x1137eaec0);
    }
LAB_10a30dbe8:
    uVar15 = param_4[1];
    puVar9 = (undefined8 *)*param_4;
    if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
      uVar15 = (ulong)*(byte *)((long)param_4 + 0x17);
      puVar9 = param_4;
    }
    ppppppcVar12 = param_9[1];
    pppppppcVar3 = (char *******)*param_9;
    if (-1 < (char)*(byte *)((long)param_9 + 0x17)) {
      ppppppcVar12 = (char ******)(ulong)*(byte *)((long)param_9 + 0x17);
      pppppppcVar3 = param_9;
    }
    if (ppppppcVar12 == (char ******)0x0) {
      lVar14 = 0;
    }
    else {
      puVar7 = (undefined8 *)((long)puVar9 + uVar15);
      puVar16 = puVar7;
      if ((long)ppppppcVar12 <= (long)uVar15) {
        cVar2 = *(char *)pppppppcVar3;
        puVar8 = puVar9;
        do {
          puVar16 = puVar7;
          if (((0xfffffffffffffffe < uVar15 - (long)ppppppcVar12) ||
              (_memchr(puVar8,(long)cVar2,(uVar15 - (long)ppppppcVar12) + 1),
              puVar8 == (undefined8 *)0x0)) ||
             (puVar13 = puVar8, _memcmp(), puVar16 = puVar8, (int)puVar13 == 0)) break;
          puVar8 = (undefined8 *)((long)puVar8 + 1);
          uVar15 = (long)puVar7 - (long)puVar8;
          puVar16 = puVar7;
        } while ((long)ppppppcVar12 <= (long)uVar15);
      }
      lVar14 = (long)puVar16 - (long)puVar9;
      if (puVar16 == puVar7) {
        lVar14 = -1;
      }
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
              (auStack_a58,param_4,0,(long)ppppppcVar12 + lVar14 + 1,&ppppppuStack_a70);
    puVar9 = auStack_a58;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar9,&UNK_10f64d9a0,10);
    ppppcStack_a18 = (char ****)puVar9[1];
    ppppcStack_a20 = (char ****)*puVar9;
    ppppcStack_a10 = (char ****)puVar9[2];
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
    pppppcVar10 = &ppppcStack_a20;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppppcVar10,&UNK_10f64d9ab,0xd);
    pppcStack_9f8 = (char ***)pppppcVar10[1];
    pppcStack_a00 = (char ***)*pppppcVar10;
    pppcStack_9f0 = (char ***)pppppcVar10[2];
    pppppcVar10[1] = (char ****)0x0;
    pppppcVar10[2] = (char ****)0x0;
    *pppppcVar10 = (char ****)0x0;
    ppppcVar11 = &pppcStack_a00;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (ppppcVar11,&UNK_10f64d9b9,2);
    pppppcStack_9d8 = (char *****)ppppcVar11[1];
    pppppcStack_9e0 = (char *****)*ppppcVar11;
    pppppcStack_9d0 = (char *****)ppppcVar11[2];
    ppppcVar11[1] = (char ***)0x0;
    ppppcVar11[2] = (char ***)0x0;
    *ppppcVar11 = (char ***)0x0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
              (&ppppppuStack_a70,param_4,(long)ppppppcVar12 + lVar14 + 1,0xffffffffffffffff,
               &uStack_89);
    uVar15 = uStack_a68;
    pppppppuVar4 = (undefined8 *******)ppppppuStack_a70;
    if (-1 < (char)bStack_a59) {
      uVar15 = (ulong)bStack_a59;
      pppppppuVar4 = &ppppppuStack_a70;
    }
    ppppppcVar12 = &pppppcStack_9e0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (ppppppcVar12,pppppppuVar4,uVar15);
    ppppcStack_a38 = (char ****)ppppppcVar12[1];
    ppppcStack_a40 = (char ****)*ppppppcVar12;
    ppppcStack_a30 = (char ****)ppppppcVar12[2];
    ppppppcVar12[1] = (char *****)0x0;
    ppppppcVar12[2] = (char *****)0x0;
    *ppppppcVar12 = (char *****)0x0;
    param_9 = (char *******)(ulong)uStack_a84;
    if ((char)bStack_a59 < '\0') {
      __ZdlPv(ppppppuStack_a70);
    }
    if ((long)pppppcStack_9d0 < 0) {
      __ZdlPv(pppppcStack_9e0);
    }
    if ((long)pppcStack_9f0 < 0) {
      __ZdlPv(pppcStack_a00);
    }
    if ((long)ppppcStack_a10 < 0) {
      __ZdlPv(ppppcStack_a20);
    }
    if (cStack_a41 < '\0') {
      __ZdlPv(auStack_a58[0]);
    }
    FUN_10a30da7c(param_1,param_2,param_3,&ppppcStack_a40,uStack_a80,uStack_a78,uStack_a90,1,param_9
                 );
    if ((long)ppppcStack_a30 < 0) {
      __ZdlPv(ppppcStack_a40);
    }
  } while( true );
}



/* Entry: 10a30e0c4; end: 10a30efc3;  */

/* WARNING: Removing unreachable block (ram,0x00010a30ec90) */
/* WARNING: Removing unreachable block (ram,0x00010a30e9a4) */
/* WARNING: Removing unreachable block (ram,0x00010a30eca0) */
/* WARNING: Removing unreachable block (ram,0x00010a30eda8) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a30e0c4(undefined8 param_1,byte *******param_2,byte ******param_3,byte *******param_4,
                  undefined8 param_5,undefined8 *param_6,uint param_7)

{
  byte *******pppppppbVar1;
  ulong uVar2;
  byte bVar3;
  char cVar4;
  undefined8 *******pppppppuVar5;
  byte ******ppppppbVar6;
  byte *pbVar7;
  ulong uVar8;
  code *pcVar9;
  bool bVar10;
  byte ******ppppppbVar11;
  undefined1 *puVar12;
  byte *******pppppppbVar13;
  undefined8 uVar14;
  char *pcVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  byte *******pppppppbVar19;
  uint uVar20;
  long lVar21;
  int iVar22;
  uint uVar23;
  long lVar24;
  byte *pbVar25;
  ulong uStack_168;
  ulong uStack_160;
  undefined8 auStack_158 [2];
  char cStack_141;
  undefined8 auStack_140 [2];
  char cStack_129;
  byte *******pppppppbStack_128;
  byte ******ppppppbStack_120;
  undefined1 auStack_118 [7];
  char cStack_111;
  undefined8 *******pppppppuStack_108;
  ulong uStack_100;
  byte bStack_f1;
  undefined8 uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  undefined1 auStack_d0 [24];
  undefined8 *******pppppppuStack_b8;
  ulong uStack_b0;
  byte bStack_a1;
  byte *******pppppppbStack_a0;
  byte ******ppppppbStack_98;
  undefined8 uStack_90;
  byte ******ppppppbStack_88;
  byte *******apppppppbStack_78 [3];
  
  pppppppbVar1 = param_2 + 0x10f;
  param_2[0x123] = (byte ******)((long)param_2[0x123] + 1);
  uVar18 = (long)param_2[0x116] - (long)param_2[0x115];
  apppppppbStack_78[0] = (byte *******)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    apppppppbStack_78[0] = (byte *******)param_3;
  }
  if (*(byte *)apppppppbStack_78[0] != 0) {
    uVar17 = 0x22;
    uVar16 = uVar17;
    if (param_7 == 0) {
      uVar16 = 0x3e;
      uVar17 = 0x3c;
    }
    uStack_168 = 0;
    uStack_160 = 0xffffffffffffffff;
    do {
      func_0x00010a10058c(apppppppbStack_78);
      pcVar15 = (char *)apppppppbStack_78[0];
      bVar3 = *(byte *)apppppppbStack_78[0];
      if (bVar3 == 0x2f) {
        if ((((*(byte *)((long)apppppppbStack_78[0] + 1) != 0x2f) ||
             (*(byte *)((long)apppppppbStack_78[0] + 2) != 0x53)) ||
            (*(byte *)((long)apppppppbStack_78[0] + 3) != 0x47)) ||
           (pppppppbVar19 = apppppppbStack_78[0], _strncmp(apppppppbStack_78[0],&UNK_10f63c9d7,0x15)
           , (int)pppppppbVar19 != 0)) {
          bVar10 = uStack_160 <= uStack_168;
          goto LAB_10a30e2b0;
        }
        pbVar7 = (byte *)((long)pcVar15 + 5);
        lVar21 = 1;
        pppppppbVar19 = (byte *******)pcVar15;
        do {
          lVar24 = lVar21;
          pbVar25 = pbVar7;
          pppppppbVar19 = (byte *******)((long)pppppppbVar19 + 1);
          pbVar7 = pbVar25 + 1;
          lVar21 = lVar24 + 1;
        } while (*(byte *)pppppppbVar19 != 10 && *(byte *)pppppppbVar19 != 0);
        while (((ppppppbVar11 = (byte ******)(pbVar25 + -3), pbVar25[-3] != 0x2f ||
                (pbVar25[-2] != 0x2f)) ||
               ((pbVar25[-1] != 0x53 ||
                ((*pbVar25 != 0x47 ||
                 (apppppppbStack_78[0] = (byte *******)ppppppbVar11,
                 _strncmp(ppppppbVar11,&UNK_10f64846f,0x13), (int)ppppppbVar11 != 0))))))) {
          pbVar25 = pbVar25 + 1;
          lVar24 = lVar24 + 1;
        }
        do {
          lVar21 = lVar24;
          bVar3 = *(byte *)((long)pcVar15 + lVar21 + 2);
          lVar24 = lVar21 + 1;
        } while (bVar3 != 10 && bVar3 != 0);
        apppppppbStack_78[0] = (byte *******)((long)pcVar15 + lVar21 + 3);
        lVar21 = lVar21 + 3;
        pppppppbVar19 = param_4;
LAB_10a30e290:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (pppppppbVar19,pcVar15,lVar21);
      }
      else {
        if (bVar3 == 0) break;
        bVar10 = uStack_160 <= uStack_168;
        if (bVar3 != 0x23) goto LAB_10a30e2b0;
        apppppppbStack_78[0] = (byte *******)((long)apppppppbStack_78[0] + 1);
        pppppppbVar19 = (byte *******)apppppppbStack_78;
        FUN_10a1006b0();
        lVar21 = (long)apppppppbStack_78[0] - (long)pppppppbVar19;
        if (lVar21 < 0) goto LAB_10a30eea4;
        uVar8 = uStack_160;
        if (lVar21 == 6) {
          if (*(int *)pppppppbVar19 == 0x69666564 && *(short *)((long)pppppppbVar19 + 4) == 0x656e)
          {
            pppppppbVar19 = (byte *******)apppppppbStack_78;
            FUN_10a1006b0();
            if (uStack_168 < uStack_160) {
              ppppppbStack_120 = (byte ******)((long)apppppppbStack_78[0] - (long)pppppppbVar19);
              pppppppbStack_128 = pppppppbVar19;
              if ((long)ppppppbStack_120 < 0) goto LAB_10a30eea4;
              if ((ppppppbStack_120 == (byte ******)0x0) || (*(byte *)apppppppbStack_78[0] != 0x28))
              {
                pppppppbVar19 = (byte *******)apppppppbStack_78;
                func_0x00010a100740();
                cVar4 = *(char *)pppppppbVar19;
                lVar21 = (long)cVar4;
                if (cVar4 < 0) {
                  ___maskrune(lVar21,0x4000);
                  uVar20 = (uint)lVar21;
                }
                else {
                  uVar20 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 +
                                    (ulong)(uint)(int)cVar4 * 4 + 0x3c) & 0x4000;
                }
                if ((uVar20 != 0) || (*(char *)pppppppbVar19 == '/')) goto LAB_10a30e9d4;
                ppppppbVar11 = (byte ******)((long)apppppppbStack_78[0] - (long)pppppppbVar19);
                if ((long)ppppppbVar11 < 0) goto LAB_10a30eea4;
                pppppppbVar13 = param_2;
                FUN_10a30c570(param_2,pppppppbVar19,ppppppbVar11,param_2 + 0x118,1);
                ppppppbStack_98 = ppppppbStack_120;
                pppppppbStack_a0 = pppppppbStack_128;
                uStack_90 = pppppppbVar13;
                FUN_10a3232f8(param_2 + 0x118,pppppppbStack_128,ppppppbStack_120,&pppppppbStack_a0);
                if (pppppppbVar13 == (byte *******)0x7fffffffffffffff) {
                  ppppppbStack_88 = ppppppbStack_120;
                  uStack_90 = pppppppbStack_128;
                  pppppppbStack_a0 = pppppppbVar19;
                  ppppppbStack_98 = ppppppbVar11;
                  FUN_10a323808(param_2 + 0x112,&pppppppbStack_a0);
                }
                else if (param_2[0x114] != (byte ******)0x0) {
                  FUN_10a30efc4(param_2 + 0x118,param_2 + 0x112,&pppppppbStack_128,pppppppbVar13);
                }
              }
              else {
LAB_10a30e9d4:
                uStack_90 = (byte *******)0x1;
                pppppppbStack_a0 = pppppppbStack_128;
                ppppppbStack_98 = ppppppbStack_120;
                FUN_10a3232f8(param_2 + 0x118,pppppppbStack_128,ppppppbStack_120,&pppppppbStack_a0);
              }
LAB_10a30e9ec:
              bVar10 = false;
            }
            else {
              bVar10 = true;
            }
          }
          else if (*(int *)pppppppbVar19 == 0x646e6669 &&
                   *(short *)((long)pppppppbVar19 + 4) == 0x6665) {
LAB_10a30e608:
            pppppppbVar13 = (byte *******)apppppppbStack_78;
            FUN_10a1006b0();
            ppppppbStack_98 = (byte ******)((long)apppppppbStack_78[0] - (long)pppppppbVar13);
            pppppppbStack_a0 = pppppppbVar13;
            if ((long)ppppppbStack_98 < 0) goto LAB_10a30eea4;
            if (uStack_168 < uStack_160) {
              if (lVar21 == 6) {
                bVar10 = false;
              }
              else {
                _memcmp(pppppppbVar19,&UNK_10f64ed7f,lVar21);
                bVar10 = (int)pppppppbVar19 == 0;
              }
              pppppppbVar19 = param_2 + 0x118;
              FUN_10a3235d4(pppppppbVar19,&pppppppbStack_a0);
              uStack_160 = uStack_168 + 1;
              if ((bool)(bVar10 ^ pppppppbVar19 == (byte *******)0x0)) {
                uStack_160 = 0xffffffffffffffff;
              }
            }
            pppppppbStack_128 =
                 (byte *******)CONCAT71(pppppppbStack_128._1_7_,uStack_160 == 0xffffffffffffffff);
            FUN_10a0cd570(param_2 + 0x115,&pppppppbStack_128);
            bVar10 = true;
            uStack_168 = uStack_168 + 1;
          }
          else if (*(int *)pppppppbVar19 == 0x67617270 &&
                   *(short *)((long)pppppppbVar19 + 4) == 0x616d) {
            pppppppbVar19 = (byte *******)apppppppbStack_78;
            FUN_10a1006b0();
            if ((long)apppppppbStack_78[0] - (long)pppppppbVar19 < 0) goto LAB_10a30eea4;
            if (((long)apppppppbStack_78[0] - (long)pppppppbVar19 == 4) &&
               (*(int *)pppppppbVar19 == 0x65636e6f)) {
              func_0x000107c2827c(param_2 + 0x11d,param_5,param_5);
              goto LAB_10a30eca8;
            }
          }
        }
        else if (lVar21 < 5) {
          if (lVar21 == 2) {
            if (*(short *)pppppppbVar19 == 0x6669) {
              pppppppbVar19 = (byte *******)apppppppbStack_78;
              func_0x00010a100740();
              if ((long)apppppppbStack_78[0] - (long)pppppppbVar19 < 0) goto LAB_10a30eea4;
              if ((uStack_168 < uStack_160) &&
                 (pppppppbVar13 = param_2,
                 FUN_10a30c570(param_2,pppppppbVar19,
                               (long)apppppppbStack_78[0] - (long)pppppppbVar19,param_2 + 0x118,0),
                 uStack_160 = uStack_168 + 1, pppppppbVar13 != (byte *******)0x0)) {
                uStack_160 = 0xffffffffffffffff;
              }
              pppppppbStack_a0 =
                   (byte *******)CONCAT71(pppppppbStack_a0._1_7_,uStack_160 == 0xffffffffffffffff);
              FUN_10a0cd570(param_2 + 0x115,&pppppppbStack_a0);
              bVar10 = true;
              uStack_168 = uStack_168 + 1;
            }
          }
          else {
            if (lVar21 != 4) goto LAB_10a30e2b0;
            if (*(int *)pppppppbVar19 == 0x65736c65) {
              ppppppbVar11 = param_2[0x116];
              if ((ulong)((long)ppppppbVar11 - (long)param_2[0x115]) <= uVar18) goto LAB_10a30edc0;
              if (param_2[0x115] == ppppppbVar11) goto LAB_10a30eea4;
              if (*(char *)((long)ppppppbVar11 + -1) != '\0') {
LAB_10a30e924:
                uVar8 = uStack_168;
                if (uStack_160 <= uStack_168) {
                  uVar8 = uStack_160;
                }
                goto LAB_10a30eca8;
              }
            }
            else {
              if (*(int *)pppppppbVar19 != 0x66696c65) goto LAB_10a30e2b0;
              if ((ulong)((long)param_2[0x116] - (long)param_2[0x115]) <= uVar18) {
                func_0x000107c2b054(&pppppppbStack_128,&UNK_10f64da47);
                FUN_10a012db0(&pppppppbStack_a0,&pppppppbStack_128,apppppppbStack_78[0]);
                FUN_10a00946c(&pppppppbStack_a0);
                goto LAB_10a30eea4;
              }
              pppppppbVar19 = (byte *******)apppppppbStack_78;
              func_0x00010a100740();
              if (((long)apppppppbStack_78[0] - (long)pppppppbVar19 < 0) ||
                 (param_2[0x115] == param_2[0x116])) goto LAB_10a30eea4;
              if ((*(char *)((long)param_2[0x116] + -1) != '\0') ||
                 (pppppppbVar13 = param_2,
                 FUN_10a30c570(param_2,pppppppbVar19,
                               (long)apppppppbStack_78[0] - (long)pppppppbVar19,param_2 + 0x118,0),
                 pppppppbVar13 == (byte *******)0x0)) goto LAB_10a30e924;
              ppppppbVar11 = param_2[0x116];
              if (param_2[0x115] == ppppppbVar11) goto LAB_10a30eea4;
            }
            if (uStack_160 == uStack_168) {
              uStack_160 = 0xffffffffffffffff;
            }
            bVar10 = true;
            *(undefined1 *)((long)ppppppbVar11 + -1) = 1;
          }
        }
        else if (lVar21 == 7) {
          if (*(int *)pppppppbVar19 == 0x73726576 && *(int *)((long)pppppppbVar19 + 3) == 0x6e6f6973
             ) {
            pppppppbVar19 = (byte *******)apppppppbStack_78;
            func_0x00010a100740();
            uStack_90 = (byte *******)CONCAT17(3,(undefined7)uStack_90);
            pppppppbStack_a0._0_4_ = (uint)*(uint3 *)pppppppbVar19;
            pppppppbVar13 = (byte *******)&pppppppbStack_a0;
            __ZNSt3__14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi
                      (pppppppbVar13,0,10);
            pppppppbStack_128 = (byte *******)&UNK_10f610487;
            ppppppbStack_120 = (byte ******)0xb;
            pppppppbVar19 = param_2 + 0x118;
            FUN_10a3238fc(pppppppbVar19,&pppppppbStack_128,&pppppppbStack_128);
            pppppppbVar19[4] = (byte ******)(long)(int)pppppppbVar13;
          }
          else if ((*(int *)pppppppbVar19 == 0x6c636e69 &&
                    *(int *)((long)pppppppbVar19 + 3) == 0x6564756c) && (uStack_168 < uStack_160)) {
            func_0x00010a10058c(apppppppbStack_78);
            bVar3 = *(byte *)apppppppbStack_78[0];
            uVar23 = (uint)(char)bVar3;
            uVar20 = uVar16;
            if (uVar17 != (int)(char)bVar3) {
              if (((param_7 & 1) != 0) || ((int)(char)bVar3 != 0x22)) {
                if ((uVar23 != 0) && (bVar3 != 10)) {
                  do {
                    apppppppbStack_78[0] = (byte *******)((long)apppppppbStack_78[0] + 1);
                  } while (*(byte *)apppppppbStack_78[0] != 10 && *(byte *)apppppppbStack_78[0] != 0
                          );
                  if ((param_7 != 0) && (uVar23 == 0x3c)) goto LAB_10a30eca8;
                }
                FUN_10a09cd78(&pppppppbStack_128,pcVar15,apppppppbStack_78[0],
                              (long)apppppppbStack_78[0] - (long)pcVar15);
                FUN_109feb280(&pppppppbStack_a0,&UNK_10f64da9b,&pppppppbStack_128);
                FUN_10a0029c0(&pppppppbStack_a0);
                goto LAB_10a30eea4;
              }
              uVar20 = 0x22;
            }
            ppppppbVar11 = (byte ******)((long)apppppppbStack_78[0] + 1);
            pppppppbVar19 = (byte *******)ppppppbVar11;
            if ((*(byte *)((long)apppppppbStack_78[0] + 1) != uVar20) &&
               (*(byte *)((long)apppppppbStack_78[0] + 1) != 0)) {
              ppppppbVar6 = (byte ******)((long)apppppppbStack_78[0] + 2);
              do {
                pppppppbVar19 = (byte *******)ppppppbVar6;
                ppppppbVar6 = (byte ******)((long)pppppppbVar19 + 1);
              } while (*(byte *)pppppppbVar19 != uVar20 && *(byte *)pppppppbVar19 != 0);
            }
            apppppppbStack_78[0] = pppppppbVar19;
            FUN_10a09cd78(&pppppppuStack_b8,ppppppbVar11,apppppppbStack_78[0],
                          (long)apppppppbStack_78[0] - (long)ppppppbVar11);
            uVar2 = uStack_b0;
            pppppppuVar5 = pppppppuStack_b8;
            if (-1 < (char)bStack_a1) {
              uVar2 = (ulong)bStack_a1;
              pppppppuVar5 = &pppppppuStack_b8;
            }
            FUN_10ad03cf0(&pppppppbStack_a0,pppppppuVar5,uVar2);
            func_0x0001098998d4(auStack_d0,&uStack_90);
            pppppppbVar19 = param_2 + 0x11d;
            func_0x00010596ff94(pppppppbVar19,auStack_d0);
            if (pppppppbVar19 != (byte *******)0x0) goto LAB_10a30eca8;
            puVar12 = auStack_d0;
            FUN_10a0b40d8(puVar12,&UNK_10f64d9ab);
            if (((ulong)puVar12 & 1) == 0) {
              puVar12 = auStack_d0;
              FUN_10a0b40d8(puVar12,&UNK_10f64da8c);
              if ((int)puVar12 != 0) goto LAB_10a30e800;
            }
            else {
LAB_10a30e800:
              *(char *)(param_2 + 0x122) = '\x01';
            }
            if (uVar17 == uVar23) {
              func_0x000107c2b054(&uStack_f0,"");
            }
            else if (*(char *)((long)param_6 + 0x17) < '\0') {
              func_0x000107c3192c(&uStack_f0,*param_6,param_6[1]);
            }
            else {
              uStack_e8 = param_6[1];
              uStack_f0 = *param_6;
              uStack_e0 = param_6[2];
            }
            uVar14 = param_1;
            FUN_10a30ce64(param_1,param_2,&pppppppuStack_b8,&uStack_f0);
            uVar2 = uStack_e8;
            if (-1 < (long)uStack_e0) {
              uVar2 = uStack_e0 >> 0x38;
            }
            if (uVar2 == 0) {
              FUN_10a30e0c4(param_1,param_2,uVar14,param_4,&pppppppuStack_b8,&uStack_f0,param_7);
            }
            else {
              FUN_10a0b4df8(&pppppppuStack_108,&uStack_f0,&pppppppuStack_b8);
              uVar2 = uStack_100;
              pppppppuVar5 = pppppppuStack_108;
              if (-1 < (char)bStack_f1) {
                uVar2 = (ulong)bStack_f1;
                pppppppuVar5 = &pppppppuStack_108;
              }
              FUN_10ad03cf0(&pppppppbStack_128,pppppppuVar5,uVar2);
              func_0x0001098998d4(auStack_140,&pppppppbStack_128);
              func_0x0001098998d4(auStack_158,auStack_118);
              FUN_10a30e0c4(param_1,param_2,uVar14,param_4,auStack_158,auStack_140,param_7);
              if (cStack_141 < '\0') {
                __ZdlPv(auStack_158[0]);
              }
              if (cStack_129 < '\0') {
                __ZdlPv(auStack_140[0]);
              }
              if ((char)bStack_f1 < '\0') {
                __ZdlPv(pppppppuStack_108);
              }
            }
            if ((long)uStack_e0 < 0) {
              __ZdlPv(uStack_f0);
            }
            goto LAB_10a30eca8;
          }
        }
        else {
          if (lVar21 != 5) goto LAB_10a30e2b0;
          if (*(int *)pppppppbVar19 == 0x65646669 && *(char *)((long)pppppppbVar19 + 4) == 'f')
          goto LAB_10a30e608;
          if (*(int *)pppppppbVar19 == 0x69646e65 && *(char *)((long)pppppppbVar19 + 4) == 'f') {
            ppppppbVar11 = param_2[0x116];
            if ((ulong)((long)ppppppbVar11 - (long)param_2[0x115]) <= uVar18) {
              func_0x000107c2b054(&pppppppbStack_128,&UNK_10f64d9bc);
              FUN_10a012db0(&pppppppbStack_a0,&pppppppbStack_128,apppppppbStack_78[0]);
              FUN_10a00946c(&pppppppbStack_a0);
              goto LAB_10a30eea4;
            }
            if (param_2[0x115] == ppppppbVar11) goto LAB_10a30eea4;
            bVar10 = uStack_168 == uStack_160;
            uStack_168 = uStack_168 - 1;
            if (bVar10) {
              uStack_160 = 0xffffffffffffffff;
            }
            param_2[0x116] = (byte ******)((long)ppppppbVar11 + -1);
            uVar8 = uStack_160;
LAB_10a30eca8:
            uStack_160 = uVar8;
            bVar10 = true;
          }
          else {
            if (*(int *)pppppppbVar19 != 0x7263616d || *(char *)((long)pppppppbVar19 + 4) != 'o') {
              if (*(int *)pppppppbVar19 != 0x65646e75 || *(char *)((long)pppppppbVar19 + 4) != 'f')
              goto LAB_10a30e2b0;
              pppppppbVar19 = (byte *******)apppppppbStack_78;
              FUN_10a1006b0();
              if (uStack_160 <= uStack_168) goto LAB_10a30eca8;
              ppppppbStack_98 = (byte ******)((long)apppppppbStack_78[0] - (long)pppppppbVar19);
              pppppppbStack_a0 = pppppppbVar19;
              if (-1 < (long)ppppppbStack_98) {
                FUN_10a3236d0(param_2 + 0x118,&pppppppbStack_a0);
                goto LAB_10a30e9ec;
              }
              goto LAB_10a30eea4;
            }
            pppppppbVar19 = (byte *******)apppppppbStack_78;
            func_0x00010a100740();
            apppppppbStack_78[0] = pppppppbVar19;
            func_0x00010a10048c();
            apppppppbStack_78[0] = (byte *******)((long)pppppppbVar19 + 9);
            param_2[0x124] = (byte ******)((long)param_2[0x124] + 1);
          }
        }
LAB_10a30e2b0:
        if (*(byte *)apppppppbStack_78[0] != 0 && *(byte *)apppppppbStack_78[0] != 10) {
          do {
            apppppppbStack_78[0] = (byte *******)((long)apppppppbStack_78[0] + 1);
          } while (*(byte *)apppppppbStack_78[0] != 10 && *(byte *)apppppppbStack_78[0] != 0);
        }
        if (!bVar10) {
          ppppppbVar11 = (byte ******)((long)apppppppbStack_78[0] + -1);
          pppppppbVar19 = pppppppbVar1;
          if (pcVar15 <= ppppppbVar11) {
            lVar21 = (ulong)(~(uint)pcVar15 + (int)apppppppbStack_78[0]) << 0x20;
            iVar22 = 2;
            do {
              bVar3 = *(byte *)ppppppbVar11;
              if (0x20 < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x100002200U) == 0) {
                if (bVar3 == 0x5c) {
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                            (pppppppbVar1,pcVar15,lVar21 >> 0x20);
                  if (iVar22 == 0) goto LAB_10a30e294;
                  pcVar15 = " ";
                  lVar21 = 1;
                  goto LAB_10a30e290;
                }
                break;
              }
              ppppppbVar11 = (byte ******)((long)ppppppbVar11 + -1);
              lVar21 = lVar21 + -0x100000000;
              iVar22 = iVar22 + 1;
            } while (pcVar15 <= ppppppbVar11);
          }
          lVar21 = (long)(int)(((int)apppppppbStack_78[0] - (uint)pcVar15) + 1);
          goto LAB_10a30e290;
        }
      }
LAB_10a30e294:
    } while (*(byte *)apppppppbStack_78[0] != 0);
  }
  if ((long)param_2[0x116] - (long)param_2[0x115] == uVar18) {
    ppppppbVar11 = param_2[0x123];
    param_2[0x123] = (byte ******)((long)ppppppbVar11 + -1);
    if (((byte ******)((long)ppppppbVar11 + -1) == (byte ******)0x0) &&
       (param_2[0x124] != (byte ******)0x0)) {
      FUN_10a1007e0(&pppppppbStack_a0,pppppppbVar1);
      if (*(char *)((long)param_2 + 0x88f) < '\0') {
        __ZdlPv(*pppppppbVar1);
      }
      param_2[0x110] = ppppppbStack_98;
      *pppppppbVar1 = (byte ******)pppppppbStack_a0;
      param_2[0x111] = (byte ******)uStack_90;
      param_2[0x124] = (byte ******)0x0;
      ppppppbStack_98 = param_2[0x110];
      pppppppbStack_a0 = (byte *******)*pppppppbVar1;
      param_2[0x110] = (byte ******)0x0;
      param_2[0x111] = (byte ******)0x0;
      *pppppppbVar1 = (byte ******)0x0;
      func_0x000107c2b054(&pppppppbStack_128,"");
      FUN_10a30e0c4(param_1,param_2,&pppppppbStack_a0,param_4,&pppppppbStack_128,param_6,param_7);
      if (cStack_111 < '\0') {
        __ZdlPv(pppppppbStack_128);
      }
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppppppbVar1,&UNK_10f64d48b,1);
    return;
  }
  FUN_10a00946c(&UNK_10f64dafa);
LAB_10a30edc0:
  func_0x000107c2b054(&pppppppbStack_128,&UNK_10f64da02);
  FUN_10a012db0(&pppppppbStack_a0,&pppppppbStack_128,apppppppbStack_78[0]);
  FUN_10a00946c(&pppppppbStack_a0);
LAB_10a30eea4:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10a30eea8);
  (*pcVar9)();
}



/* Entry: 10a30efc4; end: 10a30f193;  */

void FUN_10a30efc4(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar1 = param_2 + 1;
  plVar8 = (long *)param_2[1];
  do {
    if (plVar8 == (long *)0x0) {
      return;
    }
    uVar3 = *param_3;
    FUN_10a003d5c(uVar3,param_3[1],plVar8[4],plVar8[5]);
    plVar7 = plVar8;
    if (((uint)uVar3 >> 7 & 1) == 0) {
      uVar3 = plVar8[4];
      FUN_10a003d5c(uVar3,plVar8[5],*param_3,param_3[1]);
      if (((uint)uVar3 >> 7 & 1) == 0) {
        for (plVar9 = (long *)*plVar8; plVar9 != (long *)0x0;
            plVar9 = *(long **)((long)plVar9 + (uVar4 >> 4 & 8))) {
          uVar4 = plVar9[4];
          FUN_10a003d5c(uVar4,plVar9[5],*param_3,param_3[1]);
          if (-1 < (char)uVar4) {
            plVar7 = plVar9;
          }
        }
        for (plVar8 = (long *)plVar8[1]; plVar8 != (long *)0x0;
            plVar8 = *(long **)((long)plVar8 + lVar5)) {
          uVar3 = *param_3;
          FUN_10a003d5c(uVar3,param_3[1],plVar8[4],plVar8[5]);
          lVar5 = 0;
          plVar9 = plVar8;
          if (-1 < (char)uVar3) {
            lVar5 = 8;
            plVar9 = plVar1;
          }
          plVar1 = plVar9;
        }
        plVar8 = plVar7;
        if (plVar7 != plVar1) {
          do {
            lVar5 = param_1;
            FUN_10a3235d4(param_1,plVar8 + 6);
            if ((lVar5 != 0) && (*(long *)(lVar5 + 0x20) == 0x7fffffffffffffff)) {
              *(undefined8 *)(lVar5 + 0x20) = param_4;
              FUN_10a30efc4(param_1,param_2,lVar5 + 0x10,param_4);
            }
            plVar9 = (long *)plVar8[1];
            if ((long *)plVar8[1] == (long *)0x0) {
              do {
                plVar6 = (long *)plVar8[2];
                bVar2 = (long *)*plVar6 != plVar8;
                plVar8 = plVar6;
              } while (bVar2);
            }
            else {
              do {
                plVar6 = plVar9;
                plVar9 = (long *)*plVar6;
              } while ((long *)*plVar6 != (long *)0x0);
            }
            plVar8 = plVar6;
          } while (plVar6 != plVar1);
          do {
            plVar8 = (long *)plVar7[1];
            plVar9 = plVar7;
            if ((long *)plVar7[1] == (long *)0x0) {
              do {
                plVar6 = (long *)plVar9[2];
                bVar2 = (long *)*plVar6 != plVar9;
                plVar9 = plVar6;
              } while (bVar2);
            }
            else {
              do {
                plVar6 = plVar8;
                plVar8 = (long *)*plVar6;
              } while ((long *)*plVar6 != (long *)0x0);
            }
            if ((long *)*param_2 == plVar7) {
              *param_2 = plVar6;
            }
            param_2[2] = param_2[2] + -1;
            FUN_10a04815c(param_2[1],plVar7);
            __ZdlPv(plVar7);
            plVar7 = plVar6;
          } while (plVar1 != plVar6);
        }
        return;
      }
      plVar7 = plVar8 + 1;
      plVar8 = plVar1;
    }
    plVar1 = plVar8;
    plVar8 = (long *)*plVar7;
  } while( true );
}



/* Entry: 10a30f194; end: 10a30f55b;  */

void FUN_10a30f194(long param_1,long *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ushort uVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  long lVar16;
  long lStack_90;
  ulong uStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  
  lStack_70 = param_1;
  plStack_68 = param_2;
  if ((bRam00000001137eaec8 & 1) == 0) goto LAB_10a30f4fc;
  do {
    uVar1 = uRam00000001137eaf78;
    uVar4 = uRam00000001137eaf80;
    if (-1 < (char)bRam00000001137eaf8f) {
      uVar1 = 0x1137eaf78;
      uVar4 = (ulong)bRam00000001137eaf8f;
    }
    plVar10 = &lStack_70;
    FUN_10a0ee2b4(plVar10,uVar1,uVar4,0);
    if (plVar10 == (long *)0xffffffffffffffff) {
      return;
    }
    lStack_80 = lStack_70;
    plStack_78 = plVar10;
    if ((long)plVar10 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a30f4f0);
      (*pcVar5)();
    }
    plVar11 = &lStack_70;
    FUN_10a166af4(plVar11,&UNK_10f64db37,plVar10);
    if (plVar11 == (long *)0xffffffffffffffff) {
      return;
    }
    uVar3 = *(ushort *)((long)plVar11 + lStack_70 + -2);
    uVar3 = uVar3 >> 8 | uVar3 << 8;
    lVar16 = -2;
    if (uVar3 != 0x696e) {
      lVar16 = -9;
    }
    puVar14 = (undefined *)(lVar16 + (long)plVar11);
    plVar10 = &lStack_80;
    FUN_10a166af4(plVar10,&UNK_10f64db47,0);
    if (plVar10 == (long *)0xffffffffffffffff) {
      puVar14[lStack_70] = 0x2f;
      puVar14[lStack_70 + 1] = 0x2f;
    }
    uVar1 = 0x12;
    if (uVar3 != 0x696e) {
      uVar1 = 0x19;
    }
    plVar10 = &lStack_80;
    FUN_10a166af4(plVar10,&UNK_10f64db99,0);
    if (plVar10 == (long *)0xffffffffffffffff) {
      bVar6 = false;
    }
    else {
      plVar11 = &lStack_80;
      FUN_10a166af4(plVar11,&UNK_10f64dbab,0);
      bVar6 = plVar11 != (long *)0xffffffffffffffff;
    }
    puVar2 = &UNK_10f64db59;
    if (uVar3 != 0x696e) {
      puVar2 = &UNK_10f64db6c;
    }
    plVar11 = &lStack_70;
    FUN_10a0ee2b4(plVar11,puVar2,uVar1,puVar14);
    while( true ) {
      if (plVar11 == (long *)0xffffffffffffffff) {
        plVar10 = &lStack_80;
        FUN_10a166af4(plVar10,&DAT_10f64dbc7,0);
        if (plVar10 != (long *)0xffffffffffffffff) {
          return;
        }
        plVar10 = &lStack_80;
        FUN_10a166af4(plVar10,&DAT_10f64dbd5,0);
        if (plVar10 != (long *)0xffffffffffffffff) {
          return;
        }
        ppuVar13 = &PTR_DAT_110bc3668;
        if (uVar3 != 0x696e) {
          ppuVar13 = &PTR_DAT_110bc3698;
        }
        ppuVar13 = ppuVar13 + 1;
        lVar16 = 0x30;
        do {
          puVar2 = *ppuVar13;
          plVar10 = &lStack_70;
          FUN_10a0ee2b4(plVar10,ppuVar13[-1],puVar2,puVar14);
          if (plVar10 == (long *)0xffffffffffffffff) {
            puVar14 = (undefined *)0xffffffffffffffff;
          }
          else {
            *(undefined1 *)(lStack_70 + (long)plVar10) = 0x2f;
            *(undefined1 *)((long)plVar10 + lStack_70 + 1) = 0x2f;
            puVar14 = (undefined *)((long)plVar10 + (long)puVar2);
          }
          ppuVar13 = ppuVar13 + 2;
          lVar16 = lVar16 + -0x10;
        } while (lVar16 != 0);
        return;
      }
      plVar12 = &lStack_70;
      FUN_10a166af4(plVar12,";",plVar11);
      if (plStack_68 < plVar11) break;
      lStack_90 = lStack_70 + (long)plVar11;
      uStack_88 = (long)plStack_68 - (long)plVar11;
      if ((ulong)((long)plVar12 - (long)plVar11) <= (ulong)((long)plStack_68 - (long)plVar11)) {
        uStack_88 = (long)plVar12 - (long)plVar11;
      }
      if (plVar10 == (long *)0xffffffffffffffff) {
        plVar12 = &lStack_90;
        FUN_10a0ee2b4(plVar12,&UNK_10f64db86,3,0);
        bVar7 = plVar12 != (long *)0xffffffffffffffff;
        if (!bVar6) goto LAB_10a30f3c0;
LAB_10a30f364:
        lVar16 = 0x30;
        puVar15 = (undefined8 *)&UNK_110bc3640;
        do {
          plVar12 = &lStack_90;
          FUN_10a0ee2b4(plVar12,puVar15[-1],*puVar15,0);
          if (plVar12 != (long *)0xffffffffffffffff) goto LAB_10a30f3e8;
          puVar15 = puVar15 + 2;
          lVar16 = lVar16 + -0x10;
        } while (lVar16 != 0);
        bVar8 = false;
      }
      else {
        bVar7 = false;
        if (bVar6) goto LAB_10a30f364;
LAB_10a30f3c0:
        plVar12 = &lStack_90;
        FUN_10a0ee2b4(plVar12,&UNK_10f68e822,6,0);
        bVar8 = plVar12 != (long *)0xffffffffffffffff;
      }
      if (bVar7 || bVar8) {
LAB_10a30f3e8:
        *(undefined1 *)(lStack_70 + (long)plVar11) = 0x2f;
        *(undefined1 *)((long)plVar11 + lStack_70 + 1) = 0x2f;
      }
      puVar14 = (undefined *)(uStack_88 + (long)plVar11);
      plVar11 = &lStack_70;
      FUN_10a0ee2b4(plVar11,puVar2,uVar1,puVar14);
    }
    FUN_109ffdddc(&UNK_10f2fca6e);
LAB_10a30f4fc:
    iVar9 = 0x137eaec8;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      FUN_10aba565c(0x1137eaf78,0xb2);
      ___cxa_atexit(PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev_110346340
                    ,0x1137eaf78,0x100000000);
      ___cxa_guard_release(0x1137eaec8);
    }
  } while( true );
}



/* Entry: 10a30f55c; end: 10a30f637;  */

undefined **
FUN_10a30f55c(long param_1,undefined **param_2,undefined8 param_3,long param_4,undefined **param_5,
             long param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  char cVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined1 *puVar18;
  undefined **ppuVar19;
  undefined *puStack_e0;
  undefined **ppuStack_d8;
  undefined *puStack_d0;
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  undefined **ppuStack_b8;
  undefined *puStack_50;
  undefined1 *puStack_48;
  
  if (param_2 < param_5) {
    puVar10 = &UNK_10f2fca6e;
    FUN_109ffdddc();
    puStack_d0 = puVar10;
    ppuStack_c8 = param_2;
    if ((bRam00000001137eaed0 & 1) == 0) goto LAB_10a30f91c;
    do {
      uVar1 = uRam00000001137eaf90;
      uVar2 = uRam00000001137eaf98;
      if (-1 < (char)bRam00000001137eafa7) {
        uVar1 = 0x1137eaf90;
        uVar2 = (ulong)bRam00000001137eafa7;
      }
      ppuVar11 = &puStack_d0;
      FUN_10a0ee2b4(ppuVar11,uVar1,uVar2,0);
      if (ppuVar11 == (undefined **)0xffffffffffffffff) {
        return (undefined **)0xffffffffffffffff;
      }
      puStack_e0 = puStack_d0;
      ppuStack_d8 = ppuVar11;
      if ((long)ppuVar11 < 0) {
LAB_10a30f90c:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10a30f910);
        (*pcVar6)();
      }
      ppuVar12 = &puStack_e0;
      FUN_10a166af4(&puStack_e0,&UNK_10f64db47,0);
      if (ppuVar12 == (undefined **)0xffffffffffffffff) {
        return (undefined **)0xffffffffffffffff;
      }
      ppuVar12 = (undefined **)((long)ppuStack_c8 - (long)ppuVar11);
      if (ppuVar11 <= ppuStack_c8) {
        puStack_d0 = puStack_d0 + (long)ppuVar11;
        ppuVar11 = &puStack_c0;
        ppuStack_c8 = ppuVar12;
        puStack_c0 = puStack_d0;
        ppuStack_b8 = ppuVar12;
        FUN_10a0ee2b4(ppuVar11,&DAT_10f493349,8,0);
        puVar10 = PTR___DefaultRuneLocale_11034bcf8;
        if (ppuVar11 == (undefined **)0xffffffffffffffff) {
          return (undefined **)0xffffffffffffffff;
        }
        do {
          ppuVar5 = ppuStack_b8;
          puVar16 = puStack_c0;
          ppuVar12 = (undefined **)((long)ppuStack_b8 - (long)ppuVar11);
          if (ppuStack_b8 < ppuVar11 || ppuVar12 == (undefined **)0x0) {
            return ppuVar11;
          }
          ppuVar19 = (undefined **)(puStack_c0 + (long)ppuVar11);
          ppuVar13 = ppuVar19;
          _memchr(ppuVar19,0x3b,ppuVar12);
          ppuVar17 = (undefined **)((long)ppuVar13 - (long)puVar16);
          if (ppuVar13 == (undefined **)0x0 || ppuVar17 == (undefined **)0xffffffffffffffff) {
            return ppuVar13;
          }
          if ((undefined **)((long)ppuVar17 - (long)ppuVar11) <= ppuVar12) {
            ppuVar12 = (undefined **)((long)ppuVar17 - (long)ppuVar11);
          }
          ppuVar13 = ppuVar17;
          if (ppuVar12 == (undefined **)0x0) {
LAB_10a30f800:
            ppuVar19 = ppuVar13;
            if (ppuVar5 <= ppuVar13) goto LAB_10a30f90c;
            do {
              cVar3 = puVar16[(long)ppuVar19];
              lVar15 = (long)cVar3;
              if (cVar3 < 0) {
                ___maskrune(lVar15,0x4000);
                uVar8 = (uint)lVar15;
              }
              else {
                uVar8 = *(uint *)(puVar10 + (ulong)(uint)(int)cVar3 * 4 + 0x3c) & 0x4000;
              }
              puVar4 = puStack_c0;
              if (ppuVar19 == (undefined **)0x0) {
                ppuVar12 = (undefined **)0xffffffffffffffff;
              }
              if (uVar8 != 0) {
                ppuVar12 = ppuVar19;
              }
            } while ((ppuVar19 != (undefined **)0x0) &&
                    (ppuVar19 = (undefined **)((long)ppuVar19 - 1), uVar8 == 0));
            ppuVar12 = (undefined **)((long)ppuVar12 + 1);
            if (ppuStack_b8 < ppuVar12) break;
            uVar2 = (long)ppuStack_b8 - (long)ppuVar12;
            if ((ulong)((long)ppuVar13 - (long)ppuVar12) <=
                (ulong)((long)ppuStack_b8 - (long)ppuVar12)) {
              uVar2 = (long)ppuVar13 - (long)ppuVar12;
            }
            puVar16 = puStack_c0;
            FUN_10a30f55c(puStack_c0,ppuStack_b8,puStack_c0 + (long)ppuVar12,uVar2,ppuVar17,
                          ppuStack_b8);
            if ((((ulong)puVar16 & 1) == 0) &&
               (puVar16 = puStack_c0,
               FUN_10a30f55c(puStack_c0,ppuStack_b8,puVar4 + (long)ppuVar12,uVar2,0,ppuVar12),
               ((ulong)puVar16 & 1) == 0)) {
              puStack_c0[(long)ppuVar11] = 0x2f;
              *(undefined1 *)((long)ppuVar11 + (long)(puStack_c0 + 1)) = 0x2a;
              *(undefined1 *)((long)ppuVar17 + (long)(puStack_c0 + -1)) = 0x2a;
              puStack_c0[(long)ppuVar17] = 0x2f;
            }
          }
          else {
            ppuVar14 = ppuVar19;
            _memchr(ppuVar19,0x2a,ppuVar12);
            if ((ppuVar14 == (undefined **)0x0 || (long)ppuVar14 - (long)ppuVar19 == -1) &&
               (ppuVar14 = ppuVar19, _memchr(ppuVar19,10,ppuVar12),
               ppuVar14 == (undefined **)0x0 || (long)ppuVar14 - (long)ppuVar19 == -1)) {
              ppuVar14 = ppuVar19;
              _memchr(ppuVar19,0x5b,ppuVar12);
              if (ppuVar14 == (undefined **)0x0 || (long)ppuVar14 - (long)ppuVar19 == -1) {
                ppuVar14 = ppuVar19;
                _memchr(ppuVar19,0x3d,ppuVar12);
                if ((ppuVar14 != (undefined **)0x0) && ((long)ppuVar14 - (long)ppuVar19 != -1))
                goto LAB_10a30f8cc;
              }
              else {
                ppuVar13 = (undefined **)(((long)ppuVar14 - (long)ppuVar19) + (long)ppuVar11);
              }
              goto LAB_10a30f800;
            }
            ppuVar17 = (undefined **)((long)ppuVar11 + 1);
          }
LAB_10a30f8cc:
          ppuVar11 = &puStack_c0;
          FUN_10a0ee2b4(ppuVar11,&DAT_10f493349,8,ppuVar17);
          if (ppuVar11 == (undefined **)0xffffffffffffffff) {
            return (undefined **)0xffffffffffffffff;
          }
        } while( true );
      }
      FUN_109ffdddc(&UNK_10f2fca6e);
LAB_10a30f91c:
      iVar9 = 0x137eaed0;
      ___cxa_guard_acquire();
      if (iVar9 != 0) {
        FUN_10aba565c(0x1137eaf90,0xb2);
        ___cxa_atexit(PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev_110346340
                      ,0x1137eaf90,0x100000000);
        ___cxa_guard_release(0x1137eaed0);
      }
    } while( true );
  }
  puVar18 = (undefined1 *)0x0;
  puStack_48 = (undefined1 *)((long)param_2 - (long)param_5);
  if ((undefined1 *)(param_6 - (long)param_5) <= (undefined1 *)((long)param_2 - (long)param_5)) {
    puStack_48 = (undefined1 *)(param_6 - (long)param_5);
  }
  puStack_50 = (undefined *)((long)param_5 + param_1);
  do {
    ppuVar11 = &puStack_50;
    FUN_10a0ee2b4(&puStack_50,param_3,param_4,puVar18);
    if (ppuVar11 == (undefined **)0xffffffffffffffff) break;
    if (puStack_48 <= (undefined1 *)((long)ppuVar11 + -1)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10a30f62c);
      (*pcVar6)();
    }
    uVar8 = (uint)(char)((undefined1 *)((long)ppuVar11 + -1))[(long)puStack_50];
    FUN_10a1083b8();
    puVar18 = (undefined1 *)((long)ppuVar11 + param_4);
    if (puVar18 < puStack_48) {
      uVar7 = (uint)(char)puVar18[(long)puStack_50];
      FUN_10a1083b8();
    }
    else {
      uVar7 = 0;
    }
  } while (((uVar8 | uVar7) & 1) != 0);
  return (undefined **)(ulong)(ppuVar11 != (undefined **)0xffffffffffffffff);
}



/* Entry: 10a30f638; end: 10a30f97b;  */

void FUN_10a30f638(ulong param_1,ulong *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  char cVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong *puVar6;
  code *pcVar7;
  uint uVar8;
  int iVar9;
  ulong *puVar10;
  ulong *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong uStack_90;
  ulong *puStack_88;
  ulong uStack_80;
  ulong *puStack_78;
  ulong uStack_70;
  ulong *puStack_68;
  
  uStack_80 = param_1;
  puStack_78 = param_2;
  if ((bRam00000001137eaed0 & 1) == 0) goto LAB_10a30f91c;
  do {
    uVar1 = uRam00000001137eaf90;
    uVar2 = uRam00000001137eaf98;
    if (-1 < (char)bRam00000001137eafa7) {
      uVar1 = 0x1137eaf90;
      uVar2 = (ulong)bRam00000001137eafa7;
    }
    puVar10 = &uStack_80;
    FUN_10a0ee2b4(puVar10,uVar1,uVar2,0);
    if (puVar10 == (ulong *)0xffffffffffffffff) {
      return;
    }
    uStack_90 = uStack_80;
    puStack_88 = puVar10;
    if ((long)puVar10 < 0) {
LAB_10a30f90c:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10a30f910);
      (*pcVar7)();
    }
    puVar11 = &uStack_90;
    FUN_10a166af4(&uStack_90,&UNK_10f64db47,0);
    if (puVar11 == (ulong *)0xffffffffffffffff) {
      return;
    }
    puVar11 = (ulong *)((long)puStack_78 - (long)puVar10);
    if (puVar10 <= puStack_78) {
      uStack_80 = uStack_80 + (long)puVar10;
      puVar10 = &uStack_70;
      puStack_78 = puVar11;
      uStack_70 = uStack_80;
      puStack_68 = puVar11;
      FUN_10a0ee2b4(puVar10,&DAT_10f493349,8,0);
      puVar4 = PTR___DefaultRuneLocale_11034bcf8;
      if (puVar10 == (ulong *)0xffffffffffffffff) {
        return;
      }
      do {
        puVar6 = puStack_68;
        uVar2 = uStack_70;
        puVar11 = (ulong *)((long)puStack_68 - (long)puVar10);
        if (puStack_68 < puVar10 || puVar11 == (ulong *)0x0) {
          return;
        }
        lVar13 = uStack_70 + (long)puVar10;
        lVar12 = lVar13;
        _memchr(lVar13,0x3b,puVar11);
        puVar15 = (ulong *)(lVar12 - uVar2);
        if (lVar12 == 0 || puVar15 == (ulong *)0xffffffffffffffff) {
          return;
        }
        if ((ulong *)((long)puVar15 - (long)puVar10) <= puVar11) {
          puVar11 = (ulong *)((long)puVar15 - (long)puVar10);
        }
        puVar17 = puVar15;
        if (puVar11 == (ulong *)0x0) {
LAB_10a30f800:
          puVar16 = puVar17;
          if (puVar6 <= puVar17) goto LAB_10a30f90c;
          do {
            cVar3 = *(char *)(uVar2 + (long)puVar16);
            lVar13 = (long)cVar3;
            if (cVar3 < 0) {
              ___maskrune(lVar13,0x4000);
              uVar8 = (uint)lVar13;
            }
            else {
              uVar8 = *(uint *)(puVar4 + (ulong)(uint)(int)cVar3 * 4 + 0x3c) & 0x4000;
            }
            uVar5 = uStack_70;
            if (puVar16 == (ulong *)0x0) {
              puVar11 = (ulong *)0xffffffffffffffff;
            }
            if (uVar8 != 0) {
              puVar11 = puVar16;
            }
          } while ((puVar16 != (ulong *)0x0) && (puVar16 = (ulong *)((long)puVar16 - 1), uVar8 == 0)
                  );
          puVar11 = (ulong *)((long)puVar11 + 1);
          if (puStack_68 < puVar11) break;
          uVar2 = (long)puStack_68 - (long)puVar11;
          if ((ulong)((long)puVar17 - (long)puVar11) <= (ulong)((long)puStack_68 - (long)puVar11)) {
            uVar2 = (long)puVar17 - (long)puVar11;
          }
          uVar14 = uStack_70;
          FUN_10a30f55c(uStack_70,puStack_68,uStack_70 + (long)puVar11,uVar2,puVar15,puStack_68);
          if (((uVar14 & 1) == 0) &&
             (uVar14 = uStack_70,
             FUN_10a30f55c(uStack_70,puStack_68,uVar5 + (long)puVar11,uVar2,0,puVar11),
             (uVar14 & 1) == 0)) {
            *(undefined1 *)(uStack_70 + (long)puVar10) = 0x2f;
            *(undefined1 *)((long)puVar10 + uStack_70 + 1) = 0x2a;
            *(undefined1 *)((long)puVar15 + (uStack_70 - 1)) = 0x2a;
            *(undefined1 *)(uStack_70 + (long)puVar15) = 0x2f;
          }
        }
        else {
          lVar12 = lVar13;
          _memchr(lVar13,0x2a,puVar11);
          if ((lVar12 == 0 || lVar12 - lVar13 == -1) &&
             (lVar12 = lVar13, _memchr(lVar13,10,puVar11), lVar12 == 0 || lVar12 - lVar13 == -1)) {
            lVar12 = lVar13;
            _memchr(lVar13,0x5b,puVar11);
            if (lVar12 == 0 || lVar12 - lVar13 == -1) {
              lVar12 = lVar13;
              _memchr(lVar13,0x3d,puVar11);
              if ((lVar12 != 0) && (lVar12 - lVar13 != -1)) goto LAB_10a30f8cc;
            }
            else {
              puVar17 = (ulong *)((lVar12 - lVar13) + (long)puVar10);
            }
            goto LAB_10a30f800;
          }
          puVar15 = (ulong *)((long)puVar10 + 1);
        }
LAB_10a30f8cc:
        puVar10 = &uStack_70;
        FUN_10a0ee2b4(puVar10,&DAT_10f493349,8,puVar15);
        if (puVar10 == (ulong *)0xffffffffffffffff) {
          return;
        }
      } while( true );
    }
    FUN_109ffdddc(&UNK_10f2fca6e);
LAB_10a30f91c:
    iVar9 = 0x137eaed0;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      FUN_10aba565c(0x1137eaf90,0xb2);
      ___cxa_atexit(PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev_110346340
                    ,0x1137eaf90,0x100000000);
      ___cxa_guard_release(0x1137eaed0);
    }
  } while( true );
}



/* Entry: 10a30f97c; end: 10a30faa3;  */

long * FUN_10a30f97c(undefined8 param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  ppuVar7 = &puStack_30;
  ppuVar4 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  lVar11 = *(long *)(*ppuVar4 + 0x10);
  puStack_30 = &UNK_10f635282;
  uStack_28 = 0x2b;
  if (lVar11 != 0) {
    plVar10 = (long *)(lVar11 + 0x40);
    if (*plVar10 == 0) {
      puVar5 = (undefined *)0xd8;
      __Znwm();
      lVar9 = 0;
      do {
        puVar8 = (undefined8 *)(puVar5 + lVar9);
        puVar8[1] = 0;
        *puVar8 = 0;
        puVar8[3] = 0;
        puVar8[2] = 0;
        *(undefined4 *)(puVar8 + 4) = 0x3f800000;
        lVar9 = lVar9 + 0x28;
      } while (lVar9 != 0x78);
      puVar5[0x78] = 0;
      *(undefined8 *)(puVar5 + 0x80) = 0x32aaaba7;
      *(undefined8 *)(puVar5 + 0x90) = 0;
      *(undefined8 *)(puVar5 + 0x88) = 0;
      *(undefined8 *)(puVar5 + 0xa0) = 0;
      *(undefined8 *)(puVar5 + 0x98) = 0;
      *(undefined8 *)(puVar5 + 0xb0) = 0;
      *(undefined8 *)(puVar5 + 0xa8) = 0;
      *(undefined8 *)(puVar5 + 0xc0) = 0;
      *(undefined8 *)(puVar5 + 0xb8) = 0;
      *(undefined8 *)(puVar5 + 0xcc) = 0;
      *(undefined8 *)(puVar5 + 0xc4) = 0;
      puStack_30 = puVar5;
      FUN_10a30faa4(plVar10,&puStack_30);
      puVar5 = puStack_30;
      puStack_30 = (undefined *)0x0;
      if (puVar5 != (undefined *)0x0) {
        FUN_10a3104c0();
        __ZdlPv();
      }
      lVar9 = *(long *)(lVar11 + 0x40);
      lVar11 = *(long *)(lVar11 + 0x48);
      if (lVar11 != 0) {
        plVar1 = (long *)(lVar11 + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lVar6 = *(long *)(lVar9 + 200);
      *(long *)(lVar9 + 0xc0) = lVar9;
      *(long *)(lVar9 + 200) = lVar11;
      if (lVar6 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    return (long *)*plVar10;
  }
  FUN_10a0edfc4();
  puVar5 = puStack_30;
  puStack_30 = (undefined *)0x0;
  if (puVar5 != (undefined *)0x0) {
    FUN_10a3104c0();
    __ZdlPv();
  }
  __Unwind_Resume();
  lVar11 = *param_2;
  if (lVar11 == 0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    puVar8 = (undefined8 *)0x20;
    __Znwm();
    *puVar8 = &PTR_FUN_110bc4350;
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar8[3] = lVar11;
  }
  *param_2 = 0;
  plVar10 = (long *)ppuVar7[1];
  *ppuVar7 = (undefined *)lVar11;
  ppuVar7[1] = (undefined *)puVar8;
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 1;
    do {
      lVar11 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  return (long *)ppuVar7;
}



/* Entry: 10a30faa4; end: 10a30fb37;  */

long * FUN_10a30faa4(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  
  lVar6 = *param_2;
  if (lVar6 == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)0x20;
    __Znwm();
    *puVar4 = &PTR_FUN_110bc4350;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = lVar6;
  }
  *param_2 = 0;
  plVar5 = (long *)param_1[1];
  *param_1 = lVar6;
  param_1[1] = (long)puVar4;
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
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a30fb38; end: 10a30ffd3;  */

long FUN_10a30fb38(undefined8 *param_1,long param_2,int *param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,char param_8)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  byte bVar8;
  code *pcVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined **ppuVar16;
  int *piVar17;
  undefined **ppuVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long *plVar24;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined8 auStack_c8 [2];
  char cStack_b1;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  char cStack_9c;
  byte bStack_91;
  undefined3 *puStack_90;
  long lStack_88;
  undefined3 uStack_80;
  undefined5 uStack_7d;
  undefined3 uStack_78;
  undefined5 uStack_75;
  undefined3 uStack_70;
  undefined4 uStack_6d;
  char cStack_69;
  undefined4 uStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bStack_91 = (byte)param_4;
  __ZNSt3__15mutex4lockEv(param_2 + 0x80);
  *(undefined1 *)(param_2 + 0x78) = 0;
  uStack_b0 = *(undefined8 *)param_3;
  uStack_a8 = param_5;
  uStack_a4 = param_6;
  uStack_a0 = param_7;
  cStack_9c = param_8;
  __ZNSt3__19to_stringEi(auStack_c8,param_4);
  puVar19 = auStack_c8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar19,0,&UNK_10f64dc92,0x24);
  uVar20 = puVar19[2];
  uStack_70 = (undefined3)uVar20;
  uStack_6d = (undefined4)((ulong)uVar20 >> 0x18);
  cStack_69 = (char)((ulong)uVar20 >> 0x38);
  uStack_78 = (undefined3)puVar19[1];
  uStack_75 = (undefined5)((ulong)puVar19[1] >> 0x18);
  uStack_80 = (undefined3)*puVar19;
  uStack_7d = (undefined5)((ulong)*puVar19 >> 0x18);
  puVar19[1] = 0;
  puVar19[2] = 0;
  *puVar19 = 0;
  lStack_88 = (long)cStack_69;
  if (lStack_88 < 0) {
    puStack_90 = (undefined3 *)CONCAT53(uStack_7d,uStack_80);
    lStack_88 = CONCAT53(uStack_75,uStack_78);
    if ((uint)param_4 < 3) {
      __ZdlPv();
      goto LAB_10a30fc14;
    }
  }
  else {
    puStack_90 = &uStack_80;
    if ((uint)param_4 < 3) {
LAB_10a30fc14:
      if (cStack_b1 < '\0') {
        __ZdlPv(auStack_c8[0]);
      }
      if ((ulong)bStack_91 < 3) {
        lVar11 = param_2 + (ulong)bStack_91 * 0x28;
        puVar19 = &uStack_b0;
        FUN_10a323ba4(lVar11,puVar19,&uStack_b0);
        lVar21 = *(long *)(lVar11 + 0x50);
        if (lVar21 == 0) {
          func_0x00010ae02ecc(0,*param_3);
          func_0x00010ae02ecc();
          func_0x00010ae02f14();
          ppuVar18 = &PTR_PTR_113301338;
          FUN_10ae079a0();
          func_0x00010ae02edc();
          func_0x00010ae02edc();
          func_0x00010ae02f1c();
          FUN_10ae07cd4(ppuVar18,&PTR_PTR_113301338);
          if ((uint)(param_3[1] * *param_3) < *(uint *)(param_2 + 0xd0)) {
            uVar12 = (ulong)bStack_91;
            puVar19 = &uStack_b0;
            FUN_10a30ffd4();
          }
          else {
            uStack_80 = SUB83(param_3,0);
            uStack_7d = (undefined5)((ulong)param_3 >> 0x18);
            uStack_78 = SUB83(&bStack_91,0);
            uStack_75 = (undefined5)((ulong)&bStack_91 >> 0x18);
            uStack_70 = 0;
            uStack_6d = 0;
            cStack_69 = '\0';
            uStack_68 = 0;
            FUN_10a31bca4(1,auStack_c8,0,0);
            uVar12 = (ulong)bStack_91;
            puVar19 = &uStack_b0;
            FUN_10a30ffd4();
            FUN_10a31014c(&uStack_80);
          }
          lVar22 = *(long *)(lVar11 + 0x30);
          uVar1 = 0;
          if (*(long *)(lVar11 + 0x38) != lVar22) {
            uVar1 = (*(long *)(lVar11 + 0x38) - lVar22) * 0x40 - 1;
          }
          lVar21 = *(long *)(lVar11 + 0x50);
          uVar23 = lVar21 + *(long *)(lVar11 + 0x48);
          if (uVar1 == uVar23) {
            FUN_10a324060(lVar11 + 0x28);
            lVar22 = *(long *)(lVar11 + 0x30);
            lVar21 = *(long *)(lVar11 + 0x50);
            uVar23 = *(long *)(lVar11 + 0x48) + lVar21;
          }
          *(ulong *)(*(long *)(lVar22 + (uVar23 >> 9) * 8) + (uVar23 & 0x1ff) * 8) = uVar12;
          lVar21 = lVar21 + 1;
          *(long *)(lVar11 + 0x50) = lVar21;
        }
        bVar8 = bStack_91;
        uVar20 = *(undefined8 *)(param_2 + 0xc0);
        lVar22 = *(long *)(param_2 + 200);
        if (lVar22 != 0) {
          plVar24 = (long *)(lVar22 + 0x10);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
            if (bVar6) {
              *plVar24 = *plVar24 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          lVar21 = *(long *)(lVar11 + 0x50);
        }
        uStack_75 = (undefined5)CONCAT44(uStack_a4,uStack_a8);
        uStack_7d = (undefined5)uStack_b0;
        uStack_78 = (undefined3)((ulong)uStack_b0 >> 0x28);
        uStack_70 = uStack_a4._1_3_;
        uStack_6d = uStack_a0;
        cStack_69 = cStack_9c;
        if (lVar21 != 0) {
          lVar3 = *(long *)(lVar11 + 0x30);
          lVar4 = *(long *)(lVar11 + 0x38);
          lVar2 = 0;
          if (lVar4 != lVar3) {
            lVar2 = (lVar4 - lVar3) * 0x40 + -1;
          }
          uVar12 = *(long *)(lVar11 + 0x48) + lVar21 + -1;
          plVar24 = *(long **)(*(long *)(lVar3 + (uVar12 >> 9) * 8) + (uVar12 & 0x1ff) * 8);
          *(long *)(lVar11 + 0x50) = lVar21 + -1;
          if (0x3ff < lVar2 - uVar12) {
            __ZdlPv(*(undefined8 *)(lVar4 + -8));
            *(long *)(lVar11 + 0x38) = *(long *)(lVar11 + 0x38) + -8;
          }
          if ((plVar24 != (long *)0x0) &&
             (plVar13 = plVar24, (**(code **)(*plVar24 + 0x48))(), (int)plVar13 != 0)) {
            plVar14 = plVar24;
            (**(code **)(*plVar24 + 0x58))(plVar24);
            puVar19 = (undefined8 *)0x0;
            FUN_10ad4b6d4(plVar13,0,0,plVar14);
          }
          if (lVar22 != 0) {
            plVar13 = (long *)(lVar22 + 0x10);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar6) {
                *plVar13 = *plVar13 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          uStack_df = (undefined7)CONCAT53(uStack_75,uStack_78);
          uStack_d8 = (undefined1)((uint5)uStack_75 >> 0x20);
          uStack_e7 = (undefined7)CONCAT53(uStack_7d,uStack_80);
          uStack_e0 = (undefined1)((uint5)uStack_7d >> 0x20);
          uVar7 = CONCAT17(cStack_69,CONCAT43(uStack_6d,uStack_70));
          *param_1 = plVar24;
          puVar15 = (undefined8 *)0x50;
          __Znwm();
          puVar15[7] = CONCAT71(uStack_df,uStack_e0);
          puVar15[6] = CONCAT71(uStack_e7,bVar8);
          *(undefined8 *)((long)puVar15 + 0x41) = uVar7;
          *(ulong *)((long)puVar15 + 0x39) = CONCAT17(uStack_d8,uStack_df);
          *puVar15 = &PTR_FUN_110bc43b0;
          puVar15[1] = 0;
          puVar15[2] = 0;
          puVar15[3] = plVar24;
          puVar15[4] = uVar20;
          puVar15[5] = lVar22;
          *(undefined4 *)((long)puVar15 + 0x4c) = 0;
          param_1[1] = puVar15;
          if (lVar22 != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv(lVar22);
          }
          lVar21 = param_2 + 0x80;
          __ZNSt3__15mutex6unlockEv();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
            ___stack_chk_fail();
            __ZNSt3__15mutex6unlockEv(param_2 + 0x80);
            __Unwind_Resume();
            uVar10 = (uint)lVar21;
            if ((uVar10 < 2) ||
               ((*(int *)(puVar19 + 1) == 1 &&
                (*(int *)(puVar19 + 2) == 1 || *(int *)(puVar19 + 2) == 6)))) {
              if ((uVar10 == 2) || (uVar10 == 1)) {
                piVar17 = (int *)0x113834968;
                FUN_10a090518();
                if (*piVar17 == 1) {
                  lVar21 = 0x90;
                  __Znwm(0x90);
                  FUN_10ad547cc();
                }
                else {
                  lVar21 = 0xb8;
                  __Znwm(0xb8);
                  FUN_10ad55fb4();
                }
                return lVar21;
              }
              if (uVar10 == 0) {
                lVar21 = 0x60;
                __Znwm(0x60);
                FUN_10a315d4c();
                return lVar21;
              }
              func_0x00010ae02f14(0,lVar21);
              ppuVar18 = &PTR_PTR_113301640;
              ppuVar16 = ppuVar18;
              FUN_10ae079a0();
              func_0x00010ae02f1c();
            }
            else {
              func_0x00010ae02ecc(0);
              func_0x00010ae02f4c();
              func_0x00010ae02f14();
              ppuVar18 = &PTR_PTR_1133016b0;
              ppuVar16 = ppuVar18;
              FUN_10ae079a0();
              func_0x00010ae02edc();
              func_0x00010ae02f5c();
              func_0x00010ae02f1c();
            }
            FUN_10ae07cd4(ppuVar16,ppuVar18);
            return 0;
          }
          return lVar21;
        }
      }
      goto LAB_10a30ff58;
    }
  }
  FUN_10a0edfc4(&puStack_90);
LAB_10a30ff58:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10a30ff5c);
  (*pcVar9)();
}



/* Entry: 10a30ffd4; end: 10a31014b;  */

undefined8 FUN_10a30ffd4(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  int *piVar4;
  undefined **ppuVar5;
  
  uVar1 = (uint)param_1;
  if ((uVar1 < 2) ||
     ((*(int *)(param_2 + 8) == 1 &&
      (*(int *)(param_2 + 0x10) == 1 || *(int *)(param_2 + 0x10) == 6)))) {
    if ((uVar1 == 2) || (uVar1 == 1)) {
      piVar4 = (int *)0x113834968;
      FUN_10a090518();
      if (*piVar4 == 1) {
        uVar2 = 0x90;
        __Znwm(0x90);
        FUN_10ad547cc();
      }
      else {
        uVar2 = 0xb8;
        __Znwm(0xb8);
        FUN_10ad55fb4();
      }
      return uVar2;
    }
    if (uVar1 == 0) {
      uVar2 = 0x60;
      __Znwm(0x60);
      FUN_10a315d4c();
      return uVar2;
    }
    func_0x00010ae02f14(0,param_1);
    ppuVar5 = &PTR_PTR_113301640;
    ppuVar3 = ppuVar5;
    FUN_10ae079a0();
    func_0x00010ae02f1c();
  }
  else {
    func_0x00010ae02ecc(0);
    func_0x00010ae02f4c();
    func_0x00010ae02f14();
    ppuVar5 = &PTR_PTR_1133016b0;
    ppuVar3 = ppuVar5;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    func_0x00010ae02f5c();
    func_0x00010ae02f1c();
  }
  FUN_10ae07cd4(ppuVar3,ppuVar5);
  return 0;
}



/* Entry: 10a31014c; end: 10a3103d7;  */

long FUN_10a31014c(long param_1)

{
  undefined8 ****ppppuVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined1 *puStack_1a0;
  ulong uStack_198;
  byte bStack_189;
  undefined1 *puStack_188;
  ulong uStack_180;
  undefined8 ***pppuStack_178;
  ulong uStack_170;
  byte bStack_161;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined1 auStack_150 [56];
  undefined8 uStack_118;
  char cStack_101;
  undefined **appuStack_f0 [19];
  undefined1 uStack_51;
  undefined **ppuVar6;
  
  lVar5 = param_1;
  __ZSt19uncaught_exceptionsv();
  uVar3 = (uint)lVar5;
  FUN_10ad4bc5c();
  if (uVar3 != 0) {
    FUN_10a185264(&pppuStack_178,0x400);
    ppuVar6 = &PTR_PTR_113301378;
    FUN_10ae079a0(0,&PTR_PTR_113301378);
    FUN_10ae07cd4(ppuVar6,&PTR_PTR_113301378);
    FUN_109fed7e0(&ppuStack_160);
    FUN_10a002568(&ppuStack_160,&UNK_10f64ef99,0x1c);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
    FUN_10a002568();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
    FUN_10a002568();
    uStack_51 = **(undefined1 **)(param_1 + 8);
    FUN_10a002568();
    func_0x00010a002480(&puStack_1a0,&ppuStack_158,&uStack_51);
    appuStack_f0[0] = &PTR_DAT_11088d708;
    ppuStack_160 = &PTR_DAT_11088d6e0;
    ppuStack_158 = &PTR_DAT_11088d7b0;
    if (cStack_101 < '\0') {
      __ZdlPv(uStack_118);
    }
    ppuStack_158 = (undefined **)
                   (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
    __ZNSt3__16localeD1Ev(auStack_150);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_160,&PTR_PTR_11088d720);
    __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_f0);
    uStack_180 = uStack_198;
    puStack_188 = puStack_1a0;
    if (-1 < (char)bStack_189) {
      uStack_180 = (ulong)bStack_189;
      puStack_188 = (undefined1 *)&puStack_1a0;
    }
    FUN_10a304b28(&pppuStack_178,&puStack_188);
    if ((char)bStack_189 < '\0') {
      __ZdlPv(puStack_1a0);
    }
    ppppuVar1 = (undefined8 ****)pppuStack_178;
    if (-1 < (char)bStack_161) {
      uStack_170 = (ulong)bStack_161;
      ppppuVar1 = &pppuStack_178;
    }
    FUN_10ae03140(0,ppppuVar1,uStack_170);
    ppuVar6 = &PTR_PTR_113300cb8;
    FUN_10ae079a0();
    FUN_10ae0314c();
    FUN_10ae07cd4(ppuVar6,&PTR_PTR_113300cb8);
    iVar4 = (int)ppuVar6;
    if (((uint)lVar5 == 0) && (__ZSt19uncaught_exceptionsv(), iVar4 == 0)) {
      if ((uVar3 >> 5 & 1) == 0) {
        FUN_10a0029c0(&pppuStack_178);
      }
      else {
        FUN_10a31bdc4(&pppuStack_178);
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a310390);
      (*pcVar2)();
    }
    if ((char)bStack_161 < '\0') {
      __ZdlPv(pppuStack_178);
    }
  }
  return param_1;
}



/* Entry: 10a3103d8; end: 10a3104bf;  */

void FUN_10a3103d8(long param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x80);
  lVar5 = 0;
  *(undefined1 *)(param_1 + 0x78) = 1;
  do {
    for (plVar6 = *(long **)(param_1 + lVar5 + 0x10); plVar6 != (long *)0x0;
        plVar6 = (long *)*plVar6) {
      lVar4 = plVar6[6];
      if (plVar6[7] != lVar4) {
        uVar1 = plVar6[9];
        lVar2 = plVar6[10];
        puVar7 = (undefined8 *)(lVar4 + (uVar1 >> 9) * 8);
        plVar3 = (long *)*puVar7;
        lVar4 = *(long *)(lVar4 + (lVar2 + uVar1 >> 9) * 8);
        plVar8 = plVar3 + (uVar1 & 0x1ff);
        while (plVar8 != (long *)(lVar4 + (lVar2 + uVar1 & 0x1ff) * 8)) {
          if ((long *)*plVar8 != (long *)0x0) {
            (**(code **)(*(long *)*plVar8 + 8))();
            plVar3 = (long *)*puVar7;
          }
          plVar8 = plVar8 + 1;
          if ((long)plVar8 - (long)plVar3 == 0x1000) {
            puVar7 = puVar7 + 1;
            plVar3 = (long *)*puVar7;
            plVar8 = plVar3;
          }
        }
      }
    }
    FUN_10a324730(param_1 + lVar5);
    lVar5 = lVar5 + 0x28;
  } while (lVar5 != 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x80);
  return;
}



/* Entry: 10a3104c0; end: 10a310513;  */

long FUN_10a3104c0(long param_1)

{
  long lVar1;
  
  FUN_10a3103d8();
  if (*(long *)(param_1 + 200) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x80);
  lVar1 = 0x50;
  do {
    func_0x00010a320984(param_1 + lVar1);
    lVar1 = lVar1 + -0x28;
  } while (lVar1 != -0x28);
  return param_1;
}



/* Entry: 10a310514; end: 10a310a5b;  */

void FUN_10a310514(undefined4 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined1 uVar5;
  undefined4 *puVar6;
  long *plVar7;
  undefined4 **ppuVar8;
  undefined4 **ppuVar9;
  undefined4 **ppuVar10;
  undefined4 **ppuVar11;
  long *plVar12;
  long *plVar13;
  undefined4 *puVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined4 *puStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  uint uStack_64;
  
  ppuVar8 = &puStack_90;
  ppuVar9 = &puStack_90;
  ppuVar10 = &puStack_90;
  ppuVar11 = &puStack_90;
  plVar12 = (long *)(param_1 + 0x10);
  lVar16 = *plVar12;
  if (lVar16 != 0) {
    puVar6 = param_1 + lVar16 * 4 + 0xe;
    do {
      lVar16 = lVar16 + -1;
      func_0x00010a234870(puVar6);
      puVar6 = puVar6 + -4;
    } while (lVar16 != 0);
  }
  plVar13 = (long *)(param_1 + 0x1a);
  lVar16 = *plVar13;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (lVar16 != 0) {
    puVar6 = param_1 + lVar16 * 4 + 0x18;
    do {
      lVar16 = lVar16 + -1;
      func_0x00010a234870(puVar6);
      puVar6 = puVar6 + -4;
    } while (lVar16 != 0);
  }
  *plVar13 = 0;
  plVar7 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110bc36c8);
  if ((int)plVar7 == 0) {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110bc36e8);
    FUN_10a324a1c(param_2,param_1 + 6);
    (**(code **)(*param_2 + 0x220))(param_2);
    plVar7 = param_2;
    (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110bc3708);
    if ((int)plVar7 != 0) {
      plStack_88 = (long *)0x0;
      puStack_90 = (undefined4 *)0x0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_70 = 0x3f800000;
      (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110bc3708);
      FUN_10a324a1c(param_2,&puStack_90);
      (**(code **)(*param_2 + 0x220))(param_2);
      uStack_64 = 0;
      FUN_10a22b7b8(&puStack_90,&uStack_64);
      if (ppuVar8 != (undefined4 **)0x0) {
        uStack_64 = 0;
        FUN_10a324808(&puStack_90,0,&uStack_64);
        lVar16 = *plVar12;
        lVar15 = *(long *)((long)ppuVar9 + 0x20);
        uVar18 = *(undefined8 *)((long)ppuVar9 + 0x18);
        *(undefined8 *)((long)(param_1 + lVar16 * 4 + 0x12) + 8) =
             *(undefined8 *)((long)ppuVar9 + 0x20);
        *(undefined8 *)(param_1 + lVar16 * 4 + 0x12) = uVar18;
        if (lVar15 != 0) {
          plVar13 = (long *)(lVar15 + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar3) {
              *plVar13 = *plVar13 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          lVar16 = *plVar12;
        }
        *plVar12 = lVar16 + 1;
      }
      uStack_64 = 1;
      FUN_10a22b7b8(&puStack_90,&uStack_64);
      if (ppuVar10 != (undefined4 **)0x0) {
        uStack_64 = 1;
        FUN_10a324808(&puStack_90,1,&uStack_64);
        lVar16 = *plVar12;
        lVar15 = *(long *)((long)ppuVar11 + 0x20);
        uVar18 = *(undefined8 *)((long)ppuVar11 + 0x18);
        *(undefined8 *)((long)(param_1 + lVar16 * 4 + 0x12) + 8) =
             *(undefined8 *)((long)ppuVar11 + 0x20);
        *(undefined8 *)(param_1 + lVar16 * 4 + 0x12) = uVar18;
        if (lVar15 != 0) {
          plVar13 = (long *)(lVar15 + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar3) {
              *plVar13 = *plVar13 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          lVar16 = *plVar12;
        }
        *plVar12 = lVar16 + 1;
      }
      func_0x00010a23b990(&puStack_90);
      goto LAB_10a31089c;
    }
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110bc3728);
    func_0x00010a3252f4(param_2,plVar12);
    (**(code **)(*param_2 + 0x220))(param_2);
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110bc3748);
    func_0x00010a3252f4(param_2,plVar13);
  }
  else {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110bc36c8);
    plVar7 = param_2;
    (**(code **)(*param_2 + 0x208))();
    if (0 < (int)(uint)plVar7) {
      uVar17 = 0;
      do {
        func_0x00010a324784(&puStack_90);
        puVar6 = puStack_90;
        (**(code **)(*param_2 + 0x218))(param_2,uVar17);
        FUN_10a0ecdc0(puVar6,param_2);
        (**(code **)(*param_2 + 0x220))(param_2);
        if (uVar17 < 2) {
          puVar6 = param_1 + 6;
          uStack_64 = uVar17;
          FUN_10a324808(puVar6,uVar17,&uStack_64);
          FUN_10a310a5c(puVar6 + 6,&puStack_90);
          plVar4 = plStack_88;
          if (plStack_88 != (long *)0x0) {
            plVar1 = plStack_88 + 1;
            do {
              lVar16 = *plVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar16 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plStack_88 + 0x10))(plStack_88);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
            }
          }
        }
        else if (uVar17 < 4) {
          lVar16 = *plVar12;
          *(undefined4 **)(param_1 + lVar16 * 4 + 0x12) = puVar6;
          *(long **)((long)(param_1 + lVar16 * 4 + 0x12) + 8) = plStack_88;
          *plVar12 = lVar16 + 1;
        }
        else {
          lVar16 = *plVar13;
          *(undefined4 **)(param_1 + lVar16 * 4 + 0x1c) = puVar6;
          *(long **)((long)(param_1 + lVar16 * 4 + 0x1c) + 8) = plStack_88;
          *plVar13 = lVar16 + 1;
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 != (uint)plVar7);
    }
  }
  (**(code **)(*param_2 + 0x220))(param_2);
LAB_10a31089c:
  plVar12 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110bc3768);
  if ((int)plVar12 != 0) {
    puStack_90 = (undefined4 *)0x0;
    FUN_10a325394(param_2,&PTR_DAT_110bc3768,&puStack_90);
    *(undefined4 **)(param_1 + 1) = puStack_90;
  }
  plVar12 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110bc3788);
  if ((int)plVar12 != 0) {
    puStack_90 = (undefined4 *)0x0;
    FUN_10a325394(param_2,&PTR_DAT_110bc3788,&puStack_90);
    *(undefined4 **)(param_1 + 3) = puStack_90;
  }
  plVar12 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110bc37a8,0xffffffff);
  *param_1 = (int)plVar12;
  plVar12 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110bc37c8,param_1[0x24]);
  param_1[0x24] = (int)plVar12;
  plVar13 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110bc37e8,plVar12);
  param_1[0x24] = (int)plVar13;
  plVar12 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110bc3808,0);
  puVar6 = param_1 + 0x28;
  *puVar6 = (int)plVar12;
  plVar12 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110bc3828);
  if ((int)plVar12 == 0) {
    puVar14 = param_1 + 6;
    puStack_90 = puVar6;
    FUN_10a23b518(puVar14,puVar6,&UNK_10dd5b8f9,&puStack_90,&uStack_64);
    uVar5 = **(int **)(puVar14 + 6) == 0;
  }
  else {
    (**(code **)(*param_2 + 0x50))(param_2,&PTR_DAT_110bc3828);
    uVar5 = SUB81(param_2,0);
  }
  *(undefined1 *)(param_1 + 5) = uVar5;
  return;
}



/* Entry: 10a310a5c; end: 10a310be7;  */

undefined8 * FUN_10a310a5c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a310be8; end: 10a310c4b;  */

void FUN_10a310be8(long *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  
  (**(code **)(*param_1 + 0x18))();
  plVar1 = param_3 + 1;
  if (*param_3 != 0) {
    lVar2 = *param_3 << 4;
    do {
      FUN_10a325918(param_1,plVar1);
      plVar1 = plVar1 + 2;
      lVar2 = lVar2 + -0x10;
    } while (lVar2 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010a310c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1);
  return;
}



/* Entry: 10a310c4c; end: 10a310d07;  */

void FUN_10a310c4c(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = param_2;
  FUN_10a301b2c();
  if (iVar1 == 0) {
    FUN_10ad4bd78();
    if (iVar1 < 3000) {
      puVar2 = (undefined8 *)0x60;
      __Znwm();
      FUN_10a3113e0();
    }
    else {
      puVar2 = (undefined8 *)0x70;
      __Znwm();
      puVar2[1] = FUN_10a239610;
      puVar2[2] = &PTR_DAT_110950c70;
      *puVar2 = &PTR_FUN_110bc38c0;
      puVar2[0xb] = 0;
      puVar2[0xc] = 0;
      puVar2[10] = 0;
      *(undefined1 *)(puVar2 + 0xd) = 0;
      *(char *)((long)puVar2 + 0x69) = (char)param_2;
    }
  }
  else {
    puVar2 = (undefined8 *)0x60;
    __Znwm();
    FUN_10a3113e0();
  }
  *param_1 = puVar2;
  return;
}



/* Entry: 10a310d08; end: 10a310d93;  */

void FUN_10a310d08(long *param_1,undefined8 *param_2,undefined4 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  *(undefined4 *)(param_1 + 9) = param_3;
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  (**(code **)(*param_1 + 0x38))(param_1,&uStack_30);
  plVar4 = plStack_28;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a310d94; end: 10a311013;  */

void FUN_10a310d94(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined ***pppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  int extraout_w8;
  undefined8 uVar11;
  long *plVar12;
  undefined **extraout_x8;
  long lVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  long *plVar16;
  undefined **unaff_x21;
  undefined8 *puVar17;
  undefined *puStack_180;
  long *plStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined1 **ppuStack_160;
  code *pcStack_158;
  undefined *puStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  long lStack_e8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  long *plStack_50;
  long *plStack_48;
  
  plVar16 = (long *)(param_1 + 0x50);
  *(undefined1 *)(param_1 + 0x68) = 0;
  uVar11 = *(undefined8 *)(*param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x60) = uVar11;
  if ((*plVar16 == 0) ||
     (*(long *)(*plVar16 + 0x28) != (long)((int)uVar11 * (int)((ulong)uVar11 >> 0x20) * 4))) {
    ppuVar6 = &PTR___tlv_bootstrap_11340de10;
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    plVar12 = (long *)*ppuVar6;
    puStack_88 = &UNK_10f64dcb7;
    uStack_80 = 0x40;
    if (plVar12 == (long *)0x0) goto LAB_10a310fe4;
    lVar13 = 0;
    if ((char)plVar12[0x2c] == '\0') {
      lVar13 = 8;
    }
    uStack_80 = 0x600000080;
    puStack_88 = (undefined *)(long)extraout_w8;
    (**(code **)(*(long *)**(undefined8 **)(*plVar12 + lVar13) + 0x70))
              (&plStack_50,(long *)**(undefined8 **)(*plVar12 + lVar13),&puStack_88);
    FUN_10a0e65b0(plVar16,&plStack_50);
    plVar12 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
      do {
        lVar13 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
  }
  else {
    ppuVar6 = &PTR___tlv_bootstrap_11340de10;
    (*(code *)PTR___tlv_bootstrap_11340de10)();
  }
  plVar12 = (long *)*ppuVar6;
  puStack_88 = &UNK_10f64dcf8;
  uStack_80 = 0x4b;
  unaff_x21 = ppuVar6;
  if (plVar12 != (long *)0x0) {
    lVar13 = 0;
    if ((char)plVar12[0x2c] == '\0') {
      lVar13 = 8;
    }
    puVar17 = *(undefined8 **)(*plVar12 + lVar13);
    uVar11 = puVar17[2];
    uVar2 = puVar17[3];
    __ZNSt3__115recursive_mutex4lockEv(uVar2);
    FUN_10a012fec(&plStack_50,*puVar17,uVar11);
    plVar12 = plStack_50;
    (**(code **)(*plStack_50 + 0x48))();
    uStack_80 = uStack_80 & 0xffffffff00000000;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_78 = 0;
    uStack_60 = *(undefined8 *)(*param_2 + 0x18);
    uStack_58 = 1;
    puStack_88 = (undefined *)0x0;
    (**(code **)(*plVar12 + 0x48))();
    param_2 = (long *)*param_2;
    (**(code **)(*param_2 + 0x30))();
    (**(code **)(*plVar12 + 0x68))(plVar12,param_2,*plVar16,&puStack_88,1,6);
    (**(code **)(*plVar12 + 0x40))(plVar12);
    FUN_10a08e2f4(plStack_50);
    if (plStack_48 != (long *)0x0) {
      plVar16 = plStack_48 + 1;
      do {
        lVar13 = *plVar16;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar5) {
          *plVar16 = lVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
      }
    }
    __ZNSt3__115recursive_mutex6unlockEv(uVar2);
    return;
  }
LAB_10a310fe4:
  ppuVar6 = &puStack_88;
  FUN_10a0edfc4();
  func_0x00010a054cfc(&plStack_50);
  __ZNSt3__115recursive_mutex6unlockEv(unaff_x21);
  __Unwind_Resume();
  pcStack_98 = FUN_10a311014;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *extraout_x8 = (undefined *)0x0;
  extraout_x8[1] = (undefined *)0x0;
  puStack_a0 = &stack0xfffffffffffffff0;
  if (*(char *)((long)ppuVar6 + 0x69) == '\x01') {
    plVar12 = (long *)ppuVar6[10];
    (**(code **)(*plVar12 + 0x30))(plVar12,1,0,0);
    iVar3 = *(int *)(ppuVar6 + 0xc);
    puStack_118 = ppuVar6[10];
    puStack_110 = ppuVar6[0xb];
    if (puStack_110 != (undefined *)0x0) {
      plVar16 = (long *)(puStack_110 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar5) {
          *plVar16 = *plVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    ppuVar7 = (undefined **)0xa8;
    puStack_148 = puStack_118;
    ppuStack_140 = (undefined **)puStack_110;
    __Znwm();
    ppuVar7[1] = (undefined *)0x0;
    ppuVar7[2] = (undefined *)0x0;
    plVar16 = (long *)((long)iVar3 << 2);
    *ppuVar7 = (undefined *)&PTR_FUN_110baa4d8;
    puVar10 = ppuVar6[0xc];
    ppuStack_128 = (undefined **)FUN_10a325ac4;
    ppuStack_120 = &PTR_DAT_110bc4480;
    puStack_148 = (undefined *)0x0;
    ppuStack_140 = (undefined **)0x0;
    FUN_10a1b2668(ppuVar7 + 3,plVar12,puVar10,plVar16,*(undefined4 *)(ppuVar6 + 9),&ppuStack_128,0,0
                 );
    (*(code *)*ppuStack_120)(&ppuStack_120);
    pppuVar8 = &ppuStack_138;
    ppuVar9 = extraout_x8;
    ppuStack_138 = ppuVar7 + 3;
    ppuStack_130 = ppuVar7;
    FUN_10a16b1ec();
    ppuVar7 = ppuStack_130;
    if (ppuStack_130 != (undefined **)0x0) {
      ppuVar15 = ppuStack_130 + 1;
      do {
        puVar14 = *ppuVar15;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
        if (bVar5) {
          *ppuVar15 = puVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (puVar14 == (undefined *)0x0) {
        (**(code **)(*ppuStack_130 + 0x10))(ppuStack_130);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppuVar9 = ppuVar7;
      }
    }
    ppuVar7 = ppuStack_140;
    if (ppuStack_140 != (undefined **)0x0) {
      ppuVar15 = ppuStack_140 + 1;
      do {
        puVar14 = *ppuVar15;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
        if (bVar5) {
          *ppuVar15 = puVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (puVar14 == (undefined *)0x0) {
        (**(code **)(*ppuStack_140 + 0x10))(ppuStack_140);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppuVar9 = ppuVar7;
      }
    }
  }
  else {
    puStack_148 = (undefined *)((ulong)puStack_148 & 0xffffffffffffff00);
    FUN_10a195a60(&ppuStack_128,&ppuStack_138,ppuVar6 + 0xc,ppuVar6 + 9,&puStack_148);
    FUN_10a16b1ec(extraout_x8,&ppuStack_128);
    ppuVar9 = ppuStack_120;
    if (ppuStack_120 != (undefined **)0x0) {
      ppuVar7 = ppuStack_120 + 1;
      do {
        puVar10 = *ppuVar7;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
        if (bVar5) {
          *ppuVar7 = puVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (puVar10 == (undefined *)0x0) {
        (**(code **)(*ppuStack_120 + 0x10))(ppuStack_120);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar9);
      }
    }
    pppuVar8 = (undefined ***)ppuVar6[10];
    plVar16 = (long *)0x0;
    (*(code *)(*pppuVar8)[6])(pppuVar8,1,0);
    puVar14 = *extraout_x8;
    puVar10 = *(undefined **)(puVar14 + 0x40);
    if (puVar10 == (undefined *)0x0) {
      puVar10 = (undefined *)(*(long *)(puVar14 + 0x18) * (long)*(int *)(puVar14 + 0x14));
    }
    _memcpy(*(undefined8 *)(puVar14 + 0x28));
    ppuVar9 = (undefined **)ppuVar6[10];
    (**(code **)(*ppuVar9 + 0x38))();
  }
  ppuVar7 = extraout_x8;
  if (ppuVar6[2][8] == '\x01') {
    puVar10 = *extraout_x8;
    plVar16 = (long *)extraout_x8[1];
    FUN_10a31133c(&ppuStack_128,ppuVar6 + 1);
    pppuVar8 = &ppuStack_128;
    ppuVar9 = extraout_x8;
    FUN_10a16b1ec();
    ppuVar7 = ppuStack_120;
    if (ppuStack_120 != (undefined **)0x0) {
      ppuVar15 = ppuStack_120 + 1;
      do {
        puVar14 = *ppuVar15;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
        if (bVar5) {
          *ppuVar15 = puVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (puVar14 == (undefined *)0x0) {
        (**(code **)(*ppuStack_120 + 0x10))(ppuStack_120);
        ppuVar9 = ppuVar7;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
  }
  *(undefined1 *)(ppuVar6 + 0xd) = 1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a0d92c8(ppuVar7);
  ppuVar6 = ppuVar9;
  __Unwind_Resume(ppuVar9);
  pcStack_158 = FUN_10a31133c;
  ppuVar15 = *pppuVar8;
  if (plVar16 != (long *)0x0) {
    plVar12 = plVar16 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *plVar12 = *plVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puStack_180 = puVar10;
  plStack_178 = plVar16;
  ppuStack_170 = ppuVar9;
  ppuStack_168 = ppuVar7;
  ppuStack_160 = &puStack_a0;
  (*(code *)ppuVar15)(ppuVar6,&puStack_180);
  plVar16 = plStack_178;
  if (plStack_178 != (long *)0x0) {
    plVar12 = plStack_178 + 1;
    do {
      lVar13 = *plVar12;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *plVar12 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_178 + 0x10))(plStack_178);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
  }
  return;
}



/* Entry: 10a311014; end: 10a31133b;  */

void FUN_10a311014(undefined **param_1,long param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined **ppuVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  long *plVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined *puStack_f0;
  long *plStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  ulong uStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  ulong uStack_88;
  long lStack_80;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = (undefined *)0x0;
  param_1[1] = (undefined *)0x0;
  if (*(char *)(param_2 + 0x69) == '\x01') {
    plVar4 = *(long **)(param_2 + 0x50);
    (**(code **)(*plVar4 + 0x30))(plVar4,1,0,0);
    iVar1 = *(int *)(param_2 + 0x60);
    uStack_88 = *(ulong *)(param_2 + 0x50);
    lStack_80 = *(long *)(param_2 + 0x58);
    if (lStack_80 != 0) {
      plVar10 = (long *)(lStack_80 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = *plVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppuVar5 = (undefined **)0xa8;
    uStack_b8 = uStack_88;
    ppuStack_b0 = (undefined **)lStack_80;
    __Znwm();
    ppuVar5[1] = (undefined *)0x0;
    ppuVar5[2] = (undefined *)0x0;
    plVar10 = (long *)((long)iVar1 << 2);
    *ppuVar5 = (undefined *)&PTR_FUN_110baa4d8;
    puVar9 = *(undefined **)(param_2 + 0x60);
    ppuStack_98 = (undefined **)FUN_10a325ac4;
    ppuStack_90 = &PTR_DAT_110bc4480;
    uStack_b8 = 0;
    ppuStack_b0 = (undefined **)0x0;
    FUN_10a1b2668(ppuVar5 + 3,plVar4,puVar9,plVar10,*(undefined4 *)(param_2 + 0x48),&ppuStack_98,0,0
                 );
    (*(code *)*ppuStack_90)(&ppuStack_90);
    pppuVar6 = &ppuStack_a8;
    ppuVar7 = param_1;
    ppuStack_a8 = ppuVar5 + 3;
    ppuStack_a0 = ppuVar5;
    FUN_10a16b1ec();
    ppuVar5 = ppuStack_a0;
    if (ppuStack_a0 != (undefined **)0x0) {
      ppuVar8 = ppuStack_a0 + 1;
      do {
        puVar11 = *ppuVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
        if (bVar3) {
          *ppuVar8 = puVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (puVar11 == (undefined *)0x0) {
        (**(code **)(*ppuStack_a0 + 0x10))(ppuStack_a0);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppuVar7 = ppuVar5;
      }
    }
    ppuVar5 = ppuStack_b0;
    if (ppuStack_b0 != (undefined **)0x0) {
      ppuVar8 = ppuStack_b0 + 1;
      do {
        puVar11 = *ppuVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
        if (bVar3) {
          *ppuVar8 = puVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (puVar11 == (undefined *)0x0) {
        (**(code **)(*ppuStack_b0 + 0x10))(ppuStack_b0);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppuVar7 = ppuVar5;
      }
    }
  }
  else {
    uStack_b8 = uStack_b8 & 0xffffffffffffff00;
    FUN_10a195a60(&ppuStack_98,&ppuStack_a8,param_2 + 0x60,param_2 + 0x48,&uStack_b8);
    FUN_10a16b1ec(param_1,&ppuStack_98);
    ppuVar7 = ppuStack_90;
    if (ppuStack_90 != (undefined **)0x0) {
      ppuVar5 = ppuStack_90 + 1;
      do {
        puVar9 = *ppuVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
        if (bVar3) {
          *ppuVar5 = puVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (puVar9 == (undefined *)0x0) {
        (**(code **)(*ppuStack_90 + 0x10))(ppuStack_90);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar7);
      }
    }
    pppuVar6 = *(undefined ****)(param_2 + 0x50);
    plVar10 = (long *)0x0;
    (*(code *)(*pppuVar6)[6])(pppuVar6,1,0);
    puVar11 = *param_1;
    puVar9 = *(undefined **)(puVar11 + 0x40);
    if (puVar9 == (undefined *)0x0) {
      puVar9 = (undefined *)(*(long *)(puVar11 + 0x18) * (long)*(int *)(puVar11 + 0x14));
    }
    _memcpy(*(undefined8 *)(puVar11 + 0x28));
    ppuVar7 = *(undefined ***)(param_2 + 0x50);
    (**(code **)(*ppuVar7 + 0x38))();
  }
  ppuVar5 = param_1;
  if (*(char *)(*(long *)(param_2 + 0x10) + 8) == '\x01') {
    puVar9 = *param_1;
    plVar10 = (long *)param_1[1];
    FUN_10a31133c(&ppuStack_98,param_2 + 8);
    pppuVar6 = &ppuStack_98;
    FUN_10a16b1ec();
    ppuVar5 = ppuStack_90;
    ppuVar7 = param_1;
    if (ppuStack_90 != (undefined **)0x0) {
      ppuVar8 = ppuStack_90 + 1;
      do {
        puVar11 = *ppuVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
        if (bVar3) {
          *ppuVar8 = puVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (puVar11 == (undefined *)0x0) {
        (**(code **)(*ppuStack_90 + 0x10))(ppuStack_90);
        ppuVar7 = ppuVar5;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
  }
  *(undefined1 *)(param_2 + 0x68) = 1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a0d92c8(ppuVar5);
  ppuVar8 = ppuVar7;
  __Unwind_Resume(ppuVar7);
  pcStack_c8 = FUN_10a31133c;
  ppuVar12 = *pppuVar6;
  if (plVar10 != (long *)0x0) {
    plVar4 = plVar10 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puStack_f0 = puVar9;
  plStack_e8 = plVar10;
  ppuStack_e0 = ppuVar7;
  ppuStack_d8 = ppuVar5;
  puStack_d0 = &stack0xfffffffffffffff0;
  (*(code *)ppuVar12)(ppuVar8,&puStack_f0);
  plVar10 = plStack_e8;
  if (plStack_e8 != (long *)0x0) {
    plVar4 = plStack_e8 + 1;
    do {
      lVar13 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  return;
}



/* Entry: 10a31133c; end: 10a3113d3;  */

void FUN_10a31133c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uStack_30;
  long *plStack_28;
  
  pcVar5 = (code *)*param_2;
  if (param_4 != (long *)0x0) {
    plVar1 = param_4 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_30 = param_3;
  plStack_28 = param_4;
  (*pcVar5)(param_1,&uStack_30);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a3113d4; end: 10a3113df;  */

void FUN_10a3113d4(void)

{
  return;
}



/* Entry: 10a3113e0; end: 10a31170f;  */

undefined8 ** FUN_10a3113e0(undefined8 **param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined5 *puVar8;
  undefined5 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 **ppuVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 **ppuStack_258;
  long *plStack_250;
  long *plStack_248;
  long *plStack_240;
  long *plStack_238;
  code *pcStack_230;
  code *pcStack_228;
  long *plStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 uStack_199;
  code *pcStack_198;
  undefined **ppuStack_190;
  undefined8 **ppuStack_188;
  undefined *apuStack_158 [2];
  undefined8 **ppuStack_148;
  char cStack_131;
  undefined8 *apuStack_128 [8];
  undefined8 *apuStack_e8 [7];
  undefined5 uStack_b0;
  undefined3 uStack_ab;
  undefined5 uStack_a8;
  code *pcStack_a0;
  undefined **ppuStack_98;
  undefined8 **ppuStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[2] = &PTR_DAT_110950c70;
  *param_1 = &PTR_FUN_110bc3928;
  param_1[1] = (undefined8 *)FUN_10a239610;
  ppuVar12 = param_1 + 10;
  *ppuVar12 = (undefined8 *)0x0;
  param_1[0xb] = (undefined8 *)0x0;
  puVar5 = (undefined8 *)0x70;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_110bc44b0;
  puVar5[6] = 0;
  puVar5[5] = 0;
  puVar5[8] = 0;
  puVar5[7] = 0;
  puVar5[10] = 0;
  puVar5[9] = 0;
  puVar5[0xc] = 0;
  puVar5[0xb] = 0;
  puVar5[0xd] = 0;
  puVar5[4] = 0;
  puVar5[3] = 0;
  param_1[10] = puVar5 + 3;
  param_1[0xb] = puVar5;
  uStack_b0 = 0x636e797341;
  uStack_ab = 0x786554;
  uStack_a8 = 0x64616552;
  ppuVar6 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  apuStack_158[0] = *ppuVar6;
  lVar7 = 0x1d0;
  __Znwm();
  FUN_10a322f64();
  lVar14 = **ppuVar12;
  **ppuVar12 = lVar7;
  if (lVar14 != 0) {
    FUN_10a31ed38();
  }
  puVar8 = &uStack_b0;
  _strlen();
  puVar9 = puVar8;
  FUN_109d1ba5c();
  pcStack_a0 = FUN_10a325c70;
  ppuStack_98 = &PTR_FUN_110bc44f0;
  pcStack_198 = FUN_10a325cd0;
  ppuStack_190 = &PTR_FUN_110bc4508;
  ppuStack_188 = param_1;
  ppuStack_90 = param_1;
  FUN_109d1b72c(apuStack_158,&uStack_b0,puVar8,*(undefined4 *)((long)puVar9 + 0x14),&pcStack_a0,
                &pcStack_198,0);
  (*(code *)*ppuStack_190)(&ppuStack_190);
  (*(code *)*ppuStack_98)(&ppuStack_98);
  uStack_1a8 = 0x68e0f066500;
  uStack_1b8 = 1;
  uStack_1b0 = 1;
  FUN_109d1d1f0(&pcStack_a0,&uStack_199,apuStack_158,&uStack_1b0,&uStack_1b8,&uStack_1a8);
  ppuVar6 = ppuStack_98;
  pcVar4 = pcStack_a0;
  pcStack_198 = pcStack_a0;
  ppuStack_190 = ppuStack_98;
  uVar10 = 0xb8;
  __Znwm();
  puVar9 = &uStack_b0;
  _strlen(puVar9);
  ppuStack_98 = (undefined **)&UNK_109896774;
  ppuStack_90 = (undefined8 **)&PTR_DAT_110b17068;
  pcStack_88 = pcVar4;
  ppuStack_80 = ppuVar6;
  pcStack_a0 = pcVar4;
  func_0x000109d18d1c(uVar10,&uStack_b0,puVar9,&pcStack_a0);
  func_0x0001092ba41c(&pcStack_a0);
  plVar11 = (long *)(*ppuVar12)[1];
  (*ppuVar12)[1] = uVar10;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x10))();
  }
  (*(code *)*apuStack_e8[0])(apuStack_e8);
  ppuVar12 = apuStack_128;
  (*(code *)*apuStack_128[0])();
  if (cStack_131 < '\0') {
    __ZdlPv();
    ppuVar12 = ppuStack_148;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010a06e274(&pcStack_198);
  FUN_109d1c850(apuStack_158);
  FUN_10a325b2c(apuStack_158);
  *param_1 = &PTR_FUN_110bc3858;
  (*(code *)*param_1[2])(param_1 + 2);
  __Unwind_Resume();
  *ppuVar12 = &PTR_FUN_110bc3928;
  puVar17 = ppuVar12[10];
  puVar5 = (undefined8 *)puVar17[1];
  puVar16 = ppuVar12[0xb];
  if (puVar16 != (undefined8 *)0x0) {
    plVar11 = puVar16 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = *plVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar11 = (long *)puVar5[2];
  plStack_240 = (long *)0x0;
  plStack_238 = (long *)0x0;
  ppuStack_258 = ppuVar12;
  if (plVar11 == (long *)0x0) {
    plVar11 = (long *)0xd0;
    __Znwm();
    *(undefined2 *)(plVar11 + 3) = 4;
    plVar11[2] = 0;
    plVar11[1] = 0x200000006;
    plVar11[5] = 0;
    plVar11[4] = 0;
    plVar11[7] = 0;
    plVar11[6] = 0;
    plVar11[9] = 0;
    plVar11[8] = 0;
    plVar11[0xb] = 0;
    plVar11[10] = 0;
    plVar11[0xd] = 0;
    plVar11[0xc] = 0;
    plVar11[0xf] = 0;
    plVar11[0xe] = 0;
    plVar11[0x10] = 0;
    plVar11[0x11] = (long)(plVar11 + 3);
    plVar11[0x12] = 0;
    *(undefined2 *)(plVar11 + 0x13) = 0;
    *plVar11 = (long)&PTR_DAT_110bc3e90;
    plStack_248 = plVar11 + 0x14;
    *plStack_248 = (long)puVar17;
    plVar11[0x15] = (long)puVar16;
    plVar11[0x16] = (long)&ppuStack_258;
    *(undefined1 *)(plVar11 + 0x18) = 1;
    plVar11[0x19] = 0;
    pcStack_230 = FUN_10a320c94;
    plStack_240 = plVar11;
    plStack_238 = plVar11;
  }
  else {
    pcStack_228 = (code *)0x0;
    (**(code **)(*plVar11 + 0x28))(plVar11,0,&pcStack_228);
    if (pcStack_228 != (code *)0x0) {
      func_0x0001092af97c(&pcStack_228);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a311a40);
      (*pcVar4)();
    }
    plVar13 = (long *)0xd8;
    __Znwm();
    plVar13[2] = 0;
    plVar13[1] = 0x200000006;
    *(undefined2 *)(plVar13 + 3) = 4;
    plVar13[5] = 0;
    plVar13[4] = 0;
    plVar13[7] = 0;
    plVar13[6] = 0;
    plVar13[9] = 0;
    plVar13[8] = 0;
    plVar13[0xb] = 0;
    plVar13[10] = 0;
    plVar13[0xd] = 0;
    plVar13[0xc] = 0;
    plVar13[0xf] = 0;
    plVar13[0xe] = 0;
    plVar13[0x10] = 0;
    plVar13[0x11] = (long)(plVar13 + 3);
    plVar13[0x12] = 0;
    *(undefined2 *)(plVar13 + 0x13) = 0;
    *plVar13 = (long)&PTR_FUN_110bc3e58;
    plVar13[0x14] = (long)puVar17;
    plVar13[0x15] = (long)puVar16;
    plVar13[0x16] = (long)&ppuStack_258;
    *(undefined1 *)(plVar13 + 0x18) = 1;
    plVar13[0x19] = 0;
    plVar13[0x1a] = (long)plVar11;
    if (plStack_240 != (long *)0x0) {
      puVar1 = (ulong *)(plStack_240 + 1);
      do {
        uVar15 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar15 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar15 & 0x1fffffffc) == 4) {
        do {
          uVar15 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar15 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar15 - 1 == 0) {
          (**(code **)(*plStack_240 + 8))();
        }
      }
    }
    plStack_240 = plVar13;
    if (plStack_238 != (long *)0x0) {
      func_0x0001092b4274(&plStack_238);
    }
    pcStack_230 = FUN_10a320c64;
    plStack_248 = plVar13 + 0x14;
    plStack_238 = plVar13;
    __ZNSt13exception_ptrD1Ev(&pcStack_228);
  }
  plVar11 = plStack_248;
  if (plStack_248[5] != 0) {
    func_0x0001092b4274();
  }
  plVar11[5] = (long)plStack_238;
  plStack_238 = (long *)0x0;
  pcStack_228 = pcStack_230;
  plStack_220 = plStack_248;
  puStack_218 = puVar5;
  (**(code **)*puVar5)(puVar5,&pcStack_228);
  plStack_250 = plStack_240;
  plStack_240 = (long *)0x0;
  if (plStack_238 != (long *)0x0) {
    func_0x0001092b4274(&plStack_238);
    if (plStack_240 != (long *)0x0) {
      puVar1 = (ulong *)(plStack_240 + 1);
      do {
        uVar15 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar15 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar15 & 0x1fffffffc) == 4) {
        do {
          uVar15 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar15 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar15 - 1 == 0) {
          (**(code **)(*plStack_240 + 8))();
        }
      }
    }
  }
  FUN_109d1a244(&plStack_250);
  FUN_10a09b344(&plStack_250);
  if (plStack_250 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_250 + 1);
    do {
      uVar15 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar15 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar15 & 0x1fffffffc) == 4) {
      do {
        uVar15 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar15 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar15 - 1 == 0) {
        (**(code **)(*plStack_250 + 8))();
      }
    }
  }
  FUN_10a325b2c(ppuVar12 + 10);
  *ppuVar12 = &PTR_FUN_110bc3858;
  (*(code *)*ppuVar12[2])();
  return ppuVar12;
}



/* Entry: 10a311710; end: 10a311ab3;  */

undefined8 * FUN_10a311710(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 *puStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  code *pcStack_70;
  code *pcStack_68;
  long *plStack_60;
  undefined8 *puStack_58;
  
  *param_1 = &PTR_FUN_110bc3928;
  lVar10 = param_1[10];
  puVar7 = *(undefined8 **)(lVar10 + 8);
  lVar9 = param_1[0xb];
  if (lVar9 != 0) {
    plVar8 = (long *)(lVar9 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar8 = (long *)puVar7[2];
  plStack_80 = (long *)0x0;
  plStack_78 = (long *)0x0;
  puStack_98 = param_1;
  if (plVar8 == (long *)0x0) {
    plVar8 = (long *)0xd0;
    __Znwm();
    *(undefined2 *)(plVar8 + 3) = 4;
    plVar8[2] = 0;
    plVar8[1] = 0x200000006;
    plVar8[5] = 0;
    plVar8[4] = 0;
    plVar8[7] = 0;
    plVar8[6] = 0;
    plVar8[9] = 0;
    plVar8[8] = 0;
    plVar8[0xb] = 0;
    plVar8[10] = 0;
    plVar8[0xd] = 0;
    plVar8[0xc] = 0;
    plVar8[0xf] = 0;
    plVar8[0xe] = 0;
    plVar8[0x10] = 0;
    plVar8[0x11] = (long)(plVar8 + 3);
    plVar8[0x12] = 0;
    *(undefined2 *)(plVar8 + 0x13) = 0;
    *plVar8 = (long)&PTR_DAT_110bc3e90;
    plStack_88 = plVar8 + 0x14;
    *plStack_88 = lVar10;
    plVar8[0x15] = lVar9;
    plVar8[0x16] = (long)&puStack_98;
    *(undefined1 *)(plVar8 + 0x18) = 1;
    plVar8[0x19] = 0;
    pcStack_70 = FUN_10a320c94;
    plStack_80 = plVar8;
    plStack_78 = plVar8;
  }
  else {
    pcStack_68 = (code *)0x0;
    (**(code **)(*plVar8 + 0x28))(plVar8,0,&pcStack_68);
    if (pcStack_68 != (code *)0x0) {
      func_0x0001092af97c(&pcStack_68);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a311a40);
      (*pcVar4)();
    }
    plVar5 = (long *)0xd8;
    __Znwm();
    plVar5[2] = 0;
    plVar5[1] = 0x200000006;
    *(undefined2 *)(plVar5 + 3) = 4;
    plVar5[5] = 0;
    plVar5[4] = 0;
    plVar5[7] = 0;
    plVar5[6] = 0;
    plVar5[9] = 0;
    plVar5[8] = 0;
    plVar5[0xb] = 0;
    plVar5[10] = 0;
    plVar5[0xd] = 0;
    plVar5[0xc] = 0;
    plVar5[0xf] = 0;
    plVar5[0xe] = 0;
    plVar5[0x10] = 0;
    plVar5[0x11] = (long)(plVar5 + 3);
    plVar5[0x12] = 0;
    *(undefined2 *)(plVar5 + 0x13) = 0;
    *plVar5 = (long)&PTR_FUN_110bc3e58;
    plVar5[0x14] = lVar10;
    plVar5[0x15] = lVar9;
    plVar5[0x16] = (long)&puStack_98;
    *(undefined1 *)(plVar5 + 0x18) = 1;
    plVar5[0x19] = 0;
    plVar5[0x1a] = (long)plVar8;
    if (plStack_80 != (long *)0x0) {
      puVar1 = (ulong *)(plStack_80 + 1);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plStack_80 + 8))();
        }
      }
    }
    plStack_80 = plVar5;
    if (plStack_78 != (long *)0x0) {
      func_0x0001092b4274(&plStack_78);
    }
    pcStack_70 = FUN_10a320c64;
    plStack_88 = plVar5 + 0x14;
    plStack_78 = plVar5;
    __ZNSt13exception_ptrD1Ev(&pcStack_68);
  }
  plVar8 = plStack_88;
  if (plStack_88[5] != 0) {
    func_0x0001092b4274();
  }
  plVar8[5] = (long)plStack_78;
  plStack_78 = (long *)0x0;
  pcStack_68 = pcStack_70;
  plStack_60 = plStack_88;
  puStack_58 = puVar7;
  (**(code **)*puVar7)(puVar7,&pcStack_68);
  plStack_90 = plStack_80;
  plStack_80 = (long *)0x0;
  if (plStack_78 != (long *)0x0) {
    func_0x0001092b4274(&plStack_78);
    if (plStack_80 != (long *)0x0) {
      puVar1 = (ulong *)(plStack_80 + 1);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plStack_80 + 8))();
        }
      }
    }
  }
  FUN_109d1a244(&plStack_90);
  FUN_10a09b344(&plStack_90);
  if (plStack_90 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_90 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plStack_90 + 8))();
      }
    }
  }
  FUN_10a325b2c(param_1 + 10);
  *param_1 = &PTR_FUN_110bc3858;
  (**(code **)param_1[2])();
  return param_1;
}



/* Entry: 10a311ab4; end: 10a311ab7;  */

undefined8 * FUN_10a311ab4(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 *puStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  code *pcStack_70;
  code *pcStack_68;
  long *plStack_60;
  undefined8 *puStack_58;
  
  *param_1 = &PTR_FUN_110bc3928;
  lVar10 = param_1[10];
  puVar7 = *(undefined8 **)(lVar10 + 8);
  lVar9 = param_1[0xb];
  if (lVar9 != 0) {
    plVar8 = (long *)(lVar9 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar8 = (long *)puVar7[2];
  plStack_80 = (long *)0x0;
  plStack_78 = (long *)0x0;
  puStack_98 = param_1;
  if (plVar8 == (long *)0x0) {
    plVar8 = (long *)0xd0;
    __Znwm();
    *(undefined2 *)(plVar8 + 3) = 4;
    plVar8[2] = 0;
    plVar8[1] = 0x200000006;
    plVar8[5] = 0;
    plVar8[4] = 0;
    plVar8[7] = 0;
    plVar8[6] = 0;
    plVar8[9] = 0;
    plVar8[8] = 0;
    plVar8[0xb] = 0;
    plVar8[10] = 0;
    plVar8[0xd] = 0;
    plVar8[0xc] = 0;
    plVar8[0xf] = 0;
    plVar8[0xe] = 0;
    plVar8[0x10] = 0;
    plVar8[0x11] = (long)(plVar8 + 3);
    plVar8[0x12] = 0;
    *(undefined2 *)(plVar8 + 0x13) = 0;
    *plVar8 = (long)&PTR_DAT_110bc3e90;
    plStack_88 = plVar8 + 0x14;
    *plStack_88 = lVar10;
    plVar8[0x15] = lVar9;
    plVar8[0x16] = (long)&puStack_98;
    *(undefined1 *)(plVar8 + 0x18) = 1;
    plVar8[0x19] = 0;
    pcStack_70 = FUN_10a320c94;
    plStack_80 = plVar8;
    plStack_78 = plVar8;
  }
  else {
    pcStack_68 = (code *)0x0;
    (**(code **)(*plVar8 + 0x28))(plVar8,0,&pcStack_68);
    if (pcStack_68 != (code *)0x0) {
      func_0x0001092af97c(&pcStack_68);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a311a40);
      (*pcVar4)();
    }
    plVar5 = (long *)0xd8;
    __Znwm();
    plVar5[2] = 0;
    plVar5[1] = 0x200000006;
    *(undefined2 *)(plVar5 + 3) = 4;
    plVar5[5] = 0;
    plVar5[4] = 0;
    plVar5[7] = 0;
    plVar5[6] = 0;
    plVar5[9] = 0;
    plVar5[8] = 0;
    plVar5[0xb] = 0;
    plVar5[10] = 0;
    plVar5[0xd] = 0;
    plVar5[0xc] = 0;
    plVar5[0xf] = 0;
    plVar5[0xe] = 0;
    plVar5[0x10] = 0;
    plVar5[0x11] = (long)(plVar5 + 3);
    plVar5[0x12] = 0;
    *(undefined2 *)(plVar5 + 0x13) = 0;
    *plVar5 = (long)&PTR_FUN_110bc3e58;
    plVar5[0x14] = lVar10;
    plVar5[0x15] = lVar9;
    plVar5[0x16] = (long)&puStack_98;
    *(undefined1 *)(plVar5 + 0x18) = 1;
    plVar5[0x19] = 0;
    plVar5[0x1a] = (long)plVar8;
    if (plStack_80 != (long *)0x0) {
      puVar1 = (ulong *)(plStack_80 + 1);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plStack_80 + 8))();
        }
      }
    }
    plStack_80 = plVar5;
    if (plStack_78 != (long *)0x0) {
      func_0x0001092b4274(&plStack_78);
    }
    pcStack_70 = FUN_10a320c64;
    plStack_88 = plVar5 + 0x14;
    plStack_78 = plVar5;
    __ZNSt13exception_ptrD1Ev(&pcStack_68);
  }
  plVar8 = plStack_88;
  if (plStack_88[5] != 0) {
    func_0x0001092b4274();
  }
  plVar8[5] = (long)plStack_78;
  plStack_78 = (long *)0x0;
  pcStack_68 = pcStack_70;
  plStack_60 = plStack_88;
  puStack_58 = puVar7;
  (**(code **)*puVar7)(puVar7,&pcStack_68);
  plStack_90 = plStack_80;
  plStack_80 = (long *)0x0;
  if (plStack_78 != (long *)0x0) {
    func_0x0001092b4274(&plStack_78);
    if (plStack_80 != (long *)0x0) {
      puVar1 = (ulong *)(plStack_80 + 1);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plStack_80 + 8))();
        }
      }
    }
  }
  FUN_109d1a244(&plStack_90);
  FUN_10a09b344(&plStack_90);
  if (plStack_90 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_90 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plStack_90 + 8))();
      }
    }
  }
  FUN_10a325b2c(param_1 + 10);
  *param_1 = &PTR_FUN_110bc3858;
  (**(code **)param_1[2])();
  return param_1;
}



/* Entry: 10a311ab8; end: 10a311acb;  */

void FUN_10a311ab8(void)

{
  FUN_10a311710();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a311acc; end: 10a311ad3;  */

void FUN_10a311acc(void)

{
  return;
}



/* Entry: 10a311ad4; end: 10a3122fb;  */

void FUN_10a311ad4(long param_1,long *param_2)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined **ppuVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined1 uStack_179;
  long lStack_178;
  long *plStack_170;
  long *plStack_168;
  undefined8 *puStack_160;
  code *pcStack_158;
  code *pcStack_150;
  long *plStack_148;
  long lStack_140;
  long *plStack_138;
  undefined8 uStack_130;
  undefined8 *apuStack_128 [7];
  undefined4 uStack_f0;
  code *pcStack_e0;
  long *plStack_d8;
  undefined8 *puStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 *apuStack_b8 [7];
  undefined4 uStack_80;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*param_2 == 0) {
LAB_10a312230:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    ppuVar7 = &PTR___tlv_bootstrap_11340de10;
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    puVar10 = *ppuVar7;
    if (((puVar10 != (undefined *)0x0) && (puVar10[0xc0] == '\x01')) &&
       (*(long *)(puVar10 + 0x80) != 0)) {
      FUN_10a08dbac(puVar10 + 0x18);
    }
    FUN_10a30bbb8(&pcStack_e0);
    FUN_10a3122fc(*(long *)(param_1 + 0x50) + 0x10,&pcStack_e0);
    if (plStack_d8 != (long *)0x0) {
      plVar8 = plStack_d8 + 1;
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
        (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d8);
      }
    }
    pcStack_e0 = (code *)&UNK_10f64dd51;
    plStack_d8 = (long *)0x39;
    if ((long *)*ppuVar7 != (long *)0x0) {
      lVar11 = *(long *)*ppuVar7;
      puVar15 = *(undefined8 **)(lVar11 + 8);
      plVar8 = (long *)*puVar15;
      (**(code **)(*plVar8 + 0x68))(&pcStack_e0,plVar8,&uStack_179);
      FUN_10a08def8(*(long *)(param_1 + 0x50) + 0x20,&pcStack_e0);
      plVar8 = plStack_d8;
      if (plStack_d8 != (long *)0x0) {
        plVar14 = plStack_d8 + 1;
        do {
          lVar12 = *plVar14;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar5) {
            *plVar14 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      lVar11 = *(long *)(lVar11 + 8);
      uVar2 = *(undefined8 *)(lVar11 + 0x10);
      uVar3 = *(undefined8 *)(lVar11 + 0x18);
      __ZNSt3__115recursive_mutex4lockEv(uVar3);
      FUN_10a012fec(&pcStack_e0,*puVar15,uVar2);
      func_0x00010a08ddcc(*(long *)(param_1 + 0x50) + 0x40,&pcStack_e0);
      plVar8 = plStack_d8;
      if (plStack_d8 != (long *)0x0) {
        plVar14 = plStack_d8 + 1;
        do {
          lVar11 = *plVar14;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar5) {
            *plVar14 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      __ZNSt3__115recursive_mutex6unlockEv(uVar3);
      plStack_148 = *(long **)(param_1 + 0x58);
      pcStack_150 = *(code **)(param_1 + 0x50);
      if (*(long *)(param_1 + 0x58) != 0) {
        plVar8 = (long *)(*(long *)(param_1 + 0x58) + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = *plVar8 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      plStack_138 = (long *)param_2[1];
      lStack_140 = *param_2;
      if (param_2[1] != 0) {
        plVar8 = (long *)(param_2[1] + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = *plVar8 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      uStack_130 = *(undefined8 *)(param_1 + 8);
      (**(code **)(*(long *)(param_1 + 0x10) + 0x18))(apuStack_128);
      plVar8 = plStack_148;
      pcVar6 = pcStack_150;
      uStack_f0 = *(undefined4 *)(param_1 + 0x48);
      puVar15 = *(undefined8 **)(*(long *)(param_1 + 0x50) + 8);
      plVar14 = (long *)puVar15[2];
      plStack_168 = (long *)0x0;
      puStack_160 = (undefined8 *)0x0;
      if (plVar14 == (long *)0x0) {
        pcStack_150 = (code *)0x0;
        plStack_148 = (long *)0x0;
        plStack_d8 = plVar8;
        pcStack_e0 = pcVar6;
        plStack_c8 = plStack_138;
        puStack_d0 = (undefined8 *)lStack_140;
        lStack_140 = 0;
        plStack_138 = (long *)0x0;
        uStack_c0 = uStack_130;
        (*(code *)apuStack_128[0][2])(apuStack_b8,apuStack_128);
        uStack_80 = uStack_f0;
        puVar9 = (undefined8 *)0x130;
        __Znwm();
        *(undefined2 *)(puVar9 + 3) = 4;
        puVar9[2] = 0;
        puVar9[1] = 0x200000006;
        puVar9[0x17] = plStack_d8;
        puVar9[0x16] = pcStack_e0;
        puVar9[5] = 0;
        puVar9[4] = 0;
        puVar9[7] = 0;
        puVar9[6] = 0;
        puVar9[9] = 0;
        puVar9[8] = 0;
        puVar9[0xb] = 0;
        puVar9[10] = 0;
        puVar9[0xd] = 0;
        puVar9[0xc] = 0;
        puVar9[0xf] = 0;
        puVar9[0xe] = 0;
        puVar9[0x10] = 0;
        puVar9[0x11] = puVar9 + 3;
        *puVar9 = &PTR_DAT_110bc3f38;
        puVar9[0x1a] = uStack_c0;
        puVar9[0x12] = 0;
        *(undefined1 *)(puVar9 + 0x13) = 0;
        *(undefined1 *)(puVar9 + 0x15) = 0;
        pcStack_e0 = (code *)0x0;
        plStack_d8 = (long *)0x0;
        puVar9[0x19] = plStack_c8;
        puVar9[0x18] = puStack_d0;
        puStack_d0 = (undefined8 *)0x0;
        plStack_c8 = (long *)0x0;
        (*(code *)apuStack_b8[0][2])(puVar9 + 0x1b,apuStack_b8);
        *(undefined4 *)(puVar9 + 0x22) = uStack_80;
        *(undefined1 *)(puVar9 + 0x24) = 1;
        puVar9[0x25] = 0;
        if (plStack_168 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_168 + 1);
          do {
            uVar13 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar13 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar13 & 0x1fffffffc) == 4) {
            do {
              uVar13 = *puVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar13 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar13 - 1 == 0) {
              (**(code **)(*plStack_168 + 8))();
            }
          }
        }
        plStack_168 = puVar9;
        if (puStack_160 != (undefined8 *)0x0) {
          func_0x0001092b4274(&puStack_160);
        }
        plStack_170 = puVar9 + 0x16;
        puStack_160 = puVar9;
        (*(code *)*apuStack_b8[0])(apuStack_b8);
        plVar8 = plStack_c8;
        if (plStack_c8 != (long *)0x0) {
          plVar14 = plStack_c8 + 1;
          do {
            lVar11 = *plVar14;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar5) {
              *plVar14 = lVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        plVar8 = plStack_d8;
        if (plStack_d8 != (long *)0x0) {
          plVar14 = plStack_d8 + 1;
          do {
            lVar11 = *plVar14;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar5) {
              *plVar14 = lVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        pcStack_158 = FUN_10a320f9c;
      }
      else {
        lStack_178 = 0;
        (**(code **)(*plVar14 + 0x28))(plVar14,0,&lStack_178);
        plVar8 = plStack_148;
        pcVar6 = pcStack_150;
        if (lStack_178 != 0) {
          func_0x0001092af97c(&lStack_178);
          goto LAB_10a312280;
        }
        pcStack_150 = (code *)0x0;
        plStack_148 = (long *)0x0;
        plStack_d8 = plVar8;
        pcStack_e0 = pcVar6;
        plStack_c8 = plStack_138;
        puStack_d0 = (undefined8 *)lStack_140;
        lStack_140 = 0;
        plStack_138 = (long *)0x0;
        uStack_c0 = uStack_130;
        (*(code *)apuStack_128[0][2])(apuStack_b8,apuStack_128);
        uStack_80 = uStack_f0;
        puVar9 = (undefined8 *)0x138;
        __Znwm();
        *(undefined2 *)(puVar9 + 3) = 4;
        puVar9[2] = 0;
        puVar9[1] = 0x200000006;
        puVar9[0x17] = plStack_d8;
        puVar9[0x16] = pcStack_e0;
        puVar9[5] = 0;
        puVar9[4] = 0;
        puVar9[7] = 0;
        puVar9[6] = 0;
        puVar9[9] = 0;
        puVar9[8] = 0;
        puVar9[0xb] = 0;
        puVar9[10] = 0;
        puVar9[0xd] = 0;
        puVar9[0xc] = 0;
        puVar9[0xf] = 0;
        puVar9[0xe] = 0;
        puVar9[0x10] = 0;
        puVar9[0x11] = puVar9 + 3;
        *puVar9 = &PTR_FUN_110bc3ec8;
        puVar9[0x1a] = uStack_c0;
        puVar9[0x12] = 0;
        *(undefined1 *)(puVar9 + 0x13) = 0;
        *(undefined1 *)(puVar9 + 0x15) = 0;
        pcStack_e0 = (code *)0x0;
        plStack_d8 = (long *)0x0;
        puVar9[0x19] = plStack_c8;
        puVar9[0x18] = puStack_d0;
        puStack_d0 = (undefined8 *)0x0;
        plStack_c8 = (long *)0x0;
        (*(code *)apuStack_b8[0][2])(puVar9 + 0x1b,apuStack_b8);
        *(undefined4 *)(puVar9 + 0x22) = uStack_80;
        *(undefined1 *)(puVar9 + 0x24) = 1;
        puVar9[0x25] = 0;
        puVar9[0x26] = plVar14;
        if (plStack_168 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_168 + 1);
          do {
            uVar13 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar13 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar13 & 0x1fffffffc) == 4) {
            do {
              uVar13 = *puVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar13 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar13 - 1 == 0) {
              (**(code **)(*plStack_168 + 8))();
            }
          }
        }
        plStack_168 = puVar9;
        if (puStack_160 != (undefined8 *)0x0) {
          func_0x0001092b4274(&puStack_160);
        }
        plStack_170 = puVar9 + 0x16;
        puStack_160 = puVar9;
        (*(code *)*apuStack_b8[0])(apuStack_b8);
        plVar8 = plStack_c8;
        if (plStack_c8 != (long *)0x0) {
          plVar14 = plStack_c8 + 1;
          do {
            lVar11 = *plVar14;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar5) {
              *plVar14 = lVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        plVar8 = plStack_d8;
        if (plStack_d8 != (long *)0x0) {
          plVar14 = plStack_d8 + 1;
          do {
            lVar11 = *plVar14;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar5) {
              *plVar14 = lVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        pcStack_158 = (code *)0x10a320f6c;
        __ZNSt13exception_ptrD1Ev(&lStack_178);
      }
      plVar8 = plStack_170;
      if (plStack_170[0xf] != 0) {
        func_0x0001092b4274();
      }
      plVar8[0xf] = (long)puStack_160;
      puStack_160 = (undefined8 *)0x0;
      pcStack_e0 = pcStack_158;
      plStack_d8 = plStack_170;
      puStack_d0 = puVar15;
      (**(code **)*puVar15)(puVar15,&pcStack_e0);
      plVar8 = plStack_168;
      plStack_168 = (long *)0x0;
      if (puStack_160 != (undefined8 *)0x0) {
        func_0x0001092b4274(&puStack_160);
        if (plStack_168 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_168 + 1);
          do {
            uVar13 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar13 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar13 & 0x1fffffffc) == 4) {
            do {
              uVar13 = *puVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar13 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar13 - 1 == 0) {
              (**(code **)(*plStack_168 + 8))();
            }
          }
        }
      }
      lVar11 = *(long *)(param_1 + 0x50);
      plVar14 = *(long **)(lVar11 + 0x50);
      if (plVar14 != (long *)0x0) {
        puVar1 = (ulong *)(plVar14 + 1);
        do {
          uVar13 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar13 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar13 & 0x1fffffffc) == 4) {
          do {
            uVar13 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar13 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar13 - 1 == 0) {
            (**(code **)(*plVar14 + 8))();
          }
        }
      }
      *(long **)(lVar11 + 0x50) = plVar8;
      (*(code *)*apuStack_128[0])(apuStack_128);
      plVar8 = plStack_138;
      if (plStack_138 != (long *)0x0) {
        plVar14 = plStack_138 + 1;
        do {
          lVar11 = *plVar14;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar5) {
            *plVar14 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_138 + 0x10))(plStack_138);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      plVar8 = plStack_148;
      if (plStack_148 != (long *)0x0) {
        plVar14 = plStack_148 + 1;
        do {
          lVar11 = *plVar14;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar5) {
            *plVar14 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_148 + 0x10))(plStack_148);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      goto LAB_10a312230;
    }
  }
  FUN_10a0edfc4(&pcStack_e0);
LAB_10a312280:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a312284);
  (*pcVar6)();
}



/* Entry: 10a3122fc; end: 10a312393;  */

undefined8 * FUN_10a3122fc(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a312394; end: 10a31244f;  */

ulong FUN_10a312394(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar8 = *(long *)(param_2 + 0x50);
  plVar1 = (long *)(lVar8 + 0x50);
  if (*plVar1 != 0) {
    lVar8 = *(long *)(param_2 + 0x50);
    if (((uint)*(undefined8 *)(*plVar1 + 0x10) >> 1 & 1) == 0) {
      lVar8 = lVar8 + 0x50;
      FUN_109d1a400(lVar8,2000000000);
      if ((int)lVar8 == 0) {
        puVar6 = &UNK_10f64dd8b;
        FUN_10a00946c();
        if (*(long *)(*(long *)(puVar6 + 0x50) + 0x50) != 0) {
          return *(ulong *)(*(long *)(*(long *)(puVar6 + 0x50) + 0x50) + 0x10) >> 1 & 1;
        }
        return 0;
      }
      lVar8 = *(long *)(param_2 + 0x50);
    }
  }
  if (*(long *)(lVar8 + 0x10) != 0) {
    func_0x00010a301cd0();
    lVar8 = *(long *)(param_2 + 0x50);
  }
  FUN_109d1a244(lVar8 + 0x50);
  uVar5 = lVar8 + 0x50;
  func_0x0001092af8bc(uVar5);
  lVar8 = *(long *)(lVar8 + 0x50);
  if ((*(byte *)(lVar8 + 0xa8) & 1) != 0) {
    lVar7 = *(long *)(lVar8 + 0xa0);
    uVar9 = *(undefined8 *)(lVar8 + 0x98);
    param_1[1] = *(undefined8 *)(lVar8 + 0xa0);
    *param_1 = uVar9;
    if (lVar7 != 0) {
      plVar1 = (long *)(lVar7 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return uVar5;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a312444);
  (*pcVar4)();
}



/* Entry: 10a312450; end: 10a312473;  */

ulong FUN_10a312450(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x50) + 0x50);
  if (lVar1 != 0) {
    return *(ulong *)(lVar1 + 0x10) >> 1 & 1;
  }
  return 0;
}



/* Entry: 10a312474; end: 10a312633;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a312474(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined8 *extraout_x8;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined1 uStack_a1;
  long alStack_a0 [2];
  long *plStack_90;
  undefined1 uStack_81;
  undefined1 uStack_41;
  undefined *puStack_40;
  long *plStack_38;
  
  *(undefined1 *)(param_1 + 0xc0) = 0;
  FUN_10a225fb4(param_1 + 0xa0);
  ppuVar6 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  puVar9 = *ppuVar6;
  if (((puVar9 != (undefined *)0x0) && (puVar9[0xc0] == '\x01')) && (*(long *)(puVar9 + 0x80) != 0))
  {
    FUN_10a08dbac(puVar9 + 0x18);
  }
  FUN_10a30bbb8(&puStack_40);
  FUN_10a3122fc(param_1 + 0x50,&puStack_40);
  if (plStack_38 != (long *)0x0) {
    plVar7 = plStack_38 + 1;
    do {
      lVar10 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  puStack_40 = &UNK_10f64dd51;
  plStack_38 = (long *)0x39;
  if ((long *)*ppuVar6 != (long *)0x0) {
    lVar10 = *(long *)*ppuVar6;
    puVar12 = *(undefined8 **)(lVar10 + 8);
    plVar7 = (long *)*puVar12;
    (**(code **)(*plVar7 + 0x68))(&puStack_40,plVar7,&uStack_41);
    FUN_10a08def8(param_1 + 0x60,&puStack_40);
    plVar7 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
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
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    lVar10 = *(long *)(lVar10 + 8);
    uVar2 = *(undefined8 *)(lVar10 + 0x10);
    uVar3 = *(undefined8 *)(lVar10 + 0x18);
    __ZNSt3__115recursive_mutex4lockEv(uVar3);
    FUN_10a012fec(&puStack_40,*puVar12,uVar2);
    func_0x00010a08ddcc(param_1 + 0x90,&puStack_40);
    plVar7 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
      do {
        lVar10 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    __ZNSt3__115recursive_mutex6unlockEv(uVar3);
    return;
  }
  ppuVar8 = &puStack_40;
  FUN_10a0edfc4();
  __ZNSt3__115recursive_mutex6unlockEv(ppuVar6);
  __Unwind_Resume();
  ppuVar6 = ppuVar8 + 0x16;
  if (*ppuVar6 == (undefined *)0x0) {
    lVar10 = *(long *)(ppuVar8[0x14] + 0x18);
  }
  else {
    lVar11 = *(long *)(*ppuVar6 + 0x10);
    plVar7 = (long *)ppuVar8[0x14];
    lVar10 = plVar7[3];
    if (((lVar11 == plVar7[3]) && (lVar10 = lVar11, ppuVar8[0x17] != (undefined *)0x0)) &&
       (*(long *)(ppuVar8[0x17] + 8) == 0)) goto LAB_10a312700;
  }
  uStack_a1 = 0;
  alStack_a0[0] = lVar10;
  FUN_10a1958ac(alStack_a0 + 1,&uStack_81,alStack_a0,ppuVar8 + 9,&uStack_a1);
  FUN_10a16b1ec(ppuVar6,alStack_a0 + 1);
  plVar7 = plStack_90;
  if (plStack_90 != (long *)0x0) {
    plVar1 = plStack_90 + 1;
    do {
      lVar10 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = (long *)ppuVar8[0x14];
LAB_10a312700:
  (**(code **)(*plVar7 + 0x28))();
  if ((int)plVar7 == 0) {
    FUN_10a301c14(ppuVar8[10]);
  }
  else {
    FUN_10a301b88();
  }
  plVar7 = (long *)ppuVar8[0x14];
  (**(code **)(*plVar7 + 0x10))
            (plVar7,*(undefined8 *)(ppuVar8[0x16] + 0x28),*(undefined8 *)(ppuVar8[0x16] + 0x18),0,
             *(undefined4 *)((long)plVar7 + 0x1c));
  if (ppuVar8[2][8] == '\x01') {
    FUN_10a31133c(alStack_a0 + 1,ppuVar8 + 1,ppuVar8[0x16],ppuVar8[0x17]);
    FUN_10a16b1ec(ppuVar6,alStack_a0 + 1);
    if (plStack_90 != (long *)0x0) {
      plVar7 = plStack_90 + 1;
      do {
        lVar10 = *plVar7;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_90 + 0x10))(plStack_90);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_90);
      }
    }
  }
  alStack_a0[1] = 0;
  plStack_90 = (long *)0x0;
  func_0x00010a099dfc(ppuVar8 + 0x14,alStack_a0 + 1);
  plVar7 = plStack_90;
  if (plStack_90 != (long *)0x0) {
    plVar1 = plStack_90 + 1;
    do {
      lVar10 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  *(undefined1 *)(ppuVar8 + 0x18) = 1;
  puVar9 = ppuVar8[0x17];
  puVar13 = ppuVar8[0x16];
  extraout_x8[1] = ppuVar8[0x17];
  *extraout_x8 = puVar13;
  if (puVar9 != (undefined *)0x0) {
    plVar7 = (long *)(puVar9 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = *plVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  return;
}



/* Entry: 10a312634; end: 10a312833;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a312634(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 uStack_51;
  long alStack_50 [2];
  long *plStack_40;
  undefined1 uStack_31;
  
  plVar7 = (long *)(param_2 + 0xb0);
  if (*plVar7 == 0) {
    lVar6 = *(long *)(*(long *)(param_2 + 0xa0) + 0x18);
  }
  else {
    lVar5 = *(long *)(*plVar7 + 0x10);
    plVar4 = *(long **)(param_2 + 0xa0);
    lVar6 = plVar4[3];
    if (((lVar5 == plVar4[3]) && (lVar6 = lVar5, *(long *)(param_2 + 0xb8) != 0)) &&
       (*(long *)(*(long *)(param_2 + 0xb8) + 8) == 0)) goto LAB_10a312700;
  }
  uStack_51 = 0;
  alStack_50[0] = lVar6;
  FUN_10a1958ac(alStack_50 + 1,&uStack_31,alStack_50,param_2 + 0x48,&uStack_51);
  FUN_10a16b1ec(plVar7,alStack_50 + 1);
  plVar4 = plStack_40;
  if (plStack_40 != (long *)0x0) {
    plVar1 = plStack_40 + 1;
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
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = *(long **)(param_2 + 0xa0);
LAB_10a312700:
  (**(code **)(*plVar4 + 0x28))();
  if ((int)plVar4 == 0) {
    FUN_10a301c14(*(undefined8 *)(param_2 + 0x50));
  }
  else {
    FUN_10a301b88();
  }
  plVar4 = *(long **)(param_2 + 0xa0);
  (**(code **)(*plVar4 + 0x10))
            (plVar4,*(undefined8 *)(*(long *)(param_2 + 0xb0) + 0x28),
             *(undefined8 *)(*(long *)(param_2 + 0xb0) + 0x18),0,
             *(undefined4 *)((long)plVar4 + 0x1c));
  if (*(char *)(*(long *)(param_2 + 0x10) + 8) == '\x01') {
    FUN_10a31133c(alStack_50 + 1,param_2 + 8,*(undefined8 *)(param_2 + 0xb0),
                  *(undefined8 *)(param_2 + 0xb8));
    FUN_10a16b1ec(plVar7,alStack_50 + 1);
    if (plStack_40 != (long *)0x0) {
      plVar7 = plStack_40 + 1;
      do {
        lVar6 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
      }
    }
  }
  alStack_50[1] = 0;
  plStack_40 = (long *)0x0;
  func_0x00010a099dfc(param_2 + 0xa0,alStack_50 + 1);
  plVar7 = plStack_40;
  if (plStack_40 != (long *)0x0) {
    plVar4 = plStack_40 + 1;
    do {
      lVar6 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  *(undefined1 *)(param_2 + 0xc0) = 1;
  lVar6 = *(long *)(param_2 + 0xb8);
  uVar8 = *(undefined8 *)(param_2 + 0xb0);
  param_1[1] = *(undefined8 *)(param_2 + 0xb8);
  *param_1 = uVar8;
  if (lVar6 != 0) {
    plVar7 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 10a312834; end: 10a31283b;  */

void FUN_10a312834(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
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



/* Entry: 10a31283c; end: 10a3128bf;  */

void FUN_10a31283c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010a22baf0(param_1 + 0x60);
  plVar5 = *(long **)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
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



/* Entry: 10a3128c0; end: 10a312b4f;  */

undefined8 * FUN_10a3128c0(undefined8 *param_1,int param_2,undefined1 param_3,undefined8 *param_4)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int iVar9;
  long *plStack_50;
  long *plStack_48;
  
  *param_1 = &PTR_FUN_110bc3990;
  *(undefined1 *)(param_1 + 1) = param_3;
  *(int *)((long)param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  puVar8 = param_1 + 3;
  param_1[4] = 0;
  *puVar8 = 0;
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
  param_1[0x11] = 0;
  if (param_2 == 0) {
    plVar4 = (long *)0xc8;
    __Znwm();
    plVar4[1] = (long)FUN_10a239610;
    plVar4[2] = (long)&PTR_DAT_110950c70;
    *plVar4 = (long)&PTR_FUN_110bc3bd8;
    plVar4[0xb] = 0;
    plVar4[10] = 0;
    plVar4[0xd] = 0;
    plVar4[0xc] = 0;
    plVar4[0xf] = 0;
    plVar4[0xe] = 0;
    plVar4[0x11] = 0;
    plVar4[0x10] = 0;
    plVar4[0x13] = 0;
    plVar4[0x12] = 0;
    plVar4[0x15] = 0;
    plVar4[0x14] = 0;
    plVar4[0x17] = 0;
    plVar4[0x16] = 0;
    *(undefined1 *)(plVar4 + 0x18) = 0;
    plStack_48 = plVar4;
    FUN_10a312b50(puVar8,&plStack_48);
    plVar4 = plStack_48;
    plStack_48 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))();
    }
    if (param_1[8] == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a312adc);
      (*pcVar2)();
    }
    plVar4 = *(long **)(*(long *)(param_1[4] + ((ulong)param_1[7] >> 9) * 8) +
                       (param_1[7] & 0x1ff) * 8);
    (**(code **)(*plVar4 + 0x30))();
    *(char *)((long)param_1 + 0x14) = (char)plVar4;
  }
  else {
    (*(code *)*param_4)(&plStack_48,param_4);
    plVar4 = plStack_48;
    (**(code **)(*plStack_48 + 8))();
    plVar3 = plStack_48;
    (**(code **)(*plStack_48 + 0x30))();
    lVar5 = param_1[4];
    *(char *)((long)param_1 + 0x14) = (char)plVar3;
    uVar1 = 0;
    if (param_1[5] != lVar5) {
      uVar1 = (param_1[5] - lVar5) * 0x40 - 1;
    }
    lVar6 = param_1[8];
    uVar7 = lVar6 + param_1[7];
    if (uVar1 == uVar7) {
      FUN_10a325d50(puVar8);
      lVar6 = param_1[8];
      lVar5 = param_1[4];
      uVar7 = param_1[7] + lVar6;
    }
    plVar3 = plStack_48;
    plStack_48 = (long *)0x0;
    *(long **)(*(long *)(lVar5 + (uVar7 >> 9) * 8) + (uVar7 & 0x1ff) * 8) = plVar3;
    param_1[8] = lVar6 + 1;
    iVar9 = param_2 + (int)plVar4 + -1;
    if (0 < iVar9) {
      do {
        (*(code *)*param_4)(&plStack_50,param_4);
        FUN_10a312b50(puVar8,&plStack_50);
        plVar4 = plStack_50;
        plStack_50 = (long *)0x0;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x20))();
        }
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    plVar4 = plStack_48;
    plStack_48 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))();
    }
  }
  return param_1;
}



/* Entry: 10a312b50; end: 10a312bcb;  */

void FUN_10a312b50(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  lVar2 = *(long *)(param_1 + 8);
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != lVar2) {
    uVar1 = (*(long *)(param_1 + 0x10) - lVar2) * 0x40 - 1;
  }
  lVar3 = *(long *)(param_1 + 0x28);
  uVar4 = lVar3 + *(long *)(param_1 + 0x20);
  if (uVar1 == uVar4) {
    FUN_10a325d50(param_1);
    lVar2 = *(long *)(param_1 + 8);
    lVar3 = *(long *)(param_1 + 0x28);
    uVar4 = *(long *)(param_1 + 0x20) + lVar3;
  }
  lVar2 = *(long *)(lVar2 + (uVar4 >> 9) * 8);
  uVar5 = *param_2;
  *param_2 = 0;
  *(undefined8 *)(lVar2 + (uVar4 & 0x1ff) * 8) = uVar5;
  *(long *)(param_1 + 0x28) = lVar3 + 1;
  return;
}



/* Entry: 10a312bcc; end: 10a313143;  */

void FUN_10a312bcc(long param_1,undefined8 *param_2,undefined8 param_3,ulong *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong uVar20;
  long lVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  int iVar24;
  undefined8 *puVar25;
  ulong uVar26;
  ulong uVar27;
  undefined8 uStack_80;
  long *plStack_78;
  long *plStack_68;
  
  iVar24 = *(int *)(param_1 + 0x40);
  if (0 < iVar24) {
    do {
      lVar12 = *(long *)(param_1 + 0x40);
      if (lVar12 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a312f28);
        (*pcVar5)();
      }
      lVar16 = *(long *)(param_1 + 0x20);
      uVar15 = *(ulong *)(param_1 + 0x38);
      uVar20 = uVar15 >> 6 & 0x3fffffffffffff8;
      lVar21 = *(long *)(lVar16 + uVar20);
      lVar7 = (uVar15 & 0x1ff) * 8;
      plStack_68 = *(long **)(lVar21 + lVar7);
      *(undefined8 *)(lVar21 + lVar7) = 0;
      lVar16 = *(long *)(lVar16 + uVar20);
      plVar6 = *(long **)(lVar16 + lVar7);
      *(undefined8 *)(lVar16 + lVar7) = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x20))();
        uVar15 = *(ulong *)(param_1 + 0x38);
        lVar12 = *(long *)(param_1 + 0x40);
      }
      *(ulong *)(param_1 + 0x38) = uVar15 + 1;
      *(long *)(param_1 + 0x40) = lVar12 + -1;
      if (0x3ff < uVar15 + 1) {
        __ZdlPv(**(undefined8 **)(param_1 + 0x20));
        *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 8;
        *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + -0x200;
      }
      plVar6 = plStack_68;
      (**(code **)(*plStack_68 + 0x10))();
      if (((ulong)plVar6 & 1) != 0) {
        if (plStack_68 == (long *)0x0) {
          return;
        }
        (**(code **)*plStack_68)(plStack_68,param_3);
        plStack_78 = (long *)param_2[1];
        uStack_80 = *param_2;
        if (param_2[1] != 0) {
          plVar6 = (long *)(param_2[1] + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar4) {
              *plVar6 = *plVar6 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        puVar14 = &uStack_80;
        FUN_10a310d08(plStack_68,puVar14,param_5);
        plVar6 = plStack_78;
        if (plStack_78 != (long *)0x0) {
          plVar1 = plStack_78 + 1;
          do {
            lVar12 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar12 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plStack_78 + 0x10))(plStack_78);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
        plVar6 = plStack_68;
        uVar27 = param_4[1];
        uVar26 = *param_4;
        *param_4 = 0;
        param_4[1] = 0;
        puVar25 = *(undefined8 **)(param_1 + 0x50);
        puVar17 = *(undefined8 **)(param_1 + 0x58);
        uVar20 = (long)puVar17 - (long)puVar25;
        plStack_68 = (long *)0x0;
        uVar15 = 0;
        if (uVar20 != 0) {
          uVar15 = ((long)puVar17 - (long)puVar25 >> 3) * 0xaa - 1;
        }
        uVar2 = *(ulong *)(param_1 + 0x68);
        lVar12 = *(long *)(param_1 + 0x70);
        uVar18 = lVar12 + uVar2;
        if (uVar15 != uVar18) goto LAB_10a313068;
        if (uVar2 < 0xaa) {
          puVar22 = *(undefined8 **)(param_1 + 0x60);
          puVar23 = *(undefined8 **)(param_1 + 0x48);
          if (uVar20 < (ulong)((long)puVar22 - (long)puVar23)) {
            uVar10 = 0xff0;
            __Znwm();
            if (puVar22 == puVar17) {
              if (puVar25 == puVar23) {
                lVar12 = (long)puVar22 - (long)puVar25 >> 2;
                if (puVar17 == puVar25) {
                  lVar12 = 1;
                }
                lVar7 = lVar12;
                FUN_10a32628c();
                puVar25 = (undefined8 *)(lVar7 + (lVar12 * 2 + 6U & 0xfffffffffffffff8));
                lVar12 = *(long *)(param_1 + 0x58) - (long)*(undefined8 **)(param_1 + 0x50);
                puVar17 = puVar25;
                if (lVar12 != 0) {
                  puVar17 = (undefined8 *)((long)puVar25 + lVar12);
                  puVar22 = *(undefined8 **)(param_1 + 0x50);
                  puVar23 = puVar25;
                  do {
                    *puVar23 = *puVar22;
                    lVar12 = lVar12 + -8;
                    puVar22 = puVar22 + 1;
                    puVar23 = puVar23 + 1;
                  } while (lVar12 != 0);
                }
                lVar12 = *(long *)(param_1 + 0x48);
                *(long *)(param_1 + 0x48) = lVar7;
                *(undefined8 **)(param_1 + 0x50) = puVar25;
                *(undefined8 **)(param_1 + 0x58) = puVar17;
                *(long *)(param_1 + 0x60) = lVar7 + (long)puVar14 * 8;
                if (lVar12 != 0) {
                  __ZdlPv(lVar12);
                  puVar25 = *(undefined8 **)(param_1 + 0x50);
                }
              }
              puVar25[-1] = uVar10;
              puVar14 = *(undefined8 **)(param_1 + 0x50);
              puVar25 = puVar14 + -1;
              *(undefined8 **)(param_1 + 0x50) = puVar25;
              goto LAB_10a312dec;
            }
            *puVar17 = uVar10;
            *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 8;
          }
          else {
            puVar13 = (undefined8 *)((long)puVar22 - (long)puVar23 >> 2);
            if (puVar22 == puVar23) {
              puVar13 = (undefined8 *)0x1;
            }
            FUN_10a32628c();
            uVar10 = 0xff0;
            puVar11 = puVar14;
            __Znwm();
            puVar22 = (undefined8 *)((long)puVar13 + uVar20);
            puVar23 = puVar13 + (long)puVar14;
            puVar8 = puVar13;
            if (uVar20 == (long)puVar14 * 8) {
              if ((long)uVar20 < 1) {
                puVar14 = (undefined8 *)((long)puVar22 - (long)puVar13 >> 2);
                if (puVar17 == puVar25) {
                  puVar14 = (undefined8 *)0x1;
                }
                puVar8 = puVar14;
                FUN_10a32628c();
                puVar22 = puVar8 + ((ulong)puVar14 >> 2);
                puVar23 = puVar8 + (long)puVar11;
                if (puVar13 != (undefined8 *)0x0) {
                  __ZdlPv(puVar13);
                }
              }
              else {
                lVar12 = ((long)puVar22 - (long)puVar13 >> 3) + 1;
                puVar22 = puVar22 + -((ulong)(lVar12 - (lVar12 >> 0x3f)) >> 1);
              }
            }
            puVar14 = puVar22 + 1;
            *puVar22 = uVar10;
            puVar25 = *(undefined8 **)(param_1 + 0x58);
            puVar17 = puVar8;
            if (puVar25 != *(undefined8 **)(param_1 + 0x50)) {
              do {
                puVar8 = puVar17;
                puVar13 = puVar22;
                if (puVar22 == puVar17) {
                  if (puVar14 < puVar23) {
                    lVar12 = ((long)puVar23 - (long)puVar14 >> 3) + 1;
                    lVar7 = (long)puVar14 - (long)puVar17;
                    lVar16 = (long)puVar14 - (long)puVar17;
                    puVar14 = puVar14 + ((ulong)(lVar12 - (lVar12 >> 0x3f)) >> 1);
                    puVar13 = (undefined8 *)((long)puVar14 - lVar7);
                    if (lVar16 != 0) {
                      _memmove(puVar13,puVar22,lVar16);
                      puVar11 = puVar22;
                    }
                  }
                  else {
                    puVar13 = (undefined8 *)((long)puVar23 - (long)puVar17 >> 2);
                    if ((long)puVar23 - (long)puVar17 == 0) {
                      puVar13 = (undefined8 *)0x1;
                    }
                    puVar8 = puVar13;
                    FUN_10a32628c();
                    puVar13 = (undefined8 *)
                              ((long)puVar8 + ((long)puVar13 * 2 + 6U & 0xfffffffffffffff8));
                    lVar12 = (long)puVar14 - (long)puVar17;
                    puVar14 = puVar13;
                    if (lVar12 != 0) {
                      puVar14 = (undefined8 *)((long)puVar13 + lVar12);
                      puVar23 = puVar13;
                      do {
                        *puVar23 = *puVar22;
                        lVar12 = lVar12 + -8;
                        puVar23 = puVar23 + 1;
                        puVar22 = puVar22 + 1;
                      } while (lVar12 != 0);
                    }
                    puVar23 = puVar8 + (long)puVar11;
                    if (puVar17 != (undefined8 *)0x0) {
                      __ZdlPv(puVar17);
                    }
                  }
                }
                puVar25 = puVar25 + -1;
                puVar22 = puVar13 + -1;
                *puVar22 = *puVar25;
                puVar17 = puVar8;
              } while (puVar25 != *(undefined8 **)(param_1 + 0x50));
            }
            lVar12 = *(long *)(param_1 + 0x48);
            *(undefined8 **)(param_1 + 0x48) = puVar8;
            *(undefined8 **)(param_1 + 0x50) = puVar22;
            *(undefined8 **)(param_1 + 0x58) = puVar14;
            *(undefined8 **)(param_1 + 0x60) = puVar23;
            if (lVar12 != 0) {
              __ZdlPv();
            }
          }
        }
        else {
          *(ulong *)(param_1 + 0x68) = uVar2 - 0xaa;
          puVar14 = puVar25 + 1;
LAB_10a312dec:
          uVar10 = *puVar25;
          *(undefined8 **)(param_1 + 0x50) = puVar14;
          FUN_10a326190(param_1 + 0x48,uVar10);
        }
        puVar25 = *(undefined8 **)(param_1 + 0x50);
        lVar12 = *(long *)(param_1 + 0x70);
        uVar18 = lVar12 + *(long *)(param_1 + 0x68);
LAB_10a313068:
        plVar1 = plStack_68;
        puVar19 = (ulong *)(puVar25[uVar18 / 0xaa] + (uVar18 % 0xaa) * 0x18);
        *puVar19 = (ulong)plVar6;
        puVar19[2] = uVar27;
        puVar19[1] = uVar26;
        *(long *)(param_1 + 0x70) = lVar12 + 1;
        plStack_68 = (long *)0x0;
        if (plVar1 == (long *)0x0) {
          return;
        }
        (**(code **)(*plVar1 + 0x20))();
        return;
      }
      FUN_10a312b50(param_1 + 0x18,&plStack_68);
      plVar6 = plStack_68;
      plStack_68 = (long *)0x0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x20))();
      }
      iVar24 = iVar24 + -1;
    } while (iVar24 != 0);
  }
  ppuVar9 = &PTR_PTR_113301458;
  FUN_10ae079a0(0,&PTR_PTR_113301458);
  FUN_10ae07cd4(ppuVar9,&PTR_PTR_113301458);
  return;
}



/* Entry: 10a313144; end: 10a313277;  */

void FUN_10a313144(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  if (*(long *)(param_2 + 0x70) != 0) {
    puVar6 = (undefined8 *)
             (*(long *)(*(long *)(param_2 + 0x50) + (*(ulong *)(param_2 + 0x68) / 0xaa) * 8) +
             (*(ulong *)(param_2 + 0x68) % 0xaa) * 0x18);
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    (**(code **)(*(long *)*puVar6 + 0x40))(auStack_40);
    FUN_10a16b1ec(param_1,auStack_40);
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      }
    }
    FUN_10a313278(param_1 + 2,puVar6 + 1);
    if ((*(char *)(param_2 + 8) != '\x01') ||
       (iVar4 = *(int *)(param_2 + 0x10), *(int *)(param_2 + 0xc) <= iVar4)) {
      FUN_10a312b50(param_2 + 0x18,puVar6);
      func_0x00010a3262c0(param_2 + 0x48);
      iVar4 = *(int *)(param_2 + 0x10);
    }
    *(int *)(param_2 + 0x10) = iVar4 + 1;
    return;
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 10a313278; end: 10a313377;  */

undefined8 * FUN_10a313278(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a313378; end: 10a313507;  */

void FUN_10a313378(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x70);
  while (lVar1 != 0) {
    FUN_10a312b50(param_1 + 0x18,
                  *(long *)(*(long *)(param_1 + 0x50) + (*(ulong *)(param_1 + 0x68) / 0xaa) * 8) +
                  (*(ulong *)(param_1 + 0x68) % 0xaa) * 0x18);
    func_0x00010a3262c0(param_1 + 0x48);
    lVar1 = *(long *)(param_1 + 0x70);
  }
  return;
}



/* Entry: 10a313508; end: 10a31350b;  */

undefined8 * FUN_10a313508(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc3990;
  func_0x00010a32162c(param_1 + 0xf);
  FUN_10a321688(param_1 + 9);
  FUN_10a325960(param_1 + 3);
  return param_1;
}



/* Entry: 10a31350c; end: 10a31368f;  */

undefined8 * FUN_10a31350c(undefined8 *param_1,uint param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plStack_48;
  
  *param_1 = &PTR_FUN_110bc39b0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  if ((int)param_2 < 2) {
    param_2 = 1;
  }
  uVar11 = (ulong)param_2;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  puVar5 = (undefined8 *)(uVar11 << 5);
  *(undefined8 *)((long)param_1 + 0x79) = 0;
  *(undefined8 *)((long)param_1 + 0x71) = 0;
  __Znwm();
  puVar1 = puVar5 + uVar11 * 4;
  puVar8 = puVar5;
  do {
    puVar8[1] = 0;
    *puVar8 = 0;
    puVar8[3] = 0;
    puVar8[2] = 0;
    *(undefined4 *)((long)puVar8 + 0x1c) = 0x3f000000;
    puVar8 = puVar8 + 4;
  } while (puVar8 != puVar1);
  lVar9 = 0;
  uVar10 = 0;
  param_1[1] = puVar5;
  param_1[2] = puVar1;
  param_1[3] = puVar1;
  do {
    (*(code *)*param_3)(&plStack_48,param_3);
    plVar7 = plStack_48;
    if ((ulong)((long)(param_1[2] - param_1[1]) >> 5) <= uVar10) goto LAB_10a313664;
    lVar2 = param_1[1] + lVar9;
    plStack_48 = (long *)0x0;
    plVar6 = *(long **)(lVar2 + 0x10);
    *(long **)(lVar2 + 0x10) = plVar7;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))();
    }
    plVar7 = plStack_48;
    plStack_48 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
    lVar2 = param_1[1];
    lVar3 = param_1[2];
    if ((ulong)(lVar3 - lVar2 >> 5) <= uVar10) goto LAB_10a313664;
    *(undefined4 *)(lVar2 + lVar9 + 0x18) = 0;
    uVar10 = uVar10 + 1;
    lVar9 = lVar9 + 0x20;
  } while (uVar11 * 0x20 - lVar9 != 0);
  if (lVar3 != lVar2) {
    plVar7 = *(long **)(lVar2 + 0x10);
    (**(code **)(*plVar7 + 0x30))();
    *(char *)(param_1 + 0x10) = (char)plVar7;
    return param_1;
  }
LAB_10a313664:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a313668);
  (*pcVar4)();
}



/* Entry: 10a313690; end: 10a3136db;  */

undefined8 * FUN_10a313690(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc39b0;
  FUN_10a3136dc();
  FUN_10a3218b8(param_1 + 10);
  func_0x00010a321a14(param_1 + 4);
  FUN_10a321b90(param_1 + 1);
  return param_1;
}



/* Entry: 10a3136dc; end: 10a31372f;  */

void FUN_10a3136dc(long param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_10a313748();
  lVar1 = *(long *)(param_1 + 0x10);
  for (lVar2 = *(long *)(param_1 + 8); lVar2 != lVar1; lVar2 = lVar2 + 0x20) {
    (**(code **)(**(long **)(lVar2 + 0x10) + 0x48))();
    (**(code **)(**(long **)(lVar2 + 0x10) + 0x50))();
  }
  return;
}



/* Entry: 10a313730; end: 10a313733;  */

undefined8 * FUN_10a313730(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc39b0;
  FUN_10a3136dc();
  FUN_10a3218b8(param_1 + 10);
  func_0x00010a321a14(param_1 + 4);
  FUN_10a321b90(param_1 + 1);
  return param_1;
}



/* Entry: 10a313734; end: 10a313747;  */

void FUN_10a313734(void)

{
  FUN_10a313690();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a313748; end: 10a31378f;  */

/* WARNING: Removing unreachable block (ram,0x00010a3137d8) */
/* WARNING: Removing unreachable block (ram,0x00010a3137dc) */
/* WARNING: Removing unreachable block (ram,0x00010a3137e0) */

void FUN_10a313748(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar1 = *(long *)(param_1 + 0x48);
  while (lVar1 != 0) {
    FUN_10a313790(0,param_1,1);
    lVar1 = *(long *)(param_1 + 0x48);
  }
  lVar1 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar1 != lVar2) {
    do {
      if (*(int *)(lVar1 + 0x18) == 1) {
        *(float *)(lVar1 + 0x1c) = *(float *)(lVar1 + 0x1c) - 0.0;
        FUN_10a313868(param_1,lVar1);
      }
      lVar1 = lVar1 + 0x20;
    } while (lVar1 != lVar2);
    lVar1 = *(long *)(param_1 + 8);
    lVar2 = *(long *)(param_1 + 0x10);
    if (lVar2 != lVar1) {
      lVar3 = 0;
      uVar4 = 0;
      do {
        if (*(long *)(param_1 + 0x48) == 0) {
          return;
        }
        if (*(int *)(lVar1 + lVar3 + 0x18) == 0) {
          FUN_10a313d34(param_1);
          lVar1 = *(long *)(param_1 + 8);
          lVar2 = *(long *)(param_1 + 0x10);
        }
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 + 0x20;
      } while (uVar4 < (ulong)(lVar2 - lVar1 >> 5));
    }
  }
  return;
}



/* Entry: 10a313790; end: 10a313867;  */

void FUN_10a313790(float param_1,long param_2,ulong param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  float fVar6;
  
  lVar3 = *(long *)(param_2 + 8);
  lVar2 = *(long *)(param_2 + 0x10);
  if (lVar3 != lVar2) {
    do {
      if (*(int *)(lVar3 + 0x18) == 1) {
        fVar6 = *(float *)(lVar3 + 0x1c) - param_1;
        *(float *)(lVar3 + 0x1c) = fVar6;
        if (((param_3 & 1) == 0) && (0.0 < fVar6)) {
          plVar1 = *(long **)(lVar3 + 0x10);
          (**(code **)(*plVar1 + 0x28))();
          if ((int)plVar1 == 0) goto LAB_10a313800;
        }
        FUN_10a313868(param_2,lVar3);
      }
LAB_10a313800:
      lVar3 = lVar3 + 0x20;
    } while (lVar3 != lVar2);
    lVar3 = *(long *)(param_2 + 8);
    lVar2 = *(long *)(param_2 + 0x10);
    if (lVar2 != lVar3) {
      lVar4 = 0;
      uVar5 = 0;
      do {
        if (*(long *)(param_2 + 0x48) == 0) {
          return;
        }
        if (*(int *)(lVar3 + lVar4 + 0x18) == 0) {
          FUN_10a313d34(param_2);
          lVar3 = *(long *)(param_2 + 8);
          lVar2 = *(long *)(param_2 + 0x10);
        }
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 0x20;
      } while (uVar5 < (ulong)(lVar2 - lVar3 >> 5));
    }
  }
  return;
}



/* Entry: 10a313868; end: 10a313d33;  */

void FUN_10a313868(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  if (*(int *)(param_2 + 3) != 1) {
    return;
  }
  plStack_78 = (long *)0x0;
  uStack_80 = 0;
  plStack_68 = (long *)0x0;
  uStack_70 = 0;
  puVar14 = param_2;
  FUN_10a313278(&uStack_70);
  (**(code **)(*(long *)param_2[2] + 0x40))(&uStack_90);
  plVar2 = plStack_78;
  plStack_78 = plStack_88;
  uStack_80 = uStack_90;
  uStack_90 = 0;
  plStack_88 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      lVar16 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar16 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  plVar2 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar1 = plStack_88 + 1;
    do {
      lVar16 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar16 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  puVar20 = *(undefined8 **)(param_1 + 0x58);
  puVar17 = *(undefined8 **)(param_1 + 0x60);
  uVar7 = (long)puVar17 - (long)puVar20;
  uVar3 = 0;
  if (uVar7 != 0) {
    uVar3 = ((long)puVar17 - (long)puVar20) * 0x10 - 1;
  }
  uVar4 = *(ulong *)(param_1 + 0x70);
  uVar15 = *(long *)(param_1 + 0x78) + uVar4;
  if (uVar3 != uVar15) goto LAB_10a313be8;
  if (uVar4 < 0x80) {
    puVar18 = *(undefined8 **)(param_1 + 0x68);
    puVar19 = *(undefined8 **)(param_1 + 0x50);
    if (uVar7 < (ulong)((long)puVar18 - (long)puVar19)) {
      uVar11 = 0x1000;
      __Znwm();
      if (puVar18 == puVar17) {
        if (puVar20 == puVar19) {
          lVar16 = (long)puVar18 - (long)puVar20 >> 2;
          if (puVar17 == puVar20) {
            lVar16 = 1;
          }
          lVar9 = lVar16;
          FUN_10a3264a8();
          puVar20 = (undefined8 *)(lVar9 + (lVar16 * 2 + 6U & 0xfffffffffffffff8));
          lVar16 = *(long *)(param_1 + 0x60) - (long)*(undefined8 **)(param_1 + 0x58);
          puVar17 = puVar20;
          if (lVar16 != 0) {
            puVar17 = (undefined8 *)((long)puVar20 + lVar16);
            puVar18 = *(undefined8 **)(param_1 + 0x58);
            puVar19 = puVar20;
            do {
              *puVar19 = *puVar18;
              lVar16 = lVar16 + -8;
              puVar18 = puVar18 + 1;
              puVar19 = puVar19 + 1;
            } while (lVar16 != 0);
          }
          lVar16 = *(long *)(param_1 + 0x50);
          *(long *)(param_1 + 0x50) = lVar9;
          *(undefined8 **)(param_1 + 0x58) = puVar20;
          *(undefined8 **)(param_1 + 0x60) = puVar17;
          *(long *)(param_1 + 0x68) = lVar9 + (long)puVar14 * 8;
          if (lVar16 != 0) {
            __ZdlPv(lVar16);
            puVar20 = *(undefined8 **)(param_1 + 0x58);
          }
        }
        puVar20[-1] = uVar11;
        puVar14 = *(undefined8 **)(param_1 + 0x58);
        puVar20 = puVar14 + -1;
        *(undefined8 **)(param_1 + 0x58) = puVar20;
        goto LAB_10a313978;
      }
      *puVar17 = uVar11;
      *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + 8;
    }
    else {
      puVar13 = (undefined8 *)((long)puVar18 - (long)puVar19 >> 2);
      if (puVar18 == puVar19) {
        puVar13 = (undefined8 *)0x1;
      }
      FUN_10a3264a8();
      uVar11 = 0x1000;
      puVar12 = puVar14;
      __Znwm();
      puVar18 = (undefined8 *)((long)puVar13 + uVar7);
      puVar19 = puVar13 + (long)puVar14;
      puVar10 = puVar13;
      if (uVar7 == (long)puVar14 * 8) {
        if ((long)uVar7 < 1) {
          puVar14 = (undefined8 *)((long)puVar18 - (long)puVar13 >> 2);
          if (puVar17 == puVar20) {
            puVar14 = (undefined8 *)0x1;
          }
          puVar10 = puVar14;
          FUN_10a3264a8();
          puVar18 = puVar10 + ((ulong)puVar14 >> 2);
          puVar19 = puVar10 + (long)puVar12;
          if (puVar13 != (undefined8 *)0x0) {
            __ZdlPv(puVar13);
          }
        }
        else {
          lVar16 = ((long)puVar18 - (long)puVar13 >> 3) + 1;
          puVar18 = puVar18 + -((ulong)(lVar16 - (lVar16 >> 0x3f)) >> 1);
        }
      }
      puVar14 = puVar18 + 1;
      *puVar18 = uVar11;
      puVar20 = *(undefined8 **)(param_1 + 0x60);
      puVar17 = puVar10;
      if (puVar20 != *(undefined8 **)(param_1 + 0x58)) {
        do {
          puVar10 = puVar17;
          puVar13 = puVar18;
          if (puVar18 == puVar17) {
            if (puVar14 < puVar19) {
              lVar16 = ((long)puVar19 - (long)puVar14 >> 3) + 1;
              lVar9 = (long)puVar14 - (long)puVar17;
              lVar8 = (long)puVar14 - (long)puVar17;
              puVar14 = puVar14 + ((ulong)(lVar16 - (lVar16 >> 0x3f)) >> 1);
              puVar13 = (undefined8 *)((long)puVar14 - lVar9);
              if (lVar8 != 0) {
                _memmove(puVar13,puVar18,lVar8);
                puVar12 = puVar18;
              }
            }
            else {
              puVar13 = (undefined8 *)((long)puVar19 - (long)puVar17 >> 2);
              if ((long)puVar19 - (long)puVar17 == 0) {
                puVar13 = (undefined8 *)0x1;
              }
              puVar10 = puVar13;
              FUN_10a3264a8();
              puVar13 = (undefined8 *)
                        ((long)puVar10 + ((long)puVar13 * 2 + 6U & 0xfffffffffffffff8));
              lVar16 = (long)puVar14 - (long)puVar17;
              puVar14 = puVar13;
              if (lVar16 != 0) {
                puVar14 = (undefined8 *)((long)puVar13 + lVar16);
                puVar19 = puVar13;
                do {
                  *puVar19 = *puVar18;
                  lVar16 = lVar16 + -8;
                  puVar19 = puVar19 + 1;
                  puVar18 = puVar18 + 1;
                } while (lVar16 != 0);
              }
              puVar19 = puVar10 + (long)puVar12;
              if (puVar17 != (undefined8 *)0x0) {
                __ZdlPv(puVar17);
              }
            }
          }
          puVar20 = puVar20 + -1;
          puVar18 = puVar13 + -1;
          *puVar18 = *puVar20;
          puVar17 = puVar10;
        } while (puVar20 != *(undefined8 **)(param_1 + 0x58));
      }
      lVar16 = *(long *)(param_1 + 0x50);
      *(undefined8 **)(param_1 + 0x50) = puVar10;
      *(undefined8 **)(param_1 + 0x58) = puVar18;
      *(undefined8 **)(param_1 + 0x60) = puVar14;
      *(undefined8 **)(param_1 + 0x68) = puVar19;
      if (lVar16 != 0) {
        __ZdlPv();
      }
    }
  }
  else {
    *(ulong *)(param_1 + 0x70) = uVar4 - 0x80;
    puVar14 = puVar20 + 1;
LAB_10a313978:
    uVar11 = *puVar20;
    *(undefined8 **)(param_1 + 0x58) = puVar14;
    FUN_10a3263ac(param_1 + 0x50,uVar11);
  }
  puVar20 = *(undefined8 **)(param_1 + 0x58);
  uVar15 = *(long *)(param_1 + 0x78) + *(long *)(param_1 + 0x70);
LAB_10a313be8:
  puVar14 = (undefined8 *)(puVar20[uVar15 >> 7] + (uVar15 & 0x7f) * 0x20);
  puVar14[1] = plStack_78;
  *puVar14 = uStack_80;
  if (plStack_78 != (long *)0x0) {
    plVar2 = plStack_78 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = *plVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  puVar14[3] = plStack_68;
  puVar14[2] = uStack_70;
  if (plStack_68 != (long *)0x0) {
    plVar2 = plStack_68 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = *plVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 1;
  func_0x00010a286b48(param_2);
  plVar2 = plStack_68;
  *(undefined4 *)(param_2 + 3) = 0;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
    do {
      lVar16 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar16 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  plVar2 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar1 = plStack_78 + 1;
    do {
      lVar16 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar16 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  return;
}



/* Entry: 10a313d34; end: 10a313f9b;  */

void FUN_10a313d34(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  undefined4 uStack_40;
  
  if ((*(long *)(param_1 + 0x48) != 0) && (*(int *)(param_2 + 0x18) == 0)) {
    puVar7 = (undefined8 *)
             (*(long *)(*(long *)(param_1 + 0x28) + (*(ulong *)(param_1 + 0x40) / 0x66) * 8) +
             (*(ulong *)(param_1 + 0x40) % 0x66) * 0x28);
    plStack_58 = (long *)puVar7[1];
    uStack_60 = *puVar7;
    if (puVar7[1] != 0) {
      plVar1 = (long *)(puVar7[1] + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plStack_48 = (long *)puVar7[3];
    uStack_50 = puVar7[2];
    if (puVar7[3] != 0) {
      plVar1 = (long *)(puVar7[3] + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_40 = *(undefined4 *)(puVar7 + 4);
    if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a313f78);
      (*pcVar5)();
    }
    lVar8 = *(long *)(*(long *)(param_1 + 0x28) + (*(ulong *)(param_1 + 0x40) / 0x66) * 8) +
            (*(ulong *)(param_1 + 0x40) % 0x66) * 0x28;
    FUN_10a232e34(lVar8 + 0x10);
    func_0x00010a09db0c(lVar8);
    uVar9 = *(long *)(param_1 + 0x40) + 1;
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -1;
    *(ulong *)(param_1 + 0x40) = uVar9;
    if (0xcb < uVar9) {
      __ZdlPv(**(undefined8 **)(param_1 + 0x28));
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 8;
      *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -0x66;
    }
    *(undefined8 *)(param_2 + 0x18) = 0x3f00000000000001;
    FUN_10a313278(param_2,&uStack_50);
    uVar6 = *(undefined8 *)(param_2 + 0x10);
    plStack_68 = plStack_58;
    uStack_70 = uStack_60;
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a310d08(uVar6,&uStack_70,uStack_40);
    plVar1 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar2 = plStack_68 + 1;
      do {
        lVar8 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    plVar1 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar2 = plStack_48 + 1;
      do {
        lVar8 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    plVar1 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar2 = plStack_58 + 1;
      do {
        lVar8 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  return;
}



/* Entry: 10a313f9c; end: 10a314097;  */

void FUN_10a313f9c(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  undefined4 uStack_40;
  
  plStack_58 = (long *)0x0;
  uStack_60 = 0;
  plStack_48 = (long *)0x0;
  uStack_50 = 0;
  uStack_40 = 0xffffffff;
  FUN_10a313278(&uStack_50,param_3);
  uStack_40 = param_4;
  FUN_10a225fb4(&uStack_60,param_2);
  func_0x00010a3264dc(param_1 + 0x20,&uStack_60);
  plVar4 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a314098; end: 10a31414b;  */

void FUN_10a314098(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (*(long *)(param_2 + 0x78) == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 4) = 0;
  }
  else {
    puVar2 = (undefined8 *)
             (*(long *)(*(long *)(param_2 + 0x58) + (*(ulong *)(param_2 + 0x70) >> 7) * 8) +
             (*(ulong *)(param_2 + 0x70) & 0x7f) * 0x20);
    lVar5 = puVar2[1];
    uVar6 = *puVar2;
    param_1[1] = puVar2[1];
    *param_1 = uVar6;
    if (lVar5 != 0) {
      plVar1 = (long *)(lVar5 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar5 = puVar2[3];
    uVar6 = puVar2[2];
    param_1[3] = puVar2[3];
    param_1[2] = uVar6;
    if (lVar5 != 0) {
      plVar1 = (long *)(lVar5 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    *(undefined1 *)(param_1 + 4) = 1;
    func_0x00010a326a08(param_2 + 0x50);
  }
  return;
}



/* Entry: 10a31414c; end: 10a3141eb;  */

long FUN_10a31414c(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_10a232e34(param_1 + 0x10);
    FUN_10a0d92c8(param_1);
  }
  return param_1;
}



/* Entry: 10a3141ec; end: 10a31448b;  */

void FUN_10a3141ec(undefined8 param_1,undefined4 param_2,undefined8 param_3,ulong param_4,
                  int param_5,long *param_6)

{
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  ulong uVar10;
  long *plVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  int iVar22;
  ulong uVar23;
  int iVar24;
  int iVar25;
  ulong uVar26;
  int iVar27;
  long lVar28;
  long lVar29;
  undefined1 *puVar30;
  int iVar31;
  uint uStack_170;
  int iStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  int iStack_8c;
  long lStack_78;
  long lStack_70;
  
  uVar19 = *(uint *)(*param_6 + 0x24);
  uVar10 = (ulong)uVar19;
  if (param_5 < 1) {
    uVar12 = 3;
    if ((uVar19 & 0xfffffffb) != 0xb) {
      uVar12 = 1;
    }
    FUN_10ad4b248(param_2,0xde1,2,param_3,param_4,uVar10,uVar12,uVar12);
  }
  else {
    iVar27 = (int)param_4;
    iVar18 = iVar27 / 2;
    iVar24 = (int)param_3;
    uVar17 = 3;
    if ((uVar19 & 0xfffffffb) != 0xb) {
      uVar17 = 1;
    }
    plVar11 = (long *)(ulong)uVar17;
    uVar12 = 2;
    FUN_10ad4b248(param_2,0xde1);
    iVar31 = (int)param_3;
    iStack_8c = 0;
    lVar14 = *param_6;
    if (*(uint *)(lVar14 + 0x24) < 0x17) {
      iStack_8c = *(int *)(&UNK_10e4ac4e4 + (ulong)*(uint *)(lVar14 + 0x24) * 4);
    }
    if ((((iVar24 == 0) || (((long)iVar24 & (long)iVar24 - 1U) != 0)) || (iVar27 == 0)) ||
       (((long)iVar27 & (long)iVar27 - 1U) != 0)) {
      uVar9 = 0;
      _glBindTexture(0xde1);
      puVar7 = &UNK_10f64ddb2;
      FUN_10a00946c();
      if (lStack_78 != 0) {
        lStack_70 = lStack_78;
        __ZdlPv();
      }
      __Unwind_Resume(puVar7);
      lVar14 = *plVar11;
      uStack_170 = *(uint *)(lVar14 + 0x24);
      uVar21 = (ulong)*(int *)(lVar14 + 0x10);
      uVar16 = *(ulong *)(lVar14 + 0x40);
      uVar19 = 0;
      if (uVar21 != 0) {
        uVar19 = (uint)(*(ulong *)(lVar14 + 0x18) / uVar21);
      }
      if (uVar16 == 0) {
        uVar16 = *(ulong *)(lVar14 + 0x18) * (ulong)*(uint *)(lVar14 + 0x14);
      }
      bVar4 = 1 < uStack_170 - 3;
      bVar5 = uVar19 != 3;
      if (!bVar4 && !bVar5) {
        bVar6 = uStack_170 == 3;
        uStack_170 = 5;
        if (bVar6) {
          uStack_170 = 1;
        }
        uVar16 = (ulong)(uint)(iVar31 * (int)param_4 * (int)uVar10 * 4);
        uVar19 = 4;
      }
      puVar8 = (undefined1 *)(uVar16 & 0xffffffff);
      __Znam();
      _bzero();
      uVar23 = uVar10;
      uVar26 = param_4;
      if (0 < (int)uVar10) {
        iVar18 = 0;
        iStack_138 = 0;
        iVar24 = 0;
        puVar30 = puVar8;
        do {
          if (0 < (int)uVar26) {
            uVar21 = 0;
            do {
              if (bVar4 || bVar5) {
                _memcpy(puVar30,*(long *)(lVar14 + 0x28) +
                                *(long *)(lVar14 + 0x18) * (uVar21 + (long)iVar24) +
                                (ulong)(uint)(*(int *)(lVar14 + 0x20) * iStack_138 <<
                                             ((*(uint *)(lVar14 + 0x24) & 0xfffffffb) == 0xb)),
                        (ulong)(uVar19 * iVar31));
                puVar30 = puVar30 + uVar19 * iVar31;
              }
              else if (0 < iVar31) {
                iVar27 = iStack_138;
                iVar25 = iVar31;
                do {
                  puVar1 = (undefined1 *)
                           (*(long *)(lVar14 + 0x28) +
                            *(long *)(lVar14 + 0x18) * (uVar21 + (long)iVar24) +
                           (ulong)(uint)(*(int *)(lVar14 + 0x20) * iVar27 <<
                                        ((*(uint *)(lVar14 + 0x24) & 0xfffffffb) == 0xb)));
                  *puVar30 = *puVar1;
                  puVar30[1] = puVar1[1];
                  puVar30[2] = puVar1[2];
                  puVar30[3] = 0xff;
                  puVar30 = puVar30 + uVar19;
                  iVar27 = iVar27 + 1;
                  iVar25 = iVar25 + -1;
                } while (iVar25 != 0);
              }
              puStack_130 = &UNK_10f64dde5;
              uStack_128 = 0x3c;
              if (puVar8 + (long)(uVar16 & 0xffffffff) < puVar30) {
                FUN_10a0edfc4(&puStack_130);
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10a31471c);
                (*pcVar3)();
              }
              uVar21 = uVar21 + 1;
            } while (uVar21 != (param_4 & 0xffffffff));
            uVar21 = (ulong)*(uint *)(lVar14 + 0x10);
            uVar26 = param_4 & 0xffffffff;
            uVar23 = uVar10 & 0xffffffff;
          }
          iVar27 = iStack_138 + iVar31;
          iStack_138 = iVar27;
          if ((int)uVar21 <= iVar27) {
            iStack_138 = 0;
          }
          iVar25 = 0;
          if ((int)uVar21 <= iVar27) {
            iVar25 = (int)uVar26;
          }
          iVar24 = iVar25 + iVar24;
          iVar18 = iVar18 + 1;
        } while (iVar18 != (int)uVar23);
      }
      uVar13 = 3;
      if ((uStack_170 & 0xfffffffb) != 0xb) {
        uVar13 = 1;
      }
      FUN_10ad4b4a0(uVar9,uVar12,2,iVar31,uVar26,uVar23,uStack_170,uVar13,uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdaPv_110352250)(puVar8);
      return;
    }
    lVar15 = *(long *)(lVar14 + 0x28);
    iVar24 = iVar24 / 2;
    lVar20 = *(long *)(lVar14 + 0x18);
    FUN_10a0dc020(&lStack_78,(long)(iVar18 * iVar24 * iStack_8c));
    iVar31 = 0;
    iVar27 = 0;
    iVar25 = 0;
    do {
      iVar2 = iVar24 * iStack_8c;
      if (0 < iVar18) {
        lVar28 = lVar15 + lVar20 * iVar25 + (long)iVar31;
        lVar29 = lStack_78;
        iVar22 = iVar18;
        do {
          _memcpy(lVar29,lVar28,(long)iVar2);
          lVar28 = lVar28 + lVar20;
          lVar29 = lVar29 + iVar2;
          iVar22 = iVar22 + -1;
        } while (iVar22 != 0);
      }
      uVar12 = 3;
      if ((*(uint *)(lVar14 + 0x24) & 0xfffffffb) != 0xb) {
        uVar12 = 1;
      }
      iVar27 = iVar27 + 1;
      FUN_10ad4b248(param_2,0xde1,2,iVar24,iVar18,*(uint *)(lVar14 + 0x24),uVar12,uVar12);
      iVar24 = iVar24 / 2;
      iVar18 = iVar18 / 2;
      iVar31 = iVar2 + iVar31;
      iVar25 = iVar25 + iVar18;
      if (iVar24 < 2) {
        iVar24 = 1;
      }
      if (iVar18 < 2) {
        iVar18 = 1;
      }
    } while (iVar27 != param_5);
    if (lStack_78 != 0) {
      lStack_70 = lStack_78;
      __ZdlPv();
    }
  }
  return;
}


