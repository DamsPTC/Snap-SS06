/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b21cdfc; end: 10b21ce67;  */

undefined1 * FUN_10b21cdfc(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_40 [16];
  undefined1 *puStack_30;
  
  puVar1 = auStack_40;
  func_0x000107c35188();
  FUN_10b21ce68(auStack_40,1);
  FUN_10b21cec0();
  func_0x000107c3518c();
  func_0x00010b21cf30();
  func_0x000107c35190();
  if ((bool)in_ZR) {
    return puStack_30;
  }
  ___stack_chk_fail();
  func_0x00010b21cf30();
  func_0x00010b21cf40();
  *(undefined8 *)(puVar1 + 8) = param_2;
  puVar2 = puVar1;
  FUN_10b21ce90();
  *(undefined1 **)(puVar1 + 0x10) = puVar2;
  return puVar1;
}



/* Entry: 10b21ce68; end: 10b21ce8f;  */

long FUN_10b21ce68(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b21ce90();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b21ce90; end: 10b21cebf;  */

undefined8 * FUN_10b21ce90(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x24924924924924a) {
    puVar1 = (undefined8 *)(param_2 * 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cc8778;
  FUN_10b21cbc4(param_1 + 3);
  return param_1;
}



/* Entry: 10b21cec0; end: 10b21cef7;  */

undefined8 * FUN_10b21cec0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cc8778;
  FUN_10b21cbc4(param_1 + 3);
  return param_1;
}



/* Entry: 10b21cef8; end: 10b21cefb;  */

void FUN_10b21cef8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc8778;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b21cefc; end: 10b21cf0f;  */

void FUN_10b21cefc(void)

{
  func_0x00010b21cf20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b21cf10; end: 10b21cf5b;  */

void FUN_10b21cf10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b21cf18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b21cf5c; end: 10b21d083;  */

long FUN_10b21cf5c(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uVar3;
  undefined4 uStack_44;
  
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  lVar1 = param_1;
  func_0x00010b21e918();
  lVar2 = param_2[1];
  uVar3 = *param_2;
  *(undefined8 *)(lVar1 + 0x30) = param_2[1];
  *(undefined8 *)(lVar1 + 0x28) = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010b21e8cc();
    } while (extraout_w10 != 0);
  }
  lVar2 = param_3[1];
  uVar3 = *param_3;
  *(undefined8 *)(param_1 + 0x40) = param_3[1];
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010b21e8cc();
    } while (extraout_w10_00 != 0);
  }
  lVar2 = param_4[1];
  uVar3 = *param_4;
  *(undefined8 *)(param_1 + 0x50) = param_4[1];
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010b21e8cc();
    } while (extraout_w10_01 != 0);
  }
  uStack_44 = 3;
  func_0x000107c31444();
  FUN_10b18b688(param_1 + 0x58,&UNK_10f73a8a0,&uStack_44,lVar1);
  *(undefined8 *)(param_1 + 0x70) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x68) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0x3f800000;
  return param_1;
}



/* Entry: 10b21d084; end: 10b21d14b;  */

long FUN_10b21d084(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_38 [16];
  long *plStack_28;
  
  func_0x00010b21e918();
  FUN_10b21d930(auStack_38,param_1 + 0x70);
  if (plStack_28[3] != 0) {
    FUN_10b21e0d0(plStack_28[2]);
    plStack_28[2] = 0;
    lVar2 = plStack_28[1];
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*plStack_28 + lVar1 * 8) = 0;
    }
    plStack_28[3] = 0;
  }
  func_0x000107c2798c(auStack_38);
  FUN_10b21e0d0(*(undefined8 *)(param_1 + 0xc0));
  lVar1 = *(long *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x70);
  func_0x000106e50c54(param_1 + 0x58);
  FUN_10b189fd4(param_1 + 0x48);
  func_0x00010b189f84(param_1 + 0x38);
  FUN_10b18a250(param_1 + 0x28);
  func_0x00010b18a0e4(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b21d14c; end: 10b21d15f;  */

long FUN_10b21d14c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_38 [16];
  long *plStack_28;
  
  func_0x00010b21e918();
  FUN_10b21d930(auStack_38,param_1 + 0x70);
  if (plStack_28[3] != 0) {
    FUN_10b21e0d0(plStack_28[2]);
    plStack_28[2] = 0;
    lVar2 = plStack_28[1];
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*plStack_28 + lVar1 * 8) = 0;
    }
    plStack_28[3] = 0;
  }
  func_0x000107c2798c(auStack_38);
  FUN_10b21e0d0(*(undefined8 *)(param_1 + 0xc0));
  lVar1 = *(long *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x70);
  func_0x000106e50c54(param_1 + 0x58);
  FUN_10b189fd4(param_1 + 0x48);
  func_0x00010b189f84(param_1 + 0x38);
  FUN_10b18a250(param_1 + 0x28);
  func_0x00010b18a0e4(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b21d160; end: 10b21d173;  */

void FUN_10b21d160(void)

{
  FUN_10b21d084();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b21d174; end: 10b21d183;  */

void FUN_10b21d174(long param_1)

{
  FUN_10b21d084(param_1 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b21d184; end: 10b21d92f;  */

void FUN_10b21d184(undefined8 *param_1,undefined8 *param_2,long param_3,undefined8 *param_4)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  code *pcVar8;
  long *plVar9;
  ulong uVar10;
  long **pplVar11;
  code *pcVar12;
  undefined8 *puVar13;
  ulong *puVar14;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  code *pcVar20;
  code *pcVar21;
  long *plVar22;
  code *pcVar23;
  code *pcVar24;
  long lVar25;
  code *pcVar26;
  undefined8 uVar27;
  long *plStack_140;
  long *plStack_138;
  long *aplStack_130 [3];
  long *plStack_118;
  long *plStack_110;
  long **pplStack_108;
  code *pcStack_100;
  undefined8 *puStack_f8;
  code *pcStack_f0;
  undefined8 *puStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  code *pcStack_d0;
  long **pplStack_c8;
  long **pplStack_c0;
  undefined1 uStack_b8;
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar22 = param_2 + 0xd;
  do {
    lVar18 = *plVar22;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
    if (bVar4) {
      *plVar22 = lVar18 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  plVar22 = (long *)param_2[3];
  lVar16 = param_2[4];
  puVar7 = param_2;
  plStack_140 = plVar22;
  plStack_138 = (long *)lVar16;
  if (lVar16 != 0) {
    do {
      FUN_10b21e8c8();
    } while (extraout_w10 != 0);
  }
  func_0x00010b21e93c();
  plStack_140 = (long *)0x0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_FUN_110cc8948;
  pcVar23 = (code *)(puVar7 + 3);
  *(undefined ***)pcVar23 = &PTR_DAT_110cc8998;
  plStack_138 = (long *)0x0;
  puVar7[4] = plVar22;
  puVar7[5] = lVar16;
  pcStack_d0 = (code *)0x0;
  pplStack_c8 = (long **)0x0;
  puVar7[6] = lVar18;
  *(undefined1 *)(puVar7 + 7) = 0;
  func_0x00010b18a0e4(&pcStack_d0);
  pcStack_f0 = pcVar23;
  puStack_e8 = puVar7;
  func_0x00010b21e934();
  FUN_10b21d930(&plStack_140,param_2 + 0xe);
  pcVar5 = (code *)(aplStack_130[0] + 3);
  func_0x000107c278c4(pcVar5,param_3);
  pcVar26 = (code *)aplStack_130[0][1];
  pcVar8 = pcVar5;
  pcVar24 = pcVar23;
  if (pcVar26 != (code *)0x0) {
    pcVar20 = pcVar26 + -1;
    if (((ulong)pcVar26 & (ulong)pcVar20) == 0) {
      pcVar24 = (code *)((ulong)pcVar20 & (ulong)pcVar5);
    }
    else {
      pcVar24 = pcVar5;
      if (pcVar26 <= pcVar5) {
        uVar10 = 0;
        if (pcVar26 != (code *)0x0) {
          uVar10 = (ulong)pcVar5 / (ulong)pcVar26;
        }
        pcVar24 = pcVar5 + -(uVar10 * (long)pcVar26);
      }
    }
    pcVar21 = *(code **)(*aplStack_130[0] + (long)pcVar24 * 8);
    if (pcVar21 != (code *)0x0) {
      do {
        while( true ) {
          pcVar21 = *(code **)pcVar21;
          if (pcVar21 == (code *)0x0) goto LAB_10b21d2f4;
          pcVar12 = *(code **)(pcVar21 + 8);
          if (pcVar12 != pcVar5) break;
          pcVar8 = pcVar21 + 0x10;
          lVar16 = param_3;
          func_0x000107c278d0();
          pcVar12 = pcVar23;
          puVar13 = puVar7;
          if (((ulong)pcVar8 & 1) != 0) goto LAB_10b21d5b8;
        }
        if (((ulong)pcVar26 & (ulong)pcVar20) == 0) {
          pcVar12 = (code *)((ulong)pcVar12 & (ulong)pcVar20);
        }
        else if (pcVar26 <= pcVar12) {
          uVar10 = 0;
          if (pcVar26 != (code *)0x0) {
            uVar10 = (ulong)pcVar12 / (ulong)pcVar26;
          }
          pcVar12 = pcVar12 + -(uVar10 * (long)pcVar26);
        }
      } while (pcVar12 == pcVar24);
    }
  }
LAB_10b21d2f4:
  func_0x00010b21e93c();
  pplVar11 = (long **)(aplStack_130[0] + 2);
  pplStack_c0 = (long **)0x0;
  *(ulong *)pcVar8 = 0;
  *(code **)(pcVar8 + 8) = pcVar5;
  lVar16 = param_3;
  pcStack_d0 = pcVar8;
  pplStack_c8 = pplVar11;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(pcVar8 + 0x10);
  *(ulong *)(pcVar8 + 0x28) = 0;
  *(ulong *)(pcVar8 + 0x30) = 0;
  *(ulong *)(pcVar8 + 0x38) = 0;
  pplStack_c0 = (long **)CONCAT71(pplStack_c0._1_7_,1);
  if ((pcVar26 == (code *)0x0) ||
     (*(float *)(aplStack_130[0] + 4) * (float)pcVar26 < (float)(aplStack_130[0][3] + 1))) {
    uVar10 = 1;
    if ((code *)0x2 < pcVar26) {
      uVar10 = (ulong)(((ulong)pcVar26 & (ulong)(pcVar26 + -1)) != 0);
    }
    pcVar24 = (code *)(uVar10 | (long)pcVar26 << 1);
    pcVar26 = (code *)(long)((float)(aplStack_130[0][3] + 1) / *(float *)(aplStack_130[0] + 4));
    if (pcVar24 <= pcVar26) {
      pcVar24 = pcVar26;
    }
    if (pcVar24 + -1 == (code *)0x0) {
      pcVar24 = (code *)0x2;
    }
    else if (((ulong)pcVar24 & (ulong)(pcVar24 + -1)) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    pcVar26 = (code *)aplStack_130[0][1];
    if (pcVar26 < pcVar24) {
LAB_10b21d3a8:
      if ((ulong)pcVar24 >> 0x3d != 0) {
        func_0x000104bd35f4();
        goto LAB_10b21d89c;
      }
      lVar16 = (long)pcVar24 << 3;
      __Znwm();
      FUN_10b21e4fc(aplStack_130[0]);
      aplStack_130[0][1] = (long)pcVar24;
      lVar25 = *aplStack_130[0];
      for (pcVar26 = (code *)0x0; pcVar24 != pcVar26; pcVar26 = pcVar26 + 1) {
        *(undefined8 *)(lVar25 + (long)pcVar26 * 8) = 0;
      }
      plVar22 = *pplVar11;
      pcVar26 = pcVar24;
      if (plVar22 != (long *)0x0) {
        pcVar21 = (code *)plVar22[1];
        pcVar20 = pcVar24 + -1;
        uVar10 = 0;
        if (pcVar24 != (code *)0x0) {
          uVar10 = (ulong)pcVar21 / (ulong)pcVar24;
        }
        pcVar12 = pcVar21;
        if (pcVar24 <= pcVar21) {
          pcVar12 = pcVar21 + -(uVar10 * (long)pcVar24);
        }
        if (((ulong)pcVar24 & (ulong)pcVar20) == 0) {
          pcVar12 = (code *)((ulong)pcVar21 & (ulong)pcVar20);
        }
        *(long ***)(lVar25 + (long)pcVar12 * 8) = pplVar11;
        while (plVar9 = plVar22, plVar22 = (long *)*plVar9, plVar22 != (long *)0x0) {
          pcVar21 = (code *)plVar22[1];
          if (((ulong)pcVar24 & (ulong)pcVar20) == 0) {
            pcVar21 = (code *)((ulong)pcVar21 & (ulong)pcVar20);
          }
          else if (pcVar24 <= pcVar21) {
            uVar10 = 0;
            if (pcVar24 != (code *)0x0) {
              uVar10 = (ulong)pcVar21 / (ulong)pcVar24;
            }
            pcVar21 = pcVar21 + -(uVar10 * (long)pcVar24);
          }
          if (pcVar21 != pcVar12) {
            if (*(long *)(lVar25 + (long)pcVar21 * 8) == 0) {
              *(long **)(lVar25 + (long)pcVar21 * 8) = plVar9;
              pcVar12 = pcVar21;
            }
            else {
              *plVar9 = *plVar22;
              *plVar22 = **(long **)(lVar25 + (long)pcVar21 * 8);
              **(undefined8 **)(lVar25 + (long)pcVar21 * 8) = plVar22;
              plVar22 = plVar9;
            }
          }
        }
      }
    }
    else if (pcVar24 < pcVar26) {
      pcVar20 = (code *)(long)((float)(ulong)aplStack_130[0][3] / *(float *)(aplStack_130[0] + 4));
      if ((pcVar26 < (code *)0x3) || (((ulong)pcVar26 & (ulong)(pcVar26 + -1)) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((code *)0x1 < pcVar20) {
        pcVar20 = (code *)(1L << (-LZCOUNT(pcVar20 + -1) & 0x3fU));
      }
      if (pcVar24 <= pcVar20) {
        pcVar24 = pcVar20;
      }
      if (pcVar24 < pcVar26) {
        if (pcVar24 != (code *)0x0) goto LAB_10b21d3a8;
        lVar16 = 0;
        FUN_10b21e4fc(aplStack_130[0]);
        aplStack_130[0][1] = 0;
        pcVar26 = (code *)0x0;
      }
      else {
        pcVar26 = (code *)aplStack_130[0][1];
      }
    }
    if (((ulong)pcVar26 & (ulong)(pcVar26 + -1)) == 0) {
      pcVar24 = (code *)((ulong)(pcVar26 + -1) & (ulong)pcVar5);
    }
    else {
      pcVar24 = pcVar5;
      if (pcVar26 <= pcVar5) {
        uVar10 = 0;
        if (pcVar26 != (code *)0x0) {
          uVar10 = (ulong)pcVar5 / (ulong)pcVar26;
        }
        pcVar24 = pcVar5 + -(uVar10 * (long)pcVar26);
      }
    }
  }
  lVar25 = *aplStack_130[0];
  puVar14 = *(ulong **)(lVar25 + (long)pcVar24 * 8);
  if (puVar14 == (ulong *)0x0) {
    *(long **)pcVar8 = *pplVar11;
    *pplVar11 = (long *)pcVar8;
    *(long ***)(lVar25 + (long)pcVar24 * 8) = pplVar11;
    if (*(ulong *)pcVar8 != 0) {
      pcVar5 = *(code **)(*(ulong *)pcVar8 + 8);
      if (((ulong)pcVar26 & (ulong)(pcVar26 + -1)) == 0) {
        pcVar5 = (code *)((ulong)pcVar5 & (ulong)(pcVar26 + -1));
      }
      else if (pcVar26 <= pcVar5) {
        uVar10 = 0;
        if (pcVar26 != (code *)0x0) {
          uVar10 = (ulong)pcVar5 / (ulong)pcVar26;
        }
        pcVar5 = pcVar5 + -(uVar10 * (long)pcVar26);
      }
      *(code **)(lVar25 + (long)pcVar5 * 8) = pcVar8;
    }
  }
  else {
    *(ulong *)pcVar8 = *puVar14;
    *puVar14 = (ulong)pcVar8;
  }
  pcStack_d0 = (code *)0x0;
  aplStack_130[0][3] = aplStack_130[0][3] + 1;
  FUN_10b21e514(&pcStack_d0);
  pcVar12 = pcVar23;
  puVar13 = puVar7;
  pcVar21 = pcVar8;
LAB_10b21d5b8:
  do {
    puStack_f8 = puVar13;
    pcStack_100 = pcVar12;
    func_0x00010b21e8cc();
    pcVar12 = pcStack_100;
    puVar13 = puStack_f8;
  } while (extraout_w10_00 != 0);
  puVar15 = *(undefined8 **)(pcVar21 + 0x38);
  puVar13 = *(undefined8 **)(pcVar21 + 0x30);
  uVar6 = puVar13 == puVar15;
  if (puVar13 < puVar15) {
    lVar16 = param_4[1];
    uVar27 = *param_4;
    puVar13[1] = param_4[1];
    *puVar13 = uVar27;
    puVar15 = puVar7;
    if (lVar16 != 0) {
      plVar22 = (long *)(lVar16 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar4) {
          *plVar22 = *plVar22 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        puVar15 = puStack_f8;
      } while (cVar3 != '\0');
    }
    puVar13[2] = pcVar23;
    puVar13[3] = puVar15;
    pcStack_100 = (code *)0x0;
    puStack_f8 = (undefined8 *)0x0;
    puVar15 = puVar13 + 5;
    puVar13[4] = lVar18;
LAB_10b21d764:
    *(undefined8 **)(pcVar21 + 0x30) = puVar15;
    func_0x00010b18d1ec(&pcStack_100);
    func_0x000107c2798c(&plStack_140);
    plVar22 = (long *)param_2[0xb];
    plStack_138 = (long *)param_2[4];
    plStack_140 = (long *)param_2[3];
    if (param_2[4] != 0) {
      do {
        func_0x00010b21e8cc();
      } while (extraout_w10_02 != 0);
    }
    pplVar11 = aplStack_130;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(pplVar11,param_3);
    plStack_110 = (long *)param_4[1];
    plStack_118 = (long *)*param_4;
    if (param_4[1] != 0) {
      do {
        func_0x00010b21e8cc();
      } while (extraout_w10_03 != 0);
    }
    __ZNSt3__16chrono12steady_clock3nowEv();
    pcStack_d0 = FUN_10b21e558;
    pplStack_c8 = (long **)&PTR_FUN_110cc89b8;
    pplStack_108 = pplVar11;
    func_0x00010b21e93c();
    pplVar11[1] = plStack_138;
    *pplVar11 = plStack_140;
    plStack_140 = (long *)0x0;
    plStack_138 = (long *)0x0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (pplVar11 + 2,aplStack_130);
    pplVar11[6] = plStack_110;
    pplVar11[5] = plStack_118;
    if (plStack_110 != (long *)0x0) {
      do {
        func_0x00010b21e8cc();
      } while (extraout_w10_04 != 0);
    }
    pplVar11[7] = (long *)pplStack_108;
    pplStack_c0 = pplVar11;
    (**(code **)(*plVar22 + 0x10))(plVar22,&pcStack_d0);
    func_0x00010b21e8dc(pplStack_c8);
    func_0x00010b21d950(&plStack_140);
    *param_1 = pcVar23;
    param_1[1] = puVar7;
    pcStack_f0 = (code *)0x0;
    puStack_e8 = (undefined8 *)0x0;
    FUN_10b21e4d4(&pcStack_f0);
    func_0x00010b21e970(uStack_70);
    if ((bool)uVar6) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    lVar25 = (long)puVar13 - *(ulong *)(pcVar21 + 0x28);
    uVar10 = lVar25 / 0x28 + 1;
    if (uVar10 < 0x666666666666667) {
      uVar2 = (long)((long)puVar15 - *(ulong *)(pcVar21 + 0x28)) / 0x28;
      uVar17 = uVar2 * 2;
      if (uVar17 < uVar10 || uVar17 - uVar10 == 0) {
        uVar17 = uVar10;
      }
      if (0x333333333333332 < uVar2) {
        uVar17 = 0x666666666666666;
      }
      if (uVar17 == 0) {
        uVar17 = 0;
        lVar16 = 0;
      }
      else {
        FUN_10b21e144();
      }
      puVar15 = (undefined8 *)(uVar17 + lVar25);
      lVar25 = param_4[1];
      uVar27 = *param_4;
      puVar15[1] = param_4[1];
      *puVar15 = uVar27;
      if (lVar25 != 0) {
        do {
          func_0x00010b21e8cc();
        } while (extraout_w10_01 != 0);
      }
      puVar15[3] = puStack_f8;
      puVar15[2] = pcStack_100;
      pcStack_100 = (code *)0x0;
      puStack_f8 = (undefined8 *)0x0;
      puVar15[4] = lVar18;
      plVar9 = *(long **)(pcVar21 + 0x28);
      plVar1 = *(long **)(pcVar21 + 0x30);
      plVar19 = puVar15 + (((long)plVar1 - (long)plVar9) / -0x28) * 5;
      pplStack_c8 = &plStack_e0;
      pplStack_c0 = &plStack_d8;
      plStack_d8 = plVar19;
      for (plVar22 = plVar9; plVar22 != plVar1; plVar22 = plVar22 + 5) {
        lVar18 = *plVar22;
        plStack_d8[1] = plVar22[1];
        *plStack_d8 = lVar18;
        *plVar22 = 0;
        plVar22[1] = 0;
        lVar18 = plVar22[2];
        plStack_d8[3] = plVar22[3];
        plStack_d8[2] = lVar18;
        plVar22[2] = 0;
        plVar22[3] = 0;
        plStack_d8[4] = plVar22[4];
        plStack_d8 = plStack_d8 + 5;
      }
      uStack_b8 = 1;
      plStack_e0 = plVar19;
      pcStack_d0 = pcVar21 + 0x38;
      for (; uVar6 = plVar9 == plVar1, !(bool)uVar6; plVar9 = plVar9 + 5) {
        func_0x00010b21e17c();
      }
      puVar15 = puVar15 + 5;
      func_0x00010b21e1a4(&pcStack_d0);
      uVar10 = *(ulong *)(pcVar21 + 0x28);
      *(long **)(pcVar21 + 0x28) = plVar19;
      *(undefined8 **)(pcVar21 + 0x30) = puVar15;
      *(ulong *)(pcVar21 + 0x38) = uVar17 + lVar16 * 0x28;
      if (uVar10 != 0) {
        __ZdlPv();
      }
      goto LAB_10b21d764;
    }
  }
  FUN_10b21e130();
LAB_10b21d89c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10b21d8a0);
  (*pcVar5)();
}



/* Entry: 10b21d930; end: 10b21d9cb;  */

void FUN_10b21d930(long param_1,long param_2)

{
  func_0x000107c27f4c();
  *(long *)(param_1 + 0x10) = param_2 + 0x40;
  return;
}



/* Entry: 10b21d9cc; end: 10b21da2b;  */

void FUN_10b21d9cc(undefined8 *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_2 + 0x40);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  param_1[1] = *(undefined8 *)(param_2 + 0x40);
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_10b21e8c8(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10b21da2c; end: 10b21db6b;  */

void FUN_10b21da2c(undefined1 *param_1,long param_2)

{
  double *pdVar1;
  long *plVar2;
  double dVar3;
  double dVar4;
  undefined4 uStack_a4;
  double dStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  double dStack_78;
  double dStack_70;
  undefined1 auStack_60 [16];
  long *plStack_50;
  byte bStack_38;
  
  (**(code **)(**(long **)(param_2 + 0x28) + 0x20))(auStack_60);
  if ((bStack_38 & 1) == 0) {
    *param_1 = 0;
    param_1[0x38] = 0;
  }
  else {
    uStack_98 = 0;
    dStack_a0 = 0.0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_80 = 0x3f800000;
    dStack_70 = 0.0;
    dStack_78 = 0.0;
    for (plVar2 = plStack_50; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      dStack_78 = dStack_78 + (double)plVar2[3];
      dStack_70 = dStack_70 + (double)plVar2[5];
    }
    if ((dStack_78 == 0.0) || (plVar2 = plStack_50, dStack_70 == 0.0)) {
      *param_1 = 0;
      param_1[0x38] = 0;
    }
    else {
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        uStack_a4 = *(undefined4 *)(plVar2 + 2);
        pdVar1 = &dStack_a0;
        FUN_10b18c11c(pdVar1,&uStack_a4);
        dVar3 = (double)plVar2[3];
        dVar4 = dVar3 / dStack_78;
        pdVar1[1] = (double)plVar2[5] / dStack_70;
        *pdVar1 = dVar4;
        dVar4 = 0.0;
        if (0.0 < (double)plVar2[4]) {
          dVar4 = (double)NEON_fminnm(dVar3 / (double)plVar2[4],0x3ff0000000000000);
        }
        pdVar1[2] = dVar4;
      }
      func_0x00010b18c990(param_1,&dStack_a0);
    }
    func_0x00010b125198(&dStack_a0);
  }
  func_0x00010b18c9ac(auStack_60);
  return;
}



/* Entry: 10b21db6c; end: 10b21db73;  */

void FUN_10b21db6c(undefined1 *param_1,long param_2)

{
  double *pdVar1;
  long *plVar2;
  double dVar3;
  double dVar4;
  undefined4 uStack_a4;
  double dStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  double dStack_78;
  double dStack_70;
  undefined1 auStack_60 [16];
  long *plStack_50;
  byte bStack_38;
  
  (**(code **)(**(long **)(param_2 + 0x18) + 0x20))(auStack_60);
  if ((bStack_38 & 1) == 0) {
    *param_1 = 0;
    param_1[0x38] = 0;
  }
  else {
    uStack_98 = 0;
    dStack_a0 = 0.0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_80 = 0x3f800000;
    dStack_70 = 0.0;
    dStack_78 = 0.0;
    for (plVar2 = plStack_50; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      dStack_78 = dStack_78 + (double)plVar2[3];
      dStack_70 = dStack_70 + (double)plVar2[5];
    }
    if ((dStack_78 == 0.0) || (plVar2 = plStack_50, dStack_70 == 0.0)) {
      *param_1 = 0;
      param_1[0x38] = 0;
    }
    else {
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        uStack_a4 = *(undefined4 *)(plVar2 + 2);
        pdVar1 = &dStack_a0;
        FUN_10b18c11c(pdVar1,&uStack_a4);
        dVar3 = (double)plVar2[3];
        dVar4 = dVar3 / dStack_78;
        pdVar1[1] = (double)plVar2[5] / dStack_70;
        *pdVar1 = dVar4;
        dVar4 = 0.0;
        if (0.0 < (double)plVar2[4]) {
          dVar4 = (double)NEON_fminnm(dVar3 / (double)plVar2[4],0x3ff0000000000000);
        }
        pdVar1[2] = dVar4;
      }
      func_0x00010b18c990(param_1,&dStack_a0);
    }
    func_0x00010b125198(&dStack_a0);
  }
  func_0x00010b18c9ac(auStack_60);
  return;
}



/* Entry: 10b21db74; end: 10b21dedb;  */

void FUN_10b21db74(long param_1,undefined8 *param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined1 in_ZR;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 **ppuVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  int extraout_w10;
  int extraout_w10_00;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  undefined1 auStack_348 [24];
  undefined8 *puStack_330;
  undefined1 auStack_328 [552];
  undefined1 auStack_100 [16];
  undefined8 *puStack_f0;
  undefined1 *puStack_e8;
  undefined1 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 **ppuStack_c8;
  undefined8 **ppuStack_c0;
  undefined8 **ppuStack_b8;
  undefined1 uStack_b0;
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10b21d930(auStack_100,param_1 + 0x70);
  puVar3 = puStack_f0;
  puVar8 = param_2;
  FUN_10b21e638();
  if (puVar3 != (undefined8 *)0x0) {
    puVar5 = puVar3 + 5;
    puVar4 = (undefined8 *)puVar3[6];
    puVar9 = (undefined8 *)*puVar5;
    for (puVar12 = puVar9; puVar6 = puVar3, puVar12 != puVar4; puVar12 = puVar12 + 5) {
      puVar6 = puVar12;
      if ((puVar12[3] == 0) || (*(long *)(puVar12[3] + 8) == -1)) goto LAB_10b21dc04;
    }
    goto LAB_10b21dc70;
  }
  goto LAB_10b21de18;
LAB_10b21dc04:
  while (puVar9 = puVar6 + 5, puVar9 != puVar4) {
    plVar11 = puVar6 + 8;
    puVar6 = puVar9;
    if ((*plVar11 != 0) && (*(long *)(*plVar11 + 8) != -1)) {
      puVar8 = puVar9;
      FUN_10b21e274(puVar12);
      puVar12 = puVar12 + 5;
    }
  }
  puVar4 = (undefined8 *)puVar3[6];
  if (puVar12 == puVar4) {
    puVar9 = (undefined8 *)puVar3[5];
    puVar6 = puVar4;
    puVar4 = puVar12;
  }
  else {
    FUN_10b21e220(puVar4,puVar4,puVar12);
    func_0x00010b21e1e8();
    puVar9 = (undefined8 *)puVar3[5];
    puVar6 = puVar5;
    puVar8 = puVar4;
    puVar4 = (undefined8 *)puVar3[6];
  }
LAB_10b21dc70:
  in_ZR = puVar9 == puVar4;
  if ((bool)in_ZR) {
    FUN_10b21e70c(puStack_f0,puVar3);
  }
  else {
    __ZNSt3__16chrono12system_clock3nowEv();
    plVar11 = *(long **)(param_1 + 0x58);
    puStack_360 = (undefined8 *)0x0;
    puStack_358 = (undefined8 *)0x0;
    puStack_350 = (undefined8 *)0x0;
    puVar12 = (undefined8 *)puVar3[5];
    puVar3 = (undefined8 *)puVar3[6];
    uStack_e0 = 0;
    bVar2 = puVar12 <= puVar3;
    in_ZR = (long)puVar3 - (long)puVar12 == 0;
    puStack_e8 = (undefined1 *)&puStack_360;
    if (!(bool)in_ZR) {
      puVar9 = (undefined8 *)(((long)puVar3 - (long)puVar12) / 0x28);
      puStack_e8 = (undefined1 *)&puStack_360;
      func_0x00010b21e984();
      if (bVar2) goto LAB_10b21de50;
      func_0x00010b21e144();
      ppuStack_c8 = &puStack_350;
      puStack_350 = puVar9 + (long)puVar8 * 5;
      ppuStack_c0 = &puStack_d8;
      ppuStack_b8 = &puStack_d0;
      puStack_360 = puVar9;
      puStack_358 = puVar9;
      puStack_d8 = puVar9;
      for (; in_ZR = puVar12 == puVar3, puStack_d0 = puVar9, !(bool)in_ZR; puVar12 = puVar12 + 5) {
        lVar10 = puVar12[1];
        uVar13 = *puVar12;
        puVar9[1] = puVar12[1];
        *puVar9 = uVar13;
        if (lVar10 != 0) {
          do {
            func_0x00010b21e8cc();
          } while (extraout_w10 != 0);
        }
        lVar10 = puVar12[3];
        uVar13 = puVar12[2];
        puVar9[3] = puVar12[3];
        puVar9[2] = uVar13;
        if (lVar10 != 0) {
          do {
            func_0x00010b21e8cc();
          } while (extraout_w10_00 != 0);
        }
        puVar9[4] = puVar12[4];
        puVar9 = puVar9 + 5;
      }
      uStack_b0 = 1;
      func_0x00010b21e1a4(&ppuStack_c8);
      puStack_358 = puVar9;
    }
    uStack_e0 = 1;
    func_0x00010b21e2c8(&puStack_e8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_348,param_2);
    puStack_330 = puVar6;
    FUN_10b12402c(auStack_328,param_3);
    ppuStack_c8 = (undefined8 **)FUN_10b21e840;
    ppuStack_c0 = (undefined8 **)&PTR_FUN_110cc89d0;
    ppuVar7 = (undefined8 **)0x260;
    __Znwm();
    ppuVar7[1] = puStack_358;
    *ppuVar7 = puStack_360;
    ppuVar7[2] = puStack_350;
    puStack_358 = (undefined8 *)0x0;
    puStack_350 = (undefined8 *)0x0;
    puStack_360 = (undefined8 *)0x0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (ppuVar7 + 3,auStack_348);
    ppuVar7[6] = puStack_330;
    FUN_10b12402c(ppuVar7 + 7,auStack_328);
    ppuStack_b8 = ppuVar7;
    (**(code **)(*plVar11 + 0x10))(plVar11,&ppuStack_c8);
    func_0x00010b21e8dc(ppuStack_c0);
    FUN_10b21dedc(&puStack_360);
  }
LAB_10b21de18:
  func_0x000107c2798c(auStack_100);
  func_0x00010b21e970(uStack_68);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_10b21de50:
  FUN_10b21e130();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b21de58);
  (*pcVar1)();
}



/* Entry: 10b21dedc; end: 10b21df0b;  */

long FUN_10b21dedc(long param_1)

{
  long lStack_28;
  
  func_0x0001052b5d04(param_1 + 0x38);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x18);
  lStack_28 = param_1;
  func_0x00010b21e2f4(&lStack_28);
  return param_1;
}



/* Entry: 10b21df0c; end: 10b21df13;  */

void FUN_10b21df0c(long param_1,undefined8 *param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined1 in_ZR;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 **ppuVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  int extraout_w10;
  int extraout_w10_00;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  undefined1 auStack_348 [24];
  undefined8 *puStack_330;
  undefined1 auStack_328 [552];
  undefined1 auStack_100 [16];
  undefined8 *puStack_f0;
  undefined1 *puStack_e8;
  undefined1 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 **ppuStack_c8;
  undefined8 **ppuStack_c0;
  undefined8 **ppuStack_b8;
  undefined1 uStack_b0;
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10b21d930(auStack_100,param_1 + 0x68);
  puVar3 = puStack_f0;
  puVar8 = param_2;
  FUN_10b21e638();
  if (puVar3 != (undefined8 *)0x0) {
    puVar5 = puVar3 + 5;
    puVar4 = (undefined8 *)puVar3[6];
    puVar9 = (undefined8 *)*puVar5;
    for (puVar12 = puVar9; puVar6 = puVar3, puVar12 != puVar4; puVar12 = puVar12 + 5) {
      puVar6 = puVar12;
      if ((puVar12[3] == 0) || (*(long *)(puVar12[3] + 8) == -1)) goto LAB_10b21dc04;
    }
    goto LAB_10b21dc70;
  }
  goto LAB_10b21de18;
LAB_10b21dc04:
  while (puVar9 = puVar6 + 5, puVar9 != puVar4) {
    plVar11 = puVar6 + 8;
    puVar6 = puVar9;
    if ((*plVar11 != 0) && (*(long *)(*plVar11 + 8) != -1)) {
      puVar8 = puVar9;
      FUN_10b21e274(puVar12);
      puVar12 = puVar12 + 5;
    }
  }
  puVar4 = (undefined8 *)puVar3[6];
  if (puVar12 == puVar4) {
    puVar9 = (undefined8 *)puVar3[5];
    puVar6 = puVar4;
    puVar4 = puVar12;
  }
  else {
    FUN_10b21e220(puVar4,puVar4,puVar12);
    func_0x00010b21e1e8();
    puVar9 = (undefined8 *)puVar3[5];
    puVar6 = puVar5;
    puVar8 = puVar4;
    puVar4 = (undefined8 *)puVar3[6];
  }
LAB_10b21dc70:
  in_ZR = puVar9 == puVar4;
  if ((bool)in_ZR) {
    FUN_10b21e70c(puStack_f0,puVar3);
  }
  else {
    __ZNSt3__16chrono12system_clock3nowEv();
    plVar11 = *(long **)(param_1 + 0x50);
    puStack_360 = (undefined8 *)0x0;
    puStack_358 = (undefined8 *)0x0;
    puStack_350 = (undefined8 *)0x0;
    puVar12 = (undefined8 *)puVar3[5];
    puVar3 = (undefined8 *)puVar3[6];
    uStack_e0 = 0;
    bVar2 = puVar12 <= puVar3;
    in_ZR = (long)puVar3 - (long)puVar12 == 0;
    puStack_e8 = (undefined1 *)&puStack_360;
    if (!(bool)in_ZR) {
      puVar9 = (undefined8 *)(((long)puVar3 - (long)puVar12) / 0x28);
      puStack_e8 = (undefined1 *)&puStack_360;
      func_0x00010b21e984();
      if (bVar2) goto LAB_10b21de50;
      func_0x00010b21e144();
      ppuStack_c8 = &puStack_350;
      puStack_350 = puVar9 + (long)puVar8 * 5;
      ppuStack_c0 = &puStack_d8;
      ppuStack_b8 = &puStack_d0;
      puStack_360 = puVar9;
      puStack_358 = puVar9;
      puStack_d8 = puVar9;
      for (; in_ZR = puVar12 == puVar3, puStack_d0 = puVar9, !(bool)in_ZR; puVar12 = puVar12 + 5) {
        lVar10 = puVar12[1];
        uVar13 = *puVar12;
        puVar9[1] = puVar12[1];
        *puVar9 = uVar13;
        if (lVar10 != 0) {
          do {
            func_0x00010b21e8cc();
          } while (extraout_w10 != 0);
        }
        lVar10 = puVar12[3];
        uVar13 = puVar12[2];
        puVar9[3] = puVar12[3];
        puVar9[2] = uVar13;
        if (lVar10 != 0) {
          do {
            func_0x00010b21e8cc();
          } while (extraout_w10_00 != 0);
        }
        puVar9[4] = puVar12[4];
        puVar9 = puVar9 + 5;
      }
      uStack_b0 = 1;
      func_0x00010b21e1a4(&ppuStack_c8);
      puStack_358 = puVar9;
    }
    uStack_e0 = 1;
    func_0x00010b21e2c8(&puStack_e8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_348,param_2);
    puStack_330 = puVar6;
    FUN_10b12402c(auStack_328,param_3);
    ppuStack_c8 = (undefined8 **)FUN_10b21e840;
    ppuStack_c0 = (undefined8 **)&PTR_FUN_110cc89d0;
    ppuVar7 = (undefined8 **)0x260;
    __Znwm();
    ppuVar7[1] = puStack_358;
    *ppuVar7 = puStack_360;
    ppuVar7[2] = puStack_350;
    puStack_358 = (undefined8 *)0x0;
    puStack_350 = (undefined8 *)0x0;
    puStack_360 = (undefined8 *)0x0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (ppuVar7 + 3,auStack_348);
    ppuVar7[6] = puStack_330;
    FUN_10b12402c(ppuVar7 + 7,auStack_328);
    ppuStack_b8 = ppuVar7;
    (**(code **)(*plVar11 + 0x10))(plVar11,&ppuStack_c8);
    func_0x00010b21e8dc(ppuStack_c0);
    FUN_10b21dedc(&puStack_360);
  }
LAB_10b21de18:
  func_0x000107c2798c(auStack_100);
  func_0x00010b21e970(uStack_68);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_10b21de50:
  FUN_10b21e130();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b21de58);
  (*pcVar1)();
}



/* Entry: 10b21df14; end: 10b21e01f;  */

void FUN_10b21df14(long *param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  long lStack_40;
  long lStack_38;
  long in_stack_ffffffffffffffd8;
  
  if (param_3 == 1) {
    lVar2 = param_1[7];
    func_0x00010b21f528();
    lVar3 = lStack_38;
    FUN_10b18f468(lStack_38,param_2);
    if (lVar3 != 0) {
      (**(code **)(**(long **)(lVar3 + 0x28) + 0x10))();
      FUN_10b18f524(lStack_38,lVar3);
    }
    func_0x00010b21f518();
    FUN_10b21ea28(auStack_48,lVar2 + 0x20);
    func_0x00010b21f2c8(lStack_38,param_2);
    func_0x00010b21f518();
    return;
  }
  if (param_3 == 0) {
    uVar1 = param_1[7];
    FUN_10b21ec44(uVar1,param_2);
    if ((uVar1 & 1) == 0) {
      FUN_10b21eaac(param_1[7],param_2);
      lStack_38 = param_1[8];
      lStack_40 = 0;
      if (param_1[7] != 0) {
        lStack_40 = param_1[7] + 8;
      }
      if (lStack_38 != 0) {
        do {
          FUN_10b21e8c8();
        } while (extraout_w10 != 0);
      }
      (**(code **)(*param_1 + 0x10))(&stack0xffffffffffffffd0,param_1,param_2,&lStack_40);
      func_0x00010539ee8c(&lStack_40);
      if (in_stack_ffffffffffffffd8 != 0) {
        do {
          func_0x00010b21e8cc();
        } while (extraout_w10_00 != 0);
      }
      FUN_10b21eb70();
      func_0x00010539eeb0(auStack_50);
      func_0x00010539eeb0(&stack0xffffffffffffffd0);
    }
  }
  return;
}



/* Entry: 10b21e020; end: 10b21e027;  */

void FUN_10b21e020(long param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  long lStack_40;
  long lStack_38;
  long in_stack_ffffffffffffffd8;
  
  if (param_3 == 1) {
    lVar2 = *(long *)(param_1 + 0x30);
    func_0x00010b21f528();
    lVar3 = lStack_38;
    FUN_10b18f468(lStack_38,param_2);
    if (lVar3 != 0) {
      (**(code **)(**(long **)(lVar3 + 0x28) + 0x10))();
      FUN_10b18f524(lStack_38,lVar3);
    }
    func_0x00010b21f518();
    FUN_10b21ea28(auStack_48,lVar2 + 0x20);
    func_0x00010b21f2c8(lStack_38,param_2);
    func_0x00010b21f518();
    return;
  }
  if (param_3 == 0) {
    uVar1 = *(ulong *)(param_1 + 0x30);
    FUN_10b21ec44(uVar1,param_2);
    if ((uVar1 & 1) == 0) {
      FUN_10b21eaac(*(undefined8 *)(param_1 + 0x30),param_2);
      lStack_38 = *(long *)(param_1 + 0x38);
      lStack_40 = 0;
      if (*(long *)(param_1 + 0x30) != 0) {
        lStack_40 = *(long *)(param_1 + 0x30) + 8;
      }
      if (lStack_38 != 0) {
        do {
          FUN_10b21e8c8();
        } while (extraout_w10 != 0);
      }
      (**(code **)(*(long *)(param_1 + -8) + 0x10))
                (&stack0xffffffffffffffd0,(long *)(param_1 + -8),param_2,&lStack_40);
      func_0x00010539ee8c(&lStack_40);
      if (in_stack_ffffffffffffffd8 != 0) {
        do {
          func_0x00010b21e8cc();
        } while (extraout_w10_00 != 0);
      }
      FUN_10b21eb70();
      func_0x00010539eeb0(auStack_50);
      func_0x00010539eeb0(&stack0xffffffffffffffd0);
    }
  }
  return;
}



/* Entry: 10b21e028; end: 10b21e0c7;  */

void FUN_10b21e028(long param_1,undefined8 param_2,int param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined1 auStack_298 [164];
  uint uStack_1f4;
  undefined8 uStack_1e0;
  byte bStack_110;
  byte bStack_70;
  char cStack_38;
  
  if (param_3 == 1) {
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(auStack_298);
    if (((cStack_38 == '\x01') && ((bStack_70 & 1) != 0)) && ((bStack_110 & 1) != 0)) {
      uVar1 = (ulong)uStack_1f4;
      FUN_10b18c5cc();
      if ((int)uVar1 != 0) {
        (**(code **)(**(long **)(param_1 + 0x28) + 0x18))
                  (*(long **)(param_1 + 0x28),uVar1,*param_4,uStack_1e0);
      }
    }
    func_0x00010539f9d4(auStack_298);
  }
  return;
}



/* Entry: 10b21e0c8; end: 10b21e0cf;  */

void FUN_10b21e0c8(long param_1,undefined8 param_2,int param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined1 auStack_298 [164];
  uint uStack_1f4;
  undefined8 uStack_1e0;
  byte bStack_110;
  byte bStack_70;
  char cStack_38;
  
  if (param_3 == 1) {
    (**(code **)(**(long **)(param_1 + 0x30) + 0x10))(auStack_298);
    if (((cStack_38 == '\x01') && ((bStack_70 & 1) != 0)) && ((bStack_110 & 1) != 0)) {
      uVar1 = (ulong)uStack_1f4;
      FUN_10b18c5cc();
      if ((int)uVar1 != 0) {
        (**(code **)(**(long **)(param_1 + 0x20) + 0x18))
                  (*(long **)(param_1 + 0x20),uVar1,*param_4,uStack_1e0);
      }
    }
    func_0x00010539f9d4(auStack_298);
  }
  return;
}



/* Entry: 10b21e0d0; end: 10b21e12f;  */

void FUN_10b21e0d0(long *param_1)

{
  long lVar1;
  
  while (param_1 != (long *)0x0) {
    lVar1 = *param_1;
    func_0x00010b21e108(param_1 + 2);
    __ZdlPv(param_1);
    param_1 = (long *)lVar1;
  }
  return;
}



/* Entry: 10b21e130; end: 10b21e143;  */

undefined1  [16] FUN_10b21e130(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_CY;
  undefined *puVar1;
  long lVar2;
  undefined8 unaff_x19;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  func_0x00010b21e984();
  if (!(bool)in_CY) {
    lVar2 = (long)puVar1 * 0x28;
    __Znwm(lVar2);
    auVar4._8_8_ = puVar1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000104bd35f4();
  func_0x00010b18d1ec(puVar1 + 0x10);
  func_0x00010539efc4();
  if (puVar1 != (undefined *)0x0) {
    func_0x0001000df548();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = unaff_x19;
  return auVar3;
}



/* Entry: 10b21e144; end: 10b21e21f;  */

undefined1  [16] FUN_10b21e144(long param_1,undefined8 param_2)

{
  undefined1 in_CY;
  long lVar1;
  undefined8 unaff_x19;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  func_0x00010b21e984();
  if (!(bool)in_CY) {
    lVar1 = param_1 * 0x28;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104bd35f4();
  func_0x00010b18d1ec(param_1 + 0x10);
  func_0x00010539efc4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = unaff_x19;
  return auVar2;
}



/* Entry: 10b21e220; end: 10b21e273;  */

long FUN_10b21e220(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3;
  for (; param_1 != param_2; param_1 = param_1 + 0x28) {
    FUN_10b21e274(param_3,param_1);
    param_3 = param_3 + 0x28;
    lVar1 = lVar1 + 0x28;
  }
  return lVar1;
}



/* Entry: 10b21e274; end: 10b21e35b;  */

undefined8 * FUN_10b21e274(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x00010539ee8c(&uStack_30);
  func_0x00010b18caf0(param_1 + 2,param_2 + 2);
  param_1[4] = param_2[4];
  return param_1;
}



/* Entry: 10b21e35c; end: 10b21e35f;  */

void FUN_10b21e35c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc8948;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b21e360; end: 10b21e373;  */

void FUN_10b21e360(void)

{
  FUN_10b21e4c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b21e374; end: 10b21e387;  */

void FUN_10b21e374(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b21e37c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b21e388; end: 10b21e39b;  */

void FUN_10b21e388(void)

{
  FUN_10b21e3a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b21e39c; end: 10b21e3a3;  */

void FUN_10b21e39c(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long alStack_48 [2];
  undefined1 auStack_38 [16];
  long lStack_28;
  
  pbVar1 = (byte *)(param_1 + 0x20);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((bVar2 & 1) == 0) {
    func_0x00010b189ff8(alStack_48,param_1 + 8);
    if (alStack_48[0] != 0) {
      lVar6 = *(long *)(param_1 + 0x18);
      FUN_10b21d930(auStack_38,alStack_48[0] + 0x70);
      plVar7 = (long *)(lStack_28 + 0x10);
      while (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0) {
        for (lVar5 = plVar7[5]; lVar5 != plVar7[6]; lVar5 = lVar5 + 0x28) {
          if (*(long *)(lVar5 + 0x20) == lVar6) {
            lVar5 = lVar5 + 0x28;
            FUN_10b21e220(lVar5);
            func_0x00010b21e1e8(plVar7 + 5,lVar5);
            if (plVar7[5] == plVar7[6]) {
              lVar6 = lStack_28;
              FUN_10b21e638(lStack_28,plVar7 + 2);
              if (lVar6 != 0) {
                FUN_10b21e70c(lStack_28,lVar6);
              }
            }
            goto LAB_10b21e49c;
          }
        }
      }
LAB_10b21e49c:
      func_0x000107c2798c(auStack_38);
    }
    func_0x00010b18a108(alStack_48);
  }
  return;
}



/* Entry: 10b21e3a4; end: 10b21e3db;  */

undefined8 * FUN_10b21e3a4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cc8998;
  FUN_10b21e3dc();
  func_0x00010b18a0e4(param_1 + 1);
  return param_1;
}



/* Entry: 10b21e3dc; end: 10b21e4c3;  */

void FUN_10b21e3dc(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long alStack_48 [2];
  undefined1 auStack_38 [16];
  long lStack_28;
  
  pbVar1 = (byte *)(param_1 + 0x20);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((bVar2 & 1) == 0) {
    func_0x00010b189ff8(alStack_48,param_1 + 8);
    if (alStack_48[0] != 0) {
      lVar6 = *(long *)(param_1 + 0x18);
      FUN_10b21d930(auStack_38,alStack_48[0] + 0x70);
      plVar7 = (long *)(lStack_28 + 0x10);
      while (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0) {
        for (lVar5 = plVar7[5]; lVar5 != plVar7[6]; lVar5 = lVar5 + 0x28) {
          if (*(long *)(lVar5 + 0x20) == lVar6) {
            lVar5 = lVar5 + 0x28;
            FUN_10b21e220(lVar5);
            func_0x00010b21e1e8(plVar7 + 5,lVar5);
            if (plVar7[5] == plVar7[6]) {
              lVar6 = lStack_28;
              FUN_10b21e638(lStack_28,plVar7 + 2);
              if (lVar6 != 0) {
                FUN_10b21e70c(lStack_28,lVar6);
              }
            }
            goto LAB_10b21e49c;
          }
        }
      }
LAB_10b21e49c:
      func_0x000107c2798c(auStack_38);
    }
    func_0x00010b18a108(alStack_48);
  }
  return;
}



/* Entry: 10b21e4c4; end: 10b21e4d3;  */

void FUN_10b21e4c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc8948;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b21e4d4; end: 10b21e4fb;  */

long FUN_10b21e4d4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b21e4fc; end: 10b21e513;  */

void FUN_10b21e4fc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b21e514; end: 10b21e557;  */

long * FUN_10b21e514(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010b21e108(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10b21e558; end: 10b21e613;  */

void FUN_10b21e558(long param_1)

{
  long lVar1;
  long alStack_270 [2];
  undefined1 auStack_260 [144];
  undefined8 uStack_1d0;
  char cStack_1c8;
  char cStack_38;
  
  lVar1 = *(long *)(param_1 + 0x10);
  __ZNSt3__16chrono12steady_clock3nowEv();
  func_0x00010b189ff8(alStack_270,lVar1);
  if (alStack_270[0] != 0) {
    __ZNSt3__16chrono12steady_clock3nowEv();
    (**(code **)(**(long **)(alStack_270[0] + 0x28) + 0x10))
              (auStack_260,*(long **)(alStack_270[0] + 0x28),lVar1 + 0x10);
    __ZNSt3__16chrono12steady_clock3nowEv();
    if (cStack_38 == '\x01') {
      if (cStack_1c8 == '\0') {
        uStack_1d0 = 0;
      }
      (**(code **)(**(long **)(lVar1 + 0x28) + 0x10))
                (*(long **)(lVar1 + 0x28),lVar1 + 0x10,uStack_1d0,auStack_260);
    }
    func_0x00010539dd5c(auStack_260);
    __ZNSt3__16chrono12steady_clock3nowEv();
  }
  func_0x00010b21e95c();
  return;
}



/* Entry: 10b21e614; end: 10b21e633;  */

void FUN_10b21e614(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010b21d950();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b21e634; end: 10b21e637;  */

void FUN_10b21e634(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b21e638; end: 10b21e70b;  */

long FUN_10b21e638(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x000107c278c4();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar4 != plVar2) break;
        lVar3 = (long)(plVar5 + 2);
        func_0x000107c278d0(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 10b21e70c; end: 10b21e83f;  */

void FUN_10b21e70c(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plStack_28;
  long *plStack_20;
  undefined1 uStack_18;
  undefined4 uStack_17;
  undefined3 uStack_13;
  
  uVar5 = param_1[1];
  lVar3 = *param_2;
  uVar4 = param_2[1];
  uVar7 = uVar5 - 1;
  if ((uVar5 & uVar7) == 0) {
    uVar4 = uVar7 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar9 * uVar5;
  }
  lVar8 = *param_1;
  plVar2 = *(long **)(lVar8 + uVar4 * 8);
  do {
    plVar6 = plVar2;
    plVar2 = (long *)*plVar6;
  } while ((long *)*plVar6 != param_2);
  plStack_20 = param_1 + 2;
  if (plVar6 == plStack_20) {
LAB_10b21e794:
    if (lVar3 == 0) {
LAB_10b21e7c4:
      *(undefined8 *)(lVar8 + uVar4 * 8) = 0;
      lVar3 = *param_2;
      goto LAB_10b21e7cc;
    }
    uVar9 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar7) == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 != uVar4) goto LAB_10b21e7c4;
  }
  else {
    uVar9 = plVar6[1];
    if ((uVar5 & uVar7) == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 != uVar4) goto LAB_10b21e794;
LAB_10b21e7cc:
    if (lVar3 == 0) goto LAB_10b21e804;
  }
  uVar9 = *(ulong *)(lVar3 + 8);
  if ((uVar5 & uVar7) == 0) {
    uVar9 = uVar9 & uVar7;
  }
  else if (uVar5 <= uVar9) {
    uVar7 = 0;
    if (uVar5 != 0) {
      uVar7 = uVar9 / uVar5;
    }
    uVar9 = uVar9 - uVar7 * uVar5;
  }
  if (uVar9 != uVar4) {
    *(long **)(lVar8 + uVar9 * 8) = plVar6;
    lVar3 = *param_2;
  }
LAB_10b21e804:
  *plVar6 = lVar3;
  *param_2 = 0;
  param_1[3] = param_1[3] + -1;
  uStack_18 = 1;
  uStack_17 = 0;
  uStack_13 = 0;
  plStack_28 = param_2;
  FUN_10b21e514(&plStack_28);
  return;
}



/* Entry: 10b21e840; end: 10b21e8a7;  */

void FUN_10b21e840(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  puVar1 = (undefined8 *)puVar2[1];
  for (puVar3 = (undefined8 *)*puVar2; puVar3 != puVar1; puVar3 = puVar3 + 5) {
    if ((puVar3[3] != 0) && (*(long *)(puVar3[3] + 8) != -1)) {
      (**(code **)(*(long *)*puVar3 + 0x10))((long *)*puVar3,puVar2 + 3,puVar2[6],puVar2 + 7);
    }
  }
  return;
}



/* Entry: 10b21e8a8; end: 10b21e8c7;  */

void FUN_10b21e8a8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b21dedc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b21e8c8; end: 10b21e997;  */

void FUN_10b21e8c8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b21e998; end: 10b21ea27;  */

void FUN_10b21e998(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_38 [16];
  long lStack_28;
  
  func_0x00010b21f55c(auStack_38);
  FUN_10b21ed78(lStack_28,param_3);
  if ((lStack_28 == 0) ||
     (((*(byte *)(lStack_28 + 0x250) & 1) == 0 && ((*(byte *)(lStack_28 + 0x280) & 1) == 0)))) {
    uVar1 = 0;
    *param_1 = 0;
  }
  else {
    FUN_10b123fcc(param_1,lStack_28 + 0x28);
    uVar3 = *(undefined8 *)(lStack_28 + 0x260);
    uVar2 = *(undefined8 *)(lStack_28 + 600);
    uVar4 = *(undefined8 *)(lStack_28 + 0x268);
    uVar6 = *(undefined8 *)(lStack_28 + 0x280);
    uVar5 = *(undefined8 *)(lStack_28 + 0x278);
    *(undefined8 *)(param_1 + 0x248) = *(undefined8 *)(lStack_28 + 0x270);
    *(undefined8 *)(param_1 + 0x240) = uVar4;
    *(undefined8 *)(param_1 + 600) = uVar6;
    *(undefined8 *)(param_1 + 0x250) = uVar5;
    *(undefined8 *)(param_1 + 0x238) = uVar3;
    *(undefined8 *)(param_1 + 0x230) = uVar2;
    uVar1 = 1;
  }
  param_1[0x260] = uVar1;
  func_0x00010b21f518();
  return;
}



/* Entry: 10b21ea28; end: 10b21ea53;  */

void FUN_10b21ea28(long param_1,long param_2)

{
  func_0x000107c27f4c();
  *(long *)(param_1 + 0x10) = param_2 + 0x40;
  return;
}



/* Entry: 10b21ea54; end: 10b21eaa3;  */

void FUN_10b21ea54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_38 [16];
  long lStack_28;
  
  func_0x00010b21f55c(auStack_38);
  FUN_10b21ed78(lStack_28,param_2);
  if (lStack_28 != 0) {
    FUN_10b18e648(lStack_28 + 0x28,param_4);
  }
  func_0x00010b21f518();
  return;
}



/* Entry: 10b21eaa4; end: 10b21eaab;  */

void FUN_10b21eaa4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_38 [16];
  long lStack_28;
  
  func_0x00010b21f55c(auStack_38,param_1 + -8);
  FUN_10b21ed78(lStack_28,param_2);
  if (lStack_28 != 0) {
    FUN_10b18e648(lStack_28 + 0x28,param_4);
  }
  func_0x00010b21f518();
  return;
}



/* Entry: 10b21eaac; end: 10b21eb3b;  */

uint FUN_10b21eaac(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_4c8 [552];
  undefined1 uStack_2a0;
  undefined1 auStack_298 [560];
  undefined1 uStack_68;
  undefined1 uStack_40;
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  func_0x00010b21f55c(auStack_38);
  auStack_4c8[0] = 0;
  uStack_2a0 = 0;
  func_0x00010539dcfc(auStack_298,auStack_4c8);
  uStack_68 = 0;
  uStack_40 = 0;
  func_0x00010539dd5c(auStack_4c8);
  FUN_10b21eb3c(uStack_28,param_2,auStack_298);
  func_0x00010539dd5c(auStack_298);
  func_0x000107c2798c(auStack_38);
  return (uint)param_2 & 1;
}



/* Entry: 10b21eb3c; end: 10b21eb6f;  */

void FUN_10b21eb3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_3;
  uStack_18 = param_2;
  FUN_10b21ee38(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_20);
  return;
}



/* Entry: 10b21eb70; end: 10b21ebb3;  */

void FUN_10b21eb70(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  func_0x00010b21f528();
  FUN_10b18ef8c(uStack_28,param_2);
  func_0x00010b18e7ec();
  func_0x00010b21f518();
  return;
}



/* Entry: 10b21ebb4; end: 10b21ec43;  */

void FUN_10b21ebb4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  func_0x00010b21f528();
  lVar1 = lStack_38;
  FUN_10b18f468(lStack_38,param_2);
  if (lVar1 != 0) {
    (**(code **)(**(long **)(lVar1 + 0x28) + 0x10))();
    FUN_10b18f524(lStack_38,lVar1);
  }
  func_0x00010b21f518();
  FUN_10b21ea28(auStack_48,param_1 + 0x20);
  func_0x00010b21f2c8(lStack_38,param_2);
  func_0x00010b21f518();
  return;
}



/* Entry: 10b21ec44; end: 10b21ec8b;  */

undefined8 FUN_10b21ec44(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  func_0x00010b21f528();
  FUN_10b21ec8c(uStack_28,param_2);
  func_0x00010b21f518();
  return uStack_28;
}



/* Entry: 10b21ec8c; end: 10b21eca7;  */

bool FUN_10b21ec8c(long param_1)

{
  FUN_10b21f44c();
  return param_1 != 0;
}



/* Entry: 10b21eca8; end: 10b21ecab;  */

undefined8 * FUN_10b21eca8(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110cc89f8;
  param_1[1] = &PTR_FUN_110cc8a28;
  FUN_10b18e9b8(param_1 + 0x11);
  plVar1 = (long *)param_1[0xe];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_10b21ed50(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = param_1[0xc];
  param_1[0xc] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 4);
  FUN_10b189f60(param_1 + 2);
  return param_1;
}



/* Entry: 10b21ecac; end: 10b21ecbf;  */

void FUN_10b21ecac(void)

{
  FUN_10b21ecd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b21ecc0; end: 10b21eccf;  */

undefined8 * FUN_10b21ecc0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  param_1[-1] = &PTR_FUN_110cc89f8;
  *param_1 = &PTR_FUN_110cc8a28;
  FUN_10b18e9b8(param_1 + 0x10);
  plVar1 = (long *)param_1[0xd];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_10b21ed50(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = param_1[0xb];
  param_1[0xb] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  FUN_10b189f60(param_1 + 1);
  return param_1 + -1;
}



/* Entry: 10b21ecd0; end: 10b21ed4f;  */

undefined8 * FUN_10b21ecd0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110cc89f8;
  param_1[1] = &PTR_FUN_110cc8a28;
  FUN_10b18e9b8(param_1 + 0x11);
  plVar1 = (long *)param_1[0xe];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_10b21ed50(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = param_1[0xc];
  param_1[0xc] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 4);
  FUN_10b189f60(param_1 + 2);
  return param_1;
}



/* Entry: 10b21ed50; end: 10b21ed77;  */

void FUN_10b21ed50(long param_1)

{
  func_0x00010539dd5c(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10b21ed78; end: 10b21ee37;  */

long FUN_10b21ed78(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x000107c278c4();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    plVar3 = plVar2;
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar4 != plVar2) break;
        func_0x00010b21f550();
        if ((int)plVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 10b21ee38; end: 10b21f227;  */

undefined1  [16]
FUN_10b21ee38(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,long *param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *unaff_x26;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined1 auVar20 [16];
  
  plVar6 = param_1 + 3;
  func_0x000107c278c4();
  plVar13 = (long *)param_1[1];
  if (plVar13 != (long *)0x0) {
    uVar14 = (long)plVar13 - 1;
    if (((ulong)plVar13 & uVar14) == 0) {
      unaff_x26 = (long *)(uVar14 & (ulong)plVar6);
    }
    else {
      unaff_x26 = plVar6;
      if (plVar13 <= plVar6) {
        uVar5 = 0;
        if (plVar13 != (long *)0x0) {
          uVar5 = (ulong)plVar6 / (ulong)plVar13;
        }
        unaff_x26 = (long *)((long)plVar6 - uVar5 * (long)plVar13);
      }
    }
    plVar11 = *(long **)(*param_1 + (long)unaff_x26 * 8);
    if (plVar11 != (long *)0x0) {
      do {
        while( true ) {
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_10b21ef04;
          plVar3 = (long *)plVar11[1];
          if (plVar3 != plVar6) break;
          plVar3 = plVar11 + 2;
          func_0x000107c278d0(plVar3,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            uVar2 = 0;
            goto LAB_10b21f1ec;
          }
        }
        if (((ulong)plVar13 & uVar14) == 0) {
          plVar3 = (long *)((ulong)plVar3 & uVar14);
        }
        else if (plVar13 <= plVar3) {
          uVar5 = 0;
          if (plVar13 != (long *)0x0) {
            uVar5 = (ulong)plVar3 / (ulong)plVar13;
          }
          plVar3 = (long *)((long)plVar3 - uVar5 * (long)plVar13);
        }
      } while (plVar3 == unaff_x26);
    }
  }
LAB_10b21ef04:
  uVar2 = *param_4;
  lVar12 = *param_5;
  plVar3 = param_1 + 2;
  plVar11 = (long *)0x288;
  __Znwm();
  *plVar11 = 0;
  plVar11[1] = (long)plVar6;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar11 + 2,uVar2);
  func_0x00010539dcfc(plVar11 + 5,lVar12);
  lVar16 = *(long *)(lVar12 + 0x238);
  lVar15 = *(long *)(lVar12 + 0x230);
  lVar17 = *(long *)(lVar12 + 0x240);
  lVar19 = *(long *)(lVar12 + 600);
  lVar18 = *(long *)(lVar12 + 0x250);
  plVar11[0x4e] = *(long *)(lVar12 + 0x248);
  plVar11[0x4d] = lVar17;
  plVar11[0x50] = lVar19;
  plVar11[0x4f] = lVar18;
  plVar11[0x4c] = lVar16;
  plVar11[0x4b] = lVar15;
  if ((plVar13 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar13)) goto LAB_10b21f170;
  uVar14 = 1;
  if ((long *)0x2 < plVar13) {
    uVar14 = (ulong)(((ulong)plVar13 & (long)plVar13 - 1U) != 0);
  }
  plVar4 = (long *)(uVar14 | (long)plVar13 << 1);
  plVar13 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (plVar4 <= plVar13) {
    plVar4 = plVar13;
  }
  if ((long)plVar4 - 1U == 0) {
    plVar4 = (long *)0x2;
  }
  else if (((ulong)plVar4 & (long)plVar4 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar13 = (long *)param_1[1];
  if (plVar13 < plVar4) {
LAB_10b21efdc:
    if ((ulong)plVar4 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10b21f218);
      (*pcVar1)();
    }
    lVar12 = (long)plVar4 << 3;
    __Znwm(lVar12);
    FUN_10b21f228(param_1,lVar12);
    param_1[1] = (long)plVar4;
    lVar12 = *param_1;
    for (plVar13 = (long *)0x0; plVar4 != plVar13; plVar13 = (long *)((long)plVar13 + 1)) {
      *(undefined8 *)(lVar12 + (long)plVar13 * 8) = 0;
    }
    plVar7 = (long *)*plVar3;
    plVar13 = plVar4;
    if (plVar7 != (long *)0x0) {
      plVar8 = (long *)plVar7[1];
      uVar5 = (long)plVar4 - 1;
      uVar14 = 0;
      if (plVar4 != (long *)0x0) {
        uVar14 = (ulong)plVar8 / (ulong)plVar4;
      }
      plVar9 = plVar8;
      if (plVar4 <= plVar8) {
        plVar9 = (long *)((long)plVar8 - uVar14 * (long)plVar4);
      }
      if (((ulong)plVar4 & uVar5) == 0) {
        plVar9 = (long *)((ulong)plVar8 & uVar5);
      }
      *(long **)(lVar12 + (long)plVar9 * 8) = plVar3;
      while (plVar8 = plVar7, plVar7 = (long *)*plVar8, plVar7 != (long *)0x0) {
        plVar10 = (long *)plVar7[1];
        if (((ulong)plVar4 & uVar5) == 0) {
          plVar10 = (long *)((ulong)plVar10 & uVar5);
        }
        else if (plVar4 <= plVar10) {
          uVar14 = 0;
          if (plVar4 != (long *)0x0) {
            uVar14 = (ulong)plVar10 / (ulong)plVar4;
          }
          plVar10 = (long *)((long)plVar10 - uVar14 * (long)plVar4);
        }
        if (plVar10 != plVar9) {
          if (*(long *)(lVar12 + (long)plVar10 * 8) == 0) {
            *(long **)(lVar12 + (long)plVar10 * 8) = plVar8;
            plVar9 = plVar10;
          }
          else {
            *plVar8 = *plVar7;
            *plVar7 = **(undefined8 **)(lVar12 + (long)plVar10 * 8);
            **(long **)(lVar12 + (long)plVar10 * 8) = (long)plVar7;
            plVar7 = plVar8;
          }
        }
      }
    }
  }
  else if (plVar4 < plVar13) {
    plVar7 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar13 < (long *)0x3) || (((ulong)plVar13 & (long)plVar13 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar7) {
      plVar7 = (long *)(1L << (-LZCOUNT((long)plVar7 - 1) & 0x3fU));
    }
    if (plVar4 <= plVar7) {
      plVar4 = plVar7;
    }
    if (plVar4 < plVar13) {
      if (plVar4 != (long *)0x0) goto LAB_10b21efdc;
      FUN_10b21f228(param_1,0);
      param_1[1] = 0;
      plVar13 = (long *)0x0;
    }
    else {
      plVar13 = (long *)param_1[1];
    }
  }
  if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
    unaff_x26 = (long *)((long)plVar13 - 1U & (ulong)plVar6);
  }
  else {
    unaff_x26 = plVar6;
    if (plVar13 <= plVar6) {
      uVar14 = 0;
      if (plVar13 != (long *)0x0) {
        uVar14 = (ulong)plVar6 / (ulong)plVar13;
      }
      unaff_x26 = (long *)((long)plVar6 - uVar14 * (long)plVar13);
    }
  }
LAB_10b21f170:
  lVar12 = *param_1;
  plVar6 = *(long **)(lVar12 + (long)unaff_x26 * 8);
  if (plVar6 == (long *)0x0) {
    *plVar11 = *plVar3;
    *plVar3 = (long)plVar11;
    *(long **)(lVar12 + (long)unaff_x26 * 8) = plVar3;
    if (*plVar11 != 0) {
      plVar6 = *(long **)(*plVar11 + 8);
      if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
        plVar6 = (long *)((ulong)plVar6 & (long)plVar13 - 1U);
      }
      else if (plVar13 <= plVar6) {
        uVar14 = 0;
        if (plVar13 != (long *)0x0) {
          uVar14 = (ulong)plVar6 / (ulong)plVar13;
        }
        plVar6 = (long *)((long)plVar6 - uVar14 * (long)plVar13);
      }
      *(long **)(lVar12 + (long)plVar6 * 8) = plVar11;
    }
  }
  else {
    *plVar11 = *plVar6;
    *plVar6 = (long)plVar11;
  }
  param_1[3] = param_1[3] + 1;
  func_0x00010b21f564();
  uVar2 = 1;
LAB_10b21f1ec:
  auVar20._8_8_ = uVar2;
  auVar20._0_8_ = plVar11;
  return auVar20;
}



/* Entry: 10b21f228; end: 10b21f23f;  */

void FUN_10b21f228(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b21f240; end: 10b21f267;  */

undefined8 FUN_10b21f240(undefined8 param_1)

{
  FUN_10b21f268(param_1,0);
  return param_1;
}



/* Entry: 10b21f268; end: 10b21f27f;  */

void FUN_10b21f268(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    FUN_10b21ed50(lVar1 + 0x10);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10b21f280; end: 10b21f32f;  */

void FUN_10b21f280(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_10b21ed50(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10b21f330; end: 10b21f44b;  */

void FUN_10b21f330(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10b21f3e4;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10b21f3e4;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_10b21f3e4:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 10b21f44c; end: 10b21f50b;  */

long FUN_10b21f44c(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x000107c278c4();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    plVar3 = plVar2;
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar2 != plVar4) break;
        func_0x00010b21f550();
        if ((int)plVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 10b21f50c; end: 10b21f56b;  */

undefined8 * FUN_10b21f50c(void)

{
  undefined8 in_stack_00000008;
  char in_stack_00000010;
  
  if (in_stack_00000010 == '\x01') {
    func_0x000107c60d8c(in_stack_00000008);
  }
  return &stack0x00000008;
}



/* Entry: 10b21f56c; end: 10b21f60f;  */

undefined4 FUN_10b21f56c(void)

{
  undefined4 uVar1;
  undefined1 auStack_38 [16];
  undefined4 *puStack_28;
  
  FUN_10b21f658();
  uVar1 = *puStack_28;
  func_0x000107c2798c(auStack_38);
  return uVar1;
}



/* Entry: 10b21f610; end: 10b21f613;  */

undefined8 * FUN_10b21f610(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc8ab8;
  __ZNSt3__15mutexD1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 10b21f614; end: 10b21f627;  */

void FUN_10b21f614(void)

{
  FUN_10b21f628();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b21f628; end: 10b21f657;  */

undefined8 * FUN_10b21f628(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc8ab8;
  __ZNSt3__15mutexD1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 10b21f658; end: 10b21f663;  */

void FUN_10b21f658(long param_1)

{
  undefined1 *puVar1;
  
  puVar1 = &stack0x00000008;
  func_0x000107c27f4c();
  *(long *)(puVar1 + 0x10) = param_1 + 0x48;
  return;
}



/* Entry: 10b21f664; end: 10b21f7bf;  */

undefined8 * FUN_10b21f664(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  long *plVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  
  *param_1 = &PTR_DAT_110cc8b08;
  plVar3 = (long *)*param_3;
  (**(code **)(*plVar3 + 0x10))(param_1 + 1);
  uVar2 = SUB84(plVar3,0);
  FUN_10b21fbcc();
  (**(code **)(extraout_x8 + 0x18))();
  *(char *)(param_1 + 4) = (char)uVar2;
  FUN_10b21fbcc();
  (**(code **)(extraout_x8_00 + 0x20))();
  *(undefined4 *)((long)param_1 + 0x24) = uVar2;
  FUN_10b21fbcc();
  uVar1 = (undefined1)uVar2;
  (**(code **)(extraout_x8_01 + 0x30))(param_1 + 5);
  FUN_10b21fbcc();
  (**(code **)(extraout_x8_02 + 0x40))(param_1 + 0xb);
  if (*(char *)(param_1 + 0xd) == '\x01') {
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  else {
    FUN_10b21fbcc();
    (**(code **)(extraout_x8_03 + 0x38))(param_1 + 0xe);
  }
  FUN_10b21fbcc();
  (**(code **)(extraout_x8_04 + 0x58))(param_1 + 0x10);
  FUN_10b21fbcc();
  (**(code **)(extraout_x8_05 + 0x60))(param_1 + 0x16);
  FUN_10b21fbcc();
  (**(code **)(extraout_x8_06 + 0x68))();
  *(undefined1 *)(param_1 + 0x19) = uVar1;
  FUN_10b169fb8(param_1 + 0x1a,param_2);
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  return param_1;
}



/* Entry: 10b21f7c0; end: 10b21f93b;  */

void FUN_10b21f7c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long *param_6)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long unaff_x19;
  int iVar3;
  undefined8 auStack_50 [2];
  
  func_0x00010b21fbf8();
  iVar3 = (int)param_1 + 8;
  *param_1 = extraout_x8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  func_0x00010b21fbec();
  (**(code **)(extraout_x8_00 + 0x18))();
  *(char *)(unaff_x19 + 0x20) = (char)iVar3;
  func_0x00010b21fbec();
  (**(code **)(extraout_x8_01 + 0x20))();
  *(int *)(unaff_x19 + 0x24) = iVar3;
  func_0x00010b21fbec();
  (**(code **)(extraout_x8_02 + 0x30))(unaff_x19 + 0x28);
  func_0x00010b21fbec();
  (**(code **)(extraout_x8_03 + 0x40))(unaff_x19 + 0x58);
  if (*(char *)(unaff_x19 + 0x68) == '\x01') {
    *(undefined8 *)(unaff_x19 + 0x70) = 0;
    *(undefined8 *)(unaff_x19 + 0x78) = 0;
  }
  else {
    func_0x00010b21fbec();
    (**(code **)(extraout_x8_04 + 0x38))(unaff_x19 + 0x70);
  }
  lVar2 = unaff_x19 + 0x80;
  func_0x00010734b1b0(lVar2,param_3);
  uVar1 = (undefined1)lVar2;
  func_0x00010b21fbec();
  (**(code **)(extraout_x8_05 + 0x60))(unaff_x19 + 0xb0);
  func_0x00010b21fbec();
  (**(code **)(extraout_x8_06 + 0x68))();
  *(undefined1 *)(unaff_x19 + 200) = uVar1;
  func_0x00010b21fc18();
  if (*param_6 == param_6[1]) {
    auStack_50[0] = 0;
  }
  else {
    FUN_10b21124c(auStack_50,param_6);
  }
  func_0x00010b21fbd8(auStack_50[0]);
  return;
}



/* Entry: 10b21f93c; end: 10b21fa67;  */

void FUN_10b21f93c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined1 param_8,
                  long *param_9)

{
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 auStack_60 [2];
  
  func_0x00010b21fbf8();
  *param_1 = extraout_x8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 1);
  *(undefined1 *)(unaff_x19 + 0x20) = 0;
  *(undefined4 *)(unaff_x19 + 0x24) = param_6;
  func_0x00010734b1b0(unaff_x19 + 0x28,param_4);
  *(undefined1 *)(unaff_x19 + 0x58) = 0;
  *(undefined1 *)(unaff_x19 + 0x68) = 0;
  *(undefined8 *)(unaff_x19 + 0x70) = 0;
  *(undefined8 *)(unaff_x19 + 0x78) = 0;
  func_0x00010734b1b0(unaff_x19 + 0x80,param_3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(unaff_x19 + 0xb0,param_5)
  ;
  *(undefined1 *)(unaff_x19 + 200) = param_8;
  func_0x00010b21fc18();
  if (*param_9 == param_9[1]) {
    auStack_60[0] = 0;
  }
  else {
    FUN_10b21124c(auStack_60);
  }
  func_0x00010b21fbd8(auStack_60[0]);
  return;
}



/* Entry: 10b21fa68; end: 10b21fb03;  */

void FUN_10b21fa68(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            (param_1,param_2 + 8);
  return;
}



/* Entry: 10b21fb04; end: 10b21fb2b;  */

void FUN_10b21fb04(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = 0;
  func_0x000105642268(param_1,&uStack_18);
  return;
}



/* Entry: 10b21fb2c; end: 10b21fb53;  */

void FUN_10b21fb2c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  
  lVar2 = *(long *)(param_2 + 0x150);
  *param_1 = *(undefined8 *)(param_2 + 0x148);
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  return;
}



/* Entry: 10b21fb54; end: 10b21fb67;  */

void FUN_10b21fb54(void)

{
  FUN_10b21fb70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b21fb68; end: 10b21fb6f;  */

void FUN_10b21fb68(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10b21fb70; end: 10b21fbcb;  */

void FUN_10b21fb70(undefined8 *param_1)

{
  undefined8 extraout_x8;
  long unaff_x19;
  
  func_0x00010b21fbf8();
  *param_1 = extraout_x8;
  func_0x000107c27f1c(param_1 + 0x29);
  func_0x00010b21fc10();
  func_0x00010b21fc08();
  func_0x000107c27bb0(unaff_x19 + 0x80);
  func_0x000107c27f10(unaff_x19 + 0x70);
  func_0x000107c27f18(unaff_x19 + 0x58);
  func_0x00010b21fc24();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 1);
  return;
}



/* Entry: 10b21fbcc; end: 10b21fc2b;  */

void FUN_10b21fbcc(void)

{
  return;
}



/* Entry: 10b21fc2c; end: 10b21fd27;  */

void FUN_10b21fc2c(void)

{
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  long unaff_x19;
  long unaff_x21;
  undefined8 *unaff_x23;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [16];
  
  func_0x00010b223ec0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  func_0x00010b224160();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b2235d0();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(unaff_x19 + 0x38) = *unaff_x23;
  func_0x00010b223fcc();
  func_0x00010b223fb4();
  func_0x00010b2240fc();
  __ZNSt3__119__shared_mutex_baseC1Ev(unaff_x21 + 0x10);
  func_0x00010b223d5c();
  if (extraout_x8_00 == 0) {
    func_0x00010b223d00();
    func_0x000107c27c20(auStack_68);
  }
  else {
    func_0x00010b223d44();
    func_0x00010b223a6c();
    func_0x00010b223f94();
    func_0x000107c27c20(auStack_50);
    func_0x00010b223830();
  }
  return;
}



/* Entry: 10b21fd28; end: 10b21fd9b;  */

void FUN_10b21fd28(long param_1)

{
  long extraout_x8;
  int extraout_w10;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  func_0x00010b223220(auStack_30,param_1);
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010b224088();
    if (extraout_x8 != 0) {
      do {
        func_0x00010b2235d0();
      } while (extraout_w10 != 0);
    }
    FUN_10b21fd9c();
    func_0x00010b22325c(auStack_40);
  }
  func_0x00010b22325c(auStack_30);
  return;
}



/* Entry: 10b21fd9c; end: 10b21fdef;  */

void FUN_10b21fd9c(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [16];
  
  func_0x00010b2236c8();
  func_0x00010b223df8(&PTR_FUN_110cc8f58);
  func_0x00010b223ce8();
  func_0x00010b223690();
  func_0x00010b2235f0();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b223620();
  func_0x00010b2236c0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_d8);
  FUN_10b21fe54(auStack_c0,param_1,auStack_d8);
  FUN_10b220488(extraout_x8,auStack_c0);
  func_0x00010b223a2c();
  func_0x00010b223830();
  return;
}



/* Entry: 10b21fdf0; end: 10b21fe53;  */

void FUN_10b21fdf0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [16];
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_48);
  FUN_10b21fe54(auStack_30,param_2,auStack_48);
  FUN_10b220488(param_1,auStack_30);
  func_0x00010b223a2c();
  func_0x00010b223830();
  return;
}



/* Entry: 10b21fe54; end: 10b220487;  */

void FUN_10b21fe54(long param_1,ulong param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar6;
  code *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long lVar7;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  long unaff_x21;
  ulong unaff_x24;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plStack_190;
  undefined8 uStack_188;
  long lStack_160;
  long alStack_150 [2];
  long lStack_140;
  long lStack_138;
  undefined1 auStack_130 [16];
  long lStack_120;
  undefined1 auStack_118 [72];
  undefined1 auStack_d0 [16];
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x00010b223a94();
  func_0x00010b223220();
  if ((long)unaff_x24 < 1) {
    func_0x00010b2236d8(auStack_d0);
    FUN_10b2205c0();
    func_0x00010b223cb4();
    lStack_140 = param_1;
    if (extraout_x8 != 0) {
      do {
        func_0x00010b2235d0();
      } while (extraout_w10 != 0);
    }
    plStack_190 = (long *)0x0;
    uStack_188 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    FUN_10b221194(&lStack_120,auStack_d0,&uStack_78);
    FUN_10b2211bc(&plStack_190,&lStack_120);
    func_0x00010b223f4c();
    func_0x00010b2239a8();
    FUN_10b2211e0(alStack_150);
    FUN_10b22121c(&uStack_90,*(undefined8 *)(alStack_150[0] + 0x18),
                  *(undefined8 *)(alStack_150[0] + 0x20));
    func_0x00010b223c10();
    lStack_c0 = extraout_x8_00 + 0x90;
    lStack_b8 = CONCAT71(lStack_b8._1_7_,1);
    __ZNSt3__15mutex4lockEv();
    plVar11 = plStack_190;
    FUN_10b221258();
    if ((int)plVar11 == 0) {
      uVar5 = 0x20;
      __Znwm();
      func_0x00010b223ab8(&PTR_FUN_110cc8c70);
      lVar7 = *(long *)(extraout_x9 + 0xd8);
      *(undefined8 *)(extraout_x9 + 0xd8) = uVar5;
      if (lVar7 != 0) {
        func_0x00010b223680();
      }
    }
    else {
      FUN_10b2211bc(&lStack_b0,&plStack_190);
    }
    func_0x00010b223de0();
    if (lStack_b0 != 0) {
      lStack_c0 = lStack_b0;
      lStack_b8 = lStack_a8;
      if (lStack_a8 != 0) {
        do {
          func_0x00010b2235d0();
        } while (extraout_w10_00 != 0);
      }
      FUN_10b221298(&lStack_120);
      func_0x00010b223a8c();
    }
    func_0x00010b224138();
    func_0x00010b221398();
    FUN_10b221904(&lStack_120);
    func_0x00010b223c34();
    func_0x00010b2238bc();
    func_0x00010b22325c(&lStack_140);
    func_0x00010b2239f0();
    goto LAB_10b22032c;
  }
  func_0x00010b223ea8();
  __ZNSt3__119__shared_mutex_base11lock_sharedEv();
  uVar8 = *(ulong *)(unaff_x21 + 0x160);
  if ((uVar8 != 0) && (*(long *)(unaff_x21 + 0x170) != 0)) {
    func_0x00010b223f64();
    uVar9 = uVar8 - 1;
    if ((uVar8 & uVar9) == 0) {
      uVar10 = param_2 & uVar9;
    }
    else {
      uVar10 = param_2;
      if (uVar8 <= param_2) {
        uVar10 = 0;
        if (uVar8 != 0) {
          uVar10 = param_2 / uVar8;
        }
        uVar10 = param_2 - uVar10 * uVar8;
      }
    }
    plVar11 = *(long **)(*(long *)(unaff_x21 + 0x158) + uVar10 * 8);
    uVar3 = param_2;
    if (plVar11 != (long *)0x0) {
      do {
        while( true ) {
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_10b220048;
          uVar6 = plVar11[1];
          if (uVar6 != param_2) break;
          func_0x00010b223fc0();
          if ((int)uVar3 != 0) {
            FUN_10b2205f4(&lStack_140,plVar11 + 5);
            goto LAB_10b220048;
          }
        }
        if ((uVar8 & uVar9) == 0) {
          uVar6 = uVar6 & uVar9;
        }
        else if (uVar8 <= uVar6) {
          uVar1 = 0;
          if (uVar8 != 0) {
            uVar1 = uVar6 / uVar8;
          }
          uVar6 = uVar6 - uVar1 * uVar8;
        }
      } while (uVar6 == uVar10);
    }
  }
LAB_10b220048:
  plVar11 = &lStack_120;
  func_0x000107c283c4();
  if (lStack_140 == 0) {
    func_0x00010b2236d8(alStack_150);
    FUN_10b2205c0();
    func_0x00010b223a44();
    if (extraout_x8_02 != 0) {
      do {
        func_0x00010b2235d0();
      } while (extraout_w10_01 != 0);
    }
    func_0x00010b223cb4();
    lStack_160 = param_1;
    if (extraout_x8_03 != 0) {
      do {
        func_0x00010b2235d0();
      } while (extraout_w10_02 != 0);
    }
    func_0x00010b22409c();
    func_0x00010b2239c0();
    FUN_10b221194();
    func_0x00010b223f20();
    func_0x00010b223f4c();
    func_0x00010b223c44();
    FUN_10b2211e0(auStack_98);
    func_0x00010b2240b4();
    FUN_10b22121c();
    func_0x00010b2237e8();
    func_0x00010b2239b0(extraout_x8_04 + 0x90);
    __ZNSt3__15mutex4lockEv();
    uVar5 = uStack_78;
    FUN_10b221258();
    if ((int)uVar5 == 0) {
      puVar4 = (undefined8 *)0x50;
      __Znwm();
      *puVar4 = &PTR_DAT_110cc8d10;
      FUN_10b221ab0(puVar4 + 1,&lStack_120);
      func_0x00010b2241a0();
      lVar7 = *(long *)(extraout_x8_07 + 0xd8);
      *(undefined8 **)(extraout_x8_07 + 0xd8) = puVar4;
      if (lVar7 != 0) {
        func_0x00010b2236a0();
      }
    }
    else {
      func_0x00010b223ffc();
    }
    func_0x00010b2238f8();
    if (lStack_c0 != 0) {
      func_0x00010b224194();
      if (param_4 != 0) {
        do {
          func_0x00010b2235d0();
        } while (extraout_w10_04 != 0);
      }
      FUN_10b221958(&lStack_120);
      func_0x00010b2239f0();
    }
    func_0x00010b2236f4();
    func_0x00010b221398();
    func_0x00010b221e70(&lStack_120);
    func_0x00010b223bdc();
    func_0x00010b2239a8();
    func_0x00010b221e98(&plStack_190);
LAB_10b220300:
    func_0x00010b221398(alStack_150);
  }
  else {
    func_0x00010b223d30();
    (*extraout_x8_01)();
    uVar8 = (long)plVar11 - *(long *)(lStack_140 + 0x58);
    uVar2 = uVar8 == unaff_x24;
    if (unaff_x24 <= uVar8) {
      func_0x00010b2236d8(alStack_150);
      FUN_10b2205c0();
      func_0x00010b223954();
      if (extraout_x8_05 != 0) {
        do {
          func_0x00010b2235d0();
        } while (extraout_w10_03 != 0);
      }
      func_0x00010b22409c();
      func_0x00010b2239c0();
      FUN_10b221194();
      func_0x00010b223f20();
      func_0x00010b223f4c();
      func_0x00010b223c44();
      FUN_10b2211e0(auStack_98);
      func_0x00010b224054();
      FUN_10b22121c();
      func_0x00010b223878();
      func_0x00010b2239b0(extraout_x8_06 + 0x90);
      __ZNSt3__15mutex4lockEv();
      uVar5 = uStack_78;
      FUN_10b221258();
      if ((int)uVar5 == 0) {
        uVar5 = 0x40;
        __Znwm();
        func_0x00010b223838(&PTR_FUN_110cc8d50);
        lVar7 = *(long *)(extraout_x9_00 + 0xd8);
        *(undefined8 *)(extraout_x9_00 + 0xd8) = uVar5;
        if (lVar7 != 0) {
          func_0x00010b223680();
        }
      }
      else {
        func_0x00010b223ffc();
      }
      func_0x00010b2238f8();
      if (lStack_c0 != 0) {
        func_0x00010b224194();
        if (param_4 != 0) {
          do {
            func_0x00010b2235d0();
          } while (extraout_w10_06 != 0);
        }
        FUN_10b221ec0(&lStack_120);
        func_0x00010b2239f0();
      }
      func_0x00010b2236f4();
      func_0x00010b221398();
      func_0x00010b222088(&lStack_120);
      func_0x00010b223bdc();
      func_0x00010b2239a8();
      func_0x00010b2220ac(&plStack_190);
      goto LAB_10b220300;
    }
    func_0x00010b2213bc(&lStack_120);
    plStack_190 = (long *)0x0;
    uStack_188 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    FUN_10b221114(&uStack_78,auStack_118,&uStack_90);
    FUN_10b22114c(&plStack_190,&uStack_78);
    func_0x00010b221170(&uStack_78);
    func_0x00010b223c34();
    __ZNSt3__15mutex4lockEv(plStack_190 + 9);
    plVar11 = plStack_190;
    func_0x00010b2240c8();
    if ((bool)uVar2) {
      FUN_10b2205f4();
    }
    else {
      plVar11[1] = lStack_138;
      *plVar11 = lStack_140;
      if (lStack_138 != 0) {
        do {
          func_0x00010b2235d0();
        } while (extraout_w10_05 != 0);
      }
      *(undefined1 *)(plVar11 + 2) = 1;
    }
    func_0x00010b223db0();
    if (&stack0x00000000 == (undefined1 *)0x120) {
      func_0x00010b223efc();
    }
    else {
      func_0x00010b223f08(*(undefined8 *)(lStack_120 + 0x10));
      func_0x00010b223670();
    }
    func_0x00010b2238f0();
    FUN_10b22121c();
    FUN_10b2214bc(&lStack_120);
  }
  func_0x00010b223d90();
LAB_10b22032c:
  func_0x00010b22325c(auStack_130);
  return;
}



/* Entry: 10b220488; end: 10b2205bf;  */

void FUN_10b220488(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  int extraout_w10;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [8];
  undefined8 *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined1 uStack_50;
  undefined8 *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  puStack_48 = (undefined8 *)0x0;
  lStack_40 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  FUN_10b221114(&puStack_58,param_2,&uStack_68);
  FUN_10b22114c(&puStack_48,&puStack_58);
  func_0x00010b221170(&puStack_58);
  func_0x00010b221170(&uStack_68);
  puStack_58 = puStack_48 + 9;
  uStack_50 = 1;
  __ZNSt3__15mutex4lockEv();
  puVar1 = puStack_48;
  puStack_78 = puStack_48;
  lStack_70 = lStack_40;
  if (lStack_40 != 0) {
    do {
      func_0x00010b2235d0();
    } while (extraout_w10 != 0);
  }
  while ((*(byte *)(puVar1 + 2) & 1) == 0) {
    uStack_38 = 0;
    lVar3 = puVar1[0x11];
    __ZNSt13exception_ptrD1Ev(&uStack_38);
    if (lVar3 != 0) break;
    __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(puVar1 + 3,&puStack_58);
  }
  func_0x00010b221170(&puStack_78);
  if (puStack_48[0x11] != 0) {
    __ZNSt13exception_ptrC1ERKS_(auStack_80);
    __ZSt17rethrow_exceptionSt13exception_ptr(auStack_80);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10b22058c);
    (*pcVar2)();
  }
  uVar4 = *puStack_48;
  param_1[1] = puStack_48[1];
  *param_1 = uVar4;
  *puStack_48 = 0;
  puStack_48[1] = 0;
  func_0x000107c2798c(&puStack_58);
  func_0x00010b221170(&puStack_48);
  return;
}



/* Entry: 10b2205c0; end: 10b2205f3;  */

void FUN_10b2205c0(void)

{
  func_0x00010b223900();
  func_0x00010b223b1c();
  func_0x00010b223830();
  return;
}



/* Entry: 10b2205f4; end: 10b22063f;  */

undefined8 * FUN_10b2205f4(undefined8 *param_1,undefined8 *param_2)

{
  int extraout_w10;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x00010b2235d0();
    } while (extraout_w10 != 0);
  }
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  FUN_10b2232f0(&uStack_30);
  return param_1;
}



/* Entry: 10b220640; end: 10b220667;  */

void FUN_10b220640(long param_1)

{
  undefined1 uStack_11;
  
  if (*(long *)(param_1 + 0xa0) != 0) {
    FUN_10b220668(*(long *)(param_1 + 0xa0),&uStack_11);
  }
  return;
}



/* Entry: 10b220668; end: 10b2206f7;  */

long FUN_10b220668(undefined8 param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  long unaff_x21;
  undefined8 *unaff_x23;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [16];
  long lStack_48;
  undefined8 uStack_40;
  undefined8 auStack_38 [3];
  
  func_0x00010b2236c8();
  __ZNSt3__17promiseIvEC1Ev(&uStack_40);
  func_0x00010b223fe4();
  auStack_38[0] = uStack_40;
  uStack_40 = 0;
  FUN_10b223314(param_1,auStack_38);
  func_0x00010b223cf8();
  __ZNSt3__117__assoc_sub_state4waitEv();
  func_0x00010b223d3c();
  func_0x00010b223c7c();
  func_0x00010b2235f0();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b223d3c();
    func_0x00010b223c7c();
    func_0x00010b2236c0();
    func_0x00010b223ec0();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
    func_0x00010b224160();
    if (extraout_x8 != 0) {
      do {
        func_0x00010b2235d0();
      } while (extraout_w10 != 0);
    }
    *(undefined8 *)(lStack_48 + 0x38) = *unaff_x23;
    func_0x00010b223fcc();
    func_0x00010b223fb4();
    func_0x00010b2240fc();
    __ZNSt3__119__shared_mutex_baseC1Ev(unaff_x21 + 0x10);
    func_0x00010b223d5c();
    if (extraout_x8_00 == 0) {
      func_0x00010b223d00();
      func_0x000107c27c20(auStack_b8);
    }
    else {
      func_0x00010b223d44();
      func_0x00010b223a6c();
      func_0x00010b223f94();
      func_0x000107c27c20(auStack_a0);
      func_0x00010b223830();
    }
    return lStack_48;
  }
  return lStack_48;
}



/* Entry: 10b2206f8; end: 10b2207f3;  */

void FUN_10b2206f8(void)

{
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  long unaff_x19;
  long unaff_x21;
  undefined8 *unaff_x23;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [16];
  
  func_0x00010b223ec0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  func_0x00010b224160();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b2235d0();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(unaff_x19 + 0x38) = *unaff_x23;
  func_0x00010b223fcc();
  func_0x00010b223fb4();
  func_0x00010b2240fc();
  __ZNSt3__119__shared_mutex_baseC1Ev(unaff_x21 + 0x10);
  func_0x00010b223d5c();
  if (extraout_x8_00 == 0) {
    func_0x00010b223d00();
    func_0x000107c27c20(auStack_68);
  }
  else {
    func_0x00010b223d44();
    func_0x00010b223a6c();
    func_0x00010b223f94();
    func_0x000107c27c20(auStack_50);
    func_0x00010b223830();
  }
  return;
}



/* Entry: 10b2207f4; end: 10b220867;  */

void FUN_10b2207f4(long param_1)

{
  long extraout_x8;
  int extraout_w10;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  func_0x00010b223448(auStack_30,param_1);
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010b224088();
    if (extraout_x8 != 0) {
      do {
        func_0x00010b2235d0();
      } while (extraout_w10 != 0);
    }
    FUN_10b220868();
    func_0x00010b223484(auStack_40);
  }
  func_0x00010b223484(auStack_30);
  return;
}



/* Entry: 10b220868; end: 10b2208bb;  */

void FUN_10b220868(long param_1,ulong param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar6;
  code *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long lVar7;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  long unaff_x21;
  ulong unaff_x24;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plStack_220;
  undefined8 uStack_218;
  long lStack_1f0;
  long alStack_1e0 [2];
  long lStack_1d0;
  long lStack_1c8;
  undefined1 auStack_1c0 [16];
  long lStack_1b0;
  undefined1 auStack_1a8 [16];
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 auStack_160 [16];
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined1 auStack_128 [8];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_88 [104];
  
  func_0x00010b2236c8();
  func_0x00010b223df8(&PTR_FUN_110cc8f88);
  func_0x00010b223ce8();
  func_0x00010b223690();
  func_0x00010b2235f0();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b223620();
  func_0x00010b2236c0();
  func_0x00010b223a94();
  func_0x00010b223448();
  if ((long)unaff_x24 < 1) {
    func_0x00010b2236d8(auStack_160);
    FUN_10b220fe4();
    func_0x00010b223cb4();
    lStack_1d0 = param_1;
    if (extraout_x8 != 0) {
      do {
        func_0x00010b2235d0();
      } while (extraout_w10 != 0);
    }
    plStack_220 = (long *)0x0;
    uStack_218 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    FUN_10b2221d0(&lStack_1b0,auStack_160,&uStack_108);
    FUN_10b2221f8(&plStack_220,&lStack_1b0);
    func_0x00010b223f44();
    func_0x00010b2239a0();
    FUN_10b22221c(alStack_1e0);
    FUN_10b222258(&uStack_120,*(undefined8 *)(alStack_1e0[0] + 0x18),
                  *(undefined8 *)(alStack_1e0[0] + 0x20));
    func_0x00010b223c10();
    lStack_150 = extraout_x8_00 + 0x60;
    lStack_148 = CONCAT71(lStack_148._1_7_,1);
    __ZNSt3__15mutex4lockEv();
    plVar11 = plStack_220;
    FUN_10b222294();
    if ((int)plVar11 == 0) {
      uVar5 = 0x20;
      __Znwm();
      func_0x00010b223ab8(&PTR_FUN_110cc8e48);
      lVar7 = *(long *)(extraout_x9 + 0xa8);
      *(undefined8 *)(extraout_x9 + 0xa8) = uVar5;
      if (lVar7 != 0) {
        func_0x00010b223680();
      }
    }
    else {
      FUN_10b2221f8(&lStack_140,&plStack_220);
    }
    func_0x00010b223de0();
    if (lStack_140 != 0) {
      lStack_150 = lStack_140;
      lStack_148 = lStack_138;
      if (lStack_138 != 0) {
        do {
          func_0x00010b2235d0();
        } while (extraout_w10_00 != 0);
      }
      FUN_10b2222d4(&lStack_1b0);
      func_0x00010b223a84();
    }
    func_0x00010b224138();
    func_0x00010b2223d4();
    FUN_10b2229b8(&lStack_1b0);
    func_0x00010b223c2c();
    func_0x00010b2238b4();
    func_0x00010b223484(&lStack_1d0);
    func_0x00010b2239e8();
    goto LAB_10b220d8c;
  }
  func_0x00010b223ea8();
  __ZNSt3__119__shared_mutex_base11lock_sharedEv();
  uVar8 = *(ulong *)(unaff_x21 + 0x160);
  if ((uVar8 != 0) && (*(long *)(unaff_x21 + 0x170) != 0)) {
    func_0x00010b223f64();
    uVar9 = uVar8 - 1;
    if ((uVar8 & uVar9) == 0) {
      uVar10 = param_2 & uVar9;
    }
    else {
      uVar10 = param_2;
      if (uVar8 <= param_2) {
        uVar10 = 0;
        if (uVar8 != 0) {
          uVar10 = param_2 / uVar8;
        }
        uVar10 = param_2 - uVar10 * uVar8;
      }
    }
    plVar11 = *(long **)(*(long *)(unaff_x21 + 0x158) + uVar10 * 8);
    uVar3 = param_2;
    if (plVar11 != (long *)0x0) {
      do {
        while( true ) {
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_10b220ab0;
          uVar6 = plVar11[1];
          if (uVar6 != param_2) break;
          func_0x00010b223fc0();
          if ((int)uVar3 != 0) {
            param_4 = plVar11[6];
            FUN_10b221018(&lStack_1d0,plVar11[5]);
            goto LAB_10b220ab0;
          }
        }
        if ((uVar8 & uVar9) == 0) {
          uVar6 = uVar6 & uVar9;
        }
        else if (uVar8 <= uVar6) {
          uVar1 = 0;
          if (uVar8 != 0) {
            uVar1 = uVar6 / uVar8;
          }
          uVar6 = uVar6 - uVar1 * uVar8;
        }
      } while (uVar6 == uVar10);
    }
  }
LAB_10b220ab0:
  plVar11 = &lStack_1b0;
  func_0x000107c283c4();
  if (lStack_1d0 == 0) {
    func_0x00010b2236d8(alStack_1e0);
    FUN_10b220fe4();
    func_0x00010b223a44();
    if (extraout_x8_02 != 0) {
      do {
        func_0x00010b2235d0();
      } while (extraout_w10_01 != 0);
    }
    func_0x00010b223cb4();
    lStack_1f0 = param_1;
    if (extraout_x8_03 != 0) {
      do {
        func_0x00010b2235d0();
      } while (extraout_w10_02 != 0);
    }
    func_0x00010b22409c();
    func_0x00010b2239c0();
    FUN_10b2221d0();
    func_0x00010b223f2c();
    func_0x00010b223f44();
    func_0x00010b223c3c();
    FUN_10b22221c(auStack_128);
    func_0x00010b2240b4();
    FUN_10b222258();
    func_0x00010b2237e8();
    func_0x00010b2239b0(extraout_x8_04 + 0x60);
    __ZNSt3__15mutex4lockEv();
    uVar5 = uStack_108;
    FUN_10b222294();
    if ((int)uVar5 == 0) {
      puVar4 = (undefined8 *)0x50;
      __Znwm();
      *puVar4 = &PTR_DAT_110cc8ee8;
      FUN_10b222b54(puVar4 + 1,&lStack_1b0);
      func_0x00010b2241a0();
      lVar7 = *(long *)(extraout_x8_07 + 0xa8);
      *(undefined8 **)(extraout_x8_07 + 0xa8) = puVar4;
      if (lVar7 != 0) {
        func_0x00010b2236a0();
      }
    }
    else {
      func_0x00010b224008();
    }
    func_0x00010b2238f8();
    if (lStack_150 != 0) {
      func_0x00010b224194();
      if (param_4 != 0) {
        do {
          func_0x00010b2235d0();
        } while (extraout_w10_04 != 0);
      }
      FUN_10b222a0c(&lStack_1b0);
      func_0x00010b2239e8();
    }
    func_0x00010b2236f4();
    func_0x00010b2223d4();
    func_0x00010b222f14(&lStack_1b0);
    func_0x00010b223bd4();
    func_0x00010b2239a0();
    func_0x00010b222f3c(&plStack_220);
LAB_10b220d60:
    func_0x00010b2223d4(alStack_1e0);
  }
  else {
    func_0x00010b223d30();
    (*extraout_x8_01)();
    uVar8 = (long)plVar11 - *(long *)(lStack_1d0 + 0x28);
    uVar2 = uVar8 == unaff_x24;
    if (unaff_x24 <= uVar8) {
      func_0x00010b2236d8(alStack_1e0);
      FUN_10b220fe4();
      func_0x00010b223954();
      if (extraout_x8_05 != 0) {
        do {
          func_0x00010b2235d0();
        } while (extraout_w10_03 != 0);
      }
      func_0x00010b22409c();
      func_0x00010b2239c0();
      FUN_10b2221d0();
      func_0x00010b223f2c();
      func_0x00010b223f44();
      func_0x00010b223c3c();
      FUN_10b22221c(auStack_128);
      func_0x00010b224054();
      FUN_10b222258();
      func_0x00010b223878();
      func_0x00010b2239b0(extraout_x8_06 + 0x60);
      __ZNSt3__15mutex4lockEv();
      uVar5 = uStack_108;
      FUN_10b222294();
      if ((int)uVar5 == 0) {
        uVar5 = 0x40;
        __Znwm();
        func_0x00010b223838(&PTR_FUN_110cc8f28);
        lVar7 = *(long *)(extraout_x9_00 + 0xa8);
        *(undefined8 *)(extraout_x9_00 + 0xa8) = uVar5;
        if (lVar7 != 0) {
          func_0x00010b223680();
        }
      }
      else {
        func_0x00010b224008();
      }
      func_0x00010b2238f8();
      if (lStack_150 != 0) {
        func_0x00010b224194();
        if (param_4 != 0) {
          do {
            func_0x00010b2235d0();
          } while (extraout_w10_06 != 0);
        }
        FUN_10b222f64(&lStack_1b0);
        func_0x00010b2239e8();
      }
      func_0x00010b2236f4();
      func_0x00010b2223d4();
      func_0x00010b223110(&lStack_1b0);
      func_0x00010b223bd4();
      func_0x00010b2239a0();
      func_0x00010b223134(&plStack_220);
      goto LAB_10b220d60;
    }
    func_0x00010b2223f8(&lStack_1b0);
    plStack_220 = (long *)0x0;
    uStack_218 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    FUN_10b2220d8(&uStack_108,auStack_1a8,&uStack_120);
    FUN_10b222100(&plStack_220,&uStack_108);
    FUN_10b222164(&uStack_108);
    func_0x00010b223c2c();
    __ZNSt3__15mutex4lockEv(plStack_220 + 9);
    plVar11 = plStack_220;
    lVar7 = lStack_1d0;
    func_0x00010b2240c8();
    if ((bool)uVar2) {
      FUN_10b221018();
    }
    else {
      *plVar11 = lVar7;
      plVar11[1] = lStack_1c8;
      if (lStack_1c8 != 0) {
        do {
          func_0x00010b2235d0();
        } while (extraout_w10_05 != 0);
      }
      *(undefined1 *)(plVar11 + 2) = 1;
    }
    func_0x00010b223db0();
    if (&stack0x00000000 == (undefined1 *)0x1b0) {
      func_0x00010b223efc();
    }
    else {
      func_0x00010b223f08(*(undefined8 *)(lStack_1b0 + 0x10));
      func_0x00010b223670();
    }
    func_0x00010b2238e8();
    FUN_10b222258(auStack_88,uStack_198,uStack_190);
    FUN_10b2224f8(&lStack_1b0);
  }
  func_0x00010b223d88();
LAB_10b220d8c:
  func_0x00010b223484(auStack_1c0);
  return;
}


