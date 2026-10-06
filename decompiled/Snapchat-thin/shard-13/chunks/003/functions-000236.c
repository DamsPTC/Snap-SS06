/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a476740; end: 10a47682f;  */

undefined8 * FUN_10a476740(long *param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 != param_2) {
    lVar5 = 0;
    do {
      plVar1 = (long *)((long)param_1 + lVar5);
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
      lVar4 = *plVar1;
      lVar2 = plVar1[1];
      lVar3 = lVar2 - lVar4;
      if (lVar3 != 0) {
        FUN_10a4747cc(param_3,(lVar3 >> 3) * -0x3333333333333333);
        FUN_10a474818(lVar4,lVar2,param_3[1]);
        param_3[1] = lVar4;
      }
      param_3 = param_3 + 3;
      lVar5 = lVar5 + 0x18;
    } while (plVar1 + 3 != param_2);
  }
  return param_3;
}



/* Entry: 10a476830; end: 10a47689f;  */

long * FUN_10a476830(long *param_1,long *param_2,long *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    if (param_1 != param_3) {
      FUN_10a474648(param_3,*param_1,param_1[1],(param_1[1] - *param_1 >> 3) * -0x3333333333333333);
    }
    param_3 = param_3 + 3;
  }
  return param_3;
}



/* Entry: 10a4768a0; end: 10a4768c7;  */

void FUN_10a4768a0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x000109896674();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a4768c8; end: 10a476963;  */

void FUN_10a4768c8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)param_2[0x59] < 8) {
    param_2[param_2[0x59] + 0x4e] = param_2[0x5a];
    param_2[0x59] = param_2[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(param_2 + 0x4b);
  }
  FUN_10a052e3c(param_5);
  *param_1 = 3;
  *(undefined8 *)(param_1 + 2) = 0x4077d00000000000;
  plVar1 = param_2 + 0x4b;
  lVar4 = param_2[0x59];
  uVar5 = lVar4 - 1;
  param_2[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar4 + 2];
    if (param_2[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(param_2[0x57] + -8);
    param_2[0x57] = param_2[0x57] + -8;
    if (param_2[0x5a] == uVar5) {
      return;
    }
  }
  lVar4 = *plVar1;
  lVar9 = param_2[0x4c];
  lVar7 = lVar9 - lVar4;
  uVar11 = lVar7 >> 4;
  if (uVar11 < uVar5) {
    uVar12 = uVar5 - uVar11;
    lVar10 = param_2[0x4d];
    if ((ulong)(lVar10 - lVar9 >> 4) < uVar12) {
      if (uVar5 >> 0x3c == 0) {
        uVar6 = lVar10 - lVar4 >> 3;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar10 - lVar4)) {
          uVar6 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar6 >> 0x3c == 0) {
          lVar3 = uVar6 << 4;
          __Znwm();
          lVar9 = lVar3 + lVar7;
          _bzero(lVar9,uVar12 * 0x10);
          lVar8 = lVar9 + uVar11 * -0x10;
          _memcpy(lVar8,lVar4,lVar7);
          *plVar1 = lVar8;
          param_2[0x4c] = lVar9 + uVar12 * 0x10;
          param_2[0x4d] = lVar3 + uVar6 * 0x10;
          lStack_88 = lVar4;
          lStack_80 = lVar4;
          lStack_78 = lVar4;
          lStack_70 = lVar10;
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
    _bzero(lVar9,uVar12 * 0x10);
    param_2[0x4c] = lVar9 + uVar12 * 0x10;
  }
  else if (uVar5 < uVar11) {
    lVar4 = lVar4 + uVar5 * 0x10;
    while (lVar9 != lVar4) {
      lVar9 = lVar9 + -0x10;
      func_0x00010988c204(lVar9);
    }
    param_2[0x4c] = lVar4;
  }
code_r0x00010988c138:
  param_2[0x5a] = uVar5;
  return;
}



/* Entry: 10a476964; end: 10a476f27;  */

/* WARNING: Possible PIC construction at 0x00010a476dc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a476f1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a476dcc) */
/* WARNING: Removing unreachable block (ram,0x00010a476e0c) */
/* WARNING: Removing unreachable block (ram,0x00010a476f10) */
/* WARNING: Removing unreachable block (ram,0x00010a476de4) */
/* WARNING: Removing unreachable block (ram,0x00010a476f20) */
/* WARNING: Removing unreachable block (ram,0x00010a476f34) */
/* WARNING: Removing unreachable block (ram,0x00010a476fc4) */
/* WARNING: Removing unreachable block (ram,0x00010a476f80) */
/* WARNING: Removing unreachable block (ram,0x00010a476f98) */
/* WARNING: Removing unreachable block (ram,0x00010a476f30) */

void FUN_10a476964(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined4 uVar8;
  long lVar9;
  long *plVar10;
  undefined **ppuVar11;
  undefined8 ****ppppuVar12;
  undefined8 ***pppuVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long lStack_3a8;
  long lStack_3a0;
  long lStack_398;
  long lStack_390;
  long *plStack_388;
  long *plStack_310;
  long *plStack_308;
  undefined8 ***pppuStack_300;
  ulong uStack_2f8;
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  undefined1 auStack_2e0 [56];
  undefined8 uStack_2a8;
  char cStack_291;
  undefined **appuStack_280 [20];
  undefined1 uStack_1e0;
  undefined7 uStack_1df;
  ulong uStack_1d8;
  byte bStack_1c9;
  undefined8 ***pppuStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  undefined8 ***pppuStack_1b0;
  undefined7 uStack_1a8;
  undefined1 uStack_1a1;
  undefined7 uStack_1a0;
  byte bStack_199;
  long lStack_198;
  long lStack_190;
  undefined8 **ppuStack_180;
  undefined8 **ppuStack_178;
  undefined8 **ppuStack_170;
  undefined **ppuStack_168;
  undefined1 auStack_160 [56];
  undefined8 uStack_128;
  char cStack_111;
  undefined **appuStack_100 [19];
  undefined7 uStack_68;
  undefined1 uStack_61;
  undefined7 uStack_60;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar10[0x59] < 8) {
    plVar10[plVar10[0x59] + 0x4e] = plVar10[0x5a];
    plVar10[0x59] = plVar10[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar10 + 0x4b);
  }
  FUN_10a476f28(param_5);
  func_0x000109898a18(&plStack_310,param_2,param_4);
  ppuVar11 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  if (*ppuVar11 != (undefined *)0x0) {
    FUN_10a3dc3dc(&ppuStack_180);
    if (*(char *)(ppuStack_178 + 1) == '\x01') {
      (*(code *)ppuStack_180)(&DAT_10f3dd908,3,plStack_310,1,&ppuStack_180);
    }
    (*(code *)*ppuStack_178)(&ppuStack_178);
  }
  ppuStack_180 = (undefined8 **)*plStack_310;
  func_0x00010989a8b0(&lStack_198,&ppuStack_180,1);
  pppuStack_1b0 = (undefined8 ****)0x0;
  uStack_1a8 = 0;
  uStack_1a1 = 0;
  uStack_1a0 = 0;
  bStack_199 = 0;
  if (lStack_198 != lStack_190) {
    FUN_10a454ecc(&pppuStack_1c8,0x5b,lStack_198);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (&pppuStack_1c8,0x3a);
    uStack_2f8 = uStack_1c0;
    pppuStack_300 = pppuStack_1c8;
    ppuStack_2f0 = (undefined **)uStack_1b8;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    pppuStack_1c8 = (undefined8 ****)0x0;
    if (*(char *)(lStack_198 + 0x34) == '\x01') {
      uVar8 = *(undefined4 *)(lStack_198 + 0x30);
    }
    else {
      uVar8 = 0;
    }
    __ZNSt3__19to_stringEi(&uStack_1e0,uVar8);
    puVar5 = (undefined1 *)CONCAT71(uStack_1df,uStack_1e0);
    if (-1 < (char)bStack_1c9) {
      uStack_1d8 = (ulong)bStack_1c9;
      puVar5 = &uStack_1e0;
    }
    ppppuVar12 = &pppuStack_300;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (ppppuVar12,puVar5,uStack_1d8);
    ppuStack_178 = ppppuVar12[1];
    ppuStack_180 = *ppppuVar12;
    ppuStack_170 = ppppuVar12[2];
    ppppuVar12[1] = (undefined8 ***)0x0;
    ppppuVar12[2] = (undefined8 ***)0x0;
    *ppppuVar12 = (undefined8 ***)0x0;
    pppuVar13 = &ppuStack_180;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppuVar13,&UNK_10f4edf8b,2);
    ppppuVar12 = (undefined8 ****)*pppuVar13;
    uStack_68 = SUB87(pppuVar13[1],0);
    uStack_61 = (undefined1)*(undefined8 *)((long)pppuVar13 + 0xf);
    uStack_60 = (undefined7)((ulong)*(undefined8 *)((long)pppuVar13 + 0xf) >> 8);
    bVar2 = *(byte *)((long)pppuVar13 + 0x17);
    pppuVar13[1] = (undefined8 **)0x0;
    pppuVar13[2] = (undefined8 **)0x0;
    *pppuVar13 = (undefined8 **)0x0;
    if ((char)bStack_199 < '\0') {
      __ZdlPv(pppuStack_1b0);
    }
    uStack_1a8 = uStack_68;
    uStack_1a1 = uStack_61;
    uStack_1a0 = uStack_60;
    pppuStack_1b0 = ppppuVar12;
    bStack_199 = bVar2;
    if ((long)ppuStack_170 < 0) {
      __ZdlPv(ppuStack_180);
    }
    if ((char)bStack_1c9 < '\0') {
      __ZdlPv(CONCAT71(uStack_1df,uStack_1e0));
    }
    if ((long)ppuStack_2f0 < 0) {
      __ZdlPv(pppuStack_300);
    }
    if ((long)uStack_1b8 < 0) {
      __ZdlPv(pppuStack_1c8);
    }
  }
  FUN_109febc44(&ppuStack_180);
  uVar14 = CONCAT17(uStack_1a1,uStack_1a8);
  ppppuVar12 = (undefined8 ****)pppuStack_1b0;
  if (-1 < (char)bStack_199) {
    uVar14 = (ulong)bStack_199;
    ppppuVar12 = &pppuStack_1b0;
  }
  pppuVar13 = &ppuStack_170;
  FUN_10a002568(pppuVar13,ppppuVar12,uVar14);
  FUN_10a454df0(&pppuStack_300,plStack_310);
  FUN_10a23d168(&pppuStack_1c8,&ppuStack_2e8);
  uVar14 = uStack_1c0;
  ppppuVar12 = (undefined8 ****)pppuStack_1c8;
  if (-1 < (long)uStack_1b8) {
    uVar14 = uStack_1b8 >> 0x38;
    ppppuVar12 = &pppuStack_1c8;
  }
  FUN_10a002568(pppuVar13,ppppuVar12,uVar14);
  uStack_1e0 = 10;
  FUN_10a002568();
  if ((long)uStack_1b8 < 0) {
    __ZdlPv(pppuStack_1c8);
  }
  pppuStack_300 = (undefined8 ***)&PTR_SUB_1108a5a38;
  ppuStack_2f0 = &PTR_DAT_1108a5a60;
  appuStack_280[0] = &PTR_DAT_1108a5a88;
  ppuStack_2e8 = &PTR_DAT_11088d7b0;
  if (cStack_291 < '\0') {
    __ZdlPv(uStack_2a8);
  }
  puVar6 = PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20;
  ppuStack_2e8 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_2e0);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(&pppuStack_300,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_280);
  func_0x00010a002480(&pppuStack_300,&ppuStack_168,&pppuStack_1c8);
  func_0x00010ae06f08(1,0x14,"","",0xffffffff,"%s");
  if ((long)ppuStack_2f0 < 0) {
    __ZdlPv(pppuStack_300);
  }
  ppuStack_180 = (undefined8 **)&PTR_SUB_1108a5a38;
  appuStack_100[0] = &PTR_DAT_1108a5a88;
  ppuStack_170 = (undefined8 **)&PTR_DAT_1108a5a60;
  ppuStack_168 = &PTR_DAT_11088d7b0;
  if (cStack_111 < '\0') {
    __ZdlPv(uStack_128);
  }
  ppuStack_168 = (undefined **)(puVar6 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_160);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_180,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_100);
  if ((char)bStack_199 < '\0') {
    __ZdlPv(pppuStack_1b0);
  }
  FUN_10a472960(&lStack_198);
  if (plStack_308 != (long *)0x0) {
    plVar1 = plStack_308 + 1;
    do {
      lVar16 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar16 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_308 + 0x10))(plStack_308);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_308);
    }
  }
  *param_1 = 0;
  plVar1 = plVar10 + 0x4b;
  lVar16 = plVar10[0x59];
  uVar14 = lVar16 - 1;
  plVar10[0x59] = uVar14;
  if (uVar14 < 8) {
    uVar14 = plVar1[lVar16 + 2];
    if (plVar10[0x5a] == uVar14) {
      return;
    }
  }
  else {
    uVar14 = *(ulong *)(plVar10[0x57] + -8);
    plVar10[0x57] = plVar10[0x57] + -8;
    if (plVar10[0x5a] == uVar14) {
      return;
    }
  }
  lVar16 = *plVar1;
  lVar19 = plVar10[0x4c];
  lVar17 = lVar19 - lVar16;
  uVar21 = lVar17 >> 4;
  if (uVar21 < uVar14) {
    uVar22 = uVar14 - uVar21;
    lVar20 = plVar10[0x4d];
    if ((ulong)(lVar20 - lVar19 >> 4) < uVar22) {
      if (uVar14 >> 0x3c == 0) {
        uVar15 = lVar20 - lVar16 >> 3;
        if (uVar15 <= uVar14) {
          uVar15 = uVar14;
        }
        if (0x7fffffffffffffef < (ulong)(lVar20 - lVar16)) {
          uVar15 = 0xfffffffffffffff;
        }
        plStack_388 = plVar1;
        if (uVar15 >> 0x3c == 0) {
          lVar9 = uVar15 << 4;
          __Znwm();
          lVar19 = lVar9 + lVar17;
          _bzero(lVar19,uVar22 * 0x10);
          lVar18 = lVar19 + uVar21 * -0x10;
          _memcpy(lVar18,lVar16,lVar17);
          *plVar1 = lVar18;
          plVar10[0x4c] = lVar19 + uVar22 * 0x10;
          plVar10[0x4d] = lVar9 + uVar15 * 0x10;
          lStack_3a8 = lVar16;
          lStack_3a0 = lVar16;
          lStack_398 = lVar16;
          lStack_390 = lVar20;
          func_0x00010988c1b8(&lStack_3a8);
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
    _bzero(lVar19,uVar22 * 0x10);
    plVar10[0x4c] = lVar19 + uVar22 * 0x10;
  }
  else if (uVar14 < uVar21) {
    lVar16 = lVar16 + uVar14 * 0x10;
    while (lVar19 != lVar16) {
      lVar19 = lVar19 + -0x10;
      func_0x00010988c204(lVar19);
    }
    plVar10[0x4c] = lVar16;
  }
code_r0x00010988c138:
  plVar10[0x5a] = uVar14;
  return;
}



/* Entry: 10a476f28; end: 10a476f4b;  */

void FUN_10a476f28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined4 *extraout_x8;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar4 = (long *)0x1;
  FUN_10a052ee0(1,0,param_1);
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a052e3c(param_4);
  *extraout_x8 = 3;
  *(undefined8 *)(extraout_x8 + 2) = 0x3ff0000000000000;
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
        plStack_78 = plVar1;
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
          lStack_98 = lVar5;
          lStack_90 = lVar5;
          lStack_88 = lVar5;
          lStack_80 = lVar11;
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



/* Entry: 10a476f4c; end: 10a476fe3;  */

void FUN_10a476f4c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)param_2[0x59] < 8) {
    param_2[param_2[0x59] + 0x4e] = param_2[0x5a];
    param_2[0x59] = param_2[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(param_2 + 0x4b);
  }
  FUN_10a052e3c(param_5);
  *param_1 = 3;
  *(undefined8 *)(param_1 + 2) = 0x3ff0000000000000;
  plVar1 = param_2 + 0x4b;
  lVar4 = param_2[0x59];
  uVar5 = lVar4 - 1;
  param_2[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar4 + 2];
    if (param_2[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(param_2[0x57] + -8);
    param_2[0x57] = param_2[0x57] + -8;
    if (param_2[0x5a] == uVar5) {
      return;
    }
  }
  lVar4 = *plVar1;
  lVar9 = param_2[0x4c];
  lVar7 = lVar9 - lVar4;
  uVar11 = lVar7 >> 4;
  if (uVar11 < uVar5) {
    uVar12 = uVar5 - uVar11;
    lVar10 = param_2[0x4d];
    if ((ulong)(lVar10 - lVar9 >> 4) < uVar12) {
      if (uVar5 >> 0x3c == 0) {
        uVar6 = lVar10 - lVar4 >> 3;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar10 - lVar4)) {
          uVar6 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar6 >> 0x3c == 0) {
          lVar3 = uVar6 << 4;
          __Znwm();
          lVar9 = lVar3 + lVar7;
          _bzero(lVar9,uVar12 * 0x10);
          lVar8 = lVar9 + uVar11 * -0x10;
          _memcpy(lVar8,lVar4,lVar7);
          *plVar1 = lVar8;
          param_2[0x4c] = lVar9 + uVar12 * 0x10;
          param_2[0x4d] = lVar3 + uVar6 * 0x10;
          lStack_88 = lVar4;
          lStack_80 = lVar4;
          lStack_78 = lVar4;
          lStack_70 = lVar10;
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
    _bzero(lVar9,uVar12 * 0x10);
    param_2[0x4c] = lVar9 + uVar12 * 0x10;
  }
  else if (uVar5 < uVar11) {
    lVar4 = lVar4 + uVar5 * 0x10;
    while (lVar9 != lVar4) {
      lVar9 = lVar9 + -0x10;
      func_0x00010988c204(lVar9);
    }
    param_2[0x4c] = lVar4;
  }
code_r0x00010988c138:
  param_2[0x5a] = uVar5;
  return;
}



/* Entry: 10a476fe4; end: 10a47707b;  */

void FUN_10a476fe4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)param_2[0x59] < 8) {
    param_2[param_2[0x59] + 0x4e] = param_2[0x5a];
    param_2[0x59] = param_2[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(param_2 + 0x4b);
  }
  FUN_10a052e3c(param_5);
  *param_1 = 3;
  *(undefined8 *)(param_1 + 2) = 0x3ff0000000000000;
  plVar1 = param_2 + 0x4b;
  lVar4 = param_2[0x59];
  uVar5 = lVar4 - 1;
  param_2[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar4 + 2];
    if (param_2[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(param_2[0x57] + -8);
    param_2[0x57] = param_2[0x57] + -8;
    if (param_2[0x5a] == uVar5) {
      return;
    }
  }
  lVar4 = *plVar1;
  lVar9 = param_2[0x4c];
  lVar7 = lVar9 - lVar4;
  uVar11 = lVar7 >> 4;
  if (uVar11 < uVar5) {
    uVar12 = uVar5 - uVar11;
    lVar10 = param_2[0x4d];
    if ((ulong)(lVar10 - lVar9 >> 4) < uVar12) {
      if (uVar5 >> 0x3c == 0) {
        uVar6 = lVar10 - lVar4 >> 3;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar10 - lVar4)) {
          uVar6 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar6 >> 0x3c == 0) {
          lVar3 = uVar6 << 4;
          __Znwm();
          lVar9 = lVar3 + lVar7;
          _bzero(lVar9,uVar12 * 0x10);
          lVar8 = lVar9 + uVar11 * -0x10;
          _memcpy(lVar8,lVar4,lVar7);
          *plVar1 = lVar8;
          param_2[0x4c] = lVar9 + uVar12 * 0x10;
          param_2[0x4d] = lVar3 + uVar6 * 0x10;
          lStack_88 = lVar4;
          lStack_80 = lVar4;
          lStack_78 = lVar4;
          lStack_70 = lVar10;
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
    _bzero(lVar9,uVar12 * 0x10);
    param_2[0x4c] = lVar9 + uVar12 * 0x10;
  }
  else if (uVar5 < uVar11) {
    lVar4 = lVar4 + uVar5 * 0x10;
    while (lVar9 != lVar4) {
      lVar9 = lVar9 + -0x10;
      func_0x00010988c204(lVar9);
    }
    param_2[0x4c] = lVar4;
  }
code_r0x00010988c138:
  param_2[0x5a] = uVar5;
  return;
}



/* Entry: 10a47707c; end: 10a47714f;  */

void FUN_10a47707c(undefined4 *param_1,long *param_2,undefined8 param_3,uint *param_4,
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
  FUN_10a477150(param_5);
  if (*param_4 < 2) {
    param_2 = (long *)0x1;
  }
  else {
    func_0x000109898688(param_2,param_4);
    if (param_2 != (long *)0x0) {
      (**(code **)(*param_2 + 8))();
    }
  }
  *param_1 = 2;
  *(char *)(param_1 + 2) = (char)param_2;
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



/* Entry: 10a477150; end: 10a477173;  */

void FUN_10a477150(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined4 *extraout_x8;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar4 = (long *)0x1;
  FUN_10a052ee0(1,0,param_1);
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a052e3c(param_4);
  *extraout_x8 = 0;
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
        plStack_78 = plVar1;
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
          lStack_98 = lVar5;
          lStack_90 = lVar5;
          lStack_88 = lVar5;
          lStack_80 = lVar11;
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



/* Entry: 10a477174; end: 10a4771ff;  */

void FUN_10a477174(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)param_2[0x59] < 8) {
    param_2[param_2[0x59] + 0x4e] = param_2[0x5a];
    param_2[0x59] = param_2[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(param_2 + 0x4b);
  }
  FUN_10a052e3c(param_5);
  *param_1 = 0;
  plVar1 = param_2 + 0x4b;
  lVar4 = param_2[0x59];
  uVar5 = lVar4 - 1;
  param_2[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar4 + 2];
    if (param_2[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(param_2[0x57] + -8);
    param_2[0x57] = param_2[0x57] + -8;
    if (param_2[0x5a] == uVar5) {
      return;
    }
  }
  lVar4 = *plVar1;
  lVar9 = param_2[0x4c];
  lVar7 = lVar9 - lVar4;
  uVar11 = lVar7 >> 4;
  if (uVar11 < uVar5) {
    uVar12 = uVar5 - uVar11;
    lVar10 = param_2[0x4d];
    if ((ulong)(lVar10 - lVar9 >> 4) < uVar12) {
      if (uVar5 >> 0x3c == 0) {
        uVar6 = lVar10 - lVar4 >> 3;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar10 - lVar4)) {
          uVar6 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar6 >> 0x3c == 0) {
          lVar3 = uVar6 << 4;
          __Znwm();
          lVar9 = lVar3 + lVar7;
          _bzero(lVar9,uVar12 * 0x10);
          lVar8 = lVar9 + uVar11 * -0x10;
          _memcpy(lVar8,lVar4,lVar7);
          *plVar1 = lVar8;
          param_2[0x4c] = lVar9 + uVar12 * 0x10;
          param_2[0x4d] = lVar3 + uVar6 * 0x10;
          lStack_88 = lVar4;
          lStack_80 = lVar4;
          lStack_78 = lVar4;
          lStack_70 = lVar10;
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
    _bzero(lVar9,uVar12 * 0x10);
    param_2[0x4c] = lVar9 + uVar12 * 0x10;
  }
  else if (uVar5 < uVar11) {
    lVar4 = lVar4 + uVar5 * 0x10;
    while (lVar9 != lVar4) {
      lVar9 = lVar9 + -0x10;
      func_0x00010988c204(lVar9);
    }
    param_2[0x4c] = lVar4;
  }
code_r0x00010988c138:
  param_2[0x5a] = uVar5;
  return;
}



/* Entry: 10a477200; end: 10a47728b;  */

void FUN_10a477200(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)param_2[0x59] < 8) {
    param_2[param_2[0x59] + 0x4e] = param_2[0x5a];
    param_2[0x59] = param_2[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(param_2 + 0x4b);
  }
  FUN_10a052e3c(param_5);
  *param_1 = 0;
  plVar1 = param_2 + 0x4b;
  lVar4 = param_2[0x59];
  uVar5 = lVar4 - 1;
  param_2[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar4 + 2];
    if (param_2[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(param_2[0x57] + -8);
    param_2[0x57] = param_2[0x57] + -8;
    if (param_2[0x5a] == uVar5) {
      return;
    }
  }
  lVar4 = *plVar1;
  lVar9 = param_2[0x4c];
  lVar7 = lVar9 - lVar4;
  uVar11 = lVar7 >> 4;
  if (uVar11 < uVar5) {
    uVar12 = uVar5 - uVar11;
    lVar10 = param_2[0x4d];
    if ((ulong)(lVar10 - lVar9 >> 4) < uVar12) {
      if (uVar5 >> 0x3c == 0) {
        uVar6 = lVar10 - lVar4 >> 3;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar10 - lVar4)) {
          uVar6 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar6 >> 0x3c == 0) {
          lVar3 = uVar6 << 4;
          __Znwm();
          lVar9 = lVar3 + lVar7;
          _bzero(lVar9,uVar12 * 0x10);
          lVar8 = lVar9 + uVar11 * -0x10;
          _memcpy(lVar8,lVar4,lVar7);
          *plVar1 = lVar8;
          param_2[0x4c] = lVar9 + uVar12 * 0x10;
          param_2[0x4d] = lVar3 + uVar6 * 0x10;
          lStack_88 = lVar4;
          lStack_80 = lVar4;
          lStack_78 = lVar4;
          lStack_70 = lVar10;
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
    _bzero(lVar9,uVar12 * 0x10);
    param_2[0x4c] = lVar9 + uVar12 * 0x10;
  }
  else if (uVar5 < uVar11) {
    lVar4 = lVar4 + uVar5 * 0x10;
    while (lVar9 != lVar4) {
      lVar9 = lVar9 + -0x10;
      func_0x00010988c204(lVar9);
    }
    param_2[0x4c] = lVar4;
  }
code_r0x00010988c138:
  param_2[0x5a] = uVar5;
  return;
}



/* Entry: 10a47728c; end: 10a47734b;  */

void FUN_10a47728c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcStack_48;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  pcStack_48 = FUN_10a453a20;
  FUN_10a47734c(param_1,param_2,&pcStack_48,param_4,param_5);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a47734c; end: 10a4773d7;  */

void FUN_10a47734c(undefined4 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  FUN_10a0584c8(param_5);
  pcVar1 = (code *)*param_3;
  func_0x000109898570(auStack_48,param_2,param_4);
  (*pcVar1)(auStack_48);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  *param_1 = 0;
  return;
}



/* Entry: 10a4773d8; end: 10a477497;  */

void FUN_10a4773d8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined8 uStack_48;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  uStack_48 = 0x10a453a24;
  FUN_10a47734c(param_1,param_2,&uStack_48,param_4,param_5);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a477498; end: 10a477557;  */

void FUN_10a477498(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcStack_48;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  pcStack_48 = FUN_10a453a28;
  FUN_10a47734c(param_1,param_2,&pcStack_48,param_4,param_5);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a477558; end: 10a47774f;  */

void FUN_10a477558(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 ****ppppuVar1;
  int iVar2;
  long *plVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *extraout_x8;
  undefined **extraout_x8_00;
  undefined1 *extraout_x9;
  code *extraout_x10;
  float fVar8;
  undefined8 ***apppuStack_68 [2];
  char cStack_51;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  FUN_10a0584c8(param_5);
  func_0x000109898570(apppuStack_68,param_2,param_4);
  __ZNSt3__16chrono12steady_clock3nowEv();
  ppuVar4 = &PTR___tlv_bootstrap_11340df60;
  (*(code *)PTR___tlv_bootstrap_11340df60)();
  ppuVar5 = &PTR___tlv_bootstrap_11340d768;
  if (*(char *)ppuVar4 == '\0') {
    puVar6 = extraout_x9;
    (*extraout_x10)();
    *puVar6 = 1;
    puVar7 = extraout_x8;
    (*(code *)*extraout_x8)();
    puVar7[2] = 0;
    puVar7[1] = 0;
    *puVar7 = puVar7 + 1;
    ppuVar5 = extraout_x8_00;
  }
  (*(code *)*ppuVar5)();
  FUN_10a472774();
  iVar2 = *(int *)ppuVar5;
  *(int *)ppuVar5 = iVar2 + 1;
  fVar8 = (float)(((double)((long)param_2 - (long)ppuVar5[2]) / 1000000.0 + 0.0) /
                 (double)(iVar2 + 1));
  if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    ppppuVar1 = (undefined8 ****)apppuStack_68[0];
    if (-1 < cStack_51) {
      ppppuVar1 = apppuStack_68;
    }
    func_0x00010ae06f08(1,8,&UNK_10f65a255,&UNK_10f65a28c,0x48,&UNK_10f65a2cd,param_8,param_9,
                        ppppuVar1,(double)fVar8);
  }
  *(int *)ppuVar5 = 0;
  if (cStack_51 < '\0') {
    __ZdlPv(apppuStack_68[0]);
  }
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar8;
  func_0x00010988c170(plVar3 + 0x4b);
  return;
}



/* Entry: 10a477750; end: 10a4777cf;  */

void FUN_10a477750(long *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  long *plVar5;
  long *plVar6;
  
  plVar6 = *(long **)(param_2 + 0x10);
  bVar3 = *(byte *)((long)plVar6 + 0x17);
  uVar1 = plVar6[1];
  if (-1 < (char)bVar3) {
    uVar1 = (ulong)bVar3;
  }
  bVar4 = *(byte *)((long)param_1 + 0x17);
  uVar2 = param_1[1];
  if (-1 < (char)bVar4) {
    uVar2 = (ulong)bVar4;
  }
  if (uVar1 == uVar2) {
    plVar5 = (long *)*plVar6;
    if (-1 < (char)bVar3) {
      plVar5 = plVar6;
    }
    plVar6 = (long *)*param_1;
    if (-1 < (char)bVar4) {
      plVar6 = param_1;
    }
    _memcmp(plVar5,plVar6);
    if ((int)plVar5 == 0) {
      **(undefined1 **)(param_2 + 0x18) = 1;
    }
  }
  return;
}



/* Entry: 10a4777d0; end: 10a4777eb;  */

void FUN_10a4777d0(void)

{
  return;
}



/* Entry: 10a4777ec; end: 10a477837;  */

ulong * FUN_10a4777ec(void)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined *puVar8;
  ulong *puVar9;
  ulong in_x3;
  ulong uVar10;
  
  puVar2 = (ulong *)0x18;
  ___cxa_allocate_exception();
  __ZNSt3__111regex_errorC1ENS_15regex_constants10error_typeE();
  puVar3 = puVar2;
  puVar8 = PTR___ZTINSt3__111regex_errorE_1103469f0;
  puVar9 = (ulong *)PTR___ZNSt3__111regex_errorD1Ev_110346220;
  ___cxa_throw();
  ___cxa_free_exception(puVar2);
  __Unwind_Resume();
  if (in_x3 < 0x7ffffffffffffff8) {
    if (in_x3 < 0x17) {
      *(char *)((long)puVar3 + 0x17) = (char)in_x3;
      puVar4 = puVar3;
    }
    else {
      puVar2 = (ulong *)0x19;
      if ((in_x3 | 7) != 0x17) {
        puVar2 = (ulong *)((in_x3 | 7) + 1);
      }
      puVar4 = puVar2;
      __Znwm();
      puVar3[1] = in_x3;
      puVar3[2] = (ulong)puVar2 | 0x8000000000000000;
      *puVar3 = (ulong)puVar4;
    }
    lVar1 = (long)puVar9 - (long)puVar8;
    puVar3 = puVar4;
    if (lVar1 != 0) {
      _memmove(puVar4,puVar8,lVar1);
    }
    *(undefined1 *)((long)puVar4 + lVar1) = 0;
    return puVar3;
  }
  func_0x000109ffde50();
  puVar2 = puVar3 + 1;
  puVar4 = puVar2;
  puVar7 = (ulong *)*puVar2;
joined_r0x00010a4778f8:
  do {
    if (puVar7 == (ulong *)0x0) {
LAB_10a477948:
      puVar7 = (ulong *)0x40;
      __Znwm();
      if (*(char *)((long)puVar9 + 0x17) < '\0') {
        func_0x000107c3192c(puVar7 + 4,*puVar9,puVar9[1]);
      }
      else {
        uVar10 = *puVar9;
        puVar7[5] = puVar9[1];
        puVar7[4] = uVar10;
        puVar7[6] = puVar9[2];
      }
      puVar7[7] = 0;
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = (ulong)puVar4;
      *puVar2 = (ulong)puVar7;
      puVar9 = puVar7;
      if (*(ulong *)*puVar3 != 0) {
        *puVar3 = *(ulong *)*puVar3;
        puVar9 = (ulong *)*puVar2;
      }
      func_0x000107c2b058(puVar3[1],puVar9);
      puVar3[2] = puVar3[2] + 1;
      return puVar7;
    }
    puVar5 = puVar8;
    FUN_10a003e3c(puVar8,puVar7 + 4);
    puVar4 = puVar7;
    if (((uint)puVar5 >> 7 & 1) == 0) {
      puVar6 = puVar7 + 4;
      FUN_10a003e3c(puVar6,puVar8);
      if (((uint)puVar6 >> 7 & 1) == 0) {
        if ((ulong *)*puVar2 != (ulong *)0x0) {
          return (ulong *)*puVar2;
        }
        goto LAB_10a477948;
      }
      puVar2 = puVar7 + 1;
      puVar7 = (ulong *)*puVar2;
      goto joined_r0x00010a4778f8;
    }
    puVar2 = puVar7;
    puVar7 = (ulong *)*puVar7;
  } while( true );
}



/* Entry: 10a477838; end: 10a4778d3;  */

ulong * FUN_10a477838(ulong *param_1,long param_2,ulong *param_3,ulong param_4)

{
  ulong *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  
  if (param_4 < 0x7ffffffffffffff8) {
    if (param_4 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)param_4;
      puVar5 = param_1;
    }
    else {
      puVar1 = (ulong *)0x19;
      if ((param_4 | 7) != 0x17) {
        puVar1 = (ulong *)((param_4 | 7) + 1);
      }
      puVar5 = puVar1;
      __Znwm();
      param_1[1] = param_4;
      param_1[2] = (ulong)puVar1 | 0x8000000000000000;
      *param_1 = (ulong)puVar5;
    }
    lVar2 = (long)param_3 - param_2;
    puVar1 = puVar5;
    if (lVar2 != 0) {
      _memmove(puVar5,param_2,lVar2);
    }
    *(undefined1 *)((long)puVar5 + lVar2) = 0;
    return puVar1;
  }
  func_0x000109ffde50();
  puVar1 = param_1 + 1;
  puVar5 = puVar1;
  puVar4 = (ulong *)*puVar1;
joined_r0x00010a4778f8:
  do {
    if (puVar4 == (ulong *)0x0) {
LAB_10a477948:
      puVar4 = (ulong *)0x40;
      __Znwm();
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        func_0x000107c3192c(puVar4 + 4,*param_3,param_3[1]);
      }
      else {
        uVar6 = *param_3;
        puVar4[5] = param_3[1];
        puVar4[4] = uVar6;
        puVar4[6] = param_3[2];
      }
      puVar4[7] = 0;
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = (ulong)puVar5;
      *puVar1 = (ulong)puVar4;
      puVar5 = puVar4;
      if (*(ulong *)*param_1 != 0) {
        *param_1 = *(ulong *)*param_1;
        puVar5 = (ulong *)*puVar1;
      }
      func_0x000107c2b058(param_1[1],puVar5);
      param_1[2] = param_1[2] + 1;
      return puVar4;
    }
    lVar2 = param_2;
    FUN_10a003e3c(param_2,puVar4 + 4);
    puVar5 = puVar4;
    if (((uint)lVar2 >> 7 & 1) == 0) {
      puVar3 = puVar4 + 4;
      FUN_10a003e3c(puVar3,param_2);
      if (((uint)puVar3 >> 7 & 1) == 0) {
        if ((ulong *)*puVar1 != (ulong *)0x0) {
          return (ulong *)*puVar1;
        }
        goto LAB_10a477948;
      }
      puVar1 = puVar4 + 1;
      puVar4 = (ulong *)*puVar1;
      goto joined_r0x00010a4778f8;
    }
    puVar1 = puVar4;
    puVar4 = (ulong *)*puVar4;
  } while( true );
}



/* Entry: 10a4778d4; end: 10a4779ef;  */

undefined8 * FUN_10a4778d4(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  
  plVar5 = param_1 + 1;
  plVar6 = plVar5;
  plVar1 = (long *)*plVar5;
joined_r0x00010a4778f8:
  do {
    if (plVar1 == (long *)0x0) {
LAB_10a477948:
      puVar3 = (undefined8 *)0x40;
      __Znwm();
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        func_0x000107c3192c(puVar3 + 4,*param_3,param_3[1]);
      }
      else {
        uVar7 = *param_3;
        puVar3[5] = param_3[1];
        puVar3[4] = uVar7;
        puVar3[6] = param_3[2];
      }
      puVar3[7] = 0;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = plVar6;
      *plVar5 = (long)puVar3;
      puVar4 = puVar3;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
        puVar4 = (undefined8 *)*plVar5;
      }
      func_0x000107c2b058(param_1[1],puVar4);
      param_1[2] = param_1[2] + 1;
      return puVar3;
    }
    uVar7 = param_2;
    FUN_10a003e3c(param_2,plVar1 + 4);
    plVar6 = plVar1;
    if (((uint)uVar7 >> 7 & 1) == 0) {
      plVar2 = plVar1 + 4;
      FUN_10a003e3c(plVar2,param_2);
      if (((uint)plVar2 >> 7 & 1) == 0) {
        if ((undefined8 *)*plVar5 != (undefined8 *)0x0) {
          return (undefined8 *)*plVar5;
        }
        goto LAB_10a477948;
      }
      plVar5 = plVar1 + 1;
      plVar1 = (long *)*plVar5;
      goto joined_r0x00010a4778f8;
    }
    plVar5 = plVar1;
    plVar1 = (long *)*plVar1;
  } while( true );
}



/* Entry: 10a4779f0; end: 10a477a6b;  */

long * FUN_10a4779f0(long param_1,undefined8 param_2)

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
      FUN_10a003e3c(plVar1,param_2);
      if (-1 < (char)plVar1) {
        plVar3 = plVar4;
      }
      plVar4 = *(long **)((long)plVar4 + ((ulong)plVar1 >> 4 & 8));
    } while (plVar4 != (long *)0x0);
    if ((plVar3 != plVar2) && (FUN_10a003e3c(param_2,plVar3 + 4), ((uint)param_2 >> 7 & 1) == 0)) {
      return plVar3;
    }
  }
  return plVar2;
}



/* Entry: 10a477a6c; end: 10a477acf;  */

long FUN_10a477a6c(long param_1,long param_2)

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



/* Entry: 10a477ad0; end: 10a477e4b;  */

void FUN_10a477ad0(undefined4 *param_1,long param_2,long param_3,long param_4,long *param_5,
                  long param_6)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *unaff_x27;
  long lVar7;
  int aiStack_b8 [2];
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long **pplStack_68;
  
  plStack_a0 = (long *)0x0;
  plStack_98 = (long *)0x0;
  plStack_90 = (long *)0x0;
  if (param_5 != (long *)0x0) {
    if ((long *)0xaaaaaaaaaaaaaaa < param_5) {
      FUN_10a477e4c();
      goto LAB_10a477dcc;
    }
    pplStack_68 = &plStack_a0;
    plVar6 = param_5;
    FUN_10a477e60();
    plVar3 = (long *)((long)plVar6 + ((long)plStack_a0 - (long)plStack_98));
    plStack_88 = plVar6;
    plStack_80 = plVar6;
    plStack_78 = plVar6;
    plStack_70 = plVar6 + param_3 * 3;
    FUN_10a477ea4(plStack_a0,plStack_98,plVar3);
    plStack_88 = plStack_a0;
    plStack_78 = plStack_a0;
    plStack_70 = plStack_90;
    plStack_80 = plStack_a0;
    plStack_a0 = plVar3;
    plStack_98 = plVar6;
    plStack_90 = plVar6 + param_3 * 3;
    FUN_10a477f24(&plStack_88);
    do {
      lVar4 = param_2;
      func_0x0001098849a4(aiStack_b8,param_2,param_4);
      plVar3 = plStack_b0;
      iVar1 = aiStack_b8[0];
      if (aiStack_b8[0] == 3) {
        plStack_a8 = plStack_b0;
        unaff_x27 = plVar3;
      }
      else if (aiStack_b8[0] == 2) {
        plStack_a8 = (long *)CONCAT71(plStack_a8._1_7_,plStack_b0._0_1_);
        unaff_x27 = (long *)((ulong)plStack_b0 & 0xff);
      }
      else if (3 < aiStack_b8[0]) {
        plStack_b0 = (long *)0x0;
        plStack_a8 = plVar3;
        unaff_x27 = plVar3;
      }
      aiStack_b8[0] = 0;
      if (plStack_98 < plStack_90) {
        *plStack_98 = param_2;
        *(int *)(plStack_98 + 1) = iVar1;
        if (iVar1 == 3) {
          plStack_98[2] = (long)plStack_a8;
        }
        else if (iVar1 == 2) {
          *(char *)(plStack_98 + 2) = (char)unaff_x27;
        }
        else if (3 < iVar1) {
          plStack_98[2] = (long)plStack_a8;
          plStack_a8 = (long *)0x0;
        }
        unaff_x27 = plStack_98 + 3;
      }
      else {
        lVar7 = (long)plStack_98 - (long)plStack_a0;
        plVar3 = (long *)((lVar7 >> 3) * -0x5555555555555555 + 1);
        if ((long *)0xaaaaaaaaaaaaaaa < plVar3) {
          FUN_10a477e4c();
          goto LAB_10a477dcc;
        }
        lVar5 = (long)plStack_90 - (long)plStack_a0 >> 3;
        plVar6 = (long *)(lVar5 * 0x5555555555555556);
        if (plVar6 < plVar3 || (long)plVar6 - (long)plVar3 == 0) {
          plVar6 = plVar3;
        }
        if (0x555555555555554 < (ulong)(lVar5 * -0x5555555555555555)) {
          plVar6 = (long *)0xaaaaaaaaaaaaaaa;
        }
        pplStack_68 = &plStack_a0;
        if (plVar6 == (long *)0x0) {
          lVar4 = 0;
        }
        else {
          FUN_10a477e60();
        }
        plStack_80 = (long *)((long)plVar6 + lVar7);
        *plStack_80 = param_2;
        *(int *)(plStack_80 + 1) = iVar1;
        if (iVar1 == 3) {
          plStack_80[2] = (long)plStack_a8;
        }
        else if (iVar1 == 2) {
          *(char *)(plStack_80 + 2) = (char)unaff_x27;
        }
        else if (3 < iVar1) {
          plStack_80[2] = (long)plStack_a8;
          plStack_a8 = (long *)0x0;
        }
        unaff_x27 = plStack_80 + 3;
        plVar3 = (long *)((long)plStack_80 + ((long)plStack_a0 - (long)plStack_98));
        plStack_88 = plVar6;
        plStack_78 = unaff_x27;
        plStack_70 = plVar6 + lVar4 * 3;
        FUN_10a477ea4(plStack_a0,plStack_98,plVar3);
        plStack_88 = plStack_a0;
        plStack_78 = plStack_a0;
        plStack_70 = plStack_90;
        plStack_80 = plStack_a0;
        plStack_a0 = plVar3;
        plStack_98 = unaff_x27;
        plStack_90 = plVar6 + lVar4 * 3;
        FUN_10a477f24(&plStack_88);
      }
      plStack_98 = unaff_x27;
      if ((3 < aiStack_b8[0]) && (plStack_b0 != (long *)0x0)) {
        (**(code **)*plStack_b0)();
      }
      param_4 = param_4 + 0x10;
      param_5 = (long *)((long)param_5 + -1);
    } while (param_5 != (long *)0x0);
  }
  plStack_80 = (long *)(((long)plStack_98 - (long)plStack_a0 >> 3) * -0x5555555555555555);
  plVar3 = *(long **)(param_6 + 0x28);
  plStack_88 = plStack_a0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x30))(plVar3,&plStack_88);
    *param_1 = 0;
    FUN_10a477f94(&plStack_a0);
    return;
  }
  FUN_10a06186c();
LAB_10a477dcc:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a477dd0);
  (*pcVar2)();
}



/* Entry: 10a477e4c; end: 10a477e5f;  */

void FUN_10a477e4c(undefined8 param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((undefined *)0xaaaaaaaaaaaaaaa < puVar1) {
    func_0x000109ffded8();
    puVar2 = puVar1;
    if (puVar1 != param_2) {
      do {
        func_0x000109887f70(param_3,puVar2);
        puVar2 = puVar2 + 0x18;
        param_3 = param_3 + 0x18;
      } while (puVar2 != param_2);
      do {
        if ((3 < *(int *)(puVar1 + 8)) && (*(undefined8 **)(puVar1 + 0x10) != (undefined8 *)0x0)) {
          (**(code **)**(undefined8 **)(puVar1 + 0x10))();
        }
        puVar1 = puVar1 + 0x18;
      } while (puVar1 != param_2);
    }
    return;
  }
  __Znwm((long)puVar1 * 0x18);
  return;
}



/* Entry: 10a477e60; end: 10a477ea3;  */

void FUN_10a477e60(ulong param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  
  if (0xaaaaaaaaaaaaaaa < param_1) {
    func_0x000109ffded8();
    uVar1 = param_1;
    if (param_1 != param_2) {
      do {
        func_0x000109887f70(param_3,uVar1);
        uVar1 = uVar1 + 0x18;
        param_3 = param_3 + 0x18;
      } while (uVar1 != param_2);
      do {
        if ((3 < *(int *)(param_1 + 8)) && (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0))
        {
          (**(code **)**(undefined8 **)(param_1 + 0x10))();
        }
        param_1 = param_1 + 0x18;
      } while (param_1 != param_2);
    }
    return;
  }
  __Znwm(param_1 * 0x18);
  return;
}



/* Entry: 10a477ea4; end: 10a477f23;  */

void FUN_10a477ea4(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  if (param_1 != param_2) {
    do {
      func_0x000109887f70(param_3,lVar1);
      lVar1 = lVar1 + 0x18;
      param_3 = param_3 + 0x18;
    } while (lVar1 != param_2);
    do {
      if ((3 < *(int *)(param_1 + 8)) && (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0)) {
        (**(code **)**(undefined8 **)(param_1 + 0x10))();
      }
      param_1 = param_1 + 0x18;
    } while (param_1 != param_2);
  }
  return;
}



/* Entry: 10a477f24; end: 10a477f93;  */

long * FUN_10a477f24(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[1];
  lVar3 = param_1[2];
  while (lVar2 = lVar3, lVar2 != lVar1) {
    lVar3 = lVar2 + -0x18;
    param_1[2] = lVar3;
    if ((3 < *(int *)(lVar2 + -0x10)) && (*(undefined8 **)(lVar2 + -8) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)(lVar2 + -8))();
      lVar3 = param_1[2];
    }
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a477f94; end: 10a478013;  */

void FUN_10a477f94(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    lVar1 = lVar2;
    if (lVar3 != lVar2) {
      do {
        if ((3 < *(int *)(lVar3 + -0x10)) && (*(undefined8 **)(lVar3 + -8) != (undefined8 *)0x0)) {
          (**(code **)**(undefined8 **)(lVar3 + -8))();
        }
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != lVar2);
      lVar1 = *param_1;
    }
    param_1[1] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a478014; end: 10a47805f;  */

void FUN_10a478014(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x20);
  if (plVar1 == (long *)(param_1 + 8)) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar2 = 0x28;
  }
                    /* WARNING: Could not recover jumptable at 0x00010a47803c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + lVar2))();
  return;
}



/* Entry: 10a478060; end: 10a478093;  */

void FUN_10a478060(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_110bdd3b8;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10a478094; end: 10a4780d7;  */

void FUN_10a478094(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_110bdd3b8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10a4780d8; end: 10a478113;  */

long FUN_10a4780d8(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bdd428);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a478114; end: 10a478127;  */

undefined ** FUN_10a478114(void)

{
  return &PTR_DAT_110bdd428;
}



/* Entry: 10a478128; end: 10a47815b;  */

void FUN_10a478128(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_110bdd448;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10a47815c; end: 10a47819f;  */

void FUN_10a47815c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_110bdd448;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10a4781a0; end: 10a4781db;  */

long FUN_10a4781a0(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bdd4a8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a4781dc; end: 10a4781ef;  */

undefined ** FUN_10a4781dc(void)

{
  return &PTR_DAT_110bdd4a8;
}



/* Entry: 10a4781f0; end: 10a478223;  */

void FUN_10a4781f0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_110bdd4c8;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10a478224; end: 10a478267;  */

void FUN_10a478224(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_110bdd4c8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10a478268; end: 10a4782a3;  */

long FUN_10a478268(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bdd528);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a4782a4; end: 10a4782b7;  */

undefined ** FUN_10a4782a4(void)

{
  return &PTR_DAT_110bdd528;
}



/* Entry: 10a4782b8; end: 10a4782eb;  */

void FUN_10a4782b8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_110bdd548;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10a4782ec; end: 10a47832f;  */

void FUN_10a4782ec(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_110bdd548;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10a478330; end: 10a47836b;  */

long FUN_10a478330(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bdd5a8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a47836c; end: 10a47837f;  */

undefined ** FUN_10a47836c(void)

{
  return &PTR_DAT_110bdd5a8;
}



/* Entry: 10a478380; end: 10a4783b3;  */

void FUN_10a478380(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_110bdd5c8;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10a4783b4; end: 10a4783f7;  */

void FUN_10a4783b4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_110bdd5c8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10a4783f8; end: 10a478433;  */

long FUN_10a4783f8(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bdd628);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a478434; end: 10a478447;  */

undefined ** FUN_10a478434(void)

{
  return &PTR_DAT_110bdd628;
}



/* Entry: 10a478448; end: 10a47847b;  */

void FUN_10a478448(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_110bdd648;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10a47847c; end: 10a478497;  */

void FUN_10a47847c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_110bdd648;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10a478498; end: 10a478927;  */

long FUN_10a478498(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined1 *puVar5;
  undefined8 *****pppppuVar6;
  undefined4 uVar7;
  undefined **ppuVar8;
  long *plVar9;
  undefined ***pppuVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined ***unaff_x22;
  long lVar13;
  long lVar14;
  undefined8 ****ppppuStack_220;
  ulong uStack_218;
  byte bStack_209;
  long alStack_208 [2];
  char cStack_1f1;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined1 uStack_1b0;
  undefined7 uStack_1af;
  ulong uStack_1a8;
  byte bStack_199;
  long lStack_198;
  long lStack_190;
  undefined **ppuStack_180;
  undefined8 *puStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined1 auStack_160 [56];
  undefined8 uStack_128;
  char cStack_111;
  undefined **appuStack_100 [19];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar12 = *(undefined ***)(param_1 + 8);
  if (ppuVar12 != (undefined **)0x0) {
    uVar2 = *param_2;
    uVar3 = param_2[1];
    ppuVar8 = &PTR___tlv_bootstrap_11340df48;
    (*(code *)PTR___tlv_bootstrap_11340df48)();
    if (*ppuVar8 != (undefined *)0x0) {
      unaff_x22 = &ppuStack_180;
      FUN_10a3dc3dc(&ppuStack_180);
      if (*(char *)(puStack_178 + 1) == '\x01') {
        (*(code *)ppuStack_180)(&DAT_10f35cf1f,5,uVar2,uVar3,&ppuStack_180);
      }
      (*(code *)*puStack_178)(&puStack_178);
    }
    FUN_10a453dc8(alStack_208,uVar2,uVar3);
    plVar9 = alStack_208;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (plVar9,&DAT_10f68f57e,1);
    lStack_1e8 = plVar9[1];
    lStack_1f0 = *plVar9;
    lStack_1e0 = plVar9[2];
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = 0;
    ppuStack_180 = ppuVar12;
    func_0x00010989a8b0(&lStack_198,&ppuStack_180,10);
    if (lStack_198 == lStack_190) {
      func_0x000107c2b054(&ppppuStack_220,"");
    }
    else {
      FUN_109febc44(&ppuStack_180);
      if (lStack_190 != lStack_198) {
        unaff_x22 = (undefined ***)0x0;
        lVar13 = 0x34;
        lVar11 = lStack_190;
        lVar14 = lStack_198;
        do {
          cVar4 = *(char *)(lVar14 + lVar13 + -0x1d);
          if (cVar4 < '\0') {
            if (*(long *)(lVar14 + lVar13 + -0x2c) != 0) goto LAB_10a4785e8;
          }
          else if (cVar4 != '\0') {
LAB_10a4785e8:
            lVar11 = lVar14 + lVar13;
            uVar1 = *(ulong *)(lVar11 + -0x14);
            plVar9 = (long *)*(long *)(lVar11 + -0x1c);
            if (-1 < (char)*(byte *)(lVar11 + -5)) {
              uVar1 = (ulong)*(byte *)(lVar11 + -5);
              plVar9 = (long *)(lVar11 + -0x1c);
            }
            pppuVar10 = &ppuStack_170;
            FUN_10a002568(pppuVar10,plVar9,uVar1);
            FUN_10a002568();
            FUN_10a002568();
            uStack_1b0 = 0x3a;
            FUN_10a002568();
            if (*(char *)(lVar14 + lVar13) == '\x01') {
              uVar7 = *(undefined4 *)(lVar14 + lVar13 + -4);
            }
            else {
              uVar7 = 0;
            }
            __ZNSt3__19to_stringEi(&uStack_1b0,uVar7);
            uVar1 = uStack_1a8;
            puVar5 = (undefined1 *)CONCAT71(uStack_1af,uStack_1b0);
            if (-1 < (char)bStack_199) {
              uVar1 = (ulong)bStack_199;
              puVar5 = &uStack_1b0;
            }
            FUN_10a002568(pppuVar10,puVar5,uVar1);
            FUN_10a002568();
            lVar11 = lStack_190;
            lVar14 = lStack_198;
            if ((char)bStack_199 < '\0') {
              __ZdlPv(CONCAT71(uStack_1af,uStack_1b0));
              lVar11 = lStack_190;
              lVar14 = lStack_198;
            }
          }
          unaff_x22 = (undefined ***)((long)unaff_x22 + 1);
          lVar13 = lVar13 + 0x40;
        } while (unaff_x22 < (undefined ***)(lVar11 - lVar14 >> 6));
      }
      func_0x00010a002480(&ppppuStack_220,&ppuStack_168,&uStack_1b0);
      ppuStack_180 = &PTR_SUB_1108a5a38;
      ppuStack_170 = &PTR_DAT_1108a5a60;
      appuStack_100[0] = &PTR_DAT_1108a5a88;
      ppuStack_168 = &PTR_DAT_11088d7b0;
      if (cStack_111 < '\0') {
        __ZdlPv(uStack_128);
      }
      ppuStack_168 = (undefined **)
                     (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
      __ZNSt3__16localeD1Ev(auStack_160);
      __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_180,&PTR_PTR_1108a5aa0);
      __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_100);
    }
    FUN_10a472960(&lStack_198);
    pppppuVar6 = (undefined8 *****)ppppuStack_220;
    if (-1 < (char)bStack_209) {
      uStack_218 = (ulong)bStack_209;
      pppppuVar6 = &ppppuStack_220;
    }
    plVar9 = &lStack_1f0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (plVar9,pppppuVar6,uStack_218);
    lStack_1c8 = plVar9[1];
    lStack_1d0 = *plVar9;
    lStack_1c0 = plVar9[2];
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = 0;
    if ((char)bStack_209 < '\0') {
      __ZdlPv(ppppuStack_220);
    }
    if (lStack_1e0 < 0) {
      __ZdlPv(lStack_1f0);
    }
    if (cStack_1f1 < '\0') {
      __ZdlPv(alStack_208[0]);
    }
    param_1 = 1;
    param_2 = (undefined8 *)0x14;
    func_0x00010ae06f08();
    if (lStack_1c0 < 0) {
      param_1 = lStack_1d0;
      __ZdlPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    (*(code *)*puStack_178)(unaff_x22 + 1);
    __Unwind_Resume(param_1);
    FUN_10a042ab0(param_2,&PTR_DAT_110bdd6a8);
    param_1 = param_1 + 8;
    if ((int)param_2 == 0) {
      param_1 = 0;
    }
    return param_1;
  }
  return param_1;
}



/* Entry: 10a478928; end: 10a478963;  */

long FUN_10a478928(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bdd6a8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a478964; end: 10a478977;  */

undefined ** FUN_10a478964(void)

{
  return &PTR_DAT_110bdd6a8;
}



/* Entry: 10a478978; end: 10a4789ab;  */

void FUN_10a478978(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_110bdd6c8;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10a4789ac; end: 10a4789c7;  */

void FUN_10a4789ac(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_110bdd6c8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10a4789c8; end: 10a478ceb;  */

/* WARNING: Removing unreachable block (ram,0x00010a478a30) */
/* WARNING: Removing unreachable block (ram,0x00010a478c70) */

void FUN_10a4789c8(long param_1,undefined8 *param_2)

{
  undefined *****pppppuVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *****pppppuVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  long lVar7;
  undefined ****ppppuStack_190;
  ulong uStack_188;
  byte bStack_179;
  undefined **ppuStack_178;
  undefined8 uStack_170;
  undefined ***pppuStack_168;
  undefined **ppuStack_160;
  undefined1 auStack_158 [56];
  undefined8 uStack_120;
  char cStack_109;
  undefined **appuStack_f8 [19];
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined ***pppuStack_50;
  undefined1 uStack_41;
  
  lVar6 = *(long *)(param_1 + 8);
  if (lVar6 != 0) {
    uVar2 = *param_2;
    lVar4 = param_2[1];
    ppuVar3 = &PTR___tlv_bootstrap_11340df48;
    (*(code *)PTR___tlv_bootstrap_11340df48)();
    lVar7 = *(long *)(*ppuVar3 + 0x850);
    func_0x000107c2b054(&ppuStack_60,"default");
    if (lVar4 != 0) {
      FUN_10a455384(&ppuStack_178,uVar2);
      uStack_58 = uStack_170;
      ppuStack_60 = ppuStack_178;
      pppuStack_50 = pppuStack_168;
    }
    FUN_109febc44(&ppuStack_178);
    lVar4 = lVar7 + 0x38;
    FUN_10a4779f0(lVar4,&ppuStack_60);
    if (lVar7 + 0x40 == lVar4) {
      FUN_10a4551bc(&ppppuStack_190,lVar6);
      pppppuVar1 = (undefined *****)ppppuStack_190;
      if (-1 < (char)bStack_179) {
        uStack_188 = (ulong)bStack_179;
        pppppuVar1 = &ppppuStack_190;
      }
      pppppuVar5 = (undefined *****)&pppuStack_168;
      FUN_10a002568(pppppuVar5,pppppuVar1,uStack_188);
      FUN_10a002568();
      FUN_10a002568();
      FUN_10a002568();
    }
    else {
      FUN_10a4551bc(&ppppuStack_190,lVar6);
      pppppuVar1 = (undefined *****)ppppuStack_190;
      if (-1 < (char)bStack_179) {
        uStack_188 = (ulong)bStack_179;
        pppppuVar1 = &ppppuStack_190;
      }
      pppppuVar5 = (undefined *****)&pppuStack_168;
      FUN_10a002568(pppppuVar5,pppppuVar1,uStack_188);
      FUN_10a002568();
      FUN_10a002568();
      FUN_10a002568();
    }
    if ((char)bStack_179 < '\0') {
      pppppuVar5 = (undefined *****)ppppuStack_190;
      __ZdlPv();
    }
    lVar6 = *(long *)(*ppuVar3 + 0x850);
    __ZNSt3__16chrono12steady_clock3nowEv();
    lVar6 = *(long *)(lVar6 + 0x20);
    lVar7 = lVar7 + 0x38;
    FUN_10a4778d4(lVar7,&ppuStack_60,&ppuStack_60);
    *(long *)(lVar7 + 0x38) = (long)pppppuVar5 - lVar6;
    func_0x00010a002480(&ppppuStack_190,&ppuStack_160,&uStack_41);
    pppppuVar1 = (undefined *****)ppppuStack_190;
    if (-1 < (char)bStack_179) {
      pppppuVar1 = &ppppuStack_190;
    }
    func_0x00010ae06f08(1,0x14,"","",0xffffffff,"%s",in_x6,in_x7,pppppuVar1);
    if ((char)bStack_179 < '\0') {
      __ZdlPv(ppppuStack_190);
    }
    ppuStack_178 = &PTR_SUB_1108a5a38;
    pppuStack_168 = (undefined ***)&PTR_DAT_1108a5a60;
    appuStack_f8[0] = &PTR_DAT_1108a5a88;
    ppuStack_160 = &PTR_DAT_11088d7b0;
    if (cStack_109 < '\0') {
      __ZdlPv(uStack_120);
    }
    ppuStack_160 = (undefined **)
                   (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
    __ZNSt3__16localeD1Ev(auStack_158);
    __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_178,&PTR_PTR_1108a5aa0);
    __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_f8);
  }
  return;
}



/* Entry: 10a478cec; end: 10a478d27;  */

long FUN_10a478cec(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bdd728);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a478d28; end: 10a478d3b;  */

undefined ** FUN_10a478d28(void)

{
  return &PTR_DAT_110bdd728;
}



/* Entry: 10a478d3c; end: 10a478d6f;  */

void FUN_10a478d3c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_110bdd748;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10a478d70; end: 10a478d8b;  */

void FUN_10a478d70(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_110bdd748;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10a478d8c; end: 10a479217;  */

/* WARNING: Removing unreachable block (ram,0x00010a478df8) */
/* WARNING: Removing unreachable block (ram,0x00010a47915c) */

void FUN_10a478d8c(long param_1,long *param_2)

{
  undefined8 ****ppppuVar1;
  long lVar2;
  ulong uVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined ***pppuVar6;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 ***pppuStack_1d0;
  ulong uStack_1c8;
  byte bStack_1b9;
  undefined8 ***pppuStack_1b8;
  ulong uStack_1b0;
  undefined7 uStack_1a8;
  byte bStack_1a1;
  undefined8 ***pppuStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  undefined **ppuStack_188;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined1 auStack_168 [56];
  undefined8 uStack_130;
  char cStack_119;
  undefined **appuStack_108 [19];
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  
  lVar7 = *(long *)(param_1 + 8);
  if (lVar7 != 0) {
    lVar2 = *param_2;
    uVar3 = param_2[1];
    ppuVar4 = &PTR___tlv_bootstrap_11340df48;
    (*(code *)PTR___tlv_bootstrap_11340df48)();
    lVar8 = *(long *)(*ppuVar4 + 0x850);
    func_0x000107c2b054(&ppuStack_70,"default");
    if (uVar3 != 0) {
      FUN_10a455384(&ppuStack_188,lVar2);
      uStack_68 = uStack_180;
      ppuStack_70 = ppuStack_188;
      ppuStack_60 = ppuStack_178;
    }
    FUN_109febc44(&ppuStack_188);
    lVar5 = lVar8 + 0x38;
    FUN_10a4779f0(lVar5,&ppuStack_70);
    if (lVar8 + 0x40 == lVar5) {
      FUN_10a4551bc(&pppuStack_1a0,lVar7);
      uVar3 = uStack_198;
      ppppuVar1 = (undefined8 ****)pppuStack_1a0;
      if (-1 < (long)uStack_190) {
        uVar3 = uStack_190 >> 0x38;
        ppppuVar1 = &pppuStack_1a0;
      }
      FUN_10a002568(&ppuStack_178,ppppuVar1,uVar3);
      FUN_10a002568();
      FUN_10a002568();
      FUN_10a002568();
      if ((long)uStack_190 < 0) {
        __ZdlPv(pppuStack_1a0);
      }
      func_0x00010a002480(&pppuStack_1a0,&ppuStack_170,&pppuStack_1b8);
      ppppuVar1 = (undefined8 ****)pppuStack_1a0;
      if (-1 < (long)uStack_190) {
        ppppuVar1 = &pppuStack_1a0;
      }
      func_0x00010ae06f08(1,0x12,"","",0xffffffff,"%s",in_x6,in_x7,ppppuVar1);
    }
    else {
      lVar8 = *(long *)(*ppuVar4 + 0x850);
      __ZNSt3__16chrono12steady_clock3nowEv();
      lVar9 = *(long *)(lVar8 + 0x20);
      lVar8 = lVar8 + 0x38;
      FUN_10a4778d4(lVar8,&ppuStack_70,&ppuStack_70);
      lVar8 = *(long *)(lVar8 + 0x38);
      pppuStack_1a0 = (undefined8 ****)0x0;
      uStack_198 = 0;
      uStack_190 = 0;
      if (1 < uVar3) {
        FUN_10a453dc8(&pppuStack_1b8,lVar2 + 0x18,uVar3 - 1);
        if ((long)uStack_190 < 0) {
          __ZdlPv(pppuStack_1a0);
        }
        uStack_198 = uStack_1b0;
        pppuStack_1a0 = pppuStack_1b8;
        uStack_190 = CONCAT17(bStack_1a1,uStack_1a8);
      }
      FUN_10a4551bc(&pppuStack_1b8,lVar7);
      ppppuVar1 = (undefined8 ****)pppuStack_1b8;
      if (-1 < (char)bStack_1a1) {
        uStack_1b0 = (ulong)bStack_1a1;
        ppppuVar1 = &pppuStack_1b8;
      }
      pppuVar6 = &ppuStack_178;
      FUN_10a002568(pppuVar6,ppppuVar1,uStack_1b0);
      FUN_10a002568();
      FUN_10a002568();
      FUN_10a4553f8(&pppuStack_1d0,(lVar5 - lVar9) - lVar8);
      ppppuVar1 = (undefined8 ****)pppuStack_1d0;
      if (-1 < (char)bStack_1b9) {
        uStack_1c8 = (ulong)bStack_1b9;
        ppppuVar1 = &pppuStack_1d0;
      }
      FUN_10a002568(pppuVar6,ppppuVar1,uStack_1c8);
      FUN_10a002568();
      FUN_10a002568();
      FUN_10a002568();
      if ((char)bStack_1b9 < '\0') {
        __ZdlPv(pppuStack_1d0);
      }
      if ((char)bStack_1a1 < '\0') {
        __ZdlPv(pppuStack_1b8);
      }
      func_0x00010a002480(&pppuStack_1b8,&ppuStack_170,&pppuStack_1d0);
      ppppuVar1 = (undefined8 ****)pppuStack_1b8;
      if (-1 < (char)bStack_1a1) {
        ppppuVar1 = &pppuStack_1b8;
      }
      func_0x00010ae06f08(1,0x14,"","",0xffffffff,"%s",in_x6,in_x7,ppppuVar1);
      if ((char)bStack_1a1 < '\0') {
        __ZdlPv(pppuStack_1b8);
      }
    }
    if ((long)uStack_190 < 0) {
      __ZdlPv(pppuStack_1a0);
    }
    ppuStack_188 = &PTR_SUB_1108a5a38;
    ppuStack_178 = &PTR_DAT_1108a5a60;
    appuStack_108[0] = &PTR_DAT_1108a5a88;
    ppuStack_170 = &PTR_DAT_11088d7b0;
    if (cStack_119 < '\0') {
      __ZdlPv(uStack_130);
    }
    ppuStack_170 = (undefined **)
                   (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
    __ZNSt3__16localeD1Ev(auStack_168);
    __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_188,&PTR_PTR_1108a5aa0);
    __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_108);
  }
  return;
}



/* Entry: 10a479218; end: 10a479253;  */

long FUN_10a479218(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bdd7a8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a479254; end: 10a479267;  */

undefined ** FUN_10a479254(void)

{
  return &PTR_DAT_110bdd7a8;
}



/* Entry: 10a479268; end: 10a47929b;  */

void FUN_10a479268(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_110bdd7c8;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10a47929c; end: 10a4792b7;  */

void FUN_10a47929c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_110bdd7c8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10a4792b8; end: 10a47976b;  */

/* WARNING: Removing unreachable block (ram,0x00010a479328) */
/* WARNING: Removing unreachable block (ram,0x00010a4796c4) */

void FUN_10a4792b8(long param_1,undefined8 *param_2)

{
  undefined8 ****ppppuVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined **ppuVar4;
  long *plVar5;
  undefined ***pppuVar6;
  undefined8 in_x6;
  undefined8 in_x7;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 ***pppuStack_1c8;
  ulong uStack_1c0;
  byte bStack_1b1;
  undefined8 ***pppuStack_1b0;
  ulong uStack_1a8;
  byte bStack_199;
  undefined **ppuStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined1 auStack_178 [56];
  undefined8 uStack_140;
  char cStack_129;
  undefined **appuStack_118 [19];
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  
  lVar9 = *(long *)(param_1 + 8);
  if (lVar9 != 0) {
    uVar2 = *param_2;
    lVar10 = param_2[1];
    ppuVar4 = &PTR___tlv_bootstrap_11340df48;
    (*(code *)PTR___tlv_bootstrap_11340df48)();
    lVar13 = *(long *)(*ppuVar4 + 0x850);
    func_0x000107c2b054(&ppuStack_80,"default");
    if (lVar10 != 0) {
      FUN_10a455384(&ppuStack_198,uVar2);
      uStack_78 = uStack_190;
      ppuStack_80 = ppuStack_198;
      ppuStack_70 = ppuStack_188;
    }
    FUN_109febc44(&ppuStack_198);
    plVar5 = (long *)(lVar13 + 0x38);
    FUN_10a4779f0(plVar5,&ppuStack_80);
    plVar8 = (long *)(lVar13 + 0x40);
    if (plVar8 == plVar5) {
      FUN_10a4551bc(&pppuStack_1b0,lVar9);
      ppppuVar1 = (undefined8 ****)pppuStack_1b0;
      if (-1 < (char)bStack_199) {
        uStack_1a8 = (ulong)bStack_199;
        ppppuVar1 = &pppuStack_1b0;
      }
      FUN_10a002568(&ppuStack_188,ppppuVar1,uStack_1a8);
      FUN_10a002568();
      FUN_10a002568();
      FUN_10a002568();
      if ((char)bStack_199 < '\0') {
        __ZdlPv(pppuStack_1b0);
      }
      func_0x00010a002480(&pppuStack_1b0,&ppuStack_180,&pppuStack_1c8);
      ppppuVar1 = (undefined8 ****)pppuStack_1b0;
      if (-1 < (char)bStack_199) {
        ppppuVar1 = &pppuStack_1b0;
      }
      func_0x00010ae06f08(1,0x12,"","",0xffffffff,"%s",in_x6,in_x7,ppppuVar1);
    }
    else {
      lVar10 = *(long *)(*ppuVar4 + 0x850);
      __ZNSt3__16chrono12steady_clock3nowEv();
      lVar12 = *(long *)(lVar10 + 0x20);
      lVar10 = lVar10 + 0x38;
      FUN_10a4778d4(lVar10,&ppuStack_80,&ppuStack_80);
      lVar10 = *(long *)(lVar10 + 0x38);
      plVar14 = (long *)*plVar8;
      plVar11 = plVar8;
      if (plVar14 != (long *)0x0) {
        do {
          plVar7 = plVar14 + 4;
          FUN_10a003e3c(plVar7,&ppuStack_80);
          if (-1 < (char)plVar7) {
            plVar11 = plVar14;
          }
          plVar14 = *(long **)((long)plVar14 + ((ulong)plVar7 >> 4 & 8));
        } while (plVar14 != (long *)0x0);
        if (plVar11 != plVar8) {
          pppuVar6 = &ppuStack_80;
          FUN_10a003e3c(pppuVar6,plVar11 + 4);
          if (((uint)pppuVar6 >> 7 & 1) == 0) {
            plVar8 = plVar11;
            plVar14 = (long *)plVar11[1];
            if ((long *)plVar11[1] == (long *)0x0) {
              do {
                plVar7 = (long *)plVar8[2];
                bVar3 = (long *)*plVar7 != plVar8;
                plVar8 = plVar7;
              } while (bVar3);
            }
            else {
              do {
                plVar7 = plVar14;
                plVar14 = (long *)*plVar7;
              } while ((long *)*plVar7 != (long *)0x0);
            }
            if (*(long **)(lVar13 + 0x38) == plVar11) {
              *(long **)(lVar13 + 0x38) = plVar7;
            }
            *(long *)(lVar13 + 0x48) = *(long *)(lVar13 + 0x48) + -1;
            FUN_10a04815c(*(undefined8 *)(lVar13 + 0x40),plVar11);
            if (*(char *)((long)plVar11 + 0x37) < '\0') {
              __ZdlPv(plVar11[4]);
            }
            __ZdlPv(plVar11);
          }
        }
      }
      FUN_10a4551bc(&pppuStack_1b0,lVar9);
      ppppuVar1 = (undefined8 ****)pppuStack_1b0;
      if (-1 < (char)bStack_199) {
        uStack_1a8 = (ulong)bStack_199;
        ppppuVar1 = &pppuStack_1b0;
      }
      pppuVar6 = &ppuStack_188;
      FUN_10a002568(pppuVar6,ppppuVar1,uStack_1a8);
      FUN_10a002568();
      FUN_10a002568();
      FUN_10a4553f8(&pppuStack_1c8,(long)plVar5 - (lVar12 + lVar10));
      ppppuVar1 = (undefined8 ****)pppuStack_1c8;
      if (-1 < (char)bStack_1b1) {
        uStack_1c0 = (ulong)bStack_1b1;
        ppppuVar1 = &pppuStack_1c8;
      }
      FUN_10a002568(pppuVar6,ppppuVar1,uStack_1c0);
      FUN_10a002568();
      if ((char)bStack_1b1 < '\0') {
        __ZdlPv(pppuStack_1c8);
      }
      if ((char)bStack_199 < '\0') {
        __ZdlPv(pppuStack_1b0);
      }
      func_0x00010a002480(&pppuStack_1b0,&ppuStack_180,&pppuStack_1c8);
      ppppuVar1 = (undefined8 ****)pppuStack_1b0;
      if (-1 < (char)bStack_199) {
        ppppuVar1 = &pppuStack_1b0;
      }
      func_0x00010ae06f08(1,0x14,"","",0xffffffff,"%s",in_x6,in_x7,ppppuVar1);
    }
    if ((char)bStack_199 < '\0') {
      __ZdlPv(pppuStack_1b0);
    }
    ppuStack_198 = &PTR_SUB_1108a5a38;
    ppuStack_188 = &PTR_DAT_1108a5a60;
    appuStack_118[0] = &PTR_DAT_1108a5a88;
    ppuStack_180 = &PTR_DAT_11088d7b0;
    if (cStack_129 < '\0') {
      __ZdlPv(uStack_140);
    }
    ppuStack_180 = (undefined **)
                   (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
    __ZNSt3__16localeD1Ev(auStack_178);
    __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_198,&PTR_PTR_1108a5aa0);
    __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_118);
  }
  return;
}



/* Entry: 10a47976c; end: 10a4797a7;  */

long FUN_10a47976c(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bdd828);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a4797a8; end: 10a4797b3;  */

undefined ** FUN_10a4797a8(void)

{
  return &PTR_DAT_110bdd828;
}



/* Entry: 10a4797b4; end: 10a479923;  */

void FUN_10a4797b4(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4)

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
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  double dVar18;
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
  if ((*(byte *)(plVar3 + 0x3c) & 1) != 0) {
    if ((*param_4 == 3) && (param_4[4] == 3)) {
      dVar17 = *(double *)(param_4 + 2);
      dVar18 = *(double *)(param_4 + 6);
      plVar11 = (long *)plVar3[4];
      if (plVar11 == (long *)0x0) {
        func_0x000109899fd8(plVar3);
        plVar11 = (long *)plVar3[4];
      }
      fVar15 = (float)dVar18;
      if (0x7fefffffffffffff < (ulong)ABS(dVar18)) {
        fVar15 = 0.0;
      }
      fVar16 = (float)dVar17;
      if (0x7fefffffffffffff < (ulong)ABS(dVar17)) {
        fVar16 = 0.0;
      }
      plVar3[4] = *plVar11;
      plVar11[2] = 0;
      *plVar11 = (long)&PTR_FUN_110b9fae8;
      *(float *)(plVar11 + 1) = fVar16;
      *(float *)((long)plVar11 + 0xc) = fVar15;
      plVar4 = param_2;
      (**(code **)(*param_2 + 0x58))(param_2);
      (**(code **)(*param_2 + 0x2f8))(param_1 + 2,param_2,plVar11,plVar4,&UNK_10989ba24,param_3);
      *param_1 = 7;
      plVar11 = plVar3 + 0x4b;
      lVar5 = plVar3[0x59];
      uVar6 = lVar5 - 1;
      plVar3[0x59] = uVar6;
      if (uVar6 < 8) {
        uVar6 = plVar11[lVar5 + 2];
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
      lVar5 = *plVar11;
      lVar10 = plVar3[0x4c];
      lVar8 = lVar10 - lVar5;
      uVar13 = lVar8 >> 4;
      if (uVar13 < uVar6) {
        uVar14 = uVar6 - uVar13;
        lVar12 = plVar3[0x4d];
        if ((ulong)(lVar12 - lVar10 >> 4) < uVar14) {
          if (uVar6 >> 0x3c == 0) {
            uVar7 = lVar12 - lVar5 >> 3;
            if (uVar7 <= uVar6) {
              uVar7 = uVar6;
            }
            if (0x7fffffffffffffef < (ulong)(lVar12 - lVar5)) {
              uVar7 = 0xfffffffffffffff;
            }
            plStack_68 = plVar11;
            if (uVar7 >> 0x3c == 0) {
              lVar2 = uVar7 << 4;
              __Znwm();
              lVar10 = lVar2 + lVar8;
              _bzero(lVar10,uVar14 * 0x10);
              lVar9 = lVar10 + uVar13 * -0x10;
              _memcpy(lVar9,lVar5,lVar8);
              *plVar11 = lVar9;
              plVar3[0x4c] = lVar10 + uVar14 * 0x10;
              plVar3[0x4d] = lVar2 + uVar7 * 0x10;
              lStack_88 = lVar5;
              lStack_80 = lVar5;
              lStack_78 = lVar5;
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
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar1)();
        }
        _bzero(lVar10,uVar14 * 0x10);
        plVar3[0x4c] = lVar10 + uVar14 * 0x10;
      }
      else if (uVar6 < uVar13) {
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
    func_0x00010988bd28(&UNK_10f68f550);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a479910);
  (*pcVar1)();
}



/* Entry: 10a479924; end: 10a4799df;  */

void FUN_10a479924(undefined4 *param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  float *pfVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  float *pfVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  float *pfStack_68;
  
  pfVar5 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pfVar5 + 0xb2) < 8) {
    *(long *)(pfVar5 + *(ulong *)(pfVar5 + 0xb2) * 2 + 0x9c) = *(long *)(pfVar5 + 0xb4);
    *(long *)(pfVar5 + 0xb2) = *(long *)(pfVar5 + 0xb2) + 1;
  }
  else {
    func_0x00010988bfcc(pfVar5 + 0x96);
  }
  FUN_10a05a42c(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *param_2;
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
  pfVar1 = pfVar5 + 0x96;
  uVar6 = *(long *)(pfVar5 + 0xb2) - 1;
  *(ulong *)(pfVar5 + 0xb2) = uVar6;
  if (uVar6 < 8) {
    uVar6 = *(ulong *)(pfVar1 + uVar6 * 2 + 6);
    if (*(ulong *)(pfVar5 + 0xb4) == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(*(long *)(pfVar5 + 0xae) + -8);
    *(ulong **)(pfVar5 + 0xae) = (ulong *)(*(long *)(pfVar5 + 0xae) + -8);
    if (*(ulong *)(pfVar5 + 0xb4) == uVar6) {
      return;
    }
  }
  lVar2 = *(long *)pfVar1;
  lVar10 = *(long *)(pfVar5 + 0x98);
  lVar8 = lVar10 - lVar2;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = *(long *)(pfVar5 + 0x9a);
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar2 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar2)) {
          uVar7 = 0xfffffffffffffff;
        }
        pfStack_68 = pfVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar4 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar4 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar2,lVar8);
          *(long *)pfVar1 = lVar9;
          *(ulong *)(pfVar5 + 0x98) = lVar10 + uVar13 * 0x10;
          *(ulong *)(pfVar5 + 0x9a) = lVar4 + uVar7 * 0x10;
          lStack_88 = lVar2;
          lStack_80 = lVar2;
          lStack_78 = lVar2;
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
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    *(ulong *)(pfVar5 + 0x98) = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar2 = lVar2 + uVar6 * 0x10;
    while (lVar10 != lVar2) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    *(long *)(pfVar5 + 0x98) = lVar2;
  }
code_r0x00010988c138:
  *(ulong *)(pfVar5 + 0xb4) = uVar6;
  return;
}



/* Entry: 10a4799e0; end: 10a479acf;  */

void FUN_10a4799e0(undefined4 *param_1,float *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  float *pfVar1;
  long lVar2;
  float fVar3;
  code *pcVar4;
  long lVar5;
  float *pfVar6;
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
  float *pfStack_68;
  
  pfVar6 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pfVar6 + 0xb2) < 8) {
    *(long *)(pfVar6 + *(ulong *)(pfVar6 + 0xb2) * 2 + 0x9c) = *(long *)(pfVar6 + 0xb4);
    *(long *)(pfVar6 + 0xb2) = *(long *)(pfVar6 + 0xb2) + 1;
  }
  else {
    func_0x00010988bfcc(pfVar6 + 0x96);
  }
  FUN_10a05a42c(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a479abc);
    (*pcVar4)();
  }
  fVar3 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar3 = 0.0;
  }
  *param_2 = fVar3;
  *param_1 = 0;
  pfVar1 = pfVar6 + 0x96;
  uVar7 = *(long *)(pfVar6 + 0xb2) - 1;
  *(ulong *)(pfVar6 + 0xb2) = uVar7;
  if (uVar7 < 8) {
    uVar7 = *(ulong *)(pfVar1 + uVar7 * 2 + 6);
    if (*(ulong *)(pfVar6 + 0xb4) == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(*(long *)(pfVar6 + 0xae) + -8);
    *(ulong **)(pfVar6 + 0xae) = (ulong *)(*(long *)(pfVar6 + 0xae) + -8);
    if (*(ulong *)(pfVar6 + 0xb4) == uVar7) {
      return;
    }
  }
  lVar2 = *(long *)pfVar1;
  lVar11 = *(long *)(pfVar6 + 0x98);
  lVar9 = lVar11 - lVar2;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = *(long *)(pfVar6 + 0x9a);
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar2 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar2)) {
          uVar8 = 0xfffffffffffffff;
        }
        pfStack_68 = pfVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar5 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar5 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar2,lVar9);
          *(long *)pfVar1 = lVar10;
          *(ulong *)(pfVar6 + 0x98) = lVar11 + uVar14 * 0x10;
          *(ulong *)(pfVar6 + 0x9a) = lVar5 + uVar8 * 0x10;
          lStack_88 = lVar2;
          lStack_80 = lVar2;
          lStack_78 = lVar2;
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
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar4)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    *(ulong *)(pfVar6 + 0x98) = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar2 = lVar2 + uVar7 * 0x10;
    while (lVar11 != lVar2) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    *(long *)(pfVar6 + 0x98) = lVar2;
  }
code_r0x00010988c138:
  *(ulong *)(pfVar6 + 0xb4) = uVar7;
  return;
}



/* Entry: 10a479ad0; end: 10a479b63;  */

void FUN_10a479ad0(undefined4 *param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  int *param_5,undefined8 param_6)

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
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  float fVar15;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long *plStack_a8;
  
  uVar5 = param_4;
  FUN_10a05a42c(param_2,param_4);
  FUN_10a05ed04(param_6);
  if (*param_5 == 3) {
    fVar15 = (float)*(double *)(param_5 + 2);
    if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_5 + 2))) {
      fVar15 = 0.0;
    }
    (*param_3)(fVar15,param_2);
    *param_1 = 0;
    return;
  }
  plVar3 = (long *)&UNK_10f68f550;
  func_0x00010988bd28();
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a05a42c(plVar3,param_4);
  FUN_10a052e3c(uVar5);
  fVar15 = *(float *)((long)plVar3 + 4);
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)fVar15;
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
        plStack_a8 = plVar3;
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
          lStack_c8 = lVar6;
          lStack_c0 = lVar6;
          lStack_b8 = lVar6;
          lStack_b0 = lVar12;
          func_0x00010988c1b8(&lStack_c8);
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



/* Entry: 10a479b64; end: 10a479c1f;  */

void FUN_10a479b64(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  float fVar14;
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
  FUN_10a05a42c(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)((long)param_2 + 4);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
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



/* Entry: 10a479c20; end: 10a479d0f;  */

void FUN_10a479c20(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  float fVar2;
  code *pcVar3;
  long lVar4;
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
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a05a42c(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a479cfc);
    (*pcVar3)();
  }
  fVar2 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar2 = 0.0;
  }
  *(float *)((long)param_2 + 4) = fVar2;
  *param_1 = 0;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
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
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
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
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a479d10; end: 10a479e33;  */

void FUN_10a479d10(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  undefined8 in_stack_ffffffffffffffb8;
  
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
  FUN_10a05a42c(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a459c78(&stack0xffffffffffffffa0,plVar5);
  puVar1 = in_stack_ffffffffffffffa0;
  if (-1 < (long)in_stack_ffffffffffffffb0) {
    in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffb0 >> 0x38;
    puVar1 = &stack0xffffffffffffffa0;
  }
  (**(code **)(*param_2 + 0x128))(&stack0xffffffffffffffb8,param_2,puVar1,in_stack_ffffffffffffffa8)
  ;
  *param_1 = 6;
  *(undefined8 *)(param_1 + 2) = in_stack_ffffffffffffffb8;
  if ((long)in_stack_ffffffffffffffb0 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa0);
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



/* Entry: 10a479e34; end: 10a479f7f;  */

/* WARNING: Removing unreachable block (ram,0x00010a479efc) */
/* WARNING: Removing unreachable block (ram,0x00010a479f04) */

void FUN_10a479e34(undefined4 *param_1,long *param_2,undefined8 param_3,undefined1 *param_4,
                  ulong param_5)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
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
  FUN_10a05a42c(param_2,param_3);
  FUN_10a479f80(param_5);
  puVar1 = &stack0xffffffffffffffa0;
  if (param_5 != 0) {
    puVar1 = param_4;
  }
  plVar6 = param_2;
  func_0x00010a479fa8(param_2,puVar1);
  puVar1 = &stack0xffffffffffffffa0;
  if (1 < param_5) {
    puVar1 = param_4 + 0x10;
  }
  func_0x00010a479fa8(param_2,puVar1);
  if (((ulong)plVar6 >> 0x20 & 1) != 0) {
    *(int *)plVar5 = (int)plVar6;
  }
  if (((ulong)param_2 >> 0x20 & 1) != 0) {
    *(int *)((long)plVar5 + 4) = (int)param_2;
  }
  *param_1 = 0;
  plVar5 = plVar4 + 0x4b;
  lVar7 = plVar4[0x59];
  uVar8 = lVar7 - 1;
  plVar4[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar5[lVar7 + 2];
    if (plVar4[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar8) {
      return;
    }
  }
  lVar7 = *plVar5;
  lVar12 = plVar4[0x4c];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = plVar4[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar5;
        if (uVar9 >> 0x3c == 0) {
          lVar3 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar3 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar5 = lVar11;
          plVar4[0x4c] = lVar12 + uVar15 * 0x10;
          plVar4[0x4d] = lVar3 + uVar9 * 0x10;
          lStack_88 = lVar7;
          lStack_80 = lVar7;
          lStack_78 = lVar7;
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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar4[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar4[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar8;
  return;
}



/* Entry: 10a479f80; end: 10a47a007;  */

undefined * FUN_10a479f80(undefined *param_1)

{
  undefined *puVar1;
  uint *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (((uint)param_1 != 2) && (1 < (uint)param_1)) {
    puVar2 = (uint *)0x2;
    FUN_10a052ee0(2,2,param_1);
    if (*puVar2 < 2) {
      uVar3 = 0;
      uVar4 = 0;
    }
    else {
      if (*puVar2 != 3) {
        puVar1 = &UNK_10f68f550;
        func_0x00010988bd28();
        return puVar1;
      }
      uVar4 = (ulong)(uint)(float)*(double *)(puVar2 + 2);
      if (0x7fefffffffffffff < (ulong)ABS(*(double *)(puVar2 + 2))) {
        uVar4 = 0;
      }
      uVar3 = 0x100000000;
    }
    return (undefined *)(uVar4 | uVar3);
  }
  return param_1;
}



/* Entry: 10a47a008; end: 10a47a27f;  */

float FUN_10a47a008(float param_1,float *param_2)

{
  return param_1 * *param_2;
}



/* Entry: 10a47a280; end: 10a47a4c3;  */

ulong * FUN_10a47a280(ulong *param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *param_1;
  uVar2 = uVar3;
  FUN_10a0051e8(uVar3,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(uVar3 + 0x78) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a47a2f4);
      (*pcVar1)();
    }
    FUN_10a054dac(uVar3,*param_2,FUN_10a47a4c4,2,*(undefined8 *)(uVar3 + 0x40));
  }
  return param_1;
}



/* Entry: 10a47a4c4; end: 10a47a5a7;  */

void FUN_10a47a4c4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uStack_48;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  plVar2 = param_2;
  FUN_10a05a42c(param_2,param_3);
  FUN_10a1fa9e8(param_5);
  plVar3 = param_2;
  FUN_10a05a42c(param_2,param_4);
  uStack_48 = CONCAT44((float)((ulong)*plVar2 >> 0x20) + (float)((ulong)*plVar3 >> 0x20),
                       (float)*plVar2 + (float)*plVar3);
  FUN_10a07ff64(param_1,param_2,&uStack_48);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a47a5a8; end: 10a47a62f;  */

void FUN_10a47a5a8(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  uVar1 = param_4;
  FUN_10a05a42c(param_4,param_6);
  FUN_10a1fa9e8(param_8);
  uVar2 = param_4;
  FUN_10a05a42c(param_4,param_7);
  (*param_5)(uVar1,uVar2);
  uStack_48 = param_1;
  uStack_44 = param_2;
  FUN_10a07ff64(param_3,param_4,&uStack_48);
  return;
}



/* Entry: 10a47a630; end: 10a47a713;  */

void FUN_10a47a630(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uStack_48;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  plVar2 = param_2;
  FUN_10a05a42c(param_2,param_3);
  FUN_10a1fa9e8(param_5);
  plVar3 = param_2;
  FUN_10a05a42c(param_2,param_4);
  uStack_48 = CONCAT44((float)((ulong)*plVar2 >> 0x20) - (float)((ulong)*plVar3 >> 0x20),
                       (float)*plVar2 - (float)*plVar3);
  FUN_10a07ff64(param_1,param_2,&uStack_48);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a47a714; end: 10a47a7f7;  */

void FUN_10a47a714(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uStack_48;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  plVar2 = param_2;
  FUN_10a05a42c(param_2,param_3);
  FUN_10a1fa9e8(param_5);
  plVar3 = param_2;
  FUN_10a05a42c(param_2,param_4);
  uStack_48 = CONCAT44((float)((ulong)*plVar2 >> 0x20) * (float)((ulong)*plVar3 >> 0x20),
                       (float)*plVar2 * (float)*plVar3);
  FUN_10a07ff64(param_1,param_2,&uStack_48);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a47a7f8; end: 10a47a8db;  */

void FUN_10a47a7f8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uStack_48;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  plVar2 = param_2;
  FUN_10a05a42c(param_2,param_3);
  FUN_10a1fa9e8(param_5);
  plVar3 = param_2;
  FUN_10a05a42c(param_2,param_4);
  uStack_48 = CONCAT44((float)((ulong)*plVar2 >> 0x20) / (float)((ulong)*plVar3 >> 0x20),
                       (float)*plVar2 / (float)*plVar3);
  FUN_10a07ff64(param_1,param_2,&uStack_48);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a47a8dc; end: 10a47a9b3;  */

void FUN_10a47a8dc(undefined4 *param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  float *pfVar4;
  float *pfVar5;
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
  float *pfStack_68;
  
  pfVar4 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pfVar4 + 0xb2) < 8) {
    *(long *)(pfVar4 + *(ulong *)(pfVar4 + 0xb2) * 2 + 0x9c) = *(long *)(pfVar4 + 0xb4);
    *(long *)(pfVar4 + 0xb2) = *(long *)(pfVar4 + 0xb2) + 1;
  }
  else {
    func_0x00010988bfcc(pfVar4 + 0x96);
  }
  pfVar5 = param_2;
  FUN_10a05a42c(param_2,param_3);
  FUN_10a1fa9e8(param_5);
  FUN_10a05a42c(param_2,param_4);
  *pfVar5 = *param_2 + *pfVar5;
  pfVar5[1] = param_2[1] + pfVar5[1];
  *param_1 = 0;
  pfVar5 = pfVar4 + 0x96;
  uVar6 = *(long *)(pfVar4 + 0xb2) - 1;
  *(ulong *)(pfVar4 + 0xb2) = uVar6;
  if (uVar6 < 8) {
    uVar6 = *(ulong *)(pfVar5 + uVar6 * 2 + 6);
    if (*(ulong *)(pfVar4 + 0xb4) == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(*(long *)(pfVar4 + 0xae) + -8);
    *(ulong **)(pfVar4 + 0xae) = (ulong *)(*(long *)(pfVar4 + 0xae) + -8);
    if (*(ulong *)(pfVar4 + 0xb4) == uVar6) {
      return;
    }
  }
  lVar1 = *(long *)pfVar5;
  lVar10 = *(long *)(pfVar4 + 0x98);
  lVar8 = lVar10 - lVar1;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = *(long *)(pfVar4 + 0x9a);
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar1 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar1)) {
          uVar7 = 0xfffffffffffffff;
        }
        pfStack_68 = pfVar5;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar1,lVar8);
          *(long *)pfVar5 = lVar9;
          *(ulong *)(pfVar4 + 0x98) = lVar10 + uVar13 * 0x10;
          *(ulong *)(pfVar4 + 0x9a) = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar1;
          lStack_80 = lVar1;
          lStack_78 = lVar1;
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
    *(ulong *)(pfVar4 + 0x98) = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar1 = lVar1 + uVar6 * 0x10;
    while (lVar10 != lVar1) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    *(long *)(pfVar4 + 0x98) = lVar1;
  }
code_r0x00010988c138:
  *(ulong *)(pfVar4 + 0xb4) = uVar6;
  return;
}



/* Entry: 10a47a9b4; end: 10a47aa23;  */

void FUN_10a47a9b4(undefined4 *param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_10a05a42c(param_2,param_4);
  FUN_10a1fa9e8(param_6);
  FUN_10a05a42c(param_2,param_5);
  (*param_3)(uVar1,param_2);
  *param_1 = 0;
  return;
}



/* Entry: 10a47aa24; end: 10a47aafb;  */

void FUN_10a47aa24(undefined4 *param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  float *pfVar4;
  float *pfVar5;
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
  float *pfStack_68;
  
  pfVar4 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pfVar4 + 0xb2) < 8) {
    *(long *)(pfVar4 + *(ulong *)(pfVar4 + 0xb2) * 2 + 0x9c) = *(long *)(pfVar4 + 0xb4);
    *(long *)(pfVar4 + 0xb2) = *(long *)(pfVar4 + 0xb2) + 1;
  }
  else {
    func_0x00010988bfcc(pfVar4 + 0x96);
  }
  pfVar5 = param_2;
  FUN_10a05a42c(param_2,param_3);
  FUN_10a1fa9e8(param_5);
  FUN_10a05a42c(param_2,param_4);
  *pfVar5 = *pfVar5 - *param_2;
  pfVar5[1] = pfVar5[1] - param_2[1];
  *param_1 = 0;
  pfVar5 = pfVar4 + 0x96;
  uVar6 = *(long *)(pfVar4 + 0xb2) - 1;
  *(ulong *)(pfVar4 + 0xb2) = uVar6;
  if (uVar6 < 8) {
    uVar6 = *(ulong *)(pfVar5 + uVar6 * 2 + 6);
    if (*(ulong *)(pfVar4 + 0xb4) == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(*(long *)(pfVar4 + 0xae) + -8);
    *(ulong **)(pfVar4 + 0xae) = (ulong *)(*(long *)(pfVar4 + 0xae) + -8);
    if (*(ulong *)(pfVar4 + 0xb4) == uVar6) {
      return;
    }
  }
  lVar1 = *(long *)pfVar5;
  lVar10 = *(long *)(pfVar4 + 0x98);
  lVar8 = lVar10 - lVar1;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = *(long *)(pfVar4 + 0x9a);
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar1 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar1)) {
          uVar7 = 0xfffffffffffffff;
        }
        pfStack_68 = pfVar5;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar1,lVar8);
          *(long *)pfVar5 = lVar9;
          *(ulong *)(pfVar4 + 0x98) = lVar10 + uVar13 * 0x10;
          *(ulong *)(pfVar4 + 0x9a) = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar1;
          lStack_80 = lVar1;
          lStack_78 = lVar1;
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
    *(ulong *)(pfVar4 + 0x98) = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar1 = lVar1 + uVar6 * 0x10;
    while (lVar10 != lVar1) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    *(long *)(pfVar4 + 0x98) = lVar1;
  }
code_r0x00010988c138:
  *(ulong *)(pfVar4 + 0xb4) = uVar6;
  return;
}



/* Entry: 10a47aafc; end: 10a47abd3;  */

void FUN_10a47aafc(undefined4 *param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  float *pfVar4;
  float *pfVar5;
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
  float *pfStack_68;
  
  pfVar4 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pfVar4 + 0xb2) < 8) {
    *(long *)(pfVar4 + *(ulong *)(pfVar4 + 0xb2) * 2 + 0x9c) = *(long *)(pfVar4 + 0xb4);
    *(long *)(pfVar4 + 0xb2) = *(long *)(pfVar4 + 0xb2) + 1;
  }
  else {
    func_0x00010988bfcc(pfVar4 + 0x96);
  }
  pfVar5 = param_2;
  FUN_10a05a42c(param_2,param_3);
  FUN_10a1fa9e8(param_5);
  FUN_10a05a42c(param_2,param_4);
  *pfVar5 = *param_2 * *pfVar5;
  pfVar5[1] = param_2[1] * pfVar5[1];
  *param_1 = 0;
  pfVar5 = pfVar4 + 0x96;
  uVar6 = *(long *)(pfVar4 + 0xb2) - 1;
  *(ulong *)(pfVar4 + 0xb2) = uVar6;
  if (uVar6 < 8) {
    uVar6 = *(ulong *)(pfVar5 + uVar6 * 2 + 6);
    if (*(ulong *)(pfVar4 + 0xb4) == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(*(long *)(pfVar4 + 0xae) + -8);
    *(ulong **)(pfVar4 + 0xae) = (ulong *)(*(long *)(pfVar4 + 0xae) + -8);
    if (*(ulong *)(pfVar4 + 0xb4) == uVar6) {
      return;
    }
  }
  lVar1 = *(long *)pfVar5;
  lVar10 = *(long *)(pfVar4 + 0x98);
  lVar8 = lVar10 - lVar1;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = *(long *)(pfVar4 + 0x9a);
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar1 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar1)) {
          uVar7 = 0xfffffffffffffff;
        }
        pfStack_68 = pfVar5;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar1,lVar8);
          *(long *)pfVar5 = lVar9;
          *(ulong *)(pfVar4 + 0x98) = lVar10 + uVar13 * 0x10;
          *(ulong *)(pfVar4 + 0x9a) = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar1;
          lStack_80 = lVar1;
          lStack_78 = lVar1;
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
    *(ulong *)(pfVar4 + 0x98) = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar1 = lVar1 + uVar6 * 0x10;
    while (lVar10 != lVar1) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    *(long *)(pfVar4 + 0x98) = lVar1;
  }
code_r0x00010988c138:
  *(ulong *)(pfVar4 + 0xb4) = uVar6;
  return;
}



/* Entry: 10a47abd4; end: 10a47acab;  */

void FUN_10a47abd4(undefined4 *param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  float *pfVar4;
  float *pfVar5;
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
  float *pfStack_68;
  
  pfVar4 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pfVar4 + 0xb2) < 8) {
    *(long *)(pfVar4 + *(ulong *)(pfVar4 + 0xb2) * 2 + 0x9c) = *(long *)(pfVar4 + 0xb4);
    *(long *)(pfVar4 + 0xb2) = *(long *)(pfVar4 + 0xb2) + 1;
  }
  else {
    func_0x00010988bfcc(pfVar4 + 0x96);
  }
  pfVar5 = param_2;
  FUN_10a05a42c(param_2,param_3);
  FUN_10a1fa9e8(param_5);
  FUN_10a05a42c(param_2,param_4);
  *pfVar5 = *pfVar5 / *param_2;
  pfVar5[1] = pfVar5[1] / param_2[1];
  *param_1 = 0;
  pfVar5 = pfVar4 + 0x96;
  uVar6 = *(long *)(pfVar4 + 0xb2) - 1;
  *(ulong *)(pfVar4 + 0xb2) = uVar6;
  if (uVar6 < 8) {
    uVar6 = *(ulong *)(pfVar5 + uVar6 * 2 + 6);
    if (*(ulong *)(pfVar4 + 0xb4) == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(*(long *)(pfVar4 + 0xae) + -8);
    *(ulong **)(pfVar4 + 0xae) = (ulong *)(*(long *)(pfVar4 + 0xae) + -8);
    if (*(ulong *)(pfVar4 + 0xb4) == uVar6) {
      return;
    }
  }
  lVar1 = *(long *)pfVar5;
  lVar10 = *(long *)(pfVar4 + 0x98);
  lVar8 = lVar10 - lVar1;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = *(long *)(pfVar4 + 0x9a);
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar1 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar1)) {
          uVar7 = 0xfffffffffffffff;
        }
        pfStack_68 = pfVar5;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar1,lVar8);
          *(long *)pfVar5 = lVar9;
          *(ulong *)(pfVar4 + 0x98) = lVar10 + uVar13 * 0x10;
          *(ulong *)(pfVar4 + 0x9a) = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar1;
          lStack_80 = lVar1;
          lStack_78 = lVar1;
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
    *(ulong *)(pfVar4 + 0x98) = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar1 = lVar1 + uVar6 * 0x10;
    while (lVar10 != lVar1) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    *(long *)(pfVar4 + 0x98) = lVar1;
  }
code_r0x00010988c138:
  *(ulong *)(pfVar4 + 0xb4) = uVar6;
  return;
}



/* Entry: 10a47acac; end: 10a47ada3;  */

void FUN_10a47acac(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
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
  float fVar14;
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
  FUN_10a05a42c(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a47ad90);
    (*pcVar2)();
  }
  fVar14 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar14 = 0.0;
  }
  *param_2 = CONCAT44((float)((ulong)*param_2 >> 0x20) * fVar14,(float)*param_2 * fVar14);
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



/* Entry: 10a47ada4; end: 10a47ae57;  */

void FUN_10a47ada4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a47ae58(param_1,param_2,FUN_10a47a008,param_3,param_4,param_5);
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



/* Entry: 10a47ae58; end: 10a47af07;  */

void FUN_10a47ae58(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  int *param_5,undefined8 param_6)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined4 *extraout_x8;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  float fVar18;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  float *pfStack_b8;
  float fStack_48;
  float fStack_44;
  
  uVar5 = param_2;
  pcVar2 = param_3;
  uVar9 = param_4;
  FUN_10a05a42c(param_2,param_4);
  FUN_10a05ed04(param_6);
  if (*param_5 == 3) {
    fVar18 = (float)*(double *)(param_5 + 2);
    fStack_48 = fVar18;
    if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_5 + 2))) {
      fStack_48 = 0.0;
    }
    (*param_3)(uVar5);
    fStack_44 = fVar18;
    FUN_10a07ff64(param_1,param_2,&fStack_48);
    return;
  }
  pfVar6 = (float *)&UNK_10f68f550;
  func_0x00010988bd28();
  pfVar7 = pfVar6;
  (**(code **)(*(long *)pfVar6 + 0x58))();
  if (*(ulong *)(pfVar7 + 0xb2) < 8) {
    *(long *)(pfVar7 + *(ulong *)(pfVar7 + 0xb2) * 2 + 0x9c) = *(long *)(pfVar7 + 0xb4);
    *(long *)(pfVar7 + 0xb2) = *(long *)(pfVar7 + 0xb2) + 1;
  }
  else {
    func_0x00010988bfcc(pfVar7 + 0x96);
  }
  pfVar8 = pfVar6;
  FUN_10a05a42c(pfVar6,param_4);
  FUN_10a1fa9e8(uVar9);
  FUN_10a05a42c(pfVar6,pcVar2);
  bVar3 = false;
  if ((pfVar8[1] == pfVar6[1]) && (bVar3 = false, !NAN(*pfVar8) && !NAN(*pfVar6))) {
    bVar3 = *pfVar8 == *pfVar6;
  }
  *extraout_x8 = 2;
  *(bool *)(extraout_x8 + 2) = bVar3;
  pfVar6 = pfVar7 + 0x96;
  uVar10 = *(long *)(pfVar7 + 0xb2) - 1;
  *(ulong *)(pfVar7 + 0xb2) = uVar10;
  if (uVar10 < 8) {
    uVar10 = *(ulong *)(pfVar6 + uVar10 * 2 + 6);
    if (*(ulong *)(pfVar7 + 0xb4) == uVar10) {
      return;
    }
  }
  else {
    uVar10 = *(ulong *)(*(long *)(pfVar7 + 0xae) + -8);
    *(ulong **)(pfVar7 + 0xae) = (ulong *)(*(long *)(pfVar7 + 0xae) + -8);
    if (*(ulong *)(pfVar7 + 0xb4) == uVar10) {
      return;
    }
  }
  lVar1 = *(long *)pfVar6;
  lVar14 = *(long *)(pfVar7 + 0x98);
  lVar12 = lVar14 - lVar1;
  uVar16 = lVar12 >> 4;
  if (uVar16 < uVar10) {
    uVar17 = uVar10 - uVar16;
    lVar15 = *(long *)(pfVar7 + 0x9a);
    if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
      if (uVar10 >> 0x3c == 0) {
        uVar11 = lVar15 - lVar1 >> 3;
        if (uVar11 <= uVar10) {
          uVar11 = uVar10;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - lVar1)) {
          uVar11 = 0xfffffffffffffff;
        }
        pfStack_b8 = pfVar6;
        if (uVar11 >> 0x3c == 0) {
          lVar4 = uVar11 << 4;
          __Znwm();
          lVar14 = lVar4 + lVar12;
          _bzero(lVar14,uVar17 * 0x10);
          lVar13 = lVar14 + uVar16 * -0x10;
          _memcpy(lVar13,lVar1,lVar12);
          *(long *)pfVar6 = lVar13;
          *(ulong *)(pfVar7 + 0x98) = lVar14 + uVar17 * 0x10;
          *(ulong *)(pfVar7 + 0x9a) = lVar4 + uVar11 * 0x10;
          lStack_d8 = lVar1;
          lStack_d0 = lVar1;
          lStack_c8 = lVar1;
          lStack_c0 = lVar15;
          func_0x00010988c1b8(&lStack_d8);
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
    _bzero(lVar14,uVar17 * 0x10);
    *(ulong *)(pfVar7 + 0x98) = lVar14 + uVar17 * 0x10;
  }
  else if (uVar10 < uVar16) {
    lVar1 = lVar1 + uVar10 * 0x10;
    while (lVar14 != lVar1) {
      lVar14 = lVar14 + -0x10;
      func_0x00010988c204(lVar14);
    }
    *(long *)(pfVar7 + 0x98) = lVar1;
  }
code_r0x00010988c138:
  *(ulong *)(pfVar7 + 0xb4) = uVar10;
  return;
}



/* Entry: 10a47af08; end: 10a47afdf;  */

void FUN_10a47af08(undefined4 *param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  float *pfVar5;
  float *pfVar6;
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
  float *pfStack_68;
  
  pfVar5 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pfVar5 + 0xb2) < 8) {
    *(long *)(pfVar5 + *(ulong *)(pfVar5 + 0xb2) * 2 + 0x9c) = *(long *)(pfVar5 + 0xb4);
    *(long *)(pfVar5 + 0xb2) = *(long *)(pfVar5 + 0xb2) + 1;
  }
  else {
    func_0x00010988bfcc(pfVar5 + 0x96);
  }
  pfVar6 = param_2;
  FUN_10a05a42c(param_2,param_3);
  FUN_10a1fa9e8(param_5);
  FUN_10a05a42c(param_2,param_4);
  bVar3 = false;
  if ((pfVar6[1] == param_2[1]) && (bVar3 = false, !NAN(*pfVar6) && !NAN(*param_2))) {
    bVar3 = *pfVar6 == *param_2;
  }
  *param_1 = 2;
  *(bool *)(param_1 + 2) = bVar3;
  pfVar6 = pfVar5 + 0x96;
  uVar7 = *(long *)(pfVar5 + 0xb2) - 1;
  *(ulong *)(pfVar5 + 0xb2) = uVar7;
  if (uVar7 < 8) {
    uVar7 = *(ulong *)(pfVar6 + uVar7 * 2 + 6);
    if (*(ulong *)(pfVar5 + 0xb4) == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(*(long *)(pfVar5 + 0xae) + -8);
    *(ulong **)(pfVar5 + 0xae) = (ulong *)(*(long *)(pfVar5 + 0xae) + -8);
    if (*(ulong *)(pfVar5 + 0xb4) == uVar7) {
      return;
    }
  }
  lVar1 = *(long *)pfVar6;
  lVar11 = *(long *)(pfVar5 + 0x98);
  lVar9 = lVar11 - lVar1;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = *(long *)(pfVar5 + 0x9a);
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar1 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar1)) {
          uVar8 = 0xfffffffffffffff;
        }
        pfStack_68 = pfVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar1,lVar9);
          *(long *)pfVar6 = lVar10;
          *(ulong *)(pfVar5 + 0x98) = lVar11 + uVar14 * 0x10;
          *(ulong *)(pfVar5 + 0x9a) = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar1;
          lStack_80 = lVar1;
          lStack_78 = lVar1;
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
    *(ulong *)(pfVar5 + 0x98) = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar1 = lVar1 + uVar7 * 0x10;
    while (lVar11 != lVar1) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    *(long *)(pfVar5 + 0x98) = lVar1;
  }
code_r0x00010988c138:
  *(ulong *)(pfVar5 + 0xb4) = uVar7;
  return;
}



/* Entry: 10a47afe0; end: 10a47b0ab;  */

void FUN_10a47afe0(undefined4 *param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  float *pfVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  float *pfVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  float *pfStack_68;
  
  pfVar5 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pfVar5 + 0xb2) < 8) {
    *(long *)(pfVar5 + *(ulong *)(pfVar5 + 0xb2) * 2 + 0x9c) = *(long *)(pfVar5 + 0xb4);
    *(long *)(pfVar5 + 0xb2) = *(long *)(pfVar5 + 0xb2) + 1;
  }
  else {
    func_0x00010988bfcc(pfVar5 + 0x96);
  }
  FUN_10a05a42c(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *param_2;
  fVar15 = param_2[1];
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)SQRT(fVar14 * fVar14 + fVar15 * fVar15);
  pfVar1 = pfVar5 + 0x96;
  uVar6 = *(long *)(pfVar5 + 0xb2) - 1;
  *(ulong *)(pfVar5 + 0xb2) = uVar6;
  if (uVar6 < 8) {
    uVar6 = *(ulong *)(pfVar1 + uVar6 * 2 + 6);
    if (*(ulong *)(pfVar5 + 0xb4) == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(*(long *)(pfVar5 + 0xae) + -8);
    *(ulong **)(pfVar5 + 0xae) = (ulong *)(*(long *)(pfVar5 + 0xae) + -8);
    if (*(ulong *)(pfVar5 + 0xb4) == uVar6) {
      return;
    }
  }
  lVar2 = *(long *)pfVar1;
  lVar10 = *(long *)(pfVar5 + 0x98);
  lVar8 = lVar10 - lVar2;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = *(long *)(pfVar5 + 0x9a);
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar2 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar2)) {
          uVar7 = 0xfffffffffffffff;
        }
        pfStack_68 = pfVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar4 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar4 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar2,lVar8);
          *(long *)pfVar1 = lVar9;
          *(ulong *)(pfVar5 + 0x98) = lVar10 + uVar13 * 0x10;
          *(ulong *)(pfVar5 + 0x9a) = lVar4 + uVar7 * 0x10;
          lStack_88 = lVar2;
          lStack_80 = lVar2;
          lStack_78 = lVar2;
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
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    *(ulong *)(pfVar5 + 0x98) = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar2 = lVar2 + uVar6 * 0x10;
    while (lVar10 != lVar2) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    *(long *)(pfVar5 + 0x98) = lVar2;
  }
code_r0x00010988c138:
  *(ulong *)(pfVar5 + 0xb4) = uVar6;
  return;
}



/* Entry: 10a47b0ac; end: 10a47b15f;  */

void FUN_10a47b0ac(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a479ad0(param_1,param_2,0x10a47a01c,param_3,param_4,param_5);
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



/* Entry: 10a47b160; end: 10a47b213;  */

void FUN_10a47b160(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a479ad0(param_1,param_2,0x10a47a03c,param_3,param_4,param_5);
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



/* Entry: 10a47b214; end: 10a47b2c7;  */

void FUN_10a47b214(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a47ae58(param_1,param_2,0x10a47a064,param_3,param_4,param_5);
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


