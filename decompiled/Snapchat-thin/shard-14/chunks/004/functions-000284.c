/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b205890; end: 10b20595f;  */

void FUN_10b205890(undefined1 *param_1)

{
  undefined4 *puVar1;
  long extraout_x8;
  long lVar2;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  int aiStack_48 [2];
  undefined4 *puStack_40;
  undefined4 uStack_34;
  
  FUN_10b2029a0();
  FUN_10b1231f8();
  func_0x00010b206cec();
  func_0x0001093ed64c(aiStack_48,extraout_x8 + 0x10);
  if (aiStack_48[0] == 0) {
    *param_1 = 0;
    param_1[0x18] = 0;
  }
  else {
    uStack_58 = 0;
    uStack_50 = 0;
    puStack_60 = &uStack_58;
    puVar1 = puStack_40;
    for (lVar2 = (long)aiStack_48[0] << 2; lVar2 != 0; lVar2 = lVar2 + -4) {
      uStack_34 = *puVar1;
      func_0x00010b206ad4(&puStack_60,&uStack_58,&uStack_34);
      puVar1 = puVar1 + 1;
    }
    FUN_10b2068d0(param_1,&puStack_60);
    FUN_10b1e56ac(&puStack_60);
  }
  func_0x000107c282dc(aiStack_48);
  return;
}



/* Entry: 10b205960; end: 10b205a0b;  */

bool FUN_10b205960(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_60 [24];
  char cStack_48;
  
  puVar2 = (undefined8 *)*param_1;
  while (puVar2 != param_1 + 1) {
    FUN_10b205890(auStack_60,*(undefined4 *)((long)puVar2 + 0x1c));
    if (cStack_48 == '\x01') {
      puVar1 = &UNK_10e56886d;
      FUN_10b206928(&UNK_10e56886d,auStack_60,param_1);
      func_0x00010b206dcc();
      if (((ulong)puVar1 & 1) == 0) break;
    }
    else {
      func_0x00010b206dcc();
    }
    func_0x000107c27be0();
  }
  return puVar2 == param_1 + 1;
}



/* Entry: 10b205a0c; end: 10b205bbb;  */

void FUN_10b205a0c(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined1 auStack_58 [24];
  
  if (*(char *)(param_2 + 0x18) == '\x01') {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_58,"-");
    func_0x000107c27fc4(param_1,auStack_58);
    func_0x00010b206db0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010b205a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10e56885d)[param_4 & 0xffffffff] * 4 + 0x10b205a80))();
  return;
}



/* Entry: 10b205bbc; end: 10b205c37;  */

void FUN_10b205bbc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [24];
  
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_40 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  FUN_10b205a0c(auStack_38,&uStack_50);
  func_0x000107c27f54(param_1,&UNK_10f73997e,auStack_38);
  func_0x00010b206d28();
  func_0x00010b206d4c();
  return;
}



/* Entry: 10b205c38; end: 10b205c7f;  */

void FUN_10b205c38(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  
  if (param_2 == -0x80000000 || param_2 == 0x7fffffff) {
    puVar1 = &UNK_10f739991;
  }
  else if (param_2 == 1) {
    puVar1 = &UNK_10f739982;
  }
  else {
    puVar1 = &UNK_10f73998b;
  }
  func_0x00010002b82c(param_1,puVar1);
  func_0x000107c613d0(puVar1);
  func_0x000107c60c50();
  return;
}



/* Entry: 10b205c80; end: 10b205d77;  */

long * FUN_10b205c80(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  long *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x9;
  long lVar10;
  long extraout_x9_00;
  long extraout_x9_01;
  undefined1 auStack_170 [24];
  long alStack_158 [3];
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_118 [48];
  undefined8 uStack_e8;
  long lStack_a0;
  long lStack_98;
  undefined1 uStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 uStack_68;
  undefined8 uStack_28;
  
  plVar6 = &lStack_a0;
  plVar7 = &lStack_a0;
  func_0x00010b206d54(param_1);
  plVar5 = (long *)*param_3;
  uStack_28 = extraout_x9;
  if ((plVar5 != (long *)0x0) && (lVar10 = *extraout_x8, lVar10 != 0)) {
    lStack_98 = extraout_x8[1];
    if (lStack_98 != 0) {
      plVar1 = (long *)(lStack_98 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_90 = SUB81(param_2,0);
    uStack_88 = 0x10b206c90;
    ppuStack_80 = &PTR_DAT_110cc6618;
    if (lStack_98 != 0) {
      plVar1 = (long *)(lStack_98 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    param_2 = &uStack_88;
    lStack_a0 = lVar10;
    lStack_78 = lVar10;
    lStack_70 = lStack_98;
    uStack_68 = uStack_90;
    (**(code **)(*plVar5 + 0x10))();
    (*(code *)*ppuStack_80)(&ppuStack_80);
    func_0x00010b0f7ee8();
    plVar5 = plVar6;
  }
  func_0x00010b206d54(uStack_28);
  if (extraout_x9_00 == extraout_x8_00) {
    return plVar5;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_80)(&ppuStack_80);
  func_0x00010b0f7ee8(&lStack_a0);
  func_0x00010b206d04();
  uStack_e8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10b12983c(&uStack_140,param_4);
  func_0x00010b12aca4(auStack_118,0);
  func_0x00010b120648(alStack_158,&uStack_140,2);
  lVar10 = 0x38;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev((long)&uStack_140 + lVar10)
    ;
    lVar10 = lVar10 + -0x28;
  } while (lVar10 != -0x18);
  if (param_3 == (undefined8 *)0x0) {
    func_0x00010b1b87f4(alStack_158,&UNK_10f73999b,&UNK_10f7399b2);
    uStack_140 = (undefined8 *)((ulong)uStack_140._4_4_ << 0x20);
    func_0x00010b206ddc();
  }
  else {
    puVar9 = &UNK_10f73999b;
    FUN_10b1b878c(alStack_158,&UNK_10f73999b,&UNK_10f7399a3);
    puVar8 = param_3;
    func_0x000107c27e5c();
    uStack_130 = param_3[3];
    uStack_128 = 0;
    uStack_140 = puVar8;
    puStack_138 = puVar9;
    func_0x000107c2793c(&UNK_10f7399ac);
    func_0x000107c3173c(auStack_170);
    func_0x00010b1b87c0(alStack_158,&UNK_10f7399a6,auStack_170);
    func_0x00010b206d4c();
    uStack_140 = (undefined8 *)CONCAT44(uStack_140._4_4_,2);
    func_0x00010b206ddc();
  }
  FUN_10b114b00(param_2,plVar7,alStack_158,1);
  plVar5 = alStack_158;
  FUN_10b120998();
  func_0x00010b206d54(uStack_e8);
  if (extraout_x9_01 == extraout_x8_01) {
    return plVar5;
  }
  ___stack_chk_fail();
  plVar5 = alStack_158;
  FUN_10b120998();
  func_0x00010b206d04();
  uVar2 = plVar5[1];
  if (uVar2 < (ulong)plVar5[2]) {
    FUN_10b2069e8();
    plVar6 = (long *)(uVar2 + 0x28);
  }
  else {
    plVar6 = plVar5;
    FUN_10b206a20();
  }
  plVar5[1] = (long)plVar6;
  return plVar6 + -5;
}



/* Entry: 10b205d78; end: 10b205f33;  */

undefined1 * FUN_10b205d78(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x9;
  long lVar5;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [48];
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10b12983c(&uStack_a0,param_4);
  func_0x00010b12aca4(auStack_78,0);
  func_0x00010b120648(auStack_b8,&uStack_a0,2);
  lVar5 = 0x38;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev((long)&uStack_a0 + lVar5);
    lVar5 = lVar5 + -0x28;
  } while (lVar5 != -0x18);
  if (param_3 == 0) {
    func_0x00010b1b87f4(auStack_b8,&UNK_10f73999b,&UNK_10f7399b2);
    uStack_a0 = (ulong)uStack_a0._4_4_ << 0x20;
    func_0x00010b206ddc();
  }
  else {
    puVar4 = &UNK_10f73999b;
    FUN_10b1b878c(auStack_b8,&UNK_10f73999b,&UNK_10f7399a3);
    lVar5 = param_3;
    func_0x000107c27e5c();
    uStack_90 = *(undefined8 *)(param_3 + 0x18);
    uStack_88 = 0;
    uStack_a0 = lVar5;
    puStack_98 = puVar4;
    func_0x000107c2793c(&UNK_10f7399ac);
    func_0x000107c3173c(auStack_d0);
    func_0x00010b1b87c0(auStack_b8,&UNK_10f7399a6,auStack_d0);
    func_0x00010b206d4c();
    uStack_a0 = CONCAT44(uStack_a0._4_4_,2);
    func_0x00010b206ddc();
  }
  FUN_10b114b00(param_2,param_1,auStack_b8,1);
  puVar2 = auStack_b8;
  FUN_10b120998();
  func_0x00010b206d54(uStack_48);
  if (extraout_x9 == extraout_x8) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar2 = auStack_b8;
  FUN_10b120998();
  func_0x00010b206d04();
  uVar1 = *(ulong *)(puVar2 + 8);
  if (uVar1 < *(ulong *)(puVar2 + 0x10)) {
    FUN_10b2069e8();
    puVar3 = (undefined1 *)(uVar1 + 0x28);
  }
  else {
    puVar3 = puVar2;
    FUN_10b206a20();
  }
  *(undefined1 **)(puVar2 + 8) = puVar3;
  return puVar3 + -0x28;
}



/* Entry: 10b205f34; end: 10b205f6f;  */

long FUN_10b205f34(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_10b2069e8();
    lVar2 = uVar1 + 0x28;
  }
  else {
    lVar2 = param_1;
    FUN_10b206a20();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x28;
}



/* Entry: 10b205f70; end: 10b205fbf;  */

void FUN_10b205f70(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x00010bcd2ce8(auStack_38);
  func_0x000107c27fb4(param_1,auStack_38,0,0x20);
  func_0x00010b206d14();
  return;
}



/* Entry: 10b205fc0; end: 10b205fcb;  */

void FUN_10b205fc0(ulong *param_1)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x22;
  
  puVar2 = (ulong *)*param_1;
  if (puVar2 == (ulong *)0x0) {
    func_0x0001000640a4(0,FUN_10b205fcc);
    func_0x000100627e90();
    *param_1 = (ulong)puVar2;
  }
  else {
    Hint_Prefetch(puVar2,0,0,0);
    if (((ulong)puVar2 & 1) == 0) {
      if ((int)param_1[1] == 0) {
        func_0x0001000640a4(puVar2,FUN_10b205fcc);
      }
      else {
        func_0x000100064574();
        puVar3 = puVar2;
        func_0x000100627e90();
        *puVar2 = (ulong)puVar3;
        func_0x00010006472c();
      }
    }
    else {
      bVar1 = (int)param_1[1] == *(int *)((long)param_1 + 0xc);
      if (bVar1 || (int)param_1[1] < *(int *)((long)param_1 + 0xc)) {
        func_0x000100064758();
        if (!bVar1) {
          func_0x000107c39c9c();
          return;
        }
      }
      else {
        func_0x000100064574();
        func_0x000100064780();
      }
      func_0x000100064768();
      func_0x000100627e90();
      *(ulong **)(unaff_x22 + 8) = puVar2;
    }
  }
  return;
}



/* Entry: 10b205fcc; end: 10b20601f;  */

void FUN_10b205fcc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x28);
  }
  *puVar1 = &PTR_FUN_110ccb148;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10b206020; end: 10b206047;  */

void FUN_10b206020(int *param_1,int *param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  char cVar6;
  char cVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w9;
  int extraout_w9_00;
  int *piVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  bool bVar19;
  ulong uVar20;
  undefined8 unaff_x30;
  
  if (param_1 == param_2) {
    return;
  }
  piVar11 = (int *)(LZCOUNT((long)param_2 - (long)param_1 >> 2) << 1 ^ 0x7e);
  bVar19 = true;
  do {
    piVar10 = param_2 + -1;
    piVar15 = param_1;
LAB_10b20608c:
    param_1 = piVar15;
    uVar20 = (long)param_2 - (long)param_1 >> 2;
    cVar6 = SBORROW8(uVar20,5);
    cVar7 = (long)(uVar20 - 5) < 0;
    switch(uVar20) {
    case 0:
    case 1:
      goto LAB_10b20654c;
    case 2:
      iVar14 = *param_1;
      if (param_2[-1] < iVar14) {
        *param_1 = param_2[-1];
        param_2[-1] = iVar14;
      }
      goto LAB_10b20654c;
    case 3:
      piVar11 = param_1 + 1;
      func_0x00010b206d64();
      iVar14 = *piVar11;
      iVar13 = *param_1;
      iVar3 = *piVar10;
      if (iVar14 < iVar13) {
        if (iVar3 < iVar14) {
          *param_1 = iVar3;
        }
        else {
          *param_1 = iVar14;
          *piVar11 = iVar13;
          if (iVar13 <= *piVar10) {
            return;
          }
          *piVar11 = *piVar10;
        }
        *piVar10 = iVar13;
      }
      else if (iVar3 < iVar14) {
        *piVar11 = iVar3;
        *piVar10 = iVar14;
        iVar14 = *param_1;
        if (*piVar11 < iVar14) {
          *param_1 = *piVar11;
          *piVar11 = iVar14;
          return;
        }
      }
      return;
    case 4:
      func_0x00010b206d64(param_1,param_1 + 1,param_1 + 2,piVar10);
      func_0x00010b206e28();
      FUN_10b206560();
      func_0x00010b206e1c(*piVar11);
      if (((cVar7 != cVar6) && (func_0x00010b206d98(), cVar7 != cVar6)) &&
         (func_0x00010b206d80(), cVar7 != cVar6)) {
        *param_1 = extraout_w8_00;
        *param_2 = extraout_w9;
      }
      return;
    case 5:
      func_0x00010b206d64(param_1,param_1 + 1,param_1 + 2,param_1 + 3);
      func_0x00010b206e28();
      FUN_10b2065d0();
      iVar14 = *piVar10;
      iVar13 = *piVar11;
      cVar6 = SBORROW4(iVar14,iVar13);
      cVar7 = iVar14 - iVar13 < 0;
      if (iVar14 < iVar13) {
        *piVar11 = iVar14;
        *piVar10 = iVar13;
        func_0x00010b206e1c(*piVar11);
        if (((cVar7 != cVar6) && (func_0x00010b206d98(), cVar7 != cVar6)) &&
           (func_0x00010b206d80(), cVar7 != cVar6)) {
          *param_1 = extraout_w8_01;
          *param_2 = extraout_w9_00;
        }
      }
      return;
    }
    if ((long)uVar20 < 0x18) {
      if (bVar19 == false) {
        piVar11 = param_1;
        if (param_1 != param_2) {
          while( true ) {
            param_1 = param_1 + 1;
            piVar15 = piVar11 + 1;
            if (piVar15 == param_2) break;
            iVar14 = *piVar11;
            iVar13 = piVar11[1];
            piVar10 = param_1;
            piVar11 = piVar15;
            if (iVar13 < iVar14) {
              do {
                *piVar10 = iVar14;
                iVar14 = piVar10[-2];
                piVar10 = piVar10 + -1;
              } while (iVar13 < iVar14);
              *piVar10 = iVar13;
            }
          }
        }
        break;
      }
      if (param_1 == param_2) break;
      lVar16 = 0;
      piVar11 = param_1;
      goto LAB_10b20638c;
    }
    if (piVar11 == (int *)0x0) {
      if (param_1 == param_2) break;
      uVar18 = uVar20 - 2 >> 1;
      piVar11 = param_1 + uVar18;
      do {
        FUN_10b2067d4(param_1,uVar20,piVar11);
        uVar18 = uVar18 - 1;
        piVar11 = piVar11 + -1;
      } while (-1 < (long)uVar18);
      do {
        if ((long)uVar20 < 2) goto LAB_10b20654c;
        uVar18 = 0;
        iVar14 = *param_1;
        piVar11 = param_1;
        do {
          piVar15 = piVar11 + uVar18 + 1;
          uVar2 = uVar18 << 1 | 1;
          uVar1 = uVar18 * 2 + 2;
          if ((long)uVar1 < (long)uVar20) {
            iVar4 = piVar11[uVar18 + 2];
            iVar3 = piVar11[uVar18 + 1];
            iVar13 = iVar3;
            if (iVar3 <= iVar4) {
              iVar13 = iVar4;
            }
            piVar10 = piVar11 + uVar18 + 2;
            uVar18 = uVar1;
            if (iVar4 <= iVar3) {
              piVar10 = piVar15;
              uVar18 = uVar2;
            }
          }
          else {
            iVar13 = *piVar15;
            piVar10 = piVar15;
            uVar18 = uVar2;
          }
          *piVar11 = iVar13;
          piVar11 = piVar10;
        } while ((long)uVar18 <= (long)(uVar20 - 2 >> 1));
        param_2 = param_2 + -1;
        if (piVar10 == param_2) {
          *piVar10 = iVar14;
        }
        else {
          *piVar10 = *param_2;
          *param_2 = iVar14;
          lVar16 = (long)piVar10 + (4 - (long)param_1) >> 2;
          if (1 < lVar16) {
            uVar18 = lVar16 - 2U >> 1;
            iVar14 = param_1[uVar18];
            iVar13 = *piVar10;
            piVar11 = param_1 + uVar18;
            if (iVar14 < iVar13) {
              do {
                piVar15 = piVar11;
                *piVar10 = iVar14;
                if (uVar18 == 0) break;
                uVar18 = uVar18 - 1 >> 1;
                iVar14 = param_1[uVar18];
                piVar10 = piVar15;
                piVar11 = param_1 + uVar18;
              } while (iVar14 < iVar13);
              *piVar15 = iVar13;
            }
          }
        }
        uVar20 = uVar20 - 1;
      } while( true );
    }
    piVar15 = param_1 + (uVar20 >> 1);
    if (uVar20 < 0x81) {
      func_0x00010b206dc4(piVar15,param_1);
    }
    else {
      func_0x00010b206dc4(param_1,piVar15);
      FUN_10b206560(param_1 + 1,piVar15 + -1,param_2 + -2);
      FUN_10b206560(param_1 + 2,piVar15 + 1,param_2 + -3);
      FUN_10b206560(piVar15 + -1,piVar15,piVar15 + 1);
      iVar14 = *param_1;
      *param_1 = *piVar15;
      *piVar15 = iVar14;
    }
    piVar11 = (int *)((long)piVar11 + -1);
    iVar14 = *param_1;
    if (!bVar19) {
      iVar13 = param_1[-1];
      cVar6 = SBORROW4(iVar13,iVar14);
      cVar7 = iVar13 - iVar14 < 0;
      if (iVar14 <= iVar13) {
        func_0x00010b206e1c();
        piVar15 = param_1;
        if (cVar7 == cVar6) {
          do {
            piVar15 = piVar15 + 1;
            if (param_2 <= piVar15) break;
          } while (*piVar15 <= extraout_w8);
        }
        else {
          do {
            piVar15 = piVar15 + 1;
          } while (*piVar15 <= extraout_w8);
        }
        piVar8 = param_2;
        if (piVar15 < param_2) {
          do {
            piVar8 = piVar8 + -1;
          } while (extraout_w8 < *piVar8);
        }
        while (piVar15 < piVar8) {
          iVar14 = *piVar15;
          *piVar15 = *piVar8;
          *piVar8 = iVar14;
          do {
            piVar15 = piVar15 + 1;
          } while (*piVar15 <= extraout_w8);
          do {
            piVar8 = piVar8 + -1;
          } while (extraout_w8 < *piVar8);
        }
        piVar8 = piVar15 + -1;
        if (param_1 != piVar8) {
          *param_1 = *piVar8;
        }
        bVar19 = false;
        *piVar8 = extraout_w8;
        goto LAB_10b20608c;
      }
    }
    lVar16 = 0;
    do {
      iVar13 = *(int *)((long)param_1 + lVar16 + 4);
      lVar16 = lVar16 + 4;
    } while (iVar13 < iVar14);
    piVar8 = (int *)((long)param_1 + lVar16);
    piVar12 = param_2;
    piVar15 = piVar8;
    if (lVar16 == 4) {
      do {
        piVar9 = piVar12;
        if (piVar12 <= piVar8) break;
        piVar12 = piVar12 + -1;
        piVar9 = piVar12;
      } while (iVar14 <= *piVar12);
    }
    else {
      do {
        piVar12 = piVar12 + -1;
        piVar9 = piVar12;
      } while (iVar14 <= *piVar12);
    }
    while (piVar15 < piVar12) {
      *piVar15 = *piVar12;
      *piVar12 = iVar13;
      do {
        piVar15 = piVar15 + 1;
        iVar13 = *piVar15;
      } while (iVar13 < iVar14);
      do {
        piVar12 = piVar12 + -1;
      } while (iVar14 <= *piVar12);
    }
    piVar12 = piVar15 + -1;
    if (param_1 != piVar12) {
      *param_1 = *piVar12;
    }
    *piVar12 = iVar14;
    if (piVar8 < piVar9) goto LAB_10b206200;
    piVar8 = param_1;
    FUN_10b20668c(param_1,piVar12);
    piVar9 = piVar15;
    FUN_10b20668c(piVar15,param_2);
    if ((int)piVar9 == 0) goto code_r0x00010b2061fc;
    param_2 = piVar12;
  } while (((ulong)piVar8 & 1) == 0);
LAB_10b20654c:
  func_0x00010b206d64(unaff_x30);
  return;
LAB_10b20638c:
  if (piVar11 + 1 == param_2) goto LAB_10b20654c;
  iVar14 = *piVar11;
  iVar13 = piVar11[1];
  lVar5 = lVar16;
  if (iVar13 < iVar14) {
    do {
      lVar17 = lVar5;
      *(int *)((long)param_1 + lVar17 + 4) = iVar14;
      piVar15 = param_1;
      if (lVar17 == 0) goto LAB_10b2063d4;
      iVar14 = *(int *)((long)param_1 + lVar17 + -4);
      lVar5 = lVar17 + -4;
    } while (iVar13 < iVar14);
    piVar15 = (int *)((long)param_1 + lVar17);
LAB_10b2063d4:
    *piVar15 = iVar13;
  }
  lVar16 = lVar16 + 4;
  piVar11 = piVar11 + 1;
  goto LAB_10b20638c;
code_r0x00010b2061fc:
  if (((ulong)piVar8 & 1) == 0) {
LAB_10b206200:
    FUN_10b206048(param_1,piVar12,param_3,piVar11,bVar19);
    bVar19 = false;
  }
  goto LAB_10b20608c;
}



/* Entry: 10b206048; end: 10b20655f;  */

void FUN_10b206048(int *param_1,int *param_2,undefined8 param_3,int *param_4,uint param_5)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  char cVar6;
  char cVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w9;
  int extraout_w9_00;
  int *piVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 unaff_x30;
  
  do {
    piVar11 = param_2 + -1;
    piVar10 = param_1;
LAB_10b20608c:
    param_1 = piVar10;
    uVar18 = (long)param_2 - (long)param_1 >> 2;
    cVar6 = SBORROW8(uVar18,5);
    cVar7 = (long)(uVar18 - 5) < 0;
    switch(uVar18) {
    case 0:
    case 1:
      goto LAB_10b20654c;
    case 2:
      iVar14 = *param_1;
      if (param_2[-1] < iVar14) {
        *param_1 = param_2[-1];
        param_2[-1] = iVar14;
      }
      goto LAB_10b20654c;
    case 3:
      piVar10 = param_1 + 1;
      func_0x00010b206d64();
      iVar14 = *piVar10;
      iVar13 = *param_1;
      iVar3 = *piVar11;
      if (iVar14 < iVar13) {
        if (iVar3 < iVar14) {
          *param_1 = iVar3;
        }
        else {
          *param_1 = iVar14;
          *piVar10 = iVar13;
          if (iVar13 <= *piVar11) {
            return;
          }
          *piVar10 = *piVar11;
        }
        *piVar11 = iVar13;
      }
      else if (iVar3 < iVar14) {
        *piVar10 = iVar3;
        *piVar11 = iVar14;
        iVar14 = *param_1;
        if (*piVar10 < iVar14) {
          *param_1 = *piVar10;
          *piVar10 = iVar14;
          return;
        }
      }
      return;
    case 4:
      func_0x00010b206d64(param_1,param_1 + 1,param_1 + 2,piVar11);
      func_0x00010b206e28();
      FUN_10b206560();
      func_0x00010b206e1c(*param_4);
      if (((cVar7 != cVar6) && (func_0x00010b206d98(), cVar7 != cVar6)) &&
         (func_0x00010b206d80(), cVar7 != cVar6)) {
        *param_1 = extraout_w8_00;
        *param_2 = extraout_w9;
      }
      return;
    case 5:
      func_0x00010b206d64(param_1,param_1 + 1,param_1 + 2,param_1 + 3);
      func_0x00010b206e28();
      FUN_10b2065d0();
      iVar14 = *piVar11;
      iVar13 = *param_4;
      cVar6 = SBORROW4(iVar14,iVar13);
      cVar7 = iVar14 - iVar13 < 0;
      if (iVar14 < iVar13) {
        *param_4 = iVar14;
        *piVar11 = iVar13;
        func_0x00010b206e1c(*param_4);
        if (((cVar7 != cVar6) && (func_0x00010b206d98(), cVar7 != cVar6)) &&
           (func_0x00010b206d80(), cVar7 != cVar6)) {
          *param_1 = extraout_w8_01;
          *param_2 = extraout_w9_00;
        }
      }
      return;
    }
    if ((long)uVar18 < 0x18) {
      if ((param_5 & 1) == 0) {
        piVar10 = param_1;
        if (param_1 != param_2) {
          while( true ) {
            param_1 = param_1 + 1;
            piVar11 = piVar10 + 1;
            if (piVar11 == param_2) break;
            iVar14 = *piVar10;
            iVar13 = piVar10[1];
            piVar8 = param_1;
            piVar10 = piVar11;
            if (iVar13 < iVar14) {
              do {
                *piVar8 = iVar14;
                iVar14 = piVar8[-2];
                piVar8 = piVar8 + -1;
              } while (iVar13 < iVar14);
              *piVar8 = iVar13;
            }
          }
        }
        break;
      }
      if (param_1 == param_2) break;
      lVar15 = 0;
      piVar10 = param_1;
      goto LAB_10b20638c;
    }
    if (param_4 == (int *)0x0) {
      if (param_1 == param_2) break;
      uVar17 = uVar18 - 2 >> 1;
      piVar10 = param_1 + uVar17;
      do {
        FUN_10b2067d4(param_1,uVar18,piVar10);
        uVar17 = uVar17 - 1;
        piVar10 = piVar10 + -1;
      } while (-1 < (long)uVar17);
      do {
        if ((long)uVar18 < 2) goto LAB_10b20654c;
        uVar17 = 0;
        iVar14 = *param_1;
        piVar10 = param_1;
        do {
          piVar11 = piVar10 + uVar17 + 1;
          uVar2 = uVar17 << 1 | 1;
          uVar1 = uVar17 * 2 + 2;
          if ((long)uVar1 < (long)uVar18) {
            iVar4 = piVar10[uVar17 + 2];
            iVar3 = piVar10[uVar17 + 1];
            iVar13 = iVar3;
            if (iVar3 <= iVar4) {
              iVar13 = iVar4;
            }
            piVar8 = piVar10 + uVar17 + 2;
            uVar17 = uVar1;
            if (iVar4 <= iVar3) {
              piVar8 = piVar11;
              uVar17 = uVar2;
            }
          }
          else {
            iVar13 = *piVar11;
            piVar8 = piVar11;
            uVar17 = uVar2;
          }
          *piVar10 = iVar13;
          piVar10 = piVar8;
        } while ((long)uVar17 <= (long)(uVar18 - 2 >> 1));
        param_2 = param_2 + -1;
        if (piVar8 == param_2) {
          *piVar8 = iVar14;
        }
        else {
          *piVar8 = *param_2;
          *param_2 = iVar14;
          lVar15 = (long)piVar8 + (4 - (long)param_1) >> 2;
          if (1 < lVar15) {
            uVar17 = lVar15 - 2U >> 1;
            iVar14 = param_1[uVar17];
            iVar13 = *piVar8;
            piVar10 = param_1 + uVar17;
            if (iVar14 < iVar13) {
              do {
                piVar11 = piVar10;
                *piVar8 = iVar14;
                if (uVar17 == 0) break;
                uVar17 = uVar17 - 1 >> 1;
                iVar14 = param_1[uVar17];
                piVar8 = piVar11;
                piVar10 = param_1 + uVar17;
              } while (iVar14 < iVar13);
              *piVar11 = iVar13;
            }
          }
        }
        uVar18 = uVar18 - 1;
      } while( true );
    }
    piVar10 = param_1 + (uVar18 >> 1);
    if (uVar18 < 0x81) {
      func_0x00010b206dc4(piVar10,param_1);
    }
    else {
      func_0x00010b206dc4(param_1,piVar10);
      FUN_10b206560(param_1 + 1,piVar10 + -1,param_2 + -2);
      FUN_10b206560(param_1 + 2,piVar10 + 1,param_2 + -3);
      FUN_10b206560(piVar10 + -1,piVar10,piVar10 + 1);
      iVar14 = *param_1;
      *param_1 = *piVar10;
      *piVar10 = iVar14;
    }
    param_4 = (int *)((long)param_4 + -1);
    iVar14 = *param_1;
    if ((param_5 & 1) == 0) {
      iVar13 = param_1[-1];
      cVar6 = SBORROW4(iVar13,iVar14);
      cVar7 = iVar13 - iVar14 < 0;
      if (iVar14 <= iVar13) {
        func_0x00010b206e1c();
        piVar10 = param_1;
        if (cVar7 == cVar6) {
          do {
            piVar10 = piVar10 + 1;
            if (param_2 <= piVar10) break;
          } while (*piVar10 <= extraout_w8);
        }
        else {
          do {
            piVar10 = piVar10 + 1;
          } while (*piVar10 <= extraout_w8);
        }
        piVar8 = param_2;
        if (piVar10 < param_2) {
          do {
            piVar8 = piVar8 + -1;
          } while (extraout_w8 < *piVar8);
        }
        while (piVar10 < piVar8) {
          iVar14 = *piVar10;
          *piVar10 = *piVar8;
          *piVar8 = iVar14;
          do {
            piVar10 = piVar10 + 1;
          } while (*piVar10 <= extraout_w8);
          do {
            piVar8 = piVar8 + -1;
          } while (extraout_w8 < *piVar8);
        }
        piVar8 = piVar10 + -1;
        if (param_1 != piVar8) {
          *param_1 = *piVar8;
        }
        param_5 = 0;
        *piVar8 = extraout_w8;
        goto LAB_10b20608c;
      }
    }
    lVar15 = 0;
    do {
      iVar13 = *(int *)((long)param_1 + lVar15 + 4);
      lVar15 = lVar15 + 4;
    } while (iVar13 < iVar14);
    piVar8 = (int *)((long)param_1 + lVar15);
    piVar12 = param_2;
    piVar10 = piVar8;
    if (lVar15 == 4) {
      do {
        piVar9 = piVar12;
        if (piVar12 <= piVar8) break;
        piVar12 = piVar12 + -1;
        piVar9 = piVar12;
      } while (iVar14 <= *piVar12);
    }
    else {
      do {
        piVar12 = piVar12 + -1;
        piVar9 = piVar12;
      } while (iVar14 <= *piVar12);
    }
    while (piVar10 < piVar12) {
      *piVar10 = *piVar12;
      *piVar12 = iVar13;
      do {
        piVar10 = piVar10 + 1;
        iVar13 = *piVar10;
      } while (iVar13 < iVar14);
      do {
        piVar12 = piVar12 + -1;
      } while (iVar14 <= *piVar12);
    }
    piVar12 = piVar10 + -1;
    if (param_1 != piVar12) {
      *param_1 = *piVar12;
    }
    *piVar12 = iVar14;
    if (piVar8 < piVar9) goto LAB_10b206200;
    piVar8 = param_1;
    FUN_10b20668c(param_1,piVar12);
    piVar9 = piVar10;
    FUN_10b20668c(piVar10,param_2);
    if ((int)piVar9 == 0) goto code_r0x00010b2061fc;
    param_2 = piVar12;
  } while (((ulong)piVar8 & 1) == 0);
LAB_10b20654c:
  func_0x00010b206d64(unaff_x30);
  return;
LAB_10b20638c:
  if (piVar10 + 1 == param_2) goto LAB_10b20654c;
  iVar14 = *piVar10;
  iVar13 = piVar10[1];
  lVar5 = lVar15;
  if (iVar13 < iVar14) {
    do {
      lVar16 = lVar5;
      *(int *)((long)param_1 + lVar16 + 4) = iVar14;
      piVar11 = param_1;
      if (lVar16 == 0) goto LAB_10b2063d4;
      iVar14 = *(int *)((long)param_1 + lVar16 + -4);
      lVar5 = lVar16 + -4;
    } while (iVar13 < iVar14);
    piVar11 = (int *)((long)param_1 + lVar16);
LAB_10b2063d4:
    *piVar11 = iVar13;
  }
  lVar15 = lVar15 + 4;
  piVar10 = piVar10 + 1;
  goto LAB_10b20638c;
code_r0x00010b2061fc:
  if (((ulong)piVar8 & 1) == 0) {
LAB_10b206200:
    FUN_10b206048(param_1,piVar12,param_3,param_4,param_5 & 1);
    param_5 = 0;
  }
  goto LAB_10b20608c;
}



/* Entry: 10b206560; end: 10b2065cf;  */

void FUN_10b206560(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_2;
  iVar2 = *param_1;
  iVar3 = *param_3;
  if (iVar1 < iVar2) {
    if (iVar3 < iVar1) {
      *param_1 = iVar3;
    }
    else {
      *param_1 = iVar1;
      *param_2 = iVar2;
      if (iVar2 <= *param_3) {
        return;
      }
      *param_2 = *param_3;
    }
    *param_3 = iVar2;
  }
  else if (iVar3 < iVar1) {
    *param_2 = iVar3;
    *param_3 = iVar1;
    iVar1 = *param_1;
    if (*param_2 < iVar1) {
      *param_1 = *param_2;
      *param_2 = iVar1;
      return;
    }
  }
  return;
}



/* Entry: 10b2065d0; end: 10b20661b;  */

void FUN_10b2065d0(void)

{
  char in_NG;
  char in_OV;
  undefined4 extraout_w8;
  undefined4 extraout_w9;
  undefined4 *unaff_x19;
  undefined4 *unaff_x20;
  undefined4 *unaff_x22;
  
  func_0x00010b206e28();
  FUN_10b206560();
  func_0x00010b206e1c(*unaff_x22);
  if (((in_NG != in_OV) && (func_0x00010b206d98(), in_NG != in_OV)) &&
     (func_0x00010b206d80(), in_NG != in_OV)) {
    *unaff_x20 = extraout_w8;
    *unaff_x19 = extraout_w9;
  }
  return;
}



/* Entry: 10b20661c; end: 10b20668b;  */

void FUN_10b20661c(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  int *in_x4;
  undefined4 extraout_w8;
  undefined4 extraout_w9;
  undefined4 *unaff_x19;
  undefined4 *unaff_x20;
  int *unaff_x22;
  
  func_0x00010b206e28();
  FUN_10b2065d0();
  iVar1 = *in_x4;
  iVar2 = *unaff_x22;
  cVar3 = SBORROW4(iVar1,iVar2);
  cVar4 = iVar1 - iVar2 < 0;
  if (iVar1 < iVar2) {
    *unaff_x22 = iVar1;
    *in_x4 = iVar2;
    func_0x00010b206e1c(*unaff_x22);
    if (((cVar4 != cVar3) && (func_0x00010b206d98(), cVar4 != cVar3)) &&
       (func_0x00010b206d80(), cVar4 != cVar3)) {
      *unaff_x20 = extraout_w8;
      *unaff_x19 = extraout_w9;
    }
  }
  return;
}



/* Entry: 10b20668c; end: 10b2067d3;  */

bool FUN_10b20668c(int *param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  long lVar8;
  int *piVar9;
  
  switch((long)param_2 - (long)param_1 >> 2) {
  case 0:
  case 1:
    break;
  case 2:
    iVar3 = *param_1;
    if (param_2[-1] < iVar3) {
      *param_1 = param_2[-1];
      param_2[-1] = iVar3;
      return true;
    }
    return true;
  case 3:
    FUN_10b206560(param_1,param_1 + 1,param_2 + -1);
    break;
  case 4:
    FUN_10b2065d0(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
    break;
  case 5:
    FUN_10b20661c(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    break;
  default:
    func_0x00010b206dc4(param_1,param_1 + 1);
    iVar3 = 0;
    lVar4 = 0xc;
    piVar7 = param_1 + 3;
    piVar9 = param_1 + 2;
    while (piVar5 = piVar7, piVar5 != param_2) {
      iVar1 = *piVar5;
      iVar6 = *piVar9;
      lVar8 = lVar4;
      if (iVar1 < iVar6) {
        do {
          *(int *)((long)param_1 + lVar8) = iVar6;
          lVar2 = lVar8 + -4;
          piVar7 = param_1;
          if (lVar2 == 0) goto LAB_10b206784;
          iVar6 = *(int *)((long)param_1 + lVar8 + -8);
          lVar8 = lVar2;
        } while (iVar1 < iVar6);
        piVar7 = (int *)((long)param_1 + lVar2);
LAB_10b206784:
        *piVar7 = iVar1;
        iVar3 = iVar3 + 1;
        if (iVar3 == 8) {
          return piVar5 + 1 == param_2;
        }
      }
      lVar4 = lVar4 + 4;
      piVar9 = piVar5;
      piVar7 = piVar5 + 1;
    }
  }
  return true;
}



/* Entry: 10b2067d4; end: 10b206897;  */

void FUN_10b2067d4(long param_1,long param_2,int *param_3)

{
  ulong uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  int *piVar7;
  int *piVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  
  if (1 < param_2) {
    uVar6 = param_2 - 2U >> 1;
    if ((long)param_3 - param_1 >> 2 <= (long)uVar6) {
      lVar10 = (long)param_3 - param_1 >> 1;
      uVar1 = lVar10 + 1;
      piVar7 = (int *)(param_1 + uVar1 * 4);
      uVar9 = lVar10 + 2;
      if ((long)uVar9 < param_2) {
        iVar3 = *piVar7;
        iVar4 = piVar7[1];
        iVar11 = iVar3;
        if (iVar3 <= iVar4) {
          iVar11 = iVar4;
        }
        piVar8 = piVar7 + 1;
        if (iVar4 <= iVar3) {
          piVar8 = piVar7;
          uVar9 = uVar1;
        }
      }
      else {
        iVar11 = *piVar7;
        piVar8 = piVar7;
        uVar9 = uVar1;
      }
      iVar3 = *param_3;
      if (iVar3 <= iVar11) {
        do {
          piVar7 = piVar8;
          *param_3 = iVar11;
          if ((long)uVar6 < (long)uVar9) break;
          uVar1 = uVar9 << 1 | 1;
          piVar2 = (int *)(param_1 + uVar1 * 4);
          uVar9 = uVar9 * 2 + 2;
          if ((long)uVar9 < param_2) {
            iVar4 = *piVar2;
            iVar5 = piVar2[1];
            iVar11 = iVar4;
            if (iVar4 <= iVar5) {
              iVar11 = iVar5;
            }
            piVar8 = piVar2 + 1;
            if (iVar5 <= iVar4) {
              piVar8 = piVar2;
              uVar9 = uVar1;
            }
          }
          else {
            iVar11 = *piVar2;
            piVar8 = piVar2;
            uVar9 = uVar1;
          }
          param_3 = piVar7;
        } while (iVar3 <= iVar11);
        *piVar7 = iVar3;
      }
    }
  }
  return;
}



/* Entry: 10b206898; end: 10b2068cf;  */

undefined8 * FUN_10b206898(undefined8 *param_1,undefined4 *param_2)

{
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(*param_1,*param_2);
  if (param_1[1] != 0) {
    func_0x00010549023c(*param_1);
  }
  return param_1;
}



/* Entry: 10b2068d0; end: 10b2068eb;  */

void FUN_10b2068d0(long param_1)

{
  FUN_10b2068ec();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 10b2068ec; end: 10b206927;  */

void FUN_10b2068ec(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar1 = param_2 + 1;
  lVar2 = *plVar1;
  *param_1 = *param_2;
  plVar3 = param_1 + 1;
  *plVar3 = lVar2;
  lVar4 = param_2[2];
  param_1[2] = lVar4;
  if (lVar4 != 0) {
    *(long **)(lVar2 + 0x10) = plVar3;
    *param_2 = plVar1;
    *plVar1 = 0;
    param_2[2] = 0;
    return;
  }
  *param_1 = plVar3;
  return;
}



/* Entry: 10b206928; end: 10b20695b;  */

void FUN_10b206928(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  FUN_10b20695c(*param_2,param_2 + 1,*param_3,param_3 + 1,&uStack_11,&uStack_12,&uStack_13);
  return;
}



/* Entry: 10b20695c; end: 10b2069c7;  */

bool FUN_10b20695c(long param_1,long param_2,long param_3,long param_4)

{
  while( true ) {
    if (param_3 == param_4 || param_1 == param_2) {
      return param_3 == param_4;
    }
    if (*(int *)(param_3 + 0x1c) < *(int *)(param_1 + 0x1c)) break;
    if (*(int *)(param_3 + 0x1c) <= *(int *)(param_1 + 0x1c)) {
      func_0x000107c27be0();
    }
    func_0x000107c27be0();
  }
  return false;
}



/* Entry: 10b2069c8; end: 10b2069e7;  */

void FUN_10b2069c8(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_10b1e56ac();
  }
  return;
}



/* Entry: 10b2069e8; end: 10b206a1f;  */

void FUN_10b2069e8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_10b206ac8(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x28;
  return;
}



/* Entry: 10b206a20; end: 10b206ac7;  */

long FUN_10b206a20(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  FUN_10b13c794(param_1,(param_1[1] - *param_1) / 0x28 + 1);
  FUN_10b13c7e4(auStack_58,plVar1,(param_1[1] - *param_1) / 0x28,param_1 + 2);
  FUN_10b206ac8(lStack_48,param_2);
  lStack_48 = lStack_48 + 0x28;
  func_0x00010b1b88c4(param_1,auStack_58);
  lVar2 = param_1[1];
  func_0x00010b13c8f4(auStack_58);
  return lVar2;
}



/* Entry: 10b206ac8; end: 10b206adb;  */

undefined8 FUN_10b206ac8(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2;
  if (uVar1 >> 0x13 == 0) {
    func_0x00010b13635c();
  }
  func_0x000106e5c56c(param_1);
  if ((uVar1 & 0xffff) < 0x25) {
    func_0x00010b135980();
  }
  func_0x00010b135ff4();
  return param_1;
}



/* Entry: 10b206adc; end: 10b206c8f;  */

undefined1  [16]
FUN_10b206adc(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  plVar2 = param_1;
  func_0x00010b206b80(param_1,param_2,&uStack_48,auStack_50,param_3);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    lVar3 = 0x20;
    __Znwm();
    uStack_58 = 1;
    *(undefined4 *)(lVar3 + 0x1c) = *param_4;
    plStack_60 = param_1 + 1;
    FUN_10b1e5758(param_1,uStack_48,plVar2,lVar3);
    uStack_68 = 0;
    func_0x00010b1e57a4(&uStack_68);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 10b206c90; end: 10b206e3b;  */

void FUN_10b206c90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b206ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))
            (*(long **)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x20));
  return;
}



/* Entry: 10b206e3c; end: 10b206ee3;  */

void FUN_10b206e3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_2;
  uStack_38 = param_3;
  func_0x000107c27958(auStack_58,&uStack_40);
  puVar1 = auStack_58;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(puVar1,&UNK_10e56886e)
  ;
  FUN_10b205f70(auStack_70,param_4,param_5);
  func_0x000107c27fc4(puVar1,auStack_70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1,puVar1);
  FUN_10b207078();
  func_0x00010b207080();
  return;
}



/* Entry: 10b206ee4; end: 10b206f17;  */

void FUN_10b206ee4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined8 *puStack_40;
  ulong uStack_38;
  
  uStack_38 = param_2[1];
  puStack_40 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uStack_38 = (ulong)*(byte *)((long)param_2 + 0x17);
    puStack_40 = param_2;
  }
  func_0x000107c27958(auStack_58,&puStack_40);
  puVar1 = auStack_58;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(puVar1,&UNK_10e56886e)
  ;
  FUN_10b205f70(auStack_70,&UNK_10f7399b6,7);
  func_0x000107c27fc4(puVar1,auStack_70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1,puVar1);
  FUN_10b207078();
  func_0x00010b207080();
  return;
}



/* Entry: 10b206f18; end: 10b207077;  */

void FUN_10b206f18(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_2;
  __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4findEcm(param_2,0x2d,0);
  if (lVar1 == -1) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_48,param_2);
    param_1[1] = uStack_40;
    *param_1 = uStack_48;
    param_1[2] = uStack_38;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_48 = 0;
    *(undefined4 *)(param_1 + 3) = 5;
  }
  else {
    func_0x000107c27fb4(auStack_60,param_2,0,lVar1);
    puVar2 = auStack_60;
    __ZNSt3__14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi(puVar2,0,10);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_60);
    func_0x000107c27fb4(auStack_60,param_2,lVar1 + 1,0xffffffffffffffff);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_78,auStack_60);
    param_1[1] = uStack_70;
    *param_1 = uStack_78;
    param_1[2] = uStack_68;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_78 = 0;
    *(int *)(param_1 + 3) = (int)puVar2;
    func_0x00010b207080();
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  return;
}



/* Entry: 10b207078; end: 10b207087;  */

void FUN_10b207078(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)();
  return;
}



/* Entry: 10b207088; end: 10b207163;  */

void FUN_10b207088(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  int extraout_w10;
  undefined8 uVar4;
  undefined1 auStack_38 [16];
  long lStack_28;
  
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  func_0x000107c35108(auStack_38,puVar2,uVar1);
  lVar3 = *(long *)(lStack_28 + 0x48);
  uVar4 = *(undefined8 *)(lStack_28 + 0x40);
  param_1[1] = *(undefined8 *)(lStack_28 + 0x48);
  *param_1 = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x000107c3510c();
    } while (extraout_w10 != 0);
  }
  func_0x000107c2798c(auStack_38);
  return;
}



/* Entry: 10b207164; end: 10b207167;  */

undefined8 * FUN_10b207164(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc6640;
  func_0x0001052a1398(param_1 + 3);
  func_0x000107c2bdf4(param_1 + 1);
  return param_1;
}



/* Entry: 10b207168; end: 10b20717b;  */

void FUN_10b207168(void)

{
  FUN_10b207480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b20717c; end: 10b20717f;  */

void FUN_10b20717c(long param_1)

{
  long lVar1;
  long unaff_x19;
  long *plVar2;
  long *plVar3;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  long alStack_40 [2];
  
  func_0x0001003b6548();
  plVar2 = (long *)(param_1 + 8);
  if (*plVar2 != 0) {
    ppuStack_78 = &PTR_DAT_1107e6938;
    ppuStack_70 = &PTR_DAT_1107e6938;
    func_0x000104bdfe3c(auStack_68,&ppuStack_70);
    alStack_40[0] = 0;
    alStack_40[1] = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    func_0x0001003b6920(auStack_50,plVar2,&uStack_60);
    func_0x0001003b6980(alStack_40,auStack_50);
    func_0x0001003b6cd8();
    func_0x0001003b8278();
    lVar1 = alStack_40[0];
    func_0x000107c60d88(alStack_40[0] + 0x48);
    func_0x000107c60c1c(lVar1 + 0x88,auStack_68);
    plVar3 = *(long **)(lVar1 + 0x90);
    *(undefined8 *)(lVar1 + 0x90) = 0;
    func_0x000107c60d8c(lVar1 + 0x48);
    if (plVar3 == (long *)0x0) {
      func_0x000107c60d48(lVar1 + 0x18);
    }
    else {
      (**(code **)(*plVar3 + 0x10))(plVar3,alStack_40);
      func_0x000107c35124();
    }
    func_0x0001003b6d74();
    func_0x000107c35120();
    func_0x000107c60dfc(&ppuStack_70);
    func_0x000107c60dfc(&ppuStack_78);
  }
  func_0x0001003b6664(unaff_x19 + 0x18);
  func_0x0001003b6664(plVar2);
  return;
}



/* Entry: 10b207180; end: 10b2071af;  */

void FUN_10b207180(long param_1)

{
  func_0x000107c2be64();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 10b2071b0; end: 10b2071b3;  */

void FUN_10b2071b0(long param_1)

{
  long lVar1;
  long unaff_x19;
  long *plVar2;
  long *plVar3;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  long alStack_40 [2];
  
  func_0x0001003b6548();
  plVar2 = (long *)(param_1 + 8);
  if (*plVar2 != 0) {
    ppuStack_78 = &PTR_DAT_1107e6938;
    ppuStack_70 = &PTR_DAT_1107e6938;
    func_0x000104bdfe3c(auStack_68,&ppuStack_70);
    alStack_40[0] = 0;
    alStack_40[1] = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    func_0x0001003b6920(auStack_50,plVar2,&uStack_60);
    func_0x0001003b6980(alStack_40,auStack_50);
    func_0x0001003b6cd8();
    func_0x0001003b8278();
    lVar1 = alStack_40[0];
    func_0x000107c60d88(alStack_40[0] + 0x48);
    func_0x000107c60c1c(lVar1 + 0x88,auStack_68);
    plVar3 = *(long **)(lVar1 + 0x90);
    *(undefined8 *)(lVar1 + 0x90) = 0;
    func_0x000107c60d8c(lVar1 + 0x48);
    if (plVar3 == (long *)0x0) {
      func_0x000107c60d48(lVar1 + 0x18);
    }
    else {
      (**(code **)(*plVar3 + 0x10))(plVar3,alStack_40);
      func_0x000107c35124();
    }
    func_0x0001003b6d74();
    func_0x000107c35120();
    func_0x000107c60dfc(&ppuStack_70);
    func_0x000107c60dfc(&ppuStack_78);
  }
  func_0x0001003b6664(unaff_x19 + 0x18);
  func_0x0001003b6664(plVar2);
  return;
}



/* Entry: 10b2071b4; end: 10b2071c7;  */

void FUN_10b2071b4(void)

{
  func_0x000107c2be68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2071c8; end: 10b2071cb;  */

void FUN_10b2071c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc6720;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b2071cc; end: 10b2071df;  */

void FUN_10b2071cc(void)

{
  FUN_10b2071e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2071e0; end: 10b2071ef;  */

void FUN_10b2071e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc6720;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b2071f0; end: 10b207203;  */

void FUN_10b2071f0(void)

{
  FUN_10b207254();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b207204; end: 10b207253;  */

void FUN_10b207204(long param_1)

{
  func_0x000107c281bc(param_1 + 0x78);
  if (*(char *)(param_1 + 0x70) == '\x01') {
    if (*(char *)(param_1 + 0x68) == '\x01') {
      func_0x000107c2be20();
    }
    else {
      __ZNSt13exception_ptrD1Ev(param_1 + 0x58);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutexD1Ev_110346598)(param_1 + 0x18);
  return;
}



/* Entry: 10b207254; end: 10b207267;  */

void FUN_10b207254(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b207268; end: 10b2072a3;  */

undefined8 * FUN_10b207268(undefined8 *param_1,undefined8 *param_2)

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
  func_0x000107c2be20(&uStack_30);
  return param_1;
}



/* Entry: 10b2072a4; end: 10b2072a7;  */

void FUN_10b2072a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc6828;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b2072a8; end: 10b2072bb;  */

void FUN_10b2072a8(void)

{
  func_0x00010b2072c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2072bc; end: 10b2072d7;  */

void FUN_10b2072bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b207508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b2072d8; end: 10b207387;  */

void FUN_10b2072d8(long param_1)

{
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [16];
  
  if (iRam00000001137f41d0 != 3) {
    if (*(char *)(param_1 + 0x17) < '\0') {
      if (*(long *)(param_1 + 8) == 0) {
        return;
      }
    }
    else if (*(char *)(param_1 + 0x17) == '\0') {
      return;
    }
    func_0x000107c278b8(auStack_48,"");
    FUN_10b120118(auStack_30,auStack_48);
    func_0x000107c2789c(auStack_30);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
    if (iRam00000001137f41d0 == 2 || iRam00000001137f41d0 == 5) {
      return;
    }
  }
  FUN_10b120118(auStack_58,param_1);
  func_0x000107c2789c(auStack_58);
  return;
}



/* Entry: 10b207388; end: 10b2073a7;  */

void FUN_10b207388(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b2073a8; end: 10b2073bf;  */

void FUN_10b2073a8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b2073c0; end: 10b207413;  */

undefined8 FUN_10b2073c0(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1;
  __ZNSt3__119__thread_local_dataEv();
  *param_1 = 0;
  func_0x000107c28450();
  FUN_10b2072d8(param_1 + 1);
  FUN_10b207414(&puStack_28);
  return 0;
}



/* Entry: 10b207414; end: 10b20744f;  */

long * FUN_10b207414(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 8);
    func_0x000107c28454(lVar1);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b207450; end: 10b207453;  */

void FUN_10b207450(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc6890;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b207454; end: 10b207467;  */

void FUN_10b207454(void)

{
  func_0x00010b207470();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b207468; end: 10b20747f;  */

void FUN_10b207468(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b207508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b207480; end: 10b2074bb;  */

undefined8 * FUN_10b207480(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc6640;
  func_0x0001052a1398(param_1 + 3);
  func_0x000107c2bdf4(param_1 + 1);
  return param_1;
}



/* Entry: 10b2074bc; end: 10b20752b;  */

void FUN_10b2074bc(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b2074c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 10b20752c; end: 10b207b97;  */

void FUN_10b20752c(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint in_stack_fffffffffffff610;
  undefined1 auStack_9a0 [32];
  undefined1 auStack_980 [64];
  undefined1 uStack_940;
  undefined1 auStack_938 [560];
  undefined1 auStack_708 [16];
  undefined1 uStack_6f8;
  ulong uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined1 uStack_6d0;
  undefined1 auStack_6c8 [24];
  undefined1 uStack_6b0;
  undefined1 auStack_6a8 [24];
  undefined1 uStack_690;
  undefined1 auStack_688 [72];
  undefined1 auStack_640 [240];
  undefined1 auStack_550 [24];
  undefined1 uStack_538;
  undefined1 auStack_530 [56];
  undefined1 uStack_4f8;
  undefined1 auStack_4f0 [24];
  undefined4 uStack_4d8;
  undefined8 uStack_4d4;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined8 uStack_4c0;
  undefined4 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined4 uStack_478;
  ulong uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined1 uStack_458;
  ulong uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined1 uStack_438;
  ulong uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined1 uStack_418;
  ulong uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined1 uStack_3f8;
  undefined1 auStack_2b0 [24];
  undefined1 uStack_298;
  ulong uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined1 auStack_278 [64];
  char cStack_238;
  ulong uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  char cStack_218;
  ulong uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  char cStack_1f8;
  ulong uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  char cStack_1d8;
  ulong uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  char cStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [232];
  char cStack_98;
  
  auStack_180[0] = 0;
  cStack_98 = '\0';
  if ((*(byte *)(param_2 + 0x10) >> 4 & 1) == 0) {
    auStack_278[0] = 0;
    cStack_238 = '\0';
    goto LAB_10b20790c;
  }
  lVar10 = *(long *)(param_2 + 0x70);
  uVar2 = *(undefined4 *)(lVar10 + 0x70);
  uVar12 = *(undefined8 *)(lVar10 + 0x80);
  uVar8 = *(undefined4 *)(lVar10 + 0x88);
  func_0x00010b23fdbc();
  uVar13 = *(undefined4 *)(lVar10 + 0x8c);
  uVar3 = *(undefined4 *)(lVar10 + 0x74);
  uVar11 = *(undefined8 *)(lVar10 + 0x78);
  uVar14 = *(undefined4 *)(lVar10 + 0x94);
  FUN_10b207c50(*(undefined8 *)(lVar10 + 0x30),&uStack_198);
  uVar4 = *(undefined4 *)(lVar10 + 0xa0);
  uVar5 = *(undefined4 *)(lVar10 + 0xa8);
  FUN_10b207c50(*(undefined8 *)(lVar10 + 0x38),&uStack_1b0);
  uVar6 = *(undefined4 *)(lVar10 + 0xa4);
  if ((*(byte *)(lVar10 + 0x10) & 1) == 0) {
    uStack_1d0 = uStack_1d0 & 0xffffffffffffff00;
    cStack_1b8 = '\0';
  }
  else {
    func_0x000107c27f70(&uStack_1d0,*(ulong *)(*(long *)(lVar10 + 0x58) + 0x10) & 0xfffffffffffffffc
                       );
  }
  uVar9 = *(ulong *)(lVar10 + 0x40) & 0xfffffffffffffffc;
  cVar7 = *(char *)(uVar9 + 0x17);
  if (cVar7 < '\0') {
    if (*(long *)(uVar9 + 8) != 0) goto LAB_10b207614;
LAB_10b207628:
    uStack_1f0 = uStack_1f0 & 0xffffffffffffff00;
    cStack_1d8 = '\0';
  }
  else {
    if (cVar7 == '\0') goto LAB_10b207628;
LAB_10b207614:
    func_0x000107c27f70(&uStack_1f0);
  }
  uVar9 = *(ulong *)(lVar10 + 0x48) & 0xfffffffffffffffc;
  cVar7 = *(char *)(uVar9 + 0x17);
  if (cVar7 < '\0') {
    if (*(long *)(uVar9 + 8) != 0) goto LAB_10b207644;
LAB_10b207658:
    uStack_210 = uStack_210 & 0xffffffffffffff00;
    cStack_1f8 = '\0';
  }
  else {
    if (cVar7 == '\0') goto LAB_10b207658;
LAB_10b207644:
    func_0x000107c27f70(&uStack_210);
  }
  uVar9 = *(ulong *)(lVar10 + 0x50) & 0xfffffffffffffffc;
  cVar7 = *(char *)(uVar9 + 0x17);
  if (cVar7 < '\0') {
    if (*(long *)(uVar9 + 8) != 0) goto LAB_10b207674;
LAB_10b207688:
    uStack_230 = uStack_230 & 0xffffffffffffff00;
    cStack_218 = '\0';
  }
  else {
    if (cVar7 == '\0') goto LAB_10b207688;
LAB_10b207674:
    func_0x000107c27f70(&uStack_230);
  }
  uStack_4a8 = uStack_190;
  uStack_4b0 = uStack_198;
  uStack_4a0 = uStack_188;
  uStack_190 = 0;
  uStack_198 = 0;
  uStack_188 = 0;
  uStack_480 = uStack_1a0;
  uStack_488 = uStack_1a8;
  uStack_490 = uStack_1b0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_1a0 = 0;
  uStack_470 = uStack_470 & 0xffffffffffffff00;
  uStack_458 = cStack_1b8 == '\x01';
  if ((bool)uStack_458) {
    uStack_468 = uStack_1c8;
    uStack_470 = uStack_1d0;
    uStack_460 = uStack_1c0;
    uStack_1c0 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
  }
  uStack_450 = uStack_450 & 0xffffffffffffff00;
  uStack_438 = cStack_1d8 == '\x01';
  if ((bool)uStack_438) {
    uStack_448 = uStack_1e8;
    uStack_450 = uStack_1f0;
    uStack_440 = uStack_1e0;
    uStack_1e0 = 0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
  }
  uStack_430 = uStack_430 & 0xffffffffffffff00;
  uStack_418 = cStack_1f8 == '\x01';
  if ((bool)uStack_418) {
    uStack_428 = uStack_208;
    uStack_430 = uStack_210;
    uStack_420 = uStack_200;
    uStack_200 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
  }
  uStack_410 = uStack_410 & 0xffffffffffffff00;
  uStack_3f8 = cStack_218 == '\x01';
  if ((bool)uStack_3f8) {
    uStack_408 = uStack_228;
    uStack_410 = uStack_230;
    uStack_400 = uStack_220;
    uStack_220 = 0;
    uStack_230 = 0;
    uStack_228 = 0;
  }
  uStack_4d8 = uVar2;
  uStack_4d4 = uVar12;
  uStack_4cc = uVar8;
  uStack_4c8 = uVar13;
  uStack_4c4 = uVar3;
  uStack_4c0 = uVar11;
  uStack_4b8 = uVar14;
  uStack_498 = uVar4;
  uStack_494 = uVar5;
  uStack_478 = uVar6;
  if (cStack_98 == '\x01') {
    FUN_10b1223d4(auStack_180,&uStack_4d8);
  }
  else {
    func_0x0001052b4d14(auStack_180,&uStack_4d8);
  }
  func_0x0001052b4238(&uStack_4d8);
  func_0x000107c279a4(&uStack_230);
  func_0x000107c279a4(&uStack_210);
  func_0x000107c279a4(&uStack_1f0);
  func_0x000107c279a4(&uStack_1d0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_1b0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_198);
  auStack_278[0] = 0;
  cStack_238 = '\0';
  if (((*(uint *)(param_2 + 0x10) >> 4 & 1) != 0) &&
     (lVar10 = *(long *)(param_2 + 0x70), (*(byte *)(lVar10 + 0x10) >> 1 & 1) != 0)) {
    FUN_10b207b98(&uStack_6f0,*(long *)(lVar10 + 0x20),
                  *(long *)(lVar10 + 0x20) + (long)*(int *)(lVar10 + 0x18) * 4);
    ppuVar1 = &PTR_PTR_1134054f0;
    if (*(undefined ***)(lVar10 + 0x60) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(lVar10 + 0x60);
    }
    uStack_288 = uStack_6e8;
    uStack_290 = uStack_6f0;
    uStack_280 = uStack_6e0;
    uStack_6f0 = 0;
    uStack_6e8 = 0;
    uStack_6e0 = 0;
    auStack_2b0[0] = 0;
    uStack_298 = 0;
    func_0x0001052b1dac(&uStack_4d8,*(undefined4 *)(ppuVar1 + 2),&uStack_290,auStack_2b0);
    if (cStack_238 == '\x01') {
      FUN_10b12249c(auStack_278,&uStack_4d8);
    }
    else {
      func_0x0001052b4ea0(auStack_278,&uStack_4d8);
    }
    func_0x0001052b4f8c(&uStack_4d8);
    func_0x000107c279c4(auStack_2b0);
    func_0x000107c27a18(&uStack_290);
    func_0x000107c27a18(&uStack_6f0);
  }
LAB_10b20790c:
  FUN_10b207c50(*(undefined8 *)(param_2 + 0x40),auStack_4f0);
  auStack_530[0] = 0;
  uStack_4f8 = 0;
  auStack_550[0] = 0;
  uStack_538 = 0;
  FUN_10b124374(auStack_640,auStack_180);
  FUN_10b124490(auStack_688,auStack_278);
  auStack_6a8[0] = 0;
  uStack_690 = 0;
  auStack_6c8[0] = 0;
  uStack_6b0 = 0;
  func_0x0001052b4adc(&uStack_4d8,auStack_4f0,auStack_530,auStack_550,0,0,0,0,
                      in_stack_fffffffffffff610 & 0xffffff00);
  func_0x000107c279a4(auStack_6c8);
  func_0x0001052b4f4c(auStack_6a8);
  func_0x0001052b4f6c(auStack_688);
  func_0x0001052b4218(auStack_640);
  func_0x0001052b4fb8(auStack_550);
  func_0x0001052b41f8(auStack_530);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_4f0);
  uStack_6f0 = uStack_6f0 & 0xffffffffffffff00;
  uStack_6d0 = 0;
  auStack_708[0] = 0;
  uStack_6f8 = 0;
  FUN_10b1b3a88(auStack_938,&uStack_4d8);
  auStack_980[0] = 0;
  uStack_940 = 0;
  func_0x000107c27f70(auStack_9a0,*(ulong *)(param_2 + 0x40) & 0xfffffffffffffffc);
  FUN_10b0fbb80(param_1,&uStack_6f0,auStack_708,auStack_938,0,auStack_980,auStack_9a0,0,
                *(undefined4 *)(param_2 + 0x98));
  func_0x000107c279a4(auStack_9a0);
  func_0x0001052a038c(auStack_980);
  func_0x00010539dd5c(auStack_938);
  func_0x0001052b5d04(&uStack_4d8);
  func_0x0001052b4f6c(auStack_278);
  func_0x0001052b4218(auStack_180);
  return;
}



/* Entry: 10b207b98; end: 10b207bcb;  */

undefined8 * FUN_10b207b98(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10b207bcc();
  return param_1;
}



/* Entry: 10b207bcc; end: 10b207c4f;  */

void FUN_10b207bcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x000107c27e00(param_1,param_4);
    FUN_10b1800f8(param_1,param_2,param_3,param_4);
  }
  uStack_38 = 1;
  func_0x000107c27fd0(&uStack_40);
  return;
}



/* Entry: 10b207c50; end: 10b207c73;  */

void FUN_10b207c50(ulong param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            (param_2,param_1 & 0xfffffffffffffffc);
  return;
}



/* Entry: 10b207c74; end: 10b207d13;  */

/* WARNING: Possible PIC construction at 0x00010b207c8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b207c90) */
/* WARNING: Removing unreachable block (ram,0x00010b207c9c) */
/* WARNING: Removing unreachable block (ram,0x00010b207cb4) */
/* WARNING: Removing unreachable block (ram,0x00010b207ca0) */
/* WARNING: Removing unreachable block (ram,0x00010b207c94) */
/* WARNING: Removing unreachable block (ram,0x00010b207cb8) */

bool FUN_10b207c74(long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined4 uStack_44;
  long lStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  puStack_30 = &stack0xfffffffffffffff0;
  uStack_28 = 0x10b207c90;
  puVar1 = &UNK_10e496048;
  uStack_44 = param_2;
  lStack_40 = param_1;
  uStack_38 = param_3;
  func_0x00010b18054c(&UNK_10e496048,(int *)(param_1 + 0x10),&uStack_44);
  return (undefined *)(*(long *)(param_1 + 0x18) + (long)*(int *)(param_1 + 0x10) * 4) != puVar1;
}



/* Entry: 10b207d14; end: 10b207d6b;  */

/* WARNING: Possible PIC construction at 0x00010b207c8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b207c90) */
/* WARNING: Removing unreachable block (ram,0x00010b207c9c) */
/* WARNING: Removing unreachable block (ram,0x00010b207cb4) */
/* WARNING: Removing unreachable block (ram,0x00010b207ca0) */
/* WARNING: Removing unreachable block (ram,0x00010b207c94) */
/* WARNING: Removing unreachable block (ram,0x00010b207cb8) */

bool FUN_10b207d14(ulong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined4 uStack_44;
  ulong uStack_40;
  undefined8 uStack_38;
  
  uVar2 = param_1;
  FUN_10b207c74(param_1,param_2,param_4);
  if ((uVar2 & 1) != 0) {
    return true;
  }
  puVar1 = &UNK_10e496048;
  uStack_44 = param_3;
  uStack_40 = param_1;
  uStack_38 = param_4;
  func_0x00010b18054c(&UNK_10e496048,(int *)(param_1 + 0x10),&uStack_44);
  return (undefined *)(*(long *)(param_1 + 0x18) + (long)*(int *)(param_1 + 0x10) * 4) != puVar1;
}



/* Entry: 10b207d6c; end: 10b207e23;  */

void FUN_10b207d6c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  char cStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c278b8(&uStack_38,&UNK_10e55a8c8);
  func_0x000105391f00(&uStack_58,&UNK_10f7399df);
  uVar1 = uStack_28;
  param_1[1] = uStack_30;
  *param_1 = uStack_38;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_38 = 0;
  param_1[2] = uVar1;
  param_1[3] = 3;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  if (cStack_40 == '\x01') {
    param_1[5] = uStack_50;
    param_1[4] = uStack_58;
    param_1[6] = uStack_48;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_58 = 0;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  func_0x000107c279a4(&uStack_58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_38);
  return;
}



/* Entry: 10b207e24; end: 10b207ecb;  */

void FUN_10b207e24(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_68 [72];
  
  if ((bRam000000011336c478 & 1) == 0) {
    iVar1 = 0x1336c478;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b207c64(auStack_68,param_2);
      FUN_10b207ecc(0x11336c430,auStack_68);
      FUN_10b12338c(auStack_68);
      ___cxa_guard_release(0x11336c478);
    }
  }
  FUN_10b207fcc(param_1,0x11336c430);
  return;
}



/* Entry: 10b207ecc; end: 10b207ef7;  */

undefined1 * FUN_10b207ecc(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x40] = 0;
  FUN_10b207ef8();
  return param_1;
}



/* Entry: 10b207ef8; end: 10b207f0b;  */

void FUN_10b207ef8(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_10b207f28();
    *(undefined1 *)(param_1 + 0x40) = 1;
    return;
  }
  return;
}



/* Entry: 10b207f0c; end: 10b207f27;  */

void FUN_10b207f0c(long param_1)

{
  FUN_10b207f28();
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 10b207f28; end: 10b207f33;  */

undefined8 FUN_10b207f28(undefined8 param_1,undefined8 param_2)

{
  FUN_10b524750(param_1,0);
  FUN_10b207f68(param_1,param_2);
  return param_1;
}



/* Entry: 10b207f34; end: 10b207f67;  */

undefined8 FUN_10b207f34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10b524750();
  FUN_10b207f68(param_1,param_3);
  return param_1;
}



/* Entry: 10b207f68; end: 10b207fcb;  */

long FUN_10b207f68(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      func_0x00010b524b48(param_1);
    }
    else {
      func_0x00010b524b10(param_1);
    }
  }
  return param_1;
}



/* Entry: 10b207fcc; end: 10b208007;  */

undefined1 * FUN_10b207fcc(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x40] = 0;
  FUN_10b208008();
  return param_1;
}



/* Entry: 10b208008; end: 10b20801b;  */

void FUN_10b208008(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_10b208038();
    *(undefined1 *)(param_1 + 0x40) = 1;
    return;
  }
  return;
}



/* Entry: 10b20801c; end: 10b208037;  */

void FUN_10b20801c(long param_1)

{
  FUN_10b208038();
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 10b208038; end: 10b208043;  */

undefined8 * FUN_10b208038(undefined8 *param_1,long param_2)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_110cfd618;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  func_0x000107c282d4(param_1 + 2,0,param_2 + 0x10);
  *(undefined4 *)(param_1 + 4) = 0;
  func_0x000107c282d4(param_1 + 5,0,param_2 + 0x28);
  param_1[7] = 0;
  return param_1;
}



/* Entry: 10b208044; end: 10b208103;  */

void FUN_10b208044(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined1 auStack_78 [64];
  long lStack_38;
  int iStack_30;
  undefined4 uStack_2c;
  
  func_0x000107c30194(&lStack_38,param_2,param_3,*(undefined8 *)(param_4 + 0x10),
                      *(undefined8 *)(param_4 + 0x18));
  if (lStack_38 == CONCAT44(uStack_2c,iStack_30)) {
    *param_1 = 0;
    param_1[0x40] = 0;
  }
  else {
    FUN_10b524750(auStack_78,0);
    puVar2 = auStack_78;
    func_0x000107c3034c(puVar2,lStack_38,iStack_30 - (int)lStack_38);
    bVar1 = ((ulong)puVar2 & 1) == 0;
    if (bVar1) {
      *param_1 = 0;
    }
    else {
      FUN_10b207f28(param_1,auStack_78);
    }
    param_1[0x40] = !bVar1;
    FUN_10b524828(auStack_78);
  }
  func_0x000107c27914(&lStack_38);
  return;
}



/* Entry: 10b208104; end: 10b208113;  */

void FUN_10b208104(void)

{
  return;
}



/* Entry: 10b208114; end: 10b2081cb;  */

undefined8 * FUN_10b208114(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  *param_1 = &PTR_DAT_110cc6910;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  plVar1 = (long *)*param_2;
  if (plVar1 != (long *)0x0) {
    plVar3 = param_2;
    (**(code **)(*plVar1 + 0x18))();
    plVar2 = (long *)*param_2;
    (**(code **)(*plVar2 + 0x18))();
    (**(code **)(*(long *)*param_2 + 0x18))();
    func_0x000107c28464(param_1 + 1,0,plVar1,(long)plVar2 + (long)plVar3);
  }
  return param_1;
}



/* Entry: 10b2081cc; end: 10b2081df;  */

long FUN_10b2081cc(long param_1)

{
  return *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8);
}



/* Entry: 10b2081e0; end: 10b20820b;  */

undefined8 FUN_10b2081e0(long param_1,long param_2,long param_3)

{
  func_0x0001078a80e0(param_1 + 8,*(undefined8 *)(param_1 + 0x10),param_2,param_2 + param_3);
  return 1;
}



/* Entry: 10b20820c; end: 10b208257;  */

void FUN_10b20820c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    lVar2 = *(long *)(param_1 + 0x10) - (lVar1 + param_2);
    if (lVar2 != 0) {
      _memmove(lVar1,lVar1 + param_2,lVar2);
    }
    *(long *)(param_1 + 0x10) = lVar1 + lVar2;
  }
  return;
}



/* Entry: 10b208258; end: 10b2082ff;  */

void FUN_10b208258(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined1 auStack_60 [24];
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar1 = (long *)(param_2 + 8);
  lStack_48 = *plVar1;
  uStack_38 = *(undefined8 *)(param_2 + 0x18);
  uStack_40 = *(undefined8 *)(param_2 + 0x10);
  *plVar1 = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  func_0x000105340004(auStack_60,param_3 + lStack_48,uStack_40);
  func_0x000107c3194c(plVar1,auStack_60);
  func_0x000107c27914(auStack_60);
  func_0x000107c2823c(&lStack_48,param_3);
  func_0x000107c3171c(param_1,&lStack_48);
  func_0x000107c27914(&lStack_48);
  return;
}



/* Entry: 10b208300; end: 10b2083af;  */

undefined8 *
FUN_10b208300(undefined8 *param_1,long *param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = param_1;
  FUN_10b208114(param_1,param_5);
  *puVar1 = &PTR_FUN_110cc6958;
  func_0x000107c27994(puVar1 + 0x23,param_3);
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x29) = param_4;
  *(undefined1 *)((long)param_1 + 0x149) = 0;
  if (param_1[0x24] - param_1[0x23] == 0x10) {
    lVar2 = *param_2;
    if ((lVar2 != param_2[1]) &&
       (func_0x00010ae2de6c(lVar2,((int)param_2[1] - (int)lVar2) * 8,param_1 + 4), (int)lVar2 == 0))
    {
      return param_1;
    }
  }
  *(undefined1 *)((long)param_1 + 0x149) = 1;
  return param_1;
}



/* Entry: 10b2083b0; end: 10b2083fb;  */

long FUN_10b2083b0(ulong param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if ((*(byte *)(param_1 + 0x148) & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    lVar3 = *(long *)(param_1 + 8);
  }
  else {
    lVar2 = *(long *)(param_1 + 8);
    lVar1 = *(long *)(param_1 + 0x10);
    lVar3 = lVar2;
    if (lVar2 != lVar1) {
      FUN_10b2083fc();
      return lVar1 - (lVar2 + (param_1 & 0xffffffff));
    }
  }
  return lVar2 - lVar3;
}



/* Entry: 10b2083fc; end: 10b208437;  */

byte FUN_10b2083fc(long param_1)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte bVar5;
  
  if (*(char *)(param_1 + 0x148) != '\x01') {
    return 0;
  }
  uVar2 = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8);
  if (uVar2 != 0) {
    pbVar4 = (byte *)(*(long *)(param_1 + 8) + uVar2 + -1);
    bVar1 = *pbVar4;
    uVar3 = (ulong)bVar1;
    if (0xef < (byte)(bVar1 - 0x11) && uVar3 <= uVar2) {
      bVar5 = 0;
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        bVar5 = bVar5 | *pbVar4 ^ bVar1;
        pbVar4 = pbVar4 + -1;
      }
      if (bVar5 != 0) {
        bVar1 = 0;
      }
      return bVar1;
    }
  }
  return 0;
}



/* Entry: 10b208438; end: 10b20858f;  */

byte FUN_10b208438(long param_1,long param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_58 [24];
  
  bVar1 = *(byte *)(param_1 + 0x149);
  if ((bVar1 & 1) != 0) goto LAB_10b208574;
  uVar4 = (*(long *)(param_1 + 0x138) - *(long *)(param_1 + 0x130)) + param_3;
  if (uVar4 < 0x10) {
    func_0x0001078a80e0(param_1 + 0x130,*(long *)(param_1 + 0x138),param_2,param_2 + param_3);
    goto LAB_10b208574;
  }
  uVar4 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c2823c((long *)(param_1 + 8),
                      (uVar4 + *(long *)(param_1 + 0x10)) - *(long *)(param_1 + 8));
  lVar2 = *(long *)(param_1 + 0x130) - *(long *)(param_1 + 0x138);
  lVar3 = param_2;
  if (lVar2 == 0) {
LAB_10b208508:
    func_0x000107c2b164(lVar3,*(long *)(param_1 + 0x10) - uVar4,uVar4,param_1 + 0x20,
                        *(undefined8 *)(param_1 + 0x118),0);
    lVar3 = lVar3 + uVar4;
    func_0x000107c27d7c(auStack_58,lVar3 + -0x10,lVar3);
    func_0x000107c3194c(param_1 + 0x118,auStack_58);
    func_0x000107c27914(auStack_58);
  }
  else {
    lVar3 = param_2 + lVar2 + 0x10;
    func_0x000104bd9994(param_1 + 0x130,*(long *)(param_1 + 0x138),param_2,lVar3);
    func_0x000107c2b164(*(long *)(param_1 + 0x130),*(long *)(param_1 + 0x10) - uVar4,
                        *(long *)(param_1 + 0x138) - *(long *)(param_1 + 0x130),param_1 + 0x20,
                        *(undefined8 *)(param_1 + 0x118),0);
    func_0x000107c27cfc(param_1 + 0x118,param_1 + 0x130);
    uVar4 = uVar4 - 0x10;
    if (uVar4 != 0) goto LAB_10b208508;
  }
  func_0x000107c27d7c(auStack_58,lVar3,param_2 + param_3);
  func_0x000107c3194c(param_1 + 0x130,auStack_58);
  func_0x000107c27914(auStack_58);
LAB_10b208574:
  return bVar1 ^ 1;
}



/* Entry: 10b208590; end: 10b2085e7;  */

byte FUN_10b208590(long param_1,ulong param_2)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  byte bVar4;
  
  if (param_2 != 0) {
    pbVar3 = (byte *)(param_1 + param_2 + -1);
    bVar1 = *pbVar3;
    uVar2 = (ulong)bVar1;
    if (0xef < (byte)(bVar1 - 0x11) && uVar2 <= param_2) {
      bVar4 = 0;
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        bVar4 = bVar4 | *pbVar3 ^ bVar1;
        pbVar3 = pbVar3 + -1;
      }
      if (bVar4 != 0) {
        bVar1 = 0;
      }
      return bVar1;
    }
  }
  return 0;
}



/* Entry: 10b2085e8; end: 10b2085fb;  */

void FUN_10b2085e8(void)

{
  func_0x00010b196990();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2085fc; end: 10b2085ff;  */

undefined8 * FUN_10b2085fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc6958;
  func_0x000107c27914(param_1 + 0x26);
  func_0x000107c27914(param_1 + 0x23);
  *param_1 = &PTR_DAT_110cc6910;
  func_0x000107c27914(param_1 + 1);
  return param_1;
}



/* Entry: 10b208600; end: 10b208613;  */

void FUN_10b208600(void)

{
  FUN_10b196950();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b208614; end: 10b2086ff;  */

char * FUN_10b208614(char *param_1,char param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  undefined1 auStack_40 [16];
  
  *param_1 = param_2;
  plVar1 = (long *)(param_1 + 8);
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  *plVar1 = 0;
  plVar2 = (long *)(param_1 + 0x18);
  param_1[0x20] = '\0';
  param_1[0x21] = '\0';
  param_1[0x22] = '\0';
  param_1[0x23] = '\0';
  param_1[0x24] = '\0';
  param_1[0x25] = '\0';
  param_1[0x26] = '\0';
  param_1[0x27] = '\0';
  *plVar2 = 0;
  if (param_3 == 0) {
    func_0x000107c31444();
  }
  else {
    func_0x000107c3144c();
  }
  if (*param_1 == '\x01') {
    func_0x00010b208dcc();
    FUN_10b208700();
    func_0x000106e50b28(plVar1,auStack_40);
    func_0x000106e50c54(auStack_40);
    *(undefined1 *)(*(long *)(*plVar1 + 0x18) + 0x110) = 0;
  }
  else {
    func_0x00010b208dcc();
    func_0x00010b208720();
    FUN_10b1ff0cc(plVar2,auStack_40);
    FUN_10b127ebc(auStack_40);
    (**(code **)(**(long **)(*plVar2 + 0x18) + 0x48))(*(long **)(*plVar2 + 0x18),0);
  }
  return param_1;
}



/* Entry: 10b208700; end: 10b20873f;  */

void FUN_10b208700(void)

{
  func_0x00010b208de0();
  FUN_10b2088fc();
  return;
}



/* Entry: 10b208740; end: 10b20875b;  */

long * FUN_10b208740(char *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  long *plVar6;
  long *plVar7;
  undefined1 *puVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined8 extraout_x8_04;
  long extraout_x10;
  long extraout_x10_00;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auStack_90 [8];
  long alStack_88 [12];
  undefined8 uStack_28;
  
  uVar5 = *param_1 == '\x01';
  if ((bool)uVar5) {
    plVar6 = *(long **)(param_1 + 8);
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x00010b208cac();
    unaff_x19 = alStack_88;
    uStack_28 = extraout_x8;
    FUN_10b208afc();
    func_0x00010b208d08(*(undefined8 *)(*plVar6 + 0x10));
    func_0x00010b208c9c();
    func_0x00010b208c88(uStack_28);
    if ((bool)uVar5) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    plVar6 = unaff_x19;
    func_0x00010b208c9c();
    unaff_x30 = FUN_10b2087bc;
    func_0x00010b208cd8();
    register0x00000008 = (BADSPACEBASE *)auStack_90;
  }
  else {
    plVar6 = *(long **)(param_1 + 0x18);
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x00010b208cac();
  *(undefined8 *)((long)register0x00000008 + -0x28) = extraout_x8_00;
  plVar7 = (long *)((long)register0x00000008 + -0x88);
  FUN_10b208afc();
  func_0x00010b208d08(*(undefined8 *)(*plVar6 + 0x10));
  func_0x00010b208c9c();
  func_0x00010b208c88(*(undefined8 *)((long)register0x00000008 + -0x28));
  if ((bool)uVar5) {
    return plVar7;
  }
  ___stack_chk_fail();
  plVar6 = plVar7;
  func_0x00010b208c9c();
  func_0x00010b208cd8();
  *(undefined8 *)((long)register0x00000008 + -0xb0) = unaff_x20;
  *(long **)((long)register0x00000008 + -0xa8) = plVar7;
  *(undefined1 **)((long)register0x00000008 + -0xa0) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x98) = FUN_10b20881c;
  func_0x00010b208cac();
  *(undefined8 *)((long)register0x00000008 + -0xb8) = extraout_x8_01;
  lVar2 = param_2[1];
  *(undefined8 *)((long)register0x00000008 + -0xf8) = *param_2;
  *(long *)((long)register0x00000008 + -0xf0) = lVar2;
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
  uVar5 = (char)*plVar6 == '\x01';
  if ((bool)uVar5) {
    func_0x00010b208d80();
    if (extraout_x8_02 != 0) {
      plVar6 = (long *)(extraout_x8_02 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puVar8 = (undefined1 *)((long)register0x00000008 + -0xe8);
    func_0x00010bcce4dc(extraout_x10 + 0x20,puVar8);
  }
  else {
    func_0x00010b208d80();
    if (extraout_x8_03 != 0) {
      plVar6 = (long *)(extraout_x8_03 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puVar8 = (undefined1 *)((long)register0x00000008 + -0xe8);
    func_0x00010bcce990(extraout_x10_00 + 0x68,puVar8);
  }
  (*(code *)**(undefined8 **)((long)register0x00000008 + -0xe0))(plVar7 + 1);
  plVar6 = (long *)((long)register0x00000008 + -0xf8);
  func_0x00010b12487c(plVar6);
  func_0x00010b208c88(*(undefined8 *)((long)register0x00000008 + -0xb8));
  if ((bool)uVar5) {
    return plVar6;
  }
  ___stack_chk_fail();
  plVar6 = (long *)((long)register0x00000008 + -0x150);
  *(undefined8 *)((long)register0x00000008 + -0x130) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x128) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x120) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x118) = plVar7;
  *(undefined1 **)((long)register0x00000008 + -0x110) =
       (undefined1 *)((long)register0x00000008 + -0xa0);
  *(code **)((long)register0x00000008 + -0x108) = FUN_10b2088fc;
  func_0x00010b208cac();
  *(undefined8 *)((long)register0x00000008 + -0x138) = extraout_x8_04;
  func_0x000106e54980((undefined1 *)((long)register0x00000008 + -0x150),1);
  plVar7 = *(long **)((long)register0x00000008 + -0x140);
  FUN_10b208980(plVar7,puVar8,param_3,param_4);
  func_0x00010b208d68();
  func_0x000106e54adc();
  func_0x00010b208c88(*(undefined8 *)((long)register0x00000008 + -0x138));
  if ((bool)uVar5) {
    return plVar7;
  }
  ___stack_chk_fail();
  func_0x000106e54adc();
  func_0x00010b208cd8();
  *(undefined8 *)((long)register0x00000008 + -0x170) = param_4;
  *(long **)((long)register0x00000008 + -0x168) = plVar7;
  *(undefined1 **)((long)register0x00000008 + -0x160) =
       (undefined1 *)((long)register0x00000008 + -0x110);
  *(code **)((long)register0x00000008 + -0x158) = FUN_10b208980;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_DAT_11097ffd8;
  plVar6[1] = 0;
  FUN_10b2089bc(plVar6 + 3);
  return plVar6;
}



/* Entry: 10b20875c; end: 10b2087bb;  */

long * FUN_10b20875c(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  long *plVar5;
  long *plVar6;
  undefined1 *puVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined8 extraout_x8_04;
  long extraout_x10;
  long extraout_x10_00;
  long alStack_1e0 [2];
  long *plStack_1d0;
  undefined8 uStack_1c8;
  long lStack_188;
  long lStack_180;
  undefined1 auStack_178 [8];
  undefined8 *puStack_170;
  undefined8 uStack_148;
  long alStack_118 [12];
  undefined8 uStack_b8;
  long alStack_88 [12];
  undefined8 uStack_28;
  
  func_0x00010b208cac();
  plVar5 = alStack_88;
  uStack_28 = extraout_x8;
  FUN_10b208afc();
  func_0x00010b208d08(*(undefined8 *)(*param_1 + 0x10));
  func_0x00010b208c9c();
  func_0x00010b208c88(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b208c9c();
    func_0x00010b208cd8();
    func_0x00010b208cac();
    plVar6 = alStack_118;
    uStack_b8 = extraout_x8_00;
    FUN_10b208afc();
    func_0x00010b208d08(*(undefined8 *)(*plVar5 + 0x10));
    func_0x00010b208c9c();
    func_0x00010b208c88(uStack_b8);
    plVar5 = plVar6;
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      plVar5 = plVar6;
      func_0x00010b208c9c();
      func_0x00010b208cd8();
      func_0x00010b208cac();
      lStack_188 = *param_2;
      lStack_180 = param_2[1];
      if (lStack_180 != 0) {
        plVar1 = (long *)(lStack_180 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uVar4 = (char)*plVar5 == '\x01';
      uStack_148 = extraout_x8_01;
      if ((bool)uVar4) {
        func_0x00010b208d80();
        if (extraout_x8_02 != 0) {
          plVar5 = (long *)(extraout_x8_02 + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = *plVar5 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        puVar7 = auStack_178;
        func_0x00010bcce4dc(extraout_x10 + 0x20,puVar7);
      }
      else {
        func_0x00010b208d80();
        if (extraout_x8_03 != 0) {
          plVar5 = (long *)(extraout_x8_03 + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = *plVar5 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        puVar7 = auStack_178;
        func_0x00010bcce990(extraout_x10_00 + 0x68,puVar7);
      }
      (*(code *)*puStack_170)(plVar6 + 1);
      plVar5 = &lStack_188;
      func_0x00010b12487c(plVar5);
      func_0x00010b208c88(uStack_148);
      if (!(bool)uVar4) {
        ___stack_chk_fail();
        plVar5 = alStack_1e0;
        func_0x00010b208cac();
        uStack_1c8 = extraout_x8_04;
        func_0x000106e54980(alStack_1e0,1);
        FUN_10b208980(plStack_1d0,puVar7,param_3,param_4);
        func_0x00010b208d68();
        func_0x000106e54adc();
        func_0x00010b208c88(uStack_1c8);
        if (!(bool)uVar4) {
          ___stack_chk_fail();
          func_0x000106e54adc();
          func_0x00010b208cd8();
          plVar5[2] = 0;
          *plVar5 = (long)&PTR_DAT_11097ffd8;
          plVar5[1] = 0;
          FUN_10b2089bc(plVar5 + 3);
          return plVar5;
        }
        return plStack_1d0;
      }
      return plVar5;
    }
  }
  return plVar5;
}



/* Entry: 10b2087bc; end: 10b20881b;  */

char * FUN_10b2087bc(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 extraout_x8_03;
  long extraout_x10;
  long extraout_x10_00;
  char acStack_150 [16];
  char *pcStack_140;
  undefined8 uStack_138;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined1 auStack_e8 [8];
  undefined8 *puStack_e0;
  undefined8 uStack_b8;
  char acStack_88 [96];
  undefined8 uStack_28;
  
  func_0x00010b208cac();
  pcVar5 = acStack_88;
  uStack_28 = extraout_x8;
  FUN_10b208afc();
  func_0x00010b208d08(*(undefined8 *)(*param_1 + 0x10));
  func_0x00010b208c9c();
  func_0x00010b208c88(uStack_28);
  if ((bool)in_ZR) {
    return pcVar5;
  }
  ___stack_chk_fail();
  pcVar6 = pcVar5;
  func_0x00010b208c9c();
  func_0x00010b208cd8();
  func_0x00010b208cac();
  uStack_f8 = *param_2;
  lStack_f0 = param_2[1];
  if (lStack_f0 != 0) {
    plVar1 = (long *)(lStack_f0 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar4 = *pcVar6 == '\x01';
  uStack_b8 = extraout_x8_00;
  if ((bool)uVar4) {
    func_0x00010b208d80();
    if (extraout_x8_01 != 0) {
      plVar1 = (long *)(extraout_x8_01 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar7 = auStack_e8;
    func_0x00010bcce4dc(extraout_x10 + 0x20,puVar7);
  }
  else {
    func_0x00010b208d80();
    if (extraout_x8_02 != 0) {
      plVar1 = (long *)(extraout_x8_02 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar7 = auStack_e8;
    func_0x00010bcce990(extraout_x10_00 + 0x68,puVar7);
  }
  (*(code *)*puStack_e0)(pcVar5 + 8);
  pcVar5 = (char *)&uStack_f8;
  func_0x00010b12487c(pcVar5);
  func_0x00010b208c88(uStack_b8);
  if ((bool)uVar4) {
    return pcVar5;
  }
  ___stack_chk_fail();
  pcVar5 = acStack_150;
  func_0x00010b208cac();
  uStack_138 = extraout_x8_03;
  func_0x000106e54980(acStack_150,1);
  FUN_10b208980(pcStack_140,puVar7,param_3,param_4);
  func_0x00010b208d68();
  func_0x000106e54adc();
  func_0x00010b208c88(uStack_138);
  if ((bool)uVar4) {
    return pcStack_140;
  }
  ___stack_chk_fail();
  func_0x000106e54adc();
  func_0x00010b208cd8();
  pcVar5[0x10] = '\0';
  pcVar5[0x11] = '\0';
  pcVar5[0x12] = '\0';
  pcVar5[0x13] = '\0';
  pcVar5[0x14] = '\0';
  pcVar5[0x15] = '\0';
  pcVar5[0x16] = '\0';
  pcVar5[0x17] = '\0';
  *(undefined ***)pcVar5 = &PTR_DAT_11097ffd8;
  pcVar5[8] = '\0';
  pcVar5[9] = '\0';
  pcVar5[10] = '\0';
  pcVar5[0xb] = '\0';
  pcVar5[0xc] = '\0';
  pcVar5[0xd] = '\0';
  pcVar5[0xe] = '\0';
  pcVar5[0xf] = '\0';
  FUN_10b2089bc(pcVar5 + 0x18);
  return pcVar5;
}



/* Entry: 10b20881c; end: 10b2088fb;  */

undefined8 * FUN_10b20881c(char *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  long extraout_x10;
  long extraout_x10_00;
  long unaff_x19;
  undefined8 auStack_c0 [2];
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [8];
  undefined8 *puStack_50;
  undefined8 uStack_28;
  
  func_0x00010b208cac();
  uStack_68 = *param_2;
  lStack_60 = param_2[1];
  if (lStack_60 != 0) {
    plVar1 = (long *)(lStack_60 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar4 = *param_1 == '\x01';
  uStack_28 = extraout_x8;
  if ((bool)uVar4) {
    func_0x00010b208d80();
    if (extraout_x8_00 != 0) {
      plVar1 = (long *)(extraout_x8_00 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar6 = auStack_58;
    func_0x00010bcce4dc(extraout_x10 + 0x20,puVar6);
  }
  else {
    func_0x00010b208d80();
    if (extraout_x8_01 != 0) {
      plVar1 = (long *)(extraout_x8_01 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar6 = auStack_58;
    func_0x00010bcce990(extraout_x10_00 + 0x68,puVar6);
  }
  (*(code *)*puStack_50)(unaff_x19 + 8);
  puVar5 = &uStack_68;
  func_0x00010b12487c(puVar5);
  func_0x00010b208c88(uStack_28);
  if ((bool)uVar4) {
    return puVar5;
  }
  ___stack_chk_fail();
  puVar5 = auStack_c0;
  func_0x00010b208cac();
  uStack_a8 = extraout_x8_02;
  func_0x000106e54980(auStack_c0,1);
  FUN_10b208980(puStack_b0,puVar6,param_3,param_4);
  func_0x00010b208d68();
  func_0x000106e54adc();
  func_0x00010b208c88(uStack_a8);
  if ((bool)uVar4) {
    return puStack_b0;
  }
  ___stack_chk_fail();
  func_0x000106e54adc();
  func_0x00010b208cd8();
  puVar5[2] = 0;
  *puVar5 = &PTR_DAT_11097ffd8;
  puVar5[1] = 0;
  FUN_10b2089bc(puVar5 + 3);
  return puVar5;
}



/* Entry: 10b2088fc; end: 10b20897f;  */

undefined8 *
FUN_10b2088fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 auStack_50 [2];
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = auStack_50;
  func_0x00010b208cac();
  uStack_38 = extraout_x8;
  func_0x000106e54980(auStack_50,1);
  FUN_10b208980(puStack_40,param_2,param_3,param_4);
  func_0x00010b208d68();
  func_0x000106e54adc();
  func_0x00010b208c88(uStack_38);
  if ((bool)in_ZR) {
    return puStack_40;
  }
  ___stack_chk_fail();
  func_0x000106e54adc();
  func_0x00010b208cd8();
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_11097ffd8;
  puVar1[1] = 0;
  FUN_10b2089bc(puVar1 + 3);
  return puVar1;
}


