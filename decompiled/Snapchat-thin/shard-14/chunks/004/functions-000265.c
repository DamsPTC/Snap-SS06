/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b1af740; end: 10b1af763;  */

undefined8 FUN_10b1af740(undefined8 param_1)

{
  FUN_10b1af764(param_1,0);
  return param_1;
}



/* Entry: 10b1af764; end: 10b1af77b;  */

void FUN_10b1af764(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    FUN_10b1ad0f0(lVar1 + 0x10);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10b1af77c; end: 10b1af7c3;  */

void FUN_10b1af77c(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_10b1ad0f0(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10b1af7c4; end: 10b1af883;  */

long FUN_10b1af7c4(long *param_1)

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
        func_0x00010b1afc18();
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



/* Entry: 10b1af884; end: 10b1af8e3;  */

void FUN_10b1af884(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000104bdb3d4();
  if (lVar1 != 0) {
    func_0x00010b1af8b4(param_1,lVar1);
  }
  return;
}



/* Entry: 10b1af8e4; end: 10b1af9d7;  */

void FUN_10b1af8e4(undefined8 *param_1,long *param_2,long *param_3)

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
    if (uVar8 == uVar3) goto LAB_10b1af998;
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
    if (uVar8 == uVar3) goto LAB_10b1af998;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_10b1af998:
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



/* Entry: 10b1af9d8; end: 10b1afa07;  */

undefined8 FUN_10b1af9d8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_2;
  FUN_10b1afa08(auStack_38);
  FUN_10b1af740(auStack_38);
  return uVar1;
}



/* Entry: 10b1afa08; end: 10b1afc2b;  */

void FUN_10b1afa08(undefined8 *param_1,long *param_2,long *param_3)

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
    if (uVar8 == uVar3) goto LAB_10b1afabc;
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
    if (uVar8 == uVar3) goto LAB_10b1afabc;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_10b1afabc:
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



/* Entry: 10b1afc2c; end: 10b1afd43;  */

long * FUN_10b1afc2c(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar1;
  *param_2 = 0;
  param_2[1] = 0;
  lVar1 = *param_3;
  param_1[3] = param_3[1];
  param_1[2] = lVar1;
  *param_3 = 0;
  param_3[1] = 0;
  func_0x000107c278b8(auStack_48,&UNK_10f7317b3);
  func_0x000107c3146c(param_1 + 4,auStack_48,3,3,0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  if ((*param_1 == 0) || (lVar1 = *(long *)(*param_1 + 0x10), lVar1 == 0)) {
    lVar1 = 3;
  }
  else {
    FUN_10b1b04e8();
    if (lVar1 < 2) {
      lVar1 = 1;
    }
  }
  param_1[6] = 0x32aaaba7;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = (long)&UNK_10dd5b8b0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xf] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = lVar1;
  *(undefined2 *)(param_1 + 0x17) = 0;
  return param_1;
}



/* Entry: 10b1afd44; end: 10b1afdaf;  */

void FUN_10b1afd44(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  
  if (((*param_2 == 0) || (lVar1 = *(long *)(*param_2 + 0x10), lVar1 == 0)) ||
     (FUN_10b1afdb0(), lVar1 < 1)) {
    uVar3 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    lVar2 = *(long *)(*param_2 + 0x10);
    func_0x00010b1afdbc();
    if (lVar2 < 2) {
      lVar2 = 1;
    }
    *param_1 = lVar1;
    param_1[1] = lVar2;
    uVar3 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar3;
  return;
}



/* Entry: 10b1afdb0; end: 10b1afdc7;  */

void FUN_10b1afdb0(long param_1)

{
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110cc3180;
  param_1 = param_1 + 0x60;
  func_0x00010b202020(param_1,&ppuStack_28);
  if (param_1 == 0) {
    func_0x000107c2be18(&PTR_DAT_110cc3180);
  }
  else {
    FUN_10b17f6cc();
  }
  return;
}



/* Entry: 10b1afdc8; end: 10b1afeef;  */

void FUN_10b1afdc8(undefined8 param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_140 [168];
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [16];
  char cStack_48;
  
  func_0x00010b1b1cd0();
  if (*(char *)(param_2 + 0x17) < '\0') {
    if (*(long *)(unaff_x20 + 8) == 0) {
      return;
    }
  }
  else if (*(char *)(param_2 + 0x17) == '\0') {
    return;
  }
  if (((*(long *)(unaff_x20 + 0x18) != 0) && ((*(int *)(unaff_x20 + 0x28) - 3U & 0xffffffef) != 0))
     && (FUN_10b1afd44(auStack_58), cStack_48 == '\x01')) {
    *(undefined4 *)(unaff_x20 + 0x30) = 0;
    *(undefined8 *)(unaff_x20 + 0x38) = 0;
    *(undefined4 *)(unaff_x20 + 0x44) = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_70);
    uVar1 = *(undefined8 *)(unaff_x20 + 0xa0);
    func_0x00010b1b1b84(auStack_88);
    func_0x00010b1a3f5c(auStack_140);
    uStack_98 = uVar1;
    FUN_10b1aff18(auStack_90,uStack_78,auStack_70,auStack_140);
    FUN_10b1ac15c(auStack_90);
    FUN_10b12ec28(auStack_140);
    *(undefined1 *)(unaff_x19 + 0xb8) = 1;
    func_0x000107c2798c(auStack_88);
    func_0x00010b1b1c58();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
  }
  return;
}



/* Entry: 10b1afef0; end: 10b1aff17;  */

void FUN_10b1afef0(long param_1,long param_2)

{
  func_0x000107c27f4c();
  *(long *)(param_1 + 0x10) = param_2 + 0x40;
  return;
}



/* Entry: 10b1aff18; end: 10b1aff6f;  */

void FUN_10b1aff18(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_e8 [200];
  
  FUN_10b1b11f4(auStack_e8);
  FUN_10b1b0630(param_1,param_2,auStack_e8);
  func_0x00010b1b121c(auStack_e8);
  return;
}



/* Entry: 10b1aff70; end: 10b1b0063;  */

void FUN_10b1aff70(undefined8 *param_1,code **param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined1 in_ZR;
  undefined8 *puVar7;
  undefined8 extraout_x8;
  int extraout_w10;
  long unaff_x19;
  code **unaff_x20;
  undefined1 auStack_108 [16];
  undefined8 uStack_f8;
  code **ppcStack_f0;
  undefined8 *puStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_a8 [16];
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  func_0x00010b1b1b8c();
  if (param_1[4] != 0) {
    func_0x00010b1b1cd0();
    pbVar1 = (byte *)((long)param_1 + 0xb9);
    do {
      bVar2 = *pbVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar5) {
        *pbVar1 = 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((bVar2 & 1) == 0) {
      uVar3 = *(undefined8 *)(unaff_x19 + 0x20);
      uStack_c8 = *(undefined8 *)(unaff_x19 + 0x18);
      uStack_d0 = *(undefined8 *)(unaff_x19 + 0x10);
      if (*(long *)(unaff_x19 + 0x18) != 0) {
        do {
          func_0x00010b1b1b74();
        } while (extraout_w10 != 0);
      }
      __ZNSt3__16chrono12steady_clock3nowEv();
      pcStack_98 = FUN_10b1b1404;
      ppuStack_90 = &PTR_FUN_110cc3228;
      uStack_80 = uStack_c8;
      uStack_88 = uStack_d0;
      lVar6 = (long)unaff_x20 * 0x1e848;
      unaff_x20 = &pcStack_98;
      uStack_c0 = 0;
      uStack_b8 = 0;
      param_2 = &pcStack_98;
      func_0x00010bcce9b8(auStack_a8,uVar3,param_2,param_1 + lVar6);
      func_0x00010b1b1bdc();
      func_0x000107c27f44(auStack_a8);
      param_1 = &uStack_c0;
      FUN_10b1abf6c();
    }
  }
  func_0x00010b1b1b38(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b1b1bdc();
    puVar7 = &uStack_c0;
    FUN_10b1abf6c(puVar7);
    func_0x00010b1b1b64();
    pcStack_d8 = FUN_10b1b0064;
    ppcStack_f0 = unaff_x20;
    puStack_e8 = param_1;
    puStack_e0 = &stack0xfffffffffffffff0;
    FUN_10b1afef0(auStack_108,puVar7 + 6);
    FUN_10b1b00b8(uStack_f8,param_2);
    func_0x000107c2798c(auStack_108);
    return;
  }
  return;
}



/* Entry: 10b1b0064; end: 10b1b00b7;  */

void FUN_10b1b0064(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  FUN_10b1afef0(auStack_38,param_1 + 0x30);
  FUN_10b1b00b8(uStack_28,param_2);
  func_0x000107c2798c(auStack_38);
  return;
}



/* Entry: 10b1b00b8; end: 10b1b016b;  */

bool FUN_10b1b00b8(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  int extraout_w10;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  plVar1 = param_1;
  FUN_10b1b06f4();
  lVar2 = *param_1;
  lVar3 = param_1[3];
  if ((long *)(lVar2 + lVar3) != plVar1) {
    lVar4 = *(long *)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 0x18) = 0;
    lStack_38 = lVar4;
    FUN_10b1b1244(param_1,plVar1,param_2);
    if (lVar4 != 0) {
      do {
        func_0x00010b1b1c28();
      } while (extraout_w10 != 0);
    }
    lStack_40 = lVar4;
    FUN_10b1ac08c(param_1 + 6,&lStack_40);
    FUN_10b1ac15c(&lStack_40);
    func_0x00010b1b1b9c();
  }
  return (long *)(lVar2 + lVar3) != plVar1;
}



/* Entry: 10b1b016c; end: 10b1b03ff;  */

void FUN_10b1b016c(undefined8 param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  long *plVar3;
  long *plVar4;
  long **pplVar5;
  undefined8 extraout_x8;
  long lVar6;
  int extraout_w10;
  long *plVar7;
  long *plStack_e0;
  long *plStack_d8;
  undefined1 auStack_d0 [40];
  long lStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  long *aplStack_90 [11];
  undefined8 uStack_38;
  
  pplVar5 = &plStack_e0;
  func_0x00010b1b1b8c();
  plVar3 = (long *)0xa0;
  uStack_38 = extraout_x8;
  __Znwm();
  *plVar3 = (long)FUN_10b1b1a1c;
  plVar3[1] = (long)FUN_10b1b1af8;
  FUN_10b124f8c(plVar3 + 2);
  FUN_10b124f40(param_1,plVar3 + 2);
  plVar7 = *(long **)(param_2 + 0x20);
  if (plVar7 != (long *)0x0) {
    lVar6 = *(long *)(param_2 + 0x28);
    plVar3[0x11] = (long)plVar7;
    plVar3[0x12] = lVar6;
    if (lVar6 != 0) {
      do {
        func_0x00010b1b1b74();
      } while (extraout_w10 != 0);
    }
    func_0x000107c27b50(plVar3 + 10);
    plVar4 = plVar3 + 0xf;
    func_0x000107c27b4c(plVar4,plVar3 + 10);
    plStack_d8 = (long *)plVar3[0x12];
    plStack_e0 = (long *)plVar3[0x11];
    plVar3[0x11] = 0;
    plVar3[0x12] = 0;
    FUN_10b163268(auStack_d0,plVar3 + 10);
    uStack_98 = 0x10b1b051c;
    func_0x00010b1b0550(aplStack_90,&plStack_e0);
    (**(code **)(*plVar7 + 0x10))(plVar7,&uStack_98);
    func_0x00010b1b1b4c(aplStack_90[0]);
    func_0x00010b1b04f4(&plStack_e0);
    func_0x000107c27b5c(plVar3 + 10);
    plVar7 = plVar4;
    FUN_10b12d174();
    if (((ulong)plVar7 & 1) == 0) {
      *(undefined1 *)(plVar3 + 0x13) = 0;
      plStack_e0 = plVar3;
      plStack_d8 = plVar4;
      FUN_10b12d1c8(&uStack_98,plVar4);
      plVar3 = aplStack_90[0];
      if (aplStack_90[0] == (long *)0x0) goto LAB_10b1b02dc;
      plVar7 = aplStack_90[0] + 1;
      do {
        lVar6 = *plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 != 0) goto LAB_10b1b02dc;
      (**(code **)(*aplStack_90[0] + 0x10))(aplStack_90[0]);
      plVar4 = plVar3;
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      goto LAB_10b1b02dc;
    }
    FUN_10b12d0d0(plVar4);
    func_0x00010b1b1cc0();
    func_0x00010b1b1ba4();
  }
  FUN_10b124fa8(plVar3 + 7);
  while( true ) {
    func_0x00010b1b1c18();
    in_ZR = (char)plVar3[8] == '\x01';
    if ((bool)in_ZR) {
      plStack_a0 = &lStack_a8;
      plVar4 = plVar3 + 2;
      pplVar5 = &plStack_a0;
      func_0x000107c27b6c(plVar4);
    }
    else {
      __ZNSt13exception_ptrC1ERKS_(&lStack_a8,plVar3 + 7);
      pplVar5 = &plStack_a0;
      plStack_a0 = &lStack_a8;
      func_0x000104bf33ec(plVar3 + 2);
      plVar4 = &lStack_a8;
      __ZNSt13exception_ptrD1Ev(plVar4);
    }
    func_0x00010b1b1bd4();
    func_0x00010b1b1c60();
LAB_10b1b02dc:
    func_0x00010b1b1b38(uStack_38);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    if ((int)pplVar5 == 0) {
      do {
        func_0x00010b1b1cc8();
      } while ((int)pplVar5 == 0);
      func_0x00010b1b1cc0();
    }
    else {
      func_0x00010b1b1b4c(aplStack_90[0]);
      func_0x00010b1b04f4(&plStack_e0);
      func_0x00010b1b1cc0();
      func_0x000107c27b5c(plVar3 + 10);
    }
    func_0x00010b1b1ba4();
    ___cxa_begin_catch(plVar4);
    FUN_10b124f58(plVar3 + 2);
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 10b1b0400; end: 10b1b04bf;  */

void FUN_10b1b0400(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  if (param_1[2] != 0) {
    uVar4 = param_1[3];
    if (uVar4 < 0x80) {
      if (uVar4 != 0) {
        lVar5 = 0;
        for (uVar6 = 0; uVar6 != uVar4; uVar6 = uVar6 + 1) {
          if (-1 < *(char *)(*param_1 + uVar6)) {
            FUN_10b1ac200(param_1[1] + lVar5);
            uVar4 = param_1[3];
          }
          lVar5 = lVar5 + 0x20;
        }
        param_1[2] = 0;
        _memset(*param_1,0x80,uVar4 + 8);
        *(undefined1 *)(*param_1 + uVar4) = 0xff;
        uVar4 = param_1[3];
        lVar5 = 6;
        if (uVar4 != 7) {
          lVar5 = uVar4 - (uVar4 >> 3);
        }
        param_1[5] = lVar5 - param_1[2];
      }
    }
    else {
      FUN_10b1ac184(param_1);
    }
  }
  while (param_1[7] != 0) {
    plVar1 = (long *)(param_1[7] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_10b1ac08c(param_1 + 6,&stack0xffffffffffffffd8);
    FUN_10b1ac15c(&stack0xffffffffffffffd8);
  }
  return;
}



/* Entry: 10b1b04c0; end: 10b1b04e7;  */

long FUN_10b1b04c0(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x18);
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10b1b04e8; end: 10b1b04f3;  */

void FUN_10b1b04e8(long param_1)

{
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110cc31b0;
  param_1 = param_1 + 0x60;
  func_0x00010b202020(param_1,&ppuStack_28);
  if (param_1 == 0) {
    func_0x000107c2be18(&PTR_DAT_110cc31b0);
  }
  else {
    FUN_10b17f6cc();
  }
  return;
}



/* Entry: 10b1b04f4; end: 10b1b058b;  */

undefined8 FUN_10b1b04f4(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c27b5c(param_1 + 0x10);
  func_0x000100450bd8();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10b1b058c; end: 10b1b059b;  */

undefined8 FUN_10b1b058c(long param_1)

{
  long lVar1;
  undefined8 unaff_x19;
  
  lVar1 = param_1 + 8;
  func_0x000107c27b5c(param_1 + 0x18);
  func_0x000100450bd8();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10b1b059c; end: 10b1b060f;  */

long FUN_10b1b059c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  lVar2 = param_2;
  func_0x00010b1b1cdc();
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(lVar2 + 0x20);
  *(undefined8 *)(lVar1 + 0x18) = uVar3;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  FUN_10b0fafd4(lVar1 + 0x28,lVar2 + 0x28);
  uVar3 = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xa0) = uVar3;
  return param_1;
}



/* Entry: 10b1b0610; end: 10b1b062f;  */

void FUN_10b1b0610(long param_1)

{
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    func_0x00010b1b05e0();
  }
  return;
}



/* Entry: 10b1b0630; end: 10b1b06f3;  */

void FUN_10b1b0630(undefined8 param_1,long *param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 extraout_x8;
  int extraout_w11;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = &uStack_40;
  plVar1 = param_2;
  lVar3 = param_3;
  FUN_10b1b06f4();
  if ((long *)(*param_2 + param_2[3]) == plVar1) {
    FUN_10b1b07b0(&uStack_40,param_3);
    FUN_10b1b07f8(param_1,param_2,&uStack_40);
  }
  else {
    func_0x00010b1b0724(*(long *)(lVar3 + 0x18) + 0x38,param_3 + 0x18);
    uStack_38 = 0;
    if (*(long *)(lVar3 + 0x18) != 0) {
      do {
        func_0x00010b1b1bb4();
        uStack_38 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    FUN_10b1b0750(param_1,param_2,&uStack_38);
    puVar2 = &uStack_38;
  }
  FUN_10b1ac15c(puVar2);
  return;
}



/* Entry: 10b1b06f4; end: 10b1b074f;  */

long FUN_10b1b06f4(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lStack_28;
  
  plVar1 = param_1;
  FUN_10b1b08d4();
  plVar2 = param_1;
  FUN_10b1b08f8(param_1,param_2,plVar1,&lStack_28);
  if ((int)plVar2 == 0) {
    lStack_28 = *param_1 + param_1[3];
  }
  else {
    lStack_28 = *param_1 + lStack_28;
  }
  return lStack_28;
}



/* Entry: 10b1b0750; end: 10b1b07af;  */

void FUN_10b1b0750(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w11;
  undefined8 uStack_28;
  
  uStack_28 = *param_3;
  *param_3 = 0;
  FUN_10b1b0a38(param_2 + 0x30,&uStack_28);
  func_0x00010b1b1b9c();
  uVar1 = 0;
  if (*(long *)(param_2 + 0x30) != 0) {
    do {
      func_0x00010b1b1bb4();
      uVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 10b1b07b0; end: 10b1b07f7;  */

void FUN_10b1b07b0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xe8;
  __Znwm();
  func_0x00010b1b0b20();
  *param_1 = uVar1;
  return;
}



/* Entry: 10b1b07f8; end: 10b1b0883;  */

void FUN_10b1b07f8(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 extraout_x8;
  int extraout_w11;
  undefined8 uStack_38;
  
  FUN_10b1b0be4(param_2,*param_3 + 0x20);
  FUN_10b1b0adc();
  uStack_38 = 0;
  if (*param_3 != 0) {
    do {
      func_0x00010b1b1bb4();
      uStack_38 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  FUN_10b1b0750(param_1,param_2,&uStack_38);
  func_0x00010b1b1b9c();
  FUN_10b1b0c0c(param_2);
  return;
}



/* Entry: 10b1b0884; end: 10b1b08d3;  */

long FUN_10b1b0884(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lStack_28;
  
  plVar1 = param_1;
  FUN_10b1b08f8();
  if ((int)plVar1 == 0) {
    lVar2 = *param_1 + param_1[3];
  }
  else {
    lVar2 = *param_1 + lStack_28;
  }
  return lVar2;
}



/* Entry: 10b1b08d4; end: 10b1b08f7;  */

void FUN_10b1b08d4(long param_1)

{
  long lStack_18;
  
  lStack_18 = param_1 + 0x28;
  FUN_10b1b0a00(&lStack_18);
  return;
}



/* Entry: 10b1b08f8; end: 10b1b09d3;  */

bool FUN_10b1b08f8(long *param_1,ulong param_2,ulong param_3,ulong *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar5 = 0;
  uVar2 = param_3 >> 7;
  uVar6 = param_1[3];
  while( true ) {
    uVar2 = uVar2 & uVar6;
    uVar7 = *(ulong *)(*param_1 + uVar2);
    uVar3 = uVar7 ^ (param_3 & 0x7f) * 0x101010101010101;
    for (uVar3 = uVar3 + 0xfefefefefefefeff & (uVar3 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar3 != 0; uVar3 = uVar3 - 1 & uVar3) {
      uVar1 = (uVar3 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar3 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar2 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & uVar6;
      *param_4 = uVar4;
      uVar1 = param_2;
      FUN_10b1b09d4(param_2,param_1[1] + uVar4 * 0x20);
      if ((uVar1 & 1) != 0) goto LAB_10b1b09b0;
    }
    if ((uVar7 & ~uVar7 << 6 & 0x8080808080808080) != 0) break;
    lVar5 = lVar5 + 8;
    uVar2 = lVar5 + uVar2;
  }
LAB_10b1b09b0:
  return uVar3 != 0;
}



/* Entry: 10b1b09d4; end: 10b1b09ff;  */

bool FUN_10b1b09d4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puStack_20;
  ulong uStack_18;
  
  uVar4 = (ulong)*(char *)((long)param_1 + 0x17);
  puVar3 = param_1;
  if ((long)uVar4 < 0) {
    puVar3 = (undefined8 *)*param_1;
    uVar4 = param_1[1];
  }
  uStack_18 = param_2[1];
  puStack_20 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uStack_18 = (ulong)*(byte *)((long)param_2 + 0x17);
    puStack_20 = param_2;
  }
  iVar1 = (int)&puStack_20;
  if (uStack_18 == uVar4) {
    func_0x000100067218(&puStack_20,puVar3,uVar4);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 10b1b0a00; end: 10b1b0a37;  */

void FUN_10b1b0a00(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  func_0x000107c278c8(puVar2,(long)puVar2 + uVar1);
  func_0x00010b1b1c90();
  return;
}



/* Entry: 10b1b0a38; end: 10b1b0a9f;  */

long * FUN_10b1b0a38(long *param_1,long *param_2)

{
  long *plVar1;
  long extraout_x8;
  long lVar2;
  int extraout_w11;
  long *unaff_x19;
  undefined8 *unaff_x20;
  
  if (*param_2 != *param_1) {
    func_0x00010b1b1cd0();
    FUN_10b1ac08c();
    func_0x00010b9a09e0(*unaff_x20,0,*unaff_x19);
    param_1 = unaff_x19;
    FUN_10b1b0aa0();
    if (*(long *)(*unaff_x19 + 0x18) == 0) {
      plVar1 = unaff_x19 + 1;
      if (plVar1 != unaff_x19) {
        lVar2 = 0;
        if (*unaff_x19 != 0) {
          do {
            func_0x00010b1b1bb4();
            lVar2 = extraout_x8;
          } while (extraout_w11 != 0);
        }
        *plVar1 = lVar2;
        FUN_10b1ac130();
      }
      return plVar1;
    }
  }
  return param_1;
}



/* Entry: 10b1b0aa0; end: 10b1b0adb;  */

undefined8 * FUN_10b1b0aa0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    uVar2 = *param_2;
    *param_2 = 0;
    uVar1 = *param_1;
    *param_1 = uVar2;
    FUN_10b1ac130(uVar1);
  }
  return param_1;
}



/* Entry: 10b1b0adc; end: 10b1b0b53;  */

long * FUN_10b1b0adc(long *param_1,long *param_2)

{
  long extraout_x8;
  long lVar1;
  int extraout_w11;
  
  if (param_1 != param_2) {
    lVar1 = 0;
    if (*param_2 != 0) {
      do {
        func_0x00010b1b1bb4();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    *param_1 = lVar1;
    FUN_10b1ac130();
  }
  return param_1;
}



/* Entry: 10b1b0b54; end: 10b1b0b57;  */

undefined8 * FUN_10b1b0b54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc31f0;
  func_0x00010b1b121c(param_1 + 4);
  *param_1 = &PTR_DAT_110d7e800;
  func_0x00010b9a0948();
  func_0x00010b9a0a78(param_1 + 3);
  return param_1;
}



/* Entry: 10b1b0b58; end: 10b1b0b6b;  */

void FUN_10b1b0b58(void)

{
  func_0x00010b1b0bb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1b0b6c; end: 10b1b0be3;  */

void FUN_10b1b0b6c(undefined8 param_1,undefined8 *param_2)

{
  func_0x00010b1b1bec();
  *param_2 = 0;
  func_0x00010b1b0b90();
  return;
}



/* Entry: 10b1b0be4; end: 10b1b0c0b;  */

long FUN_10b1b0be4(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  FUN_10b1b0c48(auStack_28);
  return lStack_20 + 0x18;
}



/* Entry: 10b1b0c0c; end: 10b1b0c47;  */

void FUN_10b1b0c0c(long param_1)

{
  while (*(ulong *)(param_1 + 0x40) < *(ulong *)(param_1 + 0x10)) {
    FUN_10b1b00b8(param_1,*(long *)(param_1 + 0x38) + 0x20);
  }
  return;
}



/* Entry: 10b1b0c48; end: 10b1b0dbf;  */

void FUN_10b1b0c48(long *param_1,long *param_2,ulong param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined1 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  
  plVar1 = param_2;
  FUN_10b1b08d4();
  lVar8 = 0;
  uVar4 = (ulong)plVar1 >> 7;
  uVar6 = param_2[3];
  while( true ) {
    uVar4 = uVar4 & uVar6;
    uVar9 = *(ulong *)(*param_2 + uVar4);
    uVar5 = uVar9 ^ ((ulong)plVar1 & 0x7f) * 0x101010101010101;
    for (uVar5 = uVar5 + 0xfefefefefefefeff & (uVar5 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
      uVar2 = (uVar5 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar5 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      plVar7 = (long *)(uVar4 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & uVar6);
      uVar2 = param_3;
      FUN_10b1b09d4(param_3,param_2[1] + (long)plVar7 * 0x20);
      if ((uVar2 & 1) != 0) {
        uVar3 = 0;
        goto LAB_10b1b0d44;
      }
    }
    if ((uVar9 & ~uVar9 << 6 & 0x8080808080808080) != 0) break;
    lVar8 = lVar8 + 8;
    uVar4 = lVar8 + uVar4;
  }
  plVar7 = param_2;
  FUN_10b1b0dc0(param_2,plVar1);
  lVar8 = param_2[1] + (long)plVar7 * 0x20;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(lVar8,param_3);
  *(undefined8 *)(lVar8 + 0x18) = 0;
  *(byte *)(*param_2 + (long)plVar7) = (byte)plVar1 & 0x7f;
  func_0x00010b1b1c38();
  uVar3 = 1;
LAB_10b1b0d44:
  lVar8 = param_2[1];
  *param_1 = *param_2 + (long)plVar7;
  param_1[1] = lVar8 + (long)plVar7 * 0x20;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return;
}



/* Entry: 10b1b0dc0; end: 10b1b0e8b;  */

void FUN_10b1b0dc0(long *param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  long lVar3;
  ulong uVar4;
  
  func_0x00010b1b1cd0();
  lVar3 = *param_1;
  uVar4 = param_1[3];
  lVar1 = lVar3;
  FUN_10b1b0e8c(lVar3,uVar4);
  lVar2 = unaff_x19[5];
  if (lVar2 == 0) {
    if (*(char *)(lVar3 + lVar1) == -2) {
      lVar2 = 0;
    }
    else {
      if ((uVar4 == 0) || (uVar4 - (uVar4 >> 3) >> 1 < (ulong)unaff_x19[2])) {
        FUN_10b1b0ecc();
      }
      else {
        func_0x00010b1b0ff4();
      }
      lVar3 = *unaff_x19;
      lVar1 = lVar3;
      FUN_10b1b0e8c(lVar3,unaff_x19[3]);
      lVar2 = unaff_x19[5];
    }
  }
  unaff_x19[2] = unaff_x19[2] + 1;
  unaff_x19[5] = lVar2 - (ulong)(*(char *)(lVar3 + lVar1) == -0x80);
  return;
}



/* Entry: 10b1b0e8c; end: 10b1b0ecb;  */

ulong FUN_10b1b0e8c(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  param_3 = param_3 >> 7;
  while( true ) {
    param_3 = param_3 & param_2;
    uVar1 = *(ulong *)(param_1 + param_3) & ~*(ulong *)(param_1 + param_3) << 7 & 0x8080808080808080
    ;
    if (uVar1 != 0) break;
    lVar2 = lVar2 + 8;
    param_3 = lVar2 + param_3;
  }
  uVar1 = uVar1 >> 7;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return param_3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2;
}



/* Entry: 10b1b0ecc; end: 10b1b119b;  */

void FUN_10b1b0ecc(long *param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = *param_1;
  lVar5 = param_1[1];
  lVar7 = param_1[3];
  lVar8 = (param_2 & 0xfffffffffffffff8) + 0x10;
  lVar3 = lVar8 + param_2 * 0x20;
  __Znwm();
  *param_1 = lVar3;
  param_1[1] = lVar3 + lVar8;
  _memset();
  lVar8 = 0;
  *(undefined1 *)(lVar3 + param_2) = 0xff;
  lVar3 = 6;
  if (param_2 != 7) {
    lVar3 = param_2 - (param_2 >> 3);
  }
  param_1[5] = lVar3 - param_1[2];
  param_1[3] = param_2;
  for (; lVar7 != lVar8; lVar8 = lVar8 + 1) {
    if (-1 < *(char *)(lVar1 + lVar8)) {
      lVar3 = lVar5;
      FUN_10b1b119c();
      lVar6 = *param_1;
      lVar4 = lVar6;
      FUN_10b1b0e8c(lVar6,param_1[3],lVar3);
      bVar2 = (byte)lVar3 & 0x7f;
      *(byte *)(lVar6 + lVar4) = bVar2;
      *(byte *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & lVar4 - 8U) + 1) = bVar2;
      FUN_10b1b11d4(param_1[1] + lVar4 * 0x20,lVar5);
    }
    lVar5 = lVar5 + 0x20;
  }
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b1b119c; end: 10b1b11d3;  */

void FUN_10b1b119c(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = param_1[1];
  puVar2 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar2 = param_1;
  }
  func_0x000107c278c8(puVar2,(long)puVar2 + uVar1);
  func_0x00010b1b1c90();
  return;
}



/* Entry: 10b1b11d4; end: 10b1b11f3;  */

void FUN_10b1b11d4(long param_1,long param_2)

{
  func_0x00010b1b1cdc();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  func_0x00010b1ad9dc(param_2);
  FUN_10b1ac15c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)();
  return;
}



/* Entry: 10b1b11f4; end: 10b1b1243;  */

void FUN_10b1b11f4(undefined8 param_1,undefined8 *param_2)

{
  func_0x00010b1b1bec();
  *param_2 = 0;
  func_0x00010b1b0b90();
  return;
}



/* Entry: 10b1b1244; end: 10b1b1297;  */

undefined1  [16] FUN_10b1b1244(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_2;
  uStack_38 = param_3;
  FUN_10b1b1298(&uStack_40);
  FUN_10b1b12cc(param_1,param_2,param_3);
  auVar1._8_8_ = uStack_38;
  auVar1._0_8_ = uStack_40;
  return auVar1;
}



/* Entry: 10b1b1298; end: 10b1b12cb;  */

long * FUN_10b1b1298(long *param_1)

{
  param_1[1] = param_1[1] + 0x20;
  *param_1 = *param_1 + 1;
  FUN_10b1b130c();
  return param_1;
}



/* Entry: 10b1b12cc; end: 10b1b130b;  */

void FUN_10b1b12cc(long *param_1,ulong *param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  FUN_10b1ac200(param_3);
  uVar2 = 0;
  param_1[2] = param_1[2] + -1;
  puVar3 = (undefined1 *)((long)param_2 + (-8 - *param_1));
  uVar5 = *(ulong *)(*param_1 + ((ulong)puVar3 & param_1[3]));
  uVar4 = 0xfe;
  uVar5 = uVar5 & ~uVar5 << 6 & 0x8080808080808080;
  if ((uVar5 != 0) && (uVar6 = *param_2 & ~*param_2 << 6 & 0x8080808080808080, uVar6 != 0)) {
    uVar6 = uVar6 >> 7;
    uVar2 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    bVar1 = (int)((ulong)LZCOUNT(uVar5) >> 3) + ((uint)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3)
            < 8;
    uVar2 = (ulong)bVar1;
    uVar4 = 0x80;
    if (!bVar1) {
      uVar4 = 0xfe;
    }
  }
  *(undefined1 *)param_2 = uVar4;
  *(undefined1 *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & (ulong)puVar3) + 1) = uVar4;
  param_1[5] = param_1[5] + uVar2;
  return;
}



/* Entry: 10b1b130c; end: 10b1b135f;  */

void FUN_10b1b130c(long *param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined8 uStack_28;
  
  pcVar2 = (char *)*param_1;
  while (*pcVar2 < -1) {
    uStack_28 = *(undefined8 *)pcVar2;
    puVar1 = &uStack_28;
    func_0x000107c27e58();
    pcVar2 = (char *)(*param_1 + ((ulong)puVar1 & 0xffffffff));
    *param_1 = (long)pcVar2;
    param_1[1] = param_1[1] + ((ulong)puVar1 & 0xffffffff) * 0x20;
  }
  return;
}



/* Entry: 10b1b1360; end: 10b1b1403;  */

void FUN_10b1b1360(long *param_1,ulong *param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar2 = 0;
  param_1[2] = param_1[2] + -1;
  puVar3 = (undefined1 *)((long)param_2 + (-8 - *param_1));
  uVar5 = *(ulong *)(*param_1 + ((ulong)puVar3 & param_1[3]));
  uVar4 = 0xfe;
  uVar5 = uVar5 & ~uVar5 << 6 & 0x8080808080808080;
  if ((uVar5 != 0) && (uVar6 = *param_2 & ~*param_2 << 6 & 0x8080808080808080, uVar6 != 0)) {
    uVar6 = uVar6 >> 7;
    uVar2 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    bVar1 = (int)((ulong)LZCOUNT(uVar5) >> 3) + ((uint)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3)
            < 8;
    uVar2 = (ulong)bVar1;
    uVar4 = 0x80;
    if (!bVar1) {
      uVar4 = 0xfe;
    }
  }
  *(undefined1 *)param_2 = uVar4;
  *(undefined1 *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & (ulong)puVar3) + 1) = uVar4;
  param_1[5] = param_1[5] + uVar2;
  return;
}



/* Entry: 10b1b1404; end: 10b1b1967;  */

void FUN_10b1b1404(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 in_ZR;
  long lVar7;
  long *plVar8;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long alStack_540 [2];
  undefined1 auStack_530 [24];
  undefined1 auStack_518 [16];
  undefined1 auStack_508 [120];
  long lStack_490;
  long lStack_488;
  undefined1 auStack_480 [176];
  byte bStack_3d0;
  long alStack_3c8 [2];
  undefined1 auStack_3b8 [8];
  long lStack_3b0;
  byte bStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 *puStack_398;
  long lStack_390;
  long lStack_388;
  long *plStack_380;
  long lStack_378;
  long lStack_370;
  long lStack_368;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  long alStack_348 [2];
  long alStack_338 [2];
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined1 auStack_310 [32];
  long lStack_2f0;
  byte bStack_2e0;
  long lStack_2b8;
  byte bStack_2b0;
  long lStack_298;
  long lStack_290;
  code *pcStack_c0;
  undefined **ppuStack_b8;
  long *plStack_b0;
  undefined1 auStack_70 [16];
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  func_0x00010b1b1b8c();
  plVar9 = *(long **)(param_1 + 0x20);
  uStack_58 = extraout_x8;
  FUN_10b1acce8(alStack_540,param_1 + 0x10);
  if (alStack_540[0] == 0) goto LAB_10b1b17f4;
  *(undefined1 *)((long)plVar9 + 0xb9) = 0;
  FUN_10b1afd44(auStack_3b8,plVar9);
  if ((bStack_3a8 & 1) == 0) {
    func_0x00010b1b1b84(alStack_338);
    FUN_10b1b0400(uStack_328);
    func_0x00010b1b1cac();
    goto LAB_10b1b17f4;
  }
  pbVar1 = (byte *)(plVar9 + 0x17);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((bVar2 & 1) != 0) {
    func_0x00010b1b1c58();
    goto LAB_10b1b17f4;
  }
  FUN_10b1acce8(alStack_3c8,plVar9 + 2);
  if (((alStack_3c8[0] != 0) && (*plVar9 != 0)) && (*(long *)(*plVar9 + 0x40) != 0)) {
    do {
      lVar7 = lStack_3b0;
      func_0x00010b1b1b2c();
      if (plStack_b0[2] == 0) {
        auStack_480[0] = 0;
        bStack_3d0 = 0;
      }
      else {
        lVar10 = plStack_b0[6];
        if (lVar10 == 0) {
          alStack_338[0] = 0;
        }
        else {
          do {
            func_0x00010b1b1c28();
            lVar6 = lVar10;
          } while (extraout_w10 != 0);
          do {
            alStack_338[0] = lVar6;
            func_0x00010b1b1c28();
            lVar6 = alStack_338[0];
          } while (extraout_w10_00 != 0);
        }
        lStack_390 = lVar10;
        FUN_10b1ac15c(alStack_338);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (alStack_338,lVar10 + 0x20);
        uStack_318 = *(undefined8 *)(lVar10 + 0x58);
        uStack_320 = *(undefined8 *)(lVar10 + 0x50);
        if (*(long *)(lVar10 + 0x58) != 0) {
          do {
            func_0x00010b1b1b74();
          } while (extraout_w10_01 != 0);
        }
        FUN_10b121fd0(auStack_310,lVar10 + 0x60);
        lStack_298 = *(long *)(lVar10 + 0xe0);
        lStack_290 = lStack_298 + lVar7;
        *(long *)(lVar10 + 0xe0) = lStack_290;
        FUN_10b1b059c(auStack_480,alStack_338);
        bStack_3d0 = 1;
        func_0x00010b1b05e0(alStack_338);
        FUN_10b1ac15c(&lStack_390);
      }
      func_0x00010b1b1bac();
      if ((bStack_3d0 & 1) == 0) goto LAB_10b1b17e8;
      FUN_10b1b059c(auStack_530,auStack_480);
      lVar7 = alStack_3c8[0];
      uVar11 = *(undefined8 *)(*plVar9 + 0x40);
      FUN_10b202630(&pcStack_c0,auStack_530);
      FUN_10b1f69e0(alStack_338,uVar11,&pcStack_c0,1,1);
      func_0x00010b121e00(&pcStack_c0);
      if ((bStack_2e0 & 1) == 0) {
        if ((bStack_2b0 & 1) != 0) goto LAB_10b1b1650;
        func_0x00010b1b1b2c();
        func_0x00010b1b1c08(plStack_b0);
LAB_10b1b166c:
        func_0x00010b1b1bac();
      }
      else {
        if (((bStack_2b0 == 0) || (lStack_2b8 != 0)) || (lStack_2f0 != 0)) {
LAB_10b1b1650:
          func_0x00010b1b1b2c();
          func_0x00010b1b1c08(plStack_b0);
          goto LAB_10b1b166c;
        }
        pcStack_c0 = (code *)0x0;
        plVar8 = alStack_338;
        FUN_10b1ab1e0(alStack_348,lVar7,plVar8,auStack_518,auStack_508,&pcStack_c0,0);
        func_0x00010b12b970(&pcStack_c0);
        if (alStack_348[0] == 0) {
          func_0x00010b1b1b2c();
          func_0x00010b1b1c08(plStack_b0);
        }
        else {
          lVar7 = alStack_348[0];
          FUN_10b19cdec();
          if (((ulong)plVar8 & 1) == 0) goto LAB_10b1b16c0;
          in_ZR = lStack_490 == lVar7;
          if (lStack_490 < lVar7) goto LAB_10b1b16b0;
          func_0x00010b1b1b2c();
          func_0x00010b1b1c08(plStack_b0);
        }
        func_0x00010b1b1bac();
        func_0x00010b1b1c88();
      }
      func_0x00010b1b1ca4();
      func_0x00010b1b1c80();
      func_0x00010b1b1c50();
    } while( true );
  }
  func_0x00010b1b1b84(alStack_338);
  FUN_10b1b0400(uStack_328);
  func_0x00010b1b1cac();
  goto LAB_10b1b17ec;
LAB_10b1b16b0:
  in_ZR = lVar7 == lStack_488;
LAB_10b1b16c0:
  lStack_388 = plVar9[3];
  lStack_390 = plVar9[2];
  if (plVar9[3] != 0) {
    do {
      func_0x00010b1b1b74();
    } while (extraout_w10_02 != 0);
  }
  plStack_380 = plVar9;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&lStack_378,auStack_530);
  func_0x00010b1a7684(auStack_70,1);
  puVar5 = puStack_60;
  puStack_60[2] = 0;
  *puStack_60 = &PTR_FUN_110cc3038;
  puStack_60[1] = 0;
  pcStack_c0 = FUN_10b1b1994;
  ppuStack_b8 = &PTR_FUN_110cc3240;
  plVar9 = (long *)0x30;
  __Znwm();
  plVar9[1] = lStack_388;
  *plVar9 = lStack_390;
  lStack_390 = 0;
  lStack_388 = 0;
  plVar9[2] = (long)plStack_380;
  plVar9[4] = lStack_370;
  plVar9[3] = lStack_378;
  plVar9[5] = lStack_368;
  lStack_378 = 0;
  lStack_370 = 0;
  lStack_368 = 0;
  plStack_b0 = plVar9;
  FUN_10b1b1cf8(puVar5 + 3,alStack_348,&pcStack_c0);
  func_0x00010b1b1b4c(ppuStack_b8);
  puVar5 = puStack_60;
  puStack_60 = (undefined8 *)0x0;
  puStack_350 = puVar5;
  puStack_358 = puVar5 + 3;
  func_0x00010b1a771c(auStack_70);
  FUN_10b1b04c0(&lStack_390);
  puStack_398 = puVar5;
  puStack_3a0 = puVar5 + 3;
  do {
    func_0x00010b1b1b74();
  } while (extraout_w10_03 != 0);
  FUN_10b19de70();
  FUN_10b0fb81c(&puStack_3a0);
  func_0x00010b1a7660(&puStack_358);
  func_0x00010b1b1c88();
  func_0x00010b1b1ca4();
  func_0x00010b1b1c80();
  func_0x00010b1b1c58();
LAB_10b1b17e8:
  func_0x00010b1b1c50();
LAB_10b1b17ec:
  func_0x00010b125888(alStack_3c8);
LAB_10b1b17f4:
  func_0x00010b1b1c10();
  func_0x00010b1b1b38(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b1b1c50();
    func_0x00010b125888(alStack_3c8);
    do {
      func_0x00010b1b1c10();
      func_0x00010b1b1b64();
    } while( true );
  }
  return;
}



/* Entry: 10b1b1968; end: 10b1b1993;  */

long FUN_10b1b1968(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1 + 8;
}



/* Entry: 10b1b1994; end: 10b1b19e3;  */

void FUN_10b1b1994(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long alStack_30 [2];
  
  lVar2 = *(long *)(param_3 + 0x10);
  uVar1 = *(undefined8 *)(lVar2 + 0x10);
  FUN_10b1acce8(alStack_30,lVar2);
  if (alStack_30[0] != 0) {
    FUN_10b1b0064(uVar1,lVar2 + 0x18);
  }
  func_0x00010b1b1c10();
  return;
}



/* Entry: 10b1b19e4; end: 10b1b1a03;  */

void FUN_10b1b19e4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b1b04c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1b1a04; end: 10b1b1a1b;  */

void FUN_10b1b1a04(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b1b1a1c; end: 10b1b1af7;  */

void FUN_10b1b1a1c(long param_1)

{
  undefined1 auStack_30 [8];
  undefined1 *puStack_28;
  
  FUN_10b12d0d0(param_1 + 0x78);
  func_0x00010b1b1c70();
  func_0x00010b1b1ba4();
  FUN_10b124fa8(param_1 + 0x38);
  func_0x00010b1b1c18();
  if (*(char *)(param_1 + 0x40) == '\x01') {
    puStack_28 = auStack_30;
    func_0x000107c27b6c(param_1 + 0x10,&puStack_28);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(auStack_30,param_1 + 0x38);
    puStack_28 = auStack_30;
    func_0x000104bf33ec(param_1 + 0x10,&puStack_28);
    __ZNSt13exception_ptrD1Ev(auStack_30);
  }
  func_0x00010b1b1bd4();
  func_0x00010b1b1c60();
  return;
}



/* Entry: 10b1b1af8; end: 10b1b1b2b;  */

void FUN_10b1b1af8(long param_1)

{
  if ((*(byte *)(param_1 + 0x98) & 1) == 0) {
    func_0x00010b1b1c70();
    func_0x00010b1b1ba4();
  }
  func_0x00010b1b1bd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b1b1b2c; end: 10b1b1cf7;  */

void FUN_10b1b1b2c(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x29;
  
  lVar1 = unaff_x29 + -0xb0;
  func_0x000107c27f4c();
  *(long *)(lVar1 + 0x10) = unaff_x19 + 0x70;
  return;
}



/* Entry: 10b1b1cf8; end: 10b1b1dc3;  */

undefined8 * FUN_10b1b1cf8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_b0 [120];
  undefined1 uStack_38;
  
  *param_1 = &PTR_FUN_110cc3268;
  lVar5 = param_2[1];
  uVar4 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar4;
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
  param_1[4] = *param_3;
  (**(code **)(param_3[1] + 0x10))(param_1 + 5,param_3 + 1);
  uVar4 = param_1[1];
  auStack_b0[0] = 0;
  uStack_38 = 0;
  FUN_10b1a1a14(uVar4,auStack_b0);
  param_1[3] = uVar4;
  FUN_10b0faf98(auStack_b0);
  return param_1;
}



/* Entry: 10b1b1dc4; end: 10b1b1e13;  */

void FUN_10b1b1dc4(long param_1)

{
  long lVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_10b1a1ae8(lVar1,*(undefined8 *)(param_1 + 0x18));
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x00010b138874((long *)(param_1 + 8),&uStack_30);
    func_0x00010b129c40(&uStack_30);
  }
  return;
}



/* Entry: 10b1b1e14; end: 10b1b1e17;  */

undefined8 * FUN_10b1b1e14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc3268;
  (**(code **)param_1[5])();
  func_0x00010b129c40(param_1 + 1);
  return param_1;
}



/* Entry: 10b1b1e18; end: 10b1b1e2b;  */

void FUN_10b1b1e18(void)

{
  FUN_10b1b1e94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1b1e2c; end: 10b1b1e2f;  */

void FUN_10b1b1e2c(void)

{
  return;
}



/* Entry: 10b1b1e30; end: 10b1b1e93;  */

void FUN_10b1b1e30(long *param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(*param_1 + 0x20))();
  if ((*(byte *)(param_1[5] + 8) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010b1b1e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_1[4])(param_2,param_3,param_1 + 4);
  return;
}



/* Entry: 10b1b1e94; end: 10b1b1ed7;  */

undefined8 * FUN_10b1b1e94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc3268;
  (**(code **)param_1[5])();
  func_0x00010b129c40(param_1 + 1);
  return param_1;
}



/* Entry: 10b1b1ed8; end: 10b1b360f;  */

void FUN_10b1b1ed8(long param_1,long *param_2,int param_3,long param_4,ulong param_5,int param_6,
                  long param_7,undefined8 param_8,uint param_9)

{
  uint uVar1;
  undefined **ppuVar2;
  undefined ******ppppppuVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined1 uVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *****pppppuVar10;
  undefined ****ppppuVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  undefined *****pppppuVar15;
  ulong uVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined8 *****extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  ulong *extraout_x8_11;
  undefined8 *unaff_x19;
  undefined8 *puVar19;
  byte bVar20;
  int iVar21;
  undefined *****pppppuVar22;
  undefined8 uVar23;
  long *plVar24;
  undefined8 *puVar25;
  undefined4 *puVar26;
  byte bVar27;
  undefined8 *puVar28;
  uint in_stack_ffffffffffffe830;
  undefined4 uStack_1780;
  undefined1 uStack_177c;
  undefined *puStack_1778;
  undefined8 uStack_1770;
  byte bStack_1720;
  undefined1 auStack_1718 [24];
  undefined1 auStack_1700 [24];
  int iStack_16e8;
  undefined1 uStack_16e0;
  undefined7 uStack_16df;
  ulong uStack_16d8;
  byte bStack_16c9;
  undefined8 uStack_16c8;
  undefined8 uStack_16c0;
  undefined8 uStack_16b8;
  undefined8 uStack_16b0;
  undefined8 uStack_16a8;
  uint auStack_16a0 [2];
  undefined1 auStack_1698 [48];
  undefined4 uStack_1668;
  undefined1 auStack_1660 [152];
  undefined4 uStack_15c8;
  char cStack_15c0;
  undefined1 auStack_15b8 [56];
  byte bStack_1580;
  byte bStack_1578;
  undefined1 uStack_1570;
  undefined1 uStack_156c;
  undefined1 uStack_1568;
  undefined1 uStack_1564;
  undefined1 auStack_1560 [32];
  undefined1 auStack_1540 [120];
  undefined8 uStack_14c8;
  undefined8 uStack_14c0;
  undefined8 uStack_14b8;
  undefined1 auStack_14a8 [32];
  undefined1 uStack_1488;
  undefined ****ppppuStack_1480;
  ulong uStack_1478;
  ulong uStack_1470;
  undefined1 uStack_1468;
  ulong uStack_1460;
  undefined8 uStack_1458;
  undefined8 uStack_1450;
  undefined1 uStack_1448;
  undefined8 ****ppppuStack_1440;
  ulong uStack_1438;
  ulong uStack_1430;
  undefined1 uStack_1428;
  undefined8 uStack_1420;
  undefined8 uStack_1418;
  undefined8 uStack_1410;
  byte bStack_1208;
  undefined ****ppppuStack_1190;
  ulong uStack_1188;
  undefined8 uStack_1180;
  undefined4 uStack_1178;
  long lStack_1148;
  char cStack_1138;
  int iStack_112c;
  long lStack_1110;
  byte bStack_1108;
  byte bStack_fd0;
  ulong uStack_f18;
  ulong uStack_f10;
  ulong uStack_f08;
  undefined1 auStack_ef8 [104];
  undefined8 *puStack_e90;
  undefined8 *puStack_e88;
  undefined8 uStack_e80;
  undefined1 auStack_e78 [24];
  undefined1 uStack_e60;
  undefined1 auStack_e58 [24];
  undefined1 uStack_e40;
  undefined1 auStack_e38 [64];
  undefined1 uStack_df8;
  undefined1 auStack_df0 [232];
  undefined1 uStack_d08;
  undefined1 auStack_d00 [24];
  undefined1 uStack_ce8;
  undefined1 auStack_ce0 [56];
  undefined1 uStack_ca8;
  undefined1 auStack_ca0 [24];
  undefined8 ****ppppuStack_c88;
  ulong uStack_c80;
  undefined8 uStack_c78;
  char cStack_c70;
  undefined7 uStack_c6f;
  undefined4 *puStack_c68;
  undefined4 uStack_c58;
  char cStack_c50;
  byte bStack_c48;
  uint uStack_c44;
  byte bStack_c40;
  char cStack_c38;
  byte bStack_c10;
  int iStack_c0c;
  byte bStack_c08;
  ulong uStack_bf8;
  ulong uStack_bf0;
  uint uStack_be8;
  undefined4 uStack_be4;
  undefined4 uStack_be0;
  undefined4 uStack_bdc;
  undefined4 uStack_bd8;
  undefined4 uStack_bd4;
  ulong uStack_bd0;
  undefined4 uStack_bc8;
  undefined4 uStack_ba8;
  undefined4 uStack_ba4;
  undefined4 uStack_b88;
  byte bStack_b68;
  char cStack_b48;
  char cStack_b28;
  char cStack_b08;
  char cStack_b00;
  undefined4 uStack_af8;
  undefined4 *puStack_af0;
  undefined4 *puStack_ae8;
  long lStack_ad8;
  long lStack_ad0;
  char cStack_ac0;
  char cStack_ab8;
  undefined8 uStack_a70;
  char cStack_a68;
  ulong uStack_a60;
  undefined8 uStack_a58;
  ulong uStack_a50;
  undefined ***pppuStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined ***pppuStack_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  byte bStack_9f8;
  undefined ***pppuStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  uint uStack_9d8;
  undefined1 uStack_9b0;
  ulong uStack_870;
  ulong uStack_868;
  ulong uStack_860;
  undefined1 auStack_858 [24];
  undefined1 auStack_840 [8];
  undefined1 auStack_838 [64];
  byte bStack_7f8;
  undefined4 uStack_7e4;
  undefined8 uStack_7e0;
  undefined4 uStack_7d8;
  undefined ****ppppuStack_6f0;
  ulong uStack_6e8;
  undefined8 uStack_6e0;
  undefined *****pppppuStack_570;
  ulong uStack_568;
  ulong uStack_560;
  char cStack_558;
  long lStack_528;
  byte bStack_518;
  long lStack_4f0;
  byte bStack_4e8;
  byte bStack_3b0;
  undefined1 uStack_348;
  byte bStack_2f8;
  ulong uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  char cStack_2d8;
  undefined1 auStack_2c8 [40];
  undefined1 auStack_2a0 [40];
  undefined1 auStack_278 [40];
  undefined *puStack_250;
  undefined8 uStack_248;
  ulong uStack_240;
  undefined8 uStack_238;
  ulong uStack_230;
  undefined8 uStack_78;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = param_7;
  func_0x00010b1b3d28();
  uStack_78 = extraout_x8;
  if ((*(byte *)(lVar14 + 0xa0) & 1) == 0) {
    lVar14 = param_1;
    FUN_10b1c41c0(param_1);
    FUN_10b11fdb8(param_7,lVar14);
  }
  if ((param_4 != 0) && (*(int *)(param_7 + 0x98) == 0)) {
    *(undefined4 *)(param_7 + 0x98) = *(undefined4 *)(param_4 + 0x1c);
  }
  if ((*(byte *)(param_7 + 0x10) >> 1 & 1) == 0) {
    ppuVar2 = &PTR_PTR_113405540;
    if (*(undefined ***)(param_7 + 0x60) != (undefined **)0x0) {
      ppuVar2 = *(undefined ***)(param_7 + 0x60);
    }
    puVar19 = (undefined8 *)((ulong)ppuVar2[2] & 0xfffffffffffffffc);
    func_0x00010b1b3c44();
    func_0x000107c27fdc();
    lVar14 = (long)*(char *)((long)puVar19 + 0x17);
    if (lVar14 < 0) {
      lVar14 = puVar19[1];
      puVar19 = (undefined8 *)*puVar19;
    }
    _memcpy(ppppuStack_6f0,puVar19,lVar14);
    uStack_1188 = uStack_6e8;
    ppppuStack_1190 = ppppuStack_6f0;
    uStack_1180 = uStack_6e0;
    ppppuStack_6f0 = (undefined ****)0x0;
    uStack_6e8 = 0;
    uStack_6e0 = 0;
    uStack_1178 = 1;
    func_0x00010b1b3c0c();
    func_0x000107c27f70();
    uVar9 = (ulong)*(uint *)(param_1 + 0x18);
    func_0x00010b20b440();
    uStack_870 = uVar9;
    func_0x00010b1b3c30();
    func_0x000105c3d708();
    pppuStack_9f0 = (undefined ***)(&PTR_DAT_110cc6e78)[*(int *)(param_7 + 0x88)];
    func_0x000105c3d708(&ppppuStack_c88,&pppuStack_9f0);
    ppppuStack_1480 = (undefined ****)((ulong)ppppuStack_1480 & 0xffffffffffffff00);
    uStack_1468 = cStack_558 == '\x01';
    if ((bool)uStack_1468) {
      uStack_1478 = uStack_568;
      ppppuStack_1480 = (undefined ****)pppppuStack_570;
      uStack_1470 = uStack_560;
      uStack_560 = 0;
      pppppuStack_570 = (undefined *****)0x0;
      uStack_568 = 0;
    }
    uStack_1460 = uStack_1460 & 0xffffffffffffff00;
    uStack_1448 = cStack_2d8 == '\x01';
    if ((bool)uStack_1448) {
      uStack_1458 = uStack_2e8;
      uStack_1460 = uStack_2f0;
      uStack_1450 = uStack_2e0;
      uStack_2e0 = 0;
      uStack_2f0 = 0;
      uStack_2e8 = 0;
    }
    ppppuStack_1440 = (undefined8 ****)((ulong)ppppuStack_1440 & 0xffffffffffffff00);
    uStack_1428 = cStack_c70 == '\x01';
    if ((bool)uStack_1428) {
      uStack_1438 = uStack_c80;
      ppppuStack_1440 = ppppuStack_c88;
      uStack_1430 = uStack_c78;
      uStack_c78 = 0;
      ppppuStack_c88 = (undefined8 *****)0x0;
      uStack_c80 = 0;
    }
    uStack_1418 = 0;
    uStack_1420 = 0;
    uStack_1410 = 0;
    func_0x00010b1b3c74();
    func_0x0001052bb09c(&ppppuStack_1480);
    func_0x000107c279a4(&ppppuStack_c88);
    func_0x00010b1b3c30();
    func_0x000107c279a4();
    func_0x00010b1b3c0c();
    func_0x000107c279a4();
    func_0x00010b1b3c64();
    func_0x00010b1b3c44();
    func_0x000107c27914();
    if ((int)param_5 != 0) goto LAB_10b1b201c;
LAB_10b1b2188:
    func_0x000107c278b8(&uStack_16e0,"");
  }
  else {
    FUN_10b1b3664(&pppppuStack_570,*(undefined8 *)(param_7 + 0x58));
    ppppuStack_1190 = (undefined ****)pppppuStack_570;
    uStack_1188 = uStack_568;
    if (uStack_568 != 0) {
      plVar24 = (long *)(uStack_568 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar5) {
          *plVar24 = *plVar24 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uStack_1178 = 0;
    (*(code *)(*pppppuStack_570)[0xe])(&ppppuStack_1480);
    func_0x00010b1b3c74();
    func_0x0001052bb09c(&ppppuStack_1480);
    func_0x00010b1b3c64();
    func_0x00010b1b3c0c();
    FUN_10b12b2e8();
    if ((int)param_5 == 0) goto LAB_10b1b2188;
LAB_10b1b201c:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_16e0,param_1);
  }
  puVar19 = (undefined8 *)(param_1 + 0x60);
  FUN_10b120010();
  uStack_16c0 = puVar19[1];
  uStack_16c8 = *puVar19;
  uStack_16b0 = puVar19[3];
  uStack_16b8 = puVar19[2];
  uStack_16a8 = puVar19[4];
  lVar14 = param_1 + 0x18;
  func_0x00010b120028(lVar14);
  func_0x00010b125750(auStack_16a0,lVar14);
  FUN_10b121494(auStack_1660,param_7);
  auStack_15b8[0] = 0;
  bStack_1578 = 0;
  uStack_1570 = 0;
  uStack_156c = 0;
  uStack_1568 = 0;
  uStack_1564 = 0;
  FUN_10b1c4ae8();
  if (param_1 != 0) {
    func_0x00010b11fdec(auStack_15b8);
  }
  if ((param_5 & 1) == 0) {
    uStack_16c0 = 0;
    uStack_16b8 = 0;
    uStack_16b0 = 0;
  }
  FUN_10b1b3acc(auStack_1700,auStack_1560);
  bVar20 = bStack_1578;
  bVar27 = bStack_1580;
  func_0x000107c278b8(auStack_1718,&UNK_10f731917);
  FUN_10b1252ec(&uStack_1780,param_8);
  func_0x000107c278b8(auStack_ca0,"");
  auStack_ce0[0] = 0;
  uStack_ca8 = 0;
  auStack_d00[0] = 0;
  uStack_ce8 = 0;
  auStack_df0[0] = 0;
  uStack_d08 = 0;
  auStack_e38[0] = 0;
  uStack_df8 = 0;
  auStack_e58[0] = 0;
  uStack_e40 = 0;
  auStack_e78[0] = 0;
  uStack_e60 = 0;
  func_0x0001052b4adc(&ppppuStack_c88,auStack_ca0,auStack_ce0,auStack_d00,0,0,0,0,
                      in_stack_ffffffffffffe830 & 0xffffff00);
  func_0x000107c279a4(auStack_e78);
  func_0x0001052b4f4c(auStack_e58);
  func_0x0001052b4f6c(auStack_e38);
  func_0x0001052b4218(auStack_df0);
  func_0x0001052b4fb8(auStack_d00);
  func_0x0001052b41f8(auStack_ce0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_ca0);
  puStack_e88 = (undefined8 *)0x0;
  puStack_e90 = (undefined8 *)0x0;
  uStack_e80 = 0;
  uStack_1780 = uStack_15c8;
  if (cStack_15c0 == '\0') {
    uStack_1780 = 0;
  }
  if ((bStack_1720 & 1) == 0) {
    FUN_10b11fd10(&uStack_1780);
  }
  uStack_177c = 1;
  if (iStack_16e8 == 0) {
    func_0x00010b1b3cc8();
    pppppuStack_570 = (undefined *****)&PTR_FUN_110cc32f8;
    ppppppuVar3 = &pppppuStack_570;
    if (param_9._1_1_ == '\0') {
      ppppppuVar3 = (undefined ******)&ppppuStack_1480;
    }
    uVar17 = 2;
    if (param_3 != 3) {
      uVar17 = 0;
    }
    if (param_3 == 1) {
      uVar17 = 1;
    }
    plVar24 = *(long **)(*param_2 + 0x20);
    func_0x00010b1b3c9c();
    (**(code **)(*plVar24 + 0x98))
              (&ppppuStack_1190,plVar24,auStack_1700,ppppppuVar3,uVar17,&ppppuStack_c88,auStack_ef8)
    ;
    func_0x00010b1b3cf0();
    FUN_10b125534(&ppppuStack_1190);
    func_0x00010b1b3ca8();
    func_0x00010b1b3cd4();
  }
  else {
    if (((param_9 & 1) == 0) && ((bStack_1578 != 1 || ((bStack_1580 & 1) != 0)))) {
      uStack_1770 = 4;
      if (param_6 == 0) {
        uStack_1770 = 0;
      }
      puStack_1778 = &UNK_10e564168;
      if (param_6 == 0) {
        puStack_1778 = (undefined *)0x0;
      }
    }
    else {
      puStack_1778 = &UNK_10e564160;
      uStack_1770 = 2;
    }
    func_0x00010b1b3cc8();
    pppppuStack_570 = (undefined *****)&PTR_FUN_110cc32f8;
    ppppppuVar3 = &pppppuStack_570;
    if (param_9._1_1_ == '\0') {
      ppppppuVar3 = (undefined ******)&ppppuStack_1480;
    }
    plVar24 = *(long **)(*param_2 + 0x20);
    func_0x00010b1b3c9c();
    (**(code **)(*plVar24 + 0xa0))
              (&ppppuStack_1190,plVar24,auStack_1700,auStack_1698,auStack_1540,ppppppuVar3,
               &ppppuStack_c88,auStack_ef8);
    func_0x00010b1b3cf0();
    FUN_10b125534(&ppppuStack_1190);
    func_0x00010b1b3ca8();
    func_0x00010b1b3cd4();
  }
  pppppuVar15 = (undefined *****)(ulong)auStack_16a0[0];
  lVar14 = *(long *)(*param_2 + 0x10) + 0x38;
  func_0x00010b20192c(lVar14,&PTR_DAT_110cc32a8);
  puVar19 = puStack_e88;
  puVar25 = puStack_e90;
  if ((bVar20 & bVar27 & 1) == 0) {
LAB_10b1b24f0:
    bStack_c48 = 0;
LAB_10b1b24f4:
    bVar27 = bStack_c48;
    if ((uStack_16c8._4_4_ == 2) && ((bStack_c48 & 1) == 0)) {
      bVar27 = 0;
      uStack_16c8 = CONCAT44(1,(undefined4)uStack_16c8);
    }
  }
  else {
    uVar18 = 0;
    if (iStack_c0c == 2) {
      uVar18 = (uint)bStack_c10;
    }
    if (((uint)lVar14 | uVar18) != 1) {
      if (cStack_c38 != '\x01') goto LAB_10b1b24f0;
      goto LAB_10b1b24f4;
    }
    bVar27 = 1;
  }
  for (; puVar25 != puVar19; puVar25 = puVar25 + 2) {
    (**(code **)(*(long *)*puVar25 + 0x40))(&ppppuStack_1480);
    if ((char)uStack_1470 == '\x01') {
      if ((undefined *****)ppppuStack_1480 == (undefined *****)0x0) {
        pppppuVar22 = (undefined *****)0x0;
      }
      else {
        pppppuVar22 = (undefined *****)ppppuStack_1480;
        (*(code *)(*ppppuStack_1480)[3])();
      }
      func_0x00010b1b3cdc();
      if (pppppuVar22 != (undefined *****)0x0) break;
    }
    else {
      func_0x00010b1b3cdc();
    }
  }
  puVar28 = (undefined8 *)*param_2;
  _bzero(&ppppuStack_1480,0x290);
  uVar9 = uStack_c80;
  if (-1 < (long)uStack_c78) {
    uVar9 = uStack_c78 >> 0x38;
  }
  if (uVar9 == 0) {
LAB_10b1b25b8:
    func_0x00010b1b3cb0();
  }
  else {
    uVar9 = uStack_16d8;
    if (-1 < (char)bStack_16c9) {
      uVar9 = (ulong)bStack_16c9;
    }
    if (uVar9 != 0) goto LAB_10b1b25b8;
    pppppuVar10 = (undefined8 *****)ppppuStack_c88;
    if (-1 < (long)uStack_c78) {
      pppppuVar10 = &ppppuStack_c88;
    }
    FUN_10b205f70(auStack_14a8,pppppuVar10);
    if (puVar25 == puVar19) {
      iVar21 = uStack_16c8._4_4_;
      uStack_14c0 = 0;
      uStack_14c8 = 0;
      uStack_14b8 = 0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (&uStack_16e0,auStack_14a8);
      uVar23 = puVar28[8];
      func_0x00010b1b3c44();
      func_0x00010b1b3c5c();
      FUN_10b1f6ad4(&pppppuStack_570,uVar23,&ppppuStack_6f0);
      iVar8 = (int)uVar23;
      func_0x00010b1b3c24();
      bVar20 = bStack_3b0;
      if (bStack_4e8 == 1) {
        if ((bStack_2f8 & 1) == 0) {
          if (lStack_4f0 < 1) {
            func_0x00010b1b3c0c();
            func_0x00010b1b3880();
            if (iVar8 == 0) {
              if ((bStack_4e8 != 1) || ((bStack_2f8 & 1) == 0)) goto LAB_10b1b2694;
              goto LAB_10b1b280c;
            }
          }
LAB_10b1b2750:
          func_0x00010b1b3c5c(&uStack_870);
          func_0x00010b1b3d1c(&uStack_870);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
          uVar23 = puVar28[8];
          func_0x00010b1213e8(&pppuStack_9f0,&uStack_870);
          func_0x00010b1b3d3c();
          func_0x00010b1b3d1c();
          pppppuVar15 = (undefined *****)0x0;
          FUN_10b1f6b3c(uVar23);
          func_0x00010b1b3c0c();
          func_0x00010b1b3c84();
          FUN_10b1151e4();
          func_0x00010b1b3c18();
          FUN_10b1213b8(&pppuStack_9f0);
          if ((((bStack_518 != 1) || ((bStack_4e8 & 1) == 0)) || (lStack_4f0 != 0)) ||
             (lStack_528 != 0)) {
            pppppuVar15 = (undefined *****)(ulong)auStack_16a0[0];
            uStack_a20 = 0;
            pppuStack_a30 = (undefined ***)0x0;
            uStack_a28 = 0;
            FUN_10b1f71a4(puVar28[8],&uStack_16e0,pppppuVar15,auStack_1698,2,&pppuStack_a30);
            func_0x000107c27914(&pppuStack_a30);
          }
          bStack_2f8 = 1;
          FUN_10b1213b8(&uStack_870);
        }
      }
      else {
        if ((bStack_2f8 & 1) == 0) goto LAB_10b1b2750;
        bVar20 = 0;
LAB_10b1b2694:
        func_0x00010b201894(puVar28[2] + 0x38,&PTR_DAT_110cc32d0);
        uVar23 = puVar28[8];
        FUN_10b202630(&uStack_870,&uStack_16e0);
        func_0x00010b125750(&pppuStack_a30,auStack_16a0);
        FUN_10b12110c(&pppuStack_9f0,auStack_15b8);
        func_0x00010b1b3d3c();
        pppppuVar15 = (undefined *****)&pppuStack_a30;
        FUN_10b1f6db4(uVar23,&uStack_870,pppppuVar15,iVar21 == 2,1,&pppuStack_9f0,&uStack_14c8);
        func_0x00010b1b3c0c();
        func_0x00010b1b3c84();
        FUN_10b1151e4();
        func_0x00010b1b3c18();
        FUN_10b121398(&pppuStack_9f0);
        func_0x00010b1b3ce4();
        func_0x00010b121e00(&uStack_870);
        bStack_3b0 = bVar20 | bStack_3b0;
      }
LAB_10b1b280c:
      func_0x00010b1b3c30();
      func_0x000107c278b8();
      func_0x00010b1b3c84(&uStack_870,&uStack_14c8);
      FUN_10b2055a0();
      func_0x00010b1b3c30();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      if ((bStack_518 & 1) == 0) {
        uVar23 = *puVar28;
        func_0x00010b1b3c30();
        FUN_10b12983c();
        func_0x00010b12aca4(auStack_2c8,uStack_1668);
        func_0x00010b126fec(auStack_2a0,1);
        FUN_10b123d58(auStack_278,"reason",6,&DAT_10f5294c0);
        func_0x00010b1b3d3c();
        uVar9 = uStack_868;
        if (-1 < (long)uStack_860) {
          uVar9 = uStack_860 >> 0x38;
        }
        if (uVar9 == 0) {
          func_0x000107c278b8(&uStack_a60,"NULL");
        }
        else {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (&uStack_a60,&uStack_870);
        }
        puStack_250 = &UNK_10f72fb33;
        uStack_248 = 0x15;
        uStack_238 = uStack_a58;
        uStack_240 = uStack_a60;
        uStack_230 = uStack_a50;
        uStack_a58 = 0;
        uStack_a60 = 0;
        uStack_a50 = 0;
        func_0x00010b1b3c84(&pppuStack_a48);
        func_0x00010b120648();
        pppppuVar15 = (undefined *****)&pppuStack_a48;
        FUN_10b114b00(uVar23,0xa4,pppppuVar15,1);
        FUN_10b120998(&pppuStack_a48);
        lVar14 = 0xb0;
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                    ((long)&uStack_2f0 + lVar14);
          lVar14 = lVar14 + -0x28;
        } while (lVar14 != -0x18);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_a60);
        if ((char)bStack_16c9 < '\0') {
          *(undefined1 *)CONCAT71(uStack_16df,uStack_16e0) = 0;
          uStack_16d8 = 0;
        }
        else {
          uStack_16e0 = 0;
          bStack_16c9 = 0;
        }
      }
      func_0x00010b1b3d1c(&ppppuStack_1190);
      FUN_10b121c1c();
      uStack_f10 = uStack_868;
      uStack_f18 = uStack_870;
      uStack_f08 = uStack_860;
      uStack_860 = 0;
      uStack_870 = 0;
      uStack_868 = 0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_870);
      func_0x00010b1b3c0c();
      func_0x00010b121af0();
      func_0x00010b1b399c(&uStack_14c8);
    }
    else {
      func_0x00010b1b3cb0();
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_14a8);
  }
  FUN_10b1b3aa4(&ppppuStack_1480);
  if ((cStack_1138 == '\x01') && ((bStack_1108 & 1) != 0)) {
    iVar21 = (int)&ppppuStack_1190;
    FUN_10b1c4c0c();
    if (iVar21 != 0) goto LAB_10b1b2a04;
  }
  else {
LAB_10b1b2a04:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (&pppuStack_a48,auStack_1698);
    uStack_9e8 = uStack_a40;
    pppuStack_9f0 = pppuStack_a48;
    uStack_9e0 = uStack_a38;
    uStack_a40 = 0;
    pppuStack_a48 = (undefined ***)0x0;
    uStack_a38 = 0;
    uStack_9d8 = auStack_16a0[0];
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_a48);
    uVar9 = uStack_16d8;
    if (-1 < (char)bStack_16c9) {
      uVar9 = (ulong)bStack_16c9;
    }
    if (uVar9 == 0) {
      func_0x00010b206f0c(&pppppuStack_570,&pppuStack_9f0);
      uVar13 = uStack_568;
      ppppppuVar3 = (undefined ******)pppppuStack_570;
      if (-1 < (long)uStack_560) {
        uVar13 = uStack_560 >> 0x38;
        ppppppuVar3 = &pppppuStack_570;
      }
      FUN_10b205f70(&ppppuStack_1480,ppppppuVar3,uVar13);
      func_0x000107c27b9c(&uStack_16e0,&ppppuStack_1480);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppuStack_1480);
      func_0x00010b1b3c0c();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    }
    uVar23 = *(undefined8 *)(*param_2 + 0x40);
    func_0x00010b1b3c30();
    func_0x00010b1b3c5c();
    func_0x00010b1b3c84(&ppppuStack_1480);
    FUN_10b1f6ad4(uVar23);
    func_0x00010b1b3cbc();
    func_0x00010b1b3c6c();
    func_0x00010b1b3c30();
    FUN_10b1213b8();
    if ((bStack_1208 & 1) == 0) {
      bVar20 = uVar9 != 0 & (bStack_fd0 ^ 1);
    }
    else {
      bVar20 = 0;
    }
    if (((cStack_1138 == '\x01') && ((bStack_1108 & 1) != 0)) &&
       ((lStack_1110 == 0 && (lStack_1148 == 0)))) {
      uVar18 = 0;
      FUN_10b1c4c0c();
      if (bVar20 != 0 || (uVar18 & 1) != 0) goto LAB_10b1b2b40;
      iVar21 = (int)&ppppuStack_1190;
      func_0x00010b1b3880();
      if (iVar21 != 0) goto LAB_10b1b2b40;
    }
    else {
LAB_10b1b2b40:
      func_0x00010b1b3c0c();
      func_0x00010b1b3c5c();
      func_0x00010b1b3c0c();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
      uVar23 = *(undefined8 *)(*param_2 + 0x40);
      func_0x00010b1b3c44();
      func_0x00010b1b3d1c();
      func_0x00010b1213e8();
      pppppuVar15 = &ppppuStack_6f0;
      FUN_10b1f6b3c(&ppppuStack_1480,uVar23,&ppppuStack_1190,pppppuVar15,1);
      func_0x00010b1b3cbc();
      func_0x00010b1b3c6c();
      func_0x00010b1b3c24();
      func_0x00010b1b3c0c();
      FUN_10b1213b8();
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(&uStack_f18,"");
    if (uVar9 != 0) {
      if ((long)uStack_c78 < 0) {
        pppppuVar10 = (undefined8 *****)ppppuStack_c88;
        if (uStack_c80 != 0) goto LAB_10b1b2bcc;
      }
      else if (uStack_c78._7_1_ != '\0') {
        pppppuVar10 = &ppppuStack_c88;
LAB_10b1b2bcc:
        FUN_10b205f70(&pppuStack_a30,pppppuVar10);
        ppppuVar11 = &pppuStack_a30;
        func_0x000107c278d0(ppppuVar11,&uStack_16e0);
        if (((ulong)ppppuVar11 & 1) == 0) {
          uVar23 = *(undefined8 *)(*param_2 + 0x40);
          FUN_10b202630(&ppppuStack_1480,&pppuStack_a30);
          func_0x00010b1b3c0c();
          FUN_10b202630();
          pppppuVar15 = (undefined *****)0x0;
          FUN_10b1f7560(&uStack_870,uVar23,&ppppuStack_1480);
          func_0x00010b1b3c0c();
          func_0x00010b121e00();
          func_0x00010b121e00(&ppppuStack_1480);
          func_0x0001052a038c(&uStack_870);
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_a30);
      }
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_9f0);
  }
  if (iStack_112c == 2 && (bVar27 & 1) == 0) {
    iStack_112c = 1;
  }
  pppppuVar22 = &ppppuStack_1190;
  FUN_10b1c41c0(pppppuVar22);
  FUN_10b121300(&uStack_870,pppppuVar22);
  pppppuVar22 = &ppppuStack_1190;
  FUN_10b1c4ae8(pppppuVar22);
  FUN_10b12138c(&pppuStack_a30,pppppuVar22);
  FUN_10b250520(auStack_858);
  puVar25 = puStack_e88;
  for (puVar19 = puStack_e90; puVar19 != puVar25; puVar19 = puVar19 + 2) {
    func_0x00010b163134(auStack_858);
    FUN_10b20513c();
  }
  bStack_9f8 = bVar27 & 1;
  bStack_7f8 = bStack_c10 ^ 1 | iStack_c0c != 2;
  if (cStack_a68 == '\0') {
    uStack_a70 = 0;
  }
  uStack_7e0 = uStack_a70;
  if (cStack_c38 == '\x01') {
    if (cStack_c50 == '\x01') {
      puVar12 = &uStack_870;
      func_0x00010b1b38d0();
      *(undefined4 *)((long)puVar12 + 0x24) = uStack_c58;
      for (puVar26 = (undefined4 *)CONCAT71(uStack_c6f,cStack_c70); puVar26 != puStack_c68;
          puVar26 = puVar26 + 1) {
        uVar17 = *puVar26;
        puVar12 = &uStack_870;
        func_0x00010b1b38d0(puVar12);
        func_0x000107c29100(puVar12 + 2,uVar17);
      }
    }
    uVar9 = (ulong)uStack_c44;
    uVar18 = bStack_c40 & 1;
  }
  else {
    uVar18 = 0;
    uVar9 = 0;
  }
  iVar21 = (int)uVar9;
  puVar12 = &uStack_870;
  func_0x00010b163124();
  if ((bRam00000001137f40f0 & 1) == 0) {
    iVar8 = 0x137f40f0;
    ___cxa_guard_acquire();
    if (iVar8 != 0) {
      bVar27 = 0x28;
      func_0x000107c2be10();
      bRam00000001137f40e8 = bVar27;
      ___cxa_guard_release(0x1137f40f0);
    }
  }
  if ((cStack_b00 == '\x01') &&
     (((((int)(uint)puVar12[0xe] < 1 && (*(int *)((long)puVar12 + 0x74) < 1)) ||
       (uStack_be8 != (uint)puVar12[0xe])) || ((bRam00000001137f40e8 & 1) == 0)))) {
    *(uint *)(puVar12 + 0xe) = uStack_be8;
    *(undefined4 *)(puVar12 + 0x10) = uStack_be4;
    *(undefined4 *)((long)puVar12 + 0x84) = uStack_be0;
    func_0x00010b23fe18();
    *(undefined4 *)(puVar12 + 0x11) = uStack_bdc;
    *(undefined4 *)((long)puVar12 + 0x8c) = uStack_bd8;
    *(undefined4 *)((long)puVar12 + 0x74) = uStack_bd4;
    puVar12[0xf] = uStack_bd0;
    *(undefined4 *)((long)puVar12 + 0x94) = uStack_bc8;
    func_0x00010b1b3c90();
    lVar14 = extraout_x8_00;
    if (((ulong)pppppuVar15 & 1) != 0) {
      func_0x00010b1b3c50();
      lVar14 = extraout_x8_01;
    }
    func_0x000107c30248(puVar12 + 6,lVar14 + 200);
    *(undefined4 *)(puVar12 + 0x14) = uStack_ba8;
    *(undefined4 *)(puVar12 + 0x15) = uStack_ba4;
    if ((uStack_bf0 & 1) == 0) {
      uStack_bf8 = 0;
    }
    puVar12[0x13] = uStack_bf8;
    func_0x00010b1b3c90();
    lVar14 = extraout_x8_02;
    if (((ulong)pppppuVar15 & 1) != 0) {
      func_0x00010b1b3c50();
      lVar14 = extraout_x8_03;
    }
    func_0x000107c30248(puVar12 + 7,lVar14 + 0xe8);
    *(undefined4 *)((long)puVar12 + 0xa4) = uStack_b88;
    if (bStack_b68 == 1) {
      *(uint *)(puVar12 + 2) = (uint)puVar12[2] | 1;
      uVar13 = puVar12[0xb];
      if (uVar13 == 0) {
        uVar13 = puVar12[1];
        if ((uVar13 & 1) != 0) {
          func_0x00010b1b3cfc();
        }
        FUN_10b1b3610();
        puVar12[0xb] = uVar13;
        if ((bStack_b68 & 1) == 0) goto LAB_10b1b327c;
      }
      pppppuVar10 = &ppppuStack_c88;
      pppppuVar15 = *(undefined ******)(uVar13 + 8);
      if (((ulong)pppppuVar15 & 1) != 0) {
        func_0x00010b1b3c50();
        pppppuVar10 = extraout_x8_04;
      }
      func_0x000107c30248(uVar13 + 0x10,pppppuVar10 + 0x21);
    }
    else {
      func_0x00010b24e994(puVar12);
    }
    if (cStack_b48 == '\x01') {
      func_0x00010b1b3c90();
      lVar14 = extraout_x8_05;
      if (((ulong)pppppuVar15 & 1) != 0) {
        func_0x00010b1b3c50();
        lVar14 = extraout_x8_06;
      }
      func_0x000107c30248(puVar12 + 8,lVar14 + 0x128);
    }
    else {
      func_0x000107c3025c(puVar12 + 8);
    }
    if (cStack_b28 == '\x01') {
      func_0x00010b1b3c90();
      lVar14 = extraout_x8_07;
      if (((ulong)pppppuVar15 & 1) != 0) {
        func_0x00010b1b3c50();
        lVar14 = extraout_x8_08;
      }
      func_0x000107c30248(puVar12 + 9,lVar14 + 0x148);
    }
    else {
      func_0x000107c3025c(puVar12 + 9);
    }
    if (cStack_b08 == '\x01') {
      func_0x00010b1b3c90();
      lVar14 = extraout_x8_09;
      if (((ulong)pppppuVar15 & 1) != 0) {
        func_0x00010b1b3c50();
        lVar14 = extraout_x8_10;
      }
      func_0x000107c30248(puVar12 + 10,lVar14 + 0x168);
    }
    else {
      func_0x000107c3025c(puVar12 + 10);
    }
  }
  if (cStack_ab8 == '\x01') {
    *(uint *)(puVar12 + 2) = (uint)puVar12[2] | 2;
    uVar13 = puVar12[0xc];
    if (uVar13 == 0) {
      uVar13 = puVar12[1];
      if ((uVar13 & 1) != 0) {
        func_0x00010b1b3cfc();
      }
      func_0x00010b1b3a40();
      puVar12[0xc] = uVar13;
    }
    *(undefined4 *)(uVar13 + 0x10) = uStack_af8;
    puVar26 = puStack_af0;
    if (puStack_af0 != puStack_ae8) {
      for (; puVar26 != puStack_ae8; puVar26 = puVar26 + 1) {
        func_0x000107c2845c(puVar12 + 3,*puVar26);
      }
    }
    if (cStack_ac0 == '\x01') {
      *(uint *)(puVar12 + 2) = (uint)puVar12[2] | 4;
      uVar13 = puVar12[0xd];
      if (uVar13 == 0) {
        uVar13 = puVar12[1];
        if ((uVar13 & 1) != 0) {
          func_0x00010b1b3cfc();
        }
        func_0x00010b1210c4();
        puVar12[0xd] = uVar13;
      }
      uVar16 = *(ulong *)(uVar13 + 8);
      if ((uVar16 & 1) != 0) {
        uVar16 = *(ulong *)(uVar16 & 0xfffffffffffffffe);
      }
      func_0x00010539283c(uVar13 + 0x10,lStack_ad8,lStack_ad0 - lStack_ad8,uVar16);
    }
  }
  uVar7 = cStack_b00 == '\x01';
  if ((bool)uVar7) {
    if (uVar18 == 0) {
      uVar9 = (ulong)uStack_be8;
      FUN_10b23fd2c();
      uVar18 = (uint)(uVar9 >> 0x20);
    }
    else {
      uVar18 = 1;
    }
    iVar21 = (int)uVar9;
    lVar14 = *(long *)(*param_2 + 0x10) + 0x38;
    func_0x00010b201894(lVar14,&PTR_DAT_110cc0678);
    if ((int)lVar14 == 0) goto LAB_10b1b307c;
    uVar1 = 0;
    if (iVar21 - 1U < 2) {
      uVar1 = uVar18;
    }
    uVar7 = uVar1 == 1;
    if (!(bool)uVar7) goto LAB_10b1b307c;
    func_0x000107c3025c(auStack_840);
    func_0x000107c3025c(auStack_838);
LAB_10b1b3080:
    uVar18 = iVar21 - 1;
    uVar7 = uVar18 == 2;
    if (uVar18 < 3) {
      uStack_7e4 = *(undefined4 *)(&UNK_10e5641f0 + (ulong)uVar18 * 4);
    }
    else {
      uStack_7e4 = 2;
    }
  }
  else {
LAB_10b1b307c:
    if (uVar18 != 0) goto LAB_10b1b3080;
  }
  auStack_14a8[0] = 0;
  uStack_1488 = 0;
  uStack_a60 = uStack_a60 & 0xffffffffffffff00;
  uStack_a50 = uStack_a50 & 0xffffffffffffff00;
  if (((bStack_c10 & 1) == 0) && ((bStack_c08 & 1) == 0)) {
    func_0x00010b1b3c0c();
    FUN_10b1b3a88();
  }
  else {
    pppppuStack_570 = (undefined *****)((ulong)pppppuStack_570 & 0xffffffffffffff00);
    uStack_348 = 0;
  }
  pppuStack_9f0 = (undefined ***)((ulong)pppuStack_9f0 & 0xffffffffffffff00);
  uStack_9b0 = 0;
  func_0x000107c281f8(&uStack_14c8,&ppppuStack_c88);
  FUN_10b0fbb80(&ppppuStack_1480,auStack_14a8,&uStack_a60,&pppppuStack_570,0,&pppuStack_9f0,
                &uStack_14c8,0,uStack_7d8);
  func_0x000107c279a4(&uStack_14c8);
  func_0x0001052a038c(&pppuStack_9f0);
  func_0x00010b1b3c0c();
  func_0x00010539dd5c();
  puVar12 = &uStack_870;
  if ((uStack_868 & 1) != 0) {
    func_0x00010b1b3c50();
    puVar12 = extraout_x8_11;
  }
  func_0x000107c30248(puVar12 + 8,&ppppuStack_c88);
  unaff_x19[1] = puStack_e88;
  *unaff_x19 = puStack_e90;
  unaff_x19[2] = uStack_e80;
  uStack_e80 = 0;
  puStack_e88 = (undefined8 *)0x0;
  puStack_e90 = (undefined8 *)0x0;
  FUN_10b121c1c(unaff_x19 + 3,&ppppuStack_1190);
  FUN_10b1214e8(unaff_x19 + 0x52,&uStack_870);
  FUN_10b121164(unaff_x19 + 0x66,&pppuStack_a30);
  unaff_x19[0x6f] = uStack_f10;
  unaff_x19[0x6e] = uStack_f18;
  unaff_x19[0x70] = uStack_f08;
  uStack_f10 = 0;
  uStack_f08 = 0;
  uStack_f18 = 0;
  FUN_10b1238dc(unaff_x19 + 0x71,&ppppuStack_1480);
  func_0x00010b0faf64(&ppppuStack_1480);
  FUN_10b24fff8(&pppuStack_a30);
  FUN_10b24f5cc(&uStack_870);
  FUN_10b1b3aa4(&ppppuStack_1190);
  FUN_10b125534(&puStack_e90);
  func_0x0001052b5d04(&ppppuStack_c88);
  func_0x00010b121ac0(&uStack_1780);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1718);
  FUN_10b1b3b40(auStack_1700);
  FUN_10b1213b8(&uStack_16e0);
  FUN_10b1b3be0(auStack_1560);
  func_0x00010b1b3d08(uStack_78);
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
LAB_10b1b327c:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10b1b3284);
  (*pcVar6)();
}



/* Entry: 10b1b3610; end: 10b1b3663;  */

void FUN_10b1b3610(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_DAT_110d9b4b0;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 10b1b3664; end: 10b1b3687;  */

void FUN_10b1b3664(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_10b1b3688(&uStack_11,param_1);
  return;
}



/* Entry: 10b1b3688; end: 10b1b370f;  */

undefined8 * FUN_10b1b3688(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  long *unaff_x19;
  undefined8 auStack_40 [2];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  func_0x00010b1b3d28();
  uStack_28 = extraout_x8;
  FUN_10b12b260(auStack_40,1);
  FUN_10b1b3710(lStack_30,param_2);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *unaff_x19 = lVar1 + 0x18;
  unaff_x19[1] = lVar1;
  func_0x00010b12b2d8();
  func_0x00010b1b3d08(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010b12b2d8(auStack_40);
  __Unwind_Resume();
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_110cbd7d0;
  puVar2[1] = 0;
  FUN_10b1b3758(puVar2 + 3);
  return puVar2;
}



/* Entry: 10b1b3710; end: 10b1b3757;  */

undefined8 * FUN_10b1b3710(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cbd7d0;
  param_1[1] = 0;
  FUN_10b1b3758(param_1 + 3);
  return param_1;
}



/* Entry: 10b1b3758; end: 10b1b37ab;  */

undefined8 FUN_10b1b3758(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10b2111c0(param_1,param_2,&uStack_38);
  func_0x000107c278a8(&uStack_38);
  return param_1;
}



/* Entry: 10b1b37ac; end: 10b1b390f;  */

void FUN_10b1b37ac(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_10b1b3acc();
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  if (*(char *)(param_3 + 3) == '\x01') {
    uVar2 = param_3[1];
    uVar1 = *param_3;
    *(undefined8 *)(param_1 + 0x30) = param_3[2];
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  if (*(char *)(param_3 + 7) == '\x01') {
    uVar2 = param_3[5];
    uVar1 = param_3[4];
    *(undefined8 *)(param_1 + 0x50) = param_3[6];
    *(undefined8 *)(param_1 + 0x48) = uVar2;
    *(undefined8 *)(param_1 + 0x40) = uVar1;
    param_3[5] = 0;
    param_3[6] = 0;
    param_3[4] = 0;
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  if (*(char *)(param_3 + 0xb) == '\x01') {
    uVar2 = param_3[9];
    uVar1 = param_3[8];
    *(undefined8 *)(param_1 + 0x70) = param_3[10];
    *(undefined8 *)(param_1 + 0x68) = uVar2;
    *(undefined8 *)(param_1 + 0x60) = uVar1;
    param_3[9] = 0;
    param_3[10] = 0;
    param_3[8] = 0;
    *(undefined1 *)(param_1 + 0x78) = 1;
  }
  uVar2 = param_3[0xd];
  uVar1 = param_3[0xc];
  *(undefined8 *)(param_1 + 0x90) = param_3[0xe];
  *(undefined8 *)(param_1 + 0x88) = uVar2;
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  return;
}



/* Entry: 10b1b3910; end: 10b1b392b;  */

void FUN_10b1b3910(void)

{
  return;
}



/* Entry: 10b1b392c; end: 10b1b39cf;  */

undefined8 * FUN_10b1b392c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc3568;
  func_0x00010b1257d4(param_1 + 1);
  return param_1;
}



/* Entry: 10b1b39d0; end: 10b1b39e7;  */

void FUN_10b1b39d0(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1b39e8; end: 10b1b3a87;  */

void FUN_10b1b39e8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x30);
  }
  *puVar1 = &PTR_FUN_110ccb198;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = param_1;
  *(undefined4 *)(puVar1 + 5) = 0;
  puVar1[4] = 0;
  return;
}



/* Entry: 10b1b3a88; end: 10b1b3aa3;  */

void FUN_10b1b3a88(long param_1)

{
  FUN_10b12402c();
  *(undefined1 *)(param_1 + 0x228) = 1;
  return;
}



/* Entry: 10b1b3aa4; end: 10b1b3acb;  */

void FUN_10b1b3aa4(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x278);
  func_0x00010b121b30(param_1 + 0x1d8);
  func_0x00010b12186c(param_1 + 0x1c8);
  FUN_10b121bd4(param_1 + 0x180);
  func_0x00010b135e7c();
  func_0x00010b135e84();
  func_0x00010b135f3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10b1b3acc; end: 10b1b3b3f;  */

undefined1 * FUN_10b1b3acc(undefined1 *param_1,long param_2)

{
  uint uVar1;
  undefined1 *puStack_38;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  FUN_10b1b3b40();
  uVar1 = *(uint *)(param_2 + 0x18);
  if (uVar1 != 0xffffffff) {
    puStack_38 = param_1;
    (*(code *)(&PTR_DAT_110cc3350)[uVar1])(&puStack_38,param_2);
    *(uint *)(param_1 + 0x18) = uVar1;
  }
  return param_1;
}



/* Entry: 10b1b3b40; end: 10b1b3b93;  */

void FUN_10b1b3b40(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110cc3340)[*(uint *)(param_1 + 0x18)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return;
}



/* Entry: 10b1b3b94; end: 10b1b3bdf;  */

long FUN_10b1b3b94(undefined8 param_1,long param_2)

{
  if (*(long *)(param_2 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_2;
}



/* Entry: 10b1b3be0; end: 10b1b3c0b;  */

long FUN_10b1b3be0(long param_1)

{
  func_0x0001052bb09c(param_1 + 0x20);
  FUN_10b1b3b40(param_1);
  return param_1;
}



/* Entry: 10b1b3c0c; end: 10b1b3d47;  */

undefined1 * FUN_10b1b3c0c(void)

{
  return &stack0x00001260;
}



/* Entry: 10b1b3d48; end: 10b1b3e37;  */

void FUN_10b1b3d48(undefined8 *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((int)*(uint *)(param_2 + 0x20) < 1) {
    if ((*(byte *)(param_2 + 0x10) >> 1 & 1) == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      FUN_10b1b3664(&uStack_50,*(undefined8 *)(param_2 + 0x58));
      param_1[1] = uStack_48;
      *param_1 = uStack_50;
      uStack_50 = 0;
      uStack_48 = 0;
      FUN_10b12b2e8(&uStack_50);
    }
  }
  else {
    uVar2 = *(ulong *)(param_2 + 0x18);
    puVar3 = (ulong *)(param_2 + 0x18);
    if ((uVar2 & 1) != 0) {
      puVar3 = (ulong *)(uVar2 + 7);
    }
    uVar2 = *puVar3;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    lVar1 = (ulong)*(uint *)(param_2 + 0x20) * 8;
    while( true ) {
      lVar1 = lVar1 + -8;
      puVar3 = puVar3 + 1;
      if (lVar1 == 0) break;
      func_0x000107c281e8(&uStack_50,*(ulong *)(*puVar3 + 0x48) & 0xfffffffffffffffc);
    }
    FUN_10b1b3e38(&uStack_60,uVar2,&uStack_50);
    param_1[1] = uStack_58;
    *param_1 = uStack_60;
    uStack_60 = 0;
    uStack_58 = 0;
    FUN_10b12b2e8(&uStack_60);
    func_0x000107c278a8(&uStack_50);
  }
  return;
}



/* Entry: 10b1b3e38; end: 10b1b3e5f;  */

void FUN_10b1b3e38(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_10b1b4ef0(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 10b1b3e60; end: 10b1b3f8b;  */

uint FUN_10b1b3e60(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_2f8 [80];
  undefined1 auStack_2a8 [112];
  long lStack_238;
  long lStack_230;
  
  if ((((param_3 == 0) || (uVar1 = param_3, FUN_10b190fc4(), (uVar1 & 1) != 0)) ||
      (*(long *)(param_3 + 0x90) < 1)) ||
     (lVar4 = *(long *)(param_3 + 0x90) * 1000, __ZNSt3__16chrono12system_clock3nowEv(),
     lVar4 - uVar1 != 0 && (long)uVar1 <= lVar4)) {
    return 0;
  }
  if (*(char *)(param_2 + 0x88) == '\x01') {
    if (*(int *)(param_2 + 100) != 2) {
      uVar3 = *(undefined8 *)(param_1 + 0x40);
      FUN_10b202630(auStack_2a8,param_2);
      func_0x00010b1f68d0(uVar3,auStack_2a8,*(undefined4 *)(param_2 + 0x60));
      uVar2 = (uint)uVar3;
      func_0x00010b121e00(auStack_2a8);
      goto LAB_10b1b3f68;
    }
    if (*(long *)(param_2 + 0x78) != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x40);
      FUN_10b202630(auStack_2f8,param_2);
      FUN_10b1f69e0(auStack_2a8,uVar3,auStack_2f8,0,0);
      func_0x00010b121e00(auStack_2f8);
      uVar2 = (uint)(lStack_230 != 0 && lStack_230 == lStack_238);
      func_0x00010b121af0(auStack_2a8);
      goto LAB_10b1b3f68;
    }
  }
  uVar2 = 0;
LAB_10b1b3f68:
  return uVar2 ^ 1;
}



/* Entry: 10b1b3f8c; end: 10b1b46ef;  */

void FUN_10b1b3f8c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 *param_6)

{
  undefined **ppuVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined1 in_ZR;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined4 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined *extraout_x8;
  undefined8 *puVar14;
  undefined *extraout_x8_00;
  ulong uVar15;
  long lVar16;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  ulong uVar17;
  undefined **ppuVar18;
  undefined8 uVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  undefined8 *puVar23;
  undefined *puVar24;
  ulong uStack_158;
  long lStack_150;
  undefined1 uStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  
  ppuVar6 = (undefined **)0x1180;
  __Znwm();
  *ppuVar6 = FUN_10b1b5db8;
  ppuVar6[1] = FUN_10b1b630c;
  *(undefined4 *)(ppuVar6 + 0x22f) = param_5;
  puVar11 = (undefined *)*param_2;
  ppuVar6[0x225] = (undefined *)param_2[1];
  ppuVar6[0x224] = puVar11;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_10b121c1c(ppuVar6 + 0x1a7,param_3);
  FUN_10b1214e8(ppuVar6 + 0x20a,param_4);
  puVar24 = (undefined *)param_6[1];
  puVar12 = (undefined *)*param_6;
  ppuVar6[0x222] = puVar24;
  ppuVar6[0x221] = puVar12;
  ppuVar6[0x223] = (undefined *)param_6[2];
  param_6[1] = 0;
  param_6[2] = 0;
  *param_6 = 0;
  FUN_10b1b4b00(ppuVar6 + 2);
  ppuVar18 = ppuVar6 + 7;
  *(undefined1 *)ppuVar18 = 0;
  *(undefined1 *)(ppuVar6 + 0xd7) = 0;
  FUN_10b1b4dd0(param_1,ppuVar6[5],ppuVar6[6]);
  puVar11 = *(undefined **)(ppuVar6[0x224] + 0x10);
  ppuVar6[0x22e] = puVar11;
  puVar11 = puVar11 + 0x100;
  FUN_10b127a84();
  if (((ulong)puVar11 & 1) == 0) {
    *(undefined1 *)((long)ppuVar6 + 0x117c) = 0;
    puVar11 = ppuVar6[0x22e];
    uVar19 = *(undefined8 *)(puVar11 + 0x100);
    __ZNSt3__115recursive_mutex4lockEv(uVar19);
    lVar13 = *(long *)(puVar11 + 0x100);
    if ((*(byte *)(lVar13 + 0x78) & 1) != 0) {
      __ZNSt3__115recursive_mutex6unlockEv(uVar19);
      func_0x00010b1b6440(*ppuVar6);
      return;
    }
    puVar14 = *(undefined8 **)(lVar13 + 0x88);
    if (puVar14 < *(undefined8 **)(lVar13 + 0x90)) {
      puVar23 = puVar14 + 1;
      *puVar14 = ppuVar6;
    }
    else {
      lVar16 = *(long *)(lVar13 + 0x80);
      lVar22 = (long)puVar14 - lVar16;
      uVar2 = (lVar22 >> 3) + 1;
      if (uVar2 >> 0x3d != 0) {
        func_0x00010552fc6c();
LAB_10b1b4584:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10b1b4588);
        (*pcVar5)();
      }
      uVar15 = (long)*(undefined8 **)(lVar13 + 0x90) - lVar16;
      uVar17 = (long)uVar15 >> 2;
      if (uVar17 <= uVar2) {
        uVar17 = uVar2;
      }
      if (0x7ffffffffffffff7 < uVar15) {
        uVar17 = 0x1fffffffffffffff;
      }
      if (uVar17 == 0) {
        lVar9 = 0;
      }
      else {
        if (uVar17 >> 0x3d != 0) {
          func_0x000104bd35f4();
          goto LAB_10b1b4584;
        }
        lVar9 = uVar17 << 3;
        __Znwm();
      }
      puVar14 = (undefined8 *)(lVar9 + lVar22);
      puVar23 = puVar14 + 1;
      *puVar14 = ppuVar6;
      _memcpy(puVar14 + -(lVar22 >> 3),lVar16,lVar22);
      *(undefined8 **)(lVar13 + 0x80) = puVar14 + -(lVar22 >> 3);
      *(undefined8 **)(lVar13 + 0x88) = puVar23;
      *(ulong *)(lVar13 + 0x90) = lVar9 + uVar17 * 8;
      if (lVar16 != 0) {
        __ZdlPv(lVar16);
      }
    }
    *(undefined8 **)(lVar13 + 0x88) = puVar23;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(uVar19);
    return;
  }
  FUN_10b1278b8(ppuVar6[0x22e] + 0x100);
  FUN_10b20ee68(ppuVar6 + 0x226,*(undefined8 *)(ppuVar6[0x224] + 0x10));
  if (ppuVar6[0x226] == (undefined *)0x0) {
    puVar14 = (undefined8 *)ppuVar6[0x221];
    if (puVar14 == (undefined8 *)ppuVar6[0x222]) {
      puVar12 = (undefined *)0x0;
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar11 = (undefined *)*puVar14;
      puVar12 = (undefined *)puVar14[1];
      if (puVar12 != (undefined *)0x0) {
        do {
          func_0x00010b1b6390();
        } while (extraout_w10_01 != 0);
      }
    }
    ppuStack_a0 = (undefined **)0x0;
    ppuStack_98 = (undefined **)0x0;
    func_0x00010b1b6630();
    ppuVar6[7] = puVar11;
    ppuVar6[8] = puVar12;
    func_0x00010b1b640c();
    func_0x0001052ac684(&ppuStack_a0);
    goto LAB_10b1b44a8;
  }
  func_0x00010b1ff218(ppuVar6 + 0x22a,*(undefined8 *)(ppuVar6[0x224] + 0x30),
                      *(undefined4 *)(ppuVar6 + 0x1aa));
  puVar11 = (undefined *)0x3e0;
  __Znwm();
  plVar20 = (long *)(puVar11 + 8);
  *plVar20 = 0;
  func_0x00010b1b6644();
  func_0x00010b1b65c0();
  ppuVar1 = ppuVar6 + 0x1f6;
  FUN_10b121300(ppuVar1,ppuVar6 + 0x20a);
  func_0x00010b1b64f0();
  *(undefined **)(puVar11 + 0x38) = puVar24;
  *(undefined **)(puVar11 + 0x30) = puVar12;
  *(undefined8 *)(puVar11 + 0x20) = 0;
  ppuVar6[0x221] = (undefined *)0x0;
  *(undefined8 *)(puVar11 + 0x28) = 0;
  *(undefined ***)(puVar11 + 0x18) = &PTR_DAT_110cc3488;
  if (ppuVar6[0x22b] != (undefined *)0x0) {
    do {
      func_0x00010b1b6390();
    } while (extraout_w10 != 0);
  }
  FUN_10b1b4b00(puVar11 + 0x40);
  FUN_10b121c1c(puVar11 + 0x68,ppuVar6 + 0xd8);
  ppuVar8 = (undefined **)(puVar11 + 0x18);
  FUN_10b1214e8(puVar11 + 0x2e0,ppuVar1);
  puVar12 = ppuVar6[0x225];
  puVar24 = ppuVar6[0x224];
  *(undefined **)(puVar11 + 0x388) = ppuVar6[0x225];
  *(undefined **)(puVar11 + 0x380) = puVar24;
  if (puVar12 != (undefined *)0x0) {
    do {
      func_0x00010b1b6390();
    } while (extraout_w10_00 != 0);
  }
  uVar10 = *(undefined4 *)(ppuVar6 + 0x22f);
  puVar11[0x390] = 0;
  puVar11[0x3b8] = 0;
  *(undefined4 *)(puVar11 + 0x3c0) = uVar10;
  puVar12 = ppuVar6[0x21e];
  *(undefined **)(puVar11 + 0x3d0) = ppuVar6[0x21f];
  *(undefined **)(puVar11 + 0x3c8) = puVar12;
  *(undefined **)(puVar11 + 0x3d8) = ppuVar6[0x220];
  ppuVar6[0x21f] = (undefined *)0x0;
  ppuVar6[0x220] = (undefined *)0x0;
  ppuVar6[0x21e] = (undefined *)0x0;
  FUN_10b125534(ppuVar6 + 0x21e);
  FUN_10b24f5cc(ppuVar1);
  func_0x00010b1b651c();
  ppuVar6[0x228] = (undefined *)ppuVar8;
  ppuVar6[0x229] = puVar11;
  lVar13 = *(long *)(puVar11 + 0x28);
  if ((lVar13 == 0) || (in_ZR = *(long *)(lVar13 + 8) == -1, (bool)in_ZR)) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar4) {
        *plVar20 = *plVar20 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar21 = (long *)(puVar11 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar4) {
        *plVar21 = *plVar21 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uStack_158 = *(ulong *)(puVar11 + 0x20);
    *(undefined ***)(puVar11 + 0x20) = ppuVar8;
    *(undefined **)(puVar11 + 0x28) = puVar11;
    lStack_150 = lVar13;
    ppuStack_a0 = ppuVar8;
    ppuStack_98 = (undefined **)puVar11;
    FUN_10b1b5400(&uStack_158);
    FUN_10b1b5020(&ppuStack_a0);
  }
  func_0x00010b1298c4(ppuVar6 + 0x22a);
  ppuVar7 = ppuVar1;
  FUN_10b1b4dd0(ppuVar1,*(undefined8 *)(puVar11 + 0x58),*(undefined8 *)(puVar11 + 0x60));
  plVar21 = (long *)ppuVar6[0x226];
  ppuStack_a0 = &PTR_FUN_110ce9f20;
  ppuStack_98 = (undefined **)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if ((*(uint *)(ppuVar6 + 0x20c) >> 1 & 1) == 0) {
    if ((*(uint *)(ppuVar6 + 0x20c) >> 2 & 1) != 0) {
      func_0x00010b1b6544(&ppuStack_a0);
      func_0x00010b1b648c();
      if (!(bool)in_ZR) {
        FUN_10b47c348(ppuVar7);
        *(undefined4 *)((long)ppuVar7 + 0x2c) = 2;
        func_0x00010b1b6658();
        ppuVar7[4] = extraout_x8;
      }
      if (((ulong)ppuVar7[1] & 1) != 0) {
        func_0x00010b1b656c();
      }
      func_0x00010b1b6534(ppuVar7 + 4);
      uVar10 = 1;
      goto LAB_10b1b433c;
    }
  }
  else {
    func_0x00010b1b6544(&ppuStack_a0);
    func_0x00010b1b6468();
    if (!(bool)in_ZR) {
      FUN_10b47c348(ppuVar7);
      *(undefined4 *)((long)ppuVar7 + 0x2c) = 1;
      func_0x00010b1b6658();
      ppuVar7[4] = extraout_x8_00;
    }
    if (((ulong)ppuVar7[1] & 1) != 0) {
      func_0x00010b1b656c();
    }
    func_0x00010b1b6534(ppuVar7 + 4);
    uVar10 = 0;
LAB_10b1b433c:
    uStack_78 = CONCAT44(uStack_78._4_4_,uVar10);
  }
  uStack_158 = uStack_158 & 0xffffffffffffff00;
  uStack_a8 = 0;
  ppuVar6[0x22c] = (undefined *)ppuVar8;
  ppuVar6[0x22d] = puVar11;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar4) {
      *plVar20 = *plVar20 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  (**(code **)(*plVar21 + 0x10))(plVar21,&ppuStack_a0,&uStack_158,ppuVar6 + 0x22c);
  FUN_10b1b4ecc(ppuVar6 + 0x22c);
  func_0x000107c27ba8(&uStack_158);
  FUN_10b47bc4c(&ppuStack_a0);
  ppuVar8 = ppuVar1;
  FUN_10b1a835c();
  if (((ulong)ppuVar8 & 1) == 0) {
    *(undefined1 *)((long)ppuVar6 + 0x117c) = 1;
    ppuStack_a0 = ppuVar6;
    ppuStack_98 = ppuVar1;
    FUN_10b1a8404(&uStack_158,ppuVar1,&ppuStack_a0);
    lVar13 = lStack_150;
    if (lStack_150 == 0) {
      return;
    }
    plVar20 = (long *)(lStack_150 + 8);
    do {
      lVar16 = *plVar20;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar4) {
        *plVar20 = lVar16 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar16 != 0) {
      return;
    }
    func_0x00010b1b6638();
    func_0x00010b1b6440();
    __ZNSt3__119__shared_weak_count14__release_weakEv(lVar13);
    return;
  }
  FUN_10b1a0a70(ppuVar6 + 0xd8,ppuVar1);
  func_0x00010b1b6630();
  FUN_10b1962f4(ppuVar18,ppuVar6 + 0xd8);
  func_0x00010b1b64c4();
  func_0x00010b1960f8(ppuVar1);
  func_0x00010b1b63c4();
LAB_10b1b44a8:
  FUN_10b1b51a8(ppuVar6 + 0x226);
  *ppuVar6 = (undefined *)0x0;
  *(undefined1 *)((long)ppuVar6 + 0x117c) = 2;
  if (*(char *)(ppuVar6 + 0xd6) == '\x01') {
    FUN_10b1b5044(ppuVar6 + 2,ppuVar18);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(auStack_70,ppuVar18);
    func_0x00010b1b65fc();
    __ZNSt13exception_ptrD1Ev(auStack_70);
  }
  func_0x00010b1b654c();
  func_0x00010b1b6618();
  FUN_10b24f5cc(ppuVar6 + 0x20a);
  func_0x00010b1b653c();
  func_0x00010b1257d4(ppuVar6 + 0x224);
  func_0x00010b1b65f4();
  return;
}



/* Entry: 10b1b46f0; end: 10b1b4a27;  */

void FUN_10b1b46f0(long param_1,long *param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                  ulong param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined1 auStack_7b8 [384];
  undefined1 auStack_638 [80];
  undefined1 auStack_5e8 [384];
  undefined1 auStack_468 [64];
  undefined1 uStack_428;
  undefined1 uStack_3c8;
  undefined1 auStack_1f0 [24];
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [64];
  undefined1 auStack_170 [160];
  byte bStack_d0;
  undefined1 auStack_c8 [64];
  byte bStack_88;
  undefined1 uStack_80;
  undefined1 uStack_7c;
  undefined1 uStack_78;
  undefined1 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_70 = 0;
  uStack_68 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_1f0);
  puVar1 = (undefined8 *)(param_3 + 0x60);
  FUN_10b193d78();
  uStack_1d0 = puVar1[1];
  uStack_1d8 = *puVar1;
  uStack_1c0 = puVar1[3];
  uStack_1c8 = puVar1[2];
  uStack_1b8 = puVar1[4];
  lVar2 = param_3 + 0x18;
  func_0x00010b193d90(lVar2);
  func_0x00010b125750(auStack_1b0,lVar2);
  FUN_10b121494(auStack_170,param_4);
  FUN_10b12110c(auStack_c8,param_5);
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  auStack_468[0] = 0;
  uStack_3c8 = 0;
  FUN_10b121694(param_4,auStack_468);
  FUN_10b12130c(auStack_468);
  auStack_468[0] = 0;
  uStack_428 = 0;
  FUN_10b121704(param_5,auStack_468);
  puVar3 = auStack_468;
  FUN_10b121398();
  if (((bStack_d0 & 1) == 0) && (func_0x00010b1b6608(), puVar3 != (undefined1 *)0x0)) {
    func_0x00010b1b6608();
    FUN_10b11fdb8(auStack_170,puVar3);
  }
  if (((bStack_88 & 1) == 0) && (uVar4 = param_3, FUN_10b1c4ae8(), uVar4 != 0)) {
    uVar4 = param_3;
    FUN_10b1c4ae8(param_3);
    func_0x00010b11fdec(auStack_c8,uVar4);
  }
  uVar6 = *(undefined8 *)(*param_2 + 0x40);
  FUN_10b121208(auStack_5e8,auStack_1f0);
  FUN_10b1f6b3c(auStack_468,uVar6,param_3,auStack_5e8,param_6);
  func_0x00010b1b645c();
  func_0x00010b1b6454();
  FUN_10b1213b8(auStack_5e8);
  uVar4 = param_3;
  FUN_10b1c4a24();
  uVar5 = 0;
  if (((param_6 & 1) == 0) && ((uVar4 & 1) == 0)) {
    uVar6 = *(undefined8 *)(*param_2 + 0x40);
    FUN_10b202630(auStack_638,auStack_1f0);
    FUN_10b1f69e0(auStack_468,uVar6,auStack_638,1,1);
    func_0x00010b1b645c();
    func_0x00010b1b6454();
    func_0x00010b121e00(auStack_638);
    uVar4 = param_3;
    FUN_10b1c4a24();
    if ((int)uVar4 == 0) {
      FUN_10b123e5c(param_4,auStack_170);
      func_0x00010b123e84(param_5,auStack_c8);
      uVar6 = *(undefined8 *)(*param_2 + 0x40);
      func_0x00010b1213e8(auStack_7b8,auStack_1f0);
      FUN_10b1f6b3c(auStack_468,uVar6,param_3,auStack_7b8,1);
      func_0x00010b1b645c();
      func_0x00010b1b6454();
      FUN_10b1213b8(auStack_7b8);
      uVar5 = 0;
    }
    else {
      if (*(char *)(param_3 + 0x1c0) == '\x01') {
        FUN_10b121694(param_4,auStack_170);
        FUN_10b121704(param_5,auStack_c8);
      }
      else {
        func_0x00010b1b6608();
        if (uVar4 != 0) {
          FUN_10b1b3d48(auStack_468);
          FUN_10b11ffec(&uStack_70,auStack_468);
          func_0x0001052ac684(auStack_468);
        }
      }
      uVar5 = 1;
    }
  }
  FUN_10b121c1c(param_1,param_3);
  *(undefined1 *)(param_1 + 0x278) = uVar5;
  *(undefined8 *)(param_1 + 0x288) = uStack_68;
  *(undefined8 *)(param_1 + 0x280) = uStack_70;
  uStack_70 = 0;
  uStack_68 = 0;
  FUN_10b1213b8(auStack_1f0);
  func_0x0001052ac684(&uStack_70);
  return;
}



/* Entry: 10b1b4a28; end: 10b1b4aff;  */

void FUN_10b1b4a28(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  byte bVar1;
  undefined1 auStack_130 [64];
  byte bStack_f0;
  undefined1 auStack_e8 [160];
  byte bStack_48;
  
  FUN_10b121eac(auStack_e8,param_3 + 0x290);
  func_0x00010b121ec4(auStack_130,param_3 + 0x330);
  FUN_10b1b46f0(param_1,param_2,param_3 + 0x18,auStack_e8,auStack_130,param_4);
  bVar1 = *(byte *)(param_1 + 0x278);
  if ((bVar1 == 1) && ((bStack_48 & 1) != 0)) {
    FUN_10b12151c(param_3 + 0x290,auStack_e8);
    bVar1 = *(byte *)(param_1 + 0x278);
  }
  if (((bVar1 & 1) != 0) && ((bStack_f0 & 1) != 0)) {
    FUN_10b1211a8(param_3 + 0x330,auStack_130);
  }
  FUN_10b121398(auStack_130);
  FUN_10b12130c(auStack_e8);
  return;
}



/* Entry: 10b1b4b00; end: 10b1b4bbb;  */

void FUN_10b1b4b00(void)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x19;
  long *plVar5;
  
  func_0x00010b1b6670();
  puVar4 = (undefined8 *)0x718;
  __Znwm();
  plVar5 = puVar4 + 1;
  *plVar5 = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110cc33e8;
  puVar1 = puVar4 + 3;
  _bzero(puVar1,0x680);
  puVar4[0xd3] = 0x3cb0b1bb;
  puVar4[0xd5] = 0;
  puVar4[0xd4] = 0;
  puVar4[0xd7] = 0;
  puVar4[0xd6] = 0;
  puVar4[0xd8] = 0;
  puVar4[0xd9] = 0x32aaaba7;
  puVar4[0xdb] = 0;
  puVar4[0xda] = 0;
  puVar4[0xdd] = 0;
  puVar4[0xdc] = 0;
  puVar4[0xdf] = 0;
  puVar4[0xde] = 0;
  puVar4[0xe1] = 0;
  puVar4[0xe0] = 0;
  puVar4[0xe2] = 0;
  unaff_x19[1] = puVar1;
  unaff_x19[2] = puVar4;
  unaff_x19[3] = puVar1;
  unaff_x19[4] = puVar4;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = *plVar5 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *unaff_x19 = &PTR_FUN_110cc3380;
  return;
}



/* Entry: 10b1b4bbc; end: 10b1b4bbf;  */

void FUN_10b1b4bbc(long param_1)

{
  long unaff_x19;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined1 auStack_28 [8];
  
  func_0x00010b1b6670();
  if (*(long *)(param_1 + 8) != 0) {
    ppuStack_38 = &PTR_DAT_1107e6938;
    ppuStack_30 = &PTR_DAT_1107e6938;
    func_0x000104bdfe3c(auStack_28,&ppuStack_30);
    FUN_10b1b4d18();
    __ZNSt13exception_ptrD1Ev(auStack_28);
    __ZNSt9exceptionD2Ev(&ppuStack_30);
    __ZNSt9exceptionD2Ev(&ppuStack_38);
  }
  func_0x00010b1960f8(unaff_x19 + 0x18);
  func_0x00010b1960f8((long *)(param_1 + 8));
  return;
}



/* Entry: 10b1b4bc0; end: 10b1b4bd3;  */

void FUN_10b1b4bc0(void)

{
  FUN_10b1b4c80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1b4bd4; end: 10b1b4bd7;  */

void FUN_10b1b4bd4(long param_1)

{
  long unaff_x19;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined1 auStack_28 [8];
  
  func_0x00010b1b6670();
  if (*(long *)(param_1 + 8) != 0) {
    ppuStack_38 = &PTR_DAT_1107e6938;
    ppuStack_30 = &PTR_DAT_1107e6938;
    func_0x000104bdfe3c(auStack_28,&ppuStack_30);
    FUN_10b1b4d18();
    __ZNSt13exception_ptrD1Ev(auStack_28);
    __ZNSt9exceptionD2Ev(&ppuStack_30);
    __ZNSt9exceptionD2Ev(&ppuStack_38);
  }
  func_0x00010b1960f8(unaff_x19 + 0x18);
  func_0x00010b1960f8((long *)(param_1 + 8));
  return;
}



/* Entry: 10b1b4bd8; end: 10b1b4beb;  */

void FUN_10b1b4bd8(void)

{
  FUN_10b1b4c80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1b4bec; end: 10b1b4bef;  */

void FUN_10b1b4bec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc33e8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}


