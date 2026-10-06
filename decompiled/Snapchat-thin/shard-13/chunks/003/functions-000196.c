/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a371bd0; end: 10a371bf3;  */

/* WARNING: Possible PIC construction at 0x00010a372128: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a37212c) */
/* WARNING: Removing unreachable block (ram,0x00010a372140) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd2e4) */
/* WARNING: Removing unreachable block (ram,0x00010a37213c) */

void FUN_10a371bd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined ***pppuVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined ****ppppuVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined ***pppuVar14;
  undefined ***pppuVar15;
  undefined ***pppuVar16;
  undefined *puVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined4 *extraout_x8;
  undefined **ppuVar20;
  ulong uVar21;
  long *unaff_x19;
  undefined ***unaff_x20;
  undefined ***unaff_x21;
  long lVar22;
  long *unaff_x22;
  long lVar23;
  long lVar24;
  undefined ***unaff_x23;
  long lVar25;
  undefined ***unaff_x24;
  ulong uVar26;
  undefined ***unaff_x25;
  ulong uVar27;
  undefined ***unaff_x26;
  undefined ***pppuVar28;
  undefined ***unaff_x27;
  undefined ***pppuVar29;
  undefined8 unaff_x28;
  undefined8 ****ppppuVar30;
  undefined ***pppuStack_140;
  undefined ***pppuStack_138;
  long *plStack_130;
  int iStack_128;
  undefined4 uStack_124;
  long *plStack_120;
  long *plStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined ***pppuStack_f8;
  undefined ***pppuStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d0;
  long *plStack_c8;
  code *pcStack_c0;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  undefined8 ***pppuStack_20;
  code *pcStack_18;
  
  if ((int)param_1 == 3) {
    return;
  }
  ppppuVar5 = (undefined ****)&stack0xfffffffffffffff0;
  plVar7 = (long *)0x3;
  uVar18 = 0;
  FUN_10a052ee0(3,0);
  pcStack_18 = FUN_10a371bf4;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = plVar7;
  pppuStack_20 = (undefined8 ***)&stack0xfffffffffffffff0;
  (**(code **)(*plVar7 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  plVar9 = plVar7;
  FUN_10a370100(plVar7,uVar18);
  FUN_10a372134(param_4);
  plVar10 = plVar7;
  FUN_10a3703b8(plVar7,param_1);
  if (*(int *)(param_1 + 0x10) == 7) {
    plVar11 = plVar7;
    (**(code **)(*plVar7 + 0x98))(plVar7,*(undefined8 *)(param_1 + 0x18));
    plVar12 = plVar7;
    plStack_118 = plVar11;
    (**(code **)(*plVar7 + 0x228))(plVar7,&plStack_118);
    if ((int)plVar12 != 0) {
      plVar11 = plVar7;
      (**(code **)(*plVar7 + 0x58))();
      lVar13 = plVar11[0x48];
      if ((lVar13 == 0) ||
         (___dynamic_cast(lVar13,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), lVar13 == 0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10a37209c;
      }
      plStack_120 = plStack_118;
      plStack_118 = (long *)0x0;
      iStack_128 = 7;
      plStack_130 = plVar7;
      FUN_10a688ac0(&ppuStack_110,&plStack_130,*(undefined8 *)(lVar13 + 8));
      if ((3 < iStack_128) && (plStack_120 != (long *)0x0)) {
        (**(code **)*plStack_120)();
      }
    }
    if (plStack_118 != (long *)0x0) {
      (**(code **)*plStack_118)();
    }
    if (((ulong)plVar12 & 1) != 0) {
      pppuVar14 = (undefined ***)0x60;
      __Znwm();
      pppuVar28 = pppuVar14 + 1;
      *pppuVar28 = (undefined **)0x0;
      pppuVar14[2] = (undefined **)0x0;
      *pppuVar14 = &PTR_FUN_110bc71a0;
      pppuVar29 = pppuVar14 + 3;
      pppuVar14[4] = ppuStack_108;
      *pppuVar29 = ppuStack_110;
      if (ppuStack_108 != (undefined **)0x0) {
        ppuStack_108 = ppuStack_108 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuStack_108,0x10);
          if (bVar3) {
            *ppuStack_108 = *ppuStack_108 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      pppuVar14[6] = (undefined **)pppuStack_f8;
      pppuVar14[5] = ppuStack_100;
      if (pppuStack_f8 != (undefined ***)0x0) {
        ppuVar20 = (undefined **)(pppuStack_f8 + 2);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
          if (bVar3) {
            *ppuVar20 = *ppuVar20 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      *(undefined1 *)(pppuVar14 + 0xb) = 2;
      pppuStack_140 = pppuVar29;
      pppuStack_138 = pppuVar14;
      FUN_10a688c1c(&ppuStack_110);
      FUN_10a059354(&plStack_130,plVar7,param_1 + 0x20);
      plVar7 = plVar10;
      ___dynamic_cast(plVar10,&PTR_DAT_110c5ef50,&PTR_DAT_110baea90,0);
      if (plVar7 == (long *)0x0) {
        if (plStack_130 != (long *)0x0) {
          ppuStack_100 = (undefined **)plVar9[0x20];
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pppuVar28,0x10);
            if (bVar3) {
              *pppuVar28 = (undefined **)((long)*pppuVar28 + 1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          plVar7 = (long *)CONCAT44(uStack_124,iStack_128);
          if (plVar7 != (long *)0x0) {
            plVar11 = plVar7 + 1;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar3) {
                *plVar11 = *plVar11 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          ppuStack_110 = (undefined **)FUN_10a37a688;
          ppuStack_108 = &PTR_FUN_110bc74c0;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pppuVar28,0x10);
            if (bVar3) {
              *pppuVar28 = (undefined **)((long)*pppuVar28 + 1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          plStack_e8 = plStack_130;
          if (plVar7 != (long *)0x0) {
            plVar11 = plVar7 + 1;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar3) {
                *plVar11 = *plVar11 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          plStack_c8 = (long *)CONCAT44(uStack_124,iStack_128);
          plStack_d0 = plStack_130;
          if (plStack_c8 != (long *)0x0) {
            plVar11 = plStack_c8 + 1;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar3) {
                *plVar11 = *plVar11 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          uStack_98 = 0;
          uStack_a0 = 0;
          uStack_88 = 0;
          uStack_90 = 0;
          uStack_a8 = 0;
          uStack_b0 = 0;
          pcStack_c0 = FUN_10a352044;
          ppuStack_b8 = &PTR_DAT_110950c70;
          pppuStack_f8 = pppuVar29;
          pppuStack_f0 = pppuVar14;
          plStack_e0 = plVar7;
          if (plVar7 != (long *)0x0) {
            plVar11 = plVar7 + 1;
            do {
              lVar13 = *plVar11;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar3) {
                *plVar11 = lVar13 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar13 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
            }
          }
          do {
            ppuVar20 = *pppuVar28;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pppuVar28,0x10);
            if (bVar3) {
              *pppuVar28 = (undefined **)((long)ppuVar20 + -1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (ppuVar20 == (undefined **)0x0) {
            (*(code *)(*pppuVar14)[2])(pppuVar14);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar14);
          }
          FUN_10a340180(plVar9,plVar10,&ppuStack_110);
          (*(code *)*ppuStack_b8)(&ppuStack_b8);
          plVar7 = plStack_c8;
          if (plStack_c8 != (long *)0x0) {
            plVar9 = plStack_c8 + 1;
            do {
              lVar13 = *plVar9;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar3) {
                *plVar9 = lVar13 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar13 == 0) {
              (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
            }
          }
          pppuVar15 = &ppuStack_108;
          (*(code *)*ppuStack_108)();
          pppuVar16 = (undefined ***)CONCAT44(uStack_124,iStack_128);
          if (pppuVar16 != (undefined ***)0x0) {
            pppuVar1 = pppuVar16 + 1;
            do {
              ppuVar20 = *pppuVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
              if (bVar3) {
                *pppuVar1 = (undefined **)((long)ppuVar20 + -1);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (ppuVar20 == (undefined **)0x0) {
              (*(code *)(*pppuVar16)[2])(pppuVar16);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              pppuVar15 = pppuVar16;
            }
          }
          pppuVar16 = pppuStack_138;
          if (pppuStack_138 != (undefined ***)0x0) {
            pppuVar1 = pppuStack_138 + 1;
            do {
              ppuVar20 = *pppuVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
              if (bVar3) {
                *pppuVar1 = (undefined **)((long)ppuVar20 + -1);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (ppuVar20 == (undefined **)0x0) {
              (*(code *)(*pppuStack_138)[2])(pppuStack_138);
              pppuVar15 = pppuVar16;
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
          }
          *extraout_x8 = 0;
          ppppuVar30 = (undefined8 ****)pppuStack_20;
          pcVar4 = pcStack_18;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
            ___stack_chk_fail();
            (*(code *)*ppuStack_b8)(&ppuStack_b8);
            func_0x00010a07a8a8(&plStack_d0);
            (*(code *)*ppuStack_108)(&ppuStack_108);
            func_0x00010a07a8a8(&plStack_130);
            func_0x00010a352104(&pppuStack_140);
            ppppuVar5 = &pppuStack_140;
            unaff_x19 = plVar8;
            unaff_x20 = pppuVar15;
            unaff_x21 = pppuVar16;
            unaff_x22 = plVar10;
            unaff_x23 = &ppuStack_110;
            unaff_x24 = &ppuStack_110;
            unaff_x25 = pppuVar14;
            unaff_x26 = pppuVar28;
            unaff_x27 = pppuVar29;
            ppppuVar30 = &pppuStack_20;
            pcVar4 = (code *)0x10a37212c;
          }
          plVar7 = plVar8 + 0x4b;
          lVar13 = plVar8[0x59];
          uVar19 = lVar13 - 1;
          plVar8[0x59] = uVar19;
          if (uVar19 < 8) {
            uVar19 = plVar7[lVar13 + 2];
            if (plVar8[0x5a] == uVar19) {
              return;
            }
          }
          else {
            uVar19 = *(ulong *)(plVar8[0x57] + -8);
            plVar8[0x57] = plVar8[0x57] + -8;
            if (plVar8[0x5a] == uVar19) {
              return;
            }
          }
          *(undefined8 *)((long)ppppuVar5 + -0x60) = unaff_x28;
          *(undefined ****)((long)ppppuVar5 + -0x58) = unaff_x27;
          *(undefined ****)((long)ppppuVar5 + -0x50) = unaff_x26;
          *(undefined ****)((long)ppppuVar5 + -0x48) = unaff_x25;
          *(undefined ****)((long)ppppuVar5 + -0x40) = unaff_x24;
          *(undefined ****)((long)ppppuVar5 + -0x38) = unaff_x23;
          *(long **)((long)ppppuVar5 + -0x30) = unaff_x22;
          *(undefined ****)((long)ppppuVar5 + -0x28) = unaff_x21;
          *(undefined ****)((long)ppppuVar5 + -0x20) = unaff_x20;
          *(long **)((long)ppppuVar5 + -0x18) = unaff_x19;
          *(undefined8 *****)((long)ppppuVar5 + -0x10) = ppppuVar30;
          *(code **)((long)ppppuVar5 + -8) = pcVar4;
          lVar13 = *plVar7;
          lVar24 = plVar8[0x4c];
          lVar22 = lVar24 - lVar13;
          uVar26 = lVar22 >> 4;
          if (uVar26 < uVar19) {
            uVar27 = uVar19 - uVar26;
            lVar25 = plVar8[0x4d];
            if ((ulong)(lVar25 - lVar24 >> 4) < uVar27) {
              if (uVar19 >> 0x3c == 0) {
                uVar21 = lVar25 - lVar13 >> 3;
                if (uVar21 <= uVar19) {
                  uVar21 = uVar19;
                }
                if (0x7fffffffffffffef < (ulong)(lVar25 - lVar13)) {
                  uVar21 = 0xfffffffffffffff;
                }
                *(long **)((long)ppppuVar5 + -0x68) = plVar7;
                if (uVar21 >> 0x3c == 0) {
                  lVar6 = uVar21 << 4;
                  __Znwm();
                  lVar24 = lVar6 + lVar22;
                  _bzero(lVar24,uVar27 * 0x10);
                  lVar23 = lVar24 + uVar26 * -0x10;
                  _memcpy(lVar23,lVar13,lVar22);
                  *plVar7 = lVar23;
                  plVar8[0x4c] = lVar24 + uVar27 * 0x10;
                  plVar8[0x4d] = lVar6 + uVar21 * 0x10;
                  *(long *)((long)ppppuVar5 + -0x78) = lVar13;
                  *(long *)((long)ppppuVar5 + -0x70) = lVar25;
                  *(long *)((long)ppppuVar5 + -0x88) = lVar13;
                  *(long *)((long)ppppuVar5 + -0x80) = lVar13;
                  func_0x00010988c1b8((undefined1 *)((long)ppppuVar5 + -0x88));
                  goto code_r0x00010988c138;
                }
                func_0x000104c4f740();
              }
              else {
                func_0x00010988c1a4();
              }
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
              (*pcVar4)();
            }
            _bzero(lVar24,uVar27 * 0x10);
            plVar8[0x4c] = lVar24 + uVar27 * 0x10;
          }
          else if (uVar19 < uVar26) {
            lVar13 = lVar13 + uVar19 * 0x10;
            while (lVar24 != lVar13) {
              lVar24 = lVar24 + -0x10;
              func_0x00010988c204(lVar24);
            }
            plVar8[0x4c] = lVar13;
          }
code_r0x00010988c138:
          plVar8[0x5a] = uVar19;
          return;
        }
        puVar17 = &UNK_10f64fdc4;
      }
      else {
        puVar17 = &UNK_10f64fe2d;
      }
      FUN_10a00946c(puVar17);
      goto LAB_10a37209c;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a37209c:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a3720a0);
  (*pcVar4)();
}



/* Entry: 10a371bf4; end: 10a372133;  */

/* WARNING: Possible PIC construction at 0x00010a372128: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a37212c) */
/* WARNING: Removing unreachable block (ram,0x00010a372140) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd2e4) */
/* WARNING: Removing unreachable block (ram,0x00010a37213c) */

void FUN_10a371bf4(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  undefined ***pppuVar15;
  undefined ***pppuVar16;
  undefined ***pppuVar17;
  undefined *puVar18;
  ulong uVar19;
  undefined **ppuVar20;
  ulong uVar21;
  long *unaff_x19;
  undefined ***unaff_x20;
  undefined ***unaff_x21;
  long lVar22;
  long *unaff_x22;
  long lVar23;
  long lVar24;
  undefined ***unaff_x23;
  long lVar25;
  undefined ***unaff_x24;
  ulong uVar26;
  undefined ***unaff_x25;
  ulong uVar27;
  undefined ***unaff_x26;
  undefined ***pppuVar28;
  undefined ***unaff_x27;
  undefined ***pppuVar29;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined ***pppuStack_130;
  undefined ***pppuStack_128;
  long *plStack_120;
  int iStack_118;
  undefined4 uStack_114;
  long *plStack_110;
  long *plStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c0;
  long *plStack_b8;
  code *pcStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  plVar10 = param_2;
  FUN_10a370100(param_2,param_3);
  FUN_10a372134(param_5);
  plVar11 = param_2;
  FUN_10a3703b8(param_2,param_4);
  if (*(int *)(param_4 + 0x10) == 7) {
    plVar12 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_4 + 0x18));
    plVar13 = param_2;
    plStack_108 = plVar12;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_108);
    if ((int)plVar13 != 0) {
      plVar12 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar14 = plVar12[0x48];
      if ((lVar14 == 0) ||
         (___dynamic_cast(lVar14,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), lVar14 == 0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10a37209c;
      }
      plStack_110 = plStack_108;
      plStack_108 = (long *)0x0;
      iStack_118 = 7;
      plStack_120 = param_2;
      FUN_10a688ac0(&ppuStack_100,&plStack_120,*(undefined8 *)(lVar14 + 8));
      if ((3 < iStack_118) && (plStack_110 != (long *)0x0)) {
        (**(code **)*plStack_110)();
      }
    }
    if (plStack_108 != (long *)0x0) {
      (**(code **)*plStack_108)();
    }
    if (((ulong)plVar13 & 1) != 0) {
      pppuVar15 = (undefined ***)0x60;
      __Znwm();
      pppuVar28 = pppuVar15 + 1;
      *pppuVar28 = (undefined **)0x0;
      pppuVar15[2] = (undefined **)0x0;
      *pppuVar15 = &PTR_FUN_110bc71a0;
      pppuVar29 = pppuVar15 + 3;
      pppuVar15[4] = ppuStack_f8;
      *pppuVar29 = ppuStack_100;
      if (ppuStack_f8 != (undefined **)0x0) {
        ppuStack_f8 = ppuStack_f8 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuStack_f8,0x10);
          if (bVar6) {
            *ppuStack_f8 = *ppuStack_f8 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      pppuVar15[6] = (undefined **)pppuStack_e8;
      pppuVar15[5] = ppuStack_f0;
      if (pppuStack_e8 != (undefined ***)0x0) {
        ppuVar20 = (undefined **)(pppuStack_e8 + 2);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
          if (bVar6) {
            *ppuVar20 = *ppuVar20 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      *(undefined1 *)(pppuVar15 + 0xb) = 2;
      pppuStack_130 = pppuVar29;
      pppuStack_128 = pppuVar15;
      FUN_10a688c1c(&ppuStack_100);
      FUN_10a059354(&plStack_120,param_2,param_4 + 0x20);
      plVar12 = plVar11;
      ___dynamic_cast(plVar11,&PTR_DAT_110c5ef50,&PTR_DAT_110baea90,0);
      if (plVar12 == (long *)0x0) {
        if (plStack_120 != (long *)0x0) {
          ppuStack_f0 = (undefined **)plVar10[0x20];
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppuVar28,0x10);
            if (bVar6) {
              *pppuVar28 = (undefined **)((long)*pppuVar28 + 1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          plVar12 = (long *)CONCAT44(uStack_114,iStack_118);
          if (plVar12 != (long *)0x0) {
            plVar13 = plVar12 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar6) {
                *plVar13 = *plVar13 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          ppuStack_100 = (undefined **)FUN_10a37a688;
          ppuStack_f8 = &PTR_FUN_110bc74c0;
          pppuVar2 = &ppuStack_100;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppuVar28,0x10);
            if (bVar6) {
              *pppuVar28 = (undefined **)((long)*pppuVar28 + 1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          plStack_d8 = plStack_120;
          if (plVar12 != (long *)0x0) {
            plVar13 = plVar12 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar6) {
                *plVar13 = *plVar13 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          plStack_b8 = (long *)CONCAT44(uStack_114,iStack_118);
          plStack_c0 = plStack_120;
          if (plStack_b8 != (long *)0x0) {
            plVar13 = plStack_b8 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar6) {
                *plVar13 = *plVar13 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          uStack_88 = 0;
          uStack_90 = 0;
          uStack_78 = 0;
          uStack_80 = 0;
          uStack_98 = 0;
          uStack_a0 = 0;
          pcStack_b0 = FUN_10a352044;
          ppuStack_a8 = &PTR_DAT_110950c70;
          pppuStack_e8 = pppuVar29;
          pppuStack_e0 = pppuVar15;
          plStack_d0 = plVar12;
          if (plVar12 != (long *)0x0) {
            plVar13 = plVar12 + 1;
            do {
              lVar14 = *plVar13;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar6) {
                *plVar13 = lVar14 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
            }
          }
          pppuVar3 = &ppuStack_100;
          do {
            ppuVar20 = *pppuVar28;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppuVar28,0x10);
            if (bVar6) {
              *pppuVar28 = (undefined **)((long)ppuVar20 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (ppuVar20 == (undefined **)0x0) {
            (*(code *)(*pppuVar15)[2])(pppuVar15);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar15);
          }
          FUN_10a340180(plVar10,plVar11,&ppuStack_100);
          (*(code *)*ppuStack_a8)(&ppuStack_a8);
          plVar10 = plStack_b8;
          if (plStack_b8 != (long *)0x0) {
            plVar12 = plStack_b8 + 1;
            do {
              lVar14 = *plVar12;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar6) {
                *plVar12 = lVar14 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
            }
          }
          pppuVar16 = &ppuStack_f8;
          (*(code *)*ppuStack_f8)();
          pppuVar17 = (undefined ***)CONCAT44(uStack_114,iStack_118);
          if (pppuVar17 != (undefined ***)0x0) {
            pppuVar4 = pppuVar17 + 1;
            do {
              ppuVar20 = *pppuVar4;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(pppuVar4,0x10);
              if (bVar6) {
                *pppuVar4 = (undefined **)((long)ppuVar20 + -1);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (ppuVar20 == (undefined **)0x0) {
              (*(code *)(*pppuVar17)[2])(pppuVar17);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              pppuVar16 = pppuVar17;
            }
          }
          pppuVar17 = pppuStack_128;
          if (pppuStack_128 != (undefined ***)0x0) {
            pppuVar4 = pppuStack_128 + 1;
            do {
              ppuVar20 = *pppuVar4;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(pppuVar4,0x10);
              if (bVar6) {
                *pppuVar4 = (undefined **)((long)ppuVar20 + -1);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (ppuVar20 == (undefined **)0x0) {
              (*(code *)(*pppuStack_128)[2])(pppuStack_128);
              pppuVar16 = pppuVar17;
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
          }
          *param_1 = 0;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
            ___stack_chk_fail();
            (*(code *)*ppuStack_a8)(&ppuStack_a8);
            func_0x00010a07a8a8(&plStack_c0);
            (*(code *)*ppuStack_f8)(&ppuStack_f8);
            func_0x00010a07a8a8(&plStack_120);
            func_0x00010a352104(&pppuStack_130);
            unaff_x30 = 0x10a37212c;
            register0x00000008 = (BADSPACEBASE *)&pppuStack_130;
            unaff_x19 = plVar9;
            unaff_x20 = pppuVar16;
            unaff_x21 = pppuVar17;
            unaff_x22 = plVar11;
            unaff_x23 = pppuVar3;
            unaff_x24 = pppuVar2;
            unaff_x25 = pppuVar15;
            unaff_x26 = pppuVar28;
            unaff_x27 = pppuVar29;
            unaff_x29 = puVar1;
          }
          plVar10 = plVar9 + 0x4b;
          lVar14 = plVar9[0x59];
          uVar19 = lVar14 - 1;
          plVar9[0x59] = uVar19;
          if (uVar19 < 8) {
            uVar19 = plVar10[lVar14 + 2];
            if (plVar9[0x5a] == uVar19) {
              return;
            }
          }
          else {
            uVar19 = *(ulong *)(plVar9[0x57] + -8);
            plVar9[0x57] = plVar9[0x57] + -8;
            if (plVar9[0x5a] == uVar19) {
              return;
            }
          }
          *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
          *(undefined ****)((long)register0x00000008 + -0x58) = unaff_x27;
          *(undefined ****)((long)register0x00000008 + -0x50) = unaff_x26;
          *(undefined ****)((long)register0x00000008 + -0x48) = unaff_x25;
          *(undefined ****)((long)register0x00000008 + -0x40) = unaff_x24;
          *(undefined ****)((long)register0x00000008 + -0x38) = unaff_x23;
          *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
          *(undefined ****)((long)register0x00000008 + -0x28) = unaff_x21;
          *(undefined ****)((long)register0x00000008 + -0x20) = unaff_x20;
          *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
          *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
          *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
          lVar14 = *plVar10;
          lVar24 = plVar9[0x4c];
          lVar22 = lVar24 - lVar14;
          uVar26 = lVar22 >> 4;
          if (uVar26 < uVar19) {
            uVar27 = uVar19 - uVar26;
            lVar25 = plVar9[0x4d];
            if ((ulong)(lVar25 - lVar24 >> 4) < uVar27) {
              if (uVar19 >> 0x3c == 0) {
                uVar21 = lVar25 - lVar14 >> 3;
                if (uVar21 <= uVar19) {
                  uVar21 = uVar19;
                }
                if (0x7fffffffffffffef < (ulong)(lVar25 - lVar14)) {
                  uVar21 = 0xfffffffffffffff;
                }
                *(long **)((long)register0x00000008 + -0x68) = plVar10;
                if (uVar21 >> 0x3c == 0) {
                  lVar8 = uVar21 << 4;
                  __Znwm();
                  lVar24 = lVar8 + lVar22;
                  _bzero(lVar24,uVar27 * 0x10);
                  lVar23 = lVar24 + uVar26 * -0x10;
                  _memcpy(lVar23,lVar14,lVar22);
                  *plVar10 = lVar23;
                  plVar9[0x4c] = lVar24 + uVar27 * 0x10;
                  plVar9[0x4d] = lVar8 + uVar21 * 0x10;
                  *(long *)((long)register0x00000008 + -0x78) = lVar14;
                  *(long *)((long)register0x00000008 + -0x70) = lVar25;
                  *(long *)((long)register0x00000008 + -0x88) = lVar14;
                  *(long *)((long)register0x00000008 + -0x80) = lVar14;
                  func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
                  goto code_r0x00010988c138;
                }
                func_0x000104c4f740();
              }
              else {
                func_0x00010988c1a4();
              }
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x10988c16c);
              (*pcVar7)();
            }
            _bzero(lVar24,uVar27 * 0x10);
            plVar9[0x4c] = lVar24 + uVar27 * 0x10;
          }
          else if (uVar19 < uVar26) {
            lVar14 = lVar14 + uVar19 * 0x10;
            while (lVar24 != lVar14) {
              lVar24 = lVar24 + -0x10;
              func_0x00010988c204(lVar24);
            }
            plVar9[0x4c] = lVar14;
          }
code_r0x00010988c138:
          plVar9[0x5a] = uVar19;
          return;
        }
        puVar18 = &UNK_10f64fdc4;
      }
      else {
        puVar18 = &UNK_10f64fe2d;
      }
      FUN_10a00946c(puVar18);
      goto LAB_10a37209c;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a37209c:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a3720a0);
  (*pcVar7)();
}



/* Entry: 10a372134; end: 10a372157;  */

void FUN_10a372134(undefined8 param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1 == 3) {
    return;
  }
  puVar1 = (undefined8 *)0x3;
  FUN_10a052ee0(3,0,param_1);
  *puVar1 = &PTR_FUN_110bc71a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a372158; end: 10a372167;  */

void FUN_10a372158(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc71a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a372168; end: 10a372187;  */

void FUN_10a372168(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc71a0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a372188; end: 10a3721af;  */

undefined1  [16] FUN_10a372188(long param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_38;
  
  bVar2 = *(byte *)(param_1 + 0x58);
  if (3 < (ulong)bVar2) {
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10a3721ac);
    (*UNRECOVERED_JUMPTABLE)();
  }
  auVar10._8_8_ = (code **)(&PTR_FUN_110b9a040)[bVar2];
  puVar5 = (undefined8 *)(param_1 + 0x18);
  switch(bVar2) {
  case 0:
    auVar10._0_8_ = puVar5;
    return auVar10;
  case 1:
    puVar5 = (undefined8 *)(param_1 + 0x20);
    UNRECOVERED_JUMPTABLE = *(code **)*puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010a00496c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    auVar11._8_8_ = UNRECOVERED_JUMPTABLE;
    auVar11._0_8_ = puVar5;
    return auVar11;
  case 3:
    auVar12._8_8_ = auVar10._8_8_;
    auVar12._0_8_ = puVar5;
    return auVar12;
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  if (((*ppuVar6 == (undefined *)0x0) &&
      (plVar7 = *(long **)(param_1 + 0x30), plVar7 != (long *)0x0)) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 != (long *)0x0)) {
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x870);
      uStack_60 = *(undefined8 *)(param_1 + 0x20);
      uStack_68 = *puVar5;
      *puVar5 = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      pcStack_78 = FUN_10a69fabc;
      ppuStack_70 = &PTR_DAT_110c0ce80;
      auVar10._8_8_ = &pcStack_78;
      FUN_10a4634ec(uVar8);
      (*(code *)*ppuStack_70)(&ppuStack_70);
    }
    plVar1 = plVar7 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x00010a004dac(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    auVar13._8_8_ = auVar10._8_8_;
    auVar13._0_8_ = puVar5;
    return auVar13;
  }
  ___stack_chk_fail();
  if ((int)auVar10._8_8_ == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  auVar14._8_8_ = 0x18;
  auVar14._0_8_ = &UNK_10f66c09c;
  return auVar14;
}



/* Entry: 10a3721b0; end: 10a3726c3;  */

/* WARNING: Possible PIC construction at 0x00010a3726b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a3726bc) */
/* WARNING: Removing unreachable block (ram,0x00010a3726d0) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd2e4) */
/* WARNING: Removing unreachable block (ram,0x00010a3726cc) */

void FUN_10a3721b0(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  undefined ***pppuVar15;
  undefined ***pppuVar16;
  undefined ***pppuVar17;
  ulong uVar18;
  undefined **ppuVar19;
  ulong uVar20;
  long *unaff_x19;
  undefined ***unaff_x20;
  undefined ***unaff_x21;
  long lVar21;
  long *unaff_x22;
  long lVar22;
  long lVar23;
  undefined ***unaff_x23;
  long lVar24;
  undefined ***unaff_x24;
  ulong uVar25;
  undefined ***unaff_x25;
  ulong uVar26;
  undefined ***unaff_x26;
  undefined ***pppuVar27;
  undefined ***unaff_x27;
  undefined ***pppuVar28;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined ***pppuStack_130;
  undefined ***pppuStack_128;
  long *plStack_120;
  int iStack_118;
  undefined4 uStack_114;
  long *plStack_110;
  long *plStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c0;
  long *plStack_b8;
  code *pcStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  plVar10 = param_2;
  FUN_10a370100(param_2,param_3);
  FUN_10a3726c4(param_5);
  plVar11 = param_2;
  FUN_10a3703b8(param_2,param_4);
  if (*(int *)(param_4 + 0x10) == 7) {
    plVar12 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_4 + 0x18));
    plVar13 = param_2;
    plStack_108 = plVar12;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_108);
    if ((int)plVar13 != 0) {
      plVar12 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar14 = plVar12[0x48];
      if ((lVar14 == 0) ||
         (___dynamic_cast(lVar14,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), lVar14 == 0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10a37262c;
      }
      plStack_110 = plStack_108;
      plStack_108 = (long *)0x0;
      iStack_118 = 7;
      plStack_120 = param_2;
      FUN_10a688ac0(&ppuStack_100,&plStack_120,*(undefined8 *)(lVar14 + 8));
      if ((3 < iStack_118) && (plStack_110 != (long *)0x0)) {
        (**(code **)*plStack_110)();
      }
    }
    if (plStack_108 != (long *)0x0) {
      (**(code **)*plStack_108)();
    }
    if (((ulong)plVar13 & 1) != 0) {
      pppuVar15 = (undefined ***)0x60;
      __Znwm();
      pppuVar27 = pppuVar15 + 1;
      *pppuVar27 = (undefined **)0x0;
      pppuVar15[2] = (undefined **)0x0;
      *pppuVar15 = &PTR_FUN_110bc71f0;
      pppuVar28 = pppuVar15 + 3;
      pppuVar15[4] = ppuStack_f8;
      *pppuVar28 = ppuStack_100;
      if (ppuStack_f8 != (undefined **)0x0) {
        ppuStack_f8 = ppuStack_f8 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuStack_f8,0x10);
          if (bVar6) {
            *ppuStack_f8 = *ppuStack_f8 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      pppuVar15[6] = (undefined **)pppuStack_e8;
      pppuVar15[5] = ppuStack_f0;
      if (pppuStack_e8 != (undefined ***)0x0) {
        ppuVar19 = (undefined **)(pppuStack_e8 + 2);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar19,0x10);
          if (bVar6) {
            *ppuVar19 = *ppuVar19 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      *(undefined1 *)(pppuVar15 + 0xb) = 2;
      pppuStack_130 = pppuVar28;
      pppuStack_128 = pppuVar15;
      FUN_10a688c1c(&ppuStack_100);
      FUN_10a059354(&plStack_120,param_2,param_4 + 0x20);
      if (plStack_120 != (long *)0x0) {
        ppuStack_f0 = (undefined **)plVar10[0x20];
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppuVar27,0x10);
          if (bVar6) {
            *pppuVar27 = (undefined **)((long)*pppuVar27 + 1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        plVar12 = (long *)CONCAT44(uStack_114,iStack_118);
        if (plVar12 != (long *)0x0) {
          plVar13 = plVar12 + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar6) {
              *plVar13 = *plVar13 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        ppuStack_100 = (undefined **)FUN_10a3776ac;
        ppuStack_f8 = &PTR_DAT_110bc73c8;
        pppuVar2 = &ppuStack_100;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppuVar27,0x10);
          if (bVar6) {
            *pppuVar27 = (undefined **)((long)*pppuVar27 + 1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        plStack_d8 = plStack_120;
        if (plVar12 != (long *)0x0) {
          plVar13 = plVar12 + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar6) {
              *plVar13 = *plVar13 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        plStack_b8 = (long *)CONCAT44(uStack_114,iStack_118);
        plStack_c0 = plStack_120;
        if (plStack_b8 != (long *)0x0) {
          plVar13 = plStack_b8 + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar6) {
              *plVar13 = *plVar13 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        pcStack_b0 = FUN_10a352044;
        ppuStack_a8 = &PTR_DAT_110950c70;
        pppuStack_e8 = pppuVar28;
        pppuStack_e0 = pppuVar15;
        plStack_d0 = plVar12;
        if (plVar12 != (long *)0x0) {
          plVar13 = plVar12 + 1;
          do {
            lVar14 = *plVar13;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar6) {
              *plVar13 = lVar14 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
          }
        }
        pppuVar3 = &ppuStack_100;
        do {
          ppuVar19 = *pppuVar27;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppuVar27,0x10);
          if (bVar6) {
            *pppuVar27 = (undefined **)((long)ppuVar19 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (ppuVar19 == (undefined **)0x0) {
          (*(code *)(*pppuVar15)[2])(pppuVar15);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar15);
        }
        FUN_10a340180(plVar10,plVar11,&ppuStack_100);
        (*(code *)*ppuStack_a8)(&ppuStack_a8);
        plVar10 = plStack_b8;
        if (plStack_b8 != (long *)0x0) {
          plVar12 = plStack_b8 + 1;
          do {
            lVar14 = *plVar12;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar6) {
              *plVar12 = lVar14 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          }
        }
        pppuVar16 = &ppuStack_f8;
        (*(code *)*ppuStack_f8)();
        pppuVar17 = (undefined ***)CONCAT44(uStack_114,iStack_118);
        if (pppuVar17 != (undefined ***)0x0) {
          pppuVar4 = pppuVar17 + 1;
          do {
            ppuVar19 = *pppuVar4;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppuVar4,0x10);
            if (bVar6) {
              *pppuVar4 = (undefined **)((long)ppuVar19 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (ppuVar19 == (undefined **)0x0) {
            (*(code *)(*pppuVar17)[2])(pppuVar17);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            pppuVar16 = pppuVar17;
          }
        }
        pppuVar17 = pppuStack_128;
        if (pppuStack_128 != (undefined ***)0x0) {
          pppuVar4 = pppuStack_128 + 1;
          do {
            ppuVar19 = *pppuVar4;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppuVar4,0x10);
            if (bVar6) {
              *pppuVar4 = (undefined **)((long)ppuVar19 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (ppuVar19 == (undefined **)0x0) {
            (*(code *)(*pppuStack_128)[2])(pppuStack_128);
            pppuVar16 = pppuVar17;
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
        *param_1 = 0;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
          ___stack_chk_fail();
          (*(code *)*ppuStack_a8)(&ppuStack_a8);
          func_0x00010a07a8a8(&plStack_c0);
          (*(code *)*ppuStack_f8)(&ppuStack_f8);
          func_0x00010a07a8a8(&plStack_120);
          FUN_10a352054(&pppuStack_130);
          unaff_x30 = 0x10a3726bc;
          register0x00000008 = (BADSPACEBASE *)&pppuStack_130;
          unaff_x19 = plVar9;
          unaff_x20 = pppuVar16;
          unaff_x21 = pppuVar17;
          unaff_x22 = plVar11;
          unaff_x23 = pppuVar3;
          unaff_x24 = pppuVar2;
          unaff_x25 = pppuVar15;
          unaff_x26 = pppuVar27;
          unaff_x27 = pppuVar28;
          unaff_x29 = puVar1;
        }
        plVar10 = plVar9 + 0x4b;
        lVar14 = plVar9[0x59];
        uVar18 = lVar14 - 1;
        plVar9[0x59] = uVar18;
        if (uVar18 < 8) {
          uVar18 = plVar10[lVar14 + 2];
          if (plVar9[0x5a] == uVar18) {
            return;
          }
        }
        else {
          uVar18 = *(ulong *)(plVar9[0x57] + -8);
          plVar9[0x57] = plVar9[0x57] + -8;
          if (plVar9[0x5a] == uVar18) {
            return;
          }
        }
        *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
        *(undefined ****)((long)register0x00000008 + -0x58) = unaff_x27;
        *(undefined ****)((long)register0x00000008 + -0x50) = unaff_x26;
        *(undefined ****)((long)register0x00000008 + -0x48) = unaff_x25;
        *(undefined ****)((long)register0x00000008 + -0x40) = unaff_x24;
        *(undefined ****)((long)register0x00000008 + -0x38) = unaff_x23;
        *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
        *(undefined ****)((long)register0x00000008 + -0x28) = unaff_x21;
        *(undefined ****)((long)register0x00000008 + -0x20) = unaff_x20;
        *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        lVar14 = *plVar10;
        lVar23 = plVar9[0x4c];
        lVar21 = lVar23 - lVar14;
        uVar25 = lVar21 >> 4;
        if (uVar25 < uVar18) {
          uVar26 = uVar18 - uVar25;
          lVar24 = plVar9[0x4d];
          if ((ulong)(lVar24 - lVar23 >> 4) < uVar26) {
            if (uVar18 >> 0x3c == 0) {
              uVar20 = lVar24 - lVar14 >> 3;
              if (uVar20 <= uVar18) {
                uVar20 = uVar18;
              }
              if (0x7fffffffffffffef < (ulong)(lVar24 - lVar14)) {
                uVar20 = 0xfffffffffffffff;
              }
              *(long **)((long)register0x00000008 + -0x68) = plVar10;
              if (uVar20 >> 0x3c == 0) {
                lVar8 = uVar20 << 4;
                __Znwm();
                lVar23 = lVar8 + lVar21;
                _bzero(lVar23,uVar26 * 0x10);
                lVar22 = lVar23 + uVar25 * -0x10;
                _memcpy(lVar22,lVar14,lVar21);
                *plVar10 = lVar22;
                plVar9[0x4c] = lVar23 + uVar26 * 0x10;
                plVar9[0x4d] = lVar8 + uVar20 * 0x10;
                *(long *)((long)register0x00000008 + -0x78) = lVar14;
                *(long *)((long)register0x00000008 + -0x70) = lVar24;
                *(long *)((long)register0x00000008 + -0x88) = lVar14;
                *(long *)((long)register0x00000008 + -0x80) = lVar14;
                func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
                goto code_r0x00010988c138;
              }
              func_0x000104c4f740();
            }
            else {
              func_0x00010988c1a4();
            }
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10988c16c);
            (*pcVar7)();
          }
          _bzero(lVar23,uVar26 * 0x10);
          plVar9[0x4c] = lVar23 + uVar26 * 0x10;
        }
        else if (uVar18 < uVar25) {
          lVar14 = lVar14 + uVar18 * 0x10;
          while (lVar23 != lVar14) {
            lVar23 = lVar23 + -0x10;
            func_0x00010988c204(lVar23);
          }
          plVar9[0x4c] = lVar14;
        }
code_r0x00010988c138:
        plVar9[0x5a] = uVar18;
        return;
      }
      FUN_10a00946c(&UNK_10f64fdc4);
      goto LAB_10a37262c;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a37262c:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a372630);
  (*pcVar7)();
}



/* Entry: 10a3726c4; end: 10a3726e7;  */

void FUN_10a3726c4(undefined8 param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1 == 3) {
    return;
  }
  puVar1 = (undefined8 *)0x3;
  FUN_10a052ee0(3,0,param_1);
  *puVar1 = &PTR_FUN_110bc71f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a3726e8; end: 10a3726f7;  */

void FUN_10a3726e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc71f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a3726f8; end: 10a372717;  */

void FUN_10a3726f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc71f0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a372718; end: 10a37273f;  */

undefined1  [16] FUN_10a372718(long param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_38;
  
  bVar2 = *(byte *)(param_1 + 0x58);
  if (3 < (ulong)bVar2) {
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10a37273c);
    (*UNRECOVERED_JUMPTABLE)();
  }
  auVar10._8_8_ = (code **)(&PTR_FUN_110b9a040)[bVar2];
  puVar5 = (undefined8 *)(param_1 + 0x18);
  switch(bVar2) {
  case 0:
    auVar10._0_8_ = puVar5;
    return auVar10;
  case 1:
    puVar5 = (undefined8 *)(param_1 + 0x20);
    UNRECOVERED_JUMPTABLE = *(code **)*puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010a00496c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    auVar11._8_8_ = UNRECOVERED_JUMPTABLE;
    auVar11._0_8_ = puVar5;
    return auVar11;
  case 3:
    auVar12._8_8_ = auVar10._8_8_;
    auVar12._0_8_ = puVar5;
    return auVar12;
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  if (((*ppuVar6 == (undefined *)0x0) &&
      (plVar7 = *(long **)(param_1 + 0x30), plVar7 != (long *)0x0)) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 != (long *)0x0)) {
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x870);
      uStack_60 = *(undefined8 *)(param_1 + 0x20);
      uStack_68 = *puVar5;
      *puVar5 = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      pcStack_78 = FUN_10a69fabc;
      ppuStack_70 = &PTR_DAT_110c0ce80;
      auVar10._8_8_ = &pcStack_78;
      FUN_10a4634ec(uVar8);
      (*(code *)*ppuStack_70)(&ppuStack_70);
    }
    plVar1 = plVar7 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x00010a004dac(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    auVar13._8_8_ = auVar10._8_8_;
    auVar13._0_8_ = puVar5;
    return auVar13;
  }
  ___stack_chk_fail();
  if ((int)auVar10._8_8_ == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  auVar14._8_8_ = 0x18;
  auVar14._0_8_ = &UNK_10f66c09c;
  return auVar14;
}



/* Entry: 10a372740; end: 10a372c53;  */

/* WARNING: Possible PIC construction at 0x00010a372c48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a372c4c) */
/* WARNING: Removing unreachable block (ram,0x00010a372c60) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd2e4) */
/* WARNING: Removing unreachable block (ram,0x00010a372c5c) */

void FUN_10a372740(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  undefined ***pppuVar15;
  undefined ***pppuVar16;
  undefined ***pppuVar17;
  ulong uVar18;
  undefined **ppuVar19;
  ulong uVar20;
  long *unaff_x19;
  undefined ***unaff_x20;
  undefined ***unaff_x21;
  long lVar21;
  long *unaff_x22;
  long lVar22;
  long lVar23;
  undefined ***unaff_x23;
  long lVar24;
  undefined ***unaff_x24;
  ulong uVar25;
  undefined ***unaff_x25;
  ulong uVar26;
  undefined ***unaff_x26;
  undefined ***pppuVar27;
  undefined ***unaff_x27;
  undefined ***pppuVar28;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined ***pppuStack_130;
  undefined ***pppuStack_128;
  long *plStack_120;
  int iStack_118;
  undefined4 uStack_114;
  long *plStack_110;
  long *plStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c0;
  long *plStack_b8;
  code *pcStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  plVar10 = param_2;
  FUN_10a370100(param_2,param_3);
  FUN_10a372c54(param_5);
  plVar11 = param_2;
  FUN_10a3703b8(param_2,param_4);
  if (*(int *)(param_4 + 0x10) == 7) {
    plVar12 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_4 + 0x18));
    plVar13 = param_2;
    plStack_108 = plVar12;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_108);
    if ((int)plVar13 != 0) {
      plVar12 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar14 = plVar12[0x48];
      if ((lVar14 == 0) ||
         (___dynamic_cast(lVar14,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), lVar14 == 0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10a372bbc;
      }
      plStack_110 = plStack_108;
      plStack_108 = (long *)0x0;
      iStack_118 = 7;
      plStack_120 = param_2;
      FUN_10a688ac0(&ppuStack_100,&plStack_120,*(undefined8 *)(lVar14 + 8));
      if ((3 < iStack_118) && (plStack_110 != (long *)0x0)) {
        (**(code **)*plStack_110)();
      }
    }
    if (plStack_108 != (long *)0x0) {
      (**(code **)*plStack_108)();
    }
    if (((ulong)plVar13 & 1) != 0) {
      pppuVar15 = (undefined ***)0x60;
      __Znwm();
      pppuVar27 = pppuVar15 + 1;
      *pppuVar27 = (undefined **)0x0;
      pppuVar15[2] = (undefined **)0x0;
      *pppuVar15 = &PTR_FUN_110bc7240;
      pppuVar28 = pppuVar15 + 3;
      pppuVar15[4] = ppuStack_f8;
      *pppuVar28 = ppuStack_100;
      if (ppuStack_f8 != (undefined **)0x0) {
        ppuStack_f8 = ppuStack_f8 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuStack_f8,0x10);
          if (bVar6) {
            *ppuStack_f8 = *ppuStack_f8 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      pppuVar15[6] = (undefined **)pppuStack_e8;
      pppuVar15[5] = ppuStack_f0;
      if (pppuStack_e8 != (undefined ***)0x0) {
        ppuVar19 = (undefined **)(pppuStack_e8 + 2);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar19,0x10);
          if (bVar6) {
            *ppuVar19 = *ppuVar19 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      *(undefined1 *)(pppuVar15 + 0xb) = 2;
      pppuStack_130 = pppuVar28;
      pppuStack_128 = pppuVar15;
      FUN_10a688c1c(&ppuStack_100);
      FUN_10a059354(&plStack_120,param_2,param_4 + 0x20);
      if (plStack_120 != (long *)0x0) {
        ppuStack_f0 = (undefined **)plVar10[0x20];
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppuVar27,0x10);
          if (bVar6) {
            *pppuVar27 = (undefined **)((long)*pppuVar27 + 1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        plVar12 = (long *)CONCAT44(uStack_114,iStack_118);
        if (plVar12 != (long *)0x0) {
          plVar13 = plVar12 + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar6) {
              *plVar13 = *plVar13 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        ppuStack_100 = (undefined **)FUN_10a378800;
        ppuStack_f8 = &PTR_FUN_110bc7400;
        pppuVar2 = &ppuStack_100;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppuVar27,0x10);
          if (bVar6) {
            *pppuVar27 = (undefined **)((long)*pppuVar27 + 1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        plStack_d8 = plStack_120;
        if (plVar12 != (long *)0x0) {
          plVar13 = plVar12 + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar6) {
              *plVar13 = *plVar13 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        plStack_b8 = (long *)CONCAT44(uStack_114,iStack_118);
        plStack_c0 = plStack_120;
        if (plStack_b8 != (long *)0x0) {
          plVar13 = plStack_b8 + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar6) {
              *plVar13 = *plVar13 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        pcStack_b0 = FUN_10a352044;
        ppuStack_a8 = &PTR_DAT_110950c70;
        pppuStack_e8 = pppuVar28;
        pppuStack_e0 = pppuVar15;
        plStack_d0 = plVar12;
        if (plVar12 != (long *)0x0) {
          plVar13 = plVar12 + 1;
          do {
            lVar14 = *plVar13;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar6) {
              *plVar13 = lVar14 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
          }
        }
        pppuVar3 = &ppuStack_100;
        do {
          ppuVar19 = *pppuVar27;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppuVar27,0x10);
          if (bVar6) {
            *pppuVar27 = (undefined **)((long)ppuVar19 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (ppuVar19 == (undefined **)0x0) {
          (*(code *)(*pppuVar15)[2])(pppuVar15);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar15);
        }
        FUN_10a340180(plVar10,plVar11,&ppuStack_100);
        (*(code *)*ppuStack_a8)(&ppuStack_a8);
        plVar10 = plStack_b8;
        if (plStack_b8 != (long *)0x0) {
          plVar12 = plStack_b8 + 1;
          do {
            lVar14 = *plVar12;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar6) {
              *plVar12 = lVar14 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          }
        }
        pppuVar16 = &ppuStack_f8;
        (*(code *)*ppuStack_f8)();
        pppuVar17 = (undefined ***)CONCAT44(uStack_114,iStack_118);
        if (pppuVar17 != (undefined ***)0x0) {
          pppuVar4 = pppuVar17 + 1;
          do {
            ppuVar19 = *pppuVar4;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppuVar4,0x10);
            if (bVar6) {
              *pppuVar4 = (undefined **)((long)ppuVar19 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (ppuVar19 == (undefined **)0x0) {
            (*(code *)(*pppuVar17)[2])(pppuVar17);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            pppuVar16 = pppuVar17;
          }
        }
        pppuVar17 = pppuStack_128;
        if (pppuStack_128 != (undefined ***)0x0) {
          pppuVar4 = pppuStack_128 + 1;
          do {
            ppuVar19 = *pppuVar4;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppuVar4,0x10);
            if (bVar6) {
              *pppuVar4 = (undefined **)((long)ppuVar19 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (ppuVar19 == (undefined **)0x0) {
            (*(code *)(*pppuStack_128)[2])(pppuStack_128);
            pppuVar16 = pppuVar17;
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
        *param_1 = 0;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
          ___stack_chk_fail();
          (*(code *)*ppuStack_a8)(&ppuStack_a8);
          func_0x00010a07a8a8(&plStack_c0);
          (*(code *)*ppuStack_f8)(&ppuStack_f8);
          func_0x00010a07a8a8(&plStack_120);
          func_0x00010a3520ac(&pppuStack_130);
          unaff_x30 = 0x10a372c4c;
          register0x00000008 = (BADSPACEBASE *)&pppuStack_130;
          unaff_x19 = plVar9;
          unaff_x20 = pppuVar16;
          unaff_x21 = pppuVar17;
          unaff_x22 = plVar11;
          unaff_x23 = pppuVar3;
          unaff_x24 = pppuVar2;
          unaff_x25 = pppuVar15;
          unaff_x26 = pppuVar27;
          unaff_x27 = pppuVar28;
          unaff_x29 = puVar1;
        }
        plVar10 = plVar9 + 0x4b;
        lVar14 = plVar9[0x59];
        uVar18 = lVar14 - 1;
        plVar9[0x59] = uVar18;
        if (uVar18 < 8) {
          uVar18 = plVar10[lVar14 + 2];
          if (plVar9[0x5a] == uVar18) {
            return;
          }
        }
        else {
          uVar18 = *(ulong *)(plVar9[0x57] + -8);
          plVar9[0x57] = plVar9[0x57] + -8;
          if (plVar9[0x5a] == uVar18) {
            return;
          }
        }
        *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
        *(undefined ****)((long)register0x00000008 + -0x58) = unaff_x27;
        *(undefined ****)((long)register0x00000008 + -0x50) = unaff_x26;
        *(undefined ****)((long)register0x00000008 + -0x48) = unaff_x25;
        *(undefined ****)((long)register0x00000008 + -0x40) = unaff_x24;
        *(undefined ****)((long)register0x00000008 + -0x38) = unaff_x23;
        *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
        *(undefined ****)((long)register0x00000008 + -0x28) = unaff_x21;
        *(undefined ****)((long)register0x00000008 + -0x20) = unaff_x20;
        *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        lVar14 = *plVar10;
        lVar23 = plVar9[0x4c];
        lVar21 = lVar23 - lVar14;
        uVar25 = lVar21 >> 4;
        if (uVar25 < uVar18) {
          uVar26 = uVar18 - uVar25;
          lVar24 = plVar9[0x4d];
          if ((ulong)(lVar24 - lVar23 >> 4) < uVar26) {
            if (uVar18 >> 0x3c == 0) {
              uVar20 = lVar24 - lVar14 >> 3;
              if (uVar20 <= uVar18) {
                uVar20 = uVar18;
              }
              if (0x7fffffffffffffef < (ulong)(lVar24 - lVar14)) {
                uVar20 = 0xfffffffffffffff;
              }
              *(long **)((long)register0x00000008 + -0x68) = plVar10;
              if (uVar20 >> 0x3c == 0) {
                lVar8 = uVar20 << 4;
                __Znwm();
                lVar23 = lVar8 + lVar21;
                _bzero(lVar23,uVar26 * 0x10);
                lVar22 = lVar23 + uVar25 * -0x10;
                _memcpy(lVar22,lVar14,lVar21);
                *plVar10 = lVar22;
                plVar9[0x4c] = lVar23 + uVar26 * 0x10;
                plVar9[0x4d] = lVar8 + uVar20 * 0x10;
                *(long *)((long)register0x00000008 + -0x78) = lVar14;
                *(long *)((long)register0x00000008 + -0x70) = lVar24;
                *(long *)((long)register0x00000008 + -0x88) = lVar14;
                *(long *)((long)register0x00000008 + -0x80) = lVar14;
                func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
                goto code_r0x00010988c138;
              }
              func_0x000104c4f740();
            }
            else {
              func_0x00010988c1a4();
            }
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10988c16c);
            (*pcVar7)();
          }
          _bzero(lVar23,uVar26 * 0x10);
          plVar9[0x4c] = lVar23 + uVar26 * 0x10;
        }
        else if (uVar18 < uVar25) {
          lVar14 = lVar14 + uVar18 * 0x10;
          while (lVar23 != lVar14) {
            lVar23 = lVar23 + -0x10;
            func_0x00010988c204(lVar23);
          }
          plVar9[0x4c] = lVar14;
        }
code_r0x00010988c138:
        plVar9[0x5a] = uVar18;
        return;
      }
      FUN_10a00946c(&UNK_10f64fdc4);
      goto LAB_10a372bbc;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a372bbc:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a372bc0);
  (*pcVar7)();
}



/* Entry: 10a372c54; end: 10a372c77;  */

void FUN_10a372c54(undefined8 param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1 == 3) {
    return;
  }
  puVar1 = (undefined8 *)0x3;
  FUN_10a052ee0(3,0,param_1);
  *puVar1 = &PTR_FUN_110bc7240;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a372c78; end: 10a372c87;  */

void FUN_10a372c78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc7240;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a372c88; end: 10a372ca7;  */

void FUN_10a372c88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc7240;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a372ca8; end: 10a372ccf;  */

undefined1  [16] FUN_10a372ca8(long param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_38;
  
  bVar2 = *(byte *)(param_1 + 0x58);
  if (3 < (ulong)bVar2) {
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10a372ccc);
    (*UNRECOVERED_JUMPTABLE)();
  }
  auVar10._8_8_ = (code **)(&PTR_FUN_110b9a040)[bVar2];
  puVar5 = (undefined8 *)(param_1 + 0x18);
  switch(bVar2) {
  case 0:
    auVar10._0_8_ = puVar5;
    return auVar10;
  case 1:
    puVar5 = (undefined8 *)(param_1 + 0x20);
    UNRECOVERED_JUMPTABLE = *(code **)*puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010a00496c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    auVar11._8_8_ = UNRECOVERED_JUMPTABLE;
    auVar11._0_8_ = puVar5;
    return auVar11;
  case 3:
    auVar12._8_8_ = auVar10._8_8_;
    auVar12._0_8_ = puVar5;
    return auVar12;
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  if (((*ppuVar6 == (undefined *)0x0) &&
      (plVar7 = *(long **)(param_1 + 0x30), plVar7 != (long *)0x0)) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 != (long *)0x0)) {
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x870);
      uStack_60 = *(undefined8 *)(param_1 + 0x20);
      uStack_68 = *puVar5;
      *puVar5 = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      pcStack_78 = FUN_10a69fabc;
      ppuStack_70 = &PTR_DAT_110c0ce80;
      auVar10._8_8_ = &pcStack_78;
      FUN_10a4634ec(uVar8);
      (*(code *)*ppuStack_70)(&ppuStack_70);
    }
    plVar1 = plVar7 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x00010a004dac(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    auVar13._8_8_ = auVar10._8_8_;
    auVar13._0_8_ = puVar5;
    return auVar13;
  }
  ___stack_chk_fail();
  if ((int)auVar10._8_8_ == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  auVar14._8_8_ = 0x18;
  auVar14._0_8_ = &UNK_10f66c09c;
  return auVar14;
}



/* Entry: 10a372cd0; end: 10a37320f;  */

/* WARNING: Possible PIC construction at 0x00010a373204: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a373208) */
/* WARNING: Removing unreachable block (ram,0x00010a37321c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd2e4) */
/* WARNING: Removing unreachable block (ram,0x00010a373218) */

void FUN_10a372cd0(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  undefined ***pppuVar15;
  undefined ***pppuVar16;
  undefined ***pppuVar17;
  undefined *puVar18;
  ulong uVar19;
  undefined **ppuVar20;
  ulong uVar21;
  long *unaff_x19;
  undefined ***unaff_x20;
  undefined ***unaff_x21;
  long lVar22;
  long *unaff_x22;
  long lVar23;
  long lVar24;
  undefined ***unaff_x23;
  long lVar25;
  undefined ***unaff_x24;
  ulong uVar26;
  undefined ***unaff_x25;
  ulong uVar27;
  undefined ***unaff_x26;
  undefined ***pppuVar28;
  undefined ***unaff_x27;
  undefined ***pppuVar29;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined ***pppuStack_130;
  undefined ***pppuStack_128;
  long *plStack_120;
  int iStack_118;
  undefined4 uStack_114;
  long *plStack_110;
  long *plStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c0;
  long *plStack_b8;
  code *pcStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  plVar10 = param_2;
  FUN_10a370100(param_2,param_3);
  FUN_10a373210(param_5);
  plVar11 = param_2;
  FUN_10a3703b8(param_2,param_4);
  if (*(int *)(param_4 + 0x10) == 7) {
    plVar12 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_4 + 0x18));
    plVar13 = param_2;
    plStack_108 = plVar12;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_108);
    if ((int)plVar13 != 0) {
      plVar12 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar14 = plVar12[0x48];
      if ((lVar14 == 0) ||
         (___dynamic_cast(lVar14,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), lVar14 == 0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10a373178;
      }
      plStack_110 = plStack_108;
      plStack_108 = (long *)0x0;
      iStack_118 = 7;
      plStack_120 = param_2;
      FUN_10a688ac0(&ppuStack_100,&plStack_120,*(undefined8 *)(lVar14 + 8));
      if ((3 < iStack_118) && (plStack_110 != (long *)0x0)) {
        (**(code **)*plStack_110)();
      }
    }
    if (plStack_108 != (long *)0x0) {
      (**(code **)*plStack_108)();
    }
    if (((ulong)plVar13 & 1) != 0) {
      pppuVar15 = (undefined ***)0x60;
      __Znwm();
      pppuVar28 = pppuVar15 + 1;
      *pppuVar28 = (undefined **)0x0;
      pppuVar15[2] = (undefined **)0x0;
      *pppuVar15 = &PTR_FUN_110bc7290;
      pppuVar29 = pppuVar15 + 3;
      pppuVar15[4] = ppuStack_f8;
      *pppuVar29 = ppuStack_100;
      if (ppuStack_f8 != (undefined **)0x0) {
        ppuStack_f8 = ppuStack_f8 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuStack_f8,0x10);
          if (bVar6) {
            *ppuStack_f8 = *ppuStack_f8 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      pppuVar15[6] = (undefined **)pppuStack_e8;
      pppuVar15[5] = ppuStack_f0;
      if (pppuStack_e8 != (undefined ***)0x0) {
        ppuVar20 = (undefined **)(pppuStack_e8 + 2);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
          if (bVar6) {
            *ppuVar20 = *ppuVar20 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      *(undefined1 *)(pppuVar15 + 0xb) = 2;
      pppuStack_130 = pppuVar29;
      pppuStack_128 = pppuVar15;
      FUN_10a688c1c(&ppuStack_100);
      FUN_10a059354(&plStack_120,param_2,param_4 + 0x20);
      plVar12 = plVar11;
      ___dynamic_cast(plVar11,&PTR_DAT_110c5ef50,&PTR_DAT_110baea90,0);
      if (plVar12 == (long *)0x0) {
        if (plStack_120 != (long *)0x0) {
          ppuStack_f0 = (undefined **)plVar10[0x20];
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppuVar28,0x10);
            if (bVar6) {
              *pppuVar28 = (undefined **)((long)*pppuVar28 + 1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          plVar12 = (long *)CONCAT44(uStack_114,iStack_118);
          if (plVar12 != (long *)0x0) {
            plVar13 = plVar12 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar6) {
                *plVar13 = *plVar13 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          ppuStack_100 = (undefined **)FUN_10a37c910;
          ppuStack_f8 = &PTR_DAT_110bc7570;
          pppuVar2 = &ppuStack_100;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppuVar28,0x10);
            if (bVar6) {
              *pppuVar28 = (undefined **)((long)*pppuVar28 + 1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          plStack_d8 = plStack_120;
          if (plVar12 != (long *)0x0) {
            plVar13 = plVar12 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar6) {
                *plVar13 = *plVar13 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          plStack_b8 = (long *)CONCAT44(uStack_114,iStack_118);
          plStack_c0 = plStack_120;
          if (plStack_b8 != (long *)0x0) {
            plVar13 = plStack_b8 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar6) {
                *plVar13 = *plVar13 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          uStack_88 = 0;
          uStack_90 = 0;
          uStack_78 = 0;
          uStack_80 = 0;
          uStack_98 = 0;
          uStack_a0 = 0;
          pcStack_b0 = FUN_10a352044;
          ppuStack_a8 = &PTR_DAT_110950c70;
          pppuStack_e8 = pppuVar29;
          pppuStack_e0 = pppuVar15;
          plStack_d0 = plVar12;
          if (plVar12 != (long *)0x0) {
            plVar13 = plVar12 + 1;
            do {
              lVar14 = *plVar13;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar6) {
                *plVar13 = lVar14 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
            }
          }
          pppuVar3 = &ppuStack_100;
          do {
            ppuVar20 = *pppuVar28;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppuVar28,0x10);
            if (bVar6) {
              *pppuVar28 = (undefined **)((long)ppuVar20 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (ppuVar20 == (undefined **)0x0) {
            (*(code *)(*pppuVar15)[2])(pppuVar15);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar15);
          }
          FUN_10a340180(plVar10,plVar11,&ppuStack_100);
          (*(code *)*ppuStack_a8)(&ppuStack_a8);
          plVar10 = plStack_b8;
          if (plStack_b8 != (long *)0x0) {
            plVar12 = plStack_b8 + 1;
            do {
              lVar14 = *plVar12;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar6) {
                *plVar12 = lVar14 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
            }
          }
          pppuVar16 = &ppuStack_f8;
          (*(code *)*ppuStack_f8)();
          pppuVar17 = (undefined ***)CONCAT44(uStack_114,iStack_118);
          if (pppuVar17 != (undefined ***)0x0) {
            pppuVar4 = pppuVar17 + 1;
            do {
              ppuVar20 = *pppuVar4;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(pppuVar4,0x10);
              if (bVar6) {
                *pppuVar4 = (undefined **)((long)ppuVar20 + -1);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (ppuVar20 == (undefined **)0x0) {
              (*(code *)(*pppuVar17)[2])(pppuVar17);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              pppuVar16 = pppuVar17;
            }
          }
          pppuVar17 = pppuStack_128;
          if (pppuStack_128 != (undefined ***)0x0) {
            pppuVar4 = pppuStack_128 + 1;
            do {
              ppuVar20 = *pppuVar4;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(pppuVar4,0x10);
              if (bVar6) {
                *pppuVar4 = (undefined **)((long)ppuVar20 + -1);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (ppuVar20 == (undefined **)0x0) {
              (*(code *)(*pppuStack_128)[2])(pppuStack_128);
              pppuVar16 = pppuVar17;
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
          }
          *param_1 = 0;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
            ___stack_chk_fail();
            (*(code *)*ppuStack_a8)(&ppuStack_a8);
            func_0x00010a07a8a8(&plStack_c0);
            (*(code *)*ppuStack_f8)(&ppuStack_f8);
            func_0x00010a07a8a8(&plStack_120);
            func_0x00010a35215c(&pppuStack_130);
            unaff_x30 = 0x10a373208;
            register0x00000008 = (BADSPACEBASE *)&pppuStack_130;
            unaff_x19 = plVar9;
            unaff_x20 = pppuVar16;
            unaff_x21 = pppuVar17;
            unaff_x22 = plVar11;
            unaff_x23 = pppuVar3;
            unaff_x24 = pppuVar2;
            unaff_x25 = pppuVar15;
            unaff_x26 = pppuVar28;
            unaff_x27 = pppuVar29;
            unaff_x29 = puVar1;
          }
          plVar10 = plVar9 + 0x4b;
          lVar14 = plVar9[0x59];
          uVar19 = lVar14 - 1;
          plVar9[0x59] = uVar19;
          if (uVar19 < 8) {
            uVar19 = plVar10[lVar14 + 2];
            if (plVar9[0x5a] == uVar19) {
              return;
            }
          }
          else {
            uVar19 = *(ulong *)(plVar9[0x57] + -8);
            plVar9[0x57] = plVar9[0x57] + -8;
            if (plVar9[0x5a] == uVar19) {
              return;
            }
          }
          *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
          *(undefined ****)((long)register0x00000008 + -0x58) = unaff_x27;
          *(undefined ****)((long)register0x00000008 + -0x50) = unaff_x26;
          *(undefined ****)((long)register0x00000008 + -0x48) = unaff_x25;
          *(undefined ****)((long)register0x00000008 + -0x40) = unaff_x24;
          *(undefined ****)((long)register0x00000008 + -0x38) = unaff_x23;
          *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
          *(undefined ****)((long)register0x00000008 + -0x28) = unaff_x21;
          *(undefined ****)((long)register0x00000008 + -0x20) = unaff_x20;
          *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
          *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
          *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
          lVar14 = *plVar10;
          lVar24 = plVar9[0x4c];
          lVar22 = lVar24 - lVar14;
          uVar26 = lVar22 >> 4;
          if (uVar26 < uVar19) {
            uVar27 = uVar19 - uVar26;
            lVar25 = plVar9[0x4d];
            if ((ulong)(lVar25 - lVar24 >> 4) < uVar27) {
              if (uVar19 >> 0x3c == 0) {
                uVar21 = lVar25 - lVar14 >> 3;
                if (uVar21 <= uVar19) {
                  uVar21 = uVar19;
                }
                if (0x7fffffffffffffef < (ulong)(lVar25 - lVar14)) {
                  uVar21 = 0xfffffffffffffff;
                }
                *(long **)((long)register0x00000008 + -0x68) = plVar10;
                if (uVar21 >> 0x3c == 0) {
                  lVar8 = uVar21 << 4;
                  __Znwm();
                  lVar24 = lVar8 + lVar22;
                  _bzero(lVar24,uVar27 * 0x10);
                  lVar23 = lVar24 + uVar26 * -0x10;
                  _memcpy(lVar23,lVar14,lVar22);
                  *plVar10 = lVar23;
                  plVar9[0x4c] = lVar24 + uVar27 * 0x10;
                  plVar9[0x4d] = lVar8 + uVar21 * 0x10;
                  *(long *)((long)register0x00000008 + -0x78) = lVar14;
                  *(long *)((long)register0x00000008 + -0x70) = lVar25;
                  *(long *)((long)register0x00000008 + -0x88) = lVar14;
                  *(long *)((long)register0x00000008 + -0x80) = lVar14;
                  func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
                  goto code_r0x00010988c138;
                }
                func_0x000104c4f740();
              }
              else {
                func_0x00010988c1a4();
              }
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x10988c16c);
              (*pcVar7)();
            }
            _bzero(lVar24,uVar27 * 0x10);
            plVar9[0x4c] = lVar24 + uVar27 * 0x10;
          }
          else if (uVar19 < uVar26) {
            lVar14 = lVar14 + uVar19 * 0x10;
            while (lVar24 != lVar14) {
              lVar24 = lVar24 + -0x10;
              func_0x00010988c204(lVar24);
            }
            plVar9[0x4c] = lVar14;
          }
code_r0x00010988c138:
          plVar9[0x5a] = uVar19;
          return;
        }
        puVar18 = &UNK_10f64fdc4;
      }
      else {
        puVar18 = &UNK_10f64fe8f;
      }
      FUN_10a00946c(puVar18);
      goto LAB_10a373178;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a373178:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a37317c);
  (*pcVar7)();
}



/* Entry: 10a373210; end: 10a373233;  */

void FUN_10a373210(undefined8 param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1 == 3) {
    return;
  }
  puVar1 = (undefined8 *)0x3;
  FUN_10a052ee0(3,0,param_1);
  *puVar1 = &PTR_FUN_110bc7290;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a373234; end: 10a373243;  */

void FUN_10a373234(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc7290;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a373244; end: 10a373263;  */

void FUN_10a373244(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc7290;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a373264; end: 10a37328b;  */

undefined1  [16] FUN_10a373264(long param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_38;
  
  bVar2 = *(byte *)(param_1 + 0x58);
  if (3 < (ulong)bVar2) {
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10a373288);
    (*UNRECOVERED_JUMPTABLE)();
  }
  auVar10._8_8_ = (code **)(&PTR_FUN_110b9a040)[bVar2];
  puVar5 = (undefined8 *)(param_1 + 0x18);
  switch(bVar2) {
  case 0:
    auVar10._0_8_ = puVar5;
    return auVar10;
  case 1:
    puVar5 = (undefined8 *)(param_1 + 0x20);
    UNRECOVERED_JUMPTABLE = *(code **)*puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010a00496c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    auVar11._8_8_ = UNRECOVERED_JUMPTABLE;
    auVar11._0_8_ = puVar5;
    return auVar11;
  case 3:
    auVar12._8_8_ = auVar10._8_8_;
    auVar12._0_8_ = puVar5;
    return auVar12;
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  if (((*ppuVar6 == (undefined *)0x0) &&
      (plVar7 = *(long **)(param_1 + 0x30), plVar7 != (long *)0x0)) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 != (long *)0x0)) {
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x870);
      uStack_60 = *(undefined8 *)(param_1 + 0x20);
      uStack_68 = *puVar5;
      *puVar5 = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      pcStack_78 = FUN_10a69fabc;
      ppuStack_70 = &PTR_DAT_110c0ce80;
      auVar10._8_8_ = &pcStack_78;
      FUN_10a4634ec(uVar8);
      (*(code *)*ppuStack_70)(&ppuStack_70);
    }
    plVar1 = plVar7 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x00010a004dac(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    auVar13._8_8_ = auVar10._8_8_;
    auVar13._0_8_ = puVar5;
    return auVar13;
  }
  ___stack_chk_fail();
  if ((int)auVar10._8_8_ == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  auVar14._8_8_ = 0x18;
  auVar14._0_8_ = &UNK_10f66c09c;
  return auVar14;
}



/* Entry: 10a37328c; end: 10a373c2b;  */

/* WARNING: Possible PIC construction at 0x00010a373c20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a373c24) */
/* WARNING: Removing unreachable block (ram,0x00010a373c3c) */
/* WARNING: Removing unreachable block (ram,0x00010a373c80) */
/* WARNING: Removing unreachable block (ram,0x00010a373c6c) */
/* WARNING: Removing unreachable block (ram,0x00010a373c8c) */
/* WARNING: Removing unreachable block (ram,0x00010a373c9c) */
/* WARNING: Removing unreachable block (ram,0x00010a373cc0) */
/* WARNING: Removing unreachable block (ram,0x00010a373ce8) */
/* WARNING: Removing unreachable block (ram,0x00010a373d24) */
/* WARNING: Removing unreachable block (ram,0x00010a373d3c) */
/* WARNING: Removing unreachable block (ram,0x00010a373d58) */
/* WARNING: Removing unreachable block (ram,0x00010a373d8c) */
/* WARNING: Removing unreachable block (ram,0x00010a373d94) */
/* WARNING: Removing unreachable block (ram,0x00010a373da0) */
/* WARNING: Removing unreachable block (ram,0x00010a373da8) */
/* WARNING: Removing unreachable block (ram,0x00010a373db4) */
/* WARNING: Removing unreachable block (ram,0x00010a373e44) */
/* WARNING: Removing unreachable block (ram,0x00010a373e50) */
/* WARNING: Removing unreachable block (ram,0x00010a373db8) */
/* WARNING: Removing unreachable block (ram,0x00010a373de4) */
/* WARNING: Removing unreachable block (ram,0x00010a373de8) */
/* WARNING: Removing unreachable block (ram,0x00010a373df0) */
/* WARNING: Removing unreachable block (ram,0x00010a373df8) */
/* WARNING: Removing unreachable block (ram,0x00010a373e08) */
/* WARNING: Removing unreachable block (ram,0x00010a373e0c) */
/* WARNING: Removing unreachable block (ram,0x00010a373e14) */
/* WARNING: Removing unreachable block (ram,0x00010a373e1c) */
/* WARNING: Removing unreachable block (ram,0x00010a373cb8) */
/* WARNING: Removing unreachable block (ram,0x00010a373c38) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a37328c(undefined4 *param_1,code *******param_2,undefined8 param_3,uint *param_4,
                  ulong param_5)

{
  undefined1 *puVar1;
  code *******pppppppcVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  long lVar9;
  code *******pppppppcVar10;
  code *******pppppppcVar11;
  code *******pppppppcVar12;
  code *******pppppppcVar13;
  code ****ppppcVar14;
  code *******pppppppcVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  uint uVar18;
  code ******ppppppcVar19;
  code ******ppppppcVar20;
  code ******ppppppcVar21;
  code *******unaff_x19;
  code *******unaff_x20;
  code *******unaff_x21;
  long lVar22;
  code *******unaff_x22;
  code ****unaff_x23;
  code ******ppppppcVar23;
  code *******unaff_x24;
  code *******pppppppcVar24;
  code ******ppppppcVar25;
  code *******unaff_x25;
  ulong uVar26;
  ulong unaff_x26;
  code *******unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  code *******apppppppcStack_290 [2];
  code *******pppppppcStack_280;
  code *******pppppppcStack_278;
  undefined1 uStack_270;
  code *******pppppppcStack_260;
  code *******pppppppcStack_258;
  undefined8 uStack_250;
  code *******pppppppcStack_248;
  uint auStack_238 [2];
  code *******pppppppcStack_230;
  code ******ppppppcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  code *******apppppppcStack_210 [2];
  char cStack_1f9;
  code *******pppppppcStack_1f8;
  ulong uStack_1f0;
  byte bStack_1e1;
  code *******pppppppcStack_1e0;
  undefined8 uStack_1d8;
  char cStack_1c9;
  code *******apppppppcStack_1c8 [2];
  char cStack_1b1;
  code ******ppppppcStack_1b0;
  code *******pppppppcStack_1a8;
  code ****ppppcStack_1a0;
  code *******pppppppcStack_198;
  code *******pppppppcStack_190;
  code *******pppppppcStack_188;
  code *******pppppppcStack_180;
  undefined **ppuStack_178;
  code ******ppppppcStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  code *******pppppppcStack_140;
  code *******pppppppcStack_138;
  long lStack_130;
  code *******pppppppcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  char cStack_111;
  undefined8 uStack_110;
  code *******pppppppcStack_108;
  code *******pppppppcStack_100;
  code *******pppppppcStack_f8;
  long lStack_68;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppcVar10 = param_2;
  (*(code *)(*param_2)[0xb])();
  if (pppppppcVar10[0x59] < (code ******)0x8) {
    pppppppcVar10[(long)pppppppcVar10[0x59] + 0x4e] = pppppppcVar10[0x5a];
    pppppppcVar10[0x59] = (code ******)((long)pppppppcVar10[0x59] + 1);
  }
  else {
    func_0x00010988bfcc(pppppppcVar10 + 0x4b);
  }
  pppppppcVar11 = param_2;
  FUN_10a370100(param_2,param_3);
  FUN_10a373c2c(param_5);
  auStack_238[0] = 0;
  puVar4 = auStack_238;
  if (param_5 != 0) {
    puVar4 = param_4;
  }
  pppppppcVar12 = param_2;
  FUN_10a373c54(param_2,puVar4);
  puVar4 = auStack_238;
  if (1 < param_5) {
    puVar4 = param_4 + 4;
  }
  pppppppcVar13 = (code *******)&pppppppcStack_230;
  if (1 < param_5) {
    pppppppcVar13 = (code *******)(param_4 + 6);
  }
  FUN_10a373ccc(&uStack_250,param_2,*puVar4,*pppppppcVar13);
  puVar4 = auStack_238;
  if (2 < param_5) {
    puVar4 = param_4 + 8;
  }
  FUN_10a059354(&pppppppcStack_260,param_2,puVar4);
  puVar4 = auStack_238;
  if (3 < param_5) {
    puVar4 = param_4 + 0xc;
  }
  uVar5 = *puVar4;
  if (1 < uVar5) {
    FUN_10a373ee8(&pppppppcStack_140,param_2);
    pppppppcStack_278 = pppppppcStack_138;
    pppppppcStack_280 = pppppppcStack_140;
    param_2 = pppppppcStack_138;
  }
  else {
    pppppppcStack_280 = (code *******)((ulong)pppppppcStack_280 & 0xffffffffffffff00);
  }
  pppppppcVar13 = (code *******)0x40;
  uStack_270 = 1 < uVar5;
  __Znwm();
  pppppppcVar24 = pppppppcVar13 + 1;
  *pppppppcVar24 = (code ******)0x0;
  pppppppcVar13[2] = (code ******)0x0;
  *pppppppcVar13 = (code ******)&PTR_FUN_110bc8098;
  pppppppcStack_190 = pppppppcVar13 + 3;
  *pppppppcStack_190 = (code ******)&PTR_FUN_110c35180;
  pppppppcVar13[5] = (code ******)0x0;
  pppppppcVar13[4] = (code ******)0x0;
  pppppppcVar13[7] = (code ******)0x0;
  pppppppcVar13[6] = (code ******)0x0;
  *(undefined4 *)((long)pppppppcVar13 + 0x34) = 4;
  *(undefined1 *)(pppppppcVar13 + 7) = 1;
  pppppppcStack_188 = pppppppcVar13;
  if (1 < uVar5) {
    pppppppcStack_190 = pppppppcStack_280;
    if (param_2 != (code *******)0x0) {
      pppppppcVar15 = param_2 + 1;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pppppppcVar15,0x10);
        if (bVar7) {
          *pppppppcVar15 = (code ******)((long)*pppppppcVar15 + 1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    do {
      ppppppcVar21 = *pppppppcVar24;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pppppppcVar24,0x10);
      if (bVar7) {
        *pppppppcVar24 = (code ******)((long)ppppppcVar21 + -1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    pppppppcStack_188 = param_2;
    if (ppppppcVar21 == (code ******)0x0) {
      pppppppcStack_188 = param_2;
      (*(code *)(*pppppppcVar13)[2])(pppppppcVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar13);
    }
  }
  ppppcVar14 = pppppppcVar11[0x20][0x20][0x39];
  (*(code *)(*ppppcVar14)[3])();
  ppppcStack_1a0 = (code ****)0x0;
  pppppppcStack_198 = (code *******)0x0;
  pppppppcVar13 = (code *******)ppppcVar14[1];
  if (((pppppppcVar13 == (code *******)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), pppppppcStack_198 = pppppppcVar13,
      pppppppcVar13 == (code *******)0x0)) ||
     (ppppcVar14 = (code ****)*ppppcVar14, ppppcStack_1a0 = ppppcVar14, ppppcVar14 == (code ****)0x0
     )) {
    pppppppcVar13 = pppppppcStack_198;
    ppuVar17 = &PTR_PTR_113301e60;
    FUN_10ae079a0(0,&PTR_PTR_113301e60);
    FUN_10ae07cd4(ppuVar17,&PTR_PTR_113301e60);
    pppppppcVar11 = (code *******)&pppppppcStack_140;
    func_0x000107c2b054(pppppppcVar11,&UNK_10f64ff73);
    if ((pppppppcStack_260 == (code *******)0x0) || (*(char *)(pppppppcStack_260 + 8) != '\x02')) {
      if ((pppppppcStack_260 != (code *******)0x0) && (*(char *)(pppppppcStack_260 + 8) == '\x01'))
      {
        pppppppcVar11 = (code *******)&pppppppcStack_140;
        (*(code *)*pppppppcStack_260)(pppppppcVar11,pppppppcStack_260);
      }
    }
    else {
      FUN_10a05aad0(pppppppcStack_260,&pppppppcStack_140);
      pppppppcVar11 = pppppppcStack_260;
    }
    pppppppcVar24 = pppppppcVar12;
    pppppppcVar12 = unaff_x27;
    if (lStack_130 < 0) {
      pppppppcVar11 = pppppppcStack_140;
      __ZdlPv();
    }
  }
  else {
    __ZNSt3__16chrono12steady_clock3nowEv();
    pppppppcVar24 = &ppppppcStack_1b0;
    FUN_10a342830(pppppppcVar24,pppppppcVar11,pppppppcVar12,&pppppppcStack_190);
    func_0x00010ad0321c();
    pppppppcVar12 = pppppppcStack_190;
    if ((ulong)*(byte *)(pppppppcStack_190 + 4) < 3) {
      puVar16 = (&PTR_DAT_110bc89b0)[*(byte *)(pppppppcStack_190 + 4)];
    }
    else {
      puVar16 = &UNK_10f68581c;
    }
    func_0x000107c2b054(&pppppppcStack_140,puVar16);
    FUN_10ad016b8(apppppppcStack_1c8,pppppppcVar24,&pppppppcStack_140);
    if (lStack_130 < 0) {
      __ZdlPv(pppppppcStack_140);
    }
    FUN_10a12add4(&pppppppcStack_140,ppppppcStack_1b0 + 2);
    pppppppcVar15 = (code *******)&pppppppcStack_140;
    FUN_10a1a5d00(pppppppcVar15,apppppppcStack_1c8,*(undefined4 *)((long)pppppppcVar12 + 0x1c));
    if (((ulong)pppppppcVar15 & 1) == 0) {
      pppppppcVar11 = (code *******)&pppppppcStack_140;
      func_0x000107c2b054(pppppppcVar11,&UNK_10f64ff03);
      if ((pppppppcStack_260 == (code *******)0x0) || (*(char *)(pppppppcStack_260 + 8) != '\x02'))
      {
        if ((pppppppcStack_260 != (code *******)0x0) && (*(char *)(pppppppcStack_260 + 8) == '\x01')
           ) {
          pppppppcVar11 = (code *******)&pppppppcStack_140;
          (*(code *)*pppppppcStack_260)(pppppppcVar11,pppppppcStack_260);
        }
      }
      else {
        FUN_10a05aad0(pppppppcStack_260,&pppppppcStack_140);
        pppppppcVar11 = pppppppcStack_260;
      }
      pppppppcVar13 = pppppppcStack_140;
      if (lStack_130 < 0) goto LAB_10a3738e4;
    }
    else {
      FUN_10a342a34(&pppppppcStack_1e0,pppppppcVar11[0x20][0x20][0x39]);
      lStack_130 = 0;
      pppppppcStack_140 = pppppppcVar11;
      pppppppcStack_138 = pppppppcVar13;
      if (cStack_1c9 < '\0') {
        func_0x000107c3192c(&pppppppcStack_128,pppppppcStack_1e0,uStack_1d8);
      }
      else {
        uStack_120 = uStack_1d8;
        pppppppcStack_128 = pppppppcStack_1e0;
        cStack_111 = cStack_1c9;
      }
      pppppppcStack_108 = pppppppcStack_248;
      uStack_110 = uStack_250;
      if (pppppppcStack_248 != (code *******)0x0) {
        pppppppcVar13 = pppppppcStack_248 + 1;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pppppppcVar13,0x10);
          if (bVar7) {
            *pppppppcVar13 = (code ******)((long)*pppppppcVar13 + 1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      pppppppcStack_f8 = pppppppcStack_258;
      pppppppcStack_100 = pppppppcStack_260;
      if (pppppppcStack_258 != (code *******)0x0) {
        pppppppcVar13 = pppppppcStack_258 + 1;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pppppppcVar13,0x10);
          if (bVar7) {
            *pppppppcVar13 = (code ******)((long)*pppppppcVar13 + 1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      pppppppcVar24 = (code *******)pppppppcVar11[0x20][0x20];
      func_0x000107c2b054(apppppppcStack_210,&UNK_10f64efef);
      FUN_10a342b14();
      FUN_10a342b94(&ppppppcStack_228,pppppppcVar11[0x21],&pppppppcStack_140);
      apppppppcStack_290[0] = (code *******)&pppppppcStack_180;
      pppppppcStack_180 = (code *******)FUN_10a37fc80;
      ppuStack_178 = &PTR_DAT_110bc7688;
      ppppppcStack_170 = ppppppcStack_228;
      uStack_160 = uStack_218;
      uStack_168 = uStack_220;
      uStack_220 = 0;
      uStack_218 = 0;
      (*(code *)(*ppppcVar14)[1])
                (&pppppppcStack_1f8,ppppcVar14,apppppppcStack_1c8,pppppppcVar24 + 0x41,
                 &pppppppcStack_1e0,apppppppcStack_210,0x1137eafd8,1,6);
      (*(code *)*ppuStack_178)(&ppuStack_178);
      pppppppcVar11 = &ppppppcStack_228;
      FUN_10a342e00();
      if (cStack_1f9 < '\0') {
        __ZdlPv();
        pppppppcVar11 = apppppppcStack_210[0];
      }
      uVar18 = (uint)(char)bStack_1e1;
      if (-1 < (int)uVar18) {
        uStack_1f0 = (ulong)bStack_1e1;
      }
      if (uStack_1f0 == 0) {
        ppuVar17 = &PTR_PTR_113301c30;
        FUN_10ae079a0(0,&PTR_PTR_113301c30);
        FUN_10ae07cd4(ppuVar17,&PTR_PTR_113301c30);
        pppppppcVar11 = (code *******)&pppppppcStack_180;
        func_0x000107c2b054(pppppppcVar11,&UNK_10f64ff3d);
        if ((pppppppcStack_260 == (code *******)0x0) || (*(char *)(pppppppcStack_260 + 8) != '\x02')
           ) {
          if ((pppppppcStack_260 != (code *******)0x0) &&
             (*(char *)(pppppppcStack_260 + 8) == '\x01')) {
            pppppppcVar11 = (code *******)&pppppppcStack_180;
            (*(code *)*pppppppcStack_260)(pppppppcVar11,pppppppcStack_260);
          }
        }
        else {
          FUN_10a05aad0(pppppppcStack_260,&pppppppcStack_180);
          pppppppcVar11 = pppppppcStack_260;
        }
        if ((long)ppppppcStack_170 < 0) {
          pppppppcVar11 = pppppppcStack_180;
          __ZdlPv();
        }
        uVar18 = (uint)bStack_1e1;
      }
      if ((uVar18 >> 7 & 1) != 0) {
        pppppppcVar11 = pppppppcStack_1f8;
        __ZdlPv();
      }
      pppppppcVar13 = pppppppcStack_f8;
      if (pppppppcStack_f8 != (code *******)0x0) {
        pppppppcVar15 = pppppppcStack_f8 + 1;
        do {
          ppppppcVar21 = *pppppppcVar15;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pppppppcVar15,0x10);
          if (bVar7) {
            *pppppppcVar15 = (code ******)((long)ppppppcVar21 + -1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (ppppppcVar21 == (code ******)0x0) {
          (*(code *)(*pppppppcStack_f8)[2])(pppppppcStack_f8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppppppcVar11 = pppppppcVar13;
        }
      }
      pppppppcVar13 = pppppppcStack_108;
      if (pppppppcStack_108 != (code *******)0x0) {
        pppppppcVar15 = pppppppcStack_108 + 1;
        do {
          ppppppcVar21 = *pppppppcVar15;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pppppppcVar15,0x10);
          if (bVar7) {
            *pppppppcVar15 = (code ******)((long)ppppppcVar21 + -1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (ppppppcVar21 == (code ******)0x0) {
          (*(code *)(*pppppppcStack_108)[2])(pppppppcStack_108);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppppppcVar11 = pppppppcVar13;
        }
      }
      if (cStack_111 < '\0') {
        pppppppcVar11 = pppppppcStack_128;
        __ZdlPv();
      }
      pppppppcVar13 = pppppppcStack_1e0;
      if (cStack_1c9 < '\0') {
LAB_10a3738e4:
        __ZdlPv();
        pppppppcVar11 = pppppppcVar13;
      }
    }
    if (cStack_1b1 < '\0') {
      pppppppcVar11 = apppppppcStack_1c8[0];
      __ZdlPv();
    }
    pppppppcVar13 = pppppppcStack_198;
    if (pppppppcStack_1a8 != (code *******)0x0) {
      pppppppcVar15 = pppppppcStack_1a8 + 1;
      do {
        ppppppcVar21 = *pppppppcVar15;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pppppppcVar15,0x10);
        if (bVar7) {
          *pppppppcVar15 = (code ******)((long)ppppppcVar21 + -1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (ppppppcVar21 == (code ******)0x0) {
        (*(code *)(*pppppppcStack_1a8)[2])(pppppppcStack_1a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppppppcVar11 = pppppppcStack_1a8;
        pppppppcVar13 = pppppppcStack_198;
      }
    }
  }
  if (pppppppcVar13 != (code *******)0x0) {
    pppppppcVar15 = pppppppcVar13 + 1;
    do {
      ppppppcVar21 = *pppppppcVar15;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pppppppcVar15,0x10);
      if (bVar7) {
        *pppppppcVar15 = (code ******)((long)ppppppcVar21 + -1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (ppppppcVar21 == (code ******)0x0) {
      (*(code *)(*pppppppcVar13)[2])(pppppppcVar13);
      pppppppcVar11 = pppppppcVar13;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  pppppppcVar15 = pppppppcStack_188;
  if (pppppppcStack_188 != (code *******)0x0) {
    pppppppcVar2 = pppppppcStack_188 + 1;
    do {
      ppppppcVar21 = *pppppppcVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pppppppcVar2,0x10);
      if (bVar7) {
        *pppppppcVar2 = (code ******)((long)ppppppcVar21 + -1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (ppppppcVar21 == (code ******)0x0) {
      (*(code *)(*pppppppcStack_188)[2])(pppppppcStack_188);
      pppppppcVar11 = pppppppcVar15;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if ((1 < uVar5) && (param_2 != (code *******)0x0)) {
    pppppppcVar2 = param_2 + 1;
    do {
      ppppppcVar21 = *pppppppcVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pppppppcVar2,0x10);
      if (bVar7) {
        *pppppppcVar2 = (code ******)((long)ppppppcVar21 + -1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (ppppppcVar21 == (code ******)0x0) {
      (*(code *)(*param_2)[2])(param_2);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppppppcVar11 = param_2;
    }
  }
  if (pppppppcStack_258 != (code *******)0x0) {
    pppppppcVar2 = pppppppcStack_258 + 1;
    do {
      ppppppcVar21 = *pppppppcVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pppppppcVar2,0x10);
      if (bVar7) {
        *pppppppcVar2 = (code ******)((long)ppppppcVar21 + -1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (ppppppcVar21 == (code ******)0x0) {
      (*(code *)(*pppppppcStack_258)[2])(pppppppcStack_258);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppppppcVar11 = pppppppcStack_258;
    }
  }
  if (pppppppcStack_248 != (code *******)0x0) {
    pppppppcVar2 = pppppppcStack_248 + 1;
    do {
      ppppppcVar21 = *pppppppcVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pppppppcVar2,0x10);
      if (bVar7) {
        *pppppppcVar2 = (code ******)((long)ppppppcVar21 + -1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (ppppppcVar21 == (code ******)0x0) {
      (*(code *)(*pppppppcStack_248)[2])(pppppppcStack_248);
      pppppppcVar11 = pppppppcStack_248;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if ((3 < (int)auStack_238[0]) &&
     (pppppppcVar11 = pppppppcStack_230, pppppppcStack_230 != (code *******)0x0)) {
    (*(code *)**pppppppcStack_230)();
  }
  *param_1 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    if ((long)ppppppcStack_170 < 0) {
      __ZdlPv(pppppppcStack_180);
    }
    if ((char)bStack_1e1 < '\0') {
      __ZdlPv(pppppppcStack_1f8);
    }
    func_0x00010a342e80(&pppppppcStack_140);
    if (cStack_1c9 < '\0') {
      __ZdlPv(pppppppcStack_1e0);
    }
    if (cStack_1b1 < '\0') {
      __ZdlPv(apppppppcStack_1c8[0]);
    }
    func_0x00010a136de4(&ppppppcStack_1b0);
    func_0x00010a23a4e4(&ppppcStack_1a0);
    FUN_10a37fbe8(&pppppppcStack_190);
    if (1 < uVar5) {
      FUN_10a37fbe8(&pppppppcStack_280);
    }
    func_0x00010a07a8a8(&pppppppcStack_260);
    FUN_10a3528f8(&uStack_250);
    if ((3 < (int)auStack_238[0]) && (pppppppcStack_230 != (code *******)0x0)) {
      (*(code *)**pppppppcStack_230)();
    }
    unaff_x30 = 0x10a373c24;
    register0x00000008 = (BADSPACEBASE *)apppppppcStack_290;
    unaff_x19 = pppppppcVar10;
    unaff_x20 = pppppppcVar11;
    unaff_x21 = pppppppcStack_248;
    unaff_x22 = pppppppcVar15;
    unaff_x23 = ppppcVar14;
    unaff_x24 = pppppppcVar24;
    unaff_x25 = pppppppcVar13;
    unaff_x26 = (ulong)uVar5;
    unaff_x27 = pppppppcVar12;
    unaff_x29 = puVar1;
  }
  pppppppcVar11 = pppppppcVar10 + 0x4b;
  ppppppcVar21 = pppppppcVar10[0x59];
  ppppppcVar19 = (code ******)((long)ppppppcVar21 + -1);
  pppppppcVar10[0x59] = ppppppcVar19;
  if (ppppppcVar19 < (code ******)0x8) {
    ppppppcVar21 = pppppppcVar11[(long)ppppppcVar21 + 2];
    if (pppppppcVar10[0x5a] == ppppppcVar21) {
      return;
    }
  }
  else {
    ppppppcVar21 = (code ******)pppppppcVar10[0x57][-1];
    pppppppcVar10[0x57] = pppppppcVar10[0x57] + -1;
    if (pppppppcVar10[0x5a] == ppppppcVar21) {
      return;
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(code ********)((long)register0x00000008 + -0x58) = unaff_x27;
  *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(code ********)((long)register0x00000008 + -0x48) = unaff_x25;
  *(code ********)((long)register0x00000008 + -0x40) = unaff_x24;
  *(code *****)((long)register0x00000008 + -0x38) = unaff_x23;
  *(code ********)((long)register0x00000008 + -0x30) = unaff_x22;
  *(code ********)((long)register0x00000008 + -0x28) = unaff_x21;
  *(code ********)((long)register0x00000008 + -0x20) = unaff_x20;
  *(code ********)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  ppppppcVar19 = *pppppppcVar11;
  ppppppcVar20 = pppppppcVar10[0x4c];
  lVar22 = (long)ppppppcVar20 - (long)ppppppcVar19;
  ppppppcVar25 = (code ******)(lVar22 >> 4);
  if (ppppppcVar25 < ppppppcVar21) {
    uVar26 = (long)ppppppcVar21 - (long)ppppppcVar25;
    ppppppcVar23 = pppppppcVar10[0x4d];
    if ((ulong)((long)ppppppcVar23 - (long)ppppppcVar20 >> 4) < uVar26) {
      if ((ulong)ppppppcVar21 >> 0x3c == 0) {
        ppppppcVar20 = (code ******)((long)ppppppcVar23 - (long)ppppppcVar19 >> 3);
        if (ppppppcVar20 <= ppppppcVar21) {
          ppppppcVar20 = ppppppcVar21;
        }
        if (0x7fffffffffffffef < (ulong)((long)ppppppcVar23 - (long)ppppppcVar19)) {
          ppppppcVar20 = (code ******)0xfffffffffffffff;
        }
        *(code ********)((long)register0x00000008 + -0x68) = pppppppcVar11;
        if ((ulong)ppppppcVar20 >> 0x3c == 0) {
          lVar9 = (long)ppppppcVar20 << 4;
          __Znwm();
          lVar3 = lVar9 + lVar22;
          _bzero(lVar3,uVar26 * 0x10);
          ppppppcVar25 = (code ******)(lVar3 + (long)ppppppcVar25 * -0x10);
          _memcpy(ppppppcVar25,ppppppcVar19,lVar22);
          *pppppppcVar11 = ppppppcVar25;
          pppppppcVar10[0x4c] = (code ******)(lVar3 + uVar26 * 0x10);
          pppppppcVar10[0x4d] = (code ******)(lVar9 + (long)ppppppcVar20 * 0x10);
          *(code *******)((long)register0x00000008 + -0x78) = ppppppcVar19;
          *(code *******)((long)register0x00000008 + -0x70) = ppppppcVar23;
          *(code *******)((long)register0x00000008 + -0x88) = ppppppcVar19;
          *(code *******)((long)register0x00000008 + -0x80) = ppppppcVar19;
          func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar8)();
    }
    _bzero(ppppppcVar20,uVar26 * 0x10);
    pppppppcVar10[0x4c] = ppppppcVar20 + uVar26 * 2;
  }
  else if (ppppppcVar21 < ppppppcVar25) {
    while (ppppppcVar20 != ppppppcVar19 + (long)ppppppcVar21 * 2) {
      ppppppcVar20 = ppppppcVar20 + -2;
      func_0x00010988c204(ppppppcVar20);
    }
    pppppppcVar10[0x4c] = ppppppcVar19 + (long)ppppppcVar21 * 2;
  }
code_r0x00010988c138:
  pppppppcVar10[0x5a] = ppppppcVar21;
  return;
}



/* Entry: 10a373c2c; end: 10a373c53;  */

void FUN_10a373c2c(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  long lVar14;
  undefined **unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 ****ppppuVar15;
  undefined8 ***pppuStack_20;
  code *pcStack_18;
  
  if (param_1 - 3U < 2) {
    return;
  }
  ppuVar6 = (undefined **)0x4;
  ppuVar12 = (undefined **)0x1;
  FUN_10a052ee0();
  puVar5 = &stack0xffffffffffffffd0;
  pcStack_18 = FUN_10a373c54;
  ppppuVar15 = &pppuStack_20;
  ppuVar7 = ppuVar6;
  pppuStack_20 = (undefined8 ***)&stack0xfffffffffffffff0;
  func_0x000109898688();
  if (ppuVar7 == (undefined **)0x0) {
    ppuVar8 = (undefined **)&UNK_10f68f52e;
    pcVar4 = FUN_10a373c8c;
    func_0x00010988bd28();
  }
  else {
    puVar5 = &stack0xfffffffffffffff0;
    ppuVar8 = ppuVar6;
    ppuVar12 = ppuVar7;
    ppuVar6 = unaff_x19;
    ppppuVar15 = (undefined8 ****)pppuStack_20;
    pcVar4 = pcStack_18;
  }
  *(undefined8 *****)(puVar5 + -0x10) = ppppuVar15;
  *(code **)(puVar5 + -8) = pcVar4;
  FUN_10a053854();
  if (ppuVar8 != (undefined **)0x0) {
    ppuVar12 = &PTR_DAT_110b178e0;
    param_1 = 0x10c4eff0;
    param_4 = 0x10;
    ___dynamic_cast();
    if (ppuVar8 != (undefined **)0x0) {
      return;
    }
  }
  puVar9 = (undefined8 *)&UNK_10f685496;
  func_0x00010988bd28();
  *(undefined8 *)(puVar5 + -0x40) = unaff_x22;
  *(undefined8 *)(puVar5 + -0x38) = unaff_x21;
  *(undefined8 *)(puVar5 + -0x30) = unaff_x20;
  *(undefined ***)(puVar5 + -0x28) = ppuVar6;
  *(undefined1 **)(puVar5 + -0x20) = puVar5 + -0x10;
  *(code **)(puVar5 + -0x18) = FUN_10a373ccc;
  if (param_1 == 7) {
    ppuVar7 = ppuVar12;
    (**(code **)(*ppuVar12 + 0x98))(ppuVar12,param_4);
    *(undefined ***)(puVar5 + -0x48) = ppuVar7;
    ppuVar7 = ppuVar12;
    (**(code **)(*ppuVar12 + 0x228))(ppuVar12,puVar5 + -0x48);
    if ((int)ppuVar7 != 0) {
      ppuVar6 = ppuVar12;
      (**(code **)(*ppuVar12 + 0x58))();
      puVar10 = ppuVar6[0x48];
      if ((puVar10 == (undefined *)0x0) ||
         (___dynamic_cast(puVar10,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0),
         puVar10 == (undefined *)0x0)) goto LAB_10a373e50;
      uVar13 = *(undefined8 *)(puVar5 + -0x48);
      *(undefined8 *)(puVar5 + -0x48) = 0;
      *(undefined ***)(puVar5 + -0x60) = ppuVar12;
      *(undefined4 *)(puVar5 + -0x58) = 7;
      *(undefined8 *)(puVar5 + -0x50) = uVar13;
      FUN_10a688ac0(puVar5 + -0x80,puVar5 + -0x60,*(undefined8 *)(puVar10 + 8));
      if ((3 < *(int *)(puVar5 + -0x58)) && (*(undefined8 **)(puVar5 + -0x50) != (undefined8 *)0x0))
      {
        (**(code **)**(undefined8 **)(puVar5 + -0x50))();
      }
    }
    if (*(undefined8 **)(puVar5 + -0x48) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(puVar5 + -0x48))();
    }
    if (((ulong)ppuVar7 & 1) != 0) {
      puVar11 = (undefined8 *)0x60;
      __Znwm();
      puVar11[1] = 0;
      puVar11[2] = 0;
      *puVar11 = &PTR_FUN_110bc72e0;
      uVar13 = *(undefined8 *)(puVar5 + -0x80);
      puVar11[4] = *(undefined8 *)(puVar5 + -0x78);
      puVar11[3] = uVar13;
      if (*(long *)(puVar5 + -0x78) != 0) {
        plVar1 = (long *)(*(long *)(puVar5 + -0x78) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lVar14 = *(long *)(puVar5 + -0x68);
      uVar13 = *(undefined8 *)(puVar5 + -0x70);
      puVar11[6] = *(undefined8 *)(puVar5 + -0x68);
      puVar11[5] = uVar13;
      if (lVar14 != 0) {
        plVar1 = (long *)(lVar14 + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      *(undefined1 *)(puVar11 + 0xb) = 2;
      *puVar9 = puVar11 + 3;
      puVar9[1] = puVar11;
      FUN_10a688c1c(puVar5 + -0x80);
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a373e50:
  func_0x00010988bd28(&UNK_10f685540);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a373e60);
  (*pcVar4)();
}



/* Entry: 10a373c54; end: 10a373c8b;  */

void FUN_10a373c54(undefined **param_1,undefined **param_2,int param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined **unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  ppuVar6 = param_1;
  func_0x000109898688();
  ppuVar7 = param_1;
  if (ppuVar6 == (undefined **)0x0) {
    ppuVar7 = (undefined **)&UNK_10f68f52e;
    unaff_x30 = FUN_10a373c8c;
    func_0x00010988bd28();
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    ppuVar6 = param_2;
    unaff_x19 = param_1;
    unaff_x29 = puVar1;
  }
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  FUN_10a053854();
  if (ppuVar7 != (undefined **)0x0) {
    ppuVar6 = &PTR_DAT_110b178e0;
    param_3 = 0x10c4eff0;
    param_4 = 0x10;
    ___dynamic_cast();
    if (ppuVar7 != (undefined **)0x0) {
      return;
    }
  }
  puVar8 = (undefined8 *)&UNK_10f685496;
  func_0x00010988bd28();
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x20;
  *(undefined ***)((long)register0x00000008 + -0x28) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x20) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x18) = FUN_10a373ccc;
  if (param_3 == 7) {
    ppuVar7 = ppuVar6;
    (**(code **)(*ppuVar6 + 0x98))(ppuVar6,param_4);
    *(undefined ***)((long)register0x00000008 + -0x48) = ppuVar7;
    ppuVar7 = ppuVar6;
    (**(code **)(*ppuVar6 + 0x228))(ppuVar6,(undefined1 *)((long)register0x00000008 + -0x48));
    if ((int)ppuVar7 != 0) {
      ppuVar9 = ppuVar6;
      (**(code **)(*ppuVar6 + 0x58))();
      puVar10 = ppuVar9[0x48];
      if ((puVar10 == (undefined *)0x0) ||
         (___dynamic_cast(puVar10,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0),
         puVar10 == (undefined *)0x0)) goto LAB_10a373e50;
      uVar12 = *(undefined8 *)((long)register0x00000008 + -0x48);
      *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
      *(undefined ***)((long)register0x00000008 + -0x60) = ppuVar6;
      *(undefined4 *)((long)register0x00000008 + -0x58) = 7;
      *(undefined8 *)((long)register0x00000008 + -0x50) = uVar12;
      FUN_10a688ac0((undefined1 *)((long)register0x00000008 + -0x80),
                    (undefined1 *)((long)register0x00000008 + -0x60),*(undefined8 *)(puVar10 + 8));
      if ((3 < *(int *)((long)register0x00000008 + -0x58)) &&
         (*(undefined8 **)((long)register0x00000008 + -0x50) != (undefined8 *)0x0)) {
        (**(code **)**(undefined8 **)((long)register0x00000008 + -0x50))();
      }
    }
    if (*(undefined8 **)((long)register0x00000008 + -0x48) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)((long)register0x00000008 + -0x48))();
    }
    if (((ulong)ppuVar7 & 1) != 0) {
      puVar11 = (undefined8 *)0x60;
      __Znwm();
      puVar11[1] = 0;
      puVar11[2] = 0;
      *puVar11 = &PTR_FUN_110bc72e0;
      uVar12 = *(undefined8 *)((long)register0x00000008 + -0x80);
      puVar11[4] = *(undefined8 *)((long)register0x00000008 + -0x78);
      puVar11[3] = uVar12;
      if (*(long *)((long)register0x00000008 + -0x78) != 0) {
        plVar2 = (long *)(*(long *)((long)register0x00000008 + -0x78) + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = *plVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lVar13 = *(long *)((long)register0x00000008 + -0x68);
      uVar12 = *(undefined8 *)((long)register0x00000008 + -0x70);
      puVar11[6] = *(undefined8 *)((long)register0x00000008 + -0x68);
      puVar11[5] = uVar12;
      if (lVar13 != 0) {
        plVar2 = (long *)(lVar13 + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = *plVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *(undefined1 *)(puVar11 + 0xb) = 2;
      *puVar8 = puVar11 + 3;
      puVar8[1] = puVar11;
      FUN_10a688c1c((undefined1 *)((long)register0x00000008 + -0x80));
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a373e50:
  func_0x00010988bd28(&UNK_10f685540);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a373e60);
  (*pcVar5)();
}



/* Entry: 10a373c8c; end: 10a373ccb;  */

void FUN_10a373c8c(long param_1,undefined **param_2,int param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined **ppuStack_60;
  int iStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  
  FUN_10a053854();
  if (param_1 != 0) {
    param_2 = &PTR_DAT_110b178e0;
    param_3 = 0x10c4eff0;
    param_4 = 0x10;
    ___dynamic_cast();
    if (param_1 != 0) {
      return;
    }
  }
  puVar5 = (undefined8 *)&UNK_10f685496;
  func_0x00010988bd28();
  if (param_3 == 7) {
    ppuVar6 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,param_4);
    ppuVar7 = param_2;
    ppuStack_48 = ppuVar6;
    (**(code **)(*param_2 + 0x228))(param_2,&ppuStack_48);
    if ((int)ppuVar7 != 0) {
      ppuVar6 = param_2;
      (**(code **)(*param_2 + 0x58))();
      puVar8 = ppuVar6[0x48];
      if ((puVar8 == (undefined *)0x0) ||
         (___dynamic_cast(puVar8,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), ppuVar6 = ppuStack_48,
         puVar8 == (undefined *)0x0)) goto LAB_10a373e50;
      ppuStack_48 = (undefined **)0x0;
      iStack_58 = 7;
      ppuStack_50 = ppuVar6;
      ppuStack_60 = param_2;
      FUN_10a688ac0(&uStack_80,&ppuStack_60,*(undefined8 *)(puVar8 + 8));
      if ((3 < iStack_58) && (ppuStack_50 != (undefined **)0x0)) {
        (**(code **)*ppuStack_50)();
      }
    }
    if (ppuStack_48 != (undefined **)0x0) {
      (**(code **)*ppuStack_48)();
    }
    if (((ulong)ppuVar7 & 1) != 0) {
      puVar9 = (undefined8 *)0x60;
      __Znwm();
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = &PTR_FUN_110bc72e0;
      puVar9[4] = lStack_78;
      puVar9[3] = uStack_80;
      if (lStack_78 != 0) {
        plVar1 = (long *)(lStack_78 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar9[6] = lStack_68;
      puVar9[5] = uStack_70;
      if (lStack_68 != 0) {
        plVar1 = (long *)(lStack_68 + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      *(undefined1 *)(puVar9 + 0xb) = 2;
      *puVar5 = puVar9 + 3;
      puVar5[1] = puVar9;
      FUN_10a688c1c(&uStack_80);
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a373e50:
  func_0x00010988bd28(&UNK_10f685540);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a373e60);
  (*pcVar4)();
}



/* Entry: 10a373ccc; end: 10a373e8f;  */

void FUN_10a373ccc(undefined8 *param_1,long *param_2,int param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long *plStack_50;
  int iStack_48;
  long *plStack_40;
  long *plStack_38;
  
  if (param_3 == 7) {
    plVar4 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,param_4);
    plVar5 = param_2;
    plStack_38 = plVar4;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_38);
    if ((int)plVar5 != 0) {
      plVar4 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar6 = plVar4[0x48];
      if ((lVar6 == 0) ||
         (___dynamic_cast(lVar6,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), plVar4 = plStack_38,
         lVar6 == 0)) goto LAB_10a373e50;
      plStack_38 = (long *)0x0;
      iStack_48 = 7;
      plStack_40 = plVar4;
      plStack_50 = param_2;
      FUN_10a688ac0(&uStack_70,&plStack_50,*(undefined8 *)(lVar6 + 8));
      if ((3 < iStack_48) && (plStack_40 != (long *)0x0)) {
        (**(code **)*plStack_40)();
      }
    }
    if (plStack_38 != (long *)0x0) {
      (**(code **)*plStack_38)();
    }
    if (((ulong)plVar5 & 1) != 0) {
      puVar7 = (undefined8 *)0x60;
      __Znwm();
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = &PTR_FUN_110bc72e0;
      puVar7[4] = lStack_68;
      puVar7[3] = uStack_70;
      if (lStack_68 != 0) {
        plVar4 = (long *)(lStack_68 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = *plVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      puVar7[6] = lStack_58;
      puVar7[5] = uStack_60;
      if (lStack_58 != 0) {
        plVar4 = (long *)(lStack_58 + 0x10);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = *plVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      *(undefined1 *)(puVar7 + 0xb) = 2;
      *param_1 = puVar7 + 3;
      param_1[1] = puVar7;
      FUN_10a688c1c(&uStack_70);
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a373e50:
  func_0x00010988bd28(&UNK_10f685540);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a373e60);
  (*pcVar3)();
}



/* Entry: 10a373e90; end: 10a373e9f;  */

void FUN_10a373e90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc72e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a373ea0; end: 10a373ebf;  */

void FUN_10a373ea0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc72e0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a373ec0; end: 10a373ee7;  */

undefined1  [16] FUN_10a373ec0(long param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_38;
  
  bVar2 = *(byte *)(param_1 + 0x58);
  if (3 < (ulong)bVar2) {
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10a373ee4);
    (*UNRECOVERED_JUMPTABLE)();
  }
  auVar10._8_8_ = (code **)(&PTR_FUN_110b9a040)[bVar2];
  puVar5 = (undefined8 *)(param_1 + 0x18);
  switch(bVar2) {
  case 0:
    auVar10._0_8_ = puVar5;
    return auVar10;
  case 1:
    puVar5 = (undefined8 *)(param_1 + 0x20);
    UNRECOVERED_JUMPTABLE = *(code **)*puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010a00496c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    auVar11._8_8_ = UNRECOVERED_JUMPTABLE;
    auVar11._0_8_ = puVar5;
    return auVar11;
  case 3:
    auVar12._8_8_ = auVar10._8_8_;
    auVar12._0_8_ = puVar5;
    return auVar12;
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  if (((*ppuVar6 == (undefined *)0x0) &&
      (plVar7 = *(long **)(param_1 + 0x30), plVar7 != (long *)0x0)) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 != (long *)0x0)) {
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x870);
      uStack_60 = *(undefined8 *)(param_1 + 0x20);
      uStack_68 = *puVar5;
      *puVar5 = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      pcStack_78 = FUN_10a69fabc;
      ppuStack_70 = &PTR_DAT_110c0ce80;
      auVar10._8_8_ = &pcStack_78;
      FUN_10a4634ec(uVar8);
      (*(code *)*ppuStack_70)(&ppuStack_70);
    }
    plVar1 = plVar7 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x00010a004dac(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    auVar13._8_8_ = auVar10._8_8_;
    auVar13._0_8_ = puVar5;
    return auVar13;
  }
  ___stack_chk_fail();
  if ((int)auVar10._8_8_ == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  auVar14._8_8_ = 0x18;
  auVar14._0_8_ = &UNK_10f66c09c;
  return auVar14;
}



/* Entry: 10a373ee8; end: 10a373fe3;  */

void FUN_10a373ee8(long *param_1,long param_2,int *param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long lStack_30;
  long *plStack_28;
  
  if (*param_3 == 1) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  func_0x000109898688(param_2,param_3);
  if (param_2 == 0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else {
    func_0x00010989879c(&lStack_30);
    plVar4 = param_1;
    if ((lStack_30 != 0) &&
       (___dynamic_cast(lStack_30,&PTR_DAT_110b178e0,&PTR_DAT_110c35158,0), lStack_30 != 0)) {
      *param_1 = lStack_30;
      param_1[1] = (long)plStack_28;
      plVar4 = &lStack_30;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    if (plStack_28 != (long *)0x0) {
      plVar4 = plStack_28 + 1;
      do {
        lVar5 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
      }
    }
    if (*param_1 != 0) {
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a373fd0);
  (*pcVar3)();
}



/* Entry: 10a373fe4; end: 10a3747ff;  */

/* WARNING: Possible PIC construction at 0x00010a3747f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a3747f8) */
/* WARNING: Removing unreachable block (ram,0x00010a37480c) */
/* WARNING: Removing unreachable block (ram,0x00010a374a24) */
/* WARNING: Removing unreachable block (ram,0x00010a37486c) */
/* WARNING: Removing unreachable block (ram,0x00010a374884) */
/* WARNING: Removing unreachable block (ram,0x00010a3748d8) */
/* WARNING: Removing unreachable block (ram,0x00010a3748dc) */
/* WARNING: Removing unreachable block (ram,0x00010a3748e4) */
/* WARNING: Removing unreachable block (ram,0x00010a3748ec) */
/* WARNING: Removing unreachable block (ram,0x00010a3748f0) */
/* WARNING: Removing unreachable block (ram,0x00010a374908) */
/* WARNING: Removing unreachable block (ram,0x00010a374980) */
/* WARNING: Removing unreachable block (ram,0x00010a37498c) */
/* WARNING: Removing unreachable block (ram,0x00010a374994) */
/* WARNING: Removing unreachable block (ram,0x00010a3749a0) */
/* WARNING: Removing unreachable block (ram,0x00010a3749ac) */
/* WARNING: Removing unreachable block (ram,0x00010a3749b4) */
/* WARNING: Removing unreachable block (ram,0x00010a3749c0) */
/* WARNING: Removing unreachable block (ram,0x00010a3749c8) */
/* WARNING: Removing unreachable block (ram,0x00010a3749cc) */
/* WARNING: Removing unreachable block (ram,0x00010a3749d4) */
/* WARNING: Removing unreachable block (ram,0x00010a3749dc) */
/* WARNING: Removing unreachable block (ram,0x00010a3749e8) */
/* WARNING: Removing unreachable block (ram,0x00010a3749f0) */
/* WARNING: Removing unreachable block (ram,0x00010a3749f8) */
/* WARNING: Removing unreachable block (ram,0x00010a3749fc) */
/* WARNING: Removing unreachable block (ram,0x00010a374a08) */
/* WARNING: Removing unreachable block (ram,0x00010a374808) */
/* WARNING: Removing unreachable block (ram,0x00010a3746cc) */
/* WARNING: Removing unreachable block (ram,0x00010a374690) */
/* WARNING: Removing unreachable block (ram,0x00010a3744fc) */
/* WARNING: Removing unreachable block (ram,0x00010a3747ac) */

void FUN_10a373fe4(undefined4 *param_1,code ******param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  code ******ppppppcVar7;
  code ******ppppppcVar8;
  code ******ppppppcVar9;
  undefined **ppuVar10;
  code ******ppppppcVar11;
  code *****pppppcVar12;
  code *****pppppcVar13;
  code *****pppppcVar14;
  code ******unaff_x19;
  code ******unaff_x20;
  code ******unaff_x21;
  long lVar15;
  code ******unaff_x22;
  code ******ppppppcVar16;
  code ******unaff_x23;
  code ****ppppcVar17;
  code *****pppppcVar18;
  code ******unaff_x24;
  code *****pppppcVar19;
  undefined8 unaff_x25;
  ulong uVar20;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  code ****appppcStack_1c0 [2];
  code *****pppppcStack_1b0;
  code *****pppppcStack_1a8;
  undefined8 uStack_1a0;
  code *****pppppcStack_198;
  code ****ppppcStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  code *****apppppcStack_178 [2];
  char cStack_161;
  code *****pppppcStack_160;
  ulong uStack_158;
  byte bStack_149;
  code *****pppppcStack_148;
  code *****pppppcStack_140;
  long lStack_138;
  code *****pppppcStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  char cStack_119;
  undefined8 uStack_118;
  code *****pppppcStack_110;
  code *****pppppcStack_108;
  code *****pppppcStack_100;
  code *****pppppcStack_f8;
  undefined8 uStack_f0;
  char cStack_e1;
  code *****pppppcStack_e0;
  code *****pppppcStack_d8;
  code ****ppppcStack_d0;
  ulong uStack_c8;
  byte bStack_b9;
  code *****pppppcStack_b8;
  code *****pppppcStack_b0;
  code *****pppppcStack_a8;
  code *****pppppcStack_a0;
  code ****ppppcStack_98;
  undefined **ppuStack_90;
  code ****ppppcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_58;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppcVar7 = param_2;
  (*(code *)(*param_2)[0xb])();
  if (ppppppcVar7[0x59] < (code *****)0x8) {
    ppppppcVar7[(long)((long)ppppppcVar7[0x59] + 0x4e)] = ppppppcVar7[0x5a];
    ppppppcVar7[0x59] = (code *****)((long)ppppppcVar7[0x59] + 1);
  }
  else {
    func_0x00010988bfcc(ppppppcVar7 + 0x4b);
  }
  ppppppcVar8 = param_2;
  FUN_10a370100(param_2,param_3);
  FUN_10a374800(param_5);
  ppppppcVar9 = param_2;
  FUN_10a373c54(param_2,param_4);
  FUN_10a373ccc(&uStack_1a0,param_2,*(undefined4 *)(param_4 + 0x10),*(undefined8 *)(param_4 + 0x18))
  ;
  FUN_10a059354(&pppppcStack_1b0,param_2,param_4 + 0x20);
  ppuVar10 = (undefined **)ppppppcVar9[0x4d];
  ppppppcVar16 = (code ******)ppppppcVar9[0x4e];
  if (ppppppcVar16 != (code ******)0x0) {
    ppppppcVar11 = ppppppcVar16 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppppcVar11,0x10);
      if (bVar4) {
        *ppppppcVar11 = (code *****)((long)*ppppppcVar11 + 1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  pppppcStack_a8 = (code *****)ppuVar10;
  pppppcStack_a0 = (code *****)ppppppcVar16;
  if (((code ******)ppuVar10 == (code ******)0x0) ||
     (___dynamic_cast(ppuVar10,&PTR_DAT_110bb3788,&PTR_DAT_110c6a2a8,0),
     (code ******)ppuVar10 == (code ******)0x0)) {
    pppppcStack_b8 = (code *****)0x0;
    pppppcStack_b0 = (code *****)0x0;
    FUN_10a00946c(&UNK_10f64ffc0);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a3746bc);
    (*pcVar5)();
  }
  if (ppppppcVar16 != (code ******)0x0) {
    ppppppcVar11 = ppppppcVar16 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppppcVar11,0x10);
      if (bVar4) {
        *ppppppcVar11 = (code *****)((long)*ppppppcVar11 + 1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  pppppcStack_b8 = (code *****)ppuVar10;
  pppppcStack_b0 = (code *****)ppppppcVar16;
  FUN_10ac58714(&ppppcStack_d0);
  if (-1 < (char)bStack_b9) {
    uStack_c8 = (ulong)bStack_b9;
  }
  if (uStack_c8 == 0) {
    if ((code ******)pppppcStack_1b0 != (code ******)0x0) {
      ppuVar10 = (undefined **)&pppppcStack_148;
      func_0x000107c2b054(ppuVar10,&UNK_10f650010);
      if (*(char *)(pppppcStack_1b0 + 8) == '\x01') {
        ppuVar10 = (undefined **)&pppppcStack_148;
        (*(code *)*pppppcStack_1b0)(ppuVar10,pppppcStack_1b0);
      }
      else if (*(char *)(pppppcStack_1b0 + 8) == '\x02') {
        FUN_10a05aad0(pppppcStack_1b0,&pppppcStack_148);
        ppuVar10 = (undefined **)pppppcStack_1b0;
      }
LAB_10a3742c0:
      if (lStack_138 < 0) {
        ppuVar10 = (undefined **)pppppcStack_148;
        __ZdlPv();
      }
    }
  }
  else {
    ppuVar10 = (undefined **)&ppppcStack_d0;
    FUN_10ad015f0(ppuVar10,0x8000);
    if (((ulong)ppuVar10 & 1) == 0) {
      if ((code ******)pppppcStack_1b0 != (code ******)0x0) {
        ppuVar10 = (undefined **)&pppppcStack_148;
        func_0x000107c2b054(ppuVar10,&UNK_10f65004a);
        if (*(char *)(pppppcStack_1b0 + 8) == '\x01') {
          ppuVar10 = (undefined **)&pppppcStack_148;
          (*(code *)*pppppcStack_1b0)(ppuVar10,pppppcStack_1b0);
        }
        else if (*(char *)(pppppcStack_1b0 + 8) == '\x02') {
          FUN_10a05aad0(pppppcStack_1b0,&pppppcStack_148);
          ppuVar10 = (undefined **)pppppcStack_1b0;
        }
        goto LAB_10a3742c0;
      }
    }
    else {
      ppppppcVar16 = (code ******)ppppppcVar8[0x20][0x20][0x39];
      (*(code *)(*ppppppcVar16)[3])();
      pppppcStack_e0 = (code *****)0x0;
      pppppcStack_d8 = (code *****)0x0;
      ppppppcVar11 = (code ******)ppppppcVar16[1];
      if (((ppppppcVar11 == (code ******)0x0) ||
          (__ZNSt3__119__shared_weak_count4lockEv(), pppppcStack_d8 = (code *****)ppppppcVar11,
          ppppppcVar11 == (code ******)0x0)) ||
         (ppppppcVar16 = (code ******)*ppppppcVar16, pppppcStack_e0 = (code *****)ppppppcVar16,
         ppppppcVar16 == (code ******)0x0)) {
        param_2 = (code ******)pppppcStack_d8;
        ppuVar10 = &PTR_PTR_113301eb0;
        FUN_10ae079a0(0);
        FUN_10ae07cd4(ppuVar10,&PTR_PTR_113301eb0);
        if ((code ******)pppppcStack_1b0 != (code ******)0x0) {
          ppuVar10 = (undefined **)&pppppcStack_148;
          func_0x000107c2b054(ppuVar10,&UNK_10f6500bb);
          if (*(char *)(pppppcStack_1b0 + 8) == '\x01') {
            ppuVar10 = (undefined **)&pppppcStack_148;
            (*(code *)*pppppcStack_1b0)(ppuVar10,pppppcStack_1b0);
          }
          else if (*(char *)(pppppcStack_1b0 + 8) == '\x02') {
            FUN_10a05aad0(pppppcStack_1b0,&pppppcStack_148);
            ppuVar10 = (undefined **)pppppcStack_1b0;
          }
          if (lStack_138 < 0) {
            ppuVar10 = (undefined **)pppppcStack_148;
            __ZdlPv();
          }
        }
      }
      else {
        __ZNSt3__16chrono12steady_clock3nowEv();
        FUN_10a342a34(&pppppcStack_f8,ppppppcVar8[0x20][0x20][0x39]);
        ppppppcVar9 = &pppppcStack_148;
        lStack_138 = 0;
        pppppcStack_148 = (code *****)ppppppcVar8;
        pppppcStack_140 = (code *****)ppppppcVar11;
        if (cStack_e1 < '\0') {
          func_0x000107c3192c(&pppppcStack_130,pppppcStack_f8,uStack_f0);
        }
        else {
          uStack_128 = uStack_f0;
          pppppcStack_130 = pppppcStack_f8;
          cStack_119 = cStack_e1;
        }
        pppppcStack_110 = pppppcStack_198;
        uStack_118 = uStack_1a0;
        if ((code ******)pppppcStack_198 != (code ******)0x0) {
          ppppppcVar11 = (code ******)(pppppcStack_198 + 1);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppppppcVar11,0x10);
            if (bVar4) {
              *ppppppcVar11 = (code *****)((long)*ppppppcVar11 + 1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        pppppcStack_100 = pppppcStack_1a8;
        pppppcStack_108 = pppppcStack_1b0;
        if ((code ******)pppppcStack_1a8 != (code ******)0x0) {
          ppppppcVar11 = (code ******)(pppppcStack_1a8 + 1);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppppppcVar11,0x10);
            if (bVar4) {
              *ppppppcVar11 = (code *****)((long)*ppppppcVar11 + 1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        ppppcVar17 = ppppppcVar8[0x20][0x20];
        func_0x000107c2b054(apppppcStack_178,&UNK_10f64efef);
        FUN_10a342b14();
        FUN_10a343068(&ppppcStack_190,ppppppcVar8[0x21],&pppppcStack_148);
        appppcStack_1c0[0] = (code ****)&ppppcStack_98;
        ppppcStack_98 = (code ****)FUN_10a380510;
        ppuStack_90 = &PTR_FUN_110bc76a0;
        ppppcStack_88 = ppppcStack_190;
        uStack_78 = uStack_180;
        uStack_80 = uStack_188;
        uStack_188 = 0;
        uStack_180 = 0;
        (*(code *)(*ppppppcVar16)[1])
                  (&pppppcStack_160,ppppppcVar16,&ppppcStack_d0,ppppcVar17 + 0x41,&pppppcStack_f8,
                   apppppcStack_178,0x1137eafd8,1,6);
        (*(code *)*ppuStack_90)(&ppuStack_90);
        ppuVar10 = (undefined **)&ppppcStack_190;
        FUN_10a3432d4();
        if (cStack_161 < '\0') {
          __ZdlPv();
          ppuVar10 = (undefined **)apppppcStack_178[0];
        }
        if (-1 < (char)bStack_149) {
          uStack_158 = (ulong)bStack_149;
        }
        if (uStack_158 == 0) {
          ppuVar10 = &PTR_PTR_113301cb0;
          FUN_10ae079a0(0);
          FUN_10ae07cd4(ppuVar10,&PTR_PTR_113301cb0);
          if ((code ******)pppppcStack_1b0 != (code ******)0x0) {
            ppuVar10 = (undefined **)&ppppcStack_98;
            func_0x000107c2b054(ppuVar10,&UNK_10f650085);
            if (*(char *)(pppppcStack_1b0 + 8) == '\x01') {
              (*(code *)*pppppcStack_1b0)();
            }
            else if (*(char *)(pppppcStack_1b0 + 8) == '\x02') {
              FUN_10a05aad0(pppppcStack_1b0,&ppppcStack_98);
              ppuVar10 = (undefined **)pppppcStack_1b0;
            }
          }
        }
        if ((char)bStack_149 < '\0') {
          ppuVar10 = (undefined **)pppppcStack_160;
          __ZdlPv();
        }
        ppppppcVar8 = (code ******)pppppcStack_100;
        if ((code ******)pppppcStack_100 != (code ******)0x0) {
          ppppppcVar11 = (code ******)(pppppcStack_100 + 1);
          do {
            pppppcVar14 = *ppppppcVar11;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppppppcVar11,0x10);
            if (bVar4) {
              *ppppppcVar11 = (code *****)((long)pppppcVar14 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (pppppcVar14 == (code *****)0x0) {
            (*(code *)(*pppppcStack_100)[2])(pppppcStack_100);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppuVar10 = (undefined **)ppppppcVar8;
          }
        }
        ppppppcVar8 = (code ******)pppppcStack_110;
        if ((code ******)pppppcStack_110 != (code ******)0x0) {
          ppppppcVar11 = (code ******)(pppppcStack_110 + 1);
          do {
            pppppcVar14 = *ppppppcVar11;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppppppcVar11,0x10);
            if (bVar4) {
              *ppppppcVar11 = (code *****)((long)pppppcVar14 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (pppppcVar14 == (code *****)0x0) {
            (*(code *)(*pppppcStack_110)[2])(pppppcStack_110);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppuVar10 = (undefined **)ppppppcVar8;
          }
        }
        if (cStack_119 < '\0') {
          ppuVar10 = (undefined **)pppppcStack_130;
          __ZdlPv();
        }
        param_2 = (code ******)pppppcStack_d8;
        if (cStack_e1 < '\0') {
          ppuVar10 = (undefined **)pppppcStack_f8;
          __ZdlPv();
          param_2 = (code ******)pppppcStack_d8;
        }
      }
      if (param_2 != (code ******)0x0) {
        ppppppcVar8 = param_2 + 1;
        do {
          pppppcVar14 = *ppppppcVar8;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppppppcVar8,0x10);
          if (bVar4) {
            *ppppppcVar8 = (code *****)((long)pppppcVar14 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (pppppcVar14 == (code *****)0x0) {
          (*(code *)(*param_2)[2])(param_2);
          ppuVar10 = (undefined **)param_2;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
    }
  }
  ppppppcVar8 = (code ******)pppppcStack_b0;
  if ((code ******)pppppcStack_b0 != (code ******)0x0) {
    ppppppcVar11 = (code ******)(pppppcStack_b0 + 1);
    do {
      pppppcVar14 = *ppppppcVar11;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppppcVar11,0x10);
      if (bVar4) {
        *ppppppcVar11 = (code *****)((long)pppppcVar14 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (pppppcVar14 == (code *****)0x0) {
      (*(code *)(*pppppcStack_b0)[2])(pppppcStack_b0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar10 = (undefined **)ppppppcVar8;
    }
  }
  ppppppcVar8 = (code ******)pppppcStack_a0;
  if ((code ******)pppppcStack_a0 != (code ******)0x0) {
    ppppppcVar11 = (code ******)(pppppcStack_a0 + 1);
    do {
      pppppcVar14 = *ppppppcVar11;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppppcVar11,0x10);
      if (bVar4) {
        *ppppppcVar11 = (code *****)((long)pppppcVar14 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (pppppcVar14 == (code *****)0x0) {
      (*(code *)(*pppppcStack_a0)[2])(pppppcStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar10 = (undefined **)ppppppcVar8;
    }
  }
  if ((code ******)pppppcStack_1a8 != (code ******)0x0) {
    ppppppcVar8 = (code ******)(pppppcStack_1a8 + 1);
    do {
      pppppcVar14 = *ppppppcVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppppcVar8,0x10);
      if (bVar4) {
        *ppppppcVar8 = (code *****)((long)pppppcVar14 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (pppppcVar14 == (code *****)0x0) {
      (*(code *)(*pppppcStack_1a8)[2])(pppppcStack_1a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar10 = (undefined **)pppppcStack_1a8;
    }
  }
  if ((code ******)pppppcStack_198 != (code ******)0x0) {
    ppppppcVar8 = (code ******)(pppppcStack_198 + 1);
    do {
      pppppcVar14 = *ppppppcVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppppcVar8,0x10);
      if (bVar4) {
        *ppppppcVar8 = (code *****)((long)pppppcVar14 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (pppppcVar14 == (code *****)0x0) {
      (*(code *)(*pppppcStack_198)[2])(pppppcStack_198);
      ppuVar10 = (undefined **)pppppcStack_198;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  *param_1 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    if ((char)bStack_149 < '\0') {
      __ZdlPv(pppppcStack_160);
    }
    func_0x00010a343354(&pppppcStack_148);
    if (cStack_e1 < '\0') {
      __ZdlPv(pppppcStack_f8);
    }
    func_0x00010a23a4e4(&pppppcStack_e0);
    FUN_10a37b878(&pppppcStack_b8);
    FUN_10a05b1b0(&pppppcStack_a8);
    func_0x00010a07a8a8(&pppppcStack_1b0);
    FUN_10a3528f8(&uStack_1a0);
    unaff_x30 = 0x10a3747f8;
    register0x00000008 = (BADSPACEBASE *)appppcStack_1c0;
    unaff_x19 = ppppppcVar7;
    unaff_x20 = (code ******)ppuVar10;
    unaff_x21 = (code ******)pppppcStack_198;
    unaff_x22 = ppppppcVar16;
    unaff_x23 = param_2;
    unaff_x24 = ppppppcVar9;
    unaff_x29 = puVar1;
  }
  ppppppcVar9 = ppppppcVar7 + 0x4b;
  pppppcVar14 = ppppppcVar7[0x59];
  pppppcVar12 = (code *****)((long)pppppcVar14 + -1);
  ppppppcVar7[0x59] = pppppcVar12;
  if (pppppcVar12 < (code *****)0x8) {
    pppppcVar14 = ppppppcVar9[(long)((long)pppppcVar14 + 2)];
    if (ppppppcVar7[0x5a] == pppppcVar14) {
      return;
    }
  }
  else {
    pppppcVar14 = (code *****)ppppppcVar7[0x57][-1];
    ppppppcVar7[0x57] = ppppppcVar7[0x57] + -1;
    if (ppppppcVar7[0x5a] == pppppcVar14) {
      return;
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(code *******)((long)register0x00000008 + -0x40) = unaff_x24;
  *(code *******)((long)register0x00000008 + -0x38) = unaff_x23;
  *(code *******)((long)register0x00000008 + -0x30) = unaff_x22;
  *(code *******)((long)register0x00000008 + -0x28) = unaff_x21;
  *(code *******)((long)register0x00000008 + -0x20) = unaff_x20;
  *(code *******)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  pppppcVar12 = *ppppppcVar9;
  pppppcVar13 = ppppppcVar7[0x4c];
  lVar15 = (long)pppppcVar13 - (long)pppppcVar12;
  pppppcVar19 = (code *****)(lVar15 >> 4);
  if (pppppcVar19 < pppppcVar14) {
    uVar20 = (long)pppppcVar14 - (long)pppppcVar19;
    pppppcVar18 = ppppppcVar7[0x4d];
    if ((ulong)((long)pppppcVar18 - (long)pppppcVar13 >> 4) < uVar20) {
      if ((ulong)pppppcVar14 >> 0x3c == 0) {
        pppppcVar13 = (code *****)((long)pppppcVar18 - (long)pppppcVar12 >> 3);
        if (pppppcVar13 <= pppppcVar14) {
          pppppcVar13 = pppppcVar14;
        }
        if (0x7fffffffffffffef < (ulong)((long)pppppcVar18 - (long)pppppcVar12)) {
          pppppcVar13 = (code *****)0xfffffffffffffff;
        }
        *(code *******)((long)register0x00000008 + -0x68) = ppppppcVar9;
        if ((ulong)pppppcVar13 >> 0x3c == 0) {
          lVar6 = (long)pppppcVar13 << 4;
          __Znwm();
          lVar2 = lVar6 + lVar15;
          _bzero(lVar2,uVar20 * 0x10);
          pppppcVar19 = (code *****)(lVar2 + (long)pppppcVar19 * -0x10);
          _memcpy(pppppcVar19,pppppcVar12,lVar15);
          *ppppppcVar9 = pppppcVar19;
          ppppppcVar7[0x4c] = (code *****)(lVar2 + uVar20 * 0x10);
          ppppppcVar7[0x4d] = (code *****)(lVar6 + (long)pppppcVar13 * 0x10);
          *(code ******)((long)register0x00000008 + -0x78) = pppppcVar12;
          *(code ******)((long)register0x00000008 + -0x70) = pppppcVar18;
          *(code ******)((long)register0x00000008 + -0x88) = pppppcVar12;
          *(code ******)((long)register0x00000008 + -0x80) = pppppcVar12;
          func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar5)();
    }
    _bzero(pppppcVar13,uVar20 * 0x10);
    ppppppcVar7[0x4c] = pppppcVar13 + uVar20 * 2;
  }
  else if (pppppcVar14 < pppppcVar19) {
    while (pppppcVar13 != pppppcVar12 + (long)pppppcVar14 * 2) {
      pppppcVar13 = pppppcVar13 + -2;
      func_0x00010988c204(pppppcVar13);
    }
    ppppppcVar7[0x4c] = pppppcVar12 + (long)pppppcVar14 * 2;
  }
code_r0x00010988c138:
  ppppppcVar7[0x5a] = pppppcVar14;
  return;
}



/* Entry: 10a374800; end: 10a374823;  */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_10a374800(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 extraout_x8;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long *plStack_80;
  long *plStack_78;
  long *in_stack_ffffffffffffffa8;
  
  if ((int)param_1 == 3) {
    return;
  }
  plVar6 = (long *)0x3;
  uVar9 = 0;
  FUN_10a052ee0(3,0,param_1);
  plVar7 = plVar6;
  (**(code **)(*plVar6 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  plVar16 = plVar6;
  FUN_10a370100(plVar6,uVar9);
  FUN_10a374a58(param_4);
  plVar8 = plVar6;
  FUN_10a373c54(plVar6,param_1);
  FUN_10a373ee8(&stack0xffffffffffffffa0,plVar6,param_1 + 0x10);
  FUN_10a342204(&plStack_80,plVar16,plVar8,&stack0xffffffffffffffa0);
  if (in_stack_ffffffffffffffa8 != (long *)0x0) {
    plVar16 = in_stack_ffffffffffffffa8 + 1;
    do {
      lVar11 = *plVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar3) {
        *plVar16 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
    }
  }
  FUN_10a374a7c(&stack0xffffffffffffffa8,plVar6,&stack0xffffffffffffff90);
  (**(code **)(*plVar6 + 0x30))(&plStack_78,plVar6);
  func_0x0001098843c0(&stack0xffffffffffffff90,&plStack_78,plVar6,&UNK_10f634758);
  (**(code **)(*plVar6 + 0x2b0))
            (extraout_x8,plVar6,&stack0xffffffffffffff90,&stack0xffffffffffffffa0,1);
  if (&stack0x00000000 != (undefined1 *)0x80) {
    (*(code *)*plStack_80)();
  }
  if (plStack_78 != (long *)0x0) {
    (**(code **)*plStack_78)();
  }
  if (in_stack_ffffffffffffffa8 != (long *)0x0) {
    (**(code **)*in_stack_ffffffffffffffa8)();
  }
  if (plStack_80 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_80 + 1);
    do {
      uVar12 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar12 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar12 & 0x1fffffffc) == 4) {
      do {
        uVar12 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar12 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar12 - 1 == 0) {
        (**(code **)(*plStack_80 + 8))();
      }
    }
  }
  plVar6 = plVar7 + 0x4b;
  lVar11 = plVar7[0x59];
  uVar12 = lVar11 - 1;
  plVar7[0x59] = uVar12;
  if (uVar12 < 8) {
    uVar12 = plVar6[lVar11 + 2];
    if (plVar7[0x5a] == uVar12) {
      return;
    }
  }
  else {
    uVar12 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar12) {
      return;
    }
  }
  lVar11 = *plVar6;
  lVar15 = plVar7[0x4c];
  lVar13 = lVar15 - lVar11;
  uVar17 = lVar13 >> 4;
  if (uVar17 < uVar12) {
    uVar18 = uVar12 - uVar17;
    plVar16 = (long *)plVar7[0x4d];
    if ((ulong)((long)plVar16 - lVar15 >> 4) < uVar18) {
      if (uVar12 >> 0x3c == 0) {
        uVar10 = (long)plVar16 - lVar11 >> 3;
        if (uVar10 <= uVar12) {
          uVar10 = uVar12;
        }
        if (0x7fffffffffffffef < (ulong)((long)plVar16 - lVar11)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_78 = plVar6;
        if (uVar10 >> 0x3c == 0) {
          lVar5 = uVar10 << 4;
          __Znwm();
          lVar15 = lVar5 + lVar13;
          _bzero(lVar15,uVar18 * 0x10);
          lVar14 = lVar15 + uVar17 * -0x10;
          _memcpy(lVar14,lVar11,lVar13);
          *plVar6 = lVar14;
          plVar7[0x4c] = lVar15 + uVar18 * 0x10;
          plVar7[0x4d] = lVar5 + uVar10 * 0x10;
          lStack_98 = lVar11;
          lStack_90 = lVar11;
          lStack_88 = lVar11;
          plStack_80 = plVar16;
          func_0x00010988c1b8(&lStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar4)();
    }
    _bzero(lVar15,uVar18 * 0x10);
    plVar7[0x4c] = lVar15 + uVar18 * 0x10;
  }
  else if (uVar12 < uVar17) {
    lVar11 = lVar11 + uVar12 * 0x10;
    while (lVar15 != lVar11) {
      lVar15 = lVar15 + -0x10;
      func_0x00010988c204(lVar15);
    }
    plVar7[0x4c] = lVar11;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar12;
  return;
}



/* Entry: 10a374824; end: 10a374a57;  */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_10a374824(undefined8 param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long *plStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffb8;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = param_2;
  FUN_10a370100(param_2,param_3);
  FUN_10a374a58(param_5);
  plVar14 = param_2;
  FUN_10a373c54(param_2,param_4);
  FUN_10a373ee8(&stack0xffffffffffffffb0,param_2,param_4 + 0x10);
  FUN_10a342204(&plStack_70,plVar7,plVar14,&stack0xffffffffffffffb0);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    plVar7 = in_stack_ffffffffffffffb8 + 1;
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
      (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
    }
  }
  FUN_10a374a7c(&stack0xffffffffffffffb8,param_2,&stack0xffffffffffffffa0);
  (**(code **)(*param_2 + 0x30))(&plStack_68,param_2);
  func_0x0001098843c0(&stack0xffffffffffffffa0,&plStack_68,param_2,&UNK_10f634758);
  (**(code **)(*param_2 + 0x2b0))
            (param_1,param_2,&stack0xffffffffffffffa0,&stack0xffffffffffffffb0,1);
  if (&stack0x00000000 != (undefined1 *)0x70) {
    (*(code *)*plStack_70)();
  }
  if (plStack_68 != (long *)0x0) {
    (**(code **)*plStack_68)();
  }
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    (**(code **)*in_stack_ffffffffffffffb8)();
  }
  if (plStack_70 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_70 + 1);
    do {
      uVar10 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar10 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar10 & 0x1fffffffc) == 4) {
      do {
        uVar10 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar10 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar10 - 1 == 0) {
        (**(code **)(*plStack_70 + 8))();
      }
    }
  }
  plVar7 = plVar6 + 0x4b;
  lVar9 = plVar6[0x59];
  uVar10 = lVar9 - 1;
  plVar6[0x59] = uVar10;
  if (uVar10 < 8) {
    uVar10 = plVar7[lVar9 + 2];
    if (plVar6[0x5a] == uVar10) {
      return;
    }
  }
  else {
    uVar10 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar10) {
      return;
    }
  }
  lVar9 = *plVar7;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar9;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar10) {
    uVar16 = uVar10 - uVar15;
    plVar14 = (long *)plVar6[0x4d];
    if ((ulong)((long)plVar14 - lVar13 >> 4) < uVar16) {
      if (uVar10 >> 0x3c == 0) {
        uVar8 = (long)plVar14 - lVar9 >> 3;
        if (uVar8 <= uVar10) {
          uVar8 = uVar10;
        }
        if (0x7fffffffffffffef < (ulong)((long)plVar14 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar8 >> 0x3c == 0) {
          lVar5 = uVar8 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar9,lVar11);
          *plVar7 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar5 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          plStack_70 = plVar14;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar4)();
    }
    _bzero(lVar13,uVar16 * 0x10);
    plVar6[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar10 < uVar15) {
    lVar9 = lVar9 + uVar10 * 0x10;
    while (lVar13 != lVar9) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar10;
  return;
}



/* Entry: 10a374a58; end: 10a374a7b;  */

void FUN_10a374a58(undefined8 *param_1)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  long in_x4;
  undefined4 *extraout_x8;
  ulong uVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 *unaff_x26;
  int aiStack_178 [2];
  undefined8 *puStack_170;
  undefined8 uStack_168;
  int iStack_160;
  undefined8 *puStack_158;
  int aiStack_150 [2];
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  int iStack_118;
  undefined4 uStack_114;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  int iStack_100;
  undefined8 *puStack_f8;
  long lStack_e8;
  undefined8 *puStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_48;
  
  if ((int)param_1 == 2) {
    return;
  }
  uVar7 = 2;
  plVar11 = (long *)0x0;
  FUN_10a052ee0();
  iVar10 = (int)&puStack_90;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(*plVar11 + 0xb0))(&puStack_90,plVar11,0,0);
  pcStack_88 = FUN_10a374b90;
  ppuStack_80 = &PTR_FUN_110bc7358;
  uStack_70 = param_1[1];
  uStack_78 = *param_1;
  lVar12 = 2;
  (**(code **)(*plVar11 + 0x2a0))(uVar7,plVar11,&puStack_90,2,&pcStack_88);
  (*(code *)*ppuStack_80)(&ppuStack_80);
  puVar8 = puStack_90;
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
    puVar8 = puStack_90;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (iVar10 == 0) {
    __Unwind_Resume(puVar8);
  }
  else {
    (*(code *)*ppuStack_80)(&ppuStack_80);
  }
  func_0x000104bd46a0(puVar8);
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = *(long **)(in_x4 + 0x10);
  plVar14 = *(long **)(in_x4 + 0x18);
  (**(code **)(*plVar14 + 0x58))();
  lVar16 = plVar14[0x47];
  uVar7 = *(undefined8 *)(in_x4 + 0x18);
  func_0x0001098849a4(aiStack_150,uVar7,lVar12);
  puVar8 = puStack_148;
  iVar10 = aiStack_150[0];
  if (aiStack_150[0] == 3) {
    puStack_140 = puStack_148;
    unaff_x26 = puVar8;
  }
  else if (aiStack_150[0] == 2) {
    puStack_140 = (undefined8 *)CONCAT71(puStack_140._1_7_,puStack_148._0_1_);
    unaff_x26 = (undefined8 *)((ulong)puStack_148 & 0xff);
  }
  else if (3 < aiStack_150[0]) {
    puStack_148 = (undefined8 *)0x0;
    puStack_140 = puVar8;
    unaff_x26 = puVar8;
  }
  aiStack_150[0] = 0;
  uVar15 = *(undefined8 *)(in_x4 + 0x18);
  func_0x0001098849a4(aiStack_178,uVar15,lVar12 + 0x10);
  iVar5 = aiStack_178[0];
  iStack_160 = aiStack_178[0];
  if (aiStack_178[0] == 3) {
    puStack_158 = puStack_170;
  }
  else if (aiStack_178[0] == 2) {
    puStack_158 = (undefined8 *)CONCAT71(puStack_158._1_7_,puStack_170._0_1_);
  }
  else if (3 < aiStack_178[0]) {
    puStack_158 = puStack_170;
    puStack_170 = (undefined8 *)0x0;
  }
  aiStack_178[0] = 0;
  uStack_168 = uVar15;
  if (*plVar11 == 0) {
    FUN_10a37564c(&uStack_120,uVar15,&UNK_10f634760,0x34);
    FUN_10a05589c(&uStack_168,&uStack_120);
    if ((3 < (int)uStack_120) &&
       ((undefined8 *)CONCAT44(uStack_114,iStack_118) != (undefined8 *)0x0)) {
      (*(code *)**(undefined8 **)CONCAT44(uStack_114,iStack_118))();
    }
    plVar14 = (long *)(ulong)(3 < iVar10);
LAB_10a375298:
    if ((3 < iStack_160) && (puStack_158 != (undefined8 *)0x0)) {
      (**(code **)*puStack_158)();
    }
    if ((3 < aiStack_178[0]) && (puStack_170 != (undefined8 *)0x0)) {
      (**(code **)*puStack_170)();
    }
    if (((int)plVar14 != 0) && (puStack_140 != (undefined8 *)0x0)) {
      (**(code **)*puStack_140)();
    }
    if ((3 < aiStack_150[0]) && (puStack_148 != (undefined8 *)0x0)) {
      (**(code **)*puStack_148)();
    }
    *extraout_x8 = 0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    iStack_118 = iVar10;
    if (iVar10 == 3) {
      puStack_110 = puStack_140;
    }
    else if (iVar10 == 2) {
      puStack_110 = (undefined8 *)CONCAT71(puStack_110._1_7_,(char)unaff_x26);
    }
    else if (3 < iVar10) {
      puStack_110 = puStack_140;
      puStack_140 = (undefined8 *)0x0;
    }
    iStack_100 = iVar5;
    if (iVar5 == 3) {
      puStack_f8 = puStack_158;
    }
    else if (iVar5 == 2) {
      puStack_f8 = (undefined8 *)CONCAT71(puStack_f8._1_7_,puStack_158._0_1_);
    }
    else if (3 < iVar5) {
      puStack_f8 = puStack_158;
      puStack_158 = (undefined8 *)0x0;
    }
    iStack_160 = 0;
    uStack_120 = uVar7;
    uStack_108 = uVar15;
    if (((uint)*(undefined8 *)(*plVar11 + 0x10) >> 1 & 1) == 0) {
      puVar8 = (undefined8 *)0xe8;
      __Znwm();
      *puVar8 = FUN_10a389c4c;
      puVar8[1] = FUN_10a38a0ac;
      func_0x0001092ba17c(puVar8 + 2);
      plVar14 = (long *)puVar8[7];
      if (plVar14 != (long *)0x0) {
        plVar1 = plVar14 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      puVar8[9] = *plVar11;
      *plVar11 = 0;
      puVar8[10] = uStack_120;
      *(int *)(puVar8 + 0xb) = iStack_118;
      if (iStack_118 == 3) {
        puVar8[0xc] = puStack_110;
      }
      else if (iStack_118 == 2) {
        *(undefined1 *)(puVar8 + 0xc) = puStack_110._0_1_;
      }
      else if (3 < iStack_118) {
        puVar8[0xc] = puStack_110;
        puStack_110 = (undefined8 *)0x0;
      }
      iStack_118 = 0;
      puVar8[0xd] = uStack_108;
      *(int *)(puVar8 + 0xe) = iStack_100;
      if (iStack_100 == 3) {
        puVar8[0xf] = puStack_f8;
      }
      else if (iStack_100 == 2) {
        *(undefined1 *)(puVar8 + 0xf) = puStack_f8._0_1_;
      }
      else if (3 < iStack_100) {
        puVar8[0xf] = puStack_f8;
        puStack_f8 = (undefined8 *)0x0;
      }
      iStack_100 = 0;
      puVar8[0x18] = lVar16;
      *(undefined1 *)(puVar8 + 0x19) = 0;
      *(undefined1 *)(puVar8 + 0x1c) = 0;
      puVar9 = puVar8 + 0x18;
      func_0x0001092ba064(puVar9,puVar8);
      if (((ulong)puVar9 & 1) == 0) {
        puVar8[0x1b] = puVar8[9];
        puVar8[9] = 0;
        puVar8[0x11] = puVar8[10];
        iVar10 = *(int *)(puVar8 + 0xb);
        *(int *)(puVar8 + 0x12) = iVar10;
        if (iVar10 == 3) {
          puVar8[0x13] = puVar8[0xc];
        }
        else if (iVar10 == 2) {
          *(undefined1 *)(puVar8 + 0x13) = *(undefined1 *)(puVar8 + 0xc);
        }
        else if (3 < iVar10) {
          puVar8[0x13] = puVar8[0xc];
          puVar8[0xc] = 0;
        }
        *(undefined4 *)(puVar8 + 0xb) = 0;
        puVar8[0x14] = puVar8[0xd];
        iVar10 = *(int *)(puVar8 + 0xe);
        *(int *)(puVar8 + 0x15) = iVar10;
        if (iVar10 == 3) {
          puVar8[0x16] = puVar8[0xf];
        }
        else if (iVar10 == 2) {
          *(undefined1 *)(puVar8 + 0x16) = *(undefined1 *)(puVar8 + 0xf);
        }
        else if (3 < iVar10) {
          puVar8[0x16] = puVar8[0xf];
          puVar8[0xf] = 0;
        }
        *(undefined4 *)(puVar8 + 0xe) = 0;
        FUN_10a375b38(puVar8 + 0x1a,puVar8 + 0x1b,puVar8 + 0x11);
        puVar8[0x18] = puVar8[0x1a];
        plVar11 = (long *)(puVar8[0x1a] + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = *plVar11 + 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (((uint)*(undefined8 *)(puVar8[0x18] + 0x10) >> 1 & 1) == 0) {
          *(undefined1 *)(puVar8 + 0x1c) = 1;
          lVar12 = puVar8[0x18];
          plVar11 = (long *)(lVar12 + 0x10);
          uVar7 = puVar8[3];
          do {
            lVar16 = *plVar11;
            if (lVar16 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar4) {
                *plVar11 = 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                uStack_138 = 0;
                puStack_130 = puVar8;
                uStack_128 = uVar7;
                func_0x000109d1b588(lVar12 + 0x18,&uStack_138);
                *(undefined8 *)(lVar12 + 0x10) = 0;
                if (plVar14 == (long *)0x0) goto LAB_10a375254;
                goto LAB_10a375210;
              }
            }
            else {
              ClearExclusiveLocal();
            }
          } while (((uint)lVar16 >> 1 & 1) == 0);
        }
        plVar11 = (long *)puVar8[0x18];
        if (((uint)*(undefined8 *)(puVar8[0x18] + 0x10) >> 5 & 1) != 0) {
          func_0x0001092af97c(plVar11 + 0x12);
          goto LAB_10a3753dc;
        }
        if (plVar11 != (long *)0x0) {
          puVar2 = (ulong *)(plVar11 + 1);
          do {
            uVar13 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar13 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar13 & 0x1fffffffc) == 4) {
            do {
              uVar13 = *puVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar4) {
                *puVar2 = uVar13 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar13 - 1 == 0) {
              (**(code **)(*plVar11 + 8))();
            }
          }
        }
        plVar11 = (long *)puVar8[0x1a];
        if (plVar11 != (long *)0x0) {
          puVar2 = (ulong *)(plVar11 + 1);
          do {
            uVar13 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar13 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar13 & 0x1fffffffc) == 4) {
            do {
              uVar13 = *puVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar4) {
                *puVar2 = uVar13 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar13 - 1 == 0) {
              (**(code **)(*plVar11 + 8))();
            }
          }
        }
        if ((3 < *(int *)(puVar8 + 0x15)) && ((undefined8 *)puVar8[0x16] != (undefined8 *)0x0)) {
          (*(code *)**(undefined8 **)puVar8[0x16])();
        }
        if ((3 < *(int *)(puVar8 + 0x12)) && ((undefined8 *)puVar8[0x13] != (undefined8 *)0x0)) {
          (*(code *)**(undefined8 **)puVar8[0x13])();
        }
        plVar11 = (long *)puVar8[0x1b];
        if (plVar11 != (long *)0x0) {
          puVar2 = (ulong *)(plVar11 + 1);
          do {
            uVar13 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar13 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar13 & 0x1fffffffc) == 4) {
            do {
              uVar13 = *puVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar4) {
                *puVar2 = uVar13 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar13 - 1 == 0) {
              (**(code **)(*plVar11 + 8))();
            }
          }
        }
        func_0x0001092ba100(puVar8 + 2);
        if ((3 < *(int *)(puVar8 + 0xe)) && ((undefined8 *)puVar8[0xf] != (undefined8 *)0x0)) {
          (*(code *)**(undefined8 **)puVar8[0xf])();
        }
        if ((3 < *(int *)(puVar8 + 0xb)) && ((undefined8 *)puVar8[0xc] != (undefined8 *)0x0)) {
          (*(code *)**(undefined8 **)puVar8[0xc])();
        }
        plVar11 = (long *)puVar8[9];
        if (plVar11 != (long *)0x0) {
          puVar2 = (ulong *)(plVar11 + 1);
          do {
            uVar13 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar13 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar13 & 0x1fffffffc) == 4) {
            do {
              uVar13 = *puVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar4) {
                *puVar2 = uVar13 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar13 - 1 == 0) {
              (**(code **)(*plVar11 + 8))();
            }
          }
        }
        func_0x000109d1a1d0(puVar8 + 2);
        __ZdlPv(puVar8);
      }
      if (plVar14 != (long *)0x0) {
LAB_10a375210:
        puVar2 = (ulong *)(plVar14 + 1);
        do {
          uVar13 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar13 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar13 & 0x1fffffffc) == 4) {
          do {
            uVar13 = *puVar2 - 1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar13;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          goto LAB_10a375240;
        }
      }
LAB_10a375254:
      if ((3 < iStack_100) && (puStack_f8 != (undefined8 *)0x0)) {
        (**(code **)*puStack_f8)();
      }
      if ((3 < iStack_118) && (puStack_110 != (undefined8 *)0x0)) {
        (**(code **)*puStack_110)();
      }
      plVar14 = (long *)0x0;
      goto LAB_10a375298;
    }
    plVar14 = (long *)*plVar11;
    *plVar11 = 0;
    if (((uint)plVar14[2] >> 5 & 1) != 0) {
      __ZNSt13exception_ptrC1ERKS_(&uStack_138,plVar14 + 0x12);
      FUN_10a3759e4(&uStack_108,&uStack_138);
      __ZNSt13exception_ptrD1Ev(&uStack_138);
LAB_10a374e5c:
      puVar2 = (ulong *)(plVar14 + 1);
      do {
        uVar13 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar13 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar13 & 0x1fffffffc) == 4) {
        do {
          uVar13 = *puVar2 - 1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar13;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
LAB_10a375240:
        if (uVar13 == 0) {
          (**(code **)(*plVar14 + 8))(plVar14);
        }
      }
      goto LAB_10a375254;
    }
    if ((((uint)plVar14[2] >> 1 & 1) != 0) && (((uint)plVar14[2] >> 5 & 1) == 0)) {
      if ((*(byte *)(plVar14 + 0x15) & 1) == 0) goto LAB_10a3753dc;
      FUN_10a3757e0(&uStack_120,plVar14 + 0x13);
      goto LAB_10a374e5c;
    }
  }
  if (((uint)plVar14[2] >> 5 & 1) == 0) {
    puVar8 = (undefined8 *)0x10;
    ___cxa_allocate_exception();
    __ZNSt13runtime_errorC2EPKc();
    *puVar8 = &PTR_DAT_110ae85c0;
    ___cxa_throw(puVar8,&PTR_DAT_110ae8598,&DAT_1092af9d8);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&uStack_138,plVar14 + 0x12);
    func_0x0001092af97c(&uStack_138);
  }
LAB_10a3753dc:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a3753e0);
  (*pcVar6)();
}



/* Entry: 10a374a7c; end: 10a374b8f;  */

void FUN_10a374a7c(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 param_4,
                  long param_5)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  undefined4 *extraout_x8;
  ulong uVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 *unaff_x26;
  int aiStack_168 [2];
  undefined8 *puStack_160;
  undefined8 uStack_158;
  int iStack_150;
  undefined8 *puStack_148;
  int aiStack_140 [2];
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  int iStack_108;
  undefined4 uStack_104;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  int iStack_f0;
  undefined8 *puStack_e8;
  long lStack_d8;
  undefined8 *puStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_38;
  
  iVar10 = (int)&puStack_80;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(*param_2 + 0xb0))(&puStack_80,param_2,0,0);
  pcStack_78 = FUN_10a374b90;
  ppuStack_70 = &PTR_FUN_110bc7358;
  uStack_60 = param_3[1];
  uStack_68 = *param_3;
  lVar11 = 2;
  (**(code **)(*param_2 + 0x2a0))(param_1,param_2,&puStack_80,2,&pcStack_78);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  puVar7 = puStack_80;
  if (puStack_80 != (undefined8 *)0x0) {
    (**(code **)*puStack_80)();
    puVar7 = puStack_80;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if (iVar10 == 0) {
    __Unwind_Resume(puVar7);
  }
  else {
    (*(code *)*ppuStack_70)(&ppuStack_70);
  }
  func_0x000104bd46a0(puVar7);
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = *(long **)(param_5 + 0x10);
  plVar14 = *(long **)(param_5 + 0x18);
  (**(code **)(*plVar14 + 0x58))();
  lVar16 = plVar14[0x47];
  uVar13 = *(undefined8 *)(param_5 + 0x18);
  func_0x0001098849a4(aiStack_140,uVar13,lVar11);
  puVar7 = puStack_138;
  iVar10 = aiStack_140[0];
  if (aiStack_140[0] == 3) {
    puStack_130 = puStack_138;
    unaff_x26 = puVar7;
  }
  else if (aiStack_140[0] == 2) {
    puStack_130 = (undefined8 *)CONCAT71(puStack_130._1_7_,puStack_138._0_1_);
    unaff_x26 = (undefined8 *)((ulong)puStack_138 & 0xff);
  }
  else if (3 < aiStack_140[0]) {
    puStack_138 = (undefined8 *)0x0;
    puStack_130 = puVar7;
    unaff_x26 = puVar7;
  }
  aiStack_140[0] = 0;
  uVar15 = *(undefined8 *)(param_5 + 0x18);
  func_0x0001098849a4(aiStack_168,uVar15,lVar11 + 0x10);
  iVar5 = aiStack_168[0];
  iStack_150 = aiStack_168[0];
  if (aiStack_168[0] == 3) {
    puStack_148 = puStack_160;
  }
  else if (aiStack_168[0] == 2) {
    puStack_148 = (undefined8 *)CONCAT71(puStack_148._1_7_,puStack_160._0_1_);
  }
  else if (3 < aiStack_168[0]) {
    puStack_148 = puStack_160;
    puStack_160 = (undefined8 *)0x0;
  }
  aiStack_168[0] = 0;
  uStack_158 = uVar15;
  if (*plVar9 == 0) {
    FUN_10a37564c(&uStack_110,uVar15,&UNK_10f634760,0x34);
    FUN_10a05589c(&uStack_158,&uStack_110);
    if ((3 < (int)uStack_110) &&
       ((undefined8 *)CONCAT44(uStack_104,iStack_108) != (undefined8 *)0x0)) {
      (*(code *)**(undefined8 **)CONCAT44(uStack_104,iStack_108))();
    }
    plVar14 = (long *)(ulong)(3 < iVar10);
LAB_10a375298:
    if ((3 < iStack_150) && (puStack_148 != (undefined8 *)0x0)) {
      (**(code **)*puStack_148)();
    }
    if ((3 < aiStack_168[0]) && (puStack_160 != (undefined8 *)0x0)) {
      (**(code **)*puStack_160)();
    }
    if (((int)plVar14 != 0) && (puStack_130 != (undefined8 *)0x0)) {
      (**(code **)*puStack_130)();
    }
    if ((3 < aiStack_140[0]) && (puStack_138 != (undefined8 *)0x0)) {
      (**(code **)*puStack_138)();
    }
    *extraout_x8 = 0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    iStack_108 = iVar10;
    if (iVar10 == 3) {
      puStack_100 = puStack_130;
    }
    else if (iVar10 == 2) {
      puStack_100 = (undefined8 *)CONCAT71(puStack_100._1_7_,(char)unaff_x26);
    }
    else if (3 < iVar10) {
      puStack_100 = puStack_130;
      puStack_130 = (undefined8 *)0x0;
    }
    iStack_f0 = iVar5;
    if (iVar5 == 3) {
      puStack_e8 = puStack_148;
    }
    else if (iVar5 == 2) {
      puStack_e8 = (undefined8 *)CONCAT71(puStack_e8._1_7_,puStack_148._0_1_);
    }
    else if (3 < iVar5) {
      puStack_e8 = puStack_148;
      puStack_148 = (undefined8 *)0x0;
    }
    iStack_150 = 0;
    uStack_110 = uVar13;
    uStack_f8 = uVar15;
    if (((uint)*(undefined8 *)(*plVar9 + 0x10) >> 1 & 1) == 0) {
      puVar7 = (undefined8 *)0xe8;
      __Znwm();
      *puVar7 = FUN_10a389c4c;
      puVar7[1] = FUN_10a38a0ac;
      func_0x0001092ba17c(puVar7 + 2);
      plVar14 = (long *)puVar7[7];
      if (plVar14 != (long *)0x0) {
        plVar1 = plVar14 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      puVar7[9] = *plVar9;
      *plVar9 = 0;
      puVar7[10] = uStack_110;
      *(int *)(puVar7 + 0xb) = iStack_108;
      if (iStack_108 == 3) {
        puVar7[0xc] = puStack_100;
      }
      else if (iStack_108 == 2) {
        *(undefined1 *)(puVar7 + 0xc) = puStack_100._0_1_;
      }
      else if (3 < iStack_108) {
        puVar7[0xc] = puStack_100;
        puStack_100 = (undefined8 *)0x0;
      }
      iStack_108 = 0;
      puVar7[0xd] = uStack_f8;
      *(int *)(puVar7 + 0xe) = iStack_f0;
      if (iStack_f0 == 3) {
        puVar7[0xf] = puStack_e8;
      }
      else if (iStack_f0 == 2) {
        *(undefined1 *)(puVar7 + 0xf) = puStack_e8._0_1_;
      }
      else if (3 < iStack_f0) {
        puVar7[0xf] = puStack_e8;
        puStack_e8 = (undefined8 *)0x0;
      }
      iStack_f0 = 0;
      puVar7[0x18] = lVar16;
      *(undefined1 *)(puVar7 + 0x19) = 0;
      *(undefined1 *)(puVar7 + 0x1c) = 0;
      puVar8 = puVar7 + 0x18;
      func_0x0001092ba064(puVar8,puVar7);
      if (((ulong)puVar8 & 1) == 0) {
        puVar7[0x1b] = puVar7[9];
        puVar7[9] = 0;
        puVar7[0x11] = puVar7[10];
        iVar10 = *(int *)(puVar7 + 0xb);
        *(int *)(puVar7 + 0x12) = iVar10;
        if (iVar10 == 3) {
          puVar7[0x13] = puVar7[0xc];
        }
        else if (iVar10 == 2) {
          *(undefined1 *)(puVar7 + 0x13) = *(undefined1 *)(puVar7 + 0xc);
        }
        else if (3 < iVar10) {
          puVar7[0x13] = puVar7[0xc];
          puVar7[0xc] = 0;
        }
        *(undefined4 *)(puVar7 + 0xb) = 0;
        puVar7[0x14] = puVar7[0xd];
        iVar10 = *(int *)(puVar7 + 0xe);
        *(int *)(puVar7 + 0x15) = iVar10;
        if (iVar10 == 3) {
          puVar7[0x16] = puVar7[0xf];
        }
        else if (iVar10 == 2) {
          *(undefined1 *)(puVar7 + 0x16) = *(undefined1 *)(puVar7 + 0xf);
        }
        else if (3 < iVar10) {
          puVar7[0x16] = puVar7[0xf];
          puVar7[0xf] = 0;
        }
        *(undefined4 *)(puVar7 + 0xe) = 0;
        FUN_10a375b38(puVar7 + 0x1a,puVar7 + 0x1b,puVar7 + 0x11);
        puVar7[0x18] = puVar7[0x1a];
        plVar9 = (long *)(puVar7[0x1a] + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = *plVar9 + 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (((uint)*(undefined8 *)(puVar7[0x18] + 0x10) >> 1 & 1) == 0) {
          *(undefined1 *)(puVar7 + 0x1c) = 1;
          lVar11 = puVar7[0x18];
          plVar9 = (long *)(lVar11 + 0x10);
          uVar13 = puVar7[3];
          do {
            lVar16 = *plVar9;
            if (lVar16 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar4) {
                *plVar9 = 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                uStack_128 = 0;
                puStack_120 = puVar7;
                uStack_118 = uVar13;
                func_0x000109d1b588(lVar11 + 0x18,&uStack_128);
                *(undefined8 *)(lVar11 + 0x10) = 0;
                if (plVar14 == (long *)0x0) goto LAB_10a375254;
                goto LAB_10a375210;
              }
            }
            else {
              ClearExclusiveLocal();
            }
          } while (((uint)lVar16 >> 1 & 1) == 0);
        }
        plVar9 = (long *)puVar7[0x18];
        if (((uint)*(undefined8 *)(puVar7[0x18] + 0x10) >> 5 & 1) != 0) {
          func_0x0001092af97c(plVar9 + 0x12);
          goto LAB_10a3753dc;
        }
        if (plVar9 != (long *)0x0) {
          puVar2 = (ulong *)(plVar9 + 1);
          do {
            uVar12 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar12 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar12 & 0x1fffffffc) == 4) {
            do {
              uVar12 = *puVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar4) {
                *puVar2 = uVar12 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar12 - 1 == 0) {
              (**(code **)(*plVar9 + 8))();
            }
          }
        }
        plVar9 = (long *)puVar7[0x1a];
        if (plVar9 != (long *)0x0) {
          puVar2 = (ulong *)(plVar9 + 1);
          do {
            uVar12 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar12 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar12 & 0x1fffffffc) == 4) {
            do {
              uVar12 = *puVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar4) {
                *puVar2 = uVar12 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar12 - 1 == 0) {
              (**(code **)(*plVar9 + 8))();
            }
          }
        }
        if ((3 < *(int *)(puVar7 + 0x15)) && ((undefined8 *)puVar7[0x16] != (undefined8 *)0x0)) {
          (*(code *)**(undefined8 **)puVar7[0x16])();
        }
        if ((3 < *(int *)(puVar7 + 0x12)) && ((undefined8 *)puVar7[0x13] != (undefined8 *)0x0)) {
          (*(code *)**(undefined8 **)puVar7[0x13])();
        }
        plVar9 = (long *)puVar7[0x1b];
        if (plVar9 != (long *)0x0) {
          puVar2 = (ulong *)(plVar9 + 1);
          do {
            uVar12 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar12 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar12 & 0x1fffffffc) == 4) {
            do {
              uVar12 = *puVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar4) {
                *puVar2 = uVar12 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar12 - 1 == 0) {
              (**(code **)(*plVar9 + 8))();
            }
          }
        }
        func_0x0001092ba100(puVar7 + 2);
        if ((3 < *(int *)(puVar7 + 0xe)) && ((undefined8 *)puVar7[0xf] != (undefined8 *)0x0)) {
          (*(code *)**(undefined8 **)puVar7[0xf])();
        }
        if ((3 < *(int *)(puVar7 + 0xb)) && ((undefined8 *)puVar7[0xc] != (undefined8 *)0x0)) {
          (*(code *)**(undefined8 **)puVar7[0xc])();
        }
        plVar9 = (long *)puVar7[9];
        if (plVar9 != (long *)0x0) {
          puVar2 = (ulong *)(plVar9 + 1);
          do {
            uVar12 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar12 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar12 & 0x1fffffffc) == 4) {
            do {
              uVar12 = *puVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar4) {
                *puVar2 = uVar12 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar12 - 1 == 0) {
              (**(code **)(*plVar9 + 8))();
            }
          }
        }
        func_0x000109d1a1d0(puVar7 + 2);
        __ZdlPv(puVar7);
      }
      if (plVar14 != (long *)0x0) {
LAB_10a375210:
        puVar2 = (ulong *)(plVar14 + 1);
        do {
          uVar12 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar12 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar12 & 0x1fffffffc) == 4) {
          do {
            uVar12 = *puVar2 - 1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar12;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          goto LAB_10a375240;
        }
      }
LAB_10a375254:
      if ((3 < iStack_f0) && (puStack_e8 != (undefined8 *)0x0)) {
        (**(code **)*puStack_e8)();
      }
      if ((3 < iStack_108) && (puStack_100 != (undefined8 *)0x0)) {
        (**(code **)*puStack_100)();
      }
      plVar14 = (long *)0x0;
      goto LAB_10a375298;
    }
    plVar14 = (long *)*plVar9;
    *plVar9 = 0;
    if (((uint)plVar14[2] >> 5 & 1) != 0) {
      __ZNSt13exception_ptrC1ERKS_(&uStack_128,plVar14 + 0x12);
      FUN_10a3759e4(&uStack_f8,&uStack_128);
      __ZNSt13exception_ptrD1Ev(&uStack_128);
LAB_10a374e5c:
      puVar2 = (ulong *)(plVar14 + 1);
      do {
        uVar12 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar12 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar12 & 0x1fffffffc) == 4) {
        do {
          uVar12 = *puVar2 - 1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar12;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
LAB_10a375240:
        if (uVar12 == 0) {
          (**(code **)(*plVar14 + 8))(plVar14);
        }
      }
      goto LAB_10a375254;
    }
    if ((((uint)plVar14[2] >> 1 & 1) != 0) && (((uint)plVar14[2] >> 5 & 1) == 0)) {
      if ((*(byte *)(plVar14 + 0x15) & 1) == 0) goto LAB_10a3753dc;
      FUN_10a3757e0(&uStack_110,plVar14 + 0x13);
      goto LAB_10a374e5c;
    }
  }
  if (((uint)plVar14[2] >> 5 & 1) == 0) {
    puVar7 = (undefined8 *)0x10;
    ___cxa_allocate_exception();
    __ZNSt13runtime_errorC2EPKc();
    *puVar7 = &PTR_DAT_110ae85c0;
    ___cxa_throw(puVar7,&PTR_DAT_110ae8598,&DAT_1092af9d8);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&uStack_128,plVar14 + 0x12);
    func_0x0001092af97c(&uStack_128);
  }
LAB_10a3753dc:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a3753e0);
  (*pcVar6)();
}



/* Entry: 10a374b90; end: 10a37564b;  */

void FUN_10a374b90(undefined4 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  long *plVar1;
  ulong *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 *unaff_x26;
  int aiStack_e8 [2];
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  int iStack_d0;
  undefined8 *puStack_c8;
  int aiStack_c0 [2];
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  int iStack_88;
  undefined4 uStack_84;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  int iStack_70;
  undefined8 *puStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = *(long **)(param_6 + 0x10);
  plVar14 = *(long **)(param_6 + 0x18);
  (**(code **)(*plVar14 + 0x58))();
  lVar16 = plVar14[0x47];
  uVar13 = *(undefined8 *)(param_6 + 0x18);
  func_0x0001098849a4(aiStack_c0,uVar13,param_4);
  puVar8 = puStack_b8;
  iVar3 = aiStack_c0[0];
  if (aiStack_c0[0] == 3) {
    puStack_b0 = puStack_b8;
    unaff_x26 = puVar8;
  }
  else if (aiStack_c0[0] == 2) {
    puStack_b0 = (undefined8 *)CONCAT71(puStack_b0._1_7_,puStack_b8._0_1_);
    unaff_x26 = (undefined8 *)((ulong)puStack_b8 & 0xff);
  }
  else if (3 < aiStack_c0[0]) {
    puStack_b8 = (undefined8 *)0x0;
    puStack_b0 = puVar8;
    unaff_x26 = puVar8;
  }
  aiStack_c0[0] = 0;
  uVar15 = *(undefined8 *)(param_6 + 0x18);
  func_0x0001098849a4(aiStack_e8,uVar15,param_4 + 0x10);
  iVar6 = aiStack_e8[0];
  iStack_d0 = aiStack_e8[0];
  if (aiStack_e8[0] == 3) {
    puStack_c8 = puStack_e0;
  }
  else if (aiStack_e8[0] == 2) {
    puStack_c8 = (undefined8 *)CONCAT71(puStack_c8._1_7_,puStack_e0._0_1_);
  }
  else if (3 < aiStack_e8[0]) {
    puStack_c8 = puStack_e0;
    puStack_e0 = (undefined8 *)0x0;
  }
  aiStack_e8[0] = 0;
  uStack_d8 = uVar15;
  if (*plVar10 == 0) {
    FUN_10a37564c(&uStack_90,uVar15,&UNK_10f634760,0x34);
    FUN_10a05589c(&uStack_d8,&uStack_90);
    if ((3 < (int)uStack_90) && ((undefined8 *)CONCAT44(uStack_84,iStack_88) != (undefined8 *)0x0))
    {
      (*(code *)**(undefined8 **)CONCAT44(uStack_84,iStack_88))();
    }
    plVar14 = (long *)(ulong)(3 < iVar3);
LAB_10a375298:
    if ((3 < iStack_d0) && (puStack_c8 != (undefined8 *)0x0)) {
      (**(code **)*puStack_c8)();
    }
    if ((3 < aiStack_e8[0]) && (puStack_e0 != (undefined8 *)0x0)) {
      (**(code **)*puStack_e0)();
    }
    if (((int)plVar14 != 0) && (puStack_b0 != (undefined8 *)0x0)) {
      (**(code **)*puStack_b0)();
    }
    if ((3 < aiStack_c0[0]) && (puStack_b8 != (undefined8 *)0x0)) {
      (**(code **)*puStack_b8)();
    }
    *param_1 = 0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    iStack_88 = iVar3;
    if (iVar3 == 3) {
      puStack_80 = puStack_b0;
    }
    else if (iVar3 == 2) {
      puStack_80 = (undefined8 *)CONCAT71(puStack_80._1_7_,(char)unaff_x26);
    }
    else if (3 < iVar3) {
      puStack_80 = puStack_b0;
      puStack_b0 = (undefined8 *)0x0;
    }
    iStack_70 = iVar6;
    if (iVar6 == 3) {
      puStack_68 = puStack_c8;
    }
    else if (iVar6 == 2) {
      puStack_68 = (undefined8 *)CONCAT71(puStack_68._1_7_,puStack_c8._0_1_);
    }
    else if (3 < iVar6) {
      puStack_68 = puStack_c8;
      puStack_c8 = (undefined8 *)0x0;
    }
    iStack_d0 = 0;
    uStack_90 = uVar13;
    uStack_78 = uVar15;
    if (((uint)*(undefined8 *)(*plVar10 + 0x10) >> 1 & 1) == 0) {
      puVar8 = (undefined8 *)0xe8;
      __Znwm();
      *puVar8 = FUN_10a389c4c;
      puVar8[1] = FUN_10a38a0ac;
      func_0x0001092ba17c(puVar8 + 2);
      plVar14 = (long *)puVar8[7];
      if (plVar14 != (long *)0x0) {
        plVar1 = plVar14 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      puVar8[9] = *plVar10;
      *plVar10 = 0;
      puVar8[10] = uStack_90;
      *(int *)(puVar8 + 0xb) = iStack_88;
      if (iStack_88 == 3) {
        puVar8[0xc] = puStack_80;
      }
      else if (iStack_88 == 2) {
        *(undefined1 *)(puVar8 + 0xc) = puStack_80._0_1_;
      }
      else if (3 < iStack_88) {
        puVar8[0xc] = puStack_80;
        puStack_80 = (undefined8 *)0x0;
      }
      iStack_88 = 0;
      puVar8[0xd] = uStack_78;
      *(int *)(puVar8 + 0xe) = iStack_70;
      if (iStack_70 == 3) {
        puVar8[0xf] = puStack_68;
      }
      else if (iStack_70 == 2) {
        *(undefined1 *)(puVar8 + 0xf) = puStack_68._0_1_;
      }
      else if (3 < iStack_70) {
        puVar8[0xf] = puStack_68;
        puStack_68 = (undefined8 *)0x0;
      }
      iStack_70 = 0;
      puVar8[0x18] = lVar16;
      *(undefined1 *)(puVar8 + 0x19) = 0;
      *(undefined1 *)(puVar8 + 0x1c) = 0;
      puVar9 = puVar8 + 0x18;
      func_0x0001092ba064(puVar9,puVar8);
      if (((ulong)puVar9 & 1) == 0) {
        puVar8[0x1b] = puVar8[9];
        puVar8[9] = 0;
        puVar8[0x11] = puVar8[10];
        iVar3 = *(int *)(puVar8 + 0xb);
        *(int *)(puVar8 + 0x12) = iVar3;
        if (iVar3 == 3) {
          puVar8[0x13] = puVar8[0xc];
        }
        else if (iVar3 == 2) {
          *(undefined1 *)(puVar8 + 0x13) = *(undefined1 *)(puVar8 + 0xc);
        }
        else if (3 < iVar3) {
          puVar8[0x13] = puVar8[0xc];
          puVar8[0xc] = 0;
        }
        *(undefined4 *)(puVar8 + 0xb) = 0;
        puVar8[0x14] = puVar8[0xd];
        iVar3 = *(int *)(puVar8 + 0xe);
        *(int *)(puVar8 + 0x15) = iVar3;
        if (iVar3 == 3) {
          puVar8[0x16] = puVar8[0xf];
        }
        else if (iVar3 == 2) {
          *(undefined1 *)(puVar8 + 0x16) = *(undefined1 *)(puVar8 + 0xf);
        }
        else if (3 < iVar3) {
          puVar8[0x16] = puVar8[0xf];
          puVar8[0xf] = 0;
        }
        *(undefined4 *)(puVar8 + 0xe) = 0;
        FUN_10a375b38(puVar8 + 0x1a,puVar8 + 0x1b,puVar8 + 0x11);
        puVar8[0x18] = puVar8[0x1a];
        plVar10 = (long *)(puVar8[0x1a] + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = *plVar10 + 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (((uint)*(undefined8 *)(puVar8[0x18] + 0x10) >> 1 & 1) == 0) {
          *(undefined1 *)(puVar8 + 0x1c) = 1;
          lVar16 = puVar8[0x18];
          plVar10 = (long *)(lVar16 + 0x10);
          uVar13 = puVar8[3];
          do {
            lVar12 = *plVar10;
            if (lVar12 == 0) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar5) {
                *plVar10 = 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                uStack_a8 = 0;
                puStack_a0 = puVar8;
                uStack_98 = uVar13;
                func_0x000109d1b588(lVar16 + 0x18,&uStack_a8);
                *(undefined8 *)(lVar16 + 0x10) = 0;
                if (plVar14 == (long *)0x0) goto LAB_10a375254;
                goto LAB_10a375210;
              }
            }
            else {
              ClearExclusiveLocal();
            }
          } while (((uint)lVar12 >> 1 & 1) == 0);
        }
        plVar10 = (long *)puVar8[0x18];
        if (((uint)*(undefined8 *)(puVar8[0x18] + 0x10) >> 5 & 1) != 0) {
          func_0x0001092af97c(plVar10 + 0x12);
          goto LAB_10a3753dc;
        }
        if (plVar10 != (long *)0x0) {
          puVar2 = (ulong *)(plVar10 + 1);
          do {
            uVar11 = *puVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar11 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar11 & 0x1fffffffc) == 4) {
            do {
              uVar11 = *puVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar5) {
                *puVar2 = uVar11 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar11 - 1 == 0) {
              (**(code **)(*plVar10 + 8))();
            }
          }
        }
        plVar10 = (long *)puVar8[0x1a];
        if (plVar10 != (long *)0x0) {
          puVar2 = (ulong *)(plVar10 + 1);
          do {
            uVar11 = *puVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar11 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar11 & 0x1fffffffc) == 4) {
            do {
              uVar11 = *puVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar5) {
                *puVar2 = uVar11 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar11 - 1 == 0) {
              (**(code **)(*plVar10 + 8))();
            }
          }
        }
        if ((3 < *(int *)(puVar8 + 0x15)) && ((undefined8 *)puVar8[0x16] != (undefined8 *)0x0)) {
          (*(code *)**(undefined8 **)puVar8[0x16])();
        }
        if ((3 < *(int *)(puVar8 + 0x12)) && ((undefined8 *)puVar8[0x13] != (undefined8 *)0x0)) {
          (*(code *)**(undefined8 **)puVar8[0x13])();
        }
        plVar10 = (long *)puVar8[0x1b];
        if (plVar10 != (long *)0x0) {
          puVar2 = (ulong *)(plVar10 + 1);
          do {
            uVar11 = *puVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar11 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar11 & 0x1fffffffc) == 4) {
            do {
              uVar11 = *puVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar5) {
                *puVar2 = uVar11 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar11 - 1 == 0) {
              (**(code **)(*plVar10 + 8))();
            }
          }
        }
        func_0x0001092ba100(puVar8 + 2);
        if ((3 < *(int *)(puVar8 + 0xe)) && ((undefined8 *)puVar8[0xf] != (undefined8 *)0x0)) {
          (*(code *)**(undefined8 **)puVar8[0xf])();
        }
        if ((3 < *(int *)(puVar8 + 0xb)) && ((undefined8 *)puVar8[0xc] != (undefined8 *)0x0)) {
          (*(code *)**(undefined8 **)puVar8[0xc])();
        }
        plVar10 = (long *)puVar8[9];
        if (plVar10 != (long *)0x0) {
          puVar2 = (ulong *)(plVar10 + 1);
          do {
            uVar11 = *puVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar11 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar11 & 0x1fffffffc) == 4) {
            do {
              uVar11 = *puVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar5) {
                *puVar2 = uVar11 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar11 - 1 == 0) {
              (**(code **)(*plVar10 + 8))();
            }
          }
        }
        func_0x000109d1a1d0(puVar8 + 2);
        __ZdlPv(puVar8);
      }
      if (plVar14 != (long *)0x0) {
LAB_10a375210:
        puVar2 = (ulong *)(plVar14 + 1);
        do {
          uVar11 = *puVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = uVar11 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar11 & 0x1fffffffc) == 4) {
          do {
            uVar11 = *puVar2 - 1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar11;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          goto LAB_10a375240;
        }
      }
LAB_10a375254:
      if ((3 < iStack_70) && (puStack_68 != (undefined8 *)0x0)) {
        (**(code **)*puStack_68)();
      }
      if ((3 < iStack_88) && (puStack_80 != (undefined8 *)0x0)) {
        (**(code **)*puStack_80)();
      }
      plVar14 = (long *)0x0;
      goto LAB_10a375298;
    }
    plVar14 = (long *)*plVar10;
    *plVar10 = 0;
    if (((uint)plVar14[2] >> 5 & 1) != 0) {
      __ZNSt13exception_ptrC1ERKS_(&uStack_a8,plVar14 + 0x12);
      FUN_10a3759e4(&uStack_78,&uStack_a8);
      __ZNSt13exception_ptrD1Ev(&uStack_a8);
LAB_10a374e5c:
      puVar2 = (ulong *)(plVar14 + 1);
      do {
        uVar11 = *puVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar11 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar11 & 0x1fffffffc) == 4) {
        do {
          uVar11 = *puVar2 - 1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = uVar11;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
LAB_10a375240:
        if (uVar11 == 0) {
          (**(code **)(*plVar14 + 8))(plVar14);
        }
      }
      goto LAB_10a375254;
    }
    if ((((uint)plVar14[2] >> 1 & 1) != 0) && (((uint)plVar14[2] >> 5 & 1) == 0)) {
      if ((*(byte *)(plVar14 + 0x15) & 1) == 0) goto LAB_10a3753dc;
      FUN_10a3757e0(&uStack_90,plVar14 + 0x13);
      goto LAB_10a374e5c;
    }
  }
  if (((uint)plVar14[2] >> 5 & 1) == 0) {
    puVar8 = (undefined8 *)0x10;
    ___cxa_allocate_exception();
    __ZNSt13runtime_errorC2EPKc();
    *puVar8 = &PTR_DAT_110ae85c0;
    ___cxa_throw(puVar8,&PTR_DAT_110ae8598,&DAT_1092af9d8);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&uStack_a8,plVar14 + 0x12);
    func_0x0001092af97c(&uStack_a8);
  }
LAB_10a3753dc:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a3753e0);
  (*pcVar7)();
}



/* Entry: 10a37564c; end: 10a37577f;  */

void FUN_10a37564c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puStack_68;
  long *plStack_60;
  int iStack_58;
  undefined8 *puStack_50;
  undefined1 auStack_48 [8];
  int iStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_3;
  uStack_28 = param_4;
  (**(code **)(*param_2 + 0x30))(&puStack_68,param_2);
  puStack_50 = puStack_68;
  puStack_68 = (undefined8 *)0x0;
  iStack_58 = 7;
  plStack_60 = param_2;
  FUN_10a055e1c(auStack_48,&plStack_60,&DAT_10f685520);
  FUN_10a055f9c(param_1,auStack_48,&uStack_30);
  if ((3 < iStack_40) && (puStack_38 != (undefined8 *)0x0)) {
    (**(code **)*puStack_38)();
  }
  if ((3 < iStack_58) && (puStack_50 != (undefined8 *)0x0)) {
    (**(code **)*puStack_50)();
  }
  if (puStack_68 != (undefined8 *)0x0) {
    (**(code **)*puStack_68)();
  }
  return;
}



/* Entry: 10a375780; end: 10a3757df;  */

long FUN_10a375780(long param_1)

{
  if ((3 < *(int *)(param_1 + 0x20)) && (*(undefined8 **)(param_1 + 0x28) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x28))();
  }
  if ((3 < *(int *)(param_1 + 8)) && (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x10))();
  }
  return param_1;
}



/* Entry: 10a3757e0; end: 10a3759e3;  */

void FUN_10a3757e0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar6 = (long *)*param_1;
  plStack_58 = (long *)param_2[1];
  ppuStack_60 = (undefined8 **)*param_2;
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
  ppuStack_40 = &PTR_DAT_110c5ef50;
  func_0x000109899de4(&puStack_70,plVar6,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar6 + 0x58))(plVar6);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar6;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a3759e4; end: 10a375b37;  */

void FUN_10a3759e4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  
  func_0x0001092af97c(param_2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a375a0c);
  (*pcVar1)();
}



/* Entry: 10a375b38; end: 10a3760c3;  */

void FUN_10a375b38(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  puVar6 = (undefined8 *)0xb0;
  __Znwm();
  *puVar6 = FUN_10a389648;
  puVar6[1] = FUN_10a389a54;
  uVar9 = *param_2;
  *param_2 = 0;
  puVar6[9] = *param_3;
  puVar6[0x10] = uVar9;
  iVar2 = *(int *)(param_3 + 1);
  *(int *)(puVar6 + 10) = iVar2;
  if (iVar2 == 3) {
    puVar6[0xb] = param_3[2];
  }
  else if (iVar2 == 2) {
    *(undefined1 *)(puVar6 + 0xb) = *(undefined1 *)(param_3 + 2);
  }
  else if (3 < iVar2) {
    puVar6[0xb] = param_3[2];
    param_3[2] = 0;
  }
  *(undefined4 *)(param_3 + 1) = 0;
  puVar6[0xc] = param_3[3];
  iVar2 = *(int *)(param_3 + 4);
  *(int *)(puVar6 + 0xd) = iVar2;
  if (iVar2 == 3) {
    puVar6[0xe] = param_3[5];
  }
  else if (iVar2 == 2) {
    *(undefined1 *)(puVar6 + 0xe) = *(undefined1 *)(param_3 + 5);
  }
  else if (3 < iVar2) {
    puVar6[0xe] = param_3[5];
    param_3[5] = 0;
  }
  *(undefined4 *)(param_3 + 4) = 0;
  func_0x0001092ba17c(puVar6 + 2);
  lVar10 = puVar6[7];
  if (lVar10 != 0) {
    plVar8 = (long *)(lVar10 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = lVar10;
  puVar6[0x12] = 0;
  *(undefined1 *)(puVar6 + 0x15) = 0;
  puVar7 = puVar6 + 0x12;
  FUN_10a057268(puVar7,puVar6);
  if (((ulong)puVar7 & 1) == 0) {
    puVar6[0x11] = puVar6[0x12];
    FUN_10a37616c(puVar6 + 0x13,puVar6 + 0x11,puVar6[0x10]);
    puVar6[0x12] = puVar6[0x13];
    plVar8 = (long *)(puVar6[0x13] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(puVar6[0x12] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar6 + 0x15) = 1;
      lVar10 = puVar6[0x12];
      plVar8 = (long *)(lVar10 + 0x10);
      uStack_48 = puVar6[3];
      do {
        lVar12 = *plVar8;
        if (lVar12 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            uStack_58 = 0;
            puStack_50 = puVar6;
            func_0x000109d1b588(lVar10 + 0x18,&uStack_58);
            *(undefined8 *)(lVar10 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar12 >> 1 & 1) == 0);
    }
    plVar8 = (long *)puVar6[0x12];
    if (plVar8 != (long *)0x0) {
      puVar1 = (ulong *)(plVar8 + 1);
      do {
        uVar11 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar11 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar11 & 0x1fffffffc) == 4) {
        do {
          uVar11 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar11 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar11 - 1 == 0) {
          (**(code **)(*plVar8 + 8))();
        }
      }
    }
    plVar8 = (long *)puVar6[0x13];
    if (plVar8 != (long *)0x0) {
      puVar1 = (ulong *)(plVar8 + 1);
      do {
        uVar11 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar11 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar11 & 0x1fffffffc) == 4) {
        do {
          uVar11 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar11 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar11 - 1 == 0) {
          (**(code **)(*plVar8 + 8))();
        }
      }
    }
    if (((uint)*(undefined8 *)(puVar6[0x11] + 0x10) >> 1 & 1) == 0) {
      lVar10 = puVar6[0x10];
      puVar6[0x14] = lVar10;
      puVar6[0x10] = 0;
      if (((uint)*(undefined8 *)(lVar10 + 0x10) >> 5 & 1) == 0) {
        func_0x0001092af8bc(puVar6 + 0x14);
        if ((*(byte *)(puVar6[0x14] + 0xa8) & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a375f80);
          (*pcVar5)();
        }
        FUN_10a3757e0(puVar6 + 9,puVar6[0x14] + 0x98);
      }
      else {
        __ZNSt13exception_ptrC1ERKS_(&uStack_58,puVar6[0x14] + 0x90);
        FUN_10a3759e4(puVar6 + 0xc,&uStack_58);
        __ZNSt13exception_ptrD1Ev(&uStack_58);
      }
      plVar8 = (long *)puVar6[0x14];
      if (plVar8 != (long *)0x0) {
        puVar1 = (ulong *)(plVar8 + 1);
        do {
          uVar11 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar11 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar11 & 0x1fffffffc) == 4) {
          do {
            uVar11 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar11 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar11 - 1 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
      }
    }
    func_0x0001092ba100(puVar6 + 2);
    plVar8 = (long *)puVar6[0x11];
    if (plVar8 != (long *)0x0) {
      puVar1 = (ulong *)(plVar8 + 1);
      do {
        uVar11 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar11 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar11 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        do {
          uVar11 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar11 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar11 - 1 == 0) {
          (**(code **)(*plVar8 + 8))(plVar8);
        }
      }
    }
    func_0x000109d1a1d0(puVar6 + 2);
    if ((3 < *(int *)(puVar6 + 0xd)) && ((undefined8 *)puVar6[0xe] != (undefined8 *)0x0)) {
      (*(code *)**(undefined8 **)puVar6[0xe])();
    }
    if ((3 < *(int *)(puVar6 + 10)) && ((undefined8 *)puVar6[0xb] != (undefined8 *)0x0)) {
      (*(code *)**(undefined8 **)puVar6[0xb])();
    }
    plVar8 = (long *)puVar6[0x10];
    if (plVar8 != (long *)0x0) {
      puVar1 = (ulong *)(plVar8 + 1);
      do {
        uVar11 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar11 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar11 & 0x1fffffffc) == 4) {
        do {
          uVar11 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar11 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar11 - 1 == 0) {
          (**(code **)(*plVar8 + 8))();
        }
      }
    }
    __ZdlPv(puVar6);
  }
  return;
}



/* Entry: 10a3760c4; end: 10a37616b;  */

long * FUN_10a3760c4(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if ((3 < (int)param_1[5]) && ((undefined8 *)param_1[6] != (undefined8 *)0x0)) {
    (*(code *)**(undefined8 **)param_1[6])();
  }
  if ((3 < (int)param_1[2]) && ((undefined8 *)param_1[3] != (undefined8 *)0x0)) {
    (*(code *)**(undefined8 **)param_1[3])();
  }
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
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
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  return param_1;
}



/* Entry: 10a37616c; end: 10a3766ef;  */

/* WARNING: Removing unreachable block (ram,0x00010a3762c4) */
/* WARNING: Removing unreachable block (ram,0x00010a3764d4) */
/* WARNING: Removing unreachable block (ram,0x00010a376284) */
/* WARNING: Removing unreachable block (ram,0x00010a376418) */

void FUN_10a37616c(long *param_1,long *param_2,long param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_80;
  long lStack_78;
  long *plStack_70;
  code *pcStack_68;
  long *plStack_60;
  undefined **ppuStack_58;
  
  if (param_3 != 0) {
    plVar9 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar4 = (long *)0x118;
  __Znwm();
  plVar4[2] = 0;
  plVar4[1] = 0x200000006;
  *(undefined2 *)(plVar4 + 3) = 4;
  plVar4[5] = 0;
  plVar4[4] = 0;
  plVar4[7] = 0;
  plVar4[6] = 0;
  plVar4[9] = 0;
  plVar4[8] = 0;
  plVar4[0xb] = 0;
  plVar4[10] = 0;
  plVar4[0xd] = 0;
  plVar4[0xc] = 0;
  plVar4[0xf] = 0;
  plVar4[0xe] = 0;
  plVar4[0x10] = 0;
  plVar4[0x11] = (long)(plVar4 + 3);
  plVar4[0x12] = 0;
  *(undefined1 *)(plVar4 + 0x13) = 0;
  *(undefined1 *)(plVar4 + 0x15) = 0;
  *plVar4 = (long)&PTR_FUN_110bc7330;
  plVar10 = plVar4 + 0x16;
  *plVar10 = param_3;
  plVar9 = (long *)(*param_2 + 8);
  plVar4[0x17] = *param_2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *plVar9 = *plVar9 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar4[0x1a] = 0;
  plVar4[0x1b] = 0x32aaaba7;
  plVar4[0x1d] = 0;
  plVar4[0x1c] = 0;
  plVar4[0x1f] = 0;
  plVar4[0x1e] = 0;
  plVar4[0x21] = 0;
  plVar4[0x20] = 0;
  plVar4[0x22] = 0;
  lStack_78 = 0;
  plVar4[0x18] = (long)plVar4;
  plVar4[0x19] = 0;
  plStack_70 = plVar10;
  if (((uint)*(undefined8 *)(plVar4[0x17] + 0x10) >> 1 & 1) == 0) {
    __ZNSt3__15mutex4lockEv(plVar4 + 0x1b);
    lVar8 = *plVar10;
    plVar9 = (long *)(lVar8 + 0x10);
    do {
      lVar6 = *plVar9;
      if (lVar6 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar6 = lVar8 + 0x18;
          pcStack_68 = FUN_10a3766f0;
          ppuStack_58 = &PTR_PTR_1132fed68;
          plStack_60 = plVar10;
          func_0x000109d1b588(lVar6,&pcStack_68);
          *(undefined8 *)(lVar8 + 0x10) = 0;
          plStack_70[3] = lVar6;
          lVar8 = plVar4[0x17];
          plVar9 = (long *)(lVar8 + 0x10);
          goto LAB_10a376404;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar6 >> 1 & 1) == 0);
    plStack_70[3] = 0;
    lVar8 = plVar4[0x18];
    plVar9 = (long *)(lVar8 + 0x10);
    do {
      lVar6 = *plVar9;
      if (lVar6 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = 2;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          func_0x000109d1b4dc(lVar8 + 0x18);
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar6 >> 1 & 1) == 0);
    plVar9 = (long *)plVar4[0x17];
    plVar4[0x17] = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
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
        (**(code **)(*plVar9 + 0x10))(plVar9);
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
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
    lVar8 = plVar4[0x18];
    plVar4[0x18] = 0;
    if (lVar8 != 0) {
      func_0x0001092b4274(plVar4 + 0x18);
    }
    *param_1 = *plVar10;
    *plVar10 = 0;
    plStack_80 = plVar4;
LAB_10a376644:
    __ZNSt3__15mutex6unlockEv(plVar4 + 0x1b);
  }
  else {
    lVar8 = plVar4[0x18];
    plVar9 = plVar4;
    FUN_109d1857c();
    func_0x000109d1b350(lVar8,plVar9);
    plVar9 = (long *)*plVar10;
    *plVar10 = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
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
          (**(code **)(*plVar9 + 8))();
        }
      }
    }
    plVar9 = (long *)plVar4[0x17];
    plVar4[0x17] = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
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
        (**(code **)(*plVar9 + 0x10))(plVar9);
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
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
    lVar8 = plVar4[0x18];
    plVar4[0x18] = 0;
    if (lVar8 != 0) {
      func_0x0001092b4274(plVar4 + 0x18);
    }
    *param_1 = (long)plVar4;
    plStack_80 = (long *)0x0;
  }
  if (lStack_78 != 0) {
    func_0x0001092b4274(&lStack_78);
  }
  if (plStack_80 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_80 + 1);
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
        (**(code **)(*plStack_80 + 8))();
      }
    }
  }
  return;
LAB_10a376404:
  do {
    lVar7 = *plVar9;
    if (lVar7 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar6 = lVar8 + 0x18;
        pcStack_68 = FUN_10a37688c;
        ppuStack_58 = &PTR_PTR_1132fed68;
        plStack_60 = plVar10;
        func_0x000109d1b588(lVar6,&pcStack_68);
        *(undefined8 *)(lVar8 + 0x10) = 0;
        plStack_70[4] = lVar6;
        *param_1 = (long)plVar4;
        goto LAB_10a376640;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  } while (((uint)lVar7 >> 1 & 1) == 0);
  plStack_70[4] = 0;
  lVar8 = plVar4[0x18];
  FUN_109d1857c();
  func_0x000109d1b350(lVar8,lVar6);
  plVar9 = (long *)plVar4[0x17];
  plVar4[0x17] = 0;
  if (plVar9 != (long *)0x0) {
    puVar1 = (ulong *)(plVar9 + 1);
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
      (**(code **)(*plVar9 + 0x10))(plVar9);
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
        (**(code **)(*plVar9 + 8))(plVar9);
      }
    }
  }
  lVar6 = *plVar10;
  plVar9 = (long *)(lVar6 + 0x10);
  lVar8 = plStack_70[3];
  while (lVar7 = *plVar9, lVar7 != 0) {
    ClearExclusiveLocal();
LAB_10a3764e8:
    if (((uint)lVar7 >> 1 & 1) != 0) goto LAB_10a376638;
  }
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar3) {
    *plVar9 = 1;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 != '\0') goto LAB_10a3764e8;
  pcStack_68 = FUN_10a3766f0;
  ppuStack_58 = &PTR_PTR_1132fed68;
  plStack_60 = plVar10;
  FUN_109d1b624(lVar6 + 0x18,&pcStack_68,lVar8);
  *(undefined8 *)(lVar6 + 0x10) = 0;
  plStack_70[3] = 0;
  plVar9 = (long *)*plVar10;
  *plVar10 = 0;
  if (plVar9 != (long *)0x0) {
    puVar1 = (ulong *)(plVar9 + 1);
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
        (**(code **)(*plVar9 + 8))();
      }
    }
  }
  lVar8 = plVar4[0x18];
  plVar4[0x18] = 0;
  if (lVar8 != 0) {
    func_0x0001092b4274(plVar4 + 0x18);
  }
LAB_10a376638:
  *param_1 = (long)plVar4;
LAB_10a376640:
  plStack_80 = (long *)0x0;
  goto LAB_10a376644;
}



/* Entry: 10a3766f0; end: 10a37688b;  */

void FUN_10a3766f0(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  code *pcStack_48;
  long *plStack_40;
  undefined **ppuStack_38;
  
  __ZNSt3__15mutex4lockEv(param_1 + 5);
  pcStack_48 = FUN_10a37688c;
  ppuStack_38 = &PTR_PTR_1132fed68;
  plStack_40 = param_1;
  func_0x0001092ba560(param_1 + 1,param_1 + 4,&pcStack_48);
  lVar8 = param_1[2];
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 5 & 1) == 0) {
    func_0x0001092af8bc(param_1);
    lVar9 = *param_1;
    if ((*(byte *)(lVar9 + 0xa8) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a376888);
      (*pcVar4)();
    }
    plVar5 = (long *)(lVar8 + 0x10);
    do {
      lVar7 = *plVar5;
      if (lVar7 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          if (*(char *)(lVar8 + 0xa8) == '\x01') {
            func_0x00010a1f6f04(lVar8 + 0x98);
            *(undefined1 *)(lVar8 + 0xa8) = 0;
          }
          lVar7 = *(long *)(lVar9 + 0xa0);
          uVar10 = *(undefined8 *)(lVar9 + 0x98);
          *(undefined8 *)(lVar8 + 0xa0) = *(undefined8 *)(lVar9 + 0xa0);
          *(undefined8 *)(lVar8 + 0x98) = uVar10;
          if (lVar7 != 0) {
            plVar5 = (long *)(lVar7 + 8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar3) {
                *plVar5 = *plVar5 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          *(undefined1 *)(lVar8 + 0xa8) = 1;
          *(undefined8 *)(lVar8 + 0x10) = 2;
          FUN_109d1b4dc(lVar8 + 0x18);
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar7 >> 1 & 1) == 0);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&pcStack_48,*param_1 + 0x90);
    func_0x000109d1b350(lVar8,&pcStack_48);
    __ZNSt13exception_ptrD1Ev(&pcStack_48);
  }
  plVar5 = (long *)*param_1;
  *param_1 = 0;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
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
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  FUN_10a376c2c(param_1,param_1 + 3);
  return;
}



/* Entry: 10a37688c; end: 10a37696b;  */

void FUN_10a37688c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  code *pcStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x28);
  pcStack_48 = FUN_10a3766f0;
  ppuStack_38 = &PTR_PTR_1132fed68;
  lVar4 = param_1;
  lStack_40 = param_1;
  func_0x0001098adf90(param_1,param_1 + 0x18,&pcStack_48);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  FUN_109d1857c();
  func_0x000109d1b350(uVar6,lVar4);
  plVar7 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar7 != (long *)0x0) {
    puVar1 = (ulong *)(plVar7 + 1);
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
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
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  FUN_10a376c2c(param_1,param_1 + 0x20);
  return;
}



/* Entry: 10a37696c; end: 10a3769df;  */

long * FUN_10a37696c(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (param_1[1] != 0) {
    func_0x0001092b4274();
  }
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
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
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  return param_1;
}



/* Entry: 10a3769e0; end: 10a376c2b;  */

undefined8 * FUN_10a3769e0(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_110bc7330;
  __ZNSt3__15mutexD1Ev(param_1 + 0x1b);
  if (param_1[0x18] != 0) {
    func_0x0001092b4274();
  }
  plVar5 = (long *)param_1[0x17];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  plVar5 = (long *)param_1[0x16];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  *param_1 = &PTR_FUN_110bc5f30;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    func_0x00010a1f6f04(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a376c2c; end: 10a376c9b;  */

void FUN_10a376c2c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lStack_28;
  
  *param_2 = 0;
  if ((*(long *)(param_1 + 0x18) == 0) && (*(long *)(param_1 + 0x20) == 0)) {
    lVar1 = *(long *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    __ZNSt3__15mutex6unlockEv(param_1 + 0x28);
    lStack_28 = 0;
    if (lVar1 != 0) {
      func_0x0001092b4274(&lStack_28,lVar1);
      if (lStack_28 != 0) {
        func_0x0001092b4274(&lStack_28);
      }
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x28);
  return;
}



/* Entry: 10a376c9c; end: 10a376cb7;  */

void FUN_10a376c9c(void)

{
  return;
}



/* Entry: 10a376cb8; end: 10a376e67;  */

void FUN_10a376cb8(undefined8 param_1,undefined8 param_2,undefined1 param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_60;
  long *plStack_58;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined1 uStack_31;
  
  FUN_10ac5fb74(&lStack_60,*(undefined8 *)(param_4 + 0x10),param_1,0x1b);
  *(undefined1 *)(lStack_60 + 0x288) = param_3;
  FUN_10a376e68(auStack_48,*(undefined8 *)(param_4 + 0x10),&lStack_60);
  uStack_31 = 0;
  FUN_10a284d60(*(long *)(*(long *)(param_4 + 0x10) + 0xc48) + 0x38,lStack_60 + 0x290,
                lStack_60 + 0x290,&uStack_31);
  FUN_10a00bca8(*(undefined8 *)(param_4 + 0x18),auStack_48);
  if (plStack_40 != (long *)0x0) {
    plVar1 = plStack_40 + 1;
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
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
    }
  }
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  return;
}



/* Entry: 10a376e68; end: 10a376fbf;  */

undefined8 ** FUN_10a376e68(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 **ppuVar1;
  char cVar2;
  bool bVar3;
  undefined8 **ppuVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 **ppuVar7;
  int iVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puStack_9b8;
  undefined8 uStack_9b0;
  undefined1 uStack_9a8;
  undefined *puStack_9a0;
  undefined8 uStack_998;
  undefined1 uStack_990;
  undefined **ppuStack_988;
  undefined *puStack_980;
  undefined *puStack_978;
  ulong uStack_970;
  ulong uStack_968;
  ulong uStack_960;
  undefined4 uStack_958;
  undefined **ppuStack_950;
  undefined *puStack_948;
  undefined8 uStack_940;
  undefined1 uStack_938;
  undefined *puStack_930;
  undefined8 uStack_928;
  undefined1 uStack_920;
  int iStack_918;
  undefined1 auStack_910 [1024];
  undefined1 auStack_510 [1024];
  long lStack_110;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 **ppuStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 **ppuStack_78;
  undefined1 auStack_70 [8];
  undefined8 *apuStack_68 [8];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_88 = param_2;
  if (param_2 == 0) {
    uStack_a0 = 0;
    FUN_10a24402c(&uStack_80,&uStack_a0,param_3);
    param_1[1] = ppuStack_78;
    *param_1 = uStack_80;
    if (ppuStack_78 != (undefined8 **)0x0) {
      ppuVar7 = ppuStack_78 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
        if (bVar3) {
          *ppuVar7 = (undefined8 *)((long)*ppuVar7 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a044790(auStack_70);
    ppuVar7 = apuStack_68;
    (*(code *)*apuStack_68[0])();
    if (ppuStack_78 == (undefined8 **)0x0) goto LAB_10a376f78;
    ppuVar1 = ppuStack_78 + 1;
    do {
      puVar11 = *ppuVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar3) {
        *ppuVar1 = (undefined8 *)((long)puVar11 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      ppuVar4 = ppuStack_78;
    } while (cVar2 != '\0');
  }
  else {
    puStack_98 = *(undefined8 **)(param_2 + 0x858);
    ppuStack_90 = *(undefined8 ***)(param_2 + 0x860);
    if (ppuStack_90 != (undefined8 **)0x0) {
      ppuVar7 = ppuStack_90 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
        if (bVar3) {
          *ppuVar7 = (undefined8 *)((long)*ppuVar7 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppuVar7 = &puStack_98;
    FUN_10a377014(param_1,ppuVar7,&lStack_88);
    if (ppuStack_90 == (undefined8 **)0x0) goto LAB_10a376f78;
    ppuVar1 = ppuStack_90 + 1;
    do {
      puVar11 = *ppuVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar3) {
        *ppuVar1 = (undefined8 *)((long)puVar11 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      ppuVar4 = ppuStack_90;
    } while (cVar2 != '\0');
  }
  if (puVar11 == (undefined8 *)0x0) {
    (*(code *)(*ppuVar4)[2])(ppuVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    ppuVar7 = ppuVar4;
  }
LAB_10a376f78:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return ppuVar7;
  }
  ___stack_chk_fail();
  __Unwind_Resume(ppuVar7);
  FUN_10ae030a0(0,ppuVar7);
  ppuVar10 = &PTR_PTR_113301760;
  ppuVar9 = ppuVar10;
  FUN_10ae079a0();
  FUN_10ae030d8();
  lStack_110 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = (undefined8 **)0x0;
  if (ppuVar9 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_948,auStack_510,0x400,auStack_910,0x400,ppuVar9[0x13],ppuVar9[0xf],
                  ppuVar9 + 0x14,0x400);
    puStack_9b8 = puStack_930;
    uStack_9b0 = uStack_928;
    puStack_9a0 = puStack_948;
    uStack_998 = uStack_940;
    uStack_9a8 = uStack_920;
    if (iStack_918 != 0) {
      puStack_9b8 = &UNK_10f6c352e;
      uStack_9b0 = 0x10;
      puStack_9a0 = &UNK_10f6c352e;
      uStack_998 = 0x10;
      uStack_9a8 = 0;
      uStack_938 = 0;
    }
    puVar13 = ppuVar9[0x12];
    puVar12 = ppuVar9[0xb];
    uVar5 = 0;
    _clock_gettime_nsec_np();
    uVar6 = uVar5;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_988 = ppuVar9 + 1;
    uStack_958 = *(undefined4 *)(ppuVar9 + 0xe);
    uStack_960 = uVar6 & 0xffffffff;
    ppuStack_950 = ppuVar9 + 0x10;
    ppuVar7 = (undefined8 **)*ppuVar9;
    ppuVar10 = (undefined **)&ppuStack_988;
    uStack_990 = uStack_938;
    puStack_980 = puVar12;
    puStack_978 = puVar13;
    uStack_970 = (ulong)(puVar13 != (undefined *)0x0);
    uStack_968 = uVar5;
    FUN_10ae0784c(ppuVar7,ppuVar10,&puStack_9a0,&puStack_9b8);
  }
  iVar8 = (int)ppuVar10;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_110) {
    ___stack_chk_fail();
    if (iVar8 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(ppuVar7);
    return ppuVar7;
  }
  return ppuVar7;
}



/* Entry: 10a376fc0; end: 10a377013;  */

undefined * FUN_10a376fc0(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined **ppuStack_8e8;
  undefined *puStack_8e0;
  undefined *puStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  undefined **ppuStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined1 uStack_880;
  int iStack_878;
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [1024];
  long lStack_70;
  
  FUN_10ae030a0(0,param_1);
  ppuVar6 = &PTR_PTR_113301760;
  ppuVar5 = ppuVar6;
  FUN_10ae079a0();
  FUN_10ae030d8();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined *)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar5[0x13],ppuVar5[0xf],
                  ppuVar5 + 0x14,0x400);
    puStack_918 = puStack_890;
    uStack_910 = uStack_888;
    puStack_900 = puStack_8a8;
    uStack_8f8 = uStack_8a0;
    uStack_908 = uStack_880;
    if (iStack_878 != 0) {
      puStack_918 = &UNK_10f6c352e;
      uStack_910 = 0x10;
      puStack_900 = &UNK_10f6c352e;
      uStack_8f8 = 0x10;
      uStack_908 = 0;
      uStack_898 = 0;
    }
    puVar8 = ppuVar5[0x12];
    puVar7 = ppuVar5[0xb];
    uVar1 = 0;
    _clock_gettime_nsec_np();
    uVar2 = uVar1;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar5 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar5 + 0xe);
    uStack_8c0 = uVar2 & 0xffffffff;
    ppuStack_8b0 = ppuVar5 + 0x10;
    puVar3 = *ppuVar5;
    ppuVar6 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar7;
    puStack_8d8 = puVar8;
    uStack_8d0 = (ulong)(puVar8 != (undefined *)0x0);
    uStack_8c8 = uVar1;
    FUN_10ae0784c(puVar3,ppuVar6,&puStack_900,&puStack_918);
  }
  iVar4 = (int)ppuVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar4 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar3);
    return puVar3;
  }
  return puVar3;
}



/* Entry: 10a377014; end: 10a3771fb;  */

void FUN_10a377014(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  undefined1 auStack_50 [8];
  long *plStack_48;
  
  FUN_10a3771fc(param_3,param_4);
  lStack_60 = *param_2;
  plStack_58 = (long *)param_2[1];
  lStack_70 = lStack_60;
  plStack_68 = plStack_58;
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
    plVar1 = plStack_58 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
  }
  FUN_10a05b208(auStack_50,param_3,&lStack_60);
  FUN_10a05b04c(param_1,auStack_50);
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  if (plStack_58 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar1 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar2 = plStack_68 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  lVar5 = *param_2;
  if ((lVar5 != 0) && (lStack_80 = *param_1, lStack_80 != 0)) {
    plStack_78 = (long *)param_1[1];
    if (plStack_78 != (long *)0x0) {
      plVar1 = plStack_78 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10aa88c30(lVar5,&lStack_80);
    plVar1 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar2 = plStack_78 + 1;
      do {
        lVar5 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  return;
}



/* Entry: 10a3771fc; end: 10a3772cf;  */

undefined8 FUN_10a3771fc(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar4 = 0x2a8;
  puVar6 = param_2;
  __Znwm(0x2a8);
  uVar9 = *param_1;
  plVar8 = (long *)param_2[1];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
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
  uVar5 = uVar4;
  func_0x00010a0fda30();
  FUN_10ab6a888(uVar4,uVar9,&uStack_40,uVar5,puVar6);
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
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
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  return uVar4;
}



/* Entry: 10a3772d0; end: 10a3772f7;  */

long FUN_10a3772d0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010a07a8a8(param_1 + 0x20);
  plVar5 = *(long **)(param_1 + 0x18);
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
  return param_1 + 0x10;
}



/* Entry: 10a3772f8; end: 10a3773af;  */

void FUN_10a3772f8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110bc7370;
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar5;
  lVar4 = *(long *)(param_2 + 0x18);
  param_1[3] = lVar4;
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
  lVar4 = *(long *)(param_2 + 0x28);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[4] = uVar5;
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
  return;
}



/* Entry: 10a3773b0; end: 10a37757f;  */

void FUN_10a3773b0(int *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lStack_48;
  long *plStack_40;
  char cStack_31;
  
  if (*param_1 == 1) {
    uVar5 = *(undefined8 *)(param_2 + 0x10);
    lStack_48 = *(long *)(param_1 + 2);
    if (lStack_48 == 0) {
      lStack_48 = 0;
      plStack_40 = (long *)0x0;
    }
    else {
      plStack_40 = *(long **)(param_1 + 4);
      if (plStack_40 != (long *)0x0) {
        plVar1 = plStack_40 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    FUN_10a00bca8(uVar5,&lStack_48);
    plVar1 = plStack_40;
    if (plStack_40 != (long *)0x0) {
      plVar2 = plStack_40 + 1;
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
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  else {
    puVar7 = *(undefined8 **)(param_2 + 0x20);
    func_0x000107c2b054(&lStack_48,&UNK_10f65170d);
    if (puVar7 == (undefined8 *)0x0 || *(char *)(puVar7 + 8) != '\x02') {
      if ((puVar7 != (undefined8 *)0x0) && (*(char *)(puVar7 + 8) == '\x01')) {
        (*(code *)*puVar7)(&lStack_48,puVar7);
      }
    }
    else {
      FUN_10a05aad0(puVar7,&lStack_48);
    }
    if (cStack_31 < '\0') {
      __ZdlPv(lStack_48);
    }
  }
  return;
}



/* Entry: 10a377580; end: 10a3775d3;  */

undefined * FUN_10a377580(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined **ppuStack_8e8;
  undefined *puStack_8e0;
  undefined *puStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  undefined **ppuStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined1 uStack_880;
  int iStack_878;
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [1024];
  long lStack_70;
  
  FUN_10ae030a0(0,param_1);
  ppuVar6 = &PTR_PTR_113301790;
  ppuVar5 = ppuVar6;
  FUN_10ae079a0();
  FUN_10ae030d8();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined *)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar5[0x13],ppuVar5[0xf],
                  ppuVar5 + 0x14,0x400);
    puStack_918 = puStack_890;
    uStack_910 = uStack_888;
    puStack_900 = puStack_8a8;
    uStack_8f8 = uStack_8a0;
    uStack_908 = uStack_880;
    if (iStack_878 != 0) {
      puStack_918 = &UNK_10f6c352e;
      uStack_910 = 0x10;
      puStack_900 = &UNK_10f6c352e;
      uStack_8f8 = 0x10;
      uStack_908 = 0;
      uStack_898 = 0;
    }
    puVar8 = ppuVar5[0x12];
    puVar7 = ppuVar5[0xb];
    uVar1 = 0;
    _clock_gettime_nsec_np();
    uVar2 = uVar1;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar5 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar5 + 0xe);
    uStack_8c0 = uVar2 & 0xffffffff;
    ppuStack_8b0 = ppuVar5 + 0x10;
    puVar3 = *ppuVar5;
    ppuVar6 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar7;
    puStack_8d8 = puVar8;
    uStack_8d0 = (ulong)(puVar8 != (undefined *)0x0);
    uStack_8c8 = uVar1;
    FUN_10ae0784c(puVar3,ppuVar6,&puStack_900,&puStack_918);
  }
  iVar4 = (int)ppuVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar4 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar3);
    return puVar3;
  }
  return puVar3;
}



/* Entry: 10a3775d4; end: 10a3775fb;  */

long FUN_10a3775d4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010a07a8a8(param_1 + 0x18);
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10a3775fc; end: 10a3776ab;  */

void FUN_10a3775fc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110bc7390;
  lVar4 = *(long *)(param_2 + 0x10);
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar5;
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
  lVar4 = *(long *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar5;
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
  return;
}



/* Entry: 10a3776ac; end: 10a377e43;  */

/* WARNING: Removing unreachable block (ram,0x00010a377de4) */

void FUN_10a3776ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined ******ppppppuVar4;
  undefined ******ppppppuVar5;
  undefined ******ppppppuVar6;
  undefined ******ppppppuVar7;
  undefined ******ppppppuVar8;
  undefined *****pppppuVar9;
  undefined *****pppppuVar10;
  undefined ******ppppppuVar11;
  long lVar12;
  undefined ******ppppppuVar13;
  undefined *****pppppuStack_100;
  undefined *****pppppuStack_f8;
  undefined *****pppppuStack_f0;
  undefined *****pppppuStack_e8;
  undefined *****pppppuStack_e0;
  undefined *****pppppuStack_d8;
  undefined *****pppppuStack_d0;
  undefined *****pppppuStack_c8;
  undefined *****pppppuStack_c0;
  undefined *****pppppuStack_b8;
  undefined *****pppppuStack_b0;
  undefined *****pppppuStack_a8;
  undefined *****pppppuStack_a0;
  undefined *****pppppuStack_98;
  undefined ****ppppuStack_88;
  undefined ****ppppuStack_80;
  undefined ****ppppuStack_78;
  undefined ****ppppuStack_70;
  undefined *****pppppuStack_68;
  undefined *****pppppuStack_60;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a377e98(&pppppuStack_f0,&pppppuStack_b0,param_4 + 0x10,param_1);
  pppppuVar10 = pppppuStack_e8;
  lVar12 = *(long *)(param_4 + 0x10);
  if (lVar12 == 0) {
    ppppppuVar11 = (undefined ******)0x150;
    __Znwm();
    ppppppuVar11[1] = (undefined *****)0x0;
    ppppppuVar11[2] = (undefined *****)0x0;
    *ppppppuVar11 = (undefined *****)&PTR_DAT_110bc85c8;
    ppppppuVar7 = ppppppuVar11 + 3;
    pppppuStack_a8 = pppppuVar10;
    pppppuStack_b0 = pppppuStack_f0;
    if ((undefined ******)pppppuVar10 != (undefined ******)0x0) {
      ppppppuVar13 = (undefined ******)(pppppuVar10 + 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar13,0x10);
        if (bVar2) {
          *ppppppuVar13 = (undefined *****)((long)*ppppppuVar13 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_10a3781a0(ppppppuVar7,0,&pppppuStack_b0);
    ppppppuVar13 = (undefined ******)pppppuStack_a8;
    if ((undefined ******)pppppuStack_a8 != (undefined ******)0x0) {
      ppppppuVar4 = (undefined ******)(pppppuStack_a8 + 1);
      do {
        pppppuVar10 = *ppppppuVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar4,0x10);
        if (bVar2) {
          *ppppppuVar4 = (undefined *****)((long)pppppuVar10 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (pppppuVar10 == (undefined *****)0x0) {
        (*(code *)(*pppppuStack_a8)[2])(pppppuStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar13);
      }
    }
    ppppppuVar4 = ppppppuVar11 + 8;
    pppppuStack_c0 = (undefined *****)ppppppuVar7;
    pppppuStack_b8 = (undefined *****)ppppppuVar11;
    FUN_10a3782dc(&pppppuStack_c0,ppppppuVar4,ppppppuVar7);
    ppppppuVar7 = &pppppuStack_c0;
    FUN_10a37803c(&pppppuStack_100);
    if ((undefined ******)pppppuStack_b8 != (undefined ******)0x0) {
      ppppppuVar11 = (undefined ******)(pppppuStack_b8 + 1);
      do {
        pppppuVar10 = *ppppppuVar11;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar11,0x10);
        if (bVar2) {
          *ppppppuVar11 = (undefined *****)((long)pppppuVar10 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
        ppppppuVar5 = (undefined ******)pppppuStack_b8;
      } while (cVar1 != '\0');
      goto LAB_10a3779e0;
    }
  }
  else {
    pppppuStack_e0 = *(undefined ******)(lVar12 + 0x858);
    pppppuStack_d8 = *(undefined ******)(lVar12 + 0x860);
    if ((undefined ******)pppppuStack_d8 != (undefined ******)0x0) {
      ppppppuVar7 = (undefined ******)(pppppuStack_d8 + 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
        if (bVar2) {
          *ppppppuVar7 = (undefined *****)((long)*ppppppuVar7 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    ppppppuVar4 = (undefined ******)0x138;
    __Znwm();
    pppppuStack_a8 = pppppuVar10;
    pppppuStack_b0 = pppppuStack_f0;
    if ((undefined ******)pppppuVar10 != (undefined ******)0x0) {
      ppppppuVar7 = (undefined ******)(pppppuVar10 + 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
        if (bVar2) {
          *ppppppuVar7 = (undefined *****)((long)*ppppppuVar7 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_10a3781a0(ppppppuVar4,lVar12,&pppppuStack_b0);
    pppppuVar10 = pppppuStack_a8;
    if ((undefined ******)pppppuStack_a8 != (undefined ******)0x0) {
      ppppppuVar7 = (undefined ******)(pppppuStack_a8 + 1);
      do {
        pppppuVar9 = *ppppppuVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
        if (bVar2) {
          *ppppppuVar7 = (undefined *****)((long)pppppuVar9 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (pppppuVar9 == (undefined *****)0x0) {
        (*(code *)(*pppppuStack_a8)[2])(pppppuStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar10);
      }
    }
    pppppuVar10 = pppppuStack_d8;
    ppppppuVar13 = (undefined ******)pppppuStack_e0;
    pppppuStack_d0 = pppppuStack_e0;
    pppppuStack_c8 = pppppuStack_d8;
    if ((undefined ******)pppppuStack_d8 != (undefined ******)0x0) {
      ppppppuVar7 = (undefined ******)(pppppuStack_d8 + 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
        if (bVar2) {
          *ppppppuVar7 = (undefined *****)((long)*ppppppuVar7 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      ppppppuVar7 = (undefined ******)(pppppuStack_d8 + 2);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
        if (bVar2) {
          *ppppppuVar7 = (undefined *****)((long)*ppppppuVar7 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
        if (bVar2) {
          *ppppppuVar7 = (undefined *****)((long)*ppppppuVar7 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuStack_d8);
    }
    pppppuStack_b0 = (undefined *****)ppppppuVar13;
    pppppuStack_a8 = pppppuVar10;
    FUN_10a37823c(&pppppuStack_c0,ppppppuVar4,&pppppuStack_b0);
    FUN_10a37803c(&pppppuStack_100,&pppppuStack_c0);
    pppppuVar10 = pppppuStack_b8;
    if ((undefined ******)pppppuStack_b8 != (undefined ******)0x0) {
      ppppppuVar7 = (undefined ******)(pppppuStack_b8 + 1);
      do {
        pppppuVar9 = *ppppppuVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
        if (bVar2) {
          *ppppppuVar7 = (undefined *****)((long)pppppuVar9 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (pppppuVar9 == (undefined *****)0x0) {
        (*(code *)(*pppppuStack_b8)[2])(pppppuStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar10);
      }
    }
    if ((undefined ******)pppppuStack_a8 != (undefined ******)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    pppppuVar10 = pppppuStack_c8;
    if ((undefined ******)pppppuStack_c8 != (undefined ******)0x0) {
      ppppppuVar7 = (undefined ******)(pppppuStack_c8 + 1);
      do {
        pppppuVar9 = *ppppppuVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
        if (bVar2) {
          *ppppppuVar7 = (undefined *****)((long)pppppuVar9 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (pppppuVar9 == (undefined *****)0x0) {
        (*(code *)(*pppppuStack_c8)[2])(pppppuStack_c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar10);
      }
    }
    ppppppuVar7 = (undefined ******)pppppuStack_e0;
    if (((undefined ******)pppppuStack_e0 != (undefined ******)0x0) &&
       ((undefined ******)pppppuStack_100 != (undefined ******)0x0)) {
      pppppuStack_c0 = pppppuStack_100;
      pppppuStack_b8 = pppppuStack_f8;
      if ((undefined ******)pppppuStack_f8 != (undefined ******)0x0) {
        ppppppuVar11 = (undefined ******)(pppppuStack_f8 + 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar11,0x10);
          if (bVar2) {
            *ppppppuVar11 = (undefined *****)((long)*ppppppuVar11 + 1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      ppppppuVar4 = &pppppuStack_c0;
      FUN_10aa88c30();
      ppppppuVar11 = (undefined ******)pppppuStack_b8;
      if ((undefined ******)pppppuStack_b8 != (undefined ******)0x0) {
        ppppppuVar5 = (undefined ******)(pppppuStack_b8 + 1);
        do {
          pppppuVar10 = *ppppppuVar5;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar5,0x10);
          if (bVar2) {
            *ppppppuVar5 = (undefined *****)((long)pppppuVar10 + -1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (pppppuVar10 == (undefined *****)0x0) {
          (*(code *)(*pppppuStack_b8)[2])(pppppuStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppppppuVar7 = ppppppuVar11;
        }
      }
    }
    if ((undefined ******)pppppuStack_d8 != (undefined ******)0x0) {
      ppppppuVar11 = (undefined ******)(pppppuStack_d8 + 1);
      do {
        pppppuVar10 = *ppppppuVar11;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar11,0x10);
        if (bVar2) {
          *ppppppuVar11 = (undefined *****)((long)pppppuVar10 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
        ppppppuVar5 = (undefined ******)pppppuStack_d8;
      } while (cVar1 != '\0');
LAB_10a3779e0:
      if (pppppuVar10 == (undefined *****)0x0) {
        (*(code *)(*ppppppuVar5)[2])(ppppppuVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppppppuVar7 = ppppppuVar5;
      }
    }
  }
  ppppppuVar11 = *(undefined *******)(param_4 + 0x18);
  if (ppppppuVar11 == (undefined ******)0x0 || *(char *)(ppppppuVar11 + 8) != '\x02') {
    ppppppuVar8 = ppppppuVar4;
    if ((ppppppuVar11 == (undefined ******)0x0) || (*(char *)(ppppppuVar11 + 8) != '\x01'))
    goto LAB_10a377bc0;
    pppppuVar10 = *ppppppuVar11;
    pppppuStack_a8 = pppppuStack_f8;
    pppppuStack_b0 = pppppuStack_100;
    if ((undefined ******)pppppuStack_f8 != (undefined ******)0x0) {
      ppppppuVar7 = (undefined ******)(pppppuStack_f8 + 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
        if (bVar2) {
          *ppppppuVar7 = (undefined *****)((long)*ppppppuVar7 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    ppppppuVar7 = &pppppuStack_b0;
    (*(code *)pppppuVar10)();
    ppppppuVar8 = ppppppuVar11;
    if ((undefined ******)pppppuStack_a8 == (undefined ******)0x0) goto LAB_10a377bc0;
    ppppppuVar11 = (undefined ******)(pppppuStack_a8 + 1);
    do {
      pppppuVar10 = *ppppppuVar11;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar11,0x10);
      if (bVar2) {
        *ppppppuVar11 = (undefined *****)((long)pppppuVar10 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  else {
    ppppppuVar6 = ppppppuVar11;
    FUN_10a688b40();
    ppppppuVar5 = (undefined ******)pppppuStack_f8;
    if (ppppppuVar6 != (undefined ******)0x0) {
      *ppppppuVar6 = (undefined *****)
                     CONCAT44((int)((ulong)*ppppppuVar6 >> 0x20) + 1,(int)*ppppppuVar6 + 1);
      ppppppuVar7 = (undefined ******)*ppppppuVar11;
      ppppppuVar8 = &pppppuStack_100;
      FUN_10a3784c0();
      iVar3 = *(int *)((long)ppppppuVar6 + 4) + -1;
      *(int *)((long)ppppppuVar6 + 4) = iVar3;
      if (iVar3 == 0) {
        *(undefined4 *)ppppppuVar6 = 0;
      }
      goto LAB_10a377bc0;
    }
    ppppppuVar7 = (undefined ******)0x0;
    ppppppuVar8 = (undefined ******)0x0;
    if (ppppppuVar4 == (undefined ******)0x0) goto LAB_10a377bc0;
    ppppuStack_70 = (undefined ****)ppppppuVar11[1];
    ppppuStack_78 = (undefined ****)*ppppppuVar11;
    if (ppppppuVar11[1] != (undefined *****)0x0) {
      pppppuVar10 = ppppppuVar11[1] + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppppuVar10,0x10);
        if (bVar2) {
          *pppppuVar10 = (undefined ****)((long)*pppppuVar10 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    pppppuStack_a0 = pppppuStack_100;
    pppppuStack_98 = pppppuStack_f8;
    if ((undefined ******)pppppuStack_f8 != (undefined ******)0x0) {
      ppppppuVar7 = (undefined ******)(pppppuStack_f8 + 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
        if (bVar2) {
          *ppppppuVar7 = (undefined *****)((long)*ppppppuVar7 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    ppppuStack_88 = (undefined ****)FUN_10a378650;
    ppppuStack_80 = (undefined ****)&PTR_FUN_110bc73b0;
    pppppuStack_b0 = (undefined *****)0x0;
    pppppuStack_a8 = (undefined *****)0x0;
    pppppuStack_68 = pppppuStack_100;
    pppppuStack_60 = pppppuStack_f8;
    if ((undefined ******)pppppuStack_f8 != (undefined ******)0x0) {
      ppppppuVar7 = (undefined ******)(pppppuStack_f8 + 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
        if (bVar2) {
          *ppppppuVar7 = (undefined *****)((long)*ppppppuVar7 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    ppppppuVar13 = &pppppuStack_b0;
    ppppppuVar8 = (undefined ******)&ppppuStack_88;
    FUN_10a4634ec();
    ppppppuVar7 = (undefined ******)&ppppuStack_80;
    (*(code *)*ppppuStack_80)();
    if (ppppppuVar5 != (undefined ******)0x0) {
      ppppppuVar11 = ppppppuVar5 + 1;
      do {
        pppppuVar10 = *ppppppuVar11;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar11,0x10);
        if (bVar2) {
          *ppppppuVar11 = (undefined *****)((long)pppppuVar10 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (pppppuVar10 == (undefined *****)0x0) {
        (*(code *)(*ppppppuVar5)[2])(ppppppuVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppppppuVar7 = ppppppuVar5;
      }
    }
    if ((undefined ******)pppppuStack_a8 == (undefined ******)0x0) goto LAB_10a377bc0;
    ppppppuVar11 = (undefined ******)(pppppuStack_a8 + 1);
    do {
      pppppuVar10 = *ppppppuVar11;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar11,0x10);
      if (bVar2) {
        *ppppppuVar11 = (undefined *****)((long)pppppuVar10 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  ppppppuVar11 = (undefined ******)pppppuStack_a8;
  if (pppppuVar10 == (undefined *****)0x0) {
    (*(code *)(*pppppuStack_a8)[2])(pppppuStack_a8);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    ppppppuVar7 = ppppppuVar11;
  }
LAB_10a377bc0:
  if ((undefined ******)pppppuStack_f8 != (undefined ******)0x0) {
    ppppppuVar11 = (undefined ******)(pppppuStack_f8 + 1);
    do {
      pppppuVar10 = *ppppppuVar11;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar11,0x10);
      if (bVar2) {
        *ppppppuVar11 = (undefined *****)((long)pppppuVar10 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (pppppuVar10 == (undefined *****)0x0) {
      (*(code *)(*pppppuStack_f8)[2])(pppppuStack_f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppppppuVar7 = (undefined ******)pppppuStack_f8;
    }
  }
  ppppppuVar11 = (undefined ******)pppppuStack_e8;
  if ((undefined ******)pppppuStack_e8 != (undefined ******)0x0) {
    ppppppuVar4 = (undefined ******)(pppppuStack_e8 + 1);
    do {
      pppppuVar10 = *ppppppuVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar4,0x10);
      if (bVar2) {
        *ppppppuVar4 = (undefined *****)((long)pppppuVar10 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (pppppuVar10 == (undefined *****)0x0) {
      (*(code *)(*pppppuStack_e8)[2])(pppppuStack_e8);
      ppppppuVar7 = (undefined ******)pppppuStack_e8;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  while (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    ppppppuVar4 = ppppppuVar8;
    (*(code *)*ppppuStack_80)(&ppppuStack_80);
    func_0x00010a1ff0cc(ppppppuVar13 + 2);
    func_0x00010a004dac(&pppppuStack_b0);
    func_0x00010a1ff0cc(&pppppuStack_100);
    FUN_10a3786c8(&pppppuStack_f0);
    while ((int)ppppppuVar8 != 1) {
      __Unwind_Resume(ppppppuVar7);
      func_0x000104bd46a0();
      ppppppuVar8 = ppppppuVar4;
    }
    ___cxa_begin_catch();
    (*(code *)(*ppppppuVar7)[2])();
    FUN_10a377e44();
    ppppppuVar11 = (undefined ******)ppppppuVar11[5];
    func_0x000107c2b054(&ppppuStack_88,&UNK_10f65177e);
    ppppppuVar8 = (undefined ******)&ppppuStack_88;
    ppppppuVar7 = ppppppuVar11;
    FUN_10a13609c();
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 10a377e44; end: 10a377e97;  */

undefined * FUN_10a377e44(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined **ppuStack_8e8;
  undefined *puStack_8e0;
  undefined *puStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  undefined **ppuStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined1 uStack_880;
  int iStack_878;
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [1024];
  long lStack_70;
  
  FUN_10ae030a0(0,param_1);
  ppuVar6 = &PTR_PTR_1133017c8;
  ppuVar5 = ppuVar6;
  FUN_10ae079a0();
  FUN_10ae030d8();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined *)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar5[0x13],ppuVar5[0xf],
                  ppuVar5 + 0x14,0x400);
    puStack_918 = puStack_890;
    uStack_910 = uStack_888;
    puStack_900 = puStack_8a8;
    uStack_8f8 = uStack_8a0;
    uStack_908 = uStack_880;
    if (iStack_878 != 0) {
      puStack_918 = &UNK_10f6c352e;
      uStack_910 = 0x10;
      puStack_900 = &UNK_10f6c352e;
      uStack_8f8 = 0x10;
      uStack_908 = 0;
      uStack_898 = 0;
    }
    puVar8 = ppuVar5[0x12];
    puVar7 = ppuVar5[0xb];
    uVar1 = 0;
    _clock_gettime_nsec_np();
    uVar2 = uVar1;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar5 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar5 + 0xe);
    uStack_8c0 = uVar2 & 0xffffffff;
    ppuStack_8b0 = ppuVar5 + 0x10;
    puVar3 = *ppuVar5;
    ppuVar6 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar7;
    puStack_8d8 = puVar8;
    uStack_8d0 = (ulong)(puVar8 != (undefined *)0x0);
    uStack_8c8 = uVar1;
    FUN_10ae0784c(puVar3,ppuVar6,&puStack_900,&puStack_918);
  }
  iVar4 = (int)ppuVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar4 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar3);
    return puVar3;
  }
  return puVar3;
}



/* Entry: 10a377e98; end: 10a377eff;  */

void FUN_10a377e98(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar4 = 0x128;
  __Znwm();
  FUN_10a377f00();
  *param_1 = lVar4 + 0x18;
  param_1[1] = lVar4;
  if (((long *)(lVar4 + 0x58) != (long *)0x0) &&
     ((lVar5 = *(long *)(lVar4 + 0x60), lVar5 == 0 || (*(long *)(lVar5 + 8) == -1)))) {
    plVar6 = (long *)param_1[1];
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar6 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar5 = *(long *)(lVar4 + 0x60);
    }
    *(long *)(lVar4 + 0x58) = lVar4 + 0x18;
    *(long **)(lVar4 + 0x60) = plVar6;
    if (lVar5 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a377f00; end: 10a377f4b;  */

undefined8 * FUN_10a377f00(undefined8 *param_1,undefined8 *param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110bc7f30;
  FUN_10ac1ec64(param_1 + 3,*param_2);
  return param_1;
}



/* Entry: 10a377f4c; end: 10a377f5b;  */

void FUN_10a377f4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc7f30;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a377f5c; end: 10a377f7b;  */

void FUN_10a377f5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc7f30;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a377f7c; end: 10a377f8b;  */

void FUN_10a377f7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a377f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a377f8c; end: 10a37803b;  */

void FUN_10a377f8c(long param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 10a37803c; end: 10a37819f;  */

void FUN_10a37803c(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lStack_40;
  long *plStack_38;
  long *plStack_30;
  long *plStack_28;
  
  plVar3 = (long *)0x90;
  __Znwm();
  plVar4 = plVar3 + 1;
  *plVar4 = 0;
  *plVar3 = (long)&PTR_FUN_110b9fe30;
  lStack_40 = *param_2;
  plStack_30 = plVar3 + 3;
  plVar3[4] = param_2[1];
  *plStack_30 = lStack_40;
  plVar3[2] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[7] = 0x32aaaba7;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  plVar3[0xd] = 0;
  plVar3[0xc] = 0;
  plVar3[0xf] = 0;
  plVar3[0xe] = 0;
  plVar3[0x11] = 0;
  plVar3[0x10] = 0;
  *param_1 = lStack_40;
  param_1[1] = (long)plVar3;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plStack_38 = plVar3;
  plStack_28 = plVar3;
  func_0x00010a053e8c(plStack_30,&lStack_40);
  plVar3 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar4 = plStack_38 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  if (*plStack_30 != 0) {
    func_0x00010a053ee8(*plStack_30,&plStack_30);
  }
  plVar3 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar4 = plStack_28 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return;
}



/* Entry: 10a3781a0; end: 10a37823b;  */

undefined8 * FUN_10a3781a0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_1;
  uVar6 = param_2;
  func_0x00010a0fda30();
  FUN_10aa7093c(param_1,param_2,puVar4,uVar6);
  *param_1 = &PTR_FUN_110c48ea8;
  param_1[2] = &PTR_FUN_110c48f48;
  param_1[7] = &PTR_FUN_110c48fa0;
  lVar5 = param_3[1];
  uVar6 = *param_3;
  param_1[0x1d] = param_3[1];
  param_1[0x1c] = uVar6;
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
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  return param_1;
}



/* Entry: 10a37823c; end: 10a3782db;  */

long * FUN_10a37823c(long *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = param_2;
  puVar2 = (undefined8 *)0x30;
  __Znwm();
  uVar4 = param_3[1];
  uVar3 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  *puVar2 = &PTR_DAT_110bc8568;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = param_2;
  puVar2[5] = uVar4;
  puVar2[4] = uVar3;
  param_1[1] = (long)puVar2;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x28;
  }
  FUN_10a3782dc(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 10a3782dc; end: 10a3783ff;  */

void FUN_10a3782dc(long param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 10a378400; end: 10a37843f;  */

void FUN_10a378400(long param_1)

{
  FUN_10aa88d20(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a378440; end: 10a37847b;  */

long FUN_10a378440(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bc85a8);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a37847c; end: 10a37848f;  */

void FUN_10a37847c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a378490; end: 10a3784af;  */

void FUN_10a378490(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bc85c8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3784b0; end: 10a3784bf;  */

void FUN_10a3784b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a3784b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a3784c0; end: 10a37864f;  */

void FUN_10a3784c0(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar1 = (long *)*param_1;
  FUN_10a204898(aiStack_70,plVar1,param_2);
  uStack_38 = 1;
  piStack_40 = aiStack_70;
  (**(code **)(*plVar1 + 0x58))(plVar1);
  ppuStack_60 = &puStack_88;
  ppuStack_48 = &piStack_40;
  plStack_58 = plVar1;
  puStack_50 = (undefined1 *)&puStack_90;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a378650; end: 10a37865f;  */

void FUN_10a378650(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_90);
  plVar2 = (long *)*puVar1;
  FUN_10a204898(aiStack_70,plVar2,param_1 + 0x20);
  uStack_38 = 1;
  piStack_40 = aiStack_70;
  (**(code **)(*plVar2 + 0x58))(plVar2);
  ppuStack_60 = &puStack_88;
  ppuStack_48 = &piStack_40;
  plStack_58 = plVar2;
  puStack_50 = (undefined1 *)&puStack_90;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a378660; end: 10a378687;  */

long FUN_10a378660(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010a1ff0cc(param_1 + 0x18);
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10a378688; end: 10a3786c7;  */

void FUN_10a378688(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110bc73b0;
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar5;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar4 = *(long *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar5;
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
  return;
}



/* Entry: 10a3786c8; end: 10a378747;  */

long FUN_10a3786c8(long param_1)

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



/* Entry: 10a378748; end: 10a3787ff;  */

void FUN_10a378748(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_DAT_110bc73c8;
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar5;
  lVar4 = *(long *)(param_2 + 0x18);
  param_1[3] = lVar4;
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
  lVar4 = *(long *)(param_2 + 0x28);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[4] = uVar5;
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
  return;
}



/* Entry: 10a378800; end: 10a378c37;  */

void FUN_10a378800(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined ****ppppuVar4;
  undefined ******ppppppuVar5;
  undefined ******ppppppuVar6;
  undefined ******ppppppuVar7;
  undefined ******ppppppuVar8;
  undefined ******ppppppuVar9;
  undefined *****pppppuVar10;
  undefined ****ppppuVar11;
  undefined8 uVar12;
  undefined ******ppppppuVar13;
  undefined8 uStack_110;
  undefined ****ppppuStack_108;
  undefined ****ppppuStack_100;
  undefined *****pppppuStack_f8;
  undefined *****pppppuStack_f0;
  undefined *****pppppuStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined *****pppppuStack_d0;
  undefined *****pppppuStack_c8;
  undefined ****ppppuStack_c0;
  undefined *****pppppuStack_b8;
  undefined8 uStack_b0;
  undefined *****pppppuStack_a8;
  undefined *****pppppuStack_a0;
  undefined *****pppppuStack_98;
  undefined *****pppppuStack_90;
  undefined *****pppppuStack_88;
  undefined *****pppppuStack_78;
  undefined ****ppppuStack_70;
  undefined ****ppppuStack_68;
  undefined ****ppppuStack_60;
  undefined *****pppppuStack_58;
  undefined *****pppppuStack_50;
  long lStack_38;
  
  ppppppuVar9 = &pppppuStack_d0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppuVar5 = &pppppuStack_90;
  pppppuVar10 = (undefined *****)(param_4 + 0x10);
  FUN_10a377e98(&ppppuStack_c0,ppppppuVar5,pppppuVar10,param_1);
  uVar12 = *(undefined8 *)(param_4 + 0x10);
  func_0x00010a0fda30();
  pppppuStack_78 = (undefined *****)ppppppuVar5;
  ppppuStack_70 = (undefined ****)pppppuVar10;
  FUN_10a378c38(&pppppuStack_d0,uVar12,&pppppuStack_78);
  ppppppuVar5 = (undefined ******)&ppppuStack_c0;
  ppppppuVar7 = (undefined ******)pppppuStack_d0;
  FUN_10ab21140();
  ppppppuVar13 = *(undefined *******)(param_4 + 0x18);
  if ((ppppppuVar13 == (undefined ******)0x0) || (*(char *)(ppppppuVar13 + 8) != '\x02')) {
    ppppppuVar9 = ppppppuVar5;
    if ((ppppppuVar13 == (undefined ******)0x0) || (*(char *)(ppppppuVar13 + 8) != '\x01'))
    goto LAB_10a378a24;
    pppppuVar10 = *ppppppuVar13;
    pppppuStack_88 = pppppuStack_c8;
    pppppuStack_90 = pppppuStack_d0;
    if ((undefined ******)pppppuStack_c8 != (undefined ******)0x0) {
      ppppppuVar5 = (undefined ******)(pppppuStack_c8 + 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar5,0x10);
        if (bVar2) {
          *ppppppuVar5 = (undefined *****)((long)*ppppppuVar5 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    ppppppuVar7 = &pppppuStack_90;
    (*(code *)pppppuVar10)();
    ppppppuVar9 = ppppppuVar13;
    if ((undefined ******)pppppuStack_88 == (undefined ******)0x0) goto LAB_10a378a24;
    ppppppuVar5 = (undefined ******)(pppppuStack_88 + 1);
    do {
      pppppuVar10 = *ppppppuVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar5,0x10);
      if (bVar2) {
        *ppppppuVar5 = (undefined *****)((long)pppppuVar10 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
      ppppppuVar8 = (undefined ******)pppppuStack_88;
    } while (cVar1 != '\0');
  }
  else {
    ppppppuVar6 = ppppppuVar13;
    FUN_10a688b40();
    ppppppuVar8 = (undefined ******)pppppuStack_c8;
    if (ppppppuVar6 != (undefined ******)0x0) {
      *ppppppuVar6 = (undefined *****)
                     CONCAT44((int)((ulong)*ppppppuVar6 >> 0x20) + 1,(int)*ppppppuVar6 + 1);
      ppppppuVar7 = (undefined ******)*ppppppuVar13;
      FUN_10a3794f0();
      iVar3 = *(int *)((long)ppppppuVar6 + 4) + -1;
      *(int *)((long)ppppppuVar6 + 4) = iVar3;
      if (iVar3 == 0) {
        *(undefined4 *)ppppppuVar6 = 0;
      }
      goto LAB_10a378a24;
    }
    ppppppuVar7 = (undefined ******)0x0;
    ppppppuVar9 = (undefined ******)0x0;
    if (ppppppuVar5 == (undefined ******)0x0) goto LAB_10a378a24;
    ppppuStack_60 = (undefined ****)ppppppuVar13[1];
    ppppuStack_68 = (undefined ****)*ppppppuVar13;
    if (ppppppuVar13[1] != (undefined *****)0x0) {
      pppppuVar10 = ppppppuVar13[1] + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppppuVar10,0x10);
        if (bVar2) {
          *pppppuVar10 = (undefined ****)((long)*pppppuVar10 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    pppppuStack_a0 = pppppuStack_d0;
    pppppuStack_98 = pppppuStack_c8;
    if ((undefined ******)pppppuStack_c8 != (undefined ******)0x0) {
      ppppppuVar5 = (undefined ******)(pppppuStack_c8 + 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar5,0x10);
        if (bVar2) {
          *ppppppuVar5 = (undefined *****)((long)*ppppppuVar5 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    pppppuStack_78 = (undefined *****)FUN_10a379704;
    ppppuStack_70 = (undefined ****)&PTR_FUN_110bc73e8;
    uStack_b0 = 0;
    pppppuStack_a8 = (undefined *****)0x0;
    pppppuStack_58 = pppppuStack_d0;
    pppppuStack_50 = pppppuStack_c8;
    if ((undefined ******)pppppuStack_c8 != (undefined ******)0x0) {
      ppppppuVar5 = (undefined ******)(pppppuStack_c8 + 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar5,0x10);
        if (bVar2) {
          *ppppppuVar5 = (undefined *****)((long)*ppppppuVar5 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    ppppppuVar13 = &pppppuStack_78;
    FUN_10a4634ec();
    ppppppuVar7 = (undefined ******)&ppppuStack_70;
    (*(code *)*ppppuStack_70)();
    if (ppppppuVar8 != (undefined ******)0x0) {
      ppppppuVar5 = ppppppuVar8 + 1;
      do {
        pppppuVar10 = *ppppppuVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar5,0x10);
        if (bVar2) {
          *ppppppuVar5 = (undefined *****)((long)pppppuVar10 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (pppppuVar10 == (undefined *****)0x0) {
        (*(code *)(*ppppppuVar8)[2])(ppppppuVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppppppuVar7 = ppppppuVar8;
      }
    }
    ppppppuVar9 = ppppppuVar13;
    if ((undefined ******)pppppuStack_a8 == (undefined ******)0x0) goto LAB_10a378a24;
    ppppppuVar5 = (undefined ******)(pppppuStack_a8 + 1);
    do {
      pppppuVar10 = *ppppppuVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar5,0x10);
      if (bVar2) {
        *ppppppuVar5 = (undefined *****)((long)pppppuVar10 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
      ppppppuVar8 = (undefined ******)pppppuStack_a8;
    } while (cVar1 != '\0');
  }
  ppppppuVar9 = ppppppuVar13;
  if (pppppuVar10 == (undefined *****)0x0) {
    (*(code *)(*ppppppuVar8)[2])(ppppppuVar8);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    ppppppuVar7 = ppppppuVar8;
    ppppppuVar9 = ppppppuVar13;
  }
LAB_10a378a24:
  if ((undefined ******)pppppuStack_c8 != (undefined ******)0x0) {
    ppppppuVar5 = (undefined ******)(pppppuStack_c8 + 1);
    do {
      pppppuVar10 = *ppppppuVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar5,0x10);
      if (bVar2) {
        *ppppppuVar5 = (undefined *****)((long)pppppuVar10 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (pppppuVar10 == (undefined *****)0x0) {
      (*(code *)(*pppppuStack_c8)[2])(pppppuStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppppppuVar7 = (undefined ******)pppppuStack_c8;
    }
  }
  if ((undefined ******)pppppuStack_b8 != (undefined ******)0x0) {
    ppppppuVar5 = (undefined ******)(pppppuStack_b8 + 1);
    do {
      pppppuVar10 = *ppppppuVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar5,0x10);
      if (bVar2) {
        *ppppppuVar5 = (undefined *****)((long)pppppuVar10 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (pppppuVar10 == (undefined *****)0x0) {
      (*(code *)(*pppppuStack_b8)[2])(pppppuStack_b8);
      ppppppuVar7 = (undefined ******)pppppuStack_b8;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  while( true ) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
    ___stack_chk_fail();
    ppppppuVar5 = ppppppuVar9;
    (*(code *)*ppppuStack_70)(&ppppuStack_70);
    FUN_10a133db8(&pppppuStack_a0);
    func_0x00010a004dac(&uStack_b0);
    FUN_10a133db8(&pppppuStack_d0);
    FUN_10a3786c8(&ppppuStack_c0);
    if ((int)ppppppuVar9 != 1) break;
    ___cxa_begin_catch();
    func_0x000107c2b054(&uStack_b0,&UNK_10f6517ab);
    (*(code *)(*ppppppuVar7)[2])(ppppppuVar7);
    FUN_10a012db0(&pppppuStack_78,&uStack_b0,ppppppuVar7);
    if ((long)pppppuStack_a0 < 0) {
      __ZdlPv(uStack_b0);
    }
    FUN_10a378cf4(&pppppuStack_78);
    ppppppuVar7 = (undefined ******)pppppuStack_b8[5];
    ppppppuVar9 = &pppppuStack_78;
    FUN_10a13609c();
    if ((long)ppppuStack_68 < 0) {
      ppppppuVar7 = (undefined ******)pppppuStack_78;
      __ZdlPv();
    }
    ___cxa_end_catch();
  }
  __Unwind_Resume(ppppppuVar7);
  ppppppuVar13 = ppppppuVar7;
  func_0x000104bd46a0();
  pppppuStack_e8 = pppppuStack_b8;
  pcStack_d8 = FUN_10a378c38;
  pppppuStack_f8 = (undefined *****)ppppppuVar13;
  pppppuStack_f0 = (undefined *****)ppppppuVar7;
  puStack_e0 = &stack0xfffffffffffffff0;
  if (ppppppuVar13 == (undefined ******)0x0) {
    uStack_110 = 0;
    FUN_10a378f58(&uStack_110,ppppppuVar5);
  }
  else {
    ppppuStack_108 = (undefined ****)ppppppuVar13[0x10b];
    ppppuStack_100 = (undefined ****)ppppppuVar13[0x10c];
    if ((undefined *****)ppppuStack_100 != (undefined *****)0x0) {
      pppppuVar10 = (undefined *****)(ppppuStack_100 + 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppppuVar10,0x10);
        if (bVar2) {
          *pppppuVar10 = (undefined ****)((long)*pppppuVar10 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_10a378d70(&ppppuStack_108,&pppppuStack_f8);
    ppppuVar4 = ppppuStack_100;
    if ((undefined *****)ppppuStack_100 != (undefined *****)0x0) {
      pppppuVar10 = (undefined *****)(ppppuStack_100 + 1);
      do {
        ppppuVar11 = *pppppuVar10;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppppuVar10,0x10);
        if (bVar2) {
          *pppppuVar10 = (undefined ****)((long)ppppuVar11 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (ppppuVar11 == (undefined ****)0x0) {
        (*(code *)(*ppppuStack_100)[2])(ppppuStack_100);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar4);
      }
    }
  }
  return;
}



/* Entry: 10a378c38; end: 10a378cf3;  */

void FUN_10a378c38(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  long lStack_28;
  
  lStack_28 = param_1;
  if (param_1 == 0) {
    uStack_40 = 0;
    FUN_10a378f58(&uStack_40,param_2);
  }
  else {
    uStack_38 = *(undefined8 *)(param_1 + 0x858);
    plStack_30 = *(long **)(param_1 + 0x860);
    if (plStack_30 != (long *)0x0) {
      plVar1 = plStack_30 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a378d70(&uStack_38,&lStack_28);
    plVar1 = plStack_30;
    if (plStack_30 != (long *)0x0) {
      plVar2 = plStack_30 + 1;
      do {
        lVar5 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  return;
}



/* Entry: 10a378cf4; end: 10a378d6f;  */

undefined * FUN_10a378cf4(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  int iVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined **ppuStack_8e8;
  undefined *puStack_8e0;
  undefined *puStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  undefined **ppuStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined1 uStack_880;
  int iStack_878;
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [1024];
  long lStack_70;
  
  uVar3 = param_1[1];
  puVar1 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar3 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar1 = param_1;
  }
  FUN_10ae03140(0,puVar1,uVar3);
  ppuVar7 = &PTR_PTR_1133017f8;
  ppuVar6 = ppuVar7;
  FUN_10ae079a0();
  FUN_10ae0314c();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = (undefined *)0x0;
  if (ppuVar6 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar6[0x13],ppuVar6[0xf],
                  ppuVar6 + 0x14,0x400);
    puStack_918 = puStack_890;
    uStack_910 = uStack_888;
    puStack_900 = puStack_8a8;
    uStack_8f8 = uStack_8a0;
    uStack_908 = uStack_880;
    if (iStack_878 != 0) {
      puStack_918 = &UNK_10f6c352e;
      uStack_910 = 0x10;
      puStack_900 = &UNK_10f6c352e;
      uStack_8f8 = 0x10;
      uStack_908 = 0;
      uStack_898 = 0;
    }
    puVar9 = ppuVar6[0x12];
    puVar8 = ppuVar6[0xb];
    uVar2 = 0;
    _clock_gettime_nsec_np();
    uVar3 = uVar2;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar6 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar6 + 0xe);
    uStack_8c0 = uVar3 & 0xffffffff;
    ppuStack_8b0 = ppuVar6 + 0x10;
    puVar4 = *ppuVar6;
    ppuVar7 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar8;
    puStack_8d8 = puVar9;
    uStack_8d0 = (ulong)(puVar9 != (undefined *)0x0);
    uStack_8c8 = uVar2;
    FUN_10ae0784c(puVar4,ppuVar7,&puStack_900,&puStack_918);
  }
  iVar5 = (int)ppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar5 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar4);
    return puVar4;
  }
  return puVar4;
}



/* Entry: 10a378d70; end: 10a378f57;  */

void FUN_10a378d70(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  undefined1 auStack_50 [8];
  long *plStack_48;
  
  FUN_10a379150(param_3,param_4);
  lStack_60 = *param_2;
  plStack_58 = (long *)param_2[1];
  lStack_70 = lStack_60;
  plStack_68 = plStack_58;
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
    plVar1 = plStack_58 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
  }
  FUN_10a3791a8(auStack_50,param_3,&lStack_60);
  FUN_10a378fec(param_1,auStack_50);
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  if (plStack_58 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar1 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar2 = plStack_68 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  lVar5 = *param_2;
  if ((lVar5 != 0) && (lStack_80 = *param_1, lStack_80 != 0)) {
    plStack_78 = (long *)param_1[1];
    if (plStack_78 != (long *)0x0) {
      plVar1 = plStack_78 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10aa88c30(lVar5,&lStack_80);
    plVar1 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar2 = plStack_78 + 1;
      do {
        lVar5 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  return;
}



/* Entry: 10a378f58; end: 10a378feb;  */

void FUN_10a378f58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 uStack_39;
  undefined1 auStack_38 [8];
  long *plStack_30;
  undefined1 uStack_21;
  
  FUN_10a3793ec(auStack_38,&uStack_21,&uStack_39,param_2,param_3);
  FUN_10a378fec(param_1,auStack_38);
  if (plStack_30 != (long *)0x0) {
    plVar1 = plStack_30 + 1;
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
      (**(code **)(*plStack_30 + 0x10))(plStack_30);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_30);
    }
  }
  return;
}



/* Entry: 10a378fec; end: 10a37914f;  */

void FUN_10a378fec(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lStack_40;
  long *plStack_38;
  long *plStack_30;
  long *plStack_28;
  
  plVar3 = (long *)0x90;
  __Znwm();
  plVar4 = plVar3 + 1;
  *plVar4 = 0;
  *plVar3 = (long)&PTR_FUN_110b9fe30;
  lStack_40 = *param_2;
  plStack_30 = plVar3 + 3;
  plVar3[4] = param_2[1];
  *plStack_30 = lStack_40;
  plVar3[2] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[7] = 0x32aaaba7;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  plVar3[0xd] = 0;
  plVar3[0xc] = 0;
  plVar3[0xf] = 0;
  plVar3[0xe] = 0;
  plVar3[0x11] = 0;
  plVar3[0x10] = 0;
  *param_1 = lStack_40;
  param_1[1] = (long)plVar3;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plStack_38 = plVar3;
  plStack_28 = plVar3;
  func_0x00010a053e8c(plStack_30,&lStack_40);
  plVar3 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar4 = plStack_38 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  if (*plStack_30 != 0) {
    func_0x00010a053ee8(*plStack_30,&plStack_30);
  }
  plVar3 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar4 = plStack_28 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return;
}



/* Entry: 10a379150; end: 10a3791a7;  */

undefined8 FUN_10a379150(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x268;
  __Znwm(0x268);
  FUN_10ab20e84();
  return uVar1;
}



/* Entry: 10a3791a8; end: 10a379247;  */

long * FUN_10a3791a8(long *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = param_2;
  puVar2 = (undefined8 *)0x30;
  __Znwm();
  uVar4 = param_3[1];
  uVar3 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  *puVar2 = &PTR_DAT_110bc8618;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = param_2;
  puVar2[5] = uVar4;
  puVar2[4] = uVar3;
  param_1[1] = (long)puVar2;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x28;
  }
  FUN_10a379248(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 10a379248; end: 10a37936b;  */

void FUN_10a379248(long param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 10a37936c; end: 10a3793ab;  */

void FUN_10a37936c(long param_1)

{
  FUN_10aa88d20(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a3793ac; end: 10a3793e7;  */

long FUN_10a3793ac(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bc8658);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a3793e8; end: 10a3793eb;  */

void FUN_10a3793e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3793ec; end: 10a379463;  */

void FUN_10a3793ec(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = 0x280;
  __Znwm();
  FUN_10a379464();
  *param_1 = lVar5 + 0x18;
  param_1[1] = lVar5;
  if (((long *)(lVar5 + 0x40) != (long *)0x0) &&
     ((lVar4 = *(long *)(lVar5 + 0x48), lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar6 = (long *)param_1[1];
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar6 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = *(long *)(lVar5 + 0x48);
    }
    *(long *)(lVar5 + 0x40) = lVar5 + 0x18;
    *(long **)(lVar5 + 0x48) = plVar6;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a379464; end: 10a3794b3;  */

undefined8 *
FUN_10a379464(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110bc8678;
  FUN_10ab20e84(param_1 + 3,0,*param_4,param_4[1]);
  return param_1;
}



/* Entry: 10a3794b4; end: 10a3794c3;  */

void FUN_10a3794b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc8678;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a3794c4; end: 10a3794e3;  */

void FUN_10a3794c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc8678;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3794e4; end: 10a3794ef;  */

void FUN_10a3794e4(long param_1)

{
  long lStack_28;
  
  func_0x00010ab36d14(param_1 + 0x270);
  if (*(long *)(param_1 + 600) != 0) {
    *(long *)(param_1 + 0x260) = *(long *)(param_1 + 600);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x240) != 0) {
    *(long *)(param_1 + 0x248) = *(long *)(param_1 + 0x240);
    __ZdlPv();
  }
  func_0x00010ab36cbc(param_1 + 0x230);
  __ZNSt3__15mutexD1Ev(param_1 + 0x1f0);
  func_0x00010ab36c64(param_1 + 0x1e0);
  lStack_28 = param_1 + 0x1c8;
  FUN_10ab2c034(&lStack_28);
  lStack_28 = param_1 + 0x1b0;
  FUN_10a131d74(&lStack_28);
  FUN_10a3786c8(param_1 + 0x160);
  func_0x00010a05248c(param_1 + 0x150);
  FUN_10a1449ec(param_1 + 0xf8);
  func_0x00010aa71c88(param_1 + 0x18);
  return;
}


