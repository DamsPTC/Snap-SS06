/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b13b4b8; end: 10b13bb67;  */

void FUN_10b13b4b8(undefined8 param_1,undefined8 param_2,long param_3,uint param_4)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  char cVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long extraout_x8;
  long lVar10;
  long extraout_x8_00;
  ulong uVar11;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  func_0x00010b13bfd0();
  do {
    puVar8 = unaff_x20;
LAB_10b13b4fc:
    unaff_x20 = puVar8;
    uVar9 = (long)unaff_x19 - (long)unaff_x20;
    uVar15 = (long)uVar9 / 0x18;
    switch(uVar15) {
    case 0:
    case 1:
      goto LAB_10b13bb48;
    case 2:
      if ((long)unaff_x20[2] <= (long)unaff_x19[-1]) {
        return;
      }
      func_0x00010b13bf9c(unaff_x20);
      return;
    case 3:
      func_0x00010b13bf54(unaff_x20,unaff_x20 + 3);
      return;
    case 4:
      func_0x00010b13bbfc(unaff_x20,unaff_x20 + 3,unaff_x20 + 6,unaff_x19 + -3);
      return;
    case 5:
      FUN_10b13bc68(unaff_x20,unaff_x20 + 3,unaff_x20 + 6,unaff_x20 + 9,unaff_x19 + -3);
      goto LAB_10b13bb48;
    }
    if ((long)uVar9 < 0x240) {
      if ((param_4 & 1) == 0) {
        if (unaff_x20 == unaff_x19) {
          return;
        }
        while( true ) {
          puVar8 = unaff_x20;
          unaff_x20 = puVar8 + 3;
          cVar4 = SBORROW8((long)unaff_x20,(long)unaff_x19);
          cVar5 = (long)unaff_x20 - (long)unaff_x19 < 0;
          if (unaff_x20 == unaff_x19) break;
          func_0x00010b13bf7c(puVar8[5]);
          if (cVar5 != cVar4) {
            func_0x00010b13bf6c();
            lStack_70 = extraout_x8_00;
            do {
              puVar6 = puVar8;
              func_0x00010b13bf94(puVar6 + 3);
              puVar8 = puVar6 + -3;
            } while (lStack_70 < (long)puVar6[-1]);
            func_0x00010b13bee8(puVar6,&uStack_80);
            func_0x00010b13bf4c();
          }
        }
        return;
      }
      if (unaff_x20 == unaff_x19) {
        return;
      }
      lVar17 = 0;
      puVar8 = unaff_x20;
      break;
    }
    if (param_3 == 0) {
      if (unaff_x20 == unaff_x19) {
        return;
      }
      uVar12 = uVar15 - 2 >> 1;
      uVar9 = uVar12;
      goto LAB_10b13b8d8;
    }
    puVar8 = unaff_x20 + (uVar15 >> 1) * 3;
    if (uVar9 < 0xc01) {
      func_0x00010b13bf54(puVar8,unaff_x20);
    }
    else {
      func_0x00010b13bf54(unaff_x20,puVar8);
      FUN_10b13bb68(unaff_x20 + 3,puVar8 + -3,unaff_x19 + -6);
      FUN_10b13bb68(unaff_x20 + 6,puVar8 + 3,unaff_x19 + -9);
      FUN_10b13bb68(puVar8 + -3,puVar8,puVar8 + 3);
      FUN_10b13be98(unaff_x20,puVar8);
    }
    param_3 = param_3 + -1;
    if ((param_4 & 1) == 0) {
      lVar17 = unaff_x20[2];
      if (lVar17 <= (long)unaff_x20[-1]) {
        func_0x00010b13bf6c();
        puVar6 = unaff_x20;
        if (lVar17 < (long)unaff_x19[-1]) {
          do {
            puVar8 = puVar6 + 3;
            plVar2 = puVar6 + 5;
            puVar6 = puVar8;
          } while (*plVar2 <= lVar17);
        }
        else {
          do {
            puVar8 = puVar6 + 3;
            if (unaff_x19 <= puVar8) break;
            plVar2 = puVar6 + 5;
            puVar6 = puVar8;
          } while (*plVar2 <= lVar17);
        }
        puVar6 = unaff_x19;
        puVar7 = unaff_x19;
        lStack_70 = lVar17;
        if (puVar8 < unaff_x19) {
          do {
            puVar7 = puVar6 + -3;
            plVar2 = puVar6 + -1;
            puVar6 = puVar7;
          } while (lVar17 < *plVar2);
        }
        while (puVar8 < puVar7) {
          FUN_10b13be98(puVar8,puVar7);
          do {
            plVar2 = puVar8 + 5;
            puVar8 = puVar8 + 3;
          } while (*plVar2 <= lVar17);
          do {
            plVar2 = puVar7 + -1;
            puVar7 = puVar7 + -3;
          } while (lVar17 < *plVar2);
        }
        puVar6 = puVar8 + -3;
        if (unaff_x20 != puVar6) {
          func_0x00010b13bee8(unaff_x20,puVar6);
        }
        func_0x00010b13bee8(puVar6,&uStack_80);
        func_0x00010b13bf4c();
        param_4 = 0;
        goto LAB_10b13b4fc;
      }
    }
    else {
      lVar17 = unaff_x20[2];
    }
    func_0x00010b13bf6c(0);
    lVar10 = extraout_x8;
    do {
      lVar13 = lVar10 + 0x28;
      lVar10 = lVar10 + 0x18;
    } while (*(long *)((long)unaff_x20 + lVar13) < lVar17);
    puVar6 = (undefined8 *)((long)unaff_x20 + lVar10);
    puVar7 = unaff_x19;
    puVar8 = puVar6;
    lStack_70 = lVar17;
    if (lVar10 == 0x18) {
      do {
        puVar16 = puVar7;
        if (puVar7 <= puVar6) break;
        puVar16 = puVar7 + -3;
        plVar2 = puVar7 + -1;
        puVar7 = puVar16;
      } while (lVar17 <= *plVar2);
    }
    else {
      do {
        puVar16 = puVar7 + -3;
        plVar2 = puVar7 + -1;
        puVar7 = puVar16;
      } while (lVar17 <= *plVar2);
    }
    while (puVar8 < puVar16) {
      FUN_10b13be98(puVar8,puVar16);
      do {
        plVar2 = puVar8 + 5;
        puVar8 = puVar8 + 3;
      } while (*plVar2 < lVar17);
      do {
        plVar2 = puVar16 + -1;
        puVar16 = puVar16 + -3;
      } while (lVar17 <= *plVar2);
    }
    puVar16 = puVar8 + -3;
    if (unaff_x20 != puVar16) {
      func_0x00010b13bee8(unaff_x20,puVar16);
    }
    func_0x00010b13bee8(puVar16,&uStack_80);
    func_0x00010b13bf4c();
    if (puVar6 < puVar7) goto LAB_10b13b6b0;
    puVar6 = unaff_x20;
    FUN_10b13bd04(unaff_x20,puVar16);
    puVar7 = puVar8;
    FUN_10b13bd04(puVar8,unaff_x19);
    if ((int)puVar7 == 0) goto code_r0x00010b13b6ac;
    unaff_x19 = puVar16;
    if (((ulong)puVar6 & 1) != 0) {
      return;
    }
  } while( true );
LAB_10b13b840:
  puVar6 = puVar8 + 3;
  if (puVar6 == unaff_x19) {
    return;
  }
  lStack_70 = puVar8[5];
  if (lStack_70 < (long)puVar8[2]) {
    uStack_78 = puVar8[4];
    uStack_80 = *puVar6;
    *puVar6 = 0;
    puVar8[4] = 0;
    lVar10 = lVar17;
    do {
      lVar13 = lVar10;
      func_0x00010b13bf94((long)unaff_x20 + lVar13 + 0x18);
      puVar8 = unaff_x20;
      if (lVar13 == 0) goto LAB_10b13b8a4;
      lVar10 = lVar13 + -0x18;
    } while (lStack_70 < *(long *)((long)unaff_x20 + lVar13 + -8));
    puVar8 = (undefined8 *)((long)unaff_x20 + lVar13);
LAB_10b13b8a4:
    func_0x00010b13bee8(puVar8,&uStack_80);
    func_0x00010b13bf4c();
  }
  lVar17 = lVar17 + 0x18;
  puVar8 = puVar6;
  goto LAB_10b13b840;
LAB_10b13b8d8:
  do {
    if ((long)uVar9 <= (long)uVar12) {
      uVar14 = (uVar9 & 0x3fffffffffffffff) << 1 | 1;
      puVar8 = unaff_x20 + uVar14 * 3;
      uVar3 = uVar9 * 2 + 2;
      uVar11 = uVar14;
      if ((long)uVar3 < (long)uVar15) {
        plVar2 = puVar8 + 2;
        plVar1 = puVar8 + 5;
        lVar17 = 0x18;
        if (*plVar1 <= *plVar2) {
          lVar17 = 0;
        }
        puVar8 = (undefined8 *)((long)puVar8 + lVar17);
        uVar11 = uVar3;
        if (*plVar1 <= *plVar2) {
          uVar11 = uVar14;
        }
      }
      puVar6 = unaff_x20 + uVar9 * 3;
      lVar17 = puVar6[2];
      if (lVar17 <= (long)puVar8[2]) {
        uStack_78 = puVar6[1];
        uStack_80 = *puVar6;
        *puVar6 = 0;
        puVar6[1] = 0;
        lStack_70 = lVar17;
        do {
          puVar7 = puVar8;
          func_0x00010b13bee8(puVar6,puVar7);
          if ((long)uVar12 < (long)uVar11) break;
          uVar14 = uVar11 << 1 | 1;
          puVar8 = unaff_x20 + uVar14 * 3;
          uVar3 = uVar11 * 2 + 2;
          uVar11 = uVar14;
          if ((long)uVar3 < (long)uVar15) {
            plVar2 = puVar8 + 2;
            plVar1 = puVar8 + 5;
            lVar10 = 0x18;
            if (*plVar1 <= *plVar2) {
              lVar10 = 0;
            }
            puVar8 = (undefined8 *)((long)puVar8 + lVar10);
            uVar11 = uVar3;
            if (*plVar1 <= *plVar2) {
              uVar11 = uVar14;
            }
          }
          puVar6 = puVar7;
        } while (lVar17 <= (long)puVar8[2]);
        func_0x00010b13bee8(puVar7,&uStack_80);
        func_0x00010b13bf4c();
      }
    }
    uVar9 = uVar9 - 1;
  } while (-1 < (long)uVar9);
  do {
    if ((long)uVar15 < 2) {
LAB_10b13bb48:
      return;
    }
    uStack_98 = unaff_x20[1];
    uStack_a0 = *unaff_x20;
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
    uStack_90 = unaff_x20[2];
    puVar8 = unaff_x20;
    uVar9 = 0;
    do {
      uVar3 = uVar9 << 1 | 1;
      uVar12 = uVar9 * 2 + 2;
      puVar6 = puVar8 + uVar9 * 3 + 3;
      uVar14 = uVar3;
      if (((long)uVar12 < (long)uVar15) &&
         (puVar6 = puVar8 + uVar9 * 3 + 6, uVar14 = uVar12,
         (long)puVar8[uVar9 * 3 + 8] <= (long)puVar8[uVar9 * 3 + 5])) {
        puVar6 = puVar8 + uVar9 * 3 + 3;
        uVar14 = uVar3;
      }
      puVar8 = puVar6;
      func_0x00010b13bf94();
      uVar9 = uVar14;
    } while ((long)uVar14 <= (long)(uVar15 - 2 >> 1));
    unaff_x19 = unaff_x19 + -3;
    if (puVar8 == unaff_x19) {
      func_0x00010b13bee8(puVar8,&uStack_a0);
    }
    else {
      func_0x00010b13bee8(puVar8,unaff_x19);
      func_0x00010b13bee8(unaff_x19,&uStack_a0);
      uVar9 = (long)puVar8 + (0x18 - (long)unaff_x20);
      if (0x18 < (long)uVar9) {
        uVar9 = uVar9 / 0x18 - 2 >> 1;
        lVar17 = puVar8[2];
        if ((long)(unaff_x20 + uVar9 * 3)[2] < lVar17) {
          uStack_78 = puVar8[1];
          uStack_80 = *puVar8;
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar6 = unaff_x20 + uVar9 * 3;
          lStack_70 = lVar17;
          do {
            puVar7 = puVar6;
            func_0x00010b13bee8(puVar8,puVar7);
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1 >> 1;
            puVar6 = unaff_x20 + uVar9 * 3;
            puVar8 = puVar7;
          } while ((long)(unaff_x20 + uVar9 * 3)[2] < lVar17);
          func_0x00010b13bee8(puVar7,&uStack_80);
          func_0x00010b13bf4c();
        }
      }
    }
    func_0x00010b121950(&uStack_a0);
    uVar15 = uVar15 - 1;
  } while( true );
code_r0x00010b13b6ac:
  if (((ulong)puVar6 & 1) == 0) {
LAB_10b13b6b0:
    FUN_10b13b4b8(unaff_x20,puVar16,param_3,param_4 & 1);
    param_4 = 0;
  }
  goto LAB_10b13b4fc;
}



/* Entry: 10b13bb68; end: 10b13bc67;  */

void FUN_10b13bb68(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar3 = param_2[2];
  lVar4 = param_3[2];
  if (lVar3 < (long)param_1[2]) {
    cVar1 = SBORROW8(lVar4,lVar3);
    cVar2 = lVar4 - lVar3 < 0;
    if (lVar3 <= lVar4) {
      FUN_10b13be98(param_1,param_2);
      func_0x00010b13bfc4(param_3[2]);
      param_1 = param_2;
      if (cVar2 == cVar1) {
        return;
      }
    }
LAB_10b13bbec:
    uStack_38 = param_1[1];
    uStack_40 = *param_1;
    *param_1 = 0;
    param_1[1] = 0;
    func_0x00010b13bee8();
    func_0x00010b13bee8(param_3,&uStack_40);
    func_0x00010b121950(&uStack_40);
    return;
  }
  cVar1 = SBORROW8(lVar4,lVar3);
  cVar2 = lVar4 - lVar3 < 0;
  if (lVar4 < lVar3) {
    FUN_10b13be98(param_2,param_3);
    func_0x00010b13bf7c(param_2[2]);
    param_3 = param_2;
    if (cVar2 != cVar1) goto LAB_10b13bbec;
  }
  return;
}



/* Entry: 10b13bc68; end: 10b13bd03;  */

void FUN_10b13bc68(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010b13bfd0();
  func_0x00010b13bbfc();
  lVar3 = *(long *)(param_5 + 0x10);
  lVar4 = *(long *)(param_4 + 0x10);
  cVar1 = SBORROW8(lVar3,lVar4);
  cVar2 = lVar3 - lVar4 < 0;
  if (lVar3 < lVar4) {
    FUN_10b13be98(param_4,param_5);
    func_0x00010b13bf7c(*(undefined8 *)(param_4 + 0x10));
    if (cVar2 != cVar1) {
      func_0x00010b13bf88();
      func_0x00010b13bfc4(*(undefined8 *)(param_3 + 0x10));
      if ((cVar2 != cVar1) &&
         (func_0x00010b13bf9c(), *(long *)(unaff_x19 + 0x10) < (long)unaff_x20[2])) {
        *unaff_x20 = 0;
        unaff_x20[1] = 0;
        func_0x00010b13bee8();
        func_0x00010b13bee8();
        func_0x00010b121950(&stack0xffffffffffffffc0);
        return;
      }
    }
  }
  return;
}



/* Entry: 10b13bd04; end: 10b13be97;  */

void FUN_10b13bd04(long param_1,undefined8 *param_2)

{
  long lVar1;
  char cVar2;
  char cVar3;
  long lVar4;
  undefined8 *puVar5;
  long extraout_x8;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  lVar7 = ((long)param_2 - param_1) / 0x18;
  cVar2 = SBORROW8(lVar7,5);
  cVar3 = lVar7 + -5 < 0;
  switch(lVar7) {
  case 0:
  case 1:
    break;
  case 2:
    func_0x00010b13bfc4(param_2[-1],1);
    if (cVar3 != cVar2) {
      func_0x00010b13be98(param_1,param_2 + -3);
    }
    break;
  case 3:
    func_0x00010b13bb68(param_1,param_1 + 0x18,param_2 + -3);
    break;
  case 4:
    func_0x00010b13bbfc(param_1,param_1 + 0x18,param_1 + 0x30,param_2 + -3);
    break;
  case 5:
    FUN_10b13bc68(param_1,param_1 + 0x18,param_1 + 0x30,param_1 + 0x48,param_2 + -3);
    break;
  default:
    func_0x00010b13bf54(param_1,param_1 + 0x18);
    lVar7 = 0;
    iVar8 = 0;
    puVar5 = (undefined8 *)(param_1 + 0x48);
    while( true ) {
      cVar2 = SBORROW8((long)puVar5,(long)param_2);
      cVar3 = (long)puVar5 - (long)param_2 < 0;
      if (puVar5 == param_2) break;
      func_0x00010b13bf7c(puVar5[2]);
      if (cVar3 != cVar2) {
        uStack_68 = puVar5[1];
        uStack_70 = *puVar5;
        *puVar5 = 0;
        puVar5[1] = 0;
        lVar6 = lVar7;
        lStack_60 = extraout_x8;
        do {
          lVar1 = param_1 + lVar6;
          func_0x00010b13bee8(lVar1 + 0x48,lVar1 + 0x30);
          lVar4 = param_1;
          if (lVar6 == -0x30) goto LAB_10b13be28;
          lVar6 = lVar6 + -0x18;
        } while (lStack_60 < *(long *)(lVar1 + 0x28));
        lVar4 = param_1 + lVar6 + 0x48;
LAB_10b13be28:
        func_0x00010b13bee8(lVar4,&uStack_70);
        iVar8 = iVar8 + 1;
        func_0x00010b121950(&uStack_70);
        if (iVar8 == 8) {
          return;
        }
      }
      puVar5 = puVar5 + 3;
      lVar7 = lVar7 + 0x18;
    }
  }
  return;
}



/* Entry: 10b13be98; end: 10b13bf4b;  */

void FUN_10b13be98(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  uStack_30 = param_1[2];
  func_0x00010b13bee8();
  func_0x00010b13bee8(param_2,&uStack_40);
  func_0x00010b121950(&uStack_40);
  return;
}



/* Entry: 10b13bf4c; end: 10b13bfdb;  */

void FUN_10b13bf4c(void)

{
  undefined1 *puVar1;
  
  puVar1 = &stack0x00000030;
  func_0x000107c350ac();
  if (puVar1 != (undefined1 *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10b13bfdc; end: 10b13c04b;  */

undefined8 *
FUN_10b13bfdc(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  *(undefined4 *)((long)param_1 + 0xc) = param_4;
  FUN_10b13c600(param_1 + 2,param_5);
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[5] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
  func_0x000107c28144();
  func_0x000107c28144(param_1 + 5);
  return param_1;
}



/* Entry: 10b13c04c; end: 10b13c093;  */

void FUN_10b13c04c(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = param_1 + 0x40;
  func_0x000107c28148();
  plVar3 = (long *)(param_1 + 0x58);
  FUN_10b13c094(plVar3,param_2);
  *plVar3 = lVar2;
  puVar1 = (undefined8 *)(param_1 + 0x40);
  *puVar1 = 0;
  __ZNSt3__16chrono12steady_clock3nowEv();
  *(undefined8 **)(param_1 + 0x48) = puVar1;
  *(undefined1 *)(param_1 + 0x50) = 1;
  return;
}



/* Entry: 10b13c094; end: 10b13c0c7;  */

long FUN_10b13c094(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_10b13c964(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x28;
}



/* Entry: 10b13c0c8; end: 10b13c413;  */

undefined8 ***** FUN_10b13c0c8(undefined8 param_1,float param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *****pppppuVar4;
  char *pcVar5;
  undefined8 *****pppppuVar6;
  undefined8 ***pppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 *****pppppuVar9;
  undefined8 ****ppppuVar10;
  long lVar11;
  undefined8 *****pppppuVar12;
  undefined8 *****unaff_x24;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  undefined8 ***pppuVar16;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 ****ppppuStack_100;
  long *plStack_f8;
  long lStack_f0;
  undefined8 ****ppppuStack_e8;
  undefined8 ****ppppuStack_e0;
  undefined8 ****ppppuStack_d8;
  long lStack_d0;
  undefined1 auStack_c0 [40];
  char *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c28148(param_3 + 8);
  func_0x000107c278b8(&ppppuStack_e8,&DAT_10f576f35);
  func_0x00010b13cdb8();
  func_0x00010b13cdac();
  func_0x000107c28148(param_3 + 5);
  pcVar5 = "total";
  func_0x000107c278b8(&ppppuStack_e8);
  func_0x00010b13cdb8();
  func_0x00010b13cdac();
  func_0x0001053a4504(param_3 + 8);
  pppppuVar9 = (undefined8 *****)(param_3 + 5);
  func_0x0001053a4504();
  puVar13 = param_3 + 0xd;
  while (puVar13 = (undefined8 *)*puVar13, puVar13 != (undefined8 *)0x0) {
    FUN_10b126f8c(&ppppuStack_e8,*(undefined4 *)((long)param_3 + 0xc));
    func_0x00010b126fec(auStack_c0,0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (&uStack_118,puVar13 + 2);
    pcStack_98 = "step";
    uStack_90 = 4;
    uStack_80 = uStack_110;
    uStack_88 = uStack_118;
    uStack_78 = uStack_108;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010b120648(&ppppuStack_100,&ppppuStack_e8,3);
    lVar11 = 0x60;
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                ((long)&ppppuStack_e8 + lVar11);
      lVar11 = lVar11 + -0x28;
    } while (lVar11 != -0x18);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_118);
    plVar3 = plStack_f8;
    lVar11 = param_3[2];
    lVar15 = param_3[3] - lVar11;
    if (0 < lVar15) {
      if (lStack_f0 - (long)plStack_f8 < lVar15) {
        pppppuVar9 = &ppppuStack_100;
        FUN_10b13c794(pppppuVar9,((long)plStack_f8 - (long)ppppuStack_100) / 0x28 + lVar15 / 0x28);
        FUN_10b13c7e4(&ppppuStack_e8,pppppuVar9,((long)plVar3 - (long)ppppuStack_100) / 0x28,
                      &lStack_f0);
        lVar1 = (long)ppppuStack_d8 + lVar15;
        unaff_x24 = (undefined8 *****)ppppuStack_d8;
        for (; lVar15 != 0; lVar15 = lVar15 + -0x28) {
          FUN_10b120854(unaff_x24,lVar11);
          unaff_x24 = unaff_x24 + 5;
          lVar11 = lVar11 + 0x28;
        }
        ppppuStack_d8 = (undefined8 ****)lVar1;
        FUN_10b13c830(&lStack_f0,plVar3,plStack_f8,lVar1);
        ppppuStack_d8 = (undefined8 ****)((long)plStack_f8 + ((long)ppppuStack_d8 - (long)plVar3));
        pppppuVar9 = (undefined8 *****)
                     (ppppuStack_e0 + (((long)plVar3 - (long)ppppuStack_100) / -0x28) * 5);
        plStack_f8 = plVar3;
        FUN_10b13c830(&lStack_f0,ppppuStack_100,plVar3,pppppuVar9);
        lVar11 = lStack_f0;
        lStack_f0 = lStack_d0;
        plStack_f8 = (long *)ppppuStack_d8;
        ppppuStack_d8 = ppppuStack_100;
        lStack_d0 = lVar11;
        ppppuStack_e8 = ppppuStack_100;
        ppppuStack_e0 = ppppuStack_100;
        ppppuStack_100 = pppppuVar9;
        func_0x00010b13c8f4(&ppppuStack_e8);
      }
      else {
        plVar3 = &lStack_f0;
        FUN_10b13c704(plVar3,lVar11,param_3[3],plStack_f8);
        plStack_f8 = plVar3;
      }
    }
    pcVar5 = (char *)(ulong)*(uint *)(param_3 + 1);
    FUN_10b1135dc(*param_3,pcVar5,&ppppuStack_100,puVar13[5]);
    pppppuVar9 = &ppppuStack_100;
    FUN_10b120998();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return pppppuVar9;
  }
  ___stack_chk_fail();
  pppppuVar4 = &ppppuStack_e8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010b13cd64();
  func_0x00010b13cdc4();
  pppppuVar12 = (undefined8 *****)pppppuVar9[1];
  if (pppppuVar12 != (undefined8 *****)0x0) {
    uVar14 = (long)pppppuVar12 - 1;
    if (((ulong)pppppuVar12 & uVar14) == 0) {
      unaff_x24 = (undefined8 *****)(uVar14 & (ulong)pppppuVar4);
    }
    else {
      unaff_x24 = pppppuVar4;
      if (pppppuVar12 <= pppppuVar4) {
        uVar2 = 0;
        if (pppppuVar12 != (undefined8 *****)0x0) {
          uVar2 = (ulong)pppppuVar4 / (ulong)pppppuVar12;
        }
        unaff_x24 = (undefined8 *****)((long)pppppuVar4 - uVar2 * (long)pppppuVar12);
      }
    }
    ppppuVar10 = (undefined8 ****)(*pppppuVar9)[(long)unaff_x24];
    if (ppppuVar10 != (undefined8 ****)0x0) {
      do {
        while( true ) {
          ppppuVar10 = (undefined8 ****)*ppppuVar10;
          if (ppppuVar10 == (undefined8 ****)0x0) goto LAB_10b13c4cc;
          pppppuVar6 = (undefined8 *****)ppppuVar10[1];
          if (pppppuVar6 != pppppuVar4) break;
          ppppuVar8 = ppppuVar10 + 2;
          func_0x000107c278d0(ppppuVar8,pcVar5);
          if (((ulong)ppppuVar8 & 1) != 0) goto LAB_10b13c5d8;
        }
        if (((ulong)pppppuVar12 & uVar14) == 0) {
          pppppuVar6 = (undefined8 *****)((ulong)pppppuVar6 & uVar14);
        }
        else if (pppppuVar12 <= pppppuVar6) {
          uVar2 = 0;
          if (pppppuVar12 != (undefined8 *****)0x0) {
            uVar2 = (ulong)pppppuVar6 / (ulong)pppppuVar12;
          }
          pppppuVar6 = (undefined8 *****)((long)pppppuVar6 - uVar2 * (long)pppppuVar12);
        }
      } while (pppppuVar6 == unaff_x24);
    }
  }
LAB_10b13c4cc:
  pppppuVar6 = pppppuVar9 + 2;
  ppppuVar10 = (undefined8 ****)0x30;
  __Znwm();
  *ppppuVar10 = (undefined8 ***)0x0;
  ppppuVar10[1] = pppppuVar4;
  pppuVar16 = *(undefined8 ****)pcVar5;
  ppppuVar10[3] = *(undefined8 ****)(pcVar5 + 8);
  ppppuVar10[2] = pppuVar16;
  pppuVar7 = *(undefined8 ****)(pcVar5 + 0x10);
  pcVar5[0] = '\0';
  pcVar5[1] = '\0';
  pcVar5[2] = '\0';
  pcVar5[3] = '\0';
  pcVar5[4] = '\0';
  pcVar5[5] = '\0';
  pcVar5[6] = '\0';
  pcVar5[7] = '\0';
  pcVar5[8] = '\0';
  pcVar5[9] = '\0';
  pcVar5[10] = '\0';
  pcVar5[0xb] = '\0';
  pcVar5[0xc] = '\0';
  pcVar5[0xd] = '\0';
  pcVar5[0xe] = '\0';
  pcVar5[0xf] = '\0';
  pcVar5[0x10] = '\0';
  pcVar5[0x11] = '\0';
  pcVar5[0x12] = '\0';
  pcVar5[0x13] = '\0';
  pcVar5[0x14] = '\0';
  pcVar5[0x15] = '\0';
  pcVar5[0x16] = '\0';
  pcVar5[0x17] = '\0';
  ppppuVar10[4] = pppuVar7;
  ppppuVar10[5] = (undefined8 ***)0x0;
  func_0x00010b13cde4();
  if ((pppppuVar12 == (undefined8 *****)0x0) || (param_2 * (float)pppppuVar12 < SUB84(pppuVar16,0)))
  {
    func_0x00010b13cd94((long)pppppuVar12 << 1);
    FUN_10b13cb60(pppppuVar9);
    pppppuVar12 = (undefined8 *****)pppppuVar9[1];
    if (((ulong)pppppuVar12 & (long)pppppuVar12 - 1U) == 0) {
      unaff_x24 = (undefined8 *****)((long)pppppuVar12 - 1U & (ulong)pppppuVar4);
    }
    else {
      unaff_x24 = pppppuVar4;
      if (pppppuVar12 <= pppppuVar4) {
        uVar14 = 0;
        if (pppppuVar12 != (undefined8 *****)0x0) {
          uVar14 = (ulong)pppppuVar4 / (ulong)pppppuVar12;
        }
        unaff_x24 = (undefined8 *****)((long)pppppuVar4 - uVar14 * (long)pppppuVar12);
      }
    }
  }
  ppppuVar8 = *pppppuVar9;
  pppuVar7 = ppppuVar8[(long)unaff_x24];
  if (pppuVar7 == (undefined8 ***)0x0) {
    *ppppuVar10 = *pppppuVar6;
    *pppppuVar6 = ppppuVar10;
    ppppuVar8[(long)unaff_x24] = pppppuVar6;
    if (*ppppuVar10 != (undefined8 ***)0x0) {
      pppppuVar9 = (undefined8 *****)(*ppppuVar10)[1];
      if (((ulong)pppppuVar12 & (long)pppppuVar12 - 1U) == 0) {
        pppppuVar9 = (undefined8 *****)((ulong)pppppuVar9 & (long)pppppuVar12 - 1U);
      }
      else if (pppppuVar12 <= pppppuVar9) {
        uVar14 = 0;
        if (pppppuVar12 != (undefined8 *****)0x0) {
          uVar14 = (ulong)pppppuVar9 / (ulong)pppppuVar12;
        }
        pppppuVar9 = (undefined8 *****)((long)pppppuVar9 - uVar14 * (long)pppppuVar12);
      }
      ppppuVar8[(long)pppppuVar9] = ppppuVar10;
    }
  }
  else {
    *ppppuVar10 = (undefined8 ***)*pppuVar7;
    *pppuVar7 = ppppuVar10;
  }
  func_0x00010b13cd6c();
LAB_10b13c5d8:
  return (undefined8 *****)(ppppuVar10 + 5);
}



/* Entry: 10b13c414; end: 10b13c5ff;  */

long * FUN_10b13c414(undefined8 param_1,float param_2,ulong param_3,long *param_4)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x19;
  long *plVar6;
  ulong uVar7;
  ulong unaff_x24;
  ulong uVar8;
  long lVar9;
  
  func_0x00010b13cdc4();
  uVar7 = unaff_x19[1];
  if (uVar7 != 0) {
    uVar8 = uVar7 - 1;
    if ((uVar7 & uVar8) == 0) {
      unaff_x24 = uVar8 & param_3;
    }
    else {
      unaff_x24 = param_3;
      if (uVar7 <= param_3) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = param_3 / uVar7;
        }
        unaff_x24 = param_3 - uVar3 * uVar7;
      }
    }
    plVar6 = *(long **)(*unaff_x19 + unaff_x24 * 8);
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_10b13c4cc;
          uVar3 = plVar6[1];
          if (uVar3 != param_3) break;
          plVar2 = plVar6 + 2;
          func_0x000107c278d0(plVar2,param_4);
          if (((ulong)plVar2 & 1) != 0) goto LAB_10b13c5d8;
        }
        if ((uVar7 & uVar8) == 0) {
          uVar3 = uVar3 & uVar8;
        }
        else if (uVar7 <= uVar3) {
          uVar1 = 0;
          if (uVar7 != 0) {
            uVar1 = uVar3 / uVar7;
          }
          uVar3 = uVar3 - uVar1 * uVar7;
        }
      } while (uVar3 == unaff_x24);
    }
  }
LAB_10b13c4cc:
  plVar2 = unaff_x19 + 2;
  plVar6 = (long *)0x30;
  __Znwm();
  *plVar6 = 0;
  plVar6[1] = param_3;
  lVar9 = *param_4;
  plVar6[3] = param_4[1];
  plVar6[2] = lVar9;
  lVar4 = param_4[2];
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  plVar6[4] = lVar4;
  plVar6[5] = 0;
  func_0x00010b13cde4();
  if ((uVar7 == 0) || (param_2 * (float)uVar7 < (float)lVar9)) {
    func_0x00010b13cd94(uVar7 << 1);
    FUN_10b13cb60();
    uVar7 = unaff_x19[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x24 = uVar7 - 1 & param_3;
    }
    else {
      unaff_x24 = param_3;
      if (uVar7 <= param_3) {
        uVar8 = 0;
        if (uVar7 != 0) {
          uVar8 = param_3 / uVar7;
        }
        unaff_x24 = param_3 - uVar8 * uVar7;
      }
    }
  }
  lVar4 = *unaff_x19;
  plVar5 = *(long **)(lVar4 + unaff_x24 * 8);
  if (plVar5 == (long *)0x0) {
    *plVar6 = *plVar2;
    *plVar2 = (long)plVar6;
    *(long **)(lVar4 + unaff_x24 * 8) = plVar2;
    if (*plVar6 != 0) {
      uVar8 = *(ulong *)(*plVar6 + 8);
      if ((uVar7 & uVar7 - 1) == 0) {
        uVar8 = uVar8 & uVar7 - 1;
      }
      else if (uVar7 <= uVar8) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = uVar8 / uVar7;
        }
        uVar8 = uVar8 - uVar3 * uVar7;
      }
      *(long **)(lVar4 + uVar8 * 8) = plVar6;
    }
  }
  else {
    *plVar6 = *plVar5;
    *plVar5 = (long)plVar6;
  }
  func_0x00010b13cd6c();
LAB_10b13c5d8:
  return plVar6 + 5;
}



/* Entry: 10b13c600; end: 10b13c63b;  */

undefined8 * FUN_10b13c600(undefined8 *param_1,long *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10b13c63c(param_1,*param_2,param_2[1],(param_2[1] - *param_2) / 0x28);
  return param_1;
}



/* Entry: 10b13c63c; end: 10b13c6bb;  */

void FUN_10b13c63c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    FUN_10b1206dc(param_1,param_4);
    FUN_10b13c6bc(param_1,param_2,param_3,param_4);
  }
  uStack_38 = 1;
  func_0x00010b1208fc(&uStack_40);
  return;
}



/* Entry: 10b13c6bc; end: 10b13c6ef;  */

void FUN_10b13c6bc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  FUN_10b13c6f0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10b13c6f0; end: 10b13c703;  */

void FUN_10b13c6f0(void)

{
  FUN_10b13c704();
  return;
}



/* Entry: 10b13c704; end: 10b13c793;  */

long FUN_10b13c704(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x28) {
    FUN_10b120854(param_4,param_2);
    param_4 = param_4 + 0x28;
  }
  func_0x00010b13cd8c();
  return param_4;
}



/* Entry: 10b13c794; end: 10b13c7e3;  */

long * FUN_10b13c794(long *param_1,long *param_2,long param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  
  if ((long *)0x666666666666666 < param_2) {
    FUN_10b120754();
    param_1[3] = 0;
    param_1[4] = param_4;
    if (param_2 == (long *)0x0) {
      param_4 = 0;
    }
    else {
      FUN_10b120760();
    }
    lVar2 = param_4 + param_3 * 0x28;
    *param_1 = param_4;
    param_1[1] = lVar2;
    param_1[2] = lVar2;
    param_1[3] = param_4 + (long)param_2 * 0x28;
    return param_1;
  }
  uVar1 = (param_1[2] - *param_1) / 0x28;
  plVar3 = (long *)(uVar1 * 2);
  if (plVar3 < param_2 || (long)plVar3 - (long)param_2 == 0) {
    plVar3 = param_2;
  }
  if (0x333333333333332 < uVar1) {
    plVar3 = (long *)0x666666666666666;
  }
  return plVar3;
}



/* Entry: 10b13c7e4; end: 10b13c82f;  */

long * FUN_10b13c7e4(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    FUN_10b120760();
  }
  lVar1 = param_4 + param_3 * 0x28;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x28;
  return param_1;
}



/* Entry: 10b13c830; end: 10b13c8bf;  */

void FUN_10b13c830(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  for (; param_2 != param_3; param_2 = param_2 + 5) {
    uVar1 = *param_2;
    param_4[1] = param_2[1];
    *param_4 = uVar1;
    uVar2 = param_2[3];
    uVar1 = param_2[2];
    param_4[4] = param_2[4];
    param_4[3] = uVar2;
    param_4[2] = uVar1;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[2] = 0;
    param_4 = param_4 + 5;
  }
  FUN_10b13c8c0();
  func_0x00010b13cd8c();
  return;
}



/* Entry: 10b13c8c0; end: 10b13c91f;  */

void FUN_10b13c8c0(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x28) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_2 + 0x10);
  }
  return;
}



/* Entry: 10b13c920; end: 10b13c927;  */

void FUN_10b13c920(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar2 = *(long *)(param_1 + 0x10), lVar1 != lVar2) {
    *(long *)(param_1 + 0x10) = lVar2 + -0x28;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar2 + -0x18);
  }
  return;
}



/* Entry: 10b13c928; end: 10b13c963;  */

void FUN_10b13c928(long param_1,long param_2)

{
  long lVar1;
  
  while (lVar1 = *(long *)(param_1 + 0x10), param_2 != lVar1) {
    *(long *)(param_1 + 0x10) = lVar1 + -0x28;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + -0x18);
  }
  return;
}



/* Entry: 10b13c964; end: 10b13cb5f;  */

undefined1  [16]
FUN_10b13c964(float param_1,float param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
             undefined8 *param_6)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *unaff_x19;
  long *plVar7;
  ulong uVar8;
  ulong unaff_x25;
  ulong uVar9;
  undefined1 auVar10 [16];
  
  func_0x00010b13cdc4();
  uVar8 = unaff_x19[1];
  if (uVar8 != 0) {
    uVar9 = uVar8 - 1;
    if ((uVar8 & uVar9) == 0) {
      unaff_x25 = uVar9 & param_3;
    }
    else {
      unaff_x25 = param_3;
      if (uVar8 <= param_3) {
        uVar4 = 0;
        if (uVar8 != 0) {
          uVar4 = param_3 / uVar8;
        }
        unaff_x25 = param_3 - uVar4 * uVar8;
      }
    }
    plVar7 = *(long **)(*unaff_x19 + unaff_x25 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_10b13ca20;
          uVar4 = plVar7[1];
          if (uVar4 != param_3) break;
          plVar2 = plVar7 + 2;
          func_0x000107c278d0(plVar2,param_4);
          if (((ulong)plVar2 & 1) != 0) {
            uVar3 = 0;
            goto LAB_10b13cb34;
          }
        }
        if ((uVar8 & uVar9) == 0) {
          uVar4 = uVar4 & uVar9;
        }
        else if (uVar8 <= uVar4) {
          uVar1 = 0;
          if (uVar8 != 0) {
            uVar1 = uVar4 / uVar8;
          }
          uVar4 = uVar4 - uVar1 * uVar8;
        }
      } while (uVar4 == unaff_x25);
    }
  }
LAB_10b13ca20:
  uVar3 = *param_6;
  plVar2 = unaff_x19 + 2;
  plVar7 = (long *)0x30;
  __Znwm();
  *plVar7 = 0;
  plVar7[1] = param_3;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar7 + 2,uVar3);
  plVar7[5] = 0;
  func_0x00010b13cde4();
  if ((uVar8 == 0) || (param_2 * (float)uVar8 < param_1)) {
    func_0x00010b13cd94(uVar8 << 1);
    FUN_10b13cb60();
    uVar8 = unaff_x19[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x25 = uVar8 - 1 & param_3;
    }
    else {
      unaff_x25 = param_3;
      if (uVar8 <= param_3) {
        uVar9 = 0;
        if (uVar8 != 0) {
          uVar9 = param_3 / uVar8;
        }
        unaff_x25 = param_3 - uVar9 * uVar8;
      }
    }
  }
  lVar5 = *unaff_x19;
  plVar6 = *(long **)(lVar5 + unaff_x25 * 8);
  if (plVar6 == (long *)0x0) {
    *plVar7 = *plVar2;
    *plVar2 = (long)plVar7;
    *(long **)(lVar5 + unaff_x25 * 8) = plVar2;
    if (*plVar7 != 0) {
      uVar9 = *(ulong *)(*plVar7 + 8);
      if ((uVar8 & uVar8 - 1) == 0) {
        uVar9 = uVar9 & uVar8 - 1;
      }
      else if (uVar8 <= uVar9) {
        uVar4 = 0;
        if (uVar8 != 0) {
          uVar4 = uVar9 / uVar8;
        }
        uVar9 = uVar9 - uVar4 * uVar8;
      }
      *(long **)(lVar5 + uVar9 * 8) = plVar7;
    }
  }
  else {
    *plVar7 = *plVar6;
    *plVar6 = (long)plVar7;
  }
  func_0x00010b13cd6c();
  uVar3 = 1;
LAB_10b13cb34:
  auVar10._8_8_ = uVar3;
  auVar10._0_8_ = plVar7;
  return auVar10;
}



/* Entry: 10b13cb60; end: 10b13cd07;  */

void FUN_10b13cb60(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar3 = param_1;
  plVar5 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar3 = param_2;
  }
  plVar7 = (long *)param_1[1];
  if (plVar7 > param_2 || param_2 == plVar7) {
    if (plVar7 <= param_2) {
      return;
    }
    plVar3 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar7 < (long *)0x3) || (((ulong)plVar7 & (long)plVar7 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar3) {
      plVar3 = (long *)(1L << (-LZCOUNT((long)plVar3 - 1) & 0x3fU));
    }
    if (param_2 <= plVar3) {
      param_2 = plVar3;
    }
    if (plVar7 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      FUN_10b13cd08(param_1,0);
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm(lVar2);
    FUN_10b13cd08(param_1,lVar2);
    param_1[1] = (long)param_2;
    lVar2 = *param_1;
    for (plVar3 = (long *)0x0; param_2 != plVar3; plVar3 = (long *)((long)plVar3 + 1)) {
      *(undefined8 *)(lVar2 + (long)plVar3 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      plVar5 = (long *)plVar3[1];
      uVar4 = (long)param_2 - 1;
      uVar1 = 0;
      if (param_2 != (long *)0x0) {
        uVar1 = (ulong)plVar5 / (ulong)param_2;
      }
      plVar7 = plVar5;
      if (param_2 <= plVar5) {
        plVar7 = (long *)((long)plVar5 - uVar1 * (long)param_2);
      }
      if (((ulong)param_2 & uVar4) == 0) {
        plVar7 = (long *)((ulong)plVar5 & uVar4);
      }
      *(long **)(lVar2 + (long)plVar7 * 8) = param_1 + 2;
      while (plVar5 = plVar3, plVar3 = (long *)*plVar5, plVar3 != (long *)0x0) {
        plVar6 = (long *)plVar3[1];
        if (((ulong)param_2 & uVar4) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar4);
        }
        else if (param_2 <= plVar6) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar6 / (ulong)param_2;
          }
          plVar6 = (long *)((long)plVar6 - uVar1 * (long)param_2);
        }
        if (plVar6 != plVar7) {
          if (*(long *)(lVar2 + (long)plVar6 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar6 * 8) = plVar5;
            plVar7 = plVar6;
          }
          else {
            *plVar5 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar2 + (long)plVar6 * 8);
            **(long **)(lVar2 + (long)plVar6 * 8) = (long)plVar3;
            plVar3 = plVar5;
          }
        }
      }
    }
    return;
  }
  func_0x000104bd35f4();
  lVar2 = *plVar3;
  *plVar3 = (long)plVar5;
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b13cd08; end: 10b13cd1f;  */

void FUN_10b13cd08(long *param_1,long param_2)

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



/* Entry: 10b13cd20; end: 10b13cd63;  */

long * FUN_10b13cd20(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10b13cd64; end: 10b13cdf7;  */

void FUN_10b13cd64(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10b13cdf8; end: 10b13ceaf;  */

void FUN_10b13cdf8(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 extraout_x8;
  long lVar4;
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long alStack_78 [2];
  code *pcStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 uStack_38;
  
  func_0x00010b14ead4();
  uStack_38 = extraout_x8;
  FUN_10b13ceb0(alStack_78,param_2);
  pcStack_68 = FUN_10b1446f8;
  ppuStack_60 = &PTR_DAT_110cbe778;
  lStack_58 = param_1;
  plStack_50 = alStack_78;
  FUN_10b13cf0c(&uStack_90,*(undefined8 *)(alStack_78[0] + 0x38),&pcStack_68);
  unaff_x19[1] = uStack_88;
  *unaff_x19 = uStack_90;
  uStack_90 = 0;
  uStack_88 = 0;
  func_0x00010b14ff14();
  func_0x00010b14f39c(ppuStack_60);
  plVar1 = alStack_78;
  FUN_10b12878c();
  func_0x00010b14e980(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b14f39c(ppuStack_60);
    plVar2 = alStack_78;
    FUN_10b12878c();
    func_0x00010b14efcc();
    func_0x00010b14f67c();
    lVar3 = *plVar2;
    if ((lVar3 == 0) || (___dynamic_cast(lVar3,&PTR_DAT_110874c20,&PTR_DAT_110cc0b00,0), lVar3 == 0)
       ) {
      *plVar1 = 0;
      plVar1[1] = 0;
    }
    else {
      lVar4 = *(long *)(param_1 + 8);
      *plVar1 = lVar3;
      plVar1[1] = lVar4;
      if (lVar4 != 0) {
        do {
          func_0x00010b14ea0c();
        } while (extraout_w10 != 0);
      }
    }
    return;
  }
  return;
}



/* Entry: 10b13ceb0; end: 10b13cf0b;  */

void FUN_10b13ceb0(long *param_1)

{
  long lVar1;
  long lVar2;
  int extraout_w10;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x00010b14f67c();
  lVar1 = *param_1;
  if ((lVar1 == 0) || (___dynamic_cast(lVar1,&PTR_DAT_110874c20,&PTR_DAT_110cc0b00,0), lVar1 == 0))
  {
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
  }
  else {
    lVar2 = *(long *)(unaff_x20 + 8);
    *unaff_x19 = lVar1;
    unaff_x19[1] = lVar2;
    if (lVar2 != 0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10 != 0);
    }
  }
  return;
}



/* Entry: 10b13cf0c; end: 10b13cfab;  */

void FUN_10b13cf0c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined1 in_ZR;
  bool bVar7;
  undefined1 uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  long *extraout_x8_01;
  undefined8 extraout_x8_02;
  long lVar15;
  undefined8 extraout_x8_03;
  long extraout_x8_04;
  undefined8 extraout_x8_05;
  ulong extraout_x8_06;
  undefined8 extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  undefined8 extraout_x9_02;
  long extraout_x9_03;
  ulong extraout_x9_04;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  long extraout_x11_01;
  long extraout_x12;
  undefined8 *puVar16;
  long unaff_x22;
  long *plVar17;
  long lVar18;
  undefined8 uVar19;
  int iVar20;
  long in_register_00005008;
  long *plStack_130;
  undefined8 *puStack_100;
  long *plStack_f8;
  undefined1 auStack_f0 [8];
  long lStack_e8;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined8 auStack_60 [5];
  undefined8 uStack_38;
  
  puVar9 = auStack_80;
  func_0x00010b14ead4(param_2,param_2);
  uStack_38 = extraout_x8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_80);
  uStack_68 = *param_3;
  func_0x00010b150380(*(undefined8 *)(param_3[1] + 0x10),auStack_60);
  FUN_10b14415c(auStack_80,&uStack_68);
  func_0x00010b14f39c(auStack_60[0]);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010b14e980(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b14f39c(auStack_60[0]);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
  func_0x00010b14efcc();
  puVar10 = (undefined8 *)0x180;
  __Znwm();
  *puVar10 = FUN_10b14e23c;
  puVar10[1] = FUN_10b14e810;
  puVar16 = puVar10 + 2;
  *puVar16 = &PTR_FUN_110cbe1c8;
  puVar11 = puVar10;
  func_0x00010b14fddc();
  func_0x00010b14f160();
  puVar5 = puVar10 + 0x27;
  puVar11[2] = 0;
  *puVar11 = &PTR_FUN_110cbe1e8;
  plVar17 = puVar10 + 0x1d;
  plVar1 = puVar10 + 0x29;
  func_0x00010b14eb94();
  do {
    func_0x00010b14eb14();
  } while (extraout_w11 != 0);
  *(undefined1 *)(puVar10 + 7) = 0;
  puVar10[2] = &PTR_DAT_110cbe180;
  *(undefined1 *)(puVar10 + 10) = 0;
  plStack_130 = extraout_x8_01;
  do {
    func_0x00010b14eb14();
  } while (extraout_w11_00 != 0);
  do {
    func_0x00010b14eb14();
  } while (extraout_w11_01 != 0);
  *extraout_x8_00 = extraout_x8_02;
  extraout_x8_00[1] = puVar11;
  func_0x00010b150314();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar10 + 0x17,puVar9);
  FUN_10b1b9728(plVar17);
  plVar12 = plVar17;
  FUN_10b1270a8();
  if (((ulong)plVar12 & 1) == 0) {
    *(undefined1 *)(puVar10 + 0x2f) = 0;
    puStack_100 = puVar10;
    plStack_f8 = plVar17;
    FUN_10b12713c(auStack_f0,plVar17,&puStack_100);
    if (lStack_e8 == 0) {
      return;
    }
    do {
      func_0x00010b14ea74();
    } while (extraout_w11_02 != 0);
    if (extraout_x9_00 != 0) {
      return;
    }
    func_0x00010b14e9c4();
    func_0x00010b14f3ec();
    return;
  }
  FUN_10b113e08(puVar10 + 0x23,plVar17);
  FUN_10b120e24(plVar17);
  func_0x00010b14fd7c();
  FUN_10b1ab8c8(plVar17,puVar10 + 0x25);
  lVar18 = *plVar17;
  if (lVar18 == 0) {
    iVar20 = 0;
  }
  else {
    lVar15 = *(long *)(lVar18 + 0x28);
    uVar19 = *(undefined8 *)(lVar18 + 0x20);
    puVar10[0x28] = *(undefined8 *)(lVar18 + 0x28);
    *puVar5 = uVar19;
    if (lVar15 != 0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10 != 0);
    }
    func_0x00010b14fd74(puVar10 + 0x1a);
    func_0x00010b1502e8();
    puVar11 = puVar10 + 0x2b;
    FUN_10b1448cc();
    if (((ulong)puVar11 & 1) == 0) {
      *(undefined1 *)(puVar10 + 0x2f) = 1;
      func_0x00010b14fcac(puVar10 + 0x2b);
      return;
    }
    plVar13 = plVar1;
    FUN_10b13d8d0(plVar1,puVar10 + 0x2b);
    func_0x00010b14fa7c();
    func_0x00010b14fa84();
    plVar12 = (long *)puVar10[0x27];
    lVar15 = puVar10[0x28];
    plStack_130 = plVar12;
    if (lVar15 != 0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10_00 != 0);
    }
    param_1 = puVar10[0x29];
    in_register_00005008 = puVar10[0x2a];
    if (in_register_00005008 != 0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10_01 != 0);
    }
    uVar19 = puVar10[0x25];
    if (puVar10[0x26] != 0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10_02 != 0);
    }
    func_0x00010b150630();
    puVar10[0xc] = extraout_x9;
    puVar10[0xb] = extraout_x8_03;
    func_0x00010b14fd4c();
    *plVar13 = (long)plVar12;
    plVar13[1] = lVar15;
    plStack_130 = (long *)0x0;
    func_0x00010b150604(&plStack_130,param_1,uVar19);
    func_0x00010b1502fc(auStack_f0);
    func_0x00010b1502b0();
    func_0x00010b144138(auStack_f0);
    func_0x00010b14ef20();
    FUN_10b13da54(&plStack_130);
    FUN_10b12878c(plVar1);
    func_0x00010b1257d4(puVar5);
    iVar20 = 3;
  }
  func_0x00010b125888(plVar17);
  if (lVar18 == 0) {
    func_0x00010b14f52c();
    func_0x000107c316c8(plVar17);
    FUN_10b207088(plVar1,puVar10 + 0x17);
    plVar12 = plVar1;
    FUN_10b113ed8();
    if (((ulong)plVar12 & 1) == 0) {
      *(undefined1 *)(puVar10 + 0x2f) = 2;
      uVar19 = puVar10[0x29];
      __ZNSt3__115recursive_mutex4lockEv(uVar19);
      lVar18 = *plVar1;
      if ((*(byte *)(lVar18 + 0x58) & 1) != 0) {
        __ZNSt3__115recursive_mutex6unlockEv(uVar19);
        func_0x00010b14efec(*puVar10);
        return;
      }
      puVar5 = *(undefined8 **)(lVar18 + 0x68);
      bVar7 = *(undefined8 **)(lVar18 + 0x70) <= puVar5;
      if (bVar7) {
        lVar15 = (long)puVar5 - *(long *)(lVar18 + 0x60);
        if ((lVar15 >> 3) + 1U >> 0x3d != 0) {
          func_0x00010552fc6c();
LAB_10b13d570:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10b13d574);
          (*pcVar6)();
        }
        func_0x00010b14e8b4((long)*(undefined8 **)(lVar18 + 0x70) - *(long *)(lVar18 + 0x60));
        uVar2 = extraout_x9_04;
        if (bVar7) {
          uVar2 = extraout_x8_06;
        }
        if (uVar2 == 0) {
          lVar14 = 0;
        }
        else {
          if (uVar2 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10b13d570;
          }
          lVar14 = uVar2 << 3;
          __Znwm();
        }
        puVar5 = (undefined8 *)(lVar14 + lVar15);
        puVar11 = puVar5 + 1;
        *puVar5 = puVar10;
        _memcpy(puVar5 + -extraout_x12,extraout_x11_01,lVar15);
        *(undefined8 **)(lVar18 + 0x60) = puVar5 + -extraout_x12;
        *(undefined8 **)(lVar18 + 0x68) = puVar11;
        *(ulong *)(lVar18 + 0x70) = lVar14 + uVar2 * 8;
        if (extraout_x11_01 != 0) {
          func_0x00010b14efd4();
        }
      }
      else {
        puVar11 = puVar5 + 1;
        *puVar5 = puVar10;
      }
      *(undefined8 **)(lVar18 + 0x68) = puVar11;
      __ZNSt3__115recursive_mutex6unlockEv(uVar19);
      return;
    }
    FUN_10b113f00(plVar1);
    func_0x00010b1500ac();
    puVar10[0x28] = in_register_00005008;
    *puVar5 = param_1;
    if (extraout_x8_04 != 0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10_03 != 0);
    }
    func_0x000107c2be14(plVar1);
    lVar15 = puVar10[0x27];
    lVar18 = *(long *)(lVar15 + 0x10);
    lVar14 = *(long *)(lVar15 + 8);
    puVar10[0x2a] = *(undefined8 *)(lVar15 + 0x10);
    *plVar1 = lVar14;
    if (lVar18 != 0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10_04 != 0);
    }
    func_0x00010b14fd74(puVar10 + 0x20);
    func_0x00010b150220();
    puVar11 = puVar10 + 0x2d;
    FUN_10b1448cc();
    if (((ulong)puVar11 & 1) == 0) {
      *(undefined1 *)(puVar10 + 0x2f) = 3;
      func_0x00010b14fcac(puVar10 + 0x2d);
      return;
    }
    func_0x00010b1502dc();
    func_0x00010b14fa2c();
    func_0x00010b14fa34();
    plVar12 = (long *)puVar10[0x27];
    uVar19 = 0;
    plStack_130 = plVar12;
    if (puVar10[0x28] != 0) {
      do {
        func_0x00010b14ea0c();
        uVar19 = extraout_x11;
      } while (extraout_w10_05 != 0);
    }
    uVar3 = puVar10[0x29];
    lVar18 = puVar10[0x2a];
    if (lVar18 != 0) {
      do {
        func_0x00010b14ea0c();
        uVar19 = extraout_x11_00;
      } while (extraout_w10_06 != 0);
    }
    uVar4 = puVar10[0x2b];
    lVar15 = puVar10[0x2c];
    if (lVar15 != 0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10_07 != 0);
    }
    func_0x00010b150564();
    puVar10[0x12] = extraout_x9_02;
    puVar10[0x11] = extraout_x8_05;
    func_0x00010b14fd4c();
    *puVar11 = plVar12;
    puVar11[1] = uVar19;
    plStack_130 = (long *)0x0;
    puVar11[2] = uVar3;
    puVar11[3] = lVar18;
    puVar11[4] = uVar4;
    puVar11[5] = lVar15;
    puVar10[0x13] = puVar11;
    func_0x00010b150308(auStack_f0);
    func_0x00010b1502b0();
    func_0x00010b144138(auStack_f0);
    func_0x00010b14ef20();
    func_0x00010b13da84(&plStack_130);
    func_0x00010b14fd60();
    func_0x000107c2bdf4(plVar1);
    func_0x000107c2be20(puVar5);
    func_0x000107c316d0(plVar17);
    iVar20 = 3;
  }
  func_0x00010b14fa8c();
  func_0x00010b14fa94();
  func_0x00010b14faa4();
  uVar8 = iVar20 == 3;
  if ((bool)uVar8) {
    *puVar10 = 0;
    *(undefined1 *)(puVar10 + 0x2f) = 4;
    func_0x00010b14f9d4();
    if ((bool)uVar8) {
      func_0x00010b150260();
      func_0x00010b14fcec();
      func_0x00010b14f310();
      plStack_130 = plVar17;
      func_0x00010b15024c();
      func_0x00010b14ffd4();
      if ((bool)uVar8) {
        func_0x00010b15058c();
        plVar17 = plStack_130;
        if (puVar10 + 7 != (undefined8 *)0x0) {
          do {
            func_0x00010b14ea74();
          } while (extraout_w11_03 != 0);
          plVar17 = plStack_130;
          if (extraout_x9_01 == 0) {
            func_0x00010b14e9e4();
            func_0x00010b14f418();
            plVar17 = plStack_130;
          }
        }
      }
      else {
        func_0x00010b14f144();
      }
      lVar18 = plVar17[0x12];
      plVar17[0x12] = 0;
      __ZNSt3__15mutex6unlockEv(puVar10 + 0x26);
      if (lVar18 == 0) {
        func_0x00010b1501ac();
      }
      else {
        func_0x00010b14f450();
        func_0x00010b14fd2c();
        func_0x00010b14eab4();
      }
      if (unaff_x22 != 0) {
        do {
          func_0x00010b14ea74();
        } while (extraout_w11_04 != 0);
        if (extraout_x9_03 == 0) {
          func_0x00010b14e9e4();
          func_0x00010b14f418();
        }
      }
    }
    else {
      func_0x00010b14fc4c(&plStack_130);
      FUN_10b1418c8(puVar16,&plStack_130);
      func_0x00010b14f84c();
    }
  }
  func_0x00010b1419fc(puVar16);
  func_0x00010b14efd4();
  return;
}



/* Entry: 10b13cfac; end: 10b13d713;  */

void FUN_10b13cfac(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *extraout_x8;
  undefined8 extraout_x8_00;
  long lVar14;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  undefined8 extraout_x8_03;
  ulong extraout_x8_04;
  undefined8 extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  undefined8 extraout_x9_02;
  long extraout_x9_03;
  ulong extraout_x9_04;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  long extraout_x11_01;
  long extraout_x12;
  undefined8 *puVar15;
  long unaff_x22;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  int iVar19;
  long in_register_00005008;
  long *plStack_b0;
  undefined8 *puStack_80;
  long *plStack_78;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  puVar9 = (undefined8 *)0x180;
  __Znwm();
  *puVar9 = FUN_10b14e23c;
  puVar9[1] = FUN_10b14e810;
  puVar15 = puVar9 + 2;
  *puVar15 = &PTR_FUN_110cbe1c8;
  puVar10 = puVar9;
  func_0x00010b14fddc();
  func_0x00010b14f160();
  puVar5 = puVar9 + 0x27;
  puVar10[2] = 0;
  *puVar10 = &PTR_FUN_110cbe1e8;
  plVar16 = puVar9 + 0x1d;
  plVar1 = puVar9 + 0x29;
  func_0x00010b14eb94();
  do {
    func_0x00010b14eb14();
  } while (extraout_w11 != 0);
  *(undefined1 *)(puVar9 + 7) = 0;
  puVar9[2] = &PTR_DAT_110cbe180;
  *(undefined1 *)(puVar9 + 10) = 0;
  plStack_b0 = extraout_x8;
  do {
    func_0x00010b14eb14();
  } while (extraout_w11_00 != 0);
  do {
    func_0x00010b14eb14();
  } while (extraout_w11_01 != 0);
  *param_1 = extraout_x8_00;
  param_1[1] = puVar10;
  func_0x00010b150314();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar9 + 0x17,param_3);
  FUN_10b1b9728(plVar16);
  plVar11 = plVar16;
  FUN_10b1270a8();
  if (((ulong)plVar11 & 1) == 0) {
    *(undefined1 *)(puVar9 + 0x2f) = 0;
    puStack_80 = puVar9;
    plStack_78 = plVar16;
    FUN_10b12713c(auStack_70,plVar16,&puStack_80);
    if (lStack_68 == 0) {
      return;
    }
    do {
      func_0x00010b14ea74();
    } while (extraout_w11_02 != 0);
    if (extraout_x9_00 != 0) {
      return;
    }
    func_0x00010b14e9c4();
    func_0x00010b14f3ec();
    return;
  }
  FUN_10b113e08(puVar9 + 0x23,plVar16);
  FUN_10b120e24(plVar16);
  func_0x00010b14fd7c();
  FUN_10b1ab8c8(plVar16,puVar9 + 0x25);
  lVar17 = *plVar16;
  if (lVar17 == 0) {
    iVar19 = 0;
  }
  else {
    lVar14 = *(long *)(lVar17 + 0x28);
    uVar18 = *(undefined8 *)(lVar17 + 0x20);
    puVar9[0x28] = *(undefined8 *)(lVar17 + 0x28);
    *puVar5 = uVar18;
    if (lVar14 != 0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10 != 0);
    }
    func_0x00010b14fd74(puVar9 + 0x1a);
    func_0x00010b1502e8();
    puVar10 = puVar9 + 0x2b;
    FUN_10b1448cc();
    if (((ulong)puVar10 & 1) == 0) {
      *(undefined1 *)(puVar9 + 0x2f) = 1;
      func_0x00010b14fcac(puVar9 + 0x2b);
      return;
    }
    plVar12 = plVar1;
    FUN_10b13d8d0(plVar1,puVar9 + 0x2b);
    func_0x00010b14fa7c();
    func_0x00010b14fa84();
    plVar11 = (long *)puVar9[0x27];
    lVar14 = puVar9[0x28];
    plStack_b0 = plVar11;
    if (lVar14 != 0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10_00 != 0);
    }
    param_2 = puVar9[0x29];
    in_register_00005008 = puVar9[0x2a];
    if (in_register_00005008 != 0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10_01 != 0);
    }
    uVar18 = puVar9[0x25];
    if (puVar9[0x26] != 0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10_02 != 0);
    }
    func_0x00010b150630();
    puVar9[0xc] = extraout_x9;
    puVar9[0xb] = extraout_x8_01;
    func_0x00010b14fd4c();
    *plVar12 = (long)plVar11;
    plVar12[1] = lVar14;
    plStack_b0 = (long *)0x0;
    func_0x00010b150604(&plStack_b0,param_2,uVar18);
    func_0x00010b1502fc(auStack_70);
    func_0x00010b1502b0();
    func_0x00010b144138(auStack_70);
    func_0x00010b14ef20();
    FUN_10b13da54(&plStack_b0);
    FUN_10b12878c(plVar1);
    func_0x00010b1257d4(puVar5);
    iVar19 = 3;
  }
  func_0x00010b125888(plVar16);
  if (lVar17 == 0) {
    func_0x00010b14f52c();
    func_0x000107c316c8(plVar16);
    FUN_10b207088(plVar1,puVar9 + 0x17);
    plVar11 = plVar1;
    FUN_10b113ed8();
    if (((ulong)plVar11 & 1) == 0) {
      *(undefined1 *)(puVar9 + 0x2f) = 2;
      uVar18 = puVar9[0x29];
      __ZNSt3__115recursive_mutex4lockEv(uVar18);
      lVar17 = *plVar1;
      if ((*(byte *)(lVar17 + 0x58) & 1) != 0) {
        __ZNSt3__115recursive_mutex6unlockEv(uVar18);
        func_0x00010b14efec(*puVar9);
        return;
      }
      puVar5 = *(undefined8 **)(lVar17 + 0x68);
      bVar7 = *(undefined8 **)(lVar17 + 0x70) <= puVar5;
      if (bVar7) {
        lVar14 = (long)puVar5 - *(long *)(lVar17 + 0x60);
        if ((lVar14 >> 3) + 1U >> 0x3d != 0) {
          func_0x00010552fc6c();
LAB_10b13d570:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10b13d574);
          (*pcVar6)();
        }
        func_0x00010b14e8b4((long)*(undefined8 **)(lVar17 + 0x70) - *(long *)(lVar17 + 0x60));
        uVar2 = extraout_x9_04;
        if (bVar7) {
          uVar2 = extraout_x8_04;
        }
        if (uVar2 == 0) {
          lVar13 = 0;
        }
        else {
          if (uVar2 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10b13d570;
          }
          lVar13 = uVar2 << 3;
          __Znwm();
        }
        puVar5 = (undefined8 *)(lVar13 + lVar14);
        puVar10 = puVar5 + 1;
        *puVar5 = puVar9;
        _memcpy(puVar5 + -extraout_x12,extraout_x11_01,lVar14);
        *(undefined8 **)(lVar17 + 0x60) = puVar5 + -extraout_x12;
        *(undefined8 **)(lVar17 + 0x68) = puVar10;
        *(ulong *)(lVar17 + 0x70) = lVar13 + uVar2 * 8;
        if (extraout_x11_01 != 0) {
          func_0x00010b14efd4();
        }
      }
      else {
        puVar10 = puVar5 + 1;
        *puVar5 = puVar9;
      }
      *(undefined8 **)(lVar17 + 0x68) = puVar10;
      __ZNSt3__115recursive_mutex6unlockEv(uVar18);
      return;
    }
    FUN_10b113f00(plVar1);
    func_0x00010b1500ac();
    puVar9[0x28] = in_register_00005008;
    *puVar5 = param_2;
    if (extraout_x8_02 != 0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10_03 != 0);
    }
    func_0x000107c2be14(plVar1);
    lVar14 = puVar9[0x27];
    lVar17 = *(long *)(lVar14 + 0x10);
    lVar13 = *(long *)(lVar14 + 8);
    puVar9[0x2a] = *(undefined8 *)(lVar14 + 0x10);
    *plVar1 = lVar13;
    if (lVar17 != 0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10_04 != 0);
    }
    func_0x00010b14fd74(puVar9 + 0x20);
    func_0x00010b150220();
    puVar10 = puVar9 + 0x2d;
    FUN_10b1448cc();
    if (((ulong)puVar10 & 1) == 0) {
      *(undefined1 *)(puVar9 + 0x2f) = 3;
      func_0x00010b14fcac(puVar9 + 0x2d);
      return;
    }
    func_0x00010b1502dc();
    func_0x00010b14fa2c();
    func_0x00010b14fa34();
    plVar11 = (long *)puVar9[0x27];
    uVar18 = 0;
    plStack_b0 = plVar11;
    if (puVar9[0x28] != 0) {
      do {
        func_0x00010b14ea0c();
        uVar18 = extraout_x11;
      } while (extraout_w10_05 != 0);
    }
    uVar3 = puVar9[0x29];
    lVar17 = puVar9[0x2a];
    if (lVar17 != 0) {
      do {
        func_0x00010b14ea0c();
        uVar18 = extraout_x11_00;
      } while (extraout_w10_06 != 0);
    }
    uVar4 = puVar9[0x2b];
    lVar14 = puVar9[0x2c];
    if (lVar14 != 0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10_07 != 0);
    }
    func_0x00010b150564();
    puVar9[0x12] = extraout_x9_02;
    puVar9[0x11] = extraout_x8_03;
    func_0x00010b14fd4c();
    *puVar10 = plVar11;
    puVar10[1] = uVar18;
    plStack_b0 = (long *)0x0;
    puVar10[2] = uVar3;
    puVar10[3] = lVar17;
    puVar10[4] = uVar4;
    puVar10[5] = lVar14;
    puVar9[0x13] = puVar10;
    func_0x00010b150308(auStack_70);
    func_0x00010b1502b0();
    func_0x00010b144138(auStack_70);
    func_0x00010b14ef20();
    func_0x00010b13da84(&plStack_b0);
    func_0x00010b14fd60();
    func_0x000107c2bdf4(plVar1);
    func_0x000107c2be20(puVar5);
    func_0x000107c316d0(plVar16);
    iVar19 = 3;
  }
  func_0x00010b14fa8c();
  func_0x00010b14fa94();
  func_0x00010b14faa4();
  uVar8 = iVar19 == 3;
  if ((bool)uVar8) {
    *puVar9 = 0;
    *(undefined1 *)(puVar9 + 0x2f) = 4;
    func_0x00010b14f9d4();
    if ((bool)uVar8) {
      func_0x00010b150260();
      func_0x00010b14fcec();
      func_0x00010b14f310();
      plStack_b0 = plVar16;
      func_0x00010b15024c();
      func_0x00010b14ffd4();
      if ((bool)uVar8) {
        func_0x00010b15058c();
        plVar16 = plStack_b0;
        if (puVar9 + 7 != (undefined8 *)0x0) {
          do {
            func_0x00010b14ea74();
          } while (extraout_w11_03 != 0);
          plVar16 = plStack_b0;
          if (extraout_x9_01 == 0) {
            func_0x00010b14e9e4();
            func_0x00010b14f418();
            plVar16 = plStack_b0;
          }
        }
      }
      else {
        func_0x00010b14f144();
      }
      lVar17 = plVar16[0x12];
      plVar16[0x12] = 0;
      __ZNSt3__15mutex6unlockEv(puVar9 + 0x26);
      if (lVar17 == 0) {
        func_0x00010b1501ac();
      }
      else {
        func_0x00010b14f450();
        func_0x00010b14fd2c();
        func_0x00010b14eab4();
      }
      if (unaff_x22 != 0) {
        do {
          func_0x00010b14ea74();
        } while (extraout_w11_04 != 0);
        if (extraout_x9_03 == 0) {
          func_0x00010b14e9e4();
          func_0x00010b14f418();
        }
      }
    }
    else {
      func_0x00010b14fc4c(&plStack_b0);
      FUN_10b1418c8(puVar15,&plStack_b0);
      func_0x00010b14f84c();
    }
  }
  func_0x00010b1419fc(puVar15);
  func_0x00010b14efd4();
  return;
}



/* Entry: 10b13d714; end: 10b13d737;  */

void FUN_10b13d714(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_10b14482c(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 10b13d738; end: 10b13d8cf;  */

void FUN_10b13d738(void)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  int extraout_w10;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  func_0x00010b14f3d0();
  puStack_30 = (undefined8 *)0x0;
  uStack_28 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10b14195c(&stack0xffffffffffffff88);
  FUN_10b141984(&puStack_30,&stack0xffffffffffffff88);
  func_0x00010b150164();
  func_0x00010b15015c();
  func_0x00010b14fa0c();
  lVar1 = lStack_48;
  func_0x000107c27b4c(&uStack_60);
  lVar4 = lStack_48;
  lStack_48 = 0;
  lStack_88 = 0;
  lStack_80 = 0;
  func_0x00010b150034();
  lStack_90 = CONCAT71(lStack_90._1_7_,1);
  lStack_98 = lVar1;
  __ZNSt3__15mutex4lockEv();
  puVar2 = puStack_30;
  func_0x00010b1419cc();
  if ((int)puVar2 == 0) {
    func_0x00010b14f254();
    *puVar2 = &PTR_FUN_110cbe7a0;
    puVar2[2] = unaff_x19;
    puVar2[1] = unaff_x20;
    puVar2[3] = lVar4;
    lVar4 = puStack_30[0x12];
    puStack_30[0x12] = puVar2;
    if (lVar4 != 0) {
      func_0x00010b14e9b4();
    }
    lVar4 = 0;
  }
  else {
    FUN_10b141984(&lStack_88,&puStack_30);
  }
  plVar3 = &lStack_98;
  func_0x000107c2798c();
  if (lStack_88 != 0) {
    lStack_98 = lStack_88;
    lStack_90 = lStack_80;
    if (lStack_80 != 0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10 != 0);
    }
    plVar3 = (long *)&stack0xffffffffffffff88;
    FUN_10b144960();
    func_0x00010b14ff0c();
  }
  uStack_60 = 0;
  uStack_58 = 0;
  func_0x00010b150154();
  if (lVar4 != 0) {
    func_0x00010b14e920();
  }
  func_0x00010b14ff30();
  func_0x00010b14f5f4();
  if (plVar3 != (long *)0x0) {
    func_0x00010b14e9f4();
  }
  func_0x00010b14fa14();
  func_0x00010b14f24c();
  return;
}



/* Entry: 10b13d8d0; end: 10b13da53;  */

void FUN_10b13d8d0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  int extraout_w11;
  int extraout_w12;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [8];
  ulong uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined1 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  uStack_78 = 0;
  lStack_70 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10b14195c(&uStack_30,param_2,&uStack_88);
  FUN_10b141984(&uStack_78,&uStack_30);
  func_0x00010b14fa14();
  func_0x00010b150154();
  uStack_a8 = uStack_78;
  lStack_a0 = lStack_70;
  if (lStack_70 == 0) {
    uStack_90 = 0;
    uStack_98 = uStack_78;
  }
  else {
    do {
      func_0x00010b14ec7c();
      uStack_90 = extraout_x9;
    } while (extraout_w12 != 0);
    do {
      func_0x00010b14ee64();
      uStack_98 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  uStack_30 = 0;
  lStack_28 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10b14195c(&puStack_40,&uStack_98,&uStack_50);
  FUN_10b141984(&uStack_30,&puStack_40);
  func_0x00010b15015c();
  puVar3 = &uStack_50;
  func_0x00010b1419a8();
  func_0x00010b150034();
  uStack_38 = 1;
  puStack_40 = puVar3;
  __ZNSt3__15mutex4lockEv();
  uVar1 = uStack_30;
  uStack_60 = uStack_30;
  lStack_58 = lStack_28;
  if (lStack_28 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10 != 0);
  }
  while (uVar4 = uVar1, func_0x00010b1419cc(), (uVar4 & 1) == 0) {
    __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(uVar1 + 0x18,&puStack_40);
  }
  func_0x00010b1419a8(&uStack_60);
  func_0x00010b14ff74();
  if (extraout_x9_00 != 0) {
    __ZNSt13exception_ptrC1ERKS_(auStack_68);
    __ZSt17rethrow_exceptionSt13exception_ptr(auStack_68);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10b13da08);
    (*pcVar2)();
  }
  func_0x00010b150004();
  func_0x000107c2798c(&puStack_40);
  func_0x00010b14fa14();
  func_0x00010b14ff0c();
  func_0x00010b1419a8(&uStack_a8);
  func_0x00010b150164();
  return;
}



/* Entry: 10b13da54; end: 10b13dab3;  */

undefined8 FUN_10b13da54(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010b1257f8(param_1 + 0x20);
  FUN_10b12878c(param_1 + 0x10);
  func_0x000107c350ac();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b13dab4; end: 10b13daff;  */

void FUN_10b13dab4(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c278b8(auStack_38,&UNK_10f730412);
  FUN_10b13cfac(param_1,auStack_38);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  return;
}



/* Entry: 10b13db00; end: 10b13dc9f;  */

undefined8 *
FUN_10b13db00(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  long lVar4;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uVar5;
  undefined1 auStack_91 [9];
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  puVar2 = param_1;
  func_0x00010b14ec00();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_110cbe0b0;
  uStack_58 = extraout_x8;
  FUN_10b13dca0(puVar2 + 3);
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[6] = param_2[1];
  param_1[5] = uVar5;
  if (lVar4 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10 != 0);
  }
  lVar4 = param_3[1];
  uVar5 = *param_3;
  param_1[8] = param_3[1];
  param_1[7] = uVar5;
  if (lVar4 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10_00 != 0);
  }
  lVar4 = param_4[1];
  uVar5 = *param_4;
  param_1[10] = param_4[1];
  param_1[9] = uVar5;
  if (lVar4 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10_01 != 0);
  }
  FUN_10b144e3c(auStack_70,1);
  puStack_60[2] = 0;
  *puStack_60 = &PTR_FUN_110cbed78;
  puStack_60[1] = 0;
  FUN_10b1512d0(puStack_60 + 3,param_4,param_2);
  puVar3 = puStack_60;
  puStack_60 = (undefined8 *)0x0;
  func_0x00010b144ea4(auStack_70);
  param_1[0xb] = puVar3 + 3;
  param_1[0xc] = puVar3;
  uStack_80 = 0;
  uStack_78 = 0;
  FUN_10b144eb4(&uStack_80);
  uVar1 = 0x28;
  func_0x000107c2be10();
  *(undefined1 *)(param_1 + 0xd) = uVar1;
  puVar3 = param_1 + 0xe;
  __ZNSt3__115recursive_mutexC1Ev(puVar3);
  func_0x00010b14e980(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b1257f8(param_1 + 9);
    FUN_10b12878c(param_1 + 7);
    func_0x0001052a1398(param_1 + 5);
    func_0x00010b12487c(param_1 + 3);
    func_0x00010b1446d4(puVar2 + 1);
    __Unwind_Resume(puVar3);
    pcStack_88 = FUN_10b13dca0;
    puVar2 = (undefined8 *)auStack_91;
    auStack_91._1_8_ = &stack0xfffffffffffffff0;
    FUN_10b144d00(puVar2);
    return puVar2;
  }
  return param_1;
}



/* Entry: 10b13dca0; end: 10b13dcbb;  */

void FUN_10b13dca0(void)

{
  undefined1 uStack_11;
  
  FUN_10b144d00(&uStack_11);
  return;
}



/* Entry: 10b13dcbc; end: 10b13e137;  */

void FUN_10b13dcbc(long param_1,long *param_2,long param_3,long *param_4)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined1 extraout_w8;
  undefined1 uVar8;
  undefined1 extraout_w8_00;
  long lVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w11;
  int extraout_w11_00;
  long *plVar10;
  byte bVar11;
  long in_register_00005008;
  undefined1 auStack_350 [44];
  undefined4 uStack_324;
  undefined1 uStack_320;
  char cStack_318;
  long *aplStack_310 [2];
  long lStack_300;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined1 auStack_2f0 [216];
  char cStack_218;
  undefined1 auStack_70 [24];
  byte bStack_58;
  long alStack_50 [2];
  
  FUN_10b13e138(alStack_50,param_4);
  if (alStack_50[0] == 0) {
    bVar11 = 0;
    auStack_70[0] = 0;
    bStack_58 = 0;
  }
  else {
    func_0x000107c279a0(auStack_70,alStack_50[0] + 0x68);
    if (alStack_50[0] == 0) {
      bVar11 = 0;
    }
    else {
      bVar11 = *(byte *)(alStack_50[0] + 200);
    }
  }
  if ((bRam00000001137f4070 & 1) == 0) {
    iVar5 = 0x137f4070;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      bVar3 = 0x40;
      func_0x000107c2be10();
      bRam00000001137f4068 = bVar3;
      ___cxa_guard_release(0x1137f4070);
    }
  }
  bVar11 = bVar11 & 1;
  if ((bRam00000001137f4068 & 1) != 0) {
    FUN_10b15e694(&lStack_300,*(undefined8 *)(param_3 + 0x38),param_4);
    if (lStack_300 != 0) {
      puVar6 = auStack_2f0;
      FUN_10b1c41c0();
      if (puVar6 == (undefined1 *)0x0) {
        uVar7 = 0;
        uVar8 = false;
LAB_10b13df94:
        uVar4 = (undefined4)uVar7;
        param_2[1] = CONCAT44(uStack_2f4,uStack_2f8);
        *param_2 = lStack_300;
        if (CONCAT44(uStack_2f4,uStack_2f8) != 0) {
          do {
            func_0x00010b14eb14();
            uVar4 = (undefined4)uVar7;
            uVar8 = extraout_w8_00;
          } while (extraout_w11_00 != 0);
        }
        *(undefined1 *)(param_2 + 2) = 0;
        *(undefined1 *)((long)param_2 + 0x14) = 0;
        *(undefined4 *)(param_2 + 3) = uVar4;
        *(undefined1 *)((long)param_2 + 0x1c) = uVar8;
        func_0x00010b14f33c();
        *(byte *)(param_2 + 8) = bVar11;
      }
      else {
        iVar5 = *(int *)(puVar6 + 0x8c);
        if ((bStack_58 & 1) == 0) {
          lVar9 = (long)*(char *)((*(ulong *)(puVar6 + 0x48) & 0xfffffffffffffffc) + 0x17);
          if (lVar9 < 0) {
            lVar9 = *(long *)((*(ulong *)(puVar6 + 0x48) & 0xfffffffffffffffc) + 8);
          }
          if (lVar9 != 0) {
            func_0x000107c27b98(auStack_70);
          }
        }
        uVar8 = ((byte)puVar6[0x10] >> 4 & 1) != 0;
        if ((bool)uVar8) {
          uVar7 = (ulong)*(uint *)(*(long *)(puVar6 + 0x70) + 0x88);
          func_0x00010b23fdbc();
        }
        else {
          uVar7 = 0;
        }
        if (iVar5 == 0) goto LAB_10b13df94;
        uVar4 = (undefined4)uVar7;
        param_2[1] = CONCAT44(uStack_2f4,uStack_2f8);
        *param_2 = lStack_300;
        if (CONCAT44(uStack_2f4,uStack_2f8) != 0) {
          do {
            func_0x00010b14eb14();
            uVar4 = (undefined4)uVar7;
            uVar8 = extraout_w8;
          } while (extraout_w11 != 0);
        }
        uVar2 = iVar5 - 2;
        if (2 < uVar2) {
          uVar2 = 3;
        }
        *(uint *)(param_2 + 2) = uVar2;
        *(undefined1 *)((long)param_2 + 0x14) = 1;
        *(undefined4 *)(param_2 + 3) = uVar4;
        *(undefined1 *)((long)param_2 + 0x1c) = uVar8;
        func_0x00010b14f33c();
        *(undefined1 *)(param_2 + 8) = 0;
      }
      func_0x00010b14f7e0();
      if (extraout_x8_01 != 0) {
        do {
          func_0x00010b14ea0c();
        } while (extraout_w10_01 != 0);
      }
      func_0x00010b150464();
      goto LAB_10b13dfe0;
    }
    func_0x00010b150464();
  }
  if ((alStack_50[0] != 0) && (*(int *)(alStack_50[0] + 0x50) == 1)) {
    FUN_10b13e1a0(&lStack_300,*(undefined8 *)(param_3 + 0x48));
    if (lStack_300 != 0) {
      uVar7 = *(long *)(lStack_300 + 0x10) + 0x100;
      FUN_10b127a84();
      if ((uVar7 & 1) == 0) {
        *(undefined1 *)((long)param_2 + 0x14) = 0;
        *(undefined1 *)(param_2 + 3) = 0;
        *(undefined1 *)((long)param_2 + 0x1c) = 0;
        *param_2 = 0;
        param_2[1] = 0;
        *(undefined1 *)(param_2 + 2) = 0;
        func_0x00010b14f33c();
        *(byte *)(param_2 + 8) = bVar11;
        lVar9 = *param_4;
        lVar1 = param_4[1];
        param_2[9] = lVar9;
        param_2[10] = lVar1;
        if (lVar1 == 0) {
          param_2[0xb] = lVar9;
          param_2[0xc] = 0;
        }
        else {
          do {
            func_0x00010b14ea0c();
          } while (extraout_w10_02 != 0);
          func_0x00010b14f8d0();
          param_2[0xc] = in_register_00005008;
          param_2[0xb] = param_1;
          if (extraout_x8_02 != 0) {
            do {
              func_0x00010b14ea0c();
            } while (extraout_w10_03 != 0);
          }
        }
        func_0x00010b15045c();
        goto LAB_10b13dfe0;
      }
    }
    func_0x00010b15045c();
  }
  plVar10 = *(long **)(param_3 + 0x28);
  func_0x000107c278b8(&lStack_300,"BufferedContentFetcher");
  (**(code **)(*plVar10 + 0x28))(aplStack_310,plVar10,param_4,&lStack_300);
  func_0x00010b150454();
  if (aplStack_310[0] == (long *)0x0) {
    func_0x00010b1502d4();
    *(undefined1 *)((long)param_2 + 0x14) = 0;
    *(undefined1 *)(param_2 + 3) = 0;
    *(undefined1 *)((long)param_2 + 0x1c) = 0;
    *(undefined1 *)(param_2 + 4) = 0;
    *(undefined1 *)(param_2 + 7) = 0;
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    *(byte *)(param_2 + 8) = bVar11;
    func_0x00010b14f7e0();
    if (extraout_x8 != 0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10 != 0);
    }
  }
  else {
    (**(code **)(*aplStack_310[0] + 0x18))(auStack_350);
    (**(code **)(*aplStack_310[0] + 0x20))(&lStack_300);
    (**(code **)(*aplStack_310[0] + 0x10))(param_2);
    if (cStack_318 == '\x01') {
      *(undefined4 *)(param_2 + 2) = uStack_324;
      *(undefined1 *)((long)param_2 + 0x14) = uStack_320;
    }
    else {
      *(undefined1 *)(param_2 + 2) = 0;
      *(undefined1 *)((long)param_2 + 0x14) = 0;
    }
    if (cStack_218 != '\x01') {
      *(undefined1 *)(param_2 + 3) = 0;
    }
    else {
      *(undefined4 *)(param_2 + 3) = uStack_2f4;
    }
    *(bool *)((long)param_2 + 0x1c) = cStack_218 == '\x01';
    func_0x00010b14f33c();
    *(byte *)(param_2 + 8) = bVar11;
    func_0x00010b14f7e0();
    if (extraout_x8_00 != 0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001052b4218(&lStack_300);
    func_0x0001052b41f8(auStack_350);
    func_0x00010b1502d4();
  }
LAB_10b13dfe0:
  func_0x000107c279a4(auStack_70);
  func_0x00010b1440f0(alStack_50);
  return;
}



/* Entry: 10b13e138; end: 10b13e19f;  */

void FUN_10b13e138(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  code *pcVar10;
  long extraout_x8;
  long unaff_x21;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  long in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  uint in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  long in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  uint in_stack_00000140;
  byte in_stack_00000148;
  long in_stack_00000150;
  long in_stack_00000158;
  undefined1 *in_stack_000001c0;
  code *in_stack_000001c8;
  
  FUN_10b141a54();
  if (*param_1 != 0) {
    return;
  }
  func_0x00010b1440f0();
  func_0x00010b150270();
  func_0x0001074668c4();
  plVar7 = param_1;
  ___cxa_throw(param_1,PTR___ZTISt16invalid_argument_110352248,
               PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
  plVar8 = param_1;
  ___cxa_free_exception();
  func_0x00010b14efdc();
  pcVar10 = FUN_10b13e1a0;
  func_0x00010b1ee654(plVar8[3],plVar8);
  in_stack_000001c0 = &stack0xfffffffffffffff0;
  in_stack_000001c8 = pcVar10;
  func_0x00010b1eb424();
  func_0x00010b1ebb5c(&stack0x000000e0);
  func_0x00010b1ec238(in_stack_000000f0);
  func_0x00010b1ebb50();
  if (*param_1 != 0) {
    func_0x00010b1ebfbc();
    return;
  }
  func_0x00010b1ed30c();
  func_0x00010b1ebfbc();
  func_0x00010b1edffc();
  FUN_10b1b8c7c(&stack0x00000160);
  func_0x00010b125908(&stack0x000000e0);
  in_stack_00000150 = 0;
  in_stack_00000158 = 0;
  FUN_10b1b918c();
  if ((in_stack_00000148 & 1) == 0) {
    if (*(char *)(unaff_x21 + 0x4ef) < '\0') {
      if (*(long *)(unaff_x21 + 0x4e0) != 0) goto LAB_10b1b8ebc;
    }
    else if (*(char *)(unaff_x21 + 0x4ef) != '\0') {
LAB_10b1b8ebc:
      func_0x00010b1ebbd4(*(undefined1 *)((long)plVar7 + 0x17));
      func_0x00010b1ec76c(&stack0x00000078);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&stack0x00000090,unaff_x21 + 0x4d8);
      func_0x00010b1ecb18();
      func_0x000107c278b8(&stack0x00000060);
      func_0x00010b1ecb18();
      func_0x000107c278b8(&stack0x00000048);
      lVar9 = in_stack_00000088;
      uVar6 = in_stack_00000070;
      uVar5 = in_stack_00000068;
      uVar4 = in_stack_00000060;
      uVar3 = in_stack_00000058;
      uVar2 = in_stack_00000050;
      uVar1 = in_stack_00000048;
      in_stack_000000b0 = in_stack_00000068;
      in_stack_000000a8 = in_stack_00000060;
      in_stack_000000b8 = in_stack_00000070;
      in_stack_00000068 = 0;
      in_stack_00000070 = 0;
      in_stack_000000c8 = in_stack_00000050;
      in_stack_000000c0 = in_stack_00000048;
      in_stack_000000d0 = in_stack_00000058;
      in_stack_00000048 = 0;
      in_stack_00000050 = 0;
      in_stack_00000058 = 0;
      in_stack_00000060 = 0;
      in_stack_000000d8 = (uint)(extraout_x8 == 0);
      if (in_stack_00000148 == 1) {
        func_0x000107c27b9c(&stack0x000000e0,&stack0x00000078);
        func_0x000107c27b9c(&stack0x000000f8,&stack0x00000090);
        func_0x000107c27b9c(&stack0x00000110,&stack0x000000a8);
        func_0x000107c27b9c(&stack0x00000128,&stack0x000000c0);
      }
      else {
        in_stack_000000e8 = in_stack_00000080;
        in_stack_000000e0 = in_stack_00000078;
        in_stack_00000080 = 0;
        in_stack_00000088 = 0;
        in_stack_00000078 = 0;
        in_stack_00000100 = in_stack_00000098;
        in_stack_000000f8 = in_stack_00000090;
        in_stack_000000f0 = lVar9;
        in_stack_00000108 = in_stack_000000a0;
        in_stack_00000090 = 0;
        in_stack_00000098 = 0;
        in_stack_000000a0 = 0;
        in_stack_00000118 = uVar5;
        in_stack_00000110 = uVar4;
        in_stack_000000b0 = 0;
        in_stack_000000b8 = 0;
        in_stack_000000a8 = 0;
        in_stack_00000120 = uVar6;
        in_stack_00000138 = uVar3;
        in_stack_00000130 = uVar2;
        in_stack_00000128 = uVar1;
        in_stack_000000c0 = 0;
        in_stack_000000c8 = 0;
        in_stack_000000d0 = 0;
        in_stack_00000148 = 1;
      }
      in_stack_00000140 = in_stack_000000d8;
      FUN_10b1d2ba8(&stack0x00000078);
      func_0x00010b1edf90();
      func_0x00010b1ed224();
      if ((in_stack_00000148 & 1) != 0) goto LAB_10b1b9008;
    }
    *param_1 = 0;
    param_1[1] = 0;
    func_0x00010b1edfb8();
  }
  else {
LAB_10b1b9008:
    in_stack_000000e0 = 0;
    in_stack_000000e8 = 0;
    in_stack_000000f0 = 0;
    in_stack_000000f8 = 0;
    in_stack_00000100 = 0;
    in_stack_00000108 = 0;
    in_stack_00000110 = 0;
    in_stack_00000118 = 0;
    in_stack_00000120 = 0;
    in_stack_00000128 = 0;
    in_stack_00000130 = 0;
    in_stack_00000138 = 0;
    FUN_10b2093a0(&stack0x00000078,&stack0x00000160,&stack0xffffffffffffffe0);
    FUN_10b1b8c9c(&stack0x00000150,&stack0x00000078);
    func_0x00010b1257d4(&stack0x00000078);
    FUN_10b1d2ba8(&stack0xffffffffffffffe0);
    func_0x00010b1edfb8();
    func_0x00010b1ed284(&stack0x000000e0);
    lVar9 = in_stack_000000f0;
    func_0x00010b1ec238(in_stack_000000f0);
    func_0x00010b1ebb50();
    if (*param_1 == 0) {
      func_0x00010b1ed30c();
      func_0x00010b1b8cc0(lVar9 + 0xa0,&stack0x00000150);
      func_0x00010b1ebfbc();
      param_1[1] = in_stack_00000158;
      *param_1 = in_stack_00000150;
      in_stack_00000150 = 0;
      in_stack_00000158 = 0;
    }
    else {
      func_0x00010b1ebfbc();
    }
  }
  func_0x00010b1257d4(&stack0x00000150);
  func_0x00010b1257f8(&stack0x00000160);
  return;
}



/* Entry: 10b13e1a0; end: 10b13e1ab;  */

void FUN_10b13e1a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  long in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  uint in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  long in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  uint in_stack_00000160;
  byte in_stack_00000168;
  long in_stack_00000170;
  long in_stack_00000178;
  
  func_0x00010b1ee654(*(undefined8 *)(param_1 + 0x18),param_1);
  func_0x00010b1eb424();
  func_0x00010b1ebb5c(&stack0x00000100);
  func_0x00010b1ec238(in_stack_00000110);
  func_0x00010b1ebb50();
  if (*unaff_x19 != 0) {
    func_0x00010b1ebfbc();
    return;
  }
  func_0x00010b1ed30c();
  func_0x00010b1ebfbc();
  func_0x00010b1edffc();
  FUN_10b1b8c7c(&stack0x00000180);
  func_0x00010b125908(&stack0x00000100);
  in_stack_00000170 = 0;
  in_stack_00000178 = 0;
  FUN_10b1b918c();
  if ((in_stack_00000168 & 1) == 0) {
    if (*(char *)(unaff_x21 + 0x4ef) < '\0') {
      if (*(long *)(unaff_x21 + 0x4e0) != 0) goto LAB_10b1b8ebc;
    }
    else if (*(char *)(unaff_x21 + 0x4ef) != '\0') {
LAB_10b1b8ebc:
      func_0x00010b1ebbd4(*(undefined1 *)(unaff_x20 + 0x17));
      func_0x00010b1ec76c(&stack0x00000098);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&stack0x000000b0,unaff_x21 + 0x4d8);
      func_0x00010b1ecb18();
      func_0x000107c278b8(&stack0x00000080);
      func_0x00010b1ecb18();
      func_0x000107c278b8(&stack0x00000068);
      lVar7 = in_stack_000000a8;
      uVar6 = in_stack_00000090;
      uVar5 = in_stack_00000088;
      uVar4 = in_stack_00000080;
      uVar3 = in_stack_00000078;
      uVar2 = in_stack_00000070;
      uVar1 = in_stack_00000068;
      in_stack_000000d0 = in_stack_00000088;
      in_stack_000000c8 = in_stack_00000080;
      in_stack_000000d8 = in_stack_00000090;
      in_stack_00000088 = 0;
      in_stack_00000090 = 0;
      in_stack_000000e8 = in_stack_00000070;
      in_stack_000000e0 = in_stack_00000068;
      in_stack_000000f0 = in_stack_00000078;
      in_stack_00000068 = 0;
      in_stack_00000070 = 0;
      in_stack_00000078 = 0;
      in_stack_00000080 = 0;
      in_stack_000000f8 = (uint)(extraout_x8 == 0);
      if (in_stack_00000168 == 1) {
        func_0x000107c27b9c(&stack0x00000100,&stack0x00000098);
        func_0x000107c27b9c(&stack0x00000118,&stack0x000000b0);
        func_0x000107c27b9c(&stack0x00000130,&stack0x000000c8);
        func_0x000107c27b9c(&stack0x00000148,&stack0x000000e0);
      }
      else {
        in_stack_00000108 = in_stack_000000a0;
        in_stack_00000100 = in_stack_00000098;
        in_stack_000000a0 = 0;
        in_stack_000000a8 = 0;
        in_stack_00000098 = 0;
        in_stack_00000120 = in_stack_000000b8;
        in_stack_00000118 = in_stack_000000b0;
        in_stack_00000110 = lVar7;
        in_stack_00000128 = in_stack_000000c0;
        in_stack_000000b0 = 0;
        in_stack_000000b8 = 0;
        in_stack_000000c0 = 0;
        in_stack_00000138 = uVar5;
        in_stack_00000130 = uVar4;
        in_stack_000000d0 = 0;
        in_stack_000000d8 = 0;
        in_stack_000000c8 = 0;
        in_stack_00000140 = uVar6;
        in_stack_00000158 = uVar3;
        in_stack_00000150 = uVar2;
        in_stack_00000148 = uVar1;
        in_stack_000000e0 = 0;
        in_stack_000000e8 = 0;
        in_stack_000000f0 = 0;
        in_stack_00000168 = 1;
      }
      in_stack_00000160 = in_stack_000000f8;
      FUN_10b1d2ba8(&stack0x00000098);
      func_0x00010b1edf90();
      func_0x00010b1ed224();
      if ((in_stack_00000168 & 1) != 0) goto LAB_10b1b9008;
    }
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
    func_0x00010b1edfb8();
  }
  else {
LAB_10b1b9008:
    in_stack_00000100 = 0;
    in_stack_00000108 = 0;
    in_stack_00000110 = 0;
    in_stack_00000118 = 0;
    in_stack_00000120 = 0;
    in_stack_00000128 = 0;
    in_stack_00000130 = 0;
    in_stack_00000138 = 0;
    in_stack_00000140 = 0;
    in_stack_00000148 = 0;
    in_stack_00000150 = 0;
    in_stack_00000158 = 0;
    FUN_10b2093a0(&stack0x00000098,&stack0x00000180);
    FUN_10b1b8c9c(&stack0x00000170,&stack0x00000098);
    func_0x00010b1257d4(&stack0x00000098);
    FUN_10b1d2ba8();
    func_0x00010b1edfb8();
    func_0x00010b1ed284(&stack0x00000100);
    lVar7 = in_stack_00000110;
    func_0x00010b1ec238(in_stack_00000110);
    func_0x00010b1ebb50();
    if (*unaff_x19 == 0) {
      func_0x00010b1ed30c();
      func_0x00010b1b8cc0(lVar7 + 0xa0,&stack0x00000170);
      func_0x00010b1ebfbc();
      unaff_x19[1] = in_stack_00000178;
      *unaff_x19 = in_stack_00000170;
      in_stack_00000170 = 0;
      in_stack_00000178 = 0;
    }
    else {
      func_0x00010b1ebfbc();
    }
  }
  func_0x00010b1257d4(&stack0x00000170);
  func_0x00010b1257f8(&stack0x00000180);
  return;
}



/* Entry: 10b13e1ac; end: 10b13e50f;  */

void FUN_10b13e1ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *extraout_x8;
  undefined1 auStack_338 [120];
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined5 uStack_2b0;
  undefined3 uStack_2ab;
  undefined5 uStack_2a8;
  ulong uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  char cStack_288;
  undefined1 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  ulong uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  char cStack_240;
  ulong uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  char cStack_220;
  undefined1 uStack_218;
  undefined7 uStack_217;
  undefined8 uStack_210;
  undefined1 uStack_208;
  undefined7 uStack_207;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long alStack_1e8 [3];
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  uint uStack_1c0;
  uint uStack_1bc;
  uint uStack_1b8;
  undefined1 uStack_1b4;
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  char cStack_198;
  undefined1 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [120];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined5 uStack_b0;
  undefined3 uStack_ab;
  undefined5 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  func_0x00010b150784();
  func_0x00010b14f3f4();
  func_0x000107c316c8(auStack_150,&UNK_10f730413);
  func_0x00010b150378(auStack_160);
  uStack_1bc = uStack_1bc & 0xffffff00;
  uStack_1b8 = uStack_1b8 & 0xffffff00;
  uStack_1b4 = 0;
  uStack_1b0 = uStack_1b0 & 0xffffffffffffff00;
  cStack_198 = '\0';
  uStack_190 = 0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  uStack_1c0 = uStack_1c0 & 0xffffff00;
  uStack_180 = 0;
  uStack_188 = 0;
  uStack_170 = 0;
  uStack_178 = 0;
  func_0x000107c316c8(alStack_1e8,&UNK_10f73043c);
  func_0x00010b150388(auStack_138);
  FUN_10b13e588(&uStack_1d0,auStack_138);
  func_0x00010b141af8(auStack_138);
  func_0x000107c316d0(alStack_1e8);
  FUN_10b13e138(alStack_1e8,param_3);
  FUN_10b121fd0(auStack_338);
  uStack_270 = uStack_180;
  uStack_278 = uStack_188;
  uStack_2b8 = uStack_1c8;
  uStack_2c0 = uStack_1d0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  uStack_2b0 = (undefined5)CONCAT44(uStack_1bc,uStack_1c0);
  uStack_2ab = uStack_1bc._1_3_;
  uStack_2a8 = (undefined5)(CONCAT17(uStack_1b4,CONCAT43(uStack_1b8,uStack_1bc._1_3_)) >> 0x18);
  uStack_2a0 = uStack_2a0 & 0xffffffffffffff00;
  cStack_288 = cStack_198 == '\x01';
  if ((bool)cStack_288) {
    uStack_298 = uStack_1a8;
    uStack_2a0 = uStack_1b0;
    uStack_290 = uStack_1a0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_1b0 = 0;
  }
  uStack_280 = uStack_190;
  uStack_188 = 0;
  uStack_180 = 0;
  uStack_260 = uStack_170;
  uStack_268 = uStack_178;
  uStack_178 = 0;
  uStack_170 = 0;
  if (alStack_1e8[0] == 0) {
    uStack_258 = uStack_258 & 0xffffffffffffff00;
    cStack_240 = '\0';
  }
  else {
    func_0x000107c279a0(&uStack_258,alStack_1e8[0] + 0x88);
    if (alStack_1e8[0] != 0) {
      func_0x00010b1501f4();
      goto LAB_10b13e318;
    }
  }
  uStack_238 = uStack_238 & 0xffffffffffffff00;
  cStack_220 = '\0';
LAB_10b13e318:
  uStack_218 = 0;
  uStack_208 = 0;
  FUN_10b0fafd4(auStack_138,auStack_338);
  uStack_70 = uStack_270;
  uStack_78 = uStack_278;
  uStack_b8 = uStack_2b8;
  uStack_c0 = uStack_2c0;
  uStack_2c0 = 0;
  uStack_2b8 = 0;
  uStack_b0 = uStack_2b0;
  uStack_ab = uStack_2ab;
  uStack_a8 = uStack_2a8;
  uStack_a0 = uStack_a0 & 0xffffffffffffff00;
  uStack_88 = cStack_288 == '\x01';
  if ((bool)uStack_88) {
    uStack_98 = uStack_298;
    uStack_a0 = uStack_2a0;
    uStack_90 = uStack_290;
    uStack_298 = 0;
    uStack_290 = 0;
    uStack_2a0 = 0;
  }
  uStack_80 = uStack_280;
  uStack_278 = 0;
  uStack_270 = 0;
  uStack_60 = uStack_260;
  uStack_68 = uStack_268;
  uStack_268 = 0;
  uStack_260 = 0;
  uStack_58 = uStack_58 & 0xffffffffffffff00;
  uStack_40 = cStack_240 == '\x01';
  if ((bool)uStack_40) {
    uStack_50 = uStack_250;
    uStack_58 = uStack_258;
    uStack_48 = uStack_248;
    uStack_250 = 0;
    uStack_248 = 0;
    uStack_258 = 0;
  }
  uStack_38 = uStack_38 & 0xffffffffffffff00;
  uStack_20 = cStack_220 == '\x01';
  if ((bool)uStack_20) {
    uStack_30 = uStack_230;
    uStack_38 = uStack_238;
    uStack_28 = uStack_228;
    uStack_230 = 0;
    uStack_228 = 0;
    uStack_238 = 0;
  }
  uStack_18 = CONCAT71(uStack_217,uStack_218);
  uStack_10 = uStack_210;
  uStack_8 = CONCAT71(uStack_207,uStack_208);
  FUN_10b13e5e4(&uStack_200);
  FUN_10b141ba8(auStack_138);
  extraout_x8[1] = uStack_1f8;
  *extraout_x8 = uStack_200;
  uStack_200 = 0;
  uStack_1f8 = 0;
  func_0x00010b144114(&uStack_200);
  func_0x00010b14fea8();
  func_0x00010b1440f0(alStack_1e8);
  func_0x00010b141af8(&uStack_1d0);
  func_0x000107c281c0(auStack_160);
  func_0x000107c316d0(auStack_150);
  return;
}



/* Entry: 10b13e510; end: 10b13e587;  */

void FUN_10b13e510(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 auStack_38 [3];
  
  func_0x00010b14f3d0();
  auStack_38[0] = 0;
  __ZNSt3__16chrono12steady_clock3nowEv();
  func_0x00010b14f400();
  FUN_10b14c16c();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  puVar1 = auStack_38;
  func_0x00010563be04(puVar1);
  FUN_10b11ef50(uVar2,0xd3,&uStack_50,puVar1);
  FUN_10b120998(&uStack_50);
  return;
}



/* Entry: 10b13e588; end: 10b13e5e3;  */

void FUN_10b13e588(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b14f288();
  func_0x00010b141ad4();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x15);
  *(undefined8 *)(unaff_x20 + 0x10) = *(undefined8 *)(unaff_x19 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x15) = uVar1;
  func_0x000107c27c54(unaff_x20 + 0x20,unaff_x19 + 0x20);
  *(undefined1 *)(unaff_x20 + 0x40) = *(undefined1 *)(unaff_x19 + 0x40);
  func_0x00010880bd10(unaff_x20 + 0x48,unaff_x19 + 0x48);
  func_0x00010880bd10(unaff_x20 + 0x58,unaff_x19 + 0x58);
  return;
}



/* Entry: 10b13e5e4; end: 10b13f1d3;  */

void FUN_10b13e5e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  undefined8 extraout_x8;
  long lVar11;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined **extraout_x8_02;
  undefined **extraout_x8_03;
  undefined **ppuVar12;
  long lVar13;
  long extraout_x8_04;
  long extraout_x8_05;
  undefined **extraout_x8_06;
  byte bVar14;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  code *extraout_x9_02;
  code *extraout_x9_03;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  int extraout_w10_11;
  long extraout_x10;
  long extraout_x10_00;
  long extraout_x10_01;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w12;
  int extraout_w12_00;
  int extraout_w13;
  int extraout_w13_00;
  int extraout_w13_01;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *unaff_x21;
  long *plVar17;
  long unaff_x22;
  code *pcVar18;
  code *pcVar19;
  long *plVar20;
  long lVar21;
  undefined8 uStack_3c0;
  long lStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  undefined8 uStack_378;
  long lStack_370;
  undefined1 auStack_368 [120];
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  undefined1 auStack_2d0 [32];
  undefined8 uStack_2b0;
  long lStack_2a8;
  undefined1 auStack_2a0 [32];
  undefined1 auStack_280 [32];
  undefined1 auStack_260 [120];
  undefined1 auStack_1e8 [104];
  long lStack_180;
  long lStack_178;
  undefined1 auStack_168 [24];
  char cStack_150;
  undefined1 auStack_148 [24];
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  code *pcStack_f8;
  long lStack_f0;
  code *pcStack_e8;
  long lStack_e0;
  long lStack_d8;
  long alStack_d0 [2];
  code *pcStack_c0;
  long *plStack_b8;
  undefined1 auStack_b0 [16];
  code *pcStack_a0;
  long lStack_98;
  code *pcStack_90;
  long lStack_88;
  undefined8 *apuStack_80 [2];
  long lStack_70;
  code *pcStack_68;
  undefined8 *puStack_60;
  code *pcStack_58;
  long lStack_48;
  code *pcStack_40;
  undefined **ppuStack_38;
  code *pcStack_30;
  long lStack_28;
  long lStack_20;
  undefined8 uStack_10;
  
  func_0x00010b150784();
  func_0x00010b14f1c0();
  func_0x00010b14ec00();
  uStack_10 = extraout_x8;
  func_0x000107c316c8(auStack_148,&UNK_10f730581);
  FUN_10b17a83c(auStack_168,param_3 + 0x78);
  if (cStack_150 == '\x01') {
    FUN_10b1564b0(*(undefined8 *)(unaff_x22 + 0x38),auStack_168);
  }
  uVar15 = *(undefined8 *)(unaff_x22 + 0x38);
  FUN_10b141b30(auStack_1e8,param_3 + 0x78);
  FUN_10b121fd0(auStack_260,param_3);
  func_0x000107c279a0(auStack_280,param_3 + 0xe0);
  func_0x000107c279a0(auStack_2a0,param_3 + 0x100);
  FUN_10b153dec(&pcStack_40,uVar15,auStack_1e8,auStack_260,auStack_280,auStack_2a0);
  FUN_10b144ed8(&lStack_180,&pcStack_40);
  FUN_10b141ca0(&pcStack_40);
  func_0x000107c279a4(auStack_2a0);
  func_0x000107c279a4(auStack_280);
  func_0x00010529fe04(auStack_260);
  func_0x00010b141af8(auStack_1e8);
  func_0x000107c279a0(auStack_2d0,auStack_168);
  lStack_2d8 = lStack_178;
  lStack_2e0 = lStack_180;
  if (lStack_178 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10 != 0);
  }
  if ((*(byte *)(param_3 + 0x130) & 1) == 0) {
    bVar14 = *(byte *)(unaff_x22 + 0x68);
  }
  else {
    bVar14 = 0;
  }
  FUN_10b1401e8(&uStack_2b0,auStack_2d0,&lStack_2e0,bVar14 & 1);
  func_0x00010b141cc4(&lStack_2e0);
  func_0x000107c279a4(auStack_2d0);
  uVar5 = *(char *)(param_3 + 0x130) == '\x01';
  if ((bool)uVar5) {
    uVar15 = *(undefined8 *)(param_3 + 0x120);
    uVar16 = *(undefined8 *)(param_3 + 0x128);
  }
  else {
    uVar15 = 0;
    uVar16 = 0x7fffffffffffffff;
  }
  FUN_10b121fd0(auStack_368,param_3);
  uStack_378 = uStack_2b0;
  lStack_370 = lStack_2a8;
  if (lStack_2a8 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10_00 != 0);
  }
  FUN_10b140890(&uStack_2f0,uVar15,uVar16,auStack_368,&uStack_378);
  uStack_3a0 = uStack_2b0;
  lStack_398 = lStack_2a8;
  if (lStack_2a8 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10_01 != 0);
  }
  FUN_10b140b90(&lStack_390,&uStack_3a0);
  uStack_3c0 = uStack_2b0;
  lStack_3b8 = lStack_2a8;
  if (lStack_2a8 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10_02 != 0);
  }
  FUN_10b140e88(&uStack_3b0,&uStack_3c0);
  puVar6 = (undefined8 *)0x320;
  __Znwm();
  uStack_108 = uStack_2e8;
  uStack_110 = uStack_2f0;
  lVar21 = lStack_388;
  lVar13 = lStack_390;
  uVar16 = uStack_3a8;
  uVar15 = uStack_3b0;
  plVar20 = puVar6 + 1;
  *plVar20 = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110cbe8b0;
  puVar6[4] = 0;
  pcVar19 = (code *)(puVar6 + 3);
  *(undefined ***)pcVar19 = &PTR_FUN_110cbe900;
  uStack_2f0 = 0;
  uStack_2e8 = 0;
  lStack_118 = lStack_388;
  lStack_120 = lStack_390;
  lStack_390 = 0;
  lStack_388 = 0;
  uStack_130 = uStack_3b0;
  uStack_128 = uStack_3a8;
  uStack_3b0 = 0;
  uStack_3a8 = 0;
  puVar6[5] = 0;
  puVar7 = puVar6;
  func_0x00010b1503bc();
  plVar9 = puVar7 + 1;
  *plVar9 = 0;
  puVar7[2] = 0;
  puVar8 = puVar7;
  func_0x00010b15013c(&PTR_FUN_110cbe9a0);
  pcVar18 = (code *)(puVar8 + 3);
  puVar8[4] = lVar21;
  *(long *)pcVar18 = lVar13;
  func_0x00010b14ecec();
  puVar8[0x11] = 0;
  __ZNSt3__115recursive_mutexC1Ev(pcVar18);
  func_0x00010b1506c0();
  puVar6[6] = pcVar18;
  puVar6[7] = puVar7;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *plVar9 = *plVar9 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  pcStack_68 = (code *)0x0;
  puStack_60 = (undefined8 *)0x0;
  lStack_f0 = 0;
  pcStack_f8 = (code *)0x0;
  pcStack_c0 = pcVar18;
  plStack_b8 = puVar7;
  FUN_10b142160(&pcStack_40,&uStack_110,&pcStack_f8);
  FUN_10b142188(&pcStack_68,&pcStack_40);
  FUN_10b141ff4(&pcStack_40);
  FUN_10b141ff4(&pcStack_f8);
  func_0x000107c27b48(alStack_d0);
  func_0x000107c27b4c(apuStack_80,alStack_d0[0]);
  pcStack_30 = (code *)alStack_d0[0];
  plStack_b8 = (long *)0x0;
  pcStack_c0 = (code *)0x0;
  alStack_d0[0] = 0;
  pcStack_90 = (code *)0x0;
  lStack_88 = 0;
  pcStack_a0 = pcStack_68 + 0x48;
  lStack_98 = CONCAT71(lStack_98._1_7_,1);
  pcStack_40 = pcVar18;
  ppuStack_38 = (undefined **)puVar7;
  __ZNSt3__15mutex4lockEv();
  pcVar18 = pcStack_68;
  FUN_10b146094();
  if ((int)pcVar18 == 0) {
    func_0x00010b14f254();
    func_0x00010b14fba4(&PTR_FUN_110cbe9f0);
    lVar11 = *(long *)(pcStack_68 + 0x90);
    *(code **)(pcStack_68 + 0x90) = pcVar18;
    if (lVar11 != 0) {
      func_0x00010b14e9b4();
    }
  }
  else {
    FUN_10b142188(&pcStack_90,&pcStack_68);
  }
  func_0x00010b14fdd4();
  if (pcStack_90 != (code *)0x0) {
    pcStack_a0 = pcStack_90;
    lStack_98 = lStack_88;
    if (lStack_88 != 0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10_03 != 0);
    }
    FUN_10b1460c4(&pcStack_40);
    FUN_10b141ff4(&pcStack_a0);
  }
  func_0x00010b15068c();
  FUN_10b141ff4();
  FUN_10b1463ec(&pcStack_40);
  func_0x00010b14fdcc();
  lVar11 = alStack_d0[0];
  alStack_d0[0] = 0;
  if (lVar11 != 0) {
    func_0x00010b14e9f4();
  }
  FUN_10b141ff4(&pcStack_68);
  func_0x000107c27b58(auStack_b0);
  func_0x00010b14640c(&pcStack_c0);
  plVar9 = &lStack_180;
  FUN_10b146430(alStack_d0);
  func_0x00010b1503bc();
  plVar17 = plVar9 + 1;
  *plVar17 = 0;
  plVar9[2] = 0;
  plVar10 = plVar9;
  func_0x00010b15013c(&PTR_FUN_110cbeaf8);
  pcVar18 = (code *)(plVar10 + 3);
  plVar10[4] = lVar21;
  *(long *)pcVar18 = lVar13;
  func_0x00010b14ecec();
  plVar10[0x11] = 0;
  func_0x00010b1502f4();
  *(undefined1 *)(plVar9 + 0xb) = 0;
  *(undefined1 *)(plVar9 + 0xe) = 0;
  plVar9[0x10] = 0;
  plVar9[0x11] = 0;
  plVar9[0xf] = 0;
  puVar6[8] = pcVar18;
  puVar6[9] = plVar9;
  pcStack_c0 = pcVar18;
  plStack_b8 = plVar9;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar3) {
      *plVar17 = *plVar17 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  pcStack_68 = (code *)0x0;
  puStack_60 = (undefined8 *)0x0;
  lStack_f0 = 0;
  pcStack_f8 = (code *)0x0;
  FUN_10b146a4c(&pcStack_40,alStack_d0,&pcStack_f8);
  FUN_10b146a78(&pcStack_68,&pcStack_40);
  FUN_10b14691c(&pcStack_40);
  FUN_10b14691c(&pcStack_f8);
  func_0x000107c27b48(&lStack_70);
  func_0x000107c27b4c(apuStack_80,lStack_70);
  pcVar4 = pcStack_68;
  pcStack_30 = (code *)lStack_70;
  plStack_b8 = (long *)0x0;
  pcStack_c0 = (code *)0x0;
  lStack_70 = 0;
  pcStack_90 = (code *)0x0;
  lStack_88 = 0;
  pcStack_a0 = pcStack_68 + 0x48;
  lStack_98 = CONCAT71(lStack_98._1_7_,1);
  pcStack_40 = pcVar18;
  ppuStack_38 = (undefined **)plVar9;
  __ZNSt3__15mutex4lockEv();
  pcVar18 = pcVar4;
  FUN_10b146c04();
  if ((int)pcVar18 == 0) {
    func_0x00010b14f254();
    func_0x00010b14fba4(&PTR_FUN_110cbeb48);
    lVar13 = *(long *)(pcVar4 + 0x90);
    *(code **)(pcVar4 + 0x90) = pcVar18;
    if (lVar13 != 0) {
      func_0x00010b14e9b4();
    }
    pcVar18 = (code *)0x0;
  }
  else {
    FUN_10b146a78(&pcStack_90,&pcStack_68);
    pcVar18 = pcStack_90;
  }
  func_0x00010b14fdd4();
  if (pcVar18 != (code *)0x0) {
    lStack_98 = lStack_88;
    pcStack_a0 = pcVar18;
    if (lStack_88 != 0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10_04 != 0);
    }
    FUN_10b146c34(&pcStack_40,pcVar18);
    FUN_10b14691c(&pcStack_a0);
  }
  func_0x00010b15068c();
  FUN_10b14691c();
  func_0x00010b146f28(&pcStack_40);
  func_0x00010b14fdcc();
  lVar13 = lStack_70;
  lStack_70 = 0;
  if (lVar13 != 0) {
    func_0x00010b14e9f4();
  }
  FUN_10b14691c(&pcStack_68);
  func_0x000107c27b58(auStack_b0);
  func_0x00010b146f48(&pcStack_c0);
  FUN_10b14691c(alStack_d0);
  puVar6[10] = uVar15;
  puVar6[0xb] = uVar16;
  uStack_128 = 0;
  uStack_130 = 0;
  plVar9 = puVar6 + 0xc;
  puVar6[0xd] = lStack_118;
  *plVar9 = lStack_120;
  lStack_120 = 0;
  lStack_118 = 0;
  pcStack_40 = (code *)&lStack_180;
  FUN_10b1457f4(puVar6 + 0xe,&pcStack_40);
  puVar7 = puVar6 + 0x10;
  func_0x00010b147e48();
  pcVar18 = *(code **)(unaff_x22 + 0x48);
  lStack_f0 = *(long *)(unaff_x22 + 0x50);
  puVar8 = (undefined8 *)0x0;
  pcStack_f8 = pcVar18;
  if (lStack_f0 != 0) {
    do {
      func_0x00010b14eb14();
      puVar8 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  lStack_e0 = lStack_180;
  lStack_d8 = lStack_178;
  lStack_48 = 0;
  pcStack_e8 = pcVar19;
  if (lStack_178 != 0) {
    do {
      func_0x00010b14ee2c();
      puVar8 = extraout_x8_01;
      lStack_48 = extraout_x9;
      lStack_180 = extraout_x10;
    } while (extraout_w13 != 0);
  }
  ppuVar12 = (undefined **)0x0;
  pcStack_68 = pcVar18;
  puStack_60 = puVar8;
  if (puVar8 != (undefined8 *)0x0) {
    do {
      func_0x00010b14ee2c();
      ppuVar12 = extraout_x8_02;
      lStack_48 = extraout_x9_00;
      lStack_180 = extraout_x10_00;
    } while (extraout_w13_00 != 0);
  }
  lStack_20 = 0;
  pcStack_58 = pcVar19;
  if (lStack_48 != 0) {
    do {
      func_0x00010b14ee2c();
      ppuVar12 = extraout_x8_03;
      lStack_20 = extraout_x9_01;
      lStack_180 = extraout_x10_01;
    } while (extraout_w13_01 != 0);
  }
  if (ppuVar12 != (undefined **)0x0) {
    ppuVar1 = ppuVar12 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar3) {
        *ppuVar1 = *ppuVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  pcStack_40 = pcVar18;
  ppuStack_38 = ppuVar12;
  pcStack_30 = pcVar19;
  lStack_28 = lStack_180;
  if (lStack_20 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10_05 != 0);
  }
  func_0x00010b14f7d8();
  puVar7[2] = 0;
  puVar7[3] = 0x32aaaba7;
  puVar7[5] = 0;
  puVar7[4] = 0;
  puVar7[7] = 0;
  puVar7[6] = 0;
  puVar7[9] = 0;
  puVar7[8] = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0x3cb0b1bb;
  puVar7[0xd] = 0;
  puVar7[0xc] = 0;
  puVar7[0xf] = 0;
  puVar7[0xe] = 0;
  *(undefined8 *)((long)puVar7 + 0x84) = 0;
  *(undefined8 *)((long)puVar7 + 0x7c) = 0;
  *puVar7 = &PTR_DAT_110cbece8;
  puVar7[1] = 0;
  puVar7[0x14] = pcVar18;
  puVar7[0x15] = ppuStack_38;
  if (ppuStack_38 != (undefined **)0x0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10_06 != 0);
  }
  puVar7[0x17] = lStack_28;
  puVar7[0x16] = pcStack_30;
  puVar7[0x18] = lStack_20;
  if (lStack_20 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10_07 != 0);
  }
  *(undefined4 *)(puVar7 + 0x11) = 8;
  apuStack_80[0] = puVar7;
  func_0x000107c2805c(puVar7);
  func_0x00010b149fbc(apuStack_80);
  func_0x00010b149ff4(&pcStack_40);
  func_0x00010b149ff4(&pcStack_68);
  puVar6[0x5f] = puVar7;
  func_0x00010b149ff4(&pcStack_f8);
  lVar13 = *(long *)(unaff_x22 + 0x40);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x38);
  puVar6[0x61] = *(undefined8 *)(unaff_x22 + 0x40);
  puVar6[0x60] = uVar15;
  if (lVar13 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10_08 != 0);
  }
  lVar13 = *(long *)(unaff_x22 + 0x50);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x48);
  puVar6[99] = *(undefined8 *)(unaff_x22 + 0x50);
  puVar6[0x62] = uVar15;
  if (lVar13 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10_09 != 0);
  }
  if (*(long *)(puVar6[0x60] + 0x88) != 0) {
    pcVar18 = (code *)puVar6[10];
    puStack_60 = (undefined8 *)puVar6[0xb];
    lStack_28 = 0;
    pcStack_68 = pcVar18;
    if (puStack_60 != (undefined8 *)0x0) {
      do {
        func_0x00010b14ec7c();
        lStack_28 = extraout_x8_04;
        pcVar18 = extraout_x9_02;
      } while (extraout_w12 != 0);
    }
    pcStack_40 = FUN_10b14a01c;
    ppuStack_38 = &PTR_FUN_110cbed20;
    pcStack_30 = pcVar18;
    if (lStack_28 != 0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10_10 != 0);
    }
    func_0x00010b150240();
    func_0x00010b14ed98(ppuStack_38);
    func_0x00010b143298(&pcStack_68);
    if (*(long *)(puVar6[0x60] + 0x88) != 0) {
      pcVar18 = (code *)puVar6[0xc];
      puStack_60 = (undefined8 *)puVar6[0xd];
      lVar13 = 0;
      pcStack_68 = pcVar18;
      if (puStack_60 != (undefined8 *)0x0) {
        do {
          func_0x00010b14ec7c();
          lVar13 = extraout_x8_05;
          pcVar18 = extraout_x9_03;
        } while (extraout_w12_00 != 0);
      }
      pcStack_40 = (code *)0x10b14a25c;
      ppuStack_38 = &PTR_FUN_110cbed38;
      pcStack_30 = pcVar18;
      lStack_28 = lVar13;
      if (lVar13 != 0) {
        do {
          func_0x00010b14ea0c();
        } while (extraout_w10_11 != 0);
      }
      func_0x00010b150240();
      func_0x00010b14ed98(ppuStack_38);
      func_0x00010b142b88(&pcStack_68);
    }
  }
  func_0x00010b143298(&uStack_130);
  func_0x00010b142b88(&lStack_120);
  FUN_10b141ff4(&uStack_110);
  *unaff_x21 = pcVar19;
  unaff_x21[1] = puVar6;
  if ((puVar6[5] == 0) || (uVar5 = *(long *)(puVar6[5] + 8) == -1, (bool)uVar5)) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar3) {
        *plVar20 = *plVar20 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      pcStack_68 = pcVar19;
      puStack_60 = puVar6;
    } while (cVar2 != '\0');
    do {
      func_0x00010b14eb14();
    } while (extraout_w11_00 != 0);
    pcStack_40 = (code *)puVar6[4];
    puVar6[4] = pcVar19;
    puVar6[5] = puVar6;
    ppuStack_38 = extraout_x8_06;
    func_0x00010b14a528(&pcStack_40);
    func_0x00010b144114(&pcStack_68);
  }
  func_0x00010b143298(&uStack_3b0);
  func_0x00010b14355c(&uStack_3c0);
  func_0x00010b142b88(&lStack_390);
  func_0x00010b14355c(&uStack_3a0);
  FUN_10b141ff4(&uStack_2f0);
  func_0x00010b14355c(&uStack_378);
  func_0x00010529fe04(auStack_368);
  func_0x00010b14355c(&uStack_2b0);
  func_0x00010b141cc4(&lStack_180);
  func_0x000107c279a4(auStack_168);
  func_0x000107c316d0(auStack_148);
  func_0x00010b14e980(uStack_10);
  if (!(bool)uVar5) {
    ___stack_chk_fail();
    func_0x00010b14ed98(ppuStack_38);
    func_0x00010b142b88(&pcStack_68);
    func_0x00010b1257f8(puVar6 + 0x62);
    FUN_10b12878c(puVar6 + 0x60);
    func_0x00010b14a4ec(puVar6 + 0x5f);
    func_0x00010b121af0(puVar6 + 0x10);
    func_0x00010b147920(puVar6 + 0xe);
    func_0x00010b142b88(plVar9);
    func_0x00010b143298(puVar6 + 10);
    func_0x00010b146f48(puVar6 + 8);
    func_0x00010b14640c(puVar6 + 6);
    do {
      func_0x00010b14a528(puVar6 + 4);
      func_0x00010b143298(&uStack_130);
      func_0x00010b142b88(&lStack_120);
      FUN_10b141ff4(&uStack_110);
      __ZNSt3__119__shared_weak_countD2Ev(puVar6);
      __ZdlPv();
      func_0x00010b143298(&uStack_3b0);
      func_0x00010b14355c(&uStack_3c0);
      func_0x00010b142b88(&lStack_390);
      func_0x00010b14355c(&uStack_3a0);
      FUN_10b141ff4(&uStack_2f0);
      func_0x00010b14355c(&uStack_378);
      func_0x00010529fe04(auStack_368);
      func_0x00010b14355c(&uStack_2b0);
      func_0x00010b141cc4(&lStack_180);
      func_0x000107c279a4(auStack_168);
      func_0x000107c316d0(auStack_148);
      func_0x00010b14f23c();
      __ZNSt3__119__shared_weak_countD2Ev(plVar9);
      __ZdlPv();
    } while( true );
  }
  return;
}



/* Entry: 10b13f1d4; end: 10b13f3b3;  */

void FUN_10b13f1d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *unaff_x19;
  undefined1 auStack_228 [120];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  ulong uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  undefined1 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [24];
  undefined1 uStack_130;
  undefined1 uStack_128;
  undefined1 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long alStack_e0 [2];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  char cStack_98;
  undefined1 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  
  func_0x00010b14f67c();
  func_0x00010b150378(auStack_60);
  FUN_10b13dcbc(&uStack_d0);
  FUN_10b13e138(alStack_e0,param_3);
  FUN_10b121fd0(auStack_228,param_2);
  uStack_160 = uStack_80;
  uStack_168 = uStack_88;
  uStack_1a8 = uStack_c8;
  uStack_1b0 = uStack_d0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_190 = uStack_190 & 0xffffffffffffff00;
  uStack_178 = cStack_98 == '\x01';
  if ((bool)uStack_178) {
    uStack_188 = uStack_a8;
    uStack_190 = uStack_b0;
    uStack_180 = uStack_a0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b0 = 0;
  }
  uStack_170 = uStack_90;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_150 = uStack_70;
  uStack_158 = uStack_78;
  uStack_78 = 0;
  uStack_70 = 0;
  if (alStack_e0[0] == 0) {
    auStack_148[0] = 0;
    uStack_130 = 0;
  }
  else {
    func_0x000107c279a0(auStack_148,alStack_e0[0] + 0x88);
    if (alStack_e0[0] != 0) {
      func_0x00010b1501f4();
      goto LAB_10b13f2e4;
    }
  }
  uStack_128 = 0;
  uStack_110 = 0;
LAB_10b13f2e4:
  uStack_100 = param_4[1];
  uStack_108 = *param_4;
  uStack_f8 = 1;
  FUN_10b13e5e4(&uStack_f0);
  unaff_x19[1] = uStack_e8;
  *unaff_x19 = uStack_f0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  func_0x00010b144114(&uStack_f0);
  func_0x00010b14fea8();
  func_0x00010b1440f0(alStack_e0);
  func_0x00010b141af8(&uStack_d0);
  func_0x000107c281c0(auStack_60);
  return;
}



/* Entry: 10b13f3b4; end: 10b13f3c3;  */

void FUN_10b13f3b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b13f3c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x38) + 0x10))();
  return;
}



/* Entry: 10b13f3c4; end: 10b13f42f;  */

void FUN_10b13f3c4(void)

{
  byte *unaff_x19;
  long unaff_x20;
  long lStack_48;
  long lStack_40;
  
  func_0x00010b14f67c();
  func_0x00010b14f03c();
  do {
    if (lStack_48 == lStack_40) {
      func_0x00010b14f5dc();
      *unaff_x19 = 0;
      unaff_x19[8] = 0;
      unaff_x19[9] = 0;
      unaff_x19[10] = 0;
      unaff_x19[0xb] = 0;
      unaff_x19[0xc] = 0;
      unaff_x19[0xd] = 0;
      unaff_x19[0xe] = 0;
      unaff_x19[0xf] = 0;
      unaff_x19[0x10] = 0;
      unaff_x19[0x11] = 0;
      unaff_x19[0x12] = 0;
      unaff_x19[0x13] = 0;
      unaff_x19[0x14] = 0;
      unaff_x19[0x15] = 0;
      unaff_x19[0x16] = 0;
      unaff_x19[0x17] = 0;
      return;
    }
    FUN_10b1562d0(*(undefined8 *)(unaff_x20 + 0x38),lStack_48);
    lStack_48 = lStack_48 + 0x10;
  } while ((*unaff_x19 & 1) == 0);
  func_0x00010b14f5dc();
  return;
}



/* Entry: 10b13f430; end: 10b13f753;  */

void FUN_10b13f430(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 extraout_x8;
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_440 [80];
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  ulong uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined1 uStack_3b8;
  ulong uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  char cStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  ulong uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 uStack_328;
  byte bStack_308;
  byte bStack_2d8;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [24];
  byte bStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  char cStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  
  func_0x00010b14f3f4();
  (**(code **)(**(long **)(param_1 + 0x28) + 0x38))(&lStack_58,*(long **)(param_1 + 0x28),param_3);
  if (lStack_58 == lStack_50) {
    func_0x00010b14f3c4();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_70);
    func_0x00010b141be0(&uStack_90,&UNK_10f730468);
    uStack_350 = uStack_60;
    uStack_358 = uStack_68;
    uStack_360 = uStack_70;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_70 = 0;
    uStack_348 = 2;
    uStack_340 = uStack_340 & 0xffffffffffffff00;
    uStack_328 = cStack_78 == '\x01';
    if ((bool)uStack_328) {
      uStack_338 = uStack_88;
      uStack_340 = uStack_90;
      uStack_330 = uStack_80;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_90 = 0;
    }
    func_0x00010b150174();
    func_0x0001052a03ac(&uStack_360);
    func_0x000107c279a4(&uStack_90);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_70);
  }
  else {
    FUN_10b17a83c(auStack_b0);
    if ((bStack_98 & 1) == 0) {
      func_0x00010b14f3c4();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_c8);
      func_0x000107c278b8(&uStack_e8,&UNK_10f730487);
      uStack_350 = uStack_b8;
      uStack_d0 = 1;
      uStack_358 = uStack_c0;
      uStack_360 = uStack_c8;
      uStack_c8 = 0;
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_348 = 2;
      uStack_338 = uStack_e0;
      uStack_340 = uStack_e8;
      uStack_330 = uStack_d8;
      uStack_e8 = 0;
      uStack_e0 = 0;
      uStack_d8 = 0;
      uStack_328 = 1;
      func_0x00010b150174();
      func_0x0001052a03ac(&uStack_360);
      func_0x000107c279a4(&uStack_e8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_c8);
    }
    else {
      uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
      FUN_10b13f754(&uStack_3f0);
      func_0x00010b1501a4(&uStack_360,uVar1,&uStack_3f0,0);
      func_0x00010b150454();
      if (((bStack_308 & 1) == 0) && ((bStack_2d8 & 1) == 0)) {
        func_0x00010b14f3c4();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_378);
        func_0x00010b141bf8(&uStack_398,&UNK_10f7304b8);
        uStack_3e0 = uStack_368;
        uStack_3e8 = uStack_370;
        uStack_3f0 = uStack_378;
        uStack_370 = 0;
        uStack_368 = 0;
        uStack_378 = 0;
        uStack_3d8 = 2;
        uStack_3d0 = uStack_3d0 & 0xffffffffffffff00;
        uStack_3b8 = cStack_380 == '\x01';
        if ((bool)uStack_3b8) {
          uStack_3c8 = uStack_390;
          uStack_3d0 = uStack_398;
          uStack_3c0 = uStack_388;
          uStack_390 = 0;
          uStack_388 = 0;
          uStack_398 = 0;
        }
        func_0x0001052b8c70(extraout_x8,&uStack_3f0);
        func_0x00010b14f468();
        func_0x000107c279a4(&uStack_398);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_378);
      }
      else {
        uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
        FUN_10b202630(&uStack_3f0,auStack_b0);
        FUN_10b202630(auStack_440,&uStack_360);
        FUN_10b1f7560(extraout_x8,uVar1,&uStack_3f0,auStack_440);
        func_0x00010b14f978();
        func_0x00010b121e00(&uStack_3f0);
      }
      func_0x00010b121af0(&uStack_360);
    }
    func_0x000107c279a4(auStack_b0);
  }
  func_0x0001052b60a4(&lStack_58);
  return;
}



/* Entry: 10b13f754; end: 10b13f7af;  */

void FUN_10b13f754(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&uStack_38,&UNK_10f73067b,param_2);
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  param_1[1] = uStack_30;
  *param_1 = uStack_38;
  param_1[2] = uStack_28;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  *(undefined4 *)(param_1 + 3) = uVar1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_38);
  return;
}



/* Entry: 10b13f7b0; end: 10b13ff0f;  */

void FUN_10b13f7b0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long **pplVar6;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined **ppuVar7;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long *plVar8;
  long extraout_x8_02;
  long extraout_x8_03;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w10;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  char cStack_4f0;
  long *plStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined1 uStack_4b8;
  long *plStack_4b0;
  long lStack_4a8;
  undefined8 uStack_4a0;
  long *plStack_498;
  long lStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  char cStack_470;
  long *plStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  long *aplStack_450 [2];
  long alStack_440 [3];
  undefined8 *puStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  long lStack_410;
  long lStack_408;
  undefined *puStack_400;
  undefined *puStack_3f8;
  long *plStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined1 uStack_3b8;
  long *plStack_3b0;
  long lStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined1 uStack_378;
  char cStack_370;
  undefined *puStack_360;
  undefined *puStack_358;
  byte bStack_350;
  undefined1 auStack_310 [88];
  byte bStack_2b8;
  int iStack_2ac;
  long lStack_2a8;
  long lStack_2a0;
  undefined *puStack_298;
  long lStack_290;
  char cStack_288;
  char cStack_14e;
  undefined1 auStack_98 [24];
  byte bStack_80;
  long alStack_78 [2];
  undefined1 uStack_68;
  undefined1 uStack_64;
  undefined1 uStack_60;
  undefined1 uStack_5c;
  undefined1 uStack_58;
  undefined1 uStack_40;
  undefined1 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010b150784();
  func_0x00010b14f67c();
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  alStack_78[0] = 0;
  alStack_78[1] = 0;
  uStack_68 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_18 = 0;
  uStack_20 = 0;
  func_0x00010b150378(&puStack_360);
  func_0x00010b150388(auStack_310);
  FUN_10b13e588(alStack_78,auStack_310);
  func_0x00010b141af8(auStack_310);
  func_0x000107c281c0(&puStack_360);
  if (alStack_78[0] == 0) {
    func_0x00010b14f724();
    goto LAB_10b13f8a4;
  }
  FUN_10b17a83c(auStack_98,alStack_78);
  if ((bStack_80 & 1) == 0) {
    func_0x00010b14f724();
  }
  else {
    uVar9 = *(undefined8 *)(unaff_x20 + 0x48);
    func_0x00010b14f9b0();
    FUN_10b1f69e0(auStack_310,uVar9,&puStack_360,0,1);
    func_0x00010b14f504();
    if (((((bStack_2b8 & 1) == 0) && (cStack_288 == '\0')) || (cStack_288 == '\0')) ||
       (lStack_290 != 0)) {
LAB_10b13f880:
      func_0x00010b14f724();
    }
    else {
      FUN_10b15589c(&puStack_360,*(undefined8 *)(unaff_x20 + 0x38),auStack_98,auStack_310);
      puVar11 = puStack_360;
      func_0x00010b129c40(&puStack_360);
      if ((puVar11 != (undefined *)0x0) ||
         (FUN_10b1f72cc(*(undefined8 *)(unaff_x20 + 0x48),auStack_310), cStack_14e != '\x01')) {
        uVar4 = *(ulong *)(unaff_x20 + 0x38);
        FUN_10b1560cc(uVar4,alStack_78);
        if ((uVar4 & 1) != 0) {
          if (iStack_2ac != 2) {
            func_0x00010b14f9b0();
            func_0x00010b14feec();
            func_0x00010b14f504();
            if (cStack_370 == '\x01') {
LAB_10b13fa10:
              func_0x00010b141c28();
            }
            else {
              func_0x0001052a0760(&puStack_360,&plStack_3b0);
              func_0x00010b141c70();
              func_0x0001052a03ac(&puStack_360);
            }
            func_0x00010b150430();
            goto LAB_10b13f884;
          }
          puVar5 = auStack_310;
          FUN_10b1c4c88();
          if ((lStack_2a8 == 0) || (lStack_2a0 != lStack_2a8)) {
            if (puVar5 == (undefined1 *)0x0) goto LAB_10b13f880;
            if (puVar5[0x30] == '\x01') goto LAB_10b13f998;
          }
          else {
LAB_10b13f998:
            func_0x00010b14f9b0();
            func_0x00010b14feec();
            func_0x00010b14f504();
            if (cStack_370 == '\x01') goto LAB_10b13fa10;
            func_0x00010b150430();
            if (puVar5 == (undefined1 *)0x0) goto LAB_10b13f880;
          }
          if (*(int *)(puVar5 + 0x10) != 0) {
            puVar11 = puStack_298;
            if (*(char *)(param_3 + 2) == '\x01') {
              puVar13 = (undefined *)*param_3;
              puVar1 = puStack_298;
              if ((long)puVar13 <= (long)puStack_298) {
                puVar1 = puVar13;
              }
              puVar12 = (undefined *)0x0;
              if (-1 < (long)puVar13) {
                puVar12 = puVar1;
              }
              if ((long)param_3[1] <= (long)puStack_298) {
                puVar11 = (undefined *)param_3[1];
              }
            }
            else {
              puVar12 = (undefined *)0x0;
            }
            puStack_400 = puVar12;
            puStack_3f8 = puVar11;
            if ((long)puVar11 - (long)puVar12 != 0 && (long)puVar12 <= (long)puVar11) {
              func_0x000107c31718(&lStack_410,(long)puVar11 - (long)puVar12);
              uStack_420 = 0;
              uStack_418 = 0;
              puStack_428 = &uStack_420;
              func_0x00010564c19c(alStack_440,puVar5 + 0x10);
              while (lVar10 = alStack_440[0], alStack_440[0] != 0) {
                ppuVar7 = &PTR_PTR_11336cc18;
                if (*(int *)(alStack_440[0] + 0x44) == 2) {
                  ppuVar7 = *(undefined ***)(alStack_440[0] + 0x38);
                }
                puVar13 = ppuVar7[2];
                puVar1 = puVar13 + *(long *)(alStack_440[0] + 0x30);
                if ((long)puVar12 < (long)puVar1 && (long)puVar13 < (long)puVar11) {
                  puVar2 = puVar13;
                  if ((long)puVar13 <= (long)puVar12) {
                    puVar2 = puVar12;
                  }
                  if ((long)puVar11 <= (long)puVar1) {
                    puVar1 = puVar11;
                  }
                  FUN_10b2026a0(&puStack_360,auStack_98,alStack_440[0] + 8);
                  func_0x00010b1f70f0(aplStack_450,*(undefined8 *)(unaff_x20 + 0x48),&puStack_360);
                  if (aplStack_450[0] == (long *)0x0) {
LAB_10b13fc04:
                    func_0x00010b14f3c4();
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                              (&plStack_468);
                    func_0x00010564b174(&uStack_488,&UNK_10f7304df);
                    uVar9 = uStack_458;
                    uStack_3e8 = uStack_460;
                    plStack_3f0 = plStack_468;
                    uStack_460 = 0;
                    uStack_458 = 0;
                    plStack_468 = (long *)0x0;
                    func_0x00010b150040(uVar9);
                    if (cStack_470 == '\x01') {
                      *(undefined8 *)(extraout_x8_02 + 0x28) = uStack_480;
                      *(undefined8 *)(extraout_x8_02 + 0x20) = uStack_488;
                      *(undefined8 *)(extraout_x8_02 + 0x30) = uStack_478;
                      uStack_480 = 0;
                      uStack_478 = 0;
                      uStack_488 = 0;
                      uStack_3b8 = 1;
                    }
                    func_0x00010b14f874();
                    if (extraout_w9 != 0) {
                      func_0x00010b14e994();
                      uStack_378 = extraout_w8;
                    }
                    func_0x00010b14f96c();
                    func_0x00010b150428();
                    func_0x00010b14fc90();
                    func_0x000107c279a4(&uStack_488);
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                              (&plStack_468);
                  }
                  else {
                    plVar8 = aplStack_450[0];
                    func_0x00010b14f664();
                    iVar3 = (int)plVar8;
                    (*extraout_x8)();
                    if (iVar3 != 0) goto LAB_10b13fc04;
                    (**(code **)(*aplStack_450[0] + 0x20))(&plStack_498);
                    plVar8 = plStack_498;
                    plStack_3b0 = plStack_498;
                    lStack_3a8 = lStack_490;
                    if (lStack_490 != 0) {
                      do {
                        func_0x00010b14ea0c();
                      } while (extraout_w10 != 0);
                    }
                    func_0x000107c27d78(&plStack_3b0);
                    if (plVar8 == (long *)0x0) {
                      func_0x00010b14f3c4();
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                                (&plStack_4b0);
                      func_0x000107c278b8(&uStack_4d0,&UNK_10f730516);
                      uStack_3a0 = uStack_4a0;
                      lStack_3a8 = lStack_4a8;
                      plStack_3b0 = plStack_4b0;
                      uStack_380 = uStack_4c0;
                      uStack_388 = uStack_4c8;
                      uStack_390 = uStack_4d0;
                      uStack_4b8 = 1;
                      plStack_4b0 = (long *)0x0;
                      lStack_4a8 = 0;
                      uStack_4a0 = 0;
                      uStack_3d8 = 2;
                      uStack_3c8 = 0;
                      uStack_4d0 = 0;
                      uStack_4c8 = 0;
                      uStack_4c0 = 0;
                      uStack_3b8 = 1;
                      plStack_3f0 = (long *)0x0;
                      uStack_3e8 = 0;
                      uStack_398 = 2;
                      uStack_3e0 = 0;
                      uStack_3d0 = 0;
                      uStack_3c0 = 0;
                      uStack_378 = 1;
                      func_0x00010b14f96c();
                      func_0x00010b150428();
                      func_0x00010b14fc90();
                      func_0x000107c279a4(&uStack_4d0);
                      pplVar6 = &plStack_4b0;
                    }
                    else {
                      plVar8 = plStack_498;
                      if (plStack_498 != (long *)0x0) {
                        (**(code **)(*plStack_498 + 0x18))();
                      }
                      if (plVar8 == *(long **)(lVar10 + 0x30)) {
                        if (lStack_410 == 0) {
                          lVar10 = 0;
                        }
                        else {
                          lVar10 = lStack_410;
                          func_0x00010b150130();
                          (*extraout_x8_00)();
                        }
                        if (plStack_498 == (long *)0x0) {
                          plVar8 = (long *)0x0;
                        }
                        else {
                          plVar8 = plStack_498;
                          func_0x00010b14f664();
                          (*extraout_x8_01)();
                        }
                        _memcpy(puVar2 + (lVar10 - (long)puVar12),
                                (long)plVar8 + ((long)puVar2 - (long)puVar13),
                                (long)puVar1 - (long)puVar2);
                        FUN_10b20a8d4(&puStack_428,puVar2,puVar1);
                        func_0x00010b150338();
                        func_0x00010b150330();
                        func_0x00010b14f504();
                        goto LAB_10b13fbc0;
                      }
                      func_0x00010b14f3c4();
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                                (&plStack_4e8);
                      func_0x00010b141c88(&uStack_508,&UNK_10f73054b);
                      uVar9 = uStack_4d8;
                      uStack_3e8 = uStack_4e0;
                      plStack_3f0 = plStack_4e8;
                      uStack_4e0 = 0;
                      uStack_4d8 = 0;
                      plStack_4e8 = (long *)0x0;
                      func_0x00010b150040(uVar9);
                      if (cStack_4f0 == '\x01') {
                        *(undefined8 *)(extraout_x8_03 + 0x28) = uStack_500;
                        *(undefined8 *)(extraout_x8_03 + 0x20) = uStack_508;
                        *(undefined8 *)(extraout_x8_03 + 0x30) = uStack_4f8;
                        uStack_500 = 0;
                        uStack_4f8 = 0;
                        uStack_508 = 0;
                        uStack_3b8 = 1;
                      }
                      func_0x00010b14f874();
                      if (extraout_w9_00 != 0) {
                        func_0x00010b14e994();
                        uStack_378 = extraout_w8_00;
                      }
                      func_0x00010b14f96c();
                      func_0x00010b150428();
                      func_0x00010b14fc90();
                      func_0x000107c279a4(&uStack_508);
                      pplVar6 = &plStack_4e8;
                    }
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pplVar6);
                    func_0x00010b150338();
                  }
                  func_0x00010b150330();
                  func_0x00010b14f504();
                  goto LAB_10b13fde0;
                }
LAB_10b13fbc0:
                func_0x000107c27d54(alStack_440);
              }
              FUN_10b20a9ec(&puStack_360,&puStack_428,&puStack_400);
              if (((bStack_350 & 1) == 0) ||
                 (puStack_360 != puStack_400 || puStack_358 != puStack_3f8)) {
                func_0x00010b14f724();
              }
              else {
                unaff_x19[1] = lStack_408;
                *unaff_x19 = lStack_410;
                lStack_410 = 0;
                lStack_408 = 0;
                *(undefined1 *)(unaff_x19 + 9) = 1;
              }
LAB_10b13fde0:
              FUN_10b139f84(&puStack_428);
              func_0x000107c27d78(&lStack_410);
              goto LAB_10b13f884;
            }
          }
        }
        goto LAB_10b13f880;
      }
      FUN_10b11f624(&plStack_3f0,*(undefined8 *)(unaff_x20 + 0x48));
      func_0x0001052b8c70(&plStack_3b0,&plStack_3f0);
      func_0x0001052a07e8(&puStack_360,&plStack_3b0);
      func_0x0001052a07e8();
      *(undefined1 *)(unaff_x19 + 9) = 0;
      func_0x0001052a038c(&puStack_360);
      func_0x0001052a038c(&plStack_3b0);
      func_0x00010b14fc90();
    }
LAB_10b13f884:
    func_0x00010b121af0(auStack_310);
  }
  func_0x000107c279a4(auStack_98);
LAB_10b13f8a4:
  func_0x00010b141af8(alStack_78);
  return;
}



/* Entry: 10b13ff10; end: 10b1401e7;  */

void FUN_10b13ff10(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  long **pplVar2;
  undefined8 uVar3;
  int iVar4;
  code *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long **pplVar5;
  code *extraout_x8_02;
  int extraout_w9;
  int extraout_w9_00;
  long *plVar6;
  long *plVar7;
  int extraout_w10;
  long *plVar8;
  long *plVar9;
  long *plStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  char cStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  char cStack_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_98;
  long *plStack_90;
  long lStack_88;
  long *aplStack_50 [2];
  
  func_0x00010b1f70f0(aplStack_50,param_2,param_3);
  if (aplStack_50[0] != (long *)0x0) {
    plVar8 = aplStack_50[0];
    func_0x00010b14f664();
    iVar4 = (int)plVar8;
    (*extraout_x8)();
    if (iVar4 == 0) {
      (**(code **)(*aplStack_50[0] + 0x20))(&plStack_118);
      plVar8 = plStack_118;
      plStack_90 = plStack_118;
      lStack_88 = lStack_110;
      if (lStack_110 != 0) {
        do {
          func_0x00010b14ea0c();
        } while (extraout_w10 != 0);
      }
      func_0x000107c27d78(&plStack_90);
      if (plVar8 == (long *)0x0) {
        func_0x00010b14f3c4();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&plStack_130);
        func_0x00010b124770(&uStack_150,&UNK_10f7306ab);
        uVar3 = uStack_120;
        uStack_c8 = uStack_128;
        plStack_d0 = plStack_130;
        uStack_128 = 0;
        uStack_120 = 0;
        plStack_130 = (long *)0x0;
        func_0x00010b150058(uVar3);
        if (cStack_138 == '\x01') {
          *(undefined8 *)(extraout_x8_01 + 0x28) = uStack_148;
          *(undefined8 *)(extraout_x8_01 + 0x20) = uStack_150;
          *(undefined8 *)(extraout_x8_01 + 0x30) = uStack_140;
          uStack_148 = 0;
          uStack_140 = 0;
          uStack_150 = 0;
          uStack_98 = 1;
        }
        func_0x00010b14f73c();
        if (extraout_w9_00 != 0) {
          func_0x00010b14e994();
        }
        func_0x00010b150284();
        func_0x0001052a03ac(&plStack_90);
        func_0x0001052a03ac(&plStack_d0);
        func_0x000107c279a4(&uStack_150);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_130);
      }
      else {
        plVar8 = plStack_118;
        if (plStack_118 != (long *)0x0) {
          (**(code **)(*plStack_118 + 0x18))();
        }
        plStack_d0 = plVar8;
        if (*(char *)(param_4 + 2) == '\x01') {
          plVar6 = (long *)*param_4;
          plVar1 = plVar8;
          if ((long)plVar6 <= (long)plVar8) {
            plVar1 = plVar6;
          }
          plVar7 = (long *)param_4[1];
          plVar9 = (long *)0x0;
          if (-1 < (long)plVar6) {
            plVar9 = plVar1;
          }
          pplVar2 = &plStack_d0;
          if ((long)plVar7 <= (long)plVar8) {
            pplVar2 = (long **)(param_4 + 1);
          }
          pplVar5 = &plStack_158;
          if ((long)plVar9 <= (long)plVar7) {
            pplVar5 = pplVar2;
          }
        }
        else {
          plVar9 = (long *)0x0;
          pplVar5 = &plStack_d0;
        }
        plVar8 = *pplVar5;
        plStack_158 = plVar9;
        if (plStack_118 == (long *)0x0) {
          plStack_118 = (long *)0x0;
        }
        else {
          func_0x00010b14f664();
          (*extraout_x8_02)();
        }
        func_0x00010bd48000(&plStack_90,(long)plStack_118 + (long)plVar9,(long)plVar8 - (long)plVar9
                           );
        param_1[1] = lStack_88;
        *param_1 = plStack_90;
        plStack_90 = (long *)0x0;
        lStack_88 = 0;
        *(undefined1 *)(param_1 + 8) = 1;
        func_0x000107c27d78();
      }
      func_0x000107c27d78(&plStack_118);
      goto LAB_10b140178;
    }
  }
  func_0x00010b14f3c4();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&plStack_e8);
  func_0x00010b141c10(&uStack_108,&UNK_10f73067f);
  uVar3 = uStack_d8;
  uStack_c8 = uStack_e0;
  plStack_d0 = plStack_e8;
  uStack_e0 = 0;
  uStack_d8 = 0;
  plStack_e8 = (long *)0x0;
  func_0x00010b150058(uVar3);
  if (cStack_f0 == '\x01') {
    *(undefined8 *)(extraout_x8_00 + 0x28) = uStack_100;
    *(undefined8 *)(extraout_x8_00 + 0x20) = uStack_108;
    *(undefined8 *)(extraout_x8_00 + 0x30) = uStack_f8;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_108 = 0;
    uStack_98 = 1;
  }
  func_0x00010b14f73c();
  if (extraout_w9 != 0) {
    func_0x00010b14e994();
  }
  func_0x00010b150284();
  func_0x0001052a03ac(&plStack_90);
  func_0x0001052a03ac(&plStack_d0);
  func_0x000107c279a4(&uStack_108);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_e8);
LAB_10b140178:
  func_0x00010b10c000(aplStack_50);
  return;
}



/* Entry: 10b1401e8; end: 10b14088f;  */

void FUN_10b1401e8(undefined8 *param_1,undefined8 *param_2,long *param_3,undefined1 param_4)

{
  ulong uVar1;
  undefined1 uVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined1 extraout_w8;
  undefined8 extraout_x8;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long extraout_x9;
  ulong extraout_x9_00;
  long extraout_x9_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long *plStack_a0;
  long lStack_98;
  long *plStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar7 = param_2;
  func_0x00010b150238();
  *puVar7 = FUN_10b14c19c;
  puVar7[1] = FUN_10b14c424;
  puVar13 = puVar7 + 0xb;
  *(undefined1 *)puVar13 = 0;
  *(undefined1 *)((long)puVar7 + 0xf1) = param_4;
  *(undefined1 *)(puVar7 + 0xe) = 0;
  uVar6 = *(char *)(param_2 + 3) == '\x01';
  if ((bool)uVar6) {
    uVar19 = *param_2;
    puVar7[0xc] = param_2[1];
    *puVar13 = uVar19;
    puVar7[0xd] = param_2[2];
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    *(undefined1 *)(puVar7 + 0xe) = 1;
  }
  lVar18 = param_3[1];
  lVar9 = *param_3;
  puVar7[0x1c] = lVar18;
  puVar7[0x1b] = lVar9;
  *param_3 = 0;
  param_3[1] = 0;
  puVar7[2] = &PTR_FUN_110cbe580;
  puVar8 = puVar7;
  func_0x00010b14fddc();
  func_0x00010b14f160();
  puVar8[2] = 0;
  *puVar8 = &PTR_FUN_110cbe5a0;
  func_0x00010b14eb94();
  do {
    func_0x00010b14eb14();
  } while (extraout_w11 != 0);
  puVar14 = puVar7 + 7;
  *(undefined1 *)puVar14 = 0;
  puVar7[2] = &PTR_FUN_110cbe538;
  *(undefined1 *)(puVar7 + 10) = 0;
  puStack_88 = puVar8;
  do {
    func_0x00010b14eb14();
  } while (extraout_w11_00 != 0);
  do {
    func_0x00010b14eb14();
  } while (extraout_w11_01 != 0);
  puVar7[0x19] = extraout_x8;
  puVar7[0x1a] = puVar8;
  func_0x00010b14fedc();
  func_0x00010b1503bc();
  plVar10 = puVar8 + 1;
  *plVar10 = 0;
  puVar8[2] = 0;
  puVar15 = puVar8;
  func_0x00010b15013c(&PTR_FUN_110cbe5f0);
  plVar16 = puVar15 + 3;
  puVar15[4] = lVar18;
  *plVar16 = lVar9;
  func_0x00010b14ecec();
  puVar15[0x11] = 0;
  __ZNSt3__115recursive_mutexC1Ev(plVar16);
  func_0x00010b1506c0();
  *param_1 = plVar16;
  param_1[1] = puVar8;
  puVar7[0x17] = plVar16;
  puVar7[0x18] = puVar8;
  do {
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *plVar10 = *plVar10 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  puVar7[0xf] = 0;
  puVar7[0x10] = 0;
  puVar7[0x11] = 0;
  puVar7[0x12] = 0;
  FUN_10b1437bc(&plStack_90,puVar7 + 0x19,puVar7 + 0x11);
  FUN_10b1437e8(puVar7 + 0xf,&plStack_90);
  func_0x00010b14fedc();
  FUN_10b14368c(puVar7 + 0x11);
  func_0x000107c27b48(puVar7 + 0x1d);
  func_0x000107c27b4c(&uStack_70,puVar7[0x1d]);
  puVar7[0x17] = 0;
  puVar7[0x18] = 0;
  uStack_80 = puVar7[0x1d];
  puVar7[0x1d] = 0;
  plStack_a0 = (long *)0x0;
  lStack_98 = 0;
  puVar15 = (undefined8 *)puVar7[0xf];
  plStack_90 = plVar16;
  puStack_88 = puVar8;
  __ZNSt3__15mutex4lockEv();
  puVar8 = puVar15;
  FUN_10b14389c();
  if ((int)puVar8 == 0) {
    func_0x00010b14f254();
    uVar19 = uStack_80;
    *puVar8 = &PTR_FUN_110cbe640;
    puVar8[2] = puStack_88;
    puVar8[1] = plStack_90;
    plStack_90 = (long *)0x0;
    puStack_88 = (undefined8 *)0x0;
    uStack_80 = 0;
    puVar8[3] = uVar19;
    lVar9 = puVar15[0x12];
    puVar15[0x12] = puVar8;
    if (lVar9 != 0) {
      func_0x00010b14e9b4();
    }
    plVar16 = (long *)0x0;
  }
  else {
    FUN_10b1437e8(&plStack_a0,puVar7 + 0xf);
    plVar16 = plStack_a0;
  }
  func_0x00010b14f89c();
  if (plVar16 != (long *)0x0) {
    puVar7[0x13] = plVar16;
    puVar7[0x14] = lStack_98;
    if (lStack_98 != 0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10 != 0);
    }
    FUN_10b1438cc(&plStack_90,plVar16);
    FUN_10b14368c(puVar7 + 0x13);
  }
  puVar7[0x16] = uStack_68;
  puVar7[0x15] = uStack_70;
  uStack_70 = 0;
  uStack_68 = 0;
  func_0x00010b14f854();
  FUN_10b143bf4(&plStack_90);
  func_0x00010b14ff30();
  lVar9 = puVar7[0x1d];
  puVar7[0x1d] = 0;
  if (lVar9 != 0) {
    func_0x00010b14e9f4();
  }
  FUN_10b14368c(puVar7 + 0xf);
  func_0x000107c27b58(puVar7 + 0x15);
  func_0x00010b14355c(puVar7 + 0x17);
  FUN_10b14368c(puVar7 + 0x19);
  puVar8 = puVar7 + 0x1b;
  func_0x00010b143580();
  if (((ulong)puVar8 & 1) == 0) {
    *(undefined1 *)(puVar7 + 0x1e) = 0;
    __ZNSt3__115recursive_mutex4lockEv(puVar7[0x1b]);
    lVar9 = puVar7[0x1b];
    if ((*(byte *)(lVar9 + 0x58) & 1) == 0) {
      puVar13 = *(undefined8 **)(lVar9 + 0x68);
      bVar5 = *(undefined8 **)(lVar9 + 0x70) <= puVar13;
      if (bVar5) {
        lVar18 = *(long *)(lVar9 + 0x60);
        lVar17 = (long)puVar13 - lVar18;
        if ((lVar17 >> 3) + 1U >> 0x3d != 0) {
          func_0x00010552fc6c();
LAB_10b140720:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10b140724);
          (*pcVar4)();
        }
        func_0x00010b14e8b4((long)*(undefined8 **)(lVar9 + 0x70) - lVar18);
        uVar1 = extraout_x9_00;
        if (bVar5) {
          uVar1 = extraout_x8_01;
        }
        if (uVar1 == 0) {
          lVar12 = 0;
        }
        else {
          if (uVar1 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10b140720;
          }
          lVar12 = uVar1 << 3;
          __Znwm();
        }
        puVar13 = (undefined8 *)(lVar12 + lVar17);
        puVar8 = puVar13 + 1;
        *puVar13 = puVar7;
        _memcpy(puVar13 + -(lVar17 >> 3),lVar18,lVar17);
        *(undefined8 **)(lVar9 + 0x60) = puVar13 + -(lVar17 >> 3);
        *(undefined8 **)(lVar9 + 0x68) = puVar8;
        *(ulong *)(lVar9 + 0x70) = lVar12 + uVar1 * 8;
        if (lVar18 != 0) {
          __ZdlPv(lVar18);
        }
      }
      else {
        puVar8 = puVar13 + 1;
        *puVar13 = puVar7;
      }
      *(undefined8 **)(lVar9 + 0x68) = puVar8;
      func_0x00010b14f7bc();
    }
    else {
      func_0x00010b14f7bc();
      func_0x00010b14efec(*puVar7);
    }
  }
  else {
    plVar10 = puVar7 + 0x1b;
    FUN_10b1435a8();
    lVar18 = *plVar10;
    puVar7[0xf] = lVar18;
    lVar9 = plVar10[1];
    puVar7[0x10] = lVar9;
    if (lVar9 != 0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10_00 != 0);
    }
    if (lVar18 == 0) {
      func_0x00010b150298();
      *puVar14 = 0;
      puVar7[8] = 0;
      func_0x00010b14ecc0();
    }
    else {
      func_0x00010b150238();
      plVar11 = plVar10;
      func_0x00010b14fc14();
      plVar16 = plVar11 + 3;
      *plVar16 = extraout_x8_00;
      plVar11[4] = lVar18;
      plVar11[5] = lVar9;
      if (lVar9 != 0) {
        do {
          func_0x00010b14ea0c();
        } while (extraout_w10_01 != 0);
      }
      func_0x000105c40d40(plVar10 + 6);
      FUN_10b142c9c(plVar10 + 0xb);
      uVar2 = *(undefined1 *)((long)puVar7 + 0xf1);
      plVar10[0x11] = 0;
      plVar10[0x10] = 0;
      plVar10[0x13] = 0;
      plVar10[0x12] = 0;
      *(undefined1 *)(plVar10 + 0x14) = uVar2;
      plVar10[0x15] = (long)&UNK_10f7306cf;
      plVar10[0x16] = 0x29;
      plVar10[0x17] = 0;
      plVar10[0x19] = 0;
      plVar10[0x1a] = (long)&UNK_10f7306f9;
      plVar10[0x1b] = 0x32;
      plVar10[0x1c] = 0;
      plVar10[0x1e] = 0;
      func_0x00010b150298();
      puVar7[7] = plVar16;
      puVar7[8] = plVar10;
      plStack_90 = (long *)0x0;
      puStack_88 = (undefined8 *)0x0;
      func_0x00010b14ecc0();
      FUN_10b142294(&plStack_90);
    }
    func_0x00010b14f470();
    func_0x00010b14f01c();
    *(undefined1 *)(puVar7 + 0x1e) = extraout_w8;
    func_0x00010b14f9d4();
    if ((bool)uVar6) {
      func_0x00010b150260();
      func_0x00010b14fcec();
      func_0x00010b14f310();
      plStack_90 = plVar16;
      puStack_88 = param_2;
      func_0x00010b15024c();
      func_0x00010b14ffd4();
      if ((bool)uVar6) {
        func_0x00010b15058c();
        if (puVar14 != (undefined8 *)0x0) {
          do {
            func_0x00010b14ea74();
          } while (extraout_w11_02 != 0);
          if (extraout_x9 == 0) {
            func_0x00010b14e9e4();
            func_0x00010b14f418();
          }
        }
      }
      else {
        func_0x00010b14f144();
      }
      func_0x00010b14fbfc();
      if (puVar14 == (undefined8 *)0x0) {
        __ZNSt3__118condition_variable10notify_allEv(plVar16 + 3);
      }
      else {
        func_0x00010b14f450();
        func_0x00010b14fd2c();
        func_0x00010b14eab4();
      }
      if (puStack_88 != (undefined8 *)0x0) {
        do {
          func_0x00010b14ea74();
        } while (extraout_w11_03 != 0);
        if (extraout_x9_01 == 0) {
          func_0x00010b14e9e4();
          func_0x00010b14f418();
        }
      }
    }
    else {
      func_0x00010b14fc4c(&plStack_90);
      FUN_10b143718(puVar7 + 2,&plStack_90);
      __ZNSt13exception_ptrD1Ev(&plStack_90);
    }
    func_0x00010b1503c4();
    func_0x00010b14fc38();
    func_0x000107c279a4(puVar13);
    func_0x00010b14efd4();
  }
  return;
}



/* Entry: 10b140890; end: 10b140b8f;  */

void FUN_10b140890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined1 extraout_w8;
  code *extraout_x8;
  long extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  undefined4 extraout_w10_01;
  undefined4 extraout_var;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lStack_80;
  long lStack_78;
  undefined8 *apuStack_70 [2];
  
  puVar4 = (undefined8 *)0x108;
  __Znwm();
  *puVar4 = FUN_10b14c450;
  puVar4[1] = FUN_10b14c5f8;
  puVar4[0x1a] = param_2;
  puVar4[0x1b] = param_3;
  FUN_10b0fafd4(puVar4 + 0xb,param_4);
  lVar8 = *param_5;
  plVar6 = puVar4 + 0x1c;
  puVar4[0x1d] = param_5[1];
  *plVar6 = lVar8;
  *param_5 = 0;
  param_5[1] = 0;
  FUN_10b141d98(puVar4 + 2);
  puVar5 = puVar4 + 2;
  FUN_10b141ce8(param_1);
  func_0x00010b1501dc();
  if (((ulong)puVar5 & 1) == 0) {
    *(undefined1 *)(puVar4 + 0x20) = 0;
    uVar7 = puVar4[0x1c];
    func_0x00010b14fa64();
    lVar8 = *plVar6;
    if ((*(byte *)(lVar8 + 0x58) & 1) == 0) {
      puVar5 = *(undefined8 **)(lVar8 + 0x68);
      uVar3 = *(undefined8 **)(lVar8 + 0x70) <= puVar5;
      if ((bool)uVar3) {
        lVar9 = *(long *)(lVar8 + 0x60);
        func_0x00010b14f990();
        if (CONCAT44(extraout_var,extraout_w10_01) != 0) {
          func_0x00010552fc6c();
LAB_10b140b04:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10b140b08);
          (*pcVar2)();
        }
        func_0x00010b14e8b4(extraout_x8_00 - lVar9);
        uVar1 = extraout_x9;
        if ((bool)uVar3) {
          uVar1 = extraout_x8_01;
        }
        if (uVar1 != 0) {
          if (uVar1 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10b140b04;
          }
          __Znwm(uVar1 << 3);
        }
        func_0x00010b14ed34();
        *(long **)(lVar8 + 0x60) = plVar6;
        *(undefined8 **)(lVar8 + 0x68) = puVar5;
        *(ulong *)(lVar8 + 0x70) = uVar1;
        if (lVar9 != 0) {
          func_0x00010b150268();
        }
      }
      else {
        *puVar5 = puVar4;
        puVar5 = puVar5 + 1;
      }
      *(undefined8 **)(lVar8 + 0x68) = puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(uVar7);
      return;
    }
    func_0x00010b14f4b4();
    func_0x00010b14efec(*puVar4);
  }
  else {
    plVar6 = (long *)*plVar6;
    FUN_10b141d28();
    lVar9 = *plVar6;
    puVar4[0x1e] = lVar9;
    lVar8 = plVar6[1];
    puVar4[0x1f] = lVar8;
    if (lVar8 != 0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10 != 0);
    }
    if (lVar9 == 0) {
      func_0x00010b150478();
      FUN_10b14224c(puVar4 + 7);
      puVar4[7] = 0;
      puVar4[8] = 0;
      func_0x00010b14ecc0();
    }
    else {
      func_0x00010b150130(*(undefined8 *)(lVar9 + 8));
      (*extraout_x8)();
      FUN_10b1421f8(lVar9 + 0x90);
      FUN_10b1421f8(lVar9 + 0xb8);
      plVar6 = *(long **)(lVar9 + 8);
      lStack_80 = lVar9;
      lStack_78 = lVar8;
      if (lVar8 != 0) {
        do {
          func_0x00010b14ea0c();
        } while (extraout_w10_00 != 0);
      }
      (**(code **)(*plVar6 + 0x10))(apuStack_70);
      func_0x00010b14222c(puVar4 + 7,apuStack_70);
      func_0x0001052aad20(apuStack_70);
      func_0x0001052aacf8(&lStack_80);
      func_0x00010b150478();
    }
    func_0x00010b14f01c();
    *(undefined1 *)(puVar4 + 0x20) = extraout_w8;
    puVar5 = puVar4 + 7;
    func_0x00010b14f9d4();
    if ((bool)in_ZR) {
      apuStack_70[0] = puVar5;
      func_0x00010b14fe78();
      FUN_10b142300();
    }
    else {
      func_0x00010b14f4f4();
      apuStack_70[0] = &lStack_80;
      func_0x00010b14fe78();
      FUN_10b1420d8();
      func_0x00010b14f0a4();
    }
    func_0x00010b142400(puVar4 + 2);
    func_0x00010b14f734();
    func_0x00010b150440();
    func_0x00010b14efd4();
  }
  return;
}



/* Entry: 10b140b90; end: 10b140e87;  */

void FUN_10b140b90(undefined8 param_1,long *param_2)

{
  code *pcVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 extraout_w8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  long extraout_x9;
  long extraout_x9_00;
  ulong extraout_x9_01;
  long extraout_x10;
  int extraout_w11;
  int extraout_w11_00;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  undefined1 auStack_70 [8];
  undefined1 *puStack_68;
  
  puVar3 = (undefined8 *)0x110;
  __Znwm();
  *puVar3 = FUN_10b14c624;
  puVar3[1] = FUN_10b14c804;
  lVar9 = *param_2;
  plVar7 = puVar3 + 0x1b;
  puVar3[0x1c] = param_2[1];
  *plVar7 = lVar9;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x000105c40d24(puVar3 + 2);
  func_0x000105c407c0(auStack_b0,puVar3 + 2);
  puVar6 = auStack_b0;
  FUN_10b142444(param_1);
  uVar4 = 0;
  func_0x0001052a4560();
  func_0x00010b1501dc();
  if ((uVar4 & 1) == 0) {
    *(undefined1 *)(puVar3 + 0x21) = 0;
    func_0x00010b14fa64();
    lVar9 = *plVar7;
    if ((*(byte *)(lVar9 + 0x58) & 1) == 0) {
      puVar10 = *(undefined8 **)(lVar9 + 0x68);
      uVar2 = *(undefined8 **)(lVar9 + 0x70) <= puVar10;
      if ((bool)uVar2) {
        lVar8 = *(long *)(lVar9 + 0x60);
        func_0x00010b14f990();
        if (extraout_x10 != 0) {
          func_0x00010552fc6c();
LAB_10b140df4:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10b140df8);
          (*pcVar1)();
        }
        func_0x00010b14e8b4(extraout_x8_01 - lVar8);
        uVar4 = extraout_x9_01;
        if ((bool)uVar2) {
          uVar4 = extraout_x8_02;
        }
        if (uVar4 != 0) {
          if (uVar4 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10b140df4;
          }
          __Znwm(uVar4 << 3);
        }
        func_0x00010b14ed34();
        *(long **)(lVar9 + 0x60) = plVar7;
        *(undefined8 **)(lVar9 + 0x68) = puVar10;
        *(ulong *)(lVar9 + 0x70) = uVar4;
        if (lVar8 != 0) {
          func_0x00010b150268();
        }
      }
      else {
        *puVar10 = puVar3;
        puVar10 = puVar10 + 1;
      }
      *(undefined8 **)(lVar9 + 0x68) = puVar10;
      func_0x00010b14f4b4();
    }
    else {
      func_0x00010b14f4b4();
      func_0x00010b14efec(*puVar3);
    }
  }
  else {
    FUN_10b141d28(*plVar7);
    func_0x00010b150764();
    lVar9 = extraout_x8;
    if (extraout_x9 != 0) {
      do {
        func_0x00010b14eb14();
        lVar9 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    if (lVar9 == 0) {
      func_0x00010b14f5b4();
      FUN_10b141624(&puStack_f0);
      func_0x00010b14f638();
      if ((bool)in_ZR) {
        func_0x00010b14f804();
      }
      puVar6 = auStack_b0;
      func_0x00010b142bac(puVar3 + 7);
      func_0x00010b14f594();
      func_0x00010b14f1b8();
    }
    else {
      puVar10 = puVar3 + 0x1f;
      func_0x000105c41c1c(puVar10,lVar9 + 0x18);
      puVar5 = puVar10;
      func_0x000105c413d0();
      if (((ulong)puVar5 & 1) == 0) {
        *(undefined1 *)(puVar3 + 0x21) = 1;
        puStack_f0 = puVar3;
        puStack_e8 = puVar10;
        func_0x000105c4145c(auStack_b0,puVar10,&puStack_f0);
        if (lStack_a8 == 0) {
          return;
        }
        do {
          func_0x00010b14ea74();
        } while (extraout_w11_00 != 0);
        if (extraout_x9_00 != 0) {
          return;
        }
        func_0x00010b14e9c4();
        func_0x00010b14f3ec();
        return;
      }
      func_0x000105c407d8(puVar3 + 0x12,puVar10);
      func_0x00010b1504b8();
      func_0x00010b14fe30();
      func_0x0001052a4560(puVar10);
      func_0x00010b14f5b4();
    }
    func_0x00010b14f4a8();
    *(undefined1 *)(puVar3 + 0x21) = extraout_w8;
    func_0x00010b14ed64();
    if ((bool)in_ZR) {
      puStack_68 = puVar6;
      func_0x000105c4120c(puVar3 + 2,&puStack_68);
    }
    else {
      __ZNSt13exception_ptrC1ERKS_(auStack_70);
      puStack_68 = auStack_70;
      func_0x000105c410b8(puVar3 + 2,&puStack_68);
      __ZNSt13exception_ptrD1Ev(auStack_70);
    }
    func_0x00010b14f4dc();
    func_0x00010b14f734();
    func_0x00010b14efd4();
  }
  return;
}



/* Entry: 10b140e88; end: 10b141623;  */

void FUN_10b140e88(long *param_1,long *param_2)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 in_ZR;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined1 extraout_w8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 *extraout_x8_02;
  long extraout_x8_03;
  ulong extraout_x8_04;
  undefined8 *puVar11;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x9;
  undefined8 extraout_x9_00;
  long extraout_x9_01;
  ulong extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  int extraout_w12;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long *unaff_x25;
  long lVar15;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long lStack_78;
  long lStack_70;
  
  puVar7 = (undefined8 *)0x148;
  __Znwm();
  puVar11 = puVar7 + 0x23;
  puVar8 = puVar7 + 2;
  *puVar7 = FUN_10b14c844;
  puVar7[1] = FUN_10b14ccd8;
  lVar9 = *param_2;
  plVar10 = puVar7 + 0x25;
  puVar7[0x26] = param_2[1];
  *plVar10 = lVar9;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_10b142c80();
  func_0x00010b1502a0();
  func_0x00010b14f7d8();
  func_0x00010b1505b4();
  *puVar8 = &PTR_FUN_110cbe468;
  puVar8 = puVar8 + 3;
  func_0x00010b14fdc4(puVar8);
  func_0x00010b1502f4();
  *(undefined1 *)(param_2 + 0xb) = 0;
  *(undefined1 *)(param_2 + 0x15) = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x16] = 0;
  *param_1 = (long)puVar8;
  param_1[1] = (long)param_2;
  puVar7[0x21] = puVar8;
  puVar7[0x22] = param_2;
  do {
    cVar1 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(unaff_x25,0x10);
    if (bVar5) {
      *unaff_x25 = *unaff_x25 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  puVar7[0x12] = 0;
  puVar7[0x13] = 0;
  puVar7[0x1b] = 0;
  puVar7[0x1c] = 0;
  func_0x00010b150324(&puStack_d0);
  func_0x0001052a4874(puVar7 + 0x12,&puStack_d0);
  func_0x00010b14fa74();
  func_0x00010b14fc30();
  func_0x000107c27b48(puVar7 + 0x27);
  func_0x000107c27b4c(&puStack_110,puVar7[0x27]);
  puVar7[0x21] = 0;
  puVar7[0x22] = 0;
  plStack_c0 = (long *)puVar7[0x27];
  puVar7[0x27] = 0;
  puStack_d0 = puVar8;
  plStack_c8 = param_2;
  func_0x00010b14fc54();
  __ZNSt3__15mutex4lockEv();
  iVar6 = (int)puVar7[0x12];
  func_0x0001052a4898();
  if (iVar6 == 0) {
    func_0x00010b14f254();
    func_0x00010b150024(&PTR_FUN_110cbe4b8);
    plVar2 = plStack_c0;
    puStack_d0 = (undefined8 *)0x0;
    plStack_c8 = (long *)0x0;
    plStack_c0 = (long *)0x0;
    func_0x00010b1506a0(plVar2);
    if (extraout_x8 != 0) {
      func_0x00010b14e9b4();
    }
  }
  else {
    func_0x0001052a4874(&lStack_78,puVar7 + 0x12);
  }
  func_0x00010b14fd8c();
  if (lStack_78 != 0) {
    puVar7[0x1d] = lStack_78;
    puVar7[0x1e] = lStack_70;
    if (lStack_70 != 0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10 != 0);
    }
    FUN_10b142f74(&puStack_d0);
    func_0x00010b14fe18();
  }
  puVar7[0x20] = uStack_108;
  puVar7[0x1f] = puStack_110;
  puStack_110 = (undefined8 *)0x0;
  uStack_108 = 0;
  func_0x0001052a4ab0(&lStack_78);
  FUN_10b143278(&puStack_d0);
  func_0x00010b14f24c();
  lVar9 = puVar7[0x27];
  puVar7[0x27] = 0;
  if (lVar9 != 0) {
    func_0x00010b14e9f4();
  }
  func_0x0001052a4ab0(puVar7 + 0x12);
  func_0x000107c27b58(puVar7 + 0x1f);
  puVar8 = puVar7 + 0x21;
  func_0x00010b143298();
  func_0x00010b1502a8();
  func_0x00010b1501dc();
  if (((ulong)puVar8 & 1) == 0) {
    *(undefined1 *)(puVar7 + 0x28) = 0;
    __ZNSt3__115recursive_mutex4lockEv(puVar7[0x25]);
    lVar9 = *plVar10;
    if ((*(byte *)(lVar9 + 0x58) & 1) != 0) {
      func_0x00010b14fcf4();
      func_0x00010b14efec(*puVar7);
      return;
    }
    puVar11 = *(undefined8 **)(lVar9 + 0x68);
    bVar5 = *(undefined8 **)(lVar9 + 0x70) <= puVar11;
    if (bVar5) {
      lVar13 = *(long *)(lVar9 + 0x60);
      lVar14 = (long)puVar11 - lVar13;
      if ((lVar14 >> 3) + 1U >> 0x3d != 0) {
        func_0x00010552fc6c();
LAB_10b141448:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10b14144c);
        (*pcVar4)();
      }
      func_0x00010b14e8b4((long)*(undefined8 **)(lVar9 + 0x70) - lVar13);
      uVar12 = extraout_x9_02;
      if (bVar5) {
        uVar12 = extraout_x8_04;
      }
      if (uVar12 == 0) {
        lVar15 = 0;
      }
      else {
        if (uVar12 >> 0x3d != 0) {
          func_0x000104bd35f4();
          goto LAB_10b141448;
        }
        lVar15 = uVar12 << 3;
        __Znwm();
      }
      puVar11 = (undefined8 *)(lVar15 + lVar14);
      puVar8 = puVar11 + 1;
      *puVar11 = puVar7;
      _memcpy(puVar11 + -(lVar14 >> 3),lVar13,lVar14);
      *(undefined8 **)(lVar9 + 0x60) = puVar11 + -(lVar14 >> 3);
      *(undefined8 **)(lVar9 + 0x68) = puVar8;
      *(ulong *)(lVar9 + 0x70) = lVar15 + uVar12 * 8;
      if (lVar13 != 0) {
        __ZdlPv(lVar13);
      }
    }
    else {
      puVar8 = puVar11 + 1;
      *puVar11 = puVar7;
    }
    *(undefined8 **)(lVar9 + 0x68) = puVar8;
    func_0x00010b14fcf4();
    return;
  }
  FUN_10b141d28(*plVar10);
  func_0x00010b150750();
  lVar9 = extraout_x8_00;
  if (extraout_x9 != 0) {
    do {
      func_0x00010b14eb14();
      lVar9 = extraout_x8_01;
    } while (extraout_w11 != 0);
  }
  if (lVar9 == 0) {
    func_0x00010b14f59c();
    FUN_10b141624(&puStack_110);
    func_0x00010b14f638();
    if ((bool)in_ZR) {
      func_0x00010b14f804();
    }
    func_0x00010b14ff5c();
    FUN_10b14347c(puVar7 + 7,&puStack_d0);
    *(undefined1 *)(puVar7 + 0x10) = 1;
    *(undefined1 *)(puVar7 + 0x11) = 1;
    func_0x00010b14f594();
    func_0x00010b14f1b8();
LAB_10b1412a0:
    func_0x00010b14f4a8();
    *(undefined1 *)(puVar7 + 0x28) = extraout_w8;
    func_0x00010b14f45c();
    if ((bool)in_ZR) {
      func_0x00010b14f900();
    }
    else {
      func_0x00010b14f0ac(&puStack_d0);
      func_0x00010b1503cc();
      __ZNSt13exception_ptrD1Ev(&puStack_d0);
    }
    func_0x00010b14f5cc();
    func_0x00010b14f734();
    func_0x00010b14efd4();
    return;
  }
  func_0x00010b1502a0();
  FUN_10b1432e0(puVar7 + 0x1f,puVar11);
  uVar12 = puVar7[0x1f];
  puStack_d0 = (undefined8 *)(uVar12 + 0x80);
  plStack_c8 = (long *)CONCAT71(plStack_c8._1_7_,1);
  __ZNSt3__15mutex4lockEv();
  func_0x0001052a4898();
  func_0x000107c2798c(&puStack_d0);
  func_0x0001052a4ab0(puVar7 + 0x1f);
  if ((uVar12 & 1) != 0) {
    puStack_d0 = (undefined8 *)0x0;
    plStack_c8 = (long *)0x0;
    puVar7[0x1b] = 0;
    puVar7[0x1c] = 0;
    func_0x00010b150324(&puStack_110);
    func_0x0001052a4874(&puStack_d0,&puStack_110);
    func_0x00010b14f274();
    func_0x00010b14fc30();
    puVar7[0x1d] = puStack_d0;
    puVar7[0x1e] = plStack_c8;
    if (plStack_c8 == (long *)0x0) {
      uStack_108 = 0;
      puVar11 = puStack_d0;
    }
    else {
      do {
        func_0x00010b14ec7c();
        uVar3 = extraout_x9_00;
      } while (extraout_w12 != 0);
      do {
        uStack_108 = uVar3;
        func_0x00010b14ee64();
        puVar11 = extraout_x8_02;
        uVar3 = uStack_108;
      } while (extraout_w11_00 != 0);
    }
    puStack_110 = puVar11;
    func_0x0001052a4b5c(puVar7 + 0x12,&puStack_110);
    func_0x00010b14f274();
    func_0x00010b14fe18();
    func_0x00010b14fa74();
    func_0x00010b14ff5c();
    func_0x00010b1504ac();
    func_0x0001052a4cf0(puVar7 + 0x12);
    func_0x00010b1502a8();
    func_0x00010b14f59c();
    goto LAB_10b1412a0;
  }
  *(undefined1 *)(puVar7 + 0x28) = 1;
  __ZNSt3__112__get_sp_mutEPKv(puVar11);
  func_0x00010b14fcec();
  lVar9 = puVar7[0x23];
  lVar13 = puVar7[0x24];
  *puVar11 = 0;
  puVar7[0x24] = 0;
  __ZNSt3__18__sp_mut6unlockEv(param_2);
  plVar10 = (long *)0x28;
  __Znwm();
  func_0x00010b14fb40();
  func_0x00010b1502c8();
  plVar10[4] = plVar10[2];
  plVar10[3] = plVar10[1];
  if (plVar10[2] == 0) {
    *plVar10 = (long)&PTR_DAT_1107e8958;
LAB_10b1412e8:
    bVar5 = true;
  }
  else {
    do {
      func_0x00010b14eb14();
    } while (extraout_w11_01 != 0);
    *plVar10 = extraout_x8_03 + 0x10;
    if (plVar10[4] == 0) goto LAB_10b1412e8;
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10_00 != 0);
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10_01 != 0);
    do {
      func_0x00010b14ea74();
    } while (extraout_w11_02 != 0);
    if (extraout_x9_01 == 0) {
      func_0x00010b14f32c();
      func_0x00010b150290();
    }
    bVar5 = false;
  }
  lVar14 = lVar9 + 0x80;
  puStack_d0 = puVar7;
  plStack_c8 = puVar11;
  plStack_c0 = plVar10;
  __ZNSt3__15mutex4lockEv();
  if ((*(byte *)(lVar9 + 0x48) & 1) == 0) {
    puStack_110 = (undefined8 *)0x0;
    lVar15 = *(long *)(lVar9 + 0xc0);
    func_0x00010b14f0a4();
    if (lVar15 == 0) {
      func_0x00010b14f254();
      func_0x00010b150024(&PTR_FUN_110cbe4f8);
      *(long **)(lVar14 + 0x18) = plVar10;
      lVar15 = *(long *)(lVar9 + 200);
      *(long *)(lVar9 + 200) = lVar14;
      if (lVar15 != 0) {
        func_0x00010b14e9b4();
      }
      __ZNSt3__15mutex6unlockEv(lVar9 + 0x80);
      if (lVar13 != 0) {
        do {
          func_0x00010b14ea74();
        } while (extraout_w11_04 != 0);
        if (extraout_x9_04 == 0) {
          func_0x00010b14e970();
          func_0x00010b14f25c();
        }
      }
      goto LAB_10b141370;
    }
  }
  __ZNSt3__15mutex6unlockEv(lVar9 + 0x80);
  if (lVar13 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10_02 != 0);
  }
  FUN_10b14331c(&puStack_d0,lVar9,lVar13);
  if (lVar13 != 0) {
    do {
      func_0x00010b14f794();
    } while (extraout_w10_03 != 0);
    if (extraout_x8_05 == 0) {
      func_0x00010b14e970();
      func_0x00010b14f25c();
    }
    do {
      func_0x00010b14f794();
    } while (extraout_w10_04 != 0);
    if (extraout_x8_06 == 0) {
      func_0x00010b14e970();
      func_0x00010b14f25c();
    }
  }
  func_0x00010b14fd04();
LAB_10b141370:
  if (bVar5) {
    return;
  }
  do {
    func_0x00010b14ea74();
  } while (extraout_w11_03 != 0);
  if (extraout_x9_03 != 0) {
    return;
  }
  func_0x00010b14f32c();
  func_0x00010b150290();
  return;
}



/* Entry: 10b141624; end: 10b1416b7;  */

void FUN_10b141624(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010b14f3c4();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_38);
  func_0x000107c278b8(&uStack_58,&UNK_10f7305b6);
  uVar1 = uStack_28;
  uStack_40 = 1;
  param_1[1] = uStack_30;
  *param_1 = uStack_38;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  param_1[2] = uVar1;
  param_1[3] = 1;
  param_1[5] = uStack_50;
  param_1[4] = uStack_58;
  param_1[6] = uStack_48;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  func_0x000107c279a4(&uStack_58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_38);
  return;
}



/* Entry: 10b1416b8; end: 10b14171b;  */

bool FUN_10b1416b8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x00010b14f03c();
  do {
    lVar2 = uStack_48;
    if (lVar2 == uStack_40) break;
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    FUN_10b155ea0(uVar1,lVar2);
    uStack_48 = lVar2 + 0x10;
  } while ((int)uVar1 == 0);
  func_0x00010b14f5dc();
  return lVar2 != uStack_40;
}



/* Entry: 10b14171c; end: 10b14177f;  */

bool FUN_10b14171c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x00010b14f03c();
  do {
    lVar2 = uStack_48;
    if (lVar2 == uStack_40) break;
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    FUN_10b1560cc(uVar1,lVar2);
    uStack_48 = lVar2 + 0x10;
  } while ((int)uVar1 == 0);
  func_0x00010b14f5dc();
  return lVar2 != uStack_40;
}



/* Entry: 10b141780; end: 10b141783;  */

undefined8 * FUN_10b141780(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbe0b0;
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 0xe);
  func_0x0001052a0348(param_1 + 0xb);
  func_0x00010b1257f8(param_1 + 9);
  FUN_10b12878c(param_1 + 7);
  func_0x0001052a1398(param_1 + 5);
  func_0x00010b12487c(param_1 + 3);
  func_0x00010b1446d4(param_1 + 1);
  return param_1;
}



/* Entry: 10b141784; end: 10b141797;  */

void FUN_10b141784(void)

{
  func_0x00010b14408c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b141798; end: 10b1417c3;  */

void FUN_10b141798(undefined8 *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_2 + 0x60);
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  param_1[1] = *(undefined8 *)(param_2 + 0x60);
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010b14ea0c(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10b1417c4; end: 10b1417d7;  */

void FUN_10b1417c4(void)

{
  FUN_10b141860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1417d8; end: 10b1417db;  */

long FUN_10b1417d8(long param_1)

{
  long extraout_x8;
  
  func_0x00010b14f004(&PTR_FUN_110cbe1c8);
  if (extraout_x8 != 0) {
    func_0x00010b14eb24();
    func_0x00010b14fb60();
    FUN_10b1418c8();
    func_0x00010b14f244();
    func_0x00010b14f4cc();
    func_0x00010b14f5d4();
  }
  func_0x0001052a18c8(param_1 + 0x18);
  func_0x0001052a18c8();
  return param_1;
}



/* Entry: 10b1417dc; end: 10b1417ef;  */

void FUN_10b1417dc(void)

{
  FUN_10b141860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1417f0; end: 10b1417f3;  */

void FUN_10b1417f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbe1e8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1417f4; end: 10b141807;  */

void FUN_10b1417f4(void)

{
  FUN_10b141850();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b141808; end: 10b14184f;  */

long FUN_10b141808(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b150014();
  if (param_1 != 0) {
    func_0x00010b14e9f4();
  }
  func_0x00010b150218();
  func_0x00010b150210();
  func_0x00010b150208();
  if (*(char *)(unaff_x19 + 0x28) == '\x01') {
    lVar1 = unaff_x19 + 0x18;
    func_0x0001005f1e70();
    if (lVar1 != 0) {
      func_0x0001000df548();
    }
    return unaff_x19;
  }
  return param_1;
}



/* Entry: 10b141850; end: 10b14185f;  */

void FUN_10b141850(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b141860; end: 10b1418c7;  */

long FUN_10b141860(long param_1)

{
  long extraout_x8;
  
  func_0x00010b14f004(&PTR_FUN_110cbe1c8);
  if (extraout_x8 != 0) {
    func_0x00010b14eb24();
    func_0x00010b14fb60();
    FUN_10b1418c8();
    func_0x00010b14f244();
    func_0x00010b14f4cc();
    func_0x00010b14f5d4();
  }
  func_0x0001052a18c8(param_1 + 0x18);
  func_0x0001052a18c8();
  return param_1;
}



/* Entry: 10b1418c8; end: 10b14195b;  */

void FUN_10b1418c8(void)

{
  long unaff_x19;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  long lStack_30;
  
  func_0x00010b14ede4();
  func_0x00010b14ee9c();
  func_0x0001052a15fc();
  func_0x00010b14f55c();
  func_0x0001052a1650();
  func_0x0001052a18c8(auStack_40);
  func_0x0001052a18c8(auStack_50);
  func_0x00010b14fa04();
  func_0x00010b14fcb4(lStack_30 + 0x88);
  func_0x00010b14f064();
  if (unaff_x19 == 0) {
    func_0x00010b14f8a4();
  }
  else {
    func_0x00010b14f20c();
    func_0x00010b14ec30();
    func_0x00010b14e920();
  }
  func_0x00010b150314();
  return;
}



/* Entry: 10b14195c; end: 10b141983;  */

void FUN_10b14195c(void)

{
  func_0x00010b14ec8c();
  func_0x00010b14f4e4();
  func_0x00010b14e948();
  func_0x00010b14eff4();
  return;
}



/* Entry: 10b141984; end: 10b141a2f;  */

void FUN_10b141984(void)

{
  func_0x00010b14e8d0();
  func_0x00010b1419a8();
  return;
}



/* Entry: 10b141a30; end: 10b141a53;  */

void FUN_10b141a30(void)

{
  undefined1 in_ZR;
  
  func_0x00010b150148();
  if ((bool)in_ZR) {
    func_0x000107c27f08();
  }
  else {
    __ZNSt13exception_ptrD1Ev();
  }
  return;
}



/* Entry: 10b141a54; end: 10b141b2f;  */

void FUN_10b141a54(long *param_1)

{
  long lVar1;
  long lVar2;
  int extraout_w10;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x00010b14f67c();
  lVar1 = *param_1;
  if ((lVar1 == 0) || (___dynamic_cast(lVar1,&PTR_DAT_110874bf0,&PTR_DAT_110cc9070,0), lVar1 == 0))
  {
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
  }
  else {
    lVar2 = *(long *)(unaff_x20 + 8);
    *unaff_x19 = lVar1;
    unaff_x19[1] = lVar2;
    if (lVar2 != 0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10 != 0);
    }
  }
  return;
}



/* Entry: 10b141b30; end: 10b141ba7;  */

void FUN_10b141b30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = param_2[2];
  uVar2 = *(undefined8 *)((long)param_2 + 0x15);
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined8 *)((long)param_1 + 0x15) = uVar2;
  param_1[2] = uVar1;
  *(undefined1 *)(param_1 + 7) = 0;
  if (*(char *)(param_2 + 7) == '\x01') {
    uVar2 = param_2[5];
    uVar1 = param_2[4];
    param_1[6] = param_2[6];
    param_1[5] = uVar2;
    param_1[4] = uVar1;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[4] = 0;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  uVar1 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar1;
  param_2[9] = 0;
  param_2[10] = 0;
  uVar1 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar1;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  return;
}



/* Entry: 10b141ba8; end: 10b141bdf;  */

long FUN_10b141ba8(long param_1)

{
  func_0x000107c279a4(param_1 + 0x100);
  func_0x000107c279a4(param_1 + 0xe0);
  func_0x00010b141af8(param_1 + 0x78);
  func_0x0001001148fc(param_1 + 0x58);
  func_0x0001001148fc(param_1 + 0x38);
  func_0x0001000e30f4(param_1 + 0x20);
  return param_1;
}



/* Entry: 10b141be0; end: 10b141c9f;  */

void FUN_10b141be0(void)

{
  func_0x000107c278b8();
  func_0x00010b14fccc();
  return;
}



/* Entry: 10b141ca0; end: 10b141ce7;  */

void FUN_10b141ca0(long param_1)

{
  func_0x00010b14f1cc();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b141ce8; end: 10b141cff;  */

void FUN_10b141ce8(void)

{
  FUN_10b1421bc();
  return;
}



/* Entry: 10b141d00; end: 10b141d27;  */

undefined1 FUN_10b141d00(void)

{
  undefined1 uVar1;
  long *unaff_x19;
  
  func_0x00010b14ecb0();
  uVar1 = *(undefined1 *)(*unaff_x19 + 0x58);
  func_0x00010b14f014();
  return uVar1;
}



/* Entry: 10b141d28; end: 10b141d63;  */

long FUN_10b141d28(long param_1)

{
  code *pcVar1;
  
  if ((*(byte *)(param_1 + 0x50) & 1) != 0) {
    return param_1 + 0x40;
  }
  func_0x00010b14ed8c();
  func_0x00010b14f374();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b141d5c);
  (*pcVar1)();
}



/* Entry: 10b141d64; end: 10b141d97;  */

void FUN_10b141d64(void)

{
  func_0x00010b14f2cc();
  func_0x00010b14f710();
  func_0x00010b1422b8();
  func_0x00010b14efe4();
  return;
}



/* Entry: 10b141d98; end: 10b141dd7;  */

void FUN_10b141d98(long param_1)

{
  func_0x00010b141db4();
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 10b141dd8; end: 10b141e17;  */

undefined8 FUN_10b141dd8(undefined8 param_1)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010b14fff4(&UNK_110cbe2a0);
  func_0x00010b141e30();
  func_0x00010b14ff84();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10 != 0);
  }
  return param_1;
}



/* Entry: 10b141e18; end: 10b141e1b;  */

long FUN_10b141e18(long param_1)

{
  long extraout_x8;
  
  func_0x00010b14f004(&PTR_FUN_110cbe2b0);
  if (extraout_x8 != 0) {
    func_0x00010b14ed54();
    func_0x00010b14f444();
    FUN_10b142084();
    func_0x00010b14f5d4();
  }
  FUN_10b141ff4(param_1 + 0x18);
  FUN_10b141ff4();
  return param_1;
}



/* Entry: 10b141e1c; end: 10b141e4b;  */

void FUN_10b141e1c(void)

{
  FUN_10b142028();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b141e4c; end: 10b141e4f;  */

long FUN_10b141e4c(long param_1)

{
  long extraout_x8;
  
  func_0x00010b14f004(&PTR_FUN_110cbe2b0);
  if (extraout_x8 != 0) {
    func_0x00010b14ed54();
    func_0x00010b14f444();
    FUN_10b142084();
    func_0x00010b14f5d4();
  }
  FUN_10b141ff4(param_1 + 0x18);
  FUN_10b141ff4();
  return param_1;
}



/* Entry: 10b141e50; end: 10b141e63;  */

void FUN_10b141e50(void)

{
  FUN_10b142028();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b141e64; end: 10b141eef;  */

void FUN_10b141e64(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  func_0x00010b14ea9c();
  func_0x00010b14fb78();
  FUN_10b141ef0();
  *puStack_30 = &PTR_FUN_110cbe2d0;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = 0;
  puStack_30[4] = 0;
  puStack_30[5] = 0;
  func_0x00010b150514();
  *(undefined8 *)(extraout_x8 + 0x30) = extraout_x9;
  uVar1 = 0;
  uVar2 = 0;
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  *(undefined8 *)(extraout_x8 + 0x40) = 0;
  *(undefined8 *)(extraout_x8 + 0x38) = 0;
  *(undefined8 *)(extraout_x8 + 0x50) = 0;
  *(undefined8 *)(extraout_x8 + 0x48) = 0;
  func_0x00010b150508();
  *(undefined8 *)(extraout_x8_00 + 0x58) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x60) = extraout_x9_00;
  *(ulong *)(extraout_x8_00 + 0x70) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(extraout_x8_00 + 0x68) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(ulong *)(extraout_x8_00 + 0x80) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(extraout_x8_00 + 0x78) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(ulong *)(extraout_x8_00 + 0x90) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(extraout_x8_00 + 0x88) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(ulong *)(extraout_x8_00 + 0xa0) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(extraout_x8_00 + 0x98) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(undefined8 *)(extraout_x8_00 + 0xa8) = 0;
  func_0x00010b14ea84();
  FUN_10b142018();
  func_0x00010b14e980(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x00010b14fb6c();
  FUN_10b141f10();
  func_0x00010b14fb14();
  return;
}



/* Entry: 10b141ef0; end: 10b141f0f;  */

void FUN_10b141ef0(void)

{
  func_0x00010b14fb6c();
  FUN_10b141f10();
  func_0x00010b14fb14();
  return;
}



/* Entry: 10b141f10; end: 10b141f3b;  */

void FUN_10b141f10(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x1745d1745d1745e) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xb0);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110cbe2d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b141f3c; end: 10b141f3f;  */

void FUN_10b141f3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbe2d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b141f40; end: 10b141f53;  */

void FUN_10b141f40(void)

{
  func_0x00010b141f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b141f54; end: 10b141f6b;  */

void FUN_10b141f54(long param_1)

{
  undefined1 in_ZR;
  
  func_0x00010b141fac(param_1 + 0xa8);
  __ZNSt13exception_ptrD1Ev(param_1 + 0xa0);
  __ZNSt3__15mutexD1Ev(param_1 + 0x60);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x30);
  func_0x00010b150148(param_1 + 0x18);
  if ((bool)in_ZR) {
    func_0x0001052aad20();
  }
  return;
}



/* Entry: 10b141f6c; end: 10b141fcf;  */

void FUN_10b141f6c(long param_1)

{
  undefined1 in_ZR;
  
  func_0x00010b141fac(param_1 + 0x90);
  __ZNSt13exception_ptrD1Ev(param_1 + 0x88);
  __ZNSt3__15mutexD1Ev(param_1 + 0x48);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x18);
  func_0x00010b150148(param_1);
  if ((bool)in_ZR) {
    func_0x0001052aad20();
  }
  return;
}



/* Entry: 10b141fd0; end: 10b141ff3;  */

void FUN_10b141fd0(void)

{
  undefined1 in_ZR;
  
  func_0x00010b150148();
  if ((bool)in_ZR) {
    func_0x0001052aad20();
  }
  return;
}



/* Entry: 10b141ff4; end: 10b142017;  */

void FUN_10b141ff4(long param_1)

{
  func_0x00010b14f1cc();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b142018; end: 10b142027;  */

void FUN_10b142018(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b142028; end: 10b142083;  */

long FUN_10b142028(long param_1)

{
  long extraout_x8;
  
  func_0x00010b14f004(&PTR_FUN_110cbe2b0);
  if (extraout_x8 != 0) {
    func_0x00010b14ed54();
    func_0x00010b14f444();
    FUN_10b142084();
    func_0x00010b14f5d4();
  }
  FUN_10b141ff4(param_1 + 0x18);
  FUN_10b141ff4();
  return param_1;
}


