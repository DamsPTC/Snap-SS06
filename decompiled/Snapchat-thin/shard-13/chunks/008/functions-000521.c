/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10acc7c64; end: 10acc857f;  */

/* WARNING: Removing unreachable block (ram,0x00010acc8044) */
/* WARNING: Removing unreachable block (ram,0x00010acc8254) */

void FUN_10acc7c64(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  undefined8 ****ppppuVar3;
  char cVar4;
  bool bVar5;
  undefined8 ****ppppuVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 ****ppppuVar13;
  undefined8 *puVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  long *plVar23;
  ulong uVar24;
  long *plVar25;
  ulong uVar26;
  undefined8 ***pppuStack_168;
  long *plStack_160;
  byte bStack_151;
  long *plStack_150;
  long *plStack_148;
  undefined8 ***pppuStack_140;
  long *plStack_138;
  int aiStack_130 [2];
  undefined8 *puStack_128;
  undefined8 ***pppuStack_120;
  ulong uStack_118;
  byte bStack_109;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  long alStack_c8 [3];
  long *plStack_b0;
  long *plStack_a8;
  long lStack_a0;
  undefined8 ***pppuStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  
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
  FUN_10acc8580(param_2,param_3);
  FUN_10acc85e8(param_5);
  func_0x000109898570(&pppuStack_168,param_2,param_4);
  func_0x0001098849a4(aiStack_130,param_2,param_4 + 0x10);
  plStack_148 = (long *)0x0;
  plStack_150 = (long *)0x0;
  plStack_138 = (long *)0x0;
  pppuStack_140 = (undefined8 ****)0x0;
  if (aiStack_130[0] == 7) {
    plVar12 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,puStack_128);
    plVar11 = param_2;
    plStack_b0 = plVar12;
    (**(code **)(*param_2 + 0x58))(param_2);
    func_0x000109899ccc();
    plVar12 = param_2;
    (**(code **)(*param_2 + 0x2e8))(param_2,&plStack_b0,plVar11);
    if ((int)plVar12 != 0) {
      plVar11 = param_2;
      plVar23 = plStack_b0;
      FUN_10acbe9b8();
      plStack_150 = plVar11;
      plStack_148 = plVar23;
      FUN_10a12c3a8(&pppuStack_90,alStack_c8,aiStack_130);
      plVar23 = plStack_88;
      pppuStack_140 = pppuStack_90;
      plVar11 = plStack_138;
      pppuStack_90 = (undefined8 ****)0x0;
      plStack_88 = (long *)0x0;
      plStack_138 = plVar23;
      if (plVar11 != (long *)0x0) {
        plVar23 = plVar11 + 1;
        do {
          lVar17 = *plVar23;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar5) {
            *plVar23 = lVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      plVar11 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        plVar23 = plStack_88 + 1;
        do {
          lVar17 = *plVar23;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar5) {
            *plVar23 = lVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plStack_88 + 0x10))(plStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
    }
    if (plStack_b0 != (long *)0x0) {
      (**(code **)*plStack_b0)();
    }
    if (((ulong)plVar12 & 1) != 0) {
      if ((3 < aiStack_130[0]) && (puStack_128 != (undefined8 *)0x0)) {
        (**(code **)*puStack_128)();
      }
      plVar12 = (long *)0x38;
      __Znwm();
      plVar12[4] = (long)plStack_148;
      plVar12[3] = (long)plStack_150;
      plVar11 = plVar12 + 1;
      *plVar11 = 0;
      plVar12[2] = 0;
      *plVar12 = (long)&PTR_FUN_110c6b700;
      plVar12[6] = (long)plStack_138;
      plVar12[5] = (long)pppuStack_140;
      plStack_b0 = (long *)0x0;
      plStack_a8 = (long *)0x0;
      lStack_a0 = 0;
      if (plVar12[4] == 0) {
        lVar17 = 0;
      }
      else {
        FUN_10acc7b68(&plStack_b0);
        lVar17 = plVar12[4];
      }
      plVar23 = plStack_a8;
      _memcpy(plStack_b0,plVar12[3],lVar17);
      if ((char)plVar10[0xc] == '\x01') {
        FUN_10a00946c(&UNK_10f6a1d58);
        goto LAB_10acc83a8;
      }
      plVar2 = plStack_160;
      ppppuVar6 = (undefined8 ****)pppuStack_168;
      if (-1 < (char)bStack_151) {
        plVar2 = (long *)(ulong)bStack_151;
        ppppuVar6 = &pppuStack_168;
      }
      if ((long *)0x7ffffffffffffff7 < plVar2) {
        func_0x000109ffde50();
        goto LAB_10acc83a8;
      }
      if (plVar2 < (long *)0x17) {
        uStack_80 = (long *)CONCAT17((char)plVar2,(undefined7)uStack_80);
        ppppuVar13 = &pppuStack_90;
        if (plVar2 != (long *)0x0) goto LAB_10acc7f34;
      }
      else {
        ppppuVar3 = (undefined8 ****)0x19;
        if (((ulong)plVar2 | 7) != 0x17) {
          ppppuVar3 = (undefined8 ****)(((ulong)plVar2 | 7) + 1);
        }
        ppppuVar13 = ppppuVar3;
        __Znwm();
        uStack_80 = (long *)((ulong)ppppuVar3 | 0x8000000000000000);
        pppuStack_90 = ppppuVar13;
        plStack_88 = plVar2;
LAB_10acc7f34:
        _memmove(ppppuVar13,ppppuVar6,plVar2);
      }
      *(undefined1 *)((long)ppppuVar13 + (long)plVar2) = 0;
      FUN_10ac9e388(plVar10,&pppuStack_90,0);
      plVar2 = plVar10 + 7;
      plVar19 = plVar2;
      func_0x000107c2b05c(plVar2,&pppuStack_90);
      plVar20 = (long *)plVar10[8];
      if (plVar20 != (long *)0x0) {
        uVar26 = (long)plVar20 - 1;
        if (((ulong)plVar20 & uVar26) == 0) {
          plVar23 = (long *)(uVar26 & (ulong)plVar19);
        }
        else {
          plVar23 = plVar19;
          if (plVar20 <= plVar19) {
            uVar18 = 0;
            if (plVar20 != (long *)0x0) {
              uVar18 = (ulong)plVar19 / (ulong)plVar20;
            }
            plVar23 = (long *)((long)plVar19 - uVar18 * (long)plVar20);
          }
        }
        puVar14 = *(undefined8 **)(*plVar2 + (long)plVar23 * 8);
        if (puVar14 != (undefined8 *)0x0) {
          for (plVar25 = (long *)*puVar14; plVar25 != (long *)0x0; plVar25 = (long *)*plVar25) {
            plVar15 = (long *)plVar25[1];
            if (plVar15 == plVar19) {
              plVar15 = plVar2;
              func_0x000107c2b068(plVar2,plVar25 + 2,&pppuStack_90);
              if (((ulong)plVar15 & 1) != 0) goto LAB_10acc81d4;
            }
            else {
              if (((ulong)plVar20 & uVar26) == 0) {
                plVar15 = (long *)((ulong)plVar15 & uVar26);
              }
              else if (plVar20 <= plVar15) {
                uVar18 = 0;
                if (plVar20 != (long *)0x0) {
                  uVar18 = (ulong)plVar15 / (ulong)plVar20;
                }
                plVar15 = (long *)((long)plVar15 - uVar18 * (long)plVar20);
              }
              if (plVar15 != plVar23) break;
            }
          }
        }
      }
      plVar25 = (long *)0x60;
      __Znwm();
      pppuStack_140 = (undefined8 ***)0x0;
      *plVar25 = 0;
      plVar25[1] = (long)plVar19;
      plVar25[3] = (long)plStack_88;
      plVar25[2] = (long)pppuStack_90;
      plVar25[4] = (long)uStack_80;
      plVar25[9] = 0;
      plVar25[8] = 0;
      *(undefined1 *)(plVar25 + 6) = 0;
      plVar25[5] = (long)&PTR_FUN_110c6c2d0;
      *(undefined2 *)((long)plVar25 + 0x32) = 0xf;
      plVar25[0xb] = 0;
      plVar25[10] = 0;
      puVar14 = (undefined8 *)0x20;
      plStack_150 = plVar25;
      plStack_148 = plVar2;
      __Znwm();
      *puVar14 = &PTR_FUN_110c6b6b0;
      puVar14[2] = 0;
      puVar14[3] = 0;
      puVar14[1] = 0;
      FUN_10acbeb18();
      plVar15 = (long *)plVar25[0xb];
      plVar25[0xb] = (long)puVar14;
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 8))();
      }
      pppuStack_140 = (undefined8 ***)CONCAT71(pppuStack_140._1_7_,1);
      if ((plVar20 == (long *)0x0) ||
         (*(float *)(plVar10 + 0xb) * (float)plVar20 < (float)(plVar10[10] + 1))) {
        uVar26 = 1;
        if ((long *)0x2 < plVar20) {
          uVar26 = (ulong)(((ulong)plVar20 & (long)plVar20 - 1U) != 0);
        }
        uVar26 = uVar26 | (long)plVar20 << 1;
        uVar18 = (ulong)((float)(plVar10[10] + 1) / *(float *)(plVar10 + 0xb));
        if (uVar26 <= uVar18) {
          uVar26 = uVar18;
        }
        FUN_10a4ba824(plVar2,uVar26);
        plVar20 = (long *)plVar10[8];
        if (((ulong)plVar20 & (long)plVar20 - 1U) == 0) {
          plVar23 = (long *)((long)plVar20 - 1U & (ulong)plVar19);
        }
        else {
          plVar23 = plVar19;
          if (plVar20 <= plVar19) {
            uVar26 = 0;
            if (plVar20 != (long *)0x0) {
              uVar26 = (ulong)plVar19 / (ulong)plVar20;
            }
            plVar23 = (long *)((long)plVar19 - uVar26 * (long)plVar20);
          }
        }
      }
      lVar17 = *plVar2;
      plVar19 = *(long **)(lVar17 + (long)plVar23 * 8);
      if (plVar19 == (long *)0x0) {
        plVar19 = plVar10 + 9;
        *plStack_150 = *plVar19;
        *plVar19 = (long)plStack_150;
        *(long **)(lVar17 + (long)plVar23 * 8) = plVar19;
        if (*plStack_150 != 0) {
          plVar23 = *(long **)(*plStack_150 + 8);
          if (((ulong)plVar20 & (long)plVar20 - 1U) == 0) {
            plVar23 = (long *)((ulong)plVar23 & (long)plVar20 - 1U);
          }
          else if (plVar20 <= plVar23) {
            uVar26 = 0;
            if (plVar20 != (long *)0x0) {
              uVar26 = (ulong)plVar23 / (ulong)plVar20;
            }
            plVar23 = (long *)((long)plVar23 - uVar26 * (long)plVar20);
          }
          *(long **)(*plVar2 + (long)plVar23 * 8) = plStack_150;
        }
      }
      else {
        *plStack_150 = *plVar19;
        *plVar19 = (long)plStack_150;
      }
      plVar10[10] = plVar10[10] + 1;
      plVar25 = plStack_150;
LAB_10acc81d4:
      func_0x00010a5499ec(plVar10,1,plVar25 + 5,&pppuStack_90);
      if (*(char *)(plVar10[0x11] + 8) == '\x01') {
        FUN_10a54a030(&plStack_150,plVar10 + 5);
        FUN_10a549a74(plVar10 + 0x10,&plStack_150,&pppuStack_90);
        plVar10 = plStack_148;
        if (plStack_148 != (long *)0x0) {
          plVar23 = plStack_148 + 1;
          do {
            lVar17 = *plVar23;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar5) {
              *plVar23 = lVar17 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar17 == 0) {
            (**(code **)(*plStack_148 + 0x10))(plStack_148);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          }
        }
      }
      if (plStack_b0 != (long *)0x0) {
        __ZdlPv();
      }
      do {
        lVar17 = *plVar11;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *plVar11 = lVar17 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
      if ((char)bStack_151 < '\0') {
        __ZdlPv(pppuStack_168);
      }
      *param_1 = 0;
      plVar10 = plVar9 + 0x4b;
      lVar17 = plVar9[0x59];
      uVar26 = lVar17 - 1;
      plVar9[0x59] = uVar26;
      if (uVar26 < 8) {
        uVar26 = plVar10[lVar17 + 2];
        if (plVar9[0x5a] == uVar26) {
          return;
        }
      }
      else {
        uVar26 = *(ulong *)(plVar9[0x57] + -8);
        plVar9[0x57] = plVar9[0x57] + -8;
        if (plVar9[0x5a] == uVar26) {
          return;
        }
      }
      plVar12 = (long *)*plVar10;
      plVar11 = (long *)plVar9[0x4c];
      lVar17 = (long)plVar11 - (long)plVar12;
      uVar18 = lVar17 >> 4;
      if (uVar18 < uVar26) {
        uVar24 = uVar26 - uVar18;
        lVar22 = plVar9[0x4d];
        if ((ulong)(lVar22 - (long)plVar11 >> 4) < uVar24) {
          if (uVar26 >> 0x3c == 0) {
            uVar16 = lVar22 - (long)plVar12 >> 3;
            if (uVar16 <= uVar26) {
              uVar16 = uVar26;
            }
            if (0x7fffffffffffffef < (ulong)(lVar22 - (long)plVar12)) {
              uVar16 = 0xfffffffffffffff;
            }
            plStack_68 = plVar10;
            if (uVar16 >> 0x3c == 0) {
              lVar8 = uVar16 << 4;
              __Znwm();
              lVar1 = lVar8 + lVar17;
              _bzero(lVar1,uVar24 * 0x10);
              lVar21 = lVar1 + uVar18 * -0x10;
              _memcpy(lVar21,plVar12,lVar17);
              *plVar10 = lVar21;
              plVar9[0x4c] = lVar1 + uVar24 * 0x10;
              plVar9[0x4d] = lVar8 + uVar16 * 0x10;
              plStack_88 = plVar12;
              uStack_80 = plVar12;
              plStack_78 = plVar12;
              lStack_70 = lVar22;
              func_0x00010988c1b8(&plStack_88);
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
        _bzero(plVar11,uVar24 * 0x10);
        plVar9[0x4c] = (long)(plVar11 + uVar24 * 2);
      }
      else if (uVar26 < uVar18) {
        while (plVar11 != plVar12 + uVar26 * 2) {
          plVar11 = plVar11 + -2;
          func_0x00010988c204(plVar11);
        }
        plVar9[0x4c] = (long)(plVar12 + uVar26 * 2);
      }
code_r0x00010988c138:
      plVar9[0x5a] = uVar26;
      return;
    }
  }
  puStack_108 = &DAT_10f58255b;
  uStack_100 = 9;
  func_0x0001098998d4(auStack_f8,&puStack_108);
  FUN_109feb280(auStack_e0,&UNK_10f493d5b,auStack_f8);
  FUN_10a012db0(alStack_c8,auStack_e0,&UNK_10f582552);
  func_0x000109899970(&pppuStack_120,param_2,aiStack_130);
  if (-1 < (char)bStack_109) {
    uStack_118 = (ulong)bStack_109;
    pppuStack_120 = &pppuStack_120;
  }
  plVar9 = alStack_c8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (plVar9,pppuStack_120,uStack_118);
  plStack_a8 = (long *)plVar9[1];
  plStack_b0 = (long *)*plVar9;
  lStack_a0 = plVar9[2];
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = 0;
  FUN_10a012db0(&pppuStack_90,&plStack_b0,&DAT_10f638984);
  func_0x00010989842c(&pppuStack_90);
LAB_10acc83a8:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10acc83ac);
  (*pcVar7)();
}



/* Entry: 10acc8580; end: 10acc85e7;  */

void FUN_10acc8580(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  char cVar3;
  bool bVar4;
  undefined8 ****ppppuVar5;
  code *pcVar6;
  long lVar7;
  undefined *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 ****ppppuVar12;
  undefined8 uVar13;
  undefined4 *extraout_x8;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  long *unaff_x20;
  long lVar21;
  long lVar22;
  long *plVar23;
  ulong uVar24;
  long *plVar25;
  undefined8 *puStack_108;
  long *plStack_100;
  undefined8 ***pppuStack_f8;
  ulong uStack_f0;
  byte bStack_e1;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 ***pppuStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long lStack_a0;
  long *plStack_98;
  
  lVar16 = param_1;
  func_0x000109898688();
  if (lVar16 != 0) {
    FUN_10a053854(param_1,lVar16);
    if (param_1 != 0) {
      param_4 = 0;
      ___dynamic_cast();
      if (param_1 != 0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar8 = &UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)puVar8 == 2) {
    return;
  }
  plVar9 = (long *)0x2;
  uVar13 = 0;
  FUN_10a052ee0(2,0,puVar8);
  plVar10 = plVar9;
  (**(code **)(*plVar9 + 0x58))();
  if ((ulong)plVar10[0x59] < 8) {
    plVar10[plVar10[0x59] + 0x4e] = plVar10[0x5a];
    plVar10[0x59] = plVar10[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar10 + 0x4b);
  }
  plVar11 = plVar9;
  FUN_10acc8580(plVar9,uVar13);
  FUN_10a1d49a0(param_4);
  func_0x000109898570(&pppuStack_f8,plVar9,puVar8);
  FUN_10a13a07c(&puStack_108,plVar9,puVar8 + 0x10);
  lStack_d8 = 0;
  uStack_d0 = 0;
  lStack_e0 = 0;
  if (puStack_108[1] == 0) {
    uVar13 = 0;
  }
  else {
    func_0x000107c27d58(&lStack_e0);
    uVar13 = puStack_108[1];
  }
  _memcpy(lStack_e0,*puStack_108,uVar13);
  if ((char)plVar11[0xc] == '\x01') {
    FUN_10a00946c(&UNK_10f6a1d58);
LAB_10acc8b30:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10acc8b34);
    (*pcVar6)();
  }
  uVar20 = uStack_f0;
  ppppuVar5 = (undefined8 ****)pppuStack_f8;
  if (-1 < (char)bStack_e1) {
    uVar20 = (ulong)bStack_e1;
    ppppuVar5 = &pppuStack_f8;
  }
  if (0x7ffffffffffffff7 < uVar20) {
    func_0x000109ffde50();
    goto LAB_10acc8b30;
  }
  if (uVar20 < 0x17) {
    uStack_b8 = (long *)CONCAT17((char)uVar20,(undefined7)uStack_b8);
    ppppuVar12 = &pppuStack_c8;
    if (uVar20 != 0) goto LAB_10acc8760;
  }
  else {
    ppppuVar2 = (undefined8 ****)0x19;
    if ((uVar20 | 7) != 0x17) {
      ppppuVar2 = (undefined8 ****)((uVar20 | 7) + 1);
    }
    ppppuVar12 = ppppuVar2;
    __Znwm();
    uStack_b8 = (long *)((ulong)ppppuVar2 | 0x8000000000000000);
    pppuStack_c8 = ppppuVar12;
    uStack_c0 = uVar20;
LAB_10acc8760:
    _memmove(ppppuVar12,ppppuVar5,uVar20);
  }
  *(undefined1 *)((long)ppppuVar12 + uVar20) = 0;
  FUN_10ac9e388(plVar11,&pppuStack_c8,0);
  plVar9 = plVar11 + 7;
  plVar19 = plVar9;
  func_0x000107c2b05c(plVar9,&pppuStack_c8);
  plVar25 = (long *)plVar11[8];
  if (plVar25 != (long *)0x0) {
    uVar20 = (long)plVar25 - 1;
    if (((ulong)plVar25 & uVar20) == 0) {
      unaff_x20 = (long *)(uVar20 & (ulong)plVar19);
    }
    else {
      unaff_x20 = plVar19;
      if (plVar25 <= plVar19) {
        uVar18 = 0;
        if (plVar25 != (long *)0x0) {
          uVar18 = (ulong)plVar19 / (ulong)plVar25;
        }
        unaff_x20 = (long *)((long)plVar19 - uVar18 * (long)plVar25);
      }
    }
    puVar14 = *(undefined8 **)(*plVar9 + (long)unaff_x20 * 8);
    if (puVar14 != (undefined8 *)0x0) {
      for (plVar23 = (long *)*puVar14; plVar23 != (long *)0x0; plVar23 = (long *)*plVar23) {
        plVar15 = (long *)plVar23[1];
        if (plVar15 == plVar19) {
          plVar15 = plVar9;
          func_0x000107c2b068(plVar9,plVar23 + 2,&pppuStack_c8);
          if (((ulong)plVar15 & 1) != 0) goto LAB_10acc8a08;
        }
        else {
          if (((ulong)plVar25 & uVar20) == 0) {
            plVar15 = (long *)((ulong)plVar15 & uVar20);
          }
          else if (plVar25 <= plVar15) {
            uVar18 = 0;
            if (plVar25 != (long *)0x0) {
              uVar18 = (ulong)plVar15 / (ulong)plVar25;
            }
            plVar15 = (long *)((long)plVar15 - uVar18 * (long)plVar25);
          }
          if (plVar15 != unaff_x20) break;
        }
      }
    }
  }
  plVar23 = (long *)0x60;
  __Znwm();
  lStack_a0 = 0;
  *plVar23 = 0;
  plVar23[1] = (long)plVar19;
  plStack_b0 = plVar23;
  plStack_a8 = plVar9;
  if ((long)uStack_b8 < 0) {
    func_0x000107c3192c(plVar23 + 2,pppuStack_c8,uStack_c0);
  }
  else {
    plVar23[3] = uStack_c0;
    plVar23[2] = (long)pppuStack_c8;
    plVar23[4] = (long)uStack_b8;
  }
  lVar22 = lStack_d8;
  lVar16 = lStack_e0;
  plVar23[9] = 0;
  plVar23[8] = 0;
  *(undefined1 *)(plVar23 + 6) = 0;
  plVar23[5] = (long)&PTR_FUN_110c6c2d0;
  *(undefined2 *)((long)plVar23 + 0x32) = 0xf;
  plVar23[0xb] = 0;
  plVar23[10] = 0;
  puVar14 = (undefined8 *)0x20;
  __Znwm();
  *puVar14 = &PTR_FUN_110c6b650;
  puVar14[2] = 0;
  puVar14[3] = 0;
  puVar14[1] = 0;
  FUN_10a05151c(puVar14 + 1,lVar16,lVar22,lVar22 - lVar16);
  plVar15 = (long *)plVar23[0xb];
  plVar23[0xb] = (long)puVar14;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 8))();
  }
  lStack_a0 = CONCAT71(lStack_a0._1_7_,1);
  if ((plVar25 == (long *)0x0) ||
     (*(float *)(plVar11 + 0xb) * (float)plVar25 < (float)(plVar11[10] + 1))) {
    uVar20 = 1;
    if ((long *)0x2 < plVar25) {
      uVar20 = (ulong)(((ulong)plVar25 & (long)plVar25 - 1U) != 0);
    }
    uVar20 = uVar20 | (long)plVar25 << 1;
    uVar18 = (ulong)((float)(plVar11[10] + 1) / *(float *)(plVar11 + 0xb));
    if (uVar20 <= uVar18) {
      uVar20 = uVar18;
    }
    FUN_10a4ba824(plVar9,uVar20);
    plVar25 = (long *)plVar11[8];
    if (((ulong)plVar25 & (long)plVar25 - 1U) == 0) {
      unaff_x20 = (long *)((long)plVar25 - 1U & (ulong)plVar19);
    }
    else {
      unaff_x20 = plVar19;
      if (plVar25 <= plVar19) {
        uVar20 = 0;
        if (plVar25 != (long *)0x0) {
          uVar20 = (ulong)plVar19 / (ulong)plVar25;
        }
        unaff_x20 = (long *)((long)plVar19 - uVar20 * (long)plVar25);
      }
    }
  }
  lVar16 = *plVar9;
  plVar19 = *(long **)(lVar16 + (long)unaff_x20 * 8);
  if (plVar19 == (long *)0x0) {
    plVar19 = plVar11 + 9;
    *plStack_b0 = *plVar19;
    *plVar19 = (long)plStack_b0;
    *(long **)(lVar16 + (long)unaff_x20 * 8) = plVar19;
    if (*plStack_b0 != 0) {
      plVar19 = *(long **)(*plStack_b0 + 8);
      if (((ulong)plVar25 & (long)plVar25 - 1U) == 0) {
        plVar19 = (long *)((ulong)plVar19 & (long)plVar25 - 1U);
      }
      else if (plVar25 <= plVar19) {
        uVar20 = 0;
        if (plVar25 != (long *)0x0) {
          uVar20 = (ulong)plVar19 / (ulong)plVar25;
        }
        plVar19 = (long *)((long)plVar19 - uVar20 * (long)plVar25);
      }
      *(long **)(*plVar9 + (long)plVar19 * 8) = plStack_b0;
    }
  }
  else {
    *plStack_b0 = *plVar19;
    *plVar19 = (long)plStack_b0;
  }
  plVar11[10] = plVar11[10] + 1;
  plVar23 = plStack_b0;
LAB_10acc8a08:
  func_0x00010a5499ec(plVar11,1,plVar23 + 5,&pppuStack_c8);
  if (*(char *)(plVar11[0x11] + 8) == '\x01') {
    FUN_10a54a030(&plStack_b0,plVar11 + 5);
    FUN_10a549a74(plVar11 + 0x10,&plStack_b0,&pppuStack_c8);
    plVar9 = plStack_a8;
    if (plStack_a8 != (long *)0x0) {
      plVar11 = plStack_a8 + 1;
      do {
        lVar16 = *plVar11;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *plVar11 = lVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
  }
  if ((long)uStack_b8 < 0) {
    __ZdlPv(pppuStack_c8);
  }
  if (lStack_e0 != 0) {
    lStack_d8 = lStack_e0;
    __ZdlPv();
  }
  if (plStack_100 != (long *)0x0) {
    plVar9 = plStack_100 + 1;
    do {
      lVar16 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar16 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_100 + 0x10))(plStack_100);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_100);
    }
  }
  if ((char)bStack_e1 < '\0') {
    __ZdlPv(pppuStack_f8);
  }
  *extraout_x8 = 0;
  plVar9 = plVar10 + 0x4b;
  lVar16 = plVar10[0x59];
  uVar20 = lVar16 - 1;
  plVar10[0x59] = uVar20;
  if (uVar20 < 8) {
    uVar20 = plVar9[lVar16 + 2];
    if (plVar10[0x5a] == uVar20) {
      return;
    }
  }
  else {
    uVar20 = *(ulong *)(plVar10[0x57] + -8);
    plVar10[0x57] = plVar10[0x57] + -8;
    if (plVar10[0x5a] == uVar20) {
      return;
    }
  }
  plVar11 = (long *)*plVar9;
  plVar19 = (long *)plVar10[0x4c];
  lVar16 = (long)plVar19 - (long)plVar11;
  uVar18 = lVar16 >> 4;
  if (uVar18 < uVar20) {
    uVar24 = uVar20 - uVar18;
    lVar22 = plVar10[0x4d];
    if ((ulong)(lVar22 - (long)plVar19 >> 4) < uVar24) {
      if (uVar20 >> 0x3c == 0) {
        uVar17 = lVar22 - (long)plVar11 >> 3;
        if (uVar17 <= uVar20) {
          uVar17 = uVar20;
        }
        if (0x7fffffffffffffef < (ulong)(lVar22 - (long)plVar11)) {
          uVar17 = 0xfffffffffffffff;
        }
        plStack_98 = plVar9;
        if (uVar17 >> 0x3c == 0) {
          lVar7 = uVar17 << 4;
          __Znwm();
          lVar1 = lVar7 + lVar16;
          _bzero(lVar1,uVar24 * 0x10);
          lVar21 = lVar1 + uVar18 * -0x10;
          _memcpy(lVar21,plVar11,lVar16);
          *plVar9 = lVar21;
          plVar10[0x4c] = lVar1 + uVar24 * 0x10;
          plVar10[0x4d] = lVar7 + uVar17 * 0x10;
          uStack_b8 = plVar11;
          plStack_b0 = plVar11;
          plStack_a8 = plVar11;
          lStack_a0 = lVar22;
          func_0x00010988c1b8(&uStack_b8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar6)();
    }
    _bzero(plVar19,uVar24 * 0x10);
    plVar10[0x4c] = (long)(plVar19 + uVar24 * 2);
  }
  else if (uVar20 < uVar18) {
    while (plVar19 != plVar11 + uVar20 * 2) {
      plVar19 = plVar19 + -2;
      func_0x00010988c204(plVar19);
    }
    plVar10[0x4c] = (long)(plVar11 + uVar20 * 2);
  }
code_r0x00010988c138:
  plVar10[0x5a] = uVar20;
  return;
}



/* Entry: 10acc85e8; end: 10acc860b;  */

void FUN_10acc85e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  char cVar3;
  bool bVar4;
  undefined8 ****ppppuVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 ****ppppuVar11;
  undefined8 uVar12;
  undefined4 *extraout_x8;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  long *unaff_x20;
  long lVar20;
  long lVar21;
  long *plVar22;
  ulong uVar23;
  long *plVar24;
  undefined8 *puStack_e8;
  long *plStack_e0;
  undefined8 ***pppuStack_d8;
  ulong uStack_d0;
  byte bStack_c1;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 ***pppuStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar8 = (long *)0x2;
  uVar12 = 0;
  FUN_10a052ee0(2,0,param_1);
  plVar9 = plVar8;
  (**(code **)(*plVar8 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  plVar10 = plVar8;
  FUN_10acc8580(plVar8,uVar12);
  FUN_10a1d49a0(param_4);
  func_0x000109898570(&pppuStack_d8,plVar8,param_1);
  FUN_10a13a07c(&puStack_e8,plVar8,param_1 + 0x10);
  lStack_b8 = 0;
  uStack_b0 = 0;
  lStack_c0 = 0;
  if (puStack_e8[1] == 0) {
    uVar12 = 0;
  }
  else {
    func_0x000107c27d58(&lStack_c0);
    uVar12 = puStack_e8[1];
  }
  _memcpy(lStack_c0,*puStack_e8,uVar12);
  if ((char)plVar10[0xc] == '\x01') {
    FUN_10a00946c(&UNK_10f6a1d58);
LAB_10acc8b30:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10acc8b34);
    (*pcVar6)();
  }
  uVar19 = uStack_d0;
  ppppuVar5 = (undefined8 ****)pppuStack_d8;
  if (-1 < (char)bStack_c1) {
    uVar19 = (ulong)bStack_c1;
    ppppuVar5 = &pppuStack_d8;
  }
  if (0x7ffffffffffffff7 < uVar19) {
    func_0x000109ffde50();
    goto LAB_10acc8b30;
  }
  if (uVar19 < 0x17) {
    uStack_98 = (long *)CONCAT17((char)uVar19,(undefined7)uStack_98);
    ppppuVar11 = &pppuStack_a8;
    if (uVar19 != 0) goto LAB_10acc8760;
  }
  else {
    ppppuVar2 = (undefined8 ****)0x19;
    if ((uVar19 | 7) != 0x17) {
      ppppuVar2 = (undefined8 ****)((uVar19 | 7) + 1);
    }
    ppppuVar11 = ppppuVar2;
    __Znwm();
    uStack_98 = (long *)((ulong)ppppuVar2 | 0x8000000000000000);
    pppuStack_a8 = ppppuVar11;
    uStack_a0 = uVar19;
LAB_10acc8760:
    _memmove(ppppuVar11,ppppuVar5,uVar19);
  }
  *(undefined1 *)((long)ppppuVar11 + uVar19) = 0;
  FUN_10ac9e388(plVar10,&pppuStack_a8,0);
  plVar8 = plVar10 + 7;
  plVar18 = plVar8;
  func_0x000107c2b05c(plVar8,&pppuStack_a8);
  plVar24 = (long *)plVar10[8];
  if (plVar24 != (long *)0x0) {
    uVar19 = (long)plVar24 - 1;
    if (((ulong)plVar24 & uVar19) == 0) {
      unaff_x20 = (long *)(uVar19 & (ulong)plVar18);
    }
    else {
      unaff_x20 = plVar18;
      if (plVar24 <= plVar18) {
        uVar17 = 0;
        if (plVar24 != (long *)0x0) {
          uVar17 = (ulong)plVar18 / (ulong)plVar24;
        }
        unaff_x20 = (long *)((long)plVar18 - uVar17 * (long)plVar24);
      }
    }
    puVar13 = *(undefined8 **)(*plVar8 + (long)unaff_x20 * 8);
    if (puVar13 != (undefined8 *)0x0) {
      for (plVar22 = (long *)*puVar13; plVar22 != (long *)0x0; plVar22 = (long *)*plVar22) {
        plVar14 = (long *)plVar22[1];
        if (plVar14 == plVar18) {
          plVar14 = plVar8;
          func_0x000107c2b068(plVar8,plVar22 + 2,&pppuStack_a8);
          if (((ulong)plVar14 & 1) != 0) goto LAB_10acc8a08;
        }
        else {
          if (((ulong)plVar24 & uVar19) == 0) {
            plVar14 = (long *)((ulong)plVar14 & uVar19);
          }
          else if (plVar24 <= plVar14) {
            uVar17 = 0;
            if (plVar24 != (long *)0x0) {
              uVar17 = (ulong)plVar14 / (ulong)plVar24;
            }
            plVar14 = (long *)((long)plVar14 - uVar17 * (long)plVar24);
          }
          if (plVar14 != unaff_x20) break;
        }
      }
    }
  }
  plVar22 = (long *)0x60;
  __Znwm();
  lStack_80 = 0;
  *plVar22 = 0;
  plVar22[1] = (long)plVar18;
  plStack_90 = plVar22;
  plStack_88 = plVar8;
  if ((long)uStack_98 < 0) {
    func_0x000107c3192c(plVar22 + 2,pppuStack_a8,uStack_a0);
  }
  else {
    plVar22[3] = uStack_a0;
    plVar22[2] = (long)pppuStack_a8;
    plVar22[4] = (long)uStack_98;
  }
  lVar21 = lStack_b8;
  lVar15 = lStack_c0;
  plVar22[9] = 0;
  plVar22[8] = 0;
  *(undefined1 *)(plVar22 + 6) = 0;
  plVar22[5] = (long)&PTR_FUN_110c6c2d0;
  *(undefined2 *)((long)plVar22 + 0x32) = 0xf;
  plVar22[0xb] = 0;
  plVar22[10] = 0;
  puVar13 = (undefined8 *)0x20;
  __Znwm();
  *puVar13 = &PTR_FUN_110c6b650;
  puVar13[2] = 0;
  puVar13[3] = 0;
  puVar13[1] = 0;
  FUN_10a05151c(puVar13 + 1,lVar15,lVar21,lVar21 - lVar15);
  plVar14 = (long *)plVar22[0xb];
  plVar22[0xb] = (long)puVar13;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 8))();
  }
  lStack_80 = CONCAT71(lStack_80._1_7_,1);
  if ((plVar24 == (long *)0x0) ||
     (*(float *)(plVar10 + 0xb) * (float)plVar24 < (float)(plVar10[10] + 1))) {
    uVar19 = 1;
    if ((long *)0x2 < plVar24) {
      uVar19 = (ulong)(((ulong)plVar24 & (long)plVar24 - 1U) != 0);
    }
    uVar19 = uVar19 | (long)plVar24 << 1;
    uVar17 = (ulong)((float)(plVar10[10] + 1) / *(float *)(plVar10 + 0xb));
    if (uVar19 <= uVar17) {
      uVar19 = uVar17;
    }
    FUN_10a4ba824(plVar8,uVar19);
    plVar24 = (long *)plVar10[8];
    if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
      unaff_x20 = (long *)((long)plVar24 - 1U & (ulong)plVar18);
    }
    else {
      unaff_x20 = plVar18;
      if (plVar24 <= plVar18) {
        uVar19 = 0;
        if (plVar24 != (long *)0x0) {
          uVar19 = (ulong)plVar18 / (ulong)plVar24;
        }
        unaff_x20 = (long *)((long)plVar18 - uVar19 * (long)plVar24);
      }
    }
  }
  lVar15 = *plVar8;
  plVar18 = *(long **)(lVar15 + (long)unaff_x20 * 8);
  if (plVar18 == (long *)0x0) {
    plVar18 = plVar10 + 9;
    *plStack_90 = *plVar18;
    *plVar18 = (long)plStack_90;
    *(long **)(lVar15 + (long)unaff_x20 * 8) = plVar18;
    if (*plStack_90 != 0) {
      plVar18 = *(long **)(*plStack_90 + 8);
      if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
        plVar18 = (long *)((ulong)plVar18 & (long)plVar24 - 1U);
      }
      else if (plVar24 <= plVar18) {
        uVar19 = 0;
        if (plVar24 != (long *)0x0) {
          uVar19 = (ulong)plVar18 / (ulong)plVar24;
        }
        plVar18 = (long *)((long)plVar18 - uVar19 * (long)plVar24);
      }
      *(long **)(*plVar8 + (long)plVar18 * 8) = plStack_90;
    }
  }
  else {
    *plStack_90 = *plVar18;
    *plVar18 = (long)plStack_90;
  }
  plVar10[10] = plVar10[10] + 1;
  plVar22 = plStack_90;
LAB_10acc8a08:
  func_0x00010a5499ec(plVar10,1,plVar22 + 5,&pppuStack_a8);
  if (*(char *)(plVar10[0x11] + 8) == '\x01') {
    FUN_10a54a030(&plStack_90,plVar10 + 5);
    FUN_10a549a74(plVar10 + 0x10,&plStack_90,&pppuStack_a8);
    plVar8 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar10 = plStack_88 + 1;
      do {
        lVar15 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
  }
  if ((long)uStack_98 < 0) {
    __ZdlPv(pppuStack_a8);
  }
  if (lStack_c0 != 0) {
    lStack_b8 = lStack_c0;
    __ZdlPv();
  }
  if (plStack_e0 != (long *)0x0) {
    plVar8 = plStack_e0 + 1;
    do {
      lVar15 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_e0);
    }
  }
  if ((char)bStack_c1 < '\0') {
    __ZdlPv(pppuStack_d8);
  }
  *extraout_x8 = 0;
  plVar8 = plVar9 + 0x4b;
  lVar15 = plVar9[0x59];
  uVar19 = lVar15 - 1;
  plVar9[0x59] = uVar19;
  if (uVar19 < 8) {
    uVar19 = plVar8[lVar15 + 2];
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
  plVar10 = (long *)*plVar8;
  plVar18 = (long *)plVar9[0x4c];
  lVar15 = (long)plVar18 - (long)plVar10;
  uVar17 = lVar15 >> 4;
  if (uVar17 < uVar19) {
    uVar23 = uVar19 - uVar17;
    lVar21 = plVar9[0x4d];
    if ((ulong)(lVar21 - (long)plVar18 >> 4) < uVar23) {
      if (uVar19 >> 0x3c == 0) {
        uVar16 = lVar21 - (long)plVar10 >> 3;
        if (uVar16 <= uVar19) {
          uVar16 = uVar19;
        }
        if (0x7fffffffffffffef < (ulong)(lVar21 - (long)plVar10)) {
          uVar16 = 0xfffffffffffffff;
        }
        plStack_78 = plVar8;
        if (uVar16 >> 0x3c == 0) {
          lVar7 = uVar16 << 4;
          __Znwm();
          lVar1 = lVar7 + lVar15;
          _bzero(lVar1,uVar23 * 0x10);
          lVar20 = lVar1 + uVar17 * -0x10;
          _memcpy(lVar20,plVar10,lVar15);
          *plVar8 = lVar20;
          plVar9[0x4c] = lVar1 + uVar23 * 0x10;
          plVar9[0x4d] = lVar7 + uVar16 * 0x10;
          uStack_98 = plVar10;
          plStack_90 = plVar10;
          plStack_88 = plVar10;
          lStack_80 = lVar21;
          func_0x00010988c1b8(&uStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar6)();
    }
    _bzero(plVar18,uVar23 * 0x10);
    plVar9[0x4c] = (long)(plVar18 + uVar23 * 2);
  }
  else if (uVar19 < uVar17) {
    while (plVar18 != plVar10 + uVar19 * 2) {
      plVar18 = plVar18 + -2;
      func_0x00010988c204(plVar18);
    }
    plVar9[0x4c] = (long)(plVar10 + uVar19 * 2);
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar19;
  return;
}



/* Entry: 10acc860c; end: 10acc8c1b;  */

void FUN_10acc860c(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 ****ppppuVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 ****ppppuVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  long *unaff_x20;
  long lVar20;
  long lVar21;
  long *plVar22;
  ulong uVar23;
  long *plVar24;
  undefined8 *puStack_d8;
  long *plStack_d0;
  undefined8 ***pppuStack_c8;
  ulong uStack_c0;
  byte bStack_b1;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 ***pppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  
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
  FUN_10acc8580(param_2,param_3);
  FUN_10a1d49a0(param_5);
  func_0x000109898570(&pppuStack_c8,param_2,param_4);
  FUN_10a13a07c(&puStack_d8,param_2,param_4 + 0x10);
  lStack_a8 = 0;
  uStack_a0 = 0;
  lStack_b0 = 0;
  if (puStack_d8[1] == 0) {
    uVar12 = 0;
  }
  else {
    func_0x000107c27d58(&lStack_b0);
    uVar12 = puStack_d8[1];
  }
  _memcpy(lStack_b0,*puStack_d8,uVar12);
  if ((char)plVar10[0xc] == '\x01') {
    FUN_10a00946c(&UNK_10f6a1d58);
LAB_10acc8b30:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10acc8b34);
    (*pcVar7)();
  }
  uVar19 = uStack_c0;
  ppppuVar6 = (undefined8 ****)pppuStack_c8;
  if (-1 < (char)bStack_b1) {
    uVar19 = (ulong)bStack_b1;
    ppppuVar6 = &pppuStack_c8;
  }
  if (0x7ffffffffffffff7 < uVar19) {
    func_0x000109ffde50();
    goto LAB_10acc8b30;
  }
  if (uVar19 < 0x17) {
    uStack_88 = (long *)CONCAT17((char)uVar19,(undefined7)uStack_88);
    ppppuVar11 = &pppuStack_98;
    if (uVar19 != 0) goto LAB_10acc8760;
  }
  else {
    ppppuVar2 = (undefined8 ****)0x19;
    if ((uVar19 | 7) != 0x17) {
      ppppuVar2 = (undefined8 ****)((uVar19 | 7) + 1);
    }
    ppppuVar11 = ppppuVar2;
    __Znwm();
    uStack_88 = (long *)((ulong)ppppuVar2 | 0x8000000000000000);
    pppuStack_98 = ppppuVar11;
    uStack_90 = uVar19;
LAB_10acc8760:
    _memmove(ppppuVar11,ppppuVar6,uVar19);
  }
  *(undefined1 *)((long)ppppuVar11 + uVar19) = 0;
  FUN_10ac9e388(plVar10,&pppuStack_98,0);
  plVar3 = plVar10 + 7;
  plVar18 = plVar3;
  func_0x000107c2b05c(plVar3,&pppuStack_98);
  plVar24 = (long *)plVar10[8];
  if (plVar24 != (long *)0x0) {
    uVar19 = (long)plVar24 - 1;
    if (((ulong)plVar24 & uVar19) == 0) {
      unaff_x20 = (long *)(uVar19 & (ulong)plVar18);
    }
    else {
      unaff_x20 = plVar18;
      if (plVar24 <= plVar18) {
        uVar17 = 0;
        if (plVar24 != (long *)0x0) {
          uVar17 = (ulong)plVar18 / (ulong)plVar24;
        }
        unaff_x20 = (long *)((long)plVar18 - uVar17 * (long)plVar24);
      }
    }
    puVar13 = *(undefined8 **)(*plVar3 + (long)unaff_x20 * 8);
    if (puVar13 != (undefined8 *)0x0) {
      for (plVar22 = (long *)*puVar13; plVar22 != (long *)0x0; plVar22 = (long *)*plVar22) {
        plVar14 = (long *)plVar22[1];
        if (plVar14 == plVar18) {
          plVar14 = plVar3;
          func_0x000107c2b068(plVar3,plVar22 + 2,&pppuStack_98);
          if (((ulong)plVar14 & 1) != 0) goto LAB_10acc8a08;
        }
        else {
          if (((ulong)plVar24 & uVar19) == 0) {
            plVar14 = (long *)((ulong)plVar14 & uVar19);
          }
          else if (plVar24 <= plVar14) {
            uVar17 = 0;
            if (plVar24 != (long *)0x0) {
              uVar17 = (ulong)plVar14 / (ulong)plVar24;
            }
            plVar14 = (long *)((long)plVar14 - uVar17 * (long)plVar24);
          }
          if (plVar14 != unaff_x20) break;
        }
      }
    }
  }
  plVar22 = (long *)0x60;
  __Znwm();
  lStack_70 = 0;
  *plVar22 = 0;
  plVar22[1] = (long)plVar18;
  plStack_80 = plVar22;
  plStack_78 = plVar3;
  if ((long)uStack_88 < 0) {
    func_0x000107c3192c(plVar22 + 2,pppuStack_98,uStack_90);
  }
  else {
    plVar22[3] = uStack_90;
    plVar22[2] = (long)pppuStack_98;
    plVar22[4] = (long)uStack_88;
  }
  lVar21 = lStack_a8;
  lVar15 = lStack_b0;
  plVar22[9] = 0;
  plVar22[8] = 0;
  *(undefined1 *)(plVar22 + 6) = 0;
  plVar22[5] = (long)&PTR_FUN_110c6c2d0;
  *(undefined2 *)((long)plVar22 + 0x32) = 0xf;
  plVar22[0xb] = 0;
  plVar22[10] = 0;
  puVar13 = (undefined8 *)0x20;
  __Znwm();
  *puVar13 = &PTR_FUN_110c6b650;
  puVar13[2] = 0;
  puVar13[3] = 0;
  puVar13[1] = 0;
  FUN_10a05151c(puVar13 + 1,lVar15,lVar21,lVar21 - lVar15);
  plVar14 = (long *)plVar22[0xb];
  plVar22[0xb] = (long)puVar13;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 8))();
  }
  lStack_70 = CONCAT71(lStack_70._1_7_,1);
  if ((plVar24 == (long *)0x0) ||
     (*(float *)(plVar10 + 0xb) * (float)plVar24 < (float)(plVar10[10] + 1))) {
    uVar19 = 1;
    if ((long *)0x2 < plVar24) {
      uVar19 = (ulong)(((ulong)plVar24 & (long)plVar24 - 1U) != 0);
    }
    uVar19 = uVar19 | (long)plVar24 << 1;
    uVar17 = (ulong)((float)(plVar10[10] + 1) / *(float *)(plVar10 + 0xb));
    if (uVar19 <= uVar17) {
      uVar19 = uVar17;
    }
    FUN_10a4ba824(plVar3,uVar19);
    plVar24 = (long *)plVar10[8];
    if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
      unaff_x20 = (long *)((long)plVar24 - 1U & (ulong)plVar18);
    }
    else {
      unaff_x20 = plVar18;
      if (plVar24 <= plVar18) {
        uVar19 = 0;
        if (plVar24 != (long *)0x0) {
          uVar19 = (ulong)plVar18 / (ulong)plVar24;
        }
        unaff_x20 = (long *)((long)plVar18 - uVar19 * (long)plVar24);
      }
    }
  }
  lVar15 = *plVar3;
  plVar18 = *(long **)(lVar15 + (long)unaff_x20 * 8);
  if (plVar18 == (long *)0x0) {
    plVar18 = plVar10 + 9;
    *plStack_80 = *plVar18;
    *plVar18 = (long)plStack_80;
    *(long **)(lVar15 + (long)unaff_x20 * 8) = plVar18;
    if (*plStack_80 != 0) {
      plVar18 = *(long **)(*plStack_80 + 8);
      if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
        plVar18 = (long *)((ulong)plVar18 & (long)plVar24 - 1U);
      }
      else if (plVar24 <= plVar18) {
        uVar19 = 0;
        if (plVar24 != (long *)0x0) {
          uVar19 = (ulong)plVar18 / (ulong)plVar24;
        }
        plVar18 = (long *)((long)plVar18 - uVar19 * (long)plVar24);
      }
      *(long **)(*plVar3 + (long)plVar18 * 8) = plStack_80;
    }
  }
  else {
    *plStack_80 = *plVar18;
    *plVar18 = (long)plStack_80;
  }
  plVar10[10] = plVar10[10] + 1;
  plVar22 = plStack_80;
LAB_10acc8a08:
  func_0x00010a5499ec(plVar10,1,plVar22 + 5,&pppuStack_98);
  if (*(char *)(plVar10[0x11] + 8) == '\x01') {
    FUN_10a54a030(&plStack_80,plVar10 + 5);
    FUN_10a549a74(plVar10 + 0x10,&plStack_80,&pppuStack_98);
    plVar10 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar3 = plStack_78 + 1;
      do {
        lVar15 = *plVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *plVar3 = lVar15 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
  }
  if ((long)uStack_88 < 0) {
    __ZdlPv(pppuStack_98);
  }
  if (lStack_b0 != 0) {
    lStack_a8 = lStack_b0;
    __ZdlPv();
  }
  if (plStack_d0 != (long *)0x0) {
    plVar10 = plStack_d0 + 1;
    do {
      lVar15 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d0);
    }
  }
  if ((char)bStack_b1 < '\0') {
    __ZdlPv(pppuStack_c8);
  }
  *param_1 = 0;
  plVar10 = plVar9 + 0x4b;
  lVar15 = plVar9[0x59];
  uVar19 = lVar15 - 1;
  plVar9[0x59] = uVar19;
  if (uVar19 < 8) {
    uVar19 = plVar10[lVar15 + 2];
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
  plVar3 = (long *)*plVar10;
  plVar18 = (long *)plVar9[0x4c];
  lVar15 = (long)plVar18 - (long)plVar3;
  uVar17 = lVar15 >> 4;
  if (uVar17 < uVar19) {
    uVar23 = uVar19 - uVar17;
    lVar21 = plVar9[0x4d];
    if ((ulong)(lVar21 - (long)plVar18 >> 4) < uVar23) {
      if (uVar19 >> 0x3c == 0) {
        uVar16 = lVar21 - (long)plVar3 >> 3;
        if (uVar16 <= uVar19) {
          uVar16 = uVar19;
        }
        if (0x7fffffffffffffef < (ulong)(lVar21 - (long)plVar3)) {
          uVar16 = 0xfffffffffffffff;
        }
        plStack_68 = plVar10;
        if (uVar16 >> 0x3c == 0) {
          lVar8 = uVar16 << 4;
          __Znwm();
          lVar1 = lVar8 + lVar15;
          _bzero(lVar1,uVar23 * 0x10);
          lVar20 = lVar1 + uVar17 * -0x10;
          _memcpy(lVar20,plVar3,lVar15);
          *plVar10 = lVar20;
          plVar9[0x4c] = lVar1 + uVar23 * 0x10;
          plVar9[0x4d] = lVar8 + uVar16 * 0x10;
          uStack_88 = plVar3;
          plStack_80 = plVar3;
          plStack_78 = plVar3;
          lStack_70 = lVar21;
          func_0x00010988c1b8(&uStack_88);
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
    _bzero(plVar18,uVar23 * 0x10);
    plVar9[0x4c] = (long)(plVar18 + uVar23 * 2);
  }
  else if (uVar19 < uVar17) {
    while (plVar18 != plVar3 + uVar19 * 2) {
      plVar18 = plVar18 + -2;
      func_0x00010988c204(plVar18);
    }
    plVar9[0x4c] = (long)(plVar3 + uVar19 * 2);
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar19;
  return;
}



/* Entry: 10acc8c1c; end: 10acc921f;  */

void FUN_10acc8c1c(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 ****ppppuVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 ****ppppuVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  long *unaff_x20;
  long lVar19;
  long lVar20;
  long *plVar21;
  ulong uVar22;
  long *plVar23;
  undefined8 *puStack_d8;
  long *plStack_d0;
  undefined8 ***pppuStack_c8;
  ulong uStack_c0;
  byte bStack_b1;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 ***pppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  
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
  FUN_10acc8580(param_2,param_3);
  FUN_10acc9220(param_5);
  func_0x000109898570(&pppuStack_c8,param_2,param_4);
  FUN_10a5664f8(&puStack_d8,param_2,param_4 + 0x10);
  lStack_a8 = 0;
  uStack_a0 = 0;
  lStack_b0 = 0;
  func_0x000108262984(&lStack_b0,puStack_d8[1]);
  _memcpy(lStack_b0,*puStack_d8,puStack_d8[1] << 1);
  if ((char)plVar10[0xc] == '\x01') {
    FUN_10a00946c(&UNK_10f6a1d58);
LAB_10acc9134:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10acc9138);
    (*pcVar7)();
  }
  uVar18 = uStack_c0;
  ppppuVar6 = (undefined8 ****)pppuStack_c8;
  if (-1 < (char)bStack_b1) {
    uVar18 = (ulong)bStack_b1;
    ppppuVar6 = &pppuStack_c8;
  }
  if (0x7ffffffffffffff7 < uVar18) {
    func_0x000109ffde50();
    goto LAB_10acc9134;
  }
  if (uVar18 < 0x17) {
    uStack_88 = (long *)CONCAT17((char)uVar18,(undefined7)uStack_88);
    ppppuVar11 = &pppuStack_98;
    if (uVar18 != 0) goto LAB_10acc8d60;
  }
  else {
    ppppuVar2 = (undefined8 ****)0x19;
    if ((uVar18 | 7) != 0x17) {
      ppppuVar2 = (undefined8 ****)((uVar18 | 7) + 1);
    }
    ppppuVar11 = ppppuVar2;
    __Znwm();
    uStack_88 = (long *)((ulong)ppppuVar2 | 0x8000000000000000);
    pppuStack_98 = ppppuVar11;
    uStack_90 = uVar18;
LAB_10acc8d60:
    _memmove(ppppuVar11,ppppuVar6,uVar18);
  }
  *(undefined1 *)((long)ppppuVar11 + uVar18) = 0;
  FUN_10ac9e388(plVar10,&pppuStack_98,0);
  plVar3 = plVar10 + 7;
  plVar17 = plVar3;
  func_0x000107c2b05c(plVar3,&pppuStack_98);
  plVar23 = (long *)plVar10[8];
  if (plVar23 != (long *)0x0) {
    uVar18 = (long)plVar23 - 1;
    if (((ulong)plVar23 & uVar18) == 0) {
      unaff_x20 = (long *)(uVar18 & (ulong)plVar17);
    }
    else {
      unaff_x20 = plVar17;
      if (plVar23 <= plVar17) {
        uVar16 = 0;
        if (plVar23 != (long *)0x0) {
          uVar16 = (ulong)plVar17 / (ulong)plVar23;
        }
        unaff_x20 = (long *)((long)plVar17 - uVar16 * (long)plVar23);
      }
    }
    puVar12 = *(undefined8 **)(*plVar3 + (long)unaff_x20 * 8);
    if (puVar12 != (undefined8 *)0x0) {
      for (plVar21 = (long *)*puVar12; plVar21 != (long *)0x0; plVar21 = (long *)*plVar21) {
        plVar13 = (long *)plVar21[1];
        if (plVar13 == plVar17) {
          plVar13 = plVar3;
          func_0x000107c2b068(plVar3,plVar21 + 2,&pppuStack_98);
          if (((ulong)plVar13 & 1) != 0) goto LAB_10acc900c;
        }
        else {
          if (((ulong)plVar23 & uVar18) == 0) {
            plVar13 = (long *)((ulong)plVar13 & uVar18);
          }
          else if (plVar23 <= plVar13) {
            uVar16 = 0;
            if (plVar23 != (long *)0x0) {
              uVar16 = (ulong)plVar13 / (ulong)plVar23;
            }
            plVar13 = (long *)((long)plVar13 - uVar16 * (long)plVar23);
          }
          if (plVar13 != unaff_x20) break;
        }
      }
    }
  }
  plVar21 = (long *)0x60;
  __Znwm();
  lStack_70 = 0;
  *plVar21 = 0;
  plVar21[1] = (long)plVar17;
  plStack_80 = plVar21;
  plStack_78 = plVar3;
  if ((long)uStack_88 < 0) {
    func_0x000107c3192c(plVar21 + 2,pppuStack_98,uStack_90);
  }
  else {
    plVar21[3] = uStack_90;
    plVar21[2] = (long)pppuStack_98;
    plVar21[4] = (long)uStack_88;
  }
  lVar20 = lStack_a8;
  lVar14 = lStack_b0;
  plVar21[9] = 0;
  plVar21[8] = 0;
  *(undefined1 *)(plVar21 + 6) = 0;
  plVar21[5] = (long)&PTR_FUN_110c6c2d0;
  *(undefined2 *)((long)plVar21 + 0x32) = 0xf;
  plVar21[0xb] = 0;
  plVar21[10] = 0;
  puVar12 = (undefined8 *)0x20;
  __Znwm();
  *puVar12 = &PTR_FUN_110c6b768;
  puVar12[2] = 0;
  puVar12[3] = 0;
  puVar12[1] = 0;
  FUN_10acbf198(puVar12 + 1,lVar14,lVar20,lVar20 - lVar14 >> 1);
  plVar13 = (long *)plVar21[0xb];
  plVar21[0xb] = (long)puVar12;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  lStack_70 = CONCAT71(lStack_70._1_7_,1);
  if ((plVar23 == (long *)0x0) ||
     (*(float *)(plVar10 + 0xb) * (float)plVar23 < (float)(plVar10[10] + 1))) {
    uVar18 = 1;
    if ((long *)0x2 < plVar23) {
      uVar18 = (ulong)(((ulong)plVar23 & (long)plVar23 - 1U) != 0);
    }
    uVar18 = uVar18 | (long)plVar23 << 1;
    uVar16 = (ulong)((float)(plVar10[10] + 1) / *(float *)(plVar10 + 0xb));
    if (uVar18 <= uVar16) {
      uVar18 = uVar16;
    }
    FUN_10a4ba824(plVar3,uVar18);
    plVar23 = (long *)plVar10[8];
    if (((ulong)plVar23 & (long)plVar23 - 1U) == 0) {
      unaff_x20 = (long *)((long)plVar23 - 1U & (ulong)plVar17);
    }
    else {
      unaff_x20 = plVar17;
      if (plVar23 <= plVar17) {
        uVar18 = 0;
        if (plVar23 != (long *)0x0) {
          uVar18 = (ulong)plVar17 / (ulong)plVar23;
        }
        unaff_x20 = (long *)((long)plVar17 - uVar18 * (long)plVar23);
      }
    }
  }
  lVar14 = *plVar3;
  plVar17 = *(long **)(lVar14 + (long)unaff_x20 * 8);
  if (plVar17 == (long *)0x0) {
    plVar17 = plVar10 + 9;
    *plStack_80 = *plVar17;
    *plVar17 = (long)plStack_80;
    *(long **)(lVar14 + (long)unaff_x20 * 8) = plVar17;
    if (*plStack_80 != 0) {
      plVar17 = *(long **)(*plStack_80 + 8);
      if (((ulong)plVar23 & (long)plVar23 - 1U) == 0) {
        plVar17 = (long *)((ulong)plVar17 & (long)plVar23 - 1U);
      }
      else if (plVar23 <= plVar17) {
        uVar18 = 0;
        if (plVar23 != (long *)0x0) {
          uVar18 = (ulong)plVar17 / (ulong)plVar23;
        }
        plVar17 = (long *)((long)plVar17 - uVar18 * (long)plVar23);
      }
      *(long **)(*plVar3 + (long)plVar17 * 8) = plStack_80;
    }
  }
  else {
    *plStack_80 = *plVar17;
    *plVar17 = (long)plStack_80;
  }
  plVar10[10] = plVar10[10] + 1;
  plVar21 = plStack_80;
LAB_10acc900c:
  func_0x00010a5499ec(plVar10,1,plVar21 + 5,&pppuStack_98);
  if (*(char *)(plVar10[0x11] + 8) == '\x01') {
    FUN_10a54a030(&plStack_80,plVar10 + 5);
    FUN_10a549a74(plVar10 + 0x10,&plStack_80,&pppuStack_98);
    plVar10 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar3 = plStack_78 + 1;
      do {
        lVar14 = *plVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *plVar3 = lVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
  }
  if ((long)uStack_88 < 0) {
    __ZdlPv(pppuStack_98);
  }
  if (lStack_b0 != 0) {
    lStack_a8 = lStack_b0;
    __ZdlPv();
  }
  if (plStack_d0 != (long *)0x0) {
    plVar10 = plStack_d0 + 1;
    do {
      lVar14 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d0);
    }
  }
  if ((char)bStack_b1 < '\0') {
    __ZdlPv(pppuStack_c8);
  }
  *param_1 = 0;
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
  plVar3 = (long *)*plVar10;
  plVar17 = (long *)plVar9[0x4c];
  lVar14 = (long)plVar17 - (long)plVar3;
  uVar16 = lVar14 >> 4;
  if (uVar16 < uVar18) {
    uVar22 = uVar18 - uVar16;
    lVar20 = plVar9[0x4d];
    if ((ulong)(lVar20 - (long)plVar17 >> 4) < uVar22) {
      if (uVar18 >> 0x3c == 0) {
        uVar15 = lVar20 - (long)plVar3 >> 3;
        if (uVar15 <= uVar18) {
          uVar15 = uVar18;
        }
        if (0x7fffffffffffffef < (ulong)(lVar20 - (long)plVar3)) {
          uVar15 = 0xfffffffffffffff;
        }
        plStack_68 = plVar10;
        if (uVar15 >> 0x3c == 0) {
          lVar8 = uVar15 << 4;
          __Znwm();
          lVar1 = lVar8 + lVar14;
          _bzero(lVar1,uVar22 * 0x10);
          lVar19 = lVar1 + uVar16 * -0x10;
          _memcpy(lVar19,plVar3,lVar14);
          *plVar10 = lVar19;
          plVar9[0x4c] = lVar1 + uVar22 * 0x10;
          plVar9[0x4d] = lVar8 + uVar15 * 0x10;
          uStack_88 = plVar3;
          plStack_80 = plVar3;
          plStack_78 = plVar3;
          lStack_70 = lVar20;
          func_0x00010988c1b8(&uStack_88);
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
    _bzero(plVar17,uVar22 * 0x10);
    plVar9[0x4c] = (long)(plVar17 + uVar22 * 2);
  }
  else if (uVar18 < uVar16) {
    while (plVar17 != plVar3 + uVar18 * 2) {
      plVar17 = plVar17 + -2;
      func_0x00010988c204(plVar17);
    }
    plVar9[0x4c] = (long)(plVar3 + uVar18 * 2);
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar18;
  return;
}



/* Entry: 10acc9220; end: 10acc9243;  */

void FUN_10acc9220(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  char cVar3;
  bool bVar4;
  undefined8 ****ppppuVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 ****ppppuVar11;
  undefined8 uVar12;
  undefined4 *extraout_x8;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  long *unaff_x20;
  long lVar20;
  long lVar21;
  long *plVar22;
  ulong uVar23;
  long *plVar24;
  undefined8 *puStack_e8;
  long *plStack_e0;
  undefined8 ***pppuStack_d8;
  ulong uStack_d0;
  byte bStack_c1;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 ***pppuStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar8 = (long *)0x2;
  uVar12 = 0;
  FUN_10a052ee0(2,0,param_1);
  plVar9 = plVar8;
  (**(code **)(*plVar8 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  plVar10 = plVar8;
  FUN_10acc8580(plVar8,uVar12);
  FUN_10acc9848(param_4);
  func_0x000109898570(&pppuStack_d8,plVar8,param_1);
  FUN_10ac82e6c(&puStack_e8,plVar8,param_1 + 0x10);
  lStack_b8 = 0;
  uStack_b0 = 0;
  lStack_c0 = 0;
  func_0x000108a3c9d0(&lStack_c0,puStack_e8[1]);
  _memcpy(lStack_c0,*puStack_e8,puStack_e8[1] << 1);
  if ((char)plVar10[0xc] == '\x01') {
    FUN_10a00946c(&UNK_10f6a1d58);
LAB_10acc975c:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10acc9760);
    (*pcVar6)();
  }
  uVar19 = uStack_d0;
  ppppuVar5 = (undefined8 ****)pppuStack_d8;
  if (-1 < (char)bStack_c1) {
    uVar19 = (ulong)bStack_c1;
    ppppuVar5 = &pppuStack_d8;
  }
  if (0x7ffffffffffffff7 < uVar19) {
    func_0x000109ffde50();
    goto LAB_10acc975c;
  }
  if (uVar19 < 0x17) {
    uStack_98 = (long *)CONCAT17((char)uVar19,(undefined7)uStack_98);
    ppppuVar11 = &pppuStack_a8;
    if (uVar19 != 0) goto LAB_10acc9388;
  }
  else {
    ppppuVar2 = (undefined8 ****)0x19;
    if ((uVar19 | 7) != 0x17) {
      ppppuVar2 = (undefined8 ****)((uVar19 | 7) + 1);
    }
    ppppuVar11 = ppppuVar2;
    __Znwm();
    uStack_98 = (long *)((ulong)ppppuVar2 | 0x8000000000000000);
    pppuStack_a8 = ppppuVar11;
    uStack_a0 = uVar19;
LAB_10acc9388:
    _memmove(ppppuVar11,ppppuVar5,uVar19);
  }
  *(undefined1 *)((long)ppppuVar11 + uVar19) = 0;
  FUN_10ac9e388(plVar10,&pppuStack_a8,0);
  plVar8 = plVar10 + 7;
  plVar18 = plVar8;
  func_0x000107c2b05c(plVar8,&pppuStack_a8);
  plVar24 = (long *)plVar10[8];
  if (plVar24 != (long *)0x0) {
    uVar19 = (long)plVar24 - 1;
    if (((ulong)plVar24 & uVar19) == 0) {
      unaff_x20 = (long *)(uVar19 & (ulong)plVar18);
    }
    else {
      unaff_x20 = plVar18;
      if (plVar24 <= plVar18) {
        uVar17 = 0;
        if (plVar24 != (long *)0x0) {
          uVar17 = (ulong)plVar18 / (ulong)plVar24;
        }
        unaff_x20 = (long *)((long)plVar18 - uVar17 * (long)plVar24);
      }
    }
    puVar13 = *(undefined8 **)(*plVar8 + (long)unaff_x20 * 8);
    if (puVar13 != (undefined8 *)0x0) {
      for (plVar22 = (long *)*puVar13; plVar22 != (long *)0x0; plVar22 = (long *)*plVar22) {
        plVar14 = (long *)plVar22[1];
        if (plVar14 == plVar18) {
          plVar14 = plVar8;
          func_0x000107c2b068(plVar8,plVar22 + 2,&pppuStack_a8);
          if (((ulong)plVar14 & 1) != 0) goto LAB_10acc9634;
        }
        else {
          if (((ulong)plVar24 & uVar19) == 0) {
            plVar14 = (long *)((ulong)plVar14 & uVar19);
          }
          else if (plVar24 <= plVar14) {
            uVar17 = 0;
            if (plVar24 != (long *)0x0) {
              uVar17 = (ulong)plVar14 / (ulong)plVar24;
            }
            plVar14 = (long *)((long)plVar14 - uVar17 * (long)plVar24);
          }
          if (plVar14 != unaff_x20) break;
        }
      }
    }
  }
  plVar22 = (long *)0x60;
  __Znwm();
  lStack_80 = 0;
  *plVar22 = 0;
  plVar22[1] = (long)plVar18;
  plStack_90 = plVar22;
  plStack_88 = plVar8;
  if ((long)uStack_98 < 0) {
    func_0x000107c3192c(plVar22 + 2,pppuStack_a8,uStack_a0);
  }
  else {
    plVar22[3] = uStack_a0;
    plVar22[2] = (long)pppuStack_a8;
    plVar22[4] = (long)uStack_98;
  }
  lVar21 = lStack_b8;
  lVar15 = lStack_c0;
  plVar22[9] = 0;
  plVar22[8] = 0;
  *(undefined1 *)(plVar22 + 6) = 0;
  plVar22[5] = (long)&PTR_FUN_110c6c2d0;
  *(undefined2 *)((long)plVar22 + 0x32) = 0xf;
  plVar22[0xb] = 0;
  plVar22[10] = 0;
  puVar13 = (undefined8 *)0x20;
  __Znwm();
  *puVar13 = &PTR_FUN_110c6b7b8;
  puVar13[2] = 0;
  puVar13[3] = 0;
  puVar13[1] = 0;
  FUN_10acbfde4(puVar13 + 1,lVar15,lVar21,lVar21 - lVar15 >> 1);
  plVar14 = (long *)plVar22[0xb];
  plVar22[0xb] = (long)puVar13;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 8))();
  }
  lStack_80 = CONCAT71(lStack_80._1_7_,1);
  if ((plVar24 == (long *)0x0) ||
     (*(float *)(plVar10 + 0xb) * (float)plVar24 < (float)(plVar10[10] + 1))) {
    uVar19 = 1;
    if ((long *)0x2 < plVar24) {
      uVar19 = (ulong)(((ulong)plVar24 & (long)plVar24 - 1U) != 0);
    }
    uVar19 = uVar19 | (long)plVar24 << 1;
    uVar17 = (ulong)((float)(plVar10[10] + 1) / *(float *)(plVar10 + 0xb));
    if (uVar19 <= uVar17) {
      uVar19 = uVar17;
    }
    FUN_10a4ba824(plVar8,uVar19);
    plVar24 = (long *)plVar10[8];
    if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
      unaff_x20 = (long *)((long)plVar24 - 1U & (ulong)plVar18);
    }
    else {
      unaff_x20 = plVar18;
      if (plVar24 <= plVar18) {
        uVar19 = 0;
        if (plVar24 != (long *)0x0) {
          uVar19 = (ulong)plVar18 / (ulong)plVar24;
        }
        unaff_x20 = (long *)((long)plVar18 - uVar19 * (long)plVar24);
      }
    }
  }
  lVar15 = *plVar8;
  plVar18 = *(long **)(lVar15 + (long)unaff_x20 * 8);
  if (plVar18 == (long *)0x0) {
    plVar18 = plVar10 + 9;
    *plStack_90 = *plVar18;
    *plVar18 = (long)plStack_90;
    *(long **)(lVar15 + (long)unaff_x20 * 8) = plVar18;
    if (*plStack_90 != 0) {
      plVar18 = *(long **)(*plStack_90 + 8);
      if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
        plVar18 = (long *)((ulong)plVar18 & (long)plVar24 - 1U);
      }
      else if (plVar24 <= plVar18) {
        uVar19 = 0;
        if (plVar24 != (long *)0x0) {
          uVar19 = (ulong)plVar18 / (ulong)plVar24;
        }
        plVar18 = (long *)((long)plVar18 - uVar19 * (long)plVar24);
      }
      *(long **)(*plVar8 + (long)plVar18 * 8) = plStack_90;
    }
  }
  else {
    *plStack_90 = *plVar18;
    *plVar18 = (long)plStack_90;
  }
  plVar10[10] = plVar10[10] + 1;
  plVar22 = plStack_90;
LAB_10acc9634:
  func_0x00010a5499ec(plVar10,1,plVar22 + 5,&pppuStack_a8);
  if (*(char *)(plVar10[0x11] + 8) == '\x01') {
    FUN_10a54a030(&plStack_90,plVar10 + 5);
    FUN_10a549a74(plVar10 + 0x10,&plStack_90,&pppuStack_a8);
    plVar8 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar10 = plStack_88 + 1;
      do {
        lVar15 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
  }
  if ((long)uStack_98 < 0) {
    __ZdlPv(pppuStack_a8);
  }
  if (lStack_c0 != 0) {
    lStack_b8 = lStack_c0;
    __ZdlPv();
  }
  if (plStack_e0 != (long *)0x0) {
    plVar8 = plStack_e0 + 1;
    do {
      lVar15 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_e0);
    }
  }
  if ((char)bStack_c1 < '\0') {
    __ZdlPv(pppuStack_d8);
  }
  *extraout_x8 = 0;
  plVar8 = plVar9 + 0x4b;
  lVar15 = plVar9[0x59];
  uVar19 = lVar15 - 1;
  plVar9[0x59] = uVar19;
  if (uVar19 < 8) {
    uVar19 = plVar8[lVar15 + 2];
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
  plVar10 = (long *)*plVar8;
  plVar18 = (long *)plVar9[0x4c];
  lVar15 = (long)plVar18 - (long)plVar10;
  uVar17 = lVar15 >> 4;
  if (uVar17 < uVar19) {
    uVar23 = uVar19 - uVar17;
    lVar21 = plVar9[0x4d];
    if ((ulong)(lVar21 - (long)plVar18 >> 4) < uVar23) {
      if (uVar19 >> 0x3c == 0) {
        uVar16 = lVar21 - (long)plVar10 >> 3;
        if (uVar16 <= uVar19) {
          uVar16 = uVar19;
        }
        if (0x7fffffffffffffef < (ulong)(lVar21 - (long)plVar10)) {
          uVar16 = 0xfffffffffffffff;
        }
        plStack_78 = plVar8;
        if (uVar16 >> 0x3c == 0) {
          lVar7 = uVar16 << 4;
          __Znwm();
          lVar1 = lVar7 + lVar15;
          _bzero(lVar1,uVar23 * 0x10);
          lVar20 = lVar1 + uVar17 * -0x10;
          _memcpy(lVar20,plVar10,lVar15);
          *plVar8 = lVar20;
          plVar9[0x4c] = lVar1 + uVar23 * 0x10;
          plVar9[0x4d] = lVar7 + uVar16 * 0x10;
          uStack_98 = plVar10;
          plStack_90 = plVar10;
          plStack_88 = plVar10;
          lStack_80 = lVar21;
          func_0x00010988c1b8(&uStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar6)();
    }
    _bzero(plVar18,uVar23 * 0x10);
    plVar9[0x4c] = (long)(plVar18 + uVar23 * 2);
  }
  else if (uVar19 < uVar17) {
    while (plVar18 != plVar10 + uVar19 * 2) {
      plVar18 = plVar18 + -2;
      func_0x00010988c204(plVar18);
    }
    plVar9[0x4c] = (long)(plVar10 + uVar19 * 2);
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar19;
  return;
}



/* Entry: 10acc9244; end: 10acc9847;  */

void FUN_10acc9244(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 ****ppppuVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 ****ppppuVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  long *unaff_x20;
  long lVar19;
  long lVar20;
  long *plVar21;
  ulong uVar22;
  long *plVar23;
  undefined8 *puStack_d8;
  long *plStack_d0;
  undefined8 ***pppuStack_c8;
  ulong uStack_c0;
  byte bStack_b1;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 ***pppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  
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
  FUN_10acc8580(param_2,param_3);
  FUN_10acc9848(param_5);
  func_0x000109898570(&pppuStack_c8,param_2,param_4);
  FUN_10ac82e6c(&puStack_d8,param_2,param_4 + 0x10);
  lStack_a8 = 0;
  uStack_a0 = 0;
  lStack_b0 = 0;
  func_0x000108a3c9d0(&lStack_b0,puStack_d8[1]);
  _memcpy(lStack_b0,*puStack_d8,puStack_d8[1] << 1);
  if ((char)plVar10[0xc] == '\x01') {
    FUN_10a00946c(&UNK_10f6a1d58);
LAB_10acc975c:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10acc9760);
    (*pcVar7)();
  }
  uVar18 = uStack_c0;
  ppppuVar6 = (undefined8 ****)pppuStack_c8;
  if (-1 < (char)bStack_b1) {
    uVar18 = (ulong)bStack_b1;
    ppppuVar6 = &pppuStack_c8;
  }
  if (0x7ffffffffffffff7 < uVar18) {
    func_0x000109ffde50();
    goto LAB_10acc975c;
  }
  if (uVar18 < 0x17) {
    uStack_88 = (long *)CONCAT17((char)uVar18,(undefined7)uStack_88);
    ppppuVar11 = &pppuStack_98;
    if (uVar18 != 0) goto LAB_10acc9388;
  }
  else {
    ppppuVar2 = (undefined8 ****)0x19;
    if ((uVar18 | 7) != 0x17) {
      ppppuVar2 = (undefined8 ****)((uVar18 | 7) + 1);
    }
    ppppuVar11 = ppppuVar2;
    __Znwm();
    uStack_88 = (long *)((ulong)ppppuVar2 | 0x8000000000000000);
    pppuStack_98 = ppppuVar11;
    uStack_90 = uVar18;
LAB_10acc9388:
    _memmove(ppppuVar11,ppppuVar6,uVar18);
  }
  *(undefined1 *)((long)ppppuVar11 + uVar18) = 0;
  FUN_10ac9e388(plVar10,&pppuStack_98,0);
  plVar3 = plVar10 + 7;
  plVar17 = plVar3;
  func_0x000107c2b05c(plVar3,&pppuStack_98);
  plVar23 = (long *)plVar10[8];
  if (plVar23 != (long *)0x0) {
    uVar18 = (long)plVar23 - 1;
    if (((ulong)plVar23 & uVar18) == 0) {
      unaff_x20 = (long *)(uVar18 & (ulong)plVar17);
    }
    else {
      unaff_x20 = plVar17;
      if (plVar23 <= plVar17) {
        uVar16 = 0;
        if (plVar23 != (long *)0x0) {
          uVar16 = (ulong)plVar17 / (ulong)plVar23;
        }
        unaff_x20 = (long *)((long)plVar17 - uVar16 * (long)plVar23);
      }
    }
    puVar12 = *(undefined8 **)(*plVar3 + (long)unaff_x20 * 8);
    if (puVar12 != (undefined8 *)0x0) {
      for (plVar21 = (long *)*puVar12; plVar21 != (long *)0x0; plVar21 = (long *)*plVar21) {
        plVar13 = (long *)plVar21[1];
        if (plVar13 == plVar17) {
          plVar13 = plVar3;
          func_0x000107c2b068(plVar3,plVar21 + 2,&pppuStack_98);
          if (((ulong)plVar13 & 1) != 0) goto LAB_10acc9634;
        }
        else {
          if (((ulong)plVar23 & uVar18) == 0) {
            plVar13 = (long *)((ulong)plVar13 & uVar18);
          }
          else if (plVar23 <= plVar13) {
            uVar16 = 0;
            if (plVar23 != (long *)0x0) {
              uVar16 = (ulong)plVar13 / (ulong)plVar23;
            }
            plVar13 = (long *)((long)plVar13 - uVar16 * (long)plVar23);
          }
          if (plVar13 != unaff_x20) break;
        }
      }
    }
  }
  plVar21 = (long *)0x60;
  __Znwm();
  lStack_70 = 0;
  *plVar21 = 0;
  plVar21[1] = (long)plVar17;
  plStack_80 = plVar21;
  plStack_78 = plVar3;
  if ((long)uStack_88 < 0) {
    func_0x000107c3192c(plVar21 + 2,pppuStack_98,uStack_90);
  }
  else {
    plVar21[3] = uStack_90;
    plVar21[2] = (long)pppuStack_98;
    plVar21[4] = (long)uStack_88;
  }
  lVar20 = lStack_a8;
  lVar14 = lStack_b0;
  plVar21[9] = 0;
  plVar21[8] = 0;
  *(undefined1 *)(plVar21 + 6) = 0;
  plVar21[5] = (long)&PTR_FUN_110c6c2d0;
  *(undefined2 *)((long)plVar21 + 0x32) = 0xf;
  plVar21[0xb] = 0;
  plVar21[10] = 0;
  puVar12 = (undefined8 *)0x20;
  __Znwm();
  *puVar12 = &PTR_FUN_110c6b7b8;
  puVar12[2] = 0;
  puVar12[3] = 0;
  puVar12[1] = 0;
  FUN_10acbfde4(puVar12 + 1,lVar14,lVar20,lVar20 - lVar14 >> 1);
  plVar13 = (long *)plVar21[0xb];
  plVar21[0xb] = (long)puVar12;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  lStack_70 = CONCAT71(lStack_70._1_7_,1);
  if ((plVar23 == (long *)0x0) ||
     (*(float *)(plVar10 + 0xb) * (float)plVar23 < (float)(plVar10[10] + 1))) {
    uVar18 = 1;
    if ((long *)0x2 < plVar23) {
      uVar18 = (ulong)(((ulong)plVar23 & (long)plVar23 - 1U) != 0);
    }
    uVar18 = uVar18 | (long)plVar23 << 1;
    uVar16 = (ulong)((float)(plVar10[10] + 1) / *(float *)(plVar10 + 0xb));
    if (uVar18 <= uVar16) {
      uVar18 = uVar16;
    }
    FUN_10a4ba824(plVar3,uVar18);
    plVar23 = (long *)plVar10[8];
    if (((ulong)plVar23 & (long)plVar23 - 1U) == 0) {
      unaff_x20 = (long *)((long)plVar23 - 1U & (ulong)plVar17);
    }
    else {
      unaff_x20 = plVar17;
      if (plVar23 <= plVar17) {
        uVar18 = 0;
        if (plVar23 != (long *)0x0) {
          uVar18 = (ulong)plVar17 / (ulong)plVar23;
        }
        unaff_x20 = (long *)((long)plVar17 - uVar18 * (long)plVar23);
      }
    }
  }
  lVar14 = *plVar3;
  plVar17 = *(long **)(lVar14 + (long)unaff_x20 * 8);
  if (plVar17 == (long *)0x0) {
    plVar17 = plVar10 + 9;
    *plStack_80 = *plVar17;
    *plVar17 = (long)plStack_80;
    *(long **)(lVar14 + (long)unaff_x20 * 8) = plVar17;
    if (*plStack_80 != 0) {
      plVar17 = *(long **)(*plStack_80 + 8);
      if (((ulong)plVar23 & (long)plVar23 - 1U) == 0) {
        plVar17 = (long *)((ulong)plVar17 & (long)plVar23 - 1U);
      }
      else if (plVar23 <= plVar17) {
        uVar18 = 0;
        if (plVar23 != (long *)0x0) {
          uVar18 = (ulong)plVar17 / (ulong)plVar23;
        }
        plVar17 = (long *)((long)plVar17 - uVar18 * (long)plVar23);
      }
      *(long **)(*plVar3 + (long)plVar17 * 8) = plStack_80;
    }
  }
  else {
    *plStack_80 = *plVar17;
    *plVar17 = (long)plStack_80;
  }
  plVar10[10] = plVar10[10] + 1;
  plVar21 = plStack_80;
LAB_10acc9634:
  func_0x00010a5499ec(plVar10,1,plVar21 + 5,&pppuStack_98);
  if (*(char *)(plVar10[0x11] + 8) == '\x01') {
    FUN_10a54a030(&plStack_80,plVar10 + 5);
    FUN_10a549a74(plVar10 + 0x10,&plStack_80,&pppuStack_98);
    plVar10 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar3 = plStack_78 + 1;
      do {
        lVar14 = *plVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *plVar3 = lVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
  }
  if ((long)uStack_88 < 0) {
    __ZdlPv(pppuStack_98);
  }
  if (lStack_b0 != 0) {
    lStack_a8 = lStack_b0;
    __ZdlPv();
  }
  if (plStack_d0 != (long *)0x0) {
    plVar10 = plStack_d0 + 1;
    do {
      lVar14 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d0);
    }
  }
  if ((char)bStack_b1 < '\0') {
    __ZdlPv(pppuStack_c8);
  }
  *param_1 = 0;
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
  plVar3 = (long *)*plVar10;
  plVar17 = (long *)plVar9[0x4c];
  lVar14 = (long)plVar17 - (long)plVar3;
  uVar16 = lVar14 >> 4;
  if (uVar16 < uVar18) {
    uVar22 = uVar18 - uVar16;
    lVar20 = plVar9[0x4d];
    if ((ulong)(lVar20 - (long)plVar17 >> 4) < uVar22) {
      if (uVar18 >> 0x3c == 0) {
        uVar15 = lVar20 - (long)plVar3 >> 3;
        if (uVar15 <= uVar18) {
          uVar15 = uVar18;
        }
        if (0x7fffffffffffffef < (ulong)(lVar20 - (long)plVar3)) {
          uVar15 = 0xfffffffffffffff;
        }
        plStack_68 = plVar10;
        if (uVar15 >> 0x3c == 0) {
          lVar8 = uVar15 << 4;
          __Znwm();
          lVar1 = lVar8 + lVar14;
          _bzero(lVar1,uVar22 * 0x10);
          lVar19 = lVar1 + uVar16 * -0x10;
          _memcpy(lVar19,plVar3,lVar14);
          *plVar10 = lVar19;
          plVar9[0x4c] = lVar1 + uVar22 * 0x10;
          plVar9[0x4d] = lVar8 + uVar15 * 0x10;
          uStack_88 = plVar3;
          plStack_80 = plVar3;
          plStack_78 = plVar3;
          lStack_70 = lVar20;
          func_0x00010988c1b8(&uStack_88);
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
    _bzero(plVar17,uVar22 * 0x10);
    plVar9[0x4c] = (long)(plVar17 + uVar22 * 2);
  }
  else if (uVar18 < uVar16) {
    while (plVar17 != plVar3 + uVar18 * 2) {
      plVar17 = plVar17 + -2;
      func_0x00010988c204(plVar17);
    }
    plVar9[0x4c] = (long)(plVar3 + uVar18 * 2);
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar18;
  return;
}



/* Entry: 10acc9848; end: 10acc986b;  */

void FUN_10acc9848(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  char cVar3;
  bool bVar4;
  undefined8 ****ppppuVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 ****ppppuVar11;
  undefined8 uVar12;
  undefined4 *extraout_x8;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  long *unaff_x20;
  long lVar20;
  long lVar21;
  long *plVar22;
  ulong uVar23;
  long *plVar24;
  undefined8 *puStack_e8;
  long *plStack_e0;
  undefined8 ***pppuStack_d8;
  ulong uStack_d0;
  byte bStack_c1;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 ***pppuStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar8 = (long *)0x2;
  uVar12 = 0;
  FUN_10a052ee0(2,0,param_1);
  plVar9 = plVar8;
  (**(code **)(*plVar8 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  plVar10 = plVar8;
  FUN_10acc8580(plVar8,uVar12);
  FUN_10acc9e70(param_4);
  func_0x000109898570(&pppuStack_d8,plVar8,param_1);
  FUN_10a928678(&puStack_e8,plVar8,param_1 + 0x10);
  lStack_b8 = 0;
  uStack_b0 = 0;
  lStack_c0 = 0;
  func_0x0001074287b0(&lStack_c0,puStack_e8[1]);
  _memcpy(lStack_c0,*puStack_e8,puStack_e8[1] << 2);
  if ((char)plVar10[0xc] == '\x01') {
    FUN_10a00946c(&UNK_10f6a1d58);
LAB_10acc9d84:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10acc9d88);
    (*pcVar6)();
  }
  uVar19 = uStack_d0;
  ppppuVar5 = (undefined8 ****)pppuStack_d8;
  if (-1 < (char)bStack_c1) {
    uVar19 = (ulong)bStack_c1;
    ppppuVar5 = &pppuStack_d8;
  }
  if (0x7ffffffffffffff7 < uVar19) {
    func_0x000109ffde50();
    goto LAB_10acc9d84;
  }
  if (uVar19 < 0x17) {
    uStack_98 = (long *)CONCAT17((char)uVar19,(undefined7)uStack_98);
    ppppuVar11 = &pppuStack_a8;
    if (uVar19 != 0) goto LAB_10acc99b0;
  }
  else {
    ppppuVar2 = (undefined8 ****)0x19;
    if ((uVar19 | 7) != 0x17) {
      ppppuVar2 = (undefined8 ****)((uVar19 | 7) + 1);
    }
    ppppuVar11 = ppppuVar2;
    __Znwm();
    uStack_98 = (long *)((ulong)ppppuVar2 | 0x8000000000000000);
    pppuStack_a8 = ppppuVar11;
    uStack_a0 = uVar19;
LAB_10acc99b0:
    _memmove(ppppuVar11,ppppuVar5,uVar19);
  }
  *(undefined1 *)((long)ppppuVar11 + uVar19) = 0;
  FUN_10ac9e388(plVar10,&pppuStack_a8,0);
  plVar8 = plVar10 + 7;
  plVar18 = plVar8;
  func_0x000107c2b05c(plVar8,&pppuStack_a8);
  plVar24 = (long *)plVar10[8];
  if (plVar24 != (long *)0x0) {
    uVar19 = (long)plVar24 - 1;
    if (((ulong)plVar24 & uVar19) == 0) {
      unaff_x20 = (long *)(uVar19 & (ulong)plVar18);
    }
    else {
      unaff_x20 = plVar18;
      if (plVar24 <= plVar18) {
        uVar17 = 0;
        if (plVar24 != (long *)0x0) {
          uVar17 = (ulong)plVar18 / (ulong)plVar24;
        }
        unaff_x20 = (long *)((long)plVar18 - uVar17 * (long)plVar24);
      }
    }
    puVar13 = *(undefined8 **)(*plVar8 + (long)unaff_x20 * 8);
    if (puVar13 != (undefined8 *)0x0) {
      for (plVar22 = (long *)*puVar13; plVar22 != (long *)0x0; plVar22 = (long *)*plVar22) {
        plVar14 = (long *)plVar22[1];
        if (plVar14 == plVar18) {
          plVar14 = plVar8;
          func_0x000107c2b068(plVar8,plVar22 + 2,&pppuStack_a8);
          if (((ulong)plVar14 & 1) != 0) goto LAB_10acc9c5c;
        }
        else {
          if (((ulong)plVar24 & uVar19) == 0) {
            plVar14 = (long *)((ulong)plVar14 & uVar19);
          }
          else if (plVar24 <= plVar14) {
            uVar17 = 0;
            if (plVar24 != (long *)0x0) {
              uVar17 = (ulong)plVar14 / (ulong)plVar24;
            }
            plVar14 = (long *)((long)plVar14 - uVar17 * (long)plVar24);
          }
          if (plVar14 != unaff_x20) break;
        }
      }
    }
  }
  plVar22 = (long *)0x60;
  __Znwm();
  lStack_80 = 0;
  *plVar22 = 0;
  plVar22[1] = (long)plVar18;
  plStack_90 = plVar22;
  plStack_88 = plVar8;
  if ((long)uStack_98 < 0) {
    func_0x000107c3192c(plVar22 + 2,pppuStack_a8,uStack_a0);
  }
  else {
    plVar22[3] = uStack_a0;
    plVar22[2] = (long)pppuStack_a8;
    plVar22[4] = (long)uStack_98;
  }
  lVar21 = lStack_b8;
  lVar15 = lStack_c0;
  plVar22[9] = 0;
  plVar22[8] = 0;
  *(undefined1 *)(plVar22 + 6) = 0;
  plVar22[5] = (long)&PTR_FUN_110c6c2d0;
  *(undefined2 *)((long)plVar22 + 0x32) = 0xf;
  plVar22[0xb] = 0;
  plVar22[10] = 0;
  puVar13 = (undefined8 *)0x20;
  __Znwm();
  *puVar13 = &PTR_FUN_110c6b820;
  puVar13[2] = 0;
  puVar13[3] = 0;
  puVar13[1] = 0;
  FUN_10a0723d0(puVar13 + 1,lVar15,lVar21,lVar21 - lVar15 >> 2);
  plVar14 = (long *)plVar22[0xb];
  plVar22[0xb] = (long)puVar13;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 8))();
  }
  lStack_80 = CONCAT71(lStack_80._1_7_,1);
  if ((plVar24 == (long *)0x0) ||
     (*(float *)(plVar10 + 0xb) * (float)plVar24 < (float)(plVar10[10] + 1))) {
    uVar19 = 1;
    if ((long *)0x2 < plVar24) {
      uVar19 = (ulong)(((ulong)plVar24 & (long)plVar24 - 1U) != 0);
    }
    uVar19 = uVar19 | (long)plVar24 << 1;
    uVar17 = (ulong)((float)(plVar10[10] + 1) / *(float *)(plVar10 + 0xb));
    if (uVar19 <= uVar17) {
      uVar19 = uVar17;
    }
    FUN_10a4ba824(plVar8,uVar19);
    plVar24 = (long *)plVar10[8];
    if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
      unaff_x20 = (long *)((long)plVar24 - 1U & (ulong)plVar18);
    }
    else {
      unaff_x20 = plVar18;
      if (plVar24 <= plVar18) {
        uVar19 = 0;
        if (plVar24 != (long *)0x0) {
          uVar19 = (ulong)plVar18 / (ulong)plVar24;
        }
        unaff_x20 = (long *)((long)plVar18 - uVar19 * (long)plVar24);
      }
    }
  }
  lVar15 = *plVar8;
  plVar18 = *(long **)(lVar15 + (long)unaff_x20 * 8);
  if (plVar18 == (long *)0x0) {
    plVar18 = plVar10 + 9;
    *plStack_90 = *plVar18;
    *plVar18 = (long)plStack_90;
    *(long **)(lVar15 + (long)unaff_x20 * 8) = plVar18;
    if (*plStack_90 != 0) {
      plVar18 = *(long **)(*plStack_90 + 8);
      if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
        plVar18 = (long *)((ulong)plVar18 & (long)plVar24 - 1U);
      }
      else if (plVar24 <= plVar18) {
        uVar19 = 0;
        if (plVar24 != (long *)0x0) {
          uVar19 = (ulong)plVar18 / (ulong)plVar24;
        }
        plVar18 = (long *)((long)plVar18 - uVar19 * (long)plVar24);
      }
      *(long **)(*plVar8 + (long)plVar18 * 8) = plStack_90;
    }
  }
  else {
    *plStack_90 = *plVar18;
    *plVar18 = (long)plStack_90;
  }
  plVar10[10] = plVar10[10] + 1;
  plVar22 = plStack_90;
LAB_10acc9c5c:
  func_0x00010a5499ec(plVar10,1,plVar22 + 5,&pppuStack_a8);
  if (*(char *)(plVar10[0x11] + 8) == '\x01') {
    FUN_10a54a030(&plStack_90,plVar10 + 5);
    FUN_10a549a74(plVar10 + 0x10,&plStack_90,&pppuStack_a8);
    plVar8 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar10 = plStack_88 + 1;
      do {
        lVar15 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
  }
  if ((long)uStack_98 < 0) {
    __ZdlPv(pppuStack_a8);
  }
  if (lStack_c0 != 0) {
    lStack_b8 = lStack_c0;
    __ZdlPv();
  }
  if (plStack_e0 != (long *)0x0) {
    plVar8 = plStack_e0 + 1;
    do {
      lVar15 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_e0);
    }
  }
  if ((char)bStack_c1 < '\0') {
    __ZdlPv(pppuStack_d8);
  }
  *extraout_x8 = 0;
  plVar8 = plVar9 + 0x4b;
  lVar15 = plVar9[0x59];
  uVar19 = lVar15 - 1;
  plVar9[0x59] = uVar19;
  if (uVar19 < 8) {
    uVar19 = plVar8[lVar15 + 2];
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
  plVar10 = (long *)*plVar8;
  plVar18 = (long *)plVar9[0x4c];
  lVar15 = (long)plVar18 - (long)plVar10;
  uVar17 = lVar15 >> 4;
  if (uVar17 < uVar19) {
    uVar23 = uVar19 - uVar17;
    lVar21 = plVar9[0x4d];
    if ((ulong)(lVar21 - (long)plVar18 >> 4) < uVar23) {
      if (uVar19 >> 0x3c == 0) {
        uVar16 = lVar21 - (long)plVar10 >> 3;
        if (uVar16 <= uVar19) {
          uVar16 = uVar19;
        }
        if (0x7fffffffffffffef < (ulong)(lVar21 - (long)plVar10)) {
          uVar16 = 0xfffffffffffffff;
        }
        plStack_78 = plVar8;
        if (uVar16 >> 0x3c == 0) {
          lVar7 = uVar16 << 4;
          __Znwm();
          lVar1 = lVar7 + lVar15;
          _bzero(lVar1,uVar23 * 0x10);
          lVar20 = lVar1 + uVar17 * -0x10;
          _memcpy(lVar20,plVar10,lVar15);
          *plVar8 = lVar20;
          plVar9[0x4c] = lVar1 + uVar23 * 0x10;
          plVar9[0x4d] = lVar7 + uVar16 * 0x10;
          uStack_98 = plVar10;
          plStack_90 = plVar10;
          plStack_88 = plVar10;
          lStack_80 = lVar21;
          func_0x00010988c1b8(&uStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar6)();
    }
    _bzero(plVar18,uVar23 * 0x10);
    plVar9[0x4c] = (long)(plVar18 + uVar23 * 2);
  }
  else if (uVar19 < uVar17) {
    while (plVar18 != plVar10 + uVar19 * 2) {
      plVar18 = plVar18 + -2;
      func_0x00010988c204(plVar18);
    }
    plVar9[0x4c] = (long)(plVar10 + uVar19 * 2);
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar19;
  return;
}



/* Entry: 10acc986c; end: 10acc9e6f;  */

void FUN_10acc986c(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 ****ppppuVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 ****ppppuVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  long *unaff_x20;
  long lVar19;
  long lVar20;
  long *plVar21;
  ulong uVar22;
  long *plVar23;
  undefined8 *puStack_d8;
  long *plStack_d0;
  undefined8 ***pppuStack_c8;
  ulong uStack_c0;
  byte bStack_b1;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 ***pppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  
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
  FUN_10acc8580(param_2,param_3);
  FUN_10acc9e70(param_5);
  func_0x000109898570(&pppuStack_c8,param_2,param_4);
  FUN_10a928678(&puStack_d8,param_2,param_4 + 0x10);
  lStack_a8 = 0;
  uStack_a0 = 0;
  lStack_b0 = 0;
  func_0x0001074287b0(&lStack_b0,puStack_d8[1]);
  _memcpy(lStack_b0,*puStack_d8,puStack_d8[1] << 2);
  if ((char)plVar10[0xc] == '\x01') {
    FUN_10a00946c(&UNK_10f6a1d58);
LAB_10acc9d84:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10acc9d88);
    (*pcVar7)();
  }
  uVar18 = uStack_c0;
  ppppuVar6 = (undefined8 ****)pppuStack_c8;
  if (-1 < (char)bStack_b1) {
    uVar18 = (ulong)bStack_b1;
    ppppuVar6 = &pppuStack_c8;
  }
  if (0x7ffffffffffffff7 < uVar18) {
    func_0x000109ffde50();
    goto LAB_10acc9d84;
  }
  if (uVar18 < 0x17) {
    uStack_88 = (long *)CONCAT17((char)uVar18,(undefined7)uStack_88);
    ppppuVar11 = &pppuStack_98;
    if (uVar18 != 0) goto LAB_10acc99b0;
  }
  else {
    ppppuVar2 = (undefined8 ****)0x19;
    if ((uVar18 | 7) != 0x17) {
      ppppuVar2 = (undefined8 ****)((uVar18 | 7) + 1);
    }
    ppppuVar11 = ppppuVar2;
    __Znwm();
    uStack_88 = (long *)((ulong)ppppuVar2 | 0x8000000000000000);
    pppuStack_98 = ppppuVar11;
    uStack_90 = uVar18;
LAB_10acc99b0:
    _memmove(ppppuVar11,ppppuVar6,uVar18);
  }
  *(undefined1 *)((long)ppppuVar11 + uVar18) = 0;
  FUN_10ac9e388(plVar10,&pppuStack_98,0);
  plVar3 = plVar10 + 7;
  plVar17 = plVar3;
  func_0x000107c2b05c(plVar3,&pppuStack_98);
  plVar23 = (long *)plVar10[8];
  if (plVar23 != (long *)0x0) {
    uVar18 = (long)plVar23 - 1;
    if (((ulong)plVar23 & uVar18) == 0) {
      unaff_x20 = (long *)(uVar18 & (ulong)plVar17);
    }
    else {
      unaff_x20 = plVar17;
      if (plVar23 <= plVar17) {
        uVar16 = 0;
        if (plVar23 != (long *)0x0) {
          uVar16 = (ulong)plVar17 / (ulong)plVar23;
        }
        unaff_x20 = (long *)((long)plVar17 - uVar16 * (long)plVar23);
      }
    }
    puVar12 = *(undefined8 **)(*plVar3 + (long)unaff_x20 * 8);
    if (puVar12 != (undefined8 *)0x0) {
      for (plVar21 = (long *)*puVar12; plVar21 != (long *)0x0; plVar21 = (long *)*plVar21) {
        plVar13 = (long *)plVar21[1];
        if (plVar13 == plVar17) {
          plVar13 = plVar3;
          func_0x000107c2b068(plVar3,plVar21 + 2,&pppuStack_98);
          if (((ulong)plVar13 & 1) != 0) goto LAB_10acc9c5c;
        }
        else {
          if (((ulong)plVar23 & uVar18) == 0) {
            plVar13 = (long *)((ulong)plVar13 & uVar18);
          }
          else if (plVar23 <= plVar13) {
            uVar16 = 0;
            if (plVar23 != (long *)0x0) {
              uVar16 = (ulong)plVar13 / (ulong)plVar23;
            }
            plVar13 = (long *)((long)plVar13 - uVar16 * (long)plVar23);
          }
          if (plVar13 != unaff_x20) break;
        }
      }
    }
  }
  plVar21 = (long *)0x60;
  __Znwm();
  lStack_70 = 0;
  *plVar21 = 0;
  plVar21[1] = (long)plVar17;
  plStack_80 = plVar21;
  plStack_78 = plVar3;
  if ((long)uStack_88 < 0) {
    func_0x000107c3192c(plVar21 + 2,pppuStack_98,uStack_90);
  }
  else {
    plVar21[3] = uStack_90;
    plVar21[2] = (long)pppuStack_98;
    plVar21[4] = (long)uStack_88;
  }
  lVar20 = lStack_a8;
  lVar14 = lStack_b0;
  plVar21[9] = 0;
  plVar21[8] = 0;
  *(undefined1 *)(plVar21 + 6) = 0;
  plVar21[5] = (long)&PTR_FUN_110c6c2d0;
  *(undefined2 *)((long)plVar21 + 0x32) = 0xf;
  plVar21[0xb] = 0;
  plVar21[10] = 0;
  puVar12 = (undefined8 *)0x20;
  __Znwm();
  *puVar12 = &PTR_FUN_110c6b820;
  puVar12[2] = 0;
  puVar12[3] = 0;
  puVar12[1] = 0;
  FUN_10a0723d0(puVar12 + 1,lVar14,lVar20,lVar20 - lVar14 >> 2);
  plVar13 = (long *)plVar21[0xb];
  plVar21[0xb] = (long)puVar12;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  lStack_70 = CONCAT71(lStack_70._1_7_,1);
  if ((plVar23 == (long *)0x0) ||
     (*(float *)(plVar10 + 0xb) * (float)plVar23 < (float)(plVar10[10] + 1))) {
    uVar18 = 1;
    if ((long *)0x2 < plVar23) {
      uVar18 = (ulong)(((ulong)plVar23 & (long)plVar23 - 1U) != 0);
    }
    uVar18 = uVar18 | (long)plVar23 << 1;
    uVar16 = (ulong)((float)(plVar10[10] + 1) / *(float *)(plVar10 + 0xb));
    if (uVar18 <= uVar16) {
      uVar18 = uVar16;
    }
    FUN_10a4ba824(plVar3,uVar18);
    plVar23 = (long *)plVar10[8];
    if (((ulong)plVar23 & (long)plVar23 - 1U) == 0) {
      unaff_x20 = (long *)((long)plVar23 - 1U & (ulong)plVar17);
    }
    else {
      unaff_x20 = plVar17;
      if (plVar23 <= plVar17) {
        uVar18 = 0;
        if (plVar23 != (long *)0x0) {
          uVar18 = (ulong)plVar17 / (ulong)plVar23;
        }
        unaff_x20 = (long *)((long)plVar17 - uVar18 * (long)plVar23);
      }
    }
  }
  lVar14 = *plVar3;
  plVar17 = *(long **)(lVar14 + (long)unaff_x20 * 8);
  if (plVar17 == (long *)0x0) {
    plVar17 = plVar10 + 9;
    *plStack_80 = *plVar17;
    *plVar17 = (long)plStack_80;
    *(long **)(lVar14 + (long)unaff_x20 * 8) = plVar17;
    if (*plStack_80 != 0) {
      plVar17 = *(long **)(*plStack_80 + 8);
      if (((ulong)plVar23 & (long)plVar23 - 1U) == 0) {
        plVar17 = (long *)((ulong)plVar17 & (long)plVar23 - 1U);
      }
      else if (plVar23 <= plVar17) {
        uVar18 = 0;
        if (plVar23 != (long *)0x0) {
          uVar18 = (ulong)plVar17 / (ulong)plVar23;
        }
        plVar17 = (long *)((long)plVar17 - uVar18 * (long)plVar23);
      }
      *(long **)(*plVar3 + (long)plVar17 * 8) = plStack_80;
    }
  }
  else {
    *plStack_80 = *plVar17;
    *plVar17 = (long)plStack_80;
  }
  plVar10[10] = plVar10[10] + 1;
  plVar21 = plStack_80;
LAB_10acc9c5c:
  func_0x00010a5499ec(plVar10,1,plVar21 + 5,&pppuStack_98);
  if (*(char *)(plVar10[0x11] + 8) == '\x01') {
    FUN_10a54a030(&plStack_80,plVar10 + 5);
    FUN_10a549a74(plVar10 + 0x10,&plStack_80,&pppuStack_98);
    plVar10 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar3 = plStack_78 + 1;
      do {
        lVar14 = *plVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *plVar3 = lVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
  }
  if ((long)uStack_88 < 0) {
    __ZdlPv(pppuStack_98);
  }
  if (lStack_b0 != 0) {
    lStack_a8 = lStack_b0;
    __ZdlPv();
  }
  if (plStack_d0 != (long *)0x0) {
    plVar10 = plStack_d0 + 1;
    do {
      lVar14 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d0);
    }
  }
  if ((char)bStack_b1 < '\0') {
    __ZdlPv(pppuStack_c8);
  }
  *param_1 = 0;
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
  plVar3 = (long *)*plVar10;
  plVar17 = (long *)plVar9[0x4c];
  lVar14 = (long)plVar17 - (long)plVar3;
  uVar16 = lVar14 >> 4;
  if (uVar16 < uVar18) {
    uVar22 = uVar18 - uVar16;
    lVar20 = plVar9[0x4d];
    if ((ulong)(lVar20 - (long)plVar17 >> 4) < uVar22) {
      if (uVar18 >> 0x3c == 0) {
        uVar15 = lVar20 - (long)plVar3 >> 3;
        if (uVar15 <= uVar18) {
          uVar15 = uVar18;
        }
        if (0x7fffffffffffffef < (ulong)(lVar20 - (long)plVar3)) {
          uVar15 = 0xfffffffffffffff;
        }
        plStack_68 = plVar10;
        if (uVar15 >> 0x3c == 0) {
          lVar8 = uVar15 << 4;
          __Znwm();
          lVar1 = lVar8 + lVar14;
          _bzero(lVar1,uVar22 * 0x10);
          lVar19 = lVar1 + uVar16 * -0x10;
          _memcpy(lVar19,plVar3,lVar14);
          *plVar10 = lVar19;
          plVar9[0x4c] = lVar1 + uVar22 * 0x10;
          plVar9[0x4d] = lVar8 + uVar15 * 0x10;
          uStack_88 = plVar3;
          plStack_80 = plVar3;
          plStack_78 = plVar3;
          lStack_70 = lVar20;
          func_0x00010988c1b8(&uStack_88);
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
    _bzero(plVar17,uVar22 * 0x10);
    plVar9[0x4c] = (long)(plVar17 + uVar22 * 2);
  }
  else if (uVar18 < uVar16) {
    while (plVar17 != plVar3 + uVar18 * 2) {
      plVar17 = plVar17 + -2;
      func_0x00010988c204(plVar17);
    }
    plVar9[0x4c] = (long)(plVar3 + uVar18 * 2);
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar18;
  return;
}



/* Entry: 10acc9e70; end: 10acc9e93;  */

/* WARNING: Removing unreachable block (ram,0x00010acca400) */

void FUN_10acc9e70(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *****pppppuVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  undefined8 *****pppppuVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  undefined4 *extraout_x8;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  undefined8 *puVar19;
  long *plVar20;
  long lVar21;
  undefined *puVar22;
  ulong uVar23;
  long *plVar24;
  long *unaff_x27;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  long *plStack_128;
  long lStack_120;
  long *plStack_118;
  long in_stack_fffffffffffffef0;
  undefined8 ****ppppuStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar7 = (long *)0x2;
  puVar10 = (undefined8 *)0x0;
  FUN_10a052ee0();
  if ((char)plVar7[0xc] == '\x01') {
    plVar7 = (long *)&UNK_10f6a1d58;
    FUN_10a00946c();
  }
  else {
    uVar13 = puVar10[1];
    puVar19 = (undefined8 *)*puVar10;
    if (-1 < (char)*(byte *)((long)puVar10 + 0x17)) {
      uVar13 = (ulong)*(byte *)((long)puVar10 + 0x17);
      puVar19 = puVar10;
    }
    if (uVar13 < 0x7ffffffffffffff8) {
      if (uVar13 < 0x17) {
        uStack_98 = CONCAT17((char)uVar13,(undefined7)uStack_98);
        pppppuVar8 = &ppppuStack_a8;
        if (uVar13 == 0) goto LAB_10acc9f3c;
      }
      else {
        pppppuVar2 = (undefined8 *****)0x19;
        if ((uVar13 | 7) != 0x17) {
          pppppuVar2 = (undefined8 *****)((uVar13 | 7) + 1);
        }
        pppppuVar8 = pppppuVar2;
        __Znwm();
        uStack_98 = (ulong)pppppuVar2 | 0x8000000000000000;
        ppppuStack_a8 = pppppuVar8;
        uStack_a0 = uVar13;
      }
      _memmove(pppppuVar8,puVar19,uVar13);
LAB_10acc9f3c:
      *(undefined1 *)((long)pppppuVar8 + uVar13) = 0;
      FUN_10ac9e388(plVar7,&ppppuStack_a8,0);
      plVar9 = plVar7 + 7;
      plVar17 = plVar9;
      func_0x000107c2b05c(plVar9,&ppppuStack_a8);
      plVar24 = (long *)plVar7[8];
      if (plVar24 != (long *)0x0) {
        puVar22 = (undefined *)((long)plVar24 + -1);
        if (((ulong)plVar24 & (ulong)puVar22) == 0) {
          unaff_x27 = (long *)((ulong)puVar22 & (ulong)plVar17);
        }
        else {
          unaff_x27 = plVar17;
          if (plVar24 <= plVar17) {
            uVar13 = 0;
            if (plVar24 != (long *)0x0) {
              uVar13 = (ulong)plVar17 / (ulong)plVar24;
            }
            unaff_x27 = (long *)((long)plVar17 - uVar13 * (long)plVar24);
          }
        }
        puVar10 = *(undefined8 **)(*plVar9 + (long)unaff_x27 * 8);
        if (puVar10 != (undefined8 *)0x0) {
          for (plVar20 = (long *)*puVar10; plVar20 != (long *)0x0; plVar20 = (long *)*plVar20) {
            plVar12 = (long *)plVar20[1];
            if (plVar12 == plVar17) {
              plVar12 = plVar9;
              func_0x000107c2b068(plVar9,plVar20 + 2,&ppppuStack_a8);
              if (((ulong)plVar12 & 1) != 0) goto LAB_10acca1d0;
            }
            else {
              if (((ulong)plVar24 & (ulong)puVar22) == 0) {
                plVar12 = (long *)((ulong)plVar12 & (ulong)puVar22);
              }
              else if (plVar24 <= plVar12) {
                uVar13 = 0;
                if (plVar24 != (long *)0x0) {
                  uVar13 = (ulong)plVar12 / (ulong)plVar24;
                }
                plVar12 = (long *)((long)plVar12 - uVar13 * (long)plVar24);
              }
              if (plVar12 != unaff_x27) break;
            }
          }
        }
      }
      plVar20 = (long *)0x60;
      __Znwm();
      uStack_80 = 0;
      *plVar20 = 0;
      plVar20[1] = (long)plVar17;
      plStack_90 = plVar20;
      plStack_88 = plVar9;
      if ((long)uStack_98 < 0) {
        func_0x000107c3192c(plVar20 + 2,ppppuStack_a8,uStack_a0);
      }
      else {
        plVar20[3] = uStack_a0;
        plVar20[2] = (long)ppppuStack_a8;
        plVar20[4] = uStack_98;
      }
      plVar20[9] = 0;
      plVar20[8] = 0;
      *(undefined1 *)(plVar20 + 6) = 0;
      plVar20[5] = (long)&PTR_FUN_110c6c2d0;
      *(undefined2 *)((long)plVar20 + 0x32) = 0xf;
      plVar20[0xb] = 0;
      plVar20[10] = 0;
      lVar14 = *param_1;
      lVar21 = param_1[1];
      puVar10 = (undefined8 *)0x20;
      __Znwm();
      *puVar10 = &PTR_FUN_110c6b870;
      puVar10[2] = 0;
      puVar10[3] = 0;
      puVar10[1] = 0;
      FUN_10a0e9a40(puVar10 + 1,lVar14,lVar21,lVar21 - lVar14 >> 2);
      plVar12 = (long *)plVar20[0xb];
      plVar20[0xb] = (long)puVar10;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 8))();
      }
      uStack_80 = CONCAT71(uStack_80._1_7_,1);
      if ((plVar24 == (long *)0x0) ||
         (*(float *)(plVar7 + 0xb) * (float)plVar24 < (float)(plVar7[10] + 1))) {
        uVar13 = 1;
        if ((long *)0x2 < plVar24) {
          uVar13 = (ulong)(((ulong)plVar24 & (ulong)((long)plVar24 + -1)) != 0);
        }
        uVar13 = uVar13 | (long)plVar24 << 1;
        uVar16 = (ulong)((float)(plVar7[10] + 1) / *(float *)(plVar7 + 0xb));
        if (uVar13 <= uVar16) {
          uVar13 = uVar16;
        }
        FUN_10a4ba824(plVar9,uVar13);
        plVar24 = (long *)plVar7[8];
        if (((ulong)plVar24 & (ulong)((long)plVar24 + -1)) == 0) {
          unaff_x27 = (long *)((ulong)((long)plVar24 + -1) & (ulong)plVar17);
        }
        else {
          unaff_x27 = plVar17;
          if (plVar24 <= plVar17) {
            uVar13 = 0;
            if (plVar24 != (long *)0x0) {
              uVar13 = (ulong)plVar17 / (ulong)plVar24;
            }
            unaff_x27 = (long *)((long)plVar17 - uVar13 * (long)plVar24);
          }
        }
      }
      lVar14 = *plVar9;
      plVar17 = *(long **)(lVar14 + (long)unaff_x27 * 8);
      if (plVar17 == (long *)0x0) {
        plVar17 = plVar7 + 9;
        *plStack_90 = *plVar17;
        *plVar17 = (long)plStack_90;
        *(long **)(lVar14 + (long)unaff_x27 * 8) = plVar17;
        if (*plStack_90 != 0) {
          plVar17 = *(long **)(*plStack_90 + 8);
          if (((ulong)plVar24 & (ulong)((long)plVar24 + -1)) == 0) {
            plVar17 = (long *)((ulong)plVar17 & (ulong)((long)plVar24 + -1));
          }
          else if (plVar24 <= plVar17) {
            uVar13 = 0;
            if (plVar24 != (long *)0x0) {
              uVar13 = (ulong)plVar17 / (ulong)plVar24;
            }
            plVar17 = (long *)((long)plVar17 - uVar13 * (long)plVar24);
          }
          *(long **)(*plVar9 + (long)plVar17 * 8) = plStack_90;
        }
      }
      else {
        *plStack_90 = *plVar17;
        *plVar17 = (long)plStack_90;
      }
      plVar7[10] = plVar7[10] + 1;
      plVar20 = plStack_90;
LAB_10acca1d0:
      func_0x00010a5499ec(plVar7,1,plVar20 + 5,&ppppuStack_a8);
      if (*(char *)(plVar7[0x11] + 8) == '\x01') {
        FUN_10a54a030(&plStack_90,plVar7 + 5);
        FUN_10a549a74(plVar7 + 0x10,&plStack_90,&ppppuStack_a8);
        plVar7 = plStack_88;
        if (plStack_88 != (long *)0x0) {
          plVar9 = plStack_88 + 1;
          do {
            lVar14 = *plVar9;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar4) {
              *plVar9 = lVar14 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plStack_88 + 0x10))(plStack_88);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
          }
        }
      }
      if ((long)uStack_98 < 0) {
        __ZdlPv(ppppuStack_a8);
      }
      return;
    }
  }
  func_0x000109ffde50();
  uVar11 = 0;
  func_0x00010a4baa30(&plStack_90,0);
  if (uStack_98._7_1_ < '\0') {
    __ZdlPv(ppppuStack_a8);
  }
  __Unwind_Resume();
  plVar9 = plVar7;
  (**(code **)(*plVar7 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  plVar17 = plVar7;
  FUN_10acc8580(plVar7,uVar11);
  FUN_10acca4c8(param_4);
  func_0x000109898570(&lStack_120,plVar7,param_1);
  FUN_10a933b88(&puStack_130,plVar7,param_1 + 2);
  func_0x000108a5942c(&stack0xfffffffffffffef8,puStack_130[1]);
  _memcpy(0,*puStack_130,puStack_130[1] << 2);
  FUN_10acc9e94(plVar17,&lStack_120,&stack0xfffffffffffffef8);
  if (plStack_128 != (long *)0x0) {
    plVar7 = plStack_128 + 1;
    do {
      lVar14 = *plVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_128 + 0x10))(plStack_128);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_128);
    }
  }
  if (in_stack_fffffffffffffef0 < 0) {
    __ZdlPv(lStack_120);
  }
  *extraout_x8 = 0;
  plVar7 = plVar9 + 0x4b;
  lVar14 = plVar9[0x59];
  uVar13 = lVar14 - 1;
  plVar9[0x59] = uVar13;
  if (uVar13 < 8) {
    uVar13 = plVar7[lVar14 + 2];
    if (plVar9[0x5a] == uVar13) {
      return;
    }
  }
  else {
    uVar13 = *(ulong *)(plVar9[0x57] + -8);
    plVar9[0x57] = plVar9[0x57] + -8;
    if (plVar9[0x5a] == uVar13) {
      return;
    }
  }
  puVar10 = (undefined8 *)*plVar7;
  puVar19 = (undefined8 *)plVar9[0x4c];
  lVar14 = (long)puVar19 - (long)puVar10;
  uVar16 = lVar14 >> 4;
  if (uVar16 < uVar13) {
    uVar23 = uVar13 - uVar16;
    lVar21 = plVar9[0x4d];
    if ((ulong)(lVar21 - (long)puVar19 >> 4) < uVar23) {
      if (uVar13 >> 0x3c == 0) {
        uVar15 = lVar21 - (long)puVar10 >> 3;
        if (uVar15 <= uVar13) {
          uVar15 = uVar13;
        }
        if (0x7fffffffffffffef < (ulong)(lVar21 - (long)puVar10)) {
          uVar15 = 0xfffffffffffffff;
        }
        plStack_118 = plVar7;
        if (uVar15 >> 0x3c == 0) {
          lVar6 = uVar15 << 4;
          __Znwm();
          lVar1 = lVar6 + lVar14;
          _bzero(lVar1,uVar23 * 0x10);
          lVar18 = lVar1 + uVar16 * -0x10;
          _memcpy(lVar18,puVar10,lVar14);
          *plVar7 = lVar18;
          plVar9[0x4c] = lVar1 + uVar23 * 0x10;
          plVar9[0x4d] = lVar6 + uVar15 * 0x10;
          puStack_138 = puVar10;
          puStack_130 = puVar10;
          plStack_128 = puVar10;
          lStack_120 = lVar21;
          func_0x00010988c1b8(&puStack_138);
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
    _bzero(puVar19,uVar23 * 0x10);
    plVar9[0x4c] = (long)(puVar19 + uVar23 * 2);
  }
  else if (uVar13 < uVar16) {
    while (puVar19 != puVar10 + uVar13 * 2) {
      puVar19 = puVar19 + -2;
      func_0x00010988c204(puVar19);
    }
    plVar9[0x4c] = (long)(puVar10 + uVar13 * 2);
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar13;
  return;
}



/* Entry: 10acc9e94; end: 10acca323;  */

/* WARNING: Removing unreachable block (ram,0x00010acca400) */

void FUN_10acc9e94(long *param_1,undefined8 *param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *****pppppuVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  undefined8 *****pppppuVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  undefined4 *extraout_x8;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  undefined8 *puVar18;
  long *plVar19;
  long lVar20;
  undefined *puVar21;
  ulong uVar22;
  long *plVar23;
  long *unaff_x27;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  long *plStack_118;
  long lStack_110;
  long *plStack_108;
  long in_stack_ffffffffffffff00;
  undefined8 ****ppppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  
  if ((char)param_1[0xc] == '\x01') {
    param_1 = (long *)&UNK_10f6a1d58;
    FUN_10a00946c();
  }
  else {
    uVar12 = param_2[1];
    puVar10 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar12 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar10 = param_2;
    }
    if (uVar12 < 0x7ffffffffffffff8) {
      if (uVar12 < 0x17) {
        uStack_88 = CONCAT17((char)uVar12,(undefined7)uStack_88);
        pppppuVar7 = &ppppuStack_98;
        if (uVar12 == 0) goto LAB_10acc9f3c;
      }
      else {
        pppppuVar2 = (undefined8 *****)0x19;
        if ((uVar12 | 7) != 0x17) {
          pppppuVar2 = (undefined8 *****)((uVar12 | 7) + 1);
        }
        pppppuVar7 = pppppuVar2;
        __Znwm();
        uStack_88 = (ulong)pppppuVar2 | 0x8000000000000000;
        ppppuStack_98 = pppppuVar7;
        uStack_90 = uVar12;
      }
      _memmove(pppppuVar7,puVar10,uVar12);
LAB_10acc9f3c:
      *(undefined1 *)((long)pppppuVar7 + uVar12) = 0;
      FUN_10ac9e388(param_1,&ppppuStack_98,0);
      plVar8 = param_1 + 7;
      plVar16 = plVar8;
      func_0x000107c2b05c(plVar8,&ppppuStack_98);
      plVar23 = (long *)param_1[8];
      if (plVar23 != (long *)0x0) {
        puVar21 = (undefined *)((long)plVar23 + -1);
        if (((ulong)plVar23 & (ulong)puVar21) == 0) {
          unaff_x27 = (long *)((ulong)puVar21 & (ulong)plVar16);
        }
        else {
          unaff_x27 = plVar16;
          if (plVar23 <= plVar16) {
            uVar12 = 0;
            if (plVar23 != (long *)0x0) {
              uVar12 = (ulong)plVar16 / (ulong)plVar23;
            }
            unaff_x27 = (long *)((long)plVar16 - uVar12 * (long)plVar23);
          }
        }
        puVar10 = *(undefined8 **)(*plVar8 + (long)unaff_x27 * 8);
        if (puVar10 != (undefined8 *)0x0) {
          for (plVar19 = (long *)*puVar10; plVar19 != (long *)0x0; plVar19 = (long *)*plVar19) {
            plVar11 = (long *)plVar19[1];
            if (plVar11 == plVar16) {
              plVar11 = plVar8;
              func_0x000107c2b068(plVar8,plVar19 + 2,&ppppuStack_98);
              if (((ulong)plVar11 & 1) != 0) goto LAB_10acca1d0;
            }
            else {
              if (((ulong)plVar23 & (ulong)puVar21) == 0) {
                plVar11 = (long *)((ulong)plVar11 & (ulong)puVar21);
              }
              else if (plVar23 <= plVar11) {
                uVar12 = 0;
                if (plVar23 != (long *)0x0) {
                  uVar12 = (ulong)plVar11 / (ulong)plVar23;
                }
                plVar11 = (long *)((long)plVar11 - uVar12 * (long)plVar23);
              }
              if (plVar11 != unaff_x27) break;
            }
          }
        }
      }
      plVar19 = (long *)0x60;
      __Znwm();
      uStack_70 = 0;
      *plVar19 = 0;
      plVar19[1] = (long)plVar16;
      plStack_80 = plVar19;
      plStack_78 = plVar8;
      if ((long)uStack_88 < 0) {
        func_0x000107c3192c(plVar19 + 2,ppppuStack_98,uStack_90);
      }
      else {
        plVar19[3] = uStack_90;
        plVar19[2] = (long)ppppuStack_98;
        plVar19[4] = uStack_88;
      }
      plVar19[9] = 0;
      plVar19[8] = 0;
      *(undefined1 *)(plVar19 + 6) = 0;
      plVar19[5] = (long)&PTR_FUN_110c6c2d0;
      *(undefined2 *)((long)plVar19 + 0x32) = 0xf;
      plVar19[0xb] = 0;
      plVar19[10] = 0;
      lVar13 = *param_3;
      lVar20 = param_3[1];
      puVar10 = (undefined8 *)0x20;
      __Znwm();
      *puVar10 = &PTR_FUN_110c6b870;
      puVar10[2] = 0;
      puVar10[3] = 0;
      puVar10[1] = 0;
      FUN_10a0e9a40(puVar10 + 1,lVar13,lVar20,lVar20 - lVar13 >> 2);
      plVar11 = (long *)plVar19[0xb];
      plVar19[0xb] = (long)puVar10;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 8))();
      }
      uStack_70 = CONCAT71(uStack_70._1_7_,1);
      if ((plVar23 == (long *)0x0) ||
         (*(float *)(param_1 + 0xb) * (float)plVar23 < (float)(param_1[10] + 1))) {
        uVar12 = 1;
        if ((long *)0x2 < plVar23) {
          uVar12 = (ulong)(((ulong)plVar23 & (ulong)((long)plVar23 + -1)) != 0);
        }
        uVar12 = uVar12 | (long)plVar23 << 1;
        uVar15 = (ulong)((float)(param_1[10] + 1) / *(float *)(param_1 + 0xb));
        if (uVar12 <= uVar15) {
          uVar12 = uVar15;
        }
        FUN_10a4ba824(plVar8,uVar12);
        plVar23 = (long *)param_1[8];
        if (((ulong)plVar23 & (ulong)((long)plVar23 + -1)) == 0) {
          unaff_x27 = (long *)((ulong)((long)plVar23 + -1) & (ulong)plVar16);
        }
        else {
          unaff_x27 = plVar16;
          if (plVar23 <= plVar16) {
            uVar12 = 0;
            if (plVar23 != (long *)0x0) {
              uVar12 = (ulong)plVar16 / (ulong)plVar23;
            }
            unaff_x27 = (long *)((long)plVar16 - uVar12 * (long)plVar23);
          }
        }
      }
      lVar13 = *plVar8;
      plVar16 = *(long **)(lVar13 + (long)unaff_x27 * 8);
      if (plVar16 == (long *)0x0) {
        plVar16 = param_1 + 9;
        *plStack_80 = *plVar16;
        *plVar16 = (long)plStack_80;
        *(long **)(lVar13 + (long)unaff_x27 * 8) = plVar16;
        if (*plStack_80 != 0) {
          plVar16 = *(long **)(*plStack_80 + 8);
          if (((ulong)plVar23 & (ulong)((long)plVar23 + -1)) == 0) {
            plVar16 = (long *)((ulong)plVar16 & (ulong)((long)plVar23 + -1));
          }
          else if (plVar23 <= plVar16) {
            uVar12 = 0;
            if (plVar23 != (long *)0x0) {
              uVar12 = (ulong)plVar16 / (ulong)plVar23;
            }
            plVar16 = (long *)((long)plVar16 - uVar12 * (long)plVar23);
          }
          *(long **)(*plVar8 + (long)plVar16 * 8) = plStack_80;
        }
      }
      else {
        *plStack_80 = *plVar16;
        *plVar16 = (long)plStack_80;
      }
      param_1[10] = param_1[10] + 1;
      plVar19 = plStack_80;
LAB_10acca1d0:
      func_0x00010a5499ec(param_1,1,plVar19 + 5,&ppppuStack_98);
      if (*(char *)(param_1[0x11] + 8) == '\x01') {
        FUN_10a54a030(&plStack_80,param_1 + 5);
        FUN_10a549a74(param_1 + 0x10,&plStack_80,&ppppuStack_98);
        plVar8 = plStack_78;
        if (plStack_78 != (long *)0x0) {
          plVar16 = plStack_78 + 1;
          do {
            lVar13 = *plVar16;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar4) {
              *plVar16 = lVar13 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_78 + 0x10))(plStack_78);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
      }
      if ((long)uStack_88 < 0) {
        __ZdlPv(ppppuStack_98);
      }
      return;
    }
  }
  func_0x000109ffde50();
  uVar9 = 0;
  func_0x00010a4baa30(&plStack_80,0);
  if (uStack_88._7_1_ < '\0') {
    __ZdlPv(ppppuStack_98);
  }
  __Unwind_Resume();
  plVar8 = param_1;
  (**(code **)(*param_1 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  plVar16 = param_1;
  FUN_10acc8580(param_1,uVar9);
  FUN_10acca4c8(param_4);
  func_0x000109898570(&lStack_110,param_1,param_3);
  FUN_10a933b88(&puStack_120,param_1,param_3 + 2);
  func_0x000108a5942c(&stack0xffffffffffffff08,puStack_120[1]);
  _memcpy(0,*puStack_120,puStack_120[1] << 2);
  FUN_10acc9e94(plVar16,&lStack_110,&stack0xffffffffffffff08);
  if (plStack_118 != (long *)0x0) {
    plVar16 = plStack_118 + 1;
    do {
      lVar13 = *plVar16;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar4) {
        *plVar16 = lVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_118 + 0x10))(plStack_118);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_118);
    }
  }
  if (in_stack_ffffffffffffff00 < 0) {
    __ZdlPv(lStack_110);
  }
  *extraout_x8 = 0;
  plVar16 = plVar8 + 0x4b;
  lVar13 = plVar8[0x59];
  uVar12 = lVar13 - 1;
  plVar8[0x59] = uVar12;
  if (uVar12 < 8) {
    uVar12 = plVar16[lVar13 + 2];
    if (plVar8[0x5a] == uVar12) {
      return;
    }
  }
  else {
    uVar12 = *(ulong *)(plVar8[0x57] + -8);
    plVar8[0x57] = plVar8[0x57] + -8;
    if (plVar8[0x5a] == uVar12) {
      return;
    }
  }
  puVar10 = (undefined8 *)*plVar16;
  puVar18 = (undefined8 *)plVar8[0x4c];
  lVar13 = (long)puVar18 - (long)puVar10;
  uVar15 = lVar13 >> 4;
  if (uVar15 < uVar12) {
    uVar22 = uVar12 - uVar15;
    lVar20 = plVar8[0x4d];
    if ((ulong)(lVar20 - (long)puVar18 >> 4) < uVar22) {
      if (uVar12 >> 0x3c == 0) {
        uVar14 = lVar20 - (long)puVar10 >> 3;
        if (uVar14 <= uVar12) {
          uVar14 = uVar12;
        }
        if (0x7fffffffffffffef < (ulong)(lVar20 - (long)puVar10)) {
          uVar14 = 0xfffffffffffffff;
        }
        plStack_108 = plVar16;
        if (uVar14 >> 0x3c == 0) {
          lVar6 = uVar14 << 4;
          __Znwm();
          lVar1 = lVar6 + lVar13;
          _bzero(lVar1,uVar22 * 0x10);
          lVar17 = lVar1 + uVar15 * -0x10;
          _memcpy(lVar17,puVar10,lVar13);
          *plVar16 = lVar17;
          plVar8[0x4c] = lVar1 + uVar22 * 0x10;
          plVar8[0x4d] = lVar6 + uVar14 * 0x10;
          puStack_128 = puVar10;
          puStack_120 = puVar10;
          plStack_118 = puVar10;
          lStack_110 = lVar20;
          func_0x00010988c1b8(&puStack_128);
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
    _bzero(puVar18,uVar22 * 0x10);
    plVar8[0x4c] = (long)(puVar18 + uVar22 * 2);
  }
  else if (uVar12 < uVar15) {
    while (puVar18 != puVar10 + uVar12 * 2) {
      puVar18 = puVar18 + -2;
      func_0x00010988c204(puVar18);
    }
    plVar8[0x4c] = (long)(puVar10 + uVar12 * 2);
  }
code_r0x00010988c138:
  plVar8[0x5a] = uVar12;
  return;
}



/* Entry: 10acca324; end: 10acca4c7;  */

/* WARNING: Removing unreachable block (ram,0x00010acca400) */

void FUN_10acca324(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long in_stack_ffffffffffffffa0;
  
  plVar7 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  plVar8 = param_2;
  FUN_10acc8580(param_2,param_3);
  FUN_10acca4c8(param_5);
  func_0x000109898570(&lStack_70,param_2,param_4);
  FUN_10a933b88(&puStack_80,param_2,param_4 + 0x10);
  func_0x000108a5942c(&stack0xffffffffffffffa8,puStack_80[1]);
  _memcpy(0,*puStack_80,puStack_80[1] << 2);
  FUN_10acc9e94(plVar8,&lStack_70,&stack0xffffffffffffffa8);
  if (plStack_78 != (long *)0x0) {
    plVar8 = plStack_78 + 1;
    do {
      lVar11 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
    }
  }
  if (in_stack_ffffffffffffffa0 < 0) {
    __ZdlPv(lStack_70);
  }
  *param_1 = 0;
  plVar8 = plVar7 + 0x4b;
  lVar11 = plVar7[0x59];
  uVar9 = lVar11 - 1;
  plVar7[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar8[lVar11 + 2];
    if (plVar7[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar9) {
      return;
    }
  }
  puVar2 = (undefined8 *)*plVar8;
  puVar13 = (undefined8 *)plVar7[0x4c];
  lVar11 = (long)puVar13 - (long)puVar2;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar9) {
    uVar16 = uVar9 - uVar15;
    lVar14 = plVar7[0x4d];
    if ((ulong)(lVar14 - (long)puVar13 >> 4) < uVar16) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar14 - (long)puVar2 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - (long)puVar2)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_68 = plVar8;
        if (uVar10 >> 0x3c == 0) {
          lVar6 = uVar10 << 4;
          __Znwm();
          lVar1 = lVar6 + lVar11;
          _bzero(lVar1,uVar16 * 0x10);
          lVar12 = lVar1 + uVar15 * -0x10;
          _memcpy(lVar12,puVar2,lVar11);
          *plVar8 = lVar12;
          plVar7[0x4c] = lVar1 + uVar16 * 0x10;
          plVar7[0x4d] = lVar6 + uVar10 * 0x10;
          puStack_88 = puVar2;
          puStack_80 = puVar2;
          plStack_78 = puVar2;
          lStack_70 = lVar14;
          func_0x00010988c1b8(&puStack_88);
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
    _bzero(puVar13,uVar16 * 0x10);
    plVar7[0x4c] = (long)(puVar13 + uVar16 * 2);
  }
  else if (uVar9 < uVar15) {
    while (puVar13 != puVar2 + uVar9 * 2) {
      puVar13 = puVar13 + -2;
      func_0x00010988c204(puVar13);
    }
    plVar7[0x4c] = (long)(puVar2 + uVar9 * 2);
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar9;
  return;
}



/* Entry: 10acca4c8; end: 10acca52b;  */

/* WARNING: Possible PIC construction at 0x00010acca5fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010acca600) */
/* WARNING: Removing unreachable block (ram,0x00010acca608) */
/* WARNING: Removing unreachable block (ram,0x00010acca610) */
/* WARNING: Removing unreachable block (ram,0x00010acca618) */
/* WARNING: Removing unreachable block (ram,0x00010acca61c) */
/* WARNING: Removing unreachable block (ram,0x00010acca624) */
/* WARNING: Removing unreachable block (ram,0x00010acca62c) */
/* WARNING: Removing unreachable block (ram,0x00010acca630) */
/* WARNING: Removing unreachable block (ram,0x00010acca648) */
/* WARNING: Removing unreachable block (ram,0x00010acca650) */
/* WARNING: Removing unreachable block (ram,0x00010acca658) */
/* WARNING: Removing unreachable block (ram,0x00010988c170) */
/* WARNING: Removing unreachable block (ram,0x00010988c1a0) */
/* WARNING: Removing unreachable block (ram,0x00010988c004) */
/* WARNING: Removing unreachable block (ram,0x00010988c020) */
/* WARNING: Removing unreachable block (ram,0x00010988c01c) */
/* WARNING: Removing unreachable block (ram,0x00010988c184) */
/* WARNING: Removing unreachable block (ram,0x00010988c19c) */
/* WARNING: Removing unreachable block (ram,0x00010988c024) */
/* WARNING: Removing unreachable block (ram,0x00010988c0f8) */
/* WARNING: Removing unreachable block (ram,0x00010988c100) */
/* WARNING: Removing unreachable block (ram,0x00010988c104) */
/* WARNING: Removing unreachable block (ram,0x00010988c134) */
/* WARNING: Removing unreachable block (ram,0x00010988c10c) */
/* WARNING: Removing unreachable block (ram,0x00010988c060) */
/* WARNING: Removing unreachable block (ram,0x00010988c11c) */
/* WARNING: Removing unreachable block (ram,0x00010988c074) */
/* WARNING: Removing unreachable block (ram,0x00010988c15c) */
/* WARNING: Removing unreachable block (ram,0x00010988c07c) */
/* WARNING: Removing unreachable block (ram,0x00010988c088) */
/* WARNING: Removing unreachable block (ram,0x00010988c098) */
/* WARNING: Removing unreachable block (ram,0x00010988c164) */
/* WARNING: Removing unreachable block (ram,0x00010988c168) */
/* WARNING: Removing unreachable block (ram,0x00010988c0a8) */
/* WARNING: Removing unreachable block (ram,0x00010988c138) */
/* WARNING: Removing unreachable block (ram,0x00010988c198) */

long * FUN_10acca4c8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined1 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  undefined8 extraout_x8;
  ulong uVar16;
  long *plVar17;
  long *unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined *puVar18;
  undefined8 unaff_x24;
  long *unaff_x25;
  long *plVar19;
  undefined8 unaff_x26;
  long *unaff_x27;
  undefined8 unaff_x28;
  undefined1 *puVar20;
  undefined8 uVar21;
  
  if ((int)param_1 == 2) {
    return param_1;
  }
  puVar20 = &stack0xfffffffffffffff0;
  plVar8 = (long *)0x2;
  puVar10 = (undefined8 *)0x0;
  uVar21 = 0x10acca4ec;
  FUN_10a052ee0();
  puVar4 = &stack0xfffffffffffffff0;
  while (uVar11 = param_4, plVar6 = param_1, (char)plVar8[0xc] == '\x01') {
    *(undefined1 **)(puVar4 + -0x10) = puVar20;
    *(undefined8 *)(puVar4 + -8) = uVar21;
    plVar9 = (long *)&UNK_10f6a1d58;
    FUN_10a00946c();
    *(undefined8 *)(puVar4 + -0x50) = unaff_x24;
    *(long **)(puVar4 + -0x48) = unaff_x23;
    *(long **)(puVar4 + -0x40) = unaff_x22;
    *(long **)(puVar4 + -0x38) = unaff_x21;
    *(undefined8 *)(puVar4 + -0x30) = unaff_x20;
    *(long **)(puVar4 + -0x28) = unaff_x19;
    *(undefined1 **)(puVar4 + -0x20) = puVar4 + -0x10;
    *(code **)(puVar4 + -0x18) = FUN_10acca52c;
    puVar20 = puVar4 + -0x20;
    unaff_x19 = plVar9;
    param_4 = uVar11;
    (**(code **)(*plVar9 + 0x58))();
    if ((ulong)unaff_x19[0x59] < 8) {
      unaff_x19[unaff_x19[0x59] + 0x4e] = unaff_x19[0x5a];
      unaff_x19[0x59] = unaff_x19[0x59] + 1;
    }
    else {
      func_0x00010988bfcc(unaff_x19 + 0x4b);
    }
    plVar8 = plVar9;
    FUN_10acc8580(plVar9,puVar10);
    FUN_10ac481a4(uVar11);
    func_0x000109898570(puVar4 + -0x80,plVar9,plVar6);
    FUN_10a1f7d54(puVar4 + -0x90,plVar9,plVar6 + 2);
    *(undefined8 *)(puVar4 + -0x60) = 0;
    *(undefined8 *)(puVar4 + -0x58) = 0;
    *(undefined8 *)(puVar4 + -0x68) = 0;
    func_0x00010742a308(puVar4 + -0x68,*(undefined8 *)(*(long *)(puVar4 + -0x90) + 8));
    _memcpy(*(undefined8 *)(puVar4 + -0x68),**(undefined8 **)(puVar4 + -0x90),
            (*(undefined8 **)(puVar4 + -0x90))[1] << 2);
    puVar10 = (undefined8 *)(puVar4 + -0x80);
    param_1 = (long *)(puVar4 + -0x68);
    uVar21 = 0x10acca600;
    puVar4 = puVar4 + -0x90;
    unaff_x20 = extraout_x8;
    unaff_x21 = plVar8;
    unaff_x22 = plVar6;
    unaff_x23 = plVar9;
    unaff_x24 = uVar11;
  }
  uVar14 = puVar10[1];
  puVar5 = (undefined8 *)*puVar10;
  if (-1 < (char)*(byte *)((long)puVar10 + 0x17)) {
    uVar14 = (ulong)*(byte *)((long)puVar10 + 0x17);
    puVar5 = puVar10;
  }
  *(undefined8 *)(puVar4 + -0x60) = unaff_x28;
  *(long **)(puVar4 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar4 + -0x50) = unaff_x26;
  *(long **)(puVar4 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar4 + -0x40) = unaff_x24;
  *(long **)(puVar4 + -0x38) = unaff_x23;
  *(long **)(puVar4 + -0x30) = unaff_x22;
  *(long **)(puVar4 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar4 + -0x20) = unaff_x20;
  *(long **)(puVar4 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar4 + -0x10) = puVar20;
  *(undefined8 *)(puVar4 + -8) = uVar21;
  if (0x7ffffffffffffff7 < uVar14) {
    func_0x000109ffde50();
    uVar21 = 0;
    func_0x00010a4baa30(puVar4 + -0x80,0);
    if ((char)puVar4[-0x81] < '\0') {
      __ZdlPv(*(undefined8 *)(puVar4 + -0x98));
    }
    plVar9 = plVar8;
    __Unwind_Resume();
    *(undefined8 *)(puVar4 + -0xf0) = unaff_x26;
    *(long **)(puVar4 + -0xe8) = unaff_x25;
    *(undefined8 *)(puVar4 + -0xe0) = unaff_x24;
    *(long **)(puVar4 + -0xd8) = unaff_x23;
    *(long **)(puVar4 + -0xd0) = unaff_x22;
    *(long **)(puVar4 + -200) = unaff_x21;
    *(undefined8 *)(puVar4 + -0xc0) = unaff_x20;
    *(long **)(puVar4 + -0xb8) = plVar8;
    *(undefined1 **)(puVar4 + -0xb0) = puVar4 + -0x10;
    *(code **)(puVar4 + -0xa8) = FUN_10aca1724;
    if (0x7ffffffffffffff7 < uVar14) {
      func_0x000109ffde50();
      func_0x00010a4baa30(puVar4 + -0x110,0);
      if ((char)puVar4[-0x111] < '\0') {
        __ZdlPv(*(undefined8 *)(puVar4 + -0x128));
      }
      plVar8 = plVar9;
      __Unwind_Resume();
      plVar6 = (long *)(puVar4 + -0x180);
      *(undefined8 *)(puVar4 + -0x150) = unaff_x20;
      *(long **)(puVar4 + -0x148) = plVar9;
      *(undefined1 **)(puVar4 + -0x140) = puVar4 + -0xb0;
      *(code **)(puVar4 + -0x138) = FUN_10aca1b2c;
      if (plVar8 == (long *)0x0) {
        plVar6 = (long *)0x0;
      }
      else {
        *(undefined1 **)(puVar4 + -0x180) = puVar4 + -0x178;
        *(undefined8 *)(puVar4 + -0x178) = 0;
        *(undefined8 *)(puVar4 + -0x170) = 0;
        *(undefined8 *)(puVar4 + -0x168) = 0;
        *(undefined8 *)(puVar4 + -0x160) = 0;
        *(undefined8 *)(puVar4 + -0x158) = 0;
        func_0x00010983a984();
        if (((ulong)plVar6 & 1) != 0) {
          FUN_10aca02f8(plVar8,puVar4 + -0x180);
        }
        func_0x000109839668(puVar4 + -0x180);
      }
      return plVar6;
    }
    if (uVar14 < 0x17) {
      puVar4[-0x111] = (char)uVar14;
      puVar7 = puVar4 + -0x128;
      if (uVar14 == 0) goto LAB_10aca17ac;
    }
    else {
      puVar20 = (undefined1 *)0x19;
      if ((uVar14 | 7) != 0x17) {
        puVar20 = (undefined1 *)((uVar14 | 7) + 1);
      }
      puVar7 = puVar20;
      __Znwm();
      *(ulong *)(puVar4 + -0x120) = uVar14;
      *(ulong *)(puVar4 + -0x118) = (ulong)puVar20 | 0x8000000000000000;
      *(undefined1 **)(puVar4 + -0x128) = puVar7;
    }
    _memmove(puVar7,uVar21,uVar14);
LAB_10aca17ac:
    puVar7[uVar14] = 0;
    FUN_10ac9e388(plVar9,puVar4 + -0x128,0);
    plVar8 = plVar9 + 7;
    plVar17 = plVar8;
    func_0x000107c2b05c(plVar8,puVar4 + -0x128);
    plVar19 = (long *)plVar9[8];
    if (plVar19 != (long *)0x0) {
      puVar18 = (undefined *)((long)plVar19 + -1);
      if (((ulong)plVar19 & (ulong)puVar18) == 0) {
        unaff_x25 = (long *)((ulong)puVar18 & (ulong)plVar17);
      }
      else {
        unaff_x25 = plVar17;
        if (plVar19 <= plVar17) {
          uVar14 = 0;
          if (plVar19 != (long *)0x0) {
            uVar14 = (ulong)plVar17 / (ulong)plVar19;
          }
          unaff_x25 = (long *)((long)plVar17 - uVar14 * (long)plVar19);
        }
      }
      plVar12 = *(long **)(*plVar8 + (long)unaff_x25 * 8);
      if (plVar12 != (long *)0x0) {
        for (plVar12 = (long *)*plVar12; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
          plVar13 = (long *)plVar12[1];
          if (plVar13 == plVar17) {
            plVar13 = plVar8;
            func_0x000107c2b068(plVar8,plVar12 + 2,puVar4 + -0x128);
            if (((ulong)plVar13 & 1) != 0) goto LAB_10aca19fc;
          }
          else {
            if (((ulong)plVar19 & (ulong)puVar18) == 0) {
              plVar13 = (long *)((ulong)plVar13 & (ulong)puVar18);
            }
            else if (plVar19 <= plVar13) {
              uVar14 = 0;
              if (plVar19 != (long *)0x0) {
                uVar14 = (ulong)plVar13 / (ulong)plVar19;
              }
              plVar13 = (long *)((long)plVar13 - uVar14 * (long)plVar19);
            }
            if (plVar13 != unaff_x25) break;
          }
        }
      }
    }
    puVar10 = (undefined8 *)0x60;
    __Znwm();
    *(undefined8 **)(puVar4 + -0x110) = puVar10;
    *(long **)(puVar4 + -0x108) = plVar8;
    *(undefined8 *)(puVar4 + -0x100) = 0;
    *puVar10 = 0;
    puVar10[1] = plVar17;
    if ((char)puVar4[-0x111] < '\0') {
      func_0x000107c3192c(puVar10 + 2,*(undefined8 *)(puVar4 + -0x128),
                          *(undefined8 *)(puVar4 + -0x120));
    }
    else {
      uVar21 = *(undefined8 *)(puVar4 + -0x128);
      puVar10[3] = *(undefined8 *)(puVar4 + -0x120);
      puVar10[2] = uVar21;
      puVar10[4] = *(undefined8 *)(puVar4 + -0x118);
    }
    puVar10[5] = &PTR_FUN_110c6c2d0;
    *(undefined1 *)(puVar10 + 6) = 0;
    *(undefined2 *)((long)puVar10 + 0x32) = 0xf;
    puVar10[9] = 0;
    puVar10[8] = 0;
    puVar10[0xb] = 0;
    puVar10[10] = 0;
    FUN_10acc4edc(puVar10 + 5,*plVar6,plVar6[1]);
    puVar4[-0x100] = 1;
    if ((plVar19 == (long *)0x0) ||
       (*(float *)(plVar9 + 0xb) * (float)plVar19 < (float)(plVar9[10] + 1))) {
      uVar14 = 1;
      if ((long *)0x2 < plVar19) {
        uVar14 = (ulong)(((ulong)plVar19 & (ulong)((long)plVar19 + -1)) != 0);
      }
      uVar14 = uVar14 | (long)plVar19 << 1;
      uVar16 = (ulong)((float)(plVar9[10] + 1) / *(float *)(plVar9 + 0xb));
      if (uVar14 <= uVar16) {
        uVar14 = uVar16;
      }
      FUN_10a4ba824(plVar8,uVar14);
      plVar19 = (long *)plVar9[8];
      if (((ulong)plVar19 & (ulong)((long)plVar19 + -1)) == 0) {
        unaff_x25 = (long *)((ulong)((long)plVar19 + -1) & (ulong)plVar17);
      }
      else {
        unaff_x25 = plVar17;
        if (plVar19 <= plVar17) {
          uVar14 = 0;
          if (plVar19 != (long *)0x0) {
            uVar14 = (ulong)plVar17 / (ulong)plVar19;
          }
          unaff_x25 = (long *)((long)plVar17 - uVar14 * (long)plVar19);
        }
      }
    }
    lVar15 = *plVar8;
    plVar6 = *(long **)(lVar15 + (long)unaff_x25 * 8);
    if (plVar6 == (long *)0x0) {
      plVar6 = plVar9 + 9;
      plVar17 = *(long **)(puVar4 + -0x110);
      *plVar17 = *plVar6;
      *plVar6 = (long)plVar17;
      *(long **)(lVar15 + (long)unaff_x25 * 8) = plVar6;
      plVar12 = *(long **)(puVar4 + -0x110);
      if (*plVar12 != 0) {
        plVar6 = *(long **)(*plVar12 + 8);
        if (((ulong)plVar19 & (ulong)((long)plVar19 + -1)) == 0) {
          plVar6 = (long *)((ulong)plVar6 & (ulong)((long)plVar19 + -1));
        }
        else if (plVar19 <= plVar6) {
          uVar14 = 0;
          if (plVar19 != (long *)0x0) {
            uVar14 = (ulong)plVar6 / (ulong)plVar19;
          }
          plVar6 = (long *)((long)plVar6 - uVar14 * (long)plVar19);
        }
        *(long **)(*plVar8 + (long)plVar6 * 8) = plVar12;
        plVar12 = *(long **)(puVar4 + -0x110);
      }
    }
    else {
      plVar12 = *(long **)(puVar4 + -0x110);
      *plVar12 = *plVar6;
      *plVar6 = (long)plVar12;
    }
    plVar9[10] = plVar9[10] + 1;
LAB_10aca19fc:
    plVar8 = plVar9;
    func_0x00010a5499ec(plVar9,1,plVar12 + 5,puVar4 + -0x128);
    if (*(char *)(plVar9[0x11] + 8) == '\x01') {
      FUN_10a54a030(puVar4 + -0x110,plVar9 + 5);
      plVar8 = plVar9 + 0x10;
      FUN_10a549a74(plVar8,puVar4 + -0x110,puVar4 + -0x128);
      plVar6 = *(long **)(puVar4 + -0x108);
      if (plVar6 != (long *)0x0) {
        plVar9 = plVar6 + 1;
        do {
          lVar15 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar15 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          plVar8 = plVar6;
        }
      }
    }
    if ((char)puVar4[-0x111] < '\0') {
      plVar8 = *(long **)(puVar4 + -0x128);
      __ZdlPv(plVar8);
    }
    return plVar8;
  }
  if (uVar14 < 0x17) {
    puVar4[-0x81] = (char)uVar14;
    puVar7 = puVar4 + -0x98;
    if (uVar14 == 0) goto LAB_10aca1348;
  }
  else {
    puVar20 = (undefined1 *)0x19;
    if ((uVar14 | 7) != 0x17) {
      puVar20 = (undefined1 *)((uVar14 | 7) + 1);
    }
    puVar7 = puVar20;
    __Znwm();
    *(ulong *)(puVar4 + -0x90) = uVar14;
    *(ulong *)(puVar4 + -0x88) = (ulong)puVar20 | 0x8000000000000000;
    *(undefined1 **)(puVar4 + -0x98) = puVar7;
  }
  _memmove(puVar7,puVar5,uVar14);
LAB_10aca1348:
  puVar7[uVar14] = 0;
  FUN_10ac9e388(plVar8,puVar4 + -0x98,0);
  plVar9 = plVar8 + 7;
  plVar17 = plVar9;
  func_0x000107c2b05c(plVar9,puVar4 + -0x98);
  plVar19 = (long *)plVar8[8];
  if (plVar19 != (long *)0x0) {
    puVar18 = (undefined *)((long)plVar19 + -1);
    if (((ulong)plVar19 & (ulong)puVar18) == 0) {
      unaff_x27 = (long *)((ulong)puVar18 & (ulong)plVar17);
    }
    else {
      unaff_x27 = plVar17;
      if (plVar19 <= plVar17) {
        uVar14 = 0;
        if (plVar19 != (long *)0x0) {
          uVar14 = (ulong)plVar17 / (ulong)plVar19;
        }
        unaff_x27 = (long *)((long)plVar17 - uVar14 * (long)plVar19);
      }
    }
    plVar12 = *(long **)(*plVar9 + (long)unaff_x27 * 8);
    if (plVar12 != (long *)0x0) {
      for (plVar12 = (long *)*plVar12; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
        plVar13 = (long *)plVar12[1];
        if (plVar13 == plVar17) {
          plVar13 = plVar9;
          func_0x000107c2b068(plVar9,plVar12 + 2,puVar4 + -0x98);
          if (((ulong)plVar13 & 1) != 0) goto LAB_10aca15dc;
        }
        else {
          if (((ulong)plVar19 & (ulong)puVar18) == 0) {
            plVar13 = (long *)((ulong)plVar13 & (ulong)puVar18);
          }
          else if (plVar19 <= plVar13) {
            uVar14 = 0;
            if (plVar19 != (long *)0x0) {
              uVar14 = (ulong)plVar13 / (ulong)plVar19;
            }
            plVar13 = (long *)((long)plVar13 - uVar14 * (long)plVar19);
          }
          if (plVar13 != unaff_x27) break;
        }
      }
    }
  }
  puVar10 = (undefined8 *)0x60;
  __Znwm();
  *(undefined8 **)(puVar4 + -0x80) = puVar10;
  *(long **)(puVar4 + -0x78) = plVar9;
  *(undefined8 *)(puVar4 + -0x70) = 0;
  *puVar10 = 0;
  puVar10[1] = plVar17;
  if ((char)puVar4[-0x81] < '\0') {
    func_0x000107c3192c(puVar10 + 2,*(undefined8 *)(puVar4 + -0x98),*(undefined8 *)(puVar4 + -0x90))
    ;
  }
  else {
    uVar21 = *(undefined8 *)(puVar4 + -0x98);
    puVar10[3] = *(undefined8 *)(puVar4 + -0x90);
    puVar10[2] = uVar21;
    puVar10[4] = *(undefined8 *)(puVar4 + -0x88);
  }
  puVar10[9] = 0;
  puVar10[8] = 0;
  *(undefined1 *)(puVar10 + 6) = 0;
  puVar10[5] = &PTR_FUN_110c6c2d0;
  *(undefined2 *)((long)puVar10 + 0x32) = 0xf;
  puVar10[0xb] = 0;
  puVar10[10] = 0;
  lVar15 = *plVar6;
  lVar1 = plVar6[1];
  puVar5 = (undefined8 *)0x20;
  __Znwm();
  *puVar5 = &PTR_FUN_110c6b8d8;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[1] = 0;
  FUN_10a0ca588(puVar5 + 1,lVar15,lVar1,lVar1 - lVar15 >> 2);
  plVar6 = (long *)puVar10[0xb];
  puVar10[0xb] = puVar5;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  puVar4[-0x70] = 1;
  if ((plVar19 == (long *)0x0) ||
     (*(float *)(plVar8 + 0xb) * (float)plVar19 < (float)(plVar8[10] + 1))) {
    uVar14 = 1;
    if ((long *)0x2 < plVar19) {
      uVar14 = (ulong)(((ulong)plVar19 & (ulong)((long)plVar19 + -1)) != 0);
    }
    uVar14 = uVar14 | (long)plVar19 << 1;
    uVar16 = (ulong)((float)(plVar8[10] + 1) / *(float *)(plVar8 + 0xb));
    if (uVar14 <= uVar16) {
      uVar14 = uVar16;
    }
    FUN_10a4ba824(plVar9,uVar14);
    plVar19 = (long *)plVar8[8];
    if (((ulong)plVar19 & (ulong)((long)plVar19 + -1)) == 0) {
      unaff_x27 = (long *)((ulong)((long)plVar19 + -1) & (ulong)plVar17);
    }
    else {
      unaff_x27 = plVar17;
      if (plVar19 <= plVar17) {
        uVar14 = 0;
        if (plVar19 != (long *)0x0) {
          uVar14 = (ulong)plVar17 / (ulong)plVar19;
        }
        unaff_x27 = (long *)((long)plVar17 - uVar14 * (long)plVar19);
      }
    }
  }
  lVar15 = *plVar9;
  plVar6 = *(long **)(lVar15 + (long)unaff_x27 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = plVar8 + 9;
    plVar17 = *(long **)(puVar4 + -0x80);
    *plVar17 = *plVar6;
    *plVar6 = (long)plVar17;
    *(long **)(lVar15 + (long)unaff_x27 * 8) = plVar6;
    plVar12 = *(long **)(puVar4 + -0x80);
    if (*plVar12 != 0) {
      plVar6 = *(long **)(*plVar12 + 8);
      if (((ulong)plVar19 & (ulong)((long)plVar19 + -1)) == 0) {
        plVar6 = (long *)((ulong)plVar6 & (ulong)((long)plVar19 + -1));
      }
      else if (plVar19 <= plVar6) {
        uVar14 = 0;
        if (plVar19 != (long *)0x0) {
          uVar14 = (ulong)plVar6 / (ulong)plVar19;
        }
        plVar6 = (long *)((long)plVar6 - uVar14 * (long)plVar19);
      }
      *(long **)(*plVar9 + (long)plVar6 * 8) = plVar12;
      plVar12 = *(long **)(puVar4 + -0x80);
    }
  }
  else {
    plVar12 = *(long **)(puVar4 + -0x80);
    *plVar12 = *plVar6;
    *plVar6 = (long)plVar12;
  }
  plVar8[10] = plVar8[10] + 1;
LAB_10aca15dc:
  plVar6 = plVar8;
  func_0x00010a5499ec(plVar8,1,plVar12 + 5,puVar4 + -0x98);
  if (*(char *)(plVar8[0x11] + 8) == '\x01') {
    FUN_10a54a030(puVar4 + -0x80,plVar8 + 5);
    plVar6 = plVar8 + 0x10;
    FUN_10a549a74(plVar6,puVar4 + -0x80,puVar4 + -0x98);
    plVar8 = *(long **)(puVar4 + -0x78);
    if (plVar8 != (long *)0x0) {
      plVar9 = plVar8 + 1;
      do {
        lVar15 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar15 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        plVar6 = plVar8;
      }
    }
  }
  if ((char)puVar4[-0x81] < '\0') {
    plVar6 = *(long **)(puVar4 + -0x98);
    __ZdlPv(plVar6);
  }
  return plVar6;
}



/* Entry: 10acca52c; end: 10acca6cf;  */

/* WARNING: Removing unreachable block (ram,0x00010acca608) */

void FUN_10acca52c(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long in_stack_ffffffffffffffa0;
  
  plVar7 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  plVar8 = param_2;
  FUN_10acc8580(param_2,param_3);
  FUN_10ac481a4(param_5);
  func_0x000109898570(&lStack_70,param_2,param_4);
  FUN_10a1f7d54(&puStack_80,param_2,param_4 + 0x10);
  func_0x00010742a308(&stack0xffffffffffffffa8,puStack_80[1]);
  _memcpy(0,*puStack_80,puStack_80[1] << 2);
  func_0x00010acca4ec(plVar8,&lStack_70,&stack0xffffffffffffffa8);
  if (plStack_78 != (long *)0x0) {
    plVar8 = plStack_78 + 1;
    do {
      lVar11 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
    }
  }
  if (in_stack_ffffffffffffffa0 < 0) {
    __ZdlPv(lStack_70);
  }
  *param_1 = 0;
  plVar8 = plVar7 + 0x4b;
  lVar11 = plVar7[0x59];
  uVar9 = lVar11 - 1;
  plVar7[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar8[lVar11 + 2];
    if (plVar7[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar9) {
      return;
    }
  }
  puVar2 = (undefined8 *)*plVar8;
  puVar13 = (undefined8 *)plVar7[0x4c];
  lVar11 = (long)puVar13 - (long)puVar2;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar9) {
    uVar16 = uVar9 - uVar15;
    lVar14 = plVar7[0x4d];
    if ((ulong)(lVar14 - (long)puVar13 >> 4) < uVar16) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar14 - (long)puVar2 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - (long)puVar2)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_68 = plVar8;
        if (uVar10 >> 0x3c == 0) {
          lVar6 = uVar10 << 4;
          __Znwm();
          lVar1 = lVar6 + lVar11;
          _bzero(lVar1,uVar16 * 0x10);
          lVar12 = lVar1 + uVar15 * -0x10;
          _memcpy(lVar12,puVar2,lVar11);
          *plVar8 = lVar12;
          plVar7[0x4c] = lVar1 + uVar16 * 0x10;
          plVar7[0x4d] = lVar6 + uVar10 * 0x10;
          puStack_88 = puVar2;
          puStack_80 = puVar2;
          plStack_78 = puVar2;
          lStack_70 = lVar14;
          func_0x00010988c1b8(&puStack_88);
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
    _bzero(puVar13,uVar16 * 0x10);
    plVar7[0x4c] = (long)(puVar13 + uVar16 * 2);
  }
  else if (uVar9 < uVar15) {
    while (puVar13 != puVar2 + uVar9 * 2) {
      puVar13 = puVar13 + -2;
      func_0x00010988c204(puVar13);
    }
    plVar7[0x4c] = (long)(puVar2 + uVar9 * 2);
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar9;
  return;
}



/* Entry: 10acca6d0; end: 10accafef;  */

/* WARNING: Removing unreachable block (ram,0x00010accaa9c) */
/* WARNING: Removing unreachable block (ram,0x00010accacc0) */

void FUN_10acca6d0(undefined4 *param_1,long *param_2,long *param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  char cVar3;
  bool bVar4;
  undefined8 ****ppppuVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 ****ppppuVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  long *plVar25;
  ulong uVar26;
  undefined8 ***pppuStack_168;
  long *plStack_160;
  byte bStack_151;
  long *plStack_150;
  long *plStack_148;
  undefined8 ***pppuStack_140;
  long *plStack_138;
  int aiStack_130 [2];
  undefined8 *puStack_128;
  undefined8 ***pppuStack_120;
  ulong uStack_118;
  byte bStack_109;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  long alStack_c8 [3];
  long *plStack_b0;
  long *plStack_a8;
  long lStack_a0;
  undefined8 ***pppuStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar8 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  plVar9 = param_2;
  FUN_10acc8580(param_2,param_3);
  FUN_10accaff0(param_5);
  func_0x000109898570(&pppuStack_168,param_2,param_4);
  func_0x0001098849a4(aiStack_130,param_2,param_4 + 0x10);
  plStack_148 = (long *)0x0;
  plStack_150 = (long *)0x0;
  plStack_138 = (long *)0x0;
  pppuStack_140 = (undefined8 ****)0x0;
  if (aiStack_130[0] == 7) {
    plVar11 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,puStack_128);
    plVar10 = param_2;
    plStack_b0 = plVar11;
    (**(code **)(*param_2 + 0x58))(param_2);
    func_0x000109899ccc();
    plVar11 = param_2;
    (**(code **)(*param_2 + 0x2e8))(param_2,&plStack_b0,plVar10);
    if ((int)plVar11 != 0) {
      plVar10 = param_2;
      plVar14 = plStack_b0;
      FUN_10acc1d78();
      plStack_150 = plVar10;
      plStack_148 = plVar14;
      FUN_10a12c3a8(&pppuStack_90,alStack_c8,aiStack_130);
      plVar14 = plStack_88;
      pppuStack_140 = pppuStack_90;
      plVar10 = plStack_138;
      pppuStack_90 = (undefined8 ****)0x0;
      plStack_88 = (long *)0x0;
      plStack_138 = plVar14;
      if (plVar10 != (long *)0x0) {
        plVar14 = plVar10 + 1;
        do {
          lVar18 = *plVar14;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar4) {
            *plVar14 = lVar18 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      plVar10 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        plVar14 = plStack_88 + 1;
        do {
          lVar18 = *plVar14;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar4) {
            *plVar14 = lVar18 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plStack_88 + 0x10))(plStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
    }
    if (plStack_b0 != (long *)0x0) {
      (**(code **)*plStack_b0)();
    }
    if (((ulong)plVar11 & 1) != 0) {
      if ((3 < aiStack_130[0]) && (puStack_128 != (undefined8 *)0x0)) {
        (**(code **)*puStack_128)();
      }
      plVar11 = (long *)0x38;
      __Znwm();
      plVar11[4] = (long)plStack_148;
      plVar11[3] = (long)plStack_150;
      plVar10 = plVar11 + 1;
      *plVar10 = 0;
      plVar11[2] = 0;
      *plVar11 = (long)&PTR_FUN_110c6b978;
      plVar11[6] = (long)plStack_138;
      plVar11[5] = (long)pppuStack_140;
      plStack_b0 = (long *)0x0;
      plStack_a8 = (long *)0x0;
      lStack_a0 = 0;
      func_0x000108a851e4(&plStack_b0,plVar11[4]);
      _memcpy(plStack_b0,plVar11[3],plVar11[4] << 3);
      if ((char)plVar9[0xc] == '\x01') {
        FUN_10a00946c(&UNK_10f6a1d58);
        goto LAB_10accae14;
      }
      plVar14 = plStack_160;
      ppppuVar5 = (undefined8 ****)pppuStack_168;
      if (-1 < (char)bStack_151) {
        plVar14 = (long *)(ulong)bStack_151;
        ppppuVar5 = &pppuStack_168;
      }
      if ((long *)0x7ffffffffffffff7 < plVar14) {
        func_0x000109ffde50();
        goto LAB_10accae14;
      }
      if (plVar14 < (long *)0x17) {
        uStack_80 = (long *)CONCAT17((char)plVar14,(undefined7)uStack_80);
        ppppuVar12 = &pppuStack_90;
        if (plVar14 != (long *)0x0) goto LAB_10acca990;
      }
      else {
        ppppuVar2 = (undefined8 ****)0x19;
        if (((ulong)plVar14 | 7) != 0x17) {
          ppppuVar2 = (undefined8 ****)(((ulong)plVar14 | 7) + 1);
        }
        ppppuVar12 = ppppuVar2;
        __Znwm();
        uStack_80 = (long *)((ulong)ppppuVar2 | 0x8000000000000000);
        pppuStack_90 = ppppuVar12;
        plStack_88 = plVar14;
LAB_10acca990:
        _memmove(ppppuVar12,ppppuVar5,plVar14);
      }
      *(undefined1 *)((long)ppppuVar12 + (long)plVar14) = 0;
      FUN_10ac9e388(plVar9,&pppuStack_90,0);
      plVar14 = plVar9 + 7;
      plVar20 = plVar14;
      func_0x000107c2b05c(plVar14,&pppuStack_90);
      plVar21 = (long *)plVar9[8];
      if (plVar21 != (long *)0x0) {
        uVar22 = (long)plVar21 - 1;
        if (((ulong)plVar21 & uVar22) == 0) {
          param_3 = (long *)(uVar22 & (ulong)plVar20);
        }
        else {
          param_3 = plVar20;
          if (plVar21 <= plVar20) {
            uVar19 = 0;
            if (plVar21 != (long *)0x0) {
              uVar19 = (ulong)plVar20 / (ulong)plVar21;
            }
            param_3 = (long *)((long)plVar20 - uVar19 * (long)plVar21);
          }
        }
        puVar15 = *(undefined8 **)(*plVar14 + (long)param_3 * 8);
        if (puVar15 != (undefined8 *)0x0) {
          for (plVar25 = (long *)*puVar15; plVar25 != (long *)0x0; plVar25 = (long *)*plVar25) {
            plVar16 = (long *)plVar25[1];
            if (plVar16 == plVar20) {
              plVar16 = plVar14;
              func_0x000107c2b068(plVar14,plVar25 + 2,&pppuStack_90);
              if (((ulong)plVar16 & 1) != 0) goto LAB_10accac40;
            }
            else {
              if (((ulong)plVar21 & uVar22) == 0) {
                plVar16 = (long *)((ulong)plVar16 & uVar22);
              }
              else if (plVar21 <= plVar16) {
                uVar19 = 0;
                if (plVar21 != (long *)0x0) {
                  uVar19 = (ulong)plVar16 / (ulong)plVar21;
                }
                plVar16 = (long *)((long)plVar16 - uVar19 * (long)plVar21);
              }
              if (plVar16 != param_3) break;
            }
          }
        }
      }
      plVar13 = (long *)0x60;
      __Znwm();
      plVar16 = plStack_a8;
      plVar25 = plStack_b0;
      pppuStack_140 = (undefined8 ***)0x0;
      *plVar13 = 0;
      plVar13[1] = (long)plVar20;
      plVar13[3] = (long)plStack_88;
      plVar13[2] = (long)pppuStack_90;
      plVar13[4] = (long)uStack_80;
      plVar13[9] = 0;
      plVar13[8] = 0;
      *(undefined1 *)(plVar13 + 6) = 0;
      plVar13[5] = (long)&PTR_FUN_110c6c2d0;
      *(undefined2 *)((long)plVar13 + 0x32) = 0xf;
      plVar13[0xb] = 0;
      plVar13[10] = 0;
      puVar15 = (undefined8 *)0x20;
      plStack_150 = plVar13;
      plStack_148 = plVar14;
      __Znwm();
      *puVar15 = &PTR_FUN_110c6b928;
      puVar15[2] = 0;
      puVar15[3] = 0;
      puVar15[1] = 0;
      FUN_10a108d94(puVar15 + 1,plVar25,plVar16,(long)plVar16 - (long)plVar25 >> 3);
      plVar25 = (long *)plVar13[0xb];
      plVar13[0xb] = (long)puVar15;
      if (plVar25 != (long *)0x0) {
        (**(code **)(*plVar25 + 8))();
      }
      pppuStack_140 = (undefined8 ***)CONCAT71(pppuStack_140._1_7_,1);
      if ((plVar21 == (long *)0x0) ||
         (*(float *)(plVar9 + 0xb) * (float)plVar21 < (float)(plVar9[10] + 1))) {
        uVar22 = 1;
        if ((long *)0x2 < plVar21) {
          uVar22 = (ulong)(((ulong)plVar21 & (long)plVar21 - 1U) != 0);
        }
        uVar22 = uVar22 | (long)plVar21 << 1;
        uVar19 = (ulong)((float)(plVar9[10] + 1) / *(float *)(plVar9 + 0xb));
        if (uVar22 <= uVar19) {
          uVar22 = uVar19;
        }
        FUN_10a4ba824(plVar14,uVar22);
        plVar21 = (long *)plVar9[8];
        if (((ulong)plVar21 & (long)plVar21 - 1U) == 0) {
          param_3 = (long *)((long)plVar21 - 1U & (ulong)plVar20);
        }
        else {
          param_3 = plVar20;
          if (plVar21 <= plVar20) {
            uVar22 = 0;
            if (plVar21 != (long *)0x0) {
              uVar22 = (ulong)plVar20 / (ulong)plVar21;
            }
            param_3 = (long *)((long)plVar20 - uVar22 * (long)plVar21);
          }
        }
      }
      lVar18 = *plVar14;
      plVar20 = *(long **)(lVar18 + (long)param_3 * 8);
      if (plVar20 == (long *)0x0) {
        plVar20 = plVar9 + 9;
        *plStack_150 = *plVar20;
        *plVar20 = (long)plStack_150;
        *(long **)(lVar18 + (long)param_3 * 8) = plVar20;
        if (*plStack_150 != 0) {
          plVar20 = *(long **)(*plStack_150 + 8);
          if (((ulong)plVar21 & (long)plVar21 - 1U) == 0) {
            plVar20 = (long *)((ulong)plVar20 & (long)plVar21 - 1U);
          }
          else if (plVar21 <= plVar20) {
            uVar22 = 0;
            if (plVar21 != (long *)0x0) {
              uVar22 = (ulong)plVar20 / (ulong)plVar21;
            }
            plVar20 = (long *)((long)plVar20 - uVar22 * (long)plVar21);
          }
          *(long **)(*plVar14 + (long)plVar20 * 8) = plStack_150;
        }
      }
      else {
        *plStack_150 = *plVar20;
        *plVar20 = (long)plStack_150;
      }
      plVar9[10] = plVar9[10] + 1;
      plVar25 = plStack_150;
LAB_10accac40:
      func_0x00010a5499ec(plVar9,1,plVar25 + 5,&pppuStack_90);
      if (*(char *)(plVar9[0x11] + 8) == '\x01') {
        FUN_10a54a030(&plStack_150,plVar9 + 5);
        FUN_10a549a74(plVar9 + 0x10,&plStack_150,&pppuStack_90);
        plVar9 = plStack_148;
        if (plStack_148 != (long *)0x0) {
          plVar14 = plStack_148 + 1;
          do {
            lVar18 = *plVar14;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar4) {
              *plVar14 = lVar18 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar18 == 0) {
            (**(code **)(*plStack_148 + 0x10))(plStack_148);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
      }
      if (plStack_b0 != (long *)0x0) {
        plStack_a8 = plStack_b0;
        __ZdlPv();
      }
      do {
        lVar18 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar18 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
      if ((char)bStack_151 < '\0') {
        __ZdlPv(pppuStack_168);
      }
      *param_1 = 0;
      plVar9 = plVar8 + 0x4b;
      lVar18 = plVar8[0x59];
      uVar22 = lVar18 - 1;
      plVar8[0x59] = uVar22;
      if (uVar22 < 8) {
        uVar22 = plVar9[lVar18 + 2];
        if (plVar8[0x5a] == uVar22) {
          return;
        }
      }
      else {
        uVar22 = *(ulong *)(plVar8[0x57] + -8);
        plVar8[0x57] = plVar8[0x57] + -8;
        if (plVar8[0x5a] == uVar22) {
          return;
        }
      }
      plVar11 = (long *)*plVar9;
      plVar10 = (long *)plVar8[0x4c];
      lVar18 = (long)plVar10 - (long)plVar11;
      uVar19 = lVar18 >> 4;
      if (uVar19 < uVar22) {
        uVar26 = uVar22 - uVar19;
        lVar24 = plVar8[0x4d];
        if ((ulong)(lVar24 - (long)plVar10 >> 4) < uVar26) {
          if (uVar22 >> 0x3c == 0) {
            uVar17 = lVar24 - (long)plVar11 >> 3;
            if (uVar17 <= uVar22) {
              uVar17 = uVar22;
            }
            if (0x7fffffffffffffef < (ulong)(lVar24 - (long)plVar11)) {
              uVar17 = 0xfffffffffffffff;
            }
            plStack_68 = plVar9;
            if (uVar17 >> 0x3c == 0) {
              lVar7 = uVar17 << 4;
              __Znwm();
              lVar1 = lVar7 + lVar18;
              _bzero(lVar1,uVar26 * 0x10);
              lVar23 = lVar1 + uVar19 * -0x10;
              _memcpy(lVar23,plVar11,lVar18);
              *plVar9 = lVar23;
              plVar8[0x4c] = lVar1 + uVar26 * 0x10;
              plVar8[0x4d] = lVar7 + uVar17 * 0x10;
              plStack_88 = plVar11;
              uStack_80 = plVar11;
              plStack_78 = plVar11;
              lStack_70 = lVar24;
              func_0x00010988c1b8(&plStack_88);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar6)();
        }
        _bzero(plVar10,uVar26 * 0x10);
        plVar8[0x4c] = (long)(plVar10 + uVar26 * 2);
      }
      else if (uVar22 < uVar19) {
        while (plVar10 != plVar11 + uVar22 * 2) {
          plVar10 = plVar10 + -2;
          func_0x00010988c204(plVar10);
        }
        plVar8[0x4c] = (long)(plVar11 + uVar22 * 2);
      }
code_r0x00010988c138:
      plVar8[0x5a] = uVar22;
      return;
    }
  }
  puStack_108 = &DAT_10f5825b2;
  uStack_100 = 0xc;
  func_0x0001098998d4(auStack_f8,&puStack_108);
  FUN_109feb280(auStack_e0,&UNK_10f493d5b,auStack_f8);
  FUN_10a012db0(alStack_c8,auStack_e0,&UNK_10f582552);
  func_0x000109899970(&pppuStack_120,param_2,aiStack_130);
  if (-1 < (char)bStack_109) {
    uStack_118 = (ulong)bStack_109;
    pppuStack_120 = &pppuStack_120;
  }
  plVar8 = alStack_c8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (plVar8,pppuStack_120,uStack_118);
  plStack_a8 = (long *)plVar8[1];
  plStack_b0 = (long *)*plVar8;
  lStack_a0 = plVar8[2];
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = 0;
  FUN_10a012db0(&pppuStack_90,&plStack_b0,&DAT_10f638984);
  func_0x00010989842c(&pppuStack_90);
LAB_10accae14:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10accae18);
  (*pcVar6)();
}



/* Entry: 10accaff0; end: 10accb013;  */

void FUN_10accaff0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  undefined1 **ppuVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  undefined4 *extraout_x8;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined1 **ppuVar21;
  long *plVar22;
  long lVar23;
  long *plVar24;
  long *unaff_x25;
  ulong uVar25;
  undefined *puVar26;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long *plStack_f8;
  undefined8 in_stack_ffffffffffffff18;
  long in_stack_ffffffffffffff28;
  undefined1 *puStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar7 = (long *)0x2;
  puVar10 = (undefined8 *)0x0;
  FUN_10a052ee0();
  ppuVar8 = &puStack_90;
  ppuVar21 = &puStack_90;
  if ((char)plVar7[0xc] == '\x01') {
    plVar7 = (long *)&UNK_10f6a1d58;
    FUN_10a00946c();
  }
  else {
    uVar13 = puVar10[1];
    puVar4 = (undefined8 *)*puVar10;
    if (-1 < (char)*(byte *)((long)puVar10 + 0x17)) {
      uVar13 = (ulong)*(byte *)((long)puVar10 + 0x17);
      puVar4 = puVar10;
    }
    if (uVar13 < 0x7ffffffffffffff8) {
      if (uVar13 < 0x17) {
        uStack_80 = CONCAT17((char)uVar13,(undefined7)uStack_80);
        if (uVar13 == 0) goto LAB_10accb0b8;
      }
      else {
        puVar1 = (undefined1 *)0x19;
        if ((uVar13 | 7) != 0x17) {
          puVar1 = (undefined1 *)((uVar13 | 7) + 1);
        }
        ppuVar8 = (undefined1 **)puVar1;
        __Znwm();
        uStack_80 = (ulong)puVar1 | 0x8000000000000000;
        puStack_90 = (undefined1 *)ppuVar8;
        uStack_88 = uVar13;
      }
      _memmove(ppuVar8,puVar4,uVar13);
      ppuVar21 = ppuVar8;
LAB_10accb0b8:
      *(undefined1 *)((long)ppuVar21 + uVar13) = 0;
      FUN_10ac9e388(plVar7,&puStack_90,0);
      plVar9 = plVar7 + 7;
      plVar17 = plVar9;
      func_0x000107c2b05c(plVar9,&puStack_90);
      plVar24 = (long *)plVar7[8];
      if (plVar24 != (long *)0x0) {
        puVar26 = (undefined *)((long)plVar24 + -1);
        if (((ulong)plVar24 & (ulong)puVar26) == 0) {
          unaff_x25 = (long *)((ulong)puVar26 & (ulong)plVar17);
        }
        else {
          unaff_x25 = plVar17;
          if (plVar24 <= plVar17) {
            uVar13 = 0;
            if (plVar24 != (long *)0x0) {
              uVar13 = (ulong)plVar17 / (ulong)plVar24;
            }
            unaff_x25 = (long *)((long)plVar17 - uVar13 * (long)plVar24);
          }
        }
        puVar10 = *(undefined8 **)(*plVar9 + (long)unaff_x25 * 8);
        if (puVar10 != (undefined8 *)0x0) {
          for (plVar22 = (long *)*puVar10; plVar22 != (long *)0x0; plVar22 = (long *)*plVar22) {
            plVar12 = (long *)plVar22[1];
            if (plVar12 == plVar17) {
              plVar12 = plVar9;
              func_0x000107c2b068(plVar9,plVar22 + 2,&puStack_90);
              if (((ulong)plVar12 & 1) != 0) goto LAB_10accb2fc;
            }
            else {
              if (((ulong)plVar24 & (ulong)puVar26) == 0) {
                plVar12 = (long *)((ulong)plVar12 & (ulong)puVar26);
              }
              else if (plVar24 <= plVar12) {
                uVar13 = 0;
                if (plVar24 != (long *)0x0) {
                  uVar13 = (ulong)plVar12 / (ulong)plVar24;
                }
                plVar12 = (long *)((long)plVar12 - uVar13 * (long)plVar24);
              }
              if (plVar12 != unaff_x25) break;
            }
          }
        }
      }
      plVar22 = (long *)0x60;
      __Znwm();
      uStack_68 = 0;
      *plVar22 = 0;
      plVar22[1] = (long)plVar17;
      plStack_78 = plVar22;
      plStack_70 = plVar9;
      if ((long)uStack_80 < 0) {
        func_0x000107c3192c(plVar22 + 2,puStack_90,uStack_88);
      }
      else {
        plVar22[3] = uStack_88;
        plVar22[2] = (long)puStack_90;
        plVar22[4] = uStack_80;
      }
      *(undefined1 *)(plVar22 + 6) = 0;
      plVar22[5] = (long)&PTR_FUN_110c6c2d0;
      *(undefined2 *)((long)plVar22 + 0x32) = 2;
      plVar22[9] = 0;
      plVar22[8] = 0;
      plVar22[0xb] = 0;
      plVar22[10] = 0;
      *(undefined4 *)(plVar22 + 7) = *param_1;
      uStack_68 = CONCAT71(uStack_68._1_7_,1);
      if ((plVar24 == (long *)0x0) ||
         (*(float *)(plVar7 + 0xb) * (float)plVar24 < (float)(plVar7[10] + 1))) {
        uVar13 = 1;
        if ((long *)0x2 < plVar24) {
          uVar13 = (ulong)(((ulong)plVar24 & (ulong)((long)plVar24 + -1)) != 0);
        }
        uVar13 = uVar13 | (long)plVar24 << 1;
        uVar16 = (ulong)((float)(plVar7[10] + 1) / *(float *)(plVar7 + 0xb));
        if (uVar13 <= uVar16) {
          uVar13 = uVar16;
        }
        FUN_10a4ba824(plVar9,uVar13);
        plVar24 = (long *)plVar7[8];
        if (((ulong)plVar24 & (ulong)((long)plVar24 + -1)) == 0) {
          unaff_x25 = (long *)((ulong)((long)plVar24 + -1) & (ulong)plVar17);
        }
        else {
          unaff_x25 = plVar17;
          if (plVar24 <= plVar17) {
            uVar13 = 0;
            if (plVar24 != (long *)0x0) {
              uVar13 = (ulong)plVar17 / (ulong)plVar24;
            }
            unaff_x25 = (long *)((long)plVar17 - uVar13 * (long)plVar24);
          }
        }
      }
      lVar14 = *plVar9;
      plVar17 = *(long **)(lVar14 + (long)unaff_x25 * 8);
      if (plVar17 == (long *)0x0) {
        plVar17 = plVar7 + 9;
        *plStack_78 = *plVar17;
        *plVar17 = (long)plStack_78;
        *(long **)(lVar14 + (long)unaff_x25 * 8) = plVar17;
        if (*plStack_78 != 0) {
          plVar17 = *(long **)(*plStack_78 + 8);
          if (((ulong)plVar24 & (ulong)((long)plVar24 + -1)) == 0) {
            plVar17 = (long *)((ulong)plVar17 & (ulong)((long)plVar24 + -1));
          }
          else if (plVar24 <= plVar17) {
            uVar13 = 0;
            if (plVar24 != (long *)0x0) {
              uVar13 = (ulong)plVar17 / (ulong)plVar24;
            }
            plVar17 = (long *)((long)plVar17 - uVar13 * (long)plVar24);
          }
          *(long **)(*plVar9 + (long)plVar17 * 8) = plStack_78;
        }
      }
      else {
        *plStack_78 = *plVar17;
        *plVar17 = (long)plStack_78;
      }
      plVar7[10] = plVar7[10] + 1;
      plVar22 = plStack_78;
LAB_10accb2fc:
      func_0x00010a5499ec(plVar7,1,plVar22 + 5,&puStack_90);
      if (*(char *)(plVar7[0x11] + 8) == '\x01') {
        FUN_10a54a030(&plStack_78,plVar7 + 5);
        FUN_10a549a74(plVar7 + 0x10,&plStack_78,&puStack_90);
        plVar7 = plStack_70;
        if (plStack_70 != (long *)0x0) {
          plVar9 = plStack_70 + 1;
          do {
            lVar14 = *plVar9;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = lVar14 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plStack_70 + 0x10))(plStack_70);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
          }
        }
      }
      if ((long)uStack_80 < 0) {
        __ZdlPv(puStack_90);
      }
      return;
    }
  }
  func_0x000109ffde50();
  uVar11 = 0;
  func_0x00010a4baa30(&plStack_78,0);
  if (uStack_80._7_1_ < '\0') {
    __ZdlPv(puStack_90);
  }
  __Unwind_Resume();
  plVar9 = plVar7;
  (**(code **)(*plVar7 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  plVar17 = plVar7;
  FUN_10acc8580(plVar7,uVar11);
  FUN_10accb50c(param_4);
  func_0x000109898570(&stack0xffffffffffffff18,plVar7,param_1);
  func_0x000109898518(plVar7,param_1 + 4);
  FUN_10accb014(plVar17,&stack0xffffffffffffff18,&stack0xffffffffffffff14);
  if (in_stack_ffffffffffffff28 < 0) {
    __ZdlPv(in_stack_ffffffffffffff18);
  }
  *extraout_x8 = 0;
  plVar7 = plVar9 + 0x4b;
  lVar14 = plVar9[0x59];
  uVar13 = lVar14 - 1;
  plVar9[0x59] = uVar13;
  if (uVar13 < 8) {
    uVar13 = plVar7[lVar14 + 2];
    if (plVar9[0x5a] == uVar13) {
      return;
    }
  }
  else {
    uVar13 = *(ulong *)(plVar9[0x57] + -8);
    plVar9[0x57] = plVar9[0x57] + -8;
    if (plVar9[0x5a] == uVar13) {
      return;
    }
  }
  lVar14 = *plVar7;
  lVar20 = plVar9[0x4c];
  lVar18 = lVar20 - lVar14;
  uVar16 = lVar18 >> 4;
  if (uVar16 < uVar13) {
    uVar25 = uVar13 - uVar16;
    lVar23 = plVar9[0x4d];
    if ((ulong)(lVar23 - lVar20 >> 4) < uVar25) {
      if (uVar13 >> 0x3c == 0) {
        uVar15 = lVar23 - lVar14 >> 3;
        if (uVar15 <= uVar13) {
          uVar15 = uVar13;
        }
        if (0x7fffffffffffffef < (ulong)(lVar23 - lVar14)) {
          uVar15 = 0xfffffffffffffff;
        }
        plStack_f8 = plVar7;
        if (uVar15 >> 0x3c == 0) {
          lVar6 = uVar15 << 4;
          __Znwm();
          lVar20 = lVar6 + lVar18;
          _bzero(lVar20,uVar25 * 0x10);
          lVar19 = lVar20 + uVar16 * -0x10;
          _memcpy(lVar19,lVar14,lVar18);
          *plVar7 = lVar19;
          plVar9[0x4c] = lVar20 + uVar25 * 0x10;
          plVar9[0x4d] = lVar6 + uVar15 * 0x10;
          lStack_118 = lVar14;
          lStack_110 = lVar14;
          lStack_108 = lVar14;
          lStack_100 = lVar23;
          func_0x00010988c1b8(&lStack_118);
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
    _bzero(lVar20,uVar25 * 0x10);
    plVar9[0x4c] = lVar20 + uVar25 * 0x10;
  }
  else if (uVar13 < uVar16) {
    lVar14 = lVar14 + uVar13 * 0x10;
    while (lVar20 != lVar14) {
      lVar20 = lVar20 + -0x10;
      func_0x00010988c204(lVar20);
    }
    plVar9[0x4c] = lVar14;
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar13;
  return;
}



/* Entry: 10accb014; end: 10accb3fb;  */

void FUN_10accb014(long *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined1 **ppuVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  undefined4 *extraout_x8;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined1 **ppuVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  long *unaff_x25;
  ulong uVar23;
  undefined *puVar24;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long *plStack_e8;
  undefined8 in_stack_ffffffffffffff28;
  long in_stack_ffffffffffffff38;
  undefined1 *puStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  ppuVar6 = &puStack_80;
  ppuVar19 = &puStack_80;
  if ((char)param_1[0xc] == '\x01') {
    param_1 = (long *)&UNK_10f6a1d58;
    FUN_10a00946c();
  }
  else {
    uVar11 = param_2[1];
    puVar9 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar11 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar9 = param_2;
    }
    if (uVar11 < 0x7ffffffffffffff8) {
      if (uVar11 < 0x17) {
        uStack_70 = CONCAT17((char)uVar11,(undefined7)uStack_70);
        if (uVar11 == 0) goto LAB_10accb0b8;
      }
      else {
        puVar1 = (undefined1 *)0x19;
        if ((uVar11 | 7) != 0x17) {
          puVar1 = (undefined1 *)((uVar11 | 7) + 1);
        }
        ppuVar6 = (undefined1 **)puVar1;
        __Znwm();
        uStack_70 = (ulong)puVar1 | 0x8000000000000000;
        puStack_80 = (undefined1 *)ppuVar6;
        uStack_78 = uVar11;
      }
      _memmove(ppuVar6,puVar9,uVar11);
      ppuVar19 = ppuVar6;
LAB_10accb0b8:
      *(undefined1 *)((long)ppuVar19 + uVar11) = 0;
      FUN_10ac9e388(param_1,&puStack_80,0);
      plVar7 = param_1 + 7;
      plVar15 = plVar7;
      func_0x000107c2b05c(plVar7,&puStack_80);
      plVar22 = (long *)param_1[8];
      if (plVar22 != (long *)0x0) {
        puVar24 = (undefined *)((long)plVar22 + -1);
        if (((ulong)plVar22 & (ulong)puVar24) == 0) {
          unaff_x25 = (long *)((ulong)puVar24 & (ulong)plVar15);
        }
        else {
          unaff_x25 = plVar15;
          if (plVar22 <= plVar15) {
            uVar11 = 0;
            if (plVar22 != (long *)0x0) {
              uVar11 = (ulong)plVar15 / (ulong)plVar22;
            }
            unaff_x25 = (long *)((long)plVar15 - uVar11 * (long)plVar22);
          }
        }
        puVar9 = *(undefined8 **)(*plVar7 + (long)unaff_x25 * 8);
        if (puVar9 != (undefined8 *)0x0) {
          for (plVar20 = (long *)*puVar9; plVar20 != (long *)0x0; plVar20 = (long *)*plVar20) {
            plVar10 = (long *)plVar20[1];
            if (plVar10 == plVar15) {
              plVar10 = plVar7;
              func_0x000107c2b068(plVar7,plVar20 + 2,&puStack_80);
              if (((ulong)plVar10 & 1) != 0) goto LAB_10accb2fc;
            }
            else {
              if (((ulong)plVar22 & (ulong)puVar24) == 0) {
                plVar10 = (long *)((ulong)plVar10 & (ulong)puVar24);
              }
              else if (plVar22 <= plVar10) {
                uVar11 = 0;
                if (plVar22 != (long *)0x0) {
                  uVar11 = (ulong)plVar10 / (ulong)plVar22;
                }
                plVar10 = (long *)((long)plVar10 - uVar11 * (long)plVar22);
              }
              if (plVar10 != unaff_x25) break;
            }
          }
        }
      }
      plVar20 = (long *)0x60;
      __Znwm();
      uStack_58 = 0;
      *plVar20 = 0;
      plVar20[1] = (long)plVar15;
      plStack_68 = plVar20;
      plStack_60 = plVar7;
      if ((long)uStack_70 < 0) {
        func_0x000107c3192c(plVar20 + 2,puStack_80,uStack_78);
      }
      else {
        plVar20[3] = uStack_78;
        plVar20[2] = (long)puStack_80;
        plVar20[4] = uStack_70;
      }
      *(undefined1 *)(plVar20 + 6) = 0;
      plVar20[5] = (long)&PTR_FUN_110c6c2d0;
      *(undefined2 *)((long)plVar20 + 0x32) = 2;
      plVar20[9] = 0;
      plVar20[8] = 0;
      plVar20[0xb] = 0;
      plVar20[10] = 0;
      *(undefined4 *)(plVar20 + 7) = *param_3;
      uStack_58 = CONCAT71(uStack_58._1_7_,1);
      if ((plVar22 == (long *)0x0) ||
         (*(float *)(param_1 + 0xb) * (float)plVar22 < (float)(param_1[10] + 1))) {
        uVar11 = 1;
        if ((long *)0x2 < plVar22) {
          uVar11 = (ulong)(((ulong)plVar22 & (ulong)((long)plVar22 + -1)) != 0);
        }
        uVar11 = uVar11 | (long)plVar22 << 1;
        uVar14 = (ulong)((float)(param_1[10] + 1) / *(float *)(param_1 + 0xb));
        if (uVar11 <= uVar14) {
          uVar11 = uVar14;
        }
        FUN_10a4ba824(plVar7,uVar11);
        plVar22 = (long *)param_1[8];
        if (((ulong)plVar22 & (ulong)((long)plVar22 + -1)) == 0) {
          unaff_x25 = (long *)((ulong)((long)plVar22 + -1) & (ulong)plVar15);
        }
        else {
          unaff_x25 = plVar15;
          if (plVar22 <= plVar15) {
            uVar11 = 0;
            if (plVar22 != (long *)0x0) {
              uVar11 = (ulong)plVar15 / (ulong)plVar22;
            }
            unaff_x25 = (long *)((long)plVar15 - uVar11 * (long)plVar22);
          }
        }
      }
      lVar12 = *plVar7;
      plVar15 = *(long **)(lVar12 + (long)unaff_x25 * 8);
      if (plVar15 == (long *)0x0) {
        plVar15 = param_1 + 9;
        *plStack_68 = *plVar15;
        *plVar15 = (long)plStack_68;
        *(long **)(lVar12 + (long)unaff_x25 * 8) = plVar15;
        if (*plStack_68 != 0) {
          plVar15 = *(long **)(*plStack_68 + 8);
          if (((ulong)plVar22 & (ulong)((long)plVar22 + -1)) == 0) {
            plVar15 = (long *)((ulong)plVar15 & (ulong)((long)plVar22 + -1));
          }
          else if (plVar22 <= plVar15) {
            uVar11 = 0;
            if (plVar22 != (long *)0x0) {
              uVar11 = (ulong)plVar15 / (ulong)plVar22;
            }
            plVar15 = (long *)((long)plVar15 - uVar11 * (long)plVar22);
          }
          *(long **)(*plVar7 + (long)plVar15 * 8) = plStack_68;
        }
      }
      else {
        *plStack_68 = *plVar15;
        *plVar15 = (long)plStack_68;
      }
      param_1[10] = param_1[10] + 1;
      plVar20 = plStack_68;
LAB_10accb2fc:
      func_0x00010a5499ec(param_1,1,plVar20 + 5,&puStack_80);
      if (*(char *)(param_1[0x11] + 8) == '\x01') {
        FUN_10a54a030(&plStack_68,param_1 + 5);
        FUN_10a549a74(param_1 + 0x10,&plStack_68,&puStack_80);
        plVar7 = plStack_60;
        if (plStack_60 != (long *)0x0) {
          plVar15 = plStack_60 + 1;
          do {
            lVar12 = *plVar15;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar3) {
              *plVar15 = lVar12 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plStack_60 + 0x10))(plStack_60);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
          }
        }
      }
      if ((long)uStack_70 < 0) {
        __ZdlPv(puStack_80);
      }
      return;
    }
  }
  func_0x000109ffde50();
  uVar8 = 0;
  func_0x00010a4baa30(&plStack_68,0);
  if (uStack_70._7_1_ < '\0') {
    __ZdlPv(puStack_80);
  }
  __Unwind_Resume();
  plVar7 = param_1;
  (**(code **)(*param_1 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  plVar15 = param_1;
  FUN_10acc8580(param_1,uVar8);
  FUN_10accb50c(param_4);
  func_0x000109898570(&stack0xffffffffffffff28,param_1,param_3);
  func_0x000109898518(param_1,param_3 + 4);
  FUN_10accb014(plVar15,&stack0xffffffffffffff28,&stack0xffffffffffffff24);
  if (in_stack_ffffffffffffff38 < 0) {
    __ZdlPv(in_stack_ffffffffffffff28);
  }
  *extraout_x8 = 0;
  plVar15 = plVar7 + 0x4b;
  lVar12 = plVar7[0x59];
  uVar11 = lVar12 - 1;
  plVar7[0x59] = uVar11;
  if (uVar11 < 8) {
    uVar11 = plVar15[lVar12 + 2];
    if (plVar7[0x5a] == uVar11) {
      return;
    }
  }
  else {
    uVar11 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar11) {
      return;
    }
  }
  lVar12 = *plVar15;
  lVar18 = plVar7[0x4c];
  lVar16 = lVar18 - lVar12;
  uVar14 = lVar16 >> 4;
  if (uVar14 < uVar11) {
    uVar23 = uVar11 - uVar14;
    lVar21 = plVar7[0x4d];
    if ((ulong)(lVar21 - lVar18 >> 4) < uVar23) {
      if (uVar11 >> 0x3c == 0) {
        uVar13 = lVar21 - lVar12 >> 3;
        if (uVar13 <= uVar11) {
          uVar13 = uVar11;
        }
        if (0x7fffffffffffffef < (ulong)(lVar21 - lVar12)) {
          uVar13 = 0xfffffffffffffff;
        }
        plStack_e8 = plVar15;
        if (uVar13 >> 0x3c == 0) {
          lVar5 = uVar13 << 4;
          __Znwm();
          lVar18 = lVar5 + lVar16;
          _bzero(lVar18,uVar23 * 0x10);
          lVar17 = lVar18 + uVar14 * -0x10;
          _memcpy(lVar17,lVar12,lVar16);
          *plVar15 = lVar17;
          plVar7[0x4c] = lVar18 + uVar23 * 0x10;
          plVar7[0x4d] = lVar5 + uVar13 * 0x10;
          lStack_108 = lVar12;
          lStack_100 = lVar12;
          lStack_f8 = lVar12;
          lStack_f0 = lVar21;
          func_0x00010988c1b8(&lStack_108);
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
    _bzero(lVar18,uVar23 * 0x10);
    plVar7[0x4c] = lVar18 + uVar23 * 0x10;
  }
  else if (uVar11 < uVar14) {
    lVar12 = lVar12 + uVar11 * 0x10;
    while (lVar18 != lVar12) {
      lVar18 = lVar18 + -0x10;
      func_0x00010988c204(lVar18);
    }
    plVar7[0x4c] = lVar12;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar11;
  return;
}



/* Entry: 10accb3fc; end: 10accb50b;  */

void FUN_10accb3fc(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10acc8580(param_2,param_3);
  FUN_10accb50c(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  func_0x000109898518(param_2,param_4 + 0x10);
  FUN_10accb014(plVar4,&stack0xffffffffffffffa8,&stack0xffffffffffffffa4);
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10accb50c; end: 10accb52f;  */

void FUN_10accb50c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  char cVar3;
  bool bVar4;
  undefined8 ****ppppuVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 ****ppppuVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined4 *extraout_x8;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  ulong uVar22;
  long *unaff_x26;
  ulong uVar23;
  ulong uVar24;
  undefined8 ***pppuStack_c8;
  ulong uStack_c0;
  byte bStack_b1;
  undefined8 ***pppuStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar8 = (long *)0x2;
  uVar12 = 0;
  FUN_10a052ee0(2,0);
  plVar9 = plVar8;
  (**(code **)(*plVar8 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  plVar10 = plVar8;
  FUN_10acc8580(plVar8,uVar12);
  FUN_10accba1c(param_4);
  func_0x000109898570(&pppuStack_c8,plVar8,param_1);
  if (*(int *)(param_1 + 0x10) != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
LAB_10accb9a4:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10accb9a8);
    (*pcVar6)();
  }
  uVar24 = *(ulong *)(param_1 + 0x18);
  if (0x7fefffffffffffff < (uVar24 & 0x7fffffffffffffff)) {
    uVar24 = 0;
  }
  if ((char)plVar10[0xc] == '\x01') {
    FUN_10a00946c(&UNK_10f6a1d58);
    goto LAB_10accb9a4;
  }
  uVar23 = uStack_c0;
  ppppuVar5 = (undefined8 ****)pppuStack_c8;
  if (-1 < (char)bStack_b1) {
    uVar23 = (ulong)bStack_b1;
    ppppuVar5 = &pppuStack_c8;
  }
  if (0x7ffffffffffffff7 < uVar23) {
    func_0x000109ffde50();
    goto LAB_10accb9a4;
  }
  if (uVar23 < 0x17) {
    uStack_a0 = CONCAT17((char)uVar23,(undefined7)uStack_a0);
    ppppuVar11 = &pppuStack_b0;
    if (uVar23 != 0) goto LAB_10accb660;
  }
  else {
    ppppuVar2 = (undefined8 ****)0x19;
    if ((uVar23 | 7) != 0x17) {
      ppppuVar2 = (undefined8 ****)((uVar23 | 7) + 1);
    }
    ppppuVar11 = ppppuVar2;
    __Znwm();
    uStack_a0 = (ulong)ppppuVar2 | 0x8000000000000000;
    pppuStack_b0 = ppppuVar11;
    uStack_a8 = uVar23;
LAB_10accb660:
    _memmove(ppppuVar11,ppppuVar5,uVar23);
  }
  *(undefined1 *)((long)ppppuVar11 + uVar23) = 0;
  FUN_10ac9e388(plVar10,&pppuStack_b0,0);
  plVar8 = plVar10 + 7;
  plVar18 = plVar8;
  func_0x000107c2b05c(plVar8,&pppuStack_b0);
  plVar21 = (long *)plVar10[8];
  if (plVar21 != (long *)0x0) {
    uVar23 = (long)plVar21 - 1;
    if (((ulong)plVar21 & uVar23) == 0) {
      unaff_x26 = (long *)(uVar23 & (ulong)plVar18);
    }
    else {
      unaff_x26 = plVar18;
      if (plVar21 <= plVar18) {
        uVar22 = 0;
        if (plVar21 != (long *)0x0) {
          uVar22 = (ulong)plVar18 / (ulong)plVar21;
        }
        unaff_x26 = (long *)((long)plVar18 - uVar22 * (long)plVar21);
      }
    }
    puVar14 = *(undefined8 **)(*plVar8 + (long)unaff_x26 * 8);
    if (puVar14 != (undefined8 *)0x0) {
      for (plVar20 = (long *)*puVar14; plVar20 != (long *)0x0; plVar20 = (long *)*plVar20) {
        plVar15 = (long *)plVar20[1];
        if (plVar15 == plVar18) {
          plVar15 = plVar8;
          func_0x000107c2b068(plVar8,plVar20 + 2,&pppuStack_b0);
          if (((ulong)plVar15 & 1) != 0) goto LAB_10accb8b0;
        }
        else {
          if (((ulong)plVar21 & uVar23) == 0) {
            plVar15 = (long *)((ulong)plVar15 & uVar23);
          }
          else if (plVar21 <= plVar15) {
            uVar22 = 0;
            if (plVar21 != (long *)0x0) {
              uVar22 = (ulong)plVar15 / (ulong)plVar21;
            }
            plVar15 = (long *)((long)plVar15 - uVar22 * (long)plVar21);
          }
          if (plVar15 != unaff_x26) break;
        }
      }
    }
  }
  plVar20 = (long *)0x60;
  __Znwm();
  plStack_88 = (long *)0x0;
  *plVar20 = 0;
  plVar20[1] = (long)plVar18;
  plStack_98 = plVar20;
  plStack_90 = plVar8;
  if ((long)uStack_a0 < 0) {
    func_0x000107c3192c(plVar20 + 2,pppuStack_b0,uStack_a8);
  }
  else {
    plVar20[3] = uStack_a8;
    plVar20[2] = (long)pppuStack_b0;
    plVar20[4] = uStack_a0;
  }
  *(undefined1 *)(plVar20 + 6) = 0;
  plVar20[5] = (long)&PTR_FUN_110c6c2d0;
  *(undefined2 *)((long)plVar20 + 0x32) = 5;
  plVar20[9] = 0;
  plVar20[8] = 0;
  plVar20[0xb] = 0;
  plVar20[10] = 0;
  plVar20[7] = uVar24;
  plStack_88 = (long *)CONCAT71(plStack_88._1_7_,1);
  if ((plVar21 == (long *)0x0) ||
     (*(float *)(plVar10 + 0xb) * (float)plVar21 < (float)(plVar10[10] + 1))) {
    uVar24 = 1;
    if ((long *)0x2 < plVar21) {
      uVar24 = (ulong)(((ulong)plVar21 & (long)plVar21 - 1U) != 0);
    }
    uVar24 = uVar24 | (long)plVar21 << 1;
    uVar23 = (ulong)((float)(plVar10[10] + 1) / *(float *)(plVar10 + 0xb));
    if (uVar24 <= uVar23) {
      uVar24 = uVar23;
    }
    FUN_10a4ba824(plVar8,uVar24);
    plVar21 = (long *)plVar10[8];
    if (((ulong)plVar21 & (long)plVar21 - 1U) == 0) {
      unaff_x26 = (long *)((long)plVar21 - 1U & (ulong)plVar18);
    }
    else {
      unaff_x26 = plVar18;
      if (plVar21 <= plVar18) {
        uVar24 = 0;
        if (plVar21 != (long *)0x0) {
          uVar24 = (ulong)plVar18 / (ulong)plVar21;
        }
        unaff_x26 = (long *)((long)plVar18 - uVar24 * (long)plVar21);
      }
    }
  }
  lVar16 = *plVar8;
  plVar18 = *(long **)(lVar16 + (long)unaff_x26 * 8);
  if (plVar18 == (long *)0x0) {
    plVar18 = plVar10 + 9;
    *plStack_98 = *plVar18;
    *plVar18 = (long)plStack_98;
    *(long **)(lVar16 + (long)unaff_x26 * 8) = plVar18;
    if (*plStack_98 != 0) {
      plVar18 = *(long **)(*plStack_98 + 8);
      if (((ulong)plVar21 & (long)plVar21 - 1U) == 0) {
        plVar18 = (long *)((ulong)plVar18 & (long)plVar21 - 1U);
      }
      else if (plVar21 <= plVar18) {
        uVar24 = 0;
        if (plVar21 != (long *)0x0) {
          uVar24 = (ulong)plVar18 / (ulong)plVar21;
        }
        plVar18 = (long *)((long)plVar18 - uVar24 * (long)plVar21);
      }
      *(long **)(*plVar8 + (long)plVar18 * 8) = plStack_98;
    }
  }
  else {
    *plStack_98 = *plVar18;
    *plVar18 = (long)plStack_98;
  }
  plVar10[10] = plVar10[10] + 1;
  plVar20 = plStack_98;
LAB_10accb8b0:
  func_0x00010a5499ec(plVar10,1,plVar20 + 5,&pppuStack_b0);
  if (*(char *)(plVar10[0x11] + 8) == '\x01') {
    FUN_10a54a030(&plStack_98,plVar10 + 5);
    FUN_10a549a74(plVar10 + 0x10,&plStack_98,&pppuStack_b0);
    plVar8 = plStack_90;
    if (plStack_90 != (long *)0x0) {
      plVar10 = plStack_90 + 1;
      do {
        lVar16 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plStack_90 + 0x10))(plStack_90);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
  }
  if ((long)uStack_a0 < 0) {
    __ZdlPv(pppuStack_b0);
  }
  if ((char)bStack_b1 < '\0') {
    __ZdlPv(pppuStack_c8);
  }
  *extraout_x8 = 0;
  plVar8 = plVar9 + 0x4b;
  lVar16 = plVar9[0x59];
  uVar24 = lVar16 - 1;
  plVar9[0x59] = uVar24;
  if (uVar24 < 8) {
    uVar24 = plVar8[lVar16 + 2];
    if (plVar9[0x5a] == uVar24) {
      return;
    }
  }
  else {
    uVar24 = *(ulong *)(plVar9[0x57] + -8);
    plVar9[0x57] = plVar9[0x57] + -8;
    if (plVar9[0x5a] == uVar24) {
      return;
    }
  }
  plVar10 = (long *)*plVar8;
  plVar18 = (long *)plVar9[0x4c];
  lVar16 = (long)plVar18 - (long)plVar10;
  uVar23 = lVar16 >> 4;
  if (uVar23 < uVar24) {
    uVar22 = uVar24 - uVar23;
    if ((ulong)(plVar9[0x4d] - (long)plVar18 >> 4) < uVar22) {
      if (uVar24 >> 0x3c == 0) {
        uVar13 = plVar9[0x4d] - (long)plVar10;
        uVar17 = (long)uVar13 >> 3;
        if (uVar17 <= uVar24) {
          uVar17 = uVar24;
        }
        if (0x7fffffffffffffef < uVar13) {
          uVar17 = 0xfffffffffffffff;
        }
        if (uVar17 >> 0x3c == 0) {
          lVar7 = uVar17 << 4;
          __Znwm();
          lVar1 = lVar7 + lVar16;
          _bzero(lVar1,uVar22 * 0x10);
          lVar19 = lVar1 + uVar23 * -0x10;
          _memcpy(lVar19,plVar10,lVar16);
          *plVar8 = lVar19;
          plVar9[0x4c] = lVar1 + uVar22 * 0x10;
          plVar9[0x4d] = lVar7 + uVar17 * 0x10;
          plStack_98 = plVar10;
          plStack_90 = plVar10;
          plStack_88 = plVar10;
          func_0x00010988c1b8(&plStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar6)();
    }
    _bzero(plVar18,uVar22 * 0x10);
    plVar9[0x4c] = (long)(plVar18 + uVar22 * 2);
  }
  else if (uVar24 < uVar23) {
    while (plVar18 != plVar10 + uVar24 * 2) {
      plVar18 = plVar18 + -2;
      func_0x00010988c204(plVar18);
    }
    plVar9[0x4c] = (long)(plVar10 + uVar24 * 2);
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar24;
  return;
}



/* Entry: 10accb530; end: 10accba1b;  */

void FUN_10accb530(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 ****ppppuVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 ****ppppuVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  ulong uVar21;
  long *unaff_x26;
  ulong uVar22;
  ulong uVar23;
  undefined8 ***pppuStack_b8;
  ulong uStack_b0;
  byte bStack_a1;
  undefined8 ***pppuStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  
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
  FUN_10acc8580(param_2,param_3);
  FUN_10accba1c(param_5);
  func_0x000109898570(&pppuStack_b8,param_2,param_4);
  if (*(int *)(param_4 + 0x10) != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
LAB_10accb9a4:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10accb9a8);
    (*pcVar7)();
  }
  uVar23 = *(ulong *)(param_4 + 0x18);
  if (0x7fefffffffffffff < (uVar23 & 0x7fffffffffffffff)) {
    uVar23 = 0;
  }
  if ((char)plVar10[0xc] == '\x01') {
    FUN_10a00946c(&UNK_10f6a1d58);
    goto LAB_10accb9a4;
  }
  uVar22 = uStack_b0;
  ppppuVar6 = (undefined8 ****)pppuStack_b8;
  if (-1 < (char)bStack_a1) {
    uVar22 = (ulong)bStack_a1;
    ppppuVar6 = &pppuStack_b8;
  }
  if (0x7ffffffffffffff7 < uVar22) {
    func_0x000109ffde50();
    goto LAB_10accb9a4;
  }
  if (uVar22 < 0x17) {
    uStack_90 = CONCAT17((char)uVar22,(undefined7)uStack_90);
    ppppuVar11 = &pppuStack_a0;
    if (uVar22 != 0) goto LAB_10accb660;
  }
  else {
    ppppuVar2 = (undefined8 ****)0x19;
    if ((uVar22 | 7) != 0x17) {
      ppppuVar2 = (undefined8 ****)((uVar22 | 7) + 1);
    }
    ppppuVar11 = ppppuVar2;
    __Znwm();
    uStack_90 = (ulong)ppppuVar2 | 0x8000000000000000;
    pppuStack_a0 = ppppuVar11;
    uStack_98 = uVar22;
LAB_10accb660:
    _memmove(ppppuVar11,ppppuVar6,uVar22);
  }
  *(undefined1 *)((long)ppppuVar11 + uVar22) = 0;
  FUN_10ac9e388(plVar10,&pppuStack_a0,0);
  plVar3 = plVar10 + 7;
  plVar17 = plVar3;
  func_0x000107c2b05c(plVar3,&pppuStack_a0);
  plVar20 = (long *)plVar10[8];
  if (plVar20 != (long *)0x0) {
    uVar22 = (long)plVar20 - 1;
    if (((ulong)plVar20 & uVar22) == 0) {
      unaff_x26 = (long *)(uVar22 & (ulong)plVar17);
    }
    else {
      unaff_x26 = plVar17;
      if (plVar20 <= plVar17) {
        uVar21 = 0;
        if (plVar20 != (long *)0x0) {
          uVar21 = (ulong)plVar17 / (ulong)plVar20;
        }
        unaff_x26 = (long *)((long)plVar17 - uVar21 * (long)plVar20);
      }
    }
    puVar13 = *(undefined8 **)(*plVar3 + (long)unaff_x26 * 8);
    if (puVar13 != (undefined8 *)0x0) {
      for (plVar19 = (long *)*puVar13; plVar19 != (long *)0x0; plVar19 = (long *)*plVar19) {
        plVar14 = (long *)plVar19[1];
        if (plVar14 == plVar17) {
          plVar14 = plVar3;
          func_0x000107c2b068(plVar3,plVar19 + 2,&pppuStack_a0);
          if (((ulong)plVar14 & 1) != 0) goto LAB_10accb8b0;
        }
        else {
          if (((ulong)plVar20 & uVar22) == 0) {
            plVar14 = (long *)((ulong)plVar14 & uVar22);
          }
          else if (plVar20 <= plVar14) {
            uVar21 = 0;
            if (plVar20 != (long *)0x0) {
              uVar21 = (ulong)plVar14 / (ulong)plVar20;
            }
            plVar14 = (long *)((long)plVar14 - uVar21 * (long)plVar20);
          }
          if (plVar14 != unaff_x26) break;
        }
      }
    }
  }
  plVar19 = (long *)0x60;
  __Znwm();
  plStack_78 = (long *)0x0;
  *plVar19 = 0;
  plVar19[1] = (long)plVar17;
  plStack_88 = plVar19;
  plStack_80 = plVar3;
  if ((long)uStack_90 < 0) {
    func_0x000107c3192c(plVar19 + 2,pppuStack_a0,uStack_98);
  }
  else {
    plVar19[3] = uStack_98;
    plVar19[2] = (long)pppuStack_a0;
    plVar19[4] = uStack_90;
  }
  *(undefined1 *)(plVar19 + 6) = 0;
  plVar19[5] = (long)&PTR_FUN_110c6c2d0;
  *(undefined2 *)((long)plVar19 + 0x32) = 5;
  plVar19[9] = 0;
  plVar19[8] = 0;
  plVar19[0xb] = 0;
  plVar19[10] = 0;
  plVar19[7] = uVar23;
  plStack_78 = (long *)CONCAT71(plStack_78._1_7_,1);
  if ((plVar20 == (long *)0x0) ||
     (*(float *)(plVar10 + 0xb) * (float)plVar20 < (float)(plVar10[10] + 1))) {
    uVar23 = 1;
    if ((long *)0x2 < plVar20) {
      uVar23 = (ulong)(((ulong)plVar20 & (long)plVar20 - 1U) != 0);
    }
    uVar23 = uVar23 | (long)plVar20 << 1;
    uVar22 = (ulong)((float)(plVar10[10] + 1) / *(float *)(plVar10 + 0xb));
    if (uVar23 <= uVar22) {
      uVar23 = uVar22;
    }
    FUN_10a4ba824(plVar3,uVar23);
    plVar20 = (long *)plVar10[8];
    if (((ulong)plVar20 & (long)plVar20 - 1U) == 0) {
      unaff_x26 = (long *)((long)plVar20 - 1U & (ulong)plVar17);
    }
    else {
      unaff_x26 = plVar17;
      if (plVar20 <= plVar17) {
        uVar23 = 0;
        if (plVar20 != (long *)0x0) {
          uVar23 = (ulong)plVar17 / (ulong)plVar20;
        }
        unaff_x26 = (long *)((long)plVar17 - uVar23 * (long)plVar20);
      }
    }
  }
  lVar15 = *plVar3;
  plVar17 = *(long **)(lVar15 + (long)unaff_x26 * 8);
  if (plVar17 == (long *)0x0) {
    plVar17 = plVar10 + 9;
    *plStack_88 = *plVar17;
    *plVar17 = (long)plStack_88;
    *(long **)(lVar15 + (long)unaff_x26 * 8) = plVar17;
    if (*plStack_88 != 0) {
      plVar17 = *(long **)(*plStack_88 + 8);
      if (((ulong)plVar20 & (long)plVar20 - 1U) == 0) {
        plVar17 = (long *)((ulong)plVar17 & (long)plVar20 - 1U);
      }
      else if (plVar20 <= plVar17) {
        uVar23 = 0;
        if (plVar20 != (long *)0x0) {
          uVar23 = (ulong)plVar17 / (ulong)plVar20;
        }
        plVar17 = (long *)((long)plVar17 - uVar23 * (long)plVar20);
      }
      *(long **)(*plVar3 + (long)plVar17 * 8) = plStack_88;
    }
  }
  else {
    *plStack_88 = *plVar17;
    *plVar17 = (long)plStack_88;
  }
  plVar10[10] = plVar10[10] + 1;
  plVar19 = plStack_88;
LAB_10accb8b0:
  func_0x00010a5499ec(plVar10,1,plVar19 + 5,&pppuStack_a0);
  if (*(char *)(plVar10[0x11] + 8) == '\x01') {
    FUN_10a54a030(&plStack_88,plVar10 + 5);
    FUN_10a549a74(plVar10 + 0x10,&plStack_88,&pppuStack_a0);
    plVar10 = plStack_80;
    if (plStack_80 != (long *)0x0) {
      plVar3 = plStack_80 + 1;
      do {
        lVar15 = *plVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *plVar3 = lVar15 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_80 + 0x10))(plStack_80);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
  }
  if ((long)uStack_90 < 0) {
    __ZdlPv(pppuStack_a0);
  }
  if ((char)bStack_a1 < '\0') {
    __ZdlPv(pppuStack_b8);
  }
  *param_1 = 0;
  plVar10 = plVar9 + 0x4b;
  lVar15 = plVar9[0x59];
  uVar23 = lVar15 - 1;
  plVar9[0x59] = uVar23;
  if (uVar23 < 8) {
    uVar23 = plVar10[lVar15 + 2];
    if (plVar9[0x5a] == uVar23) {
      return;
    }
  }
  else {
    uVar23 = *(ulong *)(plVar9[0x57] + -8);
    plVar9[0x57] = plVar9[0x57] + -8;
    if (plVar9[0x5a] == uVar23) {
      return;
    }
  }
  plVar3 = (long *)*plVar10;
  plVar17 = (long *)plVar9[0x4c];
  lVar15 = (long)plVar17 - (long)plVar3;
  uVar22 = lVar15 >> 4;
  if (uVar22 < uVar23) {
    uVar21 = uVar23 - uVar22;
    if ((ulong)(plVar9[0x4d] - (long)plVar17 >> 4) < uVar21) {
      if (uVar23 >> 0x3c == 0) {
        uVar12 = plVar9[0x4d] - (long)plVar3;
        uVar16 = (long)uVar12 >> 3;
        if (uVar16 <= uVar23) {
          uVar16 = uVar23;
        }
        if (0x7fffffffffffffef < uVar12) {
          uVar16 = 0xfffffffffffffff;
        }
        if (uVar16 >> 0x3c == 0) {
          lVar8 = uVar16 << 4;
          __Znwm();
          lVar1 = lVar8 + lVar15;
          _bzero(lVar1,uVar21 * 0x10);
          lVar18 = lVar1 + uVar22 * -0x10;
          _memcpy(lVar18,plVar3,lVar15);
          *plVar10 = lVar18;
          plVar9[0x4c] = lVar1 + uVar21 * 0x10;
          plVar9[0x4d] = lVar8 + uVar16 * 0x10;
          plStack_88 = plVar3;
          plStack_80 = plVar3;
          plStack_78 = plVar3;
          func_0x00010988c1b8(&plStack_88);
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
    _bzero(plVar17,uVar21 * 0x10);
    plVar9[0x4c] = (long)(plVar17 + uVar21 * 2);
  }
  else if (uVar23 < uVar22) {
    while (plVar17 != plVar3 + uVar23 * 2) {
      plVar17 = plVar17 + -2;
      func_0x00010988c204(plVar17);
    }
    plVar9[0x4c] = (long)(plVar3 + uVar23 * 2);
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar23;
  return;
}



/* Entry: 10accba1c; end: 10accba7f;  */

/* WARNING: Possible PIC construction at 0x00010accbb24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010accbb28) */
/* WARNING: Removing unreachable block (ram,0x00010accbb30) */
/* WARNING: Removing unreachable block (ram,0x00010accbb38) */
/* WARNING: Removing unreachable block (ram,0x00010988c170) */
/* WARNING: Removing unreachable block (ram,0x00010988c1a0) */
/* WARNING: Removing unreachable block (ram,0x00010988c004) */
/* WARNING: Removing unreachable block (ram,0x00010988c020) */
/* WARNING: Removing unreachable block (ram,0x00010988c01c) */
/* WARNING: Removing unreachable block (ram,0x00010988c184) */
/* WARNING: Removing unreachable block (ram,0x00010988c19c) */
/* WARNING: Removing unreachable block (ram,0x00010988c024) */
/* WARNING: Removing unreachable block (ram,0x00010988c0f8) */
/* WARNING: Removing unreachable block (ram,0x00010988c100) */
/* WARNING: Removing unreachable block (ram,0x00010988c104) */
/* WARNING: Removing unreachable block (ram,0x00010988c134) */
/* WARNING: Removing unreachable block (ram,0x00010988c10c) */
/* WARNING: Removing unreachable block (ram,0x00010988c060) */
/* WARNING: Removing unreachable block (ram,0x00010988c11c) */
/* WARNING: Removing unreachable block (ram,0x00010988c074) */
/* WARNING: Removing unreachable block (ram,0x00010988c15c) */
/* WARNING: Removing unreachable block (ram,0x00010988c07c) */
/* WARNING: Removing unreachable block (ram,0x00010988c088) */
/* WARNING: Removing unreachable block (ram,0x00010988c098) */
/* WARNING: Removing unreachable block (ram,0x00010988c164) */
/* WARNING: Removing unreachable block (ram,0x00010988c168) */
/* WARNING: Removing unreachable block (ram,0x00010988c0a8) */
/* WARNING: Removing unreachable block (ram,0x00010988c138) */
/* WARNING: Removing unreachable block (ram,0x00010988c198) */

long * FUN_10accba1c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  undefined8 extraout_x8;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  long *unaff_x19;
  long *plVar18;
  undefined8 unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  undefined1 *puVar19;
  long *unaff_x23;
  long *plVar20;
  undefined8 unaff_x24;
  long *unaff_x25;
  undefined *puVar21;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 unaff_x28;
  undefined8 uVar22;
  
  if ((int)param_1 == 2) {
    return param_1;
  }
  puVar5 = &stack0xfffffffffffffff0;
  plVar8 = (long *)0x2;
  puVar9 = (undefined8 *)0x0;
  uVar22 = 0x10accba40;
  FUN_10a052ee0();
  puVar4 = &stack0xfffffffffffffff0;
  while (uVar10 = param_4, plVar16 = param_1, (char)plVar8[0xc] == '\x01') {
    *(undefined1 **)(puVar4 + -0x10) = puVar5;
    *(undefined8 *)(puVar4 + -8) = uVar22;
    plVar18 = (long *)&UNK_10f6a1d58;
    FUN_10a00946c();
    *(undefined8 *)(puVar4 + -0x50) = unaff_x24;
    *(long **)(puVar4 + -0x48) = unaff_x23;
    *(long **)(puVar4 + -0x40) = unaff_x22;
    *(long **)(puVar4 + -0x38) = unaff_x21;
    *(undefined8 *)(puVar4 + -0x30) = unaff_x20;
    *(long **)(puVar4 + -0x28) = unaff_x19;
    *(undefined1 **)(puVar4 + -0x20) = puVar4 + -0x10;
    *(code **)(puVar4 + -0x18) = FUN_10accba80;
    puVar5 = puVar4 + -0x20;
    unaff_x19 = plVar18;
    param_4 = uVar10;
    (**(code **)(*plVar18 + 0x58))();
    if ((ulong)unaff_x19[0x59] < 8) {
      unaff_x19[unaff_x19[0x59] + 0x4e] = unaff_x19[0x5a];
      unaff_x19[0x59] = unaff_x19[0x59] + 1;
    }
    else {
      func_0x00010988bfcc(unaff_x19 + 0x4b);
    }
    plVar8 = plVar18;
    FUN_10acc8580(plVar18,puVar9);
    FUN_10accbb90(uVar10);
    func_0x000109898570(puVar4 + -0x68,plVar18,plVar16);
    plVar17 = plVar18;
    func_0x00010989847c(plVar18,plVar16 + 2);
    puVar4[-0x69] = (char)plVar17;
    puVar9 = (undefined8 *)(puVar4 + -0x68);
    param_1 = (long *)(puVar4 + -0x69);
    uVar22 = 0x10accbb28;
    puVar4 = puVar4 + -0x70;
    unaff_x20 = extraout_x8;
    unaff_x21 = plVar16;
    unaff_x22 = plVar18;
    unaff_x23 = plVar8;
    unaff_x24 = uVar10;
  }
  uVar13 = puVar9[1];
  puVar6 = (undefined8 *)*puVar9;
  if (-1 < (char)*(byte *)((long)puVar9 + 0x17)) {
    uVar13 = (ulong)*(byte *)((long)puVar9 + 0x17);
    puVar6 = puVar9;
  }
  puVar7 = puVar4 + -0x80;
  puVar19 = puVar4 + -0x80;
  *(long **)(puVar4 + -0x50) = unaff_x26;
  *(long **)(puVar4 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar4 + -0x40) = unaff_x24;
  *(long **)(puVar4 + -0x38) = unaff_x23;
  *(long **)(puVar4 + -0x30) = unaff_x22;
  *(long **)(puVar4 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar4 + -0x20) = unaff_x20;
  *(long **)(puVar4 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar4 + -0x10) = puVar5;
  *(undefined8 *)(puVar4 + -8) = uVar22;
  if (0x7ffffffffffffff7 < uVar13) {
    func_0x000109ffde50();
    uVar22 = 0;
    func_0x00010a4baa30(puVar4 + -0x68,0);
    if ((char)puVar4[-0x69] < '\0') {
      __ZdlPv(*(undefined8 *)(puVar4 + -0x80));
    }
    plVar18 = plVar8;
    __Unwind_Resume();
    puVar5 = puVar4 + -0x100;
    puVar7 = puVar4 + -0x100;
    *(long **)(puVar4 + -0xd0) = unaff_x26;
    *(long **)(puVar4 + -200) = unaff_x25;
    *(undefined8 *)(puVar4 + -0xc0) = unaff_x24;
    *(long **)(puVar4 + -0xb8) = unaff_x23;
    *(long **)(puVar4 + -0xb0) = unaff_x22;
    *(long **)(puVar4 + -0xa8) = unaff_x21;
    *(undefined8 *)(puVar4 + -0xa0) = unaff_x20;
    *(long **)(puVar4 + -0x98) = plVar8;
    *(undefined1 **)(puVar4 + -0x90) = puVar4 + -0x10;
    *(code **)(puVar4 + -0x88) = FUN_10aca0aac;
    if (0x7ffffffffffffff7 < uVar13) {
      func_0x000109ffde50();
      uVar22 = 0;
      func_0x00010a4baa30(puVar4 + -0xe8,0);
      if ((char)puVar4[-0xe9] < '\0') {
        __ZdlPv(*(undefined8 *)(puVar4 + -0x100));
      }
      plVar8 = plVar18;
      __Unwind_Resume();
      *(undefined8 *)(puVar4 + -0x160) = unaff_x28;
      *(long **)(puVar4 + -0x158) = unaff_x27;
      *(long **)(puVar4 + -0x150) = unaff_x26;
      *(long **)(puVar4 + -0x148) = unaff_x25;
      *(undefined8 *)(puVar4 + -0x140) = unaff_x24;
      *(long **)(puVar4 + -0x138) = unaff_x23;
      *(long **)(puVar4 + -0x130) = unaff_x22;
      *(long **)(puVar4 + -0x128) = unaff_x21;
      *(undefined8 *)(puVar4 + -0x120) = unaff_x20;
      *(long **)(puVar4 + -0x118) = plVar18;
      *(undefined1 **)(puVar4 + -0x110) = puVar4 + -0x90;
      *(code **)(puVar4 + -0x108) = FUN_10aca0e6c;
      if (0x7ffffffffffffff7 < uVar13) {
        func_0x000109ffde50();
        uVar22 = 0;
        func_0x00010a4baa30(puVar4 + -0x180,0);
        if ((char)puVar4[-0x181] < '\0') {
          __ZdlPv(*(undefined8 *)(puVar4 + -0x198));
        }
        plVar18 = plVar8;
        __Unwind_Resume();
        *(undefined8 *)(puVar4 + -0x200) = unaff_x28;
        *(long **)(puVar4 + -0x1f8) = unaff_x27;
        *(long **)(puVar4 + -0x1f0) = unaff_x26;
        *(long **)(puVar4 + -0x1e8) = unaff_x25;
        *(undefined8 *)(puVar4 + -0x1e0) = unaff_x24;
        *(long **)(puVar4 + -0x1d8) = unaff_x23;
        *(long **)(puVar4 + -0x1d0) = unaff_x22;
        *(long **)(puVar4 + -0x1c8) = unaff_x21;
        *(undefined8 *)(puVar4 + -0x1c0) = unaff_x20;
        *(long **)(puVar4 + -0x1b8) = plVar8;
        *(undefined1 **)(puVar4 + -0x1b0) = puVar4 + -0x110;
        *(code **)(puVar4 + -0x1a8) = FUN_10aca12bc;
        if (0x7ffffffffffffff7 < uVar13) {
          func_0x000109ffde50();
          uVar22 = 0;
          func_0x00010a4baa30(puVar4 + -0x220,0);
          if ((char)puVar4[-0x221] < '\0') {
            __ZdlPv(*(undefined8 *)(puVar4 + -0x238));
          }
          plVar8 = plVar18;
          __Unwind_Resume();
          *(long **)(puVar4 + -0x290) = unaff_x26;
          *(long **)(puVar4 + -0x288) = unaff_x25;
          *(undefined8 *)(puVar4 + -0x280) = unaff_x24;
          *(long **)(puVar4 + -0x278) = unaff_x23;
          *(long **)(puVar4 + -0x270) = unaff_x22;
          *(long **)(puVar4 + -0x268) = unaff_x21;
          *(undefined8 *)(puVar4 + -0x260) = unaff_x20;
          *(long **)(puVar4 + -600) = plVar18;
          *(undefined1 **)(puVar4 + -0x250) = puVar4 + -0x1b0;
          *(code **)(puVar4 + -0x248) = FUN_10aca1724;
          if (0x7ffffffffffffff7 < uVar13) {
            func_0x000109ffde50();
            func_0x00010a4baa30(puVar4 + -0x2b0,0);
            if ((char)puVar4[-0x2b1] < '\0') {
              __ZdlPv(*(undefined8 *)(puVar4 + -0x2c8));
            }
            plVar16 = plVar8;
            __Unwind_Resume();
            plVar18 = (long *)(puVar4 + -800);
            *(undefined8 *)(puVar4 + -0x2f0) = unaff_x20;
            *(long **)(puVar4 + -0x2e8) = plVar8;
            *(undefined1 **)(puVar4 + -0x2e0) = puVar4 + -0x250;
            *(code **)(puVar4 + -0x2d8) = FUN_10aca1b2c;
            if (plVar16 == (long *)0x0) {
              plVar18 = (long *)0x0;
            }
            else {
              *(undefined1 **)(puVar4 + -800) = puVar4 + -0x318;
              *(undefined8 *)(puVar4 + -0x318) = 0;
              *(undefined8 *)(puVar4 + -0x310) = 0;
              *(undefined8 *)(puVar4 + -0x308) = 0;
              *(undefined8 *)(puVar4 + -0x300) = 0;
              *(undefined8 *)(puVar4 + -0x2f8) = 0;
              func_0x00010983a984();
              if (((ulong)plVar18 & 1) != 0) {
                FUN_10aca02f8(plVar16,puVar4 + -800);
              }
              func_0x000109839668(puVar4 + -800);
            }
            return plVar18;
          }
          if (uVar13 < 0x17) {
            puVar4[-0x2b1] = (char)uVar13;
            puVar7 = puVar4 + -0x2c8;
            if (uVar13 == 0) goto LAB_10aca17ac;
          }
          else {
            puVar5 = (undefined1 *)0x19;
            if ((uVar13 | 7) != 0x17) {
              puVar5 = (undefined1 *)((uVar13 | 7) + 1);
            }
            puVar7 = puVar5;
            __Znwm();
            *(ulong *)(puVar4 + -0x2c0) = uVar13;
            *(ulong *)(puVar4 + -0x2b8) = (ulong)puVar5 | 0x8000000000000000;
            *(undefined1 **)(puVar4 + -0x2c8) = puVar7;
          }
          _memmove(puVar7,uVar22,uVar13);
LAB_10aca17ac:
          puVar7[uVar13] = 0;
          FUN_10ac9e388(plVar8,puVar4 + -0x2c8,0);
          plVar18 = plVar8 + 7;
          plVar17 = plVar18;
          func_0x000107c2b05c(plVar18,puVar4 + -0x2c8);
          plVar20 = (long *)plVar8[8];
          if (plVar20 != (long *)0x0) {
            puVar21 = (undefined *)((long)plVar20 + -1);
            if (((ulong)plVar20 & (ulong)puVar21) == 0) {
              unaff_x25 = (long *)((ulong)puVar21 & (ulong)plVar17);
            }
            else {
              unaff_x25 = plVar17;
              if (plVar20 <= plVar17) {
                uVar13 = 0;
                if (plVar20 != (long *)0x0) {
                  uVar13 = (ulong)plVar17 / (ulong)plVar20;
                }
                unaff_x25 = (long *)((long)plVar17 - uVar13 * (long)plVar20);
              }
            }
            plVar11 = *(long **)(*plVar18 + (long)unaff_x25 * 8);
            if (plVar11 != (long *)0x0) {
              for (plVar11 = (long *)*plVar11; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
                plVar12 = (long *)plVar11[1];
                if (plVar12 == plVar17) {
                  plVar12 = plVar18;
                  func_0x000107c2b068(plVar18,plVar11 + 2,puVar4 + -0x2c8);
                  if (((ulong)plVar12 & 1) != 0) goto LAB_10aca19fc;
                }
                else {
                  if (((ulong)plVar20 & (ulong)puVar21) == 0) {
                    plVar12 = (long *)((ulong)plVar12 & (ulong)puVar21);
                  }
                  else if (plVar20 <= plVar12) {
                    uVar13 = 0;
                    if (plVar20 != (long *)0x0) {
                      uVar13 = (ulong)plVar12 / (ulong)plVar20;
                    }
                    plVar12 = (long *)((long)plVar12 - uVar13 * (long)plVar20);
                  }
                  if (plVar12 != unaff_x25) break;
                }
              }
            }
          }
          puVar9 = (undefined8 *)0x60;
          __Znwm();
          *(undefined8 **)(puVar4 + -0x2b0) = puVar9;
          *(long **)(puVar4 + -0x2a8) = plVar18;
          *(undefined8 *)(puVar4 + -0x2a0) = 0;
          *puVar9 = 0;
          puVar9[1] = plVar17;
          if ((char)puVar4[-0x2b1] < '\0') {
            func_0x000107c3192c(puVar9 + 2,*(undefined8 *)(puVar4 + -0x2c8),
                                *(undefined8 *)(puVar4 + -0x2c0));
          }
          else {
            uVar22 = *(undefined8 *)(puVar4 + -0x2c8);
            puVar9[3] = *(undefined8 *)(puVar4 + -0x2c0);
            puVar9[2] = uVar22;
            puVar9[4] = *(undefined8 *)(puVar4 + -0x2b8);
          }
          puVar9[5] = &PTR_FUN_110c6c2d0;
          *(undefined1 *)(puVar9 + 6) = 0;
          *(undefined2 *)((long)puVar9 + 0x32) = 0xf;
          puVar9[9] = 0;
          puVar9[8] = 0;
          puVar9[0xb] = 0;
          puVar9[10] = 0;
          FUN_10acc4edc(puVar9 + 5,*plVar16,plVar16[1]);
          puVar4[-0x2a0] = 1;
          if ((plVar20 == (long *)0x0) ||
             (*(float *)(plVar8 + 0xb) * (float)plVar20 < (float)(plVar8[10] + 1))) {
            uVar13 = 1;
            if ((long *)0x2 < plVar20) {
              uVar13 = (ulong)(((ulong)plVar20 & (ulong)((long)plVar20 + -1)) != 0);
            }
            uVar13 = uVar13 | (long)plVar20 << 1;
            uVar15 = (ulong)((float)(plVar8[10] + 1) / *(float *)(plVar8 + 0xb));
            if (uVar13 <= uVar15) {
              uVar13 = uVar15;
            }
            FUN_10a4ba824(plVar18,uVar13);
            plVar20 = (long *)plVar8[8];
            if (((ulong)plVar20 & (ulong)((long)plVar20 + -1)) == 0) {
              unaff_x25 = (long *)((ulong)((long)plVar20 + -1) & (ulong)plVar17);
            }
            else {
              unaff_x25 = plVar17;
              if (plVar20 <= plVar17) {
                uVar13 = 0;
                if (plVar20 != (long *)0x0) {
                  uVar13 = (ulong)plVar17 / (ulong)plVar20;
                }
                unaff_x25 = (long *)((long)plVar17 - uVar13 * (long)plVar20);
              }
            }
          }
          lVar14 = *plVar18;
          plVar16 = *(long **)(lVar14 + (long)unaff_x25 * 8);
          if (plVar16 == (long *)0x0) {
            plVar16 = plVar8 + 9;
            plVar17 = *(long **)(puVar4 + -0x2b0);
            *plVar17 = *plVar16;
            *plVar16 = (long)plVar17;
            *(long **)(lVar14 + (long)unaff_x25 * 8) = plVar16;
            plVar11 = *(long **)(puVar4 + -0x2b0);
            if (*plVar11 != 0) {
              plVar16 = *(long **)(*plVar11 + 8);
              if (((ulong)plVar20 & (ulong)((long)plVar20 + -1)) == 0) {
                plVar16 = (long *)((ulong)plVar16 & (ulong)((long)plVar20 + -1));
              }
              else if (plVar20 <= plVar16) {
                uVar13 = 0;
                if (plVar20 != (long *)0x0) {
                  uVar13 = (ulong)plVar16 / (ulong)plVar20;
                }
                plVar16 = (long *)((long)plVar16 - uVar13 * (long)plVar20);
              }
              *(long **)(*plVar18 + (long)plVar16 * 8) = plVar11;
              plVar11 = *(long **)(puVar4 + -0x2b0);
            }
          }
          else {
            plVar11 = *(long **)(puVar4 + -0x2b0);
            *plVar11 = *plVar16;
            *plVar16 = (long)plVar11;
          }
          plVar8[10] = plVar8[10] + 1;
LAB_10aca19fc:
          plVar16 = plVar8;
          func_0x00010a5499ec(plVar8,1,plVar11 + 5,puVar4 + -0x2c8);
          if (*(char *)(plVar8[0x11] + 8) == '\x01') {
            FUN_10a54a030(puVar4 + -0x2b0,plVar8 + 5);
            plVar16 = plVar8 + 0x10;
            FUN_10a549a74(plVar16,puVar4 + -0x2b0,puVar4 + -0x2c8);
            plVar8 = *(long **)(puVar4 + -0x2a8);
            if (plVar8 != (long *)0x0) {
              plVar18 = plVar8 + 1;
              do {
                lVar14 = *plVar18;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar3) {
                  *plVar18 = lVar14 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar14 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
                plVar16 = plVar8;
              }
            }
          }
          if ((char)puVar4[-0x2b1] < '\0') {
            plVar16 = *(long **)(puVar4 + -0x2c8);
            __ZdlPv(plVar16);
          }
          return plVar16;
        }
        if (uVar13 < 0x17) {
          puVar4[-0x221] = (char)uVar13;
          puVar7 = puVar4 + -0x238;
          if (uVar13 == 0) goto LAB_10aca1348;
        }
        else {
          puVar5 = (undefined1 *)0x19;
          if ((uVar13 | 7) != 0x17) {
            puVar5 = (undefined1 *)((uVar13 | 7) + 1);
          }
          puVar7 = puVar5;
          __Znwm();
          *(ulong *)(puVar4 + -0x230) = uVar13;
          *(ulong *)(puVar4 + -0x228) = (ulong)puVar5 | 0x8000000000000000;
          *(undefined1 **)(puVar4 + -0x238) = puVar7;
        }
        _memmove(puVar7,uVar22,uVar13);
LAB_10aca1348:
        puVar7[uVar13] = 0;
        FUN_10ac9e388(plVar18,puVar4 + -0x238,0);
        plVar8 = plVar18 + 7;
        plVar17 = plVar8;
        func_0x000107c2b05c(plVar8,puVar4 + -0x238);
        plVar20 = (long *)plVar18[8];
        if (plVar20 != (long *)0x0) {
          puVar21 = (undefined *)((long)plVar20 + -1);
          if (((ulong)plVar20 & (ulong)puVar21) == 0) {
            unaff_x27 = (long *)((ulong)puVar21 & (ulong)plVar17);
          }
          else {
            unaff_x27 = plVar17;
            if (plVar20 <= plVar17) {
              uVar13 = 0;
              if (plVar20 != (long *)0x0) {
                uVar13 = (ulong)plVar17 / (ulong)plVar20;
              }
              unaff_x27 = (long *)((long)plVar17 - uVar13 * (long)plVar20);
            }
          }
          plVar11 = *(long **)(*plVar8 + (long)unaff_x27 * 8);
          if (plVar11 != (long *)0x0) {
            for (plVar11 = (long *)*plVar11; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
              plVar12 = (long *)plVar11[1];
              if (plVar12 == plVar17) {
                plVar12 = plVar8;
                func_0x000107c2b068(plVar8,plVar11 + 2,puVar4 + -0x238);
                if (((ulong)plVar12 & 1) != 0) goto LAB_10aca15dc;
              }
              else {
                if (((ulong)plVar20 & (ulong)puVar21) == 0) {
                  plVar12 = (long *)((ulong)plVar12 & (ulong)puVar21);
                }
                else if (plVar20 <= plVar12) {
                  uVar13 = 0;
                  if (plVar20 != (long *)0x0) {
                    uVar13 = (ulong)plVar12 / (ulong)plVar20;
                  }
                  plVar12 = (long *)((long)plVar12 - uVar13 * (long)plVar20);
                }
                if (plVar12 != unaff_x27) break;
              }
            }
          }
        }
        puVar9 = (undefined8 *)0x60;
        __Znwm();
        *(undefined8 **)(puVar4 + -0x220) = puVar9;
        *(long **)(puVar4 + -0x218) = plVar8;
        *(undefined8 *)(puVar4 + -0x210) = 0;
        *puVar9 = 0;
        puVar9[1] = plVar17;
        if ((char)puVar4[-0x221] < '\0') {
          func_0x000107c3192c(puVar9 + 2,*(undefined8 *)(puVar4 + -0x238),
                              *(undefined8 *)(puVar4 + -0x230));
        }
        else {
          uVar22 = *(undefined8 *)(puVar4 + -0x238);
          puVar9[3] = *(undefined8 *)(puVar4 + -0x230);
          puVar9[2] = uVar22;
          puVar9[4] = *(undefined8 *)(puVar4 + -0x228);
        }
        puVar9[9] = 0;
        puVar9[8] = 0;
        *(undefined1 *)(puVar9 + 6) = 0;
        puVar9[5] = &PTR_FUN_110c6c2d0;
        *(undefined2 *)((long)puVar9 + 0x32) = 0xf;
        puVar9[0xb] = 0;
        puVar9[10] = 0;
        lVar14 = *plVar16;
        lVar1 = plVar16[1];
        puVar6 = (undefined8 *)0x20;
        __Znwm();
        *puVar6 = &PTR_FUN_110c6b8d8;
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6[1] = 0;
        FUN_10a0ca588(puVar6 + 1,lVar14,lVar1,lVar1 - lVar14 >> 2);
        plVar16 = (long *)puVar9[0xb];
        puVar9[0xb] = puVar6;
        if (plVar16 != (long *)0x0) {
          (**(code **)(*plVar16 + 8))();
        }
        puVar4[-0x210] = 1;
        if ((plVar20 == (long *)0x0) ||
           (*(float *)(plVar18 + 0xb) * (float)plVar20 < (float)(plVar18[10] + 1))) {
          uVar13 = 1;
          if ((long *)0x2 < plVar20) {
            uVar13 = (ulong)(((ulong)plVar20 & (ulong)((long)plVar20 + -1)) != 0);
          }
          uVar13 = uVar13 | (long)plVar20 << 1;
          uVar15 = (ulong)((float)(plVar18[10] + 1) / *(float *)(plVar18 + 0xb));
          if (uVar13 <= uVar15) {
            uVar13 = uVar15;
          }
          FUN_10a4ba824(plVar8,uVar13);
          plVar20 = (long *)plVar18[8];
          if (((ulong)plVar20 & (ulong)((long)plVar20 + -1)) == 0) {
            unaff_x27 = (long *)((ulong)((long)plVar20 + -1) & (ulong)plVar17);
          }
          else {
            unaff_x27 = plVar17;
            if (plVar20 <= plVar17) {
              uVar13 = 0;
              if (plVar20 != (long *)0x0) {
                uVar13 = (ulong)plVar17 / (ulong)plVar20;
              }
              unaff_x27 = (long *)((long)plVar17 - uVar13 * (long)plVar20);
            }
          }
        }
        lVar14 = *plVar8;
        plVar16 = *(long **)(lVar14 + (long)unaff_x27 * 8);
        if (plVar16 == (long *)0x0) {
          plVar16 = plVar18 + 9;
          plVar17 = *(long **)(puVar4 + -0x220);
          *plVar17 = *plVar16;
          *plVar16 = (long)plVar17;
          *(long **)(lVar14 + (long)unaff_x27 * 8) = plVar16;
          plVar11 = *(long **)(puVar4 + -0x220);
          if (*plVar11 != 0) {
            plVar16 = *(long **)(*plVar11 + 8);
            if (((ulong)plVar20 & (ulong)((long)plVar20 + -1)) == 0) {
              plVar16 = (long *)((ulong)plVar16 & (ulong)((long)plVar20 + -1));
            }
            else if (plVar20 <= plVar16) {
              uVar13 = 0;
              if (plVar20 != (long *)0x0) {
                uVar13 = (ulong)plVar16 / (ulong)plVar20;
              }
              plVar16 = (long *)((long)plVar16 - uVar13 * (long)plVar20);
            }
            *(long **)(*plVar8 + (long)plVar16 * 8) = plVar11;
            plVar11 = *(long **)(puVar4 + -0x220);
          }
        }
        else {
          plVar11 = *(long **)(puVar4 + -0x220);
          *plVar11 = *plVar16;
          *plVar16 = (long)plVar11;
        }
        plVar18[10] = plVar18[10] + 1;
LAB_10aca15dc:
        plVar8 = plVar18;
        func_0x00010a5499ec(plVar18,1,plVar11 + 5,puVar4 + -0x238);
        if (*(char *)(plVar18[0x11] + 8) == '\x01') {
          FUN_10a54a030(puVar4 + -0x220,plVar18 + 5);
          plVar8 = plVar18 + 0x10;
          FUN_10a549a74(plVar8,puVar4 + -0x220,puVar4 + -0x238);
          plVar16 = *(long **)(puVar4 + -0x218);
          if (plVar16 != (long *)0x0) {
            plVar18 = plVar16 + 1;
            do {
              lVar14 = *plVar18;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar3) {
                *plVar18 = lVar14 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
              plVar8 = plVar16;
            }
          }
        }
        if ((char)puVar4[-0x221] < '\0') {
          plVar8 = *(long **)(puVar4 + -0x238);
          __ZdlPv(plVar8);
        }
        return plVar8;
      }
      if (uVar13 < 0x17) {
        puVar4[-0x181] = (char)uVar13;
        puVar7 = puVar4 + -0x198;
        if (uVar13 == 0) goto LAB_10aca0ef8;
      }
      else {
        puVar5 = (undefined1 *)0x19;
        if ((uVar13 | 7) != 0x17) {
          puVar5 = (undefined1 *)((uVar13 | 7) + 1);
        }
        puVar7 = puVar5;
        __Znwm();
        *(ulong *)(puVar4 + -400) = uVar13;
        *(ulong *)(puVar4 + -0x188) = (ulong)puVar5 | 0x8000000000000000;
        *(undefined1 **)(puVar4 + -0x198) = puVar7;
      }
      _memmove(puVar7,uVar22,uVar13);
LAB_10aca0ef8:
      puVar7[uVar13] = 0;
      FUN_10ac9e388(plVar8,puVar4 + -0x198,0);
      plVar18 = plVar8 + 7;
      plVar17 = plVar18;
      func_0x000107c2b05c(plVar18,puVar4 + -0x198);
      plVar20 = (long *)plVar8[8];
      if (plVar20 != (long *)0x0) {
        puVar21 = (undefined *)((long)plVar20 + -1);
        if (((ulong)plVar20 & (ulong)puVar21) == 0) {
          unaff_x26 = (long *)((ulong)puVar21 & (ulong)plVar17);
        }
        else {
          unaff_x26 = plVar17;
          if (plVar20 <= plVar17) {
            uVar13 = 0;
            if (plVar20 != (long *)0x0) {
              uVar13 = (ulong)plVar17 / (ulong)plVar20;
            }
            unaff_x26 = (long *)((long)plVar17 - uVar13 * (long)plVar20);
          }
        }
        plVar11 = *(long **)(*plVar18 + (long)unaff_x26 * 8);
        if (plVar11 != (long *)0x0) {
          for (plVar11 = (long *)*plVar11; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
            plVar12 = (long *)plVar11[1];
            if (plVar12 == plVar17) {
              plVar12 = plVar18;
              func_0x000107c2b068(plVar18,plVar11 + 2,puVar4 + -0x198);
              if (((ulong)plVar12 & 1) != 0) goto LAB_10aca1174;
            }
            else {
              if (((ulong)plVar20 & (ulong)puVar21) == 0) {
                plVar12 = (long *)((ulong)plVar12 & (ulong)puVar21);
              }
              else if (plVar20 <= plVar12) {
                uVar13 = 0;
                if (plVar20 != (long *)0x0) {
                  uVar13 = (ulong)plVar12 / (ulong)plVar20;
                }
                plVar12 = (long *)((long)plVar12 - uVar13 * (long)plVar20);
              }
              if (plVar12 != unaff_x26) break;
            }
          }
        }
      }
      puVar9 = (undefined8 *)0x60;
      __Znwm();
      *(undefined8 **)(puVar4 + -0x180) = puVar9;
      *(long **)(puVar4 + -0x178) = plVar18;
      *(undefined8 *)(puVar4 + -0x170) = 0;
      *puVar9 = 0;
      puVar9[1] = plVar17;
      if ((char)puVar4[-0x181] < '\0') {
        func_0x000107c3192c(puVar9 + 2,*(undefined8 *)(puVar4 + -0x198),
                            *(undefined8 *)(puVar4 + -400));
      }
      else {
        uVar22 = *(undefined8 *)(puVar4 + -0x198);
        puVar9[3] = *(undefined8 *)(puVar4 + -400);
        puVar9[2] = uVar22;
        puVar9[4] = *(undefined8 *)(puVar4 + -0x188);
      }
      puVar9[9] = 0;
      puVar9[8] = 0;
      *(undefined1 *)(puVar9 + 6) = 0;
      puVar9[5] = &PTR_FUN_110c6c2d0;
      *(undefined2 *)((long)puVar9 + 0x32) = 0xf;
      puVar9[0xb] = 0;
      puVar9[10] = 0;
      puVar6 = (undefined8 *)0x20;
      __Znwm();
      *puVar6 = &PTR_FUN_110c6bc10;
      func_0x000105007b50(puVar6 + 1,plVar16);
      plVar16 = (long *)puVar9[0xb];
      puVar9[0xb] = puVar6;
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar16 + 8))();
      }
      puVar4[-0x170] = 1;
      if ((plVar20 == (long *)0x0) ||
         (*(float *)(plVar8 + 0xb) * (float)plVar20 < (float)(plVar8[10] + 1))) {
        uVar13 = 1;
        if ((long *)0x2 < plVar20) {
          uVar13 = (ulong)(((ulong)plVar20 & (ulong)((long)plVar20 + -1)) != 0);
        }
        uVar13 = uVar13 | (long)plVar20 << 1;
        uVar15 = (ulong)((float)(plVar8[10] + 1) / *(float *)(plVar8 + 0xb));
        if (uVar13 <= uVar15) {
          uVar13 = uVar15;
        }
        FUN_10a4ba824(plVar18,uVar13);
        plVar20 = (long *)plVar8[8];
        if (((ulong)plVar20 & (ulong)((long)plVar20 + -1)) == 0) {
          unaff_x26 = (long *)((ulong)((long)plVar20 + -1) & (ulong)plVar17);
        }
        else {
          unaff_x26 = plVar17;
          if (plVar20 <= plVar17) {
            uVar13 = 0;
            if (plVar20 != (long *)0x0) {
              uVar13 = (ulong)plVar17 / (ulong)plVar20;
            }
            unaff_x26 = (long *)((long)plVar17 - uVar13 * (long)plVar20);
          }
        }
      }
      lVar14 = *plVar18;
      plVar16 = *(long **)(lVar14 + (long)unaff_x26 * 8);
      if (plVar16 == (long *)0x0) {
        plVar16 = plVar8 + 9;
        plVar17 = *(long **)(puVar4 + -0x180);
        *plVar17 = *plVar16;
        *plVar16 = (long)plVar17;
        *(long **)(lVar14 + (long)unaff_x26 * 8) = plVar16;
        plVar11 = *(long **)(puVar4 + -0x180);
        if (*plVar11 != 0) {
          plVar16 = *(long **)(*plVar11 + 8);
          if (((ulong)plVar20 & (ulong)((long)plVar20 + -1)) == 0) {
            plVar16 = (long *)((ulong)plVar16 & (ulong)((long)plVar20 + -1));
          }
          else if (plVar20 <= plVar16) {
            uVar13 = 0;
            if (plVar20 != (long *)0x0) {
              uVar13 = (ulong)plVar16 / (ulong)plVar20;
            }
            plVar16 = (long *)((long)plVar16 - uVar13 * (long)plVar20);
          }
          *(long **)(*plVar18 + (long)plVar16 * 8) = plVar11;
          plVar11 = *(long **)(puVar4 + -0x180);
        }
      }
      else {
        plVar11 = *(long **)(puVar4 + -0x180);
        *plVar11 = *plVar16;
        *plVar16 = (long)plVar11;
      }
      plVar8[10] = plVar8[10] + 1;
LAB_10aca1174:
      plVar16 = plVar8;
      func_0x00010a5499ec(plVar8,1,plVar11 + 5,puVar4 + -0x198);
      if (*(char *)(plVar8[0x11] + 8) == '\x01') {
        FUN_10a54a030(puVar4 + -0x180,plVar8 + 5);
        plVar16 = plVar8 + 0x10;
        FUN_10a549a74(plVar16,puVar4 + -0x180,puVar4 + -0x198);
        plVar8 = *(long **)(puVar4 + -0x178);
        if (plVar8 != (long *)0x0) {
          plVar18 = plVar8 + 1;
          do {
            lVar14 = *plVar18;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar3) {
              *plVar18 = lVar14 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
            plVar16 = plVar8;
          }
        }
      }
      if ((char)puVar4[-0x181] < '\0') {
        plVar16 = *(long **)(puVar4 + -0x198);
        __ZdlPv(plVar16);
      }
      return plVar16;
    }
    if (uVar13 < 0x17) {
      puVar4[-0xe9] = (char)uVar13;
      if (uVar13 == 0) goto LAB_10aca0b34;
    }
    else {
      puVar7 = (undefined1 *)0x19;
      if ((uVar13 | 7) != 0x17) {
        puVar7 = (undefined1 *)((uVar13 | 7) + 1);
      }
      puVar5 = puVar7;
      __Znwm();
      *(ulong *)(puVar4 + -0xf8) = uVar13;
      *(ulong *)(puVar4 + -0xf0) = (ulong)puVar7 | 0x8000000000000000;
      *(undefined1 **)(puVar4 + -0x100) = puVar5;
    }
    _memmove(puVar5,uVar22,uVar13);
    puVar7 = puVar5;
LAB_10aca0b34:
    puVar7[uVar13] = 0;
    FUN_10ac9e388(plVar18,puVar4 + -0x100,0);
    plVar8 = plVar18 + 7;
    plVar17 = plVar8;
    func_0x000107c2b05c(plVar8,puVar4 + -0x100);
    plVar20 = (long *)plVar18[8];
    if (plVar20 != (long *)0x0) {
      puVar21 = (undefined *)((long)plVar20 + -1);
      if (((ulong)plVar20 & (ulong)puVar21) == 0) {
        unaff_x25 = (long *)((ulong)puVar21 & (ulong)plVar17);
      }
      else {
        unaff_x25 = plVar17;
        if (plVar20 <= plVar17) {
          uVar13 = 0;
          if (plVar20 != (long *)0x0) {
            uVar13 = (ulong)plVar17 / (ulong)plVar20;
          }
          unaff_x25 = (long *)((long)plVar17 - uVar13 * (long)plVar20);
        }
      }
      plVar11 = *(long **)(*plVar8 + (long)unaff_x25 * 8);
      if (plVar11 != (long *)0x0) {
        for (plVar11 = (long *)*plVar11; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
          plVar12 = (long *)plVar11[1];
          if (plVar12 == plVar17) {
            plVar12 = plVar8;
            func_0x000107c2b068(plVar8,plVar11 + 2,puVar4 + -0x100);
            if (((ulong)plVar12 & 1) != 0) goto LAB_10aca0d78;
          }
          else {
            if (((ulong)plVar20 & (ulong)puVar21) == 0) {
              plVar12 = (long *)((ulong)plVar12 & (ulong)puVar21);
            }
            else if (plVar20 <= plVar12) {
              uVar13 = 0;
              if (plVar20 != (long *)0x0) {
                uVar13 = (ulong)plVar12 / (ulong)plVar20;
              }
              plVar12 = (long *)((long)plVar12 - uVar13 * (long)plVar20);
            }
            if (plVar12 != unaff_x25) break;
          }
        }
      }
    }
    puVar9 = (undefined8 *)0x60;
    __Znwm();
    *(undefined8 **)(puVar4 + -0xe8) = puVar9;
    *(long **)(puVar4 + -0xe0) = plVar8;
    *(undefined8 *)(puVar4 + -0xd8) = 0;
    *puVar9 = 0;
    puVar9[1] = plVar17;
    if ((char)puVar4[-0xe9] < '\0') {
      func_0x000107c3192c(puVar9 + 2,*(undefined8 *)(puVar4 + -0x100),
                          *(undefined8 *)(puVar4 + -0xf8));
    }
    else {
      uVar22 = *(undefined8 *)(puVar4 + -0x100);
      puVar9[3] = *(undefined8 *)(puVar4 + -0xf8);
      puVar9[2] = uVar22;
      puVar9[4] = *(undefined8 *)(puVar4 + -0xf0);
    }
    *(undefined1 *)(puVar9 + 6) = 0;
    puVar9[5] = &PTR_FUN_110c6c2d0;
    *(undefined2 *)((long)puVar9 + 0x32) = 3;
    puVar9[9] = 0;
    puVar9[8] = 0;
    puVar9[0xb] = 0;
    puVar9[10] = 0;
    *(int *)(puVar9 + 7) = (int)*plVar16;
    puVar4[-0xd8] = 1;
    if ((plVar20 == (long *)0x0) ||
       (*(float *)(plVar18 + 0xb) * (float)plVar20 < (float)(plVar18[10] + 1))) {
      uVar13 = 1;
      if ((long *)0x2 < plVar20) {
        uVar13 = (ulong)(((ulong)plVar20 & (ulong)((long)plVar20 + -1)) != 0);
      }
      uVar13 = uVar13 | (long)plVar20 << 1;
      uVar15 = (ulong)((float)(plVar18[10] + 1) / *(float *)(plVar18 + 0xb));
      if (uVar13 <= uVar15) {
        uVar13 = uVar15;
      }
      FUN_10a4ba824(plVar8,uVar13);
      plVar20 = (long *)plVar18[8];
      if (((ulong)plVar20 & (ulong)((long)plVar20 + -1)) == 0) {
        unaff_x25 = (long *)((ulong)((long)plVar20 + -1) & (ulong)plVar17);
      }
      else {
        unaff_x25 = plVar17;
        if (plVar20 <= plVar17) {
          uVar13 = 0;
          if (plVar20 != (long *)0x0) {
            uVar13 = (ulong)plVar17 / (ulong)plVar20;
          }
          unaff_x25 = (long *)((long)plVar17 - uVar13 * (long)plVar20);
        }
      }
    }
    lVar14 = *plVar8;
    plVar16 = *(long **)(lVar14 + (long)unaff_x25 * 8);
    if (plVar16 == (long *)0x0) {
      plVar16 = plVar18 + 9;
      plVar17 = *(long **)(puVar4 + -0xe8);
      *plVar17 = *plVar16;
      *plVar16 = (long)plVar17;
      *(long **)(lVar14 + (long)unaff_x25 * 8) = plVar16;
      plVar11 = *(long **)(puVar4 + -0xe8);
      if (*plVar11 != 0) {
        plVar16 = *(long **)(*plVar11 + 8);
        if (((ulong)plVar20 & (ulong)((long)plVar20 + -1)) == 0) {
          plVar16 = (long *)((ulong)plVar16 & (ulong)((long)plVar20 + -1));
        }
        else if (plVar20 <= plVar16) {
          uVar13 = 0;
          if (plVar20 != (long *)0x0) {
            uVar13 = (ulong)plVar16 / (ulong)plVar20;
          }
          plVar16 = (long *)((long)plVar16 - uVar13 * (long)plVar20);
        }
        *(long **)(*plVar8 + (long)plVar16 * 8) = plVar11;
        plVar11 = *(long **)(puVar4 + -0xe8);
      }
    }
    else {
      plVar11 = *(long **)(puVar4 + -0xe8);
      *plVar11 = *plVar16;
      *plVar16 = (long)plVar11;
    }
    plVar18[10] = plVar18[10] + 1;
LAB_10aca0d78:
    plVar8 = plVar18;
    func_0x00010a5499ec(plVar18,1,plVar11 + 5,puVar4 + -0x100);
    if (*(char *)(plVar18[0x11] + 8) == '\x01') {
      FUN_10a54a030(puVar4 + -0xe8,plVar18 + 5);
      plVar8 = plVar18 + 0x10;
      FUN_10a549a74(plVar8,puVar4 + -0xe8,puVar4 + -0x100);
      plVar16 = *(long **)(puVar4 + -0xe0);
      if (plVar16 != (long *)0x0) {
        plVar18 = plVar16 + 1;
        do {
          lVar14 = *plVar18;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar3) {
            *plVar18 = lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
          plVar8 = plVar16;
        }
      }
    }
    if ((char)puVar4[-0xe9] < '\0') {
      plVar8 = *(long **)(puVar4 + -0x100);
      __ZdlPv(plVar8);
    }
    return plVar8;
  }
  if (uVar13 < 0x17) {
    puVar4[-0x69] = (char)uVar13;
    if (uVar13 == 0) goto LAB_10aca0778;
  }
  else {
    puVar5 = (undefined1 *)0x19;
    if ((uVar13 | 7) != 0x17) {
      puVar5 = (undefined1 *)((uVar13 | 7) + 1);
    }
    puVar7 = puVar5;
    __Znwm();
    *(ulong *)(puVar4 + -0x78) = uVar13;
    *(ulong *)(puVar4 + -0x70) = (ulong)puVar5 | 0x8000000000000000;
    *(undefined1 **)(puVar4 + -0x80) = puVar7;
  }
  _memmove(puVar7,puVar6,uVar13);
  puVar19 = puVar7;
LAB_10aca0778:
  puVar19[uVar13] = 0;
  FUN_10ac9e388(plVar8,puVar4 + -0x80,0);
  plVar18 = plVar8 + 7;
  plVar17 = plVar18;
  func_0x000107c2b05c(plVar18,puVar4 + -0x80);
  plVar20 = (long *)plVar8[8];
  if (plVar20 != (long *)0x0) {
    puVar21 = (undefined *)((long)plVar20 + -1);
    if (((ulong)plVar20 & (ulong)puVar21) == 0) {
      unaff_x25 = (long *)((ulong)puVar21 & (ulong)plVar17);
    }
    else {
      unaff_x25 = plVar17;
      if (plVar20 <= plVar17) {
        uVar13 = 0;
        if (plVar20 != (long *)0x0) {
          uVar13 = (ulong)plVar17 / (ulong)plVar20;
        }
        unaff_x25 = (long *)((long)plVar17 - uVar13 * (long)plVar20);
      }
    }
    plVar11 = *(long **)(*plVar18 + (long)unaff_x25 * 8);
    if (plVar11 != (long *)0x0) {
      for (plVar11 = (long *)*plVar11; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
        plVar12 = (long *)plVar11[1];
        if (plVar12 == plVar17) {
          plVar12 = plVar18;
          func_0x000107c2b068(plVar18,plVar11 + 2,puVar4 + -0x80);
          if (((ulong)plVar12 & 1) != 0) goto LAB_10aca09b8;
        }
        else {
          if (((ulong)plVar20 & (ulong)puVar21) == 0) {
            plVar12 = (long *)((ulong)plVar12 & (ulong)puVar21);
          }
          else if (plVar20 <= plVar12) {
            uVar13 = 0;
            if (plVar20 != (long *)0x0) {
              uVar13 = (ulong)plVar12 / (ulong)plVar20;
            }
            plVar12 = (long *)((long)plVar12 - uVar13 * (long)plVar20);
          }
          if (plVar12 != unaff_x25) break;
        }
      }
    }
  }
  puVar9 = (undefined8 *)0x60;
  __Znwm();
  *(undefined8 **)(puVar4 + -0x68) = puVar9;
  *(long **)(puVar4 + -0x60) = plVar18;
  *(undefined8 *)(puVar4 + -0x58) = 0;
  *puVar9 = 0;
  puVar9[1] = plVar17;
  if ((char)puVar4[-0x69] < '\0') {
    func_0x000107c3192c(puVar9 + 2,*(undefined8 *)(puVar4 + -0x80),*(undefined8 *)(puVar4 + -0x78));
  }
  else {
    uVar22 = *(undefined8 *)(puVar4 + -0x80);
    puVar9[3] = *(undefined8 *)(puVar4 + -0x78);
    puVar9[2] = uVar22;
    puVar9[4] = *(undefined8 *)(puVar4 + -0x70);
  }
  *(undefined1 *)(puVar9 + 6) = 0;
  puVar9[5] = &PTR_FUN_110c6c2d0;
  *(undefined2 *)((long)puVar9 + 0x32) = 1;
  puVar9[9] = 0;
  puVar9[8] = 0;
  puVar9[0xb] = 0;
  puVar9[10] = 0;
  *(char *)(puVar9 + 7) = (char)*plVar16;
  puVar4[-0x58] = 1;
  if ((plVar20 == (long *)0x0) ||
     (*(float *)(plVar8 + 0xb) * (float)plVar20 < (float)(plVar8[10] + 1))) {
    uVar13 = 1;
    if ((long *)0x2 < plVar20) {
      uVar13 = (ulong)(((ulong)plVar20 & (ulong)((long)plVar20 + -1)) != 0);
    }
    uVar13 = uVar13 | (long)plVar20 << 1;
    uVar15 = (ulong)((float)(plVar8[10] + 1) / *(float *)(plVar8 + 0xb));
    if (uVar13 <= uVar15) {
      uVar13 = uVar15;
    }
    FUN_10a4ba824(plVar18,uVar13);
    plVar20 = (long *)plVar8[8];
    if (((ulong)plVar20 & (ulong)((long)plVar20 + -1)) == 0) {
      unaff_x25 = (long *)((ulong)((long)plVar20 + -1) & (ulong)plVar17);
    }
    else {
      unaff_x25 = plVar17;
      if (plVar20 <= plVar17) {
        uVar13 = 0;
        if (plVar20 != (long *)0x0) {
          uVar13 = (ulong)plVar17 / (ulong)plVar20;
        }
        unaff_x25 = (long *)((long)plVar17 - uVar13 * (long)plVar20);
      }
    }
  }
  lVar14 = *plVar18;
  plVar16 = *(long **)(lVar14 + (long)unaff_x25 * 8);
  if (plVar16 == (long *)0x0) {
    plVar16 = plVar8 + 9;
    plVar17 = *(long **)(puVar4 + -0x68);
    *plVar17 = *plVar16;
    *plVar16 = (long)plVar17;
    *(long **)(lVar14 + (long)unaff_x25 * 8) = plVar16;
    plVar11 = *(long **)(puVar4 + -0x68);
    if (*plVar11 != 0) {
      plVar16 = *(long **)(*plVar11 + 8);
      if (((ulong)plVar20 & (ulong)((long)plVar20 + -1)) == 0) {
        plVar16 = (long *)((ulong)plVar16 & (ulong)((long)plVar20 + -1));
      }
      else if (plVar20 <= plVar16) {
        uVar13 = 0;
        if (plVar20 != (long *)0x0) {
          uVar13 = (ulong)plVar16 / (ulong)plVar20;
        }
        plVar16 = (long *)((long)plVar16 - uVar13 * (long)plVar20);
      }
      *(long **)(*plVar18 + (long)plVar16 * 8) = plVar11;
      plVar11 = *(long **)(puVar4 + -0x68);
    }
  }
  else {
    plVar11 = *(long **)(puVar4 + -0x68);
    *plVar11 = *plVar16;
    *plVar16 = (long)plVar11;
  }
  plVar8[10] = plVar8[10] + 1;
LAB_10aca09b8:
  plVar16 = plVar8;
  func_0x00010a5499ec(plVar8,1,plVar11 + 5,puVar4 + -0x80);
  if (*(char *)(plVar8[0x11] + 8) == '\x01') {
    FUN_10a54a030(puVar4 + -0x68,plVar8 + 5);
    plVar16 = plVar8 + 0x10;
    FUN_10a549a74(plVar16,puVar4 + -0x68,puVar4 + -0x80);
    plVar8 = *(long **)(puVar4 + -0x60);
    if (plVar8 != (long *)0x0) {
      plVar18 = plVar8 + 1;
      do {
        lVar14 = *plVar18;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar3) {
          *plVar18 = lVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        plVar16 = plVar8;
      }
    }
  }
  if ((char)puVar4[-0x69] < '\0') {
    plVar16 = *(long **)(puVar4 + -0x80);
    __ZdlPv(plVar16);
  }
  return plVar16;
}



/* Entry: 10accba80; end: 10accbb8f;  */

void FUN_10accba80(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10acc8580(param_2,param_3);
  FUN_10accbb90(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  func_0x00010989847c(param_2,param_4 + 0x10);
  func_0x00010accba40(plVar4,&stack0xffffffffffffffa8,&stack0xffffffffffffffa7);
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10accbb90; end: 10accbbb3;  */

void FUN_10accbb90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long **pplVar2;
  long ****pppplVar3;
  long ***ppplVar4;
  char cVar5;
  bool bVar6;
  undefined8 ****ppppuVar7;
  code *pcVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long ****pppplVar13;
  long ***ppplVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined4 *extraout_x8;
  long ***ppplVar17;
  long lVar18;
  long lVar19;
  long ***ppplVar20;
  undefined8 auStack_b8 [2];
  char cStack_a1;
  undefined8 ***pppuStack_a0;
  long **pplStack_98;
  undefined8 uStack_90;
  long **pplStack_88;
  long *plStack_80;
  long ***ppplStack_78;
  undefined8 in_stack_ffffffffffffff98;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar10 = (long *)0x2;
  uVar15 = 0;
  FUN_10a052ee0(2,0,param_1);
  plVar11 = plVar10;
  (**(code **)(*plVar10 + 0x58))();
  if ((ulong)plVar11[0x59] < 8) {
    plVar11[plVar11[0x59] + 0x4e] = plVar11[0x5a];
    plVar11[0x59] = plVar11[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar11 + 0x4b);
  }
  plVar12 = plVar10;
  FUN_10acc8580(plVar10,uVar15);
  FUN_10a43b1c4(param_4);
  func_0x000109898570(&pppuStack_a0,plVar10,param_1);
  func_0x000109898570(auStack_b8,plVar10,param_1 + 0x10);
  if ((char)plVar12[0xc] == '\x01') {
    FUN_10a00946c(&UNK_10f6a1d58);
LAB_10accbde8:
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10accbdec);
    (*pcVar8)();
  }
  pplVar2 = pplStack_98;
  ppppuVar7 = (undefined8 ****)pppuStack_a0;
  if (-1 < (long)uStack_90) {
    pplVar2 = (long **)((ulong)uStack_90 >> 0x38);
    ppppuVar7 = &pppuStack_a0;
  }
  if ((long **)0x7ffffffffffffff7 < pplVar2) {
    func_0x000109ffde50();
    goto LAB_10accbde8;
  }
  if (pplVar2 < (long **)0x17) {
    uVar16 = CONCAT17((char)pplVar2,(int7)in_stack_ffffffffffffff98);
    pppplVar13 = &ppplStack_78;
    if (pplVar2 != (long **)0x0) goto LAB_10accbcc4;
  }
  else {
    pppplVar3 = (long ****)0x19;
    if (((ulong)pplVar2 | 7) != 0x17) {
      pppplVar3 = (long ****)(((ulong)pplVar2 | 7) + 1);
    }
    pppplVar13 = pppplVar3;
    __Znwm();
    uVar16 = (ulong)pppplVar3 | 0x8000000000000000;
    ppplStack_78 = (long ***)pppplVar13;
LAB_10accbcc4:
    _memmove(pppplVar13,ppppuVar7,pplVar2);
  }
  *(undefined1 *)((long)pppplVar13 + (long)pplVar2) = 0;
  FUN_10ac9e388(plVar12,&ppplStack_78,0);
  plVar10 = plVar12 + 7;
  FUN_10a549b04(plVar10,&ppplStack_78,&ppplStack_78,auStack_b8);
  func_0x00010a5499ec(plVar12,1,plVar10 + 5,&ppplStack_78);
  if (*(char *)(plVar12[0x11] + 8) == '\x01') {
    FUN_10a54a030(&pplStack_88,plVar12 + 5);
    FUN_10a549a74(plVar12 + 0x10,&pplStack_88,&ppplStack_78);
    if (plStack_80 != (long *)0x0) {
      plVar10 = plStack_80 + 1;
      do {
        lVar18 = *plVar10;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar6) {
          *plVar10 = lVar18 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plStack_80 + 0x10))(plStack_80);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_80);
      }
    }
  }
  if ((long)uVar16 < 0) {
    __ZdlPv(ppplStack_78);
  }
  if (cStack_a1 < '\0') {
    __ZdlPv(auStack_b8[0]);
  }
  if (uStack_90._7_1_ < '\0') {
    __ZdlPv(pppuStack_a0);
  }
  *extraout_x8 = 0;
  pppplVar3 = (long ****)(plVar11 + 0x4b);
  lVar18 = plVar11[0x59];
  uVar16 = lVar18 - 1;
  plVar11[0x59] = uVar16;
  if (uVar16 < 8) {
    ppplVar14 = pppplVar3[lVar18 + 2];
    if ((long ***)plVar11[0x5a] == ppplVar14) {
      return;
    }
  }
  else {
    ppplVar14 = *(long ****)(plVar11[0x57] + -8);
    plVar11[0x57] = (long)(plVar11[0x57] + -8);
    if ((long ***)plVar11[0x5a] == ppplVar14) {
      return;
    }
  }
  ppplVar4 = *pppplVar3;
  ppplVar17 = (long ***)plVar11[0x4c];
  lVar18 = (long)ppplVar17 - (long)ppplVar4;
  ppplVar20 = (long ***)(lVar18 >> 4);
  if (ppplVar20 < ppplVar14) {
    uVar16 = (long)ppplVar14 - (long)ppplVar20;
    lVar19 = plVar11[0x4d];
    if ((ulong)(lVar19 - (long)ppplVar17 >> 4) < uVar16) {
      if ((ulong)ppplVar14 >> 0x3c == 0) {
        ppplVar17 = (long ***)(lVar19 - (long)ppplVar4 >> 3);
        if (ppplVar17 <= ppplVar14) {
          ppplVar17 = ppplVar14;
        }
        if (0x7fffffffffffffef < (ulong)(lVar19 - (long)ppplVar4)) {
          ppplVar17 = (long ***)0xfffffffffffffff;
        }
        ppplStack_78 = (long ***)pppplVar3;
        if ((ulong)ppplVar17 >> 0x3c == 0) {
          lVar9 = (long)ppplVar17 << 4;
          __Znwm();
          lVar1 = lVar9 + lVar18;
          _bzero(lVar1,uVar16 * 0x10);
          ppplVar20 = (long ***)(lVar1 + (long)ppplVar20 * -0x10);
          _memcpy(ppplVar20,ppplVar4,lVar18);
          *pppplVar3 = ppplVar20;
          plVar11[0x4c] = lVar1 + uVar16 * 0x10;
          plVar11[0x4d] = lVar9 + (long)ppplVar17 * 0x10;
          pplStack_98 = (long **)ppplVar4;
          uStack_90 = ppplVar4;
          pplStack_88 = (long **)ppplVar4;
          plStack_80 = (long *)lVar19;
          func_0x00010988c1b8(&pplStack_98);
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
    _bzero(ppplVar17,uVar16 * 0x10);
    plVar11[0x4c] = (long)(ppplVar17 + uVar16 * 2);
  }
  else if (ppplVar14 < ppplVar20) {
    while (ppplVar17 != ppplVar4 + (long)ppplVar14 * 2) {
      ppplVar17 = ppplVar17 + -2;
      func_0x00010988c204(ppplVar17);
    }
    plVar11[0x4c] = (long)(ppplVar4 + (long)ppplVar14 * 2);
  }
code_r0x00010988c138:
  plVar11[0x5a] = (long)ppplVar14;
  return;
}



/* Entry: 10accbbb4; end: 10accbe5f;  */

void FUN_10accbbb4(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long **pplVar2;
  long ****pppplVar3;
  long ***ppplVar4;
  char cVar5;
  bool bVar6;
  undefined8 ****ppppuVar7;
  code *pcVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long ****pppplVar12;
  long *plVar13;
  long ***ppplVar14;
  ulong uVar15;
  long ***ppplVar16;
  long lVar17;
  long lVar18;
  long ***ppplVar19;
  undefined8 auStack_a8 [2];
  char cStack_91;
  undefined8 ***pppuStack_90;
  long **pplStack_88;
  undefined8 uStack_80;
  long **pplStack_78;
  long *plStack_70;
  long ***ppplStack_68;
  undefined8 in_stack_ffffffffffffffa8;
  
  plVar10 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar10[0x59] < 8) {
    plVar10[plVar10[0x59] + 0x4e] = plVar10[0x5a];
    plVar10[0x59] = plVar10[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar10 + 0x4b);
  }
  plVar11 = param_2;
  FUN_10acc8580(param_2,param_3);
  FUN_10a43b1c4(param_5);
  func_0x000109898570(&pppuStack_90,param_2,param_4);
  func_0x000109898570(auStack_a8,param_2,param_4 + 0x10);
  if ((char)plVar11[0xc] == '\x01') {
    FUN_10a00946c(&UNK_10f6a1d58);
LAB_10accbde8:
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10accbdec);
    (*pcVar8)();
  }
  pplVar2 = pplStack_88;
  ppppuVar7 = (undefined8 ****)pppuStack_90;
  if (-1 < (long)uStack_80) {
    pplVar2 = (long **)((ulong)uStack_80 >> 0x38);
    ppppuVar7 = &pppuStack_90;
  }
  if ((long **)0x7ffffffffffffff7 < pplVar2) {
    func_0x000109ffde50();
    goto LAB_10accbde8;
  }
  if (pplVar2 < (long **)0x17) {
    uVar15 = CONCAT17((char)pplVar2,(int7)in_stack_ffffffffffffffa8);
    pppplVar12 = &ppplStack_68;
    if (pplVar2 != (long **)0x0) goto LAB_10accbcc4;
  }
  else {
    pppplVar3 = (long ****)0x19;
    if (((ulong)pplVar2 | 7) != 0x17) {
      pppplVar3 = (long ****)(((ulong)pplVar2 | 7) + 1);
    }
    pppplVar12 = pppplVar3;
    __Znwm();
    uVar15 = (ulong)pppplVar3 | 0x8000000000000000;
    ppplStack_68 = (long ***)pppplVar12;
LAB_10accbcc4:
    _memmove(pppplVar12,ppppuVar7,pplVar2);
  }
  *(undefined1 *)((long)pppplVar12 + (long)pplVar2) = 0;
  FUN_10ac9e388(plVar11,&ppplStack_68,0);
  plVar13 = plVar11 + 7;
  FUN_10a549b04(plVar13,&ppplStack_68,&ppplStack_68,auStack_a8);
  func_0x00010a5499ec(plVar11,1,plVar13 + 5,&ppplStack_68);
  if (*(char *)(plVar11[0x11] + 8) == '\x01') {
    FUN_10a54a030(&pplStack_78,plVar11 + 5);
    FUN_10a549a74(plVar11 + 0x10,&pplStack_78,&ppplStack_68);
    if (plStack_70 != (long *)0x0) {
      plVar11 = plStack_70 + 1;
      do {
        lVar17 = *plVar11;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = lVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plStack_70 + 0x10))(plStack_70);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
      }
    }
  }
  if ((long)uVar15 < 0) {
    __ZdlPv(ppplStack_68);
  }
  if (cStack_91 < '\0') {
    __ZdlPv(auStack_a8[0]);
  }
  if (uStack_80._7_1_ < '\0') {
    __ZdlPv(pppuStack_90);
  }
  *param_1 = 0;
  pppplVar3 = (long ****)(plVar10 + 0x4b);
  lVar17 = plVar10[0x59];
  uVar15 = lVar17 - 1;
  plVar10[0x59] = uVar15;
  if (uVar15 < 8) {
    ppplVar14 = pppplVar3[lVar17 + 2];
    if ((long ***)plVar10[0x5a] == ppplVar14) {
      return;
    }
  }
  else {
    ppplVar14 = *(long ****)(plVar10[0x57] + -8);
    plVar10[0x57] = (long)(plVar10[0x57] + -8);
    if ((long ***)plVar10[0x5a] == ppplVar14) {
      return;
    }
  }
  ppplVar4 = *pppplVar3;
  ppplVar16 = (long ***)plVar10[0x4c];
  lVar17 = (long)ppplVar16 - (long)ppplVar4;
  ppplVar19 = (long ***)(lVar17 >> 4);
  if (ppplVar19 < ppplVar14) {
    uVar15 = (long)ppplVar14 - (long)ppplVar19;
    lVar18 = plVar10[0x4d];
    if ((ulong)(lVar18 - (long)ppplVar16 >> 4) < uVar15) {
      if ((ulong)ppplVar14 >> 0x3c == 0) {
        ppplVar16 = (long ***)(lVar18 - (long)ppplVar4 >> 3);
        if (ppplVar16 <= ppplVar14) {
          ppplVar16 = ppplVar14;
        }
        if (0x7fffffffffffffef < (ulong)(lVar18 - (long)ppplVar4)) {
          ppplVar16 = (long ***)0xfffffffffffffff;
        }
        ppplStack_68 = (long ***)pppplVar3;
        if ((ulong)ppplVar16 >> 0x3c == 0) {
          lVar9 = (long)ppplVar16 << 4;
          __Znwm();
          lVar1 = lVar9 + lVar17;
          _bzero(lVar1,uVar15 * 0x10);
          ppplVar19 = (long ***)(lVar1 + (long)ppplVar19 * -0x10);
          _memcpy(ppplVar19,ppplVar4,lVar17);
          *pppplVar3 = ppplVar19;
          plVar10[0x4c] = lVar1 + uVar15 * 0x10;
          plVar10[0x4d] = lVar9 + (long)ppplVar16 * 0x10;
          pplStack_88 = (long **)ppplVar4;
          uStack_80 = ppplVar4;
          pplStack_78 = (long **)ppplVar4;
          plStack_70 = (long *)lVar18;
          func_0x00010988c1b8(&pplStack_88);
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
    _bzero(ppplVar16,uVar15 * 0x10);
    plVar10[0x4c] = (long)(ppplVar16 + uVar15 * 2);
  }
  else if (ppplVar14 < ppplVar19) {
    while (ppplVar16 != ppplVar4 + (long)ppplVar14 * 2) {
      ppplVar16 = ppplVar16 + -2;
      func_0x00010988c204(ppplVar16);
    }
    plVar10[0x4c] = (long)(ppplVar4 + (long)ppplVar14 * 2);
  }
code_r0x00010988c138:
  plVar10[0x5a] = (long)ppplVar14;
  return;
}



/* Entry: 10accbe60; end: 10accbe9f;  */

long ****** FUN_10accbe60(long ******param_1,undefined8 *param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long ****pppplVar12;
  long ******pppppplVar13;
  ulong uVar14;
  long *****ppppplVar15;
  long ******pppppplVar16;
  long ******pppppplVar17;
  undefined4 *extraout_x8;
  long *****ppppplVar18;
  ulong uVar19;
  long ****pppplVar20;
  long ******pppppplVar21;
  long *****ppppplVar22;
  long *****ppppplVar23;
  long ******pppppplVar24;
  long *****ppppplVar25;
  long ******unaff_x25;
  undefined1 *puVar26;
  long ******unaff_x26;
  long ******unaff_x27;
  long ****pppplStack_2a0;
  long ***ppplStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long *****ppppplStack_248;
  long *****ppppplStack_240;
  undefined8 uStack_238;
  long ****pppplStack_230;
  long *****ppppplStack_228;
  undefined8 uStack_220;
  long *****ppppplStack_1b8;
  long *****ppppplStack_1b0;
  undefined8 uStack_1a8;
  long ****pppplStack_1a0;
  long *****ppppplStack_198;
  undefined8 uStack_190;
  long *****ppppplStack_118;
  long *****ppppplStack_110;
  undefined8 uStack_108;
  long ****pppplStack_100;
  long *****ppppplStack_f8;
  undefined8 uStack_f0;
  long *****ppppplStack_98;
  long ****pppplStack_90;
  long ****pppplStack_88;
  long *****ppppplStack_80;
  long *****ppppplStack_78;
  long in_stack_ffffffffffffff90;
  undefined8 in_stack_ffffffffffffff98;
  long ******in_stack_ffffffffffffffa0;
  long in_stack_ffffffffffffffa8;
  
  if (*(char *)(param_1 + 0xc) == '\x01') {
    plVar7 = (long *)&UNK_10f6a1d58;
    FUN_10a00946c();
    plVar8 = plVar7;
    (**(code **)(*plVar7 + 0x58))();
    if ((ulong)plVar8[0x59] < 8) {
      plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
      plVar8[0x59] = plVar8[0x59] + 1;
    }
    else {
      func_0x00010988bfcc(plVar8 + 0x4b);
    }
    plVar9 = plVar7;
    FUN_10acc8580(plVar7,param_2);
    FUN_10accbfe0(param_4);
    func_0x000109898570(&stack0xffffffffffffff98,plVar7,param_3);
    if ((int)param_3[2] != 3) {
      func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10accbfb4);
      (*pcVar5)();
    }
    FUN_10accbe60(plVar9,&stack0xffffffffffffff98,&stack0xffffffffffffff94);
    if (in_stack_ffffffffffffffa8 < 0) {
      __ZdlPv(in_stack_ffffffffffffff98);
    }
    *extraout_x8 = 0;
    pppppplVar21 = (long ******)(plVar8 + 0x4b);
    lVar11 = plVar8[0x59];
    uVar14 = lVar11 - 1;
    plVar8[0x59] = uVar14;
    if (uVar14 < 8) {
      ppppplVar22 = pppppplVar21[lVar11 + 2];
      if ((long *****)plVar8[0x5a] == ppppplVar22) {
        return pppppplVar21;
      }
    }
    else {
      ppppplVar22 = *(long ******)(plVar8[0x57] + -8);
      plVar8[0x57] = (long)(plVar8[0x57] + -8);
      if ((long *****)plVar8[0x5a] == ppppplVar22) {
        return pppppplVar21;
      }
    }
    ppppplVar15 = *pppppplVar21;
    pppppplVar16 = (long ******)plVar8[0x4c];
    lVar11 = (long)pppppplVar16 - (long)ppppplVar15;
    ppppplVar25 = (long *****)(lVar11 >> 4);
    if (ppppplVar25 < ppppplVar22) {
      uVar14 = (long)ppppplVar22 - (long)ppppplVar25;
      ppppplVar23 = (long *****)plVar8[0x4d];
      if ((ulong)((long)ppppplVar23 - (long)pppppplVar16 >> 4) < uVar14) {
        if ((ulong)ppppplVar22 >> 0x3c == 0) {
          ppppplVar18 = (long *****)((long)ppppplVar23 - (long)ppppplVar15 >> 3);
          if (ppppplVar18 <= ppppplVar22) {
            ppppplVar18 = ppppplVar22;
          }
          if (0x7fffffffffffffef < (ulong)((long)ppppplVar23 - (long)ppppplVar15)) {
            ppppplVar18 = (long *****)0xfffffffffffffff;
          }
          ppppplStack_78 = (long *****)pppppplVar21;
          if ((ulong)ppppplVar18 >> 0x3c == 0) {
            lVar6 = (long)ppppplVar18 << 4;
            __Znwm();
            lVar1 = lVar6 + lVar11;
            _bzero(lVar1,uVar14 * 0x10);
            ppppplVar25 = (long *****)(lVar1 + (long)ppppplVar25 * -0x10);
            _memcpy(ppppplVar25,ppppplVar15,lVar11);
            *pppppplVar21 = ppppplVar25;
            plVar8[0x4c] = lVar1 + uVar14 * 0x10;
            plVar8[0x4d] = lVar6 + (long)ppppplVar18 * 0x10;
            pppppplVar21 = &ppppplStack_98;
            ppppplStack_98 = ppppplVar15;
            pppplStack_90 = (long ****)ppppplVar15;
            pppplStack_88 = (long ****)ppppplVar15;
            ppppplStack_80 = ppppplVar23;
            func_0x00010988c1b8(pppppplVar21);
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
      pppppplVar21 = pppppplVar16;
      _bzero(pppppplVar16,uVar14 * 0x10);
      plVar8[0x4c] = (long)(pppppplVar16 + uVar14 * 2);
    }
    else if (ppppplVar22 < ppppplVar25) {
      while (pppppplVar16 != (long ******)(ppppplVar15 + (long)ppppplVar22 * 2)) {
        pppppplVar16 = pppppplVar16 + -2;
        pppppplVar21 = pppppplVar16;
        func_0x00010988c204(pppppplVar16);
      }
      plVar8[0x4c] = (long)(ppppplVar15 + (long)ppppplVar22 * 2);
    }
code_r0x00010988c138:
    plVar8[0x5a] = (long)ppppplVar22;
    return pppppplVar21;
  }
  pppppplVar21 = (long ******)param_2[1];
  puVar4 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    pppppplVar21 = (long ******)(ulong)*(byte *)((long)param_2 + 0x17);
    puVar4 = param_2;
  }
  pppppplVar16 = &ppppplStack_80;
  pppppplVar24 = &ppppplStack_80;
  if ((long ******)0x7ffffffffffffff7 < pppppplVar21) {
    func_0x000109ffde50();
    uVar10 = 0;
    func_0x00010a4baa30(&stack0xffffffffffffff98,0);
    if (in_stack_ffffffffffffff90 < 0) {
      __ZdlPv(ppppplStack_80);
    }
    pppppplVar16 = param_1;
    __Unwind_Resume();
    pppplStack_88 = (long ****)FUN_10aca0e6c;
    ppppplStack_98 = (long *****)param_1;
    pppplStack_90 = (long ****)&stack0xfffffffffffffff0;
    if ((long ******)0x7ffffffffffffff7 < pppppplVar21) {
      func_0x000109ffde50();
      uVar10 = 0;
      func_0x00010a4baa30(&pppplStack_100,0);
      if (uStack_108._7_1_ < '\0') {
        __ZdlPv(ppppplStack_118);
      }
      __Unwind_Resume();
      if ((long ******)0x7ffffffffffffff7 < pppppplVar21) {
        func_0x000109ffde50();
        uVar10 = 0;
        func_0x00010a4baa30(&pppplStack_1a0,0);
        if (uStack_1a8._7_1_ < '\0') {
          __ZdlPv(ppppplStack_1b8);
        }
        __Unwind_Resume();
        if ((long ******)0x7ffffffffffffff7 < pppppplVar21) {
          func_0x000109ffde50();
          func_0x00010a4baa30(&pppplStack_230,0);
          if (uStack_238._7_1_ < '\0') {
            __ZdlPv(ppppplStack_248);
          }
          __Unwind_Resume();
          pppppplVar21 = (long ******)&pppplStack_2a0;
          if (pppppplVar16 == (long ******)0x0) {
            pppppplVar21 = (long ******)0x0;
          }
          else {
            pppplStack_2a0 = &ppplStack_298;
            ppplStack_298 = (long ***)0x0;
            uStack_290 = 0;
            uStack_288 = 0;
            uStack_280 = 0;
            uStack_278 = 0;
            func_0x00010983a984();
            if (((ulong)pppppplVar21 & 1) != 0) {
              FUN_10aca02f8(pppppplVar16,&pppplStack_2a0);
            }
            func_0x000109839668(&pppplStack_2a0);
          }
          return pppppplVar21;
        }
        if (pppppplVar21 < (long ******)0x17) {
          uStack_238 = (long ****)CONCAT17((char)pppppplVar21,(undefined7)uStack_238);
          pppppplVar13 = &ppppplStack_248;
          if (pppppplVar21 == (long ******)0x0) goto LAB_10aca17ac;
        }
        else {
          pppppplVar24 = (long ******)0x19;
          if (((ulong)pppppplVar21 | 7) != 0x17) {
            pppppplVar24 = (long ******)(((ulong)pppppplVar21 | 7) + 1);
          }
          pppppplVar13 = pppppplVar24;
          __Znwm();
          uStack_238 = (long ****)((ulong)pppppplVar24 | 0x8000000000000000);
          ppppplStack_248 = (long *****)pppppplVar13;
          ppppplStack_240 = (long *****)pppppplVar21;
        }
        _memmove(pppppplVar13,uVar10,pppppplVar21);
LAB_10aca17ac:
        *(undefined1 *)((long)pppppplVar13 + (long)pppppplVar21) = 0;
        FUN_10ac9e388(pppppplVar16,&ppppplStack_248,0);
        pppppplVar21 = pppppplVar16 + 7;
        pppppplVar24 = pppppplVar21;
        func_0x000107c2b05c(pppppplVar21,&ppppplStack_248);
        pppppplVar13 = (long ******)pppppplVar16[8];
        if (pppppplVar13 != (long ******)0x0) {
          puVar26 = (undefined1 *)((long)pppppplVar13 + -1);
          if (((ulong)pppppplVar13 & (ulong)puVar26) == 0) {
            unaff_x25 = (long ******)((ulong)puVar26 & (ulong)pppppplVar24);
          }
          else {
            unaff_x25 = pppppplVar24;
            if (pppppplVar13 <= pppppplVar24) {
              uVar14 = 0;
              if (pppppplVar13 != (long ******)0x0) {
                uVar14 = (ulong)pppppplVar24 / (ulong)pppppplVar13;
              }
              unaff_x25 = (long ******)((long)pppppplVar24 - uVar14 * (long)pppppplVar13);
            }
          }
          if ((*pppppplVar21)[(long)unaff_x25] != (long ****)0x0) {
            for (ppppplVar22 = (long *****)*(*pppppplVar21)[(long)unaff_x25];
                ppppplVar22 != (long *****)0x0; ppppplVar22 = (long *****)*ppppplVar22) {
              pppppplVar17 = (long ******)ppppplVar22[1];
              if (pppppplVar17 == pppppplVar24) {
                pppppplVar17 = pppppplVar21;
                func_0x000107c2b068(pppppplVar21,ppppplVar22 + 2,&ppppplStack_248);
                if (((ulong)pppppplVar17 & 1) != 0) goto LAB_10aca19fc;
              }
              else {
                if (((ulong)pppppplVar13 & (ulong)puVar26) == 0) {
                  pppppplVar17 = (long ******)((ulong)pppppplVar17 & (ulong)puVar26);
                }
                else if (pppppplVar13 <= pppppplVar17) {
                  uVar14 = 0;
                  if (pppppplVar13 != (long ******)0x0) {
                    uVar14 = (ulong)pppppplVar17 / (ulong)pppppplVar13;
                  }
                  pppppplVar17 = (long ******)((long)pppppplVar17 - uVar14 * (long)pppppplVar13);
                }
                if (pppppplVar17 != unaff_x25) break;
              }
            }
          }
        }
        ppppplVar22 = (long *****)0x60;
        __Znwm();
        uStack_220 = 0;
        *ppppplVar22 = (long ****)0x0;
        ppppplVar22[1] = (long ****)pppppplVar24;
        pppplStack_230 = (long ****)ppppplVar22;
        ppppplStack_228 = (long *****)pppppplVar21;
        if ((long)uStack_238 < 0) {
          func_0x000107c3192c(ppppplVar22 + 2,ppppplStack_248,ppppplStack_240);
        }
        else {
          ppppplVar22[3] = (long ****)ppppplStack_240;
          ppppplVar22[2] = (long ****)ppppplStack_248;
          ppppplVar22[4] = uStack_238;
        }
        ppppplVar22[5] = (long ****)&PTR_FUN_110c6c2d0;
        *(undefined1 *)(ppppplVar22 + 6) = 0;
        *(undefined2 *)((long)ppppplVar22 + 0x32) = 0xf;
        ppppplVar22[9] = (long ****)0x0;
        ppppplVar22[8] = (long ****)0x0;
        ppppplVar22[0xb] = (long ****)0x0;
        ppppplVar22[10] = (long ****)0x0;
        FUN_10acc4edc(ppppplVar22 + 5,*param_3,param_3[1]);
        uStack_220 = CONCAT71(uStack_220._1_7_,1);
        if ((pppppplVar13 == (long ******)0x0) ||
           (*(float *)(pppppplVar16 + 0xb) * (float)pppppplVar13 <
            (float)((long)pppppplVar16[10] + 1))) {
          uVar14 = 1;
          if ((long ******)0x2 < pppppplVar13) {
            uVar14 = (ulong)(((ulong)pppppplVar13 & (ulong)((long)pppppplVar13 + -1)) != 0);
          }
          uVar14 = uVar14 | (long)pppppplVar13 << 1;
          uVar19 = (ulong)((float)((long)pppppplVar16[10] + 1) / *(float *)(pppppplVar16 + 0xb));
          if (uVar14 <= uVar19) {
            uVar14 = uVar19;
          }
          FUN_10a4ba824(pppppplVar21,uVar14);
          pppppplVar13 = (long ******)pppppplVar16[8];
          if (((ulong)pppppplVar13 & (ulong)((long)pppppplVar13 + -1)) == 0) {
            unaff_x25 = (long ******)((ulong)((long)pppppplVar13 + -1) & (ulong)pppppplVar24);
          }
          else {
            unaff_x25 = pppppplVar24;
            if (pppppplVar13 <= pppppplVar24) {
              uVar14 = 0;
              if (pppppplVar13 != (long ******)0x0) {
                uVar14 = (ulong)pppppplVar24 / (ulong)pppppplVar13;
              }
              unaff_x25 = (long ******)((long)pppppplVar24 - uVar14 * (long)pppppplVar13);
            }
          }
        }
        ppppplVar22 = *pppppplVar21;
        pppplVar12 = ppppplVar22[(long)unaff_x25];
        if (pppplVar12 == (long ****)0x0) {
          pppppplVar24 = pppppplVar16 + 9;
          *pppplStack_230 = (long ***)*pppppplVar24;
          *pppppplVar24 = (long *****)pppplStack_230;
          ppppplVar22[(long)unaff_x25] = (long ****)pppppplVar24;
          if ((long ****)*pppplStack_230 != (long ****)0x0) {
            pppppplVar24 = (long ******)(*pppplStack_230)[1];
            if (((ulong)pppppplVar13 & (ulong)((long)pppppplVar13 + -1)) == 0) {
              pppppplVar24 = (long ******)((ulong)pppppplVar24 & (ulong)((long)pppppplVar13 + -1));
            }
            else if (pppppplVar13 <= pppppplVar24) {
              uVar14 = 0;
              if (pppppplVar13 != (long ******)0x0) {
                uVar14 = (ulong)pppppplVar24 / (ulong)pppppplVar13;
              }
              pppppplVar24 = (long ******)((long)pppppplVar24 - uVar14 * (long)pppppplVar13);
            }
            (*pppppplVar21)[(long)pppppplVar24] = pppplStack_230;
          }
        }
        else {
          *pppplStack_230 = *pppplVar12;
          *pppplVar12 = (long ***)pppplStack_230;
        }
        pppppplVar16[10] = (long *****)((long)pppppplVar16[10] + 1);
        ppppplVar22 = (long *****)pppplStack_230;
LAB_10aca19fc:
        pppppplVar21 = pppppplVar16;
        func_0x00010a5499ec(pppppplVar16,1,ppppplVar22 + 5,&ppppplStack_248);
        if (*(char *)(pppppplVar16[0x11] + 1) == '\x01') {
          FUN_10a54a030(&pppplStack_230,pppppplVar16 + 5);
          pppppplVar21 = pppppplVar16 + 0x10;
          FUN_10a549a74(pppppplVar21,&pppplStack_230,&ppppplStack_248);
          pppppplVar16 = (long ******)ppppplStack_228;
          if ((long ******)ppppplStack_228 != (long ******)0x0) {
            pppppplVar24 = (long ******)(ppppplStack_228 + 1);
            do {
              ppppplVar22 = *pppppplVar24;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pppppplVar24,0x10);
              if (bVar3) {
                *pppppplVar24 = (long *****)((long)ppppplVar22 + -1);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (ppppplVar22 == (long *****)0x0) {
              (*(code *)(*ppppplStack_228)[2])(ppppplStack_228);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar16);
              pppppplVar21 = pppppplVar16;
            }
          }
        }
        if ((long)uStack_238 < 0) {
          __ZdlPv(ppppplStack_248);
          pppppplVar21 = (long ******)ppppplStack_248;
        }
        return pppppplVar21;
      }
      if (pppppplVar21 < (long ******)0x17) {
        uStack_1a8 = (long ****)CONCAT17((char)pppppplVar21,(undefined7)uStack_1a8);
        pppppplVar13 = &ppppplStack_1b8;
        if (pppppplVar21 == (long ******)0x0) goto LAB_10aca1348;
      }
      else {
        pppppplVar24 = (long ******)0x19;
        if (((ulong)pppppplVar21 | 7) != 0x17) {
          pppppplVar24 = (long ******)(((ulong)pppppplVar21 | 7) + 1);
        }
        pppppplVar13 = pppppplVar24;
        __Znwm();
        uStack_1a8 = (long ****)((ulong)pppppplVar24 | 0x8000000000000000);
        ppppplStack_1b8 = (long *****)pppppplVar13;
        ppppplStack_1b0 = (long *****)pppppplVar21;
      }
      _memmove(pppppplVar13,uVar10,pppppplVar21);
LAB_10aca1348:
      *(undefined1 *)((long)pppppplVar13 + (long)pppppplVar21) = 0;
      FUN_10ac9e388(pppppplVar16,&ppppplStack_1b8,0);
      pppppplVar21 = pppppplVar16 + 7;
      pppppplVar24 = pppppplVar21;
      func_0x000107c2b05c(pppppplVar21,&ppppplStack_1b8);
      pppppplVar13 = (long ******)pppppplVar16[8];
      if (pppppplVar13 != (long ******)0x0) {
        puVar26 = (undefined1 *)((long)pppppplVar13 + -1);
        if (((ulong)pppppplVar13 & (ulong)puVar26) == 0) {
          unaff_x27 = (long ******)((ulong)puVar26 & (ulong)pppppplVar24);
        }
        else {
          unaff_x27 = pppppplVar24;
          if (pppppplVar13 <= pppppplVar24) {
            uVar14 = 0;
            if (pppppplVar13 != (long ******)0x0) {
              uVar14 = (ulong)pppppplVar24 / (ulong)pppppplVar13;
            }
            unaff_x27 = (long ******)((long)pppppplVar24 - uVar14 * (long)pppppplVar13);
          }
        }
        if ((*pppppplVar21)[(long)unaff_x27] != (long ****)0x0) {
          for (ppppplVar22 = (long *****)*(*pppppplVar21)[(long)unaff_x27];
              ppppplVar22 != (long *****)0x0; ppppplVar22 = (long *****)*ppppplVar22) {
            pppppplVar17 = (long ******)ppppplVar22[1];
            if (pppppplVar17 == pppppplVar24) {
              pppppplVar17 = pppppplVar21;
              func_0x000107c2b068(pppppplVar21,ppppplVar22 + 2,&ppppplStack_1b8);
              if (((ulong)pppppplVar17 & 1) != 0) goto LAB_10aca15dc;
            }
            else {
              if (((ulong)pppppplVar13 & (ulong)puVar26) == 0) {
                pppppplVar17 = (long ******)((ulong)pppppplVar17 & (ulong)puVar26);
              }
              else if (pppppplVar13 <= pppppplVar17) {
                uVar14 = 0;
                if (pppppplVar13 != (long ******)0x0) {
                  uVar14 = (ulong)pppppplVar17 / (ulong)pppppplVar13;
                }
                pppppplVar17 = (long ******)((long)pppppplVar17 - uVar14 * (long)pppppplVar13);
              }
              if (pppppplVar17 != unaff_x27) break;
            }
          }
        }
      }
      ppppplVar22 = (long *****)0x60;
      __Znwm();
      uStack_190 = 0;
      *ppppplVar22 = (long ****)0x0;
      ppppplVar22[1] = (long ****)pppppplVar24;
      pppplStack_1a0 = (long ****)ppppplVar22;
      ppppplStack_198 = (long *****)pppppplVar21;
      if ((long)uStack_1a8 < 0) {
        func_0x000107c3192c(ppppplVar22 + 2,ppppplStack_1b8,ppppplStack_1b0);
      }
      else {
        ppppplVar22[3] = (long ****)ppppplStack_1b0;
        ppppplVar22[2] = (long ****)ppppplStack_1b8;
        ppppplVar22[4] = uStack_1a8;
      }
      ppppplVar22[9] = (long ****)0x0;
      ppppplVar22[8] = (long ****)0x0;
      *(undefined1 *)(ppppplVar22 + 6) = 0;
      ppppplVar22[5] = (long ****)&PTR_FUN_110c6c2d0;
      *(undefined2 *)((long)ppppplVar22 + 0x32) = 0xf;
      ppppplVar22[0xb] = (long ****)0x0;
      ppppplVar22[10] = (long ****)0x0;
      lVar11 = *param_3;
      lVar1 = param_3[1];
      pppplVar12 = (long ****)0x20;
      __Znwm();
      *pppplVar12 = (long ***)&PTR_FUN_110c6b8d8;
      pppplVar12[2] = (long ***)0x0;
      pppplVar12[3] = (long ***)0x0;
      pppplVar12[1] = (long ***)0x0;
      FUN_10a0ca588(pppplVar12 + 1,lVar11,lVar1,lVar1 - lVar11 >> 2);
      pppplVar20 = ppppplVar22[0xb];
      ppppplVar22[0xb] = pppplVar12;
      if (pppplVar20 != (long ****)0x0) {
        (*(code *)(*pppplVar20)[1])();
      }
      uStack_190 = CONCAT71(uStack_190._1_7_,1);
      if ((pppppplVar13 == (long ******)0x0) ||
         (*(float *)(pppppplVar16 + 0xb) * (float)pppppplVar13 < (float)((long)pppppplVar16[10] + 1)
         )) {
        uVar14 = 1;
        if ((long ******)0x2 < pppppplVar13) {
          uVar14 = (ulong)(((ulong)pppppplVar13 & (ulong)((long)pppppplVar13 + -1)) != 0);
        }
        uVar14 = uVar14 | (long)pppppplVar13 << 1;
        uVar19 = (ulong)((float)((long)pppppplVar16[10] + 1) / *(float *)(pppppplVar16 + 0xb));
        if (uVar14 <= uVar19) {
          uVar14 = uVar19;
        }
        FUN_10a4ba824(pppppplVar21,uVar14);
        pppppplVar13 = (long ******)pppppplVar16[8];
        if (((ulong)pppppplVar13 & (ulong)((long)pppppplVar13 + -1)) == 0) {
          unaff_x27 = (long ******)((ulong)((long)pppppplVar13 + -1) & (ulong)pppppplVar24);
        }
        else {
          unaff_x27 = pppppplVar24;
          if (pppppplVar13 <= pppppplVar24) {
            uVar14 = 0;
            if (pppppplVar13 != (long ******)0x0) {
              uVar14 = (ulong)pppppplVar24 / (ulong)pppppplVar13;
            }
            unaff_x27 = (long ******)((long)pppppplVar24 - uVar14 * (long)pppppplVar13);
          }
        }
      }
      ppppplVar22 = *pppppplVar21;
      pppplVar12 = ppppplVar22[(long)unaff_x27];
      if (pppplVar12 == (long ****)0x0) {
        pppppplVar24 = pppppplVar16 + 9;
        *pppplStack_1a0 = (long ***)*pppppplVar24;
        *pppppplVar24 = (long *****)pppplStack_1a0;
        ppppplVar22[(long)unaff_x27] = (long ****)pppppplVar24;
        if ((long ****)*pppplStack_1a0 != (long ****)0x0) {
          pppppplVar24 = (long ******)(*pppplStack_1a0)[1];
          if (((ulong)pppppplVar13 & (ulong)((long)pppppplVar13 + -1)) == 0) {
            pppppplVar24 = (long ******)((ulong)pppppplVar24 & (ulong)((long)pppppplVar13 + -1));
          }
          else if (pppppplVar13 <= pppppplVar24) {
            uVar14 = 0;
            if (pppppplVar13 != (long ******)0x0) {
              uVar14 = (ulong)pppppplVar24 / (ulong)pppppplVar13;
            }
            pppppplVar24 = (long ******)((long)pppppplVar24 - uVar14 * (long)pppppplVar13);
          }
          (*pppppplVar21)[(long)pppppplVar24] = pppplStack_1a0;
        }
      }
      else {
        *pppplStack_1a0 = *pppplVar12;
        *pppplVar12 = (long ***)pppplStack_1a0;
      }
      pppppplVar16[10] = (long *****)((long)pppppplVar16[10] + 1);
      ppppplVar22 = (long *****)pppplStack_1a0;
LAB_10aca15dc:
      pppppplVar21 = pppppplVar16;
      func_0x00010a5499ec(pppppplVar16,1,ppppplVar22 + 5,&ppppplStack_1b8);
      if (*(char *)(pppppplVar16[0x11] + 1) == '\x01') {
        FUN_10a54a030(&pppplStack_1a0,pppppplVar16 + 5);
        pppppplVar21 = pppppplVar16 + 0x10;
        FUN_10a549a74(pppppplVar21,&pppplStack_1a0,&ppppplStack_1b8);
        pppppplVar16 = (long ******)ppppplStack_198;
        if ((long ******)ppppplStack_198 != (long ******)0x0) {
          pppppplVar24 = (long ******)(ppppplStack_198 + 1);
          do {
            ppppplVar22 = *pppppplVar24;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pppppplVar24,0x10);
            if (bVar3) {
              *pppppplVar24 = (long *****)((long)ppppplVar22 + -1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (ppppplVar22 == (long *****)0x0) {
            (*(code *)(*ppppplStack_198)[2])(ppppplStack_198);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar16);
            pppppplVar21 = pppppplVar16;
          }
        }
      }
      if ((long)uStack_1a8 < 0) {
        __ZdlPv(ppppplStack_1b8);
        pppppplVar21 = (long ******)ppppplStack_1b8;
      }
      return pppppplVar21;
    }
    if (pppppplVar21 < (long ******)0x17) {
      uStack_108 = (long ****)CONCAT17((char)pppppplVar21,(undefined7)uStack_108);
      pppppplVar13 = &ppppplStack_118;
      if (pppppplVar21 == (long ******)0x0) goto LAB_10aca0ef8;
    }
    else {
      pppppplVar24 = (long ******)0x19;
      if (((ulong)pppppplVar21 | 7) != 0x17) {
        pppppplVar24 = (long ******)(((ulong)pppppplVar21 | 7) + 1);
      }
      pppppplVar13 = pppppplVar24;
      __Znwm();
      uStack_108 = (long ****)((ulong)pppppplVar24 | 0x8000000000000000);
      ppppplStack_118 = (long *****)pppppplVar13;
      ppppplStack_110 = (long *****)pppppplVar21;
    }
    _memmove(pppppplVar13,uVar10,pppppplVar21);
LAB_10aca0ef8:
    *(undefined1 *)((long)pppppplVar13 + (long)pppppplVar21) = 0;
    FUN_10ac9e388(pppppplVar16,&ppppplStack_118,0);
    pppppplVar21 = pppppplVar16 + 7;
    pppppplVar24 = pppppplVar21;
    func_0x000107c2b05c(pppppplVar21,&ppppplStack_118);
    pppppplVar13 = (long ******)pppppplVar16[8];
    if (pppppplVar13 != (long ******)0x0) {
      puVar26 = (undefined1 *)((long)pppppplVar13 + -1);
      if (((ulong)pppppplVar13 & (ulong)puVar26) == 0) {
        unaff_x26 = (long ******)((ulong)puVar26 & (ulong)pppppplVar24);
      }
      else {
        unaff_x26 = pppppplVar24;
        if (pppppplVar13 <= pppppplVar24) {
          uVar14 = 0;
          if (pppppplVar13 != (long ******)0x0) {
            uVar14 = (ulong)pppppplVar24 / (ulong)pppppplVar13;
          }
          unaff_x26 = (long ******)((long)pppppplVar24 - uVar14 * (long)pppppplVar13);
        }
      }
      if ((*pppppplVar21)[(long)unaff_x26] != (long ****)0x0) {
        for (ppppplVar22 = (long *****)*(*pppppplVar21)[(long)unaff_x26];
            ppppplVar22 != (long *****)0x0; ppppplVar22 = (long *****)*ppppplVar22) {
          pppppplVar17 = (long ******)ppppplVar22[1];
          if (pppppplVar17 == pppppplVar24) {
            pppppplVar17 = pppppplVar21;
            func_0x000107c2b068(pppppplVar21,ppppplVar22 + 2,&ppppplStack_118);
            if (((ulong)pppppplVar17 & 1) != 0) goto LAB_10aca1174;
          }
          else {
            if (((ulong)pppppplVar13 & (ulong)puVar26) == 0) {
              pppppplVar17 = (long ******)((ulong)pppppplVar17 & (ulong)puVar26);
            }
            else if (pppppplVar13 <= pppppplVar17) {
              uVar14 = 0;
              if (pppppplVar13 != (long ******)0x0) {
                uVar14 = (ulong)pppppplVar17 / (ulong)pppppplVar13;
              }
              pppppplVar17 = (long ******)((long)pppppplVar17 - uVar14 * (long)pppppplVar13);
            }
            if (pppppplVar17 != unaff_x26) break;
          }
        }
      }
    }
    ppppplVar22 = (long *****)0x60;
    __Znwm();
    uStack_f0 = 0;
    *ppppplVar22 = (long ****)0x0;
    ppppplVar22[1] = (long ****)pppppplVar24;
    pppplStack_100 = (long ****)ppppplVar22;
    ppppplStack_f8 = (long *****)pppppplVar21;
    if ((long)uStack_108 < 0) {
      func_0x000107c3192c(ppppplVar22 + 2,ppppplStack_118,ppppplStack_110);
    }
    else {
      ppppplVar22[3] = (long ****)ppppplStack_110;
      ppppplVar22[2] = (long ****)ppppplStack_118;
      ppppplVar22[4] = uStack_108;
    }
    ppppplVar22[9] = (long ****)0x0;
    ppppplVar22[8] = (long ****)0x0;
    *(undefined1 *)(ppppplVar22 + 6) = 0;
    ppppplVar22[5] = (long ****)&PTR_FUN_110c6c2d0;
    *(undefined2 *)((long)ppppplVar22 + 0x32) = 0xf;
    ppppplVar22[0xb] = (long ****)0x0;
    ppppplVar22[10] = (long ****)0x0;
    pppplVar12 = (long ****)0x20;
    __Znwm();
    *pppplVar12 = (long ***)&PTR_FUN_110c6bc10;
    func_0x000105007b50(pppplVar12 + 1,param_3);
    pppplVar20 = ppppplVar22[0xb];
    ppppplVar22[0xb] = pppplVar12;
    if (pppplVar20 != (long ****)0x0) {
      (*(code *)(*pppplVar20)[1])();
    }
    uStack_f0 = CONCAT71(uStack_f0._1_7_,1);
    if ((pppppplVar13 == (long ******)0x0) ||
       (*(float *)(pppppplVar16 + 0xb) * (float)pppppplVar13 < (float)((long)pppppplVar16[10] + 1)))
    {
      uVar14 = 1;
      if ((long ******)0x2 < pppppplVar13) {
        uVar14 = (ulong)(((ulong)pppppplVar13 & (ulong)((long)pppppplVar13 + -1)) != 0);
      }
      uVar14 = uVar14 | (long)pppppplVar13 << 1;
      uVar19 = (ulong)((float)((long)pppppplVar16[10] + 1) / *(float *)(pppppplVar16 + 0xb));
      if (uVar14 <= uVar19) {
        uVar14 = uVar19;
      }
      FUN_10a4ba824(pppppplVar21,uVar14);
      pppppplVar13 = (long ******)pppppplVar16[8];
      if (((ulong)pppppplVar13 & (ulong)((long)pppppplVar13 + -1)) == 0) {
        unaff_x26 = (long ******)((ulong)((long)pppppplVar13 + -1) & (ulong)pppppplVar24);
      }
      else {
        unaff_x26 = pppppplVar24;
        if (pppppplVar13 <= pppppplVar24) {
          uVar14 = 0;
          if (pppppplVar13 != (long ******)0x0) {
            uVar14 = (ulong)pppppplVar24 / (ulong)pppppplVar13;
          }
          unaff_x26 = (long ******)((long)pppppplVar24 - uVar14 * (long)pppppplVar13);
        }
      }
    }
    ppppplVar22 = *pppppplVar21;
    pppplVar12 = ppppplVar22[(long)unaff_x26];
    if (pppplVar12 == (long ****)0x0) {
      pppppplVar24 = pppppplVar16 + 9;
      *pppplStack_100 = (long ***)*pppppplVar24;
      *pppppplVar24 = (long *****)pppplStack_100;
      ppppplVar22[(long)unaff_x26] = (long ****)pppppplVar24;
      if ((long ****)*pppplStack_100 != (long ****)0x0) {
        pppppplVar24 = (long ******)(*pppplStack_100)[1];
        if (((ulong)pppppplVar13 & (ulong)((long)pppppplVar13 + -1)) == 0) {
          pppppplVar24 = (long ******)((ulong)pppppplVar24 & (ulong)((long)pppppplVar13 + -1));
        }
        else if (pppppplVar13 <= pppppplVar24) {
          uVar14 = 0;
          if (pppppplVar13 != (long ******)0x0) {
            uVar14 = (ulong)pppppplVar24 / (ulong)pppppplVar13;
          }
          pppppplVar24 = (long ******)((long)pppppplVar24 - uVar14 * (long)pppppplVar13);
        }
        (*pppppplVar21)[(long)pppppplVar24] = pppplStack_100;
      }
    }
    else {
      *pppplStack_100 = *pppplVar12;
      *pppplVar12 = (long ***)pppplStack_100;
    }
    pppppplVar16[10] = (long *****)((long)pppppplVar16[10] + 1);
    ppppplVar22 = (long *****)pppplStack_100;
LAB_10aca1174:
    pppppplVar21 = pppppplVar16;
    func_0x00010a5499ec(pppppplVar16,1,ppppplVar22 + 5,&ppppplStack_118);
    if (*(char *)(pppppplVar16[0x11] + 1) == '\x01') {
      FUN_10a54a030(&pppplStack_100,pppppplVar16 + 5);
      pppppplVar21 = pppppplVar16 + 0x10;
      FUN_10a549a74(pppppplVar21,&pppplStack_100,&ppppplStack_118);
      pppppplVar16 = (long ******)ppppplStack_f8;
      if ((long ******)ppppplStack_f8 != (long ******)0x0) {
        pppppplVar24 = (long ******)(ppppplStack_f8 + 1);
        do {
          ppppplVar22 = *pppppplVar24;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppppplVar24,0x10);
          if (bVar3) {
            *pppppplVar24 = (long *****)((long)ppppplVar22 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (ppppplVar22 == (long *****)0x0) {
          (*(code *)(*ppppplStack_f8)[2])(ppppplStack_f8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar16);
          pppppplVar21 = pppppplVar16;
        }
      }
    }
    if ((long)uStack_108 < 0) {
      __ZdlPv(ppppplStack_118);
      pppppplVar21 = (long ******)ppppplStack_118;
    }
    return pppppplVar21;
  }
  if (pppppplVar21 < (long ******)0x17) {
    pppplVar12 = (long ****)CONCAT17((char)pppppplVar21,(int7)in_stack_ffffffffffffff90);
    if (pppppplVar21 == (long ******)0x0) goto LAB_10aca0b34;
  }
  else {
    pppppplVar24 = (long ******)0x19;
    if (((ulong)pppppplVar21 | 7) != 0x17) {
      pppppplVar24 = (long ******)(((ulong)pppppplVar21 | 7) + 1);
    }
    pppppplVar16 = pppppplVar24;
    __Znwm();
    pppplVar12 = (long ****)((ulong)pppppplVar24 | 0x8000000000000000);
    ppppplStack_80 = (long *****)pppppplVar16;
    ppppplStack_78 = (long *****)pppppplVar21;
  }
  _memmove(pppppplVar16,puVar4,pppppplVar21);
  pppppplVar24 = pppppplVar16;
LAB_10aca0b34:
  *(undefined1 *)((long)pppppplVar24 + (long)pppppplVar21) = 0;
  FUN_10ac9e388(param_1,&ppppplStack_80,0);
  pppppplVar21 = param_1 + 7;
  pppppplVar16 = pppppplVar21;
  func_0x000107c2b05c(pppppplVar21,&ppppplStack_80);
  pppppplVar24 = (long ******)param_1[8];
  if (pppppplVar24 != (long ******)0x0) {
    puVar26 = (undefined1 *)((long)pppppplVar24 + -1);
    if (((ulong)pppppplVar24 & (ulong)puVar26) == 0) {
      unaff_x25 = (long ******)((ulong)puVar26 & (ulong)pppppplVar16);
    }
    else {
      unaff_x25 = pppppplVar16;
      if (pppppplVar24 <= pppppplVar16) {
        uVar14 = 0;
        if (pppppplVar24 != (long ******)0x0) {
          uVar14 = (ulong)pppppplVar16 / (ulong)pppppplVar24;
        }
        unaff_x25 = (long ******)((long)pppppplVar16 - uVar14 * (long)pppppplVar24);
      }
    }
    if ((*pppppplVar21)[(long)unaff_x25] != (long ****)0x0) {
      for (ppppplVar22 = (long *****)*(*pppppplVar21)[(long)unaff_x25];
          ppppplVar22 != (long *****)0x0; ppppplVar22 = (long *****)*ppppplVar22) {
        pppppplVar13 = (long ******)ppppplVar22[1];
        if (pppppplVar13 == pppppplVar16) {
          pppppplVar13 = pppppplVar21;
          func_0x000107c2b068(pppppplVar21,ppppplVar22 + 2,&ppppplStack_80);
          if (((ulong)pppppplVar13 & 1) != 0) goto LAB_10aca0d78;
        }
        else {
          if (((ulong)pppppplVar24 & (ulong)puVar26) == 0) {
            pppppplVar13 = (long ******)((ulong)pppppplVar13 & (ulong)puVar26);
          }
          else if (pppppplVar24 <= pppppplVar13) {
            uVar14 = 0;
            if (pppppplVar24 != (long ******)0x0) {
              uVar14 = (ulong)pppppplVar13 / (ulong)pppppplVar24;
            }
            pppppplVar13 = (long ******)((long)pppppplVar13 - uVar14 * (long)pppppplVar24);
          }
          if (pppppplVar13 != unaff_x25) break;
        }
      }
    }
  }
  ppppplVar22 = (long *****)0x60;
  __Znwm();
  *ppppplVar22 = (long ****)0x0;
  ppppplVar22[1] = (long ****)pppppplVar16;
  if ((long)pppplVar12 < 0) {
    func_0x000107c3192c(ppppplVar22 + 2,ppppplStack_80,ppppplStack_78);
  }
  else {
    ppppplVar22[3] = (long ****)ppppplStack_78;
    ppppplVar22[2] = (long ****)ppppplStack_80;
    ppppplVar22[4] = pppplVar12;
  }
  *(undefined1 *)(ppppplVar22 + 6) = 0;
  ppppplVar22[5] = (long ****)&PTR_FUN_110c6c2d0;
  *(undefined2 *)((long)ppppplVar22 + 0x32) = 3;
  ppppplVar22[9] = (long ****)0x0;
  ppppplVar22[8] = (long ****)0x0;
  ppppplVar22[0xb] = (long ****)0x0;
  ppppplVar22[10] = (long ****)0x0;
  *(int *)(ppppplVar22 + 7) = (int)*param_3;
  if ((pppppplVar24 == (long ******)0x0) ||
     (*(float *)(param_1 + 0xb) * (float)pppppplVar24 < (float)((long)param_1[10] + 1))) {
    uVar14 = 1;
    if ((long ******)0x2 < pppppplVar24) {
      uVar14 = (ulong)(((ulong)pppppplVar24 & (ulong)((long)pppppplVar24 + -1)) != 0);
    }
    uVar14 = uVar14 | (long)pppppplVar24 << 1;
    uVar19 = (ulong)((float)((long)param_1[10] + 1) / *(float *)(param_1 + 0xb));
    if (uVar14 <= uVar19) {
      uVar14 = uVar19;
    }
    FUN_10a4ba824(pppppplVar21,uVar14);
    pppppplVar24 = (long ******)param_1[8];
    if (((ulong)pppppplVar24 & (ulong)((long)pppppplVar24 + -1)) == 0) {
      unaff_x25 = (long ******)((ulong)((long)pppppplVar24 + -1) & (ulong)pppppplVar16);
    }
    else {
      unaff_x25 = pppppplVar16;
      if (pppppplVar24 <= pppppplVar16) {
        uVar14 = 0;
        if (pppppplVar24 != (long ******)0x0) {
          uVar14 = (ulong)pppppplVar16 / (ulong)pppppplVar24;
        }
        unaff_x25 = (long ******)((long)pppppplVar16 - uVar14 * (long)pppppplVar24);
      }
    }
  }
  ppppplVar15 = *pppppplVar21;
  pppplVar20 = ppppplVar15[(long)unaff_x25];
  if (pppplVar20 == (long ****)0x0) {
    pppppplVar16 = param_1 + 9;
    *ppppplVar22 = (long ****)*pppppplVar16;
    *pppppplVar16 = ppppplVar22;
    ppppplVar15[(long)unaff_x25] = (long ****)pppppplVar16;
    if (*ppppplVar22 != (long ****)0x0) {
      pppppplVar16 = (long ******)(*ppppplVar22)[1];
      if (((ulong)pppppplVar24 & (ulong)((long)pppppplVar24 + -1)) == 0) {
        pppppplVar16 = (long ******)((ulong)pppppplVar16 & (ulong)((long)pppppplVar24 + -1));
      }
      else if (pppppplVar24 <= pppppplVar16) {
        uVar14 = 0;
        if (pppppplVar24 != (long ******)0x0) {
          uVar14 = (ulong)pppppplVar16 / (ulong)pppppplVar24;
        }
        pppppplVar16 = (long ******)((long)pppppplVar16 - uVar14 * (long)pppppplVar24);
      }
      (*pppppplVar21)[(long)pppppplVar16] = (long ****)ppppplVar22;
    }
  }
  else {
    *ppppplVar22 = (long ****)*pppplVar20;
    *pppplVar20 = (long ***)ppppplVar22;
  }
  param_1[10] = (long *****)((long)param_1[10] + 1);
  in_stack_ffffffffffffffa0 = pppppplVar21;
LAB_10aca0d78:
  pppppplVar21 = param_1;
  func_0x00010a5499ec(param_1,1,ppppplVar22 + 5,&ppppplStack_80);
  if (*(char *)(param_1[0x11] + 1) == '\x01') {
    FUN_10a54a030(&stack0xffffffffffffff98,param_1 + 5);
    pppppplVar21 = param_1 + 0x10;
    FUN_10a549a74(pppppplVar21,&stack0xffffffffffffff98,&ppppplStack_80);
    if (in_stack_ffffffffffffffa0 != (long ******)0x0) {
      pppppplVar16 = in_stack_ffffffffffffffa0 + 1;
      do {
        ppppplVar22 = *pppppplVar16;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppplVar16,0x10);
        if (bVar3) {
          *pppppplVar16 = (long *****)((long)ppppplVar22 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppppplVar22 == (long *****)0x0) {
        (*(code *)(*in_stack_ffffffffffffffa0)[2])(in_stack_ffffffffffffffa0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa0);
        pppppplVar21 = in_stack_ffffffffffffffa0;
      }
    }
  }
  if ((long)pppplVar12 < 0) {
    __ZdlPv(ppppplStack_80);
    pppppplVar21 = (long ******)ppppplStack_80;
  }
  return pppppplVar21;
}



/* Entry: 10accbea0; end: 10accbfdf;  */

void FUN_10accbea0(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10acc8580(param_2,param_3);
  FUN_10accbfe0(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  if (*(int *)(param_4 + 0x10) != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10accbfb4);
    (*pcVar1)();
  }
  FUN_10accbe60(plVar4,&stack0xffffffffffffffa8,&stack0xffffffffffffffa4);
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10accbfe0; end: 10accc003;  */

void FUN_10accbfe0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  char cVar3;
  bool bVar4;
  undefined1 **ppuVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 ****ppppuVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined4 *extraout_x8;
  undefined8 *puVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  ulong uVar23;
  long *plVar24;
  long *unaff_x27;
  ulong uVar25;
  undefined1 *puStack_c0;
  ulong uStack_b8;
  byte bStack_a9;
  undefined8 ***pppuStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar8 = (long *)0x2;
  uVar13 = 0;
  FUN_10a052ee0(2,0,param_1);
  plVar9 = plVar8;
  (**(code **)(*plVar8 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  plVar10 = plVar8;
  FUN_10acc8580(plVar8,uVar13);
  FUN_10accc508(param_4);
  func_0x000109898570(&puStack_c0,plVar8,param_1);
  FUN_10a05a42c(plVar8,param_1 + 0x10);
  if ((char)plVar10[0xc] == '\x01') {
    FUN_10a00946c(&UNK_10f6a1d58);
LAB_10accc468:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10accc46c);
    (*pcVar6)();
  }
  uVar25 = uStack_b8;
  ppuVar5 = (undefined1 **)puStack_c0;
  if (-1 < (char)bStack_a9) {
    uVar25 = (ulong)bStack_a9;
    ppuVar5 = &puStack_c0;
  }
  if (0x7ffffffffffffff7 < uVar25) {
    func_0x000109ffde50();
    goto LAB_10accc468;
  }
  if (uVar25 < 0x17) {
    uStack_98 = (long *)CONCAT17((char)uVar25,(undefined7)uStack_98);
    ppppuVar11 = &pppuStack_a8;
    if (uVar25 != 0) goto LAB_10accc118;
  }
  else {
    ppppuVar2 = (undefined8 ****)0x19;
    if ((uVar25 | 7) != 0x17) {
      ppppuVar2 = (undefined8 ****)((uVar25 | 7) + 1);
    }
    ppppuVar11 = ppppuVar2;
    __Znwm();
    uStack_98 = (long *)((ulong)ppppuVar2 | 0x8000000000000000);
    pppuStack_a8 = ppppuVar11;
    uStack_a0 = uVar25;
LAB_10accc118:
    _memmove(ppppuVar11,ppuVar5,uVar25);
  }
  *(undefined1 *)((long)ppppuVar11 + uVar25) = 0;
  FUN_10ac9e388(plVar10,&pppuStack_a8,0);
  plVar19 = plVar10 + 7;
  plVar12 = plVar19;
  func_0x000107c2b05c(plVar19,&pppuStack_a8);
  plVar24 = (long *)plVar10[8];
  if (plVar24 != (long *)0x0) {
    uVar25 = (long)plVar24 - 1;
    if (((ulong)plVar24 & uVar25) == 0) {
      unaff_x27 = (long *)(uVar25 & (ulong)plVar12);
    }
    else {
      unaff_x27 = plVar12;
      if (plVar24 <= plVar12) {
        uVar17 = 0;
        if (plVar24 != (long *)0x0) {
          uVar17 = (ulong)plVar12 / (ulong)plVar24;
        }
        unaff_x27 = (long *)((long)plVar12 - uVar17 * (long)plVar24);
      }
    }
    puVar14 = *(undefined8 **)(*plVar19 + (long)unaff_x27 * 8);
    if (puVar14 != (undefined8 *)0x0) {
      for (plVar22 = (long *)*puVar14; plVar22 != (long *)0x0; plVar22 = (long *)*plVar22) {
        plVar15 = (long *)plVar22[1];
        if (plVar15 == plVar12) {
          plVar15 = plVar19;
          func_0x000107c2b068(plVar19,plVar22 + 2,&pppuStack_a8);
          if (((ulong)plVar15 & 1) != 0) goto LAB_10accc388;
        }
        else {
          if (((ulong)plVar24 & uVar25) == 0) {
            plVar15 = (long *)((ulong)plVar15 & uVar25);
          }
          else if (plVar24 <= plVar15) {
            uVar17 = 0;
            if (plVar24 != (long *)0x0) {
              uVar17 = (ulong)plVar15 / (ulong)plVar24;
            }
            plVar15 = (long *)((long)plVar15 - uVar17 * (long)plVar24);
          }
          if (plVar15 != unaff_x27) break;
        }
      }
    }
  }
  plVar22 = (long *)0x60;
  __Znwm();
  lStack_80 = 0;
  *plVar22 = 0;
  plVar22[1] = (long)plVar12;
  plStack_90 = plVar22;
  plStack_88 = plVar19;
  if ((long)uStack_98 < 0) {
    func_0x000107c3192c(plVar22 + 2,pppuStack_a8,uStack_a0);
  }
  else {
    plVar22[3] = uStack_a0;
    plVar22[2] = (long)pppuStack_a8;
    plVar22[4] = (long)uStack_98;
  }
  plVar22[9] = 0;
  plVar22[8] = 0;
  *(undefined1 *)(plVar22 + 6) = 0;
  plVar22[5] = (long)&PTR_FUN_110c6c2d0;
  *(undefined2 *)((long)plVar22 + 0x32) = 7;
  plVar22[0xb] = 0;
  plVar22[10] = 0;
  lVar20 = *plVar8;
  puVar14 = (undefined8 *)0x10;
  __Znwm();
  *puVar14 = &PTR_FUN_110c6b9e0;
  puVar14[1] = lVar20;
  plVar22[0xb] = (long)puVar14;
  lStack_80 = CONCAT71(lStack_80._1_7_,1);
  if ((plVar24 == (long *)0x0) ||
     (*(float *)(plVar10 + 0xb) * (float)plVar24 < (float)(plVar10[10] + 1))) {
    uVar25 = 1;
    if ((long *)0x2 < plVar24) {
      uVar25 = (ulong)(((ulong)plVar24 & (long)plVar24 - 1U) != 0);
    }
    uVar25 = uVar25 | (long)plVar24 << 1;
    uVar17 = (ulong)((float)(plVar10[10] + 1) / *(float *)(plVar10 + 0xb));
    if (uVar25 <= uVar17) {
      uVar25 = uVar17;
    }
    FUN_10a4ba824(plVar19,uVar25);
    plVar24 = (long *)plVar10[8];
    if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
      unaff_x27 = (long *)((long)plVar24 - 1U & (ulong)plVar12);
    }
    else {
      unaff_x27 = plVar12;
      if (plVar24 <= plVar12) {
        uVar25 = 0;
        if (plVar24 != (long *)0x0) {
          uVar25 = (ulong)plVar12 / (ulong)plVar24;
        }
        unaff_x27 = (long *)((long)plVar12 - uVar25 * (long)plVar24);
      }
    }
  }
  lVar20 = *plVar19;
  plVar8 = *(long **)(lVar20 + (long)unaff_x27 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = plVar10 + 9;
    *plStack_90 = *plVar8;
    *plVar8 = (long)plStack_90;
    *(long **)(lVar20 + (long)unaff_x27 * 8) = plVar8;
    if (*plStack_90 != 0) {
      plVar8 = *(long **)(*plStack_90 + 8);
      if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
        plVar8 = (long *)((ulong)plVar8 & (long)plVar24 - 1U);
      }
      else if (plVar24 <= plVar8) {
        uVar25 = 0;
        if (plVar24 != (long *)0x0) {
          uVar25 = (ulong)plVar8 / (ulong)plVar24;
        }
        plVar8 = (long *)((long)plVar8 - uVar25 * (long)plVar24);
      }
      *(long **)(*plVar19 + (long)plVar8 * 8) = plStack_90;
    }
  }
  else {
    *plStack_90 = *plVar8;
    *plVar8 = (long)plStack_90;
  }
  plVar10[10] = plVar10[10] + 1;
  plVar22 = plStack_90;
LAB_10accc388:
  func_0x00010a5499ec(plVar10,1,plVar22 + 5,&pppuStack_a8);
  if (*(char *)(plVar10[0x11] + 8) == '\x01') {
    FUN_10a54a030(&plStack_90,plVar10 + 5);
    FUN_10a549a74(plVar10 + 0x10,&plStack_90,&pppuStack_a8);
    plVar8 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar10 = plStack_88 + 1;
      do {
        lVar20 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar20 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
  }
  if ((long)uStack_98 < 0) {
    __ZdlPv(pppuStack_a8);
  }
  if ((char)bStack_a9 < '\0') {
    __ZdlPv(puStack_c0);
  }
  *extraout_x8 = 0;
  plVar8 = plVar9 + 0x4b;
  lVar20 = plVar9[0x59];
  uVar25 = lVar20 - 1;
  plVar9[0x59] = uVar25;
  if (uVar25 < 8) {
    uVar25 = plVar8[lVar20 + 2];
    if (plVar9[0x5a] == uVar25) {
      return;
    }
  }
  else {
    uVar25 = *(ulong *)(plVar9[0x57] + -8);
    plVar9[0x57] = plVar9[0x57] + -8;
    if (plVar9[0x5a] == uVar25) {
      return;
    }
  }
  plVar10 = (long *)*plVar8;
  plVar19 = (long *)plVar9[0x4c];
  lVar20 = (long)plVar19 - (long)plVar10;
  uVar17 = lVar20 >> 4;
  if (uVar17 < uVar25) {
    uVar23 = uVar25 - uVar17;
    lVar21 = plVar9[0x4d];
    if ((ulong)(lVar21 - (long)plVar19 >> 4) < uVar23) {
      if (uVar25 >> 0x3c == 0) {
        uVar16 = lVar21 - (long)plVar10 >> 3;
        if (uVar16 <= uVar25) {
          uVar16 = uVar25;
        }
        if (0x7fffffffffffffef < (ulong)(lVar21 - (long)plVar10)) {
          uVar16 = 0xfffffffffffffff;
        }
        plStack_78 = plVar8;
        if (uVar16 >> 0x3c == 0) {
          lVar7 = uVar16 << 4;
          __Znwm();
          lVar1 = lVar7 + lVar20;
          _bzero(lVar1,uVar23 * 0x10);
          lVar18 = lVar1 + uVar17 * -0x10;
          _memcpy(lVar18,plVar10,lVar20);
          *plVar8 = lVar18;
          plVar9[0x4c] = lVar1 + uVar23 * 0x10;
          plVar9[0x4d] = lVar7 + uVar16 * 0x10;
          uStack_98 = plVar10;
          plStack_90 = plVar10;
          plStack_88 = plVar10;
          lStack_80 = lVar21;
          func_0x00010988c1b8(&uStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar6)();
    }
    _bzero(plVar19,uVar23 * 0x10);
    plVar9[0x4c] = (long)(plVar19 + uVar23 * 2);
  }
  else if (uVar25 < uVar17) {
    while (plVar19 != plVar10 + uVar25 * 2) {
      plVar19 = plVar19 + -2;
      func_0x00010988c204(plVar19);
    }
    plVar9[0x4c] = (long)(plVar10 + uVar25 * 2);
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar25;
  return;
}



/* Entry: 10accc004; end: 10accc507;  */

void FUN_10accc004(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined1 **ppuVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 ****ppppuVar11;
  undefined8 *puVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  ulong uVar21;
  long *plVar22;
  long *unaff_x27;
  ulong uVar23;
  undefined1 *puStack_b0;
  ulong uStack_a8;
  byte bStack_99;
  undefined8 ***pppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  
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
  FUN_10acc8580(param_2,param_3);
  FUN_10accc508(param_5);
  func_0x000109898570(&puStack_b0,param_2,param_4);
  FUN_10a05a42c(param_2,param_4 + 0x10);
  if ((char)plVar10[0xc] == '\x01') {
    FUN_10a00946c(&UNK_10f6a1d58);
LAB_10accc468:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10accc46c);
    (*pcVar7)();
  }
  uVar23 = uStack_a8;
  ppuVar6 = (undefined1 **)puStack_b0;
  if (-1 < (char)bStack_99) {
    uVar23 = (ulong)bStack_99;
    ppuVar6 = &puStack_b0;
  }
  if (0x7ffffffffffffff7 < uVar23) {
    func_0x000109ffde50();
    goto LAB_10accc468;
  }
  if (uVar23 < 0x17) {
    uStack_88 = (long *)CONCAT17((char)uVar23,(undefined7)uStack_88);
    ppppuVar11 = &pppuStack_98;
    if (uVar23 != 0) goto LAB_10accc118;
  }
  else {
    ppppuVar2 = (undefined8 ****)0x19;
    if ((uVar23 | 7) != 0x17) {
      ppppuVar2 = (undefined8 ****)((uVar23 | 7) + 1);
    }
    ppppuVar11 = ppppuVar2;
    __Znwm();
    uStack_88 = (long *)((ulong)ppppuVar2 | 0x8000000000000000);
    pppuStack_98 = ppppuVar11;
    uStack_90 = uVar23;
LAB_10accc118:
    _memmove(ppppuVar11,ppuVar6,uVar23);
  }
  *(undefined1 *)((long)ppppuVar11 + uVar23) = 0;
  FUN_10ac9e388(plVar10,&pppuStack_98,0);
  plVar3 = plVar10 + 7;
  plVar16 = plVar3;
  func_0x000107c2b05c(plVar3,&pppuStack_98);
  plVar22 = (long *)plVar10[8];
  if (plVar22 != (long *)0x0) {
    uVar23 = (long)plVar22 - 1;
    if (((ulong)plVar22 & uVar23) == 0) {
      unaff_x27 = (long *)(uVar23 & (ulong)plVar16);
    }
    else {
      unaff_x27 = plVar16;
      if (plVar22 <= plVar16) {
        uVar15 = 0;
        if (plVar22 != (long *)0x0) {
          uVar15 = (ulong)plVar16 / (ulong)plVar22;
        }
        unaff_x27 = (long *)((long)plVar16 - uVar15 * (long)plVar22);
      }
    }
    puVar12 = *(undefined8 **)(*plVar3 + (long)unaff_x27 * 8);
    if (puVar12 != (undefined8 *)0x0) {
      for (plVar20 = (long *)*puVar12; plVar20 != (long *)0x0; plVar20 = (long *)*plVar20) {
        plVar13 = (long *)plVar20[1];
        if (plVar13 == plVar16) {
          plVar13 = plVar3;
          func_0x000107c2b068(plVar3,plVar20 + 2,&pppuStack_98);
          if (((ulong)plVar13 & 1) != 0) goto LAB_10accc388;
        }
        else {
          if (((ulong)plVar22 & uVar23) == 0) {
            plVar13 = (long *)((ulong)plVar13 & uVar23);
          }
          else if (plVar22 <= plVar13) {
            uVar15 = 0;
            if (plVar22 != (long *)0x0) {
              uVar15 = (ulong)plVar13 / (ulong)plVar22;
            }
            plVar13 = (long *)((long)plVar13 - uVar15 * (long)plVar22);
          }
          if (plVar13 != unaff_x27) break;
        }
      }
    }
  }
  plVar20 = (long *)0x60;
  __Znwm();
  lStack_70 = 0;
  *plVar20 = 0;
  plVar20[1] = (long)plVar16;
  plStack_80 = plVar20;
  plStack_78 = plVar3;
  if ((long)uStack_88 < 0) {
    func_0x000107c3192c(plVar20 + 2,pppuStack_98,uStack_90);
  }
  else {
    plVar20[3] = uStack_90;
    plVar20[2] = (long)pppuStack_98;
    plVar20[4] = (long)uStack_88;
  }
  plVar20[9] = 0;
  plVar20[8] = 0;
  *(undefined1 *)(plVar20 + 6) = 0;
  plVar20[5] = (long)&PTR_FUN_110c6c2d0;
  *(undefined2 *)((long)plVar20 + 0x32) = 7;
  plVar20[0xb] = 0;
  plVar20[10] = 0;
  lVar18 = *param_2;
  puVar12 = (undefined8 *)0x10;
  __Znwm();
  *puVar12 = &PTR_FUN_110c6b9e0;
  puVar12[1] = lVar18;
  plVar20[0xb] = (long)puVar12;
  lStack_70 = CONCAT71(lStack_70._1_7_,1);
  if ((plVar22 == (long *)0x0) ||
     (*(float *)(plVar10 + 0xb) * (float)plVar22 < (float)(plVar10[10] + 1))) {
    uVar23 = 1;
    if ((long *)0x2 < plVar22) {
      uVar23 = (ulong)(((ulong)plVar22 & (long)plVar22 - 1U) != 0);
    }
    uVar23 = uVar23 | (long)plVar22 << 1;
    uVar15 = (ulong)((float)(plVar10[10] + 1) / *(float *)(plVar10 + 0xb));
    if (uVar23 <= uVar15) {
      uVar23 = uVar15;
    }
    FUN_10a4ba824(plVar3,uVar23);
    plVar22 = (long *)plVar10[8];
    if (((ulong)plVar22 & (long)plVar22 - 1U) == 0) {
      unaff_x27 = (long *)((long)plVar22 - 1U & (ulong)plVar16);
    }
    else {
      unaff_x27 = plVar16;
      if (plVar22 <= plVar16) {
        uVar23 = 0;
        if (plVar22 != (long *)0x0) {
          uVar23 = (ulong)plVar16 / (ulong)plVar22;
        }
        unaff_x27 = (long *)((long)plVar16 - uVar23 * (long)plVar22);
      }
    }
  }
  lVar18 = *plVar3;
  plVar16 = *(long **)(lVar18 + (long)unaff_x27 * 8);
  if (plVar16 == (long *)0x0) {
    plVar16 = plVar10 + 9;
    *plStack_80 = *plVar16;
    *plVar16 = (long)plStack_80;
    *(long **)(lVar18 + (long)unaff_x27 * 8) = plVar16;
    if (*plStack_80 != 0) {
      plVar16 = *(long **)(*plStack_80 + 8);
      if (((ulong)plVar22 & (long)plVar22 - 1U) == 0) {
        plVar16 = (long *)((ulong)plVar16 & (long)plVar22 - 1U);
      }
      else if (plVar22 <= plVar16) {
        uVar23 = 0;
        if (plVar22 != (long *)0x0) {
          uVar23 = (ulong)plVar16 / (ulong)plVar22;
        }
        plVar16 = (long *)((long)plVar16 - uVar23 * (long)plVar22);
      }
      *(long **)(*plVar3 + (long)plVar16 * 8) = plStack_80;
    }
  }
  else {
    *plStack_80 = *plVar16;
    *plVar16 = (long)plStack_80;
  }
  plVar10[10] = plVar10[10] + 1;
  plVar20 = plStack_80;
LAB_10accc388:
  func_0x00010a5499ec(plVar10,1,plVar20 + 5,&pppuStack_98);
  if (*(char *)(plVar10[0x11] + 8) == '\x01') {
    FUN_10a54a030(&plStack_80,plVar10 + 5);
    FUN_10a549a74(plVar10 + 0x10,&plStack_80,&pppuStack_98);
    plVar10 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar3 = plStack_78 + 1;
      do {
        lVar18 = *plVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *plVar3 = lVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
  }
  if ((long)uStack_88 < 0) {
    __ZdlPv(pppuStack_98);
  }
  if ((char)bStack_99 < '\0') {
    __ZdlPv(puStack_b0);
  }
  *param_1 = 0;
  plVar10 = plVar9 + 0x4b;
  lVar18 = plVar9[0x59];
  uVar23 = lVar18 - 1;
  plVar9[0x59] = uVar23;
  if (uVar23 < 8) {
    uVar23 = plVar10[lVar18 + 2];
    if (plVar9[0x5a] == uVar23) {
      return;
    }
  }
  else {
    uVar23 = *(ulong *)(plVar9[0x57] + -8);
    plVar9[0x57] = plVar9[0x57] + -8;
    if (plVar9[0x5a] == uVar23) {
      return;
    }
  }
  plVar3 = (long *)*plVar10;
  plVar16 = (long *)plVar9[0x4c];
  lVar18 = (long)plVar16 - (long)plVar3;
  uVar15 = lVar18 >> 4;
  if (uVar15 < uVar23) {
    uVar21 = uVar23 - uVar15;
    lVar19 = plVar9[0x4d];
    if ((ulong)(lVar19 - (long)plVar16 >> 4) < uVar21) {
      if (uVar23 >> 0x3c == 0) {
        uVar14 = lVar19 - (long)plVar3 >> 3;
        if (uVar14 <= uVar23) {
          uVar14 = uVar23;
        }
        if (0x7fffffffffffffef < (ulong)(lVar19 - (long)plVar3)) {
          uVar14 = 0xfffffffffffffff;
        }
        plStack_68 = plVar10;
        if (uVar14 >> 0x3c == 0) {
          lVar8 = uVar14 << 4;
          __Znwm();
          lVar1 = lVar8 + lVar18;
          _bzero(lVar1,uVar21 * 0x10);
          lVar17 = lVar1 + uVar15 * -0x10;
          _memcpy(lVar17,plVar3,lVar18);
          *plVar10 = lVar17;
          plVar9[0x4c] = lVar1 + uVar21 * 0x10;
          plVar9[0x4d] = lVar8 + uVar14 * 0x10;
          uStack_88 = plVar3;
          plStack_80 = plVar3;
          plStack_78 = plVar3;
          lStack_70 = lVar19;
          func_0x00010988c1b8(&uStack_88);
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
    _bzero(plVar16,uVar21 * 0x10);
    plVar9[0x4c] = (long)(plVar16 + uVar21 * 2);
  }
  else if (uVar23 < uVar15) {
    while (plVar16 != plVar3 + uVar23 * 2) {
      plVar16 = plVar16 + -2;
      func_0x00010988c204(plVar16);
    }
    plVar9[0x4c] = (long)(plVar3 + uVar23 * 2);
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar23;
  return;
}



/* Entry: 10accc508; end: 10accc52b;  */

void FUN_10accc508(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  char cVar3;
  bool bVar4;
  undefined1 **ppuVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 ****ppppuVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined4 *extraout_x8;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  ulong uVar23;
  long *plVar24;
  long *unaff_x27;
  ulong uVar25;
  undefined1 *puStack_c0;
  ulong uStack_b8;
  byte bStack_a9;
  undefined8 ***pppuStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar8 = (long *)0x2;
  uVar13 = 0;
  FUN_10a052ee0(2,0,param_1);
  plVar9 = plVar8;
  (**(code **)(*plVar8 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  plVar10 = plVar8;
  FUN_10acc8580(plVar8,uVar13);
  FUN_10accca3c(param_4);
  func_0x000109898570(&puStack_c0,plVar8,param_1);
  func_0x00010a0655d8(plVar8,param_1 + 0x10);
  if ((char)plVar10[0xc] == '\x01') {
    FUN_10a00946c(&UNK_10f6a1d58);
LAB_10accc99c:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10accc9a0);
    (*pcVar6)();
  }
  uVar25 = uStack_b8;
  ppuVar5 = (undefined1 **)puStack_c0;
  if (-1 < (char)bStack_a9) {
    uVar25 = (ulong)bStack_a9;
    ppuVar5 = &puStack_c0;
  }
  if (0x7ffffffffffffff7 < uVar25) {
    func_0x000109ffde50();
    goto LAB_10accc99c;
  }
  if (uVar25 < 0x17) {
    uStack_98 = (long *)CONCAT17((char)uVar25,(undefined7)uStack_98);
    ppppuVar11 = &pppuStack_a8;
    if (uVar25 != 0) goto LAB_10accc640;
  }
  else {
    ppppuVar2 = (undefined8 ****)0x19;
    if ((uVar25 | 7) != 0x17) {
      ppppuVar2 = (undefined8 ****)((uVar25 | 7) + 1);
    }
    ppppuVar11 = ppppuVar2;
    __Znwm();
    uStack_98 = (long *)((ulong)ppppuVar2 | 0x8000000000000000);
    pppuStack_a8 = ppppuVar11;
    uStack_a0 = uVar25;
LAB_10accc640:
    _memmove(ppppuVar11,ppuVar5,uVar25);
  }
  *(undefined1 *)((long)ppppuVar11 + uVar25) = 0;
  FUN_10ac9e388(plVar10,&pppuStack_a8,0);
  plVar20 = plVar10 + 7;
  plVar12 = plVar20;
  func_0x000107c2b05c(plVar20,&pppuStack_a8);
  plVar24 = (long *)plVar10[8];
  if (plVar24 != (long *)0x0) {
    uVar25 = (long)plVar24 - 1;
    if (((ulong)plVar24 & uVar25) == 0) {
      unaff_x27 = (long *)(uVar25 & (ulong)plVar12);
    }
    else {
      unaff_x27 = plVar12;
      if (plVar24 <= plVar12) {
        uVar18 = 0;
        if (plVar24 != (long *)0x0) {
          uVar18 = (ulong)plVar12 / (ulong)plVar24;
        }
        unaff_x27 = (long *)((long)plVar12 - uVar18 * (long)plVar24);
      }
    }
    puVar14 = *(undefined8 **)(*plVar20 + (long)unaff_x27 * 8);
    if (puVar14 != (undefined8 *)0x0) {
      for (plVar22 = (long *)*puVar14; plVar22 != (long *)0x0; plVar22 = (long *)*plVar22) {
        plVar15 = (long *)plVar22[1];
        if (plVar15 == plVar12) {
          plVar15 = plVar20;
          func_0x000107c2b068(plVar20,plVar22 + 2,&pppuStack_a8);
          if (((ulong)plVar15 & 1) != 0) goto LAB_10accc8bc;
        }
        else {
          if (((ulong)plVar24 & uVar25) == 0) {
            plVar15 = (long *)((ulong)plVar15 & uVar25);
          }
          else if (plVar24 <= plVar15) {
            uVar18 = 0;
            if (plVar24 != (long *)0x0) {
              uVar18 = (ulong)plVar15 / (ulong)plVar24;
            }
            plVar15 = (long *)((long)plVar15 - uVar18 * (long)plVar24);
          }
          if (plVar15 != unaff_x27) break;
        }
      }
    }
  }
  plVar22 = (long *)0x60;
  __Znwm();
  lStack_80 = 0;
  *plVar22 = 0;
  plVar22[1] = (long)plVar12;
  plStack_90 = plVar22;
  plStack_88 = plVar20;
  if ((long)uStack_98 < 0) {
    func_0x000107c3192c(plVar22 + 2,pppuStack_a8,uStack_a0);
  }
  else {
    plVar22[3] = uStack_a0;
    plVar22[2] = (long)pppuStack_a8;
    plVar22[4] = (long)uStack_98;
  }
  plVar22[9] = 0;
  plVar22[8] = 0;
  *(undefined1 *)(plVar22 + 6) = 0;
  plVar22[5] = (long)&PTR_FUN_110c6c2d0;
  *(undefined2 *)((long)plVar22 + 0x32) = 8;
  plVar22[0xb] = 0;
  plVar22[10] = 0;
  puVar14 = (undefined8 *)0x18;
  __Znwm();
  *puVar14 = &PTR_FUN_110c6ba30;
  lVar16 = *plVar8;
  *(int *)(puVar14 + 2) = (int)plVar8[1];
  puVar14[1] = lVar16;
  plVar22[0xb] = (long)puVar14;
  lStack_80 = CONCAT71(lStack_80._1_7_,1);
  if ((plVar24 == (long *)0x0) ||
     (*(float *)(plVar10 + 0xb) * (float)plVar24 < (float)(plVar10[10] + 1))) {
    uVar25 = 1;
    if ((long *)0x2 < plVar24) {
      uVar25 = (ulong)(((ulong)plVar24 & (long)plVar24 - 1U) != 0);
    }
    uVar25 = uVar25 | (long)plVar24 << 1;
    uVar18 = (ulong)((float)(plVar10[10] + 1) / *(float *)(plVar10 + 0xb));
    if (uVar25 <= uVar18) {
      uVar25 = uVar18;
    }
    FUN_10a4ba824(plVar20,uVar25);
    plVar24 = (long *)plVar10[8];
    if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
      unaff_x27 = (long *)((long)plVar24 - 1U & (ulong)plVar12);
    }
    else {
      unaff_x27 = plVar12;
      if (plVar24 <= plVar12) {
        uVar25 = 0;
        if (plVar24 != (long *)0x0) {
          uVar25 = (ulong)plVar12 / (ulong)plVar24;
        }
        unaff_x27 = (long *)((long)plVar12 - uVar25 * (long)plVar24);
      }
    }
  }
  lVar16 = *plVar20;
  plVar8 = *(long **)(lVar16 + (long)unaff_x27 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = plVar10 + 9;
    *plStack_90 = *plVar8;
    *plVar8 = (long)plStack_90;
    *(long **)(lVar16 + (long)unaff_x27 * 8) = plVar8;
    if (*plStack_90 != 0) {
      plVar8 = *(long **)(*plStack_90 + 8);
      if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
        plVar8 = (long *)((ulong)plVar8 & (long)plVar24 - 1U);
      }
      else if (plVar24 <= plVar8) {
        uVar25 = 0;
        if (plVar24 != (long *)0x0) {
          uVar25 = (ulong)plVar8 / (ulong)plVar24;
        }
        plVar8 = (long *)((long)plVar8 - uVar25 * (long)plVar24);
      }
      *(long **)(*plVar20 + (long)plVar8 * 8) = plStack_90;
    }
  }
  else {
    *plStack_90 = *plVar8;
    *plVar8 = (long)plStack_90;
  }
  plVar10[10] = plVar10[10] + 1;
  plVar22 = plStack_90;
LAB_10accc8bc:
  func_0x00010a5499ec(plVar10,1,plVar22 + 5,&pppuStack_a8);
  if (*(char *)(plVar10[0x11] + 8) == '\x01') {
    FUN_10a54a030(&plStack_90,plVar10 + 5);
    FUN_10a549a74(plVar10 + 0x10,&plStack_90,&pppuStack_a8);
    plVar8 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar10 = plStack_88 + 1;
      do {
        lVar16 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
  }
  if ((long)uStack_98 < 0) {
    __ZdlPv(pppuStack_a8);
  }
  if ((char)bStack_a9 < '\0') {
    __ZdlPv(puStack_c0);
  }
  *extraout_x8 = 0;
  plVar8 = plVar9 + 0x4b;
  lVar16 = plVar9[0x59];
  uVar25 = lVar16 - 1;
  plVar9[0x59] = uVar25;
  if (uVar25 < 8) {
    uVar25 = plVar8[lVar16 + 2];
    if (plVar9[0x5a] == uVar25) {
      return;
    }
  }
  else {
    uVar25 = *(ulong *)(plVar9[0x57] + -8);
    plVar9[0x57] = plVar9[0x57] + -8;
    if (plVar9[0x5a] == uVar25) {
      return;
    }
  }
  plVar10 = (long *)*plVar8;
  plVar20 = (long *)plVar9[0x4c];
  lVar16 = (long)plVar20 - (long)plVar10;
  uVar18 = lVar16 >> 4;
  if (uVar18 < uVar25) {
    uVar23 = uVar25 - uVar18;
    lVar21 = plVar9[0x4d];
    if ((ulong)(lVar21 - (long)plVar20 >> 4) < uVar23) {
      if (uVar25 >> 0x3c == 0) {
        uVar17 = lVar21 - (long)plVar10 >> 3;
        if (uVar17 <= uVar25) {
          uVar17 = uVar25;
        }
        if (0x7fffffffffffffef < (ulong)(lVar21 - (long)plVar10)) {
          uVar17 = 0xfffffffffffffff;
        }
        plStack_78 = plVar8;
        if (uVar17 >> 0x3c == 0) {
          lVar7 = uVar17 << 4;
          __Znwm();
          lVar1 = lVar7 + lVar16;
          _bzero(lVar1,uVar23 * 0x10);
          lVar19 = lVar1 + uVar18 * -0x10;
          _memcpy(lVar19,plVar10,lVar16);
          *plVar8 = lVar19;
          plVar9[0x4c] = lVar1 + uVar23 * 0x10;
          plVar9[0x4d] = lVar7 + uVar17 * 0x10;
          uStack_98 = plVar10;
          plStack_90 = plVar10;
          plStack_88 = plVar10;
          lStack_80 = lVar21;
          func_0x00010988c1b8(&uStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar6)();
    }
    _bzero(plVar20,uVar23 * 0x10);
    plVar9[0x4c] = (long)(plVar20 + uVar23 * 2);
  }
  else if (uVar25 < uVar18) {
    while (plVar20 != plVar10 + uVar25 * 2) {
      plVar20 = plVar20 + -2;
      func_0x00010988c204(plVar20);
    }
    plVar9[0x4c] = (long)(plVar10 + uVar25 * 2);
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar25;
  return;
}



/* Entry: 10accc52c; end: 10accca3b;  */

void FUN_10accc52c(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined1 **ppuVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 ****ppppuVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  ulong uVar21;
  long *plVar22;
  long *unaff_x27;
  ulong uVar23;
  undefined1 *puStack_b0;
  ulong uStack_a8;
  byte bStack_99;
  undefined8 ***pppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  
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
  FUN_10acc8580(param_2,param_3);
  FUN_10accca3c(param_5);
  func_0x000109898570(&puStack_b0,param_2,param_4);
  func_0x00010a0655d8(param_2,param_4 + 0x10);
  if ((char)plVar10[0xc] == '\x01') {
    FUN_10a00946c(&UNK_10f6a1d58);
LAB_10accc99c:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10accc9a0);
    (*pcVar7)();
  }
  uVar23 = uStack_a8;
  ppuVar6 = (undefined1 **)puStack_b0;
  if (-1 < (char)bStack_99) {
    uVar23 = (ulong)bStack_99;
    ppuVar6 = &puStack_b0;
  }
  if (0x7ffffffffffffff7 < uVar23) {
    func_0x000109ffde50();
    goto LAB_10accc99c;
  }
  if (uVar23 < 0x17) {
    uStack_88 = (long *)CONCAT17((char)uVar23,(undefined7)uStack_88);
    ppppuVar11 = &pppuStack_98;
    if (uVar23 != 0) goto LAB_10accc640;
  }
  else {
    ppppuVar2 = (undefined8 ****)0x19;
    if ((uVar23 | 7) != 0x17) {
      ppppuVar2 = (undefined8 ****)((uVar23 | 7) + 1);
    }
    ppppuVar11 = ppppuVar2;
    __Znwm();
    uStack_88 = (long *)((ulong)ppppuVar2 | 0x8000000000000000);
    pppuStack_98 = ppppuVar11;
    uStack_90 = uVar23;
LAB_10accc640:
    _memmove(ppppuVar11,ppuVar6,uVar23);
  }
  *(undefined1 *)((long)ppppuVar11 + uVar23) = 0;
  FUN_10ac9e388(plVar10,&pppuStack_98,0);
  plVar3 = plVar10 + 7;
  plVar17 = plVar3;
  func_0x000107c2b05c(plVar3,&pppuStack_98);
  plVar22 = (long *)plVar10[8];
  if (plVar22 != (long *)0x0) {
    uVar23 = (long)plVar22 - 1;
    if (((ulong)plVar22 & uVar23) == 0) {
      unaff_x27 = (long *)(uVar23 & (ulong)plVar17);
    }
    else {
      unaff_x27 = plVar17;
      if (plVar22 <= plVar17) {
        uVar16 = 0;
        if (plVar22 != (long *)0x0) {
          uVar16 = (ulong)plVar17 / (ulong)plVar22;
        }
        unaff_x27 = (long *)((long)plVar17 - uVar16 * (long)plVar22);
      }
    }
    puVar12 = *(undefined8 **)(*plVar3 + (long)unaff_x27 * 8);
    if (puVar12 != (undefined8 *)0x0) {
      for (plVar20 = (long *)*puVar12; plVar20 != (long *)0x0; plVar20 = (long *)*plVar20) {
        plVar13 = (long *)plVar20[1];
        if (plVar13 == plVar17) {
          plVar13 = plVar3;
          func_0x000107c2b068(plVar3,plVar20 + 2,&pppuStack_98);
          if (((ulong)plVar13 & 1) != 0) goto LAB_10accc8bc;
        }
        else {
          if (((ulong)plVar22 & uVar23) == 0) {
            plVar13 = (long *)((ulong)plVar13 & uVar23);
          }
          else if (plVar22 <= plVar13) {
            uVar16 = 0;
            if (plVar22 != (long *)0x0) {
              uVar16 = (ulong)plVar13 / (ulong)plVar22;
            }
            plVar13 = (long *)((long)plVar13 - uVar16 * (long)plVar22);
          }
          if (plVar13 != unaff_x27) break;
        }
      }
    }
  }
  plVar20 = (long *)0x60;
  __Znwm();
  lStack_70 = 0;
  *plVar20 = 0;
  plVar20[1] = (long)plVar17;
  plStack_80 = plVar20;
  plStack_78 = plVar3;
  if ((long)uStack_88 < 0) {
    func_0x000107c3192c(plVar20 + 2,pppuStack_98,uStack_90);
  }
  else {
    plVar20[3] = uStack_90;
    plVar20[2] = (long)pppuStack_98;
    plVar20[4] = (long)uStack_88;
  }
  plVar20[9] = 0;
  plVar20[8] = 0;
  *(undefined1 *)(plVar20 + 6) = 0;
  plVar20[5] = (long)&PTR_FUN_110c6c2d0;
  *(undefined2 *)((long)plVar20 + 0x32) = 8;
  plVar20[0xb] = 0;
  plVar20[10] = 0;
  puVar12 = (undefined8 *)0x18;
  __Znwm();
  *puVar12 = &PTR_FUN_110c6ba30;
  lVar14 = *param_2;
  *(int *)(puVar12 + 2) = (int)param_2[1];
  puVar12[1] = lVar14;
  plVar20[0xb] = (long)puVar12;
  lStack_70 = CONCAT71(lStack_70._1_7_,1);
  if ((plVar22 == (long *)0x0) ||
     (*(float *)(plVar10 + 0xb) * (float)plVar22 < (float)(plVar10[10] + 1))) {
    uVar23 = 1;
    if ((long *)0x2 < plVar22) {
      uVar23 = (ulong)(((ulong)plVar22 & (long)plVar22 - 1U) != 0);
    }
    uVar23 = uVar23 | (long)plVar22 << 1;
    uVar16 = (ulong)((float)(plVar10[10] + 1) / *(float *)(plVar10 + 0xb));
    if (uVar23 <= uVar16) {
      uVar23 = uVar16;
    }
    FUN_10a4ba824(plVar3,uVar23);
    plVar22 = (long *)plVar10[8];
    if (((ulong)plVar22 & (long)plVar22 - 1U) == 0) {
      unaff_x27 = (long *)((long)plVar22 - 1U & (ulong)plVar17);
    }
    else {
      unaff_x27 = plVar17;
      if (plVar22 <= plVar17) {
        uVar23 = 0;
        if (plVar22 != (long *)0x0) {
          uVar23 = (ulong)plVar17 / (ulong)plVar22;
        }
        unaff_x27 = (long *)((long)plVar17 - uVar23 * (long)plVar22);
      }
    }
  }
  lVar14 = *plVar3;
  plVar17 = *(long **)(lVar14 + (long)unaff_x27 * 8);
  if (plVar17 == (long *)0x0) {
    plVar17 = plVar10 + 9;
    *plStack_80 = *plVar17;
    *plVar17 = (long)plStack_80;
    *(long **)(lVar14 + (long)unaff_x27 * 8) = plVar17;
    if (*plStack_80 != 0) {
      plVar17 = *(long **)(*plStack_80 + 8);
      if (((ulong)plVar22 & (long)plVar22 - 1U) == 0) {
        plVar17 = (long *)((ulong)plVar17 & (long)plVar22 - 1U);
      }
      else if (plVar22 <= plVar17) {
        uVar23 = 0;
        if (plVar22 != (long *)0x0) {
          uVar23 = (ulong)plVar17 / (ulong)plVar22;
        }
        plVar17 = (long *)((long)plVar17 - uVar23 * (long)plVar22);
      }
      *(long **)(*plVar3 + (long)plVar17 * 8) = plStack_80;
    }
  }
  else {
    *plStack_80 = *plVar17;
    *plVar17 = (long)plStack_80;
  }
  plVar10[10] = plVar10[10] + 1;
  plVar20 = plStack_80;
LAB_10accc8bc:
  func_0x00010a5499ec(plVar10,1,plVar20 + 5,&pppuStack_98);
  if (*(char *)(plVar10[0x11] + 8) == '\x01') {
    FUN_10a54a030(&plStack_80,plVar10 + 5);
    FUN_10a549a74(plVar10 + 0x10,&plStack_80,&pppuStack_98);
    plVar10 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar3 = plStack_78 + 1;
      do {
        lVar14 = *plVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *plVar3 = lVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
  }
  if ((long)uStack_88 < 0) {
    __ZdlPv(pppuStack_98);
  }
  if ((char)bStack_99 < '\0') {
    __ZdlPv(puStack_b0);
  }
  *param_1 = 0;
  plVar10 = plVar9 + 0x4b;
  lVar14 = plVar9[0x59];
  uVar23 = lVar14 - 1;
  plVar9[0x59] = uVar23;
  if (uVar23 < 8) {
    uVar23 = plVar10[lVar14 + 2];
    if (plVar9[0x5a] == uVar23) {
      return;
    }
  }
  else {
    uVar23 = *(ulong *)(plVar9[0x57] + -8);
    plVar9[0x57] = plVar9[0x57] + -8;
    if (plVar9[0x5a] == uVar23) {
      return;
    }
  }
  plVar3 = (long *)*plVar10;
  plVar17 = (long *)plVar9[0x4c];
  lVar14 = (long)plVar17 - (long)plVar3;
  uVar16 = lVar14 >> 4;
  if (uVar16 < uVar23) {
    uVar21 = uVar23 - uVar16;
    lVar19 = plVar9[0x4d];
    if ((ulong)(lVar19 - (long)plVar17 >> 4) < uVar21) {
      if (uVar23 >> 0x3c == 0) {
        uVar15 = lVar19 - (long)plVar3 >> 3;
        if (uVar15 <= uVar23) {
          uVar15 = uVar23;
        }
        if (0x7fffffffffffffef < (ulong)(lVar19 - (long)plVar3)) {
          uVar15 = 0xfffffffffffffff;
        }
        plStack_68 = plVar10;
        if (uVar15 >> 0x3c == 0) {
          lVar8 = uVar15 << 4;
          __Znwm();
          lVar1 = lVar8 + lVar14;
          _bzero(lVar1,uVar21 * 0x10);
          lVar18 = lVar1 + uVar16 * -0x10;
          _memcpy(lVar18,plVar3,lVar14);
          *plVar10 = lVar18;
          plVar9[0x4c] = lVar1 + uVar21 * 0x10;
          plVar9[0x4d] = lVar8 + uVar15 * 0x10;
          uStack_88 = plVar3;
          plStack_80 = plVar3;
          plStack_78 = plVar3;
          lStack_70 = lVar19;
          func_0x00010988c1b8(&uStack_88);
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
    _bzero(plVar17,uVar21 * 0x10);
    plVar9[0x4c] = (long)(plVar17 + uVar21 * 2);
  }
  else if (uVar23 < uVar16) {
    while (plVar17 != plVar3 + uVar23 * 2) {
      plVar17 = plVar17 + -2;
      func_0x00010988c204(plVar17);
    }
    plVar9[0x4c] = (long)(plVar3 + uVar23 * 2);
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar23;
  return;
}



/* Entry: 10accca3c; end: 10accca5f;  */

void FUN_10accca3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  char cVar3;
  bool bVar4;
  undefined1 **ppuVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 ****ppppuVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined4 *extraout_x8;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  ulong uVar23;
  long *plVar24;
  long *unaff_x27;
  ulong uVar25;
  undefined1 *puStack_c0;
  ulong uStack_b8;
  byte bStack_a9;
  undefined8 ***pppuStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar8 = (long *)0x2;
  uVar13 = 0;
  FUN_10a052ee0(2,0,param_1);
  plVar9 = plVar8;
  (**(code **)(*plVar8 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  plVar10 = plVar8;
  FUN_10acc8580(plVar8,uVar13);
  FUN_10acccf68(param_4);
  func_0x000109898570(&puStack_c0,plVar8,param_1);
  func_0x00010a1fba38(plVar8,param_1 + 0x10);
  if ((char)plVar10[0xc] == '\x01') {
    FUN_10a00946c(&UNK_10f6a1d58);
LAB_10acccec8:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10acccecc);
    (*pcVar6)();
  }
  uVar25 = uStack_b8;
  ppuVar5 = (undefined1 **)puStack_c0;
  if (-1 < (char)bStack_a9) {
    uVar25 = (ulong)bStack_a9;
    ppuVar5 = &puStack_c0;
  }
  if (0x7ffffffffffffff7 < uVar25) {
    func_0x000109ffde50();
    goto LAB_10acccec8;
  }
  if (uVar25 < 0x17) {
    uStack_98 = (long *)CONCAT17((char)uVar25,(undefined7)uStack_98);
    ppppuVar11 = &pppuStack_a8;
    if (uVar25 != 0) goto LAB_10acccb74;
  }
  else {
    ppppuVar2 = (undefined8 ****)0x19;
    if ((uVar25 | 7) != 0x17) {
      ppppuVar2 = (undefined8 ****)((uVar25 | 7) + 1);
    }
    ppppuVar11 = ppppuVar2;
    __Znwm();
    uStack_98 = (long *)((ulong)ppppuVar2 | 0x8000000000000000);
    pppuStack_a8 = ppppuVar11;
    uStack_a0 = uVar25;
LAB_10acccb74:
    _memmove(ppppuVar11,ppuVar5,uVar25);
  }
  *(undefined1 *)((long)ppppuVar11 + uVar25) = 0;
  FUN_10ac9e388(plVar10,&pppuStack_a8,0);
  plVar20 = plVar10 + 7;
  plVar12 = plVar20;
  func_0x000107c2b05c(plVar20,&pppuStack_a8);
  plVar24 = (long *)plVar10[8];
  if (plVar24 != (long *)0x0) {
    uVar25 = (long)plVar24 - 1;
    if (((ulong)plVar24 & uVar25) == 0) {
      unaff_x27 = (long *)(uVar25 & (ulong)plVar12);
    }
    else {
      unaff_x27 = plVar12;
      if (plVar24 <= plVar12) {
        uVar18 = 0;
        if (plVar24 != (long *)0x0) {
          uVar18 = (ulong)plVar12 / (ulong)plVar24;
        }
        unaff_x27 = (long *)((long)plVar12 - uVar18 * (long)plVar24);
      }
    }
    puVar14 = *(undefined8 **)(*plVar20 + (long)unaff_x27 * 8);
    if (puVar14 != (undefined8 *)0x0) {
      for (plVar22 = (long *)*puVar14; plVar22 != (long *)0x0; plVar22 = (long *)*plVar22) {
        plVar15 = (long *)plVar22[1];
        if (plVar15 == plVar12) {
          plVar15 = plVar20;
          func_0x000107c2b068(plVar20,plVar22 + 2,&pppuStack_a8);
          if (((ulong)plVar15 & 1) != 0) goto LAB_10acccde8;
        }
        else {
          if (((ulong)plVar24 & uVar25) == 0) {
            plVar15 = (long *)((ulong)plVar15 & uVar25);
          }
          else if (plVar24 <= plVar15) {
            uVar18 = 0;
            if (plVar24 != (long *)0x0) {
              uVar18 = (ulong)plVar15 / (ulong)plVar24;
            }
            plVar15 = (long *)((long)plVar15 - uVar18 * (long)plVar24);
          }
          if (plVar15 != unaff_x27) break;
        }
      }
    }
  }
  plVar22 = (long *)0x60;
  __Znwm();
  lStack_80 = 0;
  *plVar22 = 0;
  plVar22[1] = (long)plVar12;
  plStack_90 = plVar22;
  plStack_88 = plVar20;
  if ((long)uStack_98 < 0) {
    func_0x000107c3192c(plVar22 + 2,pppuStack_a8,uStack_a0);
  }
  else {
    plVar22[3] = uStack_a0;
    plVar22[2] = (long)pppuStack_a8;
    plVar22[4] = (long)uStack_98;
  }
  plVar22[9] = 0;
  plVar22[8] = 0;
  *(undefined1 *)(plVar22 + 6) = 0;
  plVar22[5] = (long)&PTR_FUN_110c6c2d0;
  *(undefined2 *)((long)plVar22 + 0x32) = 9;
  plVar22[0xb] = 0;
  plVar22[10] = 0;
  puVar14 = (undefined8 *)0x18;
  __Znwm();
  *puVar14 = &PTR_FUN_110c6ba80;
  lVar16 = *plVar8;
  puVar14[2] = plVar8[1];
  puVar14[1] = lVar16;
  plVar22[0xb] = (long)puVar14;
  lStack_80 = CONCAT71(lStack_80._1_7_,1);
  if ((plVar24 == (long *)0x0) ||
     (*(float *)(plVar10 + 0xb) * (float)plVar24 < (float)(plVar10[10] + 1))) {
    uVar25 = 1;
    if ((long *)0x2 < plVar24) {
      uVar25 = (ulong)(((ulong)plVar24 & (long)plVar24 - 1U) != 0);
    }
    uVar25 = uVar25 | (long)plVar24 << 1;
    uVar18 = (ulong)((float)(plVar10[10] + 1) / *(float *)(plVar10 + 0xb));
    if (uVar25 <= uVar18) {
      uVar25 = uVar18;
    }
    FUN_10a4ba824(plVar20,uVar25);
    plVar24 = (long *)plVar10[8];
    if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
      unaff_x27 = (long *)((long)plVar24 - 1U & (ulong)plVar12);
    }
    else {
      unaff_x27 = plVar12;
      if (plVar24 <= plVar12) {
        uVar25 = 0;
        if (plVar24 != (long *)0x0) {
          uVar25 = (ulong)plVar12 / (ulong)plVar24;
        }
        unaff_x27 = (long *)((long)plVar12 - uVar25 * (long)plVar24);
      }
    }
  }
  lVar16 = *plVar20;
  plVar8 = *(long **)(lVar16 + (long)unaff_x27 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = plVar10 + 9;
    *plStack_90 = *plVar8;
    *plVar8 = (long)plStack_90;
    *(long **)(lVar16 + (long)unaff_x27 * 8) = plVar8;
    if (*plStack_90 != 0) {
      plVar8 = *(long **)(*plStack_90 + 8);
      if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
        plVar8 = (long *)((ulong)plVar8 & (long)plVar24 - 1U);
      }
      else if (plVar24 <= plVar8) {
        uVar25 = 0;
        if (plVar24 != (long *)0x0) {
          uVar25 = (ulong)plVar8 / (ulong)plVar24;
        }
        plVar8 = (long *)((long)plVar8 - uVar25 * (long)plVar24);
      }
      *(long **)(*plVar20 + (long)plVar8 * 8) = plStack_90;
    }
  }
  else {
    *plStack_90 = *plVar8;
    *plVar8 = (long)plStack_90;
  }
  plVar10[10] = plVar10[10] + 1;
  plVar22 = plStack_90;
LAB_10acccde8:
  func_0x00010a5499ec(plVar10,1,plVar22 + 5,&pppuStack_a8);
  if (*(char *)(plVar10[0x11] + 8) == '\x01') {
    FUN_10a54a030(&plStack_90,plVar10 + 5);
    FUN_10a549a74(plVar10 + 0x10,&plStack_90,&pppuStack_a8);
    plVar8 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar10 = plStack_88 + 1;
      do {
        lVar16 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
  }
  if ((long)uStack_98 < 0) {
    __ZdlPv(pppuStack_a8);
  }
  if ((char)bStack_a9 < '\0') {
    __ZdlPv(puStack_c0);
  }
  *extraout_x8 = 0;
  plVar8 = plVar9 + 0x4b;
  lVar16 = plVar9[0x59];
  uVar25 = lVar16 - 1;
  plVar9[0x59] = uVar25;
  if (uVar25 < 8) {
    uVar25 = plVar8[lVar16 + 2];
    if (plVar9[0x5a] == uVar25) {
      return;
    }
  }
  else {
    uVar25 = *(ulong *)(plVar9[0x57] + -8);
    plVar9[0x57] = plVar9[0x57] + -8;
    if (plVar9[0x5a] == uVar25) {
      return;
    }
  }
  plVar10 = (long *)*plVar8;
  plVar20 = (long *)plVar9[0x4c];
  lVar16 = (long)plVar20 - (long)plVar10;
  uVar18 = lVar16 >> 4;
  if (uVar18 < uVar25) {
    uVar23 = uVar25 - uVar18;
    lVar21 = plVar9[0x4d];
    if ((ulong)(lVar21 - (long)plVar20 >> 4) < uVar23) {
      if (uVar25 >> 0x3c == 0) {
        uVar17 = lVar21 - (long)plVar10 >> 3;
        if (uVar17 <= uVar25) {
          uVar17 = uVar25;
        }
        if (0x7fffffffffffffef < (ulong)(lVar21 - (long)plVar10)) {
          uVar17 = 0xfffffffffffffff;
        }
        plStack_78 = plVar8;
        if (uVar17 >> 0x3c == 0) {
          lVar7 = uVar17 << 4;
          __Znwm();
          lVar1 = lVar7 + lVar16;
          _bzero(lVar1,uVar23 * 0x10);
          lVar19 = lVar1 + uVar18 * -0x10;
          _memcpy(lVar19,plVar10,lVar16);
          *plVar8 = lVar19;
          plVar9[0x4c] = lVar1 + uVar23 * 0x10;
          plVar9[0x4d] = lVar7 + uVar17 * 0x10;
          uStack_98 = plVar10;
          plStack_90 = plVar10;
          plStack_88 = plVar10;
          lStack_80 = lVar21;
          func_0x00010988c1b8(&uStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar6)();
    }
    _bzero(plVar20,uVar23 * 0x10);
    plVar9[0x4c] = (long)(plVar20 + uVar23 * 2);
  }
  else if (uVar25 < uVar18) {
    while (plVar20 != plVar10 + uVar25 * 2) {
      plVar20 = plVar20 + -2;
      func_0x00010988c204(plVar20);
    }
    plVar9[0x4c] = (long)(plVar10 + uVar25 * 2);
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar25;
  return;
}



/* Entry: 10accca60; end: 10acccf67;  */

void FUN_10accca60(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined1 **ppuVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 ****ppppuVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  ulong uVar21;
  long *plVar22;
  long *unaff_x27;
  ulong uVar23;
  undefined1 *puStack_b0;
  ulong uStack_a8;
  byte bStack_99;
  undefined8 ***pppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  
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
  FUN_10acc8580(param_2,param_3);
  FUN_10acccf68(param_5);
  func_0x000109898570(&puStack_b0,param_2,param_4);
  func_0x00010a1fba38(param_2,param_4 + 0x10);
  if ((char)plVar10[0xc] == '\x01') {
    FUN_10a00946c(&UNK_10f6a1d58);
LAB_10acccec8:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10acccecc);
    (*pcVar7)();
  }
  uVar23 = uStack_a8;
  ppuVar6 = (undefined1 **)puStack_b0;
  if (-1 < (char)bStack_99) {
    uVar23 = (ulong)bStack_99;
    ppuVar6 = &puStack_b0;
  }
  if (0x7ffffffffffffff7 < uVar23) {
    func_0x000109ffde50();
    goto LAB_10acccec8;
  }
  if (uVar23 < 0x17) {
    uStack_88 = (long *)CONCAT17((char)uVar23,(undefined7)uStack_88);
    ppppuVar11 = &pppuStack_98;
    if (uVar23 != 0) goto LAB_10acccb74;
  }
  else {
    ppppuVar2 = (undefined8 ****)0x19;
    if ((uVar23 | 7) != 0x17) {
      ppppuVar2 = (undefined8 ****)((uVar23 | 7) + 1);
    }
    ppppuVar11 = ppppuVar2;
    __Znwm();
    uStack_88 = (long *)((ulong)ppppuVar2 | 0x8000000000000000);
    pppuStack_98 = ppppuVar11;
    uStack_90 = uVar23;
LAB_10acccb74:
    _memmove(ppppuVar11,ppuVar6,uVar23);
  }
  *(undefined1 *)((long)ppppuVar11 + uVar23) = 0;
  FUN_10ac9e388(plVar10,&pppuStack_98,0);
  plVar3 = plVar10 + 7;
  plVar17 = plVar3;
  func_0x000107c2b05c(plVar3,&pppuStack_98);
  plVar22 = (long *)plVar10[8];
  if (plVar22 != (long *)0x0) {
    uVar23 = (long)plVar22 - 1;
    if (((ulong)plVar22 & uVar23) == 0) {
      unaff_x27 = (long *)(uVar23 & (ulong)plVar17);
    }
    else {
      unaff_x27 = plVar17;
      if (plVar22 <= plVar17) {
        uVar16 = 0;
        if (plVar22 != (long *)0x0) {
          uVar16 = (ulong)plVar17 / (ulong)plVar22;
        }
        unaff_x27 = (long *)((long)plVar17 - uVar16 * (long)plVar22);
      }
    }
    puVar12 = *(undefined8 **)(*plVar3 + (long)unaff_x27 * 8);
    if (puVar12 != (undefined8 *)0x0) {
      for (plVar20 = (long *)*puVar12; plVar20 != (long *)0x0; plVar20 = (long *)*plVar20) {
        plVar13 = (long *)plVar20[1];
        if (plVar13 == plVar17) {
          plVar13 = plVar3;
          func_0x000107c2b068(plVar3,plVar20 + 2,&pppuStack_98);
          if (((ulong)plVar13 & 1) != 0) goto LAB_10acccde8;
        }
        else {
          if (((ulong)plVar22 & uVar23) == 0) {
            plVar13 = (long *)((ulong)plVar13 & uVar23);
          }
          else if (plVar22 <= plVar13) {
            uVar16 = 0;
            if (plVar22 != (long *)0x0) {
              uVar16 = (ulong)plVar13 / (ulong)plVar22;
            }
            plVar13 = (long *)((long)plVar13 - uVar16 * (long)plVar22);
          }
          if (plVar13 != unaff_x27) break;
        }
      }
    }
  }
  plVar20 = (long *)0x60;
  __Znwm();
  lStack_70 = 0;
  *plVar20 = 0;
  plVar20[1] = (long)plVar17;
  plStack_80 = plVar20;
  plStack_78 = plVar3;
  if ((long)uStack_88 < 0) {
    func_0x000107c3192c(plVar20 + 2,pppuStack_98,uStack_90);
  }
  else {
    plVar20[3] = uStack_90;
    plVar20[2] = (long)pppuStack_98;
    plVar20[4] = (long)uStack_88;
  }
  plVar20[9] = 0;
  plVar20[8] = 0;
  *(undefined1 *)(plVar20 + 6) = 0;
  plVar20[5] = (long)&PTR_FUN_110c6c2d0;
  *(undefined2 *)((long)plVar20 + 0x32) = 9;
  plVar20[0xb] = 0;
  plVar20[10] = 0;
  puVar12 = (undefined8 *)0x18;
  __Znwm();
  *puVar12 = &PTR_FUN_110c6ba80;
  lVar14 = *param_2;
  puVar12[2] = param_2[1];
  puVar12[1] = lVar14;
  plVar20[0xb] = (long)puVar12;
  lStack_70 = CONCAT71(lStack_70._1_7_,1);
  if ((plVar22 == (long *)0x0) ||
     (*(float *)(plVar10 + 0xb) * (float)plVar22 < (float)(plVar10[10] + 1))) {
    uVar23 = 1;
    if ((long *)0x2 < plVar22) {
      uVar23 = (ulong)(((ulong)plVar22 & (long)plVar22 - 1U) != 0);
    }
    uVar23 = uVar23 | (long)plVar22 << 1;
    uVar16 = (ulong)((float)(plVar10[10] + 1) / *(float *)(plVar10 + 0xb));
    if (uVar23 <= uVar16) {
      uVar23 = uVar16;
    }
    FUN_10a4ba824(plVar3,uVar23);
    plVar22 = (long *)plVar10[8];
    if (((ulong)plVar22 & (long)plVar22 - 1U) == 0) {
      unaff_x27 = (long *)((long)plVar22 - 1U & (ulong)plVar17);
    }
    else {
      unaff_x27 = plVar17;
      if (plVar22 <= plVar17) {
        uVar23 = 0;
        if (plVar22 != (long *)0x0) {
          uVar23 = (ulong)plVar17 / (ulong)plVar22;
        }
        unaff_x27 = (long *)((long)plVar17 - uVar23 * (long)plVar22);
      }
    }
  }
  lVar14 = *plVar3;
  plVar17 = *(long **)(lVar14 + (long)unaff_x27 * 8);
  if (plVar17 == (long *)0x0) {
    plVar17 = plVar10 + 9;
    *plStack_80 = *plVar17;
    *plVar17 = (long)plStack_80;
    *(long **)(lVar14 + (long)unaff_x27 * 8) = plVar17;
    if (*plStack_80 != 0) {
      plVar17 = *(long **)(*plStack_80 + 8);
      if (((ulong)plVar22 & (long)plVar22 - 1U) == 0) {
        plVar17 = (long *)((ulong)plVar17 & (long)plVar22 - 1U);
      }
      else if (plVar22 <= plVar17) {
        uVar23 = 0;
        if (plVar22 != (long *)0x0) {
          uVar23 = (ulong)plVar17 / (ulong)plVar22;
        }
        plVar17 = (long *)((long)plVar17 - uVar23 * (long)plVar22);
      }
      *(long **)(*plVar3 + (long)plVar17 * 8) = plStack_80;
    }
  }
  else {
    *plStack_80 = *plVar17;
    *plVar17 = (long)plStack_80;
  }
  plVar10[10] = plVar10[10] + 1;
  plVar20 = plStack_80;
LAB_10acccde8:
  func_0x00010a5499ec(plVar10,1,plVar20 + 5,&pppuStack_98);
  if (*(char *)(plVar10[0x11] + 8) == '\x01') {
    FUN_10a54a030(&plStack_80,plVar10 + 5);
    FUN_10a549a74(plVar10 + 0x10,&plStack_80,&pppuStack_98);
    plVar10 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar3 = plStack_78 + 1;
      do {
        lVar14 = *plVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *plVar3 = lVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
  }
  if ((long)uStack_88 < 0) {
    __ZdlPv(pppuStack_98);
  }
  if ((char)bStack_99 < '\0') {
    __ZdlPv(puStack_b0);
  }
  *param_1 = 0;
  plVar10 = plVar9 + 0x4b;
  lVar14 = plVar9[0x59];
  uVar23 = lVar14 - 1;
  plVar9[0x59] = uVar23;
  if (uVar23 < 8) {
    uVar23 = plVar10[lVar14 + 2];
    if (plVar9[0x5a] == uVar23) {
      return;
    }
  }
  else {
    uVar23 = *(ulong *)(plVar9[0x57] + -8);
    plVar9[0x57] = plVar9[0x57] + -8;
    if (plVar9[0x5a] == uVar23) {
      return;
    }
  }
  plVar3 = (long *)*plVar10;
  plVar17 = (long *)plVar9[0x4c];
  lVar14 = (long)plVar17 - (long)plVar3;
  uVar16 = lVar14 >> 4;
  if (uVar16 < uVar23) {
    uVar21 = uVar23 - uVar16;
    lVar19 = plVar9[0x4d];
    if ((ulong)(lVar19 - (long)plVar17 >> 4) < uVar21) {
      if (uVar23 >> 0x3c == 0) {
        uVar15 = lVar19 - (long)plVar3 >> 3;
        if (uVar15 <= uVar23) {
          uVar15 = uVar23;
        }
        if (0x7fffffffffffffef < (ulong)(lVar19 - (long)plVar3)) {
          uVar15 = 0xfffffffffffffff;
        }
        plStack_68 = plVar10;
        if (uVar15 >> 0x3c == 0) {
          lVar8 = uVar15 << 4;
          __Znwm();
          lVar1 = lVar8 + lVar14;
          _bzero(lVar1,uVar21 * 0x10);
          lVar18 = lVar1 + uVar16 * -0x10;
          _memcpy(lVar18,plVar3,lVar14);
          *plVar10 = lVar18;
          plVar9[0x4c] = lVar1 + uVar21 * 0x10;
          plVar9[0x4d] = lVar8 + uVar15 * 0x10;
          uStack_88 = plVar3;
          plStack_80 = plVar3;
          plStack_78 = plVar3;
          lStack_70 = lVar19;
          func_0x00010988c1b8(&uStack_88);
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
    _bzero(plVar17,uVar21 * 0x10);
    plVar9[0x4c] = (long)(plVar17 + uVar21 * 2);
  }
  else if (uVar23 < uVar16) {
    while (plVar17 != plVar3 + uVar23 * 2) {
      plVar17 = plVar17 + -2;
      func_0x00010988c204(plVar17);
    }
    plVar9[0x4c] = (long)(plVar3 + uVar23 * 2);
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar23;
  return;
}



/* Entry: 10acccf68; end: 10acccf8b;  */

void FUN_10acccf68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  char cVar3;
  bool bVar4;
  undefined1 **ppuVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 ****ppppuVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined4 *extraout_x8;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  ulong uVar23;
  long *plVar24;
  long *unaff_x27;
  ulong uVar25;
  undefined1 *puStack_c0;
  ulong uStack_b8;
  byte bStack_a9;
  undefined8 ***pppuStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar8 = (long *)0x2;
  uVar13 = 0;
  FUN_10a052ee0(2,0,param_1);
  plVar9 = plVar8;
  (**(code **)(*plVar8 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  plVar10 = plVar8;
  FUN_10acc8580(plVar8,uVar13);
  FUN_10accd494(param_4);
  func_0x000109898570(&puStack_c0,plVar8,param_1);
  FUN_10a36c130(plVar8,param_1 + 0x10);
  if ((char)plVar10[0xc] == '\x01') {
    FUN_10a00946c(&UNK_10f6a1d58);
LAB_10accd3f4:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10accd3f8);
    (*pcVar6)();
  }
  uVar25 = uStack_b8;
  ppuVar5 = (undefined1 **)puStack_c0;
  if (-1 < (char)bStack_a9) {
    uVar25 = (ulong)bStack_a9;
    ppuVar5 = &puStack_c0;
  }
  if (0x7ffffffffffffff7 < uVar25) {
    func_0x000109ffde50();
    goto LAB_10accd3f4;
  }
  if (uVar25 < 0x17) {
    uStack_98 = (long *)CONCAT17((char)uVar25,(undefined7)uStack_98);
    ppppuVar11 = &pppuStack_a8;
    if (uVar25 != 0) goto LAB_10accd0a0;
  }
  else {
    ppppuVar2 = (undefined8 ****)0x19;
    if ((uVar25 | 7) != 0x17) {
      ppppuVar2 = (undefined8 ****)((uVar25 | 7) + 1);
    }
    ppppuVar11 = ppppuVar2;
    __Znwm();
    uStack_98 = (long *)((ulong)ppppuVar2 | 0x8000000000000000);
    pppuStack_a8 = ppppuVar11;
    uStack_a0 = uVar25;
LAB_10accd0a0:
    _memmove(ppppuVar11,ppuVar5,uVar25);
  }
  *(undefined1 *)((long)ppppuVar11 + uVar25) = 0;
  FUN_10ac9e388(plVar10,&pppuStack_a8,0);
  plVar20 = plVar10 + 7;
  plVar12 = plVar20;
  func_0x000107c2b05c(plVar20,&pppuStack_a8);
  plVar24 = (long *)plVar10[8];
  if (plVar24 != (long *)0x0) {
    uVar25 = (long)plVar24 - 1;
    if (((ulong)plVar24 & uVar25) == 0) {
      unaff_x27 = (long *)(uVar25 & (ulong)plVar12);
    }
    else {
      unaff_x27 = plVar12;
      if (plVar24 <= plVar12) {
        uVar18 = 0;
        if (plVar24 != (long *)0x0) {
          uVar18 = (ulong)plVar12 / (ulong)plVar24;
        }
        unaff_x27 = (long *)((long)plVar12 - uVar18 * (long)plVar24);
      }
    }
    puVar14 = *(undefined8 **)(*plVar20 + (long)unaff_x27 * 8);
    if (puVar14 != (undefined8 *)0x0) {
      for (plVar22 = (long *)*puVar14; plVar22 != (long *)0x0; plVar22 = (long *)*plVar22) {
        plVar15 = (long *)plVar22[1];
        if (plVar15 == plVar12) {
          plVar15 = plVar20;
          func_0x000107c2b068(plVar20,plVar22 + 2,&pppuStack_a8);
          if (((ulong)plVar15 & 1) != 0) goto LAB_10accd314;
        }
        else {
          if (((ulong)plVar24 & uVar25) == 0) {
            plVar15 = (long *)((ulong)plVar15 & uVar25);
          }
          else if (plVar24 <= plVar15) {
            uVar18 = 0;
            if (plVar24 != (long *)0x0) {
              uVar18 = (ulong)plVar15 / (ulong)plVar24;
            }
            plVar15 = (long *)((long)plVar15 - uVar18 * (long)plVar24);
          }
          if (plVar15 != unaff_x27) break;
        }
      }
    }
  }
  plVar22 = (long *)0x60;
  __Znwm();
  lStack_80 = 0;
  *plVar22 = 0;
  plVar22[1] = (long)plVar12;
  plStack_90 = plVar22;
  plStack_88 = plVar20;
  if ((long)uStack_98 < 0) {
    func_0x000107c3192c(plVar22 + 2,pppuStack_a8,uStack_a0);
  }
  else {
    plVar22[3] = uStack_a0;
    plVar22[2] = (long)pppuStack_a8;
    plVar22[4] = (long)uStack_98;
  }
  plVar22[9] = 0;
  plVar22[8] = 0;
  *(undefined1 *)(plVar22 + 6) = 0;
  plVar22[5] = (long)&PTR_FUN_110c6c2d0;
  *(undefined2 *)((long)plVar22 + 0x32) = 0x16;
  plVar22[0xb] = 0;
  plVar22[10] = 0;
  puVar14 = (undefined8 *)0x18;
  __Znwm();
  *puVar14 = &PTR_FUN_110c6bad0;
  lVar16 = *plVar8;
  puVar14[2] = plVar8[1];
  puVar14[1] = lVar16;
  plVar22[0xb] = (long)puVar14;
  lStack_80 = CONCAT71(lStack_80._1_7_,1);
  if ((plVar24 == (long *)0x0) ||
     (*(float *)(plVar10 + 0xb) * (float)plVar24 < (float)(plVar10[10] + 1))) {
    uVar25 = 1;
    if ((long *)0x2 < plVar24) {
      uVar25 = (ulong)(((ulong)plVar24 & (long)plVar24 - 1U) != 0);
    }
    uVar25 = uVar25 | (long)plVar24 << 1;
    uVar18 = (ulong)((float)(plVar10[10] + 1) / *(float *)(plVar10 + 0xb));
    if (uVar25 <= uVar18) {
      uVar25 = uVar18;
    }
    FUN_10a4ba824(plVar20,uVar25);
    plVar24 = (long *)plVar10[8];
    if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
      unaff_x27 = (long *)((long)plVar24 - 1U & (ulong)plVar12);
    }
    else {
      unaff_x27 = plVar12;
      if (plVar24 <= plVar12) {
        uVar25 = 0;
        if (plVar24 != (long *)0x0) {
          uVar25 = (ulong)plVar12 / (ulong)plVar24;
        }
        unaff_x27 = (long *)((long)plVar12 - uVar25 * (long)plVar24);
      }
    }
  }
  lVar16 = *plVar20;
  plVar8 = *(long **)(lVar16 + (long)unaff_x27 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = plVar10 + 9;
    *plStack_90 = *plVar8;
    *plVar8 = (long)plStack_90;
    *(long **)(lVar16 + (long)unaff_x27 * 8) = plVar8;
    if (*plStack_90 != 0) {
      plVar8 = *(long **)(*plStack_90 + 8);
      if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
        plVar8 = (long *)((ulong)plVar8 & (long)plVar24 - 1U);
      }
      else if (plVar24 <= plVar8) {
        uVar25 = 0;
        if (plVar24 != (long *)0x0) {
          uVar25 = (ulong)plVar8 / (ulong)plVar24;
        }
        plVar8 = (long *)((long)plVar8 - uVar25 * (long)plVar24);
      }
      *(long **)(*plVar20 + (long)plVar8 * 8) = plStack_90;
    }
  }
  else {
    *plStack_90 = *plVar8;
    *plVar8 = (long)plStack_90;
  }
  plVar10[10] = plVar10[10] + 1;
  plVar22 = plStack_90;
LAB_10accd314:
  func_0x00010a5499ec(plVar10,1,plVar22 + 5,&pppuStack_a8);
  if (*(char *)(plVar10[0x11] + 8) == '\x01') {
    FUN_10a54a030(&plStack_90,plVar10 + 5);
    FUN_10a549a74(plVar10 + 0x10,&plStack_90,&pppuStack_a8);
    plVar8 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar10 = plStack_88 + 1;
      do {
        lVar16 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
  }
  if ((long)uStack_98 < 0) {
    __ZdlPv(pppuStack_a8);
  }
  if ((char)bStack_a9 < '\0') {
    __ZdlPv(puStack_c0);
  }
  *extraout_x8 = 0;
  plVar8 = plVar9 + 0x4b;
  lVar16 = plVar9[0x59];
  uVar25 = lVar16 - 1;
  plVar9[0x59] = uVar25;
  if (uVar25 < 8) {
    uVar25 = plVar8[lVar16 + 2];
    if (plVar9[0x5a] == uVar25) {
      return;
    }
  }
  else {
    uVar25 = *(ulong *)(plVar9[0x57] + -8);
    plVar9[0x57] = plVar9[0x57] + -8;
    if (plVar9[0x5a] == uVar25) {
      return;
    }
  }
  plVar10 = (long *)*plVar8;
  plVar20 = (long *)plVar9[0x4c];
  lVar16 = (long)plVar20 - (long)plVar10;
  uVar18 = lVar16 >> 4;
  if (uVar18 < uVar25) {
    uVar23 = uVar25 - uVar18;
    lVar21 = plVar9[0x4d];
    if ((ulong)(lVar21 - (long)plVar20 >> 4) < uVar23) {
      if (uVar25 >> 0x3c == 0) {
        uVar17 = lVar21 - (long)plVar10 >> 3;
        if (uVar17 <= uVar25) {
          uVar17 = uVar25;
        }
        if (0x7fffffffffffffef < (ulong)(lVar21 - (long)plVar10)) {
          uVar17 = 0xfffffffffffffff;
        }
        plStack_78 = plVar8;
        if (uVar17 >> 0x3c == 0) {
          lVar7 = uVar17 << 4;
          __Znwm();
          lVar1 = lVar7 + lVar16;
          _bzero(lVar1,uVar23 * 0x10);
          lVar19 = lVar1 + uVar18 * -0x10;
          _memcpy(lVar19,plVar10,lVar16);
          *plVar8 = lVar19;
          plVar9[0x4c] = lVar1 + uVar23 * 0x10;
          plVar9[0x4d] = lVar7 + uVar17 * 0x10;
          uStack_98 = plVar10;
          plStack_90 = plVar10;
          plStack_88 = plVar10;
          lStack_80 = lVar21;
          func_0x00010988c1b8(&uStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar6)();
    }
    _bzero(plVar20,uVar23 * 0x10);
    plVar9[0x4c] = (long)(plVar20 + uVar23 * 2);
  }
  else if (uVar25 < uVar18) {
    while (plVar20 != plVar10 + uVar25 * 2) {
      plVar20 = plVar20 + -2;
      func_0x00010988c204(plVar20);
    }
    plVar9[0x4c] = (long)(plVar10 + uVar25 * 2);
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar25;
  return;
}



/* Entry: 10acccf8c; end: 10accd493;  */

void FUN_10acccf8c(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined1 **ppuVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 ****ppppuVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  ulong uVar21;
  long *plVar22;
  long *unaff_x27;
  ulong uVar23;
  undefined1 *puStack_b0;
  ulong uStack_a8;
  byte bStack_99;
  undefined8 ***pppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  
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
  FUN_10acc8580(param_2,param_3);
  FUN_10accd494(param_5);
  func_0x000109898570(&puStack_b0,param_2,param_4);
  FUN_10a36c130(param_2,param_4 + 0x10);
  if ((char)plVar10[0xc] == '\x01') {
    FUN_10a00946c(&UNK_10f6a1d58);
LAB_10accd3f4:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10accd3f8);
    (*pcVar7)();
  }
  uVar23 = uStack_a8;
  ppuVar6 = (undefined1 **)puStack_b0;
  if (-1 < (char)bStack_99) {
    uVar23 = (ulong)bStack_99;
    ppuVar6 = &puStack_b0;
  }
  if (0x7ffffffffffffff7 < uVar23) {
    func_0x000109ffde50();
    goto LAB_10accd3f4;
  }
  if (uVar23 < 0x17) {
    uStack_88 = (long *)CONCAT17((char)uVar23,(undefined7)uStack_88);
    ppppuVar11 = &pppuStack_98;
    if (uVar23 != 0) goto LAB_10accd0a0;
  }
  else {
    ppppuVar2 = (undefined8 ****)0x19;
    if ((uVar23 | 7) != 0x17) {
      ppppuVar2 = (undefined8 ****)((uVar23 | 7) + 1);
    }
    ppppuVar11 = ppppuVar2;
    __Znwm();
    uStack_88 = (long *)((ulong)ppppuVar2 | 0x8000000000000000);
    pppuStack_98 = ppppuVar11;
    uStack_90 = uVar23;
LAB_10accd0a0:
    _memmove(ppppuVar11,ppuVar6,uVar23);
  }
  *(undefined1 *)((long)ppppuVar11 + uVar23) = 0;
  FUN_10ac9e388(plVar10,&pppuStack_98,0);
  plVar3 = plVar10 + 7;
  plVar17 = plVar3;
  func_0x000107c2b05c(plVar3,&pppuStack_98);
  plVar22 = (long *)plVar10[8];
  if (plVar22 != (long *)0x0) {
    uVar23 = (long)plVar22 - 1;
    if (((ulong)plVar22 & uVar23) == 0) {
      unaff_x27 = (long *)(uVar23 & (ulong)plVar17);
    }
    else {
      unaff_x27 = plVar17;
      if (plVar22 <= plVar17) {
        uVar16 = 0;
        if (plVar22 != (long *)0x0) {
          uVar16 = (ulong)plVar17 / (ulong)plVar22;
        }
        unaff_x27 = (long *)((long)plVar17 - uVar16 * (long)plVar22);
      }
    }
    puVar12 = *(undefined8 **)(*plVar3 + (long)unaff_x27 * 8);
    if (puVar12 != (undefined8 *)0x0) {
      for (plVar20 = (long *)*puVar12; plVar20 != (long *)0x0; plVar20 = (long *)*plVar20) {
        plVar13 = (long *)plVar20[1];
        if (plVar13 == plVar17) {
          plVar13 = plVar3;
          func_0x000107c2b068(plVar3,plVar20 + 2,&pppuStack_98);
          if (((ulong)plVar13 & 1) != 0) goto LAB_10accd314;
        }
        else {
          if (((ulong)plVar22 & uVar23) == 0) {
            plVar13 = (long *)((ulong)plVar13 & uVar23);
          }
          else if (plVar22 <= plVar13) {
            uVar16 = 0;
            if (plVar22 != (long *)0x0) {
              uVar16 = (ulong)plVar13 / (ulong)plVar22;
            }
            plVar13 = (long *)((long)plVar13 - uVar16 * (long)plVar22);
          }
          if (plVar13 != unaff_x27) break;
        }
      }
    }
  }
  plVar20 = (long *)0x60;
  __Znwm();
  lStack_70 = 0;
  *plVar20 = 0;
  plVar20[1] = (long)plVar17;
  plStack_80 = plVar20;
  plStack_78 = plVar3;
  if ((long)uStack_88 < 0) {
    func_0x000107c3192c(plVar20 + 2,pppuStack_98,uStack_90);
  }
  else {
    plVar20[3] = uStack_90;
    plVar20[2] = (long)pppuStack_98;
    plVar20[4] = (long)uStack_88;
  }
  plVar20[9] = 0;
  plVar20[8] = 0;
  *(undefined1 *)(plVar20 + 6) = 0;
  plVar20[5] = (long)&PTR_FUN_110c6c2d0;
  *(undefined2 *)((long)plVar20 + 0x32) = 0x16;
  plVar20[0xb] = 0;
  plVar20[10] = 0;
  puVar12 = (undefined8 *)0x18;
  __Znwm();
  *puVar12 = &PTR_FUN_110c6bad0;
  lVar14 = *param_2;
  puVar12[2] = param_2[1];
  puVar12[1] = lVar14;
  plVar20[0xb] = (long)puVar12;
  lStack_70 = CONCAT71(lStack_70._1_7_,1);
  if ((plVar22 == (long *)0x0) ||
     (*(float *)(plVar10 + 0xb) * (float)plVar22 < (float)(plVar10[10] + 1))) {
    uVar23 = 1;
    if ((long *)0x2 < plVar22) {
      uVar23 = (ulong)(((ulong)plVar22 & (long)plVar22 - 1U) != 0);
    }
    uVar23 = uVar23 | (long)plVar22 << 1;
    uVar16 = (ulong)((float)(plVar10[10] + 1) / *(float *)(plVar10 + 0xb));
    if (uVar23 <= uVar16) {
      uVar23 = uVar16;
    }
    FUN_10a4ba824(plVar3,uVar23);
    plVar22 = (long *)plVar10[8];
    if (((ulong)plVar22 & (long)plVar22 - 1U) == 0) {
      unaff_x27 = (long *)((long)plVar22 - 1U & (ulong)plVar17);
    }
    else {
      unaff_x27 = plVar17;
      if (plVar22 <= plVar17) {
        uVar23 = 0;
        if (plVar22 != (long *)0x0) {
          uVar23 = (ulong)plVar17 / (ulong)plVar22;
        }
        unaff_x27 = (long *)((long)plVar17 - uVar23 * (long)plVar22);
      }
    }
  }
  lVar14 = *plVar3;
  plVar17 = *(long **)(lVar14 + (long)unaff_x27 * 8);
  if (plVar17 == (long *)0x0) {
    plVar17 = plVar10 + 9;
    *plStack_80 = *plVar17;
    *plVar17 = (long)plStack_80;
    *(long **)(lVar14 + (long)unaff_x27 * 8) = plVar17;
    if (*plStack_80 != 0) {
      plVar17 = *(long **)(*plStack_80 + 8);
      if (((ulong)plVar22 & (long)plVar22 - 1U) == 0) {
        plVar17 = (long *)((ulong)plVar17 & (long)plVar22 - 1U);
      }
      else if (plVar22 <= plVar17) {
        uVar23 = 0;
        if (plVar22 != (long *)0x0) {
          uVar23 = (ulong)plVar17 / (ulong)plVar22;
        }
        plVar17 = (long *)((long)plVar17 - uVar23 * (long)plVar22);
      }
      *(long **)(*plVar3 + (long)plVar17 * 8) = plStack_80;
    }
  }
  else {
    *plStack_80 = *plVar17;
    *plVar17 = (long)plStack_80;
  }
  plVar10[10] = plVar10[10] + 1;
  plVar20 = plStack_80;
LAB_10accd314:
  func_0x00010a5499ec(plVar10,1,plVar20 + 5,&pppuStack_98);
  if (*(char *)(plVar10[0x11] + 8) == '\x01') {
    FUN_10a54a030(&plStack_80,plVar10 + 5);
    FUN_10a549a74(plVar10 + 0x10,&plStack_80,&pppuStack_98);
    plVar10 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar3 = plStack_78 + 1;
      do {
        lVar14 = *plVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *plVar3 = lVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
  }
  if ((long)uStack_88 < 0) {
    __ZdlPv(pppuStack_98);
  }
  if ((char)bStack_99 < '\0') {
    __ZdlPv(puStack_b0);
  }
  *param_1 = 0;
  plVar10 = plVar9 + 0x4b;
  lVar14 = plVar9[0x59];
  uVar23 = lVar14 - 1;
  plVar9[0x59] = uVar23;
  if (uVar23 < 8) {
    uVar23 = plVar10[lVar14 + 2];
    if (plVar9[0x5a] == uVar23) {
      return;
    }
  }
  else {
    uVar23 = *(ulong *)(plVar9[0x57] + -8);
    plVar9[0x57] = plVar9[0x57] + -8;
    if (plVar9[0x5a] == uVar23) {
      return;
    }
  }
  plVar3 = (long *)*plVar10;
  plVar17 = (long *)plVar9[0x4c];
  lVar14 = (long)plVar17 - (long)plVar3;
  uVar16 = lVar14 >> 4;
  if (uVar16 < uVar23) {
    uVar21 = uVar23 - uVar16;
    lVar19 = plVar9[0x4d];
    if ((ulong)(lVar19 - (long)plVar17 >> 4) < uVar21) {
      if (uVar23 >> 0x3c == 0) {
        uVar15 = lVar19 - (long)plVar3 >> 3;
        if (uVar15 <= uVar23) {
          uVar15 = uVar23;
        }
        if (0x7fffffffffffffef < (ulong)(lVar19 - (long)plVar3)) {
          uVar15 = 0xfffffffffffffff;
        }
        plStack_68 = plVar10;
        if (uVar15 >> 0x3c == 0) {
          lVar8 = uVar15 << 4;
          __Znwm();
          lVar1 = lVar8 + lVar14;
          _bzero(lVar1,uVar21 * 0x10);
          lVar18 = lVar1 + uVar16 * -0x10;
          _memcpy(lVar18,plVar3,lVar14);
          *plVar10 = lVar18;
          plVar9[0x4c] = lVar1 + uVar21 * 0x10;
          plVar9[0x4d] = lVar8 + uVar15 * 0x10;
          uStack_88 = plVar3;
          plStack_80 = plVar3;
          plStack_78 = plVar3;
          lStack_70 = lVar19;
          func_0x00010988c1b8(&uStack_88);
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
    _bzero(plVar17,uVar21 * 0x10);
    plVar9[0x4c] = (long)(plVar17 + uVar21 * 2);
  }
  else if (uVar23 < uVar16) {
    while (plVar17 != plVar3 + uVar23 * 2) {
      plVar17 = plVar17 + -2;
      func_0x00010988c204(plVar17);
    }
    plVar9[0x4c] = (long)(plVar3 + uVar23 * 2);
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar23;
  return;
}



/* Entry: 10accd494; end: 10accd4b7;  */

void FUN_10accd494(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 ****ppppuVar1;
  char cVar2;
  bool bVar3;
  undefined1 **ppuVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 ****ppppuVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined4 *extraout_x8;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  ulong uVar22;
  long *plVar23;
  long *unaff_x27;
  ulong uVar24;
  long lVar25;
  undefined1 *puStack_c0;
  ulong uStack_b8;
  byte bStack_a9;
  undefined8 ***pppuStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar7 = (long *)0x2;
  uVar12 = 0;
  FUN_10a052ee0(2,0,param_1);
  plVar8 = plVar7;
  (**(code **)(*plVar7 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  plVar9 = plVar7;
  FUN_10acc8580(plVar7,uVar12);
  FUN_10accd9cc(param_4);
  func_0x000109898570(&puStack_c0,plVar7,param_1);
  func_0x00010a1f8668(plVar7,param_1 + 0x10);
  if ((char)plVar9[0xc] == '\x01') {
    FUN_10a00946c(&UNK_10f6a1d58);
LAB_10accd92c:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10accd930);
    (*pcVar5)();
  }
  uVar24 = uStack_b8;
  ppuVar4 = (undefined1 **)puStack_c0;
  if (-1 < (char)bStack_a9) {
    uVar24 = (ulong)bStack_a9;
    ppuVar4 = &puStack_c0;
  }
  if (0x7ffffffffffffff7 < uVar24) {
    func_0x000109ffde50();
    goto LAB_10accd92c;
  }
  if (uVar24 < 0x17) {
    uStack_98 = (long *)CONCAT17((char)uVar24,(undefined7)uStack_98);
    ppppuVar10 = &pppuStack_a8;
    if (uVar24 != 0) goto LAB_10accd5cc;
  }
  else {
    ppppuVar1 = (undefined8 ****)0x19;
    if ((uVar24 | 7) != 0x17) {
      ppppuVar1 = (undefined8 ****)((uVar24 | 7) + 1);
    }
    ppppuVar10 = ppppuVar1;
    __Znwm();
    uStack_98 = (long *)((ulong)ppppuVar1 | 0x8000000000000000);
    pppuStack_a8 = ppppuVar10;
    uStack_a0 = uVar24;
LAB_10accd5cc:
    _memmove(ppppuVar10,ppuVar4,uVar24);
  }
  *(undefined1 *)((long)ppppuVar10 + uVar24) = 0;
  FUN_10ac9e388(plVar9,&pppuStack_a8,0);
  plVar19 = plVar9 + 7;
  plVar11 = plVar19;
  func_0x000107c2b05c(plVar19,&pppuStack_a8);
  plVar23 = (long *)plVar9[8];
  if (plVar23 != (long *)0x0) {
    uVar24 = (long)plVar23 - 1;
    if (((ulong)plVar23 & uVar24) == 0) {
      unaff_x27 = (long *)(uVar24 & (ulong)plVar11);
    }
    else {
      unaff_x27 = plVar11;
      if (plVar23 <= plVar11) {
        uVar17 = 0;
        if (plVar23 != (long *)0x0) {
          uVar17 = (ulong)plVar11 / (ulong)plVar23;
        }
        unaff_x27 = (long *)((long)plVar11 - uVar17 * (long)plVar23);
      }
    }
    puVar13 = *(undefined8 **)(*plVar19 + (long)unaff_x27 * 8);
    if (puVar13 != (undefined8 *)0x0) {
      for (plVar21 = (long *)*puVar13; plVar21 != (long *)0x0; plVar21 = (long *)*plVar21) {
        plVar14 = (long *)plVar21[1];
        if (plVar14 == plVar11) {
          plVar14 = plVar19;
          func_0x000107c2b068(plVar19,plVar21 + 2,&pppuStack_a8);
          if (((ulong)plVar14 & 1) != 0) goto LAB_10accd84c;
        }
        else {
          if (((ulong)plVar23 & uVar24) == 0) {
            plVar14 = (long *)((ulong)plVar14 & uVar24);
          }
          else if (plVar23 <= plVar14) {
            uVar17 = 0;
            if (plVar23 != (long *)0x0) {
              uVar17 = (ulong)plVar14 / (ulong)plVar23;
            }
            plVar14 = (long *)((long)plVar14 - uVar17 * (long)plVar23);
          }
          if (plVar14 != unaff_x27) break;
        }
      }
    }
  }
  plVar21 = (long *)0x60;
  __Znwm();
  lStack_80 = 0;
  *plVar21 = 0;
  plVar21[1] = (long)plVar11;
  plStack_90 = plVar21;
  plStack_88 = plVar19;
  if ((long)uStack_98 < 0) {
    func_0x000107c3192c(plVar21 + 2,pppuStack_a8,uStack_a0);
  }
  else {
    plVar21[3] = uStack_a0;
    plVar21[2] = (long)pppuStack_a8;
    plVar21[4] = (long)uStack_98;
  }
  plVar21[9] = 0;
  plVar21[8] = 0;
  *(undefined1 *)(plVar21 + 6) = 0;
  plVar21[5] = (long)&PTR_FUN_110c6c2d0;
  *(undefined2 *)((long)plVar21 + 0x32) = 10;
  plVar21[0xb] = 0;
  plVar21[10] = 0;
  puVar13 = (undefined8 *)0x30;
  __Znwm();
  *puVar13 = &PTR_FUN_110c6bb20;
  lVar20 = plVar7[1];
  lVar15 = *plVar7;
  lVar6 = plVar7[3];
  lVar25 = plVar7[2];
  *(int *)(puVar13 + 5) = (int)plVar7[4];
  puVar13[4] = lVar6;
  puVar13[3] = lVar25;
  puVar13[2] = lVar20;
  puVar13[1] = lVar15;
  plVar21[0xb] = (long)puVar13;
  lStack_80 = CONCAT71(lStack_80._1_7_,1);
  if ((plVar23 == (long *)0x0) ||
     (*(float *)(plVar9 + 0xb) * (float)plVar23 < (float)(plVar9[10] + 1))) {
    uVar24 = 1;
    if ((long *)0x2 < plVar23) {
      uVar24 = (ulong)(((ulong)plVar23 & (long)plVar23 - 1U) != 0);
    }
    uVar24 = uVar24 | (long)plVar23 << 1;
    uVar17 = (ulong)((float)(plVar9[10] + 1) / *(float *)(plVar9 + 0xb));
    if (uVar24 <= uVar17) {
      uVar24 = uVar17;
    }
    FUN_10a4ba824(plVar19,uVar24);
    plVar23 = (long *)plVar9[8];
    if (((ulong)plVar23 & (long)plVar23 - 1U) == 0) {
      unaff_x27 = (long *)((long)plVar23 - 1U & (ulong)plVar11);
    }
    else {
      unaff_x27 = plVar11;
      if (plVar23 <= plVar11) {
        uVar24 = 0;
        if (plVar23 != (long *)0x0) {
          uVar24 = (ulong)plVar11 / (ulong)plVar23;
        }
        unaff_x27 = (long *)((long)plVar11 - uVar24 * (long)plVar23);
      }
    }
  }
  lVar15 = *plVar19;
  plVar7 = *(long **)(lVar15 + (long)unaff_x27 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = plVar9 + 9;
    *plStack_90 = *plVar7;
    *plVar7 = (long)plStack_90;
    *(long **)(lVar15 + (long)unaff_x27 * 8) = plVar7;
    if (*plStack_90 != 0) {
      plVar7 = *(long **)(*plStack_90 + 8);
      if (((ulong)plVar23 & (long)plVar23 - 1U) == 0) {
        plVar7 = (long *)((ulong)plVar7 & (long)plVar23 - 1U);
      }
      else if (plVar23 <= plVar7) {
        uVar24 = 0;
        if (plVar23 != (long *)0x0) {
          uVar24 = (ulong)plVar7 / (ulong)plVar23;
        }
        plVar7 = (long *)((long)plVar7 - uVar24 * (long)plVar23);
      }
      *(long **)(*plVar19 + (long)plVar7 * 8) = plStack_90;
    }
  }
  else {
    *plStack_90 = *plVar7;
    *plVar7 = (long)plStack_90;
  }
  plVar9[10] = plVar9[10] + 1;
  plVar21 = plStack_90;
LAB_10accd84c:
  func_0x00010a5499ec(plVar9,1,plVar21 + 5,&pppuStack_a8);
  if (*(char *)(plVar9[0x11] + 8) == '\x01') {
    FUN_10a54a030(&plStack_90,plVar9 + 5);
    FUN_10a549a74(plVar9 + 0x10,&plStack_90,&pppuStack_a8);
    plVar7 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar9 = plStack_88 + 1;
      do {
        lVar15 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar15 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
  }
  if ((long)uStack_98 < 0) {
    __ZdlPv(pppuStack_a8);
  }
  if ((char)bStack_a9 < '\0') {
    __ZdlPv(puStack_c0);
  }
  *extraout_x8 = 0;
  plVar7 = plVar8 + 0x4b;
  lVar15 = plVar8[0x59];
  uVar24 = lVar15 - 1;
  plVar8[0x59] = uVar24;
  if (uVar24 < 8) {
    uVar24 = plVar7[lVar15 + 2];
    if (plVar8[0x5a] == uVar24) {
      return;
    }
  }
  else {
    uVar24 = *(ulong *)(plVar8[0x57] + -8);
    plVar8[0x57] = plVar8[0x57] + -8;
    if (plVar8[0x5a] == uVar24) {
      return;
    }
  }
  plVar9 = (long *)*plVar7;
  plVar19 = (long *)plVar8[0x4c];
  lVar15 = (long)plVar19 - (long)plVar9;
  uVar17 = lVar15 >> 4;
  if (uVar17 < uVar24) {
    uVar22 = uVar24 - uVar17;
    lVar20 = plVar8[0x4d];
    if ((ulong)(lVar20 - (long)plVar19 >> 4) < uVar22) {
      if (uVar24 >> 0x3c == 0) {
        uVar16 = lVar20 - (long)plVar9 >> 3;
        if (uVar16 <= uVar24) {
          uVar16 = uVar24;
        }
        if (0x7fffffffffffffef < (ulong)(lVar20 - (long)plVar9)) {
          uVar16 = 0xfffffffffffffff;
        }
        plStack_78 = plVar7;
        if (uVar16 >> 0x3c == 0) {
          lVar6 = uVar16 << 4;
          __Znwm();
          lVar25 = lVar6 + lVar15;
          _bzero(lVar25,uVar22 * 0x10);
          lVar18 = lVar25 + uVar17 * -0x10;
          _memcpy(lVar18,plVar9,lVar15);
          *plVar7 = lVar18;
          plVar8[0x4c] = lVar25 + uVar22 * 0x10;
          plVar8[0x4d] = lVar6 + uVar16 * 0x10;
          uStack_98 = plVar9;
          plStack_90 = plVar9;
          plStack_88 = plVar9;
          lStack_80 = lVar20;
          func_0x00010988c1b8(&uStack_98);
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
    _bzero(plVar19,uVar22 * 0x10);
    plVar8[0x4c] = (long)(plVar19 + uVar22 * 2);
  }
  else if (uVar24 < uVar17) {
    while (plVar19 != plVar9 + uVar24 * 2) {
      plVar19 = plVar19 + -2;
      func_0x00010988c204(plVar19);
    }
    plVar8[0x4c] = (long)(plVar9 + uVar24 * 2);
  }
code_r0x00010988c138:
  plVar8[0x5a] = uVar24;
  return;
}



/* Entry: 10accd4b8; end: 10accd9cb;  */

void FUN_10accd4b8(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 ****ppppuVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined1 **ppuVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 ****ppppuVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  ulong uVar20;
  long *plVar21;
  long *unaff_x27;
  ulong uVar22;
  long lVar23;
  undefined1 *puStack_b0;
  ulong uStack_a8;
  byte bStack_99;
  undefined8 ***pppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar8 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  plVar9 = param_2;
  FUN_10acc8580(param_2,param_3);
  FUN_10accd9cc(param_5);
  func_0x000109898570(&puStack_b0,param_2,param_4);
  func_0x00010a1f8668(param_2,param_4 + 0x10);
  if ((char)plVar9[0xc] == '\x01') {
    FUN_10a00946c(&UNK_10f6a1d58);
LAB_10accd92c:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10accd930);
    (*pcVar6)();
  }
  uVar22 = uStack_a8;
  ppuVar5 = (undefined1 **)puStack_b0;
  if (-1 < (char)bStack_99) {
    uVar22 = (ulong)bStack_99;
    ppuVar5 = &puStack_b0;
  }
  if (0x7ffffffffffffff7 < uVar22) {
    func_0x000109ffde50();
    goto LAB_10accd92c;
  }
  if (uVar22 < 0x17) {
    uStack_88 = (long *)CONCAT17((char)uVar22,(undefined7)uStack_88);
    ppppuVar10 = &pppuStack_98;
    if (uVar22 != 0) goto LAB_10accd5cc;
  }
  else {
    ppppuVar1 = (undefined8 ****)0x19;
    if ((uVar22 | 7) != 0x17) {
      ppppuVar1 = (undefined8 ****)((uVar22 | 7) + 1);
    }
    ppppuVar10 = ppppuVar1;
    __Znwm();
    uStack_88 = (long *)((ulong)ppppuVar1 | 0x8000000000000000);
    pppuStack_98 = ppppuVar10;
    uStack_90 = uVar22;
LAB_10accd5cc:
    _memmove(ppppuVar10,ppuVar5,uVar22);
  }
  *(undefined1 *)((long)ppppuVar10 + uVar22) = 0;
  FUN_10ac9e388(plVar9,&pppuStack_98,0);
  plVar2 = plVar9 + 7;
  plVar16 = plVar2;
  func_0x000107c2b05c(plVar2,&pppuStack_98);
  plVar21 = (long *)plVar9[8];
  if (plVar21 != (long *)0x0) {
    uVar22 = (long)plVar21 - 1;
    if (((ulong)plVar21 & uVar22) == 0) {
      unaff_x27 = (long *)(uVar22 & (ulong)plVar16);
    }
    else {
      unaff_x27 = plVar16;
      if (plVar21 <= plVar16) {
        uVar15 = 0;
        if (plVar21 != (long *)0x0) {
          uVar15 = (ulong)plVar16 / (ulong)plVar21;
        }
        unaff_x27 = (long *)((long)plVar16 - uVar15 * (long)plVar21);
      }
    }
    puVar11 = *(undefined8 **)(*plVar2 + (long)unaff_x27 * 8);
    if (puVar11 != (undefined8 *)0x0) {
      for (plVar19 = (long *)*puVar11; plVar19 != (long *)0x0; plVar19 = (long *)*plVar19) {
        plVar12 = (long *)plVar19[1];
        if (plVar12 == plVar16) {
          plVar12 = plVar2;
          func_0x000107c2b068(plVar2,plVar19 + 2,&pppuStack_98);
          if (((ulong)plVar12 & 1) != 0) goto LAB_10accd84c;
        }
        else {
          if (((ulong)plVar21 & uVar22) == 0) {
            plVar12 = (long *)((ulong)plVar12 & uVar22);
          }
          else if (plVar21 <= plVar12) {
            uVar15 = 0;
            if (plVar21 != (long *)0x0) {
              uVar15 = (ulong)plVar12 / (ulong)plVar21;
            }
            plVar12 = (long *)((long)plVar12 - uVar15 * (long)plVar21);
          }
          if (plVar12 != unaff_x27) break;
        }
      }
    }
  }
  plVar19 = (long *)0x60;
  __Znwm();
  lStack_70 = 0;
  *plVar19 = 0;
  plVar19[1] = (long)plVar16;
  plStack_80 = plVar19;
  plStack_78 = plVar2;
  if ((long)uStack_88 < 0) {
    func_0x000107c3192c(plVar19 + 2,pppuStack_98,uStack_90);
  }
  else {
    plVar19[3] = uStack_90;
    plVar19[2] = (long)pppuStack_98;
    plVar19[4] = (long)uStack_88;
  }
  plVar19[9] = 0;
  plVar19[8] = 0;
  *(undefined1 *)(plVar19 + 6) = 0;
  plVar19[5] = (long)&PTR_FUN_110c6c2d0;
  *(undefined2 *)((long)plVar19 + 0x32) = 10;
  plVar19[0xb] = 0;
  plVar19[10] = 0;
  puVar11 = (undefined8 *)0x30;
  __Znwm();
  *puVar11 = &PTR_FUN_110c6bb20;
  lVar18 = param_2[1];
  lVar13 = *param_2;
  lVar7 = param_2[3];
  lVar23 = param_2[2];
  *(int *)(puVar11 + 5) = (int)param_2[4];
  puVar11[4] = lVar7;
  puVar11[3] = lVar23;
  puVar11[2] = lVar18;
  puVar11[1] = lVar13;
  plVar19[0xb] = (long)puVar11;
  lStack_70 = CONCAT71(lStack_70._1_7_,1);
  if ((plVar21 == (long *)0x0) ||
     (*(float *)(plVar9 + 0xb) * (float)plVar21 < (float)(plVar9[10] + 1))) {
    uVar22 = 1;
    if ((long *)0x2 < plVar21) {
      uVar22 = (ulong)(((ulong)plVar21 & (long)plVar21 - 1U) != 0);
    }
    uVar22 = uVar22 | (long)plVar21 << 1;
    uVar15 = (ulong)((float)(plVar9[10] + 1) / *(float *)(plVar9 + 0xb));
    if (uVar22 <= uVar15) {
      uVar22 = uVar15;
    }
    FUN_10a4ba824(plVar2,uVar22);
    plVar21 = (long *)plVar9[8];
    if (((ulong)plVar21 & (long)plVar21 - 1U) == 0) {
      unaff_x27 = (long *)((long)plVar21 - 1U & (ulong)plVar16);
    }
    else {
      unaff_x27 = plVar16;
      if (plVar21 <= plVar16) {
        uVar22 = 0;
        if (plVar21 != (long *)0x0) {
          uVar22 = (ulong)plVar16 / (ulong)plVar21;
        }
        unaff_x27 = (long *)((long)plVar16 - uVar22 * (long)plVar21);
      }
    }
  }
  lVar13 = *plVar2;
  plVar16 = *(long **)(lVar13 + (long)unaff_x27 * 8);
  if (plVar16 == (long *)0x0) {
    plVar16 = plVar9 + 9;
    *plStack_80 = *plVar16;
    *plVar16 = (long)plStack_80;
    *(long **)(lVar13 + (long)unaff_x27 * 8) = plVar16;
    if (*plStack_80 != 0) {
      plVar16 = *(long **)(*plStack_80 + 8);
      if (((ulong)plVar21 & (long)plVar21 - 1U) == 0) {
        plVar16 = (long *)((ulong)plVar16 & (long)plVar21 - 1U);
      }
      else if (plVar21 <= plVar16) {
        uVar22 = 0;
        if (plVar21 != (long *)0x0) {
          uVar22 = (ulong)plVar16 / (ulong)plVar21;
        }
        plVar16 = (long *)((long)plVar16 - uVar22 * (long)plVar21);
      }
      *(long **)(*plVar2 + (long)plVar16 * 8) = plStack_80;
    }
  }
  else {
    *plStack_80 = *plVar16;
    *plVar16 = (long)plStack_80;
  }
  plVar9[10] = plVar9[10] + 1;
  plVar19 = plStack_80;
LAB_10accd84c:
  func_0x00010a5499ec(plVar9,1,plVar19 + 5,&pppuStack_98);
  if (*(char *)(plVar9[0x11] + 8) == '\x01') {
    FUN_10a54a030(&plStack_80,plVar9 + 5);
    FUN_10a549a74(plVar9 + 0x10,&plStack_80,&pppuStack_98);
    plVar9 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar2 = plStack_78 + 1;
      do {
        lVar13 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
  }
  if ((long)uStack_88 < 0) {
    __ZdlPv(pppuStack_98);
  }
  if ((char)bStack_99 < '\0') {
    __ZdlPv(puStack_b0);
  }
  *param_1 = 0;
  plVar9 = plVar8 + 0x4b;
  lVar13 = plVar8[0x59];
  uVar22 = lVar13 - 1;
  plVar8[0x59] = uVar22;
  if (uVar22 < 8) {
    uVar22 = plVar9[lVar13 + 2];
    if (plVar8[0x5a] == uVar22) {
      return;
    }
  }
  else {
    uVar22 = *(ulong *)(plVar8[0x57] + -8);
    plVar8[0x57] = plVar8[0x57] + -8;
    if (plVar8[0x5a] == uVar22) {
      return;
    }
  }
  plVar2 = (long *)*plVar9;
  plVar16 = (long *)plVar8[0x4c];
  lVar13 = (long)plVar16 - (long)plVar2;
  uVar15 = lVar13 >> 4;
  if (uVar15 < uVar22) {
    uVar20 = uVar22 - uVar15;
    lVar18 = plVar8[0x4d];
    if ((ulong)(lVar18 - (long)plVar16 >> 4) < uVar20) {
      if (uVar22 >> 0x3c == 0) {
        uVar14 = lVar18 - (long)plVar2 >> 3;
        if (uVar14 <= uVar22) {
          uVar14 = uVar22;
        }
        if (0x7fffffffffffffef < (ulong)(lVar18 - (long)plVar2)) {
          uVar14 = 0xfffffffffffffff;
        }
        plStack_68 = plVar9;
        if (uVar14 >> 0x3c == 0) {
          lVar7 = uVar14 << 4;
          __Znwm();
          lVar23 = lVar7 + lVar13;
          _bzero(lVar23,uVar20 * 0x10);
          lVar17 = lVar23 + uVar15 * -0x10;
          _memcpy(lVar17,plVar2,lVar13);
          *plVar9 = lVar17;
          plVar8[0x4c] = lVar23 + uVar20 * 0x10;
          plVar8[0x4d] = lVar7 + uVar14 * 0x10;
          uStack_88 = plVar2;
          plStack_80 = plVar2;
          plStack_78 = plVar2;
          lStack_70 = lVar18;
          func_0x00010988c1b8(&uStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar6)();
    }
    _bzero(plVar16,uVar20 * 0x10);
    plVar8[0x4c] = (long)(plVar16 + uVar20 * 2);
  }
  else if (uVar22 < uVar15) {
    while (plVar16 != plVar2 + uVar22 * 2) {
      plVar16 = plVar16 + -2;
      func_0x00010988c204(plVar16);
    }
    plVar8[0x4c] = (long)(plVar2 + uVar22 * 2);
  }
code_r0x00010988c138:
  plVar8[0x5a] = uVar22;
  return;
}



/* Entry: 10accd9cc; end: 10accd9ef;  */

void FUN_10accd9cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 ****ppppuVar1;
  char cVar2;
  bool bVar3;
  undefined1 **ppuVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 ****ppppuVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined4 *extraout_x8;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  ulong uVar22;
  long *plVar23;
  long *unaff_x27;
  ulong uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined1 *puStack_c0;
  ulong uStack_b8;
  byte bStack_a9;
  undefined8 ***pppuStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar7 = (long *)0x2;
  uVar12 = 0;
  FUN_10a052ee0(2,0,param_1);
  plVar8 = plVar7;
  (**(code **)(*plVar7 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  plVar9 = plVar7;
  FUN_10acc8580(plVar7,uVar12);
  FUN_10accdf08(param_4);
  func_0x000109898570(&puStack_c0,plVar7,param_1);
  FUN_10a36c25c(plVar7,param_1 + 0x10);
  if ((char)plVar9[0xc] == '\x01') {
    FUN_10a00946c(&UNK_10f6a1d58);
LAB_10accde68:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10accde6c);
    (*pcVar5)();
  }
  uVar24 = uStack_b8;
  ppuVar4 = (undefined1 **)puStack_c0;
  if (-1 < (char)bStack_a9) {
    uVar24 = (ulong)bStack_a9;
    ppuVar4 = &puStack_c0;
  }
  if (0x7ffffffffffffff7 < uVar24) {
    func_0x000109ffde50();
    goto LAB_10accde68;
  }
  if (uVar24 < 0x17) {
    uStack_98 = (long *)CONCAT17((char)uVar24,(undefined7)uStack_98);
    ppppuVar10 = &pppuStack_a8;
    if (uVar24 != 0) goto LAB_10accdb04;
  }
  else {
    ppppuVar1 = (undefined8 ****)0x19;
    if ((uVar24 | 7) != 0x17) {
      ppppuVar1 = (undefined8 ****)((uVar24 | 7) + 1);
    }
    ppppuVar10 = ppppuVar1;
    __Znwm();
    uStack_98 = (long *)((ulong)ppppuVar1 | 0x8000000000000000);
    pppuStack_a8 = ppppuVar10;
    uStack_a0 = uVar24;
LAB_10accdb04:
    _memmove(ppppuVar10,ppuVar4,uVar24);
  }
  *(undefined1 *)((long)ppppuVar10 + uVar24) = 0;
  FUN_10ac9e388(plVar9,&pppuStack_a8,0);
  plVar19 = plVar9 + 7;
  plVar11 = plVar19;
  func_0x000107c2b05c(plVar19,&pppuStack_a8);
  plVar23 = (long *)plVar9[8];
  if (plVar23 != (long *)0x0) {
    uVar24 = (long)plVar23 - 1;
    if (((ulong)plVar23 & uVar24) == 0) {
      unaff_x27 = (long *)(uVar24 & (ulong)plVar11);
    }
    else {
      unaff_x27 = plVar11;
      if (plVar23 <= plVar11) {
        uVar17 = 0;
        if (plVar23 != (long *)0x0) {
          uVar17 = (ulong)plVar11 / (ulong)plVar23;
        }
        unaff_x27 = (long *)((long)plVar11 - uVar17 * (long)plVar23);
      }
    }
    puVar13 = *(undefined8 **)(*plVar19 + (long)unaff_x27 * 8);
    if (puVar13 != (undefined8 *)0x0) {
      for (plVar21 = (long *)*puVar13; plVar21 != (long *)0x0; plVar21 = (long *)*plVar21) {
        plVar14 = (long *)plVar21[1];
        if (plVar14 == plVar11) {
          plVar14 = plVar19;
          func_0x000107c2b068(plVar19,plVar21 + 2,&pppuStack_a8);
          if (((ulong)plVar14 & 1) != 0) goto LAB_10accdd88;
        }
        else {
          if (((ulong)plVar23 & uVar24) == 0) {
            plVar14 = (long *)((ulong)plVar14 & uVar24);
          }
          else if (plVar23 <= plVar14) {
            uVar17 = 0;
            if (plVar23 != (long *)0x0) {
              uVar17 = (ulong)plVar14 / (ulong)plVar23;
            }
            plVar14 = (long *)((long)plVar14 - uVar17 * (long)plVar23);
          }
          if (plVar14 != unaff_x27) break;
        }
      }
    }
  }
  plVar21 = (long *)0x60;
  __Znwm();
  lStack_80 = 0;
  *plVar21 = 0;
  plVar21[1] = (long)plVar11;
  plStack_90 = plVar21;
  plStack_88 = plVar19;
  if ((long)uStack_98 < 0) {
    func_0x000107c3192c(plVar21 + 2,pppuStack_a8,uStack_a0);
  }
  else {
    plVar21[3] = uStack_a0;
    plVar21[2] = (long)pppuStack_a8;
    plVar21[4] = (long)uStack_98;
  }
  plVar21[9] = 0;
  plVar21[8] = 0;
  *(undefined1 *)(plVar21 + 6) = 0;
  plVar21[5] = (long)&PTR_FUN_110c6c2d0;
  *(undefined2 *)((long)plVar21 + 0x32) = 0xb;
  plVar21[0xb] = 0;
  plVar21[10] = 0;
  puVar13 = (undefined8 *)0x48;
  __Znwm();
  *puVar13 = &PTR_FUN_110c6bb70;
  lVar20 = plVar7[1];
  lVar15 = *plVar7;
  lVar6 = plVar7[3];
  lVar25 = plVar7[2];
  lVar26 = plVar7[5];
  lVar18 = plVar7[4];
  lVar27 = plVar7[6];
  puVar13[8] = plVar7[7];
  puVar13[7] = lVar27;
  puVar13[6] = lVar26;
  puVar13[5] = lVar18;
  puVar13[4] = lVar6;
  puVar13[3] = lVar25;
  puVar13[2] = lVar20;
  puVar13[1] = lVar15;
  plVar21[0xb] = (long)puVar13;
  lStack_80 = CONCAT71(lStack_80._1_7_,1);
  if ((plVar23 == (long *)0x0) ||
     (*(float *)(plVar9 + 0xb) * (float)plVar23 < (float)(plVar9[10] + 1))) {
    uVar24 = 1;
    if ((long *)0x2 < plVar23) {
      uVar24 = (ulong)(((ulong)plVar23 & (long)plVar23 - 1U) != 0);
    }
    uVar24 = uVar24 | (long)plVar23 << 1;
    uVar17 = (ulong)((float)(plVar9[10] + 1) / *(float *)(plVar9 + 0xb));
    if (uVar24 <= uVar17) {
      uVar24 = uVar17;
    }
    FUN_10a4ba824(plVar19,uVar24);
    plVar23 = (long *)plVar9[8];
    if (((ulong)plVar23 & (long)plVar23 - 1U) == 0) {
      unaff_x27 = (long *)((long)plVar23 - 1U & (ulong)plVar11);
    }
    else {
      unaff_x27 = plVar11;
      if (plVar23 <= plVar11) {
        uVar24 = 0;
        if (plVar23 != (long *)0x0) {
          uVar24 = (ulong)plVar11 / (ulong)plVar23;
        }
        unaff_x27 = (long *)((long)plVar11 - uVar24 * (long)plVar23);
      }
    }
  }
  lVar15 = *plVar19;
  plVar7 = *(long **)(lVar15 + (long)unaff_x27 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = plVar9 + 9;
    *plStack_90 = *plVar7;
    *plVar7 = (long)plStack_90;
    *(long **)(lVar15 + (long)unaff_x27 * 8) = plVar7;
    if (*plStack_90 != 0) {
      plVar7 = *(long **)(*plStack_90 + 8);
      if (((ulong)plVar23 & (long)plVar23 - 1U) == 0) {
        plVar7 = (long *)((ulong)plVar7 & (long)plVar23 - 1U);
      }
      else if (plVar23 <= plVar7) {
        uVar24 = 0;
        if (plVar23 != (long *)0x0) {
          uVar24 = (ulong)plVar7 / (ulong)plVar23;
        }
        plVar7 = (long *)((long)plVar7 - uVar24 * (long)plVar23);
      }
      *(long **)(*plVar19 + (long)plVar7 * 8) = plStack_90;
    }
  }
  else {
    *plStack_90 = *plVar7;
    *plVar7 = (long)plStack_90;
  }
  plVar9[10] = plVar9[10] + 1;
  plVar21 = plStack_90;
LAB_10accdd88:
  func_0x00010a5499ec(plVar9,1,plVar21 + 5,&pppuStack_a8);
  if (*(char *)(plVar9[0x11] + 8) == '\x01') {
    FUN_10a54a030(&plStack_90,plVar9 + 5);
    FUN_10a549a74(plVar9 + 0x10,&plStack_90,&pppuStack_a8);
    plVar7 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar9 = plStack_88 + 1;
      do {
        lVar15 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar15 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
  }
  if ((long)uStack_98 < 0) {
    __ZdlPv(pppuStack_a8);
  }
  if ((char)bStack_a9 < '\0') {
    __ZdlPv(puStack_c0);
  }
  *extraout_x8 = 0;
  plVar7 = plVar8 + 0x4b;
  lVar15 = plVar8[0x59];
  uVar24 = lVar15 - 1;
  plVar8[0x59] = uVar24;
  if (uVar24 < 8) {
    uVar24 = plVar7[lVar15 + 2];
    if (plVar8[0x5a] == uVar24) {
      return;
    }
  }
  else {
    uVar24 = *(ulong *)(plVar8[0x57] + -8);
    plVar8[0x57] = plVar8[0x57] + -8;
    if (plVar8[0x5a] == uVar24) {
      return;
    }
  }
  plVar9 = (long *)*plVar7;
  plVar19 = (long *)plVar8[0x4c];
  lVar15 = (long)plVar19 - (long)plVar9;
  uVar17 = lVar15 >> 4;
  if (uVar17 < uVar24) {
    uVar22 = uVar24 - uVar17;
    lVar20 = plVar8[0x4d];
    if ((ulong)(lVar20 - (long)plVar19 >> 4) < uVar22) {
      if (uVar24 >> 0x3c == 0) {
        uVar16 = lVar20 - (long)plVar9 >> 3;
        if (uVar16 <= uVar24) {
          uVar16 = uVar24;
        }
        if (0x7fffffffffffffef < (ulong)(lVar20 - (long)plVar9)) {
          uVar16 = 0xfffffffffffffff;
        }
        plStack_78 = plVar7;
        if (uVar16 >> 0x3c == 0) {
          lVar6 = uVar16 << 4;
          __Znwm();
          lVar25 = lVar6 + lVar15;
          _bzero(lVar25,uVar22 * 0x10);
          lVar18 = lVar25 + uVar17 * -0x10;
          _memcpy(lVar18,plVar9,lVar15);
          *plVar7 = lVar18;
          plVar8[0x4c] = lVar25 + uVar22 * 0x10;
          plVar8[0x4d] = lVar6 + uVar16 * 0x10;
          uStack_98 = plVar9;
          plStack_90 = plVar9;
          plStack_88 = plVar9;
          lStack_80 = lVar20;
          func_0x00010988c1b8(&uStack_98);
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
    _bzero(plVar19,uVar22 * 0x10);
    plVar8[0x4c] = (long)(plVar19 + uVar22 * 2);
  }
  else if (uVar24 < uVar17) {
    while (plVar19 != plVar9 + uVar24 * 2) {
      plVar19 = plVar19 + -2;
      func_0x00010988c204(plVar19);
    }
    plVar8[0x4c] = (long)(plVar9 + uVar24 * 2);
  }
code_r0x00010988c138:
  plVar8[0x5a] = uVar24;
  return;
}



/* Entry: 10accd9f0; end: 10accdf07;  */

void FUN_10accd9f0(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 ****ppppuVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined1 **ppuVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 ****ppppuVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  ulong uVar20;
  long *plVar21;
  long *unaff_x27;
  ulong uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined1 *puStack_b0;
  ulong uStack_a8;
  byte bStack_99;
  undefined8 ***pppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar8 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  plVar9 = param_2;
  FUN_10acc8580(param_2,param_3);
  FUN_10accdf08(param_5);
  func_0x000109898570(&puStack_b0,param_2,param_4);
  FUN_10a36c25c(param_2,param_4 + 0x10);
  if ((char)plVar9[0xc] == '\x01') {
    FUN_10a00946c(&UNK_10f6a1d58);
LAB_10accde68:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10accde6c);
    (*pcVar6)();
  }
  uVar22 = uStack_a8;
  ppuVar5 = (undefined1 **)puStack_b0;
  if (-1 < (char)bStack_99) {
    uVar22 = (ulong)bStack_99;
    ppuVar5 = &puStack_b0;
  }
  if (0x7ffffffffffffff7 < uVar22) {
    func_0x000109ffde50();
    goto LAB_10accde68;
  }
  if (uVar22 < 0x17) {
    uStack_88 = (long *)CONCAT17((char)uVar22,(undefined7)uStack_88);
    ppppuVar10 = &pppuStack_98;
    if (uVar22 != 0) goto LAB_10accdb04;
  }
  else {
    ppppuVar1 = (undefined8 ****)0x19;
    if ((uVar22 | 7) != 0x17) {
      ppppuVar1 = (undefined8 ****)((uVar22 | 7) + 1);
    }
    ppppuVar10 = ppppuVar1;
    __Znwm();
    uStack_88 = (long *)((ulong)ppppuVar1 | 0x8000000000000000);
    pppuStack_98 = ppppuVar10;
    uStack_90 = uVar22;
LAB_10accdb04:
    _memmove(ppppuVar10,ppuVar5,uVar22);
  }
  *(undefined1 *)((long)ppppuVar10 + uVar22) = 0;
  FUN_10ac9e388(plVar9,&pppuStack_98,0);
  plVar2 = plVar9 + 7;
  plVar16 = plVar2;
  func_0x000107c2b05c(plVar2,&pppuStack_98);
  plVar21 = (long *)plVar9[8];
  if (plVar21 != (long *)0x0) {
    uVar22 = (long)plVar21 - 1;
    if (((ulong)plVar21 & uVar22) == 0) {
      unaff_x27 = (long *)(uVar22 & (ulong)plVar16);
    }
    else {
      unaff_x27 = plVar16;
      if (plVar21 <= plVar16) {
        uVar15 = 0;
        if (plVar21 != (long *)0x0) {
          uVar15 = (ulong)plVar16 / (ulong)plVar21;
        }
        unaff_x27 = (long *)((long)plVar16 - uVar15 * (long)plVar21);
      }
    }
    puVar11 = *(undefined8 **)(*plVar2 + (long)unaff_x27 * 8);
    if (puVar11 != (undefined8 *)0x0) {
      for (plVar19 = (long *)*puVar11; plVar19 != (long *)0x0; plVar19 = (long *)*plVar19) {
        plVar12 = (long *)plVar19[1];
        if (plVar12 == plVar16) {
          plVar12 = plVar2;
          func_0x000107c2b068(plVar2,plVar19 + 2,&pppuStack_98);
          if (((ulong)plVar12 & 1) != 0) goto LAB_10accdd88;
        }
        else {
          if (((ulong)plVar21 & uVar22) == 0) {
            plVar12 = (long *)((ulong)plVar12 & uVar22);
          }
          else if (plVar21 <= plVar12) {
            uVar15 = 0;
            if (plVar21 != (long *)0x0) {
              uVar15 = (ulong)plVar12 / (ulong)plVar21;
            }
            plVar12 = (long *)((long)plVar12 - uVar15 * (long)plVar21);
          }
          if (plVar12 != unaff_x27) break;
        }
      }
    }
  }
  plVar19 = (long *)0x60;
  __Znwm();
  lStack_70 = 0;
  *plVar19 = 0;
  plVar19[1] = (long)plVar16;
  plStack_80 = plVar19;
  plStack_78 = plVar2;
  if ((long)uStack_88 < 0) {
    func_0x000107c3192c(plVar19 + 2,pppuStack_98,uStack_90);
  }
  else {
    plVar19[3] = uStack_90;
    plVar19[2] = (long)pppuStack_98;
    plVar19[4] = (long)uStack_88;
  }
  plVar19[9] = 0;
  plVar19[8] = 0;
  *(undefined1 *)(plVar19 + 6) = 0;
  plVar19[5] = (long)&PTR_FUN_110c6c2d0;
  *(undefined2 *)((long)plVar19 + 0x32) = 0xb;
  plVar19[0xb] = 0;
  plVar19[10] = 0;
  puVar11 = (undefined8 *)0x48;
  __Znwm();
  *puVar11 = &PTR_FUN_110c6bb70;
  lVar18 = param_2[1];
  lVar13 = *param_2;
  lVar7 = param_2[3];
  lVar23 = param_2[2];
  lVar24 = param_2[5];
  lVar17 = param_2[4];
  lVar25 = param_2[6];
  puVar11[8] = param_2[7];
  puVar11[7] = lVar25;
  puVar11[6] = lVar24;
  puVar11[5] = lVar17;
  puVar11[4] = lVar7;
  puVar11[3] = lVar23;
  puVar11[2] = lVar18;
  puVar11[1] = lVar13;
  plVar19[0xb] = (long)puVar11;
  lStack_70 = CONCAT71(lStack_70._1_7_,1);
  if ((plVar21 == (long *)0x0) ||
     (*(float *)(plVar9 + 0xb) * (float)plVar21 < (float)(plVar9[10] + 1))) {
    uVar22 = 1;
    if ((long *)0x2 < plVar21) {
      uVar22 = (ulong)(((ulong)plVar21 & (long)plVar21 - 1U) != 0);
    }
    uVar22 = uVar22 | (long)plVar21 << 1;
    uVar15 = (ulong)((float)(plVar9[10] + 1) / *(float *)(plVar9 + 0xb));
    if (uVar22 <= uVar15) {
      uVar22 = uVar15;
    }
    FUN_10a4ba824(plVar2,uVar22);
    plVar21 = (long *)plVar9[8];
    if (((ulong)plVar21 & (long)plVar21 - 1U) == 0) {
      unaff_x27 = (long *)((long)plVar21 - 1U & (ulong)plVar16);
    }
    else {
      unaff_x27 = plVar16;
      if (plVar21 <= plVar16) {
        uVar22 = 0;
        if (plVar21 != (long *)0x0) {
          uVar22 = (ulong)plVar16 / (ulong)plVar21;
        }
        unaff_x27 = (long *)((long)plVar16 - uVar22 * (long)plVar21);
      }
    }
  }
  lVar13 = *plVar2;
  plVar16 = *(long **)(lVar13 + (long)unaff_x27 * 8);
  if (plVar16 == (long *)0x0) {
    plVar16 = plVar9 + 9;
    *plStack_80 = *plVar16;
    *plVar16 = (long)plStack_80;
    *(long **)(lVar13 + (long)unaff_x27 * 8) = plVar16;
    if (*plStack_80 != 0) {
      plVar16 = *(long **)(*plStack_80 + 8);
      if (((ulong)plVar21 & (long)plVar21 - 1U) == 0) {
        plVar16 = (long *)((ulong)plVar16 & (long)plVar21 - 1U);
      }
      else if (plVar21 <= plVar16) {
        uVar22 = 0;
        if (plVar21 != (long *)0x0) {
          uVar22 = (ulong)plVar16 / (ulong)plVar21;
        }
        plVar16 = (long *)((long)plVar16 - uVar22 * (long)plVar21);
      }
      *(long **)(*plVar2 + (long)plVar16 * 8) = plStack_80;
    }
  }
  else {
    *plStack_80 = *plVar16;
    *plVar16 = (long)plStack_80;
  }
  plVar9[10] = plVar9[10] + 1;
  plVar19 = plStack_80;
LAB_10accdd88:
  func_0x00010a5499ec(plVar9,1,plVar19 + 5,&pppuStack_98);
  if (*(char *)(plVar9[0x11] + 8) == '\x01') {
    FUN_10a54a030(&plStack_80,plVar9 + 5);
    FUN_10a549a74(plVar9 + 0x10,&plStack_80,&pppuStack_98);
    plVar9 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar2 = plStack_78 + 1;
      do {
        lVar13 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
  }
  if ((long)uStack_88 < 0) {
    __ZdlPv(pppuStack_98);
  }
  if ((char)bStack_99 < '\0') {
    __ZdlPv(puStack_b0);
  }
  *param_1 = 0;
  plVar9 = plVar8 + 0x4b;
  lVar13 = plVar8[0x59];
  uVar22 = lVar13 - 1;
  plVar8[0x59] = uVar22;
  if (uVar22 < 8) {
    uVar22 = plVar9[lVar13 + 2];
    if (plVar8[0x5a] == uVar22) {
      return;
    }
  }
  else {
    uVar22 = *(ulong *)(plVar8[0x57] + -8);
    plVar8[0x57] = plVar8[0x57] + -8;
    if (plVar8[0x5a] == uVar22) {
      return;
    }
  }
  plVar2 = (long *)*plVar9;
  plVar16 = (long *)plVar8[0x4c];
  lVar13 = (long)plVar16 - (long)plVar2;
  uVar15 = lVar13 >> 4;
  if (uVar15 < uVar22) {
    uVar20 = uVar22 - uVar15;
    lVar18 = plVar8[0x4d];
    if ((ulong)(lVar18 - (long)plVar16 >> 4) < uVar20) {
      if (uVar22 >> 0x3c == 0) {
        uVar14 = lVar18 - (long)plVar2 >> 3;
        if (uVar14 <= uVar22) {
          uVar14 = uVar22;
        }
        if (0x7fffffffffffffef < (ulong)(lVar18 - (long)plVar2)) {
          uVar14 = 0xfffffffffffffff;
        }
        plStack_68 = plVar9;
        if (uVar14 >> 0x3c == 0) {
          lVar7 = uVar14 << 4;
          __Znwm();
          lVar23 = lVar7 + lVar13;
          _bzero(lVar23,uVar20 * 0x10);
          lVar17 = lVar23 + uVar15 * -0x10;
          _memcpy(lVar17,plVar2,lVar13);
          *plVar9 = lVar17;
          plVar8[0x4c] = lVar23 + uVar20 * 0x10;
          plVar8[0x4d] = lVar7 + uVar14 * 0x10;
          uStack_88 = plVar2;
          plStack_80 = plVar2;
          plStack_78 = plVar2;
          lStack_70 = lVar18;
          func_0x00010988c1b8(&uStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar6)();
    }
    _bzero(plVar16,uVar20 * 0x10);
    plVar8[0x4c] = (long)(plVar16 + uVar20 * 2);
  }
  else if (uVar22 < uVar15) {
    while (plVar16 != plVar2 + uVar22 * 2) {
      plVar16 = plVar16 + -2;
      func_0x00010988c204(plVar16);
    }
    plVar8[0x4c] = (long)(plVar2 + uVar22 * 2);
  }
code_r0x00010988c138:
  plVar8[0x5a] = uVar22;
  return;
}



/* Entry: 10accdf08; end: 10accdf2b;  */

void FUN_10accdf08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  char cVar3;
  bool bVar4;
  undefined1 **ppuVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 ****ppppuVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined4 *extraout_x8;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  ulong uVar23;
  long *plVar24;
  long *unaff_x27;
  ulong uVar25;
  undefined1 *puStack_c0;
  ulong uStack_b8;
  byte bStack_a9;
  undefined8 ***pppuStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar8 = (long *)0x2;
  uVar13 = 0;
  FUN_10a052ee0(2,0,param_1);
  plVar9 = plVar8;
  (**(code **)(*plVar8 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  plVar10 = plVar8;
  FUN_10acc8580(plVar8,uVar13);
  FUN_10acce434(param_4);
  func_0x000109898570(&puStack_c0,plVar8,param_1);
  func_0x00010a077264(plVar8,param_1 + 0x10);
  if ((char)plVar10[0xc] == '\x01') {
    FUN_10a00946c(&UNK_10f6a1d58);
LAB_10acce394:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10acce398);
    (*pcVar6)();
  }
  uVar25 = uStack_b8;
  ppuVar5 = (undefined1 **)puStack_c0;
  if (-1 < (char)bStack_a9) {
    uVar25 = (ulong)bStack_a9;
    ppuVar5 = &puStack_c0;
  }
  if (0x7ffffffffffffff7 < uVar25) {
    func_0x000109ffde50();
    goto LAB_10acce394;
  }
  if (uVar25 < 0x17) {
    uStack_98 = (long *)CONCAT17((char)uVar25,(undefined7)uStack_98);
    ppppuVar11 = &pppuStack_a8;
    if (uVar25 != 0) goto LAB_10acce040;
  }
  else {
    ppppuVar2 = (undefined8 ****)0x19;
    if ((uVar25 | 7) != 0x17) {
      ppppuVar2 = (undefined8 ****)((uVar25 | 7) + 1);
    }
    ppppuVar11 = ppppuVar2;
    __Znwm();
    uStack_98 = (long *)((ulong)ppppuVar2 | 0x8000000000000000);
    pppuStack_a8 = ppppuVar11;
    uStack_a0 = uVar25;
LAB_10acce040:
    _memmove(ppppuVar11,ppuVar5,uVar25);
  }
  *(undefined1 *)((long)ppppuVar11 + uVar25) = 0;
  FUN_10ac9e388(plVar10,&pppuStack_a8,0);
  plVar20 = plVar10 + 7;
  plVar12 = plVar20;
  func_0x000107c2b05c(plVar20,&pppuStack_a8);
  plVar24 = (long *)plVar10[8];
  if (plVar24 != (long *)0x0) {
    uVar25 = (long)plVar24 - 1;
    if (((ulong)plVar24 & uVar25) == 0) {
      unaff_x27 = (long *)(uVar25 & (ulong)plVar12);
    }
    else {
      unaff_x27 = plVar12;
      if (plVar24 <= plVar12) {
        uVar18 = 0;
        if (plVar24 != (long *)0x0) {
          uVar18 = (ulong)plVar12 / (ulong)plVar24;
        }
        unaff_x27 = (long *)((long)plVar12 - uVar18 * (long)plVar24);
      }
    }
    puVar14 = *(undefined8 **)(*plVar20 + (long)unaff_x27 * 8);
    if (puVar14 != (undefined8 *)0x0) {
      for (plVar22 = (long *)*puVar14; plVar22 != (long *)0x0; plVar22 = (long *)*plVar22) {
        plVar15 = (long *)plVar22[1];
        if (plVar15 == plVar12) {
          plVar15 = plVar20;
          func_0x000107c2b068(plVar20,plVar22 + 2,&pppuStack_a8);
          if (((ulong)plVar15 & 1) != 0) goto LAB_10acce2b4;
        }
        else {
          if (((ulong)plVar24 & uVar25) == 0) {
            plVar15 = (long *)((ulong)plVar15 & uVar25);
          }
          else if (plVar24 <= plVar15) {
            uVar18 = 0;
            if (plVar24 != (long *)0x0) {
              uVar18 = (ulong)plVar15 / (ulong)plVar24;
            }
            plVar15 = (long *)((long)plVar15 - uVar18 * (long)plVar24);
          }
          if (plVar15 != unaff_x27) break;
        }
      }
    }
  }
  plVar22 = (long *)0x60;
  __Znwm();
  lStack_80 = 0;
  *plVar22 = 0;
  plVar22[1] = (long)plVar12;
  plStack_90 = plVar22;
  plStack_88 = plVar20;
  if ((long)uStack_98 < 0) {
    func_0x000107c3192c(plVar22 + 2,pppuStack_a8,uStack_a0);
  }
  else {
    plVar22[3] = uStack_a0;
    plVar22[2] = (long)pppuStack_a8;
    plVar22[4] = (long)uStack_98;
  }
  plVar22[9] = 0;
  plVar22[8] = 0;
  *(undefined1 *)(plVar22 + 6) = 0;
  plVar22[5] = (long)&PTR_FUN_110c6c2d0;
  *(undefined2 *)((long)plVar22 + 0x32) = 0xc;
  plVar22[0xb] = 0;
  plVar22[10] = 0;
  puVar14 = (undefined8 *)0x18;
  __Znwm();
  *puVar14 = &PTR_FUN_110c6bbc0;
  lVar16 = *plVar8;
  puVar14[2] = plVar8[1];
  puVar14[1] = lVar16;
  plVar22[0xb] = (long)puVar14;
  lStack_80 = CONCAT71(lStack_80._1_7_,1);
  if ((plVar24 == (long *)0x0) ||
     (*(float *)(plVar10 + 0xb) * (float)plVar24 < (float)(plVar10[10] + 1))) {
    uVar25 = 1;
    if ((long *)0x2 < plVar24) {
      uVar25 = (ulong)(((ulong)plVar24 & (long)plVar24 - 1U) != 0);
    }
    uVar25 = uVar25 | (long)plVar24 << 1;
    uVar18 = (ulong)((float)(plVar10[10] + 1) / *(float *)(plVar10 + 0xb));
    if (uVar25 <= uVar18) {
      uVar25 = uVar18;
    }
    FUN_10a4ba824(plVar20,uVar25);
    plVar24 = (long *)plVar10[8];
    if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
      unaff_x27 = (long *)((long)plVar24 - 1U & (ulong)plVar12);
    }
    else {
      unaff_x27 = plVar12;
      if (plVar24 <= plVar12) {
        uVar25 = 0;
        if (plVar24 != (long *)0x0) {
          uVar25 = (ulong)plVar12 / (ulong)plVar24;
        }
        unaff_x27 = (long *)((long)plVar12 - uVar25 * (long)plVar24);
      }
    }
  }
  lVar16 = *plVar20;
  plVar8 = *(long **)(lVar16 + (long)unaff_x27 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = plVar10 + 9;
    *plStack_90 = *plVar8;
    *plVar8 = (long)plStack_90;
    *(long **)(lVar16 + (long)unaff_x27 * 8) = plVar8;
    if (*plStack_90 != 0) {
      plVar8 = *(long **)(*plStack_90 + 8);
      if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
        plVar8 = (long *)((ulong)plVar8 & (long)plVar24 - 1U);
      }
      else if (plVar24 <= plVar8) {
        uVar25 = 0;
        if (plVar24 != (long *)0x0) {
          uVar25 = (ulong)plVar8 / (ulong)plVar24;
        }
        plVar8 = (long *)((long)plVar8 - uVar25 * (long)plVar24);
      }
      *(long **)(*plVar20 + (long)plVar8 * 8) = plStack_90;
    }
  }
  else {
    *plStack_90 = *plVar8;
    *plVar8 = (long)plStack_90;
  }
  plVar10[10] = plVar10[10] + 1;
  plVar22 = plStack_90;
LAB_10acce2b4:
  func_0x00010a5499ec(plVar10,1,plVar22 + 5,&pppuStack_a8);
  if (*(char *)(plVar10[0x11] + 8) == '\x01') {
    FUN_10a54a030(&plStack_90,plVar10 + 5);
    FUN_10a549a74(plVar10 + 0x10,&plStack_90,&pppuStack_a8);
    plVar8 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar10 = plStack_88 + 1;
      do {
        lVar16 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
  }
  if ((long)uStack_98 < 0) {
    __ZdlPv(pppuStack_a8);
  }
  if ((char)bStack_a9 < '\0') {
    __ZdlPv(puStack_c0);
  }
  *extraout_x8 = 0;
  plVar8 = plVar9 + 0x4b;
  lVar16 = plVar9[0x59];
  uVar25 = lVar16 - 1;
  plVar9[0x59] = uVar25;
  if (uVar25 < 8) {
    uVar25 = plVar8[lVar16 + 2];
    if (plVar9[0x5a] == uVar25) {
      return;
    }
  }
  else {
    uVar25 = *(ulong *)(plVar9[0x57] + -8);
    plVar9[0x57] = plVar9[0x57] + -8;
    if (plVar9[0x5a] == uVar25) {
      return;
    }
  }
  plVar10 = (long *)*plVar8;
  plVar20 = (long *)plVar9[0x4c];
  lVar16 = (long)plVar20 - (long)plVar10;
  uVar18 = lVar16 >> 4;
  if (uVar18 < uVar25) {
    uVar23 = uVar25 - uVar18;
    lVar21 = plVar9[0x4d];
    if ((ulong)(lVar21 - (long)plVar20 >> 4) < uVar23) {
      if (uVar25 >> 0x3c == 0) {
        uVar17 = lVar21 - (long)plVar10 >> 3;
        if (uVar17 <= uVar25) {
          uVar17 = uVar25;
        }
        if (0x7fffffffffffffef < (ulong)(lVar21 - (long)plVar10)) {
          uVar17 = 0xfffffffffffffff;
        }
        plStack_78 = plVar8;
        if (uVar17 >> 0x3c == 0) {
          lVar7 = uVar17 << 4;
          __Znwm();
          lVar1 = lVar7 + lVar16;
          _bzero(lVar1,uVar23 * 0x10);
          lVar19 = lVar1 + uVar18 * -0x10;
          _memcpy(lVar19,plVar10,lVar16);
          *plVar8 = lVar19;
          plVar9[0x4c] = lVar1 + uVar23 * 0x10;
          plVar9[0x4d] = lVar7 + uVar17 * 0x10;
          uStack_98 = plVar10;
          plStack_90 = plVar10;
          plStack_88 = plVar10;
          lStack_80 = lVar21;
          func_0x00010988c1b8(&uStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar6)();
    }
    _bzero(plVar20,uVar23 * 0x10);
    plVar9[0x4c] = (long)(plVar20 + uVar23 * 2);
  }
  else if (uVar25 < uVar18) {
    while (plVar20 != plVar10 + uVar25 * 2) {
      plVar20 = plVar20 + -2;
      func_0x00010988c204(plVar20);
    }
    plVar9[0x4c] = (long)(plVar10 + uVar25 * 2);
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar25;
  return;
}



/* Entry: 10accdf2c; end: 10acce433;  */

void FUN_10accdf2c(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined1 **ppuVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 ****ppppuVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  ulong uVar21;
  long *plVar22;
  long *unaff_x27;
  ulong uVar23;
  undefined1 *puStack_b0;
  ulong uStack_a8;
  byte bStack_99;
  undefined8 ***pppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  
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
  FUN_10acc8580(param_2,param_3);
  FUN_10acce434(param_5);
  func_0x000109898570(&puStack_b0,param_2,param_4);
  func_0x00010a077264(param_2,param_4 + 0x10);
  if ((char)plVar10[0xc] == '\x01') {
    FUN_10a00946c(&UNK_10f6a1d58);
LAB_10acce394:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10acce398);
    (*pcVar7)();
  }
  uVar23 = uStack_a8;
  ppuVar6 = (undefined1 **)puStack_b0;
  if (-1 < (char)bStack_99) {
    uVar23 = (ulong)bStack_99;
    ppuVar6 = &puStack_b0;
  }
  if (0x7ffffffffffffff7 < uVar23) {
    func_0x000109ffde50();
    goto LAB_10acce394;
  }
  if (uVar23 < 0x17) {
    uStack_88 = (long *)CONCAT17((char)uVar23,(undefined7)uStack_88);
    ppppuVar11 = &pppuStack_98;
    if (uVar23 != 0) goto LAB_10acce040;
  }
  else {
    ppppuVar2 = (undefined8 ****)0x19;
    if ((uVar23 | 7) != 0x17) {
      ppppuVar2 = (undefined8 ****)((uVar23 | 7) + 1);
    }
    ppppuVar11 = ppppuVar2;
    __Znwm();
    uStack_88 = (long *)((ulong)ppppuVar2 | 0x8000000000000000);
    pppuStack_98 = ppppuVar11;
    uStack_90 = uVar23;
LAB_10acce040:
    _memmove(ppppuVar11,ppuVar6,uVar23);
  }
  *(undefined1 *)((long)ppppuVar11 + uVar23) = 0;
  FUN_10ac9e388(plVar10,&pppuStack_98,0);
  plVar3 = plVar10 + 7;
  plVar17 = plVar3;
  func_0x000107c2b05c(plVar3,&pppuStack_98);
  plVar22 = (long *)plVar10[8];
  if (plVar22 != (long *)0x0) {
    uVar23 = (long)plVar22 - 1;
    if (((ulong)plVar22 & uVar23) == 0) {
      unaff_x27 = (long *)(uVar23 & (ulong)plVar17);
    }
    else {
      unaff_x27 = plVar17;
      if (plVar22 <= plVar17) {
        uVar16 = 0;
        if (plVar22 != (long *)0x0) {
          uVar16 = (ulong)plVar17 / (ulong)plVar22;
        }
        unaff_x27 = (long *)((long)plVar17 - uVar16 * (long)plVar22);
      }
    }
    puVar12 = *(undefined8 **)(*plVar3 + (long)unaff_x27 * 8);
    if (puVar12 != (undefined8 *)0x0) {
      for (plVar20 = (long *)*puVar12; plVar20 != (long *)0x0; plVar20 = (long *)*plVar20) {
        plVar13 = (long *)plVar20[1];
        if (plVar13 == plVar17) {
          plVar13 = plVar3;
          func_0x000107c2b068(plVar3,plVar20 + 2,&pppuStack_98);
          if (((ulong)plVar13 & 1) != 0) goto LAB_10acce2b4;
        }
        else {
          if (((ulong)plVar22 & uVar23) == 0) {
            plVar13 = (long *)((ulong)plVar13 & uVar23);
          }
          else if (plVar22 <= plVar13) {
            uVar16 = 0;
            if (plVar22 != (long *)0x0) {
              uVar16 = (ulong)plVar13 / (ulong)plVar22;
            }
            plVar13 = (long *)((long)plVar13 - uVar16 * (long)plVar22);
          }
          if (plVar13 != unaff_x27) break;
        }
      }
    }
  }
  plVar20 = (long *)0x60;
  __Znwm();
  lStack_70 = 0;
  *plVar20 = 0;
  plVar20[1] = (long)plVar17;
  plStack_80 = plVar20;
  plStack_78 = plVar3;
  if ((long)uStack_88 < 0) {
    func_0x000107c3192c(plVar20 + 2,pppuStack_98,uStack_90);
  }
  else {
    plVar20[3] = uStack_90;
    plVar20[2] = (long)pppuStack_98;
    plVar20[4] = (long)uStack_88;
  }
  plVar20[9] = 0;
  plVar20[8] = 0;
  *(undefined1 *)(plVar20 + 6) = 0;
  plVar20[5] = (long)&PTR_FUN_110c6c2d0;
  *(undefined2 *)((long)plVar20 + 0x32) = 0xc;
  plVar20[0xb] = 0;
  plVar20[10] = 0;
  puVar12 = (undefined8 *)0x18;
  __Znwm();
  *puVar12 = &PTR_FUN_110c6bbc0;
  lVar14 = *param_2;
  puVar12[2] = param_2[1];
  puVar12[1] = lVar14;
  plVar20[0xb] = (long)puVar12;
  lStack_70 = CONCAT71(lStack_70._1_7_,1);
  if ((plVar22 == (long *)0x0) ||
     (*(float *)(plVar10 + 0xb) * (float)plVar22 < (float)(plVar10[10] + 1))) {
    uVar23 = 1;
    if ((long *)0x2 < plVar22) {
      uVar23 = (ulong)(((ulong)plVar22 & (long)plVar22 - 1U) != 0);
    }
    uVar23 = uVar23 | (long)plVar22 << 1;
    uVar16 = (ulong)((float)(plVar10[10] + 1) / *(float *)(plVar10 + 0xb));
    if (uVar23 <= uVar16) {
      uVar23 = uVar16;
    }
    FUN_10a4ba824(plVar3,uVar23);
    plVar22 = (long *)plVar10[8];
    if (((ulong)plVar22 & (long)plVar22 - 1U) == 0) {
      unaff_x27 = (long *)((long)plVar22 - 1U & (ulong)plVar17);
    }
    else {
      unaff_x27 = plVar17;
      if (plVar22 <= plVar17) {
        uVar23 = 0;
        if (plVar22 != (long *)0x0) {
          uVar23 = (ulong)plVar17 / (ulong)plVar22;
        }
        unaff_x27 = (long *)((long)plVar17 - uVar23 * (long)plVar22);
      }
    }
  }
  lVar14 = *plVar3;
  plVar17 = *(long **)(lVar14 + (long)unaff_x27 * 8);
  if (plVar17 == (long *)0x0) {
    plVar17 = plVar10 + 9;
    *plStack_80 = *plVar17;
    *plVar17 = (long)plStack_80;
    *(long **)(lVar14 + (long)unaff_x27 * 8) = plVar17;
    if (*plStack_80 != 0) {
      plVar17 = *(long **)(*plStack_80 + 8);
      if (((ulong)plVar22 & (long)plVar22 - 1U) == 0) {
        plVar17 = (long *)((ulong)plVar17 & (long)plVar22 - 1U);
      }
      else if (plVar22 <= plVar17) {
        uVar23 = 0;
        if (plVar22 != (long *)0x0) {
          uVar23 = (ulong)plVar17 / (ulong)plVar22;
        }
        plVar17 = (long *)((long)plVar17 - uVar23 * (long)plVar22);
      }
      *(long **)(*plVar3 + (long)plVar17 * 8) = plStack_80;
    }
  }
  else {
    *plStack_80 = *plVar17;
    *plVar17 = (long)plStack_80;
  }
  plVar10[10] = plVar10[10] + 1;
  plVar20 = plStack_80;
LAB_10acce2b4:
  func_0x00010a5499ec(plVar10,1,plVar20 + 5,&pppuStack_98);
  if (*(char *)(plVar10[0x11] + 8) == '\x01') {
    FUN_10a54a030(&plStack_80,plVar10 + 5);
    FUN_10a549a74(plVar10 + 0x10,&plStack_80,&pppuStack_98);
    plVar10 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar3 = plStack_78 + 1;
      do {
        lVar14 = *plVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *plVar3 = lVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
  }
  if ((long)uStack_88 < 0) {
    __ZdlPv(pppuStack_98);
  }
  if ((char)bStack_99 < '\0') {
    __ZdlPv(puStack_b0);
  }
  *param_1 = 0;
  plVar10 = plVar9 + 0x4b;
  lVar14 = plVar9[0x59];
  uVar23 = lVar14 - 1;
  plVar9[0x59] = uVar23;
  if (uVar23 < 8) {
    uVar23 = plVar10[lVar14 + 2];
    if (plVar9[0x5a] == uVar23) {
      return;
    }
  }
  else {
    uVar23 = *(ulong *)(plVar9[0x57] + -8);
    plVar9[0x57] = plVar9[0x57] + -8;
    if (plVar9[0x5a] == uVar23) {
      return;
    }
  }
  plVar3 = (long *)*plVar10;
  plVar17 = (long *)plVar9[0x4c];
  lVar14 = (long)plVar17 - (long)plVar3;
  uVar16 = lVar14 >> 4;
  if (uVar16 < uVar23) {
    uVar21 = uVar23 - uVar16;
    lVar19 = plVar9[0x4d];
    if ((ulong)(lVar19 - (long)plVar17 >> 4) < uVar21) {
      if (uVar23 >> 0x3c == 0) {
        uVar15 = lVar19 - (long)plVar3 >> 3;
        if (uVar15 <= uVar23) {
          uVar15 = uVar23;
        }
        if (0x7fffffffffffffef < (ulong)(lVar19 - (long)plVar3)) {
          uVar15 = 0xfffffffffffffff;
        }
        plStack_68 = plVar10;
        if (uVar15 >> 0x3c == 0) {
          lVar8 = uVar15 << 4;
          __Znwm();
          lVar1 = lVar8 + lVar14;
          _bzero(lVar1,uVar21 * 0x10);
          lVar18 = lVar1 + uVar16 * -0x10;
          _memcpy(lVar18,plVar3,lVar14);
          *plVar10 = lVar18;
          plVar9[0x4c] = lVar1 + uVar21 * 0x10;
          plVar9[0x4d] = lVar8 + uVar15 * 0x10;
          uStack_88 = plVar3;
          plStack_80 = plVar3;
          plStack_78 = plVar3;
          lStack_70 = lVar19;
          func_0x00010988c1b8(&uStack_88);
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
    _bzero(plVar17,uVar21 * 0x10);
    plVar9[0x4c] = (long)(plVar17 + uVar21 * 2);
  }
  else if (uVar23 < uVar16) {
    while (plVar17 != plVar3 + uVar23 * 2) {
      plVar17 = plVar17 + -2;
      func_0x00010988c204(plVar17);
    }
    plVar9[0x4c] = (long)(plVar3 + uVar23 * 2);
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar23;
  return;
}



/* Entry: 10acce434; end: 10acce457;  */

void FUN_10acce434(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 in_stack_ffffffffffffff98;
  long in_stack_ffffffffffffffa8;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar3 = (long *)0x2;
  uVar5 = 0;
  FUN_10a052ee0(2,0,param_1);
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar12 = plVar3;
  FUN_10acc8580(plVar3,uVar5);
  FUN_10acce590(param_4);
  func_0x000109898570(&stack0xffffffffffffff98,plVar3,param_1);
  FUN_10a36c9b0(&plStack_80,plVar3,param_1 + 0x10);
  FUN_10acc9e94(plVar12,&stack0xffffffffffffff98,&plStack_80);
  if (plStack_80 != (long *)0x0) {
    plStack_78 = plStack_80;
    __ZdlPv();
  }
  if (in_stack_ffffffffffffffa8 < 0) {
    __ZdlPv(in_stack_ffffffffffffff98);
  }
  *extraout_x8 = 0;
  plVar3 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar3[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar3;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    plVar12 = (long *)plVar4[0x4d];
    if ((ulong)((long)plVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = (long)plVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)((long)plVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_78 = plVar3;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar3 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_98 = lVar6;
          lStack_90 = lVar6;
          lStack_88 = lVar6;
          plStack_80 = plVar12;
          func_0x00010988c1b8(&lStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10acce458; end: 10acce58f;  */

void FUN_10acce458(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long *plStack_70;
  long *plStack_68;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10acc8580(param_2,param_3);
  FUN_10acce590(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  FUN_10a36c9b0(&plStack_70,param_2,param_4 + 0x10);
  FUN_10acc9e94(plVar4,&stack0xffffffffffffffa8,&plStack_70);
  if (plStack_70 != (long *)0x0) {
    plStack_68 = plStack_70;
    __ZdlPv();
  }
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    plVar11 = (long *)plVar3[0x4d];
    if ((ulong)((long)plVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = (long)plVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)((long)plVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          plStack_70 = plVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10acce590; end: 10acce5b3;  */

void FUN_10acce590(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 in_stack_ffffffffffffff98;
  long in_stack_ffffffffffffffa8;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar3 = (long *)0x2;
  uVar5 = 0;
  FUN_10a052ee0(2,0,param_1);
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar12 = plVar3;
  FUN_10acc8580(plVar3,uVar5);
  FUN_10acce6ec(param_4);
  func_0x000109898570(&stack0xffffffffffffff98,plVar3,param_1);
  FUN_10a36c768(&plStack_80,plVar3,param_1 + 0x10);
  func_0x00010acca4ec(plVar12,&stack0xffffffffffffff98,&plStack_80);
  if (plStack_80 != (long *)0x0) {
    plStack_78 = plStack_80;
    __ZdlPv();
  }
  if (in_stack_ffffffffffffffa8 < 0) {
    __ZdlPv(in_stack_ffffffffffffff98);
  }
  *extraout_x8 = 0;
  plVar3 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar3[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar3;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    plVar12 = (long *)plVar4[0x4d];
    if ((ulong)((long)plVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = (long)plVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)((long)plVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_78 = plVar3;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar3 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_98 = lVar6;
          lStack_90 = lVar6;
          lStack_88 = lVar6;
          plStack_80 = plVar12;
          func_0x00010988c1b8(&lStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10acce5b4; end: 10acce6eb;  */

void FUN_10acce5b4(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long *plStack_70;
  long *plStack_68;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10acc8580(param_2,param_3);
  FUN_10acce6ec(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  FUN_10a36c768(&plStack_70,param_2,param_4 + 0x10);
  func_0x00010acca4ec(plVar4,&stack0xffffffffffffffa8,&plStack_70);
  if (plStack_70 != (long *)0x0) {
    plStack_68 = plStack_70;
    __ZdlPv();
  }
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    plVar11 = (long *)plVar3[0x4d];
    if ((ulong)((long)plVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = (long)plVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)((long)plVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          plStack_70 = plVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10acce6ec; end: 10acce70f;  */

void FUN_10acce6ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  undefined1 *in_stack_ffffffffffffff98;
  ulong in_stack_ffffffffffffffa0;
  ulong in_stack_ffffffffffffffa8;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar4 = (long *)0x2;
  uVar7 = 0;
  FUN_10a052ee0(2,0,param_1);
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = plVar4;
  FUN_10acc8580(plVar4,uVar7);
  FUN_10acce874(param_4);
  func_0x000109898570(&stack0xffffffffffffff98,plVar4,param_1);
  func_0x000109898d68(&lStack_80,plVar4,param_1 + 0x10);
  if ((char)plVar6[0xc] == '\x01') {
    FUN_10a00946c(&UNK_10f6a1d58);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10acce834);
    (*pcVar2)();
  }
  puVar1 = in_stack_ffffffffffffff98;
  if (-1 < (long)in_stack_ffffffffffffffa8) {
    in_stack_ffffffffffffffa0 = in_stack_ffffffffffffffa8 >> 0x38;
    puVar1 = &stack0xffffffffffffff98;
  }
  FUN_10aca0e6c(plVar6,puVar1,in_stack_ffffffffffffffa0,&lStack_80);
  if (lStack_80 != 0) {
    __ZdlPv();
  }
  if ((long)in_stack_ffffffffffffffa8 < 0) {
    __ZdlPv(in_stack_ffffffffffffff98);
  }
  *extraout_x8 = 0;
  plVar4 = plVar5 + 0x4b;
  lVar8 = plVar5[0x59];
  uVar9 = lVar8 - 1;
  plVar5[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar4[lVar8 + 2];
    if (plVar5[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar9) {
      return;
    }
  }
  lVar8 = *plVar4;
  lVar13 = plVar5[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar9) {
    uVar16 = uVar9 - uVar15;
    lVar14 = plVar5[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar14 - lVar8 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_78 = plVar4;
        if (uVar10 >> 0x3c == 0) {
          lVar3 = uVar10 << 4;
          __Znwm();
          lVar13 = lVar3 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar4 = lVar12;
          plVar5[0x4c] = lVar13 + uVar16 * 0x10;
          plVar5[0x4d] = lVar3 + uVar10 * 0x10;
          lStack_98 = lVar8;
          lStack_90 = lVar8;
          lStack_88 = lVar8;
          lStack_80 = lVar14;
          func_0x00010988c1b8(&lStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar13,uVar16 * 0x10);
    plVar5[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar9 < uVar15) {
    lVar8 = lVar8 + uVar9 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar5[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar9;
  return;
}



/* Entry: 10acce710; end: 10acce873;  */

void FUN_10acce710(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined1 *in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  ulong in_stack_ffffffffffffffb8;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = param_2;
  FUN_10acc8580(param_2,param_3);
  FUN_10acce874(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  func_0x000109898d68(&lStack_70,param_2,param_4 + 0x10);
  if ((char)plVar5[0xc] == '\x01') {
    FUN_10a00946c(&UNK_10f6a1d58);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10acce834);
    (*pcVar2)();
  }
  puVar1 = in_stack_ffffffffffffffa8;
  if (-1 < (long)in_stack_ffffffffffffffb8) {
    in_stack_ffffffffffffffb0 = in_stack_ffffffffffffffb8 >> 0x38;
    puVar1 = &stack0xffffffffffffffa8;
  }
  FUN_10aca0e6c(plVar5,puVar1,in_stack_ffffffffffffffb0,&lStack_70);
  if (lStack_70 != 0) {
    __ZdlPv();
  }
  if ((long)in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  *param_1 = 0;
  plVar5 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar5[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar5;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar5;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar5 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10acce874; end: 10acce897;  */

void FUN_10acce874(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  undefined1 *in_stack_ffffffffffffff90;
  ulong in_stack_ffffffffffffff98;
  ulong in_stack_ffffffffffffffa0;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar4 = (long *)0x2;
  uVar7 = 0;
  FUN_10a052ee0(2,0,param_1);
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = plVar4;
  FUN_10acc8580(plVar4,uVar7);
  FUN_10a9d1e04(param_4);
  func_0x000109898570(&stack0xffffffffffffff90,plVar4,param_1);
  func_0x000109898f04(&lStack_88,plVar4,param_1 + 0x10);
  if ((char)plVar6[0xc] == '\x01') {
    FUN_10a00946c(&UNK_10f6a1d58);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10acce9c0);
    (*pcVar2)();
  }
  puVar1 = in_stack_ffffffffffffff90;
  if (-1 < (long)in_stack_ffffffffffffffa0) {
    in_stack_ffffffffffffff98 = in_stack_ffffffffffffffa0 >> 0x38;
    puVar1 = &stack0xffffffffffffff90;
  }
  FUN_10aca1724(plVar6,puVar1,in_stack_ffffffffffffff98,&lStack_88);
  FUN_10a0426d8(&stack0xffffffffffffffa8);
  if ((long)in_stack_ffffffffffffffa0 < 0) {
    __ZdlPv(in_stack_ffffffffffffff90);
  }
  *extraout_x8 = 0;
  plVar4 = plVar5 + 0x4b;
  lVar8 = plVar5[0x59];
  uVar9 = lVar8 - 1;
  plVar5[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar4[lVar8 + 2];
    if (plVar5[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar9) {
      return;
    }
  }
  lVar8 = *plVar4;
  lVar13 = plVar5[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar9) {
    uVar16 = uVar9 - uVar15;
    lVar14 = plVar5[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar14 - lVar8 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_78 = plVar4;
        if (uVar10 >> 0x3c == 0) {
          lVar3 = uVar10 << 4;
          __Znwm();
          lVar13 = lVar3 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar4 = lVar12;
          plVar5[0x4c] = lVar13 + uVar16 * 0x10;
          plVar5[0x4d] = lVar3 + uVar10 * 0x10;
          lStack_98 = lVar8;
          lStack_90 = lVar8;
          lStack_88 = lVar8;
          lStack_80 = lVar14;
          func_0x00010988c1b8(&lStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar13,uVar16 * 0x10);
    plVar5[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar9 < uVar15) {
    lVar8 = lVar8 + uVar9 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar5[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar9;
  return;
}



/* Entry: 10acce898; end: 10accea03;  */

void FUN_10acce898(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined1 *in_stack_ffffffffffffffa0;
  ulong in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = param_2;
  FUN_10acc8580(param_2,param_3);
  FUN_10a9d1e04(param_5);
  func_0x000109898570(&stack0xffffffffffffffa0,param_2,param_4);
  func_0x000109898f04(&lStack_78,param_2,param_4 + 0x10);
  if ((char)plVar5[0xc] == '\x01') {
    FUN_10a00946c(&UNK_10f6a1d58);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10acce9c0);
    (*pcVar2)();
  }
  puVar1 = in_stack_ffffffffffffffa0;
  if (-1 < (long)in_stack_ffffffffffffffb0) {
    in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffb0 >> 0x38;
    puVar1 = &stack0xffffffffffffffa0;
  }
  FUN_10aca1724(plVar5,puVar1,in_stack_ffffffffffffffa8,&lStack_78);
  FUN_10a0426d8(&stack0xffffffffffffffb8);
  if ((long)in_stack_ffffffffffffffb0 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa0);
  }
  *param_1 = 0;
  plVar5 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar5[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar5;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar5;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar5 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10accea04; end: 10accef9b;  */

void FUN_10accea04(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 ****ppppuVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 ****ppppuVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  long *unaff_x20;
  long lVar19;
  long lVar20;
  long *plVar21;
  ulong uVar22;
  long *plVar23;
  long lStack_c8;
  long lStack_c0;
  undefined8 ***pppuStack_b0;
  ulong uStack_a8;
  byte bStack_99;
  undefined8 ***pppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  
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
  FUN_10acc8580(param_2,param_3);
  FUN_10accef9c(param_5);
  func_0x000109898570(&pppuStack_b0,param_2,param_4);
  FUN_10a36cc70(&lStack_c8,param_2,param_4 + 0x10);
  if ((char)plVar10[0xc] == '\x01') {
    FUN_10a00946c(&UNK_10f6a1d58);
LAB_10acceeb8:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10acceebc);
    (*pcVar7)();
  }
  uVar18 = uStack_a8;
  ppppuVar6 = (undefined8 ****)pppuStack_b0;
  if (-1 < (char)bStack_99) {
    uVar18 = (ulong)bStack_99;
    ppppuVar6 = &pppuStack_b0;
  }
  if (0x7ffffffffffffff7 < uVar18) {
    func_0x000109ffde50();
    goto LAB_10acceeb8;
  }
  if (uVar18 < 0x17) {
    uStack_88 = (long *)CONCAT17((char)uVar18,(undefined7)uStack_88);
    ppppuVar11 = &pppuStack_98;
    if (uVar18 != 0) goto LAB_10acceb1c;
  }
  else {
    ppppuVar2 = (undefined8 ****)0x19;
    if ((uVar18 | 7) != 0x17) {
      ppppuVar2 = (undefined8 ****)((uVar18 | 7) + 1);
    }
    ppppuVar11 = ppppuVar2;
    __Znwm();
    uStack_88 = (long *)((ulong)ppppuVar2 | 0x8000000000000000);
    pppuStack_98 = ppppuVar11;
    uStack_90 = uVar18;
LAB_10acceb1c:
    _memmove(ppppuVar11,ppppuVar6,uVar18);
  }
  *(undefined1 *)((long)ppppuVar11 + uVar18) = 0;
  FUN_10ac9e388(plVar10,&pppuStack_98,0);
  plVar3 = plVar10 + 7;
  plVar17 = plVar3;
  func_0x000107c2b05c(plVar3,&pppuStack_98);
  plVar23 = (long *)plVar10[8];
  if (plVar23 != (long *)0x0) {
    uVar18 = (long)plVar23 - 1;
    if (((ulong)plVar23 & uVar18) == 0) {
      unaff_x20 = (long *)(uVar18 & (ulong)plVar17);
    }
    else {
      unaff_x20 = plVar17;
      if (plVar23 <= plVar17) {
        uVar16 = 0;
        if (plVar23 != (long *)0x0) {
          uVar16 = (ulong)plVar17 / (ulong)plVar23;
        }
        unaff_x20 = (long *)((long)plVar17 - uVar16 * (long)plVar23);
      }
    }
    puVar12 = *(undefined8 **)(*plVar3 + (long)unaff_x20 * 8);
    if (puVar12 != (undefined8 *)0x0) {
      for (plVar21 = (long *)*puVar12; plVar21 != (long *)0x0; plVar21 = (long *)*plVar21) {
        plVar13 = (long *)plVar21[1];
        if (plVar13 == plVar17) {
          plVar13 = plVar3;
          func_0x000107c2b068(plVar3,plVar21 + 2,&pppuStack_98);
          if (((ulong)plVar13 & 1) != 0) goto LAB_10accedc8;
        }
        else {
          if (((ulong)plVar23 & uVar18) == 0) {
            plVar13 = (long *)((ulong)plVar13 & uVar18);
          }
          else if (plVar23 <= plVar13) {
            uVar16 = 0;
            if (plVar23 != (long *)0x0) {
              uVar16 = (ulong)plVar13 / (ulong)plVar23;
            }
            plVar13 = (long *)((long)plVar13 - uVar16 * (long)plVar23);
          }
          if (plVar13 != unaff_x20) break;
        }
      }
    }
  }
  plVar21 = (long *)0x60;
  __Znwm();
  lStack_70 = 0;
  *plVar21 = 0;
  plVar21[1] = (long)plVar17;
  plStack_80 = plVar21;
  plStack_78 = plVar3;
  if ((long)uStack_88 < 0) {
    func_0x000107c3192c(plVar21 + 2,pppuStack_98,uStack_90);
  }
  else {
    plVar21[3] = uStack_90;
    plVar21[2] = (long)pppuStack_98;
    plVar21[4] = (long)uStack_88;
  }
  lVar20 = lStack_c0;
  lVar14 = lStack_c8;
  plVar21[9] = 0;
  plVar21[8] = 0;
  *(undefined1 *)(plVar21 + 6) = 0;
  plVar21[5] = (long)&PTR_FUN_110c6c2d0;
  *(undefined2 *)((long)plVar21 + 0x32) = 0xf;
  plVar21[0xb] = 0;
  plVar21[10] = 0;
  puVar12 = (undefined8 *)0x20;
  __Znwm();
  *puVar12 = &PTR_FUN_110c6bcb0;
  puVar12[2] = 0;
  puVar12[3] = 0;
  puVar12[1] = 0;
  FUN_10a07b634(puVar12 + 1,lVar14,lVar20,lVar20 - lVar14 >> 3);
  plVar13 = (long *)plVar21[0xb];
  plVar21[0xb] = (long)puVar12;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  lStack_70 = CONCAT71(lStack_70._1_7_,1);
  if ((plVar23 == (long *)0x0) ||
     (*(float *)(plVar10 + 0xb) * (float)plVar23 < (float)(plVar10[10] + 1))) {
    uVar18 = 1;
    if ((long *)0x2 < plVar23) {
      uVar18 = (ulong)(((ulong)plVar23 & (long)plVar23 - 1U) != 0);
    }
    uVar18 = uVar18 | (long)plVar23 << 1;
    uVar16 = (ulong)((float)(plVar10[10] + 1) / *(float *)(plVar10 + 0xb));
    if (uVar18 <= uVar16) {
      uVar18 = uVar16;
    }
    FUN_10a4ba824(plVar3,uVar18);
    plVar23 = (long *)plVar10[8];
    if (((ulong)plVar23 & (long)plVar23 - 1U) == 0) {
      unaff_x20 = (long *)((long)plVar23 - 1U & (ulong)plVar17);
    }
    else {
      unaff_x20 = plVar17;
      if (plVar23 <= plVar17) {
        uVar18 = 0;
        if (plVar23 != (long *)0x0) {
          uVar18 = (ulong)plVar17 / (ulong)plVar23;
        }
        unaff_x20 = (long *)((long)plVar17 - uVar18 * (long)plVar23);
      }
    }
  }
  lVar14 = *plVar3;
  plVar17 = *(long **)(lVar14 + (long)unaff_x20 * 8);
  if (plVar17 == (long *)0x0) {
    plVar17 = plVar10 + 9;
    *plStack_80 = *plVar17;
    *plVar17 = (long)plStack_80;
    *(long **)(lVar14 + (long)unaff_x20 * 8) = plVar17;
    if (*plStack_80 != 0) {
      plVar17 = *(long **)(*plStack_80 + 8);
      if (((ulong)plVar23 & (long)plVar23 - 1U) == 0) {
        plVar17 = (long *)((ulong)plVar17 & (long)plVar23 - 1U);
      }
      else if (plVar23 <= plVar17) {
        uVar18 = 0;
        if (plVar23 != (long *)0x0) {
          uVar18 = (ulong)plVar17 / (ulong)plVar23;
        }
        plVar17 = (long *)((long)plVar17 - uVar18 * (long)plVar23);
      }
      *(long **)(*plVar3 + (long)plVar17 * 8) = plStack_80;
    }
  }
  else {
    *plStack_80 = *plVar17;
    *plVar17 = (long)plStack_80;
  }
  plVar10[10] = plVar10[10] + 1;
  plVar21 = plStack_80;
LAB_10accedc8:
  func_0x00010a5499ec(plVar10,1,plVar21 + 5,&pppuStack_98);
  if (*(char *)(plVar10[0x11] + 8) == '\x01') {
    FUN_10a54a030(&plStack_80,plVar10 + 5);
    FUN_10a549a74(plVar10 + 0x10,&plStack_80,&pppuStack_98);
    plVar10 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar3 = plStack_78 + 1;
      do {
        lVar14 = *plVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *plVar3 = lVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
  }
  if ((long)uStack_88 < 0) {
    __ZdlPv(pppuStack_98);
  }
  if (lStack_c8 != 0) {
    lStack_c0 = lStack_c8;
    __ZdlPv();
  }
  if ((char)bStack_99 < '\0') {
    __ZdlPv(pppuStack_b0);
  }
  *param_1 = 0;
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
  plVar3 = (long *)*plVar10;
  plVar17 = (long *)plVar9[0x4c];
  lVar14 = (long)plVar17 - (long)plVar3;
  uVar16 = lVar14 >> 4;
  if (uVar16 < uVar18) {
    uVar22 = uVar18 - uVar16;
    lVar20 = plVar9[0x4d];
    if ((ulong)(lVar20 - (long)plVar17 >> 4) < uVar22) {
      if (uVar18 >> 0x3c == 0) {
        uVar15 = lVar20 - (long)plVar3 >> 3;
        if (uVar15 <= uVar18) {
          uVar15 = uVar18;
        }
        if (0x7fffffffffffffef < (ulong)(lVar20 - (long)plVar3)) {
          uVar15 = 0xfffffffffffffff;
        }
        plStack_68 = plVar10;
        if (uVar15 >> 0x3c == 0) {
          lVar8 = uVar15 << 4;
          __Znwm();
          lVar1 = lVar8 + lVar14;
          _bzero(lVar1,uVar22 * 0x10);
          lVar19 = lVar1 + uVar16 * -0x10;
          _memcpy(lVar19,plVar3,lVar14);
          *plVar10 = lVar19;
          plVar9[0x4c] = lVar1 + uVar22 * 0x10;
          plVar9[0x4d] = lVar8 + uVar15 * 0x10;
          uStack_88 = plVar3;
          plStack_80 = plVar3;
          plStack_78 = plVar3;
          lStack_70 = lVar20;
          func_0x00010988c1b8(&uStack_88);
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
    _bzero(plVar17,uVar22 * 0x10);
    plVar9[0x4c] = (long)(plVar17 + uVar22 * 2);
  }
  else if (uVar18 < uVar16) {
    while (plVar17 != plVar3 + uVar18 * 2) {
      plVar17 = plVar17 + -2;
      func_0x00010988c204(plVar17);
    }
    plVar9[0x4c] = (long)(plVar3 + uVar18 * 2);
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar18;
  return;
}



/* Entry: 10accef9c; end: 10accefbf;  */

void FUN_10accef9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  char cVar3;
  bool bVar4;
  undefined8 ****ppppuVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 ****ppppuVar11;
  undefined8 uVar12;
  undefined4 *extraout_x8;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  long *unaff_x20;
  long lVar20;
  long lVar21;
  long *plVar22;
  ulong uVar23;
  long *plVar24;
  long lStack_d8;
  long lStack_d0;
  undefined8 ***pppuStack_c0;
  ulong uStack_b8;
  byte bStack_a9;
  undefined8 ***pppuStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar8 = (long *)0x2;
  uVar12 = 0;
  FUN_10a052ee0(2,0,param_1);
  plVar9 = plVar8;
  (**(code **)(*plVar8 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  plVar10 = plVar8;
  FUN_10acc8580(plVar8,uVar12);
  FUN_10accf564(param_4);
  func_0x000109898570(&pppuStack_c0,plVar8,param_1);
  FUN_10a36ce70(&lStack_d8,plVar8,param_1 + 0x10);
  if ((char)plVar10[0xc] == '\x01') {
    FUN_10a00946c(&UNK_10f6a1d58);
LAB_10accf480:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10accf484);
    (*pcVar6)();
  }
  uVar19 = uStack_b8;
  ppppuVar5 = (undefined8 ****)pppuStack_c0;
  if (-1 < (char)bStack_a9) {
    uVar19 = (ulong)bStack_a9;
    ppppuVar5 = &pppuStack_c0;
  }
  if (0x7ffffffffffffff7 < uVar19) {
    func_0x000109ffde50();
    goto LAB_10accf480;
  }
  if (uVar19 < 0x17) {
    uStack_98 = (long *)CONCAT17((char)uVar19,(undefined7)uStack_98);
    ppppuVar11 = &pppuStack_a8;
    if (uVar19 != 0) goto LAB_10accf0d8;
  }
  else {
    ppppuVar2 = (undefined8 ****)0x19;
    if ((uVar19 | 7) != 0x17) {
      ppppuVar2 = (undefined8 ****)((uVar19 | 7) + 1);
    }
    ppppuVar11 = ppppuVar2;
    __Znwm();
    uStack_98 = (long *)((ulong)ppppuVar2 | 0x8000000000000000);
    pppuStack_a8 = ppppuVar11;
    uStack_a0 = uVar19;
LAB_10accf0d8:
    _memmove(ppppuVar11,ppppuVar5,uVar19);
  }
  *(undefined1 *)((long)ppppuVar11 + uVar19) = 0;
  FUN_10ac9e388(plVar10,&pppuStack_a8,0);
  plVar8 = plVar10 + 7;
  plVar18 = plVar8;
  func_0x000107c2b05c(plVar8,&pppuStack_a8);
  plVar24 = (long *)plVar10[8];
  if (plVar24 != (long *)0x0) {
    uVar19 = (long)plVar24 - 1;
    if (((ulong)plVar24 & uVar19) == 0) {
      unaff_x20 = (long *)(uVar19 & (ulong)plVar18);
    }
    else {
      unaff_x20 = plVar18;
      if (plVar24 <= plVar18) {
        uVar17 = 0;
        if (plVar24 != (long *)0x0) {
          uVar17 = (ulong)plVar18 / (ulong)plVar24;
        }
        unaff_x20 = (long *)((long)plVar18 - uVar17 * (long)plVar24);
      }
    }
    puVar13 = *(undefined8 **)(*plVar8 + (long)unaff_x20 * 8);
    if (puVar13 != (undefined8 *)0x0) {
      for (plVar22 = (long *)*puVar13; plVar22 != (long *)0x0; plVar22 = (long *)*plVar22) {
        plVar14 = (long *)plVar22[1];
        if (plVar14 == plVar18) {
          plVar14 = plVar8;
          func_0x000107c2b068(plVar8,plVar22 + 2,&pppuStack_a8);
          if (((ulong)plVar14 & 1) != 0) goto LAB_10accf390;
        }
        else {
          if (((ulong)plVar24 & uVar19) == 0) {
            plVar14 = (long *)((ulong)plVar14 & uVar19);
          }
          else if (plVar24 <= plVar14) {
            uVar17 = 0;
            if (plVar24 != (long *)0x0) {
              uVar17 = (ulong)plVar14 / (ulong)plVar24;
            }
            plVar14 = (long *)((long)plVar14 - uVar17 * (long)plVar24);
          }
          if (plVar14 != unaff_x20) break;
        }
      }
    }
  }
  plVar22 = (long *)0x60;
  __Znwm();
  lStack_80 = 0;
  *plVar22 = 0;
  plVar22[1] = (long)plVar18;
  plStack_90 = plVar22;
  plStack_88 = plVar8;
  if ((long)uStack_98 < 0) {
    func_0x000107c3192c(plVar22 + 2,pppuStack_a8,uStack_a0);
  }
  else {
    plVar22[3] = uStack_a0;
    plVar22[2] = (long)pppuStack_a8;
    plVar22[4] = (long)uStack_98;
  }
  lVar21 = lStack_d0;
  lVar15 = lStack_d8;
  plVar22[9] = 0;
  plVar22[8] = 0;
  *(undefined1 *)(plVar22 + 6) = 0;
  plVar22[5] = (long)&PTR_FUN_110c6c2d0;
  *(undefined2 *)((long)plVar22 + 0x32) = 0xf;
  plVar22[0xb] = 0;
  plVar22[10] = 0;
  puVar13 = (undefined8 *)0x20;
  __Znwm();
  *puVar13 = &PTR_FUN_110c6bd00;
  puVar13[2] = 0;
  puVar13[3] = 0;
  puVar13[1] = 0;
  FUN_10a051a50(puVar13 + 1,lVar15,lVar21,(lVar21 - lVar15 >> 2) * -0x5555555555555555);
  plVar14 = (long *)plVar22[0xb];
  plVar22[0xb] = (long)puVar13;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 8))();
  }
  lStack_80 = CONCAT71(lStack_80._1_7_,1);
  if ((plVar24 == (long *)0x0) ||
     (*(float *)(plVar10 + 0xb) * (float)plVar24 < (float)(plVar10[10] + 1))) {
    uVar19 = 1;
    if ((long *)0x2 < plVar24) {
      uVar19 = (ulong)(((ulong)plVar24 & (long)plVar24 - 1U) != 0);
    }
    uVar19 = uVar19 | (long)plVar24 << 1;
    uVar17 = (ulong)((float)(plVar10[10] + 1) / *(float *)(plVar10 + 0xb));
    if (uVar19 <= uVar17) {
      uVar19 = uVar17;
    }
    FUN_10a4ba824(plVar8,uVar19);
    plVar24 = (long *)plVar10[8];
    if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
      unaff_x20 = (long *)((long)plVar24 - 1U & (ulong)plVar18);
    }
    else {
      unaff_x20 = plVar18;
      if (plVar24 <= plVar18) {
        uVar19 = 0;
        if (plVar24 != (long *)0x0) {
          uVar19 = (ulong)plVar18 / (ulong)plVar24;
        }
        unaff_x20 = (long *)((long)plVar18 - uVar19 * (long)plVar24);
      }
    }
  }
  lVar15 = *plVar8;
  plVar18 = *(long **)(lVar15 + (long)unaff_x20 * 8);
  if (plVar18 == (long *)0x0) {
    plVar18 = plVar10 + 9;
    *plStack_90 = *plVar18;
    *plVar18 = (long)plStack_90;
    *(long **)(lVar15 + (long)unaff_x20 * 8) = plVar18;
    if (*plStack_90 != 0) {
      plVar18 = *(long **)(*plStack_90 + 8);
      if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
        plVar18 = (long *)((ulong)plVar18 & (long)plVar24 - 1U);
      }
      else if (plVar24 <= plVar18) {
        uVar19 = 0;
        if (plVar24 != (long *)0x0) {
          uVar19 = (ulong)plVar18 / (ulong)plVar24;
        }
        plVar18 = (long *)((long)plVar18 - uVar19 * (long)plVar24);
      }
      *(long **)(*plVar8 + (long)plVar18 * 8) = plStack_90;
    }
  }
  else {
    *plStack_90 = *plVar18;
    *plVar18 = (long)plStack_90;
  }
  plVar10[10] = plVar10[10] + 1;
  plVar22 = plStack_90;
LAB_10accf390:
  func_0x00010a5499ec(plVar10,1,plVar22 + 5,&pppuStack_a8);
  if (*(char *)(plVar10[0x11] + 8) == '\x01') {
    FUN_10a54a030(&plStack_90,plVar10 + 5);
    FUN_10a549a74(plVar10 + 0x10,&plStack_90,&pppuStack_a8);
    plVar8 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar10 = plStack_88 + 1;
      do {
        lVar15 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
  }
  if ((long)uStack_98 < 0) {
    __ZdlPv(pppuStack_a8);
  }
  if (lStack_d8 != 0) {
    lStack_d0 = lStack_d8;
    __ZdlPv();
  }
  if ((char)bStack_a9 < '\0') {
    __ZdlPv(pppuStack_c0);
  }
  *extraout_x8 = 0;
  plVar8 = plVar9 + 0x4b;
  lVar15 = plVar9[0x59];
  uVar19 = lVar15 - 1;
  plVar9[0x59] = uVar19;
  if (uVar19 < 8) {
    uVar19 = plVar8[lVar15 + 2];
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
  plVar10 = (long *)*plVar8;
  plVar18 = (long *)plVar9[0x4c];
  lVar15 = (long)plVar18 - (long)plVar10;
  uVar17 = lVar15 >> 4;
  if (uVar17 < uVar19) {
    uVar23 = uVar19 - uVar17;
    lVar21 = plVar9[0x4d];
    if ((ulong)(lVar21 - (long)plVar18 >> 4) < uVar23) {
      if (uVar19 >> 0x3c == 0) {
        uVar16 = lVar21 - (long)plVar10 >> 3;
        if (uVar16 <= uVar19) {
          uVar16 = uVar19;
        }
        if (0x7fffffffffffffef < (ulong)(lVar21 - (long)plVar10)) {
          uVar16 = 0xfffffffffffffff;
        }
        plStack_78 = plVar8;
        if (uVar16 >> 0x3c == 0) {
          lVar7 = uVar16 << 4;
          __Znwm();
          lVar1 = lVar7 + lVar15;
          _bzero(lVar1,uVar23 * 0x10);
          lVar20 = lVar1 + uVar17 * -0x10;
          _memcpy(lVar20,plVar10,lVar15);
          *plVar8 = lVar20;
          plVar9[0x4c] = lVar1 + uVar23 * 0x10;
          plVar9[0x4d] = lVar7 + uVar16 * 0x10;
          uStack_98 = plVar10;
          plStack_90 = plVar10;
          plStack_88 = plVar10;
          lStack_80 = lVar21;
          func_0x00010988c1b8(&uStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar6)();
    }
    _bzero(plVar18,uVar23 * 0x10);
    plVar9[0x4c] = (long)(plVar18 + uVar23 * 2);
  }
  else if (uVar19 < uVar17) {
    while (plVar18 != plVar10 + uVar19 * 2) {
      plVar18 = plVar18 + -2;
      func_0x00010988c204(plVar18);
    }
    plVar9[0x4c] = (long)(plVar10 + uVar19 * 2);
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar19;
  return;
}



/* Entry: 10accefc0; end: 10accf563;  */

void FUN_10accefc0(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 ****ppppuVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 ****ppppuVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  long *unaff_x20;
  long lVar19;
  long lVar20;
  long *plVar21;
  ulong uVar22;
  long *plVar23;
  long lStack_c8;
  long lStack_c0;
  undefined8 ***pppuStack_b0;
  ulong uStack_a8;
  byte bStack_99;
  undefined8 ***pppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  
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
  FUN_10acc8580(param_2,param_3);
  FUN_10accf564(param_5);
  func_0x000109898570(&pppuStack_b0,param_2,param_4);
  FUN_10a36ce70(&lStack_c8,param_2,param_4 + 0x10);
  if ((char)plVar10[0xc] == '\x01') {
    FUN_10a00946c(&UNK_10f6a1d58);
LAB_10accf480:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10accf484);
    (*pcVar7)();
  }
  uVar18 = uStack_a8;
  ppppuVar6 = (undefined8 ****)pppuStack_b0;
  if (-1 < (char)bStack_99) {
    uVar18 = (ulong)bStack_99;
    ppppuVar6 = &pppuStack_b0;
  }
  if (0x7ffffffffffffff7 < uVar18) {
    func_0x000109ffde50();
    goto LAB_10accf480;
  }
  if (uVar18 < 0x17) {
    uStack_88 = (long *)CONCAT17((char)uVar18,(undefined7)uStack_88);
    ppppuVar11 = &pppuStack_98;
    if (uVar18 != 0) goto LAB_10accf0d8;
  }
  else {
    ppppuVar2 = (undefined8 ****)0x19;
    if ((uVar18 | 7) != 0x17) {
      ppppuVar2 = (undefined8 ****)((uVar18 | 7) + 1);
    }
    ppppuVar11 = ppppuVar2;
    __Znwm();
    uStack_88 = (long *)((ulong)ppppuVar2 | 0x8000000000000000);
    pppuStack_98 = ppppuVar11;
    uStack_90 = uVar18;
LAB_10accf0d8:
    _memmove(ppppuVar11,ppppuVar6,uVar18);
  }
  *(undefined1 *)((long)ppppuVar11 + uVar18) = 0;
  FUN_10ac9e388(plVar10,&pppuStack_98,0);
  plVar3 = plVar10 + 7;
  plVar17 = plVar3;
  func_0x000107c2b05c(plVar3,&pppuStack_98);
  plVar23 = (long *)plVar10[8];
  if (plVar23 != (long *)0x0) {
    uVar18 = (long)plVar23 - 1;
    if (((ulong)plVar23 & uVar18) == 0) {
      unaff_x20 = (long *)(uVar18 & (ulong)plVar17);
    }
    else {
      unaff_x20 = plVar17;
      if (plVar23 <= plVar17) {
        uVar16 = 0;
        if (plVar23 != (long *)0x0) {
          uVar16 = (ulong)plVar17 / (ulong)plVar23;
        }
        unaff_x20 = (long *)((long)plVar17 - uVar16 * (long)plVar23);
      }
    }
    puVar12 = *(undefined8 **)(*plVar3 + (long)unaff_x20 * 8);
    if (puVar12 != (undefined8 *)0x0) {
      for (plVar21 = (long *)*puVar12; plVar21 != (long *)0x0; plVar21 = (long *)*plVar21) {
        plVar13 = (long *)plVar21[1];
        if (plVar13 == plVar17) {
          plVar13 = plVar3;
          func_0x000107c2b068(plVar3,plVar21 + 2,&pppuStack_98);
          if (((ulong)plVar13 & 1) != 0) goto LAB_10accf390;
        }
        else {
          if (((ulong)plVar23 & uVar18) == 0) {
            plVar13 = (long *)((ulong)plVar13 & uVar18);
          }
          else if (plVar23 <= plVar13) {
            uVar16 = 0;
            if (plVar23 != (long *)0x0) {
              uVar16 = (ulong)plVar13 / (ulong)plVar23;
            }
            plVar13 = (long *)((long)plVar13 - uVar16 * (long)plVar23);
          }
          if (plVar13 != unaff_x20) break;
        }
      }
    }
  }
  plVar21 = (long *)0x60;
  __Znwm();
  lStack_70 = 0;
  *plVar21 = 0;
  plVar21[1] = (long)plVar17;
  plStack_80 = plVar21;
  plStack_78 = plVar3;
  if ((long)uStack_88 < 0) {
    func_0x000107c3192c(plVar21 + 2,pppuStack_98,uStack_90);
  }
  else {
    plVar21[3] = uStack_90;
    plVar21[2] = (long)pppuStack_98;
    plVar21[4] = (long)uStack_88;
  }
  lVar20 = lStack_c0;
  lVar14 = lStack_c8;
  plVar21[9] = 0;
  plVar21[8] = 0;
  *(undefined1 *)(plVar21 + 6) = 0;
  plVar21[5] = (long)&PTR_FUN_110c6c2d0;
  *(undefined2 *)((long)plVar21 + 0x32) = 0xf;
  plVar21[0xb] = 0;
  plVar21[10] = 0;
  puVar12 = (undefined8 *)0x20;
  __Znwm();
  *puVar12 = &PTR_FUN_110c6bd00;
  puVar12[2] = 0;
  puVar12[3] = 0;
  puVar12[1] = 0;
  FUN_10a051a50(puVar12 + 1,lVar14,lVar20,(lVar20 - lVar14 >> 2) * -0x5555555555555555);
  plVar13 = (long *)plVar21[0xb];
  plVar21[0xb] = (long)puVar12;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  lStack_70 = CONCAT71(lStack_70._1_7_,1);
  if ((plVar23 == (long *)0x0) ||
     (*(float *)(plVar10 + 0xb) * (float)plVar23 < (float)(plVar10[10] + 1))) {
    uVar18 = 1;
    if ((long *)0x2 < plVar23) {
      uVar18 = (ulong)(((ulong)plVar23 & (long)plVar23 - 1U) != 0);
    }
    uVar18 = uVar18 | (long)plVar23 << 1;
    uVar16 = (ulong)((float)(plVar10[10] + 1) / *(float *)(plVar10 + 0xb));
    if (uVar18 <= uVar16) {
      uVar18 = uVar16;
    }
    FUN_10a4ba824(plVar3,uVar18);
    plVar23 = (long *)plVar10[8];
    if (((ulong)plVar23 & (long)plVar23 - 1U) == 0) {
      unaff_x20 = (long *)((long)plVar23 - 1U & (ulong)plVar17);
    }
    else {
      unaff_x20 = plVar17;
      if (plVar23 <= plVar17) {
        uVar18 = 0;
        if (plVar23 != (long *)0x0) {
          uVar18 = (ulong)plVar17 / (ulong)plVar23;
        }
        unaff_x20 = (long *)((long)plVar17 - uVar18 * (long)plVar23);
      }
    }
  }
  lVar14 = *plVar3;
  plVar17 = *(long **)(lVar14 + (long)unaff_x20 * 8);
  if (plVar17 == (long *)0x0) {
    plVar17 = plVar10 + 9;
    *plStack_80 = *plVar17;
    *plVar17 = (long)plStack_80;
    *(long **)(lVar14 + (long)unaff_x20 * 8) = plVar17;
    if (*plStack_80 != 0) {
      plVar17 = *(long **)(*plStack_80 + 8);
      if (((ulong)plVar23 & (long)plVar23 - 1U) == 0) {
        plVar17 = (long *)((ulong)plVar17 & (long)plVar23 - 1U);
      }
      else if (plVar23 <= plVar17) {
        uVar18 = 0;
        if (plVar23 != (long *)0x0) {
          uVar18 = (ulong)plVar17 / (ulong)plVar23;
        }
        plVar17 = (long *)((long)plVar17 - uVar18 * (long)plVar23);
      }
      *(long **)(*plVar3 + (long)plVar17 * 8) = plStack_80;
    }
  }
  else {
    *plStack_80 = *plVar17;
    *plVar17 = (long)plStack_80;
  }
  plVar10[10] = plVar10[10] + 1;
  plVar21 = plStack_80;
LAB_10accf390:
  func_0x00010a5499ec(plVar10,1,plVar21 + 5,&pppuStack_98);
  if (*(char *)(plVar10[0x11] + 8) == '\x01') {
    FUN_10a54a030(&plStack_80,plVar10 + 5);
    FUN_10a549a74(plVar10 + 0x10,&plStack_80,&pppuStack_98);
    plVar10 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar3 = plStack_78 + 1;
      do {
        lVar14 = *plVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *plVar3 = lVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
  }
  if ((long)uStack_88 < 0) {
    __ZdlPv(pppuStack_98);
  }
  if (lStack_c8 != 0) {
    lStack_c0 = lStack_c8;
    __ZdlPv();
  }
  if ((char)bStack_99 < '\0') {
    __ZdlPv(pppuStack_b0);
  }
  *param_1 = 0;
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
  plVar3 = (long *)*plVar10;
  plVar17 = (long *)plVar9[0x4c];
  lVar14 = (long)plVar17 - (long)plVar3;
  uVar16 = lVar14 >> 4;
  if (uVar16 < uVar18) {
    uVar22 = uVar18 - uVar16;
    lVar20 = plVar9[0x4d];
    if ((ulong)(lVar20 - (long)plVar17 >> 4) < uVar22) {
      if (uVar18 >> 0x3c == 0) {
        uVar15 = lVar20 - (long)plVar3 >> 3;
        if (uVar15 <= uVar18) {
          uVar15 = uVar18;
        }
        if (0x7fffffffffffffef < (ulong)(lVar20 - (long)plVar3)) {
          uVar15 = 0xfffffffffffffff;
        }
        plStack_68 = plVar10;
        if (uVar15 >> 0x3c == 0) {
          lVar8 = uVar15 << 4;
          __Znwm();
          lVar1 = lVar8 + lVar14;
          _bzero(lVar1,uVar22 * 0x10);
          lVar19 = lVar1 + uVar16 * -0x10;
          _memcpy(lVar19,plVar3,lVar14);
          *plVar10 = lVar19;
          plVar9[0x4c] = lVar1 + uVar22 * 0x10;
          plVar9[0x4d] = lVar8 + uVar15 * 0x10;
          uStack_88 = plVar3;
          plStack_80 = plVar3;
          plStack_78 = plVar3;
          lStack_70 = lVar20;
          func_0x00010988c1b8(&uStack_88);
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
    _bzero(plVar17,uVar22 * 0x10);
    plVar9[0x4c] = (long)(plVar17 + uVar22 * 2);
  }
  else if (uVar18 < uVar16) {
    while (plVar17 != plVar3 + uVar18 * 2) {
      plVar17 = plVar17 + -2;
      func_0x00010988c204(plVar17);
    }
    plVar9[0x4c] = (long)(plVar3 + uVar18 * 2);
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar18;
  return;
}



/* Entry: 10accf564; end: 10accf587;  */

void FUN_10accf564(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  char cVar3;
  bool bVar4;
  undefined8 ****ppppuVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 ****ppppuVar11;
  undefined8 uVar12;
  undefined4 *extraout_x8;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  long *unaff_x20;
  long lVar20;
  long lVar21;
  long *plVar22;
  ulong uVar23;
  long *plVar24;
  long lStack_d8;
  long lStack_d0;
  undefined8 ***pppuStack_c0;
  ulong uStack_b8;
  byte bStack_a9;
  undefined8 ***pppuStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar8 = (long *)0x2;
  uVar12 = 0;
  FUN_10a052ee0(2,0,param_1);
  plVar9 = plVar8;
  (**(code **)(*plVar8 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  plVar10 = plVar8;
  FUN_10acc8580(plVar8,uVar12);
  FUN_10accfb20(param_4);
  func_0x000109898570(&pppuStack_c0,plVar8,param_1);
  FUN_10a36d070(&lStack_d8,plVar8,param_1 + 0x10);
  if ((char)plVar10[0xc] == '\x01') {
    FUN_10a00946c(&UNK_10f6a1d58);
LAB_10accfa3c:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10accfa40);
    (*pcVar6)();
  }
  uVar19 = uStack_b8;
  ppppuVar5 = (undefined8 ****)pppuStack_c0;
  if (-1 < (char)bStack_a9) {
    uVar19 = (ulong)bStack_a9;
    ppppuVar5 = &pppuStack_c0;
  }
  if (0x7ffffffffffffff7 < uVar19) {
    func_0x000109ffde50();
    goto LAB_10accfa3c;
  }
  if (uVar19 < 0x17) {
    uStack_98 = (long *)CONCAT17((char)uVar19,(undefined7)uStack_98);
    ppppuVar11 = &pppuStack_a8;
    if (uVar19 != 0) goto LAB_10accf6a0;
  }
  else {
    ppppuVar2 = (undefined8 ****)0x19;
    if ((uVar19 | 7) != 0x17) {
      ppppuVar2 = (undefined8 ****)((uVar19 | 7) + 1);
    }
    ppppuVar11 = ppppuVar2;
    __Znwm();
    uStack_98 = (long *)((ulong)ppppuVar2 | 0x8000000000000000);
    pppuStack_a8 = ppppuVar11;
    uStack_a0 = uVar19;
LAB_10accf6a0:
    _memmove(ppppuVar11,ppppuVar5,uVar19);
  }
  *(undefined1 *)((long)ppppuVar11 + uVar19) = 0;
  FUN_10ac9e388(plVar10,&pppuStack_a8,0);
  plVar8 = plVar10 + 7;
  plVar18 = plVar8;
  func_0x000107c2b05c(plVar8,&pppuStack_a8);
  plVar24 = (long *)plVar10[8];
  if (plVar24 != (long *)0x0) {
    uVar19 = (long)plVar24 - 1;
    if (((ulong)plVar24 & uVar19) == 0) {
      unaff_x20 = (long *)(uVar19 & (ulong)plVar18);
    }
    else {
      unaff_x20 = plVar18;
      if (plVar24 <= plVar18) {
        uVar17 = 0;
        if (plVar24 != (long *)0x0) {
          uVar17 = (ulong)plVar18 / (ulong)plVar24;
        }
        unaff_x20 = (long *)((long)plVar18 - uVar17 * (long)plVar24);
      }
    }
    puVar13 = *(undefined8 **)(*plVar8 + (long)unaff_x20 * 8);
    if (puVar13 != (undefined8 *)0x0) {
      for (plVar22 = (long *)*puVar13; plVar22 != (long *)0x0; plVar22 = (long *)*plVar22) {
        plVar14 = (long *)plVar22[1];
        if (plVar14 == plVar18) {
          plVar14 = plVar8;
          func_0x000107c2b068(plVar8,plVar22 + 2,&pppuStack_a8);
          if (((ulong)plVar14 & 1) != 0) goto LAB_10accf94c;
        }
        else {
          if (((ulong)plVar24 & uVar19) == 0) {
            plVar14 = (long *)((ulong)plVar14 & uVar19);
          }
          else if (plVar24 <= plVar14) {
            uVar17 = 0;
            if (plVar24 != (long *)0x0) {
              uVar17 = (ulong)plVar14 / (ulong)plVar24;
            }
            plVar14 = (long *)((long)plVar14 - uVar17 * (long)plVar24);
          }
          if (plVar14 != unaff_x20) break;
        }
      }
    }
  }
  plVar22 = (long *)0x60;
  __Znwm();
  lStack_80 = 0;
  *plVar22 = 0;
  plVar22[1] = (long)plVar18;
  plStack_90 = plVar22;
  plStack_88 = plVar8;
  if ((long)uStack_98 < 0) {
    func_0x000107c3192c(plVar22 + 2,pppuStack_a8,uStack_a0);
  }
  else {
    plVar22[3] = uStack_a0;
    plVar22[2] = (long)pppuStack_a8;
    plVar22[4] = (long)uStack_98;
  }
  lVar21 = lStack_d0;
  lVar15 = lStack_d8;
  plVar22[9] = 0;
  plVar22[8] = 0;
  *(undefined1 *)(plVar22 + 6) = 0;
  plVar22[5] = (long)&PTR_FUN_110c6c2d0;
  *(undefined2 *)((long)plVar22 + 0x32) = 0xf;
  plVar22[0xb] = 0;
  plVar22[10] = 0;
  puVar13 = (undefined8 *)0x20;
  __Znwm();
  *puVar13 = &PTR_FUN_110c6bd50;
  puVar13[2] = 0;
  puVar13[3] = 0;
  puVar13[1] = 0;
  FUN_10ac7a494(puVar13 + 1,lVar15,lVar21,lVar21 - lVar15 >> 4);
  plVar14 = (long *)plVar22[0xb];
  plVar22[0xb] = (long)puVar13;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 8))();
  }
  lStack_80 = CONCAT71(lStack_80._1_7_,1);
  if ((plVar24 == (long *)0x0) ||
     (*(float *)(plVar10 + 0xb) * (float)plVar24 < (float)(plVar10[10] + 1))) {
    uVar19 = 1;
    if ((long *)0x2 < plVar24) {
      uVar19 = (ulong)(((ulong)plVar24 & (long)plVar24 - 1U) != 0);
    }
    uVar19 = uVar19 | (long)plVar24 << 1;
    uVar17 = (ulong)((float)(plVar10[10] + 1) / *(float *)(plVar10 + 0xb));
    if (uVar19 <= uVar17) {
      uVar19 = uVar17;
    }
    FUN_10a4ba824(plVar8,uVar19);
    plVar24 = (long *)plVar10[8];
    if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
      unaff_x20 = (long *)((long)plVar24 - 1U & (ulong)plVar18);
    }
    else {
      unaff_x20 = plVar18;
      if (plVar24 <= plVar18) {
        uVar19 = 0;
        if (plVar24 != (long *)0x0) {
          uVar19 = (ulong)plVar18 / (ulong)plVar24;
        }
        unaff_x20 = (long *)((long)plVar18 - uVar19 * (long)plVar24);
      }
    }
  }
  lVar15 = *plVar8;
  plVar18 = *(long **)(lVar15 + (long)unaff_x20 * 8);
  if (plVar18 == (long *)0x0) {
    plVar18 = plVar10 + 9;
    *plStack_90 = *plVar18;
    *plVar18 = (long)plStack_90;
    *(long **)(lVar15 + (long)unaff_x20 * 8) = plVar18;
    if (*plStack_90 != 0) {
      plVar18 = *(long **)(*plStack_90 + 8);
      if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
        plVar18 = (long *)((ulong)plVar18 & (long)plVar24 - 1U);
      }
      else if (plVar24 <= plVar18) {
        uVar19 = 0;
        if (plVar24 != (long *)0x0) {
          uVar19 = (ulong)plVar18 / (ulong)plVar24;
        }
        plVar18 = (long *)((long)plVar18 - uVar19 * (long)plVar24);
      }
      *(long **)(*plVar8 + (long)plVar18 * 8) = plStack_90;
    }
  }
  else {
    *plStack_90 = *plVar18;
    *plVar18 = (long)plStack_90;
  }
  plVar10[10] = plVar10[10] + 1;
  plVar22 = plStack_90;
LAB_10accf94c:
  func_0x00010a5499ec(plVar10,1,plVar22 + 5,&pppuStack_a8);
  if (*(char *)(plVar10[0x11] + 8) == '\x01') {
    FUN_10a54a030(&plStack_90,plVar10 + 5);
    FUN_10a549a74(plVar10 + 0x10,&plStack_90,&pppuStack_a8);
    plVar8 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar10 = plStack_88 + 1;
      do {
        lVar15 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
  }
  if ((long)uStack_98 < 0) {
    __ZdlPv(pppuStack_a8);
  }
  if (lStack_d8 != 0) {
    lStack_d0 = lStack_d8;
    __ZdlPv();
  }
  if ((char)bStack_a9 < '\0') {
    __ZdlPv(pppuStack_c0);
  }
  *extraout_x8 = 0;
  plVar8 = plVar9 + 0x4b;
  lVar15 = plVar9[0x59];
  uVar19 = lVar15 - 1;
  plVar9[0x59] = uVar19;
  if (uVar19 < 8) {
    uVar19 = plVar8[lVar15 + 2];
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
  plVar10 = (long *)*plVar8;
  plVar18 = (long *)plVar9[0x4c];
  lVar15 = (long)plVar18 - (long)plVar10;
  uVar17 = lVar15 >> 4;
  if (uVar17 < uVar19) {
    uVar23 = uVar19 - uVar17;
    lVar21 = plVar9[0x4d];
    if ((ulong)(lVar21 - (long)plVar18 >> 4) < uVar23) {
      if (uVar19 >> 0x3c == 0) {
        uVar16 = lVar21 - (long)plVar10 >> 3;
        if (uVar16 <= uVar19) {
          uVar16 = uVar19;
        }
        if (0x7fffffffffffffef < (ulong)(lVar21 - (long)plVar10)) {
          uVar16 = 0xfffffffffffffff;
        }
        plStack_78 = plVar8;
        if (uVar16 >> 0x3c == 0) {
          lVar7 = uVar16 << 4;
          __Znwm();
          lVar1 = lVar7 + lVar15;
          _bzero(lVar1,uVar23 * 0x10);
          lVar20 = lVar1 + uVar17 * -0x10;
          _memcpy(lVar20,plVar10,lVar15);
          *plVar8 = lVar20;
          plVar9[0x4c] = lVar1 + uVar23 * 0x10;
          plVar9[0x4d] = lVar7 + uVar16 * 0x10;
          uStack_98 = plVar10;
          plStack_90 = plVar10;
          plStack_88 = plVar10;
          lStack_80 = lVar21;
          func_0x00010988c1b8(&uStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar6)();
    }
    _bzero(plVar18,uVar23 * 0x10);
    plVar9[0x4c] = (long)(plVar18 + uVar23 * 2);
  }
  else if (uVar19 < uVar17) {
    while (plVar18 != plVar10 + uVar19 * 2) {
      plVar18 = plVar18 + -2;
      func_0x00010988c204(plVar18);
    }
    plVar9[0x4c] = (long)(plVar10 + uVar19 * 2);
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar19;
  return;
}



/* Entry: 10accf588; end: 10accfb1f;  */

void FUN_10accf588(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 ****ppppuVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 ****ppppuVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  long *unaff_x20;
  long lVar19;
  long lVar20;
  long *plVar21;
  ulong uVar22;
  long *plVar23;
  long lStack_c8;
  long lStack_c0;
  undefined8 ***pppuStack_b0;
  ulong uStack_a8;
  byte bStack_99;
  undefined8 ***pppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  
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
  FUN_10acc8580(param_2,param_3);
  FUN_10accfb20(param_5);
  func_0x000109898570(&pppuStack_b0,param_2,param_4);
  FUN_10a36d070(&lStack_c8,param_2,param_4 + 0x10);
  if ((char)plVar10[0xc] == '\x01') {
    FUN_10a00946c(&UNK_10f6a1d58);
LAB_10accfa3c:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10accfa40);
    (*pcVar7)();
  }
  uVar18 = uStack_a8;
  ppppuVar6 = (undefined8 ****)pppuStack_b0;
  if (-1 < (char)bStack_99) {
    uVar18 = (ulong)bStack_99;
    ppppuVar6 = &pppuStack_b0;
  }
  if (0x7ffffffffffffff7 < uVar18) {
    func_0x000109ffde50();
    goto LAB_10accfa3c;
  }
  if (uVar18 < 0x17) {
    uStack_88 = (long *)CONCAT17((char)uVar18,(undefined7)uStack_88);
    ppppuVar11 = &pppuStack_98;
    if (uVar18 != 0) goto LAB_10accf6a0;
  }
  else {
    ppppuVar2 = (undefined8 ****)0x19;
    if ((uVar18 | 7) != 0x17) {
      ppppuVar2 = (undefined8 ****)((uVar18 | 7) + 1);
    }
    ppppuVar11 = ppppuVar2;
    __Znwm();
    uStack_88 = (long *)((ulong)ppppuVar2 | 0x8000000000000000);
    pppuStack_98 = ppppuVar11;
    uStack_90 = uVar18;
LAB_10accf6a0:
    _memmove(ppppuVar11,ppppuVar6,uVar18);
  }
  *(undefined1 *)((long)ppppuVar11 + uVar18) = 0;
  FUN_10ac9e388(plVar10,&pppuStack_98,0);
  plVar3 = plVar10 + 7;
  plVar17 = plVar3;
  func_0x000107c2b05c(plVar3,&pppuStack_98);
  plVar23 = (long *)plVar10[8];
  if (plVar23 != (long *)0x0) {
    uVar18 = (long)plVar23 - 1;
    if (((ulong)plVar23 & uVar18) == 0) {
      unaff_x20 = (long *)(uVar18 & (ulong)plVar17);
    }
    else {
      unaff_x20 = plVar17;
      if (plVar23 <= plVar17) {
        uVar16 = 0;
        if (plVar23 != (long *)0x0) {
          uVar16 = (ulong)plVar17 / (ulong)plVar23;
        }
        unaff_x20 = (long *)((long)plVar17 - uVar16 * (long)plVar23);
      }
    }
    puVar12 = *(undefined8 **)(*plVar3 + (long)unaff_x20 * 8);
    if (puVar12 != (undefined8 *)0x0) {
      for (plVar21 = (long *)*puVar12; plVar21 != (long *)0x0; plVar21 = (long *)*plVar21) {
        plVar13 = (long *)plVar21[1];
        if (plVar13 == plVar17) {
          plVar13 = plVar3;
          func_0x000107c2b068(plVar3,plVar21 + 2,&pppuStack_98);
          if (((ulong)plVar13 & 1) != 0) goto LAB_10accf94c;
        }
        else {
          if (((ulong)plVar23 & uVar18) == 0) {
            plVar13 = (long *)((ulong)plVar13 & uVar18);
          }
          else if (plVar23 <= plVar13) {
            uVar16 = 0;
            if (plVar23 != (long *)0x0) {
              uVar16 = (ulong)plVar13 / (ulong)plVar23;
            }
            plVar13 = (long *)((long)plVar13 - uVar16 * (long)plVar23);
          }
          if (plVar13 != unaff_x20) break;
        }
      }
    }
  }
  plVar21 = (long *)0x60;
  __Znwm();
  lStack_70 = 0;
  *plVar21 = 0;
  plVar21[1] = (long)plVar17;
  plStack_80 = plVar21;
  plStack_78 = plVar3;
  if ((long)uStack_88 < 0) {
    func_0x000107c3192c(plVar21 + 2,pppuStack_98,uStack_90);
  }
  else {
    plVar21[3] = uStack_90;
    plVar21[2] = (long)pppuStack_98;
    plVar21[4] = (long)uStack_88;
  }
  lVar20 = lStack_c0;
  lVar14 = lStack_c8;
  plVar21[9] = 0;
  plVar21[8] = 0;
  *(undefined1 *)(plVar21 + 6) = 0;
  plVar21[5] = (long)&PTR_FUN_110c6c2d0;
  *(undefined2 *)((long)plVar21 + 0x32) = 0xf;
  plVar21[0xb] = 0;
  plVar21[10] = 0;
  puVar12 = (undefined8 *)0x20;
  __Znwm();
  *puVar12 = &PTR_FUN_110c6bd50;
  puVar12[2] = 0;
  puVar12[3] = 0;
  puVar12[1] = 0;
  FUN_10ac7a494(puVar12 + 1,lVar14,lVar20,lVar20 - lVar14 >> 4);
  plVar13 = (long *)plVar21[0xb];
  plVar21[0xb] = (long)puVar12;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  lStack_70 = CONCAT71(lStack_70._1_7_,1);
  if ((plVar23 == (long *)0x0) ||
     (*(float *)(plVar10 + 0xb) * (float)plVar23 < (float)(plVar10[10] + 1))) {
    uVar18 = 1;
    if ((long *)0x2 < plVar23) {
      uVar18 = (ulong)(((ulong)plVar23 & (long)plVar23 - 1U) != 0);
    }
    uVar18 = uVar18 | (long)plVar23 << 1;
    uVar16 = (ulong)((float)(plVar10[10] + 1) / *(float *)(plVar10 + 0xb));
    if (uVar18 <= uVar16) {
      uVar18 = uVar16;
    }
    FUN_10a4ba824(plVar3,uVar18);
    plVar23 = (long *)plVar10[8];
    if (((ulong)plVar23 & (long)plVar23 - 1U) == 0) {
      unaff_x20 = (long *)((long)plVar23 - 1U & (ulong)plVar17);
    }
    else {
      unaff_x20 = plVar17;
      if (plVar23 <= plVar17) {
        uVar18 = 0;
        if (plVar23 != (long *)0x0) {
          uVar18 = (ulong)plVar17 / (ulong)plVar23;
        }
        unaff_x20 = (long *)((long)plVar17 - uVar18 * (long)plVar23);
      }
    }
  }
  lVar14 = *plVar3;
  plVar17 = *(long **)(lVar14 + (long)unaff_x20 * 8);
  if (plVar17 == (long *)0x0) {
    plVar17 = plVar10 + 9;
    *plStack_80 = *plVar17;
    *plVar17 = (long)plStack_80;
    *(long **)(lVar14 + (long)unaff_x20 * 8) = plVar17;
    if (*plStack_80 != 0) {
      plVar17 = *(long **)(*plStack_80 + 8);
      if (((ulong)plVar23 & (long)plVar23 - 1U) == 0) {
        plVar17 = (long *)((ulong)plVar17 & (long)plVar23 - 1U);
      }
      else if (plVar23 <= plVar17) {
        uVar18 = 0;
        if (plVar23 != (long *)0x0) {
          uVar18 = (ulong)plVar17 / (ulong)plVar23;
        }
        plVar17 = (long *)((long)plVar17 - uVar18 * (long)plVar23);
      }
      *(long **)(*plVar3 + (long)plVar17 * 8) = plStack_80;
    }
  }
  else {
    *plStack_80 = *plVar17;
    *plVar17 = (long)plStack_80;
  }
  plVar10[10] = plVar10[10] + 1;
  plVar21 = plStack_80;
LAB_10accf94c:
  func_0x00010a5499ec(plVar10,1,plVar21 + 5,&pppuStack_98);
  if (*(char *)(plVar10[0x11] + 8) == '\x01') {
    FUN_10a54a030(&plStack_80,plVar10 + 5);
    FUN_10a549a74(plVar10 + 0x10,&plStack_80,&pppuStack_98);
    plVar10 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar3 = plStack_78 + 1;
      do {
        lVar14 = *plVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *plVar3 = lVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
  }
  if ((long)uStack_88 < 0) {
    __ZdlPv(pppuStack_98);
  }
  if (lStack_c8 != 0) {
    lStack_c0 = lStack_c8;
    __ZdlPv();
  }
  if ((char)bStack_99 < '\0') {
    __ZdlPv(pppuStack_b0);
  }
  *param_1 = 0;
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
  plVar3 = (long *)*plVar10;
  plVar17 = (long *)plVar9[0x4c];
  lVar14 = (long)plVar17 - (long)plVar3;
  uVar16 = lVar14 >> 4;
  if (uVar16 < uVar18) {
    uVar22 = uVar18 - uVar16;
    lVar20 = plVar9[0x4d];
    if ((ulong)(lVar20 - (long)plVar17 >> 4) < uVar22) {
      if (uVar18 >> 0x3c == 0) {
        uVar15 = lVar20 - (long)plVar3 >> 3;
        if (uVar15 <= uVar18) {
          uVar15 = uVar18;
        }
        if (0x7fffffffffffffef < (ulong)(lVar20 - (long)plVar3)) {
          uVar15 = 0xfffffffffffffff;
        }
        plStack_68 = plVar10;
        if (uVar15 >> 0x3c == 0) {
          lVar8 = uVar15 << 4;
          __Znwm();
          lVar1 = lVar8 + lVar14;
          _bzero(lVar1,uVar22 * 0x10);
          lVar19 = lVar1 + uVar16 * -0x10;
          _memcpy(lVar19,plVar3,lVar14);
          *plVar10 = lVar19;
          plVar9[0x4c] = lVar1 + uVar22 * 0x10;
          plVar9[0x4d] = lVar8 + uVar15 * 0x10;
          uStack_88 = plVar3;
          plStack_80 = plVar3;
          plStack_78 = plVar3;
          lStack_70 = lVar20;
          func_0x00010988c1b8(&uStack_88);
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
    _bzero(plVar17,uVar22 * 0x10);
    plVar9[0x4c] = (long)(plVar17 + uVar22 * 2);
  }
  else if (uVar18 < uVar16) {
    while (plVar17 != plVar3 + uVar18 * 2) {
      plVar17 = plVar17 + -2;
      func_0x00010988c204(plVar17);
    }
    plVar9[0x4c] = (long)(plVar3 + uVar18 * 2);
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar18;
  return;
}



/* Entry: 10accfb20; end: 10accfb43;  */

void FUN_10accfb20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  char cVar3;
  bool bVar4;
  undefined8 ****ppppuVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 ****ppppuVar11;
  undefined8 uVar12;
  undefined4 *extraout_x8;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  long *unaff_x20;
  long lVar20;
  long lVar21;
  long *plVar22;
  ulong uVar23;
  long *plVar24;
  long lStack_d8;
  long lStack_d0;
  undefined8 ***pppuStack_c0;
  ulong uStack_b8;
  byte bStack_a9;
  undefined8 ***pppuStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar8 = (long *)0x2;
  uVar12 = 0;
  FUN_10a052ee0(2,0,param_1);
  plVar9 = plVar8;
  (**(code **)(*plVar8 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  plVar10 = plVar8;
  FUN_10acc8580(plVar8,uVar12);
  FUN_10acd00dc(param_4);
  func_0x000109898570(&pppuStack_c0,plVar8,param_1);
  FUN_10a36d270(&lStack_d8,plVar8,param_1 + 0x10);
  if ((char)plVar10[0xc] == '\x01') {
    FUN_10a00946c(&UNK_10f6a1d58);
LAB_10accfff8:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10accfffc);
    (*pcVar6)();
  }
  uVar19 = uStack_b8;
  ppppuVar5 = (undefined8 ****)pppuStack_c0;
  if (-1 < (char)bStack_a9) {
    uVar19 = (ulong)bStack_a9;
    ppppuVar5 = &pppuStack_c0;
  }
  if (0x7ffffffffffffff7 < uVar19) {
    func_0x000109ffde50();
    goto LAB_10accfff8;
  }
  if (uVar19 < 0x17) {
    uStack_98 = (long *)CONCAT17((char)uVar19,(undefined7)uStack_98);
    ppppuVar11 = &pppuStack_a8;
    if (uVar19 != 0) goto LAB_10accfc5c;
  }
  else {
    ppppuVar2 = (undefined8 ****)0x19;
    if ((uVar19 | 7) != 0x17) {
      ppppuVar2 = (undefined8 ****)((uVar19 | 7) + 1);
    }
    ppppuVar11 = ppppuVar2;
    __Znwm();
    uStack_98 = (long *)((ulong)ppppuVar2 | 0x8000000000000000);
    pppuStack_a8 = ppppuVar11;
    uStack_a0 = uVar19;
LAB_10accfc5c:
    _memmove(ppppuVar11,ppppuVar5,uVar19);
  }
  *(undefined1 *)((long)ppppuVar11 + uVar19) = 0;
  FUN_10ac9e388(plVar10,&pppuStack_a8,0);
  plVar8 = plVar10 + 7;
  plVar18 = plVar8;
  func_0x000107c2b05c(plVar8,&pppuStack_a8);
  plVar24 = (long *)plVar10[8];
  if (plVar24 != (long *)0x0) {
    uVar19 = (long)plVar24 - 1;
    if (((ulong)plVar24 & uVar19) == 0) {
      unaff_x20 = (long *)(uVar19 & (ulong)plVar18);
    }
    else {
      unaff_x20 = plVar18;
      if (plVar24 <= plVar18) {
        uVar17 = 0;
        if (plVar24 != (long *)0x0) {
          uVar17 = (ulong)plVar18 / (ulong)plVar24;
        }
        unaff_x20 = (long *)((long)plVar18 - uVar17 * (long)plVar24);
      }
    }
    puVar13 = *(undefined8 **)(*plVar8 + (long)unaff_x20 * 8);
    if (puVar13 != (undefined8 *)0x0) {
      for (plVar22 = (long *)*puVar13; plVar22 != (long *)0x0; plVar22 = (long *)*plVar22) {
        plVar14 = (long *)plVar22[1];
        if (plVar14 == plVar18) {
          plVar14 = plVar8;
          func_0x000107c2b068(plVar8,plVar22 + 2,&pppuStack_a8);
          if (((ulong)plVar14 & 1) != 0) goto LAB_10accff08;
        }
        else {
          if (((ulong)plVar24 & uVar19) == 0) {
            plVar14 = (long *)((ulong)plVar14 & uVar19);
          }
          else if (plVar24 <= plVar14) {
            uVar17 = 0;
            if (plVar24 != (long *)0x0) {
              uVar17 = (ulong)plVar14 / (ulong)plVar24;
            }
            plVar14 = (long *)((long)plVar14 - uVar17 * (long)plVar24);
          }
          if (plVar14 != unaff_x20) break;
        }
      }
    }
  }
  plVar22 = (long *)0x60;
  __Znwm();
  lStack_80 = 0;
  *plVar22 = 0;
  plVar22[1] = (long)plVar18;
  plStack_90 = plVar22;
  plStack_88 = plVar8;
  if ((long)uStack_98 < 0) {
    func_0x000107c3192c(plVar22 + 2,pppuStack_a8,uStack_a0);
  }
  else {
    plVar22[3] = uStack_a0;
    plVar22[2] = (long)pppuStack_a8;
    plVar22[4] = (long)uStack_98;
  }
  lVar21 = lStack_d0;
  lVar15 = lStack_d8;
  plVar22[9] = 0;
  plVar22[8] = 0;
  *(undefined1 *)(plVar22 + 6) = 0;
  plVar22[5] = (long)&PTR_FUN_110c6c2d0;
  *(undefined2 *)((long)plVar22 + 0x32) = 0xf;
  plVar22[0xb] = 0;
  plVar22[10] = 0;
  puVar13 = (undefined8 *)0x20;
  __Znwm();
  *puVar13 = &PTR_FUN_110c6bda0;
  puVar13[2] = 0;
  puVar13[3] = 0;
  puVar13[1] = 0;
  FUN_10acc6924(puVar13 + 1,lVar15,lVar21,lVar21 - lVar15 >> 4);
  plVar14 = (long *)plVar22[0xb];
  plVar22[0xb] = (long)puVar13;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 8))();
  }
  lStack_80 = CONCAT71(lStack_80._1_7_,1);
  if ((plVar24 == (long *)0x0) ||
     (*(float *)(plVar10 + 0xb) * (float)plVar24 < (float)(plVar10[10] + 1))) {
    uVar19 = 1;
    if ((long *)0x2 < plVar24) {
      uVar19 = (ulong)(((ulong)plVar24 & (long)plVar24 - 1U) != 0);
    }
    uVar19 = uVar19 | (long)plVar24 << 1;
    uVar17 = (ulong)((float)(plVar10[10] + 1) / *(float *)(plVar10 + 0xb));
    if (uVar19 <= uVar17) {
      uVar19 = uVar17;
    }
    FUN_10a4ba824(plVar8,uVar19);
    plVar24 = (long *)plVar10[8];
    if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
      unaff_x20 = (long *)((long)plVar24 - 1U & (ulong)plVar18);
    }
    else {
      unaff_x20 = plVar18;
      if (plVar24 <= plVar18) {
        uVar19 = 0;
        if (plVar24 != (long *)0x0) {
          uVar19 = (ulong)plVar18 / (ulong)plVar24;
        }
        unaff_x20 = (long *)((long)plVar18 - uVar19 * (long)plVar24);
      }
    }
  }
  lVar15 = *plVar8;
  plVar18 = *(long **)(lVar15 + (long)unaff_x20 * 8);
  if (plVar18 == (long *)0x0) {
    plVar18 = plVar10 + 9;
    *plStack_90 = *plVar18;
    *plVar18 = (long)plStack_90;
    *(long **)(lVar15 + (long)unaff_x20 * 8) = plVar18;
    if (*plStack_90 != 0) {
      plVar18 = *(long **)(*plStack_90 + 8);
      if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
        plVar18 = (long *)((ulong)plVar18 & (long)plVar24 - 1U);
      }
      else if (plVar24 <= plVar18) {
        uVar19 = 0;
        if (plVar24 != (long *)0x0) {
          uVar19 = (ulong)plVar18 / (ulong)plVar24;
        }
        plVar18 = (long *)((long)plVar18 - uVar19 * (long)plVar24);
      }
      *(long **)(*plVar8 + (long)plVar18 * 8) = plStack_90;
    }
  }
  else {
    *plStack_90 = *plVar18;
    *plVar18 = (long)plStack_90;
  }
  plVar10[10] = plVar10[10] + 1;
  plVar22 = plStack_90;
LAB_10accff08:
  func_0x00010a5499ec(plVar10,1,plVar22 + 5,&pppuStack_a8);
  if (*(char *)(plVar10[0x11] + 8) == '\x01') {
    FUN_10a54a030(&plStack_90,plVar10 + 5);
    FUN_10a549a74(plVar10 + 0x10,&plStack_90,&pppuStack_a8);
    plVar8 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar10 = plStack_88 + 1;
      do {
        lVar15 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
  }
  if ((long)uStack_98 < 0) {
    __ZdlPv(pppuStack_a8);
  }
  if (lStack_d8 != 0) {
    lStack_d0 = lStack_d8;
    __ZdlPv();
  }
  if ((char)bStack_a9 < '\0') {
    __ZdlPv(pppuStack_c0);
  }
  *extraout_x8 = 0;
  plVar8 = plVar9 + 0x4b;
  lVar15 = plVar9[0x59];
  uVar19 = lVar15 - 1;
  plVar9[0x59] = uVar19;
  if (uVar19 < 8) {
    uVar19 = plVar8[lVar15 + 2];
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
  plVar10 = (long *)*plVar8;
  plVar18 = (long *)plVar9[0x4c];
  lVar15 = (long)plVar18 - (long)plVar10;
  uVar17 = lVar15 >> 4;
  if (uVar17 < uVar19) {
    uVar23 = uVar19 - uVar17;
    lVar21 = plVar9[0x4d];
    if ((ulong)(lVar21 - (long)plVar18 >> 4) < uVar23) {
      if (uVar19 >> 0x3c == 0) {
        uVar16 = lVar21 - (long)plVar10 >> 3;
        if (uVar16 <= uVar19) {
          uVar16 = uVar19;
        }
        if (0x7fffffffffffffef < (ulong)(lVar21 - (long)plVar10)) {
          uVar16 = 0xfffffffffffffff;
        }
        plStack_78 = plVar8;
        if (uVar16 >> 0x3c == 0) {
          lVar7 = uVar16 << 4;
          __Znwm();
          lVar1 = lVar7 + lVar15;
          _bzero(lVar1,uVar23 * 0x10);
          lVar20 = lVar1 + uVar17 * -0x10;
          _memcpy(lVar20,plVar10,lVar15);
          *plVar8 = lVar20;
          plVar9[0x4c] = lVar1 + uVar23 * 0x10;
          plVar9[0x4d] = lVar7 + uVar16 * 0x10;
          uStack_98 = plVar10;
          plStack_90 = plVar10;
          plStack_88 = plVar10;
          lStack_80 = lVar21;
          func_0x00010988c1b8(&uStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar6)();
    }
    _bzero(plVar18,uVar23 * 0x10);
    plVar9[0x4c] = (long)(plVar18 + uVar23 * 2);
  }
  else if (uVar19 < uVar17) {
    while (plVar18 != plVar10 + uVar19 * 2) {
      plVar18 = plVar18 + -2;
      func_0x00010988c204(plVar18);
    }
    plVar9[0x4c] = (long)(plVar10 + uVar19 * 2);
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar19;
  return;
}



/* Entry: 10accfb44; end: 10acd00db;  */

void FUN_10accfb44(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 ****ppppuVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 ****ppppuVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  long *unaff_x20;
  long lVar19;
  long lVar20;
  long *plVar21;
  ulong uVar22;
  long *plVar23;
  long lStack_c8;
  long lStack_c0;
  undefined8 ***pppuStack_b0;
  ulong uStack_a8;
  byte bStack_99;
  undefined8 ***pppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  
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
  FUN_10acc8580(param_2,param_3);
  FUN_10acd00dc(param_5);
  func_0x000109898570(&pppuStack_b0,param_2,param_4);
  FUN_10a36d270(&lStack_c8,param_2,param_4 + 0x10);
  if ((char)plVar10[0xc] == '\x01') {
    FUN_10a00946c(&UNK_10f6a1d58);
LAB_10accfff8:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10accfffc);
    (*pcVar7)();
  }
  uVar18 = uStack_a8;
  ppppuVar6 = (undefined8 ****)pppuStack_b0;
  if (-1 < (char)bStack_99) {
    uVar18 = (ulong)bStack_99;
    ppppuVar6 = &pppuStack_b0;
  }
  if (0x7ffffffffffffff7 < uVar18) {
    func_0x000109ffde50();
    goto LAB_10accfff8;
  }
  if (uVar18 < 0x17) {
    uStack_88 = (long *)CONCAT17((char)uVar18,(undefined7)uStack_88);
    ppppuVar11 = &pppuStack_98;
    if (uVar18 != 0) goto LAB_10accfc5c;
  }
  else {
    ppppuVar2 = (undefined8 ****)0x19;
    if ((uVar18 | 7) != 0x17) {
      ppppuVar2 = (undefined8 ****)((uVar18 | 7) + 1);
    }
    ppppuVar11 = ppppuVar2;
    __Znwm();
    uStack_88 = (long *)((ulong)ppppuVar2 | 0x8000000000000000);
    pppuStack_98 = ppppuVar11;
    uStack_90 = uVar18;
LAB_10accfc5c:
    _memmove(ppppuVar11,ppppuVar6,uVar18);
  }
  *(undefined1 *)((long)ppppuVar11 + uVar18) = 0;
  FUN_10ac9e388(plVar10,&pppuStack_98,0);
  plVar3 = plVar10 + 7;
  plVar17 = plVar3;
  func_0x000107c2b05c(plVar3,&pppuStack_98);
  plVar23 = (long *)plVar10[8];
  if (plVar23 != (long *)0x0) {
    uVar18 = (long)plVar23 - 1;
    if (((ulong)plVar23 & uVar18) == 0) {
      unaff_x20 = (long *)(uVar18 & (ulong)plVar17);
    }
    else {
      unaff_x20 = plVar17;
      if (plVar23 <= plVar17) {
        uVar16 = 0;
        if (plVar23 != (long *)0x0) {
          uVar16 = (ulong)plVar17 / (ulong)plVar23;
        }
        unaff_x20 = (long *)((long)plVar17 - uVar16 * (long)plVar23);
      }
    }
    puVar12 = *(undefined8 **)(*plVar3 + (long)unaff_x20 * 8);
    if (puVar12 != (undefined8 *)0x0) {
      for (plVar21 = (long *)*puVar12; plVar21 != (long *)0x0; plVar21 = (long *)*plVar21) {
        plVar13 = (long *)plVar21[1];
        if (plVar13 == plVar17) {
          plVar13 = plVar3;
          func_0x000107c2b068(plVar3,plVar21 + 2,&pppuStack_98);
          if (((ulong)plVar13 & 1) != 0) goto LAB_10accff08;
        }
        else {
          if (((ulong)plVar23 & uVar18) == 0) {
            plVar13 = (long *)((ulong)plVar13 & uVar18);
          }
          else if (plVar23 <= plVar13) {
            uVar16 = 0;
            if (plVar23 != (long *)0x0) {
              uVar16 = (ulong)plVar13 / (ulong)plVar23;
            }
            plVar13 = (long *)((long)plVar13 - uVar16 * (long)plVar23);
          }
          if (plVar13 != unaff_x20) break;
        }
      }
    }
  }
  plVar21 = (long *)0x60;
  __Znwm();
  lStack_70 = 0;
  *plVar21 = 0;
  plVar21[1] = (long)plVar17;
  plStack_80 = plVar21;
  plStack_78 = plVar3;
  if ((long)uStack_88 < 0) {
    func_0x000107c3192c(plVar21 + 2,pppuStack_98,uStack_90);
  }
  else {
    plVar21[3] = uStack_90;
    plVar21[2] = (long)pppuStack_98;
    plVar21[4] = (long)uStack_88;
  }
  lVar20 = lStack_c0;
  lVar14 = lStack_c8;
  plVar21[9] = 0;
  plVar21[8] = 0;
  *(undefined1 *)(plVar21 + 6) = 0;
  plVar21[5] = (long)&PTR_FUN_110c6c2d0;
  *(undefined2 *)((long)plVar21 + 0x32) = 0xf;
  plVar21[0xb] = 0;
  plVar21[10] = 0;
  puVar12 = (undefined8 *)0x20;
  __Znwm();
  *puVar12 = &PTR_FUN_110c6bda0;
  puVar12[2] = 0;
  puVar12[3] = 0;
  puVar12[1] = 0;
  FUN_10acc6924(puVar12 + 1,lVar14,lVar20,lVar20 - lVar14 >> 4);
  plVar13 = (long *)plVar21[0xb];
  plVar21[0xb] = (long)puVar12;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  lStack_70 = CONCAT71(lStack_70._1_7_,1);
  if ((plVar23 == (long *)0x0) ||
     (*(float *)(plVar10 + 0xb) * (float)plVar23 < (float)(plVar10[10] + 1))) {
    uVar18 = 1;
    if ((long *)0x2 < plVar23) {
      uVar18 = (ulong)(((ulong)plVar23 & (long)plVar23 - 1U) != 0);
    }
    uVar18 = uVar18 | (long)plVar23 << 1;
    uVar16 = (ulong)((float)(plVar10[10] + 1) / *(float *)(plVar10 + 0xb));
    if (uVar18 <= uVar16) {
      uVar18 = uVar16;
    }
    FUN_10a4ba824(plVar3,uVar18);
    plVar23 = (long *)plVar10[8];
    if (((ulong)plVar23 & (long)plVar23 - 1U) == 0) {
      unaff_x20 = (long *)((long)plVar23 - 1U & (ulong)plVar17);
    }
    else {
      unaff_x20 = plVar17;
      if (plVar23 <= plVar17) {
        uVar18 = 0;
        if (plVar23 != (long *)0x0) {
          uVar18 = (ulong)plVar17 / (ulong)plVar23;
        }
        unaff_x20 = (long *)((long)plVar17 - uVar18 * (long)plVar23);
      }
    }
  }
  lVar14 = *plVar3;
  plVar17 = *(long **)(lVar14 + (long)unaff_x20 * 8);
  if (plVar17 == (long *)0x0) {
    plVar17 = plVar10 + 9;
    *plStack_80 = *plVar17;
    *plVar17 = (long)plStack_80;
    *(long **)(lVar14 + (long)unaff_x20 * 8) = plVar17;
    if (*plStack_80 != 0) {
      plVar17 = *(long **)(*plStack_80 + 8);
      if (((ulong)plVar23 & (long)plVar23 - 1U) == 0) {
        plVar17 = (long *)((ulong)plVar17 & (long)plVar23 - 1U);
      }
      else if (plVar23 <= plVar17) {
        uVar18 = 0;
        if (plVar23 != (long *)0x0) {
          uVar18 = (ulong)plVar17 / (ulong)plVar23;
        }
        plVar17 = (long *)((long)plVar17 - uVar18 * (long)plVar23);
      }
      *(long **)(*plVar3 + (long)plVar17 * 8) = plStack_80;
    }
  }
  else {
    *plStack_80 = *plVar17;
    *plVar17 = (long)plStack_80;
  }
  plVar10[10] = plVar10[10] + 1;
  plVar21 = plStack_80;
LAB_10accff08:
  func_0x00010a5499ec(plVar10,1,plVar21 + 5,&pppuStack_98);
  if (*(char *)(plVar10[0x11] + 8) == '\x01') {
    FUN_10a54a030(&plStack_80,plVar10 + 5);
    FUN_10a549a74(plVar10 + 0x10,&plStack_80,&pppuStack_98);
    plVar10 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar3 = plStack_78 + 1;
      do {
        lVar14 = *plVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *plVar3 = lVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
  }
  if ((long)uStack_88 < 0) {
    __ZdlPv(pppuStack_98);
  }
  if (lStack_c8 != 0) {
    lStack_c0 = lStack_c8;
    __ZdlPv();
  }
  if ((char)bStack_99 < '\0') {
    __ZdlPv(pppuStack_b0);
  }
  *param_1 = 0;
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
  plVar3 = (long *)*plVar10;
  plVar17 = (long *)plVar9[0x4c];
  lVar14 = (long)plVar17 - (long)plVar3;
  uVar16 = lVar14 >> 4;
  if (uVar16 < uVar18) {
    uVar22 = uVar18 - uVar16;
    lVar20 = plVar9[0x4d];
    if ((ulong)(lVar20 - (long)plVar17 >> 4) < uVar22) {
      if (uVar18 >> 0x3c == 0) {
        uVar15 = lVar20 - (long)plVar3 >> 3;
        if (uVar15 <= uVar18) {
          uVar15 = uVar18;
        }
        if (0x7fffffffffffffef < (ulong)(lVar20 - (long)plVar3)) {
          uVar15 = 0xfffffffffffffff;
        }
        plStack_68 = plVar10;
        if (uVar15 >> 0x3c == 0) {
          lVar8 = uVar15 << 4;
          __Znwm();
          lVar1 = lVar8 + lVar14;
          _bzero(lVar1,uVar22 * 0x10);
          lVar19 = lVar1 + uVar16 * -0x10;
          _memcpy(lVar19,plVar3,lVar14);
          *plVar10 = lVar19;
          plVar9[0x4c] = lVar1 + uVar22 * 0x10;
          plVar9[0x4d] = lVar8 + uVar15 * 0x10;
          uStack_88 = plVar3;
          plStack_80 = plVar3;
          plStack_78 = plVar3;
          lStack_70 = lVar20;
          func_0x00010988c1b8(&uStack_88);
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
    _bzero(plVar17,uVar22 * 0x10);
    plVar9[0x4c] = (long)(plVar17 + uVar22 * 2);
  }
  else if (uVar18 < uVar16) {
    while (plVar17 != plVar3 + uVar18 * 2) {
      plVar17 = plVar17 + -2;
      func_0x00010988c204(plVar17);
    }
    plVar9[0x4c] = (long)(plVar3 + uVar18 * 2);
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar18;
  return;
}



/* Entry: 10acd00dc; end: 10acd00ff;  */

void FUN_10acd00dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  char cVar3;
  bool bVar4;
  undefined8 ****ppppuVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 ****ppppuVar11;
  undefined8 uVar12;
  undefined4 *extraout_x8;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  long *unaff_x20;
  long lVar20;
  long lVar21;
  long *plVar22;
  ulong uVar23;
  long *plVar24;
  long lStack_d8;
  long lStack_d0;
  undefined8 ***pppuStack_c0;
  ulong uStack_b8;
  byte bStack_a9;
  undefined8 ***pppuStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar8 = (long *)0x2;
  uVar12 = 0;
  FUN_10a052ee0(2,0,param_1);
  plVar9 = plVar8;
  (**(code **)(*plVar8 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  plVar10 = plVar8;
  FUN_10acc8580(plVar8,uVar12);
  FUN_10acd06ac(param_4);
  func_0x000109898570(&pppuStack_c0,plVar8,param_1);
  FUN_10a36d470(&lStack_d8,plVar8,param_1 + 0x10);
  if ((char)plVar10[0xc] == '\x01') {
    FUN_10a00946c(&UNK_10f6a1d58);
LAB_10acd05c8:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10acd05cc);
    (*pcVar6)();
  }
  uVar19 = uStack_b8;
  ppppuVar5 = (undefined8 ****)pppuStack_c0;
  if (-1 < (char)bStack_a9) {
    uVar19 = (ulong)bStack_a9;
    ppppuVar5 = &pppuStack_c0;
  }
  if (0x7ffffffffffffff7 < uVar19) {
    func_0x000109ffde50();
    goto LAB_10acd05c8;
  }
  if (uVar19 < 0x17) {
    uStack_98 = (long *)CONCAT17((char)uVar19,(undefined7)uStack_98);
    ppppuVar11 = &pppuStack_a8;
    if (uVar19 != 0) goto LAB_10acd0218;
  }
  else {
    ppppuVar2 = (undefined8 ****)0x19;
    if ((uVar19 | 7) != 0x17) {
      ppppuVar2 = (undefined8 ****)((uVar19 | 7) + 1);
    }
    ppppuVar11 = ppppuVar2;
    __Znwm();
    uStack_98 = (long *)((ulong)ppppuVar2 | 0x8000000000000000);
    pppuStack_a8 = ppppuVar11;
    uStack_a0 = uVar19;
LAB_10acd0218:
    _memmove(ppppuVar11,ppppuVar5,uVar19);
  }
  *(undefined1 *)((long)ppppuVar11 + uVar19) = 0;
  FUN_10ac9e388(plVar10,&pppuStack_a8,0);
  plVar8 = plVar10 + 7;
  plVar18 = plVar8;
  func_0x000107c2b05c(plVar8,&pppuStack_a8);
  plVar24 = (long *)plVar10[8];
  if (plVar24 != (long *)0x0) {
    uVar19 = (long)plVar24 - 1;
    if (((ulong)plVar24 & uVar19) == 0) {
      unaff_x20 = (long *)(uVar19 & (ulong)plVar18);
    }
    else {
      unaff_x20 = plVar18;
      if (plVar24 <= plVar18) {
        uVar17 = 0;
        if (plVar24 != (long *)0x0) {
          uVar17 = (ulong)plVar18 / (ulong)plVar24;
        }
        unaff_x20 = (long *)((long)plVar18 - uVar17 * (long)plVar24);
      }
    }
    puVar13 = *(undefined8 **)(*plVar8 + (long)unaff_x20 * 8);
    if (puVar13 != (undefined8 *)0x0) {
      for (plVar22 = (long *)*puVar13; plVar22 != (long *)0x0; plVar22 = (long *)*plVar22) {
        plVar14 = (long *)plVar22[1];
        if (plVar14 == plVar18) {
          plVar14 = plVar8;
          func_0x000107c2b068(plVar8,plVar22 + 2,&pppuStack_a8);
          if (((ulong)plVar14 & 1) != 0) goto LAB_10acd04d8;
        }
        else {
          if (((ulong)plVar24 & uVar19) == 0) {
            plVar14 = (long *)((ulong)plVar14 & uVar19);
          }
          else if (plVar24 <= plVar14) {
            uVar17 = 0;
            if (plVar24 != (long *)0x0) {
              uVar17 = (ulong)plVar14 / (ulong)plVar24;
            }
            plVar14 = (long *)((long)plVar14 - uVar17 * (long)plVar24);
          }
          if (plVar14 != unaff_x20) break;
        }
      }
    }
  }
  plVar22 = (long *)0x60;
  __Znwm();
  lStack_80 = 0;
  *plVar22 = 0;
  plVar22[1] = (long)plVar18;
  plStack_90 = plVar22;
  plStack_88 = plVar8;
  if ((long)uStack_98 < 0) {
    func_0x000107c3192c(plVar22 + 2,pppuStack_a8,uStack_a0);
  }
  else {
    plVar22[3] = uStack_a0;
    plVar22[2] = (long)pppuStack_a8;
    plVar22[4] = (long)uStack_98;
  }
  lVar21 = lStack_d0;
  lVar15 = lStack_d8;
  plVar22[9] = 0;
  plVar22[8] = 0;
  *(undefined1 *)(plVar22 + 6) = 0;
  plVar22[5] = (long)&PTR_FUN_110c6c2d0;
  *(undefined2 *)((long)plVar22 + 0x32) = 0xf;
  plVar22[0xb] = 0;
  plVar22[10] = 0;
  puVar13 = (undefined8 *)0x20;
  __Znwm();
  *puVar13 = &PTR_FUN_110c6bdf0;
  puVar13[2] = 0;
  puVar13[3] = 0;
  puVar13[1] = 0;
  FUN_10ab146f4(puVar13 + 1,lVar15,lVar21,(lVar21 - lVar15 >> 2) * -0x71c71c71c71c71c7);
  plVar14 = (long *)plVar22[0xb];
  plVar22[0xb] = (long)puVar13;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 8))();
  }
  lStack_80 = CONCAT71(lStack_80._1_7_,1);
  if ((plVar24 == (long *)0x0) ||
     (*(float *)(plVar10 + 0xb) * (float)plVar24 < (float)(plVar10[10] + 1))) {
    uVar19 = 1;
    if ((long *)0x2 < plVar24) {
      uVar19 = (ulong)(((ulong)plVar24 & (long)plVar24 - 1U) != 0);
    }
    uVar19 = uVar19 | (long)plVar24 << 1;
    uVar17 = (ulong)((float)(plVar10[10] + 1) / *(float *)(plVar10 + 0xb));
    if (uVar19 <= uVar17) {
      uVar19 = uVar17;
    }
    FUN_10a4ba824(plVar8,uVar19);
    plVar24 = (long *)plVar10[8];
    if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
      unaff_x20 = (long *)((long)plVar24 - 1U & (ulong)plVar18);
    }
    else {
      unaff_x20 = plVar18;
      if (plVar24 <= plVar18) {
        uVar19 = 0;
        if (plVar24 != (long *)0x0) {
          uVar19 = (ulong)plVar18 / (ulong)plVar24;
        }
        unaff_x20 = (long *)((long)plVar18 - uVar19 * (long)plVar24);
      }
    }
  }
  lVar15 = *plVar8;
  plVar18 = *(long **)(lVar15 + (long)unaff_x20 * 8);
  if (plVar18 == (long *)0x0) {
    plVar18 = plVar10 + 9;
    *plStack_90 = *plVar18;
    *plVar18 = (long)plStack_90;
    *(long **)(lVar15 + (long)unaff_x20 * 8) = plVar18;
    if (*plStack_90 != 0) {
      plVar18 = *(long **)(*plStack_90 + 8);
      if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
        plVar18 = (long *)((ulong)plVar18 & (long)plVar24 - 1U);
      }
      else if (plVar24 <= plVar18) {
        uVar19 = 0;
        if (plVar24 != (long *)0x0) {
          uVar19 = (ulong)plVar18 / (ulong)plVar24;
        }
        plVar18 = (long *)((long)plVar18 - uVar19 * (long)plVar24);
      }
      *(long **)(*plVar8 + (long)plVar18 * 8) = plStack_90;
    }
  }
  else {
    *plStack_90 = *plVar18;
    *plVar18 = (long)plStack_90;
  }
  plVar10[10] = plVar10[10] + 1;
  plVar22 = plStack_90;
LAB_10acd04d8:
  func_0x00010a5499ec(plVar10,1,plVar22 + 5,&pppuStack_a8);
  if (*(char *)(plVar10[0x11] + 8) == '\x01') {
    FUN_10a54a030(&plStack_90,plVar10 + 5);
    FUN_10a549a74(plVar10 + 0x10,&plStack_90,&pppuStack_a8);
    plVar8 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar10 = plStack_88 + 1;
      do {
        lVar15 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
  }
  if ((long)uStack_98 < 0) {
    __ZdlPv(pppuStack_a8);
  }
  if (lStack_d8 != 0) {
    lStack_d0 = lStack_d8;
    __ZdlPv();
  }
  if ((char)bStack_a9 < '\0') {
    __ZdlPv(pppuStack_c0);
  }
  *extraout_x8 = 0;
  plVar8 = plVar9 + 0x4b;
  lVar15 = plVar9[0x59];
  uVar19 = lVar15 - 1;
  plVar9[0x59] = uVar19;
  if (uVar19 < 8) {
    uVar19 = plVar8[lVar15 + 2];
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
  plVar10 = (long *)*plVar8;
  plVar18 = (long *)plVar9[0x4c];
  lVar15 = (long)plVar18 - (long)plVar10;
  uVar17 = lVar15 >> 4;
  if (uVar17 < uVar19) {
    uVar23 = uVar19 - uVar17;
    lVar21 = plVar9[0x4d];
    if ((ulong)(lVar21 - (long)plVar18 >> 4) < uVar23) {
      if (uVar19 >> 0x3c == 0) {
        uVar16 = lVar21 - (long)plVar10 >> 3;
        if (uVar16 <= uVar19) {
          uVar16 = uVar19;
        }
        if (0x7fffffffffffffef < (ulong)(lVar21 - (long)plVar10)) {
          uVar16 = 0xfffffffffffffff;
        }
        plStack_78 = plVar8;
        if (uVar16 >> 0x3c == 0) {
          lVar7 = uVar16 << 4;
          __Znwm();
          lVar1 = lVar7 + lVar15;
          _bzero(lVar1,uVar23 * 0x10);
          lVar20 = lVar1 + uVar17 * -0x10;
          _memcpy(lVar20,plVar10,lVar15);
          *plVar8 = lVar20;
          plVar9[0x4c] = lVar1 + uVar23 * 0x10;
          plVar9[0x4d] = lVar7 + uVar16 * 0x10;
          uStack_98 = plVar10;
          plStack_90 = plVar10;
          plStack_88 = plVar10;
          lStack_80 = lVar21;
          func_0x00010988c1b8(&uStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar6)();
    }
    _bzero(plVar18,uVar23 * 0x10);
    plVar9[0x4c] = (long)(plVar18 + uVar23 * 2);
  }
  else if (uVar19 < uVar17) {
    while (plVar18 != plVar10 + uVar19 * 2) {
      plVar18 = plVar18 + -2;
      func_0x00010988c204(plVar18);
    }
    plVar9[0x4c] = (long)(plVar10 + uVar19 * 2);
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar19;
  return;
}



/* Entry: 10acd0100; end: 10acd06ab;  */

void FUN_10acd0100(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 ****ppppuVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 ****ppppuVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  long *unaff_x20;
  long lVar19;
  long lVar20;
  long *plVar21;
  ulong uVar22;
  long *plVar23;
  long lStack_c8;
  long lStack_c0;
  undefined8 ***pppuStack_b0;
  ulong uStack_a8;
  byte bStack_99;
  undefined8 ***pppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  
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
  FUN_10acc8580(param_2,param_3);
  FUN_10acd06ac(param_5);
  func_0x000109898570(&pppuStack_b0,param_2,param_4);
  FUN_10a36d470(&lStack_c8,param_2,param_4 + 0x10);
  if ((char)plVar10[0xc] == '\x01') {
    FUN_10a00946c(&UNK_10f6a1d58);
LAB_10acd05c8:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10acd05cc);
    (*pcVar7)();
  }
  uVar18 = uStack_a8;
  ppppuVar6 = (undefined8 ****)pppuStack_b0;
  if (-1 < (char)bStack_99) {
    uVar18 = (ulong)bStack_99;
    ppppuVar6 = &pppuStack_b0;
  }
  if (0x7ffffffffffffff7 < uVar18) {
    func_0x000109ffde50();
    goto LAB_10acd05c8;
  }
  if (uVar18 < 0x17) {
    uStack_88 = (long *)CONCAT17((char)uVar18,(undefined7)uStack_88);
    ppppuVar11 = &pppuStack_98;
    if (uVar18 != 0) goto LAB_10acd0218;
  }
  else {
    ppppuVar2 = (undefined8 ****)0x19;
    if ((uVar18 | 7) != 0x17) {
      ppppuVar2 = (undefined8 ****)((uVar18 | 7) + 1);
    }
    ppppuVar11 = ppppuVar2;
    __Znwm();
    uStack_88 = (long *)((ulong)ppppuVar2 | 0x8000000000000000);
    pppuStack_98 = ppppuVar11;
    uStack_90 = uVar18;
LAB_10acd0218:
    _memmove(ppppuVar11,ppppuVar6,uVar18);
  }
  *(undefined1 *)((long)ppppuVar11 + uVar18) = 0;
  FUN_10ac9e388(plVar10,&pppuStack_98,0);
  plVar3 = plVar10 + 7;
  plVar17 = plVar3;
  func_0x000107c2b05c(plVar3,&pppuStack_98);
  plVar23 = (long *)plVar10[8];
  if (plVar23 != (long *)0x0) {
    uVar18 = (long)plVar23 - 1;
    if (((ulong)plVar23 & uVar18) == 0) {
      unaff_x20 = (long *)(uVar18 & (ulong)plVar17);
    }
    else {
      unaff_x20 = plVar17;
      if (plVar23 <= plVar17) {
        uVar16 = 0;
        if (plVar23 != (long *)0x0) {
          uVar16 = (ulong)plVar17 / (ulong)plVar23;
        }
        unaff_x20 = (long *)((long)plVar17 - uVar16 * (long)plVar23);
      }
    }
    puVar12 = *(undefined8 **)(*plVar3 + (long)unaff_x20 * 8);
    if (puVar12 != (undefined8 *)0x0) {
      for (plVar21 = (long *)*puVar12; plVar21 != (long *)0x0; plVar21 = (long *)*plVar21) {
        plVar13 = (long *)plVar21[1];
        if (plVar13 == plVar17) {
          plVar13 = plVar3;
          func_0x000107c2b068(plVar3,plVar21 + 2,&pppuStack_98);
          if (((ulong)plVar13 & 1) != 0) goto LAB_10acd04d8;
        }
        else {
          if (((ulong)plVar23 & uVar18) == 0) {
            plVar13 = (long *)((ulong)plVar13 & uVar18);
          }
          else if (plVar23 <= plVar13) {
            uVar16 = 0;
            if (plVar23 != (long *)0x0) {
              uVar16 = (ulong)plVar13 / (ulong)plVar23;
            }
            plVar13 = (long *)((long)plVar13 - uVar16 * (long)plVar23);
          }
          if (plVar13 != unaff_x20) break;
        }
      }
    }
  }
  plVar21 = (long *)0x60;
  __Znwm();
  lStack_70 = 0;
  *plVar21 = 0;
  plVar21[1] = (long)plVar17;
  plStack_80 = plVar21;
  plStack_78 = plVar3;
  if ((long)uStack_88 < 0) {
    func_0x000107c3192c(plVar21 + 2,pppuStack_98,uStack_90);
  }
  else {
    plVar21[3] = uStack_90;
    plVar21[2] = (long)pppuStack_98;
    plVar21[4] = (long)uStack_88;
  }
  lVar20 = lStack_c0;
  lVar14 = lStack_c8;
  plVar21[9] = 0;
  plVar21[8] = 0;
  *(undefined1 *)(plVar21 + 6) = 0;
  plVar21[5] = (long)&PTR_FUN_110c6c2d0;
  *(undefined2 *)((long)plVar21 + 0x32) = 0xf;
  plVar21[0xb] = 0;
  plVar21[10] = 0;
  puVar12 = (undefined8 *)0x20;
  __Znwm();
  *puVar12 = &PTR_FUN_110c6bdf0;
  puVar12[2] = 0;
  puVar12[3] = 0;
  puVar12[1] = 0;
  FUN_10ab146f4(puVar12 + 1,lVar14,lVar20,(lVar20 - lVar14 >> 2) * -0x71c71c71c71c71c7);
  plVar13 = (long *)plVar21[0xb];
  plVar21[0xb] = (long)puVar12;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  lStack_70 = CONCAT71(lStack_70._1_7_,1);
  if ((plVar23 == (long *)0x0) ||
     (*(float *)(plVar10 + 0xb) * (float)plVar23 < (float)(plVar10[10] + 1))) {
    uVar18 = 1;
    if ((long *)0x2 < plVar23) {
      uVar18 = (ulong)(((ulong)plVar23 & (long)plVar23 - 1U) != 0);
    }
    uVar18 = uVar18 | (long)plVar23 << 1;
    uVar16 = (ulong)((float)(plVar10[10] + 1) / *(float *)(plVar10 + 0xb));
    if (uVar18 <= uVar16) {
      uVar18 = uVar16;
    }
    FUN_10a4ba824(plVar3,uVar18);
    plVar23 = (long *)plVar10[8];
    if (((ulong)plVar23 & (long)plVar23 - 1U) == 0) {
      unaff_x20 = (long *)((long)plVar23 - 1U & (ulong)plVar17);
    }
    else {
      unaff_x20 = plVar17;
      if (plVar23 <= plVar17) {
        uVar18 = 0;
        if (plVar23 != (long *)0x0) {
          uVar18 = (ulong)plVar17 / (ulong)plVar23;
        }
        unaff_x20 = (long *)((long)plVar17 - uVar18 * (long)plVar23);
      }
    }
  }
  lVar14 = *plVar3;
  plVar17 = *(long **)(lVar14 + (long)unaff_x20 * 8);
  if (plVar17 == (long *)0x0) {
    plVar17 = plVar10 + 9;
    *plStack_80 = *plVar17;
    *plVar17 = (long)plStack_80;
    *(long **)(lVar14 + (long)unaff_x20 * 8) = plVar17;
    if (*plStack_80 != 0) {
      plVar17 = *(long **)(*plStack_80 + 8);
      if (((ulong)plVar23 & (long)plVar23 - 1U) == 0) {
        plVar17 = (long *)((ulong)plVar17 & (long)plVar23 - 1U);
      }
      else if (plVar23 <= plVar17) {
        uVar18 = 0;
        if (plVar23 != (long *)0x0) {
          uVar18 = (ulong)plVar17 / (ulong)plVar23;
        }
        plVar17 = (long *)((long)plVar17 - uVar18 * (long)plVar23);
      }
      *(long **)(*plVar3 + (long)plVar17 * 8) = plStack_80;
    }
  }
  else {
    *plStack_80 = *plVar17;
    *plVar17 = (long)plStack_80;
  }
  plVar10[10] = plVar10[10] + 1;
  plVar21 = plStack_80;
LAB_10acd04d8:
  func_0x00010a5499ec(plVar10,1,plVar21 + 5,&pppuStack_98);
  if (*(char *)(plVar10[0x11] + 8) == '\x01') {
    FUN_10a54a030(&plStack_80,plVar10 + 5);
    FUN_10a549a74(plVar10 + 0x10,&plStack_80,&pppuStack_98);
    plVar10 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar3 = plStack_78 + 1;
      do {
        lVar14 = *plVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *plVar3 = lVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
  }
  if ((long)uStack_88 < 0) {
    __ZdlPv(pppuStack_98);
  }
  if (lStack_c8 != 0) {
    lStack_c0 = lStack_c8;
    __ZdlPv();
  }
  if ((char)bStack_99 < '\0') {
    __ZdlPv(pppuStack_b0);
  }
  *param_1 = 0;
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
  plVar3 = (long *)*plVar10;
  plVar17 = (long *)plVar9[0x4c];
  lVar14 = (long)plVar17 - (long)plVar3;
  uVar16 = lVar14 >> 4;
  if (uVar16 < uVar18) {
    uVar22 = uVar18 - uVar16;
    lVar20 = plVar9[0x4d];
    if ((ulong)(lVar20 - (long)plVar17 >> 4) < uVar22) {
      if (uVar18 >> 0x3c == 0) {
        uVar15 = lVar20 - (long)plVar3 >> 3;
        if (uVar15 <= uVar18) {
          uVar15 = uVar18;
        }
        if (0x7fffffffffffffef < (ulong)(lVar20 - (long)plVar3)) {
          uVar15 = 0xfffffffffffffff;
        }
        plStack_68 = plVar10;
        if (uVar15 >> 0x3c == 0) {
          lVar8 = uVar15 << 4;
          __Znwm();
          lVar1 = lVar8 + lVar14;
          _bzero(lVar1,uVar22 * 0x10);
          lVar19 = lVar1 + uVar16 * -0x10;
          _memcpy(lVar19,plVar3,lVar14);
          *plVar10 = lVar19;
          plVar9[0x4c] = lVar1 + uVar22 * 0x10;
          plVar9[0x4d] = lVar8 + uVar15 * 0x10;
          uStack_88 = plVar3;
          plStack_80 = plVar3;
          plStack_78 = plVar3;
          lStack_70 = lVar20;
          func_0x00010988c1b8(&uStack_88);
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
    _bzero(plVar17,uVar22 * 0x10);
    plVar9[0x4c] = (long)(plVar17 + uVar22 * 2);
  }
  else if (uVar18 < uVar16) {
    while (plVar17 != plVar3 + uVar18 * 2) {
      plVar17 = plVar17 + -2;
      func_0x00010988c204(plVar17);
    }
    plVar9[0x4c] = (long)(plVar3 + uVar18 * 2);
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar18;
  return;
}



/* Entry: 10acd06ac; end: 10acd06cf;  */

void FUN_10acd06ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  char cVar3;
  bool bVar4;
  undefined8 ****ppppuVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 ****ppppuVar11;
  undefined8 uVar12;
  undefined4 *extraout_x8;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  long *unaff_x20;
  long lVar20;
  long lVar21;
  long *plVar22;
  ulong uVar23;
  long *plVar24;
  long lStack_d8;
  long lStack_d0;
  undefined8 ***pppuStack_c0;
  ulong uStack_b8;
  byte bStack_a9;
  undefined8 ***pppuStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar8 = (long *)0x2;
  uVar12 = 0;
  FUN_10a052ee0(2,0,param_1);
  plVar9 = plVar8;
  (**(code **)(*plVar8 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  plVar10 = plVar8;
  FUN_10acc8580(plVar8,uVar12);
  FUN_10acd0c68(param_4);
  func_0x000109898570(&pppuStack_c0,plVar8,param_1);
  FUN_10a36d670(&lStack_d8,plVar8,param_1 + 0x10);
  if ((char)plVar10[0xc] == '\x01') {
    FUN_10a00946c(&UNK_10f6a1d58);
LAB_10acd0b84:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10acd0b88);
    (*pcVar6)();
  }
  uVar19 = uStack_b8;
  ppppuVar5 = (undefined8 ****)pppuStack_c0;
  if (-1 < (char)bStack_a9) {
    uVar19 = (ulong)bStack_a9;
    ppppuVar5 = &pppuStack_c0;
  }
  if (0x7ffffffffffffff7 < uVar19) {
    func_0x000109ffde50();
    goto LAB_10acd0b84;
  }
  if (uVar19 < 0x17) {
    uStack_98 = (long *)CONCAT17((char)uVar19,(undefined7)uStack_98);
    ppppuVar11 = &pppuStack_a8;
    if (uVar19 != 0) goto LAB_10acd07e8;
  }
  else {
    ppppuVar2 = (undefined8 ****)0x19;
    if ((uVar19 | 7) != 0x17) {
      ppppuVar2 = (undefined8 ****)((uVar19 | 7) + 1);
    }
    ppppuVar11 = ppppuVar2;
    __Znwm();
    uStack_98 = (long *)((ulong)ppppuVar2 | 0x8000000000000000);
    pppuStack_a8 = ppppuVar11;
    uStack_a0 = uVar19;
LAB_10acd07e8:
    _memmove(ppppuVar11,ppppuVar5,uVar19);
  }
  *(undefined1 *)((long)ppppuVar11 + uVar19) = 0;
  FUN_10ac9e388(plVar10,&pppuStack_a8,0);
  plVar8 = plVar10 + 7;
  plVar18 = plVar8;
  func_0x000107c2b05c(plVar8,&pppuStack_a8);
  plVar24 = (long *)plVar10[8];
  if (plVar24 != (long *)0x0) {
    uVar19 = (long)plVar24 - 1;
    if (((ulong)plVar24 & uVar19) == 0) {
      unaff_x20 = (long *)(uVar19 & (ulong)plVar18);
    }
    else {
      unaff_x20 = plVar18;
      if (plVar24 <= plVar18) {
        uVar17 = 0;
        if (plVar24 != (long *)0x0) {
          uVar17 = (ulong)plVar18 / (ulong)plVar24;
        }
        unaff_x20 = (long *)((long)plVar18 - uVar17 * (long)plVar24);
      }
    }
    puVar13 = *(undefined8 **)(*plVar8 + (long)unaff_x20 * 8);
    if (puVar13 != (undefined8 *)0x0) {
      for (plVar22 = (long *)*puVar13; plVar22 != (long *)0x0; plVar22 = (long *)*plVar22) {
        plVar14 = (long *)plVar22[1];
        if (plVar14 == plVar18) {
          plVar14 = plVar8;
          func_0x000107c2b068(plVar8,plVar22 + 2,&pppuStack_a8);
          if (((ulong)plVar14 & 1) != 0) goto LAB_10acd0a94;
        }
        else {
          if (((ulong)plVar24 & uVar19) == 0) {
            plVar14 = (long *)((ulong)plVar14 & uVar19);
          }
          else if (plVar24 <= plVar14) {
            uVar17 = 0;
            if (plVar24 != (long *)0x0) {
              uVar17 = (ulong)plVar14 / (ulong)plVar24;
            }
            plVar14 = (long *)((long)plVar14 - uVar17 * (long)plVar24);
          }
          if (plVar14 != unaff_x20) break;
        }
      }
    }
  }
  plVar22 = (long *)0x60;
  __Znwm();
  lStack_80 = 0;
  *plVar22 = 0;
  plVar22[1] = (long)plVar18;
  plStack_90 = plVar22;
  plStack_88 = plVar8;
  if ((long)uStack_98 < 0) {
    func_0x000107c3192c(plVar22 + 2,pppuStack_a8,uStack_a0);
  }
  else {
    plVar22[3] = uStack_a0;
    plVar22[2] = (long)pppuStack_a8;
    plVar22[4] = (long)uStack_98;
  }
  lVar21 = lStack_d0;
  lVar15 = lStack_d8;
  plVar22[9] = 0;
  plVar22[8] = 0;
  *(undefined1 *)(plVar22 + 6) = 0;
  plVar22[5] = (long)&PTR_FUN_110c6c2d0;
  *(undefined2 *)((long)plVar22 + 0x32) = 0xf;
  plVar22[0xb] = 0;
  plVar22[10] = 0;
  puVar13 = (undefined8 *)0x20;
  __Znwm();
  *puVar13 = &PTR_FUN_110c6be40;
  puVar13[2] = 0;
  puVar13[3] = 0;
  puVar13[1] = 0;
  FUN_10a34e7c8(puVar13 + 1,lVar15,lVar21,lVar21 - lVar15 >> 6);
  plVar14 = (long *)plVar22[0xb];
  plVar22[0xb] = (long)puVar13;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 8))();
  }
  lStack_80 = CONCAT71(lStack_80._1_7_,1);
  if ((plVar24 == (long *)0x0) ||
     (*(float *)(plVar10 + 0xb) * (float)plVar24 < (float)(plVar10[10] + 1))) {
    uVar19 = 1;
    if ((long *)0x2 < plVar24) {
      uVar19 = (ulong)(((ulong)plVar24 & (long)plVar24 - 1U) != 0);
    }
    uVar19 = uVar19 | (long)plVar24 << 1;
    uVar17 = (ulong)((float)(plVar10[10] + 1) / *(float *)(plVar10 + 0xb));
    if (uVar19 <= uVar17) {
      uVar19 = uVar17;
    }
    FUN_10a4ba824(plVar8,uVar19);
    plVar24 = (long *)plVar10[8];
    if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
      unaff_x20 = (long *)((long)plVar24 - 1U & (ulong)plVar18);
    }
    else {
      unaff_x20 = plVar18;
      if (plVar24 <= plVar18) {
        uVar19 = 0;
        if (plVar24 != (long *)0x0) {
          uVar19 = (ulong)plVar18 / (ulong)plVar24;
        }
        unaff_x20 = (long *)((long)plVar18 - uVar19 * (long)plVar24);
      }
    }
  }
  lVar15 = *plVar8;
  plVar18 = *(long **)(lVar15 + (long)unaff_x20 * 8);
  if (plVar18 == (long *)0x0) {
    plVar18 = plVar10 + 9;
    *plStack_90 = *plVar18;
    *plVar18 = (long)plStack_90;
    *(long **)(lVar15 + (long)unaff_x20 * 8) = plVar18;
    if (*plStack_90 != 0) {
      plVar18 = *(long **)(*plStack_90 + 8);
      if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
        plVar18 = (long *)((ulong)plVar18 & (long)plVar24 - 1U);
      }
      else if (plVar24 <= plVar18) {
        uVar19 = 0;
        if (plVar24 != (long *)0x0) {
          uVar19 = (ulong)plVar18 / (ulong)plVar24;
        }
        plVar18 = (long *)((long)plVar18 - uVar19 * (long)plVar24);
      }
      *(long **)(*plVar8 + (long)plVar18 * 8) = plStack_90;
    }
  }
  else {
    *plStack_90 = *plVar18;
    *plVar18 = (long)plStack_90;
  }
  plVar10[10] = plVar10[10] + 1;
  plVar22 = plStack_90;
LAB_10acd0a94:
  func_0x00010a5499ec(plVar10,1,plVar22 + 5,&pppuStack_a8);
  if (*(char *)(plVar10[0x11] + 8) == '\x01') {
    FUN_10a54a030(&plStack_90,plVar10 + 5);
    FUN_10a549a74(plVar10 + 0x10,&plStack_90,&pppuStack_a8);
    plVar8 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar10 = plStack_88 + 1;
      do {
        lVar15 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
  }
  if ((long)uStack_98 < 0) {
    __ZdlPv(pppuStack_a8);
  }
  if (lStack_d8 != 0) {
    lStack_d0 = lStack_d8;
    __ZdlPv();
  }
  if ((char)bStack_a9 < '\0') {
    __ZdlPv(pppuStack_c0);
  }
  *extraout_x8 = 0;
  plVar8 = plVar9 + 0x4b;
  lVar15 = plVar9[0x59];
  uVar19 = lVar15 - 1;
  plVar9[0x59] = uVar19;
  if (uVar19 < 8) {
    uVar19 = plVar8[lVar15 + 2];
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
  plVar10 = (long *)*plVar8;
  plVar18 = (long *)plVar9[0x4c];
  lVar15 = (long)plVar18 - (long)plVar10;
  uVar17 = lVar15 >> 4;
  if (uVar17 < uVar19) {
    uVar23 = uVar19 - uVar17;
    lVar21 = plVar9[0x4d];
    if ((ulong)(lVar21 - (long)plVar18 >> 4) < uVar23) {
      if (uVar19 >> 0x3c == 0) {
        uVar16 = lVar21 - (long)plVar10 >> 3;
        if (uVar16 <= uVar19) {
          uVar16 = uVar19;
        }
        if (0x7fffffffffffffef < (ulong)(lVar21 - (long)plVar10)) {
          uVar16 = 0xfffffffffffffff;
        }
        plStack_78 = plVar8;
        if (uVar16 >> 0x3c == 0) {
          lVar7 = uVar16 << 4;
          __Znwm();
          lVar1 = lVar7 + lVar15;
          _bzero(lVar1,uVar23 * 0x10);
          lVar20 = lVar1 + uVar17 * -0x10;
          _memcpy(lVar20,plVar10,lVar15);
          *plVar8 = lVar20;
          plVar9[0x4c] = lVar1 + uVar23 * 0x10;
          plVar9[0x4d] = lVar7 + uVar16 * 0x10;
          uStack_98 = plVar10;
          plStack_90 = plVar10;
          plStack_88 = plVar10;
          lStack_80 = lVar21;
          func_0x00010988c1b8(&uStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar6)();
    }
    _bzero(plVar18,uVar23 * 0x10);
    plVar9[0x4c] = (long)(plVar18 + uVar23 * 2);
  }
  else if (uVar19 < uVar17) {
    while (plVar18 != plVar10 + uVar19 * 2) {
      plVar18 = plVar18 + -2;
      func_0x00010988c204(plVar18);
    }
    plVar9[0x4c] = (long)(plVar10 + uVar19 * 2);
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar19;
  return;
}



/* Entry: 10acd06d0; end: 10acd0c67;  */

void FUN_10acd06d0(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 ****ppppuVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 ****ppppuVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  long *unaff_x20;
  long lVar19;
  long lVar20;
  long *plVar21;
  ulong uVar22;
  long *plVar23;
  long lStack_c8;
  long lStack_c0;
  undefined8 ***pppuStack_b0;
  ulong uStack_a8;
  byte bStack_99;
  undefined8 ***pppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  
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
  FUN_10acc8580(param_2,param_3);
  FUN_10acd0c68(param_5);
  func_0x000109898570(&pppuStack_b0,param_2,param_4);
  FUN_10a36d670(&lStack_c8,param_2,param_4 + 0x10);
  if ((char)plVar10[0xc] == '\x01') {
    FUN_10a00946c(&UNK_10f6a1d58);
LAB_10acd0b84:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10acd0b88);
    (*pcVar7)();
  }
  uVar18 = uStack_a8;
  ppppuVar6 = (undefined8 ****)pppuStack_b0;
  if (-1 < (char)bStack_99) {
    uVar18 = (ulong)bStack_99;
    ppppuVar6 = &pppuStack_b0;
  }
  if (0x7ffffffffffffff7 < uVar18) {
    func_0x000109ffde50();
    goto LAB_10acd0b84;
  }
  if (uVar18 < 0x17) {
    uStack_88 = (long *)CONCAT17((char)uVar18,(undefined7)uStack_88);
    ppppuVar11 = &pppuStack_98;
    if (uVar18 != 0) goto LAB_10acd07e8;
  }
  else {
    ppppuVar2 = (undefined8 ****)0x19;
    if ((uVar18 | 7) != 0x17) {
      ppppuVar2 = (undefined8 ****)((uVar18 | 7) + 1);
    }
    ppppuVar11 = ppppuVar2;
    __Znwm();
    uStack_88 = (long *)((ulong)ppppuVar2 | 0x8000000000000000);
    pppuStack_98 = ppppuVar11;
    uStack_90 = uVar18;
LAB_10acd07e8:
    _memmove(ppppuVar11,ppppuVar6,uVar18);
  }
  *(undefined1 *)((long)ppppuVar11 + uVar18) = 0;
  FUN_10ac9e388(plVar10,&pppuStack_98,0);
  plVar3 = plVar10 + 7;
  plVar17 = plVar3;
  func_0x000107c2b05c(plVar3,&pppuStack_98);
  plVar23 = (long *)plVar10[8];
  if (plVar23 != (long *)0x0) {
    uVar18 = (long)plVar23 - 1;
    if (((ulong)plVar23 & uVar18) == 0) {
      unaff_x20 = (long *)(uVar18 & (ulong)plVar17);
    }
    else {
      unaff_x20 = plVar17;
      if (plVar23 <= plVar17) {
        uVar16 = 0;
        if (plVar23 != (long *)0x0) {
          uVar16 = (ulong)plVar17 / (ulong)plVar23;
        }
        unaff_x20 = (long *)((long)plVar17 - uVar16 * (long)plVar23);
      }
    }
    puVar12 = *(undefined8 **)(*plVar3 + (long)unaff_x20 * 8);
    if (puVar12 != (undefined8 *)0x0) {
      for (plVar21 = (long *)*puVar12; plVar21 != (long *)0x0; plVar21 = (long *)*plVar21) {
        plVar13 = (long *)plVar21[1];
        if (plVar13 == plVar17) {
          plVar13 = plVar3;
          func_0x000107c2b068(plVar3,plVar21 + 2,&pppuStack_98);
          if (((ulong)plVar13 & 1) != 0) goto LAB_10acd0a94;
        }
        else {
          if (((ulong)plVar23 & uVar18) == 0) {
            plVar13 = (long *)((ulong)plVar13 & uVar18);
          }
          else if (plVar23 <= plVar13) {
            uVar16 = 0;
            if (plVar23 != (long *)0x0) {
              uVar16 = (ulong)plVar13 / (ulong)plVar23;
            }
            plVar13 = (long *)((long)plVar13 - uVar16 * (long)plVar23);
          }
          if (plVar13 != unaff_x20) break;
        }
      }
    }
  }
  plVar21 = (long *)0x60;
  __Znwm();
  lStack_70 = 0;
  *plVar21 = 0;
  plVar21[1] = (long)plVar17;
  plStack_80 = plVar21;
  plStack_78 = plVar3;
  if ((long)uStack_88 < 0) {
    func_0x000107c3192c(plVar21 + 2,pppuStack_98,uStack_90);
  }
  else {
    plVar21[3] = uStack_90;
    plVar21[2] = (long)pppuStack_98;
    plVar21[4] = (long)uStack_88;
  }
  lVar20 = lStack_c0;
  lVar14 = lStack_c8;
  plVar21[9] = 0;
  plVar21[8] = 0;
  *(undefined1 *)(plVar21 + 6) = 0;
  plVar21[5] = (long)&PTR_FUN_110c6c2d0;
  *(undefined2 *)((long)plVar21 + 0x32) = 0xf;
  plVar21[0xb] = 0;
  plVar21[10] = 0;
  puVar12 = (undefined8 *)0x20;
  __Znwm();
  *puVar12 = &PTR_FUN_110c6be40;
  puVar12[2] = 0;
  puVar12[3] = 0;
  puVar12[1] = 0;
  FUN_10a34e7c8(puVar12 + 1,lVar14,lVar20,lVar20 - lVar14 >> 6);
  plVar13 = (long *)plVar21[0xb];
  plVar21[0xb] = (long)puVar12;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  lStack_70 = CONCAT71(lStack_70._1_7_,1);
  if ((plVar23 == (long *)0x0) ||
     (*(float *)(plVar10 + 0xb) * (float)plVar23 < (float)(plVar10[10] + 1))) {
    uVar18 = 1;
    if ((long *)0x2 < plVar23) {
      uVar18 = (ulong)(((ulong)plVar23 & (long)plVar23 - 1U) != 0);
    }
    uVar18 = uVar18 | (long)plVar23 << 1;
    uVar16 = (ulong)((float)(plVar10[10] + 1) / *(float *)(plVar10 + 0xb));
    if (uVar18 <= uVar16) {
      uVar18 = uVar16;
    }
    FUN_10a4ba824(plVar3,uVar18);
    plVar23 = (long *)plVar10[8];
    if (((ulong)plVar23 & (long)plVar23 - 1U) == 0) {
      unaff_x20 = (long *)((long)plVar23 - 1U & (ulong)plVar17);
    }
    else {
      unaff_x20 = plVar17;
      if (plVar23 <= plVar17) {
        uVar18 = 0;
        if (plVar23 != (long *)0x0) {
          uVar18 = (ulong)plVar17 / (ulong)plVar23;
        }
        unaff_x20 = (long *)((long)plVar17 - uVar18 * (long)plVar23);
      }
    }
  }
  lVar14 = *plVar3;
  plVar17 = *(long **)(lVar14 + (long)unaff_x20 * 8);
  if (plVar17 == (long *)0x0) {
    plVar17 = plVar10 + 9;
    *plStack_80 = *plVar17;
    *plVar17 = (long)plStack_80;
    *(long **)(lVar14 + (long)unaff_x20 * 8) = plVar17;
    if (*plStack_80 != 0) {
      plVar17 = *(long **)(*plStack_80 + 8);
      if (((ulong)plVar23 & (long)plVar23 - 1U) == 0) {
        plVar17 = (long *)((ulong)plVar17 & (long)plVar23 - 1U);
      }
      else if (plVar23 <= plVar17) {
        uVar18 = 0;
        if (plVar23 != (long *)0x0) {
          uVar18 = (ulong)plVar17 / (ulong)plVar23;
        }
        plVar17 = (long *)((long)plVar17 - uVar18 * (long)plVar23);
      }
      *(long **)(*plVar3 + (long)plVar17 * 8) = plStack_80;
    }
  }
  else {
    *plStack_80 = *plVar17;
    *plVar17 = (long)plStack_80;
  }
  plVar10[10] = plVar10[10] + 1;
  plVar21 = plStack_80;
LAB_10acd0a94:
  func_0x00010a5499ec(plVar10,1,plVar21 + 5,&pppuStack_98);
  if (*(char *)(plVar10[0x11] + 8) == '\x01') {
    FUN_10a54a030(&plStack_80,plVar10 + 5);
    FUN_10a549a74(plVar10 + 0x10,&plStack_80,&pppuStack_98);
    plVar10 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar3 = plStack_78 + 1;
      do {
        lVar14 = *plVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *plVar3 = lVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
  }
  if ((long)uStack_88 < 0) {
    __ZdlPv(pppuStack_98);
  }
  if (lStack_c8 != 0) {
    lStack_c0 = lStack_c8;
    __ZdlPv();
  }
  if ((char)bStack_99 < '\0') {
    __ZdlPv(pppuStack_b0);
  }
  *param_1 = 0;
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
  plVar3 = (long *)*plVar10;
  plVar17 = (long *)plVar9[0x4c];
  lVar14 = (long)plVar17 - (long)plVar3;
  uVar16 = lVar14 >> 4;
  if (uVar16 < uVar18) {
    uVar22 = uVar18 - uVar16;
    lVar20 = plVar9[0x4d];
    if ((ulong)(lVar20 - (long)plVar17 >> 4) < uVar22) {
      if (uVar18 >> 0x3c == 0) {
        uVar15 = lVar20 - (long)plVar3 >> 3;
        if (uVar15 <= uVar18) {
          uVar15 = uVar18;
        }
        if (0x7fffffffffffffef < (ulong)(lVar20 - (long)plVar3)) {
          uVar15 = 0xfffffffffffffff;
        }
        plStack_68 = plVar10;
        if (uVar15 >> 0x3c == 0) {
          lVar8 = uVar15 << 4;
          __Znwm();
          lVar1 = lVar8 + lVar14;
          _bzero(lVar1,uVar22 * 0x10);
          lVar19 = lVar1 + uVar16 * -0x10;
          _memcpy(lVar19,plVar3,lVar14);
          *plVar10 = lVar19;
          plVar9[0x4c] = lVar1 + uVar22 * 0x10;
          plVar9[0x4d] = lVar8 + uVar15 * 0x10;
          uStack_88 = plVar3;
          plStack_80 = plVar3;
          plStack_78 = plVar3;
          lStack_70 = lVar20;
          func_0x00010988c1b8(&uStack_88);
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
    _bzero(plVar17,uVar22 * 0x10);
    plVar9[0x4c] = (long)(plVar17 + uVar22 * 2);
  }
  else if (uVar18 < uVar16) {
    while (plVar17 != plVar3 + uVar18 * 2) {
      plVar17 = plVar17 + -2;
      func_0x00010988c204(plVar17);
    }
    plVar9[0x4c] = (long)(plVar3 + uVar18 * 2);
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar18;
  return;
}



/* Entry: 10acd0c68; end: 10acd0c8b;  */

void FUN_10acd0c68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined8 *****pppppuVar4;
  code *pcVar5;
  long lVar6;
  long *****ppppplVar7;
  long *****ppppplVar8;
  long *****ppppplVar9;
  long ****pppplVar10;
  long ****pppplVar11;
  undefined8 uVar12;
  undefined4 *extraout_x8;
  long *****ppppplVar13;
  long *****ppppplVar14;
  long ****pppplVar15;
  ulong uVar16;
  long ***ppplVar17;
  ulong uVar18;
  long *****unaff_x20;
  long lVar19;
  long ****pppplVar20;
  long *****ppppplVar21;
  long *****ppppplVar22;
  long ****pppplVar23;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 ****ppppuStack_c0;
  long ***ppplStack_b8;
  byte bStack_a9;
  long ****pppplStack_a8;
  long ***ppplStack_a0;
  undefined8 uStack_98;
  long ****pppplStack_90;
  long ****pppplStack_88;
  long ***ppplStack_80;
  long ****pppplStack_78;
  
  if ((int)param_1 == 2) {
    return;
  }
  ppppplVar7 = (long *****)0x2;
  uVar12 = 0;
  FUN_10a052ee0(2,0);
  ppppplVar8 = ppppplVar7;
  (*(code *)(*ppppplVar7)[0xb])();
  if (ppppplVar8[0x59] < (long ****)0x8) {
    ppppplVar8[(long)ppppplVar8[0x59] + 0x4e] = ppppplVar8[0x5a];
    ppppplVar8[0x59] = (long ****)((long)ppppplVar8[0x59] + 1);
  }
  else {
    func_0x00010988bfcc(ppppplVar8 + 0x4b);
  }
  ppppplVar9 = ppppplVar7;
  FUN_10acc8580(ppppplVar7,uVar12);
  FUN_10acd1394(param_4);
  func_0x000109898570(&ppppuStack_c0,ppppplVar7,param_1);
  if (*(int *)(param_1 + 0x10) == 7) {
    ppppplVar14 = ppppplVar7;
    (*(code *)(*ppppplVar7)[0x13])(ppppplVar7,*(undefined8 *)(param_1 + 0x18));
    ppppplVar21 = ppppplVar7;
    pppplStack_90 = (long ****)ppppplVar14;
    (*(code *)(*ppppplVar7)[0x41])(ppppplVar7,&pppplStack_90);
    if (((ulong)ppppplVar21 & 1) != 0) {
      pppplStack_a8 = pppplStack_90;
      ppppplVar14 = ppppplVar7;
      (*(code *)(*ppppplVar7)[0x4d])(ppppplVar7,&pppplStack_a8);
      lStack_d8 = 0;
      lStack_d0 = 0;
      uStack_c8 = 0;
      func_0x00010983cad8(&lStack_d8,ppppplVar14);
      if (ppppplVar14 != (long *****)0x0) {
        ppppplVar21 = (long *****)0x0;
        do {
          (*(code *)(*ppppplVar7)[0x51])(&pppplStack_90,ppppplVar7,&pppplStack_a8,ppppplVar21);
          ppppplVar22 = ppppplVar7;
          func_0x00010a077264(ppppplVar7,&pppplStack_90);
          FUN_10a7e9944(&lStack_d8,ppppplVar22);
          if ((3 < (int)pppplStack_90) && ((long *****)pppplStack_88 != (long *****)0x0)) {
            (*(code *)**pppplStack_88)();
          }
          ppppplVar21 = (long *****)((long)ppppplVar21 + 1);
        } while (ppppplVar14 != ppppplVar21);
      }
      if ((long *****)pppplStack_a8 != (long *****)0x0) {
        (*(code *)**pppplStack_a8)();
      }
      if (*(char *)(ppppplVar9 + 0xc) == '\x01') {
        FUN_10a00946c(&UNK_10f6a1d58);
        goto LAB_10acd1250;
      }
      pppplVar10 = (long ****)ppplStack_b8;
      pppppuVar4 = (undefined8 *****)ppppuStack_c0;
      if (-1 < (char)bStack_a9) {
        pppplVar10 = (long ****)(ulong)bStack_a9;
        pppppuVar4 = &ppppuStack_c0;
      }
      if ((long ****)0x7ffffffffffffff7 < pppplVar10) {
        func_0x000109ffde50();
        goto LAB_10acd1250;
      }
      if (pppplVar10 < (long ****)0x17) {
        uStack_98 = (long ****)CONCAT17((char)pppplVar10,(undefined7)uStack_98);
        ppppplVar14 = &pppplStack_a8;
        if (pppplVar10 != (long ****)0x0) goto LAB_10acd0e80;
      }
      else {
        ppppplVar7 = (long *****)0x19;
        if (((ulong)pppplVar10 | 7) != 0x17) {
          ppppplVar7 = (long *****)(((ulong)pppplVar10 | 7) + 1);
        }
        ppppplVar14 = ppppplVar7;
        __Znwm();
        uStack_98 = (long ****)((ulong)ppppplVar7 | 0x8000000000000000);
        pppplStack_a8 = (long ****)ppppplVar14;
        ppplStack_a0 = (long ***)pppplVar10;
LAB_10acd0e80:
        _memmove(ppppplVar14,pppppuVar4,pppplVar10);
      }
      *(undefined1 *)((long)ppppplVar14 + (long)pppplVar10) = 0;
      FUN_10ac9e388(ppppplVar9,&pppplStack_a8,0);
      ppppplVar7 = ppppplVar9 + 7;
      ppppplVar14 = ppppplVar7;
      func_0x000107c2b05c(ppppplVar7,&pppplStack_a8);
      ppppplVar21 = (long *****)ppppplVar9[8];
      if (ppppplVar21 != (long *****)0x0) {
        uVar18 = (long)ppppplVar21 - 1;
        if (((ulong)ppppplVar21 & uVar18) == 0) {
          unaff_x20 = (long *****)(uVar18 & (ulong)ppppplVar14);
        }
        else {
          unaff_x20 = ppppplVar14;
          if (ppppplVar21 <= ppppplVar14) {
            uVar16 = 0;
            if (ppppplVar21 != (long *****)0x0) {
              uVar16 = (ulong)ppppplVar14 / (ulong)ppppplVar21;
            }
            unaff_x20 = (long *****)((long)ppppplVar14 - uVar16 * (long)ppppplVar21);
          }
        }
        if ((*ppppplVar7)[(long)unaff_x20] != (long ***)0x0) {
          for (ppppplVar22 = (long *****)*(*ppppplVar7)[(long)unaff_x20];
              ppppplVar22 != (long *****)0x0; ppppplVar22 = (long *****)*ppppplVar22) {
            ppppplVar13 = (long *****)ppppplVar22[1];
            if (ppppplVar13 == ppppplVar14) {
              ppppplVar13 = ppppplVar7;
              func_0x000107c2b068(ppppplVar7,ppppplVar22 + 2,&pppplStack_a8);
              if (((ulong)ppppplVar13 & 1) != 0) goto LAB_10acd113c;
            }
            else {
              if (((ulong)ppppplVar21 & uVar18) == 0) {
                ppppplVar13 = (long *****)((ulong)ppppplVar13 & uVar18);
              }
              else if (ppppplVar21 <= ppppplVar13) {
                uVar16 = 0;
                if (ppppplVar21 != (long *****)0x0) {
                  uVar16 = (ulong)ppppplVar13 / (ulong)ppppplVar21;
                }
                ppppplVar13 = (long *****)((long)ppppplVar13 - uVar16 * (long)ppppplVar21);
              }
              if (ppppplVar13 != unaff_x20) break;
            }
          }
        }
      }
      ppppplVar22 = (long *****)0x60;
      __Znwm();
      ppplStack_80 = (long ***)0x0;
      *ppppplVar22 = (long ****)0x0;
      ppppplVar22[1] = (long ****)ppppplVar14;
      pppplStack_90 = (long ****)ppppplVar22;
      pppplStack_88 = (long ****)ppppplVar7;
      if ((long)uStack_98 < 0) {
        func_0x000107c3192c(ppppplVar22 + 2,pppplStack_a8,ppplStack_a0);
      }
      else {
        ppppplVar22[3] = (long ****)ppplStack_a0;
        ppppplVar22[2] = pppplStack_a8;
        ppppplVar22[4] = uStack_98;
      }
      lVar1 = lStack_d0;
      lVar19 = lStack_d8;
      ppppplVar22[9] = (long ****)0x0;
      ppppplVar22[8] = (long ****)0x0;
      *(undefined1 *)(ppppplVar22 + 6) = 0;
      ppppplVar22[5] = (long ****)&PTR_FUN_110c6c2d0;
      *(undefined2 *)((long)ppppplVar22 + 0x32) = 0xf;
      ppppplVar22[0xb] = (long ****)0x0;
      ppppplVar22[10] = (long ****)0x0;
      pppplVar10 = (long ****)0x20;
      __Znwm();
      *pppplVar10 = (long ***)&PTR_FUN_110c6be90;
      pppplVar10[2] = (long ***)0x0;
      pppplVar10[3] = (long ***)0x0;
      pppplVar10[1] = (long ***)0x0;
      FUN_10acc79c4(pppplVar10 + 1,lVar19,lVar1,lVar1 - lVar19 >> 4);
      pppplVar11 = ppppplVar22[0xb];
      ppppplVar22[0xb] = pppplVar10;
      if (pppplVar11 != (long ****)0x0) {
        (*(code *)(*pppplVar11)[1])();
      }
      ppplStack_80 = (long ***)CONCAT71(ppplStack_80._1_7_,1);
      if ((ppppplVar21 == (long *****)0x0) ||
         (*(float *)(ppppplVar9 + 0xb) * (float)ppppplVar21 < (float)((long)ppppplVar9[10] + 1))) {
        uVar18 = 1;
        if ((long *****)0x2 < ppppplVar21) {
          uVar18 = (ulong)(((ulong)ppppplVar21 & (long)ppppplVar21 - 1U) != 0);
        }
        uVar18 = uVar18 | (long)ppppplVar21 << 1;
        uVar16 = (ulong)((float)((long)ppppplVar9[10] + 1) / *(float *)(ppppplVar9 + 0xb));
        if (uVar18 <= uVar16) {
          uVar18 = uVar16;
        }
        FUN_10a4ba824(ppppplVar7,uVar18);
        ppppplVar21 = (long *****)ppppplVar9[8];
        if (((ulong)ppppplVar21 & (long)ppppplVar21 - 1U) == 0) {
          unaff_x20 = (long *****)((long)ppppplVar21 - 1U & (ulong)ppppplVar14);
        }
        else {
          unaff_x20 = ppppplVar14;
          if (ppppplVar21 <= ppppplVar14) {
            uVar18 = 0;
            if (ppppplVar21 != (long *****)0x0) {
              uVar18 = (ulong)ppppplVar14 / (ulong)ppppplVar21;
            }
            unaff_x20 = (long *****)((long)ppppplVar14 - uVar18 * (long)ppppplVar21);
          }
        }
      }
      pppplVar10 = *ppppplVar7;
      ppplVar17 = pppplVar10[(long)unaff_x20];
      if (ppplVar17 == (long ***)0x0) {
        ppppplVar14 = ppppplVar9 + 9;
        *pppplStack_90 = (long ***)*ppppplVar14;
        *ppppplVar14 = pppplStack_90;
        pppplVar10[(long)unaff_x20] = (long ***)ppppplVar14;
        if ((long ****)*pppplStack_90 != (long ****)0x0) {
          ppppplVar14 = (long *****)(*pppplStack_90)[1];
          if (((ulong)ppppplVar21 & (long)ppppplVar21 - 1U) == 0) {
            ppppplVar14 = (long *****)((ulong)ppppplVar14 & (long)ppppplVar21 - 1U);
          }
          else if (ppppplVar21 <= ppppplVar14) {
            uVar18 = 0;
            if (ppppplVar21 != (long *****)0x0) {
              uVar18 = (ulong)ppppplVar14 / (ulong)ppppplVar21;
            }
            ppppplVar14 = (long *****)((long)ppppplVar14 - uVar18 * (long)ppppplVar21);
          }
          (*ppppplVar7)[(long)ppppplVar14] = (long ***)pppplStack_90;
        }
      }
      else {
        *pppplStack_90 = (long ***)*ppplVar17;
        *ppplVar17 = (long **)pppplStack_90;
      }
      ppppplVar9[10] = (long ****)((long)ppppplVar9[10] + 1);
      ppppplVar22 = (long *****)pppplStack_90;
LAB_10acd113c:
      func_0x00010a5499ec(ppppplVar9,1,ppppplVar22 + 5,&pppplStack_a8);
      if (*(char *)(ppppplVar9[0x11] + 1) == '\x01') {
        FUN_10a54a030(&pppplStack_90,ppppplVar9 + 5);
        FUN_10a549a74(ppppplVar9 + 0x10,&pppplStack_90,&pppplStack_a8);
        pppplVar10 = pppplStack_88;
        if ((long *****)pppplStack_88 != (long *****)0x0) {
          ppppplVar7 = (long *****)(pppplStack_88 + 1);
          do {
            pppplVar11 = *ppppplVar7;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppppplVar7,0x10);
            if (bVar3) {
              *ppppplVar7 = (long ****)((long)pppplVar11 + -1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (pppplVar11 == (long ****)0x0) {
            (*(code *)(*pppplStack_88)[2])(pppplStack_88);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar10);
          }
        }
      }
      if ((long)uStack_98 < 0) {
        __ZdlPv(pppplStack_a8);
      }
      if (lStack_d8 != 0) {
        lStack_d0 = lStack_d8;
        __ZdlPv();
      }
      if ((char)bStack_a9 < '\0') {
        __ZdlPv(ppppuStack_c0);
      }
      *extraout_x8 = 0;
      ppppplVar7 = ppppplVar8 + 0x4b;
      pppplVar10 = ppppplVar8[0x59];
      pppplVar11 = (long ****)((long)pppplVar10 + -1);
      ppppplVar8[0x59] = pppplVar11;
      if (pppplVar11 < (long ****)0x8) {
        pppplVar10 = ppppplVar7[(long)pppplVar10 + 2];
        if (ppppplVar8[0x5a] == pppplVar10) {
          return;
        }
      }
      else {
        pppplVar10 = (long ****)ppppplVar8[0x57][-1];
        ppppplVar8[0x57] = ppppplVar8[0x57] + -1;
        if (ppppplVar8[0x5a] == pppplVar10) {
          return;
        }
      }
      pppplVar11 = *ppppplVar7;
      pppplVar15 = ppppplVar8[0x4c];
      lVar19 = (long)pppplVar15 - (long)pppplVar11;
      pppplVar23 = (long ****)(lVar19 >> 4);
      if (pppplVar23 < pppplVar10) {
        uVar18 = (long)pppplVar10 - (long)pppplVar23;
        pppplVar20 = ppppplVar8[0x4d];
        if ((ulong)((long)pppplVar20 - (long)pppplVar15 >> 4) < uVar18) {
          if ((ulong)pppplVar10 >> 0x3c == 0) {
            pppplVar15 = (long ****)((long)pppplVar20 - (long)pppplVar11 >> 3);
            if (pppplVar15 <= pppplVar10) {
              pppplVar15 = pppplVar10;
            }
            if (0x7fffffffffffffef < (ulong)((long)pppplVar20 - (long)pppplVar11)) {
              pppplVar15 = (long ****)0xfffffffffffffff;
            }
            pppplStack_78 = (long ****)ppppplVar7;
            if ((ulong)pppplVar15 >> 0x3c == 0) {
              lVar6 = (long)pppplVar15 << 4;
              __Znwm();
              lVar1 = lVar6 + lVar19;
              _bzero(lVar1,uVar18 * 0x10);
              pppplVar23 = (long ****)(lVar1 + (long)pppplVar23 * -0x10);
              _memcpy(pppplVar23,pppplVar11,lVar19);
              *ppppplVar7 = pppplVar23;
              ppppplVar8[0x4c] = (long ****)(lVar1 + uVar18 * 0x10);
              ppppplVar8[0x4d] = (long ****)(lVar6 + (long)pppplVar15 * 0x10);
              uStack_98 = pppplVar11;
              pppplStack_90 = pppplVar11;
              pppplStack_88 = pppplVar11;
              ppplStack_80 = (long ***)pppplVar20;
              func_0x00010988c1b8(&uStack_98);
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
        _bzero(pppplVar15,uVar18 * 0x10);
        ppppplVar8[0x4c] = pppplVar15 + uVar18 * 2;
      }
      else if (pppplVar10 < pppplVar23) {
        while (pppplVar15 != pppplVar11 + (long)pppplVar10 * 2) {
          pppplVar15 = pppplVar15 + -2;
          func_0x00010988c204(pppplVar15);
        }
        ppppplVar8[0x4c] = pppplVar11 + (long)pppplVar10 * 2;
      }
code_r0x00010988c138:
      ppppplVar8[0x5a] = pppplVar10;
      return;
    }
    if ((long *****)pppplStack_90 != (long *****)0x0) {
      (*(code *)**pppplStack_90)();
    }
  }
  func_0x00010988bd28(&UNK_10f58253c);
LAB_10acd1250:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10acd1254);
  (*pcVar5)();
}



/* Entry: 10acd0c8c; end: 10acd1393;  */

void FUN_10acd0c8c(undefined4 *param_1,long *****param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined8 *****pppppuVar4;
  code *pcVar5;
  long lVar6;
  long *****ppppplVar7;
  long *****ppppplVar8;
  long *****ppppplVar9;
  long ****pppplVar10;
  long ****pppplVar11;
  long *****ppppplVar12;
  long ****pppplVar13;
  ulong uVar14;
  long ***ppplVar15;
  ulong uVar16;
  long *****unaff_x20;
  long lVar17;
  long ****pppplVar18;
  long *****ppppplVar19;
  long *****ppppplVar20;
  long ****pppplVar21;
  long *****ppppplVar22;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 ****ppppuStack_b0;
  long ***ppplStack_a8;
  byte bStack_99;
  long ****pppplStack_98;
  long ***ppplStack_90;
  undefined8 uStack_88;
  long ****pppplStack_80;
  long ****pppplStack_78;
  long ***ppplStack_70;
  long ****pppplStack_68;
  
  ppppplVar7 = param_2;
  (*(code *)(*param_2)[0xb])();
  if (ppppplVar7[0x59] < (long ****)0x8) {
    ppppplVar7[(long)ppppplVar7[0x59] + 0x4e] = ppppplVar7[0x5a];
    ppppplVar7[0x59] = (long ****)((long)ppppplVar7[0x59] + 1);
  }
  else {
    func_0x00010988bfcc(ppppplVar7 + 0x4b);
  }
  ppppplVar8 = param_2;
  FUN_10acc8580(param_2,param_3);
  FUN_10acd1394(param_5);
  func_0x000109898570(&ppppuStack_b0,param_2,param_4);
  if (*(int *)(param_4 + 0x10) == 7) {
    ppppplVar9 = param_2;
    (*(code *)(*param_2)[0x13])(param_2,*(undefined8 *)(param_4 + 0x18));
    ppppplVar19 = param_2;
    pppplStack_80 = (long ****)ppppplVar9;
    (*(code *)(*param_2)[0x41])(param_2,&pppplStack_80);
    if (((ulong)ppppplVar19 & 1) != 0) {
      pppplStack_98 = pppplStack_80;
      ppppplVar9 = param_2;
      (*(code *)(*param_2)[0x4d])(param_2,&pppplStack_98);
      lStack_c8 = 0;
      lStack_c0 = 0;
      uStack_b8 = 0;
      func_0x00010983cad8(&lStack_c8,ppppplVar9);
      if (ppppplVar9 != (long *****)0x0) {
        ppppplVar19 = (long *****)0x0;
        do {
          (*(code *)(*param_2)[0x51])(&pppplStack_80,param_2,&pppplStack_98,ppppplVar19);
          ppppplVar22 = param_2;
          func_0x00010a077264(param_2,&pppplStack_80);
          FUN_10a7e9944(&lStack_c8,ppppplVar22);
          if ((3 < (int)pppplStack_80) && ((long *****)pppplStack_78 != (long *****)0x0)) {
            (*(code *)**pppplStack_78)();
          }
          ppppplVar19 = (long *****)((long)ppppplVar19 + 1);
        } while (ppppplVar9 != ppppplVar19);
      }
      if ((long *****)pppplStack_98 != (long *****)0x0) {
        (*(code *)**pppplStack_98)();
      }
      if (*(char *)(ppppplVar8 + 0xc) == '\x01') {
        FUN_10a00946c(&UNK_10f6a1d58);
        goto LAB_10acd1250;
      }
      pppplVar10 = (long ****)ppplStack_a8;
      pppppuVar4 = (undefined8 *****)ppppuStack_b0;
      if (-1 < (char)bStack_99) {
        pppplVar10 = (long ****)(ulong)bStack_99;
        pppppuVar4 = &ppppuStack_b0;
      }
      if ((long ****)0x7ffffffffffffff7 < pppplVar10) {
        func_0x000109ffde50();
        goto LAB_10acd1250;
      }
      if (pppplVar10 < (long ****)0x17) {
        uStack_88 = (long ****)CONCAT17((char)pppplVar10,(undefined7)uStack_88);
        ppppplVar19 = &pppplStack_98;
        if (pppplVar10 != (long ****)0x0) goto LAB_10acd0e80;
      }
      else {
        ppppplVar9 = (long *****)0x19;
        if (((ulong)pppplVar10 | 7) != 0x17) {
          ppppplVar9 = (long *****)(((ulong)pppplVar10 | 7) + 1);
        }
        ppppplVar19 = ppppplVar9;
        __Znwm();
        uStack_88 = (long ****)((ulong)ppppplVar9 | 0x8000000000000000);
        pppplStack_98 = (long ****)ppppplVar19;
        ppplStack_90 = (long ***)pppplVar10;
LAB_10acd0e80:
        _memmove(ppppplVar19,pppppuVar4,pppplVar10);
      }
      *(undefined1 *)((long)ppppplVar19 + (long)pppplVar10) = 0;
      FUN_10ac9e388(ppppplVar8,&pppplStack_98,0);
      ppppplVar9 = ppppplVar8 + 7;
      ppppplVar19 = ppppplVar9;
      func_0x000107c2b05c(ppppplVar9,&pppplStack_98);
      ppppplVar22 = (long *****)ppppplVar8[8];
      if (ppppplVar22 != (long *****)0x0) {
        uVar16 = (long)ppppplVar22 - 1;
        if (((ulong)ppppplVar22 & uVar16) == 0) {
          unaff_x20 = (long *****)(uVar16 & (ulong)ppppplVar19);
        }
        else {
          unaff_x20 = ppppplVar19;
          if (ppppplVar22 <= ppppplVar19) {
            uVar14 = 0;
            if (ppppplVar22 != (long *****)0x0) {
              uVar14 = (ulong)ppppplVar19 / (ulong)ppppplVar22;
            }
            unaff_x20 = (long *****)((long)ppppplVar19 - uVar14 * (long)ppppplVar22);
          }
        }
        if ((*ppppplVar9)[(long)unaff_x20] != (long ***)0x0) {
          for (ppppplVar20 = (long *****)*(*ppppplVar9)[(long)unaff_x20];
              ppppplVar20 != (long *****)0x0; ppppplVar20 = (long *****)*ppppplVar20) {
            ppppplVar12 = (long *****)ppppplVar20[1];
            if (ppppplVar12 == ppppplVar19) {
              ppppplVar12 = ppppplVar9;
              func_0x000107c2b068(ppppplVar9,ppppplVar20 + 2,&pppplStack_98);
              if (((ulong)ppppplVar12 & 1) != 0) goto LAB_10acd113c;
            }
            else {
              if (((ulong)ppppplVar22 & uVar16) == 0) {
                ppppplVar12 = (long *****)((ulong)ppppplVar12 & uVar16);
              }
              else if (ppppplVar22 <= ppppplVar12) {
                uVar14 = 0;
                if (ppppplVar22 != (long *****)0x0) {
                  uVar14 = (ulong)ppppplVar12 / (ulong)ppppplVar22;
                }
                ppppplVar12 = (long *****)((long)ppppplVar12 - uVar14 * (long)ppppplVar22);
              }
              if (ppppplVar12 != unaff_x20) break;
            }
          }
        }
      }
      ppppplVar20 = (long *****)0x60;
      __Znwm();
      ppplStack_70 = (long ***)0x0;
      *ppppplVar20 = (long ****)0x0;
      ppppplVar20[1] = (long ****)ppppplVar19;
      pppplStack_80 = (long ****)ppppplVar20;
      pppplStack_78 = (long ****)ppppplVar9;
      if ((long)uStack_88 < 0) {
        func_0x000107c3192c(ppppplVar20 + 2,pppplStack_98,ppplStack_90);
      }
      else {
        ppppplVar20[3] = (long ****)ppplStack_90;
        ppppplVar20[2] = pppplStack_98;
        ppppplVar20[4] = uStack_88;
      }
      lVar1 = lStack_c0;
      lVar17 = lStack_c8;
      ppppplVar20[9] = (long ****)0x0;
      ppppplVar20[8] = (long ****)0x0;
      *(undefined1 *)(ppppplVar20 + 6) = 0;
      ppppplVar20[5] = (long ****)&PTR_FUN_110c6c2d0;
      *(undefined2 *)((long)ppppplVar20 + 0x32) = 0xf;
      ppppplVar20[0xb] = (long ****)0x0;
      ppppplVar20[10] = (long ****)0x0;
      pppplVar10 = (long ****)0x20;
      __Znwm();
      *pppplVar10 = (long ***)&PTR_FUN_110c6be90;
      pppplVar10[2] = (long ***)0x0;
      pppplVar10[3] = (long ***)0x0;
      pppplVar10[1] = (long ***)0x0;
      FUN_10acc79c4(pppplVar10 + 1,lVar17,lVar1,lVar1 - lVar17 >> 4);
      pppplVar11 = ppppplVar20[0xb];
      ppppplVar20[0xb] = pppplVar10;
      if (pppplVar11 != (long ****)0x0) {
        (*(code *)(*pppplVar11)[1])();
      }
      ppplStack_70 = (long ***)CONCAT71(ppplStack_70._1_7_,1);
      if ((ppppplVar22 == (long *****)0x0) ||
         (*(float *)(ppppplVar8 + 0xb) * (float)ppppplVar22 < (float)((long)ppppplVar8[10] + 1))) {
        uVar16 = 1;
        if ((long *****)0x2 < ppppplVar22) {
          uVar16 = (ulong)(((ulong)ppppplVar22 & (long)ppppplVar22 - 1U) != 0);
        }
        uVar16 = uVar16 | (long)ppppplVar22 << 1;
        uVar14 = (ulong)((float)((long)ppppplVar8[10] + 1) / *(float *)(ppppplVar8 + 0xb));
        if (uVar16 <= uVar14) {
          uVar16 = uVar14;
        }
        FUN_10a4ba824(ppppplVar9,uVar16);
        ppppplVar22 = (long *****)ppppplVar8[8];
        if (((ulong)ppppplVar22 & (long)ppppplVar22 - 1U) == 0) {
          unaff_x20 = (long *****)((long)ppppplVar22 - 1U & (ulong)ppppplVar19);
        }
        else {
          unaff_x20 = ppppplVar19;
          if (ppppplVar22 <= ppppplVar19) {
            uVar16 = 0;
            if (ppppplVar22 != (long *****)0x0) {
              uVar16 = (ulong)ppppplVar19 / (ulong)ppppplVar22;
            }
            unaff_x20 = (long *****)((long)ppppplVar19 - uVar16 * (long)ppppplVar22);
          }
        }
      }
      pppplVar10 = *ppppplVar9;
      ppplVar15 = pppplVar10[(long)unaff_x20];
      if (ppplVar15 == (long ***)0x0) {
        ppppplVar19 = ppppplVar8 + 9;
        *pppplStack_80 = (long ***)*ppppplVar19;
        *ppppplVar19 = pppplStack_80;
        pppplVar10[(long)unaff_x20] = (long ***)ppppplVar19;
        if ((long ****)*pppplStack_80 != (long ****)0x0) {
          ppppplVar19 = (long *****)(*pppplStack_80)[1];
          if (((ulong)ppppplVar22 & (long)ppppplVar22 - 1U) == 0) {
            ppppplVar19 = (long *****)((ulong)ppppplVar19 & (long)ppppplVar22 - 1U);
          }
          else if (ppppplVar22 <= ppppplVar19) {
            uVar16 = 0;
            if (ppppplVar22 != (long *****)0x0) {
              uVar16 = (ulong)ppppplVar19 / (ulong)ppppplVar22;
            }
            ppppplVar19 = (long *****)((long)ppppplVar19 - uVar16 * (long)ppppplVar22);
          }
          (*ppppplVar9)[(long)ppppplVar19] = (long ***)pppplStack_80;
        }
      }
      else {
        *pppplStack_80 = (long ***)*ppplVar15;
        *ppplVar15 = (long **)pppplStack_80;
      }
      ppppplVar8[10] = (long ****)((long)ppppplVar8[10] + 1);
      ppppplVar20 = (long *****)pppplStack_80;
LAB_10acd113c:
      func_0x00010a5499ec(ppppplVar8,1,ppppplVar20 + 5,&pppplStack_98);
      if (*(char *)(ppppplVar8[0x11] + 1) == '\x01') {
        FUN_10a54a030(&pppplStack_80,ppppplVar8 + 5);
        FUN_10a549a74(ppppplVar8 + 0x10,&pppplStack_80,&pppplStack_98);
        pppplVar10 = pppplStack_78;
        if ((long *****)pppplStack_78 != (long *****)0x0) {
          ppppplVar8 = (long *****)(pppplStack_78 + 1);
          do {
            pppplVar11 = *ppppplVar8;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppppplVar8,0x10);
            if (bVar3) {
              *ppppplVar8 = (long ****)((long)pppplVar11 + -1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (pppplVar11 == (long ****)0x0) {
            (*(code *)(*pppplStack_78)[2])(pppplStack_78);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar10);
          }
        }
      }
      if ((long)uStack_88 < 0) {
        __ZdlPv(pppplStack_98);
      }
      if (lStack_c8 != 0) {
        lStack_c0 = lStack_c8;
        __ZdlPv();
      }
      if ((char)bStack_99 < '\0') {
        __ZdlPv(ppppuStack_b0);
      }
      *param_1 = 0;
      ppppplVar8 = ppppplVar7 + 0x4b;
      pppplVar10 = ppppplVar7[0x59];
      pppplVar11 = (long ****)((long)pppplVar10 + -1);
      ppppplVar7[0x59] = pppplVar11;
      if (pppplVar11 < (long ****)0x8) {
        pppplVar10 = ppppplVar8[(long)pppplVar10 + 2];
        if (ppppplVar7[0x5a] == pppplVar10) {
          return;
        }
      }
      else {
        pppplVar10 = (long ****)ppppplVar7[0x57][-1];
        ppppplVar7[0x57] = ppppplVar7[0x57] + -1;
        if (ppppplVar7[0x5a] == pppplVar10) {
          return;
        }
      }
      pppplVar11 = *ppppplVar8;
      pppplVar13 = ppppplVar7[0x4c];
      lVar17 = (long)pppplVar13 - (long)pppplVar11;
      pppplVar21 = (long ****)(lVar17 >> 4);
      if (pppplVar21 < pppplVar10) {
        uVar16 = (long)pppplVar10 - (long)pppplVar21;
        pppplVar18 = ppppplVar7[0x4d];
        if ((ulong)((long)pppplVar18 - (long)pppplVar13 >> 4) < uVar16) {
          if ((ulong)pppplVar10 >> 0x3c == 0) {
            pppplVar13 = (long ****)((long)pppplVar18 - (long)pppplVar11 >> 3);
            if (pppplVar13 <= pppplVar10) {
              pppplVar13 = pppplVar10;
            }
            if (0x7fffffffffffffef < (ulong)((long)pppplVar18 - (long)pppplVar11)) {
              pppplVar13 = (long ****)0xfffffffffffffff;
            }
            pppplStack_68 = (long ****)ppppplVar8;
            if ((ulong)pppplVar13 >> 0x3c == 0) {
              lVar6 = (long)pppplVar13 << 4;
              __Znwm();
              lVar1 = lVar6 + lVar17;
              _bzero(lVar1,uVar16 * 0x10);
              pppplVar21 = (long ****)(lVar1 + (long)pppplVar21 * -0x10);
              _memcpy(pppplVar21,pppplVar11,lVar17);
              *ppppplVar8 = pppplVar21;
              ppppplVar7[0x4c] = (long ****)(lVar1 + uVar16 * 0x10);
              ppppplVar7[0x4d] = (long ****)(lVar6 + (long)pppplVar13 * 0x10);
              uStack_88 = pppplVar11;
              pppplStack_80 = pppplVar11;
              pppplStack_78 = pppplVar11;
              ppplStack_70 = (long ***)pppplVar18;
              func_0x00010988c1b8(&uStack_88);
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
        _bzero(pppplVar13,uVar16 * 0x10);
        ppppplVar7[0x4c] = pppplVar13 + uVar16 * 2;
      }
      else if (pppplVar10 < pppplVar21) {
        while (pppplVar13 != pppplVar11 + (long)pppplVar10 * 2) {
          pppplVar13 = pppplVar13 + -2;
          func_0x00010988c204(pppplVar13);
        }
        ppppplVar7[0x4c] = pppplVar11 + (long)pppplVar10 * 2;
      }
code_r0x00010988c138:
      ppppplVar7[0x5a] = pppplVar10;
      return;
    }
    if ((long *****)pppplStack_80 != (long *****)0x0) {
      (*(code *)**pppplStack_80)();
    }
  }
  func_0x00010988bd28(&UNK_10f58253c);
LAB_10acd1250:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10acd1254);
  (*pcVar5)();
}



/* Entry: 10acd1394; end: 10acd13b7;  */

ulong FUN_10acd1394(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  if ((int)param_1 == 2) {
    return param_1;
  }
  uVar2 = 2;
  puVar4 = (undefined8 *)0x0;
  FUN_10a052ee0(2,0,param_1);
  uVar3 = uVar2;
  FUN_10a0051e8();
  if ((uVar3 & 1) == 0) {
    if ((*(byte *)(uVar2 + 0x78) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10acd141c);
      (*pcVar1)();
    }
    FUN_10a054dac(uVar2,*puVar4,FUN_10acd141c,4,*(undefined8 *)(uVar2 + 0x40));
  }
  return uVar2;
}



/* Entry: 10acd13b8; end: 10acd141b;  */

ulong FUN_10acd13b8(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10acd141c);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10acd141c,4,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10acd141c; end: 10acd1593;  */

void FUN_10acd141c(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long in_stack_ffffffffffffffa0;
  undefined1 *in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  ulong in_stack_ffffffffffffffb8;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = param_2;
  FUN_10acc8580(param_2,param_3);
  FUN_10a648724(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  func_0x000109898570(&lStack_70,param_2,param_4 + 0x10);
  func_0x000109898518(param_2,param_4 + 0x20);
  if ((char)plVar5[0xc] == '\x01') {
    FUN_10a00946c(&UNK_10f6a1d58);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10acd1550);
    (*pcVar2)();
  }
  puVar1 = in_stack_ffffffffffffffa8;
  if (-1 < (long)in_stack_ffffffffffffffb8) {
    in_stack_ffffffffffffffb0 = in_stack_ffffffffffffffb8 >> 0x38;
    puVar1 = &stack0xffffffffffffffa8;
  }
  FUN_10a53e510(plVar5,puVar1,in_stack_ffffffffffffffb0,&lStack_70);
  if (in_stack_ffffffffffffffa0 < 0) {
    __ZdlPv(lStack_70);
  }
  if ((long)in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  *param_1 = 0;
  plVar5 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar5[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar5;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar5;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar5 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10acd1594; end: 10acd15f7;  */

ulong FUN_10acd1594(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10acd15f8);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10acd15f8,4,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10acd15f8; end: 10acd1717;  */

void FUN_10acd15f8(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10acc8580(param_2,param_3);
  FUN_10acd1718(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  func_0x000109898518(param_2,param_4 + 0x10);
  func_0x000109898518(param_2,param_4 + 0x20);
  FUN_10accb014(plVar4,&stack0xffffffffffffffa8,&stack0xffffffffffffffa4);
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10acd1718; end: 10acd173b;  */

ulong FUN_10acd1718(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  if ((int)param_1 == 3) {
    return param_1;
  }
  uVar2 = 3;
  puVar4 = (undefined8 *)0x0;
  FUN_10a052ee0(3,0,param_1);
  uVar3 = uVar2;
  FUN_10a0051e8();
  if ((uVar3 & 1) == 0) {
    if ((*(byte *)(uVar2 + 0x78) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10acd17a0);
      (*pcVar1)();
    }
    FUN_10a054dac(uVar2,*puVar4,FUN_10acd17a0,4,*(undefined8 *)(uVar2 + 0x40));
  }
  return uVar2;
}



/* Entry: 10acd173c; end: 10acd179f;  */

ulong FUN_10acd173c(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10acd17a0);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10acd17a0,4,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10acd17a0; end: 10acd18ef;  */

void FUN_10acd17a0(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10acc8580(param_2,param_3);
  FUN_10acd18f0(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  if (*(int *)(param_4 + 0x10) != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10acd18c0);
    (*pcVar1)();
  }
  func_0x000109898518(param_2,param_4 + 0x20);
  FUN_10accbe60(plVar4,&stack0xffffffffffffffa8,&stack0xffffffffffffffa4);
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10acd18f0; end: 10acd1913;  */

ulong FUN_10acd18f0(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  if ((int)param_1 == 3) {
    return param_1;
  }
  uVar2 = 3;
  puVar4 = (undefined8 *)0x0;
  FUN_10a052ee0(3,0,param_1);
  uVar3 = uVar2;
  FUN_10a0051e8();
  if ((uVar3 & 1) == 0) {
    if ((*(byte *)(uVar2 + 0x78) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10acd1978);
      (*pcVar1)();
    }
    FUN_10a054dac(uVar2,*puVar4,FUN_10acd1978,4,*(undefined8 *)(uVar2 + 0x40));
  }
  return uVar2;
}



/* Entry: 10acd1914; end: 10acd1977;  */

ulong FUN_10acd1914(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10acd1978);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10acd1978,4,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10acd1978; end: 10acd1a97;  */

void FUN_10acd1978(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10acc8580(param_2,param_3);
  FUN_10acd1a98(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  func_0x00010989847c(param_2,param_4 + 0x10);
  func_0x000109898518(param_2,param_4 + 0x20);
  func_0x00010accba40(plVar4,&stack0xffffffffffffffa8,&stack0xffffffffffffffa7);
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10acd1a98; end: 10acd1abb;  */

void FUN_10acd1a98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  undefined1 **ppuVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *extraout_x8;
  undefined4 *extraout_x8_00;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 *puVar16;
  ulong uVar17;
  ulong uVar18;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  long *plStack_b8;
  ulong in_stack_ffffffffffffff50;
  undefined8 in_stack_ffffffffffffff58;
  long in_stack_ffffffffffffff68;
  undefined1 auStack_50 [8];
  long *plStack_48;
  
  if ((int)param_1 == 3) {
    return;
  }
  lVar6 = 3;
  uVar10 = 0;
  FUN_10a052ee0(3,0,param_1);
  if (*(char *)(lVar6 + 0x60) != '\x01') {
    FUN_10ac9bb88(extraout_x8,lVar6,uVar10);
    if (*(char *)(*(long *)(lVar6 + 0x88) + 8) == '\x01') {
      FUN_10a54a030(auStack_50,lVar6 + 0x28);
      FUN_10ac9e468(lVar6 + 0x80,auStack_50,uVar10);
      if (plStack_48 != (long *)0x0) {
        plVar7 = plStack_48 + 1;
        do {
          lVar6 = *plVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
        }
      }
    }
    return;
  }
  plVar7 = (long *)&UNK_10f6a1d7f;
  FUN_10a00946c();
  FUN_10a297544(auStack_50);
  if (*(char *)((long)extraout_x8 + 0x17) < '\0') {
    __ZdlPv(*extraout_x8);
  }
  __Unwind_Resume();
  plVar8 = plVar7;
  (**(code **)(*plVar7 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  plVar9 = plVar7;
  FUN_10acc8580(plVar7,uVar10);
  FUN_10a0584c8(param_4);
  func_0x000109898570(&stack0xffffffffffffff58,plVar7,param_1);
  FUN_10acd1abc(&puStack_c0,plVar9,&stack0xffffffffffffff58);
  if (in_stack_ffffffffffffff68 < 0) {
    __ZdlPv(in_stack_ffffffffffffff58);
  }
  plVar9 = plStack_b8;
  ppuVar3 = (undefined1 **)puStack_c0;
  if (-1 < (long)in_stack_ffffffffffffff50) {
    plVar9 = (long *)(in_stack_ffffffffffffff50 >> 0x38);
    ppuVar3 = &puStack_c0;
  }
  (**(code **)(*plVar7 + 0x128))(&stack0xffffffffffffff58,plVar7,ppuVar3,plVar9);
  *extraout_x8_00 = 6;
  *(undefined8 *)(extraout_x8_00 + 2) = in_stack_ffffffffffffff58;
  if ((long)in_stack_ffffffffffffff50 < 0) {
    __ZdlPv(puStack_c0);
  }
  plVar7 = plVar8 + 0x4b;
  lVar6 = plVar8[0x59];
  uVar11 = lVar6 - 1;
  plVar8[0x59] = uVar11;
  if (uVar11 < 8) {
    uVar11 = plVar7[lVar6 + 2];
    if (plVar8[0x5a] == uVar11) {
      return;
    }
  }
  else {
    uVar11 = *(ulong *)(plVar8[0x57] + -8);
    plVar8[0x57] = plVar8[0x57] + -8;
    if (plVar8[0x5a] == uVar11) {
      return;
    }
  }
  lVar6 = *plVar7;
  lVar15 = plVar8[0x4c];
  lVar13 = lVar15 - lVar6;
  uVar17 = lVar13 >> 4;
  if (uVar17 < uVar11) {
    uVar18 = uVar11 - uVar17;
    puVar16 = (undefined1 *)plVar8[0x4d];
    if ((ulong)((long)puVar16 - lVar15 >> 4) < uVar18) {
      if (uVar11 >> 0x3c == 0) {
        uVar12 = (long)puVar16 - lVar6 >> 3;
        if (uVar12 <= uVar11) {
          uVar12 = uVar11;
        }
        if (0x7fffffffffffffef < (ulong)((long)puVar16 - lVar6)) {
          uVar12 = 0xfffffffffffffff;
        }
        plStack_b8 = plVar7;
        if (uVar12 >> 0x3c == 0) {
          lVar5 = uVar12 << 4;
          __Znwm();
          lVar15 = lVar5 + lVar13;
          _bzero(lVar15,uVar18 * 0x10);
          lVar14 = lVar15 + uVar17 * -0x10;
          _memcpy(lVar14,lVar6,lVar13);
          *plVar7 = lVar14;
          plVar8[0x4c] = lVar15 + uVar18 * 0x10;
          plVar8[0x4d] = lVar5 + uVar12 * 0x10;
          lStack_d8 = lVar6;
          lStack_d0 = lVar6;
          lStack_c8 = lVar6;
          puStack_c0 = puVar16;
          func_0x00010988c1b8(&lStack_d8);
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
    plVar8[0x4c] = lVar15 + uVar18 * 0x10;
  }
  else if (uVar11 < uVar17) {
    lVar6 = lVar6 + uVar11 * 0x10;
    while (lVar15 != lVar6) {
      lVar15 = lVar15 + -0x10;
      func_0x00010988c204(lVar15);
    }
    plVar8[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar8[0x5a] = uVar11;
  return;
}



/* Entry: 10acd1abc; end: 10acd1ba7;  */

void FUN_10acd1abc(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  undefined1 **ppuVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  undefined4 *extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 *puVar15;
  ulong uVar16;
  ulong uVar17;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 *puStack_b0;
  long *plStack_a8;
  ulong in_stack_ffffffffffffff60;
  undefined8 in_stack_ffffffffffffff68;
  long in_stack_ffffffffffffff78;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  if (*(char *)(param_2 + 0x60) != '\x01') {
    FUN_10ac9bb88(param_1,param_2,param_3);
    if (*(char *)(*(long *)(param_2 + 0x88) + 8) == '\x01') {
      FUN_10a54a030(auStack_40,param_2 + 0x28);
      FUN_10ac9e468(param_2 + 0x80,auStack_40,param_3);
      if (plStack_38 != (long *)0x0) {
        plVar6 = plStack_38 + 1;
        do {
          lVar11 = *plVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
        }
      }
    }
    return;
  }
  plVar6 = (long *)&UNK_10f6a1d7f;
  FUN_10a00946c();
  FUN_10a297544(auStack_40);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  __Unwind_Resume();
  plVar7 = plVar6;
  (**(code **)(*plVar6 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  plVar8 = plVar6;
  FUN_10acc8580(plVar6,param_3);
  FUN_10a0584c8(param_5);
  func_0x000109898570(&stack0xffffffffffffff68,plVar6,param_4);
  FUN_10acd1abc(&puStack_b0,plVar8,&stack0xffffffffffffff68);
  if (in_stack_ffffffffffffff78 < 0) {
    __ZdlPv(in_stack_ffffffffffffff68);
  }
  plVar8 = plStack_a8;
  ppuVar3 = (undefined1 **)puStack_b0;
  if (-1 < (long)in_stack_ffffffffffffff60) {
    plVar8 = (long *)(in_stack_ffffffffffffff60 >> 0x38);
    ppuVar3 = &puStack_b0;
  }
  (**(code **)(*plVar6 + 0x128))(&stack0xffffffffffffff68,plVar6,ppuVar3,plVar8);
  *extraout_x8 = 6;
  *(undefined8 *)(extraout_x8 + 2) = in_stack_ffffffffffffff68;
  if ((long)in_stack_ffffffffffffff60 < 0) {
    __ZdlPv(puStack_b0);
  }
  plVar6 = plVar7 + 0x4b;
  lVar11 = plVar7[0x59];
  uVar9 = lVar11 - 1;
  plVar7[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar6[lVar11 + 2];
    if (plVar7[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar9) {
      return;
    }
  }
  lVar11 = *plVar6;
  lVar14 = plVar7[0x4c];
  lVar12 = lVar14 - lVar11;
  uVar16 = lVar12 >> 4;
  if (uVar16 < uVar9) {
    uVar17 = uVar9 - uVar16;
    puVar15 = (undefined1 *)plVar7[0x4d];
    if ((ulong)((long)puVar15 - lVar14 >> 4) < uVar17) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = (long)puVar15 - lVar11 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)((long)puVar15 - lVar11)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_a8 = plVar6;
        if (uVar10 >> 0x3c == 0) {
          lVar5 = uVar10 << 4;
          __Znwm();
          lVar14 = lVar5 + lVar12;
          _bzero(lVar14,uVar17 * 0x10);
          lVar13 = lVar14 + uVar16 * -0x10;
          _memcpy(lVar13,lVar11,lVar12);
          *plVar6 = lVar13;
          plVar7[0x4c] = lVar14 + uVar17 * 0x10;
          plVar7[0x4d] = lVar5 + uVar10 * 0x10;
          lStack_c8 = lVar11;
          lStack_c0 = lVar11;
          lStack_b8 = lVar11;
          puStack_b0 = puVar15;
          func_0x00010988c1b8(&lStack_c8);
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
    _bzero(lVar14,uVar17 * 0x10);
    plVar7[0x4c] = lVar14 + uVar17 * 0x10;
  }
  else if (uVar9 < uVar16) {
    lVar11 = lVar11 + uVar9 * 0x10;
    while (lVar14 != lVar11) {
      lVar14 = lVar14 + -0x10;
      func_0x00010988c204(lVar14);
    }
    plVar7[0x4c] = lVar11;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar9;
  return;
}



/* Entry: 10acd1ba8; end: 10acd1d07;  */

void FUN_10acd1ba8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 **ppuVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  long *plStack_68;
  ulong in_stack_ffffffffffffffa0;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = param_2;
  FUN_10acc8580(param_2,param_3);
  FUN_10a0584c8(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  FUN_10acd1abc(&puStack_70,plVar5,&stack0xffffffffffffffa8);
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  plVar5 = plStack_68;
  ppuVar1 = (undefined1 **)puStack_70;
  if (-1 < (long)in_stack_ffffffffffffffa0) {
    plVar5 = (long *)(in_stack_ffffffffffffffa0 >> 0x38);
    ppuVar1 = &puStack_70;
  }
  (**(code **)(*param_2 + 0x128))(&stack0xffffffffffffffa8,param_2,ppuVar1,plVar5);
  *param_1 = 6;
  *(undefined8 *)(param_1 + 2) = in_stack_ffffffffffffffa8;
  if ((long)in_stack_ffffffffffffffa0 < 0) {
    __ZdlPv(puStack_70);
  }
  plVar5 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar5[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar5;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    puVar12 = (undefined1 *)plVar4[0x4d];
    if ((ulong)((long)puVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = (long)puVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)((long)puVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar5;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar5 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          puStack_70 = puVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10acd1d08; end: 10acd1dfb;  */

long * FUN_10acd1d08(uint *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  code *pcVar7;
  long lVar8;
  uint *puVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  undefined4 *extraout_x8;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long *plStack_a8;
  undefined8 in_stack_ffffffffffffff68;
  long in_stack_ffffffffffffff78;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  if ((char)param_1[0x18] != '\x01') {
    uVar13 = param_2[1];
    puVar6 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar13 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar6 = param_2;
    }
    puVar9 = param_1;
    FUN_10acc2048(param_1,puVar6,uVar13);
    uVar3 = *puVar9;
    FUN_10ac9e388(param_1,param_2,0);
    if (*(char *)(*(long *)(param_1 + 0x22) + 8) == '\x01') {
      FUN_10a54a030(auStack_40,param_1 + 10);
      FUN_10ac9e468(param_1 + 0x20,auStack_40,param_2);
      if (plStack_38 != (long *)0x0) {
        plVar10 = plStack_38 + 1;
        do {
          lVar15 = *plVar10;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = lVar15 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
        }
      }
    }
    return (long *)(ulong)uVar3;
  }
  plVar10 = (long *)&UNK_10f6a1d7f;
  FUN_10a00946c();
  FUN_10a297544(auStack_40);
  __Unwind_Resume();
  plVar11 = plVar10;
  (**(code **)(*plVar10 + 0x58))();
  if ((ulong)plVar11[0x59] < 8) {
    plVar11[plVar11[0x59] + 0x4e] = plVar11[0x5a];
    plVar11[0x59] = plVar11[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar11 + 0x4b);
  }
  plVar12 = plVar10;
  FUN_10acc8580(plVar10,param_2);
  FUN_10a0584c8(param_4);
  func_0x000109898570(&stack0xffffffffffffff68,plVar10,param_3);
  FUN_10acd1d08(plVar12,&stack0xffffffffffffff68);
  if (in_stack_ffffffffffffff78 < 0) {
    __ZdlPv(in_stack_ffffffffffffff68);
  }
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)(int)plVar12;
  plVar10 = plVar11 + 0x4b;
  lVar15 = plVar11[0x59];
  uVar13 = lVar15 - 1;
  plVar11[0x59] = uVar13;
  if (uVar13 < 8) {
    uVar13 = plVar10[lVar15 + 2];
    if (plVar11[0x5a] == uVar13) {
      return plVar10;
    }
  }
  else {
    uVar13 = *(ulong *)(plVar11[0x57] + -8);
    plVar11[0x57] = plVar11[0x57] + -8;
    if (plVar11[0x5a] == uVar13) {
      return plVar10;
    }
  }
  lVar15 = *plVar10;
  plVar12 = (long *)plVar11[0x4c];
  lVar16 = (long)plVar12 - lVar15;
  uVar19 = lVar16 >> 4;
  if (uVar19 < uVar13) {
    uVar20 = uVar13 - uVar19;
    lVar18 = plVar11[0x4d];
    if ((ulong)(lVar18 - (long)plVar12 >> 4) < uVar20) {
      if (uVar13 >> 0x3c == 0) {
        uVar14 = lVar18 - lVar15 >> 3;
        if (uVar14 <= uVar13) {
          uVar14 = uVar13;
        }
        if (0x7fffffffffffffef < (ulong)(lVar18 - lVar15)) {
          uVar14 = 0xfffffffffffffff;
        }
        plStack_a8 = plVar10;
        if (uVar14 >> 0x3c == 0) {
          lVar8 = uVar14 << 4;
          __Znwm();
          lVar1 = lVar8 + lVar16;
          _bzero(lVar1,uVar20 * 0x10);
          lVar17 = lVar1 + uVar19 * -0x10;
          _memcpy(lVar17,lVar15,lVar16);
          *plVar10 = lVar17;
          plVar11[0x4c] = lVar1 + uVar20 * 0x10;
          plVar11[0x4d] = lVar8 + uVar14 * 0x10;
          plVar10 = &lStack_c8;
          lStack_c8 = lVar15;
          lStack_c0 = lVar15;
          lStack_b8 = lVar15;
          lStack_b0 = lVar18;
          func_0x00010988c1b8(plVar10);
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
    plVar10 = plVar12;
    _bzero(plVar12,uVar20 * 0x10);
    plVar11[0x4c] = (long)(plVar12 + uVar20 * 2);
  }
  else if (uVar13 < uVar19) {
    plVar2 = (long *)(lVar15 + uVar13 * 0x10);
    while (plVar12 != plVar2) {
      plVar12 = plVar12 + -2;
      plVar10 = plVar12;
      func_0x00010988c204(plVar12);
    }
    plVar11[0x4c] = (long)plVar2;
  }
code_r0x00010988c138:
  plVar11[0x5a] = uVar13;
  return plVar10;
}



/* Entry: 10acd1dfc; end: 10acd1f07;  */

void FUN_10acd1dfc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10acc8580(param_2,param_3);
  FUN_10a0584c8(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  FUN_10acd1d08(plVar4,&stack0xffffffffffffffa8);
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(int)plVar4;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10acd1f08; end: 10acd1ffb;  */

double FUN_10acd1f08(float param_1,uint *param_2,undefined8 *param_3,undefined8 param_4,
                    undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long lVar5;
  uint *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  undefined4 *extraout_x8;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  double dVar19;
  uint uVar20;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long *plStack_a8;
  long in_stack_ffffffffffffff68;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  if ((char)param_2[0x18] != '\x01') {
    uVar10 = param_3[1];
    puVar3 = (undefined8 *)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar10 = (ulong)*(byte *)((long)param_3 + 0x17);
      puVar3 = param_3;
    }
    puVar6 = param_2;
    FUN_10acc2838(param_2,puVar3,uVar10);
    uVar20 = *puVar6;
    FUN_10ac9e388(param_2,param_3,0);
    if (*(char *)(*(long *)(param_2 + 0x22) + 8) == '\x01') {
      FUN_10a54a030(auStack_40,param_2 + 10);
      FUN_10ac9e468(param_2 + 0x20,auStack_40,param_3);
      if (plStack_38 != (long *)0x0) {
        plVar7 = plStack_38 + 1;
        do {
          lVar12 = *plVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar12 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
        }
      }
    }
    return (double)(ulong)uVar20;
  }
  plVar7 = (long *)&UNK_10f6a1d7f;
  FUN_10a00946c();
  FUN_10a297544(auStack_40);
  __Unwind_Resume();
  plVar8 = plVar7;
  (**(code **)(*plVar7 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  plVar9 = plVar7;
  FUN_10acc8580(plVar7,param_3);
  FUN_10a0584c8(param_5);
  func_0x000109898570(&plStack_a8,plVar7,param_4);
  FUN_10acd1f08(plVar9,&plStack_a8);
  if (in_stack_ffffffffffffff68 < 0) {
    __ZdlPv(plStack_a8);
  }
  dVar19 = (double)param_1;
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = dVar19;
  plVar7 = plVar8 + 0x4b;
  lVar12 = plVar8[0x59];
  uVar10 = lVar12 - 1;
  plVar8[0x59] = uVar10;
  if (uVar10 < 8) {
    uVar10 = plVar7[lVar12 + 2];
    if (plVar8[0x5a] == uVar10) {
      return dVar19;
    }
  }
  else {
    uVar10 = *(ulong *)(plVar8[0x57] + -8);
    plVar8[0x57] = plVar8[0x57] + -8;
    if (plVar8[0x5a] == uVar10) {
      return dVar19;
    }
  }
  lVar12 = *plVar7;
  lVar15 = plVar8[0x4c];
  lVar13 = lVar15 - lVar12;
  uVar17 = lVar13 >> 4;
  if (uVar17 < uVar10) {
    uVar18 = uVar10 - uVar17;
    lVar16 = plVar8[0x4d];
    if ((ulong)(lVar16 - lVar15 >> 4) < uVar18) {
      if (uVar10 >> 0x3c == 0) {
        uVar11 = lVar16 - lVar12 >> 3;
        if (uVar11 <= uVar10) {
          uVar11 = uVar10;
        }
        if (0x7fffffffffffffef < (ulong)(lVar16 - lVar12)) {
          uVar11 = 0xfffffffffffffff;
        }
        plStack_a8 = plVar7;
        if (uVar11 >> 0x3c == 0) {
          lVar5 = uVar11 << 4;
          __Znwm();
          lVar15 = lVar5 + lVar13;
          _bzero(lVar15,uVar18 * 0x10);
          lVar14 = lVar15 + uVar17 * -0x10;
          _memcpy(lVar14,lVar12,lVar13);
          *plVar7 = lVar14;
          plVar8[0x4c] = lVar15 + uVar18 * 0x10;
          plVar8[0x4d] = lVar5 + uVar11 * 0x10;
          lStack_c8 = lVar12;
          lStack_c0 = lVar12;
          lStack_b8 = lVar12;
          lStack_b0 = lVar16;
          func_0x00010988c1b8(&lStack_c8);
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
    plVar8[0x4c] = lVar15 + uVar18 * 0x10;
  }
  else if (uVar10 < uVar17) {
    lVar12 = lVar12 + uVar10 * 0x10;
    while (lVar15 != lVar12) {
      lVar15 = lVar15 + -0x10;
      func_0x00010988c204(lVar15);
    }
    plVar8[0x4c] = lVar12;
  }
code_r0x00010988c138:
  plVar8[0x5a] = uVar10;
  return dVar19;
}



/* Entry: 10acd1ffc; end: 10acd210f;  */

void FUN_10acd1ffc(undefined4 *param_1,float param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long in_stack_ffffffffffffffa8;
  
  plVar3 = param_3;
  (**(code **)(*param_3 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_3;
  FUN_10acc8580(param_3,param_4);
  FUN_10a0584c8(param_6);
  func_0x000109898570(&plStack_68,param_3,param_5);
  FUN_10acd1f08(plVar4,&plStack_68);
  if (in_stack_ffffffffffffffa8 < 0) {
    __ZdlPv(plStack_68);
  }
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)param_2;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10acd2110; end: 10acd2203;  */

long * FUN_10acd2110(byte *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  code *pcVar7;
  long lVar8;
  byte *pbVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  undefined4 *extraout_x8;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long *plStack_a8;
  undefined8 in_stack_ffffffffffffff68;
  long in_stack_ffffffffffffff78;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  if (param_1[0x60] != 1) {
    uVar13 = param_2[1];
    puVar6 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar13 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar6 = param_2;
    }
    pbVar9 = param_1;
    FUN_10a8b7988(param_1,puVar6,uVar13);
    bVar3 = *pbVar9;
    FUN_10ac9e388(param_1,param_2,0);
    if (*(char *)(*(long *)(param_1 + 0x88) + 8) == '\x01') {
      FUN_10a54a030(auStack_40,param_1 + 0x28);
      FUN_10ac9e468(param_1 + 0x80,auStack_40,param_2);
      if (plStack_38 != (long *)0x0) {
        plVar10 = plStack_38 + 1;
        do {
          lVar15 = *plVar10;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = lVar15 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
        }
      }
    }
    return (long *)(ulong)bVar3;
  }
  plVar10 = (long *)&UNK_10f6a1d7f;
  FUN_10a00946c();
  FUN_10a297544(auStack_40);
  __Unwind_Resume();
  plVar11 = plVar10;
  (**(code **)(*plVar10 + 0x58))();
  if ((ulong)plVar11[0x59] < 8) {
    plVar11[plVar11[0x59] + 0x4e] = plVar11[0x5a];
    plVar11[0x59] = plVar11[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar11 + 0x4b);
  }
  plVar12 = plVar10;
  FUN_10acc8580(plVar10,param_2);
  FUN_10a0584c8(param_4);
  func_0x000109898570(&stack0xffffffffffffff68,plVar10,param_3);
  FUN_10acd2110(plVar12,&stack0xffffffffffffff68);
  if (in_stack_ffffffffffffff78 < 0) {
    __ZdlPv(in_stack_ffffffffffffff68);
  }
  *extraout_x8 = 2;
  *(char *)(extraout_x8 + 2) = (char)plVar12;
  plVar10 = plVar11 + 0x4b;
  lVar15 = plVar11[0x59];
  uVar13 = lVar15 - 1;
  plVar11[0x59] = uVar13;
  if (uVar13 < 8) {
    uVar13 = plVar10[lVar15 + 2];
    if (plVar11[0x5a] == uVar13) {
      return plVar10;
    }
  }
  else {
    uVar13 = *(ulong *)(plVar11[0x57] + -8);
    plVar11[0x57] = plVar11[0x57] + -8;
    if (plVar11[0x5a] == uVar13) {
      return plVar10;
    }
  }
  lVar15 = *plVar10;
  plVar12 = (long *)plVar11[0x4c];
  lVar16 = (long)plVar12 - lVar15;
  uVar19 = lVar16 >> 4;
  if (uVar19 < uVar13) {
    uVar20 = uVar13 - uVar19;
    lVar18 = plVar11[0x4d];
    if ((ulong)(lVar18 - (long)plVar12 >> 4) < uVar20) {
      if (uVar13 >> 0x3c == 0) {
        uVar14 = lVar18 - lVar15 >> 3;
        if (uVar14 <= uVar13) {
          uVar14 = uVar13;
        }
        if (0x7fffffffffffffef < (ulong)(lVar18 - lVar15)) {
          uVar14 = 0xfffffffffffffff;
        }
        plStack_a8 = plVar10;
        if (uVar14 >> 0x3c == 0) {
          lVar8 = uVar14 << 4;
          __Znwm();
          lVar1 = lVar8 + lVar16;
          _bzero(lVar1,uVar20 * 0x10);
          lVar17 = lVar1 + uVar19 * -0x10;
          _memcpy(lVar17,lVar15,lVar16);
          *plVar10 = lVar17;
          plVar11[0x4c] = lVar1 + uVar20 * 0x10;
          plVar11[0x4d] = lVar8 + uVar14 * 0x10;
          plVar10 = &lStack_c8;
          lStack_c8 = lVar15;
          lStack_c0 = lVar15;
          lStack_b8 = lVar15;
          lStack_b0 = lVar18;
          func_0x00010988c1b8(plVar10);
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
    plVar10 = plVar12;
    _bzero(plVar12,uVar20 * 0x10);
    plVar11[0x4c] = (long)(plVar12 + uVar20 * 2);
  }
  else if (uVar13 < uVar19) {
    plVar2 = (long *)(lVar15 + uVar13 * 0x10);
    while (plVar12 != plVar2) {
      plVar12 = plVar12 + -2;
      plVar10 = plVar12;
      func_0x00010988c204(plVar12);
    }
    plVar11[0x4c] = (long)plVar2;
  }
code_r0x00010988c138:
  plVar11[0x5a] = uVar13;
  return plVar10;
}



/* Entry: 10acd2204; end: 10acd230b;  */

void FUN_10acd2204(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10acc8580(param_2,param_3);
  FUN_10a0584c8(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  FUN_10acd2110(plVar4,&stack0xffffffffffffffa8);
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  *param_1 = 2;
  *(char *)(param_1 + 2) = (char)plVar4;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10acd230c; end: 10acd236f;  */

ulong FUN_10acd230c(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10acd2370);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10acd2370,2,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10acd2370; end: 10acd248f;  */

void FUN_10acd2370(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined1 *in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  ulong in_stack_ffffffffffffffb8;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = param_2;
  FUN_10acbdf4c(param_2,param_3);
  FUN_10a48f3fc(param_5);
  FUN_10a3f3f30(&stack0xffffffffffffffa8,param_2,param_4);
  puVar1 = in_stack_ffffffffffffffa8;
  if (-1 < (long)in_stack_ffffffffffffffb8) {
    in_stack_ffffffffffffffb0 = in_stack_ffffffffffffffb8 >> 0x38;
    puVar1 = &stack0xffffffffffffffa8;
  }
  FUN_10ac9baa4(plVar5,puVar1,in_stack_ffffffffffffffb0);
  if ((long)in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  *param_1 = 2;
  *(char *)(param_1 + 2) = (char)plVar5;
  plVar5 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar5[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar5;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar5;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar5 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10acd2490; end: 10acd24f3;  */

ulong FUN_10acd2490(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10acd24f4);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10acd24f4,1,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10acd24f4; end: 10acd25af;  */

void FUN_10acd24f4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10acc8580(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar14 = NEON_ucvtf(param_2[10]);
  *param_1 = 3;
  *(undefined8 *)(param_1 + 2) = uVar14;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10acd25b0; end: 10acd2663;  */

void FUN_10acd25b0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10acc8580(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a5955ec(param_2);
  *param_1 = 0;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10acd2664; end: 10acd271f;  */

void FUN_10acd2664(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10acc8580(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar14 = NEON_ucvtf((ulong)*(uint *)((long)param_2 + 100));
  *param_1 = 3;
  *(undefined8 *)(param_1 + 2) = uVar14;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10acd2720; end: 10acd2827;  */

void FUN_10acd2720(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long in_stack_ffffffffffffffa0;
  long in_stack_ffffffffffffffa8;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10acbdf4c(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10ac9e4f8(&stack0xffffffffffffffa0,plVar4);
  func_0x00010989a420(param_1,param_2,in_stack_ffffffffffffffa0,
                      (in_stack_ffffffffffffffa8 - in_stack_ffffffffffffffa0 >> 3) *
                      -0x5555555555555555);
  FUN_10a0426d8(&stack0xffffffffffffffb8);
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10acd2828; end: 10acd28f3;  */

void FUN_10acd2828(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10acc8580(param_2,param_3);
  FUN_10a052e3c(param_5);
  *(undefined1 *)(param_2 + 0xd) = 1;
  FUN_10a5bb9e8(param_2);
  uVar14 = NEON_ucvtf((ulong)*(uint *)((long)param_2 + 0x6c));
  *param_1 = 3;
  *(undefined8 *)(param_1 + 2) = uVar14;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10acd28f4; end: 10acd291b;  */

void FUN_10acd28f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined4 *extraout_x8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  undefined8 in_stack_ffffffffffffff98;
  long in_stack_ffffffffffffffa8;
  long *in_stack_ffffffffffffffc8;
  
  if (*(char *)(param_1 + 0x60) != '\x01') {
    lVar10 = param_1 + 0x38;
    FUN_10acd2d04();
    if (lVar10 != 0) {
      func_0x00010a5499ec(param_1,0xffffffff,lVar10 + 0x28,param_2);
      FUN_10acd2de8(param_1 + 0x38,lVar10);
      if (*(char *)(*(long *)(param_1 + 0x108) + 8) == '\x01') {
        FUN_10a54a030(&stack0xffffffffffffffc0,param_1 + 0x28);
        FUN_10ac9e468(param_1 + 0x100,&stack0xffffffffffffffc0,param_2);
        if (in_stack_ffffffffffffffc8 != (long *)0x0) {
          plVar5 = in_stack_ffffffffffffffc8 + 1;
          do {
            lVar10 = *plVar5;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar2) {
              *plVar5 = lVar10 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*in_stack_ffffffffffffffc8 + 0x10))(in_stack_ffffffffffffffc8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffc8);
          }
        }
      }
    }
    return;
  }
  plVar5 = (long *)&UNK_10f6a1d7f;
  FUN_10a00946c();
  plVar6 = plVar5;
  (**(code **)(*plVar5 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = plVar5;
  FUN_10acc8580(plVar5,param_2);
  FUN_10a0584c8(param_4);
  func_0x000109898570(&stack0xffffffffffffff98,plVar5,param_3);
  FUN_10acd28f4(plVar7,&stack0xffffffffffffff98);
  if (in_stack_ffffffffffffffa8 < 0) {
    __ZdlPv(in_stack_ffffffffffffff98);
  }
  *extraout_x8 = 0;
  plVar5 = plVar6 + 0x4b;
  lVar10 = plVar6[0x59];
  uVar8 = lVar10 - 1;
  plVar6[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar5[lVar10 + 2];
    if (plVar6[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar8) {
      return;
    }
  }
  lVar10 = *plVar5;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar10;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar8) {
    uVar16 = uVar8 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar14 - lVar10 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar10)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_78 = plVar5;
        if (uVar9 >> 0x3c == 0) {
          lVar4 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar4 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar10,lVar11);
          *plVar5 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar4 + uVar9 * 0x10;
          lStack_98 = lVar10;
          lStack_90 = lVar10;
          lStack_88 = lVar10;
          lStack_80 = lVar14;
          func_0x00010988c1b8(&lStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar13,uVar16 * 0x10);
    plVar6[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar8 < uVar15) {
    lVar10 = lVar10 + uVar8 * 0x10;
    while (lVar13 != lVar10) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar10;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar8;
  return;
}



/* Entry: 10acd291c; end: 10acd2a17;  */

void FUN_10acd291c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10acc8580(param_2,param_3);
  FUN_10a0584c8(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  FUN_10acd28f4(plVar4,&stack0xffffffffffffffa8);
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10acd2a18; end: 10acd2af3;  */

void FUN_10acd2a18(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10acbdf4c(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar6 = (long *)plVar6[0xe];
  if ((plVar6 == (long *)0x0) || ((char)plVar6[8] != '\x02')) {
    *param_1 = 1;
  }
  else {
    func_0x0001098849a4(param_1,param_2,*plVar6 + 8);
  }
  plVar6 = plVar3 + 0x4b;
  lVar4 = plVar3[0x59];
  uVar5 = lVar4 - 1;
  plVar3[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar6[lVar4 + 2];
    if (plVar3[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar5) {
      return;
    }
  }
  lVar4 = *plVar6;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar4;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar5) {
    uVar13 = uVar5 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar5 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar4 >> 3;
        if (uVar7 <= uVar5) {
          uVar7 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar4)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar4,lVar8);
          *plVar6 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar4;
          lStack_80 = lVar4;
          lStack_78 = lVar4;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar5 < uVar12) {
    lVar4 = lVar4 + uVar5 * 0x10;
    while (lVar10 != lVar4) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar4;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar5;
  return;
}



/* Entry: 10acd2af4; end: 10acd2c17;  */

void FUN_10acd2af4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffb8;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10acc8580(param_2,param_3);
  FUN_10a2f3410(param_5);
  FUN_10a05dcbc(&stack0xffffffffffffffb0,param_2,param_4);
  func_0x00010a2e268c(plVar6 + 0xe,&stack0xffffffffffffffb0);
  FUN_10a5bb9e8(plVar6);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffb8 + 1;
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
    }
  }
  *param_1 = 0;
  plVar6 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar7 = lVar9 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar9 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar9 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          lStack_70 = lVar13;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10acd2c18; end: 10acd2d03;  */

void FUN_10acd2c18(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined1 uStack_31;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a052e3c(param_5);
  func_0x00010a4ba53c(auStack_48,&uStack_31);
  FUN_10a4ba2c8(param_1,param_2,auStack_48);
  if (plStack_40 != (long *)0x0) {
    plVar1 = plStack_40 + 1;
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
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
    }
  }
  func_0x00010988c170(plVar4 + 0x4b);
  return;
}



/* Entry: 10acd2d04; end: 10acd2de7;  */

long FUN_10acd2d04(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar2 = param_1;
  func_0x000107c2b05c();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)(uVar6 & (ulong)plVar2);
    }
    else {
      plVar7 = plVar2;
      if (plVar5 <= plVar2) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar2 - uVar1 * (long)plVar5);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar3[1];
        if (plVar4 == plVar2) {
          plVar4 = param_1;
          func_0x000107c2b068(param_1,plVar3 + 2,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)plVar5 & uVar6) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar6);
          }
          else if (plVar5 <= plVar4) {
            uVar1 = 0;
            if (plVar5 != (long *)0x0) {
              uVar1 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar5);
          }
          if (plVar4 != plVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 10acd2de8; end: 10acd2e47;  */

undefined8 FUN_10acd2de8(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long alStack_38 [2];
  char cStack_28;
  
  if (param_2 != (undefined8 *)0x0) {
    uVar3 = *param_2;
    FUN_10acd2e48(alStack_38);
    lVar1 = alStack_38[0];
    alStack_38[0] = 0;
    if (lVar1 != 0) {
      if (cStack_28 == '\x01') {
        func_0x00010a4baa78(lVar1 + 0x10);
      }
      __ZdlPv(lVar1);
    }
    return uVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10acd2e48);
  (*pcVar2)();
}



/* Entry: 10acd2e48; end: 10acd2f67;  */

void FUN_10acd2e48(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar5 = uVar4 - 1;
  if ((uVar4 & uVar5) == 0) {
    uVar3 = uVar5 & uVar3;
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
    plVar7 = plVar2;
    plVar2 = (long *)*plVar7;
  } while ((long *)*plVar7 != param_3);
  if (plVar7 != param_2 + 2) {
    uVar8 = plVar7[1];
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10acd2efc;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10acd2efc;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_10acd2efc:
  lVar6 = *param_3;
  if (lVar6 != 0) {
    uVar8 = *(ulong *)(lVar6 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar5 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(*param_2 + uVar8 * 8) = plVar7;
      lVar6 = *param_3;
    }
  }
  *plVar7 = lVar6;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 10acd2f68; end: 10acd2fb3;  */

long FUN_10acd2f68(ulong param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *param_2;
  uVar2 = param_2[1] - lVar1;
  if (param_1 < uVar2 || param_1 - uVar2 == 0) {
    if (param_1 < uVar2) {
      param_2[1] = lVar1 + param_1;
    }
  }
  else {
    FUN_10acc7b68(param_2,param_1 - uVar2);
    lVar1 = *param_2;
  }
  return lVar1;
}



/* Entry: 10acd2fb4; end: 10acd2fe3;  */

long * FUN_10acd2fb4(long *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  uVar5 = param_1[1] - *param_1 >> 3;
  if (param_2 <= uVar5) {
    if (param_2 < uVar5) {
      param_1[1] = *param_1 + param_2 * 8;
    }
    return param_1;
  }
  param_2 = param_2 - uVar5;
  plVar2 = (long *)param_1[1];
  if ((ulong)(param_1[2] - (long)plVar2 >> 3) < param_2) {
    lVar7 = *param_1;
    lVar9 = (long)plVar2 - lVar7;
    lVar10 = lVar9 >> 3;
    uVar5 = param_2 + lVar10;
    if (uVar5 >> 0x3d != 0) {
      FUN_10a31f1a8();
      *param_1 = (long)&PTR_FUN_110c6bee0;
      if (param_1[1] != 0) {
        param_1[2] = param_1[1];
        __ZdlPv();
      }
      return param_1;
    }
    uVar4 = param_1[2] - lVar7;
    uVar6 = (long)uVar4 >> 2;
    if (uVar6 <= uVar5) {
      uVar6 = uVar5;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar6 = 0x1fffffffffffffff;
    }
    if (uVar6 == 0) {
      plVar2 = (long *)0x0;
      lVar8 = lVar9;
    }
    else {
      plVar2 = param_1;
      FUN_10a31f1bc();
      lVar7 = *param_1;
      lVar10 = param_1[1] - lVar7 >> 3;
      lVar8 = param_1[1] - lVar7;
    }
    lVar9 = (long)plVar2 + lVar9;
    _bzero(lVar9,param_2 * 8);
    lVar10 = lVar9 + lVar10 * -8;
    _memcpy(lVar10,lVar7,lVar8);
    plVar3 = (long *)*param_1;
    *param_1 = lVar10;
    param_1[1] = lVar9 + param_2 * 8;
    param_1[2] = (long)(plVar2 + uVar6);
    plVar1 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return plVar3;
    }
  }
  else {
    plVar1 = param_1;
    if (param_2 != 0) {
      plVar1 = plVar2;
      _bzero(plVar2,param_2 * 8);
      plVar2 = plVar2 + param_2;
    }
    param_1[1] = (long)plVar2;
  }
  return plVar1;
}



/* Entry: 10acd2fe4; end: 10acd30ff;  */

long * FUN_10acd2fe4(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  plVar3 = (long *)param_1[1];
  if ((ulong)(param_1[2] - (long)plVar3 >> 3) < param_2) {
    lVar7 = *param_1;
    lVar9 = (long)plVar3 - lVar7;
    lVar10 = lVar9 >> 3;
    uVar1 = param_2 + lVar10;
    if (uVar1 >> 0x3d != 0) {
      FUN_10a31f1a8();
      *param_1 = (long)&PTR_FUN_110c6bee0;
      if (param_1[1] != 0) {
        param_1[2] = param_1[1];
        __ZdlPv();
      }
      return param_1;
    }
    uVar5 = param_1[2] - lVar7;
    uVar6 = (long)uVar5 >> 2;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    if (uVar6 == 0) {
      plVar3 = (long *)0x0;
      lVar8 = lVar9;
    }
    else {
      plVar3 = param_1;
      FUN_10a31f1bc();
      lVar7 = *param_1;
      lVar10 = param_1[1] - lVar7 >> 3;
      lVar8 = param_1[1] - lVar7;
    }
    lVar9 = (long)plVar3 + lVar9;
    _bzero(lVar9,param_2 << 3);
    lVar10 = lVar9 + lVar10 * -8;
    _memcpy(lVar10,lVar7,lVar8);
    plVar4 = (long *)*param_1;
    *param_1 = lVar10;
    param_1[1] = lVar9 + param_2 * 8;
    param_1[2] = (long)(plVar3 + uVar6);
    plVar2 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return plVar4;
    }
  }
  else {
    plVar2 = param_1;
    if (param_2 != 0) {
      plVar2 = plVar3;
      _bzero(plVar3,param_2 << 3);
      plVar3 = plVar3 + param_2;
    }
    param_1[1] = (long)plVar3;
  }
  return plVar2;
}


