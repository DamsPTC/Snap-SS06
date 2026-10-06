/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10752ea8c; end: 10752eac7;  */

undefined1 * FUN_10752ea8c(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0xd8] = 0;
  FUN_10752eac8();
  return param_1;
}



/* Entry: 10752eac8; end: 10752eadb;  */

void FUN_10752eac8(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0xd8) == '\x01') {
    func_0x0001077b3ed4();
    *(undefined1 *)(param_1 + 0xd8) = 1;
    return;
  }
  return;
}



/* Entry: 10752eadc; end: 10752eb07;  */

undefined1 * FUN_10752eadc(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x20] = 0;
  FUN_10752eb08();
  return param_1;
}



/* Entry: 10752eb08; end: 10752eb1b;  */

void FUN_10752eb08(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_10752eb38();
    *(undefined1 *)(param_1 + 0x20) = 1;
    return;
  }
  return;
}



/* Entry: 10752eb1c; end: 10752eb37;  */

void FUN_10752eb1c(long param_1)

{
  FUN_10752eb38();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 10752eb38; end: 10752eb43;  */

void FUN_10752eb38(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  uVar3 = *param_2;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  *param_2 = &UNK_10e52b660;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Entry: 10752eb44; end: 10752ebb3;  */

undefined8 * FUN_10752eb44(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_28;
  
  *param_1 = param_2;
  puVar1 = param_1;
  uStack_28 = param_2;
  func_0x00010752f32c();
  *puVar1 = &PTR_FUN_1109b9df0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  param_1[1] = puVar1;
  uStack_28 = 0;
  FUN_10752ebb4(param_1,param_2,param_2);
  func_0x00010752ed4c(&uStack_28);
  return param_1;
}



/* Entry: 10752ebb4; end: 10752ec1f;  */

void FUN_10752ebb4(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_20;
  long lStack_18;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_18 = *(long *)(param_1 + 8);
    if (lStack_18 != 0) {
      plVar1 = (long *)(lStack_18 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_20 = param_3;
    func_0x00010752ecd8(param_2,&uStack_20);
    FUN_10752abd8(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10752ec20; end: 10752ec23;  */

void FUN_10752ec20(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10752ec24; end: 10752ec37;  */

void FUN_10752ec24(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10752ec38; end: 10752ec3f;  */

void FUN_10752ec38(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10752ec98(*(long *)(param_1 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10752ec40; end: 10752ec77;  */

long FUN_10752ec40(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109b9e30);
  param_1 = param_1 + 0x18;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10752ec78; end: 10752ec7b;  */

void FUN_10752ec78(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10752ec7c; end: 10752ec97;  */

void FUN_10752ec7c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10752ec98(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10752ec98; end: 10752ed6f;  */

long FUN_10752ec98(long param_1)

{
  func_0x00010752ede8(param_1 + 0x5e8);
  func_0x000107324968(param_1 + 0x558);
  func_0x00010752aaa0(param_1 + 0x28);
  func_0x00010752a9a0(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10752ed70; end: 10752ed87;  */

void FUN_10752ed70(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_10752ec98(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10752ed88; end: 10752ee93;  */

long FUN_10752ed88(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[3];
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (plVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],param_1);
  }
  else {
    (**(code **)(*plVar1 + 0x10))();
    *(long **)(param_1 + 0x18) = plVar1;
  }
  return param_1;
}



/* Entry: 10752ee94; end: 10752eea7;  */

void FUN_10752ee94(void)

{
  func_0x00010752ee68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10752eea8; end: 10752eecb;  */

void FUN_10752eea8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int extraout_w10;
  undefined8 uVar4;
  
  puVar1 = param_1;
  func_0x00010752f32c();
  puVar2 = param_1 + 1;
  *puVar1 = &PTR_SUB_1109b9e68;
  lVar3 = param_1[2];
  uVar4 = *puVar2;
  puVar1[2] = param_1[2];
  puVar1[1] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x00010752f334();
    } while (extraout_w10 != 0);
  }
  puVar1[3] = puVar2[2];
  return;
}



/* Entry: 10752eecc; end: 10752eef7;  */

void FUN_10752eecc(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_SUB_1109b9e68;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *puVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010752f334();
    } while (extraout_w10 != 0);
  }
  param_2[3] = puVar1[2];
  return;
}



/* Entry: 10752eef8; end: 10752f25b;  */

long * FUN_10752eef8(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  bool bVar2;
  undefined1 uVar3;
  long *plVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  uint6 uVar15;
  byte bVar16;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  undefined8 uVar17;
  byte bVar23;
  undefined1 auStack_508 [16];
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  char cStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  char cStack_4d0;
  undefined1 auStack_4c8 [24];
  undefined1 auStack_4b0 [32];
  long alStack_490 [3];
  char cStack_478;
  long lStack_470;
  long lStack_468;
  long alStack_460 [128];
  undefined4 uStack_60;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt13exception_ptrC1ERKS_(&lStack_470);
  auStack_508[0] = 0;
  cStack_478 = 0;
  bVar2 = *(char *)(param_3 + 0x90) == '\x01';
  if (bVar2) {
    FUN_10752b4c0(auStack_508,param_3);
  }
  plVar13 = &lStack_470;
  cStack_478 = bVar2;
  __ZNSt13exception_ptraSERKS_(*(long *)(param_1 + 0x18) + 0x48);
  uVar5 = 3;
  if (lStack_470 != 0) {
    uVar5 = 4;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x44) = uVar5;
  if (cStack_478 == '\x01') {
    lVar11 = *(long *)(param_1 + 8);
    FUN_107528fd8(lVar11 + 0x558,auStack_508);
    cVar18 = *(char *)(lVar11 + 0x578);
    if (cVar18 == cStack_4e8) {
      if (cVar18 != '\0') {
        func_0x0001072b2b94((undefined8 *)(lVar11 + 0x568),&uStack_4f8);
      }
    }
    else if (cVar18 == '\0') {
      *(undefined8 *)(lVar11 + 0x570) = uStack_4f0;
      *(undefined8 *)(lVar11 + 0x568) = uStack_4f8;
      uStack_4f8 = 0;
      uStack_4f0 = 0;
      *(undefined1 *)(lVar11 + 0x578) = 1;
    }
    else {
      func_0x0001072aa1a4();
      *(undefined1 *)(lVar11 + 0x578) = 0;
    }
    cVar18 = *(char *)(lVar11 + 0x590);
    if (cVar18 == cStack_4d0) {
      if (cVar18 != '\0') {
        func_0x00010726d358(lVar11 + 0x580,&uStack_4e0);
      }
    }
    else if (cVar18 == '\0') {
      *(undefined8 *)(lVar11 + 0x588) = uStack_4d8;
      *(undefined8 *)(lVar11 + 0x580) = uStack_4e0;
      uStack_4e0 = 0;
      uStack_4d8 = 0;
      *(undefined1 *)(lVar11 + 0x590) = 1;
    }
    else {
      func_0x00010726b264(lVar11 + 0x580);
      *(undefined1 *)(lVar11 + 0x590) = 0;
    }
    func_0x000100066230(lVar11 + 0x598,auStack_4c8);
    func_0x0001002a8208(lVar11 + 0x5b0,auStack_4b0);
    plVar13 = alStack_490;
    func_0x00010014d224(lVar11 + 0x5d0);
  }
  lVar12 = *(long *)(param_1 + 8);
  lVar11 = *(long *)(lVar12 + 0x608) + -1;
  *(long *)(lVar12 + 0x608) = lVar11;
  if (lVar11 == 0) {
    lStack_468 = 0;
    plVar4 = *(long **)(lVar12 + 0x18);
    for (plVar13 = *(long **)(lVar12 + 0x10); uVar3 = plVar13 == plVar4, !(bool)uVar3;
        plVar13 = plVar13 + 1) {
      if (*(int *)(*plVar13 + 0x44) == 4 && lStack_468 == 0) {
        __ZNSt13exception_ptraSERKS_(&lStack_468,*plVar13 + 0x48);
      }
    }
    if (lStack_468 == 0) {
      plVar13 = (long *)(lVar12 + 0xc0);
      FUN_10752e568(alStack_460);
      uStack_60 = 0;
      func_0x00010752f308();
    }
    else {
      plVar13 = &lStack_468;
      __ZNSt13exception_ptrC1ERKS_(alStack_460);
      uStack_60 = 1;
      func_0x00010752f308();
    }
    FUN_1075290bc(alStack_460);
    __ZNSt13exception_ptrD1Ev(&lStack_468);
  }
  else {
    lVar12 = *(long *)(param_1 + 0x18);
    lVar11 = *(long *)(lVar12 + 0x70);
    while (uVar3 = lVar11 == lVar12 + 0x78, !(bool)uVar3) {
      plVar13 = *(long **)(lVar11 + 0x20);
      plVar14 = plVar13 + 10;
      alStack_460[0] = *(long *)(param_1 + 0x18);
      Hint_Prefetch(*plVar14,0,2,0);
      plVar4 = plVar14;
      FUN_1075299a8(*plVar14,plVar14,alStack_460);
      lVar6 = 0;
      uVar7 = plVar13[10];
      uVar8 = uVar7 >> 0xc ^ (ulong)plVar4 >> 7;
      bVar1 = (byte)plVar4;
      uVar15 = CONCAT15(bVar1,CONCAT14(bVar1,CONCAT13(bVar1,CONCAT12(bVar1,CONCAT11(bVar1,bVar1)))))
               & 0x7f7f7f7f7f7f;
      while( true ) {
        uVar8 = uVar8 & plVar13[0xc];
        uVar17 = *(undefined8 *)(uVar7 + uVar8);
        cVar18 = (char)((ulong)uVar17 >> 8);
        cVar19 = (char)((ulong)uVar17 >> 0x10);
        cVar20 = (char)((ulong)uVar17 >> 0x18);
        cVar21 = (char)((ulong)uVar17 >> 0x20);
        cVar22 = (char)((ulong)uVar17 >> 0x28);
        bVar16 = (byte)((ulong)uVar17 >> 0x30);
        bVar23 = (byte)((ulong)uVar17 >> 0x38);
        for (uVar9 = CONCAT17(-(bVar23 == (bVar1 & 0x7f)),
                              CONCAT16(-(bVar16 == (bVar1 & 0x7f)),
                                       CONCAT15(-(cVar22 == (char)(uVar15 >> 0x28)),
                                                CONCAT14(-(cVar21 == (char)(uVar15 >> 0x20)),
                                                         CONCAT13(-(cVar20 == (char)(uVar15 >> 0x18)
                                                                   ),CONCAT12(-(cVar19 ==
                                                                               (char)(uVar15 >> 0x10
                                                                                     )),
                                                                              CONCAT11(-(cVar18 ==
                                                                                        (char)(
                                                  uVar15 >> 8)),-((char)uVar17 == (char)uVar15))))))
                                      )) & 0x8080808080808080; uVar9 != 0; uVar9 = uVar9 - 1 & uVar9
            ) {
          uVar10 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uVar10 = uVar8 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) & plVar13[0xc];
          if (*(long *)(plVar13[0xb] + uVar10 * 8) == alStack_460[0]) {
            if (uVar7 != 0) {
              func_0x00010ae6cb48(plVar14,uVar7 + uVar10,8);
            }
            goto LAB_10752f144;
          }
        }
        bVar16 = NEON_umaxv(CONCAT17(-(bVar23 == 0x80),
                                     CONCAT16(-(bVar16 == 0x80),
                                              CONCAT15(-(cVar22 == -0x80),
                                                       CONCAT14(-(cVar21 == -0x80),
                                                                CONCAT13(-(cVar20 == -0x80),
                                                                         CONCAT12(-(cVar19 == -0x80)
                                                                                  ,CONCAT11(-(cVar18
                                                                                             == 
                                                  -0x80),-((char)uVar17 == -0x80)))))))),1);
        if ((bVar16 & 1) != 0) break;
        lVar6 = lVar6 + 8;
        uVar8 = lVar6 + uVar8;
      }
LAB_10752f144:
      FUN_10752e304(*(undefined8 *)(param_1 + 8));
      func_0x00010002c7d4();
    }
  }
  FUN_10752b5b8(auStack_508);
  plVar4 = &lStack_470;
  __ZNSt13exception_ptrD1Ev();
  func_0x00010752f344(uStack_58);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    FUN_1075290bc(alStack_460);
    __ZNSt13exception_ptrD1Ev(&lStack_468);
    FUN_10752b5b8(auStack_508);
    plVar4 = &lStack_470;
    __ZNSt13exception_ptrD1Ev(plVar4);
    func_0x00010752f300();
    func_0x0001004a5364(plVar13,&PTR_DAT_1109b9ed8);
    plVar4 = plVar4 + 1;
    if ((int)plVar13 == 0) {
      plVar4 = (long *)0x0;
    }
    return plVar4;
  }
  return plVar4;
}



/* Entry: 10752f25c; end: 10752f293;  */

long FUN_10752f25c(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109b9ed8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10752f294; end: 10752f357;  */

undefined ** FUN_10752f294(void)

{
  return &PTR_DAT_1109b9ed8;
}



/* Entry: 10752f358; end: 10752f483;  */

void FUN_10752f358(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined1 in_ZR;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  undefined ***pppuVar8;
  undefined8 *puVar9;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined ***pppuVar10;
  long *plVar11;
  undefined ***pppuVar12;
  long lStack_150;
  undefined **ppuStack_148;
  undefined1 auStack_140 [48];
  undefined1 uStack_110;
  undefined8 uStack_108;
  long lStack_a0;
  byte bStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_71;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_38;
  
  lVar2 = param_1;
  func_0x0001075306f0();
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_68 = *(undefined8 *)(lVar2 + 0x80);
  uStack_38 = extraout_x8;
  if ((bRam00000001131ad3b0 & 1) == 0) {
    func_0x0001072ba628(&ppuStack_70,&UNK_10f416336,0xb,param_1 + 0x90);
    func_0x000107264c5c(&ppuStack_70);
    func_0x000104c2f714(&ppuStack_70);
  }
  ppuStack_70 = &PTR_DAT_1131ad2e8;
  pppuVar8 = &ppuStack_70;
  FUN_10754c840(&lStack_a0,&uStack_71,pppuVar8,&uStack_90,param_3);
  func_0x0001072f5f6c(&ppuStack_70);
  lVar2 = lStack_a0;
  if ((bStack_98 & 1) != 0) {
    lStack_a0 = 0;
    lVar3 = *(long *)(param_1 + 0x98);
    *(long *)(param_1 + 0x98) = lVar2;
    if (lVar3 != 0) {
      func_0x000107530664();
      lVar2 = lStack_a0;
      in_ZR = bStack_98 == 1;
      if (((bool)in_ZR) && (lStack_a0 = 0, lVar2 != 0)) {
        func_0x000107530664();
      }
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x000107530670(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000104c2f714(&ppuStack_70);
  puVar4 = &uStack_90;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x000107530814();
  func_0x0001075306f0();
  plVar11 = puVar4 + 0x13;
  uStack_108 = extraout_x8_01;
  if (*plVar11 != 0) {
    in_ZR = *(char *)(puVar4 + 0x11) == '\x01';
    if ((bool)in_ZR) {
      pppuVar5 = pppuVar8 + 0x97;
      puVar9 = puVar4 + 9;
      FUN_10752ffe8();
      if (((ulong)puVar9 & 1) != 0) {
        ppuVar7 = pppuVar8[0x98] + (long)pppuVar5 * 8;
        func_0x000104c2fe00(ppuVar7,puVar4 + 9);
        ppuVar7[7] = (undefined *)0x0;
      }
      ppuStack_148 = (undefined **)pppuVar8[0x98][(long)pppuVar5 * 8 + 7];
      func_0x000104c2fe00(auStack_140,puVar4 + 9);
      ppuVar7 = ppuStack_148;
      pppuVar10 = (undefined ***)pppuVar8[0x9c];
      pppuVar5 = pppuVar8 + 0x9c;
      while (pppuVar12 = pppuVar5, pppuVar10 != (undefined ***)0x0) {
        while (pppuVar6 = pppuVar10, pppuVar5 = pppuVar6, pppuVar6[4] <= ppuStack_148) {
          if (ppuStack_148 <= pppuVar6[4]) goto LAB_10752f5dc;
          pppuVar10 = (undefined ***)pppuVar6[1];
          if ((undefined ***)pppuVar6[1] == (undefined ***)0x0) {
            pppuVar12 = pppuVar6 + 1;
            goto LAB_10752f584;
          }
        }
        pppuVar10 = (undefined ***)*pppuVar6;
      }
LAB_10752f584:
      pppuVar6 = (undefined ***)0x60;
      __Znwm();
      pppuVar6[4] = ppuVar7;
      func_0x000104c318bc(pppuVar6 + 5,auStack_140);
      *pppuVar6 = (undefined **)0x0;
      pppuVar6[1] = (undefined **)0x0;
      pppuVar6[2] = (undefined **)pppuVar5;
      *pppuVar12 = (undefined **)pppuVar6;
      if ((undefined **)*pppuVar8[0x9b] != (undefined **)0x0) {
        pppuVar8[0x9b] = (undefined **)*pppuVar8[0x9b];
      }
      func_0x00010002c5b0(pppuVar8[0x9c],pppuVar6);
      pppuVar8[0x9d] = (undefined **)((long)pppuVar8[0x9d] + 1);
LAB_10752f5dc:
      func_0x000104c2f714(auStack_140);
      func_0x00010002c7d4();
      in_ZR = pppuVar6 == pppuVar8 + 0x9c;
      if ((bool)in_ZR) {
        ppuStack_148 = (undefined **)((ulong)ppuStack_148 & 0xffffffffffffff00);
        uStack_110 = 0;
      }
      else {
        func_0x00010729d1b0(&ppuStack_148,pppuVar6 + 5);
      }
      lStack_150 = *plVar11;
      *plVar11 = 0;
      ppuVar7 = pppuVar8[0x12];
      if (ppuVar7 == (undefined **)0x0) goto LAB_10752f684;
      (**(code **)(*ppuVar7 + 0x30))(ppuVar7,&lStack_150,&ppuStack_148);
      lVar2 = lStack_150;
      lStack_150 = 0;
      if (lVar2 != 0) {
        func_0x000107530664();
      }
      func_0x00010724b3d8(&ppuStack_148);
    }
    else {
      puVar4 = puVar4 + 9;
      FUN_10752f6bc(pppuVar8 + 0x93,puVar4);
      func_0x00010752f6ec(puVar4 + 8,plVar11);
    }
  }
  *extraout_x8_00 = 0;
  func_0x000107530670(uStack_108);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_10752f684:
  func_0x000104bfeb48();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10752f68c);
  (*pcVar1)();
}



/* Entry: 10752f484; end: 10752f6bb;  */

void FUN_10752f484(undefined8 *param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined1 in_ZR;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 extraout_x8;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lStack_b0;
  ulong uStack_a8;
  undefined1 auStack_a0 [48];
  undefined1 uStack_70;
  undefined8 uStack_68;
  
  func_0x0001075306f0();
  plVar7 = (long *)(param_2 + 0x98);
  uStack_68 = extraout_x8;
  if (*plVar7 != 0) {
    in_ZR = *(char *)(param_2 + 0x88) == '\x01';
    if ((bool)in_ZR) {
      lVar2 = param_3 + 0x4b8;
      uVar5 = param_2 + 0x48;
      FUN_10752ffe8();
      if ((uVar5 & 1) != 0) {
        lVar3 = *(long *)(param_3 + 0x4c0) + lVar2 * 0x40;
        func_0x000104c2fe00(lVar3,param_2 + 0x48);
        *(undefined8 *)(lVar3 + 0x38) = 0;
      }
      uStack_a8 = *(ulong *)(*(long *)(param_3 + 0x4c0) + lVar2 * 0x40 + 0x38);
      func_0x000104c2fe00(auStack_a0,param_2 + 0x48);
      uVar5 = uStack_a8;
      puVar6 = *(undefined8 **)(param_3 + 0x4e0);
      puVar8 = (undefined8 *)(param_3 + 0x4e0);
      while (puVar9 = puVar8, puVar6 != (undefined8 *)0x0) {
        while (puVar4 = puVar6, puVar8 = puVar4, (ulong)puVar4[4] <= uStack_a8) {
          if (uStack_a8 <= (ulong)puVar4[4]) goto LAB_10752f5dc;
          puVar6 = (undefined8 *)puVar4[1];
          if ((undefined8 *)puVar4[1] == (undefined8 *)0x0) {
            puVar9 = puVar4 + 1;
            goto LAB_10752f584;
          }
        }
        puVar6 = (undefined8 *)*puVar4;
      }
LAB_10752f584:
      puVar4 = (undefined8 *)0x60;
      __Znwm();
      puVar4[4] = uVar5;
      func_0x000104c318bc(puVar4 + 5,auStack_a0);
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = puVar8;
      *puVar9 = puVar4;
      if (**(long **)(param_3 + 0x4d8) != 0) {
        *(long *)(param_3 + 0x4d8) = **(long **)(param_3 + 0x4d8);
      }
      func_0x00010002c5b0(*(undefined8 *)(param_3 + 0x4e0),puVar4);
      *(long *)(param_3 + 0x4e8) = *(long *)(param_3 + 0x4e8) + 1;
LAB_10752f5dc:
      func_0x000104c2f714(auStack_a0);
      func_0x00010002c7d4();
      in_ZR = puVar4 == (undefined8 *)(param_3 + 0x4e0);
      if ((bool)in_ZR) {
        uStack_a8 = uStack_a8 & 0xffffffffffffff00;
        uStack_70 = 0;
      }
      else {
        func_0x00010729d1b0(&uStack_a8,puVar4 + 5);
      }
      lStack_b0 = *plVar7;
      *plVar7 = 0;
      plVar7 = *(long **)(param_3 + 0x90);
      if (plVar7 == (long *)0x0) goto LAB_10752f684;
      (**(code **)(*plVar7 + 0x30))(plVar7,&lStack_b0,&uStack_a8);
      lVar2 = lStack_b0;
      lStack_b0 = 0;
      if (lVar2 != 0) {
        func_0x000107530664();
      }
      func_0x00010724b3d8(&uStack_a8);
    }
    else {
      param_2 = param_2 + 0x48;
      FUN_10752f6bc(param_3 + 0x498,param_2);
      func_0x00010752f6ec(param_2 + 0x40,plVar7);
    }
  }
  *param_1 = 0;
  func_0x000107530670(uStack_68);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_10752f684:
  func_0x000104bfeb48();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10752f68c);
  (*pcVar1)();
}



/* Entry: 10752f6bc; end: 10752f723;  */

long FUN_10752f6bc(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long *unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  long unaff_x24;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 unaff_d8;
  undefined8 uVar5;
  undefined8 in_stack_00000000;
  long *in_stack_00000008;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  uVar5 = param_1;
  func_0x0001075307a8();
  func_0x000107530840(param_1,param_2,uVar5);
  func_0x00010753073c();
  uVar2 = extraout_x8;
  while( true ) {
    uVar2 = uVar2 & unaff_x22;
    uVar5 = *(undefined8 *)(unaff_x23 + uVar2);
    for (uVar3 = CONCAT17(-((char)((ulong)uVar5 >> 0x38) == (char)((ulong)unaff_d8 >> 0x38)),
                          CONCAT16(-((char)((ulong)uVar5 >> 0x30) == (char)((ulong)unaff_d8 >> 0x30)
                                    ),CONCAT15(-((char)((ulong)uVar5 >> 0x28) ==
                                                (char)((ulong)unaff_d8 >> 0x28)),
                                               CONCAT14(-((char)((ulong)uVar5 >> 0x20) ==
                                                         (char)((ulong)unaff_d8 >> 0x20)),
                                                        CONCAT13(-((char)((ulong)uVar5 >> 0x18) ==
                                                                  (char)((ulong)unaff_d8 >> 0x18)),
                                                                 CONCAT12(-((char)((ulong)uVar5 >>
                                                                                  0x10) ==
                                                                           (char)((ulong)unaff_d8 >>
                                                                                 0x10)),
                                                                          CONCAT11(-((char)((ulong)
                                                  uVar5 >> 8) == (char)((ulong)unaff_d8 >> 8)),
                                                  -((char)uVar5 == (char)unaff_d8)))))))) &
                 0x8080808080808080; uVar3 != 0; uVar3 = uVar3 - 1 & uVar3) {
      uVar4 = (uVar3 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar3 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar2 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) & unaff_x22;
      puVar1 = (undefined1 *)register0x00000008;
      in_stack_00000000 = unaff_x20;
      in_stack_00000008 = unaff_x19;
      FUN_107530294(&stack0x00000000,unaff_x24 + uVar4 * 0x48);
      if ((int)puVar1 != 0) {
        return *unaff_x19 + uVar4;
      }
    }
    func_0x0001075307d0();
    if ((extraout_x8_00 & 1) != 0) break;
    unaff_x21 = unaff_x21 + 8;
    uVar2 = unaff_x21 + uVar2;
  }
  return 0;
}



/* Entry: 10752f724; end: 10752fef3;  */

uint ****** FUN_10752f724(uint *param_1,uint ******param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 in_ZR;
  int iVar3;
  uint *puVar4;
  long lVar5;
  uint *****pppppuVar6;
  uint ******ppppppuVar7;
  uint ******ppppppuVar8;
  uint ******ppppppuVar9;
  undefined *puVar10;
  code *pcVar11;
  undefined8 extraout_x8;
  char *pcVar12;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  uint ******ppppppuVar13;
  uint ******unaff_x21;
  uint ******unaff_x23;
  uint *unaff_x24;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  byte bVar17;
  undefined8 unaff_d8;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  undefined8 unaff_d10;
  char cVar25;
  undefined8 uVar18;
  uint *puStack_1d0;
  uint *****pppppuStack_1c8;
  uint uStack_1c0;
  uint uStack_1bc;
  uint ***pppuStack_1b8;
  uint *puStack_1b0;
  uint *****pppppuStack_1a8;
  uint ****ppppuStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  uint *****pppppuStack_180;
  uint *puStack_178;
  ulong uStack_170;
  long lStack_168;
  uint *****pppppuStack_158;
  uint *****pppppuStack_150;
  code *pcStack_148;
  uint *****pppppuStack_118;
  uint *apuStack_108 [7];
  uint *****pppppuStack_d0;
  uint *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_98;
  
  puVar4 = param_1;
  func_0x0001075306f0();
  pppppuStack_180 = (uint *****)&UNK_10e52b660;
  puStack_178 = (uint *)0x0;
  uStack_170 = 0;
  lStack_168 = 0;
  ppppuStack_1a0 = (uint ****)0x0;
  uStack_198 = 0;
  uStack_190 = 0;
  ppppppuVar9 = (uint ******)&DAT_10f2c3ed3;
  uStack_98 = extraout_x8;
  func_0x000107327090();
  if (((ulong)puVar4 & 1) != 0) {
    ppppppuVar9 = (uint ******)&DAT_10f2c3ed3;
    unaff_x24 = param_1;
    FUN_107327234(param_1,&DAT_10f2c3ed3);
    in_ZR = 0;
    if (*(short *)((long)unaff_x24 + 0x16) == 4) {
      uVar2 = *unaff_x24;
      ppppppuVar9 = (uint ******)(ulong)uVar2;
      if ((uint ******)((long)pppppuStack_180[-1] + lStack_168) < ppppppuVar9) {
        if (uVar2 == 7) {
          pcVar12 = (char *)0x8;
        }
        else {
          pcVar12 = (char *)((ulong)((uVar2 - 1) / 7) + (long)ppppppuVar9);
        }
        FUN_1075302ac(&pppppuStack_180,0xffffffffffffffff >> (LZCOUNT(pcVar12) & 0x3fU));
        ppppppuVar9 = (uint ******)(ulong)*unaff_x24;
      }
      uStack_1c0 = param_3;
      func_0x0001072dd514(&ppppuStack_1a0,ppppppuVar9);
      pppuStack_1b8 = (uint ***)0x0;
      unaff_x23 = *(uint *******)(unaff_x24 + 2);
      ppppppuVar7 = unaff_x23 + (ulong)*unaff_x24 * 3;
      unaff_x24 = param_1 + 0x126;
      unaff_d8 = 0x8080808080808080;
      puStack_1b0 = param_1;
      while( true ) {
        ppppppuVar13 = (uint ******)&DAT_10f416301;
        unaff_x21 = &pppppuStack_d0;
        in_ZR = unaff_x23 == ppppppuVar7;
        if ((bool)in_ZR) break;
        if ((*(short *)((long)unaff_x23 + 0x16) == 3) &&
           (ppppppuVar8 = unaff_x23, ppppppuVar9 = (uint ******)"id", func_0x000107327090(),
           (int)ppppppuVar8 != 0)) {
          ppppppuVar9 = unaff_x23;
          FUN_107327234(unaff_x23,"id");
          if ((*(ushort *)((long)ppppppuVar9 + 0x16) >> 10 & 1) != 0) {
            if ((*(ushort *)((long)ppppppuVar9 + 0x16) >> 0xc & 1) == 0) {
              iVar3 = *(int *)ppppppuVar9;
              ppppppuVar9 = (uint ******)ppppppuVar9[1];
            }
            else {
              iVar3 = 0x15 - *(char *)((long)ppppppuVar9 + 0x15);
            }
            func_0x000104c302a4(&pppppuStack_d0,ppppppuVar9,iVar3);
            ppppppuVar9 = &pppppuStack_d0;
            puVar4 = unaff_x24;
            FUN_10752f6bc();
            if ((puVar4 == (uint *)0x0) &&
               (ppppppuVar8 = unaff_x23, func_0x000107327090(), ppppppuVar9 = ppppppuVar13,
               ((ulong)ppppppuVar8 & 1) == 0)) {
              Hint_Prefetch(*(undefined8 *)unaff_x24,0,2,0);
              ppppppuVar9 = &pppppuStack_d0;
              pppppuStack_1c8 = (uint *****)param_2;
              func_0x000104c2fe38(*(undefined8 *)unaff_x24,ppppppuVar9);
              uVar14 = *(ulong *)(puStack_1b0 + 0x12a);
              uStack_1bc = (uint)param_4;
              func_0x00010753082c();
              do {
                func_0x0001075307f0();
                cVar19 = (char)((ulong)unaff_d10 >> 8);
                cVar20 = (char)((ulong)unaff_d10 >> 0x10);
                cVar21 = (char)((ulong)unaff_d10 >> 0x18);
                cVar22 = (char)((ulong)unaff_d10 >> 0x20);
                cVar23 = (char)((ulong)unaff_d10 >> 0x28);
                cVar24 = (char)((ulong)unaff_d10 >> 0x30);
                cVar25 = (char)((ulong)unaff_d10 >> 0x38);
                for (; param_4 != (uint *)0x0;
                    param_4 = (uint *)((long)param_4 - 1U & (ulong)param_4)) {
                  uVar15 = ((ulong)param_4 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                           ((ulong)param_4 & 0x5555555555555555) << 1;
                  uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
                  uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
                  uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10
                  ;
                  pppppuStack_150 = (uint *****)&pppppuStack_d0;
                  ppppppuVar13 = &pppppuStack_150;
                  pcStack_148 = (code *)unaff_x24;
                  FUN_107530294(ppppppuVar13,
                                *(long *)(puStack_1b0 + 0x128) +
                                ((long)unaff_x21 +
                                 ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3) & uVar14) *
                                0x48);
                  if (((ulong)ppppppuVar13 & 1) != 0) goto LAB_10752f990;
                }
                bVar17 = NEON_umaxv(CONCAT17(-(cVar25 == -0x80),
                                             CONCAT16(-(cVar24 == -0x80),
                                                      CONCAT15(-(cVar23 == -0x80),
                                                               CONCAT14(-(cVar22 == -0x80),
                                                                        CONCAT13(-(cVar21 == -0x80),
                                                                                 CONCAT12(-(cVar20 
                                                  == -0x80),
                                                  CONCAT11(-(cVar19 == -0x80),
                                                           -((char)unaff_d10 == -0x80)))))))),1);
              } while ((bVar17 & 1) == 0);
              puVar4 = unaff_x24;
              func_0x00010753034c(unaff_x24,ppppppuVar9);
              lVar5 = *(long *)(puStack_1b0 + 0x128) + (long)puVar4 * 0x48;
              func_0x0001075307b8();
              *(uint *******)(lVar5 + 0x38) = unaff_x23;
              *(undefined8 *)(lVar5 + 0x40) = 0;
LAB_10752f990:
              puVar4 = puStack_1b0 + 0x12e;
              uVar14 = 0;
              FUN_10752ffe8();
              uVar2 = uStack_1bc;
              if ((uVar14 & 1) != 0) {
                lVar5 = *(long *)(puStack_1b0 + 0x130) + (long)puVar4 * 0x40;
                func_0x0001075307b8();
                *(uint ****)(lVar5 + 0x38) = pppuStack_1b8;
              }
              pppppuVar6 = (uint *****)0xa0;
              __Znwm();
              func_0x000100060964(&pppppuStack_150,&DAT_10f408ba3);
              FUN_10752de54(pppppuVar6,&pppppuStack_150);
              func_0x000107530734();
              *pppppuVar6 = (uint ****)&PTR_FUN_1109b9ef8;
              func_0x0001075307b8(pppppuVar6 + 9);
              pppppuVar6[0x10] = (uint ****)unaff_x23;
              *(char *)(pppppuVar6 + 0x11) = (char)uVar2;
              pppppuVar6[0x12] = (uint ****)pppuStack_1b8;
              pppppuVar6[0x13] = (uint ****)0x0;
              uVar1 = uStack_1c0;
              if (uVar2 != 0) {
                ppppppuVar9 = &pppppuStack_d0;
                func_0x000107278484(ppppppuVar9,&UNK_10f416305);
                uVar1 = uStack_1c0 + (int)ppppppuVar9;
              }
              FUN_1073b35b0(apuStack_108,&UNK_10f416314,9,&pppppuStack_d0);
              ppppppuVar9 = (uint ******)0x88;
              __Znwm();
              func_0x000104c318bc(&pppppuStack_150,apuStack_108);
              pppppuStack_158 = pppppuVar6;
              FUN_10752c548(ppppppuVar9,&pppppuStack_150,&pppppuStack_158,(ulong)uVar1);
              pppppuVar6 = pppppuStack_158;
              pppppuStack_158 = (uint *****)0x0;
              pppppuStack_1a8 = (uint *****)ppppppuVar9;
              if (pppppuVar6 != (uint *****)0x0) {
                func_0x000107530664();
              }
              func_0x000107530734();
              func_0x000104c2f714(apuStack_108);
              if (uVar2 != 0) {
                puVar10 = &DAT_10f41631e;
                ppppppuVar9 = (uint ******)pppppuStack_1c8;
                FUN_10752fef4();
                if (ppppppuVar9 != (uint ******)0x0) {
                  FUN_10752903c(pppppuStack_1a8,*(undefined8 *)(puVar10 + 0x38));
                }
              }
              ppppppuVar13 = (uint ******)pppppuStack_1a8;
              func_0x0001075307b8(&pppppuStack_150);
              pppppuStack_118 = (uint *****)ppppppuVar13;
              Hint_Prefetch(pppppuStack_180,0,2,0);
              ppppppuVar9 = &pppppuStack_150;
              func_0x000104c2fe38(pppppuStack_180,ppppppuVar9);
              uVar14 = uStack_170;
              param_1 = (uint *)0x0;
              func_0x00010753082c();
              while( true ) {
                func_0x0001075307f0();
                for (; ppppppuVar13 != (uint ******)0x0;
                    ppppppuVar13 = (uint ******)((long)ppppppuVar13 - 1U & (ulong)ppppppuVar13)) {
                  uVar15 = ((ulong)ppppppuVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                           ((ulong)ppppppuVar13 & 0x5555555555555555) << 1;
                  uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
                  uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
                  uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10
                  ;
                  puVar4 = puStack_178 +
                           ((ulong)uVar1 + ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3) &
                           uVar14) * 0x10;
                  func_0x000104c32db4(puVar4,&pppppuStack_150);
                  if (((ulong)puVar4 & 1) != 0) goto LAB_10752fb6c;
                }
                bVar17 = NEON_umaxv(CONCAT17(-(cVar25 == -0x80),
                                             CONCAT16(-(cVar24 == -0x80),
                                                      CONCAT15(-(cVar23 == -0x80),
                                                               CONCAT14(-(cVar22 == -0x80),
                                                                        CONCAT13(-(cVar21 == -0x80),
                                                                                 CONCAT12(-(cVar20 
                                                  == -0x80),
                                                  CONCAT11(-(cVar19 == -0x80),
                                                           -((char)unaff_d10 == -0x80)))))))),1);
                if ((bVar17 & 1) != 0) break;
                param_1 = param_1 + 2;
              }
              ppppppuVar13 = &pppppuStack_180;
              FUN_10753052c(ppppppuVar13,ppppppuVar9);
              puVar4 = puStack_178 + (long)ppppppuVar13 * 0x10;
              func_0x000104c318bc(puVar4,&pppppuStack_150);
              *(uint ******)(puVar4 + 0xe) = pppppuStack_118;
LAB_10752fb6c:
              func_0x000107530734();
              func_0x000104c2fe00(&pppppuStack_150,pppppuStack_1a8);
              pppppuStack_118 = pppppuStack_1a8;
              param_2 = (uint ******)pppppuStack_1c8;
              pppppuStack_1a8 = (uint *****)0x0;
              FUN_10752c598(apuStack_108,pppppuStack_1c8,&pppppuStack_150);
              func_0x0001075307c8();
              ppppppuVar9 = &pppppuStack_d0;
              func_0x0001072d17f4(&ppppuStack_1a0);
              param_4 = (uint *)(ulong)uStack_1bc;
              pppuStack_1b8 = (uint ***)((long)pppuStack_1b8 + 1);
              func_0x000107529e64(&pppppuStack_1a8);
            }
            func_0x0001075307c0();
          }
        }
        unaff_x23 = unaff_x23 + 3;
      }
      if (((ulong)param_4 & 1) == 0) {
        param_4 = (uint *)0x60;
        __Znwm();
        puStack_c8 = (uint *)uStack_198;
        pppppuStack_d0 = (uint *****)ppppuStack_1a0;
        uStack_c0 = uStack_190;
        uStack_198 = 0;
        uStack_190 = 0;
        ppppuStack_1a0 = (uint ****)0x0;
        func_0x000100060964(&pppppuStack_150,&UNK_10f416342);
        FUN_10752c4f4(param_4,&pppppuStack_150);
        func_0x000107530734();
        *(undefined ***)param_4 = &PTR_FUN_1109b9fb0;
        *(uint **)(param_4 + 0x14) = puStack_c8;
        *(uint ******)(param_4 + 0x12) = pppppuStack_d0;
        *(undefined8 *)(param_4 + 0x16) = uStack_c0;
        pppppuStack_d0 = (uint *****)0x0;
        puStack_c8 = (uint *)0x0;
        uStack_c0 = 0;
        func_0x00010726e078(&pppppuStack_d0);
        func_0x000100060964();
        unaff_x21 = (uint ******)0x88;
        __Znwm();
        func_0x000104c318bc(&pppppuStack_150,&pppppuStack_d0);
        apuStack_108[0] = param_4;
        FUN_10752c548(unaff_x21,&pppppuStack_150,apuStack_108,0);
        puVar4 = apuStack_108[0];
        apuStack_108[0] = (uint *)0x0;
        pppppuStack_158 = (uint *****)unaff_x21;
        if (puVar4 != (uint *)0x0) {
          func_0x000107530664();
        }
        func_0x000107530734();
        func_0x0001075307c0();
        pcStack_148 = (code *)puStack_178;
        pppppuStack_150 = pppppuStack_180;
        func_0x0001075305b4(&pppppuStack_150);
        pcVar11 = pcStack_148;
        ppppppuVar9 = (uint ******)pppppuStack_150;
        while (puStack_c8 = (uint *)pcVar11, ppppppuVar9 != (uint ******)0x0) {
          FUN_10752903c(pppppuStack_158,*(undefined8 *)((long)pcVar11 + 0x38));
          pppppuStack_d0 = (uint *****)((long)ppppppuVar9 + 1);
          puStack_c8 = (uint *)((long)pcVar11 + 0x40);
          func_0x0001075305b4(&pppppuStack_d0);
          param_4 = (uint *)pcVar11;
          pcVar11 = (code *)puStack_c8;
          ppppppuVar9 = (uint ******)pppppuStack_d0;
        }
        func_0x000104c2fe00(&pppppuStack_150,pppppuStack_158);
        pppppuStack_118 = pppppuStack_158;
        pppppuStack_158 = (uint *****)0x0;
        ppppppuVar9 = &pppppuStack_150;
        FUN_10752c598(&pppppuStack_d0,param_2,ppppppuVar9);
        func_0x0001075307c8();
        func_0x000107529e64(&pppppuStack_158);
      }
    }
  }
  func_0x00010726e078(&ppppuStack_1a0);
  ppppppuVar7 = &pppppuStack_180;
  FUN_10752ff44();
  func_0x000107530670(uStack_98);
  if ((bool)in_ZR) {
    return ppppppuVar7;
  }
  ___stack_chk_fail();
  func_0x000107529e64(&pppppuStack_1a8);
  func_0x0001075307c0();
  func_0x00010726e078(&ppppuStack_1a0);
  ppppppuVar13 = &pppppuStack_180;
  FUN_10752ff44();
  func_0x000107530814();
  Hint_Prefetch(*ppppppuVar13,0,2,0);
  ppppppuVar8 = ppppppuVar13;
  func_0x0001072cb490(*ppppppuVar13);
  pcVar11 = FUN_10752fef4;
  func_0x000107530840(ppppppuVar13,ppppppuVar9,ppppppuVar8);
  pppppuStack_150 = (uint *****)&stack0xfffffffffffffff0;
  pcStack_148 = pcVar11;
  func_0x00010753073c();
  uVar14 = extraout_x8_00;
  while( true ) {
    uVar14 = uVar14 & (ulong)param_1;
    uVar18 = *(undefined8 *)((long)unaff_x23 + uVar14);
    for (uVar15 = CONCAT17(-((char)((ulong)uVar18 >> 0x38) == (char)((ulong)unaff_d8 >> 0x38)),
                           CONCAT16(-((char)((ulong)uVar18 >> 0x30) ==
                                     (char)((ulong)unaff_d8 >> 0x30)),
                                    CONCAT15(-((char)((ulong)uVar18 >> 0x28) ==
                                              (char)((ulong)unaff_d8 >> 0x28)),
                                             CONCAT14(-((char)((ulong)uVar18 >> 0x20) ==
                                                       (char)((ulong)unaff_d8 >> 0x20)),
                                                      CONCAT13(-((char)((ulong)uVar18 >> 0x18) ==
                                                                (char)((ulong)unaff_d8 >> 0x18)),
                                                               CONCAT12(-((char)((ulong)uVar18 >>
                                                                                0x10) ==
                                                                         (char)((ulong)unaff_d8 >>
                                                                               0x10)),
                                                                        CONCAT11(-((char)((ulong)
                                                  uVar18 >> 8) == (char)((ulong)unaff_d8 >> 8)),
                                                  -((char)uVar18 == (char)unaff_d8)))))))) &
                  0x8080808080808080; uVar15 != 0; uVar15 = uVar15 - 1 & uVar15) {
      uVar16 = (uVar15 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar15 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      uVar16 = uVar14 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3) & (ulong)param_1;
      puStack_1d0 = param_4;
      pppppuStack_1c8 = (uint *****)ppppppuVar7;
      iVar3 = (int)&puStack_1d0;
      FUN_107530514(&puStack_1d0,unaff_x24 + uVar16 * 0x10);
      if (iVar3 != 0) {
        return (uint ******)((long)*ppppppuVar7 + uVar16);
      }
    }
    func_0x0001075307d0();
    if ((extraout_x8_01 & 1) != 0) break;
    unaff_x21 = unaff_x21 + 1;
    uVar14 = (long)unaff_x21 + uVar14;
  }
  return (uint ******)0x0;
}



/* Entry: 10752fef4; end: 10752ff2b;  */

long FUN_10752fef4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long *unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  long unaff_x24;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 unaff_d8;
  undefined8 uVar6;
  undefined8 in_stack_00000000;
  long *in_stack_00000008;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  Hint_Prefetch(*param_1,0,2,0);
  puVar1 = param_1;
  func_0x0001072cb490(*param_1);
  func_0x000107530840(param_1,param_2,puVar1);
  func_0x00010753073c();
  uVar3 = extraout_x8;
  while( true ) {
    uVar3 = uVar3 & unaff_x22;
    uVar6 = *(undefined8 *)(unaff_x23 + uVar3);
    for (uVar4 = CONCAT17(-((char)((ulong)uVar6 >> 0x38) == (char)((ulong)unaff_d8 >> 0x38)),
                          CONCAT16(-((char)((ulong)uVar6 >> 0x30) == (char)((ulong)unaff_d8 >> 0x30)
                                    ),CONCAT15(-((char)((ulong)uVar6 >> 0x28) ==
                                                (char)((ulong)unaff_d8 >> 0x28)),
                                               CONCAT14(-((char)((ulong)uVar6 >> 0x20) ==
                                                         (char)((ulong)unaff_d8 >> 0x20)),
                                                        CONCAT13(-((char)((ulong)uVar6 >> 0x18) ==
                                                                  (char)((ulong)unaff_d8 >> 0x18)),
                                                                 CONCAT12(-((char)((ulong)uVar6 >>
                                                                                  0x10) ==
                                                                           (char)((ulong)unaff_d8 >>
                                                                                 0x10)),
                                                                          CONCAT11(-((char)((ulong)
                                                  uVar6 >> 8) == (char)((ulong)unaff_d8 >> 8)),
                                                  -((char)uVar6 == (char)unaff_d8)))))))) &
                 0x8080808080808080; uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
      uVar5 = (uVar4 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar4 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar3 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) & unaff_x22;
      puVar2 = (undefined1 *)register0x00000008;
      in_stack_00000000 = unaff_x20;
      in_stack_00000008 = unaff_x19;
      FUN_107530514(&stack0x00000000,unaff_x24 + uVar5 * 0x40);
      if ((int)puVar2 != 0) {
        return *unaff_x19 + uVar5;
      }
    }
    func_0x0001075307d0();
    if ((extraout_x8_00 & 1) != 0) break;
    unaff_x21 = unaff_x21 + 8;
    uVar3 = unaff_x21 + uVar3;
  }
  return 0;
}



/* Entry: 10752ff2c; end: 10752ff2f;  */

undefined8 FUN_10752ff2c(undefined8 *param_1)

{
  undefined8 unaff_x19;
  
  *param_1 = &PTR_FUN_1109b9ef8;
  func_0x000107529574(param_1 + 0x13);
  func_0x000104c2f714(param_1 + 9);
  func_0x00010752cac0(param_1);
  func_0x000104c2f714();
  return unaff_x19;
}



/* Entry: 10752ff30; end: 10752ff43;  */

void FUN_10752ff30(void)

{
  FUN_10752ffa8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10752ff44; end: 10752ffa7;  */

long * FUN_10752ff44(long *param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    pcVar1 = (char *)*param_1;
    lVar2 = param_1[1];
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      if (-1 < *pcVar1) {
        func_0x000104c2f714(lVar2);
      }
      lVar2 = lVar2 + 0x40;
      pcVar1 = pcVar1 + 1;
    }
    __ZdlPv(*param_1 + -8);
  }
  return param_1;
}



/* Entry: 10752ffa8; end: 10752ffe7;  */

undefined8 FUN_10752ffa8(undefined8 *param_1)

{
  undefined8 unaff_x19;
  
  *param_1 = &PTR_FUN_1109b9ef8;
  func_0x000107529574(param_1 + 0x13);
  func_0x000104c2f714(param_1 + 9);
  func_0x00010752cac0(param_1);
  func_0x000104c2f714();
  return unaff_x19;
}



/* Entry: 10752ffe8; end: 1075300db;  */

undefined1  [16] FUN_10752ffe8(ulong *param_1,undefined8 param_2)

{
  byte bVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong extraout_x8;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint6 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  
  puVar2 = param_1;
  func_0x0001075307a8();
  lVar6 = 0;
  uVar7 = *param_1;
  uVar8 = param_1[2];
  uVar4 = uVar7 >> 0xc ^ (ulong)puVar2 >> 7;
  bVar1 = (byte)puVar2;
  uVar10 = CONCAT15(bVar1,CONCAT14(bVar1,CONCAT13(bVar1,CONCAT12(bVar1,CONCAT11(bVar1,bVar1))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar4 = uVar4 & uVar8;
    uVar11 = *(undefined8 *)(uVar7 + uVar4);
    for (uVar9 = CONCAT17(-((byte)((ulong)uVar11 >> 0x38) == (bVar1 & 0x7f)),
                          CONCAT16(-((byte)((ulong)uVar11 >> 0x30) == (bVar1 & 0x7f)),
                                   CONCAT15(-((char)((ulong)uVar11 >> 0x28) ==
                                             (char)(uVar10 >> 0x28)),
                                            CONCAT14(-((char)((ulong)uVar11 >> 0x20) ==
                                                      (char)(uVar10 >> 0x20)),
                                                     CONCAT13(-((char)((ulong)uVar11 >> 0x18) ==
                                                               (char)(uVar10 >> 0x18)),
                                                              CONCAT12(-((char)((ulong)uVar11 >>
                                                                               0x10) ==
                                                                        (char)(uVar10 >> 0x10)),
                                                                       CONCAT11(-((char)((ulong)
                                                  uVar11 >> 8) == (char)(uVar10 >> 8)),
                                                  -((char)uVar11 == (char)uVar10)))))))) &
                 0x8080808080808080; uVar9 != 0; uVar9 = uVar9 - 1 & uVar9) {
      uVar3 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      puVar5 = (ulong *)(uVar4 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) & uVar8);
      uVar3 = param_1[1] + (long)puVar5 * 0x40;
      func_0x000104c32db4(uVar3,param_2);
      if ((uVar3 & 1) != 0) {
        uVar11 = 0;
        goto LAB_10753009c;
      }
    }
    func_0x0001075307d0();
    if ((extraout_x8 & 1) != 0) break;
    lVar6 = lVar6 + 8;
    uVar4 = lVar6 + uVar4;
  }
  FUN_1075300dc(param_1,puVar2);
  uVar11 = 1;
  puVar5 = param_1;
LAB_10753009c:
  auVar12._8_8_ = uVar11;
  auVar12._0_8_ = puVar5;
  return auVar12;
}



/* Entry: 1075300dc; end: 107530153;  */

void FUN_1075300dc(long param_1)

{
  undefined1 in_ZR;
  bool bVar1;
  long lVar2;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long lVar3;
  
  func_0x000107530684();
  lVar2 = *unaff_x19;
  if ((*(long *)(lVar2 + -8) == 0) && (in_ZR = *(char *)(lVar2 + param_1) == -2, !(bool)in_ZR)) {
    bVar1 = 8 < (ulong)unaff_x19[2];
    in_ZR = unaff_x19[2] == 9;
    if ((bVar1) && (func_0x000107530774(), bVar1)) {
      func_0x000107530808();
    }
    else {
      func_0x0001075307e0();
      FUN_107530154();
    }
    func_0x00010753079c();
    lVar2 = *unaff_x19;
  }
  func_0x000107530608(lVar2);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107530788();
  FUN_107367a70();
  lVar3 = unaff_x19[1];
  for (lVar2 = 0; unaff_x23 != lVar2; lVar2 = lVar2 + 1) {
    if (-1 < *(char *)(unaff_x22 + lVar2)) {
      func_0x00010753081c();
      func_0x000107530700();
      func_0x0001075306a0();
      param_1 = lVar3 + param_1 * 0x40;
      FUN_1075301c8(param_1,unaff_x20);
    }
    unaff_x20 = unaff_x20 + 0x40;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 107530154; end: 1075301c7;  */

void FUN_107530154(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long lVar1;
  long lVar2;
  
  func_0x000107530788();
  FUN_107367a70();
  lVar2 = *(long *)(unaff_x19 + 8);
  for (lVar1 = 0; unaff_x23 != lVar1; lVar1 = lVar1 + 1) {
    if (-1 < *(char *)(unaff_x22 + lVar1)) {
      func_0x00010753081c();
      func_0x000107530700();
      func_0x0001075306a0();
      param_1 = lVar2 + param_1 * 0x40;
      FUN_1075301c8(param_1,unaff_x20);
    }
    unaff_x20 = unaff_x20 + 0x40;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 1075301c8; end: 1075301eb;  */

void FUN_1075301c8(undefined8 param_1,long param_2)

{
  undefined1 uStack_21;
  
  FUN_1074c50fc();
  if (*(uint *)(param_2 + 0x28) != 0xffffffff) {
    (*(code *)(&PTR_DAT_1107eb090)[*(uint *)(param_2 + 0x28)])(&uStack_21,param_2);
  }
  *(undefined4 *)(param_2 + 0x28) = 0xffffffff;
  return;
}



/* Entry: 1075301ec; end: 1075301fb;  */

long FUN_1075301ec(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x30);
  if (lVar1 == -1) {
    lVar1 = param_2;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(param_2);
    func_0x0001001030f4(lVar1,lVar1 + param_2);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return lVar1;
}



/* Entry: 1075301fc; end: 107530293;  */

long FUN_1075301fc(void)

{
  ulong uVar1;
  int iVar2;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long *unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  ulong uVar3;
  ulong uVar4;
  undefined8 unaff_d8;
  undefined8 uVar5;
  undefined8 in_stack_00000000;
  long *in_stack_00000008;
  
  func_0x000107530840();
  func_0x00010753073c();
  uVar3 = extraout_x8;
  while( true ) {
    uVar3 = uVar3 & unaff_x22;
    uVar5 = *(undefined8 *)(unaff_x23 + uVar3);
    for (uVar4 = CONCAT17(-((char)((ulong)uVar5 >> 0x38) == (char)((ulong)unaff_d8 >> 0x38)),
                          CONCAT16(-((char)((ulong)uVar5 >> 0x30) == (char)((ulong)unaff_d8 >> 0x30)
                                    ),CONCAT15(-((char)((ulong)uVar5 >> 0x28) ==
                                                (char)((ulong)unaff_d8 >> 0x28)),
                                               CONCAT14(-((char)((ulong)uVar5 >> 0x20) ==
                                                         (char)((ulong)unaff_d8 >> 0x20)),
                                                        CONCAT13(-((char)((ulong)uVar5 >> 0x18) ==
                                                                  (char)((ulong)unaff_d8 >> 0x18)),
                                                                 CONCAT12(-((char)((ulong)uVar5 >>
                                                                                  0x10) ==
                                                                           (char)((ulong)unaff_d8 >>
                                                                                 0x10)),
                                                                          CONCAT11(-((char)((ulong)
                                                  uVar5 >> 8) == (char)((ulong)unaff_d8 >> 8)),
                                                  -((char)uVar5 == (char)unaff_d8)))))))) &
                 0x8080808080808080; uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
      uVar1 = (uVar4 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar4 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      in_stack_00000000 = unaff_x20;
      in_stack_00000008 = unaff_x19;
      iVar2 = (int)&stack0x00000000;
      FUN_107530294();
      if (iVar2 != 0) {
        return *unaff_x19 +
               (uVar3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & unaff_x22);
      }
    }
    func_0x0001075307d0();
    if ((extraout_x8_00 & 1) != 0) break;
    unaff_x21 = unaff_x21 + 8;
    uVar3 = unaff_x21 + uVar3;
  }
  return 0;
}



/* Entry: 107530294; end: 1075302ab;  */

bool FUN_107530294(undefined8 *param_1,long param_2)

{
  long unaff_x20;
  
  func_0x000104c2fe38(param_2,*param_1,param_2 + 0x38);
  func_0x000104c345b0();
  func_0x000104c2fe38();
  return unaff_x20 == param_2;
}



/* Entry: 1075302ac; end: 10753031f;  */

void FUN_1075302ac(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long lVar1;
  long lVar2;
  
  func_0x000107530788();
  FUN_107367a70();
  lVar2 = *(long *)(unaff_x19 + 8);
  for (lVar1 = 0; unaff_x23 != lVar1; lVar1 = lVar1 + 1) {
    if (-1 < *(char *)(unaff_x22 + lVar1)) {
      func_0x00010753081c();
      func_0x000107530700();
      func_0x0001075306a0();
      param_1 = lVar2 + param_1 * 0x40;
      FUN_107530320(param_1,unaff_x20);
    }
    unaff_x20 = unaff_x20 + 0x40;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 107530320; end: 1075303cb;  */

void FUN_107530320(long param_1,long param_2)

{
  undefined1 uStack_21;
  
  func_0x000104c318bc();
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  if (*(uint *)(param_2 + 0x28) != 0xffffffff) {
    (*(code *)(&PTR_DAT_1107eb090)[*(uint *)(param_2 + 0x28)])(&uStack_21,param_2);
  }
  *(undefined4 *)(param_2 + 0x28) = 0xffffffff;
  return;
}



/* Entry: 1075303cc; end: 107530443;  */

void FUN_1075303cc(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long lVar1;
  long lVar2;
  
  func_0x000107530788();
  FUN_107324d80();
  lVar2 = *(long *)(unaff_x19 + 8);
  for (lVar1 = 0; unaff_x23 != lVar1; lVar1 = lVar1 + 1) {
    if (-1 < *(char *)(unaff_x22 + lVar1)) {
      func_0x00010753081c();
      func_0x000107530700();
      func_0x0001075306a0();
      param_1 = lVar2 + param_1 * 0x48;
      FUN_107530444(param_1,unaff_x20);
    }
    unaff_x20 = unaff_x20 + 0x48;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 107530444; end: 107530473;  */

long FUN_107530444(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000104c2fe00();
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  func_0x000107529574(param_2 + 0x40);
  func_0x00010752acd0();
  return param_2;
}



/* Entry: 107530474; end: 107530483;  */

long FUN_107530474(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x30);
  if (lVar1 == -1) {
    lVar1 = param_2;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(param_2);
    func_0x0001001030f4(lVar1,lVar1 + param_2);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return lVar1;
}



/* Entry: 107530484; end: 107530513;  */

long FUN_107530484(void)

{
  ulong uVar1;
  int iVar2;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long *unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  ulong uVar3;
  ulong uVar4;
  undefined8 unaff_d8;
  undefined8 uVar5;
  undefined8 in_stack_00000000;
  long *in_stack_00000008;
  
  func_0x000107530840();
  func_0x00010753073c();
  uVar3 = extraout_x8;
  while( true ) {
    uVar3 = uVar3 & unaff_x22;
    uVar5 = *(undefined8 *)(unaff_x23 + uVar3);
    for (uVar4 = CONCAT17(-((char)((ulong)uVar5 >> 0x38) == (char)((ulong)unaff_d8 >> 0x38)),
                          CONCAT16(-((char)((ulong)uVar5 >> 0x30) == (char)((ulong)unaff_d8 >> 0x30)
                                    ),CONCAT15(-((char)((ulong)uVar5 >> 0x28) ==
                                                (char)((ulong)unaff_d8 >> 0x28)),
                                               CONCAT14(-((char)((ulong)uVar5 >> 0x20) ==
                                                         (char)((ulong)unaff_d8 >> 0x20)),
                                                        CONCAT13(-((char)((ulong)uVar5 >> 0x18) ==
                                                                  (char)((ulong)unaff_d8 >> 0x18)),
                                                                 CONCAT12(-((char)((ulong)uVar5 >>
                                                                                  0x10) ==
                                                                           (char)((ulong)unaff_d8 >>
                                                                                 0x10)),
                                                                          CONCAT11(-((char)((ulong)
                                                  uVar5 >> 8) == (char)((ulong)unaff_d8 >> 8)),
                                                  -((char)uVar5 == (char)unaff_d8)))))))) &
                 0x8080808080808080; uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
      uVar1 = (uVar4 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar4 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      in_stack_00000000 = unaff_x20;
      in_stack_00000008 = unaff_x19;
      iVar2 = (int)&stack0x00000000;
      FUN_107530514();
      if (iVar2 != 0) {
        return *unaff_x19 +
               (uVar3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & unaff_x22);
      }
    }
    func_0x0001075307d0();
    if ((extraout_x8_00 & 1) != 0) break;
    unaff_x21 = unaff_x21 + 8;
    uVar3 = unaff_x21 + uVar3;
  }
  return 0;
}



/* Entry: 107530514; end: 10753052b;  */

bool FUN_107530514(undefined8 *param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x00010727a3f0(param_2,*param_1,param_2 + 0x38);
  _strlen();
  func_0x00010014c53c();
  func_0x00010014c2bc();
  func_0x000104c2fcd4();
  func_0x000104c2fcf0();
  iVar1 = (int)&stack0xffffffffffffffe0;
  if (unaff_x21 == unaff_x19) {
    func_0x000100067218(&stack0xffffffffffffffe0,unaff_x20,unaff_x19);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 10753052c; end: 1075305a3;  */

undefined * FUN_10753052c(undefined *param_1,undefined *param_2)

{
  undefined1 in_ZR;
  bool bVar1;
  long lVar2;
  long *unaff_x19;
  undefined *puVar3;
  
  func_0x000107530684();
  lVar2 = *unaff_x19;
  if ((*(long *)(lVar2 + -8) == 0) && (in_ZR = param_1[lVar2] == -2, !(bool)in_ZR)) {
    bVar1 = 8 < (ulong)unaff_x19[2];
    in_ZR = unaff_x19[2] == 9;
    if ((bVar1) && (func_0x000107530774(), bVar1)) {
      param_2 = &UNK_1109b9f80;
      func_0x000107530808();
    }
    else {
      func_0x0001075307e0();
      FUN_1075302ac();
    }
    func_0x00010753079c();
    lVar2 = *unaff_x19;
  }
  func_0x000107530608(lVar2);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar3 = *(undefined **)(param_2 + 0x30);
  if (puVar3 == (undefined *)0xffffffffffffffff) {
    puVar3 = param_2;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(param_2);
    func_0x0001001030f4(puVar3,puVar3 + (long)param_2);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return puVar3;
}



/* Entry: 1075305a4; end: 107530863;  */

long FUN_1075305a4(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x30);
  if (lVar1 == -1) {
    lVar1 = param_2;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(param_2);
    func_0x0001001030f4(lVar1,lVar1 + param_2);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return lVar1;
}



/* Entry: 107530864; end: 1075309cf;  */

void FUN_107530864(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined1 auStack_128 [144];
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar5 = *(long *)(param_1 + 0x50);
  lVar1 = param_2 + 0xf0;
  for (lVar12 = *(long *)(param_1 + 0x48); lVar12 != lVar5; lVar12 = lVar12 + 0x38) {
    lVar13 = lVar12;
    FUN_10752f6bc(param_2 + 0x498);
    lVar9 = *(long *)(lVar13 + 0x40);
    if (lVar9 != 0) {
      plVar3 = *(long **)(param_2 + 0xe8);
      if (plVar3 < *(long **)(param_2 + 0xf0)) {
        *(undefined8 *)(lVar13 + 0x40) = 0;
        plVar14 = plVar3 + 1;
        *plVar3 = lVar9;
      }
      else {
        lVar9 = param_2 + 0xe0;
        func_0x0001075309e8(lVar9,((long)plVar3 - *(long *)(param_2 + 0xe0) >> 3) + 1);
        lVar4 = *(long *)(param_2 + 0xe0);
        lVar6 = *(long *)(param_2 + 0xe8);
        lStack_68 = lVar1;
        if (lVar9 == 0) {
          lVar9 = 0;
          lVar7 = 0;
          lVar8 = lVar4;
          lVar11 = lVar6;
        }
        else {
          lVar7 = lVar1;
          FUN_107530a3c();
          lVar8 = *(long *)(param_2 + 0xe0);
          lVar11 = *(long *)(param_2 + 0xe8);
        }
        puVar2 = (undefined8 *)(lVar7 + (lVar6 - lVar4));
        uVar10 = *(undefined8 *)(lVar13 + 0x40);
        *(undefined8 *)(lVar13 + 0x40) = 0;
        lVar13 = (long)puVar2 - (lVar11 - lVar8);
        plVar14 = puVar2 + 1;
        *puVar2 = uVar10;
        _memcpy(lVar13);
        uStack_88 = *(undefined8 *)(param_2 + 0xe0);
        *(long *)(param_2 + 0xe0) = lVar13;
        *(long **)(param_2 + 0xe8) = plVar14;
        uStack_70 = *(undefined8 *)(param_2 + 0xf0);
        *(long *)(param_2 + 0xf0) = lVar7 + lVar9 * 8;
        uStack_80 = uStack_88;
        uStack_78 = uStack_88;
        FUN_107530a7c(&uStack_88);
      }
      *(long **)(param_2 + 0xe8) = plVar14;
    }
  }
  uStack_90 = 0;
  auStack_128[0] = 0;
  uStack_98 = 0;
  FUN_10752b994(param_4,&uStack_90,auStack_128);
  FUN_10752b5b8(auStack_128);
  __ZNSt13exception_ptrD1Ev(&uStack_90);
  return;
}



/* Entry: 1075309d0; end: 1075309d3;  */

undefined8 FUN_1075309d0(undefined8 *param_1)

{
  undefined8 unaff_x19;
  
  *param_1 = &PTR_FUN_1109b9fb0;
  func_0x00010726e078(param_1 + 9);
  func_0x00010752cac0(param_1);
  func_0x000104c2f714();
  return unaff_x19;
}



/* Entry: 1075309d4; end: 107530a3b;  */

void FUN_1075309d4(void)

{
  func_0x000107530af0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107530a3c; end: 107530a5f;  */

void FUN_107530a3c(void)

{
  FUN_107530a60();
  return;
}



/* Entry: 107530a60; end: 107530a7b;  */

long * FUN_107530a60(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_2 << 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_107530aac();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107530a7c; end: 107530aab;  */

long * FUN_107530a7c(long *param_1)

{
  FUN_107530aac();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107530aac; end: 107530ab3;  */

void FUN_107530aac(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
    func_0x000107529574();
  }
  return;
}



/* Entry: 107530ab4; end: 107530b1f;  */

void FUN_107530ab4(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
    func_0x000107529574();
  }
  return;
}



/* Entry: 107530b20; end: 107530ee7;  */

void FUN_107530b20(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined ***pppuVar2;
  code *pcVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  undefined ***pppuVar7;
  long lVar8;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  undefined1 auStack_110 [144];
  undefined1 uStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  undefined8 uStack_58;
  
  lVar8 = param_1;
  func_0x000107531494();
  iVar5 = (int)lVar8;
  uStack_58 = extraout_x8;
  func_0x000107531474();
  if (iVar5 != 0) {
    func_0x00010753146c();
  }
  pppuVar7 = (undefined ***)(param_2 + 0x98);
  func_0x0001077cac00(pppuVar7,param_2,param_3);
  func_0x000107531474();
  if ((int)pppuVar7 == 0) {
LAB_107530bbc:
    func_0x000107531474();
    if ((int)pppuVar7 != 0) {
      func_0x00010753146c();
      func_0x000107531488();
      func_0x0001077cae2c();
    }
    func_0x000107531474();
    if ((int)pppuVar7 != 0) {
      func_0x00010753146c();
      func_0x000107531488();
      func_0x0001077caf04();
    }
    func_0x000107531474();
    if ((int)pppuVar7 != 0) {
      func_0x00010753146c();
      func_0x000107531488();
      func_0x0001077cafa8();
    }
    func_0x000107531474();
    if ((int)pppuVar7 != 0) {
      func_0x00010753146c();
      if ((*(ushort *)((long)pppuVar7 + 0x16) >> 10 & 1) != 0) {
        iVar5 = *(int *)pppuVar7;
        pppuVar2 = (undefined ***)pppuVar7[1];
        if ((*(ushort *)((long)pppuVar7 + 0x16) & 0x1000) != 0) {
          iVar5 = 0x15 - *(char *)((long)pppuVar7 + 0x15);
          pppuVar2 = pppuVar7;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm
                  (&ppuStack_70,pppuVar2,iVar5);
        func_0x000100066230(param_2 + 0xb0,&ppuStack_70);
        pppuVar7 = &ppuStack_70;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      }
    }
    iVar5 = (int)pppuVar7;
    func_0x000107531474();
    if (iVar5 != 0) {
      func_0x00010753146c();
      func_0x000107531488();
      func_0x0001077cb334();
    }
    func_0x000107531474();
    if (iVar5 != 0) {
      func_0x00010753146c();
      func_0x000107531488();
      func_0x0001077cb418();
    }
    func_0x000107531474();
    if (iVar5 != 0) {
      func_0x00010753146c();
      func_0x000107531488();
      func_0x0001077d4d40();
    }
    func_0x000107531474();
    if (iVar5 != 0) {
      func_0x00010753146c();
      func_0x000107531488();
      func_0x0001077d4e2c();
    }
    func_0x000107531474();
    if (iVar5 != 0) {
      func_0x00010753146c();
      func_0x000107531488();
      func_0x0001077d4ed4();
    }
    func_0x000107531474();
    iVar6 = 0;
    if (iVar5 == 0) {
LAB_107530d98:
      func_0x000107531474();
      iVar5 = 0;
      if (iVar6 != 0) {
        func_0x00010753146c();
        func_0x000107531488();
        func_0x0001077d5334();
        lVar8 = *(long *)(param_1 + 0xa0);
        if (lVar8 == 0) {
          func_0x000104bfeb48();
          goto LAB_107530eb0;
        }
        func_0x0001075314dc();
        iVar5 = (int)lVar8;
        (*extraout_x8_02)();
      }
      func_0x000107531474();
      if (iVar5 != 0) {
        func_0x00010753146c();
        func_0x000107531488();
        func_0x0001077d53c8();
      }
      lVar1 = *(long *)(*(long *)(param_2 + 0x68) + 0x40);
      for (lVar8 = *(long *)(*(long *)(param_2 + 0x68) + 0x38); uVar4 = lVar8 == lVar1, !(bool)uVar4
          ; lVar8 = lVar8 + 0x20) {
        ppuStack_70 = &PTR_DAT_1131ad2e8;
        lStack_68 = param_2;
        if (*(long *)(lVar8 + 0x18) == 0) {
          func_0x000104bfeb48();
          goto LAB_107530eb0;
        }
        func_0x0001075314dc();
        (*extraout_x8_03)();
        func_0x0001072f5f6c(&ppuStack_70);
      }
      uStack_78 = 0;
      auStack_110[0] = 0;
      uStack_80 = 0;
      FUN_10752b994(param_4,&uStack_78,auStack_110);
      FUN_10752b5b8(auStack_110);
      __ZNSt13exception_ptrD1Ev(&uStack_78);
      func_0x000107531458(uStack_58);
      if ((bool)uVar4) {
        return;
      }
      ___stack_chk_fail();
      goto LAB_107530ea0;
    }
    func_0x00010753146c();
    func_0x000107531488();
    func_0x0001077d5214();
    lVar8 = *(long *)(param_1 + 0x80);
    if (lVar8 != 0) {
      func_0x0001075314dc();
      iVar6 = (int)lVar8;
      (*extraout_x8_01)();
      goto LAB_107530d98;
    }
  }
  else {
    func_0x00010753146c();
    func_0x000107531488();
    func_0x0001077cad3c();
    pppuVar7 = *(undefined ****)(param_1 + 0x60);
    if (pppuVar7 != (undefined ***)0x0) {
      func_0x0001075314dc();
      (*extraout_x8_00)();
      goto LAB_107530bbc;
    }
LAB_107530ea0:
    func_0x000104bfeb48();
  }
  func_0x000104bfeb48();
LAB_107530eb0:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x107530eb4);
  (*pcVar3)();
}



/* Entry: 107530ee8; end: 107531037;  */

void FUN_107530ee8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined4 *puVar7;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 *extraout_x8_02;
  long lStack_128;
  undefined1 auStack_120 [56];
  undefined8 uStack_e8;
  long alStack_a0 [3];
  undefined8 uStack_88;
  undefined4 uStack_7c;
  long alStack_78 [7];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107531494();
  uStack_7c = param_5;
  uStack_38 = extraout_x8;
  func_0x000100060964(alStack_78,&UNK_10f4163c1);
  FUN_107531110(alStack_a0,param_2,param_3,param_4);
  puVar7 = &uStack_7c;
  FUN_107531038(&uStack_88,alStack_78,alStack_a0);
  lVar1 = alStack_a0[0];
  alStack_a0[0] = 0;
  if (lVar1 != 0) {
    func_0x00010753147c();
  }
  func_0x000104c2f714(alStack_78);
  puVar5 = &UNK_10f4163d8;
  lVar1 = param_1;
  FUN_10752fef4();
  if (lVar1 != 0) {
    FUN_10752903c(uStack_88,*(undefined8 *)(puVar5 + 0x38));
  }
  func_0x000104c2fe00(alStack_78,uStack_88);
  uStack_40 = uStack_88;
  uStack_88 = 0;
  plVar6 = alStack_78;
  FUN_10752c598(alStack_a0,param_1);
  FUN_10752aa78(alStack_78);
  func_0x000107529e64();
  func_0x000107531458(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = &uStack_88;
  func_0x000107529e64();
  func_0x0001075314d4();
  func_0x000107531494();
  uVar3 = 0x88;
  uStack_e8 = extraout_x8_01;
  __Znwm();
  func_0x000104c318bc(auStack_120,puVar2);
  lStack_128 = *plVar6;
  *plVar6 = 0;
  FUN_10752c548(uVar3,auStack_120,&lStack_128,*puVar7);
  lVar1 = lStack_128;
  *extraout_x8_00 = uVar3;
  lStack_128 = 0;
  if (lVar1 != 0) {
    func_0x00010753147c();
  }
  puVar4 = auStack_120;
  func_0x000104c2f714();
  func_0x000107531458(uStack_e8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = lStack_128;
  lStack_128 = 0;
  if (lVar1 != 0) {
    func_0x00010753147c();
  }
  func_0x000104c2f714(auStack_120);
  __ZdlPv(uVar3);
  __Unwind_Resume(puVar4);
  uVar3 = 0xa8;
  __Znwm();
  FUN_107531274();
  *extraout_x8_02 = uVar3;
  return;
}



/* Entry: 107531038; end: 10753110f;  */

void FUN_107531038(undefined8 *param_1,undefined8 param_2,long *param_3,undefined4 *param_4)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  long lStack_88;
  undefined1 auStack_80 [56];
  undefined8 uStack_48;
  
  func_0x000107531494();
  uVar2 = 0x88;
  uStack_48 = extraout_x8;
  __Znwm();
  func_0x000104c318bc(auStack_80,param_2);
  lStack_88 = *param_3;
  *param_3 = 0;
  FUN_10752c548(uVar2,auStack_80,&lStack_88,*param_4);
  lVar1 = lStack_88;
  *param_1 = uVar2;
  lStack_88 = 0;
  if (lVar1 != 0) {
    func_0x00010753147c();
  }
  puVar3 = auStack_80;
  func_0x000104c2f714();
  func_0x000107531458(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = lStack_88;
  lStack_88 = 0;
  if (lVar1 != 0) {
    func_0x00010753147c();
  }
  func_0x000104c2f714(auStack_80);
  __ZdlPv(uVar2);
  __Unwind_Resume(puVar3);
  uVar2 = 0xa8;
  __Znwm();
  FUN_107531274();
  *extraout_x8_00 = uVar2;
  return;
}



/* Entry: 107531110; end: 107531177;  */

void FUN_107531110(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xa8;
  __Znwm();
  FUN_107531274();
  *param_1 = uVar1;
  return;
}



/* Entry: 107531178; end: 10753117b;  */

undefined8 FUN_107531178(undefined8 *param_1)

{
  undefined8 unaff_x19;
  
  *param_1 = &PTR_FUN_1109b9ff8;
  func_0x0001075311d8(param_1 + 0x11);
  func_0x00010753120c(param_1 + 0xd);
  func_0x000107531240(param_1 + 9);
  func_0x00010752cac0(param_1);
  func_0x000104c2f714();
  return unaff_x19;
}



/* Entry: 10753117c; end: 10753118f;  */

void FUN_10753117c(void)

{
  FUN_107531190();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107531190; end: 107531273;  */

undefined8 FUN_107531190(undefined8 *param_1)

{
  undefined8 unaff_x19;
  
  *param_1 = &PTR_FUN_1109b9ff8;
  func_0x0001075311d8(param_1 + 0x11);
  func_0x00010753120c(param_1 + 0xd);
  func_0x000107531240(param_1 + 9);
  func_0x00010752cac0(param_1);
  func_0x000104c2f714();
  return unaff_x19;
}



/* Entry: 107531274; end: 107531373;  */

undefined8 * FUN_107531274(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined1 auStack_80 [56];
  undefined8 uStack_48;
  
  func_0x000107531494();
  uStack_48 = extraout_x8;
  func_0x000100060964(auStack_80,&UNK_10f4163e0);
  FUN_10752c4f4(param_1,auStack_80);
  func_0x000104c2f714(auStack_80);
  *param_1 = &PTR_FUN_1109b9ff8;
  FUN_107531374(param_1 + 9,param_2);
  func_0x0001075313b8(param_1 + 0xd,param_3);
  puVar1 = param_1 + 0x11;
  func_0x0001075313fc();
  func_0x000107531458(uStack_48);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010753120c(param_1 + 0xd);
  func_0x000107531240(param_1 + 9);
  FUN_10752b718(param_1);
  __Unwind_Resume();
  lVar2 = *(long *)(param_4 + 0x18);
  if (lVar2 == 0) {
    puVar1[3] = 0;
  }
  else if (lVar2 == param_4) {
    func_0x000107531440();
  }
  else {
    func_0x0001075314b8();
    puVar1[3] = lVar2;
  }
  return puVar1;
}



/* Entry: 107531374; end: 10753143f;  */

long FUN_107531374(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    func_0x000107531440();
  }
  else {
    func_0x0001075314b8();
    *(long *)(param_1 + 0x18) = lVar1;
  }
  return param_1;
}



/* Entry: 107531440; end: 1075314e7;  */

void FUN_107531440(undefined8 param_1,long param_2)

{
  long unaff_x19;
  
  *(long *)(unaff_x19 + 0x18) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x000107531454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_2 + 0x18) + 0x18))();
  return;
}



/* Entry: 1075314e8; end: 107531583;  */

void FUN_1075314e8(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_2d8 [144];
  undefined1 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 uStack_208;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 auStack_140 [144];
  undefined1 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_60 [56];
  undefined8 uStack_28;
  
  func_0x000107531c64();
  func_0x000107531c88();
  func_0x000100060964(auStack_60);
  FUN_10752c4f4();
  func_0x000104c2f714(auStack_60);
  puVar4 = unaff_x19 + 9;
  *unaff_x19 = &PTR_FUN_1109ba040;
  func_0x000107531ae0();
  func_0x000107531c50(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_10752b718();
  __Unwind_Resume();
  func_0x000107531c88();
  uVar5 = unaff_x20;
  func_0x000107327090();
  if ((uVar5 & 1) == 0) {
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    FUN_107531b44(puVar4[0xc],&uStack_1d0);
    func_0x000107529598(&uStack_1d0);
    uStack_a8 = 0;
    auStack_140[0] = 0;
    uStack_b0 = 0;
    FUN_10752b994(param_4,&uStack_a8,auStack_140);
    FUN_10752b5b8(auStack_140);
    __ZNSt13exception_ptrD1Ev(&uStack_a8);
  }
  else {
    uStack_1d8 = param_3[1];
    uStack_1e0 = *param_3;
    if (param_3[1] != 0) {
      plVar1 = (long *)(param_3[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x00010732849c(&uStack_1f8,unaff_x20 + 0x4f0);
    func_0x00010002b838(&uStack_238,&UNK_10f4163ed);
    uStack_218 = uStack_230;
    uStack_220 = uStack_238;
    uStack_210 = uStack_228;
    uStack_230 = 0;
    uStack_228 = 0;
    uStack_238 = 0;
    uStack_208 = 1;
    FUN_1075375e8(&uStack_1d0,&uStack_1e0,param_3 + 2,&uStack_1f8,&uStack_220);
    func_0x0001001148fc(&uStack_220);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_238);
    func_0x000107323f70(&uStack_1f8);
    FUN_107323f90(&uStack_1e0);
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    uVar6 = *(undefined8 *)(unaff_x20 + 0x68);
    func_0x000107531c88();
    FUN_107327234(unaff_x20);
    func_0x0001077cb07c(&uStack_1f8,uVar6,unaff_x20,&uStack_1d0);
    FUN_107531b44(puVar4[0xc],&uStack_1f8);
    func_0x000107529598(&uStack_1f8);
    uStack_240 = 0;
    auStack_2d8[0] = 0;
    uStack_248 = 0;
    FUN_10752b994(param_4,&uStack_240,auStack_2d8);
    FUN_10752b5b8(auStack_2d8);
    __ZNSt13exception_ptrD1Ev(&uStack_240);
    func_0x000107324968(&uStack_1d0);
  }
  return;
}



/* Entry: 107531584; end: 1075317bf;  */

void FUN_107531584(long param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_278 [144];
  undefined1 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 uStack_1a8;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 auStack_e0 [144];
  undefined1 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107531c88();
  uVar4 = param_2;
  func_0x000107327090();
  if ((uVar4 & 1) == 0) {
    uStack_170 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    FUN_107531b44(*(undefined8 *)(param_1 + 0x60),&uStack_170);
    func_0x000107529598(&uStack_170);
    uStack_48 = 0;
    auStack_e0[0] = 0;
    uStack_50 = 0;
    FUN_10752b994(param_4,&uStack_48,auStack_e0);
    FUN_10752b5b8(auStack_e0);
    __ZNSt13exception_ptrD1Ev(&uStack_48);
  }
  else {
    uStack_178 = param_3[1];
    uStack_180 = *param_3;
    if (param_3[1] != 0) {
      plVar1 = (long *)(param_3[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x00010732849c(&uStack_198,param_2 + 0x4f0);
    func_0x00010002b838(&uStack_1d8,&UNK_10f4163ed);
    uStack_1b8 = uStack_1d0;
    uStack_1c0 = uStack_1d8;
    uStack_1b0 = uStack_1c8;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    uStack_1d8 = 0;
    uStack_1a8 = 1;
    FUN_1075375e8(&uStack_170,&uStack_180,param_3 + 2,&uStack_198,&uStack_1c0);
    func_0x0001001148fc(&uStack_1c0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_1d8);
    func_0x000107323f70(&uStack_198);
    FUN_107323f90(&uStack_180);
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    uVar5 = *(undefined8 *)(param_2 + 0x68);
    func_0x000107531c88();
    FUN_107327234(param_2);
    func_0x0001077cb07c(&uStack_198,uVar5,param_2,&uStack_170);
    FUN_107531b44(*(undefined8 *)(param_1 + 0x60),&uStack_198);
    func_0x000107529598(&uStack_198);
    uStack_1e0 = 0;
    auStack_278[0] = 0;
    uStack_1e8 = 0;
    FUN_10752b994(param_4,&uStack_1e0,auStack_278);
    FUN_10752b5b8(auStack_278);
    __ZNSt13exception_ptrD1Ev(&uStack_1e0);
    func_0x000107324968(&uStack_170);
  }
  return;
}



/* Entry: 1075317c0; end: 1075318e7;  */

void FUN_1075317c0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined4 *puVar7;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  long unaff_x19;
  long lStack_118;
  undefined1 auStack_110 [56];
  undefined8 uStack_d8;
  long alStack_90 [3];
  undefined8 uStack_78;
  undefined4 uStack_6c;
  long alStack_68 [7];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_6c = param_3;
  func_0x000107531c64();
  func_0x000107531c88();
  func_0x000100060964(alStack_68);
  FUN_1075319c8(alStack_90);
  puVar7 = &uStack_6c;
  FUN_1075318e8(&uStack_78,alStack_68,alStack_90);
  lVar1 = alStack_90[0];
  alStack_90[0] = 0;
  if (lVar1 != 0) {
    func_0x000107531c44();
  }
  func_0x000104c2f714(alStack_68);
  puVar5 = &UNK_10f4163f6;
  FUN_107531a18();
  if (unaff_x19 != 0) {
    FUN_10752903c(uStack_78,*(undefined8 *)(puVar5 + 0x38));
  }
  func_0x000104c2fe00(alStack_68,uStack_78);
  uStack_30 = uStack_78;
  uStack_78 = 0;
  plVar6 = alStack_68;
  FUN_10752c598(alStack_90);
  FUN_10752aa78(alStack_68);
  func_0x000107529e64();
  func_0x000107531c50(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = &uStack_78;
  func_0x000107529e64(puVar2);
  func_0x000107531c80();
  uStack_d8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = 0x88;
  __Znwm();
  func_0x000104c318bc(auStack_110,puVar2);
  lStack_118 = *plVar6;
  *plVar6 = 0;
  FUN_10752c548(uVar3,auStack_110,&lStack_118,*puVar7);
  lVar1 = lStack_118;
  *extraout_x8 = uVar3;
  lStack_118 = 0;
  if (lVar1 != 0) {
    func_0x000107531c44();
  }
  puVar4 = auStack_110;
  func_0x000104c2f714();
  func_0x000107531c50(uStack_d8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = lStack_118;
  lStack_118 = 0;
  if (lVar1 != 0) {
    func_0x000107531c44();
  }
  func_0x000104c2f714(auStack_110);
  __ZdlPv(uVar3);
  __Unwind_Resume(puVar4);
  uVar3 = 0x68;
  __Znwm();
  FUN_1075314e8();
  *extraout_x8_00 = uVar3;
  return;
}



/* Entry: 1075318e8; end: 1075319c7;  */

void FUN_1075318e8(undefined8 *param_1,undefined8 param_2,long *param_3,undefined4 *param_4)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 *extraout_x8;
  long lStack_88;
  undefined1 auStack_80 [56];
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = 0x88;
  __Znwm();
  func_0x000104c318bc(auStack_80,param_2);
  lStack_88 = *param_3;
  *param_3 = 0;
  FUN_10752c548(uVar2,auStack_80,&lStack_88,*param_4);
  lVar1 = lStack_88;
  *param_1 = uVar2;
  lStack_88 = 0;
  if (lVar1 != 0) {
    FUN_107531c44();
  }
  puVar3 = auStack_80;
  func_0x000104c2f714();
  func_0x000107531c50(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = lStack_88;
  lStack_88 = 0;
  if (lVar1 != 0) {
    FUN_107531c44();
  }
  func_0x000104c2f714(auStack_80);
  __ZdlPv(uVar2);
  __Unwind_Resume(puVar3);
  uVar2 = 0x68;
  __Znwm();
  FUN_1075314e8();
  *extraout_x8 = uVar2;
  return;
}



/* Entry: 1075319c8; end: 107531a17;  */

void FUN_1075319c8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x68;
  __Znwm();
  FUN_1075314e8();
  *param_1 = uVar1;
  return;
}



/* Entry: 107531a18; end: 107531a4f;  */

long FUN_107531a18(ulong *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  byte bVar11;
  uint6 uVar12;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  undefined8 uVar13;
  byte bVar19;
  
  Hint_Prefetch(*param_1,0,2,0);
  puVar4 = param_1;
  func_0x0001072cb490(*param_1);
  lVar7 = 0;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar8 = *param_1;
  uVar6 = uVar8 >> 0xc ^ (ulong)puVar4 >> 7;
  bVar3 = (byte)puVar4;
  uVar12 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar6 = uVar6 & uVar2;
    uVar13 = *(undefined8 *)(uVar8 + uVar6);
    cVar14 = (char)((ulong)uVar13 >> 8);
    cVar15 = (char)((ulong)uVar13 >> 0x10);
    cVar16 = (char)((ulong)uVar13 >> 0x18);
    cVar17 = (char)((ulong)uVar13 >> 0x20);
    cVar18 = (char)((ulong)uVar13 >> 0x28);
    bVar11 = (byte)((ulong)uVar13 >> 0x30);
    bVar19 = (byte)((ulong)uVar13 >> 0x38);
    for (uVar9 = CONCAT17(-(bVar19 == (bVar3 & 0x7f)),
                          CONCAT16(-(bVar11 == (bVar3 & 0x7f)),
                                   CONCAT15(-(cVar18 == (char)(uVar12 >> 0x28)),
                                            CONCAT14(-(cVar17 == (char)(uVar12 >> 0x20)),
                                                     CONCAT13(-(cVar16 == (char)(uVar12 >> 0x18)),
                                                              CONCAT12(-(cVar15 ==
                                                                        (char)(uVar12 >> 0x10)),
                                                                       CONCAT11(-(cVar14 ==
                                                                                 (char)(uVar12 >> 8)
                                                                                 ),-((char)uVar13 ==
                                                                                    (char)uVar12))))
                                                    )))) & 0x8080808080808080; uVar9 != 0;
        uVar9 = uVar9 - 1 & uVar9) {
      uVar10 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar6 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) & uVar2;
      lVar5 = uVar1 + uVar10 * 0x40;
      func_0x000107278484(lVar5,param_2);
      if ((int)lVar5 != 0) {
        return *param_1 + uVar10;
      }
    }
    bVar11 = NEON_umaxv(CONCAT17(-(bVar19 == 0x80),
                                 CONCAT16(-(bVar11 == 0x80),
                                          CONCAT15(-(cVar18 == -0x80),
                                                   CONCAT14(-(cVar17 == -0x80),
                                                            CONCAT13(-(cVar16 == -0x80),
                                                                     CONCAT12(-(cVar15 == -0x80),
                                                                              CONCAT11(-(cVar14 ==
                                                                                        -0x80),-((
                                                  char)uVar13 == -0x80)))))))),1);
    if ((bVar11 & 1) != 0) break;
    lVar7 = lVar7 + 8;
    uVar6 = lVar7 + uVar6;
  }
  return 0;
}



/* Entry: 107531a50; end: 107531a53;  */

undefined8 FUN_107531a50(undefined8 *param_1)

{
  undefined8 unaff_x19;
  
  *param_1 = &PTR_FUN_1109ba040;
  func_0x000107531a98(param_1 + 9);
  func_0x00010752cac0(param_1);
  func_0x000104c2f714();
  return unaff_x19;
}



/* Entry: 107531a54; end: 107531a67;  */

void FUN_107531a54(void)

{
  FUN_107531a68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107531a68; end: 107531b43;  */

undefined8 FUN_107531a68(undefined8 *param_1)

{
  undefined8 unaff_x19;
  
  *param_1 = &PTR_FUN_1109ba040;
  func_0x000107531a98(param_1 + 9);
  func_0x00010752cac0(param_1);
  func_0x000104c2f714();
  return unaff_x19;
}



/* Entry: 107531b44; end: 107531b5f;  */

ulong * FUN_107531b44(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  uint6 uVar11;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  undefined8 uVar12;
  byte bVar18;
  
  if (param_1 != (ulong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000107531b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x30))();
    return param_1;
  }
  func_0x000104bfeb48();
  lVar6 = 0;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar7 = *param_1;
  uVar5 = uVar7 >> 0xc ^ param_3 >> 7;
  bVar3 = (byte)param_3;
  uVar11 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar5 = uVar5 & uVar2;
    uVar12 = *(undefined8 *)(uVar7 + uVar5);
    cVar13 = (char)((ulong)uVar12 >> 8);
    cVar14 = (char)((ulong)uVar12 >> 0x10);
    cVar15 = (char)((ulong)uVar12 >> 0x18);
    cVar16 = (char)((ulong)uVar12 >> 0x20);
    cVar17 = (char)((ulong)uVar12 >> 0x28);
    bVar10 = (byte)((ulong)uVar12 >> 0x30);
    bVar18 = (byte)((ulong)uVar12 >> 0x38);
    for (uVar8 = CONCAT17(-(bVar18 == (bVar3 & 0x7f)),
                          CONCAT16(-(bVar10 == (bVar3 & 0x7f)),
                                   CONCAT15(-(cVar17 == (char)(uVar11 >> 0x28)),
                                            CONCAT14(-(cVar16 == (char)(uVar11 >> 0x20)),
                                                     CONCAT13(-(cVar15 == (char)(uVar11 >> 0x18)),
                                                              CONCAT12(-(cVar14 ==
                                                                        (char)(uVar11 >> 0x10)),
                                                                       CONCAT11(-(cVar13 ==
                                                                                 (char)(uVar11 >> 8)
                                                                                 ),-((char)uVar12 ==
                                                                                    (char)uVar11))))
                                                    )))) & 0x8080808080808080; uVar8 != 0;
        uVar8 = uVar8 - 1 & uVar8) {
      uVar9 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar5 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) & uVar2;
      lVar4 = uVar1 + uVar9 * 0x40;
      func_0x000107278484(lVar4,param_2);
      if ((int)lVar4 != 0) {
        return (ulong *)(*param_1 + uVar9);
      }
    }
    bVar10 = NEON_umaxv(CONCAT17(-(bVar18 == 0x80),
                                 CONCAT16(-(bVar10 == 0x80),
                                          CONCAT15(-(cVar17 == -0x80),
                                                   CONCAT14(-(cVar16 == -0x80),
                                                            CONCAT13(-(cVar15 == -0x80),
                                                                     CONCAT12(-(cVar14 == -0x80),
                                                                              CONCAT11(-(cVar13 ==
                                                                                        -0x80),-((
                                                  char)uVar12 == -0x80)))))))),1);
    if ((bVar10 & 1) != 0) break;
    lVar6 = lVar6 + 8;
    uVar5 = lVar6 + uVar5;
  }
  return (ulong *)0x0;
}



/* Entry: 107531b60; end: 107531c43;  */

long FUN_107531b60(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  uint6 uVar11;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  undefined8 uVar12;
  byte bVar18;
  
  lVar6 = 0;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar7 = *param_1;
  uVar5 = uVar7 >> 0xc ^ param_3 >> 7;
  bVar3 = (byte)param_3;
  uVar11 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar5 = uVar5 & uVar2;
    uVar12 = *(undefined8 *)(uVar7 + uVar5);
    cVar13 = (char)((ulong)uVar12 >> 8);
    cVar14 = (char)((ulong)uVar12 >> 0x10);
    cVar15 = (char)((ulong)uVar12 >> 0x18);
    cVar16 = (char)((ulong)uVar12 >> 0x20);
    cVar17 = (char)((ulong)uVar12 >> 0x28);
    bVar10 = (byte)((ulong)uVar12 >> 0x30);
    bVar18 = (byte)((ulong)uVar12 >> 0x38);
    for (uVar8 = CONCAT17(-(bVar18 == (bVar3 & 0x7f)),
                          CONCAT16(-(bVar10 == (bVar3 & 0x7f)),
                                   CONCAT15(-(cVar17 == (char)(uVar11 >> 0x28)),
                                            CONCAT14(-(cVar16 == (char)(uVar11 >> 0x20)),
                                                     CONCAT13(-(cVar15 == (char)(uVar11 >> 0x18)),
                                                              CONCAT12(-(cVar14 ==
                                                                        (char)(uVar11 >> 0x10)),
                                                                       CONCAT11(-(cVar13 ==
                                                                                 (char)(uVar11 >> 8)
                                                                                 ),-((char)uVar12 ==
                                                                                    (char)uVar11))))
                                                    )))) & 0x8080808080808080; uVar8 != 0;
        uVar8 = uVar8 - 1 & uVar8) {
      uVar9 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar5 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) & uVar2;
      lVar4 = uVar1 + uVar9 * 0x40;
      func_0x000107278484(lVar4,param_2);
      if ((int)lVar4 != 0) {
        return *param_1 + uVar9;
      }
    }
    bVar10 = NEON_umaxv(CONCAT17(-(bVar18 == 0x80),
                                 CONCAT16(-(bVar10 == 0x80),
                                          CONCAT15(-(cVar17 == -0x80),
                                                   CONCAT14(-(cVar16 == -0x80),
                                                            CONCAT13(-(cVar15 == -0x80),
                                                                     CONCAT12(-(cVar14 == -0x80),
                                                                              CONCAT11(-(cVar13 ==
                                                                                        -0x80),-((
                                                  char)uVar12 == -0x80)))))))),1);
    if ((bVar10 & 1) != 0) break;
    lVar6 = lVar6 + 8;
    uVar5 = lVar6 + uVar5;
  }
  return 0;
}



/* Entry: 107531c44; end: 107531caf;  */

void FUN_107531c44(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107531c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 107531cb0; end: 107531e87;  */

void FUN_107531cb0(undefined8 *param_1,long param_2,long param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  long lVar12;
  ulong uVar13;
  byte bVar14;
  uint6 uVar15;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  undefined8 uVar16;
  byte bVar22;
  long lStack_90;
  ulong *puStack_88;
  
  puVar11 = (ulong *)(param_2 + 0x68);
  lVar12 = param_2 + 0x48;
  Hint_Prefetch(*puVar11,0,2,0);
  puVar3 = puVar11;
  func_0x0001072a02f8(*puVar11,puVar11,lVar12);
  lVar7 = 0;
  lVar6 = *(long *)(param_2 + 0x70);
  uVar8 = *(ulong *)(param_2 + 0x78);
  uVar9 = *puVar11;
  uVar5 = uVar9 >> 0xc ^ (ulong)puVar3 >> 7;
  bVar1 = (byte)puVar3;
  uVar15 = CONCAT15(bVar1,CONCAT14(bVar1,CONCAT13(bVar1,CONCAT12(bVar1,CONCAT11(bVar1,bVar1))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar5 = uVar5 & uVar8;
    uVar16 = *(undefined8 *)(uVar9 + uVar5);
    cVar17 = (char)((ulong)uVar16 >> 8);
    cVar18 = (char)((ulong)uVar16 >> 0x10);
    cVar19 = (char)((ulong)uVar16 >> 0x18);
    cVar20 = (char)((ulong)uVar16 >> 0x20);
    cVar21 = (char)((ulong)uVar16 >> 0x28);
    bVar14 = (byte)((ulong)uVar16 >> 0x30);
    bVar22 = (byte)((ulong)uVar16 >> 0x38);
    for (uVar10 = CONCAT17(-(bVar22 == (bVar1 & 0x7f)),
                           CONCAT16(-(bVar14 == (bVar1 & 0x7f)),
                                    CONCAT15(-(cVar21 == (char)(uVar15 >> 0x28)),
                                             CONCAT14(-(cVar20 == (char)(uVar15 >> 0x20)),
                                                      CONCAT13(-(cVar19 == (char)(uVar15 >> 0x18)),
                                                               CONCAT12(-(cVar18 ==
                                                                         (char)(uVar15 >> 0x10)),
                                                                        CONCAT11(-(cVar17 ==
                                                                                  (char)(uVar15 >> 8
                                                                                        )),
                                                                                 -((char)uVar16 ==
                                                                                  (char)uVar15))))))
                                   )) & 0x8080808080808080; uVar10 != 0;
        uVar10 = uVar10 - 1 & uVar10) {
      uVar13 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar5 + ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3) & uVar8;
      plVar4 = &lStack_90;
      lStack_90 = lVar12;
      puStack_88 = puVar11;
      FUN_107532334(plVar4,lVar6 + uVar13 * 0x60);
      if (((ulong)plVar4 & 1) != 0) {
        lVar7 = *(long *)(param_2 + 0x70) + uVar13 * 0x60;
        plVar4 = (long *)(param_3 + 0x348);
        FUN_107531e88(plVar4,lVar12);
        if (plVar4[3] != 0) {
          func_0x000107529284(plVar4,plVar4[2]);
          plVar4[2] = 0;
          puVar2 = (undefined8 *)*plVar4;
          for (lVar6 = plVar4[1]; lVar6 != 0; lVar6 = lVar6 + -1) {
            *puVar2 = 0;
            puVar2 = puVar2 + 1;
          }
          plVar4[3] = 0;
        }
        uVar16 = *(undefined8 *)(lVar7 + 0x38);
        *(undefined8 *)(lVar7 + 0x38) = 0;
        FUN_1075327ec(plVar4,uVar16);
        lVar6 = *(long *)(lVar7 + 0x48);
        lVar12 = *(long *)(lVar7 + 0x40);
        plVar4[2] = lVar6;
        plVar4[1] = lVar12;
        *(undefined8 *)(lVar7 + 0x40) = 0;
        lVar12 = *(long *)(lVar7 + 0x50);
        plVar4[3] = lVar12;
        *(undefined4 *)(plVar4 + 4) = *(undefined4 *)(lVar7 + 0x58);
        if (lVar12 != 0) {
          uVar5 = *(ulong *)(lVar6 + 8);
          uVar8 = plVar4[1];
          if ((uVar8 & uVar8 - 1) == 0) {
            uVar5 = uVar8 - 1 & uVar5;
          }
          else if (uVar8 <= uVar5) {
            uVar9 = 0;
            if (uVar8 != 0) {
              uVar9 = uVar5 / uVar8;
            }
            uVar5 = uVar5 - uVar9 * uVar8;
          }
          *(long **)(*plVar4 + uVar5 * 8) = plVar4 + 2;
          *(long *)(lVar7 + 0x48) = 0;
          *(undefined8 *)(lVar7 + 0x50) = 0;
        }
        goto LAB_107531e5c;
      }
    }
    bVar14 = NEON_umaxv(CONCAT17(-(bVar22 == 0x80),
                                 CONCAT16(-(bVar14 == 0x80),
                                          CONCAT15(-(cVar21 == -0x80),
                                                   CONCAT14(-(cVar20 == -0x80),
                                                            CONCAT13(-(cVar19 == -0x80),
                                                                     CONCAT12(-(cVar18 == -0x80),
                                                                              CONCAT11(-(cVar17 ==
                                                                                        -0x80),-((
                                                  char)uVar16 == -0x80)))))))),1);
    if ((bVar14 & 1) != 0) break;
    lVar7 = lVar7 + 8;
    uVar5 = lVar7 + uVar5;
  }
LAB_107531e5c:
  *param_1 = 0;
  return;
}



/* Entry: 107531e88; end: 107531eaf;  */

long FUN_107531e88(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  FUN_10753234c(auStack_28);
  return lStack_20 + 0x38;
}



/* Entry: 107531eb0; end: 1075322db;  */

uint * FUN_107531eb0(uint *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined1 in_ZR;
  uint *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  int *piVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint *unaff_x24;
  int *piVar13;
  int *piVar14;
  undefined8 uStack_220;
  uint auStack_218 [6];
  undefined *puStack_200;
  undefined8 uStack_1f8;
  uint *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined **ppuStack_1e0;
  undefined8 *puStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 auStack_180 [3];
  undefined8 uStack_168;
  long lStack_80;
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_1;
  func_0x000107327090(param_1,&DAT_10f4163ff);
  if ((int)puVar7 != 0) {
    FUN_107327234(param_1,&DAT_10f4163ff);
    in_ZR = 0;
    puVar7 = param_1;
    if (*(short *)((long)param_1 + 0x16) == 3) {
      piVar13 = *(int **)(param_1 + 2);
      piVar14 = piVar13 + (ulong)*param_1 * 0xc;
      for (; in_ZR = piVar13 == piVar14, puVar7 = param_1, !(bool)in_ZR; piVar13 = piVar13 + 0xc) {
        if ((*(ushort *)((long)piVar13 + 0x16) >> 0xc & 1) == 0) {
          iVar3 = *piVar13;
          piVar10 = *(int **)(piVar13 + 2);
        }
        else {
          iVar3 = 0x15 - *(char *)((long)piVar13 + 0x15);
          piVar10 = piVar13;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm
                  (auStack_218,piVar10,iVar3);
        unaff_x24 = (uint *)0x88;
        __Znwm();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (&ppuStack_1e0,auStack_218);
        func_0x000100060964(&uStack_1a0,"trigger");
        puVar11 = &uStack_1a0;
        FUN_10752de54(unaff_x24);
        FUN_10753283c();
        lVar6 = lStack_1d0;
        *(undefined ***)unaff_x24 = &PTR_FUN_1109ba088;
        *(undefined8 **)(unaff_x24 + 0x14) = puStack_1d8;
        *(undefined ***)(unaff_x24 + 0x12) = ppuStack_1e0;
        ppuStack_1e0 = (undefined **)0x0;
        puStack_1d8 = (undefined8 *)0x0;
        lStack_1d0 = 0;
        *(long *)(unaff_x24 + 0x16) = lVar6;
        *(int **)(unaff_x24 + 0x18) = piVar13 + 6;
        *(undefined **)(unaff_x24 + 0x1a) = &UNK_10e52b660;
        unaff_x24[0x1c] = 0;
        unaff_x24[0x1d] = 0;
        unaff_x24[0x1e] = 0;
        unaff_x24[0x1f] = 0;
        unaff_x24[0x20] = 0;
        unaff_x24[0x21] = 0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_1e0);
        puStack_200 = &UNK_10f416408;
        uStack_1f8 = 0xb;
        puVar7 = auStack_218;
        func_0x0001005d466c();
        uStack_188 = 0x100;
        lStack_190 = 0;
        uStack_1a0 = &PTR_DAT_1109965d0;
        lStack_80 = 0;
        puVar12 = (undefined8 *)&UNK_10f416408;
        puStack_1f0 = puVar7;
        puStack_1e8 = puVar11;
        puStack_198 = auStack_180;
        func_0x0001003a9984(&uStack_1a0,&UNK_10f416408,0xb,0xd,&puStack_1f0,0);
        uVar2 = lStack_190 + lStack_80;
        if (uVar2 < 0x26) {
          uStack_1a0 = (undefined **)
                       (CONCAT62((int6)((ulong)uStack_1a0 >> 0x10),(short)uVar2) &
                       0xffffffffff00ffff);
          *(undefined1 *)((long)&uStack_1a0 + 2 + uVar2) = 0;
          FUN_107532804(&puStack_200,auStack_218,(long)&uStack_1a0 + 2,0x26);
          puStack_1d8 = puStack_198;
          ppuStack_1e0 = uStack_1a0;
          uStack_1c8 = uStack_188;
          lStack_1d0 = lStack_190;
          uStack_1c0 = auStack_180[0];
          uStack_1b8 = 1;
          uStack_1b0 = 0xffffffffffffffff;
        }
        else if (uVar2 < 0x52) {
          func_0x000104c302d8(&uStack_1a0,0,0);
          *(short *)uStack_1a0 = (short)uVar2;
          *(undefined1 *)((long)uStack_1a0 + uVar2 + 2) = 0;
          FUN_107532804(&puStack_200,auStack_218,(undefined2 *)((long)uStack_1a0 + 2),0x52);
          puStack_1d8 = puStack_198;
          ppuStack_1e0 = uStack_1a0;
          if (puStack_198 != (undefined8 *)0x0) {
            plVar1 = puStack_198 + 1;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = *plVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          uStack_1b8 = 2;
          uStack_1b0 = 0xffffffffffffffff;
          func_0x000104c2f784(&uStack_1a0);
        }
        else {
          puVar7 = auStack_218;
          func_0x0001005d466c();
          puStack_1f0 = puVar7;
          puStack_1e8 = puVar12;
          func_0x0001003a9204(&uStack_1a0,puStack_200,uStack_1f8,0xd,&puStack_1f0);
          func_0x0001072625b4(&ppuStack_1e0,&uStack_1a0);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_1a0);
        }
        uVar8 = 0x88;
        __Znwm();
        func_0x000104c318bc(&uStack_1a0,&ppuStack_1e0);
        puStack_1f0 = unaff_x24;
        FUN_10752c548(uVar8,&uStack_1a0,&puStack_1f0,param_3);
        puVar7 = puStack_1f0;
        puStack_1f0 = (uint *)0x0;
        uStack_220 = uVar8;
        if (puVar7 != (uint *)0x0) {
          func_0x000107532844();
        }
        FUN_10753283c();
        func_0x000104c2f714(&ppuStack_1e0);
        func_0x000104c2fe00(&uStack_1a0,uStack_220);
        uStack_168 = uStack_220;
        uStack_220 = 0;
        FUN_10752c598(&ppuStack_1e0,param_2,&uStack_1a0);
        FUN_10752aa78(&uStack_1a0);
        func_0x000107529e64(&uStack_220);
        param_1 = auStack_218;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      }
    }
  }
  func_0x000107532850(uStack_70);
  if ((bool)in_ZR) {
    return puVar7;
  }
  ___stack_chk_fail();
  func_0x000104c2f784(&uStack_1a0);
  (**(code **)(*(long *)unaff_x24 + 8))(unaff_x24);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_218);
  puVar9 = puVar7;
  __Unwind_Resume();
  *(undefined ***)puVar9 = &PTR_FUN_1109ba088;
  FUN_1075291c8(puVar9 + 0x1a);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar9 + 0x12);
  func_0x00010752cac0(puVar9);
  func_0x000104c2f714();
  return puVar7;
}



/* Entry: 1075322dc; end: 1075322df;  */

undefined8 FUN_1075322dc(undefined8 *param_1)

{
  undefined8 unaff_x19;
  
  *param_1 = &PTR_FUN_1109ba088;
  FUN_1075291c8(param_1 + 0xd);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 9);
  func_0x00010752cac0(param_1);
  func_0x000104c2f714();
  return unaff_x19;
}



/* Entry: 1075322e0; end: 1075322f3;  */

void FUN_1075322e0(void)

{
  FUN_1075322f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1075322f4; end: 107532333;  */

undefined8 FUN_1075322f4(undefined8 *param_1)

{
  undefined8 unaff_x19;
  
  *param_1 = &PTR_FUN_1109ba088;
  FUN_1075291c8(param_1 + 0xd);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 9);
  func_0x00010752cac0(param_1);
  func_0x000104c2f714();
  return unaff_x19;
}



/* Entry: 107532334; end: 10753234b;  */

bool FUN_107532334(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  bool bVar4;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  
  func_0x0001072856b0(param_2,*param_1,param_2 + 0x38);
  func_0x000104c2fcd4();
  func_0x000104c2fcf0();
  uVar1 = unaff_x19[1];
  puVar2 = (undefined8 *)*unaff_x19;
  if (-1 < (char)*(byte *)((long)unaff_x19 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)unaff_x19 + 0x17);
    puVar2 = unaff_x19;
  }
  iVar3 = (int)&stack0xffffffffffffffe0;
  if (unaff_x20 == uVar1) {
    func_0x000100067218(&stack0xffffffffffffffe0,puVar2,uVar1);
    bVar4 = iVar3 == 0;
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}



/* Entry: 10753234c; end: 1075323bb;  */

void FUN_10753234c(long *param_1,long *param_2,ulong param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  
  plVar2 = param_2;
  uVar3 = param_3;
  FUN_1075323bc();
  if ((uVar3 & 1) != 0) {
    FUN_107532798(param_2[1] + (long)plVar2 * 0x60,param_3);
  }
  lVar1 = param_2[1];
  *param_1 = *param_2 + (long)plVar2;
  param_1[1] = lVar1 + (long)plVar2 * 0x60;
  *(char *)(param_1 + 2) = (char)uVar3;
  return;
}



/* Entry: 1075323bc; end: 1075324cf;  */

undefined1  [16] FUN_1075323bc(ulong *param_1,undefined8 param_2)

{
  byte bVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  uint6 uVar11;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  undefined8 uVar12;
  byte bVar18;
  undefined1 auVar19 [16];
  undefined8 uStack_90;
  ulong *puStack_88;
  
  Hint_Prefetch(*param_1,0,2,0);
  puVar2 = param_1;
  func_0x0001072a02f8(*param_1);
  lVar6 = 0;
  uVar7 = *param_1;
  uVar8 = param_1[2];
  uVar4 = uVar7 >> 0xc ^ (ulong)puVar2 >> 7;
  bVar1 = (byte)puVar2;
  uVar11 = CONCAT15(bVar1,CONCAT14(bVar1,CONCAT13(bVar1,CONCAT12(bVar1,CONCAT11(bVar1,bVar1))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar4 = uVar4 & uVar8;
    uVar12 = *(undefined8 *)(uVar7 + uVar4);
    cVar13 = (char)((ulong)uVar12 >> 8);
    cVar14 = (char)((ulong)uVar12 >> 0x10);
    cVar15 = (char)((ulong)uVar12 >> 0x18);
    cVar16 = (char)((ulong)uVar12 >> 0x20);
    cVar17 = (char)((ulong)uVar12 >> 0x28);
    bVar10 = (byte)((ulong)uVar12 >> 0x30);
    bVar18 = (byte)((ulong)uVar12 >> 0x38);
    for (uVar9 = CONCAT17(-(bVar18 == (bVar1 & 0x7f)),
                          CONCAT16(-(bVar10 == (bVar1 & 0x7f)),
                                   CONCAT15(-(cVar17 == (char)(uVar11 >> 0x28)),
                                            CONCAT14(-(cVar16 == (char)(uVar11 >> 0x20)),
                                                     CONCAT13(-(cVar15 == (char)(uVar11 >> 0x18)),
                                                              CONCAT12(-(cVar14 ==
                                                                        (char)(uVar11 >> 0x10)),
                                                                       CONCAT11(-(cVar13 ==
                                                                                 (char)(uVar11 >> 8)
                                                                                 ),-((char)uVar12 ==
                                                                                    (char)uVar11))))
                                                    )))) & 0x8080808080808080; uVar9 != 0;
        uVar9 = uVar9 - 1 & uVar9) {
      uVar3 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      puVar5 = (ulong *)(uVar4 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) & uVar8);
      uVar3 = 0;
      uStack_90 = param_2;
      puStack_88 = param_1;
      FUN_107532334(&uStack_90,param_1[1] + (long)puVar5 * 0x60);
      if ((uVar3 & 1) != 0) {
        uVar12 = 0;
        goto LAB_10753248c;
      }
    }
    bVar10 = NEON_umaxv(CONCAT17(-(bVar18 == 0x80),
                                 CONCAT16(-(bVar10 == 0x80),
                                          CONCAT15(-(cVar17 == -0x80),
                                                   CONCAT14(-(cVar16 == -0x80),
                                                            CONCAT13(-(cVar15 == -0x80),
                                                                     CONCAT12(-(cVar14 == -0x80),
                                                                              CONCAT11(-(cVar13 ==
                                                                                        -0x80),-((
                                                  char)uVar12 == -0x80)))))))),1);
    if ((bVar10 & 1) != 0) break;
    lVar6 = lVar6 + 8;
    uVar4 = lVar6 + uVar4;
  }
  FUN_1075324d0(param_1,puVar2);
  uVar12 = 1;
  puVar5 = param_1;
LAB_10753248c:
  auVar19._8_8_ = uVar12;
  auVar19._0_8_ = puVar5;
  return auVar19;
}



/* Entry: 1075324d0; end: 10753256b;  */

void FUN_1075324d0(long *param_1,undefined8 param_2)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  
  plVar2 = param_1;
  func_0x000100061de0();
  lVar3 = *param_1;
  if ((*(long *)(lVar3 + -8) == 0) && (*(char *)(lVar3 + (long)plVar2) != -2)) {
    FUN_107532644(param_1);
    plVar2 = param_1;
    func_0x000100061de0(param_1,param_2);
    lVar3 = *param_1;
  }
  param_1[3] = param_1[3] + 1;
  *(ulong *)(lVar3 + -8) = *(long *)(lVar3 + -8) - (ulong)(*(char *)(lVar3 + (long)plVar2) == -0x80)
  ;
  bVar1 = (byte)param_2 & 0x7f;
  uVar4 = param_1[2];
  *(byte *)(lVar3 + (long)plVar2) = bVar1;
  *(byte *)(lVar3 + (uVar4 & (long)plVar2 - 7U) + (uVar4 & 7)) = bVar1;
  return;
}



/* Entry: 10753256c; end: 107532643;  */

void FUN_10753256c(long *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar1 = *param_1;
  lVar6 = param_1[1];
  lVar7 = param_1[2];
  param_1[2] = param_2;
  FUN_107450e80();
  lVar9 = param_1[1];
  for (lVar8 = 0; lVar7 != lVar8; lVar8 = lVar8 + 1) {
    if (-1 < *(char *)(lVar1 + lVar8)) {
      lVar5 = lVar6;
      func_0x000104c2fe38();
      plVar3 = param_1;
      func_0x000100061de0(param_1,lVar5);
      bVar2 = (byte)lVar5 & 0x7f;
      uVar4 = param_1[2];
      lVar5 = *param_1;
      *(byte *)(lVar5 + (long)plVar3) = bVar2;
      *(byte *)(lVar5 + ((long)plVar3 - 7U & uVar4) + (uVar4 & 7)) = bVar2;
      FUN_107532674(param_1,lVar9 + (long)plVar3 * 0x60,lVar6);
    }
    lVar6 = lVar6 + 0x60;
  }
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 107532644; end: 107532673;  */

/* WARNING: Possible PIC construction at 0x0001075325b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001075325bc) */

long * FUN_107532644(long *param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *unaff_x19;
  long *plVar6;
  long *unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long lVar7;
  long lVar8;
  code *pcVar9;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [40];
  
  uVar4 = param_1[2];
  if ((uVar4 < 9) ||
     (uVar2 = uVar4 * 0x19 + param_1[3] * -0x20 == 0, uVar4 * 0x19 < (ulong)(param_1[3] * 0x20))) {
    puVar1 = &stack0xffffffffffffffb0;
    unaff_x22 = *param_1;
    plVar3 = (long *)param_1[1];
    lVar7 = param_1[2];
    param_1[2] = uVar4 << 1 | 1;
    plVar6 = param_1;
    FUN_107450e80();
    lVar8 = 0;
    while( true ) {
      if (lVar7 == lVar8) {
        if (lVar7 != 0) {
          plVar3 = (long *)(unaff_x22 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(plVar3);
          return plVar3;
        }
        return plVar6;
      }
      if (-1 < *(char *)(unaff_x22 + lVar8)) break;
      lVar8 = lVar8 + 1;
      plVar3 = plVar3 + 0xc;
    }
    pcVar9 = (code *)0x1075325bc;
    unaff_x19 = param_1;
    unaff_x20 = plVar3;
  }
  else {
    puVar1 = auStack_80;
    uVar5 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    plVar3 = (long *)&UNK_1109ba0d0;
    func_0x00010ae6c914(param_1,&UNK_1109ba0d0,auStack_78);
    func_0x000107532850(uVar5);
    if ((bool)uVar2) {
      return param_1;
    }
    pcVar9 = FUN_10753278c;
    ___stack_chk_fail();
  }
  *(long *)(puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
  *(long **)(puVar1 + -0x20) = unaff_x20;
  *(long **)(puVar1 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar1 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(puVar1 + -8) = pcVar9;
  plVar6 = (long *)plVar3[6];
  if (plVar6 == (long *)0xffffffffffffffff) {
    plVar6 = plVar3;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(plVar3);
    func_0x0001001030f4(plVar6,(undefined *)((long)plVar6 + (long)plVar3));
    *(undefined8 *)(puVar1 + -0x38) = 0xffffffffffffffff;
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return plVar6;
}



/* Entry: 107532674; end: 1075326d3;  */

long FUN_107532674(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x0001075326a0(param_2,param_3);
  func_0x00010752925c(param_3 + 0x38);
  func_0x00010752acd0();
  return param_3;
}



/* Entry: 1075326d4; end: 107532743;  */

void FUN_1075326d4(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = *param_2;
  *param_2 = 0;
  *param_1 = lVar2;
  lVar4 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long **)(lVar2 + uVar5 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 107532744; end: 10753278b;  */

undefined * FUN_107532744(undefined *param_1)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_78 [96];
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = &UNK_1109ba0d0;
  func_0x00010ae6c914(param_1,&UNK_1109ba0d0,auStack_78);
  func_0x000107532850(uStack_18);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar2 = *(undefined **)(puVar1 + 0x30);
  if (puVar2 == (undefined *)0xffffffffffffffff) {
    puVar2 = puVar1;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(puVar1);
    func_0x0001001030f4(puVar2,puVar2 + (long)puVar1);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return puVar2;
}



/* Entry: 10753278c; end: 107532797;  */

long FUN_10753278c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x30);
  if (lVar1 == -1) {
    lVar1 = param_2;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(param_2);
    func_0x0001001030f4(lVar1,lVar1 + param_2);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return lVar1;
}



/* Entry: 107532798; end: 1075327eb;  */

void FUN_107532798(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  func_0x0001075327c0(param_1,&uStack_18,&uStack_19);
  return;
}



/* Entry: 1075327ec; end: 107532803;  */

void FUN_1075327ec(long *param_1,long param_2)

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



/* Entry: 107532804; end: 10753283b;  */

void FUN_107532804(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  func_0x0001073108a0(param_3,param_4,param_1,param_2);
  *(undefined1 *)(param_3 + param_4) = 0;
  return;
}



/* Entry: 10753283c; end: 107532863;  */

void FUN_10753283c(void)

{
  uint in_stack_000000b8;
  undefined1 uStack_21;
  
  if (in_stack_000000b8 != 0xffffffff) {
    (*(code *)(&PTR_DAT_1107eb090)[in_stack_000000b8])(&uStack_21,&stack0x00000090);
  }
  return;
}



/* Entry: 107532864; end: 1075329ff;  */

void FUN_107532864(long *param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b0;
  long lStack_a8;
  byte bStack_a0;
  undefined1 auStack_98 [8];
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  iVar3 = (int)param_3 + 8;
  (**(code **)(*param_3 + 0x10))();
  if (iVar3 != 0) {
    *param_1 = 0;
    param_1[1] = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    *(undefined1 *)(param_1 + 2) = 1;
    func_0x0001072c9b9c(&uStack_88);
    return;
  }
  plVar4 = param_3;
  func_0x000107766098();
  if ((int)plVar4 == 0) {
    FUN_107532a00();
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    return;
  }
  uStack_90 = 4;
  func_0x0001072f6b34(&uStack_88,auStack_98,1);
  func_0x0001072c9884(auStack_98);
  func_0x0001077713b4(&lStack_b0,&uStack_88,param_3,param_5);
  lVar2 = lStack_a8;
  lVar1 = lStack_b0;
  if ((bStack_a0 & 1) == 0) {
    func_0x000107771558(&uStack_c8,&uStack_88);
    func_0x000100066230(param_4,&uStack_c8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_c8);
  }
  else if ((*(byte *)(lStack_b0 + 0x20) & 1) == 0) {
    FUN_107532a00();
  }
  else {
    if ((*(byte *)(lStack_b0 + 0x21) & 1) != 0) {
      lStack_b0 = 0;
      lStack_a8 = 0;
      uStack_d8 = 0;
      uStack_d0 = 0;
      *param_1 = lVar1;
      param_1[1] = lVar2;
      uStack_c8 = 0;
      uStack_c0 = 0;
      *(undefined1 *)(param_1 + 2) = 1;
      func_0x0001072c9b9c(&uStack_c8);
      func_0x0001072c9b9c(&uStack_d8);
      goto LAB_1075329a4;
    }
    FUN_107532a00();
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
LAB_1075329a4:
  func_0x0001072c95d0(&lStack_b0);
  func_0x0001072ca718(&uStack_88);
  return;
}



/* Entry: 107532a00; end: 107532a07;  */

void FUN_107532a00(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc_1103462b0)();
  return;
}


