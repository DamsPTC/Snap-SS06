/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a7520dc; end: 10a7520ef;  */

void FUN_10a7520dc(void)

{
  func_0x00010a757ec8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7520f0; end: 10a7521e7;  */

undefined8 * FUN_10a7520f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c15ac8;
  FUN_10a5ca2e0(param_1 + 5);
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a7521e8; end: 10a75220f;  */

void FUN_10a7521e8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_SUB_110c162e0;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  return;
}



/* Entry: 10a752210; end: 10a75235b;  */

long FUN_10a752210(long param_1)

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



/* Entry: 10a75235c; end: 10a7528af;  */

/* WARNING: Removing unreachable block (ram,0x00010a752594) */

void FUN_10a75235c(long *param_1,long *param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  char ****ppppcVar3;
  int iVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  long *unaff_x27;
  long *plVar13;
  undefined8 uVar14;
  char ***pppcStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined **ppuStack_1b0;
  long lStack_1a8;
  undefined **ppuStack_1a0;
  uint auStack_198 [14];
  undefined8 uStack_160;
  char cStack_149;
  undefined **appuStack_138 [6];
  undefined8 uStack_108;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  uint uStack_98;
  undefined1 uStack_91;
  undefined1 auStack_90 [8];
  long *plStack_88;
  undefined8 uStack_80;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (param_2 != (long *)0x0) {
    plVar1 = param_1 + 2;
    ppuVar2 = (undefined **)
              (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
    do {
      iVar4 = (int)param_2[8];
      if (iVar4 == 2) {
        if (*(char *)((long)param_2 + 0x3f) < '\0') {
          func_0x000107c3192c(&pppcStack_1d0,param_2[5],param_2[6]);
        }
        else {
          lStack_1c8 = param_2[6];
          pppcStack_1d0 = (char ***)param_2[5];
          uStack_1c0 = param_2[7];
        }
        ppppcVar3 = (char ****)pppcStack_1d0;
        if (-1 < uStack_1c0._7_1_) {
          ppppcVar3 = &pppcStack_1d0;
        }
        if (*(char *)ppppcVar3 == '#') {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                    (auStack_90,&pppcStack_1d0,1,0xffffffffffffffff,&uStack_91);
          uStack_108 = 0;
          appuStack_138[0] =
               &PTR___ZTv0_n24_NSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev_1108df7b0;
          ppuStack_1b0 = &PTR___ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev_1108df788;
          lStack_1a8 = 0;
          __ZNSt3__18ios_base4initEPv(appuStack_138,&ppuStack_1a0);
          uStack_b0 = 0;
          uStack_a8 = 0xffffffff;
          ppuStack_1b0 = &PTR_DAT_1108df718;
          appuStack_138[0] = &PTR_DAT_1108df740;
          FUN_10a197298(&ppuStack_1a0,auStack_90,8);
          *(uint *)((long)&lStack_1a8 + (long)ppuStack_1b0[-3]) =
               *(uint *)((long)&lStack_1a8 + (long)ppuStack_1b0[-3]) & 0xffffffb5 | 8;
          __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERj(&ppuStack_1b0,&uStack_98);
          appuStack_138[0] = &PTR_DAT_1108df740;
          ppuStack_1b0 = &PTR_DAT_1108df718;
          ppuStack_1a0 = &PTR_DAT_11088d7b0;
          if (cStack_149 < '\0') {
            __ZdlPv(uStack_160);
          }
          ppuStack_1a0 = ppuVar2;
          __ZNSt3__16localeD1Ev(auStack_198);
          __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_1b0,&PTR_PTR_1108df758);
          __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_138);
          uVar11 = uStack_98;
          if (uStack_1c0 < 0) {
LAB_10a7525b4:
            __ZdlPv(pppcStack_1d0);
          }
        }
        else {
          uVar11 = 0;
          if (((uint)(int)uStack_1c0._7_1_ >> 7 & 1) != 0) goto LAB_10a7525b4;
        }
      }
      else if (iVar4 == 1) {
        uVar11 = *(uint *)(param_2 + 5);
      }
      else {
        if (iVar4 != 0) {
          FUN_10a0d459c();
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a752800);
          (*pcVar5)();
        }
        uVar14 = NEON_ushl(CONCAT44((int)((float)((ulong)*(undefined8 *)((long)param_2 + 0x2c) >>
                                                 0x20) * 255.0),
                                    (int)((float)*(undefined8 *)((long)param_2 + 0x2c) * 255.0)),
                           0x800000010,4);
        uVar11 = (uint)uVar14 | (int)(*(float *)(param_2 + 5) * 255.0) << 0x18 |
                 (int)(*(float *)((long)param_2 + 0x34) * 255.0) | (uint)((ulong)uVar14 >> 0x20);
      }
      if (*(char *)((long)param_2 + 0x27) < '\0') {
        func_0x000107c3192c(&ppuStack_1b0,param_2[2],param_2[3]);
      }
      else {
        lStack_1a8 = param_2[3];
        ppuStack_1b0 = (undefined **)param_2[2];
        ppuStack_1a0 = (undefined **)param_2[4];
      }
      plVar8 = param_1;
      auStack_198[0] = uVar11;
      func_0x000107c2b05c(param_1,&ppuStack_1b0);
      plVar13 = (long *)param_1[1];
      if (plVar13 != (long *)0x0) {
        uVar12 = (long)plVar13 - 1;
        if (((ulong)plVar13 & uVar12) == 0) {
          unaff_x27 = (long *)(uVar12 & (ulong)plVar8);
        }
        else {
          unaff_x27 = plVar8;
          if (plVar13 <= plVar8) {
            uVar9 = 0;
            if (plVar13 != (long *)0x0) {
              uVar9 = (ulong)plVar8 / (ulong)plVar13;
            }
            unaff_x27 = (long *)((long)plVar8 - uVar9 * (long)plVar13);
          }
        }
        plVar6 = *(long **)(*param_1 + (long)unaff_x27 * 8);
        if (plVar6 != (long *)0x0) {
          for (plVar6 = (long *)*plVar6; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
            plVar7 = (long *)plVar6[1];
            if (plVar7 == plVar8) {
              plVar7 = param_1;
              func_0x000107c2b068(param_1,plVar6 + 2,&ppuStack_1b0);
              if (((ulong)plVar7 & 1) != 0) goto LAB_10a7527bc;
            }
            else {
              if (((ulong)plVar13 & uVar12) == 0) {
                plVar7 = (long *)((ulong)plVar7 & uVar12);
              }
              else if (plVar13 <= plVar7) {
                uVar9 = 0;
                if (plVar13 != (long *)0x0) {
                  uVar9 = (ulong)plVar7 / (ulong)plVar13;
                }
                plVar7 = (long *)((long)plVar7 - uVar9 * (long)plVar13);
              }
              if (plVar7 != unaff_x27) break;
            }
          }
        }
      }
      plVar6 = (long *)0x30;
      __Znwm();
      plStack_88 = param_1;
      uStack_80 = 1;
      *plVar6 = 0;
      plVar6[1] = (long)plVar8;
      plVar6[3] = lStack_1a8;
      plVar6[2] = (long)ppuStack_1b0;
      plVar6[4] = (long)ppuStack_1a0;
      ppuStack_1b0 = (undefined **)0x0;
      lStack_1a8 = 0;
      ppuStack_1a0 = (undefined **)0x0;
      *(uint *)(plVar6 + 5) = auStack_198[0];
      if ((plVar13 == (long *)0x0) ||
         (*(float *)(param_1 + 4) * (float)plVar13 < (float)(param_1[3] + 1))) {
        uVar12 = 1;
        if ((long *)0x2 < plVar13) {
          uVar12 = (ulong)(((ulong)plVar13 & (long)plVar13 - 1U) != 0);
        }
        uVar12 = uVar12 | (long)plVar13 << 1;
        uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
        if (uVar12 <= uVar9) {
          uVar12 = uVar9;
        }
        func_0x0001092afd6c(param_1,uVar12);
        plVar13 = (long *)param_1[1];
        if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
          unaff_x27 = (long *)((long)plVar13 - 1U & (ulong)plVar8);
        }
        else {
          unaff_x27 = plVar8;
          if (plVar13 <= plVar8) {
            uVar12 = 0;
            if (plVar13 != (long *)0x0) {
              uVar12 = (ulong)plVar8 / (ulong)plVar13;
            }
            unaff_x27 = (long *)((long)plVar8 - uVar12 * (long)plVar13);
          }
        }
      }
      lVar10 = *param_1;
      plVar8 = *(long **)(lVar10 + (long)unaff_x27 * 8);
      if (plVar8 == (long *)0x0) {
        *plVar6 = *plVar1;
        *plVar1 = (long)plVar6;
        *(long **)(lVar10 + (long)unaff_x27 * 8) = plVar1;
        if (*plVar6 != 0) {
          plVar8 = *(long **)(*plVar6 + 8);
          if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
            plVar8 = (long *)((ulong)plVar8 & (long)plVar13 - 1U);
          }
          else if (plVar13 <= plVar8) {
            uVar12 = 0;
            if (plVar13 != (long *)0x0) {
              uVar12 = (ulong)plVar8 / (ulong)plVar13;
            }
            plVar8 = (long *)((long)plVar8 - uVar12 * (long)plVar13);
          }
          plVar8 = (long *)(*param_1 + (long)plVar8 * 8);
          goto LAB_10a7527ac;
        }
      }
      else {
        *plVar6 = *plVar8;
LAB_10a7527ac:
        *plVar8 = (long)plVar6;
      }
      param_1[3] = param_1[3] + 1;
LAB_10a7527bc:
      if ((long)ppuStack_1a0 < 0) {
        __ZdlPv(ppuStack_1b0);
      }
      param_2 = (long *)*param_2;
    } while (param_2 != (long *)0x0);
  }
  return;
}



/* Entry: 10a7528b0; end: 10a7528e7;  */

undefined8 * FUN_10a7528b0(undefined8 *param_1)

{
  func_0x0001098ca2e0(param_1 + 3);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a7528e8; end: 10a752a2b;  */

void FUN_10a7528e8(undefined8 *param_1,int *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  int *piVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = param_3[1];
  puVar4 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar4 = param_3;
  }
  piVar2 = param_2;
  func_0x000107c27d5c(param_2,puVar4,uVar1,0);
  if (piVar2 == (int *)0x0) {
    piVar2 = param_2;
    func_0x000107c27d60(param_2,*param_2 + 1);
    if ((int)piVar2 != 0) {
      uVar1 = param_3[1];
      puVar4 = (undefined8 *)*param_3;
      if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
        uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
        puVar4 = param_3;
      }
      func_0x000107c27d5c(param_2,puVar4,uVar1,0);
    }
    piVar2 = param_2;
    func_0x000107c27d64(param_2,0x38);
    lVar3 = *(long *)(param_2 + 6);
    uVar6 = param_3[2];
    uVar7 = *param_3;
    *(undefined8 *)(piVar2 + 4) = param_3[1];
    *(undefined8 *)(piVar2 + 2) = uVar7;
    *(undefined8 *)(piVar2 + 6) = uVar6;
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
    if (lVar3 != 0) {
      func_0x00010b4d8014(lVar3,piVar2 + 2,&UNK_104c611dc);
    }
    lVar3 = *(long *)(param_2 + 6);
    uVar7 = param_4[1];
    uVar6 = *param_4;
    *(undefined8 *)(piVar2 + 0xc) = param_4[2];
    *(undefined8 *)(piVar2 + 10) = uVar7;
    *(undefined8 *)(piVar2 + 8) = uVar6;
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
    if (lVar3 != 0) {
      func_0x00010b4d8014(lVar3,piVar2 + 8,&UNK_104c611dc);
    }
    func_0x000107c27d68(param_2,puVar4,piVar2);
    *param_2 = *param_2 + 1;
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  *param_1 = piVar2;
  param_1[1] = param_2;
  *(int *)(param_1 + 2) = (int)puVar4;
  *(undefined1 *)(param_1 + 3) = uVar5;
  return;
}



/* Entry: 10a752a2c; end: 10a752adb;  */

long * FUN_10a752a2c(long *param_1)

{
  long lVar1;
  
  func_0x00010a752a64(param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a752adc; end: 10a752b2f;  */

void FUN_10a752adc(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110c162f8)[*(uint *)(param_1 + 0x18)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return;
}



/* Entry: 10a752b30; end: 10a752b4b;  */

void FUN_10a752b30(void)

{
  return;
}



/* Entry: 10a752b4c; end: 10a752bcb;  */

void FUN_10a752b4c(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    if (*(char *)(param_2 + 0x27) < '\0') {
      __ZdlPv(*(undefined8 *)(param_2 + 0x10));
    }
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10a752bcc; end: 10a7542fb;  */

/* WARNING: Removing unreachable block (ram,0x00010a753068) */
/* WARNING: Removing unreachable block (ram,0x00010a752d9c) */
/* WARNING: Removing unreachable block (ram,0x00010a753df4) */
/* WARNING: Removing unreachable block (ram,0x00010a753b00) */
/* WARNING: Removing unreachable block (ram,0x00010a753e2c) */
/* WARNING: Removing unreachable block (ram,0x00010a753058) */
/* WARNING: Removing unreachable block (ram,0x00010a754018) */
/* WARNING: Type propagation algorithm not settling */

undefined8 ****** FUN_10a752bcc(undefined8 ******param_1)

{
  undefined8 **ppuVar1;
  uint uVar2;
  short *psVar3;
  undefined4 uVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  undefined8 *****pppppuVar8;
  ulong uVar9;
  code *pcVar10;
  undefined8 *******pppppppuVar11;
  undefined8 *******pppppppuVar12;
  undefined8 ****ppppuVar13;
  undefined8 *******pppppppuVar14;
  undefined8 *******pppppppuVar15;
  undefined8 ***pppuVar16;
  undefined8 ***pppuVar17;
  undefined ********ppppppppuVar18;
  undefined8 *puVar19;
  undefined8 ******ppppppuVar20;
  int iVar21;
  undefined4 *puVar22;
  undefined8 ******ppppppuVar23;
  undefined8 ****ppppuVar24;
  undefined8 uVar25;
  uint uVar26;
  undefined8 ****ppppuVar27;
  undefined8 **ppuVar28;
  undefined8 ******ppppppuVar29;
  undefined8 *puVar30;
  undefined1 uVar31;
  undefined8 ***pppuVar32;
  undefined8 ***pppuVar33;
  undefined8 ***pppuVar34;
  undefined8 *****pppppuVar35;
  undefined8 ******ppppppuStack_228;
  undefined7 uStack_220;
  undefined1 uStack_219;
  undefined7 uStack_218;
  undefined1 uStack_211;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 uStack_1e0;
  undefined1 uStack_1d8;
  undefined8 ******ppppppuStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 ***pppuStack_168;
  undefined7 uStack_160;
  byte bStack_159;
  undefined8 *******pppppppuStack_158;
  undefined8 **ppuStack_150;
  undefined8 uStack_148;
  undefined ********ppppppppuStack_140;
  undefined8 ****ppppuStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 ****ppppuStack_120;
  undefined8 ****ppppuStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 ***pppuStack_e8;
  undefined8 ***pppuStack_e0;
  undefined8 *******pppppppuStack_d8;
  undefined8 ***pppuStack_d0;
  undefined8 uStack_c8;
  char cStack_c0;
  undefined8 *******pppppppuStack_b0;
  undefined8 *******pppppppuStack_a8;
  undefined8 uStack_a0;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (((ulong)param_1[3] & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x10a753094);
    (*pcVar10)();
  }
  ppppppuVar29 = (undefined8 ******)param_1[4];
  param_1[4] = (undefined8 *****)0x0;
  pppppuVar35 = *param_1;
  ppppuVar27 = pppppuVar35[10];
  ppppppuStack_1d0 = ppppppuVar29;
  if (*(int *)(ppppuVar27 + 10) == 1) {
    func_0x000107c2b054(&ppppppppuStack_140,"default");
    pppuVar34 = pppppuVar35[10][0xb];
    pppuVar17 = pppppuVar35[10][0xc];
    if (pppuVar17 != (undefined8 ***)0x0) {
      pppuVar16 = pppuVar17 + 1;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pppuVar16,0x10);
        if (bVar7) {
          *pppuVar16 = (undefined8 **)((long)*pppuVar16 + 1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    if ((pppuVar34 != (undefined8 ***)0x0) && (*(char *)(pppuVar34 + 3) == '\x01')) {
      if ((long)uStack_130 < 0) {
        ppppuStack_138 = (undefined8 ****)0x5;
        ppppppppuVar18 = ppppppppuStack_140;
      }
      else {
        uStack_130 = (undefined8 ****)CONCAT17(5,(undefined7)uStack_130);
        ppppppppuVar18 = (undefined ********)&ppppppppuStack_140;
      }
      *(undefined4 *)ppppppppuVar18 = 0x76616568;
      *(undefined2 *)((long)ppppppppuVar18 + 4) = 0x79;
    }
    if (pppuVar17 != (undefined8 ***)0x0) {
      pppuVar34 = pppuVar17 + 1;
      do {
        ppuVar28 = *pppuVar34;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pppuVar34,0x10);
        if (bVar7) {
          *pppuVar34 = (undefined8 **)((long)ppuVar28 + -1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (ppuVar28 == (undefined8 **)0x0) {
        (*(code *)(*pppuVar17)[2])(pppuVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar17);
      }
    }
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (&pppppppuStack_b0,&UNK_10f6726fd,pppppuVar35 + 7);
    FUN_10a74433c(&pppppppuStack_d8,pppppuVar35[10][7]);
    pppuVar34 = pppuStack_d0;
    if (-1 < (long)uStack_c8) {
      pppuVar34 = (undefined8 ***)(uStack_c8 >> 0x38);
    }
    if (pppuVar34 != (undefined8 ***)0x0) {
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (&pppppppuStack_158,&DAT_10f2e8297,&pppppppuStack_d8);
      ppuVar28 = ppuStack_150;
      pppppppuVar11 = pppppppuStack_158;
      if (-1 < (long)uStack_148) {
        ppuVar28 = (undefined8 **)(uStack_148 >> 0x38);
        pppppppuVar11 = &pppppppuStack_158;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&pppppppuStack_b0,pppppppuVar11,ppuVar28);
      if ((long)uStack_148 < 0) {
        __ZdlPv(pppppppuStack_158);
      }
    }
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (&pppppppuStack_158,&UNK_10f672707,&ppppppppuStack_140);
    pppppppuVar11 = pppppppuStack_158;
    if (-1 < (long)uStack_148) {
      ppuStack_150 = (undefined8 **)(ulong)uStack_148._7_1_;
      pppppppuVar11 = &pppppppuStack_158;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&pppppppuStack_b0,pppppppuVar11,ppuStack_150);
    if ((char)uStack_148._7_1_ < '\0') {
      __ZdlPv(pppppppuStack_158);
    }
    pppppppuVar14 = (undefined8 *******)0x28;
    __Znwm();
    uStack_148 = 0x8000000000000028;
    ppuStack_150 = (undefined8 **)0x26;
    pppppppuVar14[1] = (undefined8 ******)0x63732e74732d6663;
    *pppppppuVar14 = (undefined8 ******)0x2f2f3a7370747468;
    pppppppuVar14[3] = (undefined8 ******)0x6d696e612f64332f;
    pppppppuVar14[2] = (undefined8 ******)0x74656e2e6e64632d;
    *(undefined8 *)((long)pppppppuVar14 + 0x1e) = 0x2f6e6f6974616d69;
    *(undefined1 *)((long)pppppppuVar14 + 0x26) = 0;
    pppppppuVar11 = pppppppuStack_a8;
    pppppppuVar12 = pppppppuStack_b0;
    if (-1 < (long)uStack_a0) {
      pppppppuVar11 = (undefined8 *******)((ulong)uStack_a0 >> 0x38);
      pppppppuVar12 = &pppppppuStack_b0;
    }
    pppppppuVar15 = &pppppppuStack_158;
    pppppppuStack_158 = pppppppuVar14;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppppppuVar15,pppppppuVar12,pppppppuVar11);
    ppppppuVar20 = *pppppppuVar15;
    uStack_88 = SUB87(pppppppuVar15[1],0);
    uStack_81 = (undefined1)*(undefined8 *)((long)pppppppuVar15 + 0xf);
    uStack_80 = (undefined7)((ulong)*(undefined8 *)((long)pppppppuVar15 + 0xf) >> 8);
    uVar31 = *(undefined1 *)((long)pppppppuVar15 + 0x17);
    pppppppuVar15[1] = (undefined8 ******)0x0;
    pppppppuVar15[2] = (undefined8 ******)0x0;
    *pppppppuVar15 = (undefined8 ******)0x0;
    if ((long)uStack_148 < 0) {
      __ZdlPv(pppppppuStack_158);
    }
  }
  else {
    if (*(int *)(ppppuVar27 + 10) == 2) {
      pppuVar34 = ppppuVar27[0xd];
      pppuStack_e0 = ppppuVar27[0xe];
      if (pppuStack_e0 != (undefined8 ***)0x0) {
        pppuVar17 = pppuStack_e0 + 1;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pppuVar17,0x10);
          if (bVar7) {
            *pppuVar17 = (undefined8 **)((long)*pppuVar17 + 1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      uStack_130 = (undefined8 ****)0x0;
      ppppuStack_138 = (undefined8 ****)0x0;
      ppppppppuStack_140 = (undefined ********)&PTR_DAT_110b18e60;
      puStack_128 = &DAT_11383d918;
      ppppuStack_118 = (undefined8 ****)0x0;
      ppppuStack_120 = (undefined8 ****)0x0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_f0 = 0;
      uVar26 = *(uint *)(pppuVar34 + 4);
      pppuStack_e8 = pppuVar34;
      if (uVar26 < 0xf) {
LAB_10a752ca8:
        uStack_108 = (ulong)uVar26;
        ppppuVar27 = (undefined8 ****)0x0;
      }
      else {
        if ((bRam000000011330a9e8 & 1) == 0) {
          uVar26 = 0;
          goto LAB_10a752ca8;
        }
        func_0x00010ae06f08(0,1,&UNK_10f672606,&UNK_10f673bdf,0xf8,&UNK_10f673c82);
        uStack_108 = uStack_108 & 0xffffffff00000000;
        ppppuVar27 = ppppuStack_138;
        if (((ulong)ppppuStack_138 & 1) != 0) {
          ppppuVar27 = *(undefined8 *****)((ulong)ppppuStack_138 & 0xfffffffffffffffe);
        }
      }
      func_0x00010b4bf088(&puStack_128,&UNK_10f672059,0,ppppuVar27);
      uStack_f8 = CONCAT44(uStack_f8._4_4_,2);
      uStack_100 = CONCAT44(uStack_100._4_4_,0x1010001);
      ppppuVar13 = (undefined8 ****)0x18;
      __Znwm();
      ppppuVar27 = ppppuStack_118;
      *ppppuVar13 = (undefined8 ***)&PTR_DAT_110b18e10;
      ppppuVar13[1] = (undefined8 ***)0x0;
      *(undefined4 *)((long)ppppuVar13 + 0x14) = 0;
      *(undefined2 *)(ppppuVar13 + 2) = 1;
      if (((ulong)ppppuStack_138 & 1) == 0) {
        ppppuVar24 = ppppuStack_138;
        if (ppppuStack_138 != (undefined8 ****)0x0) goto LAB_10a752ea4;
LAB_10a7530a0:
        if (ppppuStack_118 == (undefined8 ****)0x0) goto LAB_10a752ea4;
        if ((*(byte *)((long)ppppuStack_118 + 8) & 1) != 0) {
          func_0x0001053936ac();
        }
        __ZdlPv(ppppuVar27);
        ppppuVar27 = (undefined8 ****)ppppuVar13[1];
        if (((ulong)ppppuVar27 & 1) != 0) {
          ppppuVar27 = *(undefined8 *****)((ulong)ppppuVar27 & 0xfffffffffffffffe);
        }
      }
      else {
        ppppuVar24 = *(undefined8 *****)((ulong)ppppuStack_138 & 0xfffffffffffffffe);
        if (ppppuVar24 == (undefined8 ****)0x0) goto LAB_10a7530a0;
LAB_10a752ea4:
        ppppuVar27 = (undefined8 ****)0x0;
      }
      if (ppppuVar24 != ppppuVar27) {
        func_0x00010b4cf42c(ppppuVar24,ppppuVar13);
        ppppuVar13 = ppppuVar24;
      }
      uStack_130 = (undefined8 ****)((ulong)uStack_130 | 2);
      ppppuVar27 = (undefined8 ****)0x150;
      ppppuStack_118 = ppppuVar13;
      __Znwm();
      *ppppuVar27 = (undefined8 ***)&PTR_DAT_110b18798;
      ppppuVar27[1] = (undefined8 ***)0x0;
      func_0x0001098cae20();
      pppuVar16 = (undefined8 ***)0x18;
      __Znwm();
      pppuVar16[2] = (undefined8 **)0x0;
      pppuVar16[1] = (undefined8 **)0x0;
      *pppuVar16 = (undefined8 **)&PTR_DAT_110b18608;
      pppuVar17 = (undefined8 ***)0x18;
      __Znwm();
      pppuVar17[2] = (undefined8 **)0x0;
      pppuVar17[1] = (undefined8 **)0x0;
      *pppuVar17 = (undefined8 **)&PTR_DAT_110b185b8;
      uVar26 = (uint)*(ushort *)((long)pppuVar34 + 0x1a) &
               (int)((uint)*(ushort *)((long)pppuVar34 + 0x1a) << 0x17) >> 0x1f;
      if (((uVar26 & 0xff) < 0x13) && ((0x7ffafU >> (ulong)(uVar26 & 0x1f) & 1) != 0)) {
        *(undefined4 *)(pppuVar16 + 2) =
             *(undefined4 *)(&UNK_10e4d96c0 + ((ulong)uVar26 & 0xff) * 4);
      }
      else if ((bRam000000011330a9e8 & 1) != 0) {
        func_0x00010ae06f08(0,1,&UNK_10f672606,&UNK_10f673cab,0xab,&UNK_10f673d44);
      }
      uVar26 = (uint)*(ushort *)((long)pppuVar34 + 0x1c) &
               (int)((uint)*(ushort *)((long)pppuVar34 + 0x1c) << 0x17) >> 0x1f & 0xff;
      if (((uVar26 == 0) || (uVar26 == 3)) || (uVar26 == 1)) {
        *(uint *)(pppuVar17 + 2) = uVar26;
      }
      else if ((bRam000000011330a9e8 & 1) != 0) {
        func_0x00010ae06f08(0,1,&UNK_10f672606,&UNK_10f673d6a,0xbc,&UNK_10f673e09);
      }
      pppuVar32 = ppppuVar27[1];
      if (((ulong)pppuVar32 & 1) != 0) {
        pppuVar32 = *(undefined8 ****)((ulong)pppuVar32 & 0xfffffffffffffffe);
      }
      if ((pppuVar32 == (undefined8 ***)0x0) &&
         (pppuVar33 = ppppuVar27[0x24], pppuVar33 != (undefined8 ***)0x0)) {
        if (((ulong)pppuVar33[1] & 1) != 0) {
          func_0x0001053936ac();
        }
        __ZdlPv(pppuVar33);
      }
      pppuVar33 = (undefined8 ***)pppuVar16[1];
      if (((ulong)pppuVar33 & 1) != 0) {
        pppuVar33 = *(undefined8 ****)((ulong)pppuVar33 & 0xfffffffffffffffe);
      }
      if (pppuVar32 != pppuVar33) {
        func_0x00010b4cf42c(pppuVar32,pppuVar16);
        pppuVar16 = pppuVar32;
      }
      *(uint *)(ppppuVar27 + 2) = *(uint *)(ppppuVar27 + 2) | 1;
      ppppuVar27[0x24] = pppuVar16;
      pppuVar16 = ppppuVar27[1];
      if (((ulong)pppuVar16 & 1) != 0) {
        pppuVar16 = *(undefined8 ****)((ulong)pppuVar16 & 0xfffffffffffffffe);
      }
      if ((pppuVar16 == (undefined8 ***)0x0) &&
         (pppuVar32 = ppppuVar27[0x25], pppuVar32 != (undefined8 ***)0x0)) {
        if (((ulong)pppuVar32[1] & 1) != 0) {
          func_0x0001053936ac();
        }
        __ZdlPv(pppuVar32);
      }
      pppuVar32 = (undefined8 ***)pppuVar17[1];
      if (((ulong)pppuVar32 & 1) != 0) {
        pppuVar32 = *(undefined8 ****)((ulong)pppuVar32 & 0xfffffffffffffffe);
      }
      if (pppuVar16 != pppuVar32) {
        func_0x00010b4cf42c(pppuVar16,pppuVar17);
        pppuVar17 = pppuVar16;
      }
      *(uint *)(ppppuVar27 + 2) = *(uint *)(ppppuVar27 + 2) | 2;
      ppppuVar27[0x25] = pppuVar17;
      uVar26 = (uint)*(ushort *)(pppuVar34 + 3) &
               (int)((uint)*(ushort *)(pppuVar34 + 3) << 0x17) >> 0x1f & 0xff;
      uVar2 = uVar26;
      if (uVar26 != 2) {
        uVar2 = 0;
      }
      if (uVar26 == 1) {
        uVar2 = 1;
      }
      *(uint *)(ppppuVar27 + 0x27) = uVar2;
      uVar26 = (uint)*(byte *)((long)pppuVar34 + 0x1e);
      if (4 < *(byte *)((long)pppuVar34 + 0x1e)) {
        if ((bRam000000011330a9e8 & 1) != 0) {
          func_0x00010ae06f08(0,1,&UNK_10f672606,&UNK_10f673e31,0xd1,&UNK_10f673ed2);
        }
        uVar26 = 0;
      }
      *(uint *)((long)ppppuVar27 + 0x13c) = uVar26;
      uStack_a0 = (undefined8 ******)CONCAT17(3,(undefined7)uStack_a0);
      pppppppuStack_b0 = (undefined8 *******)CONCAT44(pppppppuStack_b0._4_4_,0x706f74);
      pppppppuStack_d8 = (undefined8 *******)((ulong)pppppppuStack_d8 & 0xffffffffffffff00);
      uVar9 = uStack_c8 >> 8;
      uStack_c8 = uStack_c8 & 0xffffffffffffff00;
      bVar5 = *(byte *)(pppuVar34 + 7);
      if ((bVar5 & 1) == 0) {
        uVar25 = 0;
      }
      else {
        pppppppuStack_d8 = (undefined8 *******)pppuVar34[5];
        pppuVar17 = (undefined8 ***)pppuVar34[6];
        if (pppuVar17 != (undefined8 ***)0x0) {
          pppuVar34 = pppuVar17 + 1;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pppuVar34,0x10);
            if (bVar7) {
              *pppuVar34 = (undefined8 **)((long)*pppuVar34 + 1);
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        uVar25 = 1;
        uStack_c8 = CONCAT71((int7)uVar9,1);
        pppuStack_d0 = pppuVar17;
      }
      FUN_10a7435fc(ppppuVar27 + 0xf,ppppuVar27 + 0x17,&pppppppuStack_b0,pppppppuStack_d8,uVar25);
      if ((pppuVar17 != (undefined8 ***)0x0) && (bVar5 != 0)) {
        pppuVar34 = pppuVar17 + 1;
        do {
          ppuVar28 = *pppuVar34;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pppuVar34,0x10);
          if (bVar7) {
            *pppuVar34 = (undefined8 **)((long)ppuVar28 + -1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (ppuVar28 == (undefined8 **)0x0) {
          (*(code *)(*pppuVar17)[2])(pppuVar17);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar17);
        }
      }
      uStack_a0 = (undefined8 ******)CONCAT17(9,(undefined7)uStack_a0);
      pppppppuStack_b0 = (undefined8 *******)0x616577726574756f;
      pppppppuStack_a8 = (undefined8 *******)CONCAT62(pppppppuStack_a8._2_6_,0x72);
      pppppppuStack_d8 = (undefined8 *******)((ulong)pppppppuStack_d8 & 0xffffffffffffff00);
      uVar9 = uStack_c8 >> 8;
      uStack_c8 = uStack_c8 & 0xffffffffffffff00;
      bVar5 = *(byte *)(pppuStack_e8 + 10);
      if ((bVar5 & 1) == 0) {
        uVar25 = 0;
      }
      else {
        pppppppuStack_d8 = (undefined8 *******)pppuStack_e8[8];
        pppuStack_d0 = (undefined8 ***)pppuStack_e8[9];
        if (pppuStack_d0 != (undefined8 ***)0x0) {
          pppuVar34 = pppuStack_d0 + 1;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pppuVar34,0x10);
            if (bVar7) {
              *pppuVar34 = (undefined8 **)((long)*pppuVar34 + 1);
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        uVar25 = 1;
        uStack_c8 = CONCAT71((int7)uVar9,1);
      }
      FUN_10a7435fc(ppppuVar27 + 0xf,ppppuVar27 + 0x17,&pppppppuStack_b0,pppppppuStack_d8,uVar25);
      pppuVar34 = pppuStack_d0;
      if ((bVar5 != 0) && (pppuStack_d0 != (undefined8 ***)0x0)) {
        pppuVar17 = pppuStack_d0 + 1;
        do {
          ppuVar28 = *pppuVar17;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pppuVar17,0x10);
          if (bVar7) {
            *pppuVar17 = (undefined8 **)((long)ppuVar28 + -1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (ppuVar28 == (undefined8 **)0x0) {
          (*(code *)(*pppuStack_d0)[2])(pppuStack_d0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar34);
        }
      }
      uStack_a0 = (undefined8 ******)CONCAT17(6,(undefined7)uStack_a0);
      pppppppuStack_b0 = (undefined8 *******)CONCAT17(pppppppuStack_b0._7_1_,0x6d6f74746f62);
      pppppppuStack_d8 = (undefined8 *******)((ulong)pppppppuStack_d8 & 0xffffffffffffff00);
      uVar9 = uStack_c8 >> 8;
      uStack_c8 = uStack_c8 & 0xffffffffffffff00;
      bVar5 = *(byte *)(pppuStack_e8 + 0xd);
      if ((bVar5 & 1) == 0) {
        uVar25 = 0;
      }
      else {
        pppppppuStack_d8 = (undefined8 *******)pppuStack_e8[0xb];
        pppuStack_d0 = (undefined8 ***)pppuStack_e8[0xc];
        if (pppuStack_d0 != (undefined8 ***)0x0) {
          pppuVar34 = pppuStack_d0 + 1;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pppuVar34,0x10);
            if (bVar7) {
              *pppuVar34 = (undefined8 **)((long)*pppuVar34 + 1);
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        uVar25 = 1;
        uStack_c8 = CONCAT71((int7)uVar9,1);
      }
      FUN_10a7435fc(ppppuVar27 + 0xf,ppppuVar27 + 0x17,&pppppppuStack_b0,pppppppuStack_d8,uVar25);
      pppuVar34 = pppuStack_d0;
      if ((bVar5 != 0) && (pppuStack_d0 != (undefined8 ***)0x0)) {
        pppuVar17 = pppuStack_d0 + 1;
        do {
          ppuVar28 = *pppuVar17;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pppuVar17,0x10);
          if (bVar7) {
            *pppuVar17 = (undefined8 **)((long)ppuVar28 + -1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (ppuVar28 == (undefined8 **)0x0) {
          (*(code *)(*pppuStack_d0)[2])(pppuStack_d0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar34);
        }
      }
      uStack_a0 = (undefined8 ******)CONCAT17(8,(undefined7)uStack_a0);
      pppppppuStack_b0 = (undefined8 *******)0x72616577746f6f66;
      pppppppuStack_a8 = (undefined8 *******)((ulong)pppppppuStack_a8 & 0xffffffffffffff00);
      pppppppuStack_d8 = (undefined8 *******)((ulong)pppppppuStack_d8 & 0xffffffffffffff00);
      uVar9 = uStack_c8 >> 8;
      uStack_c8 = uStack_c8 & 0xffffffffffffff00;
      bVar5 = *(byte *)(pppuStack_e8 + 0x10);
      if ((bVar5 & 1) == 0) {
        uVar25 = 0;
      }
      else {
        pppppppuStack_d8 = (undefined8 *******)pppuStack_e8[0xe];
        pppuStack_d0 = (undefined8 ***)pppuStack_e8[0xf];
        if (pppuStack_d0 != (undefined8 ***)0x0) {
          pppuVar34 = pppuStack_d0 + 1;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pppuVar34,0x10);
            if (bVar7) {
              *pppuVar34 = (undefined8 **)((long)*pppuVar34 + 1);
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        uVar25 = 1;
        uStack_c8 = CONCAT71((int7)uVar9,1);
      }
      FUN_10a7435fc(ppppuVar27 + 0xf,ppppuVar27 + 0x17,&pppppppuStack_b0,pppppppuStack_d8,uVar25);
      pppuVar34 = pppuStack_d0;
      if ((bVar5 != 0) && (pppuStack_d0 != (undefined8 ***)0x0)) {
        pppuVar17 = pppuStack_d0 + 1;
        do {
          ppuVar28 = *pppuVar17;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pppuVar17,0x10);
          if (bVar7) {
            *pppuVar17 = (undefined8 **)((long)ppuVar28 + -1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (ppuVar28 == (undefined8 **)0x0) {
          (*(code *)(*pppuStack_d0)[2])(pppuStack_d0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar34);
        }
      }
      uStack_a0 = (undefined8 ******)CONCAT17(4,(undefined7)uStack_a0);
      pppppppuStack_b0 = (undefined8 *******)CONCAT35(pppppppuStack_b0._5_3_,0x6b636f73);
      pppppppuStack_d8 = (undefined8 *******)((ulong)pppppppuStack_d8 & 0xffffffffffffff00);
      uVar9 = uStack_c8 >> 8;
      uStack_c8 = uStack_c8 & 0xffffffffffffff00;
      bVar5 = *(byte *)(pppuStack_e8 + 0x13);
      if ((bVar5 & 1) == 0) {
        uVar25 = 0;
      }
      else {
        pppppppuStack_d8 = (undefined8 *******)pppuStack_e8[0x11];
        pppuStack_d0 = (undefined8 ***)pppuStack_e8[0x12];
        if (pppuStack_d0 != (undefined8 ***)0x0) {
          pppuVar34 = pppuStack_d0 + 1;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pppuVar34,0x10);
            if (bVar7) {
              *pppuVar34 = (undefined8 **)((long)*pppuVar34 + 1);
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        uVar25 = 1;
        uStack_c8 = CONCAT71((int7)uVar9,1);
      }
      FUN_10a7435fc(ppppuVar27 + 0xf,ppppuVar27 + 0x17,&pppppppuStack_b0,pppppppuStack_d8,uVar25);
      pppuVar34 = pppuStack_d0;
      if ((bVar5 != 0) && (pppuStack_d0 != (undefined8 ***)0x0)) {
        pppuVar17 = pppuStack_d0 + 1;
        do {
          ppuVar28 = *pppuVar17;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pppuVar17,0x10);
          if (bVar7) {
            *pppuVar17 = (undefined8 **)((long)ppuVar28 + -1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (ppuVar28 == (undefined8 **)0x0) {
          (*(code *)(*pppuStack_d0)[2])(pppuStack_d0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar34);
        }
      }
      uStack_a0 = (undefined8 ******)CONCAT17(3,(undefined7)uStack_a0);
      pppppppuStack_b0 = (undefined8 *******)CONCAT44(pppppppuStack_b0._4_4_,0x676162);
      pppppppuStack_d8 = (undefined8 *******)((ulong)pppppppuStack_d8 & 0xffffffffffffff00);
      uVar9 = uStack_c8 >> 8;
      uStack_c8 = uStack_c8 & 0xffffffffffffff00;
      bVar5 = *(byte *)(pppuStack_e8 + 0x16);
      if ((bVar5 & 1) == 0) {
        uVar25 = 0;
      }
      else {
        pppppppuStack_d8 = (undefined8 *******)pppuStack_e8[0x14];
        pppuStack_d0 = (undefined8 ***)pppuStack_e8[0x15];
        if (pppuStack_d0 != (undefined8 ***)0x0) {
          pppuVar34 = pppuStack_d0 + 1;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pppuVar34,0x10);
            if (bVar7) {
              *pppuVar34 = (undefined8 **)((long)*pppuVar34 + 1);
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        uVar25 = 1;
        uStack_c8 = CONCAT71((int7)uVar9,1);
      }
      FUN_10a7435fc(ppppuVar27 + 0xf,ppppuVar27 + 0x17,&pppppppuStack_b0,pppppppuStack_d8,uVar25);
      pppuVar34 = pppuStack_d0;
      if ((bVar5 != 0) && (pppuStack_d0 != (undefined8 ***)0x0)) {
        pppuVar17 = pppuStack_d0 + 1;
        do {
          ppuVar28 = *pppuVar17;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pppuVar17,0x10);
          if (bVar7) {
            *pppuVar17 = (undefined8 **)((long)ppuVar28 + -1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (ppuVar28 == (undefined8 **)0x0) {
          (*(code *)(*pppuStack_d0)[2])(pppuStack_d0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar34);
        }
      }
      pppuVar34 = pppuStack_e8;
      pppppppuStack_158 = (undefined8 *******)((ulong)pppppppuStack_158 & 0xffffffffffffff00);
      uVar9 = uStack_148 >> 8;
      uStack_148 = uStack_148 & 0xffffffffffffff00;
      if (*(char *)(pppuStack_e8 + 0x19) == '\x01') {
        pppppppuVar11 = (undefined8 *******)pppuStack_e8[0x17];
        ppuStack_150 = pppuStack_e8[0x18];
        if (ppuStack_150 != (undefined8 **)0x0) {
          ppuVar28 = ppuStack_150 + 1;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(ppuVar28,0x10);
            if (bVar7) {
              *ppuVar28 = (undefined8 *)((long)*ppuVar28 + 1);
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        uStack_148 = CONCAT71((int7)uVar9,1);
        pppppppuStack_158 = pppppppuVar11;
        if (pppppppuVar11 != (undefined8 *******)0x0) {
          if (*(char *)((long)pppppppuVar11 + 0x2f) < '\0') {
            func_0x000107c3192c(&pppppppuStack_b0,pppppppuVar11[3],pppppppuVar11[4]);
          }
          else {
            pppppppuStack_a8 = (undefined8 *******)pppppppuVar11[4];
            pppppppuStack_b0 = (undefined8 *******)pppppppuVar11[3];
            uStack_a0 = pppppppuVar11[5];
          }
          pppppppuVar12 = pppppppuStack_a8;
          if (-1 < (long)uStack_a0) {
            pppppppuVar12 = (undefined8 *******)(long)uStack_a0._7_1_;
          }
          if ((long)uStack_a0._7_1_ < 0) {
            __ZdlPv(pppppppuStack_b0);
          }
          if (pppppppuVar12 != (undefined8 *******)0x0) {
            bStack_159 = 3;
            uStack_170 = 0x746168;
            if (*(char *)((long)pppppppuVar11 + 0x2f) < '\0') {
              func_0x000107c3192c(&pppppppuStack_b0,pppppppuVar11[3],pppppppuVar11[4]);
              uVar26 = (uint)bStack_159;
            }
            else {
              pppppppuStack_a8 = (undefined8 *******)pppppppuVar11[4];
              pppppppuStack_b0 = (undefined8 *******)pppppppuVar11[3];
              uStack_a0 = pppppppuVar11[5];
              uVar26 = 3;
            }
            pppuVar17 = pppuStack_168;
            puVar22 = (undefined4 *)CONCAT44(uStack_16c,uStack_170);
            if (-1 < (char)uVar26) {
              pppuVar17 = (undefined8 ***)(ulong)uVar26;
              puVar22 = &uStack_170;
            }
            ppppuVar13 = ppppuVar27 + 3;
            func_0x000107c27d5c(ppppuVar13,puVar22,pppuVar17,0);
            if (ppppuVar13 == (undefined8 ****)0x0) {
              ppppuVar13 = ppppuVar27 + 3;
              func_0x000107c27d60(ppppuVar13,*(int *)(ppppuVar27 + 3) + 1);
              if ((int)ppppuVar13 != 0) {
                pppuVar17 = pppuStack_168;
                puVar22 = (undefined4 *)CONCAT44(uStack_16c,uStack_170);
                if (-1 < (char)bStack_159) {
                  pppuVar17 = (undefined8 ***)(ulong)bStack_159;
                  puVar22 = &uStack_170;
                }
                func_0x000107c27d5c(ppppuVar27 + 3,puVar22,pppuVar17,0);
              }
              ppppuVar13 = ppppuVar27 + 3;
              func_0x000107c27d64(ppppuVar13,0x38);
              pppuVar17 = ppppuVar27[6];
              if ((char)bStack_159 < '\0') {
                func_0x000107c3192c(ppppuVar13 + 1,CONCAT44(uStack_16c,uStack_170),pppuStack_168);
              }
              else {
                ppppuVar13[3] = (undefined8 ***)CONCAT17(bStack_159,uStack_160);
                ppppuVar13[2] = pppuStack_168;
                ppppuVar13[1] = (undefined8 ***)CONCAT44(uStack_16c,uStack_170);
              }
              if (pppuVar17 != (undefined8 ***)0x0) {
                func_0x00010b4d8014(pppuVar17,ppppuVar13 + 1,&UNK_104c611dc);
              }
              pppuVar17 = ppppuVar27[6];
              ppppuVar13[4] = (undefined8 ***)0x0;
              ppppuVar13[5] = (undefined8 ***)0x0;
              ppppuVar13[6] = (undefined8 ***)0x0;
              if (pppuVar17 != (undefined8 ***)0x0) {
                func_0x00010b4d8014(pppuVar17,ppppuVar13 + 4,&UNK_104c611dc);
              }
              func_0x000107c27d68(ppppuVar27 + 3,puVar22,ppppuVar13);
              *(int *)(ppppuVar27 + 3) = *(int *)(ppppuVar27 + 3) + 1;
            }
            if (*(char *)((long)ppppuVar13 + 0x37) < '\0') {
              __ZdlPv(ppppuVar13[4]);
            }
            ppppuVar13[5] = pppppppuStack_a8;
            ppppuVar13[4] = pppppppuStack_b0;
            ppppuVar13[6] = uStack_a0;
            FUN_10a75e828(&pppppppuStack_d8,pppppppuVar11 + 6);
            FUN_10a75235c(&pppppppuStack_b0,uStack_c8);
            func_0x00010a752a64(uStack_c8);
            pppppppuVar11 = pppppppuStack_d8;
            pppppppuStack_d8 = (undefined8 *******)0x0;
            if (pppppppuVar11 != (undefined8 *******)0x0) {
              __ZdlPv();
            }
            uStack_c8 = CONCAT17(3,(undefined7)uStack_c8);
            pppppppuStack_d8 = (undefined8 *******)CONCAT53(pppppppuStack_d8._3_5_,0x746168);
            pppuVar17 = pppuStack_168;
            if (-1 < (char)bStack_159) {
              pppuVar17 = (undefined8 ***)(ulong)bStack_159;
            }
            if (pppuVar17 == (undefined8 ***)0x3) {
              psVar3 = (short *)CONCAT44(uStack_16c,uStack_170);
              if (-1 < (char)bStack_159) {
                psVar3 = (short *)&uStack_170;
              }
              ppppppuVar20 = uStack_a0;
              if (*psVar3 == 0x6168 && (char)psVar3[1] == 't') {
                for (; ppppppuVar20 != (undefined8 ******)0x0;
                    ppppppuVar20 = (undefined8 ******)*ppppppuVar20) {
                  uVar4 = *(undefined4 *)(ppppppuVar20 + 5);
                  func_0x0001098cc960(&pppppppuStack_d8,ppppuVar27 + 7,ppppppuVar20 + 2);
                  *(undefined4 *)(pppppppuStack_d8 + 4) = uVar4;
                  pppuVar34 = pppuStack_e8;
                }
              }
            }
            func_0x0001092b0b8c(&pppppppuStack_b0);
            FUN_10a1ccb30(&pppppppuStack_d8,pppuVar34 + 0x1a);
            if (cStack_c0 == '\x01') {
              pppuVar34 = pppuStack_d0;
              if (-1 < (long)uStack_c8) {
                pppuVar34 = (undefined8 ***)(uStack_c8 >> 0x38);
              }
              if (pppuVar34 == (undefined8 ***)0x0) goto LAB_10a753ab8;
              uStack_180 = (undefined8 *)CONCAT17(7,(undefined7)uStack_180);
              puStack_190 = (undefined8 *)0x6d75696e617263;
              FUN_10a75f7cc(&pppppppuStack_b0,ppppuVar27 + 3,&puStack_190);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                        (pppppppuStack_b0 + 4,&pppppppuStack_d8);
              if ((long)uStack_180 < 0) {
                __ZdlPv(puStack_190);
              }
            }
            else {
LAB_10a753ab8:
              if ((bRam000000011330a9e8 & 1) != 0) {
                func_0x00010ae06f08(0,1,&UNK_10f672606,&UNK_10f672649,0x1aa,&UNK_10f6726a6);
              }
            }
            pppuVar34 = pppuStack_e8;
            if ((char)bStack_159 < '\0') {
              __ZdlPv(CONCAT44(uStack_16c,uStack_170));
              pppuVar34 = pppuStack_e8;
            }
          }
        }
      }
      FUN_10a1ccb30(&pppppppuStack_d8,pppuVar34 + 0x1e);
      if (cStack_c0 == '\x01') {
        pppuVar34 = pppuStack_d0;
        if (-1 < (long)uStack_c8) {
          pppuVar34 = (undefined8 ***)(uStack_c8 >> 0x38);
        }
        if (pppuVar34 != (undefined8 ***)0x0) {
          bStack_159 = 7;
          uStack_170 = 0x73616c67;
          uStack_16c = 0x736573;
          FUN_10a75f7cc(&pppppppuStack_b0,ppppuVar27 + 3,&uStack_170);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (pppppppuStack_b0 + 4,&pppppppuStack_d8);
          if ((char)bStack_159 < '\0') {
            __ZdlPv(CONCAT44(uStack_16c,uStack_170));
          }
        }
      }
      ppppuVar13 = ppppuStack_138;
      if (((ulong)ppppuStack_138 & 1) != 0) {
        ppppuVar13 = *(undefined8 *****)((ulong)ppppuStack_138 & 0xfffffffffffffffe);
      }
      if ((ppppuVar13 == (undefined8 ****)0x0) && (ppppuStack_120 != (undefined8 ****)0x0)) {
        (**(code **)((long)*ppppuStack_120 + 8))();
      }
      ppppuVar24 = (undefined8 ****)ppppuVar27[1];
      if (((ulong)ppppuVar24 & 1) != 0) {
        ppppuVar24 = *(undefined8 *****)((ulong)ppppuVar24 & 0xfffffffffffffffe);
      }
      if (ppppuVar13 != ppppuVar24) {
        func_0x00010b4cf42c(ppppuVar13,ppppuVar27);
        ppppuVar27 = ppppuVar13;
      }
      uStack_130 = (undefined8 ****)((ulong)uStack_130 | 1);
      ppppppppuVar18 = (undefined ********)&ppppppppuStack_140;
      ppppuStack_120 = ppppuVar27;
      (*(code *)ppppppppuStack_140[5])(ppppppppuVar18);
      FUN_10a0dc020(&uStack_170,(long)(int)ppppppppuVar18);
      func_0x00010b4d1758(&ppppppppuStack_140,CONCAT44(uStack_16c,uStack_170),ppppppppuVar18);
      puVar30 = (undefined8 *)((long)pppuStack_168 - CONCAT44(uStack_16c,uStack_170));
      puVar19 = puVar30;
      _compressBound();
      puStack_190 = puVar19;
      FUN_10a0dc020(&pppppppuStack_b0);
      pppppppuVar11 = pppppppuStack_b0;
      _compress(pppppppuStack_b0,&puStack_190,CONCAT44(uStack_16c,uStack_170),puVar30);
      if ((int)pppppppuVar11 == 0) {
        puVar19 = (undefined8 *)((long)pppppppuStack_a8 - (long)pppppppuStack_b0);
        if (puStack_190 < puVar19 || (long)puStack_190 - (long)puVar19 == 0) {
          pppppppuVar11 = (undefined8 *******)((long)pppppppuStack_b0 + (long)puStack_190);
          pppppppuVar12 = pppppppuStack_b0;
          if (puStack_190 >= puVar19) {
            pppppppuVar11 = pppppppuStack_a8;
          }
        }
        else {
          func_0x000107c27d58(&pppppppuStack_b0,(long)puStack_190 - (long)puVar19);
          pppppppuVar11 = pppppppuStack_a8;
          pppppppuVar12 = pppppppuStack_b0;
        }
      }
      else {
        if ((bRam000000011330a9e8 & 1) != 0) {
          func_0x00010ae06f08(0,1,&UNK_10f672606,&UNK_10f6740d6,0x117,&UNK_10f674147);
        }
        if (pppppppuStack_b0 != (undefined8 *******)0x0) {
          pppppppuStack_a8 = pppppppuStack_b0;
          __ZdlPv();
        }
        pppppppuVar11 = (undefined8 *******)0x0;
        pppppppuVar12 = (undefined8 *******)0x0;
      }
      FUN_10a0f10f0(&pppppppuStack_b0,pppppppuVar12,(long)pppppppuVar11 - (long)pppppppuVar12,2);
      puVar19 = (undefined8 *)0x28;
      __Znwm();
      lStack_1b8 = -0x7fffffffffffffd8;
      uStack_1c0 = 0x20;
      puVar19[1] = 0x63732e74732d6663;
      *puVar19 = 0x2f2f3a7370747468;
      puVar19[3] = 0x2f626c672f64332f;
      puVar19[2] = 0x74656e2e6e64632d;
      *(undefined1 *)(puVar19 + 4) = 0;
      ppppuVar27 = pppppuVar35[8];
      pppppuVar8 = (undefined8 *****)pppppuVar35[7];
      if (-1 < (char)*(byte *)((long)pppppuVar35 + 0x4f)) {
        ppppuVar27 = (undefined8 ****)(ulong)*(byte *)((long)pppppuVar35 + 0x4f);
        pppppuVar8 = pppppuVar35 + 7;
      }
      ppuVar28 = &puStack_1c8;
      puStack_1c8 = puVar19;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (ppuVar28,pppppuVar8,ppppuVar27);
      puStack_1a8 = ppuVar28[1];
      puStack_1b0 = *ppuVar28;
      puStack_1a0 = ppuVar28[2];
      ppuVar28[1] = (undefined8 *)0x0;
      ppuVar28[2] = (undefined8 *)0x0;
      *ppuVar28 = (undefined8 *)0x0;
      ppuVar28 = &puStack_1b0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (ppuVar28,&UNK_10f6726f4,8);
      puStack_188 = ppuVar28[1];
      puStack_190 = *ppuVar28;
      uStack_180 = ppuVar28[2];
      ppuVar28[1] = (undefined8 *)0x0;
      ppuVar28[2] = (undefined8 *)0x0;
      *ppuVar28 = (undefined8 *)0x0;
      pppppppuVar11 = pppppppuStack_a8;
      pppppppuVar14 = pppppppuStack_b0;
      if (-1 < (long)uStack_a0) {
        pppppppuVar11 = (undefined8 *******)((ulong)uStack_a0 >> 0x38);
        pppppppuVar14 = &pppppppuStack_b0;
      }
      ppuVar28 = &puStack_190;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (ppuVar28,pppppppuVar14,pppppppuVar11);
      ppppppuVar20 = (undefined8 ******)*ppuVar28;
      uStack_88 = SUB87(ppuVar28[1],0);
      uStack_81 = (undefined1)*(undefined8 *)((long)ppuVar28 + 0xf);
      uStack_80 = (undefined7)((ulong)*(undefined8 *)((long)ppuVar28 + 0xf) >> 8);
      uVar31 = *(undefined1 *)((long)ppuVar28 + 0x17);
      ppuVar28[1] = (undefined8 *)0x0;
      ppuVar28[2] = (undefined8 *)0x0;
      *ppuVar28 = (undefined8 *)0x0;
      if ((long)uStack_180 < 0) {
        __ZdlPv(puStack_190);
      }
      if ((long)puStack_1a0 < 0) {
        __ZdlPv(puStack_1b0);
      }
      if (lStack_1b8 < 0) {
        __ZdlPv(puStack_1c8);
      }
      if (pppppppuVar12 != (undefined8 *******)0x0) {
        __ZdlPv(pppppppuVar12);
      }
      if ((undefined8 ***)CONCAT44(uStack_16c,uStack_170) != (undefined8 ***)0x0) {
        pppuStack_168 = (undefined8 ***)CONCAT44(uStack_16c,uStack_170);
        __ZdlPv();
      }
      ppuVar28 = ppuStack_150;
      if (((char)uStack_148 == '\x01') && (ppuStack_150 != (undefined8 **)0x0)) {
        ppuVar1 = ppuStack_150 + 1;
        do {
          puVar19 = *ppuVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
          if (bVar7) {
            *ppuVar1 = (undefined8 *)((long)puVar19 + -1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (puVar19 == (undefined8 *)0x0) {
          (*(code *)(*ppuStack_150)[2])(ppuStack_150);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar28);
        }
      }
      func_0x0001098cd6fc(&ppppppppuStack_140);
      pppuVar34 = pppuStack_e0;
      if (pppuStack_e0 != (undefined8 ***)0x0) {
        pppuVar17 = pppuStack_e0 + 1;
        do {
          ppuVar28 = *pppuVar17;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pppuVar17,0x10);
          if (bVar7) {
            *pppuVar17 = (undefined8 **)((long)ppuVar28 + -1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (ppuVar28 == (undefined8 **)0x0) {
          (*(code *)(*pppuStack_e0)[2])(pppuStack_e0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar34);
        }
      }
      goto LAB_10a753eb8;
    }
    if (*(char *)((long)pppppuVar35 + 0x4f) < '\0') {
      func_0x000107c3192c(&ppppppppuStack_140,pppppuVar35[7],pppppuVar35[8]);
      ppppuVar27 = pppppuVar35[10];
    }
    else {
      ppppuStack_138 = pppppuVar35[8];
      ppppppppuStack_140 = (undefined ********)pppppuVar35[7];
      uStack_130 = pppppuVar35[9];
    }
    FUN_10a74433c(&pppppppuStack_b0,ppppuVar27[7]);
    pppppppuVar11 = pppppppuStack_a8;
    if (-1 < (long)uStack_a0) {
      pppppppuVar11 = (undefined8 *******)((ulong)uStack_a0 >> 0x38);
    }
    if (pppppppuVar11 != (undefined8 *******)0x0) {
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (&pppppppuStack_d8,"?",&pppppppuStack_b0);
      if (-1 < (char)uStack_c8._7_1_) {
        pppuStack_d0 = (undefined8 ***)(ulong)uStack_c8._7_1_;
        pppppppuStack_d8 = &pppppppuStack_d8;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&ppppppppuStack_140,pppppppuStack_d8,pppuStack_d0);
    }
    pppppppuVar11 = (undefined8 *******)0x28;
    __Znwm();
    uStack_c8 = 0x8000000000000028;
    pppuStack_d0 = (undefined8 ***)0x20;
    pppppppuVar11[1] = (undefined8 ******)0x63732e74732d6663;
    *pppppppuVar11 = (undefined8 ******)0x2f2f3a7370747468;
    pppppppuVar11[3] = (undefined8 ******)0x2f626c672f64332f;
    pppppppuVar11[2] = (undefined8 ******)0x74656e2e6e64632d;
    *(undefined1 *)(pppppppuVar11 + 4) = 0;
    ppppuVar27 = ppppuStack_138;
    ppppppppuVar18 = ppppppppuStack_140;
    if (-1 < (long)uStack_130) {
      ppppuVar27 = (undefined8 ****)((ulong)uStack_130 >> 0x38);
      ppppppppuVar18 = (undefined ********)&ppppppppuStack_140;
    }
    pppppppuVar12 = &pppppppuStack_d8;
    pppppppuStack_d8 = pppppppuVar11;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppppppuVar12,ppppppppuVar18,ppppuVar27);
    ppppppuVar20 = *pppppppuVar12;
    uStack_88 = SUB87(pppppppuVar12[1],0);
    uStack_81 = (undefined1)*(undefined8 *)((long)pppppppuVar12 + 0xf);
    uStack_80 = (undefined7)((ulong)*(undefined8 *)((long)pppppppuVar12 + 0xf) >> 8);
    uVar31 = *(undefined1 *)((long)pppppppuVar12 + 0x17);
    pppppppuVar12[1] = (undefined8 ******)0x0;
    pppppppuVar12[2] = (undefined8 ******)0x0;
    *pppppppuVar12 = (undefined8 ******)0x0;
  }
  if ((long)uStack_130 < 0) {
    __ZdlPv(ppppppppuStack_140);
  }
LAB_10a753eb8:
  uStack_220 = uStack_88;
  uStack_219 = uStack_81;
  uStack_218 = uStack_80;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1e0 = 0;
  uStack_1d8 = 1;
  ppppppuVar23 = &ppppppuStack_228;
  ppppppuStack_228 = ppppppuVar20;
  uStack_211 = uVar31;
  FUN_10a754524(ppppppuVar29);
  ppppppuVar20 = &ppppppuStack_228;
  func_0x00010a1fe790();
  while( true ) {
    if (*(char *)(param_1 + 3) == '\x01') {
      ppppppuVar20 = param_1;
      func_0x00010a754640();
      *(undefined1 *)(param_1 + 3) = 0;
    }
    ppppppuStack_1d0 = (undefined8 ******)0x0;
    if (ppppppuVar29 != (undefined8 ******)0x0) {
      ppppppuVar20 = &ppppppuStack_1d0;
      func_0x0001092b4274(ppppppuVar20,ppppppuVar29);
      ppppppuVar23 = ppppppuStack_1d0;
      if (ppppppuStack_1d0 != (undefined8 ******)0x0) {
        ppppppuVar20 = &ppppppuStack_1d0;
        func_0x0001092b4274();
      }
    }
    iVar21 = (int)ppppppuVar23;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) break;
    ___stack_chk_fail();
    if (iVar21 == 0) {
      __Unwind_Resume(ppppppuVar20);
      func_0x000104bd46a0();
      *ppppppuVar20 = (undefined8 *****)&PTR_FUN_110c16320;
      if (ppppppuVar20[0x23] != (undefined8 *****)0x0) {
        func_0x0001092b4274(ppppppuVar20 + 0x23);
      }
      if (*(char *)(ppppppuVar20 + 0x22) == '\x01') {
        func_0x00010a754640(ppppppuVar20 + 0x1f);
      }
      *ppppppuVar20 = (undefined8 *****)&PTR_DAT_110bb2e48;
      if (*(char *)(ppppppuVar20 + 0x1e) == '\x01') {
        func_0x00010a1fe790(ppppppuVar20 + 0x13);
      }
      *ppppppuVar20 = (undefined8 *****)&PTR_DAT_110ae8be8;
      __ZNSt13exception_ptrD1Ev(ppppppuVar20 + 0x12);
      *ppppppuVar20 = (undefined8 *****)&PTR_DAT_110ae8c08;
      return ppppppuVar20;
    }
    if ((char)bStack_159 < '\0') {
      __ZdlPv(CONCAT44(uStack_16c,uStack_170));
    }
    func_0x00010a752268(&pppppppuStack_158);
    func_0x0001098cd6fc(&ppppppppuStack_140);
    func_0x00010a75f544(&pppuStack_e8);
    ___cxa_begin_catch(ppppppuVar20);
    __ZSt17current_exceptionv(&ppppppuStack_228);
    ppppppuVar23 = &ppppppuStack_228;
    func_0x000109d1b350(ppppppuVar29);
    ppppppuVar20 = &ppppppuStack_228;
    __ZNSt13exception_ptrD1Ev();
    ___cxa_end_catch();
  }
  return ppppppuVar20;
}



/* Entry: 10a7542fc; end: 10a754523;  */

undefined8 * FUN_10a7542fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c16320;
  if (param_1[0x23] != 0) {
    func_0x0001092b4274(param_1 + 0x23);
  }
  if (*(char *)(param_1 + 0x22) == '\x01') {
    func_0x00010a754640(param_1 + 0x1f);
  }
  *param_1 = &PTR_DAT_110bb2e48;
  if (*(char *)(param_1 + 0x1e) == '\x01') {
    func_0x00010a1fe790(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a754524; end: 10a75459b;  */

undefined1 FUN_10a754524(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = (long *)(param_1 + 0x10);
  do {
    lVar4 = *plVar1;
    if (lVar4 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_10a75459c(param_1 + 0x98);
        *(undefined8 *)(param_1 + 0x10) = 2;
        FUN_109d1b4dc(param_1 + 0x18);
        return 1;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar4 >> 1 & 1) != 0) {
      return 0;
    }
  } while( true );
}



/* Entry: 10a75459c; end: 10a754697;  */

void FUN_10a75459c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0xb) == '\x01') {
    func_0x00010a1fe790();
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  if (*(char *)(param_2 + 10) == '\x01') {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar2 = param_2[4];
    uVar1 = param_2[3];
    param_1[5] = param_2[5];
    param_1[4] = uVar2;
    param_1[3] = uVar1;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[3] = 0;
    uVar2 = param_2[7];
    uVar1 = param_2[6];
    param_1[8] = param_2[8];
    param_1[7] = uVar2;
    param_1[6] = uVar1;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[6] = 0;
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
    *(undefined1 *)(param_1 + 10) = 1;
  }
  *(undefined1 *)(param_1 + 0xb) = 1;
  return;
}



/* Entry: 10a754698; end: 10a754887;  */

void FUN_10a754698(code **param_1,code **param_2)

{
  undefined ***pppuVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined **ppuVar6;
  code **ppcVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  code **ppcVar10;
  code **ppcVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  int aiStack_120 [2];
  undefined8 *puStack_118;
  int aiStack_110 [2];
  undefined8 *puStack_108;
  undefined8 **ppuStack_100;
  undefined **ppuStack_f8;
  undefined1 *puStack_f0;
  undefined ***pppuStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  code *pcStack_98;
  undefined ***pppuStack_90;
  code *pcStack_88;
  undefined ***pppuStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  code *pcStack_68;
  code *pcStack_60;
  code *pcStack_58;
  undefined ***pppuStack_50;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar7 = param_1;
  ppcVar10 = param_2;
  FUN_10a688b40();
  if (ppcVar7 == (code **)0x0) {
    ppcVar11 = (code **)0x0;
    pppuVar8 = (undefined ***)0x0;
    if (ppcVar10 != (code **)0x0) {
      pcStack_60 = param_1[1];
      pcStack_68 = *param_1;
      if (param_1[1] != (code *)0x0) {
        pcVar2 = param_1[1] + 8;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
          if (bVar4) {
            *(long *)pcVar2 = *(long *)pcVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      pcStack_88 = *param_2;
      pppuVar9 = (undefined ***)param_2[1];
      if (pppuVar9 != (undefined ***)0x0) {
        pppuVar8 = pppuVar9 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
          if (bVar4) {
            *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      pcStack_78 = FUN_10a754a8c;
      ppuStack_70 = &PTR_FUN_110c16380;
      pcStack_98 = (code *)0x0;
      pppuStack_90 = (undefined ***)0x0;
      if (pppuVar9 != (undefined ***)0x0) {
        pppuVar8 = pppuVar9 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
          if (bVar4) {
            *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      ppcVar7 = &pcStack_98;
      param_1 = &pcStack_78;
      ppcVar11 = &pcStack_78;
      pppuStack_80 = pppuVar9;
      pcStack_58 = pcStack_88;
      pppuStack_50 = pppuVar9;
      FUN_10a4634ec();
      pppuVar8 = &ppuStack_70;
      (*(code *)*ppuStack_70)();
      if (pppuVar9 != (undefined ***)0x0) {
        pppuVar1 = pppuVar9 + 1;
        do {
          ppuVar13 = *pppuVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
          if (bVar4) {
            *pppuVar1 = (undefined **)((long)ppuVar13 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar13 == (undefined **)0x0) {
          (*(code *)(*pppuVar9)[2])(pppuVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar8 = pppuVar9;
        }
      }
      pppuVar9 = pppuStack_90;
      if (pppuStack_90 != (undefined ***)0x0) {
        pppuVar1 = pppuStack_90 + 1;
        do {
          ppuVar13 = *pppuVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
          if (bVar4) {
            *pppuVar1 = (undefined **)((long)ppuVar13 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar13 == (undefined **)0x0) {
          (*(code *)(*pppuStack_90)[2])(pppuStack_90);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar8 = pppuVar9;
        }
      }
    }
  }
  else {
    *ppcVar7 = (code *)CONCAT44((int)((ulong)*ppcVar7 >> 0x20) + 1,(int)*ppcVar7 + 1);
    pppuVar8 = (undefined ***)*param_1;
    FUN_10a754888();
    iVar5 = *(int *)((long)ppcVar7 + 4) + -1;
    *(int *)((long)ppcVar7 + 4) = iVar5;
    ppcVar11 = param_2;
    if (iVar5 == 0) {
      *(undefined4 *)ppcVar7 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(param_1 + 1);
  FUN_10a754b04(ppcVar7 + 2);
  func_0x00010a004dac(&pcStack_98);
  __Unwind_Resume();
  func_0x000109884c0c(&ppuStack_100,pppuVar8 + 1,*pppuVar8);
  func_0x000109884820(&puStack_128,&ppuStack_100,*pppuVar8);
  if (ppuStack_100 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_100)();
  }
  (**(code **)(**pppuVar8 + 0x30))(&puStack_130);
  ppuVar13 = *pppuVar8;
  ppuStack_f8 = (undefined **)ppcVar11[1];
  ppuStack_100 = (undefined8 **)*ppcVar11;
  if (ppcVar11[1] != (code *)0x0) {
    pcVar2 = ppcVar11[1] + 8;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
      if (bVar4) {
        *(long *)pcVar2 = *(long *)pcVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_e0 = &PTR_DAT_110c15cf8;
  func_0x000109899de4(aiStack_110,ppuVar13,&ppuStack_100,&ppuStack_e0,0,0);
  ppuVar6 = ppuStack_f8;
  if (ppuStack_f8 != (undefined **)0x0) {
    pcVar2 = (code *)((long)ppuStack_f8 + 8);
    do {
      lVar12 = *(long *)pcVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
      if (bVar4) {
        *(long *)pcVar2 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)((long)*ppuStack_f8 + 0x10))(ppuStack_f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar6);
    }
  }
  uStack_d8 = 1;
  ppuStack_e0 = (undefined **)aiStack_110;
  (**(code **)(*ppuVar13 + 0x58))(ppuVar13);
  ppuStack_100 = &puStack_128;
  ppuStack_f8 = ppuVar13;
  puStack_f0 = (undefined1 *)&puStack_130;
  pppuStack_e8 = &ppuStack_e0;
  func_0x0001098960c0(aiStack_120);
  if ((3 < aiStack_120[0]) && (puStack_118 != (undefined8 *)0x0)) {
    (**(code **)*puStack_118)();
  }
  if ((3 < aiStack_110[0]) && (puStack_108 != (undefined8 *)0x0)) {
    (**(code **)*puStack_108)();
  }
  if (puStack_130 != (undefined8 *)0x0) {
    (**(code **)*puStack_130)();
  }
  if (puStack_128 != (undefined8 *)0x0) {
    (**(code **)*puStack_128)();
  }
  return;
}



/* Entry: 10a754888; end: 10a754a8b;  */

void FUN_10a754888(undefined8 *param_1,undefined8 *param_2)

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
  ppuStack_40 = &PTR_DAT_110c15cf8;
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



/* Entry: 10a754a8c; end: 10a754a9b;  */

void FUN_10a754a8c(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
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
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar5 + 1,*puVar5);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar5);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar5 + 0x30))(&puStack_90);
  plVar7 = (long *)*puVar5;
  plStack_58 = *(long **)(param_1 + 0x28);
  ppuStack_60 = *(undefined8 ***)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x28) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_40 = &PTR_DAT_110c15cf8;
  func_0x000109899de4(&puStack_70,plVar7,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar7 + 0x58))(plVar7);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar7;
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



/* Entry: 10a754a9c; end: 10a754ac3;  */

long FUN_10a754a9c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a754b04(param_1 + 0x18);
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



/* Entry: 10a754ac4; end: 10a754b03;  */

void FUN_10a754ac4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c16380;
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



/* Entry: 10a754b04; end: 10a754b5b;  */

long FUN_10a754b04(long param_1)

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



/* Entry: 10a754b5c; end: 10a754b5f;  */

void FUN_10a754b5c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a754b60; end: 10a754b73;  */

void FUN_10a754b60(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a754b74; end: 10a754b8b;  */

void FUN_10a754b74(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a754b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10a754b8c; end: 10a754bc3;  */

undefined8 FUN_10a754b8c(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c163f8);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a754bc4; end: 10a754bc7;  */

void FUN_10a754bc4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a754bc8; end: 10a754c1f;  */

long FUN_10a754bc8(long param_1)

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



/* Entry: 10a754c20; end: 10a754c77;  */

long FUN_10a754c20(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c2b054(param_1,&DAT_10f2c472e);
  func_0x000107c2b054(lVar1 + 0x18,"true");
  return param_1;
}



/* Entry: 10a754c78; end: 10a754ccf;  */

long FUN_10a754c78(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c2b054(param_1,&DAT_10f2c472a);
  func_0x000107c2b054(lVar1 + 0x18,&DAT_10f62b058);
  return param_1;
}



/* Entry: 10a754cd0; end: 10a754cd3;  */

void FUN_10a754cd0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a754cd4; end: 10a754ce7;  */

void FUN_10a754cd4(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a754ce8; end: 10a754cff;  */

void FUN_10a754ce8(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a754cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10a754d00; end: 10a754d37;  */

undefined8 FUN_10a754d00(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c16470);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a754d38; end: 10a754d3b;  */

void FUN_10a754d38(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a754d3c; end: 10a754e07;  */

long FUN_10a754d3c(long param_1)

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



/* Entry: 10a754e08; end: 10a754ff7;  */

void FUN_10a754e08(code **param_1,code **param_2)

{
  undefined ***pppuVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined **ppuVar6;
  code **ppcVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  code **ppcVar10;
  code **ppcVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  int aiStack_120 [2];
  undefined8 *puStack_118;
  int aiStack_110 [2];
  undefined8 *puStack_108;
  undefined8 **ppuStack_100;
  undefined **ppuStack_f8;
  undefined1 *puStack_f0;
  undefined ***pppuStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  code *pcStack_98;
  undefined ***pppuStack_90;
  code *pcStack_88;
  undefined ***pppuStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  code *pcStack_68;
  code *pcStack_60;
  code *pcStack_58;
  undefined ***pppuStack_50;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar7 = param_1;
  ppcVar10 = param_2;
  FUN_10a688b40();
  if (ppcVar7 == (code **)0x0) {
    ppcVar11 = (code **)0x0;
    pppuVar8 = (undefined ***)0x0;
    if (ppcVar10 != (code **)0x0) {
      pcStack_60 = param_1[1];
      pcStack_68 = *param_1;
      if (param_1[1] != (code *)0x0) {
        pcVar2 = param_1[1] + 8;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
          if (bVar4) {
            *(long *)pcVar2 = *(long *)pcVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      pcStack_88 = *param_2;
      pppuVar9 = (undefined ***)param_2[1];
      if (pppuVar9 != (undefined ***)0x0) {
        pppuVar8 = pppuVar9 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
          if (bVar4) {
            *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      pcStack_78 = FUN_10a7551fc;
      ppuStack_70 = &PTR_FUN_110c16488;
      pcStack_98 = (code *)0x0;
      pppuStack_90 = (undefined ***)0x0;
      if (pppuVar9 != (undefined ***)0x0) {
        pppuVar8 = pppuVar9 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
          if (bVar4) {
            *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      ppcVar7 = &pcStack_98;
      param_1 = &pcStack_78;
      ppcVar11 = &pcStack_78;
      pppuStack_80 = pppuVar9;
      pcStack_58 = pcStack_88;
      pppuStack_50 = pppuVar9;
      FUN_10a4634ec();
      pppuVar8 = &ppuStack_70;
      (*(code *)*ppuStack_70)();
      if (pppuVar9 != (undefined ***)0x0) {
        pppuVar1 = pppuVar9 + 1;
        do {
          ppuVar13 = *pppuVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
          if (bVar4) {
            *pppuVar1 = (undefined **)((long)ppuVar13 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar13 == (undefined **)0x0) {
          (*(code *)(*pppuVar9)[2])(pppuVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar8 = pppuVar9;
        }
      }
      pppuVar9 = pppuStack_90;
      if (pppuStack_90 != (undefined ***)0x0) {
        pppuVar1 = pppuStack_90 + 1;
        do {
          ppuVar13 = *pppuVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
          if (bVar4) {
            *pppuVar1 = (undefined **)((long)ppuVar13 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar13 == (undefined **)0x0) {
          (*(code *)(*pppuStack_90)[2])(pppuStack_90);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar8 = pppuVar9;
        }
      }
    }
  }
  else {
    *ppcVar7 = (code *)CONCAT44((int)((ulong)*ppcVar7 >> 0x20) + 1,(int)*ppcVar7 + 1);
    pppuVar8 = (undefined ***)*param_1;
    FUN_10a754ff8();
    iVar5 = *(int *)((long)ppcVar7 + 4) + -1;
    *(int *)((long)ppcVar7 + 4) = iVar5;
    ppcVar11 = param_2;
    if (iVar5 == 0) {
      *(undefined4 *)ppcVar7 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(param_1 + 1);
  FUN_10a754d3c(ppcVar7 + 2);
  func_0x00010a004dac(&pcStack_98);
  __Unwind_Resume();
  func_0x000109884c0c(&ppuStack_100,pppuVar8 + 1,*pppuVar8);
  func_0x000109884820(&puStack_128,&ppuStack_100,*pppuVar8);
  if (ppuStack_100 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_100)();
  }
  (**(code **)(**pppuVar8 + 0x30))(&puStack_130);
  ppuVar13 = *pppuVar8;
  ppuStack_f8 = (undefined **)ppcVar11[1];
  ppuStack_100 = (undefined8 **)*ppcVar11;
  if (ppcVar11[1] != (code *)0x0) {
    pcVar2 = ppcVar11[1] + 8;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
      if (bVar4) {
        *(long *)pcVar2 = *(long *)pcVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_e0 = &PTR_DAT_110c15c98;
  func_0x000109899de4(aiStack_110,ppuVar13,&ppuStack_100,&ppuStack_e0,0,0);
  ppuVar6 = ppuStack_f8;
  if (ppuStack_f8 != (undefined **)0x0) {
    pcVar2 = (code *)((long)ppuStack_f8 + 8);
    do {
      lVar12 = *(long *)pcVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
      if (bVar4) {
        *(long *)pcVar2 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)((long)*ppuStack_f8 + 0x10))(ppuStack_f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar6);
    }
  }
  uStack_d8 = 1;
  ppuStack_e0 = (undefined **)aiStack_110;
  (**(code **)(*ppuVar13 + 0x58))(ppuVar13);
  ppuStack_100 = &puStack_128;
  ppuStack_f8 = ppuVar13;
  puStack_f0 = (undefined1 *)&puStack_130;
  pppuStack_e8 = &ppuStack_e0;
  func_0x0001098960c0(aiStack_120);
  if ((3 < aiStack_120[0]) && (puStack_118 != (undefined8 *)0x0)) {
    (**(code **)*puStack_118)();
  }
  if ((3 < aiStack_110[0]) && (puStack_108 != (undefined8 *)0x0)) {
    (**(code **)*puStack_108)();
  }
  if (puStack_130 != (undefined8 *)0x0) {
    (**(code **)*puStack_130)();
  }
  if (puStack_128 != (undefined8 *)0x0) {
    (**(code **)*puStack_128)();
  }
  return;
}



/* Entry: 10a754ff8; end: 10a7551fb;  */

void FUN_10a754ff8(undefined8 *param_1,undefined8 *param_2)

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
  ppuStack_40 = &PTR_DAT_110c15c98;
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



/* Entry: 10a7551fc; end: 10a75520b;  */

void FUN_10a7551fc(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
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
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar5 + 1,*puVar5);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar5);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar5 + 0x30))(&puStack_90);
  plVar7 = (long *)*puVar5;
  plStack_58 = *(long **)(param_1 + 0x28);
  ppuStack_60 = *(undefined8 ***)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x28) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_40 = &PTR_DAT_110c15c98;
  func_0x000109899de4(&puStack_70,plVar7,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar7 + 0x58))(plVar7);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar7;
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



/* Entry: 10a75520c; end: 10a755233;  */

long FUN_10a75520c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a754d3c(param_1 + 0x18);
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



/* Entry: 10a755234; end: 10a755283;  */

void FUN_10a755234(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c16488;
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



/* Entry: 10a755284; end: 10a7552a3;  */

void FUN_10a755284(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c164b0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7552a4; end: 10a7552d7;  */

void FUN_10a7552a4(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 == (long *)(param_1 + 0x18)) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar2 = 0x28;
  }
                    /* WARNING: Could not recover jumptable at 0x00010a7552cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + lVar2))();
  return;
}



/* Entry: 10a7552d8; end: 10a75534f;  */

undefined8 * FUN_10a7552d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c16500;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
  }
  return param_1;
}



/* Entry: 10a755350; end: 10a7553c7;  */

undefined8 * FUN_10a755350(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  *puVar1 = &PTR_FUN_110c16500;
  if (*(char *)(param_1 + 0x1f) < '\0') {
    func_0x000107c3192c(puVar1 + 1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[1] = uVar2;
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  }
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  return puVar1;
}



/* Entry: 10a7553c8; end: 10a755423;  */

void FUN_10a7553c8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_110c16500;
  if (*(char *)(param_1 + 0x1f) < '\0') {
    func_0x000107c3192c(param_2 + 1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar2;
    param_2[1] = uVar1;
  }
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  return;
}



/* Entry: 10a755424; end: 10a755437;  */

void FUN_10a755424(long param_1)

{
  if (-1 < *(char *)(param_1 + 0x1f)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10a755438; end: 10a755467;  */

void FUN_10a755438(long param_1)

{
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a755468; end: 10a755537;  */

void FUN_10a755468(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = *param_2;
  if ((lVar4 != 0) && (___dynamic_cast(lVar4,&PTR_DAT_110c42c58,&PTR_DAT_110c480a8,0), lVar4 != 0))
  {
    plVar5 = (long *)param_2[1];
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
    }
    FUN_10a755580(*(undefined8 *)(param_1 + 0x20),param_1 + 8,lVar4);
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



/* Entry: 10a755538; end: 10a755573;  */

long FUN_10a755538(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c16570);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a755574; end: 10a75557f;  */

undefined ** FUN_10a755574(void)

{
  return &PTR_DAT_110c16570;
}



/* Entry: 10a755580; end: 10a755677;  */

void FUN_10a755580(long param_1,undefined8 param_2,long param_3)

{
  undefined8 auStack_a0 [2];
  char cStack_89;
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_21;
  
  uStack_58 = *(undefined8 *)(param_1 + 0xe0);
  ppuStack_70 = &PTR_FUN_110c17260;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_30 = 0;
  FUN_10a08d2e0(auStack_a0,param_3 + 0xe8);
  FUN_10a0b8640(auStack_88,&ppuStack_70,auStack_a0);
  if (cStack_89 < '\0') {
    __ZdlPv(auStack_a0[0]);
  }
  param_1 = param_1 + 0x100;
  auStack_a0[0] = param_2;
  FUN_109cf993c(param_1,param_2,&UNK_10dd5b8f9,auStack_a0,&uStack_21);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_1 + 0x28,auStack_88);
  if (cStack_71 < '\0') {
    __ZdlPv(auStack_88[0]);
  }
  FUN_10a755690(&ppuStack_70);
  return;
}



/* Entry: 10a755678; end: 10a75567b;  */

undefined8 * FUN_10a755678(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110c17260;
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  plVar1 = (long *)param_1[5];
  param_1[5] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[4];
  param_1[4] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a75567c; end: 10a75568f;  */

void FUN_10a75567c(void)

{
  FUN_10a755690();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a755690; end: 10a75570f;  */

undefined8 * FUN_10a755690(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110c17260;
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  plVar1 = (long *)param_1[5];
  param_1[5] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[4];
  param_1[4] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a755710; end: 10a755ecf;  */

long ***** FUN_10a755710(long *param_1)

{
  long *plVar1;
  long *****ppppplVar2;
  long lVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long *****ppppplVar8;
  int ***pppiVar9;
  undefined *puVar10;
  undefined2 uVar11;
  long lVar12;
  long *****ppppplVar13;
  long lVar14;
  undefined8 *puVar15;
  int *****pppppiVar16;
  long ****pppplVar17;
  long ****pppplVar18;
  long *plVar19;
  ushort uVar20;
  ushort uVar21;
  ushort uVar22;
  int **ppiStack_158;
  long ****pppplStack_150;
  long ***ppplStack_148;
  undefined8 uStack_140;
  int **ppiStack_138;
  long ****pppplStack_130;
  long ***ppplStack_128;
  undefined8 uStack_120;
  int ****ppppiStack_118;
  long ****pppplStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  int **ppiStack_f8;
  long ****pppplStack_f0;
  long ***ppplStack_e8;
  undefined8 uStack_e0;
  int **ppiStack_d8;
  long ****pppplStack_d0;
  long ***ppplStack_c8;
  undefined8 uStack_c0;
  long ***ppplStack_b8;
  long ****pppplStack_b0;
  long ***ppplStack_a8;
  undefined8 uStack_a0;
  int ***pppiStack_98;
  long ****pppplStack_90;
  long lStack_88;
  long ****pppplStack_80;
  long alStack_78 [3];
  long *plStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *param_1;
  plVar19 = param_1 + 4;
  lVar3 = *(long *)(*plVar19 + 0x68);
  pppplStack_80 = *(long *****)(*plVar19 + 0x70);
  if ((long *****)pppplStack_80 != (long *****)0x0) {
    ppppplVar8 = (long *****)(pppplStack_80 + 1);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppppplVar8,0x10);
      if (bVar6) {
        *ppppplVar8 = (long ****)((long)*ppppplVar8 + 1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lStack_88 = lVar3;
  if ((char)param_1[8] == '\x01' && lVar3 != 0) {
    uVar22 = *(ushort *)(lVar3 + 0x1a) >> 8 & 1;
    uVar21 = *(ushort *)(lVar3 + 0x1c) >> 8 & 1;
    uVar20 = *(ushort *)(lVar3 + 0x18) >> 8 & 1;
    if (((*(ushort *)(lVar3 + 0x1a) >> 8 & 1) != 0) &&
       ((*(ushort *)(lVar3 + 0x1c) & 0x100) != 0 && (*(ushort *)(lVar3 + 0x18) & 0x100) != 0)) {
      ppppplVar8 = (long *****)&ppplStack_b8;
      FUN_10a745e5c(ppppplVar8,param_1 + 1,plVar19);
      ppppplVar13 = (long *****)param_1[6];
      if ((ppppplVar13 == (long *****)0x0) || (*(char *)(ppppplVar13 + 8) != '\x02')) {
        if ((ppppplVar13 != (long *****)0x0) && (*(char *)(ppppplVar13 + 8) == '\x01')) {
          ppppplVar8 = (long *****)&ppplStack_b8;
          (*(code *)*ppppplVar13)(ppppplVar8,ppppplVar13);
        }
      }
      else {
        FUN_10a754e08(ppppplVar13,&ppplStack_b8);
        ppppplVar8 = ppppplVar13;
      }
      ppppplVar13 = (long *****)pppplStack_b0;
      if ((long *****)pppplStack_b0 != (long *****)0x0) {
        ppppplVar2 = (long *****)(pppplStack_b0 + 1);
        do {
          pppplVar18 = *ppppplVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppppplVar2,0x10);
          if (bVar6) {
            *ppppplVar2 = (long ****)((long)pppplVar18 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (pppplVar18 == (long ****)0x0) {
          (*(code *)(*pppplStack_b0)[2])(pppplStack_b0);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppppplVar8 = ppppplVar13;
        }
      }
      goto LAB_10a755d84;
    }
  }
  else {
    uVar20 = 0;
    uVar22 = 0;
    uVar21 = 0;
  }
  lVar12 = lVar12 + 0x100;
  FUN_109ce5028(lVar12,param_1 + 1);
  if (lVar12 != 0) {
    lVar14 = (long)*(char *)(lVar12 + 0x3f);
    if (lVar14 < 0) {
      lVar14 = *(long *)(lVar12 + 0x30);
    }
    if (lVar14 != 0) {
      plStack_60 = (long *)0x0;
      FUN_109fc89b4(&pppiStack_98,lVar12 + 0x28,alStack_78,1,0);
      if (plStack_60 == alStack_78) {
        lVar12 = 0x20;
LAB_10a75584c:
        (**(code **)(*plStack_60 + lVar12))();
      }
      else if (plStack_60 != (long *)0x0) {
        lVar12 = 0x28;
        goto LAB_10a75584c;
      }
      ppplStack_b8 = (long ***)&pppiStack_98;
      pppplStack_b0 = (long ****)0x0;
      ppplStack_a8 = (long ***)0x0;
      uStack_a0 = 0x8000000000000000;
      if ((char)pppiStack_98 == '\x01') {
        ppppplVar8 = (long *****)pppplStack_90;
        func_0x000109fc8d64(pppplStack_90,&DAT_10f2c4735);
        pppplStack_b0 = (long ****)ppppplVar8;
LAB_10a7558c0:
        ppiStack_d8 = (int **)&pppiStack_98;
        pppplStack_d0 = (long ****)0x0;
        ppplStack_c8 = (long ***)0x0;
        uStack_c0 = 0x8000000000000000;
        if ((char)pppiStack_98 == '\x01') {
          ppppplVar8 = (long *****)pppplStack_90;
          func_0x00010a755fd0(pppplStack_90,&DAT_10f2c5256);
          pppplStack_d0 = (long ****)ppppplVar8;
        }
        else {
          if ((char)pppiStack_98 == '\x02') goto LAB_10a7558e4;
          uStack_c0 = 1;
        }
        ppiStack_f8 = (int **)&pppiStack_98;
        pppplStack_f0 = (long ****)0x0;
        ppplStack_e8 = (long ***)0x0;
        uStack_e0 = 0x8000000000000000;
        if ((char)pppiStack_98 == '\x01') {
          ppppplVar8 = (long *****)pppplStack_90;
          func_0x00010a756054(pppplStack_90,"gender");
          pppplStack_f0 = (long ****)ppppplVar8;
        }
        else {
          if ((char)pppiStack_98 == '\x02') goto LAB_10a755948;
          uStack_e0 = 1;
        }
        pppplStack_110 = (long ****)0x0;
        uStack_108 = (long ****)0x0;
        uStack_100 = 0x8000000000000000;
        if ((char)pppiStack_98 == '\x01') {
          pppplStack_110 = pppplStack_90 + 1;
        }
        else {
          if ((char)pppiStack_98 == '\x02') goto LAB_10a755960;
          uStack_100 = 1;
        }
      }
      else {
        if ((char)pppiStack_98 != '\x02') {
          uStack_a0 = 1;
          goto LAB_10a7558c0;
        }
        ppplStack_a8 = pppplStack_90[1];
LAB_10a7558e4:
        uStack_c0 = 0x8000000000000000;
        pppplStack_d0 = (long ****)0x0;
        ppplStack_c8 = pppplStack_90[1];
        ppiStack_d8 = (int **)&pppiStack_98;
LAB_10a755948:
        uStack_e0 = 0x8000000000000000;
        pppplStack_f0 = (long ****)0x0;
        ppplStack_e8 = pppplStack_90[1];
        ppiStack_f8 = (int **)&pppiStack_98;
LAB_10a755960:
        uStack_100 = 0x8000000000000000;
        pppplStack_110 = (long ****)0x0;
        uStack_108 = (long ****)pppplStack_90[1];
      }
      ppppiStack_118 = &pppiStack_98;
      pppplVar18 = &ppplStack_b8;
      func_0x000109379420(pppplVar18,&ppppiStack_118);
      if (((ulong)pppplVar18 & 1) == 0) {
        ppiStack_138 = (int **)&pppiStack_98;
        pppplStack_130 = (long ****)0x0;
        ppplStack_128 = (long ***)0x0;
        uStack_120 = 0x8000000000000000;
        if ((char)pppiStack_98 == '\x02') {
          ppplStack_128 = pppplStack_90[1];
        }
        else if ((char)pppiStack_98 == '\x01') {
          pppplStack_130 = pppplStack_90 + 1;
        }
        else {
          uStack_120 = 1;
        }
        pppiVar9 = &ppiStack_d8;
        func_0x000109379420(pppiVar9,&ppiStack_138);
        if (((ulong)pppiVar9 & 1) != 0) goto LAB_10a755df8;
        ppiStack_158 = (int **)&pppiStack_98;
        pppplStack_150 = (long ****)0x0;
        ppplStack_148 = (long ***)0x0;
        uStack_140 = 0x8000000000000000;
        if ((char)pppiStack_98 == '\x02') {
          ppplStack_148 = pppplStack_90[1];
        }
        else if ((char)pppiStack_98 == '\x01') {
          pppplStack_150 = pppplStack_90 + 1;
        }
        else {
          uStack_140 = 1;
        }
        pppiVar9 = &ppiStack_f8;
        func_0x000109379420(pppiVar9,&ppiStack_158);
        if (((ulong)pppiVar9 & 1) != 0) goto LAB_10a755df8;
        lVar12 = *plVar19;
        if (*(int *)(lVar12 + 0x50) == 1) {
          lVar3 = *(long *)(lVar12 + 0x58);
          plVar4 = *(long **)(lVar12 + 0x60);
          if (plVar4 != (long *)0x0) {
            plVar1 = plVar4 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = *plVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            do {
              lVar12 = *plVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = lVar12 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar12 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
            }
          }
          if (lVar3 == 0) goto LAB_10a755e14;
          func_0x00010937b950(&ppplStack_b8);
          func_0x00010937ba88();
          lVar12 = *(long *)(*plVar19 + 0x58);
          plVar4 = *(long **)(*plVar19 + 0x60);
          if (plVar4 == (long *)0x0) {
            *(bool *)(lVar12 + 0x18) = (byte)ppppiStack_118 == '\x02';
          }
          else {
            plVar1 = plVar4 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = *plVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            *(bool *)(lVar12 + 0x18) = (byte)ppppiStack_118 == '\x02';
            do {
              lVar12 = *plVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = lVar12 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar12 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
            }
          }
LAB_10a755cec:
          FUN_10a745e5c(&ppppiStack_118,param_1 + 1,plVar19);
          puVar15 = (undefined8 *)param_1[6];
          if ((puVar15 == (undefined8 *)0x0) || (*(char *)(puVar15 + 8) != '\x02')) {
            if ((puVar15 != (undefined8 *)0x0) && (*(char *)(puVar15 + 8) == '\x01')) {
              (*(code *)*puVar15)(&ppppiStack_118,puVar15);
            }
          }
          else {
            FUN_10a754e08(puVar15,&ppppiStack_118);
          }
          pppplVar18 = pppplStack_110;
          if ((long *****)pppplStack_110 != (long *****)0x0) {
            ppppplVar8 = (long *****)(pppplStack_110 + 1);
            do {
              pppplVar17 = *ppppplVar8;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(ppppplVar8,0x10);
              if (bVar6) {
                *ppppplVar8 = (long ****)((long)pppplVar17 + -1);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (pppplVar17 == (long ****)0x0) {
              (*(code *)(*pppplStack_110)[2])(pppplStack_110);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar18);
            }
          }
          ppppplVar8 = &pppplStack_90;
          func_0x000109380ffc(ppppplVar8,(char)pppiStack_98);
LAB_10a755d84:
          ppppplVar13 = (long *****)pppplStack_80;
          if ((long *****)pppplStack_80 != (long *****)0x0) {
            ppppplVar2 = (long *****)(pppplStack_80 + 1);
            do {
              pppplVar18 = *ppppplVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(ppppplVar2,0x10);
              if (bVar6) {
                *ppppplVar2 = (long ****)((long)pppplVar18 + -1);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (pppplVar18 == (long ****)0x0) {
              (*(code *)(*pppplStack_80)[2])(pppplStack_80);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              ppppplVar8 = ppppplVar13;
            }
          }
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
            return ppppplVar8;
          }
          ___stack_chk_fail();
          func_0x000109380ffc(&pppplStack_90,(char)pppiStack_98);
          func_0x00010a75f544(&lStack_88);
          __Unwind_Resume();
          FUN_10a7569b8(ppppplVar8 + 9);
          FUN_10a757ff0(ppppplVar8 + 7);
          if (*(char *)((long)ppppplVar8 + 0x37) < '\0') {
            __ZdlPv(ppppplVar8[4]);
          }
          if (*(char *)((long)ppppplVar8 + 0x17) < '\0') {
            __ZdlPv(*ppppplVar8);
          }
          return ppppplVar8;
        }
        if ((*(int *)(lVar12 + 0x50) == 2) && (lVar3 != 0)) {
          if (uVar22 == 0) {
            func_0x00010937b950(&ppplStack_b8);
            func_0x00010937ba88();
            *(ushort *)(lVar3 + 0x1a) = (byte)ppppiStack_118 | 0x100;
          }
          if (uVar21 == 0) {
            func_0x00010937b950(&ppiStack_d8);
            func_0x00010937ba88();
            *(ushort *)(lVar3 + 0x1c) = (byte)ppppiStack_118 | 0x100;
          }
          if (uVar20 != 0) goto LAB_10a755cec;
          func_0x00010937b950(&ppiStack_f8);
          func_0x00010937c804(&ppppiStack_118);
          if ((long)uStack_108 < 0) {
            if ((long *****)pppplStack_110 == (long *****)0x4) {
              if (*(int *)ppppiStack_118 != 0x656c616d) goto LAB_10a755cdc;
              uVar11 = 0x101;
            }
            else {
              pppppiVar16 = (int *****)ppppiStack_118;
              if ((long *****)pppplStack_110 == (long *****)0x6) goto LAB_10a755c68;
LAB_10a755cdc:
              uVar11 = 0x100;
            }
            *(undefined2 *)(lVar3 + 0x18) = uVar11;
LAB_10a755ce4:
            __ZdlPv(ppppiStack_118);
          }
          else {
            if (uStack_108._7_1_ == '\x04') {
              if ((int)ppppiStack_118 != 0x656c616d) goto LAB_10a755cb8;
              uVar11 = 0x101;
            }
            else {
              if (uStack_108._7_1_ == '\x06') {
                pppppiVar16 = &ppppiStack_118;
LAB_10a755c68:
                uVar11 = 0x102;
                if (*(short *)((long)pppppiVar16 + 4) != 0x656c || *(int *)pppppiVar16 != 0x616d6566
                   ) {
                  uVar11 = 0x100;
                }
                *(undefined2 *)(lVar3 + 0x18) = uVar11;
                if (-1 < (long)uStack_108) goto LAB_10a755cec;
                goto LAB_10a755ce4;
              }
LAB_10a755cb8:
              uVar11 = 0x100;
            }
            *(undefined2 *)(lVar3 + 0x18) = uVar11;
          }
          goto LAB_10a755cec;
        }
LAB_10a755e14:
        puVar10 = &UNK_10f674511;
      }
      else {
LAB_10a755df8:
        puVar10 = &UNK_10f6744d3;
      }
      FUN_10a00946c(puVar10);
      goto LAB_10a755e20;
    }
  }
  FUN_10a00946c(&UNK_10f6744a7);
LAB_10a755e20:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a755e24);
  (*pcVar7)();
}



/* Entry: 10a755ed0; end: 10a755fcf;  */

undefined8 * FUN_10a755ed0(undefined8 *param_1)

{
  FUN_10a7569b8(param_1 + 9);
  FUN_10a757ff0(param_1 + 7);
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a755fd0; end: 10a7560d7;  */

long * FUN_10a755fd0(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar2;
  plVar3 = plVar2;
  if (plVar4 != (long *)0x0) {
    do {
      plVar1 = plVar4 + 4;
      func_0x00010a003d08(plVar1,param_2);
      if (-1 < (char)plVar1) {
        plVar3 = plVar4;
      }
      plVar4 = *(long **)((long)plVar4 + ((ulong)plVar1 >> 4 & 8));
    } while (plVar4 != (long *)0x0);
    if (plVar3 != plVar2) {
      plVar4 = plVar3 + 4;
      func_0x00010a003d08(plVar4,param_2);
      if ((char)plVar4 < '\x01') {
        return plVar3;
      }
    }
  }
  return plVar2;
}



/* Entry: 10a7560d8; end: 10a7560e7;  */

void FUN_10a7560d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c16590;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a7560e8; end: 10a756107;  */

void FUN_10a7560e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c16590;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a756108; end: 10a75612f;  */

undefined1  [16] FUN_10a756108(long param_1)

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
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10a75612c);
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



/* Entry: 10a756130; end: 10a7563df;  */

long ***** FUN_10a756130(long *param_1,long param_2)

{
  long *plVar1;
  long *****ppppplVar2;
  long **pplVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  int ***pppiVar8;
  undefined *puVar9;
  long *****ppppplVar10;
  undefined2 uVar11;
  long *****ppppplVar12;
  undefined8 *puVar13;
  int *****pppppiVar14;
  long ****pppplVar15;
  long ****pppplVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  ushort uVar20;
  ushort uVar21;
  long lVar22;
  ushort uVar23;
  long *plVar24;
  int **ppiStack_158;
  long ****pppplStack_150;
  long ***ppplStack_148;
  undefined8 uStack_140;
  int **ppiStack_138;
  long ****pppplStack_130;
  long ***ppplStack_128;
  undefined8 uStack_120;
  int ****ppppiStack_118;
  long ****pppplStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  int **ppiStack_f8;
  long ****pppplStack_f0;
  long ***ppplStack_e8;
  undefined8 uStack_e0;
  int **ppiStack_d8;
  long ****pppplStack_d0;
  long ***ppplStack_c8;
  undefined8 uStack_c0;
  long ***ppplStack_b8;
  long ****pppplStack_b0;
  long ***ppplStack_a8;
  undefined8 uStack_a0;
  int ***pppiStack_98;
  long ****pppplStack_90;
  long lStack_88;
  long ****pppplStack_80;
  long *plStack_78;
  char cStack_69;
  long ****pppplStack_68;
  long **pplStack_60;
  undefined8 uStack_58;
  
  ppppplVar10 = &pppplStack_80;
  plVar24 = *(long **)(param_2 + 0x10);
  lVar18 = *param_1;
  if (lVar18 != 0) {
    lVar22 = *plVar24;
    lVar19 = *(long *)(lVar22 + 0x128);
    if (lVar19 == 0) {
      FUN_10a03d37c(&pppplStack_68,*(undefined8 *)(lVar22 + 0xe0));
      FUN_10a03d430(lVar22 + 0x128,&pppplStack_68);
      if (pplStack_60 != (long **)0x0) {
        pplVar3 = pplStack_60 + 1;
        do {
          plVar17 = *pplVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pplVar3,0x10);
          if (bVar6) {
            *pplVar3 = (long *)((long)plVar17 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (plVar17 == (long *)0x0) {
          (*(code *)(*pplStack_60)[2])(pplStack_60);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pplStack_60);
        }
      }
      lVar19 = *(long *)(lVar22 + 0x128);
      lVar18 = *param_1;
    }
    plVar17 = (long *)0x60;
    __Znwm();
    plVar17[1] = 0;
    plVar17[2] = 0;
    *plVar17 = (long)&PTR_DAT_110bad5e8;
    plVar17[3] = (long)FUN_10a7563e0;
    *(undefined1 *)(plVar17 + 0xb) = 3;
    plVar17[4] = (long)&PTR_DAT_110950c70;
    FUN_10a756518(plVar17 + 4,plVar24 + 1);
    *(undefined1 *)(plVar17 + 0xb) = 1;
    plVar24 = (long *)0x60;
    pppplStack_68 = (long ****)(plVar17 + 3);
    pplStack_60 = (long **)plVar17;
    __Znwm();
    plVar17 = plVar24 + 1;
    *plVar17 = 0;
    plVar24[2] = 0;
    *plVar24 = (long)&PTR_DAT_110b9f608;
    pppplStack_80 = (long ****)(plVar24 + 3);
    *pppplStack_80 = (long ***)FUN_10a7566bc;
    plVar24[4] = (long)&PTR_FUN_110c165f0;
    *(undefined1 *)(plVar24 + 0xb) = 1;
    plStack_78 = plVar24;
    FUN_10a341884(lVar19,lVar18,&pppplStack_68,&pppplStack_80);
    do {
      lVar18 = *plVar17;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *plVar17 = lVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plVar24 + 0x10))(plVar24);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
    }
    pplVar3 = pplStack_60;
    if (pplStack_60 != (long **)0x0) {
      plVar24 = (long *)(pplStack_60 + 1);
      do {
        lVar18 = *plVar24;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar6) {
          *plVar24 = lVar18 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar18 == 0) {
        (**(code **)((long)*pplStack_60 + 0x10))(pplStack_60);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar3);
      }
    }
    lVar18 = *(long *)(lVar22 + 0xe0);
    func_0x000107c2b054(&pppplStack_68,&UNK_10f674548);
    func_0x000107c2b054(&pppplStack_80,"true");
    if (lVar18 != 0) {
      ppppplVar10 = *(long ******)(lVar18 + 0x8d8);
      FUN_10a76bdb0(ppppplVar10,&pppplStack_68,&pppplStack_80);
    }
    if (cStack_69 < '\0') {
      ppppplVar10 = (long *****)pppplStack_80;
      __ZdlPv(pppplStack_80);
    }
    if (uStack_58._7_1_ < '\0') {
      __ZdlPv(pppplStack_68);
      ppppplVar10 = (long *****)pppplStack_68;
    }
    return ppppplVar10;
  }
  uStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = plVar24[0xf];
  plVar17 = plVar24 + 0x13;
  lVar19 = *(long *)(*plVar17 + 0x68);
  pppplStack_80 = *(long *****)(*plVar17 + 0x70);
  if ((long *****)pppplStack_80 != (long *****)0x0) {
    ppppplVar10 = (long *****)(pppplStack_80 + 1);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
      if (bVar6) {
        *ppppplVar10 = (long ****)((long)*ppppplVar10 + 1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lStack_88 = lVar19;
  if ((char)plVar24[0x17] == '\x01' && lVar19 != 0) {
    uVar23 = *(ushort *)(lVar19 + 0x1a) >> 8 & 1;
    uVar21 = *(ushort *)(lVar19 + 0x1c) >> 8 & 1;
    uVar20 = *(ushort *)(lVar19 + 0x18) >> 8 & 1;
    if (((*(ushort *)(lVar19 + 0x1a) >> 8 & 1) != 0) &&
       ((*(ushort *)(lVar19 + 0x1c) & 0x100) != 0 && (*(ushort *)(lVar19 + 0x18) & 0x100) != 0)) {
      ppppplVar10 = (long *****)&ppplStack_b8;
      FUN_10a745e5c(ppppplVar10,plVar24 + 0x10,plVar17);
      ppppplVar12 = (long *****)plVar24[0x15];
      if ((ppppplVar12 == (long *****)0x0) || (*(char *)(ppppplVar12 + 8) != '\x02')) {
        if ((ppppplVar12 != (long *****)0x0) && (*(char *)(ppppplVar12 + 8) == '\x01')) {
          ppppplVar10 = (long *****)&ppplStack_b8;
          (*(code *)*ppppplVar12)(ppppplVar10,ppppplVar12);
        }
      }
      else {
        FUN_10a754e08(ppppplVar12,&ppplStack_b8);
        ppppplVar10 = ppppplVar12;
      }
      ppppplVar12 = (long *****)pppplStack_b0;
      if ((long *****)pppplStack_b0 != (long *****)0x0) {
        ppppplVar2 = (long *****)(pppplStack_b0 + 1);
        do {
          pppplVar16 = *ppppplVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppppplVar2,0x10);
          if (bVar6) {
            *ppppplVar2 = (long ****)((long)pppplVar16 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (pppplVar16 == (long ****)0x0) {
          (*(code *)(*pppplStack_b0)[2])(pppplStack_b0);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppppplVar10 = ppppplVar12;
        }
      }
      goto LAB_10a755d84;
    }
  }
  else {
    uVar20 = 0;
    uVar23 = 0;
    uVar21 = 0;
  }
  lVar18 = lVar18 + 0x100;
  FUN_109ce5028(lVar18,plVar24 + 0x10);
  if (lVar18 != 0) {
    lVar22 = (long)*(char *)(lVar18 + 0x3f);
    if (lVar22 < 0) {
      lVar22 = *(long *)(lVar18 + 0x30);
    }
    if (lVar22 != 0) {
      pplStack_60 = (long **)0x0;
      FUN_109fc89b4(&pppiStack_98,lVar18 + 0x28,&plStack_78,1,0);
      if (pplStack_60 == &plStack_78) {
        lVar18 = 0x20;
LAB_10a75584c:
        (**(code **)((long)*pplStack_60 + lVar18))();
      }
      else if (pplStack_60 != (long **)0x0) {
        lVar18 = 0x28;
        goto LAB_10a75584c;
      }
      ppplStack_b8 = (long ***)&pppiStack_98;
      pppplStack_b0 = (long ****)0x0;
      ppplStack_a8 = (long ***)0x0;
      uStack_a0 = 0x8000000000000000;
      if ((char)pppiStack_98 == '\x01') {
        ppppplVar10 = (long *****)pppplStack_90;
        func_0x000109fc8d64(pppplStack_90,&DAT_10f2c4735);
        pppplStack_b0 = (long ****)ppppplVar10;
LAB_10a7558c0:
        ppiStack_d8 = (int **)&pppiStack_98;
        pppplStack_d0 = (long ****)0x0;
        ppplStack_c8 = (long ***)0x0;
        uStack_c0 = 0x8000000000000000;
        if ((char)pppiStack_98 == '\x01') {
          ppppplVar10 = (long *****)pppplStack_90;
          func_0x00010a755fd0(pppplStack_90,&DAT_10f2c5256);
          pppplStack_d0 = (long ****)ppppplVar10;
        }
        else {
          if ((char)pppiStack_98 == '\x02') goto LAB_10a7558e4;
          uStack_c0 = 1;
        }
        ppiStack_f8 = (int **)&pppiStack_98;
        pppplStack_f0 = (long ****)0x0;
        ppplStack_e8 = (long ***)0x0;
        uStack_e0 = 0x8000000000000000;
        if ((char)pppiStack_98 == '\x01') {
          ppppplVar10 = (long *****)pppplStack_90;
          func_0x00010a756054(pppplStack_90,"gender");
          pppplStack_f0 = (long ****)ppppplVar10;
        }
        else {
          if ((char)pppiStack_98 == '\x02') goto LAB_10a755948;
          uStack_e0 = 1;
        }
        pppplStack_110 = (long ****)0x0;
        uStack_108 = (long ****)0x0;
        uStack_100 = 0x8000000000000000;
        if ((char)pppiStack_98 == '\x01') {
          pppplStack_110 = pppplStack_90 + 1;
        }
        else {
          if ((char)pppiStack_98 == '\x02') goto LAB_10a755960;
          uStack_100 = 1;
        }
      }
      else {
        if ((char)pppiStack_98 != '\x02') {
          uStack_a0 = 1;
          goto LAB_10a7558c0;
        }
        ppplStack_a8 = pppplStack_90[1];
LAB_10a7558e4:
        uStack_c0 = 0x8000000000000000;
        pppplStack_d0 = (long ****)0x0;
        ppplStack_c8 = pppplStack_90[1];
        ppiStack_d8 = (int **)&pppiStack_98;
LAB_10a755948:
        uStack_e0 = 0x8000000000000000;
        pppplStack_f0 = (long ****)0x0;
        ppplStack_e8 = pppplStack_90[1];
        ppiStack_f8 = (int **)&pppiStack_98;
LAB_10a755960:
        uStack_100 = 0x8000000000000000;
        pppplStack_110 = (long ****)0x0;
        uStack_108 = (long ****)pppplStack_90[1];
      }
      ppppiStack_118 = &pppiStack_98;
      pppplVar16 = &ppplStack_b8;
      func_0x000109379420(pppplVar16,&ppppiStack_118);
      if (((ulong)pppplVar16 & 1) == 0) {
        ppiStack_138 = (int **)&pppiStack_98;
        pppplStack_130 = (long ****)0x0;
        ppplStack_128 = (long ***)0x0;
        uStack_120 = 0x8000000000000000;
        if ((char)pppiStack_98 == '\x02') {
          ppplStack_128 = pppplStack_90[1];
        }
        else if ((char)pppiStack_98 == '\x01') {
          pppplStack_130 = pppplStack_90 + 1;
        }
        else {
          uStack_120 = 1;
        }
        pppiVar8 = &ppiStack_d8;
        func_0x000109379420(pppiVar8,&ppiStack_138);
        if (((ulong)pppiVar8 & 1) != 0) goto LAB_10a755df8;
        ppiStack_158 = (int **)&pppiStack_98;
        pppplStack_150 = (long ****)0x0;
        ppplStack_148 = (long ***)0x0;
        uStack_140 = 0x8000000000000000;
        if ((char)pppiStack_98 == '\x02') {
          ppplStack_148 = pppplStack_90[1];
        }
        else if ((char)pppiStack_98 == '\x01') {
          pppplStack_150 = pppplStack_90 + 1;
        }
        else {
          uStack_140 = 1;
        }
        pppiVar8 = &ppiStack_f8;
        func_0x000109379420(pppiVar8,&ppiStack_158);
        if (((ulong)pppiVar8 & 1) != 0) goto LAB_10a755df8;
        lVar18 = *plVar17;
        if (*(int *)(lVar18 + 0x50) == 1) {
          lVar19 = *(long *)(lVar18 + 0x58);
          plVar4 = *(long **)(lVar18 + 0x60);
          if (plVar4 != (long *)0x0) {
            plVar1 = plVar4 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = *plVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            do {
              lVar18 = *plVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = lVar18 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar18 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
            }
          }
          if (lVar19 == 0) goto LAB_10a755e14;
          func_0x00010937b950(&ppplStack_b8);
          func_0x00010937ba88();
          lVar18 = *(long *)(*plVar17 + 0x58);
          plVar4 = *(long **)(*plVar17 + 0x60);
          if (plVar4 == (long *)0x0) {
            *(bool *)(lVar18 + 0x18) = (byte)ppppiStack_118 == '\x02';
          }
          else {
            plVar1 = plVar4 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = *plVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            *(bool *)(lVar18 + 0x18) = (byte)ppppiStack_118 == '\x02';
            do {
              lVar18 = *plVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = lVar18 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar18 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
            }
          }
LAB_10a755cec:
          FUN_10a745e5c(&ppppiStack_118,plVar24 + 0x10,plVar17);
          puVar13 = (undefined8 *)plVar24[0x15];
          if ((puVar13 == (undefined8 *)0x0) || (*(char *)(puVar13 + 8) != '\x02')) {
            if ((puVar13 != (undefined8 *)0x0) && (*(char *)(puVar13 + 8) == '\x01')) {
              (*(code *)*puVar13)(&ppppiStack_118,puVar13);
            }
          }
          else {
            FUN_10a754e08(puVar13,&ppppiStack_118);
          }
          pppplVar16 = pppplStack_110;
          if ((long *****)pppplStack_110 != (long *****)0x0) {
            ppppplVar10 = (long *****)(pppplStack_110 + 1);
            do {
              pppplVar15 = *ppppplVar10;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
              if (bVar6) {
                *ppppplVar10 = (long ****)((long)pppplVar15 + -1);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (pppplVar15 == (long ****)0x0) {
              (*(code *)(*pppplStack_110)[2])(pppplStack_110);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar16);
            }
          }
          ppppplVar10 = &pppplStack_90;
          func_0x000109380ffc(ppppplVar10,(char)pppiStack_98);
LAB_10a755d84:
          ppppplVar12 = (long *****)pppplStack_80;
          if ((long *****)pppplStack_80 != (long *****)0x0) {
            ppppplVar2 = (long *****)(pppplStack_80 + 1);
            do {
              pppplVar16 = *ppppplVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(ppppplVar2,0x10);
              if (bVar6) {
                *ppppplVar2 = (long ****)((long)pppplVar16 + -1);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (pppplVar16 == (long ****)0x0) {
              (*(code *)(*pppplStack_80)[2])(pppplStack_80);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              ppppplVar10 = ppppplVar12;
            }
          }
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == uStack_58) {
            return ppppplVar10;
          }
          ___stack_chk_fail();
          func_0x000109380ffc(&pppplStack_90,(char)pppiStack_98);
          func_0x00010a75f544(&lStack_88);
          __Unwind_Resume();
          FUN_10a7569b8(ppppplVar10 + 9);
          FUN_10a757ff0(ppppplVar10 + 7);
          if (*(char *)((long)ppppplVar10 + 0x37) < '\0') {
            __ZdlPv(ppppplVar10[4]);
          }
          if (*(char *)((long)ppppplVar10 + 0x17) < '\0') {
            __ZdlPv(*ppppplVar10);
          }
          return ppppplVar10;
        }
        if ((*(int *)(lVar18 + 0x50) == 2) && (lVar19 != 0)) {
          if (uVar23 == 0) {
            func_0x00010937b950(&ppplStack_b8);
            func_0x00010937ba88();
            *(ushort *)(lVar19 + 0x1a) = (byte)ppppiStack_118 | 0x100;
          }
          if (uVar21 == 0) {
            func_0x00010937b950(&ppiStack_d8);
            func_0x00010937ba88();
            *(ushort *)(lVar19 + 0x1c) = (byte)ppppiStack_118 | 0x100;
          }
          if (uVar20 != 0) goto LAB_10a755cec;
          func_0x00010937b950(&ppiStack_f8);
          func_0x00010937c804(&ppppiStack_118);
          if ((long)uStack_108 < 0) {
            if ((long *****)pppplStack_110 == (long *****)0x4) {
              if (*(int *)ppppiStack_118 != 0x656c616d) goto LAB_10a755cdc;
              uVar11 = 0x101;
            }
            else {
              pppppiVar14 = (int *****)ppppiStack_118;
              if ((long *****)pppplStack_110 == (long *****)0x6) goto LAB_10a755c68;
LAB_10a755cdc:
              uVar11 = 0x100;
            }
            *(undefined2 *)(lVar19 + 0x18) = uVar11;
LAB_10a755ce4:
            __ZdlPv(ppppiStack_118);
          }
          else {
            if (uStack_108._7_1_ == '\x04') {
              if ((int)ppppiStack_118 != 0x656c616d) goto LAB_10a755cb8;
              uVar11 = 0x101;
            }
            else {
              if (uStack_108._7_1_ == '\x06') {
                pppppiVar14 = &ppppiStack_118;
LAB_10a755c68:
                uVar11 = 0x102;
                if (*(short *)((long)pppppiVar14 + 4) != 0x656c || *(int *)pppppiVar14 != 0x616d6566
                   ) {
                  uVar11 = 0x100;
                }
                *(undefined2 *)(lVar19 + 0x18) = uVar11;
                if (-1 < (long)uStack_108) goto LAB_10a755cec;
                goto LAB_10a755ce4;
              }
LAB_10a755cb8:
              uVar11 = 0x100;
            }
            *(undefined2 *)(lVar19 + 0x18) = uVar11;
          }
          goto LAB_10a755cec;
        }
LAB_10a755e14:
        puVar9 = &UNK_10f674511;
      }
      else {
LAB_10a755df8:
        puVar9 = &UNK_10f6744d3;
      }
      FUN_10a00946c(puVar9);
      goto LAB_10a755e20;
    }
  }
  FUN_10a00946c(&UNK_10f6744a7);
LAB_10a755e20:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a755e24);
  (*pcVar7)();
}



/* Entry: 10a7563e0; end: 10a756517;  */

void FUN_10a7563e0(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_2 + 0x10);
  lVar5 = *param_1;
  plVar6 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  if ((lVar5 == 0) || (___dynamic_cast(lVar5,&PTR_DAT_110c42c58,&PTR_DAT_110c480a8,0), lVar5 == 0))
  {
    FUN_10a00946c(&UNK_10f67456e);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a7564f4);
    (*pcVar4)();
  }
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
  }
  FUN_10a755580(*(undefined8 *)(lVar7 + 0x60),lVar7,lVar5);
  FUN_10a755710(lVar7 + 0x18);
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
  return;
}



/* Entry: 10a756518; end: 10a75663b;  */

undefined8 * FUN_10a756518(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  *param_1 = &PTR_FUN_110c165d0;
  puVar4 = (undefined8 *)0x68;
  __Znwm();
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(puVar4,*param_2,param_2[1]);
  }
  else {
    uVar6 = *param_2;
    puVar4[1] = param_2[1];
    *puVar4 = uVar6;
    puVar4[2] = param_2[2];
  }
  puVar4[3] = param_2[3];
  if (*(char *)((long)param_2 + 0x37) < '\0') {
    func_0x000107c3192c(puVar4 + 4,param_2[4],param_2[5]);
  }
  else {
    uVar6 = param_2[4];
    puVar4[5] = param_2[5];
    puVar4[4] = uVar6;
    puVar4[6] = param_2[6];
  }
  lVar5 = param_2[8];
  uVar6 = param_2[7];
  puVar4[8] = param_2[8];
  puVar4[7] = uVar6;
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
  lVar5 = param_2[10];
  uVar6 = param_2[9];
  puVar4[10] = param_2[10];
  puVar4[9] = uVar6;
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
  *(undefined1 *)(puVar4 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  puVar4[0xc] = param_2[0xc];
  param_1[1] = puVar4;
  return param_1;
}



/* Entry: 10a75663c; end: 10a75669b;  */

void FUN_10a75663c(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_10a7569b8(puVar1 + 9);
    FUN_10a757ff0(puVar1 + 7);
    if (*(char *)((long)puVar1 + 0x37) < '\0') {
      __ZdlPv(puVar1[4]);
    }
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      __ZdlPv(*puVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 10a75669c; end: 10a7566bb;  */

void FUN_10a75669c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a7566bc; end: 10a756707;  */

void FUN_10a7566bc(undefined8 param_1)

{
  code *pcVar1;
  undefined1 auStack_38 [24];
  
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_38,&UNK_10f6745af,param_1);
  FUN_10a0029c0(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a7566ec);
  (*pcVar1)();
}



/* Entry: 10a756708; end: 10a75672b;  */

void FUN_10a756708(void)

{
  return;
}



/* Entry: 10a75672c; end: 10a7567ab;  */

void FUN_10a75672c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_10a7569b8(lVar1 + 0xa8);
    FUN_10a757ff0(lVar1 + 0x98);
    if (*(char *)(lVar1 + 0x97) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x80));
    }
    FUN_10a7569b8(lVar1 + 0x50);
    FUN_10a757ff0(lVar1 + 0x40);
    if (*(char *)(lVar1 + 0x3f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x28));
    }
    if (*(char *)(lVar1 + 0x1f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 8));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a7567ac; end: 10a7567c3;  */

void FUN_10a7567ac(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a7567c4; end: 10a756823;  */

void FUN_10a7567c4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110c16610;
  uVar1 = 0xc0;
  __Znwm();
  FUN_10a756824();
  param_1[1] = uVar1;
  return;
}



/* Entry: 10a756824; end: 10a7569b7;  */

undefined8 * FUN_10a756824(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    func_0x000107c3192c(param_1 + 1,param_2[1],param_2[2]);
  }
  else {
    uVar6 = param_2[2];
    uVar5 = param_2[1];
    param_1[3] = param_2[3];
    param_1[2] = uVar6;
    param_1[1] = uVar5;
  }
  param_1[4] = param_2[4];
  if (*(char *)((long)param_2 + 0x3f) < '\0') {
    func_0x000107c3192c(param_1 + 5,param_2[5],param_2[6]);
  }
  else {
    uVar6 = param_2[6];
    uVar5 = param_2[5];
    param_1[7] = param_2[7];
    param_1[6] = uVar6;
    param_1[5] = uVar5;
  }
  lVar4 = param_2[9];
  uVar5 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar5;
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
  lVar4 = param_2[0xb];
  uVar5 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar5;
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
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  param_1[0xd] = param_2[0xd];
  param_1[0xf] = param_2[0xf];
  if (*(char *)((long)param_2 + 0x97) < '\0') {
    func_0x000107c3192c(param_1 + 0x10,param_2[0x10],param_2[0x11]);
  }
  else {
    uVar6 = param_2[0x11];
    uVar5 = param_2[0x10];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar6;
    param_1[0x10] = uVar5;
  }
  lVar4 = param_2[0x14];
  uVar5 = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar5;
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
  lVar4 = param_2[0x16];
  uVar5 = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x15] = uVar5;
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
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0x17);
  return param_1;
}



/* Entry: 10a7569b8; end: 10a756a0f;  */

long FUN_10a7569b8(long param_1)

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



/* Entry: 10a756a10; end: 10a756aab;  */

void FUN_10a756a10(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (param_4 != 0) {
    FUN_10a756aac(param_1,param_4);
    puVar4 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      lVar5 = param_2[1];
      uVar6 = *param_2;
      puVar4[1] = param_2[1];
      *puVar4 = uVar6;
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
      puVar4 = puVar4 + 2;
    }
    *(undefined8 **)(param_1 + 8) = puVar4;
  }
  return;
}



/* Entry: 10a756aac; end: 10a756ae3;  */

undefined1  [16] FUN_10a756aac(long *param_1,ulong param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  if (param_2 >> 0x3c == 0) {
    plVar4 = param_1;
    FUN_10a756af8();
    *param_1 = (long)plVar4;
    param_1[1] = (long)plVar4;
    param_1[2] = (long)(plVar4 + param_2 * 2);
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = plVar4;
    return auVar8;
  }
  FUN_10a756ae4();
  plVar4 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    lVar5 = param_2 << 4;
    __Znwm(lVar5);
    auVar9._8_8_ = param_2;
    auVar9._0_8_ = lVar5;
    return auVar9;
  }
  func_0x000109ffded8();
  lVar5 = plVar4[1];
  if (lVar5 != 0) {
    func_0x0001092b4274();
  }
  plVar6 = (long *)*plVar4;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar7 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar7 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  auVar10._8_8_ = lVar5;
  auVar10._0_8_ = plVar4;
  return auVar10;
}



/* Entry: 10a756ae4; end: 10a756af7;  */

undefined1  [16] FUN_10a756ae4(undefined8 param_1,ulong param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  plVar4 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    lVar5 = param_2 << 4;
    __Znwm(lVar5);
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = lVar5;
    return auVar8;
  }
  func_0x000109ffded8();
  lVar5 = plVar4[1];
  if (lVar5 != 0) {
    func_0x0001092b4274();
  }
  plVar6 = (long *)*plVar4;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar7 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar7 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  auVar9._8_8_ = lVar5;
  auVar9._0_8_ = plVar4;
  return auVar9;
}



/* Entry: 10a756af8; end: 10a756b9f;  */

undefined1  [16] FUN_10a756af8(long *param_1,ulong param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (param_2 >> 0x3c == 0) {
    lVar4 = param_2 << 4;
    __Znwm(lVar4);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = lVar4;
    return auVar7;
  }
  func_0x000109ffded8();
  lVar4 = param_1[1];
  if (lVar4 != 0) {
    func_0x0001092b4274();
  }
  plVar5 = (long *)*param_1;
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
  auVar8._8_8_ = lVar4;
  auVar8._0_8_ = param_1;
  return auVar8;
}



/* Entry: 10a756ba0; end: 10a756c53;  */

void FUN_10a756ba0(ulong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  if (param_4 != (undefined8 *)0x0) {
    if ((ulong)param_4 >> 0x3c != 0) {
      FUN_10a756c54();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a756c40);
      (*pcVar4)();
    }
    puVar5 = param_2;
    FUN_10a756c68();
    *param_1 = (ulong)param_4;
    param_1[1] = (ulong)param_4;
    param_1[2] = (ulong)(param_4 + (long)puVar5 * 2);
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      lVar6 = param_2[1];
      uVar7 = *param_2;
      param_4[1] = param_2[1];
      *param_4 = uVar7;
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
      param_4 = param_4 + 2;
    }
    param_1[1] = (ulong)param_4;
  }
  return;
}



/* Entry: 10a756c54; end: 10a756c67;  */

void FUN_10a756c54(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)plVar1 >> 0x3c == 0) {
    __Znwm((long)plVar1 << 4);
    return;
  }
  func_0x000109ffded8();
  plVar4 = (long *)*plVar1;
  lVar5 = *plVar4;
  if (lVar5 != 0) {
    lVar2 = plVar4[1];
    lVar3 = lVar5;
    if (lVar2 != lVar5) {
      do {
        lVar2 = lVar2 + -0x10;
        FUN_10a765960();
      } while (lVar2 != lVar5);
      lVar3 = *(long *)*plVar1;
    }
    plVar4[1] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar3);
    return;
  }
  return;
}



/* Entry: 10a756c68; end: 10a756c9b;  */

void FUN_10a756c68(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if ((ulong)param_1 >> 0x3c == 0) {
    __Znwm((long)param_1 << 4);
    return;
  }
  func_0x000109ffded8();
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_10a765960();
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



/* Entry: 10a756c9c; end: 10a756ddb;  */

void FUN_10a756c9c(long *param_1)

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
        FUN_10a765960();
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



/* Entry: 10a756ddc; end: 10a756f17;  */

undefined1  [16] FUN_10a756ddc(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  ulong auStack_68 [2];
  char cStack_58;
  
  uVar4 = param_2;
  if (param_2 == 0) {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      __ZdlPv();
      uVar4 = param_2;
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000109ffded8();
      FUN_10a756fac(auStack_68);
      uVar5 = auStack_68[0];
      FUN_10a757038(param_1);
      uVar4 = auStack_68[0];
      if (((uVar5 & 1) == 0) && (auStack_68[0] = 0, uVar4 != 0)) {
        if (cStack_58 == '\x01') {
          func_0x00010a75737c(uVar4 + 0x10);
        }
        __ZdlPv(uVar4);
      }
      auVar12._8_8_ = uVar5 & 0xff;
      auVar12._0_8_ = param_1;
      return auVar12;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar5 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (param_2 != uVar5);
    plVar7 = (long *)param_1[2];
    if (plVar7 != (long *)0x0) {
      uVar5 = plVar7[1];
      uVar6 = param_2 - 1;
      if ((param_2 & uVar6) == 0) {
        uVar5 = uVar5 & uVar6;
      }
      else if (param_2 <= uVar5) {
        uVar10 = 0;
        if (param_2 != 0) {
          uVar10 = uVar5 / param_2;
        }
        uVar5 = uVar5 - uVar10 * param_2;
      }
      *(long **)(*param_1 + uVar5 * 8) = param_1 + 2;
      plVar8 = (long *)*plVar7;
      while (plVar8 != (long *)0x0) {
        uVar10 = plVar8[1];
        if ((param_2 & uVar6) == 0) {
          uVar10 = uVar10 & uVar6;
        }
        else if (param_2 <= uVar10) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar10 / param_2;
          }
          uVar10 = uVar10 - uVar1 * param_2;
        }
        plVar9 = plVar8;
        if (uVar10 != uVar5) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + uVar10 * 8) == 0) {
            *(long **)(lVar2 + uVar10 * 8) = plVar7;
            uVar5 = uVar10;
          }
          else {
            *plVar7 = *plVar8;
            *plVar8 = **(undefined8 **)(lVar2 + uVar10 * 8);
            **(long **)(lVar2 + uVar10 * 8) = (long)plVar8;
            plVar9 = plVar7;
          }
        }
        plVar7 = plVar9;
        plVar8 = (long *)*plVar9;
      }
    }
  }
  auVar11._8_8_ = uVar4;
  auVar11._0_8_ = lVar3;
  return auVar11;
}



/* Entry: 10a756f18; end: 10a756fab;  */

undefined1  [16] FUN_10a756f18(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  ulong auStack_48 [2];
  char cStack_38;
  
  FUN_10a756fac(auStack_48);
  uVar2 = auStack_48[0];
  FUN_10a757038(param_1);
  uVar1 = auStack_48[0];
  if ((uVar2 & 1) == 0) {
    auStack_48[0] = 0;
    if (uVar1 != 0) {
      if (cStack_38 == '\x01') {
        func_0x00010a75737c(uVar1 + 0x10);
      }
      __ZdlPv(uVar1);
    }
  }
  auVar3._8_8_ = uVar2 & 0xff;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a756fac; end: 10a757037;  */

void FUN_10a756fac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  FUN_10a757098(puVar1 + 2,param_3,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  func_0x000107c2b05c(param_2,puVar1 + 2);
  puVar1[1] = param_2;
  return;
}



/* Entry: 10a757038; end: 10a757097;  */

undefined1  [16] FUN_10a757038(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  lVar2 = param_1;
  func_0x000107c2b05c(param_1,param_2 + 0x10);
  *(long *)(param_2 + 8) = lVar2;
  lVar3 = param_1;
  FUN_10a757160(param_1,lVar2,param_2 + 0x10);
  bVar1 = lVar3 == 0;
  if (bVar1) {
    FUN_10a757294(param_1,param_2);
    lVar3 = param_2;
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 10a757098; end: 10a75715f;  */

ulong * FUN_10a757098(ulong *param_1,undefined8 *param_2,undefined1 *param_3)

{
  ulong *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  ulong uVar5;
  undefined8 uVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  uVar5 = param_2[1];
  if (0x7ffffffffffffff7 < uVar5) {
    func_0x000109ffde50();
    if (*(char *)((long)unaff_x19 + 0x17) < '\0') {
      __ZdlPv(*unaff_x19);
    }
    __Unwind_Resume();
    puVar8 = (undefined8 *)param_1[1];
    if (puVar8 != (undefined8 *)0x0) {
      uVar5 = (long)puVar8 - 1;
      if (((ulong)puVar8 & uVar5) == 0) {
        puVar9 = (undefined8 *)(uVar5 & (ulong)param_2);
      }
      else {
        uVar4 = 0;
        if (puVar8 != (undefined8 *)0x0) {
          uVar4 = (ulong)param_2 / (ulong)puVar8;
        }
        puVar9 = param_2;
        if (puVar8 <= param_2) {
          puVar9 = (undefined8 *)((long)param_2 - uVar4 * (long)puVar8);
        }
      }
      plVar2 = *(long **)(*param_1 + (long)puVar9 * 8);
      if (plVar2 != (long *)0x0) {
        for (puVar7 = (ulong *)*plVar2; puVar7 != (ulong *)0x0; puVar7 = (ulong *)*puVar7) {
          puVar3 = (undefined8 *)puVar7[1];
          if (puVar3 == param_2) {
            puVar1 = param_1;
            func_0x000107c2b068(param_1,puVar7 + 2,param_3);
            if (((ulong)puVar1 & 1) != 0) {
              return puVar7;
            }
          }
          else {
            if (((ulong)puVar8 & uVar5) == 0) {
              puVar3 = (undefined8 *)((ulong)puVar3 & uVar5);
            }
            else if (puVar8 <= puVar3) {
              uVar4 = 0;
              if (puVar8 != (undefined8 *)0x0) {
                uVar4 = (ulong)puVar3 / (ulong)puVar8;
              }
              puVar3 = (undefined8 *)((long)puVar3 - uVar4 * (long)puVar8);
            }
            if (puVar3 != puVar9) break;
          }
        }
      }
    }
    if ((puVar8 == (undefined8 *)0x0) ||
       (*(float *)(param_1 + 4) * (float)puVar8 < (float)(param_1[3] + 1))) {
      uVar5 = 1;
      if ((undefined8 *)0x2 < puVar8) {
        uVar5 = (ulong)(((ulong)puVar8 & (long)puVar8 - 1U) != 0);
      }
      uVar5 = uVar5 | (long)puVar8 << 1;
      uVar4 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
      if (uVar5 <= uVar4) {
        uVar5 = uVar4;
      }
      func_0x00010a756d0c(param_1,uVar5);
    }
    return (ulong *)0x0;
  }
  uVar6 = *param_2;
  if (uVar5 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar5;
    puVar1 = param_1;
    if (uVar5 == 0) goto LAB_10a757118;
  }
  else {
    puVar7 = (ulong *)0x19;
    if ((uVar5 | 7) != 0x17) {
      puVar7 = (ulong *)((uVar5 | 7) + 1);
    }
    puVar1 = puVar7;
    __Znwm();
    param_1[1] = uVar5;
    param_1[2] = (ulong)puVar7 | 0x8000000000000000;
    *param_1 = (ulong)puVar1;
  }
  _memmove(puVar1,uVar6,uVar5);
LAB_10a757118:
  *(undefined1 *)((long)puVar1 + uVar5) = 0;
  FUN_10a0ec4f4(param_1 + 3,*param_3);
  return param_1;
}



/* Entry: 10a757160; end: 10a757293;  */

long FUN_10a757160(long *param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar6 = uVar5 - 1;
    if ((uVar5 & uVar6) == 0) {
      uVar7 = uVar6 & param_2;
    }
    else {
      uVar4 = 0;
      if (uVar5 != 0) {
        uVar4 = param_2 / uVar5;
      }
      uVar7 = param_2;
      if (uVar5 <= param_2) {
        uVar7 = param_2 - uVar4 * uVar5;
      }
    }
    plVar3 = *(long **)(*param_1 + uVar7 * 8);
    if (plVar3 != (long *)0x0) {
      for (plVar3 = (long *)*plVar3; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        uVar4 = plVar3[1];
        if (uVar4 == param_2) {
          plVar2 = param_1;
          func_0x000107c2b068(param_1,plVar3 + 2,param_3);
          if (((ulong)plVar2 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if ((uVar5 & uVar6) == 0) {
            uVar4 = uVar4 & uVar6;
          }
          else if (uVar5 <= uVar4) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar4 / uVar5;
            }
            uVar4 = uVar4 - uVar1 * uVar5;
          }
          if (uVar4 != uVar7) break;
        }
      }
    }
  }
  if ((uVar5 == 0) || (*(float *)(param_1 + 4) * (float)uVar5 < (float)(param_1[3] + 1))) {
    uVar6 = 1;
    if (2 < uVar5) {
      uVar6 = (ulong)((uVar5 & uVar5 - 1) != 0);
    }
    uVar6 = uVar6 | uVar5 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar5) {
      uVar6 = uVar5;
    }
    func_0x00010a756d0c(param_1,uVar6);
  }
  return 0;
}



/* Entry: 10a757294; end: 10a757333;  */

void FUN_10a757294(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  uVar2 = param_1[1];
  uVar4 = param_2[1];
  uVar3 = uVar2 - 1;
  if ((uVar2 & uVar3) == 0) {
    uVar4 = uVar3 & uVar4;
  }
  else if (uVar2 <= uVar4) {
    uVar1 = 0;
    if (uVar2 != 0) {
      uVar1 = uVar4 / uVar2;
    }
    uVar4 = uVar4 - uVar1 * uVar2;
  }
  lVar6 = *param_1;
  plVar5 = *(long **)(lVar6 + uVar4 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *param_2 = *plVar5;
    *plVar5 = (long)param_2;
    *(long **)(lVar6 + uVar4 * 8) = plVar5;
    if (*param_2 == 0) goto LAB_10a757324;
    uVar4 = *(ulong *)(*param_2 + 8);
    if ((uVar2 & uVar3) == 0) {
      uVar4 = uVar4 & uVar3;
    }
    else if (uVar2 <= uVar4) {
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = uVar4 / uVar2;
      }
      uVar4 = uVar4 - uVar3 * uVar2;
    }
    plVar5 = (long *)(*param_1 + uVar4 * 8);
  }
  else {
    *param_2 = *plVar5;
  }
  *plVar5 = (long)param_2;
LAB_10a757324:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10a757334; end: 10a7573bf;  */

void FUN_10a757334(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a75737c(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a7573c0; end: 10a757453;  */

undefined1  [16] FUN_10a7573c0(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  ulong auStack_48 [2];
  char cStack_38;
  
  FUN_10a757454(auStack_48);
  uVar2 = auStack_48[0];
  FUN_10a757038(param_1);
  uVar1 = auStack_48[0];
  if ((uVar2 & 1) == 0) {
    auStack_48[0] = 0;
    if (uVar1 != 0) {
      if (cStack_38 == '\x01') {
        func_0x00010a75737c(uVar1 + 0x10);
      }
      __ZdlPv(uVar1);
    }
  }
  auVar3._8_8_ = uVar2 & 0xff;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a757454; end: 10a7574df;  */

void FUN_10a757454(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  FUN_10a7574e0(puVar1 + 2,param_3,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  func_0x000107c2b05c(param_2,puVar1 + 2);
  puVar1[1] = param_2;
  return;
}



/* Entry: 10a7574e0; end: 10a7575a7;  */

long * FUN_10a7574e0(long *param_1,undefined8 *param_2,undefined4 *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 *unaff_x19;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar4 = param_2[1];
  if (0x7ffffffffffffff7 < uVar4) {
    func_0x000109ffde50();
    if (*(char *)((long)unaff_x19 + 0x17) < '\0') {
      __ZdlPv(*unaff_x19);
    }
    __Unwind_Resume();
    func_0x00010a7575e0();
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    return param_1;
  }
  uVar5 = *param_2;
  if (uVar4 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar4;
    plVar2 = param_1;
    if (uVar4 == 0) goto LAB_10a757560;
  }
  else {
    plVar1 = (long *)0x19;
    if ((uVar4 | 7) != 0x17) {
      plVar1 = (long *)((uVar4 | 7) + 1);
    }
    plVar2 = plVar1;
    __Znwm();
    param_1[1] = uVar4;
    param_1[2] = (ulong)plVar1 | 0x8000000000000000;
    *param_1 = (long)plVar2;
  }
  _memmove(plVar2,uVar5,uVar4);
LAB_10a757560:
  *(undefined1 *)((long)plVar2 + uVar4) = 0;
  FUN_10a0ec5bc(param_1 + 3,*param_3);
  return param_1;
}



/* Entry: 10a7575a8; end: 10a75761b;  */

long * FUN_10a7575a8(long *param_1)

{
  long lVar1;
  
  func_0x00010a7575e0(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a75761c; end: 10a7576b3;  */

void FUN_10a75761c(long *param_1,code **param_2,code **param_3,ulong param_4)

{
  undefined8 **ppuVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  code **ppcVar9;
  code **ppcVar10;
  code **ppcVar11;
  code **ppcVar12;
  undefined8 *puVar13;
  long *unaff_x22;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  long *plStack_140;
  code **ppcStack_138;
  code **ppcStack_130;
  undefined8 **ppuStack_128;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  code *pcStack_110;
  undefined8 **ppuStack_108;
  undefined8 **ppuStack_100;
  code *pcStack_f8;
  code *pcStack_f0;
  undefined8 **ppuStack_e8;
  code *pcStack_e0;
  code *pcStack_d8;
  code *pcStack_c8;
  undefined8 *apuStack_c0 [7];
  long lStack_88;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  if (param_4 < 0x7ffffffffffffff8) {
    if (param_4 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)param_4;
      plVar5 = param_1;
    }
    else {
      plVar6 = (long *)0x19;
      if ((param_4 | 7) != 0x17) {
        plVar6 = (long *)((param_4 | 7) + 1);
      }
      plVar5 = plVar6;
      __Znwm();
      param_1[1] = param_4;
      param_1[2] = (ulong)plVar6 | 0x8000000000000000;
      *param_1 = (long)plVar5;
    }
    for (; param_2 != param_3; param_2 = (code **)((long)param_2 + 1)) {
      *(undefined1 *)plVar5 = *(undefined1 *)param_2;
      plVar5 = (long *)((long)plVar5 + 1);
    }
    *(undefined1 *)plVar5 = 0;
    return;
  }
  func_0x000109ffde50();
  if ((param_1 != (long *)0x0) && ((char)param_1[8] == '\x02')) {
    ppcVar12 = &pcStack_110;
    pcStack_48 = FUN_10a7576b4;
    lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar6 = param_1;
    ppcVar9 = param_2;
    ppcVar11 = param_3;
    puStack_50 = &stack0xfffffffffffffff0;
    FUN_10a688b40();
    if (plVar6 == (long *)0x0) {
      ppcVar10 = (code **)0x0;
      ppuVar7 = (undefined8 **)0x0;
      if (ppcVar9 != (code **)0x0) {
        ppuStack_108 = (undefined8 **)param_1[1];
        pcStack_110 = (code *)*param_1;
        if (param_1[1] != 0) {
          plVar6 = (long *)(param_1[1] + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = *plVar6 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          func_0x000107c3192c(&ppuStack_100,*param_2,param_2[1]);
        }
        else {
          pcStack_f8 = param_2[1];
          ppuStack_100 = (undefined8 **)*param_2;
          pcStack_f0 = param_2[2];
        }
        if (*(char *)((long)param_3 + 0x17) < '\0') {
          func_0x000107c3192c(&ppuStack_e8,*param_3,param_3[1]);
        }
        else {
          pcStack_e0 = param_3[1];
          ppuStack_e8 = (undefined8 **)*param_3;
          pcStack_d8 = param_3[2];
        }
        pcStack_c8 = FUN_10a757c44;
        param_3 = &pcStack_c8;
        FUN_10a757cc0(apuStack_c0,&PTR_FUN_110c17200,&pcStack_110);
        ppcVar10 = &pcStack_c8;
        FUN_10a4634ec(ppcVar9,ppcVar10);
        ppuVar7 = apuStack_c0;
        (*(code *)*apuStack_c0[0])();
        ppcVar11 = ppcVar12;
        if ((long)pcStack_d8 < 0) {
          ppuVar7 = ppuStack_e8;
          __ZdlPv();
          ppcVar11 = ppcVar12;
        }
        if ((long)pcStack_f0 < 0) {
          ppuVar7 = ppuStack_100;
          __ZdlPv();
        }
        ppuVar8 = ppuStack_108;
        if (ppuStack_108 != (undefined8 **)0x0) {
          ppuVar1 = ppuStack_108 + 1;
          do {
            puVar13 = *ppuVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
            if (bVar3) {
              *ppuVar1 = (undefined8 *)((long)puVar13 + -1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (puVar13 == (undefined8 *)0x0) {
            (*(code *)(*ppuStack_108)[2])(ppuStack_108);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppuVar7 = ppuVar8;
          }
        }
      }
    }
    else {
      *plVar6 = CONCAT44((int)((ulong)*plVar6 >> 0x20) + 1,(int)*plVar6 + 1);
      ppuVar7 = (undefined8 **)*param_1;
      ppcVar10 = param_2;
      ppcVar11 = param_3;
      FUN_10a75792c(ppuVar7,param_2,param_3);
      iVar4 = *(int *)((long)plVar6 + 4) + -1;
      *(int *)((long)plVar6 + 4) = iVar4;
      unaff_x22 = plVar6;
      if (iVar4 == 0) {
        *(undefined4 *)plVar6 = 0;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
      return;
    }
    ___stack_chk_fail();
    if ((long)pcStack_f0 < 0) {
      __ZdlPv(ppuStack_100);
    }
    func_0x00010a004dac(&pcStack_110);
    ppuVar8 = ppuVar7;
    __Unwind_Resume();
    pcStack_118 = FUN_10a75792c;
    plStack_140 = unaff_x22;
    ppcStack_138 = param_2;
    ppcStack_130 = param_3;
    ppuStack_128 = ppuVar7;
    ppuStack_120 = &puStack_50;
    func_0x000109884c0c(&puStack_150,ppuVar8 + 1,*ppuVar8);
    func_0x000109884820(&puStack_148,&puStack_150,*ppuVar8);
    if (puStack_150 != (undefined8 *)0x0) {
      (**(code **)*puStack_150)();
    }
    (**(code **)(**ppuVar8 + 0x30))(&puStack_150);
    FUN_10a757a68(*ppuVar8,&puStack_150,&puStack_148,ppcVar10,ppcVar11);
    if (puStack_150 != (undefined8 *)0x0) {
      (**(code **)*puStack_150)();
    }
    if (puStack_148 != (undefined8 *)0x0) {
      (**(code **)*puStack_148)();
    }
    return;
  }
  if ((param_1 != (long *)0x0) && ((char)param_1[8] == '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x00010a7576ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*param_1)(param_2,param_3,param_1);
    return;
  }
  return;
}



/* Entry: 10a7576b4; end: 10a7576f3;  */

void FUN_10a7576b4(long *param_1,code **param_2,code **param_3)

{
  undefined8 **ppuVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  code **ppcVar8;
  code **ppcVar9;
  code **ppcVar10;
  code **ppcVar11;
  undefined8 *puVar12;
  long *unaff_x22;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  long *plStack_100;
  code **ppcStack_f8;
  code **ppcStack_f0;
  undefined8 **ppuStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  code *pcStack_d0;
  undefined8 **ppuStack_c8;
  undefined8 **ppuStack_c0;
  code *pcStack_b8;
  code *pcStack_b0;
  undefined8 **ppuStack_a8;
  code *pcStack_a0;
  code *pcStack_98;
  code *pcStack_88;
  undefined8 *apuStack_80 [7];
  long lStack_48;
  
  if ((param_1 == (long *)0x0) || ((char)param_1[8] != '\x02')) {
    if ((param_1 != (long *)0x0) && ((char)param_1[8] == '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x00010a7576ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*param_1)(param_2,param_3,param_1);
      return;
    }
    return;
  }
  ppcVar11 = &pcStack_d0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = param_1;
  ppcVar8 = param_2;
  ppcVar10 = param_3;
  FUN_10a688b40();
  if (plVar5 == (long *)0x0) {
    ppcVar9 = (code **)0x0;
    ppuVar6 = (undefined8 **)0x0;
    if (ppcVar8 != (code **)0x0) {
      ppuStack_c8 = (undefined8 **)param_1[1];
      pcStack_d0 = (code *)*param_1;
      if (param_1[1] != 0) {
        plVar5 = (long *)(param_1[1] + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        func_0x000107c3192c(&ppuStack_c0,*param_2,param_2[1]);
      }
      else {
        pcStack_b8 = param_2[1];
        ppuStack_c0 = (undefined8 **)*param_2;
        pcStack_b0 = param_2[2];
      }
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        func_0x000107c3192c(&ppuStack_a8,*param_3,param_3[1]);
      }
      else {
        pcStack_a0 = param_3[1];
        ppuStack_a8 = (undefined8 **)*param_3;
        pcStack_98 = param_3[2];
      }
      pcStack_88 = FUN_10a757c44;
      param_3 = &pcStack_88;
      FUN_10a757cc0(apuStack_80,&PTR_FUN_110c17200,&pcStack_d0);
      ppcVar9 = &pcStack_88;
      FUN_10a4634ec(ppcVar8,ppcVar9);
      ppuVar6 = apuStack_80;
      (*(code *)*apuStack_80[0])();
      ppcVar10 = ppcVar11;
      if ((long)pcStack_98 < 0) {
        ppuVar6 = ppuStack_a8;
        __ZdlPv();
        ppcVar10 = ppcVar11;
      }
      if ((long)pcStack_b0 < 0) {
        ppuVar6 = ppuStack_c0;
        __ZdlPv();
      }
      ppuVar7 = ppuStack_c8;
      if (ppuStack_c8 != (undefined8 **)0x0) {
        ppuVar1 = ppuStack_c8 + 1;
        do {
          puVar12 = *ppuVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
          if (bVar3) {
            *ppuVar1 = (undefined8 *)((long)puVar12 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (puVar12 == (undefined8 *)0x0) {
          (*(code *)(*ppuStack_c8)[2])(ppuStack_c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppuVar6 = ppuVar7;
        }
      }
    }
  }
  else {
    *plVar5 = CONCAT44((int)((ulong)*plVar5 >> 0x20) + 1,(int)*plVar5 + 1);
    ppuVar6 = (undefined8 **)*param_1;
    ppcVar9 = param_2;
    ppcVar10 = param_3;
    FUN_10a75792c(ppuVar6,param_2,param_3);
    iVar4 = *(int *)((long)plVar5 + 4) + -1;
    *(int *)((long)plVar5 + 4) = iVar4;
    unaff_x22 = plVar5;
    if (iVar4 == 0) {
      *(undefined4 *)plVar5 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if ((long)pcStack_b0 < 0) {
    __ZdlPv(ppuStack_c0);
  }
  func_0x00010a004dac(&pcStack_d0);
  ppuVar7 = ppuVar6;
  __Unwind_Resume();
  pcStack_d8 = FUN_10a75792c;
  plStack_100 = unaff_x22;
  ppcStack_f8 = param_2;
  ppcStack_f0 = param_3;
  ppuStack_e8 = ppuVar6;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(&puStack_110,ppuVar7 + 1,*ppuVar7);
  func_0x000109884820(&puStack_108,&puStack_110,*ppuVar7);
  if (puStack_110 != (undefined8 *)0x0) {
    (**(code **)*puStack_110)();
  }
  (**(code **)(**ppuVar7 + 0x30))(&puStack_110);
  FUN_10a757a68(*ppuVar7,&puStack_110,&puStack_108,ppcVar9,ppcVar10);
  if (puStack_110 != (undefined8 *)0x0) {
    (**(code **)*puStack_110)();
  }
  if (puStack_108 != (undefined8 *)0x0) {
    (**(code **)*puStack_108)();
  }
  return;
}



/* Entry: 10a7576f4; end: 10a75792b;  */

void FUN_10a7576f4(long *param_1,code **param_2,code **param_3)

{
  undefined8 **ppuVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  code **ppcVar8;
  code **ppcVar9;
  code **ppcVar10;
  code **ppcVar11;
  undefined8 *puVar12;
  long *unaff_x22;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  long *plStack_100;
  code **ppcStack_f8;
  code **ppcStack_f0;
  undefined8 **ppuStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  code *pcStack_d0;
  undefined8 **ppuStack_c8;
  undefined8 **ppuStack_c0;
  code *pcStack_b8;
  code *pcStack_b0;
  undefined8 **ppuStack_a8;
  code *pcStack_a0;
  code *pcStack_98;
  code *pcStack_88;
  undefined8 *apuStack_80 [7];
  long lStack_48;
  
  ppcVar11 = &pcStack_d0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = param_1;
  ppcVar8 = param_2;
  ppcVar10 = param_3;
  FUN_10a688b40();
  if (plVar5 == (long *)0x0) {
    ppcVar9 = (code **)0x0;
    ppuVar6 = (undefined8 **)0x0;
    if (ppcVar8 != (code **)0x0) {
      ppuStack_c8 = (undefined8 **)param_1[1];
      pcStack_d0 = (code *)*param_1;
      if (param_1[1] != 0) {
        plVar5 = (long *)(param_1[1] + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        func_0x000107c3192c(&ppuStack_c0,*param_2,param_2[1]);
      }
      else {
        pcStack_b8 = param_2[1];
        ppuStack_c0 = (undefined8 **)*param_2;
        pcStack_b0 = param_2[2];
      }
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        func_0x000107c3192c(&ppuStack_a8,*param_3,param_3[1]);
      }
      else {
        pcStack_a0 = param_3[1];
        ppuStack_a8 = (undefined8 **)*param_3;
        pcStack_98 = param_3[2];
      }
      pcStack_88 = FUN_10a757c44;
      param_3 = &pcStack_88;
      FUN_10a757cc0(apuStack_80,&PTR_FUN_110c17200,&pcStack_d0);
      ppcVar9 = &pcStack_88;
      FUN_10a4634ec(ppcVar8,ppcVar9);
      ppuVar6 = apuStack_80;
      (*(code *)*apuStack_80[0])();
      ppcVar10 = ppcVar11;
      if ((long)pcStack_98 < 0) {
        ppuVar6 = ppuStack_a8;
        __ZdlPv();
        ppcVar10 = ppcVar11;
      }
      if ((long)pcStack_b0 < 0) {
        ppuVar6 = ppuStack_c0;
        __ZdlPv();
      }
      ppuVar7 = ppuStack_c8;
      if (ppuStack_c8 != (undefined8 **)0x0) {
        ppuVar1 = ppuStack_c8 + 1;
        do {
          puVar12 = *ppuVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
          if (bVar3) {
            *ppuVar1 = (undefined8 *)((long)puVar12 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (puVar12 == (undefined8 *)0x0) {
          (*(code *)(*ppuStack_c8)[2])(ppuStack_c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppuVar6 = ppuVar7;
        }
      }
    }
  }
  else {
    *plVar5 = CONCAT44((int)((ulong)*plVar5 >> 0x20) + 1,(int)*plVar5 + 1);
    ppuVar6 = (undefined8 **)*param_1;
    ppcVar9 = param_2;
    ppcVar10 = param_3;
    FUN_10a75792c(ppuVar6,param_2,param_3);
    iVar4 = *(int *)((long)plVar5 + 4) + -1;
    *(int *)((long)plVar5 + 4) = iVar4;
    unaff_x22 = plVar5;
    if (iVar4 == 0) {
      *(undefined4 *)plVar5 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if ((long)pcStack_b0 < 0) {
    __ZdlPv(ppuStack_c0);
  }
  func_0x00010a004dac(&pcStack_d0);
  ppuVar7 = ppuVar6;
  __Unwind_Resume();
  pcStack_d8 = FUN_10a75792c;
  plStack_100 = unaff_x22;
  ppcStack_f8 = param_2;
  ppcStack_f0 = param_3;
  ppuStack_e8 = ppuVar6;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(&puStack_110,ppuVar7 + 1,*ppuVar7);
  func_0x000109884820(&puStack_108,&puStack_110,*ppuVar7);
  if (puStack_110 != (undefined8 *)0x0) {
    (**(code **)*puStack_110)();
  }
  (**(code **)(**ppuVar7 + 0x30))(&puStack_110);
  FUN_10a757a68(*ppuVar7,&puStack_110,&puStack_108,ppcVar9,ppcVar10);
  if (puStack_110 != (undefined8 *)0x0) {
    (**(code **)*puStack_110)();
  }
  if (puStack_108 != (undefined8 *)0x0) {
    (**(code **)*puStack_108)();
  }
  return;
}



/* Entry: 10a75792c; end: 10a757a27;  */

void FUN_10a75792c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  func_0x000109884c0c(&puStack_40,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_38,&puStack_40,*param_1);
  if (puStack_40 != (undefined8 *)0x0) {
    (**(code **)*puStack_40)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_40);
  FUN_10a757a68(*param_1,&puStack_40,&puStack_38,param_2,param_3);
  if (puStack_40 != (undefined8 *)0x0) {
    (**(code **)*puStack_40)();
  }
  if (puStack_38 != (undefined8 *)0x0) {
    (**(code **)*puStack_38)();
  }
  return;
}



/* Entry: 10a757a28; end: 10a757a67;  */

long FUN_10a757a28(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0x3f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x28));
  }
  if (*(char *)(param_1 + 0x27) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x10));
  }
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



/* Entry: 10a757a68; end: 10a757b77;  */

void FUN_10a757a68(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  int aiStack_90 [2];
  undefined8 *puStack_88;
  undefined1 auStack_80 [16];
  int aiStack_70 [2];
  long alStack_68 [2];
  long *plStack_58;
  undefined8 uStack_50;
  undefined1 **ppuStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  FUN_10a757b78(auStack_80,param_1,param_4,param_5);
  uStack_38 = 2;
  puStack_40 = auStack_80;
  (**(code **)(*param_1 + 0x58))(param_1);
  ppuStack_48 = &puStack_40;
  alStack_68[1] = param_3;
  plStack_58 = param_1;
  uStack_50 = param_2;
  func_0x0001098960c0(aiStack_90);
  if ((3 < aiStack_90[0]) && (puStack_88 != (undefined8 *)0x0)) {
    (**(code **)*puStack_88)();
  }
  lVar1 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_70 + lVar1)) &&
       (*(undefined8 **)((long)alStack_68 + lVar1) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)alStack_68 + lVar1))();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != -0x20);
  return;
}



/* Entry: 10a757b78; end: 10a757c43;  */

void FUN_10a757b78(undefined4 *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uStack_48;
  
  uVar1 = param_3[1];
  puVar2 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar2 = param_3;
  }
  (**(code **)(*param_2 + 0x128))(&uStack_48,param_2,puVar2,uVar1);
  *param_1 = 6;
  *(undefined8 *)(param_1 + 2) = uStack_48;
  uVar1 = param_4[1];
  puVar2 = (undefined8 *)*param_4;
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_4 + 0x17);
    puVar2 = param_4;
  }
  (**(code **)(*param_2 + 0x128))(&uStack_48,param_2,puVar2,uVar1);
  param_1[4] = 6;
  *(undefined8 *)(param_1 + 6) = uStack_48;
  return;
}



/* Entry: 10a757c44; end: 10a757c53;  */

void FUN_10a757c44(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  puVar1 = (undefined8 *)*puVar2;
  func_0x000109884c0c(&puStack_40,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_38,&puStack_40,*puVar1);
  if (puStack_40 != (undefined8 *)0x0) {
    (**(code **)*puStack_40)();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_40);
  FUN_10a757a68(*puVar1,&puStack_40,&puStack_38,puVar2 + 2,puVar2 + 5);
  if (puStack_40 != (undefined8 *)0x0) {
    (**(code **)*puStack_40)();
  }
  if (puStack_38 != (undefined8 *)0x0) {
    (**(code **)*puStack_38)();
  }
  return;
}


