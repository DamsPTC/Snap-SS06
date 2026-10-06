/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1087340ec; end: 108734123;  */

long FUN_1087340ec(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a69c08);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 108734124; end: 10873412f;  */

undefined ** FUN_108734124(void)

{
  return &PTR_DAT_110a69c08;
}



/* Entry: 108734130; end: 1087343b3;  */

void FUN_108734130(long param_1,long param_2,ulong param_3,long param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 unaff_x19;
  long lVar8;
  undefined8 unaff_x20;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uStack_428;
  long lStack_420;
  ulong *puStack_418;
  long alStack_400 [106];
  ulong uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_61;
  
  if (param_3 < 2) {
    return;
  }
  if (param_3 == 2) {
    if (*(long *)(param_2 + -0x3b0) <= *(long *)(param_1 + 0x20)) {
      return;
    }
    lVar4 = param_2 + -0x3d0;
code_r0x00010865f20c:
    func_0x000107c31e1c(param_1,lVar4);
    func_0x000107c28918(alStack_400,unaff_x20);
    func_0x000107c31e34();
    func_0x000107c288f4();
    func_0x000107c288f4(unaff_x19,alStack_400);
    func_0x000107c31e58();
    return;
  }
  if ((long)param_3 < 1) {
    if (param_1 == param_2) {
      return;
    }
    lVar4 = 0;
    lVar7 = param_1;
    do {
      lVar14 = lVar7 + 0x3d0;
      if (lVar14 == param_2) {
        return;
      }
      if (*(long *)(lVar7 + 0x20) < *(long *)(lVar7 + 0x3f0)) {
        func_0x000107c28918(&lStack_420,lVar14);
        lVar7 = lVar4;
        do {
          lVar9 = param_1 + lVar7;
          func_0x000107c288f4(lVar9 + 0x3d0,lVar9);
          lVar13 = param_1;
          if (lVar7 == 0) goto LAB_1087342b0;
          lVar7 = lVar7 + -0x3d0;
        } while (*(long *)(lVar9 + -0x3b0) < alStack_400[0]);
        lVar13 = param_1 + lVar7 + 0x3d0;
LAB_1087342b0:
        func_0x000107c288f4(lVar13,&lStack_420);
        func_0x000107c288d0(&lStack_420);
      }
      lVar4 = lVar4 + 0x3d0;
      lVar7 = lVar14;
    } while( true );
  }
  uVar10 = param_3 >> 1;
  lVar4 = param_1 + uVar10 * 0x3d0;
  if (param_5 < (long)param_3) {
    func_0x000108738e54(param_1,lVar4,uVar10);
    func_0x000108738e54(lVar4,param_2,param_3 - uVar10);
    lVar9 = param_3 - uVar10;
    lVar7 = param_2;
    lVar14 = param_4;
    while( true ) {
      if (lVar9 == 0) {
        return;
      }
      lStack_88 = lVar14;
      if (lVar9 <= param_5 || (long)uVar10 <= param_5) break;
      lVar14 = 0;
      lVar13 = -uVar10;
      while( true ) {
        if (lVar13 == 0) {
          return;
        }
        lVar1 = param_1 + lVar14;
        if (*(long *)(lVar1 + 0x20) < *(long *)(lVar4 + 0x20)) break;
        lVar14 = lVar14 + 0x3d0;
        lVar13 = lVar13 + 1;
      }
      lStack_90 = lVar7;
      if (-lVar13 < lVar9) {
        lVar5 = lVar9 / 2;
        lVar15 = lVar4 + lVar5 * 0x3d0;
        lVar12 = lVar1;
        uVar10 = ((lVar4 - param_1) - lVar14) / 0x3d0;
        while (uVar10 != 0) {
          lVar7 = lVar12 + (uVar10 >> 1) * 0x3d0;
          uVar2 = uVar10 + (uVar10 >> 1 ^ 0xffffffffffffffff);
          uVar10 = uVar10 >> 1;
          if (*(long *)(lVar15 + 0x20) <= *(long *)(lVar7 + 0x20)) {
            lVar12 = lVar7 + 0x3d0;
            uVar10 = uVar2;
          }
        }
        uVar10 = ((lVar12 - param_1) - lVar14) / 0x3d0;
      }
      else {
        if (lVar13 == -1) {
          param_1 = param_1 + lVar14;
          goto code_r0x00010865f20c;
        }
        uVar10 = -lVar13 / 2;
        lVar12 = param_1 + uVar10 * 0x3d0 + lVar14;
        lVar5 = lVar4;
        uVar2 = (lVar7 - lVar4) / 0x3d0;
        while (lVar15 = lVar5, uVar2 != 0) {
          uVar6 = uVar2 >> 1;
          lVar7 = lVar15 + uVar6 * 0x3d0;
          lVar5 = lVar7 + 0x3d0;
          uVar2 = uVar2 + (uVar2 >> 1 ^ 0xffffffffffffffff);
          if (*(long *)(lVar7 + 0x20) <= *(long *)(lVar12 + 0x20)) {
            lVar5 = lVar15;
            uVar2 = uVar6;
          }
        }
        lVar5 = (lVar15 - lVar4) / 0x3d0;
      }
      lVar7 = lVar15;
      if ((lVar12 != lVar4) && (lVar3 = lVar4, lVar7 = lVar12, lVar4 != lVar15)) {
        while( true ) {
          lStack_98 = param_5;
          lStack_a0 = lVar9;
          lStack_a8 = lVar5;
          uStack_b0 = uVar10;
          lVar11 = lVar3;
          func_0x000108738730();
          FUN_10865f20c();
          lVar7 = lVar7 + 0x3d0;
          lVar4 = lVar4 + 0x3d0;
          uVar10 = uStack_b0;
          lVar5 = lStack_a8;
          param_5 = lStack_98;
          lVar9 = lStack_a0;
          if (lVar4 == lVar15) break;
          lVar3 = lVar4;
          if (lVar7 != lVar11) {
            lVar3 = lVar11;
          }
        }
        lVar3 = lVar11;
        lVar4 = lVar7;
        if (lVar7 != lVar11) {
          do {
            while( true ) {
              lVar8 = lVar3;
              FUN_10865f20c(lVar4,lVar11);
              lVar4 = lVar4 + 0x3d0;
              lVar11 = lVar11 + 0x3d0;
              if (lVar11 == lVar15) break;
              lVar3 = lVar11;
              if (lVar4 != lVar8) {
                lVar3 = lVar8;
              }
            }
            uVar10 = uStack_b0;
            lVar5 = lStack_a8;
            param_5 = lStack_98;
            lVar9 = lStack_a0;
            lVar3 = lVar8;
            lVar11 = lVar8;
          } while (lVar4 != lVar8);
        }
      }
      if ((long)(uVar10 + lVar5) < (long)((lVar9 - (uVar10 + lVar5)) - lVar13)) {
        FUN_108734640(lVar1,lVar12,lVar7,uVar10,lVar5,lStack_88);
        uVar10 = -(uVar10 + lVar13);
        lVar9 = lVar9 - lVar5;
        param_1 = lVar7;
        lVar4 = lVar15;
        lVar7 = lStack_90;
        lVar14 = lStack_88;
      }
      else {
        FUN_108734640(lVar7,lVar15,lStack_90,-(uVar10 + lVar13),lVar9 - lVar5,lStack_88);
        param_1 = param_1 + lVar14;
        lVar9 = lVar5;
        lVar4 = lVar12;
        lVar14 = lStack_88;
      }
    }
    puStack_78 = &uStack_70;
    uStack_70 = 0;
    lVar13 = lVar14;
    lStack_80 = lVar14;
    if (lVar9 < (long)uVar10) {
      while (lVar9 = lVar14, lVar4 != lVar7) {
        func_0x000107c28918(lVar14);
        func_0x000108739248();
      }
      while (lVar7 = lVar7 + -0x3d0, lVar9 != lVar14) {
        if (lVar4 == param_1) goto LAB_1087349dc;
        lVar13 = lVar9;
        lVar12 = lVar4 + -0x3d0;
        lVar1 = lVar4 + -0x3d0;
        if (*(long *)(lVar9 + -0x3b0) <= *(long *)(lVar4 + -0x3b0)) {
          lVar13 = lVar9 + -0x3d0;
          lVar12 = lVar4;
          lVar1 = lVar9 + -0x3d0;
        }
        lVar4 = lVar12;
        func_0x000107c288f4(lVar7,lVar1);
        lVar9 = lVar13;
      }
    }
    else {
      while (param_1 != lVar4) {
        func_0x000108738730();
        func_0x000107c28918();
        func_0x000108739248();
        lVar13 = lVar13 + 0x3d0;
      }
      while (lVar13 != lVar14) {
        if (lVar4 == lVar7) {
          FUN_108706bfc(&uStack_61,lVar14,lVar13,param_1);
          break;
        }
        if (*(long *)(lVar14 + 0x20) < *(long *)(lVar4 + 0x20)) {
          func_0x000107c288f4(param_1,lVar4);
          lVar4 = lVar4 + 0x3d0;
        }
        else {
          func_0x000107c288f4(param_1,lVar14);
          lVar14 = lVar14 + 0x3d0;
        }
        param_1 = param_1 + 0x3d0;
      }
    }
    goto LAB_1087349fc;
  }
  uStack_428 = 0;
  puStack_418 = &uStack_428;
  lStack_420 = param_4;
  FUN_1087343ec(param_1,lVar4,uVar10,param_4);
  lVar7 = param_4 + uVar10 * 0x3d0;
  uStack_428 = uVar10;
  FUN_1087343ec(lVar4,param_2,param_3 - uVar10,lVar7);
  lVar14 = param_4 + param_3 * 0x3d0;
  lVar4 = lVar7;
  uStack_428 = param_3;
  while (param_4 != lVar7) {
    if (lVar4 == lVar14) goto LAB_108734390;
    if (*(long *)(param_4 + 0x20) < *(long *)(lVar4 + 0x20)) {
      func_0x000107c288f4(param_1,lVar4);
      lVar4 = lVar4 + 0x3d0;
    }
    else {
      func_0x000107c288f4(param_1,param_4);
      param_4 = param_4 + 0x3d0;
    }
    param_1 = param_1 + 0x3d0;
  }
  for (; lVar4 != lVar14; lVar4 = lVar4 + 0x3d0) {
    func_0x000108738df0();
    func_0x000107c288f4();
  }
LAB_108734398:
  FUN_108734a5c(&lStack_420);
  return;
LAB_108734390:
  for (; param_4 != lVar7; param_4 = param_4 + 0x3d0) {
    func_0x000108738be4();
    func_0x000107c288f4();
  }
  goto LAB_108734398;
LAB_1087349dc:
  while (lVar9 != lVar14) {
    lVar9 = lVar9 + -0x3d0;
    func_0x000107c288f4(lVar7,lVar9);
    lVar7 = lVar7 + -0x3d0;
  }
LAB_1087349fc:
  FUN_108734a5c(&lStack_80);
  return;
}



/* Entry: 1087343b4; end: 1087343cb;  */

void FUN_1087343b4(long *param_1,long param_2)

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



/* Entry: 1087343cc; end: 1087343eb;  */

void FUN_1087343cc(void)

{
  func_0x00010873925c();
  FUN_1087343b4();
  return;
}



/* Entry: 1087343ec; end: 10873463f;  */

/* WARNING: Possible PIC construction at 0x0001087344a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087344dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108734520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087345b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087345c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108734604: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087345e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108734470: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108734480: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108734474) */
/* WARNING: Removing unreachable block (ram,0x0001087345e8) */
/* WARNING: Removing unreachable block (ram,0x000108734608) */
/* WARNING: Removing unreachable block (ram,0x0001087345cc) */
/* WARNING: Removing unreachable block (ram,0x0001087345bc) */
/* WARNING: Removing unreachable block (ram,0x0001087345d0) */
/* WARNING: Removing unreachable block (ram,0x000108734524) */
/* WARNING: Removing unreachable block (ram,0x0001087344e0) */
/* WARNING: Removing unreachable block (ram,0x0001087344ec) */
/* WARNING: Removing unreachable block (ram,0x00010873452c) */
/* WARNING: Removing unreachable block (ram,0x000108734504) */
/* WARNING: Removing unreachable block (ram,0x000108734514) */
/* WARNING: Removing unreachable block (ram,0x000108734530) */
/* WARNING: Removing unreachable block (ram,0x000108734538) */
/* WARNING: Removing unreachable block (ram,0x0001087344ac) */
/* WARNING: Removing unreachable block (ram,0x0001087344b8) */
/* WARNING: Removing unreachable block (ram,0x0001087344c4) */
/* WARNING: Removing unreachable block (ram,0x00010873451c) */
/* WARNING: Removing unreachable block (ram,0x0001087344dc) */
/* WARNING: Removing unreachable block (ram,0x000108734484) */

undefined8 ****
FUN_1087343ec(undefined8 ****param_1,undefined8 ****param_2,ulong param_3,undefined8 ****param_4)

{
  undefined1 *puVar1;
  undefined8 ****ppppuVar2;
  ulong uVar3;
  undefined8 ****unaff_x19;
  undefined8 ****unaff_x20;
  undefined8 ****unaff_x21;
  undefined1 *puVar4;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  undefined8 ***pppuVar7;
  undefined8 uVar8;
  undefined8 ***pppuVar9;
  undefined8 ***pppuVar10;
  undefined8 uVar11;
  undefined8 ***pppuVar12;
  undefined1 auStack_70 [8];
  undefined8 ***pppuStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  puVar1 = auStack_70;
  puVar4 = &stack0xfffffffffffffff0;
  if (param_3 == 0) {
    return param_1;
  }
  uVar3 = param_3;
  func_0x000108738adc();
  if (uVar3 == 2) {
    puStack_60 = &uStack_58;
    uStack_58 = 0;
    param_2 = unaff_x20 + -0x7a;
    ppppuVar2 = unaff_x20 + -0x76;
    unaff_x20 = unaff_x21;
    if ((long)*ppppuVar2 <= (long)unaff_x21[4]) {
      unaff_x20 = param_2;
      param_2 = unaff_x21;
    }
    unaff_x30 = 0x108734474;
    param_1 = param_4;
  }
  else if (param_3 == 1) {
    func_0x000108738df0();
    puVar1 = (undefined1 *)register0x00000008;
    param_4 = unaff_x19;
    puVar4 = unaff_x29;
  }
  else {
    pppuStack_68 = param_4;
    if ((long)param_3 < 9) {
      if (unaff_x21 == unaff_x20) {
        return param_1;
      }
      puStack_60 = &uStack_58;
      uStack_58 = 0;
      func_0x000108738df0();
      unaff_x30 = 0x1087344ac;
      puVar1 = auStack_70;
    }
    else {
      param_2 = unaff_x21 + (param_3 >> 1) * 0x7a;
      func_0x000108738730();
      FUN_108734130();
      param_1 = param_2;
      ppppuVar2 = unaff_x20;
      FUN_108734130();
      puStack_60 = &uStack_58;
      uStack_58 = 0;
      if (unaff_x21 == param_2) {
        if (param_2 == unaff_x20) {
LAB_10873461c:
          pppuStack_68 = (undefined8 ***)0x0;
          ppppuVar2 = &pppuStack_68;
          FUN_108734a5c(ppppuVar2);
          return ppppuVar2;
        }
        unaff_x30 = 0x1087345e8;
        puVar1 = auStack_70;
        param_1 = param_4;
      }
      else if (param_2 == unaff_x20) {
        if (unaff_x21 == param_2) goto LAB_10873461c;
        func_0x000108738df0();
        unaff_x30 = 0x108734608;
        puVar1 = auStack_70;
        param_2 = ppppuVar2;
      }
      else if ((long)unaff_x21[4] < (long)param_2[4]) {
        unaff_x30 = 0x1087345bc;
        puVar1 = auStack_70;
        param_1 = param_4;
      }
      else {
        unaff_x30 = 0x1087345cc;
        puVar1 = auStack_70;
        param_1 = param_4;
        param_2 = unaff_x21;
      }
    }
  }
  *(undefined8 *****)(puVar1 + -0x20) = unaff_x20;
  *(undefined8 *****)(puVar1 + -0x18) = param_4;
  *(undefined1 **)(puVar1 + -0x10) = puVar4;
  *(undefined8 *)(puVar1 + -8) = unaff_x30;
  func_0x0001006564ac();
  func_0x000100656f3c();
  pppuVar6 = param_2[4];
  pppuVar5 = param_2[3];
  pppuVar9 = param_2[6];
  pppuVar7 = param_2[5];
  uVar11 = *(undefined8 *)((long)param_2 + 0x39);
  uVar8 = *(undefined8 *)((long)param_2 + 0x31);
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined8 *)((long)param_1 + 0x39) = uVar11;
  *(undefined8 *)((long)param_1 + 0x31) = uVar8;
  param_1[4] = pppuVar6;
  param_1[3] = pppuVar5;
  param_1[6] = pppuVar9;
  param_1[5] = pppuVar7;
  *(undefined1 *)(param_1 + 0xc) = 0;
  if (*(char *)(param_2 + 0xc) == '\x01') {
    pppuVar6 = unaff_x20[10];
    pppuVar5 = unaff_x20[9];
    param_1[0xb] = unaff_x20[0xb];
    param_1[10] = pppuVar6;
    param_1[9] = pppuVar5;
    unaff_x20[10] = (undefined8 ***)0x0;
    unaff_x20[0xb] = (undefined8 ***)0x0;
    unaff_x20[9] = (undefined8 ***)0x0;
    *(undefined1 *)(param_4 + 0xc) = 1;
  }
  func_0x000100656f60();
  func_0x000100656f88();
  func_0x000100656fb4(param_4 + 0x13,unaff_x20 + 0x13);
  *(undefined1 *)(param_4 + 0x16) = *(undefined1 *)(unaff_x20 + 0x16);
  param_4[0x17] = (undefined8 ***)0x0;
  param_4[0x19] = (undefined8 ***)0x0;
  param_4[0x18] = (undefined8 ***)0x0;
  pppuVar5 = unaff_x20[0x17];
  param_4[0x18] = unaff_x20[0x18];
  param_4[0x17] = pppuVar5;
  param_4[0x19] = unaff_x20[0x19];
  unaff_x20[0x19] = (undefined8 ***)0x0;
  unaff_x20[0x18] = (undefined8 ***)0x0;
  unaff_x20[0x17] = (undefined8 ***)0x0;
  param_4[0x1c] = (undefined8 ***)0x0;
  param_4[0x1b] = (undefined8 ***)0x0;
  param_4[0x1a] = (undefined8 ***)0x0;
  pppuVar5 = unaff_x20[0x1a];
  param_4[0x1b] = unaff_x20[0x1b];
  param_4[0x1a] = pppuVar5;
  param_4[0x1c] = unaff_x20[0x1c];
  unaff_x20[0x1c] = (undefined8 ***)0x0;
  unaff_x20[0x1b] = (undefined8 ***)0x0;
  unaff_x20[0x1a] = (undefined8 ***)0x0;
  func_0x00010061fb2c(param_4 + 0x1d,unaff_x20 + 0x1d);
  pppuVar6 = unaff_x20[0x22];
  pppuVar5 = unaff_x20[0x21];
  pppuVar9 = unaff_x20[0x24];
  pppuVar7 = unaff_x20[0x23];
  *(undefined1 *)(param_4 + 0x25) = *(undefined1 *)(unaff_x20 + 0x25);
  param_4[0x22] = pppuVar6;
  param_4[0x21] = pppuVar5;
  param_4[0x24] = pppuVar9;
  param_4[0x23] = pppuVar7;
  func_0x00010061fb2c(param_4 + 0x26,unaff_x20 + 0x26);
  param_4[0x2c] = (undefined8 ***)0x0;
  param_4[0x2b] = (undefined8 ***)0x0;
  param_4[0x2a] = (undefined8 ***)0x0;
  pppuVar5 = unaff_x20[0x2a];
  param_4[0x2b] = unaff_x20[0x2b];
  param_4[0x2a] = pppuVar5;
  param_4[0x2c] = unaff_x20[0x2c];
  unaff_x20[0x2c] = (undefined8 ***)0x0;
  unaff_x20[0x2b] = (undefined8 ***)0x0;
  unaff_x20[0x2a] = (undefined8 ***)0x0;
  param_4[0x2f] = (undefined8 ***)0x0;
  param_4[0x2e] = (undefined8 ***)0x0;
  param_4[0x2d] = (undefined8 ***)0x0;
  param_4[0x2d] = unaff_x20[0x2d];
  pppuVar5 = unaff_x20[0x2e];
  param_4[0x2f] = unaff_x20[0x2f];
  param_4[0x2e] = pppuVar5;
  unaff_x20[0x2f] = (undefined8 ***)0x0;
  unaff_x20[0x2e] = (undefined8 ***)0x0;
  unaff_x20[0x2d] = (undefined8 ***)0x0;
  param_4[0x32] = (undefined8 ***)0x0;
  param_4[0x31] = (undefined8 ***)0x0;
  param_4[0x30] = (undefined8 ***)0x0;
  pppuVar5 = unaff_x20[0x30];
  param_4[0x31] = unaff_x20[0x31];
  param_4[0x30] = pppuVar5;
  param_4[0x32] = unaff_x20[0x32];
  unaff_x20[0x32] = (undefined8 ***)0x0;
  unaff_x20[0x31] = (undefined8 ***)0x0;
  unaff_x20[0x30] = (undefined8 ***)0x0;
  param_4[0x35] = (undefined8 ***)0x0;
  param_4[0x34] = (undefined8 ***)0x0;
  param_4[0x33] = (undefined8 ***)0x0;
  param_4[0x33] = unaff_x20[0x33];
  pppuVar5 = unaff_x20[0x34];
  param_4[0x35] = unaff_x20[0x35];
  param_4[0x34] = pppuVar5;
  unaff_x20[0x35] = (undefined8 ***)0x0;
  unaff_x20[0x34] = (undefined8 ***)0x0;
  unaff_x20[0x33] = (undefined8 ***)0x0;
  param_4[0x38] = (undefined8 ***)0x0;
  param_4[0x37] = (undefined8 ***)0x0;
  param_4[0x36] = (undefined8 ***)0x0;
  pppuVar5 = unaff_x20[0x36];
  param_4[0x37] = unaff_x20[0x37];
  param_4[0x36] = pppuVar5;
  param_4[0x38] = unaff_x20[0x38];
  unaff_x20[0x38] = (undefined8 ***)0x0;
  unaff_x20[0x37] = (undefined8 ***)0x0;
  unaff_x20[0x36] = (undefined8 ***)0x0;
  func_0x0001006572fc();
  func_0x00010061fb2c(param_4 + 0x47,unaff_x20 + 0x47);
  pppuVar6 = unaff_x20[0x4c];
  pppuVar5 = unaff_x20[0x4b];
  *(undefined1 *)(param_4 + 0x4d) = *(undefined1 *)(unaff_x20 + 0x4d);
  param_4[0x4c] = pppuVar6;
  param_4[0x4b] = pppuVar5;
  func_0x00010061fb2c(param_4 + 0x4e,unaff_x20 + 0x4e);
  func_0x00010061fb2c(param_4 + 0x52,unaff_x20 + 0x52);
  func_0x00010065730c();
  func_0x00010061fb2c(param_4 + 100,unaff_x20 + 100);
  pppuVar6 = unaff_x20[0x69];
  pppuVar5 = unaff_x20[0x68];
  pppuVar9 = unaff_x20[0x6b];
  pppuVar7 = unaff_x20[0x6a];
  pppuVar12 = unaff_x20[0x6d];
  pppuVar10 = unaff_x20[0x6c];
  *(undefined1 *)(param_4 + 0x6e) = *(undefined1 *)(unaff_x20 + 0x6e);
  param_4[0x6b] = pppuVar9;
  param_4[0x6a] = pppuVar7;
  param_4[0x6d] = pppuVar12;
  param_4[0x6c] = pppuVar10;
  param_4[0x69] = pppuVar6;
  param_4[0x68] = pppuVar5;
  param_4[0x6f] = (undefined8 ***)0x0;
  param_4[0x71] = (undefined8 ***)0x0;
  param_4[0x70] = (undefined8 ***)0x0;
  param_4[0x6f] = unaff_x20[0x6f];
  pppuVar5 = unaff_x20[0x70];
  param_4[0x71] = unaff_x20[0x71];
  param_4[0x70] = pppuVar5;
  unaff_x20[0x71] = (undefined8 ***)0x0;
  unaff_x20[0x70] = (undefined8 ***)0x0;
  unaff_x20[0x6f] = (undefined8 ***)0x0;
  func_0x00010061fb2c(param_4 + 0x72,unaff_x20 + 0x72);
  pppuVar6 = unaff_x20[0x77];
  pppuVar5 = unaff_x20[0x76];
  uVar8 = *(undefined8 *)((long)unaff_x20 + 0x3b9);
  *(undefined8 *)((long)param_4 + 0x3c1) = *(undefined8 *)((long)unaff_x20 + 0x3c1);
  *(undefined8 *)((long)param_4 + 0x3b9) = uVar8;
  param_4[0x77] = pppuVar6;
  param_4[0x76] = pppuVar5;
  return param_4;
}



/* Entry: 108734640; end: 108734a5b;  */

void FUN_108734640(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  long param_7)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 unaff_x19;
  long lVar7;
  undefined8 unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_400 [848];
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_61;
  
  lVar5 = param_3;
  lVar12 = param_6;
  while( true ) {
    if (param_5 == 0) {
      return;
    }
    lStack_88 = lVar12;
    if (param_5 <= param_7 || param_4 <= param_7) break;
    lVar12 = 0;
    lVar11 = -param_4;
    while( true ) {
      if (lVar11 == 0) {
        return;
      }
      lVar1 = param_1 + lVar12;
      if (*(long *)(lVar1 + 0x20) < *(long *)(param_2 + 0x20)) break;
      lVar12 = lVar12 + 0x3d0;
      lVar11 = lVar11 + 1;
    }
    lStack_90 = lVar5;
    if (-lVar11 < param_5) {
      lVar6 = param_5 / 2;
      lVar13 = param_2 + lVar6 * 0x3d0;
      lVar9 = lVar1;
      uVar2 = ((param_2 - param_1) - lVar12) / 0x3d0;
      while (uVar2 != 0) {
        lVar5 = lVar9 + (uVar2 >> 1) * 0x3d0;
        uVar4 = uVar2 + (uVar2 >> 1 ^ 0xffffffffffffffff);
        uVar2 = uVar2 >> 1;
        if (*(long *)(lVar13 + 0x20) <= *(long *)(lVar5 + 0x20)) {
          lVar9 = lVar5 + 0x3d0;
          uVar2 = uVar4;
        }
      }
      param_4 = ((lVar9 - param_1) - lVar12) / 0x3d0;
    }
    else {
      if (lVar11 == -1) {
        func_0x000107c31e1c(param_1 + lVar12,param_2);
        func_0x000107c28918(auStack_400,unaff_x20);
        func_0x000107c31e34();
        func_0x000107c288f4();
        func_0x000107c288f4(unaff_x19,auStack_400);
        func_0x000107c31e58();
        return;
      }
      param_4 = -lVar11 / 2;
      lVar9 = param_1 + param_4 * 0x3d0 + lVar12;
      uVar2 = (lVar5 - param_2) / 0x3d0;
      lVar5 = param_2;
      while (lVar13 = lVar5, uVar2 != 0) {
        uVar4 = uVar2 >> 1;
        lVar6 = lVar13 + uVar4 * 0x3d0;
        uVar2 = uVar2 + (uVar2 >> 1 ^ 0xffffffffffffffff);
        lVar5 = lVar6 + 0x3d0;
        if (*(long *)(lVar6 + 0x20) <= *(long *)(lVar9 + 0x20)) {
          uVar2 = uVar4;
          lVar5 = lVar13;
        }
      }
      lVar6 = (lVar13 - param_2) / 0x3d0;
    }
    lVar5 = lVar13;
    if ((lVar9 != param_2) && (lVar10 = param_2, lVar5 = lVar9, param_2 != lVar13)) {
      while( true ) {
        lStack_98 = param_7;
        lStack_a0 = param_5;
        lStack_a8 = lVar6;
        lStack_b0 = param_4;
        lVar8 = lVar10;
        func_0x000108738730();
        FUN_10865f20c();
        lVar5 = lVar5 + 0x3d0;
        param_2 = param_2 + 0x3d0;
        param_4 = lStack_b0;
        lVar6 = lStack_a8;
        param_7 = lStack_98;
        param_5 = lStack_a0;
        if (param_2 == lVar13) break;
        lVar10 = param_2;
        if (lVar5 != lVar8) {
          lVar10 = lVar8;
        }
      }
      lVar3 = lVar8;
      lVar10 = lVar5;
      if (lVar5 != lVar8) {
        do {
          while( true ) {
            lVar7 = lVar3;
            FUN_10865f20c(lVar10,lVar8);
            lVar10 = lVar10 + 0x3d0;
            lVar8 = lVar8 + 0x3d0;
            if (lVar8 == lVar13) break;
            lVar3 = lVar8;
            if (lVar10 != lVar7) {
              lVar3 = lVar7;
            }
          }
          param_4 = lStack_b0;
          lVar6 = lStack_a8;
          param_7 = lStack_98;
          param_5 = lStack_a0;
          lVar3 = lVar7;
          lVar8 = lVar7;
        } while (lVar10 != lVar7);
      }
    }
    if (param_4 + lVar6 < (param_5 - (param_4 + lVar6)) - lVar11) {
      FUN_108734640(lVar1,lVar9,lVar5,param_4,lVar6,lStack_88);
      param_4 = -(param_4 + lVar11);
      param_5 = param_5 - lVar6;
      param_1 = lVar5;
      param_2 = lVar13;
      lVar5 = lStack_90;
      lVar12 = lStack_88;
    }
    else {
      FUN_108734640(lVar5,lVar13,lStack_90,-(param_4 + lVar11),param_5 - lVar6,lStack_88);
      param_1 = param_1 + lVar12;
      param_5 = lVar6;
      param_2 = lVar9;
      lVar12 = lStack_88;
    }
  }
  puStack_78 = &uStack_70;
  uStack_70 = 0;
  lVar11 = lVar12;
  lStack_80 = lVar12;
  if (param_5 < param_4) {
    while (param_2 != lVar5) {
      func_0x000107c28918(lVar12);
      func_0x000108739248();
    }
    while (lVar5 = lVar5 + -0x3d0, lVar11 != lVar12) {
      if (param_2 == param_1) goto LAB_1087349dc;
      lVar1 = lVar11;
      lVar13 = param_2 + -0x3d0;
      lVar9 = param_2 + -0x3d0;
      if (*(long *)(lVar11 + -0x3b0) <= *(long *)(param_2 + -0x3b0)) {
        lVar1 = lVar11 + -0x3d0;
        lVar13 = param_2;
        lVar9 = lVar11 + -0x3d0;
      }
      param_2 = lVar13;
      func_0x000107c288f4(lVar5,lVar9);
      lVar11 = lVar1;
    }
  }
  else {
    while (param_1 != param_2) {
      func_0x000108738730();
      func_0x000107c28918();
      func_0x000108739248();
      lVar11 = lVar11 + 0x3d0;
    }
    while (lVar11 != lVar12) {
      if (param_2 == lVar5) {
        FUN_108706bfc(&uStack_61,lVar12,lVar11,param_1);
        break;
      }
      if (*(long *)(lVar12 + 0x20) < *(long *)(param_2 + 0x20)) {
        func_0x000107c288f4(param_1,param_2);
        param_2 = param_2 + 0x3d0;
      }
      else {
        func_0x000107c288f4(param_1,lVar12);
        lVar12 = lVar12 + 0x3d0;
      }
      param_1 = param_1 + 0x3d0;
    }
  }
LAB_1087349fc:
  FUN_108734a5c(&lStack_80);
  return;
LAB_1087349dc:
  while (lVar11 != lVar12) {
    lVar11 = lVar11 + -0x3d0;
    func_0x000107c288f4(lVar5,lVar11);
    lVar5 = lVar5 + -0x3d0;
  }
  goto LAB_1087349fc;
}



/* Entry: 108734a5c; end: 108734aab;  */

long * FUN_108734a5c(long *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    puVar3 = (ulong *)param_1[1];
    for (uVar2 = 0; uVar2 < *puVar3; uVar2 = uVar2 + 1) {
      func_0x000107c288d0(lVar1);
      lVar1 = lVar1 + 0x3d0;
    }
  }
  return param_1;
}



/* Entry: 108734aac; end: 108734afb;  */

undefined8 FUN_108734aac(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0xa8;
  __Znwm();
  func_0x00010873848c();
  func_0x000108738d9c(&PTR_FUN_110a69c28);
  *(undefined1 *)(lVar1 + 0xa0) = 0;
  func_0x0001087384d4();
  func_0x00010086e6a0();
  func_0x00010873847c();
  return param_1;
}



/* Entry: 108734afc; end: 108734aff;  */

undefined8 * FUN_108734afc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108734b00; end: 108734b13;  */

void FUN_108734b00(void)

{
  func_0x000107c31514();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108734b14; end: 108734b37;  */

void FUN_108734b14(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x180) = 0;
  return;
}



/* Entry: 108734b38; end: 108734b87;  */

undefined8 FUN_108734b38(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0xb8;
  __Znwm();
  func_0x00010873848c();
  func_0x000108738d9c(&PTR_FUN_110a69c80);
  *(undefined1 *)(lVar1 + 0xb0) = 0;
  func_0x0001087384d4();
  func_0x00010086e6a0();
  func_0x00010873847c();
  return param_1;
}



/* Entry: 108734b88; end: 108734b8b;  */

undefined8 * FUN_108734b88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a69c80;
  func_0x000104be55dc(param_1 + 0x13);
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108734b8c; end: 108734b9f;  */

void FUN_108734b8c(void)

{
  FUN_108734ba0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108734ba0; end: 108734bcb;  */

undefined8 * FUN_108734ba0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a69c80;
  func_0x000104be55dc(param_1 + 0x13);
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108734bcc; end: 108734c37;  */

undefined8 * FUN_108734bcc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  param_1[1] = 0;
  if (*(char *)(param_1 + 8) != '\0') {
    FUN_108734c9c(param_1 + 2);
  }
  func_0x000108731500((ulong)&uStack_60 | 8);
  uVar1 = *param_1;
  *param_1 = 0;
  func_0x000107c31408(uVar1);
  func_0x000108731500(param_1 + 2);
  return param_1;
}



/* Entry: 108734c38; end: 108734c9b;  */

long FUN_108734c38(long param_1,long param_2)

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
      FUN_1089263f8(param_1);
    }
    else {
      func_0x0001089263c0(param_1);
    }
  }
  return param_1;
}



/* Entry: 108734c9c; end: 108734cdb;  */

void FUN_108734c9c(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_108926210();
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}



/* Entry: 108734cdc; end: 108734ce7;  */

undefined8 * FUN_108734cdc(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110a97ea0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_108734c38(param_1,param_2);
  return param_1;
}



/* Entry: 108734ce8; end: 108734d27;  */

undefined8 * FUN_108734ce8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110a97ea0;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_108734c38(param_1,param_3);
  return param_1;
}



/* Entry: 108734d28; end: 108734d77;  */

void FUN_108734d28(long param_1)

{
  func_0x000107c28834(param_1 + 0x20);
  func_0x000107c33084();
  func_0x000107c3308c();
  func_0x000107c330d4();
  func_0x000107c33080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108734d78; end: 108734dcb;  */

void FUN_108734d78(void)

{
  func_0x0001087381e8();
  func_0x000107c3308c();
  func_0x000107c33080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108734dcc; end: 108734f53;  */

void FUN_108734dcc(void)

{
  uint uVar1;
  code *pcVar2;
  undefined1 uVar3;
  long *plVar4;
  uint extraout_w8;
  ulong extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar5;
  long unaff_x19;
  long lVar6;
  
  func_0x000108739298();
  func_0x000107c331a0();
  if ((extraout_x8 & 1) != 0) {
LAB_108734e68:
    func_0x000107c331d4();
    func_0x000107c330bc();
    func_0x000107c330d4();
    func_0x000107c3308c();
    func_0x000107c33080();
    func_0x000107c33084();
    func_0x000107c33090();
    return;
  }
  plVar4 = (long *)(unaff_x19 + 0x30);
  func_0x000107c28870();
  lVar6 = *plVar4;
  func_0x000107c330bc();
  func_0x000107c330c0();
  if (lVar6 == 2) {
    func_0x000108738498();
    func_0x000108738368();
    func_0x000108738f18();
    func_0x0001087383dc();
    func_0x000108738828();
  }
  else {
    uVar3 = lVar6 == 1;
    if (!(bool)uVar3) {
      *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x19 + 0x20);
      do {
        func_0x000107c33020();
      } while (extraout_w10 != 0);
      func_0x000107c33078();
      if ((extraout_w8 >> 1 & 1) == 0) {
        func_0x000107c3322c();
        func_0x000107c32ffc();
        if (*plVar4 == 0) {
          func_0x000107c3a5c0();
        }
        func_0x000107c330d0();
        plVar4 = extraout_x8_00;
        do {
          if (*plVar4 == 0) {
            func_0x000107c33024();
            plVar4 = extraout_x8_02;
            uVar1 = extraout_w10_01;
            uVar5 = extraout_w11_00;
          }
          else {
            func_0x000108738318();
            plVar4 = extraout_x8_01;
            uVar1 = extraout_w10_00;
            uVar5 = extraout_w11;
          }
          if ((uVar5 & 1) != 0) {
            func_0x000107c33010();
            if ((bool)uVar3) {
              func_0x000108738134();
              func_0x0001087380a0();
              func_0x000108738020();
            }
            func_0x000107c32fe0();
            return;
          }
        } while ((uVar1 >> 1 & 1) == 0);
      }
      goto LAB_108734e68;
    }
    func_0x000108738498();
    func_0x000108738f04();
    func_0x000108739138();
    func_0x000108738828();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x108734ee4);
  (*pcVar2)();
}



/* Entry: 108734f54; end: 108734f97;  */

void FUN_108734f54(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    lVar1 = param_1 + 0x38;
    func_0x000107c27f9c(param_1 + 0x30);
  }
  func_0x000107c27f9c(lVar1);
  func_0x000107c3308c();
  func_0x000107c33080();
  func_0x000107c33084();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108734f98; end: 108735023;  */

void FUN_108734f98(void)

{
  uint extraout_w8;
  
  func_0x000107c33130();
  if ((extraout_w8 & 1) == 0) {
    func_0x000107c33118();
  }
  else {
    func_0x000107c33118();
  }
  func_0x000107c33084();
  func_0x000107c3308c();
  func_0x000107c330d8();
  func_0x000107c330d4();
  func_0x000107c33080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108735024; end: 10873506b;  */

void FUN_108735024(long param_1)

{
  long lVar1;
  char cVar2;
  
  cVar2 = *(char *)(param_1 + 0x40);
  func_0x000107c27f9c(param_1 + 0x20);
  func_0x000107c3308c();
  lVar1 = 0x38;
  if (cVar2 == '\0') {
    lVar1 = 0x30;
  }
  func_0x000107c27f9c(param_1 + lVar1);
  func_0x000107c33080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10873506c; end: 108735513;  */

void FUN_10873506c(long *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined4 uVar4;
  long *plVar5;
  long *plVar6;
  uint extraout_w8;
  long extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  code *extraout_x8_05;
  long lVar7;
  code *extraout_x8_06;
  long extraout_x8_07;
  uint extraout_w9;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar8;
  long unaff_x22;
  undefined8 uVar9;
  long unaff_x25;
  long unaff_x27;
  undefined8 uStack_3c0;
  long lStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  ulong uStack_398;
  uint uStack_390;
  undefined1 uStack_388;
  undefined1 uStack_384;
  byte bStack_1e4;
  char cStack_1e0;
  long *aplStack_1d8 [3];
  undefined1 auStack_1c0 [280];
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_68;
  undefined1 uStack_60;
  undefined1 uStack_58;
  undefined1 uStack_50;
  undefined4 uStack_4c;
  undefined1 uStack_18;
  undefined1 uStack_10;
  undefined1 uStack_c;
  
  func_0x000107c33218();
  if ((*(byte *)(param_1 + 0x112) & 1) == 0) {
    plVar5 = param_1;
    func_0x000107c33118();
    func_0x000107c33084();
    func_0x000107c3310c();
    func_0x000107c33270();
    (**(code **)(extraout_x8 + 0x40))(param_1 + 0x82);
    func_0x000108738464(param_1[0x82]);
    do {
      func_0x000107c33020();
    } while (extraout_w10 != 0);
    func_0x000107c33048();
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x112) = 1;
      func_0x000107c32ffc();
      if (*plVar5 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x000107c330d0();
      plVar5 = extraout_x8_00;
      lVar7 = uStack_3b0;
      do {
        uStack_3b0 = lVar7;
        if (*plVar5 == 0) {
          func_0x000107c33024();
          plVar5 = extraout_x8_02;
          uVar1 = extraout_w10_01;
          lVar7 = uStack_3b0;
          uVar8 = extraout_w11_00;
        }
        else {
          func_0x000108738318();
          plVar5 = extraout_x8_01;
          uVar1 = extraout_w10_00;
          lVar7 = uStack_3b0;
          uVar8 = extraout_w11;
        }
        if ((uVar8 & 1) != 0) {
          func_0x000107c33010();
          if ((bool)in_ZR) {
            func_0x000108738134();
            func_0x0001087380a0();
            func_0x000108738020();
          }
          func_0x000107c32fe0();
          return;
        }
        uStack_3b0._4_4_ = (undefined4)((ulong)lVar7 >> 0x20);
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x0001087385f8(param_1[4]);
  if ((extraout_w9 >> 5 & 1) == 0) {
    plVar5 = param_1 + 0x104;
    FUN_1087309ec(plVar5,param_1[4] + 0x98);
    func_0x000107c33084();
    func_0x000107c3310c();
    if ((int)param_1[0x10a] == 0) {
      uVar4 = (undefined4)*plVar5;
      FUN_108770c94();
      uStack_3b0 = CONCAT44(uStack_3b0._4_4_,uVar4);
      func_0x0001087384c8();
    }
    else {
      func_0x0001087390fc();
      func_0x000107c278b8(param_1 + 0x10b,&UNK_10f4b2a25);
      func_0x000108738a00();
      func_0x000108738a10();
      if ((int)param_1[0x10a] != 1) {
        func_0x00010563ab98();
        goto LAB_1087353d4;
      }
      func_0x0001087388f0();
      func_0x000108738770();
      for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
        func_0x0001087388d0();
        func_0x000107c29ee0(param_1 + 0x10e);
        func_0x000108738ea4(*(undefined8 *)(unaff_x25 + 0x120));
        if ((*(byte *)(param_1 + 0x81) & 1) == 0) {
          func_0x000108738d00();
          func_0x000108738604();
          uVar9 = *(undefined8 *)(lStack_3b8 + 0xb0);
          func_0x0001087389c8(&uStack_3b0);
          uStack_398 = uStack_398 & 0xffffffffffffff00;
          uStack_390 = uStack_390 & 0xffffff00;
          uStack_388 = 0;
          uStack_384 = 0;
          FUN_10885fef4(uVar9,&uStack_3b0);
          func_0x000108738674();
          func_0x0001087386d8(&uStack_3b0,*(undefined8 *)(lStack_3b8 + 0xb0),param_1 + 0x10e);
          uVar3 = cStack_1e0 == '\x01';
          if ((!(bool)uVar3) || ((bStack_1e4 & 1) != 0)) {
            func_0x0001087389c8(aplStack_1d8);
            func_0x0001087389e0();
            lVar7 = unaff_x27;
            if (!(bool)uVar3) {
              lVar7 = extraout_x8_03;
            }
            func_0x000107c28dc8(auStack_1c0,lVar7);
            func_0x000108738470(auStack_a8);
            func_0x0001087389e0();
            lVar7 = unaff_x27;
            if (!(bool)uVar3) {
              lVar7 = extraout_x8_04;
            }
            uStack_90 = *(undefined8 *)(lVar7 + 0xe8);
            uStack_88 = 1;
            uStack_68 = 0;
            uStack_60 = 0;
            uStack_58 = 0;
            uStack_80 = 0;
            uStack_78 = 0;
            uStack_70 = 0;
            uStack_50 = 1;
            uStack_4c = 2;
            uStack_18 = 0;
            uStack_10 = 0;
            uStack_c = 0;
            func_0x000108738980();
            FUN_10885ff98();
            func_0x000107c287e4(aplStack_1d8);
          }
          if (((int)param_1[0xe5] == 2) && (*(char *)(unaff_x25 + 0x48) == '\x01')) {
            func_0x0001087389d0(*(undefined8 *)(unaff_x25 + 0x110));
          }
          else {
            func_0x00010873899c();
            FUN_1088665d4();
          }
          func_0x000107c288c8(&uStack_3b0);
          func_0x000107c288d0(uStack_3c0);
        }
        func_0x000108738b3c();
        func_0x0001087389b0();
      }
      func_0x000107c330f8(*(undefined8 *)(param_1[0x111] + 0xd0));
      (*extraout_x8_05)();
      func_0x00010873899c();
      FUN_10886b7ac();
      func_0x000107c31428(param_1 + 0xfc);
      lVar7 = param_1[0x111];
      if ((*(byte *)(lVar7 + 0x168) & 1) == 0) {
        *(undefined1 *)(lVar7 + 0x168) = 1;
        lVar7 = param_1[0x111];
      }
      func_0x000108739268(lVar7);
      (*extraout_x8_06)();
      func_0x0001008527c4();
      uStack_3a0 = 0;
      uStack_398 = 0;
      uStack_3b0 = extraout_x8_07 + 0x10;
      uStack_3a8 = 0;
      uStack_390 = 0x1eb;
      plVar6 = &uStack_3b0;
      func_0x000107c33234(plVar6,0x191);
      func_0x0001008532f8(param_1[0x111]);
      aplStack_1d8[0] = plVar6;
      func_0x000107c33220();
      func_0x000107c330f4();
      func_0x0001087385d8();
      func_0x0001087389f8();
      func_0x000107c33058();
    }
    FUN_108730a74(plVar5);
    func_0x000107c33080();
    func_0x000107c33090();
    return;
  }
  func_0x0001087384e4(&uStack_3b0);
  func_0x000108739044();
LAB_1087353d4:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1087353d8);
  (*pcVar2)();
}



/* Entry: 108735514; end: 10873553b;  */

void FUN_108735514(void)

{
  long unaff_x19;
  
  func_0x0001087381e8();
  func_0x000107c27f9c(unaff_x19 + 0x410);
  func_0x000107c33080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10873553c; end: 108735643;  */

void FUN_10873553c(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  
  if ((*(byte *)(param_1 + 7) & 1) == 0) {
    plVar2 = param_1;
    func_0x000107c33118();
    func_0x000107c33084();
    func_0x000107c3319c();
    func_0x000107c29734();
    func_0x000107c3305c();
    do {
      func_0x000107c33020();
    } while (extraout_w10 != 0);
    func_0x000107c33048();
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 7) = 1;
      func_0x000107c32ffc();
      if (*plVar2 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x000107c330d0();
      plVar2 = extraout_x8;
      do {
        if (*plVar2 == 0) {
          func_0x000107c33024();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_01;
          uVar3 = extraout_w11_00;
        }
        else {
          func_0x000108738318();
          plVar2 = extraout_x8_00;
          uVar1 = extraout_w10_00;
          uVar3 = extraout_w11;
        }
        if ((uVar3 & 1) != 0) {
          func_0x000107c33010();
          if ((bool)in_ZR) {
            func_0x000108738134();
            func_0x0001087380a0();
            func_0x000108738020();
          }
          func_0x000107c32fe0();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x000107c33120();
  func_0x000107c3311c();
  func_0x000107c33084();
  func_0x000107c3308c();
  func_0x000107c33080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108735644; end: 108735683;  */

void FUN_108735644(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  if (*(char *)(param_1 + 0x38) == '\x01') {
    lVar1 = param_1 + 0x28;
    func_0x000107c27f9c(param_1 + 0x20);
  }
  func_0x000107c27f9c(lVar1);
  func_0x000107c33080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108735684; end: 1087356d3;  */

void FUN_108735684(undefined8 param_1)

{
  func_0x000100853300();
  func_0x000107c3311c();
  func_0x000107c33084();
  func_0x000107c3308c();
  func_0x000107c33080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087356d4; end: 10873580f;  */

void FUN_1087356d4(void)

{
  func_0x0001087381e8();
  func_0x000107c3308c();
  func_0x000107c33080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108735810; end: 1087359df;  */

void FUN_108735810(ulong *param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined1 in_ZR;
  ulong *puVar6;
  uint extraout_w8;
  ulong uVar7;
  long extraout_x8;
  long *extraout_x8_00;
  long *plVar8;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long extraout_x8_03;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  int extraout_w10_02;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar9;
  
  puVar6 = param_1;
  if ((param_1[7] & 1) != 0) goto LAB_1087358dc;
  while( true ) {
    pbVar1 = (byte *)(param_1[5] + 0xa8);
    do {
      bVar2 = *pbVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar4) {
        *pbVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while ((cVar3 != '\0') || ((bVar2 & 1) != 0));
    uVar7 = param_1[5];
    if ((*(long *)(uVar7 + 0xe8) == 0) && ((*(byte *)(uVar7 + 0xb8) & 1) != 0)) break;
    func_0x000108738794();
    puVar6 = (ulong *)(extraout_x8 + 0x10);
    func_0x000107c314e4();
    func_0x000108738ed0();
    func_0x000108739194();
    do {
      func_0x000107c33020();
    } while (extraout_w10 != 0);
    func_0x000107c33048();
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 7) = 1;
      func_0x000108738bac();
      if (*puVar6 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x0001087385ec();
      plVar8 = extraout_x8_00;
      do {
        if (*plVar8 == 0) {
          func_0x000107c33024();
          plVar8 = extraout_x8_02;
          uVar5 = extraout_w10_01;
          uVar9 = extraout_w11_00;
        }
        else {
          func_0x000108738318();
          plVar8 = extraout_x8_01;
          uVar5 = extraout_w10_00;
          uVar9 = extraout_w11;
        }
        if ((uVar9 & 1) != 0) {
          func_0x000108738154();
          if ((bool)in_ZR) {
            func_0x000108738134();
            func_0x0001087380a0();
            func_0x000108738084();
            param_1[0x17] = (ulong)puVar6;
          }
          func_0x000108738040();
          return;
        }
      } while ((uVar5 >> 1 & 1) == 0);
    }
LAB_1087358dc:
    func_0x000107c33120();
    uVar7 = *puVar6;
    func_0x000107c33084();
    if ((uVar7 >> 0x20 & 1) == 0) goto code_r0x0001005f96a8;
    func_0x000107c29734(param_1 + 4,param_1[6]);
    uVar7 = *(ulong *)(param_1[6] + 0x130);
    *(ulong *)(param_1[6] + 0x130) = param_1[4];
    param_1[4] = uVar7;
    func_0x000107c33084();
    *(undefined1 *)((long)param_1 + 0x39) = 1;
    func_0x000107c33280();
    if (extraout_x8_03 != 0) {
      do {
        func_0x000107c33020();
      } while (extraout_w10_02 != 0);
    }
    puVar6 = param_1 + 4;
    func_0x000107c314f0();
    if (((ulong)puVar6 & 1) == 0) {
      *(undefined1 *)(param_1 + 7) = 0;
      func_0x000108738bac();
      if (*puVar6 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x000107c331e4();
      if (((ulong)puVar6 & 1) != 0) {
        return;
      }
    }
  }
  func_0x000108738ef4();
  func_0x000108738ed0();
code_r0x0001005f96a8:
  func_0x000107c330d4();
  func_0x000107c33080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087359e0; end: 108735a13;  */

void FUN_1087359e0(long param_1)

{
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    func_0x000108738830();
  }
  else {
    func_0x000107c33084();
  }
  func_0x000107c33080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108735a14; end: 108735a63;  */

void FUN_108735a14(long param_1)

{
  func_0x000107c28834(param_1 + 0x20);
  func_0x000107c33084();
  func_0x000107c3308c();
  func_0x000107c330d4();
  func_0x000107c33080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108735a64; end: 108735ab7;  */

void FUN_108735a64(void)

{
  func_0x0001087381e8();
  func_0x000107c3308c();
  func_0x000107c33080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108735ab8; end: 108736247;  */

void FUN_108735ab8(undefined8 *param_1)

{
  uint3 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  undefined *puVar8;
  code *pcVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  bool bVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  undefined8 *extraout_x8;
  ulong extraout_x8_00;
  long lVar17;
  undefined8 *puVar18;
  code *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long extraout_x8_05;
  undefined1 extraout_w9;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  undefined8 *puVar19;
  long *plVar20;
  long lVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined8 *unaff_x24;
  undefined8 *puVar24;
  ulong uVar25;
  uint uVar26;
  undefined8 *puVar27;
  undefined8 uStack_238;
  ulong uStack_230;
  undefined8 uStack_1e8;
  ulong uStack_1e0;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  byte bStack_1bf;
  undefined8 *puStack_108;
  char cStack_18;
  
  func_0x000107c33218();
  puVar13 = param_1;
  func_0x0001087390a8();
  puVar16 = puVar13 + 0x27;
  puVar2 = puVar13 + 0x2d;
  if ((*(byte *)((long)puVar13 + 0x1c4) & 1) == 0) {
    puVar15 = puVar13;
    func_0x000107c33120();
    param_1[0x37] = *puVar15;
    func_0x000107c33084();
    func_0x000108739110();
    puStack_1c8 = (undefined8 *)CONCAT44(puStack_1c8._4_4_,0x1f0);
    func_0x000108738a20();
    func_0x000108738ce4();
    (*extraout_x8_01)();
    uVar23 = param_1[0x36];
    func_0x00010873867c();
    param_1[0x2a] = param_1 + 0x37;
    param_1[0x2b] = puVar16;
    param_1[0x2c] = uVar23;
    uVar11 = *(char *)((long)param_1 + 0x1bc) == '\x01';
    if (!(bool)uVar11) {
      puVar1 = (uint3 *)(param_1[0x36] + 0x31);
      cVar5 = *(char *)puVar1;
      bVar6 = *(byte *)(param_1[0x36] + 0x33);
      *(uint *)(param_1 + 0x38) = (uint)*puVar1;
      func_0x000108738684();
      puStack_1d0 = &uStack_1e8;
      func_0x00010873904c();
      unaff_x24 = (undefined8 *)param_1[0x36];
      func_0x000108738c50();
      puVar8 = PTR___ZSt7nothrow_1103469d8;
      if ((*(byte *)(unaff_x24 + 9) & bVar6) != 0) {
        unaff_x24 = (undefined8 *)param_1[0x2d];
        lVar17 = param_1[0x2e];
        lVar21 = lVar17 - (long)unaff_x24;
        uStack_238 = 0;
        uStack_230 = 0;
        uVar22 = lVar21 / 0x3d0;
        uVar25 = uVar22;
        if (lVar21 < 1) {
          uVar25 = 0;
        }
        else {
          for (; 0 < (long)uVar25; uVar25 = uVar25 >> 1) {
            lVar21 = uVar25 * 0x3d0;
            __ZnwmRKSt9nothrow_t(lVar21,puVar8);
            if (lVar21 != 0) goto LAB_108735f6c;
          }
          lVar21 = 0;
LAB_108735f6c:
          uStack_1e8 = 0;
          uStack_1e0 = uVar25;
          FUN_1087343b4(&uStack_238,lVar21);
          uStack_230 = uVar25;
          func_0x00010873907c();
        }
        FUN_108734130(unaff_x24,lVar17,uVar22,uStack_238,uVar25);
        func_0x000108739034();
      }
      uVar10 = *(char *)((long)puVar13 + 0x1c5) != '\0';
      uVar11 = *(char *)((long)puVar13 + 0x1c5) == '\x01';
      if (((bool)uVar11) && (cVar5 != '\0')) {
        FUN_10872ecb8(param_1 + 0xf,*(undefined8 *)(param_1[0x36] + 0xb0));
        unaff_x24 = (undefined8 *)param_1[0xf];
        puVar15 = (undefined8 *)param_1[0x10];
        while( true ) {
          uVar10 = puVar15 <= unaff_x24;
          uVar11 = unaff_x24 == puVar15;
          if ((bool)uVar11) break;
          puVar19 = unaff_x24;
          FUN_1086995ac(puVar13 + 0x1f);
          if (((ulong)puVar19 & 1) != 0) {
            FUN_1086d6ea8(puVar2,unaff_x24);
          }
          unaff_x24 = unaff_x24 + 0x7a;
        }
        func_0x000108738bc4();
      }
      puVar15 = (undefined8 *)param_1[0x36];
      func_0x000108738e6c(param_1 + 0x15,puVar15,puVar2);
      func_0x000108738464(param_1[0x15]);
      do {
        func_0x000107c33020();
      } while (extraout_w10 != 0);
      func_0x000107c33048();
      if ((extraout_w8_00 >> 1 & 1) == 0) {
        *(undefined1 *)((long)puVar13 + 0x1c4) = 1;
        func_0x000107c32ffc();
        unaff_x24 = (undefined8 *)*puVar15;
        if (unaff_x24 == (undefined8 *)0x0) {
          func_0x000107c3a5c0();
          unaff_x24 = (undefined8 *)*puVar15;
        }
        func_0x0001087385ec();
        plVar20 = extraout_x8_02;
        do {
          if (*plVar20 == 0) {
            func_0x000107c33024();
            plVar20 = extraout_x8_04;
            uVar7 = extraout_w10_01;
            uVar26 = extraout_w11_00;
          }
          else {
            func_0x000108738318();
            plVar20 = extraout_x8_03;
            uVar7 = extraout_w10_00;
            uVar26 = extraout_w11;
          }
          if ((uVar26 & 1) != 0) {
            func_0x000108738154();
            if ((bool)uVar11) {
              func_0x000108738134();
              uVar3 = extraout_w8;
              if ((bool)uVar10) {
                uVar3 = extraout_w9;
              }
              func_0x000108738330();
              func_0x000108739020();
              *(undefined1 *)puVar15 = uVar3;
              func_0x0001087380e4(0);
            }
            func_0x0001087381a4();
            *(undefined8 **)(extraout_x8_05 + 0x20) = unaff_x24;
            func_0x0001087380b0();
            goto LAB_108735f40;
          }
        } while ((uVar7 >> 1 & 1) == 0);
      }
      goto LAB_108735b00;
    }
    FUN_10872f714();
    func_0x000108739070();
    func_0x0001087385e0();
    do {
      uStack_1e8 = 0;
      puVar16 = param_1 + 0x39;
      func_0x00010873818c(puVar16,&uStack_1e8);
      if ((int)puVar16 != 0) {
        func_0x000108738820();
        *(undefined4 *)(param_1 + 0x4a) = 0x5f1aa8;
        *(undefined1 *)(param_1 + 0x4d) = 0;
        *(undefined1 *)(param_1 + 0x4e) = 1;
        func_0x00010873806c();
        break;
      }
    } while (((uint)uStack_1e8 >> 1 & 1) == 0);
    func_0x0001087381dc();
  }
  else {
LAB_108735b00:
    puVar15 = param_1 + 4;
    FUN_10872f9ec(puVar15);
    FUN_108730e90(param_1 + 0xf,puVar15);
    func_0x000107c33084();
    func_0x000108738850();
    func_0x000108739110();
    puStack_1c8 = (undefined8 *)CONCAT44(puStack_1c8._4_4_,0x1f1);
    func_0x000108738b84();
    func_0x000108739084();
    func_0x000108738a20();
    func_0x000108738ce4();
    func_0x000108738c58();
    func_0x000108738b7c();
    func_0x00010873867c();
    func_0x0001087391f8();
    FUN_10872f81c(param_1 + 0x2a);
    func_0x000108738d30();
    if ((long)puVar16 - (long)unaff_x24 != 0) {
      uVar22 = ((long)puVar16 - (long)unaff_x24) / 0x3d0;
      func_0x000108738430();
      if (extraout_x8_00 <= uVar22) goto LAB_1087360a8;
      puStack_1c8 = extraout_x8;
      func_0x0001087319f4();
      func_0x00010873863c();
      func_0x000108731a74(&uStack_1e8);
      unaff_x24 = (undefined8 *)param_1[0x2d];
      puVar16 = (undefined8 *)param_1[0x2e];
    }
    lVar17 = param_1[0x36];
    for (; uVar11 = unaff_x24 == puVar16, !(bool)uVar11; unaff_x24 = unaff_x24 + 0x7a) {
      func_0x000108738af8();
      puVar15 = param_1 + 0x24;
      func_0x00010528aebc(puVar15);
      puVar19 = (undefined8 *)unaff_x24[0x17];
      puVar4 = (undefined8 *)unaff_x24[0x18];
      while( true ) {
        uVar11 = puVar4 <= puVar19;
        bVar12 = puVar19 == puVar4;
        if (bVar12) break;
        puVar27 = (undefined8 *)param_1[0x10];
        if ((puVar27 != (undefined8 *)0x0) && (param_1[0x12] != 0)) {
          puVar14 = puVar19;
          FUN_108848654();
          uVar22 = (long)puVar27 - 1;
          if (((ulong)puVar27 & uVar22) == 0) {
            puVar24 = (undefined8 *)((ulong)puVar14 & uVar22);
          }
          else {
            puVar24 = puVar14;
            if (puVar27 <= puVar14) {
              uVar7 = 0;
              uVar26 = (uint)puVar27;
              if (uVar26 != 0) {
                uVar7 = (uint)puVar14 / uVar26;
              }
              puVar24 = (undefined8 *)(ulong)((uint)puVar14 - uVar7 * uVar26);
            }
          }
          plVar20 = *(long **)(param_1[0xf] + (long)puVar24 * 8);
          puVar15 = puVar14;
          if (plVar20 != (long *)0x0) {
            do {
              while( true ) {
                plVar20 = (long *)*plVar20;
                if (plVar20 == (long *)0x0) goto LAB_108735cb8;
                puVar18 = (undefined8 *)plVar20[1];
                if (puVar14 != puVar18) break;
                func_0x000108739064();
                if ((int)puVar15 != 0) {
                  uVar22 = param_1[0x25];
                  if (uVar22 < (ulong)param_1[0x26]) {
                    func_0x000108738f58();
                    lVar21 = uVar22 + 0xd8;
                  }
                  else {
                    func_0x0001087391bc();
                    func_0x000108738f88();
                    func_0x0001087391a8();
                    func_0x000108738fbc();
                    puVar15 = (undefined8 *)param_1[6];
                    FUN_108730c28(puVar15,plVar20 + 5);
                    param_1[6] = param_1[6] + 0xd8;
                    func_0x000108738f7c();
                    lVar21 = param_1[0x25];
                    func_0x000108738b4c();
                  }
                  param_1[0x25] = lVar21;
                  goto LAB_108735cb8;
                }
              }
              if (((ulong)puVar27 & uVar22) == 0) {
                puVar18 = (undefined8 *)((ulong)puVar18 & uVar22);
              }
              else if (puVar27 <= puVar18) {
                uVar25 = 0;
                if (puVar27 != (undefined8 *)0x0) {
                  uVar25 = (ulong)puVar18 / (ulong)puVar27;
                }
                puVar18 = (undefined8 *)((long)puVar18 - uVar25 * (long)puVar27);
              }
            } while (puVar18 == puVar24);
          }
        }
LAB_108735cb8:
        puVar19 = puVar19 + 3;
      }
      func_0x000108739234();
      if (bVar12) {
        puVar15 = *(undefined8 **)(lVar17 + 0xb0);
        func_0x0001087386d8(&uStack_1e8,puVar15,unaff_x24);
        uVar11 = cStack_18 != '\0';
        if ((cStack_18 == '\x01') && ((bStack_1bf >> 4 & 1) != 0)) {
          puVar15 = puStack_108;
          FUN_108844330(&uStack_238,puStack_108);
          func_0x000108738fb0();
          func_0x000108738c00();
        }
        func_0x000108738c48();
      }
      func_0x000108738ab0();
      if ((bool)uVar11) {
        func_0x000108738d48();
        FUN_108731bcc();
        lVar21 = 0;
        if (puVar4 != (undefined8 *)0x0) {
          lVar21 = (long)(param_1[0x34] - param_1[0x33]) / (long)puVar4;
        }
        func_0x0001087319b8(param_1 + 0x15,puVar15,lVar21,extraout_x8);
        func_0x000108738234(param_1[0x17]);
        func_0x000108738960();
        func_0x0001087387ec();
        puVar19 = (undefined8 *)param_1[0x34];
        func_0x000108738ba4();
      }
      else {
        func_0x000108738234();
        func_0x000108738960(puVar19);
        puVar19 = puVar19 + 0x19;
      }
      param_1[0x34] = puVar19;
      func_0x000108738b5c();
      func_0x000108738af0();
    }
    lVar17 = param_1[3];
    do {
      uStack_1e8 = 0;
      lVar21 = lVar17 + 0x10;
      func_0x00010873818c(lVar21,&uStack_1e8);
      if ((int)lVar21 != 0) {
        FUN_1087322dc(lVar17 + 0x98);
        uVar23 = puVar13[0x33];
        *(undefined8 *)(lVar17 + 0xa0) = puVar13[0x34];
        *(undefined8 *)(lVar17 + 0x98) = uVar23;
        *(undefined8 *)(lVar17 + 0xa8) = *extraout_x8;
        puVar13[0x33] = 0;
        puVar13[0x34] = 0;
        puVar13[0x35] = 0;
        *(undefined1 *)(lVar17 + 0xb0) = 1;
        *(undefined1 *)(lVar17 + 0xb8) = 1;
        func_0x000108738450(lVar17 + 0x10);
        func_0x000108738fe8();
        break;
      }
    } while (((uint)uStack_1e8 >> 1 & 1) == 0);
    func_0x0001087383ac(param_1 + 3);
    func_0x000108738a48();
    func_0x000108738bbc();
    func_0x000100864b68(puVar13 + 0x1f);
    func_0x000107c29108(puVar2);
  }
  func_0x000107c33080();
  func_0x000107c33090();
LAB_108735f40:
  func_0x000108738dfc();
  if ((bool)uVar11) {
    return;
  }
  ___stack_chk_fail();
LAB_1087360a8:
  FUN_10873187c();
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x1087360b0);
  (*pcVar9)();
}



/* Entry: 108736248; end: 10873628f;  */

void FUN_108736248(long param_1)

{
  if ((*(byte *)(param_1 + 0x1c4) & 1) == 0) {
    func_0x000107c33084();
  }
  else {
    func_0x000107c33084();
    func_0x000108738850();
    func_0x000100864b68(param_1 + 0xf8);
    func_0x000107c29108(param_1 + 0x168);
  }
  func_0x000107c33080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108736290; end: 108736317;  */

void FUN_108736290(long param_1)

{
  long unaff_x21;
  undefined4 uStack_38;
  
  param_1 = param_1 + 0x20;
  FUN_1087322a4();
  func_0x0001087382e0();
  do {
    func_0x0001087380cc();
    if ((int)param_1 != 0) {
      func_0x000108738820();
      func_0x000108738da8();
      FUN_108732300();
      *(undefined1 *)(unaff_x21 + 0xb8) = 1;
      func_0x00010873806c();
      break;
    }
  } while ((uStack_38 >> 1 & 1) == 0);
  func_0x0001087381dc();
  func_0x000107c33084();
  func_0x000107c3308c();
  func_0x000107c33080();
  func_0x000107c33090();
  return;
}



/* Entry: 108736318; end: 10873633b;  */

void FUN_108736318(void)

{
  func_0x0001087381e8();
  func_0x000107c3308c();
  func_0x000107c33080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10873633c; end: 108736467;  */

void FUN_10873633c(void)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  long lVar3;
  uint extraout_w8;
  ulong extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  long unaff_x19;
  long unaff_x21;
  uint uStack_48;
  
  func_0x000107c331a0();
  if ((extraout_x8 & 1) == 0) {
    plVar2 = (long *)(unaff_x19 + 0x20);
    FUN_108732164(unaff_x19 + 0x40);
    func_0x000107c33210();
    do {
      func_0x000107c33020();
    } while (extraout_w10 != 0);
    func_0x000107c3309c(*(undefined8 *)(unaff_x19 + 0x38));
    if ((extraout_w8 >> 1 & 1) == 0) {
      func_0x000107c3322c();
      func_0x000107c32ffc();
      unaff_x21 = *plVar2;
      if (unaff_x21 == 0) {
        func_0x000107c3a5c0();
        unaff_x21 = *plVar2;
      }
      func_0x000107c330d0();
      plVar2 = extraout_x8_00;
      do {
        if (*plVar2 == 0) {
          func_0x000107c33024();
          plVar2 = extraout_x8_02;
          uVar1 = extraout_w10_01;
          uVar4 = extraout_w11_00;
        }
        else {
          func_0x000108738318();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_00;
          uVar4 = extraout_w11;
        }
        if ((uVar4 & 1) != 0) {
          func_0x000107c33010();
          if ((bool)in_ZR) {
            func_0x000108738134();
            func_0x0001087380a0();
            func_0x000108738020();
          }
          func_0x000107c32fe0();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  lVar3 = unaff_x19 + 0x38;
  FUN_1087322a4();
  func_0x0001087382e0();
  do {
    func_0x0001087380cc();
    if ((int)lVar3 != 0) {
      func_0x000108738820();
      func_0x000108738da8();
      func_0x000104be5190();
      *(undefined1 *)(unaff_x21 + 0xb8) = 1;
      func_0x00010873806c();
      break;
    }
  } while ((uStack_48 >> 1 & 1) == 0);
  func_0x0001087381dc();
  func_0x000107c330c0();
  func_0x000107c33100();
  func_0x000107c33080();
  func_0x000107c288ac(unaff_x19 + 0x30);
  func_0x000107c33090();
  return;
}



/* Entry: 108736468; end: 10873649f;  */

void FUN_108736468(void)

{
  int extraout_w8;
  long unaff_x19;
  
  func_0x000107c331a0();
  if (extraout_w8 == 1) {
    func_0x000107c330c0();
    func_0x000107c33100();
  }
  func_0x000107c33080();
  func_0x000107c288ac(unaff_x19 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087364a0; end: 1087366f7;  */

void FUN_1087364a0(long param_1)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x9;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000010;
  
  func_0x000108739298();
  plVar8 = (long *)(param_1 + 0x40);
  FUN_1087322a4();
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  func_0x000108738bf0();
  func_0x000108738fa4();
  func_0x000108738970();
  func_0x000108738a80();
  lVar9 = *(long *)(param_1 + 0x20);
  lVar6 = lVar9 + 0x58;
  __ZNSt3__15mutex4lockEv(lVar6);
  plVar7 = *(long **)(param_1 + 0x20);
  if ((char)plVar7[4] == '\x01') {
    bVar3 = *(byte *)(plVar8 + 3);
    if (((*(byte *)(plVar7 + 3) & 1) == 0) && (bVar3 != 0)) {
      FUN_108732344();
      plVar7[1] = in_stack_00000008;
      *plVar7 = in_stack_00000000;
      plVar7[2] = in_stack_00000010;
      *(undefined1 *)(plVar7 + 3) = 1;
      func_0x000104be4d64();
    }
    else if (*(byte *)(plVar7 + 3) == 0) {
      if ((bVar3 & 1) == 0) {
        *(int *)plVar7 = (int)*plVar8;
      }
    }
    else if (bVar3 == 0) {
      func_0x000104be4d64(plVar7);
      *(int *)plVar7 = (int)*plVar8;
      *(undefined1 *)(plVar7 + 3) = 0;
    }
    else {
      bVar4 = plVar8 <= plVar7;
      bVar5 = plVar7 == plVar8;
      if (!bVar5) {
        lVar1 = *plVar8;
        lVar2 = plVar8[1];
        func_0x000108738d24(lVar2 - lVar1);
        if (!bVar4 || bVar5) {
          func_0x000108738d24();
          if (!bVar4 || bVar5) {
            func_0x00010873914c();
            FUN_108732b30();
            func_0x000104be4ac8(plVar7,lVar6);
            goto LAB_108736558;
          }
          lVar6 = lVar1 + extraout_x9;
          FUN_108732b30(lVar1,lVar6);
        }
        else {
          func_0x000104be4a88(plVar7);
          plVar8 = plVar7;
          FUN_108731bcc(plVar7,extraout_x8 / 200);
          FUN_10873239c(plVar7,plVar8);
          lVar6 = lVar1;
        }
        FUN_1087323dc(plVar7,lVar6,lVar2);
      }
    }
  }
  else {
    FUN_108732300(plVar7,plVar8);
    *(undefined1 *)(plVar7 + 4) = 1;
  }
LAB_108736558:
  plVar8 = *(long **)(*(long *)(param_1 + 0x20) + 0xa0);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa0) = 0;
  __ZNSt3__15mutex6unlockEv(lVar9 + 0x58);
  if (plVar8 == (long *)0x0) {
    func_0x000108738f6c(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    func_0x000108738818(*(undefined8 *)(*plVar8 + 0x10));
    func_0x000108738268();
  }
  func_0x000108738b54();
  func_0x000107c33100();
  func_0x000107c330d4();
  func_0x000107c33080();
  func_0x000107c33090();
  return;
}



/* Entry: 1087366f8; end: 10873671f;  */

void FUN_1087366f8(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x40);
  func_0x000107c33080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108736720; end: 108736817;  */

void FUN_108736720(void)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  ulong extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  long unaff_x19;
  
  func_0x000108738c68();
  if ((extraout_x8 & 1) == 0) {
    plVar2 = (long *)(unaff_x19 + 0x20);
    FUN_1087327fc(unaff_x19 + 0x58);
    func_0x000108738c94();
    do {
      func_0x000107c33020();
    } while (extraout_w10 != 0);
    func_0x000107c3309c(*(undefined8 *)(unaff_x19 + 0x50));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 0x60) = 1;
      func_0x000107c32ffc();
      if (*plVar2 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x000107c330d0();
      plVar2 = extraout_x8_00;
      do {
        if (*plVar2 == 0) {
          func_0x000107c33024();
          plVar2 = extraout_x8_02;
          uVar1 = extraout_w10_01;
          uVar3 = extraout_w11_00;
        }
        else {
          func_0x000108738318();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_00;
          uVar3 = extraout_w11;
        }
        if ((uVar3 & 1) != 0) {
          func_0x000107c33010();
          if ((bool)in_ZR) {
            func_0x000108738134();
            func_0x0001087380a0();
            func_0x000108738020();
          }
          func_0x000107c32fe0();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x000108738eb8();
  func_0x000100852d54();
  func_0x000108738590();
  func_0x000107c330d4();
  func_0x000107c33080();
  func_0x000108738fd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108736818; end: 10873684b;  */

void FUN_108736818(void)

{
  int extraout_w8;
  
  func_0x000108738c68();
  if (extraout_w8 == 1) {
    func_0x000100852d54();
    func_0x000108738590();
  }
  func_0x000107c33080();
  func_0x000108738fd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10873684c; end: 1087368df;  */

void FUN_10873684c(long param_1)

{
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined4 uStack_38;
  
  param_1 = param_1 + 0x20;
  FUN_108732dc4();
  func_0x0001087382e0();
  do {
    func_0x0001087380cc();
    if ((int)param_1 != 0) {
      if (*(char *)(unaff_x21 + 0xa0) == '\x01') {
        *(undefined1 *)(unaff_x21 + 0xa0) = 0;
      }
      *(undefined8 *)(unaff_x21 + 0x98) = *unaff_x22;
      *(undefined1 *)(unaff_x21 + 0xa0) = 1;
      func_0x00010873806c();
      break;
    }
  } while ((uStack_38 >> 1 & 1) == 0);
  func_0x0001087381dc();
  func_0x000107c33084();
  func_0x000107c3308c();
  func_0x000107c33080();
  func_0x000107c33090();
  return;
}



/* Entry: 1087368e0; end: 108736903;  */

void FUN_1087368e0(void)

{
  func_0x0001087381e8();
  func_0x000107c3308c();
  func_0x000107c33080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108736904; end: 108736a2b;  */

void FUN_108736904(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long lVar2;
  uint extraout_w8;
  ulong extraout_x8;
  long *extraout_x8_00;
  long *plVar3;
  long *extraout_x8_01;
  long *extraout_x8_02;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  long unaff_x19;
  long unaff_x21;
  undefined8 *unaff_x22;
  uint uStack_48;
  
  func_0x000107c33130();
  if ((extraout_x8 & 1) == 0) {
    func_0x000107c33224();
    FUN_108732c7c();
    func_0x000107c330dc();
    do {
      func_0x000107c33020();
    } while (extraout_w10 != 0);
    func_0x000107c33078();
    if ((extraout_w8 >> 1 & 1) == 0) {
      func_0x000107c33170();
      func_0x000107c32ffc();
      unaff_x21 = *param_1;
      if (unaff_x21 == 0) {
        func_0x000107c3a5c0();
        unaff_x21 = *param_1;
      }
      func_0x000107c330d0();
      plVar3 = extraout_x8_00;
      do {
        if (*plVar3 == 0) {
          func_0x000107c33024();
          plVar3 = extraout_x8_02;
          uVar1 = extraout_w10_01;
          uVar4 = extraout_w11_00;
        }
        else {
          func_0x000108738318();
          plVar3 = extraout_x8_01;
          uVar1 = extraout_w10_00;
          uVar4 = extraout_w11;
        }
        if ((uVar4 & 1) != 0) {
          func_0x000107c33010();
          if ((bool)in_ZR) {
            func_0x000108738134();
            func_0x0001087380a0();
            func_0x000108738020();
          }
          func_0x000107c32fe0();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  lVar2 = unaff_x19 + 0x30;
  FUN_108732dc4();
  func_0x0001087382e0();
  do {
    func_0x0001087380cc();
    if ((int)lVar2 != 0) {
      if (*(char *)(unaff_x21 + 0xa0) == '\x01') {
        *(undefined1 *)(unaff_x21 + 0xa0) = 0;
      }
      *(undefined8 *)(unaff_x21 + 0x98) = *unaff_x22;
      *(undefined1 *)(unaff_x21 + 0xa0) = 1;
      func_0x00010873806c();
      break;
    }
  } while ((uStack_48 >> 1 & 1) == 0);
  func_0x0001087381dc();
  func_0x000107c330bc();
  func_0x000107c330c0();
  func_0x000107c33080();
  func_0x000107c33114();
  func_0x000107c33090();
  return;
}



/* Entry: 108736a2c; end: 108736a5b;  */

void FUN_108736a2c(void)

{
  undefined1 in_ZR;
  
  func_0x000108738580();
  if ((bool)in_ZR) {
    func_0x000107c330bc();
    func_0x000107c330c0();
  }
  func_0x000107c33080();
  func_0x000107c33114();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108736a5c; end: 108736baf;  */

void FUN_108736a5c(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  long *plVar3;
  undefined8 *apuStack_50 [2];
  undefined1 auStack_40 [16];
  
  FUN_108732dc4(param_1 + 0x30);
  func_0x0001087391d0();
  func_0x000108738edc(auStack_40);
  FUN_10862ce70(apuStack_50,auStack_40);
  func_0x0001087389c0();
  func_0x000108738b6c();
  puVar2 = apuStack_50[0];
  __ZNSt3__15mutex4lockEv(apuStack_50[0] + 8);
  if (*(char *)(apuStack_50[0] + 1) == '\x01') {
    uVar1 = *(undefined4 *)unaff_x20;
    *(undefined1 *)((long)apuStack_50[0] + 4) = *(undefined1 *)((long)unaff_x20 + 4);
    *(undefined4 *)apuStack_50[0] = uVar1;
  }
  else {
    *apuStack_50[0] = *unaff_x20;
    *(undefined1 *)(apuStack_50[0] + 1) = 1;
  }
  plVar3 = (long *)apuStack_50[0][0x11];
  apuStack_50[0][0x11] = 0;
  __ZNSt3__15mutex6unlockEv(puVar2 + 8);
  if (plVar3 == (long *)0x0) {
    func_0x000108738f10(apuStack_50[0]);
  }
  else {
    func_0x000108738e48(*(undefined8 *)(*plVar3 + 0x10));
    func_0x000108738acc();
  }
  func_0x0001087387b8();
  func_0x000107c330bc();
  func_0x000107c330d4();
  func_0x000107c33080();
  func_0x000107c33090();
  return;
}



/* Entry: 108736bb0; end: 108736bcf;  */

void FUN_108736bb0(void)

{
  func_0x000108739090();
  func_0x000107c33080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108736bd0; end: 108736cc7;  */

void FUN_108736bd0(void)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  ulong extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  long unaff_x19;
  
  func_0x000108738c68();
  if ((extraout_x8 & 1) == 0) {
    plVar2 = (long *)(unaff_x19 + 0x20);
    FUN_108733060(unaff_x19 + 0x58);
    func_0x000108738c94();
    do {
      func_0x000107c33020();
    } while (extraout_w10 != 0);
    func_0x000107c3309c(*(undefined8 *)(unaff_x19 + 0x50));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 0x60) = 1;
      func_0x000107c32ffc();
      if (*plVar2 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x000107c330d0();
      plVar2 = extraout_x8_00;
      do {
        if (*plVar2 == 0) {
          func_0x000107c33024();
          plVar2 = extraout_x8_02;
          uVar1 = extraout_w10_01;
          uVar3 = extraout_w11_00;
        }
        else {
          func_0x000108738318();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_00;
          uVar3 = extraout_w11;
        }
        if ((uVar3 & 1) != 0) {
          func_0x000107c33010();
          if ((bool)in_ZR) {
            func_0x000108738134();
            func_0x0001087380a0();
            func_0x000108738020();
          }
          func_0x000107c32fe0();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x000108738eb8();
  func_0x000100852d54();
  func_0x000108738590();
  func_0x000107c330d4();
  func_0x000107c33080();
  func_0x000108738f9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108736cc8; end: 108736cfb;  */

void FUN_108736cc8(void)

{
  int extraout_w8;
  
  func_0x000108738c68();
  if (extraout_w8 == 1) {
    func_0x000100852d54();
    func_0x000108738590();
  }
  func_0x000107c33080();
  func_0x000108738f9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108736cfc; end: 108737103;  */

void FUN_108736cfc(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  code *pcVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  ulong uVar6;
  code *extraout_x8;
  long *extraout_x8_00;
  uint extraout_w9;
  undefined8 *extraout_x9;
  long *extraout_x10;
  undefined8 uVar7;
  long unaff_x26;
  long lVar8;
  undefined8 *puVar9;
  undefined1 auStack_120 [56];
  uint uStack_e8;
  undefined8 uStack_e4;
  undefined1 uStack_dc;
  undefined1 auStack_d8 [24];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined4 uStack_84;
  undefined1 uStack_80;
  undefined8 uStack_7c;
  
  puVar1 = (undefined8 *)(param_1 + 0x228);
  lVar8 = param_1;
  func_0x0001087385f8(*(undefined8 *)(param_1 + 0x228));
  if ((extraout_w9 >> 5 & 1) != 0) {
    func_0x0001087384e4(*(undefined8 *)(lVar8 + 0x228),param_1 + 0x270);
    __ZSt17rethrow_exceptionSt13exception_ptr(param_1 + 0x270);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1087370e4);
    (*pcVar4)();
  }
  func_0x000108738e84();
  func_0x000107c27f9c(puVar1);
  func_0x000108738eb0();
  func_0x000107c330f8(*(undefined8 *)(*(long *)(param_1 + 0x280) + 0xd0));
  (*extraout_x8)();
  func_0x000108738e60();
  func_0x000108738840();
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  FUN_108730340(puVar1,(long)*(int *)(param_1 + 0x210));
  puVar2 = (undefined8 *)(param_1 + 0x240);
  func_0x0001087389ec(param_1 + 0x208);
  plVar3 = extraout_x8_00;
  if (!(bool)in_ZR) {
    plVar3 = extraout_x10;
  }
  func_0x000108738c84((long)*(int *)(param_1 + 0x210));
  do {
    if (unaff_x26 == 0) {
      FUN_108730498(param_1 + 0x10,puVar1);
      func_0x000104be58b8(puVar1);
      func_0x0001087386e0();
      func_0x000107c33080();
      func_0x000107c33090();
      return;
    }
    lVar8 = *plVar3;
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x280) + 0xb0);
    func_0x0001087386c8();
    func_0x000107c29ee0(&uStack_c0);
    func_0x0001087386d8(param_1 + 0x20,uVar7,&uStack_c0);
    func_0x000107c27914(&uStack_c0);
    uVar5 = *(char *)(param_1 + 0x1f0) == '\x01';
    if ((bool)uVar5) {
      uVar6 = param_1 + 0x20;
      func_0x0001086a74d4();
      if ((uVar6 & 1) != 0) goto LAB_108736dec;
    }
    else {
LAB_108736dec:
      uStack_e8 = uStack_e8 & 0xffffff00;
      uStack_dc = (*(byte *)(lVar8 + 0x10) >> 1 & 1) != 0;
      if ((bool)uStack_dc) {
        uStack_e8 = (uint)*(undefined8 *)(*(long *)(lVar8 + 0x50) + 0x10);
        uStack_e4 = 0;
      }
      func_0x0001087386c8();
      func_0x000107c29ee0(auStack_d8);
      uVar6 = *(ulong *)(lVar8 + 0x30);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (puVar2,*(ulong *)(lVar8 + 0x38) & 0xfffffffffffffffc);
      uVar7 = *(undefined8 *)(lVar8 + 0x58);
      func_0x000108738e20(*(undefined8 *)(lVar8 + 0x40));
      uStack_80 = *(undefined1 *)(lVar8 + 0x60);
      uStack_b8 = *(undefined8 *)(param_1 + 0x248);
      uStack_c0 = *puVar2;
      uStack_b0 = *(undefined8 *)(param_1 + 0x250);
      *(undefined8 *)(param_1 + 0x248) = 0;
      *(undefined8 *)(param_1 + 0x250) = 0;
      *puVar2 = 0;
      uStack_a8 = (undefined4)uVar7;
      uStack_98 = *(undefined8 *)(param_1 + 0x260);
      uStack_a0 = *(undefined8 *)(param_1 + 600);
      uStack_90 = *(undefined8 *)(param_1 + 0x268);
      *(undefined8 *)(param_1 + 600) = 0;
      *(undefined8 *)(param_1 + 0x260) = 0;
      *(undefined8 *)(param_1 + 0x268) = 0;
      uStack_88 = 0;
      uStack_84 = 0;
      uStack_7c = 0;
      puVar9 = (undefined8 *)(lVar8 + 0x18);
      func_0x0001008527a4(*puVar9);
      if (!(bool)uVar5) {
        puVar9 = extraout_x9;
      }
      func_0x0001072eab64(auStack_120,puVar9,puVar9 + *(int *)(lVar8 + 0x20));
      FUN_1087303c0(puVar1,auStack_d8,uVar6 & 0xfffffffffffffffc,&uStack_c0,&uStack_e8,auStack_120);
      func_0x000107c278a8(auStack_120);
      func_0x000104be1234(&uStack_c0);
      func_0x000108738a18();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar2);
      func_0x000108738c7c();
    }
    func_0x000108738b64();
    plVar3 = plVar3 + 1;
    unaff_x26 = unaff_x26 + -8;
  } while( true );
}



/* Entry: 108737104; end: 1087371ab;  */

void FUN_108737104(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x228);
  func_0x000108738eb0();
  func_0x000108738840();
  func_0x0001087386e0();
  func_0x000107c33080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087371ac; end: 1087371ff;  */

void FUN_1087371ac(long param_1)

{
  FUN_108733440(param_1 + 0x20);
  func_0x000108738bcc();
  func_0x000107c33084();
  func_0x000107c3308c();
  func_0x000107c33080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108737200; end: 108737223;  */

void FUN_108737200(void)

{
  func_0x0001087381e8();
  func_0x000107c3308c();
  func_0x000107c33080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108737224; end: 108737317;  */

void FUN_108737224(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long lVar2;
  uint extraout_w8;
  uint extraout_w8_00;
  undefined4 extraout_w8_01;
  undefined4 uVar3;
  undefined4 extraout_w8_02;
  undefined4 extraout_w8_03;
  undefined4 extraout_var;
  undefined4 uVar4;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar5;
  long unaff_x19;
  
  func_0x000107c33130();
  if ((extraout_w8 & 1) == 0) {
    func_0x000107c33224();
    FUN_108733330();
    func_0x000107c330dc();
    do {
      func_0x000107c33020();
    } while (extraout_w10 != 0);
    func_0x000107c33078();
    if ((extraout_w8_00 >> 1 & 1) == 0) {
      func_0x000107c33170();
      func_0x000107c32ffc();
      if (*param_1 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x000107c330d0();
      uVar3 = extraout_w8_01;
      uVar4 = extraout_var;
      do {
        if (*(long *)CONCAT44(uVar4,uVar3) == 0) {
          func_0x000107c33024();
          uVar3 = extraout_w8_03;
          uVar4 = extraout_var_01;
          uVar1 = extraout_w10_01;
          uVar5 = extraout_w11_00;
        }
        else {
          func_0x000108738318();
          uVar3 = extraout_w8_02;
          uVar4 = extraout_var_00;
          uVar1 = extraout_w10_00;
          uVar5 = extraout_w11;
        }
        if ((uVar5 & 1) != 0) {
          func_0x000107c33010();
          if ((bool)in_ZR) {
            func_0x000108738134();
            func_0x0001087380a0();
            func_0x000108738020();
          }
          func_0x000107c32fe0();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  lVar2 = unaff_x19 + 0x30;
  FUN_108733440(lVar2);
  FUN_108730498(unaff_x19 + 0x10,lVar2);
  func_0x000107c330bc();
  func_0x000107c330c0();
  func_0x000107c33080();
  func_0x000107c33114();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108737318; end: 108737347;  */

void FUN_108737318(void)

{
  undefined1 in_ZR;
  
  func_0x000108738580();
  if ((bool)in_ZR) {
    func_0x000107c330bc();
    func_0x000107c330c0();
  }
  func_0x000107c33080();
  func_0x000107c33114();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108737348; end: 10873749f;  */

void FUN_108737348(long param_1)

{
  long lVar1;
  long *plVar2;
  long alStack_50 [2];
  undefined1 auStack_40 [16];
  
  FUN_108733440(param_1 + 0x30);
  func_0x0001087391d0();
  func_0x000108738ee8(auStack_40);
  func_0x000104be5658(alStack_50,auStack_40);
  func_0x000108738e9c();
  func_0x000108738b44();
  lVar1 = alStack_50[0];
  __ZNSt3__15mutex4lockEv(alStack_50[0] + 0x50);
  if (*(char *)(alStack_50[0] + 0x18) == '\x01') {
    FUN_10872adfc();
  }
  else {
    FUN_1087337a0();
  }
  plVar2 = *(long **)(alStack_50[0] + 0x98);
  *(undefined8 *)(alStack_50[0] + 0x98) = 0;
  __ZNSt3__15mutex6unlockEv(lVar1 + 0x50);
  if (plVar2 == (long *)0x0) {
    __ZNSt3__118condition_variable10notify_allEv(alStack_50[0] + 0x20);
  }
  else {
    func_0x000108738e48(*(undefined8 *)(*plVar2 + 0x10));
    func_0x000108738acc();
  }
  func_0x000108738e38();
  func_0x000107c330bc();
  func_0x000107c330d4();
  func_0x000107c33080();
  func_0x000107c33090();
  return;
}



/* Entry: 1087374a0; end: 1087374bf;  */

void FUN_1087374a0(void)

{
  func_0x000108739090();
  func_0x000107c33080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087374c0; end: 1087375b7;  */

void FUN_1087374c0(void)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  ulong extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  long unaff_x19;
  
  func_0x000108738c68();
  if ((extraout_x8 & 1) == 0) {
    plVar2 = (long *)(unaff_x19 + 0x20);
    FUN_10873359c(unaff_x19 + 0x58);
    func_0x000108738c94();
    do {
      func_0x000107c33020();
    } while (extraout_w10 != 0);
    func_0x000107c3309c(*(undefined8 *)(unaff_x19 + 0x50));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 0x60) = 1;
      func_0x000107c32ffc();
      if (*plVar2 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x000107c330d0();
      plVar2 = extraout_x8_00;
      do {
        if (*plVar2 == 0) {
          func_0x000107c33024();
          plVar2 = extraout_x8_02;
          uVar1 = extraout_w10_01;
          uVar3 = extraout_w11_00;
        }
        else {
          func_0x000108738318();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_00;
          uVar3 = extraout_w11;
        }
        if ((uVar3 & 1) != 0) {
          func_0x000107c33010();
          if ((bool)in_ZR) {
            func_0x000108738134();
            func_0x0001087380a0();
            func_0x000108738020();
          }
          func_0x000107c32fe0();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x000108738eb8();
  func_0x000100852d54();
  func_0x000108738590();
  func_0x000107c330d4();
  func_0x000107c33080();
  func_0x000108738fd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087375b8; end: 1087375eb;  */

void FUN_1087375b8(void)

{
  int extraout_w8;
  
  func_0x000108738c68();
  if (extraout_w8 == 1) {
    func_0x000100852d54();
    func_0x000108738590();
  }
  func_0x000107c33080();
  func_0x000108738fd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087375ec; end: 1087378ab;  */

void FUN_1087375ec(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  undefined1 in_ZR;
  long *extraout_x8;
  uint extraout_w9;
  long *extraout_x10;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x26;
  long unaff_x27;
  uint uStack_f8;
  undefined8 uStack_f4;
  undefined1 uStack_ec;
  undefined1 auStack_e8 [24];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined4 uStack_94;
  undefined1 uStack_90;
  undefined8 uStack_8c;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  plVar6 = (long *)(param_1 + 0x90);
  func_0x0001087385f8(*plVar6);
  if ((extraout_w9 >> 5 & 1) != 0) {
    func_0x0001087384e4(&uStack_d0);
    __ZSt17rethrow_exceptionSt13exception_ptr(&uStack_d0);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x108737800);
    (*pcVar4)();
  }
  FUN_1087309b8(param_1 + 0x20,*plVar6 + 0x98);
  func_0x000107c33240();
  func_0x000107c27f9c(param_1 + 0xf0);
  *plVar6 = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  FUN_108730340(plVar6,(long)*(int *)(param_1 + 0x38));
  func_0x0001087389ec();
  plVar1 = extraout_x8;
  if (!(bool)in_ZR) {
    plVar1 = extraout_x10;
  }
  func_0x000108738c84((long)(int)extraout_x8[1]);
  for (; unaff_x26 != 0; unaff_x26 = unaff_x26 + -8) {
    lVar5 = *plVar1;
    uStack_f8 = uStack_f8 & 0xffffff00;
    uStack_ec = (*(byte *)(lVar5 + 0x10) >> 1 & 1) != 0;
    if ((bool)uStack_ec) {
      uStack_f8 = (uint)*(undefined8 *)(*(long *)(lVar5 + 0x50) + 0x10);
      uStack_f4 = 0;
    }
    lVar2 = unaff_x27;
    if (*(long *)(lVar5 + 0x48) != 0) {
      lVar2 = *(long *)(lVar5 + 0x48);
    }
    func_0x000107c29ee0(auStack_e8,lVar2);
    uVar3 = *(ulong *)(lVar5 + 0x30);
    func_0x000108738968(*(undefined8 *)(lVar5 + 0x38),param_1 + 0xa8);
    uVar7 = *(undefined8 *)(lVar5 + 0x58);
    func_0x000108738968(*(undefined8 *)(lVar5 + 0x40),param_1 + 0xc0);
    uStack_90 = *(undefined1 *)(lVar5 + 0x60);
    uStack_c8 = *(undefined8 *)(param_1 + 0xb0);
    uStack_d0 = *(undefined8 *)(param_1 + 0xa8);
    uStack_c0 = *(undefined8 *)(param_1 + 0xb8);
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    uStack_b8 = (undefined4)uVar7;
    uStack_a8 = *(undefined8 *)(param_1 + 200);
    uStack_b0 = *(undefined8 *)(param_1 + 0xc0);
    uStack_a0 = *(undefined8 *)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    uStack_8c = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    FUN_1087303c0(plVar6,auStack_e8,uVar3 & 0xfffffffffffffffc,&uStack_d0,&uStack_f8,&uStack_80);
    func_0x000107c278a8(&uStack_80);
    func_0x000104be1234(&uStack_d0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xc0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xa8);
    func_0x000107c27914(auStack_e8);
    plVar1 = plVar1 + 1;
  }
  FUN_1087317f0(param_1 + 0xd8,plVar6);
  FUN_10872a870(*(long *)(param_1 + 0xf8) + 0x1c8,param_1 + 0x78,param_1 + 0xd8);
  func_0x000104be58b8(param_1 + 0xd8);
  func_0x000108738730();
  FUN_108730498();
  func_0x000104be58b8(plVar6);
  FUN_1089251a0(param_1 + 0x20);
  func_0x000107c27fb8(param_1 + 0x10);
  func_0x000108738b2c();
  func_0x000107c33090();
  return;
}



/* Entry: 1087378ac; end: 1087378df;  */

void FUN_1087378ac(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x90);
  func_0x000108738f40();
  func_0x000107c33080();
  func_0x000107c27914(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087378e0; end: 108737933;  */

void FUN_1087378e0(long param_1)

{
  FUN_108733440(param_1 + 0x20);
  func_0x000108738bcc();
  func_0x000107c33084();
  func_0x000107c3308c();
  func_0x000107c33080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108737934; end: 108737957;  */

void FUN_108737934(void)

{
  func_0x0001087381e8();
  func_0x000107c3308c();
  func_0x000107c33080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108737958; end: 108737a67;  */

void FUN_108737958(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  long lVar3;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  
  if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
    plVar2 = (long *)(param_1 + 0x20);
    FUN_10873391c(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x50);
    do {
      func_0x000107c33020();
    } while (extraout_w10 != 0);
    func_0x000107c3309c(*(undefined8 *)(param_1 + 0x48));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x58) = 1;
      func_0x000107c32ffc();
      if (*plVar2 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x000107c330d0();
      plVar2 = extraout_x8;
      do {
        if (*plVar2 == 0) {
          func_0x000107c33024();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_01;
          uVar4 = extraout_w11_00;
        }
        else {
          func_0x000108738318();
          plVar2 = extraout_x8_00;
          uVar1 = extraout_w10_00;
          uVar4 = extraout_w11;
        }
        if ((uVar4 & 1) != 0) {
          func_0x000107c33010();
          if ((bool)in_ZR) {
            func_0x000108738134();
            func_0x0001087380a0();
            func_0x000108738020();
          }
          func_0x000107c32fe0();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  lVar3 = param_1 + 0x48;
  FUN_108733440(lVar3);
  FUN_108730498(param_1 + 0x10,lVar3);
  func_0x00010873903c();
  func_0x000100852d54();
  func_0x000107c33080();
  func_0x000108738fc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108737a68; end: 108737a9f;  */

void FUN_108737a68(long param_1)

{
  if (*(char *)(param_1 + 0x58) == '\x01') {
    func_0x00010873903c();
    func_0x000100852d54();
  }
  func_0x000107c33080();
  func_0x000108738fc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108737aa0; end: 108737c2b;  */

void FUN_108737aa0(void)

{
  uint uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  long *plVar3;
  uint extraout_w8;
  ulong extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  long unaff_x19;
  long lVar5;
  long unaff_x21;
  uint in_stack_00000008;
  
  func_0x000108739298();
  func_0x000107c33130();
  if ((extraout_x8 & 1) == 0) {
    plVar3 = (long *)(unaff_x19 + 0x28);
    func_0x000107c28870();
    lVar5 = *plVar3;
    func_0x000107c3308c();
    func_0x000107c330bc();
    if (lVar5 == 0) {
      func_0x000108738498();
      func_0x000108738368();
      func_0x000108738f18();
      func_0x0001087383dc();
      func_0x000108738828();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x108737bcc);
      (*pcVar2)();
    }
    *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x19 + 0x20);
    do {
      func_0x000107c33020();
    } while (extraout_w10 != 0);
    func_0x000107c3309c(*(undefined8 *)(unaff_x19 + 0x28));
    if ((extraout_w8 >> 1 & 1) == 0) {
      func_0x000107c33170();
      func_0x000107c32ffc();
      unaff_x21 = *plVar3;
      if (unaff_x21 == 0) {
        func_0x000107c3a5c0();
        unaff_x21 = *plVar3;
      }
      func_0x000107c330d0();
      plVar3 = extraout_x8_00;
      do {
        if (*plVar3 == 0) {
          func_0x000107c33024();
          plVar3 = extraout_x8_02;
          uVar1 = extraout_w10_01;
          uVar4 = extraout_w11_00;
        }
        else {
          func_0x000108738318();
          plVar3 = extraout_x8_01;
          uVar1 = extraout_w10_00;
          uVar4 = extraout_w11;
        }
        if ((uVar4 & 1) != 0) {
          func_0x000107c33010();
          if ((bool)in_ZR) {
            func_0x000108738134();
            func_0x0001087380a0();
            func_0x000108738020();
          }
          func_0x000107c32fe0();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  lVar5 = unaff_x19 + 0x28;
  FUN_10872eae4();
  func_0x0001087382e0();
  do {
    func_0x0001087380cc();
    if ((int)lVar5 != 0) {
      FUN_108733f34(unaff_x21 + 0x98);
      func_0x000108738da8();
      FUN_1087324bc();
      *(undefined1 *)(unaff_x21 + 0xb0) = 1;
      func_0x00010873806c();
      break;
    }
  } while ((in_stack_00000008 >> 1 & 1) == 0);
  func_0x0001087381dc();
  func_0x000107c3308c();
  func_0x000107c33080();
  func_0x000107c33084();
  func_0x000107c33090();
  return;
}



/* Entry: 108737c2c; end: 108737c6b;  */

void FUN_108737c2c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    lVar1 = param_1 + 0x30;
    func_0x000107c27f9c(param_1 + 0x28);
  }
  func_0x000107c27f9c(lVar1);
  func_0x000107c33080();
  func_0x000107c33084();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108737c6c; end: 108737f63;  */

void FUN_108737c6c(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  undefined1 uVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *unaff_x21;
  long *plVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 *unaff_x27;
  ulong uVar15;
  undefined4 in_stack_00000000;
  uint in_stack_00000008;
  undefined4 in_stack_00000038;
  
  func_0x000107c33298();
  lVar6 = param_2 + 0x138;
  FUN_10872eae4(lVar6);
  FUN_10872eb1c(param_2 + 0x88,lVar6);
  func_0x000108738858();
  func_0x000108738808();
  func_0x000108738800();
  func_0x000108738848();
  func_0x000108738fe0();
  func_0x000108738860();
  func_0x0001087383f0();
  lVar2 = *(long *)(param_2 + 0x90);
  plVar1 = (long *)(param_2 + 0x58);
  for (lVar6 = *(long *)(param_2 + 0x88); uVar5 = lVar6 - lVar2 < 0, lVar6 != lVar2;
      lVar6 = lVar6 + 0xd8) {
    func_0x000107c27994(param_2 + 0xd0,lVar6);
    func_0x000108738620();
    unaff_x21 = (undefined8 *)(param_2 + 0xb8);
    FUN_108848654();
    puVar14 = *(undefined8 **)(param_2 + 0x50);
    puVar11 = unaff_x21;
    if (puVar14 != (undefined8 *)0x0) {
      uVar15 = (long)puVar14 - 1;
      uVar13 = (uint)puVar14;
      if (((ulong)puVar14 & uVar15) == 0) {
        unaff_x27 = (undefined8 *)((ulong)(uVar13 - 1) & (ulong)unaff_x21);
        uVar5 = false;
      }
      else {
        uVar5 = (long)unaff_x21 - (long)puVar14 < 0;
        unaff_x27 = unaff_x21;
        if (puVar14 <= unaff_x21) {
          uVar3 = 0;
          if (uVar13 != 0) {
            uVar3 = (uint)unaff_x21 / uVar13;
          }
          unaff_x27 = (undefined8 *)(ulong)((uint)unaff_x21 - uVar3 * uVar13);
        }
      }
      plVar12 = *(long **)(*(long *)(param_2 + 0x48) + (long)unaff_x27 * 8);
      if (plVar12 != (long *)0x0) {
        do {
          while( true ) {
            plVar12 = (long *)*plVar12;
            if (plVar12 == (long *)0x0) goto LAB_108737d74;
            puVar8 = (undefined8 *)plVar12[1];
            uVar5 = (long)puVar8 - (long)unaff_x21 < 0;
            if (puVar8 != unaff_x21) break;
            puVar11 = plVar12 + 2;
            func_0x000107c28078(puVar11,param_2 + 0xb8);
            if (((ulong)puVar11 & 1) != 0) goto LAB_108737e74;
          }
          if (((ulong)puVar14 & uVar15) == 0) {
            puVar8 = (undefined8 *)((ulong)puVar8 & uVar15);
          }
          else if (puVar14 <= puVar8) {
            uVar4 = 0;
            if (puVar14 != (undefined8 *)0x0) {
              uVar4 = (ulong)puVar8 / (ulong)puVar14;
            }
            puVar8 = (undefined8 *)((long)puVar8 - uVar4 * (long)puVar14);
          }
          uVar5 = (long)puVar8 - (long)unaff_x27 < 0;
        } while (puVar8 == unaff_x27);
      }
    }
LAB_108737d74:
    func_0x000108738f24();
    *(undefined8 **)(param_2 + 0x70) = puVar11;
    *(long **)(param_2 + 0x78) = plVar1;
    *(undefined8 *)(param_2 + 0x80) = 1;
    *puVar11 = 0;
    puVar11[1] = unaff_x21;
    func_0x000108738910();
    func_0x00010528b15c();
    func_0x00010873893c(*(undefined8 *)(param_2 + 0x60));
    if ((puVar14 == (undefined8 *)0x0) ||
       (func_0x000108738930(param_1,*(undefined4 *)(param_2 + 0x68),(float)puVar14), (bool)uVar5)) {
      func_0x000108738168((long)puVar14 << 1);
      FUN_108730f78(param_2 + 0x48);
      puVar14 = *(undefined8 **)(param_2 + 0x50);
      if (((ulong)puVar14 & (long)puVar14 - 1U) == 0) {
        unaff_x27 = (undefined8 *)((ulong)((int)puVar14 - 1) & (ulong)unaff_x21);
      }
      else {
        unaff_x27 = unaff_x21;
        if (puVar14 <= unaff_x21) {
          uVar15 = 0;
          if (puVar14 != (undefined8 *)0x0) {
            uVar15 = (ulong)unaff_x21 / (ulong)puVar14;
          }
          unaff_x27 = (undefined8 *)((long)unaff_x21 - uVar15 * (long)puVar14);
        }
      }
    }
    lVar9 = *(long *)(param_2 + 0x48);
    plVar10 = *(long **)(lVar9 + (long)unaff_x27 * 8);
    plVar12 = *(long **)(param_2 + 0x70);
    if (plVar10 == (long *)0x0) {
      *plVar12 = *plVar1;
      *plVar1 = (long)plVar12;
      *(long **)(lVar9 + (long)unaff_x27 * 8) = plVar1;
      if (*plVar12 != 0) {
        puVar11 = *(undefined8 **)(*plVar12 + 8);
        if (((ulong)puVar14 & (long)puVar14 - 1U) == 0) {
          puVar11 = (undefined8 *)((ulong)puVar11 & (long)puVar14 - 1U);
        }
        else if (puVar14 <= puVar11) {
          uVar15 = 0;
          if (puVar14 != (undefined8 *)0x0) {
            uVar15 = (ulong)puVar11 / (ulong)puVar14;
          }
          puVar11 = (undefined8 *)((long)puVar11 - uVar15 * (long)puVar14);
        }
        *(long **)(lVar9 + (long)puVar11 * 8) = plVar12;
      }
    }
    else {
      *plVar12 = *plVar10;
      *plVar10 = (long)plVar12;
    }
    func_0x000108739124();
    FUN_1087313f0(param_2 + 0x70);
LAB_108737e74:
    func_0x000108738b74();
  }
  func_0x000108738a58();
  puVar7 = &stack0x00000010;
  func_0x000108730ae8(puVar7,param_2 + 0x48);
  in_stack_00000038 = in_stack_00000000;
  func_0x0001087385e0();
  do {
    func_0x0001087380cc();
    if ((int)puVar7 != 0) {
      func_0x000108738f94();
      func_0x000108730ae8(unaff_x21 + 0x13,&stack0x00000010);
      *(undefined4 *)(unaff_x21 + 0x18) = in_stack_00000038;
      *(undefined1 *)(unaff_x21 + 0x19) = 1;
      func_0x00010873806c();
      break;
    }
  } while ((in_stack_00000008 >> 1 & 1) == 0);
  func_0x0001087381dc();
  func_0x000108731490(&stack0x00000010);
  func_0x000108738c18();
  func_0x000108738810();
  func_0x000108738838();
  func_0x000107c33080();
  func_0x000107c33090();
  return;
}



/* Entry: 108737f64; end: 10873801f;  */

void FUN_108737f64(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x138);
  func_0x000108738808();
  func_0x000108738800();
  func_0x000108738848();
  func_0x000108738fe0();
  func_0x000108738860();
  func_0x000108738810();
  func_0x000108738838();
  func_0x000107c33080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108738020; end: 1087392c3;  */

void FUN_108738020(undefined1 *param_1)

{
  long unaff_x20;
  long unaff_x22;
  undefined1 unaff_w23;
  
  *param_1 = unaff_w23;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined1 **)(unaff_x22 + 8) = param_1;
  *(undefined1 **)(unaff_x20 + 0x90) = param_1;
  return;
}



/* Entry: 1087392c4; end: 108739303;  */

void FUN_1087392c4(void)

{
  FUN_108739304();
  return;
}



/* Entry: 108739304; end: 10873930f;  */

long FUN_108739304(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 8;
  func_0x0001005f1e70();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 108739310; end: 1087393e7;  */

void FUN_108739310(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined1 uStack_d1;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long alStack_a8 [2];
  undefined1 auStack_98 [96];
  undefined8 uStack_38;
  
  puVar2 = &uStack_c0;
  func_0x00010873a64c();
  puVar1 = (undefined1 *)(param_2 + 8);
  uStack_38 = extraout_x8;
  FUN_1086d3138(alStack_a8,puVar1);
  if (alStack_a8[0] == 0) {
    func_0x00010873a6a4();
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  else {
    __ZNSt3__16chrono12steady_clock3nowEv();
    FUN_10873a26c(auStack_98,param_4);
    func_0x00010bcce9b8(&uStack_c0,alStack_a8[0],auStack_98,param_3);
    func_0x00010873a674();
    param_1[1] = uStack_b8;
    *param_1 = uStack_c0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    *(undefined1 *)(param_1 + 2) = 1;
    func_0x000107c27f44(&uStack_c0);
    func_0x00010873a6a4();
    puVar1 = (undefined1 *)puVar2;
  }
  func_0x00010873a62c(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010873a674();
  func_0x00010873a6a4();
  func_0x00010873a65c();
  pcStack_c8 = FUN_1087393e8;
  puStack_d0 = &stack0xfffffffffffffff0;
  FUN_10873a2f0(&uStack_d1,puVar1);
  return;
}



/* Entry: 1087393e8; end: 10873940b;  */

void FUN_1087393e8(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_10873a2f0(&uStack_11,param_1);
  return;
}



/* Entry: 10873940c; end: 1087396e7;  */

long * FUN_10873940c(long *param_1,long *param_2,undefined ***param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined ***pppuVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_f0 [16];
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [16];
  undefined8 uStack_88;
  undefined8 uStack_80;
  long alStack_78 [2];
  undefined **ppuStack_68;
  code *pcStack_60;
  undefined8 *puStack_58;
  undefined ***pppuStack_50;
  undefined8 uStack_48;
  
  plVar1 = param_1;
  plVar3 = param_2;
  pppuVar4 = param_3;
  puVar5 = param_4;
  func_0x00010873a64c();
  plVar6 = plVar1 + 1;
  *plVar1 = (long)&PTR_FUN_110a69d38;
  uStack_48 = extraout_x8;
  if (*plVar3 == 0) {
    *plVar6 = 0;
    plVar1[2] = 0;
  }
  else {
    FUN_10873a488(&ppuStack_68,1);
    puStack_58[2] = 0;
    *puStack_58 = &PTR_FUN_110a6a050;
    puStack_58[1] = 0;
    plVar3 = (long *)0x90;
    _bzero(puStack_58 + 3,0x90);
    puVar2 = puStack_58;
    puStack_58 = (undefined8 *)0x0;
    param_1[1] = (long)(puVar2 + 3);
    param_1[2] = (long)puVar2;
    func_0x00010873a61c(&ppuStack_68);
  }
  plVar1 = (long *)*param_2;
  if ((plVar1 == (long *)0x0) || (*plVar6 == 0)) {
    param_1[3] = 0;
    param_1[4] = 0;
  }
  else {
    ppuStack_68 = (undefined **)0xd;
    pcStack_60 = (code *)CONCAT44(pcStack_60._4_4_,2);
    (**(code **)(*plVar1 + 0x10))(auStack_98,plVar1,&ppuStack_68);
    puVar2 = (undefined8 *)0x60;
    __Znwm();
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_FUN_110a69da8;
    lVar8 = param_1[2];
    lVar7 = param_1[1];
    if (param_1[2] != 0) {
      do {
        func_0x00010873a664();
      } while (extraout_w10 != 0);
    }
    ppuVar10 = param_3[1];
    ppuVar9 = *param_3;
    if (param_3[1] != (undefined **)0x0) {
      do {
        func_0x00010873a664();
      } while (extraout_w10_00 != 0);
    }
    uVar12 = param_4[1];
    uVar11 = *param_4;
    if (param_4[1] != 0) {
      do {
        func_0x00010873a664();
      } while (extraout_w10_01 != 0);
    }
    puVar2[4] = lVar8;
    puVar2[3] = lVar7;
    ppuStack_68 = (undefined **)0x0;
    pcStack_60 = (code *)0x0;
    puVar2[6] = ppuVar10;
    puVar2[5] = ppuVar9;
    alStack_78[0] = 0;
    alStack_78[1] = 0;
    puVar2[8] = uVar12;
    puVar2[7] = uVar11;
    uStack_88 = 0;
    uStack_80 = 0;
    *(undefined1 *)(puVar2 + 9) = 0;
    *(undefined1 *)(puVar2 + 0xb) = 0;
    func_0x00010873a230(&uStack_88);
    func_0x00010873a20c(alStack_78);
    FUN_1087398dc(&ppuStack_68);
    uStack_a8 = 0;
    uStack_a0 = 0;
    alStack_78[0] = 0;
    alStack_78[1] = 0;
    ppuStack_68 = &PTR_SUB_110a69df8;
    uStack_88 = 0;
    uStack_80 = 0;
    pppuVar4 = &ppuStack_68;
    plVar3 = plVar6;
    pcStack_60 = (code *)(puVar2 + 3);
    puStack_58 = puVar2;
    pppuStack_50 = &ppuStack_68;
    FUN_108884b58(param_1 + 3,auStack_98,plVar6);
    func_0x00010873a684();
    FUN_108739854(&uStack_88);
    FUN_108739854(alStack_78);
    FUN_108739854(&uStack_a8);
    func_0x000107c29764(auStack_98);
  }
  param_2 = (long *)*param_2;
  if ((param_2 == (long *)0x0) || (param_1[3] == 0)) {
    param_1[5] = 0;
    param_1[6] = 0;
  }
  else {
    ppuStack_68 = (undefined **)0x1;
    pcStack_60 = (code *)((ulong)pcStack_60 & 0xffffffff00000000);
    (**(code **)(*param_2 + 0x10))(alStack_78,param_2,&ppuStack_68);
    ppuStack_68 = &PTR_FUN_110a69f48;
    pcStack_60 = FUN_108739fe0;
    plVar3 = param_1 + 3;
    pppuVar4 = &ppuStack_68;
    pppuStack_50 = &ppuStack_68;
    FUN_108884b58(param_1 + 5,alStack_78,plVar3);
    func_0x00010873a684();
    param_2 = alStack_78;
    func_0x000107c29764(param_2);
  }
  func_0x00010873a62c(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010873a684();
    func_0x000107c29764(alStack_78);
    func_0x000107c29764(param_1 + 3);
    func_0x000107c29764(plVar6);
    __Unwind_Resume(param_2);
    pcStack_b8 = FUN_1087396e8;
    ppuStack_d8 = pppuVar4[1];
    ppuStack_e0 = *pppuVar4;
    *pppuVar4 = (undefined **)0x0;
    pppuVar4[1] = (undefined **)0x0;
    plStack_d0 = param_1;
    plStack_c8 = plVar6;
    puStack_c0 = &stack0xfffffffffffffff0;
    FUN_1087393e8(auStack_f0,puVar5);
    FUN_10873940c(param_2,plVar3,&ppuStack_e0,auStack_f0);
    func_0x00010873a230(auStack_f0);
    func_0x00010873a20c(&ppuStack_e0);
    return param_2;
  }
  return param_1;
}



/* Entry: 1087396e8; end: 10873976f;  */

undefined8
FUN_1087396e8(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_3[1];
  uStack_30 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  FUN_1087393e8(auStack_40,param_4);
  FUN_10873940c(param_1,param_2,&uStack_30,auStack_40);
  func_0x00010873a230(auStack_40);
  func_0x00010873a20c(&uStack_30);
  return param_1;
}



/* Entry: 108739770; end: 108739797;  */

bool FUN_108739770(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  bVar1 = false;
  if (lVar2 != 0) {
    FUN_108739798();
    bVar1 = (((uint)lVar2 ^ 0xffffffff) & 0x101) == 0;
  }
  return bVar1;
}



/* Entry: 108739798; end: 1087397e3;  */

uint FUN_108739798(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  
  FUN_108881abc();
  bVar1 = param_1[0x20];
  if (bVar1 != 1) {
    uVar2 = 0;
  }
  else {
    FUN_10873a254();
    uVar2 = (uint)*param_1;
  }
  return uVar2 | (uint)(bVar1 == 1) << 8;
}



/* Entry: 1087397e4; end: 108739807;  */

ulong FUN_1087397e4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x28);
  uVar2 = 0;
  if (uVar1 != 0) {
    FUN_1088819f0();
    uVar2 = uVar1 & 0xffffffff | 0x100000000;
  }
  return uVar2;
}



/* Entry: 108739808; end: 108739827;  */

void FUN_108739808(long param_1,undefined4 *param_2)

{
  undefined4 uStack_14;
  
  if (*(char *)(param_2 + 1) == '\x01') {
    uStack_14 = *param_2;
    FUN_108882930(*(long *)(param_1 + 0x28) + 0x78,&uStack_14);
    return;
  }
  return;
}



/* Entry: 108739828; end: 10873983b;  */

void FUN_108739828(void)

{
  FUN_10873a19c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10873983c; end: 10873983f;  */

undefined8 * FUN_10873983c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a69d38;
  func_0x000107c29764(param_1 + 5);
  func_0x000107c29764(param_1 + 3);
  func_0x000107c29764(param_1 + 1);
  return param_1;
}



/* Entry: 108739840; end: 108739853;  */

void FUN_108739840(void)

{
  func_0x00010873a1c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108739854; end: 108739877;  */

void FUN_108739854(long param_1)

{
  func_0x000107c332a0();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 108739878; end: 108739883;  */

void FUN_108739878(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a69da8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108739884; end: 108739897;  */

void FUN_108739884(void)

{
  FUN_108739878();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108739898; end: 1087398d7;  */

undefined8 FUN_108739898(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000108739900(param_1 + 0x18);
  func_0x000107c28ae0(param_1 + 0x48);
  func_0x00010873a230(param_1 + 0x38);
  func_0x00010873a20c(param_1 + 0x28);
  param_1 = param_1 + 0x18;
  func_0x000107c332a0();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 1087398d8; end: 1087398db;  */

void FUN_1087398d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087398dc; end: 108739963;  */

void FUN_1087398dc(long param_1)

{
  func_0x000107c332a0();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 108739964; end: 108739977;  */

void FUN_108739964(void)

{
  func_0x000108739938();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108739978; end: 1087399ab;  */

void FUN_108739978(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010873a6d8();
  func_0x00010873a6e4(&PTR_SUB_110a69df8);
  if (extraout_x8 != 0) {
    do {
      func_0x00010873a664();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1087399ac; end: 1087399f3;  */

void FUN_1087399ac(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  *param_2 = &PTR_SUB_110a69df8;
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010873a664(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1087399f4; end: 108739bb3;  */

void FUN_1087399f4(undefined8 param_1,long param_2,ulong *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined ***pppuVar9;
  undefined1 uVar10;
  undefined8 extraout_x8;
  undefined8 *puVar11;
  undefined **ppuVar12;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  long lStack_60;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010873a64c();
  puVar11 = *(undefined8 **)(param_2 + 8);
  uStack_38 = extraout_x8;
  func_0x000108739900(puVar11);
  func_0x00010b5caea8(0xd);
  uVar5 = (char)param_3[4] == '\x01' && (int)param_3[3] == 2;
  if ((bool)uVar5) {
    ppuVar12 = (undefined **)*param_3;
    if ((long)ppuVar12 < 0) {
LAB_108739b44:
      uVar10 = 1;
      goto LAB_108739b48;
    }
    FUN_108739bec(&ppuStack_58,puVar11 + 2);
    if (ppuStack_58 == (undefined **)0x0) {
      func_0x00010873a6bc();
    }
    else {
      ppuVar6 = ppuStack_58;
      func_0x000107c287d8();
      ppuVar7 = ppuVar6;
      func_0x00010873a6bc();
      lVar4 = (long)ppuVar12 - (long)ppuVar6;
      uVar5 = lVar4 == 0;
      if (ppuVar6 <= ppuVar12 && !(bool)uVar5) {
        __ZNSt3__16chrono12steady_clock3nowEv();
        uVar5 = 0x8637bd05af6 - lVar4 == (long)ppuVar7 / 1000000;
        uStack_68 = *puVar11;
        lStack_60 = puVar11[1];
        ppuVar12 = (undefined **)0x7fffffffffffffff;
        if ((long)ppuVar7 / 1000000 <= 0x8637bd05af6 - lVar4) {
          ppuVar12 = ppuVar7 + lVar4 * 0x1e848;
        }
        if (lStack_60 == 0) {
          puVar8 = (undefined8 *)puVar11[4];
        }
        else {
          plVar1 = (long *)(lStack_60 + 0x10);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          puVar8 = (undefined8 *)puVar11[4];
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        ppuStack_58 = &PTR_SUB_110a69e68;
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_40 = &ppuStack_58;
        uStack_50 = uStack_68;
        lStack_48 = lStack_60;
        (**(code **)*puVar8)(auStack_80,puVar8,ppuVar12,&ppuStack_58);
        func_0x000107c2975c(puVar11 + 6,auStack_80);
        func_0x000107c28ae0(auStack_80);
        func_0x000107c27938(&ppuStack_58);
        func_0x0001087398dc(&uStack_90);
        func_0x0001087398dc(&uStack_68);
        goto LAB_108739b44;
      }
    }
  }
  uVar10 = 0;
LAB_108739b48:
  ppuStack_58 = (undefined **)CONCAT71(ppuStack_58._1_7_,uVar10);
  uStack_40 = (undefined ***)((ulong)uStack_40._4_4_ << 0x20);
  pppuVar9 = &ppuStack_58;
  FUN_108739e30(param_1,pppuVar9);
  FUN_108739ed8();
  func_0x00010873a62c(uStack_38);
  if (!(bool)uVar5) {
    ___stack_chk_fail();
    func_0x000107c27938(&ppuStack_58);
    func_0x0001087398dc(&uStack_90);
    func_0x0001087398dc(&uStack_68);
    func_0x00010873a65c();
    func_0x00010873a6ac(pppuVar9);
    func_0x00010873a68c();
    return;
  }
  return;
}



/* Entry: 108739bb4; end: 108739bdf;  */

void FUN_108739bb4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010873a6ac(param_2,param_1,&PTR_DAT_110a69f28);
  func_0x00010873a68c();
  return;
}


