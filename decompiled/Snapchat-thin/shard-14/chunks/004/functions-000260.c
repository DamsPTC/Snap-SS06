/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b1970a4; end: 10b197407;  */

void FUN_10b1970a4(long param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 in_ZR;
  int iVar5;
  ulong *puVar7;
  ulong *puVar8;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  undefined8 extraout_x8_02;
  ulong extraout_x8_03;
  ulong uVar9;
  undefined8 extraout_x8_04;
  undefined8 extraout_x9;
  int extraout_w11;
  long unaff_x19;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_1c8 [8];
  ulong uStack_1c0;
  long lStack_1b8;
  undefined1 uStack_180;
  ulong uStack_178;
  long lStack_170;
  undefined8 uStack_168;
  char cStack_160;
  undefined8 auStack_158 [3];
  ulong uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  long *aplStack_100 [2];
  ulong uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined1 auStack_a0 [40];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [32];
  undefined8 uStack_48;
  long *plVar6;
  
  func_0x00010b198bdc();
  lVar10 = *(long *)(param_1 + 0x360);
  uStack_48 = extraout_x8;
  FUN_10b202630(&uStack_f0,unaff_x19 + 0x370);
  func_0x00010b1f70f0(aplStack_100,lVar10,&uStack_f0);
  func_0x00010b121e00(&uStack_f0);
  plVar6 = aplStack_100[0];
  func_0x00010b198edc();
  iVar5 = (int)plVar6;
  (*extraout_x8_00)();
  if (iVar5 == 0) {
    (**(code **)(*aplStack_100[0] + 0x20))(&uStack_140);
    uStack_178 = uStack_140;
    lStack_170 = lStack_138;
    uVar9 = uStack_140;
    if (lStack_138 != 0) {
      do {
        func_0x00010b198d28();
        uVar9 = extraout_x8_03;
      } while (extraout_w11 != 0);
    }
    lVar3 = lStack_138;
    if (uVar9 == 0) {
      uStack_f0 = uStack_f0 & 0xffffffffffffff00;
    }
    else {
      lStack_e8 = lStack_138;
      uStack_140 = 0;
      lStack_138 = 0;
      lVar10 = lVar3;
      uStack_f0 = uVar9;
    }
    bVar1 = uVar9 != 0;
    uStack_e0 = CONCAT71(uStack_e0._1_7_,bVar1);
    func_0x000107c27d78(&uStack_178);
    func_0x000107c27d78(&uStack_140);
    if (bVar1) {
      uStack_1c0 = uStack_f0;
      uStack_f0 = 0;
      lStack_e8 = 0;
      uStack_180 = 1;
      lStack_1b8 = lVar10;
      func_0x000107c27f18(&uStack_f0);
      goto LAB_10b19725c;
    }
    func_0x000107c27f18(&uStack_f0);
    func_0x00010b199074();
    func_0x00010564c150(&uStack_178,&UNK_10f73113d);
    func_0x00010b19948c(auStack_158[0]);
    uStack_120 = uStack_120 & 0xffffffffffffff00;
    in_ZR = cStack_160 == '\x01';
    if ((bool)in_ZR) {
      lStack_118 = lStack_170;
      uStack_120 = uStack_178;
      uStack_110 = uStack_168;
      lStack_170 = 0;
      uStack_168 = 0;
      uStack_178 = 0;
    }
    uStack_d8 = 0;
    uStack_f0 = uStack_140;
    lStack_e8 = lStack_138;
    uStack_e0 = extraout_x8_04;
    uStack_128 = uStack_d8;
    uVar9 = uStack_120;
    lVar10 = lStack_118;
    uVar11 = uStack_110;
  }
  else {
    uVar11 = *(undefined8 *)(unaff_x19 + 0xd8);
    func_0x00010b198e40(&uStack_f0,5);
    FUN_10b12983c(&lStack_c8,*(undefined4 *)(unaff_x19 + 0x100));
    func_0x00010b12aca4(auStack_a0,*(undefined4 *)(unaff_x19 + 0x138));
    func_0x00010b126fec(auStack_78,0);
    func_0x00010b120648(&uStack_140,&uStack_f0,4);
    func_0x00010b198d68(uVar11,0x29,&uStack_140);
    FUN_10b120998(&uStack_140);
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
      func_0x00010b199468();
    } while (!(bool)in_ZR);
    func_0x00010b199074();
    func_0x00010b198edc(aplStack_100[0]);
    (*extraout_x8_01)();
    func_0x000107474460(&uStack_178,&UNK_10f73112b);
    func_0x00010b19948c(auStack_158[0]);
    uVar4 = uStack_168;
    lVar3 = lStack_170;
    uVar2 = uStack_178;
    uStack_120 = uStack_120 & 0xffffffffffffff00;
    in_ZR = cStack_160 == '\x01';
    uStack_f0 = uStack_140;
    lStack_e8 = lStack_138;
    uStack_e0 = extraout_x8_02;
    uStack_128 = extraout_x9;
    uVar9 = uStack_120;
    lVar10 = lStack_118;
    uVar11 = uStack_110;
    if ((bool)in_ZR) {
      lStack_170 = 0;
      uStack_168 = 0;
      uStack_178 = 0;
      uVar9 = uVar2;
      lVar10 = lVar3;
      uVar11 = uVar4;
    }
  }
  uStack_b8 = cStack_160 != '\0';
  uStack_120 = uVar9;
  lStack_118 = lVar10;
  uStack_110 = uVar11;
  uStack_d0 = uStack_d0 & 0xffffffffffffff00;
  if ((bool)uStack_b8) {
    lStack_118 = 0;
    uStack_110 = 0;
    uStack_120 = 0;
    uStack_d0 = uVar9;
    lStack_c8 = lVar10;
    uStack_c0 = uVar11;
  }
  uStack_130 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_108 = in_ZR;
  uStack_d8 = uStack_128;
  func_0x00010880bd54(&uStack_1c0,&uStack_f0);
  func_0x0001052a03ac(&uStack_f0);
  func_0x0001052a03ac(&uStack_140);
  func_0x000107c279a4(&uStack_178);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_158);
LAB_10b19725c:
  func_0x00010b10c000(aplStack_100);
  puVar8 = &uStack_1c0;
  FUN_10b122ffc();
  puVar7 = &uStack_1c0;
  func_0x0001052a4808();
  while( true ) {
    func_0x00010b198ba0(uStack_48);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    if ((int)puVar8 == 0) break;
    puVar7 = &uStack_1c0;
    func_0x0001052a4808();
    func_0x00010b198f30();
    __ZSt17current_exceptionv(auStack_1c8);
    func_0x00010b1994b4();
    __ZNSt3__117__assoc_sub_state13set_exceptionESt13exception_ptr();
    func_0x00010b198e84();
    ___cxa_end_catch();
  }
  func_0x00010b198cc0();
  func_0x00010b199174();
  *puVar7 = (ulong)&PTR_FUN_110cc23b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b197408; end: 10b19740b;  */

void FUN_10b197408(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc23b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b19740c; end: 10b19741f;  */

void FUN_10b19740c(void)

{
  func_0x00010b197428();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b197420; end: 10b197433;  */

void FUN_10b197420(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b198e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b197434; end: 10b19749f;  */

long * FUN_10b197434(long *param_1)

{
  long lVar1;
  
  func_0x00010b197468(param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b1974a0; end: 10b197543;  */

ulong * FUN_10b1974a0(ulong *param_1)

{
  ulong uVar1;
  long extraout_x9;
  int extraout_w11;
  long *plVar2;
  undefined1 auStack_48 [32];
  undefined1 auStack_28 [8];
  
  uVar1 = *param_1;
  if (uVar1 != 0) {
    func_0x000107c28058();
    plVar2 = (long *)*param_1;
    if (((uVar1 & 1) == 0) && (0 < plVar2[1])) {
      __ZNSt3__115future_categoryEv();
      __ZNSt3__112future_errorC1ENS_10error_codeE(auStack_48,4,uVar1);
      func_0x00010538cac0(auStack_28,auStack_48);
      __ZNSt3__117__assoc_sub_state13set_exceptionESt13exception_ptr(plVar2,auStack_28);
      __ZNSt13exception_ptrD1Ev(auStack_28);
      __ZNSt3__112future_errorD1Ev(auStack_48);
      plVar2 = (long *)*param_1;
    }
    do {
      func_0x00010b198ec4();
    } while (extraout_w11 != 0);
    if (extraout_x9 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  return param_1;
}



/* Entry: 10b197544; end: 10b197563;  */

long FUN_10b197544(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b198eac();
  FUN_10b125534();
  lVar1 = unaff_x19;
  func_0x000107c350ac();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b197564; end: 10b1975cb;  */

void FUN_10b197564(long param_1)

{
  undefined1 in_ZR;
  long extraout_x9;
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  __ZNSt3__115recursive_mutex4lockEv(lVar1 + 0x18);
  func_0x00010b198cb0(*(long *)(param_1 + 0x10) + 0x7a8);
  if ((!(bool)in_ZR) &&
     (func_0x00010b198c18(*(long *)(param_1 + 0x10) + 0x7a8), !(bool)in_ZR || extraout_x9 != 3)) {
    FUN_10b19263c(*(undefined8 *)(param_1 + 0x10),param_1 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(lVar1 + 0x18);
  return;
}



/* Entry: 10b1975cc; end: 10b19760f;  */

long FUN_10b1975cc(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b198eac(param_1 + 8);
  FUN_10b125534();
  lVar1 = unaff_x19;
  func_0x000107c350ac();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b197610; end: 10b19766f;  */

void FUN_10b197610(long param_1)

{
  func_0x00010b1991f4();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b197670; end: 10b197673;  */

undefined8 * FUN_10b197670(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc2418;
  FUN_10b12ac80(param_1 + 1);
  return param_1;
}



/* Entry: 10b197674; end: 10b197687;  */

void FUN_10b197674(void)

{
  FUN_10b197b44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b197688; end: 10b197aff;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b197688(code *******param_1)

{
  undefined1 in_ZR;
  bool bVar1;
  code *******pppppppcVar2;
  undefined8 extraout_x8;
  ulong uVar3;
  ulong *extraout_x8_00;
  ulong uVar4;
  code ******ppppppcVar5;
  ulong extraout_x8_01;
  code *******pppppppcVar6;
  ulong extraout_x9;
  code ******ppppppcVar7;
  long extraout_x9_00;
  code *******pppppppcVar8;
  ulong extraout_x10;
  code ******ppppppcVar9;
  code *pcVar10;
  code ******ppppppcVar11;
  code ******ppppppcVar12;
  code ******ppppppcVar13;
  long lVar14;
  code ****ppppcVar15;
  code *****pppppcVar16;
  code *******pppppppcVar17;
  code *******pppppppcVar18;
  long lStack_f0;
  code *******pppppppcStack_c0;
  code *******pppppppcStack_b0;
  undefined1 uStack_a8;
  code *******pppppppcStack_a0;
  code *******pppppppcStack_98;
  undefined1 uStack_90;
  undefined4 uStack_8f;
  undefined3 uStack_8b;
  code ******ppppppcStack_88;
  code *apcStack_80 [4];
  undefined1 auStack_60 [40];
  undefined8 uStack_38;
  
  pppppppcVar2 = param_1;
  func_0x00010b198bf0();
  uStack_38 = extraout_x8;
  func_0x00010b1993f0();
  if (pppppppcStack_c0 == (code *******)0x0) goto LAB_10b197a68;
  pppppppcVar2 = pppppppcStack_c0 + 3;
  uStack_a8 = 1;
  pppppppcStack_b0 = pppppppcVar2;
  __ZNSt3__115recursive_mutex4lockEv();
  pppppppcVar18 = (code *******)pppppppcStack_c0[0xe3];
  if ((pppppppcVar18 != (code *******)0x0) && (pppppppcStack_c0[0xe5] != (code ******)0x0)) {
    pppppppcVar2 = param_1;
    FUN_10b197d04();
    uVar3 = (long)pppppppcVar18 - 1;
    if (((ulong)pppppppcVar18 & uVar3) == 0) {
      pppppppcVar6 = (code *******)((ulong)pppppppcVar2 & uVar3);
      in_ZR = true;
    }
    else {
      in_ZR = pppppppcVar2 == pppppppcVar18;
      pppppppcVar6 = pppppppcVar2;
      if (pppppppcVar18 <= pppppppcVar2) {
        uVar4 = 0;
        if (pppppppcVar18 != (code *******)0x0) {
          uVar4 = (ulong)pppppppcVar2 / (ulong)pppppppcVar18;
        }
        pppppppcVar6 = (code *******)((long)pppppppcVar2 - uVar4 * (long)pppppppcVar18);
      }
    }
    pppppppcVar17 = (code *******)pppppppcStack_c0[0xe2][(long)pppppppcVar6];
    if (pppppppcVar17 != (code *******)0x0) {
LAB_10b197714:
      while (pppppppcVar17 = (code *******)*pppppppcVar17, pppppppcVar17 != (code *******)0x0) {
        pppppppcVar8 = (code *******)pppppppcVar17[1];
        if (pppppppcVar8 != pppppppcVar2) goto LAB_10b197738;
        in_ZR = false;
        if ((code *******)pppppppcVar17[2] == param_1) {
          ppppppcStack_88 = pppppppcVar17[3];
          param_1 = &ppppppcStack_88;
          (*(code *)pppppppcVar17[4][2])(apcStack_80);
          ppppppcVar9 = pppppppcStack_c0[0xe3];
          ppppppcVar5 = *pppppppcVar17;
          ppppppcVar7 = pppppppcVar17[1];
          pcVar10 = (code *)((long)ppppppcVar9 + -1);
          if (((ulong)ppppppcVar9 & (ulong)pcVar10) == 0) {
            ppppppcVar7 = (code ******)((ulong)pcVar10 & (ulong)ppppppcVar7);
          }
          else if (ppppppcVar9 <= ppppppcVar7) {
            uVar3 = 0;
            if (ppppppcVar9 != (code ******)0x0) {
              uVar3 = (ulong)ppppppcVar7 / (ulong)ppppppcVar9;
            }
            ppppppcVar7 = (code ******)((long)ppppppcVar7 - uVar3 * (long)ppppppcVar9);
          }
          ppppppcVar11 = pppppppcStack_c0[0xe2];
          pppppppcVar2 = (code *******)ppppppcVar11[(long)ppppppcVar7];
          do {
            pppppppcVar18 = pppppppcVar2;
            pppppppcVar2 = (code *******)*pppppppcVar18;
          } while ((code *******)*pppppppcVar18 != pppppppcVar17);
          pppppppcStack_98 = pppppppcStack_c0 + 0xe4;
          in_ZR = true;
          if (pppppppcVar18 == pppppppcStack_98) {
LAB_10b19797c:
            if (ppppppcVar5 == (code ******)0x0) {
LAB_10b1979b0:
              ppppppcVar11[(long)ppppppcVar7] = (code *****)0x0;
              ppppppcVar5 = *pppppppcVar17;
              goto LAB_10b1979b8;
            }
            ppppppcVar12 = (code ******)ppppppcVar5[1];
            if (((ulong)ppppppcVar9 & (ulong)pcVar10) == 0) {
              ppppppcVar13 = (code ******)((ulong)ppppppcVar12 & (ulong)pcVar10);
            }
            else {
              ppppppcVar13 = ppppppcVar12;
              if (ppppppcVar9 <= ppppppcVar12) {
                uVar3 = 0;
                if (ppppppcVar9 != (code ******)0x0) {
                  uVar3 = (ulong)ppppppcVar12 / (ulong)ppppppcVar9;
                }
                ppppppcVar13 = (code ******)((long)ppppppcVar12 - uVar3 * (long)ppppppcVar9);
              }
            }
            in_ZR = ppppppcVar13 == ppppppcVar7;
            if (!(bool)in_ZR) goto LAB_10b1979b0;
LAB_10b1979c0:
            if (((ulong)ppppppcVar9 & (ulong)pcVar10) == 0) {
              ppppppcVar12 = (code ******)((ulong)ppppppcVar12 & (ulong)pcVar10);
            }
            else if (ppppppcVar9 <= ppppppcVar12) {
              uVar3 = 0;
              if (ppppppcVar9 != (code ******)0x0) {
                uVar3 = (ulong)ppppppcVar12 / (ulong)ppppppcVar9;
              }
              ppppppcVar12 = (code ******)((long)ppppppcVar12 - uVar3 * (long)ppppppcVar9);
            }
            in_ZR = ppppppcVar12 == ppppppcVar7;
            if (!(bool)in_ZR) {
              ppppppcVar11[(long)ppppppcVar12] = (code *****)pppppppcVar18;
              ppppppcVar5 = *pppppppcVar17;
            }
          }
          else {
            ppppppcVar12 = pppppppcVar18[1];
            if (((ulong)ppppppcVar9 & (ulong)pcVar10) == 0) {
              ppppppcVar12 = (code ******)((ulong)ppppppcVar12 & (ulong)pcVar10);
            }
            else if (ppppppcVar9 <= ppppppcVar12) {
              uVar3 = 0;
              if (ppppppcVar9 != (code ******)0x0) {
                uVar3 = (ulong)ppppppcVar12 / (ulong)ppppppcVar9;
              }
              ppppppcVar12 = (code ******)((long)ppppppcVar12 - uVar3 * (long)ppppppcVar9);
            }
            in_ZR = ppppppcVar12 == ppppppcVar7;
            if (!(bool)in_ZR) goto LAB_10b19797c;
LAB_10b1979b8:
            if (ppppppcVar5 != (code ******)0x0) {
              ppppppcVar12 = (code ******)ppppppcVar5[1];
              goto LAB_10b1979c0;
            }
          }
          *pppppppcVar18 = ppppppcVar5;
          *pppppppcVar17 = (code ******)0x0;
          pppppppcStack_c0[0xe5] = (code ******)((long)pppppppcStack_c0[0xe5] + -1);
          uStack_90 = 1;
          uStack_8f = 0;
          uStack_8b = 0;
          pppppppcStack_a0 = pppppppcVar17;
          FUN_10b197d54(&pppppppcStack_a0);
          func_0x00010b198c94();
          bVar1 = false;
          if ((extraout_x9_00 == 0) && ((extraout_x8_01 & 0xffffffff) == 0)) {
            in_ZR = pppppppcStack_c0[0xe5] == (code ******)0x0;
            bVar1 = (bool)in_ZR;
          }
          pppppppcVar2 = (code *******)&pppppppcStack_b0;
          func_0x00010731a274();
          if (bVar1) {
            pppppppcVar2 = (code *******)0x1;
            (*(code *)ppppppcStack_88)(1,&ppppppcStack_88);
          }
          func_0x00010b198c44(apcStack_80[0]);
          goto LAB_10b197a64;
        }
      }
    }
  }
LAB_10b197760:
  func_0x00010b198cb0(pppppppcStack_c0 + 0xf5);
  if (!(bool)in_ZR) {
    bVar1 = false;
    ppppppcVar7 = pppppppcStack_c0[0xf2];
    for (ppppppcVar5 = pppppppcStack_c0[0xf1]; in_ZR = ppppppcVar5 == ppppppcVar7, !(bool)in_ZR;
        ppppppcVar5 = ppppppcVar5 + 0x17) {
      if ((code *******)*ppppppcVar5 == param_1) {
        bVar1 = true;
        *(undefined1 *)(ppppppcVar5 + 7) = 1;
      }
    }
    if (bVar1) {
      ppppppcVar5 = pppppppcStack_c0[0xf5];
      uVar3 = (ulong)ppppppcVar5 >> 0x20;
      if ((code ******)0xffffffff < ppppppcVar5) {
        ppppppcVar5 = (code ******)0x0;
      }
      ppppppcVar7 = pppppppcStack_c0[0xf1];
LAB_10b1977cc:
      bVar1 = pppppppcStack_c0[0xf2] <= ppppppcVar7;
      in_ZR = ppppppcVar7 == pppppppcStack_c0[0xf2];
      if (!(bool)in_ZR) goto code_r0x00010b1977d4;
      *(undefined1 *)(pppppppcStack_c0 + 0xea) = 0;
      func_0x00010b1994a0();
      uVar3 = extraout_x10;
      if (bVar1) {
        uVar3 = extraout_x9;
      }
      if (extraout_x10 >> 0x20 == 0 && (uVar3 & 0xffffffff) == 2) {
        uVar4 = *extraout_x8_00;
        uVar3 = uVar4;
        if (extraout_x9 <= uVar4) {
          uVar3 = extraout_x9;
        }
        if (uVar4 >> 0x20 == 0 && (uVar3 & 0xffffffff) == 2) {
          pppppppcStack_c0[0xf5] = (code ******)0x3;
          func_0x000107c316c4();
          pppppppcStack_c0[0xf9] = (code ******)pppppppcVar2;
        }
        pppppcVar16 = pppppppcStack_c0[0xd6][2] + 0x20;
        FUN_10b12785c();
        ppppcVar15 = pppppcVar16[2];
        func_0x00010b198fd8(&ppppppcStack_88);
        (*(code *)(*ppppcVar15)[4])(ppppcVar15,&ppppppcStack_88);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppppcStack_88);
      }
      pppppcVar16 = *pppppppcStack_c0[0xd6];
      FUN_10b12983c(&ppppppcStack_88,*(undefined4 *)(pppppppcStack_c0 + 0x6b));
      func_0x00010b12aca4(auStack_60,*(undefined4 *)(pppppppcStack_c0 + 0x72));
      func_0x00010b1993d8(&pppppppcStack_a0,&ppppppcStack_88);
      func_0x00010b198d68(pppppcVar16,7,&pppppppcStack_a0);
      func_0x00010b198fe0();
      lVar14 = 0x38;
      param_1 = &ppppppcStack_88;
      do {
        pppppppcVar2 = (code *******)((long)param_1 + lVar14);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        lVar14 = lVar14 + -0x28;
      } while (lVar14 != -0x18);
      in_ZR = 1;
    }
  }
  goto LAB_10b197a64;
LAB_10b197738:
  if (((ulong)pppppppcVar18 & uVar3) == 0) {
    pppppppcVar8 = (code *******)((ulong)pppppppcVar8 & uVar3);
  }
  else if (pppppppcVar18 <= pppppppcVar8) {
    uVar4 = 0;
    if (pppppppcVar18 != (code *******)0x0) {
      uVar4 = (ulong)pppppppcVar8 / (ulong)pppppppcVar18;
    }
    pppppppcVar8 = (code *******)((long)pppppppcVar8 - uVar4 * (long)pppppppcVar18);
  }
  in_ZR = pppppppcVar8 == pppppppcVar6;
  if (!(bool)in_ZR) goto LAB_10b197760;
  goto LAB_10b197714;
code_r0x00010b1977d4:
  ppppppcVar9 = ppppppcVar7 + 7;
  ppppppcVar7 = ppppppcVar7 + 0x17;
  if (((ulong)*ppppppcVar9 & 1) == 0) goto code_r0x00010b1977e0;
  goto LAB_10b1977cc;
code_r0x00010b1977e0:
  if (uVar3 == 0 && (int)ppppppcVar5 == 2) {
    FUN_10b193a04();
    pppppppcVar2 = pppppppcStack_c0;
  }
LAB_10b197a64:
  func_0x00010b198fb8();
LAB_10b197a68:
  func_0x00010b198d54();
  func_0x00010b198ba0(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b198c44(apcStack_80[0]);
  func_0x00010b198fb8();
  func_0x00010b198d54();
  func_0x00010b198c78();
  func_0x00010b198df4();
  func_0x00010b1993f0();
  if (lStack_f0 != 0) {
    FUN_10b1934e8(lStack_f0,param_1,pppppppcVar2);
  }
  func_0x00010b198d54();
  return;
}



/* Entry: 10b197b00; end: 10b197b43;  */

void FUN_10b197b00(void)

{
  undefined8 uStack_30;
  
  func_0x00010b198df4();
  func_0x00010b1993f0();
  if (uStack_30 != 0) {
    FUN_10b1934e8();
  }
  func_0x00010b198d54();
  return;
}



/* Entry: 10b197b44; end: 10b197b6f;  */

undefined8 * FUN_10b197b44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc2418;
  FUN_10b12ac80(param_1 + 1);
  return param_1;
}



/* Entry: 10b197b70; end: 10b197cdf;  */

void FUN_10b197b70(int param_1,long param_2)

{
  undefined1 uVar1;
  long *plVar2;
  long extraout_x8;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lStack_80;
  undefined1 uStack_78;
  long lStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [32];
  long lStack_38;
  
  plVar2 = &lStack_80;
  func_0x00010b198bf0();
  plVar3 = *(long **)(param_2 + 0x10);
  uVar1 = param_1 == 1;
  if ((bool)uVar1) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == extraout_x8) {
                    /* WARNING: Could not recover jumptable at 0x00010b197bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar3[2])(*plVar3 + 0x58,1,plVar3 + 2);
      return;
    }
  }
  else {
    lVar5 = plVar3[0x1b];
    lStack_38 = extraout_x8;
    func_0x00010b1994d4();
    FUN_10b12983c(&lStack_68);
    func_0x00010b19909c(&lStack_80,&lStack_68);
    func_0x000107c28148(plVar3 + 0x18);
    FUN_10b1135dc();
    FUN_10b120998(&lStack_80);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
    lVar4 = *plVar3;
    lStack_80 = lVar5 + 0x18;
    uStack_78 = 1;
    __ZNSt3__115recursive_mutex4lockEv();
    lStack_68 = plVar3[2];
    (**(code **)(plVar3[3] + 0x10))(&uStack_60,plVar3 + 3);
    FUN_10b19319c(lVar4,&lStack_80,&lStack_68,plVar3 + 8,plVar3[0x17]);
    func_0x00010b198c5c(uStack_60);
    func_0x000107c281c0(&lStack_80);
    func_0x00010b198ba0(lStack_38);
    if ((bool)uVar1) {
      return;
    }
  }
  ___stack_chk_fail();
  func_0x00010b198c5c(uStack_60);
  func_0x000107c281c0();
  func_0x00010b198c78();
  if (*(long *)((long)plVar2 + 8) != 0) {
    FUN_10b193174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b197ce0; end: 10b197cff;  */

void FUN_10b197ce0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b193174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b197d00; end: 10b197d03;  */

void FUN_10b197d00(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b197d04; end: 10b197d3b;  */

void FUN_10b197d04(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x000107c278cc(&uStack_18,8);
  return;
}



/* Entry: 10b197d3c; end: 10b197d53;  */

void FUN_10b197d3c(long *param_1,long param_2)

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



/* Entry: 10b197d54; end: 10b197d9b;  */

long * FUN_10b197d54(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010b1990cc(*(undefined8 *)(lVar1 + 0x20));
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10b197d9c; end: 10b197d9f;  */

void FUN_10b197d9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc2478;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b197da0; end: 10b197db3;  */

void FUN_10b197da0(void)

{
  FUN_10b198134();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b197db4; end: 10b197dbf;  */

void FUN_10b197db4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b198e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b197dc0; end: 10b197dd3;  */

void FUN_10b197dc0(void)

{
  FUN_10b198108();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b197dd4; end: 10b197ddb;  */

undefined8 FUN_10b197dd4(void)

{
  return 0;
}



/* Entry: 10b197ddc; end: 10b197e8b;  */

void FUN_10b197ddc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int extraout_w10;
  undefined8 *puVar1;
  long lVar2;
  undefined8 auStack_50 [2];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = auStack_50;
  lVar2 = *(long *)(param_1 + 8);
  if (*(char *)(param_4 + 2) == '\x01') {
    uStack_38 = param_4[1];
    uStack_40 = *param_4;
    if (param_4[1] != 0) {
      do {
        func_0x00010b198bb4();
      } while (extraout_w10 != 0);
    }
    puVar1 = &uStack_40;
    FUN_10b193da8(*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10),param_3,&uStack_40);
  }
  else {
    func_0x000107c31718(auStack_50,0);
    FUN_10b193da8(*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10),param_3,auStack_50);
  }
  func_0x000107c27d78(puVar1);
  return;
}



/* Entry: 10b197e8c; end: 10b198107;  */

void FUN_10b197e8c(long param_1,undefined8 param_2,ulong *param_3)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  code *extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  long alStack_160 [2];
  ulong uStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  ulong auStack_100 [3];
  undefined1 uStack_e8;
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
  undefined1 uStack_88;
  undefined1 auStack_78 [24];
  undefined4 uStack_60;
  char cStack_58;
  char cStack_38;
  
  func_0x00010b197634(alStack_160,*(undefined8 *)(*(long *)(param_1 + 8) + 8),
                      *(undefined8 *)(*(long *)(param_1 + 8) + 0x10));
  uStack_150 = *param_3;
  uStack_148 = param_3[1];
  if (uStack_148 != 0) {
    do {
      func_0x00010b198bb4();
    } while (extraout_w10 != 0);
  }
  func_0x00010b19918c();
  if (cStack_58 == '\x01') {
    bVar1 = *(byte *)(alStack_160[0] + 0x828);
    func_0x00010b199448();
    if ((bVar1 & 1) == 0) {
      func_0x00010b19918c();
      lVar3 = alStack_160[0];
      cVar2 = *(char *)(alStack_160[0] + 0x828);
      if (cVar2 == cStack_58) {
        if (cVar2 != '\0') {
          func_0x000107c2797c(alStack_160[0] + 0x808,auStack_78);
          *(undefined4 *)(lVar3 + 0x820) = uStack_60;
        }
      }
      else if (cVar2 == '\0') {
        func_0x0001052b8fe4(alStack_160[0] + 0x808,auStack_78);
      }
      else {
        FUN_10b196a44(alStack_160[0] + 0x808);
      }
      func_0x00010b199448();
      func_0x00010b19918c();
      func_0x000107c27c54(alStack_160[0] + 0x830,auStack_78);
      func_0x000107c279a4(auStack_78);
    }
  }
  else {
    func_0x00010b199448();
  }
  func_0x00010b19918c();
  if (cStack_38 == '\x01') {
    func_0x0001052a0760(&uStack_c0,auStack_78);
  }
  else {
    func_0x000107c278b8(&uStack_d8,&UNK_10e562912);
    uVar4 = uStack_150;
    func_0x00010b198edc();
    (*extraout_x8)();
    auStack_100[0] = uVar4 & 0xffffffff;
    auStack_100[1] = 0;
    func_0x000107c2793c(&UNK_10f2e06ab);
    func_0x000107c3173c(&uStack_140);
    uStack_b0 = uStack_c8;
    uStack_90 = uStack_130;
    uStack_98 = uStack_138;
    uStack_a0 = uStack_140;
    auStack_100[1] = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_e8 = 1;
    uStack_b8 = uStack_d0;
    uStack_c0 = uStack_d8;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_a8 = 1;
    auStack_100[0] = 0;
    auStack_100[2] = 0;
    uStack_88 = 1;
    func_0x000107c279a4(auStack_100);
    func_0x00010b1992d8();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_d8);
  }
  uVar4 = uStack_150;
  func_0x00010b198edc(uStack_150);
  (*extraout_x8_00)();
  func_0x0001052a0760(&uStack_140,&uStack_c0);
  FUN_10b194544(alStack_160[0],uVar4,&uStack_140);
  func_0x0001052a03ac(&uStack_140);
  func_0x0001052a03ac(&uStack_c0);
  func_0x0001052a038c(auStack_78);
  FUN_10b194ee0(alStack_160);
  return;
}



/* Entry: 10b198108; end: 10b198133;  */

undefined8 * FUN_10b198108(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cc24c8;
  FUN_10b129c1c(param_1 + 1);
  return param_1;
}



/* Entry: 10b198134; end: 10b19813f;  */

void FUN_10b198134(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc2478;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b198140; end: 10b198163;  */

void FUN_10b198140(long param_1)

{
  func_0x00010b1991f4();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b198164; end: 10b19820f;  */

undefined1 *
FUN_10b198164(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined1 auStack_60 [16];
  long lStack_50;
  undefined8 uStack_48;
  
  puVar2 = auStack_60;
  func_0x00010b198bf0();
  uStack_48 = extraout_x8;
  FUN_10b198210(auStack_60,1);
  FUN_10b198268(lStack_50,param_3,param_4,param_5,param_6);
  lVar1 = lStack_50;
  lStack_50 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x00010b198324();
  func_0x00010b198ba0(uStack_48);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010b198cd0();
  func_0x00010b198324();
  func_0x00010b198c78();
  *(undefined8 *)(puVar2 + 8) = param_3;
  puVar3 = puVar2;
  FUN_10b198238();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 10b198210; end: 10b198237;  */

long FUN_10b198210(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b198238();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b198238; end: 10b198267;  */

undefined8 * FUN_10b198238(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0xb21642c8590b22) {
    puVar1 = (undefined8 *)(param_2 * 0x170);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cc2518;
  param_1[1] = 0;
  FUN_10b1982c8(param_1 + 3);
  return param_1;
}



/* Entry: 10b198268; end: 10b1982a7;  */

undefined8 * FUN_10b198268(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cc2518;
  param_1[1] = 0;
  FUN_10b1982c8(param_1 + 3);
  return param_1;
}



/* Entry: 10b1982a8; end: 10b1982ab;  */

void FUN_10b1982a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc2518;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1982ac; end: 10b1982bf;  */

void FUN_10b1982ac(void)

{
  FUN_10b198314();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1982c0; end: 10b1982c7;  */

void FUN_10b1982c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b198e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b1982c8; end: 10b198313;  */

undefined8 FUN_10b1982c8(undefined8 param_1)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10b21f7c0();
  func_0x000107c278a8(&uStack_38);
  return param_1;
}



/* Entry: 10b198314; end: 10b198333;  */

void FUN_10b198314(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc2518;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b198334; end: 10b198377;  */

void FUN_10b198334(long param_1)

{
  func_0x00010b1991f4();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b198378; end: 10b198443;  */

void FUN_10b198378(long param_1)

{
  undefined1 in_ZR;
  int extraout_w10;
  long *plVar1;
  long lVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(param_1 + 0x10);
  __ZNSt3__115recursive_mutex4lockEv(lVar2 + 0x18);
  func_0x00010b198cb0(*(long *)(param_1 + 0x10) + 0x7a8);
  if ((!(bool)in_ZR) &&
     (*(long *)(*(long *)(param_1 + 0x10) + 0x7e0) != *(long *)(*(long *)(param_1 + 0x10) + 0x7e8)))
  {
    plVar1 = *(long **)(param_1 + 0x20);
    FUN_10b193900(auStack_48);
    uStack_58 = *(undefined8 *)(param_1 + 0x18);
    uStack_60 = *(undefined8 *)(param_1 + 0x10);
    if (*(long *)(param_1 + 0x18) != 0) {
      do {
        func_0x00010b198bb4();
      } while (extraout_w10 != 0);
    }
    (**(code **)(*plVar1 + 0x30))(plVar1,auStack_48,&uStack_60);
    func_0x0001052b81f4(&uStack_60);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  }
  __ZNSt3__115recursive_mutex6unlockEv(lVar2 + 0x18);
  return;
}



/* Entry: 10b198444; end: 10b198473;  */

long FUN_10b198444(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b198eac(param_1 + 8);
  func_0x0001052a9ef8();
  lVar1 = unaff_x19;
  func_0x000107c350ac();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b198474; end: 10b1984af;  */

void FUN_10b198474(long param_1)

{
  undefined8 *puVar1;
  code *extraout_x8;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)(*(undefined8 **)(param_1 + 0x10))[1];
  for (puVar2 = (undefined8 *)**(undefined8 **)(param_1 + 0x10); puVar2 != puVar1;
      puVar2 = puVar2 + 2) {
    func_0x00010b1991c4(*puVar2);
    (*extraout_x8)();
  }
  return;
}



/* Entry: 10b1984b0; end: 10b1984cf;  */

void FUN_10b1984b0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b195810();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1984d0; end: 10b1984d3;  */

void FUN_10b1984d0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b1984d4; end: 10b19853b;  */

void FUN_10b1984d4(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 8);
  *param_1 = &PTR_FUN_110cc2570;
  lVar1 = 0x60;
  __Znwm();
  FUN_10b196ec8();
  func_0x0001052a06f8(lVar1 + 0x18,lVar2 + 0x18);
  param_1[1] = lVar1;
  return;
}



/* Entry: 10b19853c; end: 10b198577;  */

void FUN_10b19853c(long param_1)

{
  undefined8 *puVar1;
  code *extraout_x8;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)(*(undefined8 **)(param_1 + 0x10))[1];
  for (puVar2 = (undefined8 *)**(undefined8 **)(param_1 + 0x10); puVar2 != puVar1;
      puVar2 = puVar2 + 2) {
    func_0x00010b198edc(*puVar2);
    (*extraout_x8)();
  }
  return;
}



/* Entry: 10b198578; end: 10b198597;  */

void FUN_10b198578(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010b196524();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b198598; end: 10b19859b;  */

void FUN_10b198598(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b19859c; end: 10b1985fb;  */

void FUN_10b19859c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = *(long *)(param_2 + 8);
  *param_1 = &PTR_FUN_110cc2590;
  puVar1 = param_1;
  func_0x00010b1993e8();
  FUN_10b196ec8();
  uVar4 = *(undefined8 *)(lVar2 + 0x20);
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  puVar1[5] = *(undefined8 *)(lVar2 + 0x28);
  puVar1[4] = uVar4;
  puVar1[3] = uVar3;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10b1985fc; end: 10b198633;  */

void FUN_10b1985fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b198600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))();
  return;
}



/* Entry: 10b198634; end: 10b198693;  */

void FUN_10b198634(long param_1)

{
  undefined1 auStack_88 [64];
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  uStack_38 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  uStack_30 = 1;
  auStack_88[0] = 0;
  uStack_48 = 0;
  FUN_10b1955c0(*(undefined8 *)(param_1 + 0x10),&uStack_40,auStack_88);
  func_0x0001052a038c(auStack_88);
  return;
}



/* Entry: 10b198694; end: 10b1986bf;  */

void FUN_10b198694(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000107c350ac();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b1986c0; end: 10b19873f;  */

void FUN_10b1986c0(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  undefined1 auStack_68 [72];
  
  lVar1 = **(long **)(param_1 + 0x10);
  func_0x00010b198cb0(lVar1 + 0x7a8,param_1,*(long **)(param_1 + 0x10) + 2);
  if ((bool)in_ZR) {
    func_0x0001056429c0(auStack_68);
    FUN_10b195198(lVar1,auStack_68);
  }
  else {
    func_0x0001056429c0(auStack_68);
    func_0x00010b1990dc();
  }
  func_0x0001052a038c(auStack_68);
  return;
}



/* Entry: 10b198740; end: 10b19875f;  */

void FUN_10b198740(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b195a70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b198760; end: 10b198763;  */

void FUN_10b198760(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b198764; end: 10b19894f;  */

void FUN_10b198764(long param_1,int param_2)

{
  undefined1 in_ZR;
  long lVar1;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  long *plVar2;
  int extraout_w10;
  int extraout_w11;
  long unaff_x19;
  long lStack_e8;
  long lStack_e0;
  long *aplStack_d8 [2];
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_48;
  
  func_0x00010b198bdc();
  uStack_48 = extraout_x8;
  FUN_10b12d0d0(param_1 + 0x70);
  func_0x00010b199414();
  func_0x00010b11fa90(&lStack_e8,unaff_x19 + 0x50);
  if (lStack_e8 != 0) {
    FUN_10b1fe814(aplStack_d8);
    lStack_c8 = lStack_e8;
    lStack_c0 = lStack_e0;
    if (lStack_e0 != 0) {
      do {
        func_0x00010b198bb4();
      } while (extraout_w10 != 0);
    }
    lVar1 = unaff_x19 + 0x60;
    FUN_10b12785c();
    plVar2 = &lStack_c8;
    uStack_b8 = *(undefined8 *)(lVar1 + 0x10);
    lStack_b0 = *(long *)(lVar1 + 0x18);
    if (lStack_b0 != 0) {
      do {
        func_0x00010b198d28();
        plVar2 = extraout_x8_00;
        lStack_e0 = lStack_c0;
      } while (extraout_w11 != 0);
    }
    pcStack_a8 = FUN_10b198378;
    ppuStack_a0 = &PTR_FUN_110cc2558;
    lStack_98 = lStack_e8;
    lStack_c8 = 0;
    lStack_c0 = 0;
    lStack_90 = lStack_e0;
    uStack_88 = uStack_b8;
    lStack_80 = lStack_b0;
    plVar2[2] = 0;
    plVar2[3] = 0;
    func_0x00010b1993a4(*(undefined8 *)(*aplStack_d8[0] + 0x10));
    func_0x00010b199084();
    func_0x00010b198358(&lStack_c8);
    func_0x000106e50c54(aplStack_d8);
  }
  func_0x00010b1992c8();
  func_0x00010b199150();
  func_0x00010b198f10();
  while( true ) {
    func_0x00010b199144();
    *(undefined1 *)(unaff_x19 + 0x80) = extraout_w8;
    func_0x00010b1994e8();
    if ((bool)in_ZR) {
      lStack_c8 = CONCAT71(lStack_c8._1_7_,extraout_w8_00);
      pcStack_a8 = (code *)&lStack_c8;
      func_0x00010b199368();
    }
    else {
      func_0x00010b199124(&lStack_c8);
      pcStack_a8 = (code *)&lStack_c8;
      func_0x00010b19935c();
      __ZNSt13exception_ptrD1Ev(&lStack_c8);
    }
    func_0x00010b198de4();
    FUN_10b12ac80(unaff_x19 + 0x50);
    func_0x00010b198dec();
    func_0x00010b198ba0(uStack_48);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    if (param_2 == 0) {
      do {
        func_0x00010b198cc0();
        func_0x00010b199174();
      } while (param_2 == 0);
      func_0x00010b199414();
    }
    else {
      func_0x00010b199084();
      func_0x00010b198358(&lStack_c8);
      func_0x000106e50c54(aplStack_d8);
      func_0x00010b1992c8();
    }
    func_0x00010b198f10();
    func_0x00010b198f30();
    func_0x00010b1990d4();
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 10b198950; end: 10b198987;  */

void FUN_10b198950(long param_1)

{
  if ((*(byte *)(param_1 + 0x80) & 1) == 0) {
    func_0x00010b199414();
    func_0x00010b198f10();
  }
  func_0x00010b198de4();
  FUN_10b12ac80(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b198988; end: 10b198b67;  */

void FUN_10b198988(long param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined8 extraout_x8;
  int extraout_w10;
  long unaff_x19;
  long lStack_e0;
  long lStack_d8;
  long *aplStack_d0 [2];
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_38;
  
  func_0x00010b198bdc();
  uStack_38 = extraout_x8;
  FUN_10b12d0d0(param_1 + 0x88);
  func_0x00010b1993d0();
  func_0x00010b11fa90(&lStack_e0,unaff_x19 + 0x50);
  if (lStack_e0 != 0) {
    FUN_10b1fe814(aplStack_d0);
    lStack_b8 = lStack_d8;
    lStack_c0 = lStack_e0;
    if (lStack_d8 != 0) {
      do {
        func_0x00010b198bb4();
      } while (extraout_w10 != 0);
    }
    param_2 = unaff_x19 + 0x60;
    FUN_10b196588(&uStack_b0);
    lStack_80 = lStack_b8;
    lStack_88 = lStack_c0;
    pcStack_98 = FUN_10b197564;
    ppuStack_90 = &PTR_FUN_110cc23f0;
    lStack_c0 = 0;
    lStack_b8 = 0;
    uStack_70 = uStack_a8;
    uStack_78 = uStack_b0;
    uStack_68 = uStack_a0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b0 = 0;
    func_0x00010b1993a4(*(undefined8 *)(*aplStack_d0[0] + 0x10));
    func_0x00010b198c50(ppuStack_90);
    FUN_10b197544(&lStack_c0);
    func_0x000106e50c54(aplStack_d0);
  }
  func_0x00010b198d54();
  func_0x00010b199150();
  func_0x00010b198f28();
  while( true ) {
    func_0x00010b199144();
    *(undefined1 *)(unaff_x19 + 0x98) = extraout_w8;
    func_0x00010b1994e8();
    if ((bool)in_ZR) {
      lStack_c0 = CONCAT71(lStack_c0._1_7_,extraout_w8_00);
      pcStack_98 = (code *)&lStack_c0;
      func_0x00010b199368();
    }
    else {
      func_0x00010b199124(&lStack_c0);
      pcStack_98 = (code *)&lStack_c0;
      func_0x00010b19935c();
      __ZNSt13exception_ptrD1Ev(&lStack_c0);
    }
    func_0x00010b198de4();
    FUN_10b192a1c(unaff_x19 + 0x50);
    func_0x00010b198dec();
    func_0x00010b198ba0(uStack_38);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    if ((int)param_2 == 0) {
      do {
        func_0x00010b198cc0();
        func_0x00010b199174();
      } while ((int)param_2 == 0);
      func_0x00010b1993d0();
    }
    else {
      func_0x00010b198c50(ppuStack_90);
      FUN_10b197544(&lStack_c0);
      func_0x000106e50c54(aplStack_d0);
      func_0x00010b198d54();
    }
    func_0x00010b198f28();
    func_0x00010b198f30();
    func_0x00010b1990d4();
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 10b198b68; end: 10b198b9f;  */

void FUN_10b198b68(long param_1)

{
  if ((*(byte *)(param_1 + 0x98) & 1) == 0) {
    func_0x00010b1993d0();
    func_0x00010b198f28();
  }
  func_0x00010b198de4();
  FUN_10b192a1c(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b198ba0; end: 10b199573;  */

void FUN_10b198ba0(void)

{
  return;
}



/* Entry: 10b199574; end: 10b199863;  */

void FUN_10b199574(undefined1 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  char cStack_3b0;
  long lStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined1 auStack_390 [632];
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  char cStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  char cStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  if ((*(byte *)(param_2 + 0x58) & 1) == 0) {
    func_0x00010b1998a4();
    func_0x000107c278b8(&lStack_88);
    func_0x000107c278b8(&uStack_a8,&UNK_10f731159);
    uStack_60 = uStack_78;
    uStack_90 = 1;
    uStack_68 = uStack_80;
    lStack_70 = lStack_88;
    lStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_58 = 1;
    uStack_48 = uStack_a0;
    uStack_50 = uStack_a8;
    uStack_40 = uStack_98;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_38 = 1;
    func_0x00010b199880();
    func_0x00010b19988c();
    func_0x000107c279a4(&uStack_a8);
    plVar3 = &lStack_88;
  }
  else {
    uVar1 = *(ulong *)(param_2 + 8);
    if (-1 < (char)*(byte *)(param_2 + 0x17)) {
      uVar1 = (ulong)*(byte *)(param_2 + 0x17);
    }
    if (uVar1 == 0) {
      func_0x00010b1998a4();
      func_0x000107c278b8(&lStack_c0);
      FUN_10b199864(&uStack_e0,&UNK_10f731182);
      uVar2 = uStack_b0;
      uStack_68 = uStack_b8;
      lStack_70 = lStack_c0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      lStack_c0 = 0;
      func_0x00010b199894(uVar2);
      if (cStack_c8 == '\x01') {
        uStack_48 = uStack_d8;
        uStack_50 = uStack_e0;
        uStack_40 = uStack_d0;
        uStack_d8 = 0;
        uStack_d0 = 0;
        uStack_e0 = 0;
        uStack_38 = 1;
      }
      func_0x00010b199880();
      func_0x00010b19988c();
      func_0x000107c279a4(&uStack_e0);
      plVar3 = &lStack_c0;
    }
    else {
      if (*(char *)(param_2 + 0x88) == '\x01') {
        if (*(int *)(param_2 + 100) == 3) {
          func_0x00010b1998a4();
          func_0x000107c278b8(&lStack_f8);
          FUN_10b199864(&uStack_118,&UNK_10f731182);
          uVar2 = uStack_e8;
          uStack_68 = uStack_f0;
          lStack_70 = lStack_f8;
          uStack_f0 = 0;
          uStack_e8 = 0;
          lStack_f8 = 0;
          func_0x00010b199894(uVar2);
          if (cStack_100 == '\x01') {
            uStack_48 = uStack_110;
            uStack_50 = uStack_118;
            uStack_40 = uStack_108;
            uStack_108 = 0;
            uStack_118 = 0;
            uStack_110 = 0;
            uStack_38 = 1;
          }
          func_0x00010b199880();
          func_0x00010b19988c();
          func_0x000107c279a4(&uStack_118);
          plVar3 = &lStack_f8;
          goto LAB_10b199804;
        }
        FUN_10b12394c(auStack_390);
        FUN_10b190108(&lStack_70,param_5,auStack_390,0);
        func_0x00010b12b970(&lStack_70);
        func_0x00010b121af0(auStack_390);
        if (lStack_70 != 0) {
          *param_1 = 0;
          param_1[0x40] = 0;
          return;
        }
      }
      func_0x00010b1998a4();
      func_0x000107c278b8(&lStack_3a8);
      FUN_10b199864(&uStack_3c8,&UNK_10f731182);
      uVar2 = uStack_398;
      uStack_68 = uStack_3a0;
      lStack_70 = lStack_3a8;
      uStack_3a0 = 0;
      uStack_398 = 0;
      lStack_3a8 = 0;
      func_0x00010b199894(uVar2);
      if (cStack_3b0 == '\x01') {
        uStack_48 = uStack_3c0;
        uStack_50 = uStack_3c8;
        uStack_40 = uStack_3b8;
        uStack_3c0 = 0;
        uStack_3b8 = 0;
        uStack_3c8 = 0;
        uStack_38 = 1;
      }
      func_0x00010b199880();
      func_0x00010b19988c();
      func_0x000107c279a4(&uStack_3c8);
      plVar3 = &lStack_3a8;
    }
  }
LAB_10b199804:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(plVar3);
  return;
}



/* Entry: 10b199864; end: 10b19987f;  */

void FUN_10b199864(long param_1)

{
  func_0x000107c278b8();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 10b199880; end: 10b1998af;  */

void FUN_10b199880(void)

{
  long unaff_x19;
  
  func_0x0001052a0844();
  *(undefined1 *)(unaff_x19 + 0x40) = 1;
  return;
}



/* Entry: 10b1998b0; end: 10b199913;  */

undefined8 * FUN_10b1998b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc2630;
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_10b199914(param_1 + 0xb,param_1 + 0x12);
  }
  FUN_10b1231c8(param_1 + 0x13);
  FUN_10b19a394(param_1 + 0xb);
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  FUN_10b12b9d0(param_1 + 1);
  return param_1;
}



/* Entry: 10b199914; end: 10b1999b3;  */

void FUN_10b199914(undefined8 param_1,long *param_2)

{
  long *plStack_30;
  undefined8 uStack_28;
  
  plStack_30 = (long *)0x0;
  uStack_28 = 0;
  func_0x00010b19acb8();
  func_0x00010b19ad14(&plStack_30);
  func_0x00010b19ac2c();
  func_0x00010b19ac24();
  __ZNSt3__15mutex4lockEv(plStack_30 + 8);
  *plStack_30 = *param_2;
  *(undefined1 *)(plStack_30 + 1) = 1;
  func_0x00010b19ac5c();
  if (param_2 == (long *)0x0) {
    func_0x00010b19ad08();
  }
  else {
    func_0x00010b19ad70(*(undefined8 *)(*param_2 + 0x10));
    func_0x00010b19abf4();
  }
  func_0x00010b19ac48();
  return;
}



/* Entry: 10b1999b4; end: 10b1999b7;  */

undefined8 * FUN_10b1999b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc2630;
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_10b199914(param_1 + 0xb,param_1 + 0x12);
  }
  FUN_10b1231c8(param_1 + 0x13);
  FUN_10b19a394(param_1 + 0xb);
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  FUN_10b12b9d0(param_1 + 1);
  return param_1;
}



/* Entry: 10b1999b8; end: 10b1999cb;  */

void FUN_10b1999b8(void)

{
  FUN_10b1998b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1999cc; end: 10b199a57;  */

void FUN_10b1999cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((*(char *)(param_1 + 0x80) == '\x01') &&
     (((*(byte *)(param_1 + 0xc0) & 1) != 0 ||
      (*(ulong *)(param_1 + 0x88) <= *(ulong *)(param_1 + 0x90))))) {
    FUN_10b19a3b4(auStack_48);
    uVar4 = *(undefined8 *)(param_1 + 0x68);
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x68) = uStack_38;
    *(undefined8 *)(param_1 + 0x60) = uStack_40;
    *(undefined8 *)(param_1 + 0x78) = uStack_28;
    *(undefined8 *)(param_1 + 0x70) = uStack_30;
    uStack_40 = uVar3;
    uStack_38 = uVar4;
    uStack_30 = uVar1;
    uStack_28 = uVar2;
    FUN_10b199a58(param_1 + 0x58);
    func_0x000107c280c4(param_2);
    FUN_10b199914(auStack_48,param_1 + 0x90);
    FUN_10b19a4e4(auStack_48);
  }
  return;
}



/* Entry: 10b199a58; end: 10b199a7b;  */

void FUN_10b199a58(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_10b19a4e4();
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}



/* Entry: 10b199a7c; end: 10b199a7f;  */

void FUN_10b199a7c(long param_1)

{
  long unaff_x19;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined1 auStack_28 [8];
  
  func_0x00010b19ad7c();
  if (*(long *)(param_1 + 8) != 0) {
    ppuStack_38 = &PTR_DAT_1107e6938;
    ppuStack_30 = &PTR_DAT_1107e6938;
    func_0x000104bdfe3c(auStack_28,&ppuStack_30);
    FUN_10b19a580();
    __ZNSt13exception_ptrD1Ev(auStack_28);
    __ZNSt9exceptionD2Ev(&ppuStack_30);
    __ZNSt9exceptionD2Ev(&ppuStack_38);
  }
  func_0x00010b122d08(unaff_x19 + 0x18);
  func_0x00010b122d08((long *)(param_1 + 8));
  return;
}



/* Entry: 10b199a80; end: 10b199adf;  */

void FUN_10b199a80(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  if (0 < lVar2 - lVar1) {
    __ZNSt3__15mutex4lockEv();
    *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + (lVar2 - lVar1);
    func_0x00010b19ad24();
    func_0x00010b19ac70();
  }
  return;
}



/* Entry: 10b199ae0; end: 10b199bb3;  */

void FUN_10b199ae0(long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  lStack_40 = param_1 + 0x18;
  uStack_38 = 1;
  __ZNSt3__15mutex4lockEv();
  *(undefined1 *)(param_1 + 0xc0) = 1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_58,param_3);
  *(undefined4 *)(param_1 + 0x98) = param_2;
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    func_0x000107c27b9c(param_1 + 0xa0,&uStack_58);
  }
  else {
    *(undefined8 *)(param_1 + 0xa8) = uStack_50;
    *(undefined8 *)(param_1 + 0xa0) = uStack_58;
    *(undefined8 *)(param_1 + 0xb0) = uStack_48;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_58 = 0;
    *(undefined1 *)(param_1 + 0xb8) = 1;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_58);
  FUN_10b1999cc(param_1,&lStack_40);
  func_0x000107c2798c(&lStack_40);
  return;
}



/* Entry: 10b199bb4; end: 10b19a2e3;  */

void FUN_10b199bb4(undefined **param_1,long param_2,ulong param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined1 in_ZR;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  long *plVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  bool bVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined8 *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  
  ppuVar4 = (undefined **)0xd8;
  __Znwm();
  *ppuVar4 = FUN_10b19a918;
  ppuVar4[1] = FUN_10b19ab88;
  FUN_10b19a3b4(ppuVar4 + 2);
  ppuVar5 = ppuVar4 + 7;
  *(undefined1 *)ppuVar5 = 0;
  *(undefined1 *)(ppuVar4 + 9) = 0;
  FUN_10b19a2e4(param_1,ppuVar4[5],ppuVar4[6]);
  if (param_3 == 0) {
    func_0x00010b19ad30();
    ppuVar10 = (undefined **)0x0;
  }
  else {
    puStack_80 = (undefined *)0x0;
    ppuStack_98 = (undefined **)0x0;
    ppuStack_a0 = (undefined **)0x0;
    puStack_88 = (undefined *)0x0;
    puStack_90 = (undefined8 *)0x0;
    FUN_10b19a3b4(&ppuStack_a0);
    param_1 = ppuVar4 + 0x16;
    ppuVar4[0xc] = (undefined *)puStack_90;
    ppuVar4[0xb] = (undefined *)ppuStack_98;
    ppuStack_98 = (undefined **)0x0;
    puStack_90 = (undefined8 *)0x0;
    ppuVar4[0xe] = puStack_80;
    ppuVar4[0xd] = puStack_88;
    puStack_88 = (undefined *)0x0;
    puStack_80 = (undefined *)0x0;
    ppuVar4[10] = (undefined *)&PTR_FUN_110cc26b0;
    *(undefined1 *)(ppuVar4 + 0xf) = 1;
    FUN_10b19a4e4(&ppuStack_a0);
    FUN_10b19a2e4(param_1,ppuVar4[0xd],ppuVar4[0xe]);
    __ZNSt3__15mutex4lockEv(param_2 + 0x18);
    if (((*(byte *)(param_2 + 0xc0) & 1) == 0) && (*(ulong *)(param_2 + 0x90) < param_3)) {
      *(ulong *)(param_2 + 0x88) = param_3;
      cVar1 = *(char *)(param_2 + 0x80);
      if (cVar1 == *(char *)(ppuVar4 + 0xf)) {
        if (cVar1 != '\0') {
          ppuStack_a0 = &PTR_FUN_110cc26b0;
          puVar13 = ppuVar4[0xc];
          puVar9 = ppuVar4[0xb];
          puVar15 = ppuVar4[0xe];
          puVar14 = ppuVar4[0xd];
          puStack_90 = (undefined8 *)0x0;
          ppuStack_98 = (undefined **)0x0;
          puVar16 = *(undefined **)(param_2 + 0x60);
          puVar18 = *(undefined **)(param_2 + 0x78);
          puVar17 = *(undefined **)(param_2 + 0x70);
          ppuVar4[0xc] = *(undefined **)(param_2 + 0x68);
          ppuVar4[0xb] = puVar16;
          puStack_80 = (undefined *)0x0;
          puStack_88 = (undefined *)0x0;
          *(undefined **)(param_2 + 0x68) = puVar13;
          *(undefined **)(param_2 + 0x60) = puVar9;
          *(undefined **)(param_2 + 0x78) = puVar15;
          *(undefined **)(param_2 + 0x70) = puVar14;
          ppuVar4[0xe] = puVar18;
          ppuVar4[0xd] = puVar17;
          FUN_10b19a4e4(&ppuStack_a0);
        }
      }
      else {
        if (cVar1 == '\0') {
          FUN_10b19a644(param_2 + 0x58,ppuVar4 + 10);
          ppuVar10 = ppuVar4 + 10;
        }
        else {
          FUN_10b19a644(ppuVar4 + 10,param_2 + 0x58);
          ppuVar10 = (undefined **)(param_2 + 0x58);
        }
        FUN_10b199a58(ppuVar10);
      }
      ppuVar10 = (undefined **)0x0;
      bVar11 = true;
    }
    else {
      func_0x00010b19ad30();
      bVar11 = false;
      ppuVar10 = (undefined **)0x3;
    }
    __ZNSt3__15mutex6unlockEv(param_2 + 0x18);
    if (bVar11) {
      if (*(char *)(ppuVar4 + 0xf) == '\x01') {
        FUN_10b199914(ppuVar4 + 10,param_2 + 0x90);
      }
      puVar9 = *(undefined **)(param_2 + 0x10);
      ppuVar4[0x18] = *(undefined **)(param_2 + 8);
      if (puVar9 == (undefined *)0x0) {
        ppuVar4[0x19] = (undefined *)0x0;
LAB_10b19a128:
        func_0x00010527822c();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10b19a130);
        (*pcVar3)();
      }
      __ZNSt3__119__shared_weak_count4lockEv();
      ppuVar4[0x19] = puVar9;
      if (puVar9 == (undefined *)0x0) goto LAB_10b19a128;
      FUN_10b19a70c(ppuVar4 + 0x14,param_1);
      puVar9 = ppuVar4[0x14];
      ppuStack_a0 = (undefined **)(puVar9 + 0x40);
      ppuStack_98 = (undefined **)CONCAT71(ppuStack_98._1_7_,1);
      __ZNSt3__15mutex4lockEv();
      func_0x00010b12268c();
      func_0x00010b19ac70();
      func_0x00010b122d08(ppuVar4 + 0x14);
      if (((ulong)puVar9 & 1) != 0) {
        ppuStack_a0 = (undefined **)0x0;
        ppuStack_98 = (undefined **)0x0;
        ppuVar4[0x10] = (undefined *)0x0;
        ppuVar4[0x11] = (undefined *)0x0;
        FUN_10b1225b0(&ppuStack_70,param_1,ppuVar4 + 0x10);
        func_0x00010b1225dc(&ppuStack_a0,&ppuStack_70);
        func_0x00010b19ac88();
        func_0x00010b122d08(ppuVar4 + 0x10);
        ppuVar4[0x12] = (undefined *)ppuStack_a0;
        ppuVar4[0x13] = (undefined *)ppuStack_98;
        if (ppuStack_98 == (undefined **)0x0) {
          ppuStack_68 = (undefined **)0x0;
        }
        else {
          ppuVar10 = ppuStack_98 + 1;
          do {
            cVar1 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
            if (bVar11) {
              *ppuVar10 = *ppuVar10 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          ppuStack_68 = ppuStack_98;
          do {
            cVar1 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
            if (bVar11) {
              *ppuVar10 = *ppuVar10 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        ppuStack_70 = ppuStack_a0;
        FUN_10b122ec4(&ppuStack_70);
        func_0x00010b19ac88();
        func_0x00010b122d08(ppuVar4 + 0x12);
        func_0x00010b19ac24();
        FUN_10b19a6e8(ppuVar5);
        func_0x00010b19ad90();
        func_0x00010b19ad68();
        ppuVar10 = (undefined **)0x3;
        goto LAB_10b199f0c;
      }
      *(undefined1 *)(ppuVar4 + 0x1a) = 0;
      ppuVar5 = param_1;
      __ZNSt3__112__get_sp_mutEPKv(param_1);
      __ZNSt3__18__sp_mut4lockEv();
      puVar9 = ppuVar4[0x16];
      puVar13 = ppuVar4[0x17];
      ppuVar4[0x16] = (undefined *)0x0;
      ppuVar4[0x17] = (undefined *)0x0;
      __ZNSt3__18__sp_mut6unlockEv(ppuVar5);
      puVar6 = (undefined8 *)0x28;
      __Znwm();
      puVar6[4] = 0;
      puVar6[1] = 0;
      *puVar6 = 0;
      puVar6[3] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_DAT_1107e89a0;
      func_0x000107c27b54(puVar6 + 1,&ppuStack_70);
      puVar6[4] = puVar6[2];
      puVar6[3] = puVar6[1];
      if (puVar6[2] == 0) {
        *puVar6 = &PTR_DAT_1107e8958;
LAB_10b19a004:
        bVar11 = true;
      }
      else {
        plVar8 = (long *)(puVar6[2] + 8);
        do {
          cVar1 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar11) {
            *plVar8 = *plVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        *puVar6 = &PTR_DAT_1107e8958;
        if (puVar6[4] == 0) goto LAB_10b19a004;
        do {
          func_0x00010b19abe4();
        } while (extraout_w10 != 0);
        do {
          func_0x00010b19abe4();
        } while (extraout_w10_00 != 0);
        do {
          func_0x00010b19abd4();
        } while (extraout_w11 != 0);
        if (extraout_x9 == 0) {
          func_0x00010b19ac14();
          func_0x00010b19ad44();
        }
        bVar11 = false;
      }
      ppuStack_a0 = ppuVar4;
      ppuStack_98 = param_1;
      puStack_90 = puVar6;
      __ZNSt3__15mutex4lockEv(puVar9 + 0x40);
      if ((puVar9[8] & 1) == 0) {
        ppuStack_70 = (undefined **)0x0;
        lVar12 = *(long *)(puVar9 + 0x80);
        __ZNSt13exception_ptrD1Ev(&ppuStack_70);
        if (lVar12 == 0) {
          puVar7 = (undefined8 *)0x20;
          __Znwm();
          *puVar7 = &PTR_FUN_110cc2768;
          puVar7[2] = ppuStack_98;
          puVar7[1] = ppuStack_a0;
          puVar7[3] = puVar6;
          plVar8 = *(long **)(puVar9 + 0x88);
          *(undefined8 **)(puVar9 + 0x88) = puVar7;
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 8))(plVar8);
          }
          __ZNSt3__15mutex6unlockEv(puVar9 + 0x40);
          if (puVar13 != (undefined *)0x0) {
            do {
              func_0x00010b19abd4();
            } while (extraout_w11_02 != 0);
            if (extraout_x9_02 == 0) {
              func_0x00010b19abc4();
              func_0x00010b19ac34();
            }
          }
          goto LAB_10b19a0a0;
        }
      }
      __ZNSt3__15mutex6unlockEv(puVar9 + 0x40);
      if (puVar13 != (undefined *)0x0) {
        do {
          func_0x00010b19abe4();
        } while (extraout_w10_01 != 0);
      }
      FUN_10b19a764(&ppuStack_a0,puVar9,puVar13);
      if (puVar13 != (undefined *)0x0) {
        plVar8 = (long *)(puVar13 + 8);
        do {
          lVar12 = *plVar8;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar2) {
            *plVar8 = lVar12 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar12 == 0) {
          func_0x00010b19abc4();
          func_0x00010b19ac34();
        }
        do {
          lVar12 = *plVar8;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar2) {
            *plVar8 = lVar12 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar12 == 0) {
          func_0x00010b19abc4();
          func_0x00010b19ac34();
        }
      }
      func_0x00010b19ac90();
LAB_10b19a0a0:
      if (bVar11) {
        return;
      }
      do {
        func_0x00010b19abd4();
      } while (extraout_w11_01 != 0);
      if (extraout_x9_01 != 0) {
        return;
      }
      func_0x00010b19ac14();
      func_0x00010b19ad44();
      return;
    }
LAB_10b199f0c:
    func_0x00010b122d08(param_1);
    func_0x00010b19ad1c();
    in_ZR = 1;
    if ((int)ppuVar10 != 3) goto LAB_10b199fd0;
  }
  func_0x00010b19acf0();
  if ((bool)in_ZR) {
    __ZNSt3__112__get_sp_mutEPKv(ppuVar4 + 3);
    __ZNSt3__18__sp_mut4lockEv();
    func_0x00010b19acd8();
    ppuStack_a0 = ppuVar10;
    ppuStack_98 = param_1;
    __ZNSt3__15mutex4lockEv(ppuVar10 + 8);
    *ppuVar10 = *ppuVar5;
    *(undefined1 *)(ppuVar10 + 1) = 1;
    plVar8 = (long *)ppuVar10[0x11];
    func_0x00010b19ad5c();
    if (plVar8 == (long *)0x0) {
      __ZNSt3__118condition_variable10notify_allEv(ppuVar10 + 2);
    }
    else {
      (**(code **)(*plVar8 + 0x10))(plVar8,&ppuStack_a0);
      func_0x00010b19acc8();
      param_1 = ppuStack_98;
    }
    if (param_1 != (undefined **)0x0) {
      do {
        func_0x00010b19abd4();
      } while (extraout_w11_00 != 0);
      if (extraout_x9_00 == 0) {
        func_0x00010b19ac04();
        func_0x00010b19aca0();
      }
    }
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&ppuStack_a0,ppuVar5);
    FUN_10b19a580(ppuVar4 + 2,&ppuStack_a0);
    __ZNSt13exception_ptrD1Ev(&ppuStack_a0);
  }
LAB_10b199fd0:
  func_0x00010b19ad3c();
  func_0x00010b19ad4c();
  return;
}



/* Entry: 10b19a2e4; end: 10b19a31f;  */

void FUN_10b19a2e4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  int extraout_w10_00;
  
  if (param_3 != 0) {
    do {
      func_0x00010b19abe4();
    } while (extraout_w10 != 0);
    do {
      func_0x00010b19abe4();
    } while (extraout_w10_00 != 0);
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  func_0x00010b19ac24();
  return;
}



/* Entry: 10b19a320; end: 10b19a367;  */

void FUN_10b19a320(long param_1)

{
  *(undefined1 *)(param_1 + 0xc0) = 1;
  __ZNSt3__15mutex4lockEv();
  func_0x00010b19ad24();
  func_0x00010b19ac70();
  return;
}



/* Entry: 10b19a368; end: 10b19a393;  */

long FUN_10b19a368(long param_1)

{
  __ZNSt3__15mutex4lockEv(param_1 + 0x18);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x18);
  return param_1 + 0x98;
}



/* Entry: 10b19a394; end: 10b19a3b3;  */

void FUN_10b19a394(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_10b19a4e4();
  }
  return;
}



/* Entry: 10b19a3b4; end: 10b19a443;  */

void FUN_10b19a3b4(void)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *unaff_x19;
  
  func_0x00010b19ad7c();
  puVar3 = (undefined8 *)0xa8;
  __Znwm();
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_110cc2718;
  puVar5 = puVar3 + 3;
  *puVar5 = 0;
  puVar3[4] = 0;
  puVar3[5] = 0x3cb0b1bb;
  puVar3[7] = 0;
  puVar3[6] = 0;
  puVar3[9] = 0;
  puVar3[8] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0x32aaaba7;
  puVar3[0xd] = 0;
  puVar3[0xc] = 0;
  puVar3[0xf] = 0;
  puVar3[0xe] = 0;
  puVar3[0x11] = 0;
  puVar3[0x10] = 0;
  puVar3[0x13] = 0;
  puVar3[0x12] = 0;
  puVar3[0x14] = 0;
  unaff_x19[1] = puVar5;
  unaff_x19[2] = puVar3;
  unaff_x19[3] = puVar5;
  unaff_x19[4] = puVar3;
  plVar4 = puVar3 + 1;
  *plVar4 = 0;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  *unaff_x19 = &PTR_FUN_110cc26b0;
  return;
}



/* Entry: 10b19a444; end: 10b19a457;  */

void FUN_10b19a444(void)

{
  FUN_10b19a4e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b19a458; end: 10b19a45b;  */

void FUN_10b19a458(long param_1)

{
  long unaff_x19;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined1 auStack_28 [8];
  
  func_0x00010b19ad7c();
  if (*(long *)(param_1 + 8) != 0) {
    ppuStack_38 = &PTR_DAT_1107e6938;
    ppuStack_30 = &PTR_DAT_1107e6938;
    func_0x000104bdfe3c(auStack_28,&ppuStack_30);
    FUN_10b19a580();
    __ZNSt13exception_ptrD1Ev(auStack_28);
    __ZNSt9exceptionD2Ev(&ppuStack_30);
    __ZNSt9exceptionD2Ev(&ppuStack_38);
  }
  func_0x00010b122d08(unaff_x19 + 0x18);
  func_0x00010b122d08((long *)(param_1 + 8));
  return;
}



/* Entry: 10b19a45c; end: 10b19a46f;  */

void FUN_10b19a45c(void)

{
  FUN_10b19a4e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b19a470; end: 10b19a473;  */

void FUN_10b19a470(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc2718;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b19a474; end: 10b19a487;  */

void FUN_10b19a474(void)

{
  FUN_10b19a4d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b19a488; end: 10b19a4cf;  */

void FUN_10b19a488(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  __ZNSt13exception_ptrD1Ev(param_1 + 0x98);
  __ZNSt3__15mutexD1Ev(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__118condition_variableD1Ev_110346608)(param_1 + 0x28);
  return;
}



/* Entry: 10b19a4d0; end: 10b19a4e3;  */

void FUN_10b19a4d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b19a4e4; end: 10b19a57f;  */

void FUN_10b19a4e4(long param_1)

{
  long unaff_x19;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined1 auStack_28 [8];
  
  func_0x00010b19ad7c();
  if (*(long *)(param_1 + 8) != 0) {
    ppuStack_38 = &PTR_DAT_1107e6938;
    ppuStack_30 = &PTR_DAT_1107e6938;
    func_0x000104bdfe3c(auStack_28,&ppuStack_30);
    FUN_10b19a580();
    __ZNSt13exception_ptrD1Ev(auStack_28);
    __ZNSt9exceptionD2Ev(&ppuStack_30);
    __ZNSt9exceptionD2Ev(&ppuStack_38);
  }
  func_0x00010b122d08(unaff_x19 + 0x18);
  func_0x00010b122d08((long *)(param_1 + 8));
  return;
}



/* Entry: 10b19a580; end: 10b19a61b;  */

void FUN_10b19a580(undefined8 param_1,long *param_2)

{
  long alStack_30 [2];
  
  alStack_30[0] = 0;
  alStack_30[1] = 0;
  func_0x00010b19acb8();
  func_0x00010b19ad14(alStack_30);
  func_0x00010b19ac2c();
  func_0x00010b19ac24();
  __ZNSt3__15mutex4lockEv(alStack_30[0] + 0x40);
  __ZNSt13exception_ptraSERKS_(alStack_30[0] + 0x80,param_2);
  func_0x00010b19ac5c();
  if (param_2 == (long *)0x0) {
    func_0x00010b19ad08();
  }
  else {
    func_0x00010b19ad70(*(undefined8 *)(*param_2 + 0x10));
    func_0x00010b19abf4();
  }
  func_0x00010b19ac48();
  return;
}



/* Entry: 10b19a61c; end: 10b19a643;  */

void FUN_10b19a61c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar1;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *param_1 = &PTR_FUN_110cc26b0;
  return;
}



/* Entry: 10b19a644; end: 10b19a65f;  */

void FUN_10b19a644(long param_1)

{
  FUN_10b19a61c();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 10b19a660; end: 10b19a693;  */

long FUN_10b19a660(long param_1)

{
  long unaff_x19;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined1 auStack_28 [8];
  
  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_10b19a694(param_1 + 0x28);
  }
  func_0x00010b19ad7c();
  if (*(long *)(param_1 + 8) != 0) {
    ppuStack_38 = &PTR_DAT_1107e6938;
    ppuStack_30 = &PTR_DAT_1107e6938;
    func_0x000104bdfe3c(auStack_28,&ppuStack_30);
    FUN_10b19a580(unaff_x19,auStack_28);
    __ZNSt13exception_ptrD1Ev(auStack_28);
    __ZNSt9exceptionD2Ev(&ppuStack_30);
    __ZNSt9exceptionD2Ev(&ppuStack_38);
  }
  func_0x00010b122d08(unaff_x19 + 0x18);
  func_0x00010b122d08((long *)(param_1 + 8));
  return unaff_x19;
}



/* Entry: 10b19a694; end: 10b19a6af;  */

void FUN_10b19a694(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    __ZNSt13exception_ptrD1Ev();
  }
  return;
}



/* Entry: 10b19a6b0; end: 10b19a6e7;  */

undefined8 * FUN_10b19a6b0(undefined8 *param_1,undefined8 *param_2)

{
  FUN_10b19a6e8();
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined1 *)(param_1 + 2) = 1;
  return param_1;
}



/* Entry: 10b19a6e8; end: 10b19a70b;  */

void FUN_10b19a6e8(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_10b19a694();
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  return;
}



/* Entry: 10b19a70c; end: 10b19a763;  */

void FUN_10b19a70c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_2;
  __ZNSt3__112__get_sp_mutEPKv(param_2);
  __ZNSt3__18__sp_mut4lockEv();
  lVar2 = param_2[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010b19abe4();
    } while (extraout_w10 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar1);
  return;
}



/* Entry: 10b19a764; end: 10b19a883;  */

void FUN_10b19a764(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_3 != 0) {
    do {
      func_0x00010b19abe4();
    } while (extraout_w10 != 0);
    do {
      func_0x00010b19abe4();
    } while (extraout_w10_00 != 0);
  }
  puVar2 = (undefined8 *)param_1[1];
  uStack_50 = param_2;
  lStack_48 = param_3;
  FUN_10b19a70c(&uStack_40,&uStack_50);
  puVar1 = puVar2;
  __ZNSt3__112__get_sp_mutEPKv(puVar2);
  __ZNSt3__18__sp_mut4lockEv();
  uVar4 = puVar2[1];
  uVar3 = *puVar2;
  puVar2[1] = uStack_38;
  *puVar2 = uStack_40;
  uStack_40 = uVar3;
  uStack_38 = uVar4;
  __ZNSt3__18__sp_mut6unlockEv(puVar1);
  func_0x00010b19ac88();
  (**(code **)*param_1)();
  func_0x00010b19ac48();
  func_0x00010b19ac2c();
  func_0x000107c27b68(param_1[2]);
  return;
}



/* Entry: 10b19a884; end: 10b19a887;  */

undefined8 * FUN_10b19a884(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc2768;
  func_0x000107c27b70(param_1 + 3);
  return param_1;
}



/* Entry: 10b19a888; end: 10b19a89b;  */

void FUN_10b19a888(void)

{
  FUN_10b19a8ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b19a89c; end: 10b19a8eb;  */

void FUN_10b19a89c(long param_1,long param_2)

{
  int extraout_w10;
  
  if (*(long *)(param_2 + 8) != 0) {
    do {
      func_0x00010b19abe4();
    } while (extraout_w10 != 0);
  }
  FUN_10b19a764(param_1 + 8);
  func_0x00010b19ac24();
  return;
}


